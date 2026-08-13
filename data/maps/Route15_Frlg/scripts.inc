Route15_Frlg_MapScripts::
	.byte 0

Route15_EventScript_RouteSign::
	msgbox Route15_Text_RouteSign, MSGBOX_SIGN
	end

Route15_Text_KindraIntro::
#if GERMAN
	.string "Wunderbar! Dann kann ich gleich\n"
	.string "ausprobieren, wie gut die Pokémon sind,\l"
	.string "die ich getauscht habe!$"
#else
	.string "I just got some POKéMON in trades.\n"
	.string "Can I try them out on you?$"
#endif

Route15_Text_KindraDefeat::
#if GERMAN
	.string "Nicht gut genug!$"
#else
	.string "Not good enough!$"
#endif

Route15_Text_KindraPostBattle::
#if GERMAN
	.string "Man kann den Spitznamen eines Pokémon,\n"
	.string "das man getauscht hat, nicht ändern.\p"
	.string "Nur der Original-Trainer kann den\n"
	.string "Namen verändern.$"
#else
	.string "You can't change the nickname of\n"
	.string "any POKéMON you get in a trade.\p"
	.string "Only the Original TRAINER can get\n"
	.string "the nickname changed.$"
#endif

Route15_Text_BeckyIntro::
#if GERMAN
	.string "Du siehst lammfromm aus!\n"
	.string "Dann habe ich eine Chance!$"
#else
	.string "You look gentle, so I think I can\n"
	.string "beat you.\p"
	.string "I'll give it a go!$"
#endif

Route15_Text_BeckyDefeat::
#if GERMAN
	.string "Du bist ein Wolf im Schafspelz!$"
#else
	.string "No, wrong!$"
#endif

Route15_Text_BeckyPostBattle::
#if GERMAN
	.string "Ich habe Angst vor Bikern, sie\n"
	.string "sind so hässlich und brutal!$"
#else
	.string "I'm afraid of BIKERS. They look so\n"
	.string "ugly and mean!$"
#endif

Route15_Text_EdwinIntro::
#if GERMAN
	.string "Wenn ich pfeife, kann ich Vogel-\n"
	.string "Pokémon herbeirufen!$"
#else
	.string "When I whistle, I can summon bird\n"
	.string "POKéMON.$"
#endif

Route15_Text_EdwinDefeat::
#if GERMAN
	.string "Au!\n"
	.string "Das ist tragisch!$"
#else
	.string "Ow!\n"
	.string "That's tragic!$"
#endif

Route15_Text_EdwinPostBattle::
#if GERMAN
	.string "Vielleicht bin ich keine Kämpfernatur...$"
#else
	.string "Maybe I'm not cut out for battles.\n"
	.string "I'm not the right type, I guess.$"
#endif

Route15_Text_ChesterIntro::
#if GERMAN
	.string "Hmm? Meine Vögel erschaudern?\n"
	.string "Du musst wirklich sehr gut sein!$"
#else
	.string "Hmm? My birds are shivering!\n"
	.string "You're good, aren't you?$"
#endif

Route15_Text_ChesterDefeat::
#if GERMAN
	.string "Ich lag also richtig!$"
#else
	.string "Just as I thought!$"
#endif

Route15_Text_ChesterPostBattle::
#if GERMAN
	.string "Wusstest du, dass manche Attacken, wie\n"
	.string "Erdbeben, keine Wirkung auf Vögel\l"
	.string "haben?$"
#else
	.string "This is so obvious, you should know\n"
	.string "this, but…\p"
	.string "Moves like EARTHQUAKE and FISSURE\n"
	.string "have no effect on bird POKéMON.$"
#endif

Route15_Text_GraceIntro::
#if GERMAN
	.string "Du bist ein schlaues Kind!$"
#else
	.string "Oh, you're a little cutie!\n"
	.string "So like a darling POKéMON!$"
#endif

Route15_Text_GraceDefeat::
#if GERMAN
	.string "Und du siehst so süß aus!$"
#else
	.string "You looked so cute, too!$"
#endif

Route15_Text_GracePostBattle::
#if GERMAN
	.string "O.k., du hast mich besiegt.\n"
	.string "Es macht mir nichts aus!$"
#else
	.string "I forgive you.\n"
	.string "I can take it.\l"
	.string "I'm a big girl now.$"
#endif

Route15_Text_OliviaIntro::
#if GERMAN
	.string "Ich trainiere Pokémon, weil ich\n"
	.string "alleine lebe!$"
#else
	.string "I raise POKéMON for protection\n"
	.string "because I live alone.$"
#endif

Route15_Text_OliviaDefeat::
#if GERMAN
	.string "So habe ich es mir aber nicht\n"
	.string "vorgestellt!$"
#else
	.string "POKéMON isn't about winning or\n"
	.string "losing for me.$"
#endif

Route15_Text_OliviaPostBattle::
#if GERMAN
	.string "Ich verbringe zu Hause sehr viel\n"
	.string "Zeit mit meinen Pokémon!$"
#else
	.string "I love having my POKéMON greet me\n"
	.string "when I get home.\p"
	.string "It's so reassuring.$"
#endif

Route15_Text_ErnestIntro::
#if GERMAN
	.string "Heh, Kiddie!\n"
	.string "Lass uns kämpfen!$"
