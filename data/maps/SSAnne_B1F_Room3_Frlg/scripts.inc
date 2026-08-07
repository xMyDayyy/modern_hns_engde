SSAnne_B1F_Room3_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room3_EventScript_Dylan::
	trainerbattle_single TRAINER_SAILOR_DYLAN, SSAnne_B1F_Room3_Text_DylanIntro, SSAnne_B1F_Room3_Text_DylanDefeat
	msgbox SSAnne_B1F_Room3_Text_DylanPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room3_Text_DylanIntro::
#if GERMAN
	.string "Ich war früher genauso aufgedreht\n"
	.string "wie du!$"
#else
	.string "I like feisty kids like you!$"
#endif

SSAnne_B1F_Room3_Text_DylanDefeat::
#if GERMAN
	.string "Oh nein!\n"
	.string "Verloren!$"
#else
	.string "Argh!\n"
	.string "Lost it!$"
#endif

SSAnne_B1F_Room3_Text_DylanPostBattle::
#if GERMAN
	.string "Wasser-Pokémon leben unter Wasser!\n"
	.string "Du benötigst eine Angel!$"
#else
	.string "Sea POKéMON live in deep water.\n"
	.string "You'll need a ROD to fish them up!$"
#endif

