CeladonCity_House1_Frlg_MapScripts::
	.byte 0

CeladonCity_House1_EventScript_RocketChief::
	msgbox CeladonCity_House1_Text_SlotsReelInTheDough, MSGBOX_NPC
	end

CeladonCity_House1_EventScript_Rocket1::
	msgbox CeladonCity_House1_Text_ShippedMonsAsSlotPrizes, MSGBOX_NPC
	end

CeladonCity_House1_EventScript_Rocket2::
	msgbox CeladonCity_House1_Text_DontTouchGameCornerPoster, MSGBOX_NPC
	end

CeladonCity_House1_Text_SlotsReelInTheDough::
#if GERMAN
	.string "Haha!\p"
	.string "Mit den Spielautomaten verdienen\n"
	.string "wir uns eine goldene Nase!$"
#else
	.string "Hehehe!\p"
	.string "The slots just reel in the dough,\n"
	.string "big-time!$"
#endif

CeladonCity_House1_Text_ShippedMonsAsSlotPrizes::
#if GERMAN
	.string "Boss!\p"
	.string "Wir haben gerade 2000 Pokémon als\n"
	.string "Preise versandt!$"
#else
	.string "CHIEF!\p"
	.string "We just shipped two thousand\n"
	.string "more POKéMON as slot prizes\l"
	.string "again today!$"
#endif

CeladonCity_House1_Text_DontTouchGameCornerPoster::
#if GERMAN
	.string "Schenke dem Poster in der Spielhalle\n"
	.string "keine Beachtung.\p"
	.string "Dahinter ist kein versteckter\n"
	.string "Schalter!$"
#else
	.string "Don't touch the poster at the GAME\n"
	.string "CORNER!\p"
	.string "There's no secret switch behind it!$"
#endif

