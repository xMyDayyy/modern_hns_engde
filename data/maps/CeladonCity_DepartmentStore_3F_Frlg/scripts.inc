CeladonCity_DepartmentStore_3F_Frlg_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_3F_EventScript_CounterTutor::
	goto EventScript_CounterTutor
	end

CeladonCity_DepartmentStore_3F_EventScript_GBAKid1::
	msgbox CeladonCity_DepartmentStore_3F_Text_OTStandsForOriginalTrainer, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_GBAKid2::
	msgbox CeladonCity_DepartmentStore_3F_Text_BuddyTradingKangaskhanForHaunter, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_GBAKid3::
	msgbox CeladonCity_DepartmentStore_3F_Text_HaunterEvolvedOnTrade, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_LittleGirl::
	msgbox CeladonCity_DepartmentStore_3F_Text_CanIdentifyTradeMonsByID, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_SuperNES::
	msgbox CeladonCity_DepartmentStore_3F_Text_ItsSuperNES, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV1::
	msgbox CeladonCity_DepartmentStore_3F_Text_AnRPG, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV2::
	msgbox CeladonCity_DepartmentStore_3F_Text_SportsGame, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV3::
	msgbox CeladonCity_DepartmentStore_3F_Text_PuzzleGame, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV4::
	msgbox CeladonCity_DepartmentStore_3F_Text_FightingGame, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_3F_Text_TVGameShop, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_Poster::
	msgbox CeladonCity_DepartmentStore_3F_Text_RedGreenBothArePokemon, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_Text_OTStandsForOriginalTrainer::
#if GERMAN
	.string "Jedes gefangene Pokémon erhält eine\n"
	.string "ID-Nr. und wird mit dem Namen des\l"
	.string "Originaltrainers, OT, registriert.\p"
	.string "Der OT ist der Trainer, der das\n"
	.string "Pokémon gefangen hat!$"
#else
	.string "Captured POKéMON are registered\n"
	.string "with an ID No. and the OT.\p"
	.string "OT stands for “Original TRAINER” -\n"
	.string "the TRAINER that caught it first.$"
#endif

CeladonCity_DepartmentStore_3F_Text_BuddyTradingKangaskhanForHaunter::
#if GERMAN
	.string "Cool!\p"
	.string "Mein Kumpel tauscht sein Kangama\n"
	.string "gegen mein Georok!$"
#else
	.string "All right!\p"
	.string "My buddy's going to trade me his\n"
	.string "KANGASKHAN for my HAUNTER!$"
#endif

CeladonCity_DepartmentStore_3F_Text_HaunterEvolvedOnTrade::
#if GERMAN
	.string "Komm, Georok!\p"
	.string "Ich bin Georok-Sammler!\p"
	.string "Nanu?\p"
	.string "Georok hat sich zu einem anderen\n"
	.string "Pokémon entwickelt!$"
#else
	.string "Come on, HAUNTER!\p"
	.string "I love HAUNTER!\n"
	.string "I collect them!\p"
	.string "Huh?\p"
	.string "HAUNTER turned into a different\n"
	.string "POKéMON while being traded!$"
#endif

CeladonCity_DepartmentStore_3F_Text_CanIdentifyTradeMonsByID::
#if GERMAN
	.string "Anhand ihrer ID-Nr. kannst du Pokémon,\n"
	.string "die du bei einem Tausch erhalten hast,\l"
	.string "identifizieren!$"
#else
	.string "You can identify POKéMON you get\n"
	.string "in trades by their ID Numbers.$"
#endif

CeladonCity_DepartmentStore_3F_Text_ItsSuperNES::
#if GERMAN
	.string "Das ist ein Super Nintendo!$"
#else
	.string "It's a Super NES.$"
#endif

CeladonCity_DepartmentStore_3F_Text_AnRPG::
#if GERMAN
	.string "Ein Rollenspiel!\n"
	.string "Ich habe keine Zeit! Schade!$"
#else
	.string "An RPG!\n"
	.string "There's no time for that!$"
#endif

CeladonCity_DepartmentStore_3F_Text_SportsGame::
#if GERMAN
	.string "Ein Rennspiel!\n"
	.string "Das würde meinem Vater gefallen!$"
#else
	.string "A sports game!\n"
	.string "Dad'll like that!$"
#endif

CeladonCity_DepartmentStore_3F_Text_PuzzleGame::
#if GERMAN
	.string "Ein Puzzle-Spiel!\n"
	.string "Es ist bestimmt fesselnd!$"
#else
	.string "A puzzle game!\n"
	.string "Looks addictive!$"
#endif

CeladonCity_DepartmentStore_3F_Text_FightingGame::
#if GERMAN
	.string "Ein Kampfsport-Spiel!\n"
	.string "Aufregend!$"
#else
	.string "A fighting game!\n"
	.string "Looks tough!$"
#endif

CeladonCity_DepartmentStore_3F_Text_TVGameShop::
#if GERMAN
	.string "2S: Videospiele-Shop$"
#else
	.string "3F: TV GAME SHOP$"
#endif

CeladonCity_DepartmentStore_3F_Text_RedGreenBothArePokemon::
#if GERMAN
	.string "Die Rote und die Grüne Pokémon-\n"
	.string "Edition! Cool!$"
#else
	.string "Red and Green!\n"
	.string "Both are POKéMON!$"
#endif

Text_CounterTeach::
#if GERMAN
	.string "Hallo! Ich habe kürzlich Pokémon\n"
	.string "durchgespielt!\p"
	.string "Du bist noch nicht soweit?\n"
	.string "Vielleicht hilft dir das hier!\p"
	.string "Ich denke an die Attacke Konter.\p"
	.string "Nicht, dass ich mich darauf verlassen\n"
	.string "würde!$"
#else
	.string "Oh, hi!\n"
	.string "I finally finished POKéMON.\p"
	.string "Not done yet? How about I teach\n"
	.string "you a good move?\p"
	.string "The move I have in mind is\n"
	.string "COUNTER.\p"
	.string "Not like the one I'm leaning on,\n"
	.string "mind you!$"
#endif

Text_CounterDeclined::
#if GERMAN
	.string "Du hast kein Interesse? Komme wieder,\n"
	.string "wenn du deine Meinung geändert hast!$"
#else
	.string "You're not interested? Come see\n"
	.string "me if you change your mind.$"
#endif

Text_CounterWhichMon::
#if GERMAN
	.string "Welches Pokémon soll sie lernen?$"
#else
	.string "Which POKéMON should I teach\n"
	.string "COUNTER to?$"
#endif

Text_CounterTaught::
#if GERMAN
	.string "Setzt du die Konter-Attacke ein, die\n"
	.string "ich einem deiner Pokémon beigebracht\l"
	.string "habe?$"
#else
	.string "Are you using that COUNTER move\n"
	.string "I taught your POKéMON?$"
#endif
