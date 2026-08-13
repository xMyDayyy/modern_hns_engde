Melemele_PlayerHouse_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Melemele_PlayerHouse_hns_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Melemele_PlayerHouse_hns_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ALOLA_STATE, 1, Alola_Melemele_SamsonOakVillaIntro_Trigger
	.2byte 0


Alola_Melemele_SamsonOakVillaIntro_Trigger::
	lock
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVillaIntro_Trigger_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVillaIntro_Trigger_Text_0
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVillaIntro_Trigger_Movement_1
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVillaIntro_Trigger_Text_1, MSGBOX_AUTOCLOSE
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVillaIntro_Trigger_Movement_2
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVillaIntro_Trigger_Text_2, MSGBOX_AUTOCLOSE
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVillaIntro_Trigger_Movement_3
	waitmovement 0
	setvar VAR_ALOLA_STATE, 2
	release
	end


Alola_Melemele_SamsonOakVilla_Dialogue::
	lock
	faceplayer
	goto_if_set FLAG_BATTLED_TAPU_KOKO, Alola_Melemele_SamsonOakVilla_Dialogue_4
Alola_Melemele_SamsonOakVilla_Dialogue_2:
	goto_if_set FLAG_CAUGHT_ALL_AKALA, Alola_Melemele_SamsonOakVilla_Dialogue_16
Alola_Melemele_SamsonOakVilla_Dialogue_14:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_10
	dynmultichoice 20, 4, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Alola_Melemele_SamsonOakVilla_Dialogue_Text_11, Alola_Melemele_SamsonOakVilla_Dialogue_Text_12, Alola_Melemele_SamsonOakVilla_Dialogue_Text_13, Alola_Melemele_SamsonOakVilla_Dialogue_Text_14, Alola_Melemele_SamsonOakVilla_Dialogue_Text_15
	compare VAR_RESULT, 0
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_31
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_32
	compare VAR_RESULT, 2
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_33
	compare VAR_RESULT, 3
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_34
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_34, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_1:
	compare VAR_ALOLA_STATE, 3
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_10
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_2, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_3:
	goto_if_set FLAG_BATTLED_TAPU_BULU, Alola_Melemele_SamsonOakVilla_Dialogue_7
	goto Alola_Melemele_SamsonOakVilla_Dialogue_2

Alola_Melemele_SamsonOakVilla_Dialogue_4:
	goto_if_set FLAG_BATTLED_TAPU_LELE, Alola_Melemele_SamsonOakVilla_Dialogue_3
	goto Alola_Melemele_SamsonOakVilla_Dialogue_2

Alola_Melemele_SamsonOakVilla_Dialogue_7:
	goto_if_set FLAG_BATTLED_TAPU_FINI, Alola_Melemele_SamsonOakVilla_Dialogue_1
	goto Alola_Melemele_SamsonOakVilla_Dialogue_2

Alola_Melemele_SamsonOakVilla_Dialogue_10:
	msgbox Alola_Melemele_SamsonOakVillaIntro_Trigger_Text_0, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_0, MSGBOX_AUTOCLOSE
	giveitem ITEM_BEAST_BALL
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_1, MSGBOX_AUTOCLOSE
	setvar VAR_ALOLA_STATE, 4
	clearflag FLAG_HIDE_PHANT_OUTSIDE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_13:
	goto_if_set FLAG_DEFEATED_MELEMELE_TOTEM, Alola_Melemele_SamsonOakVilla_Dialogue_25
Alola_Melemele_SamsonOakVilla_Dialogue_23:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_9, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_15:
	goto_if_set FLAG_CAUGHT_ALL_PONI, Alola_Melemele_SamsonOakVilla_Dialogue_19
	goto Alola_Melemele_SamsonOakVilla_Dialogue_14

Alola_Melemele_SamsonOakVilla_Dialogue_16:
	goto_if_set FLAG_CAUGHT_ALL_ULAULA, Alola_Melemele_SamsonOakVilla_Dialogue_15
	goto Alola_Melemele_SamsonOakVilla_Dialogue_14

Alola_Melemele_SamsonOakVilla_Dialogue_19:
	goto_if_set FLAG_CAUGHT_ALL_MELEMELE, Alola_Melemele_SamsonOakVilla_Dialogue_13
	goto Alola_Melemele_SamsonOakVilla_Dialogue_14

Alola_Melemele_SamsonOakVilla_Dialogue_22:
	goto_if_set FLAG_DEFEATED_SAMSON_OAK, Alola_Melemele_SamsonOakVilla_Dialogue_40
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_55
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_8, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_24:
	goto_if_set FLAG_DEFEATED_ULAULA_TOTEM, Alola_Melemele_SamsonOakVilla_Dialogue_28
	goto Alola_Melemele_SamsonOakVilla_Dialogue_23

Alola_Melemele_SamsonOakVilla_Dialogue_25:
	goto_if_set FLAG_DEFEATED_AKALA_TOTEM, Alola_Melemele_SamsonOakVilla_Dialogue_24
	goto Alola_Melemele_SamsonOakVilla_Dialogue_23

