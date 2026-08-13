BattleFrontier_Lounge2_MapScripts::
	.byte 0

@ This NPC gives hints about a random facility or battle mode.
@ For battle modes he gives generic advice
@ For facilities, depending on how far the player has progressed he will say either
@    The name of the Frontier Brain there
@    The type and description of the 3 pokemon they use in their silver battle
@    The type and description of the 3 pokemon they use in their gold battle
BattleFrontier_Lounge2_EventScript_FrontierManiac::
	lock
	faceplayer
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_AlreadyMetManiac
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
	msgbox BattleFrontier_Lounge2_Text_FrontierManiacIntro, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
	end

BattleFrontier_Lounge2_EventScript_AlreadyMetManiac::
	msgbox BattleFrontier_Lounge2_Text_SwingByForTheLatestWord, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
	end

BattleFrontier_Lounge2_EventScript_GiveAdvice::
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_SINGLES, BattleFrontier_Lounge2_EventScript_BufferSingle
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_DOUBLES, BattleFrontier_Lounge2_EventScript_BufferDouble
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_MULTIS, BattleFrontier_Lounge2_EventScript_BufferMulti
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BufferMultiLink
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_BufferBattleDome
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_FACTORY, BattleFrontier_Lounge2_EventScript_BufferBattleFactory
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PALACE, BattleFrontier_Lounge2_EventScript_BufferBattlePalace
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_ARENA, BattleFrontier_Lounge2_EventScript_BufferBattleArena
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PIKE, BattleFrontier_Lounge2_EventScript_BufferBattlePike
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PYRAMID, BattleFrontier_Lounge2_EventScript_BufferBattlePyramid
@ <= FRONTIER_MANIAC_TOWER_LINK is any Battle Tower mode
	call_if_le VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BattleTowerNews
@ >= FRONTIER_MANIAC_DOME is any facility other than Battle Tower
	call_if_ge VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_FacilityNews
	special ShowFrontierManiacMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge2_EventScript_BattleTowerNews::
	msgbox BattleFrontier_Lounge2_Text_BattleTowerIsHottest, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_FacilityNews::
	msgbox BattleFrontier_Lounge2_Text_FacilityIsHottest, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_BufferSingle::
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
	return

BattleFrontier_Lounge2_EventScript_BufferDouble::
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
	return

BattleFrontier_Lounge2_EventScript_BufferMulti::
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
	return

BattleFrontier_Lounge2_EventScript_BufferMultiLink::
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
	return

BattleFrontier_Lounge2_EventScript_BufferBattleDome::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_DOME
	return

BattleFrontier_Lounge2_EventScript_BufferBattleFactory::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_FACTORY
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePalace::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PALACE
	return

BattleFrontier_Lounge2_EventScript_BufferBattleArena::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_ARENA
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePike::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PIKE
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePyramid::
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PYRAMID
	return

BattleFrontier_Lounge2_EventScript_Maniac1::
	lock
	msgbox BattleFrontier_Lounge2_Text_NewsGatheringPower, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_Maniac2::
	lock
	msgbox BattleFrontier_Lounge2_Text_AmazingPowersOfObservation, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_Maniac3::
	lock
	msgbox BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_TriathleteF::
	msgbox BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe, MSGBOX_NPC
	end

BattleFrontier_Lounge2_Text_FrontierManiacIntro::
#if GERMAN
	.string "Halli hallo! Wenn du Neuigkeiten über\n"
	.string "die Kampfzone erfahren willst, bin ich\l"
	.string "die Nummer eins für dich!\p"
	.string "Ich bin der Kampfzonen-maniac.\p"
	.string "Nur zur Sicherheit: Du bist doch ein\n"
	.string "Trainer, oder?\p"
	.string "Ich werde dir die neuesten Neuigkeiten\n"
	.string "über die Kampfzone erzählen!$"
#else
	.string "Howdy! When it comes to news about\n"
	.string "the BATTLE FRONTIER, I'm no. 1.\p"
	.string "You can think of me as\n"
	.string "the FRONTIER MANIAC.\p"
	.string "Just checking, but you are a TRAINER,\n"
	.string "isn't that right?\p"
	.string "I'll happily share the hottest news\n"
	.string "I gathered about the BATTLE FRONTIER.$"
#endif

