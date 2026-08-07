RustboroCity_Flat2_2F_MapScripts::
	.byte 0

RustboroCity_Flat2_2F_EventScript_OldMan::
	msgbox RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
	end

RustboroCity_Flat2_2F_EventScript_NinjaBoy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_GavePremierBall
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
	giveitem ITEM_PREMIER_BALL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
	release
	end

RustboroCity_Flat2_2F_EventScript_GavePremierBall::
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays:
#if GERMAN
	.string "Vor langer, langer Zeit war Devon eine\n"
	.string "kleine, überschaubare Firma.$"
#else
	.string "Way back in the old days, DEVON was just\n"
	.string "a teeny, tiny company.$"
#endif

RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt:
#if GERMAN
	.string "Mein Papa arbeitet für die\n"
	.string "Corporation. \p"
	.string "Mein Papa hat dies gemacht! Ich kann\n"
	.string "damit aber nichts anfangen, daher\l"
	.string "schenke ich es dir.$"
#else
	.string "My daddy's working at the CORPORATION.\p"
	.string "My daddy made this!\n"
	.string "But I can't use it, so you can have it.$"
#endif

RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo:
#if GERMAN
	.string "Mein Papa arbeitet für die\n"
	.string "Corporation. \p"
	.string "Wenn ich groß bin, werde ich auch für\n"
	.string "Devon arbeiten.$"
#else
	.string "My daddy's working at the CORPORATION.\p"
	.string "When I grow up, I'm going to work for\n"
	.string "DEVON, too.$"
#endif

