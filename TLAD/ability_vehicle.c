void main()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U107 = 25;
    l_U112 = 584879743;
    l_U113 = 1737188996;
    PRINTSTRING( "ABILITY VEHICLE SCRIPT STARTED \n" );
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 1 \n" );
        sub_149();
    }
    if (NOT (IS_MODEL_IN_CDIMAGE( g_U11224 )))
    {
        SCRIPT_ASSERT( "g_VehicleModel does not exist on cd image!" );
        PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 2 \n" );
        sub_149();
    }
    else if (NOT (IS_THIS_MODEL_A_VEHICLE( g_U11224 )))
    {
        SCRIPT_ASSERT( "g_VehicleModel is not a valid car model!" );
        PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 3 \n" );
        sub_149();
    }
    CREATE_WIDGET_GROUP( "Delivered Vehicle" );
    ADD_WIDGET_SLIDER( "iState", ref l_U106, 0, 99, 1 );
    ADD_WIDGET_TOGGLE( "bCarDelivered", ref l_U102 );
    ADD_WIDGET_TOGGLE( "g_bDismissAbilityVehicle", ref g_U11226 );
    END_WIDGET_GROUP();
    g_U11226 = 0;
    while ((NOT g_U11226) AND (IS_PLAYER_PLAYING( sub_1317() )))
    {
        switch (l_U106)
        {
            case 0:
            REQUEST_MODEL( l_U112 );
            REQUEST_MODEL( sub_171( 7 ) );
            REQUEST_MODEL( l_U113 );
            REQUEST_MODEL( g_U11224 );
            if ((HAS_MODEL_LOADED( g_U11224 )) AND ((HAS_MODEL_LOADED( l_U113 )) AND ((HAS_MODEL_LOADED( sub_171( 7 ) )) AND (HAS_MODEL_LOADED( l_U112 )))))
            {
                sub_1526( 1 );
            }
            break;
            case 1:
            bVar2 = false;
            if (sub_1584( ref uVar3, ref uVar6, ref l_U107 ))
            {
                bVar2 = true;
            }
            else if (l_U107 > 500)
            {
                if (l_U105 > 0.00000000)
                {
                    uVar3 = {l_U114};
                    uVar6 = l_U104;
                    bVar2 = true;
                }
                else
                {
                    PRINT( "C_REACH", 7500, 1 );
                    sub_149();
                }
            }
            if (bVar2)
            {
                CREATE_CAR( g_U11224, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U126[0], 1 );
                SET_CAR_HEADING( l_U126[0], uVar6 );
                sub_2571( l_U126[0], 2000 );
                sub_2665( 7, ref l_U109[0], l_U126[0] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U109[0], 1 );
                ADD_BLIP_FOR_CAR( l_U126[0], ref l_U103 );
                CHANGE_BLIP_SPRITE( l_U103, 126 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U126[0], 0.00000000, -4.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                CREATE_CAR( l_U112, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U126[1], 1 );
                SET_CAR_HEADING( l_U126[1], uVar6 );
                sub_2571( l_U126[1], 2000 );
                CREATE_CHAR_INSIDE_CAR( l_U126[1], 4, l_U113, ref l_U109[1] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U109[1], 1 );
                sub_1526( 2 );
            }
            break;
            case 2:
            if (NOT sub_4088())
            {
                if (NOT (IS_CHAR_INJURED( l_U109[1] )))
                {
                    if ((IS_VEH_DRIVEABLE( l_U126[1] )) AND (IS_VEH_DRIVEABLE( l_U126[0] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U109[1], 49, ref l_U130 );
                        if (l_U130 == 7)
                        {
                            TASK_CAR_MISSION( l_U109[1], l_U126[1], l_U126[0], 12, 12.00000000, 2, 0, 0 );
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U109[0] )))
            {
                if (IS_VEH_DRIVEABLE( l_U126[0] ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U129 );
                    TASK_CAR_MISSION( 0, l_U126[0], 0, 21, 12.00000000, 0, 3, 3 );
                    TASK_CAR_TEMP_ACTION( 0, l_U126[0], 6, 1000 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    CLOSE_SEQUENCE_TASK( l_U129 );
                    TASK_PERFORM_SEQUENCE( l_U109[0], l_U129 );
                    CLEAR_SEQUENCE_TASK( l_U129 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U109[1] )))
            {
                CLEAR_CHAR_TASKS( l_U109[1] );
            }
            SETTIMERA( 0 );
            l_U102 = 0;
            sub_1526( 3 );;
            break;
            case 3:
            if (NOT l_U102)
            {
                if (NOT (IS_CHAR_INJURED( l_U109[0] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U126[0] ))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U109[0], l_U126[0] )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U103 )))
                            {
                                if (IS_VEH_DRIVEABLE( l_U126[0] ))
                                {
                                    ADD_BLIP_FOR_CAR( l_U126[0], ref l_U103 );
                                    CHANGE_BLIP_SPRITE( l_U103, 126 );
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( l_U109[0] )))
                            {
                                CLEAR_CHAR_TASKS( l_U109[0] );
                            }
                            SETTIMERA( 0 );
                            l_U102 = 1;
                        }
                        else if (TIMERA() > 3000)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U129 );
                            if (IS_VEH_DRIVEABLE( l_U126[0] ))
                            {
                                TASK_CAR_TEMP_ACTION( 0, l_U126[0], 6, 1000 );
                            }
                            TASK_LEAVE_ANY_CAR( 0 );
                            CLOSE_SEQUENCE_TASK( l_U129 );
                            TASK_PERFORM_SEQUENCE( l_U109[0], l_U129 );
                            CLEAR_SEQUENCE_TASK( l_U129 );
                            SETTIMERA( 0 );
                        }
                    }
                    if (IS_VEH_DRIVEABLE( l_U126[1] ))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U109[0], l_U126[1] )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U109[0], 29, ref l_U130 );
                            if (l_U130 == 7)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U129 );
                                if (IS_CHAR_IN_ANY_CAR( l_U109[0] ))
                                {
                                    TASK_LEAVE_ANY_CAR( 0 );
                                }
                                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U109[0], l_U126[1], 25.00000000, 25.00000000, 5.00000000, 0 )))
                                {
                                    TASK_GOTO_CAR( 0, l_U126[1], 9999999, 10.00000000 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U126[1], -2, 0 );
                                CLOSE_SEQUENCE_TASK( l_U129 );
                                TASK_PERFORM_SEQUENCE( l_U109[0], l_U129 );
                                CLEAR_SEQUENCE_TASK( l_U129 );
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U109[1] )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U109[0] )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U126[1] ))
                        {
                            if (IS_CHAR_IN_CAR( l_U109[1], l_U126[1] ))
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U109[1], l_U109[0], 25.00000000, 25.00000000, 5.00000000, 0 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U109[1], 49, ref l_U130 );
                                    if (l_U130 == 7)
                                    {
                                        TASK_CAR_MISSION_PED_TARGET( l_U109[1], l_U126[1], l_U109[0], 4, 15.00000000, 2, 10, 10 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (NOT sub_6022())
            {
                if (TIMERA() < 30000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U109[0] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U109[1] )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U126[1] ))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U109[0], l_U109[1], 80.00000000, 80.00000000, 5.00000000, 0 ))
                                {
                                    if ((NOT (IS_CHAR_SITTING_IN_CAR( l_U109[0], l_U126[1] ))) AND (IS_CHAR_SITTING_IN_CAR( l_U109[1], l_U126[1] )))
                                    {
                                        GET_SCRIPT_TASK_STATUS( l_U109[0], 29, ref l_U130 );
                                        if (l_U130 == 7)
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U129 );
                                            if (IS_VEH_DRIVEABLE( l_U126[0] ))
                                            {
                                                if (IS_CHAR_SITTING_IN_CAR( l_U109[0], l_U126[0] ))
                                                {
                                                    TASK_LEAVE_CAR( 0, l_U126[0] );
                                                }
                                            }
                                            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U109[0], l_U126[1], 20.00000000, 20.00000000, 5.00000000, 0 )))
                                            {
                                                TASK_GOTO_CAR( 0, l_U126[1], 9999999, 5.00000000 );
                                            }
                                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U126[1], -2, 0 );
                                            CLOSE_SEQUENCE_TASK( l_U129 );
                                            TASK_PERFORM_SEQUENCE( l_U109[0], l_U129 );
                                            CLEAR_SEQUENCE_TASK( l_U129 );
                                        }
                                    }
                                    if ((IS_CHAR_SITTING_IN_CAR( l_U109[1], l_U126[1] )) AND (IS_CHAR_SITTING_IN_CAR( l_U109[0], l_U126[1] )))
                                    {
                                        GET_SCRIPT_TASK_STATUS( l_U109[1], 16, ref l_U130 );
                                        if (l_U130 == 7)
                                        {
                                            TASK_CAR_DRIVE_WANDER( l_U109[1], l_U126[1], 25.00000000, 2 );
                                            SETTIMERA( 0 );
                                            sub_1526( 5 );
                                        }
                                    }
                                }
                                else
                                {
                                    TASK_WANDER_STANDARD( l_U109[0] );
                                    SETTIMERA( 0 );
                                    sub_1526( 5 );
                                }
                            }
                            else
                            {
                                TASK_WANDER_STANDARD( l_U109[0] );
                                SETTIMERA( 0 );
                                sub_1526( 5 );
                            }
                        }
                        else
                        {
                            TASK_WANDER_STANDARD( l_U109[0] );
                            SETTIMERA( 0 );
                            sub_1526( 5 );
                        }
                    }
                    else
                    {
                        SETTIMERA( 0 );
                        sub_1526( 5 );
                    }
                }
                else
                {
                    SETTIMERA( 0 );
                    sub_1526( 5 );
                }
            }
            else
            {
                SETTIMERA( 0 );
                sub_1526( 5 );
            }
            if (IS_VEH_DRIVEABLE( l_U126[0] ))
            {
                if (IS_CHAR_IN_CAR( sub_1648(), l_U126[0] ))
                {
                    if (DOES_BLIP_EXIST( l_U103 ))
                    {
                        REMOVE_BLIP( l_U103 );
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U126[1] ))
            {
                if (IS_CHAR_IN_CAR( sub_1648(), l_U126[1] ))
                {
                    SETTIMERA( 0 );
                    sub_1526( 5 );
                }
            }
            break;
            case 5:
            if (sub_6022())
            {
                if (DOES_CHAR_EXIST( l_U109[0] ))
                {
                    DELETE_CHAR( ref l_U109[0] );
                }
                if (DOES_CHAR_EXIST( l_U109[1] ))
                {
                    DELETE_CHAR( ref l_U109[1] );
                }
                if (DOES_VEHICLE_EXIST( l_U126[1] ))
                {
                    if (IS_PLAYER_PLAYING( sub_1317() ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U126[1] )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_1648(), l_U126[1] )))
                            {
                                sub_694( l_U126[1] );
                                DELETE_CAR( ref l_U126[1] );
                            }
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U126[0] ))
            {
                if (IS_CHAR_IN_CAR( sub_1648(), l_U126[0] ))
                {
                    if (DOES_BLIP_EXIST( l_U103 ))
                    {
                        sub_7279( l_U126[0] );
                        REMOVE_BLIP( l_U103 );
                    }
                }
            }
            if (NOT sub_6022())
            {
                if (TIMERA() < 60000)
                {
                    if (IS_VEH_DRIVEABLE( l_U126[0] ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_1648(), l_U126[0], 150.00000000, 150.00000000, 150.00000000, 0 ))
                        {
                            if ((TIMERA() > 7000) AND (IS_CHAR_IN_CAR( sub_1648(), l_U126[0] )))
                            {
                                PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 4 \n" );
                                sub_149();
                            }
                        }
                        else
                        {
                            PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 5 \n" );
                            sub_149();
                        }
                    }
                    else
                    {
                        PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 6 \n" );
                        sub_149();
                    }
                    if (IS_PLAYER_PLAYING( sub_1317() ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U126[1] ))
                        {
                            if (IS_CHAR_IN_CAR( sub_1648(), l_U126[1] ))
                            {
                                PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 8 \n" );
                                sub_149();
                            }
                        }
                        else
                        {
                            PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 9 \n" );
                            sub_149();
                        }
                    }
                }
                else
                {
                    PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 7 \n" );
                    sub_149();
                }
            }
            break;
        }
        if (NOT g_U11235)
        {
            if (DOES_BLIP_EXIST( l_U103 ))
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT sub_6022())
                    {
                        PRINT_HELP( "CBD_EXP" );
                        g_U11235 = 1;
                    }
                }
            }
        }
        l_U137 = 3;
        if (NOT sub_6022())
        {
            switch (l_U108)
            {
                case 0:
                if (l_U102)
                {
                    l_U108++;
                }
                break;
                case 1:
                if (NOT sub_7995())
                {
                    if (NOT (IS_CHAR_INJURED( l_U109[0] )))
                    {
                        if (IS_PLAYER_PLAYING( sub_1317() ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1648(), l_U109[0], 20.00000000, 20.00000000, 10.00000000, 0 ))
                            {
                                if (sub_8263( "E1BEA", 7 ))
                                {
                                    if (sub_8682( "E1BE_21", ref l_U131, 2, 1 ))
                                    {
                                        l_U108++;
                                    }
                                }
                            }
                            else
                            {
                                l_U108++;
                            }
                        }
                        else
                        {
                            l_U108++;
                        }
                    }
                    else
                    {
                        l_U108++;
                    }
                }
                break;
                case 2:
                if (sub_9719( ref l_U131 ))
                {
                    if (NOT sub_7995())
                    {
                        if (NOT (IS_CHAR_INJURED( l_U109[0] )))
                        {
                            if (IS_PLAYER_PLAYING( sub_1317() ))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1648(), l_U109[0], 40.00000000, 40.00000000, 10.00000000, 0 ))
                                {
                                    if (sub_8263( "E1BEA", 7 ))
                                    {
                                        if (sub_8682( "E1BE_22", ref l_U131, l_U137, 1 ))
                                        {
                                            l_U108++;
                                        }
                                    }
                                }
                                else
                                {
                                    l_U108++;
                                }
                            }
                            else
                            {
                                l_U108++;
                            }
                        }
                        else
                        {
                            l_U108++;
                        }
                    }
                }
                else if (IS_CHAR_INJURED( l_U109[0] ))
                {
                    sub_10006( ref l_U131, 0 );
                }
                break;
                case 3:
                if (sub_9719( ref l_U131 ))
                {
                    if (NOT sub_7995())
                    {
                        if (NOT (IS_CHAR_INJURED( l_U109[0] )))
                        {
                            if (IS_PLAYER_PLAYING( sub_1317() ))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1648(), l_U109[0], 20.00000000, 20.00000000, 10.00000000, 0 ))
                                {
                                    if (sub_8263( "E1BEA", 7 ))
                                    {
                                        if (sub_8682( "E1BE_7", ref l_U131, l_U137, 1 ))
                                        {
                                            l_U108++;
                                        }
                                    }
                                }
                                else
                                {
                                    l_U108++;
                                }
                            }
                            else
                            {
                                l_U108++;
                            }
                        }
                        else
                        {
                            l_U108++;
                        }
                    }
                }
                else if (IS_CHAR_INJURED( l_U109[0] ))
                {
                    sub_10006( ref l_U131, 0 );
                }
                break;
                case 4:
                if (sub_9719( ref l_U131 ))
                {
                    if (NOT sub_7995())
                    {
                        l_U108 = 99;
                    }
                }
                break;
            }
        }
        else if (sub_10439( l_U131 ))
        {
            sub_10006( ref l_U131, 0 );
        }
        if (NOT sub_6022())
        {
            if (NOT (l_U106 == 5))
            {
                if ((DOES_VEHICLE_EXIST( l_U126[1] )) AND ((DOES_VEHICLE_EXIST( l_U126[0] )) AND ((DOES_CHAR_EXIST( l_U109[1] )) AND (DOES_CHAR_EXIST( l_U109[0] )))))
                {
                    if ((NOT (IS_VEH_DRIVEABLE( l_U126[1] ))) || ((NOT (IS_VEH_DRIVEABLE( l_U126[0] ))) || ((IS_CHAR_INJURED( l_U109[1] )) || (IS_CHAR_INJURED( l_U109[0] )))))
                    {
                        PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 8 \n" );
                        sub_149();
                    }
                }
            }
        }
        if (NOT l_U101)
        {
            WAIT( 0 );
        }
        else
        {
            l_U101 = 0;
        }
    }
    sub_149();
    return;
}

