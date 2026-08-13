SSAnne_2F_Room5_Frlg_MapScripts::
	.byte 0

SSAnne_2F_Room5_EventScript_Gentleman::
	msgbox SSAnne_2F_Room5_Text_HaveYouGoneToSafariZone, MSGBOX_NPC
	end

SSAnne_2F_Room5_EventScript_LittleBoy::
	msgbox SSAnne_2F_Room5_Text_WeThinkSafariZoneIsAwesome, MSGBOX_NPC
	end

SSAnne_2F_Room5_Text_HaveYouGoneToSafariZone::
#if GERMAN
	.string "Hast du die Safari-Zone in Fuchsania\n"
	.string "City schon besucht?\p"
	.string "Es gibt dort sehr seltene Pokémon!$"
#else
	.string "Have you gone to the SAFARI ZONE\n"
	.string "in FUCHSIA CITY?\p"
	.string "There are many kinds of rare\n"
	.string "POKéMON.$"
#endif

SSAnne_2F_Room5_Text_WeThinkSafariZoneIsAwesome::
#if GERMAN
	.string "Mein Papa war mit mir in der\n"
	.string "Safari-Zone! Es war aufregend!$"
#else
	.string "Me and my daddy think the SAFARI\n"
	.string "ZONE is awesome!\l"
	.string "I wish we could go there again.$"
#endif

