CeruleanCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CeruleanCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_CERULEAN_CITY
	end

CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

CeruleanCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_1F_EventScript_Rocker::
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_1F_EventScript_Youngster::
	lock
	faceplayer
	famechecker FAMECHECKER_BILL, 1
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons
	release
	end

CeruleanCity_PokemonCenter_1F_EventScript_Lass::
	msgbox CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs, MSGBOX_NPC
	end

CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons::
#if GERMAN
	.string "Dieser Bill!\p"
	.string "Ich hörte, für seltene Pokémon\n"
	.string "würde er alles tun!$"
#else
	.string "That BILL!\p"
	.string "I heard that he'll do whatever it\n"
	.string "takes to get rare POKéMON.\p"
	.string "He's not above doing all sorts\n"
	.string "of things, I've heard.$"
#endif

CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac::
#if GERMAN
	.string "Hat man dir schon von Bill\n"
	.string "erzählt?\p"
	.string "Jeder nennt ihn den Pokémaniac!\p"
	.string "Aber ich glaube, die Leute sind\n"
	.string "bloß neidisch auf Bill.\p"
	.string "Wer würde denn nicht mit seinen\n"
	.string "Pokémon prahlen?$"
#else
	.string "Have you heard about BILL?\p"
	.string "Everyone calls him a POKéMANIAC!\p"
	.string "I think people are just jealous of\n"
	.string "BILL, though.\p"
	.string "Who wouldn't want to boast about\n"
	.string "their POKéMON?$"
#endif

CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons::
#if GERMAN
	.string "Bill besitzt viele Pokémon!\p"
	.string "Er hat einige sehr seltene in\n"
	.string "seiner Sammlung!$"
#else
	.string "BILL has lots of POKéMON!\n"
	.string "He collects rare ones, too!$"
#endif

CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs::
#if GERMAN
	.string "Warum gehst du nicht nach oben und\n"
	.string "tauschst Pokémon mit deinen\l"
	.string "Freunden?\l"
	.string "Dadurch erhöht sich die Vielfalt\l"
	.string "deiner Pokémon.\p"
	.string "Der Level der Pokémon, die du\n"
	.string "durch Tausch erhältst, steigt\l"
	.string "schnell.$"
#else
	.string "Why don't you go upstairs and try\n"
	.string "trading POKéMON with your friends?\p"
	.string "You could get a lot more variety\n"
	.string "by trading.\p"
	.string "The POKéMON you get in trades grow\n"
	.string "quickly, too.$"
#endif

