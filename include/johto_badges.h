#ifndef GUARD_JOHTO_BADGES_H
#define GUARD_JOHTO_BADGES_H

u32 GetJohtoBadgeCount(void);
bool32 HasJohtoBadge(u32 index);
void SetJohtoBadge(void);      // Special: Index in gSpecialVar_0x8004
void CountJohtoBadges(void);   // Special: Anzahl nach gSpecialVar_Result
void CheckJohtoBadge(void);    // Special: Index in gSpecialVar_0x8004, Ergebnis nach gSpecialVar_Result

#endif // GUARD_JOHTO_BADGES_H
