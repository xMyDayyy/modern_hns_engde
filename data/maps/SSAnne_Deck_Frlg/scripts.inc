SSAnne_Deck_Frlg_MapScripts::
	.byte 0

SSAnne_Deck_EventScript_Youngster::
	msgbox SSAnne_Deck_Text_ShipDepartingSoon, MSGBOX_NPC
	end

SSAnne_Deck_EventScript_BaldingMan::
	msgbox SSAnne_Deck_Text_FeelSeasick, MSGBOX_NPC
	end

SSAnne_Deck_EventScript_Sailor::
	msgbox SSAnne_Deck_Text_ScrubbingDecksHardWork, MSGBOX_NPC
	end

SSAnne_Deck_EventScript_Edmond::
	trainerbattle_single TRAINER_SAILOR_EDMOND, SSAnne_Deck_Text_EdmondIntro, SSAnne_Deck_Text_EdmondDefeat
	msgbox SSAnne_Deck_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_Deck_EventScript_Trevor::
	trainerbattle_single TRAINER_SAILOR_TREVOR, SSAnne_Deck_Text_TrevorIntro, SSAnne_Deck_Text_TrevorDefeat
	msgbox SSAnne_Deck_Text_TrevorPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_Deck_Text_ShipDepartingSoon::
#if GERMAN
	.string "Sperrstunde! Die Party ist vorbei!\n"
	.string "Das Schiff sticht bald in See!$"
#else
	.string "The party's over.\n"
	.string "The ship will be departing soon.$"
#endif

SSAnne_Deck_Text_ScrubbingDecksHardWork::
#if GERMAN
	.string "Puh! Ich werde das Deck wohl nie\n"
	.string "sauber bekommen!$"
#else
	.string "Whew!\n"
	.string "Scrubbing decks is hard work!$"
#endif

SSAnne_Deck_Text_FeelSeasick::
#if GERMAN
	.string "Brrr, ich fühle mich elend...\p"
	.string "An der frischen Luft fühle ich mich\n"
	.string "besser...$"
#else
	.string "Urf… I feel ill…\p"
	.string "I got seasick, so I stepped out to\n"
	.string "get some air…$"
#endif

SSAnne_Deck_Text_EdmondIntro::
#if GERMAN
	.string "Heh!\p"
	.string "Wie wäre es mit einem Tänzchen?$"
#else
	.string "Hey, matey!\p"
	.string "Let's do a little jig!$"
#endif

SSAnne_Deck_Text_EdmondDefeat::
#if GERMAN
	.string "Ich bin beeindruckt!$"
#else
	.string "You're impressive!$"
#endif

SSAnne_Deck_Text_EdmondPostBattle::
#if GERMAN
	.string "Hast du eine Ahnung, wie viele\n"
	.string "unterschiedliche Pokémon es gibt?$"
#else
	.string "How many kinds of POKéMON do you\n"
	.string "think there are in this big world?$"
#endif

SSAnne_Deck_Text_TrevorIntro::
#if GERMAN
	.string "Ahoi!\n"
	.string "Bist du seekrank?$"
#else
	.string "Ahoy, there!\n"
	.string "Are you seasick?$"
#endif

SSAnne_Deck_Text_TrevorDefeat::
#if GERMAN
	.string "Du hast Glück gehabt!$"
#else
	.string "I was just careless!$"
#endif

SSAnne_Deck_Text_TrevorPostBattle::
#if GERMAN
	.string "Mein Vater sagt, es gäbe 100\n"
	.string "verschiedene Pokémon. Ich denke, es\l"
	.string "gibt mehr...$"
#else
	.string "My pa said there are 100 kinds of\n"
	.string "POKéMON. I think there are more.$"
#endif

