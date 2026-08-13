VictoryRoad_2F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_2F_OnLoad
	.byte 0

VictoryRoad_2F_OnLoad::
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_SetRockBarrier1
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_SetRockBarrier2
	end

VictoryRoad_2F_EventScript_SetRockBarrier1::
	setmetatile 13, 10, METATILE_Cave_RockBarrier_Top, 1
	setmetatile 13, 11, METATILE_Cave_RockBarrier_Bottom, 1
	return

VictoryRoad_2F_EventScript_SetRockBarrier2::
	setmetatile 33, 16, METATILE_Cave_RockBarrier_Top, 1
	setmetatile 33, 17, METATILE_Cave_RockBarrier_Bottom, 1
	return

VictoryRoad_2F_EventScript_FloorSwitch1::
	lockall
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed
	setmetatile 13, 10, METATILE_Cave_Floor_Ledge_Top, 0
	setmetatile 13, 11, METATILE_Cave_Floor_Ledge_Bottom, 0
	playse SE_ICE_BREAK
	special DrawWholeMapView
	waitse
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER1
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
	releaseall
	end

VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed::
	releaseall
	end

VictoryRoad_2F_EventScript_FloorSwitch2::
	lockall
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed
	setmetatile 33, 16, METATILE_Cave_Floor_Ledge_Top, 0
	setmetatile 33, 17, METATILE_Cave_Floor_Ledge_Bottom, 0
	playse SE_ICE_BREAK
	special DrawWholeMapView
	waitse
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER2
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
	releaseall
	end

VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed::
	releaseall
	end

VictoryRoad_2F_EventScript_Dawson::
	trainerbattle_single TRAINER_POKEMANIAC_DAWSON, VictoryRoad_2F_Text_DawsonIntro, VictoryRoad_2F_Text_DawsonDefeat
	msgbox VictoryRoad_2F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_EventScript_Daisuke::
	trainerbattle_single TRAINER_BLACK_BELT_DAISUKE, VictoryRoad_2F_Text_DaisukeIntro, VictoryRoad_2F_Text_DaisukeDefeat
	msgbox VictoryRoad_2F_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_EventScript_Nelson::
	trainerbattle_single TRAINER_JUGGLER_NELSON, VictoryRoad_2F_Text_NelsonIntro, VictoryRoad_2F_Text_NelsonDefeat
	msgbox VictoryRoad_2F_Text_NelsonPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_EventScript_Gregory::
	trainerbattle_single TRAINER_JUGGLER_GREGORY, VictoryRoad_2F_Text_GregoryIntro, VictoryRoad_2F_Text_GregoryDefeat
	msgbox VictoryRoad_2F_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_EventScript_Vincent::
	trainerbattle_single TRAINER_TAMER_VINCENT, VictoryRoad_2F_Text_VincentIntro, VictoryRoad_2F_Text_VincentDefeat
	msgbox VictoryRoad_2F_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_Text_DawsonIntro::
#if GERMAN
	.string "Wenn du an mir vorbeikommst, kannst\n"
	.string "du zu den Top Vier gehen!$"
#else
	.string "If you can get through here,\n"
	.string "you can go meet the ELITE FOUR.$"
#endif

VictoryRoad_2F_Text_DawsonDefeat::
#if GERMAN
	.string "Nein!\n"
	.string "Unglaublich!$"
#else
	.string "No!\n"
	.string "Unbelievable!$"
#endif

VictoryRoad_2F_Text_DawsonPostBattle::
#if GERMAN
	.string "Und wenn schon... dafür übersteigt mein\n"
	.string "Wissen über Pokémon deines bei weitem!$"
#else
	.string "I can beat you when it comes to\n"
	.string "knowledge about POKéMON!$"
#endif

VictoryRoad_2F_Text_DaisukeIntro::
#if GERMAN
	.string "Die Siegesstrasse stellt eine Art\n"
	.string "Abschlussprüfung für Trainer dar!$"
#else
	.string "This here is VICTORY ROAD.\n"
	.string "It's the final test for TRAINERS!$"
#endif

VictoryRoad_2F_Text_DaisukeDefeat::
#if GERMAN
	.string "Ahh!$"
#else
	.string "Atcho!$"
#endif

VictoryRoad_2F_Text_DaisukePostBattle::
#if GERMAN
	.string "Wenn du nicht vorankommst, versuche,\n"
	.string "die Felsen zu verschieben!$"
#else
	.string "If you get stuck, try moving some\n"
	.string "boulders around.$"
#endif

VictoryRoad_2F_Text_NelsonIntro::
#if GERMAN
	.string "Du möchtest also die Top Vier\n"
	.string "herausfordern?$"
#else
	.string "Ah, so you wish to challenge the\n"
	.string "ELITE FOUR?$"
#endif

VictoryRoad_2F_Text_NelsonDefeat::
#if GERMAN
	.string "Voll erwischt!$"
#else
	.string "You got me!$"
#endif

VictoryRoad_2F_Text_NelsonPostBattle::
#if GERMAN
	.string "{RIVAL} ist hier auch\n"
	.string "durchgekommen.$"
#else
	.string "{RIVAL} also came through here.$"
#endif

VictoryRoad_2F_Text_VincentIntro::
#if GERMAN
	.string "Komm nur her!\n"
	.string "Ich werde dich besiegen!$"
#else
	.string "Come on!\n"
	.string "I'll whip you!$"
#endif

VictoryRoad_2F_Text_VincentDefeat::
#if GERMAN
	.string "Auweia!\n"
	.string "Ich bin besiegt!$"
#else
	.string "I got whipped!$"
#endif

VictoryRoad_2F_Text_VincentPostBattle::
#if GERMAN
	.string "Du beschreitest die Siegesstrasse\n"
	.string "nicht ohne Grund!$"
#else
	.string "You earned the right to be on\n"
	.string "VICTORY ROAD…$"
#endif

VictoryRoad_2F_Text_GregoryIntro::
#if GERMAN
	.string "Die Siegesstrasse ist sehr schwer\n"
	.string "zu meistern!$"
#else
	.string "Is VICTORY ROAD too tough?$"
#endif

VictoryRoad_2F_Text_GregoryDefeat::
#if GERMAN
	.string "Gut gemacht!$"
#else
	.string "Well done!$"
#endif

VictoryRoad_2F_Text_GregoryPostBattle::
#if GERMAN
	.string "Schon viele Trainer haben hier\n"
	.string "aufgegeben!$"
#else
	.string "Many TRAINERS give up their\n"
	.string "challenge here and go home.$"
#endif

@ Unused, old text for Moltres
VictoryRoad_2F_Text_Gyaoo::
	.string "ギヤーオ！$"

