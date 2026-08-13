PokemonMansion_2F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_2F_OnLoad
	.byte 0

PokemonMansion_2F_OnLoad::
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_2F
	end

PokemonMansion_2F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 1
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end

PokemonMansion_2F_EventScript_DiaryJuly5th::
	msgbox PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle, MSGBOX_SIGN
	end

PokemonMansion_2F_EventScript_DiaryJuly10th::
	msgbox PokemonMansion_1F_Text_ChristenedDiscoveredMonMew, MSGBOX_SIGN
	end

PokemonMansion_2F_EventScript_Arnie::
	trainerbattle_single TRAINER_BURGLAR_ARNIE, PokemonMansion_1F_Text_ArnieIntro, PokemonMansion_1F_Text_ArnieDefeat
	msgbox PokemonMansion_1F_Text_ArniePostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_Text_PressSecretSwitch::
#if GERMAN
	.string "Ein versteckter Schalter!\p"
	.string "Schalter drücken?$"
#else
	.string "A secret switch!\p"
	.string "Press it?$"
#endif

PokemonMansion_Text_WhoWouldnt::
#if GERMAN
	.string "Wer würde es nicht tun?$"
#else
	.string "Who wouldn't?$"
#endif

PokemonMansion_Text_NotQuiteYet::
#if GERMAN
	.string "Lieber nicht!$"
#else
	.string "Not quite yet!$"
#endif

PokemonMansion_1F_Text_ArnieIntro::
#if GERMAN
	.string "Ich finde keinen Weg nach draußen!\n"
	.string "Der reinste Irrgarten!$"
#else
	.string "I can't get out!\n"
	.string "This old place is one big puzzle.$"
#endif

PokemonMansion_1F_Text_ArnieDefeat::
#if GERMAN
	.string "Oh nein!\n"
	.string "Meine Beute!$"
#else
	.string "Oh, no!\n"
	.string "My bag of loot!$"
#endif

PokemonMansion_1F_Text_ArniePostBattle::
#if GERMAN
	.string "Die Türen kannst du mittels Schalter\n"
	.string "schließen oder öffnen!$"
#else
	.string "The switches here open and close\n"
	.string "alternating sets of doors.$"
#endif

PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle::
#if GERMAN
	.string "Tagebuch: 5. Juli\n"
	.string "Der Dschungel im Niemandsland.\p"
	.string "Wir haben tief im Dschungel ein\n"
	.string "völlig neues Pokémon gefunden.$"
#else
	.string "Diary: July 5\n"
	.string "Guyana, South America\p"
	.string "A new POKéMON was discovered deep\n"
	.string "in the jungle.$"
#endif

PokemonMansion_1F_Text_ChristenedDiscoveredMonMew::
#if GERMAN
	.string "Tagebuch: 10. Juli Wir nennen das neu\n"
	.string "entdeckte Pokémon Mew.$"
#else
	.string "Diary: July 10\n"
	.string "We christened the newly discovered\l"
	.string "POKéMON, MEW.$"
#endif

