MauvilleCity_PokemonCenter_1F_EventScript_MauvilleOldMan::
	special Script_GetCurrentMauvilleMan
	switch VAR_RESULT
	case MAUVILLE_MAN_BARD, MauvilleCity_PokemonCenter_1F_EventScript_Bard
	case MAUVILLE_MAN_HIPSTER, MauvilleCity_PokemonCenter_1F_EventScript_Hipster
	case MAUVILLE_MAN_TRADER, MauvilleCity_PokemonCenter_1F_EventScript_Trader
	case MAUVILLE_MAN_STORYTELLER, MauvilleCity_PokemonCenter_1F_EventScript_Storyteller
	case MAUVILLE_MAN_GIDDY, MauvilleCity_PokemonCenter_1F_EventScript_Giddy
	end

@ Bard
MauvilleCity_PokemonCenter_1F_EventScript_Bard::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToHearMySong, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_PlaySong
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineSong
	end

MauvilleCity_PokemonCenter_1F_EventScript_PlaySong::
	setvar VAR_0x8004, FALSE  @ Play his current song
	special PlayBardSong
	delay 60
	special HasBardSongBeenChanged
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_AskToWriteLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_WishICouldPlaySongForOthers, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineSong::
	msgbox MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues1, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_AskToWriteLyrics::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToWriteSomeLyrics, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics
	end

MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics::
	setvar VAR_0x8004, EASY_CHAT_TYPE_BARD_SONG
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_LetMeSingItForYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, TRUE  @ Play the new song
	special PlayBardSong
	delay 60
	msgbox MauvilleCity_PokemonCenter_1F_Text_ThatHowYouWantedSongToGo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics
	special SaveBardSongLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_IllSingThisSongForAWhile, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics::
	msgbox MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues2, MSGBOX_DEFAULT
	release
	end

@ Hipster
MauvilleCity_PokemonCenter_1F_EventScript_Hipster::
	lock
	faceplayer
	setflag FLAG_UNLOCKED_TRENDY_SAYINGS
	msgbox MauvilleCity_PokemonCenter_1F_Text_TeachWhatsHipAndHappening, MSGBOX_DEFAULT
	special HasHipsterTaughtWord
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_TryTeachWord
	msgbox MauvilleCity_PokemonCenter_1F_Text_IAlreadyTaughtYou, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTeachWord::
	special HipsterTryTeachWord
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_TeachWord
	msgbox MauvilleCity_PokemonCenter_1F_Text_IveGotNothingNewToTeach, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TeachWord::
	msgbox MauvilleCity_PokemonCenter_1F_Text_HaveYouHeardOfWord, MSGBOX_DEFAULT
	special SetHipsterTaughtWord
	release
	end

@ Trader
MauvilleCity_PokemonCenter_1F_Text_WantToTradeDecor:
#if GERMAN
	.string "Hallo! Ich bin der Händler. Möchtest\n"
	.string "du Dekorationen mit mir tauschen?$"
#else
	.string "Hi, I'm the TRADER.\n"
	.string "Want to trade decorations with me?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TraderFeelingTheBlues:
#if GERMAN
	.string "Oh…\n"
	.string "Du überlässt mich meinem Blues?$"
#else
	.string "Oh…\n"
	.string "You've left me feeling the blues…$"
#endif

MauvilleCity_PokemonCenter_1F_Text_WeveAlreadyTraded:
#if GERMAN
	.string "Aber wir beide haben doch bereits\n"
	.string "Dekorationen ausgetauscht.$"
#else
	.string "But we've traded decorations already,\n"
	.string "you and I.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_PickADecorItem:
#if GERMAN
	.string "Wenn du etwas Dekoratives siehst, das\n"
	.string "du haben möchtest, lass es mich wissen.$"
#else
	.string "If you see any decorative item that\n"
	.string "you want of mine, speak up.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_YouDontWantAnything:
#if GERMAN
	.string "Du möchtest nichts haben?\n"
	.string "Ich fühle mich so überflüssig…$"
#else
	.string "You don't want anything?\n"
	.string "I feel unwanted…$"
#endif

MauvilleCity_PokemonCenter_1F_Text_OnceBelongedToPlayerDoYouWantIt:
#if GERMAN
	.string "Das dekorative Item gehörte einst\n"
	.string "{STR_VAR_1}.\p"
	.string "Möchtest du es haben?$"
#else
	.string "That decorative item once belonged\n"
	.string "to {STR_VAR_1}.\p"
	.string "Do you want it?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_YouDontHaveAnyDecor:
#if GERMAN
	.string "Äh… Warte eine Sekunde. Du hast über-\n"
	.string "haupt kein dekoratives Item!$"
#else
	.string "Uh… Wait a second. You don't have a\n"
	.string "single piece of decoration!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_PickTheDecorToTrade:
#if GERMAN
	.string "Okay, wähle die Dekoration aus, die du\n"
	.string "mit mir tauschen willst.$"
#else
	.string "Okay, pick the decoration that you'll\n"
	.string "trade to me.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_YouDontWantToTrade:
#if GERMAN
	.string "Du willst nicht mit mir tauschen?\n"
	.string "Ich fühle mich überflüssig…$"
#else
	.string "You won't trade with me?\n"
	.string "I feel unwanted…$"
#endif

MauvilleCity_PokemonCenter_1F_Text_YouveNoRoomForThis:
#if GERMAN
	.string "Du hast keinen Platz mehr für {STR_VAR_2}.$"
#else
	.string "You've got all the {STR_VAR_2}S that can\n"
	.string "be stored. You've no room for this.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_SoWellTradeTheseDecor:
