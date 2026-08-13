OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
#if GERMAN
	.string "Frag mich nicht nach dem Weg. Ich bin\n"
	.string "selbst erst letzten Monat hergezogen.$"
#else
	.string "Don't ask me for directions. I only\n"
	.string "moved here last month myself.$"
#endif

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
#if GERMAN
	.string "Bist du auch wegen der Ruhe hier?\p"
	.string "Früher habe ich Pokémon gefangen,\n"
	.string "heute fange ich nur noch Fische.\p"
	.string "Beides braucht Geduld.$"
#else
	.string "Are you here for the quiet, too?\p"
	.string "I used to catch POKéMON. These days\n"
	.string "I only catch fish.\p"
	.string "Both take patience.$"
#endif

