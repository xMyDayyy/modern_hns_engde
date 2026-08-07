LakeOfRageLowTide_hns_MapScripts::
	.byte 0

LakeOfRageLowTide_EventScript_Sage::
	msgbox LakeOfRageLowTide_Text_Sage, MSGBOX_NPC
	end

LakeOfRageLowTide_Text_Sage::
#if GERMAN
	.string "In dieser Höhle ist ein Pokémon,\n"
	.string "welches für normale Trainer\l"
	.string "viel zu stark ist.$"
#else
	.string "This cave contains a POKéMON\n"
	.string "too strong for an ordinary\l"
	.string "trainer.$"
#endif

