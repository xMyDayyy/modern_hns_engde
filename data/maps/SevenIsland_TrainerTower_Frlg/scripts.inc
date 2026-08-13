SevenIsland_TrainerTower_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TrainerTower_OnTransition
	.byte 0

SevenIsland_TrainerTower_OnTransition::
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
	end

SevenIsland_TrainerTower_EventScript_TrainerTowerSign::
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerSign, MSGBOX_SIGN
	end

SevenIsland_TrainerTower_EventScript_TrainerTowerAheadSign::
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerAhead, MSGBOX_SIGN
	end

SevenIsland_TrainerTower_Text_DarioIntro::
#if GERMAN
	.string "Ich spürte, dass du kommst!$"
#else
	.string "I sensed your approach.$"
#endif

SevenIsland_TrainerTower_Text_DarioDefeat::
#if GERMAN
	.string "Gib auf…$"
#else
	.string "Give up…$"
#endif

SevenIsland_TrainerTower_Text_DarioPostBattle::
#if GERMAN
	.string "Ich sage dir voraus, dass du viele\n"
	.string "andere Leute triffst.\p"
	.string "Ich sehe, dass du durch eine\n"
	.string "merkwürdige Kraft mit ihnen verbunden\l"
	.string "bist.$"
#else
	.string "In your future, I sense that you\n"
	.string "will meet many others.\p"
	.string "I think you will be linked to each\n"
	.string "other by a strange power.$"
#endif

SevenIsland_TrainerTower_Text_RodetteIntro::
#if GERMAN
	.string "Irgendwo auf dieser Insel schlafen\n"
	.string "besondere Pokémon.$"
#else
	.string "Somewhere on this island, peculiar\n"
	.string "POKéMON are sleeping.$"
#endif

SevenIsland_TrainerTower_Text_RodetteDefeat::
#if GERMAN
	.string "Was für ein Trainer!$"
#else
	.string "What an amazing TRAINER!$"
#endif

SevenIsland_TrainerTower_Text_RodettePostBattle::
#if GERMAN
	.string "Irgendwo auf dieser Insel schlafen\n"
	.string "besondere Pokémon.\p"
	.string "Kann es sein, dass sie auf dich\n"
	.string "warten?$"
#else
	.string "Somewhere on this island, peculiar\n"
	.string "POKéMON are sleeping.\p"
	.string "Could it be that they're waiting\n"
	.string "for you?$"
#endif

SevenIsland_TrainerTower_Text_TrainerTowerSign::
#if GERMAN
	.string "Eingang des Trainerturms\n"
	.string "Fordere andere Trainer heraus!$"
#else
	.string "TRAINER TOWER ENTRANCE\n"
	.string "Rise to the Challenge, TRAINERS!$"
#endif

SevenIsland_TrainerTower_Text_TrainerTowerAhead::
#if GERMAN
	.string "Trainerturm Voraus$"
#else
	.string "TRAINER TOWER AHEAD$"
#endif

