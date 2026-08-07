SproutTower_3F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SproutTower_3F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

SproutTower_3F_OnTransition:
	callnative SetTimeBasedEncounters
	end


SproutTower_3F_EventScript_SageJin::
	trainerbattle_single TRAINER_JIN_HNS, SproutTower_Text_SageJin_Seen, SproutTower_Text_SageJin_Beaten
	msgbox SproutTower_Text_SageJin_AfterBattle, MSGBOX_AUTOCLOSE
	end


SproutTower_3F_EventScript_SageNeal::
	trainerbattle_single TRAINER_NEAL_HNS, SproutTower_Text_SageNeal_Seen, SproutTower_Text_SageNeal_Beaten
	msgbox SproutTower_Text_SageNeal_AfterBattle, MSGBOX_AUTOCLOSE
	end

SproutTower_3F_EventScript_SageTroy::
	trainerbattle_single TRAINER_TROY_HNS, SproutTower_Text_SageTroy_Seen, SproutTower_Text_SageTroy_Beaten
	msgbox SproutTower_Text_SageTroy_AfterBattle, MSGBOX_AUTOCLOSE
	end

SproutTower_3F_EventScript_Painting::
	lock
	msgbox SproutTower_Text_3F_Painting, MSGBOX_AUTOCLOSE
	release
	end

SproutTower_3F_EventScript_Potion::
	finditem ITEM_POTION
	end

SproutTower_3F_EventScript_EscapeRope::
	finditem ITEM_ESCAPE_ROPE
	end

SproutTower_3F_EventScript_TriggerSceneLeft::
	lock
	playbgm MUS_HG_ENCOUNTER_RIVAL, TRUE
	applymovement LOCALID_SPROUT_TOWER_SILVER, SproutTower_3F_Movement_Silver1
	waitmovement 0
	msgbox SproutTower_Text_ElderLecturesRival, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_SPROUT_TOWER_SILVER, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_SPROUT_TOWER_SILVER, SproutTower_3F_Movement_SilverLeft
	waitmovement 0
	msgbox SproutTower_Text_RivalOnlyCaresStrong, MSGBOX_DEFAULT
	delay 30
	msgbox SproutTower_Text_RivalUsedEscapeRope, MSGBOX_DEFAULT
	applymovement LOCALID_SPROUT_TOWER_SILVER SproutTower_3F_Movement_EscapeRope
	waitmovement 0
	closemessage
	fadescreen FADE_TO_BLACK
	playse SE_EXIT
	setflag FLAG_HIDE_SPROUT_TOWER_SILVER
	removeobject LOCALID_SPROUT_TOWER_SILVER
	delay 55
	fadescreen FADE_FROM_BLACK
	special DrawWholeMapView
	fadedefaultbgm
	setvar VAR_SPROUT_TOWER, 1
	release
	end

SproutTower_3F_EventScript_TriggerSceneRight::
	lock
	playbgm MUS_HG_ENCOUNTER_RIVAL, TRUE
	applymovement LOCALID_SPROUT_TOWER_SILVER, SproutTower_3F_Movement_Silver1
	waitmovement 0
	msgbox SproutTower_Text_ElderLecturesRival, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_SPROUT_TOWER_SILVER, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_SPROUT_TOWER_SILVER, SproutTower_3F_Movement_SilverRight
	waitmovement 0
	waitmovement 0
	msgbox SproutTower_Text_RivalOnlyCaresStrong, MSGBOX_DEFAULT
	msgbox SproutTower_Text_RivalUsedEscapeRope, MSGBOX_DEFAULT
	applymovement LOCALID_SPROUT_TOWER_SILVER SproutTower_3F_Movement_EscapeRope
	waitmovement 0
	closemessage
	fadescreen FADE_TO_BLACK
	playse SE_EXIT
	setflag FLAG_HIDE_SPROUT_TOWER_SILVER
	removeobject LOCALID_SPROUT_TOWER_SILVER
	delay 55
	fadescreen FADE_FROM_BLACK
	special DrawWholeMapView
	fadedefaultbgm
	setvar VAR_SPROUT_TOWER, 1
	release
	end

