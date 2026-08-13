SixIsland_OutcastIsland_Frlg_MapScripts::
	.byte 0

SixIsland_OutcastIsland_EventScript_Rocket::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_46, SixIsland_OutcastIsland_Text_RocketIntro, SixIsland_OutcastIsland_Text_RocketDefeat
	msgbox SixIsland_OutcastIsland_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_OutcastIsland_Text_RocketIntro::
#if GERMAN
	.string "Hier gibt es keine seltenen Pokémon!\n"
	.string "Nicht eines!\p"
	.string "Das ärgert mich, Kiddie! Daher\n"
	.string "kämpfe ich jetzt mit dir!$"
#else
	.string "There're no rare POKéMON around\n"
	.string "these parts! Not a one!\p"
	.string "That burns me up, man.\n"
	.string "I'll take it out on you!$"
#endif

SixIsland_OutcastIsland_Text_RocketDefeat::
#if GERMAN
	.string "… Häh?$"
#else
	.string "…Huh?$"
#endif

SixIsland_OutcastIsland_Text_RocketPostBattle::
#if GERMAN
	.string "Hast du ein seltenes Pokémon\n"
	.string "gesehen? Sag es mir!$"
#else
	.string "So listen, you haven't seen any\n"
	.string "rare POKéMON, have you?$"
#endif

SixIsland_OutcastIsland_Text_TylorIntro::
#if GERMAN
	.string "Ich habe kein Glück!\n"
	.string "Ein Kampf wäre ein willkommener\l"
	.string "Rhythmuswechsel.$"
#else
	.string "I'm having no luck at all.\n"
	.string "A battle'd be a change of pace!$"
#endif

SixIsland_OutcastIsland_Text_TylorDefeat::
#if GERMAN
	.string "Nein, überhaupt kein Glück…$"
#else
	.string "Nope, no luck at all…$"
#endif

SixIsland_OutcastIsland_Text_TylorPostBattle::
#if GERMAN
	.string "Ich kann nicht nach Hause, ohne\n"
	.string "etwas gefangen zu haben!$"
#else
	.string "I can't very well go home without\n"
	.string "catching something, though.$"
#endif

SixIsland_OutcastIsland_Text_MymoIntro::
#if GERMAN
	.string "Schnauf… schnauf…\p"
	.string "Ich bin hier auf einmal vom Hafen auf\n"
	.string "Eiland Sechs her geschwommen.$"
#else
	.string "Gasp… Gasp…\p"
	.string "I swam here from SIX ISLE PORT\n"
	.string "in one go.$"
#endif

SixIsland_OutcastIsland_Text_MymoDefeat::
#if GERMAN
	.string "Schnauf…\n"
	.string "Schnauf…$"
#else
	.string "Gasp…\n"
	.string "Gasp…$"
#endif

SixIsland_OutcastIsland_Text_MymoPostBattle::
#if GERMAN
	.string "Ich bin erst bei der Hälfte…\n"
	.string "Ich wurde besiegt…$"
#else
	.string "I'm only at the halfway point…\n"
	.string "I'm beat…$"
#endif

SixIsland_OutcastIsland_Text_NicoleIntro::
#if GERMAN
	.string "Es ist nicht leicht, beim Schwimmen\n"
	.string "Pokémon in den Kampf zu schicken.$"
#else
	.string "It's not so easy sending POKéMON\n"
	.string "out while swimming, you know?$"
#endif

SixIsland_OutcastIsland_Text_NicoleDefeat::
#if GERMAN
	.string "Du hast mich nicht im Schwimmen\n"
	.string "geschlagen. Der Rest ist egal.$"
#else
	.string "I didn't lose to you at swimming.\n"
	.string "This doesn't bother me.$"
#endif

SixIsland_OutcastIsland_Text_NicolePostBattle::
#if GERMAN
	.string "Bist du auf dem Weg zu der Insel\n"
	.string "dort oben?\p"
	.string "Ich habe dort nichts Interessantes\n"
	.string "gesehen!$"
#else
	.string "Are you headed for the island up\n"
	.string "past here?\p"
	.string "I didn't see anything interesting\n"
	.string "there.$"
#endif

SixIsland_OutcastIsland_Text_AvaIntro::
#if GERMAN
	.string "Tina: Lass uns einen Zwei-gegen-\n"
	.string "Zwei Marinekampf bestreiten!$"
#else
	.string "AVA: Let's have a two-on-two\n"
	.string "marine battle!$"
#endif

SixIsland_OutcastIsland_Text_AvaDefeat::
#if GERMAN
	.string "Tina: Oh, du überraschst mich!\n"
	.string "Noch besser, du bist allein!$"
#else
	.string "AVA: Oh, you're amazing!\n"
	.string "Even better, you're on your own!$"
#endif

SixIsland_OutcastIsland_Text_AvaPostBattle::
#if GERMAN
	.string "Tina: Ich bevorzuge das Meer gegenüber\n"
	.string "jedem Pool.$"
#else
	.string "AVA: You know, I do prefer the\n"
	.string "sea over any pool.$"
#endif

SixIsland_OutcastIsland_Text_AvaNotEnoughMons::
#if GERMAN
	.string "Tina: Du forderst uns zu einem\n"
	.string "Kampf heraus?\p"
	.string "Du benötigst dafür allerdings\n"
	.string "mindestens zwei Pokémon.$"
#else
	.string "AVA: You're challenging us to\n"
	.string "a battle?\p"
	.string "You'll need at least two POKéMON\n"
	.string "if you want to do that.$"
#endif

SixIsland_OutcastIsland_Text_GebIntro::
#if GERMAN
	.string "Tino: Hilf mir, große Schwester!\n"
	.string "Bitte kämpfe mit mir!$"
#else
	.string "GEB: Big Sister, help!\n"
	.string "Please battle with me!$"
#endif

SixIsland_OutcastIsland_Text_GebDefeat::
#if GERMAN
	.string "Tino: Wow, große Schwester, diese\n"
	.string "Person ist richtig gut!$"
#else
	.string "GEB: Wow, Big Sister, this person's\n"
	.string "really good!$"
#endif

SixIsland_OutcastIsland_Text_GebPostBattle::
#if GERMAN
	.string "Tino: Ich bin auf meine Schwester\n"
	.string "angewiesen, da ich den Boden nicht\l"
	.string "berühren kann.$"
#else
	.string "GEB: I'm hanging onto my sister\n"
	.string "because I can't touch the bottom.$"
#endif

SixIsland_OutcastIsland_Text_GebNotEnoughMons::
#if GERMAN
	.string "Tino: Bitte kämpfe gegen mich und\n"
	.string "meine Schwester!\p"
	.string "… oh, du hast keine zwei Pokémon?$"
#else
	.string "GEB: Please battle against me and\n"
	.string "my sister!\p"
	.string "…Oh, you don't have two POKéMON?$"
#endif
