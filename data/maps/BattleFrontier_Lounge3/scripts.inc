BattleFrontier_Lounge3_MapScripts::
	.byte 0

	.set BET_AMOUNT_5,  5
	.set BET_AMOUNT_10, 10
	.set BET_AMOUNT_15, 15

BattleFrontier_Lounge3_EventScript_Gambler::
	lock
	faceplayer
	goto_if_set FLAG_MET_BATTLE_FRONTIER_GAMBLER, BattleFrontier_Lounge3_EventScript_AlreadyMetGambler
	call BattleFrontier_Lounge3_EventScript_CountSilverSymbols
	goto_if_le VAR_0x8004, 2, BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols
	setflag FLAG_MET_BATTLE_FRONTIER_GAMBLER
	msgbox BattleFrontier_Lounge3_Text_YouLookToughExplainGambling, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
	end

BattleFrontier_Lounge3_EventScript_AskToEnterChallenge::
	special ShowFrontierGamblerLookingMessage
	waitmessage
	waitbuttonpress
	msgbox BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge
	msgbox BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
	waitmessage
	special ShowBattlePointsWindow
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
	end

BattleFrontier_Lounge3_EventScript_ChooseBetAmount::
	multichoice 20, 4, MULTI_FRONTIER_GAMBLER_BET, FALSE
	copyvar VAR_FRONTIER_GAMBLER_AMOUNT_BET, VAR_RESULT
	switch VAR_RESULT
	case FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_Bet5
	case FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_Bet10
	case FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_Bet15
	case FRONTIER_GAMBLER_BET_CANCEL, BattleFrontier_Lounge3_EventScript_CancelBet
	case MULTI_B_PRESSED, BattleFrontier_Lounge3_EventScript_CancelBet
	end

BattleFrontier_Lounge3_EventScript_Bet5::
	setvar VAR_0x8008, BET_AMOUNT_5
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
	end

BattleFrontier_Lounge3_EventScript_Bet10::
	setvar VAR_0x8008, BET_AMOUNT_10
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
	end

BattleFrontier_Lounge3_EventScript_Bet15::
	setvar VAR_0x8008, BET_AMOUNT_15
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
	end

BattleFrontier_Lounge3_EventScript_TryPlaceBet::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge3_EventScript_PlaceBet
	msgbox BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints, MSGBOX_DEFAULT
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
	waitmessage
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
	end

BattleFrontier_Lounge3_EventScript_PlaceBet::
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleFrontier_Lounge3_Text_ThanksOffYouGo, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FinishBet
	end

BattleFrontier_Lounge3_EventScript_FinishBet::
	special ShowFrontierGamblerGoMessage
	waitmessage
	waitbuttonpress
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_Lounge3_EventScript_CountSilverSymbols::
	setvar VAR_0x8004, 0
	call_if_set FLAG_SYS_TOWER_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_DOME_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_PALACE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_ARENA_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_FACTORY_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_PIKE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	call_if_set FLAG_SYS_PYRAMID_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
	return

BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount::
	addvar VAR_0x8004, 1
	return

BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols::
	msgbox BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end

BattleFrontier_Lounge3_EventScript_AlreadyMetGambler::
	msgbox BattleFrontier_Lounge3_Text_Oh, MSGBOX_DEFAULT
	goto_if_ge VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_CheckBetResults
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
	end

BattleFrontier_Lounge3_EventScript_CheckBetResults::
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WON, BattleFrontier_Lounge3_EventScript_WonChallenge
	goto BattleFrontier_Lounge3_EventScript_LostChallenge
	end

BattleFrontier_Lounge3_EventScript_WonChallenge::
	msgbox BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints, MSGBOX_DEFAULT
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_RewardBet5
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_RewardBet10
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_RewardBet15
	msgbox BattleFrontier_Lounge3_Text_ObtainedBattlePoints, MSGBOX_GETPOINTS
	special GiveFrontierBattlePoints
	msgbox BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge, MSGBOX_DEFAULT
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
	release
	end

BattleFrontier_Lounge3_EventScript_LostChallenge::
	msgbox BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints, MSGBOX_DEFAULT
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
	release
	end

BattleFrontier_Lounge3_EventScript_RewardBet5::
	buffernumberstring STR_VAR_1, (BET_AMOUNT_5 * 2)
	setvar VAR_0x8004, (BET_AMOUNT_5 * 2)
	return

BattleFrontier_Lounge3_EventScript_RewardBet10::
	buffernumberstring STR_VAR_1, (BET_AMOUNT_10 * 2)
	setvar VAR_0x8004, (BET_AMOUNT_10 * 2)
	return

