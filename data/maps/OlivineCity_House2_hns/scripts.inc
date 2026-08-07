OlivineCity_House2_hns_MapScripts::
	.byte 0

OlivineCity_EventScript_Punisher::
	lock
	faceplayer
	msgbox OlivineCity_Text_PunishmentBro, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_PunisherBoy::
	lock
	faceplayer
	msgbox OlivineCity_Text_PunishmentBoy, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_PunishmentBro:
#if GERMAN
	.string "Auf dem Weg nach {COLOR RED}Anemonia City{COLOR DARK_GRAY}\n"
	.string "gibt es vier unbewohnte Inseln.\p"
	.string "Ungezogene Kinder werden zur\n"
	.string "Bestrafung dorthin geschickt!$"
#else
	.string "Along the way to CIANWOOD,\n"
	.string "there are four deserted islands.\p"
	.string "Bad kids are taken to those\n"
	.string "islands as punishment!$"
#endif

OlivineCity_Text_PunishmentBoy:
#if GERMAN
	.string "Wenn ich ungezogen bin, macht\n"
	.string "mir mein Papa immer sofort mit\l"
	.string "gruseligen Geschichten Angst…$"
#else
	.string "Whenever I get in trouble,\n"
	.string "big bro always scares me.$"
#endif
