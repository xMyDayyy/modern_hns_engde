#ifndef GUARD_HOENN_BADGES_H
#define GUARD_HOENN_BADGES_H

u32 GetHoennBadgeCount(void);
bool32 HasHoennBadge(u32 index);
void SetHoennBadge(void);      // Special: Index in gSpecialVar_0x8004
void CountHoennBadges(void);   // Special: Anzahl nach gSpecialVar_Result

#endif // GUARD_HOENN_BADGES_H
