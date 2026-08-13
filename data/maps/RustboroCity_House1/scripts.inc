RustboroCity_House1_MapScripts::
	.byte 0

RustboroCity_House1_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_SEEDOT, RustboroCity_House1_Text_IllTradeIfYouWant, RustboroCity_House1_EventScript_DeclineTrade, RustboroCity_House1_EventScript_NotRequestedMon, RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
	release
	end

RustboroCity_House1_EventScript_DeclineTrade::
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_TradeCompleted::
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_Hiker::
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
	end

RustboroCity_House1_Text_IllTradeIfYouWant:
#if GERMAN
	.string "Wie? Mein Pokémon ist niedlich?\n"
	.string "Sicher, das weiß ich doch!\p"
	.string "Aber ich weiß auch, dass ich es gerne\n"
	.string "mit dir tauschen würde.\p"
	.string "Ich gebe dir mein {STR_VAR_2}, wenn du mir\n"
	.string "ein {STR_VAR_1} gibst.\l"
	.string "Einverstanden?$"
#else
	.string "Huh? My POKéMON is cute?\n"
	.string "Sure, I knew that.\p"
	.string "But if you really want, I'm willing\n"
	.string "to trade it to you.\p"
	.string "I'll trade you my {STR_VAR_2} for\n"
	.string "a {STR_VAR_1} if you want.$"
#endif

RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
#if GERMAN
	.string "Ähähähähä… Sei nett zu meinem Pokémon.$"
#else
	.string "Eheheh…\n"
	.string "Please be good to my POKéMON.$"
#endif

RustboroCity_House1_Text_DoesntLookLikeMonToMe:
#if GERMAN
	.string "Wie? Das sieht für mich aber nicht wie\n"
	.string "ein {STR_VAR_1} aus!$"
#else
	.string "Huh? That doesn't look anything like\n"
	.string "a {STR_VAR_1} to me.$"
#endif

RustboroCity_House1_Text_YouDontWantToThatsOkay:
#if GERMAN
	.string "Du willst nicht tauschen? Kein Problem.\n"
	.string "Aber mein Pokémon ist wirklich\p"
	.string "niedlich, das weißt du schon?!?$"
#else
	.string "Oh, if you don't want to, that's okay.\n"
	.string "But my POKéMON is cute, you know…$"
#endif

RustboroCity_House1_Text_AnyPokemonCanBeCute:
#if GERMAN
	.string "Jedes Pokémon ist niedlich, wenn es mit\n"
	.string "Freundlichkeit und Fürsorge\l"
	.string "aufgezogen wird.$"
#else
	.string "Any POKéMON can be cute if you raise\n"
	.string "it with care and kindness.$"
#endif

RustboroCity_House1_Text_AllSortsOfPlaces:
#if GERMAN
	.string "An allen Orten gibt es alle Sorten von\n"
	.string "Pokémon und Menschen.\p"
	.string "Ich finde das faszinierend, daher\n"
	.string "besuche ich alle möglichen Orte.$"
#else
	.string "In all sorts of places, there are all\n"
	.string "sorts of POKéMON and people.\p"
	.string "I find that fascinating, so I go to all\n"
	.string "sorts of places.$"
#endif

