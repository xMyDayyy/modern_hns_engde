RustboroCity_Gym_MapScripts::
	.byte 0

RustboroCity_Gym_EventScript_Roxanne::
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_RoxanneDefeated::
	message RustboroCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_RUSTBORO_CITY_STATE, 1
	addvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	goto RustboroCity_Gym_EventScript_GiveRockTomb
	end

RustboroCity_Gym_EventScript_GiveRockTomb::
	giveitem ITEM_TM_ROCK_TOMB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_RoxanneRematch::
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Josh::
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Tommy::
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Marc::
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_GymGuidePostVictory::
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_GymStatueCertified::
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_GymStatue::
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_RegisterRoxanne::
	lockall
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	releaseall
	end

RustboroCity_Gym_Text_GymGuideAdvice:
#if GERMAN
	.string "Hi, wie geht’s?\p"
	.string "Hör zu, mein Freund!\n"
	.string "Würdest du gerne Champ werden?\p"
	.string "Ich bin kein Trainer. Ich nicht. Aber\n"
	.string "ich kann dir trotzdem einen nützlichen\l"
	.string "Rat geben.\p"
	.string "Also, abgemacht! Wir werden zusammen\n"
	.string "nach der Pokémon Meisterschaft\l"
	.string "streben!\p"
	.string "Als Trainer musst du die Orden der\n"
	.string "Arenen sammeln, habe ich Recht?\p"
	.string "Aber die Arenaleiter sind nicht gerade\n"
	.string "einfach zu besiegen!\p"
	.string "Und hier komme ich ins Spiel!\n"
	.string "Ich werde dir einen Expertentipp geben!\p"
	.string "Felizia, die Arenaleiterin, setzt\n"
	.string "Gestein-Pokémon ein.\p"
	.string "Ein Gestein-Pokémon ist sehr zäh,\n"
	.string "hat aber gegen Wasser- und Pflanzen-\l"
	.string "Attacken keine Chance.\p"
	.string "Komm wieder vorbei, wenn du die Arena-\n"
	.string "leiterin besiegt hast.\p"
	.string "Nun zeig, was du drauf hast!$"
#else
	.string "Yo, how's it going?\p"
	.string "Listen, my friend!\n"
	.string "Would you like to become the CHAMPION?\p"
	.string "I'm no TRAINER, not me, but I can\n"
	.string "sure give you winning advice.\p"
	.string "That's settled, then! We'll aim for the\n"
	.string "POKéMON CHAMPIONSHIP together!\p"
	.string "It's your job as a TRAINER to collect\n"
	.string "GYM BADGES, am I right?\p"
	.string "But GYM LEADERS aren't pushovers!\p"
	.string "And that's where I come in!\n"
	.string "I'm here to provide expert advice!\p"
	.string "ROXANNE, the GYM LEADER, is a user\n"
	.string "of ROCK-type POKéMON.\p"
	.string "The ROCK type is very durable, but\n"
	.string "it can't stand WATER-type and\l"
	.string "GRASS-type moves.\p"
	.string "Come see me afterwards, if you beat\n"
	.string "the GYM LEADER.\p"
	.string "Well, go for it!$"
#endif

RustboroCity_Gym_Text_GymGuidePostVictory:
#if GERMAN
	.string "Hui! Was für ein atemberaubender Sieg!\n"
	.string "Meine Zurufe müssen gewirkt haben!\p"
	.string "Großartig!\n"
	.string "Schau mal auf deinen Trainerpass.\p"
	.string "Der Steinorden, den du gerade bekommen\n"
	.string "hast, müsste dort schon vermerkt sein.\n"
	.string "\p"
	.string "Nun hast du den ersten Schritt zur\n"
	.string "Meisterschaft schon erfolgreich\l"
	.string "hinter dir!\p"
	.string "Ein großartiges Gefühl!$"
#else
	.string "Whoa! What a breathtaking victory!\n"
	.string "My cheering must've worked!\p"
	.string "Great!\n"
	.string "Check your TRAINER CARD.\p"
	.string "The STONE BADGE you got should be\n"
	.string "properly recorded on it.\p"
	.string "In other words…\p"
	.string "You've climbed the first step on\n"
	.string "the stairs to the CHAMPIONSHIP!\p"
	.string "That's got to feel awesome!$"
#endif

RustboroCity_Gym_Text_JoshIntro:
#if GERMAN
	.string "Unterschätze die Trainer einer Arena\n"
	.string "nicht! Ich zeige dir, warum wir die\l"
	.string "Besten sind!$"
#else
	.string "Don't take us GYM TRAINERS lightly!\n"
	.string "I'll show you why we're better!$"
#endif

RustboroCity_Gym_Text_JoshDefeat:
#if GERMAN
	.string "Du warst viel zu gut für mich…$"
#else
	.string "You were too good for me…$"
#endif

RustboroCity_Gym_Text_JoshPostBattle:
#if GERMAN
	.string "Du hast noch gar nicht gesehen, was\n"
	.string "Gestein-Pokémon alles können.$"
#else
	.string "You haven't seen anything of the ROCK\n"
	.string "type's terrifying power!$"
