Route25_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_MapScript_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route25_MapScript_OnTransition::
	callnative SetTimeBasedEncounters
	goto_if_eq VAR_SUICUNE_ENCOUNTERS, 7, Route25_EventScript_SetSuicuneSceneMid
	end

Route25_EventScript_SetSuicuneSceneMid::
	setobjectxyperm LOCALID_ROUTE25_EUSINE, 98, 14
	end

Route25_EventScript_MistyRematch::
    lock
    faceplayer
    msgbox Route25_Text_Misty, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_CAPE_MISTY
    removeobject LOCALID_CAPE_MISTY
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_MISTY
    release
    end

Route25_Text_Misty:
#if GERMAN
	.string "Misty: Ich liebe den Sonnenuntergang\n"
	.string "hier!\p"
	.string "Er gibt mir den Mut,\n"
	.string "weiterzumachen, weißt du?\p"
	.string "Richtig!\p"
	.string "Wenn du bereit bist,\n"
	.string "Welle zu machen,\l"
	.string "triff mich im Kampf-Dojo!$"
#else
    .string "MISTY: I love the sunset here!\n"
	.string "It gives me the courage to go on,\l"
	.string "you know?\p"
	.string "Right!\p"
	.string "If you're ready for a real splash,\n"
	.string "meet me at the FIGHTING DOJO!$"
#endif

Route25_EventScript_Dudley::
	trainerbattle_single TRAINER_DUDLEY_HNS, Route25_Text_SchoolboyDudleySeen, Route25_Text_SchoolboyDudleyBeaten
	msgbox Route25_Text_SchoolboyDudleyAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Ellen::
	trainerbattle_single TRAINER_ELLEN_HNS, Route25_Text_LassEllenSeen, Route25_Text_LassEllenBeaten
	msgbox Route25_Text_LassEllenAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Joe::
	trainerbattle_single TRAINER_JOE_HNS, Route25_Text_SchoolboyJoeSeen, Route25_Text_SchoolboyJoeBeaten
	msgbox Route25_Text_SchoolboyJoeAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA_HNS, Route25_Text_LassLauraSeen, Route25_Text_LassLauraBeaten
	msgbox Route25_Text_LassLauraAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Lloyd::
	trainerbattle_single TRAINER_LLOYD_HNS, Route25_Text_CamperLloydSeen, Route25_Text_CamperLloydBeaten
	msgbox Route25_Text_CamperLloydAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Shannon::
	trainerbattle_single TRAINER_SHANNON_HNS, Route25_Text_LassShannonSeen, Route25_Text_LassShannonBeaten
	msgbox Route25_Text_LassShannonAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Pat::
	trainerbattle_single TRAINER_PAT_HNS, Route25_Text_SupernerdPatSeen, Route25_Text_SupernerdPatBeaten
	msgbox Route25_Text_SupernerdPatAfter, MSGBOX_AUTOCLOSE
	end

Route25_EventScript_Kevin::
	lock
	faceplayer
	goto_if_set FLAG_ROUTE25_GOT_NUGGET, Route25_EventScript_KevinAfter
	msgbox Route25_Text_CooltrainerKevinNugget, MSGBOX_DEFAULT
	giveitem ITEM_BIG_NUGGET
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_ROUTE25_GOT_NUGGET
	msgbox Route25_Text_CooltrainerKevinSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_KEVIN_HNS, Route25_Text_CooltrainerKevinBeaten
	msgbox Route25_Text_CooltrainerKevinAfter, MSGBOX_DEFAULT
	closemessage
	release
	end
Route25_EventScript_KevinAfter::
	msgbox Route25_Text_CooltrainerKevinAfter, MSGBOX_NPC
	end

Route25_EventScript_BillsHouseSign::
	msgbox Route25_Text_BillsHouseSign, MSGBOX_SIGN
	end

