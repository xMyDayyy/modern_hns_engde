Route32_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route32_PokemonCenter_OnTransition
	.byte 0

Route32_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_ROUTE_32_HNS
	end

Route32_PokemonCenter_EventScript_Lass::
	lock
	faceplayer
	msgbox Route32_Pokecenter_Text_CooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

Route32_PokemonCenter_EventScript_FishingGuru::
	lock
	faceplayer
	checkitem ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, TRUE, Route32_PokemonCenter_EventScript_FishingGuru3
	msgbox Route32_Pokecenter_Text_FishingGuruQuestion, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Route32_PokemonCenter_EventScript_FishingGuru2
	msgbox Route32_Pokecenter_Text_FishingGuruNo, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_PokemonCenter_EventScript_FishingGuru2::
	msgbox Route32_Pokecenter_Text_FishingGuruYes, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox Route32_Pokecenter_Text_FishingGuruGiveRod, MSGBOX_DEFAULT
	closemessage
	release
	end
Route32_PokemonCenter_EventScript_FishingGuru3::
	msgbox Route32_Pokecenter_Text_FishingGuruAfter, MSGBOX_DEFAULT
	release
	end



Route32_Pokecenter_Text_FishingGuruQuestion:
#if GERMAN
	.string "Das ist ein hervorragender Ort\n"
	.string "zum Angeln.\p"
	.string "Hast du Leute beim Angeln gesehen?\p"
	.string "Wie steht es mit dir?\p"
	.string "Hättest du gerne eine Angel von mir?$"
#else
	.string "This is a great fishing spot.\p"
	.string "You saw people fishing?\n"
	.string "How about you?\p"
	.string "Would you like one of my RODS?$"
#endif

Route32_Pokecenter_Text_FishingGuruYes:
#if GERMAN
	.string "He! Das höre ich wirklich gerne!\p"
	.string "Jetzt bist du auch ein Angler!$"
#else
	.string "Heh, that's good to hear.\p"
	.string "Now you're an angler too!$"
#endif

Route32_Pokecenter_Text_FishingGuruGiveRod:
#if GERMAN
	.string "Angeln ist toll!\p"
	.string "Probiere überall, wo Wasser ist, deine\n"
	.string "Angel aus; sei es am Meer oder an einem\l"
	.string "Fluss.$"
#else
	.string "Fishing is great!\p"
	.string "If there's water, be it the sea or\n"
	.string "a stream, try out your ROD.$"
#endif

Route32_Pokecenter_Text_FishingGuruNo:
#if GERMAN
	.string "Oh, das ist echt schade…$"
#else
	.string "Oh. That's rather disappointing…$"
#endif

Route32_Pokecenter_Text_FishingGuruAfter:
#if GERMAN
	.string "Moin, lüttes Ding. Und beißen sie?$"
#else
	.string "Yo, kid. How are they biting?$"
#endif

Route32_Pokecenter_Text_CooltrainerF:
#if GERMAN
	.string "Hm, welches Item sollte ich meinem\n"
	.string "Pokémon wohl am besten geben?\p"
	.string "Vielleicht eins, das seinen\n"
	.string "Angriffs-Wert erhöht?$"
#else
	.string "What should I make my POKéMON hold?\p"
	.string "Maybe an item that increases\n"
	.string "ATTACK power…$"
#endif