#else
	.string "Hey, kid! C'mon!\n"
	.string "I just got these off some loser!$"
#endif

Route15_Text_ErnestDefeat::
#if GERMAN
	.string "Voll erwischt!$"
#else
	.string "Why not?$"
#endif

Route15_Text_ErnestPostBattle::
#if GERMAN
	.string "Man lebt nur einmal!\n"
	.string "Daher bin ich ein Bandit!\l"
	.string "Das Team Rocket ist cool!$"
#else
	.string "Life's too short.\n"
	.string "It's cool to live as an outlaw.\l"
	.string "TEAM ROCKET RULES!$"
#endif

Route15_Text_AlexIntro::
#if GERMAN
	.string "Her mit deinen Moneten! Wenn du\n"
	.string "verlierst, gibst du mir dein Geld!$"
#else
	.string "Fork over all your cash when you\n"
	.string "lose to me, kid!$"
#endif

Route15_Text_AlexDefeat::
#if GERMAN
	.string "Das darf nicht wahr sein!$"
#else
	.string "That can't be true!$"
#endif

Route15_Text_AlexPostBattle::
#if GERMAN
	.string "Vergiss die Sache mit dem Geld,\n"
	.string "das war ein Scherz!$"
#else
	.string "I was just joking about the money.\n"
	.string "Don't take me all serious.$"
#endif

Route15_Text_CeliaIntro::
#if GERMAN
	.string "Pokémon zu tauschen, ist wirklich\n"
	.string "cool!$"
#else
	.string "What's cool and happening?\n"
	.string "Trading POKéMON!$"
#endif

Route15_Text_CeliaDefeat::
#if GERMAN
	.string "Ich sagte tauschen!$"
#else
	.string "I said trade!$"
#endif

Route15_Text_CeliaPostBattle::
#if GERMAN
	.string "Ich tausche mit meinen Freunden\n"
	.string "Pokémon!$"
#else
	.string "I trade POKéMON with my friends\n"
	.string "all the time.$"
#endif

Route15_Text_YazminIntro::
#if GERMAN
	.string "Möchtest du mit meinen Pokémon\n"
	.string "spielen?$"
#else
	.string "Want to play with my POKéMON?$"
#endif

Route15_Text_YazminDefeat::
#if GERMAN
	.string "Ich war zu ungestüm!$"
#else
	.string "I was too impatient!$"
#endif

Route15_Text_YazminPostBattle::
#if GERMAN
	.string "Ich muss ein wenig mit schwächeren\n"
	.string "Trainern üben...$"
#else
	.string "I'll go train with weaker people.$"
#endif

Route15_Text_RouteSign::
#if GERMAN
	.string "Route 15\n"
	.string "Westen: Fuchsania City$"
#else
	.string "ROUTE 15\n"
	.string "West to FUCHSIA CITY$"
#endif

Route15_Text_MyaIntro::
#if GERMAN
	.string "Eva: Du bist perfekt!\n"
	.string "Hilfst du mir, meinen kleinen Bruder zu\l"
	.string "trainieren?$"
#else
	.string "MYA: You're perfect.\n"
	.string "Help me train my little brother?$"
#endif

Route15_Text_MyaDefeat::
#if GERMAN
	.string "Eva: Konzentriere dich, Sergio!\n"
	.string "Achte auf deine Taten!$"
#else
	.string "MYA: RON, you have to focus!\n"
	.string "Concentrate on what you're doing!$"
#endif

Route15_Text_MyaPostBattle::
#if GERMAN
	.string "Eva: O.k.! Wir haben es vergeigt!\n"
	.string "Ich füge unserem Trainingsprogramm\l"
	.string "einige Lektionen hinzu.$"
#else
	.string "MYA: Okay, we'll turn it up.\n"
	.string "I'll add to our training menu!$"
#endif

Route15_Text_MyaNotEnoughMons::
#if GERMAN
	.string "Eva: Möchtest du uns herausfordern? Du\n"
	.string "brauchst allerdings zwei Pokémon!$"
#else
	.string "MYA: Do you want to challenge us?\n"
	.string "You'll need two POKéMON, though.$"
#endif

Route15_Text_RonIntro::
#if GERMAN
	.string "Sergio: Meine Schwester bekommt\n"
	.string "Angst, wenn wir verlieren.$"
#else
	.string "RON: My sister gets scary when we\n"
	.string "lose.$"
#endif

Route15_Text_RonDefeat::
#if GERMAN
	.string "Sergio: Oh, nein…\n"
	.string "Es tut mir Leid, Schwesterherz!$"
#else
	.string "RON: Oh, no, no…\n"
	.string "Sis, I'm sorry!$"
#endif

Route15_Text_RonPostBattle::
#if GERMAN
	.string "Sergio: Oh, Mist…\n"
	.string "Ich wünschte, ich hätte eine nette\l"
	.string "Schwester…$"
#else
	.string "RON: Oh, bleah…\n"
	.string "I wish I had a nice sister…$"
#endif

Route15_Text_RonNotEnoughMons::
#if GERMAN
	.string "Sergio: Wolltest du gegen meine\n"
	.string "Schwester und mich antreten?\p"
	.string "Dann brauchst du zwei Pokémon!$"
#else
	.string "RON: Did you want to battle with\n"
	.string "my sister and me?\p"
	.string "You need two POKéMON, then.$"
#endif
