Route12_FishingHouse_Frlg_MapScripts::
	.byte 0

Route12_FishingHouse_EventScript_FishingGuruBrother::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SUPER_ROD, Route12_FishingHouse_EventScript_CheckMagikarpRecord
	msgbox Route12_FishingHouse_Text_DoYouLikeToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route12_FishingHouse_EventScript_GiveSuperRod
	msgbox Route12_FishingHouse_Text_OhThatsDisappointing
	release
	end

Route12_FishingHouse_EventScript_GiveSuperRod::
	checkitemspace ITEM_SUPER_ROD
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoRoomForSuperRod
	additem ITEM_SUPER_ROD
	msgbox Route12_FishingHouse_Text_TakeThisAndFish
	msgreceiveditem Route12_FishingHouse_Text_ReceivedSuperRod, ITEM_SUPER_ROD
	setflag FLAG_GOT_SUPER_ROD
	msgbox Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe
	release
	end

Route12_FishingHouse_EventScript_NoRoomForSuperRod::
	msgbox Route12_FishingHouse_Text_NoRoomForGift
	release
	end

Route12_FishingHouse_EventScript_CheckMagikarpRecord::
	setvar VAR_0x8004, SPECIES_MAGIKARP
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoMagikarpInParty
	special GetMagikarpSizeRecordInfo
	msgbox Route12_FishingHouse_Text_OhMagikarpAllowMeToSee
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	goto_if_ge VAR_RESULT, PARTY_SIZE, Route12_FishingHouse_EventScript_CancelShowMon
	special CompareMagikarpSize
	goto_if_eq VAR_RESULT, 1, Route12_FishingHouse_EventScript_NotMagikarp
	goto_if_eq VAR_RESULT, 2, Route12_FishingHouse_EventScript_NotRecordMagikarp
	goto_if_eq VAR_RESULT, 3, Route12_FishingHouse_EventScript_NewRecordMagikarp
	goto_if_eq VAR_RESULT, 4, Route12_FishingHouse_EventScript_TieRecordMagikarp
	release
	end

Route12_FishingHouse_EventScript_NoMagikarpInParty::
	msgbox Route12_FishingHouse_Text_TryFishingBringMeMagikarp
	release
	end

Route12_FishingHouse_EventScript_CancelShowMon::
	release
	end

Route12_FishingHouse_EventScript_NotMagikarp::
	msgbox Route12_FishingHouse_Text_DoesntLookLikeMagikarp
	release
	end

Route12_FishingHouse_EventScript_NotRecordMagikarp::
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NewRecordMagikarp
	msgbox Route12_FishingHouse_Text_HmmXInchesDoesntMeasureUp
	release
	end

Route12_FishingHouse_EventScript_TieRecordMagikarp::
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NewRecordMagikarp
	msgbox Route12_FishingHouse_Text_HuhXInchesSameSizeAsLast
	release
	end

Route12_FishingHouse_EventScript_NewRecordMagikarp::
	setflag FLAG_GOT_RECORD_SETTING_MAGIKARP
	msgbox Route12_FishingHouse_Text_WhoaXInchesTakeThis
	giveitem ITEM_NET_BALL
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoRoomForNetBall
	msgbox Route12_FishingHouse_Text_LookForwardToGreaterRecords
	release
	end

Route12_FishingHouse_EventScript_NoRoomForNetBall::
	msgbox Route12_FishingHouse_Text_NoRoomForGift
	release
	end

Route12_FishingHouse_EventScript_MagikarpRecordSign::
	lockall
	goto_if_set FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet
	msgbox Route12_FishingHouse_Text_BlankChartOfSomeSort
	releaseall
	end

Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet::
	special GetMagikarpSizeRecordInfo
	msgbox Route12_FishingHouse_Text_MostGiganticMagikarpXInches
	releaseall
	end

Route12_FishingHouse_Text_DoYouLikeToFish::
#if GERMAN
	.string "Mein Bruder ist der Profi-Angler!\p"
	.string "Ich liebe den Angelsport!\p"
	.string "Möchtest du auch angeln?$"
#else
	.string "I'm the FISHING GURU's younger\n"
	.string "brother.\p"
	.string "I simply looove fishing!\n"
	.string "I can't bear to go without.\p"
	.string "Tell me, do you like to fish?$"
#endif

Route12_FishingHouse_Text_TakeThisAndFish::
#if GERMAN
	.string "Klasse!\n"
	.string "Du bist mir sympathisch!\p"
	.string "Nimm das hier und gehe angeln!$"
#else
	.string "Grand! I like your style.\n"
	.string "I think we can be friends.\p"
	.string "Take this and fish, young friend!$"
#endif

Route12_FishingHouse_Text_ReceivedSuperRod::
#if GERMAN
	.string "{PLAYER} erhält\n"
	.string "eine Superangel!$"
#else
	.string "{PLAYER} received a SUPER ROD from\n"
	.string "the FISHING GURU's brother.$"
#endif

Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe::
#if GERMAN
	.string "Angeln ist nicht nur ein Sport, es\n"
	.string "ist eine Kunst!\p"
	.string "Nun ziehe los, um den großen Fang\n"
	.string "zu landen!\p"
	.string "Ich habe eine Bitte:\p"
	.string "Fängst du mit dieser Angel ein großes\n"
	.string "Karpador, möchte ich es sehen.\p"
	.string "Meine Liebe zum Angeln steht meiner\n"
	.string "Liebe für große Karpador in nichts\l"
	.string "nach!$"
