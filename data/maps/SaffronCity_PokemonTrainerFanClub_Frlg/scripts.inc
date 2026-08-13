SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_PokemonTrainerFanClub_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonTrainerFanClub_OnTransition
	.byte 0

SaffronCity_PokemonTrainerFanClub_OnFrame::
	map_script_2 VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
	.2byte 0

SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
	lockall
	textcolor NPC_TEXT_COLOR_FEMALE
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_Delay48
	waitmovement 0
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HuhYou
	closemessage
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow
	setvar VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
	releaseall
	end

SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer::
	delay_16
	delay_8
	walk_down
	delay_16
	walk_down
	delay_8
	walk_left
	step_end

SaffronCity_PokemonTrainerFanClub_OnTransition::
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2, SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
	end

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
	special Script_TryLoseFansFromPlayTime
	setvar VAR_0x8004, FANCLUB_MEMBER1
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER2
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER3
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER4
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER5
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER6
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER7
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
	setvar VAR_0x8004, FANCLUB_MEMBER8
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
	end

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, 5, 2
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, MOVEMENT_TYPE_FACE_UP
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, 7, 4
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, MOVEMENT_TYPE_FACE_LEFT
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, 2, 2
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, MOVEMENT_TYPE_FACE_UP
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 3, 4
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, MOVEMENT_TYPE_FACE_RIGHT
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_ROCKER, 4, 6
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_ROCKER, MOVEMENT_TYPE_FACE_UP
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 10, 3
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_WOMAN, MOVEMENT_TYPE_FACE_UP
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BEAUTY, 7, 5
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BEAUTY, MOVEMENT_TYPE_FACE_LEFT
	return

SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, 9, 6
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, MOVEMENT_TYPE_FACE_LEFT
	return

SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting::
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER1
	special Script_BufferFanClubTrainerName
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER4
	special Script_BufferFanClubTrainerName
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Youngster::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER2
	special Script_BufferFanClubTrainerName
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER3
	special Script_BufferFanClubTrainerName
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Woman::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER6
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Rocker::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER5
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_Beauty::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER7
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt::
	lock
	faceplayer
	setvar VAR_0x8004, FANCLUB_MEMBER8
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan::
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan
	release
	end

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan::
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster
	release
	end

SaffronCity_PokemonTrainerFanClub_Text_HuhYou::
#if GERMAN
	.string "Häh?\n"
	.string "Du…$"
#else
	.string "Huh?\n"
	.string "You…$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow::
#if GERMAN
	.string "Bist du vielleicht…\n"
	.string "… …\p"
	.string "Du bist es!\n"
	.string "Du bist {PLAYER}!\p"
	.string "Wir haben gerade über dich gesprochen!\n"
	.string "Wir sprachen davon, dass ein\l"
	.string "unglaublich starker Trainer\l"
	.string "aufgetaucht ist.\l"
	.string "Und dieser Trainer bist du!\l"
	.string "Du bist so cool!\p"
	.string "Also haben wir beschlossen einen\n"
	.string "Fanclub für dich zu gründen!\l"
	.string "Wir hoffen alle, dass du weiter kämpfst\l"
	.string "und uns beweist, wie cool du bist.\l"
	.string "So gewinnst du noch mehr Fans!$"
#else
	.string "Are you maybe…\n"
	.string "… …\p"
	.string "You are!\n"
	.string "You are {PLAYER}!\p"
	.string "We were just talking about you!\p"
	.string "We were talking about how an\n"
	.string "incredibly good TRAINER appeared.\p"
	.string "And that someone is you!\n"
	.string "You're so cool!\p"
	.string "So, we decided that we'll become\n"
	.string "your FAN CLUB!\p"
	.string "We all hope you'll keep battling\n"
	.string "and show us how cool you are.\p"
	.string "That way, maybe other people will\n"
	.string "become fans just like me.$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou::
#if GERMAN
	.string "Ich werde dich immer anfeuern!\p"
	.string "Los, {PLAYER}!$"
