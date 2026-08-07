VioletCity_TrainerSchool_hns_MapScripts::
	.byte 0

VioletCity_TrainerSchool_EventScript_Earl::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_EarlIntro, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Teacher::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_Teacher, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Boy1::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_GameboyKid1, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Boy2::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_GameboyKid2, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Kid::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_Youngster1, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Girl::
	lock
	faceplayer
	msgbox VioletCity_TrainerSchool_Text_Youngster2, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_EventScript_Twin::
	msgbox VioletCity_TrainerSchool_Text_Twin, MSGBOX_NPC
	end

VioletCity_TrainerSchool_EventScript_BlackBoard::
	lock
	msgbox VioletCity_TrainerSchool_Text_Blackboard, MSGBOX_DEFAULT
	closemessage
	release
	end

VioletCity_TrainerSchool_Text_Twin:
#if GERMAN
	.string "Ich bin kein GBA-Kind, aber\n"
	.string "ich liebe Pokémon-Spiele!\p"
	.string "In alten Spielen musstest du\n"
	.string "gegen viele wilde Pokémon kämpfen,\l"
	.string "um genug EP zu bekommen.\p"
	.string "In neueren Spielen sorgt die EP-Teilen\n"
	.string "Funktion dafür, dass Pokémon\l"
	.string "schneller aufleveln.\p"
	.string "In diesem Spiel ist EP-Teilen so\n"
	.string "ausbalanciert, dass Pokémon das\l"
	.string "richtige Level erreichen oder leicht\l"
	.string "höher, je nachdem, wie viele Kämpfe\l"
	.string "du führst.\p"
	.string "Willst du klassischen Gen 1-4\n"
	.string "EP-Gewinn, schalte EP-Teilen aus.\p"
	.string "Für ein modernes Spielerlebnis,\n"
	.string "schalte EP-Teilen an.\p"
	.string "Du entscheidest, wie du spielen\n"
	.string "willst!$"
#else
	.string "I'm not a GBA kid, but I love\n"
	.string "playing POKéMON games!\p"
	.string "In the old games, you had to battle\n"
	.string "a lot of wild POKéMON to get enough\l"
	.string "EXP.\p"
	.string "But in newer games, the EXP. SHARE\n"
	.string "makes your POKéMON level up too fast.\p"
	.string "In this game, the EXP. SHARE is\n"
	.string "balanced to put your POKéMON at just\l"
	.string "the right level. Or slightly higher,\l"
	.string "depending on how many battles you do.\p"
	.string "If you want a traditional GEN 1-4\n"
	.string "experience, turn EXP. SHARE off.\l"
	.string "If you want a modern experience,\l"
	.string "turn EXP. SHARE ON.\p"
	.string "You choose how you want to play!$"
#endif

VioletCity_TrainerSchool_Text_EarlIntro:
#if GERMAN
	.string "Ich bin Earl!\p"
	.string "Pokémon sind wundervoll, ja!\p"
	.string "Ich lehre dich, ein besserer\n"
	.string "Trainer zu werden!$"
#else
	.string "EARL, I am!\p"
	.string "Wonderful are POKéMON, yes!\p"
	.string "Teach you I will to be a better\n"
	.string "trainer!$"
#endif

VioletCity_TrainerSchool_Text_Teacher:
#if GERMAN
	.string "Manche Pokémon starten schwach\n"
	.string "und brauchen viel mehr EP, um\l"
	.string "stark zu werden als andere.\p"
	.string "Zum Beispiel Larvitar ist schwach,\n"
	.string "wird aber später ein mächtiges\l"
	.string "Despotar, auf Kosten vieler EP.\p"
	.string "Nur die engagiertesten Trainer\n"
	.string "sollten so ein Pokémon trainieren.$"
#else
	.string "Certain POKéMON start off weak and\n"
	.string "require much more EXP to become\l"
	.string "strong than others do.\p"
	.string "For example, LARVITAR is quite weak\n"
	.string "but will eventually become a\l"
	.string "mighty TYRANITAR, at the cost of\l"
	.string "much EXP.\p"
	.string "Only the most dedicated trainers\n"
	.string "should attempt to train such a\l"
	.string "POKéMON.$"
#endif

VioletCity_TrainerSchool_Text_TeachHowToWin:
#if GERMAN
	.string "Gut! So lass misch dir erklärön!\p"
	.string "Im Kampf wird das erste Pokémon\n"
	.string "auf die Liste beginnön. Mit anderö\l"
	.string "Worte also das Pokémon, das du\l"
	.string "führst spazierön, oui?\p"
	.string "Ast du keine andere Wahl, ändere\n"
	.string "die Aufstellung in die Liste, um zu\l"
	.string "werden einö Gewinnère!\p"
	.string "Möschtest du ören noch mehr?$"
