VictoryRoad_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_1F_Frlg_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_Frlg_OnTransition
	.byte 0

VictoryRoad_1F_Frlg_OnLoad::
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_1F, 100, VictoryRoad_1F_EventScript_SetRockBarrier
	end

VictoryRoad_1F_EventScript_SetRockBarrier::
	setmetatile 12, 14, METATILE_Cave_RockBarrier_Top, 1
	setmetatile 12, 15, METATILE_Cave_RockBarrier_Bottom, 1
	return

VictoryRoad_1F_Frlg_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_VICTORY_ROAD_1F
	end

VictoryRoad_1F_EventScript_FloorSwitch::
	lockall
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_1F, 100, VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed
	setmetatile 12, 14, METATILE_Cave_Floor_Ledge_Top, 0
	setmetatile 12, 15, METATILE_Cave_Floor_Ledge_Bottom, 0
	playse SE_ICE_BREAK
	special DrawWholeMapView
	waitse
	copyobjectxytoperm LOCALID_VICTORY_ROAD_1F_BOULDER
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 100
	releaseall
	end

VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed::
	releaseall
	end

VictoryRoad_1F_EventScript_Naomi::
	trainerbattle_single TRAINER_COOLTRAINER_NAOMI, VictoryRoad_1F_Text_NaomiIntro, VictoryRoad_1F_Text_NaomiDefeat
	msgbox VictoryRoad_1F_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Rolando::
	trainerbattle_single TRAINER_COOLTRAINER_ROLANDO, VictoryRoad_1F_Text_RolandoIntro, VictoryRoad_1F_Text_RolandoDefeat
	msgbox VictoryRoad_1F_Text_RolandoPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_Text_NaomiIntro::
#if GERMAN
	.string "Glaubst du etwa, du kannst es mit\n"
	.string "mir aufnehmen?$"
#else
	.string "I wonder if you are good enough\n"
	.string "for me?$"
#endif

VictoryRoad_1F_Text_NaomiDefeat::
#if GERMAN
	.string "Ich bin raus!$"
#else
	.string "I lost out…$"
#endif

VictoryRoad_1F_Text_NaomiPostBattle::
#if GERMAN
	.string "Dabei wollte ich nie verlieren, schon gar\n"
	.string "nicht gegen ein kleines Kind…$"
#else
	.string "I never wanted to lose to anybody,\n"
	.string "especially to a younger kid…$"
#endif

VictoryRoad_1F_Text_RolandoIntro::
#if GERMAN
	.string "Ich glaube, du bist gut! Gut genug, um\n"
	.string "mich zu schlagen?$"
#else
	.string "I can see you're good.\n"
	.string "Let me see exactly how good!$"
#endif

VictoryRoad_1F_Text_RolandoDefeat::
#if GERMAN
	.string "Immerhin hatte ich eine Chance!$"
#else
	.string "I had a chance…$"
#endif

VictoryRoad_1F_Text_RolandoPostBattle::
#if GERMAN
	.string "Ich muss gestehen, du bist besser!$"
#else
	.string "Tch!\n"
	.string "I concede, you are better than I!$"
#endif

