PewterCity_House2_Frlg_MapScripts::
	.byte 0

PewterCity_House2_EventScript_OldMan::
	msgbox PewterCity_House2_Text_MonsLearnTechniquesAsTheyGrow, MSGBOX_NPC
	end

PewterCity_House2_EventScript_LittleBoy::
	msgbox PewterCity_House2_Text_MonsEasierCatchIfStatused, MSGBOX_NPC
	end

PewterCity_House2_Text_MonsLearnTechniquesAsTheyGrow::
#if GERMAN
	.string "Mit wachsender Erfahrung lernen\n"
	.string "Pokémon neue Attacken!\p"
	.string "Manche Attacken kann ihnen jedoch\n"
	.string "nur ein Trainer beibringen!$"
#else
	.string "POKéMON learn new techniques as\n"
	.string "they grow.\p"
	.string "But some moves must be taught to\n"
	.string "them by people.$"
#endif

PewterCity_House2_Text_MonsEasierCatchIfStatused::
#if GERMAN
	.string "Pokémon sind einfacher zu fangen,\n"
	.string "wenn sie verletzt sind oder\l"
	.string "schlafen!\p"
	.string "Trotzdem gibt es keine\n"
	.string "Erfolgsgarantie!$"
#else
	.string "A POKéMON becomes easier to \n"
	.string "catch if it has a status problem.\p"
	.string "Sleep, poison, burn, or paralysis…\n"
	.string "Those are all effective.\p"
	.string "But catching POKéMON is never\n"
	.string "a sure thing!$"
#endif

