AbandonedShip_Rooms2_1F_MapScripts::
	.byte 0

AbandonedShip_Rooms2_1F_EventScript_Dan::
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterDan
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_DanRematch
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT  @ Kira speaks for both when registering KiraAndDan
	register_matchcall TRAINER_KIRA_AND_DAN_1
	release
	end

AbandonedShip_Rooms2_1F_EventScript_DanRematch::
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Kira::
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKira
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_KiraRematch
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_KIRA_AND_DAN_1
	release
	end

AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Jani::
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Garrison::
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_Text_DanIntro:
#if GERMAN
	.string "Max: Wir haben nach Schätzen gesucht\n"
	.string "- und einen Trainer gefunden!$"
#else
	.string "DAN: While searching for treasures,\n"
	.string "we discovered a TRAINER!$"
#endif

AbandonedShip_Rooms2_1F_Text_DanDefeat:
#if GERMAN
	.string "Max: Wir konnten nicht gewinnen,\n"
	.string "obwohl wir zusammengearbeitet haben…$"
#else
	.string "DAN: We couldn't win even though\n"
	.string "we worked together…$"
#endif

AbandonedShip_Rooms2_1F_Text_DanPostBattle:
#if GERMAN
	.string "Max: Wir konnten keine Schätze finden.\n"
	.string "Ob uns jemand zuvorgekommen ist?$"
#else
	.string "DAN: We can't find any treasures…\n"
	.string "I wonder if someone got them already?$"
#endif

AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
#if GERMAN
	.string "Max: Du hast keine zwei Pokémon.\n"
	.string "So kannst du nicht gegen uns antreten.$"
#else
	.string "DAN: You don't even have two POKéMON.\n"
	.string "You can't expect to beat us like that.$"
#endif

AbandonedShip_Rooms2_1F_Text_KiraIntro:
#if GERMAN
	.string "Jule: Oh? Wir haben nach Schätzen\n"
	.string "gesucht und einen Trainer gefunden.$"
#else
	.string "KIRA: Oh?\n"
	.string "We were searching for treasures.\l"
	.string "But we discovered a TRAINER instead!$"
#endif

AbandonedShip_Rooms2_1F_Text_KiraDefeat:
#if GERMAN
	.string "Jule: Oh, wow, bist du stark!$"
#else
	.string "KIRA: Ooh, so strong!$"
#endif

AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
#if GERMAN
	.string "Jule: Ich frage mich, wo die Schätze\n"
	.string "versteckt sind…\p"
	.string "Ich weiß, was ich mir alles kaufen\n"
	.string "würde, wenn ich reich wäre…$"
#else
	.string "KIRA: Where could the treasures be?\p"
	.string "I've already decided what I'm buying\n"
	.string "when we find the treasures!$"
#endif

AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
#if GERMAN
	.string "Jule: Hast du keine zwei Pokémon?\n"
	.string "Dann können wir jetzt nicht kämpfen.$"
#else
	.string "KIRA: Oh, you don't have two POKéMON?\n"
	.string "We'll have to battle some other time!$"
#endif

AbandonedShip_Rooms2_1F_Text_KiraRegister:
#if GERMAN
	.string "Jule: Du machst mich echt wütend!\n"
	.string "Ich werde dich im Pokénav eintragen.$"
#else
	.string "KIRA: Oh, you make me so angry!\n"
	.string "I'm going to register you for that!$"
#endif

AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
#if GERMAN
	.string "Max: Wir haben die ganze Zeit nur nach\n"
	.string "Schätzen gesucht.\p"
	.string "Aber unsere Pokémon sind auch stärker\n"
	.string "geworden. Dürfen wir dir das zeigen?$"
#else
	.string "DAN: We've been searching for\n"
	.string "treasures all this time.\p"
	.string "Our POKéMON have grown stronger, too.\n"
	.string "Let us show you, okay?$"
#endif

AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
#if GERMAN
	.string "Max: Du bist stark wie immer.$"
#else
	.string "DAN: You're strong, as usual!$"
#endif

AbandonedShip_Rooms2_1F_Text_DanPostRematch:
#if GERMAN
	.string "Max: Wir haben keine Schätze gefunden,\n"
	.string "sondern gegen Pokémon verloren…\p"
	.string "Ich will nach Hause… Aber wenn ich das\n"
	.string "laut sage, wird sie sauer auf mich.$"
#else
	.string "DAN: We can't find any treasures,\n"
	.string "we lose at POKéMON…\p"
	.string "I want to go home… But if I say that,\n"
	.string "she gets all angry with me…$"
#endif

AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
#if GERMAN
	.string "Max: Du hast keine zwei Pokémon.\n"
	.string "So können wir nicht kämpfen.$"
#else
	.string "DAN: You don't even have two POKéMON.\n"
	.string "You can't expect to beat us like that.$"
#endif

AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
#if GERMAN
	.string "Jule: Oh, da bist du ja wieder!\p"
	.string "Genau wie wir, hast du die Suche nach\n"
	.string "Schätzen auch nicht aufgegeben, was?\p"
	.string "Wie wäre es mit einem Kampf? Und der\n"
	.string "Verlierer gibt die Suche auf?$"
#else
	.string "KIRA: Oh? We meet again!\p"
	.string "Just like us, you still haven't given up\n"
	.string "searching for treasures, have you?\p"
	.string "Want to make it so the loser has\n"
	.string "to give up searching?$"
#endif

AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
#if GERMAN
	.string "Jule: Ach, wir haben wieder verloren…$"
#else
	.string "KIRA: Oh, we lost again…$"
#endif

AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
#if GERMAN
	.string "Jule: Wir müssen unsere Pokémon mehr\n"
	.string "trainieren.\p"
	.string "Wir gehen nicht ohne Schatz nach\n"
	.string "Hause!$"
#else
	.string "KIRA: We're not leaving until we raise\n"
	.string "our POKéMON some more and we find\l"
	.string "the treasures here!$"
#endif

AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
#if GERMAN
	.string "Jule: Hast du keine zwei Pokémon?\n"
	.string "Dann müssen wir später kämpfen.$"
#else
	.string "KIRA: Oh, you don't have two POKéMON?\n"
	.string "We'll have to battle some other time!$"
#endif

AbandonedShip_Rooms2_1F_Text_JaniIntro:
#if GERMAN
	.string "Ich kann nicht gut schwimmen.\n"
	.string "Aber im Kämpfen bin ich spitze!$"
#else
	.string "I'm not good at swimming,\n"
	.string "but I am good at battles!$"
#endif

AbandonedShip_Rooms2_1F_Text_JaniDefeat:
#if GERMAN
	.string "Hups. Das ging daneben.$"
#else
	.string "Oops.\n"
	.string "That didn't go very well.$"
#endif

AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
#if GERMAN
	.string "Barfuß durch ein Schiff zu laufen, ist\n"
	.string "irgendwie eeekelig.$"
#else
	.string "Walking around barefoot in this ship\n"
	.string "is kind of gross.$"
#endif

AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
#if GERMAN
	.string "Stärke und Mitgefühl…\n"
	.string "Das wird bei Trainern sehr geschätzt!$"
#else
	.string "Strength and compassion…\n"
	.string "Those are a TRAINER's treasures!$"
#endif

AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
#if GERMAN
	.string "Irgendetwas an dir erstrahlt hell.$"
#else
	.string "Ah, there is something about you\n"
	.string "that sparkles.$"
#endif

AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
#if GERMAN
	.string "In einer der Kabinen hier an Bord habe\n"
	.string "ich etwas Glitzerndes gesehen.$"
#else
	.string "In a cabin somewhere on board,\n"
	.string "I saw something sparkle.$"
#endif
