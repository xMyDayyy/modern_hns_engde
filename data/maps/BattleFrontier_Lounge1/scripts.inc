BattleFrontier_Lounge1_MapScripts::
	.byte 0

@ NPC that rates pokemon based on their IVs
BattleFrontier_Lounge1_EventScript_Breeder::
	lock
	faceplayer
	call_if_unset FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_BreederIntro
	call_if_set FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder
	setflag FLAG_MET_BATTLE_FRONTIER_BREEDER
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
	end

BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder::
	chooseboxmon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_ShowMonToBreeder
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_CancelMonSelect
	end

BattleFrontier_Lounge1_EventScript_BreederIntro::
	msgbox BattleFrontier_Lounge1_Text_PokemonBreederIntro, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder::
	msgbox BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon, MSGBOX_DEFAULT
	return

@ BufferVarsForIVRater buffers the following values
@ VAR_0x8005: Sum of the mons IVs
@ VAR_0x8006: Stat id of highest IV stat
@ VAR_0x8007: IV of the highest IV stat
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge1_EventScript_ShowEggToBreeder
	special BufferVarsForIVRater
	goto_if_le VAR_0x8005, 90, BattleFrontier_Lounge1_EventScript_AverageTotalIVs       @ Average of 15
	goto_if_le VAR_0x8005, 120, BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs @ Average of 20
	goto_if_le VAR_0x8005, 150, BattleFrontier_Lounge1_EventScript_HighTotalIVs         @ Average of 25
	goto_if_ge VAR_0x8005, 151, BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs     @ Average of > 25
	end

BattleFrontier_Lounge1_EventScript_ShowEggToBreeder::
	msgbox BattleFrontier_Lounge1_Text_EvenICantTell, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
	end

@ Comment on the highest IV stat
BattleFrontier_Lounge1_EventScript_HighestIVStat::
	goto_if_eq VAR_0x8006, STAT_HP, BattleFrontier_Lounge1_EventScript_HighestIVHP
	goto_if_eq VAR_0x8006, STAT_ATK, BattleFrontier_Lounge1_EventScript_HighestIVAtk
	goto_if_eq VAR_0x8006, STAT_DEF, BattleFrontier_Lounge1_EventScript_HighestIVDef
	goto_if_eq VAR_0x8006, STAT_SPEED, BattleFrontier_Lounge1_EventScript_HighestIVSpeed
	goto_if_eq VAR_0x8006, STAT_SPATK, BattleFrontier_Lounge1_EventScript_HighestIVSpAtk
	goto_if_eq VAR_0x8006, STAT_SPDEF, BattleFrontier_Lounge1_EventScript_HighestIVSpDef
	end

@ Comment on the highest IV value
BattleFrontier_Lounge1_EventScript_HighestIVValue::
	goto_if_le VAR_0x8007, 15, BattleFrontier_Lounge1_EventScript_HighestIVLow
	goto_if_le VAR_0x8007, 25, BattleFrontier_Lounge1_EventScript_HighestIVMid
	goto_if_le VAR_0x8007, 30, BattleFrontier_Lounge1_EventScript_HighestIVHigh
	goto_if_ge VAR_0x8007, 31, BattleFrontier_Lounge1_EventScript_HighestIVMax
	end

BattleFrontier_Lounge1_EventScript_EndBreederComments::
	release
	end

BattleFrontier_Lounge1_EventScript_AverageTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_AverageAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_BetterThanAverageAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_HighTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_ImpressiveAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_OutstandingAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_HighestIVHP::
	msgbox BattleFrontier_Lounge1_Text_BestAspectHP, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVAtk::
	msgbox BattleFrontier_Lounge1_Text_BestAspectAtk, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVDef::
	msgbox BattleFrontier_Lounge1_Text_BestAspectDef, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpeed::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpeed, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpAtk::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpAtk, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpDef::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpDef, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVLow::
	msgbox BattleFrontier_Lounge1_Text_StatRelativelyGood, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_HighestIVMid::
	msgbox BattleFrontier_Lounge1_Text_StatImpressive, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_HighestIVHigh::
	msgbox BattleFrontier_Lounge1_Text_StatOutstanding, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_HighestIVMax::
	msgbox BattleFrontier_Lounge1_Text_StatFlawless, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_CancelMonSelect::
	msgbox BattleFrontier_Lounge1_Text_NoTimeForMyAdvice, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Boy1::
	msgbox BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding, MSGBOX_NPC
	end

