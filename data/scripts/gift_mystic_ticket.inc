MysteryGiftScript_MysticTicket::
	setvaddress MysteryGiftScript_MysticTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_MYSTIC_TICKET, MysticTicket_Obtained
	vgoto_if_set FLAG_CAUGHT_LUGIA, MysticTicket_Obtained
	vgoto_if_set FLAG_CAUGHT_HO_OH, MysticTicket_Obtained
	checkitem ITEM_MYSTIC_TICKET
	vgoto_if_eq VAR_RESULT, TRUE, MysticTicket_Obtained
	vmessage sText_MysticTicketForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_MYSTIC_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, MysticTicket_NoBagSpace
	giveitem ITEM_MYSTIC_TICKET
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	setflag FLAG_RECEIVED_MYSTIC_TICKET
	vmessage sText_MysticTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_NoBagSpace:
	vmessage sText_MysticTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_Obtained:
	vmessage sText_MysticTicketThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_MysticTicketForYou:
#if GERMAN
	.string "Danke, dass du das Geheimgeschehen\n"
	.string "benutzt hast.\p"
	.string "Du musst {PLAYER} sein.\n"
	.string "Hier ist ein Ticket für dich!$"
#else
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "You must be {PLAYER}.\n"
	.string "There is a ticket here for you.$"
#endif

sText_MysticTicketUseAtPort:
#if GERMAN
	.string "Du kannst es am Hafen von Seegrasulb\n"
	.string "City einsetzen.\p"
	.string "Warum probierst du es nicht einfach\n"
	.string "aus?$"
#else
	.string "It appears to be for use at the\n"
	.string "LILYCOVE CITY port.\p"
	.string "Why not give it a try and see what\n"
	.string "it is about?$"
#endif

sText_MysticTicketThankYou:
#if GERMAN
	.string "Danke, dass du das Geheimgeschehen\n"
	.string "benutzt hast!$"
#else
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.$"
#endif

sText_MysticTicketBagFull:
#if GERMAN
	.string "Oh, es tut mir Leid, {PLAYER}! Die\n"
	.string "Basis-Item-Tasche in deinem Beutel ist\l"
	.string "voll.\l"
	.string "Lagere etwas auf deinem PC und komme\l"
	.string "anschließend zurück.$"
#else
	.string "Oh, I'm sorry, {PLAYER}.\n"
	.string "Your BAG's KEY ITEMS POCKET is full.\p"
	.string "Please store something on your PC,\n"
	.string "then come back for this.$"
#endif
