SSAqua_RoomNNE_hns_MapScripts::
	.byte 0

SSAqua_RoomNNE_EventScript_Sean::
	trainerbattle_single TRAINER_SEAN_HNS, SSAqua_RoomNNE_Text_CooltrainermSeanSeen, SSAqua_RoomNNE_Text_CooltrainermSeanBeaten
	msgbox SSAqua_RoomNNE_Text_CooltrainermSeanAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNNE_EventScript_Carol::
	trainerbattle_single TRAINER_CAROL_HNS, SSAqua_RoomNNE_Text_CooltrainerfCarolSeen, SSAqua_RoomNNE_Text_CooltrainerfCarolBeaten
	msgbox SSAqua_RoomNNE_Text_CooltrainerfCarolAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNNE_Text_CooltrainermSeanSeen:
#if GERMAN
	.string "Ich gehe nach Kanto, um dort mein\n"
	.string "Können zu testen!$"
#else
    .string "I'm going to KANTO\n"
    .string "to test my skills.$"
#endif

SSAqua_RoomNNE_Text_CooltrainermSeanBeaten:
#if GERMAN
	.string "Ich wollte so gerne gewinnen!$"
#else
    .string "I wanted to win!$"
#endif

SSAqua_RoomNNE_Text_CooltrainermSeanAfterBattle:
#if GERMAN
	.string "Auch Trainer aus Johto können gegen\n"
	.string "die Arenaleiter aus Kanto antreten!$"
#else
    .string "Trainers from JOHTO\n"
    .string "can battle with KANTO\l"
    .string "GYM LEADERS.$"
#endif

SSAqua_RoomNNE_Text_CooltrainerfCarolSeen:
#if GERMAN
	.string "Ich trainiere, um Champ zu werden!$"
#else
    .string "I'm training to\n"
    .string "become the CHAMP!$"
#endif

SSAqua_RoomNNE_Text_CooltrainerfCarolBeaten:
#if GERMAN
	.string "Was machst du bloß anders als ich?$"
#else
    .string "What's so different\n"
    .string "between us?$"
#endif

SSAqua_RoomNNE_Text_CooltrainerfCarolAfterBattle:
#if GERMAN
	.string "Eines Tages werde ich dich besiegen!$"
#else
    .string "I'm going to beat\n"
    .string "you someday!$"
#endif
