void main()
{
    int iVar2;
    int iVar3;

    l_U0 = 0;
    l_U1 = 0;
    l_U105 = 0;
    l_U106 = 1;
    l_U107 = 3;
    l_U109 = 0;
    l_U126 = -1;
    l_U130 = 0;
    l_U131 = 1;
    l_U132 = 1;
    l_U140 = 150.00000000;
    l_U230 = 0;
    l_U231 = 150.00000000;
    l_U281 = 0;
    l_U515 = 0;
    l_U563 = 0;
    l_U576 = 0.50000000;
    l_U579 = 0;
    l_U582 = 0;
    l_U583 = 0;
    l_U590 = "MF5_END";
    l_U592 = 0;
    iVar2 = 28;
    sub_161();
    iVar3 = 1;
    while (true)
    {
        WAIT( 0 );
        CLEAR_HELP();
        CLEAR_PRINTS();
        if (IS_PLAYER_PLAYING( sub_358() ))
        {
            sub_1053( l_U515 );
            sub_18106( 0 );
            if (l_U484[l_U515] == 8)
            {
                l_U515++;
            }
            if ((l_U515 * iVar3) >= 16)
            {
                sub_18169();
            }
        }
    }
    return;
}

void sub_161()
{
    int I;

    for ( I = 0; I <= 29; I++ )
    {
        l_U484[I] = 0;
    }
    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING_OUT())
        {
            DO_SCREEN_FADE_OUT( 3000 );
        }
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_265() )))
    {
        FREEZE_CHAR_POSITION( sub_265(), 1 );
        SET_CHAR_VISIBLE( sub_265(), 0 );
        SET_CHAR_COLLISION( sub_265(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_358() ))
    {
        SET_PLAYER_CONTROL( sub_358(), 0 );
    }
    g_U9890 = 1;
    sub_420();
    if (NOT (IS_CHAR_DEAD( sub_265() )))
    {
        if (HAS_CHAR_GOT_WEAPON( sub_265(), 0 ))
        {
            SET_CURRENT_CHAR_WEAPON( sub_265(), 0, 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_358() ))
    {
        SET_PLAYER_CONTROL( sub_358(), 0 );
        SET_EVERYONE_IGNORE_PLAYER( sub_358(), 1 );
    }
    ALLOW_EMERGENCY_SERVICES( 0 );
    DISPLAY_RADAR( 0 );
    DISPLAY_HUD( 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    WAIT( 0 );
    START_END_CREDITS_MUSIC();
    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 0 );
    # -NULL-0xc27cb1( 0 );
    SET_WIDESCREEN_BORDERS( 1 );
    sub_778( ref l_U591 );
    GET_GAME_TIMER( ref l_U570 );
    sub_826( "MF10AUD", 6 );
    sub_826( "CREDIT", 0 );
    WAIT( 0 );
    return;
}

void sub_265()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_358()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_420()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_DEAD( sub_265() )))
    {
        REQUEST_MODEL( 2093083147 );
        while (NOT (HAS_MODEL_LOADED( 2093083147 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( sub_265() )))
        {
            GET_CHAR_COORDINATES( sub_265(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        if (NOT (DOES_OBJECT_EXIST( l_U697 )))
        {
            CREATE_OBJECT( 2093083147, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U697, 1 );
        }
        SET_OBJECT_COLLISION( l_U697, 0 );
        SET_OBJECT_VISIBLE( l_U697, 0 );
    }
    return;
}

void sub_778(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_826(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_862())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_862()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_1053(unknown uParam0)
{
    int iVar3;

    iVar3 = uParam0;
    switch (l_U484[iVar3])
    {
        case 0:
        if ((IS_SCREEN_FADED_OUT()) || (l_U576 >= 1.50000000))
        {
            sub_1178();
            l_U484[iVar3] = 1;
        }
        break;
        case 1:
        FREEZE_CHAR_POSITION( sub_265(), 1 );
        SET_CHAR_VISIBLE( sub_265(), 0 );
        SET_CHAR_COLLISION( sub_265(), 0 );
        if (iVar3 == 0)
        {
            sub_1384( 0 );
        }
        else if (iVar3 == 1)
        {
            sub_1891( 1 );
        }
        else if (iVar3 == 2)
        {
            sub_2876( 2 );
        }
        else if (iVar3 == 3)
        {
            sub_3332( 3 );
        }
        else if (iVar3 == 4)
        {
            sub_4104( 4 );
        }
        else if (iVar3 == 5)
        {
            sub_4782( 5 );
        }
        else if (iVar3 == 6)
        {
            sub_5239( 6 );
        }
        else if (iVar3 == 7)
        {
            sub_6117( 7 );
        }
        else if (iVar3 == 8)
        {
            sub_6571( 8 );
        }
        else if (iVar3 == 9)
        {
            sub_7235( 9 );
        }
        else if (iVar3 == 10)
        {
            sub_7716( 10 );
        }
        else if (iVar3 == 11)
        {
            sub_8595( 11 );
        }
        else if (iVar3 == 12)
        {
            sub_9047( 12 );
        }
        else if (iVar3 == 13)
        {
            sub_9503( 13 );
        }
        else if (iVar3 == 14)
        {
            sub_9959( 14 );
        }
        else if (iVar3 == 15)
        {
            sub_10415( 15 );
        }
        else if (iVar3 == 16)
        {
            sub_10638( 16 );
        }
        else if (iVar3 == 17)
        {
            sub_11093( 17 );
        }
        else if (iVar3 == 18)
        {
            sub_11855( 18 );
        }
        else if (iVar3 == 19)
        {
            sub_12305( 19 );
        }
        else if (iVar3 == 20)
        {
            sub_13082( 20 );
        }
        else if (iVar3 == 21)
        {
            sub_13539( 21 );
        }
        else if (iVar3 == 22)
        {
            sub_14523( 22 );
        }
        else if (iVar3 == 23)
        {
            sub_14977( 23 );
        }
        else if (iVar3 == 24)
        {
            sub_15461( 24 );
        }
        else if (iVar3 == 25)
        {
            sub_15917( 25 );
        }
        else if (iVar3 == 26)
        {
            sub_16375( 26 );
        }
        else if (iVar3 == 27)
        {
            sub_10415( 27 );
        };;;;;;;;;;;;;;;;;;;;;;;;;;;;
        break;
        case 2:
        SET_CAM_SPLINE_PROGRESS( l_U596, 0.00000000 );
        sub_16966();
        GET_GAME_TIMER( ref l_U565 );
        l_U566 = l_U565 - l_U564;
        if (iVar3 == 3)
        {
            if (l_U566 > 24000)
            {
                l_U484[iVar3] = 3;
            }
        }
        else if (iVar3 == 1)
        {
            if (l_U566 > 19000)
            {
                l_U484[iVar3] = 3;
            }
        }
        else if (iVar3 == 7)
        {
            if (l_U566 > 20000)
            {
                l_U484[iVar3] = 3;
            }
        }
        else if (iVar3 == 10)
        {
            if (l_U566 > 20000)
            {
                l_U484[iVar3] = 3;
            }
        }
        else if (iVar3 == 15)
        {
            if (l_U566 > 8000)
            {
                l_U484[iVar3] = 3;
            }
        }
        else if (iVar3 == 25)
        {
            if (l_U566 > 24000)
            {
                l_U484[iVar3] = 3;
            }
        }
        else if (l_U566 > 8000)
        {
            l_U484[iVar3] = 3;
        };;;;;;;
        break;
        case 3:
        sub_16966();
        if (DOES_CAM_EXIST( l_U596 ))
        {
            SET_CAM_SPLINE_PROGRESS( l_U596, 0.00000000 );
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 3000 );
                l_U484[iVar3] = 5;
            }
            else
            {
                l_U484[iVar3] = 4;
            }
        }
        break;
        case 4:
        sub_16966();
        l_U576 -= 0.02000000;
        if (l_U576 <= 0.50000000)
        {
            l_U484[iVar3] = 5;
        }
        break;
        case 5:
        if (IS_SCREEN_FADED_IN())
        {
            if (NOT g_U9068)
            {
                START_CREDITS();
                DISABLE_END_CREDITS_FADE();
                g_U9068 = 1;
            }
            if (iVar3 == 15)
            {
                ENABLE_END_CREDITS_FADE();
            }
            sub_16966();
            if (iVar3 < 15)
            {
                GET_GAME_TIMER( ref l_U568 );
                l_U569 = l_U568 - l_U567;
                if ((l_U517[iVar3] - 6000) < l_U569)
                {
                    l_U576 = 0.50000000;
                    l_U484[iVar3] = 6;
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U568 );
                l_U569 = l_U568 - l_U567;
                if ((l_U517[iVar3] + 1000) < l_U569)
                {
                    l_U484[iVar3] = 6;
                }
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U567 );
        }
        break;
        case 6:
        DO_SCREEN_FADE_OUT( 2000 );
        l_U484[iVar3] = 7;
        break;
        case 7:
        if (IS_SCREEN_FADED_OUT())
        {
            l_U484[iVar3] = 8;
        }
        break;
        case 8: break;
    }
    sub_17896( l_U515, ref iVar3 );
    return;
}

void sub_1178()
{
    int I;

    for ( I = 0; I <= 44; I++ )
    {
        if (DOES_CAM_EXIST( l_U597[I] ))
        {
            DESTROY_CAM( l_U597[I] );
            l_U597[I] = nil;
        }
    }
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
        l_U596 = nil;
    }
    DESTROY_ALL_CAMS();
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    return;
}

void sub_1384(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 150000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1662.58400000, 100.88730000, 184.07600000 );
    SET_CAM_ROT( l_U597[iVar3], -13.84863000, 0.00000000, 110.12560000 );
    SET_CAM_FOV( l_U597[iVar3], 50 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -600.66840000, 100.91250000, 184.07600000 );
    SET_CAM_ROT( l_U597[iVar3], -13.84863000, 0.00000000, 110.12560000 );
    SET_CAM_FOV( l_U597[iVar3], 50 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 20, 15 );
    FORCE_WEATHER_NOW( 0 );
    l_U593 = {-600.66840000, 100.91250000, 184.07600000};
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_1821()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    GET_GAME_TIMER( ref l_U564 );
    return;
}

