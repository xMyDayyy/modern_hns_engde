SSAqua_B1F_hns_MapScripts::
	.byte 0

SSAqua_B1F_EventScript_Trigger::
	lock
	turnobject LOCALID_SSAQUA_B1F_SAILORLOOKING, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox SSAqua_B1F_Text_FastShipOnDutySailor, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	turnobject LOCALID_SSAQUA_B1F_SAILORLOOKING, DIR_SOUTH
	release
	end

SSAqua_B1F_EventScript_SailorLookingForBuddy::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SSAQUA_SAILOR, SSAqua_B1F_EventScript_SailorLookingFoundBuddy
	msgbox SSAqua_B1F_Text_FastShipOnDutySailor, MSGBOX_DEFAULT
	closemessage
	release
	end

SSAqua_B1F_EventScript_SailorLookingFoundBuddy::
	msgbox SSAqua_B1F_Text_FastShipOnDutySailorThanks, MSGBOX_DEFAULT
	goto_if_lt VAR_SSAQUA_STATE, 5, SSAqua_B1F_EventScript_SailorGirl
	closemessage
	release
	end
SSAqua_B1F_EventScript_SailorGirl::
	msgbox SSAqua_B1F_Text_FastShipOnDutySailorSawGirl, MSGBOX_DEFAULT
	closemessage
	release
	end

SSAqua_B1F_EventScript_SleepySailor::
	msgbox SSAqua_B1F_Text_FastShipOnDutySailorDirections, MSGBOX_NPC
	end

SSAqua_B1F_EventScript_Barfcan::
	msgbox SSAqua_B1F_Text_BarfCan, MSGBOX_SIGN
	end

SSAqua_B1F_Text_BarfCan:
#if GERMAN
	.string "Igitt! Hätte ich besser nicht geguckt!$"
#else
    .string "Yuck!\n"
    .string "Shouldn't have looked!$"
#endif

SSAqua_B1F_Text_FastShipOnDutySailor:
#if GERMAN
	.string "Hey, Kind. Kannst du nach\n"
	.string "meinem Kumpel sehen?\p"
	.string "Er hängt irgendwo faul herum,\n"
	.string "dieser faule Sack!\p"
	.string "Ich würde ihn suchen, aber ich\n"
	.string "bin gerade im Dienst.$"
#else
	.string "Hey, kid. Could I get you to\n"
	.string "look for my buddy?\p"
	.string "He's goofing off somewhere,\n"
	.string "that lazy bum!\p"
	.string "I want to go find him, but I'm\n"
	.string "on duty right now.$"
#endif

SSAqua_B1F_Text_FastShipOnDutySailorRefused:
#if GERMAN
	.string "Oh, oh…\p"
	.string "Der Kapitän wird wütend sein…$"
#else
	.string "Oh, gee…\p"
	.string "The CAPTAIN will be furious…$"
#endif

SSAqua_B1F_Text_FastShipOnDutySailorThanks:
#if GERMAN
	.string "Danke! Ich habe mit ihm geredet.\n"
	.string "Er gelobt, von jetzt an immer seine\l"
	.string "Arbeit zu machen!$"
#else
	.string "Thanks, kid! I chewed him out\n"
	.string "good so he'll quit slacking off!$"
#endif

SSAqua_B1F_Text_FastShipOnDutySailorSawGirl:
#if GERMAN
	.string "Ein kleines Mädchen?\p"
	.string "Ich glaube, sie ging hier vorbei.$"
#else
	.string "A little girl?\p"
	.string "I may have seen her go by here.$"
#endif

SSAqua_B1F_Text_FastShipOnDutySailorDirections:
#if GERMAN
	.string "Der Speisesaal ist geradeaus.\p"
	.string "Die Treppen am\n"
	.string "Ende führen in die Kapitänskajüte.$"
#else
	.string "The dining room is up ahead.\p"
	.string "The stairs at the end lead to\n"
	.string "the CAPTAIN's cabin.$"
