TinTower_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TinTower_OnTransition
	.byte 0

TinTower_OnTransition::
	setescapewarp MAP_BELLCHIME_TRAIL_HNS, 35, 42
	end

TinTower_1F_EventScript_SageA::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageA_Hooh
	msgbox TinTower_1F_Sage4_Text2, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageA_Hooh::
	msgbox TinTower_1F_Sage4_Text1, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageB::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageB_Hooh
	msgbox TinTower_1F_Sage2_Text, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageB_Hooh::
	msgbox TinTower_1F_Sage1_Text, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageC::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_STATE, 11, TinTower_1F_EventScript_SageC_Hooh
	msgbox TinTower_1F_Sage6_Text2, MSGBOX_DEFAULT
	closemessage
	release
	end

TinTower_1F_EventScript_SageC_Hooh::
	msgbox TinTower_1F_Sage3_Text, MSGBOX_DEFAULT
	closemessage
	release
	end


TinTower_1F_Sage1_Text:
#if GERMAN
	.string "Der Legende nach…\n"
	.string "Wenn die Seelen von Pokémon und\p"
	.string "Menschen sich berühren, steigt ein\n"
	.string "Pokémon in Regenbogenfarben vom\l"
	.string "Himmel herab…\p"
	.string "Könnte es sein, dass die legendären\n"
	.string "Pokémon uns Menschen auf die Probe\l"
	.string "stellen?$"
#else
	.string "According to legend…\n"
	.string "When the souls of POKéMON and humans\p"
	.string "commune, from the heavens descends a\n"
	.string "POKéMON of rainbow colors…\p"
	.string "Could it mean the legendary POKéMON\n"
	.string "are testing us humans?$"
#endif

TinTower_1F_Sage2_Text:
#if GERMAN
	.string "Als der Zinnturm niederbrannte,\n"
	.string "sollen drei namenlose Pokémon\l"
	.string "umgekommen sein. Es war tragisch.\p"
	.string "Jedoch…\p"
	.string "Ein Pokémon in Regenbogenfarben…\n"
	.string "Mit anderen Worten…\p"
	.string "Ho-Oh stieg vom Himmel herab und\n"
	.string "schenkte den drei Pokémon neues Leben.\p"
	.string "Es sind…\n"
	.string "Suicune, Entei und Raikou.\p"
	.string "So sagt man es zumindest.$"
#else
	.string "When the BRASS TOWER burned down,\n"
	.string "three nameless POKéMON were said\l"
	.string "to have perished. It was tragic.\p"
	.string "However…\p"
	.string "A rainbow-colored POKéMON…\n"
	.string "In other words…\p"
	.string "HO-OH descended from the sky and\n"
	.string "gave new life to the three POKéMON.\p"
	.string "They are…\n"
	.string "SUICUNE, ENTEI and RAIKOU.\p"
	.string "That is what they say.$"
#endif

TinTower_1F_Sage3_Text:
#if GERMAN
	.string "Die zwei Türme sollen erbaut worden\n"
	.string "sein, um Freundschaft und Hoffnung\p"
	.string "zwischen Pokémon und Menschen zu\n"
	.string "fördern.\l"
	.string "Das war vor 700 Jahren, aber das\p"
	.string "Ideal ist noch heute wichtig.$"
#else
	.string "The two TOWERS are said to have been\n"
	.string "built to foster friendship and\p"
	.string "hope between POKéMON and people.\n"
	.string "That was 700 years ago, but the ideal\p"
	.string "still remains important today.$"
#endif

TinTower_1F_Sage4_Text1:
#if GERMAN
	.string "Ho-Oh scheint auf diesem hier,\n"
	.string "dem Zinnturm, herabgestiegen zu sein!$"
#else
	.string "HO-OH appears to have descended\n"
	.string "upon this, the TIN TOWER!$"
#endif

