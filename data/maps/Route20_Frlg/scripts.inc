Route20_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
	.byte 0

Route20_OnTransition::
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB3F
	call_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB4F
	end

Route20_EventScript_ResetSeafoamBouldersForB3F::
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_1
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_2
	return

Route20_EventScript_ResetSeafoamBouldersForB4F::
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_3
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_4
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_5
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_6
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
	return

Route20_EventScript_SeafoamIslandsSign::
	msgbox Route20_Text_SeafoamIslands, MSGBOX_SIGN
	end

Route20_Text_BarryIntro::
#if GERMAN
	.string "Das Wasser ist hier sehr flach.$"
#else
	.string "The water is shallow here.\n"
	.string "There are many people swimming.$"
#endif

Route20_Text_BarryDefeat::
#if GERMAN
	.string "Platsch!$"
#else
	.string "Splash!$"
#endif

Route20_Text_BarryPostBattle::
#if GERMAN
	.string "Ich wünschte, ich könnte auf einem\n"
	.string "Pokémon reiten.$"
#else
	.string "I wish I could ride my POKéMON.\n"
	.string "I bet you're not tired.$"
#endif

Route20_Text_ShirleyIntro::
#if GERMAN
	.string "Die {COLOR RED}Seeschauminseln{COLOR DARK_GRAY} sind ein\n"
	.string "stiller Zufluchtsort!$"
#else
	.string "SEAFOAM is a quiet getaway.\n"
	.string "I'm vacationing here.$"
#endif

Route20_Text_ShirleyDefeat::
#if GERMAN
	.string "Schluss damit!$"
#else
	.string "Quit it!$"
#endif

Route20_Text_ShirleyPostBattle::
#if GERMAN
	.string "Unter dieser Insel befindet sich\n"
	.string "eine riesige Höhle!$"
#else
	.string "There's a huge cavern underneath\n"
	.string "this island.$"
#endif

Route20_Text_TiffanyIntro::
#if GERMAN
	.string "Ich lasse mich gerne mit den\n"
	.string "Fischen treiben!$"
#else
	.string "I love floating with the fishes\n"
	.string "here among the waves.$"
#endif

Route20_Text_TiffanyDefeat::
#if GERMAN
	.string "Autsch!$"
#else
	.string "Yowch!$"
#endif

Route20_Text_TiffanyPostBattle::
#if GERMAN
	.string "Möchtest du mir Gesellschaft\n"
	.string "leisten?$"
#else
	.string "Want to float with me?$"
#endif

Route20_Text_IreneIntro::
#if GERMAN
	.string "Machst du auch gerade Urlaub?$"
#else
	.string "Are you on vacation, too?$"
#endif

Route20_Text_IreneDefeat::
#if GERMAN
	.string "Du kennst keine Gnade!$"
#else
	.string "No mercy at all!$"
#endif

Route20_Text_IrenePostBattle::
#if GERMAN
	.string "Die {COLOR RED}Seeschauminseln{COLOR DARK_GRAY} waren einmal\n"
	.string "Eine große Insel!$"
#else
	.string "SEAFOAM used to be a single island\n"
	.string "in the distant past.$"
#endif

Route20_Text_DeanIntro::
#if GERMAN
	.string "Schau dir meinen gestählten Körper\n"
	.string "ruhig an!$"
#else
	.string "Check out my buff physique!$"
#endif

Route20_Text_DeanDefeat::
#if GERMAN
	.string "Waschlappen!$"
#else
	.string "Wimpy!$"
#endif

Route20_Text_DeanPostBattle::
#if GERMAN
	.string "Ich hätte meine Pokémon stählen\n"
	.string "sollen, nicht meinen Körper!$"
#else
	.string "I should've been buffing up my\n"
	.string "POKéMON, not me!$"
#endif

Route20_Text_DarrinIntro::
#if GERMAN
	.string "Warum reitest du auf dem Pokémon?\n"
	.string "Kannst du nicht schwimmen?$"
#else
	.string "Why are you riding a POKéMON?\n"
	.string "Can't you swim?$"
#endif

Route20_Text_DarrinDefeat::
#if GERMAN
	.string "Ich wurde torpediert!$"
#else
	.string "Ouch!\n"
	.string "Torpedoed!$"
#endif

