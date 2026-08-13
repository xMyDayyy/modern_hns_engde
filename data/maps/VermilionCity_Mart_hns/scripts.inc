VermilionCity_Mart_hns_MapScripts::
	.byte 0

VermilionCity_Mart_EventScript_BirdMan::
	msgbox VermilionMart_Text_SuperNerd, MSGBOX_NPC
	end

VermilionCity_Mart_EventScript_Woman::
	msgbox VermilionMart_Text_Beauty, MSGBOX_NPC
	end

VermilionMart_Text_SuperNerd:
#if GERMAN
	.string "Team Rocket hat Kanto verlassen. Das\n"
	.string "allein ist schon ein Grund zum Feiern!$"
#else
	.string "TEAM ROCKET is no longer in\n"
	.string "KANTO.\p"
	.string "That alone makes me happy.$"
#endif

VermilionMart_Text_Beauty:
#if GERMAN
	.string "Ich habe vor, in Saffronia City\n"
	.string "einkaufen zu gehen.$"
#else
	.string "I'm thinking about going shopping\n"
	.string "in SAFFRON.$"
#endif
