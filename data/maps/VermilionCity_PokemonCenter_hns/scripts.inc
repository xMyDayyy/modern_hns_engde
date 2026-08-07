VermilionCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_PokemonCenter_OnTransition
	.byte 0

VermilionCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_VERMILION_CITY_HNS
	end

VermilionPokeCenter_EventScript_FishingGuru::
	goto_if_set FLAG_HIDE_VERMILION_SNORLAX, VermilionPokeCenter_EventScript_FishingGuru2
	msgbox VermilionCity_PokemonCenter1F_Text_FishingGuru, MSGBOX_NPC
	end

VermilionPokeCenter_EventScript_FishingGuru2::
	msgbox VermilionCity_PokemonCenter1F_Text_FishingGuru_FoughtSnorlax, MSGBOX_NPC
	end

VermilionPokeCenter_EventScript_Sailor::
	msgbox VermilionCity_PokemonCenter1F_Text_Sailor, MSGBOX_NPC
	end

VermilionPokeCenter_EventScript_Bugcatcher::
	msgbox VermilionCity_PokemonCenter1F_Text_BugCatcher, MSGBOX_NPC
	end

VermilionCity_PokemonCenter1F_Text_FishingGuru:
#if GERMAN
	.string "Vor Digdas\n"
	.string "Höhle liegt ein schlafendes.\p"
	.string "Pokémon Das wäre eine\n"
	.string "fantastische Gelegenheit, es zu\l"
	.string "fangen! Aber wie weckt man es auf?$"
#else
	.string "A sleeping POKéMON is lying in\n"
	.string "front of DIGLETT'S CAVE.\p"
	.string "It's a fantastic opportunity to\n"
	.string "get it, but how do you wake it up?$"
#endif

VermilionCity_PokemonCenter1F_Text_FishingGuru_FoughtSnorlax:
#if GERMAN
	.string "Vor {COLOR RED}Digdas Höhle{COLOR DARK_GRAY} lag ein\n"
	.string "schlafendes Pokémon.\p"
	.string "Aber jetzt scheint\n"
	.string "es verschwunden zu sein.$"
#else
	.string "There used to be a sleeping\n"
	.string "POKéMON lying in front of\l"
	.string "DIGLETT'S CAVE.\p"
	.string "But it seems to have disappeared.$"
#endif

VermilionCity_PokemonCenter1F_Text_Sailor:
#if GERMAN
	.string "Auf dem Schnellboot gegen andere\n"
	.string "Trainer zu kämpfen, ist ein Hochgenuss!$"
#else
	.string "The FAST SHIP is a great place to\n"
	.string "meet and battle trainers.$"
#endif

VermilionCity_PokemonCenter1F_Text_BugCatcher:
#if GERMAN
	.string "Oh, diese Orden habe ich ja\n"
	.string "noch nie gesehen!\p"
	.string "Oh, aber ja! Dann bist du also ein\n"
	.string "Einwohner von Johto!$"
#else
	.string "Oh? You have some BADGES I've\n"
	.string "never seen before.\p"
	.string "Oh, I get it. You got them in\n"
	.string "JOHTO.$"
#endif