#endif

RustboroCity_Gym_Text_TommyIntro:
#if GERMAN
	.string "Wenn du mich nicht besiegen kannst,\n"
	.string "hast du keine Chance gegen Felizia.$"
#else
	.string "If you can't beat me, you won't stand\n"
	.string "a chance against ROXANNE!$"
#endif

RustboroCity_Gym_Text_TommyDefeat:
#if GERMAN
	.string "Wow! Du hast wirklich Talent!$"
#else
	.string "Wow! You've got some potential!$"
#endif

RustboroCity_Gym_Text_TommyPostBattle:
#if GERMAN
	.string "Felizia ist um ein Vielfaches stärker\n"
	.string "als ich.\p"
	.string "Du solltest dich besser wappnen!$"
#else
	.string "ROXANNE is stronger than me by\n"
	.string "several times.\p"
	.string "You'd better be on your guard!$"
#endif

RustboroCity_Gym_Text_MarcIntro:
#if GERMAN
	.string "Wir sind hier mitten in einer Stadt,\n"
	.string "na und?!?\p"
	.string "Meine Gestein-Pokémon müssen sich\n"
	.string "einfach austoben!$"
#else
	.string "We might be in the middle of town,\n"
	.string "but so what?\p"
	.string "My ROCK POKéMON need room to\n"
	.string "rampage!$"
#endif

RustboroCity_Gym_Text_MarcDefeat:
#if GERMAN
	.string "Mann! Mann! Mann! Unser Herausforderer\n"
	.string "ist aber ein lebhaftes Wesen!$"
#else
	.string "Oh, man oh man!\n"
	.string "Our challenger is one feisty customer!$"
#endif

RustboroCity_Gym_Text_MarcPostBattle:
#if GERMAN
	.string "Ich muss es unserer Leiterin\n"
	.string "überlassen.\p"
	.string "Sie ist clever und geschickt, da sie\n"
	.string "in ihrem zarten Alter schon Gestein-\l"
	.string "Pokémon aufzieht.$"
#else
	.string "I have to hand it to our LEADER.\p"
	.string "It took smarts and sense for her to\n"
	.string "pick the ROCK type at her young age.$"
#endif

RustboroCity_Gym_Text_RoxanneIntro:
#if GERMAN
	.string "Hallo, ich bin Felizia, die Leiterin der\n"
	.string "Arena von Metarost City.\p"
	.string "Ich wurde Arenaleiterin, um mein\n"
	.string "Wissen, das ich in der Pokémon Trainer-\l"
	.string "schule erworben habe, umzusetzen.\p"
	.string "Würdest du mir bitte zeigen, wie du\n"
	.string "kämpfst und mit welchen Pokémon?$"
#else
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
	.string "POKéMON GYM LEADER.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"
#endif

RustboroCity_Gym_Text_RoxanneDefeat:
#if GERMAN
	.string "So…\n"
	.string "Ich habe verloren…\p"
	.string "Es scheint, ich muss noch eine ganze\n"
	.string "Menge lernen…\p"
	.string "Ich verstehe schon.\p"
	.string "Die Regeln der Pokémon Liga schreiben\n"
	.string "vor, dass Trainer, die einen Arena-\l"
	.string "leiter besiegt haben, dieses erhalten.\p"
	.string "Bitte nimm den offiziellen Pokémon Liga\n"
	.string "Steinorden an!$"
#else
	.string "So…\n"
	.string "I lost…\p"
	.string "It seems that I still have much more\n"
	.string "to learn…\p"
	.string "I understand.\p"
	.string "The POKéMON LEAGUE's rules state\n"
	.string "that TRAINERS are to be given this\l"
	.string "if they defeat a GYM LEADER.\p"
	.string "Please accept the official POKéMON\n"
	.string "LEAGUE STONE BADGE.$"
#endif

RustboroCity_Gym_Text_ReceivedStoneBadge:
#if GERMAN
	.string "{PLAYER} hat den Steinorden von\n"
	.string "Felizia erhalten.$"
#else
	.string "{PLAYER} received the STONE BADGE\n"
	.string "from ROXANNE.$"
#endif

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
#if GERMAN
	.string "Der Steinorden erhöht die Kraft der\n"
	.string "Attacken deiner Pokémon.\p"
	.string "Außerdem sind sie nun in der Lage, die\n"
	.string "VM Zerschneider auch außerhalb eines\l"
	.string "Kampfes einzusetzen.\p"
	.string "Dies möchte ich dir auch noch geben.$"
#else
	.string "The STONE BADGE heightens the ATTACK\n"
	.string "power of your POKéMON.\p"
	.string "It also enables them to use the HM move\n"
	.string "CUT outside of battle.\p"
	.string "Please take this with you, too.$"
#endif

RustboroCity_Gym_Text_ExplainRockTomb:
#if GERMAN
	.string "Diese TM39 enthält Felsgrab.\p"
	.string "Sie richtet nicht nur durch das Fallen\n"
	.string "von Steinen Schaden an, sondern\l"
	.string "reduziert auch die Initiative.\p"
	.string "Sobald du eine TM aktivierst, wird die\n"
	.string "Attacke einem Pokémon beigebracht.\p"
	.string "Aber vergiss nicht, dass eine TM nur\n"
	.string "einmal beigebracht werden kann. Ihr\l"
	.string "Einsatz will also überlegt sein.$"
