AzaleaTown_Mart_hns_MapScripts::
	.byte 0

AzaleaTown_Mart_EventScriptCooltrainerM::
	lock
	faceplayer
	msgbox AzaleaMart_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_Mart_EventScriptBugCatcher::
	lock
	faceplayer
	msgbox AzaleaMart_Text_BugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaMart_Text_CooltrainerM:
#if GERMAN
	.string "Kannst du Superbälle kaufen?\n"
	.string "Ich kann nur Pokébälle bekommen.\p"
	.string "Ich habe gehört, mehr werden verfügbar,\n"
	.string "wenn man sich weitere Arena-Orden\l"
	.string "verdient!\p"
	.string "Ich wünschte, Kurt würde mir ein\n"
	.string "paar seiner Bälle anfertigen.$"
#else
	.string "Are you able to buy a GREAT BALL?\n"
	.string "All I can buy are POKé BALLS.\p"
	.string "I heard that more items become\n"
	.string "available to buy when you earn\l"
	.string "GYM BADGES!\p"
	.string "I wish KURT would make me some\n"
	.string "of his custom BALLS.$"
#endif

AzaleaMart_Text_BugCatcher:
#if GERMAN
	.string "Mit einem Superball lassen sich Pokémon\n"
	.string "sehr viel leichter fangen als mit einem\l"
	.string "regulären Pokéball.\p"
	.string "Aber manchmal geht einfach nichts über\n"
	.string "einen von Kurts Bällen!$"
#else
	.string "A GREAT BALL is better for catch-\n"
	.string "ing POKéMON than a POKé BALL.\p"
	.string "But KURT's might be better some-\n"
	.string "times.$"
#endif

