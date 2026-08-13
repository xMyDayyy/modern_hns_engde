LakeOfRage_House2_hns_MapScripts::
	.byte 0

LakeOfRage_House2_EventScript_Fisher::
	lock
	faceplayer
	goto_if_ge VAR_MAHOGANY_TOWN_STATE, 14, LakeOfRage_House2_EventScript_FisherAfterRockets
	goto_if_eq VAR_LAKE_OF_RAGE_FISHERMAN, 0, LakeOfRage_House2_EventScript_FisherFirstMeeting
	msgbox LakeOfRage_House2_Text_MenInBlack, MSGBOX_DEFAULT
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherFirstMeeting::
	msgbox LakeOfRage_House2_Text_LakeHistory, MSGBOX_DEFAULT
	msgbox LakeOfRage_House2_Text_MenInBlack, MSGBOX_DEFAULT
	setvar VAR_LAKE_OF_RAGE_FISHERMAN, 1
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherAfterRockets::
	goto_if_eq VAR_LAKE_OF_RAGE_FISHERMAN, 2, LakeOfRage_House2_EventScript_FisherAnotherMagikarp
	msgbox LakeOfRage_House2_Text_WorldsLargest, MSGBOX_DEFAULT
	msgbox LakeOfRage_House2_Text_ForMe, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_House2_EventScript_FisherNo
	getpartysize
	goto_if_eq VAR_RESULT, 1, LakeOfRage_House2_EventScript_LastMon
	special ChoosePartyMon
	waitstate
	lock
	showmoneybox 0, 0
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LakeOfRage_House2_EventScript_FisherNoMoneyBox
	removegenericmon SPECIES_MAGIKARP
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_House2_EventScript_FisherNotMagikarp
	goto_if_eq VAR_RESULT, MON_SATISFACTORY, LakeOfRage_House2_EventScript_FisherSatisfied
	goto_if_eq VAR_RESULT, MON_UNSATISFACTORY, LakeOfRage_House2_EventScript_FisherSmallMagikarp

LakeOfRage_House2_EventScript_FisherNo::
	msgbox LakeOfRage_House2_Text_Refused, MSGBOX_DEFAULT
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherNoMoneyBox::
	msgbox LakeOfRage_House2_Text_Refused, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherNotMagikarp::
	msgbox LakeOfRage_House2_Text_NotMagikarp, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherSmallMagikarp::
	setvar VAR_LAKE_OF_RAGE_FISHERMAN, 2
	msgbox LakeOfRage_House2_Text_TooShort, MSGBOX_DEFAULT
	addmoney 2000
	updatemoneybox
	playse SE_SHOP
	waitse
	hidemoneybox
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherAnotherMagikarp::
	msgbox LakeOfRage_House2_Text_ForMe, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_House2_EventScript_FisherNo
	getpartysize
	goto_if_eq VAR_RESULT, 1, LakeOfRage_House2_EventScript_LastMon
	special ChoosePartyMon
	waitstate
	lock
	showmoneybox 0, 0
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LakeOfRage_House2_EventScript_FisherNoMoneyBox
	removegenericmon SPECIES_MAGIKARP
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_House2_EventScript_FisherNotMagikarp
	goto_if_eq VAR_RESULT, MON_SATISFACTORY, LakeOfRage_House2_EventScript_FisherSatisfied
	goto_if_eq VAR_RESULT, MON_UNSATISFACTORY, LakeOfRage_House2_EventScript_FisherSmallMagikarp

LakeOfRage_House2_EventScript_LastMon::
	msgbox LakeOfRage_House2_Text_LastMon, MSGBOX_DEFAULT
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherSatisfied::
	setvar VAR_LAKE_OF_RAGE_FISHERMAN, 2
	msgbox LakeOfRage_House2_Text_BigPayout, MSGBOX_DEFAULT
	addmoney 100000
	updatemoneybox
	playse SE_SHOP
	waitse
	hidemoneybox
	closemessage
	release
	end

LakeOfRage_House2_Text_LakeHistory:
#if GERMAN
	.string "Der See der Wut ist eigentlich\n"
	.string "ein Krater, den ein wütendes\l"
	.string "Garados verursacht hat.\p"
	.string "Der Krater füllte sich mit Regen-\n"
	.string "wasser, so entstand der See.\p"
	.string "So erzählt es der Ur-Ur-Großvater\n"
	.string "meines Großvaters.\p"
	.string "Früher konnte man dort lebhafte\n"
	.string "Karpador fangen, aber…\l"
	.string "Ich verstehe nicht, was passiert.$"
