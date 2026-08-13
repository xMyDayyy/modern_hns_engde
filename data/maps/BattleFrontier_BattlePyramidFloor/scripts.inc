BattleFrontier_BattlePyramidFloor_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidFloor_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidFloor_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidFloor_OnTransition
	.byte 0

BattleFrontier_BattlePyramidFloor_OnFrame:
	map_script_2 VAR_TEMP_D, 1, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName
	.2byte 0

BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight::
	lockall
	@ pyramid_updatelight, cant use macro because it straddles the loop
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_UPDATE_LIGHT
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, PYRAMID_LIGHT_INCR_RADIUS
	setvar VAR_0x8007, SE_SAVE
	setvar VAR_RESULT, 0
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop::
	special CallBattlePyramidFunction
	delay 2
	goto_if_ne VAR_RESULT, 2, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop
	setvar VAR_TEMP_D, 0
	releaseall
	end

BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName::
	special ShowMapNamePopup
	setvar VAR_TEMP_F, 0
	end

BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic::
	playbgm MUS_B_PYRAMID, FALSE
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
	end

BattleFrontier_BattlePyramidFloor_OnResume:
	pyramid_setfloorpal
	frontier_getstatus
	switch VAR_TEMP_CHALLENGE_STATUS
	case 0, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	frontier_isbattletype BATTLE_TYPE_TRAINER  @ VAR_RESULT seems to be ignored here
	setvar VAR_TEMP_D, 1
BattleFrontier_BattlePyramidFloor_EventScript_ResetParty::
	pyramid_resetparty
	end

BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
	pyramid_set PYRAMID_DATA_TRAINER_FLAGS, 255
BattleFrontier_BattlePyramid_EventScript_WarpToLobby::
	pyramid_updatelight 0, PYRAMID_LIGHT_SET_RADIUS
	pyramid_clearhelditems
	special HealPlayerParty
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
	waitstate
	end

BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge::
	pyramid_save CHALLENGE_STATUS_SAVING
	special SavePlayerParty
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	pyramid_settrainers
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidFloor_OnTransition:
	call BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius::
	pyramid_updatelight 32, PYRAMID_LIGHT_SET_RADIUS
	return

BattlePyramid_WarpToNextFloor::
	call BattleFrontier_EventScript_IncrementWinStreak
	frontier_get FRONTIER_DATA_BATTLE_NUM  @ Floor number
	addvar VAR_RESULT, 1
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
	goto_if_eq VAR_RESULT, 7, BattlePyramid_WarpToTop
	pyramid_seedfloor
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_RESULT, 0
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
	waitstate
	end

BattlePyramid_WarpToTop::
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 17, 17
	waitstate
	end

@ TRAINER_PHILLIP is used as a placeholder
BattlePyramid_TrainerBattle::
	facilitytrainerbattle FACILITY_BATTLE_PYRAMID
	pyramid_showhint
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BattlePyramid_FindItemBall::
	pyramid_setitem
	callstd STD_FIND_ITEM
	goto_if_eq VAR_0x8007, 0, BattlePyramid_FindItemBallEnd
	pyramid_hideitem
BattlePyramid_FindItemBallEnd::
	end

BattlePyramid_Retire::
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost

@ Also used by Trainer Hill
BattleFacility_TrainerBattle_PlaceholderText:
#if GERMAN
	.string "Dies ist ein Beispiel.$"
#else
	.string "This is a sample message.$"
#endif

gText_BattlePyramidConfirmRest::
#if GERMAN
	.string "Dein Abenteuer in der Kampfpyramide\n"
	.string "wird gespeichert, damit du es\l"
	.string "unterbrechen kannst. Einverstanden?$"
#else
	.string "Your BATTLE PYRAMID quest will be\n"
	.string "saved so that you may quit for now.\l"
	.string "Is that okay?$"
#endif

gText_BattlePyramidConfirmRetire::
#if GERMAN
	.string "Möchtest du das Abenteuer in der\n"
	.string "Kampfpyramide wirklich unterbrechen?$"
#else
	.string "Are you sure you want to quit your\n"
	.string "PYRAMID quest?$"
#endif

BattlePyramid_Text_ExitHintUp1::
#if GERMAN
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"
#else
	.string "This floor's exit is in\n"
	.string "that direction: {UP_ARROW}$"
#endif

BattlePyramid_Text_ExitHintLeft1::
#if GERMAN
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {LEFT_ARROW}$"
#else
	.string "This floor's exit is in\n"
	.string "that direction: {LEFT_ARROW}$"
