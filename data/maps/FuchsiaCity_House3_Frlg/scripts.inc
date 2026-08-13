FuchsiaCity_House3_Frlg_MapScripts::
	.byte 0

FuchsiaCity_House3_EventScript_MoveDeleter::
	lock
	faceplayer
	msgbox FuchsiaCity_House3_Text_WouldYouLikeToForgetMove, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
	end

FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter::
	msgbox FuchsiaCity_House3_Text_WhichMonShouldForgetMove
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, FuchsiaCity_House3_EventScript_CancelForgetMove
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, FuchsiaCity_House3_EventScript_CantForgetMoveEgg
	special GetNumMovesSelectedMonHas
	goto_if_eq VAR_RESULT, 1, FuchsiaCity_House3_EventScript_CantForgetOnlyMove
	msgbox FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
	special BufferMoveDeleterNicknameAndMove
	msgbox FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House3_EventScript_ForgetMove
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
	end

FuchsiaCity_House3_EventScript_ForgetMove::
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely
	release
	end

FuchsiaCity_House3_EventScript_CantForgetOnlyMove::
	special BufferMoveDeleterNicknameAndMove
	msgbox FuchsiaCity_House3_Text_MonOnlyKnowsOneMove
	release
	end

FuchsiaCity_House3_EventScript_CantForgetMoveEgg::
	msgbox FuchsiaCity_House3_Text_NoEggShouldKnowMoves
	release
	end

FuchsiaCity_House3_EventScript_CancelForgetMove::
	msgbox FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves
	release
	end

FuchsiaCity_House3_Text_WouldYouLikeToForgetMove::
#if GERMAN
	.string "Äh…\n"
	.string "Oh, ja. Ich bin der Attacken-Verlerner.\p"
	.string "Ich sorge dafür, dass die Pokémon ihre\n"
	.string "Attacken vergessen.\p"
	.string "Möchtest du, dass ich dir helfe?$"
#else
	.string "Uh…\n"
	.string "Oh, yes, I'm the MOVE DELETER.\p"
	.string "I can make POKéMON forget their\n"
	.string "moves.\p"
	.string "Would you like me to do that?$"
#endif

FuchsiaCity_House3_Text_WhichMonShouldForgetMove::
#if GERMAN
	.string "Welches Pokémon soll eine Attacke\n"
	.string "vergessen?$"
#else
	.string "Which POKéMON should forget a\n"
	.string "move?$"
#endif

FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten::
#if GERMAN
	.string "Welche Attacke soll vergessen\n"
	.string "werden?$"
#else
	.string "Which move should be forgotten?$"
#endif

FuchsiaCity_House3_Text_MonOnlyKnowsOneMove::
#if GERMAN
	.string "{STR_VAR_1} kennt scheinbar nur eine\n"
	.string "einzige Attacke...$"
#else
	.string "{STR_VAR_1} seems to know only one\n"
	.string "move…$"
#endif

FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten::
#if GERMAN
	.string "Hm! {STR_VAR_1} von {STR_VAR_2}?\n"
	.string "Diese Attacke soll vergessen werden?$"
#else
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "That move should be forgotten?$"
#endif

FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely::
#if GERMAN
	.string "Das klappte doch perfekt!\p"
	.string "{STR_VAR_1} hat {STR_VAR_2}\n"
	.string "komplett vergessen.$"
#else
	.string "It worked to perfection!\p"
	.string "{STR_VAR_1} has forgotten\n"
	.string "{STR_VAR_2} completely.$"
#endif

FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves::
#if GERMAN
	.string "Komm wieder, wenn es andere Attacken\n"
	.string "gibt, die vergessen werden sollen.$"
#else
	.string "Come again if there are other\n"
	.string "moves to be forgotten.$"
#endif

FuchsiaCity_House3_Text_NoEggShouldKnowMoves::
#if GERMAN
	.string "Was?\n"
	.string "Ein Ei kennt doch keine Attacken!$"
#else
	.string "What?\n"
	.string "No EGG should know any moves.$"
#endif

