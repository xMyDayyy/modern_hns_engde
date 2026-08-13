Route14_Frlg_MapScripts::
	.byte 0

Route14_EventScript_RouteSign::
	msgbox Route14_Text_RouteSign, MSGBOX_SIGN
	end

Route14_Text_CarterIntro::
#if GERMAN
	.string "Damit Pokémon starke Attacken\n"
	.string "erlernen, muss man TM einsetzen!$"
#else
	.string "You need to use TMs to teach good\n"
	.string "moves to POKéMON.$"
#endif

Route14_Text_CarterDefeat::
#if GERMAN
	.string "Ich war zu schlecht!$"
#else
	.string "Not good enough quite yet.$"
#endif

Route14_Text_CarterPostBattle::
#if GERMAN
	.string "Eine durch eine VM erlernte Attacke\n"
	.string "können Pokémon nicht so leicht wieder\l"
	.string "vergessen!$"
#else
	.string "You have some HMs, right? POKéMON\n"
	.string "can't forget those moves easily.$"
#endif

Route14_Text_MitchIntro::
#if GERMAN
	.string "Meine Vogel-Pokémon sind gut auf\n"
	.string "Kämpfe vorbereitet!$"
#else
	.string "My bird POKéMON should be ready\n"
	.string "for battle.$"
#endif

Route14_Text_MitchDefeat::
#if GERMAN
	.string "Sie waren nicht stark genug...$"
#else
	.string "Not ready yet!$"
#endif

Route14_Text_MitchPostBattle::
#if GERMAN
	.string "Sie müssen stärkere Attacken\n"
	.string "lernen!$"
#else
	.string "My bird POKéMON need to learn\n"
	.string "better moves.$"
#endif

Route14_Text_BeckIntro::
#if GERMAN
	.string "In Prismania City kann man TMs\n"
	.string "kaufen.\p"
	.string "VMs besitzen allerdings nur wenige\n"
	.string "Personen.$"
#else
	.string "They have TMs on sale at the\n"
	.string "CELADON DEPT. STORE.\p"
	.string "TMs aren't really rare, but not\n"
	.string "many people have HMs.$"
#endif

Route14_Text_BeckDefeat::
#if GERMAN
	.string "Ohh! So ein Mist!$"
#else
	.string "Aww, bummer!$"
#endif

Route14_Text_BeckPostBattle::
#if GERMAN
	.string "Bringe Pokémon ihrem Element\n"
	.string "entsprechende Attacken bei, um ihre\l"
	.string "volle Stärke auszunutzen!$"
#else
	.string "Try teaching POKéMON a move that's\n"
	.string "the same type as it.\p"
	.string "That apparently boosts the power\n"
	.string "of the move.$"
#endif

Route14_Text_MarlonIntro::
#if GERMAN
	.string "Hast du einem Vogel-Pokémon\n"
	.string "schon das Fliegen beigebracht?$"
#else
	.string "Have you taught your bird POKéMON\n"
	.string "how to FLY?\p"
	.string "You'll be able to soar with it into\n"
	.string "the sky!$"
#endif

Route14_Text_MarlonDefeat::
#if GERMAN
	.string "War das eine Bruchlandung!$"
#else
	.string "Shot down in flames!$"
#endif

Route14_Text_MarlonPostBattle::
#if GERMAN
	.string "Meine Leidenschaft sind Vogel-\n"
	.string "Pokémon!$"
#else
	.string "Bird POKéMON are my one true love.\n"
	.string "I don't want to raise anything else.$"
#endif

Route14_Text_DonaldIntro::
#if GERMAN
	.string "Hast du die Legende von den\n"
	.string "Illusionen mit Flügeln gehört?$"
#else
	.string "Have you heard the legend of the\n"
	.string "winged mirages?$"
#endif

Route14_Text_DonaldDefeat::
#if GERMAN
	.string "Warum hab ich verloren?$"
#else
	.string "Why?\n"
	.string "Why'd I lose?$"
#endif

Route14_Text_DonaldPostBattle::
#if GERMAN
	.string "Nun, die Illusionen mit Flügeln sind\n"
	.string "die legendären Vogel-Pokémon.\p"
	.string "Es gibt drei: Arktos, Zapdos\n"
	.string "und Lavados.$"
#else
	.string "Well, the winged mirages are the\n"
	.string "legendary bird POKéMON.\p"
	.string "There are three of them: ARTICUNO,\n"
	.string "ZAPDOS, and MOLTRES.$"
#endif

Route14_Text_BennyIntro::
#if GERMAN
	.string "Ich will nicht unbedingt, aber lass\n"
	.string "uns dennoch kämpfen!$"
#else
	.string "I'm not into it, but okay.\n"
	.string "Let's go!$"
#endif

Route14_Text_BennyDefeat::
#if GERMAN
	.string "Ich wusste, ich würde verlieren!$"
#else
	.string "I knew it!$"
#endif

Route14_Text_BennyPostBattle::
#if GERMAN
	.string "Längerfristig ist es egal, ob man\n"
	.string "gewinnt oder verliert!$"
#else
	.string "Winning, losing… It's insignificant\n"
	.string "under this huge sky.$"
#endif

