NewSinjoh_House1_hns_MapScripts::
	.byte 0


NewSinjoh__House1_EventScripts_Elizabeth::
    lock
	faceplayer
	goto_if_set FLAG_NEWSINJOH_HOUSE1_ELIZABETH_GAVEWOOPER, NewSinjoh_House1_EventScript_Elizabeth_AfterGift
    msgbox NewSinjoh_House1_Text_Looking4Celebi MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, NewSinjoh_House1_EventScript_Decline
    checkspecies SPECIES_CELEBI
    goto_if_eq VAR_RESULT, TRUE, NewSinjoh_House1_EventScript_GiveWooperPaldea
	msgbox NewSinjoh_House1_Text_NicePokemonButNotCelebi, MSGBOX_DEFAULT
    release
    end

NewSinjoh_House1_EventScript_Decline::
	msgbox NewSinjoh_House1_Text_Decline, MSGBOX_DEFAULT
	closemessage
	release
	end

NewSinjoh_House1_EventScript_GiveWooperPaldea::
	playse SE_PIN
    applymovement LOCALID_NEWSINJOH_HOUSE1_ELIZABETH, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_NEWSINJOH_HOUSE1_ELIZABETH
    msgbox NewSinjoh_House1_OffersWooper MSGBOX_DEFAULT
    setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_WOOPER
    bufferspeciesname STR_VAR_1, SPECIES_WOOPER
    givemon SPECIES_WOOPER, 5
	call Common_EventScript_GiftMon
	setflag FLAG_NEWSINJOH_HOUSE1_ELIZABETH_GAVEWOOPER
	closemessage
    release
    end

NewSinjoh_House1_Text_Looking4Celebi:
#if GERMAN
	.string "Hey, Trainer!\p"
	.string "Du kommst den ganzen Weg aus\n"
	.string "Neuborkia?\p"
	.string "Ich habe eine Bitte an jemanden, der so\n"
	.string "weit herumgekommen ist wie du.\p"
	.string "Weißt du, mein Lieblings-Pokémon auf\n"
	.string "der ganzen Welt ist zufällig das\l"
	.string "mysteriöse Pokémon Celebi.\p"
	.string "Falls du eines haben solltest:\n"
	.string "Würdest du es mir zeigen?$"
#else
    .string "Hey there, Trainer!\p"
	.string "You came all the way from\n"
	.string "NEW BARK TOWN?\p"
	.string "I have a request for someone as\n"
	.string "well traveled as you are.\l"
	.string "You see, my favorite POKEMON in the\l"
	.string "whole world just so happens to be\l"
	.string "the mythical POKEMON known as CELEBI.\p"
	.string "If you happen to have one, would\n"
	.string "you mind showing it to me?$"
#endif

NewSinjoh_House1_Text_NicePokemonButNotCelebi:
#if GERMAN
	.string "Das ist ein wirklich wundervolles\n"
	.string "Pokémon, aber es ist nicht ganz das,\l"
	.string "wonach ich gesucht habe…$"
#else
    .string "That's a very wonderful POKEMON\n"
	.string "you have there but that's\l"
	.string "not exactly what I was looking for..$"
#endif

NewSinjoh_House1_OffersWooper:
#if GERMAN
	.string "Das ist es! Ein echtes, lebendiges\n"
	.string "Celebi!!\p"
	.string "Vielen Dank, dass du es den ganzen\n"
	.string "Weg in den Norden gebracht hast.\p"
	.string "Hier, meine Freundin hat auf ihrer Reise\n"
	.string "in eine ferne Region ein paar zu viele\l"
	.string "von denen gefangen…\p"
	.string "Bitte nimm dieses besondere Felino\n"
	.string "als Dank, {PLAYER}.$"
#else
    .string "That's it! That's a real living CELEBI!!\p"
	.string "Thank you show much for bringing it\n"
	.string "all the way up north for me to see.\p"
    .string "Here, my girlfriend happened to\n"
	.string "catch a few too many of these during\l"
	.string "her trip to a far away region..\p"
    .string "Please take this special WOOPER as\n"
	.string "thanks, {PLAYER}.$"
#endif

NewSinjoh_House1_Text_Decline:
#if GERMAN
	.string "Wie schade. Ich hätte wirklich\n"
	.string "gerne eines gesehen.$"
#else
	.string "That's too bad. I really wanted\n"
	.string "to see one.$"
#endif

NewSinjoh_House1_Text_TakeCareOfWooper:
#if GERMAN
	.string "Kümmere dich gut um das Felino,\n"
	.string "ja?$"
#else
    .string "Take good care of that WOOPER\n"
	.string "for me okay?$"
#endif

NewSinjoh_House1_EventScript_Elizabeth_AfterGift::
	msgbox NewSinjoh_House1_Text_GoodToSeeYouAgain MSGBOX_DEFAULT
	release
	end

NewSinjoh_House1_Text_GoodToSeeYouAgain:
#if GERMAN
	.string "Schön, dich wiederzusehen, {PLAYER}.\p"
	.string "Wie geht es dem Felino denn so?$"
#else
    .string "It's good to see you again,\n"
	.string "{PLAYER}.\p"
	.string "How have you been treating that\n"
	.string "that WOOPER?$"
#endif

NewSinjoh_House1_Bookshelf::
    lock
	msgbox NewSinjoh_House1_Bookshelf_Text MSGBOX_DEFAULT
	release
	end

NewSinjoh_House1_Bookshelf_Text:
#if GERMAN
	.string "Ein Regal voller Computerspiele\n"
	.string "und Comics!$"
#else
    .string "It's a shelf packed full of\n"
	.string "computer games and graphic novels!$"
#endif

NewSinjoh_House1_Eevee::
    lock
	faceplayer
	playmoncry SPECIES_EEVEE, 0
	msgbox NewSinjoh_House1_Text_Eevee_Cry, MSGBOX_DEFAULT
	waitmoncry
    closemessage
	release
	end

NewSinjoh_House1_Text_Eevee_Cry:
    .string "Vee Vee?$"
