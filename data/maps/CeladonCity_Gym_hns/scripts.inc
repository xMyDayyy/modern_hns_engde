CeladonCity_Gym_hns_MapScripts::
	.byte 0


CeladonCity_Gym_EventScript_Erika::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CELADON_GYM, CeladonCity_Gym_EventScript_Erika_Defeated
	msgbox CeladonCity_Gym_Text_ErikaBeforeBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ERIKA_HNS, CeladonCity_Gym_Text_ErikaBeaten
	message CeladonCity_Gym_Text_PlayerReceivedRainbowBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CeladonCity_Gym_Text_ErikaExplainTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_GIGA_DRAIN
	setflag FLAG_BADGE12_GET
	setflag FLAG_DEFEATED_CELADON_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 12
	call Common_EventScript_SetGymTrainers_hns
	clearflag FLAG_HIDE_FOUNTAIN_ERIKA
	closemessage
	release
	end

CeladonCity_Gym_EventScript_Erika_Defeated::
	msgbox CeladonCity_Gym_Text_ErikaAfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

CeladonCity_Gym_Text_ErikaBeforeBattle:
#if GERMAN
	.string "Erika: Hallo… Schönes Wetter,\n"
	.string "nicht wahr? So angenehm…\p"
	.string "…Ich fürchte, ich könnte einnicken…\p"
	.string "Mein Name ist Erika. Ich bin die\n"
	.string "Leiterin der Prismania City Arena.\p"
	.string "…Oh? Ganz aus Johto, sagst du?\n"
	.string "Wie schön…\p"
	.string "Oh. Entschuldigung, ich habe nicht\n"
	.string "gemerkt, dass du mich herausfordern\l"
	.string "möchtest.\p"
	.string "Nun gut, aber ich werde nicht\n"
	.string "verlieren.$"
#else
	.string "ERIKA: Hello… Lovely weather,\n"
	.string "isn't it? It's so pleasant…\p"
	.string "…I'm afraid I may doze off…\p"
	.string "My name is ERIKA. I am the LEADER\n"
	.string "of CELADON GYM.\p"
	.string "…Oh? All the way from JOHTO, you\n"
	.string "say? How nice…\p"
	.string "Oh. I'm sorry, I didn't realize\n"
	.string "that you wished to challenge me.\p"
	.string "Very well, but I shall not lose.$"
#endif

CeladonCity_Gym_Text_ErikaBeaten:
#if GERMAN
	.string "Erika: Ich gebe mich geschlagen.\n"
	.string "Du bist wirklich sehr stark…\p"
	.string "Hier, nimm diesen Farborden.$"
#else
	.string "ERIKA: Oh! I concede defeat…\p"
	.string "You are remarkably strong…\p"
	.string "I shall give you RAINBOWBADGE…$"
#endif

CeladonCity_Gym_Text_PlayerReceivedRainbowBadge:
#if GERMAN
	.string "{PLAYER} erhält den Farborden!$"
#else
	.string "{PLAYER} received RAINBOWBADGE.$"
#endif

CeladonCity_Gym_Text_ErikaExplainTM:
#if GERMAN
	.string "Erika: Das war ein ganz ausgezeichneter\n"
	.string "Kampf! Ich bin beeindruckt!\p"
	.string "Dafür sollst du etwas ganz Besonderes\n"
	.string "bekommen! Die TM19 Gigasauger!\p"
	.string "Wenn eins deiner Pokémon diese Attacke\n"
	.string "einsetzt, erhält es selbst die Hälfte\l"
	.string "des Schadens, den sie angerichtet hat.\l"
	.string "Eine gar teuflische Attacke!$"
#else
	.string "ERIKA: That was a delightful\n"
	.string "match.\p"
	.string "I felt inspired. Please, I wish\n"
	.string "you to have this TM.\p"
	.string "It is GIGA DRAIN.\p"
	.string "It is a wonderful move that\n"
	.string "drains half the damage it inflicts\l"
	.string "to heal your POKéMON.\p"
	.string "Please use it if it pleases you…$"
