void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    boolean bVar13;
    int iVar14;
    unknown uVar15;
    int iVar16;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 0;
    l_U19 = 0;
    l_U20 = -1;
    l_U21 = 0;
    l_U22 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    REQUEST_ANIMS( "TAXI_HAIL" );
    while (NOT (HAVE_ANIMS_LOADED( "TAXI_HAIL" )))
    {
        WAIT( 0 );
    }
    while (true)
    {
        if (NOT sub_139())
        {
            if (DOES_VEHICLE_EXIST( g_U2687 ))
            {
                l_U11 = 1;
            }
            else
            {
                l_U11 = 0;
            }
            if (g_U2680)
            {
                if (g_U2674)
                {
                    if ((NOT IS_MINIGAME_IN_PROGRESS()) AND (NOT g_U12379))
                    {
                        g_U2674 = 0;
                    }
                }
            }
            if (NOT g_U12379)
            {
                if (NOT (g_U2670 == 6))
                {
                    g_U2670 = 6;
                }
                if (NOT (g_U2672 == nil))
                {
                    g_U2672 = nil;
                }
            }
            if ((NOT IS_NETWORK_GAME_RUNNING()) AND (NOT g_U2674))
            {
                if (NOT (g_U2668 == nil))
                {
                    if (NOT (DOES_BLIP_EXIST( g_U2668 )))
                    {
                        g_U2668 = nil;
                    }
                }
                sub_422();
                switch (l_U19)
                {
                    case 0:
                    if (IS_PLAYER_PLAYING( sub_148() ))
                    {
                        if (NOT sub_637())
                        {
                            sub_943();
                        }
                        else if (NOT (IS_WANTED_LEVEL_GREATER( sub_148(), 0 )))
                        {
                            if (TIMERA() > 30000)
                            {
                                sub_943();
                            }
                        }
                        else
                        {
                            sub_943();
                        }
                    }
                    else
                    {
                        sub_943();
                    }
                    if (l_U22 == 0)
                    {
                        l_U28 = nil;
                        l_U23 = nil;
                        l_U20 = -1;
                        l_U7 = 1;
                        SETTIMERB( 0 );
                        sub_1474( 1, "BLANK" );
                        sub_1695();
                        if (HAS_SCRIPT_LOADED( "taxi" ))
                        {
                            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "taxi" );
                        }
                        if (IS_PLAYER_PLAYING( sub_148() ))
                        {
                            SET_PLAYER_CAN_DO_DRIVE_BY( sub_148(), 1 );
                        }
                        g_U10565 = 0;
                        l_U22++;
                    }
                    if (l_U22 == 1)
                    {
                        iVar16 = 0;
                        if (IS_PLAYER_PLAYING( sub_148() ))
                        {
                            if ((IS_CONTROL_PRESSED( 2, 23 )) AND (NOT l_U7))
                            {
                                if (NOT (IS_CHAR_PLAYING_ANIM( sub_770(), "TAXI_HAIL", "HAIL_TAXI" )))
                                {
                                    if ((g_U9200) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_148() )))
                                    {
                                        if ((NOT (IS_CHAR_IN_ANY_CAR( sub_770() ))) AND ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_770() ))) AND (sub_2001())))
                                        {
                                            l_U28 = sub_2135();
                                            if (DOES_VEHICLE_EXIST( l_U28 ))
                                            {
                                                if (NOT (l_U28 == g_U2686))
                                                {
                                                    if (sub_2652( ref l_U28 ))
                                                    {
                                                        if (sub_4130( 1, 1 ))
                                                        {
                                                            iVar16 = 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (l_U13)
                        {
                            if (TIMERA() > 1000)
                            {
                                GET_SCRIPT_TASK_STATUS( sub_770(), 102, ref l_U25 );
                                if (l_U25 == 7)
                                {
                                    GET_SCRIPT_TASK_STATUS( sub_770(), 29, ref l_U25 );
                                    if (l_U25 == 7)
                                    {
                                        if ((NOT (IS_CHAR_PLAYING_ANIM( sub_770(), "TAXI_HAIL", "FORGET_IT" ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( sub_770(), "TAXI_HAIL", "FUCK_U" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_770(), "TAXI_HAIL", "HAIL_TAXI" )))))
                                        {
                                            if (NOT g_U9200)
                                            {
                                                bVar13 = IS_AMBIENT_SPEECH_DISABLED( sub_770() );
                                                if (bVar13)
                                                {
                                                    STOP_PED_SPEAKING( sub_770(), 0 );
                                                }
                                                SAY_AMBIENT_SPEECH( sub_770(), "TAXI_DRIVES_PAST", 0, 0, 0 );
                                                if (bVar13)
                                                {
                                                    STOP_PED_SPEAKING( sub_770(), 1 );
                                                }
                                            }
                                            l_U13 = 0;
                                        }
                                    }
                                }
                            }
                        }
                        if ((sub_4130( 1, 1 )) AND (iVar16))
                        {
                            if (sub_4740( 1, "BLANK", 1 ))
                            {
                                bVar13 = true;
                                if (NOT (l_U28 == g_U2687))
                                {
                                    if (IS_WANTED_LEVEL_GREATER( sub_148(), 0 ))
                                    {
                                        bVar13 = false;
                                    }
                                }
                                if (NOT (sub_5393( ref l_U28, 1 )))
                                {
                                    bVar13 = false;
                                }
                                if (NOT (sub_5448( l_U28 )))
                                {
                                    bVar13 = false;
                                }
                                if (IS_WANTED_LEVEL_GREATER( sub_148(), 0 ))
                                {
                                    bVar13 = false;
                                }
                                if (bVar13)
                                {
                                    CLEAR_CHAR_TASKS( sub_770() );
                                    if (NOT g_U9200)
                                    {
                                        if (IS_CHAR_ARMED( sub_770(), 7 ))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U26 );
                                            TASK_SWAP_WEAPON( 0, 0 );
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "HAIL_TAXI", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                            CLOSE_SEQUENCE_TASK( l_U26 );
                                            TASK_PERFORM_SEQUENCE( sub_770(), l_U26 );
                                            CLEAR_SEQUENCE_TASK( l_U26 );
                                        }
                                        else
                                        {
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_770(), "HAIL_TAXI", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                        }
                                    }
                                    else
                                    {
                                        bVar13 = IS_AMBIENT_SPEECH_DISABLED( sub_770() );
                                        if (bVar13)
                                        {
                                            STOP_PED_SPEAKING( sub_770(), 0 );
                                        }
                                        SAY_AMBIENT_SPEECH( sub_770(), "TAXI_HAIL_DRUNK", 1, 1, 0 );
                                        if (bVar13)
                                        {
                                            STOP_PED_SPEAKING( sub_770(), 1 );
                                        }
                                    }
                                    sub_5995( ref l_U28, ref l_U23 );
                                    SETTIMERA( 0 );
                                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, l_U28, 4000 );
                                    l_U12 = 1;
                                    l_U8 = 0;
                                    l_U7 = 1;
                                    sub_6225( 1 );
                                }
                                else
                                {
                                    CLEAR_CHAR_TASKS( sub_770() );
                                    if (NOT g_U9200)
                                    {
                                        if (IS_CHAR_ARMED( sub_770(), 7 ))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U26 );
                                            TASK_SWAP_WEAPON( 0, 0 );
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "HAIL_TAXI", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                            CLOSE_SEQUENCE_TASK( l_U26 );
                                            TASK_PERFORM_SEQUENCE( sub_770(), l_U26 );
                                            CLEAR_SEQUENCE_TASK( l_U26 );
                                        }
                                        else
                                        {
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_770(), "HAIL_TAXI", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                        }
                                    }
                                    else
                                    {
                                        bVar13 = IS_AMBIENT_SPEECH_DISABLED( sub_770() );
                                        if (bVar13)
                                        {
                                            STOP_PED_SPEAKING( sub_770(), 0 );
                                        }
                                        SAY_AMBIENT_SPEECH( sub_770(), "TAXI_HAIL_DRUNK", 1, 1, 0 );
                                        if (bVar13)
                                        {
                                            STOP_PED_SPEAKING( sub_770(), 1 );
                                        }
                                    }
                                    SET_TAXI_LIGHTS( l_U28, 0 );
                                    l_U7 = 1;
                                    SETTIMERA( 0 );
                                    l_U8 = 1;
                                    sub_943();
                                    sub_6225( 1 );
                                }
                                sub_6596();
                                TASK_LOOK_AT_VEHICLE( sub_770(), l_U28, 4000, 0 );
                                break;
                            }
                        }
                        else
                        {
                            sub_1474( 1, "BLANK" );
                        }
                        l_U9 = 0;
                        if (sub_637())
                        {
                            if (IS_PLAYER_PLAYING( sub_148() ))
                            {
                                if (IS_VEH_DRIVEABLE( g_U2686 ))
                                {
                                    if (sub_7273( g_U2686 ))
                                    {
                                        if (sub_7351( g_U2686 ))
                                        {
                                            if (NOT g_U9200)
                                            {
                                                if (LOCATE_CHAR_ON_FOOT_CAR_3D( sub_770(), g_U2686, 7.00000000, 7.00000000, 2.00000000, 0 ))
                                                {
                                                    if (NOT sub_7474())
                                                    {
                                                        l_U9 = 1;
                                                    }
                                                }
                                            }
                                            else if (LOCATE_CHAR_ON_FOOT_CAR_3D( sub_770(), g_U2686, 4.00000000, 4.00000000, 2.00000000, 0 ))
                                            {
                                                if (NOT sub_7474())
                                                {
                                                    l_U9 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (l_U9)
                        {
                            if (g_U2687 == g_U2686)
                            {
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )))
                                {
                                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                                    PRINT_HELP_FOREVER( "TX_H07" );
                                    l_U10 = 1;
                                }
                            }
                            else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )))
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                                PRINT_HELP_FOREVER( "TX_H02" );
                                l_U10 = 1;
                            }
                        }
                        else if (l_U10)
                        {
                            if (g_U2687 == g_U2686)
                            {
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" ))
                                {
                                    CLEAR_HELP();
                                    l_U10 = 0;
                                }
                            }
                            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" ))
                            {
                                CLEAR_HELP();
                                l_U10 = 0;
                            }
                        }
                        if (IS_PLAYER_PLAYING( sub_148() ))
                        {
                            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) == 0)
                            {
                                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )) || (sub_7825())))
                                {
                                    bVar13 = false;
                                    if ((NOT (sub_7887( sub_770() ))) AND ((TIMERB() > 275) AND (IS_CONTROL_PRESSED( 2, 3 ))))
                                    {
                                        bVar13 = true;
                                    }
                                    if (NOT (IS_CONTROL_PRESSED( 2, 3 )))
                                    {
                                        SETTIMERB( 0 );
                                    }
                                    if (bVar13)
                                    {
                                        sub_1258();
                                        if ((l_U28 == g_U2687) || (l_U28 == g_U9605))
                                        {
                                            if (IS_VEH_DRIVEABLE( l_U28 ))
                                            {
                                                LOCK_CAR_DOORS( l_U28, 1 );
                                            }
                                        }
                                        bVar13 = false;
                                        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )))
                                        {
                                            bVar13 = true;
                                        }
                                        if ((bVar13) AND (sub_637()))
                                        {
                                            l_U28 = g_U2686;
                                        }
                                        l_U20 = sub_8689( ref l_U28 );
                                        if (NOT (l_U20 == -1))
                                        {
                                            g_U10565 = 1;
                                            sub_8932();
                                            SET_PLAYER_CONTROL( sub_148(), 0 );
                                            CLEAR_CHAR_TASKS( sub_770() );
                                            if (g_U9200)
                                            {
                                                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                            }
                                            if (IS_VEH_DRIVEABLE( l_U28 ))
                                            {
                                                LOCK_CAR_DOORS( l_U28, 1 );
                                                OPEN_SEQUENCE_TASK( ref l_U26 );
                                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U28, 10000, l_U20 );
                                                CLOSE_SEQUENCE_TASK( l_U26 );
                                                TASK_PERFORM_SEQUENCE( sub_770(), l_U26 );
                                                CLEAR_SEQUENCE_TASK( l_U26 );
                                            }
                                            sub_5995( ref l_U28, ref l_U23 );
                                            if (NOT (IS_CHAR_INJURED( g_U2682 )))
                                            {
                                                GET_SCRIPT_TASK_STATUS( g_U2682, 48, ref l_U25 );
                                                if (l_U25 == 7)
                                                {
                                                    if (IS_VEH_DRIVEABLE( g_U2686 ))
                                                    {
                                                        TASK_CAR_TEMP_ACTION( g_U2682, g_U2686, 6, 15000 );
                                                    }
                                                }
                                            }
                                            if (IS_VEH_DRIVEABLE( l_U28 ))
                                            {
                                                SET_HAS_BEEN_OWNED_BY_PLAYER( l_U28, 1 );
                                            }
                                            if (DOES_GROUP_EXIST( sub_3758() ))
                                            {
                                                GET_GROUP_SIZE( sub_3758(), ref uVar15, ref iVar14 );
                                                if (iVar14 > 0)
                                                {
                                                    GET_GROUP_MEMBER( sub_3758(), 0, ref l_U24 );
                                                    if (NOT (IS_CHAR_INJURED( l_U24 )))
                                                    {
                                                        CLEAR_CHAR_TASKS( l_U24 );
                                                        OPEN_SEQUENCE_TASK( ref l_U26 );
                                                        if (l_U20 == 1)
                                                        {
                                                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U28, 10000, 2 );
                                                        }
                                                        else
                                                        {
                                                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U28, 10000, 1 );
                                                        }
                                                        CLOSE_SEQUENCE_TASK( l_U26 );
                                                        TASK_PERFORM_SEQUENCE( l_U24, l_U26 );
                                                        CLEAR_SEQUENCE_TASK( l_U26 );
                                                    }
                                                    if (iVar14 > 1)
                                                    {
                                                        GET_GROUP_MEMBER( sub_3758(), 1, ref l_U24 );
                                                        if (NOT (IS_CHAR_INJURED( l_U24 )))
                                                        {
                                                            OPEN_SEQUENCE_TASK( ref l_U26 );
                                                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U28, 10000, 0 );
                                                            CLOSE_SEQUENCE_TASK( l_U26 );
                                                            TASK_PERFORM_SEQUENCE( l_U24, l_U26 );
                                                            CLEAR_SEQUENCE_TASK( l_U26 );
                                                        }
                                                    }
                                                }
                                            }
                                            SETTIMERA( 0 );
                                            l_U7 = 1;
                                            sub_5015();
                                            sub_6225( 2 );
                                        }
                                    }
                                }
                                else if (NOT (IS_CONTROL_PRESSED( 2, 3 )))
                                {
                                    SETTIMERB( 0 );
                                }
                            }
                            else
                            {
                                SETTIMERB( 0 );
                            }
                        }
                    }
                    break;
                    case 1:
                    if (IS_PLAYER_PLAYING( sub_148() ))
                    {
                        if (DOES_VEHICLE_EXIST( g_U2686 ))
                        {
                            if (IS_VEH_DRIVEABLE( g_U2686 ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( sub_770(), g_U2686 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U2682 )))
                                    {
                                        if (IS_CHAR_IN_CAR( g_U2682, g_U2686 ))
                                        {
                                            bVar13 = false;
                                            if (TIMERA() > 1000)
                                            {
                                                GET_SCRIPT_TASK_STATUS( sub_770(), 102, ref l_U25 );
                                                if (l_U25 == 7)
                                                {
                                                    if ((NOT (IS_CHAR_PLAYING_ANIM( sub_770(), "TAXI_HAIL", "FORGET_IT" ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( sub_770(), "TAXI_HAIL", "FUCK_U" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_770(), "TAXI_HAIL", "HAIL_TAXI" )))))
                                                    {
                                                        GET_SCRIPT_TASK_STATUS( sub_770(), 29, ref l_U25 );
                                                        if (l_U25 == 7)
                                                        {
                                                            bVar13 = true;
                                                        }
                                                    }
                                                }
                                            }
                                            if (bVar13)
                                            {
                                                if (NOT l_U8)
                                                {
                                                    OPEN_SEQUENCE_TASK( ref l_U26 );
                                                    if (sub_9936( g_U2686 ))
                                                    {
                                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Aknowledge_R", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                                    }
                                                    else
                                                    {
                                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Aknowledge_L", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                                                    }
                                                    TASK_CAR_MISSION( 0, g_U2686, 0, 21, 12.00000000, 1, 3, 3 );
                                                    TASK_CAR_MISSION( 0, g_U2686, 0, 5, 12.00000000, 1, 3, 3 );
                                                    CLOSE_SEQUENCE_TASK( l_U26 );
                                                    TASK_PERFORM_SEQUENCE( g_U2682, l_U26 );
                                                    CLEAR_SEQUENCE_TASK( l_U26 );
                                                    INCREMENT_INT_STAT_NO_MESSAGE( 268, 1 );
                                                }
                                                SETTIMERA( 0 );
                                                l_U13 = 0;
                                                sub_6225( 0 );
                                            }
                                        }
                                        else
                                        {
                                            l_U13 = 0;
                                            sub_6225( 0 );
                                        }
                                    }
                                    else
                                    {
                                        l_U13 = 0;
                                        sub_6225( 0 );
                                    }
                                }
                                else
                                {
                                    l_U13 = 0;
                                    sub_6225( 2 );
                                }
                            }
                            else
                            {
                                l_U13 = 0;
                                sub_6225( 0 );
                            }
                        }
                        else if ((TIMERA() > 3000) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_770(), "TAXI_HAIL", "HAIL_TAXI" ))))
                        {
                            CLEAR_CHAR_TASKS( sub_770() );
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar14 );
                            if (iVar14 < 2)
                            {
                                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_770(), "FORGET_IT", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                            }
                            else
                            {
                                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_770(), "FUCK_U", "TAXI_HAIL", 8.00000000, 0, 0, 0, 0, -1 );
                            }
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref iVar14 );
                            if (iVar14 == 1)
                            {
                                if (NOT g_U9200)
                                {
                                    l_U13 = 1;
                                }
                            }
                            SETTIMERA( 0 );
                            sub_6225( 0 );
                        }
                    }
                    if (IS_CONTROL_PRESSED( 2, 3 ))
                    {
                        sub_6225( 0 );
                    }
                    break;
                    case 2:
                    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )))
                    {
                        CLEAR_HELP();
                    }
                    if (l_U22 == 0)
                    {
                        SETTIMERA( 0 );
                        REQUEST_SCRIPT( "taxi" );
                        if (IS_PLAYER_PLAYING( sub_148() ))
                        {
                            SET_PLAYER_CAN_DO_DRIVE_BY( sub_148(), 0 );
                        }
                        l_U22++;
                    }
                    if (l_U22 == 1)
                    {
                        bVar13 = false;
                        if (TIMERA() > 12000)
                        {
                            if (IS_PLAYER_PLAYING( sub_148() ))
                            {
                                if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_770() )))
                                {
                                    bVar13 = true;
                                }
                            }
                        }
                        if ((NOT sub_10967()) AND ((NOT bVar13) AND (sub_10846())))
                        {
                            if (NOT (IS_CHAR_INJURED( g_U2682 )))
                            {
                                GET_SCRIPT_TASK_STATUS( g_U2682, 48, ref l_U25 );
                                if (l_U25 == 7)
                                {
                                    if (IS_VEH_DRIVEABLE( g_U2686 ))
                                    {
                                        TASK_CAR_TEMP_ACTION( g_U2682, g_U2686, 6, 15000 );
                                    }
                                }
                            }
                            if (IS_PLAYER_PLAYING( sub_148() ))
                            {
                                if (IS_VEH_DRIVEABLE( g_U2686 ))
                                {
                                    if (IS_CHAR_IN_CAR( sub_770(), g_U2686 ))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( sub_770(), g_U2686 ))
                                        {
                                            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2686, l_U20 )))
                                            {
                                                GET_CHAR_IN_CAR_PASSENGER_SEAT( g_U2686, l_U20, ref iVar12 );
                                                if (iVar12 == sub_770())
                                                {
                                                    sub_6225( 3 );
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (IS_PLAYER_PLAYING( sub_148() ))
                        {
                            SET_PLAYER_CONTROL( sub_148(), 1 );
                            CLEAR_CHAR_TASKS( sub_770() );
                            if (NOT (IS_CHAR_IN_ANY_CAR( sub_770() )))
                            {
                                CLEAR_CHAR_TASKS( sub_770() );
                            }
                            if (IS_CHAR_GETTING_IN_TO_A_CAR( sub_770() ))
                            {
                                CLEAR_CHAR_TASKS( sub_770() );
                                TASK_LEAVE_ANY_CAR( sub_770() );
                            }
                        }
                        if (DOES_GROUP_EXIST( sub_3758() ))
                        {
                            GET_GROUP_SIZE( sub_3758(), ref uVar15, ref iVar14 );
                            if (iVar14 > 0)
                            {
                                GET_GROUP_MEMBER( sub_3758(), 0, ref l_U24 );
                                if (NOT (IS_CHAR_INJURED( l_U24 )))
                                {
                                    CLEAR_CHAR_TASKS( l_U24 );
                                    if (NOT (IS_CAR_DEAD( g_U2686 )))
                                    {
                                        if (IS_CHAR_IN_CAR( l_U24, g_U2686 ))
                                        {
                                            TASK_LEAVE_CAR_IMMEDIATELY( l_U24, g_U2686 );
                                        }
                                    }
                                }
                                if (iVar14 > 1)
                                {
                                    GET_GROUP_MEMBER( sub_3758(), 1, ref l_U24 );
                                    if (NOT (IS_CHAR_INJURED( l_U24 )))
                                    {
                                        CLEAR_CHAR_TASKS( l_U24 );
                                        if (NOT (IS_CAR_DEAD( g_U2686 )))
                                        {
                                            if (IS_CHAR_IN_CAR( l_U24, g_U2686 ))
                                            {
                                                TASK_LEAVE_CAR_IMMEDIATELY( l_U24, g_U2686 );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        sub_943();
                        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "taxi" );
                        l_U13 = 0;
                        sub_6225( 0 );;
                    }
                    break;
                    case 3:
                    if (l_U22 == 0)
                    {
                        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H01" ))))
                        {
                            CLEAR_HELP();
                        }
                        REQUEST_SCRIPT( "taxi" );
                        l_U22++;
                    }
                    if (l_U22 == 1)
                    {
                        if (NOT (IS_CHAR_INJURED( g_U2682 )))
                        {
                            GET_SCRIPT_TASK_STATUS( g_U2682, 48, ref l_U25 );
                            if (l_U25 == 7)
                            {
                                if (IS_VEH_DRIVEABLE( g_U2686 ))
                                {
                                    TASK_CAR_TEMP_ACTION( g_U2682, g_U2686, 6, 15000 );
                                }
                            }
                        }
                        REQUEST_SCRIPT( "taxi" );
                        if (HAS_SCRIPT_LOADED( "taxi" ))
                        {
                            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) == 0)
                            {
                                l_U27 = START_NEW_SCRIPT( "taxi", 1024 );
                                MARK_SCRIPT_AS_NO_LONGER_NEEDED( "taxi" );
                                sub_6225( 4 );
                            }
                            else
                            {
                                TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "taxi" );
                                MARK_SCRIPT_AS_NO_LONGER_NEEDED( "taxi" );
                                SCRIPT_ASSERT( "Taxi Script Terminated - Please tell Neil F." );
                            }
                        }
                    }
                    break;
                    case 4:
                    if (IS_PLAYER_PLAYING( sub_148() ))
                    {
                        if (NOT (IS_THREAD_ACTIVE( l_U27 )))
                        {
                            if (NOT (sub_12729( sub_770() )))
                            {
                                sub_943();
                                if (HAS_SCRIPT_LOADED( "taxi" ))
                                {
                                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "taxi" );
                                }
                                l_U13 = 0;
                                sub_6225( 0 );
                            }
                        }
                    }
                    break;
                }
                sub_12972();
            }
        }
        else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H01" ))))
        {
            CLEAR_HELP();
        }
        if (NOT l_U29)
        {
            WAIT( 0 );
        }
        else
        {
            l_U29 = 0;
        }
    }
    return;
}

