FiveIsland_ResortGorgeous_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FiveIsland_ResortGorgeous_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_ResortGorgeous_OnFrame
	.byte 0

FiveIsland_ResortGorgeous_OnWarp::
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth
	.2byte 0

FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

FiveIsland_ResortGorgeous_OnFrame::
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene
	.2byte 0

FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene::
	lockall
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow
	closemessage
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	opendoor 39, 8
	waitdooranim
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, FiveIsland_ResortGorgeous_Movement_SelphyEnterHome
	waitmovement 0
	closedoor 39, 8
	waitdooranim
	removeobject LOCALID_RESORT_GORGEOUS_SELPHY
	clearflag FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 2
	releaseall
	end

FiveIsland_ResortGorgeous_Movement_SelphyEnterHome::
	walk_up
	set_invisible
	step_end

FiveIsland_ResortGorgeous_EventScript_SelphysHouseSign::
	msgbox FiveIsland_ResortGorgeous_Text_SelphysHouse, MSGBOX_SIGN
	end

FiveIsland_ResortGorgeous_Text_DaisyIntro::
#if GERMAN
	.string "Mit diesen Händen werde ich\n"
	.string "den Sieg herbeiführen.$"
#else
	.string "With these hands, I will create\n"
	.string "my victory!$"
#endif

FiveIsland_ResortGorgeous_Text_DaisyDefeat::
#if GERMAN
	.string "Diese Schande…\n"
	.string "Ich werde rot…$"
#else
	.string "The shame of this…\n"
	.string "I'm red-faced…$"
#endif

FiveIsland_ResortGorgeous_Text_DaisyPostBattle::
#if GERMAN
	.string "Ugh! Meine Farbeimer sind\n"
	.string "überall verstreut.$"
#else
	.string "Uh-oh, my paint tubes have\n"
	.string "scattered everywhere!$"
#endif

FiveIsland_ResortGorgeous_Text_CelinaIntro::
#if GERMAN
	.string "Entschuldigung!\n"
	.string "Ich versuche zu malen.\l"
	.string "Geh mir bitte aus der Sicht!$"
#else
	.string "Excuse me!\n"
	.string "I'm trying to paint.\l"
	.string "Please keep out of my sight!$"
#endif

FiveIsland_ResortGorgeous_Text_CelinaDefeat::
#if GERMAN
	.string "Diese Niederlage…\n"
	.string "Mir wird so schwindlig…$"
#else
	.string "This loss…\n"
	.string "I feel like I'm whiting out…$"
#endif

FiveIsland_ResortGorgeous_Text_CelinaPostBattle::
#if GERMAN
	.string "Gillian?\n"
	.string "Bitte beweg deinen Kopf ein wenig…\l"
	.string "Genau! Dieser Blick ist es!$"
#else
	.string "GILLIAN?\n"
	.string "Please tilt your head slightly…\l"
	.string "There! That's the look I want!$"
#endif

FiveIsland_ResortGorgeous_Text_RaynaIntro::
#if GERMAN
	.string "Hmm…\n"
	.string "Der Winkel ist noch nicht perfekt…$"
#else
	.string "Hmm…\n"
	.string "The angle, it is not quite there…$"
#endif

FiveIsland_ResortGorgeous_Text_RaynaDefeat::
#if GERMAN
	.string "Oh…\n"
	.string "Meine Emotionen sind blau…$"
#else
	.string "Oh…\n"
	.string "My feelings, they are blue…$"
#endif

FiveIsland_ResortGorgeous_Text_RaynaPostBattle::
#if GERMAN
	.string "Der Himmel und das Meer…\n"
	.string "Sie sind so wankelmütig.\p"
	.string "Ihr ständig wechselnder Ausdruck\n"
	.string "macht es nicht leicht, sie\l"
	.string "malerisch einzufangen.$"
#else
	.string "The sky and the sea…\n"
	.string "They are so fickle.\p"
	.string "Their changing expressions make\n"
	.string "them difficult to capture.$"
