Route111_OldLadysRestStop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OldLadysRestStop_OnTransition
	.byte 0

Route111_OldLadysRestStop_OnTransition:
	setflag FLAG_LANDMARK_OLD_LADY_REST_SHOP
	end

Route111_OldLadysRestStop_EventScript_OldLady::
	lock
	faceplayer
	msgbox Route111_OldLadysRestStop_Text_RestUpHere, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_OldLadysRestStop_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineRest
	end

Route111_OldLadysRestStop_EventScript_Rest::
	msgbox Route111_OldLadysRestStop_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_OldLadysRestStop_EventScript_Rest
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineRest
	end

Route111_OldLadysRestStop_EventScript_DeclineRest::
	msgbox Route111_OldLadysRestStop_Text_DontNeedToBeShy, MSGBOX_DEFAULT
	release
	end

Route111_OldLadysRestStop_Text_RestUpHere:
#if GERMAN
	.string "Oh, du meine Güte.\n"
	.string "Sind deine Pokémon nicht erschöpft?\p"
	.string "Wenn du magst, ruhe dich doch hier aus.\n"
	.string "Das ist doch eine gute Idee, oder?$"
#else
	.string "Oh, dear, dear.\n"
	.string "Aren't your POKéMON exhausted?\p"
	.string "If you'd like, rest up here.\n"
	.string "That's a fine idea! You should do that.$"
#endif

Route111_OldLadysRestStop_Text_TakeYourTimeRestUp:
#if GERMAN
	.string "Genau.\n"
	.string "Nimm dir Zeit und ruhe dich aus.$"
#else
	.string "That's right.\n"
	.string "Take your time and rest up!$"
#endif

Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest:
#if GERMAN
	.string "Oh, du meine Güte.\n"
	.string "Sind deine Pokémon immer noch müde?\p"
	.string "Dann solltest du dich noch länger hier\n"
	.string "ausruhen. Was meinst du?$"
#else
	.string "Oh, dear, dear.\n"
	.string "Are your POKéMON still tired?\p"
	.string "You should take another rest here.\n"
	.string "That's a fine idea. You should do that.$"
#endif

Route111_OldLadysRestStop_Text_DontNeedToBeShy:
#if GERMAN
	.string "Ach so. Na, das macht doch nichts!\n"
	.string "Besuche mich bald wieder.$"
#else
	.string "Is that so?\n"
	.string "You don't need to be shy about it.$"
#endif

