Route20_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route20_EventScript_ShellBell::
	finditem ITEM_SHELL_BELL
	end

Route20_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route20_EventScript_Nicole::
	trainerbattle_single TRAINER_NICOLE_HNS, Route20_Text_SwimmerfNicoleSeen, Route20_Text_SwimmerfNicoleBeaten, Route20_EventScript_RegisterNicole
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route20_EventScript_RematchNicole
	msgbox Route20_Text_SwimmerfNicoleAfterBattle, MSGBOX_AUTOCLOSE
	end

Route20_EventScript_RegisterNicole::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route20_Text_NicoleRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_NICOLE_HNS
	release
	end

Route20_EventScript_RematchNicole::
	trainerbattle_rematch TRAINER_NICOLE_HNS, Route20_Text_NicoleRematchIntro, Route20_Text_NicoleRematchDefeat
	msgbox Route20_Text_NicolePostRematch, MSGBOX_AUTOCLOSE
	end

Route20_EventScript_Lori::
	trainerbattle_single TRAINER_LORI_HNS, Route20_Text_SwimmerfLoriSeen, Route20_Text_SwimmerfLoriBeaten
	msgbox Route20_Text_SwimmerfLoriAfterBattle, MSGBOX_AUTOCLOSE
	end

Route20_EventScript_Cameron::
	trainerbattle_single TRAINER_CAMERON_HNS, Route20_Text_SwimmermCameronSeen, Route20_Text_SwimmermCameronBeaten
	msgbox Route20_Text_SwimmermCameronAfterBattle, MSGBOX_AUTOCLOSE
	end

Route20_EventScript_SeafoamSign::
	msgbox Route20_Text_SeafoamSign, MSGBOX_SIGN
	end

Route20_EventScript_GymSign::
	msgbox Route20_Text_CinnabarIsland_GymUnusedSign, MSGBOX_SIGN
	end

Route20_EventScript_Seel::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SEEL, CRY_MODE_NORMAL
	msgbox Route20_Text_Seel, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route20_EventScript_Dewgong::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DEWGONG, CRY_MODE_NORMAL
	msgbox Route20_Text_Dewgong, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route20_EventScript_Dennis::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox Route20_Text_Dennis, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route20_EventScript_Headlocker::
	lock
	faceplayer
	msgbox Route20_Text_Headlocker, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_ROUTE20_HEADLOCKER, DIR_SOUTH
	release
	end

Route20_Text_Dennis:

Route20_Text_Headlocker:
#if GERMAN
	.string "Auf dieser Route gibt es ein seltenes\n"
	.string "Pokémon.\p"
	.string "Manchmal trägt es auch einen\n"
	.string "seltenen Entwicklungsstein.\p"
	.string "Doppelt selten also!\p"
	.string "Ich muss meinen Pokédex füllen,\n"
	.string "darum angle ich hier schon Stunden!$"
#else
	.string "There's a rare POKéMON on this\n"
	.string "route.\p"
	.string "And sometimes it carries a rare\n"
	.string "evolution item.\p"
	.string "That's double rare!\p"
	.string "I need to finish my POKéDEX, so\n"
	.string "I've been fishing here for hours!$"
#endif

Route20_Text_Seel:
#if GERMAN
	.string "Jurob: Jurob Jurob!$"
#else
	.string "SEEL: Seel seel!$"
#endif

Route20_Text_Dewgong:
#if GERMAN
	.string "Jugong: Goooong!$"
#else
	.string "DEWGONG: Goooong!$"
#endif

Route20_Text_SeafoamSign:
#if GERMAN
	.string "Seeschauminseln$"
#else
	.string "SEAFOAM ISLANDS$"
#endif

Route20_Text_NicoleRegister:
#if GERMAN
	.string "Deine Pokémon schwimmen echt\n"
	.string "schnell! Gib mir deine Nummer!$"
#else
	.string "Your POKéMON swims fast!\n"
	.string "Let me get your number!$"
#endif

Route20_Text_NicoleRematchIntro:
#if GERMAN
	.string "Vom vielen Schwimmen sind meine\n"
	.string "Pokémon stärker geworden! Los!$"
#else
	.string "All this swimming has made my\n"
	.string "POKéMON stronger! Let's battle!$"
#endif

Route20_Text_NicoleRematchDefeat:
#if GERMAN
	.string "Schon wieder weggespült…$"
#else
	.string "Swept away again…$"
#endif

Route20_Text_NicolePostRematch:
#if GERMAN
	.string "Ob Sieg oder Niederlage, meine\n"
	.string "Pokémon und ich werden fitter!$"
#else
	.string "Win or lose, I'm getting fit and\n"
	.string "so are my POKéMON!$"
#endif

Route20_Text_SwimmerfNicoleSeen:
#if GERMAN
	.string "Im Wasser fühle ich mich so wunderbar\n"
	.string "leicht.$"
#else
	.string "I feel so much lighter in water.$"
#endif

Route20_Text_SwimmerfNicoleBeaten:
#if GERMAN
	.string "Och nööö!$"
#else
	.string "Oh, no!$"
#endif

Route20_Text_SwimmerfNicoleAfterBattle:
#if GERMAN
	.string "Schwimmen ist gesund!\n"
	.string "Es trainiert den gesamten Körper!$"
#else
	.string "Swimming exercises your full body.\p"
	.string "It's really good for you.$"
#endif

Route20_Text_SwimmerfLoriSeen:
#if GERMAN
	.string "Du hast ja einen ganzen Sack voll\n"
	.string "Orden! Gegen dich will ich kämpfen!$"
#else
	.string "What an impressive collection of\n"
	.string "GYM BADGES. We should battle!$"
#endif

Route20_Text_SwimmerfLoriBeaten:
#if GERMAN
	.string "Nein$"
#else
	.string "No!$"
#endif

Route20_Text_SwimmerfLoriAfterBattle:
#if GERMAN
	.string "Außer Surfer gibt es auch noch andere\n"
	.string "VM, die man im Wasser einsetzt.$"
#else
	.string "SURF is no longer the only HM move\n"
	.string "you use in water.$"
#endif

Route20_Text_SwimmermCameronSeen:
#if GERMAN
	.string "Von hier bis nach Johto zu schwimmen,\n"
	.string "ist wohl doch etwas zu weit, oder?$"
#else
	.string "I guess it's impossible to swim\n"
	.string "all the way to JOHTO.$"
#endif

Route20_Text_SwimmermCameronBeaten:
#if GERMAN
	.string "Jippie!$"
#else
	.string "Aiyah!$"
#endif

Route20_Text_SwimmermCameronAfterBattle:
#if GERMAN
	.string "Na ja, das Meer ist nicht alles. Es gibt\n"
	.string "ja noch jede Menge Teiche und Flüsse…$"
#else
	.string "Besides the sea, I can also swim\n"
	.string "in ponds and rivers.$"
#endif

Route20_Text_CinnabarIsland_GymUnusedSign:
#if GERMAN
	.string "Was steht hier?\p"
	.string "Zinnoberinsel Leiter: Pyro$"
#else
	.string "What does this sign say?\p"
	.string "CINNABAR GYM LEADER: BLAINE$"
#endif

