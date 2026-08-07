PalletTown_RedsHouse_1F_hns_MapScripts::
	.byte 0

PalletTown_RedsHouse_1F_EventScript_Mom::
	lock
	faceplayer
	goto_if_ge VAR_TEMP_0, 1, PalletTown_RedsHouse_1F_EventScript_MomAfter
	msgbox RedsHouse_Text_Mom1, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 1
	release
	end

PalletTown_RedsHouse_1F_EventScript_MomAfter::
	msgbox RedsHouse_Text_Mom2, MSGBOX_DEFAULT
	closemessage
	release
	end

PalletTown_RedsHouse_1F_EventScript_TV::
	msgbox RedsHouse_Text_TV, MSGBOX_SIGN
	end

RedsHouse_Text_Mom1:
#if GERMAN
	.string "Hallo!\p"
	.string "Rot ist schon lange unterwegs.\p"
	.string "Er hat auch nicht angerufen,\n"
	.string "also weiß ich nicht, wo er ist\l"
	.string "oder was er gerade tut.\p"
	.string "Man sagt, keine Nachricht heißt,\n"
	.string "dass es ihm gut geht, aber ich\l"
	.string "mache mir trotzdem Sorgen.$"
#else
	.string "Hi!\p"
	.string "RED's been away for a long time.\p"
	.string "He hasn't called either, so I have\n"
	.string "no idea where he is or what he's\l"
	.string "been doing.\p"
	.string "They say that no word is proof that\n"
	.string "he's doing fine, but I do worry\l"
	.string "about him.$"
#endif

RedsHouse_Text_Mom2:
#if GERMAN
	.string "Ich habe immer Angst, dass er sich\n"
	.string "verletzt oder krank wird, aber\l"
	.string "Jungs müssen eben aktiv sein!$"
#else
	.string "I worry about RED getting hurt or\n"
	.string "sick, but he's a boy.\p"
	.string "I'm proud that he is doing what he\n"
	.string "wants to do.$"
#endif

RedsHouse_Text_TV:
#if GERMAN
	.string "Hier laufen Programme,\n"
	.string "die man in Johto nicht\l"
	.string "empfangen kann…$"
#else
	.string "They have programs that aren't\n"
	.string "shown in JOHTO…$"
#endif
