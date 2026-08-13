SSAqua_RoomSSW_hns_MapScripts::
	.byte 0

SSAqua_RoomSSW_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE_HNS, SSAqua_RoomSSW_Text_FirebreatherLyleSeen, SSAqua_RoomSSW_Text_FirebreatherLyleBeaten
	msgbox SSAqua_RoomSSW_Text_FirebreatherLyleAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSSW_EventScript_Ken::
	trainerbattle_single TRAINER_KEN_HNS, SSAqua_RoomSSW_Text_BugCatcherKenSeen, SSAqua_RoomSSW_Text_BugCatcherKenBeaten
	msgbox SSAqua_RoomSSW_Text_BugCatcherKenAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSSW_Text_FirebreatherLyleSeen:
#if GERMAN
	.string "Ich gehe nach Kanto, um meine\n"
	.string "Feuerspuck-Künste vorzuführen!$"
#else
    .string "I'm going to KANTO to put\n"
    .string "on fire-breathing shows!$"
#endif

SSAqua_RoomSSW_Text_FirebreatherLyleBeaten:
#if GERMAN
	.string "Zisch… Die Flamme ist so klein…$"
#else
    .string "Fizzle… The flame's tiny…$"
#endif

SSAqua_RoomSSW_Text_FirebreatherLyleAfterBattle:
#if GERMAN
	.string "Ich vermute mal, Feuer ist schwach auf\n"
	.string "hoher See.\p"
	.string "Was, das ist egal? Ach wirklich?$"
#else
    .string "I guess fire is weak on the sea.\n"
    .string "It doesn't matter? Really?$"
#endif

SSAqua_RoomSSW_Text_BugCatcherKenSeen:
#if GERMAN
	.string "Ich besuche meine Oma, um mir ein paar\n"
	.string "Käfer-Pokémon zu fangen!$"
#else
    .string "I'm visiting my grandma to\n"
    .string "catch me some bugs!$"
#endif

SSAqua_RoomSSW_Text_BugCatcherKenBeaten:
#if GERMAN
	.string "Boah! Du bist aber stark!$"
#else
    .string "Ooh, wow. You're tough!$"
#endif

SSAqua_RoomSSW_Text_BugCatcherKenAfterBattle:
#if GERMAN
	.string "Viele Pokémon kannst du in den Bäumen\n"
	.string "von Johto finden!$"
#else
    .string "You can find lots of POKéMON\n"
    .string "in the trees of JOHTO!$"
#endif
