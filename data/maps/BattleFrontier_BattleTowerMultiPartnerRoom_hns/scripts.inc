BattleFrontier_BattleTowerMultiPartnerRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerMultiPartnerRoom_OnResume_hns
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition_hns
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp_hns
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame_hns
	.byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_OnResume_hns:
	pyramid_resetparty
	end

BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition_hns:
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner_hns
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
	tower_loadpartners
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner_hns::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_BOY_1
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_3, 1
	setobjectxyperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, 10, 2
	end

BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp_hns:
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth_hns
	.2byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth_hns::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame_hns:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom_hns
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom_hns
	.2byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom_hns::
	lockall
	setvar VAR_TEMP_3, 0
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom_hns::
	lockall
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom_hns
	waitmovement 0
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit_hns
	waitmovement 0
	copyobjectxytoperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner_hns, MSGBOX_DEFAULT
	special HealPlayerParty
	setvar VAR_TEMP_1, 1
	releaseall
	end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom_hns:
	walk_down
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit_hns:
	walk_left
	walk_in_place_faster_down
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant_hns::
	lock
	faceplayer
	message BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner_hns
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge_hns
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner_hns2_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge_hns::
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator_hns::
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	opendoor 10, 1
	waitdooranim
	call BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator_hns
	closedoor 10, 1
	waitdooranim
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR_HNS, 1, 6
	waitstate
	releaseall
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator_hns::
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator_hns
	waitmovement 0
	return

@ Unused
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator_hnsEast_hns:
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator_hnsEast_hns
	waitmovement 0
	return

@ Unused
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator_hnsWest_hns:
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest_hns
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator_hns:
	walk_up
	walk_up
	set_invisible
	step_end

@ Functionally unused
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator_hnsEast_hns:
	walk_right
	walk_up
	set_invisible
	step_end

@ Functionally unused
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest_hns:
	walk_left
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator_hns:
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner1_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 0
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns::
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner_hns
	tower_dopartnermsg PARTNER_MSGID_INTRO
	waitmessage
	waitbuttonpress
	tower_dopartnermsg PARTNER_MSGID_MON1
	waitmessage
	waitbuttonpress
	tower_dopartnermsg PARTNER_MSGID_MON2_ASK
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner_hns
	tower_dopartnermsg PARTNER_MSGID_ACCEPT
	waitmessage
	waitbuttonpress
	closemessage
	call_if_ne VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit_hns
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit_hnsSouth_hns
	removeobject VAR_LAST_TALKED
	setflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM_HNS, 10, 3
	waitstate
	release
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner_hns::
	tower_dopartnermsg PARTNER_MSGID_REJECT
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit_hns::
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit_hns
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit_hnsSouth_hns::
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit_hnsSouth_hns
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit_hns:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit_hnsSouth_hns:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner2_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 1
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner3_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 2
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner4_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 3
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner5_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 4
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner6_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 5
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner7_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 6
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner8_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 7
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner_hns:
#if GERMAN
	.string "Bitte such dir unter den Trainern hier\n"
	.string "einen Partner aus.$"
#else
	.string "Please find a partner from out of\n"
	.string "the TRAINERS gathered here.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner_hns:
#if GERMAN
	.string "{PLAYER}, du hast noch\n"
	.string "keinen Partner gefunden.\p"
	.string "Möchtest du die Suche aufgeben und\n"
	.string "zurück zur Rezeption gehen?$"
#else
	.string "{PLAYER}, you have not found a partner\n"
	.string "for your tag team.\p"
	.string "Would you like to quit looking and\n"
	.string "return to the reception counter?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner_hns2_hns:
#if GERMAN
	.string "Such dir hier bitte einen Partner aus.$"
#else
	.string "Then, please find a partner from\n"
	.string "the TRAINERS gathered here.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner_hns::
#if GERMAN
	.string "Vielen Dank!\p"
	.string "Nun werde ich dir den Raum\n"
	.string "für die Multikämpfe zeigen.$"
#else
	.string "Thank you for choosing a partner.\p"
	.string "I will now show you to your\n"
	.string "MULTI BATTLE ROOM.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Intro_hns::
#if GERMAN
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.\n"
	.string "Du kannst mich {STR_VAR_3} nennen!$"
#else
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice.\n"
	.string "You can call me {STR_VAR_3}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon1_hns::
#if GERMAN
	.string "{STR_VAR_1} hat mir geraten, ein\n"
	.string "{STR_VAR_3}, das {STR_VAR_2} kann, und$"
#else
	.string "On {STR_VAR_1}'s advice, I brought\n"
	.string "one {STR_VAR_3} with {STR_VAR_2} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon2Ask_hns::
#if GERMAN
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Bitte, lass mich dein Partner sein.$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Please, let me join you as a tag team.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Accept_hns::
#if GERMAN
	.string "Vielen Dank!\n"
	.string "Ich werde uns sofort registrieren.$"
#else
	.string "Thank you!\n"
	.string "I'll go register right now.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Reject_hns::
#if GERMAN
	.string "Ich hätte so gern mit dir ein Team\n"
	.string "gebildet, {PLAYER}…$"
#else
	.string "I really wanted to form a tag team\n"
	.string "with you, {PLAYER}…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Intro_hns::
#if GERMAN
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.\n"
	.string "Mein Name ist {STR_VAR_3}.$"
#else
	.string "I am {STR_VAR_1}'s no. {STR_VAR_2} apprentice.\n"
	.string "My name is {STR_VAR_3}.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon1_hns::
#if GERMAN
	.string "{STR_VAR_1} hat mich beraten. Ich habe\n"
	.string "ein {STR_VAR_3}, das {STR_VAR_2} kann, und$"
#else
	.string "I got advice from {STR_VAR_1} and chose\n"
	.string "one {STR_VAR_3} with {STR_VAR_2} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon2Ask_hns::
#if GERMAN
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Bitte, lass uns ein Team bilden!$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Please, let's form a tag team!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Accept_hns::
#if GERMAN
	.string "Vielen Dank!\n"
	.string "Ich kümmere mich sofort um die\l"
	.string "Registrierung!$"
#else
	.string "Thank you very much!\n"
	.string "I'll be done with registration quickly!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Reject_hns::
#if GERMAN
	.string "{PLAYER}, ich hatte gehofft, mit dir\n"
	.string "ein Team bilden zu dürfen…$"
#else
	.string "{PLAYER}, I was hoping that I could\n"
	.string "partner up with you…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Intro_hns::
#if GERMAN
	.string "Ähm, ich heiße {STR_VAR_3} und ich bin\n"
	.string "Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.\p"
	.string "Schluchz…\p"
	.string "Tut mir Leid! Schnüff… Aber die\n"
	.string "Spannung bringt mich zum Weinen.$"
#else
	.string "Um, my name's {STR_VAR_3}, and I'm\n"
	.string "{STR_VAR_1}'s no. {STR_VAR_2} apprentice.\p"
	.string "Snivel…\p"
	.string "I'm sorry!\n"
	.string "This tension is making me cry…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon1_hns::
#if GERMAN
	.string "{STR_VAR_3} ist mir mit Rat und Tat zur\n"
	.string "Seite gestanden, daher habe ich\p"
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "{STR_VAR_3} advised me, so I have\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Schluchz…\n"
	.string "Bitte, biiiitte, nimm mich als Partner!$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Snivel…\n"
	.string "Please, please team up with me!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Accept_hns::
#if GERMAN
	.string "Oh, wirklich?!? Echt?!?\n"
	.string "Wahnsinn! Irre! Toll! Juhuuuu!\p"
	.string "Oh… Hihihi… Tut mir Leid…\n"
	.string "Ich bin so glücklich, dass ich weine…\p"
	.string "Ich gehe mich sofort anmelden, bitte\n"
	.string "lauf nicht weg!$"
#else
	.string "Oh, really? You will?\n"
	.string "Awesome! Wicked! Awoooh!\p"
	.string "Oh… I'm sorry…\n"
	.string "I'm so happy, I'm crying…\p"
	.string "I'll go register right away.\n"
	.string "Please don't go away!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Reject_hns::
#if GERMAN
	.string "Oh, ab-abber… abber…\n"
	.string "Schluchz… Uaaahaaa…$"
#else
	.string "Oh, b-but…\n"
	.string "Sob… Waaaaah!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Intro_hns::
#if GERMAN
	.string "Hallo, du da! Ich bin {STR_VAR_3}!\n"
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"
#else
	.string "Hi, there! I'm {STR_VAR_3}!\n"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon1_hns::
#if GERMAN
	.string "{STR_VAR_3} hat mich beraten. Ich habe\n"
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "{STR_VAR_3} recommended my crew.\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann. Ist das nicht cool?\p"
	.string "Also los!\n"
	.string "Wir beide bilden ein Team!$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1},\n"
	.string "that's what I have! Cool, huh?\p"
	.string "So come on!\n"
	.string "Let's form a tag team!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Accept_hns::
#if GERMAN
	.string "Super! Klasse!\n"
	.string "Ich registriere mich jetzt!$"
#else
	.string "Yay! Great!\n"
	.string "Okay, I'll go register, okay?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Reject_hns::
#if GERMAN
	.string "Oooh, warum denn nicht? Ich wollte\n"
	.string "doch so gerne dein Partner sein.$"
#else
	.string "Aww, why?\n"
	.string "I wanted to team up, {PLAYER}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Intro_hns::
#if GERMAN
	.string "Ich bin {STR_VAR_3}, Schüler Nr. {STR_VAR_2} des\n"
	.string "berühmten {STR_VAR_1}!$"
#else
	.string "I'm {STR_VAR_3}, the no. {STR_VAR_2} apprentice\n"
	.string "of the famous {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon1_hns::
#if GERMAN
	.string "Ich habe mich an den Rat von\n"
	.string "{STR_VAR_3} gehalten.\p"
	.string "Mein {STR_VAR_2} kann {STR_VAR_1}$"
#else
	.string "I looked to {STR_VAR_3} for advice.\n"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon2Ask_hns::
#if GERMAN
	.string "und mein {STR_VAR_2} kann\n"
	.string "{STR_VAR_1}. Das ist mein Pärchen.\p"
	.string "Bitte bilde ein Team mit uns.$"
#else
	.string "and one {STR_VAR_2} with {STR_VAR_1},\n"
	.string "that's my pair.\p"
	.string "Please, will you join me in\n"
	.string "a tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Accept_hns::
#if GERMAN
	.string "Danke schön!\n"
	.string "Ich werde mich sofort registrieren.$"
#else
	.string "Thank you!\n"
	.string "I'll register right away!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Reject_hns::
#if GERMAN
	.string "Ich hatte gehofft, mit dir ein Team\n"
	.string "bilden zu können, {PLAYER}…$"
#else
	.string "{PLAYER}, I had been hoping to join\n"
	.string "you in a tag team…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Intro_hns::