#endif

BattlePyramid_Text_ExitHintRight1::
#if GERMAN
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {RIGHT_ARROW}$"
#else
	.string "This floor's exit is in\n"
	.string "that direction: {RIGHT_ARROW}$"
#endif

BattlePyramid_Text_ExitHintDown1::
#if GERMAN
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {DOWN_ARROW}$"
#else
	.string "This floor's exit is in\n"
	.string "that direction: {DOWN_ARROW}$"
#endif

BattlePyramid_Text_ExitHintUp2::
#if GERMAN
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"
#else
	.string "The exit on this floor is in\n"
	.string "the {UP_ARROW} direction.$"
#endif

BattlePyramid_Text_ExitHintLeft2::
#if GERMAN
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {LEFT_ARROW}$"
#else
	.string "The exit on this floor is in\n"
	.string "the {LEFT_ARROW} direction.$"
#endif

BattlePyramid_Text_ExitHintRight2::
#if GERMAN
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {RIGHT_ARROW}$"
#else
	.string "The exit on this floor is in\n"
	.string "the {RIGHT_ARROW} direction.$"
#endif

BattlePyramid_Text_ExitHintDown2::
#if GERMAN
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {DOWN_ARROW}$"
#else
	.string "The exit on this floor is in\n"
	.string "the {DOWN_ARROW} direction.$"
#endif

BattlePyramid_Text_ExitHintUp3::
#if GERMAN
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {UP_ARROW}$"
#else
	.string "The exit is over\n"
	.string "that {UP_ARROW} way.$"
#endif

BattlePyramid_Text_ExitHintLeft3::
#if GERMAN
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {LEFT_ARROW}$"
#else
	.string "The exit is over\n"
	.string "that {LEFT_ARROW} way.$"
#endif

BattlePyramid_Text_ExitHintRight3::
#if GERMAN
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {RIGHT_ARROW}$"
#else
	.string "The exit is over\n"
	.string "that {RIGHT_ARROW} way.$"
#endif

BattlePyramid_Text_ExitHintDown3::
#if GERMAN
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {DOWN_ARROW}$"
#else
	.string "The exit is over\n"
	.string "that {DOWN_ARROW} way.$"
#endif

BattlePyramid_Text_ExitHintUp4::
#if GERMAN
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {UP_ARROW}$"
#else
	.string "On this floor, the exit is somewhere\n"
	.string "in the {UP_ARROW} direction.$"
#endif

BattlePyramid_Text_ExitHintLeft4::
#if GERMAN
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {LEFT_ARROW}$"
#else
	.string "On this floor, the exit is somewhere\n"
	.string "in the {LEFT_ARROW} direction.$"
#endif

BattlePyramid_Text_ExitHintRight4::
#if GERMAN
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {RIGHT_ARROW}$"
#else
	.string "On this floor, the exit is somewhere\n"
	.string "in the {RIGHT_ARROW} direction.$"
#endif

BattlePyramid_Text_ExitHintDown4::
#if GERMAN
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {DOWN_ARROW}$"
#else
	.string "On this floor, the exit is somewhere\n"
	.string "in the {DOWN_ARROW} direction.$"
#endif

BattlePyramid_Text_ExitHintUp5::
#if GERMAN
	.string "Der Ausgang?\n"
	.string "Da entlang: {UP_ARROW}$"
#else
	.string "The exit?\n"
	.string "It's that {UP_ARROW} way.$"
#endif

BattlePyramid_Text_ExitHintLeft5::
#if GERMAN
	.string "Der Ausgang?\n"
	.string "Da entlang: {LEFT_ARROW}$"
#else
	.string "The exit?\n"
	.string "It's that {LEFT_ARROW} way.$"
#endif

BattlePyramid_Text_ExitHintRight5::
#if GERMAN
	.string "Der Ausgang?\n"
	.string "Da entlang: {RIGHT_ARROW}$"
#else
	.string "The exit?\n"
	.string "It's that {RIGHT_ARROW} way.$"
#endif

BattlePyramid_Text_ExitHintDown5::
#if GERMAN
	.string "Der Ausgang?\n"
	.string "Da entlang: {DOWN_ARROW}$"
#else
	.string "The exit?\n"
	.string "It's that {DOWN_ARROW} way.$"
#endif

BattlePyramid_Text_ExitHintUp6::
#if GERMAN
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {UP_ARROW}$"
#else
	.string "The exit happens to be in\n"
	.string "the {UP_ARROW} direction.$"
