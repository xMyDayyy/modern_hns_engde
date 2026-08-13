ThreeIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ThreeIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_THREE_ISLAND
	end

ThreeIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

ThreeIsland_PokemonCenter_1F_EventScript_Sailor::
	msgbox ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_EventScript_Lass::
	msgbox ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_EventScript_Rocker::
	msgbox ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto::
#if GERMAN
	.string "Heh! Hast du schon gehört?\p"
	.string "Das PC-Netzwerk hier kann nun mit den\n"
	.string "PCs in Kanto verbunden werden.\l"
	.string "Ich weiß nicht, wie das zu Stande kam,\l"
	.string "aber es ist großartig!$"
#else
	.string "Hey, did you hear the news?\p"
	.string "The PC network here can now link\n"
	.string "with PCs in KANTO.\p"
	.string "I don't know how that came about,\n"
	.string "but it's fantastic!$"
#endif

ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands::
#if GERMAN
	.string "Es ist nicht möglich, zwischen den\n"
	.string "Inseln in dieser Gegend zu Surfen!\p"
	.string "Die Strömung ist zu stark und\n"
	.string "zu gefährlich!$"
#else
	.string "It's impossible to SURF between the\n"
	.string "islands around these parts.\p"
	.string "The tides are too fast and\n"
	.string "treacherous.$"
#endif

ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest::
#if GERMAN
	.string "Lass uns Beeren mahlen!\n"
	.string "… das wäre Beerenverschwendung?\p"
	.string "Im Beerenforst kannst du stets\n"
	.string "Beeren am Boden finden!$"
#else
	.string "Let's crush BERRIES!\n"
	.string "…That'd be wasting BERRIES?\p"
	.string "You can always find some BERRIES\n"
	.string "on the ground in BERRY FOREST.$"
#endif