#if GERMAN
	.string "Ähm… Ich bin froh, dass du dir die Zeit\n"
	.string "genommen hast, mit mir zu reden.\p"
	.string "Ich heiße {STR_VAR_3}.\n"
	.string "Ich bin Schülerin Nr. {STR_VAR_2} von {STR_VAR_1}.$"
#else
	.string "Um… I'm sincerely happy that you\n"
	.string "would take the time to talk to me.\p"
	.string "I'm {STR_VAR_3}.\n"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon1_hns::
#if GERMAN
	.string "{STR_VAR_3} hat mir einen Rat gegeben.\n"
	.string "Dafür bin ich sehr dankbar.\p"
	.string "In meinem Team ist ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"
#else
	.string "{STR_VAR_3} gave me advice.\n"
	.string "I'm very grateful for it.\p"
	.string "I have a team of one {STR_VAR_2}\n"
	.string "with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon2Ask_hns::
#if GERMAN
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann. Ich weiß, ich verlange viel, aber…\p"
	.string "Würdest du ein Team mit mir bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\n"
	.string "I know I'm asking a lot…\p"
	.string "I don't think you'll be willing to,\n"
	.string "but may I join you as a partner?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Accept_hns::
#if GERMAN
	.string "Wirklich? Ich kann es kaum glauben!\n"
	.string "Ich werde dich nicht enttäuschen!\l"
	.string "Ich kann es immer noch nicht glauben…\p"
	.string "Ähm… Wenn es wirklich okay ist,\n"
	.string "dann registriere ich mich jetzt sofort.$"
#else
	.string "Really? I can't believe it!\n"
	.string "I can't believe you'll let me join you!\l"
	.string "I… I won't let you down!\p"
	.string "Um… If it's really okay, I'll go register\n"
	.string "right this instant!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Reject_hns::
#if GERMAN
	.string "Oh…\n"
	.string "Ich glaube, ich war nicht gut genug…$"
#else
	.string "Oh…\n"
	.string "I didn't think I was good enough…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Intro_hns::
#if GERMAN
	.string "Oh, ich bin {STR_VAR_3}.\n"
	.string "Schülerin Nr. {STR_VAR_2}\p"
	.string "von {STR_VAR_1}.$"
#else
	.string "Hi, I'm {STR_VAR_3}.\n"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon1_hns::
#if GERMAN
	.string "{STR_VAR_3} hat mir zu folgendem Team\n"
	.string "geraten: ein {STR_VAR_2}, das\l"
	.string "{STR_VAR_1} kann,$"
#else
	.string "{STR_VAR_3} told me that it would be\n"
	.string "good to make this team:\l"
	.string "one {STR_VAR_1}-using {STR_VAR_2}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Nicht schlecht, was? Sollen wir\n"
	.string "beide ein Team bilden?$"
#else
	.string "and one {STR_VAR_2} that knows how\n"
	.string "to use {STR_VAR_1}.\p"
	.string "Not bad, huh?\n"
	.string "Want me to team up with you?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Accept_hns::
#if GERMAN
	.string "Das freut mich jetzt wirklich!\n"
	.string "Ich hoffe nur, du versaust es nicht!\l"
	.string "Ich werde mich jetzt registrieren.$"
#else
	.string "Okay, glad to join you!\n"
	.string "I hope you won't mess things up for me!\l"
	.string "I'll do my registration now.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Reject_hns::
#if GERMAN
	.string "Wie? Du willst mich nicht zum Partner?\n"
	.string "Du unterschätzt mich gewaltig!$"
#else
	.string "Huh? Why did you turn me down?\n"
	.string "You're no judge of character!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Intro_hns::
#if GERMAN
	.string "Ich bin {STR_VAR_3} und Triathlet.\n"
	.string "Ich bin immer schwer beschäftigt mit\l"
	.string "Joggen, Trainieren und Sprüche klopfen.\p"
	.string "Ich bin außerdem Schüler Nr. {STR_VAR_2}\n"
	.string "von {STR_VAR_1}.$"
#else
	.string "I'm {STR_VAR_3} and I'm a TRIATHLETE.\n"
	.string "I'm busy every day what with jogging,\l"
	.string "training, and rapping.\p"
	.string "I also happen to be {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon1_hns::
#if GERMAN
	.string "Ich folge dem Rat von {STR_VAR_3}:\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann.$"
#else
	.string "This is what {STR_VAR_3} recommended.\n"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon2Ask_hns::
#if GERMAN
	.string "Und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Ich habe mich sehr um meine Pokémon\n"
	.string "gekümmert, auch wenn ich beschäftigt\p"
	.string "war. Komm, wir bilden ein Team und\n"
	.string "versuchen unser Bestes!$"
#else
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2}.\p"
	.string "I put a lot of effort into raising\n"
	.string "them, even though I'm busy.\p"
	.string "Let's form a tag team\n"
	.string "and give it a go!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Accept_hns::
#if GERMAN
	.string "Das ist der richtige Kampfgeist!\n"
	.string "Warte hier. Ich registriere mich.$"
#else
	.string "Thanks, that's the spirit!\n"
	.string "Hang tight while I go register, okay?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Reject_hns::
#if GERMAN
	.string "Ich habe mir extra frei genommen.\n"
	.string "Und dann enttäuschst du mich. Pah!$"
#else
	.string "I took time from my busy schedule\n"
	.string "to be here! Give me a break!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Intro_hns::
#if GERMAN
	.string "Hallo! Wie geht’s dir?\n"
	.string "Ich bin {STR_VAR_3}.\p"
	.string "Schülerin Nr. {STR_VAR_2} von {STR_VAR_1}.\n"
	.string "Nett, dich kennen zu lernen.$"
#else
	.string "Hi!\n"
	.string "How's it going?\p"
	.string "I'm {STR_VAR_3}, {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice. Glad to meet you!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon1_hns::
#if GERMAN
	.string "Ich erzähl dir, zu was {STR_VAR_3} mir\n"
	.string "geraten hat: Zu einem {STR_VAR_2}, das\l"
	.string "{STR_VAR_1} kann, und$"
#else
	.string "Listen, listen! You have to hear about\n"
	.string "the POKéMON {STR_VAR_3} recommended.\l"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon2Ask_hns::
#if GERMAN
	.string "einem {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann. Natürlich wurden sie von mir\p"
	.string "sorgfältig aufgezogen! Sollen wir ein\n"
	.string "Team bilden? Wir wären unschlagbar!$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\n"
	.string "Of course I raised them superbly!\p"
	.string "So, want to team up?\n"
	.string "I'm sure it'll be a great combo!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Accept_hns::
#if GERMAN
	.string "Ha, das macht bestimmt Spaß!\n"
	.string "Ich gehe mich jetzt registrieren.$"
#else
	.string "Yay, I think this will be fun!\n"
	.string "I'll go register!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Reject_hns::
#if GERMAN
	.string "Bah, du bist gemein!\n"
	.string "Ich habe Referenzen, weißt du!$"
#else
	.string "Oh, you're mean!\n"
	.string "I come recommended, you know.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Intro_hns::
#if GERMAN
	.string "Ich bin {STR_VAR_3}.\n"
	.string "Schön, dich kennen zu lernen.\p"
	.string "Ich bin Schülerin Nr. {STR_VAR_2} von\n"
	.string "{STR_VAR_1}.$"
#else
	.string "Please let me introduce myself.\n"
	.string "I am {STR_VAR_3}.\p"
	.string "I serve as {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon1_hns::
#if GERMAN
	.string "Ich hielt mich an die Lehren von\n"
	.string "{STR_VAR_3} und mein Team ist: Ein\l"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann$"
#else
	.string "I sought the sage advice of\n"
	.string "{STR_VAR_3} and raised my team\l"
	.string "of one {STR_VAR_2} with {STR_VAR_1}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann.\p"
	.string "Bitte nimm uns als Partner.$"
#else
	.string "and one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Please agree to a tag team with me!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Accept_hns::
#if GERMAN
	.string "Oh… Ich bin entzückt!\n"
	.string "Ich werde mein Bestes geben!\p"
	.string "Ich werde uns jetzt registrieren!\n"
	.string "Warte bitte hier auf mich!$"
#else
	.string "Oh… I'm delighted!\n"
	.string "I promise to give you my best!\p"
	.string "Of course I will register us!\n"
	.string "Please wait!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Reject_hns::
#if GERMAN
	.string "Ich hatte gehofft, an deiner Seite\n"
	.string "kämpfen zu dürfen, {PLAYER}…$"
#else
	.string "I had been hoping to join you,\n"
	.string "{PLAYER}…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Intro_hns::
#if GERMAN
	.string "Hihihi! Du hast mich angesprochen!\n"
	.string "Ich bin ja sooo glücklich…\p"
	.string "Ich heiße {STR_VAR_3}! Ich bin Schülerin\n"
	.string "Nr. {STR_VAR_2} von {STR_VAR_1}.$"
#else
	.string "Eek! You spoke to me!\n"
	.string "I… I'm overjoyed!\p"
	.string "I'm {STR_VAR_3}! I'm {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon1_hns::
#if GERMAN
	.string "Ich folgte dem Rat meines Lehrers! Ich\n"
	.string "habe ein {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "On {STR_VAR_3}'s advice, I trained\n"
	.string "one {STR_VAR_1}-using {STR_VAR_2}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon2Ask_hns::
#if GERMAN
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Erfüllst du mir einen Wunsch?\n"
	.string "Bilde mit mir ein Team.$"
#else
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2}.\p"
	.string "Please, can you grant me my wish?\n"
	.string "I want to be your tag-team partner!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Accept_hns::
#if GERMAN
	.string "Hihihi… Mir ist richtig schwindelig!\n"
	.string "Vielen, vielen Dank!\l"
	.string "Ich werde mich jetzt registrieren.$"
#else
	.string "Eek! I… I feel giddy!\n"
	.string "Thank you so much!\l"
	.string "I'll go register us right away!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Reject_hns::
#if GERMAN
	.string "Uaaahaa! Hast du denn kein Mitleid?\n"
	.string "Aber irgendwie bist du cool…$"
#else
	.string "Waaah! Don't you feel any pity?\n"
	.string "But that makes you cooler…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Intro_hns::
#if GERMAN
	.string "Jahaa! Ich bin Schüler Nr. {STR_VAR_2} von\n"
	.string "{STR_VAR_1}!\p"
	.string "Ich heiße {STR_VAR_3}. Hallooo, hallooo!$"
#else
	.string "Yeehaw! I'm {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice!\p"
	.string "{STR_VAR_3}'s my name, hello, hello!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon1_hns::
#if GERMAN
	.string "Mein Mentor {STR_VAR_3} riet mir zu\n"
	.string "einem {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "My mentor {STR_VAR_3} recommended\n"
	.string "one {STR_VAR_1}-master {STR_VAR_2}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon2Ask_hns::
