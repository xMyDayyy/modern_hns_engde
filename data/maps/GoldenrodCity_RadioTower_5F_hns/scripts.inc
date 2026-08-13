GoldenrodCity_RadioTower_5F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, GoldenrodCity_RadioTower_5F_OnLoad
	.byte 0

@ During Rocket Takeover, hide Petrel and show the Director (Petrel in disguise)
GoldenrodCity_RadioTower_5F_OnLoad::
	call_if_eq VAR_GOLDENROD_CITY_STATE, 6, GoldenrodCity_RadioTower_5F_MapScript_HidePetrel
	end

GoldenrodCity_RadioTower_5F_MapScript_HidePetrel::
	clearflag FLAG_HIDE_GOLDENROD_RADIOTOWER_DIRECTOR
	setflag FLAG_HIDE_GOLDENROD_RADIOTOWER_PETREL
	return


@=======[OFFICE]==============================================================================================================================

GoldenrodCity_RadioTower_5F_EventScript_Petrel::
	lock
	@ After Rocket Takeover, this is the real Director
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 10, GoldenrodCity_RadioTower_5F_EventScript_Director
	goto_if_eq VAR_FACING, DIR_SOUTH, GoldenrodCity_RadioTower_5F_EventScript_PetrelNorth
	playse SE_SELECT
	faceplayer
	msgbox GoldenrodCity_RadioTower_5F_Text_FakeDirector1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DIRECTOR_OFFICE, GoldenrodCity_RadioTower_5F_Movement_Spin
	waitmovement 0
	setflag FLAG_HIDE_GOLDENROD_RADIOTOWER_DIRECTOR
	removeobject LOCALID_DIRECTOR_OFFICE
	clearflag FLAG_HIDE_GOLDENROD_RADIOTOWER_PETREL
	addobject LOCALID_PETREL_OFFICE
	applymovement LOCALID_PETREL_OFFICE, GoldenrodCity_RadioTower_5F_Movement_Spin2
	waitmovement 0
	msgbox GoldenrodCity_RadioTower_5F_Text_FakeDirector2, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_PETREL_2_HNS, GoldenrodCity_RadioTower_5F_Text_FakeDirectorWin
	msgbox GoldenrodCity_RadioTower_5F_Text_FakeDirectorAfter, MSGBOX_DEFAULT
	giveitem ITEM_BASEMENT_KEY
	setvar VAR_GOLDENROD_CITY_STATE, 7
	clearflag FLAG_HIDE_GOLDENROD_UNDERGROUND_KIMONO
	closemessage
	release
	end

GoldenrodCity_RadioTower_5F_EventScript_PetrelNorth::
	end

GoldenrodCity_RadioTower_5F_EventScript_Petrel2::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_5F_Text_FakeDirectorAfter2, MSGBOX_DEFAULT
	closemessage
	release
	end

@ Modified in 1.3 to retroactively fix the Baoba Sequence Break on a 1.2.1 save file
GoldenrodCity_RadioTower_5F_EventScript_Director::
	lock
	faceplayer

	@ If player has either wing, skip to default director
	checkitem ITEM_SILVER_WING
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_RadioTower_5F_EventScript_DirectorDone
	checkitem ITEM_RAINBOW_WING
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_RadioTower_5F_EventScript_DirectorDone

	@ If player has neither wing, and hasn't spoken to Baoba, direct them toward him
	goto_if_eq VAR_LUGIA_OR_HOOH, 0, GoldenrodCity_RadioTower_5F_EventScript_DirectorWest

	@ If player has neither wing and has spoken to Baoba, give one
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorThanksAgain, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LUGIA_OR_HOOH, 1, GoldenrodCity_RadioTower_5F_EventScript_GiveTidalWing2
	call_if_eq VAR_LUGIA_OR_HOOH, 2, GoldenrodCity_RadioTower_5F_EventScript_GiveClearWing2

	playse SE_PIN
	applymovement LOCALID_DIRECTOR_STUDIO, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_DIRECTOR_STUDIO
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorLegendary, MSGBOX_DEFAULT
	closemessage

	release
	end

