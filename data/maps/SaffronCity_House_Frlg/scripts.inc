SaffronCity_House_Frlg_MapScripts::
	.byte 0

SaffronCity_House_EventScript_Lass::
	msgbox SaffronCity_House_Text_DontLookAtMyLetter, MSGBOX_NPC
	end

SaffronCity_House_EventScript_Youngster::
	msgbox SaffronCity_House_Text_GettingCopycatPokeDoll, MSGBOX_NPC
	end

SaffronCity_House_EventScript_Pidgey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
	msgbox SaffronCity_House_Text_Pidgey
	waitmoncry
	release
	end

SaffronCity_House_EventScript_Letter::
	msgbox SaffronCity_House_Text_ExplainPPUp, MSGBOX_SIGN
	end

SaffronCity_House_Text_DontLookAtMyLetter::
#if GERMAN
	.string "... vielen Dank für deinen Brief!\n"
	.string "Bis bald...\p"
	.string "Heh!\n"
	.string "Lies meinen Brief nicht!$"
#else
	.string "…Thank you for writing.\n"
	.string "I hope to see you soon!\p"
	.string "…Hey!\n"
	.string "Don't look at my letter!$"
#endif

SaffronCity_House_Text_Pidgey::
#if GERMAN
	.string "Taubsi: Taubsi!$"
#else
	.string "PIDGEY: Kurukkoo!$"
#endif

SaffronCity_House_Text_GettingCopycatPokeDoll::
#if GERMAN
	.string "Ich mag die Nachahmerin!\n"
	.string "Ich kaufe ihr eine PokéPuppe!$"
#else
	.string "The COPYCAT is cute!\n"
	.string "I'm getting her a POKé DOLL.$"
#endif

SaffronCity_House_Text_ExplainPPUp::
#if GERMAN
	.string "Ich habe ein AP-Plus geschenkt\n"
	.string "bekommen!\p"
	.string "Es erhöht die Angriffspunkte einer\n"
	.string "Attacke!\p"
	.string "Ich sollte es bei einer mächtigen\n"
	.string "Attacke, die wenig AP hat,\l"
	.string "einsetzen.$"
#else
	.string "I was given a PP UP as a gift.\p"
	.string "It's used to increase the PP of\n"
	.string "a POKéMON's move.\p"
	.string "I should use it on a powerful move\n"
	.string "with only a few PP.$"
#endif

