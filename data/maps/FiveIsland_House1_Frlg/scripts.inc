FiveIsland_House1_Frlg_MapScripts::
	.byte 0

FiveIsland_House1_EventScript_Woman::
	msgbox FiveIsland_House1_Text_HusbandWentOffFishing, MSGBOX_NPC
	end

FiveIsland_House1_Text_HusbandWentOffFishing::
#if GERMAN
	.string "Du brauchst für das Abendessen\n"
	.string "heute nichts einkaufen!\p"
	.string "… das hat mein Gatte gesagt,\n"
	.string "als er heute zum Angeln ging.\p"
	.string "Ich weiß nicht, ob ich mich auf\n"
	.string "seine große Ankündigung\l"
	.string "verlassen kann.$"
#else
	.string "Don't worry about buying anything\n"
	.string "for dinner tonight!\p"
	.string "…That's what my husband said when\n"
	.string "he went off fishing today.\p"
	.string "I'm not sure if I can count on him\n"
	.string "to live up to that promise.$"
#endif