#if GERMAN
	.string "Okay, dann lass uns tauschen: {STR_VAR_3}\n"
	.string "gegen {STR_VAR_2}!$"
#else
	.string "Okay, so we'll trade my {STR_VAR_3}\n"
	.string "for your {STR_VAR_2}?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_ThatDecorIsInUse:
#if GERMAN
	.string "Dieses Dekorationsstück ist in Ge-\n"
	.string "brauch. Das kannst du nicht tauschen.$"
#else
	.string "That piece of decoration is in use.\n"
	.string "You can't trade it.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_SendDecorToYourPC:
#if GERMAN
	.string "Lass uns tauschen! Ich werde meine\n"
	.string "Dekorationen auf deinen PC senden.$"
#else
	.string "Then we'll trade!\n"
	.string "I'll send my decoration to your PC.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_CantTradeThatOne:
#if GERMAN
	.string "Huups! Tut mir Leid!\n"
	.string "Das ist ein ganz seltenes Stück!\l"
	.string "Das kann ich nicht tauschen!\p"
	.string "Kann ich dich für etwas anderes\n"
	.string "begeistern?$"
#else
	.string "Oops! Sorry! That's a really rare\n"
	.string "piece of decoration.\l"
	.string "I can't trade that one away!\p"
	.string "Can I interest you in something else?$"
#endif

MauvilleCity_PokemonCenter_1F_EventScript_Trader::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_WantToTradeDecor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineTrade
	special GetTraderTradedFlag
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_AlreadyTraded
	message MauvilleCity_PokemonCenter_1F_Text_PickADecorItem
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineTrade::
	msgbox MauvilleCity_PokemonCenter_1F_Text_TraderFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_AlreadyTraded::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WeveAlreadyTraded, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive::
	special TraderMenuGetDecoration
	waitstate
	goto_if_eq VAR_0x8004, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelPickDecor
	goto_if_eq VAR_0x8004, 0xFFFF, MauvilleCity_PokemonCenter_1F_EventScript_InvalidDecor
	msgbox MauvilleCity_PokemonCenter_1F_Text_OnceBelongedToPlayerDoYouWantIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_PickDifferentDecor
	special DoesPlayerHaveNoDecorations
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_DontHaveAnyDecor
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	end

MauvilleCity_PokemonCenter_1F_EventScript_CancelPickDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontWantAnything, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_InvalidDecor::
	message MauvilleCity_PokemonCenter_1F_Text_CantTradeThatOne
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDifferentDecor::
	message MauvilleCity_PokemonCenter_1F_Text_PickADecorItem
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_DontHaveAnyDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontHaveAnyDecor, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive::
	msgbox MauvilleCity_PokemonCenter_1F_Text_PickTheDecorToTrade, MSGBOX_DEFAULT
	special TraderShowDecorationMenu
	waitstate
	goto_if_eq VAR_0x8006, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelGiveDecor
	goto_if_eq VAR_0x8006, 0xFFFF, MauvilleCity_PokemonCenter_1F_EventScript_DecorInUse
	special IsDecorationCategoryFull
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForDecor
	msgbox MauvilleCity_PokemonCenter_1F_Text_SoWellTradeTheseDecor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	special TraderDoDecorationTrade
	msgbox MauvilleCity_PokemonCenter_1F_Text_SendDecorToYourPC, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_CancelGiveDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontWantToTrade, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DecorInUse::
	msgbox MauvilleCity_PokemonCenter_1F_Text_ThatDecorIsInUse, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	end

MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouveNoRoomForThis, MSGBOX_DEFAULT
	release
	end

@ Storyteller
MauvilleCity_PokemonCenter_1F_Text_WillYouHearMyTale:
#if GERMAN
	.string "Ich bin der Geschichtenerzähler.\n"
	.string "Ich erzähle dir die Geschichten von\l"
	.string "legendären Trainern.\p"
	.string "Soll ich dir etwas erzählen?$"
#else
	.string "I'm the STORYTELLER.\n"
	.string "I'll tell you tales of legendary\l"
	.string "TRAINERS.\p"
	.string "Will you hear my tale?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_StorytellerFeelingTheBlues:
#if GERMAN
	.string "Oh…\n"
	.string "Du überlässt mich meinem Blues?$"
#else
	.string "Oh…\n"
	.string "You've left me feeling the blues…$"
#endif

MauvilleCity_PokemonCenter_1F_Text_WhichTaleToTell:
#if GERMAN
	.string "Ich kenne so manche Legende.\n"
	.string "Welche möchtest du hören?$"
#else
	.string "I know of these legends.\n"
	.string "Which tale will you have me tell?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_IKnowNoTales:
#if GERMAN
	.string "Aber ich weiß nichts über legendäre\n"
	.string "Trainer. Also habe ich keine\l"
	.string "Geschichten darüber auf Lager.\p"
	.string "Wo findet man wohl einen Trainer, der\n"
	.string "einer Legende würdig ist?$"
#else
	.string "But, I know of no legendary TRAINERS.\n"
	.string "Hence, I know no tales.\p"
	.string "Where does one find a TRAINER worthy\n"
	.string "of a legendary tale?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_YouDidStatXTimes:
#if GERMAN
	.string "Was ist?\n"
	.string "Du… Du…\p"
	.string "{STR_VAR_2}\n"
	.string "{STR_VAR_1}-mal?\p"
	.string "Das ist einfach großartig!\n"
	.string "Die Geburt einer neuen Legende!$"