void sub_1891(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 80000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 181.83720000, -403.81140000, 16.31100000 );
    SET_CAM_ROT( l_U597[iVar3], 10.96661000, -0.00000000, 91.27537000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 132.17120000, -403.81140000, 16.31100000 );
    SET_CAM_ROT( l_U597[iVar3], 10.96661000, -0.00000000, 91.27537000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 95.92056000, -403.81140000, 16.31100000 );
    SET_CAM_ROT( l_U597[iVar3], 10.96661000, -0.00000000, 91.27537000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 60.33514000, -403.81140000, 16.31100000 );
    SET_CAM_ROT( l_U597[iVar3], 10.96661000, -0.00000000, 91.27537000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 16.81558000, -403.81140000, 16.31100000 );
    SET_CAM_ROT( l_U597[iVar3], 10.96661000, -0.00000000, 91.27537000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -44.36545000, -403.81140000, 16.31100000 );
    SET_CAM_ROT( l_U597[iVar3], 10.96661000, -0.00000000, 91.27537000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -111.73510000, -402.86090000, 16.31100000 );
    SET_CAM_ROT( l_U597[iVar3], 9.78717400, 0.00000000, 107.05020000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 0, 0 );
    FORCE_WEATHER_NOW( 7 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_2876(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 70000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -1020.06900000, 1618.96200000, 56.24105000 );
    SET_CAM_ROT( l_U597[iVar3], -32.27391000, -0.00000000, 22.25702000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -1328.14800000, 1618.96200000, 56.24105000 );
    SET_CAM_ROT( l_U597[iVar3], -32.27391000, -0.00000000, 22.25702000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 7, 0 );
    FORCE_WEATHER_NOW( 5 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_3332(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 104000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 947.85870000, -401.56690000, 49.00399000 );
    SET_CAM_ROT( l_U597[iVar3], 0.00807600, -0.00000000, 88.62653000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 802.17980000, -401.56690000, 49.00399000 );
    SET_CAM_ROT( l_U597[iVar3], 0.00807600, -0.00000000, 88.62653000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 663.28890000, -401.56690000, 49.00399000 );
    SET_CAM_ROT( l_U597[iVar3], 0.00807600, -0.00000000, 88.62653000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 503.60690000, -401.56690000, 49.00399000 );
    SET_CAM_ROT( l_U597[iVar3], 0.00807600, -0.00000000, 88.62653000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 380.39920000, -401.56690000, 49.00399000 );
    SET_CAM_ROT( l_U597[iVar3], 0.00807600, -0.00000000, 88.62653000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 20, 0 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_4104(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 50000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -641.75880000, -799.90490000, 39.87172000 );
    SET_CAM_ROT( l_U597[iVar3], -24.75624000, -0.00000000, -34.75497000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -636.08860000, -791.73260000, 61.44153000 );
    SET_CAM_ROT( l_U597[iVar3], -24.75624000, -0.00000000, -34.75497000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -628.67590000, -781.04930000, 84.63930000 );
    SET_CAM_ROT( l_U597[iVar3], -24.75624000, -0.00000000, -34.75497000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -612.32940000, -757.48980000, 95.82294000 );
    SET_CAM_ROT( l_U597[iVar3], -4.75624500, -0.00000000, -34.75497000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 15, 0 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_4782(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 40000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -56.70818000, 1652.02500000, 16.39513000 );
    SET_CAM_ROT( l_U597[iVar3], -15.20743000, 0.00000000, -168.79820000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -54.80154000, 1642.39600000, 40.50033000 );
    SET_CAM_ROT( l_U597[iVar3], -11.34412000, -0.00000000, -168.79820000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 2, 0 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_5239(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 103000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1645.10000000, 737.73090000, 33.36374000 );
    SET_CAM_ROT( l_U597[iVar3], 2.83559500, -0.00000000, -53.01928000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1645.10000000, 638.96900000, 33.36374000 );
    SET_CAM_ROT( l_U597[iVar3], 2.83559500, -0.00000000, -53.01928000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1645.10000000, 558.96410000, 33.36374000 );
    SET_CAM_ROT( l_U597[iVar3], 2.83559500, -0.00000000, -53.01928000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1645.10000000, 504.34980000, 33.36374000 );
    SET_CAM_ROT( l_U597[iVar3], 2.83559500, -0.00000000, -53.01928000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1645.10000000, 442.25730000, 33.36374000 );
    SET_CAM_ROT( l_U597[iVar3], 2.83559500, -0.00000000, -53.01928000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1645.10000000, 420.36860000, 33.36374000 );
    SET_CAM_ROT( l_U597[iVar3], 2.83559500, -0.00000000, -53.01928000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 12, 0 );
    FORCE_WEATHER_NOW( 2 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_6117(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 90000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -58.16537000, 1140.87300000, 45.92660000 );
    SET_CAM_ROT( l_U597[iVar3], -30.00963000, 0.00000000, 120.69220000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -58.16537000, 723.95140000, 45.92660000 );
    SET_CAM_ROT( l_U597[iVar3], -30.00963000, 0.00000000, 120.69220000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 17, 30 );
    FORCE_WEATHER_NOW( 0 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_6571(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 50000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 811.99190000, 189.82530000, 28.31842000 );
    SET_CAM_ROT( l_U597[iVar3], -48.48413000, -0.00000100, 32.93761000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 824.27310000, 272.50570000, 28.31842000 );
    SET_CAM_ROT( l_U597[iVar3], -48.48413000, -0.00000100, 32.93761000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 810.95250000, 372.78680000, 28.31842000 );
    SET_CAM_ROT( l_U597[iVar3], -48.48413000, -0.00000100, 32.93761000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 811.99190000, 422.58550000, 28.31842000 );
    SET_CAM_ROT( l_U597[iVar3], 9.49920000, 0.00000000, 32.93760000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 0, 0 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_7235(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 55000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -1067.15800000, 1116.88700000, 28.36802000 );
    SET_CAM_ROT( l_U597[iVar3], -30.28136000, -0.00000000, 80.96727000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -1238.40500000, 1116.88700000, 28.36802000 );
    SET_CAM_ROT( l_U597[iVar3], -21.87082000, 0.00000000, 80.96727000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 20, 0 );
    FORCE_WEATHER_NOW( 7 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_7716(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 65000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -218.31150000, 408.63080000, 14.23682000 );
    SET_CAM_ROT( l_U597[iVar3], 8.22949400, -0.00000000, -173.02560000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -218.40190000, 409.37030000, 19.38861000 );
    SET_CAM_ROT( l_U597[iVar3], 8.22949400, 0.00000000, 136.32200000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -217.31630000, 410.50720000, 30.25759000 );
    SET_CAM_ROT( l_U597[iVar3], 8.22949300, -0.00000000, 82.50273000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -215.38910000, 410.25370000, 43.69775000 );
    SET_CAM_ROT( l_U597[iVar3], 8.22949500, 0.00000000, 51.23661000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -213.77720000, 408.54930000, 60.13766000 );
    SET_CAM_ROT( l_U597[iVar3], -1.73628800, -0.00000000, 21.53451000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -210.95180000, 407.31510000, 85.68465000 );
    SET_CAM_ROT( l_U597[iVar3], 2.08575700, -0.00000000, -2.43404300 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 0, 0 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_8595(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 30000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -657.80930000, 458.45930000, 51.47357000 );
    SET_CAM_ROT( l_U597[iVar3], 0.58853900, 0.00000000, -148.91790000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -203.96200000, 458.45930000, 51.47357000 );
    SET_CAM_ROT( l_U597[iVar3], 0.58853900, 0.00000000, -148.91790000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 5, 20 );
    FORCE_WEATHER_NOW( 3 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_9047(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 50000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -221.81500000, 51.09294000, 21.34130000 );
    SET_CAM_ROT( l_U597[iVar3], -2.45084500, 0.00000000, -77.69350000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -218.20350000, 51.88079000, 107.70200000 );
    SET_CAM_ROT( l_U597[iVar3], -2.45084500, 0.00000000, -77.69350000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 8, 30 );
    FORCE_WEATHER_NOW( 0 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_9503(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 40000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1028.74900000, -662.89630000, 15.59761000 );
    SET_CAM_ROT( l_U597[iVar3], -4.87050500, -0.00000000, 58.03273000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1025.17100000, -660.66320000, 75.09539000 );
    SET_CAM_ROT( l_U597[iVar3], -4.87050500, -0.00000000, 58.03273000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 7, 30 );
    FORCE_WEATHER_NOW( 0 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_9959(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 50000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 952.25380000, 880.01470000, 27.61006000 );
    SET_CAM_ROT( l_U597[iVar3], -1.60905500, -0.00000000, -149.54770000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 952.25380000, 753.27580000, 27.61006000 );
    SET_CAM_ROT( l_U597[iVar3], -1.60905400, -0.00000000, -149.54770000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 15, 0 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_10415(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    l_U517[uParam0] = 20000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U596 );
    SET_CAM_POS( l_U596, -209.83320000, 289.85490000, 14.34389000 );
    SET_CAM_ROT( l_U596, 0.91364800, 0.00000000, 11.39584000 );
    SET_CAM_FOV( l_U596, 45 );
    iVar3++;
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 11, 0 );
    FORCE_WEATHER_NOW( 0 );
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_10638(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 40000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 781.08250000, 60.64068000, 10.68758000 );
    SET_CAM_ROT( l_U597[iVar3], -6.52894500, 0.00000000, -146.06070000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 818.10540000, -56.64117000, 10.68758000 );
    SET_CAM_ROT( l_U597[iVar3], -6.52894500, 0.00000000, -146.06070000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 21, 15 );
    FORCE_WEATHER_NOW( 6 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_11093(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 60000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 354.38010000, 479.14720000, 23.58835000 );
    SET_CAM_ROT( l_U597[iVar3], 14.09168000, 0.00000000, 113.03860000 );
    SET_CAM_FOV( l_U597[iVar3], 65 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 354.38010000, 392.56850000, 23.58835000 );
    SET_CAM_ROT( l_U597[iVar3], 14.09168000, 0.00000000, 113.03860000 );
    SET_CAM_FOV( l_U597[iVar3], 65 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 354.38010000, 312.04210000, 23.58835000 );
    SET_CAM_ROT( l_U597[iVar3], 14.09168000, 0.00000000, 113.03860000 );
    SET_CAM_FOV( l_U597[iVar3], 65 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 354.38010000, 234.53020000, 23.58835000 );
    SET_CAM_ROT( l_U597[iVar3], 14.09168000, 0.00000000, 113.03860000 );
    SET_CAM_FOV( l_U597[iVar3], 65 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 354.38010000, 145.30830000, 23.58835000 );
    SET_CAM_ROT( l_U597[iVar3], 14.09168000, 0.00000000, 113.03860000 );
    SET_CAM_FOV( l_U597[iVar3], 65 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 3, 15 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_11855(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 35000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1035.38100000, 1864.22700000, 16.41867000 );
    SET_CAM_ROT( l_U597[iVar3], 1.02512400, 0.00000000, 33.77147000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1035.38100000, 1799.49100000, 16.41867000 );
    SET_CAM_ROT( l_U597[iVar3], 1.02512400, 0.00000000, 33.77147000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 18, 0 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_12305(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 40000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1033.05600000, 1821.62100000, 51.37999000 );
    SET_CAM_ROT( l_U597[iVar3], -1.02262700, -0.00000000, -87.46704000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1033.05600000, 1821.62100000, 41.37999000 );
    SET_CAM_ROT( l_U597[iVar3], -1.02262700, -0.00000000, -87.46704000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1033.05600000, 1821.62100000, 31.37999000 );
    SET_CAM_ROT( l_U597[iVar3], -1.02262700, -0.00000000, -87.46704000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1033.05600000, 1821.62100000, 21.37999000 );
    SET_CAM_ROT( l_U597[iVar3], -1.02262700, -0.00000000, -87.46704000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 1033.05600000, 1821.62100000, 15.37999000 );
    SET_CAM_ROT( l_U597[iVar3], -1.02262700, -0.00000000, -87.46704000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 15, 0 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_13082(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 80000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -52.13252000, -164.07490000, 31.90292000 );
    SET_CAM_ROT( l_U597[iVar3], -61.34676000, -0.00000000, 61.91214000 );
    SET_CAM_FOV( l_U597[iVar3], 90 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -42.79258000, 554.89070000, 31.90292000 );
    SET_CAM_ROT( l_U597[iVar3], -61.34676000, -0.00000000, 61.91214000 );
    SET_CAM_FOV( l_U597[iVar3], 90 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 17, 30 );
    FORCE_WEATHER_NOW( 0 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_13539(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 40000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 926.25850000, 813.03870000, 20.30934000 );
    SET_CAM_ROT( l_U597[iVar3], -1.74071000, -0.00000000, 119.04690000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 926.25850000, 797.46710000, 20.30934000 );
    SET_CAM_ROT( l_U597[iVar3], -1.74071000, -0.00000000, 119.04690000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 926.25850000, 777.78140000, 20.30934000 );
    SET_CAM_ROT( l_U597[iVar3], -1.74071000, -0.00000000, 119.04690000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 926.25850000, 759.61630000, 20.30934000 );
    SET_CAM_ROT( l_U597[iVar3], -1.74071000, -0.00000000, 119.04690000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 926.25850000, 746.95100000, 20.30934000 );
    SET_CAM_ROT( l_U597[iVar3], -1.74071000, -0.00000000, 119.04690000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 926.25850000, 729.32870000, 20.30934000 );
    SET_CAM_ROT( l_U597[iVar3], -1.74071000, -0.00000000, 119.04690000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 926.25850000, 713.70890000, 20.30934000 );
    SET_CAM_ROT( l_U597[iVar3], -1.74071000, -0.00000000, 119.04690000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 12, 0 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_14523(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 60000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 293.46590000, 1705.25200000, 69.39276000 );
    SET_CAM_ROT( l_U597[iVar3], -31.01061000, 0.00000000, -100.27180000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], 741.98120000, 1705.25200000, 69.39276000 );
    SET_CAM_ROT( l_U597[iVar3], -31.01061000, 0.00000000, -100.27180000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 10, 0 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_14977(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 100000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -1180.56600000, -338.78050000, 38.65020000 );
    SET_CAM_ROT( l_U597[iVar3], -20.21284000, 0.00000100, 51.23832000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -1180.56600000, 256.81990000, 38.65020000 );
    SET_CAM_ROT( l_U597[iVar3], -20.21284000, 0.00000100, 51.23832000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 5, 0 );
    FORCE_WEATHER_NOW( 1 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_15461(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 30000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -1341.91500000, 1929.13700000, 24.63359000 );
    SET_CAM_ROT( l_U597[iVar3], -17.47498000, -0.00000000, -131.17520000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -1207.24200000, 1929.13700000, 24.63359000 );
    SET_CAM_ROT( l_U597[iVar3], -17.47498000, -0.00000000, -131.17520000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 12, 0 );
    FORCE_WEATHER_NOW( 2 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_15917(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 85000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -1351.39500000, 398.38830000, 68.63479000 );
    SET_CAM_ROT( l_U597[iVar3], -15.58158000, -0.00000000, 145.04620000 );
    SET_CAM_FOV( l_U597[iVar3], 34.20003000 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -1351.39500000, -500.49470000, 68.63479000 );
    SET_CAM_ROT( l_U597[iVar3], -36.22894000, 0.00000000, 145.04620000 );
    SET_CAM_FOV( l_U597[iVar3], 34.20003000 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 5, 15 );
    FORCE_WEATHER_NOW( 2 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_16375(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 0;
    l_U517[uParam0] = 70000;
    if (DOES_CAM_EXIST( l_U596 ))
    {
        DESTROY_CAM( l_U596 );
    }
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -288.74020000, 484.79280000, 353.74600000 );
    SET_CAM_ROT( l_U597[iVar3], -70.19000000, 0.00000000, -130.68670000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -288.74020000, 150.97310000, 353.74600000 );
    SET_CAM_ROT( l_U597[iVar3], -70.19000000, 0.00000000, -130.68670000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 14, ref l_U597[iVar3] );
    SET_CAM_POS( l_U597[iVar3], -280.31290000, 64.80716000, 353.74600000 );
    SET_CAM_ROT( l_U597[iVar3], -10.05738000, -0.00000000, -168.84140000 );
    SET_CAM_FOV( l_U597[iVar3], 45 );
    iVar3++;
    CREATE_CAM( 25, ref l_U596 );
    SET_CAM_SPLINE_DURATION( l_U596, l_U517[uParam0] );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U596, 1 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U596, 1 );
    SET_CAM_ACTIVE( l_U596, 1 );
    SET_CAM_PROPAGATE( l_U596, 1 );
    SET_TIME_OF_DAY( 22, 30 );
    FORCE_WEATHER_NOW( 3 );
    for ( I = 0; I <= (iVar3 - 1); I++ )
    {
        ADD_CAM_SPLINE_NODE( l_U596, l_U597[I] );
    }
    sub_1821();
    l_U484[uParam0] = 2;
    return;
}

void sub_16966()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (DOES_CAM_EXIST( l_U596 ))
    {
        if (NOT (IS_CHAR_DEAD( sub_265() )))
        {
            GET_CAM_POS( l_U596, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            SET_OBJECT_COORDINATES( l_U697, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            if (NOT (IS_PED_ATTACHED_TO_OBJECT( sub_265(), l_U697 )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_265() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_265(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                }
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_265() )))
                {
                    ATTACH_PED_TO_OBJECT( sub_265(), l_U697, 0, 0, 0, 0, 0, 0, 0, 0 );
                }
            }
        }
    }
    return;
}

void sub_17896(int iParam0, unknown uParam1)
{
    GET_GAME_TIMER( ref l_U571 );
    l_U572 = l_U571 - l_U570;
    if (iParam0 < 27)
    {
        if (l_U572 > 1000)
        {
            if (g_U9068 == 1)
            {
                if (sub_17967())
                {
                    ENABLE_END_CREDITS_FADE();
                    STOP_CREDITS();
                    l_U515 = 28;
                }
            }
        }
    }
    return;
}

int sub_17967()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_18106(unknown uParam0)
{
    return;
}

void sub_18169()
{
    ENABLE_END_CREDITS_FADE();
    FREEZE_CHAR_POSITION( sub_265(), 1 );
    if ((IS_SCREEN_FADING_IN()) || (IS_SCREEN_FADED_IN()))
    {
        DO_SCREEN_FADE_OUT( 3000 );
    }
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    RELEASE_WEATHER();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    if (NOT (IS_CHAR_DEAD( sub_265() )))
    {
        SET_CHAR_HEADING( sub_265(), 305.90000000 );
    }
    sub_1178();
    STOP_CREDITS();
    STOP_END_CREDITS_MUSIC();
    SET_WIDESCREEN_BORDERS( 0 );
    if (NOT (IS_CHAR_DEAD( sub_265() )))
    {
        if (DOES_OBJECT_EXIST( l_U697 ))
        {
            if (IS_PED_ATTACHED_TO_OBJECT( sub_265(), l_U697 ))
            {
                DETACH_PED( sub_265(), 1 );
            }
            DELETE_OBJECT( ref l_U697 );
        }
    }
    ALLOW_GAME_TO_PAUSE_FOR_STREAMING( 1 );
    g_U9890 = 0;
    if (NOT (IS_CHAR_DEAD( sub_265() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_265() )))
        {
            SET_CHAR_VISIBLE( sub_265(), 1 );
            SET_CHAR_COLLISION( sub_265(), 1 );
            SET_CHAR_COORDINATES( sub_265(), -639.60380000, -688.59700000, 6.05100000 );
        }
        else
        {
            SET_CHAR_COLLISION( sub_265(), 1 );
            SET_CHAR_VISIBLE( sub_265(), 1 );
            WARP_CHAR_FROM_CAR_TO_COORD( sub_265(), -639.60380000, -688.59700000, 6.05100000 );
        }
        FREEZE_CHAR_POSITION( sub_265(), 1 );
    }
    while (NOT (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT/END_CREDITS_SPEECH" )))
    {
        WAIT( 0 );
    }
    PLAY_SOUND_FRONTEND( -1, "END_CREDITS_SPEECH" );
    WAIT( 4000 );
    LOAD_SCENE( -639.60380000, -688.59700000, 5.90510000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    if (IS_VEH_DRIVEABLE( l_U693 ))
    {
        DELETE_CAR( ref l_U693 );
    }
    if (NOT (IS_CHAR_DEAD( sub_265() )))
    {
        FREEZE_CHAR_POSITION( sub_265(), 0 );
    }
    # -NULL-0xc27cb1( 1 );
    FORCE_WIND( -1 );
    sub_18821( ref l_U591 );
    if (NOT (IS_CHAR_DEAD( sub_265() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_265() )))
        {
            SET_CHAR_VISIBLE( sub_265(), 1 );
            SET_CHAR_COLLISION( sub_265(), 1 );
            SET_CHAR_COORDINATES( sub_265(), -639.60380000, -688.59700000, 6.05100000 );
        }
        else
        {
            SET_CHAR_COLLISION( sub_265(), 1 );
            SET_CHAR_VISIBLE( sub_265(), 1 );
            WARP_CHAR_FROM_CAR_TO_COORD( sub_265(), -639.60380000, -688.59700000, 6.05100000 );
        }
    }
    SET_GAME_CAM_HEADING( 0.00000000 );
    WAIT( 2000 );
    if ((IS_SCREEN_FADING_OUT()) || (IS_SCREEN_FADED_OUT()))
    {
        DO_SCREEN_FADE_IN( 3000 );
    }
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_265() )))
    {
        SET_PLAYER_CONTROL( sub_358(), 1 );
        FREEZE_CHAR_POSITION( sub_265(), 0 );
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    sub_19126();
    g_U9069 = 1;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_18821(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_19126()
{
    sub_19135();
    return;
}

void sub_19135()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_19153();
    sub_19212( iVar2, iVar3, iVar4 );
    return;
}

void sub_19153()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U478[I] = 4;
    }
    return;
}

void sub_19212(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_19243( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_19243(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_19339( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_19339( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_19339( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_19339( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_19339( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_19339( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_19916( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4) AND (NOT g_U10981[iParam0]._fU144._fU12))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_20334( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_20334( 0, 4 );
            }
        }
    }
    if (NOT (sub_20423( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_358(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_358() );
    }
    sub_29655();
    bVar27 = true;
    uVar28 = sub_19916( iParam0, iVar7 );
    uVar29 = sub_30297( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 6) || (iVar30 == 5))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_30828( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_31258();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_31343( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_31400( iParam0 );
                sub_31535( 0 );
                sub_31616( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_31721();
        }
    }
    if (bParam2)
    {
        sub_31258();
        sub_31809();
        sub_31535( 0 );
    }
    if (bParam3)
    {
        sub_31258();
        sub_31849();
        sub_31535( 0 );
        sub_31616( uVar29, 0 );
    }
    sub_31900();
    return;
}

void sub_19339(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_19916(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_19990( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_19990(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_20334(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_20423(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_20631( uParam1 );
        break;
        case 1:
        bVar8 = sub_22709( uParam1 );
        break;
        case 2:
        bVar8 = sub_22935( uParam1 );
        break;
        case 3:
        bVar8 = sub_23085( uParam1 );
        break;
        case 4:
        bVar8 = sub_23363( uParam1 );
        break;
        case 5:
        bVar8 = sub_23666( uParam1 );
        break;
        case 6:
        bVar8 = sub_23865( uParam1 );
        break;
        case 7:
        bVar8 = sub_24091( uParam1 );
        break;
        case 8:
        bVar8 = sub_24326( uParam1 );
        break;
        case 9:
        bVar8 = sub_24701( uParam1 );
        break;
        case 10:
        bVar8 = sub_24948( uParam1 );
        break;
        case 11:
        bVar8 = sub_25087( uParam1 );
        break;
        case 12:
        bVar8 = sub_25386( uParam1 );
        break;
        case 13:
        bVar8 = sub_25614( uParam1 );
        break;
        case 14:
        bVar8 = sub_25901( uParam1 );
        break;
        case 15:
        bVar8 = sub_26183( uParam1 );
        break;
        case 16:
        bVar8 = sub_26465( uParam1 );
        break;
        case 17:
        bVar8 = sub_26666( uParam1 );
        break;
        case 18:
        bVar8 = sub_26739( uParam1 );
        break;
        case 19:
        bVar8 = sub_26953( uParam1 );
        break;
        case 20:
        bVar8 = sub_27206( uParam1 );
        break;
        case 21:
        bVar8 = sub_27453( uParam1 );
        break;
        case 22:
        bVar8 = sub_27654( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_22314( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_19916( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_27977( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_20631(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_20910( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_20910( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_20910( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_20910( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_20910( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_20910( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_20910( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_20910( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_20910( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_20910( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_20910( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_20910( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_20910( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_20910( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_20910( iVar3, 0, sub_22192(), sub_22458(), 0, 0 );
        break;
        default:
        sub_22617( "Friend 1", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Friend 1", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_20910(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_20921( uParam1 );
    sub_21095( uParam0, 0, uParam2 );
    sub_21095( uParam0, 1, uParam3 );
    sub_21095( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_19153();
    return;
}

void sub_20921(unknown uParam0)
{
    ADD_SCORE( sub_358(), uParam0 );
    sub_20946( uParam0 );
    return;
}

void sub_20946(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_19990( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_21095(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_21252( uParam0 );
    }
    return;
}

void sub_21252(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 )))))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_22192()
{
    switch (l_U478[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_22314( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_22314(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_22458()
{
    switch (l_U478[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_22314( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_22617(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_22709(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_20910( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_22617( "Contact 2", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 2", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22935(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_20910( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_22617( "Girl 3", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Girl 3", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23085(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_20910( iVar3, 0, sub_22192(), sub_22458(), 0, 0 );
        break;
        default:
        sub_22617( "Friend 4", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Friend 4", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23363(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_20910( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_20910( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_20910( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_20910( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_22617( "Contact 5", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 5", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23666(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_22617( "Contact 7", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 7", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23865(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_20910( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_22617( "Contact 7b", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 7b", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24091(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_20910( iVar3, 0, sub_22192(), sub_22458(), 0, 0 );
        break;
        default:
        sub_22617( "Friend 8", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Friend 8", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24326(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_20910( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_20910( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_20910( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_20910( iVar3, 0, sub_22192(), sub_22458(), 0, 0 );
        break;
        default:
        sub_22617( "Friend 9", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Friend 9", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24701(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_20910( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_20910( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_22617( "Contact 10", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_22617( "Contact 10", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24948(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_22617( "Girl 11", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Girl 11", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25087(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_20910( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_20910( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_20910( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_20910( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_20910( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_22617( "Contact 12", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 12", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25386(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_20910( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_22617( "Contact 13", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 13", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25614(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_20910( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_20910( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_20910( iVar3, 0, sub_22192(), sub_22458(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_22617( "Friend 15", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Friend 15", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25901(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_20910( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_20910( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_20910( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_22617( "Contact 16", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 16", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26183(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_20910( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_20910( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_20910( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_22617( "Contact 18", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 18", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26465(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_22617( "Contact 19", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 19", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26666(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_22617( "Girl 20", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26739(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_22617( "Contact 21", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 21", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26953(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_20910( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_20910( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_22617( "Contact 22", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 22", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27206(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_20910( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_20910( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_20910( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_22617( "Contact 24", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 24", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27453(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_20910( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_20910( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_22617( "Contact 25", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_22617( "Contact 25", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27654(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_20910( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_22617( "Girl 26", 1 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_22617( "Girl 26", 0 );
        sub_20910( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_27977(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_28025( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_28756( iParam1 );
    }
    return;
}

int sub_28025(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_28165( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_28165(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_28347( 0 );
    return;
}

void sub_28347(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_28602();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_28602()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_28756(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_29089( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_29089( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_29089( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_29089( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_29089( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_29089( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_29089( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_29089( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_29089( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_29089( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_29089( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_29089( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_29089( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_29089( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_29089( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_29089( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_29089( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_29089( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_29089( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_29089(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_29655()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_29693( 5, g_U569[I] )) == 1))
        {
            if ((sub_29693( 1, g_U569[I] )) != 0)
            {
                sub_29979( I );
            }
        }
    }
    if (NOT sub_30145())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_29693(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_29979(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_30064( g_U569 - 1 );
    return;
}

void sub_30064(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_30145()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_29693( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_30297(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_19990( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_30828(unknown uParam0, unknown uParam1)
{
    sub_30847( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_30847(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_31258()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_31343(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_31400(unknown uParam0)
{
    sub_31409();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_31409()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_31535(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_31616(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_31721()
{
    sub_31730();
    return;
}

void sub_31730()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_31809()
{
    sub_31730();
    return;
}

void sub_31849()
{
    sub_31730();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_31900()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_31922();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_31922()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