BattleFrontier_Lounge2_Text_SwingByForTheLatestWord::
#if GERMAN
	.string "Halli hallo! Du willst bestimmt die\n"
	.string "neuesten Neuigkeiten aus mir\l"
	.string "herauspressen! Hab ich Recht?$"
#else
	.string "Howdy! Did you swing by to grill me\n"
	.string "about the latest word? Oh, all right!$"
#endif

@ Unused
BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight::
#if GERMAN
	.string "Na? Na? Na?\p"
	.string "Meine Informationen waren dir doch\n"
	.string "bestimmt eine große Hilfe, oder?$"
#else
	.string "Well? Well? Well?\p"
	.string "I'm sure my information's been\n"
	.string "seriously useful to you, right?$"
#endif

BattleFrontier_Lounge2_Text_FacilityIsHottest::
#if GERMAN
	.string "Mal sehen…\p"
	.string "Scheinbar ist {STR_VAR_1}\n"
	.string "im Moment der angesagteste Ort.$"
#else
	.string "Let's see now…\p"
	.string "It sounds like the {STR_VAR_1}\n"
	.string "is the hottest place going.$"
#endif

BattleFrontier_Lounge2_Text_BattleTowerIsHottest::
#if GERMAN
	.string "Mal sehen…\p"
	.string "Scheinbar ist der Duellturm {STR_VAR_1} im\n"
	.string "Moment der angesagteste Ort.$"
#else
	.string "Let's see now…\p"
	.string "It sounds like BATTLE TOWER\n"
	.string "{STR_VAR_1} is the hottest.$"
#endif

BattleFrontier_Lounge2_Text_SalonMaidenIsThere::
#if GERMAN
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein sehr geheimnisvoller Trainer…\n"
	.string "Der Kampfkoloss, der hier alles leitet.$"
#else
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this mysterious TRAINER called\n"
	.string "the SALON MAIDEN that runs the place.$"
#endif

BattleFrontier_Lounge2_Text_SalonMaidenSilverMons::
#if GERMAN
	.string "Bist du schon gegen den Kampfkoloss\n"
	.string "angetreten?\p"
	.string "Er schätzt seine Gegner ab und setzt\n"
	.string "die folgenden drei Pokémon ein:\p"
	.string "Ein PSI-Pokémon, Typ Psycho.\n"
	.string "Ein Vulkan-Pokémon, Typ Feuer.\p"
	.string "Und ein Tagträumer-Pokémon,\n"
	.string "Typ Normal.$"
#else
	.string "Have you battled the SALON MAIDEN?\p"
	.string "When she's measuring up her opponent,\n"
	.string "she apparently uses these POKéMON:\p"
	.string "A PSYCHIC-type PSI POKéMON,\n"
	.string "a FIRE-type VOLCANO POKéMON,\l"
	.string "and a NORMAL-type SLEEPING POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_SalonMaidenGoldMons::
#if GERMAN
	.string "Bist du dem Kampfkoloss schon\n"
	.string "begegnet, wenn er ernsthaft kämpft?\p"
	.string "In dem Fall setzt er folgende Pokémon\n"
	.string "ein:\p"
	.string "Ein Äon-Pokémon, Typ Drache & Psycho.\n"
	.string "Ein Donner-Pokémon, Typ Elektro.\l"
	.string "Und ein Tagträumer-Pokémon, Typ\l"
	.string "Normal.$"
#else
	.string "Have you battled the SALON MAIDEN\n"
	.string "when she's serious?\p"
	.string "When she's battling flat out,\n"
	.string "she apparently uses these POKéMON:\p"
	.string "A DRAGON & PSYCHIC EON POKéMON,\n"
	.string "an ELECTRIC-type THUNDER POKéMON,\l"
	.string "and a NORMAL-type SLEEPING POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_DomeAceIsThere::
#if GERMAN
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein großspuriger Trainer…\n"
	.string "Der Stadionstar, der hier alles leitet.$"
#else
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this flamboyant TRAINER called\n"
	.string "the DOME ACE that runs the place.$"
#endif

BattleFrontier_Lounge2_Text_DomeAceSilverMons::
#if GERMAN
	.string "Bist du schon gegen den Stadionstar\n"
	.string "angetreten?\p"
	.string "Er tritt mit folgenden Pokémon gegen\n"
	.string "seine Herausforderer an:\p"
	.string "Ein Drache-Pokémon, Typ Drache & Flug.\n"
	.string "Ein Lehmhüpfer-Pokémon, Typ Wasser &\l"
	.string "Boden.\p"
	.string "Und ein Flamme-Pokémon, Typ\n"
	.string "Feuer & Flug.$"
