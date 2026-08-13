TwoIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_OnTransition
	.byte 0

TwoIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_TWO_ISLAND
	setflag FLAG_VISITED_TWO_ISLAND
	call TwoIsland_EventScript_SetShopState
	end

TwoIsland_EventScript_SetShopState::
	goto_if_set FLAG_IS_CHAMPION, TwoIsland_EventScript_SetShopStateAfterHoennLink
	goto_if_set FLAG_SYS_GAME_CLEAR, TwoIsland_EventScript_SetShopStateAfterChampion
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopStateAfterLostelleRescue
	goto TwoIsland_EventScript_SetShopStateDefault
	end

TwoIsland_EventScript_SetShopStateAfterHoennLink::
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopExpanded1
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_SetShopExpanded2
	goto TwoIsland_EventScript_SetShopExpanded3
	end

TwoIsland_EventScript_SetShopStateAfterChampion::
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
	goto_if_unset FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopInitial
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopExpanded1
	goto TwoIsland_EventScript_SetShopExpanded2
	end

TwoIsland_EventScript_SetShopStateAfterLostelleRescue::
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
	goto TwoIsland_EventScript_SetShopExpanded1
	end

TwoIsland_EventScript_SetShopStateDefault::
	goto TwoIsland_EventScript_SetShopInitial
	end

TwoIsland_EventScript_SetShopInitial::
	setvar VAR_MAP_SCENE_TWO_ISLAND, 1
	return

TwoIsland_EventScript_SetShopExpanded1::
	setvar VAR_MAP_SCENE_TWO_ISLAND, 2
	clearflag FLAG_HIDE_TWO_ISLAND_WOMAN
	return

TwoIsland_EventScript_SetShopExpanded2::
	setvar VAR_MAP_SCENE_TWO_ISLAND, 3
	clearflag FLAG_HIDE_TWO_ISLAND_BEAUTY
	return

TwoIsland_EventScript_SetShopExpanded3::
	setvar VAR_MAP_SCENE_TWO_ISLAND, 4
	clearflag FLAG_HIDE_TWO_ISLAND_SUPER_NERD
	return

TwoIsland_EventScript_Clerk::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 4, TwoIsland_EventScript_ClerkShopExpanded3
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 3, TwoIsland_EventScript_ClerkShopExpanded2
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 2, TwoIsland_EventScript_ClerkShopExpanded1
	goto TwoIsland_EventScript_ClerkShopInitial
	end

TwoIsland_EventScript_ClerkShopExpanded3::
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_3, TwoIsland_EventScript_ClerkShopSkipIntro
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_3
	message TwoIsland_Text_BringingItemsFromDistantLands
	waitmessage
	goto TwoIsland_EventScript_ShopExpanded3
	end

TwoIsland_EventScript_ClerkShopExpanded2::
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_ClerkShopSkipIntro
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_2
	message TwoIsland_Text_HopeYouGiveItYourBest
	waitmessage
	goto TwoIsland_EventScript_ShopExpanded2
	end

TwoIsland_EventScript_ClerkShopExpanded1::
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_ClerkShopSkipIntro
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_1
	message TwoIsland_Text_AddedMerchandiseForLostelle
	waitmessage
	goto TwoIsland_EventScript_ShopExpanded1
	end

TwoIsland_EventScript_ClerkShopInitial::
	goto_if_set FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_ClerkShopSkipIntro
	setflag FLAG_TWO_ISLAND_SHOP_INTRODUCED
	message TwoIsland_Text_WelcomeToShopMerchandiseLimited
	waitmessage
	goto TwoIsland_EventScript_ShopInitial
	end

TwoIsland_EventScript_ClerkShopSkipIntro::
	message gText_HowMayIServeYou
	waitmessage
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 4, TwoIsland_EventScript_ShopExpanded3
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 3, TwoIsland_EventScript_ShopExpanded2
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 2, TwoIsland_EventScript_ShopExpanded1
	goto TwoIsland_EventScript_ShopInitial
	end

TwoIsland_EventScript_ShopInitial::
	pokemart TwoIsland_Items_ShopInitial
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
TwoIsland_Items_ShopInitial::
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_NONE
	release
	end

TwoIsland_EventScript_ShopExpanded1::
	pokemart TwoIsland_Items_ShopExpanded1
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
TwoIsland_Items_ShopExpanded1::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SODA_POP
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_NONE
	release
	end

TwoIsland_EventScript_ShopExpanded2::
	pokemart TwoIsland_Items_ShopExpanded2
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
TwoIsland_Items_ShopExpanded2::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_LEMONADE
	.2byte ITEM_SODA_POP
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE
	release
	end

