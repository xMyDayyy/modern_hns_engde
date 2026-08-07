Route110_TrickHousePuzzle8_MapScripts::
	.byte 0

Route110_TrickHousePuzzle8_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0, Route110_TrickHousePuzzle8_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle8_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle8_EventScript_Vincent::
	trainerbattle_single TRAINER_VINCENT, Route110_TrickHousePuzzle8_Text_VincentIntro, Route110_TrickHousePuzzle8_Text_VincentDefeat
	msgbox Route110_TrickHousePuzzle8_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_Keira::
	trainerbattle_single TRAINER_KEIRA, Route110_TrickHousePuzzle8_Text_KeiraIntro, Route110_TrickHousePuzzle8_Text_KeiraDefeat
	msgbox Route110_TrickHousePuzzle8_Text_KeiraPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_Leroy::
	trainerbattle_single TRAINER_LEROY, Route110_TrickHousePuzzle8_Text_LeroyIntro, Route110_TrickHousePuzzle8_Text_LeroyDefeat
	msgbox Route110_TrickHousePuzzle8_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened::
#if GERMAN
	.string "{PLAYER} hat den geheimen Code auf die\n"
	.string "Tür geschrieben.\p"
	.string "“Ich liebe den Rätselmeister.”\n"
	.string "… … … … … … … …\p"
	.string "Das Schloss geht klickend auf.$"
#else
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER I love.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"
#endif

Route110_TrickHousePuzzle8_Text_VincentIntro:
#if GERMAN
	.string "Nicht viele Trainer haben es bis\n"
	.string "hierher geschafft.$"
#else
	.string "Not many TRAINERS have made it\n"
	.string "this far.$"
#endif

Route110_TrickHousePuzzle8_Text_VincentDefeat:
#if GERMAN
	.string "Das bedeutet, dass du sehr stark bist…$"
#else
	.string "That must mean you're tough, too…$"
#endif

Route110_TrickHousePuzzle8_Text_VincentPostBattle:
#if GERMAN
	.string "Du hast den Champ der Pokémon Liga\n"
	.string "besiegt? Das ist zu viel für mich!$"
#else
	.string "You've beaten the POKéMON LEAGUE\n"
	.string "CHAMPION? That's too much!$"
#endif

Route110_TrickHousePuzzle8_Text_KeiraIntro:
#if GERMAN
	.string "Sieh es als Glücksfall an, dass du\n"
	.string "gegen mich antreten darfst.$"
#else
	.string "Consider yourself lucky to be\n"
	.string "battling me!$"
#endif

Route110_TrickHousePuzzle8_Text_KeiraDefeat:
#if GERMAN
	.string "Das ist nicht korrekt!\n"
	.string "Ich darf nicht verlieren!$"
#else
	.string "This isn't right!\n"
	.string "I can't lose!$"
#endif

Route110_TrickHousePuzzle8_Text_KeiraPostBattle:
#if GERMAN
	.string "Nur ein Wunder hat dir zu diesem Sieg\n"
	.string "verholfen. Prahl doch damit…$"
#else
	.string "It's a miracle that you beat me.\n"
	.string "You can brag about it.$"
#endif

Route110_TrickHousePuzzle8_Text_LeroyIntro:
#if GERMAN
	.string "Du schleichst hier auch durch das\n"
	.string "Rätselhaus?$"
#else
	.string "You've been slugging through the TRICK\n"
	.string "HOUSE challenge, too.$"
#endif

Route110_TrickHousePuzzle8_Text_LeroyDefeat:
#if GERMAN
	.string "Ich verstehe…\n"
	.string "Du hast einen außergewöhnlichen Stil.$"
#else
	.string "I see…\n"
	.string "You possess an extraordinary style.$"
#endif

Route110_TrickHousePuzzle8_Text_LeroyPostBattle:
#if GERMAN
	.string "Dein Anblick wird den Rätselmeister\n"
	.string "bestimmt erfreuen.$"
#else
	.string "Seeing someone like you should please\n"
	.string "the TRICK MASTER.$"
#endif