BattleFrontier_Lounge3_EventScript_RewardBet15::
	buffernumberstring STR_VAR_1, (BET_AMOUNT_15 * 2)
	setvar VAR_0x8004, (BET_AMOUNT_15 * 2)
	return

BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted::
	special ShowFrontierGamblerGoMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge3_EventScript_DeclineChallenge::
	msgbox BattleFrontier_Lounge3_Text_NotInterested, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge3_EventScript_CancelBet::
	special CloseBattlePointsWindow
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
	end

BattleFrontier_Lounge3_EventScript_Man::
	msgbox BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges, MSGBOX_NPC
	end

BattleFrontier_Lounge3_EventScript_Woman::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_BackedWrongTrainer, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end

BattleFrontier_Lounge3_EventScript_PokefanF::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end

BattleFrontier_Lounge3_EventScript_FatMan::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge3_Text_TrainerGoodButRattled, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
	end

BattleFrontier_Lounge3_EventScript_FaceOriginalDirection::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere::
#if GERMAN
	.string "Was willst du von uns?!?\p"
	.string "Siehst du nicht, dass wir beschäftigt\n"
	.string "sind? Hat das nicht Zeit bis später?$"
#else
	.string "…What's that you want?\p"
	.string "Can't you see we're kind of busy here?\n"
	.string "Can't your business wait till later?$"
#endif

BattleFrontier_Lounge3_Text_YouLookToughExplainGambling::
#if GERMAN
	.string "Oh…\n"
	.string "Du siehst wie ein starker Trainer aus.\p"
	.string "Hähähä… Pass auf, ich\n"
	.string "mach dir folgenden Vorschlag:\p"
	.string "Wir haben hier eine Gruppe gebildet\n"
	.string "und wir nutzen bei unserem Spiel aus,\l"
	.string "was hier in der Kampfzone so\p"
	.string "passiert. Die Regeln sind ganz einfach.\p"
	.string "Als Erstes suchen wir uns hier eine\n"
	.string "Kampfstätte aus.\p"
	.string "Dann bestimmen wir einen Trainer,\n"
	.string "der die Herausforderung dieser\l"
	.string "Einrichtung annimmt und wetten um\p"
	.string "unsere Gewinnpunkte. Derjenige, der\n"
	.string "auf den besten Trainer gesetzt hat,\l"
	.string "gewinnt die Gewinnpunkte.\p"
	.string "Hört sich einfach an, nicht wahr?\n"
	.string "Nun, kommen wir zum Punkt…$"
#else
	.string "…Huh?\n"
	.string "You look to me like a tough TRAINER.\p"
	.string "Heheh…\n"
	.string "Listen, I have this proposition.\p"
	.string "We have a little group going here,\n"
	.string "and we play a little game with what\l"
	.string "goes on in the BATTLE FRONTIER.\p"
	.string "The rules are really simple.\p"
	.string "First, we pick one of the facilities\n"
	.string "in the BATTLE FRONTIER.\p"
	.string "Then, we each pick a different TRAINER\n"
	.string "who's taking that facility's challenge,\l"
	.string "and bet with our Battle Points.\p"
	.string "The guy who bet on the TRAINER with\n"
	.string "the best record takes all the Battle\l"
	.string "Points in the pool.\p"
	.string "Sounds simple, huh?\n"
	.string "So, anyway…$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Einzelkämpfe im Duellturm\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "TOWER's SINGLE BATTLE ROOMS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Doppelkämpfe im Duellturm\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "TOWER's DOUBLE BATTLE ROOMS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Multikämpfe im Duellturm\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "TOWER's MULTI BATTLE ROOMS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung eines\p"
	.string "Einzelkampf-Turniers des\n"
	.string "Kampfstadions zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "DOME's SINGLE BATTLE Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung eines\p"
	.string "Doppelkampf-Turniers des\n"
	.string "Kampfstadions zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "DOME's DOUBLE BATTLE Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung des\p"
	.string "Einzel-Wechselkampf-Turniers der\n"
	.string "Kampffabrik zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "FACTORY's Battle Swap Single Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung des\p"
	.string "Doppel-Wechselkampf-Turniers der\n"
	.string "Kampffabrik zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "FACTORY's Battle Swap Double Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Einzelkampf-Hallen des Kampfpalastes\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "PALACE's SINGLE BATTLE HALLS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Doppelkampf-Hallen des Kampfpalastes\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "PALACE's DOUBLE BATTLE HALLS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattleArena::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "K.O.-Teamturniere des Kampfrings\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "ARENA's Set KO Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattlePike::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Kampfbahn der Kampfipitis\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE PIKE's\l"
	.string "Battle Choice.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_ChallengeBattlePyramid::