#endif

BattlePyramid_Text_ExitHintLeft6::
#if GERMAN
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {LEFT_ARROW}$"
#else
	.string "The exit happens to be in\n"
	.string "the {LEFT_ARROW} direction.$"
#endif

BattlePyramid_Text_ExitHintRight6::
#if GERMAN
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {RIGHT_ARROW}$"
#else
	.string "The exit happens to be in\n"
	.string "the {RIGHT_ARROW} direction.$"
#endif

BattlePyramid_Text_ExitHintDown6::
#if GERMAN
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {DOWN_ARROW}$"
#else
	.string "The exit happens to be in\n"
	.string "the {DOWN_ARROW} direction.$"
#endif

BattlePyramid_Text_EightItemsRemaining1::
#if GERMAN
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch acht Items versteckt.$"
#else
	.string "Are you looking for items?\p"
	.string "There are eight items left to\n"
	.string "be found.$"
#endif

BattlePyramid_Text_SevenItemsRemaining1::
#if GERMAN
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch sieben Items versteckt.$"
#else
	.string "Are you looking for items?\p"
	.string "There are seven items left to\n"
	.string "be found.$"
#endif

BattlePyramid_Text_SixItemsRemaining1::
#if GERMAN
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch sechs Items versteckt.$"
#else
	.string "Are you looking for items?\p"
	.string "There are six items left to\n"
	.string "be found.$"
#endif

BattlePyramid_Text_FiveItemsRemaining1::
#if GERMAN
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch fünf Items versteckt.$"
#else
	.string "Are you looking for items?\p"
	.string "There are five items left to\n"
	.string "be found.$"
#endif

BattlePyramid_Text_FourItemsRemaining1::
#if GERMAN
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch vier Items versteckt.$"
#else
	.string "Are you looking for items?\p"
	.string "There are four items left to\n"
	.string "be found.$"
#endif

BattlePyramid_Text_ThreeItemsRemaining1::
#if GERMAN
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch drei Items versteckt.$"
#else
	.string "Are you looking for items?\p"
	.string "There are three items left to\n"
	.string "be found.$"
#endif

BattlePyramid_Text_TwoItemsRemaining1::
#if GERMAN
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch zwei Items versteckt.$"
#else
	.string "Are you looking for items?\p"
	.string "There are two items left to\n"
	.string "be found.$"
#endif

BattlePyramid_Text_OneItemRemaining1::
#if GERMAN
	.string "Suchst du nach Items?\p"
	.string "Hier ist noch ein Item versteckt.$"
#else
	.string "Are you looking for items?\p"
	.string "There is one item left to\n"
	.string "be found.$"
#endif

BattlePyramid_Text_ZeroItemsRemaining1::
#if GERMAN
	.string "Suchst du nach Items?\p"
	.string "Hier gibt es keine mehr.$"
#else
	.string "Are you looking for items?\p"
	.string "There isn't anything left to\n"
	.string "be found!$"
#endif

BattlePyramid_Text_EightItemsRemaining2::
#if GERMAN
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo acht Items\n"
	.string "versteckt.$"
#else
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are eight items\n"
	.string "lying around here.$"
#endif

BattlePyramid_Text_SevenItemsRemaining2::
#if GERMAN
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo sieben Items\n"
	.string "versteckt.$"
#else
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are seven items left\n"
	.string "lying around here.$"
#endif

BattlePyramid_Text_SixItemsRemaining2::
#if GERMAN
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo sechs Items\n"
	.string "versteckt.$"
#else
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are six items left\n"
	.string "lying around here.$"
#endif

BattlePyramid_Text_FiveItemsRemaining2::
#if GERMAN
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo fünf Items\n"
	.string "versteckt.$"
#else
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are five items left\n"
	.string "lying around here.$"
#endif

BattlePyramid_Text_FourItemsRemaining2::
#if GERMAN
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo vier Items\n"
	.string "versteckt.$"
#else
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are four items left\n"
	.string "lying around here.$"
#endif

BattlePyramid_Text_ThreeItemsRemaining2::
#if GERMAN
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo drei Items\n"
	.string "versteckt.$"
#else
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are three items left\n"
	.string "lying around here.$"
#endif

BattlePyramid_Text_TwoItemsRemaining2::
#if GERMAN
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo zwei Items\n"
	.string "versteckt.$"
#else
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are two items left\n"
	.string "lying around here.$"
#endif

