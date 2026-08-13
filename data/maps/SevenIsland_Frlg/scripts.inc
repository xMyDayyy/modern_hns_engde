SevenIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_OnTransition
	.byte 0

SevenIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND
	end

SevenIsland_EventScript_IslandSign::
	msgbox SevenIsland_Text_IslandSign, MSGBOX_SIGN
	end

SevenIsland_EventScript_OldWoman::
	msgbox SevenIsland_Text_IslandsMadeInSevenDays, MSGBOX_NPC
	end

SevenIsland_EventScript_Scientist::
	msgbox SevenIsland_Text_IslandVirtuallyUntouched, MSGBOX_NPC
	end

Text_SwordsDanceTeach::
#if GERMAN
	.string "Nicht viele Leute kommen hier raus.\p"
	.string "Ich bin überzeugt, dass mich mein\n"
	.string "Training hier immer stärker werden\l"
	.string "lässt.\l"
	.string "Jawohl, immer stärker…\p"
	.string "Möchtest du eine solche Attacke\n"
	.string "lernen? Sie heißt Schwerttanz!$"
#else
	.string "Not many people come out here.\p"
	.string "If I train here, I'm convinced that\n"
	.string "I'll get stronger and stronger.\p"
	.string "Yep, stronger and stronger…\p"
	.string "How would you like to learn a move\n"
	.string "like that? It's SWORDS DANCE.$"
#endif

Text_SwordsDanceDeclined::
#if GERMAN
	.string "Nun, das ist auch gut!$"
#else
	.string "Well, that's fine, too.$"
#endif

Text_SwordsDanceWhichMon::
#if GERMAN
	.string "In Ordnung, welchem Pokémon soll ich die\n"
	.string "Attacke beibringen?$"
#else
	.string "All right, pick which POKéMON\n"
	.string "I should teach it to.$"
#endif

Text_SwordsDanceTaught::
#if GERMAN
	.string "Wenn wir doch auch immer stärker werden\n"
	.string "könnten!$"
#else
	.string "If only we could keep getting\n"
	.string "stronger and stronger, eh?$"
#endif

SevenIsland_Text_IslandSign::
#if GERMAN
	.string "Eiland Sieben\n"
	.string "Die Abenteuerinsel der Unendlichkeit$"
#else
	.string "SEVEN ISLAND\n"
	.string "Quest Island of Infinity$"
#endif

SevenIsland_Text_IslandsMadeInSevenDays::
#if GERMAN
	.string "Diese Eilande werden Sevii Eiland\n"
	.string "genannt, weil es sieben sind.\p"
	.string "… das glauben zumindest die jungen\n"
	.string "Leute.\p"
	.string "Die Wahrheit ist, dass die Eilande so\n"
	.string "heißen, weil sie in sieben Tagen\l"
	.string "geschaffen wurden.$"
#else
	.string "These islands are called the SEVII\n"
	.string "ISLANDS because there are seven.\p"
	.string "…Or at least that's what the young\n"
	.string "people believe.\p"
	.string "The truth is, these islands are so\n"
	.string "named because they are said to\l"
	.string "have been made in seven days.$"
#endif

SevenIsland_Text_IslandVirtuallyUntouched::
#if GERMAN
	.string "Die Natur dieser Insel blieb nahezu\n"
	.string "unangetastet.\p"
	.string "Daher könnte das Wandern hier\n"
	.string "schwierig sein.$"
#else
	.string "This island has been left virtually\n"
	.string "untouched in its natural state.\p"
	.string "It could be a little difficult to\n"
	.string "hike around because of that.$"
#endif

