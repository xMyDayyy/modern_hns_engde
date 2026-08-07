DiglettsCave_EntranceNorth_hns_MapScripts::
	.byte 0


DiglettsCave_EntranceNorth_EventScript_Brock::
    lock
    faceplayer
    msgbox DiglettsCave_EntranceNorth_Text_Brock, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_DIGLETT_BROCK
    removeobject LOCALID_DIGLETT_BROCK
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_BROCK
    release
    end

DiglettsCave_EntranceNorth_Text_Brock:
#if GERMAN
	.string "Rocko: Kleine Räume, umgeben von\n"
	.string "Felsen, geben ein friedliches\l"
	.string "Gefühl, findest du nicht?\p"
	.string "Wenn du eine weitere Runde willst,\n"
	.string "bin ich im Kampf-Dojo.$"
#else
    .string "BROCK: Small spaces surrounded by\n"
    .string "rocks make you feel peaceful,\l"
    .string "don't you agree?\p"
	.string "If you want another match, I'll be\n"
	.string "at the FIGHTING DOJO.$"
#endif




