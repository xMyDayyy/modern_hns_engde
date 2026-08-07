SaffronCity_FightingDojo_hns_MapScripts::
	.byte 0

SaffronCity_FightingDojo_EventScript_StatueLeft::
	msgbox SaffronCity_FightingDojo_Text_Sign1, MSGBOX_SIGN
	end
SaffronCity_FightingDojo_EventScript_StatueRight::
	msgbox SaffronCity_FightingDojo_Text_Sign2, MSGBOX_SIGN
	end

SaffronCity_FightingDojo_EventScript_BlackBelt::
	msgbox SaffronCity_FightingDojo_Text_BlackBelt, MSGBOX_NPC
	end

SaffronCity_FightingDojo_EventScript_Cooltrainer::
	msgbox SaffronCity_FightingDojo_Text_Cooltrainer, MSGBOX_NPC
	end

SaffronCity_FightingDojo_EventScript_Refused::
	closemessage
	release
	end

SaffronCity_FightingDojo_EventScript_Lickilicky_EV_HP::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LICKILICKY, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojo_Text_Lickilicky, MSGBOX_DEFAULT
	delay 20
	closemessage
	goto_if_set FLAG_TEMP_1, SaffronCity_FightingDojo_EventScript_BattleLickilicky_EV_HP
	delay 30
	bufferspeciesname STR_VAR_1, SPECIES_LICKILICKY
	bufferstring STR_VAR_2, SaffronCity_FightingDojo_Text_HP
	msgbox SaffronCity_FightingDojo_Text_WouldYouLikeToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojo_EventScript_Refused
SaffronCity_FightingDojo_EventScript_BattleLickilicky_EV_HP::
	setflag FLAG_NO_WILD_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_LICKILICKY, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_NO_WILD_CATCHING
	clearflag FLAG_NO_SHINY
	setflag FLAG_TEMP_1
	release
	end

SaffronCity_FightingDojo_Text_Lickilicky:
#if GERMAN
	.string "Schlurplek: Liiiiick!$"
#else
	.string "LICKILICKY: LIIIIICK!$"
#endif

SaffronCity_FightingDojo_EventScript_Machamp_EV_Attack::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHAMP, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojo_Text_Machamp, MSGBOX_DEFAULT
	delay 20
	closemessage
	goto_if_set FLAG_TEMP_2, SaffronCity_FightingDojo_EventScript_BattleMachamp_EV_Attack
	delay 30
	bufferspeciesname STR_VAR_1, SPECIES_MACHAMP
	bufferstring STR_VAR_2, SaffronCity_FightingDojo_Text_Attack
	msgbox SaffronCity_FightingDojo_Text_WouldYouLikeToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojo_EventScript_Refused
SaffronCity_FightingDojo_EventScript_BattleMachamp_EV_Attack::
	setflag FLAG_NO_WILD_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_MACHAMP, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_NO_WILD_CATCHING
	clearflag FLAG_NO_SHINY
	setflag FLAG_TEMP_2
	release
	end

SaffronCity_FightingDojo_Text_Machamp:
#if GERMAN
	.string "Machomei: Champ!$"
#else
	.string "MACHAMP: CHAMP!$"
#endif

SaffronCity_FightingDojo_EventScript_Steelix_EV_Defense::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_STEELIX, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojo_Text_Steelix, MSGBOX_DEFAULT
	delay 20
	closemessage
	goto_if_set FLAG_TEMP_3, SaffronCity_FightingDojo_EventScript_BattleSteelix_EV_Defense
	delay 30
	bufferspeciesname STR_VAR_1, SPECIES_STEELIX
	bufferstring STR_VAR_2, SaffronCity_FightingDojo_Text_Defense
	msgbox SaffronCity_FightingDojo_Text_WouldYouLikeToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojo_EventScript_Refused
SaffronCity_FightingDojo_EventScript_BattleSteelix_EV_Defense::
	setflag FLAG_NO_WILD_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_STEELIX, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_NO_WILD_CATCHING
	clearflag FLAG_NO_SHINY
	setflag FLAG_TEMP_3
	release
	end

SaffronCity_FightingDojo_Text_Steelix:
#if GERMAN
	.string "Stahlos: Grrrind!$"
#else
	.string "STEELIX: GRRRIND!$"
#endif

SaffronCity_FightingDojo_EventScript_Alakazam_EV_SpecialAttack::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ALAKAZAM, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojo_Text_Alakazam, MSGBOX_DEFAULT
	delay 20
	closemessage
	goto_if_set FLAG_TEMP_4, SaffronCity_FightingDojo_EventScript_BattleAlakazam_EV_SpecialAttack
	delay 30
	bufferspeciesname STR_VAR_1, SPECIES_ALAKAZAM
	bufferstring STR_VAR_2, SaffronCity_FightingDojo_Text_SpecialAttack
	msgbox SaffronCity_FightingDojo_Text_WouldYouLikeToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojo_EventScript_Refused
