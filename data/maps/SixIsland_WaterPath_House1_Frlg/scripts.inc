SixIsland_WaterPath_House1_Frlg_MapScripts::
	.byte 0

SixIsland_WaterPath_House1_EventScript_Beauty::
	lock
	faceplayer
	setvar VAR_0x8004, SPECIES_HERACROSS
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, FALSE, SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty
	special GetHeracrossSizeRecordInfo
	msgbox SixIsland_WaterPath_House1_Text_MayIMeasureHeracross
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	goto_if_ge VAR_RESULT, PARTY_SIZE, SixIsland_WaterPath_House1_EventScript_DontShowMon
	special CompareHeracrossSize
	goto_if_eq VAR_RESULT, 1, SixIsland_WaterPath_House1_EventScript_ShownNonHeracross
	goto_if_eq VAR_RESULT, 2, SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross
	goto_if_eq VAR_RESULT, 3, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
	goto_if_eq VAR_RESULT, 4, SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross
	release
	end

SixIsland_WaterPath_House1_EventScript_NoHeracrossInParty::
	msgbox SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross
	release
	end

SixIsland_WaterPath_House1_EventScript_DontShowMon::
	release
	end

SixIsland_WaterPath_House1_EventScript_ShownNonHeracross::
	msgbox SixIsland_WaterPath_House1_Text_ThisWontDo
	release
	end

SixIsland_WaterPath_House1_EventScript_ShownSmallHeracross::
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesYInchesWasBiggest
	release
	end

SixIsland_WaterPath_House1_EventScript_ShownTiedHeracross::
	goto_if_unset FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_ShownBigHeracross
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesSameAsBefore
	release
	end

SixIsland_WaterPath_House1_EventScript_ShownBigHeracross::
	setflag FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesDeserveReward
	giveitem ITEM_NEST_BALL
	goto_if_eq VAR_RESULT, FALSE, SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall
	msgbox SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne
	release
	end

SixIsland_WaterPath_House1_EventScript_NoRoomForNestBall::
	msgbox SixIsland_WaterPath_House1_Text_YourBagIsFull
	release
	end

SixIsland_WaterPath_House1_EventScript_SizeRecord::
	lockall
	goto_if_set FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty
	msgbox SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort
	releaseall
	end

SixIsland_WaterPath_House1_EventScript_SizeRecordNonEmpty::
	special GetHeracrossSizeRecordInfo
	msgbox SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXInches
	releaseall
	end

SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross::
#if GERMAN
	.string "Skara, Skara, Skaraborn!\n"
	.string "Unter Käfern hochwohlgeboren!\l"
	.string "Fühle seinen royalen Zorn,\l"
	.string "Skara, Skara, Skaraborn!$"
#else
	.string "Hera, hera, HERACROSS!\n"
	.string "Big and shiny, it's the bug boss!\l"
	.string "Love it, need it, HERACROSS!$"
#endif

SixIsland_WaterPath_House1_Text_MayIMeasureHeracross::
#if GERMAN
	.string "Wow!\n"
	.string "Das ist Skaraborn!\p"
	.string "Darf ich bitte messen, wie groß\n"
	.string "es ist?$"
#else
	.string "Eeeeek!\n"
	.string "That's a HERACROSS!\p"
	.string "Please, please, may I measure how\n"
	.string "big it is?$"
#endif

SixIsland_WaterPath_House1_Text_ItsXInchesDeserveReward::
#if GERMAN
	.string "Ui! Es ist {STR_VAR_2} cm lang! So etwas\n"
	.string "habe ich noch nie gesehen!\l"
	.string "Du verdienst eine Belohnung!$"
#else
	.string "Eeeek, it's {STR_VAR_2} inches!\n"
	.string "I've never seen anything like this!\l"
	.string "You deserve a reward!$"
#endif

SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne::
#if GERMAN
	.string "Ich möchte ein noch größeres\n"
	.string "Skaraborn sehen.\p"
	.string "Oh, wie ich sie verehre, die\n"
	.string "großen Skaraborn.$"
#else
	.string "I want to see a much, much bigger\n"
	.string "HERACROSS than that one.\p"
	.string "Oh, how I adore them, big\n"
	.string "HERACROSS!$"
#endif

SixIsland_WaterPath_House1_Text_ItsXInchesSameAsBefore::
#if GERMAN
	.string "Häh? {STR_VAR_2} cm groß…\n"
	.string "Oh, aha! Es ist genauso groß\l"
	.string "wie das zuvor!$"
#else
	.string "Huh? This {STR_VAR_2}-inch measurement…\n"
	.string "Oh, boo! It's the same as before.$"
#endif

SixIsland_WaterPath_House1_Text_ItsXInchesYInchesWasBiggest::
#if GERMAN
	.string "Oh, es ist nur {STR_VAR_2} cm groß.\n"
	.string "Das Skaraborn zuvor war größer.\p"
	.string "Das größte Skaraborn, das\n"
	.string "du mir gebracht hast, war\l"
	.string "{STR_VAR_3} cm groß.$"
#else
	.string "Oh, it's just {STR_VAR_2} inches.\n"
	.string "The HERACROSS before was bigger.\p"
	.string "It was {STR_VAR_3} inches, the biggest\n"
	.string "HERACROSS you've brought me.$"
#endif

SixIsland_WaterPath_House1_Text_ThisWontDo::
#if GERMAN
	.string "Oh, nein! Da ist etwas falsch!\p"
	.string "Skaraborn ist mehr ein Macho\n"
	.string "und cool dazu mit einem Horn!$"
#else
	.string "Oh, no! This won't do!\p"
	.string "HERACROSS looks much more macho\n"
	.string "and cool, and has a lovely horn!$"
#endif

SixIsland_WaterPath_House1_Text_YourBagIsFull::
#if GERMAN
	.string "Dein Beutel ist voll.\n"
	.string "Meine Belohnung geht nicht\l"
	.string "mehr hinein!$"
#else
	.string "Your BAG is full.\n"
	.string "My reward won't fit.$"
#endif

SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXInches::
#if GERMAN
	.string "Das größte Skaraborn, das\n"
	.string "ich je sah war\p"
	.string "{STR_VAR_3} cm groß!$"
#else
	.string "The biggest HERACROSS that I have\n"
	.string "ever seen measured so far is:\p"
	.string "{STR_VAR_3} inches!$"
#endif

SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort::
#if GERMAN
	.string "Es ist eine leere Tabelle!\p"
	.string "Man kann darin irgendwelche\n"
	.string "Rekorde auflisten!$"
#else
	.string "It's a blank chart of some sort.\p"
	.string "It has spaces for writing in\n"
	.string "records of some kind.$"
#endif