#else
	.string "What's that?!\n"
	.string "You… You…\p"
	.string "{STR_VAR_2}\n"
	.string "{STR_VAR_1} time(s)?!\p"
	.string "That is indeed magnificent!\n"
	.string "It's the birth of a new legend!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_CouldThereBeOtherLegends:
#if GERMAN
	.string "Ich überlege, ob es nicht noch andere\n"
	.string "Trainer gibt, die mir beeindruckende\l"
	.string "Geschichten erzählen können.$"
#else
	.string "It gets me thinking, could there be\n"
	.string "other TRAINERS with more impressive\l"
	.string "legends awaiting discovery?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_HaveYouAnyLegendaryTales:
#if GERMAN
	.string "Bist du ein Trainer?\p"
	.string "Dann sag mir, ob du Geschichten\n"
	.string "für mich hast, die legendär sind?$"
#else
	.string "Are you a TRAINER?\p"
	.string "Then tell me, have you any tales that\n"
	.string "are even remotely legendary?$"
#endif

@ Unused
MauvilleCity_PokemonCenter_1F_Text_HearAnotherLegendaryTale:
#if GERMAN
	.string "Übrigens… Möchtest du noch eine\n"
	.string "sagenhafte Geschichte hören?$"
#else
	.string "Incidentally… Would you care to hear\n"
	.string "another legendary tale?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_NotWorthyOfLegend:
#if GERMAN
	.string "Hmm…\n"
	.string "Ich bin nicht zufrieden…\p"
	.string "Ich wünschte, du würdest mir\n"
	.string "Neuigkeiten erzählen, die den Titel\l"
	.string "Legende verdienen.$"
#else
	.string "Hmm…\n"
	.string "I'm not satisfied…\p"
	.string "I wish you would bring me news worthy\n"
	.string "of being called a legend.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_IWishMorePeopleWereInterested:
#if GERMAN
	.string "Ich wollte, mehr Leute würden sich für\n"
	.string "meine epischen Geschichten über\l"
	.string "legendäre Trainer interessieren.$"
#else
	.string "I wish more people would be interested\n"
	.string "in hearing my epic tales of legendary\l"
	.string "TRAINERS.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_SavedGameTitle::
#if GERMAN
	.string "Der speicherfreudige Trainer$"
#else
	.string "The Save-Happy TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_SavedGameAction::
#if GERMAN
	.string "Hast das Spiel gespeichert?$"
#else
	.string "Saved the game$"
#endif

MauvilleCity_PokemonCenter_1F_Text_SavedGameStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat das Spiel\n"
	.string "{STR_VAR_1}-mal gespeichert!\p"
	.string "Einen vorsichtigeren Trainer als\n"
	.string "{STR_VAR_3} wird man nicht finden!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER saved the game\n"
	.string "{STR_VAR_1} times!\p"
	.string "A more cautious TRAINER than\n"
	.string "{STR_VAR_3} one will never find!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedTitle::
#if GERMAN
	.string "Der Trainer als Trendsetter$"
#else
	.string "The Trendsetter TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedAction::
#if GERMAN
	.string "Hast Trends gesetzt?$"
#else
	.string "Started trends$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "neue Trends gesetzt!\p"
	.string "{STR_VAR_3} setzt den Trend für alle - in\n"
	.string "der ganzen Hoenn-Region!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER started new trends\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is setting trends for all\n"
	.string "the HOENN region!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedTitle::
#if GERMAN
	.string "Der Beeren pflanzende Trainer$"
#else
	.string "The BERRY-Planting TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedAction::
#if GERMAN
	.string "Hast Beeren gepflanzt?$"
#else
	.string "Planted BERRIES$"
#endif

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "Beeren gepflanzt!\p"
	.string "{STR_VAR_3} ist ein legendärer Lieb-\n"
	.string "haber von Beeren!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER planted BERRIES\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a legendary lover of\n"
	.string "BERRIES!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_BikeTradesTitle::
#if GERMAN
	.string "Der Rad verrückte Trainer$"
#else
	.string "The BIKE-Loving TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_BikeTradesAction::
#if GERMAN
	.string "Hast Räder getauscht?$"
#else
	.string "Traded BIKES$"
#endif

MauvilleCity_PokemonCenter_1F_Text_BikeTradesStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "das Rad getauscht!\p"
	.string "{STR_VAR_3} ist ein Trainer, dessen\n"
	.string "Passion das Radfahren ist!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER swapped BIKES\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must love BIKES deeply\n"
	.string "and passionately!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_InterviewsTitle::
#if GERMAN
	.string "Der Interviews gebende Trainer$"
#else
	.string "The Interviewed TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_InterviewsAction::
#if GERMAN
	.string "Hast Interviews gegeben?$"
#else
	.string "Got interviewed$"
#endif

MauvilleCity_PokemonCenter_1F_Text_InterviewsStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer wurde {STR_VAR_1}-mal\n"
	.string "interviewt!\p"
	.string "{STR_VAR_3} ist ein Trainer, der überall\n"
	.string "Aufmerksamkeit erregt!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER got interviewed\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a TRAINER who's\n"
	.string "attracting much attention!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesTitle::
#if GERMAN
	.string "Der kampfliebende Trainer$"
#else
	.string "The Battle-Happy TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesAction::
#if GERMAN
	.string "Hast oft gekämpft?$"
#else
	.string "Battled$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "gekämpft!\p"
	.string "{STR_VAR_3} ist ein Trainer, der zu\n"
	.string "einem Kampf nicht nein sagt!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER battled {STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a TRAINER who can\n"
	.string "never refuse a chance to battle!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtTitle::
#if GERMAN
	.string "Der Pokémon fangende Trainer$"
