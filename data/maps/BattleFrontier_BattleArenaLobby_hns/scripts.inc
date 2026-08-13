BattleFrontier_BattleArenaLobby_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaLobby_OnFrame_hns
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaLobby_OnWarp_hns
	.byte 0

BattleFrontier_BattleArenaLobby_OnWarp_hns:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth_hns
	.2byte 0

BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth_hns::
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattleArenaLobby_OnFrame_hns:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleArenaLobby_EventScript_LostChallenge_hns
	.2byte 0

BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus_hns::
	frontier_getstatus
	end

BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving_hns::
	lockall
	msgbox BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown_hns, MSGBOX_DEFAULT
	closemessage
	arena_set ARENA_DATA_WIN_STREAK, 0
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_hns::
	lockall
	frontier_isbrain
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon_hns
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints_hns

BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon_hns, MSGBOX_DEFAULT
BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints_hns, MSGBOX_DEFAULT
	frontier_givepoints
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
	message BattleFrontier_BattleArenaLobby_Text_RecordAchievement_hns
	waitmessage
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_hns
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_hns2_hns, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_LostChallenge_hns::
	lockall
	message BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave_hns
	waitmessage
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_hns
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_hns2_hns, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_hns::
	frontier_checkairshow
	special LoadPlayerParty
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	arena_save 0
	playse SE_SAVE
	waitse
	call BattleFrontier_EventScript_GetCantRecordBattle
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge_hns
	message BattleFrontier_BattleArenaLobby_Text_RecordLastMatch_hns
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge_hns
	case 0, BattleFrontier_BattleArenaLobby_EventScript_RecordMatch_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge_hns

BattleFrontier_BattleArenaLobby_EventScript_RecordMatch_hns::
	call BattleFrontier_EventScript_SaveBattle
BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge_hns::
	return

BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge_hns::
	lockall
	message BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame_hns
	waitmessage
	arena_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_hns

BattleFrontier_BattleArenaLobby_EventScript_Attendant_hns::
	lock
	faceplayer
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	special SavePlayerParty
	msgbox BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena_hns, MSGBOX_DEFAULT
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_hns::
	message BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge_hns
	waitmessage
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_hns
	case 1, BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge_hns
	case 2, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge_hns

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_hns::
	message BattleFrontier_BattleArenaLobby_Text_WhichLevelMode_hns
	waitmessage
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
	switch VAR_RESULT
	case FRONTIER_LVL_TENT, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge_hns
	frontier_checkineligible
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_hns
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
	msgbox BattleFrontier_BattleArenaLobby_Text_SelectThreeMons_hns, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	callnative RemoveFollowingPokemon
	call BattleFrontier_EventScript_GetLvlMode
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	special ChoosePartyForBattleFrontier
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge_hns
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave_hns, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge_hns
	case YES, BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge_hns

BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge_hns::
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	arena_init
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, TRUE
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	special LoadPlayerParty
	closemessage
	delay 2
	call Common_EventScript_SaveGame
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge_hnsSaveFailed_hns
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_hns::
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	msgbox BattleFrontier_BattleArenaLobby_Text_GuideYouToArena_hns, MSGBOX_DEFAULT
	closemessage
	frontier_get FRONTIER_DATA_LVL_MODE
	call_if_eq VAR_RESULT, FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50_hns
	call_if_eq VAR_RESULT, FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen_hns
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR_HNS, 9, 13
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
	waitstate
	end

BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainChallenge_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_hns

BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_hns::
	switch VAR_RESULT
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_hnsLv50_hns
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_hnsLvOpen_hns

BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_hnsLv50_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50_hns, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge_hns

BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons_hnsLvOpen_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen_hns, MSGBOX_DEFAULT
	call BattleFrontier_ShowCaughtBannedSpecies
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge_hns

BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge_hnsSaveFailed_hns::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge_hns

BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge_hns::
	special LoadPlayerParty
	callnative UpdateFollowingPokemon
BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_hns, MSGBOX_DEFAULT
BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge_hns::
	release
	end

BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50_hns::
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor_hns
	waitmovement 0
	opendoor 2, 2
	waitdooranim
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor_hns
	waitmovement 0
	closedoor 2, 2
	waitdooranim
	return

BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor_hns:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor_hns:
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor_hns:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor_hns:
	walk_up
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen_hns::
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor_hns
	waitmovement 0
	opendoor 11, 2
	waitdooranim
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor_hns
	waitmovement 0
	closedoor 11, 2
	waitdooranim
	return

BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor_hns:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor_hns:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

BattleFrontier_BattleArenaLobby_EventScript_ShowResults_hns::
	lockall
	frontier_results FRONTIER_FACILITY_ARENA
	waitbuttonpress
	special RemoveRecordsWindow
	releaseall
	end

BattleFrontier_BattleArenaLobby_EventScript_Youngster_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack_hns, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_Man_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked_hns, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_Camper_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw_hns, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_Woman_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant_hns, MSGBOX_NPC
	end

BattleFrontier_BattleArenaLobby_EventScript_RulesBoard_hns::
	lockall
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_hns::
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_hns
	waitmessage
	multichoice 17, 2, MULTI_BATTLE_ARENA_RULES, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleArenaLobby_EventScript_BattleRules_hns
	case 1, BattleFrontier_BattleArenaLobby_EventScript_MindRules_hns
	case 2, BattleFrontier_BattleArenaLobby_EventScript_SkillRules_hns
	case 3, BattleFrontier_BattleArenaLobby_EventScript_BodyRules_hns
	case 4, BattleFrontier_BattleArenaLobby_EventScript_ExitRules_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_ExitRules_hns
	end

BattleFrontier_BattleArenaLobby_EventScript_BattleRules_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattleArenaLobby_EventScript_MindRules_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattleArenaLobby_EventScript_SkillRules_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattleArenaLobby_EventScript_BodyRules_hns::
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_hns
	end

BattleFrontier_BattleArenaLobby_EventScript_ExitRules_hns::
	releaseall
	end

BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena_hns:
#if GERMAN
	.string "Hier wird der Kampfgeist der Trainer\n"
	.string "auf die Probe gestellt!\p"
	.string "Willkommen im Kampfring!\p"
	.string "Ich begleite dich beim K.O.-Teamturnier!$"
#else
	.string "Where the battling spirit of TRAINERS\n"
	.string "is put to the test!\p"
	.string "I welcome you to the BATTLE ARENA!\p"
	.string "I am your guide to the Set KO Tourney!$"
#endif

BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge_hns:
#if GERMAN
	.string "Möchtest du dich der Herausforderung\n"
	.string "des Kampfrings stellen?$"
#else
	.string "Now, do you wish to take\n"
	.string "the BATTLE ARENA challenge?$"
#endif

BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_hns:
#if GERMAN
	.string "Wir freuen uns auf deine\n"
	.string "nächste Herausforderung!$"
#else
	.string "We await your challenge on\n"
	.string "another occasion!$"
#endif

BattleFrontier_BattleArenaLobby_Text_ExplainChallenge_hns:
#if GERMAN
	.string "Im Kampfring fechten\n"
	.string "wir K.O.-Teamturniere aus.\p"
	.string "Jeder Teilnehmer nimmt drei Pokémon\n"
	.string "mit in den Wettkampf.\p"
	.string "Die Pokémon müssen in der Reihenfolge\n"
	.string "platziert werden, in der sie kämpfen\p"
	.string "sollen. In dieser Folge kämpfen sie dann\n"
	.string "nacheinander.\p"
	.string "Sobald ein Pokémon in den Kampf\n"
	.string "gerufen wurde, muss es kämpfen, bis der\p"
	.string "Kampf entschieden ist. Sollte ein Kampf\n"
	.string "unentschieden enden, wird der Kampf\p"
	.string "beurteilt und der Sieger bestimmt.\n"
	.string "Möchtest du den Wettkampf unter-\p"
	.string "brechen, speichere bitte dein Spiel.\n"
	.string "Ohne Speichern kannst du den Wett-\p"
	.string "kampf später nicht fortsetzen.\p"
	.string "Besiegst du sieben Trainer in Folge,\n"
	.string "erhältst du Gewinnpunkte.$"
