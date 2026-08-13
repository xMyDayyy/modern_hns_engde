ThreeIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_OnTransition
	.byte 0

ThreeIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND
	call_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_EventScript_HideAntiBikers
	call_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_SetAntiBikersMovementAfterBikers
	end

ThreeIsland_EventScript_HideAntiBikers::
	setflag FLAG_HIDE_THREE_ISLAND_ANTIBIKERS
	return

ThreeIsland_EventScript_SetAntiBikersMovementAfterBikers::
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER1, MOVEMENT_TYPE_LOOK_AROUND
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER2, MOVEMENT_TYPE_LOOK_AROUND
	return

ThreeIsland_EventScript_Biker::
	lock
	setvar VAR_TEMP_1, 2
	call ThreeIsland_EventScript_BikerArgumentScene
	release
	end

ThreeIsland_EventScript_AntiBiker1::
	lock
	goto_if_set FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER, ThreeIsland_EventScript_AntiBiker1GotFullRestore
	goto_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_GiveFullRestore
	setvar VAR_TEMP_1, 0
	call ThreeIsland_EventScript_BikerArgumentScene
	release
	end

ThreeIsland_EventScript_AntiBiker1GotFullRestore::
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
	release
	end

ThreeIsland_EventScript_GiveFullRestore::
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ThreeIsland_Text_ThankYouOhYourMonGotHurt
	checkitemspace ITEM_FULL_RESTORE
	goto_if_eq VAR_RESULT, FALSE, ThreeIsland_EventScript_NoRoomForFullRestore
	msgreceiveditem ThreeIsland_Text_GivenFullRestore, ITEM_FULL_RESTORE
	additem ITEM_FULL_RESTORE
	setflag FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
	release
	end

ThreeIsland_EventScript_NoRoomForFullRestore::
	msgbox ThreeIsland_Text_OhYourBagIsFull
	release
	end

ThreeIsland_EventScript_BikerArgumentScene::
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceLeft
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceLeft
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
	waitmovement 0
	msgbox ThreeIsland_Text_GoBackToKanto
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceRight
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceRight
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceBiker
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_SpeakLeft
	waitmovement 0
	msgbox ThreeIsland_Text_BossIsOnHisWay
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceUp
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceUp
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceAntiBiker
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, ThreeIsland_Movement_SpeakRight
	waitmovement 0
	msgbox ThreeIsland_Text_GetOffIslandNow
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PlayerFaceRight
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PlayerFaceRight
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PlayerFaceBiker
	applymovement LOCALID_THREE_ISLAND_BIKER3, ThreeIsland_Movement_SpeakLeft
	waitmovement 0
	msgbox ThreeIsland_Text_WhosGonnaMakeMe
	return

ThreeIsland_EventScript_PlayerFaceUp::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

@ Unused
ThreeIsland_EventScript_PlayerFaceDown::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

ThreeIsland_EventScript_PlayerFaceLeft::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

ThreeIsland_EventScript_PlayerFaceRight::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

ThreeIsland_EventScript_PlayerFaceBiker::
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_ge VAR_0x8004, 9, ThreeIsland_EventScript_PlayerFaceUp
	goto ThreeIsland_EventScript_PlayerFaceRight
	end

ThreeIsland_EventScript_PlayerFaceAntiBiker::
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_ge VAR_0x8004, 9, ThreeIsland_EventScript_PlayerFaceLeft
	goto ThreeIsland_EventScript_PlayerFaceUp
	end

ThreeIsland_EventScript_AntiBiker2::
	lock
	goto_if_eq VAR_MAP_SCENE_THREE_ISLAND, 4, ThreeIsland_EventScript_AntiBiker2BikersGone
	setvar VAR_TEMP_1, 1
	call ThreeIsland_EventScript_BikerArgumentScene
	release
	end

ThreeIsland_EventScript_AntiBiker2BikersGone::
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ThreeIsland_Text_LostelleWentOffTowardsBondBridge
	release
	end

