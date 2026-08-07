SSAnne_1F_Room7_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room7_EventScript_Thomas::
	trainerbattle_single TRAINER_GENTLEMAN_THOMAS, SSAnne_1F_Room7_Text_ThomasIntro, SSAnne_1F_Room7_Text_ThomasDefeat
	msgbox SSAnne_1F_Room7_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_1F_Room7_Text_ThomasIntro::
#if GERMAN
	.string "Ich mache immer allein Urlaub!\p"
	.string "Nur meine Pokémon begleiten mich!$"
#else
	.string "I am but a solitary traveler…\p"
	.string "My sole companions and friends are\n"
	.string "POKéMON I caught on my journeys…$"
#endif

SSAnne_1F_Room7_Text_ThomasDefeat::
#if GERMAN
	.string "Oh weh, verloren!$"
#else
	.string "My, my friends…$"
#endif

SSAnne_1F_Room7_Text_ThomasPostBattle::
#if GERMAN
	.string "Sei immer nett zu deinen Pokémon!$"
#else
	.string "You should be nice to friends!$"
#endif

