OldaleTown_House1_MapScripts::
	.byte 0

OldaleTown_House1_EventScript_Woman::
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
	end

OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
#if GERMAN
	.string "Mein Mann sagt, in den Wäldern im\n"
	.string "Westen leben Pokémon, die man nirgends\l"
	.string "sonst zu Gesicht bekommt.\p"
	.string "Ich war nie dort. Zu viele Käfer.$"
#else
	.string "My husband says the woods to the west\n"
	.string "are home to POKéMON you see nowhere\l"
	.string "else.\p"
	.string "I've never been. Too many bugs.$"
#endif

