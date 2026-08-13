BattleFrontier_BattlePikeThreePathRoom_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePikeRoom_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeThreePathRoom_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeThreePathRoom_OnWarp
	.byte 0

BattleFrontier_BattlePikeThreePathRoom_OnFrame:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_GetChallengeStatus
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeThreePathRoom_EventScript_WarpToLobby
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_ResumeChallenge
	map_script_2 VAR_TEMP_5, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom
	map_script_2 VAR_TEMP_5, 1, BattleFrontier_BattlePikeThreePathRoom_EventScript_GivePikeQueenHint
	.2byte 0

BattleFrontier_BattlePikeThreePathRoom_OnWarp:
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattlePikeThreePathRoom_EventScript_TurnPlayerNorth::
	setvar VAR_TEMP_4, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_GetChallengeStatus::
	frontier_getstatus
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_WarpToLobby::
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
	waitstate
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_ResumeChallenge::
	lockall
	message BattleFrontier_BattlePikeThreePathRoom_Text_AwaitingReturnSaveBeforeResume
	waitmessage
	pike_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_PleaseEnjoyChallenge, MSGBOX_DEFAULT
	closemessage
	releaseall
	frontier_settrainers
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 99
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant::
	frontier_get FRONTIER_DATA_BATTLE_NUM  @ Room number
	switch VAR_RESULT
	case 1, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom1
	case 3, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom3
	case 5, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom5
	case 7, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom7
	case 9, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom9
	case 11, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom11
	case 13, BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom13
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom1::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom3::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom3, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom5::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom5, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom7::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom7, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom9::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom9, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom11::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom11, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AttendantRoom13::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom13, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_ContinueWithChallenge, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_PauseChallenge::
	frontier_saveparty
	message BattleFrontier_BattlePikeThreePathRoom_Text_SavingYourData
	waitmessage
	special LoadPlayerParty
	pike_save CHALLENGE_STATUS_PAUSED
	playse SE_SAVE
	waitse
	fadescreen FADE_TO_BLACK
	frontier_reset
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SaveChallengeAndQuit, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BattleFrontier_BattlePikeThreePathRoom_EventScript_PauseChallenge
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge::
	message BattleFrontier_BattlePikeThreePathRoom_Text_RetireFromChallenge
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePike_EventScript_Retire
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom::
	pike_sethintroom
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePikeThreePathRoom_EventScript_SetPikeQueenHint
	setvar VAR_TEMP_5, 255
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_SetPikeQueenHint::
	setvar VAR_TEMP_5, 1
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_GivePikeQueenHint::
	applymovement LOCALID_PIKE_HINT_GIVER, BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverApproachPlayer
	waitmovement 0
	lockall
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_TerrifyingEvent, MSGBOX_DEFAULT
	releaseall
	applymovement LOCALID_PIKE_HINT_GIVER, BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverReturnToPos
	waitmovement 0
	setvar VAR_TEMP_5, 255
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver::
	pike_gethint
	goto_if_eq VAR_RESULT, PIKE_HINT_BRAIN, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveBrainHint
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_FindingItDifficultToChoose, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_ApologizeForImpertinence, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint::
	pike_gethintroomid
	switch VAR_RESULT
	case PIKE_ROOM_LEFT, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveLeftRoomHint
	case PIKE_ROOM_CENTER, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveCenterRoomHint
	case PIKE_ROOM_RIGHT, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveRightRoomHint
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveLeftRoomHint::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutLeftPath, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint

BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveCenterRoomHint::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutCenterPath, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint

BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveRightRoomHint::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutRightPath, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint

BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint::
	pike_gethint
	switch VAR_RESULT
	case PIKE_HINT_NOSTALGIA, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintNostalgia
	case PIKE_HINT_WHISPERING, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintWhispering
	case PIKE_HINT_POKEMON, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPokemon
	case PIKE_HINT_PEOPLE, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPeople
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintNostalgia::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_WaveOfNostaliga, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintWhispering::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_HeardWhispering, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPokemon::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_AromaOfPokemon, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPeople::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_PresenceOfPeople, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveBrainHint::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_DreadfulPresence, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverApproachPlayer:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverReturnToPos:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	face_down
	step_end

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1:
#if GERMAN
	.string "Du befindest dich im ersten Raum…$"
#else
	.string "You are currently in\n"
	.string "the 1st room…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom3:
#if GERMAN
	.string "Du befindest dich im dritten Raum…$"
#else
	.string "You are currently in\n"
	.string "the 3rd room…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom5:
#if GERMAN
	.string "Du befindest dich im fünften Raum…$"
#else
	.string "You are currently in\n"
	.string "the 5th room…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom7:
#if GERMAN
	.string "Du befindest dich im siebten Raum…$"
#else
	.string "You are currently in\n"
	.string "the 7th room…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom9:
#if GERMAN
	.string "Du befindest dich im neunten Raum…$"
#else
	.string "You are currently in\n"
	.string "the 9th room…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom11:
#if GERMAN
	.string "Du befindest dich im 11. Raum…$"
#else
	.string "You are currently in\n"
	.string "the 11th room…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom13:
#if GERMAN
	.string "Du befindest dich im 13. Raum…$"
