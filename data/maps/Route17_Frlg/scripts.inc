Route17_Frlg_MapScripts::
	.byte 0

Route17_EventScript_ItemsNotice::
	msgbox Route17_Text_WatchOutForDiscardedItems, MSGBOX_SIGN
	end

Route17_EventScript_TrainerTips1::
	msgbox Route17_Text_SameSpeciesGrowDifferentRates, MSGBOX_SIGN
	end

Route17_EventScript_TrainerTips2::
	msgbox Route17_Text_PressBToStayInPlace, MSGBOX_SIGN
	end

Route17_EventScript_RouteSign::
	msgbox Route17_Text_RouteSign, MSGBOX_SIGN
	end

Route17_EventScript_BallsNotice::
	msgbox Route17_Text_DontThrowGameThrowBalls, MSGBOX_SIGN
	end

Route17_EventScript_CyclingRoadSign::
	msgbox Route17_Text_CyclingRoadSign, MSGBOX_SIGN
	end

Route17_Text_RaulIntro::
#if GERMAN
	.string "Es lohnt sich nicht, Kinder\n"
	.string "auszurauben!$"
#else
	.string "There's no getting rich quick in\n"
	.string "battling kids.$"
#endif

Route17_Text_RaulDefeat::
#if GERMAN
	.string "Die Luft ist raus!$"
#else
	.string "Burned out!$"
#endif

Route17_Text_RaulPostBattle::
#if GERMAN
	.string "Auf dem Radweg liegen nützliche\n"
	.string "Items herum!$"
#else
	.string "You can find good stuff lying\n"
	.string "around on CYCLING ROAD.\p"
	.string "There's good money in picking them\n"
	.string "up and selling them.$"
#endif

Route17_Text_IsaiahIntro::
#if GERMAN
	.string "Was willst du, Tröte?$"
#else
	.string "I'm mighty proud of my bod, kiddo.\n"
	.string "Come on!$"
#endif

Route17_Text_IsaiahDefeat::
#if GERMAN
	.string "Hoho!$"
#else
	.string "Whoo!$"
#endif

Route17_Text_IsaiahPostBattle::
#if GERMAN
	.string "Ich könnte dich mit einem\n"
	.string "Bauchplatscher plattmachen!$"
#else
	.string "I could belly-bump you outta\n"
	.string "here!$"
#endif

Route17_Text_VirgilIntro::
#if GERMAN
	.string "Willst du nach {COLOR RED}Fuchsania City{COLOR DARK_GRAY}?$"
#else
	.string "You heading to FUCHSIA?$"
#endif

Route17_Text_VirgilDefeat::
#if GERMAN
	.string "Ich habe mein Bestes gegeben!$"
#else
	.string "Crash and burn!$"
#endif

Route17_Text_VirgilPostBattle::
#if GERMAN
	.string "Ich liebe es, bergab Rennen zu\n"
	.string "fahren!$"
#else
	.string "I love racing downhill!$"
#endif

Route17_Text_BillyIntro::
#if GERMAN
	.string "Wir sind Biker, Könige des\n"
	.string "Highways!$"
#else
	.string "We're BIKERS!\n"
	.string "We rule the roads, man!$"
#endif

Route17_Text_BillyDefeat::
#if GERMAN
	.string "Ich bin voll auf die Nase\n"
	.string "gefallen!$"
#else
	.string "Smoked!$"
#endif

Route17_Text_BillyPostBattle::
#if GERMAN
	.string "Suchst du das Abenteuer?$"
#else
	.string "Are you looking for adventure?$"
#endif

Route17_Text_NikolasIntro::
#if GERMAN
	.string "Voltobal wird dich unter Strom\n"
	.string "setzen!$"
#else
	.string "Let VOLTORB electrify you!$"
#endif

Route17_Text_NikolasDefeat::
#if GERMAN
	.string "Du hast mich geerdet!$"
#else
	.string "Grounded out!$"
#endif

Route17_Text_NikolasPostBattle::
#if GERMAN
	.string "Ich habe Voltobal im verlassenen\n"
	.string "{COLOR RED}Kraftwerk{COLOR DARK_GRAY} gefangen.$"
#else
	.string "I got my VOLTORB at the abandoned\n"
	.string "POWER PLANT.$"
#endif

Route17_Text_ZeekIntro::
#if GERMAN
	.string "Mein Pokémon entwickelt sich nicht\n"
	.string "weiter!$"
#else
	.string "I leveled up my POKéMON, but it\n"
	.string "won't evolve. Why?$"
#endif