#endif

SSAqua_B1F_EventScript_Jeff::
	trainerbattle_single TRAINER_JEFF_HNS, SSAqua_B1F_Text_SailorJeffSeen, SSAqua_B1F_Text_SailorJeffBeaten
	msgbox SSAqua_B1F_Text_SailorJeffAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorJeffSeen:
#if GERMAN
	.string "In den Arbeitspausen ist Kämpfen\n"
	.string "meine Lieblingsbeschäftigung.$"
#else
	.string "Nothing beats a battle when\n"
	.string "I'm on my break.$"
#endif

SSAqua_B1F_Text_SailorJeffBeaten:
#if GERMAN
	.string "Sieg oder Niederlage,\n"
	.string "meine Pause ist vorüber!$"
#else
	.string "Win or lose, my break's over!$"
#endif

SSAqua_B1F_Text_SailorJeffAfter:
#if GERMAN
	.string "Ich denke, ich werde wohl nie gewinnen,\n"
	.string "wenn ich die Sache nicht ernst nehme.$"
#else
	.string "I guess I can't win if I don't\n"
	.string "get serious.$"
#endif

SSAqua_B1F_EventScript_Debra::
	trainerbattle_single TRAINER_DEBRA_HNS, SSAqua_B1F_Text_PicnickerDebraSeen, SSAqua_B1F_Text_PicnickerDebraBeaten
	msgbox SSAqua_B1F_Text_PicnickerDebraAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_PicnickerDebraSeen:
#if GERMAN
	.string "Mir ist langweilig.\n"
	.string "Willst du kämpfen?$"
#else
	.string "I'm so bored. Want to battle?$"
#endif

SSAqua_B1F_Text_PicnickerDebraBeaten:
#if GERMAN
	.string "Autsch! Du bist zu stark!$"
#else
	.string "Yow! You're too strong!$"
#endif

SSAqua_B1F_Text_PicnickerDebraAfter:
#if GERMAN
	.string "{COLOR RED}Saffronia City{COLOR DARK_GRAY}…\n"
	.string "{COLOR RED}Prismania City{COLOR DARK_GRAY}…\l"
	.string "Ich habe gehört, in der Kanto-Region\l"
	.string "gibt es auch viele große Städte.$"
#else
	.string "SAFFRON, CELADON… I hear there\n"
	.string "are many big cities in KANTO.$"
#endif

SSAqua_B1F_EventScript_Fritz::
	trainerbattle_single TRAINER_FRITZ_HNS, SSAqua_B1F_Text_JugglerFritzSeen, SSAqua_B1F_Text_JugglerFritzBeaten
	msgbox SSAqua_B1F_Text_JugglerFritzAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_JugglerFritzSeen:
#if GERMAN
	.string "Börks…\n"
	.string "Ich bin seekrank!$"
#else
	.string "Urrf… I'm seasick!$"
#endif

SSAqua_B1F_Text_JugglerFritzBeaten:
#if GERMAN
	.string "Ich kann mich\n"
	.string "nicht mehr bewegen…$"
#else
	.string "I can't move anymore…$"
#endif

SSAqua_B1F_Text_JugglerFritzAfter:
#if GERMAN
	.string "Ich reise nie wieder mit dem Schiff. Das\n"
	.string "nächste Mal nehme ich den Magnetzug.$"
#else
	.string "No more ships for me.\n"
	.string "Next time,\p"
	.string "I'm taking the MAGNET TRAIN.$"
#endif

SSAqua_B1F_EventScript_Garrett::
	trainerbattle_single TRAINER_GARRETT_HNS, SSAqua_B1F_Text_SailorGarrettSeen, SSAqua_B1F_Text_SailorGarrettBeaten
	msgbox SSAqua_B1F_Text_SailorGarrettAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorGarrettSeen:
#if GERMAN
	.string "Hier arbeiten wir\n"
	.string "Matrosen!$"
