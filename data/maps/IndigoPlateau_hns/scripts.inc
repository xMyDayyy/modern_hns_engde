IndigoPlateau_hns_MapScripts::
	.byte 0

IndigoPlateau_Sign::
	msgbox IndigoPlateau_Text_Sign, MSGBOX_SIGN
	end

IndigoPlateau_Text_Sign:
#if GERMAN
	.string "Das Indigo Plateau\p"
	.string "Das ultimative Ziel aller Trainer!\n"
	.string "Hauptquartier der Pokémon Liga.$"
#else
	.string "INDIGO PLATEAU\p"
	.string "The Ultimate Goal for Trainers!\p"
	.string "POKéMON LEAGUE HQ$"
#endif
