SootopolisCity_Gym_B1F_MapScripts::
	.byte 0

SootopolisCity_Gym_B1F_EventScript_Andrea::
	trainerbattle_single TRAINER_ANDREA, SootopolisCity_Gym_B1F_Text_AndreaIntro, SootopolisCity_Gym_B1F_Text_AndreaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_AndreaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Crissy::
	trainerbattle_single TRAINER_CRISSY, SootopolisCity_Gym_B1F_Text_CrissyIntro, SootopolisCity_Gym_B1F_Text_CrissyDefeat
	msgbox SootopolisCity_Gym_B1F_Text_CrissyPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Brianna::
	trainerbattle_single TRAINER_BRIANNA, SootopolisCity_Gym_B1F_Text_BriannaIntro, SootopolisCity_Gym_B1F_Text_BriannaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_BriannaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Connie::
	trainerbattle_single TRAINER_CONNIE, SootopolisCity_Gym_B1F_Text_ConnieIntro, SootopolisCity_Gym_B1F_Text_ConnieDefeat
	msgbox SootopolisCity_Gym_B1F_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Bridget::
	trainerbattle_single TRAINER_BRIDGET, SootopolisCity_Gym_B1F_Text_BridgetIntro, SootopolisCity_Gym_B1F_Text_BridgetDefeat
	msgbox SootopolisCity_Gym_B1F_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Olivia::
	trainerbattle_single TRAINER_OLIVIA, SootopolisCity_Gym_B1F_Text_OliviaIntro, SootopolisCity_Gym_B1F_Text_OliviaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Tiffany::
	trainerbattle_single TRAINER_TIFFANY, SootopolisCity_Gym_B1F_Text_TiffanyIntro, SootopolisCity_Gym_B1F_Text_TiffanyDefeat
	msgbox SootopolisCity_Gym_B1F_Text_TiffanyPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Bethany::
	trainerbattle_single TRAINER_BETHANY, SootopolisCity_Gym_B1F_Text_BethanyIntro, SootopolisCity_Gym_B1F_Text_BethanyDefeat
	msgbox SootopolisCity_Gym_B1F_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Annika::
	trainerbattle_single TRAINER_ANNIKA, SootopolisCity_Gym_B1F_Text_AnnikaIntro, SootopolisCity_Gym_B1F_Text_AnnikaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_AnnikaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Daphne::
	trainerbattle_single TRAINER_DAPHNE, SootopolisCity_Gym_B1F_Text_DaphneIntro, SootopolisCity_Gym_B1F_Text_DaphneDefeat
	msgbox SootopolisCity_Gym_B1F_Text_DaphnePostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_Text_AndreaIntro:
#if GERMAN
	.string "Ich zeige dir die sublimen Techniken,\n"
	.string "die ich vom Arenaleiter Juan gelernt\l"
	.string "habe.$"
#else
	.string "I'll show you the sublime techniques\n"
	.string "I learned from our LEADER JUAN!$"
#endif

SootopolisCity_Gym_B1F_Text_AndreaDefeat:
#if GERMAN
	.string "Bitte verzeih mir, Juan…$"
#else
	.string "Please forgive me, JUAN…$"
#endif

SootopolisCity_Gym_B1F_Text_AndreaPostBattle:
#if GERMAN
	.string "Pass auf, was passiert, wenn du alle\n"
	.string "Bodenfliesen betreten hast…$"
#else
	.string "Watch what happens if you crack all\n"
	.string "the floor tiles.$"
#endif

SootopolisCity_Gym_B1F_Text_CrissyIntro:
#if GERMAN
	.string "Du bist den ganzen Weg hierher\n"
	.string "gekommen, aber bis zu Juan dringst du\l"
	.string "nicht vor.\p"
	.string "Weil du gegen mich verlieren wirst!$"
#else
	.string "You came all the way here, but you won't\n"
	.string "get to see JUAN.\p"
	.string "Not if you lose to me, you won't!$"
#endif

SootopolisCity_Gym_B1F_Text_CrissyDefeat:
#if GERMAN
	.string "Du bist stark! Ich habe mich durch dein\n"
	.string "unschuldiges Aussehen täuschen\l"
	.string "lassen.$"
#else
	.string "You're strong!\n"
	.string "I was fooled by your cute looks!$"
#endif

SootopolisCity_Gym_B1F_Text_CrissyPostBattle:
#if GERMAN
	.string "Du bist gut genug, um nicht sofort von\n"
	.string "Juan besiegt zu werden.$"
