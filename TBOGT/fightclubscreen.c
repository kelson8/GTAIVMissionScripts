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
            sub_217();
            l_U281 = 1;
            break;
            case 1:
            sub_263();
            HIDE_HUD_AND_RADAR_THIS_FRAME();
            break;
            case 2:
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

void sub_192()
{
    g_U43561 = 0;
    return;
}

void sub_217()
{
    l_U286 = 10000;
    l_U288 = 1500;
    return;
}

void sub_263()
{
    if (l_U284 == 1)
    {
        sub_284();
        l_U284 = 0;
    }
    if (g_U43493 == 1)
    {
        if (NOT GET_IS_WIDESCREEN())
        {
            SET_HELP_MESSAGE_BOX_SIZE_F( 0.23000000 );
        }
        while (IS_FRONTEND_FADING())
        {
            WAIT( 0 );
        }
        while (sub_658())
        {
            WAIT( 0 );
        }
        while (sub_710())
        {
            WAIT( 0 );
        }
        if (sub_855())
        {
            sub_952();
            if (g_U43493 == 1)
            {
                if (l_U285 == 0)
                {
                    sub_393();
                    sub_1022();
                    sub_1171();
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
                        GET_GAME_TIMER( ref l_U297 );
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
                    sub_2061();
                    sub_2127();
                }
                else
                {
                    l_U296 = 0;
                    l_U285 = 0;
                    l_U295 = 0;
                    g_U43493 = 0;
                    l_U284 = 1;
                }
                GET_GAME_TIMER( ref l_U298 );
                l_U299 = l_U298 - l_U297;
                if (l_U299 > (l_U288 + l_U287))
                {
                    sub_2312();
                }
            }
        }
        else
        {
            l_U296 = 0;
            l_U285 = 0;
            l_U295 = 0;
            g_U43493 = 0;
            l_U284 = 1;
        }
    }
    return;
}

void sub_284()
{
    if (l_U283 == 0)
    {
        sub_305();
        l_U281 = 2;
    }
    return;
}

void sub_305()
{
    g_U43561 = 0;
    g_U43590 = 0;
    l_U296 = 0;
    l_U285 = 0;
    l_U295 = 0;
    g_U43493 = 0;
    sub_356();
    sub_393();
    l_U281 = 2;
    return;
}

void sub_356()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_393()
{
    if (l_U91 != nil)
    {
        RELEASE_TEXTURE( l_U91 );
    }
    if (l_U103 != nil)
    {
        RELEASE_TEXTURE( l_U103 );
    }
    if (l_U78 != nil)
    {
        RELEASE_TEXTURE( l_U78 );
    }
    if (l_U110 != nil)
    {
        RELEASE_TEXTURE( l_U110 );
    }
    if (l_U123 != nil)
    {
        RELEASE_TEXTURE( l_U123 );
    }
    if (l_U77 != nil)
    {
        REMOVE_TXD( l_U77 );
    }
    return;
}

int sub_658()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_710()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_719() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_719(), ref iVar2 );
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

void sub_719()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_855()
{
    if ((NOT IS_SCREEN_FADED_OUT()) AND ((NOT IS_PAUSE_MENU_ACTIVE()) AND ((NOT IS_MINIGAME_IN_PROGRESS()) AND (IS_PLAYER_PLAYING( sub_864() )))))
    {
        return 1;
    }
    return 0;
}

void sub_864()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_952()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_1022()
{
    if (l_U142 == 0)
    {
        if (# -NULL-0xc27c84())
        {
            l_U77 = LOAD_TXD( "e2:/xbox360/textures/FightClub" );
        }
        else if (# -NULL-0xc27bfa())
        {
            l_U77 = LOAD_TXD( "e2:/pc/textures/FightClub" );
        }
        l_U142 = 1;
    }
    return;
}

void sub_1171()
{
    l_U79 = "E2_Stats_Background_WhiteGrade";
    l_U80 = {0.50000000, 0.00000000, 0.00000000};
    l_U83 = {0.30000000, 1.00000000, 0.00000000};
    l_U86 = 0.00000000;
    l_U87 = 255;
    l_U88 = 255;
    l_U89 = 255;
    l_U90 = 90;
    l_U78 = GET_TEXTURE( l_U77, l_U79 );
    l_U92 = "white";
    l_U93 = {0.25000000, 0.00600000, 0.00000000};
    l_U96 = 0.50000000;
    l_U97 = 0.44400000;
    l_U98 = 0.00000000;
    l_U99 = 255;
    l_U100 = 255;
    l_U101 = 255;
    l_U102 = 255;
    l_U91 = GET_TEXTURE( l_U77, l_U92 );
    l_U104 = "BOGT_BlackSquare";
    l_U105 = {0.25000000, 0.00600000, 0.00000000};
    l_U108 = 0.50100000;
    l_U109 = 0.44500000;
    l_U103 = GET_TEXTURE( l_U77, l_U104 );
    l_U111 = "E2_Stats_FightClub_FinalRound";
    l_U115 = {0.50000000, 0.41000000, 0.00000000};
    l_U112 = {0.26800000, 0.04900000, 0.00000000};
    l_U118 = 0.00000000;
    l_U119 = 255;
    l_U120 = 255;
    l_U121 = 255;
    l_U122 = 255;
    l_U110 = GET_TEXTURE( l_U77, l_U111 );
    l_U124 = "E2_Stats_FightClub_Title";
    l_U125 = {0.25000000, 0.12000000, 0.00000000};
    l_U128 = {0.50000000, 0.35100000, 0.00000000};
    l_U131 = 0.00000000;
    l_U132 = 255;
    l_U133 = 255;
    l_U134 = 255;
    l_U135 = 255;
    l_U123 = GET_TEXTURE( l_U77, l_U124 );
    l_U136 = 0.50000000;
    l_U137 = 0.46700000;
    l_U138 = {0.24300000, 0.46700000, 0.00000000};
    if (NOT GET_IS_WIDESCREEN())
    {
        l_U138._fU0 = 0.34600000;
        l_U138._fU4 = 0.51200000;
    }
    return;
}

void sub_2061()
{
    unknown uVar2;

    if (l_U83._fU4 < 2.00000000)
    {
        GET_FRAME_TIME( ref uVar2 );
        l_U83._fU4 += uVar2 * l_U72;
    }
    return;
}

void sub_2127()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U78, l_U80._fU0, l_U80._fU4, l_U83._fU0, l_U83._fU4, l_U86, l_U87, l_U88, l_U89, l_U90 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2312()
{
    sub_2321();
    sub_2436();
    sub_2591();
    sub_2689();
    return;
}

void sub_2321()
{
    sub_2330();
    return;
}

void sub_2330()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U110, l_U115._fU0, l_U115._fU4, l_U112._fU0, l_U112._fU4, l_U118, l_U119, l_U120, l_U121, l_U122 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2436()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U103, l_U108, l_U109, l_U93._fU0, l_U93._fU4, l_U98, l_U99, l_U100, l_U101, l_U102 );
    DRAW_SPRITE( l_U91, l_U96, l_U97, l_U93._fU0, l_U93._fU4, l_U98, l_U99, l_U100, l_U101, l_U102 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2591()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U123, l_U128._fU0, l_U128._fU4, l_U125._fU0, l_U125._fU4, l_U131, l_U132, l_U133, l_U134, l_U135 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2689()
{
    SET_TEXT_CENTRE( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U138._fU0, l_U138._fU4 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( l_U136, l_U137, "FCComplete" );
    return;
}

