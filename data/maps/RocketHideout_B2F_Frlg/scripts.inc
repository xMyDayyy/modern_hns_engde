RocketHideout_B2F_Frlg_MapScripts::
	.byte 0

RocketHideout_B2F_EventScript_Grunt::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_13, RocketHideout_B2F_Text_GruntIntro, RocketHideout_B2F_Text_GruntDefeat
	msgbox RocketHideout_B2F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B2F_Text_GruntIntro::
#if GERMAN
	.string "Der Boss sagt, das {COLOR RED}Silph Scope{COLOR DARK_GRAY}\n"
	.string "macht Geister sichtbar!$"
#else
	.string "BOSS said you can see ghosts with\n"
	.string "the SILPH SCOPE.$"
#endif

RocketHideout_B2F_Text_GruntDefeat::
#if GERMAN
	.string "Stopp!\n"
	.string "Ich ergebe mich!$"
#else
	.string "I surrender!$"
#endif

RocketHideout_B2F_Text_GruntPostBattle::
#if GERMAN
	.string "Das Team Rocket-hauptquartier hat\n"
	.string "vier Untergeschosse.\p"
	.string "Du findest den Boss niemals!!!$"
#else
	.string "The TEAM ROCKET HQ has four\n"
	.string "underground floors.\p"
	.string "Think you can reach the BOSS?$"
#endif

