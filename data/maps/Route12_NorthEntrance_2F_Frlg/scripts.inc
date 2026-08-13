Route12_NorthEntrance_2F_Frlg_MapScripts::
	.byte 0

Route12_NorthEntrance_2F_EventScript_LeftBinoculars::
	msgbox Route12_NorthEntrance_2F_Text_TheresManFishing, MSGBOX_SIGN
	end

Route12_NorthEntrance_2F_EventScript_RightBinoculars::
	msgbox Route12_NorthEntrance_2F_Text_ItsPokemonTower, MSGBOX_SIGN
	end

Route12_NorthEntrance_2F_EventScript_Lass::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM27, Route12_NorthEntrance_2F_EventScript_ExplainTM27
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route12_NorthEntrance_2F_EventScript_TakeTMMale
	call_if_eq VAR_RESULT, FEMALE, Route12_NorthEntrance_2F_EventScript_TakeTMFemale
	checkitemspace ITEM_TM27
	goto_if_eq VAR_RESULT, FALSE, Route12_NorthEntrance_2F_EventScript_NoRoomForTM27
	giveitem_msg Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl, ITEM_TM27
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
	setflag FLAG_GOT_TM27
	release
	end

Route12_NorthEntrance_2F_EventScript_TakeTMMale::
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreMale
	return

Route12_NorthEntrance_2F_EventScript_TakeTMFemale::
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreFemale
	return

Route12_NorthEntrance_2F_EventScript_NoRoomForTM27::
	msgbox Route12_NorthEntrance_2F_Text_DontHaveRoomForThis
	release
	end

Route12_NorthEntrance_2F_EventScript_ExplainTM27::
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
	release
	end

@ Male and female text identical, differ (presumably) in JP
Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreMale::
#if GERMAN
	.string "Meine Pokémon wurden im Pokémon-\n"
	.string "turm zur letzten Ruhe gebettet.\p"
	.string "Ich gebe dir diese TM. Ich\n"
	.string "benötige sie nicht länger...$"
#else
	.string "My POKéMON's ashes are stored in\n"
	.string "POKéMON TOWER.\p"
	.string "You can have this TM.\n"
	.string "I don't need it anymore…$"
#endif

Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreFemale::
#if GERMAN
	.string "Meine Pokémon wurden im Pokémon-\n"
	.string "turm zur letzten Ruhe gebettet.\p"
	.string "Ich gebe dir diese TM. Ich\n"
	.string "benötige sie nicht länger...$"
#else
	.string "My POKéMON's ashes are stored in\n"
	.string "POKéMON TOWER.\p"
	.string "You can have this TM.\n"
	.string "I don't need it anymore…$"
#endif

Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl::
#if GERMAN
	.string "{PLAYER} erhält\n"
	.string "TM27!$"
#else
	.string "{PLAYER} received TM27\n"
	.string "from the little girl.$"
#endif

Route12_NorthEntrance_2F_Text_ExplainTM27::
#if GERMAN
	.string "TM27 ist Rückkehr.\p"
	.string "Behandelst du deine Pokémon gut, geben\n"
	.string "sie Liebe zurück, indem sie sich im\l"
	.string "Kampf besonders anstrengen.$"
#else
	.string "TM27 is a move called RETURN…\p"
	.string "If you treat your POKéMON good,\n"
	.string "it will return your love by working\l"
	.string "its hardest in battle.$"
#endif

Route12_NorthEntrance_2F_Text_DontHaveRoomForThis::
#if GERMAN
	.string "Du kannst nichts mehr tragen!$"
#else
	.string "You don't have room for this.$"
#endif

Route12_NorthEntrance_2F_Text_TheresManFishing::
#if GERMAN
	.string "Du schaust durch das Fernrohr.\p"
	.string "Du siehst einen angelnden Mann!$"
#else
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "There's a man fishing!$"
#endif

Route12_NorthEntrance_2F_Text_ItsPokemonTower::
#if GERMAN
	.string "Du schaust durch das Fernrohr.\p"
	.string "Du siehst den Pokémon-Turm!$"
#else
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "It's POKéMON TOWER!$"
#endif

