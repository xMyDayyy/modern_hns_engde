MtMoon_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_1F_OnTransition
	.byte 0

MtMoon_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_MT_MOON_1F
	end

MtMoon_1F_EventScript_ZubatSign::
	msgbox MtMoon_1F_Text_ZubatIsABloodsucker, MSGBOX_SIGN
	end

MtMoon_1F_EventScript_Marcos::
	trainerbattle_single TRAINER_HIKER_MARCOS, MtMoon_1F_Text_MarcosIntro, MtMoon_1F_Text_MarcosDefeat
	msgbox MtMoon_1F_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Josh::
	trainerbattle_single TRAINER_YOUNGSTER_JOSH, MtMoon_1F_Text_JoshIntro, MtMoon_1F_Text_JoshDefeat
	msgbox MtMoon_1F_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Miriam::
	trainerbattle_single TRAINER_LASS_MIRIAM, MtMoon_1F_Text_MiriamIntro, MtMoon_1F_Text_MiriamDefeat
	msgbox MtMoon_1F_Text_MiriamPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Iris::
	trainerbattle_single TRAINER_LASS_IRIS, MtMoon_1F_Text_IrisIntro, MtMoon_1F_Text_IrisDefeat
	msgbox MtMoon_1F_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Jovan::
	trainerbattle_single TRAINER_SUPER_NERD_JOVAN, MtMoon_1F_Text_JovanIntro, MtMoon_1F_Text_JovanDefeat
	msgbox MtMoon_1F_Text_JovanPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Kent::
	trainerbattle_single TRAINER_BUG_CATCHER_KENT, MtMoon_1F_Text_KentIntro, MtMoon_1F_Text_KentDefeat
	msgbox MtMoon_1F_Text_KentPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_EventScript_Robby::
	trainerbattle_single TRAINER_BUG_CATCHER_ROBBY, MtMoon_1F_Text_RobbyIntro, MtMoon_1F_Text_RobbyDefeat
	msgbox MtMoon_1F_Text_RobbyPostBattle, MSGBOX_AUTOCLOSE
	end

MtMoon_1F_Text_MarcosIntro::
#if GERMAN
	.string "Hilfe! Überfall!\n"
	.string "Ach, du bist ja nur ein Kind!$"
#else
	.string "WHOA!\n"
	.string "You shocked me!\l"
	.string "…Oh, you're just a kid!$"
#endif

MtMoon_1F_Text_MarcosDefeat::
#if GERMAN
	.string "Wow!\n"
	.string "Du hast mich total überrumpelt!!!$"
#else
	.string "Wow!\n"
	.string "Shocked again!$"
#endif

MtMoon_1F_Text_MarcosPostBattle::
#if GERMAN
	.string "Hier ist kein Spielplatz.\n"
	.string "Zieh Leine, Kiddie!$"
#else
	.string "Kids like you shouldn't be\n"
	.string "wandering around here in the dark.$"
#endif

MtMoon_1F_Text_JoshIntro::
#if GERMAN
	.string "Bist du auch auf Forschungsreise?$"
#else
	.string "Did you come to explore the cave,\n"
	.string "too?$"
#endif

MtMoon_1F_Text_JoshDefeat::
#if GERMAN
	.string "So ein Mist!\n"
	.string "Verloren!$"
#else
	.string "Losing stinks!\n"
	.string "It's so uncool.$"
#endif

MtMoon_1F_Text_JoshPostBattle::
#if GERMAN
	.string "Ich bin hier, weil die Mädchen auf\n"
	.string "harte Kerle wie mich stehen!$"
#else
	.string "I came all the way down here to\n"
	.string "show off to girls.$"
#endif

MtMoon_1F_Text_MiriamIntro::
#if GERMAN
	.string "Wow, hier drinnen kann man sich\n"
	.string "leicht verlaufen!$"
#else
	.string "Wow! It's way bigger in here than\n"
	.string "I thought!$"
#endif

MtMoon_1F_Text_MiriamDefeat::
#if GERMAN
	.string "Nein!\n"
	.string "Ich habe verloren!$"
#else
	.string "Oh!\n"
	.string "I lost it!$"
#endif

