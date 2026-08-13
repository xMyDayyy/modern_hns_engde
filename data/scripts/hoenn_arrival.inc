@ ============================================================
@ Ueberfahrt nach Hoenn und Ankunft bei Professor Birk
@ ============================================================

@ Wird von beiden Haefen aufgerufen, sobald der Spieler Hoenn waehlt.
Common_EventScript_SailToHoenn::
	closemessage
	delay 20
	msgbox Common_Text_HoennSetSail, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	call Common_EventScript_HoennSkipIntro
	setflag FLAG_HIDE_ROUTE104_HOENN_BIRCH
	setvar VAR_HOENN_ARRIVAL_STATE, 1
	warpsilent MAP_ROUTE104, 12, 52
	waitstate
	release
	end

@ Hoenn wird per Schiff betreten, nicht ueber die Umzugsszene aus Smaragd.
@ Deren Endzustand wird hier einmalig hergestellt: Kulissenfiguren der
@ Anfangssequenz verschwinden, die Zustandsvariablen springen ans Ende.
Common_EventScript_HoennSkipIntro::
	call Common_EventScript_HoennHideStoryNpcs
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
	setflag FLAG_HIDE_ROUTE_101_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
	setflag FLAG_HIDE_ROUTE_103_BIRCH
	@ HnS: Maike (Birks Tochter) steht auf Route 103 - die Erstbegegnung
	@ mit dem Champion samt erstem Kampf findet dort statt (siehe
	@ Route103/scripts.inc). Ihr Hide-Flag setzt erst der Nachkampf.
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	setflag FLAG_SET_WALL_CLOCK
	setflag FLAG_ADVENTURE_STARTED
	setflag FLAG_RESCUED_BIRCH
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	setflag FLAG_MET_RIVAL_MOM
	setflag FLAG_BIRCH_AIDE_MET
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
	@ Der Spieler wohnt in keinem der beiden Haeuser. Beide gehoeren
	@ ortsansaessigen Familien: die eigene Mutter entfaellt, die
	@ Nachbarsmutter und das Geschwisterkind bleiben.
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
	goto Common_EventScript_HoennSkipIntroStates

@ Smaragds eigene Anfangsinitialisierung: versteckt 159 NPCs, die erst
@ im Verlauf der Handlung erscheinen. HnS ruft stattdessen seine eigene
@ Fassung auf, daher wird das hier nachgeholt.
Common_EventScript_HoennHideStoryNpcs::
	setflag FLAG_HIDE_CONTEST_POKE_BALL
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
	@ HnS: Heiko bleibt sichtbar - er steht vor der Arenatuer von
	@ Bluetenburg City und traegt dort das Fang-Ereignis (statt des
	@ Vanilla-Tutorials in der Arena). Arena-Zustand 2 = Tuer zu,
	@ Indoor-Wally-Intro und Papa-Dialog sind damit unerreichbar.
	setvar VAR_PETALBURG_GYM_STATE, 2
	setflag FLAG_UNKNOWN_0x363
	setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
	setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
	setflag FLAG_HIDE_ROUTE_110_BIRCH
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
	setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
	setflag FLAG_HIDE_FANCLUB_OLD_LADY
	setflag FLAG_HIDE_FANCLUB_BOY
	setflag FLAG_HIDE_FANCLUB_LITTLE_BOY
	setflag FLAG_HIDE_FANCLUB_LADY
	setflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
	setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
	setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
	setflag FLAG_HIDE_PETALBURG_GYM_WALLY
	setflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
	setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
	setflag FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL
	setflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
	setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
	setflag FLAG_HIDE_ROUTE_119_RIVAL
	setflag FLAG_HIDE_ROUTE_119_SCOTT
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
	setflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
	setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
	setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
	setflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
	setflag FLAG_HIDE_RUSTURF_TUNNEL_BRINEY
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	setflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
	setflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2
	setflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
	setflag FLAG_HIDE_BATTLE_TOWER_OPPONENT
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
	setflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380
	setflag FLAG_HIDE_ROUTE_101_BIRCH
	setflag FLAG_HIDE_ROUTE_103_BIRCH
	setflag FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR
	setflag FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER
	setflag FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE
	setflag FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON
	setflag FLAG_UNKNOWN_0x393
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
	setflag FLAG_HIDE_MAUVILLE_CITY_SCOTT
	setflag FLAG_HIDE_CHAMPIONS_ROOM_RIVAL
	setflag FLAG_HIDE_CHAMPIONS_ROOM_BIRCH
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
	setflag FLAG_HIDE_ROUTE_119_RIVAL_ON_BIKE
	setflag FLAG_HIDE_ROUTE_104_RIVAL
	setflag FLAG_HIDE_LILYCOVE_MOTEL_GAME_DESIGNERS
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE
	setflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
	setflag FLAG_HIDE_METEOR_FALLS_TEAM_AQUA
	setflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
	setflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
	setflag FLAG_HIDE_ROUTE_128_STEVEN
	setflag FLAG_HIDE_ROUTE_128_ARCHIE
	setflag FLAG_HIDE_ROUTE_128_MAXIE
	setflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
	setflag FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN
	setflag FLAG_HIDE_SLATEPORT_CITY_SCOTT
	setflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
	setflag FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY
	setflag FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	setflag FLAG_HIDE_ROUTE_101_BOY
	setflag FLAG_HIDE_PETALBURG_CITY_SCOTT
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
	setflag FLAG_HIDE_ROUTE_111_DESERT_FOSSIL
	setflag FLAG_HIDE_ROUTE_111_PLAYER_DESCENT
	setflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
	setflag FLAG_HIDE_DEOXYS
	setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
	setflag FLAG_HIDE_SKY_PILLAR_WALLACE
	setflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
	return

