BattleFrontier_ExchangeServiceCorner_MapScripts::
	.byte 0

.macro setitemandprice item:req, price:req
	setvar VAR_0x8009, \item
	setvar VAR_0x8008, \price
.endm

BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	return

BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize::
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor::
	checkdecorspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	adddecoration VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_PCIsFull, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	additem VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleFrontier_ExchangeServiceCorner_EventScript_BagFull::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk1::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll
	case 10, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1::
	bufferdecorationname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster::
	setitemandprice DECOR_KISS_POSTER, 16
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion::
	setitemandprice DECOR_KISS_CUSHION, 32
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll::
	setitemandprice DECOR_SMOOCHUM_DOLL, 32
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll::
	setitemandprice DECOR_TOGEPI_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll::
	setitemandprice DECOR_MEOWTH_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll::
	setitemandprice DECOR_CLEFAIRY_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll::
	setitemandprice DECOR_DITTO_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll::
	setitemandprice DECOR_CYNDAQUIL_DOLL, 80
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll::
	setitemandprice DECOR_CHIKORITA_DOLL, 80
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll::
	setitemandprice DECOR_TOTODILE_DOLL, 80
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk2::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2::
	bufferdecorationname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll::
	setitemandprice DECOR_LAPRAS_DOLL, 128
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll::
	setitemandprice DECOR_SNORLAX_DOLL, 128
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll::
	setitemandprice DECOR_VENUSAUR_DOLL, 256
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll::
	setitemandprice DECOR_CHARIZARD_DOLL, 256
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll::
	setitemandprice DECOR_BLASTOISE_DOLL, 256
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_VitaminClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_Protein
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_Calcium
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_Iron
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_Zinc
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_Carbos
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_HPUp
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin::
	bufferitemname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Protein::
	setitemandprice ITEM_PROTEIN, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin

BattleFrontier_ExchangeServiceCorner_EventScript_Calcium::
	setitemandprice ITEM_CALCIUM, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin

BattleFrontier_ExchangeServiceCorner_EventScript_Iron::
	setitemandprice ITEM_IRON, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin

BattleFrontier_ExchangeServiceCorner_EventScript_Zinc::
	setitemandprice ITEM_ZINC, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin

BattleFrontier_ExchangeServiceCorner_EventScript_Carbos::
	setitemandprice ITEM_CARBOS, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin

BattleFrontier_ExchangeServiceCorner_EventScript_HPUp::
	setitemandprice ITEM_HP_UP, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin


BattleFrontier_ExchangeServiceCorner_EventScript_HoldItemClerk::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleFrontier_ExchangeServiceCorner_EventScript_PokeBallClerk::
	lock
	faceplayer
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPPokeBallShop
	waitstate
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem::
	bufferitemname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers::
	setitemandprice ITEM_LEFTOVERS, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb::
	setitemandprice ITEM_WHITE_HERB, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw::
	setitemandprice ITEM_QUICK_CLAW, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb::
	setitemandprice ITEM_MENTAL_HERB, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder::
	setitemandprice ITEM_BRIGHT_POWDER, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand::
	setitemandprice ITEM_CHOICE_BAND, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock::
	setitemandprice ITEM_KINGS_ROCK, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand::
	setitemandprice ITEM_FOCUS_BAND, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens::
	setitemandprice ITEM_SCOPE_LENS, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

BattleFrontier_ExchangeServiceCorner_EventScript_Man::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Sailor::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_EventScript_PokefanF::
	lock
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_RichBoy::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Girl::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize:
#if GERMAN
	.string "Hallo, dies ist die Tauschecke.\p"
	.string "Wir tauschen deine Gewinnpunkte gegen\n"
	.string "großartige Preise ein.\p"
	.string "Bitte such dir einen Preis von dieser\n"
	.string "Liste aus.$"
#else
	.string "Hello, this is the EXCHANGE SERVICE\n"
	.string "CORNER.\p"
	.string "We exchange the Battle Points you\n"
	.string "have collected for lovely prizes.\p"
	.string "Please choose a prize from this list.$"
#endif

@ Unused
BattleFrontier_ExchangeServiceCorner_Text_PleaseChoosePrize:
#if GERMAN
	.string "Bitte such dir einen Preis von dieser\n"
	.string "Liste aus.$"
#else
	.string "Please choose a prize from this list.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase:

BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC:
#if GERMAN
	.string "Danke! Wir senden das auf deinen PC.$"
#else
	.string "Thank you!\n"
	.string "We'll send it to your PC at home.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize:
#if GERMAN
	.string "Bitte, hier ist dein Preis.$"
