Route10_PowerPlantEntrance_hns_MapScripts::
	.byte 0

Route10_PowerPlantEntrance_EventScript_Cop::
	lock
	faceplayer
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 2, Route10_PowerPlantEntrance_EventScript_CopDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 3, Route10_PowerPlantEntrance_EventScript_CopDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 4, Route10_PowerPlantEntrance_EventScript_CopDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 5, Route10_PowerPlantEntrance_EventScript_CopDuringRocket
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 6, Route10_PowerPlantEntrance_EventScript_CopDuringRocket
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 3, Route10_PowerPlantEntrance_EventScript_CopAfterDone
	msgbox Route10_PowerPlantEntrance_Text_Officer1AThiefBrokeIn, MSGBOX_DEFAULT
	closemessage
	end

Route10_PowerPlantEntrance_EventScript_CopDuringRocket::
	lock
	faceplayer
	msgbox Route10_PowerPlantEntrance_Text_Officer1CeruleanShadyCharacter, MSGBOX_DEFAULT
	msgbox Route10_PowerPlantEntrance_Text_Officer1CouldIAskForYourCooperation, MSGBOX_DEFAULT
	closemessage
	end

Route10_PowerPlantEntrance_EventScript_CopAfterDone::
	lock
	faceplayer
	msgbox Route10_PowerPlantEntrance_Text_Officer1HaveToBeefUpSecurity, MSGBOX_DEFAULT
	closemessage
	end

Route10_PowerPlantEntrance_EventScript_Engineer1::
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 7, Route10_PowerPlantEntrance_EventScript_Engineer1Done
	msgbox Route10_PowerPlantEntrance_Text_Engineer1SomeoneStoleAPart, MSGBOX_NPC
	end

Route10_PowerPlantEntrance_EventScript_Engineer1Done::
	msgbox Route10_PowerPlantEntrance_Text_Engineer1GeneratorUpAndRunning, MSGBOX_NPC
	end

Route10_PowerPlantEntrance_EventScript_Engineer2::
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 7, Route10_PowerPlantEntrance_EventScript_Engineer2Done
	msgbox Route10_PowerPlantEntrance_Text_Engineer2PowerPlantUpAndRunning, MSGBOX_NPC
	end

Route10_PowerPlantEntrance_EventScript_Engineer2Done::
	msgbox Route10_PowerPlantEntrance_Text_Engineer2GeneratorIsRunningAgain, MSGBOX_NPC
	end

Route10_PowerPlantEntrance_EventScript_Cop2::
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 7, Route10_PowerPlantEntrance_EventScript_Cop2Done
	msgbox Route10_PowerPlantEntrance_Text_Officer2ManagerHasBeenSadAndFurious, MSGBOX_NPC
	end
Route10_PowerPlantEntrance_EventScript_Cop2Done::
	msgbox Route10_PowerPlantEntrance_Text_Officer2ManagerHasBeenCheerful, MSGBOX_NPC
	end

Route10_PowerPlantEntrance_EventScript_Engineer3::
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 7, Route10_PowerPlantEntrance_EventScript_Engineer3Done
	msgbox Route10_PowerPlantEntrance_Text_Engineer4MagnetTrainConsumesElectricity, MSGBOX_NPC
	end

Route10_PowerPlantEntrance_EventScript_Engineer3Done::
	msgbox Route10_PowerPlantEntrance_Text_Engineer4WeCanGetMagnetTrainRunning, MSGBOX_NPC
	end

Route10_PowerPlantEntrance_Trigger_Cop::
	lock
	playse SE_POKENAV_CALL
	applymovement2 LOCALID_POWERPLANT_COP, Common_Movement_ExclamationMark
	waitse
	applymovement2 LOCALID_POWERPLANT_COP, Route10_PowerPlantEntrance_Movement_WalkToPlayer
	waitmovement 0
	turnobject LOCALID_POWERPLANT_ENGINEER, DIR_SOUTH
	msgbox Route10_PowerPlantEntrance_Text_Officer1CeruleanShadyCharacter, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_POWERPLANT_COP, DIR_WEST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	delay 30
	msgbox Route10_PowerPlantEntrance_Text_Officer1CouldIAskForYourCooperation, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_POWERPLANT_COP, Route10_PowerPlantEntrance_Movement_WalkBack
	waitmovement 0
	setvar VAR_KANTO_ROCKET_STORY_STATE, 2
	clearflag FLAG_HIDE_CERULEAN_GYM_ROCKET
	release
	end

