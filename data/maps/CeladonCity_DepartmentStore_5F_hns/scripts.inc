CeladonCity_DepartmentStore_5F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonDeptElevator_OnFrame
	.byte 0

CeladonDeptStore5_EventScript_Receptionist::
	lock
	faceplayer
	goto_if_set FLAG_GOT_FRUSTRATION, CeladonDeptStore5_EventScript_Receptionist_Already
	msgbox CeladonDeptStore_Text_5FReceptionistOhYourMon, MSGBOX_DEFAULT
	closemessage
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_lt VAR_RESULT, FRIENDSHIP_50_TO_99, CeladonDeptStore5_EventScript_Receptionist_GiveFrustration
	msgbox CeladonDeptStore_Text_5FReceptionistPutInSomeMoreEffort, MSGBOX_DEFAULT
	closemessage
	release
	end

CeladonDeptStore5_EventScript_Receptionist_GiveFrustration::
	giveitem ITEM_TM_FRUSTRATION
	setflag FLAG_GOT_FRUSTRATION
	msgbox CeladonDeptStore_Text_5FReceptionistItLooksEvilHowAboutThisTM, MSGBOX_DEFAULT
	closemessage
	release
	end

CeladonDeptStore5_EventScript_Receptionist_Already::
	msgbox CeladonDeptStore_Text_5FReceptionistWait, MSGBOX_DEFAULT
	closemessage
	release
	end

CeladonDeptStore_Text_5FReceptionistOhYourMon:
#if GERMAN
    .string "Hallo. Oh, dein Pokémon…$"
#else
    .string "Hello. Oh, your POKéMON…$"
#endif

CeladonDeptStore_Text_5FReceptionistWait:
#if GERMAN
    .string "Warte, die TM hab ich dir\n"
    .string "schon gegeben!$"
#else
    .string "Wait, I already gave you that TM!$"
#endif

CeladonDeptStore_Text_5FReceptionistPutInSomeMoreEffort:
#if GERMAN
	.string "Hmm…\n"
	.string "Nicht besonders gut oder schlecht.\p"
	.string "Du als Trainer musst dich\n"
	.string "etwas mehr anstrengen.$"
#else
	.string "Hmm…\n"
	.string "It's not bad, but it's also not good.\p"
	.string "You, as the TRAINER, need to put in\n"
	.string "some more effort.$"
#endif

CeladonDeptStore_Text_5FReceptionistItLooksEvilHowAboutThisTM:
#if GERMAN
    .string "Es sieht echt böse aus.\n"
    .string "Wie wär’s mit dieser TM?$"
#else
    .string "It looks evil. How about this TM\n"
    .string "for it?$"
#endif

CeladonDept5_EventScript_Gent::
	msgbox CeladonDeptStore5F_Text_Gentleman, MSGBOX_NPC
	end
CeladonDept5_EventScript_Sailor::
	msgbox CeladonDeptStore5F_Text_Sailor, MSGBOX_NPC
	end
CeladonDept5_EventScript_Teacher::
	msgbox CeladonDeptStore5F_Text_Teacher, MSGBOX_NPC
	end
CeladonDept5_EventScript_Directory::
	msgbox CeladonDeptStore5F_Text_Directory, MSGBOX_SIGN
	end

CeladonDeptStore5_EventScript_Falkner::
	lock
	faceplayer
	msgbox CeladonDeptStore5_Text_Falkner, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_CELADON_FALKNER
	removeobject LOCALID_CELADON_FALKNER
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_DOJO_FALKNER
	release
	end

CeladonDeptStore5_Text_Falkner:
#if GERMAN
	.string "{PLAYER}, damit habe ich nicht\n"
	.string "gerechnet, dich hier zu sehen.\p"
	.string "Ich besorge Items für meine\n"
	.string "Flug-Pokémon.\p"
	.string "Wenn du mich noch einmal herausfordern\n"
	.string "willst, bin ich im Dojo in {COLOR RED}Saffronia{COLOR DARK_GRAY}\l"
	.string "City.$"
#else
	.string "{PLAYER}. I didn't expect to see\n"
	.string "you here.\p"
	.string "I'm picking up gear for my\n"
	.string "bird POKéMON.\p"
	.string "If you want to face me again, I'll\n"
	.string "be at the DOJO in SAFFRON CITY.$"
#endif

CeladonDeptStore5F_Text_Gentleman:
#if GERMAN
	.string "Ich möchte gerne Items kaufen, die den\n"
	.string "Status meiner Pokémon verbessern…\l"
	.string "Aber seufz… mein Geld reicht nicht!$"
#else
	.string "I want to buy some items that\n"
	.string "raise POKéMON stats, but I don't\l"
	.string "have enough money…$"
#endif

CeladonDeptStore5F_Text_Sailor:
#if GERMAN
	.string "Ich will AP-Plus, damit ich die PP\n"
	.string "von Attacken erhöhen kann. Aber man\l"
	.string "kann es nicht kaufen…$"
#else
	.string "I want PP UP, so I can raise the\n"
	.string "PP of moves. But you can't buy it…$"
#endif

CeladonDeptStore5F_Text_Teacher:
#if GERMAN
	.string "Pokémon freuen sich darüber, wenn\n"
	.string "du ihnen Items zusteckst!\l"
	.string "Aber auf manche Items könnten\l"
	.string "sie scheinbar auch verzichten…$"
#else
	.string "Using items on them makes POKéMON\n"
	.string "happy.\p"
	.string "They hate certain items, though…$"
#endif

CeladonDeptStore5F_Text_Directory:
#if GERMAN
	.string "4F: Drogerie$"
#else
	.string "5F: DRUG STORE$"
#endif