#else
	.string "Good! Teach you, I will!\p"
	.string "In battle, POKéMON top on list\n"
	.string "jump out first!\p"
	.string "Change order in list, make\n"
	.string "battle easy, maybe!\p"
	.string "More from me you want to hear?$"
#endif

VioletCity_TrainerSchool_Text_TeachMore:
#if GERMAN
	.string "Du möschtest also wissen, wie man\n"
	.string "trainiert Pokémon auf die Art und\l"
	.string "Weisö, die ist rischtisch?$"
#else
	.string "So, want to know how to raise\n"
	.string "POKéMON well?$"
#endif

VioletCity_TrainerSchool_Text_TeachRaiseWell:
#if GERMAN
	.string "Très bien! So lass misch erklärön!\p"
	.string "Selbst wenn eine Pokémon nur kurz an\n"
	.string "die Kampf teilnimmt, bekommt es \l"
	.string "zum Schluss ein paar von die EP ab!\p"
	.string "Führe eine schwache Pokémon mit\n"
	.string "dir spazierön und tausche sie dann\l"
	.string "am Anfang von die Kampf mit einö\l"
	.string "andere aus!\p"
	.string "So können auch schwache Pokémon\n"
	.string "werden sehr stark! Mehr vön mir?$"
#else
	.string "Fine! Teach you, I will!\p"
	.string "If POKéMON come out in battle\n"
	.string "even briefly, some EXP. Points\p"
	.string "it gets.\n"
	.string "At top of list put weak POKéMON\p"
	.string "Switch in battle quick!\n"
	.string "This way, weak POKéMON strong\p"
	.string "become!$"
#endif

VioletCity_TrainerSchool_Text_NoMoreToTeach:
#if GERMAN
	.string "Oh! Kluger Schüler!\n"
	.string "Mehr lehre ich nicht!\p"
	.string "Wenn du mehr willst, rede mit\n"
	.string "anderen Schülern!$"
#else
	.string "Oh! Smart student you are!\n"
	.string "Nothing more do I teach!\p"
	.string "If you want more, talk to\n"
	.string "pupils!$"
#endif

VioletCity_TrainerSchool_Text_Youngster1:
#if GERMAN
	.string "Manche Pokémon, von denen man dachte,\n"
	.string "sie entwickeln sich nur durch Tausch,\l"
	.string "entwickeln sich jetzt auch\l"
	.string "durch Levelaufstieg.\p"
	.string "Maschock und Georok entwickeln\n"
	.string "sich auf LVL 38, Kadabra und\l"
	.string "Alpollo auf LVL 42.\p"
	.string "Manche Items, wie Metallmantel, lassen\n"
	.string "bestimmte Pokémon sich entwickeln,\l"
	.string "wenn sie gehalten und trainiert werden.$"
#else
	.string "POKéMON previously thought to\n"
	.string "only evolve through trade can\p"
	.string "evolve through leveling.\n"
	.string "MACHOKE and GRAVELER evolve\p"
	.string "at LVL 38, while KADABRA and\n"
	.string "HAUNTER evolve at LVL 42.\p"
	.string "Some items, like the METAL\n"
	.string "COAT, have also been found to\p"
	.string "evolve certain POKéMON\n"
	.string "while holding and leveling up.$"
#endif

VioletCity_TrainerSchool_Text_GameboyKid1:
#if GERMAN
	.string "Bemerkenswerte Pokémon in einem\n"
	.string "Gebiet kann man in der\l"
	.string "Overworld sehen!\p"
	.string "Schaue die Routen bei Tag\n"
	.string "und Nacht an!$"
#else
	.string "Notable POKéMON available in an\n"
	.string "area can be seen in the overworld!\p"
	.string "But make sure to check routes\n"
	.string "at DAY and NIGHT!$"
#endif

VioletCity_TrainerSchool_Text_GameboyKid2:
#if GERMAN
	.string "Beeren in Johto heilen oder\n"
	.string "machen Pokébälle.\p"
	.string "Beeren in Kanto senken\n"
	.string "Statuswerte eines Pokémon.\p"
	.string "Das Dojo in Kanto hilft Pokémon,\n"
	.string "perfekte Statuswerte zu erlangen.$"
