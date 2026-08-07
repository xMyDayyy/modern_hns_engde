SilphCo_10F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_10F_OnLoad
	.byte 0

SilphCo_10F_OnLoad::
	call_if_unset FLAG_SILPH_10F_DOOR, EventScript_Close10FDoor
	end

SilphCo_10F_EventScript_WorkerF::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_10F_EventScript_WorkerFRocketsGone
	msgbox SilphCo_10F_Text_WaaaImScared
	release
	end

SilphCo_10F_EventScript_WorkerFRocketsGone::
	msgbox SilphCo_10F_Text_KeepMeCryingASecret
	release
	end

SilphCo_10F_EventScript_FloorSign::
	msgbox SilphCo_10F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_10F_EventScript_Travis::
	trainerbattle_single TRAINER_SCIENTIST_TRAVIS, SilphCo_10F_Text_TravisIntro, SilphCo_10F_Text_TravisDefeat
	msgbox SilphCo_10F_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_10F_EventScript_Grunt::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_39, SilphCo_10F_Text_GruntIntro, SilphCo_10F_Text_GruntDefeat
	msgbox SilphCo_10F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_10F_Text_GruntIntro::
#if GERMAN
	.string "Willkommen im 9. Stock! Es ist\n"
	.string "nett, dass du vorbeischaust!$"
#else
	.string "Welcome to 10F!\n"
	.string "So good of you to join me!$"
#endif

SilphCo_10F_Text_GruntDefeat::
#if GERMAN
	.string "Ich bin geschockt!$"
#else
	.string "I'm stunned!$"
#endif

SilphCo_10F_Text_GruntPostBattle::
#if GERMAN
	.string "Netter Versuch!\n"
	.string "Der Sitzungssaal befindet sich aber\l"
	.string "noch ein Stockwerk höher!$"
#else
	.string "Nice try, but the boardroom is up\n"
	.string "one more floor.$"
#endif

SilphCo_10F_Text_TravisIntro::
#if GERMAN
	.string "Genug von deinen dummen Spielchen!$"
#else
	.string "Enough of your silly games!$"
#endif

SilphCo_10F_Text_TravisDefeat::
#if GERMAN
	.string "Meine Reserven sind erschöpft!$"
#else
	.string "No continues left!$"
#endif

SilphCo_10F_Text_TravisPostBattle::
#if GERMAN
	.string "Freut es dich, mich besiegt zu\n"
	.string "haben? Mann, hau endlich ab!$"
#else
	.string "Are you satisfied with beating me?\n"
	.string "Then go on home!$"
#endif

SilphCo_10F_Text_WaaaImScared::
#if GERMAN
	.string "Hilfe!\n"
	.string "Ich habe Angst!$"
#else
	.string "Waaaaa!\n"
	.string "I'm scared!$"
#endif

SilphCo_10F_Text_KeepMeCryingASecret::
#if GERMAN
	.string "Verrate bitte niemandem, dass ich\n"
	.string "geweint habe!$"
#else
	.string "About me crying…\n"
	.string "Please keep it a secret.$"
#endif

SilphCo_10F_Text_FloorSign::
#if GERMAN
	.string "Silph Co. Hauptsitz\n"
	.string "9 Og$"
#else
	.string "SILPH CO. HEAD OFFICE\n"
	.string "10F$"
#endif

