MeteorFalls_StevensCave_MapScripts::
	.byte 0

MeteorFalls_StevensCave_EventScript_Steven::
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
	waitse
	playse SE_PIN
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
	release
	end

MeteorFalls_StevensCave_EventScript_Defeated::
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	release
	end

MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
#if GERMAN
	.string "Troy: Du hast mich gefunden.\p"
	.string "Damit hätte ich rechnen müssen.\p"
	.string "Du fragst dich seit Faustauhaven,\n"
	.string "was ich hier eigentlich tue.\p"
	.string "Die Antwort bekommst du nicht von mir.\n"
	.string "Du holst sie dir.\p"
	.string "Im Raumfahrtzentrum hast du an meiner\n"
	.string "Seite gekämpft. Jetzt gegen mich.\p"
	.string "Und diesmal halte ich nichts zurück!$"
#else
	.string "STEVEN: Oh, wow, {PLAYER}{KUN}.\n"
	.string "I'm amazed you knew where to find me.\p"
	.string "Do you, uh…maybe think of me as\n"
	.string "just a rock maniac?\p"
	.string "No, that can't be right.\p"
	.string "We battled alongside each other at\n"
	.string "the SOOTOPOLIS SPACE CENTER.\p"
	.string "You should have a very good idea\n"
	.string "about how good I am.\p"
	.string "Okay, {PLAYER}{KUN}, if you're going to mount\n"
	.string "a serious challenge, expect the worst!$"
#endif

MeteorFalls_StevensCave_Text_StevenDefeat:
#if GERMAN
	.string "Du…\p"
	.string "Ich wusste, dass du stark bist.\n"
	.string "So stark wusste ich nicht.$"
#else
	.string "You…\n"
	.string "I had no idea you'd become so strong…$"
#endif

MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
#if GERMAN
	.string "Troy: Ich habe dich nicht zufällig\n"
	.string "nach Hoenn geholt.\p"
	.string "Was ich hier suche, findet man nicht\n"
	.string "allein.\p"
	.string "Irgendwann erzähle ich dir davon.\n"
	.string "Heute noch nicht.\p"
	.string "Und mein Gefühl trügt mich nie!\p"
	.string "Wohin wird dein Weg dich jetzt führen?\n"
	.string "\p"
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "…\p"
	.string "Hähähähä, das kann selbst ich dir\n"
	.string "nicht sagen.$"
#else
	.string "STEVEN: Come to think of it, ever since\n"
	.string "our paths first crossed in GRANITE\l"
	.string "CAVE in DEWFORD, I had this feeling.\p"
	.string "I thought that you would eventually\n"
	.string "become the CHAMPION.\p"
	.string "My predictions usually come true.\p"
	.string "And where will you go from here?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Fufufu, even I couldn't tell you that.$"
#endif

