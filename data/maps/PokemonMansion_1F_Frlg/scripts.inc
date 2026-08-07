PokemonMansion_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonMansion_1F_OnTransition
	.byte 0

PokemonMansion_1F_OnLoad::
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_1F
	end

PokemonMansion_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_POKEMON_MANSION_1F
	end

PokemonMansion_1F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 0
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end

PokemonMansion_1F_EventScript_Ted::
	trainerbattle_single TRAINER_SCIENTIST_TED, PokemonMansion_1F_Text_TedIntro, PokemonMansion_1F_Text_TedDefeat
	msgbox PokemonMansion_1F_Text_TedPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_1F_EventScript_Johnson::
	trainerbattle_single TRAINER_YOUNGSTER_JOHNSON, PokemonMansion_1F_Text_JohnsonIntro, PokemonMansion_1F_Text_JohnsonDefeat
	msgbox PokemonMansion_1F_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_1F_Text_TedIntro::
#if GERMAN
	.string "Wer bist du?\n"
	.string "Hier hat niemand etwas zu suchen!$"
#else
	.string "Who are you?\n"
	.string "There shouldn't be anyone here.$"
#endif

PokemonMansion_1F_Text_TedDefeat::
#if GERMAN
	.string "Autsch!$"
#else
	.string "Ouch!$"
#endif

PokemonMansion_1F_Text_TedPostBattle::
#if GERMAN
	.string "Ein Schlüssel?\n"
	.string "Keine Ahnung, wovon du redest!$"
#else
	.string "A key? I don't know what you're\n"
	.string "talking about.$"
#endif

PokemonMansion_1F_Text_JohnsonIntro::
#if GERMAN
	.string "Oh! Du hast mich überrascht!\n"
	.string "Ich dachte, du wärst ein Geist.$"
#else
	.string "W-w-waah! You startled me!\n"
	.string "I thought you were a ghost.$"
#endif

PokemonMansion_1F_Text_JohnsonDefeat::
#if GERMAN
	.string "Ts!\n"
	.string "Ich kann nicht gewinnen!$"
#else
	.string "Tch!\n"
	.string "I can't get any wins.$"
#endif

PokemonMansion_1F_Text_JohnsonPostBattle::
#if GERMAN
	.string "Ich habe das Gebiet hier auf\n"
	.string "eigene Faust erforscht, aber es\l"
	.string "ist so gruselig.\p"
	.string "Ich muss bald weg!$"
#else
	.string "I was exploring here by myself,\n"
	.string "but I feel spooked.\p"
	.string "I ought to go soon.$"
#endif

