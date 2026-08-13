PewterCity_Mart_hns_MapScripts::
	.byte 0

PewterCity_Mart_EventScript_Youngster::
	msgbox PewterCity_Mart_Text_Youngster, MSGBOX_NPC
	end

PewterCity_Mart_EventScript_Nerd::
	msgbox PewterCity_Mart_Text_SuperNerd, MSGBOX_NPC
	end

PewterCity_Mart_Text_Youngster:
#if GERMAN
	.string "Hi! Mach doch Bekanntschaft\n"
	.string "mit meinem Garados!\p"
	.string "Ich habe es als Karpador aufgezogen.\n"
	.string "Kaum zu glauben, wie stark es geworden\l"
	.string "ist.$"
#else
	.string "Hi! Check out my GYARADOS!\p"
	.string "I raised it from a MAGIKARP. I can't\n"
	.string "believe how strong it has become.$"
#endif

PewterCity_Mart_Text_SuperNerd:
#if GERMAN
	.string "Es gab mal einen komischen, alten Mann,\n"
	.string "der Karpador verkaufte.\p"
	.string "Er sagte immer, die Karpador im\n"
	.string "See des Zorns seien außergewöhnlich.$"
#else
	.string "There once was a weird old man who sold\n"
	.string "MAGIKARP.\p"
	.string "He was saying the MAGIKARP from the\n"
	.string "LAKE OF RAGE were excellent.$"
#endif

