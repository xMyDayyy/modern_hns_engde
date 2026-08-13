FiveIsland_MemorialPillar_Frlg_MapScripts::
	.byte 0

FiveIsland_MemorialPillar_EventScript_MemorialMan::
	lock
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
	closemessage
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
	waitmovement 0
	delay 45
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
	release
	end

FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
	release
	end

FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
	giveitem ITEM_TM42
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
	release
	end

FiveIsland_MemorialPillar_EventScript_Memorial::
	lockall
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
	checkitem ITEM_LEMONADE
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FiveIsland_MemorialPillar_EventScript_PlaceLemonade
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
	removeitem ITEM_LEMONADE
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
	closemessage
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 45
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
	giveitem ITEM_TM42
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
	return

FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
	releaseall
	end

FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
	releaseall
	end

FiveIsland_MemorialPillar_Text_MiloIntro::
#if GERMAN
	.string "Ich bin der älteste der Vogel-brüder.\p"
	.string "Das Beste an Vögeln…\n"
	.string "Das muss der Schnabel sein.$"
#else
	.string "I'm the eldest of the BIRD\n"
	.string "BROTHERS.\p"
	.string "The best thing about birds…\n"
	.string "It has to be the beak.$"
#endif

FiveIsland_MemorialPillar_Text_MiloDefeat::
#if GERMAN
	.string "Oh, so scharf!$"
#else
	.string "Oh, so sharp!$"
#endif

FiveIsland_MemorialPillar_Text_MiloPostBattle::
#if GERMAN
	.string "Von hier kannst du nach Eiland\n"
	.string "Vier fliegen.$"
#else
	.string "You can fly to FOUR ISLAND from\n"
	.string "here.$"
#endif

FiveIsland_MemorialPillar_Text_ChazIntro::
#if GERMAN
	.string "Ich bin der zweitälteste der\n"
	.string "Vogel-brüder.\p"
	.string "Das Beste an Vögeln…\n"
	.string "Das müssen die Flügel sein.$"
#else
	.string "I'm the middle kid of the BIRD\n"
	.string "BROTHERS.\p"
	.string "The best thing about birds…\n"
	.string "It has to be the wings.$"
#endif

FiveIsland_MemorialPillar_Text_ChazDefeat::
#if GERMAN
	.string "Flatter, flatter!$"
#else
	.string "Flap, flap!$"
#endif

FiveIsland_MemorialPillar_Text_ChazPostBattle::
#if GERMAN
	.string "Da entlang war ein wahrhaft ernster\n"
	.string "Typ.$"
#else
	.string "There was a really somber guy\n"
	.string "over that way.$"
#endif

FiveIsland_MemorialPillar_Text_HaroldIntro::
#if GERMAN
	.string "Ich bin der jüngste der Vogel-brüder.\p"
	.string "Das Beste an Vögeln…\n"
	.string "Das muss das Gefieder sein.$"
#else
	.string "I'm the youngest of the BIRD\n"
	.string "BROTHERS.\p"
	.string "The best thing about birds…\n"
	.string "It has to be the down.$"
#endif

FiveIsland_MemorialPillar_Text_HaroldDefeat::
#if GERMAN
	.string "Die Federn sind so weich…\n"
	.string "Ich könnte schlafen…$"
#else
	.string "Down is so comfy…\n"
	.string "It makes me drowsy…$"
#endif

FiveIsland_MemorialPillar_Text_HaroldPostBattle::
#if GERMAN
	.string "Es freut mich, wenn Vogel-Pokémon\n"
	.string "verspielt Männchen machen…$"
#else
	.string "It fills me with happiness when\n"
	.string "bird POKéMON beg playfully…$"
#endif

FiveIsland_MemorialPillar_Text_ScrubScrub::
#if GERMAN
	.string "Putz, putz…$"
#else
	.string "Scrub, scrub…$"
#endif

FiveIsland_MemorialPillar_Text_YourMonsLookHealthy::
#if GERMAN
	.string "Hallo…\n"
	.string "Deine Pokémon sehen gesund aus…$"
