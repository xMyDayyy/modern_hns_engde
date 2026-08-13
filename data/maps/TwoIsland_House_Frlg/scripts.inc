.equ CHECKED_MUSHROOMS,  FLAG_TEMP_1
.equ HAS_BIG_MUSHROOM,   FLAG_TEMP_2
.equ HAS_TINY_MUSHROOMS, FLAG_TEMP_3
.equ HAS_BOTH_MUSHROOMS, FLAG_TEMP_4

TwoIsland_House_Frlg_MapScripts::
	.byte 0

TwoIsland_House_EventScript_MoveManiac::
	lock
	faceplayer
	clearflag HAS_BIG_MUSHROOM
	clearflag HAS_TINY_MUSHROOMS
	clearflag HAS_BOTH_MUSHROOMS
	goto_if_set CHECKED_MUSHROOMS, TwoIsland_House_EventScript_CheckPlayerHasMushrooms
	msgbox TwoIsland_House_Text_TeachMonMoveForMushroom
	setflag CHECKED_MUSHROOMS
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms
	end

TwoIsland_House_EventScript_CheckPlayerHasMushrooms::
	checkitem ITEM_BIG_MUSHROOM
	call_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_SetHasBigMushroom
	checkitem ITEM_TINY_MUSHROOM, 2
	call_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_SetHasTinyMushrooms
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_CheckAlsoHasBigMushroom
	goto TwoIsland_House_EventScript_EndTutorMove
	end

TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms::
	call_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_SetHasBothMushrooms
	goto TwoIsland_House_EventScript_AskTutorMon
	end

TwoIsland_House_EventScript_CheckAlsoHasBigMushroom::
	call_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_SetHasBothMushrooms
	goto TwoIsland_House_EventScript_AskTutorMon
	end

TwoIsland_House_EventScript_AskTutorMon::
	msgbox TwoIsland_House_Text_WantMeToTeachMove, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, TwoIsland_House_EventScript_EndTutorMove
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	end

TwoIsland_House_EventScript_ChooseMonToTutor::
	msgbox TwoIsland_House_Text_TutorWhichMon
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, TwoIsland_House_EventScript_EndTutorMove
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_CantTutorEgg
	goto_if_eq VAR_0x8005, 0, TwoIsland_House_EventScript_NoMoveToTutorMon
	goto TwoIsland_House_EventScript_ChooseMoveToTeach
	end

TwoIsland_House_EventScript_ChooseMoveToTeach::
	msgbox TwoIsland_House_Text_TeachWhichMove
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, TwoIsland_House_EventScript_ChooseMonToTutor
	goto_if_set HAS_BOTH_MUSHROOMS, TwoIsland_House_EventScript_ChooseMushroom
	goto_if_set HAS_BIG_MUSHROOM, TwoIsland_House_EventScript_GiveBigMushroom
	goto_if_set HAS_TINY_MUSHROOMS, TwoIsland_House_EventScript_GiveTinyMushrooms
	end

TwoIsland_House_EventScript_GiveBigMushroom::
	removeitem ITEM_BIG_MUSHROOM
	textcolor NPC_TEXT_COLOR_NEUTRAL
	msgbox TwoIsland_House_Text_HandedOverOneBigMushroom
	call EventScript_RestorePrevTextColor
	goto TwoIsland_House_EventScript_EndTutorMove
	end

TwoIsland_House_EventScript_GiveTinyMushrooms::
	removeitem ITEM_TINY_MUSHROOM, 2
	textcolor NPC_TEXT_COLOR_NEUTRAL
	msgbox TwoIsland_House_Text_HandedOverTwoTinyMushrooms
	call EventScript_RestorePrevTextColor
	goto TwoIsland_House_EventScript_EndTutorMove
	end

TwoIsland_House_EventScript_ChooseMushroom::
	message TwoIsland_House_Text_IllNeedMushroomOrTwo
	waitmessage
	multichoice 0, 0, MULTI_MUSHROOMS, TRUE
	switch VAR_RESULT
	case 0, TwoIsland_House_EventScript_GiveTinyMushrooms
	case 1, TwoIsland_House_EventScript_GiveBigMushroom
	end

TwoIsland_House_EventScript_NoMoveToTutorMon::
	msgbox TwoIsland_House_Text_NoMoveICanTeachThatMon
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	end

