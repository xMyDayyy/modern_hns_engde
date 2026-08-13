FortreeCity_House1_MapScripts::
	.byte 0

FortreeCity_House1_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, FortreeCity_House1_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_PLUSLE, FortreeCity_House1_Text_YouWillTradeWontYou, FortreeCity_House1_EventScript_DeclineTrade, FortreeCity_House1_EventScript_NotRequestedMon, FortreeCity_House1_Text_MonYouTakeCare
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
	release
	end

FortreeCity_House1_EventScript_DeclineTrade::
	msgbox FortreeCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox FortreeCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_TradeCompleted::
	msgbox FortreeCity_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_ExpertF::
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
	end

FortreeCity_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox FortreeCity_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FortreeCity_House1_Text_YouWillTradeWontYou:
#if GERMAN
	.string "Wroooaaar! Ich muss das unbedingt\n"
	.string "haben! Ich muss {STR_VAR_1} haben!\l"
	.string "Dafür würde ich alles tun!\p"
	.string "Äh… Hast du ihn gehört?\n"
	.string "Meinen Ruf aus tiefstem Herzen?\p"
	.string "Nachdem du den gehört hast, tauschst\n"
	.string "du doch bestimmt dein {STR_VAR_1} gegen\l"
	.string "mein {STR_VAR_2}?!?$"
#else
	.string "Wrooooaaar! I need it!\n"
	.string "I have to get me a {STR_VAR_1}!\l"
	.string "I'll do anything for it!\p"
	.string "…Uh… Did you hear that?\n"
	.string "My shout from the bottom of my heart?\p"
	.string "Having heard that, you will trade\n"
	.string "your {STR_VAR_1} for my {STR_VAR_2},\l"
	.string "won't you?$"
#endif

FortreeCity_House1_Text_MonYouTakeCare:
#if GERMAN
	.string "Oh, super! Dann mal los!\p"
	.string "Willkommen, {STR_VAR_1}!\n"
	.string "Pass auf dich auf, {STR_VAR_2}!$"
#else
	.string "Oh, yeah, right on!\p"
	.string "{STR_VAR_1}, welcome!\n"
	.string "{STR_VAR_2}, you take care!$"
#endif

FortreeCity_House1_Text_ThisIsntAMon:
#if GERMAN
	.string "Äh, nee, so geht das nicht!\n"
	.string "Das ist doch gar kein {STR_VAR_1}.$"
#else
	.string "Uh, no, I don't think so.\n"
	.string "That isn't a {STR_VAR_1}.$"
#endif

FortreeCity_House1_Text_YouWontTradeMe:
#if GERMAN
	.string "Nein? Du willst nicht tauschen?\n"
	.string "Obwohl ich dir mein Herz offenbart\l"
	.string "habe?$"
#else
	.string "No? You won't trade me?\n"
	.string "Even after I bared my heart to you?$"
#endif

FortreeCity_House1_Text_GoingToMakeVolbeatStrong:
#if GERMAN
	.string "Ich werde dafür sorgen, dass Volbeat\n"
	.string "super-megastark wird!\p"
	.string "Ich hoffe, du sorgst dich genauso um\n"
	.string "Plusle!$"
#else
	.string "I'm going to make VOLBEAT super\n"
	.string "strong from this moment on!\p"
	.string "I hope you do the same with PLUSLE!$"
#endif

FortreeCity_House1_Text_TradingMemoriesWithOthers:
#if GERMAN
	.string "Mit anderen Pokémon tauschen…\p"
	.string "Das ist, als ob du die Erinnerungen\n"
	.string "mit anderen Menschen teilst.$"
#else
	.string "Trading POKéMON with others…\p"
	.string "It's as if you're trading your own\n"
	.string "memories with other people.$"
#endif

FortreeCity_House1_Text_Zigzagoon:
#if GERMAN
	.string "Zigzachs: Gumomoh?$"
#else
	.string "ZIGZAGOON: Gumomoh?$"
#endif

