void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

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
    l_U517 = 0;
    l_U566 = 0;
    l_U567 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_111();
        sub_2221();
    }
    l_U556 = {-268.24000000, -263.33710000, 15.87900000};
    LOAD_ADDITIONAL_TEXT( "FIN1C", 0 );
    sub_2969( "FIN1EAU", 6 );
    sub_3122( "FIN1EAU" );
    while (true)
    {
        WAIT( 0 );
        if (NOT (IS_CHAR_INJURED( l_U502 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3267(), l_U502, 8.00000000, 8.00000000, 0 ))
            {
                if (l_U535)
                {
                    GET_INTERIOR_FROM_CHAR( sub_3267(), ref l_U552 );
                    if (l_U552 == nil)
                    {
                        if ((TIMERB() >= 1000) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                        {
                            PRINT_NOW( "FIN1C_01", 7500, 1 );
                            l_U535 = 0;
                        }
                    }
                }
            }
        }
        else if (l_U535)
        {
            GET_INTERIOR_FROM_CHAR( sub_3267(), ref l_U552 );
            if (l_U552 == nil)
            {
                if ((TIMERB() >= 1000) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                {
                    PRINT_NOW( "FIN1C_01", 7500, 1 );
                    l_U535 = 0;
                }
            }
        }
        if (NOT g_U64768)
        {
            if (sub_3538())
            {
                sub_3735();
                g_U64768 = 1;
            }
        }
        if (l_U519)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -267.57720000, -281.48760000, 450.00000000, 450.00000000, 0 )))
            {
                sub_6839();
                if (NOT g_U15654[12])
                {
                    if (l_U526)
                    {
                        l_U566 = 4;
                    }
                    else
                    {
                        l_U566 = 3;
                    }
                }
                else
                {
                    l_U566 = 5;
                }
                l_U519 = 0;
            }
        }
        if (l_U528)
        {
            if (IS_CHAR_INJURED( l_U502 ))
            {
                l_U489 = 4;
                sub_7858();
            }
        }
        if (l_U511)
        {
            if (IS_CHAR_SHOOTING_IN_AREA( sub_3267(), -274.51140000 - 100, -282.13170000 - 100, -274.51140000 + 100, -282.13170000 + 100, 0 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U502 )))
                {
                    TASK_SMART_FLEE_CHAR( l_U502, sub_3267(), 150, -1 );
                    if (IS_GROUP_MEMBER( l_U502, sub_2253() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U502 );
                    }
                    SET_CHAR_KEEP_TASK( l_U502, 1 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U502 );
                }
                if (NOT (IS_CHAR_INJURED( l_U501 )))
                {
                    TASK_SMART_FLEE_CHAR( l_U501, sub_3267(), 150, -1 );
                    SET_CHAR_KEEP_TASK( l_U501, 1 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U501 );
                }
                if (NOT (IS_CHAR_INJURED( l_U498 )))
                {
                    TASK_SMART_FLEE_CHAR( l_U498, sub_3267(), 150, -1 );
                    SET_CHAR_KEEP_TASK( l_U498, 1 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U498 );
                }
                if (NOT (IS_CHAR_INJURED( l_U500 )))
                {
                    TASK_SMART_FLEE_CHAR( l_U500, sub_3267(), 150, -1 );
                    SET_CHAR_KEEP_TASK( l_U500, 1 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U500 );
                }
                if (NOT (IS_CHAR_INJURED( l_U499 )))
                {
                    TASK_SMART_FLEE_CHAR( l_U499, sub_3267(), 150, -1 );
                    SET_CHAR_KEEP_TASK( l_U499, 1 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U499 );
                }
                l_U489 = 3;
                sub_7858();
            }
            if (NOT l_U517)
            {
                GET_INTERIOR_FROM_CHAR( sub_3267(), ref l_U552 );
                if (l_U552 == nil)
                {
                    if (NOT (IS_CHAR_INJURED( l_U498 )))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U498, sub_3267(), 0 ))
                        {
                            l_U489 = 1;
                            sub_7858();
                        }
                    }
                    else
                    {
                        l_U489 = 1;
                        sub_7858();
                    }
                    if (NOT (IS_CHAR_INJURED( l_U499 )))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U499, sub_3267(), 0 ))
                        {
                            l_U489 = 1;
                            sub_7858();
                        }
                    }
                    else
                    {
                        l_U489 = 1;
                        sub_7858();
                    }
                    if (NOT (IS_CHAR_INJURED( l_U500 )))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U500, sub_3267(), 0 ))
                        {
                            l_U489 = 1;
                            sub_7858();
                        }
                    }
                    else
                    {
                        l_U489 = 1;
                        sub_7858();
                    }
                    if (NOT (IS_CHAR_INJURED( l_U501 )))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U501, sub_3267(), 0 ))
                        {
                            l_U489 = 1;
                            sub_7858();
                        }
                    }
                    else
                    {
                        l_U489 = 1;
                        sub_7858();
                    }
                }
            }
        }
        if (l_U512)
        {
            if (NOT l_U532)
            {
                GET_TIME_OF_DAY( ref l_U491, ref l_U492 );
                if (l_U533)
                {
                    if (NOT l_U534)
                    {
                        if (l_U491 > 18)
                        {
                            array(ref uVar2._fU0._fU0, 3);
                            ref uVar2._fU0;
                            ref uVar2;
                            iVar9 = 0;
                            sub_9076( iVar9, 51, 16383, 16383, ref uVar2 );
                            sub_9420( ref uVar2, 1 );
                            sub_9448( ref uVar2, 0 );
                            sub_9475( ref uVar2 );
                            l_U494 = 21;
                            l_U534 = 1;
                        }
                    }
                }
                else
                {
                    l_U494 = 18;
                }
                if (l_U491 > l_U494)
                {
                    if (NOT l_U538)
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U501 ))) AND ((NOT (IS_CHAR_INJURED( l_U500 ))) AND ((NOT (IS_CHAR_INJURED( l_U498 ))) AND (NOT (IS_CHAR_INJURED( l_U499 ))))))
                        {
                            if ((IS_CHAR_ON_SCREEN( l_U501 )) || ((IS_CHAR_ON_SCREEN( l_U500 )) || ((IS_CHAR_ON_SCREEN( l_U498 )) || (IS_CHAR_ON_SCREEN( l_U499 )))))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -274.47630000, -280.65370000, 100, 100, 0 ))
                                {
                                    if (sub_10453( 1, 1 ))
                                    {
                                        l_U517 = 1;
                                    }
                                }
                            }
                            else
                            {
                                l_U517 = 0;
                            }
                        }
                    }
                    if (l_U517)
                    {
                        if ((TIMERA() >= 1500) AND (l_U514))
                        {
                            if ((IS_SCREEN_FADED_IN()) AND (sub_10792()))
                            {
                                DO_SCREEN_FADE_OUT( 500 );
                                while (IS_SCREEN_FADING_OUT())
                                {
                                    WAIT( 0 );
                                }
                                SET_WIDESCREEN_BORDERS( 0 );
                                DISPLAY_RADAR( 1 );
                                DISPLAY_HUD( 1 );
                                if (l_U516)
                                {
                                    if (IS_CHAR_IN_ANY_HELI( sub_3267() ))
                                    {
                                        GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
                                        SET_CAR_COORDINATES( l_U508, l_U553._fU0, l_U553._fU4, l_U553._fU8 );
                                        SET_CAR_HEADING( l_U508, l_U559 );
                                        FREEZE_CAR_POSITION( l_U508, 0 );
                                    }
                                    else if (IS_CHAR_IN_ANY_CAR( sub_3267() ))
                                    {
                                        GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
                                        SET_CAR_COORDINATES( l_U508, l_U553._fU0, l_U553._fU4, l_U553._fU8 );
                                        SET_CAR_HEADING( l_U508, l_U559 );
                                    }
                                    else
                                    {
                                        SET_CHAR_COORDINATES( sub_3267(), l_U553._fU0, l_U553._fU4, l_U553._fU8 - 1 );
                                    }
                                }
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                END_CAM_COMMANDS( ref l_U490 );
                                l_U510 = 0;
                                SET_PLAYER_CONTROL_ADVANCED( sub_3744(), 1, 1, 1 );
                                if (DOES_CHAR_EXIST( l_U499 ))
                                {
                                    DELETE_CHAR( ref l_U499 );
                                }
                                if (DOES_CHAR_EXIST( l_U498 ))
                                {
                                    DELETE_CHAR( ref l_U498 );
                                }
                                if (DOES_CHAR_EXIST( l_U500 ))
                                {
                                    DELETE_CHAR( ref l_U500 );
                                }
                                if (DOES_CHAR_EXIST( l_U501 ))
                                {
                                    DELETE_CHAR( ref l_U501 );
                                }
                                if (DOES_VEHICLE_EXIST( l_U503[3] ))
                                {
                                    DELETE_CAR( ref l_U503[3] );
                                }
                                LOAD_SCENE( -272.64070000, -265.45640000, 13.57020000 );
                                DO_SCREEN_FADE_IN( 500 );
                                while (IS_SCREEN_FADING_IN())
                                {
                                    WAIT( 0 );
                                }
                                SET_MAX_WANTED_LEVEL( 6 );
                                l_U489 = 2;
                                sub_7858();
                            }
                        }
                        switch (l_U567)
                        {
                            case 0:
                            l_U538 = 1;
                            SET_MAX_WANTED_LEVEL( 0 );
                            DO_SCREEN_FADE_OUT( 500 );
                            while (IS_SCREEN_FADING_OUT())
                            {
                                WAIT( 0 );
                            }
                            SET_PLAYER_CONTROL_ADVANCED( sub_3744(), 0, 1, 1 );
                            REQUEST_CAR_RECORDING( 876 );
                            BEGIN_CAM_COMMANDS( ref l_U490 );
                            l_U510 = 1;
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3267(), -253.84780000, -281.16420000, 13.91429000, 100, 100, 100, 0 ))
                            {
                                if (IS_CHAR_IN_ANY_HELI( sub_3267() ))
                                {
                                    GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
                                    GET_CAR_COORDINATES( l_U508, ref l_U553._fU0, ref l_U553._fU4, ref l_U553._fU8 );
                                    GET_CAR_HEADING( l_U508, ref l_U559 );
                                    FREEZE_CAR_POSITION( l_U508, 1 );
                                    SET_CAR_COORDINATES( l_U508, -263.06290000, -246.95490000, 30.60070000 );
                                    SET_CAR_HEADING( l_U508, 304.51440000 );
                                    l_U516 = 1;
                                }
                                else if (NOT (IS_CHAR_IN_ANY_CAR( sub_3267() )))
                                {
                                    GET_CHAR_COORDINATES( sub_3267(), ref l_U553._fU0, ref l_U553._fU4, ref l_U553._fU8 );
                                    GET_CHAR_HEADING( sub_3267(), ref l_U559 );
                                    SET_CHAR_COORDINATES( sub_3267(), -254.85210000, -249.71720000, 13.57170000 );
                                    l_U516 = 1;
                                }
                                else
                                {
                                    GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
                                    GET_CAR_COORDINATES( l_U508, ref l_U553._fU0, ref l_U553._fU4, ref l_U553._fU8 );
                                    GET_CAR_HEADING( l_U508, ref l_U559 );
                                    SET_CAR_COORDINATES( l_U508, -254.85210000, -249.71720000, 13.57170000 );
                                    SET_CAR_HEADING( l_U508, 52.56710000 );
                                    l_U516 = 1;
                                }
                            }
                            CREATE_CAM( 14, ref l_U548 );
                            SET_CAM_POS( l_U548, -253.84780000, -281.16420000, 13.91429000 );
                            SET_CAM_ROT( l_U548, 19.74267000, -0.00000000, 90.36063000 );
                            SET_CAM_FOV( l_U548, 50.39999000 );
                            SET_CAM_ACTIVE( l_U548, 1 );
                            SET_CAM_PROPAGATE( l_U548, 1 );
                            CLEAR_AREA( -253.84780000, -281.16420000, 13.91429000, 100, 1 );
                            DISPLAY_RADAR( 0 );
                            DISPLAY_HUD( 0 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            DELETE_CAR( ref l_U503[0] );
                            DELETE_CAR( ref l_U503[1] );
                            DELETE_CAR( ref l_U503[2] );
                            DELETE_CAR( ref l_U503[3] );
                            REQUEST_MODEL( 1376298265 );
                            REQUEST_MODEL( -2030171296 );
                            while ((NOT (HAS_MODEL_LOADED( -2030171296 ))) || (NOT (HAS_MODEL_LOADED( 1376298265 ))))
                            {
                                WAIT( 0 );
                            }
                            CREATE_CAR( 1376298265, -268.36400000, -269.44080000, 13.41630000, ref l_U503[0], 1 );
                            SET_CAR_HEADING( l_U503[0], 177.33220000 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U503[0] );
                            SET_CAR_IN_CUTSCENE( l_U503[0], 1 );
                            while (NOT (sub_12389( ref l_U503[1] )))
                            {
                                WAIT( 0 );
                            }
                            SET_CAR_COORDINATES( l_U503[1], -268.65870000, -275.56600000, 13.32140000 );
                            SET_CAR_HEADING( l_U503[1], 177.50190000 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U503[1] );
                            SET_CAR_IN_CUTSCENE( l_U503[1], 1 );
                            CREATE_CAR( 1376298265, -268.58600000, -293.68560000, 13.11190000, ref l_U503[2], 1 );
                            SET_CAR_HEADING( l_U503[2], 179.71150000 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U503[2] );
                            SET_CAR_IN_CUTSCENE( l_U503[2], 1 );
                            CREATE_CAR( -2030171296, -268.72480000, -284.44500000, 13.19420000, ref l_U503[3], 1 );
                            SET_CAR_HEADING( l_U503[3], 181.04740000 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U503[3] );
                            if (g_U15654[12])
                            {
                                TURN_OFF_VEHICLE_EXTRA( l_U503[3], 5, 0 );
                            }
                            TURN_OFF_VEHICLE_EXTRA( l_U503[3], 1, 1 );
                            TURN_OFF_VEHICLE_EXTRA( l_U503[3], 2, 0 );
                            TURN_OFF_VEHICLE_EXTRA( l_U503[3], 3, 0 );
                            TURN_OFF_VEHICLE_EXTRA( l_U503[3], 4, 0 );
                            TURN_OFF_VEHICLE_EXTRA( l_U503[3], 6, 0 );
                            TURN_OFF_VEHICLE_EXTRA( l_U503[3], 7, 0 );
                            TURN_OFF_VEHICLE_EXTRA( l_U503[3], 8, 0 );
                            TURN_OFF_VEHICLE_EXTRA( l_U503[3], 9, 0 );
                            CHANGE_CAR_COLOUR( l_U503[3], 6, 0 );
                            SET_EXTRA_CAR_COLOURS( l_U503[3], 7, 0 );
                            SET_CAR_IN_CUTSCENE( l_U503[3], 1 );
                            if (NOT (IS_CHAR_INJURED( l_U498 )))
                            {
                                CLEAR_CHAR_TASKS( l_U498 );
                                SET_CHAR_COORDINATES( l_U498, -274.51140000, -282.13170000, 13.28000000 );
                                SET_CHAR_HEADING( l_U498, 338.79460000 );
                                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                TASK_ENTER_CAR_AS_DRIVER( l_U498, l_U503[3], 15000 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U499 )))
                            {
                                CLEAR_CHAR_TASKS( l_U499 );
                                SET_CHAR_COORDINATES( l_U499, -273.34540000, -282.29730000, 13.30690000 );
                                SET_CHAR_HEADING( l_U499, 72.94980000 );
                                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                TASK_ENTER_CAR_AS_PASSENGER( l_U499, l_U503[3], 15000, 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U500 )))
                            {
                                CLEAR_CHAR_TASKS( l_U500 );
                                SET_CHAR_COORDINATES( l_U500, -274.47630000, -280.65370000, 13.34050000 );
                                SET_CHAR_HEADING( l_U500, 256.94130000 );
                                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                TASK_ENTER_CAR_AS_PASSENGER( l_U500, l_U503[3], 15000, 1 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U501 )))
                            {
                                CLEAR_CHAR_TASKS( l_U501 );
                                SET_CHAR_COORDINATES( l_U501, -273.16110000, -280.55500000, 13.41537000 );
                                SET_CHAR_HEADING( l_U501, 158.63360000 );
                                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                TASK_ENTER_CAR_AS_PASSENGER( l_U501, l_U503[3], 15000, 2 );
                            }
                            SETTIMERA( 0 );
                            l_U514 = 1;
                            CLEAR_PRINTS();
                            LOAD_SCENE( -272.64070000, -265.45640000, 13.57020000 );
                            DO_SCREEN_FADE_IN( 500 );
                            while (IS_SCREEN_FADING_IN())
                            {
                                WAIT( 0 );
                            }
                            l_U567 = 1;
                            break;
                            case 1:
                            CLEAR_AREA( -253.84780000, -281.16420000, 13.91429000, 100, 1 );
                            if ((NOT (IS_CHAR_INJURED( l_U501 ))) AND ((NOT (IS_CHAR_INJURED( l_U500 ))) AND ((NOT (IS_CHAR_INJURED( l_U498 ))) AND (NOT (IS_CHAR_INJURED( l_U499 ))))))
                            {
                                if ((IS_CHAR_SITTING_IN_ANY_CAR( l_U501 )) AND ((IS_CHAR_SITTING_IN_ANY_CAR( l_U500 )) AND ((IS_CHAR_SITTING_IN_ANY_CAR( l_U498 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U499 )))))
                                {
                                    if ((IS_VEH_DRIVEABLE( l_U503[3] )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 876 )))
                                    {
                                        START_PLAYBACK_RECORDED_CAR( l_U503[3], 876 );
                                        l_U567 = 2;
                                    }
                                }
                            }
                            break;
                            case 2:
                            CLEAR_AREA( -253.84780000, -281.16420000, 13.91429000, 100, 1 );
                            if (IS_VEH_DRIVEABLE( l_U503[3] ))
                            {
                                if (NOT (IS_CAR_ON_SCREEN( l_U503[3] )))
                                {
                                    DO_SCREEN_FADE_OUT( 500 );
                                    while (IS_SCREEN_FADING_OUT())
                                    {
                                        WAIT( 0 );
                                    }
                                    DELETE_CHAR( ref l_U499 );
                                    DELETE_CHAR( ref l_U498 );
                                    DELETE_CHAR( ref l_U500 );
                                    DELETE_CAR( ref l_U503[3] );
                                    SET_GAME_CAM_HEADING( 0.00000000 );
                                    DISPLAY_RADAR( 1 );
                                    DISPLAY_HUD( 1 );
                                    if (l_U516)
                                    {
                                        if (IS_CHAR_IN_ANY_HELI( sub_3267() ))
                                        {
                                            GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
                                            SET_CAR_COORDINATES( l_U508, l_U553._fU0, l_U553._fU4, l_U553._fU8 );
                                            SET_CAR_HEADING( l_U508, l_U559 );
                                            FREEZE_CAR_POSITION( l_U508, 0 );
                                        }
                                        else if (IS_CHAR_IN_ANY_CAR( sub_3267() ))
                                        {
                                            GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
                                            SET_CAR_COORDINATES( l_U508, l_U553._fU0, l_U553._fU4, l_U553._fU8 );
                                            SET_CAR_HEADING( l_U508, l_U559 );
                                        }
                                        else
                                        {
                                            SET_CHAR_COORDINATES( sub_3267(), l_U553._fU0, l_U553._fU4, l_U553._fU8 - 1 );
                                        }
                                    }
                                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                    END_CAM_COMMANDS( ref l_U490 );
                                    l_U510 = 0;
                                    SET_PLAYER_CONTROL_ADVANCED( sub_3744(), 1, 1, 1 );
                                    DO_SCREEN_FADE_IN( 500 );
                                    while (IS_SCREEN_FADING_IN())
                                    {
                                        WAIT( 0 );
                                    }
                                    SET_MAX_WANTED_LEVEL( 6 );
                                    l_U489 = 2;
                                    sub_7858();
                                }
                            }
                            break;
                        }
                    }
                    else if (DOES_CHAR_EXIST( l_U499 ))
                    {
                        DELETE_CHAR( ref l_U499 );
                    }
                    if (DOES_CHAR_EXIST( l_U498 ))
                    {
                        DELETE_CHAR( ref l_U498 );
                    }
                    if (DOES_CHAR_EXIST( l_U500 ))
                    {
                        DELETE_CHAR( ref l_U500 );
                    }
                    if (DOES_CHAR_EXIST( l_U501 ))
                    {
                        DELETE_CHAR( ref l_U501 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U503[3] ))
                    {
                        DELETE_CAR( ref l_U503[3] );
                    }
                    l_U489 = 2;
                    sub_7858();;
                }
            }
        }
        switch (l_U566)
        {
            case 0:
            if (NOT sub_3538())
            {
                if (NOT g_U9893._fU24)
                {
                    if (g_U64768)
                    {
                        sub_14561();
                    }
                }
            }
            if (g_U15654[12])
            {
                if ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -241.63760000, -178.24850000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -240.76440000, -195.66720000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -240.58940000, -217.62360000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -204.68160000, -234.70450000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -221.56230000, -234.89260000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -244.65270000, -234.66710000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -282.34630000, -232.55730000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -263.51720000, -231.99080000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -263.03690000, -251.10380000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -263.08310000, -271.20500000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -263.16130000, -293.78740000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -222.72920000, -303.89650000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -236.27340000, -304.89290000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -256.09580000, -311.22940000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -244.58280000, -330.65610000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -232.76160000, -350.76730000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -217.84090000, -376.62280000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -203.07210000, -401.58020000, 25.00000000, 25.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -188.84510000, -426.09700000, 25.00000000, 25.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -175.87190000, -450.31470000, 25.00000000, 25.00000000, 0 )))))))))))))))))))))
                {
                    GET_TIME_OF_DAY( ref l_U491, ref l_U492 );
                    if (l_U491 > 18)
                    {
                        l_U489 = 2;
                        sub_7858();
                    }
                    if (IS_SCREEN_FADING_IN())
                    {
                        while (IS_SCREEN_FADING_IN())
                        {
                            WAIT( 0 );
                        }
                    }
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    FORCE_WEATHER_NOW( 1 );
                    l_U512 = 1;
                    l_U566 = 4;
                }
                FORCE_WEATHER( 1 );
                l_U512 = 1;
                l_U566 = 4;
            }
            else if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3267(), 1406.32800000, 570.89350000, 30.47570000, 25.00000000, 25.00000000, 10.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3267(), 1406.18700000, 587.22340000, 30.47300000, 25.00000000, 25.00000000, 10.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3267(), 1406.52400000, 605.83040000, 31.23170000, 25.00000000, 25.00000000, 10.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3267(), 1406.80100000, 691.81590000, 32.76160000, 25.00000000, 25.00000000, 10.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3267(), 1406.42500000, 667.84530000, 33.94540000, 25.00000000, 25.00000000, 10.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3267(), 1406.38300000, 648.77030000, 33.93570000, 25.00000000, 25.00000000, 10.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3267(), 1406.79900000, 623.36790000, 33.05580000, 25.00000000, 25.00000000, 10.00000000, 0 ))))))))
            {
                while (NOT (sub_16479( 10, ref l_U502, 1346.11100000, 620.02870000, 35.96340000, 103.19950000 )))
                {
                    WAIT( 0 );
                }
            }
            else
            {
                while (NOT (sub_16479( 10, ref l_U502, 1394.34100000, 622.60090000, 32.92740000, 307.95230000 )))
                {
                    WAIT( 0 );
                }
            }
            SET_CHAR_RELATIONSHIP( l_U502, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U502, 1, 0, 2 );
            SET_CHAR_COMPONENT_VARIATION( l_U502, 2, 0, 2 );
            COPY_GROUP_CHAR_DECISION_MAKER( 65537, ref l_U509 );
            SET_GROUP_CHAR_DECISION_MAKER( l_U502, l_U509 );
            l_U528 = 1;
            SET_PED_DIES_WHEN_INJURED( l_U502, 1 );
            sub_18417( 0, sub_3267(), "Niko", 0 );
            sub_18417( 4, l_U502, "KATE_MCREARY", 0 );
            ADD_BLIP_FOR_CHAR( l_U502, ref l_U497 );
            SET_BLIP_AS_FRIENDLY( l_U497, 1 );
            SET_ROUTE( l_U497, 1 );
            PRINT_NOW( "FIN1C_22", 7500, 1 );
            FORCE_WEATHER( 1 );
            l_U512 = 1;
            l_U566 = 1;;
            break;
            case 1:
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_3744(), 0 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U497 )))
                {
                    PRINT_NOW( "FIN1C_22", 7500, 1 );
                    ADD_BLIP_FOR_CHAR( l_U502, ref l_U497 );
                    SET_ROUTE( l_U497, 1 );
                    SET_BLIP_AS_FRIENDLY( l_U497, 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U502 )))
                {
                    if ((NOT (sub_18848( sub_3267() ))) AND ((NOT (IS_CHAR_IN_ANY_HELI( sub_3267() ))) AND (LOCATE_CHAR_IN_CAR_CHAR_2D( sub_3267(), l_U502, 15.00000000, 15.00000000, 0 ))))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3267() ))
                        {
                            GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
                            if ((IS_CAR_PASSENGER_SEAT_FREE( l_U508, 2 )) || ((IS_CAR_PASSENGER_SEAT_FREE( l_U508, 1 )) || (IS_CAR_PASSENGER_SEAT_FREE( l_U508, 0 ))))
                            {
                                if (NOT l_U521)
                                {
                                    PRINT_HELP_FOREVER( "FIN1C_26" );
                                    l_U521 = 1;
                                }
                            }
                        }
                        if (IS_PLAYER_PRESSING_HORN( sub_3744() ))
                        {
                            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3267(), 0 );
                            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3267() ))
                            {
                                GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
                                if ((IS_CAR_PASSENGER_SEAT_FREE( l_U508, 2 )) || ((IS_CAR_PASSENGER_SEAT_FREE( l_U508, 1 )) || (IS_CAR_PASSENGER_SEAT_FREE( l_U508, 0 ))))
                                {
                                    CLEAR_PRINTS();
                                    CLEAR_HELP();
                                    GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U508, 0 ))
                                    {
                                        TASK_ENTER_CAR_AS_PASSENGER( l_U502, l_U508, -2, 0 );
                                    }
                                    if (NOT (IS_GROUP_MEMBER( l_U502, sub_2253() )))
                                    {
                                        SET_GROUP_MEMBER( sub_2253(), l_U502 );
                                    }
                                    TASK_LOOK_AT_CHAR( sub_3267(), l_U502, 6000, 0 );
                                    l_U522[0] = 0;
                                    l_U522[1] = 0;
                                    l_U566 = 2;
                                }
                            }
                        }
                    }
                    else if (l_U521)
                    {
                        CLEAR_HELP();
                        l_U521 = 0;
                    }
                    if (NOT l_U522[0])
                    {
                        if (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_3267(), l_U502, 7.00000000, 7.00000000, 0 ))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U502, sub_3267() );
                            sub_19610( "FIN1E_ARRFNL", ref l_U560, 7, 1 );
                            l_U522[0] = 1;
                        }
                    }
                    else if (NOT l_U522[1])
                    {
                        if (NOT (sub_20611( l_U560 )))
                        {
                            PRINT_NOW( "FIN1C_25", 7500, 1 );
                            l_U522[1] = 1;
                        }
                    }
                }
            }
            else if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (DOES_BLIP_EXIST( l_U497 )))
            {
                PRINT_NOW( "FIN1C_13", 7500, 1 );
                REMOVE_BLIP( l_U497 );
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U502 )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U502, sub_2253() )))
                {
                    if (NOT l_U542)
                    {
                        PRINT_NOW( "FIN1C_23", 7500, 1 );
                        l_U542 = 1;
                    }
                    if (NOT l_U529)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3267(), l_U502, 12.00000000, 12.00000000, 0 ))
                        {
                            SET_GROUP_MEMBER( sub_2253(), l_U502 );
                            l_U529 = 1;
                        }
                    }
                }
                else if (l_U529)
                {
                    l_U542 = 0;
                    l_U529 = 0;
                }
                if (NOT l_U536)
                {
                    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3267() )))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U502, sub_2253() )))
                        {
                            SET_GROUP_MEMBER( sub_2253(), l_U502 );
                        }
                        CLEAR_CHAR_TASKS( l_U502 );
                        l_U536 = 1;
                    }
                }
                if (NOT l_U522[0])
                {
                    if (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_3267(), l_U502, 7.00000000, 7.00000000, 0 ))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U502, sub_3267() );
                        sub_19610( "FIN1E_ARRFNL", ref l_U560, 7, 1 );
                        l_U522[0] = 1;
                    }
                }
                else if (NOT l_U522[1])
                {
                    if (NOT (sub_20611( l_U560 )))
                    {
                        PRINT_NOW( "FIN1C_25", 7500, 1 );
                        l_U522[1] = 1;
                    }
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( l_U502 ))
                {
                    l_U533 = 1;
                    REMOVE_BLIP( l_U497 );
                    PRINT_NOW( "FIN1C_01", 7500, 1 );
                    ADD_BLIP_FOR_COORD( l_U556._fU0, l_U556._fU4, l_U556._fU8, ref l_U496 );
                    sub_21423( ref l_U496, -313.93130000, -238.87070000, 11.84880000, 90.04060000 );
                    SET_ROUTE( l_U496, 1 );
                    l_U513 = 1;
                    l_U566 = 3;
                }
            }
            break;
            case 3:
            if (NOT l_U519)
            {
                if (LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -267.57720000, -281.48760000, 450.00000000, 450.00000000, 0 ))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_3267() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3267(), ref l_U508 );
                    }
                    if (NOT l_U520)
                    {
                        REQUEST_MODEL( 1376298265 );
                        REQUEST_MODEL( -2030171296 );
                        l_U520 = 1;
                    }
                    if ((HAS_MODEL_LOADED( -2030171296 )) AND (HAS_MODEL_LOADED( 1376298265 )))
                    {
                        sub_21664();
                        l_U520 = 0;
                        l_U519 = 1;
                    }
                }
            }
            if (NOT l_U526)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_3744(), 0 )))
                {
                    if (l_U541)
                    {
                        CLEAR_THIS_PRINT( "FIN1C_13" );
                        l_U541 = 0;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U502 )))
                    {
                        BLOCK_CHAR_AMBIENT_ANIMS( l_U502, 1 );
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3267(), l_U502, 12.00000000, 12.00000000, 0 )))
                        {
                            if (l_U527)
                            {
                                if (sub_20611( l_U560 ))
                                {
                                    sub_23176( ref l_U560 );
                                    l_U539 = 1;
                                }
                            }
                        }
                        else if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3267(), l_U502, 8.00000000, 8.00000000, 0 ))
                        {
                            if (l_U525)
                            {
                                if (NOT (IS_GROUP_MEMBER( l_U502, sub_2253() )))
                                {
                                    SET_GROUP_MEMBER( sub_2253(), l_U502 );
                                }
                                GET_INTERIOR_FROM_CHAR( sub_3267(), ref l_U552 );
                                if (l_U552 == nil)
                                {
                                    l_U535 = 1;
                                    REMOVE_BLIP( l_U497 );
                                    if (NOT (DOES_BLIP_EXIST( l_U496 )))
                                    {
                                        ADD_BLIP_FOR_COORD( l_U556._fU0, l_U556._fU4, l_U556._fU8, ref l_U496 );
                                        sub_21423( ref l_U496, -313.93130000, -238.87070000, 11.84880000, 90.04060000 );
                                        SET_ROUTE( l_U496, 1 );
                                        SETTIMERB( 0 );
                                    }
                                    l_U525 = 0;
                                }
                            }
                            if (TIMERB() >= 7500)
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (l_U539)
                                    {
                                        if (l_U527)
                                        {
                                            if (sub_23910( l_U560 ))
                                            {
                                                PRINTNL();
                                                PRINTNL();
                                                PRINTNL();
                                                PRINTSTRING( "ARGGHHHHH" );
                                                PRINTNL();
                                                PRINTNL();
                                                PRINTNL();
                                                if (g_U33840)
                                                {
                                                    sub_24029( "FIN1E_BANT2", ref l_U560, 6, 1 );
                                                }
                                                else
                                                {
                                                    sub_24029( "FIN1E_BANT1", ref l_U560, 6, 1 );
                                                }
                                                l_U539 = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (NOT (IS_GROUP_MEMBER( l_U502, sub_2253() )))
                        {
                            if (NOT l_U525)
                            {
                                REMOVE_BLIP( l_U496 );
                                SET_ROUTE( l_U496, 0 );
                                if (NOT (DOES_BLIP_EXIST( l_U497 )))
                                {
                                    ADD_BLIP_FOR_CHAR( l_U502, ref l_U497 );
                                    SET_BLIP_AS_FRIENDLY( l_U497, 1 );
                                }
                                PRINT_NOW( "FIN1C_23", 7500, 1 );
                                l_U525 = 1;
                            }
                        }
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3267(), l_U502, 8.00000000, 8.00000000, 0 )) AND ((l_U540) AND (NOT IS_MESSAGE_BEING_DISPLAYED())))
                        {
                            GET_INTERIOR_FROM_CHAR( sub_3267(), ref l_U552 );
                            if (l_U552 == nil)
                            {
                                if (NOT l_U525)
                                {
                                    l_U535 = 1;
                                    if (NOT (DOES_BLIP_EXIST( l_U496 )))
                                    {
                                        ADD_BLIP_FOR_COORD( l_U556._fU0, l_U556._fU4, l_U556._fU8, ref l_U496 );
                                        sub_21423( ref l_U496, -313.93130000, -238.87070000, 11.84880000, 90.04060000 );
                                        SET_ROUTE( l_U496, 1 );
                                        SETTIMERB( 0 );
                                    }
                                }
                            }
                            if (TIMERB() >= 7500)
                            {
                                if (sub_23910( l_U560 ))
                                {
                                    if (g_U33840)
                                    {
                                        sub_24029( "FIN1E_BANT2", ref l_U560, 6, 1 );
                                    }
                                    else
                                    {
                                        sub_24029( "FIN1E_BANT1", ref l_U560, 6, 1 );
                                    }
                                }
                                l_U540 = 0;
                            }
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U502 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3267(), l_U502, 8.00000000, 8.00000000, 0 )) AND (IS_GROUP_MEMBER( l_U502, sub_2253() )))
                        {
                            if (NOT ((g_U8220 == 2) || ((g_U8220 == 3) || (g_U8220 == 4))))
                            {
                                if ((TIMERB() >= 7500) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (l_U531)))
                                {
                                    sub_24746( 1 );
                                    if (l_U527)
                                    {
                                        if (g_U33840)
                                        {
                                            sub_24029( "FIN1E_BANT2", ref l_U560, 6, 1 );
                                        }
                                        else
                                        {
                                            sub_24029( "FIN1E_BANT1", ref l_U560, 6, 1 );
                                        }
                                    }
                                    l_U531 = 0;
                                }
                            }
                            else if (NOT l_U531)
                            {
                                if (l_U527)
                                {
                                    sub_23176( ref l_U560 );
                                }
                                if (g_U8220 == 4)
                                {
                                    if (sub_3660())
                                    {
                                        sub_19610( "FIN1E_NICE", ref l_U560, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_19610( "FIN1E_SHIT", ref l_U560, 7, 1 );
                                    }
                                }
                                else if (g_U8220 == 3)
                                {
                                    if (sub_3608())
                                    {
                                        sub_19610( "FIN1E_NICE", ref l_U560, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_19610( "FIN1E_SHIT", ref l_U560, 7, 1 );
                                    }
                                }
                                else if (g_U8220 == 2)
                                {
                                    if (sub_3547())
                                    {
                                        sub_19610( "FIN1E_NICE", ref l_U560, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_19610( "FIN1E_SHIT", ref l_U560, 7, 1 );
                                    }
                                };;;
                                l_U531 = 1;
                            }
                            if ((TIMERB() >= 7500) AND ((NOT (IS_THIS_PRINT_BEING_DISPLAYED( "FIN1C_01", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))) AND (NOT l_U527)))
                            {
                                if (NOT l_U537)
                                {
                                    if (sub_3538())
                                    {
                                        sub_19610( "FIN1E_ARRS", ref l_U560, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_19610( "FIN1E_ARRNS", ref l_U560, 7, 1 );
                                    }
                                    l_U537 = 1;
                                }
                                if (NOT (sub_20611( l_U560 )))
                                {
                                    if (g_U33840)
                                    {
                                        sub_19610( "FIN1E_BANT2", ref l_U560, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_19610( "FIN1E_BANT1", ref l_U560, 7, 1 );
                                    }
                                    l_U527 = 1;
                                }
                            }
                        }
                    }
                    l_U543 = 0;
                    if ((NOT (IS_CHAR_INJURED( l_U498 ))) AND (NOT (IS_CHAR_INJURED( l_U502 ))))
                    {
                        if ((NOT (sub_18848( sub_3267() ))) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U502, l_U556._fU0, l_U556._fU4, l_U556._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3267(), l_U556._fU0, l_U556._fU4, l_U556._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))))
                        {
                            l_U543 = 1;
                        }
                        if ((NOT (sub_18848( sub_3267() ))) AND ((LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U502, l_U498, 10.00000000, 10.00000000, 5.50000000, 0 )) AND (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_3267(), l_U498, 10.00000000, 10.00000000, 5.50000000, 0 ))))
                        {
                            l_U543 = 1;
                        }
                        if (l_U543)
                        {
                            if (sub_10453( 1, 1 ))
                            {
                                if (NOT l_U526)
                                {
                                    while (NOT l_U530)
                                    {
                                        sub_25776();
                                        WAIT( 0 );
                                    }
                                    if (NOT sub_3538())
                                    {
                                        l_U493 = 0;
                                        l_U530 = 0;
                                        l_U515 = 0;
                                        l_U566 = 4;
                                    }
                                    else
                                    {
                                        l_U566 = 6;
                                    }
                                    l_U526 = 1;
                                }
                            }
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U502 )))
                {
                    if (NOT (IS_GROUP_MEMBER( l_U502, sub_2253() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3267(), l_U502, 8.00000000, 8.00000000, 0 ))
                        {
                            if (DOES_BLIP_EXIST( l_U497 ))
                            {
                                REMOVE_BLIP( l_U497 );
                            }
                            SET_GROUP_MEMBER( sub_2253(), l_U502 );
                        }
                    }
                }
                if (NOT (sub_23910( l_U560 )))
                {
                    sub_31081( ref l_U560 );
                    l_U540 = 1;
                }
                if (DOES_BLIP_EXIST( l_U496 ))
                {
                    REMOVE_BLIP( l_U496 );
                }
                if (NOT l_U541)
                {
                    PRINT_NOW( "FIN1C_13", 7500, 1 );
                    l_U541 = 1;
                }
            }
            break;
            case 4:
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_3744(), 0 )))
            {
                l_U518 = 0;
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT (sub_31733( "FIN1C_06", "FIN1C_07", "FIN1C_08", "FIN1C_09", "FIN1C_10", "FIN1C_11", "FIN1C_14", "FIN1C_15", "FIN1C_16", "FIN1C_17", "FIN1C_18", "FIN1C_19", "FIN1C_20", "FIN1C_21", "FIN1C_27" )))
                    {
                        if (l_U513)
                        {
                            if (DOES_BLIP_EXIST( l_U496 ))
                            {
                                REMOVE_BLIP( l_U496 );
                            }
                            l_U513 = 0;
                        }
                        if (NOT l_U519)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -267.57720000, -281.48760000, 450.00000000, 450.00000000, 0 ))
                            {
                                if (IS_CHAR_IN_ANY_CAR( sub_3267() ))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3267(), ref l_U508 );
                                }
                                if (NOT l_U520)
                                {
                                    REQUEST_MODEL( 1376298265 );
                                    REQUEST_MODEL( -2030171296 );
                                    l_U520 = 1;
                                }
                                if ((HAS_MODEL_LOADED( -2030171296 )) AND (HAS_MODEL_LOADED( 1376298265 )))
                                {
                                    sub_21664();
                                    if (IS_SCREEN_FADED_OUT())
                                    {
                                        DO_SCREEN_FADE_IN( 500 );
                                    }
                                    l_U520 = 0;
                                    l_U519 = 1;
                                }
                            }
                        }
                    }
                    else if (NOT l_U513)
                    {
                        GET_INTERIOR_FROM_CHAR( sub_3267(), ref l_U552 );
                        if ((l_U552 == nil) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                        {
                            CLEAR_PRINTS();
                            GET_INTERIOR_FROM_CHAR( sub_3267(), ref l_U552 );
                            if (l_U552 == nil)
                            {
                                l_U535 = 1;
                                if (NOT (DOES_BLIP_EXIST( l_U496 )))
                                {
                                    ADD_BLIP_FOR_COORD( l_U556._fU0, l_U556._fU4, l_U556._fU8, ref l_U496 );
                                    sub_21423( ref l_U496, -313.93130000, -238.87070000, 11.84880000, 90.04060000 );
                                    SET_ROUTE( l_U496, 1 );
                                    SETTIMERB( 0 );
                                }
                            }
                            l_U566 = 5;
                            l_U513 = 1;
                        }
                    }
                }
            }
            else if (NOT l_U518)
            {
                if (DOES_BLIP_EXIST( l_U496 ))
                {
                    REMOVE_BLIP( l_U496 );
                }
                CLEAR_PRINTS();
                PRINT_NOW( "FIN1C_13", 7500, 1 );
                l_U513 = 0;
                l_U518 = 1;
            }
            break;
            case 5:
            if ((NOT sub_3538()) || (IS_WANTED_LEVEL_GREATER( sub_3744(), 0 )))
            {
                l_U566 = 4;
            }
            if (NOT l_U519)
            {
                if (LOCATE_CHAR_ANY_MEANS_2D( sub_3267(), -267.57720000, -281.48760000, 450.00000000, 450.00000000, 0 ))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_3267() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3267(), ref l_U508 );
                    }
                    if (NOT l_U520)
                    {
                        REQUEST_MODEL( 1376298265 );
                        REQUEST_MODEL( -2030171296 );
                        l_U520 = 1;
                    }
                    if ((HAS_MODEL_LOADED( -2030171296 )) AND (HAS_MODEL_LOADED( 1376298265 )))
                    {
                        sub_21664();
                        if (IS_SCREEN_FADED_OUT())
                        {
                            DO_SCREEN_FADE_IN( 500 );
                        }
                        l_U520 = 0;
                        l_U519 = 1;
                    }
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U498 )))
            {
                if (((NOT (sub_18848( sub_3267() ))) AND (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_3267(), l_U498, 10.00000000, 10.00000000, 5.50000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3267(), l_U556._fU0, l_U556._fU4, l_U556._fU8, 2.50000000, 2.50000000, 2.50000000, 1 )))
                {
                    if (sub_10453( 1, 1 ))
                    {
                        REMOVE_BLIP( l_U496 );
                        while (NOT l_U530)
                        {
                            sub_25776();
                            WAIT( 0 );
                        }
                        if (NOT sub_3538())
                        {
                            l_U493 = 0;
                            l_U530 = 0;
                            l_U515 = 0;
                            l_U566 = 4;
                        }
                        else
                        {
                            l_U515 = 1;
                            l_U566 = 6;
                        }
                    }
                }
            }
            break;
            case 6:
            if (NOT (IS_CHAR_INJURED( l_U498 )))
            {
                if ((TIMERA() >= 3000) || (LOCATE_CHAR_ANY_MEANS_2D( l_U498, -280.44330000, -282.20680000, 1.50000000, 1.50000000, 0 )))
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    DISPLAY_RADAR( 1 );
                    DISPLAY_HUD( 1 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U490 );
                    l_U510 = 0;
                    FORCE_WEATHER_NOW( 1 );
                    if (IS_CHAR_IN_ANY_CAR( sub_3267() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
                        if (IS_VEH_DRIVEABLE( l_U508 ))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U508 );
                            WARP_CHAR_FROM_CAR_TO_COORD( sub_3267(), -306.84290000, -294.62370000, 13.51820000 );
                            SET_CAR_COORDINATES( l_U508, -268.36010000, -263.70630000, 13.46270000 );
                            SET_CAR_HEADING( l_U508, 180 );
                        }
                    }
                    else
                    {
                        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U508 );
                        if (IS_VEH_DRIVEABLE( l_U508 ))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U508 );
                            SET_CAR_COORDINATES( l_U508, -268.36010000, -263.70630000, 13.46270000 );
                            SET_CAR_HEADING( l_U508, 180 );
                        }
                    }
                    l_U511 = 0;
                    l_U528 = 0;
                    CLEAR_AREA( -274.51140000, -282.13170000, 13.28000000, 50, 1 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_3744(), 0, 1, 1 );
                    g_U9156 = 1;
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1376298265 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -2030171296 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -498054846 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U500 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U501 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U498 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U499 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U502 );
                    REMOVE_ANIMS( "gestures@niko" );
                    sub_6870( 10 );
                    sub_6870( 3 );
                    sub_6870( 8 );
                    sub_6870( 18 );
                    sub_6870( 0 );
                    START_CUTSCENE_NOW( "wedint" );
                    while (NOT HAS_CUTSCENE_LOADED())
                    {
                        WAIT( 0 );
                    }
                    if (g_U15654[12])
                    {
                        CLEAR_AREA( -274.51140000, -282.13170000, 13.28000000, 50, 1 );
                        while (NOT HAS_CUTSCENE_FINISHED())
                        {
                            WAIT( 0 );
                        }
                        CLEAR_NAMED_CUTSCENE( "wedint" );
                        START_CUTSCENE_NOW( "FIN_1AA" );
                        while (NOT HAS_CUTSCENE_LOADED())
                        {
                            CLEAR_AREA( -274.51140000, -282.13170000, 13.28000000, 50, 1 );
                            WAIT( 0 );
                        }
                        l_U566 = 7;
                    }
                    else
                    {
                        CLEAR_AREA( -274.51140000, -282.13170000, 13.28000000, 50, 1 );
                        while (NOT HAS_CUTSCENE_FINISHED())
                        {
                            WAIT( 0 );
                        }
                        CLEAR_NAMED_CUTSCENE( "wedint" );
                        START_CUTSCENE_NOW( "FIN_1BA" );
                        while (NOT HAS_CUTSCENE_LOADED())
                        {
                            CLEAR_AREA( -274.51140000, -282.13170000, 13.28000000, 50, 1 );
                            WAIT( 0 );
                        }
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                        l_U566 = 7;
                    }
                }
            }
            break;
            case 7:
            CLEAR_AREA( -274.51140000, -282.13170000, 13.28000000, 50, 1 );
            if (HAS_CUTSCENE_FINISHED())
            {
                if (g_U0)
                {
                    DO_SCREEN_FADE_IN( 500 );
                    while (IS_SCREEN_FADING_IN())
                    {
                        WAIT( 0 );
                    }
                    SET_PLAYER_CONTROL_ADVANCED( sub_3744(), 1, 1, 1 );
                }
                else if (IS_SCREEN_FADED_IN())
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                DELETE_CHAR( ref l_U499 );
                DELETE_CHAR( ref l_U500 );
                DELETE_CHAR( ref l_U498 );
                DELETE_CHAR( ref l_U502 );
                g_U9156 = 0;
                CLEAR_NAMED_CUTSCENE( "FIN_1AA" );
                CLEAR_NAMED_CUTSCENE( "M_Y_pmedic" );
                sub_35530();
            }
            break;
        }
    }
    return;
}

