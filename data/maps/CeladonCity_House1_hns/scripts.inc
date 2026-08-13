CeladonCity_House1_hns_MapScripts::
	.byte 0

CeladonCity_House1_EventScript_Chef::
	msgbox CeladonCity_House1_Text_ChefEatathon, MSGBOX_NPC
	end

CeladonCity_House1_EventScript_Fisher1::
	lock
	msgbox CeladonCity_House1_Text_Fisher1Snarfle, MSGBOX_DEFAULT
	faceplayer
	msgbox CeladonCity_House1_Text_Fisher1Concentration, MSGBOX_DEFAULT
	turnobject VAR_LAST_TALKED, DIR_WEST
	release
	end

CeladonCity_House1_EventScript_Fisher2::
	lock
	msgbox CeladonCity_House1_Text_Fisher2GulpChew, MSGBOX_DEFAULT
	faceplayer
	msgbox CeladonCity_House1_Text_Fisher2Quantity, MSGBOX_DEFAULT
	turnobject VAR_LAST_TALKED, DIR_EAST
	release
	end

CeladonCity_House1_EventScript_Fisher3::
	lock
	msgbox CeladonCity_House1_Text_Fisher3MunchMunch, MSGBOX_DEFAULT
	faceplayer
	msgbox CeladonCity_House1_Text_Fisher3GoldenrodIsBest, MSGBOX_DEFAULT
	turnobject VAR_LAST_TALKED, DIR_EAST
	release
	end

CeladonCity_House1_EventScript_Teacher::
	lock
	msgbox CeladonCity_House1_Text_TeacherCrunchCrunch, MSGBOX_DEFAULT
	faceplayer
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_House1_EventScript_TeacherCoincase
	msgbox CeladonCity_House1_Text_TeacherKeepEating, MSGBOX_DEFAULT
	turnobject VAR_LAST_TALKED, DIR_WEST
	release
	end

CeladonCity_House1_EventScript_TeacherCoincase::
	msgbox CeladonCity_House1_Text_TeacherNoCoinCase, MSGBOX_DEFAULT
	turnobject VAR_LAST_TALKED, DIR_WEST
	release
	end

CeladonCity_House1_EventScript_Sign::
	msgbox CeladonCity_House1_Text_EatathonContestPoster, MSGBOX_SIGN
	end

CeladonCity_House1_Text_ChefEatathon:
#if GERMAN
	.string "Willkommen in unserem Restaurant!\p"
	.string "…Leider können wir dich im Moment nicht\n"
	.string "bedienen, weil wir gerade mitten in\l"
	.string "einem Wettessen stecken.\p"
	.string "Aber wenn du möchtest, kannst du den\n"
	.string "Teilnehmern beim Essen zuschauen!$"
#else
	.string "Hi!\p"
	.string "We're holding an eatathon contest.\p"
	.string "We can't serve you right now.\n"
	.string "Sorry.$"
#endif

CeladonCity_House1_Text_Fisher1Snarfle:
#if GERMAN
	.string "…Würg, kau…$"
#else
	.string "…Snarfle, chew…$"
#endif

CeladonCity_House1_Text_Fisher1Concentration:
#if GERMAN
	.string "Sprich nicht mit mir!\p"
	.string "Du würdest mich ablenken!$"
#else
	.string "Don't talk to me!\p"
	.string "You'll break my concentration!$"
#endif

CeladonCity_House1_Text_Fisher2GulpChew:
#if GERMAN
	.string "…Schluck… Kau…$"
#else
	.string "…Gulp… Chew…$"
#endif

CeladonCity_House1_Text_Fisher2Quantity:
#if GERMAN
	.string "Ich nehme Menge vor Qualität!\p"
	.string "Ich bin glücklich, wenn ich satt bin!$"
#else
	.string "I take quantity over quality!\p"
	.string "I'm happy when I'm full!$"
#endif

CeladonCity_House1_Text_Fisher3MunchMunch:
#if GERMAN
	.string "Kau, kau…$"
#else
	.string "Munch, munch…$"
#endif

CeladonCity_House1_Text_Fisher3GoldenrodIsBest:
#if GERMAN
	.string "Das Essen hier ist gut, aber in Dukatia\n"
	.string "City gibt es das beste Essen überhaupt.$"
#else
	.string "The food is good here, but\n"
	.string "GOLDENROD has the best food\l"
	.string "anywhere.$"
#endif

CeladonCity_House1_Text_TeacherCrunchCrunch:
#if GERMAN
	.string "Knirscher… Knirscher…$"
#else
	.string "Crunch… Crunch…$"
#endif

CeladonCity_House1_Text_TeacherNoCoinCase:
#if GERMAN
	.string "Hier wird dir niemand einen Münzkorb\n"
	.string "geben.\l"
	.string "Du solltest in Johto nachsehen.$"
#else
	.string "Nobody here will give you a COIN\n"
	.string "CASE. You should look in JOHTO.$"
#endif

CeladonCity_House1_Text_TeacherKeepEating:
#if GERMAN
	.string "Schling, schlabber…\p"
	.string "Ich habe immer noch etwas Platz!\p"
	.string "Chefkoch! Nachschub!$"
#else
	.string "Crunch… Crunch…\p"
	.string "I can keep eating!\p"
	.string "More, CHEF!$"
#endif

CeladonCity_House1_Text_EatathonContestPoster:
#if GERMAN
	.string "Wettessen! Essen bis zum Umfallen!\n"
	.string "Kein Zeitlimit! Der größte Vielfraß\l"
	.string "bekommt alles umsonst!$"
#else
	.string "Eatathon Contest! No time limit!\p"
	.string "A battle without end! The biggest\n"
	.string "muncher gets it all for free!$"
#endif