#else
	.string "You might be good enough to avoid\n"
	.string "being wiped out in one hit by JUAN.$"
#endif

SootopolisCity_Gym_B1F_Text_DaphneIntro:
#if GERMAN
	.string "Die Art, wie Juan kämpft…\p"
	.string "Dieser wunderbare Anblick hat mich\n"
	.string "dazu inspiriert, Trainer zu werden.$"
#else
	.string "The sight of JUAN conducting\n"
	.string "a battle…\p"
	.string "The very beauty of it compelled me to\n"
	.string "become a TRAINER.$"
#endif

SootopolisCity_Gym_B1F_Text_DaphneDefeat:
#if GERMAN
	.string "Du kämpfst mit mehr Anmut als ich…$"
#else
	.string "You battled with more beauty than\n"
	.string "I could muster…$"
#endif

SootopolisCity_Gym_B1F_Text_DaphnePostBattle:
#if GERMAN
	.string "Die Ästhetik, die du in den Kampf ein-\n"
	.string "bringst, ist unbeschreiblich.\p"
	.string "Oh… Ich bin so glücklich, dass ich\n"
	.string "mich für Pokémon entschieden habe.$"
#else
	.string "The grace you bring to battle is\n"
	.string "fabulous.\p"
	.string "Oh… I'm so fortunate to have found\n"
	.string "POKéMON.$"
#endif

SootopolisCity_Gym_B1F_Text_ConnieIntro:
#if GERMAN
	.string "Ich werde dir beibringen, dass Kämpfe\n"
	.string "kein Zuckerschlecken sind!$"
#else
	.string "I should teach you how harsh battles\n"
	.string "can be.$"
#endif

SootopolisCity_Gym_B1F_Text_ConnieDefeat:
#if GERMAN
	.string "Oh. Du bist stark.$"
#else
	.string "Oh.\n"
	.string "You're strong.$"
#endif

SootopolisCity_Gym_B1F_Text_ConniePostBattle:
#if GERMAN
	.string "Ich verrate dir etwas.\p"
	.string "Wenn du zu Juan willst, dann darfst\n"
	.string "du auf jede Fliese nur ein Mal treten.$"
#else
	.string "I'll tell you something good.\p"
	.string "If you want to reach JUAN, you\n"
	.string "need to walk on each floor tile once.$"
#endif

SootopolisCity_Gym_B1F_Text_BridgetIntro:
#if GERMAN
	.string "Die Pokémon Arena mit den höchsten\n"
	.string "Anforderungen in der Hoenn-region…\p"
	.string "Das ist die Arena von Xeneroville.$"
#else
	.string "The POKéMON GYM of the highest level\n"
	.string "in the HOENN region…\p"
	.string "That's the SOOTOPOLIS GYM.$"
#endif

SootopolisCity_Gym_B1F_Text_BridgetDefeat:
#if GERMAN
	.string "Du kämpfst aber auf einem hohen\n"
	.string "Niveau!$"
#else
	.string "What a high level you are!$"
#endif

SootopolisCity_Gym_B1F_Text_BridgetPostBattle:
#if GERMAN
	.string "Statt damit zufrieden zu sein, zur\n"
	.string "besten Arena zu gehören, würde ich\l"
	.string "gerne auch an anderen Orten trainieren.\l"
	.string "Aber hier ist es so lustig!$"
#else
	.string "Rather than being satisfied by being\n"
	.string "in a strong GYM, I imagine training in\l"
	.string "other places will make you stronger.\l"
	.string "But above all, it looks more fun.$"
#endif

SootopolisCity_Gym_B1F_Text_OliviaIntro:
#if GERMAN
	.string "Ich trainiere meine Pokémon zusammen\n"
	.string "mit Juan.\p"
	.string "Ich bin nicht leicht zu nehmen!$"
#else
	.string "I train my POKéMON together with\n"
	.string "JUAN.\p"
	.string "Don't think I'm a pushover.$"
#endif

SootopolisCity_Gym_B1F_Text_OliviaDefeat:
#if GERMAN
	.string "Da wurde ich glatt überrollt…$"
#else
	.string "I was beaten…$"
#endif

SootopolisCity_Gym_B1F_Text_OliviaPostBattle:
#if GERMAN
	.string "Ich denke, du hast durchaus Potenzial.\n"
	.string "Warum bleibst du nicht bei uns?$"
