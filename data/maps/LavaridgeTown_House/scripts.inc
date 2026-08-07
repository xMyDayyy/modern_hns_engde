LavaridgeTown_House_MapScripts::
	.byte 0

LavaridgeTown_House_EventScript_OldMan::
	msgbox LavaridgeTown_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
	end

LavaridgeTown_House_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox LavaridgeTown_House_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LavaridgeTown_House_Text_WifeWarmingEggInHotSprings:
#if GERMAN
	.string "Meine Frau wärmt ein Ei in den Heißen\n"
	.string "Quellen. So hat sie es mir jedenfalls\l"
	.string "gesagt.\p"
	.string "Sie hat zwei Pokémon in der Pension\n"
	.string "abgegeben und heraus kam ein Ei…$"
#else
	.string "My wife's warming an EGG in the hot\n"
	.string "springs. This is what she told me.\p"
	.string "She left two POKéMON with the DAY CARE.\n"
	.string "And they discovered that EGG!$"
#endif

LavaridgeTown_House_Text_Zigzagoon:
#if GERMAN
	.string "Zigzachs: Pshoo!$"
#else
	.string "ZIGZAGOON: Pshoo!$"
#endif

