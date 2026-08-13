GoldenrodCity_DepartmentStore_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodDeptElevator_OnFrame
	.byte 0

GoldenrodDeptStore1_EventScript_Receptionist::
	lock
	faceplayer
	msgbox GoldenrodDeptStor1_Text_Receptionist, MSGBOX_DEFAULT
	closemessage
	release
	end
GoldenrodDeptStore1_EventScript_Gentleman::
	lock
	faceplayer
	msgbox GoldenrodDeptStore1_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end
GoldenrodDeptStore1_EventScript_PokefanF::
	lock
	faceplayer
	msgbox GoldenrodDeptStore1_Text_PokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end
GoldenrodDeptStore1_EventScript_BugCatcher::
	lock
	faceplayer
	msgbox GoldenrodDeptStore1_Text_BugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore1_EventScript_Directory::
	lock
	msgbox GoldenrodDeptStore1_Text_Directory, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodDeptStor1_Text_Receptionist:
#if GERMAN
	.string "Willkommen im Kaufhaus von Dukatia\n"
	.string "City.$"
#else
    .string "Welcome to GOLDENROD DEPT.STORE.$"
#endif

GoldenrodDeptStore1_Text_Gentleman:
#if GERMAN
	.string "Das Kaufhaus bietet eine große\n"
	.string "Auswahl.\p"
	.string "Aber einige Items erhält man nur als\n"
	.string "Preis in der Spielhalle.$"
#else
    .string "The DEPT.STORE has a decent\n"
    .string "selection.\p"
    .string "But some items are only available\n"
    .string "as GAME CORNER prizes.$"
#endif

GoldenrodDeptStore1_Text_PokefanF:
#if GERMAN
	.string "Dann mal ans Werk! Ich habe vor, heute\n"
	.string "das halbe Kaufhaus leerzukaufen!$"
#else
    .string "I'm raring to shop again today!$"
#endif

GoldenrodDeptStore1_Text_BugCatcher:
#if GERMAN
	.string "Mama ist eine echte\n"
	.string "Schnäppchenjägerin.\p"
	.string "Sie besorgt mir meine Items immer zu\n"
	.string "etwas günstigeren Preisen.$"
#else
    .string "Mom's good at bargain hunting.\p"
    .string "She always buys stuff at lower\n"
    .string "prices.$"
#endif

GoldenrodDeptStore1_Text_Directory:
#if GERMAN
	.string "EG Info-Schalter\p"
	.string "1S Trainermarkt\p"
	.string "2S Kampfkollektion\p"
	.string "3S Arznei\p"
	.string "4S TM-Ecke\p"
	.string "5S Platz der ewigen Stille\p"
	.string "Dachterrassen Aussichtsplattform$"
#else
    .string "1F SERVICE COUNTER\n"
	.string "YOU ARE HERE.\p"
    .string "2F TRAINER'S MARKET\p"
    .string "3F BATTLE COLLECTION\p"
    .string "4F MEDICINE BOX\p"
    .string "5F TM CORNER\p"
    .string "6F TRANQUIL SQUARE\p"
    .string "ROOFTOP LOOKOUT$"
#endif
