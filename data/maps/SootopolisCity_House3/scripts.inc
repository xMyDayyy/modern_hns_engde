SootopolisCity_House3_MapScripts::
	.byte 0

SootopolisCity_House3_EventScript_Woman::
	lock
	faceplayer
	msgbox SootopolisCity_House3_Text_JuanHasManyFansDoYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SootopolisCity_House3_EventScript_HaveFans
	msgbox SootopolisCity_House3_Text_LonesomeTryWorkingHarder, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House3_EventScript_HaveFans::
	msgbox SootopolisCity_House3_Text_YouMustBePrettyStrong, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House3_EventScript_Girl::
	msgbox SootopolisCity_House3_Text_TrainerFanClubWasWild, MSGBOX_NPC
	end

SootopolisCity_House3_Text_JuanHasManyFansDoYou:
#if GERMAN
	.string "Du bist ein Pokémon-Trainer, oder?\p"
	.string "Der Arenaleiter von Xeneroville, \n"
	.string "Juan, hat viele Fans.\p"
	.string "Mehr als sein Schüler Wassili.\n"
	.string "Hast du auch Fans?$"
#else
	.string "You're a POKéMON TRAINER, aren't you?\p"
	.string "SOOTOPOLIS's JUAN has many fans.\n"
	.string "Even more than his student WALLACE!\p"
	.string "Do you have any?$"
#endif

SootopolisCity_House3_Text_YouMustBePrettyStrong:
#if GERMAN
	.string "Oh, dann musst du aber sehr stark\n"
	.string "sein.$"
#else
	.string "Oh, then you must be pretty strong.$"
#endif

SootopolisCity_House3_Text_LonesomeTryWorkingHarder:
#if GERMAN
	.string "Oh, meine Güte…\n"
	.string "Dann stehst du ja ganz alleine da.\p"
	.string "Streng dich einfach mehr an, dann\n"
	.string "bekommst du auch einen Fan.$"
#else
	.string "Oh, dear…\n"
	.string "That's a little lonesome.\p"
	.string "Try working a little harder to get\n"
	.string "a fan following.$"
#endif

SootopolisCity_House3_Text_TrainerFanClubWasWild:
#if GERMAN
	.string "Die Fans kommen auch von außerhalb\n"
	.string "von Hoenn herbeigeströmt.\p"
	.string "Ich habe den Trainer-Fanclub in\n"
	.string "Seegrasulb City besucht.\l"
	.string "Verrückte Sache…$"
#else
	.string "Dedicated fans come over from even\n"
	.string "outside of HOENN.\p"
	.string "It was really wild when I went to the\n"
	.string "TRAINER FAN CLUB in LILYCOVE.$"
#endif

