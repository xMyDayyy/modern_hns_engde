PewterCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PewterCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_PEWTER_CITY
	end

PewterCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

PewterCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
	end

PewterCity_PokemonCenter_1F_EventScript_Jigglypuff::
	lock
	faceplayer
	fadeoutbgm 0
	playbgm MUS_RG_JIGGLYPUFF, 0
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
	waitmessage
	delay 455
	playbgm MUS_POKE_CENTER, 1
	release
	end

PewterCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy, MSGBOX_NPC
	end

PewterCity_PokemonCenter_1F_EventScript_GBAKid1::
	lock
	msgbox PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu
	release
	end

PewterCity_PokemonCenter_1F_EventScript_GBAKid2::
	msgbox PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
	end

PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone::
#if GERMAN
	.string "Was!?\p"
	.string "Das Team Rocket befindet sich auf\n"
	.string "dem {COLOR RED}Mondberg{COLOR DARK_GRAY}? Das muss ich sofort\l"
	.string "melden!\p"
	.string "Verschwinde!$"
#else
	.string "What!?\p"
	.string "TEAM ROCKET is at MT. MOON?\n"
	.string "Huh?\p"
	.string "I'm on the phone!\n"
	.string "Scram!$"
#endif

PewterCity_PokemonCenter_1F_Text_Jigglypuff::
#if GERMAN
	.string "Jigglypuff: Puu pupuu!$"
#else
	.string "JIGGLYPUFF: Puu pupuu!$"
#endif

PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy::
#if GERMAN
	.string "Gähn!\p"
	.string "Von Pummeluffs Gesang werden\n"
	.string "Pokémon ganz müde...\p"
	.string "Ich auch...\n"
	.string "Schnarch...$"
#else
	.string "Yawn!\p"
	.string "When JIGGLYPUFF sings, POKéMON get\n"
	.string "drowsy…\p"
	.string "…Me, too…\n"
	.string "Snore…$"
#endif

PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu::
#if GERMAN
	.string "Ich möchte unbedingt ein Pikachu\n"
	.string "und tausche mein Piepi dafür!$"
#else
	.string "I really want a PIKACHU, so I'm\n"
	.string "trading my CLEFAIRY for one.$"
#endif

PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid::
#if GERMAN
	.string "Ich tausche Pokémon mit dem\n"
	.string "Kind dort drüben!\p"
	.string "Da ich zwei Pikachu besaß, konnte\n"
	.string "ich eines tauschen.$"
#else
	.string "I'm trading POKéMON with that kid\n"
	.string "there.\p"
	.string "I had two PIKACHU, so I figured\n"
	.string "I might as well trade one.$"
#endif

