MtPyre_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_2F_SetHoleWarp
	.byte 0

MtPyre_2F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_MT_PYRE_1F
	end

MtPyre_2F_EventScript_Woman::
	msgbox MtPyre_2F_Text_MemoriesOfSkitty, MSGBOX_NPC
	end

MtPyre_2F_EventScript_PokefanM::
	msgbox MtPyre_2F_Text_TumbledFromFloorAbove, MSGBOX_NPC
	end

MtPyre_2F_EventScript_Mark::
	trainerbattle_single TRAINER_MARK, MtPyre_2F_Text_MarkIntro, MtPyre_2F_Text_MarkDefeat
	msgbox MtPyre_2F_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Luke::
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_LukeIntro, MtPyre_2F_Text_LukeDefeat, MtPyre_2F_Text_LukeNotEnoughMons
	msgbox MtPyre_2F_Text_LukePostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Dez::
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_DezIntro, MtPyre_2F_Text_DezDefeat, MtPyre_2F_Text_DezNotEnoughMons
	msgbox MtPyre_2F_Text_DezPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Leah::
	trainerbattle_single TRAINER_LEAH, MtPyre_2F_Text_LeahIntro, MtPyre_2F_Text_LeahDefeat
	msgbox MtPyre_2F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_EventScript_Zander::
	trainerbattle_single TRAINER_ZANDER, MtPyre_2F_Text_ZanderIntro, MtPyre_2F_Text_ZanderDefeat
	msgbox MtPyre_2F_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_2F_Text_MemoriesOfSkitty:
#if GERMAN
	.string "Die Erinnerungen an meinen Liebling\n"
	.string "Eneco… Ich könnte weinen…$"
#else
	.string "Memories of my darling SKITTY…\n"
	.string "My eyes overflow thinking about it.$"
#endif

MtPyre_2F_Text_TumbledFromFloorAbove:
#if GERMAN
	.string "Au au au au… Der Boden hat an einigen\n"
	.string "Stellen Löcher.\p"
	.string "Ich habe das nicht gesehen und bin ins\n"
	.string "untere Stockwerk gefallen. Autsch, aua.$"
#else
	.string "Ooch, ouch… There are holes in the\n"
	.string "ground here and there.\p"
	.string "I didn't notice and took a tumble from\n"
	.string "the floor above.$"
#endif

MtPyre_2F_Text_MarkIntro:
#if GERMAN
	.string "Hey! Suchst du nach Pokémon? Du bist\n"
	.string "mir hinterhergeschlichen! Fiesling!$"
#else
	.string "Hey! Are you searching for POKéMON?\n"
	.string "You came along after me! You're rude!$"
#endif

MtPyre_2F_Text_MarkDefeat:
#if GERMAN
	.string "Oweiowei.\n"
	.string "Tut mir Leid. Entschuldige bitte!$"
#else
	.string "Ayieeeeh!\n"
	.string "I'm sorry, forgive me, please!$"
#endif

MtPyre_2F_Text_MarkPostBattle:
#if GERMAN
	.string "Hier sind nie viele Leute. Daher soll\n"
	.string "es hier seltene Pokémon geben.$"
#else
	.string "People don't come here often, so\n"
	.string "I thought there'd be rare POKéMON.$"
#endif

MtPyre_2F_Text_LukeIntro:
#if GERMAN
	.string "Leif: Wir machen hier eine Mutprobe.\p"
	.string "Hähä, wenn ich zeige, wie cool ich bin,\n"
	.string "wird sie sich sicher in mich verlieben!\p"
	.string "Besser: Ich werde dich vernichtend\n"
	.string "schlagen. Dann bin ich echt cool!$"
#else
	.string "LUKE: We're here on a dare.\p"
	.string "Heheh, if I show her how cool I am,\n"
	.string "she'll fall for me. I know it!\p"
	.string "I know! I'll cream you and show her\n"
	.string "how cool I am!$"
#endif

MtPyre_2F_Text_LukeDefeat:
#if GERMAN
	.string "Leif: Huups!$"
#else
	.string "LUKE: Whoopsie!$"
#endif

MtPyre_2F_Text_LukePostBattle:
#if GERMAN
	.string "Leif: Wir haben verloren, aber das macht\n"
	.string "nichts! Solange ich nur bei ihr bin.\p"
	.string "Wir werden diese Mutprobe bestehen!$"
#else
	.string "LUKE: Well, we lost but that's okay!\n"
	.string "I'm right here by your side.\l"
	.string "We'll make it through this dare!$"
#endif

