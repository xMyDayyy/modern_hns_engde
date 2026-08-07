NationalPark_BugContest_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NationalPark_BugContest_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NationalPark_BugContest_OnFrame
	.byte 0

NationalPark_BugContest_OnTransition::
	goto_if_eq VAR_BUG_CONTEST_STATE, 3, NationalPark_BugContest_EventScript_JudgeScene
	end

NationalPark_BugContest_OnFrame::
	map_script_2 VAR_BUG_CONTEST_STATE, 1, NationalPark_BugContest_EventScript_Enter
	map_script_2 VAR_BUG_CONTEST_STATE, 5, NationalPark_BugContest_EventScript_EnterSide
	map_script_2 VAR_BUG_CONTEST_STATE, 3, NationalPark_BugContest_EventScript_JudgeSceneActivate
	.2byte 0


NationalPark_BugContest_EventScript_BC1::
	lock
	faceplayer
	msgbox NationalParkBugContest_Text_ContestantShaun, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_BugContest_EventScript_BC2::
	lock
	faceplayer
	msgbox NationalParkBugContest_Text_Contestant2A, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_BugContest_EventScript_Belinda::
	lock
	faceplayer
	msgbox NationalParkBugContest_Text_ContestantBelinda, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_BugContest_EventScript_Boy::
	lock
	faceplayer
	msgbox NationalParkBugContest_Text_Contestant6A, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_BugContest_EventScript_RelaxationSquare::
	lock
	msgbox NationalParkBugContest_Text_Sign_RelaxationSquare, MSGBOX_SIGN
	closemessage
	release
	end

NationalPark_BugContest_EventScript_BattleSign::
	lock
	msgbox NationalParkBugContest_Text_Sign_BattleNotice, MSGBOX_SIGN
	closemessage
	release
	end

NationalPark_BugContest_EventScript_TrainerTips::
	lock
	msgbox NationalParkBugContest_Text_TrainerTips, MSGBOX_SIGN
	closemessage
	release
	end

NationalPark_BugContest_EventScript_Trash::
	lock
	msgbox NationalPark_BugContest_Text_Trash, MSGBOX_SIGN
	closemessage
	release
	end

NationalPark_BugContest_EventScript_JudgeScene::
	special ShowBugContestChosenMon
	setobjectxyperm VAR_RESULT, 20, 29
	setobjectxyperm LOCALID_BUGCONTEST_BUG1, 24, 29
	setobjectxyperm LOCALID_BUGCONTEST_BUG2, 22, 29
	setobjectxyperm LOCALID_BUGCONTEST_BUG3, 18, 29
	setobjectxyperm LOCALID_BUGCONTEST_BUG4, 16, 29

	setobjectxyperm LOCALID_BUGCONTEST_GIRL, 18, 28
	setobjectxyperm LOCALID_BUGCONTEST_BC1, 22, 28
	setobjectxyperm LOCALID_BUGCONTEST_BC2, 24, 28
	setobjectxyperm LOCALID_BUGCONTEST_BOY, 16, 28
	setobjectxyperm LOCALID_BUGCONTEST_ATTENDANT, 20, 26

	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	setobjectmovementtype LOCALID_BUGCONTEST_GIRL, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_BUGCONTEST_BC1, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_BUGCONTEST_BC2, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_BUGCONTEST_BOY, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_BUGCONTEST_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
	end

NationalPark_BugContest_EventScript_JudgeSceneActivate::
	lockall
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto BugContestEventScript_Judging
	end


NationalPark_BugContest_EventScript_Enter::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	setvar VAR_BUG_CONTEST_STATE, 2
	msgbox NationlParkBugContest_Text_EnjoyTheContest, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

NationalPark_BugContest_EventScript_EnterSide::
	lockall
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	delay 20
	clearflag FLAG_HIDE_BUG_CONTEST_ATTENDANT_SIDE
	addobject LOCALID_BUGCONTEST_ATTENDANT_SIDE
	setvar VAR_TEMP_1, 1
	setvar VAR_BUG_CONTEST_STATE, 2
	msgbox NationlParkBugContest_Text_EnjoyTheContest, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

NationalPark_BugContest_EventScript_Trigger::
	lock
	turnobject LOCALID_BUGCONTEST_ATTENDANT, DIR_EAST
	goto NationalPark_BugContest_EventScript_RetireChoice
NationalPark_BugContest_EventScript_Attendant::
	lock
	faceplayer
	msgbox NationalParkBugContest_Text_Attendant, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, BugContest_EventScript_TimesUp
	msgbox NationlParkBugContest_Text_EnjoyTheContest, MSGBOX_DEFAULT
	closemessage
	release
	end

NationalPark_BugContest_EventScript_RetireChoice::
	msgbox NationalParkBugContest_Text_Attendant, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, BugContest_EventScript_TimesUp
	msgbox NationlParkBugContest_Text_EnjoyTheContest, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	release
	end