GoldenrodCity_RadioTower_5F_EventScript_DirectorDone::
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorIntro, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_5F_EventScript_DirectorWest::
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorWest, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_RadioTower_5F_Movement_Spin:
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_4
	face_up
	delay_4
	face_left
	delay_4
	face_down
	delay_4
	face_right
	delay_2
	face_up
	delay_2
	face_left
	delay_2
	face_down
	step_end


GoldenrodCity_RadioTower_5F_Movement_Spin2:
	face_right
	delay_2
	face_up
	delay_2
	face_left
	delay_2
	face_down
	step_end


GoldenrodCity_RadioTower_5F_Text_FakeDirector1:
#if GERMAN
	.string "D-du! Du willst mich retten?$"
#else
	.string "Y-you! You came to rescue me?$"
#endif

GoldenrodCity_RadioTower_5F_Text_FakeDirector2:
#if GERMAN
	.string "Hast du das etwa erwartet?\p"
	.string "Falsch! Ich bin ein Betrüger!\p"
	.string "Willst du wissen, wo wir den\n"
	.string "echten Direktor versteckt haben?\p"
	.string "Schon gut, ich sag es dir. Aber\n"
	.string "nur, wenn du mich besiegst!$"
#else
	.string "Is that what you were expecting?\p"
	.string "Wrong! I'm an imposter!\p"
	.string "I pretended to be the real thing to\n"
	.string "prepare for our takeover.\p"
	.string "Do you want to know where we hid\n"
	.string "the real DIRECTOR?\p"
	.string "Sure, I'll tell you. But only if you\n"
	.string "can beat me!$"
#endif

GoldenrodCity_RadioTower_5F_Text_FakeDirectorWin:
#if GERMAN
	.string "I-ist ja gut, in Ordnung…\n"
	.string "Ich sage dir, wo der Intendant ist.$"
#else
	.string "OK, OK. I'll tell you where he is.$"
#endif

GoldenrodCity_RadioTower_5F_Text_FakeDirectorAfter:
#if GERMAN
	.string "Der Boss hat den Direktor im\n"
	.string "Untergrund-Lager versteckt.\p"
	.string "Es liegt ganz am Ende des\n"
	.string "Untergrunds.\p"
	.string "Ich bin nett und gebe dir den\n"
	.string "Kelleröffner für das Untergrund-Lager.\p"
	.string "Aber ich bezweifle, dass du\n"
	.string "so weit kommst.$"
#else
	.string "The boss stashed the DIRECTOR in\n"
	.string "the UNDERGROUND WAREHOUSE.\p"
	.string "It's at the far end of the UNDER-\n"
	.string "GROUND.\p"
	.string "I am a nice guy, I will give you\n"
	.string "the BASEMENT KEY to get to the\l"
	.string "UNDERGROUND WAREHOUSE.\p"
	.string "But I doubt you'll get that far.$"
#endif

GoldenrodCity_RadioTower_5F_Text_FakeDirectorAfter2:
#if GERMAN
	.string "Der Boss hat den Direktor im\n"
	.string "Untergrund-Lager versteckt.\p"
	.string "Es liegt ganz am Ende des\n"
	.string "Untergrunds.\p"
	.string "Ich bin nett und gebe dir den\n"
	.string "Kelleröffner für das Untergrund-Lager.\p"
	.string "Aber ich bezweifle, dass du\n"
	.string "so weit kommst.$"
#else
	.string "The boss stashed the DIRECTOR in\n"
	.string "the UNDERGROUND WAREHOUSE.\p"
	.string "It's at the far end of the UNDER-\n"
	.string "GROUND.\p"
	.string "You can use the BASEMENT KEY to\n"
	.string "get to the UNDERGROUND WAREHOUSE.\p"
	.string "But I doubt you'll get that far.$"
#endif

@=======[STUDIO]==============================================================================================================================