MtPyre_2F_Text_LukeNotEnoughMons:
#if GERMAN
	.string "Leif: Wenn du es mit mir aufnehmen\n"
	.string "willst, brauchst du mehr Pokémon.\p"
	.string "Hast du die nicht, kann ich meiner\n"
	.string "Angebeteten nicht beweisen, wie cool\l"
	.string "ich bin!$"
#else
	.string "LUKE: If you want to take me on,\n"
	.string "bring some more POKéMON.\p"
	.string "If you don't, I won't be able to show\n"
	.string "off to my girl how cool I am!$"
#endif

MtPyre_2F_Text_DezIntro:
#if GERMAN
	.string "Ina: Ich bin hier, um mit meinem\n"
	.string "Freund eine Mutprobe zu bestehen.\p"
	.string "Es ist unheimlich hier, aber zusammen\n"
	.string "mit meinem Freund ist es schon okay.\p"
	.string "Ich hab’s: Mein Freund soll zeigen, wie\n"
	.string "cool er ist, indem er dich besiegt!$"
#else
	.string "DEZ: I came here on a dare with my\n"
	.string "boyfriend.\p"
	.string "It's really scary, but I'm with my\n"
	.string "boyfriend. It's okay.\p"
	.string "I know! I'll get my boyfriend to look\n"
	.string "cool by beating you!$"
#endif

MtPyre_2F_Text_DezDefeat:
#if GERMAN
	.string "Ina: Uuuaaa! Ich habe Angst.$"
#else
	.string "DEZ: Waaaah! I'm scared!$"
#endif

MtPyre_2F_Text_DezPostBattle:
#if GERMAN
	.string "Ina: Wir sind ineinander verliebt,\n"
	.string "daher stört uns eine Niederlage nicht.$"
#else
	.string "DEZ: We're lovey-dovey, so we don't\n"
	.string "care if we lose!$"
#endif

MtPyre_2F_Text_DezNotEnoughMons:
#if GERMAN
	.string "Ina: Wenn du gegen uns antreten willst,\n"
	.string "solltest du mindestens zwei Pokémon\l"
	.string "besitzen.\p"
	.string "Mein Freund ist stark. Daher wirst du\n"
	.string "mit einem Pokémon nichts ausrichten.$"
#else
	.string "DEZ: If you want to challenge us, you\n"
	.string "should bring at least two POKéMON.\p"
	.string "My boyfriend's strong.\n"
	.string "Just one POKéMON won't do at all.$"
#endif

MtPyre_2F_Text_LeahIntro:
#if GERMAN
	.string "Dein Anblick ist echt ungewöhnlich…\n"
	.string "Verschwinde, bevor dir irgendwas\l"
	.string "passiert.$"
#else
	.string "You are an unfamiliar sight…\n"
	.string "Depart before anything befalls you!$"
#endif

MtPyre_2F_Text_LeahDefeat:
#if GERMAN
	.string "Hmm… Ausdauer hast du ja…$"
#else
	.string "Hmm…\n"
	.string "You're durable.$"
#endif

MtPyre_2F_Text_LeahPostBattle:
#if GERMAN
	.string "In unserer Familie gibt es schon seit\n"
	.string "Generationen Trainer, die in dieser\l"
	.string "Gegend leben…\p"
	.string "Es ist eine Pflicht, den Berg zu\n"
	.string "beschützen…$"
#else
	.string "Our family has been TRAINERS here\n"
	.string "since my great-grandmother's time…\p"
	.string "It is my duty to protect this\n"
	.string "mountain…$"
#endif

MtPyre_2F_Text_ZanderIntro:
#if GERMAN
	.string "Kiyaaaah!\n"
	.string "Ich bin außer mir vor Schreck.$"
#else
	.string "Kiyaaaaah!\n"
	.string "I'm terrified!$"
#endif

MtPyre_2F_Text_ZanderDefeat:
#if GERMAN
	.string "Neeeeiiiiiiinnnnn!\n"
	.string "Ich habe meine Intelligenz verloren.$"
#else
	.string "Nooooooo!\n"
	.string "I lost my wits!$"
#endif

MtPyre_2F_Text_ZanderPostBattle:
#if GERMAN
	.string "Ich mach mir jedes Mal vor Schreck in\n"
	.string "die Hose, wenn sich etwas bewegt…\p"
	.string "Ich hätte nicht hierher kommen dürfen…$"
#else
	.string "I get freaked out every time I see\n"
	.string "anything move…\p"
	.string "I shouldn't have come here to train…$"
#endif