TinTower_1F_Sage4_Text2:
#if GERMAN
	.string "Die legendären Pokémon sollen\n"
	.string "drei Kräfte verkörpern…\p"
	.string "Den Blitz, der den Turm traf.\n"
	.string "Das Feuer, das den Turm verbrannte.\p"
	.string "Und den Regen, der das Feuer\n"
	.string "löschte…$"
#else
	.string "The legendary POKéMON are said\n"
	.string "to embody three powers…\p"
	.string "The lightning that struck the TOWER.\n"
	.string "The fire that burned the TOWER.\p"
	.string "And the rain that put out the fire…$"
#endif

TinTower_1F_Sage6_Text2:
#if GERMAN
	.string "Von den legendären Pokémon soll\n"
	.string "Suicune Ho-Oh am nächsten stehen.\p"
	.string "Ich höre, dass es auch eine\n"
	.string "Verbindung zu Pokémon namens\l"
	.string "Icognito geben soll.\p"
	.string "Icognito muss eine enge Verbindung\n"
	.string "zu Suicune haben.$"
#else
	.string "Of the legendary POKéMON, SUICUNE\n"
	.string "is said to be the closest to HO-OH.\p"
	.string "I hear there may also be a link to\n"
	.string "POKéMON known as UNOWN.\p"
	.string "The POKéMON UNOWN must be sharing a\n"
	.string "cooperative bond with SUICUNE.$"
#endif

TinTower_1F_EusineHoOh_Text:
#if GERMAN
	.string "Ich wusste es.\p"
	.string "Ich wusste, dass du das Pokémon\n"
	.string "in Regenbogenfarben sehen würdest,\l"
	.string "{PLAYER}.\p"
	.string "Es geschah genau so, wie ich es mir\n"
	.string "vorgestellt hatte.\l"
	.string "Meine Forschung ist gar nicht so\l"
	.string "schlecht, muss ich sagen.\p"
	.string "Ich werde weiter Pokémon studieren,\n"
	.string "um ein berühmter Pokénarr zu werden!$"
#else
	.string "I knew it.\p"
	.string "I knew you'd get to see the POKéMON\n"
	.string "of rainbow colors, <PLAYER>.\p"
	.string "It happened just as I envisioned.\n"
	.string "My research isn't bad, I might say.\p"
	.string "I'm going to keep studying POKéMON\n"
	.string "to become a famous POKéMANIAC!$"
#endif

TinTower_1F_EusineSuicune_Text:
#if GERMAN
	.string "Eusin: Unglaublich! Einfach zu\n"
	.string "unglaublich! So einen Kampf hab ich\l"
	.string "noch nie gesehen.\p"
	.string "Das war wirklich inspirierend.\n"
	.string "Suicune war stark, aber du warst\p"
	.string "noch beeindruckender, {PLAYER}.\n"
	.string "Ich habe gehört, Suicunes mystische\p"
	.string "Kraft ruft ein Pokémon in Regenbogen-\n"
	.string "farben herbei.\l"
	.string "Vielleicht, nur vielleicht, wird das,\p"
	.string "was heute geschah, dieses Pokémon\n"
	.string "erscheinen lassen.\l"
	.string "Ich werde die Legenden weiter\l"
	.string "erforschen.\p"
	.string "Danke, dass du mir diesen fantasti-\n"
	.string "schen Kampf gezeigt hast.\p"
	.string "Bis dann, {PLAYER}!$"
#else
	.string "EUSINE: Awesome! Too awesome, even!\n"
	.string "I've never seen a battle that great.\p"
	.string "That was truly inspiring to see.\n"
	.string "SUICUNE was tough, but you were even\p"
	.string "more incredible, <PLAYER>.\n"
	.string "I heard SUICUNE's mystic power\p"
	.string "summons a rainbow-colored POKéMON.\n"
	.string "Maybe, just maybe, what went on today\p"
	.string "will cause that POKéMON to appear.\n"
	.string "I'm going to study the legends more.\p"
	.string "Thanks for showing me that fantastic\n"
	.string "battle.\p"
	.string "Later, <PLAYER>!$"
#endif