TwoIsland_House_EventScript_CantTutorEgg::
	msgbox TwoIsland_House_Text_CantTeachAnEgg
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	end

TwoIsland_House_EventScript_EndTutorMove::
	msgbox TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove
	release
	end

TwoIsland_House_EventScript_SetHasBigMushroom::
	setflag HAS_BIG_MUSHROOM
	return

TwoIsland_House_EventScript_SetHasTinyMushrooms::
	setflag HAS_TINY_MUSHROOMS
	return

TwoIsland_House_EventScript_SetHasBothMushrooms::
	setflag HAS_BOTH_MUSHROOMS
	return

TwoIsland_House_Text_TeachMonMoveForMushroom::
#if GERMAN
	.string "Ich bin der Pokémon-Attacken-\n"
	.string "Maniac!\p"
	.string "Ich kenne jede Attacke, die Pokémon\n"
	.string "beim Levelanstieg erlernen.\l"
	.string "Ich bin auch ein Pilzsammler.\p"
	.string "Gib mir zwei Minipilze oder einen\n"
	.string "Riesenpilz.\p"
	.string "Dafür bringe ich einem deiner\n"
	.string "Pokémon eine Attacke bei.$"
#else
	.string "I'm the POKéMON MOVE MANIAC.\p"
	.string "I know every single move that\n"
	.string "POKéMON learn growing up.\p"
	.string "I'm also a mushroom maniac.\p"
	.string "Bring me two TINYMUSHROOMS,\n"
	.string "or one BIG MUSHROOM.\p"
	.string "If you do that for me, I'll teach\n"
	.string "a move to one POKéMON.$"
#endif

TwoIsland_House_Text_WantMeToTeachMove::
#if GERMAN
	.string "Schnief, schnief…\n"
	.string "Hm! Du riechst nach Pilzen!\p"
	.string "Soll ich einem deiner Pokémon\n"
	.string "eine Attacke beibringen?$"
#else
	.string "Sniff, sniff…\n"
	.string "Hm! You smell of MUSHROOMS!\p"
	.string "Do you want me to teach a move\n"
	.string "to a POKéMON of yours?$"
#endif

TwoIsland_House_Text_TutorWhichMon::
#if GERMAN
	.string "Welches Pokémon soll sie lernen?$"
#else
	.string "Which POKéMON needs tutoring?$"
#endif

TwoIsland_House_Text_TeachWhichMove::
#if GERMAN
	.string "Welche Attacke soll ich es lehren?$"
#else
	.string "Which move should I teach?$"
#endif

TwoIsland_House_Text_NoMoveICanTeachThatMon::
#if GERMAN
	.string "Tut mir Leid...\p"
	.string "Scheinbar gibt es keine Attacke, die ich\n"
	.string "diesem Pokémon beibringen kann.$"
#else
	.string "Sorry…\p"
	.string "It doesn't appear as if I have a\n"
	.string "move I can teach that POKéMON.$"
#endif

TwoIsland_House_Text_IllNeedMushroomOrTwo::
#if GERMAN
	.string "Gib mir einen oder zwei Pilze!\n"
	.string "Was willst du mir geben?$"
#else
	.string "Then, I'll need a MUSHROOM or two.\n"
	.string "What are you going to give me?$"
#endif

TwoIsland_House_Text_HandedOverTwoTinyMushrooms::
#if GERMAN
	.string "{PLAYER} übergibt zwei Minipilze.$"
#else
	.string "{PLAYER} handed over two\n"
	.string "TINYMUSHROOMS in exchange.$"
#endif

TwoIsland_House_Text_HandedOverOneBigMushroom::
#if GERMAN
	.string "{PLAYER} übergibt einen Riesenpilz.$"
#else
	.string "{PLAYER} handed over one\n"
	.string "BIG MUSHROOM in exchange.$"
#endif

TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove::
#if GERMAN
	.string "Falls deine Pokémon eine Attacke lernen\n"
	.string "sollen, musst du mir einen oder zwei\l"
	.string "Pilze geben!$"
#else
	.string "If your POKéMON need to learn a\n"
	.string "move, I need a MUSHROOM or two.$"
#endif

TwoIsland_House_Text_CantTeachAnEgg::
#if GERMAN
	.string "Bitte? Ich kann einem Ei nicht eine\n"
	.string "einzige Attacke beibringen!$"
#else
	.string "Hunh? There isn't a single move\n"
	.string "that I can teach an EGG.$"
#endif

