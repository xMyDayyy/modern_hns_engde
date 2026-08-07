LavenderTown_RadioStation_hns_MapScripts::
	.byte 0

LavenderTown_RadioStation_EventScript_Officer::
	msgbox LavenderTown_RadioStation_Text_Officer, MSGBOX_NPC
	end

LavenderTown_RadioStation_EventScript_Receptionist::
	msgbox LavenderTown_RadioStation_Text_Receptionist, MSGBOX_NPC
	end

LavenderTown_RadioStation_EventScript_SuperNerd::
	msgbox LavenderTown_RadioStation_Text_SuperNerd1, MSGBOX_NPC
	end

LavenderTown_RadioStation_EventScript_Director::
	lock
	faceplayer
	goto_if_set FLAG_KANTO_RADIO_GOT, LavenderTown_RadioStation_EventScript_DirectorGotRadio
	goto_if_set FLAG_RETURNED_MACHINE_PART, LavenderTown_RadioStation_EventScript_DirectorReturnedMachinePart
	msgbox LavenderTown_RadioStation_Text_Gentleman, MSGBOX_NPC
	end
LavenderTown_RadioStation_EventScript_DirectorReturnedMachinePart::
	msgbox LavenderTown_RadioStation_Text_Gentleman_ReturnedMachinePart, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	msgbox LavendertownRadioStation_Text_Upgraded_Radio, MSGBOX_DEFAULT
	waitfanfare
	msgbox LavenderTown_RadioStation_Text_Gentleman_GotExpnCard, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_KANTO_RADIO_GOT
	release
	end
LavenderTown_RadioStation_EventScript_DirectorGotRadio::
	msgbox LavenderTown_RadioStation_Text_Gentleman_GotExpnCard, MSGBOX_NPC
	end

LavenderTown_RadioStation_EventScript_Host::
	goto_if_set FLAG_KANTO_RADIO_GOT, LavenderTown_RadioStation_EventScript_Host2
	msgbox LavenderTown_RadioStation_Text_SuperNerd2, MSGBOX_NPC
	end
LavenderTown_RadioStation_EventScript_Host2::
	msgbox LavenderTown_RadioStation_Text_SuperNerd2_GotExpnCard, MSGBOX_NPC
	end

LavenderTown_RadioStation_EventScript_Directory::
	msgbox LavenderTown_RadioStation_Text_Directory, MSGBOX_SIGN
	end
LavenderTown_RadioStation_EventScript_Sign::
	msgbox LavenderTown_RadioStation_Text_PokeFluteSign, MSGBOX_SIGN
	end
LavenderTown_RadioStation_EventScript_Library::
	msgbox LavenderTown_RadioStation_Text_ReferenceLibrary, MSGBOX_SIGN
	end

LavenderTown_RadioStation_Text_Receptionist:
#if GERMAN
	.string "Willkommen!\p"
	.string "Das Erdgeschoss ist für Besucher\n"
	.string "frei zu besichtigen!$"
#else
	.string "Welcome! Feel free to look around\n"
	.string "anywhere on this floor.$"
#endif

LavenderTown_RadioStation_Text_Officer:
#if GERMAN
	.string "Nur das Erdgeschoss ist frei begehbar.\p"
	.string "Nachdem der Radioturm in Johto von\n"
	.string "Schurken besetzt wurde, haben wir die\l"
	.string "Sicherheitsvorkehrungen verschärft.$"
#else
	.string "Sorry, but you can only tour the\n"
	.string "ground floor.\p"
	.string "Ever since JOHTO's RADIO TOWER\n"
	.string "was taken over by a criminal gang,\l"
	.string "we have had to step up our\l"
	.string "security.$"
#endif

LavenderTown_RadioStation_Text_SuperNerd1:
#if GERMAN
	.string "In diesem Radioturm sollen sehr viele\n"
	.string "Menschen angestellt sein.\p"
	.string "Sie alle geben ihr Bestes, um uns ein\n"
	.string "spannendes Programm bieten zu können!$"
#else
	.string "Many people are hard at work here\n"
	.string "in the RADIO TOWER.\p"
	.string "They must be doing their best to\n"
	.string "put on good shows.$"
#endif

LavenderTown_RadioStation_Text_Gentleman:
#if GERMAN
	.string "Oh nein! Das ist gar nicht gut!\p"
	.string "Ohne den Strom aus dem {COLOR RED}Kraftwerk{COLOR DARK_GRAY}\n"
	.string "können wir nicht auf Sendung gehen!\p"
	.string "Wenn wir nicht senden können, waren\n"
	.string "all meine Bemühungen, diesen Sender\l"
	.string "zu eröffnen, vergebens!\l"
	.string "Ich bin ruiniert!$"