#if GERMAN
	.string "Ich suche einen Trainer, der bereit\n"
	.string "ist, sich der Herausforderung der\p"
	.string "Kampfforschung der Kampfpyramide\n"
	.string "zu stellen.\p"
	.string "Aber bisher ist mir noch kein Trainer\n"
	.string "ins Auge gefallen, dessen Qualitäten\l"
	.string "mich überzeugt hätten.$"
#else
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "PYRAMID's Battle Quest.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"
#endif

BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe::
#if GERMAN
	.string "Ich achte darauf, dass auch du einen\n"
	.string "Vorteil daraus ziehen kannst. Also, wie\l"
	.string "sieht es aus? Kämpfst du für mich?$"
#else
	.string "I'll see to it that you benefit, too.\n"
	.string "So how about it?\l"
	.string "How about entering that event for me?$"
#endif

BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints::
#if GERMAN
	.string "Sehr schön! Perfekt!\n"
	.string "Äh… Wie wäre es, wenn du mir einige\l"
	.string "deiner Gewinnpunkte als Einsatz gibst?\p"
	.string "Vertrau mir! Es soll dein Schaden\n"
	.string "nicht sein!$"
#else
	.string "All right, that's perfect.\n"
	.string "So, uh… How about spotting me some\l"
	.string "of your Battle Points?\p"
	.string "Trust me, I'll show you my gratitude\n"
	.string "afterward.$"
#endif

BattleFrontier_Lounge3_Text_HowMuchCanYouSpot::
#if GERMAN
	.string "Sehr gut! Sehr gut!\n"
	.string "Und wie hoch ist dein Einsatz?$"
#else
	.string "Great, great!\n"
	.string "So, how much can you spot me?$"
#endif

BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints::
#if GERMAN
	.string "Oh, nein, nein, nein!\n"
	.string "Du hast nicht genug Gewinnpunkte!\p"
	.string "Ich wünschte, du würdest hier nicht\n"
	.string "den Affen machen und die Zeit anderer\l"
	.string "Leute vergeuden!$"
#else
	.string "Oh, no, no, no!\n"
	.string "You don't have enough Battle Points!\p"
	.string "I wish you wouldn't monkey around and\n"
	.string "waste everyone's time!$"
#endif

BattleFrontier_Lounge3_Text_ThanksOffYouGo::
#if GERMAN
	.string "Hähähä! Vielen Dank!\n"
	.string "Und los geht’s!$"
#else
	.string "Heheh! Thanks much!\n"
	.string "So, off you go!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattleTowerSingle::
#if GERMAN
	.string "Beeil dich! Stell dich in den\n"
	.string "Einzelkämpfen des Duellturms!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE TOWER's\n"
	.string "SINGLE BATTLE ROOMS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattleTowerDouble::
#if GERMAN
	.string "Beeil dich! Geh in die Räume für die\n"
	.string "Doppelkämpfe des Duellturms!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE TOWER's\n"
	.string "DOUBLE BATTLE ROOMS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattleTowerMulti::
#if GERMAN
	.string "Beeil dich! Geh in die Multikampf-\n"
	.string "Räume des Duellturms!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE TOWER's\n"
	.string "MULTI BATTLE ROOMS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattleDomeSingle::
#if GERMAN
	.string "Beeil dich! Geh zum Einzelkampf-\n"
	.string "turnier des Kampfstadions!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE DOME's\n"
	.string "SINGLE BATTLE Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattleDomeDouble::
#if GERMAN
	.string "Beeil dich! Geh zum Doppelkampf-\n"
	.string "Turnier des Kampfstadions!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE DOME's\n"
	.string "DOUBLE BATTLE Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattleFactorySingle::
#if GERMAN
	.string "Beeil dich! Geh zum Einzel-Wechsel-\n"
	.string "kampf-Turnier der Kampffabrik!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE FACTORY's\n"
	.string "Battle Swap Single Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble::
#if GERMAN
	.string "Beeil dich! Geh zum Doppel-Wechsel-\n"
	.string "kampf-Turnier der Kampffabrik!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE FACTORY's\n"
	.string "Battle Swap Double Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle::
#if GERMAN
	.string "Beeil dich! Geh zu den Einzelkampf-\n"
	.string "Hallen des Kampfpalastes!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE PALACE's\n"
	.string "SINGLE BATTLE HALLS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble::
#if GERMAN
	.string "Beeil dich! Geh zu den Doppelkampf-\n"
	.string "Hallen des Kampfpalastes!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE PALACE's\n"
	.string "DOUBLE BATTLE HALLS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattleArena::
