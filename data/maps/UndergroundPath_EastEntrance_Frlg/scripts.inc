UndergroundPath_EastEntrance_Frlg_MapScripts::
	.byte 0

UndergroundPath_EastEntrance_EventScript_Woman::
	msgbox UndergroundPath_EastEntrance_Text_DoYouGoToCeladonDeptStore, MSGBOX_NPC
	end

UndergroundPath_EastEntrance_Text_DoYouGoToCeladonDeptStore::
#if GERMAN
	.string "Das große Einkaufszentrum in\n"
	.string "{COLOR RED}Prismania City{COLOR DARK_GRAY} hat eine riesige\l"
	.string "Auswahl!$"
#else
	.string "The DEPARTMENT STORE in CELADON\n"
	.string "has a great selection.\p"
	.string "Do you go there very often?$"
#endif

