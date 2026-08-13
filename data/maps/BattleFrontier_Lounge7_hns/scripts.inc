BattleFrontier_Lounge7_hns_MapScripts::
	.byte 0

@special ChooseMonForMoveTutor
BattleFrontier_Lounge7_EventScript_LeftMoveTutor_hns::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor_hns
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro_hns, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_hns
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor_hns::
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_hns
	end

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_hns::
	message BattleFrontier_Lounge7_Text_TeachWhichMove_hns
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled_hns
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss_hns
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater_hns
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch_hns
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick_hns
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam_hns
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide_hns
	case 7, BattleFrontier_Lounge7_EventScript_Counter_hns
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave_hns
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance_hns
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	end

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_hns::
	message BattleFrontier_Lounge7_Text_TeachWhichMove_hns
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled_hns
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss_hns
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater_hns
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch_hns
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick_hns
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam_hns
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide_hns
	case 7, BattleFrontier_Lounge7_EventScript_Counter_hns
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave_hns
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance_hns
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	end

BattleFrontier_Lounge7_EventScript_Softboiled_hns::
	setvar VAR_0x8008, 16
	setvar VAR_0x8005, MOVE_SOFT_BOILED
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_SeismicToss_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_DreamEater_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_DREAM_EATER
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_MegaPunch_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_MegaKick_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_MEGA_KICK
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_BodySlam_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_BODY_SLAM
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_RockSlide_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_Counter_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_COUNTER
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_ThunderWave_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_SwordsDance_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_RightMoveTutor_hns::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor_hns
	msgbox BattleFrontier_Lounge7_Text_RightTutorIntro_hns, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_hns
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor_hns::
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_hns
	end

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_hns::
	message BattleFrontier_Lounge7_Text_TeachWhichMove_hns
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl_hns
	case 1, BattleFrontier_Lounge7_EventScript_Snore_hns
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap_hns
	case 3, BattleFrontier_Lounge7_EventScript_Swift_hns
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind_hns
	case 5, BattleFrontier_Lounge7_EventScript_Endure_hns
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp_hns
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch_hns
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch_hns
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch_hns
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	end

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_hns::
	message BattleFrontier_Lounge7_Text_TeachWhichMove_hns
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl_hns
	case 1, BattleFrontier_Lounge7_EventScript_Snore_hns
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap_hns
	case 3, BattleFrontier_Lounge7_EventScript_Swift_hns
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind_hns
	case 5, BattleFrontier_Lounge7_EventScript_Endure_hns
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp_hns
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch_hns
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch_hns
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch_hns
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	end

BattleFrontier_Lounge7_EventScript_DefenseCurl_hns::
	setvar VAR_0x8008, 16
	setvar VAR_0x8005, MOVE_DEFENSE_CURL
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_Snore_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_SNORE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_MudSlap_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_MUD_SLAP
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_Swift_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_SWIFT
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_IcyWind_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_Endure_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_ENDURE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_PsychUp_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_PSYCH_UP
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_IcePunch_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_ThunderPunch_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_FirePunch_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge7_EventScript_CancelChooseMon_hns_hns::
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo_hns, MSGBOX_DEFAULT
	release
	end

@ VAR_0x8008 is the price
@ VAR_TEMP_C is the scroll multichoice ID
@ VAR_TEMP_FRONTIER_TUTOR_SELECTION is the move selection
@ VAR_TEMP_FRONTIER_TUTOR_ID is which move tutor was spoken to
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints_hns, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge7_EventScript_ChooseNewMove_hns
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge7_EventScript_TeachTutorMove_hns
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove_hns
	end


BattleFrontier_Lounge7_EventScript_TeachTutorMove_hns::
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon_hns, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
	waitstate
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge7_EventScript_CancelChooseMon_hns_hns
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints_hns, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

BattleFrontier_Lounge7_EventScript_ChooseNewMove_hns::
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_hns
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 2, BattleFrontier_Lounge7_EventScript_ChooseNewElementalTutorMove
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_hns
	end

