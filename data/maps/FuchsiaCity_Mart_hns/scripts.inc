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
	.string "Ich wollte einen Geschenkartikel in der\n"
	.string "Safari-Zone kaufen, aber sie ist\l"
	.string "geschlossen…$"
#else
	.string "The old SAFARI ZONE had way better\n"
	.string "souvenirs...$"
#endif

FuchsiaMart_Text_CooltrainerF:
#if GERMAN
	.string "In dieser Stadt lebt auch die Enkelin\n"
	.string "des Wärters der Safari-Zone.$"
#else
	.string "The old SAFARI ZONE WARDEN's \n"
	.string "granddaughter lives in town.$"
#endif