#else
	.string "Hello…\n"
	.string "Your POKéMON look healthy…$"
#endif

FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix::
#if GERMAN
	.string "Hier habe ich mein Onix begraben…\n"
	.string "Es hieß Tectonix…$"
#else
	.string "This is where I buried my ONIX…\n"
	.string "It was named TECTONIX…$"
#endif

FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering::
#if GERMAN
	.string "“Tectonix ruht hier in Frieden“ ist in\n"
	.string "den Stein gemeißelt.\p"
	.string "Vor dem Grab wurde eine Limonade\n"
	.string "zum Gedenken dargereicht.$"
#else
	.string "“Here lies TECTONIX” is engraved\n"
	.string "on a boulder.\p"
	.string "There is a LEMONADE placed as an\n"
	.string "offering in front of the grave.$"
#endif

FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering::
#if GERMAN
	.string "Es ist eine Art Maschine. Sie ist\n"
	.string "gewiss beeindruckend.$"
#else
	.string "Would you like to leave another\n"
	.string "LEMONADE as an offering?$"
#endif

FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade::
#if GERMAN
	.string "Es ist eine Blaupause mit vielen\n"
	.string "Diagrammen und Text.$"
#else
	.string "{PLAYER} placed a can of LEMONADE\n"
	.string "in front of the grave.$"
#endif

FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis::
#if GERMAN
	.string "D-danke…\p"
	.string "Das war das Lieblingsgetränk von\n"
	.string "meinem Tectonix…\p"
	.string "Ich kenne dich nicht, aber du hast\n"
	.string "Edelmut bewiesen…\p"
	.string "Das hat mich aufgemuntert.\p"
	.string "Nimm dies bitte als Zeichen meiner\n"
	.string "Wertschätzung. Danke!$"
#else
	.string "Th-thank you…\p"
	.string "That was my TECTONIX's favorite\n"
	.string "drink…\p"
	.string "I don't even know you, but your\n"
	.string "act of kindness…\p"
	.string "It's uplifted me a little.\p"
	.string "Can you please take this as my\n"
	.string "thanks?$"
#endif

FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo::
#if GERMAN
	.string "Ein Pokémon ist im Fernsehen!\n"
	.string "Es scheint Spaß zu haben!$"
#else
	.string "Please be good to your POKéMON,\n"
	.string "too.$"
#endif

FiveIsland_MemorialPillar_Text_DontHaveRoomForIt::
#if GERMAN
	.string "Wenn du keinen Platz hast, bewahre ich\n"
	.string "es bis zum nächsten Mal für dich auf.$"
#else
	.string "If you don't have room for it,\n"
	.string "I'll hold it for you till next time.$"
#endif

FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks::
#if GERMAN
	.string "Ah, du bist es, von neulich…\p"
	.string "Ich habe es immer noch und du solltest\n"
	.string "es als Zeichen meiner Wertschätzung\l"
	.string "erhalten.$"
#else
	.string "Oh, it's you from that time…\p"
	.string "I still have that thing I wanted\n"
	.string "you to have as my thanks.$"
#endif

FiveIsland_MemorialPillar_Text_ScrubScrubTectonix::
#if GERMAN
	.string "Putz, putz…\p"
	.string "………\n"
	.string "Tectonix…$"
#else
	.string "Scrub, scrub…\p"
	.string "… … …\n"
	.string "TECTONIX…$"
#endif

FiveIsland_MemorialPillar_Text_HereLiesTectonix::
#if GERMAN
	.string "Die Felsen und Steine bilden eine\n"
	.string "ordentlich angelegte Pyramide.\p"
	.string "“Tectonix ruht hier in Frieden“ ist in\n"
	.string "den Stein gemeißelt.$"
#else
	.string "Boulders and rocks are neatly piled\n"
	.string "up as a cairn.\p"
	.string "“Here lies TECTONIX” is engraved\n"
	.string "on a boulder.$"
#endif

