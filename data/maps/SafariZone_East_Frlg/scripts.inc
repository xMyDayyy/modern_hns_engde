SafariZone_East_Frlg_MapScripts::
	.byte 0

SafariZone_East_EventScript_RestHouseSign::
	msgbox SafariZone_East_Text_RestHouse, MSGBOX_SIGN
	end

SafariZone_East_EventScript_TrainerTips::
	msgbox SafariZone_East_Text_TimeDeclinesOnlyWhileYouWalk, MSGBOX_SIGN
	end

SafariZone_East_EventScript_AreaSign::
	msgbox SafariZone_East_Text_AreaSign, MSGBOX_SIGN
	end

SafariZone_East_Text_RestHouse::
#if GERMAN
	.string "Rasthaus$"
#else
	.string "REST HOUSE$"
#endif

SafariZone_East_Text_TimeDeclinesOnlyWhileYouWalk::
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Die verbleibende Zeit verstreicht\n"
	.string "nur, wenn du läufst!$"
#else
	.string "TRAINER TIPS\p"
	.string "The remaining time declines only\n"
	.string "while you walk.$"
#endif

SafariZone_East_Text_AreaSign::
#if GERMAN
	.string "Areal 1\n"
	.string "Westen: Zentrum$"
#else
	.string "AREA 1\n"
	.string "WEST: CENTER AREA$"
#endif

