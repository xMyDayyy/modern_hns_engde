CinnabarIsland_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

CinnabarIsland_OnTransition:
	setflag FLAG_VISITED_CINNABAR_ISLAND
	callnative SetTimeBasedEncounters
	end

CinnabarIsland_EventScript_Blaine::
    lock
    faceplayer
    msgbox CinnabarIsland_Text_Blaine, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_CINNABAR_BLAINE
    removeobject LOCALID_CINNABAR_BLAINE
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_BLAINE
    release
    end

CinnabarIsland_Text_Blaine:
#if GERMAN
	.string "Pyro: Ich gebe nicht auf, bis zu dem Tag,\n"
	.string "an dem die Arena der Zinnoberinsel\l"
	.string "wieder aufgebaut wurde!\p"
	.string "Bis dahin bin ich im Kampf-Dojo.\n"
	.string "Wir sehen uns.$"
#else
    .string "BLAINE: I'll never give up\n"
	.string "until the day I've rebuilt\l"
	.string "CINNABAR GYM!\p"
	.string "I'll be at the FIGHTING DOJO\n"
	.string "until then.$"
#endif



CinnabarIsland_EventScript_Blue::
	lock
	faceplayer
	goto_if_eq VAR_NUM_BADGES, 15, CinnabarIsland_EventScript_BlueActive
	msgbox CinnabarIsland_Text_BlueBefore, MSGBOX_NPC
	release
	end

CinnabarIsland_EventScript_BlueActive::
	msgbox CinnabarIsland_Text_Blue, MSGBOX_NPC
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_CINNABAR_BLUE
	removeobject LOCALID_CINNABAR_BLUE
	clearflag FLAG_HIDE_VIRIDIAN_BLUE
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end


CinnabarIsland_Text_BlueBefore:
#if GERMAN
	.string "Wer bist du?\p"
	.string "Es ist offensichtlich, dass du\n"
	.string "ein Trainer bist…\p"
	.string "Ich heiße Blau.\p"
	.string "Ich war einst der Champion, auch\n"
	.string "wenn nur für kurze Zeit…\p"
	.string "Dieser Rot hat mir dazwischengefunkt…\n"
	.string "…\p"
	.string "Was willst du überhaupt? Willst du\n"
	.string "mich herausfordern?\p"
	.string "…Ich sage es ungern, aber ich hab\n"
	.string "jetzt keine Lust auf einen Kampf.\p"
	.string "Sieh dich gut um…\p"
	.string "Ein Vulkan bricht aus, und plötzlich\n"
	.string "verschwindet eine ganze Stadt.\p"
	.string "Wir können weiter gewinnen und\n"
	.string "verlieren in Pokémon. Aber wenn die\l"
	.string "Natur nur zuckt, verlieren wir in\l"
	.string "Sekunden.\p"
	.string "…\p"
	.string "So ist das eben…\p"
	.string "Aber egal, ich bin immer noch ein\n"
	.string "Trainer.\p"
	.string "Wenn ich einen starken Gegner sehe,\n"
	.string "möchte ich kämpfen.\p"
	.string "Willst du gegen mich antreten, musst\n"
	.string "du zuerst 15 Orden haben.\p"
	.string "Dann können wir kämpfen.$"
#else
	.string "Who are you?\p"
	.string "Well, it's plain to see that you're\n"
	.string "a trainer…\p"
	.string "My name's BLUE.\p"
	.string "I was once the CHAMPION, although\n"
	.string "it was for only a short time…\p"
	.string "That meddling RED did me in…\p"
	.string "Anyway, what do you want? You want\n"
	.string "to challenge me or something?\p"
	.string "…I hate to say it, but I'm not in\n"
	.string "the mood for a battle now.\p"
	.string "Take a good look around you…\p"
	.string "A volcano erupts, and just like\n"
	.string "that, a whole town disappears.\p"
	.string "We can go on winning and losing in\n"
	.string "POKéMON. But if nature so much as\l"
	.string "twitches, we can lose in a second.\p"
	.string "…\p"
	.string "That's the way it is…\p"
	.string "But, anyway, I'm still a trainer.\p"
	.string "If I see a strong opponent, it\n"
	.string "makes me want to battle.\p"
	.string "If you want to battle me, you'll\n"
	.string "need 15 badges first.\p"
	.string "I'll take you on then.$"
