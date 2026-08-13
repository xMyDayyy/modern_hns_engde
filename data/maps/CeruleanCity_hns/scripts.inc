CeruleanCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_EventScript_CityEnter
	.byte 0

CeruleanCity_EventScript_CityEnter::
	setflag FLAG_VISITED_CERULEAN_CITY
	end

CeruleanCity_EventScript_CooltrainerM1::
	goto_if_set FLAG_RETURNED_MACHINE_PART, CeruleanCity_EventScript_CooltrainerMReturnedPart
	msgbox CeruleanCity_Text_CooltrainerM1, MSGBOX_NPC
	end

CeruleanCity_EventScript_CooltrainerMReturnedPart::
	msgbox CeruleanCity_Text_CooltrainerM2, MSGBOX_NPC
	end

CeruleanCity_EventScript_Boy::
	msgbox CeruleanCity_Text_SuperNerd, MSGBOX_NPC
	end

CeruleanCity_EventScript_Guard::
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
	end

CeruleanCity_Text_ThisIsCeruleanCave::
#if GERMAN
	.string "Dies ist die Azuria-Höhle.\p"
	.string "Unglaublich starke Pokémon\n"
	.string "leben hier.\p"
	.string "Es braucht einen wirklich unglaublichen\n"
	.string "Trainer, um Einlass zu erhalten.\p"
	.string "Werde zuerst Kanto Pokémon-\n"
	.string "Liga Champion.\p"
	.string "Und du müsstest eine große\n"
	.string "Tat vollbracht haben.$"
#else
    .string "This is CERULEAN CAVE.\p"
    .string "Horribly strong POKéMON live inside\n"
    .string "there.\p"
    .string "It takes a very special TRAINER to\n"
    .string "be allowed inside there.\p"
    .string "You'd have to be strong enough to\n"
    .string "become the KANTO POKéMON LEAGUE\l"
    .string "CHAMPION for starters.\p"
    .string "And, you would have to have\n"
    .string "made a great achievement.$"
#endif

CeruleanCity_Text_CooltrainerM1:
#if GERMAN
	.string "Das Kanto-Kraftwerk? Es befindet sich\n"
	.string "am Ende von Route 9, der Straße östlich\l"
	.string "von hier. Angeblich haben die da mit\l"
	.string "irgendeinem Defekt zu kämpfen…$"
#else
	.string "KANTO's POWER PLANT?\p"
	.string "It's near the end of ROUTE 9, the\n"
	.string "road that heads east from here.\p"
	.string "I think there was an accident of\n"
	.string "some sort there.$"
#endif

CeruleanCity_Text_CooltrainerM2:
#if GERMAN
	.string "Na sieh mal einer an! Willst du etwa\n"
	.string "alle existierenden Pokémon sammeln?\p"
	.string "Das ist ja richtige Schwerstarbeit!\n"
	.string "Aber es zahlt sich sicher auch aus!$"
#else
	.string "You're collecting every single\n"
	.string "kind of POKéMON?\p"
	.string "That must be quite a challenge,\n"
	.string "but it sounds fun too.$"
#endif

CeruleanCity_Text_SuperNerd:
#if GERMAN
	.string "Das Kap im Norden ist ein guter\n"
	.string "Ort für Dates.\p"
	.string "Mädchen mögen das!$"
#else
	.string "The CAPE in the north is a good\n"
	.string "place for dates.\p"
	.string "Girls like it!$"
#endif

CeruleanCity_EventScript_Slowbro::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	msgbox CeruleanCity_Text_Slowbro, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeruleanCity_Text_Slowbro:
#if GERMAN
	.string "Lahmus: Laaahm?$"
#else
	.string "SLOWBRO: Yarah?$"
#endif

CeruleanCity_EventScript_SlowbroWoman::
	msgbox CeruleanCity_Text_CooltrainerF1, MSGBOX_NPC
	turnobject LOCALID_CERULEAN_CITY_WOMAN, DIR_EAST
	msgbox CeruleanCity_Text_CooltrainerF2, MSGBOX_DEFAULT
	delay 20
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	applymovement2 LOCALID_CERULEAN_CITY_SLOWBRO, Common_Movement_QuestionMark
	turnobject LOCALID_CERULEAN_CITY_SLOWBRO DIR_WEST
	delay 30
	turnobject LOCALID_CERULEAN_CITY_SLOWBRO, DIR_EAST
	delay 30
	turnobject LOCALID_CERULEAN_CITY_SLOWBRO, DIR_SOUTH
	delay 70
	msgbox CeruleanCity_Text_CooltrainerF3, MSGBOX_NPC
	end

CeruleanCity_Text_CooltrainerF1:
#if GERMAN
	.string "Mein Lahmus und ich sind ein\n"
	.string "super Team!$"
