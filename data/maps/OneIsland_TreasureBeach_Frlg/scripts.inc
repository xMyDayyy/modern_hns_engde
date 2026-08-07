OneIsland_TreasureBeach_Frlg_MapScripts::
	.byte 0

OneIsland_TreasureBeach_EventScript_Boy::
	msgbox OneIsland_TreasureBeach_Text_GoodThingsWashUpOnBeach, MSGBOX_NPC
	end

OneIsland_TreasureBeach_Text_AmaraIntro::
#if GERMAN
	.string "Sich zurücklehnen und von den\n"
	.string "Wellen treiben lassen…\l"
	.string "Das ist wunderbar!$"
#else
	.string "Lying back, rocked by the waves…\n"
	.string "It's exquisite.$"
#endif

OneIsland_TreasureBeach_Text_AmaraDefeat::
#if GERMAN
	.string "Ich habe verloren…\n"
	.string "Es tut so weh!$"
#else
	.string "I lost…\n"
	.string "It feels awful.$"
#endif

OneIsland_TreasureBeach_Text_AmaraPostBattle::
#if GERMAN
	.string "Das Wasser ist hier angenehm\n"
	.string "warm.$"
#else
	.string "The sea is pleasantly warm in these\n"
	.string "parts.$"
#endif

OneIsland_TreasureBeach_Text_GoodThingsWashUpOnBeach::
#if GERMAN
	.string "Die Strömung spült einige brauch-\n"
	.string "bare Dinge hier an den Strand.\p"
	.string "Daher durchkämme ich den Strand\n"
	.string "hier regelmäßig.$"
#else
	.string "Good things get washed up by the\n"
	.string "ocean current onto this beach.\p"
	.string "That's why I often come here for\n"
	.string "some beachcombing.$"
#endif

