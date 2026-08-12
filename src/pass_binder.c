#include "global.h"
#include "bg.h"
#include "decompress.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "hoenn_badges.h"
#include "international_string_util.h"
#include "new_game.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "money.h"
#include "palette.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "window.h"
#include "constants/rgb.h"
#include "constants/songs.h"

// Die Pass-Mappe ("Binder"): Sammelmappe nach Frontier-Pass-Vorbild.
// Seiten: Steckbrief, Johto-, Kanto- und Hoenn-Orden. Der Zugriff laeuft
// ueber den Trainerkarten-Eintrag im Startmenue, sobald
// FLAG_RECEIVED_PASS_BINDER gesetzt ist (Birk uebergibt sie mit dem Dex).
// V1 kommt ohne neue Grafikdateien aus: Ordensymbole der Trainerkarte,
// Standard-Fensterrahmen, Markierungs-Tile aus Code. Ein frei beweglicher
// Hand-Cursor (Frontier-Pass-Sprite) ist als Ausbaustufe vorgesehen.

enum
{
    PAGE_PROFILE,
    PAGE_JOHTO,
    PAGE_KANTO,
    PAGE_HOENN,
    PAGE_COUNT
};

enum
{
    WIN_HEADER,
    WIN_BODY,
    WIN_FOOTER,
    WIN_COUNT
};

struct PassBinder
{
    MainCallback returnCallback;
    u8 page;
    u8 sel;
    u8 taskId;
    // DMA-Quelle: LoadBgTiles kopiert asynchron - Puffer muessen bis
    // zum Schliessen der Mappe gueltig bleiben.
    u8 badgeTilesJK[0x80 * 16];
    u8 badgeTilesHoenn[0x80 * 8];
};

static EWRAM_DATA struct PassBinder *sBinder = NULL;

// Ordensymbole der Trainerkarte (identische Dateien, eigene Einbindung,
// da die Symbole in trainer_card.c file-static sind).
static const u32 sBinderBadgesJK_Gfx[]    = INCBIN_U32("graphics/trainer_card/hns/combined_badges.4bpp.smol");
static const u32 sBinderBadgesHoenn_Gfx[] = INCBIN_U32("graphics/trainer_card/badges.4bpp.smol");
static const u16 sBinderBadges_Pal[]      = INCBIN_U16("graphics/trainer_card/badges.gbapal");

// Markierungs-Tile (Cursor-Sockel) direkt aus Code: Vollflaeche Farbe 1.
static const u8 sMarkerTile[32] =
{
    0x11,0x11,0x11,0x11, 0x11,0x11,0x11,0x11, 0x11,0x11,0x11,0x11, 0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11, 0x11,0x11,0x11,0x11, 0x11,0x11,0x11,0x11, 0x11,0x11,0x11,0x11,
};
static const u16 sMarker_Pal[16] = { RGB_BLACK, RGB(31, 10, 10) };

#define BADGE_TILE_BASE_JK    1   // 64 Tiles (16 breit x 4 Zeilen)
#define BADGE_TILE_BASE_HOENN 65  // 32 Tiles (16 breit x 2 Zeilen)
#define MARKER_TILE           97
#define BADGE_PAL             13
#define MARKER_PAL            12

// Layout der Ordenseiten: 2 Reihen x 4 Orden (2x2 Tiles je Orden).
#define BADGE_X(col) (6 + (col) * 5)
#define BADGE_Y(row) (6 + (row) * 5)

static const struct BgTemplate sBgTemplates[] =
{
    { .bg = 0, .charBaseIndex = 0, .mapBaseIndex = 31, .screenSize = 0, .paletteMode = 0, .priority = 0, .baseTile = 0 },
    { .bg = 2, .charBaseIndex = 2, .mapBaseIndex = 29, .screenSize = 0, .paletteMode = 0, .priority = 1, .baseTile = 0 },
    { .bg = 3, .charBaseIndex = 1, .mapBaseIndex = 28, .screenSize = 0, .paletteMode = 0, .priority = 2, .baseTile = 0 },
};

static const struct WindowTemplate sWindowTemplates[] =
{
    [WIN_HEADER] = { .bg = 0, .tilemapLeft = 1,  .tilemapTop = 0,  .width = 28, .height = 2,  .paletteNum = 15, .baseBlock = 1 },
    [WIN_BODY]   = { .bg = 0, .tilemapLeft = 2,  .tilemapTop = 3,  .width = 26, .height = 10, .paletteNum = 15, .baseBlock = 57 },
    [WIN_FOOTER] = { .bg = 0, .tilemapLeft = 1,  .tilemapTop = 15, .width = 28, .height = 4,  .paletteNum = 15, .baseBlock = 317 },
    DUMMY_WIN_TEMPLATE
};

