VermilionCity_House2_hns_MapScripts::
	.byte 0

VermilionCity_House2_EventScript_PokefanF::
	msgbox VermilionCity_House2_Text_PokefanF, MSGBOX_NPC
	end

VermilionCity_House2_EventScript_Youngster::
	msgbox VermilionCity_House2_Text_Youngster, MSGBOX_NPC
	end

VermilionCity_House2_Text_PokefanF:
#if GERMAN
	.string "Kennst du den Magnetzug?\p"
	.string "Er fährt bis nach {COLOR RED}Dukatia City{COLOR DARK_GRAY}\n"
	.string "in Johto.$"
#else
	.string "Do you know about the MAGNET\n"
	.string "TRAIN?\p"
	.string "It's a railway that goes to\n"
	.string "GOLDENROD in JOHTO.$"
#endif

VermilionCity_House2_Text_Youngster:
#if GERMAN
	.string "{COLOR RED}Saffronia{COLOR DARK_GRAY}! {COLOR RED}Saffronia{COLOR DARK_GRAY}! {COLOR RED}Saffronia{COLOR DARK_GRAY}!\n"
	.string "Ich will nach {COLOR RED}Saffronia City{COLOR DARK_GRAY} fahren!\p"
	.string "Ich will nämlich den Magnetzug sehen!\n"
	.string "Den Magnetzug! Den Magnetzug!$"
#else
	.string "I want to go to SAFFRON to see\n"
	.string "the MAGNET TRAIN.$"
#endif
