SilphCo_4F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_4F_OnLoad
	.byte 0

SilphCo_4F_OnLoad::
	call_if_unset FLAG_SILPH_4F_DOOR_1, EventScript_Close4FDoor1
	call_if_unset FLAG_SILPH_4F_DOOR_2, EventScript_Close4FDoor2
	end

SilphCo_4F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_4F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_4F_Text_CantYouSeeImHiding
	release
	end

SilphCo_4F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_4F_Text_TeamRocketIsGone
	release
	end

SilphCo_4F_EventScript_FloorSign::
	msgbox SilphCo_4F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_4F_EventScript_Rodney::
	trainerbattle_single TRAINER_SCIENTIST_RODNEY, SilphCo_4F_Text_RodneyIntro, SilphCo_4F_Text_RodneyDefeat
	msgbox SilphCo_4F_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_4F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_26, SilphCo_4F_Text_Grunt1Intro, SilphCo_4F_Text_Grunt1Defeat
	msgbox SilphCo_4F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_4F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_27, SilphCo_4F_Text_Grunt2Intro, SilphCo_4F_Text_Grunt2Defeat
	msgbox SilphCo_4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_4F_Text_CantYouSeeImHiding::
#if GERMAN
	.string "Pst! Siehst du nicht, dass\n"
	.string "ich mich verstecke?$"
#else
	.string "Sssh!\n"
	.string "Can't you see I'm hiding?$"
#endif

SilphCo_4F_Text_TeamRocketIsGone::
#if GERMAN
	.string "Das Team Rocket ist verschwunden?$"
#else
	.string "Huh?\n"
	.string "TEAM ROCKET is gone?$"
#endif

SilphCo_4F_Text_Grunt1Intro::
#if GERMAN
	.string "Das Team Rocket hat die Kontrolle\n"
	.string "über Silph Co. übernommen!!!$"
#else
	.string "TEAM ROCKET has taken control\n"
	.string "of SILPH CO.!$"
#endif

SilphCo_4F_Text_Grunt1Defeat::
	.string "Arrgh!$"

SilphCo_4F_Text_Grunt1PostBattle::
#if GERMAN
	.string "Auf diesen Moment hat der Boss\n"
	.string "sehr lange gewartet!$"
#else
	.string "Fwahahaha!\n"
	.string "My BOSS has been after this place!$"
#endif

SilphCo_4F_Text_RodneyIntro::
#if GERMAN
	.string "Mein Pokémon erwartet dich!!!$"
#else
	.string "My POKéMON is my loyal servant.$"
#endif

SilphCo_4F_Text_RodneyDefeat::
#if GERMAN
	.string "Du schwächliches Pokémon! Mist!$"
#else
	.string "Darn!\n"
	.string "You weak POKéMON!$"
#endif

SilphCo_4F_Text_RodneyPostBattle::
#if GERMAN
	.string "Die Türen sind elektronisch\n"
	.string "verriegelt! Ohne Türöffner kommt\l"
	.string "man nicht durch!$"
#else
	.string "The doors are electronically\n"
	.string "locked.\p"
	.string "It takes a CARD KEY to open the\n"
	.string "doors here.$"
#endif

SilphCo_4F_Text_Grunt2Intro::
#if GERMAN
	.string "Eindringling gesichtet!$"
#else
	.string "Intruder spotted!$"
#endif

SilphCo_4F_Text_Grunt2Defeat::
#if GERMAN
	.string "Wer oder was bist du?$"
#else
	.string "Who are you?$"
#endif

SilphCo_4F_Text_Grunt2PostBattle::
#if GERMAN
	.string "Ich muss den Boss im 10.\n"
	.string "Stock warnen!$"
#else
	.string "I better tell the BOSS on 11F!$"
#endif

SilphCo_4F_Text_FloorSign::
#if GERMAN
	.string "Silph Co. Hauptsitz\n"
	.string "3 Og$"
#else
	.string "SILPH CO. HEAD OFFICE\n"
	.string "4F$"
#endif

