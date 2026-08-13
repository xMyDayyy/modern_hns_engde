#ifndef GUARD_HOENN_LEVEL_SCALING_H
#define GUARD_HOENN_LEVEL_SCALING_H

#include "global.h"

struct Trainer;

// Hoenn-Levelscaling (siehe include/config/hoenn_scaling.h).
// Alle Funktionen sind ausserhalb der Hoenn-Welt bzw. bei
// HOENN_LEVEL_SCALING == FALSE wirkungslose Durchreichen.
bool32 HoennLevelScalingActive(void);
bool32 IsHoennMapsec(u32 mapSecId);
void TrySetHoennVisitedFlag(void);
u8 HoennScaleWildMonLevel(u8 level);
u8 HoennScaleTrainerMonLevel(const struct Trainer *trainer, u8 level, u8 partyMaxLevel);
u16 HoennScaleTrainerMonSpecies(u16 species, u8 scaledLevel);

#endif // GUARD_HOENN_LEVEL_SCALING_H
