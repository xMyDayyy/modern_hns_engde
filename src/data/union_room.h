ALIGNED(4) static const u8 sText_EmptyString[] = _("");
ALIGNED(4) static const u8 sText_Colon[] = _(":");
ALIGNED(4) static const u8 sText_ID[] = _("{ID}");
#if GERMAN
ALIGNED(4) static const u8 sText_PleaseStartOver[] = _("Bitte neu starten!");
#else
ALIGNED(4) static const u8 sText_PleaseStartOver[] = _("Please start over from the beginning.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_WirelessSearchCanceled[] = _("Suche nach Drahtlosem Kommuni-\nkations-System wurde abgebrochen.");
#else
ALIGNED(4) static const u8 sText_WirelessSearchCanceled[] = _("The WIRELESS COMMUNICATION\nSYSTEM search has been canceled.");
#endif
ALIGNED(4) static const u8 sText_AwaitingCommunucation2[] = _("Awaiting communication\nfrom another player."); // Unused
#if GERMAN
ALIGNED(4) static const u8 sText_AwaitingCommunication[] = _("{STR_VAR_1}! Warte\nauf einen Mitspieler.");
#else
ALIGNED(4) static const u8 sText_AwaitingCommunication[] = _("{STR_VAR_1}! Awaiting\ncommunication from another player.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_AwaitingLinkPressStart[] = _("{STR_VAR_1}!\nWarte auf Verbindung! Drücke START,\lwenn alle bereit sind.");
#else
ALIGNED(4) static const u8 sText_AwaitingLinkPressStart[] = _("{STR_VAR_1}! Awaiting link!\nPress START when everyone's ready.");
#endif
ALIGNED(4) static const u8 sJPText_SingleBattle[] = _("シングルバトルを かいさいする");
ALIGNED(4) static const u8 sJPText_DoubleBattle[] = _("ダブルバトルを かいさいする");
ALIGNED(4) static const u8 sJPText_MultiBattle[] = _("マルチバトルを かいさいする");
ALIGNED(4) static const u8 sJPText_TradePokemon[] = _("ポケモンこうかんを かいさいする");
ALIGNED(4) static const u8 sJPText_Chat[] = _("チャットを かいさいする");
ALIGNED(4) static const u8 sJPText_DistWonderCard[] = _("ふしぎなカードをくばる");
ALIGNED(4) static const u8 sJPText_DistWonderNews[] = _("ふしぎなニュースをくばる");
ALIGNED(4) static const u8 sJPText_DistMysteryEvent[] = _("ふしぎなできごとを かいさいする"); // Unused
ALIGNED(4) static const u8 sJPText_HoldPokemonJump[] = _("なわとびを かいさいする");
ALIGNED(4) static const u8 sJPText_HoldBerryCrush[] = _("きのみマッシャーを かいさいする");
ALIGNED(4) static const u8 sJPText_HoldBerryPicking[] = _("きのみどりを かいさいする");
ALIGNED(4) static const u8 sJPText_HoldSpinTrade[] = _("ぐるぐるこうかんを かいさいする");
ALIGNED(4) static const u8 sJPText_HoldSpinShop[] = _("ぐるぐるショップを かいさいする");

// Unused
static const u8 *const sJPLinkGroupActionTexts[] = {
    sJPText_SingleBattle,
    sJPText_DoubleBattle,
    sJPText_MultiBattle,
    sJPText_TradePokemon,
    sJPText_Chat,
    sJPText_DistWonderCard,
    sJPText_DistWonderNews,
    sJPText_DistWonderCard,
    sJPText_HoldPokemonJump,
    sJPText_HoldBerryCrush,
    sJPText_HoldBerryPicking,
    sJPText_HoldBerryPicking,
    sJPText_HoldSpinTrade,
    sJPText_HoldSpinShop
};

#if GERMAN
static const u8 sText_1PlayerNeeded[] = _("1 Spieler\nnoch.");
#else
static const u8 sText_1PlayerNeeded[] = _("1 player\nneeded.");
#endif
#if GERMAN
static const u8 sText_2PlayersNeeded[] = _("2 Spieler\nnoch.");
#else
static const u8 sText_2PlayersNeeded[] = _("2 players\nneeded.");
#endif
#if GERMAN
static const u8 sText_3PlayersNeeded[] = _("3 Spieler\nnoch.");
#else
static const u8 sText_3PlayersNeeded[] = _("3 players\nneeded.");
#endif
static const u8 sText_4PlayersNeeded[] = _("4 players\nneeded.");
#if GERMAN
static const u8 sText_2PlayerMode[] = _("2SPIELER-\nmodus");
#else
static const u8 sText_2PlayerMode[] = _("2-PLAYER\nMODE");
#endif
#if GERMAN
static const u8 sText_3PlayerMode[] = _("3SPIELER-\nmodus");
#else
static const u8 sText_3PlayerMode[] = _("3-PLAYER\nMODE");
#endif
#if GERMAN
static const u8 sText_4PlayerMode[] = _("4SPIELER-\nmodus");
#else
static const u8 sText_4PlayerMode[] = _("4-PLAYER\nMODE");
#endif
#if GERMAN
static const u8 sText_5PlayerMode[] = _("5SPIELER-\nmodus");
#else
static const u8 sText_5PlayerMode[] = _("5-PLAYER\nMODE");
#endif

static const u8 *const sPlayersNeededOrModeTexts[][5] = {
    // 2 players required
    {
        sText_1PlayerNeeded,
        sText_2PlayerMode
    },
    // 4 players required
    {
        sText_3PlayersNeeded,
        sText_2PlayersNeeded,
        sText_1PlayerNeeded,
        sText_4PlayerMode
    },
    // 2-5 players required
    {
        sText_1PlayerNeeded,
        sText_2PlayerMode,
        sText_3PlayerMode,
        sText_4PlayerMode,
        sText_5PlayerMode
    },
    // 3-5 players required
    {
        sText_2PlayersNeeded,
        sText_1PlayerNeeded,
        sText_3PlayerMode,
        sText_4PlayerMode,
        sText_5PlayerMode
    },
    // 2-4 players required
    {
        sText_1PlayerNeeded,
        sText_2PlayerMode,
        sText_3PlayerMode,
        sText_4PlayerMode
    }
};

#if GERMAN
ALIGNED(4) static const u8 sText_BButtonCancel[] = _("{B_BUTTON}Zurück");
#else
ALIGNED(4) static const u8 sText_BButtonCancel[] = _("{B_BUTTON}CANCEL");
#endif
ALIGNED(4) static const u8 sJPText_SearchingForParticipants[] = _("ため\nさんかしゃ ぼしゅうちゅう です！"); // Unused, may have been cut off
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerContactedYouForXAccept[] = _("{STR_VAR_2} fragt bei dir nach\n{STR_VAR_1}.\lAnnehmen?");
#else
ALIGNED(4) static const u8 sText_PlayerContactedYouForXAccept[] = _("{STR_VAR_2} contacted you for\n{STR_VAR_1}. Accept?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerContactedYouShareX[] = _("{STR_VAR_2} ist bereit. Möchtest\ndu {STR_VAR_1} teilen?");
#else
ALIGNED(4) static const u8 sText_PlayerContactedYouShareX[] = _("{STR_VAR_2} contacted you.\nWill you share {STR_VAR_1}?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerContactedYouAddToMembers[] = _("{STR_VAR_2} ist bereit.\nAls Mitglied aufnehmen?");
#else
ALIGNED(4) static const u8 sText_PlayerContactedYouAddToMembers[] = _("{STR_VAR_2} contacted you.\nAdd to the members?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_AreTheseMembersOK[] = _("{STR_VAR_1}!\nSind das die Mitglieder?");
#else
ALIGNED(4) static const u8 sText_AreTheseMembersOK[] = _("{STR_VAR_1}!\nAre these members OK?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_CancelModeWithTheseMembers[] = _("{STR_VAR_1}-Modus\nmit diesen Mitgliedern beenden?");
#else
ALIGNED(4) static const u8 sText_CancelModeWithTheseMembers[] = _("Cancel {STR_VAR_1} MODE\nwith these members?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_AnOKWasSentToPlayer[] = _("{STR_VAR_1} wurde “O.K.”\nübersandt.");
#else
ALIGNED(4) static const u8 sText_AnOKWasSentToPlayer[] = _("An “OK” was sent\nto {STR_VAR_1}.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_OtherTrainerUnavailableNow[] = _("Es scheint, der andere Trainer\nist momentan nicht bereit…\p");
#else
ALIGNED(4) static const u8 sText_OtherTrainerUnavailableNow[] = _("The other TRAINER doesn't appear\nto be available now…\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_CantTransmitTrainerTooFar[] = _("Mit einem Trainer, der so weit\nentfernt ist, kannst du keinen\lKontakt aufnehmen.\l");
#else
ALIGNED(4) static const u8 sText_CantTransmitTrainerTooFar[] = _("You can't transmit with a TRAINER\nwho is too far away.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_TrainersNotReadyYet[] = _("Der/die andere(n) Trainer\nist/sind noch nicht bereit.\p");
#else
ALIGNED(4) static const u8 sText_TrainersNotReadyYet[] = _("The other TRAINER(S) is/are not\nready yet.\p");
#endif

static const u8 *const sCantTransmitToTrainerTexts[] = {
    [UR_TRADE_PLAYER_NOT_READY - 1]  = sText_CantTransmitTrainerTooFar,
    [UR_TRADE_PARTNER_NOT_READY - 1] = sText_TrainersNotReadyYet
};

#if GERMAN
ALIGNED(4) static const u8 sText_ModeWithTheseMembersWillBeCanceled[] = _("Der {STR_VAR_1}-\nmodus mit diesen Mitgliedern wird\labgebrochen.{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_ModeWithTheseMembersWillBeCanceled[] = _("The {STR_VAR_1} MODE with\nthese members will be canceled.{PAUSE 60}");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("Es gibt ein Mitglied, das nicht\nmehr teilnehmen kann.\p");
#else
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("There is a member who can no\nlonger remain available.\p");
#endif

static const u8 *const sPlayerUnavailableTexts[] = {
    sText_OtherTrainerUnavailableNow,
    sText_MemberNoLongerAvailable
};

#if GERMAN
ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("Es scheint, der andere Trainer\nist momentan nicht bereit…\p");
#else
ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("The other TRAINER appears\nunavailable…\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerSentBackOK[] = _("{STR_VAR_1} antwortet “O.K.”");
#else
ALIGNED(4) static const u8 sText_PlayerSentBackOK[] = _("{STR_VAR_1} sent back an “OK”!");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerOKdRegistration[] = _("{STR_VAR_1} hat dich als Mitglied\naufgenommen.");
#else
ALIGNED(4) static const u8 sText_PlayerOKdRegistration[] = _("{STR_VAR_1} OK'd your registration as\na member.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1} antwortet…\n“Nein…”\p");
#else
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1} replied, “No…”\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_AwaitingOtherMembers[] = _("{STR_VAR_1}!\nWarte auf weitere Mitglieder!");
#else
ALIGNED(4) static const u8 sText_AwaitingOtherMembers[] = _("{STR_VAR_1}!\nAwaiting other members!");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_QuitBeingMember[] = _("Mitgliedschaft beenden?");
#else
ALIGNED(4) static const u8 sText_QuitBeingMember[] = _("Quit being a member?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("Du bist kein Mitglied mehr.\p");
#else
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("You stopped being a member.\p");
#endif

static const u8 *const sPlayerDisconnectedTexts[] = {
    [RFU_STATUS_OK]                  = NULL,
    [RFU_STATUS_FATAL_ERROR]         = sText_MemberNoLongerAvailable,
    [RFU_STATUS_CONNECTION_ERROR]    = sText_TrainerAppearsUnavailable,
    [RFU_STATUS_CHILD_SEND_COMPLETE] = NULL,
    [RFU_STATUS_NEW_CHILD_DETECTED]  = NULL,
    [RFU_STATUS_JOIN_GROUP_OK]       = NULL,
    [RFU_STATUS_JOIN_GROUP_NO]       = sText_PlayerRepliedNo,
    [RFU_STATUS_WAIT_ACK_JOIN_GROUP] = NULL,
    [RFU_STATUS_LEAVE_GROUP_NOTICE]  = NULL,
    [RFU_STATUS_LEAVE_GROUP]         = sText_StoppedBeingMember
};

#if GERMAN
ALIGNED(4) static const u8 sText_WirelessLinkEstablished[] = _("Das Drahtlose Kommunikations-\nsystem wurde aufgebaut.");
#else
ALIGNED(4) static const u8 sText_WirelessLinkEstablished[] = _("The WIRELESS COMMUNICATION\nSYSTEM link has been established.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_WirelessLinkDropped[] = _("Das Drahtlose Kommunikations-\nsystem wurde eingestellt…");
#else
ALIGNED(4) static const u8 sText_WirelessLinkDropped[] = _("The WIRELESS COMMUNICATION\nSYSTEM link has been dropped…");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_LinkWithFriendDropped[] = _("Die Verbindung zu deinem Freund\nwurde gekappt…");
#else
ALIGNED(4) static const u8 sText_LinkWithFriendDropped[] = _("The link with your friend has been\ndropped…");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1} antwortet…\n“Nein…”");
#else
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1} replied, “No…”");
#endif

static const u8 *const sLinkDroppedTexts[] = {
    [RFU_STATUS_OK]                  = NULL,
    [RFU_STATUS_FATAL_ERROR]         = sText_LinkWithFriendDropped,
    [RFU_STATUS_CONNECTION_ERROR]    = sText_LinkWithFriendDropped,
    [RFU_STATUS_CHILD_SEND_COMPLETE] = NULL,
    [RFU_STATUS_NEW_CHILD_DETECTED]  = NULL,
    [RFU_STATUS_JOIN_GROUP_OK]       = NULL,
    [RFU_STATUS_JOIN_GROUP_NO]       = sText_PlayerRepliedNo2,
    [RFU_STATUS_WAIT_ACK_JOIN_GROUP] = NULL,
    [RFU_STATUS_LEAVE_GROUP_NOTICE]  = NULL,
    [RFU_STATUS_LEAVE_GROUP]         = NULL
};

#if GERMAN
ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("In den {STR_VAR_2}-\nmodus schalten?");
#else
ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("Do you want the {STR_VAR_2}\nMODE?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("In den {STR_VAR_2}-\nmodus schalten?");
#else
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("Do you want the {STR_VAR_2}\nMODE?");
#endif

// Unused
static const u8 *const sDoYouWantModeTexts[] = {
    sText_DoYouWantXMode,
    sText_DoYouWantXMode2
};

ALIGNED(4) static const u8 sText_CommunicatingPleaseWait[] = _("Communicating…\nPlease wait."); // Unused
#if GERMAN
ALIGNED(4) static const u8 sText_AwaitingPlayersResponseAboutTrade[] = _("Warten auf die Antwort von {STR_VAR_1}\nbezüglich des Tauschs…");
#else
ALIGNED(4) static const u8 sText_AwaitingPlayersResponseAboutTrade[] = _("Awaiting {STR_VAR_1}'s response about\nthe trade…");
#endif
ALIGNED(4) static const u8 sText_Communicating[] = _("Communicating{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
                                                     "{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#if GERMAN
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("Verbinden mit {STR_VAR_1}{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
                                                               "{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#else
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("Communicating with {STR_VAR_1}{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
                                                               "{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("Bitte warten auf...{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
                                                        "{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#else
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("Please wait a while{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n"
                                                        "{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#endif

static const u8 *const sCommunicatingWaitTexts[] = {
    sText_Communicating,
    sText_CommunicatingWithPlayer,
    sText_PleaseWaitAWhile
};

#if GERMAN
ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("Heho! Gibt es etwas, was du\ntun wolltest?");
#else
ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("Hiya! Is there something that you\nwanted to do?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("Hallo!\nMöchtest du etwas unternehmen?");
#else
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("Hello!\nWould you like to do something?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}: Wir treffen uns wieder!\nWas darf es dieses Mal sein?");
#else
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}: Hiya, we meet again!\nWhat are you up for this time?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}: Oh! {PLAYER}!\nMöchtest du etwas unternehmen?");
#else
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}: Oh! {PLAYER}, hello!\nWould you like to do something?");
#endif

static const u8 *const sHiDoSomethingTexts[][GENDER_COUNT] = {
    {
        sText_HiDoSomethingMale,
        sText_HiDoSomethingFemale
    }, {
        sText_HiDoSomethingAgainMale,
        sText_HiDoSomethingAgainFemale
    }
};

#if GERMAN
ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("Möchtest du etwas unternehmen?");
#else
ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("Want to do something?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("Möchtest du etwas unternehmen?");
#else
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("Would you like to do something?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}: Was möchtest du jetzt\nunternehmen?");
#else
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}: What would you like to\ndo now?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_DoSomethingAgainFemale[] = _("{STR_VAR_1}: Was möchtest du jetzt\nunternehmen?");
#else
ALIGNED(4) static const u8 sText_DoSomethingAgainFemale[] = _("{STR_VAR_1}: Want to do anything else?");
#endif // Unused

// Unused
static const u8 *const sDoSomethingTexts[][GENDER_COUNT] = {
    {
        sText_DoSomethingMale,
        sText_DoSomethingFemale
    }, {
        sText_DoSomethingAgainMale,
        sText_DoSomethingAgainMale // was probably supposed to be sText_DoSomethingAgainFemale
    }
};

#if GERMAN
ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("Jemand fragt nach dir.{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("Somebody has contacted you.{PAUSE 60}");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1} fragt nach dir.{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1} has contacted you.{PAUSE 60}");
#endif

static const u8 *const sPlayerContactedYouTexts[] = {
    sText_SomebodyHasContactedYou,
    sText_PlayerHasContactedYou
};

#if GERMAN
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("Warten auf eine Antwort\ndes anderen Trainers…");
#else
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("Awaiting a response from\nthe other TRAINER…");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("Warten auf eine Antwort\nvon {STR_VAR_1}…");
#else
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("Awaiting a response from\n{STR_VAR_1}…");
#endif

static const u8 *const sAwaitingResponseTexts[] = {
    sText_AwaitingResponseFromTrainer,
    sText_AwaitingResponseFromPlayer
};

#if GERMAN
ALIGNED(4) static const u8 sText_ShowTrainerCard[] = _("Der andere Trainer hat dir\nden Trainerpass gezeigt.\pMöchtest du deinen Trainerpass\nauch zeigen?");
#else
ALIGNED(4) static const u8 sText_ShowTrainerCard[] = _("The other TRAINER showed\nyou their TRAINER CARD.\pWould you like to show your\nTRAINER CARD?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_BattleChallenge[] = _("Der andere Trainer fordert\ndich zum Kampf heraus.\pMöchtest du die Herausforderung\nannehmen?");
#else
ALIGNED(4) static const u8 sText_BattleChallenge[] = _("The other TRAINER challenges you\nto battle.\pWill you accept the battle\nchallenge?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChatInvitation[] = _("Der andere Trainer lädt dich\nin den Chat ein.\pMöchtest du diese Einladung\nannehmen?");
#else
ALIGNED(4) static const u8 sText_ChatInvitation[] = _("The other TRAINER invites you\nto chat.\pWill you accept the chat\ninvitation?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_OfferToTradeMon[] = _("Es gibt ein Angebot, dein\n{DYNAMIC 1} mit Level {DYNAMIC 0} von\lder Liste gegen\lein {DYNAMIC 3} mit Level\l{DYNAMIC 2} zu tauschen.\pMöchtest du dieses Angebot\nannehmen?");
#else
ALIGNED(4) static const u8 sText_OfferToTradeMon[] = _("There is an offer to trade your\nregistered Lv. {DYNAMIC 0} {DYNAMIC 1}\pin exchange for a\nLv. {DYNAMIC 2} {DYNAMIC 3}.\pWill you accept this trade\noffer?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_OfferToTradeEgg[] = _("Es gibt ein Angebot für dein\nEi auf der Liste.\lMöchtest du das Angebot annehmen?");
#else
ALIGNED(4) static const u8 sText_OfferToTradeEgg[] = _("There is an offer to trade your\nregistered EGG.\lWill you accept this trade offer?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChatDropped[] = _("Der Chat wurde abgebrochen.\p");
#else
ALIGNED(4) static const u8 sText_ChatDropped[] = _("The chat has been dropped.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_OfferDeclined1[] = _("Du lehnst das Angebot ab.\p");
#else
ALIGNED(4) static const u8 sText_OfferDeclined1[] = _("You declined the offer.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_OfferDeclined2[] = _("Du lehnst das Angebot ab.\p");
#else
ALIGNED(4) static const u8 sText_OfferDeclined2[] = _("You declined the offer.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChatEnded[] = _("Der Chat wurde beendet.\p");
#else
ALIGNED(4) static const u8 sText_ChatEnded[] = _("The chat was ended.\p");
#endif

// Unused
static const u8 *const sInvitationTexts[] = {
    sText_ShowTrainerCard,
    sText_BattleChallenge,
    sText_ChatInvitation,
    sText_OfferToTradeMon
};

#if GERMAN
ALIGNED(4) static const u8 sText_JoinChatMale[] = _("Oh, heh! Wir chatten gerade.\nMöchtest du mitmachen?");
#else
ALIGNED(4) static const u8 sText_JoinChatMale[] = _("Oh, hey! We're in a chat right now.\nWant to join us?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}: {PLAYER}!\nWir chatten gerade.\lMöchtest du mitmachen?");
#else
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}: Hey, {PLAYER}!\nWe're having a chat right now.\lWant to join us?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("Oh hallo! Wir chatten gerade.\nMöchtest du mitmachen?");
#else
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("Oh, hi! We're having a chat now.\nWould you like to join us?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}: {PLAYER}!\nWir chatten gerade.\lMöchtest du mitmachen?");
#else
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}: Oh, hi, {PLAYER}!\nWe're having a chat now.\lWould you like to join us?");
#endif

static const u8 *const sJoinChatTexts[][GENDER_COUNT] = {
    {
        sText_JoinChatMale,
        sText_JoinChatFemale
    }, {
        sText_PlayerJoinChatMale,
        sText_PlayerJoinChatFemale
    }
};

#if GERMAN
ALIGNED(4) static const u8 sText_TrainerAppearsBusy[] = _("……\nDer Trainer scheint beschäftigt…\p");
#else
ALIGNED(4) static const u8 sText_TrainerAppearsBusy[] = _("……\nThe TRAINER appears to be busy…\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("Ein Kampf? Moment,\nich brauche noch etwas Zeit.");
#else
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("A battle, huh?\nAll right, just give me some time.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("Du möchtest chatten?\nKlar, einen Moment noch.");
#else
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("You want to chat, huh?\nSure, just wait a little.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("Gerne! Zum “Gruß” zeige\nich dir meinen Trainerpass.");
#else
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("Sure thing! As my “Greetings,”\nhere's my TRAINER CARD.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("Ein Kampf? Moment,\nich brauche noch etwas Zeit.");
#else
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("A battle? Of course, but I need\ntime to get ready.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("Du möchtest chatten?\nKlar, einen Moment noch.");
#else
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("Did you want to chat?\nOkay, but please wait a moment.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("Als Begrüßung zeige ich dir\nmeinen Trainerpass.");
#else
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("As my introduction, I'll show you\nmy TRAINER CARD.");
#endif

static const u8 *const sText_WaitOrShowCardTexts[GENDER_COUNT][4] = {
    {
        sText_WaitForBattleMale,
        sText_WaitForChatMale,
        NULL,
        sText_ShowTrainerCardMale
    }, {
        sText_WaitForBattleFemale,
        sText_WaitForChatFemale,
        NULL,
        sText_ShowTrainerCardFemale
    }
};

#if GERMAN
ALIGNED(4) static const u8 sText_WaitForChatMale2[] = _("Du möchtest chatten?\nKlar, einen Moment noch.");
#else
ALIGNED(4) static const u8 sText_WaitForChatMale2[] = _("You want to chat, huh?\nSure, just wait a little.");
#endif // Unused
#if GERMAN
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("Danke, dass du gewartet hast!\nLass uns beginnen!{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("Thanks for waiting!\nLet's get our battle started!{PAUSE 60}");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("In Ordnung!\nLass uns chatten!{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("All right!\nLet's chat!{PAUSE 60}");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("Entschuldige, dass du warten\nmusstest. Lass uns beginnen!{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("Sorry I made you wait!\nLet's get started!{PAUSE 60}");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("Entschuldige, dass du warten\nmusstest. Lass uns chatten!{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("Sorry I made you wait!\nLet's chat.{PAUSE 60}");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("Der Tausch beginnt.{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("The trade will be started.{PAUSE 60}");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("Der Kampf beginnt.{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("The battle will be started.{PAUSE 60}");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_EnteringChat[] = _("Der Chat beginnt…{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_EnteringChat[] = _("Entering the chat…{PAUSE 60}");
#endif

static const u8 *const sStartActivityTexts[][GENDER_COUNT][3] = {
    {
        {
            sText_BattleWillBeStarted,
            sText_EnteringChat,
            sText_TradeWillBeStarted
        }, {
            sText_BattleWillBeStarted,
            sText_EnteringChat,
            sText_TradeWillBeStarted
        }
    }, {
        {
            sText_DoneWaitingBattleMale,
            sText_DoneWaitingChatMale,
            sText_TradeWillBeStarted
        }, {
            sText_DoneWaitingBattleFemale,
            sText_DoneWaitingChatFemale,
            sText_TradeWillBeStarted
        }
    }
};

#if GERMAN
ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("Entschuldige, aber meine Pokémon\nfühlen sich momentan nicht wohl.\lLass uns ein andermal kämpfen!\p");
#else
ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("Sorry! My POKéMON don't seem to\nbe feeling too well right now.\lLet me battle you another time.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("Es tut mir schrecklich Leid, aber\nmeine Pokémon fühlen sich\lnicht besonders wohl…\lLass uns ein andermal kämpfen.\p");
#else
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("I'm terribly sorry, but my POKéMON\naren't feeling well…\pLet's battle another time.\p");
#endif

static const u8 *const sBattleDeclinedTexts[GENDER_COUNT] = {
    sText_BattleDeclinedMale,
    sText_BattleDeclinedFemale
};

#if GERMAN
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("Häh? Mein Trainerpass…\nWo ist er denn?\lSorry, ich zeige ihn dir später!\p");
#else
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("Huh? My TRAINER CARD…\nWhere'd it go now?\lSorry! I'll show you another time!\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("Oh? Wo habe ich nur meinen\nTrainerpass?…\lSorry, ich zeige ihn dir später!\p");
#else
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("Oh? Now where did I put my\nTRAINER CARD?…\lSorry! I'll show you later!\p");
#endif

static const u8 *const sShowTrainerCardDeclinedTexts[GENDER_COUNT] = {
    sText_ShowTrainerCardDeclinedMale,
    sText_ShowTrainerCardDeclinedFemale
};

#if GERMAN
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("Melde dich bei mir, wenn du\netwas von mir willst!\p");
#else
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("If you want to do something with\nme, just give me a shout!\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("Melde dich bei mir, wenn du\netwas von mir willst!\p");
#else
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("If you want to do something with\nme, don't be shy.\p");
#endif

static const u8 *const sIfYouWantToDoSomethingTexts[GENDER_COUNT] = {
    sText_IfYouWantToDoSomethingMale,
    sText_IfYouWantToDoSomethingFemale
};

#if GERMAN
ALIGNED(4) static const u8 sText_TrainerBattleBusy[] = _("Oh! Entschuldige, aber ich\nmuss noch etwas erledigen.\lEin andermal, o.k.?\p");
#else
ALIGNED(4) static const u8 sText_TrainerBattleBusy[] = _("Whoops! Sorry, but I have to do\nsomething else.\lAnother time, okay?\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_NeedTwoMonsOfLevel30OrLower1[] = _("Für einen Kampf benötigst du\nzwei Pokémon, deren Level\lunter 30 ist.\p");
#else
ALIGNED(4) static const u8 sText_NeedTwoMonsOfLevel30OrLower1[] = _("If you want to battle, you need\ntwo POKéMON that are below\lLv. 30.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_NeedTwoMonsOfLevel30OrLower2[] = _("Für einen Kampf benötigst du\nzwei Pokémon, deren Level\lunter 30 ist.\p");
#else
ALIGNED(4) static const u8 sText_NeedTwoMonsOfLevel30OrLower2[] = _("For a battle, you need two\nPOKéMON that are below Lv. 30.\p");
#endif

#if GERMAN
ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("Oh, in Ordnung!\nGib mir einfach Bescheid, o.k.?\p");
#else
ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("Oh, all right.\nCome see me anytime, okay?\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("Oh…\nBitte komme jederzeit vorbei.\p");
#else
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("Oh…\nPlease come by anytime.\p");
#endif

// Response from partner when player declines chat
static const u8 *const sDeclineChatTexts[GENDER_COUNT] = {
    sText_DeclineChatMale,
    stext_DeclineChatFemale
};

#if GERMAN
ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("Entschuldigung!\nIch kann gerade nicht.\lLass uns ein andermal chatten.\p");
#else
ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("Oh, sorry!\nI just can't right this instant.\lLet's chat another time.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("Entschuldigung!\nIch bin gerade indisponiert!\lLass uns ein andermal chatten.\p");
#else
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("Oh, I'm sorry.\nI have too much to do right now.\lLet's chat some other time.\p");
#endif

// Response from partner when they decline chat
static const u8 *const sChatDeclinedTexts[GENDER_COUNT] = {
    sText_ChatDeclinedMale,
    sText_ChatDeclinedFemale
};

#if GERMAN
ALIGNED(4) static const u8 sText_YoureToughMale[] = _("Wow!\nDu bist aber stark!\p");
#else
ALIGNED(4) static const u8 sText_YoureToughMale[] = _("Whoa!\nI can tell you're pretty tough!\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("Du hast diese Attacke benutzt?\nDas ist eine gute Strategie!\p");
#else
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("You used that move?\nThat's good strategy!\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("Auf!\nDas war nur das Vorspiel!\p");
#else
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("Way to go!\nThat was an eye-opener!\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("Oh! Wie konntest du nur dieses\nPkmn in dieser Situation einsetzen?\p");
#else
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("Oh! How could you use that\nPOKéMON in that situation?\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("Dieses Pokémon…\nEs ist sehr gut trainiert!\p");
#else
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("That POKéMON…\nIt's been raised really well!\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("Das ist es! Das ist\ngenau die richtige Attacke jetzt!\p");
#else
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("That's it!\nThis is the right move now!\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("Das ist prima!\nDu kannst so kämpfen?\p");
#else
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("That's awesome!\nYou can battle that way?\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("Dein Timing beim Pokémon-\nWechsel war exzellent!\p");
#else
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("You have exquisite timing for\nswitching POKéMON!\p");
#endif

static const u8 *const sBattleReactionTexts[GENDER_COUNT][4] = {
    {
        sText_YoureToughMale,
        sText_UsedGoodMoveMale,
        sText_BattleSurpriseMale,
        sText_SwitchedMonsMale
    },
    {
        sText_YoureToughFemale,
        sText_UsedGoodMoveFemale,
        sText_BattleSurpriseFemale,
        sText_SwitchedMonsFemale
    }
};

#if GERMAN
ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("Ah, ich verstehe!\nDas bildet mich weiter!\p");
#else
ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("Oh, I see!\nThis is educational!\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("Lass die Witze!\nMir tut vor Lachen alles weh!\p");
#else
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("Don't say anything funny anymore!\nI'm sore from laughing!\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("Oh?\nDas ist also passiert.\p");
#else
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("Oh?\nSomething like that happened.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("Hm… Wie?\nDas behauptest du also?\p");
#else
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("Hmhm… What?\nSo is this what you're saying?\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("Stimmt das?\nDas wusste ich nicht!\p");
#else
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("Is that right?\nI didn't know that.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("Ahaha!\nWorum geht es?\p");
#else
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("Ahaha!\nWhat is that about?\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("Ja, genau, korrekt!\nGenau das meine ich!\p");
#else
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("Yes, that's exactly it!\nThat's what I meant.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("Mit anderen Worten…\nJa! Das stimmt!\p");
#else
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("In other words…\nYes! That's right!\p");
#endif

static const u8 *const sChatReactionTexts[GENDER_COUNT][4] = {
    {
        sText_LearnedSomethingMale,
        sText_ThatsFunnyMale,
        sText_RandomChatMale1,
        sText_RandomChatMale2
    },
    {
        sText_LearnedSomethingFemale,
        sText_ThatsFunnyFemale,
        sText_RandomChatFemale1,
        sText_RandomChatFemale2
    }
};

#if GERMAN
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("Ich zeige zur Begrüßung meinen\nTrainerpass.\p");
#else
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("I'm just showing my TRAINER CARD\nas my way of greeting.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("Ich hoffe, ich lerne dich\nbesser kennen!\p");
#else
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("I hope I get to know you better!\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("Wir zeigen uns die Trainerpässe,\num uns bekannt zu machen.\p");
#else
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("We're showing each other our\nTRAINER CARDS to get acquainted.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("Angenehm!\nDu bist mir nicht mehr fremd!\p");
#else
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("Glad to meet you.\nPlease don't be a stranger!\p");
#endif

static const u8 *const sTrainerCardReactionTexts[GENDER_COUNT][2] = {
    {
        sText_ShowedTrainerCardMale1,
        sText_ShowedTrainerCardMale2
    },
    {
        sText_ShowedTrainerCardFemale1,
        sText_ShowedTrainerCardFemale2
    }
};

#if GERMAN
ALIGNED(4) static const u8 sText_MaleTraded1[] = _("Yo! Dieses Pokémon\nwollte ich immer haben!\p");
#else
ALIGNED(4) static const u8 sText_MaleTraded1[] = _("Yeahah!\nI really wanted this POKéMON!\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("Endlich konnte ich in einem\nTausch das langersehnte\lPokémon bekommen.\p");
#else
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("Finally, a trade got me that\nPOKéMON I'd wanted a long time.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("Ich tausche gerade Pokémon.\p");
#else
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("I'm trading POKéMON right now.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("Endlich konnte ich in einem\nTausch das langersehnte\lPokémon bekommen.\p");
#else
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("I finally got that POKéMON I\nwanted in a trade!\p");
#endif

static const u8 *const sTradeReactionTexts[GENDER_COUNT][4] = {
    {
        sText_MaleTraded1,
        sText_MaleTraded2
    },
    {
        sText_FemaleTraded1,
        sText_FemaleTraded2
    }
};

#if GERMAN
ALIGNED(4) static const u8 sText_XCheckedTradingBoard[] = _("{STR_VAR_1} schaut auf die\nTauschliste.\p");
#else
ALIGNED(4) static const u8 sText_XCheckedTradingBoard[] = _("{STR_VAR_1} checked the\nTRADING BOARD.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_RegisterMonAtTradingBoard[] = _("Tauschliste\pSchreib dein Pokémon auf die\nListe und biete es zum Tausch an.\pMöchtest du ein Pokémon\nauf die Liste schreiben?");
#else
ALIGNED(4) static const u8 sText_RegisterMonAtTradingBoard[] = _("Welcome to the TRADING BOARD.\pYou may register your POKéMON\nand offer it up for a trade.\pWould you like to register one of\nyour POKéMON?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_TradingBoardInfo[] = _("Auf dieser Tauschliste werden\nPokémon zum Tausch angeboten.\pDu musst nur ein Pokémon\nauf die Liste schreiben.\pEventuell bietet ein anderer\nTrainer ein Pkmn aus seinem\lTeam zum Austausch an.\lWir hoffen, dass du regen\lGebrauch von der Liste machst\lund mit vielen Trainern tauschst.\pMöchtest du ein Pokémon\nauf die Liste schreiben?");
#else
ALIGNED(4) static const u8 sText_TradingBoardInfo[] = _("This TRADING BOARD is used for\n"
                                                        "offering a POKéMON for a trade.\p"
                                                        "All you need to do is register a\n"
                                                        "POKéMON for a trade.\p"
                                                        "Another TRAINER may offer a party\n"
                                                        "POKéMON in return for the trade.\p"
                                                        "We hope you will register POKéMON\n"
                                                        "and trade them with many, many\l"
                                                        "other TRAINERS.\p"
                                                        "Would you like to register one of\nyour POKéMON?");
#endif
ALIGNED(4) static const u8 sText_ThankYouForRegistering[] = _("We have registered your POKéMON for\ntrade on the TRADING BOARD.\pThank you for using this service!\p"); // unused
ALIGNED(4) static const u8 sText_NobodyHasRegistered[] = _("Nobody has registered any POKéMON\nfor trade on the TRADING BOARD.\p\n"); // unused
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseRequestedMonType[] = _("Bitte wähle das Pokémon, das\ngetauscht werden soll, aus.\n");
#else
ALIGNED(4) static const u8 sText_ChooseRequestedMonType[] = _("Please choose the type of POKéMON\nthat you would like in the trade.\n");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_WhichMonWillYouOffer[] = _("Welches Pokémon aus deinem\nTeam möchtest du tauschen?\p");
#else
ALIGNED(4) static const u8 sText_WhichMonWillYouOffer[] = _("Which of your party POKéMON will\nyou offer in trade?\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_RegistrationCanceled[] = _("Listeneintrag wurde zurückgenommen.\p");
#else
ALIGNED(4) static const u8 sText_RegistrationCanceled[] = _("Registration has been canceled.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_RegistrationCompleted[] = _("Listeneintrag wurde abgeschlossen.\p");
#else
ALIGNED(4) static const u8 sText_RegistrationCompleted[] = _("Registration has been completed.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_TradeCanceled[] = _("Der Tausch wurde abgebrochen.\p");
#else
ALIGNED(4) static const u8 sText_TradeCanceled[] = _("The trade has been canceled.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_CancelRegistrationOfMon[] = _("{STR_VAR_1} mit Level {STR_VAR_2} von der\nListe streichen?");
#else
ALIGNED(4) static const u8 sText_CancelRegistrationOfMon[] = _("Cancel the registration of your\nLv. {STR_VAR_2} {STR_VAR_1}?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_CancelRegistrationOfEgg[] = _("Das Ei von der Liste streichen?");
#else
ALIGNED(4) static const u8 sText_CancelRegistrationOfEgg[] = _("Cancel the registration of your\nEGG?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_RegistrationCanceled2[] = _("Die Streichung wurde vorgenommen.\p");
#else
ALIGNED(4) static const u8 sText_RegistrationCanceled2[] = _("The registration has been canceled.\p");
#endif
ALIGNED(4) static const u8 sText_TradeTrainersWillBeListed[] = _("TRAINERS wishing to make a trade\nwill be listed."); // unused
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith2[] = _("Wähle einen Trainer zum\nTauschen aus.");
#else
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith2[] = _("Please choose the TRAINER with whom\nyou would like to trade POKéMON.");
#endif // unused
#if GERMAN
ALIGNED(4) static const u8 sText_AskTrainerToMakeTrade[] = _("Möchtest du {STR_VAR_1} nach einem\nTausch fragen?");
#else
ALIGNED(4) static const u8 sText_AskTrainerToMakeTrade[] = _("Would you like to ask {STR_VAR_1} to\nmake a trade?");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer2[] = _("Warten auf eine Antwort\ndes anderen Trainers…");
#else
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer2[] = _("Awaiting a response from\nthe other TRAINER…");
#endif // unused
ALIGNED(4) static const u8 sText_NotRegisteredAMonForTrade[] = _("You have not registered a POKéMON\nfor trading.\p"); // unused
#if GERMAN
ALIGNED(4) static const u8 sText_DontHaveTypeTrainerWants[] = _("Du hast kein Pokémon der\nElementklasse {STR_VAR_2}, das\l{STR_VAR_1} haben möchte.\p");
#else
ALIGNED(4) static const u8 sText_DontHaveTypeTrainerWants[] = _("You don't have a {STR_VAR_2}-type\nPOKéMON that {STR_VAR_1} wants.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_DontHaveEggTrainerWants[] = _("Du hast kein Ei, das {STR_VAR_1}\nhaben möchte.\p");
#else
ALIGNED(4) static const u8 sText_DontHaveEggTrainerWants[] = _("You don't have an EGG that\n{STR_VAR_1} wants.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerCantTradeForYourMon[] = _("{STR_VAR_1} kann momentan dein\nPokémon nicht tauschen.\p");
#else
ALIGNED(4) static const u8 sText_PlayerCantTradeForYourMon[] = _("{STR_VAR_1} can't make a trade for\nyour POKéMON right now.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_CantTradeForPartnersMon[] = _("Du kannst jetzt nicht mit\n{STR_VAR_1} Pokémon tauschen.\p");
#else
ALIGNED(4) static const u8 sText_CantTradeForPartnersMon[] = _("You can't make a trade for\n{STR_VAR_1}'s POKéMON right now.\p");
#endif

// Unused
static const u8 *const sCantTradeMonTexts[] = {
    sText_PlayerCantTradeForYourMon,
    sText_CantTradeForPartnersMon
};

#if GERMAN
ALIGNED(4) static const u8 sText_TradeOfferRejected[] = _("Dein Tauschangebot wurde\nzurückgewiesen.\p");
#else
ALIGNED(4) static const u8 sText_TradeOfferRejected[] = _("Your trade offer was rejected.\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_EggTrade[] = _("Eiertausch");
#else
ALIGNED(4) static const u8 sText_EggTrade[] = _("EGG TRADE");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseJoinCancel[] = _("{DPAD_UPDOWN}Wahl {A_BUTTON}Beitreten {B_BUTTON}Zurück");
#else
ALIGNED(4) static const u8 sText_ChooseJoinCancel[] = _("{DPAD_UPDOWN}CHOOSE  {A_BUTTON}JOIN  {B_BUTTON}CANCEL");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseTrainer[] = _("Wähle einen Trainer!");
#else
ALIGNED(4) static const u8 sText_ChooseTrainer[] = _("Please choose a TRAINER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseTrainerSingleBattle[] = _("Wähle einen Trainer für\neinen Einzelkampf aus.");
#else
ALIGNED(4) static const u8 sText_ChooseTrainerSingleBattle[] = _("Please choose a TRAINER for\na SINGLE BATTLE.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseTrainerDoubleBattle[] = _("Wähle einen Trainer für\neinen Doppelkampf aus.");
#else
ALIGNED(4) static const u8 sText_ChooseTrainerDoubleBattle[] = _("Please choose a TRAINER for\na DOUBLE BATTLE.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderMultiBattle[] = _("Wähle einen Leiter\nfür einen Multikampf aus.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderMultiBattle[] = _("Please choose the LEADER\nfor a MULTI BATTLE.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith[] = _("Wähle einen Trainer zum\nTauschen aus.");
#else
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith[] = _("Please choose the TRAINER to\ntrade with.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderCards[] = _("Wähle einen Trainer, der\nWunderkarten teilt, aus.");
#else
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderCards[] = _("Please choose the TRAINER who is\nsharing WONDER CARDS.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderNews[] = _("Wähle einen Trainer, der\nWundernews teilt, aus.");
#else
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderNews[] = _("Please choose the TRAINER who is\nsharing WONDER NEWS.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderPokemonJump[] = _("Springe mit kleinen Pokémon!\nWähle einen Leiter.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderPokemonJump[] = _("Jump with mini POKéMON!\nPlease choose the LEADER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderBerryCrush[] = _("Beerenmühle!\nWähle einen Leiter!");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderBerryCrush[] = _("BERRY CRUSH!\nPlease choose the LEADER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderBerryPicking[] = _("Beerenernte Mit Dodri!\nWähle einen Leiter.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderBerryPicking[] = _("DODRIO BERRY-PICKING!\nPlease choose the LEADER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderBerryBlender[] = _("Beerenmixer!\nWähle einen Leiter.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderBerryBlender[] = _("BERRY BLENDER!\nPlease choose the LEADER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderRecordCorner[] = _("Statistiktausch!\nWähle einen Leiter.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderRecordCorner[] = _("RECORD CORNER!\nPlease choose the LEADER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderCoolContest[] = _("Coolness-Wettbewerb!\nWähle einen Leiter.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderCoolContest[] = _("COOLNESS CONTEST!\nPlease choose the LEADER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderBeautyContest[] = _("Schönheitswettbewerb!\nWähle einen Leiter.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderBeautyContest[] = _("BEAUTY CONTEST!\nPlease choose the LEADER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderCuteContest[] = _("Anmut-Wettbewerb!\nWähle einen Leiter.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderCuteContest[] = _("CUTENESS CONTEST!\nPlease choose the LEADER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderSmartContest[] = _("Klugheitswettbewerb!\nWähle einen Leiter.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderSmartContest[] = _("SMARTNESS CONTEST!\nPlease choose the LEADER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderToughContest[] = _("Stärke-Wettbewerb!\nWähle einen Leiter.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderToughContest[] = _("TOUGHNESS CONTEST!\nPlease choose the LEADER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderBattleTowerLv50[] = _("Duellturm Level 50!\nWähle einen Leiter.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderBattleTowerLv50[] = _("BATTLE TOWER LEVEL 50!\nPlease choose the LEADER.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ChooseLeaderBattleTowerOpenLv[] = _("Duellturm Offene Kämpfe!\nWähle einen Leiter.");
#else
ALIGNED(4) static const u8 sText_ChooseLeaderBattleTowerOpenLv[] = _("BATTLE TOWER OPEN LEVEL!\nPlease choose the LEADER.");
#endif

static const u8 *const sChooseTrainerTexts[NUM_LINK_GROUP_TYPES] =
{
    [LINK_GROUP_SINGLE_BATTLE]     = sText_ChooseTrainerSingleBattle,
    [LINK_GROUP_DOUBLE_BATTLE]     = sText_ChooseTrainerDoubleBattle,
    [LINK_GROUP_MULTI_BATTLE]      = sText_ChooseLeaderMultiBattle,
    [LINK_GROUP_TRADE]             = sText_ChooseTrainerToTradeWith,
    [LINK_GROUP_POKEMON_JUMP]      = sText_ChooseLeaderPokemonJump,
    [LINK_GROUP_BERRY_CRUSH]       = sText_ChooseLeaderBerryCrush,
    [LINK_GROUP_BERRY_PICKING]     = sText_ChooseLeaderBerryPicking,
    [LINK_GROUP_WONDER_CARD]       = sText_ChooseTrainerToShareWonderCards,
    [LINK_GROUP_WONDER_NEWS]       = sText_ChooseTrainerToShareWonderNews,
    [LINK_GROUP_UNION_ROOM_RESUME] = NULL,
    [LINK_GROUP_UNION_ROOM_INIT]   = NULL,
    [LINK_GROUP_UNK_11]            = NULL,
    [LINK_GROUP_RECORD_CORNER]     = sText_ChooseLeaderRecordCorner,
    [LINK_GROUP_BERRY_BLENDER]     = sText_ChooseLeaderBerryBlender,
    [LINK_GROUP_UNK_14]            = NULL,
    [LINK_GROUP_COOL_CONTEST]      = sText_ChooseLeaderCoolContest,
    [LINK_GROUP_BEAUTY_CONTEST]    = sText_ChooseLeaderBeautyContest,
    [LINK_GROUP_CUTE_CONTEST]      = sText_ChooseLeaderCuteContest,
    [LINK_GROUP_SMART_CONTEST]     = sText_ChooseLeaderSmartContest,
    [LINK_GROUP_TOUGH_CONTEST]     = sText_ChooseLeaderToughContest,
    [LINK_GROUP_BATTLE_TOWER]      = sText_ChooseLeaderBattleTowerLv50,
    [LINK_GROUP_BATTLE_TOWER_OPEN] = sText_ChooseLeaderBattleTowerOpenLv
};

#if GERMAN
ALIGNED(4) static const u8 sText_SearchingForWirelessSystemWait[] = _("Nach Drahtlosem Kommunikations-\nsystem suchen…");
#else
ALIGNED(4) static const u8 sText_SearchingForWirelessSystemWait[] = _("Searching for a WIRELESS\nCOMMUNICATION SYSTEM. Wait...");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("Für einen Doppelkampf brauchst du\nmindestens zwei Pokémon.\p");
#else
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("For a DOUBLE BATTLE, you must have\nat least two POKéMON.\p");
#endif // Unused
#if GERMAN
ALIGNED(4) static const u8 sText_AwaitingPlayersResponse[] = _("Antwort von {STR_VAR_1} wird erwartet…");
#else
ALIGNED(4) static const u8 sText_AwaitingPlayersResponse[] = _("Awaiting {STR_VAR_1}'s response…");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("{STR_VAR_1} wurde gebeten, dich als\nMitglied aufzunehmen. Bitte warten!");
#else
ALIGNED(4) static const u8 sText_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("{STR_VAR_1} has been asked to register\nyou as a member. Please wait.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_AwaitingResponseFromWirelessSystem[] = _("Antwort von Drahtlosem Kommunika-\ntions-System wird erwartet.");
#else
ALIGNED(4) static const u8 sText_AwaitingResponseFromWirelessSystem[] = _("Awaiting a response from the\nWIRELESS COMMUNICATION SYSTEM.");
#endif
ALIGNED(4) static const u8 sText_PleaseWaitForOtherTrainersToGather[] = _("Please wait for other TRAINERS to\ngather and get ready."); // Unused
#if GERMAN
ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("Es werden momentan keine Karten\ngeteilt.");
#else
ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("No CARDS appear to be shared \nright now.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("Es werden momentan keine News\ngeteilt.");
#else
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("No NEWS appears to be shared\nright now.");
#endif

static const u8 *const sNoWonderSharedTexts[] = {
    sText_NoCardsSharedRightNow,
    sText_NoNewsSharedRightNow
};

#if GERMAN
ALIGNED(4) static const u8 sText_Battle[] = _("Kampf");
#else
ALIGNED(4) static const u8 sText_Battle[] = _("BATTLE");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_Chat2[] = _("Chat");
#else
ALIGNED(4) static const u8 sText_Chat2[] = _("CHAT");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_Greetings[] = _("Empfang");
#else
ALIGNED(4) static const u8 sText_Greetings[] = _("GREETINGS");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_Exit[] = _("Beenden");
#else
ALIGNED(4) static const u8 sText_Exit[] = _("EXIT");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_Exit2[] = _("Beenden");
#else
ALIGNED(4) static const u8 sText_Exit2[] = _("EXIT");
#endif
ALIGNED(4) static const u8 sText_Info[] = _("INFO");
#if GERMAN
ALIGNED(4) static const u8 sText_NameWantedOfferLv[] = _("Name{CLEAR_TO 60}Ges.{CLEAR_TO 110}Offerten{CLEAR_TO 198}Lv.");
#else
ALIGNED(4) static const u8 sText_NameWantedOfferLv[] = _("NAME{CLEAR_TO 60}WANTED{CLEAR_TO 110}OFFER{CLEAR_TO 198}LV.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_SingleBattle[] = _("Einzelkampf");
#else
ALIGNED(4) static const u8 sText_SingleBattle[] = _("SINGLE BATTLE");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_DoubleBattle[] = _("Doppelkampf");
#else
ALIGNED(4) static const u8 sText_DoubleBattle[] = _("DOUBLE BATTLE");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_MultiBattle[] = _("Multikampf");
#else
ALIGNED(4) static const u8 sText_MultiBattle[] = _("MULTI BATTLE");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PokemonTrades[] = _("Pokémon-Tausch");
#else
ALIGNED(4) static const u8 sText_PokemonTrades[] = _("POKéMON TRADES");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_Chat[] = _("Chat");
#else
ALIGNED(4) static const u8 sText_Chat[] = _("CHAT");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_Cards[] = _("Karten");
#else
ALIGNED(4) static const u8 sText_Cards[] = _("CARDS");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_WonderCards[] = _("Wunderkarten");
#else
ALIGNED(4) static const u8 sText_WonderCards[] = _("WONDER CARDS");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_WonderNews[] = _("Wundernews");
#else
ALIGNED(4) static const u8 sText_WonderNews[] = _("WONDER NEWS");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_PokemonJump[] = _("Pokémon-Sprung");
#else
ALIGNED(4) static const u8 sText_PokemonJump[] = _("POKéMON JUMP");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_BerryCrush[] = _("Beerenmühle");
#else
ALIGNED(4) static const u8 sText_BerryCrush[] = _("BERRY CRUSH");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_BerryPicking[] = _("Beerenernte");
#else
ALIGNED(4) static const u8 sText_BerryPicking[] = _("BERRY-PICKING");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_Search[] = _("Suche");
#else
ALIGNED(4) static const u8 sText_Search[] = _("SEARCH");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_BerryBlender[] = _("Beerenmixer");
#else
ALIGNED(4) static const u8 sText_BerryBlender[] = _("BERRY BLENDER");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_RecordCorner[] = _("Statistiktausch");
#else
ALIGNED(4) static const u8 sText_RecordCorner[] = _("RECORD CORNER");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_CoolContest[] = _("Coolness-Wettbewerb");
#else
ALIGNED(4) static const u8 sText_CoolContest[] = _("COOL CONTEST");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_BeautyContest[] = _("Schönheitswettbewerb");
#else
ALIGNED(4) static const u8 sText_BeautyContest[] = _("BEAUTY CONTEST");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_CuteContest[] = _("Anmut-Wettbewerb");
#else
ALIGNED(4) static const u8 sText_CuteContest[] = _("CUTE CONTEST");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_SmartContest[] = _("Klugheitswettbewerb");
#else
ALIGNED(4) static const u8 sText_SmartContest[] = _("SMART CONTEST");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ToughContest[] = _("Stärke-Wettbewerb");
#else
ALIGNED(4) static const u8 sText_ToughContest[] = _("TOUGH CONTEST");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_BattleTowerLv50[] = _("Duellturm Lv. 50");
#else
ALIGNED(4) static const u8 sText_BattleTowerLv50[] = _("BATTLE TOWER LV. 50");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_BattleTowerOpenLv[] = _("Duellturm Offene Kämpfe");
#else
ALIGNED(4) static const u8 sText_BattleTowerOpenLv[] = _("BATTLE TOWER OPEN LEVEL");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ItsNormalCard[] = _("Es ist ein Normal Pass.");
#else
ALIGNED(4) static const u8 sText_ItsNormalCard[] = _("It's a NORMAL CARD.");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ItsBronzeCard[] = _("Es ist ein Bronze Pass.");
#else
ALIGNED(4) static const u8 sText_ItsBronzeCard[] = _("It's a BRONZE CARD!");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ItsCopperCard[] = _("Es ist ein Kupferrot Pass.");
#else
ALIGNED(4) static const u8 sText_ItsCopperCard[] = _("It's a COPPER CARD!");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ItsSilverCard[] = _("Es ist ein Silber Pass.");
#else
ALIGNED(4) static const u8 sText_ItsSilverCard[] = _("It's a SILVER CARD!");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_ItsGoldCard[] = _("Es ist ein Gold Pass.");
#else
ALIGNED(4) static const u8 sText_ItsGoldCard[] = _("It's a GOLD CARD!");
#endif

static const u8 *const sCardColorTexts[] = {
    sText_ItsNormalCard,
    sText_ItsBronzeCard,
    sText_ItsCopperCard,
    sText_ItsSilverCard,
    sText_ItsGoldCard
};

#if GERMAN
ALIGNED(4) static const u8 sText_TrainerCardInfoPage1[] = _("Das ist der Trainerpass\nvon {DYNAMIC 0} {DYNAMIC 1}…\l{DYNAMIC 2}\pPokédex: {DYNAMIC 3}\nZeit:    {DYNAMIC 4}:{DYNAMIC 5}\p");
#else
ALIGNED(4) static const u8 sText_TrainerCardInfoPage1[] = _("This is {DYNAMIC 0} {DYNAMIC 1}'s\nTRAINER CARD…\l{DYNAMIC 2}\pPOKéDEX: {DYNAMIC 3}\nTIME:    {DYNAMIC 4}:{DYNAMIC 5}\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_TrainerCardInfoPage2[] = _("Kämpfe: Siege {DYNAMIC 0} Niederl. {DYNAMIC 2}\nTausche: {DYNAMIC 3}\p“{DYNAMIC 4} {DYNAMIC 5}\n{DYNAMIC 6} {DYNAMIC 7}”\p");
#else
ALIGNED(4) static const u8 sText_TrainerCardInfoPage2[] = _("BATTLES: WINS: {DYNAMIC 0}  LOSSES: {DYNAMIC 2}\nTRADES: {DYNAMIC 3}\p“{DYNAMIC 4} {DYNAMIC 5}\n{DYNAMIC 6} {DYNAMIC 7}”\p");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 1}: Schön, dich zu treffen!{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 1}: Glad to have met you!{PAUSE 60}");
#endif
#if GERMAN
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 1}: Schön, dich zu treffen!{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 1}: Glad to meet you!{PAUSE 60}");
#endif

static const u8 *const sGladToMeetYouTexts[GENDER_COUNT] = {
    sText_GladToMeetYouMale,
    sText_GladToMeetYouFemale
};

#if GERMAN
ALIGNED(4) static const u8 sText_FinishedCheckingPlayersTrainerCard[] = _("Der Trainerpass von\n{DYNAMIC 1} wurde überprüft.{PAUSE 60}");
#else
ALIGNED(4) static const u8 sText_FinishedCheckingPlayersTrainerCard[] = _("Finished checking {DYNAMIC 1}'s\nTRAINER CARD.{PAUSE 60}");
#endif

static const u8 *const sLinkGroupActivityNameTexts[] = {
    [ACTIVITY_NONE]              = sText_EmptyString,
    [ACTIVITY_BATTLE_SINGLE]     = sText_SingleBattle,
    [ACTIVITY_BATTLE_DOUBLE]     = sText_DoubleBattle,
    [ACTIVITY_BATTLE_MULTI]      = sText_MultiBattle,
    [ACTIVITY_TRADE]             = sText_PokemonTrades,
    [ACTIVITY_CHAT]              = sText_Chat,
    [ACTIVITY_WONDER_CARD_DUP]   = sText_WonderCards,
    [ACTIVITY_WONDER_NEWS_DUP]   = sText_WonderNews,
    [ACTIVITY_CARD]              = sText_Cards,
    [ACTIVITY_POKEMON_JUMP]      = sText_PokemonJump,
    [ACTIVITY_BERRY_CRUSH]       = sText_BerryCrush,
    [ACTIVITY_BERRY_PICK]        = sText_BerryPicking,
    [ACTIVITY_SEARCH]            = sText_Search,
    [ACTIVITY_SPIN_TRADE]        = sText_EmptyString,
    [ACTIVITY_BATTLE_TOWER_OPEN] = sText_BattleTowerOpenLv,
    [ACTIVITY_RECORD_CORNER]     = sText_RecordCorner,
    [ACTIVITY_BERRY_BLENDER]     = sText_BerryBlender,
    [ACTIVITY_ACCEPT]            = sText_EmptyString,
    [ACTIVITY_DECLINE]           = sText_EmptyString,
    [ACTIVITY_NPCTALK]           = sText_EmptyString,
    [ACTIVITY_PLYRTALK]          = sText_EmptyString,
    [ACTIVITY_WONDER_CARD]       = sText_WonderCards,
    [ACTIVITY_WONDER_NEWS]       = sText_WonderNews,
    [ACTIVITY_CONTEST_COOL]      = sText_CoolContest,
    [ACTIVITY_CONTEST_BEAUTY]    = sText_BeautyContest,
    [ACTIVITY_CONTEST_CUTE]      = sText_CuteContest,
    [ACTIVITY_CONTEST_SMART]     = sText_SmartContest,
    [ACTIVITY_CONTEST_TOUGH]     = sText_ToughContest,
    [ACTIVITY_BATTLE_TOWER]      = sText_BattleTowerLv50
};

static const struct WindowTemplate sWindowTemplate_BButtonCancel = {
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 0,
    .width = 30,
    .height = 2,
    .paletteNum = 15,
    .baseBlock = 0x0008
};

// Minimum and maximum number of players for a link group
// A minimum of 0 means the min and max are equal
#define LINK_GROUP_CAPACITY(min, max) (((min) << 12) | ((max) << 8))
#define GROUP_MAX(capacity) (capacity & 0x0F)
#define GROUP_MIN(capacity) (capacity >> 4)
#define GROUP_MIN2(capacity) (capacity & 0xF0) // Unnecessary to have both, but needed to match

static const u32 sLinkGroupToActivityAndCapacity[NUM_LINK_GROUP_TYPES] = {
    [LINK_GROUP_SINGLE_BATTLE]     = ACTIVITY_BATTLE_SINGLE     | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_DOUBLE_BATTLE]     = ACTIVITY_BATTLE_DOUBLE     | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_MULTI_BATTLE]      = ACTIVITY_BATTLE_MULTI      | LINK_GROUP_CAPACITY(0, 4),
    [LINK_GROUP_TRADE]             = ACTIVITY_TRADE             | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_POKEMON_JUMP]      = ACTIVITY_POKEMON_JUMP      | LINK_GROUP_CAPACITY(2, 5),
    [LINK_GROUP_BERRY_CRUSH]       = ACTIVITY_BERRY_CRUSH       | LINK_GROUP_CAPACITY(2, 5),
    [LINK_GROUP_BERRY_PICKING]     = ACTIVITY_BERRY_PICK        | LINK_GROUP_CAPACITY(3, 5),
    [LINK_GROUP_WONDER_CARD]       = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_WONDER_NEWS]       = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_UNION_ROOM_RESUME] = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_UNION_ROOM_INIT]   = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_UNK_11]            = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_RECORD_CORNER]     = ACTIVITY_RECORD_CORNER     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_BERRY_BLENDER]     = ACTIVITY_BERRY_BLENDER     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_UNK_14]            = ACTIVITY_NONE              | LINK_GROUP_CAPACITY(0, 0),
    [LINK_GROUP_COOL_CONTEST]      = ACTIVITY_CONTEST_COOL      | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_BEAUTY_CONTEST]    = ACTIVITY_CONTEST_BEAUTY    | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_CUTE_CONTEST]      = ACTIVITY_CONTEST_CUTE      | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_SMART_CONTEST]     = ACTIVITY_CONTEST_SMART     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_TOUGH_CONTEST]     = ACTIVITY_CONTEST_TOUGH     | LINK_GROUP_CAPACITY(2, 4),
    [LINK_GROUP_BATTLE_TOWER]      = ACTIVITY_BATTLE_TOWER      | LINK_GROUP_CAPACITY(0, 2),
    [LINK_GROUP_BATTLE_TOWER_OPEN] = ACTIVITY_BATTLE_TOWER_OPEN | LINK_GROUP_CAPACITY(0, 2)
};

static const struct WindowTemplate sWindowTemplate_PlayerList = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 3,
    .width = 13,
    .height = 8,
    .paletteNum = 15,
    .baseBlock = 0x0044
};

static const struct WindowTemplate sWindowTemplate_5PlayerList = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 3,
    .width = 13,
    .height = 10,
    .paletteNum = 15,
    .baseBlock = 0x0044
};

static const struct WindowTemplate sWindowTemplate_NumPlayerMode = {
    .bg = 0,
    .tilemapLeft = 16,
    .tilemapTop = 3,
    .width = 7,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x00c6
};

static const struct ListMenuItem sPossibleGroupMembersListMenuItems[] = {
    { sText_EmptyString, 0 },
    { sText_EmptyString, 1 },
    { sText_EmptyString, 2 },
    { sText_EmptyString, 3 },
    { sText_EmptyString, 4 }
};

static const struct ListMenuTemplate sListMenuTemplate_PossibleGroupMembers = {
    .items = sPossibleGroupMembersListMenuItems,
    .moveCursorFunc = NULL,
    .itemPrintFunc = ItemPrintFunc_PossibleGroupMembers,
    .totalItems = ARRAY_COUNT(sPossibleGroupMembersListMenuItems),
    .maxShowed = 5,
    .windowId = 0,
    .header_X = 0,
    .item_X = 0,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_INVISIBLE
};

static const struct WindowTemplate sWindowTemplate_GroupList = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 3,
    .width = 17,
    .height = 10,
    .paletteNum = 15,
    .baseBlock = 0x0044
};

static const struct WindowTemplate sWindowTemplate_PlayerNameAndId = {
    .bg = 0,
    .tilemapLeft = 20,
    .tilemapTop = 3,
    .width = 7,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x00ee
};

static const struct ListMenuItem sUnionRoomGroupsMenuItems[] = {
    { sText_EmptyString,  0 },
    { sText_EmptyString,  1 },
    { sText_EmptyString,  2 },
    { sText_EmptyString,  3 },
    { sText_EmptyString,  4 },
    { sText_EmptyString,  5 },
    { sText_EmptyString,  6 },
    { sText_EmptyString,  7 },
    { sText_EmptyString,  8 },
    { sText_EmptyString,  9 },
    { sText_EmptyString, 10 },
    { sText_EmptyString, 11 },
    { sText_EmptyString, 12 },
    { sText_EmptyString, 13 },
    { sText_EmptyString, 14 },
    { sText_EmptyString, 15 }
};

static const struct ListMenuTemplate sListMenuTemplate_UnionRoomGroups = {
    .items = sUnionRoomGroupsMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = ListMenuItemPrintFunc_UnionRoomGroups,
    .totalItems = ARRAY_COUNT(sUnionRoomGroupsMenuItems),
    .maxShowed = 5,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_MULTIPLE_SCROLL_DPAD,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_InviteToActivity = {
    .bg = 0,
    .tilemapLeft = 20,
    .tilemapTop = 5,
    .width = 16,
    .height = 8,
    .paletteNum = 15,
    .baseBlock = 0x0001
};

static const struct ListMenuItem sInviteToActivityMenuItems[] = {
    { sText_Greetings, ACTIVITY_CARD | LINK_GROUP_CAPACITY(0, 2)},
    { sText_Battle,    ACTIVITY_BATTLE_SINGLE | IN_UNION_ROOM | LINK_GROUP_CAPACITY(0, 2)},
    { sText_Chat2,     ACTIVITY_CHAT | IN_UNION_ROOM | LINK_GROUP_CAPACITY(0, 2)},
    { sText_Exit,      ACTIVITY_NONE | IN_UNION_ROOM }
};

static const struct ListMenuTemplate sListMenuTemplate_InviteToActivity = {
    .items = sInviteToActivityMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = ARRAY_COUNT(sInviteToActivityMenuItems),
    .maxShowed = 4,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_RegisterForTrade = {
    .bg = 0,
    .tilemapLeft = 18,
    .tilemapTop = 7,
    .width = 16,
    .height = 6,
    .paletteNum = 15,
    .baseBlock = 0x0001
};

static const struct ListMenuItem sRegisterForTradeListMenuItems[] = {
    { gText_Register, 1 },
    { sText_Info, 2 },
    { sText_Exit, 3 }
};

static const struct ListMenuTemplate sListMenuTemplate_RegisterForTrade = {
    .items = sRegisterForTradeListMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = ARRAY_COUNT(sRegisterForTradeListMenuItems),
    .maxShowed = 3,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_TradingBoardRequestType = {
    .bg = 0,
    .tilemapLeft = 20,
    .tilemapTop = 1,
    .width = 16,
    .height = 12,
    .paletteNum = 15,
    .baseBlock = 0x0001
};

// Subtract two from the total type count to handle in-battle types not for display
static const struct ListMenuItem sTradingBoardTypes[NUMBER_OF_MON_TYPES - 2] = {
    { gTypesInfo[TYPE_NORMAL].name,   TYPE_NORMAL         },
    { gTypesInfo[TYPE_FIRE].name,     TYPE_FIRE           },
    { gTypesInfo[TYPE_WATER].name,    TYPE_WATER          },
    { gTypesInfo[TYPE_ELECTRIC].name, TYPE_ELECTRIC       },
    { gTypesInfo[TYPE_GRASS].name,    TYPE_GRASS          },
    { gTypesInfo[TYPE_ICE].name,      TYPE_ICE            },
    { gTypesInfo[TYPE_GROUND].name,   TYPE_GROUND         },
    { gTypesInfo[TYPE_ROCK].name,     TYPE_ROCK           },
    { gTypesInfo[TYPE_FLYING].name,   TYPE_FLYING         },
    { gTypesInfo[TYPE_PSYCHIC].name,  TYPE_PSYCHIC        },
    { gTypesInfo[TYPE_FIGHTING].name, TYPE_FIGHTING       },
    { gTypesInfo[TYPE_POISON].name,   TYPE_POISON         },
    { gTypesInfo[TYPE_BUG].name,      TYPE_BUG            },
    { gTypesInfo[TYPE_GHOST].name,    TYPE_GHOST          },
    { gTypesInfo[TYPE_DRAGON].name,   TYPE_DRAGON         },
    { gTypesInfo[TYPE_STEEL].name,    TYPE_STEEL          },
    { gTypesInfo[TYPE_DARK].name,     TYPE_DARK           },
    { gTypesInfo[TYPE_FAIRY].name,    TYPE_FAIRY          },
    { sText_Exit,                NUMBER_OF_MON_TYPES }
};

static const struct ListMenuTemplate sMenuTemplate_TradingBoardRequestType = {
    .items = sTradingBoardTypes,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = ARRAY_COUNT(sTradingBoardTypes),
    .maxShowed = 6,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct WindowTemplate sWindowTemplate_TradingBoardHeader = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = 28,
    .height = 2,
    .paletteNum = 13,
    .baseBlock = 0x0001
};

static const struct WindowTemplate sWindowTemplate_TradingBoardMain = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 5,
    .width = 28,
    .height = 12,
    .paletteNum = 13,
    .baseBlock = 0x0039
};

static const struct ListMenuItem sTradeBoardListMenuItems[] = {
    { sText_EmptyString, LIST_HEADER },
    { sText_EmptyString,  0 },
    { sText_EmptyString,  1 },
    { sText_EmptyString,  2 },
    { sText_EmptyString,  3 },
    { sText_EmptyString,  4 },
    { sText_EmptyString,  5 },
    { sText_EmptyString,  6 },
    { sText_EmptyString,  7 },
    { sText_Exit2,  8 }
};

static const struct ListMenuTemplate sTradeBoardListMenuTemplate = {
    .items = sTradeBoardListMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = TradeBoardListMenuItemPrintFunc,
    .totalItems = ARRAY_COUNT(sTradeBoardListMenuItems),
    .maxShowed = 6,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 14,
    .fillValue = 15,
    .cursorShadowPal = 13,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

// Unused
static const struct WindowTemplate sWindowTemplate_Unused = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 5,
    .width = 28,
    .height = 12,
    .paletteNum = 13,
    .baseBlock = 0x0039
};

static const struct ListMenuItem sEmptyListMenuItems[] = {
    { sText_EmptyString,  0 },
    { sText_EmptyString,  1 },
    { sText_EmptyString,  2 },
    { sText_EmptyString,  3 },
    { sText_EmptyString,  4 },
    { sText_EmptyString,  5 },
    { sText_EmptyString,  6 },
    { sText_EmptyString,  7 },
    { sText_EmptyString,  8 },
    { sText_EmptyString,  9 },
    { sText_EmptyString, 10 },
    { sText_EmptyString, 11 },
    { sText_EmptyString, 12 },
    { sText_EmptyString, 13 },
    { sText_EmptyString, 14 },
    { sText_EmptyString, 15 }
};

// Unused
static const struct ListMenuTemplate sEmptyListMenuTemplate = {
    .items = sEmptyListMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = ItemPrintFunc_EmptyList,
    .totalItems = ARRAY_COUNT(sEmptyListMenuItems),
    .maxShowed = 4,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_MULTIPLE_SCROLL_DPAD,
    .fontId = FONT_NORMAL,
    .cursorKind = CURSOR_BLACK_ARROW
};

static const struct RfuPlayerData sUnionRoomPlayer_DummyRfu = {0};

ALIGNED(4) static const u8 sAcceptedActivityIds_SingleBattle[]    = {ACTIVITY_BATTLE_SINGLE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_DoubleBattle[]    = {ACTIVITY_BATTLE_DOUBLE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_MultiBattle[]     = {ACTIVITY_BATTLE_MULTI, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_Trade[]           = {ACTIVITY_TRADE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_PokemonJump[]     = {ACTIVITY_POKEMON_JUMP, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BerryCrush[]      = {ACTIVITY_BERRY_CRUSH, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BerryPicking[]    = {ACTIVITY_BERRY_PICK, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_WonderCard[]      = {ACTIVITY_WONDER_CARD, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_WonderNews[]      = {ACTIVITY_WONDER_NEWS, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_Resume[]          = {
    IN_UNION_ROOM | ACTIVITY_NONE,
    IN_UNION_ROOM | ACTIVITY_BATTLE_SINGLE,
    IN_UNION_ROOM | ACTIVITY_TRADE,
    IN_UNION_ROOM | ACTIVITY_CHAT,
    IN_UNION_ROOM | ACTIVITY_CARD,
    IN_UNION_ROOM | ACTIVITY_ACCEPT,
    IN_UNION_ROOM | ACTIVITY_DECLINE,
    IN_UNION_ROOM | ACTIVITY_NPCTALK,
    IN_UNION_ROOM | ACTIVITY_PLYRTALK,
    0xff
};
ALIGNED(4) static const u8 sAcceptedActivityIds_Init[]            = {ACTIVITY_SEARCH, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_Unk11[]           = {
    ACTIVITY_BATTLE_SINGLE,
    ACTIVITY_BATTLE_DOUBLE,
    ACTIVITY_BATTLE_MULTI,
    ACTIVITY_TRADE,
    ACTIVITY_POKEMON_JUMP,
    ACTIVITY_BERRY_CRUSH,
    ACTIVITY_BERRY_PICK,
    ACTIVITY_WONDER_CARD,
    ACTIVITY_WONDER_NEWS,
    ACTIVITY_SPIN_TRADE,
    0xff
};
ALIGNED(4) static const u8 sAcceptedActivityIds_RecordCorner[]    = {ACTIVITY_RECORD_CORNER, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BerryBlender[]    = {ACTIVITY_BERRY_BLENDER, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_CoolContest[]     = {ACTIVITY_CONTEST_COOL, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BeautyContest[]   = {ACTIVITY_CONTEST_BEAUTY, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_CuteContest[]     = {ACTIVITY_CONTEST_CUTE, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_SmartContest[]    = {ACTIVITY_CONTEST_SMART, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_ToughContest[]    = {ACTIVITY_CONTEST_TOUGH, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BattleTower[]     = {ACTIVITY_BATTLE_TOWER, 0xff};
ALIGNED(4) static const u8 sAcceptedActivityIds_BattleTowerOpen[] = {ACTIVITY_BATTLE_TOWER_OPEN, 0xff};

static const u8 *const sAcceptedActivityIds[NUM_LINK_GROUP_TYPES] = {
    [LINK_GROUP_SINGLE_BATTLE]     = sAcceptedActivityIds_SingleBattle,
    [LINK_GROUP_DOUBLE_BATTLE]     = sAcceptedActivityIds_DoubleBattle,
    [LINK_GROUP_MULTI_BATTLE]      = sAcceptedActivityIds_MultiBattle,
    [LINK_GROUP_TRADE]             = sAcceptedActivityIds_Trade,
    [LINK_GROUP_POKEMON_JUMP]      = sAcceptedActivityIds_PokemonJump,
    [LINK_GROUP_BERRY_CRUSH]       = sAcceptedActivityIds_BerryCrush,
    [LINK_GROUP_BERRY_PICKING]     = sAcceptedActivityIds_BerryPicking,
    [LINK_GROUP_WONDER_CARD]       = sAcceptedActivityIds_WonderCard,
    [LINK_GROUP_WONDER_NEWS]       = sAcceptedActivityIds_WonderNews,
    [LINK_GROUP_UNION_ROOM_RESUME] = sAcceptedActivityIds_Resume,
    [LINK_GROUP_UNION_ROOM_INIT]   = sAcceptedActivityIds_Init,
    [LINK_GROUP_UNK_11]            = sAcceptedActivityIds_Unk11,
    [LINK_GROUP_RECORD_CORNER]     = sAcceptedActivityIds_RecordCorner,
    [LINK_GROUP_BERRY_BLENDER]     = sAcceptedActivityIds_BerryBlender,
    [LINK_GROUP_UNK_14]            = NULL,
    [LINK_GROUP_COOL_CONTEST]      = sAcceptedActivityIds_CoolContest,
    [LINK_GROUP_BEAUTY_CONTEST]    = sAcceptedActivityIds_BeautyContest,
    [LINK_GROUP_CUTE_CONTEST]      = sAcceptedActivityIds_CuteContest,
    [LINK_GROUP_SMART_CONTEST]     = sAcceptedActivityIds_SmartContest,
    [LINK_GROUP_TOUGH_CONTEST]     = sAcceptedActivityIds_ToughContest,
    [LINK_GROUP_BATTLE_TOWER]      = sAcceptedActivityIds_BattleTower,
    [LINK_GROUP_BATTLE_TOWER_OPEN] = sAcceptedActivityIds_BattleTowerOpen
};

static const u8 sLinkGroupToURoomActivity[NUM_LINK_GROUP_TYPES + 2] =
{
    [LINK_GROUP_SINGLE_BATTLE]     = ACTIVITY_BATTLE_SINGLE,
    [LINK_GROUP_DOUBLE_BATTLE]     = ACTIVITY_BATTLE_DOUBLE,
    [LINK_GROUP_MULTI_BATTLE]      = ACTIVITY_BATTLE_MULTI,
    [LINK_GROUP_TRADE]             = ACTIVITY_TRADE,
    [LINK_GROUP_POKEMON_JUMP]      = ACTIVITY_POKEMON_JUMP,
    [LINK_GROUP_BERRY_CRUSH]       = ACTIVITY_BERRY_CRUSH,
    [LINK_GROUP_BERRY_PICKING]     = ACTIVITY_BERRY_PICK,
    [LINK_GROUP_WONDER_CARD]       = ACTIVITY_WONDER_CARD,
    [LINK_GROUP_WONDER_NEWS]       = ACTIVITY_WONDER_NEWS,
    [LINK_GROUP_UNION_ROOM_RESUME] = ACTIVITY_NONE,
    [LINK_GROUP_UNION_ROOM_INIT]   = ACTIVITY_NONE,
    [LINK_GROUP_UNK_11]            = ACTIVITY_NONE,
    [LINK_GROUP_RECORD_CORNER]     = ACTIVITY_RECORD_CORNER,
    [LINK_GROUP_BERRY_BLENDER]     = ACTIVITY_BERRY_BLENDER,
    [LINK_GROUP_UNK_14]            = ACTIVITY_NONE,
    [LINK_GROUP_COOL_CONTEST]      = ACTIVITY_CONTEST_COOL,
    [LINK_GROUP_BEAUTY_CONTEST]    = ACTIVITY_CONTEST_BEAUTY,
    [LINK_GROUP_CUTE_CONTEST]      = ACTIVITY_CONTEST_CUTE,
    [LINK_GROUP_SMART_CONTEST]     = ACTIVITY_CONTEST_SMART,
    [LINK_GROUP_TOUGH_CONTEST]     = ACTIVITY_CONTEST_TOUGH,
    [LINK_GROUP_BATTLE_TOWER]      = ACTIVITY_BATTLE_TOWER,
    [LINK_GROUP_BATTLE_TOWER_OPEN] = ACTIVITY_BATTLE_TOWER_OPEN
};
