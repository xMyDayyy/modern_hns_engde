Akala_Forest_hns_MapScripts::
	.byte 0


Alola_Akala_Forest_FindItem1::
	finditem ITEM_FULL_RESTORE, 1
	end


Alola_Akala_Forest_FindItem2::
	finditem ITEM_PP_UP, 1
	end


Alola_AkalaForest_TrainerBattleBugCatcher1::
	trainerbattle_single TRAINER_AKALA_FOREST_BUGCATCHER_1_HNS, Alola_AkalaForest_TrainerBattleBugCatcher1_Text_0, Alola_AkalaForest_TrainerBattleBugCatcher1_Text_1
	msgbox Alola_AkalaForest_TrainerBattleBugCatcher1_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_AkalaForest_TrainerBattleBugCatcher2::
	trainerbattle_single TRAINER_AKALA_FOREST_BUGCATCHER_2_HNS, Alola_AkalaForest_TrainerBattleBugCatcher2_Text_0, Alola_AkalaForest_TrainerBattleBugCatcher2_Text_1
	msgbox Alola_AkalaForest_TrainerBattleBugCatcher2_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_Akala_BattleRaichu::
	lock
	faceplayer
	setflag FLAG_BATTLED_RAICHU
	playmoncry SPECIES_RAICHU, 0
	msgbox Alola_Akala_BattleRaichu_Text_0, MSGBOX_AUTOCLOSE
	waitmoncry
	setwildbattle SPECIES_RAICHU, 45
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Alola_Akala_BattleRaichu_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Alola_Akala_BattleRaichu_3
	release
	end

	release
	end

Alola_Akala_BattleRaichu_2:
	setflag FLAG_HIDE_RAICHU_ALOLA
	removeobject LOCALID_AKALA_RAICHU
	release
	end

Alola_Akala_BattleRaichu_3:
	setflag FLAG_HIDE_RAICHU_ALOLA
	removeobject LOCALID_AKALA_RAICHU
	release
	end


Alola_AkalaForest_TrainerBattleBugCatcher1_Text_0:
#if GERMAN
	.string "Sieh dir all die coolen Käfer hier\nauf den Inseln an!$"
#else
	.string "Look at all the cool bugs here on the \nIsles!$"
#endif

Alola_AkalaForest_TrainerBattleBugCatcher1_Text_1:
#if GERMAN
	.string "Autsch, das hat gestochen!$"
#else
	.string "Ouch, that stung!$"
#endif

Alola_AkalaForest_TrainerBattleBugCatcher1_Text_2:
#if GERMAN
	.string "Die Inseln liegen weit entfernt vom\n"
	.string "Festland. Die Käfer-Pokémon hier\l"
	.string "mussten sich wohl an die Umgebung\l"
	.string "anpassen.$"
#else
	.string "The Isles are far away from other land,\n"
	.string "so Bug-type Pokémon here must have\l"
	.string "adapted to the environment.$"
#endif

Alola_AkalaForest_TrainerBattleBugCatcher2_Text_0:
#if GERMAN
	.string "Sieh mal, was ich gefangen habe!$"
#else
	.string "Look at what I caught!$"
#endif

Alola_AkalaForest_TrainerBattleBugCatcher2_Text_1:
#if GERMAN
	.string "Aua, das beißt ja!$"
#else
	.string "Awh, that bites!$"
#endif

Alola_AkalaForest_TrainerBattleBugCatcher2_Text_2:
#if GERMAN
	.string "Das Klima auf den Alola-Inseln ist\n"
	.string "ein wenig anders…\p"
	.string "Bestimmt gibt es deshalb hier so\n"
	.string "einzigartige Käfer-Pokémon.$"
#else
	.string "The climate is a bit different on the\n"
	.string "Alola Isles…\p"
	.string "I'm sure that's why there are some\n"
	.string "unique Bug-type Pokémon here.$"
#endif


Alola_Akala_BattleRaichu_Text_0:
#if GERMAN
	.string "Urgs!$"
#else
	.string "Gaaah!$"
#endif

