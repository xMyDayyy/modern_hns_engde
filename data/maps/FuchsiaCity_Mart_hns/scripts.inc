FuchsiaCity_Mart_hns_MapScripts::
	.byte 0

FuchsiaCity_Mart_EventScript_Fisher::
	msgbox FuchsiaMart_Text_Fisher, MSGBOX_NPC
	end

FuchsiaCity_Mart_EventScript_Woman::
	msgbox FuchsiaMart_Text_CooltrainerF, MSGBOX_NPC
	end

FuchsiaMart_Text_Fisher:
#if GERMAN
	.string "Ich wollte einen Geschenkartikel\n"
	.string "in der {COLOR RED}Safari-Zone{COLOR DARK_GRAY}\l"
	.string "kaufen, aber sie ist geschlossen…$"
#else
	.string "The old SAFARI ZONE had way better\n"
	.string "souvenirs...$"
#endif

FuchsiaMart_Text_CooltrainerF:
#if GERMAN
	.string "In dieser Stadt lebt\n"
	.string "auch die Enkelin des Wärters der\l"
	.string "{COLOR RED}Safari-Zone{COLOR DARK_GRAY}.$"
#else
	.string "The old SAFARI ZONE WARDEN's \n"
	.string "granddaughter lives in town.$"
#endif
