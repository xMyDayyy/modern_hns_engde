SSAnne_B1F_Room5_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room5_EventScript_Boy::
	msgbox SSAnne_B1F_Room5_Text_MachokeHasStrengthToMoveRocks, MSGBOX_NPC
	end

SSAnne_B1F_Room5_EventScript_Machoke::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
	msgbox SSAnne_B1F_Room5_Text_Machoke
	waitmoncry
	release
	end

SSAnne_B1F_Room5_Text_MachokeHasStrengthToMoveRocks::
#if GERMAN
	.string "Mein Pokémon, Maschock, ist\n"
	.string "superstark!!!\p"
	.string "Mit seiner Stärke kann es sogar\n"
	.string "Felsen bewegen!$"
#else
	.string "My buddy MACHOKE is super strong!\p"
	.string "He has enough STRENGTH to move\n"
	.string "big rocks!$"
#endif

SSAnne_B1F_Room5_Text_Machoke::
#if GERMAN
	.string "Maschock: Mascho! Maschock!$"
#else
	.string "MACHOKE: Gwoh! Goggoh!$"
#endif

