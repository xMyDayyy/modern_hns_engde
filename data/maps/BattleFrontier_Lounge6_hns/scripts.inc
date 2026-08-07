BattleFrontier_Lounge6_hns_MapScripts::
	.byte 0

BattleFrontier_Lounge6_EventScript_Trader_hns::
	lock
	faceplayer
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, BattleFrontier_Lounge6_EventScript_TradeCompleted_hns
	ingame_trade INGAME_TRADE_MEOWTH, BattleFrontier_Lounge6_Text_WouldYouLikeToTrade_hns, BattleFrontier_Lounge6_EventScript_DeclineTrade_hns, BattleFrontier_Lounge6_EventScript_NotRequestedMon_hns, BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt_hns
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
	release
	end

BattleFrontier_Lounge6_EventScript_DeclineTrade_hns::
	msgbox BattleFrontier_Lounge6_Text_WellThatsFineToo_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_EventScript_NotRequestedMon_hns::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_EventScript_TradeCompleted_hns::
	msgbox BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge6_Text_WouldYouLikeToTrade_hns:
#if GERMAN
	.string "Mein Pokémon ist ein {STR_VAR_2}.\n"
	.string "Kennst du das?\l"
	.string "Es ist sehr süß und hübsch.\p"
	.string "Diesen kleinen Schatz könnte ich ohne\n"
	.string "Bedenken tauschen.\p"
	.string "Möchtest du mein {STR_VAR_2} haben?\n"
	.string "Dann gib mir ein {STR_VAR_1}.$"
#else
	.string "My POKéMON is a {STR_VAR_2}.\n"
	.string "Do you know it?\l"
	.string "It's quite cute and rather nice.\p"
	.string "This little one, I could trade with\n"
	.string "pride!\p"
	.string "Would you like to trade me a {STR_VAR_1}\n"
	.string "for my {STR_VAR_2}?$"
#endif

BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt_hns:
#if GERMAN
	.string "Oh, das ist einfach meganiedlich.\n"
	.string "Vielen Dank! Ich verspreche, es\l"
	.string "wird es gut bei mir haben!\p"
	.string "Oh! Und ich hoffe, du bist auch gut\n"
	.string "zu meinem {STR_VAR_2}!$"
#else
	.string "Oh, it's adorable!\n"
	.string "Thank you!\l"
	.string "I promise I'll be good to it!\p"
	.string "Oh! I hope you'll be good to\n"
	.string "my {STR_VAR_2}, too!$"
#endif

BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon_hns:
#if GERMAN
	.string "Oh, tut mir Leid!\n"
	.string "Ich tausche nur, wenn ich dafür ein\l"
	.string "{STR_VAR_1} bekomme!$"
#else
	.string "Oh, I'm sorry!\n"
	.string "I don't intend to trade for anything\l"
	.string "but a {STR_VAR_1}.$"
#endif

BattleFrontier_Lounge6_Text_WellThatsFineToo_hns:
#if GERMAN
	.string "Oh, du magst nicht tauschen?\n"
	.string "Nun, das ist auch in Ordnung.\l"
	.string "Komm doch bald mal wieder vorbei.$"
#else
	.string "Oh, you won't?\n"
	.string "Well, that's fine, too.\l"
	.string "Please come visit us again.$"
#endif

BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined_hns:
#if GERMAN
	.string "Kicher!\n"
	.string "Ein Eneco ist viel süüüßer, als ich\l"
	.string "gedacht habe. Ich bin total glücklich!$"
#else
	.string "Giggle!\n"
	.string "A SKITTY is so much cuter than I had\l"
	.string "imagined. I'm delighted!$"
#endif
