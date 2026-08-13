TrainerHill_Courtyard_hns_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Courtyard_OnTransition
	.byte 0

TrainerHill_Courtyard_OnTransition::
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
	end

TrainerHill_Courtyard_EventScript_BattleTowerSign::
	lock
	msgbox BattleTowerOutsideSignText, MSGBOX_SIGN
	closemessage
	release
	end

TrainerHill_Courtyard_EventScript_Tent_Factory::
	lock
	msgbox BattleTower_Battle_Tent_Text_Factory, MSGBOX_SIGN
	closemessage
	release
	end

TrainerHill_Courtyard_EventScript_Tent_Palace::
	lock
	msgbox BattleTower_Battle_Tent_Text_Palace, MSGBOX_SIGN
	closemessage
	release
	end

TrainerHill_Courtyard_EventScript_Tent_Arena::
	lock
	msgbox BattleTower_Battle_Tent_Text_Arena, MSGBOX_SIGN
	closemessage
	release
	end

TrainerHill_Courtyard_EventScript_Engineer::
	lock
	faceplayer
	msgbox BattleTowerOutsideText_Closed, MSGBOX_DEFAULT
	closemessage
	release
	end

TrainerHill_Courtyard_EventScript_Youngster::
	lock
	faceplayer
	msgbox BattleTowerOutsideYoungsterText, MSGBOX_DEFAULT
	closemessage
	release
	end

TrainerHill_Courtyard_EventScript_Beauty::
	lock
	faceplayer
	msgbox BattleTowerOutsideBeautyText, MSGBOX_DEFAULT
	closemessage
	release
	end

TrainerHill_Courtyard_EventScript_Sailor::
	lock
	faceplayer
	msgbox BattleTowerOutsideSailorText, MSGBOX_DEFAULT
	closemessage
	release
	end

BattleTowerOutsideYoungsterText:
#if GERMAN
	.string "Wow, der Trainerberg ist riesig!\p"
	.string "Dort gibt es sicher viele\n"
	.string "verschiedene Pokémon!$"
#else
	.string "Wow, the TRAINER HILL is huge!\p"
	.string "There must be many kinds of\n"
	.string "POKéMON in there!$"
#endif

BattleTowerOutsideBeautyText:
#if GERMAN
	.string "In den Kampfzelten darfst du\n"
	.string "nur drei Pokémon einsetzen.\p"
	.string "Es ist schwer, die richtigen\n"
	.string "drei auszuwählen…$"
#else
	.string "In the BATTLE TENTS, you can\n"
	.string "use only three POKéMON.\p"
	.string "It's so hard to decide which\n"
	.string "three should go into battle…$"
#endif

BattleTowerOutsideSailorText:
#if GERMAN
	.string "Hehe, ich habe mich von der\n"
	.string "Arbeit davongeschlichen.\p"
	.string "Ich gehe nicht zurück, bevor\n"
	.string "ich gewonnen habe!\p"
	.string "Ich muss den Sieg holen!$"
#else
	.string "Hehehe, I snuck out from work.\p"
	.string "I can't bail out until I've won!\p"
	.string "I have to win it all. That I must!$"
#endif

BattleTowerOutsideSignText:
#if GERMAN
	.string "{UP_ARROW} Eingang Trainerberg\p"
	.string "Erklimmt die Höhen,\n"
	.string "hitzblütige Trainer!\p"
	.string "{RIGHT_ARROW} Kampfzelte.$"
#else
	.string "{UP_ARROW} TRAINER HILL ENTRANCE\p"
	.string "“Scale the heights, you hot-blooded\n"
	.string "TRAINERS!”\p"
	.string "{RIGHT_ARROW} BATTLE TENTS.$"
#endif

BattleTower_Battle_Tent_Text_Factory:
#if GERMAN
	.string "Kampfzelt: Fabrik\n"
	.string "Finde das ultimative Pokémon!$"
#else
	.string "BATTLE TENT: FACTORY\n"
	.string "“Find it! The ultimate POKéMON!”$"
#endif

BattleTower_Battle_Tent_Text_Palace:
#if GERMAN
	.string "Kampfzelt: Palast\n"
	.string "Erlebe packende Kämpfe!$"
#else
	.string "BATTLE TENT: PALACE\n"
	.string "“Feast Your Eyes on Battles!”$"
#endif

BattleTower_Battle_Tent_Text_Arena:
#if GERMAN
	.string "Kampfzelt: Arena\n"
	.string "Die stärksten Teams treffen sich!$"
#else
	.string "BATTLE TENT: ARENA\n"
	.string "“May the Greatest Teams Gather!”$"
#endif

BattleTowerOutsideText_Closed:
#if GERMAN
	.string "Der Trainerberg ist derzeit\n"
	.string "wegen Reparaturen geschlossen.$"
#else
	.string "The TRAINER HILL is currently\n"
	.string "closed for repairs.$"
#endif


