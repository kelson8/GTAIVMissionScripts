void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 1;
    l_U72 = 6;
    l_U110 = nil;
    l_U123 = nil;
    l_U141 = 1;
    l_U176 = nil;
    l_U196 = 1;
    l_U272 = 6;
    l_U277 = 0;
    l_U278 = 1;
    l_U279 = 3;
    l_U281 = 0;
    l_U282 = 1;
    l_U283 = 0;
    l_U284 = 0;
    l_U285 = 0;
    while (true)
    {
        WAIT( 0 );
        switch (l_U281)
        {
            case 0:
            sub_192();
            sub_225();
            l_U281 = 1;
            break;
            case 1:
            g_U2674 = 1;
            sub_277();
            HIDE_HUD_AND_RADAR_THIS_FRAME();
            break;
            case 2:
            g_U2674 = 0;
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

void sub_192()
{
    g_U43561 = 0;
    g_U43589 = 0;
    return;
}

void sub_225()
{
    l_U286 = 10000;
    l_U287 = 500;
    return;
}

void sub_277()
{
    if (l_U284 == 1)
    {
        sub_298();
        l_U284 = 0;
    }
    if (g_U43492 == 1)
    {
        if (NOT GET_IS_WIDESCREEN())
        {
            SET_HELP_MESSAGE_BOX_SIZE_F( 0.23000000 );
        }
        while (IS_FRONTEND_FADING())
        {
            WAIT( 0 );
        }
        while (sub_637())
        {
            WAIT( 0 );
        }
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        while (sub_715())
        {
            WAIT( 0 );
        }
        if (sub_860())
        {
            sub_1161();
            if (g_U43492 == 1)
            {
                if (l_U285 == 0)
                {
                    sub_409();
                    sub_1231();
                    sub_1388();
                    GET_GAME_TIMER( ref l_U292 );
                    g_U43561 = 1;
                    l_U285 = 1;
                }
                GET_GAME_TIMER( ref l_U293 );
                l_U294 = l_U293 - l_U292;
                if (l_U294 > l_U287)
                {
                    if (l_U295 == 0)
                    {
                        GET_GAME_TIMER( ref l_U289 );
                        GET_GAME_TIMER( ref l_U296 );
                        l_U295 = 1;
                    }
                }
            }
            if (l_U295 == 1)
            {
                GET_GAME_TIMER( ref l_U290 );
                l_U291 = l_U290 - l_U289;
                if (l_U291 < l_U286)
                {
                    sub_2171();
                    sub_2231();
                    sub_2294();
                    if (IS_PLAYER_PLAYING( sub_869() ))
                    {
                        BLOCK_STATS_MENU_ACTIONS( sub_869() );
                    }
                    SET_CINEMATIC_BUTTON_ENABLED( 0 );
                }
                else
                {
                    SET_CINEMATIC_BUTTON_ENABLED( 1 );
                    l_U285 = 0;
                    l_U295 = 0;
                    g_U43492 = 0;
                    l_U284 = 1;
                }
                GET_GAME_TIMER( ref l_U297 );
                l_U298 = l_U297 - l_U296;
                if (l_U298 > (l_U288 + l_U287))
                {
                    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
                    INIT_FRONTEND_HELPER_TEXT();
                    DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc3", "ResultsExitBut", 0 );
                    sub_2566();
                }
            }
        }
        else
        {
            l_U285 = 0;
            l_U295 = 0;
            g_U43492 = 0;
            l_U284 = 1;
        }
    }
    return;
}

void sub_298()
{
    if (l_U283 == 0)
    {
        sub_319();
        l_U281 = 2;
    }
    return;
}

void sub_319()
{
    g_U43561 = 0;
    g_U43589 = 0;
    l_U285 = 0;
    l_U295 = 0;
    g_U43492 = 0;
    sub_364();
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    sub_409();
    l_U281 = 2;
    return;
}

void sub_364()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_409()
{
    if (l_U8 != nil)
    {
        RELEASE_TEXTURE( l_U8 );
    }
    if (l_U29 != nil)
    {
        RELEASE_TEXTURE( l_U29 );
    }
    if (l_U43 != nil)
    {
        RELEASE_TEXTURE( l_U43 );
    }
    if (l_U52 != nil)
    {
        RELEASE_TEXTURE( l_U52 );
    }
    if (l_U7 != nil)
    {
        REMOVE_TXD( l_U7 );
    }
    return;
}

int sub_637()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_715()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_724() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_724(), ref iVar2 );
    }
    if ((iVar2 == 16) || ((iVar2 == 17) || (iVar2 == 35)))
    {
        if ((GET_CONTROL_VALUE( 0, 6 )) > 10)
        {
            return 1;
        }
    }
    return 0;
}

