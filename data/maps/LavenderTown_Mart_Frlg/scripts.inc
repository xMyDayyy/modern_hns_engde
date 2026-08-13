LavenderTown_Mart_Frlg_MapScripts::
	.byte 0

LavenderTown_Mart_EventScript_BaldingMan::
	msgbox LavenderTown_Mart_Text_SearchingForStatRaiseItems, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Rocker::
	msgbox LavenderTown_Mart_Text_DidYouBuyRevives, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Youngster::
	msgbox LavenderTown_Mart_Text_TrainerDuosCanChallengeYou, MSGBOX_NPC
	end

LavenderTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LavenderTown_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
LavenderTown_Mart_Items::
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
	release
	end

LavenderTown_Mart_Text_SearchingForStatRaiseItems::
#if GERMAN
	.string "Ich suche nach Items, die die\n"
	.string "Fähigkeiten meiner Pokémon während\l"
	.string "eines Kampfes verbessern!\p"
	.string "Zum Beispiel X-Angriff, X-Abwehr,\n"
	.string "X-Tempo und X-Spezial.\p"
	.string "Weißt du, wo ich sie kaufen kann?$"
#else
	.string "I'm searching for items that raise\n"
	.string "the stats of POKéMON.\p"
	.string "They're effective over the course\n"
	.string "of a single battle.\p"
	.string "X ATTACK, X DEFEND, X SPEED, \n"
	.string "and X SPECIAL are what I'm after.\p"
	.string "Do you know where I can get them?$"
#endif

LavenderTown_Mart_Text_DidYouBuyRevives::
#if GERMAN
	.string "Kennst du den Beleber?\n"
	.string "Damit kannst du bereits besiegten\l"
	.string "Pokémon wieder Kraft geben!$"
#else
	.string "Did you buy some REVIVES?\n"
	.string "They revive any fainted POKéMON!$"
#endif

LavenderTown_Mart_Text_TrainerDuosCanChallengeYou::
#if GERMAN
	.string "Manchmal fordert dich ein Trainer-Duo\n"
	.string "mit zwei Pokémon zum Kampf heraus.\l"
	.string "In diesem Fall musst du auch zwei\l"
	.string "Pokémon in den Kampf schicken!$"
#else
	.string "Sometimes, a TRAINER duo will\n"
	.string "challenge you with two POKéMON\l"
	.string "at the same time.\p"
	.string "If that happens, you have to send\n"
	.string "out two POKéMON to battle, too.$"
#endif

LavenderTown_Mart_Text_SoldNuggetFromMountainsFor5000::
	.string "この　あいだ　やまおくで\n"
	.string "きんのたまを　ひろい　ましてね！\p"
	.string "つかえない　しなもの　ですが\n"
	.string "うったら　なんと　5000¥でした$"
