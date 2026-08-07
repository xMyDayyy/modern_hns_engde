RustboroCity_Flat2_3F_MapScripts::
	.byte 0

RustboroCity_Flat2_3F_EventScript_DevonEmployee::
	msgbox RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones, MSGBOX_NPC
	end

RustboroCity_Flat2_3F_EventScript_Woman::
	msgbox RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones, MSGBOX_NPC
	end

RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones:
#if GERMAN
	.string "Der Präsident von Devon sammelt\n"
	.string "leidenschaftlich gerne seltene Steine.$"
#else
	.string "DEVON's PRESIDENT likes to collect\n"
	.string "rare stones.$"
#endif

RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones:
#if GERMAN
	.string "Ich glaube, der Sohn des Präsidenten\n"
	.string "sammelt auch seltene Steine.$"
#else
	.string "I think the PRESIDENT's son also\n"
	.string "collects rare stones.$"
#endif

