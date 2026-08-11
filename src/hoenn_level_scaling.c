#include "global.h"
#include "hoenn_level_scaling.h"
#include "data.h"
#include "overworld.h"
#include "pokemon.h"
#include "random.h"
#include "constants/region_map_sections.h"
#include "constants/trainers.h"
#include "config/hoenn_scaling.h"

// =====================================================================
// Hoenn-Levelscaling - Umsetzung der Regeldatei config/hoenn_scaling.h.
// Anker = hoechstes Level im Spielerteam; Trainer skalieren um den
// Anker herum (Teamstruktur bleibt erhalten), Wildpokemon liegen
// darunter; ein Korridor pro Mapsection bewahrt das Gefaelle der
// Region. Nur aktiv im HnS-Build und nur in der Hoenn-Welt.
// =====================================================================

#if defined(POKEMON_HNS) && HOENN_LEVEL_SCALING == TRUE

struct HoennScalingCorridor
{
    u16 mapsec;
    u8 floor;
    u8 ceiling;
};

static const struct HoennScalingCorridor sCorridors[] =
{
    HOENN_SCALING_CORRIDORS
};

bool32 HoennLevelScalingActive(void)
{
    u16 mapsec = gMapHeader.regionMapSectionId;

    // Zusammenhaengender Hoenn-Block der HnS-Mapsection-Liste ...
    if (mapsec >= MAPSEC_LITTLEROOT_TOWN && mapsec < MAPSEC_NONE)
        return TRUE;
    // ... plus die drei Sections, die Hoenn mit dem Johto/Kanto-
    // Nummernkreis teilt (kein aktiver _hns-Nutzer bzw. nur
    // Platzhalterkarten): Siegesstrasse, Safari-Zone, Wrack.
    if (mapsec == MAPSEC_VICTORY_ROAD
     || mapsec == MAPSEC_SAFARI_ZONE
     || mapsec == MAPSEC_ABANDONED_SHIP)
        return TRUE;
    return FALSE;
}

static u8 GetScalingAnchor(void)
{
    u32 i;
    u8 best = 0;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES, NULL) == SPECIES_NONE)
            continue;
        if (GetMonData(&gPlayerParty[i], MON_DATA_IS_EGG, NULL))
            continue;
        if (GetMonData(&gPlayerParty[i], MON_DATA_LEVEL, NULL) > best)
            best = GetMonData(&gPlayerParty[i], MON_DATA_LEVEL, NULL);
    }
    return best;
}

static void GetCorridor(u8 *floor, u8 *ceiling)
{
    u32 i;
    u16 mapsec = gMapHeader.regionMapSectionId;

    *floor = HOENN_SCALING_DEFAULT_FLOOR;
    *ceiling = HOENN_SCALING_DEFAULT_CEILING;
    for (i = 0; i < ARRAY_COUNT(sCorridors); i++)
    {
        if (sCorridors[i].mapsec == mapsec)
        {
            *floor = sCorridors[i].floor;
            *ceiling = sCorridors[i].ceiling;
            return;
        }
    }
}

static u8 ClampScaledLevel(s32 level, u8 floor, u8 ceiling)
{
    if (level < floor)
        level = floor;
    if (level > ceiling)
        level = ceiling;
    if (level < HOENN_SCALING_MIN_LEVEL)
        level = HOENN_SCALING_MIN_LEVEL;
    if (level > HOENN_SCALING_MAX_LEVEL)
        level = HOENN_SCALING_MAX_LEVEL;
    return level;
}

u8 HoennScaleWildMonLevel(u8 level)
{
    s32 anchor, scaled, width;
    u8 floor, ceiling;

    if (!HoennLevelScalingActive())
        return level;
    anchor = GetScalingAnchor();
    if (anchor == 0)
        return level;

    // Wildband: Anker - BELOW .. Anker - ABOVE, gleichverteilt.
    width = HOENN_SCALING_WILD_BELOW - HOENN_SCALING_WILD_ABOVE + 1;
    scaled = anchor - HOENN_SCALING_WILD_BELOW + (s32)(Random() % width);

    GetCorridor(&floor, &ceiling);
    return ClampScaledLevel(scaled, floor, ceiling);
}


