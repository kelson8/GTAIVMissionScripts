void main()
{
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U14 = 0;
    l_U30 = {65270, 65435, 334};
    l_U33 = 180.00000000;
    l_U34 = {-271.52640000, -88.08870000, 337.44540000};
    l_U37 = 270.00000000;
    l_U38 = {-271.86000000, -112.76730000, 337.44540000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_119();
    }
    sub_575( l_U41 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_411() ))
        {
            switch (l_U4)
            {
                case 0:
                if (IS_CHAR_ON_FOOT( sub_719() ))
                {
                    DRAW_COLOURED_CYLINDER( l_U25._fU0, l_U25._fU4, l_U25._fU8 - 3.50000000, 1.60000000, 1.60000000, 0, 132, 202, 255 );
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_719(), l_U25._fU0, l_U25._fU4, l_U25._fU8 - 3.50000000, 1.60000000, 1.60000000, 1.60000000, 0 ))
                    {
                        if (sub_876( 2, 0 ))
                        {
                            if (sub_1164( 2, l_U23, 0 ))
                            {
                                sub_141( 2, "empire_up" );
                                l_U4 = 1;
                            }
                        }
                        else
                        {
                            sub_141( 2, "empire_up" );
                        }
                    }
                    else
                    {
                        sub_141( 2, "empire_up" );
                    }
                }
                else
                {
                    sub_141( 2, "empire_up" );
                }
                break;
                case 1:
                sub_1869();
                break;
            }
        }
        else
        {
            sub_119();
        }
    }
    return;
}

void sub_119()
{
    sub_141( 2, "empire_up" );
    if (l_U5 == 1)
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

void sub_141(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((l_U3) AND (g_U9172 == iParam0))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_362();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_411(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_362()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_411()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_575(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    l_U25._fU0 = uParam0._fU4[0]._fU0;
    l_U25._fU4 = uParam0._fU4[0]._fU4;
    l_U25._fU8 = uParam0._fU4[0]._fU8;
    l_U25._fU8 += 3;
    l_U23 = "empire_up";
    return;
}

void sub_719()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_876(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_411() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_411() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_411() )))))
                {
                    if (NOT sub_972())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_719() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_1057())
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

int sub_972()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1057()
{
    return sub_1068( 0, 0 );
}

int sub_1068(boolean bParam0, unknown uParam1)
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

int sub_1164(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_876( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_411(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_1439();
                l_U1 = 1;
                g_U9173 = 6;
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
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_1439()
{
    return sub_1068( 1, 1 );
}

void sub_1869()
{
    switch (l_U5)
    {
        case 0:
        if (NOT IS_THIS_A_MINIGAME_SCRIPT())
        {
            SET_MINIGAME_IN_PROGRESS( 1 );
        }
        DO_SCREEN_FADE_OUT( 3000 );
        l_U5 = 1;
        break;
        case 1:
        if (IS_SCREEN_FADED_OUT())
        {
            SET_CHAR_COORDINATES_DONT_WARP_GANG( sub_719(), l_U30._fU0, l_U30._fU4, l_U30._fU8 );
            if (sub_1999())
            {
                sub_2090( -265.50630000, -107.89000000, 333.76420000, -265.18370000, -109.84810000, 333.76420000 );
            }
            sub_141( 2, "empire_up" );
            SET_CHAR_HEADING( sub_719(), l_U33 );
            GET_GAME_TIMER( ref l_U11 );
            SET_CAM_BEHIND_PED( sub_719() );
            LOAD_SCENE( l_U30._fU0, l_U30._fU4, l_U30._fU8 );
            l_U5 = 2;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U12 );
        l_U13 = l_U12 - l_U11;
        if (l_U13 > 1000)
        {
            DO_SCREEN_FADE_IN( 3000 );
            l_U5 = 3;
        }
        break;
        case 3:
        if (IS_SCREEN_FADED_IN())
        {
            SET_PLAYER_CONTROL( sub_411(), 1 );
            if (IS_THIS_A_MINIGAME_SCRIPT())
            {
                SET_MINIGAME_IN_PROGRESS( 0 );
            }
            sub_141( 2, "empire_up" );
            l_U4 = 0;
            l_U5 = 0;
        }
        break;
    }
    return;
}

int sub_1999()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_2090(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    g_U9181 = 1;
    g_U9182[0] = {uParam0};
    g_U9182[1] = {uParam3};
    return;
}

