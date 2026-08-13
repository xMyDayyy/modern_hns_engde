SaffronCity_PokemonCenter_hns_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_OnTransition
	.byte 0

SaffronCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_SAFFRON_CITY_HNS
	end

SaffronCity_PokemonCenter_EventScript_Teacher::
	msgbox SaffronCity_PokemonCenter1F_Text_Teacher, MSGBOX_NPC
	end

SaffronCity_PokemonCenter_EventScript_Fisher::
	goto_if_set FLAG_RETURNED_MACHINE_PART, SaffronCity_PokemonCenter_EventScript_FisherReturnedMachinePart
	msgbox SaffronCity_PokemonCenter1F_Text_Fisher, MSGBOX_NPC
	end
SaffronCity_PokemonCenter_EventScript_FisherReturnedMachinePart::
	msgbox SaffronCity_PokemonCenter1F_Text_Fisher_ReturnedPart, MSGBOX_NPC
	end

SaffronCity_PokemonCenter_EventScript_Youngster::
	msgbox SaffronCity_PokemonCenter1F_Text_Youngster, MSGBOX_NPC
	end

SaffronCity_PokemonCenter1F_Text_Teacher:
#if GERMAN
	.string "Wie sehen eigentlich die\n"
	.string "Pokémon-Center in Johto aus?\p"
	.string "…Oh, aha. Sie unterscheiden sich also\n"
	.string "nicht so sehr von denen in Kanto…\p"
	.string "Dann sage ich meinem Kumpel aus Johto,\n"
	.string "dass er ein Marill fangen und es mit mir\l"
	.string "tauschen soll!$"
#else
	.string "What are JOHTO's POKéMON CENTERS\n"
	.string "like?\p"
	.string "…Oh, I see. So they're not much\n"
	.string "different from the ones in KANTO.\p"
	.string "I can go to JOHTO without\n"
	.string "worrying, then!$"
#endif

SaffronCity_PokemonCenter1F_Text_Fisher:
#if GERMAN
	.string "Ich bin gerade durch den Felstunnel\n"
	.string "gekommen. In der Umgebung vom\l"
	.string "Kraftwerk war irgendetwas im Gange…$"
#else
	.string "I just happened to come through\n"
	.string "ROCK TUNNEL.\p"
	.string "There was some commotion at the\n"
	.string "POWER PLANT.$"
#endif

SaffronCity_PokemonCenter1F_Text_Fisher_ReturnedPart:
#if GERMAN
	.string "Die Höhlen stürzen leicht ein.\p"
	.string "In letzter Zeit sind einige Höhlen\n"
	.string "verschwunden. Wie die Höhle vor Azuria\l"
	.string "City.\p"
	.string "Für einen Profi-Wanderer ist das\n"
	.string "Grundwissen.$"
#else
	.string "There's an odd cave in CERULEAN.\p"
	.string "As a pro HIKER, I should explore it,\n"
	.string "but that place scares even me.$"
#endif

SaffronCity_PokemonCenter1F_Text_Youngster:
#if GERMAN
	.string "Saffronia City ist berühmt für die\n"
	.string "Zentrale der Silph Co. und den\l"
	.string "Magnetzug-Bahnhof!$"
#else
	.string "SILPH CO.'s HEAD OFFICE and the\n"
	.string "MAGNET TRAIN STATION--they're the\l"
	.string "places to see in SAFFRON.$"
#endif
