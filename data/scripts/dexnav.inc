EventScript_StartDexNavBattle::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	dowildbattle
	release
	end

EventScript_NotFoundNearby::
	msgbox sText_NotFoundNearby, MSGBOX_SIGN
	end

EventScript_MovedTooFast::
	msgbox sText_TryMovingSlower, MSGBOX_SIGN
	end

EventScript_PokemonGotAway::
	msgbox sText_PokemonGotAway, MSGBOX_SIGN
	end

EventScript_LostSignal::
	msgbox sText_LostSignal, MSGBOX_SIGN
	end

EventScript_TooDark::
	msgbox sText_TooDark, MSGBOX_SIGN
	end

sText_NotFoundNearby:
#if GERMAN
	.string "Es war in der Nähe nicht zu finden.\n"
	.string "Versuch es in einem anderen Gebiet!$"
#else
	.string "It couldn't be found nearby.\n"
	.string "Try looking in a different area!$"
#endif

sText_TryMovingSlower:
#if GERMAN
	.string "Das Pokémon ist entkommen! Versuche,\n"
	.string "dich langsamer zu bewegen.$"
#else
	.string "The Pokémon got away!\n"
	.string "Try moving more slowly.$"
#endif

sText_PokemonGotAway:
#if GERMAN
	.string "Das Pokémon ist entkommen…$"
#else
	.string "The Pokémon got away!$"
#endif

sText_LostSignal:
#if GERMAN
	.string "Keine Reaktion. Das Signal ist verloren!$"
#else
	.string "There is no reaction.\n"
	.string "The signal was lost!$"
#endif

sText_TooDark:
#if GERMAN
	.string "Es ist zu dunkel, um nach einem\n"
	.string "Pokémon zu suchen!$"
#else
	.string "It's too dark to search\nfor a Pokémon!$"
#endif
