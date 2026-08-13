SproutTower_1F_hns_MapScripts::
	.byte 0

SproutTower_1F_EventScript_SageChow::
	trainerbattle_single TRAINER_CHOW_HNS, SproutTower_Text_SageChow_Seen, SproutTower_Text_SageChow_Beaten
	msgbox SproutTower_Text_SageChow_AfterBattle, MSGBOX_AUTOCLOSE
	end

SproutTower_1F_EventScript_Sage1::
	lock
	faceplayer
	msgbox SproutTower_Text_1F_Sage1, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_1F_EventScript_Sage2::
	lock
	faceplayer
	msgbox SproutTower_Text_1F_Sage2, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_1F_EventScript_Granny::
	lock
	faceplayer
	msgbox SproutTower_Text_1F_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_1F_EventScript_Teacher::
	lock
	faceplayer
	msgbox SproutTower_Text_1F_Teacher, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_1F_EventScript_ItemParalyzeHeal::
	finditem ITEM_PARALYZE_HEAL
	end

SproutTower_Text_SageChow_Seen:
#if GERMAN
	.string "Wir bewachen diesen Turm, um den\n"
	.string "Pokémon auf diese Weise unseren\p"
	.string "Dank auszudrücken und damit wir nie\n"
	.string "vergessen, was wir ihnen verdanken!$"
#else
	.string "We stand guard in this tower.\p"
	.string "Here, we express our gratitude\n"
	.string "to honor all POKéMON.$"
#endif

SproutTower_Text_SageChow_Beaten:
#if GERMAN
	.string "A-auch dafür vielen Dank!$"
#else
	.string "Th-Thank you!$"
#endif

SproutTower_Text_SageChow_AfterBattle:
#if GERMAN
	.string "Alles Leben kann nur fortbestehen,\n"
	.string "wenn man sich gegenseitig hilft…\p"
	.string "Lasst uns niemals vergessen,\n"
	.string "uns dankbar zu zeigen!$"
#else
	.string "All living beings coexist\n"
	.string "through cooperation.\p"
	.string "We must always be thankful\n"
	.string "for this.$"
#endif

SproutTower_Text_1F_Sage1:
#if GERMAN
	.string "Nur wenn du es bis ganz nach oben\n"
	.string "schaffst, erhältst du eine VM.$"
#else
	.string "Only if you reach the top will\n"
	.string "you obtain an HM.$"
#endif

SproutTower_Text_1F_Sage2:
#if GERMAN
	.string "Der Knofensa-Turm wurde vor langer\n"
	.string "Zeit als Trainingsstätte für Pokémon\l"
	.string "errichtet.$"
#else
	.string "SPROUT TOWER was built long ago\n"
	.string "as a place for POKéMON training.$"
#endif

SproutTower_Text_1F_Granny:
#if GERMAN
	.string "Die Trägersäule des Turms soll einst\n"
	.string "aus einem über 30 Meter hohen Knofensa\l"
	.string "entstanden sein.$"
#else
	.string "A BELLSPROUT over 100 feet\n"
	.string "tall…\p"
	.string "People say that it became the\n"
	.string "center pillar here.$"
#endif

SproutTower_Text_1F_Teacher:
#if GERMAN
	.string "Siehst du, wie sie sich bewegt?\n"
	.string "Die Mönche scheinen oben mitten im\l"
	.string "Training zu stecken!$"
#else
	.string "See the pillar shaking?\p"
	.string "People are training upstairs.$"
#endif

SproutTower_Text_1F_Statue:
#if GERMAN
	.string "Eine Pokémon-Statue…\n"
	.string "Sie sieht sehr erhaben aus.$"
#else
	.string "A POKéMON statue…\p"
	.string "It looks very distinguished.$"
#endif
