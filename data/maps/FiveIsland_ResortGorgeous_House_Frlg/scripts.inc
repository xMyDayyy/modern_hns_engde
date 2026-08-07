.equ SHOWN_REQUESTED_MON, FLAG_TEMP_2

FiveIsland_ResortGorgeous_House_Frlg_MapScripts::
	.byte 0

FiveIsland_ResortGorgeous_House_EventScript_Selphy::
	lock
	faceplayer
	goto_if_set SHOWN_REQUESTED_MON, FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest
	goto_if_eq VAR_RESORT_GORGEOUS_REQUESTED_MON, 0xFFFF, FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong
	goto_if_ne VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE, FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon
	msgbox FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end

FiveIsland_ResortGorgeous_House_EventScript_RequestMon::
	special SampleResortGorgeousMonAndReward
	msgbox FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease
	release
	end

FiveIsland_ResortGorgeous_House_EventScript_RequestTookTooLong::
	msgbox FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end

FiveIsland_ResortGorgeous_House_EventScript_CheckForRequestedMon::
	copyvar VAR_0x8004, VAR_RESORT_GORGEOUS_REQUESTED_MON
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon
	goto FiveIsland_ResortGorgeous_House_EventScript_RequestMon
	end

FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon::
	special SampleResortGorgeousMonAndReward
	msgbox FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou
	addobject LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerEnter
	waitmovement 0
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth
	call_if_eq VAR_FACING, DIR_SOUTH, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth
	call_if_eq VAR_FACING, DIR_EAST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast
	call_if_eq VAR_FACING, DIR_WEST, FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest
	copyobjectxytoperm LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks
	giveitem VAR_RESORT_GORGEOUS_REWARD
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward
	setflag SHOWN_REQUESTED_MON
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
	release
	end

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerNorth::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerSouth::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerEast::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_ButlerApproachPlayerWest::
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest
	waitmovement 0
	return

FiveIsland_ResortGorgeous_House_EventScript_NoRoomForReward::
	textcolor NPC_TEXT_COLOR_MALE
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull
	textcolor NPC_TEXT_COLOR_FEMALE
	msgbox FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing
	setflag SHOWN_REQUESTED_MON
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
	release
	end

FiveIsland_ResortGorgeous_House_EventScript_JustFulfilledRequest::
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck
	release
	end

FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerNorth::
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerSouth::
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerEast::
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

@ Very odd. If the player is talking to Selphy facing West, then the player has clipped through the table
@ In this case rather than approach the player the Butler walks up, which clips the Butler into a wall
FiveIsland_ResortGorgeous_House_Movement_ButlerApproachPlayerWest::
	walk_up
	step_end

FiveIsland_ResortGorgeous_House_Movement_ButlerEnter::
	walk_in_place_down
	step_end

@ Addressed as "Sebastian" but speaks only as "Butler"
FiveIsland_ResortGorgeous_House_EventScript_Butler::
	msgbox FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun, MSGBOX_NPC
	end

FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish::
#if GERMAN
	.string "Kea: Oh?\n"
	.string "Kenne ich dich von irgendwo?\p"
	.string "Aber das macht nichts!\p"
	.string "Ich langweile mich so.\n"
	.string "Hör bitte meinen Wunsch!$"
#else
	.string "SELPHY: Oh?\n"
	.string "Do I know you from somewhere?\p"
	.string "Oh, but that doesn't matter.\p"
	.string "I am exquisitely bored.\n"
	.string "Please, hear my wish.$"
#endif

FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease::
#if GERMAN
	.string "Ich möchte ein Pokémon sehen.\n"
	.string "Ein bezauberndes {STR_VAR_1}!\p"
	.string "Ich möchte es sofort und hier.\n"
	.string "Bitte, erfülle mir diesen Traum!$"
#else
	.string "I wish to see a POKéMON.\n"
	.string "A darling {STR_VAR_1}.\p"
	.string "I want to see one right away.\n"
	.string "Please, make my wish come true.$"
#endif

FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting::
#if GERMAN
	.string "Kea:Oh, ich bin dessen so müde!\n"
	.string "Ich bin müde, auf dich zu warten!\p"
	.string "Ich verzeihe dir dieses Mal,\n"
	.string "aber bitte enttäusche mich\l"
	.string "beim nächsten Mal nicht mehr!$"
#else
	.string "SELPHY: Oh, I'm tired of this.\n"
	.string "I'm tired of waiting for you.\p"
	.string "I'll forgive you this time, but\n"
	.string "please don't fail me next time.$"
#endif

FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou::
#if GERMAN
	.string "Kea: Oh, hallo!\p"
	.string "Oh, wie grandios! Das muss das\n"
	.string "{STR_VAR_1} sein, das du für mich\l"
	.string "gefangen hast.\l"
	.string "Kicher…\l"
	.string "Es sieht dir ähnlich.\p"
	.string "Vielen Dank, das ist lieb von dir!\p"
	.string "…………\n"
	.string "……\l"
	.string "Ist irgendetwas?\l"
	.string "Du darfst gehen!\p"
	.string "…………\n"
	.string "……\l"
	.string "Oh, ich verstehe!\p"
	.string "Sebastian!\n"
	.string "Du wirst hier dringend gebraucht!$"
#else
	.string "SELPHY: Oh, hello, there.\p"
	.string "Oh, my gracious. That must be the\n"
	.string "{STR_VAR_1} you caught for me.\p"
	.string "Giggle…\n"
	.string "I see a resemblance to you.\p"
	.string "Thank you so kindly.\p"
	.string "… …  … …  … …\n"
	.string "Is something the matter?\p"
	.string "You may leave.\p"
	.string "… …  … …  … …\n"
	.string "Oh, fine. I understand now.\p"
	.string "SEBASTIAN!\n"
	.string "I need you here this instant!$"
#endif

FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady::
#if GERMAN
	.string "Butler: Sie haben gerufen?$"
#else
	.string "Butler: Yes, my lady.$"
#endif

FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation::
#if GERMAN
	.string "Kea: Besorgen sie dieser\n"
	.string "Person ein Zeichen meiner\l"
	.string "Wertschätzung!$"
#else
	.string "SELPHY: See to it that this person\n"
	.string "is given a token of appreciation.$"
#endif

FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid::
#if GERMAN
	.string "Butler: Wie Sie wünschen!$"
#else
	.string "Butler: I shall do as you bid,\n"
	.string "my lady.$"
#endif

FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks::
#if GERMAN
	.string "Butler: Vielen Dank, dass sie\n"
	.string "Lady Kea zufrieden stellten!\p"
	.string "Nehmen sie das als kleines\n"
	.string "Dankeschön…$"
#else
	.string "Butler: I sincerely thank you for\n"
	.string "pleasing Lady SELPHY.\p"
	.string "Please accept this as her thanks…$"
#endif

FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull::
#if GERMAN
	.string "Butler: Es scheint, ihr Beutel\n"
	.string "ist bedauerlicherweise voll!$"
#else
	.string "Butler: Your BAG appears to be\n"
	.string "unfortunately full.$"
#endif

FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing::
#if GERMAN
	.string "Oh…\n"
	.string "Wie schade!$"
#else
	.string "Oh…\n"
	.string "How disappointing.$"
#endif

FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck::
#if GERMAN
	.string "Kea: Viel Glück!$"
#else
	.string "SELPHY: I wish you the best of\n"
	.string "luck.$"
#endif

FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun::
#if GERMAN
	.string "Butler: Das Lächeln von Lady\n"
	.string "Kea ist so strahlend wie\l"
	.string "die Sonne.\l"
	.string "Bitte, ich flehe sie an, stimmen\l"
	.string "sie Lady Kea glücklich!$"
#else
	.string "Butler: The smile of Lady SELPHY\n"
	.string "has the brilliance of the sun.\p"
	.string "Please, I beg you to bring joy\n"
	.string "to Lady SELPHY.$"
#endif

