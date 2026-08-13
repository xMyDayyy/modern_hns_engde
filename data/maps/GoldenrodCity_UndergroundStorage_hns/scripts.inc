GoldenrodCity_UndergroundStorage_hns_MapScripts::
	.byte 0

GoldenrodCity_UndergroundStorage_EventScript_Director::
    lock
    faceplayer
    checkitem ITEM_CARD_KEY
    goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_UndergroundStorage_EventScript_Director2
    msgbox RadioTowerBasement_Text_DirectorIntro, MSGBOX_DEFAULT
    closemessage
    giveitem ITEM_CARD_KEY
    msgbox RadioTowerBasement_Text_DirectorCardKey, MSGBOX_DEFAULT
    closemessage
    release
    end

GoldenrodCity_UndergroundStorage_EventScript_Director2::
    msgbox RadioTowerBasement_Text_DirectorAfter, MSGBOX_DEFAULT
    closemessage
    release
    end

GoldenrodCity_UndergroundStorage_EventScript_Grunt19::
    trainerbattle_single TRAINER_GRUNT_19_HNS, RadioTowerBasement_Text_GruntM24Seen, RadioTowerBasement_Text_GruntM24Beaten
	msgbox RadioTowerBasement_Text_GruntM24After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Grunt12::
    trainerbattle_single TRAINER_GRUNT_12_HNS, RadioTowerBasement_Text_GruntM14Seen, RadioTowerBasement_Text_GruntM14Beaten
	msgbox RadioTowerBasement_Text_GruntM14After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Eto::
    trainerbattle_single TRAINER_ETO_3_HNS, RadioTowerBasement_Text_GruntM15Seen, RadioTowerBasement_Text_GruntM15Beaten
	msgbox RadioTowerBasement_Text_GruntM15After, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_UndergroundStorage_EventScript_Item_TM_CALM_MIND::
    finditem ITEM_TM_CALM_MIND
    end

GoldenrodCity_UndergroundStorage_EventScript_Item_UltraBall::
    finditem ITEM_ULTRA_BALL
    end

GoldenrodCity_UndergroundStorage_EventScript_Item_MaxEther::
    finditem ITEM_MAX_ETHER
    end

RadioTowerBasement_Text_GruntM24Seen:
#if GERMAN
	.string "Wie bist du so weit gekommen?\p"
	.string "Nun gut. Es gibt wohl keine andere\n"
	.string "Lösung, um dich auszuschalten.$"
#else
    .string "How did you get this far?\p"
    .string "I guess it can't be helped. I'll\n"
    .string "dispose of you.$"
#endif

RadioTowerBasement_Text_GruntM24Beaten:
#if GERMAN
	.string "Du hast mich ausgeschaltet!$"
#else
    .string "I got disposed of…$"
#endif

RadioTowerBasement_Text_GruntM24After:
#if GERMAN
	.string "Wir werden Team Rocket beschützen, bis\n"
	.string "Giovanni zu uns zurückkehrt!\p"
	.string "Und dazu ist uns jedes Mittel recht!$"
#else
    .string "TEAM ROCKET will keep going, waiting\n"
    .string "for the return of GIOVANNI.\p"
    .string "We'll do whatever it takes.$"
#endif

RadioTowerBasement_Text_GruntM14Seen:
#if GERMAN
	.string "Keinen Schritt weiter!\p"
	.string "Ich kenne keine Gnade für meine\n"
	.string "Feinde, auch nicht für Gören!$"
#else
    .string "You're not going any farther!\p"
    .string "I don't show mercy to my enemies,\n"
    .string "not even brats!$"
#endif

RadioTowerBasement_Text_GruntM14Beaten:
#if GERMAN
	.string "Aaargh!$"
#else
    .string "Blast it!$"
#endif

RadioTowerBasement_Text_GruntM14After:
#if GERMAN
	.string "Ich bin ein Versager… Vergib mir,\n"
	.string "Giovanni!$"
#else
    .string "I lost…\p"
    .string "Please forgive me, GIOVANNI!$"
#endif

RadioTowerBasement_Text_GruntM15Seen:
#if GERMAN
	.string "Hihihi! Schau mal, wer da ist!\p"
	.string "Bereit? Ich bin jetzt richtig\n"
	.string "stark!$"
#else
    .string "Hyuck-hyuck-hyuck! Look who it is!\p"
    .string "Ready? I'm really tough now!$"
#endif

RadioTowerBasement_Text_GruntM15Beaten:
#if GERMAN
	.string "Hihihi! Du bist echt gut!\p"
	.string "Team Rocket war nur ein Job…\n"
	.string "aber ich sehe, dass es anderen wehtut.\p"
	.string "Na gut, ich höre auf.\p"
	.string "Danke dir. Sorry, Giovanni!$"
#else
    .string "Hyuck-hyuck-hyuck! You're so good!\p"
    .string "This TEAM ROCKET thing is just\n"
    .string "a job, but I can see it hurts others.\p"
    .string "That's it, I'm leaving.\p"
    .string "Thank you so much. Sorry GIOVANNI!$"
#endif

RadioTowerBasement_Text_GruntM15After:
#if GERMAN
	.string "Hihihi! Das war ein Spaß!\n"
	.string "Ich vergesse dich nicht!$"
#else
    .string "Hyuck-hyuck-hyuck! That was a blast!\n"
    .string "I'll remember you!$"
#endif

RadioTowerBasement_Text_DirectorIntro:
#if GERMAN
	.string "Intendant: W-wer bist du? Was, du bist\n"
	.string "hier, um mich zu retten? Vielen, vielen\l"
	.string "Dank!\p"
	.string "A-aber sag mal… was ist da im Radioturm\n"
	.string "bloß los?\p"
	.string "Was? Dort wimmelt es nur so vor Team\n"
	.string "Rocket-Mitgliedern? Na gut! Hier, nimm\l"
	.string "diesen Türöffner!$"
#else
    .string "DIRECTOR: Who? What? You came to\n"
    .string "rescue me?\p"
    .string "Thank you!\p"
    .string "The RADIO TOWER!\p"
    .string "What's happening there?\p"
    .string "Taken over by TEAM ROCKET?\p"
    .string "Here. Take this CARD KEY.$"
#endif

RadioTowerBasement_Text_DirectorCardKey:
#if GERMAN
	.string "Intendant: Damit solltest du die Tür im\n"
	.string "zweiten Stock aufbekommen!$"
#else
    .string "DIRECTOR: Use that to open the\n"
    .string "shutters on 3F.$"
#endif

RadioTowerBasement_Text_DirectorAfter:
#if GERMAN
	.string "Bitte! Du weißt ja nicht, zu was sie mit\n"
	.string "dem Sender in ihrer Gewalt fähig sind!\p"
	.string "Wenn sie mit diesem seltsamen Signal\n"
	.string "auf Sendung gehen, könnten sie sogar\l"
	.string "Besitz von den Pokémon ergreifen!\p"
	.string "Du bist unsere letzte Hoffnung! Du\n"
	.string "musst den Radioturm… nein, alle Pokémon\l"
	.string "dieser Welt retten!$"
#else
    .string "I'm begging you to help.\p"
    .string "There's no telling what they'll do if\n"
    .string "they control the transmitter.\p"
    .string "They may even be able to control\n"
    .string "POKéMON using a special signal!\p"
    .string "You're the only one I can call on.\p"
    .string "Please save the RADIO TOWER…\p"
    .string "And all the POKéMON nationwide!$"
#endif
