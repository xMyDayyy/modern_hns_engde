FuchsiaCity_SafariZone_Office_Frlg_MapScripts::
	.byte 0

FuchsiaCity_SafariZone_Office_EventScript_Worker1::
	msgbox FuchsiaCity_SafariZone_Office_Text_NicknamedWardenSlowpoke, MSGBOX_NPC
	end

FuchsiaCity_SafariZone_Office_EventScript_Worker2::
	msgbox FuchsiaCity_SafariZone_Office_Text_WardenIsVeryKnowledgeable, MSGBOX_NPC
	end

FuchsiaCity_SafariZone_Office_EventScript_Worker3::
	msgbox FuchsiaCity_SafariZone_Office_Text_CouldntUnderstandWarden, MSGBOX_NPC
	end

FuchsiaCity_SafariZone_Office_EventScript_Worker4::
	msgbox FuchsiaCity_SafariZone_Office_Text_PrizeInSafariZone, MSGBOX_NPC
	end

FuchsiaCity_SafariZone_Office_Text_NicknamedWardenSlowpoke::
#if GERMAN
	.string "Der Wärter trägt den Spitznamen\n"
	.string "Flegmon.\p"
	.string "Er und Flegmon ähneln sich sehr!$"
#else
	.string "We nicknamed the WARDEN\n"
	.string "“SLOWPOKE.”\p"
	.string "You know, he has that vacant look\n"
	.string "like a SLOWPOKE.$"
#endif

FuchsiaCity_SafariZone_Office_Text_WardenIsVeryKnowledgeable::
#if GERMAN
	.string "Flegmon weiß eine Menge über\n"
	.string "Pokémon!\p"
	.string "Er besitzt sogar einige Fossilien\n"
	.string "ausgestorbener Urzeit-Pokémon!$"
#else
	.string "WARDEN SLOWPOKE is very\n"
	.string "knowledgeable about POKéMON.\p"
	.string "He even has some fossils of rare,\n"
	.string "extinct POKéMON.$"
#endif

FuchsiaCity_SafariZone_Office_Text_CouldntUnderstandWarden::
#if GERMAN
	.string "Flegmon war hier, aber ich habe\n"
	.string "ihn nicht verstehen können!\p"
	.string "Ich glaube, er hat keine Zähne\n"
	.string "mehr!$"
#else
	.string "WARDEN SLOWPOKE came in, but\n"
	.string "I couldn't understand him.\p"
	.string "I think he's got a speech problem!$"
#endif

FuchsiaCity_SafariZone_Office_Text_PrizeInSafariZone::
#if GERMAN
	.string "Flegmon hält zur Zeit eine\n"
	.string "Werbekampagne.\p"
	.string "Erreiche die abgelegenste\n"
	.string "Stelle in der {COLOR RED}Safari-Zone{COLOR DARK_GRAY}.\p"
	.string "Wenn du das schaffst, erhältst\n"
	.string "du einen praktischen Preis!$"
#else
	.string "WARDEN SLOWPOKE is running a\n"
	.string "promotion campaign right now.\p"
	.string "Try to get to the farthest corner\n"
	.string "of the SAFARI ZONE.\p"
	.string "If you can make it, you'll win a\n"
	.string "very convenient prize.$"
#endif

