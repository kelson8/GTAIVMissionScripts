void main()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U10 = 1;
    l_U11 = 1;
    l_U18 = 1.80000000;
    l_U19 = 1.70000000;
    l_U20 = 2.00000000;
    l_U21 = 2.00000000;
    StrCopy( ref l_U22, "PZ_CONSL", 16 );
    l_U9 = l_U26;
    if (HAS_DEATHARREST_EXECUTED())
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U9 );
        sub_110( 2, ref l_U22 );
        TERMINATE_THIS_SCRIPT();
    }
    WAIT( 0 );
    while (l_U10)
    {
        WAIT( 0 );
        if (l_U8 == 0)
        {
            if (DOES_OBJECT_EXIST( l_U9 ))
            {
                if (NOT sub_522())
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U9 ))
                    {
                        GET_KEY_FOR_CHAR_IN_ROOM( sub_694(), ref l_U12 );
                        GET_ROOM_KEY_FROM_OBJECT( l_U9, ref l_U13 );
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U9, -l_U18 * 0.50000000, -l_U19, l_U20 * 0.50000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U9, -l_U18 * 0.50000000, 0.00000000, -l_U20 * 0.50000000, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                        if ((NOT (IS_WANTED_LEVEL_GREATER( sub_380(), 0 ))) AND ((IS_CHAR_IN_ANGLED_AREA_3D( sub_694(), uVar6._fU0, uVar6._fU4, uVar6._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, l_U21, 0 )) AND (l_U13 == l_U12)))
                        {
                            if ((sub_916()) AND (NOT g_U10978))
                            {
                                if (NOT l_U11)
                                {
                                    if (sub_979( 2, 0 ))
                                    {
                                        if (sub_1266( 2, ref l_U22, 0 ))
                                        {
                                            sub_110( 2, ref l_U22 );
                                            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U22 ))
                                            {
                                                CLEAR_HELP();
                                            }
                                            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PZ_NOPLAY" ))
                                            {
                                                CLEAR_HELP();
                                            }
                                            DO_SCREEN_FADE_OUT( 4000 );
                                            REQUEST_SCRIPT( "puzzle" );
                                            while (IS_SCREEN_FADING())
                                            {
                                                WAIT( 0 );
                                            }
                                            while (NOT (HAS_SCRIPT_LOADED( "puzzle" )))
                                            {
                                                WAIT( 0 );
                                            }
                                            START_NEW_SCRIPT( "puzzle", 8192 );
                                            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "puzzle" );
                                            l_U8 = 1;
                                        }
                                    }
                                    else
                                    {
                                        sub_110( 2, ref l_U22 );
                                        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PZ_NOPLAY" ))
                                        {
                                            CLEAR_HELP();
                                        }
                                    }
                                }
                                else if (NOT (IS_BUTTON_PRESSED( 0, 4 )))
                                {
                                    l_U11 = 0;
                                }
                            }
                            else
                            {
                                sub_110( 2, ref l_U22 );
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PZ_NOPLAY" )))
                                {
                                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                    PRINT_HELP_FOREVER( "PZ_NOPLAY" );
                                }
                            }
                        }
                        else
                        {
                            sub_110( 2, ref l_U22 );
                            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PZ_NOPLAY" ))
                            {
                                CLEAR_HELP();
                            }
                        }
                    }
                }
                else
                {
                    l_U10 = 0;
                }
            }
            else
            {
                l_U10 = 0;
            }
        }
        else if (l_U8 == 1)
        {
            iVar2 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "puzzle" );
            if (iVar2 == 0)
            {
                l_U8 = 0;
                l_U11 = 1;
                if (DOES_OBJECT_EXIST( l_U9 ))
                {
                    GET_OBJECT_COORDINATES( l_U9, ref l_U15._fU0, ref l_U15._fU4, ref l_U15._fU8 );
                    GET_ROOM_KEY_FROM_OBJECT( l_U9, ref l_U13 );
                    GET_INTERIOR_AT_COORDS( l_U15._fU0, l_U15._fU4, l_U15._fU8, ref l_U14 );
                    if (NOT (l_U14 == nil))
                    {
                        LOAD_SCENE_FOR_ROOM_BY_KEY( l_U14, l_U13 );
                        LOAD_SCENE( l_U15._fU0, l_U15._fU4, l_U15._fU8 );
                    }
                }
                if (NOT IS_SCREEN_FADED_IN())
                {
                    DO_SCREEN_FADE_IN( 4000 );
                    while (IS_SCREEN_FADING())
                    {
                        WAIT( 0 );
                    }
                }
            }
        }
    }
    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U9 );
    sub_110( 2, ref l_U22 );
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PZ_NOPLAY" ))
    {
        CLEAR_HELP();
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_110(int iParam0, string sParam1)
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
                    sub_331();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_380(), 1 );
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

void sub_331()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_380()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_522()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_OBJECT_EXIST( l_U9 ))
    {
        if (HAS_OBJECT_BEEN_UPROOTED( l_U9 ))
        {
            return 1;
        }
        GET_OBJECT_MODEL( l_U9, ref iVar2 );
        if (iVar2 == -386570734)
        {
            GET_OBJECT_COORDINATES( l_U9, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            if (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( uVar3._fU0, uVar3._fU4, uVar3._fU8, 3.00000000, iVar2, 1, 1 ))
            {
                return 1;
            }
            if (HAS_OBJECT_BEEN_DAMAGED( l_U9 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_694()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_916()
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

int sub_979(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_380() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_380() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_380() )))))
                {
                    if (NOT sub_1075())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_694() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_1160())
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

int sub_1075()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1160()
{
    return sub_1171( 0, 0 );
}

int sub_1171(boolean bParam0, unknown uParam1)
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

int sub_1266(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_979( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_380(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_1541();
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

void sub_1541()
{
    return sub_1171( 1, 1 );
}