TwoIsland_EventScript_ShopExpanded3::
	pokemart TwoIsland_Items_ShopExpanded3
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
TwoIsland_Items_ShopExpanded3::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_LEMONADE
	.2byte ITEM_SODA_POP
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE
	release
	end

TwoIsland_EventScript_Sailor::
	msgbox TwoIsland_Text_FellowMovedFromCeladonCity, MSGBOX_NPC
	end

TwoIsland_EventScript_Woman::
	msgbox TwoIsland_Text_ShopkeepersBrotherWorksGameCorner, MSGBOX_NPC
	end

TwoIsland_EventScript_Beauty::
	lock
	faceplayer
	famechecker FAMECHECKER_BRUNO, 4
	msgbox TwoIsland_Text_BrunoCameToIslandWhileBack
	release
	end

TwoIsland_EventScript_SuperNerd::
	msgbox TwoIsland_Text_BuyRareItemsHere, MSGBOX_NPC
	end

TwoIsland_EventScript_Boy::
	msgbox TwoIsland_Text_OldWomanLivesOutOnCape, MSGBOX_NPC
	end

TwoIsland_EventScript_LittleBoy::
	msgbox TwoIsland_Text_HaveYouTriedJumpingGame, MSGBOX_NPC
	end

TwoIsland_EventScript_IslandSign::
	msgbox TwoIsland_Text_IslandSign, MSGBOX_SIGN
	end

TwoIsland_EventScript_JoyfulGameCornerSign::
	msgbox TwoIsland_Text_JoyfulGameCornerSign, MSGBOX_SIGN
	end

TwoIsland_EventScript_FastCurrentSign::
	msgbox TwoIsland_Text_DangerFastCurrent, MSGBOX_SIGN
	end

TwoIsland_Text_IslandSign::
#if GERMAN
	.string "Eiland Zwei\n"
	.string "Ein Paradies für Zwei$"
#else
	.string "TWO ISLAND\n"
	.string "Boon Island for Two$"
#endif

TwoIsland_Text_JoyfulGameCornerSign::
#if GERMAN
	.string "Entertainment & Snacks!\n"
	.string "Action pur in der Spielhalle$"
#else
	.string "Skip & Chomp!\n"
	.string "Joyful GAME CORNER$"
#endif

TwoIsland_Text_DangerFastCurrent::
#if GERMAN
	.string "Achtung! Starke Strömung!\n"
	.string "Angeln und Surfen verboten!$"
#else
	.string "DANGER! FAST CURRENT!\n"
	.string "Fishing and surfing prohibited!$"
#endif

TwoIsland_Text_WelcomeToShopMerchandiseLimited::
#if GERMAN
	.string "Oh!\n"
	.string "Hallo, willkommen in meinem Laden!\p"
	.string "Wir hatten erst vor kurzem unsere\n"
	.string "Eröffnung!\p"
	.string "Das Angebot ist klein, aber ich\n"
	.string "hoffe, du findest etwas für dich!$"
#else
	.string "Oh!\n"
	.string "Hello, welcome to my shop!\p"
	.string "We've only opened up recently.\p"
	.string "Our merchandise is limited, but I\n"
	.string "hope we can serve your needs.$"
#endif

TwoIsland_Text_AddedMerchandiseForLostelle::
#if GERMAN
	.string "Ich kann dir gar nicht sagen, wie\n"
	.string "dankbar ich dir für die Rettung von\l"
	.string "Irrma bin.\l"
	.string "Dank dir haben die Einwohner von\l"
	.string "Tri-Eiland ihre Meinung über die\l"
	.string "Menschen aus Kanto geändert.\l"
	.string "Und ich komme aus Kanto.\p"
	.string "Die Bewohner von Tri-Eiland haben mir\n"
	.string "bei der Warenzusammenstellung\l"
	.string "geholfen.$"
#else
	.string "I can't tell you how grateful I am\n"
	.string "for your rescue of LOSTELLE.\p"
	.string "Thanks to your feat, the people of\n"
	.string "THREE ISLAND have changed their\l"
	.string "attitudes about KANTO people.\p"
	.string "And, I'm from KANTO, you see.\p"
	.string "The people of THREE ISLAND\n"
	.string "helped me add to my merchandise.$"
#endif

TwoIsland_Text_HopeYouGiveItYourBest::
#if GERMAN
	.string "Hallo! Ich gebe hier mein Bestes!\n"
	.string "Ich hoffe, du auch {PLAYER}.$"
