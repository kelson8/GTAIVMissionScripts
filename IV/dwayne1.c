void main()
{
    unknown uVar2;
    int iVar3;

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
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = {0.00000000, 0.00000000, 0.00000000};
    l_U603 = {1.00000000, 1.00000000, 1.00000000};
    l_U606 = {0.00000000, 1.00000000, 0.00000000};
    l_U609 = {0.00000000, -1.00000000, 0.00000000};
    l_U622 = 0;
    l_U623 = 0;
    l_U634 = 100.00000000;
    l_U635 = 10.50000000;
    l_U636 = 0.50000000;
    l_U637 = 2.85000000;
    l_U657 = 7;
    l_U736 = 0;
    l_U737 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_272();
        sub_2382();
    }
    l_U677 = {-38.37400000, -294.61400000, 16.10300000};
    l_U723 = {-128.50000000, 57.20000000, 14.80420000};
    sub_2887( "DF1AUD" );
    LOAD_ADDITIONAL_TEXT( "DF1AUD", 6 );
    LOAD_ADDITIONAL_TEXT( "DWAYNE1", 0 );
    while (true)
    {
        WAIT( 0 );
        if (DOES_CHAR_EXIST( l_U663 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U663, sub_3071(), 0 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U663 )))
                {
                    SET_CHAR_HEALTH( l_U663, 10 );
                    l_U658 = 2;
                    sub_3162();
                }
                else
                {
                    l_U658 = 2;
                    sub_3162();
                }
            }
        }
        switch (l_U736)
        {
            case 0:
            if (g_U9893._fU24)
            {
                SET_CUTSCENE_EXTRA_ROOM_POS( -130.70000000, 1489.80000000, 23.40000000 );
                START_CUTSCENE_NOW( "DF_2" );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
                if (IS_VEH_DRIVEABLE( uVar2 ))
                {
                    if (LOCATE_CAR_3D( uVar2, -113.73940000, 1492.58600000, 17.44940000, 20, 20, 20, 0 ))
                    {
                        SET_CAR_COORDINATES( uVar2, -113.73940000, 1492.58600000, 17.44940000 );
                        SET_CAR_HEADING( uVar2, 135.99880000 );
                        SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                    }
                }
                else
                {
                    DELETE_CAR( ref uVar2 );
                }
                if (HAS_CUTSCENE_LOADED())
                {
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                }
                CLEAR_NAMED_CUTSCENE( "DF_2" );
            }
            SET_CHAR_COORDINATES( sub_3071(), -118.02340000, 1495.18600000, 17.44390000 );
            SET_CHAR_HEADING( sub_3071(), 224.28520000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            # -sub_C1FFC0-0xc214c8( 2, ref l_U727 );
            LOAD_COMBAT_DECISION_MAKER( 3, ref l_U726 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U726, 2 );
            LOAD_COMBAT_DECISION_MAKER( 1, ref l_U728 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U728, 0 );
            SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U728, 0 );
            REQUEST_MODEL( 1203311498 );
            REQUEST_MODEL( -881358690 );
            REQUEST_MODEL( 88667657 );
            REQUEST_ANIMS( "missdwayne1" );
            REQUEST_CAR_RECORDING( 874 );
            REQUEST_CAR_RECORDING( 875 );
            REQUEST_CAR_RECORDING( 881 );
            while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 881 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 875 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 874 ))) || ((NOT (HAVE_ANIMS_LOADED( "missdwayne1" ))) || ((NOT (HAS_MODEL_LOADED( 88667657 ))) || ((NOT (HAS_MODEL_LOADED( -881358690 ))) || (NOT (HAS_MODEL_LOADED( 1203311498 )))))))))
            {
                WAIT( 0 );
            }
            LOAD_SCENE( -116.83160000, 1489.19500000, 17.46760000 );
            LOAD_ALL_OBJECTS_NOW();
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            SET_PLAYER_CONTROL_ADVANCED( sub_3928(), 1, 1, 1 );
            ADD_BLIP_FOR_COORD( l_U677._fU0, l_U677._fU4, l_U677._fU8, ref l_U670 );
            SET_ROUTE( l_U670, 1 );
            PRINT_NOW( "D1_3", 7500, 1 );
            l_U736 = 1;
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_2D( sub_3071(), l_U677._fU0, l_U677._fU4, 350.00000000, 350.00000000, 0 ))
            {
                CREATE_CAR( 1203311498, -37.96090000, -327.83670000, 13.62530000, ref l_U666, 1 );
                SET_CAR_HEADING( l_U666, 178.49240000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U666 );
                SUPPRESS_CAR_MODEL( 1203311498 );
                SET_CAR_AS_MISSION_CAR( l_U666 );
                FREEZE_CAR_POSITION( l_U666, 1 );
                SET_CREATE_RANDOM_COPS( 0 );
                CLEAR_AREA_OF_COPS( l_U677._fU0, l_U677._fU4, l_U677._fU8, 100 );
                l_U736 = 2;
            }
            break;
            case 2:
            if (NOT l_U714)
            {
                if (IS_VEH_DRIVEABLE( l_U666 ))
                {
                    if (NOT (IS_CAR_WAITING_FOR_WORLD_COLLISION( l_U666 )))
                    {
                        FREEZE_CAR_POSITION( l_U666, 0 );
                        l_U714 = 1;
                    }
                }
            }
            if (l_U705)
            {
                if ((IS_SCREEN_FADED_IN()) AND (sub_5237()))
                {
                    l_U737 = 15;
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                    sub_2420( 0 );
                    CLEAR_PRINTS();
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3071() );
                    WAIT( 500 );
                    DISPLAY_RADAR( 1 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    SET_CAM_BEHIND_PED( sub_3071() );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U697 );
                    l_U711 = 0;
                    SET_WANTED_MULTIPLIER( 0.00000000 );
                    SWITCH_ROADS_ON( -52.36520000, -402.00210000, 0, -45.10480000, -240.93240000, 100 );
                    SWITCH_ROADS_ON( -127.42060000, -308.91660000, 0, 18.80800000, -305.21100000, 100 );
                    if (DOES_VEHICLE_EXIST( l_U667[0] ))
                    {
                        DELETE_CAR( ref l_U667[0] );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -685276541 );
                        REMOVE_CAR_RECORDING( 874 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U667[1] ))
                    {
                        DELETE_CAR( ref l_U667[1] );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -685276541 );
                        REMOVE_CAR_RECORDING( 874 );
                    }
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3071() );
                    SET_CHAR_COORDINATES( sub_3071(), -33.10500000, -320.64490000, 13.75680000 );
                    SET_CHAR_HEADING( sub_3071(), 334.36450000 );
                    SWITCH_PED_PATHS_ON( -28.44000000 - 20, -322.23000000 - 20, 13.80380000 - 10, -28.44000000 + 20, -322.23000000 + 20, 13.80380000 + 10 );
                    FLUSH_SCENARIO_BLOCKING_AREAS();
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U666 );
                    SETTIMERA( 0 );
                    SETTIMERB( 0 );
                    if (NOT (IS_CHAR_INJURED( l_U661 )))
                    {
                        TASK_PLAY_ANIM( l_U661, "scared_female", "missdwayne1", 1000, 1, 0, 0, 0, 0 );
                    }
                    LOAD_SCENE( -29.28990000, -321.77140000, 13.76230000 );
                    if ((IS_VEH_DRIVEABLE( l_U664 )) AND ((NOT (IS_CHAR_INJURED( l_U662 ))) AND (NOT (IS_CHAR_INJURED( l_U661 )))))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_3071(), 0, 0 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U662 );
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U662, 0 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U662 )))
                        {
                            WARP_CHAR_INTO_CAR( l_U662, l_U664 );
                        }
                        START_PLAYBACK_RECORDED_CAR( l_U664, 881 );
                        SET_PLAYBACK_SPEED( l_U664, 1.50000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U661, sub_3071() );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                    while (IS_SCREEN_FADING_IN())
                    {
                        WAIT( 0 );
                    }
                    SET_PLAYER_CONTROL_ADVANCED( sub_3928(), 1, 1, 1 );
                    l_U736 = 3;
                }
            }
            switch (l_U737)
            {
                case 0:
                if (IS_CHAR_IN_ANY_CAR( sub_3071() ))
                {
                    if (NOT l_U713)
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U665 );
                        GET_CAR_CHAR_IS_USING( sub_3071(), ref l_U665 );
                        SET_CAR_AS_MISSION_CAR( l_U665 );
                        l_U713 = 1;
                    }
                }
                else
                {
                    l_U713 = 0;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3071(), l_U677._fU0, l_U677._fU4, l_U677._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                {
                    if (sub_6426( 1, 1 ))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_3071() ))
                        {
                            sub_6733();
                            SET_PLAYER_CONTROL_ADVANCED( sub_3928(), 0, 1, 1 );
                        }
                        DO_SCREEN_FADE_OUT( 500 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                        REQUEST_MODEL( 584879743 );
                        REQUEST_MODEL( -1685021548 );
                        REQUEST_MODEL( -685276541 );
                        REQUEST_ANIMS( "gestures@niko" );
                        LOAD_ALL_OBJECTS_NOW();
                        while ((NOT (HAVE_ANIMS_LOADED( "gestures@niko" ))) || ((NOT (HAS_MODEL_LOADED( -685276541 ))) || ((NOT (HAS_MODEL_LOADED( -1685021548 ))) || (NOT (HAS_MODEL_LOADED( 584879743 ))))))
                        {
                            WAIT( 0 );
                        }
                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3071(), 1 );
                        SET_PLAYER_CONTROL_ADVANCED( sub_3928(), 0, 1, 1 );
                        SWITCH_ROADS_OFF( -52.36520000, -402.00210000, 0, -45.10480000, -240.93240000, 100 );
                        SWITCH_ROADS_OFF( -127.42060000, -308.91660000, 0, 18.80800000, -305.21100000, 100 );
                        ADD_SCENARIO_BLOCKING_AREA( -28.44000000 - 10, -322.23000000 - 10, 14.66000000 - 10, -28.44000000 + 10, -322.23000000 + 10, 14.66000000 + 10 );
                        SWITCH_PED_PATHS_OFF( -28.44000000 - 20, -322.23000000 - 20, 13.80380000 - 10, -28.44000000 + 20, -322.23000000 + 20, 13.80380000 + 10 );
                        CLEAR_AREA_OF_CHARS( -28.44000000, -322.23000000, 14.66000000, 60 );
                        CLEAR_AREA( -28.44000000, -322.23000000, 14.66000000, 30, 1 );
                        CLEAR_AREA_OF_CARS( l_U677._fU0, l_U677._fU4, l_U677._fU8, 1000 );
                        EXTINGUISH_FIRE_AT_POINT( -28.37860000, -315.84870000, 13.62760000, 10.00000000 );
                        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U665 );
                        if (IS_VEH_DRIVEABLE( l_U665 ))
                        {
                            if (LOCATE_CAR_2D( l_U665, -28.37860000, -315.84870000, 15.00000000, 15.00000000, 0 ))
                            {
                                if (IS_CAR_ON_FIRE( l_U665 ))
                                {
                                    DELETE_CAR( ref l_U665 );
                                }
                                SET_CAR_COORDINATES( l_U665, l_U677._fU0, l_U677._fU4, l_U677._fU8 );
                            }
                        }
                        else
                        {
                            DELETE_CAR( ref l_U665 );
                        }
                        if (IS_VEH_DRIVEABLE( l_U666 ))
                        {
                            if (IS_CAR_ON_FIRE( l_U666 ))
                            {
                                DELETE_CAR( ref l_U666 );
                            }
                            FIX_CAR( l_U666 );
                            SET_CAR_COORDINATES( l_U666, -37.96090000, -327.83670000, 13.62530000 );
                            SET_CAR_HEADING( l_U666, 178.49240000 );
                        }
                        else
                        {
                            DELETE_CAR( ref l_U666 );
                        }
                        CLEAR_CHAR_TASKS( sub_3071() );
                        SET_CURRENT_CHAR_WEAPON( sub_3071(), 0, 0 );
                        CLEAR_AREA_OF_CARS( -38.01450000, -327.57230000, 13.62760000, 200 );
                        CREATE_CAR( 584879743, -25.81790000, -315.94580000, 13.72280000, ref l_U664, 1 );
                        SET_CAR_HEADING( l_U664, 265.95830000 );
                        CHANGE_CAR_COLOUR( l_U664, 35, 0 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U664 );
                        CREATE_CHAR( 26, 88667657, -28.44000000, -322.23000000, 13.80380000, ref l_U661, 1 );
                        SET_CHAR_HEADING( l_U661, 137.80510000 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U661, 1 );
                        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U661, 0 );
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U661, 1 );
                        SET_PED_DIES_WHEN_INJURED( l_U661, 1 );
                        SET_CHAR_MONEY( l_U661, 100 );
                        SET_CHAR_READY_TO_BE_EXECUTED( l_U661, 1 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U661, 1 );
                        SET_CHAR_RELATIONSHIP( l_U661, 3, 0 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U661, 4 );
                        SET_CHAR_AS_ENEMY( l_U661, 1 );
                        CREATE_CHAR( 26, -881358690, -29.24250000, -323.09480000, 13.80380000, ref l_U662, 1 );
                        SET_CHAR_HEADING( l_U662, 317.80510000 );
                        SET_CHAR_DECISION_MAKER_TO_DEFAULT( l_U662 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U662, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U662, 1 );
                        ALLOW_TARGET_WHEN_INJURED( l_U662, 1 );
                        SET_CHAR_RELATIONSHIP( l_U662, 3, 0 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U662, 4 );
                        GIVE_WEAPON_TO_CHAR( l_U662, 12, 30000, 0 );
                        SET_CHAR_AS_ENEMY( l_U662, 1 );
                        LOAD_SCENE( -29.28990000, -321.77140000, 21.76230000 );
                        BEGIN_CAM_COMMANDS( ref l_U697 );
                        l_U711 = 1;
                        DISPLAY_RADAR( 0 );
                        ADD_BLIP_FOR_CHAR( l_U662, ref l_U671 );
                        ADD_BLIP_FOR_CHAR( l_U661, ref l_U672 );
                        SET_WIDESCREEN_BORDERS( 1 );
                        sub_8261( 0, sub_3071(), "Niko", 0 );
                        sub_8261( 3, l_U661, "PI_CHERISE", 0 );
                        CLEAR_AREA_OF_CARS( l_U677._fU0, l_U677._fU4, l_U677._fU8, 1000 );
                        CREATE_CAM( 14, ref l_U698 );
                        CREATE_CAM( 14, ref l_U699 );
                        CREATE_CAM( 3, ref l_U700 );
                        SET_CAM_POS( l_U698, -35.27569000, -317.19870000, 21.80231000 );
                        SET_CAM_ROT( l_U698, 44.96125000, 0.00000100, -144.16660000 );
                        SET_CAM_FOV( l_U698, 46.50000000 );
                        SET_CAM_POS( l_U699, -40.28022000, -314.24330000, 15.58369000 );
                        SET_CAM_ROT( l_U699, 7.38700400, 0.00000000, -132.87330000 );
                        SET_CAM_FOV( l_U699, 46.50000000 );
                        SET_CAM_ACTIVE( l_U700, 1 );
                        SET_CAM_PROPAGATE( l_U700, 1 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        SET_CAM_INTERP_STYLE_CORE( l_U700, l_U698, l_U699, 7000, 0 );
                        REMOVE_BLIP( l_U670 );
                        SETTIMERA( 0 );
                        DO_SCREEN_FADE_IN( 500 );
                        while (IS_SCREEN_FADING_IN())
                        {
                            WAIT( 0 );
                        }
                        l_U737 = 1;
                    }
                }
                break;
                case 1:
                if (TIMERA() > 1000)
                {
                    l_U705 = 1;
                    SETTIMERA( 0 );
                    l_U737 = 2;
                }
                break;
                case 2:
                if (TIMERA() > 1000)
                {
                    if ((NOT (IS_CHAR_INJURED( l_U661 ))) AND (NOT (IS_CHAR_INJURED( l_U662 ))))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U660 );
                        TASK_STAND_STILL( 0, 1200 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "player_kiss", "missdwayne1", 1000.00000000, 0, 4160 );
                        TASK_LOOK_AT_CHAR( 0, sub_3071(), 3000, 0 );
                        CLOSE_SEQUENCE_TASK( l_U660 );
                        TASK_PERFORM_SEQUENCE( l_U662, l_U660 );
                        CLEAR_SEQUENCE_TASK( l_U660 );
                        OPEN_SEQUENCE_TASK( ref l_U660 );
                        TASK_STAND_STILL( 0, 1200 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "Girl_Hug", "missdwayne1", 1000.00000000, 0, 4160 );
                        CLOSE_SEQUENCE_TASK( l_U660 );
                        TASK_PERFORM_SEQUENCE( l_U661, l_U660 );
                        CLEAR_SEQUENCE_TASK( l_U660 );
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_3071() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_3071(), -34.24000000, -311.47000000, 13.79000000 );
                        SET_CHAR_HEADING( sub_3071(), 241.70120000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_3071(), -34.24000000, -311.47000000, 13.79000000 );
                        SET_CHAR_HEADING( sub_3071(), 241.70120000 );
                    }
                    TASK_GO_STRAIGHT_TO_COORD( sub_3071(), -31.58826000, -320.06040000, 13.75400000, 2, -1 );
                    SETTIMERA( 0 );
                    l_U737 = 3;
                }
                break;
                case 3:
                if (TIMERA() > 4500)
                {
                    if ((HAS_CAR_RECORDING_BEEN_LOADED( 875 )) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 874 )) AND ((HAS_MODEL_LOADED( -1685021548 )) AND (HAS_MODEL_LOADED( -685276541 )))))
                    {
                        CREATE_CAR( -685276541, -46.68470000, -364.05040000, 14.33590000, ref l_U667[0], 1 );
                        SET_VEHICLE_QUATERNION( l_U667[0], 0.00020000, -0.00030000, -0.01090000, 0.99990000 );
                        START_PLAYBACK_RECORDED_CAR( l_U667[0], 874 );
                        CREATE_CAR( -1685021548, -52.66230000, -245.82070000, 14.27000000, ref l_U667[1], 1 );
                        SET_VEHICLE_QUATERNION( l_U667[1], -0.03300000, 0.00260000, 0.99940000, 0.00700000 );
                        START_PLAYBACK_RECORDED_CAR( l_U667[1], 875 );
                        SET_PLAYBACK_SPEED( l_U667[1], 1.40000000 );
                        l_U737 = 4;
                    }
                }
                break;
                case 4:
                if ((NOT (IS_CHAR_INJURED( l_U662 ))) AND (TIMERA() > 5500))
                {
                    sub_9589( "DF1_ARR", ref l_U729, 7, 1 );
                    TASK_LOOK_AT_CHAR( sub_3071(), l_U662, 2000, 0 );
                    SET_CHAR_COORDINATES( sub_3071(), -30.85280000, -320.45710000, 13.76220000 );
                    SET_CHAR_HEADING( sub_3071(), 244.36490000 );
                    SET_CAM_POS( l_U698, -24.61908000, -312.72680000, 14.72984000 );
                    SET_CAM_ROT( l_U698, 1.60029400, -0.00000000, 147.86270000 );
                    SET_CAM_FOV( l_U698, 49.19999000 );
                    SET_CAM_POS( l_U699, -24.61908000, -312.72680000, 14.72984000 );
                    SET_CAM_ROT( l_U699, 1.60029400, -0.00000000, 147.86270000 );
                    SET_CAM_FOV( l_U699, 39.19999000 );
                    SET_CAM_INTERP_STYLE_CORE( l_U700, l_U698, l_U699, 5400, 0 );
                    SETTIMERA( 0 );
                    l_U737 = 5;
                }
                break;
                case 5:
                if ((sub_10822( l_U729 )) == 2)
                {
                    CLEAR_AREA_OF_CHARS( -28.44000000, -322.23000000, 13.80380000, 100 );
                    SET_CAM_POS( l_U698, -30.55422000, -318.57680000, 15.02259000 );
                    SET_CAM_ROT( l_U698, -0.56897500, -0.00000000, -169.87420000 );
                    SET_CAM_FOV( l_U698, 36.60002000 );
                    SET_CAM_POS( l_U699, -30.55422000, -318.57680000, 15.02259000 );
                    SET_CAM_ROT( l_U699, -0.56897500, -0.00000000, -169.87420000 );
                    SET_CAM_FOV( l_U699, 36.60002000 );
                    SET_CAM_INTERP_STYLE_CORE( l_U700, l_U698, l_U699, 4500, 0 );
                    SETTIMERA( 0 );
                    l_U737 = 6;
                }
                break;
                case 6:
                if (TIMERA() > 2000)
                {
                    if ((IS_VEH_DRIVEABLE( l_U664 )) AND (NOT (IS_CHAR_INJURED( l_U662 ))))
                    {
                        CLEAR_CHAR_TASKS( l_U662 );
                        OPEN_SEQUENCE_TASK( ref l_U660 );
                        TASK_PLAY_ANIM( 0, "Unholster_Shoot_Run", "missdwayne1", 1000.00000000, 0, 1, 1, 0, 0 );
                        TASK_ENTER_CAR_AS_DRIVER( 0, l_U664, 5000 );
                        CLOSE_SEQUENCE_TASK( l_U660 );
                        TASK_PERFORM_SEQUENCE( l_U662, l_U660 );
                        CLEAR_SEQUENCE_TASK( l_U660 );
                    }
                    SETTIMERA( 0 );
                    l_U737 = 7;
                }
                break;
                case 7:
                if (TIMERA() > 2900)
                {
                    SET_CAM_ACTIVE( l_U700, 0 );
                    SET_CAM_PROPAGATE( l_U700, 0 );
                    SET_CAM_ACTIVE( l_U699, 0 );
                    SET_CAM_PROPAGATE( l_U699, 0 );
                    SET_CAM_ACTIVE( l_U698, 1 );
                    SET_CAM_PROPAGATE( l_U698, 1 );
                    SET_CAM_POS( l_U698, -32.07560000, -324.76210000, 14.64840000 );
                    SET_CAM_ROT( l_U698, -0.34776700, -0.00000000, -36.64384000 );
                    SET_CAM_FOV( l_U698, 42.90001000 );
                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U662, "FIGHT", 1, 1, 2 );
                        GIVE_WEAPON_TO_CHAR( l_U662, 12, 30000, 1 );
                    }
                    l_U737 = 8;
                }
                break;
                case 8:
                if (TIMERA() > 3700)
                {
                    OPEN_SEQUENCE_TASK( ref l_U660 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "Niko_Jump", "missdwayne1", 1000.00000000, 0, 4160 );
                    CLOSE_SEQUENCE_TASK( l_U660 );
                    TASK_PERFORM_SEQUENCE( sub_3071(), l_U660 );
                    CLEAR_SEQUENCE_TASK( l_U660 );
                    SETTIMERA( 0 );
                    l_U737 = 9;
                }
                break;
                case 9:
                if (TIMERA() > 1000)
                {
                    DELETE_CAR( ref l_U667[1] );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -1685021548 );
                    REMOVE_CAR_RECORDING( 875 );
                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                    {
                        FIRE_PED_WEAPON( l_U662, -36.55034000, -322.81730000, 14.30729000 );
                    }
                    SETTIMERA( 0 );
                    l_U737 = 10;
                }
                break;
                case 10:
                if (TIMERA() > 1000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U661 )))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U661, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                        OPEN_SEQUENCE_TASK( ref l_U660 );
                        TASK_PLAY_ANIM( 0, "Cherise_avoid", "missdwayne1", 1000.00000000, 0, 1, 1, 0, 0 );
                        TASK_PLAY_ANIM( 0, "scared_female", "missdwayne1", 1000.00000000, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U660 );
                        TASK_PERFORM_SEQUENCE( l_U661, l_U660 );
                        CLEAR_SEQUENCE_TASK( l_U660 );
                    }
                    SETTIMERA( 0 );
                    l_U737 = 11;
                }
                break;
                case 11:
                if (TIMERA() > 1000)
                {
                    SET_CAM_ACTIVE( l_U700, 1 );
                    SET_CAM_PROPAGATE( l_U700, 1 );
                    SET_CAM_ACTIVE( l_U699, 1 );
                    SET_CAM_PROPAGATE( l_U699, 1 );
                    SET_CAM_ACTIVE( l_U698, 1 );
                    SET_CAM_PROPAGATE( l_U698, 1 );
                    SET_CAM_POS( l_U698, -32.03234000, -319.27720000, 14.19882000 );
                    SET_CAM_ROT( l_U698, 8.19958400, -0.00000000, 160.64220000 );
                    SET_CAM_FOV( l_U698, 50.00000000 );
                    SET_CAM_POS( l_U699, -32.14416000, -319.64940000, 14.35815000 );
                    SET_CAM_ROT( l_U699, 22.29434000, -0.00000000, 163.27780000 );
                    SET_CAM_FOV( l_U699, 50.00000000 );
                    SET_CAM_INTERP_STYLE_CORE( l_U700, l_U698, l_U699, 1000, 0 );
                    SETTIMERA( 0 );
                    l_U705 = 0;
                    l_U737 = 12;
                }
                break;
                case 12:
                if (TIMERA() > 500)
                {
                    if ((IS_VEH_DRIVEABLE( l_U664 )) AND (NOT (IS_CHAR_INJURED( l_U662 ))))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U662 )))
                        {
                            WARP_CHAR_INTO_CAR( l_U662, l_U664 );
                        }
                        START_PLAYBACK_RECORDED_CAR( l_U664, 881 );
                        SET_PLAYBACK_SPEED( l_U664, 1.25000000 );
                        l_U737 = 13;
                    }
                }
                break;
                case 13:
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_3071(), "missdwayne1", "Niko_Jump" )))
                {
                    DISPLAY_RADAR( 1 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    END_CAM_COMMANDS( ref l_U697 );
                    l_U711 = 0;
                    SET_PLAYER_CONTROL_ADVANCED( sub_3928(), 1, 1, 1 );
                    SET_WANTED_MULTIPLIER( 0.00000000 );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U666 );
                    SETTIMERA( 0 );
                    SETTIMERB( 0 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    SWITCH_PED_PATHS_ON( -28.44000000 - 20, -322.23000000 - 20, 13.80380000 - 10, -28.44000000 + 20, -322.23000000 + 20, 13.80380000 + 10 );
                    FLUSH_SCENARIO_BLOCKING_AREAS();
                    SWITCH_ROADS_ON( -52.36520000, -402.00210000, 0, -45.10480000, -240.93240000, 100 );
                    SWITCH_ROADS_ON( -127.42060000, -308.91660000, 0, 18.80800000, -305.21100000, 100 );
                    if (IS_SCREEN_FADED_OUT())
                    {
                        LOAD_SCENE( -29.28990000, -321.77140000, 13.76230000 );
                        DO_SCREEN_FADE_IN( 500 );
                        while (IS_SCREEN_FADING_IN())
                        {
                            WAIT( 0 );
                        }
                    }
                    l_U736 = 3;
                }
                break;
                case 15: break;
            }
            break;
            case 3:
            sub_13015();
            sub_13864();
            sub_14236();
            sub_14935();
            if (sub_15172( sub_3071() ))
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    l_U722 = 1;
                }
                if (l_U722)
                {
                    if (IS_SCREEN_FADING_IN())
                    {
                        if ((DOES_VEHICLE_EXIST( l_U664 )) AND (DOES_CHAR_EXIST( l_U662 )))
                        {
                            DELETE_CAR( ref l_U664 );
                            DELETE_CHAR( ref l_U662 );
                        }
                        CLEAR_PRINTS();
                        PRINT_NOW( "D1_11", 7500, 1 );
                        l_U658 = 1;
                        sub_3162();
                    }
                }
            }
            if (NOT l_U708)
            {
                if (TIMERA() > 1500)
                {
                    DELETE_CAR( ref l_U667[0] );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -685276541 );
                    REMOVE_CAR_RECORDING( 874 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3071(), 0 );
                    l_U708 = 1;
                }
            }
            if (NOT l_U716)
            {
                if (DOES_BLIP_EXIST( l_U672 ))
                {
                    if (sub_15683( ref l_U672, ref l_U659 ))
                    {
                        if (TIMERB() < 7500)
                        {
                            if (l_U710 == 0)
                            {
                                PRINT_NOW( "D1_6", 500, 1 );
                                l_U710 = 1;
                            }
                            else
                            {
                                PRINT_NOW( "D1_7", 500, 1 );
                                l_U710 = 0;
                            }
                            sub_15923( l_U661, "scared_female", "missdwayne1" );
                        }
                        else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT (IS_CHAR_INJURED( l_U661 )))
                            {
                                l_U716 = 1;
                            }
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U661 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3071(), l_U661, 15.00000000, 15.00000000, 0 ))
                {
                    if (NOT l_U715)
                    {
                        sub_9589( "DF1_BEGS", ref l_U729, 7, 1 );
                        l_U715 = 1;
                    }
                    sub_16422( ref l_U661, "scared_female", "missdwayne1", ref l_U729, "DF1_BEGS" );
                }
            }
            if (sub_18123( l_U661 ))
            {
                if (DOES_BLIP_EXIST( l_U672 ))
                {
                    REMOVE_BLIP( l_U672 );
                }
                GET_CHAR_COORDINATES( sub_3071(), ref l_U686._fU0, ref l_U686._fU4, ref l_U686._fU8 );
                GET_GROUND_Z_FOR_3D_COORD( l_U686._fU0, l_U686._fU4, l_U686._fU8, ref l_U686._fU8 );
                GET_CHAR_HEADING( sub_3071(), ref l_U696 );
                sub_2420( 0 );
                l_U736 = 4;
            }
            else if (NOT (IS_CHAR_FATALLY_INJURED( l_U661 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3071(), l_U661, 20.00000000, 20.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U662 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3071(), l_U662, 30.00000000, 30.00000000, 0 )) || (NOT (IS_CHAR_ON_SCREEN( l_U661 ))))
                        {
                            DELETE_CHAR( ref l_U661 );
                            REMOVE_BLIP( l_U672 );
                            CLEAR_HELP();
                            sub_2420( 1 );
                            sub_9589( "DF1_LIVE", ref l_U729, 7, 1 );
                            l_U720 = 0;
                            l_U736 = 5;
                        }
                    }
                }
            }
            else
            {
                sub_2420( 0 );
                sub_9589( "DF1_KILLC", ref l_U729, 7, 1 );
                l_U720 = 1;
                REMOVE_BLIP( l_U672 );
                CLEAR_HELP();
                l_U736 = 5;
            }
            break;
            case 4:
            if (sub_18735( l_U686, l_U696, l_U661 ))
            {
                sub_9589( "DF1_KILLC", ref l_U729, 7, 1 );
                if (NOT (IS_CHAR_DEAD( l_U661 )))
                {
                    SET_CHAR_HEALTH( l_U661, 0 );
                }
                REMOVE_BLIP( l_U672 );
                l_U736 = 5;
            }
            break;
            case 5:
            sub_14935();
            sub_13864();
            sub_14236();
            sub_13015();
            if (sub_15172( sub_3071() ))
            {
                if (IS_SCREEN_FADED_OUT())
                {
                    l_U722 = 1;
                }
                if (l_U722)
                {
                    if (IS_SCREEN_FADING_IN())
                    {
                        if ((DOES_VEHICLE_EXIST( l_U664 )) AND (DOES_CHAR_EXIST( l_U662 )))
                        {
                            DELETE_CAR( ref l_U664 );
                            DELETE_CHAR( ref l_U662 );
                        }
                        CLEAR_PRINTS();
                        PRINT_NOW( "D1_11", 7500, 1 );
                        l_U658 = 1;
                        sub_3162();
                    }
                }
            }
            if (NOT l_U709)
            {
                if ((NOT (sub_10838( l_U729 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                {
                    PRINT_NOW( "D1_2", 7500, 1 );
                    l_U709 = 1;
                }
            }
            if (NOT l_U712)
            {
                if (NOT (IS_CHAR_DEAD( l_U662 )))
                {
                    if ((NOT (IS_VEH_DRIVEABLE( l_U664 ))) || ((NOT (IS_CHAR_IN_ANY_CAR( l_U662 ))) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U662, sub_3071(), 0 ))))
                    {
                        SET_COMBAT_DECISION_MAKER( l_U662, l_U726 );
                        SET_CHAR_DECISION_MAKER( l_U662, l_U727 );
                        SET_CHAR_RELATIONSHIP( l_U662, 5, 0 );
                        l_U712 = 1;
                    }
                }
            }
            if (IS_CHAR_FATALLY_INJURED( l_U662 ))
            {
                if (NOT l_U704)
                {
                    GET_DEAD_CHAR_PICKUP_COORDS( l_U662, ref l_U692._fU0, ref l_U692._fU4, ref l_U692._fU8 );
                    CREATE_MONEY_PICKUP( l_U692._fU0, l_U692._fU4, l_U692._fU8, 0, 1, ref l_U675 );
                    ADD_BLIP_FOR_PICKUP( l_U675, ref l_U674 );
                    CHANGE_BLIP_COLOUR( l_U674, 2 );
                    REMOVE_BLIP( l_U671 );
                    SET_ALL_RANDOM_PEDS_FLEE( sub_3928(), 0 );
                    ADD_SCENARIO_BLOCKING_AREA( l_U723._fU0 - 5, l_U723._fU4 - 5, l_U723._fU8 - 5, l_U723._fU0 + 5, l_U723._fU4 + 5, l_U723._fU8 + 5 );
                    sub_2667();
                    PRINT_NOW( "D1_5", 7500, 1 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3071(), 1 );
                    REQUEST_MODEL( -617264103 );
                    l_U704 = 1;
                    l_U736 = 6;
                }
            }
            break;
            case 6:
            if (HAS_PICKUP_BEEN_COLLECTED( l_U675 ))
            {
                REMOVE_BLIP( l_U674 );
                SETTIMERA( 0 );
                l_U736 = 7;
            }
            break;
            case 7:
            if (TIMERA() >= 2000)
            {
                if (sub_21733( 7, "DF1_CCASH2", "DF1AUD" ))
                {
                    CLEAR_PRINTS();
                    SETTIMERA( 0 );
                    l_U736 = 8;
                }
            }
            break;
            case 8:
            if (sub_25609( 0 ))
            {
                l_U736 = 9;
            }
            break;
            case 9:
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_3928(), 0 )))
            {
                if (NOT l_U706)
                {
                    if (DOES_BLIP_EXIST( l_U673 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U673, 4 );
                        PRINT( "D1_1", 7500, 1 );
                    }
                    l_U706 = 1;
                    l_U707 = 0;
                }
                sub_26007( 7, ref l_U663, l_U723._fU0, l_U723._fU4, l_U723._fU8, 275.00000000 );
                while (NOT (DOES_CHAR_EXIST( l_U663 )))
                {
                    WAIT( 0 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U663, 1 );
                ADD_SCENARIO_BLOCKING_AREA( -128.95390000 - 10, 57.12278000 - 10, 15.30875000 - 10, -128.95390000 + 10, 57.12278000 + 10, 15.30875000 + 10 );
                CLEAR_AREA_OF_CHARS( l_U723._fU0, l_U723._fU4, l_U723._fU8, 2 );
                REQUEST_MODEL( 1476087551 );
                sub_8261( 1, l_U663, "DWAYNE", 0 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U663, "room_cbrest" );
                PRINT_NOW( "D1_1", 7500, 1 );
                ADD_BLIP_FOR_CHAR( l_U663, ref l_U673 );
                SET_BLIP_AS_FRIENDLY( l_U673, 1 );
                SET_ROUTE( l_U673, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U663, 1 );
                FREEZE_CHAR_POSITION( l_U663, 1 );
                TASK_SIT_DOWN( l_U663, 0, 1, -2 );
                l_U736 = 10;
            }
            else if (NOT l_U707)
            {
                if (DOES_BLIP_EXIST( l_U673 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U673, 0 );
                }
                if (sub_10838( l_U729 ))
                {
                    sub_16796( ref l_U729 );
                }
                PRINT_NOW( "D1_9", 7500, 1 );
                l_U707 = 1;
                l_U706 = 0;
            }
            break;
            case 10:
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_3928(), 0 )))
            {
                if (NOT l_U706)
                {
                    if (DOES_BLIP_EXIST( l_U673 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U673, 4 );
                        PRINT( "D1_1", 7500, 1 );
                    }
                    l_U706 = 1;
                    l_U707 = 0;
                }
                if (LOCATE_CHAR_ANY_MEANS_2D( sub_3071(), l_U723._fU0, l_U723._fU4, 100, 100, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U663 )))
                    {
                        CLEAR_AREA_OF_CHARS( l_U723._fU0, l_U723._fU4, l_U723._fU8, 2 );
                        if (HAS_MODEL_LOADED( 1476087551 ))
                        {
                            CREATE_OBJECT( 1476087551, -128.40330000, 57.24692000, 15.51630000, ref l_U676, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U676, "room_cbrest" );
                        }
                        l_U736 = 11;
                    }
                }
            }
            else if (NOT l_U707)
            {
                if (DOES_BLIP_EXIST( l_U673 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U673, 0 );
                }
                if (sub_10838( l_U729 ))
                {
                    sub_16796( ref l_U729 );
                }
                PRINT( "D1_9", 7500, 1 );
                l_U707 = 1;
                l_U706 = 0;
            }
            break;
            case 11:
            if (NOT (DOES_OBJECT_EXIST( l_U676 )))
            {
                if (HAS_MODEL_LOADED( 1476087551 ))
                {
                    CREATE_OBJECT( 1476087551, -128.40330000, 57.24692000, 15.51630000, ref l_U676, 1 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U676, "room_cbrest" );
                }
            }
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_3928(), 0 )))
            {
                if (NOT l_U706)
                {
                    if (DOES_BLIP_EXIST( l_U673 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U673, 4 );
                        PRINT( "D1_1", 7500, 1 );
                    }
                    l_U706 = 1;
                    l_U707 = 0;
                }
                if (NOT (IS_CHAR_INJURED( l_U663 )))
                {
                    GET_INTERIOR_FROM_CHAR( sub_3071(), ref iVar3 );
                    if ((NOT (iVar3 == nil)) AND (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3071(), l_U663, 10, 10, 0 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_3071() ))
                        {
                            sub_6733();
                        }
                        if (sub_6426( 1, 1 ))
                        {
                            SET_PLAYER_CONTROL_ADVANCED( sub_3928(), 0, 1, 1 );
                            DO_SCREEN_FADE_OUT( 500 );
                            while (IS_SCREEN_FADING_OUT())
                            {
                                WAIT( 0 );
                                if (NOT (IS_CHAR_INJURED( l_U663 )))
                                {
                                    SET_CHAR_INVINCIBLE( l_U663, 1 );
                                    FREEZE_CHAR_POSITION( l_U663, 1 );
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( l_U663 )))
                            {
                                SET_CHAR_INVINCIBLE( l_U663, 0 );
                                FREEZE_CHAR_POSITION( l_U663, 0 );
                            }
                            SET_PLAYER_CONTROL_ADVANCED( sub_3928(), 0, 1, 1 );
                            CLEAR_CHAR_TASKS( sub_3071() );
                            CLEAR_AREA_OF_CHARS( -128.95390000, 57.12278000, 15.30875000, 10 );
                            TASK_SWAP_WEAPON( sub_3071(), 0 );
                            WAIT( 500 );
                            if (IS_CHAR_IN_ANY_CAR( sub_3071() ))
                            {
                                GET_CAR_CHAR_IS_USING( sub_3071(), ref l_U665 );
                                SET_CAR_COORDINATES( l_U665, -126.45460000, 63.13520000, 13.80310000 );
                                SET_CAR_HEADING( l_U665, 102.81980000 );
                                WARP_CHAR_FROM_CAR_TO_COORD( sub_3071(), -125.73570000, 61.06360000, 14.80360000 );
                                REMOVE_PED_HELMET( sub_3071(), 1 );
                                SET_CHAR_HEADING( sub_3071(), 137.57650000 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( sub_3071(), -125.73570000, 61.06360000, 14.80360000 );
                                SET_CHAR_HEADING( sub_3071(), 137.57650000 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U663 )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U660 );
                                TASK_LOOK_AT_CHAR( 0, l_U663, 20000, 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -127.64110000, 58.51460000, 14.80430000, 2, -1, 0 );
                                CLOSE_SEQUENCE_TASK( l_U660 );
                                TASK_PERFORM_SEQUENCE( sub_3071(), l_U660 );
                                CLEAR_SEQUENCE_TASK( l_U660 );
                                TASK_LOOK_AT_CHAR( l_U663, sub_3071(), 6000, 0 );
                            }
                            LOAD_SCENE( -125.73570000, 61.06360000, 14.80360000 );
                            BEGIN_CAM_COMMANDS( ref l_U697 );
                            l_U711 = 1;
                            CREATE_CAM( 14, ref l_U698 );
                            CREATE_CAM( 14, ref l_U699 );
                            CREATE_CAM( 3, ref l_U700 );
                            DISPLAY_RADAR( 0 );
                            DISPLAY_HUD( 0 );
                            SET_CAM_ACTIVE( l_U700, 0 );
                            SET_CAM_PROPAGATE( l_U700, 0 );
                            SET_CAM_ACTIVE( l_U699, 0 );
                            SET_CAM_PROPAGATE( l_U699, 0 );
                            SET_CAM_ACTIVE( l_U698, 1 );
                            SET_CAM_PROPAGATE( l_U698, 1 );
                            SET_CAM_POS( l_U698, -128.15850000, 55.74117000, 15.73930000 );
                            SET_CAM_ROT( l_U698, 2.52500700, -0.00000000, 7.83325600 );
                            SET_CAM_FOV( l_U698, 52.19998000 );
                            SET_CAM_NEAR_DOF( l_U698, 1.00000000 );
                            SET_CAM_FAR_DOF( l_U698, 8.00000000 );
                            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3071(), 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            GET_GAME_VIEWPORT_ID( ref l_U735 );
                            WAIT( 0 );
                            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U735, "room_cbrest" );
                            DO_SCREEN_FADE_IN( 500 );
                            while (IS_SCREEN_FADING_IN())
                            {
                                WAIT( 0 );
                            }
                            SETTIMERA( 0 );
                            if (l_U720)
                            {
                                sub_9589( "DF1_KILLED", ref l_U729, 7, 1 );
                            }
                            else
                            {
                                sub_9589( "DF1_CLIVES", ref l_U729, 7, 1 );
                            }
                            l_U736 = 12;
                        }
                    }
                }
            }
            else if (NOT l_U707)
            {
                if (DOES_BLIP_EXIST( l_U673 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U673, 0 );
                }
                if (sub_10838( l_U729 ))
                {
                    sub_16796( ref l_U729 );
                }
                PRINT( "D1_9", 7500, 1 );
                l_U707 = 1;
                l_U706 = 0;
            }
            break;
            case 12:
            if ((IS_SCREEN_FADED_IN()) AND (sub_5237()))
            {
                sub_2420( 0 );
                l_U736 = 13;
            }
            if ((sub_10822( l_U729 )) == 3)
            {
                if (NOT (IS_CHAR_INJURED( l_U663 )))
                {
                    TASK_LOOK_AT_CHAR( l_U663, sub_3071(), 12000, 0 );
                }
                SET_CAM_POS( l_U698, -126.97650000, 57.87299000, 16.56920000 );
                SET_CAM_ROT( l_U698, -24.61998000, 0.00000000, 88.42435000 );
                SET_CAM_FOV( l_U698, 55.79997000 );
                SET_CAM_NEAR_DOF( l_U698, 1.00000000 );
                SET_CAM_FAR_DOF( l_U698, 4.00000000 );
                l_U736 = 13;
            }
            break;
            case 13:
            if ((IS_SCREEN_FADED_IN()) AND (sub_5237()))
            {
                sub_2420( 0 );
            }
            if (NOT (sub_10838( l_U729 )))
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
                SET_PLAYER_CONTROL_ADVANCED( sub_3928(), 1, 1, 1 );
                DELETE_CHAR( ref l_U663 );
                SET_CHAR_COORDINATES( sub_3071(), -142.15730000, 71.45240000, 13.75790000 );
                SET_CHAR_HEADING( sub_3071(), 106.93290000 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                DISPLAY_RADAR( 1 );
                DISPLAY_HUD( 1 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3071(), 0 );
                LOAD_SCENE( -142.15730000, 71.45240000, 13.75790000 );
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                sub_31073();
            }
            break;
        }
    }
    return;
}

