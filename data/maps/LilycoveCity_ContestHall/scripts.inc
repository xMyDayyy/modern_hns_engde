@ All the LOCALID constants used in this file are essentially redundant.
@ They're all used to have the NPC the player talked to turn back so they're facing
@ their original direction (because they're watching/participating in the contests).
@ They could all be substituted for VAR_LAST_TALKED.
LilycoveCity_ContestHall_MapScripts::
	.byte 0

LilycoveCity_ContestHall_EventScript_Boy1::
	msgbox LilycoveCity_ContestHall_Text_TodayWonSmartnessContest, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Boy2::
	msgbox LilycoveCity_ContestHall_Text_EnteredBunchOfContests, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Girl::
	msgbox LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_Sailor::
	msgbox LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous, MSGBOX_NPC
	end

LilycoveCity_ContestHall_EventScript_SmartContestMC::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestJudge::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EnteredWrongContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_RaisedMonToBeSmart, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestant4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience1::
	msgbox LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_SmartContestAudience4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_StillLoveSmartnessContests, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SMART_AUDIENCE_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestMC::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestJudge::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_OverdidGrooming, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestant4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyContestAudience3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BEAUTY_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestMC::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_InTheMiddleOfContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_MC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestJudge::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_JUDGE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant1::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_MyAzurillWasDistracted, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_NeverWonBattleButContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_PetalDanceIsMarvel, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestant4::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_CONTESTANT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience1::
	lockall
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_ContestHall_Text_MyChildIsInContest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	delay 25
	msgbox LilycoveCity_ContestHall_Text_ComeOnDear, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience2::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_CuteContestAudience3::
	lock
	faceplayer
	msgbox LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CUTE_AUDIENCE_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_ContestHall_EventScript_BeautyStageSign::
	msgbox LilycoveCity_ContestHall_Text_BeautyContestStage, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_CuteStageSign::
	msgbox LilycoveCity_ContestHall_Text_CuteContestStage, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_EventScript_SmartStageSign::
	msgbox LilycoveCity_ContestHall_Text_SmartContestStage, MSGBOX_SIGN
	end

LilycoveCity_ContestHall_Text_TodayWonSmartnessContest:
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

LilycoveCity_ContestHall_Text_EnteredBunchOfContests:
#if GERMAN
	.string "Ich habe einige Wettbewerbe mitge-\n"
	.string "macht, weil ich wissen wollte, wie\l"
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

LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks:
#if GERMAN
	.string "Der junge Mann, der vor kurzem hier\n"
	.string "ge-\l"
	.string "wonnen hat, hatte viele verschiedene\l"
	.string "{POKEBLOCK} bei sich.\p"
	.string "Ob man gewinnt, wenn man genug dieser\n"
	.string "Items dabei hat?$"
#else
	.string "That young man who won earlier had\n"
	.string "a whole bunch of different {POKEBLOCK}S.\p"
	.string "Can you win if you had that many\n"
	.string "of those things?$"
#endif

LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous:
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

LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal:
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

LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest:
#if GERMAN
	.string "Juror: Gefällt euch dieser\n"
	.string "Wettbewerb?\p"
	.string "Komm mit drei Freunden wieder her,\n"
	.string "dann könnt ihr alle gemeinsam am\l"
	.string "Wettbewerb teilnehmen.$"
#else
	.string "JUDGE: Are you enjoying this CONTEST?\p"
	.string "Come back with three friends, and\n"
	.string "all of you may enter a CONTEST!$"
#endif

LilycoveCity_ContestHall_Text_EnteredWrongContest:
#if GERMAN
	.string "Eieieiei…\n"
	.string "Ich habe am falschen Wettbewerb teil-\l"
	.string "genommen. Hach…\p"
	.string "Ich habe dieses starke Pokémon in\n"
	.string "einen Klugheits-Wettbewerb\l"
	.string "geschickt.\p"
	.string "Los, beeindrucke mit einem\n"
	.string "klugen Zertrümmerer.$"
#else
	.string "Ayayayay…\n"
	.string "I entered the wrong CONTEST.\p"
	.string "I entered this tough POKéMON in\n"
	.string "the SMARTNESS CONTEST…\p"
	.string "Come on, wow them with a smart-looking\n"
	.string "ROCK SMASH.$"
#endif

LilycoveCity_ContestHall_Text_RaisedMonToBeSmart:
#if GERMAN
	.string "Ich habe viele Jahre und all meine\n"
	.string "Weisheit gebraucht, um dieses Pokémon\l"
	.string "Klug zu machen.\p"
	.string "Damit mache ich es den jungen Spunden\n"
	.string "nicht leicht, mein Pokémon zu über-\l"
	.string "trumpfen.\p"
	.string "Mein holdes Weib, siehst du das?$"
#else
	.string "I've spent many a year, and all my\n"
	.string "wisdom besides, raising this POKéMON\l"
	.string "to be smart.\p"
	.string "It won't be easily bested by some\n"
	.string "young pup's POKéMON.\p"
	.string "My dear wife, are you seeing this?$"
#endif

LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext:
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

LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife:
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

LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa:
#if GERMAN
	.string "Kiaaayh! Du bist wunderbar, Opa!$"
#else
	.string "Kiyaaah! You're beautiful, Grandpa!$"
#endif

LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves:
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

LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers:
#if GERMAN
	.string "Ich denke, die Pokémon machen einen\n"
	.string "klügeren Eindruck als ihre Trainer.$"
#else
	.string "I think the POKéMON look smarter\n"
	.string "than their TRAINERS. By a lot.$"
#endif

LilycoveCity_ContestHall_Text_StillLoveSmartnessContests:
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

LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest:
#if GERMAN
	.string "MC: Nimmst du auch am Schönheits-\n"
	.string "wettbewerb teil? Viel Glück!$"
#else
	.string "MC: Are you entering the BEAUTY\n"
	.string "CONTEST, too? Good luck!$"
#endif

LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty:
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

LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty:
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

LilycoveCity_ContestHall_Text_OverdidGrooming:
#if GERMAN
	.string "Aaaaargh!\p"
	.string "Ich habe mein Pokémon für diesen Wett-\n"
	.string "bewerb sorgfältig gebürstet und\l"
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

LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam:
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

LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe:
#if GERMAN
	.string "Dieses hübsche Pokémon sieht genauso\n"
	.string "aus wie ich, als ich jünger war.\p"
	.string "Als ich das zu meinem Mann sagte, hat\n"
	.string "er\l"
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

LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy:
#if GERMAN
	.string "Natürlich, als Frau wäre ich überglück-\n"
	.string "lich, wenn ich den Schönheits-\l"
	.string "wettbewerb gewinnen würde.$"
#else
	.string "You know, if I win at a BEAUTY\n"
	.string "CONTEST, sure it makes me\l"
	.string "happy. More than usual, anyway.$"
#endif

LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon:
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

LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone:
#if GERMAN
	.string "Du kannst nicht immer nur aufgrund von\n"
	.string "Schönheit gewinnen.\p"
	.string "Du musst dein Pokémon striegeln, damit\n"
	.string "es so schön und glänzend ist wie\l"
	.string "meines.$"
#else
	.string "You can't always win on just beauty\n"
	.string "alone.\p"
	.string "You have to groom your POKéMON so\n"
	.string "it's nice and glossy like mine.$"
#endif

LilycoveCity_ContestHall_Text_InTheMiddleOfContest:
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

LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals:
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

LilycoveCity_ContestHall_Text_MyAzurillWasDistracted:
#if GERMAN
	.string "Oh, nein… Mein Azurill wurde von\n"
	.string "einem anderen Pokémon abgelenkt.$"
#else
	.string "Oh, no… My sweet AZURILL was\n"
	.string "distracted by another POKéMON.$"
#endif

LilycoveCity_ContestHall_Text_NeverWonBattleButContest:
#if GERMAN
	.string "Mein Pokémon hat noch nie einen Kampf\n"
	.string "gewonnen. Aber geh mit ihm in einen\l"
	.string "Wettbewerb und pass auf, was passiert.$"
#else
	.string "My POKéMON has never won in a battle,\n"
	.string "but put it in a CONTEST and look out!$"
#endif

LilycoveCity_ContestHall_Text_PetalDanceIsMarvel:
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

LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter:
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

LilycoveCity_ContestHall_Text_MyChildIsInContest:
#if GERMAN
	.string "Mein Kind nimmt an diesem Wettbewerb\n"
	.string "teil.$"
#else
	.string "My child is in this CONTEST.$"
#endif

LilycoveCity_ContestHall_Text_ComeOnDear:
#if GERMAN
	.string "Los, mein Schatz! Zeig es ihnen!\n"
	.string "Dein Pokémon ist das Beste!$"
#else
	.string "Come on, dear. Go for it!\n"
	.string "Your POKéMON is the best!$"
#endif

LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest:
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

LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn:
#if GERMAN
	.string "Oooh, all diese anmutigen Pokémon!\n"
	.string "Ich möchte auch gerne eines haben!\p"
	.string "Ich werde mir jetzt eines fangen.$"
#else
	.string "Ohh, seeing all these cute POKéMON,\n"
	.string "they make we want to get my own!\p"
	.string "I'm going to go catch some!$"
#endif

LilycoveCity_ContestHall_Text_BeautyContestStage:
#if GERMAN
	.string "Bühne des Schönheitswettbewerbs\n"
	.string "Sei Geblendet von Schönen Pokémon!$"
#else
	.string "BEAUTY CONTEST STAGE\n"
	.string "BE ALLURED BY BEAUTIFUL POKéMON!$"
#endif

LilycoveCity_ContestHall_Text_CuteContestStage:
#if GERMAN
	.string "Bühne des Anmutwettbewerbs\n"
	.string "Sei Gefesselt von Anmutigen Pokémon!$"
#else
	.string "CUTENESS CONTEST STAGE\n"
	.string "BE CHARMED BY CUTE POKéMON!$"
#endif

LilycoveCity_ContestHall_Text_SmartContestStage:
#if GERMAN
	.string "Bühne des Klugheits-Wettbewerbs\n"
	.string "Sei Beeindruckt von Klugen Pokémon!$"
#else
	.string "SMARTNESS CONTEST STAGE\n"
	.string "BE IMPRESSED BY SMART POKéMON!$"
#endif