ThreeIsland_EventScript_BikerBossIntroTrigger::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
	waitmovement 0
	msgbox ThreeIsland_Text_AreYouBossGoBackToKanto
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_SpeakLeft
	waitmovement 0
	msgbox ThreeIsland_Text_JustGotHerePal
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
	waitmovement 0
	msgbox ThreeIsland_Text_FollowersRaisingHavoc
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_SpeakLeft
	waitmovement 0
	msgbox ThreeIsland_Text_OughtToBeThankingUs
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, ThreeIsland_Movement_SpeakRight
	waitmovement 0
	msgbox ThreeIsland_Text_YouCowardsToughInPack
	setvar VAR_MAP_SCENE_THREE_ISLAND, 3
	releaseall
	end

ThreeIsland_Movement_SpeakLeft::
	walk_in_place_left
	step_end

ThreeIsland_Movement_SpeakRight::
	walk_in_place_right
	step_end

ThreeIsland_EventScript_BattleBikersTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	goto ThreeIsland_EventScript_BattleBikersScene
	end

ThreeIsland_EventScript_BattleBikersTriggerMidLeft::
	lockall
	setvar VAR_TEMP_1, 1
	goto ThreeIsland_EventScript_BattleBikersScene
	end

ThreeIsland_EventScript_BattleBikersTriggerMid::
	lockall
	setvar VAR_TEMP_1, 2
	goto ThreeIsland_EventScript_BattleBikersScene
	end

ThreeIsland_EventScript_BattleBikersTriggerMidRight::
	lockall
	setvar VAR_TEMP_1, 3
	goto ThreeIsland_EventScript_BattleBikersScene
	end

ThreeIsland_EventScript_BattleBikersTriggerRight::
	lockall
	setvar VAR_TEMP_1, 4
	goto ThreeIsland_EventScript_BattleBikersScene
	end

ThreeIsland_EventScript_BattleBikersScene::
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_BikerApproach
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_BOY, 0
	msgbox ThreeIsland_Text_WannaMakeSomethingOfYourStaring, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ThreeIsland_EventScript_LeaveBikersAlone
	msgbox ThreeIsland_Text_Biker1Intro
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER1
	trainerbattle_no_intro TRAINER_BIKER_GOON, ThreeIsland_Text_Biker1Defeat
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_BikerSpeak
	waitmovement 0
	msgbox ThreeIsland_Text_Biker1PostBattle
	closemessage
	applymovement LOCALID_THREE_ISLAND_BIKER2, ThreeIsland_Movement_BikerApproach
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_BOY, 0
	msgbox ThreeIsland_Text_Biker2Intro
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER2
	trainerbattle_no_intro TRAINER_BIKER_GOON_2, ThreeIsland_Text_Biker2Defeat
	applymovement LOCALID_THREE_ISLAND_BIKER2, ThreeIsland_Movement_BikerSpeak
	waitmovement 0
	msgbox ThreeIsland_Text_Biker2PostBattle
	closemessage
	applymovement LOCALID_THREE_ISLAND_BIKER3, ThreeIsland_Movement_BikerApproach
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_BOY, 0
	msgbox ThreeIsland_Text_Biker3Intro
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER3
	trainerbattle_no_intro TRAINER_BIKER_GOON_3, ThreeIsland_Text_Biker3Defeat
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_THREE_ISLAND_BIKER4, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_THREE_ISLAND_BIKER5, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox ThreeIsland_Text_Biker3PostBattle
	closemessage
	delay 45
	call_if_eq VAR_TEMP_1, 0, ThreeIsland_EventScript_PaxtonApproachLeft
	call_if_eq VAR_TEMP_1, 1, ThreeIsland_EventScript_PaxtonApproachMidLeft
	call_if_eq VAR_TEMP_1, 2, ThreeIsland_EventScript_PaxtonApproachMid
	call_if_eq VAR_TEMP_1, 3, ThreeIsland_EventScript_PaxtonApproachMidRight
	call_if_eq VAR_TEMP_1, 4, ThreeIsland_EventScript_PaxtonApproachRight
	playbgm MUS_RG_ENCOUNTER_BOY, 0
	msgbox ThreeIsland_Text_PaxtonIntro
	setvar VAR_LAST_TALKED, LOCALID_PAXTON
	trainerbattle_no_intro TRAINER_CUE_BALL_PAXTON, ThreeIsland_Text_PaxtonDefeat
	msgbox ThreeIsland_Text_PaxtonPostBattle
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_PAXTON
	removeobject LOCALID_THREE_ISLAND_BIKER1
	removeobject LOCALID_THREE_ISLAND_BIKER2
	removeobject LOCALID_THREE_ISLAND_BIKER3
	removeobject LOCALID_THREE_ISLAND_BIKER4
	removeobject LOCALID_THREE_ISLAND_BIKER5
	removeobject LOCALID_THREE_ISLAND_BIKER6
	fadescreenswapbuffers FADE_FROM_BLACK
	setvar VAR_MAP_SCENE_THREE_ISLAND, 4
	releaseall
	end