BattlePyramid_Text_OneItemRemaining2::
#if GERMAN
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier ist irgendwo ein Item versteckt.$"
#else
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There is just one item\n"
	.string "lying around here.$"
#endif

BattlePyramid_Text_ZeroItemsRemaining2::
#if GERMAN
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind keine Items mehr versteckt.$"
#else
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There isn't anything left\n"
	.string "lying around here.$"
#endif

BattlePyramid_Text_EightItemsRemaining3::
#if GERMAN
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind acht Items versteckt.$"
#else
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are eight items left\n"
	.string "waiting to be found on this floor.$"
#endif

BattlePyramid_Text_SevenItemsRemaining3::
#if GERMAN
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind sieben Items versteckt.$"
#else
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are seven items left\n"
	.string "waiting to be found on this floor.$"
#endif

BattlePyramid_Text_SixItemsRemaining3::
#if GERMAN
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind sechs Items versteckt.$"
#else
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are six items left\n"
	.string "waiting to be found on this floor.$"
#endif

BattlePyramid_Text_FiveItemsRemaining3::
#if GERMAN
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind fünf Items versteckt.$"
#else
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are five items left\n"
	.string "waiting to be found on this floor.$"
#endif

BattlePyramid_Text_FourItemsRemaining3::
#if GERMAN
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind vier Items versteckt.$"
#else
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are four items left\n"
	.string "waiting to be found on this floor.$"
#endif

BattlePyramid_Text_ThreeItemsRemaining3::
#if GERMAN
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind drei Items versteckt.$"
#else
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are three items left\n"
	.string "waiting to be found on this floor.$"
#endif

BattlePyramid_Text_TwoItemsRemaining3::
#if GERMAN
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind zwei Items versteckt.$"
#else
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are two items left\n"
	.string "waiting to be found on this floor.$"
#endif

BattlePyramid_Text_OneItemRemaining3::
#if GERMAN
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "ist ein Item versteckt.$"
#else
	.string "How's your stock of items holding up?\p"
	.string "I reckon there's but one item left\n"
	.string "waiting to be found on this floor.$"
#endif

BattlePyramid_Text_ZeroItemsRemaining3::
#if GERMAN
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Auf dieser Ebene gibt es keine Items\n"
	.string "mehr. Pass auf dich auf!$"
#else
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are no more items\n"
	.string "waiting to be found on this floor.\l"
	.string "You take care now!$"
#endif

BattlePyramid_Text_EightItemsRemaining4::
#if GERMAN
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen acht Items versteckt\n"
	.string "zu sein.$"
#else
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be eight more\n"
	.string "items on the ground.$"
#endif

BattlePyramid_Text_SevenItemsRemaining4::
#if GERMAN
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen sieben Items versteckt\n"
	.string "zu sein.$"
#else
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be seven more\n"
	.string "items on the ground.$"
#endif

BattlePyramid_Text_SixItemsRemaining4::
#if GERMAN
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen sechs Items versteckt\n"
	.string "zu sein.$"
#else
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be six more\n"
	.string "items on the ground.$"
#endif

BattlePyramid_Text_FiveItemsRemaining4::
#if GERMAN
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen fünf Items versteckt\n"
	.string "zu sein.$"
#else
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be five more\n"
	.string "items on the ground.$"
#endif

BattlePyramid_Text_FourItemsRemaining4::
#if GERMAN
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen vier Items versteckt\n"
	.string "zu sein.$"
#else
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be four more\n"
	.string "items on the ground.$"
#endif

BattlePyramid_Text_ThreeItemsRemaining4::
#if GERMAN
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen drei Items versteckt\n"
	.string "zu sein.$"
#else
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be three more\n"
	.string "items on the ground.$"
#endif

BattlePyramid_Text_TwoItemsRemaining4::
#if GERMAN
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen zwei Items versteckt\n"
	.string "zu sein.$"
#else
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be two more\n"
	.string "items on the ground.$"
#endif

BattlePyramid_Text_OneItemRemaining4::
#if GERMAN
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheint ein Item versteckt\n"
	.string "zu sein.$"
#else
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appears to be only one more\n"
	.string "item on the ground.$"
#endif

BattlePyramid_Text_ZeroItemsRemaining4::
#if GERMAN
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Aber leider scheinen hier keine\n"
	.string "Items mehr versteckt zu sein.$"
#else
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be no more\n"
	.string "items on the ground.$"
#endif

