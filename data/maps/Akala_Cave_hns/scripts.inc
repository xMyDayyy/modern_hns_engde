Akala_Cave_hns_MapScripts::
	.byte 0


Alola_Melemele_BattleMarowak::
	lock
	faceplayer
	setflag FLAG_BATTLED_MAROWAK
	playmoncry SPECIES_MAROWAK, 0
	msgbox Alola_Melemele_BattleMarowak_Text_0, MSGBOX_AUTOCLOSE
	waitmoncry
	setwildbattle SPECIES_MAROWAK, 45
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Alola_Melemele_BattleMarowak_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Alola_Melemele_BattleMarowak_3
	release
	end

	release
	end

Alola_Melemele_BattleMarowak_2:
	setflag FLAG_HIDE_MAROWAK_ALOLA
	removeobject Alola_Melemele_Marowak
	release
	end

Alola_Melemele_BattleMarowak_3:
	setflag FLAG_HIDE_MAROWAK_ALOLA
	removeobject Alola_Melemele_Marowak
	release
	end


Alola_Melemele_BattleDugtrio::
	lock
	faceplayer
	setflag FLAG_BATTLED_DUGTRIO
	playmoncry SPECIES_DUGTRIO, 0
	msgbox Alola_Melemele_BattleDugtrio_Text_0, MSGBOX_AUTOCLOSE
	waitmoncry
	setwildbattle SPECIES_DUGTRIO, 45
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Alola_Melemele_BattleDugtrio_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Alola_Melemele_BattleDugtrio_3
	release
	end

	release
	end

Alola_Melemele_BattleDugtrio_2:
	setflag FLAG_HIDE_DUGTRIO_ALOLA
	removeobject Alola_Melemele_Dugtrio
	release
	end

Alola_Melemele_BattleDugtrio_3:
	setflag FLAG_HIDE_DUGTRIO_ALOLA
	removeobject Alola_Melemele_Dugtrio
	release
	end


Alola_Akala_Cave_FindItem1::
	finditem ITEM_CARBOS, 1
	end


Alola_Akala_Cave_FindItem2::
	finditem ITEM_HP_UP, 1
	end


Alola_AkalaCave_TrainerBattleHiker::
	trainerbattle_single TRAINER_AKALA_CAVE_HIKER_HNS, Alola_AkalaCave_TrainerBattleHiker_Text_0, Alola_AkalaCave_TrainerBattleHiker_Text_1
	msgbox Alola_AkalaCave_TrainerBattleHiker_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_AkalaCave_TrainerBattlePicnicker::
	trainerbattle_single TRAINER_AKALA_CAVE_PICNICKER_HNS, Alola_AkalaCave_TrainerBattlePicnicker_Text_0, Alola_AkalaCave_TrainerBattlePicnicker_Text_1
	msgbox Alola_AkalaCave_TrainerBattlePicnicker_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_AkalaCave_TrainerBattleCamper::
	trainerbattle_single TRAINER_AKALA_CAVE_CAMPER_HNS, Alola_AkalaCave_TrainerBattleCamper_Text_0, Alola_AkalaCave_TrainerBattleCamper_Text_1
	msgbox Alola_AkalaCave_TrainerBattleCamper_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_Melemele_BattleMarowak_Text_0:
	.string "Raah!$"

Alola_Melemele_BattleDugtrio_Text_0:
	.string "Cha-Cha!$"

Alola_AkalaCave_TrainerBattleHiker_Text_0:
#if GERMAN
	.string "Du musst zäh sein, wenn du es bis\nhier herauf geschafft hast!$"
#else
	.string "You must be tough if you made it all the\nway up here!$"
#endif

Alola_AkalaCave_TrainerBattleHiker_Text_1:
#if GERMAN
	.string "Du bist zäher als ich!$"
#else
	.string "Tougher than me!$"
#endif

Alola_AkalaCave_TrainerBattleHiker_Text_2:
#if GERMAN
	.string "Ich musste den Aufstieg abbrechen,\n"
	.string "weil es viel zu heiß wurde.\p"
	.string "Als hätte jemand dort oben auf dem\n"
	.string "Gipfel ein Feuer entfacht…$"
#else
	.string "I had to stop climbing because it was\n"
	.string "getting far too hot.\p"
	.string "It's like someone's got a fire going\n"
	.string "up on the peak…$"
#endif

Alola_AkalaCave_TrainerBattlePicnicker_Text_0:
#if GERMAN
	.string "Ich bin müde vom vielen Laufen.\nLass uns kämpfen!$"
#else
	.string "I'm tired from all this walking,\nlet's have a battle!$"
#endif

Alola_AkalaCave_TrainerBattlePicnicker_Text_1:
#if GERMAN
	.string "Puh, das war erfrischend!$"
#else
	.string "Well that was refreshing!$"
#endif

Alola_AkalaCave_TrainerBattlePicnicker_Text_2:
#if GERMAN
	.string "Normalerweise bin ich nicht so\n"
	.string "erschöpft, aber die Hitze in dieser\l"
	.string "Höhle ist anstrengend!$"
#else
	.string "I'm usually not this tired but\n"
	.string "the heat in this cave is exhausting!$"
#endif

Alola_AkalaCave_TrainerBattleCamper_Text_0:
#if GERMAN
	.string "Schau mich an!\nIch habe starke Pokémon gefangen!$"
#else
	.string "Check me out!\nI caught some strong Pokémon!$"
#endif

Alola_AkalaCave_TrainerBattleCamper_Text_1:
#if GERMAN
	.string "Nicht schlecht,\naber nicht gut genug!$"
#else
	.string "Not bad,\nbut not good enough!$"
#endif

Alola_AkalaCave_TrainerBattleCamper_Text_2:
#if GERMAN
	.string "Ist es hier drin warm oder liegt\ndas nur an mir?$"
#else
	.string "Is it warm in here or is it just me?$"
#endif
