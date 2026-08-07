Route15_WestEntrance_1F_Frlg_MapScripts::
	.byte 0

Route15_WestEntrance_1F_EventScript_Guard::
	msgbox Route15_WestEntrance_1F_Text_OaksAideCameByHere, MSGBOX_NPC
	end

Route15_WestEntrance_1F_Text_OaksAideCameByHere::
#if GERMAN
	.string "Arbeitest du an einem Pokédex?\p"
	.string "Prof. Eichs Assistent ist\n"
	.string "kürzlich hier vorbeigekommen!$"
#else
	.string "Are you the kid who's working on\n"
	.string "a POKéDEX?\p"
	.string "PROF. OAK's AIDE came by here.$"
#endif

