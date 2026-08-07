#include "global.h"
#include "data.h"
#include "event_scripts.h"
#include "follower_helper.h"
#include "overworld.h"
#include "rtc.h"
#include "constants/battle.h"
#include "constants/followers.h"
#include "constants/metatile_behaviors.h"
#include "constants/pokemon.h"
#include "constants/region_map_sections.h"
#include "constants/songs.h"
#include "constants/weather.h"

#define TYPE_NOT_TYPE1 NUMBER_OF_MON_TYPES

// difficult conditional messages follow
#if GERMAN
static const u8 sCondMsg00[] = _("{STR_VAR_1} tanzte fröhlich.");
#else
static const u8 sCondMsg00[] = _("{STR_VAR_1} danced happily.");
#endif
#if GERMAN
static const u8 sCondMsg01[] = _("{STR_VAR_1} tanzte wunderschön.");
#else
static const u8 sCondMsg01[] = _("{STR_VAR_1} danced beautifully.");
#endif
static const u8* const sCelebiTexts[] = {sCondMsg00, sCondMsg01, NULL};
#if GERMAN
static const u8 sCondMsg02[] = _("{STR_VAR_1} spuckte Feuer und\nbrüllte!");
#else
static const u8 sCondMsg02[] = _("{STR_VAR_1} emitted fire and shouted.");
#endif
#if GERMAN
static const u8 sCondMsg03[] = _("{STR_VAR_1} erzeugt mit voller Kraft\nFeuer!");
#else
static const u8 sCondMsg03[] = _("{STR_VAR_1} is vigorously producing\nfire!");
#endif
#if GERMAN
static const u8 sCondMsg04[] = _("{STR_VAR_1} spuckte Feuer!");
#else
static const u8 sCondMsg04[] = _("{STR_VAR_1} spat fire!");
#endif
#if GERMAN
static const u8 sCondMsg05[] = _("{STR_VAR_1} speit mit voller Kraft\nFeuer!");
#else
static const u8 sCondMsg05[] = _("{STR_VAR_1} is vigorously breathing\nfire!");
#endif
static const u8* const sFireTexts[] = {sCondMsg02, sCondMsg03, sCondMsg04, sCondMsg05, NULL};
#if GERMAN
static const u8 sCondMsg06[] = _("{STR_VAR_1} blickt direkt zur\nPokémon-Liga.");
#else
static const u8 sCondMsg06[] = _("{STR_VAR_1} is staring straight at\nthe POKéMON LEAGUE.");
#endif
#if GERMAN
static const u8 sCondMsg07[] = _("Dein Pokémon blickt aufmerksam\nzum Berggipfel.");
#else
static const u8 sCondMsg07[] = _("Your POKéMON is staring intently at\nthe mountain peak.");
#endif
#if GERMAN
static const u8 sCondMsg08[] = _("Schnüffel... Hier riecht etwas gut!");
#else
static const u8 sCondMsg08[] = _("Sniff sniff, something smells good!");
#endif
#if GERMAN
static const u8 sCondMsg09[] = _("Dein Pokémon mustert unruhig\ndie Regale.");
#else
static const u8 sCondMsg09[] = _("Your POKéMON is surveying the\nshelves restlessly.");
#endif
#if GERMAN
static const u8 sCondMsg10[] = _("{STR_VAR_1} betrachtet aufmerksam\ndie Regale.");
#else
static const u8 sCondMsg10[] = _("{STR_VAR_1} is staring intently at\nthe shelves.");
#endif
static const u8* const sShopTexts[] = {sCondMsg09, sCondMsg10, NULL};
#if GERMAN
static const u8 sCondMsg11[] = _("{STR_VAR_1} blickt konzentriert!");
#else
static const u8 sCondMsg11[] = _("{STR_VAR_1} focused with a sharp\ngaze!");
#endif
#if GERMAN
static const u8 sCondMsg12[] = _("{STR_VAR_1} interessiert sich sehr\nfür die Fahrräder.");
#else
static const u8 sCondMsg12[] = _("{STR_VAR_1} seems very interested in\nthe bicycles.");
#endif
#if GERMAN
static const u8 sCondMsg13[] = _("{STR_VAR_1} möchte die Maschinen\nberühren!");
#else
static const u8 sCondMsg13[] = _("{STR_VAR_1} seems to want to touch\nthe machines!");
#endif
#if GERMAN
static const u8 sCondMsg14[] = _("{STR_VAR_1} schaukelt mit dem Boot.");
#else
static const u8 sCondMsg14[] = _("{STR_VAR_1} is swaying with the\nboat!");
#endif
#if GERMAN
static const u8 sCondMsg15[] = _("{STR_VAR_1} tanzt im Takt der\nSchiffsbewegungen.");
#else
static const u8 sCondMsg15[] = _("{STR_VAR_1} is dancing along with\nthe rolling of the ship.");
#endif
#if GERMAN
static const u8 sCondMsg16[] = _("{STR_VAR_1} will noch nicht vom\nBoot herunter!");
#else
static const u8 sCondMsg16[] = _("{STR_VAR_1} doesn't want to get off\nthe boat yet!");
#endif
static const u8* const sBoatTexts[] = {sCondMsg14, sCondMsg15, sCondMsg16, NULL};
#if GERMAN
static const u8 sCondMsg17[] = _("{STR_VAR_1} lauscht den Geräuschen\nder Maschinen.");
#else
static const u8 sCondMsg17[] = _("{STR_VAR_1} is listening to the\nsound of the machines.");
#endif
static const u8* const sMachineTexts[] = {sCondMsg13, sCondMsg17, NULL};
#if GERMAN
static const u8 sCondMsg18[] = _("Waah! Dein Pokémon spritzte\nplötzlich Wasser!");
#else
static const u8 sCondMsg18[] = _("Waah! Your POKéMON suddenly splashed\nwater!");
#endif
#if GERMAN
static const u8 sCondMsg19[] = _("Dein Pokémon wirbelt Sand\nin die Luft!");
#else
static const u8 sCondMsg19[] = _("Your POKéMON is blowing sand in the\nair!");
#endif
#if GERMAN
static const u8 sCondMsg20[] = _("{STR_VAR_1} spielt und zupft\nGrashalme.");
#else
static const u8 sCondMsg20[] = _("{STR_VAR_1} is playing around,\nplucking bits of grass.");
#endif
#if GERMAN
static const u8 sCondMsg21[] = _("Dein Pokémon betrachtet fröhlich\ndeine Fußspuren!");
#else
static const u8 sCondMsg21[] = _("Your POKéMON is happily looking at\nyour footprints!");
#endif
#if GERMAN
static const u8 sCondMsg22[] = _("{STR_VAR_1} ist nervös und fühlt\nsich etwas eingeengt.");
#else
static const u8 sCondMsg22[] = _("{STR_VAR_1} is feeling nervous and a\ntouch claustrophobic.");
#endif
#if GERMAN
static const u8 sCondMsg23[] = _("{STR_VAR_1} ist in dem engen Raum\nvorsichtig.");
#else
static const u8 sCondMsg23[] = _("{STR_VAR_1} is cautious about the\nconfined area!");
#endif
static const u8* const sElevatorTexts[] = {sCondMsg22, sCondMsg23, NULL};
#if GERMAN
static const u8 sCondMsg24[] = _("Plötzlich wehte ein kalter Wind!");
#else
static const u8 sCondMsg24[] = _("A cold wind suddenly blew by!");
#endif
#if GERMAN
static const u8 sCondMsg25[] = _("Dein Pokémon wäre fast\nausgerutscht!");
#else
static const u8 sCondMsg25[] = _("Your POKéMON almost slipped and fell\nover!");
#endif
#if GERMAN
static const u8 sCondMsg26[] = _("Dein Pokémon scheint überrascht,\nEis zu berühren.");
#else
static const u8 sCondMsg26[] = _("Your POKéMON seems surprised to\ntouch ice.");
#endif
static const u8* const sColdTexts[] = {sCondMsg24, sCondMsg25, sCondMsg26, NULL};
#if GERMAN
static const u8 sCondMsg27[] = _("Dein Pokémon hat ein Blütenblatt\nim Gesicht!");
#else
static const u8 sCondMsg27[] = _("Your POKéMON has a flower petal on\nits face!");
#endif
#if GERMAN
static const u8 sCondMsg28[] = _("{STR_VAR_1} knurrt leise.");
#else
static const u8 sCondMsg28[] = _("{STR_VAR_1} is growling softly.");
#endif
#if GERMAN
static const u8 sCondMsg29[] = _("{STR_VAR_1} zittert vor Angst.");
#else
static const u8 sCondMsg29[] = _("{STR_VAR_1} is trembling with fear.");
#endif
#if GERMAN
static const u8 sCondMsg30[] = _("{STR_VAR_1} wirkt irgendwie traurig…");
#else
static const u8 sCondMsg30[] = _("{STR_VAR_1} seems somehow sad…");
#endif
static const u8* const sFearTexts[] = {sCondMsg29, sCondMsg30, NULL};
#if GERMAN
static const u8 sCondMsg31[] = _("{STR_VAR_1} sucht im Gras Schutz\nvor dem Regen.");
#else
static const u8 sCondMsg31[] = _("{STR_VAR_1} is taking shelter in the\ngrass from the rain.");
#endif
#if GERMAN
static const u8 sCondMsg32[] = _("{STR_VAR_1} scheint sehr zu frieren.");
#else
static const u8 sCondMsg32[] = _("{STR_VAR_1} seems very cold.");
#endif
#if GERMAN
static const u8 sCondMsg33[] = _("{STR_VAR_1} blickt aufs Meer.");
#else
static const u8 sCondMsg33[] = _("{STR_VAR_1} is staring at the sea.");
#endif
#if GERMAN
static const u8 sCondMsg34[] = _("Dein Pokémon blickt aufmerksam\naufs Meer!");
#else
static const u8 sCondMsg34[] = _("Your POKéMON is staring intently at\nthe sea!");
#endif
#if GERMAN
static const u8 sCondMsg35[] = _("{STR_VAR_1} betrachtet die\ntosende See.");
#else
static const u8 sCondMsg35[] = _("{STR_VAR_1} is looking at the\nsurging sea.");
#endif
static const u8* const sSeaTexts[] = {sCondMsg33, sCondMsg34, sCondMsg35, NULL};
#if GERMAN
static const u8 sCondMsg36[] = _("{STR_VAR_1} lauscht dem Rauschen\ndes Wasserfalls.");
#else
static const u8 sCondMsg36[] = _("{STR_VAR_1} is listening to the\nsound of the waterfall.");
#endif
#if GERMAN
static const u8 sCondMsg37[] = _("{STR_VAR_1} freut sich über\nden Regen!");
#else
static const u8 sCondMsg37[] = _("{STR_VAR_1} seems to be happy about\nthe rain!");
#endif
#if GERMAN
static const u8 sCondMsg38[] = _("{STR_VAR_1} betrachtet sein\nSpiegelbild im Wasser.");
#else
static const u8 sCondMsg38[] = _("{STR_VAR_1} is staring at its\nreflection in the water.");
#endif
#if GERMAN
static const u8 sCondMsg39[] = _("{STR_VAR_1} entspannt sich beim\nRascheln der Blätter…");
#else
static const u8 sCondMsg39[] = _("{STR_VAR_1} seems to relax as it\nhears the sound of rustling leaves…");
#endif
#if GERMAN
static const u8 sCondMsg40[] = _("{STR_VAR_1} nagt am Eis.");
#else
static const u8 sCondMsg40[] = _("{STR_VAR_1} is gnawing at the ice.");
#endif
#if GERMAN
static const u8 sCondMsg41[] = _("{STR_VAR_1} berührt das Eis.");
#else
static const u8 sCondMsg41[] = _("{STR_VAR_1} is touching the ice.");
#endif
static const u8* const sIceTexts[] = {sCondMsg26, sCondMsg40, sCondMsg41, NULL};
#if GERMAN
static const u8 sCondMsg42[] = _("{STR_VAR_1}s Verbrennung sieht\nschmerzhaft aus!");
#else
static const u8 sCondMsg42[] = _("{STR_VAR_1}'s burn looks painful!");
#endif
#if GERMAN
static const u8 sCondMsg43[] = _("{STR_VAR_1} freut sich,\ndraußen zu sein!");
#else
static const u8 sCondMsg43[] = _("{STR_VAR_1} is happy to see what's\noutdoors!");
#endif
#if GERMAN
static const u8 sCondMsg44[] = _("{STR_VAR_1} blickt hinauf\nzum Himmel.");
#else
static const u8 sCondMsg44[] = _("{STR_VAR_1} is looking up at the\nsky.");
#endif
static const u8* const sDayTexts[] = {sCondMsg43, sCondMsg44, NULL};
#if GERMAN
static const u8 sCondMsg45[] = _("Dein Pokémon starrt gebannt\nzum Nachthimmel!");
#else
static const u8 sCondMsg45[] = _("Your POKéMON is staring spellbound\nat the night sky!");
#endif
#if GERMAN
static const u8 sCondMsg46[] = _("Dein Pokémon genießt glücklich\nden Sternenhimmel!");
#else
static const u8 sCondMsg46[] = _("Your POKéMON is happily gazing at\nthe beautiful, starry sky!");
#endif
static const u8* const sNightTexts[] = {sCondMsg45, sCondMsg46, NULL};
#if GERMAN
static const u8 sCondMsg50[] = _("{STR_VAR_1} ist vom ungewöhnlichen\nWetter beunruhigt!");
#else
static const u8 sCondMsg50[] = _("{STR_VAR_1} is disturbed by the\nabnormal weather!");
#endif

