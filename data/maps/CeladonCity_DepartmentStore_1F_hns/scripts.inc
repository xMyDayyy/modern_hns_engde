CeladonCity_DepartmentStore_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonDeptElevator_OnFrame
	.byte 0

CeladonDept1_EventScript_Receptionsit::
    msgbox CeladonDeptStore_Text_1FReceptionist, MSGBOX_NPC
    end

CeladonDept1_EventScript_Gent::
    msgbox CeladonDeptStore_Text_1FGentleman, MSGBOX_NPC
    end

CeladonDept1_EventScript_Teacher::
    msgbox CeladonDeptStore_Text_1FTeacher, MSGBOX_NPC
    end

CeladonDept1_EventScript_Directory::
    msgbox CeladonDeptStore_Text_1FDirectory, MSGBOX_SIGN
    end

CeladonDeptStore_Text_1FReceptionist:
#if GERMAN
	.string "Hallo! Willkommen im Prismania City\n"
	.string "Kaufhaus!\p"
	.string "Das Verzeichnis findest du\n"
	.string "an der Wand.$"
#else
    .string "Hello! Welcome to CELADON DEPT.\n"
    .string "STORE!\p"
    .string "The directory is on the wall.$"
#endif

CeladonDeptStore_Text_1FGentleman:
#if GERMAN
	.string "Dieses Kaufhaus gehört zur selben\n"
	.string "Kette wie das in Dukatia City.\p"
	.string "Beide wurden gleichzeitig renoviert.$"
#else
    .string "This DEPT.STORE is part of the same\n"
    .string "chain as the one in GOLDENROD CITY.\p"
    .string "They were both renovated at the same\n"
    .string "time.$"
#endif

CeladonDeptStore_Text_1FTeacher:
#if GERMAN
	.string "Ich bin zum ersten Mal hier… Das\n"
	.string "Gebäude ist so groß, dass ich fast\l"
	.string "Angst habe, mich zu verlaufen.$"
#else
    .string "This is my first time here.\p"
    .string "It's so big…\p"
    .string "I'm afraid I'll get lost.$"
#endif

CeladonDeptStore_Text_1FDirectory:
#if GERMAN
	.string "EG: Kunden Information\p"
	.string "1F: Trainer Zubehör\p"
	.string "2F: TM-Laden\p"
	.string "3F: Geschenkartikel\p"
	.string "4F: Drogerie\p"
	.string "5F: Dachterrasse$"
#else
    .string "1F: SERVICE COUNTER\p"
    .string "2F: TRAINER'S MARKET\p"
    .string "3F: TM SHOP\p"
    .string "4F: WISEMAN GIFTS\p"
    .string "5F: DRUG STORE\p"
    .string "6F: ROOFTOP SQUARE$"
#endif
