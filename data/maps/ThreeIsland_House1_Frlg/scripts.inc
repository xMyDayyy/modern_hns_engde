ThreeIsland_House1_Frlg_MapScripts::
	.byte 0

ThreeIsland_House1_EventScript_Lostelle::
	lock
	faceplayer
	special GetPlayerBigGuyGirlString
	msgbox ThreeIsland_House1_Text_YoureAlwaysSoCool
	release
	end

ThreeIsland_House1_EventScript_DisplayCase::
	msgbox ThreeIsland_House1_Text_RareRocksGemsDisplayed, MSGBOX_SIGN
	end

ThreeIsland_House1_Text_YoureAlwaysSoCool::
#if GERMAN
	.string "Irrma: Hallo, {PLAYER}!\n"
	.string "Du bist immer so cool!\p"
	.string "Ich mache eines Tages auch\n"
	.string "Mittagessen für dich, {PLAYER}!$"
#else
	.string "LOSTELLE: Hi, {PLAYER}!\n"
	.string "You're always so cool!\p"
	.string "I'll make lunch for you, too, one\n"
	.string "day, {PLAYER}.$"
#endif

ThreeIsland_House1_Text_RareRocksGemsDisplayed::
#if GERMAN
	.string "Seltene Edelsteine werden hier\n"
	.string "ausgestellt!$"
#else
	.string "Rare rocks and gems are displayed.$"
#endif

