Route45_hns_MapScripts::
	.byte 0

Route45_EventScript_Erik::
	trainerbattle_single TRAINER_ERIK_HNS, Route45_Text_HikerErikSeen, Route45_Text_HikerErikBeaten
	msgbox Route45_Text_HikerErikAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Michael::
	trainerbattle_single TRAINER_MICHAEL_HNS, Route45_Text_HikerMichaelSeen, Route45_Text_HikerMichaelBeaten
	msgbox Route45_Text_HikerMichaelAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Parry::
	trainerbattle_single TRAINER_PARRY_HNS, Route45_Text_HikerParrySeen, Route45_Text_HikerParryBeaten, Route45_EventScript_RegisterParry
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route45_EventScript_RematchParry
	msgbox Route45_Text_HikerParryAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_RegisterParry::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route45_Text_ParryRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_PARRY_HNS
	release
	end

Route45_EventScript_RematchParry::
	trainerbattle_rematch TRAINER_PARRY_HNS, Route45_Text_ParryRematchIntro, Route45_Text_ParryRematchDefeat
	msgbox Route45_Text_ParryPostRematch, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Timothy::
	trainerbattle_single TRAINER_TIMOTHY_HNS, Route45_Text_HikerTimothySeen, Route45_Text_HikerTimothyBeaten
	msgbox Route45_Text_HikerTimothyAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Kenji::
	trainerbattle_single TRAINER_KENJI_HNS, Route45_Text_BlackbeltKenjiSeen, Route45_Text_BlackbeltKenjiBeaten, Route45_EventScript_RegisterKenji
	goto_if_set FLAG_KENJI_HAS_ITEM_HNS, Route45_EventScript_KenjiGiveItem
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route45_EventScript_RematchKenji
	msgbox Route45_Text_BlackbeltKenjiAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_RegisterKenji::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route45_Text_KenjiRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_KENJI_HNS
	release
	end

Route45_EventScript_RematchKenji::
	trainerbattle_rematch TRAINER_KENJI_HNS, Route45_Text_KenjiRematchIntro, Route45_Text_KenjiRematchDefeat
	msgbox Route45_Text_KenjiPostRematch, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_KenjiGiveItem::
	msgbox Route45_Text_KenjiHasItem, MSGBOX_DEFAULT
	giveitem VAR_KENJI_ITEM_HNS
	goto_if_eq VAR_RESULT, FALSE, Route45_EventScript_KenjiNoRoom
	clearflag FLAG_KENJI_HAS_ITEM_HNS
	msgbox Route45_Text_KenjiGaveItem, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_KenjiNoRoom::
	msgbox Route45_Text_KenjiNoRoom, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Ryan::
	trainerbattle_single TRAINER_RYAN_HNS, Route45_Text_CooltrainermRyanSeen, Route45_Text_CooltrainermRyanBeaten
	msgbox Route45_Text_CooltrainermRyanAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Kelly::
	trainerbattle_single TRAINER_KELLY_HNS, Route45_Text_CooltrainerfKellySeen, Route45_Text_CooltrainerfKellyBeaten
	msgbox Route45_Text_CooltrainerfKellyAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Quentin::
	trainerbattle_single TRAINER_QUENTIN_HNS, Route45_Text_CamperQuentinSeen, Route45_Text_CamperQuentinBeaten
	msgbox Route45_Text_CamperQuentinAfter, MSGBOX_AUTOCLOSE
	end

Route45_EventScript_Sign::
	msgbox Route45_Text_Sign, MSGBOX_SIGN
	end

Route45_EventScript_Item_Elixir::
	finditem ITEM_ELIXIR
	end

Route45_EventScript_Item_Max_Potion::
	finditem ITEM_MAX_POTION
	end

Route45_EventScript_Item_Full_Heal::
	finditem ITEM_FULL_HEAL
	end

Route45_EventScript_Item_Nugget::
	finditem ITEM_NUGGET
	end

Route45_Text_HikerErikSeen:
#if GERMAN
	.string "Sei auf alles vorbereitet! Zeig mal, wie\n"
	.string "gut du deine Pokémon trainiert hast!$"
