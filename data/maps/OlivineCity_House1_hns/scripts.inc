OlivineCity_House1_hns_MapScripts::
	.byte 0

OlivineCity_House1_EventScript_Tim::
	lock
	faceplayer
	goto_if_set FLAG_OLIVINE_NPC_TRADE_COMPLETED, OlivineCity_House1_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_VOLTORB, OlivineCity_House1_Text_YouWillTradeWontYou, OlivineCity_House1_EventScript_DeclineTrade, OlivineCity_House1_EventScript_NotRequestedMon, OlivineCity_House1_Text_MonYouTakeCare
	setflag FLAG_OLIVINE_NPC_TRADE_COMPLETED
	release
	end

OlivineCity_House1_EventScript_DeclineTrade::
	msgbox OlivineCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

OlivineCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox OlivineCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

OlivineCity_House1_EventScript_TradeCompleted::
	msgbox OlivineCity_House1_Text_After, MSGBOX_DEFAULT
	release
	end

OlivineCity_House1_Text_YouWillTradeWontYou:
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

OlivineCity_House1_Text_MonYouTakeCare:
#if GERMAN
	.string "Juhu! Ich habe {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, mach es gut!$"
#else
	.string "Yay! I got myself {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, you take care!$"
#endif

OlivineCity_House1_Text_ThisIsntAMon:
#if GERMAN
	.string "Äh, nein, ich glaube nicht.\n"
	.string "Das ist kein {STR_VAR_1}.$"
#else
	.string "Uh, no, I don't think so.\n"
	.string "That isn't a {STR_VAR_1}.$"
#endif

OlivineCity_House1_Text_YouWontTradeMe:
#if GERMAN
	.string "Du möchtest also nicht tauschen?\n"
	.string "Schade…$"
#else
	.string "You don't want to trade? Aww...$"
#endif

OlivineCity_House1_Text_After:
#if GERMAN
	.string "Hi, wie geht’s meinem alten Voltobal?$"
#else
	.string "Hi, how's my old VOLTORB doing?$"
#endif
