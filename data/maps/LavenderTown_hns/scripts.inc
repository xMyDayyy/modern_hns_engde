LavenderTown_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_EventScript_CityEnter
	.byte 0

LavenderTown_EventScript_CityEnter::
	setflag FLAG_VISITED_LAVENDER_TOWN
	end

LavenderTown_EventScript_PokefanM::
	msgbox LavenderTown_Text_PokefanM, MSGBOX_NPC
	end

LavenderTown_EventScript_Teacher::
	msgbox LavenderTown_Text_Teacher, MSGBOX_NPC
	end

LavenderTown_EventScript_Gramps::
	msgbox LavenderTown_Text_Gramps, MSGBOX_NPC
	end

LavenderTown_EventScript_Youngster::
	msgbox LavenderTown_Text_Youngster, MSGBOX_NPC
	end

LavenderTown_EventScript_TownSign::
	msgbox LavenderTown_Text_Sign, MSGBOX_SIGN
	end

LavenderTown_EventScript_RadioTowerSign::
	msgbox LavenderTown_Text_KantoRadioStationSign, MSGBOX_SIGN
	end

LavenderTown_EventScript_VolunteerSign::
	msgbox LavenderTown_Text_VolunteerPokemonHouseSign, MSGBOX_SIGN
	end

LavenderTown_EventScript_SoulHouseSign::
	msgbox LavenderTown_Text_SoulHouseSign, MSGBOX_SIGN
	end

LavenderTown_Text_PokefanM:
#if GERMAN
	.string "Ein beeindruckendes Gebäude, was?\n"
	.string "Das ist der Radioturm von Kanto!$"
#else
	.string "That's quite some building, eh?\p"
	.string "It's KANTO's RADIO TOWER.$"
#endif

LavenderTown_Text_Teacher:
#if GERMAN
	.string "In Kanto laufen viele gute\n"
	.string "Sendungen im Radio!$"
#else
	.string "KANTO has many good radio shows.$"
#endif

LavenderTown_Text_Gramps:
#if GERMAN
	.string "Die Leute kommen von überallher,\n"
	.string "um hier den Seelen dahingegangener\l"
	.string "Pokémon Respekt zu erweisen.$"
#else
	.string "People come from all over to pay\n"
	.string "their respects to the departed\l"
	.string "souls of POKéMON.$"
#endif

LavenderTown_Text_Youngster:
#if GERMAN
	.string "Um schlafende Pokémon zu wecken, ist\n"
	.string "eine {COLOR RED}Pokéflöte{COLOR DARK_GRAY} immer noch am besten!\l"
	.string "Jeder Trainer sollte das wissen!$"
#else
	.string "You need a POKé FLUTE to wake\n"
	.string "sleeping POKéMON.\p"
	.string "Every trainer has to know that!$"
#endif

LavenderTown_Text_Sign:
#if GERMAN
	.string "Lavandia\n"
	.string "Stadt des gewissen Etwas$"
#else
	.string "LAVENDER TOWN\p"
	.string "The Noble Purple Town$"
#endif

LavenderTown_Text_KantoRadioStationSign:
#if GERMAN
	.string "Kanto Radio\p"
	.string "Deine liebsten Programme,\n"
	.string "Rund um die Uhr!$"
#else
	.string "KANTO RADIO STATION\p"
	.string "Your Favorite Programs On-Air\n"
	.string "Around the Clock!$"
#endif

LavenderTown_Text_VolunteerPokemonHouseSign:
#if GERMAN
	.string "Ehrenamtlich betriebenes\n"
	.string "Waisenhaus für Pokémon\n$"
#else
	.string "LAVENDER VOLUNTEER POKéMON\n"
	.string "HOUSE$"
#endif

LavenderTown_Text_SoulHouseSign:
#if GERMAN
	.string "Haus der Erinnerungen\p"
	.string "Mögen die Seelen der Pokémon\n"
	.string "hier in Frieden ruhen$"
#else
	.string "SOUL HOUSE\p"
	.string "May the Souls of POKéMON Rest\n"
	.string "Easy$"
#endif