NationalPark_BugContest_Movement_AttendantSide:
	walk_in_place_left
	step_end

NationalPark_BugContest_Text_Trash:
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Möchtest du deine\n"
	.string "Briefe drucken, öffne sie und drücke\l"
	.string "Start.$"
#else
	.string "Nothing here.$"
#endif

NationlParkBugContest_Text_EnjoyTheContest:
#if GERMAN
	.string "Attendant: Viel Spaß!$"
#else
	.string "ATTENDANT: Enjoy the Contest!$"
#endif

NationalParkBugContest_Text_Attendant:
#if GERMAN
	.string "Was steht denn hier?\p"
	.string "Kämpfe sind nur im Gras gestattet.\p"
	.string "Nationalpark Büro des Wächters$"
#else
	.string "ATTENDANT: Would you like to end\n"
	.string "the contest?$"
#endif

NationalParkBugContest_Text_ContestantBelinda:
#if GERMAN
	.string "Uli: Ich werde hier der Gewinner sein!\n"
	.string "Wehe, du kommst mir in die Quere!$"
#else
	.string "BELINDA: I'm going to win!\n"
	.string "Don't bother me.$"
#endif

NationalParkBugContest_Text_Contestant2A:
#if GERMAN
	.string "Alan: Mein Parasek versetzt\n"
	.string "Pokémon mittels Pilzspore\l"
	.string "in einen tiefen Schlaf.$"
#else
	.string "ED: My PARASECT puts POKéMON to\n"
	.string "sleep with SPORE.$"
#endif

NationalParkBugContest_Text_ContestantShaun:
#if GERMAN
	.string "Wilhelm: Gewinnen ist mir nicht wichtig.\n"
	.string "Ich suche nur nach seltenen Pokémon!$"
#else
	.string "SHAUN: I'm not concerned about\n"
	.string "winning.\p"
	.string "I'm just looking for rare POKéMON.$"
#endif

NationalParkBugContest_Text_Contestant6A:
#if GERMAN
	.string "Till: Es ist wichtig, dass du darauf\n"
	.string "achtest, Käfer-Pokémon zu schwächen,\l"
	.string "bevor du einen Pokéball wirfst!$"
#else
	.string "BARRY: You should weaken bug\n"
	.string "POKéMON first,\p"
	.string "then throw a BALL.$"
#endif

NationalParkBugContest_Text_Contestant7A:
#if GERMAN
	.string "Cindy: Ich liebe Käfer-Pokémon.\n"
	.string "Du magst sie wohl auch.$"
#else
	.string "CINDY: I love bug POKéMON.\p"
	.string "I guess you must like them too.$"
#endif

NationalParkBugContest_Text_Contestant8A:
#if GERMAN
	.string "Enno: Seit meiner Kindheit sammele\n"
	.string "ich Käfer-Pokémon.\p"
	.string "Du kannst mich nicht besiegen!$"
#else
	.string "JOSH: I've been collecting bug\n"
	.string "POKéMON since I was just a baby.\p"
	.string "There's no way I'm going to lose!$"
#endif

NationalParkBugContest_Text_Contestant9A:
#if GERMAN
	.string "Guido: Wenn du Zeit für Gespräche\n"
	.string "hast, solltest du sie lieber dafür\l"
	.string "nutzen, Pokémon zu suchen!$"
#else
	.string "SAMUEL: If you've got the time to\n"
	.string "chat, go find some bug POKéMON.$"
#endif

NationalParkBugContest_Text_Contestant10A:
#if GERMAN
	.string "Michel: Ich habe so viele Bücher\n"
	.string "gelesen, dass ich eigentlich nur\l"
	.string "noch gewinnen kann!$"
#else
	.string "KIPP: I've studied about bug\n"
	.string "POKéMON a lot.\p"
	.string "I'm going to win for sure.$"
#endif

NationalParkBugContest_Text_Sign_RelaxationSquare:
#if GERMAN
	.string "Der Nationalpark\n"
	.string "Ein öffentlicher Ort der Erholung$"
#else
	.string "RELAXATION SQUARE\n"
	.string "NATIONAL PARK$"
#endif

NationalParkBugContest_Text_Sign_BattleNotice:
#if GERMAN
	.string "Da ist ein Flugblatt…\p"
	.string "Kämpfe sind nur im\n"
	.string "hohen Gras gestattet.\l"
	.string "- Das Büro des Wächters$"
#else
	.string "What is this notice?\p"
	.string "Please battle only in the grass.\p"
	.string "NATIONAL PARK WARDEN'S OFFICE$"
#endif

NationalParkBugContest_Text_TrainerTips:
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Möchtest du deine\n"
	.string "Briefe drucken, öffne sie und drücke\l"
	.string "Start.$"
#else
	.string "The NATIONAL PARK has different\n"
	.string "POKéMON during the BUG-CATCHING\l"
	.string "CONTEST.$"
#endif