Route25_Trigger_MistyRight::
	lock
	turnobject LOCALID_ROUTE25_MISTY, DIR_SOUTH
	delay 40
	turnobject LOCALID_ROUTE25_MAN, DIR_SOUTH
	playse SE_PIN
	applymovement2 LOCALID_ROUTE25_MAN, Common_Movement_ExclamationMark
	waitmovement LOCALID_ROUTE25_MAN
	applymovement2 LOCALID_ROUTE25_MAN, Route25_Movement_ManLeaveRight
	waitmovement 0
	applymovement2 LOCALID_ROUTE25_MISTY, Route25_Movement_MistyWalkToPlayerRight
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	goto Route25_EventScript_Misty
Route25_Trigger_MistyLeft::
	lock
	turnobject LOCALID_ROUTE25_MISTY, DIR_SOUTH
	delay 40
	turnobject LOCALID_ROUTE25_MAN, DIR_SOUTH
	playse SE_PIN
	applymovement2 LOCALID_ROUTE25_MAN, Common_Movement_ExclamationMark
	waitmovement LOCALID_ROUTE25_MAN
	applymovement2 LOCALID_ROUTE25_MAN, Route25_Movement_ManLeaveLeft
	waitmovement 0
	applymovement2 LOCALID_ROUTE25_MISTY, Route25_Movement_MistyWalkToPlayerLeft
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto Route25_EventScript_Misty
Route25_EventScript_Misty::
	msgbox Route25_Text_MistyDate, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_ROUTE25_MISTY, Route25_Movement_MistyLeave
	waitmovement 0
	removeobject LOCALID_ROUTE25_MISTY
	removeobject LOCALID_ROUTE25_MAN
	setflag FLAG_HIDE_ROUTE25_MISTY
	clearflag FLAG_HIDE_CERULEAN_GYM_TRAINERS
	setflag FLAG_HIDE_CERULEAN_GYM_POKEMON
	setvar VAR_CERULEAN_CITY_STATE, 3
	release
	end

Route25_Trigger_SuicuneLeft::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE25_SUICUNE, Route25_Movement_Suicune1
	playse SE_LEDGE
	waitse
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route25_Movement_WalkToSuicune
	waitmovement 0
	goto Route25_EventScript_SuicuneMerge
Route25_Trigger_SuicuneRight::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE25_SUICUNE, Route25_Movement_Suicune1
	playse SE_LEDGE
	waitse
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route25_Movement_WalkToSuicune
	waitmovement 0
	goto Route25_EventScript_SuicuneMerge
Route25_EventScript_SuicuneMerge::
	clearflag FLAG_HIDE_ROUTE25_EUSINE
	addobject LOCALID_ROUTE25_EUSINE
	applymovement LOCALID_ROUTE25_EUSINE, Route25_Movement_EusineEnter
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	msgbox Route25_Text_Eusine1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE25_EUSINE, Route25_Movement_EusineSide
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox Route25_Text_Eusine2, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SUICUNE_ENCOUNTERS, 7
	release
	end

Route25_Trigger_SuicuneRightRight::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	goto Route25_Trigger_SuicuneRight
Route25_Trigger_SuicuneLeftLeft::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	goto Route25_Trigger_SuicuneLeft

Route25_Text_Eusine1:
#if GERMAN
	.string "Eusin: Schnauf, schnauf…\n"
	.string "Gegen dich hatte ich einfach\l"
	.string "keine Chance…\p"
	.string "… … …\n"
	.string "Aber keine Sorge, das ist schon gut so.\p"
	.string "Schon seit wir uns in der Turmruine von\n"
	.string "Teak City zum ersten Mal gesehen\l"
	.string "haben, wusste ich tief in mir drin, dass\l"
	.string "Suicune dich auserwählen würde.$"
#else
	.string "EUSINE: Puff, puff...\n"
	.string "I am... no match for you.\p"
	.string "...As I predicted.\n"
	.string "..........................\l"
	.string "... Go ahead.\p"
	.string "Since I met you in the BURNED TOWER\n"
	.string "at ECRUTEAK CITY, I've sort of\l"
	.string "known that SUICUNE would choose\l"
	.string "you.$"
#endif