SproutTower_3F_EventScript_SageLi::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_FLASH, SproutTower_3F_EventScript_SageLi_Beaten
	msgbox SproutTower_Text_SageLi_Seen, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_LI_HNS, SproutTower_Text_SageLi_Beaten
	msgbox SproutTower_Text_SageLi_TakeFlash, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLASH
	setflag FLAG_RECEIVED_HM_FLASH
	msgbox SproutTower_Text_SageLi_FlashExplain, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_3F_EventScript_SageLi_Beaten::
	msgbox SproutTower_Text_SageLi_AfterBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

SproutTower_3F_Movement_Silver1:
	walk_fast_up
	walk_fast_up
	step_end

SproutTower_3F_Movement_SilverLeft:
	face_down
	delay_16
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

SproutTower_3F_Movement_SilverRight:
	face_down
	delay_16
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

SproutTower_3F_Movement_EscapeRope:
	face_right
	face_up
	face_left
	face_down
	face_right
	face_up
	face_left
	face_down
	face_right
	face_up
	face_left
	face_down
	step_end

SproutTower_Text_ElderLecturesRival:
#if GERMAN
	.string "Weiser: Du bist wirklich\n"
	.string "ein begabter Trainer.\p"
	.string "Wie abgemacht, bekommst du die VM.\p"
	.string "Eines gebe ich dir noch mit:\p"
	.string "Behandle deine Pokémon besser.\p"
	.string "Dein Kampfstil ist zu aggressiv.\p"
	.string "Pokémon sind keine Kampfspielzeuge…$"
#else
	.string "ELDER: You are indeed skilled\n"
	.string "as a trainer.\p"
	.string "As promised, here is your HM.\p"
	.string "But let me say this: You should\n"
	.string "treat your POKéMON better.\p"
	.string "The way you battle is far too\n"
	.string "harsh.\p"
	.string "POKéMON are not tools of war…$"
#endif

SproutTower_Text_RivalOnlyCaresStrong:
#if GERMAN
	.string "… …Hmpf!\p"
	.string "Er behauptet, ein Weiser zu sein.\p"
	.string "Aber er ist schwach.\p"
	.string "Das muss noch geklärt werden.\p"
	.string "Ich würde nie gegen\n"
	.string "so einen Narren verlieren,\l"
	.string "der mir rät, meine Pokémon\l"
	.string "gut zu behandeln.\p"
	.string "Für mich zählen nur starke Pokémon.\p"
	.string "Schwache Pokémon interessieren mich\n"
	.string "überhaupt gar nicht.$"
#else
	.string "…\n"
	.string "…Humph!\p"
	.string "He claims to be the ELDER but\n"
	.string "he's weak.\p"
	.string "It stands to reason.\p"
	.string "I'd never lose to fools who babble\n"
	.string "about being nice to POKéMON.\p"
	.string "I only care about strong\n"
	.string "POKéMON that can win.\p"
	.string "I really couldn't care less\n"
	.string "about weak POKéMON.$"
#endif

SproutTower_Text_RivalUsedEscapeRope:
#if GERMAN
	.string "{RIVAL} verwendet\n"
	.string "Fluchtseil!$"
#else
	.string "{RIVAL} used an ESCAPE ROPE!$"
#endif

SproutTower_Text_SageLi_Seen:
#if GERMAN
	.string "Sehr gut. Du hast dich\n"
	.string "wacker geschlagen!\p"
	.string "Hier im Knofensa-Turm erarbeiten sich\n"
	.string "Pokémon und Menschen eine strahlende\l"
	.string "gemeinsame Zukunft oder suchen im\l"
	.string "Training Bestätigung.\p"
	.string "Ich werde deine letzte Prüfung sein.\p"
	.string "Erlaube mir, die Freundschaft zwischen\n"
	.string "dir und deinem Team zu erproben!$"
#else
	.string "So good of you to come here!\p"
	.string "SPROUT TOWER is a place of\n"
	.string "training.\p"
	.string "People and POKéMON test their\n"
	.string "bonds to build a bright future\l"
	.string "together.\p"
	.string "I am the final test.\p"
	.string "Allow me to check the ties\n"
	.string "between your POKéMON and you!$"
#endif

SproutTower_Text_SageLi_Beaten:
#if GERMAN
	.string "Ah, sehr gut!$"
