CeladonCity_Apartments_1F_hns_MapScripts::
	.byte 0

CeladonCity_Apartments_1F_EventScript_Manager::
	msgbox CeladonMansion_Text_Manager, MSGBOX_NPC
	end

CeladonCity_Apartments_1F_EventScript_Sign::
	msgbox CeladonMansion_Text_ManagersSuiteSign, MSGBOX_SIGN
	end

CeladonMansion_Text_Manager:
#if GERMAN
	.string "Meine lieben Pokémon leisten mir\n"
	.string "Gesellschaft, sodass ich nie allein bin.\p"
	.string "Mauzi bringt sogar Geld nach Hause.$"
#else
	.string "My dear POKéMON keep me company,\n"
	.string "so I don't ever feel lonely.\p"
	.string "MEOWTH even brings money home.$"
#endif

CeladonMansion_Text_ManagersSuiteSign:
#if GERMAN
	.string "Prismania City Hotel Manager-Raum.$"
#else
	.string "CELADON MANSION MANAGER'S SUITE$"
#endif
