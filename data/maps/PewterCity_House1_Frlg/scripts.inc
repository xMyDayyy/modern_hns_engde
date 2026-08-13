PewterCity_House1_Frlg_MapScripts::
	.byte 0

PewterCity_House1_EventScript_BaldingMan::
	msgbox PewterCity_House1_Text_TradeMonsAreFinicky, MSGBOX_NPC
	end

PewterCity_House1_EventScript_LittleBoy::
	lock
	msgbox PewterCity_House1_Text_NidoranSit
	call PewterCity_House1_EventScript_DoNidoranCry
	release
	end

PewterCity_House1_EventScript_Nidoran::
	lock
	faceplayer
	call PewterCity_House1_EventScript_DoNidoranCry
	applymovement LOCALID_PEWTER_HOUSE_NIDORAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PewterCity_House1_EventScript_DoNidoranCry::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	waitse
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
	msgbox PewterCity_House1_Text_Nidoran
	waitmoncry
	call EventScript_RestorePrevTextColor
	return

PewterCity_House1_Text_Nidoran::
#if GERMAN
	.string "Nidoran♂: Nidoran!$"
#else
	.string "NIDORAN♂: Bowbow!$"
#endif

PewterCity_House1_Text_NidoranSit::
#if GERMAN
	.string "Nidoran, sitz!$"
#else
	.string "NIDORAN, sit!$"
#endif

PewterCity_House1_Text_TradeMonsAreFinicky::
#if GERMAN
	.string "Unser Pokémon ist ein Außenseiter,\n"
	.string "deshalb ist es schwer zu erziehen!\p"
	.string "Ein Außenseiter ist ein Pokémon,\n"
	.string "das man in einem Tausch erhält.\p"
	.string "Es entwickelt sich rasch, doch im Kampf\n"
	.string "kann es vorkommen, dass es\l"
	.string "unerfahrenen Trainern nicht gehorcht!\p"
	.string "We$"
#else
	.string "Our POKéMON's an outsider, so it's\n"
	.string "finicky and hard to handle.\p"
	.string "An outsider is a POKéMON that you\n"
	.string "get in a trade.\p"
	.string "It grows fast, but it may ignore an\n"
	.string "unskilled TRAINER in battle.\p"
	.string "If only we had some BADGES…$"
#endif

