FuchsiaCity_House1_Frlg_MapScripts::
	.byte 0

FuchsiaCity_House1_EventScript_Woman::
	msgbox FuchsiaCity_House1_Text_WardenIsOldHasFalseTeeth, MSGBOX_NPC
	end

FuchsiaCity_House1_EventScript_OldMan::
	lock
	faceplayer
	famechecker FAMECHECKER_BILL, 2
	msgbox FuchsiaCity_House1_Text_BillIsMyGrandson
	release
	end

FuchsiaCity_House1_EventScript_LittleBoy::
	msgbox FuchsiaCity_House1_Text_BillFilesHisOwnMonData, MSGBOX_NPC
	end

FuchsiaCity_House1_Text_WardenIsOldHasFalseTeeth::
#if GERMAN
	.string "Der Wärter der Safari-Zone ist\n"
	.string "sehr alt! Aber er ist noch immer im\l"
	.string "Dienst!\p"
	.string "Allerdings trägt er ein Gebiss!$"
#else
	.string "The SAFARI ZONE's WARDEN is old, \n"
	.string "but he's still very much active.\p"
	.string "All his teeth are false, though.$"
#endif

FuchsiaCity_House1_Text_BillIsMyGrandson::
#if GERMAN
	.string "Hast du schon Bill getroffen?\p"
	.string "Er ist mein Enkel!\p"
	.string "Schon als kleines Kind hat er gerne\n"
	.string "alles Mögliche gesammelt!$"
#else
	.string "Hmm?\n"
	.string "You've met BILL?\p"
	.string "He's my grandson!\p"
	.string "He always liked collecting things,\n"
	.string "even as a child!$"
#endif

FuchsiaCity_House1_Text_BillFilesHisOwnMonData::
#if GERMAN
	.string "Bill sammelt auf seinem PC Daten\n"
	.string "über Pokémon!\p"
	.string "Hat er sie dir gezeigt?$"
#else
	.string "BILL files his own POKéMON data on\n"
	.string "his PC.\p"
	.string "Did he show you?$"
#endif

