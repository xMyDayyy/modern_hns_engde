SSAnne_B1F_Room4_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room4_EventScript_Leonard::
	trainerbattle_single TRAINER_SAILOR_LEONARD, SSAnne_B1F_Room4_Text_LeonardIntro, SSAnne_B1F_Room4_Text_LeonardDefeat
	msgbox SSAnne_B1F_Room4_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room4_EventScript_Duncan::
	trainerbattle_single TRAINER_SAILOR_DUNCAN, SSAnne_B1F_Room4_Text_DuncanIntro, SSAnne_B1F_Room4_Text_DuncanDefeat
	msgbox SSAnne_B1F_Room4_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room4_Text_LeonardIntro::
#if GERMAN
	.string "Du weißt, wir Seeleute lieben es zu\n"
	.string "kämpfen!$"
#else
	.string "You know what they say about\n"
	.string "sailors and battling!$"
#endif

SSAnne_B1F_Room4_Text_LeonardDefeat::
#if GERMAN
	.string "Ja!\n"
	.string "Was für ein Kampf!!!$"
#else
	.string "Right!\n"
	.string "Good battle, mate!$"
#endif

SSAnne_B1F_Room4_Text_LeonardPostBattle::
#if GERMAN
	.string "Willst du zur See fahren?$"
#else
	.string "Hahaha!\n"
	.string "Want to be a sailor, mate?$"
#endif

SSAnne_B1F_Room4_Text_DuncanIntro::
#if GERMAN
	.string "Mein Ruf als Seebär steht auf dem\n"
	.string "Spiel!!!$"
#else
	.string "Come on, then!\n"
	.string "My sailor's pride is at stake!$"
#endif

SSAnne_B1F_Room4_Text_DuncanDefeat::
#if GERMAN
	.string "Kiel unter!\n"
	.string "Das war es für mich!$"
#else
	.string "Your spirit sank me!$"
#endif

SSAnne_B1F_Room4_Text_DuncanPostBattle::
#if GERMAN
	.string "Hast du schon den Profi-angler in\n"
	.string "{COLOR RED}Orania City{COLOR DARK_GRAY} besucht?$"
#else
	.string "Did you see the FISHING GURU in\n"
	.string "VERMILION CITY?$"
#endif