void sub_149()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U112 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_171( 7 ) );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U113 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U11224 );
    if (DOES_BLIP_EXIST( l_U103 ))
    {
        REMOVE_BLIP( l_U103 );
    }
    if (IS_SCREEN_FADED_OUT())
    {
        DELETE_CHAR( ref l_U109[0] );
    }
    else
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U109[0] );
    }
    if (IS_SCREEN_FADED_OUT())
    {
        DELETE_CHAR( ref l_U109[1] );
    }
    else
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U109[1] );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U126[0] );
    if (IS_SCREEN_FADED_OUT())
    {
        sub_694( l_U126[1] );
        DELETE_CAR( ref l_U126[1] );
    }
    else
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U126[1] );
    }
    g_U11226 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_171(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_470( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_470(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_694(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_1317()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1526(int iParam0)
{
    if (NOT (iParam0 == l_U106))
    {
        l_U106 = iParam0;
        l_U101 = 1;
    }
    return;
}

int sub_1584(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if ((uParam2^) == 25)
        {
            if (sub_1622( uParam0, uParam1, (uParam2^) ))
            {
                return 1;
            }
        }
        else if (sub_1622( uParam0, uParam1, -1 ))
        {
            return 1;
        }
        (uParam2^)++;
    }
    return 0;
}

int sub_1622(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    unknown uVar15;
    unknown uVar16;

    if (IS_PLAYER_PLAYING( sub_1317() ))
    {
        GET_CHAR_COORDINATES( sub_1648(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if (IS_CHAR_IN_WATER( sub_1648() ))
        {
            uVar5._fU8 = 1.00000000;
        }
    }
    uVar16 = GET_MAP_AREA_FROM_COORDS( uVar5 );
    if (NOT (iParam2 == -1))
    {
        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, iParam2, uVar16, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11, ref uVar15 );
    }
    else
    {
        GET_NEXT_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar16, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11 );
    }
    GET_DISTANCE_BETWEEN_COORDS_2D( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar12 );
    fVar14 = 1.00000000;
    if (NOT (sub_1879( uVar5, uVar8 )))
    {
        fVar14 *= 0.00000000;
    }
    fVar13 = uVar5._fU8 - uVar8._fU8;
    if (fVar13 < 0.00000000)
    {
        fVar13 *= -1.00000000;
    }
    if (NOT (fVar13 < 4.00000000))
    {
        if (fVar13 > 20.00000000)
        {
            fVar13 = 20.00000000;
        }
        fVar14 *= (20.00000000 - fVar13) / 20.00000000;
    }
    if (fVar12 < 100.00000000)
    {
        fVar14 *= fVar12 / 100.00000000;
    }
    if (sub_2111( uVar8._fU0, uVar8._fU4, uVar8._fU8, 5.00000000, 1128792064 ))
    {
        fVar14 *= 0.00000000;
    }
    if (fVar14 >= 1.00000000)
    {
        (uParam0^) = {uVar8};
        (uParam1^) = uVar11;
        return 1;
    }
    if (fVar14 > 0.00000000)
    {
        if (fVar14 > l_U105)
        {
            l_U114 = {uVar8};
            l_U104 = uVar11;
            l_U105 = fVar14;
        }
    }
    return 0;
}

void sub_1648()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1879(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    iVar9 = GET_MAP_AREA_FROM_COORDS( uParam3 );
    if (iVar8 == iVar9)
    {
        return 1;
    }
    return 0;
}

int sub_2111(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    GET_GAME_VIEWPORT_ID( ref uVar7 );
    if (CAM_IS_SPHERE_VISIBLE( uVar7, uParam0, uParam1, uParam2, uParam3 ))
    {
        if (IS_PLAYER_PLAYING( sub_1317() ))
        {
            GET_CHAR_COORDINATES( sub_1648(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {(vector( uParam0, uParam1, uParam2)) - vVar8};
            if ((VMAG( uVar11 )) < fParam4)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_2571(unknown uParam0, unknown uParam1)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        SET_CAR_HEALTH( uParam0, uParam1 );
        SET_ENGINE_HEALTH( uParam0, TO_FLOAT( uParam1 ) );
        SET_PETROL_TANK_HEALTH( uParam0, TO_FLOAT( uParam1 ) );
    }
    return;
}

void sub_2665(unknown uParam0, unknown uParam1, unknown uParam2)
{
    CREATE_CHAR_INSIDE_CAR( uParam2, sub_2678( uParam0 ), sub_171( uParam0 ), uParam1 );
    sub_2778( uParam0, (uParam1^) );
    sub_2872( uParam0, (uParam1^) );
    return;
}

int sub_2678(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13: return 9;
    }
    return 25;
}

void sub_2778(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13:
        SET_CHAR_RELATIONSHIP_GROUP( uParam1, 6 );
        break;
    }
    return;
}

void sub_2872(unknown uParam0, unknown uParam1)
{
    sub_2884( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_2884(unknown uParam0, int iParam1)
{
    sub_2895( uParam0 );
    if (iParam1 == 22)
    {
        sub_2995( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_3654( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_2895(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_2995(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((g_U15728[19]) AND ((uParam0^) == sub_1648()))
        {
            if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_3654(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_2995( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_2995( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

int sub_4088()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_DEAD( l_U109[0] )))
    {
        if (IS_VEH_DRIVEABLE( l_U126[0] ))
        {
            if (IS_PLAYER_PLAYING( sub_1317() ))
            {
                bVar2 = true;
                if (IS_CHAR_IN_ANY_CAR( sub_1648() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1648(), ref uVar3 );
                    if (IS_VEH_DRIVEABLE( uVar3 ))
                    {
                        GET_CAR_MODEL( uVar3, ref uVar4 );
                        if ((NOT (IS_THIS_MODEL_A_HELI( uVar4 ))) AND ((NOT (IS_THIS_MODEL_A_PLANE( uVar4 ))) AND (NOT (IS_THIS_MODEL_A_BOAT( uVar4 )))))
                        {
                            if (NOT (sub_4251( uVar3 )))
                            {
                                bVar2 = false;
                            }
                        }
                    }
                }
                if (bVar2)
                {
                    GET_CHAR_COORDINATES( sub_1648(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                    l_U117 = {sub_4356()};
                    l_U120 = {l_U123 - l_U117};
                    if ((VMAG( l_U120 )) > 1.00000000)
                    {
                        l_U123 = {l_U117};
                        TASK_CAR_DRIVE_TO_COORD( l_U109[0], l_U126[0], l_U123._fU0, l_U123._fU4, l_U123._fU8, 12.00000000, 0, 0, 2, 10.00000000, 15 );
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U109[0], 15, ref l_U130 );
                        if (l_U130 == 7)
                        {
                            return 1;
                        }
                        else
                        {
                            GET_CHAR_COORDINATES( sub_1648(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                            if ((LOCATE_CAR_3D( l_U126[0], uVar5._fU0, uVar5._fU4, uVar5._fU8, 15.00000000, 15.00000000, 2.00000000, 0 )) || (LOCATE_CAR_3D( l_U126[0], l_U123._fU0, l_U123._fU4, l_U123._fU8, 15.00000000, 15.00000000, 4.00000000, 0 )))
                            {
                                CLEAR_CHAR_TASKS( l_U109[0] );
                                return 1;
                            }
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U109[0], 49, ref l_U130 );
                    if (l_U130 == 7)
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1648(), ref uVar8 );
                        TASK_CAR_MISSION( l_U109[0], l_U126[0], uVar8, 12, 15.00000000, 2, 10, 5 );
                    }
                }
            }
        }
    }
    return 0;
}

int sub_4251(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 < 0.30000000)
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_4356()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown Result;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (IS_PLAYER_PLAYING( sub_1317() ))
    {
        GET_CHAR_COORDINATES( sub_1648(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        uVar10 = GET_MAP_AREA_FROM_COORDS( uVar2 );
    }
    GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar2._fU0, uVar2._fU4, uVar2._fU8, 1, uVar10, ref Result._fU0, ref Result._fU4, ref Result._fU8, ref uVar8, ref uVar9 );
    return Result;
}

int sub_6022()
{
    if (NOT (IS_PLAYER_CONTROL_ON( sub_1317() )))
    {
        if ((sub_6056()) AND (ARE_WIDESCREEN_BORDERS_ACTIVE()))
        {
            return 1;
        }
        if (HAS_CUTSCENE_LOADED())
        {
            if (NOT HAS_CUTSCENE_FINISHED())
            {
                return 1;
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            return 1;
        }
    }
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        return 1;
    }
    return 0;
}

int sub_6056()
{
    if ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_7279(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_7995()
{
    if ((IS_HELP_MESSAGE_BEING_DISPLAYED()) || ((IS_MESSAGE_BEING_DISPLAYED()) || (sub_8004())))
    {
        return 1;
    }
    return 0;
}

int sub_8004()
{
    int I;

    if (NOT (IS_CHAR_INJURED( sub_1648() )))
    {
        if (IS_ANY_SPEECH_PLAYING( sub_1648() ))
        {
            return 1;
        }
    }
    for ( I = 0; I < l_U109; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U109[I] )))
        {
            if (IS_ANY_SPEECH_PLAYING( l_U109[I] ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_8263(unknown uParam0, unknown uParam1)
{
    if (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 ))
    {
        sub_8290( uParam0 );
        if (NOT (IS_CHAR_INJURED( sub_1648() )))
        {
            sub_8429( 0, sub_1648(), "JOHNNY", 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U109[0] )))
        {
            sub_8429( 2, l_U109[0], "CLAY", 0 );
        }
        return 1;
    }
    else if (NOT (IS_STREAMING_ADDITIONAL_TEXT( uParam1 )))
    {
        REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
    }
    return 0;
}

void sub_8290(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_8307();
    return;
}

void sub_8307()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U2._fU16[I]._fU0 = nil;
        StrCopy( ref l_U2._fU16[I]._fU4, "", 32 );
        l_U2._fU344[I] = 0;
    }
    return;
}

void sub_8429(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_8509( "\n PED NUMBER ", uParam0 );
    sub_8549( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_8509(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8549(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8682(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_8703( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_8703(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_8757( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_8757(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_8779( iParam1 )))
    {
        return 0;
    }
    l_U2._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_9467( ref g_U8947, ref l_U2 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_8779(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_8856( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_8856( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_8856( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_8856(unknown uParam0)
{
    return;
}

void sub_9467(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

int sub_9719(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            return 0;
        }
    }
    return 1;
}

void sub_10006(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

int sub_10439(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_8856( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_8856( "\n speech is not playing" );
    }
    return 0;
}