#else
	.string "Have you battled the DOME ACE?\p"
	.string "When he's treating the opponent\n"
	.string "lightly, he uses these three POKéMON:\p"
	.string "A DRAGON & FLYING DRAGON POKéMON,\n"
	.string "a WATER & GROUND MUD FISH POKéMON,\l"
	.string "and a FIRE & FLYING FLAME POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_DomeAceGoldMons::
#if GERMAN
	.string "Bist du schon gegen den Stadionstar\n"
	.string "angetreten, wenn er ernsthaft kämpft?\p"
	.string "Dann zeigt er dem Gegner mit den\n"
	.string "folgenden 3 Pokémon seine Strategie:\p"
	.string "Ein Äon-Pokémon, Typ Drache & Psycho.\n"
	.string "Ein Lehmhüpfer-Pokémon, Typ Wasser &\l"
	.string "Boden.\p"
	.string "Und ein Eisenfuss-Pokémon, Typ\n"
	.string "Stahl & Psycho.$"
#else
	.string "Have you battled the DOME ACE\n"
	.string "when he's serious?\p"
	.string "When he's demonstrating his strategy,\n"
	.string "he uses these three POKéMON:\p"
	.string "A DRAGON & FLYING EON POKéMON,\n"
	.string "a WATER & GROUND MUD FISH POKéMON,\l"
	.string "and a STEEL- & PSYCHIC-type IRON LEG\l"
	.string "POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_FactoryHeadIsThere::
#if GERMAN
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein sehr geheimnisvoller Trainer…\n"
	.string "Der Fabrikleiter, der hier alles leitet.$"
#else
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this freaky TRAINER called\n"
	.string "the FACTORY HEAD that runs the place.$"
#endif

BattleFrontier_Lounge2_Text_FactoryHeadSilverMons::
#if GERMAN
	.string "Bist du schon gegen den Fabrikleiter\n"
	.string "angetreten?\p"
	.string "Lass mich mal nachdenken… Er geht\n"
	.string "immer mit drei Leih-Pkmn in den Kampf.\p"
	.string "Er kämpft also fast unter den gleichen\n"
	.string "Bedingungen wie du.$"
#else
	.string "Have you battled the FACTORY HEAD\n"
	.string "already?\p"
	.string "Let me think… When he goes to battle,\n"
	.string "he just gets three rental POKéMON.\p"
	.string "He battles under pretty much the same\n"
	.string "conditions as you.$"
#endif

BattleFrontier_Lounge2_Text_FactoryHeadGoldMons::
#if GERMAN
	.string "Bist du schon gegen den Fabrikleiter\n"
	.string "angetreten, wenn er ernsthaft kämpft?\p"
	.string "Auch wenn er sich nicht zurückhalten\n"
	.string "will, nimmt er drei Leih-Pokémon mit in\l"
	.string "den Kampf.\p"
	.string "Er kämpft also fast unter den gleichen\n"
	.string "Bedingungen wie du.$"
#else
	.string "Have you battled the FACTORY HEAD\n"
	.string "when he's serious?\p"
	.string "When he goes seriously to battle,\n"
	.string "he still gets three rental POKéMON.\p"
	.string "He battles under virtually the same\n"
	.string "conditions as you.$"
#endif

BattleFrontier_Lounge2_Text_PikeQueenIsThere::
#if GERMAN
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein sehr geheimnisvoller Trainer…\n"
	.string "Die Pfipitistin, die hier alles leitet.$"
#else
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this scary TRAINER called\n"
	.string "the PIKE QUEEN that runs the place.$"
#endif

BattleFrontier_Lounge2_Text_PikeQueenSilverMons::
#if GERMAN
	.string "Bist du schon mal gegen die\n"
	.string "Pfipitistin angetreten?\p"
	.string "Wenn sie gute Laune hat, dann setzt sie\n"
	.string "die folgenden drei Pokémon ein:\p"
	.string "Ein Reißzahn-Pokémon, Typ Gift.\n"
	.string "Ein Schimmel-Pokémon, Typ Käfer &\p"
	.string "Gestein sowie ein Zartheit-Pokémon,\n"
	.string "Typ Wasser.$"
