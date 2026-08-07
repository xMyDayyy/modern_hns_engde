CeruleanCity_House3_hns_MapScripts::
	.byte 0

CeruleanCity_House3_EventScript_Granny::
	msgbox CeruleanHouse_Text_Granny, MSGBOX_NPC
	end
CeruleanCity_House3_EventScript_Gramps::
	msgbox CeruleanHouse_Text_Gramps, MSGBOX_NPC
	end

CeruleanCity_House3_EventScript_Kangaskhan::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
	msgbox CeruleanHouse_Text_Kangaskhan, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeruleanCity_House3_EventScript_Zubat::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZUBAT, CRY_MODE_NORMAL
	msgbox CeruleanHouse_Text_Zubat, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeruleanHouse_Text_Granny:
#if GERMAN
	.string "Mein Mann lebt glücklich\n"
	.string "mit den Pokémon,\l"
	.string "die er durch Tauschen bekommen hat.$"
#else
	.string "My husband lives happily with\n"
	.string "POKéMON he got through trades.$"
#endif

CeruleanHouse_Text_Gramps:
#if GERMAN
	.string "Ach, ich bin ja so glücklich…$"
#else
	.string "Ah… I'm so happy…$"
#endif

CeruleanHouse_Text_Kangaskhan:
#if GERMAN
	.string "Kangama: Kanga kanga!$"
#else
	.string "KANGASKHAN: Garu garuu.$"
#endif

CeruleanHouse_Text_Zubat:
#if GERMAN
	.string "Zubat: Zubat! Zubat!$"
#else
	.string "ZUBAT: Zuba zubaa.$"
#endif

