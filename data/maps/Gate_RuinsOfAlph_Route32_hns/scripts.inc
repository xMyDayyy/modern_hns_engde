Gate_RuinsOfAlph_Route32_hns_MapScripts::
	.byte 0


Gate_RuinsOfAlph_Route32_EventScript_PokefanM::
	lock
	faceplayer
	msgbox Gate_RuinsOfAlph_Route32_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_RuinsOfAlph_Route32_EventScript_Youngster::
	lock
	faceplayer
	msgbox Gate_RuinsOfAlph_Route32_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_RuinsOfAlph_Route32_Text_PokefanM:
#if GERMAN
	.string "Oh, du untersuchst die Ruinen?\n"
	.string "Aus dir wird bestimmt mal ein guter\l"
	.string "Wissenschaftler!$"
#else
	.string "You're studying the RUINS?\n"
	.string "I see a scientist in the making.$"
#endif

Gate_RuinsOfAlph_Route32_Text_Youngster:
#if GERMAN
	.string "Auf den Steintafeln sind Zeichnungen!\n"
	.string "Ich habe versucht, sie ein bisschen zu\l"
	.string "bewegen, aber ich habe immer noch keine\l"
	.string "Ahnung, zu was sie gut sind.$"
#else
	.string "There are drawings on stone\n"
	.string "panels.\p"
	.string "I tried moving them.\n"
	.string "I wonder what they are.$"
#endif