#else
    .string "Be prepared for anything!\p"
    .string "Let me see if your POKéMON have\n"
    .string "been raised properly!$"
#endif

Route45_Text_HikerErikBeaten:
#if GERMAN
    .string "Oh, ich habe verloren!$"
#else
    .string "Oh, I lost that!$"
#endif

Route45_Text_HikerErikAfter:
#if GERMAN
	.string "Ich gehe zum {COLOR RED}Eispfad{COLOR DARK_GRAY} bei {COLOR RED}Ebenholz City{COLOR DARK_GRAY},\n"
	.string "um noch etwas mehr zu trainieren.$"
#else
    .string "I'll head back to BLACKTHORN's\n"
    .string "ICE PATH and train some more.$"
#endif

Route45_Text_HikerMichaelSeen:
#if GERMAN
    .string "Yo! Du hast echt viel Energie!\p"
    .string "Aber weißt du was?\p"
    .string "Was reine Energie angeht, bin\n"
    .string "ich der Mann!$"
#else
    .string "Yo! You're spunky! But you know\n"
    .string "what?\p"
    .string "When it comes to sheer\n"
    .string "spunkiness, I'm the man!$"
#endif

Route45_Text_HikerMichaelBeaten:
#if GERMAN
    .string "Meine Pokémon hatten nicht genug\n"
    .string "Energie!$"
#else
    .string "My POKéMON weren't spunky enough!$"
#endif

Route45_Text_HikerMichaelAfter:
#if GERMAN
	.string "Mensch, wie ich diese KP-Plus liebe! Mm,\n"
	.string "lecker!\p"
	.string "Ich trinke immer die von meinen\n"
	.string "Pokémon! Ich kann nichts dagegen tun!$"
#else
    .string "Boy, do I love HP UP! Mmmm, yum!\p"
    .string "I keep drinking my POKéMON's!\p"
    .string "I can't help it!$"
#endif

Route45_Text_HikerParrySeen:
#if GERMAN
	.string "Meine Pokémon stecken voller Energie!$"
#else
    .string "My POKéMON are power packed!$"
#endif

Route45_Text_HikerParryBeaten:
#if GERMAN
	.string "Hahaha! Jetzt hast du’s mir aber richtig\n"
	.string "gezeigt!$"
#else
    .string "Wahahah! I'm the big loser!$"
#endif

Route45_Text_HikerParryAfter:
#if GERMAN
	.string "Mein Köpfchen ist nicht das schnellste,\n"
	.string "weißt du? Deswegen setze ich auf Kraft.$"
#else
    .string "I'm not much good at thinking,\n"
    .string "see?\p"
    .string "So, I just plow ahead with power!$"
#endif

Route45_Text_ParryRegister:
#if GERMAN
	.string "Mein Köpfchen ist nicht das schnellste,\n"
	.string "weißt du? Deswegen setze ich auf Kraft.$"
#else
    .string "I'm not much good at thinking,\n"
    .string "see?\p"
    .string "So, I just plow ahead with power!$"
#endif

Route45_Text_ParryRematchIntro:
#if GERMAN
	.string "Meine Pokémon stecken voller Energie!$"
#else
    .string "My POKéMON are power packed!$"
#endif

Route45_Text_ParryRematchDefeat:
#if GERMAN
	.string "Hahaha! Jetzt hast du’s mir aber richtig\n"
	.string "gezeigt!$"
#else
    .string "Wahahah! I'm the big loser!$"
#endif

Route45_Text_ParryPostRematch:
#if GERMAN
	.string "Mein Köpfchen ist nicht das schnellste,\n"
	.string "weißt du? Deswegen setze ich auf Kraft.$"
#else
    .string "I'm not much good at thinking,\n"
    .string "see?\p"
    .string "So, I just plow ahead with power!$"
#endif

Route45_Text_HikerTimothySeen:
#if GERMAN
	.string "Warum ich auf Berge klettere? Weil es\n"
	.string "sie gibt.\p"
	.string "Warum ich Pokémon trainiere?\p"
	.string "Weil es sie gibt!$"
