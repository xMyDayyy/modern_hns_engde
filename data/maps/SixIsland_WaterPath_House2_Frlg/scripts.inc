SixIsland_WaterPath_House2_Frlg_MapScripts::
	.byte 0

SixIsland_WaterPath_House2_EventScript_Man::
	msgbox SixIsland_WaterPath_House2_Text_MyNeighborMeasuredMe, MSGBOX_NPC
	end

SixIsland_WaterPath_House2_Text_MyNeighborMeasuredMe::
#if GERMAN
	.string "Ich bin genau 169 cm groß.\p"
	.string "Ich weiß das so genau, weil mich mein\n"
	.string "Nachbar gemessen hat.$"
#else
	.string "My height is 67.0 inches on the\n"
	.string "button.\p"
	.string "I know it is this precisely because\n"
	.string "my neighbor measured me.$"
#endif