Route25_Text_Eusine2:
#if GERMAN
	.string "Eusin: Da, sieh nur!\n"
	.string "Suicune wartet auf dich!\l"
	.string "Es wartet darauf, dass es von einem\l"
	.string "Trainer herausgefordert wird, der sich\l"
	.string "mit voller Kraft in den Kampf wirft!$"
#else
	.string "Take a look at it!\p"
	.string "SUICUNE is waiting for you!\n"
	.string "It has been waiting for a battle\l"
	.string "with a worthy trainer to whom it\l"
	.string "can entrust itself.$"
#endif

Route25_Text_Eusine3:
#if GERMAN
	.string "Eusin: {PLAYER}…\n"
	.string "Das war wirklich unglaublich…\p"
	.string "Jetzt, wo ich diesem Kampf\n"
	.string "beiwohnen durfte, gibt es echt\l"
	.string "nichts mehr, worüber ich mich\l"
	.string "noch beklagen könnte…\p"
	.string "Lebe wohl, Suicune!\n"
	.string "Und lebe wohl, {PLAYER}!$"
#else
	.string "{PLAYER}...\n"
	.string "You two are truly amazing...\p"
	.string "I have never seen a battle this\n"
	.string "intense!\l"
	.string "I have no regrets...\p"
	.string "Farewell, SUICUNE!\n"
	.string "Farewell... {PLAYER}!$"
#endif

Route25_EventScript_Eusine::
	msgbox Route25_Text_Eusine2, MSGBOX_NPC
	end

Route25_EventScript_Suicune::
	lock
	faceplayer
	playmoncry SPECIES_SUICUNE, CRY_MODE_NORMAL
	applymovement LOCALID_ROUTE25_SUICUNE, Route25_Movement_Suicune1
	playse SE_LEDGE
	waitse
	waitmovement 0
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	seteventmon SPECIES_SUICUNE, 50
	special BattleSetup_StartLegendaryBattle
	waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route25_EventScript_SuicuneRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ROUTE25_SUICUNE
	setflag FLAG_HIDE_ROUTE25_SUICUNE
	fadescreenswapbuffers FADE_FROM_BLACK
	goto_if_ge VAR_SUICUNE_ENCOUNTERS, 8, Route25_EventScript_SuicunePostGame
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 99, Route25_AdjustPlayer
	call_if_eq VAR_TEMP_0, 100, Route25_AdjustPlayerTwice
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	turnobject LOCALID_ROUTE25_EUSINE, DIR_NORTH
	msgbox Route25_Text_Eusine3, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_ROUTE25_EUSINE, Route25_Movement_EusineLeave
	waitmovement 0
	removeobject LOCALID_ROUTE25_EUSINE
	setflag FLAG_HIDE_ROUTE25_EUSINE
	clearflag FLAG_HIDE_CELADON_EUSINE
	setvar VAR_SUICUNE_ENCOUNTERS, 8
	release
	end

Route25_EventScript_SuicuneRan::
	release
	end

Route25_AdjustPlayer::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	return

Route25_AdjustPlayerTwice::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	return

Route25_EventScript_SuicunePostGame::
	release
	end

Route25_Movement_EusineLeave:
	walk_down
	walk_down
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Route25_Movement_EusineSide:
	walk_slow_left
	walk_slow_up
	step_end

Route25_Movement_EusineEnter:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_slow_up
	step_end

Route25_Movement_Suicune1:
	jump_in_place_down
	step_end

Route25_Movement_WalkToSuicune:
	walk_up
	walk_up
	step_end

Route25_Movement_MistyLeave:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route25_Movement_ManLeaveRight:
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end
Route25_Movement_ManLeaveLeft:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route25_Movement_MistyWalkToPlayerRight:
	walk_fast_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	face_right
	step_end
Route25_Movement_MistyWalkToPlayerLeft:
	walk_fast_left
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end