#else
    .string "Why do I climb mountains?\p"
    .string "Because they're there.\p"
    .string "Why do I train POKéMON?\p"
    .string "Because they're there!$"
#endif

Route45_Text_HikerTimothyBeaten:
#if GERMAN
    .string "Niederlagen… Die gibt es auch!$"
#else
    .string "Losses… They're there too!$"
#endif

Route45_Text_HikerTimothyAfter:
#if GERMAN
    .string "Das Beste, was mir je passiert ist,\n"
    .string "war die Entdeckung von Pokémon.$"
#else
    .string "The best thing to ever happen to\n"
    .string "me was discovering POKéMON.$"
#endif

Route45_Text_HikerParryGivesIron:
#if GERMAN
    .string "Ich finde einfach keinen Weg zu\n"
    .string "gewinnen!\p"
    .string "Mach weiter so!\p"
    .string "Oh, und nimm das, das Geschenk,\n"
    .string "das du beim letzten Mal nicht\l"
    .string "annehmen konntest.$"
#else
    .string "I just can't find a way to win!\p"
    .string "Keep it up!\p"
    .string "Oh, and take this -- it's the\n"
    .string "gift you couldn't take when we\n"
    .string "last met.$"
#endif

Route45_Text_BlackbeltKenjiSeen:
#if GERMAN
    .string "Ich habe hier allein trainiert.\p"
    .string "Sieh die Früchte meiner Arbeit!$"
#else
    .string "I was training here alone.\p"
    .string "Behold the fruits of my labor!$"
#endif

Route45_Text_BlackbeltKenjiBeaten:
#if GERMAN
	.string "Neiiin!$"
#else
    .string "Waaaargh!$"
#endif

Route45_Text_BlackbeltKenjiAfter:
#if GERMAN
	.string "Da helfen nur extreme Trainingsmaßnah-\n"
	.string "men. Ich ziehe mich in die Berge zurück.$"
#else
    .string "This calls for extreme measures.\p"
    .string "I must take to the hills and train\n"
    .string "in solitude.$"
#endif

Route45_Text_KenjiRegister:
#if GERMAN
	.string "Da helfen nur extreme Trainingsmaßnah-\n"
	.string "men. Ich ziehe mich in die Berge zurück.$"
#else
    .string "This calls for extreme measures.\p"
    .string "I must take to the hills and train\n"
    .string "in solitude.$"
#endif

Route45_Text_KenjiRematchIntro:
#if GERMAN
    .string "Ich habe hier allein trainiert.\p"
    .string "Sieh die Früchte meiner Arbeit!$"
#else
    .string "I was training here alone.\p"
    .string "Behold the fruits of my labor!$"
#endif

Route45_Text_KenjiRematchDefeat:
#if GERMAN
	.string "Neiiin!$"
#else
    .string "Waaaargh!$"
#endif

Route45_Text_KenjiPostRematch:
#if GERMAN
	.string "Da helfen nur extreme Trainingsmaßnah-\n"
	.string "men. Ich ziehe mich in die Berge zurück.$"
#else
    .string "This calls for extreme measures.\p"
    .string "I must take to the hills and train\n"
    .string "in solitude.$"
#endif

Route45_Text_KenjiHasItem:
#if GERMAN
    .string "Hey! Ich mache gerade eine Pause\n"
    .string "vom Training.\p"
    .string "Ich habe etwas Gutes gefunden.\n"
    .string "Hier, nimm es!$"
#else
    .string "Hey! I'm taking a break from\n"
    .string "training.\p"
    .string "I found something good while I\n"
    .string "was out. Here, take it!$"
#endif

Route45_Text_KenjiGaveItem:
#if GERMAN
    .string "Benutz es gut!\p"
    .string "Ich muss zurück zum Training.\n"
    .string "Oooooaaarrrgh!$"
#else
    .string "Use it well!\p"
    .string "I need to get back to my\n"
    .string "training. Oooooaaarrrgh!$"
#endif

