CianwoodHouse2_hns_MapScripts::
	.byte 0

CianwoodHouse2_EventScript_Teacher::
	lock
	faceplayer
	msgbox CianwoodCity_Text_LugiaHouseTeacher, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodHouse2_EventScript_Lass::
	lock
	faceplayer
	msgbox CianwoodCity_Text_LugiaHouseLass, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodHouse2_EventScript_Twin::
	lock
	faceplayer
	msgbox CianwoodCity_Text_LugiaHouseTwin, MSGBOX_DEFAULT
	closemessage
	release
	end

CianwoodCity_Text_LugiaHouseTeacher:
#if GERMAN
	.string "Bist du von Oliviana City hergekommen?\n"
	.string "Dann hast du bestimmt diese vier Inseln\l"
	.string "auf dem Weg gesehen, oder?\l"
	.string "Man erzählt sich, dass dort ein\l"
	.string "mythisches Wesen hausen soll!$"
#else
	.string "You came from OLIVINE?\p"
	.string "Do you remember the four islands\n"
	.string "along the way?\p"
	.string "I heard that a mythical sea crea-\n"
	.string "ture is hiding in them.$"
#endif

CianwoodCity_Text_LugiaHouseLass:
#if GERMAN
	.string "Ich habe gehört, dass man es nur sehen\n"
	.string "kann, wenn man einen Silberflügel hat.\p"
	.string "Er muss bestimmt denselben Geruch wie\n"
	.string "diese Kreatur ausströmen.$"
#else
	.string "I heard that you can only see it\n"
	.string "if you have a SILVER WING.\p"
	.string "It must have the same scent as\n"
	.string "the creature.$"
#endif

CianwoodCity_Text_LugiaHouseTwin:
#if GERMAN
	.string "Es heißt schon lange, dass diese\n"
	.string "mythische Kreatur auch die Strudel um\l"
	.string "die Inseln macht.\p"
	.string "Man braucht wahrscheinlich eine\n"
	.string "Spezialattacke, um an denen\l"
	.string "vorbeizukommen.$"
#else
	.string "I've heard that the whirlpools\n"
	.string "around the islands are caused by\l"
	.string "the sea creature.\p"
	.string "You might need a special move\n"
	.string "to get past them.$"
#endif
