BlackthornCity_House2_hns_MapScripts::
	.byte 0

BlackthornCity_House2_EventScript_Emy::
	lock
	faceplayer
	goto_if_set FLAG_BLACKTHORN_NPC_TRADE_COMPLETED, BlackthornCity_House2_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_MR_MIME, BlackthornCity_House2_Text_YouWillTradeWontYou, BlackthornCity_House2_EventScript_DeclineTrade, BlackthornCity_House2_EventScript_NotRequestedMon, BlackthornCity_House2_Text_MonYouTakeCare
	setflag FLAG_BLACKTHORN_NPC_TRADE_COMPLETED
	release
	end

BlackthornCity_House2_EventScript_DeclineTrade::
	msgbox BlackthornCity_House2_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

BlackthornCity_House2_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox BlackthornCity_House2_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

BlackthornCity_House2_EventScript_TradeCompleted::
	msgbox BlackthornCity_House2_Text_After, MSGBOX_DEFAULT
	release
	end

BlackthornCity_House2_Text_YouWillTradeWontYou:
#if GERMAN
	.string "Ich sammele Pokémon!\n"
	.string "Hast du ein {STR_VAR_1}?\p"
	.string "Möchtest du es gegen mein {STR_VAR_2}\n"
	.string "tauschen?$"
#else
	.string "I collect POKéMON!\n"
	.string "Do you have a {STR_VAR_1}?\p"
	.string "Want to trade it for my\n"
	.string "{STR_VAR_2}?$"
#endif

BlackthornCity_House2_Text_MonYouTakeCare:
#if GERMAN
	.string "Juhu! Ich habe jetzt {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, gib gut Acht!$"
#else
	.string "Yay! I got myself {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, you take care!$"
#endif

BlackthornCity_House2_Text_ThisIsntAMon:
#if GERMAN
	.string "Äh, nein, ich glaube nicht.\n"
	.string "Das ist kein {STR_VAR_1}.$"
#else
	.string "Uh, no, I don't think so.\n"
	.string "That isn't a {STR_VAR_1}.$"
#endif

BlackthornCity_House2_Text_YouWontTradeMe:
#if GERMAN
	.string "Du möchtest also nicht tauschen?\n"
	.string "Schade…$"
#else
	.string "You don't want to trade? Aww...$"
#endif

BlackthornCity_House2_Text_After:
#if GERMAN
	.string "Hi, wie geht es meinem alten Pantimos?$"
#else
	.string "Hi, how's my old MR MIME doing?$"
#endif
