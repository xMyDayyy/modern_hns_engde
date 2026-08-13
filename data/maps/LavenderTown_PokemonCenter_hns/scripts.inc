LavenderTown_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_PokemonCenter_OnTransition
	.byte 0

LavenderTown_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_LAVENDER_TOWN_HNS
	end

LavenderTown_PokemonCenter_EventScript_Gent::
	msgbox LavenderTown_PokemonCenter1F_Text_Gentleman, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_EventScript_Teacher::
	msgbox LavenderTown_PokemonCenter1F_Text_Teacher, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_EventScript_Youngster::
	goto_if_set FLAG_RETURNED_MACHINE_PART, LavenderTown_PokemonCenter_EventScript_YoungsterReturnedMachinePart
	msgbox LavenderTown_PokemonCenter1F_Text_Youngster, MSGBOX_NPC
	end

LavenderTown_PokemonCenter_EventScript_YoungsterReturnedMachinePart::
	msgbox LavenderTown_PokemonCenter1F_Text_Youngster_ReturnedMachinePart, MSGBOX_NPC
	end

LavenderTown_PokemonCenter1F_Text_Gentleman:
#if GERMAN
	.string "Wenn du den Felstunnel im Norden von\n"
	.string "Lavandia durchquerst, gelangst du zum\l"
	.string "Kraftwerk.$"
#else
	.string "To the north of LAVENDER is ROCK\n"
	.string "TUNNEL. Go through it to get to\l"
	.string "the POWER PLANT.$"
#endif

LavenderTown_PokemonCenter1F_Text_Teacher:
#if GERMAN
	.string "Es gibt eine Musiksendung im Radio, die\n"
	.string "Melodien auf der Pokéflöte sendet.\p"
	.string "Ach ja? Ah, dein Radio braucht ein\n"
	.string "Zusatzset, damit du das empfangen\l"
	.string "kannst.\p"
	.string "Vielleicht kann dir der Radioturm\n"
	.string "hier in der Stadt eines besorgen?$"
#else
	.string "There's a radio program that plays\n"
	.string "POKé FLUTE music.\p"
	.string "Oh? Ah, your radio needs a RADIO\n"
	.string "UPGRADE to tune into it.\p"
	.string "Maybe the RADIO STATION here\n"
	.string "in town can provide you one?$"
#endif

LavenderTown_PokemonCenter1F_Text_Youngster:
#if GERMAN
	.string "Wenn das Kraftwerk ausfällt, läuft\n"
	.string "auch der Magnetzug nicht mehr.\p"
	.string "Die Radiosender können dann auch\n"
	.string "nicht mehr auf Sendung gehen.$"
#else
	.string "If the POWER PLANT isn't running,\n"
	.string "the MAGNET TRAIN won't run either…\p"
	.string "It also means the RADIO STATION\n"
	.string "can't broadcast…$"
#endif

LavenderTown_PokemonCenter1F_Text_Youngster_ReturnedMachinePart:
#if GERMAN
	.string "Der Intendant des Radiosenders war\n"
	.string "hocherfreut. Er sagte, sie seien wieder\l"
	.string "auf Sendung, weil das Kraftwerk wieder\l"
	.string "einwandfrei arbeite.$"
#else
	.string "The DIRECTOR of the RADIO STATION\n"
	.string "sure was happy.\p"
	.string "He said they're back on the air\n"
	.string "because the POWER PLANT is running\l"
	.string "smoothly again.$"
#endif
