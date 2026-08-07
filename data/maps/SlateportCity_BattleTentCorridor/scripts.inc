SlateportCity_BattleTentCorridor_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentCorridor_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentCorridor_OnWarp
	.byte 0

	@ This is Slateport Tent's version of the Battle Factory Pre-Battle Room

SlateportCity_BattleTentCorridor_OnWarp:
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentCorridor_EventScript_SetUpObjects
	.2byte 0

SlateportCity_BattleTentCorridor_EventScript_SetUpObjects::
	setvar VAR_TEMP_1, 1
	goto_if_ne VAR_0x8006, 1, SlateportCity_BattleTentCorridor_EventScript_TurnPlayerNorth
	setobjectxy LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, 2, 2
	turnobject LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, DIR_SOUTH
SlateportCity_BattleTentCorridor_EventScript_TurnPlayerNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

SlateportCity_BattleTentCorridor_OnFrame:
	map_script_2 VAR_TEMP_0, 0, SlateportCity_BattleTentCorridor_EventScript_EnterCorridor
	.2byte 0

SlateportCity_BattleTentCorridor_EventScript_EnterCorridor::
	goto_if_eq VAR_0x8006, 1, SlateportCity_BattleTentCorridor_EventScript_ReturnToRoomFromBattle
	setvar VAR_TEMP_0, 1
	applymovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, SlateportCity_BattleTentCorridor_Movement_AttendantEnter
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentCorridor_Movement_PlayerEnter
	waitmovement 0
	goto_if_eq VAR_0x8006, 2, SlateportCity_BattleTentCorridor_EventScript_ResumeChallenge
	slateporttent_generaterentalmons
	slateporttent_generateopponentmons
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	slateporttent_rentmons
	waitstate
SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom::
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	opendoor 2, 1
	waitdooranim
	applymovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, SlateportCity_BattleTentCorridor_Movement_AttendantExit
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentCorridor_Movement_PlayerExit
	waitmovement 0
	closedoor 2, 1
	waitdooranim
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM, 4, 4
	waitstate
	end

SlateportCity_BattleTentCorridor_EventScript_ReturnToRoomFromBattle::
	factory_setopponentmons
	factory_resethelditems
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons, MSGBOX_DEFAULT
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent::
	frontier_get FRONTIER_DATA_BATTLE_NUM
	call_if_eq VAR_RESULT, 1, SlateportCity_BattleTentCorridor_EventScript_ReadyFor2ndOpponent
	call_if_eq VAR_RESULT, 2, SlateportCity_BattleTentCorridor_EventScript_ReadyFor3rdOpponent
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
	switch VAR_RESULT
	case 0, SlateportCity_BattleTentCorridor_EventScript_AskSwapMon
	case 1, SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge
	case 2, SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge

SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge::
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
	case YES, SlateportCity_BattleTentCorridor_EventScript_PauseChallenge
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent

SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge::
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
	case 0, SlateportCity_BattleTent_EventScript_WarpToLobbyLost
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent

SlateportCity_BattleTentCorridor_EventScript_AskSwapMon::
	slateporttent_generateopponentmons
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
	case YES, SlateportCity_BattleTentCorridor_EventScript_SwapMons
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom

SlateportCity_BattleTentCorridor_EventScript_SwapMons::
	fadescreen FADE_TO_BLACK
	slateporttent_swapmons
	waitstate
	goto_if_eq VAR_RESULT, 1, SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom

SlateportCity_BattleTentCorridor_EventScript_ReadyFor2ndOpponent::
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent
	waitmessage
	return

SlateportCity_BattleTentCorridor_EventScript_ReadyFor3rdOpponent::
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent
	waitmessage
	return

SlateportCity_BattleTentCorridor_EventScript_PauseChallenge::
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait
	waitmessage
	slateporttent_save CHALLENGE_STATUS_PAUSED
	playse SE_SAVE
	waitse
	fadescreen FADE_TO_BLACK
	frontier_reset
	end

SlateportCity_BattleTentCorridor_EventScript_ResumeChallenge::
	special SavePlayerParty
	factory_setparties 0
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent

SlateportCity_BattleTentCorridor_Movement_PlayerEnter:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SlateportCity_BattleTentCorridor_Movement_PlayerExit:
	walk_up
	walk_up
	set_invisible
	step_end

SlateportCity_BattleTentCorridor_Movement_AttendantEnter:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

SlateportCity_BattleTentCorridor_Movement_AttendantExit:
	walk_up
	set_invisible
	step_end

@ Leftover text from when this was a Contest Hall in R/S
@ Unused
SlateportCity_ContestHall_Text_AdviceForContests:
#if GERMAN
	.string "Möchtest du einen kleinen Tipp für\n"
	.string "Wettbewerbe?\p"
	.string "Wenn du eine bestimmte Attacke nach\n"
	.string "einer anderen bestimmten Attacke\l"
	.string "zeigst, fällst du besonders auf.\p"
	.string "Wenn du weißt, was du tust, kannst du\n"
	.string "beim Ausdruck groß punkten.\p"
	.string "Natürlich könnten deine Gegner deinem\n"
	.string "Pokémon die Schau stehlen wollen.$"
