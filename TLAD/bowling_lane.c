void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U15 = 10;
    l_U36 = 0;
    l_U37 = 0;
    l_U38 = 0;
    l_U39 = 0;
    l_U40 = 0;
    l_U41 = 0;
    l_U42 = 0;
    l_U43 = 0;
    l_U58 = 0;
    l_U59 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_117();
    }
    l_U31 = {l_U60._fU4[0]};
    l_U35 = l_U60._fU68[0];
    CREATE_OBJECT_NO_OFFSET( -1341473171, l_U31._fU0, l_U31._fU4, l_U31._fU8, ref l_U46, 1 );
    SET_OBJECT_HEADING( l_U46, l_U35 );
    SET_OBJECT_DYNAMIC( l_U46, 0 );
    SET_OBJECT_COLLISION( l_U46, 0 );
    FREEZE_OBJECT_POSITION( l_U46, 1 );
    SET_OBJECT_VISIBLE( l_U46, 0 );
    while (true)
    {
        WAIT( 0 );
        switch (l_U58)
        {
            case 0:
            if (g_U10674 == 0)
            {
                GET_INTERIOR_AT_COORDS( 1188.08600000, -665.16560000, 15.53800000, ref l_U50 );
                GET_INTERIOR_AT_COORDS( -587.44020000, 66.77700000, 4.91530000, ref l_U49 );
                GET_INTERIOR_FROM_CHAR( sub_417(), ref l_U48 );
                if (NOT (l_U48 == nil))
                {
                    if ((l_U48 == l_U50) || (l_U48 == l_U49))
                    {
                        if (NOT g_U12303)
                        {
                            CLEAR_HELP();
                            PRINT_HELP( "BOWLING_49" );
                            g_U10674 = 1;
                        }
                    }
                }
            }
            if (DOES_OBJECT_EXIST( l_U46 ))
            {
                if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                {
                    if (l_U10 == 0)
                    {
                        if (NOT sub_594())
                        {
                            g_U39195 = 0;
                        }
                        else if (l_U37 == 0)
                        {
                            l_U37 = 1;
                        }
                        if (DOES_OBJECT_EXIST( l_U46 ))
                        {
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U46, -0.60000000, 0.00000000, 0.00000000, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U46, -1.60000000, 2.60000000, 1.50000000, ref l_U22._fU0, ref l_U22._fU4, ref l_U22._fU8 );
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U46, -3.80000000, 36.40000000, -1.00000000, ref l_U25._fU0, ref l_U25._fU4, ref l_U25._fU8 );
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U46, 21.20000000, 16.80000000, 1.00000000, ref l_U28._fU0, ref l_U28._fU4, ref l_U28._fU8 );
                            GET_OBJECT_HEADING( l_U46, ref l_U34 );
                        }
                        SWITCH_PED_PATHS_OFF( l_U25._fU0, l_U25._fU4, l_U25._fU8, l_U28._fU0, l_U28._fU4, l_U28._fU8 );
                        l_U47 = -799229885;
                        l_U10 = 1;
                    }
                    if (l_U10 == 1)
                    {
                        if (sub_907())
                        {
                            if (NOT (DOES_CHAR_EXIST( l_U44 )))
                            {
                                CREATE_CHAR( 4, l_U47, l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U44, 1 );
                                SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U44, 1 );
                                SET_CHAR_HEADING( l_U44, l_U34 );
                                SET_ROOM_FOR_CHAR_BY_NAME( l_U44, "E1_Bowl_room" );
                                l_U41 = 1;
                            }
                            l_U10 = 2;
                        }
                    }
                    if (l_U10 == 2)
                    {
                        sub_1091();
                    }
                }
                else
                {
                    sub_117();
                }
                break;
            }
            sub_117();
        }
    }
    return;
}

