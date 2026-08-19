FuchsiaCity_Route15_Gate_hns_MapScripts::
	.byte 0

Route15_EventScript_Officer::
	msgbox Route15FuchsiaGate_Text_Officer, MSGBOX_NPC
	end

Route15FuchsiaGate_Text_Officer:
#if GERMAN
	.string "Du arbeitest an einem Dex? Das\n"
	.string "ist doch schon etwas. Gib nicht auf!$"
#else
	.string "You're working on a POKéDEX? That's\n"
	.string "really something.\p"
	.string "Don't give up!$"
#endif
