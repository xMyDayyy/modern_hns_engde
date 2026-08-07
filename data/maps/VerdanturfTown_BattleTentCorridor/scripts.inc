VerdanturfTown_BattleTentCorridor_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentCorridor_OnFrame
	.byte 0

VerdanturfTown_BattleTentCorridor_OnFrame:
	map_script_2 VAR_TEMP_0, 0, VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor
	.2byte 0

VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor::
	lockall
	setvar VAR_TEMP_0, 1
	applymovement LOCALID_VERDANTURF_TENT_CORRIDOR_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
	waitmovement 0
	opendoor 2, 1
	waitdooranim
	applymovement LOCALID_VERDANTURF_TENT_CORRIDOR_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor
	waitmovement 0
	closedoor 2, 1
	waitdooranim
	setvar VAR_0x8006, 0
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM, 6, 5
	waitstate
	releaseall
	end

VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor:
	walk_up
VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor:
	walk_up
	set_invisible
	step_end


@ Leftover text from when this was a Contest Hall in R/S
@ Unused
VerdanturfTown_ContestHall_Text_WhichContestYouEntering:
#if GERMAN
	.string "An welchem Wettbewerb nimmst du teil?\n"
	.string "Möchtest du einen Rat?\p"
	.string "Bei jedem Wettbewerb, zum Beispiel\n"
	.string "einem Anmutwettbewerb, wird im ersten\l"
	.string "Durchlauf nicht nur die Anmut bewertet.\p"
	.string "Du musst Wege finden, deine Pokémon\n"
	.string "besser aufzuziehen.$"
#else
	.string "Which CONTEST are you entering?\n"
	.string "Want a piece of advice?\p"
	.string "In any CONTEST, for example, a CUTE\n"
	.string "CONTEST, I don't think they judge you\l"
	.string "only on cuteness in the first round.\p"
	.string "You need to work out ways for raising\n"
	.string "POKéMON better.$"
#endif

@ Unused
VerdanturfTown_ContestHall_Text_RaisedMonToBeCute:
#if GERMAN
	.string "Ich habe mein Pokémon anmutig\n"
	.string "aufgezogen.\p"
	.string "Ich habe herausgefunden, dass man mit\n"
	.string "Pokémon an einem Anmutwettbewerb\l"
	.string "teilnehmen kann!\p"
	.string "Wie gut, dass ich mein Pokémon mit so\n"
	.string "viel Liebe aufgezogen habe…$"
#else
	.string "I raised my POKéMON to be cute.\p"
	.string "I found out you can put POKéMON in\n"
	.string "a CONTEST for cuteness!\p"
	.string "I'm so glad I raised my POKéMON with\n"
	.string "loving care…$"
#endif

@ Unused
VerdanturfTown_ContestHall_Text_MyMonRules:
#if GERMAN
	.string "Mein Pokémon ist spitze!\p"
	.string "Es ist cool, stark und dabei schön,\n"
	.string "anmutig und klug. Einfach perfekt!\p"
	.string "Da kann ich auch gleich jeden\n"
	.string "einzelnen Wettbewerb gewinnen wollen.$"
#else
	.string "My POKéMON rules!\p"
	.string "It's cool, tough yet beautiful, cute,\n"
	.string "and smart. It's complete!\p"
	.string "I may as well go for wins in every\n"
	.string "single CONTEST.$"
#endif

@ Unused
VerdanturfTown_ContestHall_Text_NormalRankStage:
#if GERMAN
	.string "Pokémon Contests\n"
	.string "Normal Rank Stage!$"
#else
	.string "POKéMON CONTESTS\n"
	.string "NORMAL RANK STAGE!$"
#endif

