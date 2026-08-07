MtPyre_5F_MapScripts::
	.byte 0

@ Seems like the scripts for the 4F and 5F were swapped

MtPyre_4F_EventScript_Tasha::
	trainerbattle_single TRAINER_TASHA, MtPyre_4F_Text_TashaIntro, MtPyre_4F_Text_TashaDefeat
	msgbox MtPyre_4F_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_4F_Text_TashaIntro:
#if GERMAN
	.string "Ich mag gruselige Horrordinge…\n"
	.string "Es ist wie eine Sucht…\p"
	.string "Sobald ich hier bin…\n"
	.string "stehen mir die Haare zu Berge.$"
#else
	.string "I love all things horrifying…\n"
	.string "It's like a disease…\p"
	.string "When I'm here…\n"
	.string "I shiver with fear…$"
#endif

MtPyre_4F_Text_TashaDefeat:
#if GERMAN
	.string "Ich hasse Niederlagen…$"
#else
	.string "Losing, I dislike…$"
#endif

MtPyre_4F_Text_TashaPostBattle:
#if GERMAN
	.string "Ich will unheimliche Dinge sehen…\n"
	.string "Ich kann nicht weggehen…\p"
	.string "Muss bleiben…\n"
	.string "Willst du nicht bei mir bleiben?$"
#else
	.string "I want to see dreadful things…\n"
	.string "I can't leave…\p"
	.string "Stay…\n"
	.string "Won't you stay with me?$"
#endif

