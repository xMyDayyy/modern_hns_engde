LavenderTown_SoulHouse_hns_MapScripts::
	.byte 0

LavenderTownSoulHouse_EventScript_MrFuji::
	msgbox MrFuji_Text_Main, MSGBOX_NPC
	end
LavenderTownSoulHouse_EventScript_Lass::
	msgbox SoulHouse_Text_Lass, MSGBOX_NPC
	end
LavenderTownSoulHouse_EventScript_Teacher::
	msgbox SoulHouse_Text_Teacher, MSGBOX_NPC
	end
LavenderTownSoulHouse_EventScript_Granny::
	msgbox SoulHouse_Text_Granny, MSGBOX_NPC
	end

MrFuji_Text_Main:
#if GERMAN
	.string "Mr. Fuji: Willkommen.\p"
	.string "Hmm… Du scheinst deine Pokémon\n"
	.string "freundlich und liebevoll zu erziehen.\p"
	.string "Pokémon-Liebhaber kommen hierher,\n"
	.string "um den verstorbenen Pokémon Respekt\l"
	.string "zu zollen.\p"
	.string "Bitte erweise den Seelen der\n"
	.string "verstorbenen Pokémon dein Mitgefühl.\p"
	.string "Ich bin sicher, das macht sie\n"
	.string "glücklich.$"
#else
	.string "MR.FUJI: Welcome.\p"
	.string "Hmm… You appear to be raising\n"
	.string "your POKéMON in a kind and\l"
	.string "loving manner.\p"
	.string "POKéMON lovers come here to pay\n"
	.string "their respects to departed\l"
	.string "POKéMON.\p"
	.string "Please offer condolences for the\n"
	.string "souls of the departed POKéMON.\p"
	.string "I'm sure that will make them\n"
	.string "happy.$"
#endif

SoulHouse_Text_Teacher:
#if GERMAN
	.string "Ich glaube, hier liegen noch andere\n"
	.string "Pokémon begraben.\p"
	.string "Es gibt viele Kammern, die nur\n"
	.string "Mr. Fuji betreten darf.$"
#else
	.string "There are other graves of POKéMON\n"
	.string "here, I think.\p"
	.string "There are many chambers that only\n"
	.string "MR.FUJI may enter.$"
#endif

SoulHouse_Text_Lass:
#if GERMAN
	.string "Ich besuche mit\n"
	.string "meiner Mutter die Grabmale der\l"
	.string "Pokémon…$"
#else
	.string "I came with my mom to visit\n"
	.string "POKéMON graves…$"
#endif

SoulHouse_Text_Granny:
#if GERMAN
	.string "Ich habe so lange mit diesen Pokémon\n"
	.string "zusammengelebt, dass sie für mich\l"
	.string "denselben Stellenwert einnehmen\l"
	.string "wie meine Enkelkinder…$"
#else
	.string "The POKéMON that lived with me…\p"
	.string "I loved them like my\n"
	.string "grandchildren…$"
#endif
