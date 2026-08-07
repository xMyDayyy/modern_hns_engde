SSAnne_2F_Room4_Frlg_MapScripts::
	.byte 0

SSAnne_2F_Room4_EventScript_Lamar::
	trainerbattle_single TRAINER_GENTLEMAN_LAMAR, SSAnne_2F_Room4_Text_LamarIntro, SSAnne_2F_Room4_Text_LamarDefeat
	msgbox SSAnne_2F_Room4_Text_LamarPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_2F_Room4_EventScript_Dawn::
	trainerbattle_single TRAINER_LASS_DAWN, SSAnne_2F_Room4_Text_DawnIntro, SSAnne_2F_Room4_Text_DawnDefeat
	msgbox SSAnne_2F_Room4_Text_DawnPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_2F_Room4_Text_LamarIntro::
#if GERMAN
	.string "Was magst du lieber?\n"
	.string "Starke oder seltene Pokémon?$"
#else
	.string "Which do you find more worthy,\n"
	.string "a strong or a rare POKéMON?$"
#endif

SSAnne_2F_Room4_Text_LamarDefeat::
#if GERMAN
	.string "Ich ziehe meinen Hut vor dir! Wow!$"
#else
	.string "I must salute you!$"
#endif

SSAnne_2F_Room4_Text_LamarPostBattle::
#if GERMAN
	.string "Ich mag Pokémon, die stark und\n"
	.string "selten sind!$"
#else
	.string "Personally, I prefer strong and\n"
	.string "rare POKéMON.$"
#endif

SSAnne_2F_Room4_Text_DawnIntro::
#if GERMAN
	.string "Wo warst du, als die Party lief?$"
#else
	.string "I don't believe I saw you at the\n"
	.string "party?$"
#endif

SSAnne_2F_Room4_Text_DawnDefeat::
#if GERMAN
	.string "Mach langsam!!!$"
#else
	.string "Take it easy!$"
#endif

SSAnne_2F_Room4_Text_DawnPostBattle::
#if GERMAN
	.string "Ich bewundere die Stärke deiner\n"
	.string "Pokémon!$"
#else
	.string "Oh, I adore your strong POKéMON!\n"
	.string "Oh, how I envy you for them!$"
#endif