#else
	.string "I'll always be cheering for you!\p"
	.string "Go, {PLAYER}, go!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou::
#if GERMAN
	.string "Ich glaube immer fest an dich,\n"
	.string "{PLAYER}!\p"
	.string "Bitte zeige den anderen, wie du\n"
	.string "einen Kampf bestreitest.$"
#else
	.string "I'll always believe in you,\n"
	.string "{PLAYER}.\p"
	.string "Please show the others what you're\n"
	.string "like when you battle seriously.$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore::
#if GERMAN
	.string "Es tut mir Leid!\n"
	.string "Ich war einst dein Fan!\p"
	.string "Aber es scheint, du hast deine\n"
	.string "Motivation verloren.\p"
	.string "In jüngster Zeit war {STR_VAR_1}\n"
	.string "viel cooler.$"
#else
	.string "I'm sorry.\n"
	.string "I was your fan before.\p"
	.string "But now, you seem to have lost\n"
	.string "the drive you had before.\p"
	.string "Lately, I think {STR_VAR_1} has been\n"
	.string "a lot cooler.$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe::
#if GERMAN
	.string "Oh!\n"
	.string "{PLAYER}!\p"
	.string "Alle waren in letzter Zeit so\n"
	.string "begeistert von dir!\p"
	.string "Ich kann das gut verstehen!\n"
	.string "Ich weiß, dass du stark bist!\p"
	.string "Aber, weißt du was?\p"
	.string "Ich war einst ein Fan von {STR_VAR_1} und\n"
	.string "seitdem kann ich nicht aufhören ein Fan\l"
	.string "zu sein!$"
#else
	.string "Oh!\n"
	.string "{PLAYER}!\p"
	.string "Everyone's been all excited about\n"
	.string "you recently.\p"
	.string "I can understand why.\n"
	.string "I know that you're strong.\p"
	.string "But, do you know what?\p"
	.string "Once I became {STR_VAR_1}'s fan,\n"
	.string "I can't just stop being a fan.$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling::
#if GERMAN
	.string "Ich denke, dass kämpfende\n"
	.string "Trainer cool sind.\p"
	.string "Denkst du genauso?$"
#else
	.string "I think TRAINERS are so cool when\n"
	.string "they're battling.\p"
	.string "Don't you think so, too?$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts::
#if GERMAN
	.string "Oh! Es ist {PLAYER}!\n"
	.string "Zu cool!\p"
	.string "Oh!\n"
	.string "Oh, jawohl!\p"
	.string "Gibst du mir ein Autogramm?\n"
	.string "Auf meine Shorts?$"
#else
	.string "Oh! It's {PLAYER}!\n"
	.string "Too cool!\p"
	.string "Oh!\n"
	.string "Oh, yeah!\p"
	.string "Can you autograph something?\n"
	.string "How about my shorts?$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou::
#if GERMAN
	.string "Wie heiß es auch sein mag…\p"
	.string "Wie kalt es auch sein mag…\p"
	.string "Ich trage immer Shorts!\p"
	.string "Ich verlasse mich darauf, dass\n"
	.string "du weiterhin gewinnst.\p"
	.string "Ich glaube an dich, wie an meine\n"
	.string "Shorts!$"
#else
	.string "However hot it's been…\p"
	.string "And however cold it may get…\p"
	.string "I've always believed in, and worn,\n"
	.string "shorts!\p"
	.string "I'm counting on you to keep\n"
	.string "winning!\p"
	.string "I believe in you just as much as\n"
	.string "I believe in shorts!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero::
#if GERMAN
	.string "Rocko ist mein Held!\n"
	.string "Er ist der Mann unter den Männern!\p"
	.string "Hehe, meine Mutter hat etwas\n"
	.string "für mich gemacht!\p"
	.string "Sie hat mir “Rocko” auf\n"
	.string "meine Shorts gestickt!$"
