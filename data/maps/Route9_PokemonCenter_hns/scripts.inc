Route9_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Route9_PokemonCenter_EventScript_Engineer1::
	msgbox Route9_PokemonCenter_Text_Engineer1, MSGBOX_NPC
	end

Route9_PokemonCenter_EventScript_Engineer2::
	msgbox Route9_PokemonCenter_Text_Engineer2, MSGBOX_NPC
	end

Route9_PokemonCenter_Text_Engineer1:
#if GERMAN
	.string "Manchmal kommen wir Ingenieure hierher,\n"
	.string "um eine Pause zu machen oder um dem\l"
	.string "Chef zu entkommen.\p"
	.string "Der Typ ist verrückt.$"
#else
	.string "Sometimes us engineers come here\n"
	.string "for our break. Or just to get away\l"
	.string "from our MANAGER.\p"
	.string "That guy is crazy.$"
#endif

Route9_PokemonCenter_Text_Engineer2:
#if GERMAN
	.string "Das Kraftwerk ist sehr abgelegen,\n"
	.string "darum reise ich weit für die Arbeit.$"
#else
	.string "The POWER PLANT is very remote, so\n"
	.string "I travel far for work.$"
#endif