void sub_117()
{
    g_U10672 = 0;
    SWITCH_PED_PATHS_ON( l_U25._fU0, l_U25._fU4, l_U25._fU8, l_U28._fU0, l_U28._fU4, l_U28._fU8 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_417()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_594()
{
    int Result;

    Result = 0;
    return Result;
}

int sub_907()
{
    REQUEST_MODEL( l_U47 );
    if (HAS_MODEL_LOADED( l_U47 ))
    {
        return 1;
    }
    return 0;
}

void sub_1091()
{
    boolean bVar2;

    bVar2 = true;
    sub_1103();
    sub_1176();
    sub_1295();
    sub_1513();
    sub_1827();
    sub_2040();
    sub_2253();
    switch (l_U59)
    {
        case 0:
        if (NOT g_U10672)
        {
            if (sub_594())
            {
                if (g_U38684 == 0)
                {
                    bVar2 = false;
                }
                else if (g_U10675 == 1)
                {
                    bVar2 = false;
                }
                if (g_U10678 == 1)
                {
                    bVar2 = false;
                }
            }
            l_U43 = sub_1308( ref l_U45 );
            if (l_U43)
            {
                GET_GROUP_SIZE( sub_1369(), ref l_U17, ref l_U18 );
                if (l_U18 == 0)
                {
                    bVar2 = false;
                }
            }
            if (g_U12303)
            {
                if (NOT (sub_2700( 10 )))
                {
                    bVar2 = false;
                }
            }
            if (IS_BIT_SET( g_U10959._fU0, 4 ))
            {
                bVar2 = false;
            }
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1694(), 0 )))
            {
                l_U39 = 0;
            }
            if (bVar2)
            {
                if (DOES_CHAR_EXIST( l_U44 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U44 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U53 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U44, ref l_U53 );
                            SET_BLIP_AS_FRIENDLY( l_U53, 1 );
                            CHANGE_BLIP_DISPLAY( l_U53, 1 );
                        }
                    }
                }
                if (LOCATE_CHAR_ON_FOOT_3D( sub_417(), l_U22._fU0, l_U22._fU4, l_U22._fU8, 1.50000000, 1.50000000, 1.50000000, 0 ))
                {
                    if (l_U40 == 1)
                    {
                        l_U40 = 0;
                    }
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_1694(), 0 )))
                    {
                        if (NOT l_U38)
                        {
                            if (DOES_CHAR_EXIST( l_U44 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U44 )))
                                {
                                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U44, sub_417() );
                                    if (sub_3480( 2, 0 ))
                                    {
                                        if (l_U36 == 1)
                                        {
                                            if (IS_SCORE_GREATER( sub_1694(), l_U15 ))
                                            {
                                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" ))
                                                {
                                                    CLEAR_HELP();
                                                }
                                                l_U36 = 0;
                                            }
                                        }
                                        if (l_U36 == 0)
                                        {
                                            if (l_U16 == 0)
                                            {
                                                if (NOT sub_594())
                                                {
                                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                                    {
                                                        PRINT_NOW( "BOWLING_07", 7500, 4 );
                                                    }
                                                }
                                                else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                                {
                                                    PRINT_NOW( "BOWLING_50", 7500, 4 );
                                                }
                                                l_U16 = 1;
                                            }
                                            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_46" )))
                                            {
                                                PRINT_HELP_FOREVER( "BOWLING_46" );
                                            }
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_THIS_PRINT( "BOWLING_07" );
                                        CLEAR_THIS_PRINT( "BOWLING_50" );
                                        l_U16 = 0;
                                        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_52" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_46" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )))))
                                        {
                                            CLEAR_HELP();
                                        }
                                        l_U36 = 0;
                                    }
                                    if (sub_3480( 2, 0 ))
                                    {
                                        if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                                        {
                                            if (NOT sub_594())
                                            {
                                                if (IS_SCORE_GREATER( sub_1694(), l_U15 ))
                                                {
                                                    PRINT_HELP_FOREVER( "BOWLING_45" );
                                                    l_U38 = 1;
                                                    l_U59 = 1;
                                                }
                                                else
                                                {
                                                    CLEAR_THIS_PRINT( "BOWLING_07" );
                                                    PRINT_HELP( "BOWLING_48" );
                                                    if (l_U36 == 0)
                                                    {
                                                        l_U36 = 1;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                l_U38 = 1;
                                                l_U59 = 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        CLEAR_THIS_PRINT( "BOWLING_07" );
                        CLEAR_THIS_PRINT( "BOWLING_50" );
                        l_U16 = 0;
                        if (DOES_CHAR_EXIST( l_U44 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U44 )))
                            {
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_52" )))
                                {
                                    PRINT_HELP_FOREVER( "BOWLING_52" );
                                }
                                if (l_U39 == 0)
                                {
                                    SAY_AMBIENT_SPEECH( l_U44, "BOWL_WANTED", 0, 0, 2 );
                                    l_U39 = 1;
                                }
                            }
                        }
                    }
                }
                else if (DOES_CHAR_EXIST( l_U44 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U44 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U44, sub_417(), -2, 1 );
                    }
                }
                CLEAR_THIS_PRINT( "BOWLING_07" );
                CLEAR_THIS_PRINT( "BOWLING_50" );
                l_U16 = 0;
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_52" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_46" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )))))
                {
                    CLEAR_HELP();
                }
                l_U36 = 0;;
            }
            else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_52" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_46" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )))))
            {
                CLEAR_HELP();
            }
        }
        break;
        case 1:
        if (NOT sub_594())
        {
            if (sub_3480( 2, 0 ))
            {
                DISPLAY_CASH( 1 );
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" ))
                {
                    if (sub_4856())
                    {
                        if (DOES_CHAR_EXIST( l_U44 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U44 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U44, "BOWL_GREETING", 0, 0, 2 );
                            }
                        }
                        sub_4982();
                        sub_5808( l_U15 );
                        l_U59 = 2;
                        PRINT_NOW( "BOWLING_18", 6000, 4 );
                        CLEAR_HELP();
                    }
                    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                    {
                        if (DOES_CHAR_EXIST( l_U44 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U44 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U44, "BOWL_GREETING", 0, 0, 2 );
                            }
                        }
                        sub_4982();
                        sub_5808( l_U15 );
                        g_U10673 = 1;
                        l_U59 = 2;
                        PRINT_NOW( "BOWLING_18", 6000, 4 );
                        CLEAR_HELP();
                    }
                }
            }
            else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )))
            {
                CLEAR_HELP();
                CLEAR_PRINTS();
            }
            l_U59 = 0;
            l_U38 = 0;;
        }
        else if (DOES_CHAR_EXIST( l_U44 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U44 )))
            {
                SAY_AMBIENT_SPEECH( l_U44, "BOWL_GREETING", 0, 0, 2 );
            }
        }
        CLEAR_HELP();
        PRINT_NOW( "BOWLING_18", 6000, 4 );
        g_U10673 = 1;
        l_U59 = 2;;
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_417(), l_U22._fU0, l_U22._fU4, l_U22._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
        {
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_48" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BOWLING_45" )))
            {
                CLEAR_HELP();
                CLEAR_PRINTS();
            }
            l_U59 = 0;
            l_U38 = 0;
        }
        break;
        case 2:
        sub_6365();
        g_U10672 = 1;
        if (DOES_BLIP_EXIST( l_U53 ))
        {
            REMOVE_BLIP( l_U53 );
        }
        l_U59 = 3;
        break;
        case 3:
        if (NOT sub_594())
        {
            if (g_U10672 == 0)
            {
                l_U11 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "TENPINBOWL" );
                if (l_U11 == 0)
                {
                    l_U38 = 0;
                    l_U59 = 0;
                    bVar2 = true;
                }
            }
        }
        break;
    }
    return;
}