#else
	.string "BROCK's my hero!\n"
	.string "He's a man among men!\p"
	.string "Heheh, I got my mom to do\n"
	.string "something for me.\p"
	.string "I got her to embroider “BROCK”\n"
	.string "on my shorts!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd::
#if GERMAN
	.string "……\p"
	.string "……\n"
	.string "Ich bin ein Fan von Rocko!\p"
	.string "Auch wenn ich sein einziger Fan bin,\n"
	.string "bleibe ich ihm treu.\l"
	.string "Das schwöre ich bei meinen Shorts.\l"
	.string "Ich werde immer sein Fan bleiben…\l"
	.string "… bis zum bitteren Ende!$"
#else
	.string "…  …\p"
	.string "…  …\n"
	.string "I'm BROCK's fan!\p"
	.string "Even if I were his only fan,\n"
	.string "I swear it on my rock-hard will,\l"
	.string "and on my shorts!\p"
	.string "I'll be his fan to the bitter end!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool::
#if GERMAN
	.string "Rocko ist einfach gigacool,\n"
	.string "daran gibt es keinen Zweifel!\p"
	.string "Ich möchte auch gerne so ein\n"
	.string "Kerl sein!$"
#else
	.string "BROCK's the last word on cool,\n"
	.string "end of story!\p"
	.string "Now there's a guy who I want to\n"
	.string "be like!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle::
#if GERMAN
	.string "{PLAYER}, ich durfte einem deiner\n"
	.string "Kämpfe beiwohnen.\p"
	.string "Das erinnert mich an meine\n"
	.string "eigene verlorene Jugend.\p"
	.string "Bitte sei weiterhin erfolgreich!\n"
	.string "Ich bin dein Fan!$"
#else
	.string "{PLAYER}, I've had the pleasure of\n"
	.string "watching you battle.\p"
	.string "It brings back sweet memories of\n"
	.string "my own long-lost youth.\p"
	.string "May you continue to find success.\n"
	.string "You have a fan in me!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence::
#if GERMAN
	.string "Ich bin weit gereist!\p"
	.string "Nie zuvor habe ich einen Trainer\n"
	.string "wie dich gesehen!\p"
	.string "Glaube an deine Fähigkeiten\n"
	.string "und kämpfe weiter!\p"
	.string "Versprich mir das, mein junges\n"
	.string "Idol!$"
#else
	.string "I have journeyed far and wide\n"
	.string "across the lands.\p"
	.string "But never have I seen a TRAINER\n"
	.string "of your magnificence.\p"
	.string "Take courage in your abilities\n"
	.string "and keep battling on!\p"
	.string "Make that a promise to me,\n"
	.string "my young idol!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre::
#if GERMAN
	.string "Hm…\n"
	.string "Und du bist?\p"
	.string "Wolltest du unserem Fanclub\n"
	.string "beitreten?$"
#else
	.string "Hmm…\n"
	.string "And you are?\p"
	.string "Were you hoping to sign up for\n"
	.string "a membership in our FAN CLUB?$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo::
#if GERMAN
	.string "Ah, du bist also {PLAYER}, von dem\n"
	.string "alle reden!\p"
	.string "Du siehst tatsächlich wie ein\n"
	.string "Gewinner aus!\p"
	.string "Aber damit ich dich als eine\n"
	.string "Kapazität für Pokémon ansehe,…\p"
	.string "……\p"
	.string "musst du noch einiges erreichen!$"
#else
	.string "Ah, so you are the much-\n"
	.string "talked-about {PLAYER}.\p"
	.string "You certainly do have the look of\n"
	.string "a winner.\p"
	.string "But for me to accept you as\n"
	.string "a true POKéMON great…\p"
	.string "… …\p"
	.string "You've still a ways to go!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning::
#if GERMAN
	.string "Wir alle hier sind Fans von \n"
	.string "Pokémon Trainern!\p"
	.string "Wie sie im Kampf auftreten…\n"
	.string "Sie sind der Inbegriff von Coolness!\l"
	.string "Wenn du weiterhin gewinnst, kann es\l"
	.string "sein, dass wir hier über dich sprechen!$"