SaffronCity_FightingDojo_EventScript_BattleAlakazam_EV_SpecialAttack::
	setflag FLAG_NO_WILD_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_ALAKAZAM, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_NO_WILD_CATCHING
	clearflag FLAG_NO_SHINY
	setflag FLAG_TEMP_4
	release
	end

SaffronCity_FightingDojo_Text_Alakazam:
#if GERMAN
	.string "Simsala: Zam!$"
#else
	.string "ALAKAZAM: ZAM!$"
#endif

SaffronCity_FightingDojo_EventScript_Slowking_EV_SpecialDefense::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWKING, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojo_Text_Slowking, MSGBOX_DEFAULT
	delay 20
	closemessage
	goto_if_set FLAG_TEMP_5, SaffronCity_FightingDojo_EventScript_BattleSlowking_EV_SpecialDefense
	delay 30
	bufferspeciesname STR_VAR_1, SPECIES_SLOWKING
	bufferstring STR_VAR_2, SaffronCity_FightingDojo_Text_SpecialDefense
	msgbox SaffronCity_FightingDojo_Text_WouldYouLikeToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojo_EventScript_Refused
SaffronCity_FightingDojo_EventScript_BattleSlowking_EV_SpecialDefense::
	setflag FLAG_NO_WILD_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_SLOWKING, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_NO_WILD_CATCHING
	clearflag FLAG_NO_SHINY
	setflag FLAG_TEMP_5
	release
	end

SaffronCity_FightingDojo_Text_Slowking:
#if GERMAN
	.string "Laschoking: Hmmm…$"
#else
	.string "SLOWKING: HMMM...$"
#endif

SaffronCity_FightingDojo_EventScript_Pidgeot_EV_Speed::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	msgbox SaffronCity_FightingDojo_Text_Pidgeot, MSGBOX_DEFAULT
	delay 20
	closemessage
	goto_if_set FLAG_TEMP_6, SaffronCity_FightingDojo_EventScript_BattlePidgeot_EV_Speed
	delay 30
	bufferspeciesname STR_VAR_1, SPECIES_PIDGEOT
	bufferstring STR_VAR_2, SaffronCity_FightingDojo_Text_Speed
	msgbox SaffronCity_FightingDojo_Text_WouldYouLikeToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_FightingDojo_EventScript_Refused
SaffronCity_FightingDojo_EventScript_BattlePidgeot_EV_Speed::
	setflag FLAG_NO_WILD_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_PIDGEOT, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_NO_WILD_CATCHING
	clearflag FLAG_NO_SHINY
	setflag FLAG_TEMP_6
	release
	end

SaffronCity_FightingDojo_Text_Pidgeot:
#if GERMAN
	.string "Tauboss: Zwitscher!$"
#else
	.string "PIDGEOT: GEEEE!$"
#endif
SaffronCity_FightingDojo_Text_HP:
	.string "KP$"
SaffronCity_FightingDojo_Text_Attack:
	.string "ATK$"
SaffronCity_FightingDojo_Text_Defense:
	.string "DEF$"
SaffronCity_FightingDojo_Text_SpecialAttack:
	.string "Sp. Ang.$"
SaffronCity_FightingDojo_Text_SpecialDefense:
	.string "Sp. Ver.$"
SaffronCity_FightingDojo_Text_Speed:
	.string "SPD$"

SaffronCity_FightingDojo_Text_WouldYouLikeToBattle:
#if GERMAN
	.string "Bekämpfe {STR_VAR_1} für 3 {STR_VAR_2}\n"
	.string "Evs?$"
#else
	.string "Battle {STR_VAR_1} for 3 {STR_VAR_2} EVs?$"
#endif

SaffronCity_FightingDojo_Text_BlackBelt:
#if GERMAN
	.string "Du betrittst das Kampf-Dojo!\p"
	.string "Hier kannst du die Werte deiner\n"
	.string "Pokémon im Kampf stählen!$"
#else
	.string "You enter the FIGHTING DOJO!\p"
	.string "Here, you may hone the stats of\n"
	.string "of your POKéMON by battle!$"
#endif

SaffronCity_FightingDojo_Text_Sign1:
#if GERMAN
	.string "Links: KP, DEF, SDEF$"
#else
	.string "Left: HP, DEF, SDEF$"
#endif

SaffronCity_FightingDojo_Text_Sign2:
#if GERMAN
	.string "Rechts: ATK, SPATK, SPD$"
