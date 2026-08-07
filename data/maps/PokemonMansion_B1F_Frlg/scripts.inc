PokemonMansion_B1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_B1F_OnLoad
	.byte 0

PokemonMansion_B1F_OnLoad::
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_B1F
	end

PokemonMansion_B1F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 3
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end

PokemonMansion_B1F_EventScript_DiarySep1st::
	msgbox PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful, MSGBOX_SIGN
	end

PokemonMansion_B1F_EventScript_Lewis::
	trainerbattle_single TRAINER_BURGLAR_LEWIS, PokemonMansion_B1F_Text_LewisIntro, PokemonMansion_B1F_Text_LewisDefeat
	msgbox PokemonMansion_B1F_Text_LewisPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_B1F_EventScript_Ivan::
	trainerbattle_single TRAINER_SCIENTIST_IVAN, PokemonMansion_B1F_Text_IvanIntro, PokemonMansion_B1F_Text_IvanDefeat
	msgbox PokemonMansion_B1F_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_B1F_Text_LewisIntro::
#if GERMAN
	.string "Wo bin ich hier gelandet?$"
#else
	.string "Uh-oh…\n"
	.string "Where am I now?$"
#endif

PokemonMansion_B1F_Text_LewisDefeat::
#if GERMAN
	.string "Autsch!$"
#else
	.string "Awooh!$"
#endif

PokemonMansion_B1F_Text_LewisPostBattle::
#if GERMAN
	.string "Hier liegt viel nützliches Zeug\n"
	.string "herum!$"
#else
	.string "You can find stuff lying around.\n"
	.string "The residents must've left them.$"
#endif

PokemonMansion_B1F_Text_IvanIntro::
#if GERMAN
	.string "Hier wäre der ideale Platz für ein\n"
	.string "Labor!$"
#else
	.string "This place is ideal for a lab.\n"
	.string "Look at all this space.$"
#endif

PokemonMansion_B1F_Text_IvanDefeat::
#if GERMAN
	.string "Was hab ich nur falsch gemacht?$"
#else
	.string "What was that for?$"
#endif

PokemonMansion_B1F_Text_IvanPostBattle::
#if GERMAN
	.string "Hier gefällt es mir!\n"
	.string "Man kann prima forschen!$"
#else
	.string "I like it here.\n"
	.string "It's conducive to my studies.$"
#endif

PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful::
#if GERMAN
	.string "Tagebuch: 1. September\n"
	.string "Mewtu wird immer stärker.\p"
	.string "Wir konnten die unkontrollierten\n"
	.string "Wutausbrüche nicht eindämmen!$"
#else
	.string "Diary: Sept. 1\n"
	.string "MEWTWO is far too powerful.\p"
	.string "We have failed to curb its vicious\n"
	.string "tendencies…$"
#endif

