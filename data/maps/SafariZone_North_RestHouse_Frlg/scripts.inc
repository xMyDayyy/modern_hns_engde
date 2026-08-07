SafariZone_North_RestHouse_Frlg_MapScripts::
	.byte 0

SafariZone_North_RestHouse_EventScript_Fisher::
	msgbox SafariZone_East_Text_PrizeInDeepestPartOfSafariZone, MSGBOX_NPC
	end

SafariZone_North_RestHouse_EventScript_Scientist::
	msgbox SafariZone_East_Text_KeepAnyItemFoundOnSafari, MSGBOX_NPC
	end

SafariZone_North_RestHouse_EventScript_Gentleman::
	msgbox SafariZone_East_Text_MyEeveeEvolvedIntoFlareon, MSGBOX_NPC
	end

SafariZone_East_Text_KeepAnyItemFoundOnSafari::
#if GERMAN
	.string "Alle Items, die du findest, gehören\n"
	.string "dir!\p"
	.string "Aber dir wird die Zeit davonlaufen,\n"
	.string "wenn du alle auf einmal einsammeln\l"
	.string "möchtest!$"
#else
	.string "You can keep any item you find in\n"
	.string "the SAFARI ZONE.\p"
	.string "But, you'll run out of time if you\n"
	.string "try for all of them at once.$"
#endif

SafariZone_East_Text_PrizeInDeepestPartOfSafariZone::
#if GERMAN
	.string "Gehe in die {COLOR RED}Safari-Zone{COLOR DARK_GRAY}! Du kannst\n"
	.string "dort einen Preis gewinnen!$"
#else
	.string "Go to the deepest part of the\n"
	.string "SAFARI ZONE. You will win a prize!$"
#endif

SafariZone_East_Text_MyEeveeEvolvedIntoFlareon::
#if GERMAN
	.string "Mein Evoli hat sich zu Flamara\n"
	.string "entwickelt!\p"
	.string "Aber bei einem Freund hat sich\n"
	.string "Evoli zu Aquana entwickelt!$"
#else
	.string "My EEVEE evolved into FLAREON.\p"
	.string "But, a friend's EEVEE turned into a\n"
	.string "VAPOREON. I wonder why?$"
#endif

