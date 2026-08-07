SaffronCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SaffronCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_SAFFRON_CITY
	end

SaffronCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

SaffronCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame, MSGBOX_NPC
	end

SaffronCity_PokemonCenter_1F_EventScript_Woman::
	msgbox SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies, MSGBOX_NPC
	end

SaffronCity_PokemonCenter_1F_EventScript_Youngster::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_SILPH_CO_11F, 1, SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone
	msgbox SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets
	release
	end

SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone::
	msgbox SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff
	release
	end

SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies::
#if GERMAN
	.string "{PLAYER}: Mein Pokémon sieht viel\n"
	.string "stärker aus!$"
#else
	.string "POKéMON growth rates differ from\n"
	.string "species to species.$"
#endif

SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame::
#if GERMAN
	.string "Die Silph Co. ist sehr bekannt.\p"
	.string "Deshalb wurde das Team Rocket auf\n"
	.string "sie aufmerksam!$"
#else
	.string "SILPH CO. is widely known to all.\p"
	.string "It's a victim of its own fame - it\n"
	.string "attracted TEAM ROCKET.$"
#endif

SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets::
#if GERMAN
	.string "Ich wünschte, die Top Vier kämen\n"
	.string "und stampften das Team Rocket in\l"
	.string "den Boden!$"
#else
	.string "Sigh…\n"
	.string "Wouldn't this be great?\p"
	.string "If the ELITE FOUR came and\n"
	.string "stomped TEAM ROCKET?$"
#endif

SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff::
#if GERMAN
	.string "Das Team Rocket ist geflohen! Wir\n"
	.string "können wieder aus dem Haus gehen!$"
#else
	.string "TEAM ROCKET took off!\n"
	.string "We can go out safely again!\l"
	.string "That's great!$"
#endif

