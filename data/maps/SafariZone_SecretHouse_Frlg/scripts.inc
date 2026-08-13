SafariZone_SecretHouse_Frlg_MapScripts::
	.byte 0

SafariZone_SecretHouse_EventScript_Attendant::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HM03, SafariZone_SecretHouse_EventScript_ExplainSurf
	msgbox SafariZone_SecretHouse_Text_CongratsYouveWon
	checkitemspace ITEM_HM03
	goto_if_eq VAR_RESULT, FALSE, SafariZone_SecretHouse_EventScript_NoRoomForHM03
	giveitem_msg SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant, ITEM_HM03
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
	setflag FLAG_GOT_HM03
	release
	end

SafariZone_SecretHouse_EventScript_NoRoomForHM03::
	msgbox SafariZone_SecretHouse_Text_DontHaveRoomForPrize
	release
	end

SafariZone_SecretHouse_EventScript_ExplainSurf::
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
	release
	end

SafariZone_SecretHouse_Text_CongratsYouveWon::
#if GERMAN
	.string "Ah! Endlich!\p"
	.string "Du bist der Erste, der das\n"
	.string "Geheime Haus gefunden hat!\p"
	.string "Ich dachte schon, niemand würde\n"
	.string "den großen Preis jemals gewinnen!\p"
	.string "Glückwunsch!\n"
	.string "Du hast gewonnen!$"
#else
	.string "Ah! Finally!\p"
	.string "You're the first person to reach\n"
	.string "the SECRET HOUSE!\p"
	.string "Although I made a campaign\n"
	.string "for our grand opening,\p"
	.string "I was getting worried that no one\n"
	.string "would win our campaign prize.\p"
	.string "Congratulations!\n"
	.string "You have won!$"
#endif

SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant::
#if GERMAN
	.string "{PLAYER} erhält\n"
	.string "VM03!$"
#else
	.string "{PLAYER} received HM03\n"
	.string "from the attendant!$"
#endif

SafariZone_SecretHouse_Text_ExplainSurf::
#if GERMAN
	.string "VM03 ist Surfer!\p"
	.string "Lernt ein Pokémon diese Technik, dann\n"
	.string "kann es dich über das Wasser\l"
	.string "transportieren!\p"
	.string "Das Beste ist aber, dass du diese VM\n"
	.string "benutzen kannst, so oft du möchtest!\p"
	.string "Ist das nicht irre?\n"
	.string "Du bist ein Glückspilz!$"
#else
	.string "HM03 is SURF.\p"
	.string "POKéMON will be able to ferry you\n"
	.string "across water using it.\p"
	.string "And, this HM isn't disposable, so\n"
	.string "you can use it over and over.\p"
	.string "You're super lucky for winning this\n"
	.string "fabulous prize!$"
#endif

SafariZone_SecretHouse_Text_DontHaveRoomForPrize::
#if GERMAN
	.string "Oh! Du kannst keine weiteren Items\n"
	.string "tragen!$"
#else
	.string "You don't have room for this\n"
	.string "fabulous prize!$"
#endif