Alola_Melemele_SamsonOakVilla_Dialogue_28:
	goto_if_set FLAG_DEFEATED_PONI_TOTEM, Alola_Melemele_SamsonOakVilla_Dialogue_22
	goto Alola_Melemele_SamsonOakVilla_Dialogue_23

Alola_Melemele_SamsonOakVilla_Dialogue_31:
	getcaughtmon SPECIES_MEOWTH
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_44
Alola_Melemele_SamsonOakVilla_Dialogue_43:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_23, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_32:
	getcaughtmon SPECIES_MAROWAK
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_47
Alola_Melemele_SamsonOakVilla_Dialogue_46:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_27, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_33:
	getcaughtmon SPECIES_VULPIX
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_50
Alola_Melemele_SamsonOakVilla_Dialogue_49:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_30, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_34:
	getcaughtmon SPECIES_RAICHU
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_53
Alola_Melemele_SamsonOakVilla_Dialogue_52:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_33, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_40:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_2, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_44:
	getcaughtmon SPECIES_PERSIAN
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_58
	goto Alola_Melemele_SamsonOakVilla_Dialogue_43

Alola_Melemele_SamsonOakVilla_Dialogue_47:
	getcaughtmon SPECIES_DIGLETT
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_60
	goto Alola_Melemele_SamsonOakVilla_Dialogue_46

Alola_Melemele_SamsonOakVilla_Dialogue_50:
	getcaughtmon SPECIES_NINETALES
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_62
	goto Alola_Melemele_SamsonOakVilla_Dialogue_49

Alola_Melemele_SamsonOakVilla_Dialogue_53:
	getcaughtmon SPECIES_GEODUDE
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_64
	goto Alola_Melemele_SamsonOakVilla_Dialogue_52

Alola_Melemele_SamsonOakVilla_Dialogue_55:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_4
	trainerbattle_no_intro TRAINER_SAMSON_OAK_HNS, Alola_Melemele_SamsonOakVilla_Dialogue_Text_5
	special GivePartyMonMarineRibbon
	special HealPlayerParty
	setflag FLAG_DEFEATED_SAMSON_OAK
	setflag FLAG_FLYOVER_TAPU_KOKO
	setflag FLAG_FLYOVER_TAPU_LELE
	setflag FLAG_FLYOVER_TAPU_BULU
	setflag FLAG_FLYOVER_TAPU_FINI
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_6, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_7, MSGBOX_AUTOCLOSE
	setvar VAR_ALOLA_STATE, 3
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_58:
	getcaughtmon SPECIES_RATTATA
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_66
	goto Alola_Melemele_SamsonOakVilla_Dialogue_43

Alola_Melemele_SamsonOakVilla_Dialogue_60:
	getcaughtmon SPECIES_DUGTRIO
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_68
	goto Alola_Melemele_SamsonOakVilla_Dialogue_46

Alola_Melemele_SamsonOakVilla_Dialogue_62:
	getcaughtmon SPECIES_SANDSHREW
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_70
	goto Alola_Melemele_SamsonOakVilla_Dialogue_49

Alola_Melemele_SamsonOakVilla_Dialogue_64:
	getcaughtmon SPECIES_GRAVELER
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_72
	goto Alola_Melemele_SamsonOakVilla_Dialogue_52

Alola_Melemele_SamsonOakVilla_Dialogue_66:
	getcaughtmon SPECIES_RATICATE
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_74
	goto Alola_Melemele_SamsonOakVilla_Dialogue_43

Alola_Melemele_SamsonOakVilla_Dialogue_68:
	goto_if_unset FLAG_CAUGHT_ALL_AKALA, Alola_Melemele_SamsonOakVilla_Dialogue_76
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_26, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_70:
	getcaughtmon SPECIES_SANDSLASH
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_79
	goto Alola_Melemele_SamsonOakVilla_Dialogue_49

Alola_Melemele_SamsonOakVilla_Dialogue_72:
	getcaughtmon SPECIES_GOLEM
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_81
	goto Alola_Melemele_SamsonOakVilla_Dialogue_52

Alola_Melemele_SamsonOakVilla_Dialogue_74:
	goto_if_unset FLAG_CAUGHT_ALL_MELEMELE, Alola_Melemele_SamsonOakVilla_Dialogue_83
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_22, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_76:
	goto_if_set FLAG_CAUGHT_ALL_MELEMELE, Alola_Melemele_SamsonOakVilla_Dialogue_86
	goto_if_set FLAG_CAUGHT_ALL_ULAULA, Alola_Melemele_SamsonOakVilla_Dialogue_86
	goto_if_set FLAG_CAUGHT_ALL_PONI, Alola_Melemele_SamsonOakVilla_Dialogue_86
	setflag FLAG_CAUGHT_ALL_AKALA
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_16, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_17
	playfanfare MUS_HG_OBTAIN_EGG
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_24
	waitfanfare
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_21
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_79:
	getcaughtmon SPECIES_GRIMER
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_93
	goto Alola_Melemele_SamsonOakVilla_Dialogue_49

