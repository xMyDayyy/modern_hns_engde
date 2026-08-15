Route14_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route14_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route14_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route14_TriggerSuicune_5::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Route14_Movement_5
	waitmovement 0
	goto Route14_EventScript_Suicune

Route14_TriggerSuicune_4::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Route14_Movement_4
	waitmovement 0
	goto Route14_EventScript_Suicune

Route14_TriggerSuicune_3::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Route14_Movement_3
	waitmovement 0
	goto Route14_EventScript_Suicune

Route14_TriggerSuicune_2::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	goto Route14_EventScript_Suicune

Route14_TriggerSuicune_1::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	delay 60
	goto Route14_EventScript_Suicune

Route14_Movement_5:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route14_Movement_4:
	walk_right
	walk_right
	walk_right
	step_end

Route14_Movement_3:
	walk_right
	walk_right
	step_end

Route14_EventScript_Suicune::
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE14_SUICUNE, Route14_Movement_SuicuneLeave
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	playse SE_LEDGE
	waitse
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	playse SE_LEDGE
	delay 30
	waitmovement 0
	clearflag FLAG_HIDE_ROUTE14_EUSINE
	addobject LOCALID_ROUTE14_EUSINE
	applymovement LOCALID_ROUTE14_EUSINE, Route14_Movement_EusineEnter
	delay 60
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	waitmovement 0
	msgbox Route14_Text_Eusine, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE14_EUSINE, Route14_Movement_EusineLeave
	waitmovement 0
	setflag FLAG_HIDE_ROUTE14_EUSINE
	setflag FLAG_HIDE_ROUTE14_SUICUNE
	removeobject LOCALID_ROUTE14_SUICUNE
	removeobject LOCALID_ROUTE14_EUSINE
	setvar VAR_SUICUNE_ENCOUNTERS, 5
	call_if_ge VAR_CERULEAN_CITY_STATE, 3, CeruleanCity_Gym_SetSuicuneScene
	closemessage
	release
	end

Route14_Movement_SuicuneLeave:
	jump_in_place_left
	jump_in_place_left
	jump_in_place_left
	jump_2_up
	jump_2_up
	jump_2_up
	jump_2_up
	jump_2_up
	jump_2_up
	step_end

Route14_Movement_EusineEnter:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_slow_up
	walk_slow_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_slow_down
	walk_slow_down
	walk_slow_right
	step_end

Route14_Movement_EusineLeave:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Route14_EventScript_Carter::
	trainerbattle_single TRAINER_CARTER_HNS, Route14_Text_PokefanmCarterSeen, Route14_Text_PokefanmCarterBeaten, Route14_EventScript_RegisterCarter
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_RematchCarter
	msgbox Route14_Text_PokefanmCarterAfterBattle, MSGBOX_AUTOCLOSE
	end

Route14_EventScript_RegisterCarter::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route14_Text_CarterRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CARTER_HNS
	release
	end

Route14_EventScript_RematchCarter::
	trainerbattle_rematch TRAINER_CARTER_HNS, Route14_Text_CarterRematchIntro, Route14_Text_CarterRematchDefeat
	msgbox Route14_Text_CarterPostRematch, MSGBOX_AUTOCLOSE
	goto_if_defeated TRAINER_CARTER_2_HNS, Route14_EventScript_RematchCarterTryGiveItem
	end

Route14_EventScript_RematchCarterTryGiveItem::
	checkitem ITEM_TM_THUNDER_WAVE
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_NoOp
	giveitem ITEM_TM_THUNDER_WAVE
	closemessage
	end

Route14_EventScript_Roy::
	trainerbattle_single TRAINER_ROY_HNS, Route14_Text_BirdKeeperRoySeen, Route14_Text_BirdKeeperRoyBeaten
	msgbox Route14_Text_BirdKeeperRoyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route14_EventScript_Trevor::
	trainerbattle_single TRAINER_TREVOR_HNS, Route14_Text_PokefanmTrevorSeen, Route14_Text_PokefanmTrevorBeaten, Route14_EventScript_RegisterTrevor
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route14_EventScript_RematchTrevor
	msgbox Route14_Text_PokefanmTrevorAfterBattle, MSGBOX_AUTOCLOSE
	end

Route14_EventScript_RegisterTrevor::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route14_Text_TrevorRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_TREVOR_HNS
	release
	end

Route14_EventScript_RematchTrevor::
	trainerbattle_rematch TRAINER_TREVOR_HNS, Route14_Text_TrevorRematchIntro, Route14_Text_TrevorRematchDefeat
	msgbox Route14_Text_TrevorPostRematch, MSGBOX_AUTOCLOSE
	goto_if_defeated TRAINER_TREVOR_2_HNS, Route14_EventScript_RematchTrevorTryGiveItem
	end

Route14_EventScript_RematchTrevorTryGiveItem::
	checkitem ITEM_TM_WILL_O_WISP
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_NoOp
	giveitem ITEM_TM_WILL_O_WISP
	closemessage
	end



