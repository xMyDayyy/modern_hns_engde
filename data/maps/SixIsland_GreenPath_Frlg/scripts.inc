SixIsland_GreenPath_Frlg_MapScripts::
	.byte 0

SixIsland_GreenPath_EventScript_RightRouteSign::
	msgbox SixIsland_GreenPath_Text_LeftRouteSign, MSGBOX_SIGN
	end

SixIsland_GreenPath_EventScript_LeftRouteSign::
	msgbox SixIsland_GreenPath_Text_RightRouteSign, MSGBOX_SIGN
	end

SixIsland_GreenPath_Text_JaclynIntro::
#if GERMAN
	.string "… häh?\p"
	.string "Ich sah mein Haus, aber Teleport\n"
	.string "brachte mich hierher?$"
#else
	.string "…Huh?\p"
	.string "I was envisioning my house, but\n"
	.string "this is where I TELEPORT?$"
#endif

SixIsland_GreenPath_Text_JaclynDefeat::
#if GERMAN
	.string "Jippie!$"
#else
	.string "Big boo-boo!$"
#endif

SixIsland_GreenPath_Text_JaclynPostBattle::
#if GERMAN
	.string "Ich bin so kopflos!\p"
	.string "Ich muss mich konzentrieren, um\n"
	.string "mit Teleport zu meinem\l"
	.string "Haus zu gelangen!$"
#else
	.string "I am so scatterbrained!\p"
	.string "I need to focus so I can TELEPORT\n"
	.string "properly to my house!$"
#endif

SixIsland_GreenPath_Text_LeftRouteSign::
#if GERMAN
	.string "Grüner Pfad\n"
	.string "Musterbuschwald Voraus$"
#else
	.string "GREEN PATH\n"
	.string "PATTERN BUSH AHEAD$"
#endif

SixIsland_GreenPath_Text_RightRouteSign::
#if GERMAN
	.string "Grüner Pfad\n"
	.string "Sei umweltbewusst!$"
#else
	.string "GREEN PATH\n"
	.string "Think Green, Keep Nature Clean!$"
#endif

