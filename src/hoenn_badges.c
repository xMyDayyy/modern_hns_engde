#include "global.h"
#include "event_data.h"
#include "hoenn_badges.h"

// Hoenn-Ordensystem: eigene Bitmaske in VAR_HOENN_BADGES, getrennt von
// den Johto-Flags FLAG_BADGE01-08 (die beim Champion laengst gesetzt
// sind). Fuettert Tuergatter, Trainerpass und spaeter den Liga-Trigger.

#if defined(POKEMON_HNS)

u32 GetHoennBadgeCount(void)
{
    u32 i, count = 0;
    u16 mask = VarGet(VAR_HOENN_BADGES);

    for (i = 0; i < 8; i++)
    {
        if (mask & (1 << i))
            count++;
    }
    return count;
}

bool32 HasHoennBadge(u32 index)
{
    if (index >= 8)
        return FALSE;
    return (VarGet(VAR_HOENN_BADGES) & (1 << index)) != 0;
}

// Special: Ordenindex (0-7) in gSpecialVar_0x8004
void SetHoennBadge(void)
{
    if (gSpecialVar_0x8004 < 8)
        VarSet(VAR_HOENN_BADGES, VarGet(VAR_HOENN_BADGES) | (1 << gSpecialVar_0x8004));
}

// Special: Ordenindex (0-7) in gSpecialVar_0x8004, Ergebnis nach
// gSpecialVar_Result. Ersetzt in Hoenn-Skripten die FLAG_BADGE0x_GET-Abfragen -
// die gehoeren unter HnS zu den Johto/Kanto-Orden und sind beim Betreten von
// Hoenn laengst alle gesetzt.
void CheckHoennBadge(void)
{
    gSpecialVar_Result = HasHoennBadge(gSpecialVar_0x8004);
}

// Special: Anzahl der Hoenn-Orden nach gSpecialVar_Result
void CountHoennBadges(void)
{
    gSpecialVar_Result = GetHoennBadgeCount();
}

#else

u32 GetHoennBadgeCount(void) { return 0; }
bool32 HasHoennBadge(u32 index) { return FALSE; }
void SetHoennBadge(void) {}
void CheckHoennBadge(void) { gSpecialVar_Result = FALSE; }
void CountHoennBadges(void) { gSpecialVar_Result = 0; }

#endif
