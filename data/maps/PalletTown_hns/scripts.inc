PalletTown_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_EventScript_CityEnter
	.byte 0

PalletTown_EventScript_CityEnter::
	setflag FLAG_VISITED_PALLET_TOWN
	end

PalletTown_EventScript_Woman::
	msgbox PalletTown_Text_Teacher, MSGBOX_NPC
	end
PalletTown_EventScript_Fatman::
	msgbox PalletTown_Text_Fisher, MSGBOX_NPC
	end
PalletTown_EventScript_TownSign::
	msgbox PalletTown_Text_Sign, MSGBOX_SIGN
	end
PalletTown_EventScript_RedsHouseSign::
	msgbox PalletTown_Text_RedsHouseSign, MSGBOX_SIGN
	end
PalletTown_EventScript_BluesHouseSign::
	msgbox PalletTown_Text_BluesHouseSign, MSGBOX_SIGN
	end
PalletTown_EventScript_OaksLabSign::
	msgbox PalletTown_Text_OaksLabSign, MSGBOX_SIGN
	end

PalletTown_Text_Teacher:
#if GERMAN
	.string "Ich trainiere auch Pokémon!\n"
	.string "Sie dienen mir als meine Leibwächter!$"
#else
	.string "I'm raising POKéMON too.\p"
	.string "They serve as my private\n"
	.string "guards.$"
#endif

PalletTown_Text_Fisher:
#if GERMAN
	.string "Es heißt, in Johto gebe es einen Ort, an\n"
	.string "dem man mit Leuten aus aller Herren\l"
	.string "Länder seine Pokémon tauschen kann!\l"
	.string "Ein echtes Wunder der Technik…$"
#else
	.string "Technology is incredible!\p"
	.string "You can now trade POKéMON\n"
	.string "across time like e-mail.$"
#endif

PalletTown_Text_Sign:
#if GERMAN
	.string "Alabastia\p"
	.string "Eine Stätte des\n"
	.string "Friedens und der Reinheit$"
#else
	.string "PALLET TOWN\p"
	.string "A Tranquil Setting of Peace\n"
	.string "& Purity$"
#endif

PalletTown_Text_RedsHouseSign:
#if GERMAN
	.string "Haus von Rot$"
#else
	.string "RED'S HOUSE$"
#endif

PalletTown_Text_OaksLabSign:
#if GERMAN
	.string "Prof. Eichs\n"
	.string "Pokémon-Labor$"
#else
	.string "OAK POKéMON\n"
	.string "RESEARCH LAB$"
#endif

PalletTown_Text_BluesHouseSign:
#if GERMAN
	.string "Haus von Blau$"
#else
	.string "BLUE'S HOUSE$"
#endif