#else
	.string "Oh, no, no, no!\p"
	.string "We've been off the air ever since\n"
	.string "the POWER PLANT shut down.\p"
	.string "All my efforts to start this\n"
	.string "station would be wasted if I can't\l"
	.string "broadcast.\p"
	.string "I'll be ruined!$"
#endif

LavenderTown_RadioStation_Text_Gentleman_ReturnedMachinePart:
#if GERMAN
	.string "Oh! Du bist also dieser {PLAYER},\n"
	.string "der das Problem mit dem {COLOR RED}Kraftwerk{COLOR DARK_GRAY}\l"
	.string "gelöst hat!\p"
	.string "Dank dir konnte ich meinen Job behalten.\n"
	.string "Du hast mir das Leben gerettet!\p"
	.string "Hier, als Zeichen meiner Dankbarkeit!\n"
	.string "Nimm schon, es gehört dir!$"
#else
	.string "Ah! So you're the {PLAYER} who\n"
	.string "solved the POWER PLANT's problem?\p"
	.string "Thanks to you, I never lost my\n"
	.string "job.\p"
	.string "I tell you, you're a real\n"
	.string "lifesaver!\p"
	.string "Please take this as my thanks.$"
#endif

LavendertownRadioStation_Text_Upgraded_Radio:
#if GERMAN
	.string "{PLAYER} erhielt das\n"
	.string "Radio-{COLOR RED}Up-Grade{COLOR DARK_GRAY}!$"
#else
	.string "{PLAYER} obtained the\n"
	.string "RADIO UPGRADE!$"
#endif

LavenderTown_RadioStation_Text_Gentleman_GotExpnCard:
#if GERMAN
	.string "Damit kannst du neue Sender auf\n"
	.string "deinem Radio empfangen!\l"
	.string "Hahahahaha!$"
#else
	.string "With that thing, you can tune into\n"
	.string "the radio programs here in KANTO.\p"
	.string "Gahahahaha!$"
#endif

LavenderTown_RadioStation_Text_SuperNerd2:
#if GERMAN
	.string "Hallihallo! Ich bin der Starredakteur\n"
	.string "unseres Musikprogramms!\p"
	.string "…Oh, tut mir leid, aber mit deinem\n"
	.string "{COLOR RED}PokéCom{COLOR DARK_GRAY} kannst du meine Sendung\l"
	.string "nicht empfangen!\p"
	.string "Du wirst vorher erst dein Radio mit\n"
	.string "einem Zusatzset aufrüsten müssen!$"
#else
	.string "Hey there!\p"
	.string "I am the super MUSIC DIRECTOR!\p"
#endif

LavenderTown_RadioStation_Text_SuperNerd2_GotExpnCard:
#if GERMAN
	.string "Hallihallo! Ich bin der Starredakteur\n"
	.string "unseres Musikprogramms!\p"
	.string "In meinem Programm kriegst du nur\n"
	.string "die schönsten Melodien zu hören!\l"
	.string "Also, nicht vergessen: einschalten!$"
#else
	.string "Hey there!\p"
	.string "I am the super MUSIC DIRECTOR!\p"
	.string "I'm responsible for the gorgeous\n"
	.string "melodies that go out over the air.\p"
	.string "Don't be square. Grab your music\n"
	.string "off the air!$"
#endif

LavenderTown_RadioStation_Text_Directory:
#if GERMAN
	.string "EG: Rezeption\n"
	.string "1S: Geschäftsabteilung\l"
	.string "2S: Allgemeine Angelegenheiten\l"
	.string "3S: Produktion\l"
	.string "4S: Büro des Intendanten$"
#else
	.string "1F RECEPTION 2F SALES\p"
	.string "3F PERSONNEL 4F PRODUCTION\p"
	.string "5F DIRECTOR'S OFFICE$"
#endif

LavenderTown_RadioStation_Text_PokeFluteSign:
#if GERMAN
	.string "Wecke Pokémon mit sanften\n"
	.string "Tönen der Pokéflöte auf\l"
	.string "Kanal 20$"
#else
	.string "Perk Up POKéMON with Mellow\n"
	.string "Sounds of the POKé FLUTE on\l"
	.string "CHANNEL 20$"
#endif

LavenderTown_RadioStation_Text_ReferenceLibrary:
#if GERMAN
	.string "Wow! Ein ganzes Regal voller\n"
	.string "Pokémon-Cds und Videos.\p"
	.string "Das muss die Referenzbibliothek\n"
	.string "sein.$"
#else
	.string "Wow! A full rack of POKéMON CDs\n"
	.string "and videos.\p"
	.string "This must be the reference\n"
	.string "library.$"
#endif

