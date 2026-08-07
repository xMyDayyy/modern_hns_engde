GoldenrodCity_DepartmentStore_7F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodCity_DepartmentStore_7F_OnTransition
	.byte 0

GoldenrodCity_DepartmentStore_7F_OnTransition:
	call_if_set FLAG_DAY_POKEMON, GoldenrodCity_DepartmentStore_7F_EventScript_SetNight
	call_if_unset FLAG_DAY_POKEMON, GoldenrodCity_DepartmentStore_7F_EventScript_SetDay
	end

GoldenrodCity_DepartmentStore_7F_EventScript_SetNight::
	setmaplayoutindex LAYOUT_GOLDENROD_CITY_DEPARTMENT_STORE_7FNIGHT_HNS
	return

GoldenrodCity_DepartmentStore_7F_EventScript_SetDay::
	setmaplayoutindex LAYOUT_GOLDENROD_CITY_DEPARTMENT_STORE_7F_HNS
	return


GoldenrodDeptStore7_EventScript_PokefanF::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofPokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore7_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofPokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore7_EventScript_Twin::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofTwin, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore7_EventScript_Nerd::
	lock
	msgbox GoldenrodDeptStore_Text_RoofSuperNerdOhWow, MSGBOX_DEFAULT
	closemessage
	PLAYSE SE_PIN
	applymovement LOCALID_GOLDENROD_ROOF_NERD, Common_Movement_ExclamationMark
	delay 20
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofSuperNerdQuitBotheringMe, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_GOLDENROD_ROOF_NERD, DIR_SOUTH
	release
	end

GoldenrodDeptStore7_EventScript_Teacher::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofTeacher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore7_EventScript_Bugcatcher::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofBugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore_Text_RoofPokefanF:
#if GERMAN
	.string "Puh, bin ich müde.\p"
	.string "Manchmal gehe ich\n"
	.string "auf die Dachterrasse, um eine\l"
	.string "Einkaufspause einzulegen.$"
#else
    .string "Whew, I'm tired.\p"
    .string "I sometimes come up to the rooftop\n"
    .string "to take a break from shopping.$"
#endif

GoldenrodDeptStore_Text_RoofFisher:
#if GERMAN
	.string "Bitte? Wer sagt,\n"
	.string "dass das nichts für Erwachsene ist?\p"
	.string "Ich komme jeden Tag, um wirklich\n"
	.string "alle Puppen zu bekommen!$"
#else
    .string "Pardon? Who says an adult can't get\n"
    .string "into this?\p"
    .string "I'm going to be back every day to\n"
    .string "collect all the dolls!$"
#endif

GoldenrodDeptStore_Text_RoofTwin:
#if GERMAN
	.string "Oft gibt es hier Sonderangebote.$"
#else
    .string "They have bargain sales here every\n"
    .string "so often.$"
#endif

GoldenrodDeptStore_Text_RoofSuperNerdOhWow:
#if GERMAN
	.string "Oh$"
#else
    .string "Oh, wow!$"
#endif

GoldenrodDeptStore_Text_RoofSuperNerdQuitBotheringMe:
#if GERMAN
	.string "Hörst du auf, mich zu belästigen?$"
#else
    .string "Will you quit bothering me?$"
#endif

GoldenrodDeptStore_Text_RoofPokefanM:
#if GERMAN
	.string "Es gibt etwas, das ich unbedingt\n"
	.string "möchte, aber mir\l"
	.string "fehlt das nötige Kleingeld…\p"
	.string "Soll ich meine\n"
	.string "gesammelten Beeren verkaufen…$"
#else
    .string "There's something I really want,\n"
    .string "but I don't have the necessary cash…\p"
    .string "Maybe I'll sell off the BERRIES I've\n"
    .string "collected…$"
#endif

GoldenrodDeptStore_Text_RoofTeacher:
#if GERMAN
	.string "Oh, alles ist so billig!\p"
	.string "Ich habe soviel\n"
	.string "gekauft, dass mein Beutel voll ist!$"
#else
    .string "Oh, everything is so cheap!\p"
    .string "I bought so much, my PACK's crammed!$"
#endif

GoldenrodDeptStore_Text_RoofBugCatcher:
#if GERMAN
	.string "Meine Pokémon\n"
	.string "sind immer paralysiert oder vergiftet,\l"
	.string "wenn es darauf ankommt…\p"
	.string "Daher möchte ich Hyperheiler kaufen.\p"
	.string "Hoffentlich gibt es noch welche?$"
#else
    .string "My POKéMON always get paralyzed or\n"
    .string "poisoned when the chips are down…\p"
    .string "So I came to buy some FULL HEAL.\p"
    .string "I wonder if there's any left?$"
#endif