#else
	.string "Hi! I'm giving it my best here.\n"
	.string "I hope you do too, {PLAYER}.$"
#endif

TwoIsland_Text_BringingItemsFromDistantLands::
#if GERMAN
	.string "Oh, hallo, {PLAYER}!\n"
	.string "Willkommen!\p"
	.string "Ich bringe Items von fernen Inseln\n"
	.string "hierher.\p"
	.string "Ich habe auch einige seltene\n"
	.string "Items. Sieh dich in Ruhe um!$"
#else
	.string "Oh, hello, {PLAYER}!\n"
	.string "Welcome!\p"
	.string "I've started bringing in items from\n"
	.string "distant lands.\p"
	.string "I've got some rare items in, too.\n"
	.string "Please have a look!$"
#endif

TwoIsland_Text_FellowMovedFromCeladonCity::
#if GERMAN
	.string "Dieser Mann dort ist von Prismania\n"
	.string "City hergezogen.\p"
	.string "Er hat mit seinem kleinen Bruder\n"
	.string "einen Laden aufgemacht.\p"
	.string "Ich weiß nicht, ob er sich bewusst\n"
	.string "war, worauf er sich einlässt.$"
#else
	.string "That fellow there, he moved here\n"
	.string "from CELADON CITY.\p"
	.string "He started up a shop with his\n"
	.string "younger brother.\p"
	.string "You have to wonder if he knew what\n"
	.string "he was getting into.$"
#endif

TwoIsland_Text_ShopkeepersBrotherWorksGameCorner::
#if GERMAN
	.string "Der Bruder des Ladenbesitzers hat\n"
	.string "einen Job in der Spielhalle angenommen.\l"
	.string "Er versucht, mehr Geld zu verdienen,\l"
	.string "damit sie ihr Warenangebot vergrößern\l"
	.string "können.$"
#else
	.string "The shopkeeper's brother took\n"
	.string "a job at the GAME CORNER.\p"
	.string "He's trying to pull together money\n"
	.string "so they can buy more merchandise.$"
#endif

TwoIsland_Text_BrunoCameToIslandWhileBack::
#if GERMAN
	.string "Hör zu!\n"
	.string "Wusstest du…\p"
	.string "Ein berühmter Trainer ist vor geraumer\n"
	.string "Zeit auf das Eiland gekommen.\l"
	.string "Er ist einer der Top Vier!\l"
	.string "Sein Name ist Bruno!\p"
	.string "Er ist gegangen, weil er enttäuscht war,\n"
	.string "dass alle Wutkekse ausverkauft waren.$"
#else
	.string "Listen, listen.\n"
	.string "Did you know?\p"
	.string "A famous TRAINER came to the\n"
	.string "ISLAND a little while back.\p"
	.string "He's one of the ELITE FOUR.\n"
	.string "His name is BRUNO.\p"
	.string "He went away disappointed when he\n"
	.string "found out that they were all sold\l"
	.string "out of Rage Candybars.$"
#endif

TwoIsland_Text_BuyRareItemsHere::
#if GERMAN
	.string "Der anspruchsvolle Trainer\n"
	.string "kauft hier seltene Items!$"
#else
	.string "The discerning TRAINER knows to\n"
	.string "buy rare items here!$"
#endif

TwoIsland_Text_OldWomanLivesOutOnCape::
#if GERMAN
	.string "Am Kap lebt eine alte Frau in einer\n"
	.string "Hütte.\p"
	.string "Sie begutachtet Pokémon ganz genau. Es\n"
	.string "ist ein wenig merkwürdig.$"
#else
	.string "There's an old woman who lives in\n"
	.string "a cottage out on the cape.\p"
	.string "She gives the eye to POKéMON.\n"
	.string "It's a bit unnerving.$"
#endif

TwoIsland_Text_HaveYouTriedJumpingGame::
#if GERMAN
	.string "Boing! Boing!\n"
	.string "Hast du schon das Sprungspiel\l"
	.string "ausprobiert?\l"
	.string "Die Pokémon, die daran teilnehmen…\l"
	.string "Boing!\p"
	.string "Einige machen boing!\p"
	.string "Und andere machen boooooooing!\p"
	.string "Wusstest du das?\n"
	.string "Boing!$"
#else
	.string "Boing! Boing!\n"
	.string "Have you tried the jumping game?\p"
	.string "The POKéMON you can enter…\n"
	.string "Boing!\p"
	.string "Some go boing!\p"
	.string "And some go boooooooing!\p"
	.string "Did you know that?\n"
	.string "Boing!$"
#endif

