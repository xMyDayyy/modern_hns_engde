SaffronCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_EventScript_CityEnter
	.byte 0

SaffronCity_OnFrame::
	map_script_2 VAR_SAFFRON_CITY_STATE, 0,  SaffronCity_EventScript_BaobaCall
	.2byte 0

SaffronCity_EventScript_CityEnter::
	setflag FLAG_VISITED_SAFFRON_CITY
	end

SaffronCity_EventScript_BaobaCall::
	lock
	setspeaker SaffronCity_Text_BaobaName
	pokenavcall SaffronCity_Text_Baoba
	waitmessage
	delay 30
	setflag FLAG_SAFARI_ZONE_EAST_EXPANSION
	setvar VAR_SAFFRON_CITY_STATE, 1
	release
	end

SaffronCity_Text_BaobaName:
#if GERMAN
	.string "Baoba$"
#else
	.string "BAOBA$"
#endif

SaffronCity_Text_Baoba:
#if GERMAN
	.string "Wärter Baoba: {PLAYER}!\p"
	.string "Hier ist Wärter Baoba.\p"
	.string "Ich ruf an, um dir zu sagen,\n"
	.string "dass die Safarizone wieder\l"
	.string "gewachsen ist!\p"
	.string "Endlich ist meine Safarizone\n"
	.string "vollständig!\p"
	.string "Du weißt noch, wo sie ist,\n"
	.string "oder?\p"
	.string "Direkt westlich von\n"
	.string "Anemonia City!\l"
	.string "Bis bald!$"
#else
	.string "WARDEN BAOBA: {PLAYER}!\p"
	.string "This is WARDEN BAOBA.\p"
	.string "I'm calling to tell you that the\n"
	.string "SAFARI ZONE has expanded again!\p"
	.string "Finally, my SAFARI ZONE has been\n"
	.string "fully realized!\p"
	.string "You remember where it is, right?\p"
	.string "Just west of CIANWOOD CITY!\n"
	.string "see you soon!$"
#endif

SaffronCity_EventScript_Lass1A::
	goto_if_set FLAG_RETURNED_MACHINE_PART, SaffronCity_EventScript_Lass1B
	msgbox SaffronCity_Text_Lass1, MSGBOX_NPC
	end

SaffronCity_EventScript_Lass1B::
	msgbox SaffronCity_Text_Lass1_ReturnedPart, MSGBOX_NPC
	end

SaffronCity_EventScript_Lass2::
	msgbox SaffronCity_Text_Lass2, MSGBOX_NPC
	end

SaffronCity_EventScript_PokefanM::
	goto_if_set FLAG_RETURNED_MACHINE_PART, SaffronCity_EventScript_PokefanM2
	msgbox SaffronCity_Text_PokefanM, MSGBOX_NPC
	end

SaffronCity_EventScript_PokefanM2::
	msgbox SaffronCity_Text_PokefanM_ReturnedPart, MSGBOX_NPC
	end

SaffronCity_EventScript_CooltrainerM::
	msgbox SaffronCity_Text_CooltrainerM, MSGBOX_NPC
	end

SaffronCity_EventScript_CooltrainerF::
	msgbox SaffronCity_Text_CooltrainerF, MSGBOX_NPC
	end

SaffronCity_EventScript_Fisher::
	goto_if_set FLAG_RETURNED_MACHINE_PART, SaffronCity_EventScript_Fisher2
	msgbox SaffronCity_Text_Fisher, MSGBOX_NPC
	end

SaffronCity_EventScript_Fisher2::
	msgbox SaffronCity_Text_Fisher_ReturnedPart, MSGBOX_NPC
	end

SaffronCity_EventScript_Youngster1::
	msgbox SaffronCity_Text_Youngster1, MSGBOX_NPC
	end

SaffronCity_EventScript_Youngster2::
	msgbox SaffronCity_Text_Youngster2, MSGBOX_NPC
	end