#else
	.string "Here is your prize!$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints:
#if GERMAN
	.string "Es tut mir sehr Leid… Aber du hast nicht\n"
	.string "genug Gewinnpunkte…$"
#else
	.string "I'm so sorry…\n"
	.string "You don't have enough Battle Points…$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_PCIsFull:
#if GERMAN
	.string "Es tut mir sehr Leid…\n"
	.string "Aber dein PC ist voll…$"
#else
	.string "I'm so sorry…\n"
	.string "Your PC appears to be full…$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt:
#if GERMAN
	.string "Es tut mir sehr Leid…\n"
	.string "Aber du hast keinen Platz dafür…$"
#else
	.string "I'm so sorry…\n"
	.string "You don't have space to hold it…$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints:
#if GERMAN
	.string "Vielen Dank.\p"
	.string "Bitte komm wieder, wenn du dich\n"
	.string "entschieden hast.$"
#else
	.string "Thank you very much.\p"
	.string "Please visit us when you have\n"
	.string "saved up Battle Points.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls:
#if GERMAN
	.string "Oh, die sind so hübsch.\n"
	.string "Die hätte ich auch gerne!\l"
	.string "Niedliche Kissen!\l"
	.string "Große, fluffige Puppen!\l"
	.string "Kleine, fluffige Puppen!\l"
	.string "Ich würde sie am liebsten alle nehmen!$"
#else
	.string "Oh, they're so nice!\n"
	.string "I wish I had them!\l"
	.string "Cute cushions!\l"
	.string "Big plush DOLLS!\l"
	.string "Little plush DOLLS!\l"
	.string "I wish I had them all!$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant:
#if GERMAN
	.string "Überlass das deiner Mami!\p"
	.string "Möchtest du irgendetwas haben, werde\n"
	.string "ich alles tun, damit du es bekommst.$"
#else
	.string "Leave it to your mommy!\p"
	.string "If it's anything you want, I'll go\n"
	.string "through anything to get it, honey!$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher:
#if GERMAN
	.string "Hätte ich nur eines dieser Items hier,\n"
	.string "würden meine Pokémon viel stärker!\p"
	.string "Mit Sicherheit! Darauf kannst du\n"
	.string "wetten! Das steht fest!$"
#else
	.string "If I can get hold of the items here,\n"
	.string "my POKéMON will get tougher.\p"
	.string "You bet they will!\n"
	.string "No question about it!$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll:
#if GERMAN
	.string "Häh? Was glotzt du denn so doof?\p"
	.string "Ich mag es nicht, wie du meine\n"
	.string "Plüschpuppe anstarrst!\p"
	.string "Wenn du auch so eine haben willst,\n"
	.string "besorg dir eine! Nicht wahr, Kussilla?$"
#else
	.string "Hah?\n"
	.string "What are you gawking at?\p"
	.string "I don't like you staring at my plush\n"
	.string "doll like that.\p"
	.string "If you want it, go get one yourself!\n"
	.string "Isn't that right, SMOOCHUM?$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord:
#if GERMAN
	.string "Weißt du was?\n"
	.string "Wenn du deine Ergebnisse hier in den\p"
	.string "Kampf-Einrichtungen stetig\n"
	.string "verbesserst, geben sie dir mehr\l"
	.string "Gewinnpunkte.$"
#else
	.string "Did you know?\p"
	.string "If you stretch your record at any of\n"
	.string "the BATTLE facilities, they start\l"
	.string "giving you more and more Battle Points.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc::
#if GERMAN
	.string "Ein großes Poster von Kussilla.$"
#else
	.string "A large poster with a SMOOCHUM print.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc::
#if GERMAN
	.string "Kussilla-Kissen.\n"
	.string "Für eine Matte oder den Tisch.$"
#else
	.string "A SMOOCHUM cushion.\n"
	.string "Place it on a mat or a desk.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc::
#if GERMAN
	.string "Kussilla-Puppe.\n"
	.string "Für eine Matte oder den Tisch.$"
#else
	.string "A SMOOCHUM DOLL.\n"
	.string "Place it on a mat or a desk.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc::
#if GERMAN
	.string "Togepi-Puppe. Leg sie auf eine Matte\n"
	.string "oder einen Tisch.$"
#else
	.string "A TOGEPI DOLL.\n"
	.string "Place it on a mat or a desk.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc::
#if GERMAN
	.string "Mauzi-Puppe. Leg sie auf eine Matte\n"
	.string "oder einen Tisch.$"
#else
	.string "A MEOWTH DOLL.\n"
	.string "Place it on a mat or a desk.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc::