Route10_PowerPlantEntrance_Movement_WalkToPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

Route10_PowerPlantEntrance_Movement_WalkBack:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	face_down
	step_end

Route10_PowerPlantEntrance_Text_Officer1AThiefBrokeIn:
#if GERMAN
	.string "Ein Dieb ist in das Kraftwerk\n"
	.string "eingebrochen.\l"
	.string "In was für einer Welt leben wir nur…$"
#else
	.string "A thief broke into the POWER\n"
	.string "PLANT…\p"
	.string "What is the world coming to?$"
#endif

Route10_PowerPlantEntrance_Text_Officer1CeruleanShadyCharacter:
#if GERMAN
	.string "Wir haben Neuigkeiten aus Azuria City!\p"
	.string "Es heißt, dort treibe sich eine\n"
	.string "verdächtige Gestalt herum!$"
#else
	.string "I just got word from CERULEAN.\p"
	.string "It appears that a shady\n"
	.string "character has been loitering\l"
	.string "around.$"
#endif

Route10_PowerPlantEntrance_Text_Officer1CouldIAskForYourCooperation:
#if GERMAN
	.string "Kann ich mit deiner Unterstützung\n"
	.string "rechnen?$"
#else
	.string "Could I ask for your\n"
	.string "cooperation?$"
#endif

Route10_PowerPlantEntrance_Text_Officer1HaveToBeefUpSecurity:
#if GERMAN
	.string "Wir müssen mehr Wachpersonal\n"
	.string "einstellen.$"
#else
	.string "We'll have to beef up our\n"
	.string "security presence.$"
#endif

Route10_PowerPlantEntrance_Text_Engineer1SomeoneStoleAPart:
#if GERMAN
	.string "Ein Dieb hat ein wichtiges Teil des\n"
	.string "Generators entwendet!\p"
	.string "Ohne es funktioniert der neue\n"
	.string "Generator nicht!$"
#else
	.string "Someone made off with a part\n"
	.string "that's essential for the\l"
	.string "generator.\p"
	.string "Without it, the new generator's\n"
	.string "useless!$"
#endif

Route10_PowerPlantEntrance_Text_Engineer1GeneratorUpAndRunning:
#if GERMAN
	.string "Der Generator versorgt uns jetzt\n"
	.string "wieder mit genügend Saft!$"
#else
	.string "The generator's up and running.\n"
	.string "It's making electricity to spare.$"
#endif

Route10_PowerPlantEntrance_Text_Engineer2PowerPlantUpAndRunning:
#if GERMAN
	.string "Dieses Kraftwerk wurde eigentlich\n"
	.string "schon vor langer Zeit stillgelegt.\p"
	.string "Aber wir haben es wieder in Betrieb\n"
	.string "genommen, um damit Energie für den\l"
	.string "Magnetzug zu gewinnen.$"
#else
	.string "This POWER PLANT had been\n"
	.string "abandoned in the past.\p"
	.string "We got it back up and running to\n"
	.string "provide power to the MAGNET\l"
	.string "TRAIN.$"
#endif

Route10_PowerPlantEntrance_Text_Engineer2GeneratorIsRunningAgain:
#if GERMAN
	.string "Der Generator läuft wieder!$"
#else
	.string "The generator's running again!$"
#endif

Route10_PowerPlantEntrance_Text_Officer2ManagerHasBeenSadAndFurious:
#if GERMAN
	.string "Der Direktor des Kraftwerks sitzt da\n"
	.string "vorne.\p"
	.string "Seit jemand den Generator demolierte,\n"
	.string "ist er traurig und wütend zugleich…$"
#else
	.string "The POWER PLANT's MANAGER is in\n"
	.string "the back room with the generator.\p"
	.string "But since someone wrecked the\n"
	.string "generator, he's been both sad and\l"
	.string "furious…$"
#endif

Route10_PowerPlantEntrance_Text_Officer2ManagerHasBeenCheerful:
#if GERMAN
	.string "Seit der Generator wieder läuft, \n"
	.string "ist der Direktor quietschfidel!$"
