SeafoamIslands_Gym_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_Gym_OnTransition
	.byte 0

SeafoamIslands_Gym_OnTransition:
	setflag FLAG_TEMP_1
	end

SeafoamIslands_Gym_EventScript_Blaine::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CINNABAR_ISLAND_GYM, SeafoamIslands_Gym_EventScript_Blaine_Defeated
	msgbox SeafoamIslands_Gym_Text_BlaineIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BLAINE_HNS, SeafoamIslands_Gym_Text_BlaineWinLoss
	message SeafoamIslands_Gym_Text_ReceivedVolcanoBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SeafoamIslands_Gym_Text_TM, MSGBOX_DEFAULT
	giveitem ITEM_TM_OVERHEAT
	setflag FLAG_BADGE15_GET
	setflag FLAG_DEFEATED_CINNABAR_ISLAND_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 15
	clearflag FLAG_HIDE_SEAFOAM_GYMGUY
	call Common_EventScript_SetGymTrainers_hns
	closemessage
	release
	end

SeafoamIslands_Gym_EventScript_Blaine_Defeated::
	msgbox SeafoamIslands_Gym_Text_BlaineAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

SeafomIslands2_EventScript_GymGuide::
	goto_if_set FLAG_TEMP_2, SeafomIslands2_EventScript_GymGuide2
	msgbox SeafoamIslands_Gym_Text_GymGuideWin, MSGBOX_NPC
	setflag FLAG_TEMP_2
	end
SeafomIslands2_EventScript_GymGuide2::
	msgbox SeafoamIslands_Gym_Text_GymGuideWin2, MSGBOX_NPC
	end

SeafoamIslands_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE15_GET, SeafoamIslands_Gym_EventScript_GymStatuePostVictory
	msgbox SeafoamIslands_Gym_Text_GymStatue
	releaseall
	end

SeafoamIslands_Gym_EventScript_GymStatuePostVictory::
	msgbox SeafoamIslands_Gym_Text_GymStatuePlayerWon
	releaseall
	end

SeafoamIslands_Gym_Text_GymStatue::
#if GERMAN
    .string "Zinnober Pokémon-Arena\n"
    .string "Leiter: Pyro\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot$"
#else
    .string "CINNABAR POKéMON GYM\n"
    .string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"
#endif

SeafoamIslands_Gym_Text_GymStatuePlayerWon::
#if GERMAN
    .string "Zinnober Pokémon-Arena\n"
    .string "Leiter: Pyro\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot, {PLAYER}$"
#else
    .string "CINNABAR POKéMON GYM\n"
    .string "LEADER: BLAINE\p"
    .string "WINNING TRAINERS:\n"
	.string "BLUE, RED, {PLAYER}$"
#endif

SeafoamIslands_Gym_Text_TM:
#if GERMAN
	.string "Nimm auch das hier. Diese TM\n"
	.string "enthält die mächtige Hitzekoller.\p"
	.string "Ich hoffe, dein nächster Gegner\n"
	.string "hat {COLOR RED}Feuerheiler{COLOR DARK_GRAY} dabei! Waaah!$"
#else
	.string "Take this too. This TM contains\n"
	.string "the awesome OVERHEAT.\p"
	.string "I hope your next opponent has an\n"
	.string "extra BURN HEAL! Waaah!$"
#endif

SeafoamIslands_Gym_Text_BlaineIntro:
	.string "Pyro: Waaah!\p"
	.string "Meine Arena in Lavados ist\n"
	.string "abgebrannt.\p"
	.string "Meine Feuer-Pokémon und ich sind\n"
	.string "wegen des Vulkans obdachlos.\p"
	.string "Waaah!\p"
	.string "Aber ich bin als Arena-leiter\n"
	.string "hier in dieser Höhle zurück.\p"
	.string "Wenn du mich besiegst, bekommst\n"
	.string "du einen Orden.\p"
	.string "Ha! Besorg dir lieber\n"
	.string "Feuerheiler!$"

