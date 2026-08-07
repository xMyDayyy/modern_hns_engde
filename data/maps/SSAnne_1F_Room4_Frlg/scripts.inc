SSAnne_1F_Room4_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room4_EventScript_Woman::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SSAnne_1F_Room4_EventScript_WomanPlayerMale
	msgbox SSAnne_1F_Room4_Text_WaitressCherryPiePlease
	release
	end

SSAnne_1F_Room4_EventScript_WomanPlayerMale::
	msgbox SSAnne_1F_Room4_Text_WaiterCherryPiePlease
	release
	end

SSAnne_1F_Room4_Text_WaiterCherryPiePlease::
#if GERMAN
	.string "Steward, ich hätte gern ein\n"
	.string "Stückchen Torte!$"
#else
	.string "Waiter, I would like a cherry pie,\n"
	.string "please!$"
#endif

SSAnne_1F_Room4_Text_WaitressCherryPiePlease::
#if GERMAN
	.string "Bedienung, ich hätte gern ein\n"
	.string "Stückchen Torte!$"
#else
	.string "Waitress, I would like a cherry\n"
	.string "pie, please!$"
#endif

