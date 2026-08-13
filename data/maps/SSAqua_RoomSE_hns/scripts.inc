SSAqua_RoomSE_hns_MapScripts::
	.byte 0

SSAqua_RoomSE_EventScript_Colin::
	trainerbattle_single TRAINER_COLIN_HNS, SSAqua_RoomSE_Text_PokefanmColinSeen, SSAqua_RoomSE_Text_PokefanmColinBeaten
	msgbox SSAqua_RoomSE_Text_PokefanmColinAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSE_EventScript_Meg::
	trainerbattle_double TRAINER_MEG_AND_PEG_HNS, SSAqua_RoomSE_Text_TwinsMegandpeg1Seen, SSAqua_RoomSE_Text_TwinsMegandpeg1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox SSAqua_RoomSE_Text_TwinsMegandpeg1After, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSE_EventScript_Peg::
	trainerbattle_double TRAINER_MEG_AND_PEG_HNS, SSAqua_RoomSE_Text_TwinsMegandpeg2Seen, SSAqua_RoomSE_Text_TwinsMegandpeg2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox SSAqua_RoomSE_Text_TwinsMegandpeg2After, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSE_Text_PokefanmColinSeen:
#if GERMAN
	.string "Obacht, hier komme ich!$"
#else
    .string "Hey, kid! Want to battle\n"
    .string "with me?$"
#endif

SSAqua_RoomSE_Text_PokefanmColinBeaten:
#if GERMAN
	.string "Du bist aber stark!$"
#else
    .string "You're strong!$"
#endif

SSAqua_RoomSE_Text_PokefanmColinAfter:
#if GERMAN
	.string "Du reist ganz alleine? Ist deine Mutter\n"
	.string "nicht besorgt?$"
#else
    .string "You're traveling all alone?\n"
    .string "Isn't your mom worried?$"
#endif

SSAqua_RoomSE_Text_TwinsMegandpeg1Seen:
#if GERMAN
	.string "Du denkst, ich bin noch ein Baby? Das\n"
	.string "ist gemein!$"
#else
    .string "You think I'm a baby?\n"
    .string "That's not fair!$"
#endif

SSAqua_RoomSE_Text_TwinsMegandpeg1Beaten:
#if GERMAN
	.string "Oh! Wir haben verloren!$"
#else
    .string "Oh! We lost!$"
#endif

SSAqua_RoomSE_Text_TwinsMegandpeg1After:
#if GERMAN
	.string "Baby ist ein unhöflicher Name\n"
	.string "für uns Mädels!$"
#else
    .string "Baby is a rude name to call\n"
    .string "us girls!$"
#endif

SSAqua_RoomSE_Text_TwinsMegandpeg2Seen:
#if GERMAN
	.string "Ich bin kein Baby!\n"
	.string "So was sagt man nicht zu einer Dame!$"
#else
    .string "I'm not a baby!\n"
    .string "That's not nice to say to a lady!$"
#endif

SSAqua_RoomSE_Text_TwinsMegandpeg2Beaten:
#if GERMAN
	.string "Oh! Wir haben verloren!$"
#else
    .string "Oh! We lost!$"
#endif

SSAqua_RoomSE_Text_TwinsMegandpeg2After:
#if GERMAN
	.string "Manchmal sind Kinder schlauer als\n"
	.string "Erwachsene!$"
#else
    .string "Sometimes, kids are smarter\n"
    .string "than grown-ups!$"
#endif
