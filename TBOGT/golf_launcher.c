void main()
{
    int iVar2;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 2;
    l_U11 = 29;
    l_U12 = 1;
    l_U13 = 3;
    l_U14 = 23;
    l_U15 = 87;
    l_U16 = 28;
    l_U17 = 4;
    l_U18 = 20;
    l_U19 = 7;
    l_U20 = {-570.74790000, -13.37720000, 3.81240000};
    l_U23 = 0;
    l_U24 = 0;
    l_U34 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_126();
    }
    SETTIMERA( 0 );
    while (true)
    {
        WAIT( 0 );
        switch (l_U34)
        {
            case 0:
            iVar2 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "golf" );
            if (iVar2 > 0)
            {
                l_U34 = 1;
            }
            if (sub_244())
            {
                g_U2674 = 1;
                sub_895();
                if (l_U23 == 0)
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GOLFPRESSLB" )))
                    {
                        CLEAR_HELP();
                        PRINT_HELP_FOREVER( "GOLFPRESSLB" );
                    }
                    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                    {
                        if (l_U24 > 0)
                        {
                            CLEAR_HELP();
                            PRINT_HELP_FOREVER( "GOLFBUDDIES" );
                            l_U23++;
                        }
                        else
                        {
                            sub_1235( 2 );
                            sub_1474();
                        }
                    }
                }
                else if (l_U23 == 1)
                {
                    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                    {
                        CLEAR_HELP();
                        l_U23 = 0;
                    }
                    else if ((IS_BUTTON_JUST_PRESSED( 0, 16 )) || (IS_CONTROL_JUST_PRESSED( 2, 115 )))
                    {
                        sub_1235( 1 );
                        sub_1474();
                    }
                    else if ((IS_BUTTON_JUST_PRESSED( 0, 17 )) || (IS_CONTROL_JUST_PRESSED( 2, 116 )))
                    {
                        sub_1235( 0 );
                        sub_1474();
                    };;;
                }
            }
            else
            {
                g_U2674 = 0;
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GOLFBUDDIES" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GOLFPRESSLB" )))
                {
                    CLEAR_HELP();
                    l_U23 = 0;
                }
                if (NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                {
                    sub_126();
                }
            }
            break;
            case 1:
            iVar2 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "golf" );
            if (iVar2 == 0)
            {
                if (NOT IS_SCREEN_FADED_IN())
                {
                    DO_SCREEN_FADE_IN( 500 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                }
                SETTIMERA( 0 );
                l_U23 = 0;
                l_U34 = 0;
            }
            break;
        }
    }
    return;
}

void sub_126()
{
    CLEAR_HELP();
    g_U2674 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_244()
{
    if (NOT g_U15811[30])
    {
        return 0;
    }
    if (g_U12379)
    {
        if (NOT (sub_282( 7 )))
        {
            return 0;
        }
    }
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        return 0;
    }
    if (NOT sub_561())
    {
        return 0;
    }
    if (sub_617())
    {
        return 0;
    }
    if (TIMERA() < 1000)
    {
        return 0;
    }
    if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_680(), -571.03380000, -13.51570000, 6.31240000, 2.50000000, 2.50000000, 2.50000000, 1 )))
    {
        return 0;
    }
    if (IS_PLAYER_PLAYING( sub_771() ))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_771(), 0 ))
        {
            return 0;
        }
        if (NOT (IS_CHAR_INJURED( sub_680() )))
        {
            if (IS_PED_RAGDOLL( sub_680() ))
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_282(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12379)
    {
        return 1;
    }
    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_349( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_349(unknown uParam0)
{
    return 0;
}

int sub_561()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

int sub_617()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_680()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_771()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_895()
{
    int iVar2;

    iVar2 = 0;
    l_U24 = 0;
    while (iVar2 < 2)
    {
        l_U31[iVar2] = nil;
        if (sub_937( ref l_U28[iVar2], iVar2 ))
        {
            l_U31[iVar2] = sub_1013( iVar2 );
            if (l_U31[iVar2] != nil)
            {
                l_U24++;
            }
        }
        iVar2++;
    }
    return;
}

int sub_937(unknown uParam0, int iParam1)
{
    if (iParam1 >= 2)
    {
        return 0;
    }
    (uParam0^) = g_U28807._fU0[iParam1];
    if (g_U28807._fU0[iParam1] == 34)
    {
        return 0;
    }
    return 1;
}

void sub_1013(int iParam0)
{
    if (iParam0 >= 2)
    {
        return nil;
    }
    return g_U28807._fU12[iParam0];
}

void sub_1235(int iParam0)
{
    if (iParam0 == 2)
    {
        l_U25._fU0 = nil;
        l_U25._fU4 = nil;
        l_U25._fU8 = iParam0;
    }
    else if (iParam0 == 0)
    {
        if (l_U28[0] == 3)
        {
            l_U25._fU0 = l_U31[1];
            l_U25._fU4 = l_U31[0];
        }
        else if (l_U28[0] == 7)
        {
            l_U25._fU0 = l_U31[0];
            l_U25._fU4 = l_U31[1];
        }
        l_U25._fU8 = iParam0;
    }
    else if (iParam0 == 1)
    {
        if (l_U28[0] == 3)
        {
            l_U25._fU0 = l_U31[0];
            l_U25._fU4 = l_U31[1];
        }
        else if (l_U28[0] == 7)
        {
            l_U25._fU0 = l_U31[1];
            l_U25._fU4 = l_U31[0];
        }
        l_U25._fU8 = iParam0;
    };;;
    return;
}

int sub_1474()
{
    if (g_U12379)
    {
        if (NOT (sub_1494( 7 )))
        {
            PRINT_NOW( "GOLF_CLOSED", 7500, 0 );
            sub_126();
            return 0;
        }
    }
    CLEAR_HELP();
    sub_1915();
    SET_PLAYER_CONTROL( sub_771(), 0 );
    REQUEST_SCRIPT( "golf" );
    while (NOT (HAS_SCRIPT_LOADED( "golf" )))
    {
        REQUEST_SCRIPT( "golf" );
        WAIT( 0 );
    }
    START_NEW_SCRIPT_WITH_ARGS( "golf", ref l_U25, 3, 8192 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "golf" );
    l_U34 = 1;
    return 1;
}

int sub_1494(int iParam0)
{
    unknown uVar3;

    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_349( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
            if (g_U28807._fU60[uVar3] > 0)
            {
                g_U28807._fU60[uVar3]--;
            }
            g_U28807._fU124 = 0;
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        g_U28807._fU32 = iParam0;
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        g_U28807._fU28 = iParam0;
        g_U28807._fU60[uVar3]--;
        if (iParam0 == 12)
        {
            g_U28807._fU124 = 1;
        }
        return 1;
    }
    g_U28807._fU32 = iParam0;
    return 0;
}

void sub_1915()
{
    sub_1924();
    sub_2069( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_2143();
    return;
}

void sub_1924()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_2069(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_2143()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2181( 1, g_U575[I] )) == 0)
        {
            sub_2432( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_2610())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_2181(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2432(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2517( g_U575 - 1 );
    return;
}

void sub_2517(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2610()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2181( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

