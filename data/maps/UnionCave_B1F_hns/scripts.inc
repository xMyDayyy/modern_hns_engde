UnionCave_B1F_hns_MapScripts::
	.byte 0

UnionCave_B1F_EventScript_HikerPhillip::
	trainerbattle_single TRAINER_PHILLIP_HNS, UnionCave_B1F_Text_HikerPhillipSeen, UnionCave_B1F_Text_HikerPhillipBeaten
	msgbox UnionCave_B1F_Text_HikerPhillipAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_HikerLeonard::
	trainerbattle_single TRAINER_LEONARD_HNS, UnionCave_B1F_Text_HikerLeonardSeen, UnionCave_B1F_Text_HikerLeonardBeaten
	msgbox UnionCave_B1F_Text_HikerLeonardAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_PokemaniacAndrew::
	trainerbattle_single TRAINER_ANDREW_HNS, UnionCave_B1F_Text_PokemaniacAndrewSeen, UnionCave_B1F_Text_PokemaniacAndrewBeaten
	msgbox UnionCave_B1F_Text_PokemaniacAndrewAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_PokemaniacCalvin::
	trainerbattle_single TRAINER_CALVIN_HNS, UnionCave_B1F_Text_PokemaniacCalvinSeen, UnionCave_B1F_Text_PokemaniacCalvinBeaten
	msgbox UnionCave_B1F_Text_PokemaniacCalvinAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_Item_RockTomb::
	finditem ITEM_TM_ROCK_TOMB
	end

UnionCave_B1F_EventScript_Item_Xdefend::
	finditem ITEM_X_DEFEND
	end

UnionCave_B1F_Text_HikerPhillipSeen:
#if GERMAN
	.string "Ich habe schon lange keinen Menschen\n"
	.string "mehr gesehen… los, lass uns kämpfen!$"
#else
	.string "It's been a while since I last saw\n"
	.string "another person.\p"
	.string "Don't be shy. Let's battle!$"
#endif

UnionCave_B1F_Text_HikerPhillipBeaten:
#if GERMAN
	.string "Urks…$"
#else
	.string "Uurggh…$"
#endif

UnionCave_B1F_Text_HikerPhillipAfter:
#if GERMAN
	.string "Ich irre hier schon ewig umher…\p"
	.string "Dass ich hier nicht mehr rauskomme, ist\n"
	.string "mir egal, aber ich habe echt Kohldampf!$"
#else
	.string "I've been lost for a long time…\p"
	.string "I don't mind it here, but I am\n"
	.string "soooo hungry!$"
#endif

UnionCave_B1F_Text_HikerLeonardSeen:
#if GERMAN
	.string "Oh!\n"
	.string "Besuch bekomme ich hier nur selten!$"
#else
	.string "What do you know! A visitor!$"
#endif

UnionCave_B1F_Text_HikerLeonardBeaten:
#if GERMAN
	.string "Wahahaha!\n"
	.string "Ein sehr lebhafter Besuch! Sehr schön!$"
#else
	.string "Wahahah! You're a feisty one!$"
#endif

UnionCave_B1F_Text_HikerLeonardAfter:
#if GERMAN
	.string "Ich lebe hier unten.\p"
	.string "Du kannst auch hier wohnen, es ist\n"
	.string "genug Platz für alle.$"
#else
	.string "I live down here.\p"
	.string "You can, too, if you'd like.\p"
	.string "There's plenty of room, you see.$"
#endif

UnionCave_B1F_Text_PokemaniacAndrewSeen:
#if GERMAN
	.string "Wer bist du? Ich mag es nicht, wenn wer\n"
	.string "meine Idylle mit den Pokémon stört!$"
#else
	.string "Who's there?\p"
	.string "Leave me and my POKéMON alone!$"
#endif

UnionCave_B1F_Text_PokemaniacAndrewBeaten:
#if GERMAN
	.string "Grrr…\n"
	.string "Verschwinde von hier!$"
#else
	.string "Go… Go away!$"
#endif

UnionCave_B1F_Text_PokemaniacAndrewAfter:
#if GERMAN
	.string "Hier gibt es nur mich und meine Pokémon.\n"
	.string "Ja, das ist das pure Glück…$"
#else
	.string "Just me and my POKéMON. I'm de-\n"
	.string "lirious with joy.$"
#endif

UnionCave_B1F_Text_PokemaniacCalvinSeen:
#if GERMAN
	.string "Ich bin bis nach hier draußen gekommen,\n"
	.string "um die Pokémon zu erforschen.\p"
	.string "Hier, ich will dir die Ergebnisse meiner\n"
	.string "Studien im Kampf erläutern!$"
#else
	.string "I came all the way here to conduct\n"
	.string "my POKéMON research.\p"
	.string "Let me demonstrate my findings in a\n"
	.string "real battle!$"
#endif

UnionCave_B1F_Text_PokemaniacCalvinBeaten:
#if GERMAN
	.string "Du hast es mir gezeigt!$"
#else
	.string "You demonstrated on me!$"
#endif

UnionCave_B1F_Text_PokemaniacCalvinAfter:
#if GERMAN
	.string "Ich sollte vielleicht langsam meine\n"
	.string "Forschungsergebnisse veröffentlichen!\p"
	.string "Dann werde ich vielleicht genauso\n"
	.string "berühmt wie Prof. Lind!$"
#else
	.string "I should compile and announce my\n"
	.string "study findings.\p"
	.string "I might even become famous like\n"
	.string "PROF.ELM.$"
#endif
