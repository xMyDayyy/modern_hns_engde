SSAnne_1F_Room6_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room6_EventScript_Woman::
	lock
	faceplayer
	msgbox SSAnne_1F_Room6_Text_TakeAShortRest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SSAnne_1F_Room6_EventScript_DeclineHeal
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox SSAnne_1F_Room6_Text_GladEveryoneIsRefreshed
	release
	end

SSAnne_1F_Room6_EventScript_DeclineHeal::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SSAnne_1F_Room6_EventScript_DeclineHealMale
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMySister
	release
	end

SSAnne_1F_Room6_EventScript_DeclineHealMale::
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMyBrother
	release
	end

SSAnne_1F_Room6_Text_TakeAShortRest::
#if GERMAN
	.string "Du siehst müde aus!\n"
	.string "Komm, ruhe dich kurz aus!$"
#else
	.string "You look tired. Would you like to\n"
	.string "take a short rest?$"
#endif

SSAnne_1F_Room6_Text_GladEveryoneIsRefreshed::
#if GERMAN
	.string "Schön, dass alle erholt und erfrischt\n"
	.string "aussehen.$"
#else
	.string "I'm glad to see that everyone is\n"
	.string "looking refreshed and chipper.$"
#endif

SSAnne_1F_Room6_Text_SorryYouLookLikeMyBrother::
#if GERMAN
	.string "Entschuldige, dass ich mich über dich\n"
	.string "aufgeregt habe. Du siehst aus wie mein\l"
	.string "kleiner Bruder…$"
#else
	.string "Oh, I'm sorry for fussing over you.\n"
	.string "You look like my little brother…$"
#endif

SSAnne_1F_Room6_Text_SorryYouLookLikeMySister::
#if GERMAN
	.string "Entschuldige, dass ich mich über dich\n"
	.string "aufgeregt habe. Du siehst aus wie meine\l"
	.string "kleine Schwester…$"
#else
	.string "Oh, I'm sorry for fussing over you.\n"
	.string "You look like my little sister…$"
#endif

