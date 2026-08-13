FiveIsland_Meadow_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_OnLoad
	.byte 0

FiveIsland_Meadow_OnLoad::
	call_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
	end

FiveIsland_Meadow_EventScript_WarehouseDoor::
	lockall
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_OpenWarehouseDoor
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
	releaseall
	end

FiveIsland_Meadow_EventScript_OpenWarehouseDoor::
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
	waitmessage
	delay 60
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
	special DrawWholeMapView
	playse SE_PIN
	waitse
	releaseall
	end

FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen::
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
	releaseall
	end

FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked::
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
	return

FiveIsland_Meadow_EventScript_Rocket1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_49, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_Meadow_EventScript_Rocket2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_50, FiveIsland_Meadow_Text_Rocket2Intro, FiveIsland_Meadow_Text_Rocket2Defeat
	msgbox FiveIsland_Meadow_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_Meadow_EventScript_Rocket3::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_51, FiveIsland_Meadow_Text_Rocket3Intro, FiveIsland_Meadow_Text_Rocket3Defeat
	msgbox FiveIsland_Meadow_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
	end

@ Unused
FiveIsland_Meadow_Text_DoorNeedsTwoPasswords::
	.string "とびらを　あけるには\n"
	.string "パスワードが　2つ　いるようだ$"

FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded::
#if GERMAN
	.string "{PLAYER} gab ein Passwort ein.\p"
	.string "“Arbok Kobra”\p"
	.string "…………\n"
	.string "……\p"
	.string "Um die Türe zu öffnen, wird ein\n"
	.string "weiteres Passwort benötigt!$"
#else
	.string "{PLAYER} entered a password.\p"
	.string "“GOLDEEN need log.”\p"
	.string "… …  … …  … …\p"
	.string "Another password is needed to\n"
	.string "open the door…$"
#endif

FiveIsland_Meadow_Text_EnteredPasswordDoorOpened::
#if GERMAN
	.string "{PLAYER} gab zwei Passwörter ein.\p"
	.string "“Arbok Kobra”\n"
	.string "“Makuhita Atihu kam”\p"
	.string "… …  … …  … …\p"
	.string "Die Türe zum Lager ist offen!$"
#else
	.string "{PLAYER} entered two passwords.\p"
	.string "“GOLDEEN need log.”\n"
	.string "“Yes, nah, CHANSEY.”\p"
	.string "… …  … …  … …\p"
	.string "The WAREHOUSE's door opened!$"
#endif

FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen::
#if GERMAN
	.string "Die Türe zum Lager ist bereits\n"
	.string "offen.$"
#else
	.string "The WAREHOUSE's door is already\n"
	.string "open.$"
#endif

FiveIsland_Meadow_Text_Rocket1Intro::
#if GERMAN
	.string "Zutritt zu diesem Gebiet untersagt!\n"
	.string "Raus, raus!$"
#else
	.string "This area's strictly off-limits!\n"
	.string "Out, out!$"
#endif

FiveIsland_Meadow_Text_Rocket1Defeat::
#if GERMAN
	.string "Ist das wahr?$"
#else
	.string "Is this for real?$"
#endif

FiveIsland_Meadow_Text_Rocket1PostBattle::
#if GERMAN
	.string "Du hast hier nichts verloren!\n"
	.string "Geh nach Hause!$"
#else
	.string "You don't have any business here!\n"
	.string "Go home!$"
#endif

FiveIsland_Meadow_Text_Rocket2Intro::
#if GERMAN
	.string "Hier gibt es nichts weiter, außer\n"
	.string "unserem Lager.\p"
	.string "Also, was hast du hier zu suchen?$"
#else
	.string "There's nothing past here except\n"
	.string "our WAREHOUSE.\p"
	.string "So what brings you here?$"
#endif

FiveIsland_Meadow_Text_Rocket2Defeat::
#if GERMAN
	.string "Das sollte nicht geschehen…$"
#else
	.string "That wasn't supposed to happen…$"
#endif

FiveIsland_Meadow_Text_Rocket2PostBattle::
#if GERMAN
	.string "Du möchtest wissen, was im Lager ist?\p"
	.string "Es ist besser, du weißt das nicht.\n"
	.string "Zu deinem Besten, versteht sich!$"
#else
	.string "You're wanting to know what's inside\n"
	.string "this WAREHOUSE?\p"
	.string "It's better you didn't know.\n"
	.string "For your own sake, I mean.$"
#endif

FiveIsland_Meadow_Text_Rocket3Intro::
#if GERMAN
	.string "Du verschwendest Zeit, auch wenn du an\n"
	.string "mir vorbei kommst.$"
#else
	.string "You'd be wasting time even if you\n"
	.string "were to get by me.$"
#endif

FiveIsland_Meadow_Text_Rocket3Defeat::
#if GERMAN
	.string "Oh, das macht mich wütend!$"
#else
	.string "Oh, that makes me furious!$"
#endif

FiveIsland_Meadow_Text_Rocket3PostBattle::
#if GERMAN
	.string "Du kommst ohne die Passwörter\n"
	.string "ohnehin nicht hinein.$"
#else
	.string "You won't be able to get in without\n"
	.string "the passwords anyway.$"
#endif

