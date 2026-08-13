Gate_MahoganyTown_Route43_hns_MapScripts::
	.byte 0

Gate_MahoganyTown_Route43_EventScript_Cop::
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 11, Gate_MahoganyTown_Route43_EventScript_CopAfter
	msgbox Route43MahoganyGate_Text_Officer, MSGBOX_NPC
	end

Gate_MahoganyTown_Route43_EventScript_CopAfter::
	msgbox Route43MahoganyGate_Text_Officer_RocketsCleared, MSGBOX_NPC
	end

Route43MahoganyGate_Text_Officer:
#if GERMAN
	.string "Hier kamen nur Wanderer vorbei, die auf\n"
	.string "dem Weg zum See des Zorns waren.$"
#else
    .string "Only people headed up to LAKE OF\n"
    .string "RAGE have been through here lately.$"
#endif

Route43MahoganyGate_Text_Officer_RocketsCleared:
#if GERMAN
	.string "In letzter Zeit geht niemand\n"
	.string "mehr zum See des Zorns.$"
#else
    .string "Nobody goes up to LAKE OF RAGE\n"
    .string "these days.$"
#endif