Route45_Text_KenjiNoRoom:
#if GERMAN
    .string "Hm, dein Beutel ist voll.\p"
    .string "Komm wieder, wenn du Platz hast.$"
#else
    .string "Hmm, your BAG is full.\p"
    .string "Come back when you have room.$"
#endif

Route45_Text_BlackbeltKenjiMorning:
#if GERMAN
    .string "Ich werde noch ein bisschen\n"
    .string "trainieren, bevor ich Mittagspause\l"
    .string "mache.$"
#else
    .string "I'm going to train a bit more\n"
    .string "before I break for lunch.$"
#endif

Route45_Text_BlackbeltKenjiNight:
#if GERMAN
    .string "Wir haben uns beim Mittag gut\n"
    .string "ausgeruht, also sind wir jetzt\l"
    .string "wieder bereit!\p"
    .string "Wir trainieren weiter!$"
#else
    .string "We had plenty of rest at lunch, so\p"
    .string "now we're all ready to go again!\p"
    .string "We're going to train again!$"
#endif

Route45_Text_CooltrainermRyanSeen:
#if GERMAN
	.string "Was ist deine Philosophie, wenn es darum\n"
	.string "geht, Pokémon großzuziehen?$"
#else
    .string "What are your thoughts on\n"
    .string "raising POKéMON?$"
#endif

Route45_Text_CooltrainermRyanBeaten:
#if GERMAN
	.string "Du verdienst meinen vollen Respekt!$"
#else
    .string "You've won my respect.$"
#endif

Route45_Text_CooltrainermRyanAfter:
#if GERMAN
	.string "Wie ich sehe, ziehst du deine Pokémon\n"
	.string "mit Sorgfalt auf.\p"
	.string "Eure Freundschaft wird dich noch aus\n"
	.string "so mancher Gefahr retten!$"
#else
    .string "I see you're raising your POKéMON\n"
    .string "with care.\p"
    .string "The bond you build will save you\n"
    .string "in tough situations.$"
#endif

Route45_Text_CooltrainerfKellySeen:
#if GERMAN
	.string "Welche Strategie verwendest du im\n"
	.string "Kampf?\p"
	.string "Man darf nicht einfach nur willkürlich\n"
	.string "starke Attacken einsetzen!$"
#else
    .string "What is your battle strategy?\p"
    .string "It is foolish to use strong moves\n"
    .string "indiscriminately.$"
#endif

Route45_Text_CooltrainerfKellyBeaten:
#if GERMAN
	.string "Gut. Dann habe ich eben verloren.$"
#else
    .string "Fine. I lost.$"
#endif

Route45_Text_CooltrainerfKellyAfter:
#if GERMAN
    .string "Ich bin kein Fan übermäßig starker\n"
    .string "Attacken.\p"
    .string "Ich will gewinnen, aber ich will\n"
    .string "Pokémon auch nicht verletzen.$"
#else
    .string "I'm not in favor of overly\n"
    .string "powerful moves.\p"
    .string "I want to win, but I also don't\n"
    .string "want to harm POKéMON.$"
#endif

Route45_Text_CamperQuentinSeen:
#if GERMAN
    .string "Ich bin wirklich, wirklich stark!$"
#else
    .string "I'm really, really tough!$"
#endif

Route45_Text_CamperQuentinBeaten:
#if GERMAN
	.string "Ich war stark aufm {COLOR RED}Trainerberg{COLOR DARK_GRAY}…$"
#else
    .string "I was tough at the TRAINER HILL…$"
#endif

Route45_Text_CamperQuentinAfter:
#if GERMAN
	.string "Warst du schon im {COLOR RED}Trainerberg{COLOR DARK_GRAY}?\p"
	.string "Dort verliere ich nie, aber…$"
#else
    .string "Have you been to the TRAINER HILL?\p"
    .string "I never, ever lose there, but…$"
#endif

Route45_Text_Sign:
#if GERMAN
	.string "Route 45 Bergweg voraus$"
#else
    .string "ROUTE 45\n"
    .string "MOUNTAIN RD. AHEAD$"
#endif
