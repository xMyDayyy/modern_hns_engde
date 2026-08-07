AlolaWater_hns_MapScripts::
	.byte 0


Alola_MelemeleSea_TrainerBattleSwimmer::
	trainerbattle_single TRAINER_MELEMELE_SWIMMER_2_HNS, Alola_MelemeleSea_TrainerBattleSwimmer_Text_0, Alola_MelemeleSea_TrainerBattleSwimmer_Text_1
	msgbox Alola_MelemeleSea_TrainerBattleSwimmer_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_MelemeleSea_TrainerBattleSwimmer_Text_0:
#if GERMAN
	.string "So viel offenes Wasser hier!$"
#else
	.string "So much open water here!$"
#endif

Alola_MelemeleSea_TrainerBattleSwimmer_Text_1:
#if GERMAN
	.string "Autsch,\neine Muskelzerrung…$"
#else
	.string "Ouch,\npulled a hamstring…$"
#endif

Alola_MelemeleSea_TrainerBattleSwimmer_Text_2:
#if GERMAN
	.string "Hier gibt es starke Strömungen.\n"
	.string "Ich glaube, das zieht starke\l"
	.string "Pokémon an!$"
#else
	.string "There are some strong currents here.\n"
	.string "I think it attracts strong Pokémon!$"
#endif