Route20_Text_DarrinPostBattle::
#if GERMAN
	.string "Es dürfte Spaß machen, auf einem\n"
	.string "Pokémon zu reiten!$"
#else
	.string "Riding a POKéMON sure looks fun!$"
#endif

Route20_Text_RogerIntro::
#if GERMAN
	.string "Mein Vogel-Pokémon hat mich\n"
	.string "hierher getragen!$"
#else
	.string "I rode my bird POKéMON here.$"
#endif

Route20_Text_RogerDefeat::
#if GERMAN
	.string "Oh nein!$"
#else
	.string "Oh, no!\n"
	.string "Now what am I to do?$"
#endif

Route20_Text_RogerPostBattle::
#if GERMAN
	.string "Kann ich mit meinen Vogel-Pokémon\n"
	.string "noch zurückfliegen?$"
#else
	.string "My birds are exhausted.\n"
	.string "They can't FLY me back!$"
#endif

Route20_Text_NoraIntro::
#if GERMAN
	.string "Mein Freund hat mir eine große\n"
	.string "Perle geschenkt!$"
#else
	.string "My boyfriend gave me big pearls.$"
#endif

Route20_Text_NoraDefeat::
#if GERMAN
	.string "Lass die Finger von meiner Perle!$"
#else
	.string "Oh, no!\n"
	.string "My pearls were in them!$"
#endif

Route20_Text_NoraPostBattle::
#if GERMAN
	.string "Ob meine Perle in einem Austos\n"
	.string "größer werden würde?$"
#else
	.string "Will my pearls grow bigger inside\n"
	.string "CLOYSTER?$"
#endif

Route20_Text_MissyIntro::
#if GERMAN
	.string "Ich bin von der {COLOR RED}Zinnoberinsel{COLOR DARK_GRAY}\n"
	.string "herübergeschwommen!$"
#else
	.string "I swam here from CINNABAR ISLAND.\n"
	.string "It wasn't easy, I tell you.$"
#endif

Route20_Text_MissyDefeat::
#if GERMAN
	.string "Ich bin enttäuscht!$"
#else
	.string "I'm so disappointed!$"
#endif

Route20_Text_MissyPostBattle::
#if GERMAN
	.string "Auf der {COLOR RED}Zinnoberinsel{COLOR DARK_GRAY} haben\n"
	.string "Pokémon eine verlassene Villa\l"
	.string "besiedelt!$"
#else
	.string "POKéMON have taken over an\n"
	.string "abandoned mansion on CINNABAR.\p"
	.string "They call it the POKéMON MANSION\n"
	.string "now.$"
#endif

Route20_Text_MelissaIntro::
#if GERMAN
	.string "Auf der {COLOR RED}Zinnoberinsel{COLOR DARK_GRAY} befindet\n"
	.string "sich ein Pokémon-Labor.$"
#else
	.string "CINNABAR, in the west, has a LAB\n"
	.string "for POKéMON.\p"
	.string "My daddy works there.$"
#endif

Route20_Text_MelissaDefeat::
#if GERMAN
	.string "Warte!$"
#else
	.string "Wait!\n"
	.string "You're supposed to wait!$"
#endif

Route20_Text_MelissaPostBattle::
#if GERMAN
	.string "Die {COLOR RED}Zinnoberinsel{COLOR DARK_GRAY} ist ein\n"
	.string "vulkanisches Eiland!$"
#else
	.string "CINNABAR is a volcanic island.\p"
	.string "I heard it rose out of the sea\n"
	.string "when a volcano erupted.$"
#endif

Route20_Text_SeafoamIslands::
#if GERMAN
	.string "Seeschauminseln$"
#else
	.string "SEAFOAM ISLANDS$"
#endif

Route20_Text_MistyTrainsHere::
#if GERMAN
	.string "Starke Trainer und Wasser-\n"
	.string "Pokémon sind hier weit verbreitet.\p"
	.string "Man sagt, dass Misty aus der\n"
	.string "Arena von {COLOR RED}Azuria City{COLOR DARK_GRAY}\l"
	.string "hier häufig trainiert.$"
#else
	.string "Strong TRAINERS and WATER POKéMON\n"
	.string "are common sights in these parts.\p"
	.string "They say that MISTY of the\n"
	.string "CERULEAN GYM trains here.$"
#endif
