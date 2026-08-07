CeruleanCity_House2_hns_MapScripts::
	.byte 0

CeruleanCity_House2_EventScript_Woman::
	msgbox CeruleanPolice_Text_PokefanF, MSGBOX_NPC
	end

CeruleanCity_House2_EventScript_Man::
	msgbox CeruleanPolice_Text_FishingGuru, MSGBOX_NPC
	end

CeruleanCity_House2_EventScript_Diglett::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DIGLETT, CRY_MODE_NORMAL
	msgbox CeruleanPolice_Text_Diglett, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeruleanPolice_Text_FishingGuru:
#if GERMAN
	.string "Angeblich soll sich hier irgendeine\n"
	.string "zwielichtige Gestalt herumtreiben…\p"
	.string "Wenn sie sich als Dieb entpuppen sollte,\n"
	.string "lasse ich keine Gnade walten!$"
#else
	.string "I heard that some shady character\n"
	.string "is skulking about.\p"
	.string "I won't stand for it if he turns out\n"
	.string "to be a thief.$"
#endif

CeruleanPolice_Text_PokefanF:
#if GERMAN
	.string "Bei mir ist vor langer Zeit mal\n"
	.string "ein Dieb eingestiegen, weißt du?$"
#else
	.string "We were held up by robbers before.$"
#endif

CeruleanPolice_Text_Diglett:
#if GERMAN
	.string "Digda: Dig da!$"
#else
	.string "DIGLETT: Dug dug.$"
#endif
