FiveIsland_LostCave_Room4_Frlg_MapScripts::
	.byte 0

FiveIsland_LostCave_Room4_EventScript_Laura::
	trainerbattle_single TRAINER_PSYCHIC_LAURA, FiveIsland_LostCave_Room4_Text_LauraIntro, FiveIsland_LostCave_Room4_Text_LauraDefeat
	msgbox FiveIsland_LostCave_Room4_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_LostCave_Room4_Text_LauraIntro::
#if GERMAN
	.string "Ich glaube, dass in dieser Höhle eine\n"
	.string "geheimnisvolle Kraft wirkt.$"
#else
	.string "I think there is a mysterious power\n"
	.string "at work in this cave.$"
#endif

FiveIsland_LostCave_Room4_Text_LauraDefeat::
#if GERMAN
	.string "Wenn du nicht den richtigen Tunnel\n"
	.string "erwischst, kommst du nie voran!$"
#else
	.string "If you don't go into the right\n"
	.string "tunnel, you won't get ahead.$"
#endif

FiveIsland_LostCave_Room4_Text_LauraPostBattle::
#if GERMAN
	.string "Vor kurzem ging eine Frau\n"
	.string "in diese Höhlen.$"
#else
	.string "Earlier, a lady went into the caves\n"
	.string "ahead.$"
#endif

