FortreeCity_House5_MapScripts::
	.byte 0

FortreeCity_House5_EventScript_PokefanF::
	msgbox FortreeCity_House5_Text_TreeHousesAreGreat, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_Man::
	msgbox FortreeCity_House5_Text_AdaptedToNature, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox FortreeCity_House5_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FortreeCity_House5_Text_TreeHousesAreGreat:
#if GERMAN
	.string "Die Baumhäuser von Baumhausen\n"
	.string "City sind fantastisch!\p"
	.string "Ich glaube, es ist der beste Platz, um\n"
	.string "mit seinen Pokémon zusammenzuleben.$"
#else
	.string "The tree houses of FORTREE are great!\p"
	.string "I think it's the number one town for\n"
	.string "living together with POKéMON.$"
#endif

FortreeCity_House5_Text_AdaptedToNature:
#if GERMAN
	.string "Pokémon und Menschen sind auf die\n"
	.string "Natur angewiesen, um zu überleben.\p"
	.string "Es gibt überhaupt keinen Grund, die\n"
	.string "Natur nach unserem Willen zu formen.$"
#else
	.string "POKéMON and people have adapted to\n"
	.string "nature for survival.\p"
	.string "There's no need to make nature\n"
	.string "conform to the way we want to live.$"
#endif

FortreeCity_House5_Text_Zigzagoon:
#if GERMAN
	.string "Zigzachs: Bufuu!$"
#else
	.string "ZIGZAGOON: Bufuu!$"
#endif

