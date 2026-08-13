Melemele_House_4_hns_MapScripts::
	.byte 0


Melemele_House4_Man::
	lock
	faceplayer
	msgbox Melemele_House4_Man_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Melemele_House4_Woman::
	lock
	faceplayer
	msgbox Melemele_House4_Woman_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Melemele_House4_Man_Text_0:
#if GERMAN
	.string "Wir machen Urlaub auf den Alola-\nInseln!\p"
	.string "Genau wie die Alola-Region, nur\n"
	.string "näher an Kanto!\p"
	.string "Ich habe so viel Reisekosten\ngespart!$"
#else
	.string "We're vacationing on the Alola Isles!\p"
	.string "It's just like the Alola Region,\n"
	.string "but closer to Kanto!\p"
	.string "I saved so much on travel expenses!$"
#endif

Melemele_House4_Woman_Text_0:
#if GERMAN
	.string "Mein Freund sagte, wir fahren nach\n"
	.string "Alola…\p"
	.string "Ich dachte, er meint die Alola-Region,\n"
	.string "nicht die kleinen Inseln vor der Küste\l"
	.string "von Kanto.$"
#else
	.string "My boyfriend told me we were going to\n"
	.string "Alola…\p"
	.string "I had assumed it would be the Alola\n"
	.string "Region, not the small isles off the\l"
	.string "coast of Kanto.$"
#endif
