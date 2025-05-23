void main()
{
    l_U5 = 1;
    l_U6 = 0;
    l_U7 = 1;
    l_U14 = 0;
    l_U17 = 2;
    l_U18 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_45();
    }
    while (l_U5)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U19 ))
        {
            if ((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_337() )) AND (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U19 )))
            {
                switch (l_U18)
                {
                    case 0:
                    l_U4 = l_U19;
                    g_U9207 = 0;
                    REGISTER_SCRIPT_WITH_AUDIO( 0 );
                    while (NOT (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\CASH_REGISTER" )))
                    {
                        WAIT( 0 );
                    }
                    if (DOES_OBJECT_EXIST( l_U4 ))
                    {
                        SET_OBJECT_DYNAMIC( l_U4, 0 );
                        FREEZE_OBJECT_POSITION( l_U4, 1 );
                    }
                    l_U18 = 1;
                    break;
                    case 1:
                    if (NOT l_U6)
                    {
                        if (IS_PLAYER_PLAYING( sub_337() ))
                        {
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4, 0.00000000, -0.60000000, 0.00000000, ref l_U11._fU0, ref l_U11._fU4, ref l_U11._fU8 );
                            if ((sub_799( l_U17, 0 )) AND (LOCATE_CHAR_ON_FOOT_3D( sub_716(), l_U11._fU0, l_U11._fU4, l_U11._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )))
                            {
                                if (sub_1097( l_U17, "TILL_01", 0 ))
                                {
                                    sub_67( l_U17, "TILL_01" );
                                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4, 0.00000000, -0.30000000, 0.00000000, ref l_U11._fU0, ref l_U11._fU4, ref l_U11._fU8 );
                                    GET_OBJECT_HEADING( l_U4, ref l_U8 );
                                    l_U9 = 0.05000000 * (ABSF( SIN( l_U8 ) ));
                                    l_U10 = 0.05000000 * (ABSF( COS( l_U8 ) ));
                                    if (DOES_OBJECT_EXIST( l_U4 ))
                                    {
                                        SET_OBJECT_DYNAMIC( l_U4, 0 );
                                        SET_OBJECT_RECORDS_COLLISIONS( l_U4, 1 );
                                    }
                                    PLAY_SOUND_FROM_OBJECT( l_U16, "CASH_REGISTER_OPEN", l_U4 );
                                    ALTER_WANTED_LEVEL_NO_DROP( sub_337(), 1 );
                                    GENERATE_RANDOM_INT_IN_RANGE( 9, 200, ref l_U15 );
                                    ADD_SCORE( sub_337(), l_U15 );
                                    g_U9207 = 1;
                                    DISPLAY_CASH( 1 );
                                    sub_1952();
                                    SAY_AMBIENT_SPEECH( sub_716(), "SEARCH_BODY_TAKE_ITEM", 1, 0, 0 );
                                    for ( l_U14 = 0; l_U14 < 5000; l_U14++ )
                                    {
                                        WAIT( 0 );
                                    }
                                    g_U9208 = 0;
                                    DISPLAY_CASH( 0 );
                                    UNREGISTER_SCRIPT_WITH_AUDIO();
                                }
                            }
                            else
                            {
                                sub_67( l_U17, "TILL_01" );
                                l_U7 = 1;
                            }
                        }
                    }
                    break;
                }
            }
            else if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U19 )))
            {
                sub_45();
            }
        }
        else
        {
            sub_45();
        }
    }
    return;
}

void sub_45()
{
    sub_67( l_U17, "TILL_01" );
    g_U9207 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_67(int iParam0, string sParam1)
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
                    sub_288();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_337(), 1 );
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

void sub_288()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_337()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_716()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_799(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_337() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_337() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_337() )))))
                {
                    if (NOT sub_895())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_716() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_980())
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

int sub_895()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_980()
{
    return sub_991( 0, 0 );
}

int sub_991(boolean bParam0, unknown uParam1)
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

int sub_1097(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_799( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_337(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_1372();
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

void sub_1372()
{
    return sub_991( 1, 1 );
}

void sub_1952()
{
    for ( l_U14 = 0; l_U14 < 7000; l_U14++ )
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U4 ))
        {
            SLIDE_OBJECT( l_U4, l_U11._fU0, l_U11._fU4, l_U11._fU8, l_U9, l_U10, 0.00000000, 0 );
            if (HAS_OBJECT_COLLIDED_WITH_ANYTHING( l_U4 ))
            {
                l_U14 = 7000;
            }
        }
    }
    l_U6 = 1;
    if (DOES_OBJECT_EXIST( l_U4 ))
    {
        SET_OBJECT_DYNAMIC( l_U4, 0 );
        FREEZE_OBJECT_POSITION( l_U4, 1 );
    }
    return;
}

