AbandonedShip_CaptainsOffice_MapScripts::
	.byte 0

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
	lock
	faceplayer
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	checkitem ITEM_SCANNER
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner:
#if GERMAN
	.string "Ich untersuche das Schiff im Auftrag\n"
	.string "von Kapt. Brigg.\p"
	.string "Er hat mich auch beauftragt, einen\n"
	.string "Scanner zu finden, aber ich habe \l"
	.string "ihn noch nicht gefunden.$"
#else
	.string "I'm investigating this ship on behalf\n"
	.string "of CAPT. STERN.\p"
	.string "He also asked me to find a SCANNER,\n"
	.string "but I haven't had any success…$"
#endif

AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner:
#if GERMAN
	.string "Oh! Das ist der Scanner!\p"
	.string "Würdest du den bitte für mich zu\n"
	.string "Kapt. Brigg bringen? Das wäre nett.\p"
	.string "Ich möchte das Schiff noch weiter\n"
	.string "untersuchen.$"
#else
	.string "Oh! That's a SCANNER!\p"
	.string "Listen, can I get you to deliver that\n"
	.string "to CAPT. STERN?\p"
	.string "I want to investigate this ship a\n"
	.string "little more.$"
#endif

AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus:
#if GERMAN
	.string "Dieses Schiff heißt MS Cactus. Es\n"
	.string "scheint aus einer früheren Epoche zu\l"
	.string "stammen.$"
#else
	.string "This ship is called S.S. CACTUS.\n"
	.string "It seems to be from an earlier era.$"
#endif

