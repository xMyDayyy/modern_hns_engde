GoldenrodCity_DepartmentStore_6F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodDeptElevator_OnFrame
	.byte 0

GoldenrodDeptStore6_EventScript_Whitney::
	lock
	faceplayer
	msgbox GoldenrodDeptStore6_Text_Whitney, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_DEPTSTORE_WHITNEY
	removeobject LOCALID_STORE_WHITNEY
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_DOJO_WHITNEY
	release
	end

GoldenrodDeptStore6_Text_Whitney:
#if GERMAN
	.string "{PLAYER}! Schön dich zu sehen!\p"
	.string "Ich hole etwas für mein Miltank.\p"
	.string "Wenn du kämpfen willst komm zum\n"
	.string "Kampf-Dojo$"
#else
	.string "{PLAYER}! Fancy seeing you here!\p"
	.string "I'm picking up something for\n"
	.string "my MILTANK.\p"
	.string "If you want another battle, come to\n"
	.string "the FIGHTING DOJO!$"
#endif

GoldenrodCity_DepartmentStore_6F_EventScript_Jose::
	lock
	faceplayer
	goto_if_set FLAG_GOLDENROD_NPC_TRADE_COMPLETED, GoldenrodCity_DepartmentStore_6F_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_MACHOP, GoldenrodCity_DepartmentStore_6F_Text_YouWillTradeWontYou, GoldenrodCity_DepartmentStore_6F_EventScript_DeclineTrade, GoldenrodCity_DepartmentStore_6F_EventScript_NotRequestedMon, GoldenrodCity_DepartmentStore_6F_Text_MonYouTakeCare
	setflag FLAG_GOLDENROD_NPC_TRADE_COMPLETED
	release
	end

GoldenrodCity_DepartmentStore_6F_EventScript_DeclineTrade::
	msgbox GoldenrodCity_DepartmentStore_6F_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_DepartmentStore_6F_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox GoldenrodCity_DepartmentStore_6F_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_DepartmentStore_6F_EventScript_TradeCompleted::
	msgbox GoldenrodCity_DepartmentStore_6F_Text_After, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_DepartmentStore_6F_Text_YouWillTradeWontYou:
#if GERMAN
	.string "Ich sammele Pokémon!\n"
	.string "Hast du ein {STR_VAR_1}?\p"
	.string "Möchtest du es gegen\n"
	.string "mein {STR_VAR_2} tauschen?$"
#else
	.string "I collect POKéMON!\n"
	.string "Do you have a {STR_VAR_1}?\p"
	.string "Want to trade it for my\n"
	.string "{STR_VAR_2}?$"
#endif

GoldenrodCity_DepartmentStore_6F_Text_MonYouTakeCare:
#if GERMAN
	.string "Juhu! Ich habe ein {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, pass gut auf dich auf!$"
#else
	.string "Yay! I got myself {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, you take care!$"
#endif

GoldenrodCity_DepartmentStore_6F_Text_ThisIsntAMon:
#if GERMAN
	.string "Ähm, nein, ich glaube nicht.\n"
	.string "Das ist kein {STR_VAR_1}.$"
#else
	.string "Uh, no, I don't think so.\n"
	.string "That isn't a {STR_VAR_1}.$"
#endif

GoldenrodCity_DepartmentStore_6F_Text_YouWontTradeMe:
#if GERMAN
	.string "Du möchtest also nicht tauschen?\n"
	.string "Schade…$"
#else
	.string "You don't want to trade? Aww...$"
#endif

GoldenrodCity_DepartmentStore_6F_Text_After:
#if GERMAN
	.string "Hi! Wie geht es meinem Machollo?\n"
	.string "Irgendwelche Probleme?$"
#else
	.string "Hi, how's my old MACHOP doing?$"
#endif


GoldenrodDeptStore6_EventScript_Lass::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_6FLass, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore6_EventScript_Nerd::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_6FSuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore6_EventScript_Sign::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_6FDirectory, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore_Text_6FLass:
#if GERMAN
	.string "Hörst du den Glückskanal?\p"
	.string "Möchtest du gewinnen,\n"
	.string "tausche Pokémon mit so vielen\p"
	.string "Leuten wie möglich, um verschiedene\n"
	.string "ID-Nummern zu erhalten.$"
#else
    .string "Do you listen to LUCKY CHANNEL?\p"
    .string "They say if you want to win,\n"
	.string "you should trade POKéMON with as\l"
    .string "many people as possible to get\l"
    .string "different ID numbers.\p"
	.string "However, trading isn't as widely\n"
	.string "available as it once was.$"
#endif

GoldenrodDeptStore_Text_6FSuperNerd:
#if GERMAN
	.string "Wenn man erschöpft ist, geht nichts\n"
	.string "über ein Getränk aus dem Automaten!\l"
	.string "Auch deine Pokémon werden sie mögen!$"
#else
    .string "If you're tired, try the vending\n"
    .string "machine's drinks.\p"
    .string "Your POKéMON will love them too.$"
#endif

GoldenrodDeptStore_Text_6FDirectory:
#if GERMAN
	.string "Mach eine Einkaufspause!\p"
	.string "5S Platz der ewigen Stille$"
#else
    .string "Take a Break from Shopping!\p"
    .string "6F TRANQUIL SQUARE$"
#endif
