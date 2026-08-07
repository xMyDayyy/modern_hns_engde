PokemonTower_4F_Frlg_MapScripts::
	.byte 0

PokemonTower_4F_EventScript_Paula::
	trainerbattle_single TRAINER_CHANNELER_PAULA, PokemonTower_4F_Text_PaulaIntro, PokemonTower_4F_Text_PaulaDefeat
	msgbox PokemonTower_4F_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_4F_EventScript_Laurel::
	trainerbattle_single TRAINER_CHANNELER_LAUREL, PokemonTower_4F_Text_LaurelIntro, PokemonTower_4F_Text_LaurelDefeat
	msgbox PokemonTower_4F_Text_LaurelPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_4F_EventScript_Jody::
	trainerbattle_single TRAINER_CHANNELER_JODY, PokemonTower_4F_Text_JodyIntro, PokemonTower_4F_Text_JodyDefeat
	msgbox PokemonTower_4F_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_4F_Text_PaulaIntro::
#if GERMAN
	.string "Ein Geist! Nein!\n"
	.string "Ahhhhh!$"
#else
	.string "Ghost! No!\n"
	.string "Kwaaah!$"
#endif

PokemonTower_4F_Text_PaulaDefeat::
#if GERMAN
	.string "Wohin ist der Geist gegangen?$"
#else
	.string "Where is the ghost?$"
#endif

PokemonTower_4F_Text_PaulaPostBattle::
#if GERMAN
	.string "Ich bin sicher, ich träume das\n"
	.string "alles nur...$"
#else
	.string "I must have been dreaming…$"
#endif

PokemonTower_4F_Text_LaurelIntro::
#if GERMAN
	.string "Ich verfluche dich!\n"
	.string "Buuuh!$"
#else
	.string "Be cursed with me!\n"
	.string "Kwaaah!$"
#endif

PokemonTower_4F_Text_LaurelDefeat::
#if GERMAN
	.string "Was ist passiert?$"
#else
	.string "What!$"
#endif

PokemonTower_4F_Text_LaurelPostBattle::
#if GERMAN
	.string "Wir können die Identität der\n"
	.string "Geister nicht ermitteln!$"
#else
	.string "We can't determine the identity of\n"
	.string "the ghosts…$"
#endif

PokemonTower_4F_Text_JodyIntro::
#if GERMAN
	.string "Buuh... buhuhu...\n"
	.string "Lass mich in Ruhe!$"
#else
	.string "Huhuhu…\n"
	.string "Beat me not!$"
#endif

PokemonTower_4F_Text_JodyDefeat::
#if GERMAN
	.string "Wer?\n"
	.string "Was? Wo?$"
#else
	.string "Huh?\n"
	.string "Who? What?$"
#endif

PokemonTower_4F_Text_JodyPostBattle::
#if GERMAN
	.string "Mögen die verlorenen Seelen der\n"
	.string "Pokémon in Frieden ruhen...$"
#else
	.string "May the departed POKéMON rest in\n"
	.string "peace…$"
#endif