#else
	.string "This is where we sailors work!$"
#endif

SSAqua_B1F_Text_SailorGarrettBeaten:
#if GERMAN
	.string "Ich habe auf eigenem Terrain\n"
	.string "verloren…$"
#else
	.string "I lost on my home field…$"
#endif

SSAqua_B1F_Text_SailorGarrettAfter:
#if GERMAN
	.string "Auf dem Weg von {COLOR RED}Orania City{COLOR DARK_GRAY} nach\n"
	.string "{COLOR RED}Oliviana City{COLOR DARK_GRAY} wechseln die Passagiere.$"
#else
	.string "We get different passengers\n"
	.string "from VERMILION CITY to\p"
	.string "OLIVINE CITY.$"
#endif

SSAqua_B1F_EventScript_Jonah::
	trainerbattle_single TRAINER_JONAH_HNS, SSAqua_B1F_Text_FisherJonahSeen, SSAqua_B1F_Text_FisherJonahBeaten
	msgbox SSAqua_B1F_Text_FisherJonahAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_FisherJonahSeen:
#if GERMAN
	.string "Wie öde! Wir fahren mit dem Schiff, und\n"
	.string "ich kann nicht angeln! Kämpfen wir!$"
#else
	.string "Even though we're out on the\n"
	.string "sea, I can't fish!\p"
	.string "This is boring! Let's battle!$"
#endif

SSAqua_B1F_Text_FisherJonahBeaten:
#if GERMAN
	.string "J-jetzt ist mir nicht mehr langweilig…$"
#else
	.string "I… I'm not bored anymore…$"
#endif

SSAqua_B1F_Text_FisherJonahAfter:
#if GERMAN
	.string "Ich werde am Kai von\n"
	.string "{COLOR RED}Orania City{COLOR DARK_GRAY} angeln.$"
#else
	.string "I plan to fish off\n"
	.string "VERMILION's pier.$"
#endif

SSAqua_B1F_EventScript_Wai::
	trainerbattle_single TRAINER_WAI_HNS, SSAqua_B1F_Text_BlackbeltWaiSeen, SSAqua_B1F_Text_BlackbeltWaiBeaten
	msgbox SSAqua_B1F_Text_BlackbeltWaiAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_BlackbeltWaiSeen:
#if GERMAN
	.string "Arrr!\n"
	.string "Ich trainiere meine Beine, indem ich\l"
	.string "das Schaukeln des Schiffes ausgleiche!$"
#else
	.string "I'm building up my legs by\n"
	.string "bracing\p"
	.string "against the ship's rocking!$"
#endif

SSAqua_B1F_Text_BlackbeltWaiBeaten:
#if GERMAN
	.string "Arrr!\n"
	.string "Du hast mich überrollt!$"
#else
	.string "Rocked and rolled over!$"
#endif

SSAqua_B1F_Text_BlackbeltWaiAfter:
#if GERMAN
	.string "Ich konnte den Karate-Meister in\n"
	.string "Johto nicht finden.\p"
	.string "Er soll irgendwo in einer\n"
	.string "Höhle trainieren…$"
#else
	.string "I couldn't find the KARATE KING\n"
	.string "in JOHTO.\p"
	.string "He's supposed to be training in\n"
	.string "a cave somewhere.$"
#endif

SSAqua_B1F_EventScript_Kenneth::
	trainerbattle_single TRAINER_KENNETH_HNS, SSAqua_B1F_Text_SailorKennethSeen, SSAqua_B1F_Text_SailorKennethBeaten
	msgbox SSAqua_B1F_Text_SailorKennethAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorKennethSeen:
#if GERMAN
	.string "Ich bin Matrose!\p"
	.string "Aber eigentlich trainiere ich Pokémon,\n"
	.string "um einmal Champ zu werden!$"
#else
	.string "I'm a sailor man!\p"
	.string "But I'm training POKéMON, so I\n"
	.string "can become the CHAMP!$"
#endif

