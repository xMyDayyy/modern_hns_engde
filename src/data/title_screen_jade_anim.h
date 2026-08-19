// Origin Jade: Generierte Farbtabellen fuer die Titelbild-Animation.
// Regional maskiert (Sturm-Ellipse, Ho-Oh links, Lugia rechts, Mewtwo
// mittig), erzeugt vom Fitting-Werkzeug. NICHT von Hand pflegen.

struct JadeAnimColor
{
    u16 slot;
    u16 farbe;
};

static const struct JadeAnimColor sJadeGlowGold[] =
{
    { 0x0A9, 0x1A15 },
    { 0x0A6, 0x22BA },
    { 0x0A5, 0x331A },
    { 0x0A2, 0x3B5C },
};

static const struct JadeAnimColor sJadeGlowCyan[] =
{
    { 0x0B6, 0x62AE },
    { 0x0B5, 0x670E },
};

static const struct JadeAnimColor sJadeGlowMagenta[] =
{
    { 0x0B9, 0x5E55 },
    { 0x0BE, 0x458C },
    { 0x0E6, 0x49CE },
    { 0x0ED, 0x392B },
    { 0x0EA, 0x394B },
    { 0x0E9, 0x456E },
    { 0x0BD, 0x51D1 },
    { 0x0E5, 0x59F4 },
};

// Sturmzentrum: sanftes Wetterleuchten (Puls, keine Rotation).
static const struct JadeAnimColor sJadeWirbel[] =
{
    { 0x0D4, 0x2143 },
    { 0x0FA, 0x2163 },
    { 0x0F8, 0x2584 },
    { 0x0F6, 0x29A5 },
    { 0x09B, 0x31E6 },
};
