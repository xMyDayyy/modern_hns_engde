BattleFrontier_BattleDomePreBattleRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomePreBattleRoom_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomePreBattleRoom_OnWarp
	.byte 0

BattleFrontier_BattleDomePreBattleRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattleDomePreBattleRoom_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattleDomePreBattleRoom_OnFrame:
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom
	.2byte 0

BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom::
	goto_if_eq VAR_0x8006, 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle
	delay 1
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
	setvar VAR_TEMP_0, 1
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnter
	waitmovement 0
	lockall
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound::
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage
	waitmessage
	switch VAR_RESULT  @ No case?
	call BattleFrontier_EventScript_GetCantRecordBattle
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord
	multichoice 16, 0, MULTI_TOURNEY_WITH_RECORD, TRUE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle
	case 4, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge
	case 5, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord::
	multichoice 16, 2, MULTI_TOURNEY_NO_RECORD, TRUE
	switch VAR_RESULT
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge
	case 4, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle::
	message BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_RecordBattle
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound

BattleFrontier_BattleDomePreBattleRoom_EventScript_RecordBattle::
	call BattleFrontier_EventScript_SaveBattle
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge::
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	case YES, BattleFrontier_BattleDomePreBattleRoom_EventScript_PauseChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge::
	message BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_RetireChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound

BattleFrontier_BattleDomePreBattleRoom_EventScript_RetireChallenge::
	dome_resolvewinners DOME_PLAYER_RETIRED
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobbyLost

BattleFrontier_BattleDomePreBattleRoom_EventScript_PauseChallenge::
	message BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait
	waitmessage
	dome_save CHALLENGE_STATUS_PAUSED
	playse SE_SAVE
	waitse
	fadescreen FADE_TO_BLACK
	frontier_reset
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo::
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	dome_showopponentinfo
	waitstate
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound

BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree::
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage
	fadescreen FADE_TO_BLACK
	dome_showtourneytree
	waitstate
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound

BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage::
	frontier_get FRONTIER_DATA_BATTLE_NUM
	switch VAR_RESULT
	case DOME_ROUND1, BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound1
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound2
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInSemifinals
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInFinals
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound1::
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound2::
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInSemifinals::
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInFinals::
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge::
	message BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons
	waitmessage
	waitbuttonpress
	fadescreen FADE_TO_BLACK
	call BattleFrontier_EventScript_GetLvlMode
	copyvar VAR_0x8004, VAR_RESULT
	setvar VAR_0x8005, DOME_BATTLE_PARTY_SIZE  @ 2 of the 3 party mons are selected for battle
	special ChoosePartyForBattleFrontier
	waitstate
	frontier_resetsketch
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	dome_set DOME_DATA_SELECTED_MONS
	dome_reduceparty
	dome_setopponent
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DOME_PRE_BATTLE_ATTENDANT, BattleFrontier_BattleDomePreBattleRoom_Movement_AttendantMoveAside
	waitmovement 0
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerWalkToDoor
	waitmovement 0
	opendoor 5, 1
	waitdooranim
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnterDoor
	waitmovement 0
	closedoor 5, 1
	waitdooranim
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM, 9, 5
	setvar VAR_TEMP_0, 0
	waitstate
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage::
	frontier_get FRONTIER_DATA_BATTLE_NUM
	switch VAR_RESULT
	case DOME_ROUND1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound1
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound2
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForSemifinals
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound1::
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound2::
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForSemifinals::
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals::
	frontier_getbrainstatus
	switch VAR_RESULT
	case FRONTIER_BRAIN_SILVER, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver::
	goto_if_set FLAG_TEMP_1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilverShort
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold::
	goto_if_set FLAG_TEMP_1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGoldShort
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGold, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilverShort::
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGoldShort::
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGoldShort, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle::
	setvar VAR_TEMP_0, 1
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth, MSGBOX_DEFAULT
	special LoadPlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage
	fadescreen FADE_TO_BLACK
	dome_showstatictourneytree
	waitstate
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound

BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage::
	frontier_get FRONTIER_DATA_BATTLE_NUM
	switch VAR_RESULT
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_Round1Complete
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_Round2Complete
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_SemifinalsComplete
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_Round1Complete::
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_Round2Complete::
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_SemifinalsComplete::
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete, MSGBOX_DEFAULT
	return

BattleFrontier_BattleDomePreBattleRoom_Movement_AttendantMoveAside:
	walk_right
	face_left
	step_end

BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnter:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerWalkToDoor:
	walk_up
	step_end

BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnterDoor:
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1:
#if GERMAN
	.string "Deine erste Runde steht bevor!\n"
	.string "Bist du bereit?$"
#else
	.string "Your 1st-round match is next.\n"
	.string "Are you ready?$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2:
#if GERMAN
	.string "Deine zweite Runde steht bevor!\n"
	.string "Bist du bereit?$"
#else
	.string "Your 2nd-round match is next.\n"
	.string "Are you ready?$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals:
#if GERMAN
	.string "Das Halbfinale steht bevor!\n"
	.string "Bist du bereit?$"
#else
	.string "Your semifinal match is next.\n"
	.string "Are you ready?$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals:
#if GERMAN
	.string "Das Finale steht bevor!\n"
	.string "Bist du bereit?$"
#else
	.string "Your final match is next.\n"
	.string "Are you ready?$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons:
#if GERMAN
	.string "Bitte wähle zwei Pokémon aus, die\n"
	.string "am Kampf teilnehmen sollen.$"
#else
	.string "Please choose the two POKéMON\n"
	.string "that are to appear in battle.$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay:
#if GERMAN
	.string "Bitte hier entlang.$"
