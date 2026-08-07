GoldenrodCity_House1_hns_MapScripts::
	.byte 0

GoldenrodCity_NameRatersHouse_EventScript_ToggleShinies::
	lock
	msgbox GoldenrodCity_NameRatersHouse_Text_AskToggleShinies, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_NameRatersHouse_EventScript_ToggleShiniesRefused
	@special ToggleShinyColors
	msgbox GoldenrodCity_NameRatersHouse_Text_ToggleShinies, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_NameRatersHouse_EventScript_ToggleShiniesRefused::
	release
	end

GoldenrodCity_NameRatersHouse_Text_AskToggleShinies:
#if GERMAN
	.string "Möchtest du die einzigartige\n"
	.string "Shiny Farbeinstellung Togglen?$"
#else
	.string "Would you like to toggle the Unique\n"
	.string "Shiny Colors setting?$"
#endif

GoldenrodCity_NameRatersHouse_Text_ToggleShinies:
#if GERMAN
	.string "Shiny-Farben getoggled!\p"
	.string "Siehe deine Einstellungen an\n"
	.string "einem PC.$"
#else
	.string "Shiny Colors Toggled!\p"
	.string "View your setting at the CHALLENGE\n"
	.string "VIEWER at any PC.$"
#endif

GoldenrodCity_NameRatersHouse_EventScript_RenameRival::
	msgbox GoldenrodCity_NameRatersHouse_Text_RenameRival, MSGBOX_DEFAULT
	closemessage
	special NameRival
	waitstate
	end

GoldenrodCity_NameRatersHouse_Text_RenameRival:
#if GERMAN
	.string "Es sind die Nachrichten…\p"
	.string "Die Polizei sucht diesen\n"
	.string "rothaarigen Jungen!\p"
	.string "Kennst du seinen Namen?$"
#else
	.string "It's the news...\p"
	.string "The POLICE are looking for this\n"
	.string "REDHEADED BOY!\p"
	.string "Do YOU know his name?$"
#endif

GoldenrodCity_NameRatersHouse_EventScript_NameRater::
	lock
	faceplayer
	msgbox GoldenrodCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, GoldenrodCity_NameRatersHouse_EventScript_ChooseMonToRate
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_NameRatersHouse_EventScript_DeclineNameRate
	end

GoldenrodCity_NameRatersHouse_EventScript_ChooseMonToRate::
	msgbox GoldenrodCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	lock
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, GoldenrodCity_NameRatersHouse_EventScript_RateMonNickname
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, GoldenrodCity_NameRatersHouse_EventScript_DeclineNameRate
	end

GoldenrodCity_NameRatersHouse_EventScript_DeclineNameRate::
	msgbox GoldenrodCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_NameRatersHouse_EventScript_RateMonNickname::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, GoldenrodCity_NameRatersHouse_EventScript_CantRateEgg
	special BufferMonNickname
	@special IsMonOTIDNotPlayers
	@goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	@specialvar VAR_RESULT, MonOTNameNotPlayer
	special BufferMonNickname
	@goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	msgbox GoldenrodCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, GoldenrodCity_NameRatersHouse_EventScript_ChangeNickname
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_NameRatersHouse_EventScript_DeclineNameRate
	end

GoldenrodCity_NameRatersHouse_EventScript_CantRateEgg::
	msgbox GoldenrodCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
	msgbox GoldenrodCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_NameRatersHouse_EventScript_ChangeNickname::
	msgbox GoldenrodCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_NameRatersHouse_EventScript_NewNameDifferent
	msgbox GoldenrodCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_NameRatersHouse_EventScript_NewNameDifferent::
	msgbox GoldenrodCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_NameRatersHouse_Text_PleasedToRateMonNickname:
#if GERMAN
	.string "Hi, ho! Ich bin der Namenbewerter!\p"
	.string "Ich sage dir die Zukunft der Namen!\p"
	.string "Ich bewerte gern den Spitznamen deines\n"
	.string "Pokémon.$"
#else
	.string "Hi, hi! I'm the NAME RATER!\n"
	.string "I'm the fortune-teller of names!\p"
	.string "I shall be pleased to rate your\n"
	.string "POKéMON's nickname.$"
#endif

GoldenrodCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
#if GERMAN
	.string "Mal sehen…\n"
	.string "Von welchem Pokémon darf\l"
	.string "ich den Spitznamen bewerten?$"
#else
	.string "Which POKéMON's nickname should\n"
	.string "I critique?$"
#endif

GoldenrodCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
#if GERMAN
	.string "Hmmm… {STR_VAR_1}, nicht wahr?\n"
	.string "Das ist ein recht schöner Name.\p"
	.string "Aber! Was meinst du, wenn ich dir\n"
	.string "einen noch besseren vorschlage?$"
#else
	.string "Hmmm… {STR_VAR_1}, is it? That is\n"
	.string "quite a fine name you bestowed.\p"
	.string "But! What say you, if I were to\n"
	.string "suggest a slightly better name?$"
#endif

GoldenrodCity_NameRatersHouse_Text_WhatShallNewNameBe:
#if GERMAN
	.string "Sehr schön! Dann wollen wir mal\n"
	.string "überlegen, wie es ab jetzt heißen soll.$"
#else
	.string "Ah, good. Then, what shall the new\n"
	.string "nickname be?$"
#endif

GoldenrodCity_NameRatersHouse_Text_MonShallBeKnownAsName:
#if GERMAN
	.string "Was hältst du davon: Von nun an soll\n"
	.string "dieses Pokémon {STR_VAR_1} heißen!\p"
	.string "Ein viel besserer Name als zuvor, oder?\n"
	.string "Du bist echt ein Glückspilz!$"
#else
	.string "Done! From now on, this POKéMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It is a better name than before!\n"
	.string "How fortunate for you!$"
#endif

GoldenrodCity_NameRatersHouse_Text_DoVisitAgain:
#if GERMAN
	.string "Ich verstehe.\n"
	.string "Komm gern wieder.$"
#else
	.string "I see.\n"
	.string "Do come visit again.$"
#endif

GoldenrodCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
#if GERMAN
	.string "Alles klar! Von nun an heißt dein\n"
	.string "Pokémon {STR_VAR_1}!\p"
	.string "Hm? So hieß es vorher auch schon?\n"
	.string "Ach was, das bildest du dir nur ein!\p"
	.string "Der neue Name passt eben wie die Faust\n"
	.string "auf’s Auge. Sieh’s doch mal positiv!$"
#else
	.string "Done! From now on, this POKéMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It looks no different from before,\n"
	.string "and yet, this is vastly superior!\p"
	.string "How fortunate for you!$"
#endif

GoldenrodCity_NameRatersHouse_Text_MagnificentName:
#if GERMAN
	.string "Hmmm… {STR_VAR_1}, wie prächtig!\p"
	.string "Das ist ein wunderbarer Spitzname!\n"
	.string "Er ist vollkommen tadellos!\p"
	.string "Pflege deinen {STR_VAR_1} gut\n"
	.string "von nun an und in Zukunft.$"
#else
	.string "Hmmm… {STR_VAR_1} it is!\p"
	.string "This is a magnificent nickname!\n"
	.string "It is impeccably beyond reproach!\p"
	.string "You'll do well to cherish your\n"
	.string "{STR_VAR_1} now and beyond.$"
#endif

GoldenrodCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
#if GERMAN
	.string "Hoppla…\n"
	.string "Aber das ist doch ein Ei!$"
#else
	.string "Now, now.\n"
	.string "That is merely an EGG!$"
#endif