#else
	.string "That TECHNICAL MACHINE, TM39,\n"
	.string "contains ROCK TOMB.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers SPEED.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a POKéMON.\p"
	.string "Remember, a TM can be used only once,\n"
	.string "so think before you use it.$"
#endif

RustboroCity_Gym_Text_RoxannePostBattle:
#if GERMAN
	.string "Da du so stark bist, solltest du auch\n"
	.string "die anderen Arenaleiter\l"
	.string "herausfordern.\p"
	.string "Du lernst wertvolle Dinge dazu, wenn\n"
	.string "du gegen viele Trainer antrittst.$"
#else
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"
#endif

RustboroCity_Gym_Text_GymStatue:
#if GERMAN
	.string "Pokémon Arena von Metarost City$"
#else
	.string "RUSTBORO CITY POKéMON GYM$"
#endif

RustboroCity_Gym_Text_GymStatueCertified:
#if GERMAN
	.string "Pokémon Arena von Metarost City\p"
	.string "Felizias anerkannte Trainer:\n"
	.string "{PLAYER}$"
#else
	.string "RUSTBORO CITY POKéMON GYM\p"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"
#endif

RustboroCity_Gym_Text_RoxanneRegisterCall:
#if GERMAN
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "…\l"
	.string "Piep!\p"
	.string "Felizia: Oh, hallo {PLAYER}.\n"
	.string "Hier ist Felizia aus Metarost City.\p"
	.string "Kamillo hat mir erzählt, dass du\n"
	.string "die Trainer in atemberaubender\l"
	.string "Geschwindigkeit aussuchst und\l"
	.string "besiegst.\p"
	.string "Ich denke aber nicht, dass ich\n"
	.string "gegen dich verlieren werde.\p"
	.string "Ich werde meine Arena wieder\n"
	.string "aufbauen. Dann steht deiner He-\l"
	.string "rausforderung nichts mehr im Weg.\p"
	.string "Du bist doch bestimmt genauso\n"
	.string "ungeduldig wie ich, nicht wahr?\p"
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "…\l"
	.string "Klick!$"
#else
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
	.string "I heard from BRAWLY that you're\n"
	.string "moving up through the ranks of\l"
	.string "TRAINERS at an incredible clip.\p"
	.string "Well, I'd rather not think that\n"
	.string "I can't beat you.\p"
	.string "I promise, I will shape up my GYM\n"
	.string "so that you may challenge us again.\p"
	.string "I hope you'll be looking forward to\n"
	.string "that occasion as much as me!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"
#endif

RustboroCity_Gym_Text_RegisteredRoxanne:
#if GERMAN
	.string "Arenaleiterin Felizia wurde im\n"
	.string "Pokénav-Verzeichnis eingetragen.$"
#else
	.string "Registered GYM LEADER ROXANNE\n"
	.string "in the POKéNAV.$"
#endif

RustboroCity_Gym_Text_RoxannePreRematch:
#if GERMAN
	.string "Felizia: Ich freue mich, dich wieder\n"
	.string "zu sehen. Ich bin die Arenaleiterin\l"
	.string "Felizia.\p"
	.string "Ich bin sicher, wir beide haben seit\n"
	.string "unserer letzten Begegnung viele\l"
	.string "Erfahrungen gesammelt.\p"
	.string "Ich würde gerne sehen, um wie vieles\n"
	.string "besser wir beide geworden sind. Los!$"
#else
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"
#endif

RustboroCity_Gym_Text_RoxanneRematchDefeat:
#if GERMAN
	.string "Grrrrrr…\n"
	.string "Ich habe schon wieder verloren…$"
#else
	.string "Grr…\n"
	.string "Again, I have lost…$"
#endif

RustboroCity_Gym_Text_RoxannePostRematch:
#if GERMAN
	.string "Felizia: Ich muss anscheinend noch\n"
	.string "viel über Pokémon-Kämpfe lernen.\p"
	.string "Aber genau deshalb liebe ich das\n"
	.string "Kämpfen um so mehr.$"
#else
	.string "ROXANNE: I still have much to learn\n"
	.string "when it comes to battling POKéMON.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"
#endif

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
#if GERMAN
	.string "Felizia: Ich freue mich, dich wieder\n"
	.string "zu sehen. Ich bin die Arenaleiterin\l"
	.string "Felizia.\p"
	.string "Ich bin sicher, wir beide haben seit\n"
	.string "unserer letzten Begegnung viele\l"
	.string "Erfahrungen gesammelt.\p"
	.string "Oh… Schade!\n"
	.string "Du hast ja nur ein Pokémon dabei!\p"
	.string "Bitte komm doch wieder, wenn du\n"
	.string "mindestens zwei dabei hast.$"
#else
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one POKéMON with you?\p"
	.string "Please return with at least one more\n"
	.string "POKéMON.$"
#endif
