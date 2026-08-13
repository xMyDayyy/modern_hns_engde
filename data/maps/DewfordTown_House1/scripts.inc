DewfordTown_House1_MapScripts::
	.byte 0

DewfordTown_House1_EventScript_Man::
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Woman::
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
#if GERMAN
	.string "Über das harmonische Leben mit den\n"
	.string "Pokémon und der Familie auf diesem\l"
	.string "kleinen Eiland ließe sich viel erzählen.$"
#else
	.string "There's a lot to be said for living on\n"
	.string "a small island like this in harmony with\l"
	.string "POKéMON and the family.$"
#endif

DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
#if GERMAN
	.string "Bevor ich meinen Mann geheiratet habe,\n"
	.string "lebte ich in der großen Hafenstadt\l"
	.string "Graphitport City.\p"
	.string "Hier auf der Insel verläuft das Leben\n"
	.string "geruhsamer. Vom wunderbaren Meer\l"
	.string "umgeben - das ist die pure\l"
	.string "Glückseligkeit!$"
#else
	.string "I left the major port of SLATEPORT\n"
	.string "CITY when I married my husband here.\p"
	.string "Life goes by slowly on this little\n"
	.string "island. But being surrounded by the\l"
	.string "beautiful sea--that's happiness, too.$"
#endif

DewfordTown_House1_Text_Zigzagoon:
#if GERMAN
	.string "Zigzachs: Guguuh!$"
#else
	.string "ZIGZAGOON: Guguuh!$"
#endif

