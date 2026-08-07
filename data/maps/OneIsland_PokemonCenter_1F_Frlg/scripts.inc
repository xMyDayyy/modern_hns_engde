OneIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_LOAD, OneIsland_PokemonCenter_1F_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_PokemonCenter_1F_OnFrame
	.byte 0

OneIsland_PokemonCenter_1F_OnLoad::
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
	call_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
	end

OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile::
	setmetatile 13, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Ruby, 1
	return

OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile::
	setmetatile 16, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Sapphire, 1
	return

OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn::
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
	setmetatile 14, 4, METATILE_PokemonCenterFrlg_NetworkMachine_ScreenLeft_On, 1
	setmetatile 15, 4, METATILE_PokemonCenterFrlg_NetworkMachine_ScreenRight_On, 1
	return

OneIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_ONE_ISLAND
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos
	end

OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone::
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
	return

OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos::
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 9, 8
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm LOCALID_CELIO, 15, 6
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_UP
	return

OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos::
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 14, 7
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm LOCALID_CELIO, 14, 8
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_LEFT
	return

OneIsland_PokemonCenter_1F_OnFrame::
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene
	.2byte 0

OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_CELIO, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_CELIO, Common_Movement_Delay48
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut
	msgbox OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	call_if_set FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp
	call_if_unset FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive
	msgbox OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours
	closemessage
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer
	msgreceiveditem OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill, ITEM_METEORITE, 1, MUS_RG_OBTAIN_KEY_ITEM
	additem ITEM_METEORITE
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ObtainedTriPass, ITEM_TRI_PASS, 1, MUS_RG_OBTAIN_KEY_ITEM
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap
	setflag FLAG_SYS_SEVII_MAP_123
	msgbox OneIsland_PokemonCenter_1F_Text_BillCatchYouLater
	closemessage
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	setflag FLAG_SYS_PC_STORAGE_DISABLED
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp::
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp
	return

OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp::
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp
	return

OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	message OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap
	waitmessage
	waitfanfare
	call EventScript_RestorePrevTextColor
	return

OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap::
	setflag FLAG_HIDE_TOWN_MAP
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ReceivedTownMap, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
	return

OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio::
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio::
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_in_place_faster_right
	step_end

@ Unused
OneIsland_PokemonCenter_1F_Movement_WalkUp:
	walk_up
	step_end

@ Unused
OneIsland_PokemonCenter_1F_Movement_StepAsideLeft::
	walk_left
	walk_in_place_faster_right
	step_end

OneIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

OneIsland_PokemonCenter_1F_EventScript_Bill::
	lock
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll
	msgbox OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis
	release
	end

OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll::
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_FacePlayer
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore
	release
	end

OneIsland_PokemonCenter_1F_EventScript_Celio::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7, OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire
	goto_if_set FLAG_RECOVERED_SAPPHIRE, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
	goto_if_set FLAG_GOT_RUBY, OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby
	specialvar VAR_RESULT, IsNationalPokedexEnabled
	goto_if_eq VAR_RESULT, TRUE, OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3, OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex
	msgbox OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost
	closemessage
	applymovement LOCALID_CELIO, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact::
	msgbox OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou
	random 3
	goto_if_eq VAR_RESULT, 0, OneIsland_PokemonCenter_1F_EventScript_BillFact1
	goto_if_eq VAR_RESULT, 1, OneIsland_PokemonCenter_1F_EventScript_BillFact2
	famechecker FAMECHECKER_BILL, 5
	msgbox OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk
	release
	end

OneIsland_PokemonCenter_1F_EventScript_BillFact1::
	famechecker FAMECHECKER_BILL, 3
	msgbox OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra
	release
	end

OneIsland_PokemonCenter_1F_EventScript_BillFact2::
	famechecker FAMECHECKER_BILL, 4
	msgbox OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod
	release
	end

OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire::
	msgbox OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck
	release
	end

OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_OBTAIN_TMHM
	message OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio
	waitmessage
	waitfanfare
	call EventScript_RestorePrevTextColor
	removeitem ITEM_SAPPHIRE
	msgbox OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime
	closemessage
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
	waitmovement 0
	playse SE_CLICK
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
	special DrawWholeMapView
	msgbox OneIsland_PokemonCenter_1F_Text_OkayThisIsGood
	closemessage
	delay 60
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
	waitmovement 0
	delay 30
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
	waitmovement 0
	delay 40
	playse SE_PC_ON
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
	special DrawWholeMapView
	msgbox OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou
	special SetPostgameFlags
	setflag FLAG_IS_CHAMPION
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
	setflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
	special InitRoamer
	release
	end

OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass::
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
	release
	end

OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby::
	msgbox OneIsland_PokemonCenter_1F_Text_OhThats
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_OBTAIN_TMHM
	message OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio
	waitmessage
	waitfanfare
	call EventScript_RestorePrevTextColor
	closemessage
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
	waitmovement 0
	playse SE_CLICK
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
	special DrawWholeMapView
	delay 30
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
	end

OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio::
	msgbox OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
	end

OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass::
	msgbox OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands
	removeitem ITEM_RUBY
	removeitem ITEM_TRI_PASS
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
	additem ITEM_RAINBOW_PASS
	setflag FLAG_SYS_SEVII_MAP_4567
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	message OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass
	waitmessage
	waitfanfare
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	message OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage
	waitmessage
	waitfanfare
	call EventScript_RestorePrevTextColor
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
	end

OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby::
	msgbox OneIsland_PokemonCenter_1F_Text_TryingToFindGem
	release
	end

OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby::
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
	release
	end

OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex::
	msgbox OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine
	release
	end

OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine::
	walk_in_place_up
	delay_8
	walk_in_place_up
	step_end

OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine::
	walk_in_place_faster_up
	walk_in_place_up
	delay_16
	walk_in_place_up
	walk_in_place_up
	step_end

OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
	end

OneIsland_PokemonCenter_1F_EventScript_Hiker::
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
	end

OneIsland_PokemonCenter_1F_EventScript_BattleGirl::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked
	msgbox OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend
	release
	end

OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked::
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
	release
	end

OneIsland_PokemonCenter_1F_EventScript_NetworkMachine::
	lockall
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto
	msgbox OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto::
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn::
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop::
	lockall
	setvar VAR_TEMP_1, 1
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop::
	lockall
	setvar VAR_TEMP_1, 2
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom::
	lockall
	setvar VAR_TEMP_1, 3
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom::
	lockall
	setvar VAR_TEMP_1, 4
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene::
	textcolor NPC_TEXT_COLOR_MALE
	playse SE_PIN
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer
	closemessage
	call_if_eq VAR_TEMP_1, 1, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop
	call_if_eq VAR_TEMP_1, 2, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop
	call_if_eq VAR_TEMP_1, 3, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom
	call_if_eq VAR_TEMP_1, 4, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom
	delay 10
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeGotItDone
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot
	msgbox OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe
	closemessage
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 10
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 15
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto
	closemessage
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 15
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime
	closemessage
	delay 25
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerExit
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_Movement_BillExit
	waitmovement 0
	playse SE_EXIT
	setflag FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
	clearflag FLAG_HIDE_CINNABAR_BILL
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 3
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
	setvar VAR_0x8006, SEAGALLOP_CINNABAR_ISLAND
	goto EventScript_SetSail
	end

OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop::
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop
	waitmovement 0
	return

OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop::
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop
	waitmovement 0
	return

OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom::
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom
	waitmovement 0
	return

OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom::
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom
	waitmovement 0
	return

OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop::
	walk_right
	walk_down
	walk_in_place_faster_right
	step_end

OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop::
	walk_right
	step_end

OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom::
	walk_right
	walk_up
	walk_in_place_faster_right
	step_end

OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom::
	walk_right
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

@ Unused
OneIsland_PokemonCenter_1F_Movement_DelayWalkInPlaceLeft::
	delay_16
	delay_16
	delay_4
	walk_in_place_faster_left
	step_end

@ Unused
OneIsland_PokemonCenter_1F_Movement_WalkInPlaceDown::
	walk_in_place_fast_down
	step_end

OneIsland_PokemonCenter_1F_Movement_PlayerExit::
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

OneIsland_PokemonCenter_1F_Movement_BillExit::
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio::
#if GERMAN
	.string "Bill: Hallo! Celio!$"
#else
	.string "BILL: Hey, there!\n"
	.string "CELIO!$"
#endif

OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut::
#if GERMAN
	.string "Celio: {COLOR RED}Bill{COLOR DARK_GRAY}!\n"
	.string "Ich kann nicht glauben, dass du\l"
	.string "hierher kommst!$"
#else
	.string "CELIO: BILL!\n"
	.string "I can't believe you came out here.$"
#endif

OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing::
#if GERMAN
	.string "Bill: Selbstverständlich!\n"
	.string "Was macht deine Forschungsarbeit?\p"
	.string "… oh, warte mal!$"
#else
	.string "BILL: Well, absolutely!\n"
	.string "How's your research coming along?\p"
	.string "…Oh, wait a sec.$"
#endif

OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio::
#if GERMAN
	.string "{PLAYER}, das ist mein Freund\n"
	.string "Celio!\l"
	.string "Er ist ein passionierter PC Maniac!$"
#else
	.string "{PLAYER}, this is my buddy CELIO.\n"
	.string "He's one dedicated PC MANIAC!$"
#endif

OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp::
#if GERMAN
	.string "Celio, das ist {PLAYER}! Ein\n"
	.string "aufstrebender Trainer auf dem\l"
	.string "Weg zum Pokémon Champ!$"
#else
	.string "CELIO, this is {PLAYER}, a rising\n"
	.string "contender as the POKéMON CHAMP!$"
#endif

OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp::
#if GERMAN
	.string "Celio, das ist {PLAYER}! Der\n"
	.string "amtierende Pokémon Champ!$"
#else
	.string "CELIO, this is {PLAYER}, the\n"
	.string "reigning POKéMON CHAMP!$"
#endif

OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive::
#if GERMAN
	.string "Celio: Das ist beeindruckend!\p"
	.string "Es tut mir Leid, aber ich habe\n"
	.string "nichts für das Kämpfen übrig.\p"
	.string "Egal! Freut mich, dich\n"
	.string "kennen zu lernen!$"
#else
	.string "CELIO: That's really impressive.\p"
	.string "I hate to say it, but I have zero\n"
	.string "aptitude for battling.\p"
	.string "Anyways, I'm glad to meet you.$"
#endif

OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed::
#if GERMAN
	.string "Bill: Was gibt es Neues?\n"
	.string "Was macht deine Maschine?$"
#else
	.string "BILL: So, bring me up to speed.\n"
	.string "How's your machine running?$"
#endif

OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours::
#if GERMAN
	.string "Celio: Sie läuft gut, aber wir sind\n"
	.string "einfach zu weit entfernt.\p"
	.string "Zwischen den PCs auf dieser\n"
	.string "Insel und deinem kann keine\l"
	.string "Verbindung hergestellt werden.$"
#else
	.string "CELIO: It's running fine, but we're\n"
	.string "too remote out here.\p"
	.string "The PCs on this island just can't\n"
	.string "link with your PC, BILL.$"
#endif

OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou::
#if GERMAN
	.string "Bill: Oh, wirklich?\n"
	.string "Lass mich mal sehen!\p"
	.string "… Moment noch…\n"
	.string "Ich denke, wir kriegen das hin.\l"
	.string "Darf ich dir helfen?$"
#else
	.string "BILL: Oh, yeah?\n"
	.string "Okay, let me take a look-see.\p"
	.string "…Hang on here…\n"
	.string "I think we can make it work.\l"
	.string "Let me help you, okay?$"
#endif

OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer::
#if GERMAN
	.string "{PLAYER}, darf ich dich bitten, vor\n"
	.string "der Tür auf mich zu warten?\p"
	.string "… kann ich dich um einen\n"
	.string "Gefallen bitten?\p"
	.string "Die Nachbarinsel heißt Eiland\n"
	.string "Zwei!\p"
	.string "Dort gibt es jemanden, der die\n"
	.string "Spielhalle betreibt.\p"
	.string "Er hat dieses Faible für seltene\n"
	.string "Steine und Juwelen.\p"
	.string "Wir bleiben in Kontakt!\p"
	.string "Darf ich dich bitten, diesen\n"
	.string "Meteoriten zu ihm zu bringen?$"
#else
	.string "{PLAYER}, can I get you to wait for\n"
	.string "me just a bit?\p"
	.string "…Actually, can I get you to do\n"
	.string "me a favor?\p"
	.string "The island next to this one's\n"
	.string "called TWO ISLAND.\p"
	.string "There's a guy there that runs\n"
	.string "a GAME CORNER.\p"
	.string "He has this thing for rare rocks\n"
	.string "and gems.\p"
	.string "We keep in touch, being fellow\n"
	.string "maniacs.\p"
	.string "So, can I get you to deliver this\n"
	.string "METEORITE to him?$"
#endif

OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill::
#if GERMAN
	.string "{PLAYER} nahm den Meteoriten\n"
	.string "von {COLOR RED}Bill{COLOR DARK_GRAY}.$"