#else
	.string "Ah, excellent!$"
#endif

SproutTower_Text_SageLi_TakeFlash:
#if GERMAN
	.string "Ich bin sicher,\n"
	.string "du und dein Pokémon-Team werdet\l"
	.string "das hier wohl zu nutzen wissen.\p"
	.string "Nimm die TM Blitz.\n"
	.string "Sie gehört dir.$"
#else
	.string "You and your POKéMON should\n"
	.string "have no problem using this move.\p"
	.string "Take this FLASH HM.$"
#endif

SproutTower_Text_SageLi_FlashExplain:
#if GERMAN
	.string "Blitz erhellt selbst die\n"
	.string "dunkelsten Orte.\p"
	.string "Um es außerhalb des Kampfes\n"
	.string "zu nutzen, brauchst du den\l"
	.string "Orden aus der Viola City Arena.$"
#else
	.string "FLASH illuminates even the\n"
	.string "darkest of all places.\p"
	.string "But to use it out of battle, you\n"
	.string "need the BADGE from VIOLET's GYM.$"
#endif

SproutTower_Text_SageLi_AfterBattle:
#if GERMAN
	.string "Möge deine Reise einmal\n"
	.string "Früchte tragen!$"
#else
	.string "I hope you learn and grow from\n"
	.string "your journey.$"
#endif

SproutTower_Text_SageJin_Seen:
#if GERMAN
	.string "Ich wandele auf dem Weg des Pokémon-\n"
	.string "Trainers, um Erleuchtung zu finden!$"
#else
	.string "I train to find enlightenment\n"
	.string "in POKéMON!$"
#endif

SproutTower_Text_SageJin_Beaten:
#if GERMAN
	.string "Mein Training ist unvollständig…$"
#else
	.string "My training is incomplete…$"
#endif

SproutTower_Text_SageJin_AfterBattle:
#if GERMAN
	.string "Hinter einem starken Pokémon\n"
	.string "steckt auch ein starker Trainer.\p"
	.string "Nein, halt! Hinter einem starken Trainer\n"
	.string "steckt auch ein starkes Pokémon!$"
#else
	.string "As POKéMON grow stronger,\n"
	.string "so does the trainer.\p"
	.string "No, wait. As the trainer\n"
	.string "grows stronger, so do the\l"
	.string "POKéMON.$"
#endif

SproutTower_Text_SageTroy_Seen:
#if GERMAN
	.string "Lass mich sehen,\n"
	.string "wie stark dein Glaube\l"
	.string "an deine Pokémon ist!$"
#else
	.string "Let me see how much you trust\n"
	.string "your POKéMON.$"
#endif

SproutTower_Text_SageTroy_Beaten:
#if GERMAN
	.string "Ja, du glaubst wirklich\n"
	.string "an dein Pokémon-Team!$"
#else
	.string "Yes, your trust is real!$"
#endif

SproutTower_Text_SageTroy_AfterBattle:
#if GERMAN
	.string "Es dauert nicht mehr lange,\n"
	.string "bis du dem Weisesten von uns begegnest.$"
#else
	.string "It is not far to the ELDER.$"
#endif

SproutTower_Text_SageNeal_Seen:
#if GERMAN
	.string "Diese TM, die mir der Weiseste\n"
	.string "anvertraut hat, bringt Licht\l"
	.string "selbst in die tiefste Dunkelheit!$"
#else
	.string "The ELDER's HM lights even\n"
	.string "pitch-black darkness.$"
#endif

SproutTower_Text_SageNeal_Beaten:
#if GERMAN
	.string "Es ist wohl doch nur mein\n"
	.string "Haar, das licht ist.$"
#else
	.string "It is my head that is bright!$"
#endif

SproutTower_Text_SageNeal_AfterBattle:
#if GERMAN
	.string "Möge dein Weg\n"
	.string "erleuchtet sein.$"
#else
	.string "Let there be light on your\n"
	.string "journey.$"
#endif

SproutTower_Text_3F_Painting:
#if GERMAN
	.string "Hier hat jemand mit kräftigem Strich\n"
	.string "ein Knofensa gezeichnet…$"
#else
	.string "It's a powerful painting of a\n"
	.string "BELLSPROUT.$"
#endif
