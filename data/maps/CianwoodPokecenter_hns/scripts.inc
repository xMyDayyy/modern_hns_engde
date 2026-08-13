CianwoodPokecenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CianwoodPokecenter_OnTransition
	.byte 0

CianwoodPokecenter_OnTransition::
	setrespawn HEAL_LOCATION_CIANWOOD_CITY_HNS
	end

CianwoodPokemoncenter_EventScript_Fisher::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_1, CianwoodPokemoncenter_EventScript_FisherNormal
	checkfieldmove FIELD_MOVE_SURF
	goto_if_eq VAR_RESULT, PARTY_SIZE, CianwoodPokemoncenter_EventScript_FisherGiveTentacool
CianwoodPokemoncenter_EventScript_FisherNormal::
	msgbox CianwoodPokemoncenter_Text_Fisher1, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodPokemoncenter_EventScript_FisherGiveTentacool::
	msgbox CianwoodPokemoncenter_Text_Fisher2, MSGBOX_DEFAULT
	@HnS gift pokemon setup
	@callnative DisableStaticRandomizer
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TENTACOOL
	bufferspeciesname STR_VAR_1, SPECIES_TENTACOOL
	givemon SPECIES_TENTACOOL, 25
	call Common_EventScript_GiftMon
	setflag FLAG_TEMP_1
	@callnative EnableStaticRandomizer
	closemessage
	release
	end

CianwoodPokemoncenter_Text_Fisher1:
#if GERMAN
	.string "Was Wasser-Pokémon angeht, ist\n"
	.string "Tentacha das beste, und zwar\l"
	.string "seemeilenweit!$"
#else
	.string "As far as water POKéMON go,\n"
	.string "TENTACOOL is the best by a\l"
	.string "nautical mile!$"
#endif

CianwoodPokemoncenter_Text_Fisher2:
#if GERMAN
	.string "Du scheinst ein Wasser-Pokémon\n"
	.string "zu brauchen.\p"
	.string "Hier, nimm dieses, ich habe genug.$"
#else
	.string "You seem like you need a water\n"
	.string "POKéMON.\p"
	.string "Here, take this one, I have plenty.$"
#endif

CianwoodPokecenter_EventScript_Lass::
	lock
	faceplayer
	msgbox CianwoodCity_Text_PokecenterLass, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_PokecenterLass:
#if GERMAN
	.string "Hast du den Pokémaniac getroffen?\p"
	.string "Er gibt immer mit seinen seltenen\n"
	.string "Pokémon an.$"
#else
	.string "Did you meet the POKéMANIAC?\p"
	.string "He's always bragging about his\n"
	.string "rare POKéMON.$"
#endif


CianwoodGym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CIANWOOD_GYM, CianwoodGym_EventScript_GymGuideAfter
	msgbox CianwoodCity_Text_GymGuide, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodGym_EventScript_GymGuideAfter::
	msgbox CianwoodCity_Text_GymGuideWin, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_GymGuide:
#if GERMAN
	.string "Die Arena-Trainer hier sind\n"
	.string "richtige Machos.\p"
	.string "Wenn ich länger bleibe, könnten\n"
	.string "sie hinter mir her sein.\p"
	.string "Ein Tipp: Der Arena-Leiter nutzt\n"
	.string "Kampf-Pokémon.\p"
	.string "Bekämpfe ihn mit Psycho-Pokémon\p"
	.string "Besiege seine Pokémon, bevor sie\n"
	.string "ihre physischen Attacken nutzen.\p"
	.string "Und diese Felsen in der Arena?\p"
	.string "Wenn du sie falsch angreifst,\n"
	.string "kommst du nicht zum Arena-Leiter.\p"
	.string "Wenn du stecken bleibst, geh raus.$"
#else
	.string "The POKéMON GYM trainers here are\n"
	.string "macho bullies.\p"
	.string "If I stick around, they might\n"
	.string "come after me.\p"
	.string "Here's some advice: the GYM LEADER\n"
	.string "uses the FIGHTING-type.\p"
	.string "So you should confound him with\n"
	.string "psychic POKéMON.\p"
	.string "Wipe out his POKéMON before they\n"
	.string "can use their physical strength.\p"
	.string "And those boulders in the middle\n"
	.string "of the GYM?\p"
	.string "If you don't move them correctly,\n"
	.string "you won't reach the GYM LEADER.\p"
	.string "If you get stuck, go outside.$"
#endif

CianwoodCity_Text_GymGuideWin:
#if GERMAN
	.string "{PLAYER}! Du hast gewonnen!\n"
	.string "Man sieht es dir an!$"
#else
	.string "{PLAYER}! You won!\n"
	.string "I could tell by looking at you!$"
#endif

CianwoodPokecenter_EventScript_Nerd::
	lock
	faceplayer
	msgbox CianwoodCity_Text_PokecenterSuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_PokecenterSuperNerd:
#if GERMAN
	.string "Ich liebe es, meine Pokémon zu\n"
	.string "zeigen, die ich trainiert habe.\p"
	.string "Nicht wahr?\p"
	.string "Ich werde viele Kämpfe haben und\n"
	.string "meine Pokémon präsentieren!$"
#else
	.string "I love showing off the POKéMON\n"
	.string "that I've raised.\p"
	.string "Don't you?\p"
	.string "I'm going to get into a bunch of\n"
	.string "battles, and show off my POKéMON!$"
#endif
