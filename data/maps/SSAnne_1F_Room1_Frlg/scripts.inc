SSAnne_1F_Room1_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room1_EventScript_Gentleman::
	msgbox SSAnne_1F_Room1_Text_ImAGlobalPoliceAgent, MSGBOX_NPC
	end

SSAnne_1F_Room1_Text_ImAGlobalPoliceAgent::
#if GERMAN
	.string "Pst!\n"
	.string "Ich bin ein Geheimagent!\p"
	.string "Ich verfolge das Team Rocket!\n"
	.string "Pst!$"
#else
	.string "Ssh…!\n"
	.string "I'm a GLOBAL POLICE agent.\p"
	.string "I'm on the trail of TEAM ROCKET.\n"
	.string "They're up to nothing good!$"
#endif

