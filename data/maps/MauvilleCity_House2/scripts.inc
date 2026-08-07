MauvilleCity_House2_MapScripts::
	.byte 0

MauvilleCity_House2_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_COIN_CASE, MauvilleCity_House2_EventScript_ReceivedCoinCase
	msgbox MauvilleCity_House2_Text_BuyHarborMailAtSlateport, MSGBOX_DEFAULT
	checkitem ITEM_HARBOR_MAIL
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_House2_EventScript_AskToTradeForHarborMail
	release
	end

MauvilleCity_House2_EventScript_AskToTradeForHarborMail::
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
	waitmovement 0
	msgbox MauvilleCity_House2_Text_TradeHarborMailForCoinCase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_House2_EventScript_AcceptTrade
	goto_if_eq VAR_RESULT, NO, MauvilleCity_House2_EventScript_DeclineTrade
	end

MauvilleCity_House2_EventScript_AcceptTrade::
	msgbox MauvilleCity_House2_Text_IllTradeYouCoinCase, MSGBOX_DEFAULT
	giveitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	removeitem ITEM_HARBOR_MAIL
	setflag FLAG_RECEIVED_COIN_CASE
	goto MauvilleCity_House2_EventScript_ReceivedCoinCase
	end

MauvilleCity_House2_EventScript_ReceivedCoinCase::
	msgbox MauvilleCity_House2_Text_UseCoinCaseAtGameCorner, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House2_EventScript_DeclineTrade::
	msgbox MauvilleCity_House2_Text_ThatsDisappointing, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House2_Text_BuyHarborMailAtSlateport:
#if GERMAN
	.string "Wenn ich doch nur ein Rad hätte…\n"
	.string "Dann könnte ich nach Graphitport\l"
	.string "City zum Einkaufen fahren.\p"
	.string "Dort würde ich mir dann einen Hafen-\n"
	.string "brief im Pkmn-Supermarkt kaufen…$"
#else
	.string "If I had a BIKE, it'd be easy to cycle to\n"
	.string "SLATEPORT for some shopping.\p"
	.string "I'd be able to buy HARBOR MAIL at the\n"
	.string "POKéMON MART in SLATEPORT…$"
#endif

MauvilleCity_House2_Text_TradeHarborMailForCoinCase:
#if GERMAN
	.string "Oh! Du besitzt einen Hafenbrief!!!\n"
	.string "Würdest du den gegen einen Münzkorb\l"
	.string "tauschen?$"
#else
	.string "Oh! You have HARBOR MAIL?\n"
	.string "Will you trade it for a COIN CASE?$"
#endif

MauvilleCity_House2_Text_IllTradeYouCoinCase:
#if GERMAN
	.string "Oh, ich bin so glücklich!\n"
	.string "Okay, ich gebe dir diesen {COLOR RED}Münzkorb{COLOR DARK_GRAY}!$"
#else
	.string "Oh, I'm so happy!\n"
	.string "Okay, I'll trade you a COIN CASE!$"
#endif

MauvilleCity_House2_Text_UseCoinCaseAtGameCorner:
#if GERMAN
	.string "Diesen Münzkorb brauchst du in der\n"
	.string "Spielhalle.$"
#else
	.string "That COIN CASE can be used\n"
	.string "at the GAME CORNER.$"
#endif

MauvilleCity_House2_Text_ThatsDisappointing:
#if GERMAN
	.string "Oh, das ist schade.\p"
	.string "In der Spielhalle benötigt man einen\n"
	.string "Münzkorb.$"
#else
	.string "Oh, that's disappointing.\p"
	.string "A COIN CASE is needed for the\n"
	.string "GAME CORNER.$"
#endif