#else
	.string "Fishing is a way of life!\n"
	.string "It is like the finest poetry.\p"
	.string "From the seas to rivers, go out\n"
	.string "and land the big one, my friend.\p"
	.string "Now, I have a request.\p"
	.string "If you catch a big MAGIKARP \n"
	.string "with that ROD, I want to see it.\p"
	.string "As much as I love to fish, I also\n"
	.string "love seeing gigantic MAGIKARP.$"
#endif

Route12_FishingHouse_Text_OhThatsDisappointing::
#if GERMAN
	.string "Oh!\n"
	.string "Das ist so enttäuschend...$"
#else
	.string "Oh…\n"
	.string "That's so disappointing…$"
#endif

Route12_FishingHouse_Text_TryFishingBringMeMagikarp::
#if GERMAN
	.string "Hallo, {PLAYER}!\p"
	.string "Benutze die Superangel in allen\n"
	.string "Gewässern.\p"
	.string "Du kannst die verschiedensten\n"
	.string "Pokémon damit fangen!\p"
	.string "Und vergiss nicht, ein großes\n"
	.string "Karpador für mich zu fangen.$"
#else
	.string "Hello there, {PLAYER}!\n"
	.string "Have you been fishing?\p"
	.string "Try fishing with the SUPER ROD in\n"
	.string "any body of water.\p"
	.string "You'll find different POKéMON in\n"
	.string "different places.\p"
	.string "Oh, and don't forget to bring me\n"
	.string "gigantic MAGIKARP.$"
#endif

Route12_FishingHouse_Text_OhMagikarpAllowMeToSee::
#if GERMAN
	.string "Oh? {PLAYER}?\n"
	.string "Wenn das nicht Karpador ist!\p"
	.string "Darf ich es sehen, bitte!$"
#else
	.string "Oh? {PLAYER}?\n"
	.string "Why, if it isn't a MAGIKARP!\p"
	.string "Allow me to see it, quick!$"
#endif

Route12_FishingHouse_Text_WhoaXInchesTakeThis::
#if GERMAN
	.string "……… Wow!\n"
	.string "{STR_VAR_2} cm!\p"
	.string "Du hast eine seltene, elitäre Affinität\n"
	.string "zu den poetischen Gesichtspunkten des\l"
	.string "Angelns!\l"
	.string "Du musst das haben!\l"
	.string "Ich bestehe darauf!$"
#else
	.string "… … …Whoa!\n"
	.string "{STR_VAR_2} inches!\p"
	.string "You have a rare appreciation for\n"
	.string "the fine, poetic aspects of fishing!\p"
	.string "You must take this.\n"
	.string "I insist!$"
#endif

Route12_FishingHouse_Text_LookForwardToGreaterRecords::
#if GERMAN
	.string "Ich freue mich schon auf noch\n"
	.string "bessere Rekorde von dir!$"
#else
	.string "I'll look forward to seeing greater\n"
	.string "records from you!$"
#endif

Route12_FishingHouse_Text_HuhXInchesSameSizeAsLast::
#if GERMAN
	.string "Häh!\n"
	.string "{STR_VAR_2} cm?\p"
	.string "Das ist genauso groß, wie zuvor!$"
#else
	.string "Huh?\n"
	.string "{STR_VAR_2} inches?\p"
	.string "This is the same size as the one\n"
	.string "I saw before.$"
#endif

Route12_FishingHouse_Text_HmmXInchesDoesntMeasureUp::
#if GERMAN
	.string "Hm…\n"
	.string "Dieses ist {STR_VAR_2} cm groß!\p"
	.string "Das ist weniger als die {STR_VAR_3} cm,\n"
	.string "die du mir zuvor gezeigt hast.$"
#else
	.string "Hmm…\n"
	.string "This one is {STR_VAR_2} inches long.\p"
	.string "It doesn't measure up to the\n"
	.string "{STR_VAR_3}-inch one you brought before.$"
#endif

Route12_FishingHouse_Text_DoesntLookLikeMagikarp::
#if GERMAN
	.string "Uh… das sieht gar nicht\n"
	.string "wie ein Karpador aus!$"
#else
	.string "Uh… That doesn't look much like\n"
	.string "a MAGIKARP.$"
#endif

Route12_FishingHouse_Text_NoRoomForGift::
#if GERMAN
	.string "Oh nein!\p"
	.string "Ich habe ein Geschenk für dich!\n"
	.string "Aber du kannst nichts mehr tragen!$"
#else
	.string "Oh, no!\p"
	.string "I had a gift for you, but you have\n"
	.string "no room for it.$"
#endif

Route12_FishingHouse_Text_MostGiganticMagikarpXInches::
#if GERMAN
	.string "Das größte Karpador, das\n"
	.string "ich je sah, hatte…\p"
	.string "{STR_VAR_3} cm!$"
#else
	.string "The most gigantic MAGIKARP\n"
	.string "I have ever witnessed…\p"
	.string "{STR_VAR_3} inches!$"
#endif

Route12_FishingHouse_Text_BlankChartOfSomeSort::
#if GERMAN
	.string "Es ist eine leere Tabelle!\p"
	.string "Man kann darin irgendwelche\n"
	.string "Rekorde auflisten!$"
#else
	.string "It's a blank chart of some sort.\p"
	.string "It has spaces for writing in\n"
	.string "records of some kind.$"
#endif

