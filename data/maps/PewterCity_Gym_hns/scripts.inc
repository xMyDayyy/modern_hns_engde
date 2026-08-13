PewterCity_Gym_hns_MapScripts::
	.byte 0



PewterCity_Gym_EventScript_Jerry::
	trainerbattle_single TRAINER_JERRY_HNS, PewterCity_Gym_Text_CamperJerry_Seen, PewterCity_Gym_Text_CamperJerry_Beaten
	msgbox PewterCity_Gym_Text_CamperJerry_AfterBattle, MSGBOX_AUTOCLOSE
	end

PewterCity_Gym_EventScript_Brock::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_PEWTER_GYM, PewterCity_Gym_EventScript_Brock_Defeated
	msgbox PewterCity_Gym_Text_Brock_Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BROCK_HNS, PewterCity_Gym_Text_Brock_WinLoss
	message PewterCity_Gym_Text_ReceivedBoulderBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox PewterCity_Gym_Text_Brock_FightDone, MSGBOX_DEFAULT
	giveitem ITEM_TM_ROCK_SLIDE
	setflag FLAG_BADGE09_GET
	setflag FLAG_DEFEATED_PEWTER_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 9
	call Common_EventScript_SetGymTrainers_hns
	clearflag FLAG_HIDE_DIGLETT_BROCK
	closemessage
	release
	end

PewterCity_Gym_EventScript_Brock_Defeated::
	goto_if_unset FLAG_HIDE_DOJO_BROCK, PewterCity_Gym_EventScript_Brock_Trade
	msgbox PewterCity_Gym_Text_Brock_FightDone, MSGBOX_DEFAULT
	closemessage
	release
	end


PewterCity_Gym_Text_Brock_Intro:
#if GERMAN
	.string "Rocko: Wow! Mit Leuten aus Johto habe\n"
	.string "ich es hier nur selten zu tun!\p"
	.string "Mein Name ist Rocko! Ich bin der\n"
	.string "Arenaleiter von Marmoria City.\p"
	.string "Mein Fachgebiet sind Gestein-Pokémon!\p"
	.string "Von ein paar halbherzigen Attacken\n"
	.string "lassen sich meine Pokémon ganz\l"
	.string "bestimmt nicht beeindrucken!\l"
	.string "Das juckt sie nicht im Geringsten!\p"
	.string "Und jetzt los! Lass uns kämpfen!$"
#else
	.string "BROCK: Wow, it's not often that we get a\n"
	.string "challenger from JOHTO.\p"
	.string "I'm BROCK, the PEWTER GYM LEADER.\p"
	.string "I'm an expert on ROCK-type POKéMON.\p"
	.string "My POKéMON are impervious to most\n"
	.string "physical attacks. You'll have a hard\l"
	.string "time inflicting any damage.\p"
	.string "Come on!$"
#endif

PewterCity_Gym_Text_Brock_WinLoss:
#if GERMAN
	.string "Rocko: Unglaublich! Die mächtigen\n"
	.string "Attacken deiner Pokémon haben meine\l"
	.string "Verteidigung durchbrochen.\p"
	.string "Hier! Nimm diesen Orden!$"
#else
	.string "BROCK: Your POKéMON's powerful attacks\n"
	.string "overcame my rock-hard defense…\p"
	.string "You're stronger than I expected…\p"
	.string "Go ahead--take this BADGE.$"
#endif

PewterCity_Gym_Text_ReceivedBoulderBadge:
#if GERMAN
	.string "{PLAYER} erhält den Felsenorden!$"
#else
	.string "{PLAYER} received BOULDERBADGE.$"
#endif

PewterCity_Gym_Text_Brock_BoulderBadge:
#if GERMAN
	.string "Rocko: {PLAYER}, danke.\n"
	.string "Der Kampf hat mir gefallen, auch wenn\l"
	.string "ich etwas enttäuscht bin.\p"
	.string "Der Felsenorden macht deine Pokémon\n"
	.string "noch stärker.$"
