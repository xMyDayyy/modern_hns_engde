SSAnne_Kitchen_Frlg_MapScripts::
	.byte 0

SSAnne_Kitchen_EventScript_Chef1::
	msgbox SSAnne_Kitchen_Text_BusyOutOfTheWay, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef2::
	msgbox SSAnne_Kitchen_Text_SawOddBerryInTrash, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef3::
	msgbox SSAnne_Kitchen_Text_SoBusyImDizzy, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef4::
	lock
	faceplayer
	msgbox SSAnne_Kitchen_Text_IAmLeChefMainCourseIs
	random 3
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, 0, SSAnne_Kitchen_EventScript_SalmonDuSalad
	call_if_eq VAR_0x8008, 1, SSAnne_Kitchen_EventScript_EelsAuBarbecue
	call_if_eq VAR_0x8008, 2, SSAnne_Kitchen_EventScript_PrimeBeefsteak
	release
	end

SSAnne_Kitchen_EventScript_SalmonDuSalad::
	msgbox SSAnne_Kitchen_Text_SalmonDuSalad
	return

SSAnne_Kitchen_EventScript_EelsAuBarbecue::
	msgbox SSAnne_Kitchen_Text_EelsAuBarbecue
	return

SSAnne_Kitchen_EventScript_PrimeBeefsteak::
	msgbox SSAnne_Kitchen_Text_PrimeBeefsteak
	return

SSAnne_Kitchen_EventScript_Chef5::
	msgbox SSAnne_Kitchen_Text_PeelSpudsEveryDay, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef6::
	msgbox SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton, MSGBOX_NPC
	end

SSAnne_Kitchen_EventScript_Chef7::
	msgbox SSAnne_Kitchen_Text_OnlyGetToPeelOnions, MSGBOX_NPC
	end

SSAnne_Kitchen_Text_BusyOutOfTheWay::
#if GERMAN
	.string "Aus dem Weg, du Leichtmatrose!\n"
	.string "Wir sind schwer beschäftigt!$"
#else
	.string "You, mon petit!\n"
	.string "We're busy here!\l"
	.string "Out of the way!$"
#endif

SSAnne_Kitchen_Text_SawOddBerryInTrash::
#if GERMAN
	.string "Im Abfalleimer habe ich eine\n"
	.string "merkwürdige Beere gesehen!\l"
	.string "Ich frage mich, was das genau war!$"
#else
	.string "I saw an odd BERRY in the trash.\n"
	.string "I wonder what that was?$"
#endif

SSAnne_Kitchen_Text_SoBusyImDizzy::
#if GERMAN
	.string "Es gibt zu viel zu tun, nie kann\n"
	.string "ich mich ausruhen!$"
#else
	.string "I'm so busy I'm getting dizzy!\n"
	.string "You have to give me room here!$"
#endif

SSAnne_Kitchen_Text_PeelSpudsEveryDay::
#if GERMAN
	.string "Was hab ich nur verbrochen?\p"
	.string "Ich muss immer nur Kartoffeln\n"
	.string "schälen...$"
#else
	.string "Hum-de-hum-de-ho…\p"
	.string "I peel spuds every day!\n"
	.string "Hum-hum…$"
#endif

SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton::
#if GERMAN
	.string "Hast du schon von Relaxo gehört?\p"
	.string "Es schläft und frisst den ganzen\n"
	.string "Tag!$"
#else
	.string "Did you hear about SNORLAX?\n"
	.string "It's a glutton.\p"
	.string "No other POKéMON eats and sleeps\n"
	.string "the way SNORLAX can and does!$"
#endif

SSAnne_Kitchen_Text_OnlyGetToPeelOnions::
#if GERMAN
	.string "Schnief... ... Schnief...\p"
	.string "Immer muss ich die Zwiebeln\n"
	.string "schälen...$"
#else
	.string "Snivel… Sniff…\p"
	.string "I only get to peel onions…\n"
	.string "Snivel…$"
#endif

SSAnne_Kitchen_Text_IAmLeChefMainCourseIs::
#if GERMAN
	.string "Ich bin der Chef de Cuisine!\p"
	.string "Der Hauptgang ist…$"
#else
	.string "Er-hem!\n"
	.string "Indeed I am le CHEF!\p"
	.string "Le main course is$"
#endif

SSAnne_Kitchen_Text_SalmonDuSalad::
#if GERMAN
	.string "Lachs-Filet!\p"
	.string "Eine kulinarische Köstlichkeit\n"
	.string "sondergleichen!$"
#else
	.string "Salmon du Salad!\p"
	.string "Les guests may gripe it's fish\n"
	.string "again, however!$"
#endif

SSAnne_Kitchen_Text_EelsAuBarbecue::
#if GERMAN
	.string "Currywurst!\p"
	.string "Wie kommt eine solche Banalität auf\n"
	.string "meine Karte?$"
#else
	.string "Eels au Barbecue!\p"
	.string "Les guests will mutiny, I fear.$"
#endif

SSAnne_Kitchen_Text_PrimeBeefsteak::
#if GERMAN
	.string "Muschel-Ragout!\p"
	.string "Die Gäste werden es lieben!$"
#else
	.string "Prime Beefsteak!\p"
	.string "But, have I enough fillets du\n"
	.string "beef?$"
#endif