#else
	.string "{PLAYER} accepted the METEORITE\n"
	.string "from BILL.$"
#endif

OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis::
#if GERMAN
	.string "Celio: {PLAYER}, nimm dies mit, wenn\n"
	.string "du nach Eiland Zwei gehst!$"
#else
	.string "CELIO: {PLAYER}, if you are going\n"
	.string "to TWO ISLAND, please take this.$"
#endif

OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands::
#if GERMAN
	.string "Es ist ein Pass für die Fähre,\n"
	.string "die zwischen den Inseln fährt.\p"
	.string "Damit kannst du Eiland Eins,\n"
	.string "Zwei und Drei bereisen.\p"
	.string "Oh, das kannst du auch gebrauchen!$"
#else
	.string "It's a PASS for the ferry service\n"
	.string "serving the local islands.\p"
	.string "It will let you travel between the\n"
	.string "ISLANDS ONE, TWO, and THREE.\p"
	.string "Oh, you should have this, too.$"
#endif

OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap::
#if GERMAN
	.string "Die Karte von {PLAYER} wurde\n"
	.string "erweitert.$"
#else
	.string "{PLAYER} received an extra page\n"
	.string "for the TOWN MAP!$"
#endif

OneIsland_PokemonCenter_1F_Text_ReceivedTownMap::
#if GERMAN
	.string "{PLAYER} erhält\n"
	.string "eine Karte!$"
#else
	.string "{PLAYER} received\n"
	.string "a TOWN MAP!$"
#endif

OneIsland_PokemonCenter_1F_Text_BillCatchYouLater::
#if GERMAN
	.string "Bill: Ich treff dich später!\n"
	.string "Richte dem Typen einen\l"
	.string "Gruß von mir aus!$"
#else
	.string "BILL: I'll catch you later!\n"
	.string "Say hi to the guy for me!$"
#endif

OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis::
#if GERMAN
	.string "Hm…\p"
	.string "Wie wäre es hiermit…$"
#else
	.string "Hmm…\p"
	.string "How about we try this like this…$"
#endif

OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore::
#if GERMAN
	.string "Oh, heh, {PLAYER}!\p"
	.string "Hast du das gesehen?\n"
	.string "Der PC funktioniert!\p"
	.string "Ich muss Celio hier ein\n"
	.string "paar Dinge zeigen!\p"
	.string "Du kannst dich noch ein\n"
	.string "wenig umsehen!$"
#else
	.string "Oh, hey, {PLAYER}!\p"
	.string "Did you see?\n"
	.string "We got the PC working!\p"
	.string "I've got a few things to show\n"
	.string "CELIO here.\p"
	.string "Can you go out on a stroll or\n"
	.string "something for a while more?$"
#endif

OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost::
#if GERMAN
	.string "Es tut mir Leid, dass ich so viel\n"
	.string "Zeit von {COLOR RED}Bill{COLOR DARK_GRAY} beanspruche!\p"
	.string "Entschuldige bitte auch, dass ich\n"
	.string "so ein schlechter Gastgeber bin!$"
#else
	.string "I'm sorry for taking up so much of\n"
	.string "BILL's time.\p"
	.string "I'm also sorry for being such a \n"
	.string "poor host on your visit here.$"
#endif

OneIsland_PokemonCenter_1F_Text_UsualPCServicesUnavailable::
#if GERMAN
	.string "Die normalen PC-Dienste sind\n"
	.string "nicht verfügbar…$"
#else
	.string "The usual PC services aren't\n"
	.string "available…$"
#endif

OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer::
#if GERMAN
	.string "Bill: Oh, hallo!\n"
	.string "{PLAYER}!$"
#else
	.string "BILL: Oh, hey!\n"
	.string "{PLAYER}!$"
#endif

OneIsland_PokemonCenter_1F_Text_BillWeGotItDone::
#if GERMAN
	.string "Bill: Was hat dich aufgehalten?\n"
	.string "Hast du dich amüsiert?\p"
	.string "Wir haben es geschafft!\n"
	.string "Die PCs laufen wieder!$"
#else
	.string "BILL: What kept you so long?\n"
	.string "Been out having a good time?\p"
	.string "We got it done.\n"
	.string "The PCs are up and running!$"
#endif

OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick::
#if GERMAN
	.string "Celio: Das haben wir unglaublich\n"
	.string "schnell erledigen können.\p"
	.string "{COLOR RED}Bill{COLOR DARK_GRAY} ist so wunderbar…$"