#if GERMAN
	.string "kann, und zu einem {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Gut, nicht wahr? Du wählst mich als\n"
	.string "deinen Partner, ja?$"
#else
	.string "and one {STR_VAR_1}-master\n"
	.string "{STR_VAR_2}.\p"
	.string "Good stuff, huh?\n"
	.string "You'll partner with me, won't you?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Accept_hns::
#if GERMAN
	.string "Hervorragend!!! Ich werde mich\n"
	.string "ganz schnell registrieren!$"
#else
	.string "Okay, excellent!\n"
	.string "I'll get the registration done quickly!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Reject_hns::
#if GERMAN
	.string "Uuuuuh! Du bist ganz schön\n"
	.string "berechnend, {PLAYER}.$"
#else
	.string "Gwaaah!\n"
	.string "You're a calculating one, {PLAYER}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Intro_hns::
#if GERMAN
	.string "Hey! Jetzt geht’s hier richtig rund.\n"
	.string "Heute ist der letzte Tag des\p"
	.string "Duellturms!\n"
	.string "………………\l"
	.string "Haha! War nur ein Witz!\p"
	.string "Man nennt mich {STR_VAR_3} und das\n"
	.string "passt! Ich bin der 1.000ste Schüler von\l"
	.string "{STR_VAR_1}! Nun, ich bin Nr. {STR_VAR_2}!$"
#else
	.string "Hey! There's big trouble! This is\n"
	.string "the BATTLE TOWER's last day!\p"
	.string "… … … … … …\n"
	.string "I'm only joking!\p"
	.string "People call me {STR_VAR_3} and I do, too!\n"
	.string "I'm {STR_VAR_1}'s 1,000th apprentice!\l"
	.string "Actually, I'm no. {STR_VAR_2}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon1_hns::
#if GERMAN
	.string "{STR_VAR_3} hat mir einen Rat gegeben.\n"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "{STR_VAR_3} gave me some advice.\n"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann…\n"
	.string "Ich habe zehn von jedem!\l"
	.string "Nun, ich habe eines von jedem.\p"
	.string "Nun, wie wär’s?\n"
	.string "Sollen wir zusammen kämpfen?$"
#else
	.string "{STR_VAR_2} with {STR_VAR_1}.\n"
	.string "I've got ten of each kind!\l"
	.string "Actually, just one of each!\p"
	.string "How about it?\n"
	.string "Want to try tag battles with me?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Accept_hns::
#if GERMAN
	.string "Juhuu! Ich schenke dir zum\n"
	.string "Dank ein Pokémon!\p"
	.string "War ein Witz! Aber ich werde mich\n"
	.string "jetzt tatsächlich registrieren, okay?$"
#else
	.string "Yippee!\n"
	.string "I'll give you a POKéMON as my thanks!\p"
	.string "Just joking! But I will really go do\n"
	.string "the registration, okay?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Reject_hns::
#if GERMAN
	.string "Bah, wie fies! Dafür werde ich den\n"
	.string "Duellturm in Schutt und Asche legen!\p"
	.string "Natürlich nicht! War ein Witz.$"
#else
	.string "Oh, that's so cold! I'll have to wreck\n"
	.string "the BATTLE TOWER for that!\p"
	.string "Of course I won't!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Intro_hns::
#if GERMAN
	.string "Hey, da! Ich bin echt gut drauf.\n"
	.string "Meine Pokémon auch!\p"
	.string "Ich heiße {STR_VAR_3} und bin ein\n"
	.string "Matrose. Ich bin Schüler Nr. {STR_VAR_2}\p"
	.string "von {STR_VAR_1}. Lehn mich nicht\n"
	.string "vorschnell ab!$"
#else
	.string "Hey, there, I'm rockin' and a-rollin'!\n"
	.string "POKéMON, I be controllin'!\p"
	.string "I'm {STR_VAR_3} the rappin' SAILOR.\n"
	.string "Don't be mistakin' me for no wailer!\p"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice.\n"
	.string "Me, you shouldn't be quick to dismiss!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon1_hns::
#if GERMAN
	.string "Mein Team habe ich nach dem Rat meines\n"
	.string "Lehrers zusammengestellt.\l"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "With the advice of {STR_VAR_3} I did\n"
	.string "abide, put together my team of pride!\l"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Wir beide sollten uns wirklich\n"
	.string "zusammentun! Der Sieg wäre uns sicher.$"
#else
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2}!\p"
	.string "Our meeting we should commemorate,\n"
	.string "with a tag-team victory to celebrate!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Accept_hns::
#if GERMAN
	.string "Hey, hey! Du gefällst mir, du hast Stil!\n"
	.string "Ich gehe jetzt und registriere mich.$"
#else
	.string "Hey, hey, I like your style!\n"
	.string "Our registration, I will go file!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Reject_hns::
#if GERMAN
	.string "Oh, {PLAYER}, das ist gemein und fies!\n"
	.string "Wenn ich mal so ehrlich sein darf…$"
#else
	.string "Oh, hey, {PLAYER}, now that's cold!\n"
	.string "If I may be so bold!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Intro_hns::
#if GERMAN
	.string "Juhuu juhuu juhuu!\n"
	.string "Ich mag alles, was Spaß macht!\p"
	.string "Wie geht’s? Ich bin {STR_VAR_3}!\n"
	.string "Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"
#else
	.string "Yippee-yahoo!\n"
	.string "Oh, don't run! I was just having fun!\p"
	.string "Howdy! I'm {STR_VAR_3}!\n"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon1_hns::
#if GERMAN
	.string "{STR_VAR_3} gab mir Anweisungen.\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "{STR_VAR_3} told me what to do.\n"
	.string "So one {STR_VAR_1}-using {STR_VAR_2}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon2Ask_hns::
#if GERMAN
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Was bleibt da noch zu sagen?\n"
	.string "Los, komm! Mach schon!\p"
	.string "Bitte! Ich flehe dich an!\n"
	.string "Kämpfe zusammen mit mir. Biiitte!$"
#else
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2}, I did choose.\p"
	.string "So, what do you say?\n"
	.string "Come on, make my day!\p"
	.string "Please, I'm begging you!\n"
	.string "Let me join you, don't leave me blue!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Accept_hns::
#if GERMAN
	.string "Yeah! Das Glück ist heute auf meiner\n"
	.string "Seite. Ich bin sooo froh!\p"
	.string "Bevor wir anfangen, laufe ich schnell\n"
	.string "und registriere mich.$"
#else
	.string "Yeahah! Luck is with me!\n"
	.string "It sure makes me happy!\p"
	.string "Before we go join the fray,\n"
	.string "I'll go register right away!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Reject_hns::
#if GERMAN
	.string "Du weist mich ab?\n"
	.string "{PLAYER}, du enttäuschst mich sehr.$"
#else
	.string "You're turning me down?\n"
	.string "{PLAYER}, you're making me frown!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Intro_hns::
#if GERMAN
	.string "Hust… Röchel…\p"
	.string "Tut mir Leid, ich bin erkältet.\n"
	.string "Aber meinen Pokémon geht es gut.\p"
	.string "Ich heiße {STR_VAR_3}, Schüler Nr. {STR_VAR_2}\n"
	.string "von {STR_VAR_1}. Hust… Hust…$"
#else
	.string "Cough!\p"
	.string "Oh, sorry, I have a cold.\n"
	.string "My POKéMON are fine, though.\p"
	.string "My name's {STR_VAR_3}, {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice. Cough!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon1_hns::
#if GERMAN
	.string "Ich habe mir den Rat meines Lehrers zu\n"
	.string "Herzen genommen und ein {STR_VAR_2},\l"
	.string "das {STR_VAR_1} kann, sowie$"
#else
	.string "I took {STR_VAR_3}'s advice to heart\n"
	.string "and put together my team of\l"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon2Ask_hns::
#if GERMAN
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann,\n"
	.string "in meinem Team.\p"
	.string "Ich trainiere jeden Tag, bei Wind und\n"
	.string "Wetter, mit ihnen.\p"
	.string "Deswegen bin ich wahrscheinlich auch\n"
	.string "erkältet. Glaube ich…\p"
	.string "Nun? Sollen wir beide uns zusammentun\n"
	.string "und Seite an Seite kämpfen?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "I trained them every day,\n"
	.string "even in wind and rain.\p"
	.string "That's why I have this cold,\n"
	.string "I think.\p"
	.string "That's what I'm about.\n"
	.string "Want to be my tag partner?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Accept_hns::
#if GERMAN
	.string "Danke, das freut mich sehr!\n"
	.string "Hust… Hust…\l"
	.string "Warte, ich registriere mich eben.$"
#else
	.string "Thanks, I appreciate this!\n"
	.string "Cough, cough!\l"
	.string "Hang on while I go register.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Reject_hns::
#if GERMAN
	.string "Ach, du willst nicht? {PLAYER},\n"
	.string "wir wären ein gutes Team gewesen…$"
#else
	.string "Oh, you won't?\n"
	.string "{PLAYER}, I think we'd make a good pair.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Intro_hns::
#if GERMAN
	.string "Hallo!\n"
	.string "Das hier ist echt Nerven zerreißend!\p"
	.string "Ich heiße {STR_VAR_3}.\n"
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"
#else
	.string "Oh, hello!\n"
	.string "This is nerve-racking.\p"
	.string "I'm {STR_VAR_3}.\n"
	.string "I'm the no. {STR_VAR_2} apprentice of {STR_VAR_1}.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon1_hns::
#if GERMAN
	.string "{STR_VAR_3} riet mir zu diesem Team:\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "{STR_VAR_3} said this team'll be good--\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon2Ask_hns::
#if GERMAN
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Ich bin sehr zufrieden und zu-\n"
	.string "versichtlich. Bilden wir ein Team?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "I'm feeling self-conscious about this,\n"
	.string "but will you let me join you?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Accept_hns::
#if GERMAN
	.string "Ja! Toll! Danke! Ich bin schüchtern,\n"
	.string "aber ich werde mein Bestes geben!\p"
	.string "Ich werde mich jetzt registrieren.$"
#else
	.string "Oh, gee, thank you!\n"
	.string "I feel bashful, but I'll do my best!\p"
	.string "I'll go get the registration done.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Reject_hns::
#if GERMAN
	.string "Och, sag doch nicht einfach Nein!\n"
	.string "Ich bin doch eh schon verlegen genug…$"
#else
	.string "Oh, please don't say no!\n"
	.string "I feel self-conscious enough already…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Intro_hns::
#if GERMAN
	.string "Ich bin {STR_VAR_3}. Das ist keine Lüge!\n"
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"
#else
	.string "I am {STR_VAR_3}, and that's no lie.\n"
	.string "I am {STR_VAR_1}'s no. {STR_VAR_2} apprentice.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon1_hns::
#if GERMAN
	.string "{STR_VAR_3} hat mir einen Rat gegeben.\p"
	.string "Und da ich diesen wertvollen Rat gerne\n"
	.string "befolge, habe ich ein {STR_VAR_2},\l"
	.string "das {STR_VAR_1} kann, und ein$"
