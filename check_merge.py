#!/usr/bin/env python3
"""
check_merge.py -- Konsistenzpruefer fuer den FRLG-Kanto / HnS-Johto Merge
=========================================================================

Findet genau die Fehlerklasse, die der Compiler NICHT sieht:
  * Flags/Vars, die auf 0 gestubbt sind, aber in aktiven Skripten benutzt werden
  * Vars, die sich zwei Namensraeume teilen (stiller State-Clobber)
  * Warps, die ins Leere oder in eine deaktivierte Map zeigen
  * Connections, die nur einseitig eingetragen sind
  * Layouts, die von aktiven Maps referenziert, aber nicht aktiviert sind
  * MAPSECs, die im aktuellen Build auf 0 kollabieren
  * Maps ohne Wild-Encounter-Tabelle (nur informativ)

Aufruf (im Repo-Wurzelverzeichnis):
    python3 check_merge.py                 # prueft MAP_VERSION=hns
    python3 check_merge.py --version frlg
    python3 check_merge.py --only warps,flags
    python3 check_merge.py --quiet         # nur Zusammenfassung

Exit-Code 1, wenn Fehler (nicht Warnungen) gefunden wurden -> CI-tauglich.
"""

import argparse
import json
import os
import re
import sys
from collections import defaultdict

MAPS_DIR = "data/maps"
LAYOUTS = "data/layouts/layouts.json"
WILD = "src/data/wild_encounters.json"
REGION_MAP = "src/data/region_map/region_map_sections.json"
EVENT_SCRIPTS = "data/event_scripts.s"

DEFINE_RE = re.compile(r"^\s*#define\s+(\w+)\s+(0x[0-9A-Fa-f]+|\d+)\s*(?://.*)?$")

# ---------------------------------------------------------------- utilities

class Report:
    def __init__(self, quiet=False):
        self.errors = []
        self.warnings = []
        self.notes = []
        self.quiet = quiet

    def error(self, section, msg):
        self.errors.append((section, msg))

    def warn(self, section, msg):
        self.warnings.append((section, msg))

    def note(self, section, msg):
        self.notes.append((section, msg))

    def dump(self):
        for label, bucket in (("FEHLER", self.errors),
                              ("WARNUNG", self.warnings),
                              ("HINWEIS", self.notes)):
            if not bucket:
                continue
            if self.quiet and label == "HINWEIS":
                continue
            print(f"\n===== {label} ({len(bucket)}) =====")
            by_section = defaultdict(list)
            for section, msg in bucket:
                by_section[section].append(msg)
            for section, msgs in by_section.items():
                print(f"\n-- {section} --")
                shown = msgs if not self.quiet else msgs[:10]
                for m in shown:
                    print(f"   {m}")
                if len(msgs) > len(shown):
                    print(f"   ... und {len(msgs) - len(shown)} weitere")
        print("\n===== ZUSAMMENFASSUNG =====")
        print(f"Fehler:    {len(self.errors)}")
        print(f"Warnungen: {len(self.warnings)}")
        print(f"Hinweise:  {len(self.notes)}")


