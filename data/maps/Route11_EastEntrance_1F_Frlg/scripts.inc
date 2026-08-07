Route11_EastEntrance_1F_Frlg_MapScripts::
	.byte 0

Route11_EastEntrance_1F_EventScript_TopGuard::
	msgbox Route11_EastEntrance_1F_Text_ManInLavenderRatesNames, MSGBOX_NPC
	end

Route11_EastEntrance_1F_EventScript_BottomGuard::
	msgbox Route11_EastEntrance_1F_Text_RockTunnelToReachLavender, MSGBOX_NPC
	end

@ Unclear where this is originally from
Route11_EastEntrance_1F_Text_BagIsFull::
	.string "{PLAYER}{KUN}の　バッグ\n"
	.string "いっぱい　みたい　だね$"

Route11_EastEntrance_1F_Text_ManInLavenderRatesNames::
#if GERMAN
	.string "Je mehr Pokémon man fängt, desto\n"
	.string "schwieriger wird es, ihnen allen\l"
	.string "Spitznamen zu geben!\p"
	.string "In Lavandia lebt ein Mann, der\n"
	.string "Spitznamen von Pokémon bewertet.\p"
	.string "Er nimmt auch Namensänderungen\n"
	.string "vor!$"
#else
	.string "Don't you think it's hard to think\n"
	.string "up good names for POKéMON?\p"
	.string "Especially if you've caught a\n"
	.string "whole bunch?\p"
	.string "In LAVENDER TOWN, there's a man\n"
	.string "who rates POKéMON nicknames.\p"
	.string "He can even help you rename your\n"
	.string "POKéMON, too.$"
#endif

Route11_EastEntrance_1F_Text_RockTunnelToReachLavender::
#if GERMAN
	.string "Falls du nach Lavandia möchtest,\n"
	.string "empfehle ich dir den Felstunnel.\p"
	.string "Du kannst den Felstunnel von\n"
	.string "Azuria City aus erreichen.$"
#else
	.string "If you're aiming to reach LAVENDER\n"
	.string "TOWN, take ROCK TUNNEL.\p"
	.string "You can get to ROCK TUNNEL from\n"
	.string "CERULEAN CITY.$"
#endif

