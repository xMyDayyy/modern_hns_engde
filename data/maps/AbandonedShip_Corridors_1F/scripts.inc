AbandonedShip_Corridors_1F_MapScripts::
	.byte 0

AbandonedShip_Corridors_1F_EventScript_Youngster::
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
	end

AbandonedShip_Corridors_1F_EventScript_Charlie::
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Corridors_1F_Text_CharlieIntro:
#if GERMAN
	.string "Was ist so lustig daran, dass ich\n"
	.string "meinen Schwimmreifen mit an Bord habe?$"
#else
	.string "What's so funny about having my inner\n"
	.string "tube aboard the ship?$"
#endif

AbandonedShip_Corridors_1F_Text_CharlieDefeat:
#if GERMAN
	.string "Hui, du hast mir die Luft rausgelassen!$"
#else
	.string "Whoa, you overwhelmed me!$"
#endif

AbandonedShip_Corridors_1F_Text_CharliePostBattle:
#if GERMAN
	.string "Es ist gar nicht so einfach, PokéBälle\n"
	.string "zu werfen, wenn man einen Schwimmreifen\l"
	.string "trägt!$"
#else
	.string "It's not easy throwing POKé BALLS\n"
	.string "while hanging on to an inner tube!$"
#endif

AbandonedShip_Corridors_1F_Text_IsntItFunHere:
#if GERMAN
	.string "Hier ist es doch wirklich lustig,\n"
	.string "nicht wahr? Ich bin total aufgeregt.$"
#else
	.string "Isn't it fun here?\n"
	.string "I get excited just being here!$"
#endif