#else
	.string "{STR_VAR_3} recommended my team.\p"
	.string "Since the advice sounded sincere,\n"
	.string "I decided to bring with me\l"
	.string "my {STR_VAR_1}-using {STR_VAR_2} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Wenn es dir genehm ist, dann würde ich\n"
	.string "dich bitten, mich als Partner zu wählen.$"
#else
	.string "my {STR_VAR_1}-using {STR_VAR_2}.\p"
	.string "If possible, I would like you to accept\n"
	.string "me as your tag-team partner.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Accept_hns::
#if GERMAN
	.string "Du entscheidest dich wirklich für mich?\n"
	.string "Wenn nicht, wäre das schrecklich für\p"
	.string "mich. Da du zustimmst, werde ich uns\n"
	.string "jetzt anmelden.$"
#else
	.string "You really will accept me?\n"
	.string "It would be too terrible otherwise.\p"
	.string "But since you've agreed, this is fine.\n"
	.string "I shall go register the both of us.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Reject_hns::
#if GERMAN
	.string "Hm? Warum lehnst du mich ab? Ist das\n"
	.string "deine spezielle Art von Humor?$"
#else
	.string "Hm? Now why would you refuse?\n"
	.string "Is this your idea of a joke?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassIntro_hns::
#if GERMAN
	.string "Ich bin {STR_VAR_1} und eine Göre!$"
#else
	.string "I'm {STR_VAR_1}, and I'm a LASS!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon1_hns::
#if GERMAN
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "What I have are one {STR_VAR_2}\n"
	.string "that uses {STR_VAR_1} and one$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\n"
	.string "Die beiden begleiten mich.\p"
	.string "Willst du mein Teampartner sein?$"
#else
	.string "{STR_VAR_2} that uses {STR_VAR_1}.\n"
	.string "Those are what I have with me.\p"
	.string "Will you be my partner?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassAccept_hns::
#if GERMAN
	.string "Danke!\n"
	.string "Ich werde uns jetzt registrieren.$"
#else
	.string "Thank you!\n"
	.string "I'll go do the registration!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassReject_hns::
#if GERMAN
	.string "Du willst nicht mein Teampartner sein?\n"
	.string "Das wird dir später bestimmt Leid tun…$"
#else
	.string "You don't want to be my partner?\n"
	.string "You'll regret it later!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterIntro_hns::
#if GERMAN
	.string "Hallo!\p"
	.string "Ich bin Teenager {STR_VAR_1}!$"
#else
	.string "Hello!\p"
	.string "I'm YOUNGSTER {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon1_hns::
#if GERMAN
	.string "Willst du wissen, was ich hab?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "Want to know what I have?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Du wählst mich doch als deinen\n"
	.string "Partner, oder etwa nicht?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "You'll be my tag-team partner,\n"
	.string "won't you?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterAccept_hns::
#if GERMAN
	.string "Spitze!\n"
	.string "Ich werde uns registrieren!$"
#else
	.string "Yay!\n"
	.string "I'll go and register, okay?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterReject_hns::
#if GERMAN
	.string "Oooh! Dabei wären wir mit meinen\n"
	.string "Pokémon unschlagbar gewesen!$"
#else
	.string "Aww! If you'd form a tag team with\n"
	.string "my POKéMON, we'd be unstoppable!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerIntro_hns::
#if GERMAN
	.string "Halli hallo!\n"
	.string "Ich bin der Wanderer {STR_VAR_1}!$"
#else
	.string "Yahoo!\n"
	.string "I'm HIKER {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon1_hns::
#if GERMAN
	.string "Willst du wissen, welche Pkmn ich habe?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "Know what I have with me?\n"
	.string "My {STR_VAR_1}-using {STR_VAR_2} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon2Ask_hns::
#if GERMAN
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann!\p"
	.string "Na, hört sich das gut an? Sollen wir\n"
	.string "mit dir ein Team bilden?$"
#else
	.string "my {STR_VAR_1}-using {STR_VAR_2}!\p"
	.string "Sounds good, eh?\n"
	.string "Want to form a tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerAccept_hns::
#if GERMAN
	.string "Hallo hallo!\n"
	.string "Dann werde ich uns mal registrieren.$"
#else
	.string "Yahoo!\n"
	.string "I'll go do the registering, then.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerReject_hns::
#if GERMAN
	.string "Ich hätte gerne mit dir Seite an Seite\n"
	.string "gekämpft.$"
#else
	.string "I would've liked to battle with you\n"
	.string "at my side.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyIntro_hns::
#if GERMAN
	.string "Hallo! Ich bin {STR_VAR_1},\n"
	.string "eine wahre Schönheit!$"
#else
	.string "Hello!\n"
	.string "I'm {STR_VAR_1}, and I'm a BEAUTY!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon1_hns::
#if GERMAN
	.string "Dies sind meine Pokémon!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "Do you know what I've been raising?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon2Ask_hns::
#if GERMAN
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann!\p"
	.string "Was meinst du? Möchtest du mit mir ein\n"
	.string "Team bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "What do you think?\n"
	.string "Want to make a tag team together?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyAccept_hns::
#if GERMAN
	.string "Wunderbar!\n"
	.string "Ich werde uns jetzt registrieren.$"
#else
	.string "Wonderful!\n"
	.string "I'll get the registration done now!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyReject_hns::
#if GERMAN
	.string "Was für eine Enttäuschung!\p"
	.string "Wir beide Seite an Seite - das wäre\n"
	.string "wirklich schön gewesen…$"
#else
	.string "How disappointing!\p"
	.string "We two together--we would've been\n"
	.string "the best!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanIntro_hns::
#if GERMAN
	.string "Yo!\p"
	.string "Weißt du, wer ich bin?\n"
	.string "Ich bin {STR_VAR_1}, der Angler!$"
#else
	.string "Yo!\p"
	.string "You know who I am?\n"
	.string "I'm {STR_VAR_1} the FISHERMAN!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon1_hns::
#if GERMAN
	.string "Mein Team: ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"
#else
	.string "I've got with me a team of one\n"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon2Ask_hns::
#if GERMAN
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Wie sieht’s aus? Interesse, mit\n"
	.string "uns ein Team zu bilden?$"
#else
	.string "one {STR_VAR_1}-using {STR_VAR_2}.\p"
	.string "So, how about it?\n"
	.string "Will you battle at my side?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanAccept_hns::
#if GERMAN
	.string "Fein, fein!\n"
	.string "Überlass den Rest ruhig mir!\p"
	.string "Ich werde uns jetzt registrieren.$"
#else
	.string "Good, good!\n"
	.string "Leave it up to me!\p"
	.string "I'll go and register us now.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanReject_hns::
#if GERMAN
	.string "Und dabei wären wir so ein gutes Team\n"
	.string "gewesen…$"
#else
	.string "We matched up perfectly, too…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyIntro_hns::
#if GERMAN
	.string "Freut mich, dich kennen zu lernen.\n"
	.string "Ich bin die Lady {STR_VAR_1}.$"
#else
	.string "Glad to make your acquaintance.\n"
	.string "I am {STR_VAR_1}, a LADY.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon1_hns::
#if GERMAN
	.string "Mich begleitet ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"
#else
	.string "I am accompanied by a team of\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon2Ask_hns::
#if GERMAN
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann. Ich hoffe, wir erfüllen deine\p"
	.string "Erwartungen, denn ich würde gerne\n"
	.string "an deiner Seite kämpfen.$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "I hope I meet your approval.\n"
	.string "For I wish to have you as my partner.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyAccept_hns::
#if GERMAN
	.string "Ich bedanke mich sehr! Ich werde\n"
	.string "mich nun um die Registrierung kümmern.$"
#else
	.string "I thank you sincerely.\n"
	.string "I shall handle the registration.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyReject_hns::
#if GERMAN
	.string "Ich bin sicher, du wirst es irgendwann\n"
	.string "bedauern, uns abgelehnt zu haben.$"
#else
	.string "I'm sure that you will regret not\n"
	.string "having me as your partner.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFIntro_hns::
#if GERMAN
	.string "Ich bin Triathlet {STR_VAR_1}!$"
#else
	.string "I'm TRIATHLETE {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon1_hns::
#if GERMAN
	.string "Ich habe…\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "What I have…\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann. Das ist mein Paar!\p"
	.string "Bitte?\n"
	.string "Lass uns ein Team bilden, ja?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\n"
	.string "That's my pair!\p"
	.string "Please?\n"
	.string "Will you form a tag team with me?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFAccept_hns::
#if GERMAN
	.string "Juhuu, danke!\n"
	.string "Ich werde mich nun registrieren.$"
#else
	.string "Gee, thanks!\n"
	.string "I'll go register at the counter.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFReject_hns::
#if GERMAN
	.string "Dabei wären wir beide wirklich\n"
	.string "unglaublich stark gewesen…$"
#else
	.string "We two together, we would've been\n"
	.string "tough for certain!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherIntro_hns::
#if GERMAN
	.string "Hallo!\n"
	.string "Ich bin Käfersammler {STR_VAR_1}!$"
#else
	.string "Hiya!\n"
	.string "I'm BUG CATCHER {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon1_hns::
#if GERMAN
	.string "Guck mal, was ich hier habe!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "Check out what I have!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Hast du gehört?\n"
	.string "Komm, wir bilden ein Team!$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "So, listen!\n"
	.string "Do you want to form a tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherAccept_hns::
#if GERMAN
	.string "Verstanden!\n"
	.string "Ich kümmere mich um die Registrierung.$"
#else
	.string "Gotcha!\p"
	.string "I'll go do the registration stuff\n"
	.string "at the counter.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherReject_hns::
#if GERMAN
	.string "Ach, dabei sind meine Pokémon klasse!\n"
	.string "Ich hoffe, du wirst das nicht bereuen.$"
#else
	.string "Aww, my POKéMON are awesome.\n"
	.string "I hope you won't regret this!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMIntro_hns::
#if GERMAN
	.string "Guten Tag!\n"
	.string "Ich bin Schulkind {STR_VAR_1}!$"
#else
	.string "Good day!\n"
	.string "I'm SCHOOL KID {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon1_hns::
#if GERMAN
	.string "Ich ziehe ein {STR_VAR_2} auf, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "What I've been raising are one\n"
	.string "{STR_VAR_2} that uses {STR_VAR_1}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Nicht schlecht, was? Bist du be-\n"
	.string "eindruckt und wählst uns als Partner?$"
#else
	.string "and one {STR_VAR_2} that uses\n"
	.string "{STR_VAR_1}.\p"
	.string "Not too bad, don't you think?\n"
	.string "Would you care to form a tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMAccept_hns::
#if GERMAN
	.string "Vielen Dank! Ich werde mich\n"
	.string "um die Registrierung kümmern.$"
#else
	.string "Thank you very much!\n"
	.string "I'll get done with the registration.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMReject_hns::