SaffronCity_EventScript_CitySign::
	msgbox SaffronCity_Text_Sign, MSGBOX_SIGN
	end

SaffronCity_EventScript_GymSign::
	msgbox SaffronCity_Text_GymSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_DojoSign::
	msgbox SaffronCity_Text_FightingDojoSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_SilphCoSign::
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_MrPsychicSign::
	msgbox SaffronCity_Text_MrPsychicHouseSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_MagnetTrainSign::
	msgbox SaffronCity_Text_MagnetTrainStationSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_Elli::
	msgbox SaffronCity_Text_Elli, MSGBOX_NPC
	end

SaffronCity_Text_Elli:
#if GERMAN
	.string "Ich liebe Vulpix! :D$"
#else
	.string "I love VULPIX! :D$"
#endif

SaffronCity_Text_Lass1:
#if GERMAN
	.string "Hier lebt ein kleines Mädchen,\n"
	.string "das hervorragend Menschen nachahmt.\p"
	.string "Sie imitiert sogar Menschen, mit\n"
	.string "denen sie sich gerade unterhält.\p"
	.string "Das ist sehr verwirrend.$"
#else
	.string "A little girl who is an expert at\n"
	.string "mimicking people lives here.\p"
	.string "She even mimics the people she's\n"
	.string "conversing with. It's confusing.$"
#endif

SaffronCity_Text_Lass1_ReturnedPart:
#if GERMAN
	.string "Die junge Nachahmerin hat ihre\n"
	.string "geliebte Poképuppe verloren, eine\l"
	.string "Nachbildung eines Piepi. Das scheint\l"
	.string "sie sehr mitzunehmen…$"
#else
	.string "The COPYCAT girl looked unhappy.\p"
	.string "She said she lost her favorite\n"
	.string "POKé DOLL--CLEFAIRY.$"
#endif

SaffronCity_Text_PokefanM:
#if GERMAN
	.string "Du bist von Johto hergekommen?\p"
	.string "Wenn der Magnetzug\n"
	.string "läuft, bist du ganz schnell wieder zu\l"
	.string "Hause.$"
#else
	.string "You came out from JOHTO?\p"
	.string "You can zip back home if the\n"
	.string "MAGNET TRAIN's running.$"
#endif

SaffronCity_Text_PokefanM_ReturnedPart:
#if GERMAN
	.string "Du kommst aus Johto?\p"
	.string "Mit dem Magnetzug gelangst du\n"
	.string "schneller zurück nach Johto als du\l"
	.string "“Schwupps!” sagen kannst!$"
#else
	.string "You came out from JOHTO?\p"
	.string "You can zip back home by hopping\n"
	.string "on the MAGNET TRAIN.$"
#endif

SaffronCity_Text_CooltrainerM:
#if GERMAN
	.string "Als ich die Pokémon-Arena betreten\n"
	.string "habe, war ich wild entschlossen, mir ein\l"
	.string "paar fremde Trainer vorzuknöpfen…\p"
	.string "Aber ich musste mir ausgerechnet diese\n"
	.string "verlassene Arena dafür aussuchen…\l"
	.string "Mann, ist mir das peinlich…$"
#else
	.string "I went to the GYM, raring for\n"
	.string "battles against trainers…\p"
	.string "It turns out, I stumbled into the\n"
	.string "unused GYM next door.\p"
	.string "Boy, I was pretty embarrassed.$"
#endif

SaffronCity_Text_CooltrainerF:
#if GERMAN
	.string "Das ist die Silph Co., berühmt für\n"
	.string "ihre Pokémon-Artikel!\p"
	.string "Deshalb hatte es vor einiger Zeit\n"
	.string "auch Team Rocket auf sie abgesehen.$"
#else
	.string "This is SILPH CO., famous for\n"
	.string "POKéMON merchandise.\p"
	.string "In the past, TEAM ROCKET wanted\n"
	.string "the company because of that.$"
#endif