#else
	.string "All of us gathered here are fans\n"
	.string "of POKéMON TRAINERS.\p"
	.string "The way they look in battle…\n"
	.string "They are the picture of coolness.\p"
	.string "Perhaps you will be talked about\n"
	.string "here, too, if you keep winning.$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay::
#if GERMAN
	.string "Es ist {PLAYER}!\n"
	.string "Es ist {PLAYER}!\p"
	.string "Ich möchte eines Tages wie\n"
	.string "{PLAYER} sein!$"
#else
	.string "It's {PLAYER}!\n"
	.string "It's {PLAYER}!\p"
	.string "I want to be like {PLAYER} one day!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan::
#if GERMAN
	.string "Keiner ist mehr ein Fan von\n"
	.string "{PLAYER}…\p"
	.string "Das heißt aber auch, dass ich\n"
	.string "{PLAYER} für mich alleine habe!\p"
	.string "Yo! Los!\n"
	.string "Mein Ein und Alles, {PLAYER}!$"
#else
	.string "Everyone stopped being {PLAYER}'s\n"
	.string "fan…\p"
	.string "But that means I can have {PLAYER}\n"
	.string "all to myself!\p"
	.string "Yay! Go for it!\n"
	.string "My one and only {PLAYER}!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina::
#if GERMAN
	.string "Weißt du was?\n"
	.string "Ich will wie Sabrina sein!\p"
	.string "Ich möchte auch ein Psychomädchen\n"
	.string "wie sie sein!$"
#else
	.string "Do you know what?\n"
	.string "I want to be like SABRINA!\p"
	.string "I want to be a psychic girl just\n"
	.string "like her!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan::
#if GERMAN
	.string "Auch wenn ich der letzte Fan wäre,\n"
	.string "ich würde immer zu Sabrina stehen!\p"
	.string "Ich träume davon wie Sabrina\n"
	.string "zu sein, süß und cool!\p"
	.string "Ich möchte auch ein Psychomädchen\n"
	.string "wie sie sein!$"
#else
	.string "Even if I'm the only one, I won't\n"
	.string "stop being SABRINA's fan.\p"
	.string "My dream is to be like SABRINA,\n"
	.string "cute, but cool.\p"
	.string "I want to be a psychic girl just\n"
	.string "like her!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay::
#if GERMAN
	.string "Ich frage mich, ob ich eines Tages auch\n"
	.string "ein cooler Trainer sein werde?$"
#else
	.string "I wonder if I can become a cool\n"
	.string "TRAINER one day?$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool::
#if GERMAN
	.string "Oh Mann!\n"
	.string "Cool! Einfach cool!\p"
	.string "… häh?\n"
	.string "Nein, nicht du!\p"
	.string "Nur dein Kampfstil! Der ist cool!$"
#else
	.string "Oh, man, oh, man!\n"
	.string "Cool! Too cool!\p"
	.string "…Huh?\n"
	.string "No, not you.\p"
	.string "Just the way you battle.\n"
	.string "That's cool.$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans::
#if GERMAN
	.string "Yo, {PLAYER}!\p"
	.string "Es scheint, dass ich der letzte\n"
	.string "verbleibende Fan von dir bin!\p"
	.string "Aber ich liebe es, der Einzige zu sein…\n"
	.string "Das ist nicht so anstrengend!\p"
	.string "Mach weiter so!$"
#else
	.string "Yo, {PLAYER}!\p"
	.string "Looks like I'm the only one left\n"
	.string "out of your fans.\p"
	.string "But, you know, I like being an only\n"
	.string "fan… It's less stressful.\p"
	.string "Keep up and at it!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks::
#if GERMAN
	.string "{STR_VAR_1} ist so cool!\n"
	.string "Ich mag die Sprechweise!\p"
	.string "Ich würde es sehr schätzen, diese\n"
	.string "Person einmal zu treffen.$"
