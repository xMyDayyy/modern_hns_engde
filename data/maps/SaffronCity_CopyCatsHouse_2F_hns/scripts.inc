SaffronCity_CopyCatsHouse_2F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_CopyCatsHouse_2F_OnTransition
	.byte 0

SaffronCity_CopyCatsHouse_2F_OnTransition::
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	end

@VAR_FAN_CLUB_CLEFAIRY

SaffronCity_CopyCatsHouse_2F_EventScript_Dodrio::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DODRIO, CRY_MODE_NORMAL
	msgbox Copycat_Text_Dodrio1, MSGBOX_DEFAULT
	waitmoncry
	msgbox Copycat_Text_Dodrio2, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_CopyCatsHouse_2F_EventScript_Dolls::
	msgbox Copycat_Text_2FDoll, MSGBOX_SIGN
	end

SaffronCity_CopyCatsHouse_2F_EventScript_Copycat::
	lock
	faceplayer
	goto_if_ge VAR_FAN_CLUB_CLEFAIRY, 3, SaffronCity_CopyCatsHouse_2F_EventScript_CopycatAfterDollReturned
	goto_if_eq VAR_FAN_CLUB_CLEFAIRY, 2, SaffronCity_CopyCatsHouse_2F_EventScript_CopycatReturnDoll
	goto_if_set FLAG_RETURNED_MACHINE_PART, SaffronCity_CopyCatsHouse_2F_EventScript_CopycatReturnedMachinePart
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SaffronCity_CopyCatsHouse_2F_EventScript_Copycat1_Male
	goto_if_eq VAR_RESULT, FEMALE, SaffronCity_CopyCatsHouse_2F_EventScript_Copycat1_Female

SaffronCity_CopyCatsHouse_2F_EventScript_Copycat1_Male::
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_COPYCAT
	clearflag FLAG_TEMP_3
	addobject LOCALID_GOLD
	applymovement LOCALID_GOLD, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_GOLD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_Male_1, MSGBOX_NPC
	applymovement LOCALID_GOLD, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_GOLD
	clearflag FLAG_TEMP_1
	addobject LOCALID_COPYCAT
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_COPYCAT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_QuickMimicking, MSGBOX_NPC
	closemessage
	release
	end

SaffronCity_CopyCatsHouse_2F_EventScript_Copycat1_Female::
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_COPYCAT
	clearflag FLAG_TEMP_2
	addobject LOCALID_KRIS
	applymovement LOCALID_KRIS, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_KRIS, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_Male_1, MSGBOX_NPC
	applymovement LOCALID_KRIS, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_KRIS
	clearflag FLAG_TEMP_1
	addobject LOCALID_COPYCAT
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_COPYCAT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_QuickMimicking, MSGBOX_NPC
	closemessage
	release
	end

SaffronCity_CopyCatsHouse_2F_EventScript_CopycatReturnedMachinePart::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SaffronCity_CopyCatsHouse_2F_EventScript_CopycatReturnedMachinePart_Male
	goto_if_eq VAR_RESULT, FEMALE, SaffronCity_CopyCatsHouse_2F_EventScript_CopycatReturnedMachinePart_Female

SaffronCity_CopyCatsHouse_2F_EventScript_CopycatReturnedMachinePart_Male::
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_COPYCAT
	clearflag FLAG_TEMP_3
	addobject LOCALID_GOLD
	applymovement LOCALID_GOLD, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_GOLD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_Male_2, MSGBOX_NPC
	applymovement LOCALID_GOLD, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_GOLD
	clearflag FLAG_TEMP_1
	addobject LOCALID_COPYCAT
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_COPYCAT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_Worried, MSGBOX_NPC
	closemessage
	setvar VAR_FAN_CLUB_CLEFAIRY, 1
	end

SaffronCity_CopyCatsHouse_2F_EventScript_CopycatReturnedMachinePart_Female::
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_COPYCAT
	clearflag FLAG_TEMP_2
	addobject LOCALID_KRIS
	applymovement LOCALID_KRIS, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_KRIS, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_Male_2, MSGBOX_NPC
	applymovement LOCALID_KRIS, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_KRIS
	clearflag FLAG_TEMP_1
	addobject LOCALID_COPYCAT
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_COPYCAT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_Worried, MSGBOX_NPC
	closemessage
	setvar VAR_FAN_CLUB_CLEFAIRY, 1
	end

