CeladonCity_Apartments_2F_hns_MapScripts::
	.byte 0

CeladonCity_Apartments_2F_EventScript_Computer::
	lock
	playse SE_PC_ON
	msgbox CeladonMansion2F_Text_Computer
	playse SE_PC_OFF
	waitse
	release
	end

CeladonCity_Apartments_2F_EventScript_Sign::
	msgbox CeladonMansion2F_Text_DevOfficeSign, MSGBOX_SIGN
	end

CeladonMansion2F_Text_Computer:
#if GERMAN
	.string "{PLAYER} hat den PC eingeschaltet.\p"
	.string "…\p"
	.string "Jemand war gerade dabei, eine E-Mail\n"
	.string "zu schreiben.\p"
	.string "…Ich hoffe, du besuchst Kanto.\p"
	.string "Du wirst überrascht sein, wie sehr\n"
	.string "sich hier alles verändert hat.\p"
	.string "Du wirst auch viele Pokémon sehen,\n"
	.string "die nicht aus Johto stammen.\p"
	.string "An den Produzenten\p"
	.string "…$"
#else
	.string "{PLAYER} turned on the PC.\p"
	.string "…\p"
	.string "Someone was in the middle of\n"
	.string "composing an e-mail.\p"
	.string "…I hope you'll come visit KANTO.\p"
	.string "I think you'll be surprised at\n"
	.string "how much things have changed here.\p"
	.string "You'll also see many POKéMON that\n"
	.string "aren't native to JOHTO.\p"
	.string "To the PRODUCER\p"
	.string "…$"
#endif

CeladonMansion2F_Text_DevOfficeSign:
#if GERMAN
	.string "Heart & Soul Development Office$"
#else
	.string "HEART & SOUL DEVELOPMENT OFFICE$"
#endif

CeladonMansion2F_EventScript_LilDill::
	msgbox CeladonMansion2F_Text_LilDill, MSGBOX_NPC
	end

CeladonMansion2F_EventScript_InfiniteBacon::
	msgbox CeladonMansion2F_Text_InfiniteBacon, MSGBOX_NPC
	end

CeladonMansion2F_EventScript_TixoRebel::
	msgbox CeladonMansion2F_Text_TixoRebel, MSGBOX_NPC
	end

CeladonMansion2F_EventScript_Phant::
	msgbox CeladonMansion2F_Text_Phant, MSGBOX_NPC
	end

CeladonMansion2F_EventScript_Exclsior::
	msgbox CeladonMansion2F_Text_Exclsior, MSGBOX_NPC
	end

CeladonMansion2F_EventScript_DaniRainbow::
    msgbox CeladonMansion2F_Text_DaniRaibow, MSGBOX_NPC
    end

CeladonMansion2F_Text_LilDill:
#if GERMAN
	.string "Hallo zusammen, Patch 15…\p"
	.string "Entschuldigung, ich meine…\p"
	.string "Hallo, ich bin der Spiel-Direktor!\p"
	.string "Ich habe die Karten, Tilesets, Skripte\n"
	.string "und vieles mehr erstellt.\p"
	.string "Aber ohne die anderen Entwickler und\n"
	.string "Playtester hätte ich es nicht\l"
	.string "geschafft.\p"
	.string "Danke fürs Spielen! Ich hoffe, du hast\n"
	.string "Pokémon Heart & Soul genossen.$"
#else
	.string "Hi all, Patch 15--\p"
	.string "Sorry, I mean...\p"
	.string "Hi there, I'm the GAME DIRECTOR!\p"
	.string "I built the maps, the tilesets, the\n"
	.string "the scripts, and much more.\p"
	.string "But I couldn't have done it without\n"
	.string "the other devs and the playtesters.\p"
	.string "Thank you for playing! I hope you've\n"
	.string "enjoyed POKéMON HEART & SOUL.$"
#endif

CeladonMansion2F_Text_InfiniteBacon:
#if GERMAN
	.string "Wir arbeiten daran, dieses Spiel in der\n"
	.string "PokéEmerald-Erweiterung\l"
	.string "wiederaufzubauen!$"
#else
	.string "We're working to rebuild this game\n"
	.string "in pokeemerald expansion!$"
#endif

CeladonMansion2F_Text_TixoRebel:
#if GERMAN
	.string "Hast du schon von dem Eierbug gehört?\n"
	.string "Es war ein Fehler aus dem Playtest, der\l"
	.string "Pokémon zufällig in Eier verwandelte!\l"
	.string "Ich habe die Lösung dafür entwickelt!$"
#else
	.string "Have you heard of THE EGGENING?\n"
	.string "It was a bug from the playtest\l"
	.string "that randomly changed POKéMON into\l"
	.string "EGGs!\p"
	.string "I developed the fix for it!$"
#endif

CeladonMansion2F_Text_Phant:
#if GERMAN
	.string "Ich liebe Demakes!\p"
	.string "Hast du Sword And Shield Ultimate Plus\n"
	.string "gespielt? Ich habe es übersetzt!\l"
	.string "Für mein nächstes Demake werde ich\l"
	.string "Alola machen!$"
#else
	.string "I love DEMAKES!\p"
	.string "Have you played SWORD AND SHIELD\n"
	.string "ULTIMATE PLUS - ENGLISH?\l"
	.string "I translated it!\p"
	.string "For my next DEMAKE, I think I'll\n"
	.string "do ALOLA!$"
#endif

CeladonMansion2F_Text_Exclsior:
#if GERMAN
	.string "Ich habe die einzigartigen\n"
	.string "Surf-Sprites für jedes Pokémon\l"
	.string "implementiert!\p"
	.string "Da das Projekt Open Source ist, kannst\n"
	.string "auch du eigene Features hinzufügen!$"
#else
	.string "I implemented the unique surfing\n"
	.string "surfing sprites for each POKéMON!\p"
	.string "Since the project is OPEN SOURCE,\n"
	.string "you can add your own features too!$"
#endif

CeladonMansion2F_Text_DaniRaibow:
#if GERMAN
	.string "Hi!\p"
	.string "Ich bin ziemlich gut darin, Probleme zu\n"
	.string "finden und kleine zu beheben.\p"
	.string "Willst du einen Witz hören?\p"
	.string "Siegfried versuchte, Dragoran die\n"
	.string "Attacke Feuerodem beizubringen.\p"
	.string "Aber Dragoran bewegte sich zu schnell\n"
	.string "durch Turbotempo; er konnte es nicht\l"
	.string "fangen!$"
#else
	.string "Hi!\p"
	.string "I am pretty good at finding problems,\n"
	.string "and can fix little ones.\p"
    .string "Wanna hear a joke?\p"
    .string "Lance tried to teach DRAGONITE the\n"
    .string "move DRAGON BREATH.\p"
    .string "However, DRAGONITE was moving too\n"
    .string "fast from EXTREMESPEED; it couldn't\l"
    .string "catch it!$"
#endif
