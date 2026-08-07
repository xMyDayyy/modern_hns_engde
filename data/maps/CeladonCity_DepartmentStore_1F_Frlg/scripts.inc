CeladonCity_DepartmentStore_1F_Frlg_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_1F_EventScript_Receptionist::
	msgbox CeladonCity_DepartmentStore_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_1F_EventScript_LayoutSign::
	msgbox CeladonCity_DepartmentStore_1F_Text_FloorDescriptions, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_1F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_1F_Text_ServiceCounter, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_1F_Text_WelcomeToDeptStore::
#if GERMAN
	.string "Willkommen im Einkaufszentrum von\n"
	.string "Prismania City!\p"
	.string "Auf der Tafel rechts findest du\n"
	.string "eine Übersicht.$"
#else
	.string "Hello!\n"
	.string "Welcome to CELADON DEPT. STORE.\p"
	.string "The board on the right describes\n"
	.string "the store layout.$"
#endif

CeladonCity_DepartmentStore_1F_Text_FloorDescriptions::
#if GERMAN
	.string "EG: Kundeninformation\p"
	.string "1S: Zubehör für Trainer\p"
	.string "2S: Videospiele-Shop\p"
	.string "3S: Geschenkartikel\p"
	.string "4S: Drogerie\p"
	.string "Dachgarten: Automaten$"
#else
	.string "1F: SERVICE COUNTER\p"
	.string "2F: TRAINER'S MARKET\p"
	.string "3F: TV GAME SHOP\p"
	.string "4F: WISE MAN GIFTS\p"
	.string "5F: DRUGSTORE\p"
	.string "ROOFTOP SQUARE: VENDING MACHINES$"
#endif

CeladonCity_DepartmentStore_1F_Text_ServiceCounter::
#if GERMAN
	.string "EG: Kundeninformation$"
#else
	.string "1F: SERVICE COUNTER$"
#endif