#if GERMAN
	.string "Das ist schade…\p"
	.string "Ich hoffte, etwas von dir lernen zu\n"
	.string "können…$"
#else
	.string "That's too bad…\p"
	.string "I was hoping that I could learn\n"
	.string "from you as your partner…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyIntro_hns::
#if GERMAN
	.string "Hallo! Ich werde mich dir vorstellen!\n"
	.string "Ich bin Schnösel {STR_VAR_1}!$"
#else
	.string "Yo! Let me tell you who I am!\n"
	.string "I'm RICH BOY {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon1_hns::
#if GERMAN
	.string "Rate mal, was ich bei mir habe!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "Guess what I got!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Ich gebe dir hier und jetzt die Chance,\n"
	.string "mit uns ein Team zu bilden.$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "I'm willing to offer you the chance\n"
	.string "to be in a tag team with me.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyAccept_hns::
#if GERMAN
	.string "Kluge Entscheidung!\p"
	.string "Ich werde mich um die Registrierung\n"
	.string "kümmern.$"
#else
	.string "Smart move!\p"
	.string "I'll finish up the registration\n"
	.string "process quick!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyReject_hns::
#if GERMAN
	.string "Ausgerechnet mich lehnst du ab?!?\n"
	.string "Das wird dir bestimmt noch Leid tun!$"
#else
	.string "You'd turn me of all people down?\n"
	.string "You'll regret that decision for sure!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltIntro_hns::
#if GERMAN
	.string "Kiyaii!\n"
	.string "Ich bin Schwarzgurt {STR_VAR_1}.$"
#else
	.string "Hiyah!\n"
	.string "I am BLACK BELT {STR_VAR_1}.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon1_hns::
#if GERMAN
	.string "Meine Begleiter sind ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und ein$"
#else
	.string "As my companions, I have\n"
	.string "one {STR_VAR_2} using {STR_VAR_1}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Bitte, erfüll mir einen Wunsch!\n"
	.string "Bilde ein Team mit mir.$"
#else
	.string "and one {STR_VAR_2} using\n"
	.string "{STR_VAR_1}.\p"
	.string "Please, grant me my wish!\n"
	.string "Allow me to be your tag partner!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltAccept_hns::
#if GERMAN
	.string "Kiyaii! Ich werde mich um\n"
	.string "die Registrierung kümmern.$"
#else
	.string "Hiyah!\n"
	.string "I will go register forthwith!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltReject_hns::
#if GERMAN
	.string "Verstehe… Ich hoffe, du gibst mir\n"
	.string "beim nächsten Mal die Gelegenheit…$"
#else
	.string "I see… I hope for an opportunity\n"
	.string "the next time we meet…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFIntro_hns::
#if GERMAN
	.string "Hallo, du da!\n"
	.string "Ich bin {STR_VAR_1}, ein Planscher!$"
#else
	.string "Hi, there!\n"
	.string "I'm {STR_VAR_1}, and I'm a TUBER!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon1_hns::
#if GERMAN
	.string "Weißt du, ich habe ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"
#else
	.string "I'll tell you what I have.\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon2Ask_hns::
#if GERMAN
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\n"
	.string "Wählst du mich als Partner, ja?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\n"
	.string "May I please be on your tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFAccept_hns::
#if GERMAN
	.string "Hui! Fein!\n"
	.string "Ich werde uns registrieren.$"
#else
	.string "Thank you!\n"
	.string "I'll go register us now!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFReject_hns::
#if GERMAN
	.string "Wären wir Partner geworden, wären\n"
	.string "wir bestimmt superstark gewesen.$"
#else
	.string "If we'd become partners, we could\n"
	.string "have been so strong!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacIntro_hns::
#if GERMAN
	.string "Sei gegrüßt…\n"
	.string "Ich bin Hexe {STR_VAR_1}…$"
#else
	.string "Greetings…\n"
	.string "I am HEX MANIAC {STR_VAR_1}…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon1_hns::
#if GERMAN
	.string "Ich habe ein {STR_VAR_2} bei mir, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "I bear with me one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2} together with one$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann…\p"
	.string "Ich bitte dich…\n"
	.string "Nimm uns als deine Partner an…$"
#else
	.string "{STR_VAR_1}-using {STR_VAR_2}…\p"
	.string "I beseech you…\n"
	.string "Join me in a tag team…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacAccept_hns::
#if GERMAN
	.string "Vielen Dank…\n"
	.string "Ich werde uns registrieren…$"
#else
	.string "I thank you…\n"
	.string "I shall register us…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacReject_hns::
#if GERMAN
	.string "Und wir wären so gerne deine\n"
	.string "Partner geworden…$"
#else
	.string "I so longed to join you…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMIntro_hns::
#if GERMAN
	.string "Wie geht es dir? Ich bin {STR_VAR_1},\n"
	.string "ein Pokémon-Züchter.$"
#else
	.string "How do you do? I'm {STR_VAR_1},\n"
	.string "and I'm a POKéMON BREEDER!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon1_hns::
#if GERMAN
	.string "Ich züchte die besten Pokémon!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "I'm raising a couple good ones!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Wie sieht’s aus? Sollen wir ein Team\n"
	.string "bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "How about it?\n"
	.string "Feel like making a tag team with me?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMAccept_hns::
#if GERMAN
	.string "Vielen, vielen Dank!\p"
	.string "Ich kümmere mich um die Registrierung,\n"
	.string "du kannst hier entspannt warten.$"
#else
	.string "Thank you kindly!\p"
	.string "I'll go take care of the registration\n"
	.string "stuff, so you wait right here!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMReject_hns::
#if GERMAN
	.string "Schade, ich wäre gerne dein Teampartner\n"
	.string "geworden…$"
#else
	.string "I was looking forward to being\n"
	.string "your partner…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFIntro_hns::
#if GERMAN
	.string "Hallo!\n"
	.string "Ich bin Triathlet {STR_VAR_1}!$"
#else
	.string "Well, hello!\n"
	.string "I'm TRIATHLETE {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon1_hns::
#if GERMAN
	.string "Wer mich beim Laufen begleitet?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "Want to know what I run with?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann!\p"
	.string "Nun?\n"
	.string "Sollen wir ein Team mit dir bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Well?\n"
	.string "Want to be in a tag team with me?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFAccept_hns::
#if GERMAN
	.string "Das ist wahrer Sportsgeist!\p"
	.string "Ich werde uns schnell registrieren.\n"
	.string "Lauf nicht weg!$"
#else
	.string "Good going!\p"
	.string "I'll be quick and get the registration\n"
	.string "all done!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFReject_hns::
#if GERMAN
	.string "Wir beide hätten uns den ersten Platz\n"
	.string "geholt. Schade, schade, schade!$"
#else
	.string "You and me, we would've been tops.\n"
	.string "It's too bad…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMIntro_hns::
#if GERMAN
	.string "Hey, du! Mein Name ist {STR_VAR_1}!\n"
	.string "Ich bin ein Triathlet.$"
#else
	.string "Hey, there! My name's {STR_VAR_1}!\n"
	.string "I'm a TRIATHLETE!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon1_hns::
#if GERMAN
	.string "Mein Team trainiert mit mir.\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "I go on runs with my durable team--\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Nicht gerade unterste Schublade, nicht\n"
	.string "wahr? Wir sollten ein Team bilden!$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Not too shabby, huh?\n"
	.string "We should be in a tag team together!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMAccept_hns::
#if GERMAN
	.string "Sehr gut!\n"
	.string "Ich übernehme die Registrierung.$"
#else
	.string "All right!\n"
	.string "I'll go register in a flash!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMReject_hns::
#if GERMAN
	.string "Schade! Ich hätte mich wirklich\n"
	.string "angestrengt und mein Bestes gegeben!$"
#else
	.string "I really wanted to battle as your\n"
	.string "tag-team partner…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlIntro_hns::
#if GERMAN
	.string "Ich bin Kämpferin {STR_VAR_1}!$"
#else
	.string "I'm BATTLE GIRL {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon1_hns::
#if GERMAN
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "I've been toughening up one\n"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
	.string "Sagt dir diese Combo zu?\n"
	.string "Sollen wir mit dir ein Team bilden?$"
#else
	.string "one {STR_VAR_1}-using {STR_VAR_2}!\p"
	.string "Do you like that combo?\n"
	.string "How about you and me join up?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlAccept_hns::
#if GERMAN
	.string "Danke!\p"
	.string "Ich werde uns registrieren.$"
#else
	.string "Why, thanks!\p"
	.string "I'll get the registration done\n"
	.string "right now!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlReject_hns::
#if GERMAN
	.string "Und ich hatte gehofft, mit dir das\n"
	.string "ultimative Kampfteam bilden zu können…$"
#else
	.string "With you, I thought we could form\n"
	.string "the ultimate tag team…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMIntro_hns::
#if GERMAN
	.string "Ich bin Triathlet {STR_VAR_1}!$"
#else
	.string "I'm TRIATHLETE {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon1_hns::
#if GERMAN
	.string "Mich begleiten ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "I've been running with one {STR_VAR_2}\n"
	.string "that knows how to use {STR_VAR_1}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Wir könnten mit dir ein Team bilden.\n"
	.string "Wäre das nicht super?$"
#else
	.string "and one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "We could be in a tag team.\n"
	.string "Wouldn't that be great?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMAccept_hns::
#if GERMAN
	.string "Danke!\p"
	.string "Ich werde uns jetzt sofort\n"
	.string "registrieren.$"
#else
	.string "Thank you!\p"
	.string "I'll go register us, and that's\n"
	.string "right now!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMReject_hns::
#if GERMAN
	.string "Schade! Schade!!! Wir wären das\n"
	.string "stärkste Team weit und breit gewesen!$"
#else
	.string "Aww, that's too bad. We would've been\n"
	.string "the toughest tag team around!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMIntro_hns::
#if GERMAN
	.string "Meinst du mich? Ich bin ein\n"
	.string "Planscher und heiße {STR_VAR_1}!$"
#else
	.string "Me?\n"
	.string "I'm TUBER {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon1_hns::
#if GERMAN
	.string "Welche Pokémon ich dabei habe?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "What do I have with me?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon2Ask_hns::
#if GERMAN
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann…\p"
	.string "Hey? Du und ich - wir bilden ein\n"
	.string "Team, okay?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Hey?\n"
	.string "You'll team up with me, right?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMAccept_hns::
#if GERMAN
	.string "Okay!!!\p"
	.string "Ich werde mich registrieren!\n"
	.string "Die anderen werden blass vor Neid!$"
#else
	.string "Okay!\p"
	.string "I'll go register!\n"
	.string "Let's be excellent together!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMReject_hns::
#if GERMAN
	.string "Meine Pokémon sind stark, jawohl!\n"
	.string "Schade, dass du Nein sagst.$"
#else
	.string "My POKéMON are tough for sure…\n"
	.string "It's too bad you don't want to team up.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristIntro_hns::