ThreeIsland_EventScript_PaxtonApproachLeft::
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachLeft
	waitmovement 0
	return

ThreeIsland_EventScript_PaxtonApproachMidLeft::
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMidLeft
	waitmovement 0
	return

ThreeIsland_EventScript_PaxtonApproachMid::
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMid
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
	waitmovement 0
	return

ThreeIsland_EventScript_PaxtonApproachMidRight::
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachMidRight
	waitmovement 0
	return

ThreeIsland_EventScript_PaxtonApproachRight::
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerFacePaxton
	applymovement LOCALID_PAXTON, ThreeIsland_Movement_PaxtonApproachRight
	waitmovement 0
	return

ThreeIsland_EventScript_LeaveBikersAlone::
	msgbox ThreeIsland_Text_ThatsSmart
	closemessage
	applymovement LOCALID_PLAYER, ThreeIsland_Movement_PlayerLeaveBikers
	waitmovement 0
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_Movement_Biker1ReturnToPack
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

ThreeIsland_Movement_PlayerLeaveBikers::
	walk_down
	step_end

ThreeIsland_Movement_BikerApproach::
	walk_down
	step_end

ThreeIsland_Movement_Biker1ReturnToPack::
	walk_up
	walk_in_place_faster_left
	step_end

ThreeIsland_Movement_BikerSpeak::
	walk_in_place_down
	step_end

ThreeIsland_Movement_PaxtonApproachLeft::
	walk_down
	walk_left
	walk_in_place_faster_down
	step_end

ThreeIsland_Movement_PaxtonApproachMidLeft::
	walk_down
	step_end

ThreeIsland_Movement_PaxtonApproachMid::
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

ThreeIsland_Movement_PlayerFacePaxton::
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

ThreeIsland_Movement_PaxtonApproachMidRight::
	walk_down
	walk_down
	walk_right
	walk_in_place_faster_right
	step_end

ThreeIsland_Movement_PaxtonApproachRight::
	walk_down
	walk_down
	walk_right
	walk_right
	walk_in_place_faster_right
	step_end

ThreeIsland_EventScript_Woman::
	msgbox ThreeIsland_Text_WouldntWantToSeeBikersHereAgain, MSGBOX_NPC
	end

ThreeIsland_EventScript_LittleBoy::
	msgbox ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame, MSGBOX_NPC
	end

ThreeIsland_EventScript_Doduo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
	msgbox ThreeIsland_Text_Doduo
	waitmoncry
	release
	end

ThreeIsland_EventScript_IslandSign::
	msgbox ThreeIsland_Text_IslandSign, MSGBOX_SIGN
	end

ThreeIsland_EventScript_Biker6::
	msgbox ThreeIsland_Text_IslandBelongsToUs, MSGBOX_NPC
	end

ThreeIsland_Text_IslandSign::
#if GERMAN
	.string "Tri-Eiland\n"
	.string "Verwandtschaft und Familienbande$"
#else
	.string "THREE ISLAND\n"
	.string "Kin Island of Family Bonding$"
#endif