BattleFrontier_Lounge7_EventScript_Sailor_hns::
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge7_EventScript_Gentleman_hns::
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge7_EventScript_ElementalMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_3
	goto_if_set FLAG_MET_FRONTIER_ELEMENTAL_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetElementalTutor
	msgbox BattleFrontier_Lounge7_Text_ElementalTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_ELEMENTAL_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_ChooseElementalTutorMove
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetElementalTutor::
	msgbox BattleFrontier_Lounge7_Text_ElementalTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseElementalTutorMove
	end

BattleFrontier_Lounge7_EventScript_ChooseElementalTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMoveElemental
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 2
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_3
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_FrenzyPlant
	case 1, BattleFrontier_Lounge7_EventScript_BlastBurn
	case 2, BattleFrontier_Lounge7_EventScript_HydroCannon
	case 3, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns
	end

BattleFrontier_Lounge7_EventScript_ChooseNewElementalTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMoveElemental
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 2
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_3
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_FrenzyPlant
	case 1, BattleFrontier_Lounge7_EventScript_BlastBurn
	case 2, BattleFrontier_Lounge7_EventScript_HydroCannon
	case 3, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns
	end

BattleFrontier_Lounge7_EventScript_FrenzyPlant::
	setvar VAR_0x8008, 64
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_BlastBurn::
	setvar VAR_0x8008, 64
	setvar VAR_0x8005, MOVE_BLAST_BURN
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_HydroCannon::
	setvar VAR_0x8008, 64
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge7_EventScript_CancelChooseMon_hns::
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Lounge7_Text_LeftTutorIntro_hns:
#if GERMAN
	.string "Muahahahaha!\p"
	.string "Du wirst es mir wahrscheinlich nicht\n"
	.string "glauben, aber ich war eine starke\l"
	.string "Trainerin.\p"
	.string "Ich war die stärkste Schönheit, die es\n"
	.string "weit und breit gab!\p"
	.string "… … … … …\n"
	.string "… …\p"
	.string "Und?\n"
	.string "Glaubst du mir etwa nicht? Nein?\p"
	.string "Ich bin nicht so wie die Angeberin\n"
	.string "hier neben mir.\p"
	.string "Ich habe wirklich Talent!\p"
	.string "Das werde ich dir beweisen.\p"
	.string "Ich kann deinen Pokémon\n"
	.string "Spezialattacken beibringen, die auch\l"
	.string "noch niedlich sind. Aber das kostet eine\l"
	.string "Kleinigkeit. Dafür möchte ich von dir\l"
	.string "Gewinnpunkte haben.$"
#else
	.string "Buhahaha!\p"
	.string "You couldn't tell it from looking now,\n"
	.string "but I used to be one tough TRAINER.\p"
	.string "I had a reputation as the toughest\n"
	.string "BEAUTY around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What is it now?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that blowhard woman over\n"
	.string "there. I'm actually talented!\p"
	.string "Let me prove it to you.\n"
	.string "I can teach your POKéMON special and\l"
	.string "yet cute moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"
#endif

BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack_hns:
#if GERMAN
	.string "Muahahahaha!\p"
	.string "Soll ich deinen Pokémon ein paar\n"
	.string "hübsche Spezial-Attacken beibringen?$"
#else
	.string "Buhahaha!\p"
	.string "Are you back to learn special and\n"
	.string "yet cute POKéMON moves?$"
#endif

BattleFrontier_Lounge7_Text_TeachWhichMove_hns:
#if GERMAN
	.string "Schön, schön. Sehr gut. Welche\n"
	.string "Attacke soll ich ihnen beibringen?$"
#else
	.string "Fine, fine, look here!\n"
	.string "Which move should I teach?$"
#endif

BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints_hns:
#if GERMAN
	.string "Die Attacke {STR_VAR_1} soll es sein?\n"
	.string "Die kostet dich {STR_VAR_2} Gewinnpunkte.$"
#else
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"
#endif

BattleFrontier_Lounge7_Text_TeachMoveToWhichMon_hns:
#if GERMAN
	.string "Schön, schön. Und welchem Pokémon\n"
	.string "soll ich sie beibringen?$"
#else
	.string "Fine, fine, now pick the POKéMON\n"
	.string "I should teach the move to.$"
#endif

BattleFrontier_Lounge7_Text_HaventGotEnoughPoints_hns:
#if GERMAN
	.string "Was… Du hast ja gar\n"
	.string "nicht genug Gewinnpunkte!$"
