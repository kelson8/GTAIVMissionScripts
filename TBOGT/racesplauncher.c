void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 1;
    l_U80 = 6;
    l_U118 = nil;
    l_U131 = nil;
    l_U149 = 1;
    l_U184 = nil;
    l_U204 = 1;
    l_U280 = 6;
    l_U285 = 0;
    l_U286 = -1;
    l_U287 = 0;
    l_U288 = 0;
    l_U293 = 1;
    l_U471 = {612.83010000, 752.26000000, 4.03000000};
    l_U474 = {-1034.89000000, 667.39000000, 5.24000000};
    l_U477 = {816.47990000, 321.37000000, 7.38000000};
    l_U480 = 0;
    while (true)
    {
        WAIT( 0 );
        if ((g_U15811[29] == 1) AND ((sub_269()) AND (NOT (IS_CHAR_DEAD( sub_220() )))))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_220(), l_U474._fU0, l_U474._fU4, l_U474._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_220(), l_U471._fU0, l_U471._fU4, l_U471._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_220(), l_U477._fU0, l_U477._fU4, l_U477._fU8, 100.00000000, 100.00000000, 100.00000000, 0 ))))
            {
                if ((NOT (IS_BIT_SET( g_U10938._fU0, 4 ))) AND (NOT g_U12379))
                {
                    if ((LOCATE_CHAR_ON_FOOT_3D( sub_220(), l_U474._fU0, l_U474._fU4, l_U474._fU8, 2.50000000, 2.50000000, 2.50000000, 1 )) || ((LOCATE_CHAR_ON_FOOT_3D( sub_220(), l_U471._fU0, l_U471._fU4, l_U471._fU8, 2.50000000, 2.50000000, 2.50000000, 1 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_220(), l_U477._fU0, l_U477._fU4, l_U477._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))))
                    {
                        sub_2389();
                        g_U12379 = 1;
                        REQUEST_SCRIPT( "raceSP" );
                        while (NOT (HAS_SCRIPT_LOADED( "raceSP" )))
                        {
                            WAIT( 0 );
                        }
                        START_NEW_SCRIPT( "raceSP", 8192 );
                        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "raceSP" );
                        TERMINATE_THIS_SCRIPT();
                    }
                }
            }
            else
            {
                TERMINATE_THIS_SCRIPT();
            }
        }
    }
    return;
}

void sub_220()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_269()
{
    if ((g_U10953._fU4) || (IS_AUTO_SAVE_IN_PROGRESS()))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( sub_220() ))
    {
        sub_361( "IF (IS_CHAR_DEAD(PLAYER_CHAR_ID()))", "\n" );
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_382() )))
    {
        sub_361( "IF NOT (IS_PLAYER_PLAYING(PLAYER_ID()))", "\n" );
        return 0;
    }
    if (g_U12379)
    {
        sub_361( "IF (g_onMission)", "\n" );
        return 0;
    }
    if (g_U12381)
    {
        sub_361( "IF (g_onActivityPhonecall)", "\n" );
        return 0;
    }
    if ((sub_625()) || (sub_575()))
    {
        sub_361( "OR (IS_PLAYER_LOOKING_AT_NETWORK_CELLPHONE())", "\n" );
        return 0;
    }
    if (NOT g_U22957)
    {
        sub_361( "IF NOT (g_allowStrandUpdates)", "\n" );
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_382() )))
    {
        sub_361( "IF NOT (CAN_PLAYER_START_MISSION(PLAYER_ID()))", "\n" );
        return 0;
    }
    if (NOT (sub_864( 1, 1 )))
    {
        sub_361( "IF NOT (CAN_PLAYER_START_CUTSCENE())", "\n" );
        return 0;
    }
    if (sub_1207())
    {
        sub_361( "IF NOT (Check_If_Friend_Activity_Setup())", "\n" );
        return 0;
    }
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        sub_361( "IF (IS_BIT_SET(g_replay.flags, REP_DO_REPLAY))", "\n" );
        return 0;
    }
    if (NOT sub_1901())
    {
        sub_361( "IF NOT (Check_If_Contact_Point_Triggering_Delay_Expired())", "\n" );
        return 0;
    }
    return 1;
}

void sub_361(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_382()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_575()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_625()
{
    if (g_U560 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_864(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_220() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_220(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 > 1.01100000) || (fVar6 < 0.95000000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_220() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_220(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_220()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_220() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_220() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_382() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_382() )))
    {
        return 0;
    }
    return 1;
}

int sub_1207()
{
    int I;
    unknown uVar3;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        if (sub_1233( I ))
        {
            uVar3 = sub_1335( I );
            if (g_U20825[uVar3]._fU0)
            {
                if (NOT (g_U14925[I]._fU80._fU0 == 0))
                {
                    PRINTSTRING( ".....Check_If_Friend_Activity_Setup: " );
                    PRINTINT( I );
                    PRINTSTRING( " strand setup\n" );
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_1233(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: return 1;
    }
    return 0;
}

int sub_1335(unknown uParam0)
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
        case 8: return 9;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1566( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_1566(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_1901()
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

void sub_2389()
{
    sub_2398();
    sub_2543( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_2617();
    return;
}

void sub_2398()
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

void sub_2543(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_2617()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2655( 1, g_U575[I] )) == 0)
        {
            sub_2906( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_3084())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_2655(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2906(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2991( g_U575 - 1 );
    return;
}

void sub_2991(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_3084()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2655( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

