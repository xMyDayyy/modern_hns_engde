SaffronCity_Mart_Frlg_MapScripts::
	.byte 0

SaffronCity_Mart_EventScript_Lass::
	msgbox SaffronCity_Mart_Text_ReviveIsCostly, MSGBOX_NPC
	end

SaffronCity_Mart_EventScript_Youngster::
	msgbox SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper, MSGBOX_NPC
	end

SaffronCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SaffronCity_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
SaffronCity_Mart_Items::
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper::
#if GERMAN
	.string "Top-Schutz hält schwächere Pokémon\n"
	.string "fern.\p"
	.string "Top-Schutz wirkt länger als\n"
	.string "Superschutz.$"
#else
	.string "MAX REPEL keeps weaker POKéMON\n"
	.string "from appearing.\p"
	.string "MAX REPEL stays effective longer\n"
	.string "than SUPER REPEL.$"
#endif

SaffronCity_Mart_Text_ReviveIsCostly::
#if GERMAN
	.string "Beleber ist zwar teuer, aber besiegte\n"
	.string "Pokémon werden damit wieder fit!$"
#else
	.string "REVIVE is costly, but it revives\n"
	.string "fainted POKéMON!$"
#endif