SaffronCity_CopyCatsHouse_2F_EventScript_CopycatReturnDoll::
	msgbox Copycat_Text_GiveDoll, MSGBOX_DEFAULT
	fadescreenswapbuffers FADE_TO_BLACK
	removeitem ITEM_LOST_ITEM
	clearflag FLAG_HIDE_COPYCAT_CLEFAIRY_DOLL
	addobject LOCALID_COPYCAT_CLEFAIRY
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox Copycat_Text_GivePass, MSGBOX_DEFAULT
	giveitem ITEM_PASS
	msgbox Copycat_Text_ExplainPass, MSGBOX_DEFAULT
	closemessage
	setvar VAR_FAN_CLUB_CLEFAIRY, 3
	release
	end

SaffronCity_CopyCatsHouse_2F_EventScript_CopycatAfterDollReturned::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SaffronCity_CopyCatsHouse_2F_EventScript_CopycatAfterDollReturned_Male
	goto_if_eq VAR_RESULT, FEMALE, SaffronCity_CopyCatsHouse_2F_EventScript_CopycatAfterDollReturned_Female

SaffronCity_CopyCatsHouse_2F_EventScript_CopycatAfterDollReturned_Male::
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_COPYCAT
	clearflag FLAG_TEMP_3
	addobject LOCALID_GOLD
	applymovement LOCALID_GOLD, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_GOLD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_Male_3, MSGBOX_NPC
	applymovement LOCALID_GOLD, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_GOLD
	clearflag FLAG_TEMP_1
	addobject LOCALID_COPYCAT
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_COPYCAT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_ItsAScream, MSGBOX_NPC
	closemessage
	end

SaffronCity_CopyCatsHouse_2F_EventScript_CopycatAfterDollReturned_Female::
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_COPYCAT
	clearflag FLAG_TEMP_2
	addobject LOCALID_KRIS
	applymovement LOCALID_KRIS, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_KRIS, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_Male_3, MSGBOX_NPC
	applymovement LOCALID_KRIS, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	removeobject LOCALID_KRIS
	clearflag FLAG_TEMP_1
	addobject LOCALID_COPYCAT
	applymovement LOCALID_COPYCAT, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	applymovement LOCALID_COPYCAT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Copycat_Text_ItsAScream, MSGBOX_NPC
	closemessage
	end

Copycat_Text_Male_1:
#if GERMAN
	.string "{PLAYER}: Hallo!\n"
	.string "Bist du ein Fan von Pokémon?\p"
	.string "{PLAYER}: Hey, ich habe dich\n"
	.string "zuerst gefragt!\p"
	.string "{PLAYER}: …Hä? Was soll das hier\n"
	.string "werden? Du bist echt komisch…$"
#else
	.string "{PLAYER}: Hi! Do you like POKéMON?\p"
	.string "{PLAYER}: Uh, no, I just asked you.\p"
	.string "{PLAYER}: Huh? You're strange!$"
#endif

Copycat_Text_QuickMimicking:
#if GERMAN
	.string "Nachahmerin: …Hm?\n"
	.string "Das Nachahmen aufgeben?\p"
	.string "Aber das ist doch meine\n"
	.string "Lieblingsbeschäftigung!$"
#else
	.string "COPYCAT: Hmm? Quit mimicking?\p"
	.string "But that's my favorite hobby!$"
#endif

Copycat_Text_Male_2:
#if GERMAN
	.string "{PLAYER}: Hallo! Wie geht’s dir so?\n"
	.string "Du bist traurig, weil du deine Poképuppe\l"
	.string "von Piepi verloren hast, stimmt’s?\p"
	.string "{PLAYER}: Gibst du mir einen\n"
	.string "Fahrschein, wenn ich sie finde?\p"
	.string "{PLAYER}: In Ordnung, dann werde\n"
	.string "ich sie für dich suchen gehen!\p"
	.string "Du hast sie wahrscheinlich auf dem\n"
	.string "Weg nach Orania City verloren, oder?$"
