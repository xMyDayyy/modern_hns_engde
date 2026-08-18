NewSinjoh_hns_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, NewSinjoh_On_Transition
	.byte 0

NewSinjoh_On_Transition:
    setflag FLAG_VISITED_NEW_SINJOH
	end

NewSinjoh_EventScript_TriggerNorthGate::
	lock
	msgbox NewSinjoh_Text_TriggerNorthGate, MSGBOX_AUTOCLOSE
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	release
	end

NewSinjoh_Text_TriggerNorthGate:
#if GERMAN
	.string "Ich sollte die Kimono-Girls nicht\n"
	.string "warten lassen.$"
#else
	.string "Better not leave the Kimono\n"
	.string "girls waiting.$"
#endif

NewSinjoh_EventScript_PetStantler::
    lock
	faceplayer
	playmoncry SPECIES_STANTLER, 0
	msgbox NewSinjoh_Text_Stantler_Cry, MSGBOX_DEFAULT
	waitmoncry
    closemessage
	release
	end

NewSinjoh_Text_Stantler_Cry:
    .string "Lerrrrr!$"

NewSinjoh_EventScript_Steven::
	msgbox NewSinjoh_Text_Steven, MSGBOX_AUTOCLOSE
	end

NewSinjoh_Text_Steven:
#if GERMAN
	.string "Troy: Werte Dame, darf ich Sie zur\n"
	.string "Quelle dort drüben begleiten?\p"
	.string "Es scheint reichlich Platz zu geben.$"
#else
	.string "STEVEN: Ma'am, may I help you to\n"
	.string "the spring over there?\p"
	.string "It seems there is plenty of room.$"
#endif

NewSinjoh_MilkMan_EventScript_Seller::
	lock
	faceplayer
	checkitem ITEM_MOOMOO_MILK, 99
	goto_if_eq VAR_RESULT, 1, MilkMan_EventScript_Battle
	showmoneybox 0, 0
	msgbox NewSinjoh_MilkMan_text_BuyMilk, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, NewSinjoh_EventScript_MilkMan_BuyMilk
	msgbox NewSinjoh_MilkMan_NoSale, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	end

NewSinjoh_EventScript_MilkMan_BuyMilk::
	checkmoney 500, 0
	goto_if_eq VAR_RESULT, FALSE, NewSinjoh_MilkMan_NotEnough
	additem ITEM_MOOMOO_MILK
	goto_if_eq VAR_RESULT, FALSE, NewSinjoh_MilkMan_BagFull
	removemoney 500
	updatemoneybox 0
	msgbox NewSinjoh_MilkMan_Text_WouldYouLikeAnother, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, NewSinjoh_EventScript_MilkMan_BuyMilk

	msgbox NewSinjoh_MilkMan_GotMilk, MSGBOX_DEFAULT
	closemessage
	playse MUS_OBTAIN_ITEM
	msgbox NewSinjoh_Text_GotMilk, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	release
	end

NewSinjoh_MilkMan_BagFull::
	msgbox NewSinjoh_MilkMan_NoRoom, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	release
	end

NewSinjoh_MilkMan_NotEnough::
	msgbox NewSinjoh_MilkMan_NoMoney, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	release
	end

NewSinjoh_MilkMan_text_BuyMilk:
#if GERMAN
	.string "Ich bin der Milchmann.\p"
	.string "Meine Milch ist köstlich.\p"
	.string "Wenn du heute welche möchtest,\n"
	.string "kostet sie 500 ¥.$"
#else
	.string "I am the Milkman.\p"
	.string "My milk is delicious.\p"
	.string "If you would like some today, it'll be\n"
	.string "¥500.$"
#endif

NewSinjoh_MilkMan_GotMilk:
#if GERMAN
	.string "Bitte sehr!\n"
	.string "Angereichert mit dem, was die Welt\l"
	.string "braucht.$"
#else
	.string "Here ya go!\n"
	.string "It's fortified with what the world wants.$"
#endif

NewSinjoh_MilkMan_NoMoney:
#if GERMAN
	.string "Tut mir leid.\n"
	.string "Besorg dir Geld, dann kommen wir ins\l"
	.string "Geschäft!$"
#else
	.string "Sorry.\n"
	.string "Get some cash, then you will get a sale!$"
#endif

NewSinjoh_MilkMan_NoRoom:
#if GERMAN
	.string "Sieht aus, als wäre dein Beutel voll.$"
