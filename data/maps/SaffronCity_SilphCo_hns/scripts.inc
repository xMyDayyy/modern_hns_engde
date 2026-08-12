SaffronCity_SilphCo_hns_MapScripts::
	.byte 0

SaffronCity_SilphCo_EventScript_Steven::
	lock
	msgbox SaffronCity_SilphCo_Text_Steven1, MSGBOX_DEFAULT
	closemessage
	delay 20
	faceplayer
	delay 20
	playse SE_PIN
	applymovement LOCALID_SILPHCO_STEVEN, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_SILPHCO_STEVEN
SaffronCity_SilphCo_EventScript_StevenChooseStone::
	message SaffronCity_SilphCo_Text_Steven2
	waitmessage
	multichoice 20, 0, MULTI_HOENN_STARTERS, FALSE
	switch VAR_RESULT
	case 0, SaffronCity_SilphCo_EventScript_TreeckoChosen
	case 1, SaffronCity_SilphCo_EventScript_TorchicChosen
	case 2, SaffronCity_SilphCo_EventScript_MudkipChosen
	case MULTI_B_PRESSED, SaffronCity_SilphCo_EventScript_Refused

SaffronCity_SilphCo_EventScript_Refused::
	msgbox SaffronCity_SilphCo_Text_Refused, MSGBOX_DEFAULT
	turnobject LOCALID_SILPHCO_STEVEN, DIR_NORTH
	closemessage
	release
	end

SaffronCity_SilphCo_Text_Refused:
#if GERMAN
	.string "Wie?$"
#else
	.string "Oh...$"
#endif

SaffronCity_SilphCo_EventScript_TreeckoChosen::
	closemessage
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TREECKO
	bufferspeciesname STR_VAR_1, SPECIES_TREECKO
	msgbox SaffronCity_SilphCo_Text_Steven3, MSGBOX_DEFAULT
	givemon SPECIES_TREECKO, 5
	call Common_EventScript_GiftMon
	goto SaffronCity_SilphCo_EventScript_AfterStarterGiven
SaffronCity_SilphCo_EventScript_TorchicChosen::
	closemessage
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TORCHIC
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
	msgbox SaffronCity_SilphCo_Text_Steven3, MSGBOX_DEFAULT
	givemon SPECIES_TORCHIC, 5
	call Common_EventScript_GiftMon
	goto SaffronCity_SilphCo_EventScript_AfterStarterGiven
SaffronCity_SilphCo_EventScript_MudkipChosen::
	closemessage
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MUDKIP
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
	msgbox SaffronCity_SilphCo_Text_Steven3, MSGBOX_DEFAULT
	givemon SPECIES_MUDKIP, 5
	call Common_EventScript_GiftMon
	goto SaffronCity_SilphCo_EventScript_AfterStarterGiven

SaffronCity_SilphCo_EventScript_AfterStarterGiven::
	msgbox SaffronCity_SilphCo_Text_Steven4, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, SaffronCity_SilphCo_EventScript_PlayerMove
	applymovement LOCALID_SILPHCO_STEVEN, SaffronCity_SilphCo_Movement_StevenLeave
	waitmovement 0
	playse SE_EXIT
	setflag FLAG_GOT_HOENN_STARTER
	removeobject LOCALID_SILPHCO_STEVEN
	release
	end

SaffronCity_SilphCo_EventScript_PlayerMove:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	return

SaffronCity_SilphCo_Movement_StevenLeave:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end


SaffronCity_SilphCo_Text_Steven1:
#if GERMAN
	.string "Ja, hallo?\n"
	.string "Oh, äh, nein…\l"
	.string "Nein, die Verbindung ist bloß…\p"
	.string "Der Rest hängt von meinem Vater ab…\p"
	.string "Ja, in Ordnung…\n"
	.string "Ja, ich komme jetzt zurück. Bis gleich!$"
