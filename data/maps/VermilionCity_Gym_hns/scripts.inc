.set FOUND_FIRST_SWITCH, FLAG_TEMP_1
.set SWITCH1_ID,         VAR_0x8004
.set SWITCH2_ID,         VAR_0x8005
.set TRASH_CAN_ID,       VAR_0x8008

.set CHECK_VISITOR_STATE, 6
.set TYPE, VAR_0x8003
.set ARGUMENT, VAR_0x8004

VermilionCity_Gym_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_OnTransition
	.byte 0

VermilionCity_Gym_OnLoad::
	call_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_SetOneBeamOff
	call_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_SetBeamsOff
	end

VermilionCity_Gym_EventScript_SetOneBeamOff::
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
	return

VermilionCity_Gym_EventScript_SetBeamsOff::
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
	setmetatile 5, 6, METATILE_VermilionGym_Floor, 0
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
	setmetatile 5, 7, METATILE_VermilionGym_Floor, 0
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
	return

VermilionCity_Gym_OnTransition::
	call VermilionCity_Gym_EventScript_InitTrashCans
	end

VermilionCity_Gym_EventScript_InitTrashCans::
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_Return
	special SetVermilionTrashCans
	copyvar VAR_TEMP_0, SWITCH1_ID
	copyvar VAR_TEMP_1, SWITCH2_ID
	return

VermilionCity_Gym_EventScript_Return::
	end

VermilionCity_Gym_EventScript_TrashCan1::
	lockall
	setvar TRASH_CAN_ID, 1
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan2::
	lockall
	setvar TRASH_CAN_ID, 2
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan3::
	lockall
	setvar TRASH_CAN_ID, 3
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan4::
	lockall
	setvar TRASH_CAN_ID, 4
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan5::
	lockall
	setvar TRASH_CAN_ID, 5
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan6::
	lockall
	setvar TRASH_CAN_ID, 6
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan7::
	lockall
	setvar TRASH_CAN_ID, 7
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan8::
	lockall
	setvar TRASH_CAN_ID, 8
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan9::
	lockall
	setvar TRASH_CAN_ID, 9
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan10::
	lockall
	setvar TRASH_CAN_ID, 10
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan11::
	lockall
	setvar TRASH_CAN_ID, 11
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan12::
	lockall
	setvar TRASH_CAN_ID, 12
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan13::
	lockall
	setvar TRASH_CAN_ID, 13
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan14::
	lockall
	setvar TRASH_CAN_ID, 14
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan15::
	lockall
	setvar TRASH_CAN_ID, 15
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan::
	copyvar SWITCH1_ID, VAR_TEMP_0
	copyvar SWITCH2_ID, VAR_TEMP_1
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_LocksAlreadyOpen
	goto_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_TrySwitchTwo
	goto_if_eq SWITCH1_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchOne
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
	releaseall
	end

VermilionCity_Gym_EventScript_FoundSwitchOne::
	msgbox VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened
	playse SE_PIN
	waitse
	call VermilionCity_Gym_EventScript_SetOneBeamOff
	special DrawWholeMapView
	setflag FOUND_FIRST_SWITCH
	releaseall
	end

VermilionCity_Gym_EventScript_TrySwitchTwo::
	goto_if_eq SWITCH2_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchTwo
	msgbox VermilionCity_Gym_Text_OnlyTrashLocksWereReset
	clearflag FOUND_FIRST_SWITCH
	special SetVermilionTrashCans
	copyvar VAR_TEMP_0, SWITCH1_ID
	copyvar VAR_TEMP_1, SWITCH2_ID
	call VermilionCity_Gym_EventScript_SetBeamsOn
	special DrawWholeMapView
	releaseall
	end

VermilionCity_Gym_EventScript_FoundSwitchTwo::
	msgbox VermilionCity_Gym_Text_SecondLockOpened
	closemessage
	call VermilionCity_Gym_EventScript_SetBeamsOff
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
	releaseall
	end

VermilionCity_Gym_EventScript_LocksAlreadyOpen::
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
	releaseall
	end

VermilionCity_Gym_EventScript_SetBeamsOn::
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop, 1
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom, 1
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
	return

VermilionCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_VERMILION_GYM, VermilionCity_Gym_EventScript_GymGuyPostVictory
	msgbox VermilionCity_Gym_Text_GymGuyAdvice
	release
	end

VermilionCity_Gym_EventScript_GymGuyPostVictory::
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory
	release
	end

VermilionCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE11_GET, VermilionCity_Gym_EventScript_GymStatuePostVictory
	msgbox VermilionCity_Gym_Text_GymStatue
	releaseall
	end

VermilionCity_Gym_EventScript_GymStatuePostVictory::
	msgbox VermilionCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

VermilionCity_Gym_EventScript_Gregory::
	trainerbattle_single TRAINER_GREGORY_HNS, VermilionGym_Text_GentlemanGregorySeen, VermilionGym_Text_GentlemanGregoryBeaten
	msgbox VermilionGym_Text_GentlemanGregoryAfter, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_EventScript_Vincent::
	trainerbattle_single TRAINER_VINCENT_HNS, VermilionGym_Text_GuitaristVincentSeen, VermilionGym_Text_GuitaristVincentBeaten
	msgbox VermilionGym_Text_GuitaristVincentAfter, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_EventScript_Horton::
	trainerbattle_single TRAINER_HORTON_HNS, VermilionGym_Text_JugglerHortonSeen, VermilionGym_Text_JugglerHortonBeaten
	msgbox VermilionGym_Text_JugglerHortonAfter, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_EventScript_Surge::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_VERMILION_GYM, VermilionCity_Gym_EventScript_Surge_Defeated
	msgbox VermilionGym_Text_LtSurgeIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LTSURGE_HNS, VermilionGym_Text_LtSurgeWinLoss
	message VermilionGym_Text_ReceivedThunderBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox VermilionGym_Text_ThunderBadgeInfo, MSGBOX_DEFAULT
	setflag FLAG_BADGE11_GET
	setflag FLAG_DEFEATED_VERMILION_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 11
	call Common_EventScript_SetGymTrainers_hns
	checkitem ITEM_TM_SHOCK_WAVE
	call_if_eq VAR_RESULT, TRUE, VermilionCity_Gym_EventScript_GiveThunderstone
	call_if_eq VAR_RESULT, FALSE, VermilionCity_Gym_EventScript_GiveTM
	clearflag FLAG_HIDE_PLANT_SURGE
	closemessage
	release
	end

VermilionCity_Gym_EventScript_GiveThunderstone::
	msgbox VermilionGym_Text_LtSurgeThunderstone, MSGBOX_DEFAULT
	giveitem ITEM_THUNDER_STONE
	return
VermilionCity_Gym_EventScript_GiveTM::
	msgbox VermilionGym_Text_LtSurgeTm, MSGBOX_DEFAULT
	giveitem ITEM_TM_SHOCK_WAVE
	return

VermilionCity_Gym_EventScript_Surge_Defeated::
	msgbox VermilionGym_Text_LtSurgePostBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionGym_Text_LtSurgeIntro:
#if GERMAN
	.string "Major Bob: Hey, Rekrut!\p"
	.string "Du forderst mich zum Kampf heraus?\n"
	.string "Du weißt wohl nicht, wer ich bin!\l"
	.string "Meine Elektro-Pokémon sind\l"
	.string "unschlagbar! Die Besten der Besten!\p"
	.string "Sie haben das Schlachtfeld bis\n"
	.string "jetzt immer siegreich verlassen!\p"
	.string "Nun werden ihre Elektroattacken auch\n"
	.string "dich grillen, genau wie sie es mit den\l"
	.string "Soldaten des Feindes taten!$"
#else
	.string "SURGE: Hey, you little tyke!\p"
	.string "I have to hand it to you.\n"
	.string "It may not be very smart to\l"
	.string "challenge me, but it takes guts!\p"
	.string "When it comes to electric\n"
	.string "POKéMON, I'm number one!\p"
	.string "I've never lost on the\n"
	.string "battlefield.\p"
	.string "I'll zap you just like I did my\n"
	.string "enemies in war!$"
#endif

VermilionGym_Text_LtSurgeWinLoss:
#if GERMAN
	.string "Bob: Arrrgh! Du bist stark!\p"
	.string "Okay, Kleiner. Du bekommst\n"
	.string "den Donnerorden!$"
#else
	.string "SURGE: Arrrgh! You are strong!\p"
	.string "OK, kid. You get THUNDERBADGE!$"
#endif

VermilionGym_Text_ReceivedThunderBadge:
#if GERMAN
	.string "{PLAYER} erhält den Donnerorden!$"
#else
	.string "{PLAYER} received THUNDERBADGE.$"
#endif

