TrainerTower_Lobby_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_Lobby_OnResume
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerTower_Lobby_OnReturnToField
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerTower_Lobby_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, TrainerTower_Lobby_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_Lobby_OnFrame
	.byte 0

TrainerTower_Lobby_OnResume::
	setvar VAR_TEMP_2, 0
	ttower_resumetimer
	ttower_shouldexit
	goto_if_eq VAR_RESULT, FALSE, TrainerTower_Lobby_OnResumeEnd
	@ Never reached, above always FALSE
	setvar VAR_TEMP_0, 0
	setobjectxy LOCALID_PLAYER, 9, 7
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
TrainerTower_Lobby_OnResumeEnd::
	end

TrainerTower_Lobby_OnReturnToField::
	addobject LOCALID_TOWER_NURSE
	addobject LOCALID_TOWER_MART_CLERK
	addobject LOCALID_TOWER_RECEPTIONIST
	addobject LOCALID_TOWER_COOLTRAINER_F
	addobject LOCALID_TOWER_BALDING_MAN
	end

TrainerTower_Lobby_OnLoad::
	call_if_eq VAR_TEMP_D, 17, TrainerTower_Lobby_OpenCounterBarrier
	end

TrainerTower_Lobby_OpenCounterBarrier::
	setmetatile 17, 10, METATILE_TrainerTower_Floor_ShadeBottomLeft, 0
	return

TrainerTower_Lobby_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_TRAINER_TOWER_LOBBY
	getplayerxy VAR_TEMP_D, VAR_RESULT
	end

TrainerTower_Lobby_OnFrame::
	map_script_2 VAR_TEMP_0, 0, TrainerTower_Lobby_EventScript_Enter
	map_script_2 VAR_TEMP_D, 17, TrainerTower_Lobby_EventScript_ExitElevator
	.2byte 0

TrainerTower_Lobby_EventScript_ExitElevator::
	lockall
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_ExitElevator
	waitmovement 0
	setmetatile 17, 10, METATILE_TrainerTower_CounterBarrier, 1
	special DrawWholeMapView
	playse SE_CLICK
	waitse
	setvar VAR_TEMP_D, 0
	releaseall
	end

TrainerTower_Lobby_Movement_ExitElevator::
	walk_down
	walk_down
	step_end

TrainerTower_Lobby_EventScript_Enter::
	setvar VAR_TEMP_0, 1
	ttower_getchallengestatus
	switch VAR_RESULT
	case TT_CHALLENGE_STATUS_LOST, TrainerTower_Lobby_EventScript_LostChallenge
	case TT_CHALLENGE_STATUS_UNK, TrainerTower_Lobby_EventScript_ExitChallengeSpeakToReceptionist
	case TT_CHALLENGE_STATUS_NORMAL, TrainerTower_Lobby_EventScript_EnterEnd

TrainerTower_Lobby_EventScript_LostChallenge::
	lock
	faceplayer
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox TrainerTower_Lobby_Text_TooBadComeBackTryAgain
	goto TrainerTower_Lobby_EventScript_ExitChallenge

@ Presumably E-Reader related
TrainerTower_Lobby_EventScript_ExitChallengeSpeakToReceptionist::
	lock
	faceplayer
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox TrainerTower_Lobby_Text_MoveCounterHereWhenTrainersSwitch
TrainerTower_Lobby_EventScript_ExitChallenge::
	closemessage
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_WalkDown
	waitmovement 0
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
	release
TrainerTower_Lobby_EventScript_EnterEnd::
	end

TrainerTower_Lobby_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

TrainerTower_Lobby_EventScript_Receptionist::
	lock
	faceplayer
	ttower_getbeatchallenge
	goto_if_eq VAR_RESULT, TRUE, TrainerTower_Lobby_EventScript_ThanksForCompeting
	msgbox TrainerTower_Lobby_Text_GiveItYourBest
	goto TrainerTower_Lobby_EventScript_ReceptionistEnd

TrainerTower_Lobby_EventScript_ThanksForCompeting::
	msgbox TrainerTower_Lobby_Text_ThanksForCompeting
TrainerTower_Lobby_EventScript_ReceptionistEnd::
	release
	end

TrainerTower_Lobby_EventScript_MartClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart TrainerTower_Lobby_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
TrainerTower_Lobby_Mart_Items::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_MAX_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