Common_EventScript_HoennSkipIntroStates::
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
	setvar VAR_BIRCH_LAB_STATE, 5
	setvar VAR_ROUTE101_STATE, 3
	setvar VAR_OLDALE_RIVAL_STATE, 2
	setvar VAR_OLDALE_TOWN_STATE, 1
	setvar VAR_BIRCH_STATE, 6
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380
	setflag FLAG_HIDE_ROUTE104_HOENN_BIRCH
	return

@ ------------------------------------------------------------
@ Ankunft am Strand von Route 104
@ ------------------------------------------------------------
@ Wird als ON_FRAME-Skript beim Betreten der Karte ausgeloest (siehe
@ Route104_OnFrame). Der Spieler landet per warpsilent auf (12,52) und wird
@ von hier aus den Strand hinauf auf (17,52) gefuehrt - direkt unter die Tuer,
@ aus der Birk tritt. Birk bleibt auf (17,51) stehen und schaut nach unten,
@ der Spieler schaut nach oben.
Route104_EventScript_HoennArrival::
	lockall
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_HoennApproachBeach
	waitmovement 0
	goto Route104_EventScript_HoennArrivalScene

Route104_EventScript_HoennArrivalScene::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_HoennStopAndLook
	waitmovement 0
	addobject LOCALID_HOENN_BIRCH
	applymovement LOCALID_HOENN_BIRCH, Common_Movement_HoennBirchLeaveHouse
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_HOENN_BIRCH, Common_Movement_HoennExclaim
	waitmovement 0
	delay 20
	applymovement LOCALID_HOENN_BIRCH, Common_Movement_HoennBirchFacePlayer
	waitmovement 0
	playbgm MUS_ENCOUNTER_MALE, FALSE
	msgbox Route104_Text_BirchGreeting, MSGBOX_DEFAULT
	closemessage
	delay 20
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_HOENN_BIRCH
	setvar VAR_HOENN_ARRIVAL_STATE, 2
	warpsilent MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
	waitstate
	releaseall
	end

@ ------------------------------------------------------------
@ Im Labor: Pokedex-Erweiterung
@ ------------------------------------------------------------
LittlerootTown_ProfessorBirchsLab_EventScript_HoennWelcome::
	lockall
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_HoennFaceUp
	waitmovement 0
	msgbox BirchsLab_Text_HoennWelcome1, MSGBOX_DEFAULT
	closemessage
	delay 20
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	playfanfare MUS_OBTAIN_ITEM
	message BirchsLab_Text_HoennDexUpgrade
	waitmessage
	waitfanfare
	closemessage
	msgbox BirchsLab_Text_HoennDexExplain, MSGBOX_DEFAULT
	closemessage
	setvar VAR_HOENN_ARRIVAL_STATE, 3
	setflag FLAG_SYS_HOENN_DEX_GET
	setflag FLAG_HIDE_ROUTE104_HOENN_BIRCH
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
	releaseall
	end

@ ------------------------------------------------------------
@ Bewegungen
@ ------------------------------------------------------------
Common_Movement_HoennStopAndLook:
	walk_in_place_faster_up
	step_end

Common_Movement_HoennFacePlayerRight:
	walk_in_place_faster_right
	step_end

Common_Movement_HoennExclaim:
	emote_exclamation_mark
	delay_16
	step_end

Common_Movement_HoennBirchLeaveHouse:
	walk_down
	step_end

Common_Movement_HoennBirchWalkToPlayer:
	walk_down
	face_left
	step_end

