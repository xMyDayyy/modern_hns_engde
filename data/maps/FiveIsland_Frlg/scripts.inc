FiveIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_OnTransition
	.byte 0

FiveIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND
	end

FiveIsland_EventScript_IslandSign::
	msgbox FiveIsland_Text_IslandSign, MSGBOX_SIGN
	end

FiveIsland_EventScript_BugCatcher::
	msgbox FiveIsland_Text_WeirdBuildingInMeadow, MSGBOX_NPC
	end

FiveIsland_EventScript_Fisher::
	msgbox FiveIsland_Text_BeenGettingBusierAroundHere, MSGBOX_NPC
	end

FiveIsland_Text_IslandSign::
#if GERMAN
	.string "Eiland Fünf\n"
	.string "Chrono-Insel: Wo die Zeit rennt$"
#else
	.string "FIVE ISLAND\n"
	.string "Chrono Island: Where Time Goes$"
#endif

FiveIsland_Text_WeirdBuildingInMeadow::
#if GERMAN
	.string "Igitt, das stinkt! Ich wollte auf\n"
	.string "der Weide spielen.\p"
	.string "Aber sie haben dort ein merkwürdiges\n"
	.string "Gebäude errichtet und ich kann dort\l"
	.string "nicht spielen.$"
#else
	.string "Oh, this stinks. I wanted to play in\n"
	.string "the MEADOW.\p"
	.string "But they put up a weird building\n"
	.string "on it, so I can't play there.$"
#endif

FiveIsland_Text_BeenGettingBusierAroundHere::
#if GERMAN
	.string "Hier wurde es in letzter Zeit\n"
	.string "geschäftiger.\p"
	.string "Ich habe auch in letzter Zeit\n"
	.string "nicht viele gute Fische gefangen.$"
#else
	.string "It's been getting busier around\n"
	.string "these parts lately.\p"
	.string "I haven't been catching many good\n"
	.string "fish lately, either.$"
#endif

