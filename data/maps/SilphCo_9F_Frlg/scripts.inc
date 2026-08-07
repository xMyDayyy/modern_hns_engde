SilphCo_9F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_9F_OnLoad
	.byte 0

SilphCo_9F_OnLoad::
	call_if_unset FLAG_SILPH_9F_DOOR_1, EventScript_Close9FDoor1
	call_if_unset FLAG_SILPH_9F_DOOR_2, EventScript_Close9FDoor2
	call_if_unset FLAG_SILPH_9F_DOOR_3, EventScript_Close9FDoor3
	call_if_unset FLAG_SILPH_9F_DOOR_4, EventScript_Close9FDoor4
	end

SilphCo_9F_EventScript_HealWoman::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_9F_EventScript_HealWomanRocketsGone
	msgbox SilphCo_9F_Text_YouShouldTakeQuickNap
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox SilphCo_9F_Text_DontGiveUp
	release
	end

SilphCo_9F_EventScript_HealWomanRocketsGone::
	msgbox SilphCo_9F_Text_ThankYouSoMuch
	release
	end

SilphCo_9F_EventScript_FloorSign::
	msgbox SilphCo_9F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_9F_EventScript_Ed::
	trainerbattle_single TRAINER_SCIENTIST_ED, SilphCo_9F_Text_EdIntro, SilphCo_9F_Text_EdDefeat
	msgbox SilphCo_9F_Text_EdPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_9F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_37, SilphCo_9F_Text_Grunt1Intro, SilphCo_9F_Text_Grunt1Defeat
	msgbox SilphCo_9F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_9F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_38, SilphCo_9F_Text_Grunt2Intro, SilphCo_9F_Text_Grunt2Defeat
	msgbox SilphCo_9F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_9F_Text_YouShouldTakeQuickNap::
#if GERMAN
	.string "Du siehst müde aus!\n"
	.string "Komm, ruhe dich kurz aus!$"
#else
	.string "You look tired.\n"
	.string "You should take a quick nap.$"
#endif

SilphCo_9F_Text_DontGiveUp::
#if GERMAN
	.string "Gib nicht auf!$"
#else
	.string "Don't give up!$"
#endif

SilphCo_9F_Text_ThankYouSoMuch::
#if GERMAN
	.string "Vielen, vielen Dank!$"
#else
	.string "Thank you so much.$"
#endif

SilphCo_9F_Text_Grunt1Intro::
#if GERMAN
	.string "Deine Pokémon scheinen dich sehr\n"
	.string "zu mögen!$"
#else
	.string "Your POKéMON seem to adore you,\n"
	.string "kid!$"
#endif

SilphCo_9F_Text_Grunt1Defeat::
#if GERMAN
	.string "Waaah!$"
#else
	.string "Ghaaah!$"
#endif

SilphCo_9F_Text_Grunt1PostBattle::
#if GERMAN
	.string "Hätte ich doch auch schon in\n"
	.string "deinem Alter als Trainer begonnen!$"
#else
	.string "If I had started as a TRAINER at\n"
	.string "your age…$"
#endif

SilphCo_9F_Text_EdIntro::
#if GERMAN
	.string "Ich finde die Schwachstellen\n"
	.string "deiner Pokémon und besiege sie!$"
#else
	.string "Your POKéMON have weak points!\n"
	.string "I can nail them!$"
#endif

SilphCo_9F_Text_EdDefeat::
#if GERMAN
	.string "Du hast mich besiegt!$"
#else
	.string "You hammered me!$"
#endif

SilphCo_9F_Text_EdPostBattle::
#if GERMAN
	.string "Mach dir die Schwachstellen zu\n"
	.string "Nutze! Denke an die Elementklassen!$"
#else
	.string "Exploiting weak spots does work.\n"
	.string "Think about type advantages.$"
#endif

SilphCo_9F_Text_Grunt2Intro::
#if GERMAN
	.string "Ich bin einer der vier berüchtigten\n"
	.string "Rocket-brüder!$"
#else
	.string "I am one of the four ROCKET\n"
	.string "BROTHERS!$"
#endif

SilphCo_9F_Text_Grunt2Defeat::
#if GERMAN
	.string "Oje!\n"
	.string "Ich wurde besiegt!$"
#else
	.string "Warg!\n"
	.string "Brothers, I lost!$"
#endif

SilphCo_9F_Text_Grunt2PostBattle::
#if GERMAN
	.string "Aber meine Brüder rächen mich!$"
#else
	.string "My brothers will avenge me!$"
#endif

SilphCo_9F_Text_FloorSign::
#if GERMAN
	.string "Silph Co. Hauptsitz\n"
	.string "8 Og$"
#else
	.string "SILPH CO. HEAD OFFICE\n"
	.string "9F$"
#endif