void sub_724()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_860()
{
    if ((NOT sub_1034()) AND ((NOT sub_925()) AND ((NOT IS_PAUSE_MENU_ACTIVE()) AND ((NOT IS_MINIGAME_IN_PROGRESS()) AND (IS_PLAYER_PLAYING( sub_869() ))))))
    {
        return 1;
    }
    return 0;
}

void sub_869()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_925()
{
    if (l_U299 == 1)
    {
        GET_GAME_TIMER( ref l_U302 );
        l_U303 = l_U302 - l_U301;
        if ((g_U12379 == 1) AND (l_U303 > 1000))
        {
            return 1;
        }
    }
    if ((l_U299 == 0) AND (g_U12379 == 1))
    {
        return 1;
    }
    return 0;
}

int sub_1034()
{
    if (IS_PLAYER_PLAYING( sub_869() ))
    {
        if (l_U298 > (l_U288 + l_U287))
        {
            BLOCK_STATS_MENU_ACTIONS( sub_869() );
            if (IS_CONTROL_PRESSED( 2, 78 ))
            {
                BLOCK_STATS_MENU_ACTIONS( sub_869() );
                return 1;
            }
        }
    }
    return 0;
}

void sub_1161()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_1231()
{
    if (l_U73 == 0)
    {
        if (# -NULL-0xc27c84())
        {
            l_U7 = LOAD_TXD( "e2:/xbox360/textures/Basejumpresults" );
        }
        else if (# -NULL-0xc27bfa())
        {
            l_U7 = LOAD_TXD( "e2:/pc/textures/Basejumpresults" );
        }
        l_U73 = 1;
    }
    return;
}

void sub_1388()
{
    l_U9 = "E2_Stats_Background_WhiteGrade";
    l_U10 = {0.50000000, 0.00000000, 0.00000000};
    l_U13 = {0.30000000, 0.10000000, 0.00000000};
    l_U16 = 0.00000000;
    l_U17 = 255;
    l_U18 = 255;
    l_U19 = 255;
    l_U20 = 90;
    l_U8 = GET_TEXTURE( l_U7, l_U9 );
    l_U30 = "white";
    l_U31 = {0.25000000, 0.00600000, 0.00000000};
    l_U34 = 0.50000000;
    l_U35 = 0.27500000;
    l_U36 = 0.44400000;
    l_U37 = 0.77700000;
    l_U38 = 0.00000000;
    l_U39 = 255;
    l_U40 = 255;
    l_U41 = 255;
    l_U42 = 255;
    l_U29 = GET_TEXTURE( l_U7, l_U30 );
    l_U44 = "E2_Stats_BaseJump_BlackSquare";
    l_U45 = {0.25000000, 0.00600000, 0.00000000};
    l_U48 = 0.50100000;
    l_U49 = 0.27800000;
    l_U50 = 0.44500000;
    l_U51 = 0.77800000;
    l_U43 = GET_TEXTURE( l_U7, l_U44 );
    l_U53 = "E2_Stats_BaseJump_Title";
    l_U57 = {0.50000000, 0.39600000, 0.00000000};
    l_U54 = {0.25000000, 0.12000000, 0.00000000};
    l_U60 = 0.00000000;
    l_U61 = 255;
    l_U62 = 255;
    l_U63 = 255;
    l_U64 = 255;
    l_U52 = GET_TEXTURE( l_U7, l_U53 );
    l_U65 = 0.38000000;
    l_U66 = 0.58500000;
    l_U67 = 0.47200000;
    l_U68 = 0.05000000;
    l_U69 = {0.24300000, 0.46700000, 0.00000000};
    if (NOT GET_IS_WIDESCREEN())
    {
        l_U69._fU0 = 0.34600000;
        l_U69._fU4 = 0.51200000;
    }
    return;
}

void sub_2171()
{
    unknown uVar2;

    if (l_U13._fU4 < 2.00000000)
    {
        GET_FRAME_TIME( ref uVar2 );
        l_U13._fU4 += uVar2 * l_U72;
    }
    return;
}

void sub_2231()
{
    unknown uVar2;

    if (l_U23._fU4 < 2.00000000)
    {
        GET_FRAME_TIME( ref uVar2 );
        l_U23._fU4 += (uVar2 * l_U72) / 2;
    }
    return;
}

void sub_2294()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U8, l_U10._fU0, l_U10._fU4, l_U13._fU0, l_U13._fU4, l_U16, l_U17, l_U18, l_U19, l_U20 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2566()
{
    sub_2575();
    sub_2690();
    sub_2947();
    sub_3213();
    sub_3722();
    sub_4014();
    sub_4303();
    sub_4590();
    return;
}

void sub_2575()
{
    sub_2584();
    return;
}

void sub_2584()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U52, l_U57._fU0, l_U57._fU4, l_U54._fU0, l_U54._fU4, l_U60, l_U61, l_U62, l_U63, l_U64 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2690()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U43, l_U48, l_U50, l_U31._fU0, l_U31._fU4, l_U38, l_U39, l_U40, l_U41, l_U42 );
    DRAW_SPRITE( l_U43, l_U48, l_U51, l_U31._fU0, l_U31._fU4, l_U38, l_U39, l_U40, l_U41, l_U42 );
    DRAW_SPRITE( l_U29, l_U34, l_U36, l_U31._fU0, l_U31._fU4, l_U38, l_U39, l_U40, l_U41, l_U42 );
    DRAW_SPRITE( l_U29, l_U34, l_U37, l_U31._fU0, l_U31._fU4, l_U38, l_U39, l_U40, l_U41, l_U42 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2947()
{
    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( l_U65, l_U67, "MisAccur" );
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0, 0.61500000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT_WITH_NUMBER( 0, l_U67, "MisPercent", g_U42991 );
    return;
}

void sub_3213()
{
    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( l_U65, l_U67 + (l_U68 * 1), "MisTime" );
    sub_3360( g_U42992 );
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0, 0.61500000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (l_U74 > 9)
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U67 + (l_U68 * 1), "MisDbgTime1", l_U75, l_U74, l_U76 );
    }
    else
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U67 + (l_U68 * 1), "MisTimeSecond", l_U75, l_U74, l_U76 );
    }
    return;
}

