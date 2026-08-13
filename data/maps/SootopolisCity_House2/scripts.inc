SootopolisCity_House2_MapScripts::
	.byte 0

SootopolisCity_House2_EventScript_ExpertF::
	lock
	faceplayer
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, SootopolisCity_House2_EventScript_KnowAboutOrbs
	call_if_eq VAR_RESULT, NO, SootopolisCity_House2_EventScript_DontKnowAboutOrbs
	release
	end

SootopolisCity_House2_EventScript_KnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
	return

SootopolisCity_House2_EventScript_DontKnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
	return

SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs:
#if GERMAN
	.string "Pyroberg…\p"
	.string "Auf seiner Spitze sind 2 Kugeln neben-\n"
	.string "einander angebracht. Wusstest du das?$"
#else
	.string "MT. PYRE…\p"
	.string "At its peak are two orbs placed side\n"
	.string "by side. Did you know?$"
#endif

SootopolisCity_House2_Text_YesTwoOrbsSideBySide:
#if GERMAN
	.string "Ja, genau. 2 Kugeln nebeneinander…\p"
	.string "Der Anblick dieser beiden…\n"
	.string "Irgendwie wirkt er beruhigend…$"
#else
	.string "Yes, two orbs side by side…\p"
	.string "The sight of them together…\n"
	.string "It is somehow soothing…$"
#endif

SootopolisCity_House2_Text_OughtToVisitAndSee:
#if GERMAN
	.string "Ehrlich?\n"
	.string "Du solltest dir das mal selber ansehen…$"
#else
	.string "Is that so?\n"
	.string "Perhaps you ought to visit and see…$"
#endif

