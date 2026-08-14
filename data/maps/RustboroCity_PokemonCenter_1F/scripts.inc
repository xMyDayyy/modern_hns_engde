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
	.string "Hier bringt man dir bei, wie man\n"
	.string "kämpft - und wie man verliert.\p"
	.string "Beides braucht man.$"
#else
	.string "They teach you how to battle here -\n"
	.string "and how to lose.\p"
	.string "You need both.$"
#endif

RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
#if GERMAN
	.string "Die Arena hier ist berüchtigt.\p"
	.string "Gestein-Pokémon halten mehr aus, als\n"
	.string "man denkt.$"
#else
	.string "The GYM here has a reputation.\p"
	.string "ROCK POKéMON take more punishment\n"
	.string "than you would think.$"
#endif

RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
#if GERMAN
	.string "Im Steinbruch hinter der Stadt hört\n"
	.string "man nachts die Pokémon graben.\p"
	.string "Zumindest sagt das mein Nachbar.$"
#else
	.string "At the quarry behind town you can\n"
	.string "hear POKéMON digging at night.\p"
	.string "At least that is what my neighbour\n"
	.string "says.$"
#endif

