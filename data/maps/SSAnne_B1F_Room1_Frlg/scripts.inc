SSAnne_B1F_Room1_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room1_EventScript_Barny::
	trainerbattle_single TRAINER_FISHERMAN_BARNY, SSAnne_B1F_Room1_Text_BarnyIntro, SSAnne_B1F_Room1_Text_BarnyDefeat
	msgbox SSAnne_B1F_Room1_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room1_EventScript_Phillip::
	trainerbattle_single TRAINER_SAILOR_PHILLIP, SSAnne_B1F_Room1_Text_PhillipIntro, SSAnne_B1F_Room1_Text_PhillipDefeat
	msgbox SSAnne_B1F_Room1_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_B1F_Room1_Text_PhillipIntro::
#if GERMAN
	.string "Der Verlierer wird kielgeholt!\n"
	.string "Los!$"
#else
	.string "Matey, you're walking the plank if\n"
	.string "you lose!$"
#endif

SSAnne_B1F_Room1_Text_PhillipDefeat::
#if GERMAN
	.string "Argh!\n"
	.string "Von einem Kind besiegt...$"
#else
	.string "Argh!\n"
	.string "Beaten by a kid!$"
#endif

SSAnne_B1F_Room1_Text_PhillipPostBattle::
#if GERMAN
	.string "Manchmal treiben Quallen an das\n"
	.string "Schiff. Der Koch fängt sie dann...$"
#else
	.string "When we're out at sea, jellyfish\n"
	.string "POKéMON sometimes drift by.$"
#endif

SSAnne_B1F_Room1_Text_BarnyIntro::
#if GERMAN
	.string "Warte doch!\n"
	.string "Lass uns plaudern!\p"
	.string "Ich besitze nur Wasser-Pokémon!$"
#else
	.string "Hello, stranger!\p"
	.string "I can't tell if you're from the seas\n"
	.string "or mountains, but stop and chat.\p"
	.string "All my POKéMON are from the sea.$"
#endif

SSAnne_B1F_Room1_Text_BarnyDefeat::
#if GERMAN
	.string "Mist!\n"
	.string "Der ist mir entwischt!$"
#else
	.string "Darn!\n"
	.string "I let that one get away!$"
#endif

SSAnne_B1F_Room1_Text_BarnyPostBattle::
#if GERMAN
	.string "Ich hätte dich fast zum Assistenten\n"
	.string "gemacht!$"
#else
	.string "I was going to make you my\n"
	.string "assistant, too!$"
#endif

