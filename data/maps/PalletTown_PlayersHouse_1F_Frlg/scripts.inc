PalletTown_PlayersHouse_1F_Frlg_MapScripts::
	.byte 0

PalletTown_PlayersHouse_1F_EventScript_Mom::
	lock
	faceplayer
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
	checkplayergender
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
	closemessage
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
	return

PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
	return

PalletTown_PlayersHouse_1F_EventScript_MomHeal::
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
	release
	end

@ Displays special text if interacted with from side or back (which are normally inaccessible)
PalletTown_PlayersHouse_1F_EventScript_TV::
	lockall
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
	releaseall
	end

PalletTown_PlayersHouse_1F_EventScript_TVScreen::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
	releaseall
	end

PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
	return

PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
	return

PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou::
#if GERMAN
	.string "Mutter: Richtig. Irgendwann gehen\n"
	.string "alle Kinder fort, um ein Abenteuer\l"
	.string "zu erleben!\p"
	.string "{COLOR RED}Prof. Eich{COLOR DARK_GRAY} von nebenan hat nach\n"
	.string "dir gefragt.$"
#else
	.string "MOM: …Right.\n"
	.string "All boys leave home someday.\l"
	.string "It said so on TV.\p"
	.string "Oh, yes. PROF. OAK, next door, was\n"
	.string "looking for you.$"
#endif

PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou::
#if GERMAN
	.string "Mutter: … genau!\n"
	.string "Jedes Mädchen träumt vom Reisen.\l"
	.string "Das sieht man im Fernsehen.\p"
	.string "Oh, ja, {COLOR RED}Prof. Eich{COLOR DARK_GRAY} von nebenan\n"
	.string "hat nach dir gesucht!$"
#else
	.string "MOM: …Right.\n"
	.string "All girls dream of traveling.\l"
	.string "It said so on TV.\p"
	.string "Oh, yes. PROF. OAK, next door, was\n"
	.string "looking for you.$"
#endif

PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest::
#if GERMAN
	.string "Mutter: {PLAYER}! Du solltest eine\n"
	.string "kurze Pause einlegen.$"
#else
	.string "MOM: {PLAYER}!\n"
	.string "You should take a quick rest.$"
#endif

PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare::
#if GERMAN
	.string "Mutter: Sehr gut! Du und deine\n"
	.string "Pokémon sehen großartig aus!\l"
	.string "Achte auf dich!$"
#else
	.string "MOM: Oh, good! You and your\n"
	.string "POKéMON are looking great.\l"
	.string "Take care now!$"
#endif

PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad::
#if GERMAN
	.string "Im Fernsehen läuft ein Film.\n"
	.string "Vier Jungen laufen ein Bahngleis\l"
	.string "entlang!\p"
	.string "Den Film kenne ich schon! Ich\n"
	.string "mache mich besser auf den Weg!$"
#else
	.string "There's a movie on TV.\n"
	.string "Four boys are walking on railroad\l"
	.string "tracks.\p"
	.string "…I better go, too.$"
#endif

PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad::
#if GERMAN
	.string "Es läuft ein Film im TV.\n"
	.string "Ein bezopftes Mädchen läuft\l"
	.string "einen gelben Steinweg entlang.\p"
	.string "… ich breche auch besser auf!$"
#else
	.string "There's a movie on TV.\n"
	.string "A girl with her hair in pigtails is\l"
	.string "walking up a brick road.\p"
	.string "…I better go, too.$"
#endif

PalletTown_PlayersHouse_1F_Text_OopsWrongSide::
#if GERMAN
	.string "Ups, falsche Richtung!$"
#else
	.string "Oops, wrong side…$"
#endif