#endif

CeladonCity_Gym_Text_ErikaAfterBattle:
#if GERMAN
	.string "Erika: Niemand verliert gerne…\p"
	.string "Aber es wirkt immer anspornend, wenn\n"
	.string "man einem starken Trainer begegnet.$"
#else
	.string "ERIKA: Losing leaves a bitter\n"
	.string "aftertaste…\p"
	.string "But knowing that there are strong\n"
	.string "trainers spurs me to do better…$"
#endif

CeladonCity_Gym_Text_ErikaRematch:
#if GERMAN
	.string "Erika: Oh, hallo.\p"
	.string "Was für eine Überraschung, Kanto-\n"
	.string "Champion!\p"
	.string "Es ist so schön, dich wiederzusehen.\p"
	.string "Deine Reise muss sehr aufregend\n"
	.string "gewesen sein.\p"
	.string "Auch Champions genießen eine\n"
	.string "Herausforderung.\p"
	.string "Willst du ein Rematch mit mir?$"
#else
	.string "ERIKA: Oh, hello.\p"
	.string "What a surprise, KANTO CHAMPION!\p"
	.string "It's so lovely to see you again.\p"
	.string "Your journey must have been so\n"
	.string "exciting.\p"
	.string "Even champions enjoy a challenge.\p"
	.string "Want to have a rematch with me?$"
#endif

CeladonCity_Gym_Text_ErikaRematchDefeat:
#if GERMAN
	.string "Erika: Niemand verliert gerne…\p"
	.string "Aber es wirkt immer anspornend, wenn\n"
	.string "man einem starken Trainer begegnet.$"
#else
	.string "ERIKA: Losing still leaves a\n"
	.string "bitter aftertaste…\p"
	.string "But knowing that there are strong\n"
	.string "trainers spurs me to do better…$"
#endif

CeladonCity_Gym_EventScript_Michelle::
	trainerbattle_single TRAINER_MICHELLE_HNS, CeladonCity_Gym_Text_LassMichelleSeen, CeladonCity_Gym_Text_LassMichelleBeaten
	msgbox CeladonCity_Gym_Text_LassMichelleAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_LassMichelleSeen:
#if GERMAN
	.string "Was guckst du denn so?!\n"
	.string "Noch nie eine Pokémon-Arena nur mit\l"
	.string "Mädchen gesehen?$"
#else
	.string "Do you think a girls-only GYM is\n"
	.string "rare?$"
#endif

CeladonCity_Gym_Text_LassMichelleBeaten:
#if GERMAN
	.string "Nein! Das ist so erniedrigend!$"
#else
	.string "Oh, bleah!$"
#endif

CeladonCity_Gym_Text_LassMichelleAfter:
#if GERMAN
	.string "Ich war nur unvorsichtig!$"
#else
	.string "I just got careless, that's all!$"
#endif


CeladonCity_Gym_EventScript_Tanya::
	trainerbattle_single TRAINER_TANYA_HNS, CeladonCity_Gym_Text_PicnickerTanyaSeen, CeladonCity_Gym_Text_PicnickerTanyaBeaten
	msgbox CeladonCity_Gym_Text_PicnickerTanyaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_PicnickerTanyaSeen:
#if GERMAN
	.string "Oh, ein Kampf? Das ist gruselig,\n"
	.string "aber OK!$"
#else
	.string "Oh, a battle? That's kind of scary,\n"
	.string "but OK!$"
#endif

CeladonCity_Gym_Text_PicnickerTanyaBeaten:
#if GERMAN
	.string "Das war schon alles?$"
#else
	.string "Oh, that's it?$"
#endif

CeladonCity_Gym_Text_PicnickerTanyaAfter:
#if GERMAN
	.string "Oh, du hast viele Orden.\n"
	.string "Da kann ich nicht gewinnen!$"
#else
	.string "Oh, look at all your BADGES. No\n"
	.string "wonder I couldn't win!$"
#endif