#else
	.string "My SLOWBRO and I make an awesome\n"
	.string "combination!$"
#endif

CeruleanCity_Text_CooltrainerF2:
#if GERMAN
	.string "Lahmus, zeig mir deine Konfusion!$"
#else
	.string "SLOWBRO, show me your CONFUSION!$"
#endif

CeruleanCity_Text_CooltrainerF3:
	.string "…$"

CeruleanCity_EventScript_Fisher::
	goto_if_eq VAR_CERULEAN_CITY_STATE, 2, CeruleanCity_EventScript_FisherDuringRocket
	msgbox CeruleanCity_Text_Fisher, MSGBOX_NPC
	end

CeruleanCity_EventScript_FisherDuringRocket::
	msgbox CeruleanCity_Text_Fisher_RocketTip, MSGBOX_NPC
	end

CeruleanCity_Text_Fisher:
#if GERMAN
	.string "Ich bin ein riesiger Fan von Misty,\n"
	.string "der Arenaleiterin von Azuria City!$"
#else
	.string "I'm a huge fan of CERULEAN GYM's\n"
	.string "MISTY.$"
#endif

CeruleanCity_Text_Fisher_RocketTip:
#if GERMAN
	.string "Der verdächtige Typ mit den schwarzen\n"
	.string "Klamotten ist in Richtung Kap geflohen!$"
#else
	.string "I saw this shady guy go off toward\n"
	.string "CERULEAN's CAPE.$"
#endif

CeruleanCity_EventScript_Youngster::
	msgbox CeruleanCity_Text_Youngster1, MSGBOX_NPC
	end

CeruleanCity_Text_Youngster1:
#if GERMAN
	.string "Die Höhle nördlich der Stadt soll von\n"
	.string "unfassbar starken Pokémon bewohnt\l"
	.string "sein.$"
#else
	.string "The cave north of town has\n"
	.string "horribly powerful POKéMON in it.$"
#endif

CeruleanCity_Text_Youngster2:
#if GERMAN
	.string "Ayuh?\p"
	.string "Mein Itemradar schlägt aus…$"
#else
	.string "Ayuh?\p"
	.string "My ITEMFINDER is responding…$"
#endif

CeruleanCity_EventScript_Sign::
	msgbox CeruleanCity_Text_Sign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_GymSign::
	msgbox CeruleanCity_Text_GymSign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_BikeShopSign::
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_PoliceSign::
	msgbox CeruleanCity_Text_PoliceSign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_CapeSign::
	msgbox CeruleanCity_Text_CapeSign, MSGBOX_SIGN
	end

CeruleanCity_Text_Sign:
#if GERMAN
	.string "Azuria City\p"
	.string "Umgeben von einer Mystischen\n"
	.string "Blauen Aura$"
#else
	.string "CERULEAN CITY\p"
	.string "A Mysterious Blue Aura Surrounds It$"
#endif

CeruleanCity_Text_GymSign:
#if GERMAN
	.string "Pokémon-Arena von Azuria City Leiterin:\n"
	.string "Misty Die jungenhafte Meerjungfrau$"
#else
	.string "CERULEAN CITY\n"
	.string "POKéMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "The Tomboyish Mermaid$"
#endif

CeruleanCity_Text_BikeShopSign:
#if GERMAN
	.string "Hier ist eine Nachricht…\p"
	.string "Der Fahrradladen ist jetzt\n"
	.string "in Dukatia City in Johto…$"
#else
	.string "There's a notice here…\p"
	.string "The BIKE SHOP has moved to\n"
	.string "GOLDENROD CITY in JOHTO…$"
#endif

CeruleanCity_Text_PoliceSign:
#if GERMAN
	.string "Da ist ein Flugblatt…\p"
	.string "Jeder Diebstahl wird geahndet!\n"
	.string "Um eine sichere und friedliche Stadt zu\l"
	.string "gewährleisten, müssen wir alle\l"
	.string "zusammenarbeiten!\l"
	.string "Das Ordnungsamt von Azuria City$"
#else
	.string "There's a notice here…\p"
	.string "Stamp out thievery and make the\n"
	.string "city a friendlier, more cheerful\l"
	.string "place!\p"
	.string "CERULEAN POLICE$"
#endif

CeruleanCity_Text_CapeSign:
#if GERMAN
	.string "Zur Route 24\n"
	.string "Östlich zum Kap (Azuria City)$"
#else
	.string "CERULEAN CAPE\n"
	.string "AHEAD$"
#endif

CeruleanCity_Text_LockedDoor:
#if GERMAN
	.string "Abgeschlossen…$"
#else
	.string "It's locked…$"
#endif

