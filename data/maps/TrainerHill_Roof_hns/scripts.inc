TrainerHill_Roof_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Roof_hns_OnLoad
	.byte 0

TrainerHill_Roof_hns_OnLoad::
	setflag FLAG_TEMP_HIDE_FOLLOWER
	end

TrainerHill_Roof_hns_EventScript_Owner::
	trainerhill_settrainerflags
	lock
	faceplayer
	trainerhill_getownerstate
	switch VAR_RESULT
	case 0, TrainerHill_Roof_hns_EventScript_Arrived
	case 1, TrainerHill_Roof_hns_EventScript_GivePrize
	case 2, TrainerHill_Roof_hns_EventScript_AlreadyReceivedPrize
TrainerHill_Roof_hns_EventScript_Arrived::
	msgbox TrainerHill_Roof_hns_Text_YouFinallyCameBravo, MSGBOX_DEFAULT
TrainerHill_Roof_hns_EventScript_GivePrize::
	trainerhill_giveprize
	switch VAR_RESULT
	case 0, TrainerHill_Roof_hns_EventScript_ReceivePrize
	case 1, TrainerHill_Roof_hns_EventScript_NoRoomForPrize
	case 2, TrainerHill_Roof_hns_EventScript_CheckFinalTime
TrainerHill_Roof_hns_EventScript_ReceivePrize::
	msgbox TrainerHill_Roof_hns_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
	playfanfare MUS_LEVEL_UP
	message gText_ObtainedTheItem
	waitfanfare
	waitmessage
	goto TrainerHill_Roof_hns_EventScript_CheckFinalTime

TrainerHill_Roof_hns_EventScript_NoRoomForPrize::
	msgbox TrainerHill_Roof_hns_Text_HaveTheMostMarvelousGift, MSGBOX_DEFAULT
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
	msgbox TrainerHill_Roof_hns_Text_FullUpBeBackLaterForThis, MSGBOX_DEFAULT
	goto TrainerHill_Roof_hns_EventScript_CheckFinalTime

TrainerHill_Roof_hns_EventScript_CheckFinalTime::
	trainerhill_finaltime
	switch VAR_RESULT
	case 0, TrainerHill_Roof_hns_EventScript_NewRecord
	case 1, TrainerHill_Roof_hns_EventScript_NoNewRecord
	case 2, TrainerHill_Roof_hns_EventScript_EndSpeakToOwner
TrainerHill_Roof_hns_EventScript_NewRecord::
	msgbox TrainerHill_Roof_hns_Text_GotHereMarvelouslyQuickly, MSGBOX_DEFAULT
	goto TrainerHill_Roof_hns_EventScript_EndSpeakToOwner
	end

TrainerHill_Roof_hns_EventScript_NoNewRecord::
	msgbox TrainerHill_Roof_hns_Text_YouWerentVeryQuick, MSGBOX_DEFAULT
	goto TrainerHill_Roof_hns_EventScript_EndSpeakToOwner
	end

TrainerHill_Roof_hns_EventScript_EndSpeakToOwner::
	msgbox TrainerHill_Roof_hns_Text_ArriveZippierNextTime, MSGBOX_DEFAULT
	release
	end

TrainerHill_Roof_hns_EventScript_AlreadyReceivedPrize::
	msgbox TrainerHill_Roof_hns_Text_ArriveZippierNextTime, MSGBOX_DEFAULT
	release
	end

TrainerHill_Roof_hns_Text_YouFinallyCameBravo:
#if GERMAN
	.string "Hm! Hm!\p"
	.string "Du bist endlich angekommen!\n"
	.string "Ja, du hast es geschafft!\p"
	.string "Warte! Sag nichts!\n"
	.string "Ich weiß, warum du ganz allein hierher\l"
	.string "gekommen bist!\p"
	.string "Du wolltest mich sehen, den Besitzer\n"
	.string "des Trainerbergs, weil…\p"
	.string "Du willst mit mir ein\n"
	.string "Doppelteam bilden!\p"
	.string "Wa-hoo!\p"
	.string "…Wie?\n"
	.string "Das ist es nicht?\p"
	.string "Wie auch immer, ich habe deinen\n"
	.string "Aufstieg beobachtet.\p"
	.string "Wunderbare Kämpfe!\n"
	.string "Bravo, wirklich!$"
#else
	.string "Hm! Hm!\p"
	.string "You finally came!\n"
	.string "Yes, you have arrived!\p"
	.string "Wait! Don't say it!\n"
	.string "I know why you came all the way\l"
	.string "here by yourself!\p"
	.string "You wanted to see me, the owner\n"
	.string "of the TRAINER HILL, because…\p"
	.string "You want to form a tag team with me!\n"
	.string "Wa-hoo!\p"
	.string "…Uh?\n"
	.string "That's not it?\p"
	.string "Anyway, I watched you on your way up.\n"
	.string "Marvelous battling! Bravo, indeed!$"
#endif

TrainerHill_Roof_hns_Text_HaveTheMostMarvelousGift:
#if GERMAN
	.string "Für jemanden wie dich habe ich ein\n"
	.string "großartiges Geschenk und etwas Geld\l"
	.string "als Belohnung!$"
#else
	.string "For a marvelous someone like you,\n"
	.string "I have the most marvelous gift,\l"
	.string "plus some money for your effort!$"
#endif

TrainerHill_Roof_hns_Text_FullUpBeBackLaterForThis:
#if GERMAN
	.string "Oh nein, du trägst bereits\n"
	.string "zu viele Dinge bei dir!\p"
	.string "Komm später wieder dafür!$"
#else
	.string "Oh, no, full up with things!\n"
	.string "You'll be back later for this!$"
#endif

TrainerHill_Roof_hns_Text_GotHereMarvelouslyQuickly:
#if GERMAN
	.string "Moment mal! Bist du etwa unglaublich\n"
	.string "schnell hier oben angekommen?\p"
	.string "Wie prächtig! Du hättest dich nicht so\n"
	.string "beeilen müssen, um mich zu sehen!\p"
	.string "Das erfreut mich sehr.\n"
	.string "Ich lasse die Rangtafel sofort\l"
	.string "aktualisieren!$"
#else
	.string "Oh, hold on here! Did you possibly get\n"
	.string "here marvelously quickly?\p"
	.string "How splendid! You needn't have\n"
	.string "hurried so to see me!\p"
	.string "That is so delightful. I'll have the Time\n"
	.string "Board at the reception updated!$"
#endif

TrainerHill_Roof_hns_Text_YouWerentVeryQuick:
#if GERMAN
	.string "Aber oh…\n"
	.string "Du warst nicht besonders schnell\l"
	.string "unterwegs.$"
#else
	.string "But, oh…\n"
	.string "You weren't very quick getting here.$"
#endif

TrainerHill_Roof_hns_Text_ArriveZippierNextTime:
#if GERMAN
	.string "Vielleicht erfreust du mich beim\n"
	.string "nächsten Mal mit einer schnelleren Zeit.\p"
	.string "Dann bilde ich gern ein\n"
	.string "Doppelteam mit dir!\p"
	.string "Bis wir uns wiedersehen,\n"
	.string "Amigo!$"
#else
	.string "Perhaps it would please me more if you\n"
	.string "arrived zippier next time.\p"
	.string "Then, I should be pleased to form\n"
	.string "a tag team with you!\p"
	.string "Until we meet again, amigo!$"
#endif
