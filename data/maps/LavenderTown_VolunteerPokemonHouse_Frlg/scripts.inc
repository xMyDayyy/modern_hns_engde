LavenderTown_VolunteerPokemonHouse_Frlg_MapScripts::
	.byte 0

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POKE_FLUTE, LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute
	msgbox LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis
	checkitemspace ITEM_POKE_FLUTE
	goto_if_eq VAR_RESULT, FALSE, LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute
	setflag FLAG_GOT_POKE_FLUTE
	giveitem_msg LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji, ITEM_POKE_FLUTE, 1, MUS_RG_OBTAIN_KEY_ITEM
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
	lock
	faceplayer
	famechecker FAMECHECKER_MRFUJI, 0
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
	waitmoncry
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
	waitmoncry
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
	lockall
	famechecker FAMECHECKER_MRFUJI, 2
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
	releaseall
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
	end

LavenderTown_PokemonCenter_1F_Text_HearMrFujiNotFromAroundHere::
#if GERMAN
	.string "Ich bin erst vor kurzem in diese\n"
	.string "Stadt gezogen!\p"
	.string "Ich hörte, dass Mr. Fuji auch nicht von\n"
	.string "hier stammt!$"
#else
	.string "I recently moved to this town.\p"
	.string "I hear that MR. FUJI's not from\n"
	.string "these parts originally, either.$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo::
#if GERMAN
	.string "Mr. Fuji ist nicht zu Hause.\n"
	.string "Wohin mag er gegangen sein?$"
#else
	.string "That's odd, MR. FUJI isn't here.\n"
	.string "Where'd he go?$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother::
#if GERMAN
	.string "Mr. Fuji hat oft für Tragossos\n"
	.string "Mutter gebetet.$"
#else
	.string "MR. FUJI had been praying alone\n"
	.string "for CUBONE's mother.$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons::
#if GERMAN
	.string "Das hier ist Mr. Fujis Haus.\p"
	.string "Er ist sehr fürsorglich!\p"
	.string "Er kümmert sich um ausgesetzte\n"
	.string "und verwaiste Pokémon!$"
#else
	.string "This is really MR. FUJI's house.\p"
	.string "He's really kind.\p"
	.string "He looks after abandoned and\n"
	.string "orphaned POKéMON.$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug::
#if GERMAN
	.string "Sie sind so putzig! Pokémon sind\n"
	.string "wunderbare Schmusetiere!$"
#else
	.string "It's so warm!\n"
	.string "POKéMON are so nice to hug.$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_Nidorino::
#if GERMAN
	.string "Nidorino: Nido!$"
#else
	.string "NIDORINO: Gaoo!$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_Psyduck::
#if GERMAN
	.string "Enton: Quacka!$"
#else
	.string "PSYDUCK: Gwappa!$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis::
#if GERMAN
	.string "Mr. Fuji: {PLAYER}!\p"
	.string "Du kannst deinen Pokédex nicht\n"
	.string "vollenden, wenn du deinen Pokémon nicht\l"
	.string "genügend Liebe und Respekt\l"
	.string "entgegenbringst.\p"
	.string "Dies wird dir bei deinem Abenteuer\n"
	.string "helfen.$"
#else
	.string "MR. FUJI: {PLAYER}…\p"
	.string "Your POKéDEX quest is one that\n"
	.string "requires strong dedication.\p"
	.string "Without deep love for POKéMON,\n"
	.string "your quest may fail.\p"
	.string "I'm not sure if this will help you,\n"
	.string "but I'd like you to have it.$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji::
#if GERMAN
	.string "{PLAYER} erhält eine Pokéflöte!$"
#else
	.string "{PLAYER} received a POKé FLUTE\n"
	.string "from MR. FUJI.$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute::
#if GERMAN
	.string "Schlafende Pokémon wachen auf, wenn\n"
	.string "sie das Spiel der Pokéflöte hören!\p"
	.string "Du kannst damit alle schlafenden\n"
	.string "Pokémon wecken!$"
#else
	.string "Upon hearing the POKé FLUTE,\n"
	.string "sleeping POKéMON will spring awake.\p"
	.string "Try using it on POKéMON that are\n"
	.string "sleeping obstacles.$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis::
#if GERMAN
	.string "Du hast keinen Platz für weitere\n"
	.string "Items!$"
#else
	.string "You must make room for this!$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou::
#if GERMAN
	.string "Mr. Fuji: War die Flöte schon von\n"
	.string "Nutzen für dich?$"
#else
	.string "MR. FUJI: Has my POKé FLUTE\n"
	.string "helped you?$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped::
#if GERMAN
	.string "Grosses Pokémon-Gewinnspiel!\p"
	.string "Es sind keine Teilnahmekarten mehr\n"
	.string "vorhanden!\p"
	.string "Sie wurden alle abgeschickt!$"
#else
	.string "POKéMON FAN MAGAZINE\n"
	.string "Monthly Grand Prize Drawing!\p"
	.string "The application form is…\p"
	.string "Gone! It's been clipped out.\n"
	.string "Someone must have applied already.$"
#endif

LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf::
#if GERMAN
	.string "Pokémon-Zeitschriften!\p"
	.string "Pokémon-Notizbücher!\p"
	.string "Pokémon-Schaubilder!$"
#else
	.string "POKéMON magazines line the shelf.\p"
	.string "POKéMON INSIDER…\p"
	.string "POKéMON FAN…$"
#endif