VermilionGym_Text_ThunderBadgeInfo:
#if GERMAN
	.string "Bob: Donnerorden erhöht die\n"
	.string "Geschwindigkeit der Pokémon.\p"
	.string "Betrachte ihn als Beweis,\n"
	.string "dass du mich besiegt hast.\p"
	.string "Trage ihn stolz, klar?$"
#else
	.string "SURGE: THUNDERBADGE increases\n"
	.string "POKéMON's speed.\p"
	.string "Consider it proof that you\n"
	.string "defeated me.\p"
	.string "You wear it proudly, hear?$"
#endif

VermilionGym_Text_LtSurgeTm:
#if GERMAN
	.string "Und nimm diese VM. Sie hat mir\n"
	.string "im Krieg gute Dienste geleistet!$"
#else
	.string "And take this TM. It served me\n"
	.string "well in the war!$"
#endif

VermilionGym_Text_LtSurgeThunderstone:
#if GERMAN
	.string "Und nimm diesen Stein. Er hat\n"
	.string "echte Donnerkraft!$"
#else
	.string "And take this stone. It has real\n"
	.string "thunder power!$"
#endif


VermilionGym_Text_LtSurgePostBattle:
#if GERMAN
	.string "Bob: Hey, Kleiner! Immer noch\n"
	.string "am Trainieren?\p"
	.string "Meine Pokémon und ich sind\n"
	.string "immer noch dabei!$"
#else
	.string "SURGE: Hey, kid! Still slugging\n"
	.string "and chugging away?\p"
	.string "My POKéMON and I are still at it!$"
#endif

VermilionGym_Text_SurgeRematch:
#if GERMAN
	.string "Bob: Also, du bist jetzt\n"
	.string "Kanto-Champion!\p"
	.string "Beeindruckend, Kleiner!\n"
	.string "Doch denk nicht, dass ich fertig bin!\p"
	.string "Wie wär’s mit einer Revanche?$"
#else
	.string "SURGE: So, you're now KANTO\n"
	.string "CHAMPION!\p"
	.string "Impressive work, kid!\n"
	.string "But don't think I'm done!\p"
	.string "How about we have a go again?$"
#endif

VermilionGym_Text_SurgeRematchDefeat:
#if GERMAN
	.string "Bob: Arrrgh! Du bist immer noch\n"
	.string "so stark!$"
#else
	.string "SURGE: Arrrgh! You're still just\n"
	.string "as strong!$"
#endif

VermilionGym_Text_GentlemanGregorySeen:
#if GERMAN
	.string "Du bist hier, um Major Bob zu besiegen?\n"
	.string "Da musst du erst an mir vorbei!$"
#else
	.string "You're here to defeat LT.SURGE?\p"
	.string "Not if I can help it!$"
#endif

VermilionGym_Text_GentlemanGregoryBeaten:
#if GERMAN
	.string "Ich habe versagt, Major Bob. Es tut mir\n"
	.string "leid!$"
#else
	.string "Sorry I failed you,\n"
	.string "LT.SURGE, sir!$"
#endif

VermilionGym_Text_GentlemanGregoryAfter:
#if GERMAN
	.string "Als ich noch in der Armee war,\n"
	.string "rettete Major Bob mein Leben.$"
#else
	.string "When I was still in the army,\n"
	.string "LT.SURGE saved my life.$"
#endif

VermilionGym_Text_GuitaristVincentSeen:
#if GERMAN
	.string "Major Bob erkannte mein Potenzial\n"
	.string "mit Elektro-Pokémon.\p"
	.string "Denkst du, du kannst mich besiegen?$"
#else
	.string "LT.SURGE recognized my potential\n"
	.string "with electric POKéMON.\p"
	.string "Think you can beat me?$"
#endif

VermilionGym_Text_GuitaristVincentBeaten:
#if GERMAN
	.string "Oh, wie schockierend!$"
#else
	.string "Ooh, how shocking!$"
#endif

VermilionGym_Text_GuitaristVincentAfter:
#if GERMAN
	.string "Wenn die Fallen der Arena funktioniert\n"
	.string "hätten, wärst du erledigt gewesen…$"
#else
	.string "Mom told me not to quit my\n"
	.string "day job, but what am I supposed\l"
	.string "to do when I'm not finding\l"
	.string "success there either?$"
#endif

VermilionGym_Text_JugglerHortonSeen:
#if GERMAN
	.string "Ich werde dich fertigmachen!\n"
	.string "Gleich versetzt’s dir einen Schlag!$"
