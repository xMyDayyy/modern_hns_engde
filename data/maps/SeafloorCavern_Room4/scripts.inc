SeafloorCavern_Room4_MapScripts::
	.byte 0

SeafloorCavern_Room4_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, SeafloorCavern_Room4_Text_Grunt3Intro, SeafloorCavern_Room4_Text_Grunt3Defeat
	msgbox SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room4_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room4_Text_Grunt3Intro:
#if GERMAN
	.string "Wer bist du?\n"
	.string "Woher kommst du?$"
#else
	.string "Who are you?\n"
	.string "Where did you come in from?$"
#endif

SeafloorCavern_Room4_Text_Grunt3Defeat:
#if GERMAN
	.string "Verloren…$"
#else
	.string "Lost it…$"
#endif

SeafloorCavern_Room4_Text_Grunt3PostBattle:
#if GERMAN
	.string "Ich finde den Ausgang nicht mehr!\p"
	.string "Ich bin nicht verzweifelt. Denk das\n"
	.string "bloß nicht!$"
#else
	.string "I can't find the way out!\p"
	.string "I'm not afraid. Don't get me wrong!$"
#endif

SeafloorCavern_Room4_Text_Grunt4Intro:
#if GERMAN
	.string "Wer bist du?\n"
	.string "Was meinst du, was du da machst?$"
#else
	.string "Who are you?\n"
	.string "Where do you think you're going?$"
#endif

SeafloorCavern_Room4_Text_Grunt4Defeat:
#if GERMAN
	.string "Ich konnte nicht gewinnen!$"
#else
	.string "I failed to win!$"
#endif

SeafloorCavern_Room4_Text_Grunt4PostBattle:
#if GERMAN
	.string "Mein Partner hat die Karte im U-boot\n"
	.string "liegen gelassen.\p"
	.string "Wie kann man nur so nutzlos sein?$"
#else
	.string "My partner forgot the map in that\n"
	.string "submarine!\p"
	.string "How's that for being useless?$"
#endif

