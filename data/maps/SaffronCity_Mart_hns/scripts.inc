SaffronCity_Mart_hns_MapScripts::
	.byte 0

SafronMart_EventScript_CooltrainerM::
	msgbox SaffronMart_Text_CooltrainerM, MSGBOX_NPC
	end
SafronMart_EventScript_CooltrainerF::
	msgbox SaffronMart_Text_CooltrainerF, MSGBOX_NPC
	end
SaffronMart_Text_CooltrainerM:
#if GERMAN
	.string "In {COLOR RED}Lavandia{COLOR DARK_GRAY} ist ein großer Radioturm.$"
#else
	.string "There's a big RADIO TOWER in\n"
	.string "LAVENDER.$"
#endif

SaffronMart_Text_CooltrainerF:
#if GERMAN
	.string "Ich will stärker werden, aber\n"
	.string "es klappt nicht so richtig…\p"
	.string "Könntest du mir nicht ein paar\n"
	.string "Tricks und Kniffe zeigen?$"
#else
	.string "I want to become stronger, but\n"
	.string "I'm not good yet…\p"
	.string "Could you show me how sometime?$"
#endif
