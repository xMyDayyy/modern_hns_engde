SilphCo_8F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_8F_OnLoad
	.byte 0

SilphCo_8F_OnLoad::
	call_if_unset FLAG_SILPH_8F_DOOR, EventScript_Close8FDoor
	end

SilphCo_8F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_8F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_8F_Text_WonderIfSilphIsFinished
	release
	end

SilphCo_8F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_8F_Text_ThanksForSavingUs
	release
	end

SilphCo_8F_EventScript_FloorSign::
	msgbox SilphCo_8F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_8F_EventScript_Parker::
	trainerbattle_single TRAINER_SCIENTIST_PARKER, SilphCo_8F_Text_ParkerIntro, SilphCo_8F_Text_ParkerDefeat
	msgbox SilphCo_8F_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_8F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_32, SilphCo_8F_Text_Grunt1Intro, SilphCo_8F_Text_Grunt1Defeat
	msgbox SilphCo_8F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_8F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_36, SilphCo_8F_Text_Grunt2Intro, SilphCo_8F_Text_Grunt2Defeat
	msgbox SilphCo_8F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_8F_Text_WonderIfSilphIsFinished::
#if GERMAN
	.string "Ob die Silph Co. schon erledigt\n"
	.string "ist?$"
#else
	.string "I wonder if SILPH is finished…$"
#endif

SilphCo_8F_Text_ThanksForSavingUs::
#if GERMAN
	.string "Vielen Dank für unsere Rettung!$"
#else
	.string "Thanks for saving us!$"
#endif

SilphCo_8F_Text_Grunt1Intro::
#if GERMAN
	.string "Endstation!\n"
	.string "Bis hierher und nicht weiter!$"
#else
	.string "That's as far as you'll go!$"
#endif

SilphCo_8F_Text_Grunt1Defeat::
#if GERMAN
	.string "Mist, der Mut hat mich verlassen!$"
#else
	.string "Not enough grit!$"
#endif

SilphCo_8F_Text_Grunt1PostBattle::
#if GERMAN
	.string "Hau lieber ab, sonst rufe ich\n"
	.string "Verstärkung!$"
#else
	.string "If you don't turn back…\n"
	.string "I'll call for backup!$"
#endif

SilphCo_8F_Text_ParkerIntro::
#if GERMAN
	.string "Du bereitest uns nichts als Ärger!$"
#else
	.string "You're causing us problems!$"
#endif

SilphCo_8F_Text_ParkerDefeat::
#if GERMAN
	.string "Huch!\n"
	.string "Verloren?$"
#else
	.string "Huh?\n"
	.string "I lost?$"
#endif

SilphCo_8F_Text_ParkerPostBattle::
#if GERMAN
	.string "Das Silph Co.-gebäude ist ein\n"
	.string "wahres Labyrinth, nicht wahr?$"
#else
	.string "So, what do you think of SILPH\n"
	.string "BUILDING's maze?$"
#endif

SilphCo_8F_Text_Grunt2Intro::
#if GERMAN
	.string "Ich bin einer der vier berüchtigten\n"
	.string "Rocket-brüder!$"
#else
	.string "I am one of the four ROCKET\n"
	.string "BROTHERS!$"
#endif

SilphCo_8F_Text_Grunt2Defeat::
#if GERMAN
	.string "Ups!\n"
	.string "Brüder, ich habe versagt!$"
#else
	.string "Whoo!\n"
	.string "Oh, Brothers!$"
#endif

SilphCo_8F_Text_Grunt2PostBattle::
#if GERMAN
	.string "Dann werden sich meine Brüder um\n"
	.string "dich kümmern!$"
#else
	.string "I'll leave you up to my brothers.$"
#endif

SilphCo_8F_Text_FloorSign::
#if GERMAN
	.string "Silph Co. Hauptsitz\n"
	.string "7 Og$"
#else
	.string "SILPH CO. HEAD OFFICE\n"
	.string "8F$"
#endif

SilphCo_8F_Text_ToRocketBossMonsAreTools::
#if GERMAN
	.string "Der Boss von Team Rocket ist\n"
	.string "unheimlich grausam!\p"
	.string "Für ihn sind Pokémon schlicht\n"
	.string "Mittel zum Zweck.\p"
	.string "Was wird geschehen, wenn dieser\n"
	.string "Tyrann unsere Firma übernimmt…$"
#else
	.string "TEAM ROCKET's BOSS is terribly\n"
	.string "cruel!\p"
	.string "To him, POKéMON are just tools to\n"
	.string "be used.\p"
	.string "What will happen if that tyrant\n"
	.string "takes over our company…$"
#endif
