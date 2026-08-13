EventScript_UseSurf::
	checkfieldmove FIELD_MOVE_SURF
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndUseSurf
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end

#if IS_HNS
@ In Hoenn braucht der Spieler fuer Surfer erst eine Lizenz (siehe
@ src/hoenn_licenses.c). Ohne sie erklaert dieser Hinweis, warum nichts
@ passiert - sonst stuende der Spieler wortlos vor dem Wasser.
EventScript_NoSurfLicense::
	lockall
	playse SE_SELECT
	buffermovename STR_VAR_1, MOVE_SURF
	goto EventScript_NeedHoennLicense
	end
#endif

EventScript_CurrentTooFast::
	lockall
	checkfieldmove FIELD_MOVE_SURF
	goto_if_eq VAR_RESULT, FALSE, EventScript_CurrentTooFastEndMsg
	playse SE_SELECT
	msgbox Text_CurrentTooFast
EventScript_CurrentTooFastEndMsg::
	releaseall
	end
