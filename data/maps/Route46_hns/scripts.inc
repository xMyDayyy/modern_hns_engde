Route46_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route29_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route46_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route46_EventScript_Bailey::
	trainerbattle_single TRAINER_BAILEY_HNS, Route46_Text_HikerBaileySeen, Route46_Text_HikerBaileyBeaten
	msgbox Route46_Text_HikerBaileyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route46_EventScript_Ted::
	trainerbattle_single TRAINER_TED_HNS, Route46_Text_CamperTedSeen, Route46_Text_CamperTedBeaten
	msgbox Route46_Text_CamperTedAfterBattle, MSGBOX_AUTOCLOSE
	end

Route46_EventScript_Erin::
	trainerbattle_single TRAINER_ERIN_HNS, Route46_Text_PicnickerErinSeen, Route46_Text_PicnickerErinBeaten, Route46_EventScript_RegisterErin
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route46_EventScript_RematchErin
	msgbox Route46_Text_PicnickerErinAfterBattle, MSGBOX_AUTOCLOSE
	end

Route46_EventScript_RegisterErin::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route46_Text_ErinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ERIN_HNS
	release
	end

Route46_EventScript_RematchErin::
	trainerbattle_rematch TRAINER_ERIN_HNS, Route46_Text_ErinRematchIntro, Route46_Text_ErinRematchDefeat
	msgbox Route46_Text_ErinPostRematch, MSGBOX_AUTOCLOSE
	end

Route46_EventScript_Sign::
	lock
	msgbox Route46_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end

Route46_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

Route46_Text_HikerBaileySeen:
#if GERMAN
	.string "Also gut!\n"
	.string "Bald wirst du sie kennenlernen!\l"
	.string "Die Kraft der Pokémon aus den Bergen!$"
#else
	.string "Awright! I'll show you the\n"
	.string "power of mountain POKéMON!$"
#endif

Route46_Text_HikerBaileyBeaten:
#if GERMAN
	.string "Gnade! Du hast mir zur Genüge\n"
	.string "demonstriert, was du drauf hast!$"
#else
	.string "Mercy! You showed me your\n"
	.string "power!$"
#endif

Route46_Text_HikerBaileyAfterBattle:
#if GERMAN
	.string "Es ist vorbei. Auch gut. Wir Wanderer\n"
	.string "sehen niemals zurück.$"
#else
	.string "It's over. I don't mind.\n"
	.string "We HIKERS are like that.$"
#endif

Route46_Text_CamperTedSeen:
#if GERMAN
	.string "Ich trainiere auch Pokémon! Möchtest\n"
	.string "du gegen mich kämpfen?$"
#else
	.string "I'm raising POKéMON too!\p"
	.string "Will you battle with me?$"
#endif

Route46_Text_CamperTedBeaten:
#if GERMAN
	.string "Was?$"
#else
	.string "Wha…?$"
#endif

Route46_Text_CamperTedAfterBattle:
#if GERMAN
	.string "Mein Bestes hat leider nicht gereicht.\n"
	.string "Ich gebe offen zu - ich habe verloren.$"
#else
	.string "I did my best but came up\n"
	.string "short.\p"
	.string "No excuses--I admit I lost.$"
#endif

Route46_Text_PicnickerErinSeen:
#if GERMAN
	.string "Ich bin auch ein Pokémon-Trainer!\n"
	.string "Hast du Zeit für ein Match?$"
#else
	.string "I raise POKéMON too!\p"
	.string "Will you battle with me?$"
#endif

Route46_Text_PicnickerErinBeaten:
#if GERMAN
	.string "Oh, Mistkerle!$"
#else
	.string "Oh, rats!$"
#endif

Route46_Text_PicnickerErinAfterBattle:
#if GERMAN
	.string "Ich war in vielen Pokémon-Arenen, aber\n"
	.string "die Pokémon-Arena in Dukatia City ist\l"
	.string "am schönsten.\p"
	.string "Dort sind wunderschöne Blumen!$"
#else
	.string "I've been to many GYMS, but the\n"
	.string "GYM in GOLDENROD is my favorite.\p"
	.string "It's filled with pretty flowers!$"
#endif

Route46_Text_ErinRegister:
#if GERMAN
	.string "Ich war schon in vielen Arenen, aber die\n"
	.string "Arena in Dukatia City ist meine\l"
	.string "Lieblingsarena.\p"
	.string "Sie ist voller hübscher Blumen!$"
#else
	.string "I've been to many GYMS, but the\n"
	.string "GYM in GOLDENROD is my favorite.\p"
	.string "It's filled with pretty flowers!$"
#endif

Route46_Text_ErinRematchIntro:
#if GERMAN
	.string "Ich bin auch ein Pokémon-Trainer! Hast\n"
	.string "du Zeit für ein Match?$"
#else
	.string "I raise POKéMON too!\p"
	.string "Will you battle with me?$"
#endif

Route46_Text_ErinRematchDefeat:
#if GERMAN
    .string "Oh nein!$"
#else
	.string "Oh, rats!$"
#endif

Route46_Text_ErinPostRematch:
#if GERMAN
	.string "Ich war schon in vielen Arenen, aber die\n"
	.string "Arena in Dukatia City ist meine\l"
	.string "Lieblingsarena.\p"
	.string "Sie ist voller hübscher Blumen!$"
#else
	.string "I've been to many GYMS, but the\n"
	.string "GYM in GOLDENROD is my favorite.\p"
	.string "It's filled with pretty flowers!$"
#endif

Route46_Text_PicnickerErin2Beaten:
#if GERMAN
	.string "Arg… Ständig verliere ich! Ich\n"
	.string "muss es noch härter probieren!\p"
	.string "Egal, danke, dass du immer wieder\n"
	.string "gegen mich kämpfst.\p"
	.string "Hier ist das Geschenk vom letzten Mal.$"
#else
	.string "Aww… I keep losing all the time!\p"
	.string "I'll just have to try harder!\n"
	.string "Anyway, thanks for battling\n"
	.string "me again and again.\p"
	.string "Here's that present from the\n"
	.string "other time.$"
#endif

Route46_Text_Sign:
#if GERMAN
	.string "Route 46 Bergweg voraus$"
#else
	.string "ROUTE 46\n"
	.string "MOUNTAIN RD. AHEAD$"
#endif
