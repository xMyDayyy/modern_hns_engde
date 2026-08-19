// Origin Jade: Generierte Farbtabellen fuer die Titelbild-Animation.
// Quelle: graphics/title_screen/origin_jade/titelbild_* (Fitting-Lauf).
// slot = BG-Paletteneintrag (Paletten 9-15), farbe = RGB555-Basiswert.
// NICHT von Hand pflegen - wird vom Fitting-Werkzeug erzeugt.

struct JadeAnimColor
{
    u16 slot;
    u16 farbe;
};

static const struct JadeAnimColor sJadeGlowGold[] =
{
    { 0x0C1, 0x0000 },
    { 0x0A9, 0x32B2 },
    { 0x0A6, 0x331A },
    { 0x0A5, 0x3358 },
    { 0x0A2, 0x4B9D },
};

static const struct JadeAnimColor sJadeGlowCyan[] =
{
    { 0x0E2, 0x6F59 },
    { 0x0B6, 0x670E },
    { 0x0B5, 0x66F2 },
    { 0x094, 0x4F2D },
};

static const struct JadeAnimColor sJadeGlowMagenta[] =
{
    { 0x0B9, 0x628E },
    { 0x0BE, 0x51D1 },
    { 0x0E6, 0x59F4 },
    { 0x0EA, 0x456E },
    { 0x0BD, 0x4E29 },
    { 0x0E5, 0x4A6A },
};

// Wirbel-Rampe: nach Helligkeit sortiert - Rotation ergibt die Sogbewegung.
static const struct JadeAnimColor sJadeWirbel[] =
{
    { 0x0FF, 0x14E3 },
    { 0x0FE, 0x1923 },
    { 0x0FD, 0x1D22 },
    { 0x0D4, 0x2544 },
    { 0x0FC, 0x1D43 },
    { 0x0FA, 0x1D46 },
    { 0x0FB, 0x2163 },
    { 0x09E, 0x3187 },
    { 0x0F6, 0x29A8 },
    { 0x0F8, 0x25A4 },
    { 0x0F7, 0x29A5 },
    { 0x09C, 0x31E6 },
    { 0x09B, 0x35E8 },
    { 0x0F4, 0x322B },
    { 0x097, 0x424C },
    { 0x098, 0x3E88 },
    { 0x0F2, 0x4B10 },
};
