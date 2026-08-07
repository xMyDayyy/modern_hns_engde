Route1_Frlg_MapScripts::
	.byte 0

Route1_EventScript_MartClerk::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
	msgbox Route1_Text_WorkAtPokeMartTakeSample
	textcolor NPC_TEXT_COLOR_NEUTRAL
	checkitemspace ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	bufferitemname STR_VAR_2, ITEM_POTION
	playfanfare MUS_LEVEL_UP
	message gText_ObtainedTheItem
	waitmessage
	waitfanfare
	additem ITEM_POTION
	msgbox Route1_Text_PutPotionAway
	call EventScript_RestorePrevTextColor
	setflag FLAG_GOT_POTION_ON_ROUTE_1
	release
	end

Route1_EventScript_AlreadyGotPotion::
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
	release
	end

Route1_EventScript_Boy::
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
	end

Route1_EventScript_RouteSign::
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
	end

Route1_Text_WorkAtPokeMartTakeSample::
#if GERMAN
	.string "Hi! Ich arbeite in einem Pokémon-\n"
	.string "Supermarkt.\p"
	.string "Wir verkaufen viele praktische\n"
	.string "Dinge!\p"
	.string "Du findest unseren Laden in\n"
	.string "Vertania City.\p"
	.string "Am besten gebe ich dir ein\n"
	.string "Werbegeschenk! Hier, bitte!$"
#else
	.string "Hi!\n"
	.string "I work at a POKéMON MART.\p"
	.string "It's part of a convenient chain\n"
	.string "selling all sorts of items.\p"
	.string "Please, visit us in VIRIDIAN CITY.\p"
	.string "I know, I'll give you a sample.\n"
	.string "Here you go!$"
#endif

Route1_Text_ComeSeeUsIfYouNeedPokeBalls::
#if GERMAN
	.string "Willst du Pokémon fangen? Wir\n"
	.string "haben auch Pokébälle im Sortiment!$"
#else
	.string "Please come see us if you need\n"
	.string "POKé BALLS for catching POKéMON.$"
#endif

Route1_Text_PutPotionAway::
#if GERMAN
	.string "{PLAYER} steckt den Trank in die\n"
	.string "Item-Tasche des Beutels.$"
#else
	.string "{PLAYER} put the POTION away in\n"
	.string "the BAG's ITEMS POCKET.$"
#endif

Route1_Text_CanJumpFromLedges::
#if GERMAN
	.string "Siehst du die Stufen hier?\p"
	.string "Du kannst nicht hinaufklettern,\n"
	.string "dafür aber herunterspringen!\p"
	.string "So kommst du viel schneller nach\n"
	.string "Alabastia zurück.$"
#else
	.string "See those ledges along the road?\p"
	.string "It's a bit scary, but you can jump\n"
	.string "from them.\p"
	.string "You can get back to PALLET TOWN\n"
	.string "quicker that way.$"
#endif

Route1_Text_RouteSign::
#if GERMAN
	.string "Route 1\n"
	.string "Alabastia - Vertania City$"
#else
	.string "ROUTE 1\n"
	.string "PALLET TOWN - VIRIDIAN CITY$"
#endif