BattleFrontier_Lounge1_EventScript_Boy2::
	msgbox BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt, MSGBOX_NPC
	end

BattleFrontier_Lounge1_Text_PokemonBreederIntro:
#if GERMAN
	.string "Seit 70 Jahren ziehe ich Pokémon auf!\n"
	.string "Ich bin derjenige, den alle nur den\l"
	.string "legendären Pkmn-züchter nennen!\p"
	.string "Ein Mensch mit meiner Erfahrung\n"
	.string "erkennt die Fähigkeiten eines Pokémon\l"
	.string "mit einem Blick.\p"
	.string "Du bist ein Trainer. Interessiert es\n"
	.string "dich nicht, welche Fähigkeiten deine\l"
	.string "Pokémon besitzen?\p"
	.string "Komm! Lass mich einen Blick auf deine\n"
	.string "Pokémon werfen!$"
#else
	.string "For 70 years I have raised POKéMON!\n"
	.string "I am the man they revere as\l"
	.string "the legendary top POKéMON BREEDER!\p"
	.string "If you ever become as seasoned as me,\n"
	.string "you'll see the abilities of POKéMON\l"
	.string "at a glance.\p"
	.string "You're a TRAINER. Doesn't it interest\n"
	.string "you to know your own POKéMON's\l"
	.string "abilities?\p"
	.string "Here!\n"
	.string "Let's have a look at your POKéMON!$"
#endif

BattleFrontier_Lounge1_Text_AverageAbility:
#if GERMAN
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich\n"
	.string "durchschnittliche Fähigkeiten.$"
#else
	.string "…Hmm…\p"
	.string "This one, overall, I would describe\n"
	.string "as being of average ability.$"
#endif

BattleFrontier_Lounge1_Text_BetterThanAverageAbility:
#if GERMAN
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich über-\n"
	.string "durchschnittliche Fähigkeiten.$"
#else
	.string "…Hmm…\p"
	.string "This one, overall, I would describe as\n"
	.string "having better-than-average ability.$"
#endif

BattleFrontier_Lounge1_Text_ImpressiveAbility:
#if GERMAN
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich\n"
	.string "beeindruckende Fähigkeiten.$"
#else
	.string "…Hmm…\p"
	.string "This one, overall, I would say is\n"
	.string "quite impressive in ability!$"
#endif

BattleFrontier_Lounge1_Text_OutstandingAbility:
#if GERMAN
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich\n"
	.string "herausragende Fähigkeiten.$"
#else
	.string "…Hmm…\p"
	.string "This one, overall, I would say is\n"
	.string "wonderfully outstanding in ability!$"
#endif

BattleFrontier_Lounge1_Text_BestAspectHP:
#if GERMAN
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seinen KP…$"
#else
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its HP…$"
#endif

BattleFrontier_Lounge1_Text_BestAspectAtk:
#if GERMAN
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seinem Angriff…$"
#else
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its ATTACK…$"
#endif

BattleFrontier_Lounge1_Text_BestAspectDef:
#if GERMAN
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seiner Verteidigung…$"
#else
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its DEFENSE…$"
#endif

BattleFrontier_Lounge1_Text_BestAspectSpAtk:
#if GERMAN
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seinem Spezial-Angriff…$"
#else
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its SPECIAL ATTACK…$"
#endif

BattleFrontier_Lounge1_Text_BestAspectSpDef:
#if GERMAN
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seiner Spezial-Verteidigung…$"
#else
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its SPECIAL DEFENSE…$"
#endif

