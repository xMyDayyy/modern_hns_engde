RustboroCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

RustboroCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

RustboroCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_RUSTBORO_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_Man::
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Boy::
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Girl::
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
#if GERMAN
	.string "Mein Pokémon hat ein Naives\n"
	.string "Wesen und das meines Freundes ein\l"
	.string "Fröhliches.\p"
	.string "Es ist faszinierend, dass Pokémon\n"
	.string "unterschiedliche Persönlichkeiten\l"
	.string "haben.$"
#else
	.string "My POKéMON has a NAIVE nature, and my\n"
	.string "friend's has a JOLLY nature.\p"
	.string "It's fascinating how POKéMON have\n"
	.string "personalities!$"
#endif

RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
#if GERMAN
	.string "Es gibt männliche und weibliche\n"
	.string "Pokémon.\p"
	.string "Aber niemand kann sagen, worin der\n"
	.string "eigentliche Unterschied liegt.$"
#else
	.string "Just like people, there are male and\n"
	.string "female POKéMON.\p"
	.string "But no one seems to have any idea how\n"
	.string "they're different.$"
#endif

RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
#if GERMAN
	.string "Der Mann nebenan hat mir eine VM\n"
	.string "gegeben!\p"
	.string "Ich habe meinem Pokémon beigebracht,\n"
	.string "damit kleinere Bäume zu Zerschneiden.$"
#else
	.string "The man next door gave me an HM!\p"
	.string "I used it to teach my POKéMON how to\n"
	.string "CUT down skinny trees.$"
#endif

