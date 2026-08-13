Route7_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route7_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route7_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route7_EventScript_Sign::
	msgbox Route7_Text_UndergroundPathSign, MSGBOX_SIGN
	end

Route7_EventScript_Door::
	msgbox Route7_Text_LockedDoor, MSGBOX_SIGN
	end

Route7_Text_UndergroundPathSign:
#if GERMAN
	.string "Was steht auf diesem Flugblatt?\p"
	.string "Auf dem Tunnelpfad tragen schlecht\n"
	.string "erzogene Trainer Pokémon-Kämpfe aus.\p"
	.string "Da sich die Beschwerden der Anwohner\n"
	.string "häufen, wurde der Tunnelpfad auf\l"
	.string "unbestimmte Zeit geschlossen!\l"
	.string "…Das Ordnungsamt von Prismania City$"
#else
	.string "What's this flyer?\p"
	.string "… Uncouth trainers have been\n"
	.string "holding battles in the\l"
	.string "UNDERGROUND PATH.\p"
	.string "Because of rising complaints by\n"
	.string "local residents, the UNDERGROUND\l"
	.string "PATH has been sealed indefinitely.\p"
	.string "CELADON POLICE$"
#endif

Route7_Text_LockedDoor:
#if GERMAN
	.string "Abgeschlossen…$"
#else
	.string "It's locked…$"
#endif

