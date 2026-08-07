MossdeepCity_GameCorner_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_GameCorner_1F_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MossdeepCity_GameCorner_1F_OnWarp
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
	.byte 0

MossdeepCity_GameCorner_1F_OnWarp:
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_CheckTurnAttendant
	.2byte 0

MossdeepCity_GameCorner_1F_OnFrame:
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
	.2byte 0

@ Script is redundant, the label in the goto also does lock and faceplayer
MossdeepCity_GameCorner_1F_EventScript_InfoMan::
	lock
	faceplayer
	goto MossdeepCity_GameCorner_1F_EventScript_InfoMan2
	release
	end

@ Script is redundant, the label in the goto also does lock and faceplayer
MossdeepCity_GameCorner_1F_EventScript_OldMan::
	lock
	faceplayer
	goto MossdeepCity_GameCorner_1F_EventScript_OldMan2
	release
	end


@ Everything below is leftover from RS
@ The house that was here in RS was moved to Sootopolis and replaced by the Game Corner
@ The text below is unused and duplicated in its replacement in Sootopolis City
@ And the BG Door event was moved inaccessibly into a wall

RS_MysteryEventsHouse_EventScript_Door::
	msgbox RS_MysteryEventsHouse_Text_DoorIsLocked, MSGBOX_SIGN
	end

RS_MysteryEventsHouse_Text_OldManGreeting:
#if GERMAN
	.string "Als ich noch jung war, bin ich als\n"
	.string "Pokémon-Trainer durch die Welt\l"
	.string "gereist.\p"
	.string "Nun, da ich ein alter Knabe geworden\n"
	.string "bin, beobachte ich mit Freuden die\l"
	.string "jungen Trainer bei ihren Kämpfen.$"
#else
	.string "When I was young, I traveled the world\n"
	.string "as a POKéMON TRAINER.\p"
	.string "Now that I've become an old buzzard,\n"
	.string "my only amusement is watching young\l"
	.string "TRAINERS battle.$"
#endif

RS_MysteryEventsHouse_Text_DoorIsLocked:
#if GERMAN
	.string "Diese Tür ist verschlossen.$"
#else
	.string "The door appears to be locked.$"
#endif

RS_MysteryEventsHouse_Text_ChallengeVisitingTrainer:
#if GERMAN
	.string "Ein Trainer namens {STR_VAR_1} ist bei\n"
	.string "mir zu Besuch.\p"
	.string "Möchtest du einmal gegen {STR_VAR_1}\n"
	.string "antreten?$"
#else
	.string "A TRAINER named {STR_VAR_1} is\n"
	.string "visiting my home.\p"
	.string "Would you like to challenge\n"
	.string "{STR_VAR_1}?$"
#endif

RS_MysteryEventsHouse_Text_YouWontBattle:
#if GERMAN
	.string "Du möchtest nicht kämpfen? Es ent-\n"
	.string "täuscht mich, dass ich dich nicht\l"
	.string "kämpfen sehen kann.$"
#else
	.string "You won't battle? I'm disappointed\n"
	.string "that I can't see you battle…$"
#endif

RS_MysteryEventsHouse_Text_KeepItToA3On3:
#if GERMAN
	.string "Oh, sehr gut!\p"
	.string "Aber mein Haus ist nicht sehr stabil.\p"
	.string "Könntet ihr einen 3-gegen-3-Kampf\n"
	.string "ausfechten?$"
#else
	.string "Oh, good, good!\p"
	.string "But my house isn't all that sturdy.\p"
	.string "Could I ask you to keep it down to\n"
	.string "a 3-on-3 match?$"
#endif

RS_MysteryEventsHouse_Text_SaveYourProgress:
#if GERMAN
	.string "Bevor ihr gegeneinander antretet,\n"
	.string "solltet ihr eure Spiele speichern!$"
#else
	.string "Before you two battle, you should\n"
	.string "save your progress.$"
#endif

RS_MysteryEventsHouse_Text_HopeToSeeAGoodMatch:
#if GERMAN
	.string "Ich hoffe auf einen guten Kampf!$"
#else
	.string "I hope to see a good match!$"
#endif

RS_MysteryEventsHouse_Text_BattleTie:
#if GERMAN
	.string "Der Kampf endet unentschieden.$"
#else
	.string "So, it became a standoff.\p"
	.string "It was a brilliant match in which\n"
	.string "neither side conceded a step!$"
#endif

RS_MysteryEventsHouse_Text_BattleWon:
#if GERMAN
	.string "Das war absolute Spitzenklasse!\p"
	.string "Ich habe mich wieder erkannt - mich in\n"
	.string "meinen jungen Jahren!$"
#else
	.string "That was superlative!\p"
	.string "Why, it was like seeing myself in\n"
	.string "my youth again!$"
#endif

RS_MysteryEventsHouse_Text_BattleLost:
#if GERMAN
	.string "Ach, wie bedauerlich für dich!\p"
	.string "Aber es war ein guter Kampf.\n"
	.string "Ich hoffe, das nächste Mal gewinnst du.$"
#else
	.string "Ah, too bad for you!\p"
	.string "But it was a good match.\n"
	.string "I hope you can win next time.$"
#endif
