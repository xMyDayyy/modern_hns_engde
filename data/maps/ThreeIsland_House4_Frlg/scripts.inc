ThreeIsland_House4_Frlg_MapScripts::
	.byte 0

ThreeIsland_House4_EventScript_BaldingMan::
	msgbox ThreeIsland_House4_Text_GhostsInBerryForest, MSGBOX_NPC
	end

ThreeIsland_House4_EventScript_LittleBoy::
	msgbox ThreeIsland_House4_Text_PapaKeepsLyingToMe, MSGBOX_NPC
	end

ThreeIsland_House4_Text_GhostsInBerryForest::
#if GERMAN
	.string "Du solltest nie alleine in den\n"
	.string "Beerenforst gehen!\p"
	.string "Warum?\n"
	.string "Es spukt dort!$"
#else
	.string "You must never, ever go out to\n"
	.string "the BERRY FOREST alone.\p"
	.string "Why?\n"
	.string "There are ghosts there.$"
#endif

ThreeIsland_House4_Text_PapaKeepsLyingToMe::
#if GERMAN
	.string "Papa lügt mich ständig an und\n"
	.string "lässt mich nicht hinaus zum\l"
	.string "Spielen!$"
#else
	.string "Papa keeps lying to me, and won't\n"
	.string "let me go out and play!$"
#endif

