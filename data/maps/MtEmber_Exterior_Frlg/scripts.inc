MtEmber_Exterior_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Exterior_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, MtEmber_Exterior_OnLoad
	.byte 0

MtEmber_Exterior_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
	call_if_eq VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2, MtEmber_Exterior_EventScript_RocketsFaceDown
	end

MtEmber_Exterior_EventScript_RocketsFaceDown::
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT1, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT2, MOVEMENT_TYPE_FACE_DOWN
	return

MtEmber_Exterior_OnLoad::
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_OpenCave
	end

MtEmber_Exterior_EventScript_OpenCave::
	setmetatile 42, 39, METATILE_MtEmber_CaveEntrance, 0
	return

MtEmber_Exterior_EventScript_Grunt1::
	lock
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_Grunt1Defeated
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt1
	msgbox MtEmber_Exterior_Text_WellTryDiggingHere
	release
	end

MtEmber_Exterior_EventScript_Grunt1Defeated::
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
	release
	end

MtEmber_Exterior_EventScript_BattleGrunt1::
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_FacePlayer
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	msgbox MtEmber_Exterior_Text_Grunt1Intro
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_Text_Grunt1Defeat
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedBothGrunts
	release
	end

MtEmber_Exterior_EventScript_DefeatedBothGrunts::
	msgbox MtEmber_Exterior_Text_WellRegroupDontStepInsideThere
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_MT_EMBER_GRUNT1
	removeobject LOCALID_MT_EMBER_GRUNT2
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

MtEmber_Exterior_EventScript_Grunt2::
	lock
	faceplayer
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedGrunt2
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt2
	msgbox MtEmber_Exterior_Text_YoureInTheWayGetLost
	closemessage
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MtEmber_Exterior_EventScript_DefeatedGrunt2::
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
	release
	end

MtEmber_Exterior_EventScript_BattleGrunt2::
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	msgbox MtEmber_Exterior_Text_Grunt2Intro
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_Text_Grunt2Defeat
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_DefeatedBothGrunts
	release
	end

MtEmber_Exterior_EventScript_RocketPasswordScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	msgbox MtEmber_Exterior_Text_PunchedThroughAtLast
	message MtEmber_Exterior_Text_WhatsPasswordAgain
	waitmessage
	playse SE_PIN
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_QuestionMark
	waitmovement 0
	waitbuttonpress
	msgbox MtEmber_Exterior_Text_FirstPasswordGoldeen
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	call MtEmber_Exterior_EventScript_RocketsFaceDown
	msgbox MtEmber_Exterior_Text_SnoopsBeenListeningIn
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
	releaseall
	end

MtEmber_Exterior_EventScript_Logan::
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
	end

MtEmber_Exterior_EventScript_Beth::
	trainerbattle_single TRAINER_PKMN_RANGER_BETH, MtEmber_Exterior_Text_BethIntro, MtEmber_Exterior_Text_BethDefeat
	msgbox MtEmber_Exterior_Text_BethPostBattle, MSGBOX_AUTOCLOSE
	end

MtEmber_Exterior_EventScript_Jocelyn::
	trainerbattle_single TRAINER_CRUSH_GIRL_JOCELYN, MtEmber_Exterior_Text_JocelynIntro, MtEmber_Exterior_Text_JocelynDefeat
	msgbox MtEmber_Exterior_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

Text_ExplosionTeach::
#if GERMAN
	.string "Stell dir vor, dieser Vulkan würde\n"
	.string "ausbrechen!\p"
	.string "Die Eruption wäre unser Ende! Ist\n"
	.string "das nicht erschreckend?\p"
	.string "Während uns die Knie schlottern, könnte\n"
	.string "ich einem Pokémon Explosion lehren!$"
#else
	.string "Can you imagine?\n"
	.string "If this volcano were to erupt?\p"
	.string "The explosion would be the end of\n"
	.string "us. How terrifying is that?\p"
	.string "While we're terrified, would you\n"
	.string "like me to teach EXPLOSION?$"
#endif

Text_ExplosionDeclined::
#if GERMAN
	.string "Ja, genau, du hast Recht!\n"
	.string "Das ist zu erschreckend!$"