TrainerTower_Lobby_EventScript_EntryTrigger::
	lockall
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_FaceReceptionist
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox TrainerTower_Lobby_Text_WelcomeToTrainerTower
	ttower_getnumfloors
	goto_if_eq VAR_RESULT, FALSE, TrainerTower_Lobby_EventScript_AllFloorsUsed
	msgbox TrainerTower_Lobby_Text_TrainersUpToFloorNum
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge

TrainerTower_Lobby_EventScript_AllFloorsUsed::
	msgbox TrainerTower_Lobby_Text_TrainersUpEighthFloor
TrainerTower_Lobby_EventScript_AskEnterChallenge::
	message TrainerTower_Lobby_Text_LikeToChallengeTrainers
	waitmessage
	multichoice 18, 6, MULTI_YESNOINFO, FALSE
	switch VAR_RESULT
	case 0, TrainerTower_Lobby_EventScript_ChooseChallenge
	case 1, TrainerTower_Lobby_EventScript_DeclineChallenge
	case 2, TrainerTower_Lobby_EventScript_ChallengeInfo
	case MULTI_B_PRESSED, TrainerTower_Lobby_EventScript_DeclineChallenge
	end

TrainerTower_Lobby_EventScript_ChallengeInfo::
	msgbox TrainerTower_Lobby_Text_ExplainTrainerTower
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge
	end

TrainerTower_Lobby_EventScript_ChooseChallenge::
	multichoice 13, 3, MULTI_TRAINER_TOWER_MODE, FALSE
	switch VAR_RESULT
	case 0, TrainerTower_Lobby_EventScript_BeginChallenge
	case 1, TrainerTower_Lobby_EventScript_BeginChallenge
	case 2, TrainerTower_Lobby_EventScript_BeginChallenge
	case 3, TrainerTower_Lobby_EventScript_BeginChallenge
	case 4, TrainerTower_Lobby_EventScript_DeclineChallenge
	case MULTI_B_PRESSED, TrainerTower_Lobby_EventScript_DeclineChallenge
	end

TrainerTower_Lobby_EventScript_BeginChallenge::
	copyvar VAR_0x8005, VAR_RESULT
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 1
	special HealPlayerParty
	msgbox TrainerTower_Lobby_Text_StartClockGetSetGo
	ttower_startchallenge
	releaseall
	end

TrainerTower_Lobby_EventScript_DeclineChallenge::
	msgbox TrainerTower_Lobby_Text_PleaseVisitUsAgain
	closemessage
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_Movement_WalkDown
	waitmovement 0
	releaseall
	end

TrainerTower_Lobby_Movement_FaceReceptionist::
	face_right
	step_end

TrainerTower_Lobby_Movement_WalkDown::
	walk_down
	step_end

TrainerTower_Lobby_EventScript_ShowRecords::
	lockall
	fadescreen FADE_TO_BLACK
	setvar VAR_0x8004, 1
	special ShowTrainerHillRecords
	waitstate
	releaseall
	end

TrainerTower_Lobby_EventScript_CooltrainerF::
	msgbox TrainerTower_Lobby_Text_WonderWhatKindsOfTrainers, MSGBOX_NPC
	end

TrainerTower_Lobby_EventScript_BaldingMan::
	msgbox TrainerTower_Lobby_Text_StairsTougherThanAnyBattle, MSGBOX_NPC
	end

@ All Trainer Tower text (Lobby and Roof) is interleaved here

TrainerTower_Lobby_Text_WelcomeToTrainerTower::
#if GERMAN
	.string "Hallo!\p"
	.string "Willkommen im Trainerturm, wo sich\n"
	.string "Trainer von nah und fern versammeln.$"
#else
	.string "Hello!\p"
	.string "Welcome to TRAINER TOWER where\n"
	.string "TRAINERS gather from all over!$"
#endif

TrainerTower_Lobby_Text_TrainersUpToFloorNum::
#if GERMAN
	.string "Trainer aus aller Herren Länder\n"
	.string "kommen hierher, um zu kämpfen.\p"
	.string "Lass mich mal sehen…\p"
	.string "Momentan findest du Trainer bis in\n"
	.string "Stockwerk {STR_VAR_1}.$"
