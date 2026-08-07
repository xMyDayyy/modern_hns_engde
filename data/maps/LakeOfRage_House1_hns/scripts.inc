LakeOfRage_House1_hns_MapScripts::
	.byte 0

LakeOfRage_House1_EventScript_HiddenPowerGuy::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HIDDEN_POWER, LakeOfRage_House1_EventScript_HiddenPowerGuyAfter
	msgbox HiddenPowerGuy_Text_Intro, MSGBOX_DEFAULT
	giveitem ITEM_TM_HIDDEN_POWER
	msgbox HiddenPowerGuy_Text_Explanation, MSGBOX_DEFAULT
	setflag FLAG_GOT_HIDDEN_POWER
	closemessage
	release
	end

LakeOfRage_House1_EventScript_HiddenPowerGuyAfter::
	msgbox HiddenPowerGuy_Text_Meditating, MSGBOX_DEFAULT
	closemessage
	release
	end

HiddenPowerGuy_Text_Intro:
#if GERMAN
	.string "… … … Du hast einen weiten Weg hinter\n"
	.string "dir… Während ich hier meditiert habe,\l"
	.string "ist eine neue Kraft in mir erwacht.\p"
	.string "Ich möchte sie gerne mit deinen\n"
	.string "Pokémon teilen. Hier, nimm das, mein\l"
	.string "Kind.$"
#else
    .string "…You have strayed far…\p"
    .string "Here I have meditated. Inside me,\n"
    .string "a new power has been awakened.\p"
    .string "Let me share my power with your\n"
    .string "POKéMON. Take this, child.$"
#endif

HiddenPowerGuy_Text_Explanation:
#if GERMAN
	.string "…Weißt du, was das ist?\p"
	.string "Diese Attacke nennt sich Kraftreserve!\p"
	.string "Sie bringt die wahre Kraft eines\n"
	.string "Pokémon zum Vorschein. Aber vergiss\l"
	.string "nicht…\p"
	.string "Typ und Stärke der Attacke hängen vom\n"
	.string "jeweiligen Pokémon ab, dem du sie\l"
	.string "beibringst!$"
#else
    .string "Do you see it? It is HIDDEN POWER!\p"
    .string "It draws out the power of POKéMON\n"
    .string "for attacking.\p"
    .string "Remember this: its type and power\n"
    .string "depend on the POKéMON using it.$"
#endif

HiddenPowerGuy_Text_Meditating:
#if GERMAN
	.string "Ich meditiere gerade…$"
#else
    .string "I am meditating…$"
#endif
