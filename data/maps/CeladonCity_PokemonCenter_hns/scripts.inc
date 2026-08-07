CeladonCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_PokemonCenter_OnTransition
	.byte 0

CeladonCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_CELADON_CITY_HNS
	end

CeladonCity_PokemonCenter_EventScript_CooltrainerF::
	msgbox CeladonCity_PokemonCenter1F_Text_CooltrainerF, MSGBOX_NPC
	end

CeladonCity_PokemonCenter_EventScript_Pharmacist::
	msgbox CeladonCity_PokemonCenter1F_Text_Pharmacist, MSGBOX_NPC
	end

CeladonCity_PokemonCenter_EventScript_Eusine::
	msgbox Celadon_Text_Eusine1, MSGBOX_NPC
	end

CeladonCity_PokemonCenter1F_Text_CooltrainerF:
#if GERMAN
	.string "Erika ist auf Pflanzen-Pokémon\n"
	.string "spezialisiert!\p"
	.string "Wenn du sie unterschätzt, wirst du\n"
	.string "dein blaues Wunder erleben!$"
#else
	.string "ERIKA is a master of grass\n"
	.string "POKéMON.\p"
	.string "She'll make you pay if you don't\n"
	.string "watch yourself.$"
#endif

CeladonCity_PokemonCenter1F_Text_Pharmacist:
#if GERMAN
	.string "Team Rockets Versteck befindet sich\n"
	.string "im Keller des Spiele-Ecks.\p"
	.string "Oh, Moment. Das war vor drei Jahren.$"
#else
	.string "TEAM ROCKET's hideout is in the\n"
	.string "basement of the GAME CORNER.\p"
	.string "Oh, wait. That was three years\n"
	.string "ago.$"
#endif

Celadon_Text_Eusine1:
#if GERMAN
	.string "Eusin: Hi!\p"
	.string "Ich besuche wieder meine Heimatstadt.\p"
	.string "Es ist schon eine ganze Weile her.$"
#else
	.string "EUSINE: Hi!\p"
	.string "I'm back visiting my hometown.\p"
	.string "It's been quite a while.$"
#endif

Celadon_Text_EusineLeaves:
#if GERMAN
	.string "{PLAYER}, hast du gehört?\p"
	.string "Es gibt frische Gerüchte über ein\n"
	.string "regenbogenfarbenes Pokémon,\l"
	.string "das im Glockenturm erscheint.\p"
	.string "Ich habe gerade meine Party heilen\n"
	.string "lassen, jetzt mache ich mich auf nach\l"
	.string "Teak-City. Wir sehen uns, {PLAYER}!$"
#else
	.string "{PLAYER}, have you heard?\p"
	.string "There have been fresh rumors of a\n"
	.string "rainbow-colored POKéMON\n"
	.string "appearing at TIN TOWER.\p"
	.string "I've just had my party healed,\n"
	.string "so now I'm headed to ECRUTEAK.\p"
	.string "I'll be seeing you, {PLAYER}!$"
#endif

Celadon_Text_NoBeasts:
#if GERMAN
	.string "Ach übrigens, {PLAYER}.\p"
	.string "Hast du die legendären Pokémon\n"
	.string "Raikou und Entei gefangen?\p"
	.string "<……><……><……>\p"
	.string "Okay…\p"
	.string "Wenn du auch nur eines fängst\n"
	.string "hoffe ich, dass du es mir meldest.\p"
	.string "Ich zähle auf dich, {PLAYER}!$"
#else
	.string "Oh, by the way, {PLAYER}.\p"
	.string "Have you caught the legendary\n"
	.string "POKéMON RAIKOU and ENTEI?\p"
	.string "<……><……><……>\p"
	.string "Okay…\p"
	.string "If you catch even one, I hope\n"
	.string "that you'll inform me.\p"
	.string "I'm counting on you, {PLAYER}!$"
#endif