// See the struct definition in follower_helper.h for more info
const struct FollowerMsgInfoExtended gFollowerConditionalMessages[COND_MSG_COUNT] =
{
    [COND_MSG_CELEBI] =
    {
        .text = (u8*)sCelebiTexts,
        .textSpread = 1,
        .script = EventScript_FollowerDance,
        .emotion = FOLLOWER_EMOTION_NEUTRAL,
        .conditions =
        {
            MATCH_SPECIES(SPECIES_CELEBI),
        },
    },
    [COND_MSG_FIRE] =
    {
        .text = (u8*)sFireTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_NEUTRAL,
        .conditions =
        {
            MATCH_TYPES(TYPE_FIRE, TYPE_FIRE),
        },
    },
    [COND_MSG_EVER_GRANDE] =
    {
        .text = sCondMsg06,
        .script = EventScript_FollowerFaceUp,
        .emotion = FOLLOWER_EMOTION_HAPPY,
        .conditions =
        {
            MATCH_MAP(MAP_EVER_GRANDE_CITY),
        },
    },
    [COND_MSG_ROUTE_112] =
    {
        .text = sCondMsg07,
        .emotion = FOLLOWER_EMOTION_HAPPY,
        .conditions =
        {
            MATCH_MAP(MAP_ROUTE112),
        },
    },
    [COND_MSG_DAY_CARE] =
    {
        .text = sCondMsg08,
        .script = EventScript_FollowerNostalgia,
        .emotion = FOLLOWER_EMOTION_NEUTRAL,
        .conditions =
        {
            MATCH_MAP(MAP_ROUTE117_POKEMON_DAY_CARE)
        },
    },
    [COND_MSG_MART] =
    {
        .text = (u8*)sShopTexts,
        .textSpread = 1,
        .script = EventScript_FollowerLookAround,
        .emotion = FOLLOWER_EMOTION_NEUTRAL,
        .conditions =
        {
            MATCH_MUSIC(MUS_POKE_MART)
        },
    },
    [COND_MSG_VICTORY_ROAD] =
    {
        .text = sCondMsg11,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .conditions =
        {
            MATCH_MUSIC(MUS_VICTORY_ROAD)
        },
    },
    [COND_MSG_BIKE_SHOP] =
    {
        .text = sCondMsg12,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .conditions =
        {
            MATCH_MAP(MAP_MAUVILLE_CITY_BIKE_SHOP)
        },
    },
    [COND_MSG_MACHINES] =
    {
        .text = (u8*)sMachineTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .orFlag = 1, // match any of these maps
        .conditions =
        {
            MATCH_MAP(MAP_NEW_MAUVILLE_INSIDE),
            MATCH_MAP(MAP_SLATEPORT_CITY_STERNS_SHIPYARD_1F),
            MATCH_MAP(MAP_SLATEPORT_CITY_STERNS_SHIPYARD_2F),
        },
    },
    [COND_MSG_SAILING] =
    {
        .text = (u8*)sBoatTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .script = EventScript_FollowerLookAround,
        .conditions =
        {
            MATCH_MUSIC(MUS_SAILING),
        },
    },
    [COND_MSG_PUDDLE] =
    {
        .text = sCondMsg18,
        .script = EventScript_FollowerHopping,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_ON_MB(MB_SHALLOW_WATER, MB_PUDDLE),
        },
    },
    [COND_MSG_SAND] =
    {
        .text = sCondMsg19,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_ON_MB(MB_SAND, MB_DEEP_SAND),
        },
    },
    [COND_MSG_GRASS] =
    {
        .text = sCondMsg20,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_ON_MB(MB_TALL_GRASS, MB_LONG_GRASS),
        },
    },
    [COND_MSG_FOOTPRINTS] =
    {
        .text = sCondMsg21,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_ON_MB(MB_SAND, MB_FOOTPRINTS),
        },
    },
    [COND_MSG_ELEVATOR] =
    {
        .text = (u8*)sElevatorTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_SURPRISE,
        .conditions =
        {
            MATCH_MAP(MAP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR),
        },
    },
    [COND_MSG_ICE_ROOM] =
    {
        .text = (u8*)sColdTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_SURPRISE,
        .conditions =
        {
            MATCH_MAP(MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM),
        },
    },
    [COND_MSG_ROUTE_117] =
    {
        .text = sCondMsg27,
        .emotion = FOLLOWER_EMOTION_SURPRISE,
        .conditions =
        {
            MATCH_MAP(MAP_ROUTE117),
        },
    },
    [COND_MSG_DRAGON_GROWL] =
    {
        .text = sCondMsg28,
        .emotion = FOLLOWER_EMOTION_UPSET,
        .conditions =
        {
            MATCH_TYPES(TYPE_DRAGON, TYPE_DRAGON),
            MATCH_MAPSEC(MAPSEC_SKY_PILLAR),
        },
    },
    [COND_MSG_FEAR] =
    {
        .text = (u8*)sFearTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_UPSET,
        .conditions =
        {
            MATCH_NOT_TYPES(TYPE_GHOST, TYPE_GHOST),
            MATCH_MAPSEC(MAPSEC_MT_PYRE),
            MATCH_MUSIC(MUS_MT_PYRE),
        },
    },
    [COND_MSG_FIRE_RAIN] =
    {
        .text = sCondMsg31,
        .emotion = FOLLOWER_EMOTION_UPSET,
        .conditions =
        {
            MATCH_TYPES(TYPE_FIRE, TYPE_FIRE),
            MATCH_WEATHER(WEATHER_RAIN, WEATHER_RAIN_THUNDERSTORM),
        },
    },
    [COND_MSG_FROZEN] =
    {
        .text = sCondMsg32,
        .emotion = FOLLOWER_EMOTION_UPSET,
        .conditions =
        {
           MATCH_STATUS(STATUS1_FREEZE),
        },
    },
    [COND_MSG_SEASIDE] =
    {
        .text = (u8*)sSeaTexts,
        .textSpread = 1,
        .script = EventScript_FollowerFaceResult,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_NEAR_MB(MB_OCEAN_WATER, 5),
        },
    },
    [COND_MSG_WATERFALL] =
    {
        .text = sCondMsg36,
        .script = EventScript_FollowerFaceResult,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_NEAR_MB(MB_WATERFALL, 5),
        },
    },
    [COND_MSG_RAIN] =
    {
        .text = sCondMsg37,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
        MATCH_NOT_TYPES(TYPE_FIRE, TYPE_FIRE),
        MATCH_WEATHER(WEATHER_RAIN, WEATHER_RAIN_THUNDERSTORM)
    }
    },
    [COND_MSG_REFLECTION] =
    {
        .text = sCondMsg38,
        .script = EventScript_FollowerFaceResult,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .conditions =
        {
            MATCH_NEAR_MB(MB_POND_WATER, 1),
        },
    },
    [COND_MSG_LEAVES] =
    {
        .text = sCondMsg39,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .conditions =
        {
            MATCH_MAPSEC(MAPSEC_PETALBURG_WOODS),
        },
    },
    [COND_MSG_ICE] =
    {
        .text = (u8*)sIceTexts,
        .textSpread = 1,
        .script = EventScript_FollowerFaceResult,
        .emotion = FOLLOWER_EMOTION_PENSIVE,
        .conditions =
        {
            MATCH_NEAR_MB(MB_ICE, 1),
        },
    },
    [COND_MSG_BURN] =
    {
        .text = sCondMsg42,
        .emotion = FOLLOWER_EMOTION_SAD,
        .conditions =
        {
            MATCH_STATUS(STATUS1_BURN),
        },
    },
    [COND_MSG_DAY] =
    {
        .text = (u8*)sDayTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_TIME_OF_DAY(TIME_DAY),
        },
    },
    [COND_MSG_NIGHT] =
    {
        .text = (u8*)sNightTexts,
        .textSpread = 1,
        .emotion = FOLLOWER_EMOTION_MUSIC,
        .conditions =
        {
            MATCH_TIME_OF_DAY(TIME_NIGHT),
        },
    },
    [COND_MSG_ABNORMAL_WEATHER] =
    {
        .text = sCondMsg50,
        .emotion = FOLLOWER_EMOTION_SURPRISE,
        .conditions =
        {
            MATCH_MUSIC(MUS_ABNORMAL_WEATHER),
            MATCH_NOT_SPECIES(SPECIES_KYOGRE),
            MATCH_NOT_SPECIES(SPECIES_GROUDON),
            MATCH_NOT_SPECIES(SPECIES_RAYQUAZA),
        }
    },
};