#if GERMAN
	.string "Piepi-Puppe. Leg sie auf eine Matte\n"
	.string "oder einen Tisch.$"
#else
	.string "A CLEFAIRY DOLL.\n"
	.string "Place it on a mat or a desk.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc::
#if GERMAN
	.string "Ditto-Puppe. Leg sie auf eine Matte\n"
	.string "oder einen Tisch.$"
#else
	.string "A DITTO DOLL.\n"
	.string "Place it on a mat or a desk.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc::
#if GERMAN
	.string "Feurigel-Puppe.\n"
	.string "Für eine Matte oder den Tisch.$"
#else
	.string "A CYNDAQUIL DOLL.\n"
	.string "Place it on a mat or a desk.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc::
#if GERMAN
	.string "Endivie-Puppe. Leg sie auf eine Matte\n"
	.string "oder einen Tisch.$"
#else
	.string "A CHIKORITA DOLL.\n"
	.string "Place it on a mat or a desk.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc::
#if GERMAN
	.string "Karnimani-Puppe.\n"
	.string "Für eine Matte oder den Tisch.$"
#else
	.string "A TOTODILE DOLL.\n"
	.string "Place it on a mat or a desk.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc::
#if GERMAN
	.string "Große Puppe. Leg sie auf eine Matte\n"
	.string "oder den Tisch.$"
#else
	.string "A large DOLL.\n"
	.string "Place it on a mat or a desk.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc::
#if GERMAN
	.string "Hebt den Angr.-Wert eines Pokémon.$"
#else
	.string "Raises the stat ATTACK of one\n"
	.string "POKéMON.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc::
#if GERMAN
	.string "Hebt den SP. Angr.-Wert eines Pokémon.$"
#else
	.string "Raises the stat SP. ATK of one\n"
	.string "POKéMON.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_IronDesc::
#if GERMAN
	.string "Hebt den Vert.-Wert eines Pokémon.$"
#else
	.string "Raises the stat DEFENSE of one\n"
	.string "POKéMON.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_ZincDesc::
#if GERMAN
	.string "Hebt den SP. Vert.-Wert eines Pokémon.$"
#else
	.string "Raises the stat SP. DEF of one\n"
	.string "POKéMON.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc::
#if GERMAN
	.string "Hebt den INIT.-Wert eines Pokémon.$"
#else
	.string "Raises the stat SPEED of one\n"
	.string "POKéMON.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc::
#if GERMAN
	.string "Hebt die KP eines Pokémon.$"
#else
	.string "Raises the HP of one POKéMON.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc::
#if GERMAN
	.string "Item (Tragen) füllt im Kampf langsam\n"
	.string "KP wieder auf.$"
#else
	.string "A hold item that gradually restores\n"
	.string "HP in battle.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_WhiteHerbDesc::
#if GERMAN
	.string "Item (Tragen) hebt jede\n"
	.string "Statusveränderung auf.$"
#else
	.string "A hold item that restores any\n"
	.string "lowered stat.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_QuickClawDesc::
#if GERMAN
	.string "Item (Tragen) hebt die\n"
	.string "Erstschlagquote.$"
#else
	.string "A hold item that occasionally allows\n"
	.string "the first strike.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_MentalHerbDesc::
#if GERMAN
	.string "Item (Tragen) erlöst Pokémon von der\n"
	.string "Anziehung.$"
#else
	.string "A hold item that snaps POKéMON out\n"
	.string "of infatuation.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_BrightpowderDesc::
#if GERMAN
	.string "Item (Tragen) senkt die Genauigkeit\n"
	.string "des Gegners.$"
#else
	.string "A hold item that casts a glare to\n"
	.string "reduce accuracy.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc::
#if GERMAN
	.string "Stärkt eine Attacke. Aber nur diese\n"
	.string "ist einsetzbar.$"
#else
	.string "Raises a move's power, but permits\n"
	.string "only that move.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_KingsRockDesc::
#if GERMAN
	.string "Item (Tragen) kann Gegner\n"
	.string "zurückweichen lassen.$"
#else
	.string "A hold item that may cause flinching\n"
	.string "when the foe is hit.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_FocusBandDesc::
#if GERMAN
	.string "Item (Tragen) kann manchmal K.O.\n"
	.string "verhindern.$"
#else
	.string "A hold item that occasionally\n"
	.string "prevents fainting.$"
#endif

BattleFrontier_ExchangeServiceCorner_Text_ScopeLensDesc::
#if GERMAN
	.string "Item (Tragen) erhöht die\n"
	.string "Volltrefferquote.$"
#else
	.string "A hold item that raises the\n"
	.string "critical-hit rate.$"
#endif