#if GERMAN
	.string "Jahuu!\n"
	.string "Ich bin Gitarrist {STR_VAR_1}!$"
#else
	.string "Yay-hey!\n"
	.string "Call me GUITARIST {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon1_hns::
#if GERMAN
	.string "Schau dir meine Begleitband an!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "Check out my entourage!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Richtig wild, was? Komm, tritt\n"
	.string "unserer Band bei!$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Yay-hey! Pretty wild, huh?\n"
	.string "We'll have to do a duet in a tag team!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristAccept_hns::
#if GERMAN
	.string "Ja! Das ist der richtige Takt! Ich werde\n"
	.string "mich um die Registrierung kümmern.$"
#else
	.string "Yay-hey! Right on!\n"
	.string "I'll do that registration stuff now!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristReject_hns::
#if GERMAN
	.string "Meine Pokémon sind megastark!\n"
	.string "Du wirst das bestimmt bedauern!$"
#else
	.string "My POKéMON rock hard!\n"
	.string "You'll be sorry, I tell you!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanIntro_hns::
#if GERMAN
	.string "Nett, dich kennen zu lernen.\n"
	.string "Ich bin Gentleman {STR_VAR_1}.$"
#else
	.string "Pleased to meet you.\n"
	.string "I am {STR_VAR_1}, a GENTLEMAN.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon1_hns::
#if GERMAN
	.string "Ich werde begleitet von meinem treuen\n"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "I am accompanied by my trusted\n"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon2Ask_hns::
#if GERMAN
	.string "und meinem treuen {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Darf ich dich fragen, ob wir mit dir im\n"
	.string "Team Seite an Seite kämpfen dürfen?$"
#else
	.string "one {STR_VAR_1}-using {STR_VAR_2}.\p"
	.string "May I ask you to join me in a tag-team\n"
	.string "partnership arrangement?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanAccept_hns::
#if GERMAN
	.string "Vielen Dank! Es ist mir eine Ehre,\n"
	.string "mich um die Registrierung zu kümmern!$"
#else
	.string "Ah, I thank you for your trust.\n"
	.string "I shall be done with the registration.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanReject_hns::
#if GERMAN
	.string "Welch ein Unglück…\p"
	.string "Ich werde geduldig auf die nächste\n"
	.string "Gelegenheit warten…$"
#else
	.string "That is most unfortunate…\p"
	.string "I shall look forward to the next\n"
	.string "opportunity…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMIntro_hns::
#if GERMAN
	.string "Hallo! Ich bin {STR_VAR_1},\n"
	.string "ein großer Pokéfan.$"
#else
	.string "Hello, I'm {STR_VAR_1},\n"
	.string "and I'm a POKéFAN.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon1_hns::
#if GERMAN
	.string "Ich habe ein {STR_VAR_2} dabei, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "I have with me now one {STR_VAR_2}\n"
	.string "that knows the move {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Gefällt dir, was du siehst?\n"
	.string "Warum werden wir nicht Partner?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Do you like what you see?\n"
	.string "Why don't you be my tag partner?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMAccept_hns::
#if GERMAN
	.string "Vielen Dank!\n"
	.string "Ich kümmere mich um die Registrierung.$"
#else
	.string "Thank you!\n"
	.string "I'll look after the registration!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMReject_hns::
#if GERMAN
	.string "Meine Pokémon sind erste Klasse!\n"
	.string "Schade, dass du das nicht akzeptierst.$"
#else
	.string "My POKéMON are top grade…\n"
	.string "It's too bad you can't appreciate that.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMIntro_hns::
#if GERMAN
	.string "Hm!\n"
	.string "Ich bin der Experte {STR_VAR_1}!$"
#else
	.string "Hm!\n"
	.string "I am {STR_VAR_1}, and an EXPERT am I!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon1_hns::
#if GERMAN
	.string "Meine Pokémon sind ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "The POKéMON that I've toughened up are\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
	.string "Willst du zu uns ins Team?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "What say you to a tag team with me?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMAccept_hns::
#if GERMAN
	.string "Hm!\n"
	.string "Ich werde uns sofort anmelden!\l"
	.string "Lass uns beide unser Bestes geben!$"
#else
	.string "Hm!\n"
	.string "I shall register us right away!\l"
	.string "Let us both do our best!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMReject_hns::
#if GERMAN
	.string "Hoffen wir mal, dass deine Entscheidung\n"
	.string "richtig war…$"
#else
	.string "I will hope that your choice is\n"
	.string "indeed correct…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFIntro_hns::
#if GERMAN
	.string "Hallo, hallo.\n"
	.string "Ich bin Experte {STR_VAR_1}.$"
#else
	.string "Hello, hello.\n"
	.string "I'm {STR_VAR_1}, and I'm an EXPERT.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon1_hns::
#if GERMAN
	.string "Ich zog meine Pokémon sorgfältig auf.\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "I've raised my POKéMON thoroughly.\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon2Ask_hns::
#if GERMAN
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Möchtest du mit uns ein Team bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}--\n"
	.string "they're what I have.\p"
	.string "Wouldn't you like to team up with me?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFAccept_hns::
#if GERMAN
	.string "Sehr gut! Fein! Ich werde mich\n"
	.string "sofort um die Registrierung kümmern.$"
#else
	.string "Good, good.\n"
	.string "I'll see to the registration right away.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFReject_hns::
#if GERMAN
	.string "Na, vielleicht beim nächsten Mal…$"
#else
	.string "Perhaps we can form a team the next\n"
	.string "time we meet.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerIntro_hns::
#if GERMAN
	.string "Ich bin Drachenprofi {STR_VAR_1}!$"
#else
	.string "I'm DRAGON TAMER {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon1_hns::
#if GERMAN
	.string "In meinem Team ist ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"
#else
	.string "The team I've been toughening up is\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon2Ask_hns::
#if GERMAN
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Was meinst du? Möchtest du mit uns\n"
	.string "ein Team bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "How about it?\n"
	.string "Want to be my partner?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerAccept_hns::
#if GERMAN
	.string "Okay, ich werde mein Bestes geben!\n"
	.string "Ich werde uns jetzt registrieren.$"
#else
	.string "Okay, I'll give it my best!\n"
	.string "I'll go register now, all right?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerReject_hns::
#if GERMAN
	.string "Du wirst keinen stärkeren Partner als\n"
	.string "mich finden!$"
#else
	.string "You're not going to find many tougher\n"
	.string "partners than me!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperIntro_hns::
#if GERMAN
	.string "Ich bin Vogelfänger {STR_VAR_1}!$"
#else
	.string "I'm BIRD KEEPER {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon1_hns::
#if GERMAN
	.string "Welche Pokémon ich habe?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "What POKéMON do I have?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Sind wir nicht ein tolles Gespann?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Don't you think we'd make a decent\n"
	.string "tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperAccept_hns::
#if GERMAN
	.string "Super, danke!\n"
	.string "Ich werde uns anmelden.$"
#else
	.string "Great, thanks!\n"
	.string "I'll look after the registration!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperReject_hns::
#if GERMAN
	.string "Meine Pokémon und ich sind stark.\n"
	.string "Was für eine Enttäuschung…$"
#else
	.string "My POKéMON and I are strong.\n"
	.string "What a letdown.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyIntro_hns::
#if GERMAN
	.string "Ich bin Ninjajunge {STR_VAR_1}!$"
#else
	.string "I'm NINJA BOY {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon1_hns::
#if GERMAN
	.string "Meine Pokémon?!? Ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "My POKéMON team consists of one\n"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
	.string "Komm, wir bilden ein Team!$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Let's be in a tag team together!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyAccept_hns::
#if GERMAN
	.string "Ja!\n"
	.string "Ich melde uns an.$"
#else
	.string "Yay!\n"
	.string "Let me go register!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyReject_hns::
#if GERMAN
	.string "Du wirst meine starken Pokémon\n"
	.string "bestimmt vermissen!$"
#else
	.string "You'll regret not having my tough\n"
	.string "POKéMON on your side!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyIntro_hns::
#if GERMAN
	.string "Hallo!\n"
	.string "Ich bin Schirmdame {STR_VAR_1}!$"
#else
	.string "Hello!\n"
	.string "I'm PARASOL LADY {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon1_hns::
#if GERMAN
	.string "Meine Begleiter sind ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"
#else
	.string "Escorting me now are my {STR_VAR_2}\n"
	.string "that uses {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon2Ask_hns::
#if GERMAN
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Sind sie nicht bezaubernd?\n"
	.string "Möchtest du mit uns ein Team bilden?$"
#else
	.string "one {STR_VAR_2} that uses\n"
	.string "{STR_VAR_1}.\p"
	.string "Aren't they nice?\n"
	.string "Care to join us in a tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyAccept_hns::
#if GERMAN
	.string "Vielen Dank!\p"
	.string "Ich werde uns anmelden. Wir sollten\n"
	.string "uns beide nicht enttäuschen!$"
#else
	.string "Thanks a bunch!\p"
	.string "I'll go register at the counter.\n"
	.string "Let's not disappoint each other!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyReject_hns::
#if GERMAN
	.string "Meine Pokémon sind ungeheuer stark.\n"
	.string "Wie enttäuschend…$"
#else
	.string "My POKéMON are tremendously strong.\n"
	.string "How disappointing…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacIntro_hns::
#if GERMAN
	.string "Hallo!\n"
	.string "Ich bin Käfermaniac {STR_VAR_1}!$"
#else
	.string "Hello.\n"
	.string "I'm {STR_VAR_1}, and I'm a BUG MANIAC!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon1_hns::
#if GERMAN
	.string "Ich habe meine Pkmn selbst gefunden!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "I have found my POKéMON, yes.\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon2Ask_hns::
#if GERMAN
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Alle selbst gefunden!!! Möchtest du mit\n"
	.string "uns ein Team bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}--\n"
	.string "they are what I found.\p"
	.string "Could I interest you in forming\n"
	.string "a tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacAccept_hns::
#if GERMAN
	.string "Okay!\n"
	.string "Verstanden!\p"
	.string "Die Registrierung geht ganz schnell.$"
#else
	.string "Okay!\n"
	.string "Understood!\p"
	.string "I won't be long with the registration!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacReject_hns::
#if GERMAN
	.string "Mit meinen selbst gefundenen Pokémon\n"
	.string "hätten wir nicht verlieren können…$"
#else
	.string "With the POKéMON I found, we wouldn't\n"
	.string "have lost…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorIntro_hns::
#if GERMAN
	.string "Ahoi, Landratte!\n"
	.string "Ich bin Matrose {STR_VAR_1}!$"
#else
	.string "Ahoy, there!\n"
	.string "I'm SAILOR {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon1_hns::
#if GERMAN
	.string "Ich zeige dir meinen ganzen Stolz!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "Let me show you my pride and joy!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon2Ask_hns::
