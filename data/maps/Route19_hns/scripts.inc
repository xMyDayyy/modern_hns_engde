Route19_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route19_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route19_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route19_EventScript_Harold::
	trainerbattle_single TRAINER_HAROLD_HNS, Route19_Text_SwimmermHaroldSeen, Route19_Text_SwimmermHaroldBeaten
	msgbox Route19_Text_SwimmermHaroldAfterBattle, MSGBOX_AUTOCLOSE
	end

Route19_EventScript_Tucker::
	trainerbattle_single TRAINER_TUCKER_HNS, Route19_Text_SwimmermTuckerSeen, Route19_Text_SwimmermTuckerBeaten
	msgbox Route19_Text_SwimmermTuckerAfterBattle, MSGBOX_AUTOCLOSE
	end

Route19_EventScript_Dawn::
	trainerbattle_single TRAINER_DAWN_HNS, Route19_Text_SwimmerfDawnSeen, Route19_Text_SwimmerfDawnBeaten
	msgbox Route19_Text_SwimmerfDawnAfterBattle, MSGBOX_AUTOCLOSE
	end

Route19_EventScript_Jerome::
	trainerbattle_single TRAINER_JEROME_HNS, Route19_Text_SwimmermJeromeSeen, Route19_Text_SwimmermJeromeBeaten
	msgbox Route19_Text_SwimmermJeromeAfterBattle, MSGBOX_AUTOCLOSE
	end

Route19_EventScript_Fatman::
	goto_if_unset FLAG_DEFEATED_CINNABAR_ISLAND_GYM, Route19_EventScript_FatmanBefore
	msgbox Route19_Text_Fisher1_RocksCleared, MSGBOX_NPC
	end

Route19_EventScript_FatmanBefore::
	msgbox Route19_Text_Fisher2, MSGBOX_NPC
	end

Route19_EventScript_Sign::
	msgbox Route19_Text_Sign, MSGBOX_SIGN
	end

Route19_EventScript_SwimSign::
	msgbox Route19_Text_CarefulSwimmingSign, MSGBOX_SIGN
	end

CherryGroveCity_EventScript_Kingler::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KINGLER, CRY_MODE_NORMAL
	msgbox Route19_Text_Kingler, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route19_EventScript_Fisher::
	goto_if_unset FLAG_DEFEATED_CINNABAR_ISLAND_GYM, Route19_EventScript_FisherBefore
	msgbox Route19_Text_Fisher2_RocksCleared, MSGBOX_NPC
	end

Route19_EventScript_FisherBefore::
	msgbox Route19_Text_FisherBefore, MSGBOX_NPC
	end

Route19_EventScript_Item_Brine::
    finditem ITEM_TM_BRINE
    end

Route19_Text_SwimmermHaroldSeen:
#if GERMAN
	.string "Bist du schon einmal nachts\n"
	.string "im Meer geschwommen?$"
#else
	.string "Have you ever gone swimming in the\n"
	.string "sea at night?$"
#endif

Route19_Text_SwimmermHaroldBeaten:
#if GERMAN
	.string "Schluck…$"
#else
	.string "Glub…$"
#endif

Route19_Text_SwimmermHaroldAfterBattle:
#if GERMAN
	.string "Nachts ist das Meer pechschwarz. Ganz\n"
	.string "so, als wollte es dich verschlingen.$"
#else
	.string "At night, the sea turns black. It\n"
	.string "feels like it will swallow you up.$"
#endif

Route19_Text_SwimmermTuckerSeen:
#if GERMAN
	.string "Röchel, röchel… Nur… noch… ein… kleines\n"
	.string "Stück… bis… {COLOR RED}Fuchsania City{COLOR DARK_GRAY}…$"
#else
	.string "Pant, pant… Just… a little…\p"
	.string "farther… to… FUCHSIA…$"
#endif

Route19_Text_SwimmermTuckerBeaten:
#if GERMAN
	.string "Ich ertrinke!$"
#else
	.string "I'm drowning!$"
#endif

Route19_Text_SwimmermTuckerAfterBattle:
#if GERMAN
	.string "Ich… hab meiner Freundin gesagt…\n"
	.string "ich schwimme… bis nach {COLOR RED}Fuchsania City{COLOR DARK_GRAY}.\l"
	.string "Wirklich… großartige… Idee…$"
#else
	.string "I… asked my girlfriend to swim to\n"
	.string "FUCHSIA… Gasp…$"
#endif

Route19_Text_SwimmerfDawnSeen:
#if GERMAN
	.string "Schwächlinge\n"
	.string "widern mich an!$"
