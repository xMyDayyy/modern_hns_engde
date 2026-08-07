SlateportCity_House_MapScripts::
	.byte 0

SlateportCity_House_EventScript_PokefanM::
	msgbox SlateportCity_House_Text_NatureToDoWithStatGains, MSGBOX_NPC
	end

SlateportCity_House_EventScript_Girl::
	msgbox SlateportCity_House_Text_MustBeGoingToBattleTent, MSGBOX_NPC
	end

SlateportCity_House_Text_NatureToDoWithStatGains:
#if GERMAN
	.string "Mein Pokémon hat ein Hastiges Wesen.\p"
	.string "Seine Initiative ist im Vergleich\n"
	.string "zu meinen anderen Pokémon höher.\p"
	.string "Vielleicht hat ihr Wesen etwas mit den\n"
	.string "Statusvorteilen der Pokémon zu tun.$"
#else
	.string "My POKéMON has a HASTY nature.\p"
	.string "It has higher SPEED compared to\n"
	.string "my other POKéMON.\p"
	.string "Maybe their nature has something to\n"
	.string "do with the stat gains of POKéMON.$"
#endif

SlateportCity_House_Text_MustBeGoingToBattleTent:
#if GERMAN
	.string "Du bist doch ein Trainer, oder?\p"
	.string "Da du schon mal in Graphitport City\n"
	.string "bist, besuch unbedingt das Kampfcamp!$"
#else
	.string "You're a TRAINER, aren't you?\p"
	.string "Since you came to SLATEPORT CITY,\n"
	.string "you must be going to the BATTLE TENT.$"
#endif

