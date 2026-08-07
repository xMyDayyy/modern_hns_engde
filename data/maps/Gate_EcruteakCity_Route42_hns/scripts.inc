Gate_EcruteakCity_Route42_hns_MapScripts::
	.byte 0

Gate_EcruteakCity_Route42_EventScript_Policeman::
	lock
	faceplayer
	msgbox Route42_Text_EcruteakGateOfficer, MSGBOX_DEFAULT
	closemessage
	release
	end

Route42_Text_EcruteakGateOfficer:
#if GERMAN
	.string "Das Innere des Kesselbergs ist ein\n"
	.string "natürlicher Irrgarten. Pass auf, dass\l"
	.string "du dich nicht verläufst!$"
#else
	.string "MT.MORTAR is like a maze\n"
	.string "inside.\p"
	.string "Be careful. Don't get lost\n"
	.string "in there.$"
#endif

