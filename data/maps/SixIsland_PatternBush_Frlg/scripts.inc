SixIsland_PatternBush_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PatternBush_OnTransition
	.byte 0

SixIsland_PatternBush_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_ge VAR_TEMP_1, 50, SixIsland_PatternBush_EventScript_SetEscapeRightExit
	call_if_le VAR_TEMP_1, 49, SixIsland_PatternBush_EventScript_SetEscapeLeftExit
	end

SixIsland_PatternBush_EventScript_SetEscapeRightExit::
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 64, 10
	return

SixIsland_PatternBush_EventScript_SetEscapeLeftExit::
	setescapewarp MAP_SIX_ISLAND_GREEN_PATH, 255, 45, 10
	return

SixIsland_PatternBush_EventScript_Bethany::
	trainerbattle_single TRAINER_PKMN_BREEDER_BETHANY, SixIsland_PatternBush_Text_BethanyIntro, SixIsland_PatternBush_Text_BethanyDefeat
	msgbox SixIsland_PatternBush_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Allison::
	trainerbattle_single TRAINER_PKMN_BREEDER_ALLISON, SixIsland_PatternBush_Text_AllisonIntro, SixIsland_PatternBush_Text_AllisonDefeat
	msgbox SixIsland_PatternBush_Text_AllisonPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Garret::
	trainerbattle_single TRAINER_BUG_CATCHER_GARRET, SixIsland_PatternBush_Text_GarretIntro, SixIsland_PatternBush_Text_GarretDefeat
	msgbox SixIsland_PatternBush_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Jonah::
	trainerbattle_single TRAINER_BUG_CATCHER_JONAH, SixIsland_PatternBush_Text_JonahIntro, SixIsland_PatternBush_Text_JonahDefeat
	msgbox SixIsland_PatternBush_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Vance::
	trainerbattle_single TRAINER_BUG_CATCHER_VANCE, SixIsland_PatternBush_Text_VanceIntro, SixIsland_PatternBush_Text_VanceDefeat
	msgbox SixIsland_PatternBush_Text_VancePostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Nash::
	trainerbattle_single TRAINER_YOUNGSTER_NASH, SixIsland_PatternBush_Text_NashIntro, SixIsland_PatternBush_Text_NashDefeat
	msgbox SixIsland_PatternBush_Text_NashPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Cordell::
	trainerbattle_single TRAINER_YOUNGSTER_CORDELL, SixIsland_PatternBush_Text_CordellIntro, SixIsland_PatternBush_Text_CordellDefeat
	msgbox SixIsland_PatternBush_Text_CordellPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Dalia::
	trainerbattle_single TRAINER_LASS_DALIA, SixIsland_PatternBush_Text_DaliaIntro, SixIsland_PatternBush_Text_DaliaDefeat
	msgbox SixIsland_PatternBush_Text_DaliaPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Joana::
	trainerbattle_single TRAINER_LASS_JOANA, SixIsland_PatternBush_Text_JoanaIntro, SixIsland_PatternBush_Text_JoanaDefeat
	msgbox SixIsland_PatternBush_Text_JoanaPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Riley::
	trainerbattle_single TRAINER_CAMPER_RILEY, SixIsland_PatternBush_Text_RileyIntro, SixIsland_PatternBush_Text_RileyDefeat
	msgbox SixIsland_PatternBush_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Marcy::
	trainerbattle_single TRAINER_PICNICKER_MARCY, SixIsland_PatternBush_Text_MarcyIntro, SixIsland_PatternBush_Text_MarcyDefeat
	msgbox SixIsland_PatternBush_Text_MarcyPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_EventScript_Layton::
	trainerbattle_single TRAINER_RUIN_MANIAC_LAYTON, SixIsland_PatternBush_Text_LaytonIntro, SixIsland_PatternBush_Text_LaytonDefeat
	msgbox SixIsland_PatternBush_Text_LaytonPostBattle, MSGBOX_AUTOCLOSE
	end