int sub_139()
{
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if ((ARE_WIDESCREEN_BORDERS_ACTIVE()) AND (NOT (IS_PLAYER_CONTROL_ON( sub_148() ))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_148()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_422()
{
    if (l_U12)
    {
        if (sub_439())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            l_U12 = 0;
        }
    }
    return;
}

int sub_439()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar2, ref iVar3 );
    }
    if ((iVar3 < 65472) || ((iVar3 > 64) || ((iVar2 < 65472) || (iVar2 > 64))))
    {
        return 1;
    }
    return 0;
}

int sub_637()
{
    int iVar2;

    if (DOES_VEHICLE_EXIST( g_U2686 ))
    {
        if (IS_VEH_DRIVEABLE( g_U2686 ))
        {
            GET_DRIVER_OF_CAR( g_U2686, ref iVar2 );
            if (DOES_CHAR_EXIST( iVar2 ))
            {
                if (NOT (IS_CHAR_INJURED( iVar2 )))
                {
                    if (iVar2 == g_U2682)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2686, 0 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( g_U2686, 0, ref iVar2 );
                            if (NOT (iVar2 == sub_770()))
                            {
                                return 0;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2686, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( g_U2686, 1, ref iVar2 );
                            if (NOT (iVar2 == sub_770()))
                            {
                                return 0;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2686, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( g_U2686, 2, ref iVar2 );
                            if (NOT (iVar2 == sub_770()))
                            {
                                return 0;
                            }
                        }
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_770()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_943()
{
    unknown uVar2;

    if (g_U2676)
    {
        if (NOT sub_962())
        {
            if ((DOES_VEHICLE_EXIST( g_U2686 )) AND (DOES_CHAR_EXIST( g_U2682 )))
            {
                if (NOT (IS_CHAR_INJURED( g_U2682 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U2682, 0 );
                    if (IS_VEH_DRIVEABLE( g_U2686 ))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( g_U2682, g_U2686 ))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar2 );
                            if ((NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2686, 2 ))) || ((NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2686, 1 ))) || (NOT (IS_CAR_PASSENGER_SEAT_FREE( g_U2686, 0 )))))
                            {
                                TASK_PAUSE( 0, 2000 );
                            }
                            TASK_CAR_MISSION( 0, g_U2686, 0, 1, 15.00000000, 0, 5, 5 );
                            CLOSE_SEQUENCE_TASK( uVar2 );
                            TASK_PERFORM_SEQUENCE( g_U2682, uVar2 );
                            CLEAR_SEQUENCE_TASK( uVar2 );
                        }
                    }
                }
                sub_1258();
            }
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H01" )))
            {
                CLEAR_HELP();
            }
            g_U2676 = 0;
            l_U6 = 0;
            g_U2682 = nil;
            g_U2686 = nil;
        }
    }
    return;
}