Alola_Melemele_SamsonOakVilla_Dialogue_81:
	getcaughtmon SPECIES_EXEGGUTOR
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_95
	goto Alola_Melemele_SamsonOakVilla_Dialogue_52

Alola_Melemele_SamsonOakVilla_Dialogue_83:
	goto_if_set FLAG_CAUGHT_ALL_AKALA, Alola_Melemele_SamsonOakVilla_Dialogue_97
	goto_if_set FLAG_CAUGHT_ALL_ULAULA, Alola_Melemele_SamsonOakVilla_Dialogue_97
	goto_if_set FLAG_CAUGHT_ALL_PONI, Alola_Melemele_SamsonOakVilla_Dialogue_97
	setflag FLAG_CAUGHT_ALL_MELEMELE
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_16, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_17
	playfanfare MUS_HG_OBTAIN_EGG
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_18
	waitfanfare
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_21, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_86:
	setflag FLAG_CAUGHT_ALL_AKALA
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_16, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_17
	playfanfare MUS_HG_OBTAIN_EGG
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_24
	waitfanfare
	goto_if_set FLAG_CAUGHT_ALL_AKALA, Alola_Melemele_SamsonOakVilla_Dialogue_107
Alola_Melemele_SamsonOakVilla_Dialogue_105:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_21
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_93:
	getcaughtmon SPECIES_MUK
	compare VAR_RESULT, 1
	goto_if_eq Alola_Melemele_SamsonOakVilla_Dialogue_113
	goto Alola_Melemele_SamsonOakVilla_Dialogue_49

Alola_Melemele_SamsonOakVilla_Dialogue_95:
	goto_if_unset FLAG_CAUGHT_ALL_PONI, Alola_Melemele_SamsonOakVilla_Dialogue_115
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_32, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_97:
	setflag FLAG_CAUGHT_ALL_MELEMELE
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_16, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_17
	playfanfare MUS_HG_OBTAIN_EGG
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_18
	waitfanfare
	goto_if_set FLAG_CAUGHT_ALL_AKALA, Alola_Melemele_SamsonOakVilla_Dialogue_121
Alola_Melemele_SamsonOakVilla_Dialogue_119:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_21, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_104:
	playfanfare MUS_HG_BUG_CONTEST_1ST_PLACE
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_19, MSGBOX_AUTOCLOSE
	waitfanfare
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_25
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_106:
	goto_if_set FLAG_CAUGHT_ALL_PONI, Alola_Melemele_SamsonOakVilla_Dialogue_110
	goto Alola_Melemele_SamsonOakVilla_Dialogue_105

Alola_Melemele_SamsonOakVilla_Dialogue_107:
	goto_if_set FLAG_CAUGHT_ALL_ULAULA, Alola_Melemele_SamsonOakVilla_Dialogue_106
	goto Alola_Melemele_SamsonOakVilla_Dialogue_105

Alola_Melemele_SamsonOakVilla_Dialogue_110:
	goto_if_set FLAG_CAUGHT_ALL_MELEMELE, Alola_Melemele_SamsonOakVilla_Dialogue_104
	goto Alola_Melemele_SamsonOakVilla_Dialogue_105

Alola_Melemele_SamsonOakVilla_Dialogue_113:
	goto_if_unset FLAG_CAUGHT_ALL_ULAULA, Alola_Melemele_SamsonOakVilla_Dialogue_127
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_29, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_115:
	goto_if_set FLAG_CAUGHT_ALL_MELEMELE, Alola_Melemele_SamsonOakVilla_Dialogue_130
	goto_if_set FLAG_CAUGHT_ALL_AKALA, Alola_Melemele_SamsonOakVilla_Dialogue_130
	goto_if_set FLAG_CAUGHT_ALL_ULAULA, Alola_Melemele_SamsonOakVilla_Dialogue_130
	setflag FLAG_CAUGHT_ALL_PONI
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_16, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_17
	playfanfare MUS_HG_OBTAIN_EGG
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_31
	waitfanfare
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_21, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_118:
	playfanfare MUS_HG_BUG_CONTEST_1ST_PLACE
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_19, MSGBOX_AUTOCLOSE
	waitfanfare
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_20, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_120:
	goto_if_set FLAG_CAUGHT_ALL_PONI, Alola_Melemele_SamsonOakVilla_Dialogue_124
	goto Alola_Melemele_SamsonOakVilla_Dialogue_119

Alola_Melemele_SamsonOakVilla_Dialogue_121:
	goto_if_set FLAG_CAUGHT_ALL_ULAULA, Alola_Melemele_SamsonOakVilla_Dialogue_120
	goto Alola_Melemele_SamsonOakVilla_Dialogue_119

