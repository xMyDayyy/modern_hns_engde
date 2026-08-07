CeruleanCity_Mart_hns_MapScripts::
	.byte 0

CeruleanCity_Mart_EventScript_Juggler::
	msgbox CeruleanMart_Text_CooltrainerM, MSGBOX_NPC
	end

CeruleanCity_Mart_EventScript_CooltrainerF::
	msgbox CeruleanMart_Text_CooltrainerF, MSGBOX_NPC
	end

CeruleanMart_Text_CooltrainerM:
#if GERMAN
	.string "Auf dem Weg zum Kap bei Azuria City\n"
	.string "wirst du vielen Trainern begegnen.\p"
	.string "Sie stellen dort das Können anderer\n"
	.string "Trainer auf die Probe.$"
#else
	.string "You'll run into many trainers on\n"
	.string "the way to CERULEAN's CAPE.\p"
	.string "They want to see how they stack\n"
	.string "up against other trainers.$"
#endif

CeruleanMart_Text_CooltrainerF:
#if GERMAN
	.string "In dieser Stadt ist Misty wahrscheinlich\n"
	.string "die Einzige, die es mit den Trainern\l"
	.string "am Kap von Azuria City aufnehmen kann.$"
#else
	.string "MISTY is about the only person in\n"
	.string "town who can beat the trainers at\l"
	.string "CERULEAN's CAPE.$"
#endif
