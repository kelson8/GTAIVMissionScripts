void main()
{
    unknown uVar2;
    unknown uVar3;

    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U481 = {0.00000000, 0.00000000, 0.00000000};
    l_U599 = {1.00000000, 1.00000000, 1.00000000};
    l_U602 = {0.00000000, 1.00000000, 0.00000000};
    l_U605 = {0.00000000, -1.00000000, 0.00000000};
    l_U618 = 0;
    l_U619 = 0;
    l_U630 = 100.00000000;
    l_U631 = 10.50000000;
    l_U632 = 0.50000000;
    l_U633 = 2.85000000;
    l_U638 = 0;
    l_U639 = 0;
    l_U640 = 0;
    l_U641 = 0;
    l_U739 = 0;
    l_U740 = 0;
    l_U796 = 30;
    l_U798 = 0.00000000;
    l_U824 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_289();
        sub_2399();
    }
    l_U657[0] = {1016.44300000, -321.96020000, 19.30000000};
    l_U657[1] = {1019.47800000, -321.63660000, 19.30000000};
    l_U699[0] = 189853472;
    l_U699[1] = 189853472;
    l_U664[0] = 211.84890000;
    l_U664[1] = 122.85280000;
    l_U685 = {1023.12000000, -320.86300000, 19.20000000};
    l_U688 = 15.98960000;
    l_U671[0] = {1042.35400000, -329.35920000, 19.14490000};
    l_U681[0] = 112.46420000;
    l_U671[1] = {1043.81600000, -332.61790000, 18.63280000};
    l_U681[1] = 293.10970000;
    l_U671[2] = {1045.08800000, -335.36280000, 18.46740000};
    l_U681[2] = 297.85410000;
    l_U667 = {1048.43800000, -326.06040000, 18.46530000};
    l_U670 = 219.55330000;
    l_U754 = {0.00000000, 0.00000000, 0.00000000};
    l_U757 = {0.00000000, 0.00000000, 0.00000000};
    l_U760 = {0.00000000, 0.00000000, 0.00000000};
    l_U748 = {0.32500000, 0.27500000, 0.02500000};
    l_U751 = {-1, -0.02500000, 7.85000000};
    l_U806[0] = 1349725314;
    l_U806[1] = -344943009;
    sub_3401( "V2AUD" );
    LOAD_ADDITIONAL_TEXT( "V2AUD", 6 );
    while (true)
    {
        WAIT( 0 );
        if (l_U729)
        {
            if (LOAD_ALL_PATH_NODES( 1 ))
            {
                l_U729 = 0;
            }
        }
        if (l_U704)
        {
            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U647, sub_3600(), 0 )) || (IS_CHAR_INJURED( l_U647 )))
            {
                REMOVE_BLIP( l_U642 );
                REMOVE_BLIP( l_U643 );
                if (NOT (IS_CHAR_INJURED( l_U647 )))
                {
                    SET_CHAR_HEALTH( l_U647, 10 );
                }
                ALTER_WANTED_LEVEL( sub_3710(), 2 );
                l_U786 = 2;
                sub_3755();
            }
        }
        if (NOT l_U708)
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_3600(), 1030, 65218, 20.36810000, 40.00000000, 40.00000000, 40.00000000, 0 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1049657988, 1030, 65218, 20, 1, 0.00000000 );
                l_U708 = 1;
            }
        }
        if (l_U711)
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1049657988, 1030, 65218, 20, 0, 0.00000000 );
            l_U711 = 0;
        }
        if (l_U726)
        {
            sub_4900();
        }
        switch (l_U824)
        {
            case 0:
            if (g_U9893._fU24)
            {
                START_CUTSCENE_NOW( "vla2_a" );
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
                if (IS_VEH_DRIVEABLE( uVar2 ))
                {
                    if (LOCATE_CAR_3D( uVar2, 926.45650000, -489.77880000, 14.34470000, 20, 20, 20, 0 ))
                    {
                        SET_CAR_COORDINATES( uVar2, 920.83940000, -490.10880000, 14.21860000 );
                        SET_CAR_HEADING( uVar2, 355.31970000 );
                        SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                    }
                }
                else
                {
                    DELETE_CAR( ref uVar2 );
                }
                FORCE_WEATHER_NOW( 2 );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
            }
            l_U824 = 1;
            break;
            case 1:
            if (g_U9893._fU24)
            {
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
            }
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 928, 65047, 16, 1, 0.00000000 );
            CLEAR_NAMED_CUTSCENE( "vla2_a" );
            SET_CHAR_COORDINATES( sub_3600(), 926.10860000, -489.92090000, 14.34530000 );
            SET_CHAR_HEADING( sub_3600(), 96.13350000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            REQUEST_MODEL( -432593815 );
            REQUEST_MODEL( 189853472 );
            REQUEST_MODEL( -907477130 );
            REQUEST_MODEL( -344943009 );
            REQUEST_MODEL( 1349725314 );
            REQUEST_MODEL( 1958308232 );
            REQUEST_CAR_RECORDING( 880 );
            REQUEST_ANIMS( "missvlad2" );
            REQUEST_ANIMS( "gestures@niko" );
            LOAD_ALL_OBJECTS_NOW();
            while ((NOT (HAVE_ANIMS_LOADED( "gestures@niko" ))) || ((NOT (HAVE_ANIMS_LOADED( "missvlad2" ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 880 ))) || ((NOT (HAS_MODEL_LOADED( 1958308232 ))) || ((NOT (HAS_MODEL_LOADED( 1349725314 ))) || ((NOT (HAS_MODEL_LOADED( -344943009 ))) || ((NOT (HAS_MODEL_LOADED( -907477130 ))) || ((NOT (HAS_MODEL_LOADED( 189853472 ))) || (NOT (HAS_MODEL_LOADED( -432593815 )))))))))))
            {
                WAIT( 0 );
                if (NOT (HAS_MODEL_LOADED( -432593815 )))
                {
                    PRINTSTRING( "LOADING M_O_EastEuro_01          " );
                }
                if (NOT (HAS_MODEL_LOADED( 189853472 )))
                {
                    PRINTSTRING( "LOADING f_o_peasteuro_02          " );
                }
                if (NOT (HAS_MODEL_LOADED( -907477130 )))
                {
                    PRINTSTRING( "LOADING burrito2          " );
                }
                if (NOT (HAS_MODEL_LOADED( -344943009 )))
                {
                    PRINTSTRING( "LOADING BLISTA          " );
                }
                if (NOT (HAS_MODEL_LOADED( 1349725314 )))
                {
                    PRINTSTRING( "LOADING Sentinel          " );
                }
                if (NOT (HAS_MODEL_LOADED( 1958308232 )))
                {
                    PRINTSTRING( "LOADING GB_LAUNDBASK_1          " );
                }
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 880 )))
                {
                    PRINTSTRING( "LOADING 880          " );
                }
                if (NOT (HAVE_ANIMS_LOADED( "missvlad2" )))
                {
                    PRINTSTRING( "LOADING missvlad2          " );
                }
                if (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
                {
                    PRINTSTRING( "LOADING gestures@niko          " );
                }
            }
            LOAD_ADDITIONAL_TEXT( "VLAD2", 0 );
            # -sub_C1FFC0-0xc214c8( 3, ref l_U802 );
            LOAD_COMBAT_DECISION_MAKER( 1, ref l_U803 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U803, 0 );
            SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U803, 0 );
            sub_7388( 0, sub_3600(), "Niko", 0 );
            CLEAR_AREA_OF_CARS( l_U667._fU0, l_U667._fU4, l_U667._fU8, 15 );
            CREATE_CAR( -907477130, l_U667._fU0, l_U667._fU4, l_U667._fU8, ref l_U648, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -907477130 );
            SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U648, 1 );
            SET_CAR_HEADING( l_U648, l_U670 );
            SET_CAR_ON_GROUND_PROPERLY( l_U648 );
            LOCK_CAR_DOORS( l_U648, 7 );
            for ( l_U689 = 0; l_U689 <= 1; l_U689++ )
            {
                CREATE_CAR( l_U806[l_U689], l_U671[l_U689]._fU0, l_U671[l_U689]._fU4, l_U671[l_U689]._fU8, ref l_U649[l_U689], 1 );
                SET_CAR_HEADING( l_U649[l_U689], l_U681[l_U689] );
                SET_CAR_ON_GROUND_PROPERLY( l_U649[l_U689] );
                LOCK_CAR_DOORS( l_U649[l_U689], 7 );
                SET_CAR_AS_MISSION_CAR( l_U649[l_U689] );
            }
            LOAD_SCENE( 926.10860000, -489.92090000, 14.34530000 );
            # -sub_C1FFC0-0xc214c8( 0, ref l_U697 );
            CREATE_CHAR( 26, -432593815, l_U685._fU0, l_U685._fU4, l_U685._fU8, ref l_U647, 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U647, 1 );
            SET_CHAR_DECISION_MAKER( l_U647, l_U697 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U647, 1 );
            SET_PED_DIES_WHEN_INJURED( l_U647, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U647, 1 );
            l_U704 = 1;
            sub_7388( 1, l_U647, "PROPRIETOR_M", 0 );
            SET_CHAR_HEADING( l_U647, l_U688 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U647, 1 );
            CREATE_OBJECT( 1958308232, 1022.50000000, -320.71400000, 19.23130000, ref l_U656, 1 );
            SET_OBJECT_HEADING( l_U656, 256.17790000 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U656, "LAUNDRY_17x6_room01" );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U647, "LAUNDRY_17x6_room01" );
            ADD_BLIP_FOR_COORD( 1012.85100000, -324.99460000, 20.36810000, ref l_U642 );
            sub_8247( ref l_U642, 977.01440000, -307.90960000, 19.65220000, 274.10390000 );
            SWITCH_ROADS_OFF( 1127.84100000, -382.84310000, 0.00000000, 1133.68100000, -339.55790000, 100.00000000 );
            SET_ROUTE( l_U642, 1 );
            SET_PLAYER_CONTROL_ADVANCED( sub_3710(), 1, 1, 1 );
            SUPPRESS_PED_MODEL( -432593815 );
            SUPPRESS_CAR_MODEL( -907477130 );
            SUPPRESS_CAR_MODEL( -1346687836 );
            for ( l_U689 = 0; l_U689 <= 1; l_U689++ )
            {
                CREATE_CHAR( 26, l_U699[l_U689], l_U657[l_U689]._fU0, l_U657[l_U689]._fU4, l_U657[l_U689]._fU8, ref l_U644[l_U689], 1 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U644[l_U689], "LAUNDRY_17x6_room01" );
                SET_CHAR_HEADING( l_U644[l_U689], l_U664[l_U689] );
                SET_CHAR_DECISION_MAKER_TO_DEFAULT( l_U644[l_U689] );
            }
            if (NOT (IS_CHAR_INJURED( l_U644[1] )))
            {
                SET_CHAR_PROP_INDEX( l_U644[1], 0, 0 );
                SET_CHAR_PROP_INDEX( l_U644[1], 1, 0 );
            }
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            SET_PLAYER_CONTROL_ADVANCED( sub_3710(), 1, 1, 1 );
            l_U824 = 2;
            break;
            case 2:
            if (NOT l_U723)
            {
                PRINT_NOW( "VL2_1", 7500, 1 );
                l_U723 = 1;
            }
            if (IS_CHAR_SHOOTING_IN_AREA( sub_3600(), l_U667._fU0 - 20, l_U667._fU4 - 20, l_U667._fU0 + 20, l_U667._fU4 + 20, 0 ))
            {
                l_U704 = 0;
                l_U786 = 3;
                sub_3755();
            }
            if (IS_VEH_DRIVEABLE( l_U648 ))
            {
                if ((NOT (IS_VEH_WINDOW_INTACT( l_U648, 1 ))) || ((NOT (IS_VEH_WINDOW_INTACT( l_U648, 0 ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U648, sub_3600() ))))
                {
                    l_U704 = 0;
                    l_U786 = 3;
                    sub_3755();
                }
            }
            else
            {
                l_U704 = 0;
                l_U786 = 3;
                sub_3755();
            }
            if (LOCATE_CHAR_ANY_MEANS_2D( sub_3600(), 1012.68100000, -325.19100000, 50.00000000, 50.00000000, 0 ))
            {
                ADD_SCENARIO_BLOCKING_AREA( l_U685._fU0 - 20, l_U685._fU4 - 20, l_U685._fU8 - 20, l_U685._fU0 + 20, l_U685._fU4 + 20, l_U685._fU8 + 20 );
                CLEAR_AREA_OF_CHARS( l_U685._fU0, l_U685._fU4, l_U685._fU8, 15.00000000 );
                CLEAR_HELP();
                if (NOT (IS_CHAR_INJURED( l_U647 )))
                {
                    TASK_PLAY_ANIM( l_U647, "laundry_loop", "missvlad2", 1000.00000000, 1, 0, 0, 0, 0 );
                }
                if ((NOT (IS_CHAR_INJURED( l_U644[1] ))) AND (NOT (IS_CHAR_INJURED( l_U644[0] ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U698 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U644[1] );
                    TASK_CHAT_WITH_CHAR( 0, l_U644[1], 1, 1 );
                    SET_SEQUENCE_TO_REPEAT( l_U698, 1 );
                    CLOSE_SEQUENCE_TASK( l_U698 );
                    TASK_PERFORM_SEQUENCE( l_U644[0], l_U698 );
                    CLEAR_SEQUENCE_TASK( l_U698 );
                    OPEN_SEQUENCE_TASK( ref l_U698 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U644[0] );
                    TASK_CHAT_WITH_CHAR( 0, l_U644[0], 0, 1 );
                    SET_SEQUENCE_TO_REPEAT( l_U698, 1 );
                    CLOSE_SEQUENCE_TASK( l_U698 );
                    TASK_PERFORM_SEQUENCE( l_U644[1], l_U698 );
                    CLEAR_SEQUENCE_TASK( l_U698 );
                }
                l_U824 = 3;
            }
            break;
            case 3:
            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U644[1], sub_3600(), 0 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U644[0], sub_3600(), 0 )) || ((IS_SNIPER_BULLET_IN_AREA( 1011.15600000 - 1.50000000, -324.52100000 - 1.50000000, 21.96700000 - 1.50000000, 1011.15600000 + 1.50000000, -324.52110000 + 1.50000000, 21.96710000 + 1.50000000 )) || (IS_BULLET_IN_AREA( 1011.15600000, -324.52100000, 21.96700000, 2.80000000, 1 )))))
            {
                if ((IS_VEH_DRIVEABLE( l_U648 )) AND (NOT (IS_CHAR_INJURED( l_U647 ))))
                {
                    if (IS_VEH_DRIVEABLE( l_U648 ))
                    {
                        LOCK_CAR_DOORS( l_U648, 1 );
                        SET_CAR_COORDINATES( l_U648, l_U667._fU0, l_U667._fU4, l_U667._fU8 );
                        SET_CAR_HEADING( l_U648, l_U670 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U648 );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U648 );
                        CREATE_CAR( -907477130, l_U667._fU0, l_U667._fU4, l_U667._fU8, ref l_U648, 1 );
                        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U648, 1 );
                        SET_CAR_HEADING( l_U648, l_U670 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U648 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -907477130 );
                    }
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1049657988, 1030, 65218, 20, 0, 0.00000000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U647 );
                    ADD_BLIP_FOR_CHAR( l_U647, ref l_U643 );
                    OPEN_SEQUENCE_TASK( ref l_U698 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1033.10900000, -319.56210000, 18.66160000, 4, 2250, 0.25000000 );
                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U648, 10 );
                    CLOSE_SEQUENCE_TASK( l_U698 );
                    TASK_PERFORM_SEQUENCE( l_U647, l_U698 );
                    CLEAR_SEQUENCE_TASK( l_U698 );
                    BEGIN_CAM_COMMANDS( ref l_U785 );
                    l_U707 = 1;
                    l_U708 = 1;
                    l_U729 = 1;
                    l_U711 = 1;
                    CREATE_CAM( 14, ref l_U799 );
                    CREATE_CAM( 14, ref l_U800 );
                    CREATE_CAM( 3, ref l_U801 );
                    REMOVE_BLIP( l_U642 );
                    CLEAR_AREA_OF_CHARS( l_U685._fU0, l_U685._fU4, l_U685._fU8, 25.00000000 );
                    l_U824 = 7;
                }
            }
            if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
            {
                if (NOT l_U724)
                {
                    if (DOES_VEHICLE_EXIST( l_U653 ))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U653 );
                    }
                    GET_CAR_CHAR_IS_USING( sub_3600(), ref l_U653 );
                    if (LOCATE_CAR_2D( l_U653, 1001.41500000, -326.42460000, 50.00000000, 50.00000000, 0 ))
                    {
                        SET_CAR_AS_MISSION_CAR( l_U653 );
                    }
                    l_U724 = 1;
                }
            }
            else
            {
                l_U724 = 0;
            }
            if (NOT l_U714)
            {
                GET_INTERIOR_AT_COORDS( l_U657[0]._fU0, l_U657[0]._fU4, l_U657[0]._fU8, ref l_U804 );
                if (NOT (l_U804 == nil))
                {
                    if (NOT (IS_CHAR_INJURED( l_U644[0] )))
                    {
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U644[0], 1 );
                    }
                    ACTIVATE_INTERIOR( l_U804, 1 );
                    l_U714 = 1;
                }
            }
            if (IS_VEH_DRIVEABLE( l_U648 ))
            {
                if (IS_CHAR_SHOOTING_IN_AREA( sub_3600(), l_U667._fU0 - 20, l_U667._fU4 - 20, l_U667._fU0 + 20, l_U667._fU4 + 20, 0 ))
                {
                    l_U704 = 0;
                    l_U786 = 3;
                    sub_3755();
                }
                if ((NOT (IS_VEH_WINDOW_INTACT( l_U648, 1 ))) || ((NOT (IS_VEH_WINDOW_INTACT( l_U648, 0 ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U648, sub_3600() ))))
                {
                    l_U704 = 0;
                    l_U786 = 3;
                    sub_3755();
                }
            }
            else
            {
                l_U704 = 0;
                l_U786 = 3;
                sub_3755();
            }
            if (NOT l_U717)
            {
                if (LOCATE_CHAR_ON_FOOT_3D( sub_3600(), 1012.68100000, -325.19100000, 20.83000000, 1.60000000 + 0.80000000, 1.60000000 + 0.80000000, 1.60000000 + 0.80000000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U647 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U647 );
                        l_U717 = 1;
                    }
                }
            }
            l_U737 = 0;
            if ((IS_CHAR_ON_ANY_BIKE( sub_3600() )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3600(), 1012.68100000, -325.19100000, 20.83000000, 1.60000000, 1.60000000, 1.60000000, 0 )))
            {
                l_U737 = 1;
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3600(), 1012.68100000, -325.19100000, 20.83000000, 1.60000000, 1.60000000, 1.60000000, 0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
                {
                    GET_CAR_CHAR_IS_USING( sub_3600(), ref l_U655 );
                    if (IS_CAR_MODEL( l_U655, 1491375716 ))
                    {
                        l_U737 = 1;
                    }
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3600(), 1014.94000000, -324.94000000, 20.83000000, 1.10000000, 1.10000000, 1.10000000, 0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
                {
                    GET_CAR_CHAR_IS_USING( sub_3600(), ref l_U655 );
                    if (NOT (IS_CAR_MODEL( l_U655, 1491375716 )))
                    {
                        l_U737 = 1;
                    }
                }
            }
            if ((l_U737) || (LOCATE_CHAR_ON_FOOT_3D( sub_3600(), 1012.68100000, -325.19100000, 20.83000000, 1.60000000, 1.60000000, 1.60000000, 1 )))
            {
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3600(), 1014.94000000, -324.94000000, 20.83000000, 1.10000000, 1.10000000, 1.10000000, 0 )) || (sub_10982( 1, 1 )))
                {
                    REMOVE_PED_HELMET( sub_3600(), 1 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_3710(), 0, 1, 1 );
                    CLEAR_AREA( l_U667._fU0, l_U667._fU4, l_U667._fU8, 45, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U644[0] )))
                    {
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U644[0], 0 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U648 ))
                    {
                        LOCK_CAR_DOORS( l_U648, 1 );
                        SET_CAR_COORDINATES( l_U648, l_U667._fU0, l_U667._fU4, l_U667._fU8 );
                        SET_CAR_HEADING( l_U648, l_U670 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U648 );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U648 );
                        CREATE_CAR( -907477130, l_U667._fU0, l_U667._fU4, l_U667._fU8, ref l_U648, 1 );
                        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U648, 1 );
                        SET_CAR_HEADING( l_U648, l_U670 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U648 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -907477130 );
                    }
                    for ( l_U689 = 0; l_U689 <= 1; l_U689++ )
                    {
                        if (IS_VEH_DRIVEABLE( l_U649[l_U689] ))
                        {
                            SET_CAR_COORDINATES( l_U649[l_U689], l_U671[l_U689]._fU0, l_U671[l_U689]._fU4, l_U671[l_U689]._fU8 );
                            SET_CAR_HEADING( l_U649[l_U689], l_U681[l_U689] );
                            SET_CAR_ON_GROUND_PROPERLY( l_U649[l_U689] );
                        }
                        else
                        {
                            DELETE_CAR( ref l_U649[l_U689] );
                            CREATE_CAR( l_U806[l_U689], l_U671[l_U689]._fU0, l_U671[l_U689]._fU4, l_U671[l_U689]._fU8, ref l_U649[l_U689], 1 );
                            SET_CAR_HEADING( l_U649[l_U689], l_U681[l_U689] );
                            SET_CAR_ON_GROUND_PROPERLY( l_U649[l_U689] );
                            LOCK_CAR_DOORS( l_U649[l_U689], 7 );
                            SET_CAR_AS_MISSION_CAR( l_U649[l_U689] );
                        }
                    }
                    CLEAR_CHAR_TASKS( sub_3600() );
                    SET_CHAR_COORDINATES( l_U647, l_U685._fU0, l_U685._fU4, l_U685._fU8 );
                    SET_CHAR_HEADING( l_U647, l_U688 );
                    CLEAR_AREA( l_U685._fU0, l_U685._fU4, l_U685._fU8, 30, 1 );
                    TASK_LOOK_AT_OBJECT( sub_3600(), l_U656, 10000, 0 );
                    CLEAR_AREA( l_U667._fU0, l_U667._fU4, l_U667._fU8, 100, 1 );
                    l_U711 = 1;
                    REMOVE_BLIP( l_U642 );
                    DISPLAY_RADAR( 0 );
                    DISPLAY_HUD( 0 );
                    BEGIN_CAM_COMMANDS( ref l_U785 );
                    l_U707 = 1;
                    CREATE_CAM( 14, ref l_U799 );
                    CREATE_CAM( 14, ref l_U800 );
                    CREATE_CAM( 3, ref l_U801 );
                    SET_CAM_POS( l_U799, 1024.95200000, -320.62950000, 19.93575000 );
                    SET_CAM_ROT( l_U799, 1.71487700, -0.00000000, 101.41070000 );
                    SET_CAM_FOV( l_U799, 45.30000000 );
                    SET_CAM_POS( l_U800, 1024.95200000, -320.62950000, 19.93575000 );
                    SET_CAM_ROT( l_U800, 1.71487700, -0.00000000, 101.41070000 );
                    SET_CAM_FOV( l_U800, 51.29998000 );
                    SET_CAM_ACTIVE( l_U801, 1 );
                    SET_CAM_PROPAGATE( l_U801, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U801, l_U799, l_U800, 2600, 0 );
                    GET_GAME_VIEWPORT_ID( ref l_U805 );
                    WAIT( 0 );
                    SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U805, "LAUNDRY_17x6_room01" );
                    SET_WIDESCREEN_BORDERS( 1 );
                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U653 );
                    if (IS_VEH_DRIVEABLE( l_U653 ))
                    {
                        if (LOCATE_CAR_2D( l_U653, l_U667._fU0, l_U667._fU4, 15.00000000, 15.00000000, 0 ))
                        {
                            DELETE_CAR( ref l_U653 );
                        }
                        else if (LOCATE_CAR_2D( l_U653, 1013.08000000, -325.21130000, 3.00000000, 3.00000000, 0 ))
                        {
                            SET_CAR_COORDINATES( l_U653, 1006.63600000, -326.98830000, 19.23770000 );
                            SET_CAR_HEADING( l_U653, 201.92440000 );
                        }
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_3600(), ref l_U655 );
                        if (IS_CAR_MODEL( l_U655, 1491375716 ))
                        {
                            GET_CAR_CHAR_IS_USING( sub_3600(), ref l_U655 );
                            if (NOT (IS_CAR_A_MISSION_CAR( l_U655 )))
                            {
                                SET_CAR_AS_MISSION_CAR( l_U655 );
                            }
                            WARP_CHAR_FROM_CAR_TO_COORD( sub_3600(), 1013.08000000, -325.21130000, 19.00000000 );
                            SET_CHAR_HEADING( sub_3600(), 295.75330000 );
                            SET_CAR_COORDINATES( l_U655, 1011.35500000, -325.58420000, 19.32990000 );
                            SET_CAR_HEADING( l_U655, 193.78250000 );
                        }
                    }
                    if (IS_CHAR_ON_ANY_BIKE( sub_3600() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_3600(), ref l_U654 );
                        if (NOT (IS_CAR_A_MISSION_CAR( l_U654 )))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U654 );
                        }
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_3600(), 1013.08000000, -325.21130000, 19.00000000 );
                        SET_CHAR_HEADING( sub_3600(), 295.75330000 );
                        SET_CAR_COORDINATES( l_U654, 1011.35500000, -325.58420000, 19.32990000 );
                        SET_CAR_HEADING( l_U654, 193.78250000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_3600(), 1013.08000000, -325.21130000, 19.00000000 );
                        SET_CHAR_HEADING( sub_3600(), 295.75330000 );
                    }
                    if ((IS_VEH_DRIVEABLE( l_U648 )) AND (NOT (IS_CHAR_INJURED( l_U647 ))))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U698 );
                        TASK_LOOK_AT_CHAR( 0, l_U647, 4000, 0 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, 1020.57000000, -323.94640000, 19, 2, 3000 );
                        TASK_ACHIEVE_HEADING( 0, 1.43790000 );
                        CLOSE_SEQUENCE_TASK( l_U698 );
                        TASK_PERFORM_SEQUENCE( sub_3600(), l_U698 );
                        CLEAR_SEQUENCE_TASK( l_U698 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U647 );
                        if (NOT (DOES_BLIP_EXIST( l_U643 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U647, ref l_U643 );
                        }
                        OPEN_SEQUENCE_TASK( ref l_U698 );
                        TASK_PLAY_ANIM( 0, "throw_basket", "missvlad2", 8.00000000, 0, 1, 1, 0, 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1033.10900000, -319.56210000, 18.66160000, 4, 2550, 0.25000000 );
                        TASK_ENTER_CAR_AS_DRIVER( 0, l_U648, 10 );
                        CLOSE_SEQUENCE_TASK( l_U698 );
                        TASK_PERFORM_SEQUENCE( l_U647, l_U698 );
                        CLEAR_SEQUENCE_TASK( l_U698 );
                    }
                    SETTIMERA( 0 );
                    l_U824 = 4;
                }
            }
            break;
            case 4:
            if (NOT l_U734)
            {
                if (TIMERA() >= 230)
                {
                    GET_FRAME_TIME( ref l_U797 );
                    l_U798 += l_U797 + 0.15000000;
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -232199518, 1013, 65212, 20, 1, l_U798 );
                    if (l_U798 >= 1.00000000)
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -232199518, 1013, 65212, 20, 0, 0.00000000 );
                        l_U734 = 1;
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U647 )))
            {
                if (NOT l_U719)
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U647, "missvlad2", "throw_basket" ))
                    {
                        SET_CHAR_ANIM_SPEED( l_U647, "missvlad2", "throw_basket", 0.90000000 );
                        l_U719 = 1;
                    }
                }
            }
            if (NOT l_U718)
            {
                if (TIMERA() >= 1000)
                {
                    sub_13691( "V2_ARR1", ref l_U817, 7, 1 );
                    l_U718 = 1;
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U647 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U647, "missvlad2", "throw_basket" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U647, "missvlad2", "throw_basket", ref l_U747 );
                    if (NOT l_U709)
                    {
                        if (l_U747 >= 0.22140000)
                        {
                            ATTACH_OBJECT_TO_PED( l_U656, l_U647, 1232, l_U748, l_U751, 0 );
                            l_U726 = 1;
                            l_U709 = 1;
                        }
                    }
                }
            }
            if ((TIMERA() >= 7000) || (LOCATE_CHAR_ANY_MEANS_2D( sub_3600(), 1020.77800000, -323.26260000, 3.50000000, 3.50000000, 0 )))
            {
                SETTIMERA( 0 );
                SET_CAM_FOV( l_U799, 60.00000000 );
                SET_CAM_POS( l_U799, 1022.33900000, -321.52590000, 20.20973000 );
                SET_CAM_ROT( l_U799, 12.47003000, 0.00000000, -39.50790000 );
                SET_CAM_POS( l_U800, 1022.33900000, -321.52590000, 20.20973000 );
                SET_CAM_ROT( l_U800, 12.47003000, 0.00000000, -39.50790000 );
                SET_CAM_FOV( l_U800, 88.00000000 );
                SET_CAM_INTERP_STYLE_CORE( l_U801, l_U799, l_U800, 1500, 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3600() );
                SET_CHAR_COORDINATES( sub_3600(), 1020.57000000, -323.94640000, 19 );
                SET_CHAR_HEADING( sub_3600(), 1.43790000 );
                CLEAR_AREA_OF_CHARS( l_U685._fU0, l_U685._fU4, l_U685._fU8, 25.00000000 );
                l_U824 = 5;
            }
            break;
            case 5:
            l_U726 = 0;
            if (NOT (IS_CHAR_INJURED( l_U647 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U647, "missvlad2", "throw_basket" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U647, "missvlad2", "throw_basket", ref l_U747 );
                    if (NOT l_U713)
                    {
                        if (l_U747 >= 0.76510000)
                        {
                            SET_CAM_MOTION_BLUR( l_U801, 0.10000000 );
                            SET_CAM_MOTION_BLUR( l_U799, 0.10000000 );
                            SET_CAM_MOTION_BLUR( l_U800, 0.10000000 );
                            SET_CAM_POS( l_U800, 1022.33900000, -321.52590000, 20.20973000 );
                            SET_CAM_ROT( l_U800, -2.65605700, -0.00000000, 141.72930000 );
                            SET_CAM_FOV( l_U800, 55.00000000 );
                            SET_CAM_ACTIVE( l_U801, 1 );
                            SET_CAM_PROPAGATE( l_U801, 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U801, l_U799, l_U800, 300, 0 );
                            SETTIMERA( 0 );
                            for ( l_U689 = 0; l_U689 <= 1; l_U689++ )
                            {
                                if (NOT (IS_CHAR_INJURED( l_U644[l_U689] )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U644[l_U689] );
                                    TASK_SMART_FLEE_CHAR( l_U644[l_U689], l_U647, 50, -1 );
                                }
                            }
                            l_U713 = 1;
                        }
                    }
                    if (l_U747 >= 0.76510000)
                    {
                        if (DOES_OBJECT_EXIST( l_U656 ))
                        {
                            DETACH_OBJECT( l_U656, 1 );
                            GET_CHAR_COORDINATES( sub_3600(), ref l_U757._fU0, ref l_U757._fU4, ref l_U757._fU8 );
                            l_U757._fU8 += 1.60000000;
                            l_U757._fU4 += 1.90000000;
                            GET_OBJECT_COORDINATES( l_U656, ref l_U754._fU0, ref l_U754._fU4, ref l_U754._fU8 );
                            GET_MODEL_DIMENSIONS( 1958308232, ref l_U787, ref l_U790 );
                            l_U760 = {sub_15785( l_U754, l_U757 )};
                            l_U760 = {sub_15849( l_U760 )};
                            l_U760 = {sub_15998( l_U760, -7.00000000 )};
                            APPLY_FORCE_TO_OBJECT( l_U656, 1, l_U760, 0.00000000, 0.00000000, 0.00000000, 0, 0, 1, 1 );
                            SETTIMERB( 0 );
                            TASK_LOOK_AT_OBJECT( sub_3600(), l_U656, 2000, 0 );
                            l_U824 = 6;
                        }
                    }
                }
            }
            break;
            case 6:
            if (NOT l_U716)
            {
                l_U726 = 1;
                if (DOES_OBJECT_EXIST( l_U656 ))
                {
                    GET_OBJECT_COORDINATES( l_U656, ref l_U754._fU0, ref l_U754._fU4, ref l_U754._fU8 );
                    if ((TIMERB() > 500) || (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_3600(), l_U656, 1.60000000, 1.60000000, 1.60000000, 0 )))
                    {
                        SET_CAM_MOTION_BLUR( l_U799, 0.00000000 );
                        SET_CAM_MOTION_BLUR( l_U800, 0.00000000 );
                        SET_CAM_MOTION_BLUR( l_U801, 0.00000000 );
                        TASK_PLAY_ANIM( sub_3600(), "hit_basket", "missvlad2", 1000.00000000, 0, 0, 0, 0, 0 );
                        l_U716 = 1;
                    }
                }
            }
            if (NOT l_U720)
            {
                if (TIMERB() > 600)
                {
                    l_U729 = 1;
                    l_U726 = 0;
                    if (NOT (IS_CHAR_INJURED( l_U647 )))
                    {
                        SET_CHAR_COORDINATES( l_U647, 1026.33300000, -319.74180000, 19.21690000 );
                        SET_CHAR_HEADING( l_U647, 315.63390000 );
                    }
                    PLAY_AUDIO_EVENT_FROM_OBJECT( "V2_HUNG_OUT_TO_DRY_BASKET_HIT", l_U656 );
                    SET_CAM_ACTIVE( l_U800, 0 );
                    SET_CAM_PROPAGATE( l_U800, 0 );
                    SET_CAM_ACTIVE( l_U801, 0 );
                    SET_CAM_PROPAGATE( l_U801, 0 );
                    SET_CAM_ACTIVE( l_U799, 1 );
                    SET_CAM_PROPAGATE( l_U799, 1 );
                    SET_CAM_POS( l_U799, 1018.80500000, -325.59250000, 21.19295000 );
                    SET_CAM_ROT( l_U799, -16.79533000, 0.00000000, -53.38722000 );
                    SET_CAM_FOV( l_U799, 45.00000000 );
                    l_U720 = 1;
                }
            }
            if (NOT l_U706)
            {
                if (TIMERB() > 1500)
                {
                    SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 300 );
                    TASK_LOOK_AT_OBJECT( sub_3600(), l_U656, 0, 0 );
                    SET_CAM_ACTIVE( l_U799, 0 );
                    SET_CAM_PROPAGATE( l_U799, 0 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    DISPLAY_RADAR( 1 );
                    DISPLAY_HUD( 1 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U785 );
                    l_U707 = 0;
                    if (NOT (IS_CHAR_INJURED( l_U647 )))
                    {
                        CLEAR_AREA( l_U667._fU0, l_U667._fU4, l_U667._fU8, 100, 1 );
                    }
                    CLEAR_AREA_OF_CARS( l_U671[0]._fU0, l_U671[0]._fU4, l_U671[0]._fU8, 100 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_3710(), 1, 0, 1 );
                    l_U706 = 1;
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U647 )))
            {
                CLEAR_AREA( l_U667._fU0, l_U667._fU4, l_U667._fU8, 100, 1 );
                if (IS_VEH_DRIVEABLE( l_U648 ))
                {
                    CLEAR_AREA( l_U667._fU0, l_U667._fU4, l_U667._fU8, 500, 1 );
                    SET_CAR_COORDINATES( l_U648, l_U667._fU0, l_U667._fU4, l_U667._fU8 );
                    SET_CAR_HEADING( l_U648, l_U670 );
                    for ( l_U689 = 0; l_U689 <= 1; l_U689++ )
                    {
                        if (IS_VEH_DRIVEABLE( l_U649[l_U689] ))
                        {
                            SET_CAR_COORDINATES( l_U649[l_U689], l_U671[l_U689]._fU0, l_U671[l_U689]._fU4, l_U671[l_U689]._fU8 );
                            SET_CAR_HEADING( l_U649[l_U689], l_U681[l_U689] );
                            SET_CAR_ON_GROUND_PROPERLY( l_U649[l_U689] );
                        }
                        else
                        {
                            CREATE_CAR( l_U806[l_U689], l_U671[l_U689]._fU0, l_U671[l_U689]._fU4, l_U671[l_U689]._fU8, ref l_U649[l_U689], 1 );
                            SET_CAR_HEADING( l_U649[l_U689], l_U681[l_U689] );
                            SET_CAR_ON_GROUND_PROPERLY( l_U649[l_U689] );
                        }
                    }
                    SET_CAR_HEALTH( l_U648, 1000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U648 );
                    MODIFY_CHAR_MOVE_STATE( l_U647, 4 );
                    SETTIMERA( 0 );
                    l_U824 = 7;
                }
                else
                {
                    l_U704 = 0;
                    l_U786 = 3;
                    sub_3755();
                }
            }
            break;
            case 7:
            if (IS_CHAR_TRYING_TO_ENTER_A_LOCKED_CAR( sub_3600() ))
            {
                if (NOT l_U736)
                {
                    CLEAR_HELP();
                    PRINT_HELP( "VL2_24" );
                    l_U736 = 1;
                }
            }
            if (NOT l_U721)
            {
                PRINT_NOW( "VL2_4", 7500, 1 );
                l_U721 = 1;
            }
            GET_INTERIOR_FROM_CHAR( sub_3600(), ref l_U804 );
            if ((IS_VEH_DRIVEABLE( l_U648 )) AND (NOT (IS_CHAR_INJURED( l_U647 ))))
            {
                if ((l_U804 == nil) || (TIMERA() >= 10000))
                {
                    CLEAR_AREA( 1122.57100000, -338.18520000, 17.03270000, 70, 1 );
                    if (IS_CHAR_SITTING_IN_CAR( l_U647, l_U648 ))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U648, 880 );
                        SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U647, 1 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U647, 0 );
                        SET_COMBAT_DECISION_MAKER( l_U647, l_U803 );
                        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U647, 0 );
                        SET_CAR_ENGINE_ON( l_U648, 1, 1 );
                        LOCK_CAR_DOORS( l_U648, 2 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U644[0] );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U644[1] );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( 189853472 );
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U823 );
                        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U648, 1 );
                        ADD_UPSIDEDOWN_CAR_CHECK( l_U648 );
                        SETTIMERB( 0 );
                        l_U824 = 8;
                    }
                }
            }
            break;
            case 8:
            if (NOT l_U728)
            {
                if ((NOT (IS_CHAR_INJURED( l_U647 ))) AND (IS_VEH_DRIVEABLE( l_U648 )))
                {
                    if (NOT (# -NULL-0xbfc08d( l_U648 )))
                    {
                        if (l_U823 == 0)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U698 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U648, 1490.42800000, 100.02430000, 22.84160000, 22, 1, -907477130, 3, 10.00000000, -1 );
                            TASK_COMBAT( 0, sub_3600() );
                            CLOSE_SEQUENCE_TASK( l_U698 );
                            TASK_PERFORM_SEQUENCE( l_U647, l_U698 );
                            CLEAR_SEQUENCE_TASK( l_U698 );
                        }
                        else if (l_U823 == 1)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U698 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U648, 1573.23400000, 736.21510000, 26.97090000, 22, 1, -907477130, 3, 10.00000000, -1 );
                            TASK_COMBAT( 0, sub_3600() );
                            CLOSE_SEQUENCE_TASK( l_U698 );
                            TASK_PERFORM_SEQUENCE( l_U647, l_U698 );
                            CLEAR_SEQUENCE_TASK( l_U698 );
                        }
                        else if (l_U823 == 2)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U698 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U648, 844.76680000, 767.77190000, 6.89310000, 22, 1, -907477130, 3, 10.00000000, -1 );
                            TASK_COMBAT( 0, sub_3600() );
                            CLOSE_SEQUENCE_TASK( l_U698 );
                            TASK_PERFORM_SEQUENCE( l_U647, l_U698 );
                            CLEAR_SEQUENCE_TASK( l_U698 );
                        };;;
                        l_U728 = 1;
                    }
                }
            }
            if (NOT l_U725)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
                {
                    PRINT_NOW( "VL2_8", 7500, 1 );
                    SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
                    l_U725 = 1;
                }
            }
            if (IS_CHAR_TRYING_TO_ENTER_A_LOCKED_CAR( sub_3600() ))
            {
                if (NOT l_U736)
                {
                    CLEAR_HELP();
                    PRINT_HELP( "VL2_24" );
                    l_U736 = 1;
                }
            }
            if (NOT l_U703)
            {
                if (NOT (LOCATE_CHAR_IN_CAR_2D( sub_3600(), l_U667._fU0, l_U667._fU4, 75.00000000, 75.00000000, 0 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_3600(), ref l_U653 );
                        SET_VEH_HAS_STRONG_AXLES( l_U653, 1 );
                        SET_CAR_HEALTH( l_U653, 1100 );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U649[0] );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U649[1] );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -344943009 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( 1349725314 );
                        l_U703 = 1;
                    }
                }
            }
            sub_18577( ref l_U647 );
            if (IS_VEH_DRIVEABLE( l_U648 ))
            {
                if (l_U728)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 32767, ref uVar3 );
                    SET_CAR_RANDOM_ROUTE_SEED( l_U648, uVar3 );
                }
                if (sub_19308())
                {
                    if ((NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3600(), l_U648, 5.00000000, 5.00000000, 0 ))) AND (NOT (IS_CAR_ON_SCREEN( l_U648 ))))
                    {
                        GET_CAR_COORDINATES( l_U648, ref l_U741._fU0, ref l_U741._fU4, ref l_U741._fU8 );
                        GET_CAR_HEADING( l_U648, ref l_U784 );
                        GET_CLOSEST_CAR_NODE( l_U741._fU0, l_U741._fU4, l_U741._fU8, ref l_U744._fU0, ref l_U744._fU4, ref l_U744._fU8 );
                        SET_CAR_COORDINATES( l_U648, l_U744._fU0, l_U744._fU4, l_U744._fU8 );
                        SET_CAR_HEADING( l_U648, l_U784 );
                    }
                }
            }
            if ((IS_VEH_DRIVEABLE( l_U648 )) AND (NOT (IS_CHAR_INJURED( l_U647 ))))
            {
                if (NOT l_U712)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), l_U647, 30.00000000, 30.00000000, 30.00000000, 0 ))
                    {
                        if (l_U703)
                        {
                            if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (IS_CHAR_IN_ANY_CAR( sub_3600() )))
                            {
                                if (sub_19735())
                                {
                                    PRINT_HELP( "VL2_3" );
                                    if (l_U823 == 0)
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U698 );
                                        TASK_CAR_DRIVE_TO_COORD( 0, l_U648, 1490.42800000, 100.02430000, 22.84160000, 25, 1, -907477130, 3, 10.00000000, -1 );
                                        TASK_COMBAT( 0, sub_3600() );
                                        CLOSE_SEQUENCE_TASK( l_U698 );
                                        TASK_PERFORM_SEQUENCE( l_U647, l_U698 );
                                        CLEAR_SEQUENCE_TASK( l_U698 );
                                    }
                                    else if (l_U823 == 1)
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U698 );
                                        TASK_CAR_DRIVE_TO_COORD( 0, l_U648, 1573.23400000, 736.21510000, 26.97090000, 25, 1, -907477130, 3, 10.00000000, -1 );
                                        TASK_COMBAT( 0, sub_3600() );
                                        CLOSE_SEQUENCE_TASK( l_U698 );
                                        TASK_PERFORM_SEQUENCE( l_U647, l_U698 );
                                        CLEAR_SEQUENCE_TASK( l_U698 );
                                    }
                                    else if (l_U823 == 2)
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U698 );
                                        TASK_CAR_DRIVE_TO_COORD( 0, l_U648, 844.76680000, 767.77190000, 6.89310000, 25, 1, -907477130, 3, 10.00000000, -1 );
                                        TASK_COMBAT( 0, sub_3600() );
                                        CLOSE_SEQUENCE_TASK( l_U698 );
                                        TASK_PERFORM_SEQUENCE( l_U647, l_U698 );
                                        CLEAR_SEQUENCE_TASK( l_U698 );
                                    };;;
                                    l_U712 = 1;
                                }
                            }
                        }
                    }
                }
                if (sub_20193( sub_3600() ))
                {
                    if (IS_SCREEN_FADED_OUT())
                    {
                        l_U735 = 1;
                    }
                    if (l_U735)
                    {
                        if (IS_SCREEN_FADING_IN())
                        {
                            l_U704 = 0;
                            if ((DOES_VEHICLE_EXIST( l_U648 )) AND (DOES_CHAR_EXIST( l_U647 )))
                            {
                                DELETE_CAR( ref l_U648 );
                                DELETE_CHAR( ref l_U647 );
                            }
                            CLEAR_PRINTS();
                            l_U786 = 1;
                            sub_3755();
                        }
                    }
                }
                if (NOT l_U703)
                {
                    if (IS_VEH_DRIVEABLE( l_U648 ))
                    {
                        if ((NOT (IS_CAR_ON_SCREEN( l_U648 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), l_U647, 300.00000000, 300.00000000, 300.00000000, 0 ))))
                        {
                            if (sub_10982( 1, 1 ))
                            {
                                l_U704 = 0;
                                if (NOT (IS_CHAR_DEAD( l_U647 )))
                                {
                                    DELETE_CHAR( ref l_U647 );
                                }
                                if (IS_VEH_DRIVEABLE( l_U648 ))
                                {
                                    DELETE_CAR( ref l_U648 );
                                }
                                l_U786 = 1;
                                sub_3755();
                            }
                        }
                    }
                }
                else if (IS_VEH_DRIVEABLE( l_U648 ))
                {
                    if ((NOT (IS_CAR_ON_SCREEN( l_U648 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3600(), l_U647, 250.00000000, 250.00000000, 250.00000000, 0 ))))
                    {
                        if (sub_10982( 1, 1 ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U647 )))
                            {
                                DELETE_CHAR( ref l_U647 );
                            }
                            if (IS_VEH_DRIVEABLE( l_U648 ))
                            {
                                DELETE_CAR( ref l_U648 );
                            }
                            l_U704 = 0;
                            l_U786 = 1;
                            sub_3755();
                        }
                    }
                }
            }
            GET_CAR_CHAR_IS_USING( sub_3600(), ref l_U653 );
            if (IS_VEH_DRIVEABLE( l_U648 ))
            {
                GET_CAR_ROLL( l_U648, ref l_U795 );
                if ((l_U653 == l_U648) || (IS_VEH_DRIVEABLE( l_U653 )))
                {
                    if ((l_U653 == l_U648) || (IS_CAR_TOUCHING_CAR( l_U653, l_U648 )))
                    {
                        if (NOT l_U702)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U647 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U647, "GENERIC_FUCK_OFF", 1, 0, 2 );
                            }
                            l_U739++;
                            l_U702 = 1;
                        }
                        if (NOT l_U730[0])
                        {
                            if ((NOT (sub_21121( l_U817 ))) AND (l_U739 > 2))
                            {
                                sub_13691( "V2_RAM1", ref l_U817, 7, 1 );
                                l_U730[0] = 1;
                            }
                        }
                        if (NOT l_U730[1])
                        {
                            if ((NOT (sub_21121( l_U817 ))) AND (l_U739 > 5))
                            {
                                sub_13691( "V2_RAM2", ref l_U817, 7, 1 );
                                l_U730[1] = 1;
                            }
                        }
                        if (NOT l_U730[2])
                        {
                            if ((NOT (sub_21121( l_U817 ))) AND (l_U739 > 8))
                            {
                                sub_13691( "V2_RAM3", ref l_U817, 7, 1 );
                                l_U730[2] = 1;
                            }
                        }
                        if (NOT l_U727)
                        {
                            if ((IS_PED_DOING_DRIVEBY( sub_3600() )) || (l_U739 > 6))
                            {
                                if (l_U823 == 0)
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U698 );
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U648, 1490.42800000, 100.02430000, 22.84160000, 30, 1, -907477130, 3, 10.00000000, -1 );
                                    TASK_COMBAT( 0, sub_3600() );
                                    CLOSE_SEQUENCE_TASK( l_U698 );
                                    TASK_PERFORM_SEQUENCE( l_U647, l_U698 );
                                    CLEAR_SEQUENCE_TASK( l_U698 );
                                }
                                else if (l_U823 == 1)
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U698 );
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U648, 1573.23400000, 736.21510000, 26.97090000, 30, 1, -907477130, 3, 10.00000000, -1 );
                                    TASK_COMBAT( 0, sub_3600() );
                                    CLOSE_SEQUENCE_TASK( l_U698 );
                                    TASK_PERFORM_SEQUENCE( l_U647, l_U698 );
                                    CLEAR_SEQUENCE_TASK( l_U698 );
                                }
                                else if (l_U823 == 2)
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U698 );
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U648, 844.76680000, 767.77190000, 6.89310000, 30, 1, -907477130, 3, 10.00000000, -1 );
                                    TASK_COMBAT( 0, sub_3600() );
                                    CLOSE_SEQUENCE_TASK( l_U698 );
                                    TASK_PERFORM_SEQUENCE( l_U647, l_U698 );
                                    CLEAR_SEQUENCE_TASK( l_U698 );
                                };;;
                                l_U727 = 1;
                            }
                        }
                    }
                    else
                    {
                        l_U702 = 0;
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( l_U648 )))
            {
                GET_CAR_HEALTH( l_U648, ref l_U738 );
            }
            if ((CHECK_STUCK_TIMER( l_U648, 0, 5000 )) || (((GET_PETROL_TANK_HEALTH( l_U648 )) < 310) || (((GET_ENGINE_HEALTH( l_U648 )) < 310) || ((l_U738 < 310) || ((IS_CAR_ON_FIRE( l_U648 )) || ((l_U653 == l_U648) || ((l_U739 > 10) || (l_U795 > 35))))))))
            {
                if (IS_VEH_DRIVEABLE( l_U648 ))
                {
                    if (NOT (CHECK_STUCK_TIMER( l_U648, 0, 5000 )))
                    {
                        if (((GET_PETROL_TANK_HEALTH( l_U648 )) < 310) || (((GET_ENGINE_HEALTH( l_U648 )) < 310) || (l_U738 < 310)))
                        {
                            SET_CAR_HEALTH( l_U648, 310 );
                            SET_ENGINE_HEALTH( l_U648, 310 );
                            SET_PETROL_TANK_HEALTH( l_U648, 310 );
                            SET_CAR_PROOFS( l_U648, 1, 1, 1, 1, 1 );
                        }
                        if (IS_CAR_ON_FIRE( l_U648 ))
                        {
                            EXTINGUISH_CAR_FIRE( l_U648 );
                        }
                    }
                }
                if ((IS_VEH_DRIVEABLE( l_U653 )) AND (IS_VEH_DRIVEABLE( l_U648 )))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3600(), l_U648, 30, 30, 0 )) || (IS_CAR_TOUCHING_CAR( l_U653, l_U648 )))
                    {
                        if (l_U795 > 35)
                        {
                            l_U715 = 1;
                        }
                        if (NOT (IS_CHAR_INJURED( l_U647 )))
                        {
                            CLEAR_CHAR_TASKS( l_U647 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U647, 0 );
                        }
                        if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
                        {
                            sub_2811();
                            BURST_CAR_TYRE( l_U648, 4 );
                            APPLY_FORCE_TO_CAR( l_U648, 3, 0.00000000, 3.00000000, 0.00000000, 2.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                        }
                        WAIT( 750 );
                        l_U824 = 9;
                    }
                }
            }
            break;
            case 9:
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            LOAD_ALL_PATH_NODES( 0 );
            SET_PLAYER_CONTROL_ADVANCED( sub_3710(), 0, 1, 1 );
            SWITCH_MAD_DRIVERS( 0 );
            ALLOW_EMERGENCY_SERVICES( 0 );
            if ((NOT (IS_CHAR_INJURED( l_U647 ))) AND (IS_VEH_DRIVEABLE( l_U648 )))
            {
                CLEAR_CHAR_TASKS( l_U647 );
                TASK_PLAY_ANIM( l_U647, "sit_van", "missvlad2", 1000.00000000, 1, 0, 0, 0, 0 );
                GET_CAR_COORDINATES( l_U648, ref l_U690._fU0, ref l_U690._fU4, ref l_U690._fU8 );
                GET_CLOSEST_CAR_NODE_WITH_HEADING( l_U690._fU0, l_U690._fU4, l_U690._fU8, ref l_U693._fU0, ref l_U693._fU4, ref l_U693._fU8, ref l_U696 );
                CLEAR_AREA( l_U693._fU0, l_U693._fU4, l_U693._fU8, 100, 1 );
                SET_CAR_COORDINATES( l_U648, l_U693._fU0, l_U693._fU4, l_U693._fU8 );
                SET_CAR_HEADING( l_U648, l_U696 );
                SET_CAR_ON_GROUND_PROPERLY( l_U648 );
                FREEZE_CAR_POSITION( l_U648, 1 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U648, 0.00000000, -10.00000000, 0.00000000, ref l_U775._fU0, ref l_U775._fU4, ref l_U775._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U648, -2.00000000, 0.45000000, 0.00000000, ref l_U766._fU0, ref l_U766._fU4, ref l_U766._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U648, -1.40000000, -1.50000000, -0.50000000, ref l_U769._fU0, ref l_U769._fU4, ref l_U769._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U648, 0.30000000, 2.75000000, 1.00240000, ref l_U763._fU0, ref l_U763._fU4, ref l_U763._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U648, -0.60000000, 2.75000000, 1.00240000, ref l_U778._fU0, ref l_U778._fU4, ref l_U778._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U648, -1.60000000, 0.40000000, 0.64330000, ref l_U781._fU0, ref l_U781._fU4, ref l_U781._fU8 );
                CLEAR_AREA_OF_CARS( l_U763._fU0, l_U763._fU4, l_U763._fU8, 200.00000000 );
                SET_CREATE_RANDOM_COPS( 0 );
                CLEAR_WANTED_LEVEL( sub_3710() );
                SWITCH_ROADS_OFF( l_U763._fU0 - 70, l_U763._fU4 - 70, l_U763._fU8 - 70, l_U763._fU0 + 70, l_U763._fU4 + 70, l_U763._fU8 + 70 );
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3600() ))
                {
                    GET_CAR_CHAR_IS_USING( sub_3600(), ref l_U653 );
                    if (NOT (IS_CAR_A_MISSION_CAR( l_U653 )))
                    {
                        SET_CAR_AS_MISSION_CAR( l_U653 );
                    }
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_3600(), l_U766._fU0, l_U766._fU4, l_U766._fU8 - 1 );
                    OPEN_SEQUENCE_TASK( ref l_U698 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U647 );
                    CLOSE_SEQUENCE_TASK( l_U698 );
                    TASK_PERFORM_SEQUENCE( sub_3600(), l_U698 );
                    CLEAR_SEQUENCE_TASK( l_U698 );
                    if (IS_VEH_DRIVEABLE( l_U653 ))
                    {
                        FREEZE_CAR_POSITION( l_U653, 1 );
                        SET_CAR_COORDINATES( l_U653, l_U775._fU0, l_U775._fU4, l_U775._fU8 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U653 );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U653 );
                    }
                }
                else
                {
                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U653 );
                    if (IS_VEH_DRIVEABLE( l_U653 ))
                    {
                        FREEZE_CAR_POSITION( l_U653, 1 );
                        SET_CAR_COORDINATES( l_U653, l_U775._fU0, l_U775._fU4, l_U775._fU8 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U653 );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U653 );
                    }
                    SET_CHAR_COORDINATES( sub_3600(), l_U766._fU0, l_U766._fU4, l_U766._fU8 - 1 );
                    OPEN_SEQUENCE_TASK( ref l_U698 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U647 );
                    CLOSE_SEQUENCE_TASK( l_U698 );
                    TASK_PERFORM_SEQUENCE( sub_3600(), l_U698 );
                    CLEAR_SEQUENCE_TASK( l_U698 );
                }
                WAIT( 500 );
                LOAD_SCENE( l_U766._fU0, l_U766._fU4, l_U766._fU8 );
                BEGIN_CAM_COMMANDS( ref l_U785 );
                l_U707 = 1;
                CREATE_CAM( 14, ref l_U799 );
                CREATE_CAM( 14, ref l_U800 );
                CREATE_CAM( 3, ref l_U801 );
                SET_CAM_ACTIVE( l_U800, 1 );
                SET_CAM_PROPAGATE( l_U800, 1 );
                SET_CAM_ACTIVE( l_U801, 1 );
                SET_CAM_PROPAGATE( l_U801, 1 );
                SET_CAM_ACTIVE( l_U799, 1 );
                SET_CAM_PROPAGATE( l_U799, 1 );
                SET_CAM_POS( l_U799, l_U778._fU0, l_U778._fU4, l_U778._fU8 );
                POINT_CAM_AT_COORD( l_U799, l_U781._fU0, l_U781._fU4, l_U781._fU8 );
                SET_CAM_FOV( l_U799, 50 );
                SET_CAM_NEAR_DOF( l_U799, 1.00000000 );
                SET_CAM_FAR_DOF( l_U799, 4.00000000 );
                SET_CAM_POS( l_U800, l_U763._fU0, l_U763._fU4, l_U763._fU8 );
                POINT_CAM_AT_COORD( l_U800, l_U781._fU0, l_U781._fU4, l_U781._fU8 );
                SET_CAM_FOV( l_U800, 50 );
                SET_CAM_NEAR_DOF( l_U800, 1.00000000 );
                SET_CAM_FAR_DOF( l_U800, 4.00000000 );
                SET_CAM_INTERP_STYLE_CORE( l_U801, l_U799, l_U800, 19000, 0 );
                SET_CAM_NEAR_DOF( l_U801, 1.00000000 );
                SET_CAM_FAR_DOF( l_U801, 4.00000000 );
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_RADAR( 0 );
                DISPLAY_HUD( 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                CLEAR_HELP();
                WAIT( 500 );
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                sub_2637( 0 );
                sub_13691( "V2_BEATP", ref l_U817, 7, 1 );
                l_U704 = 0;
                SETTIMERA( 0 );
                l_U824 = 10;
            }
            break;
            case 10:
            CLEAR_AREA_OF_CARS( l_U763._fU0, l_U763._fU4, l_U763._fU8, 150.00000000 );
            if ((IS_SCREEN_FADED_IN()) AND (sub_4909()))
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
                SET_WIDESCREEN_BORDERS( 0 );
                DISPLAY_RADAR( 1 );
                DISPLAY_HUD( 1 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U785 );
                l_U704 = 0;
                l_U707 = 0;
                SET_PLAYER_CONTROL_ADVANCED( sub_3710(), 1, 1, 1 );
                DELETE_CHAR( ref l_U647 );
                DELETE_CAR( ref l_U648 );
                SETTIMERA( 0 );
                sub_2637( 0 );
                l_U824 = 11;
            }
            if (NOT l_U710)
            {
                if ((TIMERA() > 4000) AND (NOT (sub_21121( l_U817 ))))
                {
                    if (NOT (IS_CHAR_INJURED( l_U647 )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U648 ))
                        {
                            FREEZE_CAR_POSITION( l_U648, 0 );
                            TASK_CAR_TEMP_ACTION( l_U647, l_U648, 9, 4000 );
                        }
                    }
                    SETTIMERA( 0 );
                    l_U710 = 1;
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U647 )))
            {
                if (IS_VEH_DRIVEABLE( l_U653 ))
                {
                    FREEZE_CAR_POSITION( l_U653, 0 );
                }
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
                SET_WIDESCREEN_BORDERS( 0 );
                DISPLAY_RADAR( 1 );
                DISPLAY_HUD( 1 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U785 );
                l_U707 = 0;
                SET_PLAYER_CONTROL_ADVANCED( sub_3710(), 1, 1, 1 );
                DELETE_CHAR( ref l_U647 );
                DELETE_CAR( ref l_U648 );
                SETTIMERA( 0 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                sub_2637( 0 );
                l_U824 = 11;
            }
            break;
            case 11:
            if (IS_SCREEN_FADED_OUT())
            {
                SWITCH_ROADS_BACK_TO_ORIGINAL( l_U763._fU0 - 30, l_U763._fU4 - 30, l_U763._fU8 - 30, l_U763._fU0 + 30, l_U763._fU4 + 30, l_U763._fU8 + 30 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_CAM_BEHIND_PED( sub_3600() );
                LOAD_SCENE( l_U766._fU0, l_U766._fU4, l_U766._fU8 );
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                l_U824 = 12;
            }
            break;
            case 12:
            sub_25014();
            break;
        }
    }
    return;
}

