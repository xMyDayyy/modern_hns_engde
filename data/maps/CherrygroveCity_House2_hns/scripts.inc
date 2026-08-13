CherrygroveCity_House2_hns_MapScripts::
	.byte 0

CherrygroveCity_House2_EventScript_GuideGent::
	lock
	faceplayer
	msgbox CherrygroveCity_GuideHouse_Text_GuideGent, MSGBOX_DEFAULT
	closemessage
	release
	end

CherrygroveCity_GuideHouse_Text_GuideGent:
#if GERMAN
	.string "Als ich noch ein kleiner Junge\n"
	.string "war, war ich ein Spitzentrainer!\p"
	.string "Hier ein guter Rat:\n"
	.string "Fang viele Pokémon!\p"
	.string "Behandle sie alle mit Respekt und\n"
	.string "Freundschaftlichkeit!$"
#else
	.string "When I was a wee lad, I was a\n"
	.string "hotshot trainer!\p"
	.string "Here's a word of advice:\n"
	.string "Catch lots of POKéMON!\p"
	.string "Treat them all with kindness!$"
#endif