#else
	.string "In the BATTLE ARENA, we undertake\n"
	.string "the Set KO Tourney.\p"
	.string "All participants enter with a team of\n"
	.string "three POKéMON.\p"
	.string "The three POKéMON must be lined up in\n"
	.string "the order in which they are to appear.\p"
	.string "During battle, the POKéMON will appear\n"
	.string "one at a time in the preset order.\p"
	.string "Once a POKéMON enters battle, it must\n"
	.string "remain out until the match is decided.\p"
	.string "If a match remains undecided in\n"
	.string "three turns, it goes to judging.\p"
	.string "If you wish to interrupt your challenge,\n"
	.string "please save the game.\p"
	.string "If you don't save, you will not be able\n"
	.string "to continue with your challenge.\p"
	.string "If you pull off the feat of beating\n"
	.string "seven TRAINERS in succession,\l"
	.string "we will present you with Battle Points.$"
#endif

BattleFrontier_BattleArenaLobby_Text_OkayToSave_hns:
#if GERMAN
	.string "Bevor du den Kampfring betrittst,\n"
	.string "musst du dein Spiel speichern. Okay?$"
#else
	.string "Before showing you to the BATTLE\n"
	.string "ARENA, you must save. Is that okay?$"
#endif

BattleFrontier_BattleArenaLobby_Text_WhichLevelMode_hns:
#if GERMAN
	.string "Im Kampfring wird in zwei Kategorien\n"
	.string "gekämpft: Lv. 50 und Offene Kämpfe.\l"
	.string "Wofür entscheidest du dich?$"
#else
	.string "The BATTLE ARENA offers two levels\n"
	.string "of challenge, Level 50 and Open Level.\l"
	.string "Which is your choice?$"
#endif

BattleFrontier_BattleArenaLobby_Text_SelectThreeMons_hns:
#if GERMAN
	.string "Bitte wähle drei Pokémon aus, die\n"
	.string "antreten sollen.$"
#else
	.string "Very well, now select your\n"
	.string "three POKéMON, please.$"
#endif

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen_hns:
#if GERMAN
	.string "Lieber Herausforderer!\p"
	.string "Du hast nicht die 3 Pokémon,\n"
	.string "die für den Eintritt nötig sind.\p"
	.string "Du brauchst 3 verschiedene\n"
	.string "Pokémon-Arten.\p"
	.string "Sie dürfen auch nicht dasselbe\n"
	.string "Item halten.\p"
	.string "Eier{STR_VAR_1}.$"
#else
	.string "My dear challenger!\p"
	.string "You do not have the three POKéMON\n"
	.string "required for entry.\p"
	.string "To qualify, you must bring three\n"
	.string "different kinds of POKéMON.\p"
	.string "They also must not hold the same\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"
#endif

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd_hns:
#if GERMAN
	.string "Komm wieder, wenn du bereit bist.$"
#else
	.string "When you have made your preparations,\n"
	.string "please do return.$"
#endif

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50_hns:
#if GERMAN
	.string "Lieber Herausforderer!\p"
	.string "Du hast nicht die 3 Pokémon,\n"
	.string "die für den Eintritt nötig sind.\p"
	.string "Du brauchst 3 verschiedene\n"
	.string "Pokémon-Arten.\p"
	.string "Alle 3 müssen Level 50\n"
	.string "oder niedriger sein.\p"
	.string "Sie dürfen auch nicht dasselbe\n"
	.string "Item halten.\p"
	.string "Eier{STR_VAR_1}.$"
#else
	.string "My dear challenger!\p"
	.string "You do not have the three POKéMON\n"
	.string "required for entry.\p"
	.string "To qualify, you must bring three\n"
	.string "different kinds of POKéMON.\p"
	.string "The three different POKéMON\n"
	.string "must all be Level 50 or lower.\p"
	.string "They also must not hold the same\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"
