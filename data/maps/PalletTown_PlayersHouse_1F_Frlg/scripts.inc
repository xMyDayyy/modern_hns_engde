PalletTown_PlayersHouse_1F_Frlg_MapScripts::
	.byte 0

PalletTown_PlayersHouse_1F_EventScript_Mom::
	lock
	faceplayer
	goto_if_unset FLAG_RIVAL_NAMED_BY_MOM, PalletTown_PlayersHouse_1F_EventScript_MomAskRivalName
	goto_if_unset FLAG_SYS_B_DASH, PalletTown_PlayersHouse_1F_EventScript_MomGivePokeGear
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
	.string "Mutter: Richtig. Irgendwann gehen alle\n"
	.string "Kinder fort, um ein Abenteuer zu\l"
	.string "erleben!\p"
	.string "Prof. Eich von nebenan hat nach\n"
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
	.string "Oh, ja, Prof. Eich von nebenan\n"
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
	.string "Mutter: Sehr gut! Du und deine Pokémon\n"
	.string "sehen großartig aus!\l"
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
	.string "Ein bezopftes Mädchen läuft einen\l"
	.string "gelben Steinweg entlang.\p"
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

@ Kanto-Merge: Turbotreter kommen von der Mutter statt vom Eich-Assistenten
@ in Marmoria. Der Assistent dort prueft ebenfalls FLAG_SYS_B_DASH und
@ ueberspringt sich damit selbst.
@ Kanto-Merge: Reihenfolge wie bei der HnS-Mutter in Neuborkia -
@ erst das PokeCom, dann die Turbotreter, alles in einem Gespraech.
PalletTown_PlayersHouse_1F_EventScript_MomGivePokeGear::
	msgbox PalletTown_PlayersHouse_1F_Text_MomOffersPokeGear
	playfanfare MUS_OBTAIN_ITEM
	message PalletTown_PlayersHouse_1F_Text_ObtainedPokeGear
	waitfanfare
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_HAS_MATCH_CALL
	setflag FLAG_RECEIVED_POKENAV
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	setflag FLAG_REGISTER_RIVAL_POKENAV
	msgbox PalletTown_PlayersHouse_1F_Text_ExplainPokeGear
	closemessage
	delay 30
	@ Anruf der Mutter vorbereiten - sie probiert das Geraet gleich aus.
	setvar VAR_HNS_MOM_CALL_STEPS, 0
	setflag FLAG_HNS_MOM_CALL_PENDING
	goto PalletTown_PlayersHouse_1F_EventScript_MomGiveRunningShoes
	end

PalletTown_PlayersHouse_1F_Text_MomOffersPokeGear:
#if GERMAN
	.string "Mutter: Warte, {PLAYER}!\p"
	.string "Bevor du losziehst - das hier\n"
	.string "solltest du mitnehmen.$"
#else
	.string "MOM: Wait, {PLAYER}!\p"
	.string "Before you go - you should\n"
	.string "take this with you.$"
#endif

PalletTown_PlayersHouse_1F_Text_ObtainedPokeGear:
#if GERMAN
	.string "{PLAYER} erhielt das PokéCom.$"
#else
	.string "{PLAYER} obtained the POKéGEAR.$"
#endif

PalletTown_PlayersHouse_1F_Text_ExplainPokeGear:
#if GERMAN
	.string "Mutter: Telefonnummern befinden\n"
	.string "sich im Speicher.\p"
	.string "Wähle einfach einen Namen aus,\n"
	.string "um anzurufen.\p"
	.string "Wie praktisch!$"
#else
	.string "MOM: Phone numbers are stored\n"
	.string "in memory.\p"
	.string "Just choose a name you want to call.\p"
	.string "Gee, isn't that convenient?$"
#endif