#else
	.string "You are currently in\n"
	.string "the 13th room…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_ContinueWithChallenge:
#if GERMAN
	.string "Möchtest du die Herausforderung\n"
	.string "fortsetzen?$"
#else
	.string "Will you continue with\n"
	.string "your challenge?$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_SaveChallengeAndQuit:
#if GERMAN
	.string "Möchtest du das Spiel speichern und\n"
	.string "beenden?$"
#else
	.string "Would you like to save your challenge\n"
	.string "and quit the game for now?$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_RetireFromChallenge:
#if GERMAN
	.string "Möchtest du die Kampfbahn-\n"
	.string "Herausforderung abbrechen?$"
#else
	.string "Do you wish to retire from your\n"
	.string "Battle Choice challenge?$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_AwaitingReturnSaveBeforeResume:
#if GERMAN
	.string "Wir haben dich schon erwartet…\p"
	.string "Bevor du die Herausforderung\n"
	.string "fortsetzt, speicher ich dein Spiel…$"
#else
	.string "We've been awaiting your return…\p"
	.string "Before resuming your Battle Choice\n"
	.string "challenge, let me save the game…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_PleaseEnjoyChallenge:
#if GERMAN
	.string "Wir hoffen, du genießt die Kampf-\n"
	.string "bahn-Herausforderung…$"
#else
	.string "Please do enjoy your Battle Choice\n"
	.string "challenge…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_SavingYourData:
#if GERMAN
	.string "Ich speichere nun deine Daten…\n"
	.string "Einen Moment bitte…$"
#else
	.string "I am saving your data…\n"
	.string "A little time, please…$"
#endif

BattleFrontier_BattlePike_Text_PathBlockedNoTurningBack:
#if GERMAN
	.string "Der Weg ist versperrt!\n"
	.string "Und es gibt kein Zurück…$"
#else
	.string "The path is blocked!\n"
	.string "And there is no turning back…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_FindingItDifficultToChoose:
#if GERMAN
	.string "Ich bitte vielmals um Entschuldigung,\n"
	.string "aber…\p"
	.string "Es scheint, du hast Schwierigkeiten,\n"
	.string "dich für einen Weg zu entscheiden?$"
#else
	.string "I beg your pardon, but…\p"
	.string "Are you perhaps finding it difficult\n"
	.string "to choose your path?$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_ApologizeForImpertinence:
#if GERMAN
	.string "Ich verstehe…\p"
	.string "Das war etwas vorschnell von mir.\n"
	.string "Entschuldigung…$"
#else
	.string "I see…\n"
	.string "I apologize for my impertinence…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutRightPath:
#if GERMAN
	.string "Mh, mal sehen… Irgendetwas war\n"
	.string "mit dem Weg dort rechts…$"
#else
	.string "Ah, let me see… There is something\n"
	.string "about the path on the right…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutCenterPath:
#if GERMAN
	.string "Mh, mal sehen… Irgendetwas war\n"
	.string "mit dem mittleren Weg…$"
#else
	.string "Ah, let me see… There is something\n"
	.string "about the path in the center…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutLeftPath:
#if GERMAN
	.string "Mh, mal sehen… Irgendetwas war\n"
	.string "mit dem Weg dort links…$"
#else
	.string "Ah, let me see… There is something\n"
	.string "about the path on the left…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_AromaOfPokemon:
#if GERMAN
	.string "Der typische Duft von Pokémon scheint\n"
	.string "dort vorhanden zu sein…$"
#else
	.string "It seems to have the distinct aroma\n"
	.string "of POKéMON wafting around it…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_PresenceOfPeople:
#if GERMAN
	.string "Ist das ein… Trainer? Ich spüre die\n"
	.string "Anwesenheit von Menschen…$"
#else
	.string "Is it… A TRAINER?\n"
	.string "I sense the presence of people…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_HeardWhispering:
#if GERMAN
	.string "Ich meine, etwas gehört zu haben… Und\n"
	.string "sei es nur ein Flüstern gewesen.$"
#else
	.string "I seem to have heard something…\n"
	.string "It may have been whispering…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_WaveOfNostaliga:
#if GERMAN
	.string "Ich spüre einen Hauch von Nostalgie\n"
	.string "aus dieser Richtung kommen…$"
#else
	.string "For some odd reason, I felt a wave\n"
	.string "of nostalgia coming from it…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_TerrifyingEvent:
#if GERMAN
	.string "Es tut mir sehr Leid…\p"
	.string "Ein schreckliches, ja, fürchterliches\n"
	.string "Erlebnis steht dir bevor…\p"
	.string "Ich bitte dich: Sei auf das Schlimmste\n"
	.string "gefasst…$"
#else
	.string "I am sorry to say…\p"
	.string "A terrifying event, yes, a horrible one,\n"
	.string "is about to befall you…\p"
	.string "I urge you to pay the utmost care\n"
	.string "and prepare for the worst…$"
#endif

BattleFrontier_BattlePikeThreePathRoom_Text_DreadfulPresence:
#if GERMAN
	.string "Jeder Weg strahlt etwas Bedrohliches\n"
	.string "aus…$"
#else
	.string "From every path I sense a dreadful\n"
	.string "presence…$"
#endif
