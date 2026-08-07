TohjoFalls_GiovanniRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TohjoFalls_GiovanniRoom_OnTransition
	.byte 0

TohjoFalls_GiovanniRoom_OnTransition::
	specialvar VAR_RESULT, CheckCelebi
	goto_if_eq VAR_RESULT, TRUE, TohjoFalls_GiovanniRoom_SetScene
	setvar VAR_TOHJO_FALLS_GIOVANNI_STATE, 0
	end

TohjoFalls_GiovanniRoom_SetScene::
	setflag FLAG_HIDE_TOHJO_GIOVANNI
	goto_if_ne VAR_TOHJO_FALLS_GIOVANNI_STATE, 0, TohjoFalls_GiovanniRoom_DoNothing
	setvar VAR_TOHJO_FALLS_GIOVANNI_STATE, 1
	end

TohjoFalls_GiovanniRoom_DoNothing::
	end

TohjoFalls_GiovanniRoom_EventScript_Radio::
	msgbox TohjoFalls_GiovanniRoom_Text_RadioObject, MSGBOX_SIGN
	end

TohjoFalls_GiovanniRoom_Text_RadioObject::
#if GERMAN
	.string "Ein Radio…\n"
	.string "Die Batterie ist leer…$"
#else
	.string "A radio...\n"
	.string "The battery is dead...$"
#endif

TohjoFalls_GiovanniRoom_CancelScene::
	setvar VAR_TOHJO_FALLS_GIOVANNI_STATE, 0
	end

TohjoFalls_EventScript_GiovanniSceneRight::
	specialvar VAR_RESULT, CheckCelebi
	goto_if_eq VAR_RESULT, FALSE, TohjoFalls_GiovanniRoom_CancelScene
	lock
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	goto TohjoFalls_EventScript_GiovanniScene

TohjoFalls_EventScript_GiovanniSceneLeft::
	specialvar VAR_RESULT, CheckCelebi
	goto_if_eq VAR_RESULT, FALSE, TohjoFalls_GiovanniRoom_CancelScene
	lock
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	goto TohjoFalls_EventScript_GiovanniScene

TohjoFalls_EventScript_GiovanniScene::
	specialvar VAR_RESULT, CheckCelebi
	goto_if_eq VAR_RESULT, FALSE, TohjoFalls_GiovanniRoom_CancelScene
	lock
	applymovement2 OBJ_EVENT_ID_FOLLOWER, TohjoFalls_Movement_CelebiBegin
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement 0
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	delay 20
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	delay 60
	applymovement2 OBJ_EVENT_ID_FOLLOWER, TohjoFalls_Movement_CelebiSpin
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	@playse SE_M_PETAL_DANCE
	@delay 10
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitmovement 0
	fadescreen FADE_TO_WHITE
	playse SE_M_TELEPORT
	waitse
	delay 60
	playse SE_M_TELEPORT
	waitse
	clearflag FLAG_HIDE_TOHJO_GIOVANNI
	addobject LOCALID_TOHJOFALLS_GIOVANNI
	waitse
	playbgm MUS_HG_RADIO_ROCKET, TRUE
	fadescreen FADE_FROM_WHITE
	delay 50
	turnobject  OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox TohjoFalls_GiovanniRoom_Text_Radio, MSGBOX_DEFAULT
	closemessage
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	applymovement2 OBJ_EVENT_ID_FOLLOWER, Common_Movement_WalkUp1
	waitmovement 0
	waitmovement OBJ_EVENT_ID_FOLLOWER
	playse SE_PIN
	applymovement2 LOCALID_TOHJOFALLS_GIOVANNI, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_TOHJOFALLS_GIOVANNI, DIR_SOUTH
	msgbox TohjoFalls_GiovanniRoom_Text_GiovanniIntro, MSGBOX_DEFAULT
	applymovement2 LOCALID_TOHJOFALLS_GIOVANNI, Common_Movement_WalkDown1
	waitmovement 0
	msgbox TohjoFalls_GiovanniRoom_Text_GiovanniBeforeBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GIOVANNI_HNS, TohjoFalls_GiovanniRoom_Text_GiovanniDefeat
	playbgm MUS_HG_RADIO_ROCKET, TRUE
	applymovement2 LOCALID_TOHJOFALLS_GIOVANNI, TohjoFalls_Movement_GiovanniTakenAback
	waitmovement 0
	msgbox TohjoFalls_GiovanniRoom_Text_GiovanniAfter, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_TOHJOFALLS_GIOVANNI, TohjoFalls_Movement_GiovanniLeave
	waitmovement 0
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_TOHJOFALLS_GIOVANNI
	playse SE_EXIT
	fadescreen FADE_FROM_BLACK
	delay 30

	applymovement2 OBJ_EVENT_ID_FOLLOWER, TohjoFalls_Movement_CelebiBegin
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	waitmovement 0
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	delay 20
	playse SE_PIN
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	delay 60
	applymovement2 OBJ_EVENT_ID_FOLLOWER, TohjoFalls_Movement_CelebiSpin
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	@playse SE_M_PETAL_DANCE
	@delay 10
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitmovement 0
	fadescreen FADE_TO_WHITE
	playse SE_M_TELEPORT
	waitse
	delay 60
	playse SE_M_TELEPORT
	waitse
	fadedefaultbgm
	fadescreen FADE_FROM_WHITE
	setvar VAR_TOHJO_FALLS_GIOVANNI_STATE, 2
	release
	end