SixIsland_PatternBush_Text_BethanyIntro::
#if GERMAN
	.string "Ich bin neugierig, wie du deine\n"
	.string "Pokémon trainierst?$"
#else
	.string "I'm curious, how do you raise your\n"
	.string "POKéMON?$"
#endif

SixIsland_PatternBush_Text_BethanyDefeat::
#if GERMAN
	.string "Du trainierst deine Pokémon mit\n"
	.string "sehr viel Hingabe!$"
#else
	.string "You raise your POKéMON with a\n"
	.string "whole lot of love!$"
#endif

SixIsland_PatternBush_Text_BethanyPostBattle::
#if GERMAN
	.string "Wie deine Mutter dich mit Liebe\n"
	.string "aufgezogen hat, so sollst du deine\l"
	.string "Pokémon mit Liebe trainieren.$"
#else
	.string "In the same way your mother raised\n"
	.string "you full of love, you should raise\l"
	.string "your POKéMON.$"
#endif

SixIsland_PatternBush_Text_AllisonIntro::
#if GERMAN
	.string "Ich arbeite, um die natürliche Ökologie\n"
	.string "der Pokémon hier zu bewahren.$"
#else
	.string "I'm working to preserve the natural\n"
	.string "ecology of POKéMON here.$"
#endif

SixIsland_PatternBush_Text_AllisonDefeat::
#if GERMAN
	.string "Oh, für dein Alter bist du wirklich\n"
	.string "überwältigend!$"
#else
	.string "Oh, for someone so young, you are\n"
	.string "tremendous!$"
#endif

SixIsland_PatternBush_Text_AllisonPostBattle::
#if GERMAN
	.string "Ich sage nicht, dass du keine\n"
	.string "Pokémon fangen sollst.\p"
	.string "Ich möchte nur, dass die Menschen ihre\n"
	.string "Pokémon mit Verantwortungsgefühl\l"
	.string "aufziehen.$"
#else
	.string "I'm not saying that you shouldn't\n"
	.string "catch POKéMON.\p"
	.string "I just want people to raise their\n"
	.string "POKéMON responsibly.$"
#endif

SixIsland_PatternBush_Text_GarretIntro::
#if GERMAN
	.string "Ich habe ein Käfer-Pokémon\n"
	.string "gefangen, das nur hier vorkommt.$"
#else
	.string "I caught a BUG POKéMON that lives\n"
	.string "only around here!$"
#endif

SixIsland_PatternBush_Text_GarretDefeat::
#if GERMAN
	.string "Heheh…\n"
	.string "Ist mein Pokémon nicht toll?$"
#else
	.string "Heheh…\n"
	.string "Isn't my POKéMON awesome?$"
#endif

SixIsland_PatternBush_Text_GarretPostBattle::
#if GERMAN
	.string "Neben dem Busch gibt es ein Mädchen,\n"
	.string "das Skaraborn für Trainer misst.$"
#else
	.string "There's a girl near the BUSH who\n"
	.string "measures HERACROSS for TRAINERS.$"
#endif

SixIsland_PatternBush_Text_JonahIntro::
#if GERMAN
	.string "Weißt du, wenn ich keine Käfer-Pokémon\n"
	.string "einsetze, fühle ich mich nicht wohl.$"
#else
	.string "You know, it just doesn't feel right\n"
	.string "if I don't use BUG POKéMON.$"
#endif

SixIsland_PatternBush_Text_JonahDefeat::
#if GERMAN
	.string "Ist in Ordnung! Niederlagen machen\n"
	.string "auch den Reiz von Pokémon aus.$"
#else
	.string "It's okay, losing is a fun part of\n"
	.string "POKéMON's appeal, too.$"
#endif

SixIsland_PatternBush_Text_JonahPostBattle::
#if GERMAN
	.string "Apropos, “Reiz” ist ein merkwürdiges\n"
	.string "Wort, wenn man darüber nachdenkt.\p"
	.string "Wie, wie eine Orangenschale?\n"
	.string "Oder wie eine läutende Glocke?$"
