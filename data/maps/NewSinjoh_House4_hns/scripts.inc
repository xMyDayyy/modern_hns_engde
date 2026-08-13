NewSinjoh_House4_hns_MapScripts::
	.byte 0

NewSinjoh_Cafe_Script_Sister::
	lock
	faceplayer
	message NewSinjoh_Cafe_Text_ResturantGreeting
	waitmessage
	pokemart NewSinjoh_Cafe_Pokemart_Resturant
	msgbox NewSinjoh_Cafe_Text_ResturantEnd, MSGBOX_DEFAULT
	release
	end

	.align 2
NewSinjoh_Cafe_Pokemart_Resturant:
	.2byte ITEM_YACHE_BERRY
    .2byte ITEM_LANSAT_BERRY
    .2byte ITEM_ROWAP_BERRY
    .2byte ITEM_BERRY_JUICE
	.2byte ITEM_SODA_POP
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_LEEK
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_NONE
	release
	end

NewSinjoh_Cafe_Text_ResturantGreeting:
#if GERMAN
	.string "H-hallo! Willkommen in unserem Café!\n"
	.string "Was darf es heute sein?$"
#else
	.string "H-hello! Welcome to our Cafe!\n"
	.string "How can I help you today?$"
#endif

NewSinjoh_Cafe_Text_ResturantEnd:
#if GERMAN
	.string "Beehre uns bald wieder!$"
#else
	.string "Please come again!$"
#endif

NewSinjoh_Cafe_EventScript_BaldingMan::
	msgbox NewSinjoh_Cafe_Text_BaldingMan, MSGBOX_NPC
	end

NewSinjoh_Cafe_Text_BaldingMan:
#if GERMAN
	.string "Dieses Café wird von einer\n"
	.string "einheimischen Familie geführt, solange\l"
	.string "man denken kann.\p"
	.string "Ihre jüngste Tochter da drüben ist es\n"
	.string "nicht gewohnt, so viele Fremde zu\l"
	.string "bedienen.$"
#else
	.string "A local family has run this\n"
	.string "cafe for as long as anyone\l"
	.string "can remember.\p"
	.string "Their youngest girl over there\n"
	.string "isn't used to serving so many\l"
	.string "strangers.$"
#endif

NewSinjoh_Cafe_EventScript_ScientistF::
	msgbox NewSinjoh_Cafe_Text_ScientistF, MSGBOX_NPC
	end

NewSinjoh_Cafe_Text_ScientistF:
#if GERMAN
	.string "Dieses Getränk ist so guuu--uut!\n"
	.string "…\p"
	.string "…\p"
	.string "Hahaha\p"
	.string "…$"
#else
	.string "This drink is so goo--ood!\n"
	.string ".......\p"
	.string ".......\p"
	.string "Hahaha\p"
	.string ".......$"
#endif

NewSinjoh_Cafe_EventScript_ScientistM::
	lock
	faceplayer
	msgbox NewSinjoh_Cafe_Text_ScientistM, MSGBOX_DEFAULT
	closemessage
	release
	end

NewSinjoh_Cafe_Text_ScientistM:
#if GERMAN
	.string "Bitte verzeih meiner Kollegin…\p"
	.string "Die Getränke hier sind stärker, als\n"
	.string "wir es aus Hoenn gewohnt sind.\p"
	.string "Ich habe sie gewarnt, aber sie\n"
	.string "meinte, sie müsse mal abschalten.\p"
	.string "Diese Forschungsexpedition hat uns\n"
	.string "allen viel abverlangt.$"
#else
	.string "Please forgive my colleague...\p"
	.string "The drinks here are stronger than\n"
	.string "what we're used to in HOENN.\p"
	.string "I tried to warn her, but she said\n"
	.string "she needed to unwind.\p"
	.string "This research expedition has been\n"
	.string "hard on us all.$"
#endif

NewSinjoh_Cafe_EventScript_Gentleman::
	msgbox NewSinjoh_Cafe_Text_Gentleman, MSGBOX_NPC
	end

NewSinjoh_Cafe_Text_Gentleman:
#if GERMAN
	.string "Was starrst du so, Kind?\p"
	.string "Es ist nichts dabei, wenn ein Mann und\n"
	.string "sein Pokémon am selben Tisch essen.$"
#else
	.string "What are you staring at, kid?\p"
	.string "Nothin' wrong with a man and his\n"
	.string "POKéMON eating at the same table.$"
#endif

NewSinjoh_EventScript_Scyther::
	lock
	faceplayer
	playmoncry SPECIES_SCYTHER, 0
	msgbox NewSinjoh_Text_Scyther, MSGBOX_DEFAULT
	waitmoncry
    closemessage
	release
	end

NewSinjoh_Text_Scyther:
	.string "Scyyy!$"
