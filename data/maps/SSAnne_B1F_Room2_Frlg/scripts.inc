SSAnne_B1F_Room2_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room2_EventScript_Huey::
	trainerbattle_single TRAINER_SAILOR_HUEY, SSAnne_B1F_Room2_Text_HueyIntro, SSAnne_B1F_Room2_Text_HueyDefeat
	msgbox SSAnne_B1F_Room2_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room2_Text_HueyIntro::
#if GERMAN
	.string "Auch Seeleute besitzen Pokémon!$"
#else
	.string "Even us sailors have POKéMON, too!$"
#endif

SSAnne_B1F_Room2_Text_HueyDefeat::
#if GERMAN
	.string "Das war eine reife Leistung!$"
#else
	.string "Okay, you're not bad.$"
#endif

SSAnne_B1F_Room2_Text_HueyPostBattle::
#if GERMAN
	.string "Seeleute fangen ihre Pokémon auf\n"
	.string "hoher See!$"
#else
	.string "We caught all our POKéMON while\n"
	.string "we were out at sea.$"
#endif

