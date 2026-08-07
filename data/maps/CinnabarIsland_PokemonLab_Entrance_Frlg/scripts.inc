CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonLab_Entrance_OnTransition
	.byte 0

CinnabarIsland_PokemonLab_Entrance_OnTransition::
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1, CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil
	end

CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil::
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 2
	return

CinnabarIsland_PokemonLab_Entrance_EventScript_Scientist::
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively, MSGBOX_NPC
	end

CinnabarIsland_PokemonLab_Entrance_EventScript_DrFujiPhoto::
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji, MSGBOX_SIGN
	end

CinnabarIsland_PokemonLab_Entrance_EventScript_MeetingRoomSign::
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign, MSGBOX_SIGN
	end

CinnabarIsland_PokemonLab_Entrance_EventScript_RAndDRoomSign::
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign, MSGBOX_SIGN
	end

CinnabarIsland_PokemonLab_Entrance_EventScript_TestingRoomSign::
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign, MSGBOX_SIGN
	end

CinnabarIsland_Gym_Text_PhotoOfBlaineAndFuji::
#if GERMAN
	.string "Ein Foto von Pyro und Mr. Fuji!\p"
	.string "Sie stehen eng beisammen und\n"
	.string "grinsen!$"
#else
	.string "It's a photo of BLAINE and\n"
	.string "MR. FUJI.\p"
	.string "They're standing shoulder to\n"
	.string "shoulder with big grins.$"
#endif

CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively::
#if GERMAN
	.string "Wir erforschen hier Pokémon.\p"
	.string "Wir erstellen oft Gutachten über\n"
	.string "seltene Pokémon.$"
#else
	.string "We study POKéMON extensively\n"
	.string "every day.\p"
	.string "People often bring us rare POKéMON\n"
	.string "for examination.$"
#endif

CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji::
#if GERMAN
	.string "Der Gründer des Laboratoriums,\n"
	.string "DR. Fuji!$"
#else
	.string "A photo of the LAB's founder…\n"
	.string "DR. FUJI?!$"
#endif

CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign::
#if GERMAN
	.string "Pokémon-Labor\n"
	.string "Konferenzraum$"
#else
	.string "POKéMON LAB\n"
	.string "Meeting Room$"
#endif

CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign::
#if GERMAN
	.string "Pokémon-Labor\n"
	.string "Forschung und Entwicklung$"
#else
	.string "POKéMON LAB\n"
	.string "R & D Room$"
#endif

CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign::
#if GERMAN
	.string "Hast du eine Ahnung, wie viele\n"
	.string "unterschiedliche Pokémon es gibt?$"
#else
	.string "POKéMON LAB\n"
	.string "Testing Room$"
#endif