#endif

BattleFrontier_BattleArenaLobby_Text_GuideYouToArena_hns:
#if GERMAN
	.string "Ich werde dich nun in den Kampfring\n"
	.string "begleiten.$"
#else
	.string "I shall now guide you to\n"
	.string "the BATTLE ARENA.$"
#endif

BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown_hns:
#if GERMAN
	.string "Entschuldigung!\p"
	.string "Du hast, bevor du die Herausforderung\n"
	.string "abgebrochen hast, nicht gespeichert.\p"
	.string "Daher wirst du für diese Herausforde-\n"
	.string "rung disqualifiziert. Schade! Du hast\p"
	.string "natürlich die Möglichkeit, dich einer\n"
	.string "neuen Herausforderung zu stellen.$"
#else
	.string "My dear challenger!\p"
	.string "You did not save the game before\n"
	.string "shutting down, did you?\p"
	.string "It is unfortunate, but that has\n"
	.string "resulted in your disqualification\l"
	.string "from your challenge.\p"
	.string "You may, of course, start with a fresh\n"
	.string "challenge.$"
#endif

BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins_hns:
#if GERMAN
	.string "Herzlichen Glückwunsch! Du hast sieben\n"
	.string "Trainer in Folge besiegt!$"
#else
	.string "We congratulate you for your splendid\n"
	.string "string of wins over seven TRAINERS!$"
#endif

BattleFrontier_BattleArenaLobby_Text_RecordAchievement_hns:
#if GERMAN
	.string "Dein Erfolg wird gespeichert.\n"
	.string "Bitte warten.$"
#else
	.string "Your achievement will be recorded.\n"
	.string "Please wait while I save the game.$"
#endif

@ Unused
BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize_hns:
#if GERMAN
	.string "In Anerkennung deines siebenfachen\n"
	.string "Sieges überreichen wir dir diesen Preis.$"
#else
	.string "In commemoration of your 7-win streak,\n"
	.string "we present you with this prize.$"
#endif

@ Unused
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_hns:
#if GERMAN
	.string "{PLAYER} gewinnt\n"
	.string "{STR_VAR_1}.$"
#else
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"
#endif

@ Unused
BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize_hns:
#if GERMAN
	.string "Oh?\n"
	.string "Dein Rucksack ist voll.\p"
	.string "Schaff Platz und komm dann\n"
	.string "für deinen Preis zurück.$"
#else
	.string "Oh?\n"
	.string "Your BAG seems to be full.\p"
	.string "I urge you to clear space and\n"
	.string "return for your prize.$"
#endif

BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave_hns:
#if GERMAN
	.string "Vielen Dank für die Teilnahme!\p"
	.string "Das Spiel wird gespeichert.\n"
	.string "Bitte warten.$"
#else
	.string "Thank you so much for participating!\p"
	.string "Please wait while I save the game.$"
#endif

BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge_hns2_hns:
#if GERMAN
	.string "Wir freuen uns auf deine\n"
	.string "nächste Herausforderung!$"
#else
	.string "We await your challenge on\n"
	.string "another occasion!$"
#endif

BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame_hns:
#if GERMAN
	.string "Wir haben schon auf dich gewartet!\p"
	.string "Bevor du den Kampfring betrittst,\n"
	.string "musst du dein Spiel speichern. Okay?$"
#else
	.string "We have been looking forward to\n"
	.string "your arrival.\p"
	.string "Before I show you to the BATTLE\n"
	.string "ARENA, I must save the game.\l"
	.string "Please wait.$"
#endif

BattleFrontier_BattleArenaLobby_Text_RecordLastMatch_hns:
#if GERMAN
	.string "Soll ich den Kampfring-Kampf\n"
	.string "in deinen Kampfzonenpass eintragen?$"
#else
	.string "Shall I record your last BATTLE ARENA\n"
	.string "match on your FRONTIER PASS?$"
#endif

BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack_hns:
#if GERMAN
	.string "Ich habe aufgrund der Referee-\n"
	.string "Entscheidung verloren…\p"
	.string "Ich hätte nicht nur defensive Attacken\n"
	.string "verwenden dürfen, sondern auch\p"
	.string "angreifen müssen.$"
#else
	.string "I lost on the REFEREE's decision…\p"
	.string "I don't think it was a good idea to only\n"
	.string "use defensive moves and not attack…$"
#endif

BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked_hns:
#if GERMAN
	.string "Ich habe durch die richtige\n"
	.string "Entscheidung des Referees gewonnen!\p"
	.string "Kontinuierliche Treffer auf das gegne-\n"
	.string "rische Pokémon haben sich ausgezahlt.$"
#else
	.string "I won in judging!\p"
	.string "Landing hits consistently on\n"
	.string "the opponent's POKéMON worked!$"
#endif

BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw_hns:
#if GERMAN
	.string "Unser Kampf wurde als Unentschieden\n"
	.string "gewertet.\p"
	.string "Als die Zeit abgelaufen war, hatten\n"
	.string "meine und die gegnerischen Pokémon die\l"
	.string "gleiche Anzahl KP übrig.$"
#else
	.string "Our match was declared a draw.\p"
	.string "When we ran out of time, both my\n"
	.string "POKéMON and the opponent's had about\l"
	.string "the same amount of HP left.$"
#endif

BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant_hns:
#if GERMAN
	.string "Im Kampfring ist die Reihenfolge\n"
	.string "der Pokémon entscheidend.\p"
	.string "Hat dein erstes Pokémon bestimmte\n"
	.string "Nachteile aufgrund seiner\l"
	.string "Elementklasse, sollte dein zweites\l"
	.string "Pokémon diese Nachteile ausgleichen.\p"
	.string "Ich denke, so stellt man ein hervor-\n"
	.string "ragendes Team zusammen.$"
#else
	.string "In the BATTLE ARENA, the order of\n"
	.string "POKéMON is totally important.\p"
	.string "For example, if your first POKéMON\n"
	.string "has certain type disadvantages,\l"
	.string "try making your second POKéMON one\l"
	.string "with moves that are super effective\l"
	.string "against the first one.\p"
	.string "I think that will be a good way of\n"
	.string "making an effective team.$"
#endif

BattleFrontier_BattleArenaLobby_Text_RulesAreListed_hns:
#if GERMAN
	.string "Die K.O.-Teamturnier-Regeln sind hier\n"
	.string "aufgeführt.$"
#else
	.string "The Set KO Tourney's rules are listed.$"
#endif

BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_hns:
#if GERMAN
	.string "Wähle bitte ein Themengebiet aus.$"
#else
	.string "Which heading do you want to read?$"
#endif

BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules_hns:
#if GERMAN
	.string "Das K.O.-Teamturnier hat bestimmte\n"
	.string "Regeln, die du beachten musst.\p"
	.string "Erstens: Ein Kampf dauert drei Runden.\n"
	.string "Wenn nach drei Runden kein Sieger\p"
	.string "feststeht, wird eine richterliche\n"
	.string "Entscheidung getroffen. Der Referee\p"
	.string "wird den Sieger bestimmen, indem er\n"
	.string "die Art des Kampfes beurteilt. Ein Pkmn\p"
	.string "kann nicht ausgetauscht werden, bevor\n"
	.string "der Kampf entschieden ist.$"
#else
	.string "The Set KO Tourney has special rules,\n"
	.string "unlike standard battles.\p"
	.string "First, one battle lasts only\n"
	.string "three turns.\p"
	.string "If the outcome is not decided after\n"
	.string "three turns, it goes to judging.\p"
	.string "The REFEREE will choose the winner\n"
	.string "based on how the POKéMON battled.\p"
	.string "Also, a POKéMON cannot be switched out\n"
	.string "until its battle's outcome is decided.$"
#endif

BattleFrontier_BattleArenaLobby_Text_ExplainMindRules_hns:
#if GERMAN
	.string "Der erste Faktor bei der Beurteilung\n"
	.string "ist der “Verstand”. Hier wird beurteilt,\l"
	.string "wie aggressiv die Kämpfer waren.\p"
	.string "Die Beurteilung richtet sich danach, wie\n"
	.string "oft der Trainer offensive Attacken\l"
	.string "eingesetzt hat.$"