#endif

CinnabarIsland_Text_Blue:
#if GERMAN
	.string "Wer bist du?\p"
	.string "Es ist offensichtlich, dass du\n"
	.string "ein Trainer bist…\p"
	.string "Ich heiße Blau.\p"
	.string "Ich war einst der Champion, auch\n"
	.string "wenn nur für kurze Zeit…\p"
	.string "Dieser Rot hat mir dazwischengefunkt…\n"
	.string "…\p"
	.string "Was willst du überhaupt? Willst du\n"
	.string "mich herausfordern?\p"
	.string "…Ich sage es ungern, aber ich hab\n"
	.string "jetzt keine Lust auf einen Kampf.\p"
	.string "Sieh dich gut um…\p"
	.string "Ein Vulkan bricht aus, und plötzlich\n"
	.string "verschwindet eine ganze Stadt.\p"
	.string "Wir können weiter gewinnen und\n"
	.string "verlieren in Pokémon. Aber wenn die\l"
	.string "Natur nur zuckt, verlieren wir in\l"
	.string "Sekunden.\p"
	.string "…\p"
	.string "So ist das eben…\p"
	.string "Aber egal, ich bin immer noch ein\n"
	.string "Trainer.\p"
	.string "Wenn ich einen starken Gegner sehe,\n"
	.string "möchte ich kämpfen.\p"
	.string "Willst du gegen mich antreten, komm\n"
	.string "zur Vertania-City Arena.\p"
	.string "Dann kämpfen wir.$"
#else
	.string "Who are you?\p"
	.string "Well, it's plain to see that you're\n"
	.string "a trainer…\p"
	.string "My name's BLUE.\p"
	.string "I was once the CHAMPION, although\n"
	.string "it was for only a short time…\p"
	.string "That meddling RED did me in…\p"
	.string "Anyway, what do you want? You want\n"
	.string "to challenge me or something?\p"
	.string "…I hate to say it, but I'm not in\n"
	.string "the mood for a battle now.\p"
	.string "Take a good look around you…\p"
	.string "A volcano erupts, and just like\n"
	.string "that, a whole town disappears.\p"
	.string "We can go on winning and losing in\n"
	.string "POKéMON. But if nature so much as\l"
	.string "twitches, we can lose in a second.\p"
	.string "…\p"
	.string "That's the way it is…\p"
	.string "But, anyway, I'm still a trainer.\p"
	.string "If I see a strong opponent, it\n"
	.string "makes me want to battle.\p"
	.string "If you want to battle me, come to\n"
	.string "the VIRIDIAN GYM.\p"
	.string "I'll take you on then.$"
#endif

CinnabarIsland_EventScript_Sign::
	msgbox CinnabarIsland_Text_Sign, MSGBOX_SIGN
	end

CinnabarIsland_EventScript_GymSign::
	msgbox CinnabarIsland_Text_GymSign, MSGBOX_SIGN
	end

CinnabarIsland_Text_GymSign:
#if GERMAN
	.string "…Da hängt eine Nachricht!\p"
	.string "Die Arena der Zinnoberinsel ist auf die\n"
	.string "Seeschauminseln umgezogen!\l"
	.string "- Pyro$"
#else
	.string "There's a notice here…\p"
	.string "CINNABAR GYM has relocated to\n"
	.string "SEAFOAM ISLANDS.\p"
	.string "BLAINE$"
#endif

CinnabarIsland_Text_Sign:
#if GERMAN
	.string "Zinnoberinsel\p"
	.string "Die Feurige Stadt brennender Begierde$"
#else
	.string "CINNABAR ISLAND\p"
	.string "The Fiery Town of Burning Desire$"
#endif