#else
	.string "RIGHT: ATK, SPATK, SPD$"
#endif

SaffronCity_FightingDojo_Text_Cooltrainer::
#if GERMAN
	.string "Nur Trainer mit allen Kanto-Orden\n"
	.string "dürfen in die VIP-Lounge.$"
#else
	.string "Only trainers with all KANTO badges\n"
	.string "may enter the VIP lounge.$"
#endif

@Ability swapper

SaffronCity_FightingDojo_Ability_Man::
	lock
	faceplayer
	msgbox SaffronCity_FightingDojo_Ability_Text1, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq SaffronCity_FightingDojo_Ability_CheckMoney
	compare VAR_RESULT, NO
	goto_if_eq SaffronCity_FightingDojo_Ability_No
	end

SaffronCity_FightingDojo_Ability_No:
	msgbox SaffronCity_FightingDojo_Ability_Text_No, MSGBOX_DEFAULT
	waitmessage
	release
	end

SaffronCity_FightingDojo_SetZeroNoMoney::
	msgbox SaffronCity_FightingDojo_SetZeroTextNoMoney, MSGBOX_DEFAULT
	waitmessage
	release
	end

SaffronCity_FightingDojo_Ability_CheckMoney:
	checkmoney 25000, 0
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_FightingDojo_Ability_Continue
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_FightingDojo_SetZeroNoMoney
	end

SaffronCity_FightingDojo_Ability_Continue:
	closemessage
	special ChoosePartyMon
	waitstate
	@special SwitchMonAbility
	@compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_FightingDojo_Ability_Finish
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_FightingDojo_Ability_Cant
	end

SaffronCity_FightingDojo_Ability_Cant:
	msgbox SaffronCity_FightingDojo_Ability_Text_Cant, MSGBOX_DEFAULT
	waitmessage
	release
	end

SaffronCity_FightingDojo_Ability_Finish:
	fadescreen 0x1
	delay 100
	fadescreen 0x0
	faceplayer
	waitse
	playse SE_EXP_MAX
	msgbox SaffronCity_FightingDojo_Ability_Finish_Text, MSGBOX_DEFAULT
	removemoney 25000, 0
	closemessage
	release
	end

SaffronCity_FightingDojo_Ability_Finish_Text:
#if GERMAN
	.string "Wunderbar!$"
#else
	.string "That's it! You're welcome!$"
#endif

SaffronCity_FightingDojo_Ability_Text1:
#if GERMAN
	.string "Willkommen! Ich bin der\n"
	.string "Fähigkeiten-Experte!\l"
	.string "Ich tausche Fähigkeiten\p"
	.string "für nur 25.000¥!\p"
	.string "Möchtest du eine Fähigkeit\n"
	.string "eines Pokémon tauschen?$"
#else
	.string "Welcome! I'm the ABILITY EXPERT!\p"
	.string "I can swap POKéMON's abilities in\n"
	.string "a heartbeat, only for 25.000¥!\p"
	.string "Would you like me to swap any\n"
	.string "POKéMON's ability?$"
#endif

SaffronCity_FightingDojo_Ability_Text_No:
#if GERMAN
	.string "Kein Problem. Ich bin hier,\n"
	.string "wenn du mich brauchst.$"
#else
	.string "Sure. I'll be here if you need me.$"
#endif

SaffronCity_FightingDojo_Ability_Text_Cant:
#if GERMAN
	.string "Das geht leider nicht. Dieses\n"
	.string "Pokémon hat keine zweite Fähigkeit!$"
#else
	.string "I cannot do that. This POKéMON\n"
	.string "does not have a second ABILITY!$"
#endif

SaffronCity_FightingDojo_Ability_Text_NoChampion:
#if GERMAN
	.string "Willkommen! Ich bin der\n"
	.string "Fähigkeits-Experte!\p"
	.string "Ich kann Pokémon-Fähigkeiten\n"
	.string "im Nu tauschen.\p"
	.string "Leider tut mir der Rücken weh\n"
	.string "und ich kann heute nicht\l"
	.string "arbeiten.\p"
	.string "Komm später wieder!$"
#else
	.string "Welcome! I'm the ABILITY EXPERT!\p"
	.string "I can swap POKéMON's abilities\n"
	.string "in a heartbeat.\p"
	.string "Unfortunately, my back hurts and\n"
	.string "I can't work today.\p"
	.string "Come again later!$"
#endif

SaffronCity_FightingDojo_SetZeroTextNoMoney:
#if GERMAN
	.string "Nana: Du hast nicht genug Pokémon.\n"
	.string "Geh und stocke dein Team auf.$"
#else
	.string "You don't have enough money.\p"
	.string "Come back when you have.$"
#endif