#if GERMAN
static const u8 sText_TitleProfile[] = _("Pass-Mappe: Steckbrief");
static const u8 sText_TitleJohto[]   = _("Pass-Mappe: Johto-Orden");
static const u8 sText_TitleKanto[]   = _("Pass-Mappe: Kanto-Orden");
static const u8 sText_TitleHoenn[]   = _("Pass-Mappe: Hoenn-Orden");
static const u8 sText_Controls[]     = _("L/R: Blättern   B: Schließen");
static const u8 sText_NotEarned[]    = _("Noch nicht erhalten.");
static const u8 sText_Name[]         = _("Name:");
static const u8 sText_IdNo[]         = _("ID-Nr.:");
static const u8 sText_Time[]         = _("Spielzeit:");
static const u8 sText_Money[]        = _("Geld:");
#else
static const u8 sText_TitleProfile[] = _("PASS FOLDER: PROFILE");
static const u8 sText_TitleJohto[]   = _("PASS FOLDER: JOHTO BADGES");
static const u8 sText_TitleKanto[]   = _("PASS FOLDER: KANTO BADGES");
static const u8 sText_TitleHoenn[]   = _("PASS FOLDER: HOENN BADGES");
static const u8 sText_Controls[]     = _("L/R: PAGE   B: CLOSE");
static const u8 sText_NotEarned[]    = _("Not obtained yet.");
static const u8 sText_Name[]         = _("NAME:");
static const u8 sText_IdNo[]         = _("IDNo.:");
static const u8 sText_Time[]         = _("TIME:");
static const u8 sText_Money[]        = _("MONEY:");
#endif

// Kanto-Ordennamen existieren als gText_* (Q1). Johto/Hoenn hier:
// Hoenn Q1 aus WW-Smaragd; Johto aus den HnS-Arenatexten (Schock-/
// Aufstiegsorden zur Q1-Verifikation im Protokoll vermerkt).
#if GERMAN
static const u8 sText_BadgeJohto1[] = _("Flügelorden");
static const u8 sText_BadgeJohto2[] = _("Insektorden");
static const u8 sText_BadgeJohto3[] = _("Basisorden");
static const u8 sText_BadgeJohto4[] = _("Phantomorden");
static const u8 sText_BadgeJohto5[] = _("Schockorden");
static const u8 sText_BadgeJohto6[] = _("Stahlorden");
static const u8 sText_BadgeJohto7[] = _("Eisorden");
static const u8 sText_BadgeJohto8[] = _("Aufstiegsorden");
static const u8 sText_BadgeHoenn1[] = _("Steinorden");
static const u8 sText_BadgeHoenn2[] = _("Knöchelorden");
static const u8 sText_BadgeHoenn3[] = _("Dynamo-Orden");
static const u8 sText_BadgeHoenn4[] = _("Hitzeorden");
static const u8 sText_BadgeHoenn5[] = _("Balanceorden");
static const u8 sText_BadgeHoenn6[] = _("Federorden");
static const u8 sText_BadgeHoenn7[] = _("Mentalorden");
static const u8 sText_BadgeHoenn8[] = _("Schauerorden");
#else
static const u8 sText_BadgeJohto1[] = _("ZEPHYR BADGE");
static const u8 sText_BadgeJohto2[] = _("HIVE BADGE");
static const u8 sText_BadgeJohto3[] = _("PLAIN BADGE");
static const u8 sText_BadgeJohto4[] = _("FOG BADGE");
static const u8 sText_BadgeJohto5[] = _("STORM BADGE");
static const u8 sText_BadgeJohto6[] = _("MINERAL BADGE");
static const u8 sText_BadgeJohto7[] = _("GLACIER BADGE");
static const u8 sText_BadgeJohto8[] = _("RISING BADGE");
static const u8 sText_BadgeHoenn1[] = _("STONE BADGE");
static const u8 sText_BadgeHoenn2[] = _("KNUCKLE BADGE");
static const u8 sText_BadgeHoenn3[] = _("DYNAMO BADGE");
static const u8 sText_BadgeHoenn4[] = _("HEAT BADGE");
static const u8 sText_BadgeHoenn5[] = _("BALANCE BADGE");
static const u8 sText_BadgeHoenn6[] = _("FEATHER BADGE");
static const u8 sText_BadgeHoenn7[] = _("MIND BADGE");
static const u8 sText_BadgeHoenn8[] = _("RAIN BADGE");
#endif

