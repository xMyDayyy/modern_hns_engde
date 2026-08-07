SSAnne_2F_Room3_Frlg_MapScripts::
	.byte 0

SSAnne_2F_Room3_EventScript_Gentleman::
	msgbox SSAnne_2F_Room3_Text_SeenMonsFerryPeople, MSGBOX_NPC
	end

SSAnne_2F_Room3_EventScript_OldMan::
	msgbox SSAnne_2F_Room3_Text_SomeTreesCanBeCutDown, MSGBOX_NPC
	end

SSAnne_2F_Room3_Text_SeenMonsFerryPeople::
#if GERMAN
	.string "Ich habe schon Leute auf Pokémon\n"
	.string "übers Wasser gleiten sehen!$"
#else
	.string "Ah, yes, I have seen some POKéMON\n"
	.string "ferry people across the water!$"
#endif

SSAnne_2F_Room3_Text_SomeTreesCanBeCutDown::
#if GERMAN
	.string "Pokémon können Büsche mit dem\n"
	.string "Zerschneider klein hacken.\p"
	.string "Aber vergiss nicht, Zerschneider\n"
	.string "ist eine VM!\p"
	.string "Wer sie einmal gelernt hat, kann\n"
	.string "sie nicht so einfach vergessen!$"
#else
	.string "Small trees can be chopped down\n"
	.string "using the move CUT.\p"
	.string "But remember this!\n"
	.string "CUT is an HM technique.\p"
	.string "Once learned, it is not so easily\n"
	.string "discarded.$"
#endif

