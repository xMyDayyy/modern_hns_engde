CherrygroveCity_House1_hns_MapScripts::
	.byte 0

CherrygroveCity_House1_EventScript_Baldingman::
	lock
	faceplayer
	msgbox CherrygroveCity_GymSpeechHouse_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

CherrygroveCity_House1_EventScript_Kid::
	lock
	faceplayer
	msgbox CherrygroveCity_GymSpeechHouse_Text_BugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

CherrygroveCity_GymSpeechHouse_Text_PokefanM:
#if GERMAN
	.string "Möchtest du herausfinden, wie gut\n"
	.string "du als Trainer wirklich bist?\p"
	.string "Dann solltest du alle Pokémon-Arenen\n"
	.string "in Johto aufsuchen und dir dort die\l"
	.string "zugehörigen Orden erkämpfen!$"
#else
	.string "You're trying to see how good\n"
	.string "you are as a POKéMON trainer?\p"
	.string "You better visit the POKéMON\n"
	.string "GYMS all over JOHTO and collect\l"
	.string "BADGES.$"
#endif

CherrygroveCity_GymSpeechHouse_Text_BugCatcher:
#if GERMAN
	.string "Wenn ich mal groß bin, möchte ich\n"
	.string "unbedingt Arenaleiter werden!\p"
	.string "Ich lasse meine Pokémon jetzt schon\n"
	.string "gegen die meiner Freunde antreten,\l"
	.string "damit sie stärker werden!$"
#else
	.string "When I get older, I'm going to\n"
	.string "be a GYM LEADER!\p"
	.string "I make my POKéMON battle with\n"
	.string "my friend's to make them\l"
	.string "tougher!$"
#endif
