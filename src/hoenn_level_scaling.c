#include "global.h"
#include "hoenn_level_scaling.h"
#include "data.h"
#include "overworld.h"
#include "pokemon.h"
#include "random.h"
#include "event_data.h"
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

// Liegt die Mapsection in der Hoenn-Welt? (Auch von der Regionskarte
// genutzt, um in Hoenn die Smaragd-Karte zu oeffnen.)
bool32 IsHoennMapsec(u32 mapSecId)
{
    // Zusammenhaengender Hoenn-Block der HnS-Mapsection-Liste ...
    if (mapSecId >= MAPSEC_LITTLEROOT_TOWN && mapSecId < MAPSEC_NONE)
        return TRUE;
    // ... plus die drei Sections, die Hoenn mit dem Johto/Kanto-
    // Nummernkreis teilt (kein aktiver _hns-Nutzer bzw. nur
    // Platzhalterkarten): Siegesstrasse, Safari-Zone, Wrack.
    if (mapSecId == MAPSEC_VICTORY_ROAD
     || mapSecId == MAPSEC_SAFARI_ZONE
     || mapSecId == MAPSEC_ABANDONED_SHIP)
        return TRUE;
    return FALSE;
}

bool32 HoennLevelScalingActive(void)
{
    return IsHoennMapsec(gMapHeader.regionMapSectionId);
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
    // Superbosse mit festem Originallevel (>= HOENN_SCALING_FIXED_MIN_LEVEL,
    // z. B. Troy/Steven) bleiben unskaliert - Gegenstueck zu Rot.
    if (partyMaxLevel >= HOENN_SCALING_FIXED_MIN_LEVEL)
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

bool32 IsHoennMapsec(u32 mapSecId)
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

#if defined(POKEMON_HNS)

// Die Hoenn-Stadtskripte setzen ihr FLAG_VISITED_* im ON_TRANSITION-Skript.
// Im Spieltest blieb Rosaltstadt trotz Besuch grau (nicht anfliegbar), also
// wird das Flag hier beim Laden jeder Karte zusaetzlich gesetzt. Das heilt
// auch bestehende Spielstaende, in denen das Flag fehlt.
static const struct { u16 mapSec; u16 flag; } sHoennVisitedFlags[] =
{
    { MAPSEC_LITTLEROOT_TOWN,  FLAG_VISITED_LITTLEROOT_TOWN  },
    { MAPSEC_OLDALE_TOWN,      FLAG_VISITED_OLDALE_TOWN      },
    { MAPSEC_DEWFORD_TOWN,     FLAG_VISITED_DEWFORD_TOWN     },
    { MAPSEC_LAVARIDGE_TOWN,   FLAG_VISITED_LAVARIDGE_TOWN   },
    { MAPSEC_FALLARBOR_TOWN,   FLAG_VISITED_FALLARBOR_TOWN   },
    { MAPSEC_VERDANTURF_TOWN,  FLAG_VISITED_VERDANTURF_TOWN  },
    { MAPSEC_PACIFIDLOG_TOWN,  FLAG_VISITED_PACIFIDLOG_TOWN  },
    { MAPSEC_PETALBURG_CITY,   FLAG_VISITED_PETALBURG_CITY   },
    { MAPSEC_SLATEPORT_CITY,   FLAG_VISITED_SLATEPORT_CITY   },
    { MAPSEC_MAUVILLE_CITY,    FLAG_VISITED_MAUVILLE_CITY    },
    { MAPSEC_RUSTBORO_CITY,    FLAG_VISITED_RUSTBORO_CITY    },
    { MAPSEC_FORTREE_CITY,     FLAG_VISITED_FORTREE_CITY     },
    { MAPSEC_LILYCOVE_CITY,    FLAG_VISITED_LILYCOVE_CITY    },
    { MAPSEC_MOSSDEEP_CITY,    FLAG_VISITED_MOSSDEEP_CITY    },
    { MAPSEC_SOOTOPOLIS_CITY,  FLAG_VISITED_SOOTOPOLIS_CITY  },
    { MAPSEC_EVER_GRANDE_CITY, FLAG_VISITED_EVER_GRANDE_CITY },
};

void TrySetHoennVisitedFlag(void)
{
    u32 i;
    u32 mapSec = gMapHeader.regionMapSectionId;

    for (i = 0; i < ARRAY_COUNT(sHoennVisitedFlags); i++)
    {
        if (sHoennVisitedFlags[i].mapSec == mapSec)
        {
            FlagSet(sHoennVisitedFlags[i].flag);
            return;
        }
    }
}

#else

void TrySetHoennVisitedFlag(void) {}

#endif
