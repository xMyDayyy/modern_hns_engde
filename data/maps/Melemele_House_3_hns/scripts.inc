Melemele_House_3_hns_MapScripts::
	.byte 0


Melemele_House3_Woman::
	lock
	faceplayer
	msgbox Melemele_House3_Woman_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Melemele_House3_Man::
	lock
	faceplayer
	msgbox Melemele_House3_Man_Text_0, MSGBOX_AUTOCLOSE
	release
	end


Melemele_House3_Woman_Text_0:
#if GERMAN
	.string "Das Inselleben hier ist so\nfriedlich!\p"
	.string "Und meine Enkel in Kanto sind nur\n"
	.string "eine kurze Bootsfahrt entfernt!$"
#else
	.string "Island life here is so peaceful!\p"
	.string "And it's nice that my grandkids are just\n"
	.string "a quick boat ride away in Kanto!$"
#endif

Melemele_House3_Man_Text_0:
#if GERMAN
	.string "Diese verflixten Touristen!\p"
	.string "Mein Makler meinte, hier sei es\n"
	.string "ruhig… Aber die Reise hierher ist\l"
	.string "wohl billiger als bis nach Alola.$"
#else
	.string "Dang tourists!\p"
	.string "My realtor said this place would be\n"
	.string "quiet… but I guess its cheaper to \l"
	.string "travel here than all the way to Alola.$"
#endif
