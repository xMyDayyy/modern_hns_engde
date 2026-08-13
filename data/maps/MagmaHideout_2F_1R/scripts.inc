MagmaHideout_2F_1R_MapScripts::
	.byte 0

MagmaHideout_2F_1R_EventScript_Grunt14::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, MagmaHideout_2F_1R_Text_Grunt14Intro, MagmaHideout_2F_1R_Text_Grunt14Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt14PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, MagmaHideout_2F_1R_Text_Grunt3Intro, MagmaHideout_2F_1R_Text_Grunt3Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, MagmaHideout_2F_1R_Text_Grunt4Intro, MagmaHideout_2F_1R_Text_Grunt4Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_5, MagmaHideout_2F_1R_Text_Grunt5Intro, MagmaHideout_2F_1R_Text_Grunt5Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_Text_Grunt14Intro:
#if GERMAN
	.string "Was, wie, wer?\p"
	.string "Nur Mitglieder von Team Magma dürfen\n"
	.string "hier sein.\p"
	.string "Aber du hast keine Uniform von Team\n"
	.string "Magma an…\p"
	.string "Das erregt Verdacht!\n"
	.string "Kämpf mit mir!$"
#else
	.string "What, what, what?\p"
	.string "Only TEAM MAGMA members are supposed\n"
	.string "to be in here!\p"
	.string "But you're not dressed in TEAM MAGMA's\n"
	.string "uniform…\p"
	.string "You rouse my suspicion!\n"
	.string "Battle with me!$"
#endif

MagmaHideout_2F_1R_Text_Grunt14Defeat:
#if GERMAN
	.string "Aiyiyi…\n"
	.string "Mein Stolz als Mitglied von Team Magma…$"
#else
	.string "Aiyiyi…\n"
	.string "My pride as a TEAM MAGMA member…$"
#endif

MagmaHideout_2F_1R_Text_Grunt14PostBattle:
#if GERMAN
	.string "Wenn du an Schüttelfrost leidest,\n"
	.string "solltest du Team Magma beitreten.$"
#else
	.string "If you suffer from chills, you should\n"
	.string "join TEAM MAGMA.$"
#endif

MagmaHideout_2F_1R_Text_Grunt3Intro:
#if GERMAN
	.string "Stopp!\p"
	.string "Du erwartest doch nicht ernsthaft,\n"
	.string "dass ich dich einfach so vorbeigehen\l"
	.string "lasse?!?$"
#else
	.string "Hold it right there!\p"
	.string "You don't really expect me to keep\n"
	.string "my trap shut and let you waltz by me?$"
#endif

MagmaHideout_2F_1R_Text_Grunt3Defeat:
#if GERMAN
	.string "Ooh wow!\n"
	.string "Ich gebe mich geschlagen!$"
#else
	.string "Ooh wow!\n"
	.string "I concede!$"
#endif

MagmaHideout_2F_1R_Text_Grunt3PostBattle:
#if GERMAN
	.string "Es wäre vielleicht doch besser\n"
	.string "gewesen, dich nicht herauszufordern…$"
#else
	.string "Maybe it would've been better if I did\n"
	.string "just let you go unchallenged…$"
#endif

MagmaHideout_2F_1R_Text_Grunt4Intro:
#if GERMAN
	.string "Ahah! Ein Eindringling!$"
#else
	.string "Ahah!\n"
	.string "An intruder!$"
#endif

MagmaHideout_2F_1R_Text_Grunt4Defeat:
#if GERMAN
	.string "Graah!$"
#else
	.string "Graaah!$"
#endif

MagmaHideout_2F_1R_Text_Grunt4PostBattle:
#if GERMAN
	.string "Ich habe doch schon verloren!\p"
	.string "Musst du unbedingt im Kreis\n"
	.string "herumlaufen?$"
#else
	.string "I've already lost.\p"
	.string "Do I really need to keep running\n"
	.string "around in a circle?$"
#endif

MagmaHideout_2F_1R_Text_Grunt5Intro:
#if GERMAN
	.string "Oh oh!\n"
	.string "Ein Eindringling!$"
#else
	.string "Oh, oh!\n"
	.string "An intruder!$"
#endif

MagmaHideout_2F_1R_Text_Grunt5Defeat:
#if GERMAN
	.string "Murmel…$"
#else
	.string "Mutter…$"
#endif

MagmaHideout_2F_1R_Text_Grunt5PostBattle:
#if GERMAN
	.string "Eigentlich bin ich kein Kampf-Experte…$"
#else
	.string "Actually, I'm no expert at battling…$"
#endif