void sub_1103()
{
    if (l_U37 == 1)
    {
        if (NOT sub_594())
        {
            CLEAR_HELP();
            g_U10672 = 0;
            l_U59 = 3;
            l_U37 = 0;
            g_U39195 = 0;
        }
    }
    return;
}

void sub_1176()
{
    if (sub_594())
    {
        if (l_U13 == 0)
        {
            if (g_U38684 == 1)
            {
                l_U13 = 1;
            }
        }
        if (l_U13 == 1)
        {
            if (g_U38684 == 0)
            {
                CLEAR_HELP();
                if (DOES_BLIP_EXIST( l_U53 ))
                {
                    REMOVE_BLIP( l_U53 );
                }
                l_U13 = 0;
            }
        }
    }
    return;
}

void sub_1295()
{
    l_U43 = sub_1308( ref l_U45 );
    if (l_U43)
    {
        GET_GROUP_SIZE( sub_1369(), ref l_U17, ref l_U18 );
        if (l_U14 == 0)
        {
            if (l_U18 > 0)
            {
                l_U14 = 1;
            }
        }
        if (l_U14 == 1)
        {
            if (l_U18 == 0)
            {
                CLEAR_HELP();
                if (DOES_BLIP_EXIST( l_U53 ))
                {
                    REMOVE_BLIP( l_U53 );
                }
                l_U14 = 0;
            }
        }
    }
    return;
}

int sub_1308(unknown uParam0)
{
    (uParam0^) = g_U26739._fU0;
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    return 1;
}

void sub_1369()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1513()
{
    if (l_U41 == 1)
    {
        if (DOES_CHAR_EXIST( l_U44 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U44 )))
            {
                if (NOT sub_594())
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U44, sub_417(), 0 ))
                    {
                        sub_1603();
                        sub_117();
                    }
                }
                else if (NOT g_U39195)
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U44, sub_417(), 0 ))
                    {
                        sub_1603();
                        g_U39195 = 1;
                        sub_117();
                    }
                }
            }
        }
    }
    return;
}

void sub_1603()
{
    if (DOES_BLIP_EXIST( l_U53 ))
    {
        REMOVE_BLIP( l_U53 );
    }
    CLEAR_CHAR_TASKS( l_U44 );
    if (NOT (IS_CHAR_INJURED( l_U44 )))
    {
        TASK_SMART_FLEE_CHAR( l_U44, sub_417(), 100.00000000, -1 );
    }
    SET_ALL_RANDOM_PEDS_FLEE( sub_1694(), 1 );
    CLEAR_HELP();
    CLEAR_PRINTS();
    return;
}

