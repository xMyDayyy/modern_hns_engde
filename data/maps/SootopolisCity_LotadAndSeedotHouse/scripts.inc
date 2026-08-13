SootopolisCity_LotadAndSeedotHouse_MapScripts::
	.byte 0

SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother::
	special GetSeedotSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot, MSGBOX_DEFAULT
	setvar VAR_0x8009, SPECIES_SEEDOT
	chooseboxmon SELECT_PC_MON_TRADE
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot
	special CompareSeedotSize
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad, MSGBOX_DEFAULT
	giveitem ITEM_ELIXIR
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1
	closemessage
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother::
	special GetLotadSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad, MSGBOX_DEFAULT
	setvar VAR_0x8009, SPECIES_LOTAD
	chooseboxmon SELECT_PC_MON_TRADE
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad
	special CompareLotadSize
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot, MSGBOX_DEFAULT
	giveitem ITEM_ELIXIR
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2
	closemessage
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotSizeRecord::
	special GetSeedotSizeRecordInfo
	lockall
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_LotadSizeRecord::
	special GetLotadSizeRecordInfo
	lockall
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot:
#if GERMAN
	.string "Kennst du das Pokémon Samurzel?\n"
	.string "In Xeneroville wird es kaum gesehen.\p"
	.string "Aber ich liebe große Samurzel.\n"
	.string "Je größer, desto besser.\p"
	.string "Aber mein jüngerer Bruder sagt, dass\n"
	.string "Loturzel größer ist.\p"
	.string "Verrückt! Samurzel muss einfach\n"
	.string "größer sein!\p"
	.string "Wie? Du hast ein Samurzel dabei???\n"
	.string "B-b-bitte zeig es mir!$"
#else
	.string "Do you know the POKéMON SEEDOT?\n"
	.string "It's hardly ever seen in SOOTOPOLIS.\p"
	.string "Anyway, I love big SEEDOT.\n"
	.string "The bigger the better.\p"
	.string "But my younger brother, he says that\n"
	.string "LOTAD is bigger.\p"
	.string "That's silly.\n"
	.string "SEEDOT has to be bigger than that!\p"
	.string "Huh? Do you have a SEEDOT with you?\n"
	.string "P-p-please, show me!$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad:
#if GERMAN
	.string "{STR_VAR_2} cm!\n"
	.string "Meine Güte, ist das aber groß!\p"
	.string "Das wird sogar größer als das Loturzel\n"
	.string "sein, das mein Bruder gesehen hat!\p"
	.string "Danke, dass du es mir gezeigt hast.\n"
	.string "Hier, ein kleines Dankeschön!$"
#else
	.string "{STR_VAR_2}!\n"
	.string "Oh, my gosh, this is a big one!\p"
	.string "It might even beat the big LOTAD\n"
	.string "my younger brother saw!\p"
	.string "Thanks for showing me.\n"
	.string "This is my thanks!$"
#endif

@ Unused
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1:
#if GERMAN
	.string "{PLAYER} erhält einen Trank.$"
#else
	.string "{PLAYER} received a POTION.$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1:
#if GERMAN
	.string "Huch. Dein Beutel ist ja randvoll.$"
#else
	.string "Hunh?\n"
	.string "Your BAG is crammed full.$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot:
#if GERMAN
	.string "{STR_VAR_2} cm, nicht wahr?\p"
	.string "Hmm… Ich habe schon größere\n"
	.string "Samurzel als dieses gesehen.$"
#else
	.string "{STR_VAR_2}, is it?\p"
	.string "Hmm… I've seen a bigger SEEDOT\n"
	.string "than this one.$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot:
#if GERMAN
	.string "Na, das ist doch schon ganz ordentlich…\n"
	.string "Aber das ist kein Samurzel!$"
#else
	.string "Oh, now this is quite something…\n"
	.string "But it's not a SEEDOT!$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot:
#if GERMAN
	.string "Du hast gar kein großes Samurzel?\n"
	.string "Och, wie schade…\p"
	.string "Wenn du ein großes Samurzel hast, dann\n"
	.string "komm bitte wieder und zeig es mir.$"
