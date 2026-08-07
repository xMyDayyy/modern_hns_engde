Gate_Route29_Route46_hns_MapScripts::
	.byte 0

Gate_Route29_Route46_EventScript_Officer::
	lock
	faceplayer
	msgbox Gate_Route29_Route46_Text_Officer, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_Route29_Route46_EventScript_Youngster::
	lock
	faceplayer
	msgbox Gate_Route29_Route46_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_Route29_Route46_Text_Officer:
#if GERMAN
	.string "Hinaufklettern kannst du die\n"
	.string "Stufen leider nicht.\p"
	.string "Du kannst sie aber hinabspringen\n"
	.string "und als Abkürzung benutzen!$"
#else
	.string "You can't climb ledges.\p"
	.string "But you can jump down from\n"
	.string "them to take a shortcut.$"
#endif

Gate_Route29_Route46_Text_Youngster:
#if GERMAN
	.string "Von nun an wirst du noch einigen\n"
	.string "anderen Pokémon begegnen.\p"
	.string "Wenn du alle schnappen möchtest,\n"
	.string "musst du überall nach ihnen suchen!$"
#else
	.string "Different kinds of POKéMON\n"
	.string "appear past here.\p"
	.string "If you want to catch them all,\n"
	.string "you have to look everywhere.$"
#endif