Alola_Melemele_SamsonOakVilla_Dialogue_124:
	goto_if_set FLAG_CAUGHT_ALL_MELEMELE, Alola_Melemele_SamsonOakVilla_Dialogue_118
	goto Alola_Melemele_SamsonOakVilla_Dialogue_119

Alola_Melemele_SamsonOakVilla_Dialogue_127:
	goto_if_set FLAG_CAUGHT_ALL_MELEMELE, Alola_Melemele_SamsonOakVilla_Dialogue_137
	goto_if_set FLAG_CAUGHT_ALL_AKALA, Alola_Melemele_SamsonOakVilla_Dialogue_137
	goto_if_set FLAG_CAUGHT_ALL_PONI, Alola_Melemele_SamsonOakVilla_Dialogue_137
	setflag FLAG_CAUGHT_ALL_ULAULA
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_16, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_17
	playfanfare MUS_HG_OBTAIN_EGG
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_28
	waitfanfare
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_21, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_130:
	setflag FLAG_CAUGHT_ALL_PONI
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_16, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_17
	playfanfare MUS_HG_OBTAIN_EGG
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_31
	waitfanfare
	goto_if_set FLAG_CAUGHT_ALL_AKALA, Alola_Melemele_SamsonOakVilla_Dialogue_147
Alola_Melemele_SamsonOakVilla_Dialogue_145:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_21, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_137:
	setflag FLAG_CAUGHT_ALL_ULAULA
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_16, MSGBOX_AUTOCLOSE
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_17
	playfanfare MUS_HG_OBTAIN_EGG
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_28
	waitfanfare
	goto_if_set FLAG_CAUGHT_ALL_AKALA, Alola_Melemele_SamsonOakVilla_Dialogue_156
Alola_Melemele_SamsonOakVilla_Dialogue_154:
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_21, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_144:
	playfanfare MUS_HG_BUG_CONTEST_1ST_PLACE
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_19, MSGBOX_AUTOCLOSE
	waitfanfare
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_25, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_146:
	goto_if_set FLAG_CAUGHT_ALL_PONI, Alola_Melemele_SamsonOakVilla_Dialogue_150
	goto Alola_Melemele_SamsonOakVilla_Dialogue_145

Alola_Melemele_SamsonOakVilla_Dialogue_147:
	goto_if_set FLAG_CAUGHT_ALL_ULAULA, Alola_Melemele_SamsonOakVilla_Dialogue_146
	goto Alola_Melemele_SamsonOakVilla_Dialogue_145

Alola_Melemele_SamsonOakVilla_Dialogue_150:
	goto_if_set FLAG_CAUGHT_ALL_MELEMELE, Alola_Melemele_SamsonOakVilla_Dialogue_144
	goto Alola_Melemele_SamsonOakVilla_Dialogue_145

Alola_Melemele_SamsonOakVilla_Dialogue_153:
	playfanfare MUS_HG_BUG_CONTEST_1ST_PLACE
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_19, MSGBOX_AUTOCLOSE
	waitfanfare
	playse SE_PIN
	applymovement SamsonOakVilla, Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0
	waitmovement 0
	msgbox Alola_Melemele_SamsonOakVilla_Dialogue_Text_25, MSGBOX_AUTOCLOSE
	release
	end

Alola_Melemele_SamsonOakVilla_Dialogue_155:
	goto_if_set FLAG_CAUGHT_ALL_PONI, Alola_Melemele_SamsonOakVilla_Dialogue_159
	goto Alola_Melemele_SamsonOakVilla_Dialogue_154

Alola_Melemele_SamsonOakVilla_Dialogue_156:
	goto_if_set FLAG_CAUGHT_ALL_ULAULA, Alola_Melemele_SamsonOakVilla_Dialogue_155
	goto Alola_Melemele_SamsonOakVilla_Dialogue_154

Alola_Melemele_SamsonOakVilla_Dialogue_159:
	goto_if_set FLAG_CAUGHT_ALL_MELEMELE, Alola_Melemele_SamsonOakVilla_Dialogue_153
	goto Alola_Melemele_SamsonOakVilla_Dialogue_154


Alola_Melemele_SamsonOakVillaIntro_Trigger_Movement_0:
	emote_exclamation_mark
	face_down
	step_end

Alola_Melemele_SamsonOakVillaIntro_Trigger_Movement_1:
	walk_down
	walk_left
	face_down
	step_end

Alola_Melemele_SamsonOakVillaIntro_Trigger_Movement_2:
	walk_in_place_down
	walk_in_place_down
	step_end

Alola_Melemele_SamsonOakVillaIntro_Trigger_Movement_3:
	walk_right
	walk_up
	face_right
	step_end

Alola_Melemele_SamsonOakVilla_Dialogue_Movement_0:
	emote_exclamation_mark
	step_end

Alola_Melemele_SamsonOakVillaIntro_Trigger_Text_0:
	.string "Alola, {PLAYER}!$"