Route17_Text_ZeekDefeat::
#if GERMAN
	.string "Heh, was sollte das?$"
#else
	.string "Why, you!$"
#endif

Route17_Text_ZeekPostBattle::
#if GERMAN
	.string "Manche Pokémon benötigen\n"
	.string "spezielle Steine, um sich zu\l"
	.string "entwickeln.$"
#else
	.string "Maybe some POKéMON need element\n"
	.string "STONES to evolve.$"
#endif

Route17_Text_JamalIntro::
#if GERMAN
	.string "Ich muss ein wenig abnehmen!$"
#else
	.string "I need a little exercise!$"
#endif

Route17_Text_JamalDefeat::
#if GERMAN
	.string "Puh!\n"
	.string "Eine gute Übung!$"
#else
	.string "Whew!\n"
	.string "Good workout!$"
#endif

Route17_Text_JamalPostBattle::
#if GERMAN
	.string "Ich habe sicher an Gewicht\n"
	.string "verloren!$"
#else
	.string "I'm sure I lost weight there!$"
#endif

Route17_Text_CoreyIntro::
#if GERMAN
	.string "Sei ein Rebell!$"
#else
	.string "Be a rebel!$"
#endif

Route17_Text_CoreyDefeat::
#if GERMAN
	.string "Arrrgh!$"
#else
	.string "Aaaargh!$"
#endif

Route17_Text_CoreyPostBattle::
#if GERMAN
	.string "Setze dich für deine Ideale ein!$"
#else
	.string "Be ready to fight for your beliefs!$"
#endif

Route17_Text_JaxonIntro::
#if GERMAN
	.string "Du besitzt ein schickes Fahrrad!\n"
	.string "Fährt es sich gut?$"
#else
	.string "Nice BIKE!\n"
	.string "How's it handle?$"
#endif

Route17_Text_JaxonDefeat::
#if GERMAN
	.string "Mist!$"
#else
	.string "Shoot!$"
#endif

Route17_Text_JaxonPostBattle::
#if GERMAN
	.string "Das Gefälle macht das Lenken sehr\n"
	.string "schwer!$"
#else
	.string "The slope makes it hard to steer.$"
#endif

Route17_Text_WilliamIntro::
#if GERMAN
	.string "Zieh Leine!\n"
	.string "Ich bin erschöpft!$"
#else
	.string "Get lost, kid!\n"
	.string "I'm bushed!$"
#endif

Route17_Text_WilliamDefeat::
#if GERMAN
	.string "Bist du nun zufrieden?$"
#else
	.string "Are you satisfied?$"
#endif

Route17_Text_WilliamPostBattle::
#if GERMAN
	.string "Ich muss mich eine Runde aufs Ohr\n"
	.string "legen!$"
#else
	.string "I need to catch a few z's!$"
#endif

Route17_Text_WatchOutForDiscardedItems::
#if GERMAN
	.string "Ein Hinweis!\p"
	.string "Achte auf weggeworfene Items!$"
#else
	.string "It's a notice.\p"
	.string "Watch out for discarded items.$"
#endif

Route17_Text_SameSpeciesGrowDifferentRates::
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Jedes Pokémon ist einzigartig.\p"
	.string "Selbst gleiche Pokémon mit\n"
	.string "identischem Level unterscheiden\l"
	.string "sich voneinander.$"
#else
	.string "TRAINER TIPS\p"
	.string "All POKéMON are unique.\p"
	.string "Even POKéMON of the same species\n"
	.string "and level grow at different rates.$"
#endif

Route17_Text_PressBToStayInPlace::
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Drücke den B-Knopf, um auch bei\n"
	.string "Gefälle die Position zu halten.$"
#else
	.string "TRAINER TIPS\p"
	.string "Press the B Button to stay in place\n"
	.string "while on a slope.$"
#endif

Route17_Text_RouteSign::
#if GERMAN
	.string "Route 17\n"
	.string "Prismania City - Fuchsania City$"
#else
	.string "ROUTE 17\n"
	.string "CELADON CITY - FUCHSIA CITY$"
#endif

Route17_Text_DontThrowGameThrowBalls::
#if GERMAN
	.string "Ein Hinweis!\p"
	.string "Gib niemals auf! Versuche dein\n"
	.string "Glück mit Pokébällen!$"
#else
	.string "It's a notice!\p"
	.string "Don't throw the game, throw POKé\n"
	.string "BALLS instead!$"
#endif

Route17_Text_CyclingRoadSign::
#if GERMAN
	.string "Der Radweg endet hier!$"
#else
	.string "CYCLING ROAD\n"
	.string "Slope ends here!$"
#endif

