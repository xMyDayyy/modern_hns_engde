SixIsland_RuinValley_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SixIsland_RuinValley_OnLoad
	.byte 0

SixIsland_RuinValley_OnLoad::
	call_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_OpenDottedHoleDoor
	end

SixIsland_RuinValley_EventScript_OpenDottedHoleDoor::
	setmetatile 24, 24, METATILE_SeviiIslands67_DottedHoleDoor_Open, 0
	return

SixIsland_RuinValley_EventScript_Scientist::
	lock
	msgbox SixIsland_RuinValley_Text_CantFigureOutHowToGetInside
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SixIsland_RuinValley_Text_IFoundThisPlace
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SixIsland_RuinValley_EventScript_DottedHoleDoor::
	lockall
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_DottedHoleDoorOpen
	msgbox SixIsland_RuinValley_Text_CheckDoorMoreThoroughly, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor
	msgbox SixIsland_RuinValley_Text_SeveralDotsOnTheDoor
	braillemsgbox Braille_Text_Cut
	releaseall
	end

SixIsland_RuinValley_EventScript_DottedHoleDoorOpen::
	msgbox SixIsland_RuinValley_Text_DoorIsOpen
	releaseall
	end

SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor::
	msgbox SixIsland_RuinValley_Text_LeftDoorAlone
	releaseall
	end

SixIsland_RuinValley_Text_CantFigureOutHowToGetInside::
#if GERMAN
	.string "Ich bin nicht in der Lage,\n"
	.string "herauszufinden, wie ich hineinkommen\l"
	.string "soll.$"
#else
	.string "I can't figure out how I'm supposed\n"
	.string "to get inside.$"
#endif

SixIsland_RuinValley_Text_IFoundThisPlace::
#if GERMAN
	.string "Ich war es, der diesen Ort\n"
	.string "entdeckt hat.\p"
	.string "Guck nicht so neidisch!$"
#else
	.string "Let me tell you, I found this\n"
	.string "place.\p"
	.string "Don't look so envious, will you?$"
#endif

SixIsland_RuinValley_Text_CheckDoorMoreThoroughly::
#if GERMAN
	.string "Die Tür bewegt sich nicht.\n"
	.string "Sorgfältiger untersuchen?$"
#else
	.string "The door doesn't budge at all.\n"
	.string "Check it more thoroughly?$"
#endif

SixIsland_RuinValley_Text_LeftDoorAlone::
#if GERMAN
	.string "{PLAYER} ging von der Tür weg.$"
#else
	.string "{PLAYER} left the door alone.$"
#endif

SixIsland_RuinValley_Text_SeveralDotsOnTheDoor::
#if GERMAN
	.string "Bei näherer Betrachtung sieht man,\n"
	.string "dass mehrere Punkte auf der Tür sind…$"
#else
	.string "On closer inspection, there are\n"
	.string "several dots on the door…$"
#endif

SixIsland_RuinValley_Text_DoorIsOpen::
#if GERMAN
	.string "Die Tür ist offen.$"
#else
	.string "The door is open.$"
#endif

SixIsland_RuinValley_Text_StanlyIntro::
#if GERMAN
	.string "Es scheint, als ob es noch viele\n"
	.string "ungelöste Rätsel in dieser Welt gibt.$"
#else
	.string "There appear to be many secrets\n"
	.string "still unsolved in this world.$"
#endif

SixIsland_RuinValley_Text_StanlyDefeat::
#if GERMAN
	.string "Hm…$"
#else
	.string "Hmm…$"
#endif

SixIsland_RuinValley_Text_StanlyPostBattle::
#if GERMAN
	.string "Ich rate dir, eines Tages auch über die\n"
	.string "Rätsel und Geheimnisse unserer Welt\l"
	.string "nachzudenken.$"
#else
	.string "I suggest to you that you, too,\n"
	.string "give a thought to the secrets and\l"
	.string "mysteries of our world once a day.$"
#endif

