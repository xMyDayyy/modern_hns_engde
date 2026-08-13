SixIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SixIsland_PokemonCenter_1F_OnFrame
	.byte 0

SixIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_SIX_ISLAND
	call_if_eq VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_ShowRival
	end

SixIsland_PokemonCenter_1F_EventScript_ShowRival::
	clearflag FLAG_HIDE_SIX_ISLAND_POKECENTER_RIVAL
	return

SixIsland_PokemonCenter_1F_OnFrame::
	map_script_2 VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_RivalScene
	.2byte 0

SixIsland_PokemonCenter_1F_EventScript_RivalScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_Delay48
	waitmovement 0
	delay 25
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalApproach
	waitmovement 0
	msgbox SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere
	closemessage
	applymovement LOCALID_PLAYER, SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalExit
	waitmovement 0
	fadedefaultbgm
	playse SE_EXIT
	delay 35
	removeobject LOCALID_SIX_ISLAND_RIVAL
	setvar VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 1
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
	releaseall
	end

SixIsland_PokemonCenter_1F_Movement_RivalApproach::
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

SixIsland_PokemonCenter_1F_Movement_RivalExit::
	delay_16
	delay_4
	walk_down
	step_end

SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit::
	walk_left
	walk_in_place_faster_right
	step_end

SixIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

SixIsland_PokemonCenter_1F_EventScript_Hiker::
	msgbox SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland, MSGBOX_NPC
	end

SixIsland_PokemonCenter_1F_EventScript_OldMan::
	msgbox SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem, MSGBOX_NPC
	end

SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland::
#if GERMAN
	.string "Seit zehn Jahren erforsche ich die\n"
	.string "Ruinen.\p"
	.string "Nein, es sind zwanzig.\p"
	.string "Ich habe das Gefühl, dass auf die-\n"
	.string "ser Insel irgendein Geheimnis ist.$"
#else
	.string "For ten years, I've searched for\n"
	.string "RUINS.\p"
	.string "No, make that twenty years.\p"
	.string "I get this feeling that there's\n"
	.string "something hidden on this island.$"
#endif

SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem::
#if GERMAN
	.string "Du weißt, dass es Pokémon gibt, die sich\n"
	.string "nur beim Tausch entwickeln?\l"
	.string "Aber wusstest du, dass es sogar noch\l"
	.string "speziellere Pokémon gibt?\l"
	.string "Einige Pokémon entwickeln sich nur,\l"
	.string "wenn sie beim Tausch ein spezielles\l"
	.string "Item tragen.$"
#else
	.string "You know of POKéMON that evolve\n"
	.string "only upon trading, yes?\p"
	.string "But did you know that there are\n"
	.string "still others?\p"
	.string "Some POKéMON evolve only when\n"
	.string "traded while holding specific items.$"
#endif

SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere::
#if GERMAN
	.string "{RIVAL}: Heh {PLAYER}!\n"
	.string "Wie ist es um deinen Pokédex bestellt?\l"
	.string "Es scheint unmöglich zu sein, alle\l"
	.string "Pokémon zu finden, wenn man sich nur\l"
	.string "hier aufhält.\l"
	.string "Vielleicht gibt es irgendwo Pkmn, über\l"
	.string "die wir nichts wissen…\p"
	.string "…………\n"
	.string "…………\l"
	.string "…\l"
	.string "Nun, wenn ich das nicht erledigen kann,\l"
	.string "musst du das übernehmen.\p"
	.string "Ich werde daran nicht verzweifeln.\p"
	.string "Ich sammle Pokémon in meinem\n"
	.string "Tempo, während ich sie trainiere.\p"
	.string "Das mache ich!\n"
	.string "Also macht es für mich keinen Sinn hier\l"
	.string "zu bleiben. Ich gehe nach Hause!\p"
	.string "Das wars!\n"
	.string "Bis demnächst!$"
#else
	.string "{RIVAL}: Hey, {PLAYER}!\n"
	.string "How's your POKéDEX filling up?\p"
	.string "It looks like it's impossible to get\n"
	.string "all the POKéMON by hanging around\l"
	.string "just these parts.\p"
	.string "Maybe there are POKéMON we don't\n"
	.string "know about somewhere far away…\p"
	.string "… … …  … … …  … … …\p"
	.string "Well, if I can't do it, there's no\n"
	.string "way for you to get it done.\p"
	.string "I'm not going to get all desperate\n"
	.string "over this.\p"
	.string "I'll keep collecting POKéMON at my\n"
	.string "own pace while I train them.\p"
	.string "That's what I'll do.\n"
	.string "So there's no point staying here.\l"
	.string "I may as well leave for home.\p"
	.string "That's that, then!\n"
	.string "Smell ya later!$"
#endif