#else
	.string "{STR_VAR_1}'s cool, huh?\n"
	.string "I love the way he talks.\p"
	.string "I'd really relish a chance to meet\n"
	.string "him in person once.$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan::
#if GERMAN
	.string "Häh, kannst du das glauben?\n"
	.string "Alle sind deine Fans!\p"
	.string "Also bin ich nach allem der einzige\n"
	.string "Fan von {STR_VAR_1}?\p"
	.string "He, der Einzige zu sein ist, genau\n"
	.string "nach meinem Geschmack!$"
#else
	.string "Huh, can you believe it?\n"
	.string "Everyone turned into your fans.\p"
	.string "So after all we've been through,\n"
	.string "I'm the lone {STR_VAR_1} fan?\p"
	.string "Eh, being the one and only\n"
	.string "{STR_VAR_1} fan's my style, anyway.$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle::
#if GERMAN
	.string "Oh, Wahnsinn!\n"
	.string "Du bist es wirklich, {PLAYER}!\p"
	.string "Ich muss dir sagen, dass ich\n"
	.string "deinen Kampfstil sehr bewundere.\p"
	.string "Ich hoffe, du machst so weiter!\n"
	.string "Dein treuester Fan steht vor dir!$"
#else
	.string "Oh, my goodness!\n"
	.string "Is it really you, {PLAYER}?\p"
	.string "I have to tell you, I adore the\n"
	.string "way you battle.\p"
	.string "I hope you'll keep at it.\n"
	.string "I'll be your number one fan!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan::
#if GERMAN
	.string "Oh, Wahnsinn!\n"
	.string "Wenn das nicht {PLAYER} ist!\p"
	.string "Es ist so traurig… ich musste\n"
	.string "feststellen, dass ich dein bester und\l"
	.string "einziger Fan bin!\l"
	.string "Nun, was soll ich tun?\l"
	.string "Lass mich dich wenigstens anfeuern!\p"
	.string "Los {PLAYER}!$"
#else
	.string "Oh, my goodness!\n"
	.string "If it isn't {PLAYER}!\p"
	.string "It's so disappointing… I realized\n"
	.string "I'm your number-one-and-only fan!\p"
	.string "Well, it can't be helped!\n"
	.string "Let me cheer you on, at least!\p"
	.string "Hurray, hurray, {PLAYER}!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire::
#if GERMAN
	.string "In letzter Zeit hatte {STR_VAR_1} einen\n"
	.string "Lauf!\l"
	.string "Sein Kampfstil… entspricht genau\l"
	.string "meiner Vorstellung!$"
#else
	.string "Recently, {STR_VAR_1} has been on\n"
	.string "fire.\p"
	.string "The way he battles… It's just \n"
	.string "the way that I like it!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou::
#if GERMAN
	.string "Oh, hallo!\n"
	.string "Wenn das nicht {PLAYER} ist!\p"
	.string "Seit kurzem sprechen alle über dich!\n"
	.string "Ich fühle mich allein, da ich {STR_VAR_1}\l"
	.string "bevorzuge!$"
#else
	.string "Oh, hello!\n"
	.string "If it isn't {PLAYER}!\p"
	.string "Lately, all everyone talks about\n"
	.string "is you.\p"
	.string "I'm feeling lonesome because I\n"
	.string "prefer {STR_VAR_1}.$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing::
#if GERMAN
	.string "Wunderbar!\n"
	.string "{PLAYER}, du bist wirklich toll!\p"
	.string "Anstatt nur zuzusehen, sollte ich\n"
	.string "besser auch ein Trainer werden!$"
#else
	.string "Amazing!\n"
	.string "{PLAYER}, you really are amazing!\p"
	.string "Instead of just watching, maybe\n"
	.string "I should become a TRAINER, too.$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan::
#if GERMAN
	.string "Ich bin dein einziger Fan…\n"
	.string "Seufz… diese Einsamkeit…\p"
	.string "Kannst du dich nicht ein wenig mehr\n"
	.string "anstrengen, damit die anderen dich\l"
	.string "wahrnehmen?$"