#else
	.string "BERRIES in the JOHTO region are\n"
	.string "good for healing and making BALLS.\p"
	.string "BERRIES in KANTO are good for\n"
	.string "reducing a POKéMON's stats.\p"
	.string "The DOJO in KANTO helps POKéMON\n"
	.string "perfect individual stats.$"
#endif

VioletCity_TrainerSchool_Text_Youngster2:
#if GERMAN
	.string "Achte darauf, dass Gegner\n"
	.string "jetzt Teams mit besseren Typen\l"
	.string "benutzen.\p"
	.string "Erwarte eine deutlich schwerere Reise.$"
#else
	.string "Be aware that your opponents\n"
	.string "now use teams with better type\l"
	.string "coverage, so expect a much\l"
	.string "more challenging journey ahead.$"
#endif

VioletCity_TrainerSchool_Text_Blackboard:
#if GERMAN
	.string "Die Tafel beschreibt VM-Attacken\n"
	.string "von Pokémon.\p"
	.string "VM, einmal freigeschaltet, müssen\n"
	.string "nicht beigebracht werden,\l"
	.string "sie funktionieren trotzdem.$"
#else
	.string "The blackboard describes\n"
	.string "POKéMON HM moves.\p"
	.string "HMs, once unlocked, don't need to\n"
	.string "be taught to be used.$"
#endif

VioletCity_TrainerSchool_Text_Notebook:
#if GERMAN
	.string "Das ist das Notizheft dieses Kindes…\p"
	.string "Pokémon fängt man mit Pokébällen.\n"
	.string "Man kann bis zu sechs von ihnen\l"
	.string "gleichzeitig in einem Team aufstellen.\p"
	.string "Weiterlesen?$"
#else
	.string "It's this kid's notebook…\p"
	.string "Catch POKéMON using POKé BALLS.\p"
	.string "Up to six can be in your party.\p"
	.string "Keep reading?$"
#endif

VioletCity_TrainerSchool_Text_Notebook1:
#if GERMAN
	.string "Bevor man einen Pokéball wirft, sollte\n"
	.string "das Ziel geschwächt werden.\l"
	.string "Ein vergiftetes oder verbranntes\l"
	.string "Pokémon lässt sich leichter fangen!\p"
	.string "Weiterlesen?$"
#else
	.string "Before throwing a POKé BALL,\n"
	.string "weaken the target first.\p"
	.string "A poisoned or burned POKéMON\n"
	.string "is easier to catch.\p"
	.string "Keep reading?$"
#endif

VioletCity_TrainerSchool_Text_Notebook2:
#if GERMAN
	.string "Es gibt außerdem auch Attacken, die ein\n"
	.string "Pokémon verwirren können.\p"
	.string "Verwirrte Pokémon fügen sich ab und zu\n"
	.string "versehentlich selbst Schaden zu.\p"
	.string "Ihr Zustand verbessert sich nach einem\n"
	.string "Kampf allerdings wieder…\p"
	.string "Weiterlesen?$"
#else
	.string "Some moves may cause confusion.\p"
	.string "Confusion may make a POKéMON\n"
	.string "attack itself.\p"
	.string "Leaving battle clears up any\n"
	.string "confusion.\p"
	.string "Keep reading?$"
#endif

VioletCity_TrainerSchool_Text_Notebook3:
#if GERMAN
	.string "Leute, die Pokémon fangen und in\n"
	.string "Kämpfen einsetzen, nennt man\l"
	.string "im Allgemeinen Pokémon-Trainer.\p"
	.string "Das Ziel eines jeden Trainers ist es,\n"
	.string "alle Arenen zu besuchen und gegen\l"
	.string "immer stärkere andere Trainer zu\l"
	.string "gewinnen.\p"
	.string "Weiterlesen… kannst du nicht mehr,\n"
	.string "denn die nächste Seite ist leer!$"
#else
	.string "People who catch and use\n"
	.string "POKéMON in battle are POKéMON\n"
	.string "trainers.\p"
	.string "They are expected to visit\n"
	.string "POKéMON GYMS and defeat other\n"
	.string "trainers.\p"
	.string "The next page is… Blank!\p"
	.string "Boy: E-he-he…\p"
	.string "I haven't written anymore…$"
#endif

VioletCity_TrainerSchool_Text_StickerMachine:
#if GERMAN
	.string "Diese Maschine druckt Daten\n"
	.string "als Sticker aus!$"
#else
	.string "This super machine prints data\n"
	.string "out as stickers!$"
#endif