#if GERMAN
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann!\p"
	.string "Natürlich kannst du so nicht Nein\n"
	.string "sagen! Also? Sind wir ein Team?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Of course you're not going to turn\n"
	.string "me down. We will team up, right?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorAccept_hns::
#if GERMAN
	.string "Ich habe nichts anderes erwartet!\n"
	.string "Ich kümmere mich um die Registrierung.$"
#else
	.string "I didn't expect any less!\n"
	.string "I'll go register now.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorReject_hns::
#if GERMAN
	.string "Wir wären über die Gegner wie ein Sturm\n"
	.string "auf hoher See hinweggefegt…$"
#else
	.string "We would've stormed through\n"
	.string "the opposition! Too bad!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorIntro_hns::
#if GERMAN
	.string "Hi, ich bin {STR_VAR_1}.\n"
	.string "Ich bin ein Pokémon-Sammler.$"
#else
	.string "Hi, I'm {STR_VAR_1}.\n"
	.string "I'm a COLLECTOR.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon1_hns::
#if GERMAN
	.string "Meine Juwelen! Ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"
#else
	.string "The jewels in my collection are\n"
	.string "my {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon2Ask_hns::
#if GERMAN
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Nobel, was? Wir beide sollten echt\n"
	.string "ein Team bilden. Was meinst du?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Swell, huh?\n"
	.string "We should be in a team together.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorAccept_hns::
#if GERMAN
	.string "Oh, yeah!\p"
	.string "Dann lass uns keine weitere Zeit\n"
	.string "mehr vergeuden! Ich melde uns an.$"
#else
	.string "Oh, yeah!\p"
	.string "Well, let's not waste any time.\n"
	.string "I'll go register the two of us.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorReject_hns::
#if GERMAN
	.string "Das betrübt mich jetzt wirklich.\n"
	.string "Meine Pokémon sind doch wahre Schätze!$"
#else
	.string "Well, that's upsetting.\n"
	.string "You don't appreciate my POKéMON.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMIntro_hns::
#if GERMAN
	.string "Na, du? Ich bin {STR_VAR_1}.\n"
	.string "Ich bin ein Pokémon-Ranger.$"
#else
	.string "Howdy, I'm {STR_VAR_1}.\n"
	.string "I'm a POKéMON RANGER.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon1_hns::
#if GERMAN
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "Keeping me company are one\n"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
	.string "Meinst du nicht, dass wir ein\n"
	.string "beeindruckendes Team wären?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Don't you think we'd make an impressive\n"
	.string "tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMAccept_hns::
#if GERMAN
	.string "Das ist klasse!\n"
	.string "Ich melde uns an.$"
#else
	.string "That's super!\n"
	.string "I'll deal with the registration now.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMReject_hns::
#if GERMAN
	.string "Nächstes Mal wählst du meine Pokémon\n"
	.string "aus. Ja?$"
#else
	.string "Next time, choose my POKéMON,\n"
	.string "will you?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFIntro_hns::
#if GERMAN
	.string "Ich heiße {STR_VAR_1}.\n"
	.string "Ich bin ein Pokémon-Ranger.$"
#else
	.string "My name's {STR_VAR_1}.\n"
	.string "I'm a POKéMON RANGER!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon1_hns::
#if GERMAN
	.string "Ich habe folgende Pokémon dabei:\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "Let me tell you about my team. I have\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Würdest du nicht gerne mit meiner\n"
	.string "Bande ein Team bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "How would you like to form a tag team\n"
	.string "with my little posse?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFAccept_hns::
#if GERMAN
	.string "Wir werden unser Bestes geben!\n"
	.string "Ich werde uns ganz schnell anmelden!$"
#else
	.string "We'll be at our best!\n"
	.string "I'll get the registration done quick!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFReject_hns::
#if GERMAN
	.string "Ich hoffe, das nächste Mal wählst du\n"
	.string "die Pokémon für mich aus.$"
#else
	.string "I hope you'll choose my POKéMON\n"
	.string "next time.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyIntro_hns::
#if GERMAN
	.string "Schön, dich kennen zu lernen. Ich bin\n"
	.string "Aromalady {STR_VAR_1}!$"
#else
	.string "Pleased to meet you. I'm {STR_VAR_1}.\n"
	.string "I consider myself an AROMA LADY.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon1_hns::
#if GERMAN
	.string "Ich reise mit einem {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und einem$"
#else
	.string "I travel with one {STR_VAR_2}\n"
	.string "that uses {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Ich hoffe, sie treffen deinen Ge-\n"
	.string "schmack? Möchtest du ein Team bilden?$"
#else
	.string "one {STR_VAR_2} that uses\n"
	.string "{STR_VAR_1}.\p"
	.string "I hope they strike your fancy.\n"
	.string "Would you care to be my partner?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyAccept_hns::
#if GERMAN
	.string "Ich fühle mich geehrt!\n"
	.string "Ich werde uns sofort anmelden.$"
#else
	.string "I'm honored by your acceptance.\n"
	.string "I will go register right this instant.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyReject_hns::
#if GERMAN
	.string "Es wäre schön, wenn wir das nächste\n"
	.string "Mal ein Team bilden könnten.$"
#else
	.string "It would be wonderful if we could form\n"
	.string "a tag team the next time we meet.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacIntro_hns::
#if GERMAN
	.string "Weißt du, wer ich bin?\n"
	.string "Ich bin der Ruinenmaniac {STR_VAR_1}!$"
#else
	.string "Want to know who I am?\n"
	.string "I'm {STR_VAR_1}, the RUIN MANIAC!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon1_hns::
#if GERMAN
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "The POKéMON that I have with me are\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
	.string "Faszinierend, nicht wahr?\n"
	.string "Möchtest du ein Team mit uns bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Intriguing, eh?\n"
	.string "How about you and I partner up?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacAccept_hns::
#if GERMAN
	.string "Das ist eine gute Entscheidung! Ich\n"
	.string "werde mich um die Anmeldung kümmern.$"
#else
	.string "That's a sound decision!\n"
	.string "I'll go do the registration paperwork.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacReject_hns::
#if GERMAN
	.string "Hmm… Ich bin überzeugt,\n"
	.string "meine Pokémon sind stark…$"
#else
	.string "Hmm…\n"
	.string "I think my POKéMON are tough…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMIntro_hns::
#if GERMAN
	.string "Ich bin Ass-Trainer {STR_VAR_1}.$"
#else
	.string "I'm COOLTRAINER {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon1_hns::
#if GERMAN
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "The POKéMON I have right now are one\n"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,\n"
	.string "dabei. Cool, was?\p"
	.string "Und wäre es nicht noch viel cooler, wenn\n"
	.string "wir ein Team bilden würden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\n"
	.string "Cool, huh?\p"
	.string "Don't you think it'd be pretty cool\n"
	.string "if we made a tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMAccept_hns::
#if GERMAN
	.string "Cool!!!\n"
	.string "Ich melde uns blitzschnell an.$"
#else
	.string "Cool!\n"
	.string "I'll go do the registration in a flash!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMReject_hns::
#if GERMAN
	.string "Und ich dachte, wir könnten das coolste\n"
	.string "Team in der Geschichte werden…$"
#else
	.string "I thought that we'd make just\n"
	.string "the greatest team ever.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFIntro_hns::
#if GERMAN
	.string "Ich bin Ass-Trainer {STR_VAR_1}.$"
#else
	.string "I'm COOLTRAINER {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon1_hns::
#if GERMAN
	.string "Mein Team, fragst du? Ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und ein$"
#else
	.string "The team I've been raising has one\n"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Hört sich das gut an?\n"
	.string "Warum werden wir nicht Partner?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Does that sound okay?\n"
	.string "How about we become tag partners?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFAccept_hns::
#if GERMAN
	.string "Das hört sich gut an!\n"
	.string "Ich sorge für die Registrierung.$"
#else
	.string "Sounds A-OK!\n"
	.string "I'd better do the registration.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFReject_hns::
#if GERMAN
	.string "Und ich dachte, ich könnte endlich mal\n"
	.string "mit einem starken Partner kämpfen…$"
#else
	.string "I was thinking how we would be\n"
	.string "one tough team…$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacIntro_hns::
#if GERMAN
	.string "Tach!\n"
	.string "Ich bin Pokémaniac {STR_VAR_1}!$"
#else
	.string "Heyo!\n"
	.string "I'm {STR_VAR_1}, the POKéMANIAC!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon1_hns::
#if GERMAN
	.string "Was ich als Kenner zu bieten habe?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "What does a guy like me have?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann! Ist das was? Ja oder ja?\p"
	.string "Also los! Stampfen wir die andern\n"
	.string "in Grund und Boden. Ja oder ja?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1},\n"
	.string "that's what!\p"
	.string "Let's do it!\n"
	.string "We'll stomp around as a tag team!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacAccept_hns::
#if GERMAN
	.string "Sehr gute Entscheidung!\n"
	.string "Ich werde uns registrieren.$"
#else
	.string "Good call!\n"
	.string "I'll register the both of us!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacReject_hns::
#if GERMAN
	.string "Meine Pokémon sind der Hammer!\n"
	.string "Dein Pech, wenn du es bedauerst.$"
#else
	.string "My POKéMON are brutal!\n"
	.string "It's not my fault if you regret this!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerIntro_hns::
#if GERMAN
	.string "Hallo, du da! Ich bin {STR_VAR_1},\n"
	.string "ein wahrer Hitzkopf!$"
#else
	.string "Yo, there!\n"
	.string "I'm KINDLER {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon1_hns::
#if GERMAN
	.string "Womit ich das Feuer entfache? Mit\n"
	.string "einem {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "You know what my training cooked up?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon2Ask_hns::
#if GERMAN
	.string "kennt, und einem\n"
	.string "{STR_VAR_2}, das {STR_VAR_1} kennt!\p"
	.string "Und was sagst du?\n"
	.string "Sollen wir ein Team bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Well, what do you say?\n"
	.string "Want to form a tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerAccept_hns::
#if GERMAN
	.string "Gut!\n"
	.string "Ich werde uns dann mal anmelden.$"
#else
	.string "All right!\n"
	.string "I'll get on with the registration.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerReject_hns::
#if GERMAN
	.string "Versprich mir, dass wir, wenn wir uns das\n"
	.string "nächste Mal treffen, Partner werden.$"
#else
	.string "Promise you'll partner up with me\n"
	.string "the next time we run into each other.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperIntro_hns::
#if GERMAN
	.string "Ich bin {STR_VAR_1}, ein Camper.$"
#else
	.string "I'm {STR_VAR_1}, and I'm a CAMPER!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon1_hns::
#if GERMAN
	.string "Ich kümmere mich um ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und um ein$"
#else
	.string "I've been raising one {STR_VAR_1}-\n"
	.string "using {STR_VAR_2} and one$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Meinst du, es wäre lustig, wenn wir\n"
	.string "ein Team bilden? Ich denke schon!$"
#else
	.string "{STR_VAR_1}-using {STR_VAR_2}.\p"
	.string "Do you think it'd be fun to team up?\n"
	.string "I bet it would be!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperAccept_hns::