def parse_defines(path):
    """Liest #define NAME WERT aus einem Header. Nur numerische Literale."""
    out = {}
    if not os.path.exists(path):
        return out
    with open(path, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            m = DEFINE_RE.match(line)
            if m:
                out[m.group(1)] = int(m.group(2), 0)
    return out


def load_maps():
    maps = {}
    for entry in sorted(os.listdir(MAPS_DIR)):
        path = os.path.join(MAPS_DIR, entry, "map.json")
        if not os.path.exists(path):
            continue
        try:
            with open(path, encoding="utf-8") as fh:
                data = json.load(fh)
        except Exception as exc:
            print(f"WARN: {path} nicht lesbar: {exc}", file=sys.stderr)
            continue
        data.setdefault("game_version", "emerald")
        data["_dir"] = entry
        maps[data["name"]] = data
    return maps


# ---------------------------------------------------------------- checks

def check_layouts(maps, active_names, version, rep):
    if not os.path.exists(LAYOUTS):
        return
    with open(LAYOUTS, encoding="utf-8") as fh:
        data = json.load(fh)
    active_layouts = set()
    all_layouts = set()
    for lay in data.get("layouts", []):
        if not isinstance(lay, dict) or "id" not in lay:
            continue
        all_layouts.add(lay["id"])
        if lay.get("game_version", "emerald") == version:
            active_layouts.add(lay["id"])
        for key in ("border_filepath", "blockdata_filepath"):
            path = lay.get(key)
            if path and not os.path.exists(path):
                rep.warn("layouts",
                         f"{lay['id']}: {key} fehlt auf der Platte ({path})")
    for name in sorted(active_names):
        layout = maps[name].get("layout")
        if not layout:
            rep.error("layouts", f"{name}: kein Layout gesetzt")
        elif layout not in all_layouts:
            rep.error("layouts", f"{name}: Layout {layout} existiert nicht")
        elif layout not in active_layouts:
            rep.error("layouts",
                      f"{name}: Layout {layout} ist im Build '{version}' "
                      f"NICHT aktiv -> Map laedt schwarz")


def check_warps(maps, active_names, rep):
    id_to_name = {m["id"]: n for n, m in maps.items() if "id" in m}
    active_ids = {maps[n]["id"] for n in active_names if "id" in maps[n]}
    for name in sorted(active_names):
        m = maps[name]
        for i, warp in enumerate(m.get("warp_events") or []):
            dest = warp.get("dest_map")
            if dest in (None, "MAP_NONE", "MAP_DYNAMIC"):
                continue
            if dest not in id_to_name:
                rep.error("warps",
                          f"{name} Warp #{i} -> {dest} (Map-ID existiert nicht)")
                continue
            if dest not in active_ids:
                rep.error("warps",
                          f"{name} Warp #{i} -> {dest} "
                          f"(Ziel im aktuellen Build deaktiviert)")
                continue
            target = maps[id_to_name[dest]]
            n_warps = len(target.get("warp_events") or [])
            try:
                wid = int(warp.get("dest_warp_id", 0))
            except (TypeError, ValueError):
                rep.warn("warps",
                         f"{name} Warp #{i}: dest_warp_id nicht numerisch "
                         f"({warp.get('dest_warp_id')!r})")
                continue
            if wid >= n_warps:
                rep.error("warps",
                          f"{name} Warp #{i} -> {dest} Warp-ID {wid}, "
                          f"aber Ziel hat nur {n_warps} Warps")


OPPOSITE = {"up": "down", "down": "up", "left": "right", "right": "left"}


def check_connections(maps, active_names, rep):
    id_to_name = {m["id"]: n for n, m in maps.items() if "id" in m}
    active_ids = {maps[n]["id"] for n in active_names if "id" in maps[n]}
    for name in sorted(active_names):
        m = maps[name]
        my_id = m.get("id")
        for conn in m.get("connections") or []:
            dest = conn.get("map")
            direction = conn.get("direction")
            if dest not in id_to_name:
                rep.error("connections",
                          f"{name} {direction} -> {dest} (Map-ID existiert nicht)")
                continue
            if dest not in active_ids:
                rep.error("connections",
                          f"{name} {direction} -> {dest} "
                          f"(Ziel im aktuellen Build deaktiviert)")
                continue
            if direction in ("dive", "emerge"):
                continue
            target = maps[id_to_name[dest]]
            back = [c for c in (target.get("connections") or [])
                    if c.get("map") == my_id
                    and c.get("direction") == OPPOSITE.get(direction)]
            if not back:
                rep.error("connections",
                          f"{name} {direction} -> {dest}, aber {dest} hat "
                          f"keine Gegenrichtung ({OPPOSITE.get(direction)}) zurueck")
                continue
            if back[0].get("offset") != -conn.get("offset", 0):
                rep.warn("connections",
                         f"{name} <-> {dest}: Offsets nicht gespiegelt "
                         f"({conn.get('offset')} vs {back[0].get('offset')}) "
                         f"-> Kartenrand versetzt")


def check_mapsecs(maps, active_names, version, rep):
    if not os.path.exists(REGION_MAP):
        return
    with open(REGION_MAP, encoding="utf-8") as fh:
        data = json.load(fh)
    hns_ids = {s["id"] for s in data.get("hns_map_sections", [])}
    hoenn = {s["id"] for s in data.get("map_sections", [])}
    in_hns = {s["id"] for s in data.get("map_sections", []) if "in_hns" in s}
    if version == "hns":
        valid = hns_ids | in_hns
    else:
        valid = hoenn
    seen = defaultdict(list)
    for name in sorted(active_names):
        sec = maps[name].get("region_map_section")
        if not sec:
            continue
        seen[sec].append(name)
        if sec not in valid:
            rep.error("mapsecs",
                      f"{name}: {sec} ist im Build '{version}' nicht definiert "
                      f"-> kollabiert auf 0 (falscher Kartenname/Flugpunkt)")
    for sec, names in sorted(seen.items()):
        versions = {maps[n].get("game_version") for n in names}
        if len(versions) > 1:
            rep.note("mapsecs",
                     f"{sec} wird von mehreren Versionen benutzt: "
                     f"{', '.join(sorted(versions))} ({len(names)} Maps)")


def collect_script_symbols(active_names, maps):
    """Sammelt alle FLAG_/VAR_-Bezeichner aus den Skripten aktiver Maps."""
    used_flags = defaultdict(set)
    used_vars = defaultdict(set)
    token = re.compile(r"\b(FLAG_[A-Z0-9_]+|VAR_[A-Z0-9_]+)\b")
    for name in active_names:
        path = os.path.join(MAPS_DIR, maps[name]["_dir"], "scripts.inc")
        if not os.path.exists(path):
            continue
        with open(path, encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        for tok in token.findall(text):
            if tok.startswith("FLAG_"):
                used_flags[tok].add(name)
            else:
                used_vars[tok].add(name)
    return used_flags, used_vars


def check_flags(used_flags, version, rep):
    header = ("include/constants/flags_hns.h" if version == "hns"
              else "include/constants/flags_frlg.h")
    defines = parse_defines(header)
    defines.update(parse_defines("include/constants/flags.h"))
    extra = parse_defines("include/constants/flags_hoenn_de.h")
    for key, val in extra.items():
        if val != 0:
            defines[key] = val
    for flag in sorted(used_flags):
        val = defines.get(flag)
        if val is None:
            continue  # evtl. via Makro definiert -- Linker faengt das ab
        if val == 0:
            users = sorted(used_flags[flag])
            rep.error("flags-stub",
                      f"{flag} ist auf 0 gestubbt, wird aber von "
                      f"{len(users)} Map(s) benutzt, z.B. {users[0]}")
        elif val <= 0x1F:
            rep.warn("flags-temp",
                     f"{flag} = {hex(val)} liegt im TEMP-Bereich "
                     f"(wird bei jedem Kartenwechsel geloescht)")


def check_var_collisions(used_vars, rep):
    frlg = parse_defines("include/constants/vars_frlg.h")
    hns = parse_defines("include/constants/vars_hns.h")
    hoenn = parse_defines("include/constants/vars_hoenn_de.h")
    combined_hns = dict(hns)
    combined_hns.update({k: v for k, v in hoenn.items() if v})

    by_value = defaultdict(set)
    for src, table in (("frlg", frlg), ("hns", combined_hns)):
        for name, val in table.items():
            if 0x4020 <= val <= 0x4FFF:
                by_value[val].add((src, name))

    for val, entries in sorted(by_value.items()):
        srcs = {s for s, _ in entries}
        if len(srcs) < 2:
            continue
        names = {n for _, n in entries}
        active = names & set(used_vars)
        if active:
            rep.error("var-kollision",
                      f"{hex(val)}: {' | '.join(sorted(names))} "
                      f"-- aktiv benutzt: {', '.join(sorted(active))}")
        else:
            rep.note("var-kollision",
                     f"{hex(val)}: {' | '.join(sorted(names))} (derzeit ungenutzt)")


def check_wild(maps, active_names, rep):
    if not os.path.exists(WILD):
        return
    with open(WILD, encoding="utf-8") as fh:
        data = json.load(fh)
    have = set()
    for group in data.get("wild_encounter_groups", []):
        if not group.get("for_maps"):
            continue
        for enc in group.get("encounters", []):
            have.add(enc["map"])
    active_ids = {maps[n]["id"] for n in active_names if "id" in maps[n]}
    for mid in sorted(have - active_ids):
        rep.note("wild",
                 f"{mid}: Encounter-Tabelle vorhanden, Map aber nicht aktiv")
    outdoor = {"MAP_TYPE_ROUTE", "MAP_TYPE_TOWN", "MAP_TYPE_CITY",
               "MAP_TYPE_UNDERGROUND", "MAP_TYPE_UNDERWATER"}
    for name in sorted(active_names):
        m = maps[name]
        if m.get("map_type") == "MAP_TYPE_ROUTE" and m.get("id") not in have:
            rep.note("wild", f"{name}: Route ohne Encounter-Tabelle")


def check_script_includes(maps, active_names, rep):
    if not os.path.exists(EVENT_SCRIPTS):
        return
    with open(EVENT_SCRIPTS, encoding="utf-8", errors="replace") as fh:
        text = fh.read()
    included = set(re.findall(r'\.include\s+"data/maps/([^/]+)/scripts\.inc"', text))
    for name in sorted(active_names):
        d = maps[name]["_dir"]
        path = os.path.join(MAPS_DIR, d, "scripts.inc")
        if os.path.exists(path) and d not in included:
            rep.error("event_scripts",
                      f"{name}: scripts.inc existiert, ist aber nicht in "
                      f"event_scripts.s eingebunden")


def check_duplicate_symbols(maps, active_names, rep):
    """Findet Labels, die in mehreren aktiven Skripten definiert werden."""
    label = re.compile(r"^([A-Za-z_][A-Za-z_0-9]*)::", re.M)
    owners = defaultdict(list)
    for name in active_names:
        path = os.path.join(MAPS_DIR, maps[name]["_dir"], "scripts.inc")
        if not os.path.exists(path):
            continue
        with open(path, encoding="utf-8", errors="replace") as fh:
            for sym in label.findall(fh.read()):
                owners[sym].append(name)
    for sym, names in sorted(owners.items()):
        if len(names) > 1:
            rep.error("symbol-dubletten",
                      f"{sym} definiert in: {', '.join(sorted(names))}")



def check_tilesets(maps, active_names, rep):
    """Prueft, ob die Attributbreite eines Tilesets zur layout_version passt.

    FRLG-Layouts lesen metatile_attributes.bin als u32 (Verhalten in Bit 0-8,
    Ebene in Bit 29-30), alle anderen als u16 (0-7 / 12-15). Ein Tileset mit
    der falschen Breite liefert Zufallswerte fuer die Ebene -> Grafiken
    zeichnen ueber dem Spieler.
    """
    if not os.path.exists(LAYOUTS):
        return
    data = json.load(open(LAYOUTS, encoding="utf-8"))
    dirs = {}
    for root in ("primary", "secondary"):
        base = os.path.join("data/tilesets", root)
        if not os.path.isdir(base):
            continue
        for d in os.listdir(base):
            dirs.setdefault(d, os.path.join(base, d))

    def to_dir(symbol):
        s = symbol.replace("gTileset_", "")
        s = re.sub(r"(?<!^)(?=[A-Z])", "_", s).lower()
        return dirs.get(s.replace("__", "_"))

    def width(path):
        attr = os.path.join(path, "metatile_attributes.bin")
        meta = os.path.join(path, "metatiles.bin")
        if not (os.path.exists(attr) and os.path.exists(meta)):
            return None
        count = os.path.getsize(meta) // 16
        return os.path.getsize(attr) / count if count else None

    used = defaultdict(set)
    for lay in data.get("layouts", []):
        if not isinstance(lay, dict) or lay.get("game_version") != "hns":
            continue
        for key in ("primary_tileset", "secondary_tileset"):
            if lay.get(key):
                used[lay[key]].add((lay.get("layout_version"), lay.get("id")))

    for symbol, entries in sorted(used.items()):
        path = to_dir(symbol)
        if not path:
            continue
        w = width(path)
        if w is None:
            continue
        versions = {v for v, _ in entries}
        expected = 4.0 if "frlg" in versions else 2.0
        if "frlg" in versions and len(versions) > 1:
            rep.error("tilesets",
                      f"{symbol}: von frlg- UND {sorted(versions - {'frlg'})}-Layouts "
                      f"benutzt - eine Breite kann nicht fuer beide stimmen")
        elif w != expected:
            sample = sorted(i for _, i in entries)[:1]
            rep.error("tilesets",
                      f"{symbol}: {w:g} Byte/Metatile, erwartet {expected:g} "
                      f"fuer layout_version {sorted(versions)} (z.B. {sample[0]})")


# ---------------------------------------------------------------- main

ALL_CHECKS = ["layouts", "warps", "connections", "mapsecs", "flags",
              "vars", "wild", "includes", "symbols", "tilesets"]


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--version", default="hns",
                    choices=["hns", "frlg", "emerald"],
                    help="Ziel-MAP_VERSION (Default: hns)")
    ap.add_argument("--only", default="",
                    help="Nur diese Checks, kommasepariert: " + ",".join(ALL_CHECKS))
    ap.add_argument("--quiet", action="store_true",
                    help="Nur die ersten 10 Meldungen je Kategorie")
    args = ap.parse_args()

    if not os.path.isdir(MAPS_DIR):
        sys.exit(f"FEHLER: {MAPS_DIR} nicht gefunden -- bitte im Repo-Wurzel "
                 f"ausfuehren.")

    wanted = set(a.strip() for a in args.only.split(",") if a.strip()) or set(ALL_CHECKS)
    rep = Report(quiet=args.quiet)

    maps = load_maps()
    active = {n for n, m in maps.items() if m["game_version"] == args.version}

    print(f"Build-Version : {args.version}")
    print(f"Maps gesamt   : {len(maps)}")
    print(f"Maps aktiv    : {len(active)}")
    print(f"Maps inaktiv  : {len(maps) - len(active)}")

    if "layouts" in wanted:
        check_layouts(maps, active, args.version, rep)
    if "warps" in wanted:
        check_warps(maps, active, rep)
    if "connections" in wanted:
        check_connections(maps, active, rep)
    if "mapsecs" in wanted:
        check_mapsecs(maps, active, args.version, rep)
    if "includes" in wanted:
        check_script_includes(maps, active, rep)
    if "symbols" in wanted:
        check_duplicate_symbols(maps, active, rep)
    if "wild" in wanted:
        check_wild(maps, active, rep)
    if "tilesets" in wanted:
        check_tilesets(maps, active, rep)

    if {"flags", "vars"} & wanted:
        used_flags, used_vars = collect_script_symbols(active, maps)
        if "flags" in wanted:
            check_flags(used_flags, args.version, rep)
        if "vars" in wanted:
            check_var_collisions(used_vars, rep)

    rep.dump()
    return 1 if rep.errors else 0


if __name__ == "__main__":
    sys.exit(main())
