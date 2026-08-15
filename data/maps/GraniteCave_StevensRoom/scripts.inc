GraniteCave_StevensRoom_MapScripts::
	.byte 0

GraniteCave_StevensRoom_EventScript_Steven::
	lock
	faceplayer
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
	setvar VAR_0x8004, ITEM_LETTER
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_DELIVERED_STEVEN_LETTER
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
	giveitem_unless_owned ITEM_TM_STEEL_WING
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_REGISTERED_STEVEN_POKENAV
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	playse SE_EXIT
	removeobject LOCALID_GRANITE_CAVE_STEVEN
	release
	end

GraniteCave_StevensRoom_EventScript_StevenExitNorth::
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitSouth::
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_BagFull::
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
	return

GraniteCave_StevensRoom_Movement_StevenExit:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	step_end

GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

GraniteCave_StevensRoom_Movement_StevenExitSouth:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	delay_8
	step_end

GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
#if GERMAN
	.string "Troy: Du hier unten?\p"
	.string "Ich habe dich nach Hoenn geholt, aber\n"
	.string "so schnell hätte ich nicht mit dir\l"
	.string "gerechnet.\p"
	.string "Oh? Ein Brief? Für mich?$"
#else
	.string "TROY: You, down here?\p"
	.string "I'm the one who brought you to HOENN,\n"
	.string "but I didn't expect you this soon.\p"
	.string "Oh?\n"
	.string "A LETTER for me?$"
#endif

GraniteCave_StevensRoom_Text_ThankYouTakeThis:
#if GERMAN
	.string "Troy: Okay, danke schön.\p"
	.string "Du hast all die Beschwerlichkeiten auf\n"
	.string "dich genommen, um ihn mir zu bringen.\l"
	.string "\p"
	.string "Ich muss mich bedanken. Ehrlich.\n"
	.string "Ich werde dir diese TM geben.\p"
	.string "Sie enthält meine Lieblingsattacke,\n"
	.string "Stahlflügel.$"
#else
	.string "STEVEN: Okay, thank you.\p"
	.string "You went through all this trouble to\n"
	.string "deliver that. I need to thank you.\p"
	.string "Let me see…\n"
	.string "I'll give you this TM.\p"
	.string "It contains my favorite move,\n"
	.string "STEEL WING.$"
#endif

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
#if GERMAN
	.string "Troy: Deine Pokémon sehen gut aus.\p"
	.string "Genau deshalb habe ich dich gefragt,\n"
	.string "ob du herkommen willst.\p"
	.string "Warum ich hier unten stehe, erkläre\n"
	.string "ich dir ein andermal.\p"
	.string "Trag mich in deinen PokéCom ein.\n"
	.string "Dann erreichst du mich.\p"
	.string "… … … … …\n"
	.string "…$"
#else
	.string "TROY: Your POKéMON look good.\p"
	.string "That's exactly why I asked whether\n"
	.string "you'd come over here.\p"
	.string "Why I'm standing down here, I'll\n"
	.string "explain another time.\p"
	.string "Register me in your POKéCOM.\n"
	.string "Then you can reach me.\p"
	.string "… … … … … …$"
#endif

GraniteCave_StevensRoom_Text_RegisteredSteven:
#if GERMAN
	.string "Troy wurde im PokéCom-Verzeichnis\n"
	.string "eingetragen.$"
#else
	.string "Registered STEVEN\n"
	.string "in the POKéGEAR.$"
#endif

GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
#if GERMAN
	.string "Nun muss ich mich aber wirklich\n"
	.string "beeilen.$"
#else
	.string "Now, I've got to hurry along.$"
#endif

GraniteCave_StevensRoom_Text_OhBagIsFull:
#if GERMAN
	.string "Oh, dein Beutel ist voll.\n"
	.string "Das ist aber wirklich schade.$"
#else
	.string "Oh, your BAG is full…\n"
	.string "That's too bad, then.$"
#endif