#else
	.string "Want a tasty little bit of advice\n"
	.string "for CONTESTS?\p"
	.string "Using a certain move after another\n"
	.string "certain kind of move sometimes gets\l"
	.string "you extra attention.\p"
	.string "If you know what you're doing,\n"
	.string "you can score big in appeal.\p"
	.string "Of course, your opponents might try\n"
	.string "disrupting your POKéMON's showing.$"
#endif

@ Unused
SlateportCity_ContestHall_Text_MyPapaIsContestJudge:
#if GERMAN
	.string "My papa, he’s a Contest Judge.\p"
	.string "I wonder what I should be when I\n"
	.string "grow up, a Judge or a Gym Leader?$"
#else
	.string "My papa, he's a CONTEST JUDGE.\p"
	.string "I wonder what I should be when I\n"
	.string "grow up, a JUDGE or a GYM LEADER?$"
#endif

@ Unused
SlateportCity_ContestHall_Text_ImLikeMajorlyCheesed:
#if GERMAN
	.string "Hey, Mann, ich bin voll sauer, weißt du.\n"
	.string "Ich wollte doch nur wissen, warum mein\l"
	.string "Pokémon nie gewinnt, weißt du, hey?\p"
	.string "Also, ich hab dem Juror mal meine\n"
	.string "Meinung gesagt, kostet ja nichts.\p"
	.string "Und der hört mir nicht mal zu, hey!\n"
	.string "Voll die Enttäuschung, Mann!\p"
	.string "Hey, du da! Halt die Luft an, ja?\n"
	.string "Und jetzt nimm das!$"
#else
	.string "Hey, man, I'm like majorly cheesed,\n"
	.string "you know. Like, you know, I just\l"
	.string "wanted to know why my POKéMON\l"
	.string "never won, you know, like, hey?\p"
	.string "So, like, I gave the JUDGE my two\n"
	.string "cents, you know, they're free.\p"
	.string "And he wouldn't hear me out, like, hey!\n"
	.string "So, like, total bummer, man!\p"
	.string "Hey, like, you! Zip it, you know?\n"
	.string "Just, you know, take this!$"
#endif

@ Unused
SlateportCity_ContestHall_Text_ExplainTorment:
#if GERMAN
	.string "Das ist die TM41, weißt du?\n"
	.string "Hey, das ist Folterknecht, sag ich dir.\p"
	.string "Der Gegner wird so daran gehindert, eine\n"
	.string "Attacke zweimal hintereinander\l"
	.string "auszuführen.\p"
	.string "Aber nun hör mir gut zu. Ich würde nie\n"
	.string "Folterknecht gegen dich einsetzen.$"
#else
	.string "That's, like, TM41, you know?\n"
	.string "Hey, it's TORMENT, you hearing me?\p"
	.string "Like, it won't let the other guy\n"
	.string "use the same move twice in a row, see?\p"
	.string "Hey, now, you listen here, like,\n"
	.string "I'm not laying a torment on you!$"
#endif

@ Unused
SlateportCity_ContestHall_Text_MCStepUpTakePartInContest:
#if GERMAN
	.string "MC: Oh, sieh an, sieh an!\n"
	.string "Ist das nicht ein prächtiges Pokémon?\p"
	.string "Bitte! Tritt näher und nimm an unseren\n"
	.string "herrlichen Wettbewerben teil!\p"
	.string "Du wirst dich gut schlagen! Ganz\n"
	.string "sicher! Mein Auge täuscht mich nie!$"
#else
	.string "MC: Oh, my, my!\n"
	.string "Now isn't that a dandy of a POKéMON?\p"
	.string "Please! Do step right up and take\n"
	.string "part in our splendid CONTESTS!\p"
	.string "You'll do well! I'm sure of it!\n"
	.string "My eyes have never failed me!$"
#endif

@ Unused
SlateportCity_ContestHall_Text_JudgeWouldntDoToMissContest:
#if GERMAN
	.string "Juror: Hallo, sei gegrüßt!\n"
	.string "Du bist also ein Trainer!\p"
	.string "Dann darfst du dir einen Pokémon-\n"
	.string "Wettbewerb auf keinen Fall entgehen\l"
	.string "lassen!\p"
	.string "Hol dir in Wiesenflur einen Wettbe-\n"
	.string "werbspass und nimm jederzeit teil!$"
#else
	.string "JUDGE: Well, hello there!\n"
	.string "I see that you're a TRAINER!\p"
	.string "Then, it just wouldn't do for you\n"
	.string "to miss a POKéMON CONTEST!\p"
	.string "Get a CONTEST PASS in VERDANTURF\n"
	.string "CITY and enter anytime!$"