GoldenrodCity_RadioTower_5F_EventScript_Ben::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_5F_Text_Ben, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodRaidoTower4_EventScript_ARIANA::
	trainerbattle_single TRAINER_ARIANA_2_HNS, GoldenrodCity_RadioTower_5F_Text_ExecutiveF1Seen, GoldenrodCity_RadioTower_5F_Text_ExecutiveF1Beaten
	msgbox GoldenrodCity_RadioTower_5F_Text_ExecutiveF1After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_RadioTower_5F_EventScript_Archer::
	lock
	faceplayer
	msgbox GoldenrodCity_RadioTower_5F_Text_RocketBossSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ARCHER_HNS, GoldenrodCity_RadioTower_5F_Text_RocketBossBeaten
	msgbox GoldenrodCity_RadioTower_5F_Text_RocketBossAfter, MSGBOX_DEFAULT
	delay 55
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_GOLDENROD_ROCKETS
	playse SE_EXIT
	setvar VAR_GOLDENROD_CITY_STATE, 10
	removeobject LOCALID_GOLDENROD_ARCHER
	removeobject LOCALID_GOLDENROD_ARIANA
	setflag FLAG_HIDE_GOLDENROD_RADIOTOWER_PETREL
	clearflag FLAG_HIDE_GOLDENROD_RADIOTOWER_DIRECTOR
	removeobject LOCALID_PETREL_OFFICE
	addobject LOCALID_DIRECTOR_STUDIO
	playbgm MUS_HG_GOLDENROD, FALSE
	delay 120
	fadescreen FADE_FROM_BLACK
	goto_if_eq VAR_FACING, DIR_SOUTH, GoldenrodCity_RadioTower_5F_EventScript_WingTop
	goto_if_eq VAR_FACING, DIR_WEST, GoldenrodCity_RadioTower_5F_EventScript_WingMid
	goto_if_eq VAR_FACING, DIR_NORTH, GoldenrodCity_RadioTower_5F_EventScript_WingBot
	release
	end

GoldenrodCity_RadioTower_5F_EventScript_WingTop::
	applymovement LOCALID_DIRECTOR_STUDIO, GoldenrodCity_RadioTower_5F_Movement_WalkToPlayerTop
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorThanks, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LUGIA_OR_HOOH, 1, GoldenrodCity_RadioTower_5F_EventScript_GiveTidalWing
	call_if_eq VAR_LUGIA_OR_HOOH, 2, GoldenrodCity_RadioTower_5F_EventScript_GiveClearWing
	applymovement LOCALID_DIRECTOR_STUDIO, GoldenrodCity_RadioTower_5F_Movement_LeaveTop
	waitmovement 0
	goto GoldenrodCity_RadioTower_5F_Fakeout
	end

GoldenrodCity_RadioTower_5F_EventScript_WingMid::
	applymovement LOCALID_DIRECTOR_STUDIO, GoldenrodCity_RadioTower_5F_Movement_WalkToPlayerMid
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorThanks, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LUGIA_OR_HOOH, 1, GoldenrodCity_RadioTower_5F_EventScript_GiveTidalWing
	call_if_eq VAR_LUGIA_OR_HOOH, 2, GoldenrodCity_RadioTower_5F_EventScript_GiveClearWing
	applymovement LOCALID_DIRECTOR_STUDIO, GoldenrodCity_RadioTower_5F_Movement_LeaveMid
	waitmovement 0
	goto GoldenrodCity_RadioTower_5F_Fakeout
	end

GoldenrodCity_RadioTower_5F_EventScript_WingBot::
	applymovement LOCALID_DIRECTOR_STUDIO, GoldenrodCity_RadioTower_5F_Movement_WalkToPlayerBot
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorThanks, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_LUGIA_OR_HOOH, 1, GoldenrodCity_RadioTower_5F_EventScript_GiveTidalWing
	call_if_eq VAR_LUGIA_OR_HOOH, 2, GoldenrodCity_RadioTower_5F_EventScript_GiveClearWing
	applymovement LOCALID_DIRECTOR_STUDIO, GoldenrodCity_RadioTower_5F_Movement_LeaveBot
	waitmovement 0
	goto GoldenrodCity_RadioTower_5F_Fakeout
	end

GoldenrodCity_RadioTower_5F_EventScript_GiveTidalWing::
	giveitem ITEM_SILVER_WING
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorTidalWingExplanation, MSGBOX_DEFAULT
	closemessage
	release
	return

@ 1.3 Sequence Break version - slightly different text
GoldenrodCity_RadioTower_5F_EventScript_GiveTidalWing2::
	giveitem ITEM_SILVER_WING
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorTidalWingExplanation2, MSGBOX_DEFAULT
	closemessage
	release
	return

