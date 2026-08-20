#!/usr/bin/env python3
"""
check_pokenav_text.py -- misst die Zeilenbreite aller PokeCom-Anruftexte.

Die Anrufbox ist 28 Kacheln breit (224 px), der Text beginnt aber erst bei
x = 32, weil links das Hoerersymbol sitzt. Nutzbar sind also 192 px statt
der 208 px einer normalen Textbox -- rund zweieinhalb Zeichen weniger.
Zeilen, die in msgbox passen, laufen in pokenavcall ueber.

Gemessen wird mit gFontNormalLatinGlyphWidths aus src/fonts.c und der
Zeichenzuordnung aus charmap.txt, also genau so, wie das Spiel rechnet.

Aufruf im Repo-Wurzelverzeichnis:
    python3 check_pokenav_text.py
    python3 check_pokenav_text.py --limit 192
"""

import argparse
import glob
import os
import re
import sys

WINDOW_PX = 224          # 28 Kacheln
TEXT_START_X = 32        # Platz fuer das Hoerersymbol
DEFAULT_LIMIT = WINDOW_PX - TEXT_START_X


def load_glyph_widths(path="src/fonts.c"):
    with open(path, encoding="utf-8", errors="replace") as fh:
        text = fh.read()
    start = text.index("gFontNormalLatinGlyphWidths[] = {")
    block = text[start:text.index("};", start)]
    return [int(x) for x in re.findall(r"\b(\d+)\b", block)[1:]]


def load_charmap(path="charmap.txt"):
    """Zeichen -> Glyphen-Id. Nur Eintraege der Form 'x' = NN."""
    mapping = {}
    pattern = re.compile(r"^'(.+?)'\s*=\s*([0-9A-Fa-f]{2})\s*$")
    with open(path, encoding="utf-8", errors="replace") as fh:
        for line in fh:
            m = pattern.match(line.strip())
            if m:
                mapping[m.group(1)] = int(m.group(2), 16)
    return mapping


PLACEHOLDERS = {
    # Platzhalter werden zur Laufzeit ersetzt. Angesetzt wird eine
    # realistische Laenge, damit lange Namen nicht durchrutschen.
    "PLAYER": 7, "RIVAL": 7, "STR_VAR_1": 10, "STR_VAR_2": 10,
    "STR_VAR_3": 10, "KUN": 0, "POKEMON": 7, "POKEBLOCK": 9,
}


def line_width(line, widths, charmap):
    """Breite in Pixeln. Steuerzeichen werden uebersprungen."""
    total = 0
    i = 0
    while i < len(line):
        if line[i] == "{":
            end = line.find("}", i)
            if end == -1:
                break
            name = line[i + 1:end]
            base = name.split("_")[0]
            for key, chars in PLACEHOLDERS.items():
                if name.startswith(key):
                    total += chars * 6
                    break
            i = end + 1
            continue
        ch = line[i]
        gid = charmap.get(ch)
        if gid is None:
            total += 6          # unbekanntes Zeichen: mittlere Breite
        elif gid < len(widths):
            total += widths[gid]
        i += 1
    return total


def collect_call_texts():
    """Findet alle pokenavcall-Ziele und liefert (Datei, Label, Zeilen)."""
    files = (glob.glob("data/maps/*/scripts.inc")
             + glob.glob("data/scripts/*.inc")
             + ["data/event_scripts.s"])
    targets = {}
    for path in files:
        if not os.path.exists(path):
            continue
        with open(path, encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        for label in re.findall(r"^\s*pokenavcall\s+(\w+)", text, re.M):
            targets.setdefault(label, [])

    for path in files:
        if not os.path.exists(path):
            continue
        with open(path, encoding="utf-8", errors="replace") as fh:
            lines = fh.read().split("\n")
        current = None
        for raw in lines:
            m = re.match(r"^(\w+)::?\s*$", raw)
            if m:
                current = m.group(1) if m.group(1) in targets else None
                continue
            if current is None:
                continue
            if raw.strip().startswith("#") or not raw.strip():
                if raw.strip().startswith("#endif"):
                    current = None
                continue
            m = re.match(r'\s*\.string\s+"(.*)"\s*$', raw)
            if m:
                targets[current].append((path, m.group(1)))
            elif raw.strip() and not raw.strip().startswith("@"):
                current = None
    return targets


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--limit", type=int, default=DEFAULT_LIMIT,
                    help="Zeilenbreite in Pixeln (Default: %d)" % DEFAULT_LIMIT)
    args = ap.parse_args()

    if not os.path.exists("src/fonts.c"):
        sys.exit("Bitte im Repo-Wurzelverzeichnis ausfuehren.")

    widths = load_glyph_widths()
    charmap = load_charmap()
    targets = collect_call_texts()

    print("Anrufbox: %d px breit, Text ab x=%d -> %d px nutzbar"
          % (WINDOW_PX, TEXT_START_X, args.limit))
    print("Gefundene pokenavcall-Texte: %d\n" % len(targets))

    problems = 0
    for label in sorted(targets):
        for path, raw in targets[label]:
            # Eine Textzeile endet an \n, \l, \p oder $
            for chunk in re.split(r"\\n|\\l|\\p", raw):
                chunk = chunk.replace("$", "")
                if not chunk:
                    continue
                px = line_width(chunk, widths, charmap)
                if px > args.limit:
                    problems += 1
                    print("%3d px  %-44s %s"
                          % (px, label[:44], os.path.basename(os.path.dirname(path))))
                    print("        %s" % chunk)

    print("\nZeilen ueber dem Limit: %d" % problems)
    return 1 if problems else 0


if __name__ == "__main__":
    sys.exit(main())