#else
	.string "Since the generator's been fixed,\n"
	.string "the MANAGER has been cheerful.$"
#endif

Route10_PowerPlantEntrance_Text_Engineer4MagnetTrainConsumesElectricity:
#if GERMAN
	.string "Der Magnetzug verbraucht sehr viel\n"
	.string "Energie.\p"
	.string "Ohne den neuen Generator bewegt sich\n"
	.string "da gar nichts.$"
#else
	.string "The MAGNET TRAIN consumes a lot\n"
	.string "of electricity.\p"
	.string "It can't move if the new\n"
	.string "generator isn't operating.$"
#endif

Route10_PowerPlantEntrance_EventScript_Lorenzo::
	lock
	faceplayer
	goto_if_set FLAG_POWERPLANT_NPC_TRADE_COMPLETED, Route10_PowerPlantEntrance_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_MAGNETON, Route10_PowerPlantEntrance_Text_WantToTrade, Route10_PowerPlantEntrance_EventScript_DeclineTrade, Route10_PowerPlantEntrance_EventScript_NotRequestedMon, Route10_PowerPlantEntrance_Text_TakeCare
	setflag FLAG_POWERPLANT_NPC_TRADE_COMPLETED
	release
	end

Route10_PowerPlantEntrance_EventScript_DeclineTrade::
	msgbox Route10_PowerPlantEntrance_Text_DeclineTrade, MSGBOX_DEFAULT
	release
	end

Route10_PowerPlantEntrance_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox Route10_PowerPlantEntrance_Text_NotRequestedMon, MSGBOX_DEFAULT
	release
	end

Route10_PowerPlantEntrance_EventScript_TradeCompleted::
	msgbox Route10_PowerPlantEntrance_Text_TradeCompleted, MSGBOX_DEFAULT
	release
	end

Route10_PowerPlantEntrance_Text_WantToTrade:
#if GERMAN
	.string "Ich arbeite hier im Kraftwerk.\n"
	.string "Mein Magneton ist schon seit Jahren\l"
	.string "mein Partner.\p"
	.string "Aber ich wollte schon immer ein\n"
	.string "{STR_VAR_1}.\p"
	.string "Würdest du tauschen für mein\n"
	.string "{STR_VAR_2}?$"
#else
	.string "I work here at the POWER PLANT.\n"
	.string "My MAGNETON's been my partner\l"
	.string "for years.\p"
	.string "But I've always wanted a\n"
	.string "{STR_VAR_1}.\p"
	.string "Would you trade one for my\n"
	.string "{STR_VAR_2}?$"
#endif

Route10_PowerPlantEntrance_Text_TakeCare:
#if GERMAN
	.string "Danke! Kümmere dich gut um Maggie für\n"
	.string "mich!$"
#else
	.string "Thanks! Take good care of\n"
	.string "MAGGIE for me!$"
#endif

Route10_PowerPlantEntrance_Text_DeclineTrade:
#if GERMAN
	.string "Nein? Schade.\n"
	.string "Mein Magneton arbeitet hart.$"
#else
	.string "No? That's a shame.\n"
	.string "My MAGNETON's a hard worker.$"
#endif

Route10_PowerPlantEntrance_Text_NotRequestedMon:
#if GERMAN
	.string "Hmm, das ist kein {STR_VAR_1}.\n"
	.string "Das suche ich nicht.$"
#else
	.string "Hmm, that's not a {STR_VAR_1}.\n"
	.string "That's not what I had in mind.$"
#endif

Route10_PowerPlantEntrance_Text_TradeCompleted:
#if GERMAN
	.string "Wie geht es Maggie?\n"
	.string "Sie liebt Magnetfelder!$"
#else
	.string "How's MAGGIE doing?\n"
	.string "She loves magnetic fields!$"
#endif

Route10_PowerPlantEntrance_Text_Engineer4WeCanGetMagnetTrainRunning:
#if GERMAN
	.string "Jetzt können wir endlich auch den\n"
	.string "Magnetzug wieder anwerfen!$"
#else
	.string "All right! We can finally get the\n"
	.string "MAGNET TRAIN running again.$"
#endif