#else
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"
#endif

BattleFrontier_Lounge7_Text_IllTakeBattlePoints_hns:
#if GERMAN
	.string "Siehst du nun, wie talentiert ich bin?\n"
	.string "Und nun hätte ich gerne deine\l"
	.string "Gewinnpunkte. Danke!$"
#else
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"
#endif

BattleFrontier_Lounge7_Text_YouDontWantTo_hns:
#if GERMAN
	.string "Was denn? Was denn?\n"
	.string "Du musst doch nicht gleich…\p"
	.string "Wenn du sehen willst, wie talentiert\n"
	.string "ich bin, dann komm wieder. Jederzeit!$"
#else
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"
#endif

BattleFrontier_Lounge7_Text_RightTutorIntro_hns:
#if GERMAN
	.string "Hihihihi!\p"
	.string "Auch wenn es schwer zu glauben ist: Ich\n"
	.string "war einmal eine grandiose Trainerin!\p"
	.string "Ich hatte den Ruf einer unschlagbaren\n"
	.string "Schwimmerin. Das ist wahr!\p"
	.string "… … … … …\n"
	.string "… …\p"
	.string "Wie bitte?\n"
	.string "Du glaubst mir nicht!\p"
	.string "Ich bin nicht so närrisch wie die da\n"
	.string "drüben. Ich habe wirklich Erfahrung!\p"
	.string "Das kann ich dir gerne beweisen!\n"
	.string "Ich kann deinen Pokémon starke und\l"
	.string "schöne Attacken beibringen.\p"
	.string "Aber das kostet dich etwas. Bring ich\n"
	.string "deinen Pokémon etwas bei, bekomme ich\l"
	.string "von dir Gewinnpunkte.$"
#else
	.string "Ihihihi!\p"
	.string "I know it's hard to see now, but I used\n"
	.string "to be one fantastic TRAINER.\p"
	.string "I had a reputation as the most\n"
	.string "invincible SWIMMER around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What's wrong?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that buffoonish woman over\n"
	.string "there. I'm actually experienced!\p"
	.string "I can prove it to you.\n"
	.string "I can teach your POKéMON hard and\l"
	.string "yet pretty moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"
#endif

BattleFrontier_Lounge7_Text_RightTutorWelcomeBack_hns:
#if GERMAN
	.string "Hihihihi!\p"
	.string "Ich soll deinen Pokémon starke und\n"
	.string "schöne Attacken beibringen?$"
#else
	.string "Ihihihi!\p"
	.string "Have you come to learn hard and\n"
	.string "yet pretty POKéMON moves?$"
#endif

BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong_hns:
#if GERMAN
	.string "Diese Damen dahinten, die beschimpfen\n"
	.string "sich ständig. Du denkst bestimmt, die\l"
	.string "verstehen sich überhaupt nicht.\p"
	.string "Aber in Wahrheit würde die eine keinen\n"
	.string "Schritt ohne die andere machen.$"
#else
	.string "Those ladies, the way they bad-mouth\n"
	.string "each other, you probably think that\l"
	.string "they don't get along.\p"
	.string "But if that were true, they wouldn't\n"
	.string "stay out here together, would they?$"
#endif

BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful_hns:
#if GERMAN
	.string "Als ich noch ein junger Spund, ein\n"
	.string "Teenager, war, waren diese Damen stark\l"
	.string "und wunderschön.\p"
	.string "Wir Trainer haben sie vergöttert.\p"
	.string "Und auch jetzt, im Alter, haben ihre\n"
	.string "Fähigkeiten nicht nachgelassen.\p"
	.string "Im Gegenteil: Ihre Pokémon-Attacken\n"
	.string "sind einfach vollkommen.\p"
	.string "Aber… Trotzdem denke ich…\p"
	.string "Die Zeit ist grausam…$"
#else
	.string "When I was just a wee YOUNGSTER,\n"
	.string "those ladies were strong and beautiful.\p"
	.string "They were idols among us TRAINERS.\p"
	.string "Even now, age hasn't dulled their\n"
	.string "abilities.\p"
	.string "In fact, their POKéMON moves have\n"
	.string "grown even more polished.\p"
	.string "But… For some reason, I can't help\n"
	.string "but feel this…\p"
	.string "Time is so cruel…$"
