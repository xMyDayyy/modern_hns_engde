PewterCity_Museum_2F_hns_MapScripts::
	.byte 0


PewterCity_Museum_2F_EventScript_Nerd::
	msgbox PewterCity_Museum_2F_Text_Nerd, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_Daughter::
	lock
	msgbox PewterCity_Museum_2F_Text_AskedDaddyToCatchPikachu, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_EventScript_Dad::
	lock
	msgbox PewterCity_Museum_2F_Text_PikachuSoonIPromise, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_EventScript_Meteor::
	msgbox PewterCity_Museum_2F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
	end

PewterCity_Museum_2F_Text_Nerd:
#if GERMAN
	.string "Irgendwo in der Nähe von Marmoria City\n"
	.string "soll ein Meteorit eingeschlagen sein!\p"
	.string "So einen seltenen Fund würden wir nur\n"
	.string "zu gerne hier im Museum ausstellen…\p"
	.string "Aber angeblich geht von dem Stein eine\n"
	.string "merkwürdige Energie aus, die es\l"
	.string "verhindert, dass man ihn von dort\l"
	.string "entfernt…$"
#else
	.string "They say that meteorites struck\n"
	.string "BIRTH ISLAND.\p"
	.string "We would love to display them here\n"
	.string "in our museum, but...\p"
	.string "These meteorites are said to emit\n"
	.string "strange energy and cannot be\l"
	.string "carried away...$"
#endif

PewterCity_Museum_2F_Text_AskedDaddyToCatchPikachu::
#if GERMAN
    .string "Ich will ein Pikachu!\n"
    .string "Es ist so süß!\p"
    .string "Ich frag Vati mir eines zu fangen!$"
#else
    .string "I want a PIKACHU!\n"
    .string "It's so cute!\p"
    .string "I asked my daddy to catch me one!$"
#endif

PewterCity_Museum_2F_Text_PikachuSoonIPromise::
#if GERMAN
    .string "Yeah, bald ein Pikachu, ich schöre es!$"
#else
    .string "Yeah, a PIKACHU soon, I promise!$"
#endif

PewterCity_Museum_2F_Text_SpaceShuttle::
#if GERMAN
    .string "Ein Raumschiff$"
#else
    .string "Space Shuttle$"
#endif

PewterCity_Museum_2F_Text_MeteoriteThatFellOnMtMoon::
#if GERMAN
    .string "Ein Meteorit fiel auf den Mondberg.\n"
    .string "Man sagt es sei ein Mondstein.$"
#else
    .string "A meteorite that fell on MT. MOON.\n"
    .string "It is thought to be a MOON STONE.$"
#endif
