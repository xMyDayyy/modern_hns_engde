OlivineCity_House3_hns_MapScripts::
	.byte 0

OlivineCityHouse3_EventScriptFishingGuru::
	lock
	faceplayer
	checkitem ITEM_GOOD_ROD
	goto_if_eq VAR_RESULT, TRUE, OlivineCityHouse3_EventScriptFishingGuru2
	msgbox OlivineCity_Text_OfferGoodRod, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, OlivineCityHouse3_EventScriptFishingGuruRefused
	msgbox OlivineCity_Text_GiveGoodRod, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD
	msgbox OlivineCity_Text_GaveGoodRod, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCityHouse3_EventScriptFishingGuru2::
	msgbox OlivineCity_Text_HaveGoodRod, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCityHouse3_EventScriptFishingGuruRefused::
	msgbox OlivineCity_Text_DontWantGoodRod, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_OfferGoodRod:
#if GERMAN
	.string "Oliviana City ist berühmt für ihre\n"
	.string "malerische Lage am Meer!\p"
	.string "Und wo Meer ist, kann man auch angeln!\n"
	.string "Ich fische hier schon seit 30 Jahren.\p"
	.string "Hast du nicht auch Lust, zum Meer\n"
	.string "zu gehen und eine Runde zu angeln?$"
#else
	.string "OLIVINE is on the sea!\p"
	.string "And if it's on the sea, there\n"
	.string "are bound to be fish!\p"
	.string "I've fished here for 30 years.\p"
	.string "Would you like to face the sea\n"
	.string "and try your hand at fishing?$"
#endif

OlivineCity_Text_GiveGoodRod:
#if GERMAN
	.string "Hahaha! Und wieder ist die Welt\n"
	.string "um einen Angler reicher!$"
#else
	.string "Ah, hahah! We have ourselves\n"
	.string "a new angler in the making!$"
#endif

OlivineCity_Text_GaveGoodRod:
#if GERMAN
	.string "Fische gibt’s nicht nur im Meer,\n"
	.string "sondern überall, wo Wasser ist.\p"
	.string "Übrigens zeigt dein Pokédex\n"
	.string "die Fischgruppen der Pokémon.\p"
	.string "An verschiedenen Orten gibt es\n"
	.string "ähnliche Fischarten.$"
#else
	.string "Fish aren't only found in the\n"
	.string "sea--they're wherever there's\l"
	.string "water.\p"
	.string "By the way, your POKéDEX shows\n"
	.string "fishing groups for POKéMON.\p"
	.string "Different spots may contain\n"
	.string "similar fish types.$"
#endif

OlivineCity_Text_DontWantGoodRod:
#if GERMAN
	.string "Waaas?!? Du willst nicht fischen?!?\n"
	.string "Unfassbar!$"
#else
	.string "Whaaat? You don't like to fish!?\n"
	.string "That's incomprehensible!$"
#endif

OlivineCity_Text_HaveGoodRod:
#if GERMAN
	.string "Na, wie läuft’s?\n"
	.string "Hast du den großen Fang gemacht?$"
#else
	.string "How are things?\n"
	.string "Did you land the big one?$"
#endif
