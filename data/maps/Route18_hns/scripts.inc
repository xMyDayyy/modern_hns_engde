Route18_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route18_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route18_EventScript_Trigger_HideKecleon0::
	setvar VAR_TEMP_0, 1
	setflag FLAG_TEMP_1
	removeobject LOCALID_ROUTE18_KECLEON0
	end

Route18_EventScript_Trigger_HideKecleon1::
	setvar VAR_TEMP_1, 1
	setflag FLAG_TEMP_2
	removeobject LOCALID_ROUTE18_KECLEON1
	end

Route18_EventScript_Boris::
	trainerbattle_single TRAINER_BORIS_HNS, Route18_Text_BirdKeeperBorisSeen, Route18_Text_BirdKeeperBorisBeaten
	msgbox Route18_Text_BirdKeeperBorisAfterBattle, MSGBOX_AUTOCLOSE
	end

Route18_EventScript_Bob::
	trainerbattle_single TRAINER_BOB_HNS, Route18_Text_BirdKeeperBobSeen, Route18_Text_BirdKeeperBobBeaten
	msgbox Route18_Text_BirdKeeperBobAfterBattle, MSGBOX_AUTOCLOSE
	end

Route18_EventScript_Sign::
	msgbox Route18_Text_Sign, MSGBOX_SIGN
	end

Route18_Text_BirdKeeperBorisSeen:
#if GERMAN
	.string "Wenn du nach Pokémon suchst,\n"
	.string "musst du ins hohe Gras gehen.\l"
	.string "Der Rest ergibt sich von allein!$"
#else
	.string "If you're looking for POKéMON,\n"
	.string "you have to look in the tall grass.$"
#endif

Route18_Text_BirdKeeperBorisBeaten:
#if GERMAN
	.string "Yippi!$"
#else
	.string "Ayieee!$"
#endif

Route18_Text_BirdKeeperBorisAfterBattle:
#if GERMAN
	.string "Wenn man so stark ist wie du,\n"
	.string "macht das Kämpfen sicher Spaß.$"
#else
	.string "Since you're so strong, it must be\n"
	.string "fun to battle.$"
#endif

Route18_Text_BirdKeeperBobSeen:
#if GERMAN
	.string "Der Radweg ist eine Abkürzung\n"
	.string "nach {COLOR RED}Prismania City{COLOR DARK_GRAY}.$"
#else
	.string "CYCLING ROAD is a quick shortcut\n"
	.string "to CELADON.$"
#endif

Route18_Text_BirdKeeperBobBeaten:
#if GERMAN
	.string "…Uff!$"
#else
	.string "…Whew!$"
#endif

Route18_Text_BirdKeeperBobAfterBattle:
#if GERMAN
	.string "Um die Abkürzung zu nehmen, musst\n"
	.string "du dir schon ein Fahrrad besorgen!$"
#else
	.string "If you don't have a BICYCLE,\n"
	.string "you're not allowed to use the\l"
	.string "shortcut.$"
#endif

Route18_Text_Sign:
#if GERMAN
	.string "Route 18\p"
	.string "Prismania City - Fuchsania City$"
#else
	.string "ROUTE 18\p"
	.string "CELADON CITY - FUCHSIA CITY$"
#endif
