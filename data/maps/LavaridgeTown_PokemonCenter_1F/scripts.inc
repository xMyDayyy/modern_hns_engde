LavaridgeTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavaridgeTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LAVARIDGE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
#if GERMAN
	.string "Ich denke, die Pokémon fühlen sich\n"
	.string "ihrem Trainer mehr verbunden, wenn sie\l"
	.string "viel Zeit miteinander verbringen.\p"
	.string "Je länger, desto besser.\n"
	.string "Das ist meine Meinung.$"
#else
	.string "I think POKéMON get closer to their\n"
	.string "TRAINERS if they spend time together.\p"
	.string "The longer the better.\n"
	.string "That's what I think.$"
#endif

LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
#if GERMAN
	.string "Es grenzt an Magie, wie ein Bad in der\n"
	.string "Heißen Quelle einen stärkt.\p"
	.string "Ich wünschte, ich könnte meinen\n"
	.string "Pokémon auch so ein Bad gönnen.$"
#else
	.string "It's sort of magical how just sitting\n"
	.string "in a hot-spring pool can invigorate.\p"
	.string "I wish I could let my POKéMON\n"
	.string "soak, too.$"
#endif

LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
#if GERMAN
	.string "Hohoho! Hey, Kindchen, du kannst von\n"
	.string "hier die Heißen Quellen erreichen.\p"
	.string "Wenn Pokémon ruhen, sollten sich\n"
	.string "ihre Trainer auch ausruhen.$"
#else
	.string "Hohoho! Hey, kid, you can reach\n"
	.string "the hot springs from here.\p"
	.string "If POKéMON are getting rest, so too\n"
	.string "should their TRAINERS.$"
#endif

