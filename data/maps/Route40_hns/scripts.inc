Route40_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route40_MapScript_OnTransition
	.byte 0

Route40_MapScript_OnTransition::
	callnative SetTimeBasedEncounters
	goto_if_ge VAR_OLIVINE_CITY_STATE, 5, Route40_MapScript_ClearWeather
	end

Route40_MapScript_ClearWeather::
	setweather WEATHER_NONE
	end

Route40_EventScript_Simon::
	trainerbattle_single TRAINER_SIMON_HNS, Route40_Text_SwimmermSimonSeen, Route40_Text_SwimmermSimonBeaten
	msgbox Route40_Text_SwimmermSimonAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmermSimonSeen:
#if GERMAN
	.string "Du musst dich erst aufwärmen,\n"
	.string "bevor du schwimmen gehst.\p"
	.string "Das weiß doch jedes Kind!$"
#else
	.string "You have to warm up before\n"
	.string "going into the water.\p"
	.string "That's basic.$"
#endif

Route40_Text_SwimmermSimonBeaten:
#if GERMAN
	.string "O.K.! Onkel! Ich gebe auf!$"
#else
	.string "OK! Uncle! I give!$"
#endif

Route40_Text_SwimmermSimonAfter:
#if GERMAN
	.string "{COLOR RED}Anemonia City{COLOR DARK_GRAY} ist ziemlich\n"
	.string "weit weg von hier.$"
#else
	.string "CIANWOOD CITY is a good\n"
	.string "distance away from here.$"
#endif

Route40_EventScript_Randall::
	trainerbattle_single TRAINER_RANDALL_HNS, Route40_Text_SwimmermRandallSeen, Route40_Text_SwimmermRandallBeaten
	msgbox Route40_Text_SwimmermRandallAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmermRandallSeen:
#if GERMAN
	.string "Du bist doch noch jung! Surfe nicht auf\n"
	.string "deinem Pokémon! Schwimme gefälligst!$"
#else
	.string "Hey, you're young and fit!\p"
	.string "Don't ride your POKéMON!\n"
	.string "Swim!$"
#endif

Route40_Text_SwimmermRandallBeaten:
#if GERMAN
	.string "Oh, oh. Ich habe verloren…$"
#else
	.string "Uh-oh. I lost…$"
#endif

Route40_Text_SwimmermRandallAfter:
#if GERMAN
	.string "Schwimmen hält deinen ganzen\n"
	.string "Körper fit und gesund!$"
#else
	.string "Swimming exercises your\n"
	.string "entire body. It's healthy.$"
#endif

Route40_EventScript_Elaine::
	trainerbattle_single TRAINER_ELAINE_HNS, Route40_Text_SwimmerfElaineSeen, Route40_Text_SwimmerfElaineBeaten
	msgbox Route40_Text_SwimmerfElaineAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmerfElaineSeen:
#if GERMAN
	.string "Gehst du nach {COLOR RED}Anemonia City{COLOR DARK_GRAY}?\p"
	.string "Wie wäre es vorher mit einem kleinen\n"
	.string "Kampftraining?$"
#else
	.string "Are you going to CIANWOOD?\p"
	.string "How about a quick battle\n"
	.string "first?$"
#endif

Route40_Text_SwimmerfElaineBeaten:
#if GERMAN
	.string "Diesmal habe ich verloren!$"
#else
	.string "I lost that one!$"
#endif

Route40_Text_SwimmerfElaineAfter:
#if GERMAN
	.string "Ich behaupte jetzt einfach mal, dass\n"
	.string "ich zumindest besser schwimme als du!$"
#else
	.string "I'd say I'm a better swimmer\n"
	.string "than you. Yeah!$"
#endif

Route40_EventScript_Paula::
	trainerbattle_single TRAINER_PAULA_HNS, Route40_Text_SwimmerfPaulaSeen, Route40_Text_SwimmerfPaulaBeaten
	msgbox Route40_Text_SwimmerfPaulaAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmerfPaulaSeen:
#if GERMAN
	.string "Ich habe keine Schwimmreifen.\p"
	.string "Ich halte mich an einem\n"
	.string "Wasser-Pokémon fest!$"
#else
	.string "No inner tube for me.\p"
	.string "I'm hanging on to a sea\n"
	.string "POKéMON!$"
#endif

Route40_Text_SwimmerfPaulaBeaten:
#if GERMAN
	.string "Oje, um mich dreht sich\n"
	.string "plötzlich alles!$"
#else
	.string "Ooh, I'm feeling dizzy!$"
#endif

Route40_Text_SwimmerfPaulaAfter:
#if GERMAN
	.string "Ich lasse mich im Wasser treiben und\n"
	.string "von den Wellen davontragen.$"
#else
	.string "While I float like this,\n"
	.string "the waves carry me along.$"
#endif

Route40_EventScript_Woman1::
	lock
	faceplayer
	msgbox Route40_Text_Lass1, MSGBOX_DEFAULT
	closemessage
	release
	end

Route40_Text_Lass1:
#if GERMAN
	.string "Du kannst es zwar nicht von hier\n"
	.string "sehen, aber {COLOR RED}Anemonia{COLOR DARK_GRAY}-\l"
	.string "City liegt jenseits des Meeres.$"
#else
	.string "Although you can't see it from here,\n"
	.string "CIANWOOD is across the sea.$"
#endif

