FallarborTown_CozmosHouse_MapScripts::
	.byte 0

FallarborTown_CozmosHouse_EventScript_ProfCozmo::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_GaveMeteorite
	checkitem ITEM_METEORITE
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
	goto_if_eq VAR_RESULT, NO, FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_RETURN
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_0x8004, ITEM_METEORITE
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_RECEIVED_TM_RETURN
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_NoticeMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_AskForMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite::
	setflag FLAG_TEMP_2
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_GaveMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosWife::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
#if GERMAN
	.string "Prof. Kosmo: Oh…\n"
	.string "Ich hätte mich nie dazu verleiten\l"
	.string "lassen dürfen, Team Magma zu verraten,\l"
	.string "wo Meteoriten zu finden sind…\p"
	.string "Der Meteorit von den Meteorfällen…\n"
	.string "Nun wird er niemals mir gehören…$"
#else
	.string "PROF. COZMO: Oh…\n"
	.string "I never should have let myself be\l"
	.string "conned into telling TEAM MAGMA where\l"
	.string "you can find METEORITES…\p"
	.string "That METEORITE from METEOR FALLS…\n"
	.string "It's never going to be mine now…$"
#endif

FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt:
#if GERMAN
	.string "Oh! Oooh?\p"
	.string "Dieses Item…\p"
	.string "Kann es sein?\p"
	.string "Ist das der Meteorit, den Team Magma\n"
	.string "aus den Meteorfällen entwendet hat?\p"
	.string "Bitte, darf ich den haben?\p"
	.string "Du bekommst auch etwas dafür.\n"
	.string "Was hältst du von dieser TM?$"
#else
	.string "Oh!\n"
	.string "Hah?\p"
	.string "That item…\p"
	.string "Could it be?\p"
	.string "Is it the METEORITE that TEAM MAGMA\n"
	.string "took from METEOR FALLS?\p"
	.string "Please, may I have it?\p"
	.string "I'm not asking for it for free.\n"
	.string "How about in exchange for this TM?$"
#endif

FallarborTown_CozmosHouse_Text_PleaseUseThisTM:
#if GERMAN
	.string "Prof. Kosmo: Mit dieser TM möchte ich\n"
	.string "dir meine Dankbarkeit ausdrücken.\l"
	.string "Bitte, nimm sie an!$"
#else
	.string "PROF. COZMO: This TM, it represents\n"
	.string "my feeling of gratitude.\l"
	.string "Please use it!$"
#endif

FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch:
#if GERMAN
	.string "Prof. Kosmo: Oh, ich kann es einfach\n"
	.string "nicht glauben! Das ist nett! So\n"
	.string "nett!!! \p"
	.string "Das wird mir bei meinen Forschungen\n"
	.string "enorm weiterhelfen!$"
#else
	.string "PROF. COZMO: Oh, I can't believe it.\n"
	.string "This is really, really great!\p"
	.string "This is really going to help my research!$"
#endif

FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
#if GERMAN
	.string "Prof. Kosmo: Oh, aber…\n"
	.string "Das enttäuscht mich jetzt maßlos…$"
#else
	.string "PROF. COZMO: Oh, but…\n"
	.string "I'm crushed with disappointment…$"
#endif

FallarborTown_CozmosHouse_Text_MayIHaveMeteorite:
#if GERMAN
	.string "Prof. Kosmo: Bitte, darf ich den\n"
	.string "Meteoriten haben?\p"
	.string "Ich möchte ihn nicht umsonst haben!\n"
	.string "Wie\l"
	.string "wäre es mit dieser TM im Tausch dafür?$"
#else
	.string "PROF. COZMO: Please, may I have that\n"
	.string "METEORITE?\p"
	.string "I'm not asking for it for free.\n"
	.string "How about in exchange for this TM?$"
#endif

FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
#if GERMAN
	.string "Prof. Kosmo ist unterwegs zu\n"
	.string "Meteorfälle an der Route 114. Einige\l"
	.string "Leute von Team Magma begleiten ihn.$"
#else
	.string "PROF. COZMO went off to METEOR FALLS\n"
	.string "on ROUTE 114 with some people from\l"
	.string "TEAM MAGMA.$"
#endif

FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
#if GERMAN
	.string "Armer Prof. Kosmo…\n"
	.string "Er ist so deprimiert… Er tut mir Leid.$"
#else
	.string "Poor PROF. COZMO…\n"
	.string "He's so depressed… I feel sorry for him.$"
#endif

FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
#if GERMAN
	.string "Schau dir nur Prof. Kosmo an…\n"
	.string "Er ist so glücklich! Richtig niedlich.$"
#else
	.string "Look at PROF. COZMO…\n"
	.string "He's so happy! I think it's cute.$"
#endif