#endif

BattleFrontier_Lounge7_Text_SoftboiledDesc_hns::
#if GERMAN
	.string "Max. KP des Anwenders w. zur Hälfte\n"
	.string "aufgefüllt.$"
#else
	.string "Recovers up to\n"
	.string "half the user's\n"
	.string "maximum HP.$"
#endif

BattleFrontier_Lounge7_Text_SeismicTossDesc_hns::
#if GERMAN
	.string "Richtet Schaden gemäß Level d.\n"
	.string "Angreifers an.$"
#else
	.string "Inflicts damage\n"
	.string "identical to the\n"
	.string "user's level.$"
#endif

BattleFrontier_Lounge7_Text_DreamEaterDesc_hns::
#if GERMAN
	.string "Schlafendem Geg.\n"
	.string "wird halber Schaden abgezogen.$"
#else
	.string "Recovers half the\n"
	.string "damage inflicted\n"
	.string "on a sleeping foe.$"
#endif

BattleFrontier_Lounge7_Text_MegaPunchDesc_hns::
#if GERMAN
	.string "Ein unglaublich\n"
	.string "kräftiger Hieb.$"
#else
	.string "A strong punch\n"
	.string "thrown with\n"
	.string "incredible power.$"
#endif

BattleFrontier_Lounge7_Text_MegaKickDesc_hns::
#if GERMAN
	.string "Ein extrem\n"
	.string "heftiger Tritt.$"
#else
	.string "An extremely\n"
	.string "powerful kick with\n"
	.string "intense force.$"
#endif

BattleFrontier_Lounge7_Text_BodySlamDesc_hns::
#if GERMAN
	.string "Körper-Ramme, kann Paralyse\n"
	.string "hervorrufen.$"
#else
	.string "A full-body slam\n"
	.string "that may cause\n"
	.string "paralysis.$"
#endif

BattleFrontier_Lounge7_Text_RockSlideDesc_hns::
#if GERMAN
	.string "Schleudert Felsen. Verschreckt Gegner.$"
#else
	.string "Large boulders\n"
	.string "are hurled. May\n"
	.string "cause flinching.$"
#endif

BattleFrontier_Lounge7_Text_CounterDesc_hns::
#if GERMAN
	.string "Kontert phys.\n"
	.string "Treffer mit doppelter Kraft.$"
#else
	.string "Retaliates any\n"
	.string "physical hit with\n"
	.string "double the power.$"
#endif

BattleFrontier_Lounge7_Text_ThunderWaveDesc_hns::
#if GERMAN
	.string "Ein schwacher Stromstoß, der d.\n"
	.string "Gegner paralys.$"
#else
	.string "A weak jolt of\n"
	.string "electricity that\n"
	.string "paralyzes the foe.$"
#endif

BattleFrontier_Lounge7_Text_SwordsDanceDesc_hns::
#if GERMAN
	.string "Erhöht den Angriffs-Wert drastisch.$"
#else
	.string "A fighting dance\n"
	.string "that sharply\n"
	.string "raises ATTACK.$"
#endif

BattleFrontier_Lounge7_Text_DefenseCurlDesc_hns::
#if GERMAN
	.string "Verbirgt Schwäche durch Einrollen,\n"
	.string "Vert.-Wert hoch.$"
#else
	.string "Curls up to con-\n"
	.string "ceal weak spots\n"
	.string "and raise DEFENSE.$"
#endif

BattleFrontier_Lounge7_Text_SnoreDesc_hns::
#if GERMAN
	.string "Laute Attacke.\n"
	.string "Kann nur im Schlaf benutzt werden.$"
#else
	.string "A loud attack\n"
	.string "that can be used\n"
	.string "only while asleep.$"
#endif

BattleFrontier_Lounge7_Text_MudSlapDesc_hns::
#if GERMAN
	.string "Wirft Gegner Matsch i. Gesicht.\n"
	.string "Genauigkeit sinkt.$"
#else
	.string "Hurls mud in the\n"
	.string "foe's face to re-\n"
	.string "duce its accuracy.$"
#endif

BattleFrontier_Lounge7_Text_SwiftDesc_hns::
#if GERMAN
	.string "Verschießt sternförmige Strahlen.\n"
	.string "Treffergarantie!$"
