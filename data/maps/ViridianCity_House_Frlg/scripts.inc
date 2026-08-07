ViridianCity_House_Frlg_MapScripts::
	.byte 0

ViridianCity_House_EventScript_BaldingMan::
	msgbox ViridianCity_House_Text_NicknamingIsFun, MSGBOX_NPC
	end

ViridianCity_House_EventScript_LittleGirl::
	msgbox ViridianCity_House_Text_MyDaddyLovesMonsToo, MSGBOX_NPC
	end

ViridianCity_House_EventScript_Speary::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
	msgbox ViridianCity_House_Text_Speary
	waitmoncry
	release
	end

ViridianCity_House_EventScript_NicknameSign::
	msgbox ViridianCity_House_Text_SpearowNameSpeary, MSGBOX_SIGN
	end

ViridianCity_House_Text_NicknamingIsFun::
#if GERMAN
	.string "Es macht Spaß, sich Spitznamen\n"
	.string "auszudenken. Aber es erfordert viel\l"
	.string "Einfallsreichtum!\p"
	.string "Einfache Namen kann man sich\n"
	.string "leichter merken!$"
#else
	.string "Coming up with nicknames is fun,\n"
	.string "but it's not so easy to do.\p"
	.string "Clever names are nice, but simple\n"
	.string "names are easier to remember.$"
#endif

ViridianCity_House_Text_MyDaddyLovesMonsToo::
#if GERMAN
	.string "Mein Papa mag Pokémon auch sehr\n"
	.string "gerne!$"
#else
	.string "My daddy loves POKéMON, too.$"
#endif

ViridianCity_House_Text_Speary::
#if GERMAN
	.string "Willi: Habi! Habitak!$"
#else
	.string "SPEARY: Tetweet!$"
#endif

ViridianCity_House_Text_SpearowNameSpeary::
#if GERMAN
	.string "Habitak\n"
	.string "Spitzname: Willi$"
#else
	.string "SPEAROW\n"
	.string "Name: SPEARY$"
#endif

