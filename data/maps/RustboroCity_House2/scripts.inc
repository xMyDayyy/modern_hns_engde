RustboroCity_House2_MapScripts::
	.byte 0

RustboroCity_House2_EventScript_PokefanF::
	msgbox RustboroCity_House2_Text_TrainerSchoolExcellent, MSGBOX_NPC
	end

RustboroCity_House2_EventScript_LittleGirl::
	msgbox RustboroCity_House2_Text_RoxanneKnowsALot, MSGBOX_NPC
	end

RustboroCity_House2_Text_TrainerSchoolExcellent:
#if GERMAN
	.string "Die Trainerschule ist hervorragend.\p"
	.string "Wenn du dort lernst, kannst du später\n"
	.string "sogar Arenaleiter werden.$"
#else
	.string "The TRAINER'S SCHOOL is excellent.\p"
	.string "If you study there, you could even\n"
	.string "become a GYM LEADER.$"
#endif

RustboroCity_House2_Text_RoxanneKnowsALot:
#if GERMAN
	.string "Felizia, die Arenaleiterin, weiß\n"
	.string "wirklich eine Menge über Pokémon.\p"
	.string "Und sie ist sehr stark!$"
#else
	.string "ROXANNE, the GYM LEADER, really knows\n"
	.string "a lot about POKéMON.\p"
	.string "She's really strong, too!$"
#endif