#endif

@ Unused
SlateportCity_ContestHall_Text_ItsAppealTime:
#if GERMAN
	.string "It’s appeal time!\n"
	.string "What should I lead with?$"
#else
	.string "It's appeal time!\n"
	.string "What should I lead with?$"
#endif

@ Unused
SlateportCity_ContestHall_Text_DidntPayAttentionToAppeal:
#if GERMAN
	.string "Sie haben dem Ausdruck meines\n"
	.string "Pokémon kaum Beachtung geschenkt…\p"
	.string "Pah, dieser Juror erkennt etwas Gutes\n"
	.string "nicht, wenn er es vor sich hat.$"
#else
	.string "They didn't pay much attention to\n"
	.string "my POKéMON's appeal…\p"
	.string "Humph, that JUDGE, he doesn't know\n"
	.string "a good thing when he sees it.$"
#endif

@ Unused
SlateportCity_ContestHall_Text_RewardWithSageAdvice:
#if GERMAN
	.string "Oh, hallo! Du musst ein echter Fan\n"
	.string "sein, so nah am Geschehen.\p"
	.string "Für so viel Begeisterung habe ich\n"
	.string "einen weisen Rat für dich.\p"
	.string "Wenn eine Attacke richtig gut ankommt,\n"
	.string "gerät das Publikum in Aufregung.\p"
	.string "Und das Pokémon, das seinen Ausdruck\n"
	.string "genau dann zeigt…\p"
	.string "Nun, da muss doch etwas Gutes\n"
	.string "geschehen!$"
#else
	.string "Oh, hi! You must be a serious fan to get\n"
	.string "this close to the action.\p"
	.string "I'll reward your enthusiasm with\n"
	.string "this sage advice.\p"
	.string "If a move goes over really well,\n"
	.string "the audience will get excited.\p"
	.string "The POKéMON that makes its appeal\n"
	.string "right when everyone's excited…\p"
	.string "Well, you'd think something good has\n"
	.string "to happen!$"
#endif

@ Unused
SlateportCity_ContestHall_Text_MoreFreakedOutThanMon:
#if GERMAN
	.string "Ich schaffe das nicht! Ich bin noch\n"
	.string "aufgeregter als mein Pokémon.\p"
	.string "Ich zittere und mein Herz rast!$"
#else
	.string "I can't do this! I'm more freaked out\n"
	.string "than my POKéMON.\p"
	.string "I'm shivering and my heart is racing!$"
#endif

@ Unused
SlateportCity_ContestHall_Text_BattleAndContestAlike:
#if GERMAN
	.string "Ein Kampf und ein Wettbewerb sind\n"
	.string "nicht dasselbe, aber doch ähnlich.\p"
	.string "Du musst hart arbeiten und an die\n"
	.string "Pokémon glauben, die du aufgezogen\l"
	.string "hast.$"
#else
	.string "A battle and a CONTEST aren't the\n"
	.string "same, but they are alike, too.\p"
	.string "You need to work hard and believe\n"
	.string "in the POKéMON you've raised.$"
#endif

@ Unused
SlateportCity_ContestHall_Text_MonLooksOnTopOfGame:
#if GERMAN
	.string "Dieses Pokémon ist gut in Form, was?\p"
	.string "Ein Pokémon, das im zweiten Durchlauf\n"
	.string "gut abschneidet, wirkt beim Ausdruck\l"
	.string "gelassener.$"
#else
	.string "That POKéMON looks like it's on top\n"
	.string "of its game, huh?\p"
	.string "A POKéMON that does good in the\n"
	.string "secondary judging seems to be more\l"
	.string "relaxed when it's doing appeals.$"
#endif

@ Unused
SlateportCity_ContestHall_Text_MyMonBetterThanThatLot:
#if GERMAN
	.string "Schau dir dieses traurige Bild an!\p"
	.string "Hah, mein Pokémon ist eindeutig besser\n"
	.string "als diese Truppe!$"
#else
	.string "Will you look at that sorry sight?\p"
	.string "Heh, my POKéMON's absolutely better\n"
	.string "than that lot!$"
#endif

@ Unused
SlateportCity_ContestHall_Text_GetUrgeToMoveWithMon:
#if GERMAN
	.string "Bekommst du nicht auch Lust, dich mit\n"
	.string "den Pokémon zu bewegen, wenn sie einen\l"
	.string "schwungvollen Ausdruck zeigen?$"
#else
	.string "Don't you get the urge to move with\n"
	.string "POKéMON if they're putting on an\l"
	.string "energetic appeal?$"
#endif

@ Unused
SlateportCity_ContestHall_Text_HyperRankStage:
#if GERMAN
	.string "Pokémon Contests\n"
	.string "Hyper Rank Stage!$"
#else
	.string "POKéMON CONTESTS\n"
	.string "HYPER RANK STAGE!$"
#endif