GoldenrodCity_RadioTower_5F_EventScript_GiveClearWing::
	giveitem ITEM_RAINBOW_WING
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorClearWingExplanation, MSGBOX_DEFAULT
	closemessage
	release
	return

@ 1.3 Sequence Break version - slightly different text
GoldenrodCity_RadioTower_5F_EventScript_GiveClearWing2::
	giveitem ITEM_RAINBOW_WING
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorClearWingExplanation2, MSGBOX_DEFAULT
	closemessage
	release
	return

GoldenrodCity_RadioTower_5F_Fakeout::
	playse SE_PIN
	applymovement LOCALID_DIRECTOR_STUDIO, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_DIRECTOR_STUDIO
	turnobject LOCALID_DIRECTOR_STUDIO, DIR_WEST
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorLegendary, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DIRECTOR_STUDIO, GoldenrodCity_RadioTower_5F_Movement_Leave1
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_DIRECTOR_STUDIO, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_DIRECTOR_STUDIO
	turnobject LOCALID_DIRECTOR_STUDIO, DIR_SOUTH
	msgbox GoldenrodCity_RadioTower_5F_Text_DirectorFakeout, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DIRECTOR_STUDIO, GoldenrodCity_RadioTower_5F_Movement_Leave2
	waitmovement 0
	setflag FLAG_HIDE_GOLDENROD_RADIOTOWER_DIRECTOR_2
	removeobject LOCALID_DIRECTOR_STUDIO
	setvar VAR_MAHOGANY_TOWN_STATE, 17
	release
	end

GoldenrodCity_RadioTower_5F_EventScript_Trigger_NPCS::
	clearflag FLAG_HIDE_GOLDENROD_NPCS
	setvar VAR_GOLDENROD_CITY_STATE, 11
	end

GoldenrodCity_RadioTower_5F_Movement_WalkToPlayerTop:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

GoldenrodCity_RadioTower_5F_Movement_LeaveTop:
	walk_right
	walk_right
	walk_right
	step_end

GoldenrodCity_RadioTower_5F_Movement_WalkToPlayerMid:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	step_end


GoldenrodCity_RadioTower_5F_Movement_LeaveMid:
	walk_right
	walk_right
	step_end

GoldenrodCity_RadioTower_5F_Movement_WalkToPlayerBot:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

GoldenrodCity_RadioTower_5F_Movement_LeaveBot:
	walk_right
	walk_right
	walk_right
	step_end

GoldenrodCity_RadioTower_5F_Movement_Leave1:
	walk_up
	walk_up
	step_end

GoldenrodCity_RadioTower_5F_Movement_Leave2:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

GoldenrodCity_RadioTower_5F_Text_ExecutiveF1Seen:
#if GERMAN
	.string "Erinnerst du dich an mich aus dem\n"
	.string "Versteck in Mahagonia City?\p"
	.string "Mein Boss hat mich ausgeschimpft,\n"
	.string "aber ich bin stärker!\p"
	.string "Damals verlor ich…\n"
	.string "Doch heute nicht!$"
#else
	.string "Remember me from the HIDEOUT in\n"
	.string "MAHOGANY TOWN?\p"
	.string "My boss scolded me but I'm stronger.\p"
	.string "I lost then, but I won't this time.$"
#endif

GoldenrodCity_RadioTower_5F_Text_ExecutiveF1Beaten:
#if GERMAN
	.string "Gnnnnn!\p"
	.string "Ich habe doch 100 Prozent gegeben…\n"
	.string "Wieso hat das nicht gereicht?$"
#else
	.string "This can't be happening!\p"
	.string "I fought hard, but I still lost…\p"
	.string "I'm so sorry GIOVANNI…$"
#endif

GoldenrodCity_RadioTower_5F_Text_ExecutiveF1After:
#if GERMAN
	.string "{PLAYER}, richtig?\p"
	.string "Ein Gör wie du versteht die Größe\n"
	.string "von Team Rocket nicht.\p"
	.string "Schade… Ich bewundere deine Stärke.$"
