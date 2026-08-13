.equ PLAYER_X_POS, VAR_0x8004
.equ PLAYER_Y_POS, VAR_0x8005

FiveIsland_RocketWarehouse_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_RocketWarehouse_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_RocketWarehouse_OnTransition
	.byte 0

FiveIsland_RocketWarehouse_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
	end

FiveIsland_RocketWarehouse_OnLoad::
	call_if_defeated TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
	end

FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry::
	setmetatile 26, 20, METATILE_SilphCo_Arrow_Up, 0
	setmetatile 27, 20, METATILE_SilphCo_Arrow_Up, 0
	return

FiveIsland_RocketWarehouse_EventScript_Cage::
	lockall
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FiveIsland_RocketWarehouse_EventScript_CageUnlocked
	msgbox FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen
	releaseall
	end

FiveIsland_RocketWarehouse_EventScript_CageUnlocked::
	msgbox FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled
	releaseall
	end

FiveIsland_RocketWarehouse_EventScript_Computer::
	msgbox FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText, MSGBOX_SIGN
	end

FiveIsland_RocketWarehouse_EventScript_Admin2Trigger::
	lockall
	applymovement LOCALID_WAREHOUSE_ADMIN2, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
	releaseall
	end

FiveIsland_RocketWarehouse_EventScript_Gideon::
	trainerbattle_single TRAINER_SCIENTIST_GIDEON, FiveIsland_RocketWarehouse_Text_GideonIntro, FiveIsland_RocketWarehouse_Text_GideonDefeat, FiveIsland_RocketWarehouse_EventScript_DefeatedGideon
	goto_if_set FLAG_IS_CHAMPION, FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid
	msgbox FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid::
	famechecker FAMECHECKER_GIOVANNI, 5
	msgbox FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_DefeatedGideon::
	msgbox FiveIsland_RocketWarehouse_Text_GideonPostBattle
	setflag FLAG_RECOVERED_SAPPHIRE
	giveitem ITEM_SAPPHIRE
	release
	end

FiveIsland_RocketWarehouse_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_47, FiveIsland_RocketWarehouse_Text_Grunt2Intro, FiveIsland_RocketWarehouse_Text_Grunt2Defeat
	msgbox FiveIsland_RocketWarehouse_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_Grunt3::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_48, FiveIsland_RocketWarehouse_Text_Grunt3Intro, FiveIsland_RocketWarehouse_Text_Grunt3Defeat
	msgbox FiveIsland_RocketWarehouse_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_Admin2::
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN_2, FiveIsland_RocketWarehouse_Text_Admin2Intro, FiveIsland_RocketWarehouse_Text_Admin2Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2::
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_WAREHOUSE_GRUNT2
	removeobject LOCALID_WAREHOUSE_GRUNT3
	removeobject LOCALID_WAREHOUSE_ADMIN2
	removeobject LOCALID_WAREHOUSE_ADMIN1
	setflag FLAG_HIDE_FIVE_ISLAND_ROCKETS
	fadescreen FADE_FROM_BLACK
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
	setflag FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE
	release
	end

FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_42, FiveIsland_RocketWarehouse_Text_Grunt1Intro, FiveIsland_RocketWarehouse_Text_Grunt1Defeat
	msgbox FiveIsland_RocketWarehouse_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_Admin1::
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_Text_Admin1Intro, FiveIsland_RocketWarehouse_Text_Admin1Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1::
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
	specialvar VAR_RESULT, GetPlayerFacingDirection
	call_if_eq VAR_RESULT, DIR_NORTH, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1
	msgbox FiveIsland_RocketWarehouse_Text_Admin1PostBattle
	closemessage
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar
	call_if_eq PLAYER_X_POS, 25, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch
	call_if_eq PLAYER_X_POS, 26, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
	call_if_eq PLAYER_X_POS, 27, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
	playse SE_PIN
	call FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
	special DrawWholeMapView
	waitse
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
	call_if_eq PLAYER_X_POS, 25, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
	call_if_eq PLAYER_X_POS, 26, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
	call_if_eq PLAYER_X_POS, 27, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough
	release
	end

FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1::
	goto_if_eq PLAYER_X_POS, 27, Common_EventScript_NopReturn
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar::
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch::
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch::
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft::
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown::
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar::
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch::
	walk_right
	walk_in_place_faster_up
	step_end

FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen::
#if GERMAN
	.string "Viele Pokémon sind in diesem\n"
	.string "Schuppen eingesperrt…$"
#else
	.string "There are many POKéMON locked\n"
	.string "away in the pen…$"
#endif

FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled::
#if GERMAN
	.string "Die Tür ist unverschlossen.\n"
	.string "Die Pokémon sind geflohen.$"
#else
	.string "The pen door is unlocked.\n"
	.string "The POKéMON appear to have fled.$"
#endif

FiveIsland_RocketWarehouse_Text_Grunt2Intro::
#if GERMAN
	.string "Wusstest du, dass dies das Lager von\n"
	.string "Team Rocket ist, ehe du hierher kamst?$"
#else
	.string "Did you come here knowing it's\n"
	.string "TEAM ROCKET's WAREHOUSE?$"
#endif

FiveIsland_RocketWarehouse_Text_Grunt2Defeat::
#if GERMAN
	.string "Was glaubst du, was du tust?$"
#else
	.string "What do you think you're doing?!$"
#endif

FiveIsland_RocketWarehouse_Text_Grunt2PostBattle::
#if GERMAN
	.string "Team Rocket wurde zerschlagen?\n"
	.string "Auf welchem Planeten lebst du?$"
#else
	.string "TEAM ROCKET broke up?\n"
	.string "What planet are you from?$"
#endif

FiveIsland_RocketWarehouse_Text_Grunt1Intro::
#if GERMAN
	.string "Nun sehen deine Pokémon stark aus.\n"
	.string "Möchtest du sie verkaufen?\p"
	.string "Oh?\n"
	.string "Du möchtest kämpfen?$"
#else
	.string "Oh, now your POKéMON look strong.\n"
	.string "You're willing to sell them?\p"
	.string "Oh?\n"
	.string "You wanted to battle?$"
#endif

FiveIsland_RocketWarehouse_Text_Grunt1Defeat::
#if GERMAN
	.string "Oh, aber…\n"
	.string "Zu viel für mich!$"
#else
	.string "Oh, but…\n"
	.string "Too much!$"
#endif

FiveIsland_RocketWarehouse_Text_Grunt1PostBattle::
#if GERMAN
	.string "Wir machen dir einen guten Preis.\n"
	.string "Verkaufe uns deine Pokémon!$"
#else
	.string "We can give you a great price.\n"
	.string "Sell us your POKéMON!$"
#endif

FiveIsland_RocketWarehouse_Text_Grunt3Intro::
#if GERMAN
	.string "Die anderen haben mir bereits von dir\n"
	.string "erzählt.\l"
	.string "Aber es kann nicht sein, dass ein Kind\l"
	.string "wie du unseren Boss Giovanni kennt!$"
#else
	.string "I got word about you from the\n"
	.string "others.\p"
	.string "But there's no way a kid like you'd\n"
	.string "know our BOSS GIOVANNI!$"
#endif

FiveIsland_RocketWarehouse_Text_Grunt3Defeat::
#if GERMAN
	.string "Wage… es… nicht… zu… lachen…$"
#else
	.string "Don't…you…dare…laugh…$"
#endif

FiveIsland_RocketWarehouse_Text_Grunt3PostBattle::
#if GERMAN
	.string "Misch dich nicht in die Angelegenheiten\n"
	.string "von Erwachsenen ein, du Plage!$"
