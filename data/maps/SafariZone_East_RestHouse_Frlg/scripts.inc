SafariZone_East_RestHouse_Frlg_MapScripts::
	.byte 0

SafariZone_East_RestHouse_EventScript_Rocker::
	msgbox SafariZone_East_Text_CaughtChanseyAllWorthwhile, MSGBOX_NPC
	end

SafariZone_East_RestHouse_EventScript_Scientist::
	msgbox SafariZone_East_Text_HowManyDidYouCatch, MSGBOX_NPC
	end

SafariZone_East_RestHouse_EventScript_BaldingMan::
	msgbox SafariZone_East_Text_TiredFromAllTheFun, MSGBOX_NPC
	end

SafariZone_East_Text_HowManyDidYouCatch::
#if GERMAN
	.string "Wie viele hast du gefangen?\n"
	.string "Ich bin total erschöpft!$"
#else
	.string "How many did you catch?\n"
	.string "I'm bushed from the effort!$"
#endif

SafariZone_East_Text_CaughtChanseyAllWorthwhile::
#if GERMAN
	.string "Ich habe ein Chaneira gefangen!\p"
	.string "Die Mühe hat sich gelohnt!$"
#else
	.string "I caught a CHANSEY!\p"
	.string "That makes this all worthwhile.$"
#endif

SafariZone_East_Text_TiredFromAllTheFun::
#if GERMAN
	.string "Was für ein Spaß!\n"
	.string "Aber jetzt bin ich hundemüde...$"
#else
	.string "Whew!\n"
	.string "I'm tired from all the fun!$"
#endif