#else
	.string "{PLAYER}, isn't it?\p"
	.string "A brat like you won't appreciate\n"
	.string "the magnificence of TEAM ROCKET.\p"
	.string "That's too bad. I really admire\n"
	.string "your power.$"
#endif

GoldenrodCity_RadioTower_5F_Text_RocketBossSeen:
#if GERMAN
	.string "Atlas: Sieh mal einer an… du hast\n"
	.string "es endlich bis hierher geschafft!\p"
	.string "Offensichtlich hast du einiges an\n"
	.string "Talent als Trainer!\p"
	.string "Wir haben den Radiosender besetzt, um\n"
	.string "der ganzen Nation zu verkünden, dass\l"
	.string "wir wieder da sind!\p"
	.string "Wenn wir das tun, wird sicher auch\n"
	.string "Giovanni wieder von seiner Lehr- und\l"
	.string "Wanderreise zurückkehren!\p"
	.string "Wir werden wieder zu unserem früheren\n"
	.string "Glanz zurückfinden!\l"
	.string "Du kommst uns dabei nicht in die Quere!$"
#else
	.string "Oh? You managed to get this far?\p"
	.string "You must be quite the trainer.\p"
	.string "We intend to take over this RADIO\n"
	.string "STATION and announce our comeback.\p"
	.string "That should bring our boss GIOVANNI\n"
	.string "back from his solitary training.\p"
	.string "We are going to regain our former\n"
	.string "glory...\p"
	.string "I won't allow you to interfere with\n"
	.string "our meticulous plans!$"
#endif

GoldenrodCity_RadioTower_5F_Text_RocketBossBeaten:
#if GERMAN
	.string "…Nein…\n"
	.string "Vergib mir, großer Giovanni!$"
#else
	.string "No! Forgive me, GIOVANNI!$"
#endif

GoldenrodCity_RadioTower_5F_Text_RocketBossAfter:
#if GERMAN
	.string "Atlas: …Ich kann es nicht glauben.\p"
	.string "Es ist vorbei. All meine Träume sind\n"
	.string "geplatzt.\l"
	.string "Ich war wohl doch nicht gut genug.\p"
	.string "In Ordnung.\n"
	.string "Hiermit löse ich Team Rocket auf, genau\l"
	.string "wie es einst Giovanni tat.\p"
	.string "Leb wohl.$"
#else
	.string "How could this be?\p"
	.string "Our dreams have come to naught.\p"
	.string "I wasn't up to the task after all.\p"
	.string "Like GIOVANNI did before me, I will\n"
	.string "disband TEAM ROCKET here today.\p"
	.string "Farewell.$"
#endif

GoldenrodCity_RadioTower_5F_Text_DirectorThanks:
#if GERMAN
	.string "Intendant: {PLAYER}, danke!\p"
	.string "Dein Mut hat Pokémon im ganzen\n"
	.string "Land gerettet.\p"
	.string "Es ist nicht viel, aber bitte,\n"
	.string "nimm dies.$"
#else
	.string "DIRECTOR: {PLAYER}, thank you!\p"
	.string "Your courageous actions have saved\n"
	.string "POKéMON nationwide.\p"
	.string "I know it's not much, but please\n"
	.string "take this.$"
#endif

GoldenrodCity_RadioTower_5F_Text_DirectorThanksAgain:
#if GERMAN
	.string "Intendant: {PLAYER}, nochmals, danke!\p"
	.string "Das Pokémon mit den großen Schwingen,\n"
	.string "das hier vorbeigeflogen ist, erinnert\l"
	.string "mich an etwas, ich habe eine Belohnung\p"
	.string "für dich. Es ist nicht viel aber\n"
	.string "bitte nimm es.$"
#else
	.string "DIRECTOR: {PLAYER}, once again, thank you!\p"
	.string "The large winged POKéMON that flew past\n"
	.string "reminded me, I have a reward for your\l"
	.string "courageous actions.\p"
	.string "I know it's not much, but please\n"
	.string "take this.$"
