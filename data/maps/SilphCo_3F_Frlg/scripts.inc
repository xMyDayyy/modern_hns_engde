SilphCo_3F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_3F_OnLoad
	.byte 0

SilphCo_3F_OnLoad::
	call_if_unset FLAG_SILPH_3F_DOOR_1, EventScript_Close3FDoor1
	call_if_unset FLAG_SILPH_3F_DOOR_2, EventScript_Close3FDoor2
	end

SilphCo_3F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_3F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_3F_Text_WhatAmIToDo
	release
	end

SilphCo_3F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_3F_Text_YouAndYourMonsSavedUs
	release
	end

SilphCo_3F_EventScript_FloorSign::
	msgbox SilphCo_3F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_3F_EventScript_Jose::
	trainerbattle_single TRAINER_SCIENTIST_JOSE, SilphCo_3F_Text_JoseIntro, SilphCo_3F_Text_JoseDefeat
	msgbox SilphCo_3F_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_3F_EventScript_Grunt::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_25, SilphCo_3F_Text_GruntIntro, SilphCo_3F_Text_GruntDefeat
	msgbox SilphCo_3F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_3F_Text_WhatAmIToDo::
#if GERMAN
	.string "Ich arbeite für die Silph Co.!\n"
	.string "Was soll ich bloß machen?$"
#else
	.string "I work for SILPH CO.\n"
	.string "What am I to do?$"
#endif

SilphCo_3F_Text_YouAndYourMonsSavedUs::
#if GERMAN
	.string "{PLAYER}! Du hast uns mit Hilfe\n"
	.string "deiner Pokémon gerettet!$"
#else
	.string "{PLAYER}!\n"
	.string "You and your POKéMON saved us!$"
#endif

SilphCo_3F_Text_GruntIntro::
#if GERMAN
	.string "Hör endlich auf, uns zu nerven!$"
#else
	.string "Quit messing with us, kid!$"
#endif

SilphCo_3F_Text_GruntDefeat::
#if GERMAN
	.string "Ich gebe auf!$"
#else
	.string "I give up!$"
#endif

SilphCo_3F_Text_GruntPostBattle::
#if GERMAN
	.string "Ein Tipp? Du brauchst einen\n"
	.string "Türöffner!$"
#else
	.string "A hint? You can open doors with\n"
	.string "a CARD KEY!$"
#endif

SilphCo_3F_Text_JoseIntro::
#if GERMAN
	.string "Ich arbeite für das Team Rocket,\n"
	.string "die Silph Co. zahlt zu wenig!!!$"
#else
	.string "I support TEAM ROCKET more than\n"
	.string "I support SILPH CO.!$"
#endif

SilphCo_3F_Text_JoseDefeat::
#if GERMAN
	.string "Du hast mich erwischt!$"
#else
	.string "You really got me!$"
#endif

SilphCo_3F_Text_JosePostBattle::
#if GERMAN
	.string "Mist...\p"
	.string "Das Team Rocket hätte mich für\n"
	.string "meine Hilfe die Pokémon studieren\l"
	.string "lassen!$"
#else
	.string "Humph…\p"
	.string "TEAM ROCKET said that if I helped\n"
	.string "them, they'd let me study POKéMON.$"
#endif

SilphCo_3F_Text_FloorSign::
#if GERMAN
	.string "Silph Co. Hauptsitz\n"
	.string "2 Og$"
#else
	.string "SILPH CO. HEAD OFFICE\n"
	.string "3F$"
#endif

