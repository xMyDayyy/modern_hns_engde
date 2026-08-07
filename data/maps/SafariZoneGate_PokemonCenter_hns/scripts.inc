SafariZoneGate_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZoneGate_PokemonCenter_OnTransition
	.byte 0

SafariZoneGate_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_SAFARI_ZONE_GATE_HNS
	end

SafariZoneGate_PokemonCenter_EventScript_NPC1::
	lock
	faceplayer
	msgbox SafariZoneGate_PokemonCenter_Text_NPC1, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_PokemonCenter_EventScript_NPC2::
	lock
	faceplayer
	msgbox SafariZoneGate_PokemonCenter_Text_NPC2, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_PokemonCenter_Text_Boy::
	lock
	faceplayer
	msgbox SafariZoneGate_PokemonCenter_Text_SafariSong, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_PokemonCenter_Text_NPC1:
#if GERMAN
	.string "Leute, die man ständig im Pokémon-\n"
	.string "Center sieht, sorgen sich bestimmt sehr\l"
	.string "um ihre Pokémon.\p"
	.string "Denkst du nicht auch?$"
#else
	.string "Those who come to a POKéMON CENTER\n"
	.string "often take good care of their POKéMON.\p"
	.string "Wouldn't you agree?$"
#endif

SafariZoneGate_PokemonCenter_Text_NPC2:
#if GERMAN
	.string "Jemandem, der nach einem langen\n"
	.string "Aufstieg kurz vor dem Umkippen steht,\l"
	.string "muss der Anblick eines Pokémon-Centers\l"
	.string "wie eine Oase nach einem Marsch durch\l"
	.string "die Wüste vorkommen!$"
#else
	.string "After a long walk in the mountains to\n"
	.string "find a POKéMON CENTER, when you're\l"
	.string "just about to fall flat...\p"
	.string "Then it feels like you are in paradise!$"
#endif

SafariZoneGate_PokemonCenter_Text_SafariSong:
#if GERMAN
	.string "Safari, Safari! So ein Spaß!\p"
	.string "Safari, Safari! Hier geb ich Gas!\p"
	.string "Wo in Schilf und Schlamm in Massen die\n"
	.string "Pokémon lauern im hohen Gras!\p"
	.string "Dieses Lied habe ich selbst\n"
	.string "geschrieben!\p"
	.string "Singe es doch auf deinen Streifzügen\n"
	.string "durch die {COLOR RED}Safari-Zone{COLOR DARK_GRAY} vor dich hin!$"
#else
	.string "Safari, safari, it is so much fun.\n"
	.string "Safari, safari, so interesting, huh!\p"
	.string "So many POKéMON are waiting for us!\p"
	.string "...That's a song I made up.\n"
	.string "I sing it when I am in the SAFARI ZONE.$"
#endif