static const u8 *const sBadgeNamesJohto[8] =
{
    sText_BadgeJohto1, sText_BadgeJohto2, sText_BadgeJohto3, sText_BadgeJohto4,
    sText_BadgeJohto5, sText_BadgeJohto6, sText_BadgeJohto7, sText_BadgeJohto8,
};
static const u8 *const sBadgeNamesKanto[8] =
{
    gText_Boulderbadge, gText_Cascadebadge, gText_Thunderbadge, gText_Rainbowbadge,
    gText_Soulbadge, gText_Marshbadge, gText_Volcanobadge, gText_Earthbadge,
};
static const u8 *const sBadgeNamesHoenn[8] =
{
    sText_BadgeHoenn1, sText_BadgeHoenn2, sText_BadgeHoenn3, sText_BadgeHoenn4,
    sText_BadgeHoenn5, sText_BadgeHoenn6, sText_BadgeHoenn7, sText_BadgeHoenn8,
};

static void CB2_InitPassBinder(void);
static void Task_PassBinder_HandleInput(u8 taskId);
static void Task_PassBinder_FadeOut(u8 taskId);
static void DrawCurrentPage(void);
static bool32 IsBadgeEarned(u32 page, u32 index);
static const u8 *GetBadgeName(u32 page, u32 index);

