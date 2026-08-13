MysteryGiftScript_VisitingTrainer::
	setvaddress MysteryGiftScript_VisitingTrainer
	special ValidateEReaderTrainer
	vgoto_if_eq VAR_RESULT, 0, MysteryGiftScript_VisitingTrainerArrived
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainerInstructions
	waitmessage
	waitbuttonpress
	release
	end

MysteryGiftScript_VisitingTrainerArrived:
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainerArrived
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftVisitingTrainerInstructions:
#if GERMAN
	.string "Danke, dass du das Geheim-\n"
	.string "geschehen benutzt hast.\p"
	.string "Da du im Besitz dieser Wunderkarte bist,\n"
	.string "darfst du bei einer Umfrage im\l"
	.string "Pkmn-Supermarkt teilnehmen.\l"
	.string "Lade andere Trainer zu diesen Umfragen\l"
	.string "nach Xeneroville ein.\l"
	.string "… Ich gebe dir ein geheimes Passwort\l"
	.string "für die Umfrage:\p"
	.string "“Gib mir Coole\n"
	.string "Trainer”\p"
	.string "Schreibe dies in eine Umfrage und\n"
	.string "schicke es zum Drahtlosen\l"
	.string "Kommunikations-System.$"
#else
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "By holding this WONDER CARD, you\n"
	.string "may take part in a survey at a\l"
	.string "POKéMON MART.\p"
	.string "Use these surveys to invite\n"
	.string "TRAINERS to SOOTOPOLIS CITY.\p"
	.string "…Let me give you a secret\n"
	.string "password for a survey:\p"
	.string "“GIVE ME\n"
	.string "AWESOME TRAINER”\p"
	.string "Write that in on a survey and send\n"
	.string "it to the WIRELESS\l"
	.string "COMMUNICATION SYSTEM.$"
#endif

sText_MysteryGiftVisitingTrainerArrived:
#if GERMAN
	.string "Danke, dass du das Geheim-\n"
	.string "geschehen benutzt hast.\p"
	.string "Ein Trainer, der nach Xeneroville\n"
	.string "gekommen ist, sucht dich!\l"
	.string "Wir hoffen, der Kampf gegen diesen\l"
	.string "Trainer macht dir Spaß!\p"
	.string "Wenn du andere Passwörter eingibst,\n"
	.string "kannst du andere Trainer einladen.\l"
	.string "Sieh dich nach anderen Passwörtern um,\l"
	.string "die evtl. funktionieren könnten.$"
#else
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "A TRAINER has arrived in\n"
	.string "SOOTOPOLIS CITY looking for you.\p"
	.string "We hope you will enjoy\n"
	.string "battling the visiting TRAINER.\p"
	.string "You may invite other TRAINERS by\n"
	.string "entering other passwords.\p"
	.string "Try looking for other passwords\n"
	.string "that may work.$"
#endif
