FuchsiaCity_House2_hns_MapScripts::
	.byte 0

FuchsiaCity_House2_EventScript_Granddaughter::
	goto_if_set FLAG_TEMP_1, FuchsiaCity_House2_EventScript_Granddaughter2
	msgbox FuchsiaCity_House2_Text_WardensGranddaughter1, MSGBOX_NPC
	setflag FLAG_TEMP_1
	end

FuchsiaCity_House2_EventScript_Granddaughter2::
	msgbox FuchsiaCity_House2_Text_WardensGranddaughter2, MSGBOX_NPC
	end

FuchsiaCity_House2_EventScript_Photo::
	msgbox FuchsiaCity_House2_Text_WardenPhoto, MSGBOX_NPC
	end

FuchsiaCity_House2_Text_WardensGranddaughter1:
#if GERMAN
	.string "Mein Opa ist der Leiter der Safari-Zone.\p"
	.string "Zumindest war er das…\p"
	.string "Er beschloss, Urlaub zu machen\n"
	.string "und reiste ganz allein ins Ausland.\p"
	.string "Er hörte einfach auf, die Safari-\n"
	.string "Zone zu leiten.$"
#else
	.string "My grandpa is the SAFARI ZONE\n"
	.string "WARDEN.\p"
	.string "At least he was…\p"
	.string "He decided to go on a vacation and\n"
	.string "took off overseas all by himself.\p"
	.string "He quit running SAFARI ZONE just\n"
	.string "like that.$"
#endif

FuchsiaCity_House2_Text_WardensGranddaughter2:
#if GERMAN
	.string "Viele Leute waren enttäuscht, dass die\n"
	.string "Safari-Zone schloss, aber Opa ist so\l"
	.string "stur…$"
#else
	.string "Many people were disappointed that\n"
	.string "SAFARI ZONE closed down, but Grandpa\l"
	.string "is so stubborn…$"
#endif

FuchsiaCity_House2_Text_WardenPhoto:
#if GERMAN
	.string "Das ist ein Foto von einem grinsenden\n"
	.string "alten Mann, umgeben von Pokémon.$"
#else
	.string "It's a photo of a grinning old man\n"
	.string "who's surrounded by POKéMON.$"
#endif

FuchsiaCity_House2_Text_SafariZonePhoto:
#if GERMAN
	.string "Das ist ein Foto von einer großen\n"
	.string "grünen Wiese, auf der seltene Pokémon\l"
	.string "herumtollen.$"
#else
	.string "It's a photo of a huge grassy plain\n"
	.string "with rare POKéMON frolicking in it.$"
#endif
