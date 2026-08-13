Route10_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route10_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route10_EventScript_Surge::
    lock
    faceplayer
    msgbox Route10_Text_Surge, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_PLANT_SURGE
    removeobject LOCALID_ROUTE10_SURGE
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_SURGE
    release
    end

Route10_Text_Surge:
#if GERMAN
	.string "Hey, Kleiner!\p"
	.string "Pass gut auf dich auf hier draußen,\n"
	.string "dieser Ort ist voller Energie!\p"
	.string "Willst du ein Re-Match, geh ins\n"
	.string "Kampf-Dojo!$"
#else
    .string "Hey, kid!\p"
	.string "Keep your guard up out here,\n"
	.string "this place is cracklin' with power!\p"
	.string "If you want a rematch, report to\n"
	.string "the FIGHTING DOJO!$"
#endif

Route10_EventScript_Item_Rock_Polish::
    finditem ITEM_TM_ROCK_POLISH
    end

Route10_EventScript_Jim::
	trainerbattle_single TRAINER_JIM_HNS, Route10_Text_HikerJimSeen, Route10_Text_HikerJimBeaten
	msgbox Route10_Text_HikerJimAfter, MSGBOX_AUTOCLOSE
	end

Route10_EventScript_Robert::
	trainerbattle_single TRAINER_ROBERT_HNS, Route10_Text_PokefanmRobertSeen, Route10_Text_PokefanmRobertBeaten
	msgbox Route10_Text_PokefanmRobertAfter, MSGBOX_AUTOCLOSE
	end

Route10_EventScript_Sign::
	msgbox Route10_Text_Sign, MSGBOX_SIGN
	end

Route10_EventScript_PPSign::
	msgbox Route10_Text_PowerPlant, MSGBOX_SIGN
	end

Route10_EventScript_Zapdos::
	lock
	faceplayer
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
	msgbox SeafoamIslands_B1F_Text_ArticunoBattle
	delay 40
	waitmoncry
	seteventmon SPECIES_ZAPDOS, 50
	special BattleSetup_StartLegendaryBattle
waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route10_EventScript_ZapdosRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ROUTE10_ZAPDOS
	setflag FLAG_HIDE_ZAPDOS
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

Route10_EventScript_ZapdosRan::
	release
	end


Route10_Text_HikerJimSeen:
#if GERMAN
	.string "Haaa, hahaha, harrr!$"
#else
	.string "Hahahah!$"
#endif

Route10_Text_HikerJimBeaten:
#if GERMAN
	.string "Haaahahaha!\n"
	.string "Hiiihihihi!\l"
	.string "Heute gab es Kicherpilze zum Frühstück.$"
#else
	.string "Hahaha-hachoo!$"
#endif

Route10_Text_HikerJimAfter:
#if GERMAN
	.string "Hiiihihihihi!\n"
	.string "Haaah… puuuh…$"
#else
	.string "Hay fever is making me sneeze!\n"
	.string "Ahahah-CHOO!$"
#endif

Route10_Text_PokefanmRobertSeen:
#if GERMAN
	.string "Du magst Pokémon, nicht wahr?\p"
	.string "Ich auch!$"
#else
	.string "You like POKéMON, don't you?\p"
	.string "Me too!$"
#endif

Route10_Text_PokefanmRobertBeaten:
#if GERMAN
	.string "Ich gebe zu, ich habe verloren.$"
#else
	.string "I'd have to say that's my loss.$"
#endif

Route10_Text_PokefanmRobertAfter:
#if GERMAN
	.string "Sieh nur, was du mit meinen Pokémon\n"
	.string "gemacht hast…$"
#else
	.string "Look what you did to my POKéMON…\p"
	.string "I won't forget this…$"
#endif

Route10_Text_PowerPlant:
#if GERMAN
	.string "Kraftwerk$"
#else
	.string "POWER PLANT$"
#endif

Route10_Text_Sign:
#if GERMAN
	.string "Route 10\p"
	.string "Azuria City - Lavandia$"
#else
	.string "ROUTE 10\p"
	.string "CERULEAN CITY - LAVENDER TOWN$"
#endif
