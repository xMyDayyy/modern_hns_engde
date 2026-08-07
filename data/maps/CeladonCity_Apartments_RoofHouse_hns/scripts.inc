CeladonCity_Apartments_RoofHouse_hns_MapScripts::
	.byte 0

CeladonCity_Apartments_RoofHouse_EventScript_BlackBelt::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM_SLEEP_TALK, CeladonCity_Apartments_RoofHouse_EventScript_BlackBeltAfter
	msgbox CeladonMansionRoofHouse_Text_PharmacistIntro, MSGBOX_DEFAULT
	goto_if_set FLAG_NIGHT_POKEMON, CeladonCity_Apartments_RoofHouse_EventScript_BlackBeltRefused
	msgbox CeladonMansionRoofHouse_Text_PharmacistStory, MSGBOX_NPC
	giveitem ITEM_TM_SLEEP_TALK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_TM_SLEEP_TALK
	msgbox CeladonMansionRoofHouse_Text_PharmacistCurse, MSGBOX_NPC
	closemessage
	release
	end

CeladonCity_Apartments_RoofHouse_EventScript_BlackBeltRefused::
	msgbox CeladonMansionRoofHouse_Text_PharmacistNotNight, MSGBOX_NPC
	closemessage
	release
	end

CeladonCity_Apartments_RoofHouse_EventScript_BlackBeltAfter::
	msgbox CeladonMansionRoofHouse_Text_PharmacistCurse, MSGBOX_NPC
	release
	end

CeladonMansionRoofHouse_Text_PharmacistIntro:
#if GERMAN
	.string "Ich kenne eine gruuuselige Geschichte,\n"
	.string "die ich dir erzählen will…$"
#else
	.string "Let me recount a terrifying tale…$"
#endif

CeladonMansionRoofHouse_Text_PharmacistNotNight:
#if GERMAN
	.string "…Aber halt! Solange es noch hell ist,\n"
	.string "hält sich der Gruselfaktor in Grenzen.\l"
	.string "So macht das einfach keinen Spaß.\p"
	.string "Komm nach Sonnenuntergang wieder!$"
#else
	.string "Then again, it's not as scary\n"
	.string "while it's still light outside.\p"
	.string "Come back after sunset, OK?$"
#endif

CeladonMansionRoofHouse_Text_PharmacistStory:
#if GERMAN
	.string "Es war einmal ein Junge, der gerade ein\n"
	.string "brandneues Fahrrad bekommen hatte…\p"
	.string "Er war so froh darüber, dass er es\n"
	.string "sofort mit auf eine Spritztour nahm…\p"
	.string "Doch bevor er sich versah, hatte die\n"
	.string "Nacht den Tag verdrängt und ihren\l"
	.string "pechschwarzen Mantel um ihn gelegt…\p"
	.string "Doch da! Auf einmal verlor sein Fahrrad\n"
	.string "an Geschwindigkeit, und es wurde immer\l"
	.string "schwieriger, in die Pedale zu treten.\p"
	.string "Es war fast so, als würde sein Fahrrad\n"
	.string "von einer unbekannten Macht rückwärts\l"
	.string "über den Asphalt geschleift.\p"
	.string "Er geriet in Panik! Versuchte dieses\n"
	.string "dämonische Fahrrad etwa, ihn mit sich\l"
	.string "ins Reich der Finsternis zu schleppen?\p"
	.string "… … …\p"
	.string "Aber kreeeiiisch!\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "Endlich merkte er, dass er den Radweg\n"
	.string "bergauf gefahren war! Das war zu viel!\p"
	.string "…Ende!\n"
	.string "Verstehst du die Pointe?\p"
	.string "Danke fürs Zuhören! Als Belohnung habe\n"
	.string "ich hier einen Bannsticker für dich!$"
#else
	.string "Once upon a time, there was a\n"
	.string "little boy who was given a new\l"
	.string "BICYCLE…\p"
	.string "He wanted to try it right away…\p"
	.string "He was having so much fun that\n"
	.string "he didn't notice the sun had set…\p"
	.string "While riding home in the pitch-\n"
	.string "black night, the bike suddenly\l"
	.string "slowed!\p"
	.string "The pedals became heavy!\p"
	.string "When he stopped pedaling, the\n"
	.string "bike began slipping backwards!\p"
	.string "It was as if the bike were cursed\n"
	.string "and trying to drag him into\l"
	.string "oblivion!\p"
	.string "…\p"
	.string "…\p"
	.string "SHRIEEEEK!\p"
	.string "The boy had been riding uphill on\n"
	.string "CYCLING ROAD!\p"
	.string "…\n"
	.string "Ba-dum ba-dum!\p"
	.string "For listening so patiently, you\n"
	.string "may take this--TM82!$"
#endif

CeladonMansionRoofHouse_Text_PharmacistCurse:
#if GERMAN
	.string "TM82 enthält Schlafrede.\p"
	.string "Damit setzt dein Pokémon auch im\n"
	.string "Schlaf noch Attacken ein.\p"
	.string "Aber viel Glück beim Einschlafen nach\n"
	.string "dieser furchterregenden Geschichte!$"
#else
	.string "TM82 is SLEEP TALK.\p"
	.string "It will allow your POKéMON to use\n"
	.string "a random move while asleep.\p"
	.string "But good luck sleeping after that\n"
	.string "terrifying tale!$"
#endif

