AquaHideout_1F_MapScripts::
	.byte 0

@ The below two entrance guards give hints about what to do to progress the story
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint1
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint1
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_MagmaHideoutHint1::
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_SlateportHint1::
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_MagmaHideoutHint2::
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_SlateportHint2::
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_1F_EventScript_Grunt1Defeated::
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_Text_OurBossIsSnatchingSomething:
#if GERMAN
	.string "Was? Wie? Was hast du mit Team Aqua zu\n"
	.string "schaffen?\p"
	.string "Unser Boss ist nicht hier! Er ist dabei,\n"
	.string "sich etwas sehr Wichtiges unter den\l"
	.string "Nagel zu reißen.\p"
	.string "… …\n"
	.string "Wo er hin ist?\p"
	.string "Uahahaha! Du glaubst doch nicht im\n"
	.string "Ernst, dass ich dir das verrate!?!$"
#else
	.string "What? What? What do you want with \n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here! He's gone off to\n"
	.string "snatch something important!\p"
	.string "… …\n"
	.string "Where did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"
#endif

AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
#if GERMAN
	.string "Was? Wie?!?\n"
	.string "Du bist einer von Team Magma?\p"
	.string "Ich habe gehört, dass Team Magma\n"
	.string "versucht, ein großartiges Pokémon in\l"
	.string "seinem Versteck aufzuwecken.\p"
	.string "Aber wo ist das Versteck wohl?$"
#else
	.string "What? What?\n"
	.string "Are you a TEAM MAGMA grunt?\p"
	.string "I hear that TEAM MAGMA is trying to\n"
	.string "awaken an awesome POKéMON at their\l"
	.string "HIDEOUT.\p"
	.string "But where might their HIDEOUT be?$"
#endif

AquaHideout_1F_Text_BossWentToJackASubmarine:
#if GERMAN
	.string "Was? Wie? Was hast du mit Team Aqua zu\n"
	.string "schaffen?\p"
	.string "Unser Boss ist nicht hier! Er ist dabei,\n"
	.string "sich ein U-Boot unter den Nagel zu\l"
	.string "reißen.\p"
	.string "… …\n"
	.string "Wo er hin ist?\p"
	.string "Uahahaha! Du glaubst doch nicht im\n"
	.string "Ernst, dass ich dir das verrate!?!$"
#else
	.string "What? What? What do you want with \n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here!\n"
	.string "He's gone off to jack a submarine!\p"
	.string "… …\n"
	.string "Where did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"
#endif

AquaHideout_1F_Text_BossIsOnRoute122:
#if GERMAN
	.string "Was? Wie? Was hast du mit Team Aqua zu\n"
	.string "schaffen?\p"
	.string "Unser Boss ist nicht hier! Er ist auf\n"
	.string "dem Weg nach Pyroberg auf der Route\l"
	.string "122!\p"
	.string "… …\n"
	.string "Warum er dorthin ist?\p"
	.string "Uahahaha! Du glaubst doch nicht im\n"
	.string "Ernst, dass ich dir das verrate!?!$"
#else
	.string "What? What? What do you want with \n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here! He's on his way to\n"
	.string "MT. PYRE on ROUTE 122!\p"
	.string "… …\n"
	.string "Why did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"
#endif

AquaHideout_1F_Text_TeamMagmaAtMtChimney:
#if GERMAN
	.string "Was? Wie?!?\n"
	.string "Bist du einer von den Team Magma\l"
	.string "Rüpeln?\p"
	.string "Ich habe gehört, dass Team Magma am\n"
	.string "Schlotberg nach einem unglaublichen\l"
	.string "Pokémon sucht.\p"
	.string "Was ist das wohl für ein Pokémon?$"
#else
	.string "What? What?\n"
	.string "Are you a TEAM MAGMA grunt?\p"
	.string "I hear that TEAM MAGMA is after\n"
	.string "an awesome POKéMON at MT. CHIMNEY.\p"
	.string "But what is that POKéMON like?$"
#endif

AquaHideout_1F_Text_BossIsInSlateportCity:
#if GERMAN
	.string "Was? Wie? Was hast du mit Team Aqua zu\n"
	.string "schaffen?\p"
	.string "Unser Boss ist nicht hier! Er ist auf\n"
	.string "dem Weg nach Graphitport City!\p"
	.string "… …\n"
	.string "Warum er dorthin ist?\p"
	.string "Uahahaha! Du glaubst doch nicht im\n"
	.string "Ernst, dass ich dir das verrate!?!$"
#else
	.string "What? What? What do you want with\n"
	.string "TEAM AQUA?\p"
	.string "Our BOSS isn't here!\n"
	.string "He's on his way to SLATEPORT CITY!\p"
	.string "… …\n"
	.string "Why did he go?\p"
	.string "Wahaha! Do you really think I'd tell\n"
	.string "you something that crucial?$"
#endif

AquaHideout_1F_Text_Grunt1Intro:
#if GERMAN
	.string "Huhuuhuhuu!\n"
	.string "Verdächtige Person gesichtet!$"
#else
	.string "Ayiyiyi!\n"
	.string "Suspicious character spotted!$"
#endif

AquaHideout_1F_Text_Grunt1Defeat:
#if GERMAN
	.string "Grrr… Ich habe verloren!$"
#else
	.string "Grrrrr…\n"
	.string "I lost it!$"
#endif

AquaHideout_1F_Text_Grunt1PostBattle:
#if GERMAN
	.string "Nun hat das Team verloren, aber ich\n"
	.string "habe meinen Job gemacht…$"
#else
	.string "I took the loss for the TEAM,\n"
	.string "but I did my job…$"
#endif