static void VBlankCB_PassBinder(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void CB2_PassBinder(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

void ShowPassBinder(MainCallback callback)
{
    sBinder = AllocZeroed(sizeof(*sBinder));
    if (sBinder == NULL)
    {
        SetMainCallback2(callback);
        return;
    }
    sBinder->returnCallback = callback;
    sBinder->page = PAGE_PROFILE;
    sBinder->sel = 0;
    SetMainCallback2(CB2_InitPassBinder);
}

static void CB2_InitPassBinder(void)
{
    SetVBlankCallback(NULL);
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    ResetPaletteFade();
    ScanlineEffect_Stop();
    ResetTasks();
    ResetSpriteData();
    FreeAllSpritePalettes();

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    SetBgTilemapBuffer(2, AllocZeroed(BG_SCREEN_SIZE));
    SetBgTilemapBuffer(3, AllocZeroed(BG_SCREEN_SIZE));

    // Frontier-Pass-Hintergrund als Mappen-Untergrund (V1; spaeter
    // gegen eigene Binder-Grafik tauschbar).
    DecompressDataWithHeaderVram(gFrontierPassBg_Gfx, (u16 *)BG_CHAR_ADDR(1));
    CopyToBgTilemapBuffer(3, gFrontierPassBg_Tilemap, 0, 0);
    CopyBgTilemapBufferToVram(3);
    LoadPalette(gFrontierPassBg_Pal, BG_PLTT_ID(0), 8 * PLTT_SIZE_4BPP);

    InitWindows(sWindowTemplates);
    DeactivateAllTextPrinters();
    LoadUserWindowBorderGfx(WIN_HEADER, 0x214, BG_PLTT_ID(14) + PLTT_SIZEOF(0)); // nur Rahmen-Gfx-Slot
    LoadMessageBoxAndBorderGfx();
    LoadPalette(GetOverworldTextboxPalettePtr(), BG_PLTT_ID(15), PLTT_SIZE_4BPP);

    // Ordensymbole in den BG2-Zeichensatz laden (Puffer bleiben bis
    // zum Schliessen gueltig, da der Transfer asynchron laeuft)
    DecompressDataWithHeaderWram(sBinderBadgesJK_Gfx, sBinder->badgeTilesJK);
    LoadBgTiles(2, sBinder->badgeTilesJK, sizeof(sBinder->badgeTilesJK), BADGE_TILE_BASE_JK);
    DecompressDataWithHeaderWram(sBinderBadgesHoenn_Gfx, sBinder->badgeTilesHoenn);
    LoadBgTiles(2, sBinder->badgeTilesHoenn, sizeof(sBinder->badgeTilesHoenn), BADGE_TILE_BASE_HOENN);
    LoadBgTiles(2, sMarkerTile, sizeof(sMarkerTile), MARKER_TILE);
    LoadPalette(sBinderBadges_Pal, BG_PLTT_ID(BADGE_PAL), PLTT_SIZE_4BPP);
    LoadPalette(sMarker_Pal, BG_PLTT_ID(MARKER_PAL), PLTT_SIZE_4BPP);

    DrawCurrentPage();

    ShowBg(0);
    ShowBg(2);
    ShowBg(3);
    BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    SetVBlankCallback(VBlankCB_PassBinder);
    sBinder->taskId = CreateTask(Task_PassBinder_HandleInput, 0);
    SetMainCallback2(CB2_PassBinder);
}

static bool32 IsBadgeEarned(u32 page, u32 index)
{
    switch (page)
    {
    case PAGE_JOHTO: return FlagGet(FLAG_BADGE01_GET + index);
    case PAGE_KANTO: return FlagGet(FLAG_BADGE09_GET + index);
    case PAGE_HOENN: return HasHoennBadge(index);
    }
    return FALSE;
}

static const u8 *GetBadgeName(u32 page, u32 index)
{
    switch (page)
    {
    case PAGE_JOHTO: return sBadgeNamesJohto[index];
    case PAGE_KANTO: return sBadgeNamesKanto[index];
    default:         return sBadgeNamesHoenn[index];
    }
}

static void DrawBadgeTiles(u32 page, u32 index, u32 x, u32 y)
{
    u16 base;

    if (page == PAGE_JOHTO)
        base = BADGE_TILE_BASE_JK + index * 2;
    else if (page == PAGE_KANTO)
        base = BADGE_TILE_BASE_JK + 32 + index * 2;
    else
        base = BADGE_TILE_BASE_HOENN + index * 2;

    FillBgTilemapBufferRect(2, base,      x,     y,     1, 1, BADGE_PAL);
    FillBgTilemapBufferRect(2, base + 1,  x + 1, y,     1, 1, BADGE_PAL);
    FillBgTilemapBufferRect(2, base + 16, x,     y + 1, 1, 1, BADGE_PAL);
    FillBgTilemapBufferRect(2, base + 17, x + 1, y + 1, 1, 1, BADGE_PAL);
}

static void PrintFooter(void)
{
    FillWindowPixelBuffer(WIN_FOOTER, PIXEL_FILL(1));
    if (sBinder->page == PAGE_PROFILE)
    {
        AddTextPrinterParameterized(WIN_FOOTER, FONT_NORMAL, sText_Controls, 0, 1, TEXT_SKIP_DRAW, NULL);
    }
    else
    {
        const u8 *name = GetBadgeName(sBinder->page, sBinder->sel);

        if (IsBadgeEarned(sBinder->page, sBinder->sel))
            AddTextPrinterParameterized(WIN_FOOTER, FONT_NORMAL, name, 0, 1, TEXT_SKIP_DRAW, NULL);
        else
            AddTextPrinterParameterized(WIN_FOOTER, FONT_NORMAL, sText_NotEarned, 0, 1, TEXT_SKIP_DRAW, NULL);
        AddTextPrinterParameterized(WIN_FOOTER, FONT_SMALL, sText_Controls, 0, 18, TEXT_SKIP_DRAW, NULL);
    }
    CopyWindowToVram(WIN_FOOTER, COPYWIN_FULL);
}

static void DrawMarker(void)
{
    u32 col = sBinder->sel % 4;
    u32 row = sBinder->sel / 4;

    FillBgTilemapBufferRect(2, MARKER_TILE, BADGE_X(col), BADGE_Y(row) + 2, 2, 1, MARKER_PAL);
}

static void PrintProfile(void)
{
    u8 buf[32];
    u32 y = 1;

    PutWindowTilemap(WIN_BODY);
    DrawStdWindowFrame(WIN_BODY, FALSE);
    FillWindowPixelBuffer(WIN_BODY, PIXEL_FILL(1));

    AddTextPrinterParameterized(WIN_BODY, FONT_NORMAL, sText_Name, 4, y, TEXT_SKIP_DRAW, NULL);
    AddTextPrinterParameterized(WIN_BODY, FONT_NORMAL, gSaveBlock2Ptr->playerName, 90, y, TEXT_SKIP_DRAW, NULL);
    y += 18;
    AddTextPrinterParameterized(WIN_BODY, FONT_NORMAL, sText_IdNo, 4, y, TEXT_SKIP_DRAW, NULL);
    ConvertIntToDecimalStringN(buf, GetTrainerId(gSaveBlock2Ptr->playerTrainerId) & 0xFFFF, STR_CONV_MODE_LEADING_ZEROS, 5);
    AddTextPrinterParameterized(WIN_BODY, FONT_NORMAL, buf, 90, y, TEXT_SKIP_DRAW, NULL);
    y += 18;
    AddTextPrinterParameterized(WIN_BODY, FONT_NORMAL, sText_Time, 4, y, TEXT_SKIP_DRAW, NULL);
    ConvertIntToDecimalStringN(buf, gSaveBlock2Ptr->playTimeHours, STR_CONV_MODE_LEFT_ALIGN, 3);
    StringAppend(buf, gText_Colon2);
    ConvertIntToDecimalStringN(buf + StringLength(buf), gSaveBlock2Ptr->playTimeMinutes, STR_CONV_MODE_LEADING_ZEROS, 2);
    AddTextPrinterParameterized(WIN_BODY, FONT_NORMAL, buf, 90, y, TEXT_SKIP_DRAW, NULL);
    y += 18;
    AddTextPrinterParameterized(WIN_BODY, FONT_NORMAL, sText_Money, 4, y, TEXT_SKIP_DRAW, NULL);
    ConvertIntToDecimalStringN(buf, GetMoney(&gSaveBlock1Ptr->money), STR_CONV_MODE_LEFT_ALIGN, 9);
    StringAppend(buf, gText_PokedollarVar1);
    AddTextPrinterParameterized(WIN_BODY, FONT_NORMAL, buf, 90, y, TEXT_SKIP_DRAW, NULL);

    CopyWindowToVram(WIN_BODY, COPYWIN_FULL);
}

static void DrawCurrentPage(void)
{
    static const u8 *const titles[PAGE_COUNT] =
    {
        sText_TitleProfile, sText_TitleJohto, sText_TitleKanto, sText_TitleHoenn
    };
    u32 i;

    FillBgTilemapBufferRect(2, 0, 0, 0, 32, 20, 0);

    PutWindowTilemap(WIN_HEADER);
    FillWindowPixelBuffer(WIN_HEADER, PIXEL_FILL(1));
    AddTextPrinterParameterized(WIN_HEADER, FONT_NORMAL, titles[sBinder->page], 0, 1, TEXT_SKIP_DRAW, NULL);
    CopyWindowToVram(WIN_HEADER, COPYWIN_FULL);

    if (sBinder->page == PAGE_PROFILE)
    {
        PrintProfile();
    }
    else
    {
        ClearStdWindowAndFrame(WIN_BODY, FALSE);
        ClearWindowTilemap(WIN_BODY);
        for (i = 0; i < 8; i++)
        {
            if (IsBadgeEarned(sBinder->page, i))
                DrawBadgeTiles(sBinder->page, i, BADGE_X(i % 4), BADGE_Y(i / 4));
        }
        DrawMarker();
    }
    PutWindowTilemap(WIN_FOOTER);
    PrintFooter();
    CopyBgTilemapBufferToVram(2);
    CopyBgTilemapBufferToVram(0);
}

static void Task_PassBinder_HandleInput(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_PassBinder_FadeOut;
        return;
    }
    if (JOY_NEW(L_BUTTON) || JOY_NEW(DPAD_LEFT) & 0) // L blättert zurück
    {
        PlaySE(SE_BALL_TRAY_ENTER);
        sBinder->page = (sBinder->page + PAGE_COUNT - 1) % PAGE_COUNT;
        sBinder->sel = 0;
        DrawCurrentPage();
        return;
    }
    if (JOY_NEW(R_BUTTON) || JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_BALL_TRAY_ENTER);
        sBinder->page = (sBinder->page + 1) % PAGE_COUNT;
        sBinder->sel = 0;
        DrawCurrentPage();
        return;
    }
    if (sBinder->page != PAGE_PROFILE)
    {
        u32 old = sBinder->sel;

        if (JOY_NEW(DPAD_LEFT) && (sBinder->sel % 4) > 0)
            sBinder->sel--;
        if (JOY_NEW(DPAD_RIGHT) && (sBinder->sel % 4) < 3)
            sBinder->sel++;
        if (JOY_NEW(DPAD_UP) && sBinder->sel >= 4)
            sBinder->sel -= 4;
        if (JOY_NEW(DPAD_DOWN) && sBinder->sel < 4)
            sBinder->sel += 4;
        if (old != sBinder->sel)
        {
            PlaySE(SE_SELECT);
            FillBgTilemapBufferRect(2, 0, 0, BADGE_Y(0) + 2, 32, 1, 0);
            FillBgTilemapBufferRect(2, 0, 0, BADGE_Y(1) + 2, 32, 1, 0);
            DrawMarker();
            CopyBgTilemapBufferToVram(2);
            PrintFooter();
        }
    }
}

static void Task_PassBinder_FadeOut(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SetMainCallback2(sBinder->returnCallback);
    Free(GetBgTilemapBuffer(2));
    Free(GetBgTilemapBuffer(3));
    FreeAllWindowBuffers();
    DestroyTask(taskId);
    Free(sBinder);
    sBinder = NULL;
}
