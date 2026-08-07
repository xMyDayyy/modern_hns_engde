ReceptionGate_hns_MapScripts::
	.byte 0

ReceptionGate_EventScript_Janine::
    lock
    faceplayer
    msgbox ReceptionGate_Text_Janine, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_ROUTE22_JANINE
    removeobject LOCALID_INDIGOJUNCTION_JANINE
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_JANINE
    release
    end

ReceptionGate_Text_Janine:
#if GERMAN
	.string "Janina: Ich bin auf dem Weg zu\n"
	.string "meinem Vater, um ihm das Mittagessen\l"
	.string "zu bringen.\p"
	.string "Die Top Vier hat keine Zeit für\n"
	.string "Erholung, Tag oder Nacht.\p"
	.string "Es ist wirklich harte Arbeit, weißt\n"
	.string "du? \p"
	.string "Wenn du bereit für einen weiteren\n"
	.string "Kampf bist, ich bin später im Dojo.$"
#else
    .string "JANINE: I'm on the way to my dad's\n"
    .string "house to give him his lunch.\p"
    .string "The ELITE FOUR has no time to rest\n"
    .string "day or night. It's such hard work,\l"
    .string "you know?\p"
    .string "If you're ready for another battle,\n"
    .string "I'll be at the DOJO later.$"
#endif


ReceptionGate_EventScript_Officer::
    msgbox VictoryRoadGate_Text_EightBadges, MSGBOX_NPC
    end

ReceptionGate_Trigger::
    lock
    playse SE_PIN
    applymovement LOCALID_INDIGOJUNCTION_POLICEMAN, Common_Movement_ExclamationMark
    delay 20
    goto_if_lt VAR_ECRUTEAK_CITY_THEATER, 8, ReceptionGate_EventScript_Kimono
    msgbox VictoryRoadGate_Text_Officer, MSGBOX_DEFAULT
    goto_if_unset FLAG_BADGE08_GET, ReceptionGate_EventScript_NotEnough
    msgbox VictoryRoadGate_Text_EightBadges, MSGBOX_DEFAULT
    closemessage
    setvar VAR_ROUTE27_STATE, 2
    release
    end

ReceptionGate_EventScript_Kimono::
    msgbox VictoryRoadGate_Text_Kimono, MSGBOX_DEFAULT
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
    waitmovement 0
    release
    end

ReceptionGate_EventScript_NotEnough::
    msgbox VictoryRoadGate_Text_NotEnoughBadges, MSGBOX_DEFAULT
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
    waitmovement 0
    release
    end

ReceptionGate_EventScript_SilverGuard::
    msgbox VictoryRoadGate_Text_LeftBlackBelt, MSGBOX_NPC
    end
ReceptionGate_EventScript_KantoGuard::
    msgbox VictoryRoadGate_Text_RightBlackBelt, MSGBOX_NPC
    end

VictoryRoadGate_Text_Officer:
#if GERMAN
	.string "Nur Trainer, die\n"
	.string "sich als würdig erwiesen haben, dürfen\l"
	.string "eintreten.$"
#else
    .string "Only trainers who have proven\n"
    .string "themselves may pass.$"
#endif

VictoryRoadGate_Text_Kimono:
#if GERMAN
	.string "Entschuldige, Kleiner, dieser Weg ist\n"
	.string "geschlossen,\l"
	.string "bis jemand sich des\p"
	.string "legendären Pokémon annimmt…$"
#else
    .string "Sorry kid, this way is closed until\n"
    .string "someone deals with that LEGENDARY\l"
    .string "POKéMON...$"
#endif

VictoryRoadGate_Text_NotEnoughBadges:
#if GERMAN
	.string "Du besitzt nicht alle Orden von Johto.\p"
	.string "Tut mir leid. Ich\n"
	.string "darf dich nicht passieren lassen.$"
#else
    .string "You don't have all the GYM BADGES\n"
    .string "of JOHTO.\p"
    .string "I'm sorry, but I can't let you go\n"
    .string "through.$"
#endif

VictoryRoadGate_Text_EightBadges:
#if GERMAN
	.string "Oh! Alle acht Orden von Johto!\p"
	.string "Geh bitte weiter!$"
#else
    .string "Oh! The eight BADGES of JOHTO!\p"
    .string "Please, go right on through!$"
#endif

VictoryRoadGate_Text_LeftBlackBelt:
#if GERMAN
	.string "Dieser Weg führt zum Silberberg.\p"
	.string "Dir werden be-\n"
	.string "ängstigend starke Pokémon begegnen.$"
#else
    .string "This way leads to MT.SILVER.\p"
    .string "You'll see scary-strong POKéMON out\n"
    .string "there.$"
#endif

VictoryRoadGate_Text_RightBlackBelt:
#if GERMAN
	.string "Du bist auf dem\n"
	.string "Weg zur Pokémon Liga, nicht wahr?\p"
	.string "Die Top Vier sind so stark, dass es\n"
	.string "einem Angst macht. Sie erwarten dich!$"
#else
    .string "Off to the POKéMON LEAGUE, are you?\p"
    .string "The ELITE FOUR are so strong it's\n"
    .string "scary, and they're ready for you!$"
#endif