TrainerHill_Courtyard_EventScript_LeftMoveTutor::
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor_hns
	end

TrainerHill_Courtyard_EventScript_RightMoveTutor::
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor_hns
	end

TrainerHill_Courtyard_EventScript_ElementalMoveTutor::
	goto BattleFrontier_Lounge7_EventScript_ElementalMoveTutor
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_DecorClerk1::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPDecorShop1
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_DecorClerk2::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPDecorShop2
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_VitaminClerk::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPVitaminShop
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_HoldItemClerk::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPHoldItemShop
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_HoldItemClerk2::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPHoldItemShop2
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_PowerClerk::
	lock
	faceplayer
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special CreateBPPowerShop
	waitstate
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_Man::
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_Sailor::
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_PokefanF::
	lock
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
	release
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_RichBoy::
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_Girl::
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_OldWTMan::
	msgbox TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_OldWTMan_Text, MSGBOX_NPC
	end

TrainerHill_Courtyard_ExchangeServiceCorner_EventScript_OldWTMan_Text:
#if GERMAN
	.string "Hallo! Die Wundertausch-Stationen\n"
	.string "gibt es jetzt in jedem\l"
	.string "Pokémon-Center. Viel Spaß!$"
#else
	.string "Hi! If you are looking for the\n"
	.string "WONDERTRADE, they're now located in\l"
	.string "every POKéMON CENTER. Have fun!$"
#endif

TrainerHill_Courtyard_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize:
#if GERMAN
	.string "Willkommen im\n"
	.string "Tausch-Service.\p"
	.string "Hier kannst du deine gesammelten\n"
	.string "Gewinnpunkte gegen tolle Preise\l"
	.string "eintauschen.\p"
	.string "Bitte wähle einen Preis aus.$"
#else
	.string "Hello, this is the EXCHANGE SERVICE\n"
	.string "CORNER.\p"
	.string "We exchange the Battle Points you\n"
	.string "have collected for lovely prizes.\p"
	.string "Please choose a prize from this list.$"
#endif

TrainerHill_Courtyard_ExchangeServiceCorner_Text_WishIHadAllDolls:
#if GERMAN
	.string "Oh, die sind so süß!\n"
	.string "Ich hätte sie alle gern!\l"
	.string "Niedliche Kissen!\l"
	.string "Große Plüschis!\l"
	.string "Kleine Plüschis!\l"
	.string "Ich will sie wirklich alle!$"
#else
	.string "Oh, they're so nice!\n"
	.string "I wish I had them!\l"
	.string "Cute cushions!\l"
	.string "Big plush DOLLS!\l"
	.string "Little plush DOLLS!\l"
	.string "I wish I had them all!$"
#endif

TrainerHill_Courtyard_ExchangeServiceCorner_Text_GetYouAnythingYouWant:
#if GERMAN
	.string "Überlass das nur deiner Mama!\p"
	.string "Für alles, was du möchtest,\n"
	.string "würde ich Berge versetzen,\l"
	.string "mein Schatz!$"
#else
	.string "Leave it to your mommy!\p"
	.string "If it's anything you want, I'll go\n"
	.string "through anything to get it, honey!$"
#endif

TrainerHill_Courtyard_ExchangeServiceCorner_Text_ItemsWillGetMonTougher:
#if GERMAN
	.string "Wenn ich diese Items bekomme,\n"
	.string "werden meine Pokémon stärker.\p"
	.string "Darauf kannst du wetten!\n"
	.string "Ganz bestimmt!$"
#else
	.string "If I can get hold of the items here,\n"
	.string "my POKéMON will get tougher.\p"
	.string "You bet they will!\n"
	.string "No question about it!$"
#endif

TrainerHill_Courtyard_ExchangeServiceCorner_Text_GoGetYourOwnDoll:
#if GERMAN
	.string "Hä?\n"
	.string "Was starrst du denn so?\p"
	.string "Ich mag es nicht, wenn du mein\n"
	.string "Plüschi so anstarrst.\p"
	.string "Wenn du eins willst, hol dir\n"
	.string "doch selbst eins!\p"
	.string "Nicht wahr, Kussilla?$"
#else
	.string "Hah?\n"
	.string "What are you gawking at?\p"
	.string "I don't like you staring at my plush\n"
	.string "doll like that.\p"
	.string "If you want it, go get one yourself!\n"
	.string "Isn't that right, SMOOCHUM?$"
#endif

TrainerHill_Courtyard_ExchangeServiceCorner_Text_MoreBattlePointsForRecord:
#if GERMAN
	.string "Wusstest du das?\p"
	.string "Wenn du in den Kampfanlagen\n"
	.string "immer bessere Rekorde schaffst,\p"
	.string "erhältst du nach und nach mehr\n"
	.string "Gewinnpunkte.$"
#else
	.string "Did you know?\p"
	.string "If you stretch your record at any of\n"
	.string "the BATTLE facilities, they start\l"
	.string "giving you more and more Battle Points.$"
#endif
