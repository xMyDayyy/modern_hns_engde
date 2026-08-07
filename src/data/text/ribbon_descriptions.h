#if GERMAN
const u8 gRibbonDescriptionPart1_Champion[] = _("Band für unschlagbare");
#else
const u8 gRibbonDescriptionPart1_Champion[] = _("CHAMPION-beating, HALL");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart2_Champion[] = _("Ruhmeshalle-Mitglieder.");
#else
const u8 gRibbonDescriptionPart2_Champion[] = _("OF FAME Member RIBBON");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart1_CoolContest[] = _("Coolness-Wettbewerb");
#else
const u8 gRibbonDescriptionPart1_CoolContest[] = _("COOL CONTEST");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart1_BeautyContest[] = _("Schönheitswettbewerb");
#else
const u8 gRibbonDescriptionPart1_BeautyContest[] = _("BEAUTY CONTEST");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart1_CuteContest[] = _("Anmut-Wettbewerb");
#else
const u8 gRibbonDescriptionPart1_CuteContest[] = _("CUTE CONTEST");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart1_SmartContest[] = _("Klugheitswettbewerb");
#else
const u8 gRibbonDescriptionPart1_SmartContest[] = _("SMART CONTEST");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart1_ToughContest[] = _("Stärke-Wettbewerb");
#else
const u8 gRibbonDescriptionPart1_ToughContest[] = _("TOUGH CONTEST");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart2_NormalRank[] = _("Sieger in Normal-Klasse!");
#else
const u8 gRibbonDescriptionPart2_NormalRank[] = _("Normal Rank winner!");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart2_SuperRank[] = _("Sieger in Super-Klasse!");
#else
const u8 gRibbonDescriptionPart2_SuperRank[] = _("Super Rank winner!");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart2_HyperRank[] = _("Sieger in Hyper-Klasse!");
#else
const u8 gRibbonDescriptionPart2_HyperRank[] = _("Hyper Rank winner!");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart2_MasterRank[] = _("Sieger in Master-Klasse!");
#else
const u8 gRibbonDescriptionPart2_MasterRank[] = _("Master Rank winner!");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart1_Winning[] = _("Band für Lv. 50-Erfolg");
#else
const u8 gRibbonDescriptionPart1_Winning[] = _("For clearing LV50");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart2_Winning[] = _("im Duellturm.");
#else
const u8 gRibbonDescriptionPart2_Winning[] = _("at the BATTLE TOWER.");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart1_Victory[] = _("Band f. Off. Kmpf-Erfolg");
#else
const u8 gRibbonDescriptionPart1_Victory[] = _("For clearing Open Level");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart2_Victory[] = _("im Duellturm.");
#else
const u8 gRibbonDescriptionPart2_Victory[] = _("at the BATTLE TOWER.");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart1_Artist[] = _("Band für auserwählte");
#else
const u8 gRibbonDescriptionPart1_Artist[] = _("RIBBON for being chosen");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart2_Artist[] = _("Porträt-Modelle.");
#else
const u8 gRibbonDescriptionPart2_Artist[] = _("as a super sketch model.");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart1_Effort[] = _("Band für");
#else
const u8 gRibbonDescriptionPart1_Effort[] = _("RIBBON awarded for");
#endif
#if GERMAN
const u8 gRibbonDescriptionPart2_Effort[] = _("fleißige Arbeiter.");
#else
const u8 gRibbonDescriptionPart2_Effort[] = _("being a hard worker.");
#endif

const u8 *const gRibbonDescriptionPointers[][2] =
{
    [CHAMPION_RIBBON]      = {gRibbonDescriptionPart1_Champion,      gRibbonDescriptionPart2_Champion},
    [COOL_RIBBON_NORMAL]   = {gRibbonDescriptionPart1_CoolContest,   gRibbonDescriptionPart2_NormalRank},
    [COOL_RIBBON_SUPER]    = {gRibbonDescriptionPart1_CoolContest,   gRibbonDescriptionPart2_SuperRank},
    [COOL_RIBBON_HYPER]    = {gRibbonDescriptionPart1_CoolContest,   gRibbonDescriptionPart2_HyperRank},
    [COOL_RIBBON_MASTER]   = {gRibbonDescriptionPart1_CoolContest,   gRibbonDescriptionPart2_MasterRank},
    [BEAUTY_RIBBON_NORMAL] = {gRibbonDescriptionPart1_BeautyContest, gRibbonDescriptionPart2_NormalRank},
    [BEAUTY_RIBBON_SUPER]  = {gRibbonDescriptionPart1_BeautyContest, gRibbonDescriptionPart2_SuperRank},
    [BEAUTY_RIBBON_HYPER]  = {gRibbonDescriptionPart1_BeautyContest, gRibbonDescriptionPart2_HyperRank},
    [BEAUTY_RIBBON_MASTER] = {gRibbonDescriptionPart1_BeautyContest, gRibbonDescriptionPart2_MasterRank},
    [CUTE_RIBBON_NORMAL]   = {gRibbonDescriptionPart1_CuteContest,   gRibbonDescriptionPart2_NormalRank},
    [CUTE_RIBBON_SUPER]    = {gRibbonDescriptionPart1_CuteContest,   gRibbonDescriptionPart2_SuperRank},
    [CUTE_RIBBON_HYPER]    = {gRibbonDescriptionPart1_CuteContest,   gRibbonDescriptionPart2_HyperRank},
    [CUTE_RIBBON_MASTER]   = {gRibbonDescriptionPart1_CuteContest,   gRibbonDescriptionPart2_MasterRank},
    [SMART_RIBBON_NORMAL]  = {gRibbonDescriptionPart1_SmartContest,  gRibbonDescriptionPart2_NormalRank},
    [SMART_RIBBON_SUPER]   = {gRibbonDescriptionPart1_SmartContest,  gRibbonDescriptionPart2_SuperRank},
    [SMART_RIBBON_HYPER]   = {gRibbonDescriptionPart1_SmartContest,  gRibbonDescriptionPart2_HyperRank},
    [SMART_RIBBON_MASTER]  = {gRibbonDescriptionPart1_SmartContest,  gRibbonDescriptionPart2_MasterRank},
    [TOUGH_RIBBON_NORMAL]  = {gRibbonDescriptionPart1_ToughContest,  gRibbonDescriptionPart2_NormalRank},
    [TOUGH_RIBBON_SUPER]   = {gRibbonDescriptionPart1_ToughContest,  gRibbonDescriptionPart2_SuperRank},
    [TOUGH_RIBBON_HYPER]   = {gRibbonDescriptionPart1_ToughContest,  gRibbonDescriptionPart2_HyperRank},
    [TOUGH_RIBBON_MASTER]  = {gRibbonDescriptionPart1_ToughContest,  gRibbonDescriptionPart2_MasterRank},
    [WINNING_RIBBON]       = {gRibbonDescriptionPart1_Winning,       gRibbonDescriptionPart2_Winning},
    [VICTORY_RIBBON]       = {gRibbonDescriptionPart1_Victory,       gRibbonDescriptionPart2_Victory},
    [ARTIST_RIBBON]        = {gRibbonDescriptionPart1_Artist,        gRibbonDescriptionPart2_Artist},
    [EFFORT_RIBBON]        = {gRibbonDescriptionPart1_Effort,        gRibbonDescriptionPart2_Effort},
};