#else
	.string "The POKéMON-Catching TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtAction::
#if GERMAN
	.string "Hast Pokémon gefangen?$"
#else
	.string "Caught POKéMON$"
#endif

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}\n"
	.string "Pokémon gefangen!\p"
	.string "{STR_VAR_3} ist ein legendärer Fänger\n"
	.string "von Pokémon!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER caught\n"
	.string "{STR_VAR_1} POKéMON!\p"
	.string "{STR_VAR_3} is a legendary catcher of\n"
	.string "wild POKéMON!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtTitle::
#if GERMAN
	.string "Der angelnde Trainer$"
#else
	.string "The Fishing TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtAction::
#if GERMAN
	.string "Hast Pokémon mit einer Angel gefangen?$"
#else
	.string "Caught POKéMON with a ROD$"
#endif

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}\n"
	.string "Pokémon beim Angeln gefangen!\p"
	.string "{STR_VAR_3} ist ein legendärer Angel-\n"
	.string "experte!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER caught\n"
	.string "{STR_VAR_1} POKéMON while fishing!\p"
	.string "{STR_VAR_3} is a legendary fishing\n"
	.string "expert!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedTitle::
#if GERMAN
	.string "Der Eier wärmende Trainer$"
#else
	.string "The EGG-Warming TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedAction::
#if GERMAN
	.string "Hast Eier ausgebrütet?$"
#else
	.string "Hatched EGGS$"
#endif

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Es passierte {STR_VAR_1}-mal, dass der\n"
	.string "Trainer ein Pokémon aus einem Ei\l"
	.string "schlüpfen ließ!\p"
	.string "{STR_VAR_3} ist ein legendärer Pfleger\n"
	.string "von Eiern!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER hatched {STR_VAR_1} POKéMON\n"
	.string "from EGGS!\p"
	.string "{STR_VAR_3} is a legendary warmer\n"
	.string "of EGGS!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedTitle::
#if GERMAN
	.string "Der Trainer der Entwicklungen$"
#else
	.string "The Evolver TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedAction::
#if GERMAN
	.string "Hast Pokémon sich entwickeln lassen?$"
#else
	.string "Evolved POKéMON$"
#endif

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}\n"
	.string "Pokémon zur Entwicklung gebracht!\p"
	.string "{STR_VAR_3} ist der ultimative Ent-\n"
	.string "wickler von Pokémon!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER made {STR_VAR_1} POKéMON\n"
	.string "evolve!\p"
	.string "{STR_VAR_3} is the ultimate evolver\n"
	.string "of POKéMON!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterTitle::
#if GERMAN
	.string "Der Pkmn-Center liebende Trainer$"
#else
	.string "The POKéMON CENTER-Loving TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterAction::
#if GERMAN
	.string "Gingst in ein Pokémon-Center?$"
#else
	.string "Used POKéMON CENTERS$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat Pokémon\n"
	.string "{STR_VAR_1}-mal in einem Pokémon-Center\l"
	.string "heilen lassen!\p"
	.string "Es gibt keinen größeren Fan der\n"
	.string "Pokémon-Center als {STR_VAR_3}!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER healed POKéMON\n"
	.string "{STR_VAR_1} times at POKéMON CENTERS!\p"
	.string "There could be no greater lover of\n"
	.string "POKéMON CENTERS than {STR_VAR_3}!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeTitle::
#if GERMAN
	.string "Der gastfreundliche Trainer$"
#else
	.string "The Homebody TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeAction::
#if GERMAN
	.string "Pokémon haben sich bei dir erholt?$"
#else
	.string "Rested POKéMON at home$"
#endif

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat Pokémon\n"
	.string "{STR_VAR_1}-mal bei sich zu Hause\l"
	.string "ausruhen und heilen lassen.\p"
	.string "Kein Trainer ist so gastfreundlich\n"
	.string "wie {STR_VAR_3}!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER healed POKéMON\n"
	.string "{STR_VAR_1} times at home!\p"
	.string "There could be no more of a homebody\n"
	.string "than {STR_VAR_3}!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_SafariGamesTitle::
#if GERMAN
	.string "Der Safari liebende Trainer$"
#else
	.string "The SAFARI-Loving TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_SafariGamesAction::
#if GERMAN
	.string "Bist in die Safari-Zone gegangen?$"
#else
	.string "Entered the SAFARI ZONE$"
#endif

MauvilleCity_PokemonCenter_1F_Text_SafariGamesStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer ist {STR_VAR_1}-mal in die\n"
	.string "Safari-Zone gegangen!\p"
	.string "{STR_VAR_3} ist ein Trainer, dessen wilde\n"
	.string "Seite in der Safari-Zone zum Vorschein\l"
	.string "kommt!$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER went into the SAFARI ZONE\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a TRAINER whose wild side\n"
	.string "must come out in the SAFARI ZONE!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedCutTitle::
#if GERMAN
	.string "Der Trainer als Zerschneider$"
#else
	.string "The CUT-Frenzy TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedCutAction::
#if GERMAN
	.string "Hast Zerschneider eingesetzt?$"
#else
	.string "Used CUT$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedCutStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "Zerschneider eingesetzt!\p"
	.string "{STR_VAR_3} ist ein Trainer, der es\n"
	.string "liebt, etwas zu Zerschneiden.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER used CUT\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a TRAINER who just must\n"
	.string "love to CUT!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashTitle::
#if GERMAN
	.string "Der Trainer als Zertrümmerer$"
#else
	.string "The ROCK-SMASHING TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashAction::
#if GERMAN
	.string "Hast Felsen Zertrümmert?$"
