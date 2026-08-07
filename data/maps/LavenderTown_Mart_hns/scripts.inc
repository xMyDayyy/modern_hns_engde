LavenderTown_Mart_hns_MapScripts::
	.byte 0

LavenderTown_Mart_EventScript_Pokefan::
	msgbox LavenderMart_Text_PokefanM, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Rocker::
	msgbox LavenderMart_Text_Rocker, MSGBOX_NPC
	end

LavenderMart_Text_PokefanM:
#if GERMAN
	.string "“Schutz” ist auf jeder Erkundungstour\n"
	.string "ein unabdingbares Item!\p"
	.string "Ich liebe es zwar, fremde Orte zu\n"
	.string "erkunden, aber es gibt immer noch\l"
	.string "ein paar Höhlen, in die ich noch nie\l"
	.string "auch nur einen Fuß gesetzt habe.$"
#else
	.string "REPEL is a necessity if you are\n"
	.string "going to explore a cave.\p"
	.string "Even though I like exploring,\n"
	.string "I still haven't made it to all\l"
	.string "the caves.$"
#endif

LavenderMart_Text_Rocker:
#if GERMAN
	.string "Ich habe von einem Kunstschmied\n"
	.string "in Johto gehört, der maßgefertigte\l"
	.string "Pokébälle herstellen soll.\p"
	.string "Ich wünschte, ich hätte auch welche!$"
#else
	.string "I heard about a craftsman who\n"
	.string "makes custom BALLS in the JOHTO\l"
	.string "town of AZALEA.\p"
	.string "I wish I had some.$"
#endif