#else
	.string "I think you have potential.\n"
	.string "Why don't you stay and train with us?$"
#endif

SootopolisCity_Gym_B1F_Text_TiffanyIntro:
#if GERMAN
	.string "Anmutig über das Eis zu gleiten, ohne\n"
	.string "die Linien zu berühren…\p"
	.string "Ein Trainer, der das beherrscht, wird\n"
	.string "auch in anderen Dingen elegant wirken.$"
#else
	.string "A graceful glide across the ice while\n"
	.string "crossing no lines…\p"
	.string "A TRAINER putting on that performance\n"
	.string "would be elegantly beautiful!$"
#endif

SootopolisCity_Gym_B1F_Text_TiffanyDefeat:
#if GERMAN
	.string "Äh, entschuldige mich…$"
#else
	.string "Well, excuse me?!$"
#endif

SootopolisCity_Gym_B1F_Text_TiffanyPostBattle:
#if GERMAN
	.string "Es ist offensichtlich: Die Stärke eines\n"
	.string "Trainers hat nichts mit seinem Alter zu\l"
	.string "tun!$"
#else
	.string "This is really obvious, but how strong\n"
	.string "you are as a TRAINER has nothing to do\l"
	.string "with how young or old you are.$"
#endif

SootopolisCity_Gym_B1F_Text_BethanyIntro:
#if GERMAN
	.string "Wenn ich mit meinen Pokémon zusammen\n"
	.string "bin, vergeht die Zeit so schnell, dass\l"
	.string "ich noch nicht mal “Uuups” sagen kann.$"
#else
	.string "When I'm with my POKéMON, the time\n"
	.string "flies by before you can say, “Oops!”$"
#endif

SootopolisCity_Gym_B1F_Text_BethanyDefeat:
#if GERMAN
	.string "Uuups!$"
#else
	.string "Oops!$"
#endif

SootopolisCity_Gym_B1F_Text_BethanyPostBattle:
#if GERMAN
	.string "Ich wollte, ich könnte meine\n"
	.string "Niederlagen vergessen, bevor ich\l"
	.string "“Uuups” ausgesprochen habe.$"
#else
	.string "I wish I could forget about lost causes\n"
	.string "before I can manage an “Oops!”$"
#endif

SootopolisCity_Gym_B1F_Text_AnnikaIntro:
#if GERMAN
	.string "Wenn du magst, setze ich im Kampf\n"
	.string "viele seltene Pokémon ein.$"
#else
	.string "I can battle with really rare POKéMON\n"
	.string "if you'd like.$"
#endif

SootopolisCity_Gym_B1F_Text_AnnikaDefeat:
#if GERMAN
	.string "Und? Hast du dir meine Pokémon\n"
	.string "gut angesehen?$"
#else
	.string "Oh, there now! Did you have a good look\n"
	.string "at my POKéMON?$"
#endif

SootopolisCity_Gym_B1F_Text_AnnikaPostBattle:
#if GERMAN
	.string "Ich bin zu dieser Arena gekommen, weil\n"
	.string "Juan meine geliebten Pokémon gelobt\l"
	.string "hat.\p"
	.string "Wäre ich Juan nur früher begegnet, als\n"
	.string "ich noch jung war…$"
#else
	.string "I came to this GYM because JUAN\n"
	.string "praised me for my darling POKéMON.\p"
	.string "Oh, if only I'd met JUAN years ago\n"
	.string "when I was younger…$"
#endif

SootopolisCity_Gym_B1F_Text_BriannaIntro:
#if GERMAN
	.string "Kicher…\n"
	.string "Dein grimmiger Ausdruck ist total\l"
	.string "niedlich.$"
#else
	.string "Giggle…\n"
	.string "Your grim look is so charming.$"
#endif

SootopolisCity_Gym_B1F_Text_BriannaDefeat:
#if GERMAN
	.string "Oh je.\n"
	.string "Ich habe es dir viel zu leicht gemacht.$"
#else
	.string "Oh, dear.\n"
	.string "I went much too easy on you.$"
#endif

SootopolisCity_Gym_B1F_Text_BriannaPostBattle:
#if GERMAN
	.string "Du kannst Juan kein Härchen krümmen,\n"
	.string "wetten? Kicher…$"
#else
	.string "You couldn't lay a finger on JUAN,\n"
	.string "I'm sure. Giggle…$"
#endif

