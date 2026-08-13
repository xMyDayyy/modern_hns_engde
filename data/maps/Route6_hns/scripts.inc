Route6_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route6_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route6_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route6_EventScript_Rex::
	trainerbattle_single TRAINER_REX_HNS, PokefanM_Text_RexSeen, PokefanM_Text_RexBeaten
	msgbox PokefanM_Text_RexAfter, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Allan::
	trainerbattle_single TRAINER_ALLAN_HNS, PokefanM_Text_AllanSeen, PokefanM_Text_AllanBeaten
	msgbox PokefanM_Text_AllanAfter, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Pokefan::
	msgbox Route6_Text_PokefanM, MSGBOX_NPC
	end

Route6_EventScript_Sign::
	msgbox Route6_Text_UndergroundPathSign, MSGBOX_SIGN
	end

Route6_EventScript_Item_Silver_Wind::
    finditem ITEM_TM_SILVER_WIND
    end

Route6_Text_PokefanM:
#if GERMAN
	.string "Die Straße zum Kraftwerk bleibt\n"
	.string "gesperrt, bis das Problem gelöst wurde.$"
#else
	.string "The road is closed until the\n"
	.string "problem at the POWER PLANT is\l"
	.string "solved.$"
#endif

Route6_Text_UndergroundPathSign:
#if GERMAN
	.string "Tunnelpfad\n"
	.string "Azuria City - Orania City$"
#else
	.string "UNDERGROUND PATH\p"
	.string "CERULEAN CITY - VERMILION CITY$"
#endif

PokefanM_Text_RexSeen:
#if GERMAN
	.string "Mein Damhirplex ist das niedlichste der\n"
	.string "ganzen Welt.$"
#else
	.string "My STANTLER is the cutest in the\n"
	.string "world.$"
#endif

PokefanM_Text_RexBeaten:
#if GERMAN
	.string "Mein Damhirplex!$"
#else
	.string "My STANTLER!$"
#endif

PokefanM_Text_RexAfter:
#if GERMAN
	.string "Sieh nur, wie süß mein Damhirplex sich\n"
	.string "verhält!\p"
	.string "Mein Herz schmilzt dahin!$"
#else
	.string "Look how adorable my STANTLER\n"
	.string "acts!\p"
	.string "Isn't it cute enough to make\n"
	.string "your heart melt?$"
#endif

PokefanM_Text_AllanSeen:
#if GERMAN
	.string "Mein Granbull ist das niedlichste der\n"
	.string "ganzen Welt.$"
#else
	.string "My GRANBULL is the cutest in the\n"
	.string "world.$"
#endif

PokefanM_Text_AllanBeaten:
#if GERMAN
	.string "Mein Granbull!$"
#else
	.string "My GRANBULL!$"
#endif

PokefanM_Text_AllanAfter:
#if GERMAN
	.string "Sieh nur, wie süß mein Granbull sich\n"
	.string "verhält!\p"
	.string "Mein Herz schmilzt dahin!$"
#else
	.string "Look how adorable my GRANBULL\n"
	.string "acts!\p"
	.string "Isn't it cute enough to make\n"
	.string "your heart melt?$"
#endif

