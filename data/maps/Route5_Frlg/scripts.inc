Route5_Frlg_MapScripts::
	.byte 0

Route5_EventScript_UndergroundPathSign::
	msgbox Route5_Text_UndergroundPathSign, MSGBOX_SIGN
	end

Route5_Text_UndergroundPathSign::
#if GERMAN
	.string "Tunnelpfad\n"
	.string "Azuria City - Orania City$"
#else
	.string "UNDERGROUND PATH\n"
	.string "CERULEAN CITY - VERMILION CITY$"
#endif