#else
	.string "CELIO: The job went incredibly\n"
	.string "quick.\p"
	.string "BILL is one amazing guy…$"
#endif

OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot::
#if GERMAN
	.string "Bill: Nein! Es gab für mich nicht\n"
	.string "mehr viel zu tun!\p"
	.string "Celio, das muss ich dir lassen.\n"
	.string "Du hast viel gelernt!$"
#else
	.string "BILL: No, no! There was almost\n"
	.string "nothing left for me to do.\p"
	.string "CELIO, I have to hand it to you.\n"
	.string "You've learned a lot.$"
#endif

OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe::
#if GERMAN
	.string "Celio: Oh, wirklich?\n"
	.string "Hehe…$"
#else
	.string "CELIO: Oh, really?\n"
	.string "Ehehe…$"
#endif

OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto::
#if GERMAN
	.string "Bill: Nun, da hast du es.\n"
	.string "Meine Arbeit ist getan.\l"
	.string "Wir können zurück nach Kanto.\p"
	.string "Celio wir sehen uns!$"
#else
	.string "BILL: Well, there you have it.\n"
	.string "I'm finished with the job.\l"
	.string "We should head back to KANTO.\p"
	.string "CELIO, I'll be seeing you again.$"
#endif

OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime::
#if GERMAN
	.string "Celio: {PLAYER}, es tut mir Leid,\n"
	.string "dass wir dich heute\l"
	.string "weggeschickt haben.\l"
	.string "Ich verspreche, dass ich dir die\l"
	.string "Gegend ein andermal zeige.$"
#else
	.string "CELIO: {PLAYER}, I'm really sorry\n"
	.string "that we sent you off alone today.\p"
	.string "I promise, I will show you around\n"
	.string "these islands sometime.$"
#endif

OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine::
#if GERMAN
	.string "Celio: Hallo! Du siehst sehr\n"
	.string "beschäftigt aus, wie immer!\p"
	.string "Wie es mir geht?\p"
	.string "Ich modifiziere das Netzwerk.\p"
	.string "Wenn ich fertig bin, sollst du die\n"
	.string "erste Person sein, die das Netzwerk\l"
	.string "benutzt, {PLAYER}!$"
#else
	.string "CELIO: Hello!\n"
	.string "You look awfully busy as always.\p"
	.string "How am I doing?\p"
	.string "Well, I'm modifying my Network\n"
	.string "Machine.\p"
	.string "When I get done with the machine,\n"
	.string "I hope you'll be first to use it,\l"
	.string "{PLAYER}.$"
#endif

OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful::
#if GERMAN
	.string "Celio: {PLAYER}, wie ist es bei dir\n"
	.string "gelaufen?\p"
	.string "Oh, aha!\n"
	.string "Du hast mehr Pokémon gefangen!\p"
	.string "Weißt du was?\n"
	.string "Es könnte vielleicht hilfreich sein.$"
#else
	.string "CELIO: {PLAYER}, how have things\n"
	.string "been for you?\p"
	.string "Oh, is that right?\n"
	.string "You've caught more POKéMON.\p"
	.string "Do you know what?\n"
	.string "Maybe I can be useful to you.$"
#endif

OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway::
#if GERMAN
	.string "Ich modifiziere momentan\n"
	.string "das Netzwerk.\p"
	.string "Ich richte es so ein, dass ein\n"
	.string "Tausch über lange Distanzen\l"
	.string "möglich ist.\l"
	.string "Wenn ich fertig bin, kannst du\l"
	.string "exotische Pokémon mit Trainern\l"
	.string "von nah und fern tauschen.$"
#else
	.string "I'm modifying the Network Machine\n"
	.string "right now.\p"
	.string "I'm changing it so it can handle\n"
	.string "trades over long distances.\p"
	.string "When I get finished, you'll be\n"
	.string "trading for exotic POKéMON from\l"
	.string "TRAINERS far away.$"
#endif

OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone::
#if GERMAN
	.string "Aber es gibt einen Haken!\p"
	.string "Damit die Maschine funktioniert,\n"
	.string "brauche ich einen speziellen\l"
	.string "Edelstein.\l"
	.string "Er soll hier auf Eiland Eins sein,\l"
	.string "aber ich habe ihn noch nicht\l"
	.string "gefunden!\p"
	.string "Wer weiß, wo er ist?$"
#else
	.string "But, there is a slight catch.\p"
	.string "For the link to work, the Machine\n"
	.string "needs a special gemstone.\p"
	.string "It's supposed to be on ONE ISLAND,\n"
	.string "but I haven't found one yet.\p"
	.string "Who knows where it could be.$"
