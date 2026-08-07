Gate_Route31_VioletCity_hns_MapScripts::
	.byte 0

Gate_Route31_VioletCity_EventScript_Policeman::
	lock
	faceplayer
	msgbox Gate_Route31_VioletCity_Text_Policeman, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_Route31_VioletCity_EventScript_CooltrainerF::
	lock
	faceplayer
	msgbox Gate_Route31_VioletCity_Text_CooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_Route31_VioletCity_Text_Policeman:
#if GERMAN
	.string "Hallöchen! Warst du im\n"
	.string "{COLOR RED}Knofensa-Turm{COLOR DARK_GRAY}?$"
#else
	.string "Hi there! Did you visit\n"
	.string "SPROUT TOWER?$"
#endif

Gate_Route31_VioletCity_Text_CooltrainerF:
#if GERMAN
	.string "Ich bin zu weit gelaufen.\n"
	.string "Ich sollte zu Hause anrufen!$"
#else
	.string "I saw the cutest POKéMON out\n"
	.string "there.\p"
	.string "It looked a lot like PIKACHU!$"
#endif
