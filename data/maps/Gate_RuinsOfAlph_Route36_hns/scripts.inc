Gate_RuinsOfAlph_Route36_hns_MapScripts::
	.byte 0

Gate_RuinsOfAlph_Route36_EventScript_Officer::
	lock
	faceplayer
	msgbox Gate_RuinsOfAlph_Route36_Text_Officer, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_RuinsOfAlph_Route36_EventScript_PokefanM::
	lock
	faceplayer
	msgbox Gate_RuinsOfAlph_Route36_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_RuinsOfAlph_Route36_EventScript_Youngster::
	lock
	faceplayer
	msgbox Gate_RuinsOfAlph_Route36_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_RuinsOfAlph_Route36_Text_Officer:
#if GERMAN
	.string "In den {COLOR RED}Alph-Ruinen{COLOR DARK_GRAY} wird dir Geschichte\n"
	.string "zum Anfassen und Bestaunen geboten.\p"
	.string "Du darfst gerne auch mal versuchen, die\n"
	.string "Steintafeln zu bewegen!$"
#else
	.string "RUINS OF ALPH\p"
	.string "A Look-and-Touch Tourist Site\p"
	.string "Try the sliding stone panels!$"
#endif

Gate_RuinsOfAlph_Route36_Text_PokefanM:
#if GERMAN
	.string "Oh, du untersuchst die Ruinen?\n"
	.string "Aus dir wird bestimmt mal ein\l"
	.string "guter Wissenschaftler!$"
#else
	.string "You're studying the RUINS?\p"
	.string "I see a scientist in the making.$"
#endif

Gate_RuinsOfAlph_Route36_Text_Youngster:
#if GERMAN
	.string "Auf den Steintafeln sind Zeichnungen!\n"
	.string "Ich habe versucht, sie ein bisschen\l"
	.string "zu bewegen, aber ich habe immer noch\l"
	.string "keine Ahnung, zu was sie gut sind.$"
#else
	.string "There are drawings on stone\n"
	.string "panels.\p"
	.string "I tried moving them.\n"
	.string "I wonder what they are.$"
#endif