#endif

FiveIsland_ResortGorgeous_Text_JackiIntro::
#if GERMAN
	.string "Ich besuche das Sommerhaus\n"
	.string "meines Freundes, wenn\l"
	.string "du fragst.$"
#else
	.string "I am visiting my friend's retreat,\n"
	.string "if you must know.$"
#endif

FiveIsland_ResortGorgeous_Text_JackiDefeat::
#if GERMAN
	.string "Oh, du bist stark!$"
#else
	.string "Oh, my, so strong.$"
#endif

FiveIsland_ResortGorgeous_Text_JackiPostBattle::
#if GERMAN
	.string "Ich finde es angenehm, bei einer\n"
	.string "sanften Meeresbrise zum\l"
	.string "Spaß zu kämpfen.$"
#else
	.string "I find it pleasurable to leisurely\n"
	.string "battle in the gentle sea breeze.$"
#endif

FiveIsland_ResortGorgeous_Text_GillianIntro::
#if GERMAN
	.string "Ich denke darüber nach, einen\n"
	.string "Pool nur für Pokémon\l"
	.string "einzurichten.$"
#else
	.string "I'm thinking of having a pool\n"
	.string "made specially for POKéMON.$"
#endif

FiveIsland_ResortGorgeous_Text_GillianDefeat::
#if GERMAN
	.string "Oh, meine Güte!$"
#else
	.string "Oh, my goodness gracious!$"
#endif

FiveIsland_ResortGorgeous_Text_GillianPostBattle::
#if GERMAN
	.string "Ein Pool wäre cool, aber ein\n"
	.string "Solarium wäre noch besser.$"
#else
	.string "A pool would be nice, but I must\n"
	.string "say, a sun-room may be sublime.$"
#endif

FiveIsland_ResortGorgeous_Text_DestinIntro::
#if GERMAN
	.string "Ich bin ein starker Sprinter.\n"
	.string "Ich bin wirklich schnell!$"
#else
	.string "I'm a good runner.\n"
	.string "I'm really fast!$"
#endif

FiveIsland_ResortGorgeous_Text_DestinDefeat::
#if GERMAN
	.string "Ups!\n"
	.string "Ich war zu schnell!$"
#else
	.string "Oops!\n"
	.string "I rushed things!$"
#endif

FiveIsland_ResortGorgeous_Text_DestinPostBattle::
#if GERMAN
	.string "Wenn ich mit dem Wind renne,\n"
	.string "fühlt es sich an, als ob ich\l"
	.string "fliegen würde…$"
#else
	.string "When I run with the wind, it feels\n"
	.string "like I could fly!$"
#endif

FiveIsland_ResortGorgeous_Text_TobyIntro::
#if GERMAN
	.string "Das maritime Leben hier sagt\n"
	.string "mir zu!$"
#else
	.string "I say, this marine life here at\n"
	.string "this resort agrees with me.$"
#endif

FiveIsland_ResortGorgeous_Text_TobyDefeat::
#if GERMAN
	.string "Das ist Wahnsinn!\n"
	.string "Du machst Witze!$"
#else
	.string "That's a shocker!\n"
	.string "You must be joking.$"
#endif

FiveIsland_ResortGorgeous_Text_TobyPostBattle::
#if GERMAN
	.string "Das so ernst zu nehmen…\n"
	.string "Wie unsensibel.$"
#else
	.string "Getting so serious over this…\n"
	.string "How nonsensical.$"
#endif

FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow::
#if GERMAN
	.string "Kea: Danke!\p"
	.string "Du darfst jetzt gehen!$"
#else
	.string "SELPHY: Thank you.\p"
	.string "You may go now.$"
#endif

FiveIsland_ResortGorgeous_Text_SelphysHouse::
#if GERMAN
	.string "Keas Haus$"
#else
	.string "SELPHY'S HOUSE$"
#endif

