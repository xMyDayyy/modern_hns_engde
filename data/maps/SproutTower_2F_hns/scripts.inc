SproutTower_2F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SproutTower_2F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

SproutTower_2F_OnTransition:
	callnative SetTimeBasedEncounters
	end

SproutTower_2F_EventScript_SageNico::
	trainerbattle_single TRAINER_NICO_HNS, SproutTower_Text_SageNico_Seen, SproutTower_Text_SageNico_Beaten
	msgbox SproutTower_Text_SageNico_AfterBattle, MSGBOX_AUTOCLOSE
	end

SproutTower_2F_EventScript_SageEdmond::
	trainerbattle_single TRAINER_EDMOND_HNS, SproutTower_Text_SageEdmond_Seen, SproutTower_Text_SageEdmond_Beaten
	msgbox SproutTower_Text_SageEdmond_AfterBattle, MSGBOX_AUTOCLOSE
	end

SproutTower_2F_EventScript_Statue::
	lock
	msgbox SproutTower_Text_2F_Statue, MSGBOX_AUTOCLOSE
	release
	end

SproutTower_2F_EventScript_Xdefend::
	finditem ITEM_X_DEFEND
	end

SproutTower_Text_SageNico_Seen:
#if GERMAN
	.string "So sehr wir hier auch wüten,\n"
	.string "der Turm steht felsenfest!$"
#else
	.string "However hard we battle,\n"
	.string "the TOWER will stand strong.$"
#endif

SproutTower_Text_SageNico_Beaten:
#if GERMAN
	.string "Ich habe hart gekämpft,\n"
	.string "doch ich war einfach zu schwach.$"
#else
	.string "I fought hard but I'm too weak.$"
#endif

SproutTower_Text_SageNico_AfterBattle:
#if GERMAN
	.string "Aufgrund der flexiblen Säule\n"
	.string "ist der Turm erdbebensicher.$"
#else
	.string "The flexible pillar protects the\n"
	.string "TOWER, even from earthquakes.$"
#endif

SproutTower_Text_SageEdmond_Seen:
#if GERMAN
	.string "…Zittere wie\n"
	.string "Laub im Wind!$"
#else
	.string "…Sway like leaves in the wind…$"
#endif

SproutTower_Text_SageEdmond_Beaten:
#if GERMAN
	.string "Mein Wille ist schwach!$"
#else
	.string "Oh, I'm weak!$"
#endif

SproutTower_Text_SageEdmond_AfterBattle:
#if GERMAN
	.string "Ich habe versucht, die eleganten\n"
	.string "Bewegungen von Knofensa nachzuahmen…\l"
	.string "Aber ich habe nicht genug trainiert.$"
#else
	.string "I tried to copy BELLSPROUT's\n"
	.string "gentle movements for battle…\p"
	.string "But I didn't train well enough.$"
#endif

SproutTower_Text_2F_Statue:
#if GERMAN
	.string "Eine Pokémon-Statue…\n"
	.string "Sie sieht sehr erhaben aus.$"
#else
	.string "A POKéMON statue…\p"
	.string "It looks very distinguished.$"
#endif
