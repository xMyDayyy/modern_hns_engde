SootopolisCity_House1_MapScripts::
	.byte 0

SootopolisCity_House1_EventScript_BrickBreakBlackBelt::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_BRICK_BREAK, SootopolisCity_House1_EventScript_ReceivedBrickBreak
	msgbox SootopolisCity_House1_Text_DevelopedThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_BRICK_BREAK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_BRICK_BREAK
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House1_EventScript_ReceivedBrickBreak::
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House1_EventScript_Kecleon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
	msgbox SootopolisCity_House1_Text_Kecleon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SootopolisCity_House1_Text_DevelopedThisTM:
#if GERMAN
	.string "Seit 30 Jahren lebe ich in Xeneroville\n"
	.string "und verbessere meine Fähigkeiten.\p"
	.string "Ich habe eine alles erschütternde TM\n"
	.string "entwickelt. Die schenke ich dir!$"
#else
	.string "For thirty years I've remained in\n"
	.string "SOOTOPOLIS honing my skills.\p"
	.string "I developed a shattering TM.\n"
	.string "I bequeath it to you!$"
#endif

SootopolisCity_House1_Text_ExplainBrickBreak:
#if GERMAN
	.string "TM31 enthält Durchbruch! Eine schier\n"
	.string "unbeschreibliche Attacke. Horror!$"
#else
	.string "TM31 contains BRICK BREAK! It's a move\n"
	.string "so horrible that I can't describe it.$"
#endif

SootopolisCity_House1_Text_Kecleon:
#if GERMAN
	.string "Kecleon: Puu puhyaah.$"
#else
	.string "KECLEON: Puu puhyaah.$"
#endif

