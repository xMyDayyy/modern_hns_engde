.equ NUM_DOOR_GRUNTS_DEFEATED, VAR_TEMP_1

RocketHideout_B4F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B4F_OnLoad
	.byte 0

RocketHideout_B4F_OnLoad::
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
	call_if_ne NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_SetBarrier
	end

RocketHideout_B4F_EventScript_CountGruntDefeated::
	addvar NUM_DOOR_GRUNTS_DEFEATED, 1
	return

RocketHideout_B4F_EventScript_Giovanni::
	lock
	faceplayer
	famechecker FAMECHECKER_GIOVANNI, 0
	message RocketHideout_B4F_Text_GiovanniIntro
	waitmessage
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	waitbuttonpress
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI, RocketHideout_B4F_Text_GiovanniDefeat
	msgbox RocketHideout_B4F_Text_GiovanniPostBattle
	fadescreen FADE_TO_BLACK
	closemessage
	removeobject LOCALID_HIDEOUT_GIOVANNI
	addobject LOCALID_SILPH_SCOPE
	clearflag FLAG_HIDE_SILPH_SCOPE
	setflag FLAG_HIDE_CELADON_ROCKETS
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	fadescreen FADE_FROM_BLACK
	release
	end

RocketHideout_B4F_EventScript_SilphScope::
	lock
	faceplayer
	removeobject LOCALID_SILPH_SCOPE
	giveitem ITEM_SILPH_SCOPE
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	release
	end

RocketHideout_B4F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_18, RocketHideout_B4F_Text_Grunt1Intro, RocketHideout_B4F_Text_Grunt1Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt1
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
	release
	end

RocketHideout_B4F_EventScript_DefeatedGrunt1::
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
	addobject LOCALID_LIFT_KEY
	clearflag FLAG_HIDE_LIFT_KEY
	release
	end

RocketHideout_B4F_EventScript_LiftKey::
	lock
	faceplayer
	setflag FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT
	removeobject LOCALID_LIFT_KEY
	giveitem ITEM_LIFT_KEY
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	release
	end

RocketHideout_B4F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_Text_Grunt2Intro, RocketHideout_B4F_Text_Grunt2Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt2
	msgbox RocketHideout_B4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B4F_EventScript_DefeatedGrunt2::
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_RemoveBarrier
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval
	release
	end

RocketHideout_B4F_EventScript_Grunt3::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_Text_Grunt3Intro, RocketHideout_B4F_Text_Grunt3Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt3
	msgbox RocketHideout_B4F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B4F_EventScript_DefeatedGrunt3::
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_RemoveBarrier
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval
	release
	end

RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval::
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	return

RocketHideout_B4F_EventScript_SetBarrier::
	setmetatile 17, 12, METATILE_SilphCo_HideoutBarrier_TopLeft_Floor, 1
	setmetatile 18, 12, METATILE_SilphCo_HideoutBarrier_TopRight_Floor, 1
	setmetatile 17, 13, METATILE_SilphCo_HideoutBarrier_BottomLeft, 1
	setmetatile 18, 13, METATILE_SilphCo_HideoutBarrier_BottomRight, 1
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	return

RocketHideout_B4F_EventScript_RemoveBarrier::
	setmetatile 17, 12, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	setmetatile 18, 12, METATILE_SilphCo_HideoutFloor, 0
	setmetatile 17, 13, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	setmetatile 18, 13, METATILE_SilphCo_HideoutFloor, 0
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor, 0
	return

RocketHideout_B4F_Text_GiovanniIntro::
#if GERMAN
	.string "Ich bin schwer beeindruckt. Du\n"
	.string "bist tatsächlich weit gekommen!\p"
	.string "Das Team Rocket finanziert mit\n"
	.string "Pokémon seine finsteren Pläne!\p"
	.string "Ich bin hier der Boss, Giovanni!\p"
	.string "Mach dich bereit, Höllenqualen zu\n"
	.string "erleiden, Wicht!$"
#else
	.string "So! I must say, I am impressed you\n"
	.string "got here.\p"
	.string "TEAM ROCKET captures POKéMON from\n"
	.string "around the world.\p"
	.string "They're important tools for keeping\n"
	.string "our criminal enterprise going.\p"
	.string "I am the leader, GIOVANNI!\p"
	.string "For your insolence, you will feel a\n"
	.string "world of pain!$"
#endif

RocketHideout_B4F_Text_GiovanniDefeat::
#if GERMAN
	.string "Nein!\n"
	.string "Ich habe kläglich versagt!$"
#else
	.string "WHAT!\n"
	.string "This can't be!$"
#endif

RocketHideout_B4F_Text_GiovanniPostBattle::
#if GERMAN
	.string "Offensichtlich trainierst du deine\n"
	.string "Pokémon sehr sorgfältig!\p"
	.string "Trotzdem würdest du meine Ziele\n"
	.string "und Beweggründe nie verstehen...\p"
	.string "Dieses Mal lasse ich dich noch von\n"
	.string "dannen ziehen...\p"
	.string "Doch wir werden uns wiedersehen!$"
#else
	.string "I see that you raise POKéMON with\n"
	.string "utmost care.\p"
	.string "A child like you would never\n"
	.string "understand what I hope to achieve.\p"
	.string "I shall step aside this time!\p"
	.string "I hope we meet again…$"
#endif

RocketHideout_B4F_Text_Grunt2Intro::
#if GERMAN
	.string "Du warst es, der unsere Pläne am\n"
	.string "Mondberg zunichte gemacht hat!$"
#else
	.string "I know you!\n"
	.string "You ruined our plans at MT. MOON!$"
#endif

RocketHideout_B4F_Text_Grunt2Defeat::
#if GERMAN
	.string "Dieses Kind ist einfach unschlagbar!!!$"
#else
	.string "Burned again!$"
#endif

RocketHideout_B4F_Text_Grunt2PostBattle::
#if GERMAN
	.string "Willst du das Team Rocket zu Grunde\n"
	.string "richten?$"
#else
	.string "Do you have something against TEAM\n"
	.string "ROCKET?$"
#endif

RocketHideout_B4F_Text_Grunt3Intro::
#if GERMAN
	.string "Spürst du nicht die Schönheit der\n"
	.string "dunklen Seite der Macht?$"
#else
	.string "How can you not see the beauty of\n"
	.string "our evil?$"
#endif

RocketHideout_B4F_Text_Grunt3Defeat::
#if GERMAN
	.string "Autsch!$"
#else
	.string "Ayaya!$"
#endif

RocketHideout_B4F_Text_Grunt3PostBattle::
#if GERMAN
	.string "Gnade, Boss!\n"
	.string "Ich habe versagt...$"
#else
	.string "BOSS!\n"
	.string "I'm sorry I failed you!$"
#endif

RocketHideout_B4F_Text_Grunt1Intro::
#if GERMAN
	.string "Ich werde dir den Liftöffner niemals\n"
	.string "geben!$"
#else
	.string "The elevator doesn't work?\n"
	.string "Who has the LIFT KEY?$"
#endif

RocketHideout_B4F_Text_Grunt1Defeat::
#if GERMAN
	.string "Oh nein!$"
#else
	.string "No!$"
#endif

RocketHideout_B4F_Text_Grunt1PostBattle::
#if GERMAN
	.string "Mist!\n"
	.string "Ich habe den Liftöffner verloren!$"
#else
	.string "Oh, no!\n"
	.string "I dropped the LIFT KEY!$"
#endif

