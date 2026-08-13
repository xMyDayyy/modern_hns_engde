FiveIsland_LostCave_Room1_Frlg_MapScripts::
	.byte 0

FiveIsland_LostCave_Room1_EventScript_Lawson::
	trainerbattle_single TRAINER_RUIN_MANIAC_LAWSON, FiveIsland_LostCave_Room1_Text_LawsonIntro, FiveIsland_LostCave_Room1_Text_LawsonDefeat
	msgbox FiveIsland_LostCave_Room1_Text_LawsonPostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_LostCave_Room1_Text_LawsonIntro::
#if GERMAN
	.string "Oh!\p"
	.string "Ich dachte, dies sei eine alte Ruine.\n"
	.string "Aber es wimmelt hier nur so vor\l"
	.string "Geistern!$"
#else
	.string "Aiyeeeeeh!\p"
	.string "I thought this was an ancient ruin.\n"
	.string "But it's teeming with ghosts!$"
#endif

FiveIsland_LostCave_Room1_Text_LawsonDefeat::
#if GERMAN
	.string "Kreeeiiisch!\n"
	.string "Gnade!$"
#else
	.string "Aiyeeeeeh!\n"
	.string "Mercy!$"
#endif

FiveIsland_LostCave_Room1_Text_LawsonPostBattle::
#if GERMAN
	.string "Ich versuche, hier herauszufinden, aber\n"
	.string "ich lande immer wieder hier.\l"
	.string "Vielleicht ist die Anzahl der Felsen ein\l"
	.string "Hinweis?$"
#else
	.string "I'm trying to get out of here, but\n"
	.string "I always end up at the same spot.\p"
	.string "Maybe the number of boulders is\n"
	.string "a hint…$"
#endif