#if GERMAN
	.string "Yeah!\n"
	.string "Ich melde uns an.$"
#else
	.string "Yeah!\n"
	.string "Off I go to register!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperReject_hns::
#if GERMAN
	.string "Dann aber das nächste Mal, ja?\n"
	.string "Ich wäre gerne in deinem Team.$"
#else
	.string "Next time, okay?\n"
	.string "I want to be on your team.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerIntro_hns::
#if GERMAN
	.string "Hallo!\n"
	.string "Ich bin Picknicker {STR_VAR_1}!$"
#else
	.string "Hello!\n"
	.string "I'm {STR_VAR_1}, and I'm a PICNICKER!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon1_hns::
#if GERMAN
	.string "Ich habe ein {STR_VAR_2} dabei, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "The POKéMON I've been taking are\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Sollen wir ein Team bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Are you interested in joining me\n"
	.string "on a tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerAccept_hns::
#if GERMAN
	.string "Vielen Dank!\n"
	.string "Ich werde uns registrieren.$"
#else
	.string "Why, thank you!\n"
	.string "I will do the registration now.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerReject_hns::
#if GERMAN
	.string "Ich hoffe, dass wir irgendwann mal\n"
	.string "Teampartner werden!$"
#else
	.string "It would be nice if I could join you\n"
	.string "some other time.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMIntro_hns::
#if GERMAN
	.string "Ich bin Psycho {STR_VAR_1}!$"
#else
	.string "I'm PSYCHIC {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon1_hns::
#if GERMAN
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "The twosome I've been raising are\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Würdest du gerne ein Team mit\n"
	.string "uns bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Would you like to form a tag team\n"
	.string "with me?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMAccept_hns::
#if GERMAN
	.string "Na, wunderbar!\n"
	.string "Ich melde uns an.$"
#else
	.string "Sure thing!\n"
	.string "I'll take care of the registration!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMReject_hns::
#if GERMAN
	.string "Wenn wir uns das nächste Mal treffen,\n"
	.string "müssen wir unbedingt ein Team bilden!$"
#else
	.string "If we meet again, that's when I'd like\n"
	.string "to team up with you.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFIntro_hns::
#if GERMAN
	.string "Ich bin {STR_VAR_1}!\n"
	.string "Ich bin ein Psycho…$"
#else
	.string "I'm {STR_VAR_1}.\n"
	.string "I'm a PSYCHIC.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon1_hns::
#if GERMAN
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,\n"
	.string "und ein$"
#else
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,\n"
	.string "sind meine Schüler.\p"
	.string "Kann ich dich überzeugen, ein Team\n"
	.string "mit uns zu bilden?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}--\n"
	.string "they're my disciples.\p"
	.string "Doesn't the idea of forming a tag-team\n"
	.string "partnership intrigue you?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFAccept_hns::
#if GERMAN
	.string "Danke schön.\n"
	.string "Ich kümmere mich um die Anmeldung.$"
#else
	.string "Thank you.\n"
	.string "I'll go deal with the registration.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFReject_hns::
#if GERMAN
	.string "Ich hoffe, es wird sich eine weitere\n"
	.string "Gelegenheit für uns bieten…$"
#else
	.string "I hope there will be another chance\n"
	.string "to forge an alliance.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFIntro_hns::
#if GERMAN
	.string "Ich bin Schulkind {STR_VAR_1}.$"
#else
	.string "I'm SCHOOL KID {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon1_hns::
#if GERMAN
	.string "Mein Pärchen ist ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Darf ich bitte dein Teampartner sein?$"
#else
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2} are my POKéMON pair.\p"
	.string "May I please be your partner on\n"
	.string "a tag team?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFAccept_hns::
#if GERMAN
	.string "Oooh, das ist prima!\n"
	.string "Ich melde uns sofort an!$"
#else
	.string "Ooh, thank you!\n"
	.string "I'll register at the counter right away!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFReject_hns::
#if GERMAN
	.string "Och… Darf ich dann das nächste Mal\n"
	.string "dein Teampartner sein?!?$"
#else
	.string "Please?\n"
	.string "May I join you the next time?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFIntro_hns::
#if GERMAN
	.string "Huhu! Ich heiße {STR_VAR_1}!\n"
	.string "Ich bin ein Pokémon-Züchter!$"
#else
	.string "Hiya! The name's {STR_VAR_1}!\n"
	.string "I'm a POKéMON BREEDER!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon1_hns::
#if GERMAN
	.string "Ich habe ein {STR_VAR_2} gezüchtet, das\n"
	.string "{STR_VAR_1} kann, und ein$"
#else
	.string "The POKéMON I've raised are one\n"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Hört sich das für dich interessant an?\n"
	.string "Dann lass uns doch ein Team bilden.$"
#else
	.string "one {STR_VAR_1}-using {STR_VAR_2}.\p"
	.string "Sound interesting?\n"
	.string "How about we form a tag team, then?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFAccept_hns::
#if GERMAN
	.string "Fein, fein! Sehr gut!\n"
	.string "Überlass die Anmeldung ruhig mir.$"
#else
	.string "All righty!\n"
	.string "You leave the registration to me!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFReject_hns::
#if GERMAN
	.string "Nächstes Mal bilden wir aber ein\n"
	.string "Team, ja?$"
#else
	.string "You have to team up with me next time,\n"
	.string "all right?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFIntro_hns::
#if GERMAN
	.string "Ich bin {STR_VAR_1} und kann mit Stolz\n"
	.string "behaupten, dass ich ein Pokéfan bin!$"
#else
	.string "I'm {STR_VAR_1}, and I'm proud to say\n"
	.string "that I am a POKéFAN.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon1_hns::
#if GERMAN
	.string "Meine geliebten Pokémon:\n"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "The darling POKéMON I've raised are\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Sind sie nicht allerliebst? Komm! Wir\n"
	.string "müssen einfach ein Team bilden!$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Aren't they just the cutest?\n"
	.string "We ought to make a team!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFAccept_hns::
#if GERMAN
	.string "Vielen Dank!\n"
	.string "Ich melde uns sofort an!$"
#else
	.string "Thank you, dear!\n"
	.string "I'll be on my way to register!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFReject_hns::
#if GERMAN
	.string "Weißt du, meine geliebten Pokémon sind\n"
	.string "die Besten. Wie ärgerlich…$"
#else
	.string "My darling POKéMON are the best,\n"
	.string "I'll have you know. How annoying!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFIntro_hns::
#if GERMAN
	.string "Hi, ich bin Schwimmerin {STR_VAR_1}.$"
#else
	.string "Hi, I'm SWIMMER {STR_VAR_1}.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon1_hns::
#if GERMAN
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,\n"
	.string "und ein$"
#else
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\n"
	.string "Damit lässt es sich gut trainieren!\p"
	.string "Wir beide sollten ein Team bilden!$"
#else
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2} are what I've trained.\p"
	.string "You and me, let's make a tag team.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFAccept_hns::
#if GERMAN
	.string "Cool!\n"
	.string "Ich werde uns registrieren.$"
#else
	.string "That's cool!\n"
	.string "I'll register the two of us.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFReject_hns::
#if GERMAN
	.string "Für das nächste Mal schuldest du mir\n"
	.string "einen Teamkampf!$"
#else
	.string "If we meet again, you owe me\n"
	.string "a tag team!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMIntro_hns::
#if GERMAN
	.string "Was geht ab?\n"
	.string "Ich bin Triathlet {STR_VAR_1}.$"
#else
	.string "What's happening?\n"
	.string "I'm {STR_VAR_1}, and I'm a TRIATHLETE.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon1_hns::
#if GERMAN
	.string "Ich habe ein paar ganz anständige\n"
	.string "Pokémon. Ein {STR_VAR_2}, das {STR_VAR_1}$"
#else
	.string "I got a couple decent POKéMON.\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon2Ask_hns::
#if GERMAN
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Und du und ich würden auch ein ganz\n"
	.string "anständiges Team abgeben. Oder?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "It'd be neat if we made a tag team\n"
	.string "together, so how about it?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMAccept_hns::
#if GERMAN
	.string "Wunderbar!\n"
	.string "Warte, ich melde uns eben an.$"
#else
	.string "Right on!\n"
	.string "You wait while I register, okay?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMReject_hns::
#if GERMAN
	.string "Nächstes Mal erwarte ich, dass wir ein \n"
	.string "Team werden. Vergiss das nicht.$"
#else
	.string "I expect you'll let me join you\n"
	.string "next time, how's that?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFIntro_hns::
#if GERMAN
	.string "Ich bin Triathlet {STR_VAR_1}.$"
#else
	.string "I'm the TRIATHLETE {STR_VAR_1}!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon1_hns::
#if GERMAN
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann, und ein$"
#else
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon2Ask_hns::
#if GERMAN
	.string "{STR_VAR_2}, das {STR_VAR_1} kann. So\n"
	.string "sieht mein Paar aus.\p"
	.string "Was meinst du? Ich würde sagen, wir\n"
	.string "würden ein gutes Team abgeben.$"
#else
	.string "another {STR_VAR_2} that knows how\n"
	.string "to use {STR_VAR_1}. That's my pair.\p"
	.string "What do you think?\n"
	.string "We'd make a good team, I'd say.$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFAccept_hns::
#if GERMAN
	.string "Das wollte ich hören!\n"
	.string "Ich melde uns schnell an.$"
#else
	.string "I like that answer!\n"
	.string "I'll get done with registration fast!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFReject_hns::
#if GERMAN
	.string "Du gibst mir aber nochmal die Chance,\n"
	.string "mit dir ein Team zu bilden, oder?$"
#else
	.string "You'll give me another chance to form\n"
	.string "a partnership, won't you?$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMIntro_hns::
#if GERMAN
	.string "Hallo! Ich bin {STR_VAR_1},\n"
	.string "ein Schwimmer.$"
#else
	.string "Hi, there! Hello!\n"
	.string "I'm {STR_VAR_1}, and I'm a SWIMMER!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon1_hns::
#if GERMAN
	.string "Schau dir mal diese Prachtexemplare an!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
#else
	.string "Check out what I've been raising!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon2Ask_hns::
#if GERMAN
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Niedlich, was? Und beeindruckend?\n"
	.string "Bildest du mit uns ein perfektes Team?$"
#else
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Sweet, huh?\n"
	.string "It'd be sweet to form a team, too!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMAccept_hns::
#if GERMAN
	.string "Fantastisch!\n"
	.string "Ich registriere uns!$"
#else
	.string "Much obliged!\n"
	.string "I'll get this registration thing done!$"
#endif

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMReject_hns::
#if GERMAN
	.string "Nächstes Mal, wenn wir uns treffen,\n"
	.string "müssen wir aber ein Team bilden!!!$"
#else
	.string "If we meet again, you have to team up\n"
	.string "with me. You'll do that, right?$"
#endif

