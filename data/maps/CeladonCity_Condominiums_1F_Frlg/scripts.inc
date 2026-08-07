CeladonCity_Condominiums_1F_Frlg_MapScripts::
	.byte 0

CeladonCity_Condominiums_1F_EventScript_TeaWoman::
	lock
	faceplayer
	goto_if_set FLAG_TALKED_TO_TEA_LADY_AFTER_HOF, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
	goto_if_set FLAG_SYS_GAME_CLEAR, CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy
	goto_if_set FLAG_GOT_TEA, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
	msgbox CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead
	setflag FLAG_GOT_TEA
	giveitem ITEM_TEA
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	msgbox CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea
	release
	end

CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea::
	msgbox CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany
	release
	end

CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy::
	famechecker FAMECHECKER_DAISY, 4
	setflag FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
	msgbox CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea
	release
	end

CeladonCity_Condominiums_1F_EventScript_Meowth::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
	msgbox CeladonCity_Condominiums_1F_Text_Meowth
	waitmoncry
	release
	end

CeladonCity_Condominiums_1F_EventScript_Clefairy::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
	waitmoncry
	release
	end

CeladonCity_Condominiums_1F_EventScript_Nidoran::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
	waitmoncry
	release
	end

CeladonCity_Condominiums_1F_EventScript_SuiteSign::
	msgbox CeladonCity_Condominiums_1F_Text_ManagersSuite, MSGBOX_SIGN
	end

CeladonCity_Condominiums_1F_Text_Meowth::
#if GERMAN
	.string "Mauzi: Miau!$"
#else
	.string "MEOWTH: Meow!$"
#endif

CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead::
#if GERMAN
	.string "Du solltest dein ganzes Geld\n"
	.string "nicht für Getränke ausgeben!\p"
	.string "Versuch das hier!$"
#else
	.string "You shouldn't spend all your money\n"
	.string "on drinks.\p"
	.string "Try this instead.$"
#endif

CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea::
#if GERMAN
	.string "Gegen Durst ist nichts besser als\n"
	.string "heißer Tee.\p"
	.string "Er ist einfach am besten!$"
#else
	.string "Nothing beats thirst like some hot\n"
	.string "TEA.\p"
	.string "It really is the best.$"
#endif

CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany::
#if GERMAN
	.string "Meine treuen Pokémon leisten mir\n"
	.string "Gesellschaft.\p"
	.string "Mauzi bringt sogar Geld mit nach\n"
	.string "Hause!$"
#else
	.string "My dear POKéMON keep me company.\n"
	.string "MEOWTH even brings money home!$"
#endif

CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea::
#if GERMAN
	.string "Oh, hallo!\n"
	.string "Hat dir mein Tee geschmeckt?\p"
	.string "Apropos, bist du zufällig aus\n"
	.string "{COLOR RED}Alabastia{COLOR DARK_GRAY}?\p"
	.string "Ein Mädchen aus {COLOR RED}Alabastia{COLOR DARK_GRAY}\n"
	.string "namens Sarah trinkt jeden Tag\l"
	.string "Tee.\l"
	.string "Sie kommt ins Einkaufszentrum\l"
	.string "von Prismania City, um Tee\l"
	.string "zu kaufen!$"
#else
	.string "Oh, hello, dearie.\n"
	.string "Did you enjoy my TEA?\p"
	.string "By the way, dear. Are you, by any\n"
	.string "chance, from PALLET TOWN?\p"
	.string "A girl from PALLET TOWN, DAISY,\n"
	.string "she enjoys TEA every day.\p"
	.string "She visits the CELADON DEPT. STORE\n"
	.string "to buy some TEA.$"
#endif

CeladonCity_Condominiums_1F_Text_Clefairy::
#if GERMAN
	.string "Piepi: Pi pippi!$"
#else
	.string "CLEFAIRY: Pi pippippi!$"
#endif

CeladonCity_Condominiums_1F_Text_Nidoran::
#if GERMAN
	.string "Nidoran♀: Nidoran!$"
#else
	.string "NIDORAN♀: Kya kyaoo!$"
#endif

CeladonCity_Condominiums_1F_Text_ManagersSuite::
#if GERMAN
	.string "Prismania-Villa\n"
	.string "Manager Suite$"
#else
	.string "CELADON MANSION\n"
	.string "Manager's Suite$"
#endif

