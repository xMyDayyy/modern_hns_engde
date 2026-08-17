SootopolisCity_Mart_MapScripts::
	.byte 0

SootopolisCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SootopolisCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SootopolisCity_Mart_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_SHADOW_MAIL
	pokemartlistend

SootopolisCity_Mart_EventScript_FatMan::
	lock
	faceplayer
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_FatManNoLegendaries
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_FatManNoLegendaries
	msgbox SootopolisCity_Mart_Text_TooScaryOutside, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_EventScript_FatManNoLegendaries::
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
	msgbox SootopolisCity_Mart_Text_DidSomethingAwaken, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_EventScript_GentlemanNoLegendaries::
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Mart_Text_PPUpIsGreat:
#if GERMAN
	.string "AP-Plus ist sehr nützlich!\p"
	.string "Es steigert die Angriffspunkte, die\n"
	.string "AP, einer Pokémon-Attacke.$"
#else
	.string "PP UP is great!\p"
	.string "It raises the POWER POINTS, the PP,\n"
	.string "of a POKéMON move.$"
#endif

SootopolisCity_Mart_Text_TooScaryOutside:
#if GERMAN
	.string "Was… Was ist passiert?\p"
	.string "Das würde ich zu gerne wissen, aber\n"
	.string "ich trau mich nicht nach draußen.$"
#else
	.string "What…\n"
	.string "What is happening?\p"
	.string "I really want to know, but it's too\n"
	.string "scary to go outside.$"
#endif

SootopolisCity_Mart_Text_FullRestoreItemOfDreams:
#if GERMAN
	.string "Kennst du Top-Genesung?\p"
	.string "Alle KP werden aufgefüllt! Alle\n"
	.string "Statusprobleme werden aufgehoben!\p"
	.string "Ein wundervolles Item!$"
#else
	.string "Do you know FULL RESTORE?\p"
	.string "Full restoration of HP!\n"
	.string "Eradication of all status problems!\p"
	.string "It's truly an item of your dreams!$"
#endif

SootopolisCity_Mart_Text_DidSomethingAwaken:
#if GERMAN
	.string "Dieses Wetter…\n"
	.string "Wurde etwas aufgeweckt?$"
#else
	.string "This weather…\n"
	.string "Did something awaken?$"
#endif