@ Birk bleibt eine Kachel ueber dem Spieler stehen und sieht ihn an.
Common_Movement_HoennBirchFacePlayer:
	face_down
	step_end

@ Anmarsch vom Anlandepunkt (12,52) auf das Zielfeld (17,52).
Common_Movement_HoennApproachBeach:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Common_Movement_HoennFaceUp:
	face_up
	step_end

Common_Movement_HoennFaceRight:
	face_right
	step_end

@ ------------------------------------------------------------
@ Texte
@ ------------------------------------------------------------
Common_Text_HoennSetSail:
#if GERMAN
	.string "Matrose: Hoenn? Das ist eine weite\n"
	.string "Fahrt.\p"
	.string "Dort leben viele Pokémon, die es\n"
	.string "hier nicht gibt. Leinen los!$"
#else
	.string "SAILOR: HOENN? That's a long trip.\p"
	.string "Plenty of POKéMON live there that\n"
	.string "you won't find here. Cast off!$"
#endif

Route104_Text_BirchGreeting:
#if GERMAN
	.string "???: Du musst {PLAYER} sein.\p"
	.string "Troy hat mir schon geschrieben,\n"
	.string "dass du herkommen wirst.\p"
	.string "Komm mit in mein Labor - ich habe\n"
	.string "da etwas für dich.$"
#else
	.string "???: You must be {PLAYER}.\p"
	.string "STEVEN already wrote to me that\n"
	.string "you were on your way.\p"
	.string "Come along to my LAB - I have\n"
	.string "something for you there.$"
#endif

BirchsLab_Text_HoennWelcome1:
#if GERMAN
	.string "Prof. Birk: Willkommen in Hoenn!\p"
	.string "Troy hat mir erzählt, du seist ein\n"
	.string "erfahrener Trainer - und dass du mir\l"
	.string "bei meinem Vorhaben helfen könntest.\p"
	.string "Halt mal kurz deinen Pokédex hoch.$"
#else
	.string "PROF. BIRCH: Welcome to HOENN!\p"
	.string "STEVEN told me you're a seasoned\n"
	.string "TRAINER - and that you might be\l"
	.string "able to help me with my work.\p"
	.string "Hold up your POKéDEX for a moment.$"
#endif

BirchsLab_Text_HoennDexUpgrade:
#if GERMAN
	.string "{PLAYER}s Pokédex wurde um die\n"
	.string "Arten aus Hoenn erweitert!$"
#else
	.string "{PLAYER}'s POKéDEX was expanded\n"
	.string "with the species of HOENN!$"
#endif

BirchsLab_Text_HoennDexExplain:
#if GERMAN
	.string "Prof. Birk: So. Ich habe deinen\n"
	.string "Pokédex auf die hiesige Region\l"
	.string "erweitert.\p"
	.string "Ich forsche seit Jahren an den\n"
	.string "Lebensräumen dieser Region.\p"
	.string "Wenn du mir hilfst, sie zu füllen,\n"
	.string "wäre mir sehr geholfen.\p"
	.string "Viel Glück auf deiner Reise,\n"
	.string "{PLAYER}!$"
#else
	.string "PROF. BIRCH: There. I've expanded\n"
	.string "your POKéDEX to cover this region.\p"
	.string "I've studied the habitats of this\n"
	.string "region for years.\p"
	.string "If you help me fill it in, that\n"
	.string "would mean a great deal to me.\p"
	.string "Good luck on your journey,\n"
	.string "{PLAYER}!$"
#endif

BirchsLab_Text_HoennGoodLuck:
#if GERMAN
	.string "Prof. Birk: Blütenburg City liegt\n"
	.string "im Westen, Metarost City im Norden.\p"
	.string "Beide haben Arenen - falls es dich\n"
	.string "danach juckt.\p"
	.string "Ach ja: Meine Tochter Maike ist\n"
	.string "oben auf Route 103 unterwegs.\p"
	.string "Sie würde dich sicher gern\n"
	.string "kennenlernen - schau doch vorbei!\p"
	.string "Und jetzt raus mit dir.\n"
	.string "Viel Spaß, {PLAYER}!$"
#else
	.string "PROF. BIRCH: PETALBURG CITY lies\n"
	.string "west, RUSTBORO to the north.\p"
	.string "Both have GYMS - in case you feel\n"
	.string "the itch.\p"
	.string "Oh, and my daughter MAY is out\n"
	.string "on ROUTE 103 up north.\p"
	.string "I'm sure she'd love to meet you -\n"
	.string "why not drop by?\p"
	.string "Now off you go.\n"
	.string "Have fun, {PLAYER}!$"
#endif
