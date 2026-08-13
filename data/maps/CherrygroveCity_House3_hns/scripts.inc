CherrygroveCity_House3_hns_MapScripts::
	.byte 0

CherrygroveCity_House3_EventScript_Boy::
	lock
	faceplayer
	msgbox CherrygroveCity_EvolutionHouse_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

CherrygroveCity_House3_EventScript_Girl::
	lock
	faceplayer
	msgbox CherrygroveCity_EvolutionHouse_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

CherrygroveCity_EvolutionHouse_Text_Youngster:
#if GERMAN
	.string "Pokémon sammeln über Kämpfe Erfahrung\n"
	.string "und verändern schließlich ihre Gestalt.$"
#else
	.string "POKéMON gain experience in\n"
	.string "battle and change their form.$"
#endif

CherrygroveCity_EvolutionHouse_Text_Lass:
#if GERMAN
	.string "Pokémon verändern sich?\p"
	.string "Ich wäre schockiert, wenn das plötzlich\n"
	.string "passieren würde!$"
#else
	.string "POKéMON change?\p"
	.string "I would be shocked if one did\n"
	.string "that!$"
#endif