// Pool of "unconditional" follower messages
const struct FollowerMessagePool gFollowerBasicMessages[FOLLOWER_EMOTION_LENGTH] =
{
    [FOLLOWER_EMOTION_HAPPY]    = {gFollowerHappyMessages,    EventScript_FollowerGeneric, FOLLOWER_HAPPY_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_NEUTRAL]  = {gFollowerNeutralMessages,  EventScript_FollowerGeneric, FOLLOWER_NEUTRAL_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_SAD]      = {gFollowerSadMessages,      EventScript_FollowerGeneric, FOLLOWER_SAD_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_UPSET]    = {gFollowerUpsetMessages,    EventScript_FollowerGeneric, FOLLOWER_UPSET_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_ANGRY]    = {gFollowerAngryMessages,    EventScript_FollowerGeneric, FOLLOWER_ANGRY_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_PENSIVE]  = {gFollowerPensiveMessages,  EventScript_FollowerGeneric, FOLLOWER_PENSIVE_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_LOVE]     = {gFollowerLoveMessages,     EventScript_FollowerGeneric, FOLLOWER_LOVE_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_SURPRISE] = {gFollowerSurpriseMessages, EventScript_FollowerGeneric, FOLLOWER_SURPRISE_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_CURIOUS]  = {gFollowerCuriousMessages,  EventScript_FollowerGeneric, FOLLOWER_CURIOUS_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_MUSIC]    = {gFollowerMusicMessages,    EventScript_FollowerGeneric, FOLLOWER_MUSIC_MESSAGE_COUNT},
    [FOLLOWER_EMOTION_POISONED] = {gFollowerPoisonedMessages, EventScript_FollowerGeneric, FOLLOWER_POISONED_MESSAGE_COUNT},
};
