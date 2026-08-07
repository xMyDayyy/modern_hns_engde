PalletTown_RedsHouse_2F_hns_MapScripts::
	.byte 0

PalletTown_RedsHouse_2F_EventScript_NES::
	msgbox RedsHouse_Text_NES, MSGBOX_SIGN
	end

PalletTown_RedsHouse_2F_EventScript_PC::
	msgbox RedsHouse_Text_PC, MSGBOX_SIGN
	end

RedsHouse_Text_NES:
#if GERMAN
	.string "{PLAYER} spielt NES.\p"
	.string "Ich sollte aufhören, keine Zeit!$"
#else
	.string "{PLAYER} played the NES.\p"
	.string "Better get going--no time to lose!$"
#endif

RedsHouse_Text_PC:
#if GERMAN
	.string "…Es sieht so aus, als wäre er schon\n"
	.string "lange nicht mehr benutzt worden.$"
#else
	.string "It looks like it hasn't been used\n"
	.string "in a long time…$"
#endif
