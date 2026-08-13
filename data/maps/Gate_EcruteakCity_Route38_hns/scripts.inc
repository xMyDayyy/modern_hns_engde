Gate_EcruteakCity_Route38_hns_MapScripts::
	.byte 0

Route38_EventScript_Officer::
	lock
	faceplayer
	msgbox Route38_Text_EcruteakGateOfficer, MSGBOX_DEFAULT
	closemessage
	release
	end

Route38_Text_EcruteakGateOfficer:
#if GERMAN
	.string "Sag mal, wo kommst du noch mal her?\p"
	.string "Was? Aus Neuborkia?!?\p"
	.string "Aber das ist doch… ja, das ist die Stadt,\n"
	.string "in der Professor Lind wohnt!\l"
	.string "Du hast einen weiten Weg hinter dir!$"
#else
	.string "Where did you say you're from?\p"
	.string "NEW BARK TOWN?\p"
	.string "PROF.ELM lives over there,\n"
	.string "right?\p"
	.string "You've come a long way to get\n"
	.string "here.$"
#endif
