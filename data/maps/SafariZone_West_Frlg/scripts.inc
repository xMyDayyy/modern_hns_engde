SafariZone_West_Frlg_MapScripts::
	.byte 0

SafariZone_West_EventScript_RestHouseSign::
	msgbox SafariZone_West_Text_RestHouse, MSGBOX_SIGN
	end

SafariZone_West_EventScript_LostTeethNotice::
	msgbox SafariZone_West_Text_PleaseFindWardensLostTeeth, MSGBOX_SIGN
	end

SafariZone_West_EventScript_TrainerTips::
	msgbox SafariZone_West_Text_SearchForSecretHouse, MSGBOX_SIGN
	end

SafariZone_West_EventScript_AreaSign::
	msgbox SafariZone_West_Text_AreaSign, MSGBOX_SIGN
	end

SafariZone_West_Text_RestHouse::
#if GERMAN
	.string "Rasthaus$"
#else
	.string "REST HOUSE$"
#endif

SafariZone_West_Text_PleaseFindWardensLostTeeth::
#if GERMAN
	.string "Belohnung!\p"
	.string "Wer die Goldzähne des Parkwächters der\n"
	.string "Safari-Zone findet, erhält eine\l"
	.string "Belohnung!\p"
	.string "Finder melden sich bitte beim\n"
	.string "Parkwächter!$"
#else
	.string "REQUEST NOTICE\p"
	.string "Please find the SAFARI WARDEN's\n"
	.string "lost GOLD TEETH.\l"
	.string "They're around here somewhere.\p"
	.string "Reward offered!\n"
	.string "Contact: WARDEN$"
#endif

SafariZone_West_Text_SearchForSecretHouse::
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Erforsche die Safari-Zone!\n"
	.string "Finde das Geheime Haus!$"
#else
	.string "TRAINER TIPS\p"
	.string "Zone Exploration Campaign!\n"
	.string "The Search for the SECRET HOUSE!$"
#endif

SafariZone_West_Text_AreaSign::
#if GERMAN
	.string "Areal 3\n"
	.string "Osten: Zentrum$"
#else
	.string "AREA 3\n"
	.string "EAST: CENTER AREA$"
#endif