SSAqua_B1F_Text_SailorKennethBeaten:
#if GERMAN
	.string "Mein Trainingsrückstand\n"
	.string "ist offensichtlich…$"
#else
	.string "My lack of training is obvious…$"
#endif

SSAqua_B1F_Text_SailorKennethAfter:
#if GERMAN
	.string "Acht Orden! Sie zeigen, dass\n"
	.string "du die Arena-Leiter besiegt hast.\p"
	.string "Kein Wunder, dass du so gut bist!$"
#else
	.string "Eight BADGES! They must prove\n"
	.string "that you've beaten\p"
	.string "GYM LEADERS.\p"
	.string "No wonder you're so good!$"
#endif

SSAqua_B1F_EventScript_Shirley::
	trainerbattle_single TRAINER_SHIRLEY_HNS, SSAqua_B1F_Text_TeacherShirleySeen, SSAqua_B1F_Text_TeacherShirleyBeaten
	msgbox SSAqua_B1F_Text_TeacherShirleyAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_TeacherShirleySeen:
#if GERMAN
	.string "Lass die Finger\n"
	.string "von meinen Schülern!$"
#else
	.string "Don't lay a finger on my\n"
	.string "students!$"
#endif

SSAqua_B1F_Text_TeacherShirleyBeaten:
#if GERMAN
	.string "Jieks!$"
#else
	.string "Aaack!$"
#endif

SSAqua_B1F_Text_TeacherShirleyAfter:
#if GERMAN
	.string "Wir machen einen Ausflug zu den\n"
	.string "Ruinen bei {COLOR RED}Viola City{COLOR DARK_GRAY}.$"
#else
	.string "We're on a field trip to the\n"
	.string "RUINS outside VIOLET.$"
#endif

SSAqua_B1F_EventScript_Nate::
	trainerbattle_single TRAINER_NATE_HNS, SSAqua_B1F_Text_SchoolboyNateSeen, SSAqua_B1F_Text_SchoolboyNateBeaten
	msgbox SSAqua_B1F_Text_SchoolboyNateAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SchoolboyNateSeen:
#if GERMAN
	.string "Warst du schon mal in den {COLOR RED}Alph-Ruinen{COLOR DARK_GRAY}?$"
#else
	.string "Do you know the RUINS OF ALPH?$"
#endif

SSAqua_B1F_Text_SchoolboyNateBeaten:
#if GERMAN
	.string "Uaaah!$"
#else
	.string "Yaargh!$"
#endif

SSAqua_B1F_Text_SchoolboyNateAfter:
#if GERMAN
	.string "Es heißt, wenn man in den Ruinen Radio\n"
	.string "hört, kriegt man seltsame Signale rein.$"
#else
	.string "Radios pick up strange signals\n"
	.string "inside the RUINS.$"
#endif

SSAqua_B1F_EventScript_Ricky::
	trainerbattle_single TRAINER_RICKY_HNS, SSAqua_B1F_Text_SchoolboyRickySeen, SSAqua_B1F_Text_SchoolboyRickyBeaten
	msgbox SSAqua_B1F_Text_SchoolboyRickyAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SchoolboyRickySeen:
#if GERMAN
	.string "In den {COLOR RED}Alph-Ruinen{COLOR DARK_GRAY} gibt es\n"
	.string "mysteriöse Steinplatten.$"
#else
	.string "There are some odd stone panels\n"
	.string "in the RUINS OF ALPH.$"
#endif

SSAqua_B1F_Text_SchoolboyRickyBeaten:
#if GERMAN
	.string "Ich wurde vermöbelt!$"
#else
	.string "I was done in!$"
#endif

SSAqua_B1F_Text_SchoolboyRickyAfter:
#if GERMAN
	.string "Ich habe gelesen, dass es insgesamt\n"
	.string "vier von diesen Steinplatten gibt.$"
#else
	.string "I read that there are four of\n"
	.string "those stone panels.$"
#endif

