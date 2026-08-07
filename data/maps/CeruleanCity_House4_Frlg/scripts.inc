.set REWARD_TYPE, VAR_0x8004
.set REWARD_ITEM, VAR_0x8008

CeruleanCity_House4_Frlg_MapScripts::
	.byte 0

CeruleanCity_House4_EventScript_WonderNewsBerryMan::
	lock
	specialvar REWARD_TYPE, WonderNews_GetRewardInfo
	copyvar REWARD_ITEM, VAR_RESULT
	goto_if_eq REWARD_TYPE, NEWS_REWARD_NONE,       CeruleanCity_House4_EventScript_NoNews
	goto_if_eq REWARD_TYPE, NEWS_REWARD_RECV_SMALL, CeruleanCity_House4_EventScript_Reward_RecvSmall
	goto_if_eq REWARD_TYPE, NEWS_REWARD_RECV_BIG,   CeruleanCity_House4_EventScript_Reward_RecvBig
	goto_if_eq REWARD_TYPE, NEWS_REWARD_WAITING,    CeruleanCity_House4_EventScript_Waiting
	goto_if_eq REWARD_TYPE, NEWS_REWARD_SENT_SMALL, CeruleanCity_House4_EventScript_Reward_SentSmall
	goto_if_eq REWARD_TYPE, NEWS_REWARD_SENT_BIG,   CeruleanCity_House4_EventScript_Reward_SentBig
	goto_if_eq REWARD_TYPE, NEWS_REWARD_AT_MAX,     CeruleanCity_House4_EventScript_AtMax
	end

@ Mystery Gift is not enabled, or the player has no saved Wonder News
CeruleanCity_House4_EventScript_NoNews::
	msgbox CeruleanCity_House4_Text_NothingEntertaining
	release
	end

@ Small reward for receiving Wonder News from friend
CeruleanCity_House4_EventScript_Reward_RecvSmall::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_NewNewsInformativeHaveThis
	giveitem REWARD_ITEM
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Big reward for receiving Wonder News from non-friend source
CeruleanCity_House4_EventScript_Reward_RecvBig::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_IncredibleNewsHaveBerries
	giveitem REWARD_ITEM, 4
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Player has not recently sent Wonder News
CeruleanCity_House4_EventScript_Waiting::
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox CeruleanCity_House4_Text_WishCouldShareNewsWithOthers
	release
	end

@ Small reward for sending Wonder News every 1-3 times
CeruleanCity_House4_EventScript_Reward_SentSmall::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis
	giveitem REWARD_ITEM
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Big reward for sending Wonder News every 4th time
CeruleanCity_House4_EventScript_Reward_SentBig::
	call CeruleanCity_House4_EventScript_MovementReactionToNews
	msgbox CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries
	giveitem REWARD_ITEM, 4
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
	release
	end

@ Player has hit reward limit and must wait to receive new rewards
CeruleanCity_House4_EventScript_AtMax::
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews
	release
	end

CeruleanCity_House4_EventScript_MovementReactionToNews::
	playse SE_PIN
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_Delay48
	waitmovement 0
	return

CeruleanCity_House4_EventScript_NoRoomForBerries::
	msgbox CeruleanCity_House4_Text_YourBerryPouchIsFull
	release
	end

CeruleanCity_House4_Text_NothingEntertaining::
#if GERMAN
	.string "Seufz…\n"
	.string "Zu viel Zeit und zu wenig zu tun…\p"
	.string "Passiert nirgendwo etwas, das mich\n"
	.string "unterhalten könnte?$"
#else
	.string "Sigh…\n"
	.string "Too much time, too little to do…\p"
	.string "Is nothing entertaining happening\n"
	.string "anywhere?$"
#endif

CeruleanCity_House4_Text_NewNewsInformativeHaveThis::
#if GERMAN
	.string "Ah!\n"
	.string "Eine Nachrichtensendung!\p"
	.string "Hm…\p"
	.string "Ich verstehe!\n"
	.string "Das war sehr informativ!\p"
	.string "Ich freue mich, dass selbst junge\n"
	.string "Menschen wie du ein Interesse\l"
	.string "an Nachrichten zeigen.\l"
	.string "Als Zeichen meines Dankes möchte\l"
	.string "ich dir dies geben!$"