#else
	.string "Sprays star-\n"
	.string "shaped rays\n"
	.string "that never miss.$"
#endif

BattleFrontier_Lounge7_Text_IcyWindDesc_hns::
#if GERMAN
	.string "Eis-Attacke, die den INIT.-Wert d.\n"
	.string "Gegners senkt.$"
#else
	.string "A chilling attack\n"
	.string "that lowers the\n"
	.string "foe's SPEED.$"
#endif

BattleFrontier_Lounge7_Text_EndureDesc_hns::
#if GERMAN
	.string "Hält jed. Attacke 1 Runde stand.\n"
	.string "1 KP bleibt stets.$"
#else
	.string "Endures any at-\n"
	.string "tack for 1 turn,\n"
	.string "leaving 1HP.$"
#endif

BattleFrontier_Lounge7_Text_PsychUpDesc_hns::
#if GERMAN
	.string "Kopiert Effekte d.\n"
	.string "Gegners u. gibt sie dem Angreifer.$"
#else
	.string "Copies the foe's\n"
	.string "effect(s) and\n"
	.string "gives to the user.$"
#endif

BattleFrontier_Lounge7_Text_IcePunchDesc_hns::
#if GERMAN
	.string "Ein Schlag, der den Gegner evtl.\n"
	.string "einfriert.$"
#else
	.string "An icy punch\n"
	.string "that may\n"
	.string "freeze the foe.$"
#endif

BattleFrontier_Lounge7_Text_ThunderPunchDesc_hns::
#if GERMAN
	.string "Schlag, der den Gegner evtl.\n"
	.string "paralysiert.$"
#else
	.string "An electrified\n"
	.string "punch that may\n"
	.string "paralyze the foe.$"
#endif

BattleFrontier_Lounge7_Text_FirePunchDesc_hns::
#if GERMAN
	.string "Schlag, der dem Gegner evtl.\n"
	.string "Verbrennung zufügt.$"
#else
	.string "A fiery punch\n"
	.string "that may burn\n"
	.string "the foe.$"
#endif

@ HnS
BattleFrontier_Lounge7_Text_ElementalTutorIntro::
#if GERMAN
	.string "Zzzzzz…\p"
	.string "Was, wie, was?\p"
	.string "Oh, entschuldige, ich habe\n"
	.string "kurz gedöst.\p"
	.string "Ich bin der Elementarmeister.\p"
	.string "Ich lehre den mächtigsten Pflanzen-,\n"
	.string "Feuer- und Wasser-Pokémon starke\l"
	.string "Attacken.\p"
	.string "Willst du diese große Kraft\n"
	.string "erlernen?$"
#else
	.string "Zzzzzz…\p"
	.string "What, how, what?\p"
	.string "Oh, sorry, I was snoozing a bit.\p"
	.string "I'm the ELEMENTAL TUTOR.\p"
	.string "I have the power to teach the most\n"
	.string "powerful moves to GRASS, FIRE and\l"
	.string "WATER TYPE POKéMON.\p"
	.string "Did you come to learn such a strong\n"
	.string "power?$"
#endif

BattleFrontier_Lounge7_Text_ElementalTutorWelcomeBack:
#if GERMAN
	.string "Zzzzzz…\p"
	.string "Was, wie, was, wer?\p"
	.string "Willst du die Macht meiner\n"
	.string "stärksten Attacken lernen?$"
#else
	.string "Zzzzzz…\p"
	.string "What, how, what, who?\p"
	.string "Oh, did you come to learn the\n"
	.string "power of my strongest moves?$"
#endif

BattleFrontier_Lounge7_Text_TeachWhichMoveElemental::
#if GERMAN
	.string "Welche Attacke passt wohl am\n"
	.string "besten zu deinem Pokémon?$"
#else
	.string "Which move do you think is suitable\n"
	.string "for your POKéMON?$"
#endif

BattleFrontier_Lounge7_Text_StrongElementalMoveDesc::
#if GERMAN
	.string "Sehr mächtig, doch der Anwender kann\n"
	.string "eine Runde nicht handeln.$"
#else
	.string "Powerful, but\n"
	.string "leaves the user\n"
	.string "immobile one turn.$"
#endif

