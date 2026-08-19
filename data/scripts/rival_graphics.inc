Common_EventScript_SetupRivalGfxId::
#if defined(POKEMON_HNS)
	@ HnS-Kanon: Birks Kind ist immer Maike (Brix ist Normans Sohn).
	@ Die Rivalengrafik haengt daher nicht mehr am Spielergeschlecht.
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	@ WICHTIG: return, nicht end! Das Skript wird per call eingebunden;
	@ ein end beendet den ganzen Aufrufer. Dadurch liefen in Bad Lavastadt
	@ die Folgezeilen (Rad-Grafik, Rivalenposition) nie - und beim Abgang
	@ erschien ein falscher Sprite.
	return
#endif
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, EventScript_SetupRivalGfxIdFemale
	goto_if_eq VAR_RESULT, FEMALE, EventScript_SetupRivalGfxIdMale
	end

EventScript_SetupRivalGfxIdFemale::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return

EventScript_SetupRivalGfxIdMale::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return

Common_EventScript_SetupRivalOnBikeGfxId::
#if IS_HNS
	@ HnS-Kanon: Auch auf dem Rad ist die Rivalin immer Maike. Ohne diese
	@ Weiche bekam die weibliche Spielfigur nach dem Route-110-Kampf
	@ Brix' Bike-Sprite zu sehen (Spieltest-Report).
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_MAY_MACH_BIKE
	return
#endif
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, EventScript_SetupRivalOnBikeGfxIdFemale
	goto_if_eq VAR_RESULT, FEMALE, EventScript_SetupRivalOnBikeGfxIdMale
	end

EventScript_SetupRivalOnBikeGfxIdFemale::
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_MAY_MACH_BIKE
	return

EventScript_SetupRivalOnBikeGfxIdMale::
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_BRENDAN_MACH_BIKE
	return

@ Unused
Common_EventScript_SetupRivalGfxIdSameGender::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, EventScript_SetupRivalGfxIdMale2
	goto_if_eq VAR_RESULT, FEMALE, EventScript_SetupRivalGfxIdFemale2
	end

EventScript_SetupRivalGfxIdMale2::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return

EventScript_SetupRivalGfxIdFemale2::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return
