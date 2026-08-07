ViridianCity_House1_hns_MapScripts::
	.byte 0

ViridianCity_House1_EventScript_Pokefan::
	msgbox ViridianCity_House1_Text_PokefanM, MSGBOX_NPC
	end

ViridianCity_House1_EventScript_Lass::
	msgbox ViridianCity_House1_Text_Lass, MSGBOX_NPC
	end


ViridianCity_House1_EventScript_Speary::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
	msgbox ViridianCity_House1_Text_Speary, MSGBOX_DEFAULT
	waitmoncry
	release
	end

ViridianCity_House1_EventScript_Rattey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_RATTATA, CRY_MODE_NORMAL
	msgbox ViridianCity_House1_Text_Rattey, MSGBOX_DEFAULT
	waitmoncry
	release
	end

ViridianCity_House1_Text_PokefanM:
#if GERMAN
	.string "Denkst du dir denn auch immer gute\n"
	.string "Spitznamen für deine Pokémon aus?\p"
	.string "Das Tauschen von Pokémon macht\n"
	.string "mehr Spaß, wenn sie alle interessante\l"
	.string "Spitznamen haben!$"
#else
	.string "Do you put a lot of thought into\n"
	.string "naming your POKéMON?\p"
	.string "Giving them good nicknames adds to\n"
	.string "the fun of trading with others.$"
#endif

ViridianCity_House1_Text_Lass:
#if GERMAN
	.string "Das hier sind Habbi, ein Habitak,\n"
	.string "und Fratzi, ein Rattfratz!$"
#else
	.string "They're SPEARY--a SPEAROW--and\n"
	.string "RATTEY--a RATTATA.$"
#endif

ViridianCity_House1_Text_Speary:
#if GERMAN
	.string "Habbi: Habi, tak!$"
#else
	.string "SPEARY: Ch-chun!$"
#endif

ViridianCity_House1_Text_Rattey:
#if GERMAN
	.string "Fratzi: Rattattatt!$"
#else
	.string "RATTEY: Kikiii!$"
#endif