PalletTown_PlayersHouse_1F_EventScript_MomGiveRunningShoes::
	msgbox PalletTown_PlayersHouse_1F_Text_MomRunningShoes
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	message PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoes
	waitmessage
	waitfanfare
	setflag FLAG_SYS_B_DASH
	msgbox PalletTown_PlayersHouse_1F_Text_MomExplainRunningShoes
	closemessage
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PalletTown_PlayersHouse_1F_Text_MomRunningShoes:
#if GERMAN
	.string "Warte, {PLAYER}! Bevor du losziehst …\p"
	.string "Hier, nimm die mit. Damit kommst du\n"
	.string "schneller voran.$"
#else
	.string "Wait, {PLAYER}! Before you go…\p"
	.string "Here, take these. They'll get you\n"
	.string "around a lot faster.$"
#endif

PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoes:
#if GERMAN
	.string "{PLAYER} erhält die\n"
	.string "Turbotreter!$"
#else
	.string "{PLAYER} received the\n"
	.string "Running Shoes!$"
#endif

PalletTown_PlayersHouse_1F_Text_MomExplainRunningShoes:
#if GERMAN
	.string "Halt einfach B gedrückt, während du\n"
	.string "läufst.\p"
	.string "Und pass auf dich auf, hörst du?$"
#else
	.string "Just hold down B while you walk.\p"
	.string "And do take care of yourself, hear?$"
#endif

@ Kanto-Merge: Der Rivale wird sonst nirgends benannt (das passierte in FRLG
@ in Eichs Eroeffnungsrede, die unter HnS nicht laeuft). Die Mutter fragt
@ danach, dann kommen die Turbotreter.
PalletTown_PlayersHouse_1F_EventScript_MomAskRivalName::
	msgbox PalletTown_PlayersHouse_1F_Text_MomAskRivalName
	closemessage
	special NameRival
	waitstate
	setflag FLAG_RIVAL_NAMED_BY_MOM
	msgbox PalletTown_PlayersHouse_1F_Text_MomRivalNameConfirm
	goto PalletTown_PlayersHouse_1F_EventScript_MomGivePokeGear
	end

PalletTown_PlayersHouse_1F_Text_MomAskRivalName:
#if GERMAN
	.string "Ach richtig, Professor Eichs Enkel\n"
	.string "war doch vorhin schon hier.\p"
	.string "Wie hieß der Nachbarsjunge nochmal?$"
#else
	.string "Oh right, PROF. OAK's grandson\n"
	.string "stopped by earlier.\p"
	.string "What was that boy's name again?$"
#endif

PalletTown_PlayersHouse_1F_Text_MomRivalNameConfirm:
#if GERMAN
	.string "{RIVAL}, natürlich! Ihr zwei wart\n"
	.string "schon als Kleinkinder unzertrennlich.$"
#else
	.string "{RIVAL}, of course! You two have been\n"
	.string "inseparable since you were toddlers.$"
#endif

@ Kanto-Merge: Die Mutter vergibt Rivalennamen und Turbotreter. Beides ist
@ Voraussetzung fuer den weiteren Ablauf, deshalb haelt sie den Spieler
@ zurueck, bis das Gespraech gelaufen ist. Der Trigger liegt vor der Tuer.
PalletTown_PlayersHouse_1F_EventScript_BlockExit::
	lock
	goto_if_set FLAG_SYS_B_DASH, PalletTown_PlayersHouse_1F_EventScript_ExitAllowed
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox PalletTown_PlayersHouse_1F_Text_MomWaitAMoment
	closemessage
	release
	end

PalletTown_PlayersHouse_1F_EventScript_ExitAllowed::
	setvar VAR_TEMP_5, 1
	release
	end

PalletTown_PlayersHouse_1F_Text_MomWaitAMoment:
#if GERMAN
	.string "Mutter: Warte kurz, {PLAYER}!\p"
	.string "Ich muss dir noch etwas mitgeben,\n"
	.string "bevor du losziehst.$"
#else
	.string "MOM: Hold on a second, {PLAYER}!\p"
	.string "There's something I need to give you\n"
	.string "before you head out.$"
#endif
