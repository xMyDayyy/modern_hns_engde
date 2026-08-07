Route28_House_hns_MapScripts::
	.byte 0

Route28House_EventScript_Celebrity::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM_STEEL_WING, Route28House_EventScript_CelebrityAfter
	msgbox Route28House_Text_Celebrity1, MSGBOX_NPC
	giveitem ITEM_TM_STEEL_WING
	setflag FLAG_GOT_TM_STEEL_WING
Route28House_EventScript_CelebrityAfter::
	msgbox Route28House_Text_Celebrity2, MSGBOX_NPC
	release
	end

Route28House_Text_Celebrity1:
#if GERMAN
	.string "Oh je… Du hast mich gefunden.\p"
	.string "Bitte erzähl niemandem von mir.\p"
	.string "Ich gebe dir was, wenn du mein\n"
	.string "Geheimnis bewahrst. Ok?$"
#else
	.string "Oh, dear. You've found me.\p"
	.string "Please don't tell anyone about me.\p"
	.string "I'll give you this for keeping my\n"
	.string "secret. Please?$"
#endif

Route28House_Text_Celebrity2:
#if GERMAN
	.string "Es ist hart, ein Star zu sein.\p"
	.string "Überall jagen mir die Leute nach.\p"
	.string "Ich möchte einfach nur meine\n"
	.string "Ruhe haben…$"
#else
	.string "It's tough being a top celebrity.\p"
	.string "Everywhere I go, people chase me.\p"
	.string "I just want to be left alone…$"
#endif

Route28House_Text_Fearow:
#if GERMAN
	.string "Ibitak: Ibitak tak!$"
#else
	.string "FEAROW: Feero!$"
#endif

