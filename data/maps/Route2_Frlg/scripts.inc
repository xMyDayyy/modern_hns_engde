Route2_Frlg_MapScripts::
	.byte 0

Route2_EventScript_RouteSign::
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
	end

Route2_EventScript_DiglettsCaveSign::
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
	end

Route2_Text_RouteSign::
#if GERMAN
	.string "Route 2\n"
	.string "Vertania City - Marmoria City$"
#else
	.string "ROUTE 2\n"
	.string "VIRIDIAN CITY - PEWTER CITY$"
#endif

Route2_Text_DiglettsCave::
#if GERMAN
	.string "Digdas Höhle$"
#else
	.string "DIGLETT'S CAVE$"
#endif

