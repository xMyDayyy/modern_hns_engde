Route2_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route2_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route2_EventScript_Rob::
	trainerbattle_single TRAINER_ROB_HNS, Route2_Text_BugCatcherRob_Seen, Route2_Text_BugCatcherRob_Beaten, Route2_EventScript_RegisterRob
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route2_EventScript_RematchRob
	msgbox Route2_Text_BugCatcherRob_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_RegisterRob::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route2_Text_RobRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ROB_HNS
	release
	end

Route2_EventScript_RematchRob::
	trainerbattle_rematch TRAINER_ROB_HNS, Route2_Text_RobRematchIntro, Route2_Text_RobRematchDefeat
	msgbox Route2_Text_RobPostRematch, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Ed::
	trainerbattle_single TRAINER_ED_HNS, Route2_Text_BugCatcherEd_Seen, Route2_Text_BugCatcherEd_Beaten
	msgbox Route2_Text_BugCatcherEd_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Doug::
	trainerbattle_single TRAINER_DOUG_HNS, Route2_Text_BugCatcherDoug_Seen, Route2_Text_BugCatcherDoug_Beaten
	msgbox Route2_Text_BugCatcherDoug_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route2_EventScript_Sign::
	msgbox Route2_Text_Sign, MSGBOX_SIGN
	end

Route2_EventScript_CaveSign::
	msgbox Route2_Text_DiglettsCaveSign, MSGBOX_SIGN
	end

Route2_EventScript_Carbos::
    finditem ITEM_CARBOS
    end

Route2_EventScript_Nugget::
    finditem ITEM_NUGGET
    end

Route2_Text_RobRegister:
#if GERMAN
    .string "Lass mich deine Nummer\n"
    .string "eintragen!$"
#else
	.string "Let me get your number!$"
#endif

Route2_Text_RobRematchIntro:
#if GERMAN
    .string "Ich habe noch mehr Käfer-Pokémon\n"
    .string "gefangen! Sieh sie dir an!$"
#else
	.string "I've caught even more bugs!\n"
	.string "Check them out!$"
#endif

Route2_Text_RobRematchDefeat:
#if GERMAN
    .string "Ich brauche bessere Käfer-Pokémon!$"
#else
	.string "I need better bugs!$"
#endif

Route2_Text_RobPostRematch:
#if GERMAN
	.string "Ich habe jedes Käfer-Pokémon in\n"
	.string "{COLOR RED}Vertania City{COLOR DARK_GRAY} gefangen.\p"
	.string "Gibt es irgendwo einen noch\n"
	.string "besseren Wald?$"
#else
	.string "I caught every bug in VIRIDIAN.\n"
	.string "Is there a better FOREST somewhere?$"
#endif

Route2_Text_BugCatcherRob_Seen:
#if GERMAN
	.string "Pass bloß auf!\n"
	.string "Meine Käfer-Pokémon sind zäh!$"
#else
	.string "My bug POKéMON are tough. Prepare to\n"
	.string "lose!$"
#endif

Route2_Text_BugCatcherRob_Beaten:
#if GERMAN
	.string "Du hast mich erwischt!$"
#else
	.string "I was whipped…$"
#endif

Route2_Text_BugCatcherRob_AfterBattle:
#if GERMAN
	.string "Ich werde mir stärkere\n"
	.string "Käfer-Pokémon suchen!$"
#else
	.string "I'm going to look for stronger bug\n"
	.string "POKéMON.$"
#endif

Route2_Text_BugCatcherEd_Seen:
#if GERMAN
	.string "Zerkratzt du dir nicht deine Beine, wenn\n"
	.string "du in Shorts durchs hohe Gras läufst?$"
#else
	.string "If you walk in tall grass wearing\n"
	.string "shorts, do you get nicks and cuts?$"
#endif

Route2_Text_BugCatcherEd_Beaten:
#if GERMAN
	.string "Aua, aua, aua!$"
#else
	.string "Ouch, ouch, ouch!$"
#endif

Route2_Text_BugCatcherEd_AfterBattle:
#if GERMAN
	.string "So richtig spürt man den Schmerz erst,\n"
	.string "wenn man danach ein Bad nimmt!$"
#else
	.string "They'll really sting when you take a\n"
	.string "bath.$"
#endif

Route2_Text_BugCatcherDoug_Seen:
#if GERMAN
	.string "Warum mögen Mädchen\n"
	.string "keine Käfer-Pokémon?$"
#else
	.string "Why don't girls like bug POKéMON?$"
#endif

Route2_Text_BugCatcherDoug_Beaten:
#if GERMAN
	.string "Das ging wohl nach hinten los.$"
#else
	.string "No good!$"
#endif

Route2_Text_BugCatcherDoug_AfterBattle:
#if GERMAN
	.string "Dieses Gefühl, wenn man ein Käfer-\n"
	.string "Pokémon auf den Bauch drückt…\l"
	.string "Sie sind ganz weich und knubbelig!\l"
	.string "Das mag ich so an ihnen!$"
#else
	.string "Bug POKéMON squish like plush toys\n"
	.string "when you squeeze their bellies.\p"
	.string "I love how they feel!$"
#endif

Route2_Text_Sign:
#if GERMAN
	.string "Route 2\p"
	.string "Vertania City - Marmoria City$"
#else
	.string "ROUTE 2\p"
	.string "VIRIDIAN CITY - PEWTER CITY$"
#endif

Route2_Text_DiglettsCaveSign:
#if GERMAN
	.string "Digdas Höhle$"
#else
	.string "DIGLETT'S CAVE$"
#endif