Route25_Text_MistyDate:
#if GERMAN
	.string "Misty: Oh Mann!\n"
	.string "Wo kommst du denn plötzlich her?!?\p"
	.string "Weißt du, wie man jemanden wie\n"
	.string "dich üblicherweise nennt?\l"
	.string "Einen Störenfried!\p"
	.string "… … …\n"
	.string "…Huch? Sag mal, diese Orden da…\l"
	.string "Sind das etwa Arena-Orden aus Johto?\p"
	.string "Wenn du alle acht davon besitzt,\n"
	.string "musst du ja so einiges drauf haben!\p"
	.string "Klasse!\n"
	.string "Komm mal in die Arena von Azuria City!\l"
	.string "Ich will nämlich gegen dich kämpfen!\p"
	.string "Ich bin Misty, die Arenaleiterin von\n"
	.string "Azuria City!$"
#else
	.string "MISTY: Aww! Why did you have to\n"
	.string "show up and bug us now?\p"
	.string "Do you know what they call\n"
	.string "people like you?\p"
	.string "Pests! You heard me right,\n"
	.string "pest!\p"
	.string "…\p"
	.string "…Oh? Those BADGES you have…\n"
	.string "Are they JOHTO GYM BADGES?\p"
	.string "If you have eight, you must be\n"
	.string "good.\p"
	.string "OK, then. Come to CERULEAN GYM.\p"
	.string "I'll be happy to take you on.\p"
	.string "I'm MISTY, the GYM LEADER in\n"
	.string "CERULEAN.$"
#endif

Route25_Text_SchoolboyDudleySeen:
#if GERMAN
	.string "Besiege alle sechs Trainer und dich\n"
	.string "erwartet ein wunderbarer Preis!\p"
	.string "Was meinst du?\n"
	.string "Glaubst du, du hast das Zeug dazu?$"
#else
	.string "Beat the six of us trainers to\n"
	.string "win a fabulous prize!\p"
	.string "Think you've got what it takes?$"
#endif

Route25_Text_SchoolboyDudleyBeaten:
#if GERMAN
	.string "Wow! Gut gemacht.$"
#else
	.string "Whoo! Good stuff.$"
#endif

Route25_Text_SchoolboyDudleyAfter:
#if GERMAN
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"
#else
	.string "I did my best.\n"
	.string "I have no regrets.$"
#endif

Route25_Text_LassEllenSeen:
#if GERMAN
	.string "Ich bin Numero 2!\n"
	.string "Jetzt wird es ernst!$"
#else
	.string "I'm second.\n"
	.string "Now it's serious!$"
#endif

Route25_Text_LassEllenBeaten:
#if GERMAN
	.string "Wie konnte ich nur verlieren?$"
#else
	.string "How could I lose?$"
#endif

Route25_Text_LassEllenAfter:
#if GERMAN
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"
#else
	.string "I did my best.\n"
	.string "I have no regrets.$"
#endif

Route25_Text_SchoolboyJoeSeen:
#if GERMAN
	.string "Ich bin Nummer 3!\n"
	.string "Mich besiegst du nicht so leicht!$"
#else
	.string "Here's No. 3!\n"
	.string "I won't be easy.$"
#endif

Route25_Text_SchoolboyJoeBeaten:
#if GERMAN
	.string "…Schnauf, schnauf! Genug, vorbei!$"
#else
	.string "Ow! Stomped flat!$"
#endif

Route25_Text_SchoolboyJoeAfter:
#if GERMAN
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"
#else
	.string "I did my best.\n"
	.string "I have no regrets.$"
#endif

Route25_Text_LassLauraSeen:
#if GERMAN
	.string "Nr. 4!\n"
	.string "Wirst du müde?$"
#else
	.string "I'm No. 4!\n"
	.string "Getting tired?$"
#endif

Route25_Text_LassLauraBeaten:
#if GERMAN
	.string "Ich habe auch verloren, was?$"
#else
	.string "I lost too…$"
#endif

Route25_Text_LassLauraAfter:
#if GERMAN
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"
#else
	.string "I did my best.\n"
	.string "I have no regrets.$"
#endif

Route25_Text_CamperLloydSeen:
#if GERMAN
	.string "O.K.! Nummer 5. Ich zermalme dich!$"
#else
	.string "OK! I'm No. 5.\n"
	.string "I'll stomp you!$"
#endif

