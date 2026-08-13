SSTidalLowerDeck_MapScripts::
	.byte 0

SSTidalLowerDeck_EventScript_Phillip::
	trainerbattle_single TRAINER_PHILLIP, SSTidalLowerDeck_Text_PhillipIntro, SSTidalLowerDeck_Text_PhillipDefeat
	msgbox SSTidalLowerDeck_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalLowerDeck_EventScript_Leonard::
	trainerbattle_single TRAINER_LEONARD, SSTidalLowerDeck_Text_LeonardIntro, SSTidalLowerDeck_Text_LeonardDefeat
	msgbox SSTidalLowerDeck_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalLowerDeck_Text_PhillipIntro:
#if GERMAN
	.string "Arrgh! Ich habe die Schnauze voll und\n"
	.string "bin hundemüde vom Putzen.\p"
	.string "Ein Kampf ist jetzt genau das\n"
	.string "Richtige!$"
#else
	.string "Arrrgh! I'm fed up and dog-tired of\n"
	.string "cleaning this huge place!\p"
	.string "Let's have a quick battle!$"
#endif

SSTidalLowerDeck_Text_PhillipDefeat:
#if GERMAN
	.string "Brüderchen, ich habe verloren!$"
#else
	.string "Little bro, I lost!$"
#endif

SSTidalLowerDeck_Text_PhillipPostBattle:
#if GERMAN
	.string "Wir sind die Gebrüder Saubermann!\p"
	.string "Der Ältere verteilt die Schmierseife\n"
	.string "und der Jüngere schrubbt das Deck!$"
#else
	.string "We're the CLEANUP BROTHERS!\p"
	.string "The old one dumps the detergent,\n"
	.string "and the young one does the scrubbing!$"
#endif

SSTidalLowerDeck_Text_LeonardIntro:
#if GERMAN
	.string "Dies ist der untere Bereich des Schiffs.\n"
	.string "Hier gibt es sehr viel Platz.\l"
	.string "Genau richtig für einen Pokémon-Kampf.$"
#else
	.string "This is the bottom of the ship's hull.\n"
	.string "There's plenty of room.\l"
	.string "It'll be alright for a POKéMON battle.$"
#endif

SSTidalLowerDeck_Text_LeonardDefeat:
#if GERMAN
	.string "Oh, großer Bruder. Ich habe verloren.$"
#else
	.string "Big bro, I lost!$"
#endif

SSTidalLowerDeck_Text_LeonardPostBattle:
#if GERMAN
	.string "Wir sind die Gebrüder Saubermann!\p"
	.string "Der Ältere verteilt die Schmierseife\n"
	.string "und der Jüngere schrubbt das Deck!$"
#else
	.string "We're the CLEANUP BROTHERS!\p"
	.string "The old one dumps the detergent,\n"
	.string "and the young one does the scrubbing!$"
#endif

