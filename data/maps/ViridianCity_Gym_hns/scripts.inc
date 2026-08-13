ViridianCity_Gym_hns_MapScripts::
	.byte 0

ViridianCity_Gym_EventScript_Blue::
	lock
	faceplayer
	goto_if_unset FLAG_HIDE_DOJO_BLUE, ViridianCity_Gym_EventScript_BlueAtDojo
	goto_if_set FLAG_DEFEATED_VIRIDIAN_GYM, ViridianCity_Gym_EventScript_BlueGotoDojo
	goto_if_set FLAG_DEFEATED_VIRIDIAN_GYM, ViridianCity_Gym_EventScript_Blue_Defeated
	msgbox ViridianCity_Gym_Text_LeaderBlue_Before, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BLUE_HNS, ViridianCity_Gym_Text_LeaderBlue_Win
	message ViridianCity_Gym_Text_ReceivedEarthBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox ViridianCity_Gym_Text_LeaderBlue_After, MSGBOX_DEFAULT
	giveitem ITEM_TM_TRICK_ROOM
	setflag FLAG_BADGE16_GET
	setflag FLAG_DEFEATED_VIRIDIAN_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 16
	call Common_EventScript_SetGymTrainers_hns
	closemessage
	setflag FLAG_HIDE_LEAGUE_BLACKBELT
	setflag FLAG_HIDE_CERULEANCAVE_GUARD
	setflag FLAG_HIDE_SEAFOAM_BLAINE
	clearflag FLAG_HIDE_CINNABAR_BLAINE
	setvar VAR_OAK_MT_SILVER_CALL, 1
	release
	end

ViridianCity_Gym_EventScript_Blue_Defeated::
	msgbox ViridianCity_Gym_Text_LeaderBlue_Epilogue, MSGBOX_DEFAULT
	closemessage
	release
	end

ViridianCity_Gym_EventScript_BlueGotoDojo::
	msgbox ViridianCity_Gym_Text_BlueGotoDojo, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_DOJO_BLUE
	release
	end

ViridianCity_Gym_Text_BlueGotoDojo:
#if GERMAN
	.string "Blau: Zurück für mehr?\p"
	.string "Wenn du kämpfen willst, komm zum\n"
	.string "Kampf-Dojo!$"
#else
	.string "BLUE: Back for more already?\p"
	.string "If you want another shot at me,\n"
	.string "come to the FIGHTING DOJO!$"
#endif

ViridianCity_Gym_EventScript_BlueAtDojo::
	msgbox ViridianCity_Gym_Text_LeaderBlue_Epilogue, MSGBOX_DEFAULT
	closemessage
	release
	end

ViridianCity_Gym_Text_LeaderBlue_Before:
#if GERMAN
	.string "Blau: Hey! Da bist du ja!\p"
	.string "Auf der Zinnoberinsel hatte ich ein\n"
	.string "bisschen Bammel, aber inzwischen habe\l"
	.string "ich extrem Lust darauf gekriegt, gegen\l"
	.string "dich zu kämpfen!\p"
	.string "… … …\p"
	.string "Du hast also alle Arenaleiter in Johto\n"
	.string "zu Kleinholz verarbeitet, was?\p"
	.string "Hahaha! Dann müssen das ja alles\n"
	.string "ziemliche Jammerlappen sein!\p"
	.string "Aber warten wir’s mal ab!\n"
	.string "Wenn wir gegeneinander kämpfen, werde\l"
	.string "ich schon sehen, ob du was drauf hast\l"
	.string "oder nur ein Schaumschläger bist!$"
#else
	.string "BLUE: Yo! Finally got here, huh?\p"
	.string "I wasn't in the mood at CINNABAR,\p"
	.string "but now I'm ready to battle you.\p"
	.string "…\p"
	.string "You're telling me you conquered all\n"
	.string "the GYMS in JOHTO?\p"
	.string "Heh! JOHTO's GYMS must be pretty\n"
	.string "pathetic then.\p"
	.string "Hey, don't worry about it.\p"
	.string "I'll know if you are good or not by\n"
	.string "battling you right now.\p"
	.string "Ready, JOHTO CHAMP?$"
#endif