#endif

OneIsland_PokemonCenter_1F_Text_TryingToFindGem::
#if GERMAN
	.string "Ich habe versucht, den Edelstein\n"
	.string "während meiner Forschungen\l"
	.string "zu finden.\l"
	.string "Am Ende habe ich weder beim\l"
	.string "Edelstein noch beim Forschen\l"
	.string "Fortschritte gemacht…\p"
	.string "Wenn ich mich auf {COLOR RED}Bill{COLOR DARK_GRAY} verlassen\n"
	.string "würde, wäre mein Fortschritt\l"
	.string "gewiss.\l"
	.string "Aber dieses Mal möchte ich es\l"
	.string "allein schaffen.$"
#else
	.string "I was trying to find the gem\n"
	.string "even while I was studying.\p"
	.string "As a result, I've made no headway\n"
	.string "in both my search and studies…\p"
	.string "If I relied on BILL, I'm sure my\n"
	.string "research would progress.\p"
	.string "But this time, I want to try to do\n"
	.string "things by myself.$"
#endif

OneIsland_PokemonCenter_1F_Text_OhThats::
#if GERMAN
	.string "Oh!\n"
	.string "Da-das ist…$"
#else
	.string "Oh!\n"
	.string "Th-that's…$"
#endif

OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio::
#if GERMAN
	.string "{PLAYER} gab Celio\n"
	.string "den Rubin!$"
#else
	.string "{PLAYER} handed the RUBY\n"
	.string "to CELIO.$"
#endif

OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor::
#if GERMAN
	.string "Dankeschön!\n"
	.string "{PLAYER}, du bist einzigartig!\p"
	.string "…………\n"
	.string "……\p"
	.string "Ähm… darf ich dich noch um\n"
	.string "einen weiteren Gefallen bitten?$"
#else
	.string "Thank you!\n"
	.string "{PLAYER}, you're simply amazing.\p"
	.string "… … …  … … …\p"
	.string "Um… May I ask one more giant favor\n"
	.string "of you?$"
#endif

OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp::
#if GERMAN
	.string "Es… es ist nichts Verrücktes.\n"
	.string "Bitte, ich brauche deine Hilfe!$"
#else
	.string "It… It's not anything weird.\n"
	.string "Please, I need your help.$"
#endif

OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands::
#if GERMAN
	.string "Während meines Studiums der\n"
	.string "Edelsteine, habe ich etwas\l"
	.string "Wichtiges herausgefunden.\l"
	.string "Es gibt einen weiteren Edelstein,\l"
	.string "der zum Rubin gehört.\p"
	.string "Der andere Edelstein wird auf\n"
	.string "Sevii Eiland vermutet.\p"
	.string "{PLAYER}, bitte, finde den anderen\n"
	.string "Edelstein.\p"
	.string "{PLAYER}, gib mir bitte deinen Pass\n"
	.string "für die Fähre und die Karte.$"
#else
	.string "While I was studying gemstones,\n"
	.string "I discovered something important.\p"
	.string "There is another gem that forms\n"
	.string "a pair with this RUBY.\p"
	.string "That other gemstone is supposed to\n"
	.string "be in the SEVII ISLANDS.\p"
	.string "{PLAYER}, please, I need you to go\n"
	.string "find the other gem.\p"
	.string "{PLAYER}, may I have your ferry\n"
	.string "PASS and the TOWN MAP?$"
#endif

OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass::
#if GERMAN
	.string "{PLAYER} gab den {COLOR RED}Tri-Pass{COLOR DARK_GRAY} zurück\n"
	.string "und erhält den {COLOR RED}Bunt-Pass{COLOR DARK_GRAY}!$"
#else
	.string "{PLAYER} returned the TRI-PASS and\n"
	.string "received the RAINBOW PASS.$"
#endif

OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage::
#if GERMAN
	.string "Die Karte wurde erweitert.$"
#else
	.string "Obtained an extra page for the\n"
	.string "TOWN MAP!$"
#endif

OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands::
#if GERMAN
	.string "Dies ist mein Pass für die Fähre.\p"
	.string "Damit kannst du nach\n"
	.string "Sevii Eiland.\p"
	.string "{PLAYER}, bitte, ich bin auf dich\n"
	.string "angewiesen!$"
#else
	.string "This is my own ferry PASS.\p"
	.string "It will let you get to all the\n"
	.string "SEVII ISLANDS.\p"
	.string "{PLAYER}, please, I can't do\n"
	.string "it without your help.$"