void sub_272()
{
    sub_281();
    return;
}

void sub_281()
{
    int iVar2;

    iVar2 = 7;
    sub_295( iVar2 );
    sub_1471( iVar2 );
    return;
}

void sub_295(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_339();
        sub_500();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_608();
            sub_647();
        }
    }
    sub_723();
    sub_824();
    uVar5 = sub_937( uParam0 );
    sub_1378( uVar5, 0 );
    return;
}

void sub_339()
{
    sub_353( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_453();
    }
    return;
}

void sub_353(int iParam0)
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

void sub_453()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_500()
{
    sub_509();
    return;
}

void sub_509()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_608()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_647()
{
    sub_656();
    return;
}

void sub_656()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_723()
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

void sub_824()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_846();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_846()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_937(unknown uParam0)
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
    sub_1336( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1336(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1378(int iParam0, boolean bParam1)
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

void sub_1471(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1480();
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
        sub_2255();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1480()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1518( 5, g_U569[I] )) == 1))
        {
            if ((sub_1518( 1, g_U569[I] )) != 0)
            {
                sub_1804( I );
            }
        }
    }
    if (NOT sub_1970())
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

int sub_1518(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1804(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1889( g_U569 - 1 );
    return;
}

void sub_1889(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1970()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1518( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2255()
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

void sub_2382()
{
    FLUSH_SCENARIO_BLOCKING_AREAS();
    if (l_U711)
    {
        END_CAM_COMMANDS( ref l_U697 );
    }
    sub_2420( 0 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    CLEAR_HELP();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    SWITCH_ROADS_ON( -52.36520000, -402.00210000, 0, -45.10480000, -240.93240000, 100 );
    SWITCH_ROADS_ON( -127.42060000, -308.91660000, 0, 18.80800000, -305.21100000, 100 );
    sub_2667();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2420(unknown uParam0)
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

void sub_2667()
{
    if (l_U484)
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
    l_U482 = 0;
    l_U481 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_2887(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_2906();
    return;
}

void sub_2906()
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

void sub_3071()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3162()
{
    switch (l_U658)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 1:
        sub_3260( l_U657, "DF1_LOSTJ", "DF1AUD", 0 );
        break;
        case 2:
        PRINT_NOW( "D1_14", 7500, 1 );
        break;
    }
    sub_3875();
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3928(), 150 );
        SAY_AMBIENT_SPEECH( sub_3071(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_2382();
    return;
}

void sub_3260(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_3304( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_3304(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_3875()
{
    sub_3884();
    return;
}

void sub_3884()
{
    int iVar2;

    iVar2 = 7;
    sub_3898( iVar2 );
    sub_1471( iVar2 );
    return;
}

void sub_3898(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3928(), 150 );
    CLEAR_HELP();
    sub_295( uParam0 );
    return;
}

void sub_3928()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_5237()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_6426(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3071() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3071(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3071() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3071(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3071()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3071() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3071() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3928() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3928() )))
    {
        return 0;
    }
    return 1;
}

void sub_6733()
{
    unknown uVar2;
    float fVar3;

    if ((IS_CHAR_ON_ANY_BIKE( sub_3071() )) || (IS_CHAR_IN_ANY_CAR( sub_3071() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3071(), ref uVar2 );
        SET_PLAYER_CONTROL( sub_3928(), 0 );
        GET_CAR_SPEED( uVar2, ref fVar3 );
        while (fVar3 > 0.20000000)
        {
            WAIT( 0 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                GET_CAR_SPEED( uVar2, ref fVar3 );
            }
        }
        SET_PLAYER_CONTROL( sub_3928(), 1 );
    }
    return;
}

void sub_8261(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_8345( "\n PED NUMBER ", uParam0 );
    sub_8385( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_8345(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8385(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9589(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9612( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_9612(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9666( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_9666(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9688( iParam1 )))
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
    sub_10380( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_9688(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9765( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_9765( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_9765( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_9765(unknown uParam0)
{
    return;
}

void sub_10380(int iParam0, int iParam1)
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

void sub_10822(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_10838( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

int sub_10838(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_9765( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9765( "\n speech is not playing" );
    }
    return 0;
}

void sub_13015()
{
    boolean bVar2;
    int iVar3;

    if (NOT l_U721)
    {
        if (NOT l_U719)
        {
            if (IS_VEH_DRIVEABLE( l_U664 ))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U664 )))
                {
                    FREEZE_CAR_POSITION( l_U664, 1 );
                    FIX_CAR( l_U664 );
                    SETTIMERB( 0 );
                    l_U719 = 1;
                }
            }
        }
        else if ((IS_VEH_DRIVEABLE( l_U664 )) AND (NOT (IS_CHAR_INJURED( l_U662 ))))
        {
            bVar2 = false;
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3071(), l_U662, 100.00000000, 100.00000000, 0 ))
            {
                bVar2 = true;
            }
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3071() ))
            {
                bVar2 = true;
            }
            if ((TIMERB() >= 55000) AND (NOT (sub_10838( l_U729 ))))
            {
                bVar2 = true;
            }
            if (bVar2)
            {
                if (NOT (IS_CHAR_IN_CAR( l_U662, l_U664 )))
                {
                    WARP_CHAR_INTO_CAR( l_U662, l_U664 );
                }
                FREEZE_CAR_POSITION( l_U664, 0 );
                SET_CAR_ENGINE_ON( l_U664, 1, 1 );
                SET_CAR_FORWARD_SPEED( l_U664, 10 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U662, 0 );
                SET_COMBAT_DECISION_MAKER( l_U662, l_U728 );
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                if (iVar3 == 0)
                {
                    OPEN_SEQUENCE_TASK( ref l_U660 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U664, 53.54430000, -699.93050000, 6.91450000, 30, 1, 584879743, 2, 10.00000000, -1 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U664, 125.16870000, -727.08140000, 3.96710000, 30, 1, 584879743, 2, 10.00000000, -1 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U664, 227.36480000, -263.81660000, 8.05160100, 30, 1, 584879743, 2, 10.00000000, -1 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U664, 125.87000000, 850.43690000, 13.72280000, 30, 1, 584879743, 2, 10.00000000, -1 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U664, -344.28540000, 1264.65100000, 22.09690000, 30, 1, 584879743, 2, 10.00000000, -1 );
                    TASK_COMBAT( 0, sub_3071() );
                    CLOSE_SEQUENCE_TASK( l_U660 );
                    TASK_PERFORM_SEQUENCE( l_U662, l_U660 );
                    CLEAR_SEQUENCE_TASK( l_U660 );
                }
                else if (iVar3 == 1)
                {
                    OPEN_SEQUENCE_TASK( ref l_U660 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U664, 53.54430000, -699.93050000, 6.91450000, 30, 1, 584879743, 2, 10.00000000, -1 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U664, -251.61350000, -513.26450000, 3.93760000, 30, 1, 584879743, 2, 10.00000000, -1 );
                    TASK_COMBAT( 0, sub_3071() );
                    CLOSE_SEQUENCE_TASK( l_U660 );
                    TASK_PERFORM_SEQUENCE( l_U662, l_U660 );
                    CLEAR_SEQUENCE_TASK( l_U660 );
                }
                SET_WANTED_MULTIPLIER( 1.00000000 );
                l_U721 = 1;
            }
        }
    }
    return;
}

void sub_13864()
{
    if (NOT (IS_CHAR_FATALLY_INJURED( l_U662 )))
    {
        if (sub_13891())
        {
            if ((NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3071(), l_U664, 30.00000000, 30.00000000, 0 ))) AND (NOT (IS_CAR_ON_SCREEN( l_U664 ))))
            {
                if (IS_CHAR_IN_CAR( l_U662, l_U664 ))
                {
                    GET_CAR_COORDINATES( l_U664, ref l_U680._fU0, ref l_U680._fU4, ref l_U680._fU8 );
                    GET_CAR_HEADING( l_U664, ref l_U695 );
                    GET_CLOSEST_CAR_NODE_WITH_HEADING( l_U680._fU0, l_U680._fU4, l_U680._fU8, ref l_U683._fU0, ref l_U683._fU4, ref l_U683._fU8, ref l_U695 );
                    SET_CAR_COORDINATES( l_U664, l_U683._fU0, l_U683._fU4, l_U683._fU8 );
                    SET_CAR_HEADING( l_U664, l_U695 );
                }
            }
        }
    }
    return;
}

int sub_13891()
{
    if (IS_VEH_DRIVEABLE( l_U664 ))
    {
        if ((CHECK_STUCK_TIMER( l_U664, 0, 5000 )) || ((CHECK_STUCK_TIMER( l_U664, 1, 40000 )) || ((CHECK_STUCK_TIMER( l_U664, 2, 30000 )) || (CHECK_STUCK_TIMER( l_U664, 3, 60000 )))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_14236()
{
    sub_14249( ref l_U662 );
    return;
}

void sub_14249(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U484)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U482))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U483 + 500))
        {
            l_U482 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_14417()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3071() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U483 );
            l_U482 = 1;
            l_U481 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U482) AND (NOT l_U481))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U481 = 1;
        }
    }
    else if (l_U481)
    {
        if (l_U484)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U481 = 0;
    };;;
    return;
}

int sub_14417()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_14935()
{
    if (NOT l_U718)
    {
        if (NOT (IS_CHAR_FATALLY_INJURED( l_U662 )))
        {
            if ((NOT (IS_CHAR_ON_SCREEN( l_U662 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3071(), l_U662, 250.00000000, 250.00000000, 0 ))))
            {
                PRINT_NOW( "D1_8", 7500, 1 );
                l_U718 = 1;
            }
            else
            {
                l_U718 = 0;
            }
        }
    }
    if (NOT (IS_CHAR_FATALLY_INJURED( l_U662 )))
    {
        if ((NOT (IS_CHAR_ON_SCREEN( l_U662 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3071(), l_U662, 300.00000000, 300.00000000, 0 ))))
        {
            CLEAR_PRINTS();
            PRINT_NOW( "D1_11", 7500, 1 );
            l_U658 = 1;
            sub_3162();
        }
    }
    return;
}

int sub_15172(int iParam0)
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
                if (sub_15236( uVar3 ))
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

int sub_15236(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

int sub_15683(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    GET_GAME_TIMER( ref iVar4 );
    if ((iVar4 - (uParam1^)) > 500)
    {
        GET_BLIP_COLOUR( (uParam0^), ref iVar5 );
        if (iVar5 == 4)
        {
            CHANGE_BLIP_COLOUR( (uParam0^), 3 );
            GET_GAME_TIMER( uParam1 );
            return 1;
        }
        else
        {
            CHANGE_BLIP_COLOUR( (uParam0^), 1 );
            GET_GAME_TIMER( uParam1 );
            return 1;
        }
        break;
    }
    return 0;
}

int sub_15923(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if (NOT (IS_CHAR_INJURED( sub_3071() )))
                {
                    GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
                    if (NOT (IS_CHAR_PLAYING_ANIM( uParam0, uParam2, uParam1 )))
                    {
                        if (NOT (iVar5 == 1))
                        {
                            if (NOT (IS_PED_RAGDOLL( uParam0 )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar6 );
                                TASK_LOOK_AT_CHAR( 0, sub_3071(), -2, 0 );
                                TASK_PLAY_ANIM( 0, uParam1, uParam2, 2.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( uVar6 );
                                TASK_PERFORM_SEQUENCE( uParam0, uVar6 );
                                CLEAR_SEQUENCE_TASK( uVar6 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( uParam0 )))
                        {
                            if (GET_CHAR_READY_TO_BE_EXECUTED( uParam0 ))
                            {
                                SET_CHAR_READY_TO_BE_EXECUTED( uParam0, 0 );
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( uParam0 )))
                    {
                        if (NOT (GET_CHAR_READY_TO_BE_EXECUTED( uParam0 )))
                        {
                            SET_CHAR_READY_TO_BE_EXECUTED( uParam0, 1 );
                        }
                    }
                }
            }
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_16422(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    int iVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    vector vVar17;
    float fVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    float fVar24;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_DEAD( (uParam0^) )))
        {
            if (NOT (IS_CHAR_INJURED( (uParam0^) )))
            {
                if (NOT (IS_CHAR_INJURED( sub_3071() )))
                {
                    GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar9 );
                    if (NOT (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 )))
                    {
                        if (NOT (iVar9 == 1))
                        {
                            if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar10 );
                                TASK_LOOK_AT_CHAR( 0, sub_3071(), -2, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3071() );
                                TASK_PLAY_ANIM( 0, uParam1, uParam2, 2.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( uVar10 );
                                TASK_PERFORM_SEQUENCE( (uParam0^), uVar10 );
                                CLEAR_SEQUENCE_TASK( uVar10 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            if (GET_CHAR_READY_TO_BE_EXECUTED( (uParam0^) ))
                            {
                                SET_CHAR_READY_TO_BE_EXECUTED( (uParam0^), 0 );
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                    {
                        if (NOT (GET_CHAR_READY_TO_BE_EXECUTED( (uParam0^) )))
                        {
                            SET_CHAR_READY_TO_BE_EXECUTED( (uParam0^), 1 );
                        }
                    }
                    if (sub_10838( (uParam3^) ))
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            GET_CHAR_HEALTH( (uParam0^), ref iVar8 );
                            if (iVar8 < l_U644)
                            {
                                sub_16796( uParam3 );
                                GET_GAME_TIMER( ref l_U642 );
                                l_U642 += 3000;
                            }
                            l_U644 = iVar8;
                        }
                    }
                    GET_GAME_TIMER( ref iVar7 );
                    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 ))
                        {
                            if ((iVar7 > l_U642) AND (sub_17306( (uParam3^) )))
                            {
                                sub_17347( uParam4, uParam3, 8, 1 );
                            }
                        }
                    }
                    if (NOT (IS_CHAR_FACING_CHAR( (uParam0^), sub_3071(), 70.00000000 )))
                    {
                        if ((l_U646) AND (iVar7 > l_U643))
                        {
                            l_U646 = 0;
                        }
                    }
                    if (NOT l_U646)
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 ))
                            {
                                switch (l_U656)
                                {
                                    case 0:
                                    if ((NOT (IS_CHAR_INJURED( (uParam0^) ))) AND (NOT (IS_CHAR_INJURED( sub_3071() ))))
                                    {
                                        GET_CHAR_COORDINATES( sub_3071(), ref vVar17.x, ref vVar17.y, ref vVar17.z );
                                        GET_CHAR_COORDINATES( (uParam0^), ref vVar14.x, ref vVar14.y, ref vVar14.z );
                                        uVar11 = {vVar14 - vVar17};
                                        GET_HEADING_FROM_VECTOR_2D( uVar11._fU0, uVar11._fU4, ref l_U648 );
                                        GET_CHAR_HEADING( (uParam0^), ref fVar20 );
                                        iVar21 = FLOOR( l_U648 );
                                        iVar23 = FLOOR( fVar20 );
                                        iVar22 = iVar23 + 180;
                                        if (iVar22 > 360)
                                        {
                                            if ((iVar21 >= iVar23) || (iVar21 < (iVar22 - 360)))
                                            {
                                                l_U647 = 1;
                                            }
                                            else
                                            {
                                                l_U647 = 0;
                                            }
                                        }
                                        else if ((iVar21 > iVar23) AND (iVar21 <= iVar22))
                                        {
                                            l_U647 = 1;
                                        }
                                        else
                                        {
                                            l_U647 = 0;
                                        }
                                        l_U656 = 1;
                                    }
                                    break;
                                    case 1:
                                    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                                    {
                                        GET_CHAR_HEADING( (uParam0^), ref fVar20 );
                                        if (IS_CHAR_FACING_CHAR( (uParam0^), sub_3071(), 30.00000000 ))
                                        {
                                            if (IS_CHAR_FACING_CHAR( (uParam0^), sub_3071(), 20.00000000 ))
                                            {
                                                fVar24 = 2;
                                            }
                                            else
                                            {
                                                fVar24 = 3;
                                            }
                                        }
                                        else
                                        {
                                            fVar24 = 4;
                                        }
                                        if (l_U647)
                                        {
                                            fVar20 -= fVar24;
                                        }
                                        else
                                        {
                                            fVar20 += fVar24;
                                        }
                                        if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
                                        {
                                            SET_CHAR_HEADING( (uParam0^), fVar20 );
                                        }
                                        if (IS_CHAR_FACING_CHAR( (uParam0^), sub_3071(), 10.00000000 ))
                                        {
                                            l_U656 = 2;
                                        }
                                    }
                                    break;
                                    case 2:
                                    l_U646 = 1;
                                    l_U643 = iVar7 + 2500;
                                    l_U656 = 0;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_16796(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_9765( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_9765( "\n CONVERSATION PAUSED AT LINE " );
            sub_16952( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_9765( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_9765( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_9765( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_16952(unknown uParam0)
{
    return;
}

void sub_17306(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_17347(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_17370( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_17370(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_9666( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_18123(unknown uParam0)
{
    int iVar3;

    GET_CURRENT_CHAR_WEAPON( sub_3071(), ref iVar3 );
    if ((iVar3 != 7) AND (iVar3 != 9))
    {
        return 0;
    }
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_3071() )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if (((IS_CONTROL_JUST_PRESSED( 0, 4 )) AND ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3928(), uParam0 )) AND (NOT IS_USING_CONTROLLER()))) || (GET_CHAR_MELEE_ACTION_FLAG0( uParam0 )))
                {
                    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_3071() ))))
                    {
                        SET_CHAR_READY_TO_BE_EXECUTED( uParam0, 0 );
                        SET_CHAR_MELEE_ACTION_FLAG0( uParam0, 0 );
                        CLEAR_HELP();
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_18735(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    float fVar7;
    float fVar8;
    float fVar9;
    unknown uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    fVar11 = 0.00000000;
    fVar12 = 0.30000000;
    fVar13 = 0.50000000;
    switch (l_U738)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_3928(), 0 );
        DISPLAY_RADAR( 0 );
        CLEAR_AREA_OF_CHARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, 30.00000000 );
        SET_CHAR_COORDINATES( sub_3071(), -30.42260000, -319.17960000, 13.76210000 );
        SET_CHAR_HEADING( sub_3071(), 203.60680000 );
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3071(), 0.23520000, 1.69660000, -1.00010000, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
            SET_CHAR_COORDINATES( uParam4, uVar17._fU0, uVar17._fU4, uVar17._fU8 );
            GET_CHAR_HEADING( sub_3071(), ref uVar10 );
            SET_CHAR_HEADING( uParam4, uVar10 + 170.78820000 );
            SET_CHAR_PROOFS( uParam4, 1, 0, 0, 0, 0 );
            UNLOCK_RAGDOLL( uParam4, 0 );
        }
        TASK_PLAY_ANIM( sub_3071(), "player_execute", "missdwayne1", 1000, 0, 0, 0, 0, 0 );
        CREATE_CAM( 14, ref l_U701[0] );
        SET_CAM_POS( l_U701[0], -30.26687000, -319.91350000, 15.29003000 );
        SET_CAM_ROT( l_U701[0], -16.06023000, -2.31260800, -159.19420000 );
        SET_CAM_FOV( l_U701[0], 55.79997000 );
        SET_CAM_ACTIVE( l_U701[0], 1 );
        SET_CAM_PROPAGATE( l_U701[0], 1 );
        CREATE_CAM( 14, ref l_U701[1] );
        ATTACH_CAM_TO_PED( l_U701[1], sub_3071() );
        SET_CAM_ATTACH_OFFSET( l_U701[1], 1.42710000, 5.80000000, -0.76200000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U701[1], 1 );
        POINT_CAM_AT_PED( l_U701[1], sub_3071() );
        SET_CAM_POINT_OFFSET( l_U701[1], 0.00000000, 0.00000000, 0.10000000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U701[1], 1 );
        SET_CAM_FOV( l_U701[1], 27.70007000 );
        SET_CAM_ACTIVE( l_U701[1], 0 );
        SET_CAM_PROPAGATE( l_U701[1], 0 );
        if (NOT (IS_CHAR_INJURED( l_U662 )))
        {
            SET_CHAR_VISIBLE( l_U662, 0 );
            FREEZE_CHAR_POSITION( l_U662, 1 );
        }
        GET_GAME_TIMER( ref l_U739 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        l_U738 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U740 );
        if ((l_U740 - l_U739) > 1000)
        {
            if (IS_CHAR_PLAYING_ANIM( sub_3071(), "missdwayne1", "player_execute" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3071(), "missdwayne1", "player_execute", ref fVar7 );
                if (fVar7 > 0.02000000)
                {
                    SET_CAM_ACTIVE( l_U701[1], 1 );
                    SET_CAM_PROPAGATE( l_U701[1], 1 );
                    SET_CAM_ACTIVE( l_U701[0], 0 );
                    SET_CAM_PROPAGATE( l_U701[0], 0 );
                    if (NOT (IS_CHAR_DEAD( uParam4 )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam4, "victim", "missdwayne1", 8.00000000, 0, 0, 0, 0, 0 );
                        if (NOT (# -NULL-0xc27bca()))
                        {
                            TRIGGER_PTFX_ON_PED_BONE( "CS_EXECUTION_BLOOD", uParam4, 0.10000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1204, 1 );
                        }
                    }
                    GET_GAME_TIMER( ref l_U739 );
                    l_U738 = 2;
                }
            }
        }
        else if (IS_CHAR_PLAYING_ANIM( sub_3071(), "missdwayne1", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3071(), "missdwayne1", "player_execute", ref fVar7 );
            if (fVar7 >= 0.00000000)
            {
                SET_CHAR_ANIM_CURRENT_TIME( sub_3071(), "missdwayne1", "player_execute", 0.00000000 );
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            if (IS_CHAR_PLAYING_ANIM( uParam4, "missdwayne1", "victim" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( uParam4, "missdwayne1", "victim", ref fVar7 );
                if (fVar7 >= fVar11)
                {
                    if (fVar7 < fVar12)
                    {
                        fVar9 = (fVar7 - fVar11) / (fVar12 - fVar11);
                        fVar8 = 1.00000000 - (fVar9 * fVar13);
                        SET_TIME_SCALE( fVar8 );
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U739 );
                        l_U738 = 3;
                    }
                }
            }
        }
        break;
        case 3:
        GET_GAME_TIMER( ref l_U740 );
        if ((l_U740 - l_U739) > 1800)
        {
            SET_CAM_ACTIVE( l_U701[0], 0 );
            SET_CAM_PROPAGATE( l_U701[0], 0 );
            SET_CAM_ACTIVE( l_U701[1], 0 );
            SET_CAM_PROPAGATE( l_U701[1], 0 );
            DESTROY_CAM( l_U701[0] );
            DESTROY_CAM( l_U701[1] );
            if (NOT (IS_CHAR_DEAD( uParam4 )))
            {
                SET_CHAR_PROOFS( uParam4, 0, 0, 0, 0, 0 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            if (NOT (IS_CHAR_INJURED( l_U662 )))
            {
                SET_CHAR_VISIBLE( l_U662, 1 );
                FREEZE_CHAR_POSITION( l_U662, 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL( sub_3928(), 1 );
            DISPLAY_RADAR( 1 );
            SET_TIME_SCALE( 1.00000000 );
            l_U738 = 4;
        }
        break;
        case 4:
        return 1;
        break;
    }
    if ((NOT (IS_CHAR_INJURED( uParam4 ))) AND ((NOT l_U717) AND (l_U741)))
    {
        if (IS_CHAR_PLAYING_ANIM( uParam4, "missdwayne1", "victim" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( uParam4, "missdwayne1", "victim", ref fVar7 );
            if (fVar7 > 0.40000000)
            {
                STOP_PED_SPEAKING( uParam4, 1 );
                UNLOCK_RAGDOLL( uParam4, 1 );
                SET_CHAR_HEALTH( uParam4, 0 );
                l_U720 = 1;
                l_U717 = 1;
            }
        }
    }
    if (NOT l_U741)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_3071(), "missdwayne1", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_3071(), "missdwayne1", "player_execute", ref fVar7 );
            if (fVar7 >= 0.03000000)
            {
                if (NOT (IS_CHAR_DEAD( uParam4 )))
                {
                    GET_PED_BONE_POSITION( sub_3071(), 1232, 0.20000000, 0.00000000, 0.00000000, ref l_U689 );
                    GET_PED_BONE_POSITION( uParam4, 1204, 0.10000000, 0.00000000, 0.00000000, ref uVar14 );
                    FIRE_PED_WEAPON( sub_3071(), uVar14._fU0, uVar14._fU4, uVar14._fU8 );
                    TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_3071(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                    l_U741 = 1;
                }
            }
        }
    }
    return 0;
}

void sub_21733(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_21791( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_21791(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_9765( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_9765( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3928() )))
    {
        sub_9765( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3071() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3071() )))
    {
        sub_9765( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_9765( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_22306()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((NOT bParam8) || (g_U91._fU372))
            {
                sub_9765( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 4) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 5))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_22306()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_23678( uParam0, ref g_U91._fU176 );
    sub_25059( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_8385( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

int sub_22306()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_22363())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_22363()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3928() )))
    {
        sub_9765( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_9765( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_9765( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_9765( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3928() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3071() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3071(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_9765( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3071() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_9765( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_9765( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3928() )))
    {
        sub_9765( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_23678(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_25059(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_25609(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_3071(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_9765( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_26007(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (sub_26018( uParam0 ))
    {
        sub_26738( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
        return 1;
    }
    sub_28394( uParam0 );
    return 0;
}

void sub_26018(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_26029( uParam0 ) );
}

int sub_26029(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_1336( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_26738(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_26029( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_26788( uParam0, (uParam1^) );
    return;
}

void sub_26788(unknown uParam0, unknown uParam1)
{
    sub_26800( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_26800(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_26894( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_27438( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_26894(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
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

void sub_27438(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_26894( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_26894( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_26894( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_26894( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_26894( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_26894( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_26894( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_26894( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_26894( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_26894( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_26894( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_26894( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_26894( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_28394(unknown uParam0)
{
    REQUEST_MODEL( sub_26029( uParam0 ) );
    return;
}

void sub_31073()
{
    if (l_U720)
    {
        TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
        sub_31105( 40 );
        g_U15654[41] = 1;
    }
    else
    {
        TRIGGER_MISSION_COMPLETE_AUDIO( 63 );
        g_U15654[41] = 0;
    }
    sub_31457();
    sub_43045( 22 );
    UNLOCK_MISSION_NEWS_STORY( 22 );
    sub_46247( 3045, 3 );
    CLEAR_WANTED_LEVEL( sub_3928() );
    sub_2382();
    return;
}

void sub_31105(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_31116( uParam0 );
    if (NOT g_U34048[uVar3]._fU0)
    {
        return;
    }
    g_U34048[uVar3]._fU0 = 0;
    sub_31301();
    return;
}

int sub_31116(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_31127( uParam0 )))
    {
        sub_1336( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_31127(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 38))
    {
        return 0;
    }
    iVar4 = 52;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_31301()
{
    g_U34175._fU16._fU0--;
    sub_31334();
    return;
}

void sub_31334()
{
    if (g_U0)
    {
        return;
    }
    if (g_U34175._fU16._fU4 < g_U34175._fU16._fU0)
    {
        return;
    }
    AWARD_ACHIEVEMENT( 36 );
    return;
}

void sub_31457()
{
    sub_31466();
    return;
}

void sub_31466()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_31484();
    sub_31543( iVar2, iVar3, iVar4 );
    return;
}

void sub_31484()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_31543(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 7;
    sub_31574( iVar5, uParam0, uParam1, uParam2, "Friend_8" );
    return;
}

void sub_31574(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_31670( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_31670( ref cVar9 );
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
            sub_31670( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_31670( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_31670( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_31670( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_32247( iParam0, iVar7 );;;
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
                sub_32644( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_32644( 0, 4 );
            }
        }
    }
    if (NOT (sub_32733( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3928(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3928() );
    }
    sub_1480();
    bVar27 = true;
    uVar28 = sub_32247( iParam0, iVar7 );
    uVar29 = sub_937( iParam0 );
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
                sub_42109( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_42539();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_42624( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_42681( iParam0 );
                sub_42720( 0 );
                sub_1378( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_42828();
        }
    }
    if (bParam2)
    {
        sub_42539();
        sub_42916();
        sub_42720( 0 );
    }
    if (bParam3)
    {
        sub_42539();
        sub_42956();
        sub_42720( 0 );
        sub_1378( uVar29, 0 );
    }
    sub_824();
    return;
}

void sub_31670(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_32247(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1336( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_32644(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_32733(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_32941( uParam1 );
        break;
        case 1:
        bVar8 = sub_35019( uParam1 );
        break;
        case 2:
        bVar8 = sub_35245( uParam1 );
        break;
        case 3:
        bVar8 = sub_35395( uParam1 );
        break;
        case 4:
        bVar8 = sub_35673( uParam1 );
        break;
        case 5:
        bVar8 = sub_35976( uParam1 );
        break;
        case 6:
        bVar8 = sub_36175( uParam1 );
        break;
        case 7:
        bVar8 = sub_36401( uParam1 );
        break;
        case 8:
        bVar8 = sub_36636( uParam1 );
        break;
        case 9:
        bVar8 = sub_37011( uParam1 );
        break;
        case 10:
        bVar8 = sub_37258( uParam1 );
        break;
        case 11:
        bVar8 = sub_37397( uParam1 );
        break;
        case 12:
        bVar8 = sub_37696( uParam1 );
        break;
        case 13:
        bVar8 = sub_37924( uParam1 );
        break;
        case 14:
        bVar8 = sub_38211( uParam1 );
        break;
        case 15:
        bVar8 = sub_38493( uParam1 );
        break;
        case 16:
        bVar8 = sub_38775( uParam1 );
        break;
        case 17:
        bVar8 = sub_38976( uParam1 );
        break;
        case 18:
        bVar8 = sub_39049( uParam1 );
        break;
        case 19:
        bVar8 = sub_39263( uParam1 );
        break;
        case 20:
        bVar8 = sub_39516( uParam1 );
        break;
        case 21:
        bVar8 = sub_39763( uParam1 );
        break;
        case 22:
        bVar8 = sub_39964( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_34624( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_32247( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_40287( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_32941(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_33220( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_33220( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_33220( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_33220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_33220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_33220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_33220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_33220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_33220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_33220( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_33220( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_33220( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_33220( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_33220( iVar3, 0, 3, 1, 0, 0 );
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
        sub_33220( iVar3, 0, sub_34502(), sub_34768(), 0, 0 );
        break;
        default:
        sub_34927( "Friend 1", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Friend 1", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_33220(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_33231( uParam1 );
    sub_33405( uParam0, 0, uParam2 );
    sub_33405( uParam0, 1, uParam3 );
    sub_33405( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_31484();
    return;
}

void sub_33231(unknown uParam0)
{
    ADD_SCORE( sub_3928(), uParam0 );
    sub_33256( uParam0 );
    return;
}

void sub_33256(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1336( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_33405(unknown uParam0, int iParam1, int iParam2)
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
        sub_33562( uParam0 );
    }
    return;
}

void sub_33562(unknown uParam0)
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

int sub_34502()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_34624( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_34624(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_34768()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_34624( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_34927(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_35019(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_33220( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_34927( "Contact 2", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 2", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35245(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_33220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_34927( "Girl 3", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Girl 3", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35395(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_33220( iVar3, 0, sub_34502(), sub_34768(), 0, 0 );
        break;
        default:
        sub_34927( "Friend 4", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Friend 4", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35673(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_33220( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_33220( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_33220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_33220( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_34927( "Contact 5", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 5", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35976(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_34927( "Contact 7", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 7", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36175(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_33220( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_34927( "Contact 7b", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 7b", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36401(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_33220( iVar3, 0, sub_34502(), sub_34768(), 0, 0 );
        break;
        default:
        sub_34927( "Friend 8", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Friend 8", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36636(unknown uParam0)
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
        sub_33220( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_33220( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_33220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_33220( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_33220( iVar3, 0, sub_34502(), sub_34768(), 0, 0 );
        break;
        default:
        sub_34927( "Friend 9", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Friend 9", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37011(unknown uParam0)
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
        sub_33220( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_33220( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_33220( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_34927( "Contact 10", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_34927( "Contact 10", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37258(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_34927( "Girl 11", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Girl 11", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37397(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_33220( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_33220( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_33220( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_33220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_33220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_34927( "Contact 12", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 12", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37696(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_33220( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_34927( "Contact 13", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 13", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37924(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_33220( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_33220( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_33220( iVar3, 0, sub_34502(), sub_34768(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_34927( "Friend 15", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Friend 15", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38211(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_33220( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_33220( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_33220( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_34927( "Contact 16", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 16", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38493(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_33220( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_33220( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_33220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_34927( "Contact 18", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 18", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38775(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_34927( "Contact 19", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 19", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38976(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_34927( "Girl 20", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39049(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_34927( "Contact 21", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 21", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39263(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_33220( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_33220( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_34927( "Contact 22", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 22", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39516(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_33220( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_33220( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_33220( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_34927( "Contact 24", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 24", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39763(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_33220( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_33220( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_33220( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_34927( "Contact 25", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_34927( "Contact 25", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39964(unknown uParam0)
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
        sub_33220( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_34927( "Girl 26", 1 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_34927( "Girl 26", 0 );
        sub_33220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_40287(int iParam0, int iParam1)
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
    if (sub_40335( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_41066( iParam1 );
    }
    return;
}

int sub_40335(int iParam0, int iParam1)
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
            sub_40475( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_40475(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_40657( 0 );
    return;
}

void sub_40657(boolean bParam0)
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
        sub_40912();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_40912()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_41066(int iParam0)
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
        sub_41399( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_41399( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_41399( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_41399( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_41399( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_41399( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_41399( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_41399( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_41399( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_41399( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_41399( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_41399( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_41399( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_41399( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_41399( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_41399( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_41399( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_41399( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_41399( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_41399(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_42109(unknown uParam0, unknown uParam1)
{
    sub_42128( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_42128(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_42539()
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

int sub_42624(int iParam0, int iParam1)
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

void sub_42681(unknown uParam0)
{
    sub_723();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_42720(unknown uParam0)
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

void sub_42828()
{
    sub_42837();
    return;
}

void sub_42837()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_42916()
{
    sub_42837();
    return;
}

void sub_42956()
{
    sub_42837();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_43045(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_43132( iParam0 ))
    {
        sub_44182( iParam0 );
    }
    return;
}

int sub_43132(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_43189( ref uVar3, 1, 0, 0 );
    sub_43801( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_9765( "\n ----------------------------------------------------------------" );
    sub_8345( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_9765( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_43189(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_43242( iParam0, uParam1, uParam2 );
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
        sub_43374( iParam0 + 0 );
    }
    return;
}

void sub_43242(int iParam0, int iParam1, int iParam2)
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
        sub_43374( iParam0 + 0 );
    }
    return;
}

void sub_43374(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_43405( iParam0->_fU4 )))
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

int sub_43405(unknown uParam0)
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

void sub_43801(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_44182(unknown uParam0)
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
        sub_44393( 20, 6, 16383, 16383, ref uVar4 );
        sub_45069( ref uVar4, 7 );
        sub_45100( ref uVar4, 0 );
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
        sub_44393( 20, 7, 9, 16383, ref uVar4 );
        sub_45069( ref uVar4, 7 );
        sub_45100( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_44393(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_44417( uParam0, 0, iParam4 + 0 );
    sub_44417( uParam1, 1, iParam4 + 0 );
    sub_44417( uParam2, 2, iParam4 + 0 );
    sub_44417( uParam3, 3, iParam4 + 0 );
    sub_44417( 0, 4, iParam4 + 0 );
    sub_44417( 1, 5, iParam4 + 0 );
    sub_44417( 65535, 6, iParam4 + 0 );
    sub_44417( 0, 12, iParam4 + 0 );
    sub_44417( 0, 11, iParam4 + 0 );
    sub_44417( 0, 14, iParam4 + 0 );
    sub_44417( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_44417( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_44417( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_44417(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_45069(int iParam0, unknown uParam1)
{
    sub_44417( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_45100(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_45140())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_45827( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_45626( iVar5 );
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

int sub_45140()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_45174( 5, g_U968[I] )) == 7)
        {
            sub_45626( I );
            return 1;
        }
    }
    return 0;
}

int sub_45174(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_45626(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_45699( 39 );
    return;
}

void sub_45699(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_45827(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_45888( uParam0, g_U968[Result] ))
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

int sub_45888(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_46247(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

