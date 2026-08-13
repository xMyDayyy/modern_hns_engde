LavenderTown_House1_hns_MapScripts::
	.byte 0

LavenderTown_House1_EventScript_Girl::
	msgbox LavenderTown_House1_Text_Girl, MSGBOX_NPC
	end

LavenderTown_House1_EventScript_Guy::
	msgbox LavenderTown_House1_Text_Guy, MSGBOX_NPC
	end

LavenderTown_House1_EventScript_Marowak::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MAROWAK, CRY_MODE_NORMAL
	msgbox LavenderTown_House1_Text_Marowak, MSGBOX_DEFAULT
	waitmoncry
	msgbox LavenderTown_House1_Text_Marowak2, MSGBOX_DEFAULT
	closemessage
	release
	end

LavenderTown_House1_Text_Girl:
#if GERMAN
	.string "Es gibt da draußen schreckliche Leute,\n"
	.string "die ihre Pokémon links liegen lassen,\l"
	.string "wenn sie genug von ihnen haben.\p"
	.string "Mr. Fuji bietet diesen armen,\n"
	.string "heimatlosen Pokémon ein Zuhause.$"
#else
	.string "Can you believe it?\p"
	.string "Some people get bored with taking\n"
	.string "care of POKéMON.\p"
	.string "GRANPDA takes in such poor homeless\n"
	.string "POKéMON and takes care of them.$"
#endif
LavenderTown_House1_Text_Guy:
	.string "Ja, das hier ist das Haus von Mr. Fuji…\n"
	.string "Aber im Moment ist er leider nicht hier.\p"
	.string "Du suchst am besten mal im\n"
	.string "Haus der Erinnerungen nach ihm!$"
LavenderTown_House1_Text_Marowak:
	.string ".............................$"

LavenderTown_House1_Text_Marowak2:
#if GERMAN
	.string "Das Knogga ist ruhig, scheint aber\n"
	.string "recht glücklich.$"
#else
	.string "The MAROWAK is quiet, though it\n"
	.string "appears quite happy.$"
#endif