#else
	.string "By the way, “appeal” is a weird\n"
	.string "word, if you think about it.\p"
	.string "Like, is it like an orange peel?\n"
	.string "Or like a ringing bell?$"
#endif

SixIsland_PatternBush_Text_VanceIntro::
#if GERMAN
	.string "Ja, ja, ja!\n"
	.string "Sieh nur die vielen Käfer-Pokémon!$"
#else
	.string "Yeah, yeah, yeah!\n"
	.string "Look at all the BUG POKéMON!$"
#endif

SixIsland_PatternBush_Text_VanceDefeat::
#if GERMAN
	.string "Ich wurde besiegt, als ich noch\n"
	.string "feierte!$"
#else
	.string "I got beat while I was still busy\n"
	.string "celebrating!$"
#endif

SixIsland_PatternBush_Text_VancePostBattle::
#if GERMAN
	.string "Beim nächsten Mal nehme ich\n"
	.string "meinen kleinen Bruder mit.$"
#else
	.string "I'm going to bring my little brother\n"
	.string "here next time.$"
#endif

SixIsland_PatternBush_Text_NashIntro::
#if GERMAN
	.string "Sieh nur! Da sind lustige Muster\n"
	.string "am Boden.$"
#else
	.string "Look, look! There are funny\n"
	.string "patterns on the ground.$"
#endif

SixIsland_PatternBush_Text_NashDefeat::
#if GERMAN
	.string "Supertoll!$"
#else
	.string "Super awesome!$"
#endif

SixIsland_PatternBush_Text_NashPostBattle::
#if GERMAN
	.string "Die komischen Muster auf dem\n"
	.string "Boden…\p"
	.string "Sie ähneln den Mustern auf der\n"
	.string "Kleidung meines Großvaters.$"
#else
	.string "The funny patterns on the ground…\p"
	.string "They look like the patterns on my\n"
	.string "grandpa's clothes.$"
#endif

SixIsland_PatternBush_Text_CordellIntro::
#if GERMAN
	.string "Ich wette, du denkst, ich sei\n"
	.string "irgend so ein Kerl, oder?$"
#else
	.string "I bet you think I'm just some guy,\n"
	.string "don't you, eh?$"
#endif

SixIsland_PatternBush_Text_CordellDefeat::
#if GERMAN
	.string "Ich wette, du denkst, ich sei\n"
	.string "schwach, oder?$"
#else
	.string "I bet you think I'm weak,\n"
	.string "don't you, eh?$"
#endif

SixIsland_PatternBush_Text_CordellPostBattle::
#if GERMAN
	.string "Ihr Stadtmenschen kommt immer so\n"
	.string "hip daher mit euren trendy Hüten…\p"
	.string "Wie wärs, wenn du ihn mir gibst?$"
#else
	.string "Ayup, you townies come around all\n"
	.string "so dandy with a hat that flashy…\p"
	.string "How about giving me that?$"
#endif

SixIsland_PatternBush_Text_DaliaIntro::
#if GERMAN
	.string "Nimm einen tiefen Atemzug.\n"
	.string "Ist die Luft nicht köstlich?$"
#else
	.string "Take a deep breath.\n"
	.string "Isn't the air delicious?$"
#endif

SixIsland_PatternBush_Text_DaliaDefeat::
#if GERMAN
	.string "Wenn du möchtest, kann ich dir\n"
	.string "beibringen, wie man richtig atmet.$"
#else
	.string "If you'd like, I can teach you how\n"
	.string "to breathe properly.$"
#endif

SixIsland_PatternBush_Text_DaliaPostBattle::
#if GERMAN
	.string "Zunächst, ausatmen.\n"
	.string "Atme ganz tief aus.\p"
	.string "Wenn du nicht mehr ausatmen kannst,\n"
	.string "atme die saubere Luft ein!\p"
	.string "Ist das nicht erfrischend?$"
#else
	.string "First, exhale.\n"
	.string "Blow everything out.\p"
	.string "When you can't exhale anymore,\n"
	.string "inhale the clean air!\p"
	.string "Isn't it refreshing?$"