ViridianCity_Gym_Text_LeaderBlue_Win:
#if GERMAN
	.string "Blau: Was?\p"
	.string "Wie konnte ich gegen dich verlieren?\p"
	.string "…\p"
	.string "Tch, na gut… Nimm dies, es ist\n"
	.string "der Erdorden.$"
#else
	.string "BLUE: What?\p"
	.string "How the heck did I lose to you?\p"
	.string "…\p"
	.string "Tch, all right… Here, take this--it's\n"
	.string "EARTHBADGE.$"
#endif

ViridianCity_Gym_Text_ReceivedEarthBadge:
#if GERMAN
	.string "{PLAYER} erhält den Erdorden!$"
#else
	.string "{PLAYER} received EARTHBADGE.$"
#endif

ViridianCity_Gym_Text_LeaderBlue_After:
#if GERMAN
	.string "Blau: … … …\p"
	.string "Ich hatte dich unterschätzt.\n"
	.string "Du bist kein Schaumschläger, sondern\l"
	.string "ein fähiger Trainer!\l"
	.string "Ich gebe es offen zu!\p"
	.string "Aber vergiss nicht…\p"
	.string "Irgendwann wird der Tag kommen,\n"
	.string "an dem ich dich besiege!$"
#else
	.string "BLUE: …\p"
	.string "All right, I was wrong. You're the\n"
	.string "real deal. You are a good trainer.\p"
	.string "But I'm going to beat you someday.\p"
	.string "Don't you forget it!$"
#endif

ViridianCity_Gym_Text_LeaderBlue_Epilogue:
#if GERMAN
	.string "Blau: Hör zu.\p"
	.string "Du verlierst besser nicht, bis\n"
	.string "ich dich besiegt habe. Verstanden?$"
#else
	.string "BLUE: Listen, you.\p"
	.string "You'd better not lose until I beat\n"
	.string "you. Got it?$"
#endif


ViridianCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_VIRIDIAN_GYM, ViridianCity_Gym_EventScript_GymGuyAfter
	msgbox ViridianCity_Gym_Text_Guide, MSGBOX_NPC
	end

ViridianCity_Gym_EventScript_GymGuyAfter::
	msgbox ViridianCity_Gym_Text_Guide_Win, MSGBOX_NPC
	end

ViridianCity_Gym_Text_Guide:
#if GERMAN
	.string "He! Ein Champ in spe!\p"
	.string "Wie läuft es so?\n"
	.string "Du hast wohl gerade eine Glückssträhne.\p"
	.string "Der Arenaleiter hat den Champ\n"
	.string "vor drei Jahren besiegt.\p"
	.string "Das wird kein Kinderspiel!\p"
	.string "Gib alles, was du hast!$"
#else
	.string "Yo, CHAMP in making!\p"
	.string "How's it going? Looks like you're on\n"
	.string "a roll.\p"
	.string "The GYM LEADER is a guy who battled\n"
	.string "the CHAMPION three years ago.\p"
	.string "He's no pushover.\p"
	.string "Give it everything you've got!$"
#endif

ViridianCity_Gym_Text_Guide_Win:
#if GERMAN
	.string "Es ist wahr, du bist wirklich stark!\p"
	.string "Dieser Kampf hat mich emotional so\n"
	.string "mitgenommen, dass mir doch glatt die\l"
	.string "Tränen gekommen sind.$"
#else
	.string "Man, you are truly tough…\p"
	.string "That was a heck of an inspirational\n"
	.string "battle. It brought tears to my eyes.$"
#endif


ViridianCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE16_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
	msgbox ViridianCity_Gym_Text_GymStatue
	releaseall
	end

ViridianCity_Gym_EventScript_GymStatuePostVictory::
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

ViridianCity_Gym_Text_GymStatue::
#if GERMAN
    .string "Pokémon-Arena von Vertania City\n"
    .string "Leiter: Blau\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot$"
#else
    .string "VIRIDIAN POKéMON GYM\n"
    .string "LEADER: BLUE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"
#endif

ViridianCity_Gym_Text_GymStatuePlayerWon::
#if GERMAN
    .string "Pokémon-Arena von Vertania City\n"
    .string "Leiter: Blau\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot, {PLAYER}$"
#else
    .string "VIRIDIAN POKéMON GYM\n"
    .string "LEADER: BLUE\p"
    .string "WINNING TRAINERS:\n"
	.string "BLUE, RED, {PLAYER}$"
#endif
