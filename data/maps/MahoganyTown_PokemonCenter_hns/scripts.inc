MahoganyTown_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MahoganyTown_PokemonCenter_OnTransition
	.byte 0

MahoganyTown_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_MAHOGANY_TOWN_HNS
	end

MahoganyTown_PokemonCenter_EventScript_Hiker::
	msgbox MahoganyTown_PokemonCenter_Text_PokefanM, MSGBOX_NPC
	end

MahoganyTown_PokemonCenter_EventScript_Boy::
	msgbox MahoganyTown_PokemonCenter_Text_Youngster, MSGBOX_NPC
	end

MahoganyTown_PokemonCenter_EventScript_Girl::
	msgbox MahoganyTown_PokemonCenter_Text_CooltrainerF, MSGBOX_NPC
	end

MahoganyTown_PokemonCenter_Text_PokefanM:
#if GERMAN
	.string "Wie? Team Rocket ist wieder da?\p"
	.string "Ich sah einige Männer in\n"
	.string "Schwarz am See des Zorns…$"
#else
    .string "What's this? TEAM ROCKET has come\n"
    .string "back?\p"
    .string "I saw some men in black at LAKE OF\n"
    .string "RAGE…$"
#endif

MahoganyTown_PokemonCenter_Text_Youngster:
#if GERMAN
	.string "Ich benutze den Entwicklungsstopp,\n"
	.string "damit sich meine Pokémon nicht zu rasch\l"
	.string "entwickeln, denn dann würden sie nur\l"
	.string "noch sehr langsam neue Attacken\l"
	.string "erlernen.$"
#else
    .string "I stop my POKéMON from evolving too\n"
    .string "early.\p"
    .string "I make them learn certain moves\n"
    .string "before I let them evolve.$"
#endif

MahoganyTown_PokemonCenter_Text_CooltrainerF:
#if GERMAN
	.string "Wenn Pokémon sich entwickeln, werden\n"
	.string "sie zwar stärker, aber dafür brauchen\l"
	.string "sie auch länger, um neue Attacken zu\l"
	.string "erlernen.$"
#else
    .string "POKéMON do become stronger when they\n"
    .string "evolve,\p"
    .string "but they also learn moves more\n"
    .string "slowly.$"
#endif