Route14_Text_Eusine:
#if GERMAN
	.string "Eusin: Das bist ja du, {PLAYER}!\p"
	.string "Aber diesmal schaffe ich es wirklich!\n"
	.string "Ich bin den ganzen Weg bis hierher\l"
	.string "gereist und weiß nun wieder etwas\l"
	.string "genauer, wo Suicune hin will!\p"
	.string "Eigentlich würde ich mein Wissen ja für\n"
	.string "mich behalten, aber vor Suicune will ich\l"
	.string "ganz offen sein.\p"
	.string "Daher will ich dir einen kleinen Hinweis\n"
	.string "geben!\p"
	.string "Suicune bevorzugt nördliche Ufer…\n"
	.string "und luftige Höhen…\l"
	.string "Dort soll man diesem Pokémon angeblich\l"
	.string "begegnen können!\p"
	.string "Wo genau das sein soll, weiß ich selbst\n"
	.string "auch noch nicht.\p"
	.string "Es wird also ein Wettlauf zwischen\n"
	.string "uns beiden, wer es zuerst herausfindet!$"
#else
	.string "EUSINE: {PLAYER}! Not again!\n"
	.string "I'll be there first next time!\p"
	.string "Having followed it here, I'm\n"
	.string "starting to understand what SUICUNE\l"
	.string "is after.\p"
	.string "To be honest, I would like to keep\n"
	.string "this information to myself.\p"
	.string "But I want to be an honest trainer\n"
	.string "in front of SUICUNE!\p"
	.string "That's why I am sharing a clue with\n"
	.string "you.\p"
	.string "It seems that...\n"
	.string "SUICUNE prefers a hilly place...\l"
	.string "Near water...\l"
	.string "Somewhere north...\p"
	.string "I don't know exactly where yet.\n"
	.string "It will just be you and me!\p"
	.string "Who'll find it first?\n"
	.string "I challenge you!$"
#endif

Route14_Text_PokefanmTrevorSeen:
#if GERMAN
	.string "Hi. Wusstest du…,\p"
	.string "dass Pokémon dich mehr mögen, wenn du\n"
	.string "sie an einem ihnen bekannten Platz\l"
	.string "trainierst?$"
#else
	.string "Hi. Did you know…?\p"
	.string "POKéMON get more friendly if you\n"
	.string "train them in a place that they\l"
	.string "remember.$"
#endif

Route14_Text_PokefanmTrevorBeaten:
#if GERMAN
	.string "Wo traf ich dieses Enton?$"
#else
	.string "Where did I meet this SCIZOR?$"
#endif

Route14_Text_PokefanmTrevorAfterBattle:
#if GERMAN
	.string "Gäbe es doch einen einfachen Weg, um\n"
	.string "festzustellen, wo ich meine Pokémon\l"
	.string "traf…$"
#else
	.string "If only there were an easy way to\n"
	.string "identify where I got my POKéMON…$"
#endif

Route14_Text_TrevorRegister:
#if GERMAN
	.string "Du bist interessant!\n"
	.string "Gibst du mir deine Nummer?$"
#else
	.string "You're interesting!\n"
	.string "Can I have your number?$"
#endif

Route14_Text_TrevorRematchIntro:
#if GERMAN
	.string "Ich habe mit meinen Pokémon an\n"
	.string "verschiedenen Orten trainiert!$"
#else
	.string "I've been training with my\n"
	.string "POKéMON in familiar places!$"
#endif

Route14_Text_TrevorRematchDefeat:
#if GERMAN
	.string "Ich brauche neue Orte…$"
#else
	.string "Maybe I need new places…$"
#endif

Route14_Text_TrevorPostRematch:
#if GERMAN
	.string "Freundschaft macht Pokémon stärker.\n"
	.string "Ich bin sicher!$"
#else
	.string "Friendship makes POKéMON\n"
	.string "stronger. I'm sure of it!$"
#endif

Route14_Text_PokefanmCarterSeen:
#if GERMAN
	.string "Mein Pokémon-Team zu sammeln hat mich\n"
	.string "viel Mühe gekostet! Los, kämpfen wir!$"
#else
	.string "Let me tell you, I had a hard time\n"
	.string "catching my prized POKéMON.$"
#endif

Route14_Text_PokefanmCarterBeaten:
#if GERMAN
	.string "Uaaaaah!$"
#else
	.string "Awaaah!$"
#endif

Route14_Text_PokefanmCarterAfterBattle:
#if GERMAN
	.string "Schiggy, Glumanda und Bisasam…\p"
	.string "Ich denke, das ist ein ausgeglichenes\n"
	.string "Team.$"
#else
	.string "TOTODILE, CYNDAQUIL, CHIKORITA…\p"
	.string "I think that's a well-balanced mix.$"
#endif

Route14_Text_CarterRegister:
#if GERMAN
	.string "Du kennst deine Starter!\n"
	.string "Gib mir deine Nummer!$"
#else
	.string "You know your starters!\n"
	.string "Let me get your number!$"
#endif

