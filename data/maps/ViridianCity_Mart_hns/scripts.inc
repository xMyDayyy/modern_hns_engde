ViridianCity_Mart_hns_MapScripts::
	.byte 0

ViridianCity_Mart_EventScript_Lass::
	msgbox ViridianMart_Text_Lass, MSGBOX_NPC
	end

ViridianCity_Mart_EventScript_Cooltrainer::
	msgbox ViridianMart_Text_CooltrainerM, MSGBOX_NPC
	end

ViridianMart_Text_Lass:
#if GERMAN
	.string "Der Arenaleiter dieser Stadt\n"
	.string "ist extrem cool!$"
#else
	.string "The GYM LEADER here is totally cool.$"
#endif

ViridianMart_Text_CooltrainerM:
#if GERMAN
	.string "Warst du schon auf der {COLOR RED}Zinnoberinsel{COLOR DARK_GRAY}?\p"
	.string "Sie liegt tief im Süden.$"
#else
	.string "Have you been to CINNABAR?\p"
	.string "It's an island way south of here.$"
#endif

