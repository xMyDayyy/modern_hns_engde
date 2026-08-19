// Origin Jade: Generierte Farbtabelle fuer die Titelbild-Animation.
// Die Strahl-Slots sind EXKLUSIV: beim Fitting wurden Strahlpixel
// (zusammenhaengende Komponenten >= 25 px) auf eigene Palettenfarben
// gezwungen, die kein anderes Pixel nutzt - die Animation trifft
// dadurch exakt die Strahlen, nichts sonst. Vom Werkzeug erzeugt.

struct JadeAnimColor
{
    u16 slot;
    u16 farbe;
};

static const struct JadeAnimColor sJadeStrahlen[] =
{
    { 0x09D, 0x6BB5 },
    { 0x09E, 0x5F51 },
    { 0x09F, 0x530D },
    { 0x0AE, 0x5F77 },
    { 0x0AF, 0x5310 },
    { 0x0BD, 0x7BD8 },
    { 0x0BE, 0x7392 },
    { 0x0BF, 0x630E },
    { 0x0CD, 0x6B98 },
    { 0x0CE, 0x5B55 },
    { 0x0CF, 0x5710 },
    { 0x0ED, 0x73B8 },
    { 0x0EE, 0x6352 },
    { 0x0EF, 0x5F0E },
    { 0x0FD, 0x5F74 },
    { 0x0FE, 0x4F6E },
    { 0x0FF, 0x4B0E },
};

// Klassen je Bildpaletteneintrag (Index = Slot - 144):
// 0 = Rest (im Dunkelzustand stark abgedunkelt),
// 1 = Pokemon-Outline/Aura (bleibt im Dunkeln sichtbar),
// 2 = Strahl/Blitz (exklusive Farben, funkeln + Blitztraeger).
static const u8 sJadeKlasse[112] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2,
    0, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 2, 2,
    0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 2, 2, 2,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 2, 2, 2,
    0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2
};
