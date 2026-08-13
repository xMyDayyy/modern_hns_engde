Route4_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route4_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route4_EventScript_HpUp::
	finditem ITEM_HP_UP
	end

Route4_EventScript_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

Route4_EventScript_Hank::
	trainerbattle_single TRAINER_HANK_HNS, Route4_Text_BirdKeeperHank_Seen, Route4_Text_BirdKeeperHank_Beaten
	msgbox Route4_Text_BirdKeeperHank_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route4_EventScript_Hope::
	trainerbattle_single TRAINER_HOPE_HNS, Route4_Text_PicnickerHope_Seen, Route4_Text_PicnickerHope_Beaten
	msgbox Route4_Text_PicnickerHope_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route4_EventScript_Sharon::
	trainerbattle_single TRAINER_SHARON_HNS, Route4_Text_PicnickerSharon_Seen, Route4_Text_PicnickerSharon_Beaten
	msgbox Route4_Text_PicnickerSharon_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route4_EventScript_Sign::
	msgbox Route4_Text_MtMoonSquareSign, MSGBOX_SIGN
	end

Route4_Text_BirdKeeperHank_Seen:
#if GERMAN
	.string "Ich trainiere gerade meine Pokémon.\n"
	.string "Trittst du gegen mich an?$"
#else
	.string "I'm raising my POKéMON. Want to battle\n"
	.string "with me?$"
#endif

Route4_Text_BirdKeeperHank_Beaten:
#if GERMAN
	.string "Uff! Ich habe verloren…$"
#else
	.string "Ack! I lost that one…$"
#endif

Route4_Text_BirdKeeperHank_AfterBattle:
#if GERMAN
	.string "Um ein Pokémon zu trainieren, setze es\n"
	.string "an die erste Stelle und tausche es aus.\p"
	.string "So funktioniert das.$"
#else
	.string "If you have a specific POKéMON that you\n"
	.string "want to raise, put it out first, then\l"
	.string "switch it right away.\p"
	.string "That's how to do it.$"
#endif

Route4_Text_PicnickerHope_Seen:
#if GERMAN
	.string "Dich könnte ich, glaube ich, besiegen!\n"
	.string "Los, lass uns kämpfen!$"
#else
	.string "I have a feeling that I can win.\p"
	.string "Let's see if I'm right!$"
#endif

Route4_Text_PicnickerHope_Beaten:
#if GERMAN
	.string "Nein, du warst doch zu stark.$"
#else
	.string "Aww, you are too strong.$"
#endif

Route4_Text_PicnickerHope_AfterBattle:
#if GERMAN
	.string "Ich hörte, dass man am Mondberg Piepi\n"
	.string "über den Weg laufen kann.\l"
	.string "Aber wo genau finde ich sie?$"
#else
	.string "I heard CLEFAIRY appear at MT.MOON.\p"
	.string "But where could they be?$"
#endif

Route4_Text_PicnickerSharon_Seen:
#if GERMAN
	.string "Ähm…\n"
	.string "Ich…$"
#else
	.string "Um…\n"
	.string "I…$"
#endif

Route4_Text_PicnickerSharon_Beaten:
	.string "…$"

Route4_Text_PicnickerSharon_AfterBattle:
#if GERMAN
	.string "… … …\p"
	.string "…Ich sollte wohl noch mehr trainieren…$"
#else
	.string "……I'll go train some more…$"
#endif

Route4_Text_MtMoonSquareSign:
#if GERMAN
	.string "Mondbergplatz\p"
	.string "Geh einfach die Treppe hoch$"
#else
	.string "MT.MOON NEW ENTRANCE\n"
	.string "DUE TO CAVE-IN\p"
	.string "WATCH YOUR STEP$"
#endif