ThreeIsland_Text_IslandBelongsToUs::
#if GERMAN
	.string "Yippie!\p"
	.string "Von diesem Tag an gehört die\n"
	.string "Insel uns!$"
#else
	.string "Hyahoo!\p"
	.string "From this day on, this island\n"
	.string "belongs to us!$"
#endif

ThreeIsland_Text_GoBackToKanto::
#if GERMAN
	.string "Den Lärm und die Aufregung, die ihr\n"
	.string "Leute hierher bringt brauchen wir \l"
	.string "nicht!\p"
	.string "Wir bitten euch, nach Kanto\n"
	.string "zurückzukehren!$"
#else
	.string "We don't need you people bringing\n"
	.string "your noise and trouble here!\p"
	.string "We're asking you to go back to\n"
	.string "KANTO!$"
#endif

ThreeIsland_Text_BossIsOnHisWay::
#if GERMAN
	.string "Heh, heul woanders!\n"
	.string "Unser Boss kommt gerade.\p"
	.string "Sobald er eingetroffen ist, werden wir\n"
	.string "eine exzellente Motorradshow\l"
	.string "vorführen, die unvergesslich ist.$"
#else
	.string "Hey, go cry somewhere else.\n"
	.string "Our boss is on his way.\p"
	.string "When he gets here, we'll give you\n"
	.string "a k-rad motorbike show you won't\l"
	.string "soon forget!$"
#endif

ThreeIsland_Text_GetOffIslandNow::
#if GERMAN
	.string "W-was? Nicht in deinem Leben!\n"
	.string "Verschwinde jetzt von der Insel!$"
#else
	.string "W-what!? Not on your life!\n"
	.string "Get off the island now!$"
#endif

ThreeIsland_Text_WhosGonnaMakeMe::
#if GERMAN
	.string "Wer erledigt das für mich?$"
#else
	.string "Who's gonna make me?$"
#endif

ThreeIsland_Text_AreYouBossGoBackToKanto::
#if GERMAN
	.string "Bist du der Boss?\n"
	.string "Gehe sofort zurück nach Kanto!$"
#else
	.string "Are you the boss?\n"
	.string "Go back to KANTO right now!$"
#endif

ThreeIsland_Text_JustGotHerePal::
#if GERMAN
	.string "Häh?\p"
	.string "Ich bin gerade hier angekommen!\p"
	.string "Was soll deine feindselige Einstellung?\n"
	.string "Das ist so abweisend von dir!$"
#else
	.string "Hah?\p"
	.string "I just got here, pal.\p"
	.string "What's with the hostile attitude?\n"
	.string "It's mighty cold of you!$"
#endif

ThreeIsland_Text_FollowersRaisingHavoc::
#if GERMAN
	.string "Deine Anhänger haben mit ihren\n"
	.string "Motorrädern alles verwüstet.\p"
	.string "Hast du eine Vorstellung, wie viel Ärger\n"
	.string "sie uns auf dieser Insel gemacht\l"
	.string "haben?$"
#else
	.string "Your gang of followers have been\n"
	.string "raising havoc on their bikes.\p"
	.string "Do you have any idea how much\n"
	.string "trouble they've caused us on the\l"
	.string "island?$"
#endif

ThreeIsland_Text_OughtToBeThankingUs::
#if GERMAN
	.string "Nein, ich kapiere es nicht!\p"
	.string "Sieh dir das an. Was machst du,\n"
	.string "um dich zu amüsieren?\p"
	.string "Du solltest uns dankbar sein, ein wenig\n"
	.string "Schwung in dieses verschlafene Nest\l"
	.string "gebracht zu haben.\p"
	.string "Aber, wenn du willst, dass wir ver-\n"
	.string "schwinden, dann tu doch etwas…$"
#else
	.string "No, man, I don't get it at all.\p"
	.string "Look at this place.\n"
	.string "What do you do for entertainment?\p"
	.string "You ought to be thanking us for\n"
	.string "livening up this sleepy village.\p"
	.string "But hey, if you insist, you can try\n"
	.string "making us leave.$"
#endif

