PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume:
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

PacifidlogTown_EventScript_NinjaBoy::
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Girl::
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman::
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign::
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

PacifidlogTown_Text_FastRunningCurrent:
#if GERMAN
	.string "Im Meer zwischen Flossbrunn und\n"
	.string "Graphitport City befinden sich\l"
	.string "reißende Strömungen.\p"
	.string "Wenn du dort Surfer einsetzt, kann es\n"
	.string "sein, dass du fortgetrieben wirst.$"
#else
	.string "The sea between PACIFIDLOG and\n"
	.string "SLATEPORT has a fast-running tide.\p"
	.string "If you decide to SURF, you could end\n"
	.string "up swept away somewhere else.$"
#endif

PacifidlogTown_Text_NeatHousesOnWater:
#if GERMAN
	.string "Schau mal. Ist das nicht hübsch?\n"
	.string "Die Häuser stehen auf dem Wasser.\p"
	.string "Ich wurde hier geboren.$"
#else
	.string "See, isn't it neat?\n"
	.string "These houses are on water!\p"
	.string "I was born here!$"
#endif

PacifidlogTown_Text_SkyPillarTooScary:
#if GERMAN
	.string "Der Himmelturm?\p"
	.string "Ach, du meinst bestimmt diesen hohen,\n"
	.string "hohen Turm, der sich hier in der Nähe\l"
	.string "befindet.\p"
	.string "Also, wenn du mich fragst - ich würde\n"
	.string "niemals da hochgehen. Da hätte ich\n"
	.string "viel\l"
	.string "zu viel Angst, weil das so hoch ist!\p"
	.string "Leben auf Höhe des Meeresspiegels in\n"
	.string "Flossbrunn, das ist mein Ding.$"
#else
	.string "The SKY PILLAR?\p"
	.string "…Oh, you must mean that tall, tall\n"
	.string "tower a little further out.\p"
	.string "If you asked me, I wouldn't climb it.\n"
	.string "It's too scary to get up that high.\p"
	.string "Life at sea level in PACIFIDLOG,\n"
	.string "that suits me fine.$"
#endif

PacifidlogTown_Text_TownSign:
#if GERMAN
	.string "Flossbrunn\p"
	.string "“Wo die Morgensonne ein Lächeln auf\n"
	.string "das Meer zaubert.”$"
#else
	.string "PACIFIDLOG TOWN\p"
	.string "“Where the morning sun smiles upon\n"
	.string "the waters.”$"
#endif

