CeruleanCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_OnTransition
	.byte 0

CeruleanCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_CERULEAN_CITY_HNS
	end

CeruleanCity_PokemonCenter_EventScript_Nerd::
	msgbox CeruleanCity_PokemonCenter1F_Text_SuperNerd, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_EventScript_Guy::
	msgbox CeruleanCity_PokemonCenter1F_Text_GymGuide, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter1F_Text_SuperNerd:
#if GERMAN
	.string "Egal wie schwach sie auch sein mögen,\n"
	.string "ich kämpfe lieber mit Pokémon, die ich\l"
	.string "über lange Zeit selbst trainiert habe\l"
	.string "als mit solchen, die ich gerade erst\l"
	.string "gefangen habe!$"
#else
	.string "For battles, I'd much rather use\n"
	.string "POKéMON I've been raising, even if\p"
	.string "they're weaker than some newly\n"
	.string "caught POKéMON.$"
#endif

CeruleanCity_PokemonCenter1F_Text_GymGuide:
#if GERMAN
	.string "Der Magnetzug reist mit einer\n"
	.string "Geschwindigkeit von 550 km/h in null\l"
	.string "Komma nichts zwischen Kanto und Johto\l"
	.string "hin und her.\p"
	.string "So kommt man jederzeit ohne Probleme\n"
	.string "nach Johto.$"
#else
	.string "The MAGNET TRAIN travels at over\n"
	.string "340 mph. It goes between KANTO and\l"
	.string "JOHTO in almost no time at all.\p"
	.string "It really makes JOHTO accessible.$"
#endif