#else
	.string "BROCK: {PLAYER}, thanks. I enjoyed\n"
	.string "battling you, even though I am a bit\l"
	.string "upset.\p"
	.string "That BOULDERBADGE will make your\n"
	.string "POKéMON even more powerful.$"
#endif

PewterCity_Gym_Text_Brock_FightDone:
#if GERMAN
	.string "Rocko: Es ist eine große, weite Welt!\n"
	.string "Da draußen gibt es bestimmt noch jede\l"
	.string "Menge andere starke Trainer wie dich.\p"
	.string "Auch ich werde an mir feilen, dass ich\n"
	.string "ein noch viel besserer Trainer werde!$"
#else
	.string "BROCK: The world is huge. There are\n"
	.string "still many strong trainers like you.\p"
	.string "Just wait and see. I'm going to become\n"
	.string "a lot stronger too.$"
#endif

PewterCity_Gym_Text_CamperJerry_Seen:
#if GERMAN
	.string "Die Trainer dieser Pokémon-Arena\n"
	.string "setzen Gestein-Pokémon ein.\p"
	.string "Gestein-Pokémon haben hohe\n"
	.string "Verteidigungs-Werte.\p"
	.string "Die Kämpfe können sehr lange dauern.\n"
	.string "Bist du bereit dafür?$"
#else
	.string "The trainers of this GYM use ROCK-type\n"
	.string "POKéMON.\p"
	.string "The ROCK-type has high DEFENSE.\p"
	.string "Battles could end up going a long time.\n"
	.string "Are you ready for this?$"
#endif

PewterCity_Gym_Text_CamperJerry_Beaten:
#if GERMAN
	.string "Ich muss diese Kämpfe gewinnen…$"
#else
	.string "I have to win these battles…$"
#endif

PewterCity_Gym_Text_CamperJerry_AfterBattle:
#if GERMAN
	.string "He, du da! Trainer aus Johto! Rocko ist\n"
	.string "stark. Es wird dir übel bekommen, wenn\l"
	.string "du ihn nicht ernst nimmst.$"
#else
	.string "Hey, you! Trainer from JOHTO! BROCK is\n"
	.string "tough. He'll punish you if you don't\l"
	.string "take him seriously.$"
#endif

PewterCity_Gym_Text_Guide:
#if GERMAN
	.string "Hey, du! Zukünftiger Champ!\p"
	.string "Heute scheint ja echt dein Tag zu sein!\p"
	.string "Hast du vor, alle Arenaleiter von Kanto\n"
	.string "zum Kampf herauszufordern?\p"
	.string "Sie sind starke Gegner und stehen\n"
	.string "ihren Kollegen aus Johto in nichts nach!$"
#else
	.string "Yo! CHAMP in making! You're really\n"
	.string "rocking.\p"
	.string "Are you battling the GYM LEADERS of\n"
	.string "KANTO?\p"
	.string "They're strong and dedicated people,\n"
	.string "just like JOHTO's GYM LEADERS.$"
#endif

PewterCity_Gym_Text_Guide_Win:
#if GERMAN
	.string "Ja, aus dir wird wirklich mal ein Champ!\n"
	.string "Dieser Kampf war kein Problem für dich.\l"
	.string "Ehrlich, ich bin schwer beeindruckt!$"
#else
	.string "Yo! CHAMP in making! That GYM didn't\n"
	.string "give you much trouble.\p"
	.string "The way you took charge was really\n"
	.string "inspiring. I mean that seriously.$"
#endif

PewterCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_PEWTER_GYM, PewterCity_Gym_EventScript_GymGuyAfter
	msgbox PewterCity_Gym_Text_Guide, MSGBOX_NPC
	end

PewterCity_Gym_EventScript_GymGuyAfter::
	msgbox PewterCity_Gym_Text_Guide_Win, MSGBOX_NPC
	end


PewterCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE09_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
	msgbox PewterCity_Gym_Text_GymStatue
	releaseall
	end

PewterCity_Gym_EventScript_GymStatuePostVictory::
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

PewterCity_Gym_Text_GymStatue::
#if GERMAN
    .string "Pokémon-Arena von Marmoria City\n"
    .string "Leiter: Rocko\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot$"
#else
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"
#endif

PewterCity_Gym_Text_GymStatuePlayerWon::
#if GERMAN
    .string "Pokémon-Arena von Marmoria City\n"
    .string "Leiter: Rocko\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot, {PLAYER}$"
#else
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
	.string "BLUE, RED, {PLAYER}$"
#endif

PewterCity_Gym_EventScript_Brock_Trade::
	goto_if_set FLAG_PEWTER_GYM_NPC_TRADE_COMPLETED, PewterCity_Gym_EventScript_BrockTradeCompleted
	ingame_trade INGAME_TRADE_BONSLY, PewterCity_Gym_Text_BrockWantToTrade, PewterCity_Gym_EventScript_BrockDeclineTrade, PewterCity_Gym_EventScript_BrockNotRequestedMon, PewterCity_Gym_Text_BrockTakeCare
	setflag FLAG_PEWTER_GYM_NPC_TRADE_COMPLETED
	release
	end

PewterCity_Gym_EventScript_BrockDeclineTrade::
	msgbox PewterCity_Gym_Text_BrockDeclineTrade, MSGBOX_DEFAULT
	release
	end

PewterCity_Gym_EventScript_BrockNotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox PewterCity_Gym_Text_BrockNotRequestedMon, MSGBOX_DEFAULT
	release
	end

PewterCity_Gym_EventScript_BrockTradeCompleted::
	msgbox PewterCity_Gym_Text_BrockTradeCompleted, MSGBOX_DEFAULT
	release
	end

PewterCity_Gym_Text_BrockWantToTrade:
#if GERMAN
	.string "Rocko: Hey, {PLAYER}. Ich habe dieses\n"
	.string "Mobai gefunden, während ich in den\l"
	.string "Bergen trainierte.\p"
	.string "Es ist süß, braucht aber einen\n"
	.string "anderen Typ Trainer.\p"
	.string "Würdest du ein {STR_VAR_1} für mein\n"
	.string "{STR_VAR_2} tauschen?$"
#else
	.string "BROCK: Hey, {PLAYER}. I found this\n"
	.string "little BONSLY while training in the\l"
	.string "mountains.\p"
	.string "It's cute, but I think it needs\n"
	.string "a different kind of trainer.\p"
	.string "Would you trade a {STR_VAR_1}\n"
	.string "for my {STR_VAR_2}?$"
#endif

PewterCity_Gym_Text_BrockTakeCare:
#if GERMAN
	.string "Rocko: Danke!\n"
	.string "Kümmere dich gut um Woody!$"
#else
	.string "BROCK: Thanks! Take good care of\n"
	.string "WOODY for me!$"
#endif

PewterCity_Gym_Text_BrockDeclineTrade:
#if GERMAN
	.string "Rocko: Nein? Das ist ok.\n"
	.string "Woody und ich werden trainieren.$"
#else
	.string "BROCK: No? That's okay.\n"
	.string "WOODY and I will keep training.$"
#endif

PewterCity_Gym_Text_BrockNotRequestedMon:
#if GERMAN
	.string "Rocko: Das ist kein {STR_VAR_1}.\n"
	.string "Das möchte ich nicht.$"
#else
	.string "BROCK: That's not a {STR_VAR_1}.\n"
	.string "That's not what I'm after.$"
#endif

PewterCity_Gym_Text_BrockTradeCompleted:
#if GERMAN
	.string "Rocko: Wie geht es Woody?\n"
	.string "Mobai sind härter als sie aussehen!$"
#else
	.string "BROCK: How's WOODY doing?\n"
	.string "BONSLY are tougher than they look!$"
#endif
