CeladonCity_DepartmentStore_2F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonDeptElevator_OnFrame
	.byte 0

CeladonDept2_EventScript_Pokefan::
	msgbox CeladonDeptStore2F_Text_PokefanM, MSGBOX_NPC
	end

CeladonDept2_EventScript_Youngster::
	msgbox CeladonDeptStore2F_Text_Youngster, MSGBOX_NPC
	end

CeladonDept2_EventScript_Directory::
	msgbox CeladonDeptStore2F_Text_Directory, MSGBOX_SIGN
	end

CeladonDeptStore2F_Text_PokefanM:
#if GERMAN
	.string "Mein Sohn hat mich auf meine alten Tage\n"
	.string "noch mal richtig auf den Geschmack\l"
	.string "gebracht, als Trainer anzufangen…\p"
	.string "Das riesige Angebot an nützlichen\n"
	.string "Items hier ist echt überwältigend!$"
#else
	.string "I just recently became a trainer.\p"
	.string "My son encouraged me to do it.\p"
	.string "I'm impressed by the selection of\n"
	.string "convenient items.$"
#endif

CeladonDeptStore2F_Text_Youngster:
#if GERMAN
	.string "Mein Papa tut sich sehr schwer damit,\n"
	.string "die Namen aller Items und ihren Zweck im\l"
	.string "Kopf zu behalten…$"
#else
	.string "My dad's having a hard time\n"
	.string "learning the names of items and\l"
	.string "how they are supposed to be used…$"
#endif

CeladonDeptStore2F_Text_Directory:
#if GERMAN
	.string "Allerlei nützliche Items für Trainer!\n"
	.string "1S: Zubehör für Trainer$"
#else
	.string "Top Grade Items for Trainers!\p"
	.string "2F: TRAINER'S MARKET$"
#endif

