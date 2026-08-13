JaggedPass_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
	.byte 0

JaggedPass_OnResume:
	setstepcallback STEP_CB_ASH
	call_if_eq VAR_JAGGED_PASS_STATE, 0, JaggedPass_EventScript_CheckHasMagmaEmblem
	end

JaggedPass_EventScript_CheckHasMagmaEmblem::
	checkitem ITEM_MAGMA_EMBLEM
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
	return

JaggedPass_EventScript_SetReadyToOpenHideout::
	setvar VAR_JAGGED_PASS_STATE, 1
	return

JaggedPass_OnTransition:
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
	end

JaggedPass_EventScript_SetWeatherAsh::
	setweather WEATHER_VOLCANIC_ASH
	doweather
	return

JaggedPass_OnLoad:
	goto_if_le VAR_JAGGED_PASS_STATE, 1, JaggedPass_EventScript_ConcealHideoutEntrance
	end

JaggedPass_EventScript_ConcealHideoutEntrance::
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
	end

JaggedPass_EventScript_OpenMagmaHideout::
	lockall
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 1   @ vertical pan
	setvar VAR_0x8005, 1   @ horizontal pan
	setvar VAR_0x8006, 16  @ num shakes
	setvar VAR_0x8007, 3   @ shake delay
	special ShakeCamera
	waitstate
	playse SE_EFFECTIVE
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
	special DrawWholeMapView
	delay 30
	setvar VAR_JAGGED_PASS_STATE, 2
	waitse
	releaseall
	end

JaggedPass_EventScript_MagmaHideoutGuard::
	lockall
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
	waitse
	playse SE_PIN
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

JaggedPass_EventScript_GuardDefeated::
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

JaggedPass_EventScript_Eric::
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Diana::
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_DianaRematch
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
	release
	end

JaggedPass_EventScript_RegisterDiana::
	special PlayerFaceTrainerAfterBattle
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DIANA_1
	release
	end

JaggedPass_EventScript_DianaRematch::
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Ethan::
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
	release
	end

JaggedPass_EventScript_RegisterEthan::
	special PlayerFaceTrainerAfterBattle
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ETHAN_1
	release
	end

JaggedPass_EventScript_EthanRematch::
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Julio::
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Autumn::
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_Text_EricIntro:
#if GERMAN
	.string "Schlotberg Steilpass…\p"
	.string "Davon habe ich immer geträumt, wenn\n"
	.string "ich in den Bergen unterwegs war.\p"
	.string "Zerklüftete Massive…\n"
	.string "Das bringt meine Seele zum Erbeben.$"
#else
	.string "MT. CHIMNEY's JAGGED PASS…\p"
	.string "Now this is what I've always wanted\n"
	.string "in a mountain.\p"
	.string "This jagged bumpiness…\n"
	.string "It rocks my soul!$"
#endif

JaggedPass_Text_EricDefeat:
#if GERMAN
	.string "Verlieren ist bitter.$"
#else
	.string "Losing left me bitter!$"
#endif

JaggedPass_Text_EricPostBattle:
#if GERMAN
	.string "Ja, ich bin im Umgang mit Pokémon\n"
	.string "nicht gerade talentiert.\p"
	.string "Aber wenn es um die Leidenschaft für\n"
	.string "die Berge geht, stecke ich dich locker\l"
	.string "in die Tasche!$"
#else
	.string "Yes, I did lose at POKéMON…\p"
	.string "But, when it comes to the love of\n"
	.string "the mountains, I have you beat!$"
#endif

JaggedPass_Text_DianaIntro:
#if GERMAN
	.string "Dich habe ich hier noch nie gesehen.\n"
	.string "Dieser Platz eignet sich nicht für ein\l"
	.string "Picknick.$"
#else
	.string "This place isn't your casual hike.\n"
	.string "It's not suited for a picnic.$"
#endif

JaggedPass_Text_DianaDefeat:
#if GERMAN
	.string "Oooh, nein!\n"
	.string "Das liegt am Boden. Er ist zu uneben!$"
#else
	.string "Ohhh, no!\n"
	.string "The ground is too bumpy…$"
#endif

JaggedPass_Text_DianaPostBattle:
#if GERMAN
	.string "Stell dir mal vor!\p"
	.string "Einige fahren tatsächlich mit ihren\n"
	.string "Fahrrädern diesen zerklüfteten Pass\l"
	.string "hinauf.$"
#else
	.string "Did you know?\p"
	.string "Some people cleverly ride their\n"
	.string "bicycles up this horribly bumpy pass.$"
#endif

JaggedPass_Text_DianaRegister:
#if GERMAN
	.string "Kommst du irgendwann wieder in diese\n"
	.string "Gegend? Ich würde gerne wieder gegen\l"
	.string "dich antreten.$"
#else
	.string "Will you ever be back in this area?\n"
	.string "If you do return, I'd like a rematch.$"
#endif

JaggedPass_Text_DianaRematchIntro:
#if GERMAN
	.string "Picknicke machen überall und immer\n"
	.string "Spaß. Und Pkmn leisten mir dabei\l"
	.string "Gesellschaft!$"
#else
	.string "Picnics are fun wherever you go.\n"
	.string "Just like POKéMON!$"
#endif

JaggedPass_Text_DianaRematchDefeat:
#if GERMAN
	.string "Ich habe nur verloren, weil der Boden\n"
	.string "wirklich sehr uneben ist.$"
#else
	.string "I only lost because the ground is\n"
	.string "too bumpy!$"
#endif

JaggedPass_Text_DianaPostRematch:
#if GERMAN
	.string "Ich werde meine Niederlage einfach\n"
	.string "vergessen und mit dem Rad den Pass\l"
	.string "entlangdüsen.$"
