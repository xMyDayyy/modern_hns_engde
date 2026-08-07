CliffEdgeGate_hns_MapScripts::
	.byte 0

CliffEdgeGate_EventScript_Woman::
	lock
	faceplayer
	msgbox CliffEdgeGate_Text_IntroOpen, MSGBOX_DEFAULT
	closemessage
	release
	end

CliffEdgeGate_EventScript_Picnicker::
	lock
	faceplayer
	msgbox CliffEdgeGate_Text_Expectations, MSGBOX_DEFAULT
	closemessage
	release
	end

CliffEdgeGate_Text_IntroOpen:
#if GERMAN
	.string "Hey, du! Höre mir mal kurz zu!\p"
	.string "Hier hinten gibt es einen\n"
	.string "sehr, sehr spannenden Ort!\l"
	.string "Die Safari-Zone!\p"
	.string "Da soll es seltene Pokémon in\n"
	.string "Hülle und Fülle geben…\l"
	.string "Ein regelrechtes Paradies für Trainer!\l"
	.string "Damit machen die doch Verluste, oder?\p"
	.string "Es ist gar nicht weit! Wenn du dort\n"
	.string "hochgehst, bist du sofort da!\l"
	.string "Na? Schaust du mal vorbei?$"
#else
	.string "Did you know? There's a SAFARI ZONE\n"
	.string "just around the corner.\p"
	.string "It's really fun!\n"
	.string "You will see many different kinds of\l"
	.string "POKéMON, and it's all you can catch!\p"
	.string "There is no reason not to go, right?\n"
	.string "Just around the corner.$"
#endif

CliffEdgeGate_Text_Expectations:
#if GERMAN
	.string "Es freut uns ja, dass alle so hohe \n"
	.string "Erwartungen an die Safari-Zone haben…\l"
	.string "aber die Dame am Empfang tönt ein\l"
	.string "bisschen zu laut durch die Gegend!\p"
	.string "Setze doch einfach ein gesundes Maß\n"
	.string "an Erwartungen in die Safari-Zone, ja?$"
#else
	.string "I appreciate that everybody is looking\n"
	.string "forward to it.\p"
	.string "But the lady at the reception seems\n"
	.string "a bit too dramatic...\p"
	.string "Don't get your expectations too high!$"
#endif

CliffEdgeGate_EventScript_CaveSign::
	lock
	msgbox CliffEdgeGate_Text_SignOpen, MSGBOX_SIGN
	closemessage
	release
	end

CliffEdgeGate_Text_SignOpen:
#if GERMAN
	.string "Erlebe wilde Pokémon-Abenteuer,\n"
	.string "völlig ohne Stress und Sorgen!\p"
	.string "Die allseits beliebte Safari-Zone von\n"
	.string "Wärter Baoba wartet auf dich!$"
#else
	.string "Everything Is Thrilling!\n"
	.string "Explore to Find Wild POKéMON!\l"
	.string "Warden BAOBA's SAFARI ZONE\l"
	.string "Up and Running!$"
#endif

