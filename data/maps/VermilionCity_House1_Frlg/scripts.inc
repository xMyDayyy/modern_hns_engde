VermilionCity_House1_Frlg_MapScripts::
	.byte 0

VermilionCity_House1_EventScript_FishingGuru::
	lock
	faceplayer
	goto_if_set FLAG_GOT_OLD_ROD, VermilionCity_House1_EventScript_AlreadyGotOldRod
	msgbox VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, VermilionCity_House1_EventScript_GiveOldRod
	msgbox VermilionCity_House1_Text_OhThatsSoDisappointing
	release
	end

VermilionCity_House1_EventScript_AlreadyGotOldRod::
	msgbox VermilionCity_House1_Text_HowAreTheFishBiting
	release
	end

VermilionCity_House1_EventScript_GiveOldRod::
	checkitemspace ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_House1_EventScript_NoRoomForOldRod
	additem ITEM_OLD_ROD
	msgbox VermilionCity_House1_Text_TakeThisAndFish
	msgreceiveditem VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru, ITEM_OLD_ROD
	setflag FLAG_GOT_OLD_ROD
	msgbox VermilionCity_House1_Text_FishingIsAWayOfLife
	release
	end

VermilionCity_House1_EventScript_NoRoomForOldRod::
	msgbox VermilionCity_House1_Text_NoRoomForNiceGift
	release
	end

VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish::
#if GERMAN
	.string "Ich bin der Profiangler!\p"
	.string "Ich liebe den Angelsport!\p"
	.string "Angelst du auch gerne?$"
#else
	.string "I'm the FISHING GURU!\p"
	.string "I simply looove fishing!\n"
	.string "I can't bear to go without.\p"
	.string "Tell me, do you like to fish?$"
#endif

VermilionCity_House1_Text_TakeThisAndFish::
#if GERMAN
	.string "Klasse!\n"
	.string "Du bist mir sympathisch!\p"
	.string "Nimm das hier und gehe angeln!$"
#else
	.string "Grand! I like your style.\n"
	.string "I think we can be friends.\p"
	.string "Take this and fish, young friend!$"
#endif

VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru::
#if GERMAN
	.string "{PLAYER} erhält\n"
	.string "eine Angel!$"
#else
	.string "{PLAYER} received an OLD ROD from\n"
	.string "the FISHING GURU.$"
#endif

VermilionCity_House1_Text_FishingIsAWayOfLife::
#if GERMAN
	.string "Angeln ist meine Leidenschaft!\p"
	.string "Suche in Seen und Flüssen und\n"
	.string "lande den großen Fang!$"
#else
	.string "Fishing is a way of life!\n"
	.string "It is like the finest poetry.\p"
	.string "From the seas to rivers, go out\n"
	.string "and land the big one, my friend.$"
#endif

VermilionCity_House1_Text_OhThatsSoDisappointing::
#if GERMAN
	.string "Oh!\n"
	.string "Das ist so enttäuschend...$"
#else
	.string "Oh…\n"
	.string "That's so disappointing…$"
#endif

VermilionCity_House1_Text_HowAreTheFishBiting::
#if GERMAN
	.string "Hallo, {PLAYER}!\p"
	.string "Wie beißen die Fische?$"
#else
	.string "Hello there, {PLAYER}!\p"
	.string "How are the fish biting?$"
#endif

VermilionCity_House1_Text_NoRoomForNiceGift::
#if GERMAN
	.string "Oh nein!\p"
	.string "Ich habe ein Geschenk für dich!\n"
	.string "Aber du kannst nichts mehr tragen!$"
#else
	.string "Oh, no!\p"
	.string "I had a nice gift for you, but you\n"
	.string "have no room for it!$"
#endif

