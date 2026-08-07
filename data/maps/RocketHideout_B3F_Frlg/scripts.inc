RocketHideout_B3F_Frlg_MapScripts::
	.byte 0

RocketHideout_B3F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_14, RocketHideout_B3F_Text_Grunt1Intro, RocketHideout_B3F_Text_Grunt1Defeat
	msgbox RocketHideout_B3F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B3F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_15, RocketHideout_B3F_Text_Grunt2Intro, RocketHideout_B3F_Text_Grunt2Defeat
	msgbox RocketHideout_B3F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B3F_Text_Grunt1Intro::
#if GERMAN
	.string "Halte dich aus Team Rockets\n"
	.string "Angelegenheiten raus!$"
#else
	.string "Stop meddling in TEAM ROCKET's\n"
	.string "affairs or else!$"
#endif

RocketHideout_B3F_Text_Grunt1Defeat::
#if GERMAN
	.string "Uff!\n"
	.string "Ich bin am Boden!$"
#else
	.string "Oof!\n"
	.string "Taken down!$"
#endif

RocketHideout_B3F_Text_Grunt1PostBattle::
#if GERMAN
	.string "Das {COLOR RED}Silph Scope{COLOR DARK_GRAY}? Das Gerät, das\n"
	.string "der Boss geraubt hat?\p"
	.string "Das ist hier irgendwo...$"
#else
	.string "SILPH SCOPE?\n"
	.string "Oh, that machine the BOSS stole.\p"
	.string "It's here somewhere.$"
#endif

RocketHideout_B3F_Text_Grunt2Intro::
#if GERMAN
	.string "Wir hörten schon, dass du im\n"
	.string "Anmarsch bist!$"
#else
	.string "We got word from upstairs that you\n"
	.string "were coming!$"
#endif

RocketHideout_B3F_Text_Grunt2Defeat::
#if GERMAN
	.string "Was?\n"
	.string "Ich hab verloren? Ah!$"
#else
	.string "What?\n"
	.string "I lost? No!$"
#endif

RocketHideout_B3F_Text_Grunt2PostBattle::
#if GERMAN
	.string "Geh ruhig weiter!\p"
	.string "Du benötigst den {COLOR RED}Liftöffner{COLOR DARK_GRAY} und\n"
	.string "der fehlt dir!$"
#else
	.string "Go ahead and go!\p"
	.string "But you can't run the elevator\n"
	.string "without the LIFT KEY.$"
#endif

