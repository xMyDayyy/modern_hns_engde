DiglettsCave_SouthEntrance_Frlg_MapScripts::
	.byte 0

DiglettsCave_SouthEntrance_EventScript_OldMan::
	msgbox DiglettsCave_SouthEntrance_Text_DiglettDugThisTunnel, MSGBOX_NPC
	end

DiglettsCave_SouthEntrance_Text_DiglettDugThisTunnel::
#if GERMAN
	.string "Das ist cool!\n"
	.string "Digda hat einen Tunnel gegraben!\p"
	.string "Er führt direkt nach Vertania\n"
	.string "City!$"
#else
	.string "Well, isn't this a surprise!\n"
	.string "DIGLETT dug this long tunnel!\p"
	.string "It goes right to VIRIDIAN CITY,\n"
	.string "they tell me.$"
#endif