#else
	.string "Yeah, you're right.\n"
	.string "It is too terrifying.$"
#endif

Text_ExplosionWhichMon::
#if GERMAN
	.string "Du bist unheimlich tapfer!\p"
	.string "Welches Pokémon soll\n"
	.string "Explosion erlernen?$"
#else
	.string "You're terribly brave!\p"
	.string "Which POKéMON should I teach\n"
	.string "EXPLOSION?$"
#endif

Text_ExplosionTaught::
#if GERMAN
	.string "Explosion auf diesem Vulkan\n"
	.string "einzusetzen…\p"
	.string "Was für ein aufreibender\n"
	.string "Nervenkitzel!$"
#else
	.string "Using EXPLOSION while on this\n"
	.string "volcano…\p"
	.string "What a terrifying thrill!$"
#endif

MtEmber_Exterior_Text_WellTryDiggingHere::
#if GERMAN
	.string "Hier drüben!\n"
	.string "Wir versuchen, hier zu graben.\p"
	.string "Der Schatz, über den die Vors.\n"
	.string "reden, muss hier irgendwo sein.$"
#else
	.string "Over here.\n"
	.string "We'll try digging here.\p"
	.string "That treasure the ADMINS've been\n"
	.string "talking about should be here.$"
#endif

MtEmber_Exterior_Text_YoureInTheWayGetLost::
#if GERMAN
	.string "Was zur…?\n"
	.string "Du bist im Weg! Verschwinde!$"
#else
	.string "What the…?\n"
	.string "You're in the way. Get lost.$"
#endif

MtEmber_Exterior_Text_PunchedThroughAtLast::
#if GERMAN
	.string "Wow! Endlich durch! Auf zur\n"
	.string "Schatzsuche!$"
#else
	.string "Whew, punched through at last.\n"
	.string "Let's go treasure hunting!$"
#endif

MtEmber_Exterior_Text_WhatsPasswordAgain::
#if GERMAN
	.string "Wir bringen jeden Schatz, den wir\n"
	.string "finden, ins Lager, verstanden?\p"
	.string "… und wie lauten die Passwörter?\n"
	.string "Für das Lager, natürlich!$"
#else
	.string "Any treasure we find, we haul back\n"
	.string "to the WAREHOUSE, understood?\p"
	.string "…Oh, and what're the passwords?\n"
	.string "At the ROCKET WAREHOUSE, I mean.$"
#endif

MtEmber_Exterior_Text_FirstPasswordGoldeen::
#if GERMAN
	.string "Wie?!? Du hast das Passwort \n"
	.string "vergessen? Eigentlich sind es zwei!\p"
	.string "Das erste lautet “Arbok Kobra”.\p"
	.string "Und das zweite ist…$"
#else
	.string "What, you forgot the password?\n"
	.string "There're actually two.\p"
	.string "The first one's “GOLDEEN need\n"
	.string "log.”\p"
	.string "And the second one is…$"
#endif

MtEmber_Exterior_Text_SnoopsBeenListeningIn::
#if GERMAN
	.string "Heh!\n"
	.string "Das Balg belauscht uns!$"
#else
	.string "Hey!\n"
	.string "This snoop's been listening in!$"
#endif

MtEmber_Exterior_Text_Grunt1Intro::
#if GERMAN
	.string "Du hast uns bespitzelt, gib es zu!$"
#else
	.string "You've been eavesdropping on us,\n"
	.string "haven't you?$"
#endif

MtEmber_Exterior_Text_Grunt1Defeat::
#if GERMAN
	.string "Häh, wie?$"
#else
	.string "Huh, what?$"
#endif

MtEmber_Exterior_Text_Grunt1PostBattle::
#if GERMAN
	.string "Warum musstest du gewinnen?$"
#else
	.string "Why'd you have to win?$"
#endif

MtEmber_Exterior_Text_Grunt2Intro::
#if GERMAN
	.string "Du willst wohl etwas von unserem\n"
	.string "Schatz? Das kannst du vergessen!$"
#else
	.string "Trying to horn in on our treasure?\n"
	.string "Don't bet on it!$"
#endif

MtEmber_Exterior_Text_Grunt2Defeat::
#if GERMAN
	.string "Warte!\n"
	.string "Wie konnte das geschehen?$"