#else
	.string "You don't have a big SEEDOT?\n"
	.string "That's too bad…\p"
	.string "If you get a big SEEDOT, please\n"
	.string "come show me.$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory:
#if GERMAN
	.string "Das größte Samurzel aller Zeiten!\n"
	.string "Der {STR_VAR_3} cm-Gigant von {STR_VAR_2}!\p"
	.string "Ein Samurzel, so groß, wie ein\n"
	.string "Loturzel gerne sein würde!$"
#else
	.string "The biggest SEEDOT in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3} giant!\p"
	.string "A SEEDOT bigger than a LOTAD\n"
	.string "always wanted!$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad:
#if GERMAN
	.string "Kennst du das Pokémon Loturzel?\n"
	.string "Das ist bisher selten in Xeneroville\l"
	.string "aufgetaucht.\p"
	.string "Ich liebe große Loturzel.\p"
	.string "Mein großer Bruder sagt, dass\n"
	.string "Samurzel größer ist.\p"
	.string "Aber das stimmt gar nicht! Jeder weiß\n"
	.string "doch, dass Loturzel viel größer ist.\p"
	.string "Wie? Oh, du hast ein Loturzel?\n"
	.string "Bitte, bitte zeig es mir!$"
#else
	.string "Do you know the POKéMON LOTAD?\n"
	.string "It's rarely seen in SOOTOPOLIS.\p"
	.string "I love, I mean love, big LOTAD!\p"
	.string "My big brother says that SEEDOT is\n"
	.string "bigger.\p"
	.string "But that's wrong! Everyone knows that\n"
	.string "LOTAD is a lot bigger.\p"
	.string "Hunh? Do you have a LOTAD?\n"
	.string "P-p-please show me!$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot:
#if GERMAN
	.string "{STR_VAR_2} cm!\n"
	.string "Wow, das ist aber groß!\p"
	.string "Das ist bestimmt größer als das\n"
	.string "Samurzel, das mein Bruder gesehen hat.\p"
	.string "Danke, dass ich es anschauen durfte.\n"
	.string "Hier, ein kleines Dankeschön!$"
#else
	.string "{STR_VAR_2}!\n"
	.string "Wow, that is big!\p"
	.string "It might be even bigger than the huge\n"
	.string "SEEDOT my big brother saw.\p"
	.string "Thanks for showing me!\n"
	.string "This is my thanks!$"
#endif

@ Unused
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion2:
#if GERMAN
	.string "{PLAYER} erhält einen Trank.$"
#else
	.string "{PLAYER} received a POTION.$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2:
#if GERMAN
	.string "Huups, dein Beutel ist voll.$"
#else
	.string "Hunh?\n"
	.string "Your BAG is crammed full.$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad:
#if GERMAN
	.string "{STR_VAR_2} cm?\p"
	.string "Ach… Da habe ich aber schon ein\n"
	.string "größeres Loturzel gesehen.$"
#else
	.string "{STR_VAR_2}?\p"
	.string "Hmm… I've seen a bigger LOTAD\n"
	.string "than this one here.$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad:
#if GERMAN
	.string "Nun, das ist ganz stattlich.\n"
	.string "Aber es ist kein Loturzel!$"
#else
	.string "Well, isn't this something!\n"
	.string "But it's no LOTAD!$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad:
#if GERMAN
	.string "Hast du kein großes Loturzel?\n"
	.string "Och, wie enttäuschend…\p"
	.string "Wenn du ein großes Loturzel hast,\n"
	.string "dann komm bitte wieder her.$"
#else
	.string "Don't you have a big LOTAD?\n"
	.string "How disappointing…\p"
	.string "If you get a big LOTAD, please\n"
	.string "come show me!$"
#endif

SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory:
#if GERMAN
	.string "Das größte Loturzel aller Zeiten!\n"
	.string "Der {STR_VAR_3} cm-Koloss von {STR_VAR_2}!\p"
	.string "Ein Loturzel, so groß, wie ein\n"
	.string "Samurzel gerne sein würde.$"
#else
	.string "The biggest LOTAD in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3} colossus!\p"
	.string "A LOTAD bigger than a SEEDOT\n"
	.string "always wanted!$"
#endif

