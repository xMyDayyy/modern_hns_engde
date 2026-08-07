SSAqua_RoomNE_hns_MapScripts::
	.byte 0

SSAqua_RoomNE_EventScript_Noland::
	trainerbattle_single TRAINER_NOLAND_HNS, SSAqua_RoomNE_Text_HikerNolandSeen, SSAqua_RoomNE_Text_HikerNolandBeaten
	msgbox SSAqua_RoomNE_Text_HikerNolandAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNE_EventScript_Ethan::
	trainerbattle_single TRAINER_ETHAN_HNS, SSAqua_RoomNE_Text_PokemaniacEthanSeen, SSAqua_RoomNE_Text_PokemaniacEthanBeaten
	msgbox SSAqua_RoomNE_Text_PokemaniacEthanAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNE_Text_HikerNolandSeen:
#if GERMAN
	.string "Bist du allein? Lass uns kämpfen!$"
#else
    .string "Are you alone?\n"
    .string "Then let's battle!$"
#endif

SSAqua_RoomNE_Text_HikerNolandBeaten:
#if GERMAN
	.string "Das ist zu viel für mich!$"
#else
    .string "That's too much to handle!$"
#endif

SSAqua_RoomNE_Text_HikerNolandAfterBattle:
#if GERMAN
	.string "Ich frage mich, ob es in Kanto Berge\n"
	.string "gibt, die steil und anspruchsvoll genug\l"
	.string "sind, um einer Besteigung wert zu sein?$"
#else
    .string "I wonder if there are any\n"
    .string "mountains worth climbing in KANTO?$"
#endif

SSAqua_RoomNE_Text_PokemaniacEthanSeen:
#if GERMAN
	.string "Kennst du Lilly?\n"
	.string "Sie ist eine coole DJ in Kanto.$"
#else
    .string "Do you know LILY?\n"
    .string "She's a hot DJ in KANTO.$"
#endif

SSAqua_RoomNE_Text_PokemaniacEthanBeaten:
#if GERMAN
	.string "Uargh!$"
#else
    .string "Gyaaaah!$"
#endif

SSAqua_RoomNE_Text_PokemaniacEthanAfterBattle:
#if GERMAN
	.string "Lilly ist gut,\n"
	.string "aber Margit ist die Beste!\p"
	.string "Ich möchte gerne\n"
	.string "alle Radiosender von Johto anhören!$"
#else
    .string "LILY's nice, but\n"
    .string "MARY's the best!\n"
    .string "I want to check\n"
    .string "out JOHTO's radio\n"
    .string "programs!$"
#endif