Route14_Text_CarterRematchIntro:
#if GERMAN
	.string "Ich habe seltene Starter gefunden.\n"
	.string "Kämpfe mit mir!$"
#else
	.string "I've found even more rare starters\n"
	.string "to show off! Battle me!$"
#endif

Route14_Text_CarterRematchDefeat:
#if GERMAN
	.string "Meine schönen Starter…$"
#else
	.string "My precious starters…$"
#endif

Route14_Text_CarterPostRematch:
#if GERMAN
	.string "Es gibt so viele Starter aus\n"
	.string "verschiedenen Regionen!$"
#else
	.string "There are so many starters from\n"
	.string "different regions to collect!$"
#endif

Route14_Text_BirdKeeperRoySeen:
#if GERMAN
	.string "Ich träume davon, mit meinen geliebten\n"
	.string "Vogel-Pokémon die Lüfte zu zerteilen!$"
#else
	.string "My dream is to fly with my beloved\n"
	.string "bird POKéMON.$"
#endif

Route14_Text_BirdKeeperRoyBeaten:
#if GERMAN
	.string "Aber so sehr ich auch mit den Armen\n"
	.string "schlage, fliegen kann ich nicht…$"
#else
	.string "I can dream, but I can't ever fly…$"
#endif

Route14_Text_BirdKeeperRoyAfterBattle:
#if GERMAN
	.string "Du hast bestimmt Pokémon, die die VM\n"
	.string "Fliegen beherrschen, oder?\l"
	.string "Haaach…\l"
	.string "Darum beneide ich dich wirklich!$"
#else
	.string "You have POKéMON that know the HM\n"
	.string "move FLY, don't you? I envy you.$"
#endif

Route14_EventScript_Pidgeotto::
	lockall
	faceplayer
	playmoncry SPECIES_PIDGEOTTO, CRY_MODE_NORMAL
	msgbox Route14_Text_Pidgeotto, MSGBOX_DEFAULT
	waitmoncry
	goto_if_set FLAG_GOT_ROUTE_14_AERIAL_ACE, Route14_EventScript_PidgeottoBlowPlayer
	msgbox Route14_Text_PidgeottoBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, Route14_EventScript_PidgeottoBlowPlayer
	fadescreen FADE_TO_BLACK
	special Bag_ChooseBerry
	waitstate
	removeitem VAR_ITEM_ID, 1
	goto_if_ne VAR_ITEM_ID, ITEM_QUALOT_BERRY, Route14_EventScript_PidgeottoDislikedBerry
	msgbox Route14_Text_PidgeottoAteBerry, MSGBOX_DEFAULT
	giveitem ITEM_TM_AERIAL_ACE
	setflag FLAG_GOT_ROUTE_14_AERIAL_ACE
Route14_EventScript_PidgeottoBlowPlayer::
	closemessage
	playse SE_M_TWISTER
	call_if_eq VAR_FACING, DIR_EAST, Route14_EventScript_PidgeottoBlowPlayerLeft
	releaseall
	end
Route14_EventScript_PidgeottoDislikedBerry::
	msgbox Route14_Text_PidgeottoTurnedAway, MSGBOX_DEFAULT
	goto Route14_EventScript_PidgeottoBlowPlayer

Route14_EventScript_PidgeottoBlowPlayerLeft::
	applymovement LOCALID_ROUTE14_PIDGEOTTO, Route14_Movement_JumpLeft
	applymovement OBJ_EVENT_ID_PLAYER, Route14_Movement_Player_BlownLeft
	waitmovement 0
	return

Route14_Movement_Player_BlownUp:
	lock_facing_direction
	walk_up
	walk_up
	unlock_facing_direction
	step_end

Route14_Movement_Player_BlownLeft:
	face_up
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_8
	face_down
	face_right
	face_up
	face_left
	face_down
	face_right
	face_up
	face_left
	face_down
	face_right
	face_up
	face_left
	lock_facing_direction
	walk_left
	walk_left
	unlock_facing_direction
	step_end

Route14_Movement_JumpUp:
	jump_in_place_up
	step_end

Route14_Movement_JumpLeft:
	jump_in_place_left
	step_end

Route14_Movement_StuckPidgeottoJump0:
	jump_in_place_up
	step_end

Route14_Movement_StuckPidgeottoJump:
	jump_2_up
	jump_in_place_left_right
	jump_in_place_left_right
	face_left
	step_end

Route14_Text_Pidgeotto:
#if GERMAN
	.string "Tauboga: Kaaaaa!$"
#else
	.string "PIDGEOTTO: Kaaaaa!$"
#endif
Route14_Text_PidgeottoBerry:
	.string "Dem Tauboga eine Beere geben?$"
Route14_Text_PidgeottoAteBerry:
#if GERMAN
	.string "Tauboga mag die Beere!$"
#else
	.string "PIDGEOTTO enjoyed the QUALOT BERRY!$"
#endif
Route14_Text_PidgeottoTurnedAway:
	.string "Tauboga mag das nicht!$"