#else
	.string "Look's like your PACK's full.$"
#endif

NewSinjoh_MilkMan_NoSale:
#if GERMAN
	.string "Willst du sie etwa nicht?\n"
	.string "Sie enthält, was die Welt verdient.$"
#else
	.string "Don't you want it?\n"
	.string "It gots what the world deserves.$"
#endif

NewSinjoh_MilkMan_Text_WouldYouLikeAnother:
#if GERMAN
	.string "Wie wäre es mit noch einer?$"
#else
	.string "How bout another?$"
#endif

NewSinjoh_Text_GotMilk:
#if GERMAN
	.string "{PLAYER} erhält Kuhmuh-Milch!$"
#else
	.string "{PLAYER} got MOOMOO MILK.$"
#endif

MilkMan_EventScript_Battle:: 
    msgbox MilkMan_Battle_text
    Trainerbattle_no_intro TRAINER_MILKMAN_HNS, NewSinjoh_MilkMan_text_Lose
    release
    end

MilkMan_Battle_text:
#if GERMAN
	.string "Ich bin der Milchmann.\p"
	.string "Meine Milch ist köstlich.\p"
	.string "Heute gibt es eine Sonderlieferung!$"
#else
	.string "I am the MilkMan,\p"
	.string "My milk is delicious.\p"
	.string "Special delivery today!$"
#endif

NewSinjoh_MilkMan_text_Lose:
#if GERMAN
	.string "Diese Welt ist perfekt.\n"
	.string "Nicht wahr?$"
#else
	.string "This world is perfect.\n"
	.string "isn't it?$"
#endif

NewSinjoh_Script_TravelMart::
	lock
	faceplayer
	message NewSinjoh_Text_TravelShopGreeting
	waitmessage
	pokemart NewSinjoh_Pokemart_TravelShop
	msgbox NewSinjoh_Text_TravelShopEnd, MSGBOX_DEFAULT
	release
	end

	.align 2
NewSinjoh_Pokemart_TravelShop:
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_ELIXER
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_MAX_LURE
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NONE
	release
	end

NewSinjoh_Text_TravelShopGreeting:
#if GERMAN
	.string "Willkommen in meinem kleinen\n"
	.string "Versorgungsladen. Wie kann ich helfen?$"
#else
	.string "Welcome to My little Supply Shop.\n"
	.string "How can I help you?$"
#endif

NewSinjoh_Text_TravelShopEnd:
#if GERMAN
	.string "Komm bald wieder.$"
#else
	.string "Do come back.$"
#endif

Script_NewSinjoh_Traveler_Brother::
	lock
	faceplayer
	msgbox NewSinjoh_Text_TravelBrother_Greeting
	release
	end

NewSinjoh_Text_TravelBrother_Greeting:
#if GERMAN
	.string "All unsere Waren sind hausgemacht\n"
	.string "und stammen aus der Region!\p"
	.string "Meine große Schwester hat diesen Laden\n"
	.string "eröffnet, weil die Supermarkt-Kette so\l"
	.string "weit draußen keine Filiale eröffnen will.$"
#else
    .string "All our goods are homemade\n"
	.string "and grown locally!\p"
	.string "My big Sister opened up this shop,\n"
	.string "because the PokeMart company\l"
	.string "won't open a location\l"
	.string "this far out from a major town.$"
#endif

NewSinjoh_EventScript_Josh::
	msgbox NewSinjoh_Text_Josh, MSGBOX_NPC
	end

NewSinjoh_Text_Josh:
#if GERMAN
	.string "Dieser Ort ist der Wahnsinn!\p"
	.string "Diese heißen Quellen vor der Welt\n"
	.string "zu verstecken, ist ein Verbrechen.\p"
	.string "Das erzähle ich all meinen Freunden!$"
#else
	.string "This place is sick!\p"
	.string "Hiding these hot springs\n"
	.string "from the world is a travesty.\p"
	.string "I'm gonna tell all my friends!$"
#endif

NewSinjoh_EventScript_Janice::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_JaniceAfter
	msgbox NewSinjoh_Text_Janice, MSGBOX_NPC
	end
NewSinjoh_EventScript_JaniceAfter::
	msgbox NewSinjoh_Text_JaniceAfter, MSGBOX_NPC
	end

