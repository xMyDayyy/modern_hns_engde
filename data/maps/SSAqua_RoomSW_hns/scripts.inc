SSAqua_RoomSW_hns_MapScripts::
	.byte 0

SSAqua_RoomSW_EventScript_Cassie::
	trainerbattle_single TRAINER_CASSIE_HNS, SSAqua_RoomSW_Text_BeautyCassieSeen, SSAqua_RoomSW_Text_BeautyCassieBeaten
	msgbox SSAqua_RoomSW_Text_BeautyCassieAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSW_EventScript_Clyde::
	trainerbattle_single TRAINER_CLYDE_HNS, SSAqua_RoomSW_Text_GuitaristClydeSeen, SSAqua_RoomSW_Text_GuitaristClydeBeaten
	msgbox SSAqua_RoomSW_Text_GuitaristClydeAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSW_Text_BeautyCassieSeen:
#if GERMAN
	.string "Im Pokémon-Kampf vergesse ich meinen\n"
	.string "Schmerz! Lass uns kämpfen!$"
#else
    .string "I'm trying to forget my woes.\n"
    .string "Let's battle!$"
#endif

SSAqua_RoomSW_Text_BeautyCassieBeaten:
#if GERMAN
	.string "Mein Herz weint…$"
#else
    .string "My heart weeps…$"
#endif

SSAqua_RoomSW_Text_BeautyCassieAfterBattle:
#if GERMAN
	.string "Es geht nichts über eine Schiffsreise,\n"
	.string "um ein gebrochenes Herz zu vergessen.\p"
	.string "Eine Reise mit dem Schnellboot ist für\n"
	.string "solchen Kummer zu kurz.$"
#else
    .string "A voyage is best for getting over\n"
    .string "a broken heart.\p"
    .string "But a FAST SHIP trip is too short\n"
    .string "for grieving.$"
#endif

SSAqua_RoomSW_Text_GuitaristClydeSeen:
#if GERMAN
	.string "Ich werde meine Lieder beim\n"
	.string "Radiosender in Dukatia City vorspielen.$"
#else
    .string "I'm going to audition my songs\n"
    .string "at GOLDENROD's RADIO STATION.$"
#endif

SSAqua_RoomSW_Text_GuitaristClydeBeaten:
#if GERMAN
	.string "Autsch! Total verzerrt!$"
#else
    .string "Yowza! Total distortion!$"
#endif

SSAqua_RoomSW_Text_GuitaristClydeAfterBattleMobile:
#if GERMAN
	.string "Ich wollte mein\n"
	.string "Debut im Duellturm geben…\p"
	.string "Ich sollte nach\n"
	.string "Orania City zurückgehen und härter\l"
	.string "trainieren…$"
#else
    .string "I was going to make my debut at\n"
    .string "the BATTLE TOWER…\p"
    .string "I should go back to VERMILION and\n"
    .string "redo my training…$"
#endif

SSAqua_RoomSW_Text_GuitaristClydeAfterBattle:
#if GERMAN
	.string "Apropos Radiostation: Wie\p"
	.string "lauten die\n"
	.string "Glückszahlen für diese Woche?$"
#else
    .string "Speaking of the RADIO STATION,\n"
    .string "what's this week's lucky number?$"
#endif
