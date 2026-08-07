OlivineCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineCity_PokemonCenter_OnTransition
	.byte 0

OlivineCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_OLIVINE_CITY_HNS
	end

OlivineCity_EventScript_Fisher::
	lock
	faceplayer
	msgbox OlivineCity_Text_PokecenterFisher, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Teacher::
	lock
	faceplayer
	msgbox OlivineCity_Text_PokecenterTeacher, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_PokecenterFisher:
#if GERMAN
	.string "Der Matrose im\n"
	.string "Oliviana City-Cafe nebenan\l"
	.string "ist sehr großzügig.\p"
	.string "Er hat meinem Pokémon Stärke\n"
	.string "beigebracht. Jetzt\l"
	.string "kann es Felsen bewegen.$"
#else
	.string "The SAILOR in the OLIVINE CAFE\n"
	.string "next door is really generous.\p"
	.string "He taught my POKéMON STRENGTH.\p"
	.string "Now it can move big boulders\n"
	.string "without breaking a sweat.$"
#endif

OlivineCity_Text_PokecenterTeacher:
#if GERMAN
	.string "In {COLOR RED}Anemonia City{COLOR DARK_GRAY} auf der anderen\n"
	.string "Seite des Ozeans soll es jemanden\l"
	.string "geben, der immer mit seinen\l"
	.string "seltenen Pokémon angibt.$"
#else
	.string "There's a person in CIANWOOD\n"
	.string "CITY across the sea.\p"
	.string "I heard him bragging about his\n"
	.string "rare POKéMON all the time.$"
#endif
