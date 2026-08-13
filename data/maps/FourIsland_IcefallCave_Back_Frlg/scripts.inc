FourIsland_IcefallCave_Back_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_Back_OnTransition
	.byte 0

FourIsland_IcefallCave_Back_OnTransition::
	call_if_eq VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1, FourIsland_IcefallCave_Back_EventScript_HideLorelei
	end

FourIsland_IcefallCave_Back_EventScript_HideLorelei::
	setflag FLAG_HIDE_ICEFALL_CAVE_LORELEI
	return

FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene::
	lockall
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
	waitmovement 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe
	closemessage
	playse SE_PIN
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_Delay48
	waitmovement 0
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut
	closemessage
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 18
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 35
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiToRockets
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerToRockets
	waitmovement 0
	applymovement LOCALID_ICEFALL_ROCKET2, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FourIsland_IcefallCave_Back_Text_GruntIntro
	setvar VAR_LAST_TALKED, LOCALID_ICEFALL_ROCKET3
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_45, FourIsland_IcefallCave_Back_Text_GruntDefeat
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp
	waitmovement 0
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FourIsland_IcefallCave_Back_Text_NotTellingYouThat
	textcolor NPC_TEXT_COLOR_FEMALE
	message FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou
	waitmessage
	waitse
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
	waitbuttonpress
	waitmoncry
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat
	waitmovement 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland
	closemessage
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1Exit
	applymovement LOCALID_ICEFALL_ROCKET2, FourIsland_IcefallCave_Back_Movement_Rocket2Exit
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3Exit
	waitmovement 0
	removeobject LOCALID_ICEFALL_ROCKET1
	removeobject LOCALID_ICEFALL_ROCKET2
	removeobject LOCALID_ICEFALL_ROCKET3
	delay 50
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful
	setflag FLAG_HIDE_RUIN_VALLEY_SCIENTIST
	clearflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
	setvar VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1
	releaseall
	end

FourIsland_IcefallCave_Back_Movement_PlayerToRockets::
	walk_up
	walk_up
	walk_right
	walk_up
	step_end

FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit::
	delay_16
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_in_place_faster_down
	step_end

FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown::
	walk_in_place_down
	step_end

FourIsland_IcefallCave_Back_Movement_UnusedPushRight::
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat::
	walk_in_place_fast_down
	step_end

FourIsland_IcefallCave_Back_Movement_Rocket1Exit::
	walk_right
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

FourIsland_IcefallCave_Back_Movement_Rocket2Exit::
	delay_16
	walk_left
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

FourIsland_IcefallCave_Back_Movement_Rocket3Exit::
	delay_16
	walk_down
	delay_16
	walk_down
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei::
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

FourIsland_IcefallCave_Back_Movement_UnusedWalkLeft::
	walk_left
	walk_left
	step_end

FourIsland_IcefallCave_Back_Movement_LoreleiToRockets::
	walk_left
	walk_up
	step_end

FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp::
	walk_in_place_up
	step_end

FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit::
	delay_8
	walk_in_place_faster_right
	delay_16
	delay_16
	walk_in_place_faster_down
	step_end

FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer::
	walk_right
	step_end

FourIsland_IcefallCave_Back_EventScript_Lorelei::
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful, MSGBOX_NPC
	end

FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons::
#if GERMAN
	.string "Lorelei: Lasst eure Griffel von\n"
	.string "den Pokémon in der Höhle!\p"
	.string "Tut, was ich euch sage oder ihr\n"
	.string "werdet mich kennen lernen!$"
#else
	.string "LORELEI: Keep your filthy hands\n"
	.string "off the POKéMON in the cave!\p"
	.string "Do as I say, or you'll have me to\n"
	.string "answer to!$"
#endif

FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe::
#if GERMAN
	.string "Ah, sei still, Göre, und lass uns\n"
	.string "in Frieden!\p"
	.string "Nicht, dass deine Brillengläser\n"
	.string "beschlagen!$"
#else
	.string "Aww, shut it, lady, and leave\n"
	.string "us be.\p"
	.string "Don't let your glasses get all\n"
	.string "steamed up!$"
#endif

FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut::
#if GERMAN
	.string "Lorelei: {PLAYER}?!?\n"
	.string "Was machst du denn hier?\p"
	.string "Wir unterhalten uns später. Ich\n"
	.string "brauche jetzt deine Hilfe.\p"
	.string "Hilf mir, diese Wilderer zu vertrei-\n"
	.string "ben, ehe sie noch mehr anrichten.\p"
	.string "Sie haben hier Pokémon gefangen\n"
	.string "und sie anschließend verkauft!\p"
	.string "Bist du bereit?\n"
	.string "Du übernimmst diesen, los!$"