#else
	.string "I'm disgusted by wimpy people!$"
#endif

Route19_Text_SwimmerfDawnBeaten:
#if GERMAN
	.string "Beim Schwimmen hätte ich dich\n"
	.string "locker in die Tasche gesteckt!$"
#else
	.string "I could beat you at swimming…$"
#endif

Route19_Text_SwimmerfDawnAfterBattle:
#if GERMAN
	.string "Von {COLOR RED}Fuchsania City{COLOR DARK_GRAY} bis zu den See-\n"
	.string "schauminseln schwimmt sich’s doch im Nu!\l"
	.string "Jetzt stell dich mal nicht so an!$"
#else
	.string "It's a quick swim between FUCHSIA\n"
	.string "and SEAFOAM ISLANDS…\p"
	.string "Sheesh, some big man my boyfriend\n"
	.string "is! What a wimp!$"
#endif

Route19_Text_SwimmermJeromeSeen:
#if GERMAN
	.string "Schwimmen?\n"
	.string "Ich bin ein miserabler Schwimmer.\l"
	.string "Ich plansche lieber im seichten Wasser.$"
#else
	.string "Swimming? I'm lousy at it.\p"
	.string "I'm just splashing around in these\n"
	.string "shallow waters.$"
#endif

Route19_Text_SwimmermJeromeBeaten:
#if GERMAN
	.string "Und ich dachte, ich könnte gewinnen…\n"
	.string "So kann man sich irren.$"
#else
	.string "I thought I could win.$"
#endif

Route19_Text_SwimmermJeromeAfterBattle:
#if GERMAN
	.string "Schwimmen mag nicht meine Stärke sein,\n"
	.string "aber ich liebe das Meer!$"
#else
	.string "I might be bad at swimming, but I\n"
	.string "love the sea.$"
#endif

Route19_Text_Fisher1:
#if GERMAN
	.string "Hier kommst du nicht weiter, weil hier\n"
	.string "gerade Planierarbeiten im Gange sind.\l"
	.string "Um zur {COLOR RED}Zinnoberinsel{COLOR DARK_GRAY} zu gelangen, musst\l"
	.string "du den Umweg über {COLOR RED}Alabastia{COLOR DARK_GRAY} machen.$"
#else
	.string "Sorry. This road is closed for\n"
	.string "construction.\p"
	.string "If you want to get to CINNABAR,\n"
	.string "you'd better go south from PALLET\n"
	.string "TOWN.$"
#endif

Route19_Text_Kingler:
#if GERMAN
	.string "Kingler: Keeeeeeeeeeee$"
#else
	.string "KINGLER: KEEEEEEEEEEEE$"
#endif

Route19_Text_Fisher1_RocksCleared:
#if GERMAN
	.string "Ich habe so viel geschwitzt,\n"
	.string "dass jetzt ein paar Runden im\l"
	.string "Wasser sicher nicht verkehrt wären.$"
#else
	.string "I'm all sweaty. Time for a swim!$"
#endif

Route19_Text_Fisher2:
#if GERMAN
	.string "Es würde zu lange\n"
	.string "dauern, diesen Felsen zu bewegen…$"
#else
	.string "Aw man, KINGLER is blocking the\n"
	.string "beach.$"
#endif

Route19_Text_FisherBefore:
#if GERMAN
	.string "Kein Angeln, solange Kingler\n"
	.string "hier sind.$"
#else
	.string "No fishing until these KINGLER\n"
	.string "clear out.$"
#endif

Route19_Text_Fisher2_RocksCleared:
#if GERMAN
	.string "Die Bauarbeiten sind beendet.\p"
	.string "Jetzt kann ich wieder angeln.$"
#else
	.string "Those KINGLER finally left!\p"
	.string "Now I can go fishing again.$"
#endif

Route19_Text_Sign:
#if GERMAN
	.string "Route 19\n"
	.string "Süden: Die Seeschauminseln$"
#else
	.string "ROUTE 19\p"
	.string "FUCHSIA CITY - SEAFOAM ISLANDS$"
#endif

Route19_Text_CarefulSwimmingSign:
#if GERMAN
	.string "Da ist ein Flugblatt…\p"
	.string "Wer vorhat, zu den Seeschauminseln\n"
	.string "hinauszuschwimmen, wird gebeten,\l"
	.string "äußerst vorsichtig zu sein!\l"
	.string "- Das Ordnungsamt von Fuchsania City$"
#else
	.string "Please be careful if you are\n"
	.string "swimming to SEAFOAM ISLANDS.\p"
	.string "FUCHSIA POLICE$"
#endif