#else
	.string "Don't mess in the doings of adults,\n"
	.string "you jumped-up pip-squeak!$"
#endif

FiveIsland_RocketWarehouse_Text_Admin1Intro::
#if GERMAN
	.string "Ich weiß nicht und es kümmert mich auch\n"
	.string "nicht, ob das, was ich tue, recht oder\l"
	.string "unrecht ist…\l"
	.string "Ich vertraue Giovanni und befolge\l"
	.string "seine Anweisungen.$"
#else
	.string "I don't know or care if what I'm\n"
	.string "doing is right or wrong…\p"
	.string "I just put my faith in GIOVANNI\n"
	.string "and do as I am told.$"
#endif

FiveIsland_RocketWarehouse_Text_Admin1Defeat::
#if GERMAN
	.string "Ich…\n"
	.string "Ich bin am Boden…$"
#else
	.string "I…\n"
	.string "I'm shattered…$"
#endif

FiveIsland_RocketWarehouse_Text_Admin1PostBattle::
#if GERMAN
	.string "Du handelst nach bestem Wissen\n"
	.string "und Gewissen.\p"
	.string "Jetzt verstehe ich es…$"
#else
	.string "You're doing things according to\n"
	.string "your beliefs and morals.\p"
	.string "I understand now…$"
#endif

FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough::
#if GERMAN
	.string "Ich habe es so eingerichtet, dass du\n"
	.string "hier durchkannst, wenn du wieder\l"
	.string "kommst.\l"
	.string "Warum erholst und erfrischst du dich\l"
	.string "nicht, um gewappnet zu sein?\p"
	.string "Der Vors. nach mir ist ein viel\n"
	.string "gewissenhafterer Trainer als ich.\p"
	.string "Mach dich lieber auf einen harten\n"
	.string "Kampf bereit.$"
#else
	.string "I've made it so you can come back\n"
	.string "in through there.\p"
	.string "Why don't you go get rested and\n"
	.string "refreshed for what lies ahead?\p"
	.string "The ADMIN after me outranks me\n"
	.string "thoroughly as a TRAINER.\p"
	.string "You'd better steel yourself for one\n"
	.string "harsh challenge.$"
#endif

FiveIsland_RocketWarehouse_Text_Admin2Intro::
#if GERMAN
	.string "Du stirbst jetzt den Heldentod,\n"
	.string "Youngster! Dafür sorge ich!\p"
	.string "Das Verbreiten von Lügen über Team\n"
	.string "Rockets Auflösung…\p"
	.string "Das ist so ein offensichtlicher\n"
	.string "Versuch, Unordnung in unsere\l"
	.string "Organisation zu bringen.\l"
	.string "Glücklicherweise schenken wir den\l"
	.string "Lügen eines Kindes keinen Glauben!\p"
	.string "Und nun zeige ich dir, wie grausam und\n"
	.string "wütend ein Erwachsener sein kann!$"
#else
	.string "That's quite enough of you \n"
	.string "playing the hero, kid.\p"
	.string "Spreading lies about how TEAM\n"
	.string "ROCKET has disbanded…\p"
	.string "It's such an obvious attempt to\n"
	.string "cause confusion in our ranks.\p"
	.string "Fortunately, we're not so ignorant\n"
	.string "to fall for the lies of a child!\p"
	.string "And now, I'll show you how scary\n"
	.string "an angry adult can be!$"
#endif

FiveIsland_RocketWarehouse_Text_Admin2Defeat::
#if GERMAN
	.string "Argh…\n"
	.string "Du warst zu stark…\p"
	.string "…\n"
	.string "D-das ist der Orden von Giovanni!\p"
	.string "Es ist also wahr?\n"
	.string "Team Rocket ist Geschichte?$"
#else
	.string "Urgh…\n"
	.string "You were too strong…\p"
	.string "…\n"
	.string "Th-that's GIOVANNI's BADGE!\p"
	.string "So it's true?\n"
	.string "TEAM ROCKET really has disbanded?$"
