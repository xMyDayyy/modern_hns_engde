SSAnne_1F_Room2_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room2_EventScript_Woman::
	msgbox SSAnne_1F_Room2_Text_CruisingAroundWorld, MSGBOX_NPC
	end

SSAnne_1F_Room2_EventScript_Ann::
	trainerbattle_single TRAINER_LASS_ANN, SSAnne_1F_Room2_Text_AnnIntro, SSAnne_1F_Room2_Text_AnnDefeat
	msgbox SSAnne_1F_Room2_Text_AnnPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_1F_Room2_EventScript_Tyler::
	trainerbattle_single TRAINER_YOUNGSTER_TYLER, SSAnne_1F_Room2_Text_TylerIntro, SSAnne_1F_Room2_Text_TylerDefeat
	msgbox SSAnne_1F_Room2_Text_TylerPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_1F_Room2_Text_TylerIntro::
#if GERMAN
	.string "Ich bin total in Pokémon vernarrt!\n"
	.string "Du auch?$"
#else
	.string "I love POKéMON!\n"
	.string "Do you?$"
#endif

SSAnne_1F_Room2_Text_TylerDefeat::
#if GERMAN
	.string "Wow!\n"
	.string "Du bist cool!$"
#else
	.string "Wow! \n"
	.string "You're great!$"
#endif

SSAnne_1F_Room2_Text_TylerPostBattle::
#if GERMAN
	.string "Lass uns Freunde werden, O.K.?\p"
	.string "Dann können wir Pokémon tauschen!$"
#else
	.string "Listen, listen!\n"
	.string "Let me be your friend, okay?\p"
	.string "Then we can trade POKéMON and\n"
	.string "do stuff.$"
#endif

SSAnne_1F_Room2_Text_AnnIntro::
#if GERMAN
	.string "Auf meinen Reisen um die Welt habe\n"
	.string "ich unzählige Pokémon gefangen!$"
#else
	.string "I collected these POKéMON\n"
	.string "from all around the world!$"
#endif

SSAnne_1F_Room2_Text_AnnDefeat::
#if GERMAN
	.string "Nein! Ich habe die ganze Welt für\n"
	.string "diese Pokémon bereist!$"
#else
	.string "Oh, no!\n"
	.string "I went around the world for these!$"
#endif

SSAnne_1F_Room2_Text_AnnPostBattle::
#if GERMAN
	.string "So behandelt man keine Pokémon von\n"
	.string "Weltklasse!\p"
	.string "Ich verlange eine Kur in einem\n"
	.string "Pokémon-Center für meine Pokémon!!!$"
#else
	.string "You hurt my poor POKéMON!\p"
	.string "I demand that you heal them at a\n"
	.string "POKéMON CENTER!$"
#endif

SSAnne_1F_Room2_Text_CruisingAroundWorld::
#if GERMAN
	.string "Wir machen eine große Weltreise!$"
#else
	.string "We are cruising around the world,\n"
	.string "my children and I.$"
#endif

