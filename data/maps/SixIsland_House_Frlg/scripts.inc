SixIsland_House_Frlg_MapScripts::
	.byte 0

SixIsland_House_EventScript_OldMan::
	msgbox SixIsland_House_Text_GoodPlaceForNatureAndHistory, MSGBOX_NPC
	end

SixIsland_House_Text_GoodPlaceForNatureAndHistory::
#if GERMAN
	.string "Auf dieser Insel gibt es nichts,\n"
	.string "was junge Leute aufregend finden.\p"
	.string "Aber in punkto Natur und Geschichte ist\n"
	.string "dies ein interessanter Ort.\l"
	.string "Entspann dich und genieße deinen\l"
	.string "Aufenthalt.$"
#else
	.string "There's nothing that young people'd\n"
	.string "find exciting here on this island.\p"
	.string "But, this is a good place in terms\n"
	.string "of nature and history.\p"
	.string "Relax and enjoy your stay.$"
#endif

