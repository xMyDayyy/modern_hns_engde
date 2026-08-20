#ifndef GUARD_CONSTANTS_FLAGS_FRLG_HNS_H
#define GUARD_CONSTANTS_FLAGS_FRLG_HNS_H

// Auto-generiert fuer den Kanto-Merge (test/kanto-start).
// Die FRLG-Kartenskripte benutzen diese Flags; flags_hns.h definiert sie
// als 0 (= FLAG_TEMP_0), was bei jedem Kartenwechsel geloescht wird.
// Hier bekommen sie echte Slots hinter dem Hoenn-Block.

// Eigener Adressraum ausserhalb von SaveBlock1 (dort sind nur 4 Byte frei).
#define FRLG_FLAGS_START 0x3000

#undef  FLAG_BEAT_RIVAL_IN_OAKS_LAB
#define FLAG_BEAT_RIVAL_IN_OAKS_LAB                              (FRLG_FLAGS_START + 0x0)
#undef  FLAG_BOUGHT_MAGIKARP
#define FLAG_BOUGHT_MAGIKARP                                     (FRLG_FLAGS_START + 0x1)
#undef  FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT
#define FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT                         (FRLG_FLAGS_START + 0x2)
#undef  FLAG_CINNABAR_GYM_QUIZ_1
#define FLAG_CINNABAR_GYM_QUIZ_1                                 (FRLG_FLAGS_START + 0x3)
#undef  FLAG_CINNABAR_GYM_QUIZ_2
#define FLAG_CINNABAR_GYM_QUIZ_2                                 (FRLG_FLAGS_START + 0x4)
#undef  FLAG_CINNABAR_GYM_QUIZ_3
#define FLAG_CINNABAR_GYM_QUIZ_3                                 (FRLG_FLAGS_START + 0x5)
#undef  FLAG_CINNABAR_GYM_QUIZ_4
#define FLAG_CINNABAR_GYM_QUIZ_4                                 (FRLG_FLAGS_START + 0x6)
#undef  FLAG_CINNABAR_GYM_QUIZ_5
#define FLAG_CINNABAR_GYM_QUIZ_5                                 (FRLG_FLAGS_START + 0x7)
#undef  FLAG_CINNABAR_GYM_QUIZ_6
#define FLAG_CINNABAR_GYM_QUIZ_6                                 (FRLG_FLAGS_START + 0x8)
#undef  FLAG_DEFEATED_AGATHA
#define FLAG_DEFEATED_AGATHA                                     (FRLG_FLAGS_START + 0x9)
#undef  FLAG_DEFEATED_BLAINE
#define FLAG_DEFEATED_BLAINE                                     (FRLG_FLAGS_START + 0xA)
#undef  FLAG_DEFEATED_BROCK
#define FLAG_DEFEATED_BROCK                                      (FRLG_FLAGS_START + 0xB)
#undef  FLAG_DEFEATED_BRUNO
#define FLAG_DEFEATED_BRUNO                                      (FRLG_FLAGS_START + 0xC)
#undef  FLAG_DEFEATED_CHAMP
#define FLAG_DEFEATED_CHAMP                                      (FRLG_FLAGS_START + 0xD)
#undef  FLAG_DEFEATED_ERIKA
#define FLAG_DEFEATED_ERIKA                                      (FRLG_FLAGS_START + 0xE)
#undef  FLAG_DEFEATED_KOGA
#define FLAG_DEFEATED_KOGA                                       (FRLG_FLAGS_START + 0xF)
#undef  FLAG_DEFEATED_LANCE
#define FLAG_DEFEATED_LANCE                                      (FRLG_FLAGS_START + 0x10)
#undef  FLAG_DEFEATED_LEADER_GIOVANNI
#define FLAG_DEFEATED_LEADER_GIOVANNI                            (FRLG_FLAGS_START + 0x11)
#undef  FLAG_DEFEATED_LORELEI
#define FLAG_DEFEATED_LORELEI                                    (FRLG_FLAGS_START + 0x12)
#undef  FLAG_DEFEATED_LT_SURGE
#define FLAG_DEFEATED_LT_SURGE                                   (FRLG_FLAGS_START + 0x13)
#undef  FLAG_DEFEATED_MISTY
#define FLAG_DEFEATED_MISTY                                      (FRLG_FLAGS_START + 0x14)
#undef  FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE
#define FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE                       (FRLG_FLAGS_START + 0x15)
#undef  FLAG_DEFEATED_SABRINA
#define FLAG_DEFEATED_SABRINA                                    (FRLG_FLAGS_START + 0x16)
#undef  FLAG_DID_CH_DING_TRADE
#define FLAG_DID_CH_DING_TRADE                                   (FRLG_FLAGS_START + 0x17)
#undef  FLAG_DID_ESPHERE_TRADE
#define FLAG_DID_ESPHERE_TRADE                                   (FRLG_FLAGS_START + 0x18)
#undef  FLAG_DID_MARC_TRADE
#define FLAG_DID_MARC_TRADE                                      (FRLG_FLAGS_START + 0x19)
#undef  FLAG_DID_MIMIEN_TRADE
#define FLAG_DID_MIMIEN_TRADE                                    (FRLG_FLAGS_START + 0x1A)
#undef  FLAG_DID_MS_NIDO_TRADE
#define FLAG_DID_MS_NIDO_TRADE                                   (FRLG_FLAGS_START + 0x1B)
#undef  FLAG_DID_NINA_TRADE
#define FLAG_DID_NINA_TRADE                                      (FRLG_FLAGS_START + 0x1C)
#undef  FLAG_DID_SEELOR_TRADE
#define FLAG_DID_SEELOR_TRADE                                    (FRLG_FLAGS_START + 0x1D)
#undef  FLAG_DID_TANGENY_TRADE
#define FLAG_DID_TANGENY_TRADE                                   (FRLG_FLAGS_START + 0x1E)
#undef  FLAG_DID_ZYNX_TRADE
#define FLAG_DID_ZYNX_TRADE                                      (FRLG_FLAGS_START + 0x1F)
#undef  FLAG_FOUGHT_ARTICUNO
#define FLAG_FOUGHT_ARTICUNO                                     (FRLG_FLAGS_START + 0x20)
#undef  FLAG_FOUGHT_HO_OH
#define FLAG_FOUGHT_HO_OH                                        (FRLG_FLAGS_START + 0x21)
#undef  FLAG_FOUGHT_LUGIA
#define FLAG_FOUGHT_LUGIA                                        (FRLG_FLAGS_START + 0x22)
#undef  FLAG_FOUGHT_MEWTWO
#define FLAG_FOUGHT_MEWTWO                                       (FRLG_FLAGS_START + 0x23)
#undef  FLAG_FOUGHT_MOLTRES
#define FLAG_FOUGHT_MOLTRES                                      (FRLG_FLAGS_START + 0x24)
#undef  FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
#define FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1                      (FRLG_FLAGS_START + 0x25)
#undef  FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
#define FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2                      (FRLG_FLAGS_START + 0x26)
#undef  FLAG_FOUGHT_ZAPDOS
#define FLAG_FOUGHT_ZAPDOS                                       (FRLG_FLAGS_START + 0x27)
#undef  FLAG_GOT_10_COINS_FROM_GAMBLER
#define FLAG_GOT_10_COINS_FROM_GAMBLER                           (FRLG_FLAGS_START + 0x28)
#undef  FLAG_GOT_20_COINS_FROM_GAMBLER
#define FLAG_GOT_20_COINS_FROM_GAMBLER                           (FRLG_FLAGS_START + 0x29)
#undef  FLAG_GOT_20_COINS_FROM_GAMBLER_2
#define FLAG_GOT_20_COINS_FROM_GAMBLER_2                         (FRLG_FLAGS_START + 0x2A)
#undef  FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE
#define FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE                      (FRLG_FLAGS_START + 0x2B)
#undef  FLAG_GOT_BICYCLE
#define FLAG_GOT_BICYCLE                                         (FRLG_FLAGS_START + 0x2C)
#undef  FLAG_GOT_BIKE_VOUCHER
#define FLAG_GOT_BIKE_VOUCHER                                    (FRLG_FLAGS_START + 0x2D)
#undef  FLAG_GOT_COIN_CASE
#define FLAG_GOT_COIN_CASE                                       (FRLG_FLAGS_START + 0x2E)
#undef  FLAG_GOT_DOME_FOSSIL
#define FLAG_GOT_DOME_FOSSIL                                     (FRLG_FLAGS_START + 0x2F)
#undef  FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE
#define FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE                        (FRLG_FLAGS_START + 0x30)
#undef  FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE
#define FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE                        (FRLG_FLAGS_START + 0x31)
#undef  FLAG_GOT_FAME_CHECKER
#define FLAG_GOT_FAME_CHECKER                                    (FRLG_FLAGS_START + 0x32)
#undef  FLAG_GOT_FOSSIL_FROM_MT_MOON
#define FLAG_GOT_FOSSIL_FROM_MT_MOON                             (FRLG_FLAGS_START + 0x33)
#undef  FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER
#define FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER         (FRLG_FLAGS_START + 0x34)
#undef  FLAG_GOT_GOOD_ROD
#define FLAG_GOT_GOOD_ROD                                        (FRLG_FLAGS_START + 0x35)
#undef  FLAG_GOT_HELIX_FOSSIL
#define FLAG_GOT_HELIX_FOSSIL                                    (FRLG_FLAGS_START + 0x36)
#undef  FLAG_GOT_HITMON_FROM_DOJO
#define FLAG_GOT_HITMON_FROM_DOJO                                (FRLG_FLAGS_START + 0x37)
#undef  FLAG_GOT_HM01
#define FLAG_GOT_HM01                                            (FRLG_FLAGS_START + 0x38)
#undef  FLAG_GOT_HM02
#define FLAG_GOT_HM02                                            (FRLG_FLAGS_START + 0x39)
#undef  FLAG_GOT_HM03
#define FLAG_GOT_HM03                                            (FRLG_FLAGS_START + 0x3A)
#undef  FLAG_GOT_HM04
#define FLAG_GOT_HM04                                            (FRLG_FLAGS_START + 0x3B)
#undef  FLAG_GOT_HM05
#define FLAG_GOT_HM05                                            (FRLG_FLAGS_START + 0x3C)
#undef  FLAG_GOT_HM06
#define FLAG_GOT_HM06                                            (FRLG_FLAGS_START + 0x3D)
#undef  FLAG_GOT_ITEMFINDER
#define FLAG_GOT_ITEMFINDER                                      (FRLG_FLAGS_START + 0x3E)
#undef  FLAG_GOT_LAPRAS_FROM_SILPH
#define FLAG_GOT_LAPRAS_FROM_SILPH                               (FRLG_FLAGS_START + 0x3F)
#undef  FLAG_GOT_MASTER_BALL_FROM_SILPH
#define FLAG_GOT_MASTER_BALL_FROM_SILPH                          (FRLG_FLAGS_START + 0x40)
#undef  FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER
#define FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER              (FRLG_FLAGS_START + 0x41)
#undef  FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1
#define FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1               (FRLG_FLAGS_START + 0x42)
#undef  FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL
#define FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL                    (FRLG_FLAGS_START + 0x43)
#undef  FLAG_GOT_OLD_AMBER
#define FLAG_GOT_OLD_AMBER                                       (FRLG_FLAGS_START + 0x44)
#undef  FLAG_GOT_OLD_ROD
#define FLAG_GOT_OLD_ROD                                         (FRLG_FLAGS_START + 0x45)
#undef  FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
#define FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL               (FRLG_FLAGS_START + 0x46)
#undef  FLAG_GOT_POKE_FLUTE
#define FLAG_GOT_POKE_FLUTE                                      (FRLG_FLAGS_START + 0x47)
#undef  FLAG_GOT_POTION_ON_ROUTE_1
#define FLAG_GOT_POTION_ON_ROUTE_1                               (FRLG_FLAGS_START + 0x48)
#undef  FLAG_GOT_POWDER_JAR
#define FLAG_GOT_POWDER_JAR                                      (FRLG_FLAGS_START + 0x49)
#undef  FLAG_GOT_RECORD_SETTING_MAGIKARP
#define FLAG_GOT_RECORD_SETTING_MAGIKARP                         (FRLG_FLAGS_START + 0x4A)
#undef  FLAG_GOT_RUBY
#define FLAG_GOT_RUBY                                            (FRLG_FLAGS_START + 0x4B)
#undef  FLAG_GOT_SS_TICKET
#define FLAG_GOT_SS_TICKET                                       (FRLG_FLAGS_START + 0x4C)
#undef  FLAG_GOT_SS_TICKET_DUP
#define FLAG_GOT_SS_TICKET_DUP                                   (FRLG_FLAGS_START + 0x4D)
#undef  FLAG_GOT_TEA
#define FLAG_GOT_TEA                                             (FRLG_FLAGS_START + 0x4E)
#undef  FLAG_GOT_TM03_FROM_MISTY
#define FLAG_GOT_TM03_FROM_MISTY                                 (FRLG_FLAGS_START + 0x4F)
#undef  FLAG_GOT_TM04_FROM_SABRINA
#define FLAG_GOT_TM04_FROM_SABRINA                               (FRLG_FLAGS_START + 0x50)
#undef  FLAG_GOT_TM06_FROM_KOGA
#define FLAG_GOT_TM06_FROM_KOGA                                  (FRLG_FLAGS_START + 0x51)
#undef  FLAG_GOT_TM16_FROM_THIRSTY_GIRL
#define FLAG_GOT_TM16_FROM_THIRSTY_GIRL                          (FRLG_FLAGS_START + 0x52)
#undef  FLAG_GOT_TM19_FROM_ERIKA
#define FLAG_GOT_TM19_FROM_ERIKA                                 (FRLG_FLAGS_START + 0x53)
#undef  FLAG_GOT_TM20_FROM_THIRSTY_GIRL
#define FLAG_GOT_TM20_FROM_THIRSTY_GIRL                          (FRLG_FLAGS_START + 0x54)
#undef  FLAG_GOT_TM26_FROM_GIOVANNI
#define FLAG_GOT_TM26_FROM_GIOVANNI                              (FRLG_FLAGS_START + 0x55)
#undef  FLAG_GOT_TM27
#define FLAG_GOT_TM27                                            (FRLG_FLAGS_START + 0x56)
#undef  FLAG_GOT_TM28_FROM_ROCKET
#define FLAG_GOT_TM28_FROM_ROCKET                                (FRLG_FLAGS_START + 0x57)
#undef  FLAG_GOT_TM29_FROM_MR_PSYCHIC
#define FLAG_GOT_TM29_FROM_MR_PSYCHIC                            (FRLG_FLAGS_START + 0x58)
#undef  FLAG_GOT_TM33_FROM_THIRSTY_GIRL
#define FLAG_GOT_TM33_FROM_THIRSTY_GIRL                          (FRLG_FLAGS_START + 0x59)
#undef  FLAG_GOT_TM34_FROM_SURGE
#define FLAG_GOT_TM34_FROM_SURGE                                 (FRLG_FLAGS_START + 0x5A)
#undef  FLAG_GOT_TM38_FROM_BLAINE
#define FLAG_GOT_TM38_FROM_BLAINE                                (FRLG_FLAGS_START + 0x5B)
#undef  FLAG_GOT_TM39_FROM_BROCK
#define FLAG_GOT_TM39_FROM_BROCK                                 (FRLG_FLAGS_START + 0x5C)
#undef  FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
#define FLAG_GOT_TM42_AT_MEMORIAL_PILLAR                         (FRLG_FLAGS_START + 0x5D)
#undef  FLAG_GOT_TOGEPI_EGG
#define FLAG_GOT_TOGEPI_EGG                                      (FRLG_FLAGS_START + 0x5E)
#undef  FLAG_GOT_VS_SEEKER
#define FLAG_GOT_VS_SEEKER                                       (FRLG_FLAGS_START + 0x5F)
#undef  FLAG_HELPED_BILL_IN_SEA_COTTAGE
#define FLAG_HELPED_BILL_IN_SEA_COTTAGE                          (FRLG_FLAGS_START + 0x60)
#undef  FLAG_HIDE_BILL_CLEFAIRY
#define FLAG_HIDE_BILL_CLEFAIRY                                  (FRLG_FLAGS_START + 0x61)
#undef  FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE
#define FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE                         (FRLG_FLAGS_START + 0x62)
#undef  FLAG_HIDE_BIRTH_ISLAND_METEORITE
#define FLAG_HIDE_BIRTH_ISLAND_METEORITE                         (FRLG_FLAGS_START + 0x63)
#undef  FLAG_HIDE_CELADON_ROCKETS
#define FLAG_HIDE_CELADON_ROCKETS                                (FRLG_FLAGS_START + 0x64)
#undef  FLAG_HIDE_CERULEAN_CAVE_GUARD
#define FLAG_HIDE_CERULEAN_CAVE_GUARD                            (FRLG_FLAGS_START + 0x65)
#undef  FLAG_HIDE_CINNABAR_BILL
#define FLAG_HIDE_CINNABAR_BILL                                  (FRLG_FLAGS_START + 0x66)
#undef  FLAG_HIDE_CINNABAR_POKECENTER_BILL
#define FLAG_HIDE_CINNABAR_POKECENTER_BILL                       (FRLG_FLAGS_START + 0x67)
#undef  FLAG_HIDE_CINNABAR_SEAGALLOP
#define FLAG_HIDE_CINNABAR_SEAGALLOP                             (FRLG_FLAGS_START + 0x68)
#undef  FLAG_HIDE_DOME_FOSSIL
#define FLAG_HIDE_DOME_FOSSIL                                    (FRLG_FLAGS_START + 0x69)
#undef  FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
#define FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS                    (FRLG_FLAGS_START + 0x6A)
#undef  FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL
#define FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL                      (FRLG_FLAGS_START + 0x6B)
#undef  FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL
#define FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL                  (FRLG_FLAGS_START + 0x6C)
#undef  FLAG_HIDE_FIVE_ISLAND_ROCKETS
#define FLAG_HIDE_FIVE_ISLAND_ROCKETS                            (FRLG_FLAGS_START + 0x6D)
#undef  FLAG_HIDE_FOUR_ISLAND_RIVAL
#define FLAG_HIDE_FOUR_ISLAND_RIVAL                              (FRLG_FLAGS_START + 0x6E)
#undef  FLAG_HIDE_HELIX_FOSSIL
#define FLAG_HIDE_HELIX_FOSSIL                                   (FRLG_FLAGS_START + 0x6F)
#undef  FLAG_HIDE_ICEFALL_CAVE_LORELEI
#define FLAG_HIDE_ICEFALL_CAVE_LORELEI                           (FRLG_FLAGS_START + 0x70)
#undef  FLAG_HIDE_LIFT_KEY
#define FLAG_HIDE_LIFT_KEY                                       (FRLG_FLAGS_START + 0x71)
#undef  FLAG_HIDE_LORELEI_IN_HER_HOUSE
#define FLAG_HIDE_LORELEI_IN_HER_HOUSE                           (FRLG_FLAGS_START + 0x72)
#undef  FLAG_HIDE_LOSTELLE_IN_BERRY_FOREST
#define FLAG_HIDE_LOSTELLE_IN_BERRY_FOREST                       (FRLG_FLAGS_START + 0x73)
#undef  FLAG_HIDE_LOSTELLE_IN_HER_HOME
#define FLAG_HIDE_LOSTELLE_IN_HER_HOME                           (FRLG_FLAGS_START + 0x74)
#undef  FLAG_HIDE_LOST_CAVE_SELPHY
#define FLAG_HIDE_LOST_CAVE_SELPHY                               (FRLG_FLAGS_START + 0x75)
#undef  FLAG_HIDE_MISC_KANTO_ROCKETS
#define FLAG_HIDE_MISC_KANTO_ROCKETS                             (FRLG_FLAGS_START + 0x76)
#undef  FLAG_HIDE_NUGGET_BRIDGE_ROCKET
#define FLAG_HIDE_NUGGET_BRIDGE_ROCKET                           (FRLG_FLAGS_START + 0x77)
#undef  FLAG_HIDE_OAK_IN_HIS_LAB
#define FLAG_HIDE_OAK_IN_HIS_LAB                                 (FRLG_FLAGS_START + 0x78)
#undef  FLAG_HIDE_OAK_IN_PALLET_TOWN
#define FLAG_HIDE_OAK_IN_PALLET_TOWN                             (FRLG_FLAGS_START + 0x79)
#undef  FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
#define FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL                     (FRLG_FLAGS_START + 0x7A)
#undef  FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
#define FLAG_HIDE_PEWTER_CITY_GYM_GUIDE                          (FRLG_FLAGS_START + 0x7B)
#undef  FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
#define FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY                  (FRLG_FLAGS_START + 0x7C)
#undef  FLAG_HIDE_PEWTER_MUSEUM_GUIDE
#define FLAG_HIDE_PEWTER_MUSEUM_GUIDE                            (FRLG_FLAGS_START + 0x7D)
#undef  FLAG_HIDE_POKEHOUSE_FUJI
#define FLAG_HIDE_POKEHOUSE_FUJI                                 (FRLG_FLAGS_START + 0x7E)
#undef  FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY
#define FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY                 (FRLG_FLAGS_START + 0x7F)
#undef  FLAG_HIDE_POWER_PLANT_ELECTRODE_1
#define FLAG_HIDE_POWER_PLANT_ELECTRODE_1                        (FRLG_FLAGS_START + 0x80)
#undef  FLAG_HIDE_POWER_PLANT_ELECTRODE_2
#define FLAG_HIDE_POWER_PLANT_ELECTRODE_2                        (FRLG_FLAGS_START + 0x81)
#undef  FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
#define FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY                  (FRLG_FLAGS_START + 0x82)
#undef  FLAG_HIDE_RESORT_GORGEOUS_SELPHY
#define FLAG_HIDE_RESORT_GORGEOUS_SELPHY                         (FRLG_FLAGS_START + 0x83)
#undef  FLAG_HIDE_ROUTE_12_SNORLAX
#define FLAG_HIDE_ROUTE_12_SNORLAX                               (FRLG_FLAGS_START + 0x84)
#undef  FLAG_HIDE_ROUTE_16_SNORLAX
#define FLAG_HIDE_ROUTE_16_SNORLAX                               (FRLG_FLAGS_START + 0x85)
#undef  FLAG_HIDE_RUIN_VALLEY_SCIENTIST
#define FLAG_HIDE_RUIN_VALLEY_SCIENTIST                          (FRLG_FLAGS_START + 0x86)
#undef  FLAG_HIDE_SAFARI_ZONE_WEST_GOLD_TEETH
#define FLAG_HIDE_SAFARI_ZONE_WEST_GOLD_TEETH                    (FRLG_FLAGS_START + 0x87)
#undef  FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
#define FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS       (FRLG_FLAGS_START + 0x88)
#undef  FLAG_HIDE_SAFFRON_CIVILIANS
#define FLAG_HIDE_SAFFRON_CIVILIANS                              (FRLG_FLAGS_START + 0x89)
#undef  FLAG_HIDE_SAFFRON_ROCKETS
#define FLAG_HIDE_SAFFRON_ROCKETS                                (FRLG_FLAGS_START + 0x8A)
#undef  FLAG_HIDE_SEAFOAM_1F_BOULDER_1
#define FLAG_HIDE_SEAFOAM_1F_BOULDER_1                           (FRLG_FLAGS_START + 0x8B)
#undef  FLAG_HIDE_SEAFOAM_1F_BOULDER_2
#define FLAG_HIDE_SEAFOAM_1F_BOULDER_2                           (FRLG_FLAGS_START + 0x8C)
#undef  FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
#define FLAG_HIDE_SEAFOAM_B1F_BOULDER_1                          (FRLG_FLAGS_START + 0x8D)
#undef  FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
#define FLAG_HIDE_SEAFOAM_B1F_BOULDER_2                          (FRLG_FLAGS_START + 0x8E)
#undef  FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
#define FLAG_HIDE_SEAFOAM_B2F_BOULDER_1                          (FRLG_FLAGS_START + 0x8F)
#undef  FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
#define FLAG_HIDE_SEAFOAM_B2F_BOULDER_2                          (FRLG_FLAGS_START + 0x90)
#undef  FLAG_HIDE_SEAFOAM_B3F_BOULDER_1
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_1                          (FRLG_FLAGS_START + 0x91)
#undef  FLAG_HIDE_SEAFOAM_B3F_BOULDER_2
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_2                          (FRLG_FLAGS_START + 0x92)
#undef  FLAG_HIDE_SEAFOAM_B3F_BOULDER_3
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_3                          (FRLG_FLAGS_START + 0x93)
#undef  FLAG_HIDE_SEAFOAM_B3F_BOULDER_4
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_4                          (FRLG_FLAGS_START + 0x94)
#undef  FLAG_HIDE_SEAFOAM_B3F_BOULDER_5
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_5                          (FRLG_FLAGS_START + 0x95)
#undef  FLAG_HIDE_SEAFOAM_B3F_BOULDER_6
#define FLAG_HIDE_SEAFOAM_B3F_BOULDER_6                          (FRLG_FLAGS_START + 0x96)
#undef  FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
#define FLAG_HIDE_SEAFOAM_B4F_BOULDER_1                          (FRLG_FLAGS_START + 0x97)
#undef  FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
#define FLAG_HIDE_SEAFOAM_B4F_BOULDER_2                          (FRLG_FLAGS_START + 0x98)
#undef  FLAG_HIDE_SILPH_SCOPE
#define FLAG_HIDE_SILPH_SCOPE                                    (FRLG_FLAGS_START + 0x99)
#undef  FLAG_HIDE_SIX_ISLAND_POKECENTER_RIVAL
#define FLAG_HIDE_SIX_ISLAND_POKECENTER_RIVAL                    (FRLG_FLAGS_START + 0x9A)
#undef  FLAG_HIDE_SS_ANNE_RIVAL
#define FLAG_HIDE_SS_ANNE_RIVAL                                  (FRLG_FLAGS_START + 0x9B)
#undef  FLAG_HIDE_THREE_ISLAND_ANTIBIKERS
#define FLAG_HIDE_THREE_ISLAND_ANTIBIKERS                        (FRLG_FLAGS_START + 0x9C)
#undef  FLAG_HIDE_THREE_ISLAND_LONE_BIKER
#define FLAG_HIDE_THREE_ISLAND_LONE_BIKER                        (FRLG_FLAGS_START + 0x9D)
#undef  FLAG_HIDE_TOWER_FUJI
#define FLAG_HIDE_TOWER_FUJI                                     (FRLG_FLAGS_START + 0x9E)
#undef  FLAG_HIDE_TOWN_MAP
#define FLAG_HIDE_TOWN_MAP                                       (FRLG_FLAGS_START + 0x9F)
#undef  FLAG_HIDE_TWO_ISLAND_BEAUTY
#define FLAG_HIDE_TWO_ISLAND_BEAUTY                              (FRLG_FLAGS_START + 0xA0)
#undef  FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
#define FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE                (FRLG_FLAGS_START + 0xA1)
#undef  FLAG_HIDE_TWO_ISLAND_SUPER_NERD
#define FLAG_HIDE_TWO_ISLAND_SUPER_NERD                          (FRLG_FLAGS_START + 0xA2)
#undef  FLAG_HIDE_TWO_ISLAND_WOMAN
#define FLAG_HIDE_TWO_ISLAND_WOMAN                               (FRLG_FLAGS_START + 0xA3)
#undef  FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
#define FLAG_HIDE_VERMILION_CITY_OAKS_AIDE                       (FRLG_FLAGS_START + 0xA4)
#undef  FLAG_HIDE_VICTORY_ROAD_2F_BOULDER
#define FLAG_HIDE_VICTORY_ROAD_2F_BOULDER                        (FRLG_FLAGS_START + 0xA5)
#undef  FLAG_HIDE_VICTORY_ROAD_3F_BOULDER
#define FLAG_HIDE_VICTORY_ROAD_3F_BOULDER                        (FRLG_FLAGS_START + 0xA6)
#undef  FLAG_HO_OH_FLEW_AWAY
#define FLAG_HO_OH_FLEW_AWAY                                     (FRLG_FLAGS_START + 0xA7)
#undef  FLAG_LEARNED_YES_NAH_CHANSEY
#define FLAG_LEARNED_YES_NAH_CHANSEY                             (FRLG_FLAGS_START + 0xA8)
#undef  FLAG_LUGIA_FLEW_AWAY
#define FLAG_LUGIA_FLEW_AWAY                                     (FRLG_FLAGS_START + 0xA9)
#undef  FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE
#define FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE           (FRLG_FLAGS_START + 0xAA)
#undef  FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
#define FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR                 (FRLG_FLAGS_START + 0xAB)
#undef  FLAG_NO_ROOM_FOR_TOGEPI_EGG
#define FLAG_NO_ROOM_FOR_TOGEPI_EGG                              (FRLG_FLAGS_START + 0xAC)
#undef  FLAG_OAK_SAW_DEX_COMPLETION
#define FLAG_OAK_SAW_DEX_COMPLETION                              (FRLG_FLAGS_START + 0xAD)
#undef  FLAG_OAK_SKIP_22_RIVAL_CHECK
#define FLAG_OAK_SKIP_22_RIVAL_CHECK                             (FRLG_FLAGS_START + 0xAE)
#undef  FLAG_OPENED_ROCKET_HIDEOUT
#define FLAG_OPENED_ROCKET_HIDEOUT                               (FRLG_FLAGS_START + 0xAF)
#undef  FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
#define FLAG_PALLET_LADY_NOT_BLOCKING_SIGN                       (FRLG_FLAGS_START + 0xB0)
#undef  FLAG_POKEMON_MANSION_SWITCH_STATE
#define FLAG_POKEMON_MANSION_SWITCH_STATE                        (FRLG_FLAGS_START + 0xB1)
#undef  FLAG_RECOVERED_SAPPHIRE
#define FLAG_RECOVERED_SAPPHIRE                                  (FRLG_FLAGS_START + 0xB2)
#undef  FLAG_RESCUED_LOSTELLE
#define FLAG_RESCUED_LOSTELLE                                    (FRLG_FLAGS_START + 0xB3)
#undef  FLAG_RESCUED_MR_FUJI
#define FLAG_RESCUED_MR_FUJI                                     (FRLG_FLAGS_START + 0xB4)
#undef  FLAG_REVIVED_AMBER
#define FLAG_REVIVED_AMBER                                       (FRLG_FLAGS_START + 0xB5)
#undef  FLAG_REVIVED_DOME
#define FLAG_REVIVED_DOME                                        (FRLG_FLAGS_START + 0xB6)
#undef  FLAG_REVIVED_HELIX
#define FLAG_REVIVED_HELIX                                       (FRLG_FLAGS_START + 0xB7)
#undef  FLAG_SEVII_DETOUR_FINISHED
#define FLAG_SEVII_DETOUR_FINISHED                               (FRLG_FLAGS_START + 0xB8)
#undef  FLAG_SILPH_10F_DOOR
#define FLAG_SILPH_10F_DOOR                                      (FRLG_FLAGS_START + 0xB9)
#undef  FLAG_SILPH_11F_DOOR
#define FLAG_SILPH_11F_DOOR                                      (FRLG_FLAGS_START + 0xBA)
#undef  FLAG_SILPH_2F_DOOR_1
#define FLAG_SILPH_2F_DOOR_1                                     (FRLG_FLAGS_START + 0xBB)
#undef  FLAG_SILPH_2F_DOOR_2
#define FLAG_SILPH_2F_DOOR_2                                     (FRLG_FLAGS_START + 0xBC)
#undef  FLAG_SILPH_3F_DOOR_1
#define FLAG_SILPH_3F_DOOR_1                                     (FRLG_FLAGS_START + 0xBD)
#undef  FLAG_SILPH_3F_DOOR_2
#define FLAG_SILPH_3F_DOOR_2                                     (FRLG_FLAGS_START + 0xBE)
#undef  FLAG_SILPH_4F_DOOR_1
#define FLAG_SILPH_4F_DOOR_1                                     (FRLG_FLAGS_START + 0xBF)
#undef  FLAG_SILPH_4F_DOOR_2
#define FLAG_SILPH_4F_DOOR_2                                     (FRLG_FLAGS_START + 0xC0)
#undef  FLAG_SILPH_5F_DOOR_1
#define FLAG_SILPH_5F_DOOR_1                                     (FRLG_FLAGS_START + 0xC1)
#undef  FLAG_SILPH_5F_DOOR_2
#define FLAG_SILPH_5F_DOOR_2                                     (FRLG_FLAGS_START + 0xC2)
#undef  FLAG_SILPH_5F_DOOR_3
#define FLAG_SILPH_5F_DOOR_3                                     (FRLG_FLAGS_START + 0xC3)
#undef  FLAG_SILPH_6F_DOOR
#define FLAG_SILPH_6F_DOOR                                       (FRLG_FLAGS_START + 0xC4)
#undef  FLAG_SILPH_7F_DOOR_1
#define FLAG_SILPH_7F_DOOR_1                                     (FRLG_FLAGS_START + 0xC5)
#undef  FLAG_SILPH_7F_DOOR_2
#define FLAG_SILPH_7F_DOOR_2                                     (FRLG_FLAGS_START + 0xC6)
#undef  FLAG_SILPH_7F_DOOR_3
#define FLAG_SILPH_7F_DOOR_3                                     (FRLG_FLAGS_START + 0xC7)
#undef  FLAG_SILPH_8F_DOOR
#define FLAG_SILPH_8F_DOOR                                       (FRLG_FLAGS_START + 0xC8)
#undef  FLAG_SILPH_9F_DOOR_1
#define FLAG_SILPH_9F_DOOR_1                                     (FRLG_FLAGS_START + 0xC9)
#undef  FLAG_SILPH_9F_DOOR_2
#define FLAG_SILPH_9F_DOOR_2                                     (FRLG_FLAGS_START + 0xCA)
#undef  FLAG_SILPH_9F_DOOR_3
#define FLAG_SILPH_9F_DOOR_3                                     (FRLG_FLAGS_START + 0xCB)
#undef  FLAG_SILPH_9F_DOOR_4
#define FLAG_SILPH_9F_DOOR_4                                     (FRLG_FLAGS_START + 0xCC)
#undef  FLAG_STOPPED_SEAFOAM_B3F_CURRENT
#define FLAG_STOPPED_SEAFOAM_B3F_CURRENT                         (FRLG_FLAGS_START + 0xCD)
#undef  FLAG_STOPPED_SEAFOAM_B4F_CURRENT
#define FLAG_STOPPED_SEAFOAM_B4F_CURRENT                         (FRLG_FLAGS_START + 0xCE)
#undef  FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE
#define FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE                   (FRLG_FLAGS_START + 0xCF)
#undef  FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION
#define FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION                    (FRLG_FLAGS_START + 0xD0)
#undef  FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
#define FLAG_TALKED_TO_TEA_LADY_AFTER_HOF                        (FRLG_FLAGS_START + 0xD1)
#undef  FLAG_TWO_ISLAND_SHOP_EXPANDED_1
#define FLAG_TWO_ISLAND_SHOP_EXPANDED_1                          (FRLG_FLAGS_START + 0xD2)
#undef  FLAG_TWO_ISLAND_SHOP_EXPANDED_2
#define FLAG_TWO_ISLAND_SHOP_EXPANDED_2                          (FRLG_FLAGS_START + 0xD3)
#undef  FLAG_TWO_ISLAND_SHOP_EXPANDED_3
#define FLAG_TWO_ISLAND_SHOP_EXPANDED_3                          (FRLG_FLAGS_START + 0xD4)
#undef  FLAG_TWO_ISLAND_SHOP_INTRODUCED
#define FLAG_TWO_ISLAND_SHOP_INTRODUCED                          (FRLG_FLAGS_START + 0xD5)
#undef  FLAG_UNLOCKED_ROCKET_WAREHOUSE
#define FLAG_UNLOCKED_ROCKET_WAREHOUSE                           (FRLG_FLAGS_START + 0xD6)
#undef  FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE
#define FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE                     (FRLG_FLAGS_START + 0xD7)
#undef  FLAG_VISITED_OAKS_LAB
#define FLAG_VISITED_OAKS_LAB                                    (FRLG_FLAGS_START + 0xD8)
#undef  FLAG_VISITED_TWO_ISLAND
#define FLAG_VISITED_TWO_ISLAND                                  (FRLG_FLAGS_START + 0xD9)
#undef  FLAG_WOKE_UP_ROUTE_12_SNORLAX
#define FLAG_WOKE_UP_ROUTE_12_SNORLAX                            (FRLG_FLAGS_START + 0xDA)

#define FRLG_FLAGS_END (FRLG_FLAGS_START + 0xDA)

#define FRLG_NUM_FLAG_BYTES (((FRLG_FLAGS_END - FRLG_FLAGS_START + 1) + 7) / 8)

#endif // GUARD_CONSTANTS_FLAGS_FRLG_HNS_H
