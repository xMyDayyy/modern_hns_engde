SSAnne_1F_Corridor_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Corridor_EventScript_WorkerM::
	msgbox SSAnne_1F_Corridor_Text_LeStrongSilentType, MSGBOX_NPC
	end

SSAnne_1F_Corridor_EventScript_Sailor::
	msgbox SSAnne_1F_Corridor_Text_PassengersAreRestless, MSGBOX_NPC
	end

SSAnne_1F_Corridor_Text_LeStrongSilentType::
#if GERMAN
	.string "Moin, moin, du Landradde!\n"
	.string "Ich bin der Steward auf diesem\l"
	.string "Kahn!\p"
	.string "Ruf mich einfach, wenn du einen\n"
	.string "Wunsch hast!\p"
	.string "Verdammich, gesprächig bist du\n"
	.string "aber nicht!$"
#else
	.string "Bonjour!\n"
	.string "I am le waiter on this ship!\p"
	.string "I will be happy to serve you\n"
	.string "anything you please!\p"
	.string "… … …\n"
	.string "Ah! Le strong silent type!$"
#endif

SSAnne_1F_Corridor_Text_PassengersAreRestless::
#if GERMAN
	.string "Viele Passagiere sind hyperaktiv!\p"
	.string "Sie langweilen sich und sehnen sich\n"
	.string "nach einem Kampf!$"
#else
	.string "The passengers are restless from\n"
	.string "this long voyage.\p"
	.string "You might be challenged by the\n"
	.string "more bored ones!$"
#endif