int sub_962()
{
    if (sub_976( g_U2686 ))
    {
        return 1;
    }
    return 0;
}

int sub_976(int iParam0)
{
    if (iParam0 == g_U2687)
    {
        return 1;
    }
    return 0;
}

void sub_1258()
{
    if (l_U6)
    {
        l_U6 = 0;
    }
    return;
}

void sub_1474(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((l_U5) AND (g_U10534 == iParam0))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_1695();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_148(), 1 );
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

void sub_1695()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

int sub_2001()
{
    int iVar2;

    if (IS_CHAR_IN_AREA_3D( sub_770(), -900.27590000, 296.00000000, -32.25060000, -400.00000000, 796.98660000, -4.32560000, 0 ))
    {
        return 1;
    }
    GET_INTERIOR_FROM_CHAR( sub_770(), ref iVar2 );
    if (iVar2 == nil)
    {
        return 1;
    }
    return 0;
}

void sub_2135()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown[9] uVar17;
    int I;
    float[9] fVar28;
    float fVar38;
    float fVar39;
    float fVar40;
    int iVar41;

    array(ref uVar17, 9);
    array(ref fVar28, 9);
    GET_CHAR_COORDINATES( sub_770(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.33000000, -956048545, 2310, ref uVar17[0] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.66000000, -956048545, 2310, ref uVar17[1] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 1.00000000, -956048545, 2310, ref uVar17[2] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.33000000, 1884962369, 2310, ref uVar17[3] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.66000000, 1884962369, 2310, ref uVar17[4] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 1.00000000, 1884962369, 2310, ref uVar17[5] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.33000000, 1208856469, 2310, ref uVar17[6] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 0.66000000, 1208856469, 2310, ref uVar17[7] );
    GET_RANDOM_CAR_IN_SPHERE( vVar2.x, vVar2.y, vVar2.z, 30.00000000 * 1.00000000, 1208856469, 2310, ref uVar17[8] );
    fVar38 = 0.00000000;
    iVar41 = -1;
    for ( I = 0; I < 9; I++ )
    {
        fVar28[I] = 0.00000000;
        if (DOES_VEHICLE_EXIST( uVar17[I] ))
        {
            if (IS_VEH_DRIVEABLE( uVar17[I] ))
            {
                if (sub_2652( ref uVar17[I] ))
                {
                    if (NOT (uVar17[I] == g_U2686))
                    {
                        fVar28[I] = 0.00000000;
                        GET_CAR_COORDINATES( uVar17[I], ref vVar5.x, ref vVar5.y, ref vVar5.z );
                        fVar40 = vVar2.z - vVar5.z;
                        if (fVar40 < 0.00000000)
                        {
                            fVar40 *= -1.00000000;
                        }
                        if (fVar40 < 3.00000000)
                        {
                            fVar28[I] = 1.00000000;
                            uVar11 = {vVar5 - vVar2};
                            fVar39 = VMAG( uVar11 );
                            if (fVar39 > 30.00000000)
                            {
                                fVar39 = 30.00000000;
                            }
                            fVar39 -= 30.00000000;
                            fVar39 *= -1.00000000;
                            fVar39 /= 30.00000000;
                            fVar39 *= 0.50000000;
                            fVar39 += 0.50000000;
                            fVar28[I] *= fVar39;
                            if (NOT (IS_CAR_ON_SCREEN( uVar17[I] )))
                            {
                                fVar28[I] *= 0.50000000;
                            }
                            if (sub_3678( uVar17[I] ))
                            {
                                fVar28[I] *= 0.20000000;
                            }
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_770(), 0.00000000, 1.00000000, 0.00000000, ref vVar8.x, ref vVar8.y, ref vVar8.z );
                            uVar11 = {vVar8 - vVar2};
                            uVar14 = {vVar5 - vVar2};
                            GET_ANGLE_BETWEEN_2D_VECTORS( uVar11._fU0, uVar11._fU4, uVar14._fU0, uVar14._fU4, ref fVar40 );
                            if (fVar40 > 60.00000000)
                            {
                                fVar28[I] *= 0.00000000;
                            }
                            if (fVar28[I] > fVar38)
                            {
                                fVar38 = fVar28[I];
                                iVar41 = I;
                            }
                        }
                    }
                }
            }
        }
    }
    if (NOT (iVar41 == -1))
    {
        return uVar17[iVar41];
    }
    return nil;
}

