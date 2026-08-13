SilphCo_6F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_6F_OnLoad
	.byte 0

SilphCo_6F_OnLoad::
	call_if_unset FLAG_SILPH_6F_DOOR, EventScript_Close6FDoor
	end

SilphCo_6F_EventScript_WorkerM2::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM2RocketsGone
	msgbox SilphCo_6F_Text_TargetedSilphForOurMonProducts
	release
	end

SilphCo_6F_EventScript_WorkerM2RocketsGone::
	msgbox SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder
	release
	end

SilphCo_6F_EventScript_WorkerM3::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM3RocketsGone
	msgbox SilphCo_6F_Text_RocketsTookOverBuilding
	release
	end

SilphCo_6F_EventScript_WorkerM3RocketsGone::
	msgbox SilphCo_6F_Text_BetterGetBackToWork
	release
	end

SilphCo_6F_EventScript_WorkerM1::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM1RocketsGone
	msgbox SilphCo_6F_Text_HelpMePlease
	release
	end

SilphCo_6F_EventScript_WorkerM1RocketsGone::
	msgbox SilphCo_6F_Text_WeGotEngaged
	release
	end

SilphCo_6F_EventScript_WorkerF1::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF1RocketsGone
	msgbox SilphCo_6F_Text_ThatManIsSuchACoward
	release
	end

SilphCo_6F_EventScript_WorkerF1RocketsGone::
	msgbox SilphCo_6F_Text_NeedsMeToLookAfterHim
	release
	end

SilphCo_6F_EventScript_WorkerF2::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF2RocketsGone
	msgbox SilphCo_6F_Text_RocketsTryingToConquerWorld
	release
	end

SilphCo_6F_EventScript_WorkerF2RocketsGone::
	msgbox SilphCo_6F_Text_RocketsRanAwayBecauseOfYou
	release
	end

SilphCo_6F_EventScript_FloorSign::
	msgbox SilphCo_6F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_6F_EventScript_Taylor::
	trainerbattle_single TRAINER_SCIENTIST_TAYLOR, SilphCo_6F_Text_TaylorIntro, SilphCo_6F_Text_TaylorDefeat
	msgbox SilphCo_6F_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_6F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_30, SilphCo_6F_Text_Grunt1Intro, SilphCo_6F_Text_Grunt1Defeat
	msgbox SilphCo_6F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_6F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_31, SilphCo_6F_Text_Grunt2Intro, SilphCo_6F_Text_Grunt2Defeat
	msgbox SilphCo_6F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_6F_Text_RocketsTookOverBuilding::
#if GERMAN
	.string "Das Team Rocket hat die Kontrolle\n"
	.string "über das Gebäude übernommen!$"
#else
	.string "The ROCKETS came and took over\n"
	.string "the building!$"
#endif

SilphCo_6F_Text_BetterGetBackToWork::
#if GERMAN
	.string "O.K., die Arbeit ruft!\n"
	.string "Los geht’s!$"
#else
	.string "Well, better get back to work.$"
#endif

SilphCo_6F_Text_HelpMePlease::
#if GERMAN
	.string "Oje, ojemine!\n"
	.string "Bitte hilf mir!$"
#else
	.string "Oh dear, oh dear.\n"
	.string "Help me, please!$"
#endif

SilphCo_6F_Text_WeGotEngaged::
#if GERMAN
	.string "Wir sind verlobt!$"
#else
	.string "We got engaged.\n"
	.string "Heheh!$"
#endif

SilphCo_6F_Text_ThatManIsSuchACoward::
#if GERMAN
	.string "Schau ihn dir an, den Feigling!$"
#else
	.string "That man next to me…\n"
	.string "He's such a coward!$"
#endif

SilphCo_6F_Text_NeedsMeToLookAfterHim::
#if GERMAN
	.string "Ich glaube, ich werde ihn aus\n"
	.string "Mitleid heiraten!$"
#else
	.string "He's so helpless, he needed\n"
	.string "someone like me to look after him.$"
