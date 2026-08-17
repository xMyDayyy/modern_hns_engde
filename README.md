<p align="center">
  <img src="logo.png" alt="Pokémon Origin Jade" width="480">
</p>

<!-- Title screen goes here -->

**Pokémon Origin Jade** is a ROM hack built on
[Pokémon HnS](https://github.com/PokemonHnS-Development/pokehns-expansion),
which itself builds on
[`pokeemerald-expansion`](https://github.com/rh-hideout/pokeemerald-expansion).

The idea: **one continuous journey across three regions.** After Johto and
Kanto, the road leads on to **Hoenn** — not as a separate game, but as the same
story continued, with the same team and the same save file.

---

## The premise

You arrive in Hoenn as the **Champion of the mainland**, invited by Steven
Stone. That single fact changes everything about the Emerald opening. Nobody
explains how to catch a Pokémon. Nobody treats you as a beginner. People who
know you know exactly who you are — and those who don't have only heard
rumours.

The entire early game was rebuilt around this: no moving van, no starter
choice, no tutorials.

---

## What's different

### HMs are tied to Gym Badges

You bring your HMs with you from Johto and Kanto — but in Hoenn you may only
use them once you hold the matching Badge.

| Badge | Gym | Unlocks |
|---|---|---|
| Stone Badge | Rustboro City | Cut |
| Dynamo Badge | Mauville City | Rock Smash |
| Heat Badge | Lavaridge Town | Strength |
| Balance Badge | Petalburg City | Surf |
| Mind Badge | Mossdeep City | Dive |
| Rain Badge | Sootopolis City | Waterfall |

**Flash and Fly need no permission** — you already have them, and Hoenn does
not hand them out again.

### Difficulty that matches the point in the story

Hoenn is endgame content and plays like it. All eight Gym Leaders field **six
Pokémon** — in every rematch tier as well — carry six held items and bring Full
Restores. Every Gym is mono-type. Wild Pokémon and Trainers scale with your
progress, and Trainer Pokémon evolve along with the scaling.

### Characters with a history

**Steven** brought you to Hoenn. What he's actually doing there, he won't say.
**May** takes you as her benchmark and grows measurably stronger across five
encounters — from three Pokémon to a full team. **Norman** is a Gym Leader, not
your father, and only contacts you once his Gym reopens.

### Quality of life

- No duplicate item handouts — anything you already earned on the mainland is
  skipped, with a runtime check that respects the reusable-TM setting
- Field items unified: every Poké Ball and Great Ball is an **Ultra Ball**,
  every Potion and Super Potion a **Hyper Potion**
- The PokéCom (PokéNav) fully reworked: correct locations, correct call timing,
  Elite Four contacts, renamed throughout
- Trainer tip signs replaced with location flavour text

### Language

German is complete and is the language the project is developed in. **English
is planned as a full second language**, so the final release will ship with at
least German and English.

---

## Building

```bash
make jade
```

The result is `Pokemon_Origin_Jade.gba`.

Setup and prerequisites are described in [`INSTALL.md`](INSTALL.md). To build
without the Hoenn content, use `make hns`.

> ❗ Please do **not** use GitHub's "Download ZIP" button — it omits the commit
> history, which you need in order to pull updates later.

---

## Roadmap

### In progress

- [ ] Playtest pass through Hoenn — Dewford onward
- [ ] Steven, May, Wally, Scott and Mr. Stone: PokéCom call text wording
- [ ] Hoenn Elite Four as a standalone Elite Four (dialogue)
- [ ] Elite Four rematches — currently blocked by the engine in two places
- [ ] Credits and Union Room translation
- [ ] Prof. Birch handover scene, unlocking the Hoenn badge row on the Trainer Card

### Planned: the full journey

The long-term goal is to start the game in **Kanto**, in its first-generation
form, and travel Kanto → Johto → Hoenn in that order — the route the anime
takes.

- [ ] Replace HnS's Kanto with the FRLG map (186 maps out, 260 in)
- [ ] Restore FRLG wild encounter tables — currently almost entirely absent
- [ ] Make all 151 Gen 1 species obtainable, no version exclusives
- [ ] Join the maps at Route 22, the seam both regions already share
- [ ] Indigo Plateau as one location with two states — Kanto league, then Johto
- [ ] Extend flag storage into SaveBlock3 (around 12,500 spare flags available)
- [ ] Prof. Elm's starter scene, rewritten for an arriving Kanto Champion
- [ ] Raise Johto's level curve and team sizes to match
- [ ] Steven's ticket chain, relocated onto the FRLG maps

### Held back until the HnS full release

These are finished but not merged, to avoid conflicts with HnS's ongoing beta.

- [ ] Steven's ticket chain in Vermilion, New Bark and Silph Co.
- [ ] Remove Gen 3 species from Johto and Kanto (93 slots across 32 maps)
- [ ] Fuchsia Safari Zone — switch to Gen 4, Cynthia in place of Steven

---

## Credits

This project stands on other people's work:

- **[Pokémon HnS](https://github.com/PokemonHnS-Development/pokehns-expansion)**
  — the Johto and Kanto foundation everything is built on
- **[`hns_de`](https://github.com/helikoptermann843/hns_de)** — the German
  localisation of HnS, and the source for the German text of Johto and Kanto
- **[RHH's `pokeemerald-expansion`](https://github.com/rh-hideout/pokeemerald-expansion)**
  — the engine and its hundreds of features
- **[pret's `pokeemerald`](https://github.com/pret/pokeemerald)** — the
  decompilation project that started it all

```
Based off RHH's pokeemerald-expansion https://github.com/rh-hideout/pokeemerald-expansion/
```

Everyone who contributed to the engine is listed in [`CREDITS.md`](CREDITS.md).

---

## Legal

Pokémon is a registered trademark of Nintendo, Game Freak and The Pokémon
Company. This is a non-commercial fan project with no affiliation to the
rights holders. **No ROM image is distributed** — the source is built locally.