MtMoon_1F_Text_MiriamPostBattle::
#if GERMAN
	.string "Wie kommt man hier bloß wieder\n"
	.string "heraus?$"
#else
	.string "How do you get out of here?\n"
	.string "It's so big, I may get lost.$"
#endif

MtMoon_1F_Text_JovanIntro::
#if GERMAN
	.string "Heh!\n"
	.string "Schleich nicht so herum!$"
#else
	.string "What!\n"
	.string "Don't sneak up on me!$"
#endif

MtMoon_1F_Text_JovanDefeat::
#if GERMAN
	.string "Meine Pokémon bringen es nicht!$"
#else
	.string "My POKéMON won't do!$"
#endif

MtMoon_1F_Text_JovanPostBattle::
#if GERMAN
	.string "Ich muss stärkere Pokémon fangen!$"
#else
	.string "I have to find stronger POKéMON.\n"
	.string "Where might they be?$"
#endif

MtMoon_1F_Text_IrisIntro::
#if GERMAN
	.string "Was gibt's? Meine Kumpels müssten\n"
	.string "gleich hier sein.$"
#else
	.string "What?\n"
	.string "I'm waiting for my friends to find\l"
	.string "me here.$"
#endif

MtMoon_1F_Text_IrisDefeat::
#if GERMAN
	.string "Ich hab verloren?$"
#else
	.string "I lost?$"
#endif

MtMoon_1F_Text_IrisPostBattle::
#if GERMAN
	.string "Gerüchten zufolge soll es hier sehr\n"
	.string "seltene Fossilien geben.$"
#else
	.string "I came because I heard there are\n"
	.string "some very rare fossils here.$"
#endif

MtMoon_1F_Text_KentIntro::
#if GERMAN
	.string "Wer da? Wohin man schaut: Überall\n"
	.string "nur zwielichtige Gestalten!$"
#else
	.string "Suspicious men are in the cave.\n"
	.string "What about you?$"
#endif

MtMoon_1F_Text_KentDefeat::
#if GERMAN
	.string "Du hast mich eiskalt erwischt!$"
#else
	.string "You got me!$"
#endif

MtMoon_1F_Text_KentPostBattle::
#if GERMAN
	.string "Ohne Zweifel!\n"
	.string "Die Typen waren vom Team Rocket!$"
#else
	.string "I saw them!\n"
	.string "I'm sure they're from TEAM ROCKET!$"
#endif

MtMoon_1F_Text_RobbyIntro::
#if GERMAN
	.string "Du erreichst {COLOR RED}Azuria City{COLOR DARK_GRAY}, wenn du\n"
	.string "es durch diese Höhle schaffst!$"
#else
	.string "You need to go through this cave\n"
	.string "to get to CERULEAN CITY.$"
#endif

MtMoon_1F_Text_RobbyDefeat::
#if GERMAN
	.string "Ich hab verloren...$"
#else
	.string "I lost.$"
#endif

MtMoon_1F_Text_RobbyPostBattle::
#if GERMAN
	.string "Zubat ist recht widerspenstig, kann\n"
	.string "im Kampf jedoch sehr nützlich sein!$"
#else
	.string "ZUBAT is tough!\n"
	.string "But if you can catch one, you'll\l"
	.string "be able to count on it.$"
#endif

MtMoon_1F_Text_ZubatIsABloodsucker::
#if GERMAN
	.string "Sei vorsichtig!\n"
	.string "Zubat ist ein Blutsauger!$"
#else
	.string "Beware!\n"
	.string "ZUBAT is a bloodsucker!$"
#endif

MtMoon_1F_Text_BrockHelpsExcavateFossils::
#if GERMAN
	.string "Hallo! Ich grabe Fossilien hier am\n"
	.string "Mondberg aus.\p"
	.string "Manchmal hilft mir Rocko, der\n"
	.string "Arenaleiter von {COLOR RED}Marmoria City{COLOR DARK_GRAY}.$"
#else
	.string "Hi, I'm excavating for fossils here\n"
	.string "under MT. MOON.\p"
	.string "Sometimes, BROCK of PEWTER GYM\n"
	.string "lends me a hand.$"
#endif
