void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 0;
    l_U8 = 0;
    l_U16 = 0;
    l_U32 = {65270, 65435, 334};
    l_U35 = 180.00000000;
    l_U36 = {-271.52640000, -88.08870000, 337.44540000};
    l_U39 = 270.00000000;
    l_U40 = {-271.86000000, -112.76730000, 337.44540000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_137();
    }
    sub_593( l_U43 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_429() ))
        {
            switch (l_U6)
            {
                case 0:
                if (IS_CHAR_ON_FOOT( sub_737() ))
                {
                    DRAW_COLOURED_CYLINDER( l_U27._fU0, l_U27._fU4, l_U27._fU8 - 3.50000000, 1.60000000, 1.60000000, 0, 132, 202, 255 );
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_737(), l_U27._fU0, l_U27._fU4, l_U27._fU8 - 3.50000000, 1.60000000, 1.60000000, 1.60000000, 0 ))
                    {
                        if (sub_894( 2, 0 ))
                        {
                            if (sub_1182( 2, l_U25, 0 ))
                            {
                                sub_159( 2, "empire_up" );
                                l_U6 = 1;
                            }
                        }
                        else
                        {
                            sub_159( 2, "empire_up" );
                        }
                    }
                    else
                    {
                        sub_159( 2, "empire_up" );
                    }
                }
                else
                {
                    sub_159( 2, "empire_up" );
                }
                break;
                case 1:
                sub_1887();
                break;
            }
        }
        else
        {
            sub_137();
        }
    }
    return;
}

void sub_137()
{
    sub_159( 2, "empire_up" );
    if (l_U7 == 1)
    {
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 2000 );
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_159(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((l_U5) AND (g_U10468 == iParam0))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_380();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_429(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_380()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_429()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_593(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    l_U27._fU0 = uParam0._fU4[0]._fU0;
    l_U27._fU4 = uParam0._fU4[0]._fU4;
    l_U27._fU8 = uParam0._fU4[0]._fU8;
    l_U27._fU8 += 3;
    l_U25 = "empire_up";
    return;
}

void sub_737()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_894(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_429() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_429() )))
            {
                if (((g_U10499) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_429() )))))
                {
                    if (NOT sub_990())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_737() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_1075())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_990()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1075()
{
    return sub_1086( 0, 0 );
}

int sub_1086(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((g_U558 != 9) AND (uParam1))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

int sub_1182(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_894( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_429(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_1457();
                l_U3 = 1;
                g_U10469 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10469 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_1457()
{
    return sub_1086( 1, 1 );
}

void sub_1887()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    switch (l_U7)
    {
        case 0:
        if (NOT IS_THIS_A_MINIGAME_SCRIPT())
        {
            SET_MINIGAME_IN_PROGRESS( 1 );
        }
        DO_SCREEN_FADE_OUT( 3000 );
        l_U7 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            SET_CHAR_COORDINATES_DONT_WARP_GANG( sub_737(), l_U32._fU0, l_U32._fU4, l_U32._fU8 );
            SET_CHAR_HEADING( sub_737(), l_U35 );
            if (g_U11090)
            {
                if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[0]._fU0 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_737(), -0.30000000, -1.50000000, -1.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    SET_CHAR_COORDINATES( g_U11028[0]._fU0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    SET_CHAR_HEADING( g_U11028[0]._fU0, l_U35 );
                }
                if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[1]._fU0 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_737(), 0.30000000, -2.30000000, -1.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    SET_CHAR_COORDINATES( g_U11028[1]._fU0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    SET_CHAR_HEADING( g_U11028[1]._fU0, l_U35 );
                }
            }
            sub_159( 2, "empire_up" );
            GET_GAME_TIMER( ref l_U13 );
            SET_CAM_BEHIND_PED( sub_737() );
            LOAD_SCENE( l_U32._fU0, l_U32._fU4, l_U32._fU8 );
            l_U7 = 2;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U14 );
        l_U15 = l_U14 - l_U13;
        if (l_U15 > 1000)
        {
            DO_SCREEN_FADE_IN( 3000 );
            l_U7 = 3;
        }
        break;
        case 3:
        if (IS_SCREEN_FADED_IN())
        {
            SET_PLAYER_CONTROL( sub_429(), 1 );
            if (IS_THIS_A_MINIGAME_SCRIPT())
            {
                SET_MINIGAME_IN_PROGRESS( 0 );
            }
            sub_159( 2, "empire_up" );
            l_U6 = 0;
            l_U7 = 0;
        }
        break;
    }
    return;
}

