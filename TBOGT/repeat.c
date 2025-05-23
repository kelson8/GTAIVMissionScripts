void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            g_U43132 = 0;
            g_U43133 = 0;
            g_U43134 = 0;
        }
        if (NOT (g_U43132 == 0))
        {
            if (sub_129())
            {
                sub_184();
            }
            g_U43132 = 0;
        }
    }
    return;
}

int sub_129()
{
    if (g_U12379)
    {
        return 0;
    }
    if (NOT g_U15811[4])
    {
        return 0;
    }
    return 1;
}

void sub_184()
{
    int iVar2;
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    iVar2 = 11;
    iVar3 = -1;
    if (NOT (IS_PLAYER_PLAYING( sub_199() )))
    {
        g_U43132 = 0;
        PRINTSTRING( "Repeat Mission: Failed - player not playing\n" );
        return;
    }
    if (NOT (IS_PLAYER_CONTROL_ON( sub_199() )))
    {
        g_U43132 = 0;
        PRINTSTRING( "Repeat Mission: Failed - player control is not on\n" );
        return;
    }
    if (IS_MINIGAME_IN_PROGRESS())
    {
        g_U43132 = 0;
        PRINTSTRING( "Repeat Mission: Failed - minigame in progress\n" );
        return;
    }
    if (NOT (sub_478( ref iVar2, ref iVar3 )))
    {
        g_U43132 = 0;
        SCRIPT_ASSERT( "Repeat Mission: Failed to find mission\n" );
        return;
    }
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        g_U43132 = 0;
        PRINTSTRING( "Repeat Mission: Failed - replay requested\n" );
        return;
    }
    iVar4 = sub_1515( iVar2, iVar3 );
    if (iVar4 == -1)
    {
        g_U43132 = 0;
        SCRIPT_ASSERT( "Repeat Mission: Failed to find trigger for mission\n" );
        return;
    }
    GET_INTERIOR_FROM_CHAR( sub_1782(), ref uVar5 );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "bowl_trigger" )) > 0)
    {
        g_U43132 = 0;
        PRINTSTRING( "Repeat Mission: Player choosing to play bowling\n" );
        return;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambStripClub" )) > 0)
    {
        g_U43132 = 0;
        PRINTSTRING( "Repeat Mission: Player at a strip club\n" );
        return;
    }
    if (g_U2692[0]._fU56)
    {
        if ((NOT (g_U2692[0]._fU4 == 1)) AND (NOT (g_U2692[0]._fU4 == 0)))
        {
            return;
        }
    }
    if ((IS_CHAR_IN_ANY_HELI( sub_1782() )) || ((IS_CHAR_IN_ANY_TRAIN( sub_1782() )) || (IS_CHAR_IN_MODEL( sub_1782(), -960289747 ))))
    {
        g_U43132 = 0;
        PRINTSTRING( "Repeat Mission: Failed - other reason\n" );
        return;
    }
    g_U12379 = 1;
    g_U43133 = 1;
    sub_2191();
    PRINT_BIG( ref g_U22960[iVar4]._fU20, 20000, 2 );
    DO_SCREEN_FADE_OUT( 500 );
    REQUEST_SCRIPT( ref g_U22960[iVar4]._fU36 );
    while (NOT (HAS_SCRIPT_LOADED( ref g_U22960[iVar4]._fU36 )))
    {
        WAIT( 0 );
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (NOT (IS_PLAYER_PLAYING( sub_199() )))
    {
        sub_3148( iVar4 );
        return;
    }
    if (IS_CHAR_DEAD( sub_1782() ))
    {
        sub_3148( iVar4 );
        return;
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1782() );
    CLEAR_WANTED_LEVEL( sub_199() );
    CLEAR_HELP();
    CLEAR_BRIEF();
    sub_3272();
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar6 );
    if (DOES_VEHICLE_EXIST( uVar6 ))
    {
        DELETE_CAR( ref uVar6 );
    }
    uVar6 = nil;
    sub_3391( iVar2, iVar3, 1 );
    sub_3558( iVar2, iVar3 );
    sub_3838( iVar4 );
    SET_CHAR_COMPONENT_VARIATION( sub_1782(), 3, 0, 0 );
    g_U2792 = 1;
    WAIT( 0 );
    if (NOT (IS_PLAYER_PLAYING( sub_199() )))
    {
        sub_3148( iVar4 );
        return;
    }
    if (IS_CHAR_DEAD( sub_1782() ))
    {
        sub_3148( iVar4 );
        return;
    }
    GET_CHAR_COORDINATES( sub_1782(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    GET_GROUND_Z_FOR_3D_COORD( uVar7._fU0, uVar7._fU4, uVar7._fU8, ref uVar10 );
    SET_CHAR_COORDINATES( sub_1782(), uVar7._fU0, uVar7._fU4, uVar10 );
    SET_CHAR_HEALTH( sub_1782(), 200 );
    ADD_ARMOUR_TO_CHAR( sub_1782(), 100 );
    uVar11 = START_NEW_SCRIPT( ref g_U22960[iVar4]._fU36, 8192 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U22960[iVar4]._fU36 );
    while ((NOT IS_SCREEN_FADED_IN()) AND (IS_THREAD_ACTIVE( uVar11 )))
    {
        WAIT( 0 );
    }
    CLEAR_THIS_BIG_PRINT( ref g_U22960[iVar4]._fU20 );
    while (IS_THREAD_ACTIVE( uVar11 ))
    {
        WAIT( 0 );
    }
    g_U12379 = 0;
    g_U43133 = 0;
    g_U43132 = 0;
    sub_3391( iVar2, iVar3, 0 );
    sub_4385( iVar2, iVar3 );
    sub_3864();
    return;
}

void sub_199()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_478(unknown uParam0, unknown uParam1)
{
    switch (g_U43132)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        (uParam0^) = 0;
        break;
        case 13:
        case 14:
        case 15:
        (uParam0^) = 1;
        break;
        case 17:
        case 18:
        case 19:
        case 20:
        (uParam0^) = 2;
        break;
        case 21:
        case 22:
        (uParam0^) = 3;
        break;
        case 23:
        (uParam0^) = 4;
        break;
        case 24:
        case 25:
        case 26:
        (uParam0^) = 5;
        break;
        case 27:
        (uParam0^) = 6;
        break;
        default:
        SCRIPT_ASSERT( "Repeat Mission: Find_Mission() - Invalid strand\n" );
        return 0;
    }
    switch (g_U43132)
    {
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        case 3:
        (uParam1^) = 3;
        break;
        case 4:
        (uParam1^) = 4;
        break;
        case 5:
        (uParam1^) = 7;
        break;
        case 6:
        (uParam1^) = 6;
        break;
        case 7:
        (uParam1^) = 5;
        break;
        case 8:
        (uParam1^) = 8;
        break;
        case 9:
        (uParam1^) = 9;
        break;
        case 10:
        (uParam1^) = 10;
        break;
        case 11:
        (uParam1^) = 11;
        break;
        case 12:
        (uParam1^) = 12;
        break;
        case 13:
        (uParam1^) = 0;
        break;
        case 14:
        (uParam1^) = 1;
        break;
        case 15:
        (uParam1^) = 2;
        break;
        case 17:
        (uParam1^) = 0;
        break;
        case 18:
        (uParam1^) = 1;
        break;
        case 19:
        (uParam1^) = 2;
        break;
        case 20:
        (uParam1^) = 3;
        break;
        case 21:
        (uParam1^) = 1;
        break;
        case 22:
        (uParam1^) = 0;
        break;
        case 23:
        (uParam1^) = 0;
        break;
        case 24:
        (uParam1^) = 0;
        break;
        case 25:
        (uParam1^) = 1;
        break;
        case 26:
        (uParam1^) = 2;
        break;
        case 27:
        (uParam1^) = 0;
        break;
        default:
        SCRIPT_ASSERT( "Repeat Mission: Find_Mission() - Invalid mission\n" );
        return 0;
    }
    return 1;
}

int sub_1515(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_1589( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U28562[iParam0]._fU0;
    iVar5 = g_U28562[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U22960[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_1589(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1782()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2191()
{
    sub_2200();
    sub_2345( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_2419();
    return;
}

void sub_2200()
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

void sub_2345(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_2419()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2457( 1, g_U575[I] )) == 0)
        {
            sub_2708( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_2886())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_2457(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2708(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2793( g_U575 - 1 );
    return;
}

void sub_2793(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2886()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2457( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3148(unknown uParam0)
{
    g_U43133 = 0;
    g_U43132 = 0;
    g_U12379 = 0;
    CLEAR_THIS_BIG_PRINT( ref g_U22960[uParam0]._fU20 );
    return;
}

void sub_3272()
{
    return sub_3283( 0, 1 );
}

int sub_3283(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((g_U560 != 9) AND (uParam1))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

void sub_3391(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        switch (uParam1)
        {
            case 1:
            g_U16014[0]._fU212._fU0 = uParam2;
            break;
            case 9:
            g_U16014[0]._fU212._fU0 = uParam2;
            break;
        }
        break;
        case 5:
        switch (uParam1)
        {
            case 0:
            g_U16014[0]._fU212._fU0 = uParam2;
            break;
            default:
        }
        break;
    }
    return;
}

void sub_3558(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        switch (uParam1)
        {
            case 6:
            g_U15811[70] = 1;
            break;
            default:
        }
        break;
        case 3:
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
        {
            TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "ability_vehicle" );
        }
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_gun_car" )) > 0)
        {
            g_U11191 = 1;
        }
        g_U11192 = 1;
        g_U11198 = 1;
        break;
        case 2:
        switch (uParam1)
        {
            case 0:
            case 2:
            case 1:
            g_U15811[72] = 1;
            break;
            case 3:
            g_U15811[71] = 1;
            break;
        }
        break;
    }
    return;
}

void sub_3838(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (iParam0 == -1)
    {
        g_U10965 = 121;
        sub_3864();
        return;
    }
    if (g_U22960[iParam0]._fU8 == 0)
    {
        return;
    }
    sub_3923( iParam0 );
    uVar3 = g_U10965;
    uVar4 = g_U22960[iParam0]._fU100;
    SET_RICH_PRESENCE_TEMPLATESP1( uVar3, 1, uVar4 );
    return;
}

void sub_3864()
{
    unknown uVar2;

    uVar2 = g_U10965;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_3923(unknown uParam0)
{
    g_U10965 = g_U22960[uParam0]._fU8;
    if (g_U10965 >= 50000)
    {
        g_U10965 = sub_3969( g_U10965 );
    }
    return;
}

void sub_3969(unknown Result)
{
    return Result;
}

void sub_4385(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        switch (uParam1)
        {
            case 6:
            g_U15811[70] = 0;
            break;
            default:
        }
        break;
        case 3:
        g_U11192 = 0;
        g_U11198 = 0;
        break;
        case 2:
        switch (uParam1)
        {
            case 0:
            case 2:
            case 1:
            g_U15811[72] = 0;
            break;
            case 3:
            g_U15811[71] = 0;
            break;
        }
        break;
    }
    return;
}

