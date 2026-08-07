ThreeIsland_House5_Frlg_MapScripts::
	.byte 0

ThreeIsland_House5_EventScript_LittleGirl::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_House5_EventScript_LittleGirlLostelleFound
	msgbox ThreeIsland_House5_Text_ImNotLostelle
	release
	end

ThreeIsland_House5_EventScript_LittleGirlLostelleFound::
	msgbox ThreeIsland_House5_Text_IllGoPlayWithLostelle
	release
	end

ThreeIsland_House5_Text_ImNotLostelle::
#if GERMAN
	.string "Ich?\n"
	.string "Ich bin nicht Irrma!\p"
	.string "Sie ist vermutlich im Beerenforst!\p"
	.string "Sie sammelt dort Beeren, um\n"
	.string "das Mittagessen zuzubereiten!$"
#else
	.string "Me?\n"
	.string "I'm not LOSTELLE.\p"
	.string "She's probably gone to the\n"
	.string "BERRY FOREST, I think.\p"
	.string "She picks BERRIES there for making\n"
	.string "lunch.$"
#endif

ThreeIsland_House5_Text_IllGoPlayWithLostelle::
#if GERMAN
	.string "Ich werde heute mit Irrma spielen!$"
#else
	.string "I think I'll go play with LOSTELLE\n"
	.string "today.$"
#endif

