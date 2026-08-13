NewBarkTown_House2_hns_MapScripts::
	.byte 0


NewBarkTown_House2_EventScript_ElmsWife::
	lock
	faceplayer
	msgbox NewBarkTown_House2_Text_ElmsWife, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_House2_EventScript_ElmsSon::
	lock
	faceplayer
	msgbox NewBarkTown_House2_Text_ElmsSon, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_House2_Text_ElmsWife:
#if GERMAN
	.string "Ach du bist es, {PLAYER}!\p"
	.string "Mein Mann ist immer so beschäftigt.\n"
	.string "Ich hoffe, er überarbeitet sich nicht!\p"
	.string "Wenn er in seiner Pokémon-Forschung\n"
	.string "versinkt, vergisst er sogar zu essen.$"
#else
	.string "Hi, {PLAYER}! My husband's always\n"
	.string "so busy--I hope he's OK.\p"
	.string "When he's caught up in his\n"
	.string "POKéMON research, he even\l"
	.string "forgets to eat.$"
#endif

NewBarkTown_House2_Text_ElmsSon:
#if GERMAN
	.string "Wenn ich groß bin, will ich meinem\n"
	.string "Papa bei der Arbeit helfen!\p"
	.string "Und dann werde ich zu einem ganz tollen\n"
	.string "Pokémon-Professor!$"
#else
	.string "When I grow up, I'm going to\n"
	.string "help my dad!\p"
	.string "I'm going to be a great\n"
	.string "POKéMON professor!$"
#endif