#else
	.string "Smashed rocks$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "Zertrümmerer eingesetzt!\p"
	.string "{STR_VAR_3} ist ein Trainer, der keinen\n"
	.string "Felsen unbeschädigt lassen kann.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER used ROCK SMASH\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a TRAINER who\n"
	.string "can't leave a stone unsmashed!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_MovedBasesTitle::
#if GERMAN
	.string "Der Umzüge liebende Trainer$"
#else
	.string "The Move-Loving TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_MovedBasesAction::
#if GERMAN
	.string "Bist du mit der Geheimbasis umgezogen?$"
#else
	.string "Moved the SECRET BASE$"
#endif

MauvilleCity_PokemonCenter_1F_Text_MovedBasesStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer ist {STR_VAR_1}-mal mit\n"
	.string "seiner Geheimbasis umgezogen!\p"
	.string "{STR_VAR_3} ist ein Trainer, der es\n"
	.string "liebt, sich ein neues Haus einzurichten.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER moved the SECRET BASE\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a TRAINER who loves\n"
	.string "to move houses often!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedSplashTitle::
#if GERMAN
	.string "Der Platscher des Trainers$"
#else
	.string "The SPLASH-Happy TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedSplashAction::
#if GERMAN
	.string "Hast Platscher eingesetzt?$"
#else
	.string "Used SPLASH$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedSplashStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "Platscher eingesetzt!\p"
	.string "{STR_VAR_3} ist ein Trainer, der es\n"
	.string "liebt, zu Platschen.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER used SPLASH\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a TRAINER who must love\n"
	.string "SPLASHING around!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleTitle::
#if GERMAN
	.string "Der verbissene Trainer$"
#else
	.string "The Tenacious TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleAction::
#if GERMAN
	.string "Hast Verzweifler angewendet?$"
#else
	.string "Resorted to using STRUGGLE$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat sich {STR_VAR_1}-mal\n"
	.string "auf Verzweifler verlassen!\p"
	.string "{STR_VAR_3}… Ein verbissener Trainer,\n"
	.string "der auch in der Not nicht aufgibt.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER had to rely on STRUGGLE\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a tenacious TRAINER\n"
	.string "who never gives in to adversity!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsTitle::
#if GERMAN
	.string "Der König der einarmigen Banditen$"
#else
	.string "The SLOT Champ$"
#endif

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsAction::
#if GERMAN
	.string "Hast den einarmigen Banditen besiegt?$"
#else
	.string "Won the jackpot on the SLOTS$"
#endif

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "am einarmigen Banditen gewonnen!\p"
	.string "{STR_VAR_3}… Ein Trainer, der am\n"
	.string "einarmigen Banditen Glück hat.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER won the jackpot on\n"
	.string "the SLOTS {STR_VAR_1} times.\p"
	.string "{STR_VAR_3} is a TRAINER who was lucky\n"
	.string "on the SLOTS!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsTitle::
#if GERMAN
	.string "Der König des Roulettes$"
#else
	.string "The ROULETTE Champ$"
#endif

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsAction::
#if GERMAN
	.string "Hast in Folge beim Roulette gewonnen?$"
#else
	.string "Had consecutive ROULETTE wins of$"
#endif

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal in\n"
	.string "Folge beim Roulette gewonnen!\p"
	.string "{STR_VAR_3}… Ein Trainer, dem die Kugel\n"
	.string "beim Roulette gehorcht.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER won in ROULETTE\n"
	.string "{STR_VAR_1} times in a row.\p"
	.string "{STR_VAR_3} was lucky when the ball\n"
	.string "bounced in ROULETTE!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesTitle::
#if GERMAN
	.string "Der Herausforderer im Duellturm$"
#else
	.string "The BATTLE TOWER Challenger$"
#endif

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesAction::
#if GERMAN
	.string "Hast Gegner im Duellturm gefordert?$"
#else
	.string "Took the BATTLE TOWER challenge$"
#endif

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "Gegner im Duellturm herausgefordert!\p"
	.string "{STR_VAR_3}… Ein Trainer, der im Duell-\n"
	.string "turm nach Perfektion strebt.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER took the BATTLE TOWER\n"
	.string "challenge {STR_VAR_1} times!\p"
	.string "{STR_VAR_3} is a TRAINER who aspires\n"
	.string "for excellence in the BATTLE TOWER!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksTitle::
#if GERMAN
	.string "Der mixende Trainer$"
#else
	.string "The Blend-Loving TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksAction::
#if GERMAN
	.string "Hast {POKEBLOCK} hergestellt?$"
#else
	.string "Made {POKEBLOCK}S$"
#endif

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "{POKEBLOCK} hergestellt!\p"
	.string "Niemand bedient den Beerenmixer\n"
	.string "besser als {STR_VAR_3}.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER made {POKEBLOCK}S\n"
	.string "{STR_VAR_1} times!\p"
	.string "There is none better at using a BERRY\n"
	.string "BLENDER than {STR_VAR_3}!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsTitle::
#if GERMAN
	.string "Der Fan der Wettbewerbe$"
#else
	.string "The CONTEST-Loving TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsAction::
#if GERMAN
	.string "Hast an Wettbewerben teilgenommen?$"
#else
	.string "Entered CONTESTS$"
#endif

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "an einem Wettbewerb teilgenommen!\p"
	.string "{STR_VAR_3} liebt es, anderen seine\n"
	.string "Pokémon zu zeigen.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER entered CONTESTS\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must love showing off\n"
	.string "POKéMON to others!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_WonContestsTitle::