void sub_111()
{
    sub_120();
    return;
}

void sub_120()
{
    int iVar2;

    iVar2 = 0;
    sub_134( iVar2 );
    sub_1310( iVar2 );
    return;
}

void sub_134(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_178();
        sub_339();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_447();
            sub_486();
        }
    }
    sub_562();
    sub_663();
    uVar5 = sub_776( uParam0 );
    sub_1217( uVar5, 0 );
    return;
}

void sub_178()
{
    sub_192( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_292();
    }
    return;
}

void sub_192(int iParam0)
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

void sub_292()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_339()
{
    sub_348();
    return;
}

void sub_348()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_447()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_486()
{
    sub_495();
    return;
}

void sub_495()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_562()
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

void sub_663()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_685();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_685()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_776(unknown uParam0)
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
    sub_1175( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1175(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1217(int iParam0, boolean bParam1)
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

void sub_1310(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1319();
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
        sub_2094();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1319()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1357( 5, g_U569[I] )) == 1))
        {
            if ((sub_1357( 1, g_U569[I] )) != 0)
            {
                sub_1643( I );
            }
        }
    }
    if (NOT sub_1809())
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

int sub_1357(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1643(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1728( g_U569 - 1 );
    return;
}

void sub_1728(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1809()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1357( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2094()
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

void sub_2221()
{
    if (NOT (IS_CHAR_INJURED( l_U502 )))
    {
        if (IS_GROUP_MEMBER( l_U502, sub_2253() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U502 );
        }
        if (IS_CHAR_IN_ANY_HELI( l_U502 ))
        {
            DELETE_CHAR( ref l_U502 );
        }
    }
    sub_2347( 0 );
    SWITCH_ROADS_ON( -274.06840000 - 50, -278.46120000 - 50, 13.40320000 - 50, -274.06840000 + 50, -278.46120000 + 50, 13.40320000 + 50 );
    SWITCH_PED_PATHS_ON( -274.06840000 - 50, -278.46120000 - 50, 13.40320000 - 50, -274.06840000 + 50, -278.46120000 + 50, 13.40320000 + 50 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_2723( 0 );
    CLEAR_HELP();
    RELEASE_WEATHER();
    g_U9156 = 0;
    if (l_U510)
    {
        END_CAM_COMMANDS( ref l_U490 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2253()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2347(boolean bParam0)
{
    int I;

    if (bParam0)
    {
        for ( I = 0; I < 5; I++ )
        {
            if (g_U9943[I]._fU0)
            {
                if (NOT (DOES_BLIP_EXIST( l_U483[I] )))
                {
                    ADD_BLIP_FOR_COORD( g_U9943[I]._fU8._fU0, g_U9943[I]._fU8._fU4, g_U9943[I]._fU8._fU8, ref l_U483[I] );
                    CHANGE_BLIP_SPRITE( l_U483[I], 29 );
                }
            }
        }
    }
    else
    {
        for ( I = 0; I < 5; I++ )
        {
            if (DOES_BLIP_EXIST( l_U483[I] ))
            {
                REMOVE_BLIP( l_U483[I] );
            }
        }
    }
    return;
}

void sub_2723(unknown uParam0)
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

void sub_2969(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3005())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_3005()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3122(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3141();
    return;
}

void sub_3141()
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

void sub_3267()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_3538()
{
    if ((sub_3660()) AND ((sub_3608()) AND (sub_3547())))
    {
        return 1;
    }
    return 0;
}

int sub_3547()
{
    int iVar2;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 1 );
    if ((iVar2 == 13) || ((iVar2 == 5) || ((iVar2 == 12) || (iVar2 == 11))))
    {
        return 1;
    }
    return 0;
}

int sub_3608()
{
    int iVar2;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 2 );
    if ((iVar2 == 2) || (iVar2 == 4))
    {
        return 1;
    }
    return 0;
}

int sub_3660()
{
    int iVar2;
    unknown uVar3;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 5 );
    if ((iVar2 == 5) || (iVar2 == 2))
    {
        return 1;
    }
    return 0;
}

void sub_3735()
{
    if (IS_PLAYER_PLAYING( sub_3744() ))
    {
        sub_3793( ref g_U8371._fU0 );
        sub_4923( ref g_U8371._fU4 );
        sub_5650( ref g_U8371._fU8 );
        sub_6251( ref g_U8371._fU12 );
        sub_6548( ref g_U8371._fU16 );
        g_U8371._fU20 = -1;
        g_U8371._fU24 = -1;
    }
    return;
}

void sub_3744()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3793(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_3267(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_3863( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 45;
    }
    return;
}

void sub_3863(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 15:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 16:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 17:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 4:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 5:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 6:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 7:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 8:
        (uParam1^) = 3;
        (uParam2^) = 2;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 20:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 28:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 29:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 30:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 41:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 42:
        (uParam1^) = 8;
        (uParam2^) = 0;
        break;
        case 21:
        (uParam1^) = 9;
        (uParam2^) = 0;
        break;
        case 22:
        (uParam1^) = 9;
        (uParam2^) = 1;
        break;
        case 23:
        (uParam1^) = 9;
        (uParam2^) = 2;
        break;
        case 9:
        (uParam1^) = 10;
        (uParam2^) = 0;
        break;
        case 10:
        (uParam1^) = 10;
        (uParam2^) = 1;
        break;
        case 11:
        (uParam1^) = 10;
        (uParam2^) = 2;
        break;
        case 31:
        (uParam1^) = 11;
        (uParam2^) = 0;
        break;
        case 32:
        (uParam1^) = 11;
        (uParam2^) = 1;
        break;
        case 33:
        (uParam1^) = 11;
        (uParam2^) = 2;
        break;
        case 34:
        (uParam1^) = 12;
        (uParam2^) = 0;
        break;
        case 35:
        (uParam1^) = 12;
        (uParam2^) = 1;
        break;
        case 36:
        (uParam1^) = 12;
        (uParam2^) = 2;
        break;
        case 37:
        (uParam1^) = 12;
        (uParam2^) = 3;
        break;
        case 38:
        (uParam1^) = 13;
        (uParam2^) = 0;
        break;
        case 39:
        (uParam1^) = 13;
        (uParam2^) = 1;
        break;
        case 40:
        (uParam1^) = 13;
        (uParam2^) = 2;
        break;
        case 12:
        (uParam1^) = 14;
        (uParam2^) = 0;
        break;
        case 13:
        (uParam1^) = 14;
        (uParam2^) = 1;
        break;
        case 14:
        (uParam1^) = 14;
        (uParam2^) = 2;
        break;
        case 24:
        (uParam1^) = 15;
        (uParam2^) = 0;
        break;
        case 25:
        (uParam1^) = 15;
        (uParam2^) = 1;
        break;
        case 26:
        (uParam1^) = 15;
        (uParam2^) = 2;
        break;
        case 27:
        (uParam1^) = 15;
        (uParam2^) = 3;
        break;
        case 43:
        (uParam1^) = 16;
        (uParam2^) = 0;
        break;
        case 44:
        (uParam1^) = 16;
        (uParam2^) = 1;
        break;
        default:
          case 45:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_4923(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_3267(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_4991( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 26;
    }
    return;
}

void sub_4991(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 0;
        (uParam2^) = 3;
        break;
        case 4:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 20:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 21:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 22:
        (uParam1^) = 2;
        (uParam2^) = 3;
        break;
        case 23:
        (uParam1^) = 2;
        (uParam2^) = 4;
        break;
        case 24:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 15:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 16:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 17:
        (uParam1^) = 4;
        (uParam2^) = 3;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 4;
        break;
        case 8:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 9:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 11:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 12:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 13:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 5:
        (uParam1^) = 7;
        (uParam2^) = 0;
        break;
        case 6:
        (uParam1^) = 7;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 7;
        (uParam2^) = 2;
        break;
        case 25:
        (uParam1^) = 7;
        (uParam2^) = 3;
        break;
        default:
          case 26:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_5650(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_3267(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_5718( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 20;
    }
    return;
}

void sub_5718(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 8:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 9:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 13:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 15:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 2:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 3:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 11:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 12:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 16:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 17:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 18:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 4:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 5:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 6:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 19:
        (uParam1^) = 1;
        (uParam2^) = 3;
        break;
        default:
          case 20:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_6251(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( sub_3267(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_6304( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( sub_3267(), 8 );
        if ((iVar8 == 0) AND (iVar7 == 1))
        {
            (uParam0^) = 3;
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 4;
    }
    return;
}

void sub_6304(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        case 3:
        (uParam1^) = 99;
        break;
        default:
          case 4: (uParam1^) = 2147483647;
    }
    return;
}

void sub_6548(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_3267(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_6597( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 3;
    }
    return;
}

void sub_6597(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        default:
          case 3: (uParam1^) = 2147483647;
    }
    return;
}

void sub_6839()
{
    if (l_U526)
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U502 );
        sub_6870( 10 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U500 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U501 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U498 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U499 );
    sub_6870( 3 );
    sub_6870( 8 );
    sub_6870( 18 );
    sub_6870( 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -498054846 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1376298265 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2030171296 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U503[0] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U503[1] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U503[2] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U503[3] );
    if (NOT g_U15654[12])
    {
        l_U528 = 0;
    }
    l_U511 = 0;
    return;
}

void sub_6870(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_6881( uParam0 ) );
    return;
}

int sub_6881(unknown uParam0)
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
    sub_1175( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_7858()
{
    sub_7867();
    switch (l_U489)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 1:
        PRINT_NOW( "FIN1C_04", 7500, 1 );
        break;
        case 2:
        PRINT_NOW( "FIN1C_05", 7500, 1 );
        break;
        case 3:
        PRINT_NOW( "FIN1C_02", 7500, 1 );
        break;
        case 4:
        PRINT_NOW( "FIN1C_24", 7500, 1 );
        break;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3744(), 150 );
    SAY_AMBIENT_SPEECH( sub_3267(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    sub_2221();
    return;
}

void sub_7867()
{
    sub_7876();
    return;
}

void sub_7876()
{
    int iVar2;

    iVar2 = 0;
    sub_7890( iVar2 );
    sub_1310( iVar2 );
    return;
}

void sub_7890(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3744(), 150 );
    CLEAR_HELP();
    sub_134( uParam0 );
    return;
}

void sub_9076(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_9098( uParam0, 0, iParam4 + 0 );
    sub_9098( uParam1, 1, iParam4 + 0 );
    sub_9098( uParam2, 2, iParam4 + 0 );
    sub_9098( uParam3, 3, iParam4 + 0 );
    sub_9098( 0, 4, iParam4 + 0 );
    sub_9098( 1, 5, iParam4 + 0 );
    sub_9098( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_9098(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_9420(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_9448(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_9475(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_9545())
        {
            sub_1643( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_9672( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_1643( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_1357( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_1357( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_9545()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1357( 1, g_U569[I] )) != 0))
        {
            sub_1643( I );
            return 1;
        }
    }
    return 0;
}

int sub_9672(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_9737( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_9737(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_1357( 0, uParam0 );
        if (iVar14 == (sub_1357( 0, uParam6 )))
        {
            iVar15 = sub_1357( 3, uParam0 );
            if (iVar15 == (sub_1357( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_10453(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3267() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3267(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3267() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3267(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3267()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3267() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3267() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3744() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3744() )))
    {
        return 0;
    }
    return 1;
}

int sub_10792()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_12389(unknown uParam0)
{
    int iVar3;
    vector vVar4;
    float fVar7;

    iVar3 = -498054846;
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar4 = {1311.40700000, 94.34690000, 33.77160000};
    fVar7 = 0.00000000;
    CLEAR_AREA( vVar4.x, vVar4.y, vVar4.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar4.x, vVar4.y, vVar4.z, uParam0, 1 );
    CHANGE_CAR_COLOUR( (uParam0^), 40, 0 );
    SET_CAR_HEADING( (uParam0^), fVar7 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    return 1;
}

void sub_14561()
{
    if (IS_PLAYER_PLAYING( sub_3744() ))
    {
        sub_14594( g_U8371._fU0 );
        sub_14690( g_U8371._fU4 );
        sub_14786( g_U8371._fU8 );
        sub_14882( g_U8371._fU12 );
        sub_14907( g_U8371._fU16 );
        SET_CHAR_COMPONENT_VARIATION( sub_3267(), 4, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( sub_3267(), 3, 0, 0 );
    }
    return;
}

void sub_14594(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_3863( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_3267(), 1 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3267(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_14690(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_4991( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_3267(), 2 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3267(), 2, iVar3, iVar4 );
    }
    return;
}

void sub_14786(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_5718( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_3267(), 5 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3267(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_14882(int iParam0)
{
    int iVar3;
    int iVar4;

    if (iParam0 == 3)
    {
        sub_14882( -1 );
        sub_14907( -1 );
        if (((GET_CHAR_TEXTURE_VARIATION( sub_3267(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 8 )) != 1))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_3267(), 8, 1, 0 );
        }
    }
    else
    {
        sub_6304( iParam0, ref iVar3 );
        GET_CHAR_PROP_INDEX( sub_3267(), 0, ref iVar4 );
        if (((GET_CHAR_TEXTURE_VARIATION( sub_3267(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_3267(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_3267(), 8, 0, 0 );
        }
        if (iVar4 != iVar3)
        {
            if (iVar3 < 0)
            {
                CLEAR_CHAR_PROP( sub_3267(), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( sub_3267(), 0, iVar3 );
            }
        }
    }
    return;
}

void sub_14907(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_6597( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_3267(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_3267(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_3267(), 1, iVar3 );
        }
    }
    return;
}

int sub_16479(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (sub_16490( uParam0 ))
    {
        sub_16538( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
        return 1;
    }
    sub_18194( uParam0 );
    return 0;
}

void sub_16490(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_6881( uParam0 ) );
}

void sub_16538(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_6881( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_16588( uParam0, (uParam1^) );
    return;
}

void sub_16588(unknown uParam0, unknown uParam1)
{
    sub_16600( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_16600(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_16694( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_17238( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_16694(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_17238(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_16694( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_16694( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_16694( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_16694( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_16694( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_16694( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_16694( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_16694( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_16694( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_16694( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_16694( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_16694( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_16694( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_18194(unknown uParam0)
{
    REQUEST_MODEL( sub_6881( uParam0 ) );
    return;
}

void sub_18417(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_18501( "\n PED NUMBER ", uParam0 );
    sub_18541( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_18501(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_18541(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_18848(int iParam0)
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
                if (sub_18912( uVar3 ))
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

int sub_18912(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_19610(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_19633( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_19633(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_19687( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_19687(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_19709( iParam1 )))
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
    sub_20401( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_19709(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_19786( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_19786( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_19786( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_19786(unknown uParam0)
{
    return;
}

void sub_20401(int iParam0, int iParam1)
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

int sub_20611(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_19786( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_19786( "\n speech is not playing" );
    }
    return 0;
}

void sub_21423(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_21664()
{
    FORCE_WEATHER( 1 );
    while (NOT (sub_16479( 0, ref l_U498, -274.47630000, -280.65370000, 13.34050000, 256.94130000 )))
    {
        WAIT( 0 );
    }
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U498, 1 );
    sub_18417( 2, l_U498, "ROMAN", 0 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U498, 1 );
    if (l_U526)
    {
        while (NOT (sub_16479( 10, ref l_U502, -272.08230000, -281.24840000, 13.34970000, 97.00850000 )))
        {
            WAIT( 0 );
        }
        SET_CHAR_COMPONENT_VARIATION( l_U502, 1, 0, 2 );
        SET_CHAR_COMPONENT_VARIATION( l_U502, 2, 0, 2 );
    }
    while (NOT (sub_16479( 3, ref l_U499, -273.34540000, -282.29730000, 13.30690000, 72.94980000 )))
    {
        WAIT( 0 );
    }
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U499, 1 );
    sub_18417( 3, l_U499, "JACOB", 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U499, 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U499, 1, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U499, 5, 2, 0 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U499, 1 );
    while (NOT (sub_16479( 8, ref l_U500, -274.51140000, -282.13170000, 13.28000000, 338.79460000 )))
    {
        WAIT( 0 );
    }
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U500, 1 );
    sub_18417( 1, l_U500, "BRUCIE", 0 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U500, 1 );
    while (NOT (sub_16479( 18, ref l_U501, -273.36110000, -280.54790000, 13.41537000, 158.63360000 )))
    {
        WAIT( 0 );
    }
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U501, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U501, 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U501, 1, 2, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U501, 5, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U501, 7, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U501, 3, 1, 0 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U501, 1 );
    CREATE_CAR( 1376298265, -268.36400000, -269.44080000, 13.41630000, ref l_U503[0], 1 );
    SET_CAR_HEADING( l_U503[0], 177.33220000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U503[0] );
    SET_CAR_IN_CUTSCENE( l_U503[0], 1 );
    while (NOT (sub_12389( ref l_U503[1] )))
    {
        WAIT( 0 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U501 ))) AND ((NOT (IS_CHAR_INJURED( l_U500 ))) AND ((NOT (IS_CHAR_INJURED( l_U499 ))) AND (NOT (IS_CHAR_INJURED( l_U498 ))))))
    {
        TASK_CHAT_WITH_CHAR( l_U498, l_U500, 1, 1 );
        TASK_CHAT_WITH_CHAR( l_U500, l_U500, 0, 1 );
        TASK_CHAT_WITH_CHAR( l_U499, l_U501, 1, 1 );
        TASK_CHAT_WITH_CHAR( l_U501, l_U499, 0, 1 );
    }
    SET_CAR_COORDINATES( l_U503[1], -268.65870000, -275.56600000, 13.32140000 );
    SET_CAR_HEADING( l_U503[1], 177.50190000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U503[1] );
    SET_CAR_IN_CUTSCENE( l_U503[1], 1 );
    CREATE_CAR( 1376298265, -268.58600000, -293.68560000, 13.11190000, ref l_U503[2], 1 );
    SET_CAR_HEADING( l_U503[2], 179.71150000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U503[2] );
    SET_CAR_IN_CUTSCENE( l_U503[2], 1 );
    CREATE_CAR( -2030171296, -268.29570000, -287.72670000, 13.18810000, ref l_U503[3], 1 );
    SET_CAR_HEADING( l_U503[3], 181.04740000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U503[3] );
    if (NOT g_U15654[12])
    {
        l_U528 = 1;
    }
    else
    {
        TURN_OFF_VEHICLE_EXTRA( l_U503[3], 5, 0 );
    }
    TURN_OFF_VEHICLE_EXTRA( l_U503[3], 1, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U503[3], 2, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U503[3], 3, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U503[3], 4, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U503[3], 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U503[3], 7, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U503[3], 8, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U503[3], 9, 0 );
    CHANGE_CAR_COLOUR( l_U503[3], 6, 0 );
    SET_EXTRA_CAR_COLOURS( l_U503[3], 7, 0 );
    SET_CAR_IN_CUTSCENE( l_U503[3], 1 );
    l_U511 = 1;
    return;
}

int sub_23176(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_19786( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_19786( "\n CONVERSATION PAUSED AT LINE " );
            sub_23332( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_19786( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_19786( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_19786( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_23332(unknown uParam0)
{
    return;
}

void sub_23910(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_24029(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_24052( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_24052(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_19687( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_24746(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 <= 3) AND (g_U8392 >= 1))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_25776()
{
    if (l_U515)
    {
        if ((IS_SCREEN_FADED_IN()) AND (sub_10792()))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            SWITCH_ROADS_OFF( -274.06840000 - 50, -278.46120000 - 50, 13.40320000 - 50, -274.06840000 + 50, -278.46120000 + 50, 13.40320000 + 50 );
            SWITCH_PED_PATHS_OFF( -274.06840000 - 50, -278.46120000 - 50, 13.40320000 - 50, -274.06840000 + 50, -278.46120000 + 50, 13.40320000 + 50 );
            CLEAR_PRINTS();
            sub_2723( 0 );
            SET_CHAR_COORDINATES( sub_3267(), -274.06840000, -278.46120000, 13.40320000 );
            if (NOT l_U526)
            {
                if (NOT g_U15654[12])
                {
                    if (NOT (IS_CHAR_INJURED( l_U502 )))
                    {
                        SET_CHAR_COORDINATES( l_U502, -272.08230000, -281.24840000, 13.34970000 );
                        if (IS_GROUP_MEMBER( l_U502, sub_2253() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U502 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U498 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U547 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U498 );
                            TASK_CHAT_WITH_CHAR( 0, l_U498, 1, 1 );
                            CLOSE_SEQUENCE_TASK( l_U547 );
                            TASK_PERFORM_SEQUENCE( l_U502, l_U547 );
                            CLEAR_SEQUENCE_TASK( l_U547 );
                        }
                        l_U526 = 1;
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U502 )))
            {
                SET_CHAR_COORDINATES( l_U502, -272.08230000, -281.24840000, 13.34970000 );
            }
            l_U493 = 5;
        }
    }
    switch (l_U493)
    {
        case 0:
        l_U532 = 1;
        sub_2723( 0 );
        SET_PLAYER_CONTROL_ADVANCED( sub_3744(), 0, 1, 1 );
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_CHAR_TASKS( sub_3267() );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3267(), 1 );
        REQUEST_ANIMS( "misswedding" );
        while (NOT (HAVE_ANIMS_LOADED( "misswedding" )))
        {
            WAIT( 0 );
        }
        SWITCH_ROADS_OFF( -274.06840000 - 50, -278.46120000 - 50, 13.40320000 - 50, -274.06840000 + 50, -278.46120000 + 50, 13.40320000 + 50 );
        SWITCH_PED_PATHS_OFF( -274.06840000 - 50, -278.46120000 - 50, 13.40320000 - 50, -274.06840000 + 50, -278.46120000 + 50, 13.40320000 + 50 );
        CLEAR_AREA_OF_CHARS( -274.47630000, -280.65370000, 13.34050000, 200 );
        CLEAR_AREA( -274.47630000, -280.65370000, 13.34050000, 100, 1 );
        if (NOT sub_3538())
        {
            if (NOT (IS_CHAR_INJURED( l_U498 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U547 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3267() );
                TASK_STAND_STILL( 0, 150356 );
                TASK_ACHIEVE_HEADING( 0, 338.79460000 );
                TASK_CHAT_WITH_CHAR( 0, l_U500, 1, 1 );
                CLOSE_SEQUENCE_TASK( l_U547 );
                TASK_PERFORM_SEQUENCE( l_U498, l_U547 );
                CLEAR_SEQUENCE_TASK( l_U547 );
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U498 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U547 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3267() );
            CLOSE_SEQUENCE_TASK( l_U547 );
            TASK_PERFORM_SEQUENCE( l_U498, l_U547 );
            CLEAR_SEQUENCE_TASK( l_U547 );
        }
        REMOVE_BLIP( l_U495 );
        SET_WANTED_MULTIPLIER( 0.00000000 );;
        REQUEST_ANIMS( "gestures@niko" );
        while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
        {
            WAIT( 0 );
        }
        FORCE_WEATHER( 1 );
        if (NOT l_U510)
        {
            BEGIN_CAM_COMMANDS( ref l_U490 );
            l_U510 = 1;
        }
        LOAD_SCENE( -272.64070000, -265.45640000, 13.57020000 );
        CREATE_CAM( 14, ref l_U549 );
        CREATE_CAM( 14, ref l_U550 );
        CREATE_CAM( 3, ref l_U551 );
        SET_CAM_POS( l_U549, -273.94800000, -284.08100000, 14.27892000 );
        SET_CAM_ROT( l_U549, 5.27520400, -0.00000000, -1.42073900 );
        SET_CAM_FOV( l_U549, 45.00000000 );
        SET_CAM_ACTIVE( l_U549, 1 );
        SET_CAM_PROPAGATE( l_U549, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        DISPLAY_RADAR( 0 );
        DISPLAY_HUD( 0 );
        if (NOT l_U526)
        {
            if (NOT g_U15654[12])
            {
                if (NOT (IS_CHAR_INJURED( l_U502 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_3267() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
                        if (IS_VEH_DRIVEABLE( l_U508 ))
                        {
                            SET_CAR_COORDINATES( l_U508, -268.36010000, -263.70630000, 13.46270000 );
                            SET_CAR_HEADING( l_U508, 180.37120000 );
                            SET_CAR_AS_MISSION_CAR( l_U508 );
                        }
                        if (IS_CHAR_IN_ANY_CAR( l_U502 ))
                        {
                            WARP_CHAR_FROM_CAR_TO_COORD( l_U502, -272.89960000, -270.03360000, 13.52290000 );
                        }
                        else
                        {
                            SET_CHAR_COORDINATES( l_U502, -272.89960000, -270.03360000, 13.52290000 );
                            SET_CHAR_HEADING( l_U502, 191.03780000 );
                        }
                        REMOVE_PED_HELMET( l_U502, 1 );
                        SET_CHAR_HEADING( l_U502, 191.03780000 );
                        if (IS_GROUP_MEMBER( l_U502, sub_2253() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U502 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U498 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U547 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -272.87650000, -278.92210000, 13.34970000, 2, 15000, 0 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U498 );
                            TASK_CHAT_WITH_CHAR( 0, l_U498, 1, 1 );
                            CLOSE_SEQUENCE_TASK( l_U547 );
                            TASK_PERFORM_SEQUENCE( l_U502, l_U547 );
                            CLEAR_SEQUENCE_TASK( l_U547 );
                        }
                    }
                    else
                    {
                        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U508 );
                        if (IS_VEH_DRIVEABLE( l_U508 ))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U508 );
                            SET_CAR_COORDINATES( l_U508, -268.36010000, -263.70630000, 13.46270000 );
                            SET_CAR_HEADING( l_U508, 180.37120000 );
                        }
                        SET_CHAR_COORDINATES( l_U502, -272.89960000, -270.03360000, 13.52290000 );
                        SET_CHAR_HEADING( l_U502, 191.03780000 );
                        if (IS_GROUP_MEMBER( l_U502, sub_2253() ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U502 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U498 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U547 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -272.87650000, -278.92210000, 13.34970000, 2, 15000, 0 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U498 );
                            TASK_CHAT_WITH_CHAR( 0, l_U498, 1, 1 );
                            CLOSE_SEQUENCE_TASK( l_U547 );
                            TASK_PERFORM_SEQUENCE( l_U502, l_U547 );
                            CLEAR_SEQUENCE_TASK( l_U547 );
                        }
                    }
                    l_U526 = 1;
                }
            }
        }
        if (IS_CHAR_IN_ANY_CAR( sub_3267() ))
        {
            GET_CAR_CHAR_IS_USING( sub_3267(), ref l_U508 );
            if (IS_VEH_DRIVEABLE( l_U508 ))
            {
                SET_CAR_COORDINATES( l_U508, -268.36010000, -263.70630000, 13.46270000 );
                SET_CAR_HEADING( l_U508, 180.37120000 );
                SET_CAR_AS_MISSION_CAR( l_U508 );
            }
            WARP_CHAR_FROM_CAR_TO_COORD( sub_3267(), -273.92430000, -269.84870000, 13.55620000 );
            SET_CHAR_HEADING( sub_3267(), 182.66780000 );
            sub_28142();
        }
        else
        {
            SET_CHAR_COORDINATES( sub_3267(), -273.92430000, -269.84870000, 13.55620000 );
            SET_CHAR_HEADING( sub_3267(), 182.66780000 );
            sub_28142();
        }
        TASK_GO_STRAIGHT_TO_COORD( sub_3267(), -274.44570000, -278.27990000, 13.40750000, 2, 10000 );
        REMOVE_BLIP( l_U495 );
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        if (sub_3538())
        {
            sub_19610( "FIN1E_PREEN", ref l_U560, 7, 1 );
        }
        SETTIMERA( 0 );
        l_U493++;
        break;
        case 1:
        if (TIMERA() >= 1000)
        {
            l_U515 = 1;
            l_U493++;
        }
        break;
        case 2:
        if (NOT sub_3538())
        {
            if (TIMERA() >= 4000)
            {
                if (NOT (sub_20611( l_U560 )))
                {
                    sub_19610( "FIN1E_NOSUIT", ref l_U560, 7, 1 );
                    SET_CAM_ACTIVE( l_U550, 1 );
                    SET_CAM_PROPAGATE( l_U550, 1 );
                    SET_CAM_ACTIVE( l_U551, 1 );
                    SET_CAM_PROPAGATE( l_U551, 1 );
                    SET_CAM_POS( l_U549, -275.73340000, -277.86740000, 14.61449000 );
                    SET_CAM_ROT( l_U549, 0.06983300, -0.00000000, -136.00360000 );
                    SET_CAM_FOV( l_U549, 45.90000000 );
                    SET_CAM_POS( l_U550, -275.73340000, -277.86740000, 14.61449000 );
                    SET_CAM_ROT( l_U550, 0.06983300, -0.00000000, -136.00360000 );
                    SET_CAM_FOV( l_U550, 55.19996000 );
                    SET_CAM_INTERP_STYLE_CORE( l_U551, l_U549, l_U550, 3500, 0 );
                    SET_CHAR_COORDINATES( sub_3267(), -274.44570000, -278.27990000, 13.40750000 );
                    SET_CHAR_HEADING( sub_3267(), 229.53000000 );
                    if (NOT (IS_CHAR_INJURED( l_U501 )))
                    {
                        SET_CHAR_HEADING( l_U501, 59.75980000 );
                        OPEN_SEQUENCE_TASK( ref l_U547 );
                        TASK_PLAY_ANIM( 0, "tie_adjust_stand", "misswedding", 1000.00000000, 0, 0, 0, 0, 0 );
                        TASK_LOOK_AT_CHAR( 0, sub_3267(), 4000, 0 );
                        CLOSE_SEQUENCE_TASK( l_U547 );
                        TASK_PERFORM_SEQUENCE( l_U501, l_U547 );
                        CLEAR_SEQUENCE_TASK( l_U547 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U499 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U547 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3267() );
                        TASK_LOOK_AT_CHAR( 0, sub_3267(), 4000, 0 );
                        CLOSE_SEQUENCE_TASK( l_U547 );
                        TASK_PERFORM_SEQUENCE( l_U499, l_U547 );
                        CLEAR_SEQUENCE_TASK( l_U547 );
                    }
                    l_U493 = 4;
                }
            }
        }
        else if (TIMERA() >= 4000)
        {
            if (NOT (sub_20611( l_U560 )))
            {
                sub_19610( "FIN1E_SUIT", ref l_U560, 7, 1 );
                SET_CAM_ACTIVE( l_U550, 1 );
                SET_CAM_PROPAGATE( l_U550, 1 );
                SET_CAM_ACTIVE( l_U551, 1 );
                SET_CAM_PROPAGATE( l_U551, 1 );
                SET_CAM_POS( l_U549, -275.73340000, -277.86740000, 14.61449000 );
                SET_CAM_ROT( l_U549, 0.06983300, -0.00000000, -136.00360000 );
                SET_CAM_FOV( l_U549, 45.90000000 );
                SET_CAM_POS( l_U550, -275.73340000, -277.86740000, 14.61449000 );
                SET_CAM_ROT( l_U550, 0.06983300, -0.00000000, -136.00360000 );
                SET_CAM_FOV( l_U550, 55.19996000 );
                SET_CAM_INTERP_STYLE_CORE( l_U551, l_U549, l_U550, 7000, 0 );
                SET_CHAR_COORDINATES( sub_3267(), -274.44570000, -278.27990000, 13.40750000 );
                SET_CHAR_HEADING( sub_3267(), 229.53000000 );
                if (NOT (IS_CHAR_INJURED( l_U501 )))
                {
                    SET_CHAR_HEADING( l_U501, 59.75980000 );
                    OPEN_SEQUENCE_TASK( ref l_U547 );
                    TASK_PLAY_ANIM( 0, "tie_adjust_stand", "misswedding", 1000.00000000, 0, 0, 0, 0, 0 );
                    TASK_LOOK_AT_CHAR( 0, sub_3267(), 4000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U547 );
                    TASK_PERFORM_SEQUENCE( l_U501, l_U547 );
                    CLEAR_SEQUENCE_TASK( l_U547 );
                }
                if (NOT (IS_CHAR_INJURED( l_U499 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U547 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3267() );
                    TASK_LOOK_AT_CHAR( 0, sub_3267(), 4000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U547 );
                    TASK_PERFORM_SEQUENCE( l_U499, l_U547 );
                    CLEAR_SEQUENCE_TASK( l_U547 );
                }
                SETTIMERA( 0 );
                l_U493 = 3;
            }
        }
        break;
        case 3:
        if (TIMERA() >= 7000)
        {
            SET_CAM_POS( l_U549, -268.28590000, -281.84060000, 13.51844000 );
            SET_CAM_ROT( l_U549, 23.03691000, -0.00000000, 90.94760000 );
            SET_CAM_FOV( l_U549, 53.69998000 );
            SET_CAM_POS( l_U550, -268.28590000, -281.84060000, 13.51844000 );
            SET_CAM_ROT( l_U550, 49.50752000, 0.00000000, 90.94760000 );
            SET_CAM_FOV( l_U550, 53.69998000 );
            OPEN_SEQUENCE_TASK( ref l_U547 );
            TASK_GO_STRAIGHT_TO_COORD( 0, -280.44330000, -282.20680000, 14.62940000, 2, -1 );
            CLOSE_SEQUENCE_TASK( l_U547 );
            TASK_PERFORM_SEQUENCE( sub_3267(), l_U547 );
            CLEAR_SEQUENCE_TASK( l_U547 );
            if ((NOT (IS_CHAR_INJURED( l_U501 ))) AND ((NOT (IS_CHAR_INJURED( l_U500 ))) AND ((NOT (IS_CHAR_INJURED( l_U499 ))) AND (NOT (IS_CHAR_INJURED( l_U498 ))))))
            {
                TASK_GO_STRAIGHT_TO_COORD( l_U501, -280.44330000, -282.20680000, 14.62940000, 2, -1 );
                TASK_GO_STRAIGHT_TO_COORD( l_U499, -280.44330000, -282.20680000, 14.62940000, 2, -1 );
                TASK_GO_STRAIGHT_TO_COORD( l_U498, -280.44330000, -282.20680000, 14.62940000, 2, -1 );
                TASK_GO_STRAIGHT_TO_COORD( l_U500, -280.44330000, -282.20680000, 14.62940000, 2, -1 );
            }
            SET_CAM_INTERP_STYLE_CORE( l_U551, l_U549, l_U550, 3000, 0 );
            if (NOT g_U15654[12])
            {
                if (NOT (IS_CHAR_INJURED( l_U502 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U547 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, -280.44330000, -282.20680000, 14.62940000, 2, -1 );
                    CLOSE_SEQUENCE_TASK( l_U547 );
                    TASK_PERFORM_SEQUENCE( l_U502, l_U547 );
                    CLEAR_SEQUENCE_TASK( l_U547 );
                }
            }
            l_U493 = 5;
        }
        break;
        case 4:
        if (NOT g_U15654[12])
        {
            if (NOT sub_3538())
            {
                if (NOT (sub_20611( l_U560 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U502 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U502, sub_3267(), 4000, 0 );
                    }
                    SET_CAM_POS( l_U549, -274.78650000, -278.96470000, 15.03259000 );
                    SET_CAM_ROT( l_U549, -6.87948300, -0.00000000, -80.55185000 );
                    SET_CAM_FOV( l_U549, 45.00000000 );
                    SET_CAM_POS( l_U550, -274.78650000, -278.96470000, 15.03259000 );
                    SET_CAM_ROT( l_U550, -6.87948300, -0.00000000, -80.55185000 );
                    SET_CAM_FOV( l_U550, 45.00000000 );
                    SET_CAM_INTERP_STYLE_CORE( l_U551, l_U549, l_U550, 3000, 0 );
                    sub_19610( "FIN1E_WAIT", ref l_U560, 7, 1 );
                    l_U493++;
                }
            }
            else
            {
                l_U493++;
            }
        }
        else
        {
            l_U493++;
        }
        break;
        case 5:
        if (NOT (sub_20611( l_U560 )))
        {
            if (NOT sub_3538())
            {
                l_U532 = 0;
                if (IS_SCREEN_FADED_OUT())
                {
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    DISPLAY_RADAR( 1 );
                    DISPLAY_HUD( 1 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U490 );
                    l_U510 = 0;
                    SET_PLAYER_CONTROL_ADVANCED( sub_3744(), 1, 1, 1 );
                    LOAD_SCENE( -272.64070000, -265.45640000, 13.57020000 );
                    if (DOES_BLIP_EXIST( l_U496 ))
                    {
                        REMOVE_BLIP( l_U496 );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                    while (IS_SCREEN_FADING_IN())
                    {
                        WAIT( 0 );
                    }
                }
                else
                {
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    DISPLAY_RADAR( 1 );
                    DISPLAY_HUD( 1 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U490 );
                    l_U510 = 0;
                    SET_PLAYER_CONTROL_ADVANCED( sub_3744(), 1, 1, 1 );
                }
            }
            l_U530 = 1;
            SETTIMERA( 0 );
        }
        break;
    }
    return;
}

void sub_28142()
{
    if (IS_PLAYER_PLAYING( sub_3744() ))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3267(), 8, 0, 0 );
        CLEAR_CHAR_PROP( sub_3267(), 0 );
    }
    return;
}

int sub_31081(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_19786( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_19786( "\n CONVERSATION PAUSED AT LINE " );
            sub_23332( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_19786( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_19786( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_19786( "\n reseting paused struct line" );
    }
    return 0;
}

int sub_31733(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (sub_3538())
        {
            l_U481 = 0;
            l_U482 = 0;
            sub_31778( 0 );
            sub_2347( 0 );
            return 1;
        }
        else
        {
            sub_31778( 1 );
            if (sub_31980())
            {
                sub_2347( 1 );
            }
            if (DOES_BLIP_EXIST( g_U10324[36]._fU32 ))
            {
                sub_32321( ref g_U10324[36]._fU32 );
            }
            if (NOT sub_32346())
            {
                if (sub_32468())
                {
                    if (NOT l_U482)
                    {
                        if ((NOT sub_3660()) AND ((NOT sub_3608()) AND (NOT sub_3547())))
                        {
                            PRINT_NOW( uParam7, 7500, 1 );
                        }
                        else if (NOT sub_3547())
                        {
                            if ((sub_3660()) AND (NOT sub_3608()))
                            {
                                PRINT_NOW( uParam11, 7500, 1 );
                            }
                            else if ((NOT sub_3660()) AND (sub_3608()))
                            {
                                PRINT_NOW( uParam12, 7500, 1 );
                            }
                            else
                            {
                                PRINT_NOW( uParam8, 7500, 1 );
                            }
                        }
                        else if (NOT sub_3608())
                        {
                            if (NOT sub_3660())
                            {
                                PRINT_NOW( uParam13, 7500, 1 );
                            }
                            else
                            {
                                PRINT_NOW( uParam9, 7500, 1 );
                            }
                        }
                        else if (NOT sub_3660())
                        {
                            PRINT_NOW( uParam10, 7500, 1 );
                        };;;;
                        l_U482 = 1;
                    }
                    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                    {
                        sub_32851();
                    }
                }
                else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                {
                    SET_CHAR_COORDINATES( sub_3267(), 22.32550000, 811.54570000, 13.71340000 );
                    SET_CHAR_HEADING( sub_3267(), 180.00000000 );
                }
                if (NOT l_U481)
                {
                    if (sub_31980())
                    {
                        PRINT_NOW( uParam14, 7500, 1 );
                    }
                    else if ((NOT sub_3660()) AND ((NOT sub_3608()) AND (NOT sub_3547())))
                    {
                        PRINT_NOW( uParam0, 7500, 1 );
                    }
                    else if (NOT sub_3547())
                    {
                        if ((sub_3660()) AND (NOT sub_3608()))
                        {
                            PRINT_NOW( uParam0, 7500, 1 );
                        }
                        else if ((NOT sub_3660()) AND (sub_3608()))
                        {
                            PRINT_NOW( uParam5, 7500, 1 );
                        }
                        else
                        {
                            PRINT_NOW( uParam1, 7500, 1 );
                        }
                    }
                    else if (NOT sub_3608())
                    {
                        if (NOT sub_3660())
                        {
                            PRINT_NOW( uParam6, 7500, 1 );
                        }
                        else
                        {
                            PRINT_NOW( uParam2, 7500, 1 );
                        }
                    }
                    else if (NOT sub_3660())
                    {
                        PRINT_NOW( uParam3, 7500, 1 );
                    };;;;;
                    l_U481 = 1;
                }
                l_U482 = 0;;
            }
            else
            {
                l_U481 = 0;
                l_U482 = 0;
            }
        }
    }
    return 0;
}

void sub_31778(boolean bParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[36]._fU32 ))
    {
        if (bParam0)
        {
            SET_BLIP_AS_SHORT_RANGE( g_U10324[36]._fU32, 0 );
        }
        else
        {
            SET_BLIP_AS_SHORT_RANGE( g_U10324[36]._fU32, 1 );
        }
    }
    if (DOES_BLIP_EXIST( g_U10324[35]._fU32 ))
    {
        if (bParam0)
        {
            SET_BLIP_AS_SHORT_RANGE( g_U10324[35]._fU32, 0 );
        }
        else
        {
            SET_BLIP_AS_SHORT_RANGE( g_U10324[35]._fU32, 1 );
        }
    }
    return;
}

int sub_31980()
{
    if ((sub_32157( 0 )) AND (sub_31989()))
    {
        return 1;
    }
    return 0;
}

int sub_31989()
{
    if ((g_U8332[4]) || ((g_U8332[3]) || (g_U8332[2])))
    {
        return 1;
    }
    if ((g_U8332[7]) || ((g_U8332[6]) || (g_U8332[5])))
    {
        return 1;
    }
    if ((g_U8332[11]) || ((g_U8332[10]) || ((g_U8332[9]) || (g_U8332[8]))))
    {
        return 1;
    }
    if ((g_U8332[14]) || ((g_U8332[13]) || (g_U8332[12])))
    {
        return 1;
    }
    return 0;
}

int sub_32157(boolean bParam0)
{
    if ((g_U8302[18]) || ((g_U8302[17]) || ((g_U8302[15]) || ((g_U8302[14]) || (g_U8302[13])))))
    {
        return 1;
    }
    if (bParam0)
    {
        if (g_U8302[16])
        {
            return 1;
        }
    }
    return 0;
}

void sub_32321(unknown uParam0)
{
    g_U2221 = (uParam0^);
    return;
}

int sub_32346()
{
    if ((IS_CHAR_IN_AREA_3D( sub_3267(), 5.79750000, -672.99700000, 13.74160000, 15.77250000, -659.02210000, 17.29160000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3267(), 17.17230000, 795.72780000, 12.61180000, 27.44730000, 809.37780000, 17.36180000, 0 )))
    {
        return 1;
    }
    return 0;
}

int sub_32468()
{
    if ((IS_CHAR_IN_AREA_3D( sub_3267(), 4.88090000, -659.12160000, 13.76950000, 16.83090000, -652.72160000, 16.76950000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3267(), 16.97200000, 809.18510000, 13.49340000, 27.57200000, 815.53510000, 17.21840000, 0 )))
    {
        return 1;
    }
    return 0;
}

void sub_32851()
{
    SET_CHAR_COMPONENT_VARIATION( sub_3267(), 1, 5, 0 );
    SET_CHAR_COMPONENT_VARIATION( sub_3267(), 2, 2, 0 );
    SET_CHAR_COMPONENT_VARIATION( sub_3267(), 5, 2, 0 );
    SET_CHAR_COMPONENT_VARIATION( sub_3267(), 4, 1, 0 );
    return;
}

void sub_35530()
{
    if (g_U15654[12])
    {
        sub_35554( 2, 3 );
        UNLOCK_MISSION_NEWS_STORY( 43 );
        sub_35625( 43 );
    }
    else
    {
        sub_38821( 6 );
        UNLOCK_MISSION_NEWS_STORY( 44 );
        sub_35625( 44 );
    }
    sub_38898();
    CLEAR_WANTED_LEVEL( sub_3744() );
    sub_2221();
    return;
}

void sub_35554(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_35625(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_35712( iParam0 ))
    {
        sub_36762( iParam0 );
    }
    return;
}

int sub_35712(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_35769( ref uVar3, 1, 0, 0 );
    sub_36381( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_19786( "\n ----------------------------------------------------------------" );
    sub_18501( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_19786( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_35769(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_35822( iParam0, uParam1, uParam2 );
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
        sub_35954( iParam0 + 0 );
    }
    return;
}

void sub_35822(int iParam0, int iParam1, int iParam2)
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
        sub_35954( iParam0 + 0 );
    }
    return;
}

void sub_35954(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_35985( iParam0->_fU4 )))
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

int sub_35985(unknown uParam0)
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

void sub_36381(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_36762(unknown uParam0)
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
        sub_36973( 20, 6, 16383, 16383, ref uVar4 );
        sub_37649( ref uVar4, 7 );
        sub_37680( ref uVar4, 0 );
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
        sub_36973( 20, 7, 9, 16383, ref uVar4 );
        sub_37649( ref uVar4, 7 );
        sub_37680( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_36973(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_36997( uParam0, 0, iParam4 + 0 );
    sub_36997( uParam1, 1, iParam4 + 0 );
    sub_36997( uParam2, 2, iParam4 + 0 );
    sub_36997( uParam3, 3, iParam4 + 0 );
    sub_36997( 0, 4, iParam4 + 0 );
    sub_36997( 1, 5, iParam4 + 0 );
    sub_36997( 65535, 6, iParam4 + 0 );
    sub_36997( 0, 12, iParam4 + 0 );
    sub_36997( 0, 11, iParam4 + 0 );
    sub_36997( 0, 14, iParam4 + 0 );
    sub_36997( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_36997( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_36997( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_36997(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_37649(int iParam0, unknown uParam1)
{
    sub_36997( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_37680(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_37720())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_38407( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_38206( iVar5 );
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

int sub_37720()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_37754( 5, g_U968[I] )) == 7)
        {
            sub_38206( I );
            return 1;
        }
    }
    return 0;
}

int sub_37754(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_38206(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_38279( 39 );
    return;
}

void sub_38279(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_38407(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_38468( uParam0, g_U968[Result] ))
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

int sub_38468(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_38821(unknown uParam0)
{
    if (g_U1916[uParam0] == 0)
    {
        sub_35769( ref g_U1924[uParam0], 4, 0, 0 );
        g_U1916[uParam0] = 1;
    }
    return;
}

void sub_38898()
{
    sub_38907();
    return;
}

void sub_38907()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_38925();
    sub_38984( iVar2, iVar3, iVar4 );
    return;
}

void sub_38925()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_38984(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_39015( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_39015(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_39111( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_39111( ref cVar9 );
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
            sub_39111( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_39111( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_39111( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_39111( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_39688( iParam0, iVar7 );;;
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
                sub_40085( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_40085( 0, 4 );
            }
        }
    }
    if (NOT (sub_40174( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3744(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3744() );
    }
    sub_1319();
    bVar27 = true;
    uVar28 = sub_39688( iParam0, iVar7 );
    uVar29 = sub_776( iParam0 );
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
                sub_49550( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_49980();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_50065( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_50122( iParam0 );
                sub_50161( 0 );
                sub_1217( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_50269();
        }
    }
    if (bParam2)
    {
        sub_49980();
        sub_50357();
        sub_50161( 0 );
    }
    if (bParam3)
    {
        sub_49980();
        sub_50397();
        sub_50161( 0 );
        sub_1217( uVar29, 0 );
    }
    sub_663();
    return;
}

void sub_39111(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_39688(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1175( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_40085(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_40174(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_40382( uParam1 );
        break;
        case 1:
        bVar8 = sub_42460( uParam1 );
        break;
        case 2:
        bVar8 = sub_42686( uParam1 );
        break;
        case 3:
        bVar8 = sub_42836( uParam1 );
        break;
        case 4:
        bVar8 = sub_43114( uParam1 );
        break;
        case 5:
        bVar8 = sub_43417( uParam1 );
        break;
        case 6:
        bVar8 = sub_43616( uParam1 );
        break;
        case 7:
        bVar8 = sub_43842( uParam1 );
        break;
        case 8:
        bVar8 = sub_44077( uParam1 );
        break;
        case 9:
        bVar8 = sub_44452( uParam1 );
        break;
        case 10:
        bVar8 = sub_44699( uParam1 );
        break;
        case 11:
        bVar8 = sub_44838( uParam1 );
        break;
        case 12:
        bVar8 = sub_45137( uParam1 );
        break;
        case 13:
        bVar8 = sub_45365( uParam1 );
        break;
        case 14:
        bVar8 = sub_45652( uParam1 );
        break;
        case 15:
        bVar8 = sub_45934( uParam1 );
        break;
        case 16:
        bVar8 = sub_46216( uParam1 );
        break;
        case 17:
        bVar8 = sub_46417( uParam1 );
        break;
        case 18:
        bVar8 = sub_46490( uParam1 );
        break;
        case 19:
        bVar8 = sub_46704( uParam1 );
        break;
        case 20:
        bVar8 = sub_46957( uParam1 );
        break;
        case 21:
        bVar8 = sub_47204( uParam1 );
        break;
        case 22:
        bVar8 = sub_47405( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_42065( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_39688( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_47728( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_40382(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_40661( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_40661( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_40661( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_40661( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_40661( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_40661( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_40661( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_40661( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_40661( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_40661( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_40661( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_40661( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_40661( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_40661( iVar3, 0, 3, 1, 0, 0 );
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
        sub_40661( iVar3, 0, sub_41943(), sub_42209(), 0, 0 );
        break;
        default:
        sub_42368( "Friend 1", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Friend 1", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_40661(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_40672( uParam1 );
    sub_40846( uParam0, 0, uParam2 );
    sub_40846( uParam0, 1, uParam3 );
    sub_40846( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_38925();
    return;
}

void sub_40672(unknown uParam0)
{
    ADD_SCORE( sub_3744(), uParam0 );
    sub_40697( uParam0 );
    return;
}

void sub_40697(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1175( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_40846(unknown uParam0, int iParam1, int iParam2)
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
        sub_41003( uParam0 );
    }
    return;
}

void sub_41003(unknown uParam0)
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

int sub_41943()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_42065( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_42065(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_42209()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_42065( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_42368(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_42460(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40661( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_42368( "Contact 2", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 2", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42686(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_40661( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_42368( "Girl 3", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Girl 3", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42836(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_40661( iVar3, 0, sub_41943(), sub_42209(), 0, 0 );
        break;
        default:
        sub_42368( "Friend 4", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Friend 4", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43114(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40661( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_40661( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_40661( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_40661( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_42368( "Contact 5", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 5", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43417(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_42368( "Contact 7", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 7", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43616(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40661( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_42368( "Contact 7b", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 7b", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43842(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_40661( iVar3, 0, sub_41943(), sub_42209(), 0, 0 );
        break;
        default:
        sub_42368( "Friend 8", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Friend 8", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44077(unknown uParam0)
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
        sub_40661( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_40661( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_40661( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_40661( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_40661( iVar3, 0, sub_41943(), sub_42209(), 0, 0 );
        break;
        default:
        sub_42368( "Friend 9", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Friend 9", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44452(unknown uParam0)
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
        sub_40661( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_40661( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_40661( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_42368( "Contact 10", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_42368( "Contact 10", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44699(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_42368( "Girl 11", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Girl 11", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44838(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40661( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_40661( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_40661( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_40661( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_40661( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_42368( "Contact 12", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 12", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45137(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40661( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_42368( "Contact 13", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 13", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45365(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_40661( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_40661( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_40661( iVar3, 0, sub_41943(), sub_42209(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_42368( "Friend 15", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Friend 15", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45652(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40661( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_40661( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_40661( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_42368( "Contact 16", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 16", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45934(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_40661( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_40661( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_40661( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_42368( "Contact 18", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 18", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46216(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_42368( "Contact 19", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 19", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46417(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_42368( "Girl 20", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46490(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_42368( "Contact 21", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 21", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46704(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40661( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_40661( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_42368( "Contact 22", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 22", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46957(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_40661( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_40661( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_40661( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_42368( "Contact 24", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 24", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47204(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_40661( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_40661( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_40661( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_42368( "Contact 25", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42368( "Contact 25", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47405(unknown uParam0)
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
        sub_40661( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_42368( "Girl 26", 1 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_42368( "Girl 26", 0 );
        sub_40661( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_47728(int iParam0, int iParam1)
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
    if (sub_47776( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_48507( iParam1 );
    }
    return;
}

int sub_47776(int iParam0, int iParam1)
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
            sub_47916( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_47916(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_48098( 0 );
    return;
}

void sub_48098(boolean bParam0)
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
        sub_48353();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_48353()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_48507(int iParam0)
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
        sub_48840( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_48840( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_48840( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_48840( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_48840( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_48840( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_48840( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_48840( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_48840( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_48840( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_48840( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_48840( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_48840( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_48840( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_48840( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_48840( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_48840( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_48840( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_48840( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_48840(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_49550(unknown uParam0, unknown uParam1)
{
    sub_49569( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_49569(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_49980()
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

int sub_50065(int iParam0, int iParam1)
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

void sub_50122(unknown uParam0)
{
    sub_562();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_50161(unknown uParam0)
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

void sub_50269()
{
    sub_50278();
    return;
}

void sub_50278()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_50357()
{
    sub_50278();
    return;
}

void sub_50397()
{
    sub_50278();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

