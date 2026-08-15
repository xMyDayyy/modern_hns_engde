Route17_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route17_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route17_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route17_EventScript_Riley::
	trainerbattle_single TRAINER_RILEY_HNS, Route17_Text_BikerRileySeen, Route17_Text_BikerRileyBeaten, Route17_EventScript_RegisterRiley
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_RematchRiley
	msgbox Route17_Text_BikerRileyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_RegisterRiley::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route17_Text_RileyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_RILEY_HNS
	release
	end

Route17_EventScript_RematchRiley::
	trainerbattle_rematch TRAINER_RILEY_HNS, Route17_Text_RileyRematchIntro, Route17_Text_RileyRematchDefeat
	msgbox Route17_Text_RileyPostRematch, MSGBOX_AUTOCLOSE
	goto_if_defeated TRAINER_RILEY_2_HNS, Route17_EventScript_RematchRileyTryGiveItem
	end

Route17_EventScript_RematchRileyTryGiveItem::
	checkitem ITEM_TM_TOXIC
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_NoOp
	giveitem ITEM_TM_TOXIC
	closemessage
	end

Route17_EventScript_Joel::
	trainerbattle_single TRAINER_JOEL_HNS, Route17_Text_BikerJoelSeen, Route17_Text_BikerJoelBeaten, Route17_EventScript_RegisterJoel
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_RematchJoel
	msgbox Route17_Text_BikerJoelAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_RegisterJoel::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route17_Text_JoelRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JOEL_HNS
	release
	end

Route17_EventScript_RematchJoel::
	trainerbattle_rematch TRAINER_JOEL_HNS, Route17_Text_JoelRematchIntro, Route17_Text_JoelRematchDefeat
	msgbox Route17_Text_JoelPostRematch, MSGBOX_AUTOCLOSE
	goto_if_defeated TRAINER_JOEL_2_HNS, Route17_EventScript_RematchJoelTryGiveItem
	end

Route17_EventScript_RematchJoelTryGiveItem::
	checkitem ITEM_TM_BRICK_BREAK
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_NoOp
	giveitem ITEM_TM_BRICK_BREAK
	closemessage
	end

Route17_EventScript_Glenn::
	trainerbattle_single TRAINER_GLENN_HNS, Route17_Text_BikerGlennSeen, Route17_Text_BikerGlennBeaten
	msgbox Route17_Text_BikerGlennAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_Charles::
	trainerbattle_single TRAINER_CHARLES_HNS, Route17_Text_BikerCharlesSeen, Route17_Text_BikerCharlesBeaten, Route17_EventScript_RegisterCharles
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_RematchCharles
	msgbox Route17_Text_BikerCharlesAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_RegisterCharles::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route17_Text_CharlesRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CHARLES_HNS
	release
	end

Route17_EventScript_RematchCharles::
	trainerbattle_rematch TRAINER_CHARLES_HNS, Route17_Text_CharlesRematchIntro, Route17_Text_CharlesRematchDefeat
	msgbox Route17_Text_CharlesPostRematch, MSGBOX_AUTOCLOSE
	goto_if_defeated TRAINER_CHARLES_2_HNS, Route17_EventScript_RematchCharlesTryGiveItem
	end

Route17_EventScript_RematchCharlesTryGiveItem::
	checkitem ITEM_TM_BULK_UP
	goto_if_eq VAR_RESULT, TRUE, Common_EventScript_NoOp
	giveitem ITEM_TM_BULK_UP
	closemessage
	end

Route17_Text_BikerRileySeen:
#if GERMAN
	.string "He, du!\n"
	.string "Kommst du etwa aus Johto?$"
#else
	.string "Hey, you! You're from JOHTO, huh?$"
#endif

Route17_Text_BikerRileyBeaten:
#if GERMAN
	.string "Boah, du legst aber los!$"
#else
	.string "Whoa, you kick!$"
#endif

Route17_Text_BikerRileyAfterBattle:
#if GERMAN
	.string "Na warte! Von einer Null aus Johto\n"
	.string "lasse ich mir nicht die Tour vermasseln!$"
#else
	.string "Don't get cocky, you JOHTO punk!$"
#endif

Route17_Text_BikerJoelSeen:
#if GERMAN
	.string "Wow! Das ist aber ein tolles Fahrrad!$"
#else
	.string "Wow. That's a cool BICYCLE!$"
#endif

Route17_Text_BikerJoelBeaten:
#if GERMAN
	.string "Du bist so stark, wie du aussiehst!$"
#else
	.string "But you don't just look cool…$"
#endif

