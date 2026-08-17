FallarborTown_Mart_MapScripts::
	.byte 0

FallarborTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FallarborTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
FallarborTown_Mart_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	pokemartlistend

FallarborTown_Mart_EventScript_Woman::
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_PokefanM::
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_Mart_Text_DecidingSkittyEvolve:
#if GERMAN
	.string "Ich habe lange überlegt, ob sich mein\n"
	.string "Eneco entwickeln soll oder nicht.\p"
	.string "Ich müsste nur diesen Mondstein\n"
	.string "einsetzen, aber das ist eine schwere\l"
	.string "Entscheidung…\p"
	.string "Würde es sich entwickeln, wäre es viel\n"
	.string "stärker.\p"
	.string "Aber es würde auch anders aussehen.$"
#else
	.string "I'm having a hard time deciding if I\n"
	.string "should make my SKITTY evolve or not.\p"
	.string "I only have to use this MOON STONE,\n"
	.string "but it's so hard to decide…\p"
	.string "If I make it evolve, it will become\n"
	.string "much stronger.\p"
	.string "But it will look so different, too.$"
#endif

FallarborTown_Mart_Text_Skitty:
#if GERMAN
	.string "Eneco: Miyao?$"
#else
	.string "SKITTY: Miyao?$"
#endif

FallarborTown_Mart_Text_SellNuggetIFound:
#if GERMAN
	.string "Ich habe hier ein Nugget gefunden…\n"
	.string "Das werde ich wohl verkaufen. Was soll\l"
	.string "ich sonst damit machen?$"
#else
	.string "This NUGGET I found here…\n"
	.string "I suppose I'll have to sell it, seeing\l"
	.string "as how it has no other use.$"
#endif

