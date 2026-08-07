OneIsland_KindleRoad_EmberSpa_Frlg_MapScripts::
	.byte 0

OneIsland_KindleRoad_EmberSpa_EventScript_OldMan::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan1::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan2::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_OldWoman::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs, MSGBOX_NPC
	end

OneIsland_KindleRoad_EmberSpa_EventScript_BlackBelt::
	lock
	faceplayer
	famechecker FAMECHECKER_BRUNO, 3
	msgbox OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion
	release
	end

OneIsland_KindleRoad_EmberSpa_EventScript_RockSmashMan::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HM06, OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06
	msgbox OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa
	giveitem ITEM_HM06
	setflag FLAG_GOT_HM06
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
	release
	end

OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06::
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
	release
	end

OneIsland_KindleRoad_EmberSpa_EventScript_SpaHeal::
	lockall
	fadescreen FADE_TO_WHITE
	special HealPlayerParty
	fadescreen FADE_FROM_WHITE
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed
	setvar VAR_TEMP_1, 1
	releaseall
	end

OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore::
#if GERMAN
	.string "Hm!\n"
	.string "Hah!\l"
	.string "Argh! Das ist himmlisch!\l"
	.string "Das Wasser wärmt mich überall!\p"
	.string "Spring auch rein!\p"
	.string "Schwimm in die Mitte, entspanne\n"
	.string "und dir wird ganz wohlig warm.$"
#else
	.string "Hm!\n"
	.string "Haaaaaaaaaaah!\p"
	.string "Aaaah! This is heavenly!\n"
	.string "The water warms me to my core!\p"
	.string "You should jump in, too.\p"
	.string "Go to the middle, relax, and get\n"
	.string "good and warm!$"
#endif

OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder::
#if GERMAN
	.string "Mein Lieblingsteil vom Baden\n"
	.string "kommt jetzt gleich.\p"
	.string "Ich genehmige mir eine sämige\n"
	.string "Fischsuppe, um mich auch von\l"
	.string "innen aufzuwärmen!$"
#else
	.string "My favorite part of bathing comes\n"
	.string "up right after this.\p"
	.string "I enjoy a bowl of chowder to\n"
	.string "warm me from the inside, too!$"
#endif

OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed::
#if GERMAN
	.string "Das Wasser ist schön warm!\n"
	.string "Genau richtig! Klasse…\p"
	.string "{PLAYER} und das Team fühlen sich\n"
	.string "erfrischt!$"
#else
	.string "The water is perfectly warm.\n"
	.string "It feels exquisite…\p"
	.string "{PLAYER} and the POKéMON were\n"
	.string "fully refreshed!$"
#endif

OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic::
#if GERMAN
	.string "Ein Thermalbad soll heilende\n"
	.string "Wirkung haben, sagt man.$"
#else
	.string "Soaking in a hot spring pool is\n"
	.string "therapeutic, people say.$"
#endif

OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs::
#if GERMAN
	.string "Sieh in mein Gesicht! Siehst du,\n"
	.string "wie glatt meine Haut ist?\p"
	.string "Das Wasser vom Thermalbad\n"
	.string "hält meine Haut so jung und straff.$"
#else
	.string "Have a look at my face.\n"
	.string "See how smooth my skin is?\p"
	.string "The hot spring's water keeps my\n"
	.string "skin younger than my age.$"
#endif

OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion::
#if GERMAN
	.string "Nach einem harten Trainingstag\n"
	.string "kann einem entspannenden\l"
	.string "Aufenthalt in einem Thermalbad\l"
	.string "nichts das Wasser reichen.\l"
	.string "Bruno, der mir voransteht,\l"
	.string "kommt gelegentlich auch\l"
	.string "in diesen Kurort.\l"
	.string "Er kommt hierher, um seine\l"
	.string "Gebrechen und die seiner\l"
	.string "Pokémon zu lindern.$"
#else
	.string "After an honest day of training,\n"
	.string "nothing beats a relaxing soak in\l"
	.string "the hot spring pool.\p"
	.string "BRUNO, who's a senior ahead of me,\n"
	.string "visits the SPA on occasion.\p"
	.string "He comes to rehab injuries, both\n"
	.string "his own and his POKéMON's.$"
#endif

OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa::
#if GERMAN
	.string "Thermalbäder und Vulkane\n"
	.string "gehören zusammen.\p"
	.string "Die Gluttherme hier habe\n"
	.string "ich vor Jahren errichtet.\p"
	.string "Ich habe das Becken mit meinen\n"
	.string "Händen aus einem riesigen\l"
	.string "Stein geformt.\l"
	.string "Damals habe ich dies benutzt. Ich\l"
	.string "denke, ich kann mich davon trennen.$"
#else
	.string "Hot springs go hand-in-hand with\n"
	.string "volcanoes.\p"
	.string "The EMBER SPA here, well,\n"
	.string "I made it years ago.\p"
	.string "I hewed the pool right out of a\n"
	.string "gigantic boulder by hand.\p"
	.string "I was using this at the time.\n"
	.string "I suppose I can part with it.$"
#endif

OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06::
#if GERMAN
	.string "Damit pulverisierst du Felsen,\n"
	.string "als wären sie aus Pappe.$"
#else
	.string "That shatters boulders as if they\n"
	.string "were made of crackers.$"
#endif

