BlackthornCity_House3_hns_MapScripts::
	.byte 0

BlackthornCity_MoveDeletersHouse_EventScript_MoveDeleter::
	lockall
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox BlackthornCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BlackthornCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	case NO, BlackthornCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
	msgbox BlackthornCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BlackthornCity_MoveDeletersHouse_EventScript_ComeAgain
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, BlackthornCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
	special GetNumMovesSelectedMonHas
	goto_if_eq VAR_RESULT, 1, BlackthornCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
	msgbox BlackthornCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, BlackthornCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	special BufferMoveDeleterNicknameAndMove
	msgbox BlackthornCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BlackthornCity_MoveDeletersHouse_EventScript_TryForgetMove
	case NO, BlackthornCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_TryForgetMove::
	special IsLastMonThatKnowsSurf
	goto_if_eq VAR_RESULT, TRUE, BlackthornCity_MoveDeletersHouse_EventScript_LastMonWithSurf
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox BlackthornCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove::
	special BufferMoveDeleterNicknameAndMove
	msgbox BlackthornCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_EggCantForgetMoves::
	msgbox BlackthornCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_ComeAgain::
	msgbox BlackthornCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_MoveDeletersHouse_EventScript_LastMonWithSurf::
	special BufferMoveDeleterNicknameAndMove
	msgbox BlackthornCity_MoveDeletersHouse_Text_CantForgetSurf, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove:
#if GERMAN
	.string "Äh… Oh, ja, ich bin der Attacken-\n"
	.string "verlerner.\p"
	.string "Ich kann Pokémon ihre Attacken\n"
	.string "vergessen lassen.\p"
	.string "Möchtest du das?$"
#else
	.string "Uh…\n"
	.string "Oh, yes, I'm the MOVE DELETER.\p"
	.string "I can make POKéMON forget their moves.\p"
	.string "Would you like me to do that?$"
#endif

BlackthornCity_MoveDeletersHouse_Text_WhichMonShouldForget:
#if GERMAN
	.string "Welches Pokémon soll eine Attacke\n"
	.string "vergessen?$"
#else
	.string "Which POKéMON should forget a move?$"
#endif

BlackthornCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten:
#if GERMAN
	.string "Welche Attacke soll vergessen\n"
	.string "werden?$"
#else
	.string "Which move should be forgotten?$"
#endif

BlackthornCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove:
#if GERMAN
	.string "{STR_VAR_1} kennt scheinbar nur eine\n"
	.string "einzige Attacke…$"
#else
	.string "{STR_VAR_1} knows only one move\n"
	.string "so it can't be forgotten…$"
#endif

BlackthornCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten:
#if GERMAN
	.string "Hm! {STR_VAR_2} von {STR_VAR_1}?\n"
	.string "Diese Attacke soll vergessen werden?$"
#else
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "That move should be forgotten?$"
#endif

BlackthornCity_MoveDeletersHouse_Text_MonHasForgottenMove:
#if GERMAN
	.string "Perfekt gelungen!\p"
	.string "{STR_VAR_1} hat\n"
	.string "{STR_VAR_2} komplett vergessen.$"
#else
	.string "It worked to perfection!\p"
	.string "{STR_VAR_1} has forgotten\n"
	.string "{STR_VAR_2} completely.$"
#endif

BlackthornCity_MoveDeletersHouse_Text_ComeAgain:
#if GERMAN
	.string "Komm wieder, wenn es Attacken gibt,\n"
	.string "die vergessen werden sollen.$"
#else
	.string "Come again if there are moves that\n"
	.string "need to be forgotten.$"
#endif

BlackthornCity_MoveDeletersHouse_Text_EggCantForgetMoves:
#if GERMAN
	.string "Was?\n"
	.string "Ein Ei kennt doch keine Attacken!$"
#else
	.string "What?\n"
	.string "No EGG should know any moves.$"
#endif

BlackthornCity_MoveDeletersHouse_Text_CantForgetSurf:
#if GERMAN
	.string "Hm!\p"
	.string "Dein {STR_VAR_1} scheint Surfer\n"
	.string "nicht vergessen zu wollen.$"
#else
	.string "Hm!\p"
	.string "Your {STR_VAR_1} doesn't seem willing\n"
	.string "to forget SURF.$"
#endif

BlackthornCity_MoveRelearnersHouse_EventScript_MoveRelearner::
	lockall
	faceplayer
	specialvar VAR_RESULT, IsRandomMovesActivated
	goto_if_eq VAR_RESULT, TRUE, BlackthornCity_MoveRelearnersHouse_EventScript_Randomizer
	goto_if_set FLAG_TEMP_1, BlackthornCity_MoveRelearnersHouse_EventScript_AskTeachMove
	msgbox BlackthornCity_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto BlackthornCity_MoveRelearnersHouse_EventScript_AskTeachMove
	end