Route25_Text_CamperLloydBeaten:
#if GERMAN
	.string "Uff! Zu stark.$"
#else
	.string "Whoa! Too much.$"
#endif

Route25_Text_CamperLloydAfter:
#if GERMAN
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"
#else
	.string "I did my best.\n"
	.string "I have no regrets.$"
#endif

Route25_Text_LassShannonSeen:
#if GERMAN
	.string "Ich bin die Letzte, aber ich warne dich!\n"
	.string "Ich bin eine harte Nuss!$"
#else
	.string "I'm the last in line, but I tell\n"
	.string "you, I'm tough!$"
#endif

Route25_Text_LassShannonBeaten:
#if GERMAN
	.string "…Ich habe was?$"
#else
	.string "You're kidding.$"
#endif

Route25_Text_LassShannonAfter:
#if GERMAN
	.string "Ich habe mein Bestes gegeben.\n"
	.string "Ich habe mir nichts vorzuwerfen.$"
#else
	.string "I did my best.\n"
	.string "I have no regrets.$"
#endif

Route25_Text_SupernerdPatSeen:
#if GERMAN
	.string "Hehehehe…\p"
	.string "Ich? Ich habe mit den sechs Trainern\n"
	.string "nichts zu tun.\p"
	.string "Du musst müde sein nach den vielen Käm-\n"
	.string "pfen. Ich habe hier auf dich gewartet,\l"
	.string "um dich zu besiegen!$"
#else
	.string "Mufufufu…\p"
	.string "I have nothing to do with the\n"
	.string "six-pack trainers.\p"
	.string "I waited here to beat you when\n"
	.string "you were tired out by all the\l"
	.string "battles.$"
#endif

Route25_Text_SupernerdPatBeaten:
#if GERMAN
	.string "Meine Güte!\n"
	.string "Machst du denn niemals eine Pause?$"
#else
	.string "Aren't you tired at all?$"
#endif

Route25_Text_SupernerdPatAfter:
#if GERMAN
	.string "Tut mir leid…\n"
	.string "Ich mogele auch niemals wieder!$"
#else
	.string "I'm sorry… I won't cheat\n"
	.string "anymore…$"
#endif

Route25_Text_CooltrainerKevinNugget:
#if GERMAN
	.string "Ganz alleine so viele Kämpfe zu\n"
	.string "überstehen, war ganz schön knifflig!\l"
	.string "Und trotzdem hast du sogar noch mit\l"
	.string "Abstand gewonnen!\p"
	.string "Hier ist dein Preis, wie versprochen!$"
#else
	.string "You took on one more battle than\n"
	.string "you expected, but you won\l"
	.string "anyway.\p"
	.string "As promised, you win a prize.$"
#endif

Route25_Text_CooltrainerKevinSeen:
#if GERMAN
	.string "…Also dann! Jetzt, wo ich dir beim\n"
	.string "Kämpfen zugesehen habe, kriege\l"
	.string "ich selbst Lust auf ein Duell.\p"
	.string "Du musst einfach gegen mich kämpfen!\n"
	.string "Und los geht’s!$"
#else
	.string "But after seeing how you battle,\n"
	.string "I want to see how I'll fare.\p"
	.string "How about it? Let me take you\n"
	.string "on.$"
#endif

Route25_Text_CooltrainerKevinBeaten:
#if GERMAN
	.string "Das war der beste\n"
	.string "Kampf meines Lebens!$"
#else
	.string "I've never had a battle this\n"
	.string "good!$"
#endif

Route25_Text_CooltrainerKevinAfter:
#if GERMAN
	.string "Der Kampf war großartig!\p"
	.string "Du und dein Pokémon-Team, ihr\n"
	.string "seid wirklich stark!$"
#else
	.string "That was a great battle!\p"
	.string "You and your POKéMON are truly\n"
	.string "outstanding!$"
#endif

Route25_Text_BillsHouseSign:
#if GERMAN
	.string "Küstenhaus\n"
	.string "Bills Haus$"
#else
	.string "SEA COTTAGE\n"
	.string "BILL'S HOUSE$"
#endif

