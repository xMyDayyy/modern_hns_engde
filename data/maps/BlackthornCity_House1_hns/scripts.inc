BlackthornCity_House1_hns_MapScripts::
	.byte 0

BlackthornCity_House1EventScript_Granny::
	msgbox BlackthornCity_House1_Text_Granny, MSGBOX_NPC
	end

BlackthornCity_House1EventScript_Dratini::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DRATINI, CRY_MODE_NORMAL
	msgbox BlackthornCity_House1_Text_Dratini, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BlackthornCity_House1_Text_Granny:
#if GERMAN
	.string "Ebenholz City ist die Heimat eines alten\n"
	.string "Klans, der die tiefsten Geheimnisse\l"
	.string "der Drachen-Pokémon ergründet hat.\p"
	.string "Aus diesem Grund sind über diesen Ort\n"
	.string "zahlreiche Legenden überliefert, die\l"
	.string "sich um die Drachen-Pokémon ranken.$"
#else
	.string "A clan of trainers who can freely\n"
	.string "command dragons live right here in\l"
	.string "BLACKTHORN.\p"
	.string "As a result, there are many legends\n"
	.string "about dragons in this town.$"
#endif

BlackthornCity_House1_Text_Dratini:
#if GERMAN
	.string "Dratini: Draaa!$"
#else
	.string "DRATINI: Draa!$"
#endif
