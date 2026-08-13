NewBarkTown_House1_hns_MapScripts::
	.byte 0

NewBarkTown_House1_EventScript_Mother::
	lock
	faceplayer
	msgbox NewBarkTown_House1_Text_Neighbor, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_House1_EventScript_Daughter::
	lock
	faceplayer
	msgbox NewBarkTown_House1_Text_NeighborsDaughter, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_House1_Text_NeighborsDaughter:
#if GERMAN
	.string "Pikachu ist ein entwickeltes Pokémon!\p"
	.string "Diese Erkenntnis verdanken wir ganz\n"
	.string "alleine Professor Lind…\p"
	.string "Er hat mir wirklich sehr imponiert.\p"
	.string "An seiner Ausstrahlung merkt man\n"
	.string "sofort, wie er zu so einem berühmten\l"
	.string "Pokémon-Professor werden konnte.\p"
	.string "Seufz… ich wünschte, ich wäre auch so\n"
	.string "ein toller Forscher wie er.$"
#else
	.string "PIKACHU is an evolved POKéMON.\p"
	.string "I was amazed by PROF.ELM's\n"
	.string "findings.\p"
	.string "He's so famous for his research\n"
	.string "on POKéMON evolution.\p"
	.string "…sigh…\p"
	.string "I wish I could be a researcher\n"
	.string "like him…$"
#endif


NewBarkTown_House1_Text_Neighbor:
#if GERMAN
	.string "Meine Tochter will unbedingt Prof. Linds\n"
	.string "Assistentin werden.\p"
	.string "Sie liebt Pokémon wirklich sehr!\p"
	.string "Aber ich ja schließlich auch!$"
#else
	.string "My daughter is adamant about\n"
	.string "becoming PROF.ELM's assistant.\p"
	.string "She really loves POKéMON!\p"
	.string "But then, so do I!$"
#endif