int sub_2652(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (sub_2694( (uParam0^) ))
            {
                if (IS_VEH_DRIVEABLE( (uParam0^) ))
                {
                    GET_DRIVER_OF_CAR( (uParam0^), ref l_U23 );
                    if ((sub_2820( l_U23 )) AND (NOT (IS_CHAR_DEAD( l_U23 ))))
                    {
                        if (NOT sub_3175())
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_2694(int iParam0)
{
    if ((iParam0 == g_U2687) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

int sub_2820(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_PED_A_MISSION_PED( uParam0 ))
        {
            if ((IS_CHAR_MODEL( uParam0, 1180218190 )) || ((IS_CHAR_MODEL( uParam0, 594261682 )) || ((IS_CHAR_MODEL( uParam0, 1207402441 )) || ((IS_CHAR_MODEL( uParam0, -1516474414 )) || ((IS_CHAR_MODEL( uParam0, 2034185905 )) || ((IS_CHAR_MODEL( uParam0, 208763854 )) || ((IS_CHAR_MODEL( uParam0, -432593815 )) || ((IS_CHAR_MODEL( uParam0, 677687516 )) || ((IS_CHAR_MODEL( uParam0, 697247370 )) || ((IS_CHAR_MODEL( uParam0, 52357603 )) || ((IS_CHAR_MODEL( uParam0, -1562020391 )) || ((IS_CHAR_MODEL( uParam0, 1158569407 )) || ((IS_CHAR_MODEL( uParam0, -1806886352 )) || ((IS_CHAR_MODEL( uParam0, -1628417063 )) || ((IS_CHAR_MODEL( uParam0, -1420592428 )) || ((IS_CHAR_MODEL( uParam0, -344136289 )) || ((IS_CHAR_MODEL( uParam0, 734334931 )) || ((IS_CHAR_MODEL( uParam0, 8772846 )) || (IS_CHAR_MODEL( uParam0, 1552970117 ))))))))))))))))))))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_3175()
{
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if (IS_CHAR_IN_AREA_3D( sub_770(), 95.26050000, 836.10100000, 13.45290000, 110.53550000, 856.45100000, 42.22790000, 0 ))
        {
            return 1;
        }
        if (IS_CHAR_IN_AREA_3D( sub_770(), 598.60000000, 1466.25000000, 9.84960000, 654.34990000, 1487.70000000, 14.24960000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_3678(unknown uParam0)
{
    int I;
    int iVar4;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
            {
                GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref iVar4 );
                if (NOT (iVar4 == sub_770()))
                {
                    if (NOT (IS_GROUP_MEMBER( iVar4, sub_3758() )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_3758()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_4130(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_148() )))
            {
                if (((g_U9200) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_148() )))))
                {
                    if (NOT sub_4226())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_770() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_4311())
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

int sub_4226()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_4311()
{
    return sub_4322( 0, 0 );
}

int sub_4322(boolean bParam0, unknown uParam1)
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

int sub_4740(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_4130( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_148(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_5015();
                l_U3 = 1;
                g_U10535 = 6;
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
                g_U10535 = 0;
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

void sub_5015()
{
    return sub_4322( 1, 1 );
}

int sub_5393(unknown uParam0, boolean bParam1)
{
    int iVar4;

    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (sub_2694( (uParam0^) ))
            {
                if ((NOT bParam1) || (sub_5448( (uParam0^) )))
                {
                    GET_DRIVER_OF_CAR( (uParam0^), ref l_U23 );
                    if ((sub_2820( l_U23 )) AND (NOT (IS_CHAR_DEAD( l_U23 ))))
                    {
                        if ((NOT bParam1) || (NOT (sub_3678( (uParam0^) ))))
                        {
                            GET_CAR_DOOR_LOCK_STATUS( (uParam0^), ref iVar4 );
                            if ((iVar4 == 2) || (iVar4 == 3))
                            {
                                if ((NOT ((uParam0^) == g_U2687)) AND (NOT ((uParam0^) == g_U9605)))
                                {
                                    return 0;
                                }
                            }
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_5448(int iParam0)
{
    if (NOT (iParam0 == g_U2687))
    {
        if (sub_2694( iParam0 ))
        {
            if (ARE_TAXI_LIGHTS_ON( iParam0 ))
            {
                return 1;
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_5995(unknown uParam0, unknown uParam1)
{
    if ((NOT (g_U2686 == nil)) AND (NOT ((uParam0^) == g_U2686)))
    {
        sub_943();
    }
    if ((DOES_CHAR_EXIST( (uParam1^) )) AND (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_CHAR_DEAD( (uParam1^) )))
            {
                if (IS_CHAR_IN_CAR( (uParam1^), (uParam0^) ))
                {
                    g_U2686 = (uParam0^);
                    g_U2682 = (uParam1^);
                    g_U2676 = 1;
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U2682, 1 );
                    if (NOT (IS_CAR_A_MISSION_CAR( g_U2686 )))
                    {
                        l_U6 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_6225(int iParam0)
{
    l_U29 = 0;
    if (NOT (iParam0 == l_U19))
    {
        l_U22 = 0;
        l_U19 = iParam0;
        l_U29 = 1;
    }
    return;
}

void sub_6596()
{
    unknown uVar2;
    unknown[9] uVar3;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    int I;

    array(ref uVar3, 9);
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        GET_CHAR_COORDINATES( sub_770(), ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.33000000, -956048545, 2310, ref uVar3[0] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.66000000, -956048545, 2310, ref uVar3[1] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 1.00000000, -956048545, 2310, ref uVar3[2] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.33000000, 1884962369, 2310, ref uVar3[3] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.66000000, 1884962369, 2310, ref uVar3[4] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 1.00000000, 1884962369, 2310, ref uVar3[5] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.33000000, 1208856469, 2310, ref uVar3[6] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 0.66000000, 1208856469, 2310, ref uVar3[7] );
        GET_RANDOM_CAR_IN_SPHERE( uVar13._fU0, uVar13._fU4, uVar13._fU8, 30.00000000 * 1.00000000, 1208856469, 2310, ref uVar3[8] );
        for ( I = 0; I < 9; I++ )
        {
            if (DOES_VEHICLE_EXIST( uVar3[I] ))
            {
                if (NOT (IS_CAR_DEAD( uVar3[I] )))
                {
                    GET_DRIVER_OF_CAR( uVar3[I], ref uVar2 );
                    if (NOT (IS_CHAR_DEAD( uVar2 )))
                    {
                        TASK_LOOK_AT_CHAR( uVar2, sub_770(), 3000, 0 );
                    }
                }
            }
        }
    }
    return;
}

int sub_7273(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 < 0.50000000)
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

int sub_7351(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_ROLL( uParam0, ref fVar3 );
        if ((fVar3 > -45.00000000) AND (fVar3 < 45.00000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_7474()
{
    return 0;
}

int sub_7825()
{
    float fVar2;

    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) == 0)
        {
            if (sub_4311())
            {
                if (NOT (sub_7887( sub_770() )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_770() )))
                    {
                        GET_CAR_CHAR_IS_USING( sub_770(), ref l_U28 );
                        if (DOES_VEHICLE_EXIST( l_U28 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U28 ))
                            {
                                if (sub_2694( l_U28 ))
                                {
                                    if (sub_8237( l_U28 ))
                                    {
                                        if (sub_7351( l_U28 ))
                                        {
                                            GET_CAR_SPEED( l_U28, ref fVar2 );
                                            if (fVar2 <= 0.50000000)
                                            {
                                                if (sub_5393( ref l_U28, 0 ))
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
            }
        }
    }
    return 0;
}

int sub_7887(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))
        {
            if (HAVE_ANIMS_LOADED( "VEH@STD" ))
            {
                if (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_open_out_ds" ))
                {
                    return 1;
                }
                if (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_open_out_ps" ))
                {
                    return 1;
                }
                if ((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_ps" )) || ((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_jack_ps" )) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_ds" ))))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_8237(unknown uParam0)
{
    int iVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_DRIVER_OF_CAR( uParam0, ref iVar3 );
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if ((sub_2820( iVar3 )) AND (NOT (IS_CHAR_INJURED( iVar3 ))))
                {
                    if (NOT (IS_PED_IN_COMBAT( iVar3 )))
                    {
                        if (NOT (iVar3 == sub_770()))
                        {
                            if (IS_CHAR_SITTING_IN_CAR( iVar3, uParam0 ))
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_8689(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if (IS_PLAYER_PLAYING( sub_148() ))
        {
            GET_CHAR_COORDINATES( sub_770(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        }
        else
        {
            return -1;
        }
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( (uParam0^), 1.00000000, -0.50000000, 0.00000000, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        uVar12 = {vVar6 - vVar3};
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( (uParam0^), -1.00000000, -0.50000000, 0.00000000, ref vVar9.x, ref vVar9.y, ref vVar9.z );
        uVar15 = {vVar9 - vVar3};
        if ((VMAG( uVar12 )) < (VMAG( uVar15 )))
        {
            return 2;
        }
        else
        {
            return 1;
        }
        break;
    }
    return -1;
}

void sub_8932()
{
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if (NOT (IS_PED_RAGDOLL( sub_770() )))
        {
            return;
        }
        UNLOCK_RAGDOLL( sub_770(), 1 );
        SWITCH_PED_TO_ANIMATED( sub_770(), 0 );
    }
    return;
}

int sub_9936(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    float fVar18;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 1.00000000, 0.00000000, 0.00000000, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        if (IS_PLAYER_PLAYING( sub_148() ))
        {
            GET_CHAR_COORDINATES( sub_770(), ref vVar9.x, ref vVar9.y, ref vVar9.z );
        }
        uVar12 = {vVar6 - vVar3};
        uVar15 = {vVar9 - vVar3};
        GET_ANGLE_BETWEEN_2D_VECTORS( uVar12._fU0, uVar12._fU4, uVar15._fU0, uVar15._fU4, ref fVar18 );
        if (fVar18 < 90.00000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_10846()
{
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        if (IS_VEH_DRIVEABLE( g_U2686 ))
        {
            if (sub_2694( g_U2686 ))
            {
                GET_DRIVER_OF_CAR( g_U2686, ref l_U23 );
                if (NOT (IS_CHAR_DEAD( l_U23 )))
                {
                    if (NOT (l_U23 == sub_770()))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_10967()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    unknown uVar17;
    vector vVar18;
    unknown uVar21;
    float fVar22;

    if (IS_CONTROL_PRESSED( 2, 3 ))
    {
        return 0;
    }
    GET_GAME_CAM( ref uVar5 );
    GET_CAM_ROT( uVar5, ref uVar2._fU0, ref uVar2._fU4, ref uVar6 );
    vVar7 = {0.00000000, 1.00000000, 0.00000000};
    vVar7 = {sub_11051( vVar7, 0.00000000, 0.00000000, uVar6 )};
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar10, ref uVar11, ref uVar12, ref uVar13 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref uVar10, ref uVar11 );
    }
    uVar2._fU0 = uVar10 / 128.00000000;
    uVar2._fU4 = uVar11 / -128.00000000;
    uVar2._fU8 = 0.00000000;
    if ((VMAG( uVar2 )) < 0.50000000)
    {
        return 0;
    }
    GET_HEADING_FROM_VECTOR_2D( uVar2._fU0, uVar2._fU4, ref uVar17 );
    vVar14 = {0.00000000, 1.00000000, 0.00000000};
    vVar14 = {sub_11051( vVar14, 0.00000000, 0.00000000, uVar6 )};
    vVar14 = {sub_11051( vVar14, 0.00000000, 0.00000000, uVar17 )};
    if (IS_PLAYER_PLAYING( sub_148() ))
    {
        GET_CHAR_HEADING( sub_770(), ref uVar21 );
        vVar18 = {0.00000000, 1.00000000, 0.00000000};
        vVar18 = {sub_11051( vVar18, 0.00000000, 0.00000000, uVar21 )};
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( vVar18.x, vVar18.y, vVar14.x, vVar14.y, ref fVar22 );
    if (fVar22 > 60.00000000)
    {
        if (NOT (sub_7887( sub_770() )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_11051(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = {uParam0};
    uVar8 = COS( uParam3._fU0 );
    uVar9 = SIN( uParam3._fU0 );
    uVar13._fU0 = uParam0._fU0;
    uVar13._fU4 = (uVar8 * Result._fU4) - (uVar9 * Result._fU8);
    uVar13._fU8 = (uVar9 * Result._fU4) + (uVar8 * Result._fU8);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU4 );
    uVar9 = SIN( uParam3._fU4 );
    uVar13._fU0 = (uVar8 * Result._fU0) + (uVar9 * Result._fU8);
    uVar13._fU4 = uParam0._fU4;
    uVar13._fU8 = (uVar8 * Result._fU8) - (uVar9 * Result._fU0);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU8 );
    uVar9 = SIN( uParam3._fU8 );
    uVar13._fU0 = (uVar8 * Result._fU0) - (uVar9 * Result._fU4);
    uVar13._fU4 = (uVar9 * Result._fU0) + (uVar8 * Result._fU4);
    uVar13._fU8 = uParam0._fU8;
    Result = {uVar13};
    return Result;
}

int sub_12729(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_2694( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_12972()
{
    if (l_U7)
    {
        if ((NOT (IS_BUTTON_PRESSED( 0, 10 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 7 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 6 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 5 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 4 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 15 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 14 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 17 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 16 ))))))))))))))
        {
            l_U7 = 0;
        }
    }
    return;
}