#else
	.string "{PLAYER}: Hi! I heard that you\n"
	.string "lost your favorite POKé DOLL.\p"
	.string "{PLAYER}: If I find it, you'll give\n"
	.string "me a rail PASS?\p"
	.string "{PLAYER}: I'll go find it for you.\p"
	.string "You think you lost it when you\n"
	.string "went to VERMILION CITY?$"
#endif

Copycat_Text_Worried:
#if GERMAN
	.string "Nachahmerin: Was? Ich soll dir\n"
	.string "nicht sagen, was du zu tun hast?\p"
	.string "Aber ich mache mir wirklich Sorgen!\n"
	.string "Was, wenn jemand sie finden sollte?$"
#else
	.string "COPYCAT: Pardon?\p"
	.string "I shouldn't decide what you\n"
	.string "should do?\p"
	.string "But I'm really worried… What if\n"
	.string "someone finds it?$"
#endif

Copycat_Text_GiveDoll:
#if GERMAN
	.string "Nachahmerin: Jaa!\n"
	.string "Das ist meine Piepi-Puppe!\p"
	.string "Siehst du die Naht am rechten\n"
	.string "Bein? Das ist der Beweis!$"
#else
	.string "COPYCAT: Yay! That's my CLEFAIRY\n"
	.string "POKé DOLL!\p"
	.string "See the tear where the right leg\n"
	.string "is sewn on? That's proof!$"
#endif

Copycat_Text_GivePass:
#if GERMAN
	.string "Also gut. Hier ist der Fahrschein für\n"
	.string "den Magnetzug! Wie versprochen.$"
#else
	.string "OK. Here's the MAGNET TRAIN PASS\n"
	.string "like I promised!$"
#endif

Copycat_Text_ExplainPass:
#if GERMAN
	.string "Nachahmerin: Das\n"
	.string "ist der Fahrschein für den Magnetzug.\p"
	.string "Der Mann von der Eisenbahn gab mir das,\n"
	.string "als sie unser altes Haus niederrissen,\l"
	.string "um den\p"
	.string "Bahnhof zu bauen.$"
#else
	.string "COPYCAT: That's the PASS for the\n"
	.string "MAGNET TRAIN.\p"
	.string "The rail company man gave me\n"
	.string "that when they tore down our old\l"
	.string "house for the STATION.$"
#endif

Copycat_Text_Male_3:
#if GERMAN
	.string "{PLAYER}: Hallo! Vielen Dank für\n"
	.string "den Fahrschein noch mal!\p"
	.string "{PLAYER}: Oh Mann…\p"
	.string "{PLAYER}: Macht es dir wirklich\n"
	.string "so viel Spaß, mich nachzuahmen?$"
#else
	.string "{PLAYER}: Hi! Thanks a lot for the\n"
	.string "rail PASS!\p"
	.string "{PLAYER}: Pardon?\p"
	.string "{PLAYER}: Is it that fun to mimic\n"
	.string "my every move?$"
#endif

Copycat_Text_ItsAScream:
#if GERMAN
	.string "Nachahmerin: Na klar!\n"
	.string "Ich amüsiere mich wie verrückt!$"
#else
	.string "COPYCAT: You bet! It's a scream!$"
#endif

Copycat_Text_Dodrio1:
#if GERMAN
	.string "Dodri: Gii giii!$"
#else
	.string "DODRIO: Gii giii!$"
#endif

Copycat_Text_Dodrio2:
#if GERMAN
	.string "Spieglein, Spieglein an der Wand,\p"
	.string "Wer ist die Schönste im ganzen\p"
	.string "Land?$"
#else
	.string "MIRROR, MIRROR ON THE WALL,\n"
	.string "WHO'S THE FAIREST ONE OF ALL?$"
#endif

Copycat_Text_2FDoll:
#if GERMAN
	.string "Das ist ein seltenes Pokémon! Was?\p"
	.string "Es ist nur eine Puppe…$"
#else
	.string "This is a rare POKéMON! Huh?\p"
	.string "It's only a doll…$"
#endif
