Route2_ViridianForest_NorthEntrance_Frlg_MapScripts::
	.byte 0

Route2_ViridianForest_NorthEntrance_EventScript_Youngster::
	msgbox Route2_ViridianForest_NorthEntrance_Text_ManyMonsOnlyInForests, MSGBOX_NPC
	end

Route2_ViridianForest_NorthEntrance_EventScript_OldMan::
	msgbox Route2_ViridianForest_NorthEntrance_Text_CanCutSkinnyTrees, MSGBOX_NPC
	end

Route2_ViridianForest_NorthEntrance_EventScript_CooltrainerF::
	msgbox Route2_ViridianForest_NorthEntrance_Text_CanCancelEvolution, MSGBOX_NPC
	end

Route2_ViridianForest_NorthEntrance_Text_ManyMonsOnlyInForests::
#if GERMAN
	.string "Viele Pokémon leben in Höhlen und\n"
	.string "Wäldern.\p"
	.string "Du solltest dich überall umsehen,\n"
	.string "um verschiedene zu finden!$"
#else
	.string "Many POKéMON live only in forests \n"
	.string "and caves.\p"
	.string "You need to be persistent and look\n"
	.string "everywhere to get different kinds.$"
#endif

Route2_ViridianForest_NorthEntrance_Text_CanCutSkinnyTrees::
#if GERMAN
	.string "Achte auf Büsche am Wegesrand.\p"
	.string "Pokémon können sie mit einer\n"
	.string "Spezial-Technik klein hacken.$"
#else
	.string "Have you noticed the skinny trees\n"
	.string "on the roadside?\p"
	.string "They can be cut down by a special\n"
	.string "POKéMON move, I hear.$"
#endif

Route2_ViridianForest_NorthEntrance_Text_CanCancelEvolution::
#if GERMAN
	.string "Man kann die Entwicklung eines\n"
	.string "Pokémon stoppen.\p"
	.string "Bricht man sie ab, dann bleibt das\n"
	.string "Pokémon, wie es ist.$"
#else
	.string "Do you know the evolution-cancel\n"
	.string "technique?\p"
	.string "When a POKéMON is evolving, you\n"
	.string "can stop the process.\p"
	.string "It's a technique for raising\n"
	.string "POKéMON the way they are.$"
#endif

