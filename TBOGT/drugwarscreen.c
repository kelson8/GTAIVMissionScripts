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
            sub_317();
            l_U281 = 1;
            break;
            case 1:
            g_U2674 = 1;
            sub_369();
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
    if (NOT GET_IS_WIDESCREEN())
    {
        l_U193 = {0.21280000, 0.43500000, 0.00000000};
        l_U193._fU0 *= 1.80000000;
        l_U193._fU4 *= 1.20000000;
    }
    else
    {
        l_U193 = {0.21280000, 0.43500000, 0.00000000};
    }
    return;
}

void sub_317()
{
    l_U286 = 6300;
    l_U287 = 1000;
    return;
}

void sub_369()
{
    if (l_U284 == 1)
    {
        sub_390();
        l_U284 = 0;
    }
    if (g_U43494 == 1)
    {
        if (NOT GET_IS_WIDESCREEN())
        {
            SET_HELP_MESSAGE_BOX_SIZE_F( 0.23000000 );
        }
        while (IS_FRONTEND_FADING())
        {
            WAIT( 0 );
        }
        while (sub_747())
        {
            WAIT( 0 );
        }
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        while (sub_825())
        {
            WAIT( 0 );
        }
        if (sub_970())
        {
            sub_1271();
            if (g_U43494 == 1)
            {
                if (l_U285 == 0)
                {
                    sub_507();
                    sub_1341();
                    sub_1488();
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
                    sub_2255();
                    sub_2321();
                    SET_CINEMATIC_BUTTON_ENABLED( 0 );
                    if (IS_PLAYER_PLAYING( sub_979() ))
                    {
                        BLOCK_STATS_MENU_ACTIONS( sub_979() );
                    }
                }
                else
                {
                    SET_CINEMATIC_BUTTON_ENABLED( 1 );
                    l_U296 = 0;
                    l_U285 = 0;
                    l_U295 = 0;
                    g_U43494 = 0;
                    l_U284 = 1;
                }
                GET_GAME_TIMER( ref l_U298 );
                l_U299 = l_U298 - l_U297;
                if (l_U299 > (l_U288 + l_U287))
                {
                    SET_TEXT_SCALE( l_U193._fU0, l_U193._fU4 );
                    INIT_FRONTEND_HELPER_TEXT();
                    DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc3", "ResultsExitBut", 0 );
                    sub_2619();
                }
            }
        }
        else
        {
            l_U296 = 0;
            l_U285 = 0;
            l_U295 = 0;
            g_U43494 = 0;
            l_U284 = 1;
        }
    }
    return;
}

void sub_390()
{
    if (l_U283 == 0)
    {
        sub_411();
        l_U281 = 2;
    }
    return;
}

void sub_411()
{
    g_U43561 = 0;
    g_U43591 = 0;
    l_U296 = 0;
    l_U285 = 0;
    l_U295 = 0;
    g_U43494 = 0;
    sub_462();
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    sub_507();
    l_U281 = 2;
    return;
}

void sub_462()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_507()
{
    if (l_U157 != nil)
    {
        RELEASE_TEXTURE( l_U157 );
    }
    if (l_U169 != nil)
    {
        RELEASE_TEXTURE( l_U169 );
    }
    if (l_U144 != nil)
    {
        RELEASE_TEXTURE( l_U144 );
    }
    if (l_U176 != nil)
    {
        RELEASE_TEXTURE( l_U176 );
    }
    if (l_U143 != nil)
    {
        REMOVE_TXD( l_U143 );
    }
    return;
}

int sub_747()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_825()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_834() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_834(), ref iVar2 );
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

void sub_834()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_970()
{
    if ((NOT sub_1144()) AND ((NOT sub_1035()) AND ((NOT IS_PAUSE_MENU_ACTIVE()) AND ((NOT IS_MINIGAME_IN_PROGRESS()) AND (IS_PLAYER_PLAYING( sub_979() ))))))
    {
        return 1;
    }
    return 0;
}

void sub_979()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1035()
{
    if (l_U300 == 1)
    {
        GET_GAME_TIMER( ref l_U303 );
        l_U304 = l_U303 - l_U302;
        if ((g_U12379 == 1) AND (l_U304 > 1000))
        {
            return 1;
        }
    }
    if ((l_U300 == 0) AND (g_U12379 == 1))
    {
        return 1;
    }
    return 0;
}