#if GERMAN
	.string "Beeil dich! Geh zum K.O.-Teamturnier\n"
	.string "des Kampfrings!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE ARENA's\n"
	.string "Set KO Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattlePike::
#if GERMAN
	.string "Beeil dich! Geh zur Kampfbahn\n"
	.string "der Kampfipitis!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE PIKE's\n"
	.string "Battle Choice pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_GetToBattlePyramid::
#if GERMAN
	.string "Beeil dich! Geh zur Kampfforschung\n"
	.string "der Kampfpyramide!\p"
	.string "Du musst einfach gewinnen!\n"
	.string "Verpatz es nicht!\l"
	.string "Unser beider Zukunft hängt von dir ab!$"
#else
	.string "Get to the BATTLE PYRAMID's\n"
	.string "Battle Quest pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"
#endif

BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints::
#if GERMAN
	.string "Oh, du bist es…\n"
	.string "Netter Versuch…\p"
	.string "Ich enttäusch dich nur ungern, aber\n"
	.string "ich kann dir deine Gewinnpunkte nicht\l"
	.string "zurückgeben…\p"
	.string "Ich denke, wir sollten dies als Ansporn\n"
	.string "nehmen, uns in Zukunft mehr\l"
	.string "anzustrengen.$"
#else
	.string "Oh, it's you…\n"
	.string "Nice try…\p"
	.string "I hate to break it to you, but I can't\n"
	.string "return your Battle Points…\p"
	.string "I guess we'll have to let it motivate\n"
	.string "us to try harder next time!$"
#endif

BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints::
#if GERMAN
	.string "Oh, ja!\n"
	.string "Da kommt der Champ!\p"
	.string "Ich wusste, du würdest es schaffen!\n"
	.string "Ich wusste es!\l"
	.string "Wir beide sind Gewinnertypen!\p"
	.string "Hier sind deine Gewinnpunkte - und\n"
	.string "ein kleiner Gewinn für mich!$"
#else
	.string "Oh, yes!\n"
	.string "Hello there, champ!\p"
	.string "I knew you could!\n"
	.string "I knew you would!\l"
	.string "We're both big winners!\p"
	.string "I'll return your Battle Points and,\n"
	.string "of course, a little extra from me!$"
#endif

BattleFrontier_Lounge3_Text_ObtainedBattlePoints::
#if GERMAN
	.string "{PLAYER} erhält {STR_VAR_1} Gewinnpunkt(e).$"
#else
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_1} Battle Points.$"
#endif

BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge::
#if GERMAN
	.string "Wenn es dich wieder nach einer Heraus-\n"
	.string "forderung dürstet, denk an mich!$"
#else
	.string "If you're up for another challenge,\n"
	.string "please do think of me!$"
#endif

BattleFrontier_Lounge3_Text_NotInterested::
#if GERMAN
	.string "Kein Interesse? Ich hätte nicht\n"
	.string "gedacht, dass du so ein Angsthase bist.$"
#else
	.string "Not interested?! You shouldn't be\n"
	.string "so afraid to take a chance!$"
#endif

BattleFrontier_Lounge3_Text_Oh::
	.string "Oh…$"

BattleFrontier_Lounge3_Text_BackedWrongTrainer::
#if GERMAN
	.string "Ich habe schon wieder den falschen\n"
	.string "Trainer unterstützt!\p"
	.string "Vielleicht sollte ich es mal mit Kämpfen\n"
	.string "versuchen, so wie jeder andere auch?$"
#else
	.string "I backed the wrong TRAINER again!\p"
	.string "Maybe I should be battling normally\n"
	.string "like everyone else…$"
#endif

BattleFrontier_Lounge3_Text_TrainerGoodButRattled::
#if GERMAN
	.string "Dieser Trainer…\p"
	.string "Er ist gut, aber er verliert in Kämpfen\n"
	.string "schnell die Fassung und verliert dann\l"
	.string "im Kampfstadion…$"
#else
	.string "That TRAINER…\p"
	.string "He's good, but he gets rattled too\n"
	.string "easily to survive the BATTLE DOME…$"
#endif

BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne::
#if GERMAN
	.string "Kicher, kicher! Ich erkenne\n"
	.string "einen Sieger, wenn ich ihn sehe!$"
#else
	.string "Giggle!\n"
	.string "I know a winner when I see one!$"
#endif

BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges::
#if GERMAN
	.string "Diese Trainer…\n"
	.string "Was machen die da? Sie sollten\l"
	.string "sich lieber Herausforderungen stellen!$"
#else
	.string "Those TRAINERS…\n"
	.string "What are they doing?\l"
	.string "They should be taking challenges.$"
#endif
