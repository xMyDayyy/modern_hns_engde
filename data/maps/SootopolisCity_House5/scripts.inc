SootopolisCity_House5_MapScripts::
	.byte 0

SootopolisCity_House5_EventScript_Maniac::
	msgbox SootopolisCity_House5_Text_SootopolisMtPyreConnection, MSGBOX_NPC
	end

SootopolisCity_House5_EventScript_Girl::
	msgbox SootopolisCity_House5_Text_BrotherUsedToStudySea, MSGBOX_NPC
	end

SootopolisCity_House5_Text_SootopolisMtPyreConnection:
#if GERMAN
	.string "Es muss eine Verbindung zwischen\n"
	.string "Xeneroville und dem Pyroberg geben.\p"
	.string "Meine Freunde und ich haben ein\n"
	.string "bisschen nachgeforscht - im Labor, in\l"
	.string "dem wir gearbeitet haben.$"
#else
	.string "There appears to be some connection\n"
	.string "between SOOTOPOLIS and MT. PYRE.\p"
	.string "My friends and I did some research on\n"
	.string "it at the lab where I used to work.$"
#endif

SootopolisCity_House5_Text_BrotherUsedToStudySea:
#if GERMAN
	.string "Mein großer Bruder studiert das Meer.$"
#else
	.string "My big brother used to study the sea.$"
#endif