BattlePyramid_Text_EightItemsRemaining5::
#if GERMAN
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… acht Items liegen.$"
#else
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are eight items…$"
#endif

BattlePyramid_Text_SevenItemsRemaining5::
#if GERMAN
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… sieben Items liegen.$"
#else
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are seven items…$"
#endif

BattlePyramid_Text_SixItemsRemaining5::
#if GERMAN
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… sechs Items liegen.$"
#else
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are six items…$"
#endif

BattlePyramid_Text_FiveItemsRemaining5::
#if GERMAN
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… fünf Items liegen.$"
#else
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are five items…$"
#endif

BattlePyramid_Text_FourItemsRemaining5::
#if GERMAN
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… vier Items liegen.$"
#else
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are four items…$"
#endif

BattlePyramid_Text_ThreeItemsRemaining5::
#if GERMAN
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… drei Items liegen.$"
#else
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are three items…$"
#endif

BattlePyramid_Text_TwoItemsRemaining5::
#if GERMAN
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… zwei Items liegen.$"
#else
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are two items…$"
#endif

BattlePyramid_Text_OneItemRemaining5::
#if GERMAN
	.string "Auf dieser Ebene der Pyramide\n"
	.string "soll… ein Item liegen.$"
#else
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there is one item…$"
#endif

BattlePyramid_Text_ZeroItemsRemaining5::
#if GERMAN
	.string "Auf dieser Ebene der Pyramide\n"
	.string "soll es keine Items geben…$"
#else
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are no items…$"
#endif

BattlePyramid_Text_EightItemsRemaining6::
#if GERMAN
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch acht\n"
	.string "weitere Items versteckt sein.$"
#else
	.string "Have you collected any items?\p"
	.string "I believe there are eight more\n"
	.string "items on this floor.$"
#endif

BattlePyramid_Text_SevenItemsRemaining6::
#if GERMAN
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch sieben\n"
	.string "weitere Items versteckt sein.$"
#else
	.string "Have you collected any items?\p"
	.string "I believe there are seven more\n"
	.string "items on this floor.$"
#endif

BattlePyramid_Text_SixItemsRemaining6::
#if GERMAN
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch sechs\n"
	.string "weitere Items versteckt sein.$"
#else
	.string "Have you collected any items?\p"
	.string "I believe there are six more\n"
	.string "items on this floor.$"
#endif

BattlePyramid_Text_FiveItemsRemaining6::
#if GERMAN
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch fünf\n"
	.string "weitere Items versteckt sein.$"
#else
	.string "Have you collected any items?\p"
	.string "I believe there are five more\n"
	.string "items on this floor.$"
#endif

BattlePyramid_Text_FourItemsRemaining6::
#if GERMAN
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch vier\n"
	.string "weitere Items versteckt sein.$"
#else
	.string "Have you collected any items?\p"
	.string "I believe there are four more\n"
	.string "items on this floor.$"
#endif

BattlePyramid_Text_ThreeItemsRemaining6::
#if GERMAN
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch drei\n"
	.string "weitere Items versteckt sein.$"
#else
	.string "Have you collected any items?\p"
	.string "I believe there are three more\n"
	.string "items on this floor.$"
#endif

BattlePyramid_Text_TwoItemsRemaining6::
#if GERMAN
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch zwei\n"
	.string "weitere Items versteckt sein.$"
#else
	.string "Have you collected any items?\p"
	.string "I believe there are two more\n"
	.string "items on this floor.$"
#endif

BattlePyramid_Text_OneItemRemaining6::
#if GERMAN
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müsste noch ein\n"
	.string "weiteres Item versteckt sein.$"
#else
	.string "Have you collected any items?\p"
	.string "I believe there is one more\n"
	.string "item on this floor.$"
#endif

BattlePyramid_Text_ZeroItemsRemaining6::
#if GERMAN
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier gibt es keine Items\n"
	.string "mehr.$"
#else
	.string "Have you collected any items?\p"
	.string "I believe there are no more\n"
	.string "items on this floor.$"
#endif

BattlePyramid_Text_SevenTrainersRemaining1::
#if GERMAN
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch sieben weitere\n"
	.string "starke Trainer auf dich!$"
#else
	.string "You were really awesome!\p"
	.string "But there are still seven tough\n"
	.string "TRAINERS other than me!$"
#endif

BattlePyramid_Text_SixTrainersRemaining1::
#if GERMAN
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch sechs weitere\n"
	.string "starke Trainer auf dich!$"
