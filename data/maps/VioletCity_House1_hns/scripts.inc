VioletCity_House1_hns_MapScripts::
	.byte 0

VioletCity_House1_EventScript_Kyle::
	lock
	faceplayer
	msgbox VioletCity_House1_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_House1_EventScript_Rudy::
	lock
	faceplayer
	goto_if_set FLAG_VIOLET_NPC_TRADE_COMPLETED, VioletCity_House1_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_ONIX, VioletCity_House1_Text_YouWillTradeWontYou, VioletCity_House1_EventScript_DeclineTrade, VioletCity_House1_EventScript_NotRequestedMon, VioletCity_House1_Text_MonYouTakeCare
	setflag FLAG_VIOLET_NPC_TRADE_COMPLETED
	release
	end

VioletCity_House1_EventScript_DeclineTrade::
	msgbox VioletCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

VioletCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox VioletCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

VioletCity_House1_EventScript_TradeCompleted::
	msgbox VioletCity_House1_Text_After, MSGBOX_DEFAULT
	release
	end

VioletCity_House1_Text_YouWillTradeWontYou:
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

VioletCity_House1_Text_MonYouTakeCare:
#if GERMAN
	.string "Juhu! Ich habe {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, mach es gut!$"
#else
	.string "Yay! I got myself {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, you take care!$"
#endif

VioletCity_House1_Text_ThisIsntAMon:
#if GERMAN
	.string "Äh, nein, glaube ich nicht.\n"
	.string "Das ist kein {STR_VAR_1}.$"
#else
	.string "Uh, no, I don't think so.\n"
	.string "That isn't a {STR_VAR_1}.$"
#endif

VioletCity_House1_Text_YouWontTradeMe:
#if GERMAN
	.string "Du möchtest also nicht tauschen?\n"
	.string "Schade…$"
#else
	.string "You don't want to trade? Aww...$"
#endif

VioletCity_House1_Text_After:
#if GERMAN
	.string "Ach, hallo! Wie geht es dem Onix, das\n"
	.string "du im Tausch von mir bekommen hast?$"
#else
	.string "Hi, how's my old ONIX doing?$"
#endif

VioletCity_House1_Text_PokefanM:
#if GERMAN
	.string "Pokémon, die du im Tausch mit anderen\n"
	.string "Trainern erhalten hast, lassen sich\l"
	.string "schneller und leichter trainieren!\p"
	.string "…Aber wenn du nicht den richtigen\n"
	.string "Orden besitzt, gehorchen sie dir nicht.$"
#else
	.string "A POKéMON you get in a trade\n"
	.string "grows quickly.\p"
	.string "But if you don't have the right\n"
	.string "GYM BADGE, they may disobey you.$"
#endif
