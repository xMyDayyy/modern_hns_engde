LilycoveCity_House4_MapScripts::
	.byte 0

LilycoveCity_House4_EventScript_Man1::
	msgbox LilycoveCity_House4_Text_MysteriesAtBottomOfSea, MSGBOX_NPC
	end

LilycoveCity_House4_EventScript_Man2::
	msgbox LilycoveCity_House4_Text_UnderwaterTrenchMossdeepSootopolis, MSGBOX_NPC
	end

LilycoveCity_House4_Text_MysteriesAtBottomOfSea:
#if GERMAN
	.string "Das größte Geheimnis dieses Planeten\n"
	.string "hütet der Meeresboden.\p"
	.string "Das hat mal jemand gesagt, aber ich\n"
	.string "weiß nicht…$"
#else
	.string "This planet's biggest mysteries are\n"
	.string "at the bottom of the sea.\p"
	.string "Somebody said that, but I don't know…$"
#endif

LilycoveCity_House4_Text_UnderwaterTrenchMossdeepSootopolis:
#if GERMAN
	.string "Zwischen Moosbach City und Xeneroville\n"
	.string "befindet sich ein tiefer\l"
	.string "Unterwassergraben.\p"
	.string "Das hat mir jemand erzählt.$"
#else
	.string "There's a deep underwater trench\n"
	.string "between MOSSDEEP and SOOTOPOLIS.\p"
	.string "That's what someone told me, anyway.$"
#endif

