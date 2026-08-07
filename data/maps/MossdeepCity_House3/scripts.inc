MossdeepCity_House3_MapScripts::
	.byte 0

MossdeepCity_House3_EventScript_SuperRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SUPER_ROD, MossdeepCity_House3_EventScript_ReceivedSuperRod
	msgbox MossdeepCity_House3_Text_YouWantSuperRod, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_DeclineSuperRod
	msgbox MossdeepCity_House3_Text_SuperRodIsSuper, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SUPER_ROD
	msgbox MossdeepCity_House3_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_EventScript_ReceivedSuperRod::
	msgbox MossdeepCity_House3_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_EventScript_DeclineSuperRod::
	msgbox MossdeepCity_House3_Text_DontYouLikeToFish, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_Text_YouWantSuperRod:
#if GERMAN
	.string "Hey, du da! Trainer!\n"
	.string "Eine Superangel ist wirklich super!\p"
	.string "Man kann sagen, was man will, aber mit\n"
	.string "diesem Baby kann man Pokémon vom\l"
	.string "Meeresboden weg fangen!\p"
	.string "Na? Du würdest doch zu gerne auch so\n"
	.string "eine Angel haben, oder?$"
#else
	.string "Hey there, TRAINER!\n"
	.string "A SUPER ROD really is super!\p"
	.string "Say all you want, but this baby can\n"
	.string "catch POKéMON off the seafloor!\p"
	.string "What do you think?\n"
	.string "You want it, don't you?$"
#endif

MossdeepCity_House3_Text_SuperRodIsSuper:
#if GERMAN
	.string "Sicher, sicher!\n"
	.string "Schließlich ist eine Superangel super!$"
#else
	.string "You bet, you bet!\n"
	.string "After all, a SUPER ROD is really super!$"
#endif

MossdeepCity_House3_Text_TryDroppingRodInWater:
#if GERMAN
	.string "Stehst du am Wasser, dann wirf die\n"
	.string "Angel aus und schau, was anbeißt!$"
#else
	.string "If there's any water, try dropping in\n"
	.string "your ROD and see what bites!$"
#endif

MossdeepCity_House3_Text_DontYouLikeToFish:
#if GERMAN
	.string "Was??? Liebst du das Angeln nicht?$"
#else
	.string "Hunh?\n"
	.string "Don't you like to fish?$"
#endif

MossdeepCity_House3_Text_GoAfterSeafloorPokemon:
#if GERMAN
	.string "Mit deiner Superangel kannst du die\n"
	.string "Pokémon am Meeresboden fangen.$"
#else
	.string "Go after the seafloor POKéMON with\n"
	.string "your SUPER ROD.$"
#endif

