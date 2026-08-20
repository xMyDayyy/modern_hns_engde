@ Kanto-Merge (test/kanto-start):
@ Diese Symbole waren in HnS-Kanto-Maps definiert, werden aber von aktiven
@ Johto-Maps referenziert. Sie leben hier weiter, damit die HnS-Kanto-Maps
@ stillgelegt werden koennen.

Route7_EventScript_Door::
	msgbox Route7_Text_LockedDoor, MSGBOX_SIGN
	end

Route7_Text_LockedDoor:
#if GERMAN
	.string "Abgeschlossen…$"
#else
	.string "It's locked…$"
#endif

SeafoamIslands_B1F_Text_ArticunoBattle::
	.string "Gyaoo!$"
