SilphCo_5F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_5F_OnLoad
	.byte 0

SilphCo_5F_OnLoad::
	call_if_unset FLAG_SILPH_5F_DOOR_1, EventScript_Close5FDoor1
	call_if_unset FLAG_SILPH_5F_DOOR_2, EventScript_Close5FDoor2
	call_if_unset FLAG_SILPH_5F_DOOR_3, EventScript_Close5FDoor3
	end

SilphCo_5F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_5F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_5F_Text_RocketsInUproarAboutIntruder
	release
	end

SilphCo_5F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_5F_Text_YoureOurHeroThankYou
	release
	end

SilphCo_5F_EventScript_PokemonReport1::
	msgbox SilphCo_5F_Text_PorygonFirstVRMon, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_PokemonReport2::
	msgbox SilphCo_5F_Text_Over350TechniquesConfirmed, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_PokemonReport3::
	msgbox SilphCo_5F_Text_SomeMonsEvolveWhenTraded, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_FloorSign::
	msgbox SilphCo_5F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_Beau::
	trainerbattle_single TRAINER_SCIENTIST_BEAU, SilphCo_5F_Text_BeauIntro, SilphCo_5F_Text_BeauDefeat
	msgbox SilphCo_5F_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_28, SilphCo_5F_Text_Grunt1Intro, SilphCo_5F_Text_Grunt1Defeat
	msgbox SilphCo_5F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_29, SilphCo_5F_Text_Grunt2Intro, SilphCo_5F_Text_Grunt2Defeat
	msgbox SilphCo_5F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_EventScript_Dalton::
	trainerbattle_single TRAINER_JUGGLER_DALTON, SilphCo_5F_Text_DaltonIntro, SilphCo_5F_Text_DaltonDefeat
	msgbox SilphCo_5F_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_Text_RocketsInUproarAboutIntruder::
#if GERMAN
	.string "Ein Eindringling mischt das Team\n"
	.string "Rocket auf...  das bist du, oder?$"
#else
	.string "TEAM ROCKET is in an uproar over\n"
	.string "some intruder.\p"
	.string "That's you, right?$"
#endif

SilphCo_5F_Text_YoureOurHeroThankYou::
#if GERMAN
	.string "Das Team Rocket ist geflüchtet!\n"
	.string "Du bist ein Held!$"
#else
	.string "TEAM ROCKET took off!\n"
	.string "You're our hero! Thank you!$"
#endif

SilphCo_5F_Text_Grunt1Intro::
#if GERMAN
	.string "Ich hörte, ein Kind läuft im Gebäude\n"
	.string "herum...$"
#else
	.string "I heard a kid was wandering\n"
	.string "around.$"
#endif

SilphCo_5F_Text_Grunt1Defeat::
#if GERMAN
	.string "Schluss! Aus!$"
#else
	.string "Boom!$"
#endif

SilphCo_5F_Text_Grunt1PostBattle::
#if GERMAN
	.string "Es war sehr dumm, sich mit dem\n"
	.string "Team Rocket anzulegen!$"
#else
	.string "It's not smart to pick a fight with\n"
	.string "TEAM ROCKET!$"
#endif

SilphCo_5F_Text_BeauIntro::
#if GERMAN
	.string "Wir entwickeln in diesen Labors\n"
	.string "neue PokéBälle!$"
#else
	.string "We study POKé BALL technology on\n"
	.string "this floor.$"
#endif

SilphCo_5F_Text_BeauDefeat::
#if GERMAN
	.string "Finito!\n"
	.string "Aus und vorbei!$"
#else
	.string "Dang!\n"
	.string "Blast it!$"
#endif

SilphCo_5F_Text_BeauPostBattle::
#if GERMAN
	.string "Unsere neueste Entwicklung ist ein\n"
	.string "Pokéball, der alles fängt!$"
#else
	.string "We worked on the ultimate POKé\n"
	.string "BALL which would catch anything.$"
#endif

SilphCo_5F_Text_DaltonIntro::
#if GERMAN
	.string "Waaas?\p"
	.string "Wer hat denn das Kind reingelassen?$"
#else
	.string "Whaaat?\p"
	.string "There shouldn't be any children\n"
	.string "here!$"
#endif

SilphCo_5F_Text_DaltonDefeat::
#if GERMAN
	.string "Nein!\n"
	.string "Das Kind hat mich besiegt!$"
#else
	.string "Oh, goodness!$"
#endif

SilphCo_5F_Text_DaltonPostBattle::
#if GERMAN
	.string "Es ist ein weiter Weg zum Boss! Du\n"
	.string "bist hier erst im 4. Stock!$"
#else
	.string "You're only on 5F.\n"
	.string "It's a long way to my BOSS!$"
#endif

SilphCo_5F_Text_Grunt2Intro::
#if GERMAN
	.string "Zolle dem Team Rocket gefälligst\n"
	.string "mehr Respekt!!!$"
#else
	.string "Show TEAM ROCKET a little respect!$"
#endif

SilphCo_5F_Text_Grunt2Defeat::
#if GERMAN
	.string "Hust...\n"
	.string "Hust...$"
#else
	.string "Cough…\n"
	.string "Cough…$"
#endif

SilphCo_5F_Text_Grunt2PostBattle::
#if GERMAN
	.string "Da fällt mir ein, Smogon entwickelt\n"
	.string "sich zu Smogmog!$"
#else
	.string "Which reminds me.\p"
	.string "KOFFING evolves into WEEZING!$"
#endif

SilphCo_5F_Text_PorygonFirstVRMon::
#if GERMAN
	.string "Ein Artikel über Pokémon!\p"
	.string "Porygon! Pokémon-Labor Erzeugt\n"
	.string "Virtuelles Pokémon!$"
#else
	.string "It's a POKéMON REPORT!\p"
	.string "POKéMON LAB created PORYGON,\n"
	.string "the first virtual-reality POKéMON.$"
#endif

SilphCo_5F_Text_Over350TechniquesConfirmed::
#if GERMAN
	.string "Eine Studie über Pokémon!\p"
	.string "Es gibt mehr als 350 Pokémon-\n"
	.string "Kampftechniken!$"
#else
	.string "It's a POKéMON REPORT!\p"
	.string "Over 350 POKéMON techniques have\n"
	.string "been confirmed.$"
#endif

SilphCo_5F_Text_SomeMonsEvolveWhenTraded::
#if GERMAN
	.string "Ein Pokémon-Bericht!\p"
	.string "Einige Pokémon entwickeln sich\n"
	.string "erst beim Tausch.$"
#else
	.string "It's a POKéMON REPORT!\p"
	.string "Some POKéMON have been confirmed\n"
	.string "to evolve when they are traded.$"
#endif

SilphCo_5F_Text_FloorSign::
#if GERMAN
	.string "Silph Co. Hauptsitz\n"
	.string "4 Og$"
#else
	.string "SILPH CO. HEAD OFFICE\n"
	.string "5F$"
#endif

SilphCo_5F_Text_RocketBossLookingForStrongMons::
#if GERMAN
	.string "Diese Rüpel haben die Kontrolle in\n"
	.string "diesem Gebäude übernommen…\p"
	.string "Der Boss sagte, dass er nach starken\n"
	.string "Pokémon sucht.\p"
	.string "Ich hoffe, dass unser Präsident\n"
	.string "Ärger vermeiden konnte…$"
#else
	.string "Those thugs that took over our\n"
	.string "building…\p"
	.string "Their BOSS said he was looking for\n"
	.string "strong POKéMON.\p"
	.string "I hope our PRESIDENT managed to\n"
	.string "avoid trouble…$"
#endif
