Route13_Frlg_MapScripts::
	.byte 0

Route13_EventScript_TrainerTips1::
	msgbox Route13_Text_LookToLeftOfThatPost, MSGBOX_SIGN
	end

Route13_EventScript_TrainerTips2::
	msgbox Route13_Text_SelectToSwitchItems, MSGBOX_SIGN
	end

Route13_EventScript_RouteSign::
	msgbox Route13_Text_RouteSign, MSGBOX_SIGN
	end

Route13_Text_SebastianIntro::
#if GERMAN
	.string "Meine Vogel-Pokémon wollen kämpfen!$"
#else
	.string "My bird POKéMON want to battle\n"
	.string "with you!$"
#endif

Route13_Text_SebastianDefeat::
#if GERMAN
	.string "Mein Vogel-Team hat verloren?$"
#else
	.string "My PIDGEY and PIDGEOTTO combo\n"
	.string "lost?$"
#endif

Route13_Text_SebastianPostBattle::
#if GERMAN
	.string "Meine Pokémon sind fröhlich, obwohl\n"
	.string "sie verloren haben!$"
#else
	.string "My POKéMON look happy even though\n"
	.string "they lost.$"
#endif

Route13_Text_SusieIntro::
#if GERMAN
	.string "Man sagt, für ein Kind würde ich\n"
	.string "gut kämpfen!$"
#else
	.string "I'm told I'm good for a kid.$"
#endif

Route13_Text_SusieDefeat::
#if GERMAN
	.string "Oh!\n"
	.string "Ich hab verloren!$"
#else
	.string "Ohh!\n"
	.string "I lost!$"
#endif

Route13_Text_SusiePostBattle::
#if GERMAN
	.string "Ich werde fleißig üben, damit ich\n"
	.string "ein guter Trainer werde!$"
#else
	.string "I want to become a good TRAINER.\n"
	.string "I'll train hard, just watch.$"
#endif

Route13_Text_ValerieIntro::
#if GERMAN
	.string "Wow!\n"
	.string "Deine Orden sind supercool!$"
#else
	.string "Wow!\n"
	.string "Your BADGES are too cool!$"
#endif

Route13_Text_ValerieDefeat::
#if GERMAN
	.string "Das hat nicht ganz gereicht!$"
#else
	.string "Not enough!$"
#endif

Route13_Text_ValeriePostBattle::
#if GERMAN
	.string "Du hast diese Orden im Kampf gegen\n"
	.string "Arenaleiter gewonnen, oder?$"
#else
	.string "You got those BADGES from GYM\n"
	.string "LEADERS. I know!$"
#endif

Route13_Text_GwenIntro::
#if GERMAN
	.string "Meine niedlichen Pokémon möchten\n"
	.string "dich gern kennen lernen.$"
#else
	.string "My cute POKéMON wish to make your\n"
	.string "acquaintance.$"
#endif

Route13_Text_GwenDefeat::
#if GERMAN
	.string "Wow!\n"
	.string "Du hast mit Leichtigkeit gewonnen!$"
#else
	.string "Good going!\n"
	.string "You totally won!$"
#endif

Route13_Text_GwenPostBattle::
#if GERMAN
	.string "Pokémon müssen viel kämpfen, damit\n"
	.string "sie stark werden!$"
#else
	.string "You have to make POKéMON battle\n"
	.string "to toughen them up.$"
#endif

Route13_Text_AlmaIntro::
#if GERMAN
	.string "Ich habe in einer Höhle Carbon\n"
	.string "gefunden!$"
#else
	.string "I found CARBOS in a cave once\n"
	.string "while I was spelunking.$"
#endif

Route13_Text_AlmaDefeat::
#if GERMAN
	.string "Ich habe es vermasselt!$"
#else
	.string "Oh, too bad!\n"
	.string "I just messed up!$"
#endif

Route13_Text_AlmaPostBattle::
#if GERMAN
	.string "Mit dem Carbon habe ich die Initiative\n"
	.string "meiner Pokémon erhöht.$"
#else
	.string "CARBOS boosted the SPEED of my\n"
	.string "POKéMON.$"
#endif

Route13_Text_PerryIntro::
#if GERMAN
	.string "Bin unterwegs und habe Rückenwind...$"
