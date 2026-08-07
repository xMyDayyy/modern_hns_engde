SafariZone_North_Frlg_MapScripts::
	.byte 0

SafariZone_North_EventScript_RestHouseSign::
	msgbox SafariZone_North_Text_RestHouse, MSGBOX_SIGN
	end

SafariZone_North_EventScript_TrainerTips1::
	msgbox SafariZone_North_Text_SecretHouseStillAhead, MSGBOX_SIGN
	end

SafariZone_North_EventScript_AreaSign::
	msgbox SafariZone_North_Text_Area2, MSGBOX_SIGN
	end

SafariZone_North_EventScript_TrainerTips2::
	msgbox SafariZone_North_Text_ZigzagThroughTallGrass, MSGBOX_SIGN
	end

SafariZone_North_EventScript_TrainerTips3::
	msgbox SafariZone_North_Text_WinFreeHMFindSecretHouse, MSGBOX_SIGN
	end

SafariZone_North_Text_RestHouse::
#if GERMAN
	.string "Rasthaus$"
#else
	.string "REST HOUSE$"
#endif

SafariZone_North_Text_SecretHouseStillAhead::
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Bis zum Geheimen Haus ist es nicht\n"
	.string "mehr weit!$"
#else
	.string "TRAINER TIPS\p"
	.string "The SECRET HOUSE is still ahead.$"
#endif

SafariZone_North_Text_Area2::
#if GERMAN
	.string "Areal 2$"
#else
	.string "AREA 2$"
#endif

SafariZone_North_Text_ZigzagThroughTallGrass::
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Pokémon verstecken sich in hohem\n"
	.string "Gras!\p"
	.string "Laufe durch das hohe Gras und\n"
	.string "scheuche sie auf!$"
#else
	.string "TRAINER TIPS\p"
	.string "POKéMON hide in tall grass.\p"
	.string "Zigzag through grassy areas to\n"
	.string "flush them out.$"
#endif

SafariZone_North_Text_WinFreeHMFindSecretHouse::
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Finde das Geheime Haus.\n"
	.string "Dann gewinnst du eine VM!$"
#else
	.string "TRAINER TIPS\p"
	.string "Win a free HM for finding the\n"
	.string "SECRET HOUSE.$"
#endif

