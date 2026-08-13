Akala_House_hns_MapScripts::
	.byte 0


Alola_Akala_House_OldWoman::
	lock
	faceplayer
	msgbox Alola_Akala_House_OldWoman_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Alola_Akala_House_OldWoman_Text_0:
#if GERMAN
	.string "Ich sage meinem Mann jeden Tag, er soll\n"
	.string "die Natu nicht füttern, aber er hört\l"
	.string "einfach nicht!\p"
	.string "Eines Tages bringt er mir noch so ein\n"
	.string "Ding mit nach Hause, das weiß ich genau!$"
#else
	.string "I tell my husband everyday not to feed\n"
	.string "the NATU, but he never listens!\p"
	.string "One day he'll bring one of those darn\n"
	.string "things home, I just know it!$"
#endif
