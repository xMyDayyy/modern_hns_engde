SafariZone_Center_RestHouse_Frlg_MapScripts::
	.byte 0

SafariZone_Center_RestHouse_EventScript_Sara::
	msgbox SafariZone_Center_Text_WhereDidErikGo, MSGBOX_NPC
	end

SafariZone_Center_RestHouse_EventScript_Scientist::
	msgbox SafariZone_Center_Text_CatchingMonsAsGifts, MSGBOX_NPC
	end

SafariZone_Center_Text_WhereDidErikGo::
#if GERMAN
	.string "Sarah: Wo ist bloß mein Freund\n"
	.string "Erik hingegangen?$"
#else
	.string "SARA: Where did my boyfriend,\n"
	.string "ERIK, go?$"
#endif

SafariZone_Center_Text_CatchingMonsAsGifts::
#if GERMAN
	.string "Wenn ich Pokémon fange, verschenke ich\n"
	.string "sie, wenn ich wieder zu Hause bin!$"
#else
	.string "I'm catching POKéMON to take home\n"
	.string "as gifts.$"
#endif