#else
    .string "LAKE OF RAGE is actually a crater\n"
    .string "made by rampaging GYARADOS.\p"
    .string "The crater filled up with rainwater\n"
    .string "and the LAKE was formed.\p"
    .string "That's the story passed on from my\n"
    .string "Grandpa's great-great-grandpa.\p"
    .string "It used to be that you could catch\n"
    .string "lively MAGIKARP there, but…\p"
    .string "I don't understand what's happening.$"
#endif

LakeOfRage_House2_Text_MenInBlack:
#if GERMAN
	.string "Der See ist seit der Ankunft der\n"
	.string "Männer in Schwarz nicht mehr normal.$"
#else
    .string "The LAKE hasn't been normal since\n"
    .string "those men wearing black arrived.$"
#endif

LakeOfRage_House2_Text_LastMon:
#if GERMAN
	.string "Lass mich dein letztes Pokémon\n"
	.string "nicht nehmen!$"
#else
    .string "Well don't let me take your last\n"
    .string "POKéMON!$"
#endif

LakeOfRage_House2_Text_WorldsLargest:
#if GERMAN
	.string "Der See der Wut ist wieder normal.\p"
	.string "Die Karpador sind zurück.\p"
	.string "Vielleicht erfülle ich mir meinen\n"
	.string "Traum, das größte Karpador der\l"
	.string "Welt zu besitzen.\p"
	.string "Tatsächlich… Ich zahle dir ¥2000\n"
	.string "für jedes Karpador und ¥100.000\l"
	.string "für ein Riesen-Karpador!$"
#else
    .string "LAKE OF RAGE is back to normal.\p"
    .string "The MAGIKARP have returned.\p"
    .string "I may yet realize my dream of own-\n"
    .string "ing the world's largest MAGIKARP.\p"
    .string "In fact... I'll pay you ¥2000 for\n"
	.string "every MAGIKARP you give me, and\l"
	.string "¥100,000 for a HUGE MAGIKARP!$"
#endif

LakeOfRage_House2_Text_ForMe:
#if GERMAN
	.string "Also… Hast du einen Karpador\n"
	.string "für mich?$"
#else
	.string "So... Do you have a MAGIKARP for\n"
	.string "me?$"
#endif

LakeOfRage_House2_Text_HaveMagikarp:
#if GERMAN
	.string "Ah, du hast ein Karpador! Dann wollen\n"
	.string "wir doch mal sehen, wie groß es ist!$"
#else
    .string "Ah, you have a MAGIKARP! Let's\n"
    .string "see how big that baby is.$"
#endif

LakeOfRage_House2_Text_BigPayout:
#if GERMAN
	.string "Wow! Der ist großartig!\p"
	.string "Hut ab vor dir!\p"
	.string "Hier ist eine kleine Belohnung\n"
	.string "für deine Mühe.$"
#else
    .string "Wow! This one is outstanding!\p"
    .string "I tip my hat to you!\p"
    .string "Here's a little something for your\n"
	.string "trouble.$"
#endif

LakeOfRage_House2_Text_Bonus:
#if GERMAN
	.string "So! Aber vergiss nicht, dass es hier vor\n"
	.string "allem um deinen Rekord geht! Sieh das\l"
	.string "einfach als kleinen Bonus an.$"
#else
    .string "The record is the important thing.\p"
    .string "Think of that as a bonus!$"
#endif

LakeOfRage_House2_Text_TooShort:
#if GERMAN
	.string "Wow! Der ist großartig!\p"
	.string "…Aber ich habe schon größere\n"
	.string "gesehen.\p"
	.string "Ich schätze, er ist trotzdem\n"
	.string "etwas wert.$"
#else
    .string "Wow! This one is outstanding!\p"
    .string "…I wish I could say that, but I've\n"
    .string "seen a bigger one before.\p"
    .string "I guess it's worth something.$"
#endif

LakeOfRage_House2_Text_NotMagikarp:
#if GERMAN
	.string "Was? Das ist kein Karpador!$"
#else
    .string "What? That's not a MAGIKARP!$"
#endif

LakeOfRage_House2_Text_Refused:
#if GERMAN
	.string "Oh… du hast also keins, das es wert\n"
	.string "wäre, mir zu zeigen? Na ja, vielleicht\l"
	.string "beim nächsten Mal.$"
#else
    .string "Oh… So you didn't get one good\n"
    .string "enough to show me? Maybe next time.$"
#endif