Route40_EventScript_Woman2::
	lock
	faceplayer
	msgbox Route40_Text_Lass2, MSGBOX_DEFAULT
	closemessage
	release
	end

Route40_Text_Lass2:
#if GERMAN
	.string "Ich reiste mit dem Schiff nach\n"
	.string "{COLOR RED}Oliviana City{COLOR DARK_GRAY}, um die\l"
	.string "Sehenswürdigkeiten und die\l"
	.string "Atmosphäre zu genießen.\p"
	.string "Da es eine Hafenstadt ist, unter-\n"
	.string "scheidet sie sich\l"
	.string "von anderen großen Städten.$"
#else
	.string "I came to OLIVINE by ship to see\n"
	.string "the sights and soak up the\l"
	.string "atmosphere.\p"
	.string "Being a port, it feels so\n"
	.string "different from a big city.$"
#endif

Route40_EventScript_Youngster::
	lock
	faceplayer
	msgbox Route40_Text_StandingYoungster, MSGBOX_DEFAULT
	closemessage
	release
	end

Route40_Text_StandingYoungster:
#if GERMAN
	.string "Warst du schon am Duellturm?\p"
	.string "Ich denke, dass sich bereits viele\n"
	.string "starke Trainer dort versammeln.\p"
	.string "Da du so viele Orden besitzt,\n"
	.string "wirst du dich dort wacker schlagen.$"
#else
	.string "Have you gone to the TRAINER\n"
	.string "HILL?\p"
	.string "I think a lot of tough trainers\n"
	.string "have gathered there already.\p"
	.string "But since you have so many BADGES\n"
	.string "you shouldn't do badly at all.$"
#endif

Route40_Text_Monica:
#if GERMAN
    .string "Monika: Freut mich, dich\n"
    .string "kennenzulernen.\p"
    .string "Ich bin Monika von der Wochen-\n"
    .string "tagsfamilie.\p"
    .string "Ich wette, du errätst nicht,\n"
    .string "welcher Wochentag mein\l"
    .string "Lieblingstag ist!$"
#else
	.string "MONICA: Glad to meet you.\n"
	.string "I'm MONICA of the WEEKDAY FAMILY.\p"
	.string "I bet you can't guess my favorite\n"
	.string "day of the week!$"
#endif

Route40_Text_MonicaGivesGift:
#if GERMAN
    .string "Ganz genau!\p"
    .string "Als Zeichen unserer Freundschaft\n"
    .string "habe ich ein Geschenk für dich!$"
#else
	.string "That's right!\p"
	.string "As a token of our friendship,\n"
	.string "I have a gift for you!$"
#endif

Route40_Text_MonicaGaveGift:
#if GERMAN
	.string "Monja: Dieses Item verstärkt\n"
	.string "Flug-Attacken.\p"
	.string "Damit solltest du ein Vogel-Pokémon\n"
	.string "ausstatten.$"
#else
	.string "MONICA: It's an item that raises\n"
	.string "the power of FLYING-type moves.\p"
	.string "You should equip a bird\n"
	.string "POKéMON with that item.$"
#endif

Route40_Text_MonicaMonday:
#if GERMAN
	.string "Monja: Meine Geschwister findest du\n"
	.string "überall.\p"
	.string "Versuche mal, ob du sie alle aufspüren\n"
	.string "kannst!$"
#else
	.string "MONICA: My brothers and\n"
	.string "sisters are all over the place.\p"
	.string "See if you could find\n"
	.string "them all!$"
#endif

Route40_Text_MonicaNotMonday:
#if GERMAN
	.string "Monja: Ich fürchte,\n"
	.string "heute ist nicht Montag.\l"
	.string "Wie schade…$"
#else
	.string "MONICA: I don't think today\n"
	.string "is Monday. How sad…$"
#endif

Route40_Text_MonicaNope:
#if GERMAN
	.string "Nicht dieser.$"
#else
	.string "Not that one.$"
#endif

Rotue40_EventScript_Monica::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SHARP_BEAK, Rotue40_EventScript_MonicaCompleted
	msgbox Route40_Text_Monica, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, Rotue40_EventScript_MonicaNope
	case 1, Rotue40_EventScript_MonicaYes
	case 2, Rotue40_EventScript_MonicaNope
	case 3, Rotue40_EventScript_MonicaNope
	case 4, Rotue40_EventScript_MonicaNope
	case 5, Rotue40_EventScript_MonicaNope
	case 6, Rotue40_EventScript_MonicaNope
	case 7 Rotue40_EventScript_MonicaCancel
	case MULTI_B_PRESSED, Rotue40_EventScript_MonicaCancel
	closemessage
	release
	end
Rotue40_EventScript_MonicaYes::
	msgbox Route40_Text_MonicaGivesGift, MSGBOX_DEFAULT
	giveitem ITEM_SHARP_BEAK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_SHARP_BEAK
	msgbox Route40_Text_MonicaGaveGift, MSGBOX_DEFAULT
	closemessage
	release
	end
Rotue40_EventScript_MonicaNope::
	msgbox Route40_Text_MonicaNope, MSGBOX_DEFAULT
	closemessage
	release
	end
Rotue40_EventScript_MonicaCancel::
	closemessage
	release
	end
Rotue40_EventScript_MonicaCompleted::
	msgbox Route40_Text_MonicaMonday, MSGBOX_DEFAULT
	closemessage
	release
	end
