LavenderTown_House2_Frlg_MapScripts::
	.byte 0

LavenderTown_House2_EventScript_NameRater::
	lock
	faceplayer
	msgbox LavenderTown_House2_Text_WantMeToRateNicknames, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseMon
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
	end

LavenderTown_House2_EventScript_ChooseMon::
	msgbox LavenderTown_House2_Text_CritiqueWhichMonsNickname
	special ChoosePartyMon
	waitstate
	goto_if_lt VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_CheckCanRateMon
	goto_if_ge VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_DontRateNickname
	end

LavenderTown_House2_EventScript_DontRateNickname::
	msgbox LavenderTown_House2_Text_ISeeComeVisitAgain
	release
	end

LavenderTown_House2_EventScript_CheckCanRateMon::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, LavenderTown_House2_EventScript_CantNicknameEgg
	special BufferMonNickname
	special IsMonOTIDNotPlayers
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
	specialvar VAR_RESULT, MonOTNameNotPlayer
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
	msgbox LavenderTown_House2_Text_GiveItANicerName, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseNewNickname
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
	end

LavenderTown_House2_EventScript_CantNicknameEgg::
	msgbox LavenderTown_House2_Text_ThatIsMerelyAnEgg
	release
	end

LavenderTown_House2_EventScript_CantNicknameTradeMon::
	msgbox LavenderTown_House2_Text_TrulyImpeccableName
	release
	end

LavenderTown_House2_EventScript_ChooseNewNickname::
	msgbox LavenderTown_House2_Text_WhatShallNewNicknameBe
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_ChoseNewNickname
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName
	release
	end

LavenderTown_House2_EventScript_ChoseNewNickname::
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsName
	release
	end

LavenderTown_House2_Text_WantMeToRateNicknames::
#if GERMAN
	.string "Hallo! Ich bin der offizielle\n"
	.string "Namen-Bewerter!\p"
	.string "Soll ich die Spitznamen deiner\n"
	.string "Pokémon bewerten?$"
#else
	.string "Hello, hello!\n"
	.string "I am the official NAME RATER!\p"
	.string "Want me to rate the nicknames of\n"
	.string "your POKéMON?$"
#endif

LavenderTown_House2_Text_CritiqueWhichMonsNickname::
#if GERMAN
	.string "Für welches Pokémon soll ich den\n"
	.string "Kosenamen bewerten?$"
#else
	.string "Which POKéMON's nickname should\n"
	.string "I critique?$"
#endif

LavenderTown_House2_Text_GiveItANicerName::
#if GERMAN
	.string "Der Spitzname ist {STR_VAR_1},\n"
	.string "oder? Ein schöner Name!\p"
	.string "Gefällt er dir noch immer, oder\n"
	.string "möchtest du ihn ändern?\p"
	.string "Was möchtest du?$"
#else
	.string "{STR_VAR_1}, is it?\n"
	.string "That is a decent nickname!\p"
	.string "But, would you like me to give it\n"
	.string "a nicer name?\p"
	.string "How about it?$"
#endif

LavenderTown_House2_Text_WhatShallNewNicknameBe::
#if GERMAN
	.string "Sehr schön! Und wie soll der neue\n"
	.string "Kosename lauten?$"
#else
	.string "Ah, good. Then, what shall the new\n"
	.string "nickname be?$"
#endif

LavenderTown_House2_Text_FromNowOnShallBeKnownAsName::
#if GERMAN
	.string "Fertig! Von nun an heißt dein Pokémon\n"
	.string "{STR_VAR_1}!\p"
	.string "Das ist ein besserer Name als der\n"
	.string "vorherige. Welch ein Glück für dich!$"
#else
	.string "Done! From now on, this POKéMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It is a better name than before!\n"
	.string "How fortunate for you!$"
#endif

LavenderTown_House2_Text_ISeeComeVisitAgain::
#if GERMAN
	.string "Ich verstehe.\n"
	.string "Komm mich wieder besuchen.$"
#else
	.string "I see.\n"
	.string "Do come visit again.$"
#endif

LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName::
#if GERMAN
	.string "Fertig! Von nun an heißt dein Pokémon\n"
	.string "{STR_VAR_1}!\p"
	.string "Eigentlich unterscheidet sich der Name\n"
	.string "nicht von dem vorherigen, und doch ist\l"
	.string "er um einiges besser! Welch ein Glück!$"
#else
	.string "Done! From now on, this POKéMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It looks no different from before,\n"
	.string "and yet, this is vastly superior!\p"
	.string "How fortunate for you!$"
#endif

LavenderTown_House2_Text_TrulyImpeccableName::
#if GERMAN
	.string "{STR_VAR_1}! Ein wirklich tadelloser\n"
	.string "Name!\p"
	.string "Kümmere dich gut um {STR_VAR_1}!$"
#else
	.string "{STR_VAR_1}, is it?\n"
	.string "That is a truly impeccable name!\p"
	.string "Take good care of {STR_VAR_1}!$"
#endif

LavenderTown_House2_Text_ThatIsMerelyAnEgg::
#if GERMAN
	.string "Mhm, mhm…\n"
	.string "Das ist eigentlich ein Ei!$"
#else
	.string "Now, now.\n"
	.string "That is merely an EGG!$"
#endif