#endif
GoldenrodCity_RadioTower_5F_Text_DirectorClearWingExplanation:
	.string "Hier stand einst ein alter Turm in\n"
	.string "Dukatia City.\p"
	.string "Er war morsch und klapprig…\p"
	.string "Darum ersetzten wir ihn durch den\n"
	.string "Radioturm.\p"
	.string "Beim Bau fanden wir diese Feder.\p"
	.string "Man sagt, früher lebten viele\n"
	.string "Pokémon in Dukatia City.\p"
	.string "Vielleicht…\p"
	.string "Hat sie etwas mit dem Zinnturm\n"
	.string "in Teak City zu tun…\p"
	.string "Ich gehe nun in mein Büro.$"

@ 1.3 Sequence Break version - slightly different text
GoldenrodCity_RadioTower_5F_Text_DirectorClearWingExplanation2:
#if GERMAN
	.string "Hier stand einst ein alter Turm in\n"
	.string "Dukatia City.\p"
	.string "Er war morsch und klapprig…\p"
	.string "Darum ersetzten wir ihn durch den\n"
	.string "Radioturm.\p"
	.string "Beim Bau fanden wir diese Feder.\p"
	.string "Man sagt, früher lebten viele\n"
	.string "Pokémon in Dukatia City.\p"
	.string "Vielleicht…\p"
	.string "Hat sie etwas mit dem Zinnturm\n"
	.string "in Teak City zu tun…\p"
	.string "Ich gehe nun in mein Büro.$"
#else
	.string "There used to be a tower right here\n"
	.string "in GOLDENROD CITY.\p"
	.string "But it was old and creaky.\p"
	.string "So we replaced it with our RADIO\n"
	.string "TOWER.\p"
	.string "We dug up that wing during\n"
	.string "construction.\p"
	.string "I heard that all sorts of POKéMON\n"
	.string "lived in GOLDENROD in the past.\p"
	.string "Perhaps…\p"
	.string "That wing has some connection to the\n"
	.string "TIN TOWER in ECRUTEAK CITY…$"
#endif

GoldenrodCity_RadioTower_5F_Text_DirectorTidalWingExplanation:
#if GERMAN
	.string "Hier stand einst ein alter Turm in\n"
	.string "Dukatia City.\p"
	.string "Er war alt und klapprig…\p"
	.string "Darum bauten wir den Radioturm.\p"
	.string "Dabei fanden wir diese Feder.\p"
	.string "Früher lebten viele Pokémon in\n"
	.string "Dukatia City.\p"
	.string "Vielleicht…\p"
	.string "Hat sie etwas mit den\n"
	.string "Strudelinseln bei Anemonia City zu tun…\p"
	.string "Ich gehe nun in mein Büro.$"
#else
	.string "There used to be a tower right here\n"
	.string "in GOLDENROD CITY.\p"
	.string "But it was old and creaky.\p"
	.string "So we replaced it with our RADIO\n"
	.string "TOWER.\p"
	.string "We dug up that wing during\n"
	.string "construction.\p"
	.string "I heard that all sorts of POKéMON\n"
	.string "lived in GOLDENROD in the past.\p"
	.string "Perhaps…\p"
	.string "That wing has some connection to the\n"
	.string "WHIRL ISLANDS near CIANWOOD CITY…\p"
	.string "OK, I better go to my OFFICE.$"
#endif

@ 1.3 Sequence Break version - slightly different text
GoldenrodCity_RadioTower_5F_Text_DirectorTidalWingExplanation2:
#if GERMAN
	.string "Hier stand einst ein alter Turm in\n"
	.string "Dukatia City.\p"
	.string "Er war alt und klapprig…\p"
	.string "Darum bauten wir den Radioturm.\p"
	.string "Dabei fanden wir diese Feder.\p"
	.string "Früher lebten viele Pokémon in\n"
	.string "Dukatia City.\p"
	.string "Vielleicht…\p"
	.string "Hat sie etwas mit den\n"
	.string "Strudelinseln bei Anemonia City zu tun…\p"
	.string "Ich gehe nun in mein Büro.$"
#else
	.string "There used to be a tower right here\n"
	.string "in GOLDENROD CITY.\p"
	.string "But it was old and creaky.\p"
	.string "So we replaced it with our RADIO\n"
	.string "TOWER.\p"
	.string "We dug up that wing during\n"
	.string "construction.\p"
	.string "I heard that all sorts of POKéMON\n"
	.string "lived in GOLDENROD in the past.\p"
	.string "Perhaps…\p"
	.string "That wing has some connection to the\n"
	.string "WHIRL ISLANDS near CIANWOOD CITY…$"
