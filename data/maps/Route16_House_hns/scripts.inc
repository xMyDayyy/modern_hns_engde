Route16_House_hns_MapScripts::
	.byte 0

Route16FuchsiaSpeechHouse_EventScript_SuperNerd::
	msgbox Route16FuchsiaSpeechHouse_Text_SuperNerd, MSGBOX_NPC
	end

Route16FuchsiaSpeechHouse_Text_SuperNerd:
#if GERMAN
	.string "Hier wohnte früher eine\n"
	.string "berühmte Persönlichkeit.$"
#else
	.string "A celebrity used to live here.$"
#endif
Route16FuchsiaSpeechHouse_Text_SuperNerdOld:
	.string "Wenn du immer weiter den\n"
	.string "Radweg hinabbraust,\l"
	.string "kommst du nach Fuchsania City.$"