Route14_Text_LukasIntro::
#if GERMAN
	.string "Los, los! Lass uns kämpfen. Auf in\n"
	.string "den Kampf! Los!$"
#else
	.string "C'mon, c'mon.\n"
	.string "Let's go, let's go, let's go!$"
#endif

Route14_Text_LukasDefeat::
#if GERMAN
	.string "Arrgh!\n"
	.string "Hau bloß ab!$"
#else
	.string "Arrg!\n"
	.string "Lost! Get lost!$"
#endif

Route14_Text_LukasPostBattle::
#if GERMAN
	.string "Was, was, was?\n"
	.string "Was willst du?$"
#else
	.string "What, what, what?\n"
	.string "What do you want still?$"
#endif

Route14_Text_IsaacIntro::
#if GERMAN
	.string "Sehr gut!\n"
	.string "Ich brauche einen Zeitvertreib!$"
#else
	.string "I need to burn some time.\n"
	.string "Shut up and battle.$"
#endif

Route14_Text_IsaacDefeat::
#if GERMAN
	.string "Du hast mich besiegt?\n"
	.string "Oh Mann!$"
#else
	.string "What?\n"
	.string "You!?$"
#endif

Route14_Text_IsaacPostBattle::
#if GERMAN
	.string "Es ist ganz schön mühselig,\n"
	.string "Pokémon zu trainieren!$"
#else
	.string "Raising POKéMON is a drag, man.$"
#endif

Route14_Text_GeraldIntro::
#if GERMAN
	.string "Wir kommen öfter her, weil es hier\n"
	.string "so unglaublich viel Platz gibt!$"
#else
	.string "We ride out here because of the\n"
	.string "wide-open spaces.$"
#endif

Route14_Text_GeraldDefeat::
#if GERMAN
	.string "Kurz und schmerzlos!$"
#else
	.string "Wipeout!$"
#endif

Route14_Text_GeraldPostBattle::
#if GERMAN
	.string "Cool!\n"
	.string "Deine Pokémon sind wirklich stark!\p"
	.string "Macht geht vor Recht!\n"
	.string "Du hast es begriffen!$"
#else
	.string "It's cool you made your POKéMON so\n"
	.string "strong.\p"
	.string "Might is right!\n"
	.string "And you know it!$"
#endif

Route14_Text_MalikIntro::
#if GERMAN
	.string "Ein Pokémon-Kampf?\n"
	.string "Cool! Leg los, Balg!$"
#else
	.string "POKéMON battle?\n"
	.string "Cool! Rumble!$"
#endif

Route14_Text_MalikDefeat::
#if GERMAN
	.string "Voll erwischt!$"
#else
	.string "Blown away!$"
#endif

Route14_Text_MalikPostBattle::
#if GERMAN
	.string "Du gegen mich!\n"
	.string "Du weißt, wer gewinnt!$"
#else
	.string "You know who'd win, you and me\n"
	.string "one-on-one!$"
#endif

Route14_Text_RouteSign::
#if GERMAN
	.string "Route 14\n"
	.string "Westen: Fuchsania City$"
#else
	.string "ROUTE 14\n"
	.string "West to FUCHSIA CITY$"
#endif

Route14_Text_KiriIntro::
#if GERMAN
	.string "Berta: Enke, lass es uns\n"
	.string "wirklich zusammen versuchen.$"
#else
	.string "KIRI: JAN, let's try really,\n"
	.string "really hard together.$"
#endif

Route14_Text_KiriDefeat::
#if GERMAN
	.string "Berta: Wimmer…\n"
	.string "Wir haben verloren, oder?$"
#else
	.string "KIRI: Whimper…\n"
	.string "We lost, didn't we?$"
#endif

Route14_Text_KiriPostBattle::
#if GERMAN
	.string "Berta: Haben wir\n"
	.string "meinetwegen verloren?$"
#else
	.string "KIRI: Did we lose because of me?$"
#endif

Route14_Text_KiriNotEnoughMons::
#if GERMAN
	.string "Berta: Wir können kämpfen, wenn\n"
	.string "du zwei Pokémon hast.$"
#else
	.string "KIRI: We can battle if you have\n"
	.string "two POKéMON.$"
#endif

Route14_Text_JanIntro::
#if GERMAN
	.string "Enke: Berta, los jetzt!\n"
	.string "Wir müssen uns anstrengen!$"
#else
	.string "JAN: KIRI, here we go!\n"
	.string "We have to try hard!$"
#endif

Route14_Text_JanDefeat::
#if GERMAN
	.string "Enke: Argh!\n"
	.string "Oh, nein!$"
#else
	.string "JAN: Eeeeh!\n"
	.string "No fair!$"
#endif

Route14_Text_JanPostBattle::
#if GERMAN
	.string "Enke: Weine nicht, Berta!\n"
	.string "Wir strengen uns beim nächsten Mal noch\l"
	.string "mehr an!$"
#else
	.string "JAN: KIRI, don't cry!\n"
	.string "We'll just try harder next time.$"
#endif

Route14_Text_JanNotEnoughMons::
#if GERMAN
	.string "Enke: Du möchtest kämpfen?\n"
	.string "Du hast nicht genug Pokémon!$"
#else
	.string "JAN: You want to battle?\n"
	.string "You don't have enough POKéMON.$"
#endif
