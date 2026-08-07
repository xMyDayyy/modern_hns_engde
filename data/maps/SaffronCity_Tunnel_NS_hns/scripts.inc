SaffronCity_Tunnel_NS_hns_MapScripts::
	.byte 0

SaffronCity_Tunnel_NS_EventScript_BaldingMan::
	lock
	faceplayer
	goto_if_set FLAG_ITEM_UNDERGROUND_PATH_TM_EXPLOSION, SaffronCity_Tunnel_NS_EventScript_BaldingManAfter
	msgbox SaffronCity_Tunnel_NS_Text_BaldingManIntro, MSGBOX_DEFAULT
	checkitem ITEM_RAGE_CANDY_BAR
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_Tunnel_NS_EventScript_BaldingManDetected
	closemessage
	release
	end

SaffronCity_Tunnel_NS_EventScript_BaldingManDetected::
	playse SE_PIN
	applymovement LOCALID_SAFFRONTUNNEL_UNCLE_RAGE, Common_Movement_ExclamationMark
	delay 60
	msgbox SaffronCity_Tunnel_NS_Text_BaldingManCandybarDetected, MSGBOX_DEFAULT
	removeitem ITEM_RAGE_CANDY_BAR
	msgbox SaffronCity_Tunnel_NS_Text_BaldingManGaveCandybar, MSGBOX_DEFAULT
	giveitem ITEM_TM_EXPLOSION
	setflag FLAG_ITEM_UNDERGROUND_PATH_TM_EXPLOSION
SaffronCity_Tunnel_NS_EventScript_BaldingManAfter::
	msgbox SaffronCity_Tunnel_NS_Text_BaldingManGaveTm, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_Tunnel_NS_Text_BaldingManIntro:
#if GERMAN
	.string "Ich…\p"
	.string "Nein, ich will dir-ir-ir…\p"
	.string "Ich will dir nichts Böse-öses-öses…\p"
	.string "Dieser verlassene Ort ist wie \n"
	.string "ein Auffangbecken für böse Jungs-ungs,\l"
	.string "die hier ihr Unwesen…\p"
	.string "Die hier ihr Unwesen treiben-eiben!\p"
	.string "Mann, das macht mich so wüten-ütend…$"
#else
	.string "Don't be afraid, I'm not a bad\n"
	.string "person.\p"
	.string "A place like this...\n"
	.string "attracts mean people.\p"
	.string "They would eventually cause\n"
	.string "trouble...\p"
	.string "It makes me mad just thinking about\n"
	.string "it.$"
#endif

SaffronCity_Tunnel_NS_Text_BaldingManCandybarDetected:
#if GERMAN
	.string "Aha!\n"
	.string "Das ist ein Wutriegel!\p"
	.string "Kann ich den haben?\n"
	.string "Bitte!$"
#else
	.string "Aha!\n"
	.string "That's a RAGE CANDYBAR!\p"
	.string "Can I have it?\n"
	.string "Please!$"
#endif

SaffronCity_Tunnel_NS_Text_BaldingManGaveCandybar:
#if GERMAN
	.string "Hamm!\p"
	.string "Knusper, knusper, knusper!\p"
	.string "Der ist aber lecker!\p"
	.string "Mampf, mampf, mampf!\p"
	.string "Knusper, knusper, knusper!\p"
	.string "Mampf, mampf, mampf!\p"
	.string "Knusper, knusper, knusper!\p"
	.string "…Puh.\p"
	.string "Jetzt bin ich irgendwie entspannt.\n"
	.string "Danke für den Snack!\l"
	.string "Hier, nimm das als Dankeschön!$"
#else
	.string "{PLAYER} Gave the RageCandyBar to the\n"
	.string "guy at the underground path.\p"
	.string "Munch!\p"
	.string "How upsetting!\p"
	.string "But this is so good!\p"
	.string "Munch munch!\p"
	.string "Aargh! It makes me mad!\p"
	.string "Munch munch!\p"
	.string "Aargh...\p"
	.string "...................Phew!\p"
	.string "I am feeling much better!\n"
	.string "Thank you for your candy!\l"
	.string "I want you to have this!$"
#endif

SaffronCity_Tunnel_NS_Text_BaldingManGaveTm:
#if GERMAN
	.string "Die TM64 enthält…\p"
	.string "Tick,\n"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "… … …\l"
	.string "… … …$"
#else
	.string "TM 64 contains........\p"
	.string "tick-\n"
	.string "            tock\l"
	.string "tick-\l"
	.string "            tock\l"
	.string "tick-\l"
	.string "            tock\l"
	.string "tick-\l"
	.string "            tock\l"
	.string "tick.....\l"
	.string "......................\l"
	.string "......................\l"
#endif

