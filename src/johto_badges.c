#include "global.h"
#include "event_data.h"
#include "johto_badges.h"

// Johto-Ordensystem: eigene Bitmaske in VAR_JOHTO_BADGES.
//
// Hintergrund (Kanto-Merge): FLAG_BADGE01-08_GET werden von 24 Arenen in
// drei Regionen beschrieben - Kanto (FRLG), Johto (HnS) und Hoenn. Kanto
// laeuft im neuen Aufbau zuerst und behaelt die Vanilla-Flags; Hoenn hat
// mit VAR_HOENN_BADGES bereits eine eigene Maske. Johto bekommt hier die
// gleiche Behandlung, sonst haette der Spieler beim Betreten von Johto
// bereits alle acht Orden.

#if defined(POKEMON_HNS)

u32 GetJohtoBadgeCount(void)
{
    u32 i, count = 0;
    u16 mask = VarGet(VAR_JOHTO_BADGES);

    for (i = 0; i < 8; i++)
    {
        if (mask & (1 << i))
            count++;
    }
    return count;
}

bool32 HasJohtoBadge(u32 index)
{
    if (index >= 8)
        return FALSE;
    return (VarGet(VAR_JOHTO_BADGES) & (1 << index)) != 0;
}

void SetJohtoBadge(void)
{
    if (gSpecialVar_0x8004 < 8)
        VarSet(VAR_JOHTO_BADGES, VarGet(VAR_JOHTO_BADGES) | (1 << gSpecialVar_0x8004));
}

void CheckJohtoBadge(void)
{
    gSpecialVar_Result = HasJohtoBadge(gSpecialVar_0x8004);
}

void CountJohtoBadges(void)
{
    gSpecialVar_Result = GetJohtoBadgeCount();
}

#else

u32 GetJohtoBadgeCount(void) { return 0; }
bool32 HasJohtoBadge(u32 index) { return FALSE; }
void SetJohtoBadge(void) {}
void CheckJohtoBadge(void) { gSpecialVar_Result = FALSE; }
void CountJohtoBadges(void) { gSpecialVar_Result = 0; }

#endif
