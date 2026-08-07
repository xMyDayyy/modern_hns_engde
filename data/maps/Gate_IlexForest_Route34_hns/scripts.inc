Gate_IlexForest_Route34_hns_MapScripts::
	.byte 0

Route34IlexForestGate_EventScript_Lass::
	lock
	faceplayer
	msgbox Route34IlexForestGate_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

Route34IlexForestGate_EventScript_Butterfree::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BUTTERFREE, CRY_MODE_NORMAL
	msgbox Route34IlexForestGate_Text_Butterfree, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route34IlexForestGate_Text_Lass:
#if GERMAN
	.string "Hast du den Schrein im Wald gesehen,\n"
	.string "wo man dem Schutzpatron huldigt?\p"
	.string "Gestern, heute, morgen - der Patron\n"
	.string "wacht zu jeder Zeit über den Wald.\l"
	.string "Er ist bestimmt ein Pflanzen-Pokémon!$"
#else
	.string "Did you see the shrine honoring\n"
	.string "the protector?\p"
	.string "It watches over the FOREST from\n"
	.string "across time.\p"
	.string "I think that it must be a\n"
	.string "GRASS-type POKéMON.$"
#endif

Route34IlexForestGate_Text_Butterfree:
#if GERMAN
	.string "Smettbo: Smett, Smettbooo!$"
#else
	.string "BUTTERFREE: Freeh!$"
#endif
