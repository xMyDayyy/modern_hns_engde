NewSinjoh_House2_hns_MapScripts::
	.byte 0


NewSinjoh_House2_EventScripts_DeskLady::
    lock
	msgbox NewSinjoh_House2_DeskLady_Text MSGBOX_DEFAULT
	release
	end

NewSinjoh_House2_DeskLady_Text::
#if GERMAN
	.string "Hallo, Kleines…\p"
	.string "Willkommen in Neu-Sinjohs…\n"
	.string "Nun, man könnte es eine Bibliothek\l"
	.string "nennen.\p"
	.string "Eigentlich bewahren wir hier alle\n"
	.string "Aufzeichnungen zur Geschichte des\l"
	.string "Dorfes auf, dazu sämtliche Literatur,\l"
	.string "die wir aus anderen Regionen beziehen…$"
#else
    .string "Hello little one..\p"
	.string "Welcome to New Sinjoh's...\n"
	.string "Well, you might call it a library.\p"
	.string "Really, this is where we keep all\n"
	.string "the records of our town's history,\l"
	.string "as well as any literature we\l"
	.string "import from other regions..$"
#endif

NewSinjoh_House2_EventScript_Torkoal::
	lock
	faceplayer
	playmoncry SPECIES_TORKOAL, 0
	msgbox NewSinjoh_Hosue2_Text_CryTorkoal, MSGBOX_DEFAULT
	waitmoncry
    closemessage
	release
	end

NewSinjoh_Hosue2_Text_CryTorkoal:
	.string "Tooor?$"

NewSinjoh_House2_EventScript_BookShelf_North::
    lock
	msgbox NewSinjoh_House2_Text_Bookshelf_North MSGBOX_DEFAULT
	release
	end

NewSinjoh_House2_Text_Bookshelf_North:
#if GERMAN
	.string "Vollgestopft mit uralten,\n"
	.string "ledergebundenen Büchern.\p"
	.string "Die Sprache ist nicht zu erkennen.$"
#else
    .string "It's crammed full of ancient\n"
	.string "leather-bound books.\p"
	.string "The language is unrecognizeable.$"
#endif

NewSinjoh_House2_EventScript_BookShelf_South::
    lock
	msgbox NewSinjoh_House2_Text_Bookshelf_South MSGBOX_DEFAULT
	release
	end

NewSinjoh_House2_Text_Bookshelf_South:
#if GERMAN
	.string "Vollgestopft mit Pokémon-Büchern.\p"
	.string "Diese wirken neuer und vertrauter.$"
#else
    .string "It's crammed full of POKéMON\n"
	.string "books.\p"
	.string "These look newer and more familiar.$"
#endif
