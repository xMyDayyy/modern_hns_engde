VermilionCity_House3_hns_MapScripts::
	.byte 0

VermilionCity_House3_EventScript_Gentleman::
	msgbox VermilionCity_House3_Text_Gentleman, MSGBOX_NPC
	end

VermilionCity_House3_Text_Gentleman:
#if GERMAN
	.string "Der Tunnel, an dem die Digda all diese\n"
	.string "Jahre gearbeitet haben, führt zu einer\l"
	.string "entlegenen Stadt.$"
#else
	.string "Over many years, DIGLETT dug a\n"
	.string "large tunnel.\p"
	.string "That tunnel goes to a distant\n"
	.string "town.$"
#endif
