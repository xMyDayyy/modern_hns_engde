PacifidlogTown_House2_MapScripts::
	.byte 0

PacifidlogTown_House2_EventScript_FanClubYoungerBrother::
	lock
	faceplayer
	dotimebasedevents
	call PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag
	goto_if_set FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, PacifidlogTown_House2_EventScript_ComeBackInXDays
	call_if_set FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_MonAssessment
	call_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FirstMonAssessment
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, PacifidlogTown_House2_EventScript_GiveReturn
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_ge VAR_RESULT, FRIENDSHIP_50_TO_99, PacifidlogTown_House2_EventScript_PutInEffort
	goto PacifidlogTown_House2_EventScript_GiveFrustration
	end

PacifidlogTown_House2_EventScript_UpdateFanClubTMFlag::
	goto_if_unset FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, Common_EventScript_NopReturn
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
	call_if_eq VAR_RESULT, 0, PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM
	return

PacifidlogTown_House2_EventScript_MonAssessment::
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
	return

PacifidlogTown_House2_EventScript_FirstMonAssessment::
	msgbox PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation, MSGBOX_DEFAULT
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
	return

PacifidlogTown_House2_EventScript_ClearReceivedFanClubTM::
	clearflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
	return

PacifidlogTown_House2_EventScript_GiveReturn::
	msgbox PacifidlogTown_House2_Text_AdoringPokemonTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_RETURN
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
	special SetPacifidlogTMReceivedDay
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_PutInEffort::
	msgbox PacifidlogTown_House2_Text_PutInSomeMoreEffort, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_GiveFrustration::
	msgbox PacifidlogTown_House2_Text_ViciousPokemonTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_FRUSTRATION
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
	special SetPacifidlogTMReceivedDay
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_ComeBackInXDays::
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
	buffernumberstring STR_VAR_1, VAR_RESULT
	msgbox PacifidlogTown_House2_Text_GetGoodTMInXDays, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_HappyAzurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
	waitmoncry
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_UnhappyAzurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
	waitmoncry
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation:
#if GERMAN
	.string "Ähhäm!\p"
	.string "Ich bin die wichtigste Person des\n"
	.string "Pokémon-Fanclubs, ich bin der kleine\l"
	.string "Bruder des Vorsitzenden.\p"
	.string "Ich genieße hier die Ferien mit meinen\n"
	.string "Pokémon. Ja, das tue ich.$"
#else
	.string "Er-hem!\p"
	.string "I am the POKéMON FAN CLUB's most\n"
	.string "important person, the CHAIRMAN's\l"
	.string "younger brother.\p"
	.string "I'm here enjoying my vacation with\n"
	.string "POKéMON, yes, indeed.$"
#endif

PacifidlogTown_House2_Text_AhYourPokemon:
#if GERMAN
	.string "Ah! Dein Pokémon…$"
#else
	.string "Ah!\n"
	.string "Your POKéMON…$"
#endif

PacifidlogTown_House2_Text_AdoringPokemonTakeThis:
#if GERMAN
	.string "Es mag dich offensichtlich sehr.\p"
	.string "Ein derart liebevolles und wunderbares\n"
	.string "Pokémon verdient eine TM wie diese!$"
#else
	.string "It clearly likes you very much.\p"
	.string "A POKéMON that adoring and adorable\n"
	.string "deserves a TM like this, no?$"
#endif

PacifidlogTown_House2_Text_PutInSomeMoreEffort:
#if GERMAN
	.string "Hmm…\n"
	.string "Nicht schlecht… Aber auch nicht gut.\p"
	.string "Du musst dich als Trainer mehr\n"
	.string "anstrengen.$"
#else
	.string "Hmm…\n"
	.string "It's not bad, but it's also not good.\p"
	.string "You, as the TRAINER, need to put in\n"
	.string "some more effort.$"
#endif

PacifidlogTown_House2_Text_ViciousPokemonTakeThis:
#if GERMAN
	.string "Es hat einen bösartigen Blick.\p"
	.string "Ein Furcht erregendes Pokémon wie\n"
	.string "dieses verdient eine TM wie diese!$"
#else
	.string "It has a vicious look to it.\p"
	.string "A frightening POKéMON like that\n"
	.string "deserves a TM like this.$"
#endif

PacifidlogTown_House2_Text_ExplainReturnFrustration:
#if GERMAN
	.string "Wenn ein Pokémon dich sehr mag, wird\n"
	.string "die Kraft von Rückkehr verstärkt.\p"
	.string "Wenn es dich nicht mag, wird die Kraft\n"
	.string "von Frustration verstärkt.$"
#else
	.string "If a POKéMON likes you a lot, RETURN's\n"
	.string "power is enhanced.\p"
	.string "If it doesn't like you, FRUSTRATION's\n"
	.string "power goes up.$"
#endif

PacifidlogTown_House2_Text_GetGoodTMInXDays:
#if GERMAN
	.string "Oh, ja. In {STR_VAR_1} Tag(en) müsste\n"
	.string "ich eine gute TM bekommen haben.\p"
	.string "Komm doch dann wieder vorbei.\n"
	.string "Ich werde dir dann eine TM geben, die\l"
	.string "wunderbar zu deinem Pokémon passt.$"
#else
	.string "Oh, yes. In about {STR_VAR_1} or so days,\n"
	.string "I should be getting a good TM or two.\p"
	.string "You should come see me then.\n"
	.string "I'll give you a TM that's suitable for\l"
	.string "your POKéMON.$"
#endif

PacifidlogTown_House2_Text_Rurii:
#if GERMAN
	.string "Azurill: Rurii.$"
#else
	.string "AZURILL: Rurii.$"
#endif

PacifidlogTown_House2_Text_VeryFriendlyWithTrainer:
#if GERMAN
	.string "Es scheint freundschaftlich mit dem\n"
	.string "Trainer umzugehen.$"
#else
	.string "It appears to be very friendly with the\n"
	.string "TRAINER.$"
#endif

PacifidlogTown_House2_Text_Rururi:
#if GERMAN
	.string "Azurill: Rururi!$"
#else
	.string "AZURILL: Rururi!$"
#endif

PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch:
#if GERMAN
	.string "Es scheint den Trainer nicht\n"
	.string "sonderlich zu mögen.$"
#else
	.string "It doesn't appear to like the TRAINER\n"
	.string "very much.$"
#endif

