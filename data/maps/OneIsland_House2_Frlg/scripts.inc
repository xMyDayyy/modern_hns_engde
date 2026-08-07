OneIsland_House2_Frlg_MapScripts::
	.byte 0

OneIsland_House2_EventScript_Lass::
	msgbox OneIsland_House2_Text_IWantToStayHereForever, MSGBOX_NPC
	end

OneIsland_House2_Text_IWantToStayHereForever::
#if GERMAN
	.string "Die Jugend wird von den großen\n"
	.string "Städten geradezu magisch\l"
	.string "angezogen.\l"
	.string "Ich will aber für immer hier\l"
	.string "bleiben!$"
#else
	.string "Young people all want to go off to\n"
	.string "big cities.\p"
	.string "But I want to stay here forever!$"
#endif