#else
	.string "LORELEI: {PLAYER}?!\n"
	.string "What are you doing here?\p"
	.string "No, we can catch up later.\n"
	.string "Right now, I need your help.\p"
	.string "Help me kick these poachers out\n"
	.string "before they do anything else.\p"
	.string "They've been catching POKéMON\n"
	.string "here, then selling them off!\p"
	.string "Are you ready?\n"
	.string "You take that one, please!$"
#endif

FourIsland_IcefallCave_Back_Text_GruntIntro::
#if GERMAN
	.string "W-Was!?!\p"
	.string "Wer sagt, dass wir mit den Pokémon nicht\n"
	.string "das anstellen können, was wir wollen?$"
#else
	.string "W-what?!\p"
	.string "Who says we can't do what we want\n"
	.string "with the POKéMON we catch?$"
#endif

FourIsland_IcefallCave_Back_Text_GruntDefeat::
#if GERMAN
	.string "Das haben wir nicht geplant!$"
#else
	.string "We didn't plan on this!$"
#endif

FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons::
#if GERMAN
	.string "Lorelei: Umpf!\n"
	.string "Wie erbärmlich schwach!\p"
	.string "Du!\n"
	.string "Sprich!\p"
	.string "Wohin habt ihr die gefangenen\n"
	.string "Pokémon gebracht?\p"
	.string "Ich zerschlage eure Organisation,\n"
	.string "ein für alle Mal.$"
#else
	.string "LORELEI: Humph.\n"
	.string "So despicably weak.\p"
	.string "You!\n"
	.string "Tell me!\p"
	.string "Where have you taken the captured\n"
	.string "POKéMON?\p"
	.string "I'm smashing your ring once and\n"
	.string "for all!$"
#endif

FourIsland_IcefallCave_Back_Text_NotTellingYouThat::
#if GERMAN
	.string "U-unmöglich!\n"
	.string "Das werde ich nie verraten!$"
#else
	.string "N-no way!\n"
	.string "I'm not telling you that!$"
#endif

FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou::
#if GERMAN
	.string "Lorelei: Falls du es mir nicht\n"
	.string "sagst, werden wir dich einfrieren.\p"
	.string "Mein Lapras ist außer sich für das, was\n"
	.string "ihr seinen Artgenossen angetan habt!\l"
	.string "Los, Lapras!\l"
	.string "Eisstrahl…$"
#else
	.string "LORELEI: If you won't confess,\n"
	.string "we'll deep-freeze you.\p"
	.string "My LAPRAS is furious for what\n"
	.string "you've done to its friends.\p"
	.string "Go, LAPRAS!\n"
	.string "ICE BEAM…$"
#endif

FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland::
#if GERMAN
	.string "Bitte nicht! O.K.!\n"
	.string "Ich sage es dir!\p"
	.string "Die Pokémon sind im Rocket-Lager\n"
	.string "auf Eiland Fünf.\p"
	.string "So! Jetzt weißt du es!\n"
	.string "Wir verschwinden jetzt!\p"
	.string "… aber ich bezweifle, dass du es\n"
	.string "je bis zum Rocket-Lager schaffst!\p"
	.string "Harharhar!$"
#else
	.string "Wawaah! Okay!\n"
	.string "I'll talk!\p"
	.string "The POKéMON are in the ROCKET\n"
	.string "WAREHOUSE on FIVE ISLAND.\p"
	.string "There! I said it!\n"
	.string "We'll be going now!\p"
	.string "…But I doubt you'll ever make it\n"
	.string "into the ROCKET WAREHOUSE!\p"
	.string "Heheheheh!$"
#endif

FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful::
#if GERMAN
	.string "{PLAYER}, danke!\n"
	.string "Aber das ist grausam…\p"
	.string "Ich bin auf diesen Eilanden geboren\n"
	.string "und aufgewachsen.\p"
	.string "Ich hatte keine Ahnung, dass sich diese\n"
	.string "schrecklichen Kriminellen hier\l"
	.string "herumtreiben…$"
#else
	.string "{PLAYER}, thank you.\n"
	.string "But this is awful…\p"
	.string "I was born and raised here on\n"
	.string "these islands.\p"
	.string "I had no idea that those horrible\n"
	.string "criminals were loose here…$"
#endif

