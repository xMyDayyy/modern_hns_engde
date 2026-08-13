.equ GAVE_PROFILE,  VAR_TEMP_1

MysteryEventClub_EventScript_Woman::
	lock
	faceplayer
	goto_if_eq GAVE_PROFILE, TRUE, EventScript_AlreadyGaveProfile
	goto_if_set FLAG_SYS_SET_TRAINER_CARD_PROFILE, EventScript_GivenProfileBefore
	msgbox Text_IdLoveToHearYourProfile
	goto EventScript_AskForProfile
	end

EventScript_AlreadyGaveProfile:
	msgbox Text_TellMoreNextTime
	release
	end

EventScript_AskForProfile:
	message Text_TellMeWhatsYourProfile
	waitmessage
	multichoice 18, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, EventScript_AcceptGiveProfile
	case 1, EventScript_DeclineGiveProfile
	case 2, EventScript_ProfileInfo
	case MULTI_B_PRESSED, EventScript_DeclineGiveProfile
	end

EventScript_ProfileInfo:
	msgbox Text_ExplainProfile
	goto EventScript_AskForProfile
	end

EventScript_AcceptGiveProfile:
	msgbox Text_WhatsYourProfile
	closemessage
	goto EventScript_GiveProfile
	end

EventScript_CancelGiveProfile:
	msgbox Text_DecidedNotTo
	release
	end

EventScript_GaveProfile:
	setvar GAVE_PROFILE, TRUE
	setvar VAR_0x8004, 0
	special ShowEasyChatProfile
	waitmessage
	delay 80
	msgbox Text_ProfileSaysSomethingAboutYou
	release
	end

EventScript_DeclineGiveProfile:
	msgbox Text_DontBeLikeThat
	release
	end

EventScript_GivenProfileBefore:
	msgbox Text_HiWeMeetAgain
	goto EventScript_AskForNewProfile
	end

EventScript_AskForNewProfile:
	message Text_ChangeYourProfile
	waitmessage
	multichoice 18, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, EventScript_AcceptGiveNewProfile
	case 1, EventScript_DeclineGiveNewProfile
	case 2, EventScript_ProfileInfo2
	@case MULTI_B_PRESSED, EventScript_DeclineGiveNewProfile
	end

EventScript_ProfileInfo2:
	msgbox Text_ExplainProfile
	goto EventScript_AskForNewProfile
	end

EventScript_AcceptGiveNewProfile:
	msgbox Text_WhatAreYouLikeNow
	closemessage
	goto EventScript_GiveProfile
	end

EventScript_DeclineGiveNewProfile:
	msgbox Text_LikeProfileWayItIs
	release
	end

EventScript_GaveSpecialProfile:
	setvar GAVE_PROFILE, TRUE
	setvar VAR_0x8004, 0
	special ShowEasyChatProfile
	waitmessage
	delay 80
	msgbox Text_HeardThatBefore
	release
	end

EventScript_GiveProfile:
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_0x8004, 0, EventScript_GaveSpecialProfile
	goto_if_eq VAR_RESULT, FALSE, EventScript_CancelGiveProfile
	goto_if_eq VAR_RESULT, TRUE, EventScript_GaveProfile
	end

Text_IdLoveToHearYourProfile:
#if GERMAN
	.string "Hallo! Schön dich zu sehen!\p"
	.string "… du bist unhöflich!\n"
	.string "Du könntest mich auch begrüßen!\p"
	.string "Also, erzähl mir ein wenig von dir!\p"
	.string "Sag mir dein Profil!$"
#else
	.string "Hi, glad to meet you!\p"
	.string "…That's unfriendly of you.\n"
	.string "How about saying hi back?\p"
	.string "So, come on, tell me about\n"
	.string "yourself.\p"
	.string "I'd love to hear your profile!$"
#endif

Text_TellMeWhatsYourProfile:
#if GERMAN
	.string "Erzähl mir etwas Gutes über dich. Wie\n"
	.string "lautet dein Profil?$"