#else
	.string "Have you battled the PIKE QUEEN\n"
	.string "before?\p"
	.string "When she's in a good mood, they say\n"
	.string "she uses these three POKéMON:\p"
	.string "A POISON-type FANG SNAKE POKéMON,\n"
	.string "a BUG & ROCK MOLD POKéMON,\l"
	.string "and a WATER-type TENDER POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_PikeQueenGoldMons::
#if GERMAN
	.string "Bist du mal gegen die Pfipitistin an-\n"
	.string "getreten, wenn sie ernsthaft kämpft?\p"
	.string "Wenn sie schlechte Laune hat, dann\n"
	.string "setzt sie die folgenden 3 Pokémon ein:\p"
	.string "Ein Reißzahn-Pokémon, Typ Gift.\n"
	.string "Ein Stahlboa-Pokémon, Typ Stahl &\p"
	.string "Boden sowie ein Grausam-Pokémon,\n"
	.string "Typ Wasser & Flug.$"
#else
	.string "Have you battled the PIKE QUEEN\n"
	.string "when she's serious?\p"
	.string "When she's seriously annoyed, they say\n"
	.string "she uses these three POKéMON:\p"
	.string "A POISON-type FANG SNAKE POKéMON,\n"
	.string "a STEEL & GROUND IRON SNAKE POKéMON,\l"
	.string "and a WATER- & FLYING-type ATROCIOUS\l"
	.string "POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_ArenaTycoonIsThere::
#if GERMAN
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein niedlicher Trainer…\n"
	.string "Der Ringmeister, der hier alles leitet.$"
#else
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this cute TRAINER called\n"
	.string "the ARENA TYCOON that runs the place.$"
#endif

BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons::
#if GERMAN
	.string "Bist du schon mal gegen den\n"
	.string "Ringmeister angetreten?\p"
	.string "Wenn er seinen Gegner abschätzen will,\n"
	.string "setzt er diese drei Pokémon ein:\p"
	.string "Ein Einzelhorn-Pokémon, Typ Käfer &\n"
	.string "Kampf. Ein Mondschein-Pokémon, Typ\p"
	.string "Unlicht sowie ein Häutung-Pokémon,\n"
	.string "Typ Käfer & Geist.$"
#else
	.string "Have you battled the ARENA TYCOON\n"
	.string "before?\p"
	.string "When she's assessing the foe's ability,\n"
	.string "she supposedly uses these POKéMON:\p"
	.string "A BUG & FIGHTING SINGLE HORN POKéMON,\n"
	.string "a DARK-type MOONLIGHT POKéMON,\l"
	.string "and a BUG & GHOST SHED POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons::
#if GERMAN
	.string "Bist du schon mal gegen den Ringmeister\n"
	.string "angetreten, wenn er ernsthaft kämpft?\p"
	.string "Er bleibt auch dann noch sehr höflich\n"
	.string "und setzt diese drei Pokémon ein:\p"
	.string "Ein Mondschein-Pokémon, Typ Unlicht,\n"
	.string "ein Schatten-Pokémon, Typ Geist & Gift\l"
	.string "sowie ein Pilz-Pokémon, Typ Pflanze &\l"
	.string "Kampf.$"
#else
	.string "Have you battled the ARENA TYCOON\n"
	.string "when she's serious?\p"
	.string "When she battles for keeps,\n"
	.string "she supposedly uses these POKéMON:\p"
	.string "A DARK-type MOONLIGHT POKéMON,\n"
	.string "a GHOST & POISON SHADOW POKéMON\l"
	.string "and a GRASS- & FIGHTING-type\l"
	.string "MUSHROOM POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_PalaceMavenIsThere::
#if GERMAN
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein sehr hinterhältiger Trainer…\n"
	.string "Der Palastregent, der hier alles leitet.$"
#else
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this sinister TRAINER called\n"
	.string "the PALACE MAVEN that runs the place.$"
#endif