void sub_1694()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1827()
{
    if (l_U41 == 1)
    {
        if (DOES_CHAR_EXIST( l_U44 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U44 )))
            {
                GET_INTERIOR_AT_COORDS( l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U51 );
                GET_INTERIOR_FROM_CHAR( sub_417(), ref l_U52 );
                if (l_U52 == l_U51)
                {
                    if (NOT sub_594())
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_417() ))
                        {
                            sub_1603();
                            sub_117();
                        }
                    }
                    else if (NOT g_U39195)
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_417() ))
                        {
                            sub_1603();
                            g_U39195 = 1;
                            sub_117();
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_2040()
{
    if (l_U41 == 1)
    {
        if (DOES_CHAR_EXIST( l_U44 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U44 )))
            {
                GET_INTERIOR_AT_COORDS( l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U51 );
                GET_INTERIOR_FROM_CHAR( sub_417(), ref l_U52 );
                if (l_U52 == l_U51)
                {
                    if (NOT sub_594())
                    {
                        if (IS_CHAR_SHOOTING( sub_417() ))
                        {
                            sub_1603();
                            sub_117();
                        }
                    }
                    else if (NOT g_U39195)
                    {
                        if (IS_CHAR_SHOOTING( sub_417() ))
                        {
                            sub_1603();
                            g_U39195 = 1;
                            sub_117();
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_2253()
{
    if (DOES_CHAR_EXIST( l_U44 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U44 )))
        {
            if (l_U40 == 0)
            {
                if (l_U48 == l_U49)
                {
                    if (IS_CHAR_IN_AREA_3D( sub_417(), -575.27670000, 64.99840000, 3.00000000, -600.65080000, 47.15970000, 7.00000000, 0 ))
                    {
                        SAY_AMBIENT_SPEECH( l_U44, "BOWL_MONKEY", 0, 0, 2 );
                        l_U40 = 1;
                    }
                }
                if (l_U48 == l_U50)
                {
                    if (IS_CHAR_IN_AREA_3D( sub_417(), 1185.75700000, -677.22860000, 10.00000000, 1168.07700000, -651.59310000, 18.00000000, 0 ))
                    {
                        SAY_AMBIENT_SPEECH( l_U44, "BOWL_MONKEY", 0, 0, 2 );
                        l_U40 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_2700(int iParam0)
{
    unknown uVar3;

    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_2729( iParam0 ))
    {
        return 0;
    }
    if (sub_2788( g_U26739._fU0 ))
    {
        if (NOT (sub_2820( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
        g_U26739._fU8 = iParam0;
        g_U26739._fU84 = 0;
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U26739._fU4)
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
            if (g_U26739._fU36[uVar3] > 0)
            {
                g_U26739._fU36[uVar3]--;
            }
            g_U26739._fU84 = 0;
            return 1;
        }
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
        }
    }
    if (g_U26739._fU32 <= 0)
    {
        g_U26739._fU12 = iParam0;
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        g_U26739._fU8 = iParam0;
        g_U26739._fU36[uVar3]--;
        if (iParam0 == 8)
        {
            g_U26739._fU84 = 1;
        }
        return 1;
    }
    g_U26739._fU12 = iParam0;
    return 0;
}

int sub_2729(int iParam0)
{
    if (iParam0 == 8)
    {
        if (g_U10999 == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2788(unknown uParam0)
{
    return 0;
}

int sub_2820(unknown uParam0, unknown uParam1)
{
    return 1;
}

int sub_3480(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_1694() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_1694() )))
            {
                if (((g_U10499) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_1694() )))))
                {
                    if (NOT sub_3576())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_417() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_3661())
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

int sub_3576()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_3661()
{
    return sub_3672( 0, 0 );
}

int sub_3672(boolean bParam0, unknown uParam1)
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

int sub_4856()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_4982()
{
    sub_4991();
    sub_5136( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_5210();
    return;
}

void sub_4991()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_5136(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_5210()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_5248( 1, g_U572[I] )) == 0)
        {
            sub_5499( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_5677())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_5248(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_5499(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_5584( g_U572 - 1 );
    return;
}

void sub_5584(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_5677()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_5248( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_5808(int iParam0)
{
    int iVar3;

    STORE_SCORE( sub_1694(), ref iVar3 );
    if (iVar3 >= iParam0)
    {
        ADD_SCORE( sub_1694(), -iParam0 );
        return 1;
        break;
    }
    return 0;
}

void sub_6365()
{
    return;
}