#else
	.string "The first judging factor is “Mind.”\n"
	.string "This factor evaluates how aggressive\l"
	.string "the battlers were.\p"
	.string "The judging is based on how often\n"
	.string "the TRAINERS ordered the use of\l"
	.string "offensive moves.$"
#endif

BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules_hns:
#if GERMAN
	.string "Der zweite Faktor ist das “Geschick”.\n"
	.string "Hier wird beurteilt, wie effektiv\l"
	.string "Attacken eingesetzt wurden.\p"
	.string "War eine Attacke erfolgreich, geht die\n"
	.string "Bewertung der Fähigkeiten nach oben.\p"
	.string "Schlug eine Attacke fehl, geht die\n"
	.string "Bewertung nach unten.\p"
	.string "Handelt es sich um eine offensive\n"
	.string "Attacke, geht die Beurteilung nach\l"
	.string "oben, wenn sie “sehr effektiv” war.\l"
	.string "Sie geht nach unten, wenn sie “nicht\p"
	.string "sehr effektiv war”. Für Attacken wie\n"
	.string "Schutzschild oder Scanner gibt es\l"
	.string "keine höhere Bewertung.\p"
	.string "Setzt der Gegner Schutzschild oder\n"
	.string "Scanner ein und die Attacke deines\l"
	.string "Pokémon scheitert, wird die Beurteilung\l"
	.string "nicht nach unten gehen.$"
#else
	.string "The second judging factor is “Skill.”\n"
	.string "This factor evaluates how effectively\l"
	.string "POKéMON moves were used.\p"
	.string "If a move worked successfully,\n"
	.string "the Skill rating goes up.\p"
	.string "If a move failed, the Skill rating\n"
	.string "is lowered.\p"
	.string "If it was an offensive move, the Skill\n"
	.string "rating goes up if the move was “super\l"
	.string "effective” and goes down if it was\l"
	.string "“not very effective.”\p"
	.string "The Skill rating will not go up for\n"
	.string "moves such as PROTECT and DETECT.\p"
	.string "If the opponent used PROTECT or\n"
	.string "DETECT, and your POKéMON failed to\l"
	.string "hit with a move, its Skill rating will not\l"
	.string "go down.$"
#endif

BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules_hns:
#if GERMAN
	.string "Der dritte Faktor bei der Beurteilung\n"
	.string "ist der “Körper”. Die am Ende\l"
	.string "verbleibenden KP sind ausschlag-\p"
	.string "gebend. Die Anzahl der KP, mit der ein\n"
	.string "Pokémon in den Kampf geht, wird mit der\l"
	.string "am Ende des Kampfes verglichen.$"
#else
	.string "The third judging factor is “Body.”\n"
	.string "This factor is based on how much HP\l"
	.string "remained at the end of a battle.\p"
	.string "The rating takes into account how much\n"
	.string "HP a POKéMON had at the start of\l"
	.string "battle, and what remained at the end.$"
#endif

BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon_hns:
#if GERMAN
	.string "Ein Sieg über den Ringmeister und ein\n"
	.string "siebenfacher Sieg über sieben Trainer!\p"
	.string "Wir gratulieren dir zu deiner\n"
	.string "herausragenden Leistung!$"
#else
	.string "A victory snatched from the ARENA\n"
	.string "TYCOON, and a seven-TRAINER sweep!\p"
	.string "We congratulate you on your most\n"
	.string "splendid challenge!$"
#endif

BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints_hns:
#if GERMAN
	.string "Geschätzter Herausforderer! In Aner-\n"
	.string "kennung deines unermüdlichen Geistes\l"
	.string "überreichen wir dir Gewinnpunkte.$"
#else
	.string "My dear challenger, in recognition of\n"
	.string "your indefatigable spirit, please\l"
	.string "accept these Battle Point(s).$"
#endif
