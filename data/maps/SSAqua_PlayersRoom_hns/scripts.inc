SSAqua_PlayersRoom_hns_MapScripts::
	.byte 0

SSAquaRooms_EventScript_Bed::
	specialvar VAR_RESULT, IsPokecenterChallengeActivated
	goto_if_eq VAR_RESULT, TRUE, SSAquaRooms_EventScript_Bed_PokecenterChallenge
	lockall
	msgbox SSAquaRooms_Text_TakeRestOnBed, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	end

SSAquaRooms_EventScript_Bed_PokecenterChallenge::
	msgbox SSAquaRooms_Text_TakeRestOnBed_PokecenterChallenge, MSGBOX_DEFAULT
	closemessage
	release
	end


SSAquaRooms_Text_TakeRestOnBed_PokecenterChallenge:
#if GERMAN
	.string "Sorry, du machst gerade die\n"
	.string "Pokécenter-Challenge!$"
#else
	.string "Sorry, you are playing with\n"
	.string "the POKéCENTER challenge!$"
#endif

SSAquaRooms_Text_TakeRestOnBed:
#if GERMAN
	.string "Hier ist ein Bett…\n"
	.string "Zeit für etwas Erholung.$"
#else
	.string "There's a bed…\n"
	.string "Let's take a rest.$"
#endif
