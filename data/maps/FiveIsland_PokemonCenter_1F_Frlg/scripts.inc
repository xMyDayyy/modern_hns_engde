FiveIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FiveIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_FIVE_ISLAND
	end

FiveIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

FiveIsland_PokemonCenter_1F_EventScript_Chef::
	msgbox FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal, MSGBOX_NPC
	end

FiveIsland_PokemonCenter_1F_EventScript_CooltrainerF::
	msgbox FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon, MSGBOX_NPC
	end

FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal::
#if GERMAN
	.string "Ich bin gerade dabei, ein Essen für\n"
	.string "eine gewisse Berühmtheit\l"
	.string "zuzubereiten.$"
#else
	.string "I'm on my way to prepare a meal\n"
	.string "for a certain high-society person.$"
#endif

FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon::
#if GERMAN
	.string "Hast du schon das Safari-Spiel\n"
	.string "gespielt?\p"
	.string "Manche Pokémon kann man nur dabei\n"
	.string "fangen!$"
#else
	.string "You're on a quest to catch every\n"
	.string "single kind of POKéMON?\p"
	.string "…How incredible. Please tell me if\n"
	.string "you catch a strong one!$"
#endif