#endif

SilphCo_6F_Text_RocketsTryingToConquerWorld::
#if GERMAN
	.string "Das Team Rocket benutzt die Pokémon\n"
	.string "bei dem Versuch, die Welt zu erobern!$"
#else
	.string "TEAM ROCKET is trying to conquer\n"
	.string "the world with POKéMON.$"
#endif

SilphCo_6F_Text_RocketsRanAwayBecauseOfYou::
#if GERMAN
	.string "Du hast das Team Rocket in die\n"
	.string "Flucht geschlagen!$"
#else
	.string "TEAM ROCKET ran away, and it's all\n"
	.string "because of you!$"
#endif

SilphCo_6F_Text_TargetedSilphForOurMonProducts::
#if GERMAN
	.string "Sie müssen es wegen unserer\n"
	.string "Pokémon-Produkte auf die Silph Co.\l"
	.string "abgesehen haben!$"
#else
	.string "They must have targeted SILPH for\n"
	.string "our POKéMON products.$"
#endif

SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder::
#if GERMAN
	.string "Wir würden uns sehr freuen, wenn du\n"
	.string "später einmal für die Silph Co. arbeiten\l"
	.string "würdest!$"
#else
	.string "Come work for SILPH when you\n"
	.string "get older.$"
#endif

SilphCo_6F_Text_Grunt1Intro::
#if GERMAN
	.string "Ich bin einer der vier berüchtigten\n"
	.string "Rocket-brüder!$"
#else
	.string "I am one of the four ROCKET\n"
	.string "BROTHERS!$"
#endif

SilphCo_6F_Text_Grunt1Defeat::
#if GERMAN
	.string "Nein!\n"
	.string "Ich bin raus!$"
#else
	.string "Flame out!$"
#endif

SilphCo_6F_Text_Grunt1PostBattle::
#if GERMAN
	.string "Egal!\n"
	.string "Meine Brüder werden mich rächen!$"
#else
	.string "No matter!\n"
	.string "My brothers will avenge me!$"
#endif

SilphCo_6F_Text_TaylorIntro::
#if GERMAN
	.string "Dieser verdammte Präsident!\p"
	.string "Warum will er ausgerechnet mich\n"
	.string "nach Tiksi schicken?$"
#else
	.string "That rotten PRESIDENT!\p"
	.string "Serves him right for shipping me\n"
	.string "off to the TIKSI BRANCH!\p"
	.string "That's why TEAM ROCKET came after\n"
	.string "us, I'm sure of it!$"
#endif

SilphCo_6F_Text_TaylorDefeat::
#if GERMAN
	.string "Mist!$"
#else
	.string "Shoot!$"
#endif

SilphCo_6F_Text_TaylorPostBattle::
#if GERMAN
	.string "Tiksi?\n"
	.string "Das liegt tief im Niemandsland!$"
#else
	.string "TIKSI BRANCH?\n"
	.string "It's in Russian no-man's-land!$"
#endif

SilphCo_6F_Text_Grunt2Intro::
#if GERMAN
	.string "Du wagst es, dich dem Team\n"
	.string "Rocket zu widersetzen?$"
#else
	.string "You dare betray TEAM ROCKET?$"
#endif

SilphCo_6F_Text_Grunt2Defeat::
#if GERMAN
	.string "Du elender Verräter!$"
#else
	.string "You traitor!$"
#endif

SilphCo_6F_Text_Grunt2PostBattle::
#if GERMAN
	.string "Wenn du ehrlich und rechtschaffen\n"
	.string "bist, bekämpfst du das Böse!$"
#else
	.string "If you stand for justice, you\n"
	.string "betray us bad guys!$"
#endif

SilphCo_6F_Text_FloorSign::
#if GERMAN
	.string "Silph Co. Hauptsitz\n"
	.string "5 Og$"
#else
	.string "SILPH CO. HEAD OFFICE\n"
	.string "6F$"
#endif

