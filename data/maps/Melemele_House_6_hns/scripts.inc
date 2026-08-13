Melemele_House_6_hns_MapScripts::
	.byte 0


Melemele_House6_Hiker::
	lock
	faceplayer
	msgbox Melemele_House6_Hiker_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Melemele_House6_GameboyKid::
	lock
	faceplayer
	msgbox Melemele_House6_GameboyKid_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Melemele_House6_Hiker_Text_0:
#if GERMAN
	.string "Ich habe dieses Haus gekauft, damit\n"
	.string "mein Sohn und ich die Natur erkunden\l"
	.string "können…\p"
	.string "Aber er will nur an diesem Game Boy\n"
	.string "spielen.$"
#else
	.string "I bought this place so that my son\n"
	.string "and I could explore the outdoors…\p"
	.string "All he wants to do is play on that\n"
	.string "Game Boy.$"
#endif

Melemele_House6_GameboyKid_Text_0:
#if GERMAN
	.string "Auf meinem Game Boy habe ich ein Spiel,\n"
	.string "mit dem ich die Alola-Region erkunden\l"
	.string "kann!\p"
	.string "Es ist wie in echt.\p"
	.string "Es heißt Ultra Eclipse,\n"
	.string "von Phantonomy!\p"
	.string "Haha, sieh mal!\n"
	.string "Ich reite ein eisiges UHaFnir!$"
#else
	.string "I have a game on my Game Boy that lets\n"
	.string "me explore the Alola Region!\p"
	.string "It's just like the real thing.\p"
	.string "It's called Ultra Eclipse,\n"
	.string "by Phantonomy!\p"
	.string "Haha, look!\n"
	.string "I'm riding an Icy Noivern!$"
#endif
