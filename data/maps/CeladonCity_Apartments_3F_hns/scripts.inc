CeladonCity_Apartments_3F_hns_MapScripts::
	.byte 0

CeladonCity_Apartments_3F_EventScript_Sign::
	msgbox CeladonMansion3F_Text_DevRoomSign, MSGBOX_SIGN
	end

CeladonCity_Apartments_3F_EventScript_Programmer::
	msgbox GameFreak_Text_Programmer, MSGBOX_NPC
	end

CeladonCity_Apartments_3F_EventScript_GraphicArtist::
	msgbox GameFreak_Text_GraphicArtist, MSGBOX_NPC
	end

CeladonCity_Apartments_3F_EventScript_Program::
	msgbox CeladonMansion3F_Text_GameProgram, MSGBOX_SIGN
	end

CeladonCity_Apartments_3F_EventScript_Picture::
	msgbox CeladonMansion3F_Text_Drawing, MSGBOX_SIGN
	end

CeladonCity_Apartments_3F_EventScript_CharacterDesigner::
	msgbox GameFreak_Text_CharacterDesigner, MSGBOX_NPC
	end

GameFreak_Text_GameDesigner:
#if GERMAN
	.string "Ist das richtig?\p"
	.string "Ich bin der Spieldesigner!\p"
	.string "Deinen Pokédex zu füllen ist schwer,\n"
	.string "aber gib nicht auf!$"
#else
	.string "Is that right?\p"
	.string "I'm the GAME DESIGNER!\p"
	.string "Filling up your POKéDEX is tough,\n"
	.string "but don't give up!$"
#endif

GameFreak_Text_GameDesignerCompletedPokedex:
#if GERMAN
	.string "Wow! Hervorragend! Du hast\n"
	.string "deinen Pokédex vervollständigt!\p"
	.string "Herzlichen Glückwunsch!$"
#else
	.string "Wow! Excellent! You completed\n"
	.string "your POKéDEX!\p"
	.string "Congratulations!$"
#endif

GameFreak_Text_GraphicArtist:
#if GERMAN
	.string "Ich bin der Grafikdesigner.\p"
	.string "Ich habe dich gezeichnet!$"
#else
	.string "I'm the GRAPHIC ARTIST.\p"
	.string "I drew you!$"
#endif

GameFreak_Text_GraphicArtistPrintDiploma:
#if GERMAN
	.string "Ich bin der Grafikdesigner.\p"
	.string "Oh, du hast deinen Pokédex\n"
	.string "vervollständigt?\p"
	.string "Willst du, dass ich dein Diplom\n"
	.string "ausdrucke?$"
#else
	.string "I'm the GRAPHIC ARTIST.\p"
	.string "Oh, you completed your POKéDEX?\p"
	.string "Want me to print out your\n"
	.string "DIPLOMA?$"
#endif

GameFreak_Text_GraphicArtistRefused:
#if GERMAN
	.string "Sag Bescheid, wenn du dein Diplom\n"
	.string "ausgedruckt haben willst.$"
#else
	.string "Give me a shout if you want your\n"
	.string "DIPLOMA printed.$"
#endif

GameFreak_Text_GraphicArtistError:
#if GERMAN
	.string "Etwas stimmt nicht. Ich muss den\n"
	.string "Druck abbrechen.$"
#else
	.string "Something's wrong. I'll have to\n"
	.string "cancel printing.$"
#endif

GameFreak_Text_Programmer:
#if GERMAN
	.string "Wer, ich? Ich bin der Programmierer.\p"
	.string "Spiel die Spielautomaten!$"
#else
	.string "Who, me? I'm the PROGRAMMER.\p"
	.string "Play the slot machines!$"
#endif

GameFreak_Text_CharacterDesigner:
#if GERMAN
	.string "Sind die Zwillinge nicht süß?\p"
	.string "Jasmin ist auch hübsch.\p"
	.string "Oh, ich liebe sie!$"
#else
	.string "Aren't the TWINS adorable?\p"
	.string "JASMINE's pretty too.\p"
	.string "Oh, I love them!$"
#endif

CeladonMansion3F_Text_DevRoomSign:
#if GERMAN
	.string "Game Freak Entwicklungsbüro$"
#else
	.string "GAME FREAK DEVELOPMENT ROOM$"
#endif

CeladonMansion3F_Text_Drawing:
#if GERMAN
	.string "Es ist eine detaillierte Zeichnung\n"
	.string "eines hübschen Mädchens.$"
#else
	.string "It's a detailed drawing of a\n"
	.string "pretty girl.$"
#endif

CeladonMansion3F_Text_GameProgram:
#if GERMAN
	.string "Es ist das Spielprogramm.\n"
	.string "Herumzuspielen könnte einen Fehler ins\l"
	.string "Spiel bringen!$"
#else
	.string "It's the game program. Messing\n"
	.string "with it could put a bug in the\n"
	.string "game!$"
#endif

CeladonMansion3F_Text_ReferenceMaterial:
#if GERMAN
	.string "Es ist voll mit Referenzmaterialien.\n"
	.string "Es gibt sogar eine Poképuppe.$"
#else
	.string "It's crammed with reference\n"
	.string "materials. There's even a\n"
	.string "POKé DOLL.$"
#endif