#else
	.string "I'm going to take you down!\n"
	.string "Prepare to be shocked!$"
#endif

VermilionGym_Text_JugglerHortonBeaten:
#if GERMAN
	.string "Gwaaah! Ich wurde überrannt…$"
#else
	.string "Gwaaah! I was overpowered…$"
#endif

VermilionGym_Text_JugglerHortonAfter:
#if GERMAN
	.string "Machs dir nicht zu bequem,\n"
	.string "weil du mich besiegt hast…\p"
	.string "Major Bob ist wirklich hart.$"
#else
	.string "Don't get too comfortable about\n"
	.string "beating me…\p"
	.string "LT.SURGE is tough.$"
#endif

VermilionCity_Gym_Text_GymGuyAdvice::
#if GERMAN
	.string "Yo!\n"
	.string "Champ in spe!\p"
	.string "Major Bob hat einen Spitznamen.\p"
	.string "Die Leute nennen ihn den\n"
	.string "Blitz-Amerikaner!\p"
	.string "Er ist ein Experte für Elektro-\n"
	.string "Pokémon.\p"
	.string "Flug- und Wasser-Pokémon haben\n"
	.string "einen Nachteil gegen Elektro.\p"
	.string "Pass auch auf Paralyse auf.\p"
	.string "Major Bob ist sehr vorsichtig.\p"
	.string "Er hat sich eingeschlossen, also wird es\n"
	.string "nicht einfach sein, zu ihm zu gelangen.$"
#else
    .string "Yo!\n"
    .string "Champ in the making!\p"
    .string "LT. SURGE has a nickname.\p"
    .string "People refer to him as the\n"
    .string "Lightning American!\p"
    .string "He's an expert on electric\n"
    .string "POKéMON.\p"
    .string "FLYING/WATER-type POKéMON match\n"
    .string "poorly against the ELECTRIC type.\p"
    .string "Beware of paralysis, too.\p"
    .string "LT. SURGE is very cautious.\p"
    .string "He's locked himself in, so it won't\n"
    .string "be easy getting to him.$"
#endif

VermilionCity_Gym_Text_GymGuyPostVictory::
#if GERMAN
	.string "Was für ein aufregendes Match!\n"
	.string "Ich habe richtig mitgefiebert!$"
#else
	.string "Whew! That was an electrifying\n"
	.string "bout!\p"
	.string "It sure made me nervous.$"
#endif

VermilionCity_Gym_Text_GymStatue::
#if GERMAN
    .string "Pokémon-Arena von Orania City\n"
    .string "Leiter: Major Bob\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot$"
#else
    .string "VERMILION POKéMON GYM\n"
    .string "LEADER: LT. SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED$"
#endif


VermilionCity_Gym_Text_GymStatuePlayerWon::
#if GERMAN
    .string "Pokémon-Arena von Orania City\n"
    .string "Leiter: Major Bob\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot, {PLAYER}$"
#else
    .string "VERMILION POKéMON GYM\n"
    .string "LEADER: LT. SURGE\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED, {PLAYER}$"
#endif

VermilionCity_Gym_Text_NopeOnlyTrashHere::
#if GERMAN
	.string "Nein!\n"
	.string "Hier ist nur Müll.$"
#else
    .string "Nope!\n"
    .string "There's only trash here.$"
#endif

VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened::
#if GERMAN
	.string "Hey! Unter dem Müll ist ein\n"
	.string "Schalter! Drück ihn!\p"
	.string "Das erste Elektroschloss\n"
	.string "wurde geöffnet!$"
#else
    .string "Hey! There's a switch under the\n"
    .string "trash! Turn it on!\p"
    .string "The first electric lock opened!$"
#endif

VermilionCity_Gym_Text_SecondLockOpened::
#if GERMAN
	.string "Das zweite Elektroschloss wurde\n"
	.string "geöffnet! Die Tür ist auf!$"
#else
    .string "The second electric lock opened!\n"
    .string "The motorized door opened!$"
#endif

VermilionCity_Gym_Text_OnlyTrashLocksWereReset::
#if GERMAN
	.string "Hier ist nichts, bloß Abfall.\p"
	.string "Heh! Das Schloss wurde wieder\n"
	.string "verriegelt!$"
#else
    .string "Nope!\n"
    .string "There's only trash here.\p"
    .string "Hey!\n"
    .string "The electric locks were reset!$"
#endif