#else
	.string "Tell me something good about\n"
	.string "yourself. What's your profile?$"
#endif

Text_ExplainProfile:
#if GERMAN
	.string "Ein Profil besteht aus vier\n"
	.string "Wörtern oder Phrasen.\p"
	.string "Es gibt unzählige Wörter, um\n"
	.string "ein Profil zusammenzustellen.\p"
	.string "Die Wörter und Phrasen sind in\n"
	.string "praktische Gruppen unterteilt.\p"
	.string "Wähle zunächst eine Gruppe\n"
	.string "und anschließend das Wort.\p"
	.string "… es ist leichter, als es sich\n"
	.string "anhört. Probier es doch einmal!$"
#else
	.string "A profile is written using four\n"
	.string "words or phrases.\p"
	.string "There're plenty of words to choose\n"
	.string "from for your profile.\p"
	.string "The words and phrases are placed\n"
	.string "in several convenient groups.\p"
	.string "First, choose a group, then choose\n"
	.string "a word or phrase.\p"
	.string "…It's easier than it sounds.\n"
	.string "Why don't you try it?$"
#endif

Text_WhatsYourProfile:
#if GERMAN
	.string "Wie lautet dein Profil?$"
#else
	.string "What's your profile?$"
#endif

Text_DontBeLikeThat:
#if GERMAN
	.string "Argh! Sei nicht so! Du kannst\n"
	.string "mir dein Profil sagen!$"
#else
	.string "Aww… Don't be like that.\n"
	.string "You can tell me your profile.$"
#endif

Text_DecidedNotTo:
#if GERMAN
	.string "Oh, du willst also nicht!\n"
	.string "Du bist wankelmütig, oder?$"
#else
	.string "Oh, you've decided not to?\n"
	.string "You're fickle, aren't you?$"
#endif

Text_HiWeMeetAgain:
#if GERMAN
	.string "Hi!\n"
	.string "Wir sehen uns wieder!$"
#else
	.string "Hi!\n"
	.string "We meet again!$"
#endif

Text_ChangeYourProfile:
#if GERMAN
	.string "Möchtest du dein Profil ändern?$"
#else
	.string "Would you like to change your\n"
	.string "profile?$"
#endif

Text_WhatAreYouLikeNow:
#if GERMAN
	.string "Wie bist du jetzt?\n"
	.string "Ich möchte das wissen!$"
#else
	.string "What are you like now?\n"
	.string "I'd really like to know.$"
#endif

Text_LikeProfileWayItIs:
#if GERMAN
	.string "O.K.! Du magst dein Profil\n"
	.string "so wie es ist.\p"
	.string "Das ist gut!$"
#else
	.string "Okay, you like your profile the\n"
	.string "way it is.\p"
	.string "I think so, too.$"
#endif

Text_ProfileSaysSomethingAboutYou:
#if GERMAN
	.string "Hmm…\p"
	.string "Dein Profil sagt wirklich etwas\n"
	.string "über dich aus.\p"
	.string "Da ich dich jetzt besser kenne, sind wir\n"
	.string "noch enger als zuvor befreundet.$"
#else
	.string "Hmhm…\p"
	.string "Your profile really says something\n"
	.string "about who you are.\p"
	.string "Now that I know you better, it \n"
	.string "makes us better friends than ever!$"
#endif

Text_HeardThatBefore:
#if GERMAN
	.string "Oh, das habe ich schon \n"
	.string "einmal gehört!\p"
	.string "Mein Cousin, der weit weg wohnt,\n"
	.string "pflegte das zu sagen!$"
#else
	.string "Oh, I've heard that before…\p"
	.string "My cousin, who lives far away,\n"
	.string "always used to say that, I think.$"
#endif

Text_TellMoreNextTime:
#if GERMAN
	.string "Erzähl mir beim nächsten Mal mehr\n"
	.string "von dir!$"
#else
	.string "Please tell me more about\n"
	.string "yourself next time!$"
#endif