TohjoFalls_Movement_CelebiBegin:
	jump_in_place_up
	jump_in_place_up
	step_end

TohjoFalls_Movement_CelebiSpin:
	jump_in_place_up
	jump_in_place_up
	jump_in_place_up
	jump_in_place_up
	step_end

TohjoFalls_Movement_GiovanniTakenAback:
	lock_facing_direction
	walk_slow_up
	unlock_facing_direction
	walk_slow_right
	walk_slow_right
	step_end

TohjoFalls_Movement_GiovanniLeave:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	face_down
	walk_in_place_down
	step_end

TohjoFalls_GiovanniRoom_Text_Radio:
#if GERMAN
	.string "Radio: … …\n"
	.string "Ahem, wir sind Team Rocket!\p"
	.string "Nach drei Jahren Vorbereitung\n"
	.string "steigen wir wieder aus der Asche!\p"
	.string "Giovanni! Hörst du uns?\p"
	.string "Wir haben es geschafft!\p"
	.string "Wo ist unser Boss?\n"
	.string "Hört er zu?$"
#else
	.string "RADIO: ... ...\n"
	.string "Ahem, we are TEAM ROCKET!\l"
	.string "After three years of preparation,\l"
	.string "we have risen again from the ashes!\l"
	.string "GIOVANNI! Can you hear us?\l"
	.string "We did it!\l"
	.string "Where is our boss?\l"
	.string "Is he listening?$"
#endif

TohjoFalls_GiovanniRoom_Text_GiovanniIntro:
#if GERMAN
	.string "Giovanni: …\p"
	.string "Ich weiß nicht, warum du hier\n"
	.string "hergekommen bist.\p"
	.string "Jedenfalls muss ich dich warnen,\n"
	.string "dies ist kein Ort für Kinder wie dich.\p"
	.string "Du hast einen bestimmten Blick.\p"
	.string "Er erinnert mich an das Kind, das\n"
	.string "vor drei Jahren vor mir stand…\p"
	.string "Du hast die gleichen Augen…\p"
	.string "…\p"
	.string "Ich bin auf dem Weg nach {COLOR RED}Dukatia City{COLOR DARK_GRAY},\n"
	.string "um meinem Team beizutreten.\l"
	.string "Willst du mir im Weg stehen?$"
#else
	.string "GIOVANNI: ...\p"
	.string "I don't know why you have come\n"
	.string "here.\p"
	.string "Anyway, I have to warn you that\n"
	.string "this is not a place for kids like\l"
	.string "you.\p"
	.string "You have a certain look.\n"
	.string "It reminds me of the kid who stood\l"
	.string "in front of me three years ago...\p"
	.string "You have the same eyes...\p"
	.string "...\p"
	.string "I'm on my way to GOLDENROD CITY\n"
	.string "to answer the call and join my team.\l"
	.string "Are you going to get in my way?$"
#endif

TohjoFalls_GiovanniRoom_Text_GiovanniBeforeBattle:
#if GERMAN
	.string "Meine alten Gefährten brauchen mich…\n"
	.string "Wir werden den Fehler von vor drei\l"
	.string "Jahren nicht wiederholen!$"
#else
	.string "My old associates need me...\n"
	.string "We will not repeat the failure of\l"
	.string "three years ago!$"
#endif

TohjoFalls_GiovanniRoom_Text_GiovanniDefeat:
#if GERMAN
	.string "Wer oder was bist du?$"
#else
	.string "What in the world are you?$"
#endif

TohjoFalls_GiovanniRoom_Text_GiovanniAfter:
#if GERMAN
	.string "Giovanni: W-wie kann das sein?!?\p"
	.string "Sollen die letzten drei Jahre etwa\n"
	.string "umsonst gewesen sein?\p"
	.string "Schon wieder macht mir so ein Naseweis\n"
	.string "einen Strich durch die Rechnung!\p"
	.string "Team Rocket… mein großer Traum\n"
	.string "ist geplatzt. Es ist alles vorbei…$"
#else
	.string "GIOVANNI: How is this possible...?\n"
	.string "The past three years have been a\l"
	.string "waste...?\p"
	.string "How can a kid like you manage to\n"
	.string "destroy my dream once again?\p"
	.string "The precious dream of TEAM ROCKET\n"
	.string "has become little more than an\l"
	.string "illusion...$"
#endif
