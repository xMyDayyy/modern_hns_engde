Route3_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route3_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route3_EventScript_Otis::
	trainerbattle_single TRAINER_OTIS_HNS, Route3_Text_FirebreatherOtis_Seen, Route3_Text_FirebreatherOtis_Beaten
	msgbox Route3_Text_FirebreatherOtis_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Warren::
	trainerbattle_single TRAINER_WARREN_HNS, Route3_Text_YoungsterWarren_Seen, Route3_Text_YoungsterWarren_Beaten
	msgbox Route3_Text_YoungsterWarren_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Jimmy::
	trainerbattle_single TRAINER_JIMMY_HNS, Route3_Text_YoungsterJimmy_Seen, Route3_Text_YoungsterJimmy_Beaten
	msgbox Route3_Text_YoungsterJimmy_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Burt::
	trainerbattle_single TRAINER_BURT_HNS, Route3_Text_FirebreatherBurt_Seen, Route3_Text_FirebreatherBurt_Beaten
	msgbox Route3_Text_FirebreatherBurt_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Sign::
	msgbox Route3_Text_MtMoonSquareSign, MSGBOX_SIGN
	end

Route3_Text_FirebreatherOtis_Seen:
#if GERMAN
	.string "Ah! Das Wetter ist so\n"
	.string "schön wie immer.$"
#else
	.string "Ah! The weather's as fine as ever.$"
#endif

Route3_Text_FirebreatherOtis_Beaten:
#if GERMAN
	.string "Die Sonne scheint,\n"
	.string "dennoch bin ich nass…$"
#else
	.string "It's sunny, but I'm all wet…$"
#endif

Route3_Text_FirebreatherOtis_AfterBattle:
#if GERMAN
	.string "Bei Regen ist\n"
	.string "eine Zündung sehr schwierig…$"
#else
	.string "When it rains, it's hard to get\n"
	.string "ignition…$"
#endif

Route3_Text_YoungsterWarren_Seen:
#if GERMAN
	.string "Hmmm… ich weiß nicht,\n"
	.string "was ich tun soll…$"
#else
	.string "Hmmm… I don't know what to do…$"
#endif

Route3_Text_YoungsterWarren_Beaten:
#if GERMAN
	.string "Ich hätte es wissen sollen…$"
#else
	.string "I knew I'd lose…$"
#endif

Route3_Text_YoungsterWarren_AfterBattle:
#if GERMAN
	.string "Du sahst stark aus. Ich hatte Angst,\n"
	.string "gegen dich zu kämpfen…$"
#else
	.string "You looked strong.\p"
	.string "I was afraid to take you on…$"
#endif

Route3_Text_YoungsterJimmy_Seen:
#if GERMAN
	.string "Ich bin schnell\n"
	.string "wie der Wind!$"
#else
	.string "I can run like the wind!$"
#endif

Route3_Text_YoungsterJimmy_Beaten:
#if GERMAN
	.string "Hinfortgeweht!$"
#else
	.string "Blown away!$"
#endif

Route3_Text_YoungsterJimmy_AfterBattle:
#if GERMAN
	.string "Ich trage das ganze Jahr Shorts.\n"
	.string "Das ist meine Auffassung von Mode!$"
#else
	.string "I wear shorts the whole year round.\p"
	.string "That's my fashion policy.$"
#endif

Route3_Text_FirebreatherBurt_Seen:
#if GERMAN
	.string "Kommt alle her!\n"
	.string "Das müsst ihr sehen!$"
#else
	.string "Step right up and take a look!$"
#endif

Route3_Text_FirebreatherBurt_Beaten:
#if GERMAN
	.string "Autsch! Ist das heiß!$"
#else
	.string "Yow! That's hot!$"
#endif

Route3_Text_FirebreatherBurt_AfterBattle:
#if GERMAN
	.string "Ich bin der beste\n"
	.string "Feuerspucker in Kanto.\l"
	.string "Aber nicht der beste Trainer…$"
#else
	.string "The greatest fire-breather in KANTO,\n"
	.string "that's me.\p"
	.string "But not the best trainer…$"
#endif

Route3_Text_MtMoonSquareSign:
#if GERMAN
	.string "Mondbergplatz\p"
	.string "Geh einfach die Treppe hoch$"
#else
	.string "MT.MOON SQUARE\p"
	.string "Just go up the stairs.$"
#endif