#else
	.string "I'm not going to lose.\n"
	.string "Not when the wind's blowing my way!$"
#endif

Route13_Text_PerryDefeat::
#if GERMAN
	.string "Der Wind dreht sich!$"
#else
	.string "The wind turned!$"
#endif

Route13_Text_PerryPostBattle::
#if GERMAN
	.string "Ich bin besiegt!\n"
	.string "Ich werde nach Hause fliegen!$"
#else
	.string "I'm beat.\n"
	.string "I guess I'll FLY home.$"
#endif

Route13_Text_LolaIntro::
#if GERMAN
	.string "Natürlich werde ich mit dir spielen!$"
#else
	.string "Sure, I'll play with you, sweetie.$"
#endif

Route13_Text_LolaDefeat::
#if GERMAN
	.string "Oh!\n"
	.string "Du durchtriebenes Balg!$"
#else
	.string "Oh!\n"
	.string "You little beast!$"
#endif

Route13_Text_LolaPostBattle::
#if GERMAN
	.string "Wenn es männliche und weibliche\n"
	.string "Pokémon gäbe, welche wären wohl\l"
	.string "stärker?$"
#else
	.string "I wonder which is stronger, male or\n"
	.string "female POKéMON?$"
#endif

Route13_Text_SheilaIntro::
#if GERMAN
	.string "Lass deine Pokémon gegen meine\n"
	.string "antreten!$"
#else
	.string "Do you want to battle some\n"
	.string "POKéMON with me?$"
#endif

Route13_Text_SheilaDefeat::
#if GERMAN
	.string "Das war schon alles?$"
#else
	.string "It's over already?$"
#endif

Route13_Text_SheilaPostBattle::
#if GERMAN
	.string "Ich habe keine Ahnung von Pokémon.\p"
	.string "Aber manche finde ich wirklich\n"
	.string "cool!$"
#else
	.string "I don't know anything about\n"
	.string "POKéMON actually.\p"
	.string "The ones I use… I picked them\n"
	.string "for their looks!$"
#endif

Route13_Text_JaredIntro::
#if GERMAN
	.string "Was schaust du so dumm aus der\n"
	.string "Wäsche?$"
#else
	.string "What're you lookin' at?$"
#endif

Route13_Text_JaredDefeat::
#if GERMAN
	.string "Zack!\n"
	.string "Getriebeschaden!$"
#else
	.string "Dang!\n"
	.string "Stripped gears!$"
#endif

Route13_Text_JaredPostBattle::
#if GERMAN
	.string "Hau bloß ab!$"
#else
	.string "Get lost!$"
#endif

Route13_Text_RobertIntro::
#if GERMAN
	.string "Meine Vogel-Pokémon begleiten\n"
	.string "mich immer!$"
#else
	.string "I always go with bird POKéMON.\n"
	.string "I've dedicated myself to them.$"
#endif

Route13_Text_RobertDefeat::
#if GERMAN
	.string "Die Luft ist raus!$"
#else
	.string "Out of power!$"
#endif

Route13_Text_RobertPostBattle::
#if GERMAN
	.string "Ach, wenn ich doch wie Taubsi und\n"
	.string "Tauboga fliegen könnte...$"
#else
	.string "I wish I could fly like PIDGEY and\n"
	.string "PIDGEOTTO…$"
#endif

Route13_Text_LookToLeftOfThatPost::
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Schaue links neben den Pfosten!$"
#else
	.string "TRAINER TIPS\p"
	.string "Look, look!\n"
	.string "Look to the left of that post!$"
#endif

Route13_Text_SelectToSwitchItems::
#if GERMAN
	.string "Tipps für Trainer\p"
	.string "Drücke Select, um die Positionen\n"
	.string "von Items im Menü zu tauschen.$"
#else
	.string "TRAINER TIPS\p"
	.string "Use SELECT to switch items in the\n"
	.string "ITEMS window.$"
#endif

Route13_Text_RouteSign::
#if GERMAN
	.string "Route 13\n"
	.string "Norden: Stille Brücke$"
#else
	.string "ROUTE 13\n"
	.string "North to SILENCE BRIDGE$"
#endif