#if GERMAN
	.string "Der Meister der Wettbewerbe$"
#else
	.string "The CONTEST Master$"
#endif

MauvilleCity_PokemonCenter_1F_Text_WonContestsAction::
#if GERMAN
	.string "Hast Wettbewerbe gewonnen?$"
#else
	.string "Won CONTESTS$"
#endif

MauvilleCity_PokemonCenter_1F_Text_WonContestsStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "einen Wettbewerb gewonnen!\p"
	.string "{STR_VAR_3} ist ein unvergleichlicher\n"
	.string "Meister der Wettbewerbe.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER won CONTESTS\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be an incredible\n"
	.string "CONTEST master!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedTitle::
#if GERMAN
	.string "Der glückliche Einkäufer$"
#else
	.string "The Happy Shopper$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedAction::
#if GERMAN
	.string "Bist einkaufen gegangen?$"
#else
	.string "Shopped$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "in einem Geschäft Items gekauft!\p"
	.string "{STR_VAR_3} - ein geborener Einkäufer.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER bought items in shops\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be one of those\n"
	.string "people who are born to shop.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderTitle::
#if GERMAN
	.string "Der Trainer, der Items findet$"
#else
	.string "The Item-Finding TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderAction::
#if GERMAN
	.string "Hast den Detektor eingesetzt?$"
#else
	.string "Used an ITEMFINDER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "den Detektor eingesetzt!\p"
	.string "{STR_VAR_3} liebt es, den Boden nach\n"
	.string "verborgenen Items abzusuchen.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER used an ITEMFINDER\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must enjoy scouring the\n"
	.string "ground for hidden items!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TimesRainedTitle::
#if GERMAN
	.string "Der regennasse Trainer$"
#else
	.string "The Rain-Soaked TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TimesRainedAction::
#if GERMAN
	.string "Wurdest nass geregnet?$"
#else
	.string "Got rained on$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TimesRainedStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer wurde {STR_VAR_1}-mal\n"
	.string "nass geregnet!\p"
	.string "Das Charisma von {STR_VAR_3} zieht\n"
	.string "sogar den Regen an.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER got soaked by rain\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3}'s charisma must even\n"
	.string "attract rain!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexTitle::
#if GERMAN
	.string "Der passionierte Pokédex-Leser$"
#else
	.string "The Avid POKéDEX Reader$"
#endif

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexAction::
#if GERMAN
	.string "Hast im Pokédex nachgeschlagen?$"
#else
	.string "Checked a POKéDEX$"
#endif

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "im Pokédex nachgeschlagen!\p"
	.string "{STR_VAR_3} liebt es, alles über\n"
	.string "Pokémon im Pokédex nachzulesen.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER checked a POKéDEX\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must love inspecting\n"
	.string "POKéMON in a POKéDEX!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsTitle::
#if GERMAN
	.string "Der Sammler der Bänder$"
#else
	.string "The RIBBON Collector$"
#endif

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsAction::
#if GERMAN
	.string "Hast Bänder erhalten?$"
#else
	.string "Received RIBBONS$"
#endif

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}\n"
	.string "Bänder erhalten!\p"
	.string "{STR_VAR_3} ist ein Trainer, der es\n"
	.string "liebt, Bänder zu sammeln.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER received RIBBONS\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a TRAINER who\n"
	.string "loves to collect RIBBONS!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedTitle::
#if GERMAN
	.string "Der springende Trainer$"
#else
	.string "The Ledge-Jumping TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedAction::
#if GERMAN
	.string "Bist Absätze heruntergesprungen?$"
#else
	.string "Jumped down ledges$"
#endif

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer ist {STR_VAR_1}-mal\n"
	.string "einen Absatz hinabgesprungen!\p"
	.string "Sobald er an einen Absatz kommt, muss\n"
	.string "Trainer {STR_VAR_3} einfach\l"
	.string "hinabspringen.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER jumped down ledges\n"
	.string "{STR_VAR_1} times!\p"
	.string "If there's a ledge to be jumped,\n"
	.string "{STR_VAR_3} can't ignore it!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TVWatchedTitle::
#if GERMAN
	.string "Der legendäre Fernsehzuschauer$"
#else
	.string "The Legendary TV Viewer$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TVWatchedAction::
#if GERMAN
	.string "Hast ferngesehen?$"
#else
	.string "Watched TV$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TVWatchedStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "Fernsehen geschaut!\p"
	.string "{STR_VAR_3} liebt es, fernzusehen.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER watched TV\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must love watching TV!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_CheckedClockTitle::
#if GERMAN
	.string "Der zeitbewusste Trainer$"
#else
	.string "The Time-Conscious TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_CheckedClockAction::
#if GERMAN
	.string "Hast nach der Uhrzeit gesehen?$"
#else
	.string "Checked the time$"
#endif

MauvilleCity_PokemonCenter_1F_Text_CheckedClockStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "nach der Uhrzeit geschaut!\p"
	.string "{STR_VAR_3} ist ein pünktlicher\n"
	.string "Trainer, der sich der Zeit bewusst ist.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER checked the time\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a punctual TRAINER\n"
	.string "who's conscious of the time.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_WonLotteryTitle::
#if GERMAN
	.string "Der Zauberer der Pokémon-Lotterie$"
#else
	.string "The POKéMON LOTTERY Wizard$"
#endif

MauvilleCity_PokemonCenter_1F_Text_WonLotteryAction::
#if GERMAN
	.string "Hast in der Lotterie gewonnen?$"
#else
	.string "Won POKéMON LOTTERIES$"
#endif

