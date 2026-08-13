PacifidlogTown_House3_MapScripts::
	.byte 0

PacifidlogTown_House3_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_HORSEA, PacifidlogTown_House3_Text_WillingToTradeIt, PacifidlogTown_House3_EventScript_DeclineTrade, PacifidlogTown_House3_EventScript_NotRequestedMon, PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
	release
	end

PacifidlogTown_House3_EventScript_DeclineTrade::
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_TradeCompleted::
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_Girl::
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
	end

PacifidlogTown_House3_Text_WillingToTradeIt:
#if GERMAN
	.string "Schau dir dieses {STR_VAR_2} an!\p"
	.string "Das {STR_VAR_2} habe ich gestern\n"
	.string "gefangen, um meinen Geburtstag zu\l"
	.string "feiern.\p"
	.string "Oh, ich sehe dir an der Nasenspitze an,\n"
	.string "dass du es gerne hättest! Aber es ist\p"
	.string "\p"
	.string "unbezahlbar! Ich bin aber bereit, es\n"
	.string "gegen ein {STR_VAR_1} zu tauschen.$"
#else
	.string "Check out this {STR_VAR_2}!\p"
	.string "It's the {STR_VAR_2} that I caught\n"
	.string "yesterday to celebrate my birthday!\p"
	.string "Oh, I can see that you want it!\n"
	.string "After all, it's priceless!\p"
	.string "I'll tell you what. I might be willing\n"
	.string "to trade it for a {STR_VAR_1}.$"
#endif

PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou:
#if GERMAN
	.string "Oh, das ist also ein {STR_VAR_1}?\p"
	.string "Es sieht einem {STR_VAR_2} ähnlich und\n"
	.string "ist doch völlig anders.\p"
	.string "Danke schön!$"
#else
	.string "Oh, so this is a {STR_VAR_1}?\p"
	.string "It's sort of like a {STR_VAR_2},\n"
	.string "and yet it's subtly different.\p"
	.string "Thank you!$"
#endif

PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon:
#if GERMAN
	.string "Nein, nein, nein! Ich akzeptiere nur\n"
	.string "ein echtes {STR_VAR_1}!!!$"
#else
	.string "No, no, no! I won't accept any\n"
	.string "less than a real {STR_VAR_1}!$"
#endif

PacifidlogTown_House3_Text_NotDesperateOrAnything:
#if GERMAN
	.string "Oh, du willst also nicht mit mir\n"
	.string "tauschen?\p"
	.string "Macht nichts. Ich bin gar nicht so\n"
	.string "wild auf einen Tausch!$"
#else
	.string "Oh, so you're not going to go through\n"
	.string "with this?\p"
	.string "That's cool. I'm not desperate to make\n"
	.string "a trade or anything.$"
#endif

PacifidlogTown_House3_Text_ReallyWantedToGetBagon:
#if GERMAN
	.string "Ich weiß, ich könnte mir ja auch\n"
	.string "selbst eines suchen…\p"
	.string "Aber ich hätte gerne ein Kindwurm, das\n"
	.string "von einem anderen Trainer gefangen\l"
	.string "wurde…$"
#else
	.string "I know I could go looking for one\n"
	.string "on my own, but…\p"
	.string "But I really wanted to get a BAGON\n"
	.string "that another TRAINER caught…$"
#endif

PacifidlogTown_House3_Text_IsThatAPokedex:
#if GERMAN
	.string "Ist das ein Pokédex?\p"
	.string "Hast du schon viele verschiedene\n"
	.string "Pokémon getroffen?\p"
	.string "Ich wollte, ich wäre wie du.$"
#else
	.string "Is that a POKéDEX?\p"
	.string "Did you get to meet a lot of different\n"
	.string "POKéMON?\p"
	.string "I wish I was like you.$"
#endif

