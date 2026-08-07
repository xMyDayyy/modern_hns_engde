Route9_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route9_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route9_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route9_EventScript_Dean::
	trainerbattle_single TRAINER_DEAN_HNS, Route9_Text_CamperDeanSeen, Route9_Text_CamperDeanBeaten
	msgbox Route9_Text_CamperDeanAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Heidi::
	trainerbattle_single TRAINER_HEIDI_HNS, Route9_Text_PicnickerHeidiSeen, Route9_Text_PicnickerHeidiBeaten
	msgbox Route9_Text_PicnickerHeidiAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Edna::
	trainerbattle_single TRAINER_EDNA_HNS, Route9_Text_PicnickerEdnaSeen, Route9_Text_PicnickerEdnaBeaten
	msgbox Route9_Text_PicnickerEdnaAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Sid::
	trainerbattle_single TRAINER_SID_HNS, Route9_Text_CamperSidSeen, Route9_Text_CamperSidBeaten
	msgbox Route9_Text_CamperSidAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Tim::
	trainerbattle_single TRAINER_TIM_HNS, Route9_Text_HikerTimSeen, Route9_Text_HikerTimBeaten
	msgbox Route9_Text_HikerTimAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Sidney::
	trainerbattle_single TRAINER_SIDNEY_HNS, Route9_Text_HikerSidneySeen, Route9_Text_HikerSidneyBeaten
	msgbox Route9_Text_HikerSidneyAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Sign::
	msgbox Route9_Text_Sign, MSGBOX_SIGN
	end

Route9_EventScript_Item_Flash_Cannon::
    finditem ITEM_TM_FLASH_CANNON
    end

Route9_Text_CamperDeanSeen:
#if GERMAN
	.string "Ich bin hier, um den\n"
	.string "{COLOR RED}Felstunnel{COLOR DARK_GRAY} zu erforschen.$"
#else
	.string "I came to explore ROCK TUNNEL.$"
#endif

Route9_Text_CamperDeanBeaten:
#if GERMAN
	.string "Boah! Vorsicht!$"
#else
	.string "Whoa! Danger, man.$"
#endif

Route9_Text_CamperDeanAfter:
#if GERMAN
	.string "Mein Pokémon-Team wurde verletzt,\n"
	.string "bevor ich den {COLOR RED}Felstunnel{COLOR DARK_GRAY} erreicht habe.\l"
	.string "Jetzt aber schnell ins Pokémon-Center.$"
#else
	.string "My POKéMON were hurt before even\n"
	.string "entering ROCK TUNNEL.\p"
	.string "I'd better take them to a POKéMON\n"
	.string "CENTER right away.$"
#endif

Route9_Text_PicnickerHeidiSeen:
#if GERMAN
	.string "Warst du schon mal bei einem Picknick?\n"
	.string "Das macht großen Spaß!$"
#else
	.string "Have you ever been to a picnic?\p"
	.string "They're so much fun!$"
#endif

Route9_Text_PicnickerHeidiBeaten:
#if GERMAN
	.string "Jiiieks!$"
#else
	.string "Ohhhh!$"
#endif

Route9_Text_PicnickerHeidiAfter:
#if GERMAN
	.string "Wir backen viele gute Sachen, die\n"
	.string "wir mit allen teilen.\l"
	.string "Die sind lecker, glaube es ruhig!$"
#else
	.string "We bake lots of goodies and share\n"
	.string "them all around.\p"
	.string "They're delicious!$"
#endif

Route9_Text_CamperSidSeen:
#if GERMAN
	.string "He, du Lump!\n"
	.string "Wirf deinen Müll nicht hier hin!$"
#else
	.string "Hey, you! Don't litter!$"
#endif

Route9_Text_CamperSidBeaten:
#if GERMAN
	.string "Ich wollte dich doch nur\n"
	.string "darauf hinweisen…$"
#else
	.string "I was just pointing out…$"
#endif

Route9_Text_CamperSidAfter:
#if GERMAN
	.string "Entschuldige! Jetzt sehe ich’s!\n"
	.string "Das war ja gar nicht dein Müll!$"
#else
	.string "Sorry. You weren't littering. It\n"
	.string "was my mistake.$"
#endif

Route9_Text_PicnickerEdnaSeen:
#if GERMAN
	.string "Die Leute sollten ihren Müll nicht\n"
	.string "hier liegen lassen.$"
#else
	.string "People shouldn't leave any litter\n"
	.string "behind.$"
#endif

Route9_Text_PicnickerEdnaBeaten:
#if GERMAN
	.string "Schaaade… Ich habe verloren.$"
#else
	.string "Ohh… I lost…$"
#endif

Route9_Text_PicnickerEdnaAfter:
#if GERMAN
	.string "Energie sparen ist wichtig, aber\n"
	.string "die Natur ist noch viel wichtiger.$"
#else
	.string "Conserving energy is important,\n"
	.string "but the environment is even more\l"
	.string "vital.$"
#endif

Route9_Text_HikerTimSeen:
#if GERMAN
	.string "Sie wird beim {COLOR RED}Silberberg{COLOR DARK_GRAY} sein,\n"
	.string "wenn sie kommt…\p"
	.string "{COLOR RED}Silberberg{COLOR DARK_GRAY} ist in Johto, richtig?$"
#else
	.string "She'll be coming 'round MT.SILVER\n"
	.string "when she comes…\p"
	.string "MT.SILVER is in JOHTO, right?$"
#endif

Route9_Text_HikerTimBeaten:
#if GERMAN
	.string "Ich war zu sehr\n"
	.string "mit Singen beschäftigt…$"
#else
	.string "I was too busy singing…$"
#endif

Route9_Text_HikerTimAfter:
#if GERMAN
	.string "Bei Kämpfen spielt Konzentration\n"
	.string "eine wichtige Rolle.$"
#else
	.string "Battles are about concentration.$"
#endif

Route9_Text_HikerSidneySeen:
#if GERMAN
	.string "Ich verrate dir ein Geheimnis.\n"
	.string "Aber zuerst müssen wir kämpfen!$"
#else
	.string "I'll tell you a secret.\p"
	.string "But first, we battle!$"
#endif

Route9_Text_HikerSidneyBeaten:
#if GERMAN
	.string "Oh, Mist! Ich habe verloren…$"
#else
	.string "Oh, dang! I lost that…$"
#endif

Route9_Text_HikerSidneyAfter:
#if GERMAN
	.string "Jenseits dieses Flüssleins\n"
	.string "liegt ein gigantisches {COLOR RED}Kraftwerk{COLOR DARK_GRAY}!$"
#else
	.string "The POWER PLANT is across a small\n"
	.string "river.$"
#endif

Route9_Text_Sign:
#if GERMAN
	.string "Route 9\p"
	.string "Azuria City - Felstunnel$"
#else
	.string "ROUTE 9\p"
	.string "CERULEAN CITY - ROCK TUNNEL$"
#endif