MauvilleCity_PokemonCenter_1F_Text_WonLotteryStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "in der Pokémon-Lotterie gewonnen!\p"
	.string "Trainer {STR_VAR_3} hat viele Freunde,\n"
	.string "die mit ihm Pokémon tauschen.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER won POKéMON LOTTERIES\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must have many friends\n"
	.string "to trade POKéMON with!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareTitle::
#if GERMAN
	.string "Der Trainer und die Pension$"
#else
	.string "The DAY CARE-Using Trainer$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareAction::
#if GERMAN
	.string "Hast Pokémon in die Pension gebracht?$"
#else
	.string "Left POKéMON at the DAY CARE$"
#endif

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "seine Pokémon in die Pension gegeben!\p"
	.string "{STR_VAR_3} ist ein Ellenbogentyp, der\n"
	.string "alles für die Entwicklung seiner\l"
	.string "Pokémon tut.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER left POKéMON with the\n"
	.string "DAY CARE {STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a real go-getter\n"
	.string "who raises POKéMON aggressively!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarTitle::
#if GERMAN
	.string "Der Seilbahn verrückte Trainer$"
#else
	.string "The CABLE CAR-Loving TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarAction::
#if GERMAN
	.string "Bist mit der Seilbahn gefahren?$"
#else
	.string "Rode the CABLE CAR$"
#endif

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer ist {STR_VAR_1}-mal\n"
	.string "mit der Seilbahn gefahren!\p"
	.string "{STR_VAR_3} ist ein sehr beschäftigter\n"
	.string "Trainer, der ständig rauf und runter\l"
	.string "fährt.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER rode the CABLE CAR\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a busy TRAINER\n"
	.string "who's up and down all the time!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_HotSpringsTitle::
#if GERMAN
	.string "Der Liebhaber der Heißen Quellen$"
#else
	.string "The Hot Spring-Loving TRAINER$"
#endif

MauvilleCity_PokemonCenter_1F_Text_HotSpringsAction::
#if GERMAN
	.string "Hast in den Heißen Quellen gebadet?$"
#else
	.string "Bathed in hot springs$"
#endif

MauvilleCity_PokemonCenter_1F_Text_HotSpringsStory::
#if GERMAN
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1}-mal\n"
	.string "in den Heißen Quellen gebadet!\p"
	.string "{STR_VAR_3} wird eine babyweiche Haut\n"
	.string "haben.$"
#else
	.string "This is a tale of a TRAINER\n"
	.string "named {STR_VAR_3}.\p"
	.string "This TRAINER bathed in hot springs\n"
	.string "{STR_VAR_1} times!\p"
	.string "{STR_VAR_3} must be a TRAINER with\n"
	.string "baby-smooth skin!$"
#endif


MauvilleCity_PokemonCenter_1F_EventScript_Storyteller::
	lock
	faceplayer
	setvar VAR_0x8008, 0
	setvar VAR_0x8009, 0
	setvar VAR_0x800A, 0
	setvar VAR_0x800B, 0
	msgbox MauvilleCity_PokemonCenter_1F_Text_WillYouHearMyTale, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	specialvar VAR_RESULT, StorytellerGetFreeStorySlot
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_KnowNoTales
	message MauvilleCity_PokemonCenter_1F_Text_WhichTaleToTell
	waitmessage
	special StorytellerStoryListMenu
	waitstate
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelStorySelection
	setvar VAR_0x8008, 1
	special Script_StorytellerDisplayStory
	waitmessage
	waitbuttonpress
	specialvar VAR_RESULT, StorytellerUpdateStat
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_AreThereOtherTales
	goto MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale

MauvilleCity_PokemonCenter_1F_EventScript_CancelStorySelection::
	goto MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	end

MauvilleCity_PokemonCenter_1F_EventScript_AreThereOtherTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_CouldThereBeOtherLegends, MSGBOX_DEFAULT
	specialvar VAR_RESULT, HasStorytellerAlreadyRecorded
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_StorytellerEnd
	goto MauvilleCity_PokemonCenter_1F_EventScript_DoYouHaveAnyTales

MauvilleCity_PokemonCenter_1F_EventScript_KnowNoTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_IKnowNoTales, MSGBOX_DEFAULT
MauvilleCity_PokemonCenter_1F_EventScript_DoYouHaveAnyTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_HaveYouAnyLegendaryTales, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	specialvar VAR_RESULT, Script_StorytellerInitializeRandomStat
	goto_if_eq VAR_RESULT, 1, MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale
	msgbox MauvilleCity_PokemonCenter_1F_Text_NotWorthyOfLegend, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDidStatXTimes, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller::
	msgbox MauvilleCity_PokemonCenter_1F_Text_StorytellerFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

@ Unused
MauvilleCity_PokemonCenter_1F_EventScript_WaitingForRecordMix::
	msgbox MauvilleCity_PokemonCenter_1F_Text_IWishMorePeopleWereInterested, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_StorytellerEnd::
	release
	end

@ Giddy
MauvilleCity_PokemonCenter_1F_Text_HearMyStory:
#if GERMAN
	.string "Ich bin Märchen-man! Ich habe eine\n"
	.string "sehr geistreiche Geschichte für dich!\p"
	.string "Soll ich sie dir erzählen?$"
#else
	.string "I'm GIDDY!\n"
	.string "I have a scintillating story for you!\p"
	.string "Would you like to hear my story?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues:
#if GERMAN
	.string "Oh…\n"
	.string "Du überlässt mich meinem Blues?$"
#else
	.string "Oh…\n"
	.string "You've left me feeling the blues…$"
#endif

