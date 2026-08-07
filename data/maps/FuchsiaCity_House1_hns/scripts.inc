FuchsiaCity_House1_hns_MapScripts::
	.byte 0

FuchsiaCity_House1_EventScript_BillsOlderSister::
	msgbox FuchsiaCity_House1_Text_BillsOlderSister, MSGBOX_NPC
	end

FuchsiaCity_House1_EventScript_Youngster::
	msgbox FuchsiaCity_House1_Text_Youngster, MSGBOX_NPC
	end

FuchsiaCity_House1_Text_BillsOlderSister:
#if GERMAN
	.string "Großvater ist gerade zu Besuch\n"
	.string "bei {COLOR RED}Bill{COLOR DARK_GRAY} in seinem Haus am Kap\l"
	.string "von {COLOR RED}Azuria City{COLOR DARK_GRAY}.$"
#else
	.string "My grandpa is at my brother BILL's\n"
	.string "on CERULEAN CAPE.$"
#endif

FuchsiaCity_House1_Text_Youngster:
#if GERMAN
	.string "Ich habe vom Radweg aus ein paar\n"
	.string "merkwürdige Pokémon in der Gegend\l"
	.string "herumschleichen sehen!$"
#else
	.string "I saw these weird, slow POKéMON on\n"
	.string "CYCLING ROAD.$"
#endif