void sub_3360(unknown uParam0)
{
    l_U75 = sub_3371( uParam0 );
    l_U74 = sub_3421( uParam0 );
    l_U76 = sub_3463( uParam0 );
    return;
}

void sub_3371(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = iParam0 / 1000;
    Result = iVar3 / 60;
    Result = Result mod 60;
    return Result;
}

void sub_3421(int iParam0)
{
    int Result;

    Result = iParam0 / 1000;
    Result = Result mod 60;
    return Result;
}

int sub_3463(int iParam0)
{
    return iParam0 mod 1000;
}

void sub_3722()
{
    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( l_U65, l_U67 + (l_U68 * 2), "BJumpTargets" );
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0, 0.61500000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT_WITH_NUMBER( 0, l_U67 + (l_U68 * 2), "BJumpTargetNum", g_U43629 );
    return;
}

void sub_4014()
{
    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( l_U65, l_U67 + (l_U68 * 3), "BJumpTruck" );
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0, 0.61500000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT_WITH_NUMBER( 0, l_U67 + (l_U68 * 3), "BJumpTruckNum", g_U43630 );
    return;
}

void sub_4303()
{
    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( l_U65, l_U67 + (l_U68 * 4), "BJumpHeli" );
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0, 0.61500000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT_WITH_NUMBER( 0, l_U67 + (l_U68 * 4), "BJumpHeliNum", g_U43631 );
    return;
}

void sub_4590()
{
    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( l_U65, l_U67 + (l_U68 * 5), "BJumpAll" );
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U69._fU0, l_U69._fU4 );
    SET_TEXT_WRAP( 0, 0.61500000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT_WITH_NUMBER( 0, l_U67 + (l_U68 * 5), "BJumpOverallNum", (g_U43629 + g_U43630) + g_U43631 );
    return;
}

