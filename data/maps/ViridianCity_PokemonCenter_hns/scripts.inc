ViridianCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_OnTransition
	.byte 0

ViridianCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY_HNS
	end

ViridianCity_PokemonCenter_EventScript_CooltrainerM::
	goto_if_set FLAG_HIDE_CINNABAR_BLUE, VirianCity_EventScript_GymGrampsBlue
	msgbox ViridianCity_PokemonCenter_Text_1FCooltrainerM, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_EventScript_CooltrainerMBlue::
	msgbox ViridianCity_PokemonCenter_Text_1FCooltrainerM_BlueReturned, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_EventScript_CooltrainerF::
	msgbox ViridianCity_PokemonCenter_Text_1FCooltrainerF, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_EventScript_BugCatcher::
	msgbox ViridianCity_PokemonCenter_Text_1FBugCatcher, MSGBOX_NPC
	end

ViridianCity_PokemonCenter_Text_1FCooltrainerM:
#if GERMAN
	.string "Wo lungert der Arenaleiter von Vertania\n"
	.string "City eigentlich herum?\l"
	.string "Ich wollte ihn doch herausfordern…$"
#else
	.string "Where in the world is VIRIDIAN's GYM\n"
	.string "LEADER? I wanted to challenge him.$"
#endif

ViridianCity_PokemonCenter_Text_1FCooltrainerM_BlueReturned:
#if GERMAN
	.string "In der Pokémon-Arena\n"
	.string "von Vertania City gibt es keine Trainer.\p"
	.string "Der Arenaleiter vertritt den Grundsatz,\n"
	.string "auch ohne die Hilfe von Untergebenen\l"
	.string "gewinnen zu können.$"
#else
	.string "There are no GYM TRAINERS at the\n"
	.string "VIRIDIAN GYM.\p"
	.string "The LEADER claims his policy is to\n"
	.string "win without having any underlings.$"
#endif

ViridianCity_PokemonCenter_Text_1FCooltrainerF:
#if GERMAN
	.string "Offensichtlich wurde die Pokémon-Arena\n"
	.string "auf der Zinnoberinsel zerstört.\p"
	.string "Ich frage mich, was wohl aus Pyro,\n"
	.string "dem Arenaleiter, geworden ist.$"
#else
	.string "I heard that the GYM in CINNABAR is\n"
	.string "gone.\p"
	.string "I wonder what became of BLAINE, the\n"
	.string "GYM LEADER.$"
#endif

ViridianCity_PokemonCenter_Text_1FBugCatcher:
#if GERMAN
	.string "Mein großer Traum ist es,\n"
	.string "Arenaleiter zu werden!$"
#else
	.string "My dream is to become a GYM LEADER.$"
#endif