BattleFrontier_Lounge2_Text_PalaceMavenSilverMons::
#if GERMAN
	.string "Bist du schon mal gegen den Palast-\n"
	.string "regenten angetreten?\p"
	.string "Wenn er den Geist seiner Gegner\n"
	.string "abschätzen will, setzt er diese 3\l"
	.string "Pokémon ein:\p"
	.string "Ein Fledermaus-Pokémon, Typ Gift &\n"
	.string "Flug. Ein Müßig-Pokémon, Typ\p"
	.string "Normal sowie ein Transport-Pokémon,\n"
	.string "Typ Wasser & Eis.$"
#else
	.string "Have you battled the PALACE MAVEN\n"
	.string "before?\p"
	.string "When he's testing the opponent's\n"
	.string "spirit, he's said to use these POKéMON:\p"
	.string "A POISON & FLYING-type BAT POKéMON,\n"
	.string "a NORMAL-type LAZY POKéMON, and a\l"
	.string "WATER- & ICE-type TRANSPORT POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_PalaceMavenGoldMons::
#if GERMAN
	.string "Bist du schon mal gegen den\n"
	.string "Palastregenten angetreten, wenn er\l"
	.string "ernsthaft kämpft?\p"
	.string "Wenn er im Kampf alles geben will, setzt\n"
	.string "er diese drei Pokémon ein:\p"
	.string "Ein Legendäres Pokémon, Typ Feuer.\n"
	.string "Ein Müßig-Pokémon, Typ\p"
	.string "Normal sowie ein Polarlicht-Pokémon,\n"
	.string "Typ Wasser.$"
#else
	.string "Have you battled the PALACE MAVEN\n"
	.string "when he's serious?\p"
	.string "When he throws his entire might into\n"
	.string "battle, he's said to use these POKéMON:\p"
	.string "A FIRE-type LEGENDARY POKéMON,\n"
	.string "a NORMAL-type LAZY POKéMON,\l"
	.string "and a WATER-type AURORA POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_PyramidKingIsThere::
#if GERMAN
	.string "Ich wette, das hier weißt du noch nicht!\p"
	.string "Einer der Top-Trainer, die Scott die\n"
	.string "Kampfkoryphäen nennt, ist hier.\p"
	.string "Ein sehr hitzköpfiger Trainer…\n"
	.string "Der Pyrakönig, der hier alles leitet.$"
#else
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this fiery-hot TRAINER called\n"
	.string "the PYRAMID KING that runs the place.$"
#endif

BattleFrontier_Lounge2_Text_PyramidKingSilverMons::
#if GERMAN
	.string "Bist du schon mal gegen den Pyrakönig\n"
	.string "angetreten?\p"
	.string "Wenn er die Kraft seiner Gegner\n"
	.string "abschätzen will, setzt er diese 3\l"
	.string "Pokémon ein:\p"
	.string "Ein Steingipfel-Pokémon, Typ Gestein.\n"
	.string "Ein Eisberg-Pokémon, Typ\p"
	.string "Eis sowie ein Eisen-Pokémon,\n"
	.string "Typ Stahl.$"
#else
	.string "Have you battled the PYRAMID KING\n"
	.string "before?\p"
	.string "When he's checking the foe's power,\n"
	.string "he apparently uses these POKéMON:\p"
	.string "A ROCK-type ROCK PEAK POKéMON,\n"
	.string "an ICE-type ICEBERG POKéMON,\l"
	.string "and a STEEL-type IRON POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_PyramidKingGoldMons::
#if GERMAN
	.string "Bist du schon mal gegen den Pyrakönig\n"
	.string "angetreten, wenn er ernsthaft kämpft?\p"
	.string "Wenn er vor Kraft fast explodiert,\n"
	.string "setzt er diese drei Pokémon ein:\p"
	.string "Ein Eis-Pokémon, Typ Eis & Flug.\n"
	.string "Ein Elektro-Pokémon, Typ\p"
	.string "Elektro & Flug sowie ein Flamme-\n"
	.string "Pokémon, Typ Feuer & Flug$"
#else
	.string "Have you battled the PYRAMID KING\n"
	.string "when he's serious?\p"
	.string "When he's pumped with hot power,\n"
	.string "he apparently uses these POKéMON:\p"
	.string "An ICE & FLYING FREEZE POKéMON, an\n"
	.string "ELECTRIC & FLYING ELECTRIC POKéMON,\l"
	.string "and a FIRE- & FLYING-type FLAME\l"
	.string "POKéMON.$"
#endif

