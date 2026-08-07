PokemonTower_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonTower_1F_OnTransition
	.byte 0

PokemonTower_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_POKEMON_TOWER_1F
	end

PokemonTower_1F_EventScript_Channeler::
	msgbox PokemonTower_1F_Text_SenseSpiritsUpToMischief, MSGBOX_NPC
	end

PokemonTower_1F_EventScript_Woman1::
	msgbox PokemonTower_1F_Text_GrowlitheWhyDidYouDie, MSGBOX_NPC
	end

PokemonTower_1F_EventScript_BaldingMan::
	msgbox PokemonTower_1F_Text_CameToPrayForDepartedClefairy, MSGBOX_NPC
	end

PokemonTower_1F_EventScript_Woman2::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, PokemonTower_1F_EventScript_Woman2MalePlayer
	msgbox PokemonTower_1F_Text_ComeToPayRespectsGirl
	release
	end

PokemonTower_1F_EventScript_Woman2MalePlayer::
	msgbox PokemonTower_1F_Text_ComeToPayRespectsSon
	release
	end

PokemonTower_1F_EventScript_WorkerF::
	msgbox PokemonTower_1F_Text_ErectedInMemoryOfDeadMons, MSGBOX_NPC
	end

PokemonTower_1F_Text_ErectedInMemoryOfDeadMons::
#if GERMAN
	.string "Der Pokémon-Turm wurde im Andenken\n"
	.string "an verblichene Pokémon errichtet.$"
#else
	.string "POKéMON TOWER was erected in the\n"
	.string "memory of POKéMON that died.$"
#endif

PokemonTower_1F_Text_ComeToPayRespectsSon::
#if GERMAN
	.string "Bist du hier, um dein Mitgefühl\n"
	.string "auszudrücken? Sei gesegnet!$"
#else
	.string "Did you come to pay respects?\p"
	.string "Bless your POKéMON-loving heart,\n"
	.string "son.$"
#endif

PokemonTower_1F_Text_ComeToPayRespectsGirl::
#if GERMAN
	.string "Bist du hier, um dein Mitgefühl\n"
	.string "auszudrücken? Sei gesegnet!$"
#else
	.string "Did you come to pay respects?\p"
	.string "Bless your POKéMON-loving heart,\n"
	.string "girl.$"
#endif

PokemonTower_1F_Text_CameToPrayForDepartedClefairy::
#if GERMAN
	.string "Ich bete für Piepi...\p"
	.string "Schluchz! Ich kann nicht aufhören\n"
	.string "zu weinen...$"
#else
	.string "I came to pray for my dearly\n"
	.string "departed CLEFAIRY.\p"
	.string "Sniff!\n"
	.string "I'm awash in tears…$"
#endif

PokemonTower_1F_Text_GrowlitheWhyDidYouDie::
#if GERMAN
	.string "Fukano...\n"
	.string "Warum hast du mich verlassen?$"
#else
	.string "My GROWLITHE…\n"
	.string "Why did you die?$"
#endif

PokemonTower_1F_Text_SenseSpiritsUpToMischief::
#if GERMAN
	.string "Ich bin eine Exorzistin!\n"
	.string "Die Geister hier stiften Unruhe!$"
#else
	.string "I am a CHANNELER.\p"
	.string "There are spirits up to mischief.\n"
	.string "I sense them high in the TOWER.$"
#endif