#else
	.string "Right this way, please.$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth:
#if GERMAN
	.string "Vielen Dank für die Teilnahme!\p"
	.string "Deine Pokémon sind gleich wieder\n"
	.string "topfit!$"
#else
	.string "Thank you for competing!\p"
	.string "I'll restore your POKéMON to\n"
	.string "full health.$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete:
#if GERMAN
	.string "Die erste Runde ist beendet.\p"
	.string "Diese Teams sind eine Runde weiter!$"
#else
	.string "All 1st-round matches have been\n"
	.string "completed.\p"
	.string "These are the teams that advanced!$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete:
#if GERMAN
	.string "Die zweite Runde ist beendet.\p"
	.string "Diese Teams sind eine Runde weiter!$"
#else
	.string "All 2nd-round matches have been\n"
	.string "completed.\p"
	.string "These are the teams that advanced!$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete:
#if GERMAN
	.string "Das Halbfinale ist beendet.\p"
	.string "Diese Teams sind eine Runde weiter!$"
#else
	.string "All semifinal matches have been\n"
	.string "completed.\p"
	.string "These are the teams that advanced!$"
#endif

@ Unused
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2:
#if GERMAN
	.string "Glückwunsch! Du hast die erste Runde\n"
	.string "überstanden!\p"
	.string "Als Nächstes kommt die zweite Runde.\n"
	.string "Bist du so weit?$"
#else
	.string "Congratulations for getting through\n"
	.string "the 1st round.\p"
	.string "The 2nd round is next.\n"
	.string "Are you ready?$"
#endif

@ Unused
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals:
#if GERMAN
	.string "Glückwunsch! Du hast es bis ins\n"
	.string "Halbfinale geschafft!\p"
	.string "Hier treffen die besten vier Teams\n"
	.string "aufeinander. Bist du so weit?$"
#else
	.string "Congratulations for advancing\n"
	.string "to the semifinals.\p"
	.string "The best four teams meet in this round.\n"
	.string "Are you ready?$"
#endif

@ Unused
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals:
#if GERMAN
	.string "Glückwunsch! Du hast es bis zum\n"
	.string "finalen Kampf geschafft!\p"
	.string "Nur noch ein Sieg bis zum Titel.\n"
	.string "Bist du so weit?$"
#else
	.string "Congratulations for advancing\n"
	.string "to the final match.\p"
	.string "You're one win from the championship.\n"
	.string "Are you ready?$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer:
#if GERMAN
	.string "Der nächste Gegner von {PLAYER} ist\n"
	.string "dieser Trainer.$"
#else
	.string "{PLAYER}'s next opponent\n"
	.string "is this TRAINER.$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1:
#if GERMAN
	.string "Das Turnier befindet sich in der\n"
	.string "1. Runde.$"
#else
	.string "The tournament is in the 1st round.$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2:
#if GERMAN
	.string "Das Turnier befindet sich in der\n"
	.string "2. Runde.$"
#else
	.string "The tournament is in the 2nd round.$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals:
#if GERMAN
	.string "Das Turnier befindet sich im Halbfinale.$"
#else
	.string "The tournament is in the semifinals.$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals:
#if GERMAN
	.string "Das Turnier befindet sich im Finale.$"
#else
	.string "The tournament is up to the final.$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame:
#if GERMAN
	.string "Möchtest du das Spiel speichern und\n"
	.string "beenden?$"
#else
	.string "Would you like to save and\n"
	.string "quit the game?$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge:
#if GERMAN
	.string "Möchtest du dich aus dem Turnier\n"
	.string "zurückziehen?$"
#else
	.string "Would you like to retire from your\n"
	.string "Battle Tournament challenge?$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait:
#if GERMAN
	.string "Ich speichere deine Daten.\n"
	.string "Einen Moment bitte.$"
#else
	.string "I am saving your data.\n"
	.string "Please wait.$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch:
#if GERMAN
	.string "Soll ich den letzten Kampf in deinen\n"
	.string "Kampfzonenpass eintragen?$"
#else
	.string "Should I record your last match\n"
	.string "on your FRONTIER PASS?$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver:
#if GERMAN
	.string "Glückwunsch! Du hast es bis zum\n"
	.string "finalen Kampf geschafft!\p"
	.string "In diesem Finale wirst du auf den\n"
	.string "Stadionstar Tasso treffen.\p"
	.string "Bist du bereit?$"
#else
	.string "Congratulations for advancing\n"
	.string "to the final match.\p"
	.string "For the final match, you will challenge\n"
	.string "the DOME ACE TUCKER.\p"
	.string "Are you ready?$"
#endif

@ Identical to ReadyForTuckerSilver
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGold:
#if GERMAN
	.string "Glückwunsch! Du hast es bis zum\n"
	.string "finalen Kampf geschafft!\p"
	.string "In diesem Finale wirst du auf den\n"
	.string "Stadionstar Tasso treffen.\p"
	.string "Bist du bereit?$"
#else
	.string "Congratulations for advancing\n"
	.string "to the final match.\p"
	.string "For the final match, you will challenge\n"
	.string "the DOME ACE TUCKER.\p"
	.string "Are you ready?$"
#endif

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort:
#if GERMAN
	.string "Dies ist das Finale. Du trittst gegen\n"
	.string "Tasso an. Bist du bereit?$"
#else
	.string "Your final battle against TUCKER is\n"
	.string "next. Are you ready?$"
#endif

@ Identical again
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGoldShort:
#if GERMAN
	.string "Dies ist das Finale. Du trittst gegen\n"
	.string "Tasso an. Bist du bereit?$"
#else
	.string "Your final battle against TUCKER is\n"
	.string "next. Are you ready?$"
#endif