#else
	.string "I'm your only fan…\n"
	.string "Sigh… This is lonely…\p"
	.string "Can't you try harder and make the\n"
	.string "others take notice of you?$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity::
#if GERMAN
	.string "Mentor {STR_VAR_1} ist so würdevoll…\n"
	.string "Er ist genau mein Typ!\l"
	.string "Warum erkennen die anderen nicht die\l"
	.string "Würde, die er personifiziert?$"
#else
	.string "Master {STR_VAR_1} is so dignified…\n"
	.string "He is so my type.\p"
	.string "Why can't the others see the\n"
	.string "dignity he simply oozes?$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart::
#if GERMAN
	.string "Ich glaube aus tiefstem Herzen\n"
	.string "an meinen Mentor {STR_VAR_1}!\p"
	.string "Auch wenn ich der Einzige bin,\n"
	.string "der an ihn glaubt!\p"
	.string "Ich fühle mich nie alleine!\p"
	.string "Nicht, wenn ich an meinen\n"
	.string "Mentor {STR_VAR_1} denke!$"
#else
	.string "I believe in Master {STR_VAR_1}\n"
	.string "with all my heart.\p"
	.string "Even if I am the only one to\n"
	.string "believe in him.\p"
	.string "I won't ever feel lonesome, though.\p"
	.string "Not if I keep thinking about Master\n"
	.string "{STR_VAR_1}.$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational::
#if GERMAN
	.string "Yippie!\p"
	.string "Dein Kampfstil ist belehrend!\p"
	.string "Ich hoffe, deine Siegesserie\n"
	.string "hält an!$"
#else
	.string "Hiyah!\p"
	.string "Your battling style is most\n"
	.string "educational.\p"
	.string "I hope that you will keep plugging\n"
	.string "away at success, hiyah!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan::
#if GERMAN
	.string "Anstatt anderen beim Kämpfen\n"
	.string "zuzusehen, solltest du selbst kämpfen!\l"
	.string "… der Dojo Meister hat mich so\l"
	.string "zugerichtet…\p"
	.string "Aber das hält mich nicht ab,\n"
	.string "dein Fan zu sein!\p"
	.string "Ich muss dein Fan sein!$"
#else
	.string "Instead of just watching others\n"
	.string "battle, battle yourself!\p"
	.string "…My DOJO's MASTER chewed me out\n"
	.string "like that…\p"
	.string "But I won't let that stop me from\n"
	.string "being your fan!\p"
	.string "I can't stop being your fan!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect::
#if GERMAN
	.string "Yippie! Es gibt nur einen Trainer,\n"
	.string "den ich respektiere!\p"
	.string "Das ist kein Geringerer als mein\n"
	.string "Meister im Kampf-Dojo.\p"
	.string "Du solltest wie ich auch ein Fan\n"
	.string "von meinem Meister werden!$"
#else
	.string "Hiyah! There is but one TRAINER\n"
	.string "who has my respect.\p"
	.string "And that is none other than my\n"
	.string "MASTER at the FIGHTING DOJO.\p"
	.string "You should become a fan of my\n"
	.string "MASTER like me! Hiyah!$"
#endif

SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster::
#if GERMAN
	.string "Yippie! Ich respektiere meinen\n"
	.string "Meister im Kampf-Dojo.\p"
	.string "Ich werde immer nur meinem\n"
	.string "Meister folgen!\p"
	.string "Ich schleiche mich sogar aus dem Dojo,\n"
	.string "um allen zu sagen, wie großartig er ist.\p"
	.string "Yippie!$"
#else
	.string "Hiyah! I respect my MASTER at the\n"
	.string "FIGHTING DOJO.\p"
	.string "I will never become a fan of\n"
	.string "anyone other than my MASTER!\p"
	.string "I will even sneak out of the DOJO\n"
	.string "to spread word of his greatness.\p"
	.string "Hiyah!$"
#endif

