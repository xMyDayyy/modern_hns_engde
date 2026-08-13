SeafloorCavern_Room1_MapScripts::
	.byte 0

SeafloorCavern_Room1_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, SeafloorCavern_Room1_Text_Grunt1Intro, SeafloorCavern_Room1_Text_Grunt1Defeat
	msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room1_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, SeafloorCavern_Room1_Text_Grunt2Intro, SeafloorCavern_Room1_Text_Grunt2Defeat
	msgbox SeafloorCavern_Room1_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room1_Text_Grunt1Intro:
#if GERMAN
	.string "Wir können hier keine Kinder\n"
	.string "gebrauchen! Geh nach Hause! Sofort!$"
#else
	.string "We don't need a kid around!\n"
	.string "Go on home already!$"
#endif

SeafloorCavern_Room1_Text_Grunt1Defeat:
#if GERMAN
	.string "Ich will nach Hause zu meiner Mami…$"
#else
	.string "I want to go home…$"
#endif

SeafloorCavern_Room1_Text_Grunt1PostBattle:
#if GERMAN
	.string "Ich möchte befördert werden, dann kann\n"
	.string "ich all die Rüpel herumkommandieren!$"
#else
	.string "I want to get a promotion so I can\n"
	.string "boss around the GRUNTS…$"
#endif

SeafloorCavern_Room1_Text_Grunt2Intro:
#if GERMAN
	.string "Dieses U-boot… Es ist sehr eng.\n"
	.string "Ich habe deshalb überall blaue\l"
	.string "Flecken.$"
#else
	.string "That submarine… It's tiny inside.\n"
	.string "I'm sore all over!$"
#endif

SeafloorCavern_Room1_Text_Grunt2Defeat:
#if GERMAN
	.string "Verlieren verursacht bei mir\n"
	.string "Muskelkater!$"
#else
	.string "Losing makes me sore!$"
#endif

SeafloorCavern_Room1_Text_Grunt2PostBattle:
#if GERMAN
	.string "Das U-boot, das wir aufgetrieben\n"
	.string "haben,\l"
	.string "ist fürchterlich eng. Brutal eng, sage\l"
	.string "ich. Man stößt sich überall den Kopf.$"
#else
	.string "That submarine we jacked, man,\n"
	.string "it's brutal as a ride.\l"
	.string "It's way too tight in there!$"
#endif

