SafariZone_Center_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_Center_OnTransition
	.byte 0

SafariZone_Center_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SAFARI_ZONE_CENTER
	end

SafariZone_Center_EventScript_RestHouseSign::
	msgbox SafariZone_Center_Text_RestHouse, MSGBOX_SIGN
	end

SafariZone_Center_EventScript_TrainerTips::
	msgbox SafariZone_Center_Text_PressStartToCheckTime, MSGBOX_SIGN
	end

SafariZone_Center_EventScript_AreaSign::
	msgbox SafariZone_Center_Text_CenterArea, MSGBOX_SIGN
	end

SafariZone_Center_Text_RestHouse::
#if GERMAN
	.string "Rasthaus$"
#else
	.string "REST HOUSE$"
#endif

SafariZone_Center_Text_PressStartToCheckTime::
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Drücke Start, um nachzusehen,\n"
	.string "wie viel Zeit du noch übrig hast!$"
#else
	.string "TRAINER TIPS\p"
	.string "Press START to check\n"
	.string "remaining time.$"
#endif

SafariZone_Center_Text_CenterArea::
#if GERMAN
	.string "Zentrum$"
#else
	.string "CENTER AREA$"
#endif