NewSinjoh_Text_Janice:
#if GERMAN
	.string "Diese Quellen sind magisch, aber ich\n"
	.string "glaube, die Einheimischen werfen uns\l"
	.string "böse Blicke zu.$"
#else
	.string "These springs are magical,\n"
	.string "but I feel like the locals\l"
	.string "are giving us dirty looks.$"
#endif
NewSinjoh_Text_JaniceAfter:
	.string "Diese Quellen sind magisch,\n"
	.string "und die Einheimischen sind so\l"
	.string "herzlich, wenn man sie erst\l"
	.string "kennenlernt!$"

NewSinjoh_EventScript_OldLady1::
	msgbox NewSinjoh_Text_OldLady1, MSGBOX_NPC
	end

NewSinjoh_Text_OldLady1:
#if GERMAN
	.string "Nichts belebt diese alte Seele so\n"
	.string "sehr wie eine schöne Aussicht.$"
#else
	.string "There's nothing like a nice view to\n"
	.string "invigorate this old soul.$"
#endif

NewSinjoh_EventScript_OldLady2::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_OldLady2Steven
	msgbox NewSinjoh_Text_OldLady2, MSGBOX_NPC
	end
NewSinjoh_EventScript_OldLady2Steven::
	msgbox NewSinjoh_Text_OldLady2Steven, MSGBOX_NPC
	end

NewSinjoh_Text_OldLady2:
#if GERMAN
	.string "Na toll, jetzt belegen diese Touristen\n"
	.string "unsere heißen Quellen!\p"
	.string "In letzter Zeit kommt wirklich eine\n"
	.string "Plage nach der anderen!$"
#else
	.string "Great, now these tourists\n"
	.string "are hogging our hot springs!\p"
	.string "It's been one bad thing after\n"
	.string "another lately!$"
#endif
NewSinjoh_Text_OldLady2Steven:
	.string "Was für ein stattlicher junger Mann!\p"
	.string "Vielleicht sind diese Touristen doch\n"
	.string "nicht so übel.$"

NewSinjoh_EventScript_OldLady3::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_OldLady3After
	msgbox NewSinjoh_Text_OldLady3, MSGBOX_NPC
	end
NewSinjoh_EventScript_OldLady3After::
	msgbox NewSinjoh_Text_OldLady3After, MSGBOX_NPC
	end

NewSinjoh_Text_OldLady3:
#if GERMAN
	.string "Wie kann diese Frau nur so unhöflich zu\n"
	.string "unseren Gästen sein?\p"
	.string "Sie sollte selbst mal in den Quellen\n"
	.string "baden.\p"
	.string "Es ist doch genug Platz für alle da.$"
#else
	.string "How can that woman\n"
	.string "be so rude to our guests?\p"
	.string "She needs to take a dip\n"
	.string "in the springs. \p"
	.string "There is plenty of space\n"
	.string "for everyone.$"
#endif
NewSinjoh_Text_OldLady3After:
	.string "Es scheint, als würden sich hier\n"
	.string "langsam alle aneinander gewöhnen.\p"
	.string "Schön!$"

NewSinjoh_EventScript_SpringsSage::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_SpringsSageAfter
	msgbox NewSinjoh_Text_SpringsSage, MSGBOX_NPC
	end
NewSinjoh_EventScript_SpringsSageAfter::
	msgbox NewSinjoh_Text_SpringsSageAfter, MSGBOX_NPC
	end

NewSinjoh_Text_SpringsSage:
#if GERMAN
	.string "Seit die Neuankömmlinge hier sind, gibt\n"
	.string "es viel Zwietracht und Streit in unserer\l"
	.string "Gemeinschaft.\p"
	.string "Wie man auch dazu steht: Das\n"
	.string "Gleichgewicht ist eindeutig gestört.\p"
	.string "Sei bitte freundlich zu Einheimischen\n"
	.string "wie zu Touristen.$"
#else
	.string "There has been much division\n"
	.string "and strife in our community\l"
	.string "since the newcomers arrived.\p"
	.string "Regardless of your perspective,\n"
	.string "it is clear that the balance has\l"
	.string "been disturbed.\p"
	.string "Please be kind to locals and\n"
	.string "tourists alike.$"
#endif
NewSinjoh_Text_SpringsSageAfter:
	.string "Seit die legendären Pokémon\n"
	.string "besänftigt wurden, geht es bergauf.\p"
	.string "Das Gleichgewicht ist nach Sinjoh\n"
	.string "zurückgekehrt.$"