Alola_Melemele_SamsonOakVillaIntro_Trigger_Text_1:
#if GERMAN
	.string "Schön, dass du da bist!\n"
	.string "Willkommen in meiner Villa!\p"
	.string "Ich wohne hier, während ich die\n"
	.string "Ähnlichkeit der Alola-Inseln mit der\l"
	.string "Alola-Region erforsche.\p"
	.string "Besonders interessiert mich das\n"
	.string "Phänomen der “Regionalformen”.$"
#else
	.string "I'm glad you're here!\n"
	.string "Welcome to my villa!\p"
	.string "I'm staying here while I research the\n"
	.string "Alola Isles for their similarity to\l"
	.string "the Alola Region.\p"
	.string "I'm particularly interested in the\n"
	.string "phenomenon of “regional variants”.$"
#endif

Alola_Melemele_SamsonOakVillaIntro_Trigger_Text_2:
#if GERMAN
	.string "Du scheinst recht fähig zu sein.\p"
	.string "Du wärst perfekt, um mir bei meiner\n"
	.string "Studie der Alola-Inseln zu helfen!\p"
	.string "Erkunde alles, was die Inseln zu bieten\n"
	.string "haben. Und findest du bekannte\l"
	.string "Pokémon, die denen aus Kanto ähneln…\l"
	.string "dann komm zurück und zeig mir deinen\l"
	.string "Pokédex!\p"
	.string "Ich warte hier geduldig auf\n"
	.string "Neuigkeiten von dir!$"
#else
	.string "You seem quite capable.\p"
	.string "You'd be perfect to help with my survey\n"
	.string "of the Alola Isles!\p"
	.string "Explore all the Isles have to offer,\n"
	.string "and if you find any familiar Pokémon\l"
	.string "that resemble those from Kanto…\l"
	.string "come back and show me your Pokédex!\p"
	.string "I'll be here patiently waiting to hear\n"
	.string "about your progress!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_0:
#if GERMAN
	.string "Wow!\n"
	.string "Du hast die Schutzpatrone gesehen!\p"
	.string "Unglaubliche Leistung, {PLAYER}.\p"
	.string "Das hier habe ich auf einem meiner\n"
	.string "Streifzüge gefunden.\p"
	.string "Ich weiß nicht genau, wofür es gut\n"
	.string "ist, aber du solltest es nehmen.$"
#else
	.string "Wow!\n"
	.string "You saw the Guardian Dieties!\p"
	.string "Incredible work, {PLAYER}.\p"
	.string "I found this while wandering about.\p"
	.string "I'm not entirely sure what it's for,\n"
	.string "but you should take it.$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_1:
#if GERMAN
	.string "Die Alola-Inseln müssen wahrhaft etwas\n"
	.string "Besonderes sein, wenn sogar die\l"
	.string "Schutzpatrone sie besuchen!$"
#else
	.string "The Alola Isles must truly be special if\n"
	.string "the Guardians themselves visited!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_2:
#if GERMAN
	.string "Danke für deine Hilfe bei meiner\n"
	.string "Forschung, {PLAYER}!\p"
	.string "Dank dir verstehen wir die Alola-\n"
	.string "Inseln nun viel besser!\p"
	.string "Ich hoffe, du erkundest die Inseln\n"
	.string "weiter und lüftest alle Geheimnisse, die\l"
	.string "sie verbergen!$"
#else
	.string "Thanks for your help with my research,\n"
	.string "{PLAYER}!\p"
	.string "Our understanding of the Alola Isles\n"
	.string "has greatly improved thanks to you!\p"
	.string "I hope you continue to explore the\n"
	.string "Isles to find all the secrets that\l"
	.string "they hold!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_3:
#if GERMAN
	.string "Alola, {PLAYER}!\p"
	.string "Du hast also alle Herrscher-\n"
	.string "Pokémon der Inseln besiegt?\p"
	.string "Das ist eine beachtliche Leistung!\p"
	.string "Es ist lange genug her…\p"
	.string "Ich denke, es wird Zeit für einen\n"
	.string "Kampf zwischen uns, oder?$"
#else
	.string "Alola {PLAYER}!\p"
	.string "So you managed to defeat all of the\n"
	.string "Totem Pokémon on the Isles, did you?\p"
	.string "That's quite an accomplishment!\p"
	.string "It's been long enough…\p"
	.string "I think it's about time we had a battle,\n"
	.string "don't you?$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_4:
#if GERMAN
	.string "Großartig!\n"
	.string "Ich werde dich nicht schonen!$"
#else
	.string "Great!\n"
	.string "I won't be taking it easy on you!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_5:
	.string "Incredible, {PLAYER}!$"