#else
	.string "You were really awesome!\p"
	.string "But there are still six tough\n"
	.string "TRAINERS other than me!$"
#endif

BattlePyramid_Text_FiveTrainersRemaining1::
#if GERMAN
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch fünf weitere\n"
	.string "starke Trainer auf dich!$"
#else
	.string "You were really awesome!\p"
	.string "But there are still five tough\n"
	.string "TRAINERS other than me!$"
#endif

BattlePyramid_Text_FourTrainersRemaining1::
#if GERMAN
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch vier weitere starke\n"
	.string "Trainer auf dich!$"
#else
	.string "You were really awesome!\p"
	.string "But there are still four tough\n"
	.string "TRAINERS other than me!$"
#endif

BattlePyramid_Text_ThreeTrainersRemaining1::
#if GERMAN
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch drei weitere starke\n"
	.string "Trainer auf dich!$"
#else
	.string "You were really awesome!\p"
	.string "But there are still three tough\n"
	.string "TRAINERS other than me!$"
#endif

BattlePyramid_Text_TwoTrainersRemaining1::
#if GERMAN
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch zwei weitere starke\n"
	.string "Trainer auf dich!$"
#else
	.string "You were really awesome!\p"
	.string "But there are still two tough\n"
	.string "TRAINERS other than me!$"
#endif

BattlePyramid_Text_OneTrainersRemaining1::
#if GERMAN
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es wartet noch ein weiterer\n"
	.string "starker Trainer auf dich!$"
#else
	.string "You were really awesome!\p"
	.string "But there's still one tough\n"
	.string "TRAINER other than me!$"
#endif

BattlePyramid_Text_ZeroTrainersRemaining1::
#if GERMAN
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es ist niemand mehr da, den\n"
	.string "du besiegen könntest.$"
#else
	.string "You were really awesome!\p"
	.string "There's no one left that\n"
	.string "can beat you!$"
#endif

BattlePyramid_Text_SevenTrainersRemaining2::
#if GERMAN
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch sieben weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
#else
	.string "This is so upsetting!\p"
	.string "But there are seven TRAINERS left!\n"
	.string "Someone will humble you!$"
#endif

BattlePyramid_Text_SixTrainersRemaining2::
#if GERMAN
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch sechs weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
#else
	.string "This is so upsetting!\p"
	.string "But there are six TRAINERS left!\n"
	.string "Someone will humble you!$"
#endif

BattlePyramid_Text_FiveTrainersRemaining2::
#if GERMAN
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch fünf weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
#else
	.string "This is so upsetting!\p"
	.string "But there are five TRAINERS left!\n"
	.string "Someone will humble you!$"
#endif

BattlePyramid_Text_FourTrainersRemaining2::
#if GERMAN
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch vier weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
#else
	.string "This is so upsetting!\p"
	.string "But there are four TRAINERS left!\n"
	.string "Someone will humble you!$"
#endif

BattlePyramid_Text_ThreeTrainersRemaining2::
#if GERMAN
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch drei weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
#else
	.string "This is so upsetting!\p"
	.string "But there are three TRAINERS left!\n"
	.string "Someone will humble you!$"
#endif

BattlePyramid_Text_TwoTrainersRemaining2::
#if GERMAN
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch zwei weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
#else
	.string "This is so upsetting!\p"
	.string "But there are two TRAINERS left!\n"
	.string "Someone will humble you!$"
#endif

BattlePyramid_Text_OneTrainersRemaining2::
#if GERMAN
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch einen weiteren\n"
	.string "Trainer. Der wird dich zu Fall bringen!$"
#else
	.string "This is so upsetting!\p"
	.string "But there's one TRAINER left!\n"
	.string "I'm sure you will be humbled!$"
#endif

BattlePyramid_Text_ZeroTrainersRemaining2::
#if GERMAN
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt keine weiteren Trainer!\n"
	.string "Keiner wird dich zu Fall bringen!$"
#else
	.string "This is so upsetting!\p"
	.string "But there are no more TRAINERS\n"
	.string "who can engage you!$"
#endif

BattlePyramid_Text_SevenTrainersRemaining3::
#if GERMAN
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch sieben weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"
#else
	.string "That's pretty impressive!\p"
	.string "But there are seven more TRAINERS\n"
	.string "on this floor. Can you beat them all?$"
#endif

BattlePyramid_Text_SixTrainersRemaining3::
#if GERMAN
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch sechs weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"
#else
	.string "That's pretty impressive!\p"
	.string "But there are six more TRAINERS\n"
	.string "on this floor. Can you beat them all?$"
