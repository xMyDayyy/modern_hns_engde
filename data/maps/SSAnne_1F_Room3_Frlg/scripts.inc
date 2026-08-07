SSAnne_1F_Room3_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room3_EventScript_LittleGirl::
	msgbox SSAnne_1F_Room3_Text_AlwaysTravelWithWigglytuff, MSGBOX_NPC
	end

SSAnne_1F_Room3_EventScript_BaldingMan::
	msgbox SSAnne_1F_Room3_Text_CruiseIsElegantAndCozy, MSGBOX_NPC
	end

SSAnne_1F_Room3_EventScript_Wigglytuff::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WIGGLYTUFF, CRY_MODE_NORMAL
	msgbox SSAnne_1F_Room3_Text_Wigglytuff
	waitmoncry
	release
	end

SSAnne_1F_Room3_Text_CruiseIsElegantAndCozy::
#if GERMAN
	.string "Ach, so eine Kreuzfahrt ist\n"
	.string "wundervoll!$"
#else
	.string "A world cruise is so elegant yet\n"
	.string "cozy!$"
#endif

SSAnne_1F_Room3_Text_AlwaysTravelWithWigglytuff::
#if GERMAN
	.string "Ich reise immer mit Knuddeluff!$"
#else
	.string "I always travel with WIGGLYTUFF.\n"
	.string "I never leave home without it.$"
#endif

SSAnne_1F_Room3_Text_Wigglytuff::
#if GERMAN
	.string "Knuddeluff: Knuddel! Knuddel!$"
#else
	.string "WIGGLYTUFF: Puup pupuu!$"
#endif

