OneIsland_House1_Frlg_MapScripts::
	.byte 0

OneIsland_House1_EventScript_OldMan::
	msgbox OneIsland_House1_Text_GazeUponVolcanoOnSunnyDays, MSGBOX_NPC
	end

OneIsland_House1_EventScript_OldWoman::
	msgbox OneIsland_House1_Text_LastTimeMtEmberErupted, MSGBOX_NPC
	end

OneIsland_House1_Text_GazeUponVolcanoOnSunnyDays::
#if GERMAN
	.string "Wenn die Sonne scheint, gehe ich hinaus\n"
	.string "und betrachte den Vulkan!\l"
	.string "Das ist meine tägliche Routine!$"
#else
	.string "On sunny days, I step out and gaze\n"
	.string "upon the volcano.\p"
	.string "That's my daily routine.$"
#endif

OneIsland_House1_Text_LastTimeMtEmberErupted::
#if GERMAN
	.string "Lass mich nachdenken…\n"
	.string "Wann ist der Glutberg zum letzten Mal\l"
	.string "ausgebrochen?$"
#else
	.string "Let me think… When was the last\n"
	.string "time MT. EMBER erupted?$"
#endif