SaffronCity_Text_Fisher:
#if GERMAN
	.string "Mampf… Mampf…\p"
	.string "Wie ich höre,\n"
	.string "braut sich da etwas im Kraftwerk\l"
	.string "zusammen.\p"
	.string "Mampf… Mampf…$"
#else
	.string "Chew… Chew…\p"
	.string "I hear there's big trouble brewing\n"
	.string "at the POWER PLANT.\p"
	.string "Chew… Chew…$"
#endif

SaffronCity_Text_Fisher_ReturnedPart:
#if GERMAN
	.string "Mampf… Mampf…\p"
	.string "Wie ich höre,\n"
	.string "braute sich da etwas im Kraftwerk\l"
	.string "zusammen.\p"
	.string "Mampf… Mampf… Aah, ich bin satt!$"
#else
	.string "Chew… Chew…\p"
	.string "I hear there was big trouble at the\n"
	.string "POWER PLANT.\p"
	.string "Chew… Chew… Haaah, I'm full!$"
#endif

SaffronCity_Text_Youngster1:
#if GERMAN
	.string "Ich bin immer aufgeregt, wenn ich das\n"
	.string "erste Mal einen neuen Gang betrete!$"
#else
	.string "Going into an alley for the first\n"
	.string "time makes me sorta anxious.$"
#endif

SaffronCity_Text_Youngster2:
#if GERMAN
	.string "In Vertania City gibt es ein Trainer-\n"
	.string "Haus, wo sich Pokémon-Trainer\l"
	.string "aus der ganzen Welt treffen.$"
#else
	.string "There's a place called TRAINER\n"
	.string "HOUSE in VIRIDIAN where trainers\l"
	.string "gather from all over the place.$"
#endif

SaffronCity_Text_Lass2:
#if GERMAN
	.string "Über unsere Stadt wurde mal\n"
	.string "im Radio berichtet!\p"
	.string "Ich freue mich zwar über das Lob\n"
	.string "für meine Heimatstadt, aber es\l"
	.string "ist mir auch ein klein wenig peinlich.$"
#else
	.string "Our city was featured on a radio\n"
	.string "program.\p"
	.string "It's nice to hear praise for your\n"
	.string "city, but it's a bit embarrassing\l"
	.string "too.$"
#endif

SaffronCity_Text_Sign:
#if GERMAN
	.string "Saffronia City\p"
	.string "Golden Schimmernde Stadt des Handels$"
#else
	.string "SAFFRON CITY\p"
	.string "Shining, Golden Land of Commerce$"
#endif

SaffronCity_Text_GymSign:
#if GERMAN
	.string "Saffronia City Pokémon-Arena\n"
	.string "Arenaleiterin: Sabrina\l"
	.string "Die Herrin der Psycho-Pokémon!$"
#else
	.string "SAFFRON CITY\n"
	.string "POKéMON GYM\l"
	.string "LEADER: SABRINA\p"
	.string "The Master of Psychic POKéMON!$"
#endif

SaffronCity_Text_FightingDojoSign:
#if GERMAN
	.string "Willkommen im Karate Dojo!$"
#else
	.string "Everyone Welcome!\n"
	.string "FIGHTING DOJO$"
#endif

SaffronCity_Text_SilphCoSign:
#if GERMAN
	.string "Silph Co. Bürogebäude$"
#else
	.string "SILPH CO.\n"
	.string "OFFICE BUILDING$"
#endif

SaffronCity_Text_MrPsychicHouseSign:
#if GERMAN
	.string "Mr. Psychos Haus$"
#else
	.string "MR.PSYCHIC'S\n"
	.string "HOUSE$"
#endif

SaffronCity_Text_MagnetTrainStationSign:
#if GERMAN
	.string "Saffronia City, Bahnhof für die Magnet-\n"
	.string "zugstrecke zwischen Kanto und Johto$"
#else
	.string "SAFFRON CITY\n"
	.string "MAGNET TRAIN STATION$"
#endif
