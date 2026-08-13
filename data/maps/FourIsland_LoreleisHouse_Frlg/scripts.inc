FourIsland_LoreleisHouse_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_LoreleisHouse_OnTransition
	.byte 0

FourIsland_LoreleisHouse_OnTransition::
	special UpdateLoreleiDollCollection
	end

FourIsland_LoreleisHouse_EventScript_Lorelei::
	lock
	faceplayer
	goto_if_set FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei3
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei2
	msgbox FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland
	release
	end

FourIsland_LoreleisHouse_EventScript_Lorelei2::
	setflag FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE
	msgbox FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile
	release
	end

FourIsland_LoreleisHouse_EventScript_Lorelei3::
	msgbox FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow
	release
	end

FourIsland_LoreleisHouse_EventScript_Doll::
	lock
	msgbox FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore
	release
	end

FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland::
#if GERMAN
	.string "Lorelei: Etwas betrübt meinen\n"
	.string "Geist!\p"
	.string "Falls auf der Insel, auf der ich geboren\n"
	.string "wurde, etwas Schreckliches passiert…\l"
	.string "Ich würde es nicht erfahren, da ich in\l"
	.string "der Pokémon Liga wäre!\p"
	.string "Zeigt das, dass ich meiner Heimat\n"
	.string "verantwortungslos gegenüberstehe…$"
#else
	.string "LORELEI: There's something weighing\n"
	.string "heavily on my mind.\p"
	.string "If anything were to happen on\n"
	.string "the island where I was born…\p"
	.string "I wouldn't know about it if I were\n"
	.string "in the POKéMON LEAGUE.\p"
	.string "I wonder if that would make me\n"
	.string "irresponsible to my home…$"
#endif

FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile::
#if GERMAN
	.string "Lorelei: Du hast hier also alle Probleme\n"
	.string "lösen können?\p"
	.string "Das ist großartig!\p"
	.string "Das bedeutet, dass ich mich nicht\n"
	.string "ständig hier aufhalten muss.\p"
	.string "Danke…\p"
	.string "Ich kehre bald zur Pokémon Liga zurück!$"
#else
	.string "LORELEI: So, you managed to solve\n"
	.string "all the problems here?\p"
	.string "That's wonderful.\p"
	.string "That means there isn't any reason\n"
	.string "for me to be here all the time.\p"
	.string "Thank you…\p"
	.string "I'll return to the POKéMON LEAGUE\n"
	.string "in a short while.$"
#endif

FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow::
#if GERMAN
	.string "Ich weiß nicht, was die Zukunft\n"
	.string "bringt, aber…\p"
	.string "Ich werde tun, was in meiner Macht\n"
	.string "steht, hier und jetzt.\l"
	.string "Das ist alles, was ich tun kann!$"
#else
	.string "I don't know what will happen in\n"
	.string "the future, but…\p"
	.string "I will do what I can here and now.\n"
	.string "That's all I can do.$"
#endif

FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore::
#if GERMAN
	.string "Pokémon-Plüschpuppen in Hülle\n"
	.string "und Fülle!$"
#else
	.string "Stuffed POKéMON dolls galore!$"
#endif