#else
	.string "TRAINERS from all over the world\n"
	.string "gather here to battle.\p"
	.string "Let me see…\p"
	.string "Right now, there are TRAINERS only\n"
	.string "up to Floor {STR_VAR_1}.$"
#endif

TrainerTower_Lobby_Text_TrainersUpEighthFloor::
#if GERMAN
	.string "Bis zum achten Stock erwarten\n"
	.string "Trainer deine Herausforderung.$"
#else
	.string "TRAINERS are awaiting your\n"
	.string "challenge up to the eighth floor.$"
#endif

TrainerTower_Lobby_Text_LikeToChallengeTrainers::
#if GERMAN
	.string "Möchtest du die wartenden Trainer\n"
	.string "herausfordern?$"
#else
	.string "Would you like to challenge the\n"
	.string "waiting TRAINERS?$"
#endif

TrainerTower_Lobby_Text_StartClockGetSetGo::
#if GERMAN
	.string "O.K.! Ich stelle die Uhr! Gib dein Bestes!\p"
	.string "Auf die Plätze…\p"
	.string "Fertig…\p"
	.string "Los!$"
#else
	.string "Okay, I'll get the clock started,\n"
	.string "so give it everything you have.\p"
	.string "On your marks…\p"
	.string "Get set…\p"
	.string "Go!$"
#endif

TrainerTower_Lobby_Text_PleaseVisitUsAgain::
#if GERMAN
	.string "Bitte besuche uns wieder!$"
#else
	.string "Please do visit us again!$"
#endif

TrainerTower_Lobby_Text_TooBadComeBackTryAgain::
#if GERMAN
	.string "Das war nicht gut!\p"
	.string "Ich glaube, du hast dich beim Kampf\n"
	.string "richtig angestrengt.\p"
	.string "Bitte komme wieder und probiere es\n"
	.string "erneut!$"
#else
	.string "That was too bad.\p"
	.string "I think you put in a tremendous\n"
	.string "effort in your battling.\p"
	.string "Please come back and try again!$"
#endif

TrainerTower_Lobby_Text_GiveItYourBest::
#if GERMAN
	.string "Ich hoffe, du strengst dich wirklich an!$"
#else
	.string "I hope you give it your best.$"
#endif

TrainerTower_Lobby_Text_MoveCounterHereWhenTrainersSwitch::
#if GERMAN
	.string "Tauschen die Trainer ihre Plätze, kann\n"
	.string "es hektisch werden.\p"
	.string "Um eine Panik zu vermeiden, haben wir\n"
	.string "die Rezeption hierher verlegt.\p"
	.string "Wir bitten um dein Verständnis!$"
#else
	.string "When the TRAINERS switch places,\n"
	.string "the movement can be hectic.\p"
	.string "To avoid the stampede, we moved\n"
	.string "the reception counter here.\p"
	.string "I'm sorry for the inconvenience.$"
#endif

TrainerTower_Roof_Text_ImOwnerBattledPerfectly::
#if GERMAN
	.string "Hallo…\p"
	.string "Mir gehört dieser Turm…\p"
	.string "Wie der Himmel über dem Dach\n"
	.string "emporsteigt…\p"
	.string "Die Macht des Windes hier oben…\p"
	.string "Es ist so stimmig…\p"
	.string "Dein Kampfstil…\n"
	.string "Auch er war stimmig…$"
#else
	.string "Hello…\p"
	.string "I am the owner of this TOWER…\p"
	.string "How the sky soars above this\n"
	.string "rooftop…\p"
	.string "The caress of the winds up here…\p"
	.string "It's all so perfect…\p"
	.string "The way you battled…\n"
	.string "It, too, was perfection…$"
#endif

TrainerTower_Roof_Text_ThisIsForYou::
#if GERMAN
	.string "Dies ist für dich…$"
#else
	.string "This is for you…$"
#endif

TrainerTower_Roof_Text_DoneItInRecordTime::
#if GERMAN
	.string "Oh!\n"
	.string "Fantastisch!\p"
	.string "Es ist bewundernswert, wie schnell\n"
	.string "du hier hochgekommen bist.\p"
	.string "Tatsächlich hast du einen neuen\n"
	.string "Rekord aufgestellt…\p"
	.string "Du kannst ihn an der Rezeption\n"
	.string "einsehen.$"