#else
	.string "Ah!\n"
	.string "A new news report!\p"
	.string "Hmm…\p"
	.string "I see!\n"
	.string "That was quite informative!\p"
	.string "I applaud you for taking interest\n"
	.string "in the news at your young age.\p"
	.string "As my thanks for sharing the news\n"
	.string "with me, I want you to have this.$"
#endif

CeruleanCity_House4_Text_IncredibleNewsHaveBerries::
#if GERMAN
	.string "Oh, oh!\n"
	.string "D-die Nachrichtensendung!\p"
	.string "Hm…\p"
	.string "Aufregend!\n"
	.string "Das sind unglaubliche Neuigkeiten!\p"
	.string "Solch eine unglaubliche Nachricht\n"
	.string "habe ich lange nicht mehr gehört!\p"
	.string "Danke, dass du mit mir diese\n"
	.string "Nachricht geteilt hast. Nimm\l"
	.string "ein paar Beeren.$"
#else
	.string "Oh, oh!\n"
	.string "Th-this news report!\p"
	.string "Hmm…\p"
	.string "Amazing!\n"
	.string "What an incredible piece of news!\p"
	.string "I haven't seen a news story this\n"
	.string "incredible in too long a time!\p"
	.string "Thanks for sharing this fantastic\n"
	.string "news. Have a bunch of BERRIES!$"
#endif

CeruleanCity_House4_Text_WishCouldShareNewsWithOthers::
#if GERMAN
	.string "Es ist so traurig, diese Nachricht\n"
	.string "nicht mit anderen zu teilen…\p"
	.string "Ich wünschte, ich könnte jemandem\n"
	.string "davon erzählen…\l"
	.string "Erzähl du den anderen davon…$"
#else
	.string "It seems such a shame to not share\n"
	.string "this news with other folks…\p"
	.string "I wish I could tell someone…\n"
	.string "Let others know the news…$"
#endif

CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis::
#if GERMAN
	.string "Ah, du hast den anderen die\n"
	.string "Nachricht für mich übermittelt?\p"
	.string "Es lohnt sich, gute Nachrichten mit\n"
	.string "anderen Menschen zu teilen.\p"
	.string "Als Zeichen meines Dankes möchte\n"
	.string "ich dir dies geben!$"
#else
	.string "Ah, you've spread the news for me?\p"
	.string "Good news becomes worthwhile when\n"
	.string "all sorts of people share it.\p"
	.string "As my thanks for your spreading\n"
	.string "the news, take this!$"
#endif

CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries::
#if GERMAN
	.string "Du hast die Nachricht noch weiter\n"
	.string "verbreitet? Wunderbar!\p"
	.string "Es wird der Nachricht gefallen,\n"
	.string "wenn sie alle erreicht!\p"
	.string "Ja, wirklich!\p"
	.string "Die Nachricht und ich wissen\n"
	.string "das zu schätzen und möchten dir\l"
	.string "mehr Beeren als sonst geben.$"
#else
	.string "You've spread the news some more?\n"
	.string "Magnificent!\p"
	.string "That piece of news must be\n"
	.string "delighted to be passed around so.\p"
	.string "Yes, indeed!\p"
	.string "Consider this a show of\n"
	.string "appreciation from me and the news.\p"
	.string "I'll give you more BERRIES than\n"
	.string "I usually do.$"
#endif

CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews::
#if GERMAN
	.string "Ich amüsiere mich mit allen Arten\n"
	.string "von Neuigkeiten.\p"
	.string "Ja, ich bin zufrieden!\n"
	.string "Ich werde mich eine Zeit lang nicht\l"
	.string "langweilen!$"
#else
	.string "I'm quite enjoying myself with all\n"
	.string "sorts of news.\p"
	.string "Yes, I am satisfied!\n"
	.string "I won't be bored for a while.$"
#endif

CeruleanCity_House4_Text_YourBerryPouchIsFull::
#if GERMAN
	.string "Hm? Deine Beerentüte ist voll.\n"
	.string "Mein Geschenk kommt nicht an!$"
#else
	.string "Hm? Your BERRY POUCH is full.\n"
	.string "My gift remains ungiven, then.$"
#endif