BattleFrontier_Lounge2_Text_DoubleBattleAdvice1::
#if GERMAN
	.string "Natürlich gibt es verschiedene Orte, an\n"
	.string "denen du Doppelkämpfe austragen\l"
	.string "kannst.\p"
	.string "Aber die Doppelkämpfe des\n"
	.string "Duellturms sind klasse!\p"
	.string "Dort kannst du lernen, wie die\n"
	.string "Doppelkämpfe hier in der Kampfzone\l"
	.string "ausgetragen werden.$"
#else
	.string "Sure, there are several places where\n"
	.string "you can enter DOUBLE BATTLES.\p"
	.string "But the DOUBLE BATTLE ROOMS of\n"
	.string "the BATTLE TOWER are, like, basic!\p"
	.string "They're where you should learn about\n"
	.string "how DOUBLE BATTLES are played here\l"
	.string "in the BATTLE FRONTIER.$"
#endif

BattleFrontier_Lounge2_Text_DoubleBattleAdvice2::
#if GERMAN
	.string "Beobachte dich selbst und lerne dazu.\p"
	.string "Die Trainer hier haben Strategien\n"
	.string "entwickelt, die sie nur hier in\l"
	.string "Doppelkämpfen einsetzen!$"
#else
	.string "Watch yourself in the battles here.\p"
	.string "I hear there are TRAINERS that have\n"
	.string "strategies they developed just for\l"
	.string "DOUBLE BATTLES.$"
#endif

BattleFrontier_Lounge2_Text_DoubleBattleAdvice3::
#if GERMAN
	.string "Sobald du Selbstvertrauen gewonnen\n"
	.string "hast und du dich bei Doppelkämpfen\l"
	.string "auskennst, solltest du andere Orte\l"
	.string "aufsuchen, die diese Kämpfe anbieten.$"
#else
	.string "Once you're confident and comfortable\n"
	.string "with DOUBLE BATTLES here, you should\l"
	.string "think about challenging other places\l"
	.string "offering DOUBLE BATTLES.$"
#endif

BattleFrontier_Lounge2_Text_MultiBattleAdvice::
#if GERMAN
	.string "In der Teamlounge trifft man auf die\n"
	.string "unterschiedlichsten Trainer.\p"
	.string "Stell dir mal vor! Du triffst vielleicht\n"
	.string "auf einen Freund oder Fans!\l"
	.string "Schau dich gut um!$"
#else
	.string "All sorts of TRAINERS gather in\n"
	.string "the BATTLE SALON.\p"
	.string "Just think--you may run into your\n"
	.string "friends or followers!\l"
	.string "You should look carefully!$"
#endif

BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice::
#if GERMAN
	.string "Begleitet dich ein Freund, solltet ihr\n"
	.string "den Link-Multikampf-Raum aufsuchen.\p"
	.string "Trittst du mit einem starken Freund\n"
	.string "an, sind auch deine Gegner stark!$"
#else
	.string "If you're with a friend, head for the\n"
	.string "LINK MULTI BATTLE ROOM.\p"
	.string "If you play with a strong friend,\n"
	.string "you can expect to see tough foes!$"
#endif

BattleFrontier_Lounge2_Text_NewsGatheringPower::
#if GERMAN
	.string "Was für ein Talent, Neuigkeiten\n"
	.string "aufzuspüren! Niemand kann meinem\l"
	.string "Mentor darin das Wasser reichen!!!$"
#else
	.string "What amazing news-gathering power!\n"
	.string "My mentor's like none other!$"
#endif

BattleFrontier_Lounge2_Text_AmazingPowersOfObservation::
#if GERMAN
	.string "Was für eine Beobachtungsgabe!\n"
	.string "Niemand kann meinem Mentor darin das\l"
	.string "Wasser reichen!!!$"
#else
	.string "What amazing powers of observation!\n"
	.string "My mentor's like none other!$"
#endif

BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion::
#if GERMAN
	.string "Was für eine Überzeugungskraft!\n"
	.string "Niemand kann meinem Mentor darin das\l"
	.string "Wasser reichen!!!$"
#else
	.string "What amazing power of persuasion!\n"
	.string "My mentor's like none other!$"
#endif

BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe::
#if GERMAN
	.string "Was ist dies für ein Ort?\n"
	.string "Er macht mir Angst…$"
#else
	.string "…What is this place?\n"
	.string "It's scaring me…$"
#endif