CeladonCity_Gym_EventScript_Julia::
	trainerbattle_single TRAINER_JULIA_HNS, CeladonCity_Gym_Text_BeautyJuliaSeen, CeladonCity_Gym_Text_BeautyJuliaBeaten
	msgbox CeladonCity_Gym_Text_BeautyJuliaAfter, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_BeautyJuliaSeen:
#if GERMAN
	.string "Hast du die Blumen betrachtet\n"
	.string "oder mich?$"
#else
	.string "Were you looking at these flowers\n"
	.string "or at me?$"
#endif

CeladonCity_Gym_Text_BeautyJuliaBeaten:
#if GERMAN
	.string "Wie nervig!$"
#else
	.string "How annoying!$"
#endif

CeladonCity_Gym_Text_BeautyJuliaAfter:
#if GERMAN
	.string "Wie werde ich eine Edeldame\n"
	.string "so wie Erika?$"
#else
	.string "How do I go about becoming\n"
	.string "ladylike like ERIKA?$"
#endif

CeladonCity_Gym_EventScript_Jo::
	trainerbattle_double TRAINER_JO_AND_ZOE_HNS, CeladonCity_Gym_Text_TwinsJoAndZoe1Seen, CeladonCity_Gym_Text_TwinsJoAndZoe1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox CeladonCity_Gym_Text_TwinsJoAndZoe1After, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_EventScript_Zoe::
	trainerbattle_double TRAINER_JO_AND_ZOE_HNS, CeladonCity_Gym_Text_TwinsJoAndZoe2Seen, CeladonCity_Gym_Text_TwinsJoAndZoe2Beaten, Route104_Text_GinaNotEnoughMons
	msgbox CeladonCity_Gym_Text_TwinsJoAndZoe2After, MSGBOX_AUTOCLOSE
	end

CeladonCity_Gym_Text_TwinsJoAndZoe1Seen:
#if GERMAN
	.string "Wir zeigen dir Pokémon-Attacken, die\n"
	.string "Erika uns beigebracht hat!$"
#else
	.string "We'll show you POKéMON moves that\n"
	.string "ERIKA taught us!$"
#endif

CeladonCity_Gym_Text_TwinsJoAndZoe1Beaten:
#if GERMAN
	.string "Oh! Wir haben verloren!$"
#else
	.string "Oh… We lost…$"
#endif

CeladonCity_Gym_Text_TwinsJoAndZoe1After:
#if GERMAN
	.string "Erika wird sich für uns rächen!$"
#else
	.string "ERIKA will get you back for us!$"
#endif

CeladonCity_Gym_Text_TwinsJoAndZoe2Seen:
#if GERMAN
	.string "Tara: Du wirst sehen!\n"
	.string "Wir werden Erika beschützen!$"
#else
	.string "We're going to protect ERIKA!$"
#endif

CeladonCity_Gym_Text_TwinsJoAndZoe2Beaten:
#if GERMAN
	.string "Wir konnten nicht gewinnen…$"
#else
	.string "We couldn't win…$"
#endif

CeladonCity_Gym_Text_TwinsJoAndZoe2After:
#if GERMAN
	.string "Erika ist viel, viel stärker!$"
#else
	.string "ERIKA is much, much stronger!$"
#endif

CeladonCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE12_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
	msgbox CeladonCity_Gym_Text_GymStatue
	releaseall
	end

CeladonCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

CeladonCity_Gym_Text_GymStatue::
#if GERMAN
    .string "Prismania City Pokémon-Arena\n"
    .string "Leiterin: Erika\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot$"
#else
    .string "CELADON POKéMON GYM\n"
    .string "LEADER: ERIKA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"
#endif

CeladonCity_Gym_Text_GymStatuePlayerWon::
#if GERMAN
    .string "Prismania City Pokémon-Arena\n"
    .string "Leiterin: Erika\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot, {PLAYER}$"
#else
    .string "CELADON POKéMON GYM\n"
    .string "LEADER: ERIKA\p"
    .string "WINNING TRAINERS:\n"
	.string "BLUE, RED, {PLAYER}$"
#endif
