Route15_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route15_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route15_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route15_EventScript_Colette::
	trainerbattle_single TRAINER_COLETTE_HNS, Route15_Text_TeacherColetteSeen, Route15_Text_TeacherColetteBeaten
	msgbox Route15_Text_TeacherColetteAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Hillary::
	trainerbattle_single TRAINER_HILLARY_HNS, Route15_Text_TeacherHillarySeen, Route15_Text_TeacherHillaryBeaten, Route15_EventScript_RegisterHillary
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_RematchHillary
	msgbox Route15_Text_TeacherHillaryAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_RegisterHillary::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route15_Text_HillaryRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_HILLARY_HNS
	release
	end

Route15_EventScript_RematchHillary::
	trainerbattle_rematch TRAINER_HILLARY_HNS, Route15_Text_HillaryRematchIntro, Route15_Text_HillaryRematchDefeat
	msgbox Route15_Text_HillaryPostRematch, MSGBOX_AUTOCLOSE
	goto_if_defeated TRAINER_HILLARY_2_HNS, Route15_EventScript_RematchHillaryTryGiveItem
	end

Route15_EventScript_RematchHillaryTryGiveItem::
	checkitem ITEM_TM_ENERGY_BALL
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_NoOp
	giveitem ITEM_TM_ENERGY_BALL
	closemessage
	end

Route15_EventScript_Kipp::
	trainerbattle_single TRAINER_KIPP_HNS, Route15_Text_SchoolboyKippSeen, Route15_Text_SchoolboyKippBeaten
	msgbox Route15_Text_SchoolboyKippAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Tommy::
	trainerbattle_single TRAINER_TOMMY_HNS, Route15_Text_SchoolboyTommySeen, Route15_Text_SchoolboyTommyBeaten
	msgbox Route15_Text_SchoolboyTommyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Johnny::
	trainerbattle_single TRAINER_JOHNNY_HNS, Route15_Text_SchoolboyJohnnySeen, Route15_Text_SchoolboyJohnnyBeaten
	msgbox Route15_Text_SchoolboyJohnnyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_Billy::
	trainerbattle_single TRAINER_BILLY_HNS, Route15_Text_SchoolboyBillySeen, Route15_Text_SchoolboyBillyBeaten, Route15_EventScript_RegisterBilly
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route15_EventScript_RematchBilly
	msgbox Route15_Text_SchoolboyBillyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route15_EventScript_RegisterBilly::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route15_Text_BillyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BILLY_HNS
	release
	end

Route15_EventScript_RematchBilly::
	trainerbattle_rematch TRAINER_BILLY_HNS, Route15_Text_BillyRematchIntro, Route15_Text_BillyRematchDefeat
	msgbox Route15_Text_BillyPostRematch, MSGBOX_AUTOCLOSE
	goto_if_defeated TRAINER_BILLY_2_HNS, Route15_EventScript_RematchBillyTryGiveItem
	end

Route15_EventScript_RematchBillyTryGiveItem::
	checkitem ITEM_TM_FACADE
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_NoOp
	giveitem ITEM_TM_FACADE
	closemessage
	end

Route15_EventScript_Sign::
	msgbox Route15_Text_Sign, MSGBOX_SIGN
	end

Route15_EventScript_PPup::
	finditem ITEM_PP_UP
	end

Route15_Text_TeacherColetteSeen:
#if GERMAN
	.string "Hast du nicht was vergessen?$"
#else
	.string "Have you forgotten anything?$"
#endif

Route15_Text_TeacherColetteBeaten:
#if GERMAN
	.string "Jiiiek!$"
#else
	.string "Kyaaah!$"
#endif

Route15_Text_TeacherColetteAfterBattle:
#if GERMAN
	.string "Ehe ich Lehrerin wurde, vergaß ich\n"
	.string "immer eine Menge Dinge.$"
#else
	.string "Before I became a teacher, I used\n"
	.string "to forget a lot of things.$"
#endif

Route15_Text_TeacherHillarySeen:
#if GERMAN
	.string "Bei schönem Wetter würden die Kinder\n"
	.string "lieber im Schulhof spielen, als in den\l"
	.string "Klassenzimmern zu lernen.$"
#else
	.string "On sunny days, I think that the\n"
	.string "kids would rather be playing in the\l"
	.string "schoolyard than studying in class.$"
#endif

Route15_Text_TeacherHillaryBeaten:
#if GERMAN
	.string "Einen Versuch war’s wert…$"
#else
	.string "I didn't want to lose…$"
#endif

Route15_Text_TeacherHillaryAfterBattle:
#if GERMAN
	.string "Lernen ist sehr wichtig, aber Bewegung\n"
	.string "ist ebenfalls essentiell!$"
#else
	.string "Studying is important, but\n"
	.string "exercise is just as vital.$"
#endif

Route15_Text_HillaryRegister:
#if GERMAN
	.string "Du hast es mir gezeigt!\n"
	.string "Könnte ich deine Nummer haben?$"
#else
	.string "You've taught me a lesson!\n"
	.string "May I have your number?$"