Route17_Text_BikerJoelAfterBattle:
#if GERMAN
	.string "Ich sehe zwar cool aus, bin aber\n"
	.string "schwach, also auch nicht wirklich cool.\l"
	.string "Ich muss härter trainieren!$"
#else
	.string "I look cool, but I'm weak, so I'm\n"
	.string "not really cool.\p"
	.string "I have to train harder…$"
#endif

Route17_Text_BikerGlennSeen:
#if GERMAN
	.string "Hey! Wie wär’s mit einem Wettrennen?$"
#else
	.string "Hey! Want to have a speed battle?$"
#endif

Route17_Text_BikerGlennBeaten:
#if GERMAN
	.string "Wow! Du bist aber ganz schön flott\n"
	.string "unterwegs!$"
#else
	.string "Yikes! You've got awesome torque!$"
#endif

Route17_Text_BikerGlennAfterBattle:
#if GERMAN
	.string "Freihändig fahren gilt als cool auf dem\n"
	.string "Radweg.$"
#else
	.string "Hands-free riding is considered\n"
	.string "cool on CYCLING ROAD.$"
#endif

Route17_Text_BikerCharlesSeen:
#if GERMAN
	.string "Wir sind die furchtlosen Helden des\n"
	.string "Radwegs!$"
#else
	.string "We're fearless highway stars!$"
#endif

Route17_Text_BikerCharlesBeaten:
#if GERMAN
	.string "Aaargh!\n"
	.string "Wie gewonnen, so zerronnen.$"
#else
	.string "Arrrgh! Crash and burn!$"
#endif

Route17_Text_BikerCharlesAfterBattle:
#if GERMAN
	.string "Ein rücksichtsloser Fahrstil führt oft\n"
	.string "zu Unfällen! Also Augen auf am Lenker!$"
#else
	.string "Reckless driving causes accidents!\n"
	.string "Take it easy!$"
#endif

Route17_Text_RileyRegister:
#if GERMAN
	.string "Gar nicht schlecht für ein Kind\n"
	.string "aus Johto!$"
#else
	.string "Not bad for a JOHTO kid!$"
#endif

Route17_Text_RileyRematchIntro:
#if GERMAN
	.string "Punks aus Johto gewinnen nur\n"
	.string "einmal!$"
#else
	.string "JOHTO punks can only win once!$"
#endif

Route17_Text_RileyRematchDefeat:
#if GERMAN
	.string "Ich wurde fertiggemacht…$"
#else
	.string "I got kicked...$"
#endif

Route17_Text_RileyPostRematch:
#if GERMAN
	.string "Vielleicht sollte ich doch mal\n"
	.string "in Johto trainieren.$"
#else
	.string "Maybe I should train in JOHTO\n"
	.string "after all.$"
#endif

Route17_Text_JoelRegister:
#if GERMAN
	.string "Du bist doch ziemlich cool!\n"
	.string "Tauschen wir Nummern!$"
#else
	.string "You're pretty cool after all!\n"
	.string "Let's trade numbers!$"
#endif

Route17_Text_JoelRematchIntro:
#if GERMAN
	.string "Mal sehen, wer jetzt cooler ist!$"
#else
	.string "Let's see who's cooler now!$"
#endif

Route17_Text_JoelRematchDefeat:
#if GERMAN
	.string "Noch immer nicht cool genug…$"
#else
	.string "Still not cool enough…$"
#endif

Route17_Text_JoelPostRematch:
#if GERMAN
	.string "Ich trainiere weiter, bis ich so cool bin\n"
	.string "wie du!$"
#else
	.string "I'll keep training to be as cool\n"
	.string "as you, kid!$"
#endif

Route17_Text_CharlesRegister:
#if GERMAN
	.string "Du bist ein Herzensbrecher wie ich!\n"
	.string "Gib mir deine Nummer!$"
#else
	.string "You're a heartbreaker like me, kid!\n"
	.string "Give me your number!$"
#endif

Route17_Text_CharlesRematchIntro:
#if GERMAN
	.string "Ich bin nicht nur ein Straßenheld,\n"
	.string "ich bin ein Herzensbrecher!$"
#else
	.string "I'm not just a highway star,\n"
	.string "I'm a heartbreaker!$"
#endif

Route17_Text_CharlesRematchDefeat:
#if GERMAN
	.string "Schon wieder voll abgestürzt!$"
#else
	.string "Crashed and burned again!$"
#endif

Route17_Text_CharlesPostRematch:
#if GERMAN
	.string "Ich traf mal einen Trainer wie dich\n"
	.string "in Einall. Pass auf dich auf!$"
#else
	.string "I met a trainer like you in UNOVA.\n"
	.string "Don't crash out!$"
#endif

