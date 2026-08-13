SaffronCity_CopycatsHouse_2F_Frlg_MapScripts::
	.byte 0

SaffronCity_CopycatsHouse_2F_EventScript_Doduo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
	msgbox SaffronCity_CopycatsHouse_2F_Text_Doduo
	waitmoncry
	release
	end

SaffronCity_CopycatsHouse_2F_EventScript_Doll::
	lock
	msgbox SaffronCity_CopycatsHouse_2F_Text_RareMonOnlyDoll
	release
	end

SaffronCity_CopycatsHouse_2F_EventScript_Copycat::
	lock
	faceplayer
	checkitem ITEM_POKE_DOLL
	goto_if_eq VAR_RESULT, TRUE, EventScript_MimicTutor
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerMale
	call_if_eq VAR_RESULT, FEMALE, SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerFemale
	release
	end

SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerMale::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyMale
	return

SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerFemale::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyFemale
	return

SaffronCity_CopycatsHouse_2F_EventScript_Computer::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MySecrets, MSGBOX_SIGN
	end

SaffronCity_CopycatsHouse_2F_EventScript_Game::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MarioWearingABucket, MSGBOX_SIGN
	end

SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyMale::
#if GERMAN
	.string "{PLAYER}: Hallo!\n"
	.string "Magst du Pokémon?\p"
	.string "{PLAYER}: Halt, ich habe doch dich\n"
	.string "gefragt.\p"
	.string "{PLAYER}: Wie?\n"
	.string "Du bist komisch!\p"
	.string "Nachahmerin: Hmm? Ich soll die\n"
	.string "Nachahmerei aufgeben?\p"
	.string "Aber das ist doch mein Hobby!$"
#else
	.string "{PLAYER}: Hi!\n"
	.string "Do you like POKéMON?\p"
	.string "{PLAYER}: Uh, no, I just asked you.\p"
	.string "{PLAYER}: Huh?\n"
	.string "You're strange!\p"
	.string "COPYCAT: Hmm? Quit mimicking?\n"
	.string "But, that's my favorite hobby!$"
#endif

SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyFemale::
#if GERMAN
	.string "{PLAYER}: Hallo!\n"
	.string "Magst du Pokémon?\p"
	.string "{PLAYER}: Halt, ich habe doch dich\n"
	.string "gefragt.\p"
	.string "{PLAYER}: Wie?\n"
	.string "Du bist komisch!\p"
	.string "Nachahmerin: Hmm? Ich soll die\n"
	.string "Nachahmerei aufgeben?\p"
	.string "Aber das ist doch mein Hobby!$"
#else
	.string "{PLAYER}: Hi.\n"
	.string "You must like POKéMON.\p"
	.string "{PLAYER}: No, not me.\n"
	.string "I asked you.\p"
	.string "{PLAYER}: Pardon?\n"
	.string "You're weird!\l"
	.string " \l"
	.string "COPYCAT: Hmm? Quit mimicking?\l"
	.string "But that's my favorite hobby!$"
#endif

Text_MimicTeach::
#if GERMAN
	.string "Wow!\n"
	.string "Das ist ja eine Poképuppe!\p"
	.string "Die ist für mich?\n"
	.string "Vielen Dank!\p"
	.string "Ich werde dafür einem deiner Pokémon\n"
	.string "die Attacke Mimikry beibringen!$"
#else
	.string "Oh wow!\n"
	.string "A POKé DOLL!\p"
	.string "For me?\n"
	.string "Thank you!\p"
	.string "You know what?\n"
	.string "I can teach the move MIMIC.$"
#endif

Text_MimicDeclined::
#if GERMAN
	.string "Magst du Mimikry nicht?$"
#else
	.string "Don't you like MIMIC?$"
#endif

Text_MimicWhichMon::
#if GERMAN
	.string "Ich liebe Mimikry!\n"
	.string "Wer soll es erlernen?$"
#else
	.string "I really love MIMIC!\n"
	.string "Who's going to learn it?$"
#endif

Text_MimicTaughtMale::
#if GERMAN
	.string "{PLAYER}: Hallo!\n"
	.string "Vielen Dank!\p"
	.string "{PLAYER}: Entschuldigung?\p"
	.string "{PLAYER}: … macht es dir wirklich\n"
	.string "so viel Spaß, mich nachzuahmen?\p"
	.string "Nachahmerin: Darauf kannst du\n"
	.string "wetten! Es ist grandios!$"
#else
	.string "{PLAYER}: Hi!\n"
	.string "Thanks for earlier!\p"
	.string "{PLAYER}: Pardon?\p"
	.string "{PLAYER}: Is it that fun to mimic my\n"
	.string "every move?\p"
	.string "COPYCAT: You bet!\n"
	.string "It's a scream!$"
#endif

Text_MimicTaughtFemale::
#if GERMAN
	.string "{PLAYER}: Hallo!\n"
	.string "Vielen Dank!\p"
	.string "{PLAYER}: Entschuldigung?\p"
	.string "{PLAYER}: … macht es dir wirklich\n"
	.string "so viel Spaß, mich nachzuahmen?\p"
	.string "Nachahmerin: Darauf kannst du\n"
	.string "wetten! Es ist grandios!$"
#else
	.string "{PLAYER}: Hi!\n"
	.string "Thanks for what you did for us.\p"
	.string "{PLAYER}: Pardon?\p"
	.string "{PLAYER}: Is it really that fun to\n"
	.string "copy what I say and do?\p"
	.string "COPYCAT: You bet!\n"
	.string "It's a scream!$"
#endif

SaffronCity_CopycatsHouse_2F_Text_Doduo::
#if GERMAN
	.string "Dodu: Giegie!\p"
	.string "Spieglein, Spieglein an der Wand, wer ist\n"
	.string "die Schönste im Ganzen Land?$"
#else
	.string "DODUO: Giiih!\p"
	.string "PRETTY MIRROR LOOK AT ME,\n"
	.string "SEE HOW PRETTY I CAN BE?$"
#endif

SaffronCity_CopycatsHouse_2F_Text_RareMonOnlyDoll::
#if GERMAN
	.string "Ein seltenes Pokémon! Hmm?\n"
	.string "Es ist nur eine Puppe!$"
#else
	.string "This is a rare POKéMON!\n"
	.string "Huh? It's only a doll!$"
#endif

SaffronCity_CopycatsHouse_2F_Text_MarioWearingABucket::
#if GERMAN
	.string "Ein Spiel mit Mario!$"
#else
	.string "A game with MARIO wearing a bucket\n"
	.string "on his head!$"
#endif

SaffronCity_CopycatsHouse_2F_Text_MySecrets::
#if GERMAN
	.string "...\p"
	.string "Meine Geheimnisse!\p"
	.string "Zeitvertreib: Mienenspiel Hobby: Puppen\n"
	.string "sammeln Lieblings-Pokémon: Piepi!$"
#else
	.string "…\p"
	.string "My Secrets!\p"
	.string "Skill: Mimicry!\n"
	.string "Hobby: Collecting dolls!\l"
	.string "Favorite POKéMON: CLEFAIRY!$"
#endif

