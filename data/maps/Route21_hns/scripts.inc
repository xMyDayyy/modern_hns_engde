Route21_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route21_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route21_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route21_EventScript_Seth::
	trainerbattle_single TRAINER_SETH_HNS, Route21_Text_SwimmermSethSeen, Route21_Text_SwimmermSethBeaten
	msgbox Route21_Text_SwimmermSethAfterBattle, MSGBOX_AUTOCLOSE
	end

Route21_EventScript_Nikki::
	trainerbattle_single TRAINER_NIKKI_HNS, Route21_Text_SwimmerfNikkiSeen, Route21_Text_SwimmerfNikkiBeaten
	msgbox Route21_Text_SwimmerfNikkiAfterBattle, MSGBOX_AUTOCLOSE
	end

Route21_EventScript_Arnold::
	trainerbattle_single TRAINER_ARNOLD_HNS, Route21_Text_FisherArnoldSeen, Route21_Text_FisherArnoldBeaten
	msgbox Route21_Text_FisherArnoldAfterBattle, MSGBOX_AUTOCLOSE
	end

Route21_Text_SwimmermSethSeen:
#if GERMAN
	.string "Halte durch!\n"
	.string "Ich sehe schon das Festland!$"
#else
	.string "Land ho! Gotta keep going!$"
#endif

Route21_Text_SwimmermSethBeaten:
#if GERMAN
	.string "Gluck…$"
#else
	.string "Glug…$"
#endif

Route21_Text_SwimmermSethAfterBattle:
#if GERMAN
	.string "Beim Vulkan auf der {COLOR RED}Zinnoberinsel{COLOR DARK_GRAY} habe\n"
	.string "ich diesen arroganten Typ getroffen…$"
#else
	.string "This arrogant guy was at CINNABAR's\n"
	.string "volcano.$"
#endif

Route21_Text_SwimmerfNikkiSeen:
#if GERMAN
	.string "Falls ich gewinne,\n"
	.string "musst du mich mit der Sonnencreme\l"
	.string "einreiben!$"
#else
	.string "If I win, you have to help me with\n"
	.string "my suntan lotion!$"
#endif

Route21_Text_SwimmerfNikkiBeaten:
#if GERMAN
	.string "Ich habe Angst vor\n"
	.string "einem Sonnenbrand…$"
#else
	.string "I'm worried about sunburn…$"
#endif

Route21_Text_SwimmerfNikkiAfterBattle:
#if GERMAN
	.string "Ich will ja schließlich keine Flecken\n"
	.string "oder Sommersprossen abbekommen.$"
#else
	.string "I have to watch out for blemishes\n"
	.string "caused by the sun.$"
#endif

Route21_Text_FisherArnoldSeen:
#if GERMAN
	.string "Ich hab das Angeln satt.\n"
	.string "Also gut!\l"
	.string "Lass uns kämpfen!$"
#else
	.string "I'm bored by fishing. Let's battle!$"
#endif

Route21_Text_FisherArnoldBeaten:
#if GERMAN
	.string "Ich habe auf ganzer Linie versagt…$"
#else
	.string "Utter failure…$"
#endif

Route21_Text_FisherArnoldAfterBattle:
#if GERMAN
	.string "Ich gehe zurück\n"
	.string "zum Angeln…$"
#else
	.string "I'll just go back to fishing…$"
#endif

