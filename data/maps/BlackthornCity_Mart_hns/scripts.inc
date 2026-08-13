BlackthornCity_Mart_hns_MapScripts::
	.byte 0

BlackthornMart_EventScript_CoolTrainerM::
	msgbox BlackthornMart_Text_CooltrainerM, MSGBOX_NPC
	end

BlackthornMart_EventScript_BlackBelt::
	msgbox BlackthornMart_Text_BlackBelt, MSGBOX_NPC
	end

BlackthornMart_Text_CooltrainerM:
#if GERMAN
	.string "Top-Beleber füllt die KP bewusstloser\n"
	.string "Pokémon wieder vollständig auf.\l"
	.string "Im Pokémon-Supermarkt gibt es sie aber\l"
	.string "leider nicht zu kaufen…\p"
	.string "Oh, und Vorsicht! Die AP des jeweiligen\n"
	.string "Pokémon werden von Top-Beleber nicht\l"
	.string "mit aufgefüllt!$"
#else
	.string "You can't buy MAX REVIVE, but it\n"
	.string "fully restores a fainted POKéMON.\p"
	.string "Beware--it won't restore PP, the\n"
	.string "POWER POINTS needed for moves.$"
#endif

BlackthornMart_Text_BlackBelt:
#if GERMAN
	.string "Top-Schutz hält dir schwache Pokémon\n"
	.string "vom Leib.\p"
	.string "Von allen Schutzsprays hält die Wirkung\n"
	.string "von Top-Schutz am längsten an.$"
#else
	.string "MAX REPEL keeps weak POKéMON away\n"
	.string "from you.\p"
	.string "It's the longest lasting of the\n"
	.string "REPEL sprays.$"
#endif
