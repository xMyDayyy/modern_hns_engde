OldaleTown_House1_MapScripts::
	.byte 0

OldaleTown_House1_EventScript_Woman::
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
	end

OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
#if GERMAN
	.string "Das Pokémon auf der linken Seite der\n"
	.string "Liste tritt im Kampf als Erstes an.\p"
	.string "Hast du mehrere Pokémon in deinem\l"
	.string "Team,\n"
	.string "stelle sie so der Reihe nach auf, wie\p"
	.string "es\l"
	.string "für den Kampf am günstigsten ist.\p"
	.string "Das kann ein Vorteil für dich sein.$"
#else
	.string "When a POKéMON battle starts, the one\n"
	.string "at the left of the list goes out first.\p"
	.string "So, when you get more POKéMON in your\n"
	.string "party, try switching around the order\l"
	.string "of your POKéMON.\p"
	.string "It could give you an advantage.$"
#endif

