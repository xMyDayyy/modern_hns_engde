	.align 2
gText_ConfirmSave::
#if GERMAN
	.string "Möchtest du das Spiel speichern?$"
#else
	.string "Would you like to save the game?$"
#endif

gText_AlreadySavedFile::
#if GERMAN
	.string "Es gibt bereits einen Spielstand.\n"
	.string "Spielstand überschreiben?$"
#else
	.string "There is already a saved file.\n"
	.string "Is it okay to overwrite it?$"
#endif

gText_SavingDontTurnOff::
#if GERMAN
	.string "Speichern…\n"
	.string "Bitte das Gerät nicht ausschalten.$"
#else
	.string "SAVING…\n"
	.string "DON'T TURN OFF THE POWER.$"
#endif

gText_PlayerSavedGame::
#if GERMAN
	.string "{PLAYER} hat das Spiel gespeichert.$"
#else
	.string "{PLAYER} saved the game.$"
#endif

gText_DifferentSaveFile::
#if GERMAN
	.string "Achtung!\p"
	.string "Es gibt bereits einen Spielstand.\p"
	.string "Wenn jetzt gesichert wird, geht der\n"
	.string "andere Spielstand mit allen Items und\l"
	.string "Pokémon für immer verloren.\l"
	.string "Bist du sicher, dass du sichern und den\l"
	.string "anderen Spielstand überschreiben\l"
	.string "möchtest?$"
#else
	.string "WARNING!\p"
	.string "There is a different game file that\n"
	.string "is already saved.\p"
	.string "If you save now, the other file's\n"
	.string "adventure, including items and\l"
	.string "POKéMON, will be entirely lost.\p"
	.string "Are you sure you want to save now\n"
	.string "and overwrite the other save file?$"
#endif

gText_SaveError::
#if GERMAN
	.string "Fehler beim Speichern!\p"
	.string "Bitte Backup Memory austauschen.$"
#else
	.string "Save error.\p"
	.string "Please exchange the\n"
	.string "backup memory.$"
#endif

gText_SavingDontTurnOffPower::
#if GERMAN
	.string "Speichern…\n"
	.string "Bitte das Gerät nicht ausschalten.$"
#else
	.string "SAVING…\n"
	.string "DON'T TURN OFF THE POWER.$"
#endif
