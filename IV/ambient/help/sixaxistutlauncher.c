void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U4 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            ;
        }
        if ((NOT g_U8669) AND (g_U822))
        {
            if ((NOT g_U9893._fU12) AND (NOT g_U10978))
            {
                if (NOT l_U4)
                {
                    if (NOT (IS_CHAR_DEAD( sub_104() )))
                    {
                        if ((NOT g_U9893._fU12) AND ((NOT g_U10978) AND (sub_158())))
                        {
                            g_U10978 = 1;
                            l_U4 = 1;
                            sub_547();
                            sub_598();
                            REQUEST_SCRIPT( "sixAxisTutorial" );
                            sub_423();
                            SET_PLAYER_CONTROL( sub_191(), 0 );
                            DO_SCREEN_FADE_OUT( 500 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                                sub_598();
                            }
                            sub_722();
                            while (NOT (HAS_SCRIPT_LOADED( "sixAxisTutorial" )))
                            {
                                sub_598();
                                WAIT( 0 );
                                REQUEST_SCRIPT( "sixAxisTutorial" );
                            }
                            sub_598();
                            START_NEW_SCRIPT( "sixAxisTutorial", 8192 );
                        }
                        else
                        {
                            g_U822 = 0;
                            g_U823 = 1;
                        }
                    }
                }
                else if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "sixAxisTutorial" )) == 0) AND (NOT g_U10978))
                {
                    l_U4 = 0;
                    g_U822 = 0;
                    g_U823 = 1;
                }
            }
        }
        if (g_U8669)
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    return;
}

void sub_104()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_158()
{
    if ((IS_SCREEN_FADED_OUT()) || (IS_SCREEN_FADING()))
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_191() )))
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    if (g_U10980)
    {
        return 0;
    }
    if (NOT g_U26755)
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_191() )))
    {
        return 0;
    }
    if (NOT sub_304())
    {
        return 0;
    }
    if ((g_U9914._fU0) || (IS_AUTO_SAVE_IN_PROGRESS()))
    {
        return 0;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_191(), 0 ))
    {
        PRINT_HELP( "ATUT_WANTED" );
        sub_423();
        return 0;
    }
    return 1;
}

void sub_191()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_304()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

void sub_423()
{
    return sub_434( 0, 1 );
}

int sub_434(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((g_U555 != 9) AND (uParam1))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

void sub_547()
{
    g_U811 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_598()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U26757 = iVar2 + 2000;
    return;
}

void sub_722()
{
    sub_731();
    sub_834( ref g_U9893._fU68 );
    sub_883();
    return;
}

void sub_731()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_834(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_883()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_921( 1, g_U569[I] )) == 0)
        {
            sub_1172( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_1350())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_921(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1172(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1257( g_U569 - 1 );
    return;
}

void sub_1257(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1350()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_921( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