#endif

SixIsland_PatternBush_Text_JoanaIntro::
#if GERMAN
	.string "Ich liebe Käfer-Pokémon!\n"
	.string "Deswegen bin ich immer hier.\p"
	.string "Bin ich das einzige Mädchen, das\n"
	.string "so denkt?$"
#else
	.string "I love BUG POKéMON.\n"
	.string "That's why I'm here all the time.\p"
	.string "Am I the only girl like that?$"
#endif

SixIsland_PatternBush_Text_JoanaDefeat::
#if GERMAN
	.string "Ich habe verloren, aber ich kann noch\n"
	.string "lachen! Bin ich das einzige Mädchen,\l"
	.string "welches das kann?$"
#else
	.string "I lost, but I'm still laughing.\n"
	.string "Am I the only girl like that?$"
#endif

SixIsland_PatternBush_Text_JoanaPostBattle::
#if GERMAN
	.string "Ich werde weiterhin Käfer-Pokémon\n"
	.string "fangen.\p"
	.string "Bin ich das einzige Mädchen, das\n"
	.string "dies so macht?$"
#else
	.string "I'm going to keep on collecting\n"
	.string "BUG POKéMON.\p"
	.string "Am I the only girl like that?$"
#endif

SixIsland_PatternBush_Text_RileyIntro::
#if GERMAN
	.string "Das ist ein guter Platz.\n"
	.string "Ich schlage hier mein Zelt auf.$"
#else
	.string "This is a good spot.\n"
	.string "I'll pitch my tent here.$"
#endif

SixIsland_PatternBush_Text_RileyDefeat::
#if GERMAN
	.string "Ausgeschaltet…$"
#else
	.string "Wimped out…$"
#endif

SixIsland_PatternBush_Text_RileyPostBattle::
#if GERMAN
	.string "Ich werde hier den Nachthimmel\n"
	.string "beobachten.$"
#else
	.string "I'm going to observe the night sky\n"
	.string "here.$"
#endif

SixIsland_PatternBush_Text_MarcyIntro::
#if GERMAN
	.string "Oh, pfui!\p"
	.string "Ein Käfer hat mich gestochen!$"
#else
	.string "Oh, yuck!\n"
	.string "I think a bug stung me!$"
#endif

SixIsland_PatternBush_Text_MarcyDefeat::
#if GERMAN
	.string "Es war kein Käfer. Ich habe mein\n"
	.string "Schienbein am Gras aufgeschnitten.$"
#else
	.string "It wasn't a bug.\n"
	.string "I cut my shin on some grass.$"
#endif

SixIsland_PatternBush_Text_MarcyPostBattle::
#if GERMAN
	.string "Ein kleiner Schnitt wie dieser…\n"
	.string "ist mit ein wenig Spucke geheilt.$"
#else
	.string "A little cut like that…\n"
	.string "A little spit's enough to cure it!$"
#endif

SixIsland_PatternBush_Text_LaytonIntro::
#if GERMAN
	.string "Ist dir irgendetwas Merkwürdiges\n"
	.string "in dieser Gegend aufgefallen?$"
#else
	.string "Have you noticed something odd\n"
	.string "about these parts?$"
#endif

SixIsland_PatternBush_Text_LaytonDefeat::
#if GERMAN
	.string "Hast du den Boden neben deinen\n"
	.string "Füßen genau betrachtet?$"
#else
	.string "Have you taken a good look around\n"
	.string "your feet?$"
#endif

SixIsland_PatternBush_Text_LaytonPostBattle::
#if GERMAN
	.string "Es gibt Stellen hier im Musterbusch, an\n"
	.string "denen kein Gras wächst.\l"
	.string "Was könnte die Ursache für solch ein\l"
	.string "Phänomen sein?$"
#else
	.string "There are places here in PATTERN\n"
	.string "BUSH where grass won't grow.\p"
	.string "What could be the cause of such\n"
	.string "a phenomenon?$"
#endif

