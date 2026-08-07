GoldenrodCity_House3_hns_MapScripts::
	.byte 0

GoldenrodCity_House3_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodHappinessRater_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_House3_EventScript_Twin::
	lock
	faceplayer
	msgbox GoldenrodHappinessRater_Text_Twin, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodHappinessRater_Text_PokefanM:
#if GERMAN
	.string "Ständig werden meine Pokémon bei\n"
	.string "Kämpfen besiegt und bewusstlos…\p"
	.string "Vielleicht ist das ja der Grund, weshalb\n"
	.string "sie mich nicht ausstehen können.$"
#else
    .string "I keep losing in battles, and my\n"
    .string "POKéMON end up fainting…\p"
    .string "Maybe that's why my POKéMON don't\n"
    .string "like me much…$"
#endif

GoldenrodHappinessRater_Text_Twin:
#if GERMAN
	.string "Wenn ich Items auf meine Pokémon\n"
	.string "anwende, freuen sie sich immer sehr!$"
#else
    .string "When I use an item on my POKéMON,\n"
    .string "it acts really glad!$"
#endif
