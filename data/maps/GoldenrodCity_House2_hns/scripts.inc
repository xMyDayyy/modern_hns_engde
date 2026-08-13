GoldenrodCity_House2_hns_MapScripts::
	.byte 0

GoldenrodCity_House2_EventScript_Man::
	faceplayer
	lock
	msgbox GoldenrodPPSpeechHouse_Text_Man, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_House2_EventScript_Woman::
	faceplayer
	lock
	msgbox GoldenrodPPSpeechHouse_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodPPSpeechHouse_Text_Man:
#if GERMAN
	.string "Einmal im Kampf konnte mein Pokémon\n"
	.string "keinen Zug ausführen.\p"
	.string "Die Power Points, oder AP, aller\n"
	.string "Attacken waren aufgebraucht.$"
#else
    .string "Once while I was battling, my\n"
    .string "POKéMON couldn't make any moves.\p"
    .string "The POWER POINTS, or PP, of its\n"
    .string "moves were all gone.$"
#endif

GoldenrodPPSpeechHouse_Text_Lass:
#if GERMAN
	.string "Manchmal kann auch ein gesundes\n"
	.string "Pokémon nicht mehr angreifen!\p"
	.string "In diesem Fall solltest du es in einem\n"
	.string "Pokémon-Center oder mithilfe eines\l"
	.string "Items wieder heilen!$"
#else
    .string "Sometimes, a healthy POKéMON may be\n"
    .string "unable to use its moves.\p"
    .string "If that happens, heal it at a\n"
    .string "POKéMON CENTER or use an item.$"
#endif