#endif

Route15_Text_HillaryRematchIntro:
#if GERMAN
	.string "Dieses mal belehre ich dich!$"
#else
	.string "I'll school you this time!$"
#endif

Route15_Text_HillaryRematchDefeat:
#if GERMAN
	.string "Zurück an die Tafel…$"
#else
	.string "Back to the drawing board…$"
#endif

Route15_Text_HillaryPostRematch:
#if GERMAN
	.string "Pokémon und Kinder lernen gleich.\n"
	.string "Immer nur geduldig sein.!$"
#else
	.string "Teaching POKéMON is just like\n"
	.string "teaching children. Patience!$"
#endif

Route15_Text_SchoolboyKippSeen:
#if GERMAN
	.string "Warte! Ich muss kurz meine Mutter\n"
	.string "anrufen.$"
#else
	.string "Hang on. I have to phone my mom.$"
#endif

Route15_Text_SchoolboyKippBeaten:
#if GERMAN
	.string "Tut mir leid, Mama!\n"
	.string "Ich wurde besiegt!$"
#else
	.string "Sorry, Mom! I was beaten!$"
#endif

Route15_Text_SchoolboyKippAfterBattle:
#if GERMAN
	.string "Meine Mutter macht sich immer große\n"
	.string "Sorgen. Ständig muss ich sie anrufen.$"
#else
	.string "My mom worries so much about me, I\n"
	.string "have to phone her all the time.$"
#endif

Route15_Text_SchoolboyTommySeen:
#if GERMAN
	.string "Lass uns kämpfen.\n"
	.string "Ich werde nicht verlieren!$"
#else
	.string "Let's battle. I won't lose!$"
#endif

Route15_Text_SchoolboyTommyBeaten:
#if GERMAN
	.string "Argh! Ich muss ja noch Hausaufgaben\n"
	.string "machen!$"
#else
	.string "I forgot to do my homework!$"
#endif

Route15_Text_SchoolboyTommyAfterBattle:
#if GERMAN
	.string "Sayonara! Das habe ich gestern\n"
	.string "in der Schule gelernt!$"
#else
	.string "Sayonara! I just learned that in\n"
	.string "my Japanese class.$"
#endif

Route15_Text_SchoolboyJohnnySeen:
#if GERMAN
	.string "Meine Sozialkundeklasse und ich machen\n"
	.string "einen Ausflug zum Radioturm in Lavandia!$"
#else
	.string "We're on a field trip to LAVENDER\n"
	.string "RADIO TOWER for social studies.$"
#endif

Route15_Text_SchoolboyJohnnyBeaten:
#if GERMAN
	.string "Du bist unheimlich stark!$"
#else
	.string "You're wickedly tough!$"
#endif

Route15_Text_SchoolboyJohnnyAfterBattle:
#if GERMAN
	.string "Ich bin müde vom Laufen.\n"
	.string "Ich muss eine Pause machen.$"
#else
	.string "I'm tired of walking. I need to\n"
	.string "take a break.$"
#endif

Route15_Text_SchoolboyBillySeen:
#if GERMAN
	.string "Sport ist mein Lieblingsfach!$"
#else
	.string "My favorite class is Gym!$"
#endif

Route15_Text_SchoolboyBillyBeaten:
#if GERMAN
	.string "Oh nein!\n"
	.string "Wie konnte ich nur verlieren?$"
#else
	.string "Oh, no! How could I lose?$"
#endif

Route15_Text_SchoolboyBillyAfterBattle:
#if GERMAN
	.string "Wenn Pokémon ein Unterrichtsfach wäre,\n"
	.string "dann wäre ich der Klassenbeste!$"
#else
	.string "If POKéMON were a subject at\n"
	.string "school, I'd be the best!$"
#endif

Route15_Text_BillyRegister:
#if GERMAN
	.string "Ich hätte mehr aufpassen sollen in der\n"
	.string "Klasse.\l"
	.string "Kann ich deine Nummer haben?$"
#else
	.string "I should've paid more attention in class.\n"
	.string "Can I have your number?$"
#endif

Route15_Text_BillyRematchIntro:
#if GERMAN
	.string "Ich habe viel gelernt!\n"
	.string "Lass es mich dir beibringen!$"
#else
	.string "I've been studying hard!\n"
	.string "Let me show you what I learned!$"
#endif

Route15_Text_BillyRematchDefeat:
#if GERMAN
	.string "Ich muss mehr studieren…$"
#else
	.string "I need to study more…$"
#endif

Route15_Text_BillyPostRematch:
#if GERMAN
	.string "Bücherschläue ist nicht alles.\n"
	.string "Ich brauche praktische Erfahrung!$"
#else
	.string "Book smarts aren't everything.\n"
	.string "I need battle experience too!$"
#endif

Route15_Text_Sign:
#if GERMAN
	.string "Route 15\p"
	.string "Fuchsania City - Lavandia$"
#else
	.string "ROUTE 15\p"
	.string "FUCHSIA CITY - LAVENDER TOWN$"
#endif

