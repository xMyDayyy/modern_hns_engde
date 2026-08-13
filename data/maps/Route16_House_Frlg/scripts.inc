Route16_House_Frlg_MapScripts::
	.byte 0

Route16_House_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HM02, Route16_House_EventScript_AlreadyGotHM02
	msgbox Route16_House_Text_FoundMySecretRetreat
	checkitemspace ITEM_HM02
	goto_if_eq VAR_RESULT, FALSE, Route16_House_EventScript_NoRoomForHM02
	giveitem_msg Route16_House_Text_ReceivedHM02FromGirl, ITEM_HM02
	msgbox Route16_House_Text_ExplainHM02
	setflag FLAG_GOT_HM02
	release
	end

Route16_House_EventScript_NoRoomForHM02::
	msgbox Route16_House_Text_DontHaveAnyRoomForThis
	release
	end

Route16_House_EventScript_AlreadyGotHM02::
	msgbox Route16_House_Text_ExplainHM02
	release
	end

Route16_House_EventScript_Fearow::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_FEAROW, CRY_MODE_NORMAL
	msgbox Route16_House_Text_Fearow
	waitmoncry
	release
	end

Route16_House_Text_FoundMySecretRetreat::
#if GERMAN
	.string "Du hast meinen geheimen Unterschlupf\n"
	.string "gefunden!\p"
	.string "Bitte erzähle niemandem davon.\n"
	.string "Du bekommst auch etwas von mir!$"
#else
	.string "Oh, dear.\n"
	.string "You've found my secret retreat.\p"
	.string "Please don't tell anyone I'm here.\n"
	.string "I'll make it up to you with this!$"
#endif

Route16_House_Text_ReceivedHM02FromGirl::
#if GERMAN
	.string "{PLAYER} erhält VM02!$"
#else
	.string "{PLAYER} received HM02\n"
	.string "from the girl.$"
#endif

Route16_House_Text_ExplainHM02::
#if GERMAN
	.string "VM02 ist Fliegen. Damit kannst du\n"
	.string "in jede Stadt zurückfliegen.\p"
	.string "Sie wird dir von Nutzen sein!$"
#else
	.string "HM02 is FLY.\n"
	.string "It's a wonderfully convenient move.\p"
	.string "Please, put it to good use.$"
#endif

Route16_House_Text_DontHaveAnyRoomForThis::
#if GERMAN
	.string "Du hast keinen Platz mehr, um sie\n"
	.string "mitzunehmen!$"
#else
	.string "You don't have any room for this.$"
#endif

Route16_House_Text_Fearow::
#if GERMAN
	.string "Ibitak: Ibitak!$"
#else
	.string "FEAROW: Kyueen!$"
#endif

