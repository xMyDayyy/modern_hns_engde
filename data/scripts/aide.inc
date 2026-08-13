Aide_EventScript_HaventCaughtEnough::
	msgbox Aide_Text_HaventCaughtEnoughMonsForItem
	release
	end

Aide_EventScript_NoRoomForItem::
	msgbox Aide_Text_DontHaveAnyRoomForItem
	release
	end

Aide_EventScript_DeclineCheckMons::
	msgbox Aide_Text_GetEnoughMonsComeBackForItem
	release
	end

Aide_Text_HaventCaughtEnoughMonsForItem::
#if GERMAN
	.string "Mal sehen…\n"
	.string "Oh! Du hast erst {STR_VAR_3}\l"
	.string "Pokémon-Arten gefangen!\p"
	.string "Für das {STR_VAR_2} brauchst du {STR_VAR_1}\n"
	.string "Arten.$"
#else
	.string "Let's see…\n"
	.string "Uh-oh! You have caught only\l"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
	.string "You need {STR_VAR_1} kinds\n"
	.string "if you want the {STR_VAR_2}.$"
#endif

Aide_Text_GetEnoughMonsComeBackForItem::
#if GERMAN
	.string "…Oh, verstehe.\p"
	.string "Komm wieder, wenn du {STR_VAR_1} Arten\n"
	.string "gefangen hast.\p"
	.string "Dann erhältst du das {STR_VAR_2}.$"
#else
	.string "…Oh. I see.\p"
	.string "When you get {STR_VAR_1} kinds of POKéMON,\n"
	.string "come back for the {STR_VAR_2}.$"
#endif

Aide_Text_DontHaveAnyRoomForItem::
#if GERMAN
	.string "Oh! Du hast keinen Platz für das\n"
	.string "{STR_VAR_2}.$"
#else
	.string "Oh! I see you don't have any\n"
	.string "room for the {STR_VAR_2}.$"
#endif
