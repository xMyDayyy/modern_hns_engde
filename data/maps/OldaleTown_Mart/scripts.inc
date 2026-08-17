OldaleTown_Mart_MapScripts::
	.byte 0

OldaleTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
	pokemart OldaleTown_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Basic:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	pokemartlistend

OldaleTown_Mart_ExpandedItems::
	pokemart OldaleTown_Mart_Pokemart_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Expanded:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	pokemartlistend

OldaleTown_Mart_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_PokeBallsInStock::
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_Boy::
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
	end

OldaleTown_Mart_Text_PokeBallsAreSoldOut:
#if GERMAN
	.string "Der Verkäufer sagt, es sei alles\n"
	.string "ausverkauft. Jetzt stehe ich ohne\l"
	.string "Pokébälle da.$"
#else
	.string "The clerk says they're all sold out.\n"
	.string "I can't buy any POKé BALLS.$"
#endif

OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
#if GERMAN
	.string "Ich warte hier auf meine Schwester.\p"
	.string "Sie sagt seit einer Stunde, sie sei\n"
	.string "gleich fertig.$"
#else
	.string "I'm waiting for my sister.\p"
	.string "She's been saying she's nearly done\n"
	.string "for an hour now.$"
#endif

OldaleTown_Mart_Text_RestoreHPWithPotion:
#if GERMAN
	.string "Der Supermarkt hier hat weniger im\n"
	.string "Regal als der in Metarost City.\p"
	.string "Dafür kennt einen die Verkäuferin\n"
	.string "beim Namen.$"
#else
	.string "This MART carries less than the one\n"
	.string "in RUSTBORO CITY.\p"
	.string "But the clerk here knows you by\n"
	.string "name.$"
#endif

