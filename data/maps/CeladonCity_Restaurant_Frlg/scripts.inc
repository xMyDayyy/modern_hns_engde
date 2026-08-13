CeladonCity_Restaurant_Frlg_MapScripts::
	.byte 0

CeladonCity_Restaurant_EventScript_Chef::
	msgbox CeladonCity_Restaurant_Text_TakingBreakRightNow, MSGBOX_NPC
	end

CeladonCity_Restaurant_EventScript_Woman::
	msgbox CeladonCity_Restaurant_Text_OftenGoToDrugstore, MSGBOX_NPC
	end

CeladonCity_Restaurant_EventScript_CoinCaseMan::
	lock
	faceplayer
	goto_if_set FLAG_GOT_COIN_CASE, CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase
	msgbox CeladonCity_Restaurant_Text_TakeThisImBusted
	checkitemspace ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Restaurant_EventScript_NoRoomForCoinCase
	giveitem_msg CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan, ITEM_COIN_CASE
	setflag FLAG_GOT_COIN_CASE
	release
	end

CeladonCity_Restaurant_EventScript_NoRoomForCoinCase::
	msgbox CeladonCity_Restaurant_Text_MakeRoomForThis
	release
	end

CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase::
	msgbox CeladonCity_Restaurant_Text_ThoughtIdWinItBack
	release
	end

CeladonCity_Restaurant_EventScript_WorkerM::
	msgbox CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner, MSGBOX_NPC
	end

CeladonCity_Restaurant_EventScript_FatMan::
	msgbox CeladonCity_Restaurant_Text_ManLostItAllAtSlots, MSGBOX_NPC
	end

CeladonCity_Restaurant_Text_TakingBreakRightNow::
#if GERMAN
	.string "Hallo!\p"
	.string "Wir machen gerade eine Pause.$"
#else
	.string "Hi!\p"
	.string "Sorry, but we're taking a break\n"
	.string "right now.$"
#endif

CeladonCity_Restaurant_Text_OftenGoToDrugstore::
#if GERMAN
	.string "Meine Pokémon sind ziemlich schwach,\n"
	.string "deshalb gehe ich oft zur Drogerie.$"
#else
	.string "My POKéMON are weak, so I often\n"
	.string "have to go to the DRUGSTORE.$"
#endif

CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner::
#if GERMAN
	.string "Pst! Unter der Spielhalle befindet sich\n"
	.string "ein Keller!$"
#else
	.string "Psst! There's a basement under the\n"
	.string "GAME CORNER, I hear.$"
#endif

CeladonCity_Restaurant_Text_ManLostItAllAtSlots::
#if GERMAN
	.string "Mampf...\p"
	.string "Der Mann dort drüben am Tisch hat\n"
	.string "Haus und Hof verzockt.$"
#else
	.string "Munch…\p"
	.string "The man at that table lost it all\n"
	.string "at the slots.$"
#endif

CeladonCity_Restaurant_Text_TakeThisImBusted::
#if GERMAN
	.string "Ja, lach mich ruhig aus!\p"
	.string "Ich bin pleite!\p"
	.string "Jetzt ist Schluss damit! Ich werde\n"
	.string "niemals wieder zocken!\p"
	.string "Hier, das kann ich jetzt nicht mehr\n"
	.string "gebrauchen!$"
#else
	.string "Go ahead! Laugh!\n"
	.string "I'm flat-out busted!\p"
	.string "No more slots for me!\n"
	.string "I'm going straight!\p"
	.string "Here!\n"
	.string "I won't be needing this anymore!$"
#endif

CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan::
#if GERMAN
	.string "{PLAYER} erhält einen Münzkorb!$"
#else
	.string "{PLAYER} received a COIN CASE\n"
	.string "from the man.$"
#endif

CeladonCity_Restaurant_Text_MakeRoomForThis::
#if GERMAN
	.string "Du solltest etwas Platz schaffen!$"
#else
	.string "Make room for this!$"
#endif

CeladonCity_Restaurant_Text_ThoughtIdWinItBack::
#if GERMAN
	.string "Ich dachte immer, ich könnte den\n"
	.string "Jackpot knacken!$"
#else
	.string "I always thought I was going to\n"
	.string "win it back…$"
#endif