SeafoamIslands_Gym_Text_BlaineWinLoss:
#if GERMAN
	.string "Pyro: Toll. Ich bin ausgebrannt…\p"
	.string "Du hast den Vulkanorden\n"
	.string "verdient!$"
#else
	.string "BLAINE: Awesome. I've burned out…\p"
	.string "You've earned VOLCANOBADGE!$"
#endif

SeafoamIslands_Gym_Text_ReceivedVolcanoBadge:
#if GERMAN
	.string "{PLAYER} erhielt den\n"
	.string "Vulkanorden.$"
#else
	.string "{PLAYER} received VOLCANOBADGE.$"
#endif

SeafoamIslands_Gym_Text_BlaineAfterBattle:
#if GERMAN
	.string "Pyro: Diesmal habe ich verloren. Aber\n"
	.string "wenn die Arena auf der {COLOR RED}Zinnoberinsel{COLOR DARK_GRAY}\l"
	.string "wieder steht, wird der Sieg mein sein!\p"
	.string "Lass uns irgendwann mal wieder kämpfen!$"
#else
	.string "BLAINE: I did lose this time, but\n"
	.string "I'm going to win the next time.\p"
	.string "When I rebuild my CINNABAR GYM,\n"
	.string "we'll have to have a rematch.$"
#endif

SeafoamIslands_Gym_Text_BlaineFightDone:
#if GERMAN
	.string "Pyro: Ich mache meine Feuer-Pokémon\n"
	.string "noch mal ein ganzes Stück stärker!$"
#else
	.string "BLAINE: My fire POKéMON will be\n"
	.string "even stronger.\p"
	.string "Just you watch!$"
#endif

SeafoamIslands_Gym_Text_BlaineRematch:
#if GERMAN
	.string "Pyro: Whoa!\p"
	.string "Du bist jetzt Kanto-champion!\p"
	.string "Das ist brennend heiß!\p"
	.string "Deine Fähigkeiten sind erstklassig.\p"
	.string "Ich bin immer kampfbereit.\p"
	.string "Möchtest du einen Rückkampf?$"
#else
	.string "BLAINE: Whoa!\p"
	.string "I see you've become the KANTO\n"
	.string "CHAMPION!\p"
	.string "That's blazing!\p"
	.string "Your skills are top-notch.\p"
	.string "I'm always up for a battle.\p"
	.string "Want to have a rematch with me?$"
#endif

SeafoamIslands_Gym_Text_BlaineRematchDefeat:
#if GERMAN
	.string "Pyro: Deine Fähigkeiten\n"
	.string "sind wirklich feurig!\p"
	.string "Du hast meine Verteidigung\n"
	.string "niedergebrannt.$"
#else
	.string "BLAINE: Your skills are truly fiery!\p"
	.string "You've burned right through my\n"
	.string "defenses.$"
#endif

SeafoamIslands_Gym_Text_GymGuideWin:
#if GERMAN
	.string "Yo!\p"
	.string "… Hm? Ist es schon vorbei?\p"
	.string "Sorry, sorry!\p"
	.string "Die Zinnober-Arena war weg, ich\n"
	.string "wusste nicht, wo ich dich finde.\p"
	.string "Aber hey, du bist auch ohne\n"
	.string "meinen Rat stark genug.\l"
	.string "Ich wusste, du gewinnst!$"
#else
	.string "Yo!\p"
	.string "… Huh? It's over already?\p"
	.string "Sorry, sorry!\p"
	.string "CINNABAR GYM was gone, so I didn't\n"
	.string "know where to find you.\p"
	.string "But, hey, you're plenty strong even\n"
	.string "without my advice. I knew you'd win!$"
#endif

SeafoamIslands_Gym_Text_GymGuideWin2:
#if GERMAN
	.string "Eine Pokémon-Arena kann überall\n"
	.string "sein, solange der Arena-Leiter\l"
	.string "da ist.\p"
	.string "Ein Gebäude braucht es nicht.$"
#else
	.string "A POKéMON GYM can be anywhere as\n"
	.string "long as the GYM LEADER is there.\p"
	.string "There's no need for a building.$"
#endif
