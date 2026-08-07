SSAnne_1F_Room5_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room5_EventScript_Arthur::
	trainerbattle_single TRAINER_GENTLEMAN_ARTHUR, SSAnne_1F_Room5_Text_ArthurIntro, SSAnne_1F_Room5_Text_ArthurDefeat
	msgbox SSAnne_1F_Room5_Text_ArthurPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_1F_Room5_Text_ArthurIntro::
#if GERMAN
	.string "Du Rotznase!\n"
	.string "Was fällt dir ein?$"
#else
	.string "You insolent pup!\n"
	.string "How dare you barge in!$"
#endif

SSAnne_1F_Room5_Text_ArthurDefeat::
#if GERMAN
	.string "Mist!\n"
	.string "Du bist ganz schön gut!$"
#else
	.string "Humph! You rude child!\n"
	.string "You have no sense of courtesy!$"
#endif

SSAnne_1F_Room5_Text_ArthurPostBattle::
#if GERMAN
	.string "Ich will meine Ruhe haben!\n"
	.string "Verschwinde!$"
#else
	.string "I wish to be left alone!\n"
	.string "Get out!$"
#endif

