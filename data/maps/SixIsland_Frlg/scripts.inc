SixIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_OnTransition
	.byte 0

SixIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND
	end

SixIsland_EventScript_Hiker::
	msgbox SixIsland_Text_ThatWayToWaterPathRuinValley, MSGBOX_NPC
	end

SixIsland_EventScript_Boy::
	msgbox SixIsland_Text_SkyAtNightIsFantastic, MSGBOX_NPC
	end

SixIsland_EventScript_IslandSign::
	msgbox SixIsland_Text_IslandSign, MSGBOX_SIGN
	end

SixIsland_Text_IslandSign::
#if GERMAN
	.string "Eiland Sechs\n"
	.string "Schicksalsinsel der Alten Weisheit$"
#else
	.string "SIX ISLAND\n"
	.string "Fortune Island of Aged Wisdom$"
#endif

SixIsland_Text_ThatWayToWaterPathRuinValley::
#if GERMAN
	.string "Laufe hier weiter und du erreichst\n"
	.string "den Wasserweg.\p"
	.string "Wenn du dann noch weiter läufst,\n"
	.string "erreichst du das Ruinental.$"
#else
	.string "Keep going this way and you'll get\n"
	.string "to the WATER PATH.\p"
	.string "Stay on that and you'll get to\n"
	.string "the RUIN VALLEY.$"
#endif

SixIsland_Text_SkyAtNightIsFantastic::
#if GERMAN
	.string "Wenn man so weit weg von der\n"
	.string "Stadt ist, sieht der Himmel\l"
	.string "fantastisch aus.$"
#else
	.string "When you're this far away from the\n"
	.string "city, the sky at night is fantastic.$"
#endif

