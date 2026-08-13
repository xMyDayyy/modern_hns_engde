PacifidlogTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PacifidlogTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_PACIFIDLOG_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Girl::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Woman::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_OldMan::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard:
#if GERMAN
	.string "Welche Farbe hat dein Trainerpass?\n"
	.string "Meiner ist kupferrot.$"
#else
	.string "What color is your TRAINER CARD?\n"
	.string "Mine's copper!$"
#endif

PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola:
#if GERMAN
	.string "Flossbrunn schwimmt auf einer\n"
	.string "Kolonie von Corasonn.\p"
	.string "Glaubst du mir das?$"
#else
	.string "PACIFIDLOG TOWN floats on top of\n"
	.string "a colony of CORSOLA.\p"
	.string "If I told you that, would you believe\n"
	.string "me?$"
#endif

PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats:
#if GERMAN
	.string "Man sagt, die Vorfahren der Menschen in\n"
	.string "Flossbrunn wurden an Bord von Schiffen\l"
	.string "geboren, lebten und starben auch dort.\p"
	.string "Diese Lebensart ist verständlich, denn\n"
	.string "sie waren auf der Suche nach etwas.$"
#else
	.string "The ancestors of the people in\n"
	.string "PACIFIDLOG were said to have been\l"
	.string "born on boats and then lived and died \l"
	.string "aboard them.\p"
	.string "I understand that they lived that way\n"
	.string "because they were searching for\l"
	.string "something.$"
#endif