SixIsland_RuinValley_Text_FosterIntro::
#if GERMAN
	.string "Ich bin neugierig, zu erfahren, was\n"
	.string "dich hierher gebracht hat!$"
#else
	.string "I'm curious, what compelled you to\n"
	.string "come here?$"
#endif

SixIsland_RuinValley_Text_FosterDefeat::
#if GERMAN
	.string "Es ist schon so lange her, dass ich\n"
	.string "gekämpft habe. Meine Instinkte sind\l"
	.string "schwach.$"
#else
	.string "It's been so long since I battled,\n"
	.string "my instincts are off.$"
#endif

SixIsland_RuinValley_Text_FosterPostBattle::
#if GERMAN
	.string "Es gibt einige Ruinen auf\n"
	.string "Sevii Eiland.\p"
	.string "Der Großteil von ihnen ist\n"
	.string "vor langer Zeit entstanden.$"
#else
	.string "There are several ruins on the\n"
	.string "SEVII ISLANDS.\p"
	.string "The majority of them date back\n"
	.string "a long way.$"
#endif

SixIsland_RuinValley_Text_LarryIntro::
#if GERMAN
	.string "Man sagt, dass es auf dieser Insel\n"
	.string "geheimnisvolle Steine geben soll.\p"
	.string "Ich nehme an, dass es etwas mit\n"
	.string "den Ruinen hier zu tun hat.$"
#else
	.string "It's been said that there are\n"
	.string "mysterious stones on this island.\p"
	.string "I suspect it has something to do\n"
	.string "with the ruins here.$"
#endif

SixIsland_RuinValley_Text_LarryDefeat::
#if GERMAN
	.string "Oh, interessant.$"
#else
	.string "Oh, interesting.$"
#endif

SixIsland_RuinValley_Text_LarryPostBattle::
#if GERMAN
	.string "Die Ruinen dort drüben…\p"
	.string "Ich hatte noch nicht das Glück,\n"
	.string "herauszufinden, wie man hineinkommt.$"
#else
	.string "Those ruins over there…\p"
	.string "I haven't had any luck in finding\n"
	.string "how I can get inside.$"
#endif

SixIsland_RuinValley_Text_DarylIntro::
#if GERMAN
	.string "Ein Kampf mit dir, hier oben?$"
#else
	.string "A battle with you, so high up!$"
#endif

SixIsland_RuinValley_Text_DarylDefeat::
#if GERMAN
	.string "Oh, mein Herz zerbricht, da du\n"
	.string "so überlegen warst.$"
#else
	.string "Oh, the heartbreak of losing so\n"
	.string "easily to you!$"
#endif

SixIsland_RuinValley_Text_DarylPostBattle::
#if GERMAN
	.string "Genieße die Kletterfreude!$"
#else
	.string "Experience the joy of climbing!$"
#endif

SixIsland_RuinValley_Text_HectorIntro::
#if GERMAN
	.string "Ich kenne mich in dieser Gegend\n"
	.string "gut aus.$"
#else
	.string "I'm pretty familiar with the land\n"
	.string "around these parts.$"
#endif

SixIsland_RuinValley_Text_HectorDefeat::
#if GERMAN
	.string "Du musst nicht nachhaken.\n"
	.string "Ich verrate es dir gerne.$"
#else
	.string "You don't need to be so pushy.\n"
	.string "I'll be happy to tell you.$"
#endif

SixIsland_RuinValley_Text_HectorPostBattle::
#if GERMAN
	.string "Die Türe zu den Ruinen…\n"
	.string "Sie ist mit diesen merkwürdigen Mustern\l"
	.string "übersät.\p"
	.string "Ich weiß allerdings nicht, was sie\n"
	.string "bedeuten.$"
#else
	.string "The door to the ruins…\n"
	.string "It has these strange patterns\l"
	.string "engraved on the outside.\p"
	.string "I don't know what they mean,\n"
	.string "though.$"
#endif
