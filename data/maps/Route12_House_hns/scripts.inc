Route12_House_hns_MapScripts::
	.byte 0

Route12_House_EventScript_SuperRod::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SUPER_ROD, Route12_House_EventScript_SuperRodGot
	msgbox Route12_House_Text_OfferSuperRod, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, Route12_House_EventScript_SuperRodRefused
	msgbox Route12_House_Text_GiveSuperRod, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_ROD
	msgbox Route12_House_Text_GaveSuperRod, MSGBOX_DEFAULT
	setflag FLAG_GOT_SUPER_ROD
	closemessage
	release
	end

Route12_House_EventScript_SuperRodRefused::
	msgbox Route12_House_Text_DontWantSuperRod, MSGBOX_DEFAULT
	closemessage
	release
	end

Route12_House_EventScript_SuperRodGot::
	msgbox Route12_House_Text_GaveSuperRod, MSGBOX_NPC
	release
	end

Route12_House_Text_OfferSuperRod:
#if GERMAN
	.string "Ich bin der jüngere Bruder\n"
	.string "des Angel-Gurus.\p"
	.string "Ich sehe, dass du gern angelst.\p"
	.string "Daran besteht kein Zweifel!\p"
	.string "Na? Hab ich recht?$"
#else
	.string "I'm the FISHING GURU's younger\n"
	.string "brother.\p"
	.string "I can see that you like fishing.\p"
	.string "There's no doubt in my mind at\n"
	.string "all!\p"
	.string "So? I know I'm right.$"
#endif

Route12_House_Text_GiveSuperRod:
#if GERMAN
	.string "Ja, ganz eindeutig! Du angelst gerne!\n"
	.string "Genau wie ich mir dachte!\p"
	.string "Hier, ein kleines Geschenk unter\n"
	.string "Anglern! Diese Angel ist der Wahnsinn!$"
#else
	.string "Yes, yes. Just as I thought!\p"
	.string "Here, fishing fan! Take this--\n"
	.string "it's a SUPER ROD.$"
#endif

Route12_House_Text_GaveSuperRod:
#if GERMAN
	.string "Damit kannst du an den verschiedensten\n"
	.string "Orten dem Angeln frönen!\p"
	.string "Wenn du verschiedene Ruten benutzt,\n"
	.string "beißen auch immer andere Pokémon an!$"
#else
	.string "Try your hand at fishing wherever\n"
	.string "there is water.\p"
	.string "Remember--you can catch different\n"
	.string "POKéMON using different RODS.$"
#endif

Route12_House_Text_DontWantSuperRod:
#if GERMAN
	.string "Echt jetzt? Sollte ich mich in meiner\n"
	.string "Einschätzung etwa getäuscht haben?$"
#else
	.string "Huh? My own eyes deceived me?$"
#endif