#endif

FiveIsland_RocketWarehouse_Text_Admin2PostBattle::
#if GERMAN
	.string "Wir werden dieses Lager verlassen…\p"
	.string "Aber denke bloß nicht, es wäre erledigt.\n"
	.string "Ich lasse nicht zu, dass dies das Ende\l"
	.string "ist.\l"
	.string "Ich werde Giovanni finden. Und ich\l"
	.string "werde Team Rocket auferstehen lassen!\l"
	.string "Das werde ich…\p"
	.string "Bis dahin! Leb wohl!$"
#else
	.string "We will abandon this WAREHOUSE…\p"
	.string "But don't think this is over.\n"
	.string "I won't let this be the end.\p"
	.string "I will find GIOVANNI.\n"
	.string "And I will resurrect TEAM ROCKET!\l"
	.string "I will…\p"
	.string "Until then, farewell!$"
#endif

FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText::
#if GERMAN
	.string "Ein mit Grafiken und Text\n"
	.string "ausgestatteter Bericht ist auf dem\l"
	.string "PC-Monitor.\l"
	.string "“Der Einfluss von Magnetwellen bei der\l"
	.string "Pokémon-Entwicklung“…\l"
	.string "…………\l"
	.string "……\p"
	.string "Es ist zu schwierig, zu verstehen…$"
#else
	.string "A report with graphs and text is on\n"
	.string "the PC monitor.\p"
	.string "“The Influence of Magnetic Waves\n"
	.string "on POKéMON Evolution”…\p"
	.string "… … … … … …\p"
	.string "It's too difficult to understand…$"
#endif

FiveIsland_RocketWarehouse_Text_GideonIntro::
#if GERMAN
	.string "Fast hätte ich den Saphir für viel\n"
	.string "Geld verkaufen können…\p"
	.string "Dann musstest du kommen und alles\n"
	.string "kaputtmachen!\p"
	.string "Fufu… fufufufu…\n"
	.string "Es gibt kein Erbarmen für dich!$"
#else
	.string "I almost managed to sell the\n"
	.string "SAPPHIRE for huge money…\p"
	.string "Then, you just had to come along\n"
	.string "and blow the whole deal apart!\p"
	.string "Fufu… Fufufufu…\n"
	.string "There's no forgiveness for you!$"
#endif

FiveIsland_RocketWarehouse_Text_GideonDefeat::
#if GERMAN
	.string "Argh! Mist!\n"
	.string "Mist! Blöder Mist!$"
#else
	.string "Gah! Darn!\n"
	.string "Darn! Darn!$"
#endif

FiveIsland_RocketWarehouse_Text_GideonPostBattle::
#if GERMAN
	.string "Wenn ich ihn nicht verkaufen kann, ist\n"
	.string "er wertlos!\l"
	.string "Nimm ihn und lass mich in Ruhe!$"
#else
	.string "If I can't sell it, it's worthless!\n"
	.string "Go ahead, take it!$"
#endif

FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe::
#if GERMAN
	.string "Was willst du jetzt?\n"
	.string "Mach schon, hau ab, lass mich!$"
#else
	.string "What do you want now?\n"
	.string "Go on, get lost, leave me be.$"
#endif

FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair::
#if GERMAN
	.string "Was, du schon wieder?\p"
	.string "Du… du bist nicht das Kind von\n"
	.string "Giovanni! Sein Kind ist rothaarig.\p"
	.string "Du hast keinen Grund, mich zu\n"
	.string "ärgern. Lass mich in Frieden!$"
#else
	.string "What, you again?\p"
	.string "You… You're not GIOVANNI's kid,\n"
	.string "are you?\p"
	.string "No, that can't be right!\n"
	.string "GIOVANNI's kid has red hair.\p"
	.string "You don't have any reasons for\n"
	.string "bugging me. Leave me alone!$"
#endif