#endif

BattlePyramid_Text_FiveTrainersRemaining3::
#if GERMAN
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch fünf weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"
#else
	.string "That's pretty impressive!\p"
	.string "But there are five more TRAINERS\n"
	.string "on this floor. Can you beat them all?$"
#endif

BattlePyramid_Text_FourTrainersRemaining3::
#if GERMAN
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch vier weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"
#else
	.string "That's pretty impressive!\p"
	.string "But there are four more TRAINERS\n"
	.string "on this floor. Can you beat them all?$"
#endif

BattlePyramid_Text_ThreeTrainersRemaining3::
#if GERMAN
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch drei weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"
#else
	.string "That's pretty impressive!\p"
	.string "But there are three more TRAINERS\n"
	.string "on this floor. Can you beat them all?$"
#endif

BattlePyramid_Text_TwoTrainersRemaining3::
#if GERMAN
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch zwei weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"
#else
	.string "That's pretty impressive!\p"
	.string "But there are two more TRAINERS\n"
	.string "on this floor. Can you beat them both?$"
#endif

BattlePyramid_Text_OneTrainersRemaining3::
#if GERMAN
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier ist noch ein weiterer\n"
	.string "Trainer. Kannst du den auch besiegen?$"
#else
	.string "That's pretty impressive!\p"
	.string "But there's still one more TRAINER\n"
	.string "on this floor. Can you prevail?$"
#endif

BattlePyramid_Text_ZeroTrainersRemaining3::
#if GERMAN
	.string "Wow! Das war beeindruckend!\p"
	.string "Du hast alle Trainer auf dieser\n"
	.string "Ebene besiegt.$"
#else
	.string "That's pretty impressive!\p"
	.string "You've gone through all the TRAINERS\n"
	.string "on this floor.$"
#endif

BattlePyramid_Text_SevenTrainersRemaining4::
#if GERMAN
	.string "Vielleicht kannst du die sieben Trainer\n"
	.string "auf dieser Ebene besiegen?$"
#else
	.string "Maybe you could sweep through\n"
	.string "the seven TRAINERS left on this floor.$"
#endif

BattlePyramid_Text_SixTrainersRemaining4::
#if GERMAN
	.string "Vielleicht kannst du die sechs Trainer\n"
	.string "auf dieser Ebene besiegen?$"
#else
	.string "Maybe you could sweep through\n"
	.string "the six TRAINERS left on this floor.$"
#endif

BattlePyramid_Text_FiveTrainersRemaining4::
#if GERMAN
	.string "Vielleicht kannst du die fünf Trainer\n"
	.string "auf dieser Ebene besiegen?$"
#else
	.string "Maybe you could sweep through\n"
	.string "the five TRAINERS left on this floor.$"
#endif

BattlePyramid_Text_FourTrainersRemaining4::
#if GERMAN
	.string "Vielleicht kannst du die vier Trainer\n"
	.string "auf dieser Ebene besiegen?$"
#else
	.string "Maybe you could sweep through\n"
	.string "the four TRAINERS left on this floor.$"
#endif

BattlePyramid_Text_ThreeTrainersRemaining4::
#if GERMAN
	.string "Vielleicht kannst du die drei Trainer\n"
	.string "auf dieser Ebene besiegen?$"
#else
	.string "Maybe you could sweep through\n"
	.string "the three TRAINERS left on this floor.$"
#endif

BattlePyramid_Text_TwoTrainersRemaining4::
#if GERMAN
	.string "Vielleicht kannst du die zwei Trainer\n"
	.string "auf dieser Ebene besiegen?$"
#else
	.string "Maybe you could sweep through\n"
	.string "the two TRAINERS left on this floor.$"
#endif

BattlePyramid_Text_OneTrainersRemaining4::
#if GERMAN
	.string "Vielleicht kannst du den Trainer\n"
	.string "auf dieser Ebene besiegen?$"
#else
	.string "Maybe you could complete your sweep\n"
	.string "with the one TRAINER left on this floor.$"
#endif

BattlePyramid_Text_ZeroTrainersRemaining4::
#if GERMAN
	.string "Auf dieser Ebene ist niemand mehr, den\n"
	.string "du besiegen könntest.$"
#else
	.string "There isn't a single person left who\n"
	.string "can defeat you now…$"
#endif

