Route110_TrickHousePuzzle6_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle6_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHousePuzzle6_OnWarp
	.byte 0

Route110_TrickHousePuzzle6_OnTransition:
	special RotatingGate_InitPuzzle
	end

Route110_TrickHousePuzzle6_OnWarp:
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, Route110_TrickHousePuzzle6_EventScript_InitPuzzle
	.2byte 0

@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_5
Route110_TrickHousePuzzle6_EventScript_InitPuzzle::
	special RotatingGate_InitPuzzleAndGraphics
	end

Route110_TrickHousePuzzle6_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0, Route110_TrickHousePuzzle6_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle6_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle6_EventScript_Sophia::
	trainerbattle_single TRAINER_SOPHIA, Route110_TrickHousePuzzle6_Text_SophiaIntro, Route110_TrickHousePuzzle6_Text_SophiaDefeat
	msgbox Route110_TrickHousePuzzle6_Text_SophiaPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_EventScript_Benny::
	trainerbattle_single TRAINER_BENNY, Route110_TrickHousePuzzle6_Text_BennyIntro, Route110_TrickHousePuzzle6_Text_BennyDefeat
	msgbox Route110_TrickHousePuzzle6_Text_BennyPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_EventScript_Sebastian::
	trainerbattle_single TRAINER_SEBASTIAN, Route110_TrickHousePuzzle6_Text_SebastianIntro, Route110_TrickHousePuzzle6_Text_SebastianDefeat
	msgbox Route110_TrickHousePuzzle6_Text_SebastianPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened:
#if GERMAN
	.string "{PLAYER} hat den geheimen Code auf die\n"
	.string "Tür geschrieben.\p"
	.string "“Rätselmeister ist mein Leben.”\n"
	.string "… … … … … … … …\p"
	.string "Das Schloss geht klickend auf.$"
#else
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is my life.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"
#endif

Route110_TrickHousePuzzle6_Text_SophiaIntro:
#if GERMAN
	.string "Als ich von dem seltsamen Haus hörte,\n"
	.string "musste ich mir das sofort ansehen.$"
#else
	.string "When I heard there was a strange\n"
	.string "house, I had to check it out.$"
#endif

Route110_TrickHousePuzzle6_Text_SophiaDefeat:
#if GERMAN
	.string "Ich habe einen starken Trainer\n"
	.string "entdeckt!$"
#else
	.string "I've discovered a tough TRAINER!$"
#endif

Route110_TrickHousePuzzle6_Text_SophiaPostBattle:
#if GERMAN
	.string "Es hat viel Spaß gemacht, diesen Ort\n"
	.string "zu erforschen.\p"
	.string "Eine Herausforderung, die ich gerne\n"
	.string "wiederholen möchte!$"
#else
	.string "I'm sure having a good time checking\n"
	.string "this place out.\p"
	.string "It's a challenge I've found worth\n"
	.string "repeating!$"
#endif

Route110_TrickHousePuzzle6_Text_BennyIntro:
#if GERMAN
	.string "Vielleicht kann mein Vogel-Pokémon\n"
	.string "über die Mauer fliegen…$"
#else
	.string "Maybe I could get my BIRD POKéMON\n"
	.string "to fly over the wall…$"
#endif

Route110_TrickHousePuzzle6_Text_BennyDefeat:
#if GERMAN
	.string "Uaah! Ich hab’s vermasselt!$"
#else
	.string "Gwaaah! I blew it!$"
#endif

Route110_TrickHousePuzzle6_Text_BennyPostBattle:
#if GERMAN
	.string "Hihihihi… Ich habe doch nur verloren,\n"
	.string "weil ich bescheißen wollte.$"
#else
	.string "Ehehehe… I guess I lost because\n"
	.string "I was trying to cheat.$"
#endif

Route110_TrickHousePuzzle6_Text_SebastianIntro:
#if GERMAN
	.string "Mir wird ganz schwindelig von diesen\n"
	.string "rotierenden Türen… Huuh…$"
#else
	.string "I'm getting dizzy from these rotating\n"
	.string "doors…$"
#endif

Route110_TrickHousePuzzle6_Text_SebastianDefeat:
#if GERMAN
	.string "Bei mir dreht sich alles. Mir wird\n"
	.string "übel. Ich kann nicht mehr…$"
#else
	.string "Everything's spinning around and\n"
	.string "around. I can't take this anymore…$"
#endif

Route110_TrickHousePuzzle6_Text_SebastianPostBattle:
#if GERMAN
	.string "Dir scheint das gar nichts auszumachen.\n"
	.string "Oder ist das nur Show?$"
#else
	.string "You don't seem to be affected at all.\n"
	.string "Or do you have your poker face on?$"
#endif

