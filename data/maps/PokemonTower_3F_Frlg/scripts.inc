PokemonTower_3F_Frlg_MapScripts::
	.byte 0

PokemonTower_3F_EventScript_Patricia::
	trainerbattle_single TRAINER_CHANNELER_PATRICIA, PokemonTower_3F_Text_PatriciaIntro, PokemonTower_3F_Text_PatriciaDefeat
	msgbox PokemonTower_3F_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_3F_EventScript_Carly::
	trainerbattle_single TRAINER_CHANNELER_CARLY, PokemonTower_3F_Text_CarlyIntro, PokemonTower_3F_Text_CarlyDefeat
	msgbox PokemonTower_3F_Text_CarlyPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_3F_EventScript_Hope::
	trainerbattle_single TRAINER_CHANNELER_HOPE, PokemonTower_3F_Text_HopeIntro, PokemonTower_3F_Text_HopeDefeat
	msgbox PokemonTower_3F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_3F_Text_HopeIntro::
#if GERMAN
	.string "Buu... huhu...\n"
	.string "Huhu... buu...$"
#else
	.string "Urrg… Awaa…\n"
	.string "Huhu… Graa…$"
#endif

PokemonTower_3F_Text_HopeDefeat::
#if GERMAN
	.string "Buu!\n"
	.string "Ich wurde erlöst!$"
#else
	.string "Hwa!\n"
	.string "I'm saved!$"
#endif

PokemonTower_3F_Text_HopePostBattle::
#if GERMAN
	.string "Das Silph Scope kann Geister\n"
	.string "identifizieren!$"
#else
	.string "The ghosts can be identified by\n"
	.string "the SILPH SCOPE.$"
#endif

PokemonTower_3F_Text_CarlyIntro::
#if GERMAN
	.string "Buhuhuhu...\n"
	.string "Hui... buuh!$"
#else
	.string "Kekeke…\n"
	.string "Kwaaah!$"
#endif

PokemonTower_3F_Text_CarlyDefeat::
#if GERMAN
	.string "Hmm?\n"
	.string "Was mache ich hier?$"
#else
	.string "Hmm?\n"
	.string "What am I doing?$"
#endif

PokemonTower_3F_Text_CarlyPostBattle::
#if GERMAN
	.string "Tut mir Leid!\n"
	.string "Ich war besessen!$"
#else
	.string "Sorry!\n"
	.string "I was possessed!$"
#endif

PokemonTower_3F_Text_PatriciaIntro::
#if GERMAN
	.string "Verschwinde, böser Geist!$"
#else
	.string "Be gone!\n"
	.string "Malevolent spirit!$"
#endif

PokemonTower_3F_Text_PatriciaDefeat::
#if GERMAN
	.string "Puh!\n"
	.string "Der Geist ist verschwunden!$"
#else
	.string "Whew!\n"
	.string "The spirit left!$"
#endif

PokemonTower_3F_Text_PatriciaPostBattle::
#if GERMAN
	.string "Auch meine Freunde waren besessen!$"
#else
	.string "The others above…\n"
	.string "They must have been possessed.$"
#endif