// Hebt eine Trainer-Art entlang ihrer Entwicklungskette an, solange
// das skalierte Level die Schwelle erreicht. Nur fuer Trainerteams -
// Wildpokemon behalten bewusst ihre Basisformen (Fangbarkeit).
u16 HoennScaleTrainerMonSpecies(u16 species, u8 scaledLevel)
{
    u32 step, i;

    if (HOENN_SCALING_TRAINER_EVOLVE != TRUE || !HoennLevelScalingActive())
        return species;

    for (step = 0; step < 2; step++)
    {
        const struct Evolution *evos = GetSpeciesEvolutions(species);
        u16 candidates[8];
        u32 count = 0;

        if (evos == NULL)
            break;
        for (i = 0; evos[i].method != EVOLUTIONS_END && count < ARRAY_COUNT(candidates); i++)
        {
            u16 threshold;
            switch (evos[i].method)
            {
            case EVO_LEVEL:
            case EVO_LEVEL_BATTLE_ONLY:
                threshold = evos[i].param;
                break;
            case EVO_ITEM:
            case EVO_TRADE:
                threshold = HOENN_SCALING_EVO_OTHER_LEVEL;
                break;
            default:
                continue;
            }
            if (scaledLevel >= threshold)
                candidates[count++] = evos[i].targetSpecies;
        }
        if (count == 0)
            break;
        // Verzweigungen (z. B. Waumpel -> Schaloko/Panekon) zufaellig.
        species = candidates[Random() % count];
    }
    return species;
}

static bool32 IsBossTrainer(const struct Trainer *trainer)
{
    switch (trainer->trainerClass)
    {
    case TRAINER_CLASS_LEADER:
    case TRAINER_CLASS_ELITE_FOUR:
    case TRAINER_CLASS_CHAMPION:
    case TRAINER_CLASS_MAGMA_LEADER:
    case TRAINER_CLASS_MAGMA_ADMIN:
    case TRAINER_CLASS_AQUA_LEADER:
    case TRAINER_CLASS_AQUA_ADMIN:
        return TRUE;
    default:
        return FALSE;
    }
}

u8 HoennScaleTrainerMonLevel(const struct Trainer *trainer, u8 level, u8 partyMaxLevel)
{
    s32 anchor, top, scaled;
    u8 floor, ceiling;

    if (!HoennLevelScalingActive())
        return level;
    anchor = GetScalingAnchor();
    if (anchor == 0 || partyMaxLevel == 0)
        return level;

    // Das Ass des Trainers liegt am Bandoberrand; alle anderen
    // behalten ihren originalen Abstand zum Ass. So bleibt die
    // Teamstruktur (z. B. 17/17/19) auch skaliert erhalten.
    top = anchor + HOENN_SCALING_TRAINER_ABOVE;
    if (IsBossTrainer(trainer))
        top += HOENN_SCALING_BOSS_EXTRA;
    scaled = top - (s32)(partyMaxLevel - level);
    if (scaled < anchor - HOENN_SCALING_TRAINER_BELOW)
        scaled = anchor - HOENN_SCALING_TRAINER_BELOW;

    GetCorridor(&floor, &ceiling);
    return ClampScaledLevel(scaled, floor, ceiling);
}

#else // Durchreichen ohne Scaling (Emerald-/FRLG-Build oder abgeschaltet)

bool32 HoennLevelScalingActive(void)
{
    return FALSE;
}

u8 HoennScaleWildMonLevel(u8 level)
{
    return level;
}

u8 HoennScaleTrainerMonLevel(const struct Trainer *trainer, u8 level, u8 partyMaxLevel)
{
    return level;
}

u16 HoennScaleTrainerMonSpecies(u16 species, u8 scaledLevel)
{
    return species;
}

#endif