ThreeIsland_Text_YouCowardsToughInPack::
#if GERMAN
	.string "Grr… du Feigling…\n"
	.string "Im Rudel so stark…$"
#else
	.string "Grr… You cowards…\n"
	.string "So tough in a pack…$"
#endif

ThreeIsland_Text_WannaMakeSomethingOfYourStaring::
#if GERMAN
	.string "Was glotzt du so?\n"
	.string "Das ist aber nicht sehr höflich!\p"
	.string "Hast du mir vielleicht etwas\n"
	.string "zu sagen?$"
#else
	.string "You, what are you staring at?\n"
	.string "Don't you know it's not polite?\p"
	.string "You wanna make something of it\n"
	.string "or what?$"
#endif

ThreeIsland_Text_ThatsSmart::
#if GERMAN
	.string "Das ist clever!\n"
	.string "Halt dich da raus!$"
#else
	.string "That's smart.\n"
	.string "Keep your nose out of this.$"
#endif

ThreeIsland_Text_Biker1Intro::
#if GERMAN
	.string "Ey, dein Mut gefällt mir!\n"
	.string "Du wirst Geld an mich verlieren…$"
#else
	.string "Heh, I like your guts.\n"
	.string "You'll be losing money to me, but…$"
#endif

ThreeIsland_Text_Biker1Defeat::
#if GERMAN
	.string "Wa…\n"
	.string "Was ist das für ein Kind?!?$"
#else
	.string "Wha…\n"
	.string "What is this kid?!$"
#endif

ThreeIsland_Text_Biker1PostBattle::
#if GERMAN
	.string "Argh…\n"
	.string "Wage es nicht, zu lachen!$"
#else
	.string "Aww, man…\n"
	.string "Don't you dare laugh!$"
#endif

ThreeIsland_Text_Biker2Intro::
#if GERMAN
	.string "Bist du nicht aus Kanto?\n"
	.string "Du solltest auf unserer Seite sein!$"
#else
	.string "Aren't you from KANTO?\n"
	.string "You should be on our side!$"
#endif

ThreeIsland_Text_Biker2Defeat::
#if GERMAN
	.string "Hör auf herumzualbern!$"
#else
	.string "Stop fooling around!$"
#endif

ThreeIsland_Text_Biker2PostBattle::
#if GERMAN
	.string "Was ist los mit dir? Worüber\n"
	.string "regst du dich so auf?\p"
	.string "Du bist so was von uncool!$"
#else
	.string "What's the matter with you,\n"
	.string "getting all hot like that?\p"
	.string "Totally uncool, man!$"
#endif

ThreeIsland_Text_Biker3Intro::
#if GERMAN
	.string "Wir haben den Boss hierher eingeladen,\n"
	.string "aber du musstest es vermasseln!\l"
	.string "Du hast uns lächerlich gemacht!$"
#else
	.string "We invited the boss out here,\n"
	.string "but you had to mess it up!\p"
	.string "You embarrassed us, man!$"
#endif

ThreeIsland_Text_Biker3Defeat::
	.string "… … …   … … …$"

ThreeIsland_Text_Biker3PostBattle::
#if GERMAN
	.string "Boss, du musst etwas gegen dieses\n"
	.string "Kind unternehmen!$"
#else
	.string "Boss, I'm telling you, you've gotta\n"
	.string "do something about this kid!$"
#endif

ThreeIsland_Text_PaxtonIntro::
#if GERMAN
	.string "Ich habe dich beobachtet und ich würde\n"
	.string "sagen, dass du genug angerichtet hast.\l"
	.string "Was bist du? Ihr Freund, oder was?\p"
	.string "Dann musst du an ihrer statt gegen\n"
	.string "mich antreten.$"
#else
	.string "I've been watching you, and I'd say\n"
	.string "you've done enough.\p"
	.string "What are you, their friend or\n"
	.string "something?\p"
	.string "Then I guess you'll be battling me\n"
	.string "in their place.$"
#endif

ThreeIsland_Text_PaxtonDefeat::
#if GERMAN
	.string "In Ordnung, genug!\n"
	.string "Wir verschwinden wie gewünscht!\p"
	.string "Wir freuen uns schon, den Rest dieser\n"
	.string "langweiligen Insel zu sehen.$"
