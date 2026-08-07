CeladonCity_Hotel_Frlg_MapScripts::
	.byte 0

CeladonCity_Hotel_EventScript_Receptionist::
	msgbox CeladonCity_Hotel_Text_ThisHotelIsForPeople, MSGBOX_NPC
	end

CeladonCity_Hotel_EventScript_Beauty::
	msgbox CeladonCity_Hotel_Text_OnVacationWithBrotherAndBoyfriend, MSGBOX_NPC
	end

CeladonCity_Hotel_EventScript_BeautyBoyfriend::
	msgbox CeladonCity_Hotel_Text_WhyDidSheBringBrother, MSGBOX_NPC
	end

CeladonCity_Hotel_EventScript_BeautyBrother::
	msgbox CeladonCity_Hotel_Text_SisBroughtMeOnVacation, MSGBOX_NPC
	end

CeladonCity_Hotel_Text_ThisHotelIsForPeople::
#if GERMAN
	.string "In diesem Hotel sind keine Pokémon\n"
	.string "erlaubt!\p"
	.string "Tut mir Leid.$"
#else
	.string "POKéMON?\n"
	.string "No, this is a hotel for people.\p"
	.string "We're full up, unfortunately.$"
#endif

CeladonCity_Hotel_Text_OnVacationWithBrotherAndBoyfriend::
#if GERMAN
	.string "Ich mache hier mit meinem Bruder\n"
	.string "und meinem Freund Urlaub.\p"
	.string "Prismania City ist wunderschön!$"
#else
	.string "I'm on vacation with my brother and\n"
	.string "boyfriend.\p"
	.string "CELADON is such a pretty city!$"
#endif

CeladonCity_Hotel_Text_WhyDidSheBringBrother::
#if GERMAN
	.string "Warum nur musste sie ihren Bruder\n"
	.string "mitnehmen?$"
#else
	.string "Why?\n"
	.string "Why did she bring her brother?$"
#endif

CeladonCity_Hotel_Text_SisBroughtMeOnVacation::
#if GERMAN
	.string "Dieser Urlaub war eine Idee meiner\n"
	.string "Schwester!$"
#else
	.string "Yippee! I'm on vacation!\n"
	.string "My sis brought me along! Awesome!$"
#endif

