OldaleTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OldaleTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OLDALE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

OldaleTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Boy::
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
#if GERMAN
	.string "In Hoenn gibt es Wettbewerbe, bei\n"
	.string "denen nicht gekämpft wird.\p"
	.string "Da zählt nur, wie schön ein Pokémon\n"
	.string "sich zeigt.$"
#else
	.string "In HOENN there are CONTESTS where\n"
	.string "nobody battles at all.\p"
	.string "All that counts is how well a POKéMON\n"
	.string "shows itself off.$"
#endif

OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
#if GERMAN
	.string "Die Schwester hier hat schon meiner\n"
	.string "Mutter die Pokémon geheilt.\p"
	.string "Und die war damals in meinem Alter.$"
#else
	.string "The nurse here used to heal my\n"
	.string "mother's POKéMON.\p"
	.string "And back then she was my age.$"
#endif

OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
#if GERMAN
	.string "Der Pokémon Drahtlosklub im zweiten\n"
	.string "Stock wurde erst kürzlich eröffnet.\p"
	.string "Und sie sind immer noch nicht ganz\n"
	.string "fertig mit dem Einrichten.$"
#else
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "But they say they're still making\n"
	.string "adjustments.$"
#endif

OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
#if GERMAN
	.string "Der Pokémon Drahtlosklub im zweiten\n"
	.string "Stock wurde erst kürzlich eröffnet.\p"
	.string "Ich habe schon Pokémon getauscht!$"
#else
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "I traded POKéMON right away.$"
#endif

