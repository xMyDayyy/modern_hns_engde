FourIsland_House1_Frlg_MapScripts::
	.byte 0

FourIsland_House1_EventScript_FatMan::
	msgbox FourIsland_House1_Text_YoureAwfullyHeavy, MSGBOX_NPC
	end

FourIsland_House1_Text_YoureAwfullyHeavy::
#if GERMAN
	.string "Hier! Boing!\n"
	.string "Du bist schwer!$"
#else
	.string "There! Boing!\n"
	.string "You're awfully heavy!$"
#endif

