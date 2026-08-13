CinnabarIsland_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_OnTransition
	.byte 0

CinnabarIsland_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND_HNS
	end

CinnabarIsland_PokemonCenter_EventScript_Cooltrainer::
	msgbox CinnabarIsland_PokemonCenter1F_Text_CooltrainerF, MSGBOX_NPC
	end

CinnabarIsland_PokemonCenter_EventScript_Fisher::
	msgbox CinnabarIsland_PokemonCenter1F_Text_Fisher, MSGBOX_NPC
	end

CinnabarIsland_PokemonCenter1F_Text_CooltrainerF:
#if GERMAN
	.string "Der Arenaleiter der Zinnoberinsel Pyro\n"
	.string "lebt angeblich alleine auf den\l"
	.string "Seeschauminseln in einer Höhle…$"
#else
	.string "CINNABAR GYM's BLAINE apparently\n"
	.string "lives alone in the SEAFOAM ISLANDS\l"
	.string "cave…$"
#endif

CinnabarIsland_PokemonCenter1F_Text_Fisher:
#if GERMAN
	.string "Es ist ein Jahr her, seit dem\n"
	.string "Vulkanausbruch.$"
#else
	.string "It's been a year since the volcano\n"
	.string "erupted.$"
#endif