Alola_Melemele_SamsonOakVilla_Dialogue_Text_6:
#if GERMAN
	.string "Wow, {PLAYER}!\n"
	.string "Du bist wirklich stark!\p"
	.string "Du hast dich eines Geheimnisses würdig\n"
	.string "erwiesen, das ich über diese Inseln\l"
	.string "hüte…\p"
	.string "Nicht nur mir ist die verblüffende\n"
	.string "Ähnlichkeit zwischen den Alola-Inseln\l"
	.string "und der Alola-Region aufgefallen…\p"
	.string "Offenbar besuchen sogar die Kapu\n"
	.string "selbst diese Inseln.\p"
	.string "Siehst du sie über die Inseln fliegen,\n"
	.string "geh zu den Totems… Dort warten sie\l"
	.string "vielleicht auf dich!$"
#else
	.string "Wow, {PLAYER}!\n"
	.string "You really are a powerful Trainer!\p"
	.string "You've proven worthy of a secret\n"
	.string "I've been keeping about these isles…\p"
	.string "I'm not the only one who's noticed a\n"
	.string "striking resemblance between the Alola\l"
	.string "Isles and the Alola Region…\p"
	.string "It seems the Tapu Guardians themselves\n"
	.string "have been visiting the Isles.\p"
	.string "If you see them fly over the Isles, head\n"
	.string "to the totems… They may be there \l"
	.string "waiting for you!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_7:
#if GERMAN
	.string "Worauf wartest du noch, {PLAYER}?\n"
	.string "Zieh los und erkunde die Welt!$"
#else
	.string "What are you waiting for, {PLAYER}?\n"
	.string "Go out there and explore!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_8:
#if GERMAN
	.string "Kein Problem, {PLAYER}!\p"
	.string "Nimm dir Zeit, dich auf den Kampf\n"
	.string "vorzubereiten, und komm wieder, wenn du\l"
	.string "bereit bist!$"
#else
	.string "No worries, {PLAYER}!\p"
	.string "Take your time to prepare for the\n"
	.string "battle, and come back when you're\l"
	.string "ready!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_9:
#if GERMAN
	.string "Alola, {PLAYER}!\p"
	.string "Du hast also alle Alola-Formen der\n"
	.string "Inseln gefunden. Aber hast du auch\l"
	.string "schon alle Herrscher-Pokémon besiegt?\p"
	.string "Halte auf jeder Insel nach einer\n"
	.string "seltsamen Säule Ausschau. Die\l"
	.string "Herrscher-Pokémon bewachen sie!$"
#else
	.string "Alola {PLAYER}!\p"
	.string "So you've found all the Alolan variants\n"
	.string "on the Isles, but have you defeated all\l"
	.string "the Totem Pokémon yet?\p"
	.string "You should look for a strange pillar on\n"
	.string "each isle, the Totem Pokémon will be\l"
	.string "guarding it!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_10:
#if GERMAN
	.string "Hallo nochmal, {PLAYER}!\p"
	.string "Wie läuft deine Erkundung der\n"
	.string "Alola-Inseln?\p"
	.string "Möchtest du mir von deinen\n"
	.string "Fortschritten auf einer bestimmten\l"
	.string "Insel berichten?$"
#else
	.string "Hello again, {PLAYER}!\p"
	.string "How's your research on the Alola Isles\n"
	.string "coming along?\p"
	.string "Would you like to share your progress\n"
	.string "about a specific isle with me?$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_11:
#if GERMAN
	.string "Mele-Mele$"
#else
	.string "Melemele Isle$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_12:
#if GERMAN
	.string "Akala$"
#else
	.string "Akala Isle$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_13:
#if GERMAN
	.string "Ula-Ula$"
#else
	.string "Ula'ula Isle$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_14:
#if GERMAN
	.string "Poni$"
#else
	.string "Poni Isle$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_15:
	.string "Not right now.$"

Alola_Melemele_SamsonOakVilla_Dialogue_Text_16:
#if GERMAN
	.string "Zeig mir mal deinen Pokédex{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.$"
#else
	.string "Let me take a look at your Pokédex{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_17:
	.string "Wow, {PLAYER}!$"

Alola_Melemele_SamsonOakVilla_Dialogue_Text_18:
#if GERMAN
	.string "Du hast alle Alola-Formen gefunden,\n"
	.string "die auf Mele-Mele leben!$"
#else
	.string "You found all the Alolan variants living\n"
	.string "on Melemele Isle!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_19:
#if GERMAN
	.string "Und offenbar hast du auch auf allen\n"
	.string "anderen Inseln sämtliche Alola-Formen\l"
	.string "gefunden!\p"
	.string "Das ist fantastisch, {PLAYER}!\p"
	.string "Du kannst wirklich stolz auf dich\nsein!$"
#else
	.string "And it looks like you've found all the\n"
	.string "Alolan variants on the other isles too!\p"
	.string "That's amazing, {PLAYER}!\p"
	.string "You should be very proud of yourself!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_20:
#if GERMAN
	.string "Du hast mir bestätigt, dass alle\n"
	.string "Alola-Formen auf den Alola-Inseln\l"
	.string "vorkommen!\p"
	.string "Ich hätte da noch eine letzte\n"
	.string "Bitte an dich…\p"
	.string "Könntest du die Herrscher-Pokémon\n"
	.string "untersuchen, die die Totems der Inseln\l"
	.string "bewachen sollen?\p"
	.string "Aber Vorsicht! Diese Herrscher-Pokémon\n"
	.string "sollen viel stärker sein als ihre\l"
	.string "normalen Artgenossen…\p"
	.string "Man weiß nie, wer beobachtet, ob\n"
	.string "du ein würdiger Gegner bist!$"
#else
	.string "You've helped me validate that all\n"
	.string "of the Alolan variants are present on\l"
	.string "the Alola Isles!\p"
	.string "I'd like you to help me with one more\n"
	.string "thing…\p"
	.string "Could you help me investigate the Totem\n"
	.string "Pokémon that are said to be guarding\l"
	.string "the totems on each isle?\p"
	.string "But beware! These Totem Pokémon are\n"
	.string "said to be much stronger than their\l"
	.string "normal counterparts…\p"
	.string "You never know who might be watching\n"
	.string "to see if you are a worthy opponent!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_21:
#if GERMAN
	.string "Erkunde weiter die anderen Inseln und\n"
	.string "berichte mir von deinen Fortschritten!$"
#else
	.string "Keep exploring the other isles and\n"
	.string "report your progress to me!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_22:
#if GERMAN
	.string "Wie es scheint, hast du bereits alle\n"
	.string "Alola-Formen auf Mele-Mele gefunden!\p"
	.string "Großartige Arbeit!\p"
	.string "Erkunde weiter die anderen Inseln und\n"
	.string "berichte mir von deinen Fortschritten!$"
#else
	.string "It seems you've already found all the\n"
	.string "Alolan variants on Melemele Isle!\p"
	.string "Great job!\p"
	.string "Keep exploring the other isles and\n"
	.string "report your progress to me!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_23:
#if GERMAN
	.string "Zeig mir mal deinen Pokédex{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\p"
	.string "Es scheint, du hast noch nicht alle\n"
	.string "Alola-Formen auf Mele-Mele gefunden.\p"
	.string "Auf Mele-Mele soll es 4 Alola-\n"
	.string "Formen zu entdecken geben…\p"
	.string "Rattfratz, Rattikarl, Mauzi und\n"
	.string "Snobilikat.\p"
	.string "Such weiter und komm wieder, wenn\n"
	.string "du sie alle gefangen hast!$"
#else
	.string "Let me take a look at your Pokédex{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\p"
	.string "It seems you haven't quite found all of\n"
	.string "the Alolan variants on Melemele Isle\l"
	.string "just yet.\p"
	.string "I've heard Melemele Isle has 4 Alolan\n"
	.string "variants for you to find…\p"
	.string "Rattata, Raticate, Meowth, and Persian.\p"
	.string "Keep on searching and come back when\n"
	.string "you've caught them all!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_24:
#if GERMAN
	.string "Du hast alle Alola-Formen gefunden,\n"
	.string "die auf Akala leben!$"
#else
	.string "You found all the Alolan variants living\n"
	.string "on Akala Isle!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_25:
#if GERMAN
	.string "Du hast mir bestätigt, dass alle\n"
	.string "Alola-Formen auf den Alola-Inseln\l"
	.string "vorkommen!\p"
	.string "Ich hätte da noch eine letzte\n"
	.string "Bitte an dich…\p"
	.string "Könntest du die Herrscher-Pokémon\n"
	.string "untersuchen, die die Totems der Inseln\l"
	.string "bewachen sollen?\p"
	.string "Aber Vorsicht! Diese Herrscher-Pokémon\n"
	.string "sollen viel stärker sein als ihre\l"
	.string "normalen Artgenossen…\p"
	.string "Man weiß nie, wer beobachtet, ob\n"
	.string "du ein würdiger Gegner bist!$"
#else
	.string "Now that you've helped me validate that\n"
	.string "all of the Alolan variants are present\l"
	.string "on the Alola Isles.\p"
	.string "I'd like you to help me with one more\n"
	.string "thing…\p"
	.string "Could you help me investigate the Totem\n"
	.string "Pokémon that are said to be guarding\l"
	.string "the totems on each isle?\p"
	.string "But beware! These Totem Pokémon are\n"
	.string "said to be much stronger than their\l"
	.string "normal counterparts…\p"
	.string "You never know who might be watching\n"
	.string "to see if you are a worthy opponent!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_26:
#if GERMAN
	.string "Wie es scheint, hast du bereits alle\n"
	.string "Alola-Formen auf Akala gefunden!\p"
	.string "Großartige Arbeit!\p"
	.string "Erkunde weiter die anderen Inseln und\n"
	.string "berichte mir von deinen Fortschritten!$"
#else
	.string "It seems you've already found all the\n"
	.string "Alolan variants on Akala Isle!\p"
	.string "Great job!\p"
	.string "Keep exploring the other isles and\n"
	.string "report your progress to me!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_27:
#if GERMAN
	.string "Zeig mir mal deinen Pokédex{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\p"
	.string "Es scheint, du hast noch nicht alle\n"
	.string "Alola-Formen auf Akala gefunden.\p"
	.string "Auf Akala soll es 3 Alola-Formen\n"
	.string "zu entdecken geben…\p"
	.string "Knogga, Digda und Digdri.\p"
	.string "Such weiter und komm wieder, wenn\n"
	.string "du sie alle gefangen hast!$"
#else
	.string "Let me take a look at your Pokédex{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\p"
	.string "It seems you haven't quite found all of\n"
	.string "the Alolan variants on Akala Isle\l"
	.string "just yet.\p"
	.string "I've heard Akala Isle has 3 Alolan\n"
	.string "variants for you to find…\p"
	.string "Marowak, Diglett, and Dugtrio.\p"
	.string "Keep on searching and come back when\n"
	.string "you've caught them all!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_28:
#if GERMAN
	.string "Du hast alle Alola-Formen gefunden,\n"
	.string "die auf Ula-Ula leben!$"
#else
	.string "You found all the Alolan variants living\n"
	.string "on Ula'ula Isle!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_29:
#if GERMAN
	.string "Wie es scheint, hast du bereits alle\n"
	.string "Alola-Formen auf Ula-Ula gefunden!\p"
	.string "Großartige Arbeit!\p"
	.string "Erkunde weiter die anderen Inseln und\n"
	.string "berichte mir von deinen Fortschritten!$"
#else
	.string "It seems you've already found all the\n"
	.string "Alolan variants on Ula'ula Isle!\p"
	.string "Great job!\p"
	.string "Keep exploring the other isles and\n"
	.string "report your progress to me!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_30:
#if GERMAN
	.string "Zeig mir mal deinen Pokédex{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\p"
	.string "Es scheint, du hast noch nicht alle\n"
	.string "Alola-Formen auf Ula-Ula gefunden.\p"
	.string "Auf Ula-Ula soll es 6 Alola-\n"
	.string "Formen zu entdecken geben…\p"
	.string "Vulpix, Vulnona, Sandan, Sandamer,\n"
	.string "Sleima und Sleimok.\p"
	.string "Such weiter und komm wieder, wenn\n"
	.string "du sie alle gefangen hast!$"
#else
	.string "Let me take a look at your Pokédex{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\p"
	.string "It seems you haven't quite found all of\n"
	.string "the Alolan variants on Ula'ula Isle\l"
	.string "just yet.\p"
	.string "I've heard Ula'ula Isle has 6 Alolan\n"
	.string "variants for you to find…\p"
	.string "Vulpix, Ninetales, Sandshrew, Sandslash,\n"
	.string "Grimer, and Muk.\p"
	.string "Keep on searching and come back when\n"
	.string "you've caught them all!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_31:
#if GERMAN
	.string "Du hast alle Alola-Formen gefunden,\n"
	.string "die auf Poni leben!$"
#else
	.string "You found all the Alolan variants living\n"
	.string "on Poni Isle!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_32:
#if GERMAN
	.string "Wie es scheint, hast du bereits alle\n"
	.string "Alola-Formen auf Poni gefunden!\p"
	.string "Großartige Arbeit!\p"
	.string "Erkunde weiter die anderen Inseln und\n"
	.string "berichte mir von deinen Fortschritten!$"
#else
	.string "It seems you've already found all the\n"
	.string "Alolan variants on Poni Isle!\p"
	.string "Great job!\p"
	.string "Keep exploring the other isles and\n"
	.string "report your progress to me!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_33:
#if GERMAN
	.string "Zeig mir mal deinen Pokédex{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\p"
	.string "Es scheint, du hast noch nicht alle\n"
	.string "Alola-Formen auf Poni gefunden.\p"
	.string "Auf Poni soll es 5 Alola-Formen\n"
	.string "zu entdecken geben…\p"
	.string "Raichu, Kleinstein, Georok,\n"
	.string "Geowaz und Kokowei.\p"
	.string "Such weiter und komm wieder, wenn\n"
	.string "du sie alle gefangen hast!$"
#else
	.string "Let me take a look at your Pokédex{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\p"
	.string "It seems you haven't quite found all of\n"
	.string "the Alolan variants on Poni Isle\l"
	.string "just yet.\p"
	.string "I've heard Poni Isle has 5 Alolan\n"
	.string "variants for you to find…\p"
	.string "Raichu, Geodude, Graveler, Golem,\n"
	.string "and Exeggutor.\p"
	.string "Keep on searching and come back when\n"
	.string "you've caught them all!$"
#endif

Alola_Melemele_SamsonOakVilla_Dialogue_Text_34:
#if GERMAN
	.string "Kein Problem, {PLAYER}!\p"
	.string "Komm wieder, wenn du mir von den\n"
	.string "Alola-Inseln berichten möchtest!$"
#else
	.string "No worries, {PLAYER}!\p"
	.string "Come back when you'd like to share your\n"
	.string "findings about the Alola Isles!$"
#endif