NewSinjoh_EventScript_Sage2::
	msgbox NewSinjoh_Text_Sage2, MSGBOX_NPC
	end

NewSinjoh_Text_Sage2:
#if GERMAN
	.string "Die Zeiten ändern sich, doch die\n"
	.string "Damhirplex versammeln sich noch immer.\l"
	.string "Dafür können wir dankbar sein.$"
#else
	.string "Times change, but the stantler\n"
	.string "still gather. For that, we can\l"
	.string "be thankful.$"
#endif

NewSinjoh_EventScript_Daughter::
	msgbox NewSinjoh_Text_Daughter, MSGBOX_NPC
	end

NewSinjoh_Text_Daughter:
#if GERMAN
	.string "Wiiiiii!!\p"
	.string "Schau, Mami!\n"
	.string "Freihändig!\p"
	.string "Genau wie die Snowboarder!$"
#else
    .string "Wheeeeee!!\p"
    .string "Look Mommy!\n"
    .string "No hands!\p"
	.string "Just like the snowboarders!$"
#endif

NewSinjoh_EventScript_Mother::
	lock
	faceplayer
	msgbox NewSinjoh_Text_Mother, MSGBOX_AUTOCLOSE
	turnobject LOCALID_NEWSINJOH_MOTHER, DIR_EAST
	release
	end

NewSinjoh_Text_Mother:
#if GERMAN
	.string "Sieh nur, wie süß mein Schatz seine\n"
	.string "Runden dreht!\p"
	.string "Diese Eisbahn gibt es seit\n"
	.string "Generationen, aber die Kinder haben sie\l"
	.string "nie genutzt, bis die Neuankömmlinge\l"
	.string "kamen.$"
#else
    .string "Look at my adorable baby go!\p"
    .string "This rink has been here\n"
	.string "for generations, but the children\l"
	.string "never used it until the newcomers\l"
	.string "arrived.$"
#endif

NewSinjoh_EventScript_Welcome_Sign::
	msgbox NewSinjoh_Text_Welcome_Sign, MSGBOX_SIGN
	end

NewSinjoh_Text_Welcome_Sign:
#if GERMAN
	.string "Neu-Sinjoh$"
#else
	.string "New Sinjoh$"
#endif

NewSinjoh_EventScript_Resturant_Sign::
	msgbox NewSinjoh_Text_Resturant_Sign, MSGBOX_SIGN
	end

NewSinjoh_Text_Resturant_Sign:
	.string "FAMILY CAFE$"

NewSinjoh_EventScript_Hiker::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_HikerAfter
	msgbox NewSinjoh_Text_Hiker, MSGBOX_NPC
	end
NewSinjoh_EventScript_HikerAfter::
	msgbox NewSinjoh_Text_HikerAfter, MSGBOX_NPC
	end

NewSinjoh_Text_Hiker:
#if GERMAN
	.string "Das Geschäft brummt!\n"
	.string "Aber die Preise sind gestiegen, seit die\l"
	.string "Städter sich für unser kleines Dorf\l"
	.string "interessieren.$"
#else
	.string "Business is booming!\n"
	.string "But prices have gone up since\l"
	.string "the city folk became interested\l"
	.string "in our little town.$"
#endif
NewSinjoh_Text_HikerAfter:
	.string "Das Geschäft brummt!\p"
	.string "Und bei dem Trinkgeld, das dieser\n"
	.string "silberhaarige Kerl gibt, sind die\l"
	.string "Preise sogar gesunken!$"

NewSinjoh_EventScript_OldLady4::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, NewSinjoh_EventScript_OldLady4After
	msgbox NewSinjoh_Text_OldLady4, MSGBOX_NPC
	end
NewSinjoh_EventScript_OldLady4After::
	msgbox NewSinjoh_Text_OldLady4After, MSGBOX_NPC
	end

NewSinjoh_Text_OldLady4:
#if GERMAN
	.string "Ich verkaufe nur an Einheimische!$"
#else
	.string "I only sell to locals!$"
#endif
NewSinjoh_Text_OldLady4After:
	.string "Ich verkaufe immer noch nur an\n"
	.string "Einheimische!$"

NewSinjoh_EventScript_Item_DuskBall::
	finditem ITEM_DUSK_BALL
    end


