RockTunnel_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel_1F_OnTransition
	.byte 0

RockTunnel_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
	end

RockTunnel_1F_EventScript_RouteSign::
	msgbox RockTunnel_1F_Text_RouteSign, MSGBOX_SIGN
	end

RockTunnel_1F_EventScript_Lenny::
	trainerbattle_single TRAINER_HIKER_LENNY, RockTunnel_1F_Text_LennyIntro, RockTunnel_1F_Text_LennyDefeat
	msgbox RockTunnel_1F_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Oliver::
	trainerbattle_single TRAINER_HIKER_OLIVER, RockTunnel_1F_Text_OliverIntro, RockTunnel_1F_Text_OliverDefeat
	msgbox RockTunnel_1F_Text_OliverPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Lucas::
	trainerbattle_single TRAINER_HIKER_LUCAS, RockTunnel_1F_Text_LucasIntro, RockTunnel_1F_Text_LucasDefeat
	msgbox RockTunnel_1F_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Ashton::
	trainerbattle_single TRAINER_POKEMANIAC_ASHTON, RockTunnel_1F_Text_AshtonIntro, RockTunnel_1F_Text_AshtonDefeat
	msgbox RockTunnel_1F_Text_AshtonPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Leah::
	trainerbattle_single TRAINER_PICNICKER_LEAH, RockTunnel_1F_Text_LeahIntro, RockTunnel_1F_Text_LeahDefeat
	msgbox RockTunnel_1F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Ariana::
	trainerbattle_single TRAINER_PICNICKER_ARIANA, RockTunnel_1F_Text_ArianaIntro, RockTunnel_1F_Text_ArianaDefeat
	msgbox RockTunnel_1F_Text_ArianaPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Dana::
	trainerbattle_single TRAINER_PICNICKER_DANA, RockTunnel_1F_Text_DanaIntro, RockTunnel_1F_Text_DanaDefeat
	msgbox RockTunnel_1F_Text_DanaPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_Text_LennyIntro::
#if GERMAN
	.string "Dieser Tunnel ist verdammt lang!$"
#else
	.string "This tunnel goes a long way, kid!$"
#endif

RockTunnel_1F_Text_LennyDefeat::
#if GERMAN
	.string "Oha!\n"
	.string "Du hast gewonnen!$"
#else
	.string "Doh!\n"
	.string "You win!$"
#endif

RockTunnel_1F_Text_LennyPostBattle::
#if GERMAN
	.string "Nimm dich vor Onix in Acht! Es\n"
	.string "quetscht dich wie eine Zitrone aus!$"
#else
	.string "Watch for ONIX.\n"
	.string "They appear only occasionally.\p"
	.string "High-level ones can put the\n"
	.string "squeeze on you!$"
#endif

RockTunnel_1F_Text_OliverIntro::
#if GERMAN
	.string "Könnte es sein, dass ich mich\n"
	.string "verlaufen habe?$"
#else
	.string "Hmm.\n"
	.string "Maybe I'm lost in here…$"
#endif

RockTunnel_1F_Text_OliverDefeat::
#if GERMAN
	.string "Sachte!\n"
	.string "Wo bin ich?\l"
	.string "Wo geht es nach draußen?$"
#else
	.string "Ease up!\n"
	.string "What am I doing?\l"
	.string "Which way is out?$"
#endif

RockTunnel_1F_Text_OliverPostBattle::
#if GERMAN
	.string "Diesen Umweg muss ich nur wegen\n"
	.string "des auf Route 12 schlafenden\l"
	.string "Pokémon machen.$"
#else
	.string "That sleeping POKéMON on ROUTE 12\n"
	.string "forced me to take this detour.$"
#endif

RockTunnel_1F_Text_LucasIntro::
#if GERMAN
	.string "Ein Möchtegern wie du sollte etwas\n"
	.string "mehr Respekt zeigen!$"
#else
	.string "Outsiders like you need to show me\n"
	.string "some respect!$"
#endif

RockTunnel_1F_Text_LucasDefeat::
#if GERMAN
	.string "Ich gebe auf!$"
#else
	.string "I give!$"
#endif

RockTunnel_1F_Text_LucasPostBattle::
#if GERMAN
	.string "Du hast Talent!\n"
	.string "Du kannst kein Möchtegern sein!$"
#else
	.string "You're talented enough to hike!$"
#endif

RockTunnel_1F_Text_AshtonIntro::
#if GERMAN
	.string "Meine Pokémon wollen kämpfen!\n"
	.string "Los!$"
#else
	.string "POKéMON fight!\n"
	.string "Ready, go!$"
#endif

RockTunnel_1F_Text_AshtonDefeat::
#if GERMAN
	.string "Game Over!$"
#else
	.string "Game over!$"
#endif

RockTunnel_1F_Text_AshtonPostBattle::
#if GERMAN
	.string "Unterwegs werde ich mir ein Zubat\n"
	.string "fangen!$"
#else
	.string "Oh well, I'll get a ZUBAT as I go!$"
#endif

RockTunnel_1F_Text_LeahIntro::
#if GERMAN
	.string "Huch!\p"
	.string "Komm mir im Dunkeln bloß nicht zu\n"
	.string "nahe!$"
#else
	.string "Eek!\p"
	.string "Don't try anything funny in the\n"
	.string "dark!$"
#endif

RockTunnel_1F_Text_LeahDefeat::
#if GERMAN
	.string "Es war zu dunkel!$"
#else
	.string "It was too dark…$"
#endif

RockTunnel_1F_Text_LeahPostBattle::
#if GERMAN
	.string "Ich habe hier im Tunnel ein\n"
	.string "Maschock gesehen!$"
#else
	.string "I saw a MACHOP in this tunnel.$"
#endif

RockTunnel_1F_Text_DanaIntro::
#if GERMAN
	.string "Ich bin wegen der Pokémon hierher\n"
	.string "gekommen!$"
#else
	.string "I came this far looking for wild\n"
	.string "POKéMON.$"
#endif

RockTunnel_1F_Text_DanaDefeat::
#if GERMAN
	.string "Alle meine Pokémon wurden besiegt!$"
#else
	.string "I'm out of POKéMON!$"
#endif

RockTunnel_1F_Text_DanaPostBattle::
#if GERMAN
	.string "Dabei sahst du so süß und harmlos\n"
	.string "aus!$"
#else
	.string "You looked cute and harmless.\n"
	.string "Was I ever wrong!$"
#endif

RockTunnel_1F_Text_ArianaIntro::
#if GERMAN
	.string "Du besitzt Pokémon!\n"
	.string "Lass uns kämpfen!$"
#else
	.string "You have POKéMON!\n"
	.string "Let's start!$"
#endif

RockTunnel_1F_Text_ArianaDefeat::
#if GERMAN
	.string "Du bist ein harter Brocken!$"
#else
	.string "You play hard!$"
#endif

RockTunnel_1F_Text_ArianaPostBattle::
#if GERMAN
	.string "Puh!\n"
	.string "Ich bin ganz nass geschwitzt!$"
#else
	.string "Whew!\n"
	.string "I'm all sweaty now.$"
#endif

RockTunnel_1F_Text_RouteSign::
#if GERMAN
	.string "Felstunnel\n"
	.string "Azuria City - Lavandia$"
#else
	.string "ROCK TUNNEL\n"
	.string "CERULEAN CITY - LAVENDER TOWN$"
#endif