#endif

GoldenrodCity_RadioTower_5F_Text_DirectorLegendary:
#if GERMAN
	.string "Ah!\p"
	.string "Da fällt mir ein…\p"
	.string "Die Feder, die ich dir gab…\n"
	.string "Sie soll mit den legendären Pokémon zu\l"
	.string "tun haben.\p"
	.string "Aber! Allein die Feder reicht nicht…\p"
	.string "Man braucht noch etwas\n"
	.string "anderes… oder so.\p"
	.string "Was war das nur…?\p"
	.string "Ich erinnere mich nicht.$"
#else
	.string "Ah!\p"
	.string "That reminds me…\p"
	.string "That wing I gave you... I think\n"
	.string "it's related to the LEGENDARY\l"
	.string "POKéMON.\p"
	.string "But! The LEGENDARY POKéMON won't\n"
	.string "appear with just that wing...\p"
	.string "Apparently there is something else\n"
	.string "you need... Or something like that.\p"
	.string "I wonder what it was...\p"
	.string "I can't remember.$"
#endif

GoldenrodCity_RadioTower_5F_Text_DirectorFakeout:
#if GERMAN
	.string "Nein, keine Sorge! Ich bin schon fertig!\n"
	.string "Diese Technik nennt man Antäuschen!\p"
	.string "Alles klar! Jetzt gehe ich aber\n"
	.string "wirklich mal zurück in mein Büro!$"
#else
	.string "Are you expecting something?\n"
	.string "This is what they call FAKE OUT.\p"
	.string "I really must go back to my OFFICE\n"
	.string "this time. See ya!$"
#endif

GoldenrodCity_RadioTower_5F_Text_DirectorIntro:
#if GERMAN
	.string "Intendant: Ach, du bist es! Hallo!\n"
	.string "Ich bin so vernarrt in Pokémon, dass ich\l"
	.string "einen Radiosender eröffnet habe, um\l"
	.string "diesem Gefühl Ausdruck zu verleihen!\p"
	.string "Ich hoffe wirklich, dass mein Publikum\n"
	.string "Spaß an unserem Programm hat!$"
#else
	.string "DIRECTOR: Hello, {PLAYER}!\p"
	.string "You know, I love POKéMON.\p"
	.string "I built this RADIO TOWER so I could\n"
	.string "express my love of POKéMON.\p"
	.string "It would be nice if people enjoyed\n"
	.string "our programs.$"
#endif

@ 1.3 Sequence Break - Directs player toward Baoba
GoldenrodCity_RadioTower_5F_Text_DirectorWest:
#if GERMAN
	.string "Intendant: Hallo, {PLAYER}!\p"
	.string "Hast du das Pokémon mit den großen\n"
	.string "Flügeln hier vorbeifliegen sehen? Die\l"
	.string "ganze Stadt\p"
	.string "redet darüber!\p"
	.string "Es scheint nach Westen zu fliegen,\n"
	.string "in Richtung Route 39.$"
#else
	.string "DIRECTOR: Hello, {PLAYER}!\p"
	.string "Did you see the large winged POKéMON\n"
	.string "that flew past earlier?\p"
	.string "It's the talk of the town!\n"
	.string "Or should I say, of the RADIO TOWER?\p"
	.string "It seemed to be headed West, in the\n"
	.string "direction of ROUTE 39.$"
#endif

GoldenrodCity_RadioTower_5F_Text_Ben:
#if GERMAN
	.string "Ben: Hörst du gerne Musik?$"
#else
	.string "BEN: Do you listen to our music?$"
#endif

GoldenrodCity_RadioTower_5F_Text_DirectorOfficeSign:
#if GERMAN
	.string "4S: Büro des Intendanten$"
#else
	.string "5F DIRECTOR'S   OFFICE$"
#endif

GoldenrodCity_RadioTower_5F_Text_Studio1Sign:
#if GERMAN
	.string "4S   Studio 1$"
#else
	.string "5F STUDIO 1$"
#endif
