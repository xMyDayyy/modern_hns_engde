// Origin Jade: Farbtabelle der (derzeit deaktivierten) Blitz-Animation.
// ACHTUNG: Nach dem Qualitaetsausbau (0209) gibt es KEINE exklusiven
// Strahlfarben mehr - eine Reaktivierung (JADE_TITEL_ANIMATION TRUE)
// erfordert erst einen Exklusiv-Refit der Assets mit dem
// Fitting-Werkzeug, sonst flackern Streupixel im ganzen Bild.
// Platzhalter-Eintrag, damit die stillgelegte Funktion uebersetzt.

struct JadeAnimColor
{
    u16 slot;
    u16 farbe;
};

static const struct JadeAnimColor sJadeStrahlen[] =
{
    { 0x08F, 0x1D02 },
};
