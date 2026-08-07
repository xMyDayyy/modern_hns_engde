SSAnne_3F_Corridor_Frlg_MapScripts::
	.byte 0

SSAnne_3F_Corridor_EventScript_Sailor::
	msgbox SSAnne_3F_Corridor_Text_CaptainTeachesCutToMons, MSGBOX_NPC
	end

SSAnne_3F_Corridor_Text_CaptainTeachesCutToMons::
#if GERMAN
	.string "Der Kapitän ist ein Meister des\n"
	.string "Schwertkampfes!\p"
	.string "Er unterrichtet sogar Pokémon im\n"
	.string "Umgang mit dem Zerschneider!$"
#else
	.string "Our CAPTAIN is a sword master.\n"
	.string "He's awesome at using CUT.\p"
	.string "They say he even teaches CUT\n"
	.string "to POKéMON!$"
#endif

