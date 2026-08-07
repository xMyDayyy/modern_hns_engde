Route1_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route1_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route1_EventScript_SchoolboyDanny::
	trainerbattle_single TRAINER_DANNY_HNS, Route1_Text_SchoolboyDanny_Seen, Route1_Text_SchoolboyDanny_Beaten
	msgbox Route1_Text_SchoolboyDanny_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Quinn::
	trainerbattle_single TRAINER_QUINN_HNS, Route1_Text_CooltrainerFQuinn_Seen, Route1_Text_CooltrainerFQuinn_Beaten
	msgbox Route1_Text_CooltrainerFQuinn_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Sign::
	msgbox Route1_Text_Sign, MSGBOX_SIGN
	end

Route1_Text_SchoolboyDanny_Seen:
#if GERMAN
	.string "Wenn sich zwei Trainer begegnen,\n"
	.string "heißt es sofort: Ring frei!$"
#else
	.string "If trainers meet, the first\n"
	.string "thing to do is battle.$"
#endif

Route1_Text_SchoolboyDanny_Beaten:
#if GERMAN
	.string "Argh… schon wieder\n"
	.string "verloren!$"
#else
	.string "Awww… I've got a losing record…$"
#endif

Route1_Text_SchoolboyDanny_AfterBattle:
#if GERMAN
	.string "Begegnen sich zwei Trainer, müssen sie\n"
	.string "kämpfen. Das gehört zum guten Ton.$"
#else
	.string "For trainers, it's a given that\n"
	.string "we'll battle whenever we meet.$"
#endif

Route1_Text_CooltrainerFQuinn_Seen:
#if GERMAN
	.string "Du da!\n"
	.string "Wie wär’s mit einem Kampf?$"
#else
	.string "You there! Want to battle?$"
#endif

Route1_Text_CooltrainerFQuinn_Beaten:
#if GERMAN
	.string "Ich habe verloren!$"
#else
	.string "Down and out…$"
#endif

Route1_Text_CooltrainerFQuinn_AfterBattle:
#if GERMAN
	.string "Du bist stark. Du hast\n"
	.string "offenbar hart trainiert.$"
#else
	.string "You're strong.\p"
	.string "You obviously must have trained\n"
	.string "hard.$"
#endif

Route1_Text_Sign:
#if GERMAN
	.string "Route 1\p"
	.string "Alabastia - Vertania City$"
#else
	.string "ROUTE 1\p"
	.string "PALLET TOWN - VIRIDIAN CITY$"
#endif