MauvilleCity_PokemonCenter_1F_Text_AlsoIWasThinking:
#if GERMAN
	.string "Außerdem habe ich so überlegt…$"
#else
	.string "Also, I was thinking…$"
#endif

MauvilleCity_PokemonCenter_1F_Text_WeShouldChatAgain:
#if GERMAN
	.string "Das wäre alles, glaube ich…\p"
	.string "Wir sollten bald wieder ein Schwätzchen\n"
	.string "halten! Tschüss!$"
#else
	.string "That's about it, I think…\p"
	.string "We should chat again!\n"
	.string "Bye-bye!$"
#endif

MauvilleCity_PokemonCenter_1F_EventScript_Giddy::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_HearMyStory, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_TryTellTale
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineGiddy
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTellTale::
	special GiddyShouldTellAnotherTale
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale::
	special GiddyShouldTellAnotherTale
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_GiddyStartNewTale
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales
	end

MauvilleCity_PokemonCenter_1F_EventScript_GiddyStartNewTale::
	msgbox MauvilleCity_PokemonCenter_1F_Text_AlsoIWasThinking, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale
	end

@ Giddy will continue to tell stories regardless of whether yes or no is selected below.
@ Each story there is a 10% chance it will be his last. Otherwise he will stop at 10 stories.
MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale::
	special GenerateGiddyLine
	special ShowFieldMessageStringVar4
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineGiddy::
	msgbox MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WeShouldChatAgain, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToHearMySong:
#if GERMAN
	.string "Hallo, ich bin der Barde.\n"
	.string "Möchtest du meinem Lied lauschen?$"
#else
	.string "Hi, I'm the BARD.\n"
	.string "Would you like to hear my song?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues1:
#if GERMAN
	.string "Oh…\n"
	.string "Du überlässt mich meinem Blues?$"
#else
	.string "Oh…\n"
	.string "You've left me feeling the blues…$"
#endif

MauvilleCity_PokemonCenter_1F_Text_WishICouldPlaySongForOthers:
#if GERMAN
	.string "Hach, was für ein bewegendes Lied…\n"
	.string "Ich wünschte, ich könnte es für andere\l"
	.string "spielen…$"
#else
	.string "Oh, what a moving song…\n"
	.string "I wish I could play it for others…$"
#endif

MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToWriteSomeLyrics:
#if GERMAN
	.string "So?\n"
	.string "Wie fandest du mein Lied?\p"
	.string "Ich bin noch nicht ganz zufrieden mit\n"
	.string "dem Text.\p"
	.string "Hast du nicht Lust, den Text für mich\n"
	.string "neu zu schreiben?$"
#else
	.string "So?\n"
	.string "How do you like my song?\p"
	.string "But I'm none too happy about\n"
	.string "the lyrics.\p"
	.string "How would you like to write some\n"
	.string "new lyrics for me?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues2:
#if GERMAN
	.string "Oh…\n"
	.string "Du überlässt mich meinem Blues?$"
#else
	.string "Oh…\n"
	.string "You've left me feeling the blues…$"
#endif

MauvilleCity_PokemonCenter_1F_Text_LetMeSingItForYou:
#if GERMAN
	.string "Vielen herzlichen Dank!\n"
	.string "Ich möchte für dich singen.$"
#else
	.string "Thank you kindly!\n"
	.string "Let me sing it for you.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_ThatHowYouWantedSongToGo:
#if GERMAN
	.string "Hast du dir dein Lied so vorgestellt?$"
#else
	.string "Was that how you wanted your song\n"
	.string "to go?$"
#endif

MauvilleCity_PokemonCenter_1F_Text_IllSingThisSongForAWhile:
#if GERMAN
	.string "Okay! Das ist es! Dieses Lied werde\n"
	.string "ich nun für eine Weile singen.$"
#else
	.string "Okay! That's it, then.\n"
	.string "I'll sing this song for a while.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_TeachWhatsHipAndHappening:
#if GERMAN
	.string "Hey, yo! Man nennt mich Trendwig. Ich\n"
	.string "zeige dir, was hip ist und abgeht.$"
#else
	.string "Hey, yo! They call me the HIPSTER.\n"
	.string "I'll teach you what's hip and happening.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_IAlreadyTaughtYou:
#if GERMAN
	.string "Aber, hey, ich habe dir doch schon ge-\n"
	.string "zeigt, was hip ist und abgeht.\p"
	.string "Ich will das auch anderen mitteilen.$"
#else
	.string "But, hey, I taught you what's hip and\n"
	.string "happening already.\p"
	.string "I'd like to spread the good word to\n"
	.string "other folks.$"
#endif

MauvilleCity_PokemonCenter_1F_Text_IveGotNothingNewToTeach:
#if GERMAN
	.string "Aber, hey, ich habe dir doch schon ge-\n"
	.string "zeigt, was hip ist und abgeht.\p"
	.string "Ich habe nichts mehr in petto.$"
#else
	.string "But, hey, you already know a lot about\n"
	.string "what's hip and happening.\p"
	.string "I've got nothing new to teach you!$"
#endif

MauvilleCity_PokemonCenter_1F_Text_HaveYouHeardOfWord:
#if GERMAN
	.string "Hast du schon von\n"
	.string "“{STR_VAR_1}” gehört?\p"
	.string "Was das heißt? Ähäm…\n"
	.string "Frag mal deinen Papi oder deine Mami.$"
#else
	.string "Hey, have you heard about\n"
	.string "“{STR_VAR_1}”?\p"
	.string "What's it mean? Well…\n"
	.string "Ask your daddy or mommy, okay?$"
#endif