#else
	.string "I'll forget about losing and just\n"
	.string "enjoy this bumpy hike.$"
#endif

JaggedPass_Text_EthanIntro:
#if GERMAN
	.string "Der Steilpass ist sehr schwer zu Fuß zu\n"
	.string "meistern. Aber ein guter Ort zum\l"
	.string "Trainieren.$"
#else
	.string "JAGGED PASS is hard to walk on.\n"
	.string "It's a good place for training.$"
#endif

JaggedPass_Text_EthanDefeat:
#if GERMAN
	.string "Schon vorbei? Ich habe überhaupt\n"
	.string "keinen sicheren Stand gehabt.$"
#else
	.string "It was all over while we were still\n"
	.string "trying to find a good footing…$"
#endif

JaggedPass_Text_EthanPostBattle:
#if GERMAN
	.string "Wenn ich ein Kunstrad hätte, könnte\n"
	.string "ich die Abhänge einfach überspringen.$"
#else
	.string "If I had an ACRO BIKE, I'd be able to\n"
	.string "jump ledges.$"
#endif

JaggedPass_Text_EthanRegister:
#if GERMAN
	.string "Wenn ich mich erstmal an diesen\n"
	.string "unebenen Boden gewöhnt habe, werde ich\l"
	.string "mit Sicherheit gewinnen!\p"
	.string "Trägst du mich in deinen PokéCom ein?$"
#else
	.string "When I get more used to this bumpiness,\n"
	.string "I'll be sure to win!\p"
	.string "Can you register me in your POKéGEAR?$"
#endif

JaggedPass_Text_EthanRematchIntro:
#if GERMAN
	.string "Ich habe mich an die Unebenheiten ge-\n"
	.string "wöhnt. Ich singe beim Klettern.$"
#else
	.string "I got used to this bumpiness.\n"
	.string "I sing while I climb now.$"
#endif

JaggedPass_Text_EthanRematchDefeat:
#if GERMAN
	.string "Auf diesem unebenen Boden ist es wirk-\n"
	.string "lich nicht leicht, gut zu kämpfen.$"
#else
	.string "It's still not easy to battle on this\n"
	.string "bumpy ground…$"
#endif

JaggedPass_Text_EthanPostRematch:
#if GERMAN
	.string "Ich sollte mir ein Kunstrad von Radla\n"
	.string "in Malvenfroh City besorgen…$"
#else
	.string "I should get an ACRO BIKE from RYDEL\n"
	.string "in MAUVILLE CITY…$"
#endif

JaggedPass_Text_GruntIntro:
#if GERMAN
	.string "Wah! Was machst du hier?\p"
	.string "Was ich hier mache?\p"
	.string "Was geht dich das an?$"
#else
	.string "Wah!\n"
	.string "What are you doing here?\p"
	.string "What am I doing in a place like this?\p"
	.string "What business is it of yours?$"
#endif

JaggedPass_Text_GruntDefeat:
#if GERMAN
	.string "Arrrrgh…\p"
	.string "Ich hätte mich besser sofort in\n"
	.string "unserem Versteck versteckt…$"
#else
	.string "Urrrgh…\p"
	.string "I should've ducked into our HIDEOUT\n"
	.string "right away…$"
#endif

JaggedPass_Text_GoWhereverYouWant:
#if GERMAN
	.string "Okay, oh-kay!\n"
	.string "Ich geb es ja zu - du bist stark!\p"
	.string "Mach dir um mich keine Sorgen.\n"
	.string "Geh, wo immer du hin willst.$"
#else
	.string "Okay, oh-kay!\n"
	.string "I admit it--you're strong!\p"
	.string "Don't worry about me.\n"
	.string "Go wherever you want!$"
#endif

JaggedPass_Text_BoulderShakingInResponseToEmblem:
#if GERMAN
	.string "Oh! Der Felsen reagiert auf das\n"
	.string "Magmaemblem.$"
#else
	.string "Oh! This boulder is shaking in response\n"
	.string "to the MAGMA EMBLEM!$"
#endif

JaggedPass_Text_JulioIntro:
#if GERMAN
	.string "Aiyeeeh! Man bekommt wirklich Angst,\n"
	.string "wenn man den ganzen Weg hinunterrennt\l"
	.string "ohne anzuhalten.$"
#else
	.string "Aiyeeh! It's awfully scary to shoot\n"
	.string "down the mountain in one go!$"
#endif

JaggedPass_Text_JulioDefeat:
#if GERMAN
	.string "Ich fühle mich, als würde ich\n"
	.string "zu Sand zerbröseln…$"
#else
	.string "I feel like I'm falling apart…$"
#endif

JaggedPass_Text_JulioPostBattle:
#if GERMAN
	.string "Mein Fahrrad hat mich durch-\n"
	.string "geschüttelt, mein Hintern tut weh…$"
#else
	.string "My bicycle bounced around so much,\n"
	.string "my rear end's sore…$"
#endif

JaggedPass_Text_AutumnIntro:
#if GERMAN
	.string "Ich klettere jeden Tag auf diesen\n"
	.string "Berg! Ich weiß, wie stark ich bin.$"
#else
	.string "I climb this hill every day.\n"
	.string "I have confidence in my strength!$"
#endif

JaggedPass_Text_AutumnDefeat:
#if GERMAN
	.string "Hmm… Was ist denn nur schief gelaufen?$"
#else
	.string "Hmm…\n"
	.string "What went wrong?$"
#endif

JaggedPass_Text_AutumnPostBattle:
#if GERMAN
	.string "Da oben ist ein kleiner Vorsprung. Der\n"
	.string "sieht sehr merkwürdig aus.$"
#else
	.string "What is that odd rock protrusion\n"
	.string "a little up the hill from here?$"
#endif

