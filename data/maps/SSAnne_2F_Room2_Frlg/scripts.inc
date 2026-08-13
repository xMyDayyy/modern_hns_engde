SSAnne_2F_Room2_Frlg_MapScripts::
	.byte 0

SSAnne_2F_Room2_EventScript_Dale::
	trainerbattle_single TRAINER_FISHERMAN_DALE, SSAnne_2F_Room2_Text_DaleIntro, SSAnne_2F_Room2_Text_DaleDefeat
	msgbox SSAnne_2F_Room2_Text_DalePostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_2F_Room2_EventScript_Brooks::
	trainerbattle_single TRAINER_GENTLEMAN_BROOKS, SSAnne_2F_Room2_Text_BrooksIntro, SSAnne_2F_Room2_Text_BrooksDefeat
	msgbox SSAnne_2F_Room2_Text_BrooksPostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne_2F_Room2_Text_BrooksIntro::
#if GERMAN
	.string "Der Wettstreit mit der Jugend hält\n"
	.string "mich jung!$"
#else
	.string "Competing against the young keeps\n"
	.string "me youthful.$"
#endif

SSAnne_2F_Room2_Text_BrooksDefeat::
#if GERMAN
	.string "Ahhh!\n"
	.string "Da fühlt man sich gleich jünger!$"
#else
	.string "Good match!\n"
	.string "Ah, I feel young again!$"
#endif

SSAnne_2F_Room2_Text_BrooksPostBattle::
#if GERMAN
	.string "Vor 15 Jahren hätte ich mit links\n"
	.string "gewonnen...$"
#else
	.string "Fifteen years ago, I would\n"
	.string "have won!$"
#endif

SSAnne_2F_Room2_Text_DaleIntro::
#if GERMAN
	.string "Schau dir an, was ich an Land gezogen\n"
	.string "habe!$"
#else
	.string "Check out what I fished up!$"
#endif

SSAnne_2F_Room2_Text_DaleDefeat::
#if GERMAN
	.string "O.k.!\n"
	.string "Das war es für mich! Tschüss!!!$"
#else
	.string "I'm all out!$"
#endif

SSAnne_2F_Room2_Text_DalePostBattle::
#if GERMAN
	.string "Eine Party?\p"
	.string "Die dürfte längst vorbei sein. Du\n"
	.string "bist spät dran!$"
#else
	.string "Party?\p"
	.string "The cruise ship's party should be\n"
	.string "over by now.$"
#endif