BlackthornCity_MoveRelearnersHouse_EventScript_AskTeachMove::
	checkitem ITEM_HEART_SCALE
	goto_if_eq VAR_RESULT, FALSE, BlackthornCity_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	msgbox BlackthornCity_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BlackthornCity_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMon
	end

BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMon::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BlackthornCity_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, BlackthornCity_MoveRelearnersHouse_EventScript_CantTeachEgg
	special HasMovesToRelearn
	goto_if_eq VAR_RESULT, FALSE, BlackthornCity_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
	goto BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMove
	end

BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMove::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMon
	msgbox BlackthornCity_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	goto BlackthornCity_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	end

BlackthornCity_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMon
	end

BlackthornCity_MoveRelearnersHouse_EventScript_CantTeachEgg::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto BlackthornCity_MoveRelearnersHouse_EventScript_ChooseMon
	end

BlackthornCity_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

BlackthornCity_MoveRelearnersHouse_EventScript_Randomizer::
	msgbox BlackthornCity_MoveRelearnersHouse_Text_SorryCantHelp, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

BlackthornCity_MoveRelearnersHouse_Text_SorryCantHelp:
#if GERMAN
	.string "Sorry, ich kann dir nicht helfen.$"
#else
	.string "Sorry, I can't help you.$"
#endif

BlackthornCity_MoveRelearnersHouse_Text_ImTheMoveTutor:
#if GERMAN
	.string "Ich bin der Attacken-Tutor.\p"
	.string "Ich kenne alle Attacken, die Pokémon\n"
	.string "lernen, jede einzelne, und ich kann\l"
	.string "Pokémon diese Attacken beibringen.\p"
	.string "Ich kann einem deiner Pokémon eine\n"
	.string "Attacke beibringen, wenn du möchtest.\p"
	.string "Ich tue es für eine Herzschuppe.\n"
	.string "Die sammle ich gerade.$"
#else
	.string "I'm the MOVE TUTOR.\p"
	.string "I know all the moves that POKéMON\n"
	.string "learn--every one of them--and I can\l"
	.string "teach POKéMON those moves.\p"
	.string "I can teach a move to a POKéMON\n"
	.string "of yours if you'd like.\p"
	.string "I'll do it for a HEART SCALE.\n"
	.string "I'm collecting those now.$"
#endif

BlackthornCity_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
#if GERMAN
	.string "Oh! Das ist es! Das ist ehrlich und\n"
	.string "wahrhaftig eine Herzschuppe!\l"
	.string "Lass mich raten…\p"
	.string "Ich soll einem Pokémon eine\n"
	.string "alte Attacke beibringen?!?$"
#else
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness HEART SCALE!\p"
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"
#endif

BlackthornCity_MoveRelearnersHouse_Text_TutorWhichMon:
#if GERMAN
	.string "Welches Pokémon soll sich an\n"
	.string "eine alte Attacke erinnern?$"
#else
	.string "Which POKéMON needs tutoring?$"
#endif

BlackthornCity_MoveRelearnersHouse_Text_TeachWhichMove:
#if GERMAN
	.string "Welchem deiner Pokémon soll ich\n"
	.string "die Attacke beibringen?$"
#else
	.string "Which move should I teach?$"
#endif

BlackthornCity_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
#if GERMAN
	.string "Tut mir leid…\p"
	.string "Anscheinend habe ich keine Attacke,\n"
	.string "die ich diesem Pokémon beibringen\l"
	.string "kann.$"
#else
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that POKéMON.$"
#endif

BlackthornCity_MoveRelearnersHouse_Text_HandedOverHeartScale:
#if GERMAN
	.string "{PLAYER} gibt im Austausch dafür\n"
	.string "eine Herzschuppe ab.$"
#else
	.string "{PLAYER} handed over one HEART SCALE\n"
	.string "in exchange.$"
#endif

BlackthornCity_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
#if GERMAN
	.string "Komm mit einer Herzschuppe wieder, wenn\n"
	.string "ich einem deiner Pokémon mit einer alten\l"
	.string "Attacke auf die Sprünge helfen soll!$"
#else
	.string "If your POKéMON need to learn a move,\n"
	.string "come back with a HEART SCALE.$"
#endif

BlackthornCity_MoveRelearnersHouse_Text_CantTeachEgg:
#if GERMAN
	.string "Hm? Es gibt keine einzige Attacke,\n"
	.string "die ich einem Ei beibringen kann.$"
#else
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an EGG.$"
#endif