#else
	.string "All right, enough!\n"
	.string "We'll leave like you wanted!\p"
	.string "We'll be happy to see the last of\n"
	.string "this boring island!$"
#endif

ThreeIsland_Text_PaxtonPostBattle::
#if GERMAN
	.string "Humpf! Geh nur und häng mit\n"
	.string "diesen Typen ab.$"
#else
	.string "Humph! Yeah, go right on hanging\n"
	.string "around with these hayseeds!$"
#endif

ThreeIsland_Text_ThankYouOhYourMonGotHurt::
#if GERMAN
	.string "Danke! Diese Typen haben\n"
	.string "nur Ärger gemacht.\p"
	.string "Oh, deine Pokémon wurden\n"
	.string "wegen mir verletzt.$"
#else
	.string "Thank you! Those goons were\n"
	.string "nothing but bad trouble.\p"
	.string "Oh, look, your POKéMON got hurt\n"
	.string "on my account.$"
#endif

ThreeIsland_Text_GivenFullRestore::
#if GERMAN
	.string "{PLAYER} erhält\n"
	.string "Top-Genesung.$"
#else
	.string "{PLAYER} was given\n"
	.string "a FULL RESTORE.$"
#endif

ThreeIsland_Text_OhYourBagIsFull::
#if GERMAN
	.string "Oh?\n"
	.string "Dein Beutel ist voll.$"
#else
	.string "Oh?\n"
	.string "Your BAG is full.$"
#endif

ThreeIsland_Text_YouveGotImpressiveMons::
#if GERMAN
	.string "Du hast wirklich beeindruckende\n"
	.string "Pokémon bei dir.$"
#else
	.string "You've got seriously impressive\n"
	.string "POKéMON with you.$"
#endif

ThreeIsland_Text_LostelleWentOffTowardsBondBridge::
#if GERMAN
	.string "Es wäre großartig, wenn jemand\n"
	.string "wie du hier leben würde.\p"
	.string "Ich hoffe, du bleibst wenigstens\n"
	.string "eine Weile hier.\p"
	.string "… wie bitte?\n"
	.string "Du suchst Irrma?\p"
	.string "Es ist schon eine Weile her, dass Irrma\n"
	.string "zur Bundbrücke gegangen ist.$"
#else
	.string "It'd be fantastic if someone as\n"
	.string "strong as you lived here.\p"
	.string "I hope you'll at least stay here\n"
	.string "a while.\p"
	.string "…I beg your pardon?\n"
	.string "You're looking for LOSTELLE?\p"
	.string "LOSTELLE went off towards BOND\n"
	.string "BRIDGE a while ago.$"
#endif

ThreeIsland_Text_WouldntWantToSeeBikersHereAgain::
#if GERMAN
	.string "Eiland Drei ist die beliebteste\n"
	.string "aller Inseln.\p"
	.string "Dennoch könnte dort ein wenig\n"
	.string "mehr geboten werden.\p"
	.string "Aber ich möchte solche Typen wie diese\n"
	.string "Biker hier nicht noch einmal sehen.$"
#else
	.string "THREE ISLAND is actually the most\n"
	.string "populous of the islands here.\p"
	.string "Still, it could be less sleepy.\p"
	.string "But I wouldn't want to see goons\n"
	.string "like those BIKERS here again.$"
#endif

ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame::
#if GERMAN
	.string "Ich trainiere mein Dodu im\n"
	.string "Beerenforst.\p"
	.string "Sobald es sich entwickelt, spiele\n"
	.string "ich auf Eiland Zwei.$"
#else
	.string "I'm going to train my DODUO in the\n"
	.string "BERRY FOREST.\p"
	.string "When it evolves, I'm going to play\n"
	.string "a game on TWO ISLAND.$"
#endif

ThreeIsland_Text_Doduo::
#if GERMAN
	.string "Dodu: Guguh!$"
#else
	.string "DODUO: Gigiih!$"
#endif

