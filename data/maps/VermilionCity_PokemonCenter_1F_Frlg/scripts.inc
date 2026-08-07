VermilionCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VermilionCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_VERMILION_CITY
	end

VermilionCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

VermilionCity_PokemonCenter_1F_EventScript_Man::
	msgbox VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking, MSGBOX_NPC
	end

VermilionCity_PokemonCenter_1F_EventScript_Hiker::
	msgbox VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild, MSGBOX_NPC
	end

VermilionCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes, MSGBOX_NPC
	end

VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman::
	lock
	faceplayer
	goto_if_set FLAG_GOT_VS_SEEKER, VermilionCity_PokemonCenter_1F_EventScript_ExplainVSSeeker
	msgbox VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain
	setflag FLAG_GOT_VS_SEEKER
	giveitem ITEM_VS_SEEKER
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
	msgbox VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches
	release
	end

VermilionCity_PokemonCenter_1F_EventScript_ExplainVSSeeker::
	msgbox VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker
	release
	end

VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild::
#if GERMAN
	.string "Auch wenn sie den gleichen Level\n"
	.string "haben, können die Fähigkeiten von\l"
	.string "Pokémon trotzdem verschieden sein.\p"
	.string "Das Pokémon eines Trainers ist\n"
	.string "stärker als ein wild lebendes.$"
#else
	.string "Even if they are the same level,\n"
	.string "POKéMON can have very different\l"
	.string "stats and abilities.\p"
	.string "A POKéMON raised by a TRAINER is\n"
	.string "stronger than one in the wild.$"
#endif

VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking::
#if GERMAN
	.string "Mein Pokémon wurde vergiftet!\n"
	.string "Das Gift hat es lange nach dem\l"
	.string "Kampf besiegt!$"
#else
	.string "My POKéMON was poisoned!\n"
	.string "It fainted while we were walking!$"
#endif

VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes::
#if GERMAN
	.string "Es stimmt, dass ein Pokémon mit\n"
	.string "einem hohen Level sehr stark ist...\p"
	.string "Allerdings haben alle Pokémon\n"
	.string "Schwächen. Die richtige Attacke\l"
	.string "kann sie leicht besiegen!\p"
	.string "Daher gibt es kein Universal-\n"
	.string "Pokémon.$"
#else
	.string "It is true that a higher-level\n"
	.string "POKéMON will be more powerful…\p"
	.string "But, all POKéMON will have weak\n"
	.string "points against specific types.\p"
	.string "So, there appears to be no\n"
	.string "universally strong POKéMON.$"
#endif

VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain::
#if GERMAN
	.string "Der Zwang erneut mit jemandem\n"
	.string "zu kämpfen…\p"
	.string "Hast du diesen Zwang je verspürt?\n"
	.string "Ich bin sicher, dass du hast!\p"
	.string "Gegen gewisse Trainer wollte\n"
	.string "ich immer wieder antreten!\p"
	.string "Also hab ich dies weggegeben.\n"
	.string "Nimm bitte auch eines!$"
#else
	.string "The urge to battle with someone\n"
	.string "you've tangled with before…\p"
	.string "Have you ever had that urge?\n"
	.string "I'm sure you have.\p"
	.string "I wanted to battle certain people\n"
	.string "again over and over, too.\p"
	.string "So, I've been giving these away.\n"
	.string "Please, take one!$"
#endif

VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches::
#if GERMAN
	.string "Setze dieses Gerät ein und du\n"
	.string "findest Trainer, die einen\l"
	.string "Rückkampf möchten.\l"
	.string "Du musst allerdings die Batterie\l"
	.string "aufladen, um es zu betreiben!$"
#else
	.string "Use that device and you'll find\n"
	.string "TRAINERS looking for a rematch.\p"
	.string "You have to charge its battery to\n"
	.string "use it, though.$"
#endif

VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker::
#if GERMAN
	.string "Wie man den Kampffahnder einsetzt?\n"
	.string "Das ist einfach!\p"
	.string "Er macht biep, biep, biep und\n"
	.string "die Trainer um dich herum\l"
	.string "werden darauf reagieren.\l"
	.string "Falls ein Trainer einen\l"
	.string "Rückkampf möchte, wird er\l"
	.string "dir das zeigen.\l"
	.string "Lade die Batterie auf und setze\l"
	.string "ihn auf deinen Reisen ein.$"
#else
	.string "How do you use the VS SEEKER?\n"
	.string "There's nothing to it.\p"
	.string "Use it like beep-beep-beep, and\n"
	.string "TRAINERS around you will notice.\p"
	.string "If any TRAINER wants a rematch,\n"
	.string "it will let you know immediately.\p"
	.string "Charge its battery and use it\n"
	.string "while you're on a road.$"
#endif