#else
	.string "Wait!\n"
	.string "But how?$"
#endif

MtEmber_Exterior_Text_Grunt2PostBattle::
#if GERMAN
	.string "Fröne der Amnesie und vergiss,\n"
	.string "was du gehört hast!$"
#else
	.string "Develop amnesia conveniently and\n"
	.string "forget everything you heard!$"
#endif

MtEmber_Exterior_Text_WellRegroupDontStepInsideThere::
#if GERMAN
	.string "Welch Rückschlag…\n"
	.string "Wir müssen uns neu gruppieren.\p"
	.string "Du! Denk nicht einmal daran,\n"
	.string "einzutreten!\p"
	.string "Wenn du weißt, was gut für dich\n"
	.string "ist, denk nicht einmal daran!$"
#else
	.string "What a setback…\n"
	.string "We'll have to regroup.\p"
	.string "You! Don't even think about taking\n"
	.string "a step inside here!\p"
	.string "If you know what's good for you,\n"
	.string "don't even think about this!$"
#endif

MtEmber_Exterior_Text_LoganIntro::
#if GERMAN
	.string "Ein Vulkan gilt als aktiv, wenn er\n"
	.string "ausbricht oder kurz vor dem Ausbruch\l"
	.string "steht.$"
#else
	.string "An active volcano is one that's\n"
	.string "erupting, or about to.$"
#endif

MtEmber_Exterior_Text_LoganDefeat::
#if GERMAN
	.string "Puh… das war heiß!\n"
	.string "Ich hatte einen Schweißausbruch!$"
#else
	.string "Whew… That was hot!\n"
	.string "Sweat's erupting from me!$"
#endif

MtEmber_Exterior_Text_LoganPostBattle::
#if GERMAN
	.string "Es soll mehr als 1500 aktive\n"
	.string "Vulkane in der Welt geben.\p"
	.string "Allein beim Gedanken daran wird\n"
	.string "mir heiß und mulmig!$"
#else
	.string "They say there're over 1,500\n"
	.string "active volcanoes in the world.\p"
	.string "Just thinking about them makes me\n"
	.string "feel all hot and gooey inside!$"
#endif

MtEmber_Exterior_Text_BethIntro::
#if GERMAN
	.string "Weißt du, wie in Vulkanen Höhlen\n"
	.string "entstehen?$"
#else
	.string "Do you know how caves form inside\n"
	.string "volcanoes?$"
#endif

MtEmber_Exterior_Text_BethDefeat::
#if GERMAN
	.string "Aua!\n"
	.string "Du bist erschreckend gut!$"
#else
	.string "Atchah!\n"
	.string "You're shockingly good!$"
#endif

MtEmber_Exterior_Text_BethPostBattle::
#if GERMAN
	.string "Wenn die Lava an der Oberfläche des\n"
	.string "Magmas erhärtet und das Magma\l"
	.string "darunter herausfließt, entsteht eine\l"
	.string "Höhle.$"
#else
	.string "When lava at the surface of magma\n"
	.string "hardens, and the magma inside flows\l"
	.string "out, caverns are left behind.$"
#endif

MtEmber_Exterior_Text_JocelynIntro::
#if GERMAN
	.string "Ich habe hart trainiert, damit ich\n"
	.string "meinen Liebeskummer überwinde…\l"
	.string "Es hat mich zumindest körperlich\l"
	.string "gestärkt! Hey-Ho!$"
#else
	.string "I've been in training so I can mend\n"
	.string "my broken heart…\p"
	.string "It toughened me up physically at\n"
	.string "least! Hi-yah!$"
#endif

MtEmber_Exterior_Text_JocelynDefeat::
#if GERMAN
	.string "Ich denke, ich habe es\n"
	.string "übertrieben…$"
#else
	.string "I think I tried to overdo it…$"
#endif

MtEmber_Exterior_Text_JocelynPostBattle::
#if GERMAN
	.string "Deine Art zu kämpfen erinnert mich an\n"
	.string "den Kerl, der mich loswerden wollte.$"
#else
	.string "The way you battle, it reminds me\n"
	.string "of the guy who dumped me…$"
#endif