BattleFrontier_Lounge1_Text_BestAspectSpeed:
#if GERMAN
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seiner Initiative…$"
#else
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its SPEED…$"
#endif

BattleFrontier_Lounge1_Text_StatRelativelyGood:
#if GERMAN
	.string "Sein Status ist relativ gut.\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"
#else
	.string "That stat is relatively good.\n"
	.string "…Hm… That's how I call it.$"
#endif

BattleFrontier_Lounge1_Text_StatImpressive:
#if GERMAN
	.string "Sein Status ist beeindruckend.\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"
#else
	.string "That stat is quite impressive.\n"
	.string "…Hm… That's how I call it.$"
#endif

BattleFrontier_Lounge1_Text_StatOutstanding:
#if GERMAN
	.string "Sein Status ist herausragend.\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"
#else
	.string "That stat is outstanding!\n"
	.string "…Hm… That's how I call it.$"
#endif

BattleFrontier_Lounge1_Text_StatFlawless:
#if GERMAN
	.string "Dies ist makellos! Einfach perfekt!\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"
#else
	.string "It's flawless! A thing of perfection!\n"
	.string "…Hm… That's how I call it.$"
#endif

BattleFrontier_Lounge1_Text_NoTimeForMyAdvice:
#if GERMAN
	.string "Was? Du hast keine Zeit,\n"
	.string "meinen Rat zu hören?\p"
	.string "Du solltest dir immer die Zeit nehmen,\n"
	.string "von den Alten zu lernen.$"
#else
	.string "What?\n"
	.string "You have no time for my advice?\p"
	.string "You should always be eager to learn\n"
	.string "from the experiences of your elders!$"
#endif

@ Unused
BattleFrontier_Lounge1_Text_HaveBusinessNeedsTending:
#if GERMAN
	.string "Ja, was ist denn jetzt?\p"
	.string "Ich habe zu tun!\n"
	.string "Heb es dir für das nächste Mal auf!$"
#else
	.string "Yes, what is it now?\p"
	.string "I have business that needs tending!\n"
	.string "Save it for next time!$"
#endif

BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon:
#if GERMAN
	.string "Ah, ein junges Gesicht! Interessieren\n"
	.string "dich die Fähigkeiten deiner Pokémon?\p"
	.string "Dann komm! Lass uns einen Blick\n"
	.string "auf deine Pokémon werfen.$"
#else
	.string "Ah, youngster! Do your POKéMON's\n"
	.string "abilities intrigue you?\p"
	.string "Here, here!\n"
	.string "Let's have a look at your POKéMON!$"
#endif

BattleFrontier_Lounge1_Text_EvenICantTell:
#if GERMAN
	.string "Ich bin zwar ein Experte, aber auch\n"
	.string "ich\n"
	.string "bin nicht in der Lage, etwas zu einem\l"
	.string "ungeschlüpften Pokémon zu sagen.\p"
	.string "Zeig mir ein Pokémon!\n"
	.string "Ich muss nur einen Blick drauf werfen.$"
#else
	.string "An expert I am, but even I can't tell\n"
	.string "anything about an unhatched POKéMON!\p"
	.string "Show me a POKéMON!\n"
	.string "A POKéMON is what I need to see!$"
#endif

BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding:
#if GERMAN
	.string "Er hat gesagt, mein Pokémon sei\n"
	.string "herausragend! Ich bin froh, dass ich\l"
	.string "es sorgfältig aufgezogen habe.$"
#else
	.string "He said my POKéMON is outstanding!\n"
	.string "I'm glad I raised it carefully!$"
#endif

BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt:
#if GERMAN
	.string "Er hat gesagt, mein Pokémon sei\n"
	.string "herausragend! Dabei habe ich gar\n"
	.string "nichts\l"
	.string "Besonderes bei der Aufzucht gemacht…$"
#else
	.string "He said my POKéMON is outstanding!\n"
	.string "But I didn't do anything special\l"
	.string "raising it…$"
#endif

