Route18_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route18_OnWarp
	.byte 0

Route18_OnTransition::
	call_if_eq VAR_MAP_SCENE_ROUTE16, 1, Route18_OnTransitionCyclingRoad
	end

Route18_OnTransitionCyclingRoad::
	setflag FLAG_SYS_ON_CYCLING_ROAD
	return

Route18_OnWarp::
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route18_OnWarpCyclingRoad
	.2byte 0

Route18_OnWarpCyclingRoad::
	special ForcePlayerOntoBike
	end

Route18_EventScript_RouteSign::
	msgbox Route18_Text_RouteSign, MSGBOX_SIGN
	end

Route18_EventScript_CyclingRoadSign::
	msgbox Route18_Text_CyclingRoadSign, MSGBOX_SIGN
	end

Route18_Text_WiltonIntro::
#if GERMAN
	.string "Ich laufe überall durch hohes\n"
	.string "Gras, um Pokémon aufzuspüren!$"
#else
	.string "I always check every grassy area\n"
	.string "for new POKéMON.$"
#endif

Route18_Text_WiltonDefeat::
#if GERMAN
	.string "Also so was!$"
#else
	.string "Tch!$"
#endif

Route18_Text_WiltonPostBattle::
#if GERMAN
	.string "Wenn ich nur ein Fahrrad hätte!$"
#else
	.string "I wish I had a BIKE!$"
#endif

Route18_Text_RamiroIntro::
#if GERMAN
	.string "Guruguu!\n"
	.string "Wie klingt mein Vogellockruf?$"
#else
	.string "Kurukkoo!\n"
	.string "How do you like my birdcall?$"
#endif

Route18_Text_RamiroDefeat::
#if GERMAN
	.string "Ich musste mit dir kämpfen!$"
#else
	.string "I had to bug you!$"
#endif

Route18_Text_RamiroPostBattle::
#if GERMAN
	.string "Am Wochenende sammle ich immer\n"
	.string "Wasser-Pokémon!$"
#else
	.string "I collect sea POKéMON on weekends\n"
	.string "because the sea is so close.$"
#endif

Route18_Text_JacobIntro::
#if GERMAN
	.string "Das hier ist mein Gebiet!\n"
	.string "Sieh zu, dass du Land gewinnst!$"
#else
	.string "This is my turf!\n"
	.string "Get out of here!$"
#endif

Route18_Text_JacobDefeat::
#if GERMAN
	.string "Verdammt!$"
#else
	.string "Darn!$"
#endif

Route18_Text_JacobPostBattle::
#if GERMAN
	.string "Hier habe ich sehr gerne Pokémon\n"
	.string "gejagt!$"
#else
	.string "This is my fave area for catching\n"
	.string "POKéMON.$"
#endif

Route18_Text_RouteSign::
#if GERMAN
	.string "Route 18\n"
	.string "Prismania City - Fuchsania City$"
#else
	.string "ROUTE 18\n"
	.string "CELADON CITY - FUCHSIA CITY$"
#endif

Route18_Text_CyclingRoadSign::
#if GERMAN
	.string "Das Betreten des Radweges ist\n"
	.string "Fußgängern untersagt!$"
#else
	.string "CYCLING ROAD\n"
	.string "No pedestrians permitted!$"
#endif

