UnionCave_B2F_hns_MapScripts::
	.byte 0

UnionCave_B2F_EventScript_CooltrainerNick::
	trainerbattle_single TRAINER_NICK_HNS, UnionCave_B2F_Text_CooltrainermNickSeen, UnionCave_B2F_Text_CooltrainermNickBeaten
	msgbox UnionCave_B2F_Text_CooltrainermNickAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B2F_EventScript_CooltrainerfGwen::
	trainerbattle_single TRAINER_GWEN_HNS, UnionCave_B2F_Text_CooltrainerfGwenSeen, UnionCave_B2F_Text_CooltrainerfGwenBeaten
	msgbox UnionCave_B2F_Text_CooltrainerfGwenAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B2F_EventScript_CooltrainerfEmma::
	trainerbattle_single TRAINER_EMMA_HNS, UnionCave_B2F_Text_CooltrainerfEmmaSeen, UnionCave_B2F_Text_CooltrainerfEmmaBeaten
	msgbox UnionCave_B2F_Text_CooltrainerfEmmaAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B2F_EventScript_Lapras::
	lock
	faceplayer
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_LAPRAS, 20
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, UnionCave_B2F_EventScript_LaprasRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_UNION_CAVE_LAPRAS
	setflag FLAG_HIDE_UNION_CAVE_LAPRAS
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

UnionCave_B2F_EventScript_LaprasRan::
	release
	end


UnionCave_B2F_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

UnionCave_B2F_EventScript_Item_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

UnionCave_B2F_EventScript_Item_MaxRevive::
	finditem ITEM_MAX_REVIVE
	end

UnionCave_B2F_Text_CooltrainermNickSeen:
#if GERMAN
	.string "Es gibt zwei Arten von Leuten.\p"
	.string "Die mit Stil und die ohne.\n"
	.string "Und du, zu welcher Art gehörst du?$"
#else
	.string "There are two kinds of people.\p"
	.string "Those who have style, and those\n"
	.string "who don't.\p"
	.string "What kind of person are you?$"
#endif

UnionCave_B2F_Text_CooltrainermNickBeaten:
#if GERMAN
	.string "Dein Stil ist\n"
	.string "beeindruckend!$"
#else
	.string "You've got dazzling style!$"
#endif

UnionCave_B2F_Text_CooltrainermNickAfter:
#if GERMAN
	.string "Dein Pokémon-Stil ist imposant und\n"
	.string "abwechslungsreich,\l"
	.string "das gebe ich zu. Du wirst immer besser!$"
#else
	.string "Your POKéMON style is stunning and\n"
	.string "colorful, I admit.\p"
	.string "You'll just keep getting better!$"
#endif

UnionCave_B2F_Text_CooltrainerfGwenSeen:
#if GERMAN
	.string "Ich befinde mich auf einem Spezial-\n"
	.string "Trainingskurs. Möchtest du kämpfen?$"
#else
	.string "I'm in training. Care for a round?$"
#endif

UnionCave_B2F_Text_CooltrainerfGwenBeaten:
#if GERMAN
	.string "Och, menno!\n"
	.string "Du bist zu gut für mich.$"
#else
	.string "Aww, no! You're too good for me.$"
#endif

UnionCave_B2F_Text_CooltrainerfGwenAfter:
#if GERMAN
	.string "Ich trainiere so lange weiter,\n"
	.string "bis ich auch so stark bin!$"
#else
	.string "I'm going to train by myself until I\n"
	.string "improve.$"
#endif

UnionCave_B2F_Text_CooltrainerfEmmaSeen:
#if GERMAN
	.string "Für meine Lieblings-Pokémon\n"
	.string "nehme ich jede Reise auf mich.\l"
	.string "Das würde jeder wahre Trainer tun.$"
#else
	.string "If the POKéMON I liked were there,\n"
	.string "I'd go anywhere.\p"
	.string "That's what a real trainer does.$"
#endif

UnionCave_B2F_Text_CooltrainerfEmmaBeaten:
#if GERMAN
	.string "Ich streichle lieber meine Pokémon!$"
#else
	.string "I'd rather pet my babies than this!$"
#endif

UnionCave_B2F_Text_CooltrainerfEmmaAfter:
#if GERMAN
	.string "Nur ein Mal in der Woche kommt ein\n"
	.string "bestimmtes Pokémon an die\l"
	.string "Wasseroberfläche. Dieses Pokémon\l"
	.string "würde ich gerne sehen…$"
#else
	.string "Just once a week, a POKéMON comes to\n"
	.string "the water's edge.\p"
	.string "I wanted to see that POKéMON…$"
#endif