BattlePyramid_Text_SevenTrainersRemaining5::
#if GERMAN
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die sieben Trainer hier zu besiegen.$"
#else
	.string "You may have what it takes to beat\n"
	.string "the seven expert TRAINERS who remain.$"
#endif

BattlePyramid_Text_SixTrainersRemaining5::
#if GERMAN
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die sechs Trainer hier zu besiegen.$"
#else
	.string "You may have what it takes to beat\n"
	.string "the six expert TRAINERS who remain.$"
#endif

BattlePyramid_Text_FiveTrainersRemaining5::
#if GERMAN
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die fünf Trainer hier zu besiegen.$"
#else
	.string "You may have what it takes to beat\n"
	.string "the five expert TRAINERS who remain.$"
#endif

BattlePyramid_Text_FourTrainersRemaining5::
#if GERMAN
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die vier Trainer hier zu besiegen.$"
#else
	.string "You may have what it takes to beat\n"
	.string "the four expert TRAINERS who remain.$"
#endif

BattlePyramid_Text_ThreeTrainersRemaining5::
#if GERMAN
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die drei Trainer hier zu besiegen.$"
#else
	.string "You may have what it takes to beat\n"
	.string "the three expert TRAINERS who remain.$"
#endif

BattlePyramid_Text_TwoTrainersRemaining5::
#if GERMAN
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die zwei Trainer hier zu besiegen.$"
#else
	.string "You may have what it takes to beat\n"
	.string "the two expert TRAINERS who remain.$"
#endif

BattlePyramid_Text_OneTrainersRemaining5::
#if GERMAN
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "den Trainer hier zu besiegen.$"
#else
	.string "You may have what it takes to beat\n"
	.string "the one expert TRAINER who remains.$"
#endif

BattlePyramid_Text_ZeroTrainersRemaining5::
#if GERMAN
	.string "Deine Fähigkeiten sind unerreichbar!\p"
	.string "Es sind keine Trainer mehr vorhanden,\n"
	.string "gegen die du antreten könntest.$"
#else
	.string "Your skills are beyond reproach.\p"
	.string "There are no more TRAINERS here\n"
	.string "who have any chance of beating you.$"
#endif

BattlePyramid_Text_SevenTrainersRemaining6::
#if GERMAN
	.string "Schaffst du es, die sieben\n"
	.string "verbleibenden Trainer zu besiegen?$"
#else
	.string "Can you keep winning against\n"
	.string "the seven remaining TRAINERS?$"
#endif

BattlePyramid_Text_SixTrainersRemaining6::
#if GERMAN
	.string "Schaffst du es, die sechs\n"
	.string "verbleibenden Trainer zu besiegen?$"
#else
	.string "Can you keep winning against\n"
	.string "the six remaining TRAINERS?$"
#endif

BattlePyramid_Text_FiveTrainersRemaining6::
#if GERMAN
	.string "Schaffst du es, die fünf verbleibenden\n"
	.string "Trainer zu besiegen?$"
#else
	.string "Can you keep winning against\n"
	.string "the five remaining TRAINERS?$"
#endif

BattlePyramid_Text_FourTrainersRemaining6::
#if GERMAN
	.string "Schaffst du es, die vier verbleibenden\n"
	.string "Trainer zu besiegen?$"
#else
	.string "Can you keep winning against\n"
	.string "the four remaining TRAINERS?$"
#endif

BattlePyramid_Text_ThreeTrainersRemaining6::
#if GERMAN
	.string "Schaffst du es, die drei verbleibenden\n"
	.string "Trainer zu besiegen?$"
#else
	.string "Can you keep winning against\n"
	.string "the three remaining TRAINERS?$"
#endif

BattlePyramid_Text_TwoTrainersRemaining6::
#if GERMAN
	.string "Schaffst du es, die zwei verbleibenden\n"
	.string "Trainer zu besiegen?$"
#else
	.string "Can you keep winning against\n"
	.string "the two remaining TRAINERS?$"
#endif

BattlePyramid_Text_OneTrainersRemaining6::
#if GERMAN
	.string "Schaffst du es, den verbleibenden\n"
	.string "Trainer zu besiegen?$"
#else
	.string "Can you keep winning against\n"
	.string "the last remaining TRAINER?$"
#endif

BattlePyramid_Text_ZeroTrainersRemaining6::
#if GERMAN
	.string "Es ist niemand mehr da, dem du dein\n"
	.string "Können zeigen kannst.$"
#else
	.string "There aren't any TRAINERS left that\n"
	.string "can take you on now…$"
#endif
