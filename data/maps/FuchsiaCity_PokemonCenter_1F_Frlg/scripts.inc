FuchsiaCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FuchsiaCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_FUCHSIA_CITY
	end

FuchsiaCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

FuchsiaCity_PokemonCenter_1F_EventScript_Man::
	msgbox FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon, MSGBOX_NPC
	end

FuchsiaCity_PokemonCenter_1F_EventScript_CooltrainerF::
	msgbox FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian, MSGBOX_NPC
	end

FuchsiaCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex, MSGBOX_NPC
	end

FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon::
#if GERMAN
	.string "Man kann nicht mit nur einem starken\n"
	.string "Pokémon gewinnen!\p"
	.string "Es ist mühsam, doch alle Pokémon\n"
	.string "sollten ungefähr den gleichen Level\l"
	.string "haben.$"
#else
	.string "You can't become a good TRAINER\n"
	.string "with just one strong POKéMON.\p"
	.string "But raising many POKéMON evenly\n"
	.string "is no easy task, either.$"
#endif

FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian::
#if GERMAN
	.string "Westlich von Vertania City liegt\n"
	.string "ein Pfad.\p"
	.string "Er führt zum Hauptquartier der Pokémon\n"
	.string "Liga, der höchsten Instanz für Trainer.$"
#else
	.string "There's a narrow trail west of\n"
	.string "VIRIDIAN CITY.\p"
	.string "It goes to the POKéMON LEAGUE HQ.\n"
	.string "The HQ governs all TRAINERS.$"
#endif

FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex::
#if GERMAN
	.string "Du studierst die Pokémon?\n"
	.string "Dann gehe in die Safari-Zone.\p"
	.string "Dort gibt es viele seltene Pokémon.$"
#else
	.string "If you're working on a POKéDEX,\n"
	.string "visit the SAFARI ZONE.\p"
	.string "All sorts of rare POKéMON breed\n"
	.string "there.$"
#endif