#else
	.string "Hello...\n"
	.string "You're breaking up...\l"
	.string "I think it depends on my dad.\l"
	.string "I see...\n"
	.string "I'll be on my way. See you soon.$"
#endif

SaffronCity_SilphCo_Text_Steven2:
	.string "Troy: Oh, ist das nicht ein Pokédex?\n"
	.string "Verstehe, dann bist du also auch\l"
	.string "auf der Suche nach Pokémon!\p"
	.string "Hm, in Ordnung… dann erlaube mir, dir\n"
	.string "ein wenig unter die Arme zu greifen!\p"
	.string "Stelle dir jetzt bitte mal einen wirklich\n"
	.string "hübschen Stein vor. Welche Farbe\l"
	.string "hat er in deinem Kopf?$"

SaffronCity_SilphCo_Text_Steven3:
#if GERMAN
	.string "Richtig gewählt! Ich gebe dir\n"
	.string "{STR_VAR_1}!$"
#else
	.string "You chose correctly! I'll give you\n"
	.string "{STR_VAR_1}!$"
#endif

SaffronCity_SilphCo_Text_Steven4:
	.string "Troy: Trainiere es mit viel Liebe!\n"
	.string "Du könntest mir keine größere Freude\l"
	.string "machen, als es deinen Fähigkeiten\l"
	.string "entsprechend zu trainieren!$"

SaffronCity_SilphCo_EventScript_Receptionist::
	msgbox SilphCo_Text_Receptionist, MSGBOX_NPC
	end
SaffronCity_SilphCo_EventScript_Officer::
	goto_if_set FLAG_GOT_UP_GRADE, SaffronCity_SilphCo_EventScript_OfficerAfter
	msgbox SilphCo_Text_Officer, MSGBOX_NPC
	giveitem ITEM_UP_GRADE
	setflag FLAG_GOT_UP_GRADE
SaffronCity_SilphCo_EventScript_OfficerAfter::
	msgbox SilphCo_Text_Officer_GotUpGrade, MSGBOX_NPC
	end

SaffronCity_SilphCo_EventScript_Sign1::
	msgbox SilphCo_Text_Sign1, MSGBOX_SIGN
	end

SaffronCity_SilphCo_EventScript_Sign2::
	msgbox SilphCo_Text_Sign2, MSGBOX_SIGN
	end

SilphCo_Text_Sign1:
#if GERMAN
	.string "Silph Co.\n"
	.string "EG Rezeption.$"
#else
	.string "SILPH CO.\n"
	.string "1F RECEPTION.$"
#endif

SilphCo_Text_Sign2:
#if GERMAN
	.string "Silph Co.\n"
	.string "Fahrstuhl außer Betrieb.$"
#else
	.string "SILPH CO.\n"
	.string "ELEVATOR OUT OF SERVICE$"
#endif

SilphCo_Text_Receptionist:
#if GERMAN
	.string "Willkommen im Bürogebäude\n"
	.string "der Silph Co.!$"
#else
	.string "Welcome. This is SILPH CO.'s HEAD\n"
	.string "OFFICE BUILDING.$"
#endif

SilphCo_Text_Officer:
#if GERMAN
	.string "Nur das Personal\n"
	.string "hat Zutritt zu den oberen Geschossen.\p"
	.string "Aber, da du nun schon mal da bist,\n"
	.string "gebe ich dir dieses hübsche Souvenir.$"
#else
	.string "Only employees are permitted to\n"
	.string "go upstairs.\p"
	.string "But since you came such a long\n"
	.string "way,\p"
	.string "have this neat little souvenir.$"
#endif

SilphCo_Text_Officer_GotUpGrade:
#if GERMAN
	.string "Das ist das neueste Produkt\n"
	.string "der Silph Co.! Das gibt es noch\l"
	.string "nirgendwo zu kaufen!$"
#else
	.string "It's SILPH CO.'s latest product.\p"
	.string "It's not for sale anywhere yet.$"
#endif