int sub_1144()
{
    if (IS_PLAYER_PLAYING( sub_979() ))
    {
        if (l_U299 > (l_U288 + l_U287))
        {
            BLOCK_STATS_MENU_ACTIONS( sub_979() );
            if (IS_CONTROL_PRESSED( 2, 78 ))
            {
                BLOCK_STATS_MENU_ACTIONS( sub_979() );
                return 1;
            }
        }
    }
    return 0;
}

void sub_1271()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_1341()
{
    if (l_U197 == 0)
    {
        if (# -NULL-0xc27c84())
        {
            l_U143 = LOAD_TXD( "e2:/xbox360/textures/DrugWars" );
        }
        else if (# -NULL-0xc27bfa())
        {
            l_U143 = LOAD_TXD( "e2:/pc/textures/DrugWars" );
        }
        l_U197 = 1;
    }
    return;
}

void sub_1488()
{
    l_U145 = "E2_Stats_Background_WhiteGrade";
    l_U146 = {0.50000000, 0.00000000, 0.00000000};
    l_U149 = {0.30000000, 0.10000000, 0.00000000};
    l_U152 = 0.00000000;
    l_U153 = 255;
    l_U154 = 255;
    l_U155 = 255;
    l_U156 = 90;
    l_U144 = GET_TEXTURE( l_U143, l_U145 );
    l_U158 = "white";
    l_U159 = {0.25000000, 0.00600000, 0.00000000};
    l_U162 = 0.50000000;
    l_U163 = 0.44400000;
    l_U164 = 0.00000000;
    l_U165 = 255;
    l_U166 = 255;
    l_U167 = 255;
    l_U168 = 255;
    l_U157 = GET_TEXTURE( l_U143, l_U158 );
    l_U170 = "E2_DrugWars_BlackSquare";
    l_U171 = {0.25000000, 0.00600000, 0.00000000};
    l_U174 = 0.50100000;
    l_U175 = 0.44500000;
    l_U169 = GET_TEXTURE( l_U143, l_U170 );
    l_U177 = "E2_DrugWars_Title";
    l_U178 = {0.25000000, 0.12000000, 0.00000000};
    l_U181 = {0.50000000, 0.39600000, 0.00000000};
    l_U184 = 0.00000000;
    l_U185 = 255;
    l_U186 = 255;
    l_U187 = 255;
    l_U188 = 255;
    l_U176 = GET_TEXTURE( l_U143, l_U177 );
    l_U189 = 0.38000000;
    l_U190 = 0.58500000;
    l_U191 = 0.47200000;
    l_U192 = 0.05000000;
    l_U193 = {0.24300000, 0.46700000, 0.00000000};
    if (NOT GET_IS_WIDESCREEN())
    {
        l_U193._fU0 = 0.34600000;
        l_U193._fU4 = 0.51200000;
    }
    return;
}

void sub_2255()
{
    unknown uVar2;

    if (l_U149._fU4 < 2.00000000)
    {
        GET_FRAME_TIME( ref uVar2 );
        l_U149._fU4 += uVar2 * l_U72;
    }
    return;
}

void sub_2321()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U144, l_U146._fU0, l_U146._fU4, l_U149._fU0, l_U149._fU4, l_U152, l_U153, l_U154, l_U155, l_U156 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2619()
{
    sub_2628();
    sub_2783();
    sub_2881();
    return;
}

void sub_2628()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U169, l_U174, l_U175, l_U159._fU0, l_U159._fU4, l_U164, l_U165, l_U166, l_U167, l_U168 );
    DRAW_SPRITE( l_U157, l_U162, l_U163, l_U159._fU0, l_U159._fU4, l_U164, l_U165, l_U166, l_U167, l_U168 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2783()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U176, l_U181._fU0, l_U181._fU4, l_U178._fU0, l_U178._fU4, l_U184, l_U185, l_U186, l_U187, l_U188 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2881()
{
    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U193._fU0, l_U193._fU4 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( l_U189, l_U191, "DWComplete" );
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U193._fU0, l_U193._fU4 );
    SET_TEXT_WRAP( 0, 0.61500000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if ((GET_INT_STAT( 243 )) < 25)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U191, "DrugScore1", GET_INT_STAT( 243 ) );
    }
    else if ((GET_INT_STAT( 243 )) <= 50)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U191, "DrugScore2", GET_INT_STAT( 243 ) );
    }
    else
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U191, "MisDbgScore", GET_INT_STAT( 243 ) );
    }
    return;
}

