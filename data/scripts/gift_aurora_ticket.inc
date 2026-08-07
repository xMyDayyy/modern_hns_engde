MysteryGiftScript_AuroraTicket::
	setvaddress MysteryGiftScript_AuroraTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_AURORA_TICKET, AuroraTicket_Obtained
	vgoto_if_set FLAG_BATTLED_DEOXYS, AuroraTicket_Obtained
	checkitem ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, TRUE, AuroraTicket_Obtained
	vmessage sText_AuroraTicketForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, AuroraTicket_NoBagSpace
	giveitem ITEM_AURORA_TICKET
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
	setflag FLAG_RECEIVED_AURORA_TICKET
	vmessage sText_AuroraTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_NoBagSpace:
	vmessage sText_AuroraTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_Obtained:
	vmessage sText_AuroraTicketThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_AuroraTicketForYou:
#if GERMAN
	.string "Danke, dass du das Geheim-\n"
	.string "geschehen benutzt hast.\p"
	.string "Du musst {PLAYER} sein.\n"
	.string "Hier ist ein Ticket für dich!$"
#else
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "You must be {PLAYER}.\n"
	.string "There is a ticket here for you.$"
#endif

sText_AuroraTicketUseAtPort:
#if GERMAN
	.string "Du kannst es am Hafen von\n"
	.string "Seegrasulb City einsetzen.\p"
	.string "Warum probierst du es nicht\n"
	.string "einfach aus?$"
#else
	.string "It appears to be for use at the\n"
	.string "LILYCOVE CITY port.\p"
	.string "Why not give it a try and see what\n"
	.string "it is about?$"
#endif

sText_AuroraTicketThankYou:
#if GERMAN
	.string "Danke, dass du das Geheim-\n"
	.string "geschehen benutzt hast!$"
#else
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.$"
#endif

sText_AuroraTicketBagFull:
#if GERMAN
	.string "Oh, es tut mir Leid, {PLAYER}! Die\n"
	.string "Basis-Item-Tasche in deinem\l"
	.string "Beutel ist voll.\l"
	.string "Lagere etwas auf deinem PC und\l"
	.string "komme anschließend zurück.$"
#else
	.string "Oh, I'm sorry, {PLAYER}.\n"
	.string "Your BAG's KEY ITEMS POCKET is full.\p"
	.string "Please store something on your PC,\n"
	.string "then come back for this.$"
#endif
