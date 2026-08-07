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
	.string "Während eines Kampfes können Pokémon\n"
	.string "manchmal einen Level dazugewinnen und\l"
	.string "stärker werden.$"
#else
	.string "When POKéMON battle, they eventually\n"
	.string "level up and become stronger.$"
#endif

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
#if GERMAN
	.string "Sobald deine Team-Pokémon stärker\n"
	.string "geworden sind, kannst du auch andere\l"
	.string "Orte bereisen.$"
#else
	.string "If the POKéMON with you become\n"
	.string "stronger, you'll be able to go farther\l"
	.string "away from here.$"
#endif

