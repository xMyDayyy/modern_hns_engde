SilphCo_2F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_2F_OnLoad
	.byte 0

SilphCo_2F_OnLoad::
	call_if_unset FLAG_SILPH_2F_DOOR_1, EventScript_Close2FDoor1
	call_if_unset FLAG_SILPH_2F_DOOR_2, EventScript_Close2FDoor2
	end

SilphCo_2F_EventScript_ThunderWaveTutor::
	goto EventScript_ThunderWaveTutor
	end

SilphCo_2F_EventScript_FloorSign::
	msgbox SilphCo_2F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_2F_EventScript_Connor::
	trainerbattle_single TRAINER_SCIENTIST_CONNOR, SilphCo_2F_Text_ConnorIntro, SilphCo_2F_Text_ConnorDefeat
	msgbox SilphCo_2F_Text_ConnorPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_EventScript_Jerry::
	trainerbattle_single TRAINER_SCIENTIST_JERRY, SilphCo_2F_Text_JerryIntro, SilphCo_2F_Text_JerryDefeat
	msgbox SilphCo_2F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_23, SilphCo_2F_Text_Grunt1Intro, SilphCo_2F_Text_Grunt1Defeat
	msgbox SilphCo_2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_24, SilphCo_2F_Text_Grunt2Intro, SilphCo_2F_Text_Grunt2Defeat
	msgbox SilphCo_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_2F_Text_ConnorIntro::
#if GERMAN
	.string "Hilfe! Ich bin ein Mitarbeiter der\n"
	.string "Silph Co.!$"
#else
	.string "Help!\n"
	.string "I'm a SILPH employee.$"
#endif

SilphCo_2F_Text_ConnorDefeat::
#if GERMAN
	.string "Woher wusstest du, dass ich zum\n"
	.string "Team Rocket gehöre?$"
#else
	.string "How did you know\n"
	.string "I was a ROCKET?$"
#endif

SilphCo_2F_Text_ConnorPostBattle::
#if GERMAN
	.string "Ich bin ein Spion und infiltriere\n"
	.string "die Silph Co.!$"
#else
	.string "I work for both SILPH and TEAM\n"
	.string "ROCKET.$"
#endif

SilphCo_2F_Text_JerryIntro::
#if GERMAN
	.string "Hau ab!\n"
	.string "Du hast keinen Zutritt!$"
#else
	.string "It's off-limits here!\n"
	.string "Go home!$"
#endif

SilphCo_2F_Text_JerryDefeat::
#if GERMAN
	.string "Nicht schlecht, Herr Specht!$"
#else
	.string "You're good.$"
#endif

SilphCo_2F_Text_JerryPostBattle::
#if GERMAN
	.string "Aber findest du auch durch dieses\n"
	.string "Labyrinth?$"
#else
	.string "Can you solve the maze in here?\n"
	.string "It's not easy, I tell you!$"
#endif

SilphCo_2F_Text_Grunt1Intro::
#if GERMAN
	.string "Heh, du hast hier nichts verloren!$"
#else
	.string "No kids are allowed in here!$"
#endif

SilphCo_2F_Text_Grunt1Defeat::
#if GERMAN
	.string "Das ist hart! Verloren!$"
#else
	.string "Tough!$"
#endif

SilphCo_2F_Text_Grunt1PostBattle::
#if GERMAN
	.string "Die diamantförmigen Felder sind\n"
	.string "Teleporter!\p"
	.string "Eine Art Hi-Tech-Transportsystem!$"
#else
	.string "Diamond-shaped tiles are teleport\n"
	.string "blocks.\p"
	.string "They're transporters for this\n"
	.string "high-tech building.$"
#endif

SilphCo_2F_Text_Grunt2Intro::
#if GERMAN
	.string "Heh Balg!\n"
	.string "Was machst du hier?$"
#else
	.string "Hey, kid!\n"
	.string "What are you wandering here for?$"
#endif

SilphCo_2F_Text_Grunt2Defeat::
#if GERMAN
	.string "Ich bin ein Versager!$"
#else
	.string "I goofed!$"
#endif

SilphCo_2F_Text_Grunt2PostBattle::
#if GERMAN
	.string "Die Silph Co. und das Team Rocket\n"
	.string "werden demnächst fusionieren!$"
#else
	.string "SILPH CO. will be associated with\n"
	.string "TEAM ROCKET!$"
#endif

Text_ThunderWaveTeach::
#if GERMAN
	.string "Zu Hilfe! Nein!\n"
	.string "Bitte nicht!\p"
	.string "Du bist gar nicht vom Team Rocket!\n"
	.string "Ich dachte schon, es ginge zu Ende!\p"
	.string "Verzeihst du mir, wenn ich einem deiner\n"
	.string "Pokémon Donnerwelle beibringe?$"
#else
	.string "Eeek!\n"
	.string "No! Stop! Help!\p"
	.string "Oh, you're not with TEAM ROCKET.\n"
	.string "I'm sorry, I thought…\p"
	.string "Will you forgive me if I teach\n"
	.string "you the THUNDER WAVE technique?$"
#endif

Text_ThunderWaveDeclined::
#if GERMAN
	.string "Oh…\n"
	.string "Aber Donnerwelle ist praktisch…$"
#else
	.string "Oh…\n"
	.string "But THUNDER WAVE is convenient…$"
#endif

Text_ThunderWaveWhichMon::
#if GERMAN
	.string "Welches Pokémon soll\n"
	.string "Donnerwelle erlernen?$"
#else
	.string "Which POKéMON should I teach\n"
	.string "THUNDER WAVE?$"
#endif

Text_ThunderWaveTaught::
#if GERMAN
	.string "Donnerwelle verursacht\n"
	.string "Paralyse beim Gegner.\p"
	.string "Ein paralysiertes Pokémon kann\n"
	.string "sich im Kampf evtl. nicht bewegen.\p"
	.string "Da es eine Attacke der Elementklasse\n"
	.string "Elektro ist, funktioniert sie bei\l"
	.string "manchen Pokémon nicht.$"
#else
	.string "THUNDER WAVE causes paralysis in\n"
	.string "the target POKéMON.\p"
	.string "A paralyzed POKéMON may be unable\n"
	.string "to move in battle.\p"
	.string "It's an ELECTRIC-type move, so it\n"
	.string "won't work on some POKéMON.$"
#endif

SilphCo_2F_Text_FloorSign::
#if GERMAN
	.string "Silph Co. Hauptsitz\n"
	.string "1 Og$"
#else
	.string "SILPH CO. HEAD OFFICE\n"
	.string "2F$"
#endif

