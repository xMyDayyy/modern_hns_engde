SSAnne_2F_Room6_Frlg_MapScripts::
	.byte 0

SSAnne_2F_Room6_EventScript_Woman1::
	msgbox SSAnne_2F_Room6_Text_CaptainIsAwfullySick, MSGBOX_NPC
	end

SSAnne_2F_Room6_EventScript_Woman2::
	msgbox SSAnne_2F_Room6_Text_ManyPeopleGetSeasick, MSGBOX_NPC
	end

SSAnne_2F_Room6_Text_CaptainIsAwfullySick::
#if GERMAN
	.string "Der Kapitän war kreidebleich!\n"
	.string "Er sah schlecht aus!$"
#else
	.string "The CAPTAIN said he's awfully sick.\n"
	.string "He was all pale.$"
#endif

SSAnne_2F_Room6_Text_ManyPeopleGetSeasick::
#if GERMAN
	.string "Viele Leute werden leicht seekrank!$"
#else
	.string "I hear many people get seasick.$"
#endif