#else
	.string "Oh!\n"
	.string "Stupendous!\p"
	.string "It's marvelous how you've come up\n"
	.string "here so quickly.\p"
	.string "The fact is, you've done it in\n"
	.string "record time…\p"
	.string "I'll have your record posted at\n"
	.string "the reception counter.$"
#endif

TrainerTower_Roof_Text_TookSweetTimeGettingHere::
#if GERMAN
	.string "Es scheint, du hast dir ganz schön Zeit\n"
	.string "gelassen…$"
#else
	.string "You seem to have taken your sweet\n"
	.string "time getting here…$"
#endif

TrainerTower_Roof_Text_IdLikeToSeeBetterTime::
#if GERMAN
	.string "Ich will von dir eine bessere Zeit\n"
	.string "sehen…\p"
	.string "Ich verlasse mich auf dich!\p"
	.string "Bis demnächst, mach es gut…$"
#else
	.string "What I would like to see is a\n"
	.string "better time out of you…\p"
	.string "I'm counting on you.\p"
	.string "Until then, farewell…$"
#endif

TrainerTower_Text_XMinYZSec::
#if GERMAN
	.string "{STR_VAR_1} Min. {STR_VAR_2},{STR_VAR_3} Sek.$"
#else
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
#endif

TrainerTower_Lobby_Text_HereAreTheResults::
	.string "せいせきひょうです$"

TrainerTower_Lobby_Text_NeedTwoMonsForDouble::
#if GERMAN
	.string "Dies ist ein Zwei-gegen-Zwei-Kampf!\p"
	.string "Du musst mindestens zwei Pokémon\n"
	.string "mitbringen.$"
#else
	.string "This is a two-on-two battle.\p"
	.string "You may not battle unless you have\n"
	.string "at least two POKéMON.$"
#endif

TrainerTower_Lobby_Text_ExplainTrainerTower::
#if GERMAN
	.string "Hier im Trainerturm gibt es unter\n"
	.string "anderem den Bestzeit-Modus.\l"
	.string "Es wird gestoppt, wie lange du von der\l"
	.string "Rezeption zum Eigentümer auf dem Dach\l"
	.string "brauchst.\l"
	.string "Die besten Zeiten werden an der\l"
	.string "Rekordtafel präsentiert.\l"
	.string "Tritt gegen Freunde an, um zu sehen, wer\l"
	.string "der Schnellste ist.\l"
	.string "Hier gibt es keine E.-Punkte oder Geld\l"
	.string "zu gewinnen.$"
#else
	.string "Here at TRAINER TOWER, there is an\n"
	.string "event called TIME ATTACK.\p"
	.string "You will be timed on how quickly\n"
	.string "you can get from the reception\l"
	.string "counter to the OWNER on the roof.\p"
	.string "The best times will be recorded on\n"
	.string "the Time Board.\p"
	.string "Try competing with friends to see\n"
	.string "who can beat it the fastest.\p"
	.string "You will not earn any EXP. Points\n"
	.string "or money by beating TRAINERS here.$"
#endif

TrainerTower_Lobby_Text_ThanksForCompeting::
#if GERMAN
	.string "Danke fürs Mitmachen!$"
#else
	.string "Thank you for competing!$"
#endif

TrainerTower_Lobby_Text_WonderWhatKindsOfTrainers::
#if GERMAN
	.string "Ich möchte herausfinden, wie gut\n"
	.string "ich bin.\p"
	.string "Ich bin gespannt, welche Trainer\n"
	.string "auf mich warten.\p"
	.string "Das ist nervenaufreibend!$"
#else
	.string "I'm here to see how good I am.\p"
	.string "I wonder what kinds of TRAINERS\n"
	.string "are waiting for me?\p"
	.string "It's nerve-racking!$"
#endif

TrainerTower_Lobby_Text_StairsTougherThanAnyBattle::
#if GERMAN
	.string "Schnauf, schnauf…\n"
	.string "Schnauf…\p"
	.string "Kämpfen macht mir nichts aus!\n"
	.string "Aber diese Treppen…\l"
	.string "Die sind härter als jeder Kampf…$"
#else
	.string "Gasp, gasp…\n"
	.string "Gasp…\p"
	.string "Never mind battling! These stairs…\n"
	.string "They're tougher than any battle…$"
#endif

