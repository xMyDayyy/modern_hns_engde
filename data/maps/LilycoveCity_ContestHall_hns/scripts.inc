@ All the LOCALID constants used in this file are essentially redundant.
@ They're all used to have the NPC the player talked to turn back so they're facing
@ their original direction (because they're watching/participating in the contests).
@ They could all be substituted for VAR_LAST_TALKED.
LilycoveCity_ContestHall_hns_MapScripts::
	.byte 0

LilycoveCity_ContestHall_EventScript_Boy1_hns::
	msgbox LilycoveCity_ContestHall_Text_TodayWonSmartnessContest_hns, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Boy2_hns::
	msgbox LilycoveCity_ContestHall_Text_EnteredBunchOfContests_hns, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Girl_hns::
	msgbox LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks_hns, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Sailor_hns::
	msgbox LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous_hns, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_SmartContestMC_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestJudge_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant1_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EnteredWrongContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_RaisedMonToBeSmart_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant4_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience1_hns::
	msgbox LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa_hns, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience4_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_StillLoveSmartnessContests_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestMC_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestJudge_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant1_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_OverdidGrooming_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant4_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience1_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestMC_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_InTheMiddleOfContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestJudge_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant1_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_MyAzurillWasDistracted_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_NeverWonBattleButContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PetalDanceIsMarvel_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant4_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience1_hns::
	lockall
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_ContestHall_Text_MyChildIsInContest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	delay 25
	msgbox LilycoveCity_ContestHall_Text_ComeOnDear_hns, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience2_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience3_hns::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyStageSign_hns::
	msgbox LilycoveCity_ContestHall_Text_BeautyContestStage_hns, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_CuteStageSign_hns::
	msgbox LilycoveCity_ContestHall_Text_CuteContestStage_hns, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_SmartStageSign_hns::
	msgbox LilycoveCity_ContestHall_Text_SmartContestStage_hns, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_Text_TodayWonSmartnessContest_hns:
#if GERMAN
	.string "Dieses Pokémon hat den vorherigen\n"
	.string "Schönheitswettbewerb gewonnen.\p"
	.string "Weißt du was? Heute werde ich den\n"
	.string "Klugheits-Wettbewerb gewinnen!\p"
	.string "Meine Fähigkeiten erstaunen sogar\n"
	.string "mich…$"
#else
	.string "This POKéMON won the BEAUTY CONTEST\n"
	.string "here before.\p"
	.string "Well, guess what? Today, I made it\n"
	.string "win a SMARTNESS CONTEST!\p"
	.string "My abilities scare even me…$"
#endif

LilycoveCity_ContestHall_Text_EnteredBunchOfContests_hns:
#if GERMAN
	.string "Ich habe einige Wettbewerbe\n"
	.string "mitgemacht, weil ich wissen wollte, wie\l"
	.string "das so läuft.\p"
	.string "Wenn du an einem Coolness-Wettbewerb\n"
	.string "teilnimmst, zählen Coole Attacken.\p"
	.string "Anmutige oder kluge Attacken sind\n"
	.string "dagegen nicht so angesagt.$"
#else
	.string "I've entered a bunch of CONTESTS,\n"
	.string "so I'm seeing how things work.\p"
	.string "If you're in a COOLNESS CONTEST,\n"
	.string "cool moves go over as appeals.\p"
	.string "But smart moves and cute moves\n"
	.string "don't go over well, for instance.$"
#endif

LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks_hns:
#if GERMAN
	.string "Der junge Mann, der vor kurzem hier\n"
	.string "gewonnen hat, hatte viele verschiedene\l"
	.string "{POKEBLOCK} bei sich.\p"
	.string "Ob man gewinnt, wenn man genug dieser\n"
	.string "Items dabei hat?$"
#else
	.string "That young man who won earlier had\n"
	.string "a whole bunch of different {POKEBLOCK}S.\p"
	.string "Can you win if you had that many\n"
	.string "of those things?$"
#endif

LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous_hns:
#if GERMAN
	.string "Wow, dieser Ort ist einfach riesig!\p"
	.string "Diese Spannung in der Luft… Das ist\n"
	.string "kein Vergleich zu einer Wettbewerbs-\l"
	.string "halle in der tiefsten Provinz.$"
#else
	.string "Whoa, isn't this place humongous!\p"
	.string "The tension in the air… It's not\n"
	.string "like a CONTEST hall in the sticks.$"
#endif

LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal_hns:
#if GERMAN
	.string "MC: Okay, Kluge Pokémon und Trainer.\n"
	.string "Seid ihr bereit?!?\p"
	.string "Gebt euer Bestes!\n"
	.string "Es geht um den Ausdruck!$"
#else
	.string "MC: Okay, SMART POKéMON and their\n"
	.string "TRAINERS, are you ready?!\p"
	.string "Give it your best showing!\n"
	.string "Let's appeal!$"
#endif

LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest_hns:
#if GERMAN
	.string "Juror: Gefällt euch dieser Wettbewerb?\p"
	.string "Komm mit drei Freunden wieder her, dann\n"
	.string "könnt ihr alle gemeinsam am Wettbewerb\l"
	.string "teilnehmen.$"
#else
	.string "JUDGE: Are you enjoying this CONTEST?\p"
	.string "Come back with three friends, and\n"
	.string "all of you may enter a CONTEST!$"
#endif

LilycoveCity_ContestHall_Text_EnteredWrongContest_hns:
#if GERMAN
	.string "Eieieiei…\n"
	.string "Ich habe am falschen Wettbewerb\l"
	.string "teilgenommen. Hach…\p"
	.string "Ich habe dieses starke Pokémon in\n"
	.string "einen Klugheits-Wettbewerb geschickt.\p"
	.string "Los, beeindrucke mit einem klugen\n"
	.string "Zertrümmerer.$"
#else
	.string "Ayayayay…\n"
	.string "I entered the wrong CONTEST.\p"
	.string "I entered this tough POKéMON in\n"
	.string "the SMARTNESS CONTEST…\p"
	.string "Come on, wow them with a smart-looking\n"
	.string "ROCK SMASH.$"
#endif

LilycoveCity_ContestHall_Text_RaisedMonToBeSmart_hns:
#if GERMAN
	.string "Ich habe viele Jahre und all meine\n"
	.string "Weisheit gebraucht, um dieses Pokémon\l"
	.string "Klug zu machen.\p"
	.string "Damit mache ich es den jungen Spunden\n"
	.string "nicht leicht, mein Pokémon zu\l"
	.string "übertrumpfen.\p"
	.string "Mein holdes Weib, siehst du das?$"
#else
	.string "I've spent many a year, and all my\n"
	.string "wisdom besides, raising this POKéMON\l"
	.string "to be smart.\p"
	.string "It won't be easily bested by some\n"
	.string "young pup's POKéMON.\p"
	.string "My dear wife, are you seeing this?$"
#endif

LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext_hns:
#if GERMAN
	.string "Das ist es!\p"
	.string "Wenn mein Pokémon eine kluge Attacke\n"
	.string "vorführt, wird das Publikum ausflippen\l"
	.string "vor Begeisterung!$"
#else
	.string "There it is!\p"
	.string "If my POKéMON pulls a smart move next,\n"
	.string "the audience's excitement will peak!$"
#endif

LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife_hns:
#if GERMAN
	.string "Oh, du liebe Güte, nein!\p"
	.string "Der Blutsauger meines Zubat ist\n"
	.string "wirklich anmutig, daher setze ich ihn\l"
	.string "immer wieder ein!\p"
	.string "Aber diese gemeinen Leute wissen das\n"
	.string "überhaupt nicht zu schätzen!$"
#else
	.string "Oh, dear, no!\p"
	.string "My darling ZUBAT's LEECH LIFE is so\n"
	.string "cute I kept using it over and over!\p"
	.string "But these mean people don't appreciate\n"
	.string "it at all!$"
#endif

LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa_hns:
#if GERMAN
	.string "Kiaaayh! Du bist wunderbar, Opa!$"
#else
	.string "Kiyaaah! You're beautiful, Grandpa!$"
#endif

LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves_hns:
#if GERMAN
	.string "Selbst wenn die Trainer die gleichen\n"
	.string "Pokémon einsetzen, so führen sie doch\l"
	.string "unterschiedliche Attacken vor.\p"
	.string "Das ist so wie bei den Kämpfen: Jeder\n"
	.string "hat seinen eigenen Stil.$"
#else
	.string "Even when TRAINERS enter the same\n"
	.string "kind of POKéMON, they all seem to use\l"
	.string "different moves for appeals.\p"
	.string "It's just like the way people have\n"
	.string "different styles for battling.$"
#endif

LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers_hns:
#if GERMAN
	.string "Ich denke, die Pokémon machen einen\n"
	.string "klügeren Eindruck als ihre Trainer.$"
#else
	.string "I think the POKéMON look smarter\n"
	.string "than their TRAINERS. By a lot.$"
#endif

LilycoveCity_ContestHall_Text_StillLoveSmartnessContests_hns:
#if GERMAN
	.string "Jetzt, wo alles vorbei ist, liebe ich\n"
	.string "Klugheits-Wettbewerbe noch immer.\p"
	.string "Diese intellektuelle, grüne Farbe…\n"
	.string "Das ist so… so… so cooool!$"
#else
	.string "When all's said and done, I still love\n"
	.string "SMARTNESS CONTESTS.\p"
	.string "That intellectual green color…\n"
	.string "It's so… So… Cool.$"
#endif

LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest_hns:
#if GERMAN
	.string "MC: Nimmst du auch am Schönheits-\n"
	.string "wettbewerb teil? Viel Glück!$"
#else
	.string "MC: Are you entering the BEAUTY\n"
	.string "CONTEST, too? Good luck!$"
#endif

LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty_hns:
#if GERMAN
	.string "Juror: Ah, jedes Pokémon ist ein\n"
	.string "Beispiel makelloser Schönheit!\p"
	.string "Huch, fast hätte ich vergessen, sie zu\n"
	.string "bewerten…$"
#else
	.string "JUDGE: Ah, every POKéMON here is\n"
	.string "a model of pristine beauty!\p"
	.string "Why, I almost forgot to score them!$"
#endif

LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty_hns:
#if GERMAN
	.string "Ein Pokémon von dieser Schönheit…\n"
	.string "Es gibt keines wie dieses.\p"
	.string "Jedem werden die Augen übergehen, wenn\n"
	.string "er diese Schönheit betrachtet.$"
#else
	.string "A POKéMON this beautiful…\n"
	.string "There isn't another one like it.\p"
	.string "Everyone's eyes will be glued to\n"
	.string "my beauty.$"
#endif

LilycoveCity_ContestHall_Text_OverdidGrooming_hns:
#if GERMAN
	.string "Aaaaargh!\p"
	.string "Ich habe mein Pokémon für diesen\n"
	.string "Wettbewerb sorgfältig gebürstet und\l"
	.string "gestriegelt.\p"
	.string "Dabei habe ich wohl übertrieben…\n"
	.string "Das Fell meines Pokémon ist nun ganz\l"
	.string "voller Fusseln…\p"
	.string "Was soll ich jetzt nur tun?$"
#else
	.string "Waaaah!\p"
	.string "I brushed and groomed my POKéMON\n"
	.string "carefully for this CONTEST…\p"
	.string "But I overdid it…\n"
	.string "My POKéMON's coat turned all scraggly…\p"
	.string "What should I do?$"
#endif

LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam_hns:
#if GERMAN
	.string "Der Aurorastrahl ist eine so blendende\n"
	.string "Erscheinung, dass der Juror sie nicht\l"
	.string "sehen wird.\p"
	.string "Äh, einen Moment mal…\n"
	.string "Dann ist sie ja völlig sinnlos…$"
#else
	.string "This AURORA BEAM is so dazzling,\n"
	.string "the JUDGE won't be able to see it.\p"
	.string "Uh, wait a second…\n"
	.string "That'll be meaningless, then!$"
#endif

LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe_hns:
#if GERMAN
	.string "Dieses hübsche Pokémon sieht genauso\n"
	.string "aus wie ich, als ich jünger war.\p"
	.string "Als ich das zu meinem Mann sagte, hat er\n"
	.string "den Kaffee, den er trank, ausgespuckt.\p"
	.string "\p"
	.string "Was ist daran so lustig?$"
#else
	.string "This pretty POKéMON looks just like\n"
	.string "me when I was younger.\p"
	.string "Right when I said that, my husband\n"
	.string "spewed the coffee he was drinking.\p"
	.string "Did I say something funny?$"
#endif

LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy_hns:
#if GERMAN
	.string "Natürlich, als Frau wäre ich\n"
	.string "überglücklich, wenn ich den\l"
	.string "Schönheitswettbewerb gewinnen würde.$"
#else
	.string "You know, if I win at a BEAUTY\n"
	.string "CONTEST, sure it makes me\l"
	.string "happy. More than usual, anyway.$"
#endif

LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon_hns:
#if GERMAN
	.string "Ahahahahaha!\p"
	.string "Wirf mal einen Blick auf all diese\n"
	.string "schönen Pokémon!\l"
	.string "Ich liebe diesen Liebreiz!$"
#else
	.string "Wahahahah!\p"
	.string "Will you take a gander at all those\n"
	.string "pretty POKéMON!\l"
	.string "I just love this sort of glitz!$"
#endif

LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone_hns:
#if GERMAN
	.string "Du kannst nicht immer nur aufgrund von\n"
	.string "Schönheit gewinnen.\p"
	.string "Du musst dein Pokémon striegeln, damit\n"
	.string "es so schön und glänzend ist wie meines.$"
#else
	.string "You can't always win on just beauty\n"
	.string "alone.\p"
	.string "You have to groom your POKéMON so\n"
	.string "it's nice and glossy like mine.$"
#endif

LilycoveCity_ContestHall_Text_InTheMiddleOfContest_hns:
#if GERMAN
	.string "MC: Oh oh! Hallo!\n"
	.string "Wir sind mitten in einem Wettbewerb!\p"
	.string "Lass dich bitte zuerst am Schalter\n"
	.string "registrieren und komm dann wieder, ja?$"
#else
	.string "MC: Uh-oh! Hello!\n"
	.string "We're in the middle of a CONTEST!\p"
	.string "Please enter at our registration\n"
	.string "counter and come out, okay?$"
#endif

LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals_hns:
#if GERMAN
	.string "Juror: Oh, was für reizende und\n"
	.string "anmutige Ausdrücke!\p"
	.string "Oh, meine Güte! Was für ein perfekter\n"
	.string "Nassmacher-Ausdruck!$"
#else
	.string "JUDGE: Oh, such charming and cute\n"
	.string "appeals!\p"
	.string "Oh, my goodness! What a perfectly\n"
	.string "adorable WATER SPORT appeal!$"
#endif

LilycoveCity_ContestHall_Text_MyAzurillWasDistracted_hns:
#if GERMAN
	.string "Oh, nein… Mein Azurill wurde von\n"
	.string "einem anderen Pokémon abgelenkt.$"
#else
	.string "Oh, no… My sweet AZURILL was\n"
	.string "distracted by another POKéMON.$"
#endif

LilycoveCity_ContestHall_Text_NeverWonBattleButContest_hns:
#if GERMAN
	.string "Mein Pokémon hat noch nie einen Kampf\n"
	.string "gewonnen. Aber geh mit ihm in einen\l"
	.string "Wettbewerb und pass auf, was passiert.$"
#else
	.string "My POKéMON has never won in a battle,\n"
	.string "but put it in a CONTEST and look out!$"
#endif

LilycoveCity_ContestHall_Text_PetalDanceIsMarvel_hns:
#if GERMAN
	.string "Der Blättertanz meines Pokémon ist der\n"
	.string "Inbegriff von Eleganz.\p"
	.string "Ich lasse es nicht zu, dass irgend-\n"
	.string "jemand es dabei stört.$"
#else
	.string "My POKéMON's PETAL DANCE is a marvel\n"
	.string "of elegance.\p"
	.string "I won't let anyone disturb its\n"
	.string "performance.$"
#endif

LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter_hns:
#if GERMAN
	.string "All diese Pokémon sind anmutig.\p"
	.string "Aber, wenn mein Pokémon einen\n"
	.string "anmutigen Ausdruck vorführt…\p"
	.string "Ich bin sicher, dass es dann anmutiger\n"
	.string "als all die anderen Pokémon sein wird.$"
#else
	.string "Everyone's POKéMON are very cute.\p"
	.string "However, if my POKéMON were to make\n"
	.string "a cute appeal…\p"
	.string "I'm sure that it would be so much \n"
	.string "cuter than the others.$"
#endif

LilycoveCity_ContestHall_Text_MyChildIsInContest_hns:
#if GERMAN
	.string "Mein Kind nimmt an diesem Wettbewerb\n"
	.string "teil.$"
#else
	.string "My child is in this CONTEST.$"
#endif

LilycoveCity_ContestHall_Text_ComeOnDear_hns:
#if GERMAN
	.string "Los, mein Schatz! Zeig es ihnen!\n"
	.string "Dein Pokémon ist das Beste!$"
#else
	.string "Come on, dear. Go for it!\n"
	.string "Your POKéMON is the best!$"
#endif

LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest_hns:
#if GERMAN
	.string "Ich finde, das Mädchen dort drüben ist\n"
	.string "das anmutigste Geschöpf von allen.\p"
	.string "Wie bitte? Sie bewerten die Pokémon\n"
	.string "nach ihrer Anmut?!?$"
#else
	.string "I think that girl over there is\n"
	.string "the cutest of the lot.\p"
	.string "What's that? They're judging\n"
	.string "POKéMON by their looks?$"
#endif

LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn_hns:
#if GERMAN
	.string "Oooh, all diese anmutigen Pokémon!\n"
	.string "Ich möchte auch gerne eines haben!\p"
	.string "Ich werde mir jetzt eines fangen.$"
#else
	.string "Ohh, seeing all these cute POKéMON,\n"
	.string "they make we want to get my own!\p"
	.string "I'm going to go catch some!$"
#endif

LilycoveCity_ContestHall_Text_BeautyContestStage_hns:
#if GERMAN
	.string "Bühne des Schönheitswettbewerbs\n"
	.string "Sei Geblendet von Schönen Pokémon!$"
#else
	.string "BEAUTY CONTEST STAGE\n"
	.string "BE ALLURED BY BEAUTIFUL POKéMON!$"
#endif

LilycoveCity_ContestHall_Text_CuteContestStage_hns:
#if GERMAN
	.string "Bühne des Anmutwettbewerbs\n"
	.string "Sei Gefesselt von Anmutigen Pokémon!$"
#else
	.string "CUTENESS CONTEST STAGE\n"
	.string "BE CHARMED BY CUTE POKéMON!$"
#endif

LilycoveCity_ContestHall_Text_SmartContestStage_hns:
#if GERMAN
	.string "Bühne des Klugheits-Wettbewerbs\n"
	.string "Sei Beeindruckt von Klugen Pokémon!$"
#else
	.string "SMARTNESS CONTEST STAGE\n"
	.string "BE IMPRESSED BY SMART POKéMON!$"
#endif

