FiveIsland_House2_Frlg_MapScripts::
	.byte 0

FiveIsland_House2_EventScript_OldMan::
	msgbox FiveIsland_House2_Text_MeadowBelongedToFamily, MSGBOX_NPC
	end

FiveIsland_House2_Text_MeadowBelongedToFamily::
#if GERMAN
	.string "Diese Weide ist seit Generationen\n"
	.string "in unserem Familienbesitz.\p"
	.string "Ich sollte darauf eine Villa bauen.\p"
	.string "Das wäre besser, als sie an diese\n"
	.string "Rowdies zu verschwenden!$"
#else
	.string "That MEADOW has belonged to our\n"
	.string "family for generations.\p"
	.string "I should have had a giant mansion\n"
	.string "built on it.\p"
	.string "It would be preferable to having\n"
	.string "those thugs run wild on it!$"
#endif

