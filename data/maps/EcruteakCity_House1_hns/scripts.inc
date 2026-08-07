EcruteakCity_House1_hns_MapScripts::
	.byte 0

EcruteakCity_House1_EventScript_Gramps::
	lock
	faceplayer
	msgbox EcruteakLugiaSpeechHouse_Text_Gramps, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_House1_EventScript_Youngster::
	lock
	faceplayer
	msgbox EcruteakLugiaSpeechHouse_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakLugiaSpeechHouse_Text_Gramps:
#if GERMAN
	.string "Als ich noch jung war, bemerkte ich\n"
	.string "eines Tages plötzlich, dass sich der\l"
	.string "Himmel pechschwarz gefärbt hatte\l"
	.string "und ein riesiges, fliegendes Pokémon\l"
	.string "am Himmel erschien.\p"
	.string "Ich frage mich, was für ein Typ Pokémon\n"
	.string "das wohl war - Vogel oder Drache?$"
#else
	.string "This happened when I was young.\p"
	.string "The sky suddenly turned black. A\n"
	.string "giant flying POKéMON was blocking\l"
	.string "out the sun.\p"
	.string "I wonder what that POKéMON was?\p"
	.string "It was like a bird and a dragon.$"
#endif

EcruteakLugiaSpeechHouse_Text_Youngster:
#if GERMAN
	.string "Ob es dieses riesige Pokémon wohl\n"
	.string "wirklich gibt? Wenn ja, muss es echt\l"
	.string "unfassbar mächtig sein.$"
#else
	.string "Is there really a POKéMON that big?\p"
	.string "If it exists, it must be powerful.$"
#endif
