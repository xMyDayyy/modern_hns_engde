LilycoveCity_MoveDeletersHouse_MapScripts::
	.byte 0

LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter::
	lockall
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
	chooseboxmon SELECT_PC_MON_MOVE_DELETER
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
	special GetNumMovesSelectedMonHas
	goto_if_eq VAR_RESULT, 1, LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	special BufferMoveDeleterNicknameAndMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove::
	special IsLastMonThatKnowsSurf
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove::
	special BufferMoveDeleterNicknameAndMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves::
	msgbox LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain::
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf::
	special BufferMoveDeleterNicknameAndMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove:
#if GERMAN
	.string "Äh… Oh, ja. Ich bin der\n"
	.string "Attacken-Verlerner. \p"
	.string "Ich sorge dafür, dass die Pokémon ihre\n"
	.string "Attacken vergessen.\p"
	.string "Möchtest du, dass ich dir helfe?$"
#else
	.string "Uh…\n"
	.string "Oh, yes, I'm the MOVE DELETER.\p"
	.string "I can make POKéMON forget their moves.\p"
	.string "Would you like me to do that?$"
#endif

LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget:
#if GERMAN
	.string "Welches Pokémon soll eine Attacke\n"
	.string "vergessen?$"
#else
	.string "Which POKéMON should forget a move?$"
#endif

LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten:
#if GERMAN
	.string "Welche Attacke soll vergessen werden?$"
#else
	.string "Which move should be forgotten?$"
#endif

LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove:
#if GERMAN
	.string "{STR_VAR_1} kennt scheinbar nur eine\n"
	.string "einzige Attacke…$"
#else
	.string "{STR_VAR_1} knows only one move\n"
	.string "so it can't be forgotten…$"
#endif

LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten:
#if GERMAN
	.string "Hm! {STR_VAR_2} von {STR_VAR_1}?\n"
	.string "Diese Attacke soll vergessen werden?$"
#else
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "That move should be forgotten?$"
#endif

LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove:
#if GERMAN
	.string "Das klappte doch perfekt!\p"
	.string "{STR_VAR_1} hat {STR_VAR_2} komplett\n"
	.string "vergessen.$"
#else
	.string "It worked to perfection!\p"
	.string "{STR_VAR_1} has forgotten\n"
	.string "{STR_VAR_2} completely.$"
#endif

LilycoveCity_MoveDeletersHouse_Text_ComeAgain:
#if GERMAN
	.string "Komm wieder, wenn es andere Attacken\n"
	.string "gibt, die vergessen werden sollen.$"
#else
	.string "Come again if there are moves that\n"
	.string "need to be forgotten.$"
#endif

LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves:
#if GERMAN
	.string "Was? Ein Ei kennt doch keine Attacken!$"
#else
	.string "What?\n"
	.string "No EGG should know any moves.$"
#endif

LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf:
#if GERMAN
	.string "Hm!\p"
	.string "Dein {STR_VAR_1} möchte Surfer nicht\n"
	.string "vergessen.$"
#else
	.string "Hm!\p"
	.string "Your {STR_VAR_1} doesn't seem willing\n"
	.string "to forget SURF.$"
#endif