#endif

OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio::
#if GERMAN
	.string "{PLAYER} gab Celio den Saphir!$"
#else
	.string "{PLAYER} handed the SAPPHIRE\n"
	.string "to CELIO.$"
#endif

OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime::
#if GERMAN
	.string "Celio: Das ist also der Edelstein,\n"
	.string "der zum Rubin gehört…\p"
	.string "{PLAYER}, du hast das alles\n"
	.string "auf dich genommen, oder?\p"
	.string "Ich weiß, dass es nicht leicht war!\p"
	.string "Ich bin dir sehr dankbar!\p"
	.string "Jetzt muss ich für dich arbeiten!\n"
	.string "Lass mir ein wenig Zeit!$"
#else
	.string "CELIO: So this is the gem that\n"
	.string "forms a pair with the RUBY…\p"
	.string "{PLAYER}, you've gone through a lot\n"
	.string "to get this, didn't you?\p"
	.string "You don't have to tell me. I know\n"
	.string "it wasn't easy.\p"
	.string "Thank you so much!\p"
	.string "Now it's my turn to work for you!\n"
	.string "Please give me a little time.$"
#endif

OneIsland_PokemonCenter_1F_Text_OkayThisIsGood::
#if GERMAN
	.string "O.K., das ist gut…$"
#else
	.string "Okay, this is good…$"
#endif

OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette::
#if GERMAN
	.string "Heureka!\n"
	.string "Ich bin mit Lanette verbunden!$"
#else
	.string "I did it!\n"
	.string "I linked up with LANETTE!$"
#endif

OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou::
#if GERMAN
	.string "{PLAYER}…\n"
	.string "{PLAYER}, ich habe es geschafft!\p"
	.string "Ich konnte eine Verbindung zu den\n"
	.string "Trainern in Hoenn herstellen!\p"
	.string "Endlich funktioniert das\n"
	.string "Netzwerk!\p"
	.string "{PLAYER}, das habe ich nur dir\n"
	.string "zu verdanken!\p"
	.string "Dank dir hat sich mein Traum\n"
	.string "erfüllt…$"
#else
	.string "{PLAYER}…\n"
	.string "{PLAYER}, I did it!\p"
	.string "I've managed to link up with\n"
	.string "TRAINERS in the HOENN region!\p"
	.string "Finally, the Network Machine is\n"
	.string "fully operational!\p"
	.string "{PLAYER}, I owe it all to you!\p"
	.string "Thanks to you, my dream came\n"
	.string "true…$"
#endif

OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck::
#if GERMAN
	.string "Ich…\n"
	.string "Ich weine nicht!\p"
	.string "Das ist genug von meiner Seite!\p"
	.string "{PLAYER}, du fängst weiterhin\n"
	.string "exotische Pokémon, oder?\p"
	.string "Ich wünsche dir alles Gute!$"
#else
	.string "I…\n"
	.string "I'm not crying.\p"
	.string "That's enough about me!\p"
	.string "{PLAYER}, you're going to keep\n"
	.string "looking for exotic POKéMON, right?\p"
	.string "I wish you the best of luck!$"
#endif

OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou::
#if GERMAN
	.string "Celio: Hallo!\p"
	.string "{PLAYER}, ich habe Gerüchte über\n"
	.string "dich gehört!$"
#else
	.string "CELIO: Hello!\p"
	.string "{PLAYER}, I've been hearing rumors\n"
	.string "about you.$"
#endif

OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra::
#if GERMAN
	.string "{PLAYER}, was sind deine Lieblings-\n"
	.string "Pokémon?\p"
	.string "{COLOR RED}Bill{COLOR DARK_GRAY} ist ein Pokémaniac, also mag\n"
	.string "er alle Pokémon.\p"
	.string "Es scheint, dass Abra sein erstes\n"
	.string "Pokémon war!$"
#else
	.string "{PLAYER}, what's your favorite kind\n"
	.string "of POKéMON?\p"
	.string "BILL is a POKéMANIAC, so he loves\n"
	.string "every kind.\p"
	.string "Apparently, the first one he caught\n"
	.string "was an ABRA.$"
#endif

OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod::
#if GERMAN
	.string "Apropos, {PLAYER}, du bist doch\n"
	.string "aus {COLOR RED}Alabastia{COLOR DARK_GRAY}, oder?\p"
	.string "Ich hörte, das ist eine ruhige,\n"
	.string "angenehme Stadt.\p"
	.string "{COLOR RED}Bill{COLOR DARK_GRAY} kommt aus {COLOR RED}Dukatia City{COLOR DARK_GRAY},\n"
	.string "wo seine Familie noch lebt.\p"
	.string "Das ist eine eher geschäftige,\n"
	.string "lebhafte Stadt.\p"
	.string "Ich möchte eines Tages dorthin.$"
#else
	.string "By the way, {PLAYER}, you're from\n"
	.string "PALLET TOWN, aren't you?\p"
	.string "I've heard that it's a quiet and\n"
	.string "pleasant place.\p"
	.string "BILL's hometown is GOLDENROD CITY,\n"
	.string "where his folks still live.\p"
	.string "I've heard that it's quite the\n"
	.string "festive, bustling city.\p"
	.string "I'd like to go there one day.$"
#endif

OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk::
#if GERMAN
	.string "{PLAYER}, gibt es etwas, das du\n"
	.string "nicht leiden kannst?\p"
	.string "{COLOR RED}Bill{COLOR DARK_GRAY} kann offensichtlich\n"
	.string "Milch nicht leiden!$"
#else
	.string "{PLAYER}, is there anything that\n"
	.string "you can't stand?\p"
	.string "Apparently, BILL simply can't\n"
	.string "stomach milk at all.$"
#endif

OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt::
#if GERMAN
	.string "Oh, du bist fremd hier!\n"
	.string "Hallo! Wo kommst du her?\p"
	.string "… {COLOR RED}Alabastia{COLOR DARK_GRAY}?\n"
	.string "Das kenne ich nicht!$"
#else
	.string "Oh, you're a stranger here!\n"
	.string "Hi! Where did you come from?\p"
	.string "…PALLET TOWN?\n"
	.string "I don't know it!$"
#endif

OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland::
#if GERMAN
	.string "Auf dieser Insel gibt es einen\n"
	.string "gigantischen Vulkan!\p"
	.string "Er ist schon lange nicht mehr\n"
	.string "ausgebrochen, also kannst du\l"
	.string "beruhigt wandern!$"
#else
	.string "On this island, there's an enormous\n"
	.string "volcano.\p"
	.string "It hasn't erupted lately, so why\n"
	.string "not enjoy a hike?$"
#endif

OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend::
#if GERMAN
	.string "Ich wünschte, Pokémon mit\n"
	.string "meinem Freund, der weit weg\l"
	.string "wohnt, zu tauschen…$"
#else
	.string "I wish I could trade POKéMON with\n"
	.string "my boyfriend who lives far away…$"
#endif

OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend::
#if GERMAN
	.string "Ich habe mit meinem Freund, der\n"
	.string "weit weg wohnt, Pokémon\l"
	.string "getauscht!\l"
	.string "Jeder weiß, dass wir das dir und\l"
	.string "Celio zu verdanken haben!\l"
	.string "Also, danke!$"
#else
	.string "I traded POKéMON with my boyfriend\n"
	.string "far away!\p"
	.string "Everyone's saying that we can\n"
	.string "thank you and CELIO.\p"
	.string "So, thank you!$"
#endif

OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment::
#if GERMAN
	.string "Netzwerk\n"
	.string "Verbindungslevel 0\p"
	.string "… das Pokémon\n"
	.string "Lagerungs-System wird\l"
	.string "gewartet…$"
#else
	.string "Network Machine\n"
	.string "Link Level 0\p"
	.string "…POKéMON Storage System under\n"
	.string "adjustment…$"
#endif

OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto::
#if GERMAN
	.string "Netzwerk\n"
	.string "Verbindungslevel 1\p"
	.string "Verbindung mit Kanto\n"
	.string "hergestellt.$"
#else
	.string "Network Machine\n"
	.string "Link Level 1\p"
	.string "Link established with the KANTO\n"
	.string "region.$"
#endif

OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn::
#if GERMAN
	.string "Netzwerk\n"
	.string "Verbindungslevel 2\p"
	.string "Verbindung mit Kanto und\n"
	.string "Hoenn hergestellt.$"
#else
	.string "Network Machine\n"
	.string "Link Level 2\p"
	.string "Link established with the KANTO\n"
	.string "and HOENN regions.$"
#endif

OneIsland_PokemonCenter_1F_Text_ObtainedTriPass::
#if GERMAN
	.string "{COLOR RED}Tri-Pass{COLOR DARK_GRAY} erhalten!$"
#else
	.string "Obtained the TRI-PASS!$"
#endif