void sub_289()
{
    sub_298();
    return;
}

void sub_298()
{
    int iVar2;

    iVar2 = 1;
    sub_312( iVar2 );
    sub_1488( iVar2 );
    return;
}

void sub_312(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_356();
        sub_517();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_625();
            sub_664();
        }
    }
    sub_740();
    sub_841();
    uVar5 = sub_954( uParam0 );
    sub_1395( uVar5, 0 );
    return;
}

void sub_356()
{
    sub_370( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_470();
    }
    return;
}

void sub_370(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_470()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_517()
{
    sub_526();
    return;
}

void sub_526()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_625()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_664()
{
    sub_673();
    return;
}

void sub_673()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_740()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_841()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_863();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_863()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_954(unknown uParam0)
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
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1353( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1353(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1395(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_1488(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1497();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2272();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1497()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1535( 5, g_U569[I] )) == 1))
        {
            if ((sub_1535( 1, g_U569[I] )) != 0)
            {
                sub_1821( I );
            }
        }
    }
    if (NOT sub_1987())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_1535(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1821(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1906( g_U569 - 1 );
    return;
}

void sub_1906(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1987()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1535( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2272()
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

void sub_2399()
{
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    if (IS_VEH_DRIVEABLE( l_U653 ))
    {
        SET_VEH_HAS_STRONG_AXLES( l_U653, 0 );
    }
    SWITCH_MAD_DRIVERS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SWITCH_ROADS_ON( 1127.84100000, -382.84310000, 0.00000000, 1133.68100000, -339.55790000, 150.00000000 );
    SWITCH_ROADS_ON( l_U763._fU0 - 70, l_U763._fU4 - 70, l_U763._fU8 - 70, l_U763._fU0 + 70, l_U763._fU4 + 70, l_U763._fU8 + 70 );
    if (NOT (IS_CHAR_INJURED( l_U644[0] )))
    {
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U644[0], 0 );
    }
    DONT_SUPPRESS_ANY_PED_MODELS();
    sub_2637( 0 );
    CLEAR_HELP();
    if (l_U707)
    {
        END_CAM_COMMANDS( ref l_U785 );
    }
    l_U707 = 0;
    sub_2811();
    FLUSH_SCENARIO_BLOCKING_AREAS();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2637(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 <= 8) AND (g_U8392 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_2811()
{
    if (l_U641)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U639 = 0;
    l_U638 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3401(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3420();
    return;
}

void sub_3420()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_3600()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3710()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3755()
{
    switch (l_U786)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 1:
        PRINT_NOW( "VL2_26", 7500, 1 );
        sub_3875( 1, "V2_CALL2", "V2AUD", 0 );
        break;
        case 2:
        PRINT_NOW( "VL2_27", 7500, 1 );
        sub_3875( 1, "V2_CALL3", "V2AUD", 0 );
        break;
        case 3:
        PRINT_NOW( "VL2_2", 7500, 1 );
        sub_3875( 1, "V2_CALL2", "V2AUD", 0 );
        break;
    }
    sub_4567();
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3710(), 150 );
        SAY_AMBIENT_SPEECH( sub_3600(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_2399();
    return;
}

void sub_3875(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_3919( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_3919(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_4567()
{
    sub_4576();
    return;
}

void sub_4576()
{
    int iVar2;

    iVar2 = 1;
    sub_4590( iVar2 );
    sub_1488( iVar2 );
    return;
}

void sub_4590(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3710(), 150 );
    CLEAR_HELP();
    sub_312( uParam0 );
    return;
}

void sub_4900()
{
    if (sub_4909())
    {
        l_U726 = 0;
        sub_2637( 0 );
        l_U729 = 1;
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        SET_CHAR_COORDINATES( sub_3600(), 1020.52400000, -323.92940000, 19.21690000 );
        SET_CHAR_HEADING( sub_3600(), 1.43790000 );
        if ((IS_VEH_DRIVEABLE( l_U648 )) AND (NOT (IS_CHAR_INJURED( l_U647 ))))
        {
            if (DOES_OBJECT_EXIST( l_U656 ))
            {
                if (IS_OBJECT_ATTACHED( l_U656 ))
                {
                    DETACH_OBJECT( l_U656, 1 );
                }
                SET_OBJECT_COORDINATES( l_U656, 1020.59000000, -325.19670000, 20.94475000 );
                SET_OBJECT_ROTATION( l_U656, 3.14159300, 0.00000000, 0.00000000 );
                APPLY_FORCE_TO_OBJECT( l_U656, 1, 0.00000000, 0.30000000, 0.30000000, 0.00000000, 0.00000000, 0.50000000, 0, 0, 1, 1 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U647 );
            WARP_CHAR_INTO_CAR( l_U647, l_U648 );
        }
        SET_CAM_ACTIVE( l_U799, 0 );
        SET_CAM_PROPAGATE( l_U799, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        DISPLAY_RADAR( 1 );
        DISPLAY_HUD( 1 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U785 );
        l_U707 = 0;
        CLEAR_AREA( l_U667._fU0, l_U667._fU4, l_U667._fU8, 100, 1 );
        if (IS_VEH_DRIVEABLE( l_U648 ))
        {
            CLEAR_AREA( l_U667._fU0, l_U667._fU4, l_U667._fU8, 100, 1 );
            SET_CAR_COORDINATES( l_U648, l_U667._fU0, l_U667._fU4, l_U667._fU8 );
            SET_CAR_HEADING( l_U648, l_U670 );
            for ( l_U689 = 0; l_U689 <= 1; l_U689++ )
            {
                if (IS_VEH_DRIVEABLE( l_U649[l_U689] ))
                {
                    SET_CAR_COORDINATES( l_U649[l_U689], l_U671[l_U689]._fU0, l_U671[l_U689]._fU4, l_U671[l_U689]._fU8 );
                    SET_CAR_HEADING( l_U649[l_U689], l_U681[l_U689] );
                    SET_CAR_ON_GROUND_PROPERLY( l_U649[l_U689] );
                }
                else
                {
                    CREATE_CAR( l_U806[l_U689], l_U671[l_U689]._fU0, l_U671[l_U689]._fU4, l_U671[l_U689]._fU8, ref l_U649[l_U689], 1 );
                    SET_CAR_HEADING( l_U649[l_U689], l_U681[l_U689] );
                    SET_CAR_ON_GROUND_PROPERLY( l_U649[l_U689] );
                }
            }
            SET_CAR_HEALTH( l_U648, 1000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U648 );
            MODIFY_CHAR_MOVE_STATE( l_U647, 4 );
            SETTIMERA( 0 );
        }
        CLEAR_AREA_OF_CARS( l_U671[0]._fU0, l_U671[0]._fU4, l_U671[0]._fU8, 100 );
        LOAD_SCENE( 1020.59500000, -323.58010000, 19.21690000 );
        WAIT( 500 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1313.00000000, 70.00000000, 42.00000000, 0, 0.00000000 );
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL_ADVANCED( sub_3710(), 1, 0, 1 );
        l_U824 = 7;
    }
    return;
}

int sub_4909()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_7388(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_7472( "\n PED NUMBER ", uParam0 );
    sub_7512( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_7472(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7512(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8247(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

int sub_10982(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3600(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3600(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3600()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3600() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3600() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3710() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3710() )))
    {
        return 0;
    }
    return 1;
}

void sub_13691(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13714( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_13714(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_13768( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_13768(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_13790( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
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
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_14482( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_13790(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_13867( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_13867( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_13867( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_13867(unknown uParam0)
{
    return;
}

void sub_14482(int iParam0, int iParam1)
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

void sub_15785(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    vector Result;

    Result = {uParam0._fU0 - uParam3._fU0, uParam0._fU4 - uParam3._fU4, uParam0._fU8 - uParam3._fU8};
    return Result;
}

void sub_15849(unknown Result, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    uVar5 = Result._fU0;
    uVar6 = Result._fU4;
    uVar7 = Result._fU8;
    uVar8 = SQRT( ((Result._fU0 * Result._fU0) + (Result._fU4 * Result._fU4)) + (Result._fU8 * Result._fU8) );
    Result._fU0 *= 1.00000000 / uVar8;
    Result._fU4 *= 1.00000000 / uVar8;
    Result._fU8 *= 1.00000000 / uVar8;
    return Result;
}

void sub_15998(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    vector Result;

    Result = {uParam0._fU0 * uParam3, uParam0._fU4 * uParam3, uParam0._fU8 * uParam3};
    return Result;
}

void sub_18577(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U641)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U639))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U640 + 500))
        {
            l_U639 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_18745()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3600() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U641)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U640 );
            l_U639 = 1;
            l_U638 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U639) AND (NOT l_U638))
        {
            if (l_U641)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U638 = 1;
        }
    }
    else if (l_U638)
    {
        if (l_U641)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U638 = 0;
    };;;
    return;
}

int sub_18745()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_19308()
{
    if (IS_VEH_DRIVEABLE( l_U648 ))
    {
        if ((CHECK_STUCK_TIMER( l_U648, 0, 5000 )) || ((CHECK_STUCK_TIMER( l_U648, 1, 40000 )) || ((CHECK_STUCK_TIMER( l_U648, 2, 30000 )) || (CHECK_STUCK_TIMER( l_U648, 3, 60000 )))))
        {
            return 1;
        }
    }
    return 0;
}

int sub_19735()
{
    int iVar2;

    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_3600() )) AND ((iVar2 != 5) AND (iVar2 != 4)))
    {
        return 1;
    }
    return 0;
}

int sub_20193(int iParam0)
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
                if (sub_20257( uVar3 ))
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

int sub_20257(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

int sub_21121(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_13867( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_13867( "\n speech is not playing" );
    }
    return 0;
}

void sub_25014()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    sub_25033();
    UNLOCK_MISSION_NEWS_STORY( 5 );
    sub_36630( 5 );
    CLEAR_WANTED_LEVEL( sub_3710() );
    sub_39856( 1, "V2_CALL1", "V2AUD", 10000, 0 );
    sub_2399();
    return;
}

void sub_25033()
{
    sub_25042();
    return;
}

void sub_25042()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_25060();
    sub_25119( iVar2, iVar3, iVar4 );
    return;
}

void sub_25060()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_25119(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 1;
    sub_25151( iVar5, uParam0, uParam1, uParam2, "Contact_2" );
    return;
}

void sub_25151(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_25247( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_25247( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_25247( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_25247( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_25247( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_25247( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_25824( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4) AND (NOT g_U10981[iParam0]._fU144._fU12))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_26221( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_26221( 0, 4 );
            }
        }
    }
    if (NOT (sub_26310( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3710(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3710() );
    }
    sub_1497();
    bVar27 = true;
    uVar28 = sub_25824( iParam0, iVar7 );
    uVar29 = sub_954( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 6) || (iVar30 == 5))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_35686( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_36116();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_36201( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_36258( iParam0 );
                sub_36297( 0 );
                sub_1395( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_36405();
        }
    }
    if (bParam2)
    {
        sub_36116();
        sub_36493();
        sub_36297( 0 );
    }
    if (bParam3)
    {
        sub_36116();
        sub_36533();
        sub_36297( 0 );
        sub_1395( uVar29, 0 );
    }
    sub_841();
    return;
}

void sub_25247(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_25824(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1353( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_26221(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_26310(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_26518( uParam1 );
        break;
        case 1:
        bVar8 = sub_28596( uParam1 );
        break;
        case 2:
        bVar8 = sub_28822( uParam1 );
        break;
        case 3:
        bVar8 = sub_28972( uParam1 );
        break;
        case 4:
        bVar8 = sub_29250( uParam1 );
        break;
        case 5:
        bVar8 = sub_29553( uParam1 );
        break;
        case 6:
        bVar8 = sub_29752( uParam1 );
        break;
        case 7:
        bVar8 = sub_29978( uParam1 );
        break;
        case 8:
        bVar8 = sub_30213( uParam1 );
        break;
        case 9:
        bVar8 = sub_30588( uParam1 );
        break;
        case 10:
        bVar8 = sub_30835( uParam1 );
        break;
        case 11:
        bVar8 = sub_30974( uParam1 );
        break;
        case 12:
        bVar8 = sub_31273( uParam1 );
        break;
        case 13:
        bVar8 = sub_31501( uParam1 );
        break;
        case 14:
        bVar8 = sub_31788( uParam1 );
        break;
        case 15:
        bVar8 = sub_32070( uParam1 );
        break;
        case 16:
        bVar8 = sub_32352( uParam1 );
        break;
        case 17:
        bVar8 = sub_32553( uParam1 );
        break;
        case 18:
        bVar8 = sub_32626( uParam1 );
        break;
        case 19:
        bVar8 = sub_32840( uParam1 );
        break;
        case 20:
        bVar8 = sub_33093( uParam1 );
        break;
        case 21:
        bVar8 = sub_33340( uParam1 );
        break;
        case 22:
        bVar8 = sub_33541( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_28201( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_25824( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_33864( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_26518(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_26797( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_26797( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_26797( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_26797( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_26797( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_26797( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_26797( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_26797( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_26797( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_26797( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_26797( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_26797( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_26797( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_26797( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_26797( iVar3, 0, sub_28079(), sub_28345(), 0, 0 );
        break;
        default:
        sub_28504( "Friend 1", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Friend 1", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_26797(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_26808( uParam1 );
    sub_26982( uParam0, 0, uParam2 );
    sub_26982( uParam0, 1, uParam3 );
    sub_26982( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_25060();
    return;
}

void sub_26808(unknown uParam0)
{
    ADD_SCORE( sub_3710(), uParam0 );
    sub_26833( uParam0 );
    return;
}

void sub_26833(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1353( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_26982(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_27139( uParam0 );
    }
    return;
}

void sub_27139(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 )))))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_28079()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_28201( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_28201(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_28345()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_28201( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_28504(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_28596(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_26797( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_28504( "Contact 2", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 2", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28822(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_26797( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_28504( "Girl 3", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Girl 3", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28972(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_26797( iVar3, 0, sub_28079(), sub_28345(), 0, 0 );
        break;
        default:
        sub_28504( "Friend 4", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Friend 4", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29250(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_26797( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_26797( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_26797( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_26797( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_28504( "Contact 5", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 5", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29553(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_28504( "Contact 7", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 7", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29752(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_26797( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_28504( "Contact 7b", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 7b", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29978(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_26797( iVar3, 0, sub_28079(), sub_28345(), 0, 0 );
        break;
        default:
        sub_28504( "Friend 8", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Friend 8", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30213(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_26797( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_26797( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_26797( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_26797( iVar3, 0, sub_28079(), sub_28345(), 0, 0 );
        break;
        default:
        sub_28504( "Friend 9", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Friend 9", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30588(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_26797( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_26797( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_28504( "Contact 10", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_28504( "Contact 10", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30835(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_28504( "Girl 11", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Girl 11", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30974(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_26797( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_26797( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_26797( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_26797( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_26797( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_28504( "Contact 12", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 12", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_31273(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_26797( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_28504( "Contact 13", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 13", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_31501(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_26797( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_26797( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_26797( iVar3, 0, sub_28079(), sub_28345(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_28504( "Friend 15", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Friend 15", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_31788(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_26797( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_26797( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_26797( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_28504( "Contact 16", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 16", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32070(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_26797( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_26797( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_26797( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_28504( "Contact 18", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 18", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32352(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_28504( "Contact 19", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 19", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32553(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_28504( "Girl 20", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32626(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_28504( "Contact 21", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 21", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32840(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_26797( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_26797( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_28504( "Contact 22", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 22", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33093(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_26797( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_26797( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_26797( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_28504( "Contact 24", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 24", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33340(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_26797( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_26797( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_28504( "Contact 25", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_28504( "Contact 25", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33541(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_26797( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_28504( "Girl 26", 1 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_28504( "Girl 26", 0 );
        sub_26797( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_33864(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_33912( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_34643( iParam1 );
    }
    return;
}

int sub_33912(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_34052( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_34052(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_34234( 0 );
    return;
}

void sub_34234(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_34489();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_34489()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_34643(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_34976( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_34976( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_34976( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_34976( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_34976( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_34976( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_34976( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_34976( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_34976( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_34976( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_34976( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_34976( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_34976( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_34976( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_34976( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_34976( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_34976( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_34976( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_34976( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_34976(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_35686(unknown uParam0, unknown uParam1)
{
    sub_35705( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_35705(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_36116()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_36201(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_36258(unknown uParam0)
{
    sub_740();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_36297(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_36405()
{
    sub_36414();
    return;
}

void sub_36414()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_36493()
{
    sub_36414();
    return;
}

void sub_36533()
{
    sub_36414();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_36630(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_36717( iParam0 ))
    {
        sub_37767( iParam0 );
    }
    return;
}

int sub_36717(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_36774( ref uVar3, 1, 0, 0 );
    sub_37386( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_13867( "\n ----------------------------------------------------------------" );
    sub_7472( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_13867( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_36774(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_36827( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_36959( iParam0 + 0 );
    }
    return;
}

void sub_36827(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_36959( iParam0 + 0 );
    }
    return;
}

void sub_36959(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_36990( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_36990(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_37386(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_37767(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_37978( 20, 6, 16383, 16383, ref uVar4 );
        sub_38654( ref uVar4, 7 );
        sub_38685( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_37978( 20, 7, 9, 16383, ref uVar4 );
        sub_38654( ref uVar4, 7 );
        sub_38685( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_37978(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_38002( uParam0, 0, iParam4 + 0 );
    sub_38002( uParam1, 1, iParam4 + 0 );
    sub_38002( uParam2, 2, iParam4 + 0 );
    sub_38002( uParam3, 3, iParam4 + 0 );
    sub_38002( 0, 4, iParam4 + 0 );
    sub_38002( 1, 5, iParam4 + 0 );
    sub_38002( 65535, 6, iParam4 + 0 );
    sub_38002( 0, 12, iParam4 + 0 );
    sub_38002( 0, 11, iParam4 + 0 );
    sub_38002( 0, 14, iParam4 + 0 );
    sub_38002( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_38002( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_38002( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_38002(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_38654(int iParam0, unknown uParam1)
{
    sub_38002( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_38685(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_38725())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_39412( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_39211( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_38725()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_38759( 5, g_U968[I] )) == 7)
        {
            sub_39211( I );
            return 1;
        }
    }
    return 0;
}

int sub_38759(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_39211(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_39284( 39 );
    return;
}

void sub_39284(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_39412(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_39473( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_39473(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_39856(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    sub_3919( uParam0, ref cVar7, uParam2, uParam3, uParam4, 0 );
    return;
}

