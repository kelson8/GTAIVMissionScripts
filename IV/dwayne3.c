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
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = 7;
    l_U675 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_129();
        sub_2239();
    }
    l_U645[1] = 7;
    l_U645[2] = 12;
    l_U645[3] = 12;
    l_U645[4] = 12;
    l_U645[5] = 7;
    l_U645[6] = 7;
    l_U645[7] = 7;
    l_U645[8] = 7;
    l_U645[9] = 7;
    l_U656[0] = 14;
    l_U656[1] = 7;
    l_U656[2] = 10;
    l_U486[1] = -1926041127;
    l_U486[2] = 492147228;
    l_U486[3] = 492147228;
    l_U486[4] = 492147228;
    l_U486[5] = -1926041127;
    l_U486[6] = 492147228;
    l_U486[7] = -1926041127;
    l_U486[8] = 492147228;
    l_U486[9] = -1926041127;
    l_U579[1] = {1169.63400000, 1690.83000000, 15.72200000};
    l_U610[1] = 307.30080000;
    l_U579[2] = {1161.05700000, 1682.56600000, 16.72200000};
    l_U610[2] = 301.00540000;
    l_U579[3] = {1188.74000000, 1691.41000000, 17.70000000};
    l_U610[3] = 81.60000000;
    l_U579[4] = {1177.58500000, 1685.00000000, 16.72180000};
    l_U610[4] = 171.70000000;
    l_U579[5] = {1187.48000000, 1692.64000000, 17.63000000};
    l_U610[5] = 205.60000000;
    l_U579[6] = {1149.65700000, 1672.27400000, 15.72180000};
    l_U610[6] = 92.93220000;
    l_U579[7] = {1152.11800000, 1673.10500000, 15.79190000};
    l_U610[7] = 161.62330000;
    l_U579[8] = {1176.88800000, 1686.93600000, 16.72180000};
    l_U610[8] = 212.64130000;
    l_U579[9] = {1169.56600000, 1685.36000000, 16.72180000};
    l_U610[9] = 346.51260000;
    l_U621[0] = {1197.57700000, 1694.60900000, 16.78000000};
    l_U621[1] = {1170.34700000, 1673.75800000, 15.72170000};
    l_U621[2] = {1152.18200000, 1670.62200000, 16.72190000};
    l_U498 = {1196.92800000, 1710.59200000, 16.70890000};
    sub_3500( "DF3AUD" );
    LOAD_ADDITIONAL_TEXT( "DF3AUD", 6 );
    LOAD_ADDITIONAL_TEXT( "DWAYNE3", 0 );
    while (true)
    {
        WAIT( 0 );
        if (l_U575)
        {
            if ((sub_3734( sub_3680() )) AND ((IS_CHAR_SHOOTING( sub_3680() )) AND (NOT IS_MESSAGE_BEING_DISPLAYED())))
            {
                sub_3896( "DF3_KILL", ref l_U669, 7, 1 );
                l_U575 = 0;
            }
        }
        if (NOT l_U576)
        {
            if (NOT l_U571[0])
            {
                if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                {
                    if ((IS_CHAR_GETTING_IN_TO_A_CAR( l_U512[0] )) || (IS_CHAR_IN_ANY_CAR( l_U512[0] )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3680(), l_U512[0], 10.00000000, 10.00000000, 10.00000000, 0 )) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_3680() ))))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[0], 0 );
                            TASK_COMBAT( l_U512[0], sub_3680() );
                            if (l_U561[0])
                            {
                                l_U578 = 1;
                            }
                            l_U548[0] = 1;
                            l_U571[0] = 1;
                        }
                    }
                }
            }
            if (NOT l_U571[1])
            {
                if (NOT (IS_CHAR_INJURED( l_U512[1] )))
                {
                    if ((IS_CHAR_GETTING_IN_TO_A_CAR( l_U512[1] )) || (IS_CHAR_IN_ANY_CAR( l_U512[1] )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3680(), l_U512[1], 10.00000000, 10.00000000, 10.00000000, 0 )) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_3680() ))))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[1], 0 );
                            TASK_COMBAT( l_U512[1], sub_3680() );
                            if (l_U561[1])
                            {
                                l_U578 = 1;
                            }
                            l_U548[1] = 1;
                            l_U571[1] = 1;
                        }
                    }
                }
            }
            if (NOT l_U571[2])
            {
                if (NOT (IS_CHAR_INJURED( l_U512[2] )))
                {
                    if ((IS_CHAR_GETTING_IN_TO_A_CAR( l_U512[2] )) || (IS_CHAR_IN_ANY_CAR( l_U512[2] )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3680(), l_U512[2], 10.00000000, 10.00000000, 10.00000000, 0 )) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_3680() ))))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[2], 0 );
                            TASK_COMBAT( l_U512[2], sub_3680() );
                            if (l_U561[2])
                            {
                                l_U578 = 1;
                            }
                            l_U548[2] = 1;
                            l_U571[2] = 1;
                        }
                    }
                }
            }
        }
        if (l_U529)
        {
            if (IS_CHAR_INJURED( l_U512[0] ))
            {
                if (DOES_BLIP_EXIST( l_U517[0] ))
                {
                    REMOVE_BLIP( l_U517[0] );
                }
            }
            if (IS_CHAR_INJURED( l_U512[1] ))
            {
                if (DOES_BLIP_EXIST( l_U517[1] ))
                {
                    REMOVE_BLIP( l_U517[1] );
                }
            }
            if (IS_CHAR_INJURED( l_U512[2] ))
            {
                if (DOES_BLIP_EXIST( l_U517[2] ))
                {
                    REMOVE_BLIP( l_U517[2] );
                }
            }
            if ((IS_CHAR_INJURED( l_U512[2] )) AND ((IS_CHAR_INJURED( l_U512[1] )) AND (IS_CHAR_INJURED( l_U512[0] ))))
            {
                SETTIMERB( 0 );
                STOP_PED_SPEAKING( sub_3680(), 0 );
                SAY_AMBIENT_SPEECH( sub_3680(), "KILLED_ALL", 1, 1, 0 );
                STOP_PED_SPEAKING( sub_3680(), 1 );
                SET_PED_IS_BLIND_RAGING( sub_3680(), 0 );
                sub_5779();
            }
        }
        if (l_U530)
        {
            sub_22003();
        }
        switch (l_U675)
        {
            case 0:
            if (g_U9893._fU24)
            {
                SET_CUTSCENE_EXTRA_ROOM_POS( -130.70000000, 1489.80000000, 23.40000000 );
                START_CUTSCENE_NOW( "DF_3" );
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
                CLEAR_NAMED_CUTSCENE( "DF_3" );
            }
            SET_CHAR_COORDINATES( sub_3680(), -118.02340000, 1495.18600000, 17.44390000 );
            SET_CHAR_HEADING( sub_3680(), 224.28520000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            REQUEST_MODEL( 1168388225 );
            REQUEST_MODEL( -1746774780 );
            REQUEST_MODEL( 492147228 );
            REQUEST_MODEL( -1926041127 );
            REQUEST_MODEL( 1113677074 );
            REQUEST_ANIMS( "missdwayne3" );
            while ((NOT (HAS_MODEL_LOADED( 1113677074 ))) || ((NOT (HAS_MODEL_LOADED( -1926041127 ))) || ((NOT (HAS_MODEL_LOADED( 492147228 ))) || ((NOT (HAS_MODEL_LOADED( -1746774780 ))) || ((NOT (HAS_MODEL_LOADED( 1168388225 ))) || (NOT (HAVE_ANIMS_LOADED( "missdwayne3" ))))))))
            {
                WAIT( 0 );
            }
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            LOAD_SCENE( -116.83160000, 1489.19500000, 17.46760000 );
            SET_PLAYER_CONTROL_ADVANCED( sub_2401(), 1, 1, 1 );
            PRINT( "GM2_INSTR1", 7500, 0 );
            ADD_BLIP_FOR_COORD( l_U498._fU0, l_U498._fU4, l_U498._fU8, ref l_U497 );
            SET_ROUTE( l_U497, 1 );
            l_U675 = 2;
            break;
            case 2:
            if (NOT g_U64769)
            {
                if ((NOT (sub_25514( sub_3680() ))) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_2401(), 0 ))))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3680(), l_U498._fU0, l_U498._fU4, l_U498._fU8, 400, 400, 400, 0 ))
                    {
                        if (sub_25859( 8, "DF3_CALLB", "DF3AUD", 60000, 0 ))
                        {
                            g_U64769 = 1;
                        }
                    }
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3680(), l_U498._fU0, l_U498._fU4, l_U498._fU8, 100, 100, 100, 0 ))
            {
                l_U675 = 3;
            }
            break;
            case 3:
            LOAD_COMBAT_DECISION_MAKER( 2, ref l_U633 );
            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U633, 18 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U633, 2 );
            SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U633, 1 );
            LOAD_COMBAT_DECISION_MAKER( 2, ref l_U632 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U632, 2 );
            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U632, 12 );
            # -sub_C1FFC0-0xc214c8( 2, ref l_U631 );
            # -sub_C1FFC0-0xc214c8( 1, ref l_U638 );
            # -sub_C1FFC0-0xc214c8( 0, ref l_U639 );
            # -sub_C1FFC0-0xc214c8( 3, ref l_U634 );
            COPY_COMBAT_DECISION_MAKER( 65546, ref l_U637 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U637, 2 );
            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U637, 12 );
            LOAD_COMBAT_DECISION_MAKER( 7, ref l_U635 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U635, 2 );
            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U635, 12 );
            LOAD_COMBAT_DECISION_MAKER( 1, ref l_U636 );
            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U636, 12 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U636, 0 );
            SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U636, 0 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, 1143, 1670, 17, 1, 0.00000000 );
            l_U675 = 4;
            break;
            case 4:
            if (IS_CHAR_IN_ANY_CAR( sub_3680() ))
            {
                if (DOES_VEHICLE_EXIST( l_U528 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U528 );
                }
                GET_CAR_CHAR_IS_USING( sub_3680(), ref l_U528 );
                if (DOES_VEHICLE_EXIST( l_U528 ))
                {
                    if (NOT (IS_CAR_A_MISSION_CAR( l_U528 )))
                    {
                        SET_CAR_AS_MISSION_CAR( l_U528 );
                    }
                }
            }
            if (sub_3734( sub_3680() ))
            {
                SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS( sub_2401(), 1 );
                SET_ALL_RANDOM_PEDS_FLEE( sub_2401(), 0 );
                if (DOES_BLIP_EXIST( l_U497 ))
                {
                    SET_WANTED_MULTIPLIER( 0.00000000 );
                    DISABLE_POLICE_SCANNER();
                    CLEAR_PRINTS();
                    PRINT_NOW( "GM2_INSTR2", 7500, 0 );
                    REMOVE_BLIP( l_U497 );
                }
                if (NOT l_U529)
                {
                    SWITCH_PED_PATHS_OFF( l_U663._fU0, l_U663._fU4, l_U663._fU8, l_U666._fU0, l_U666._fU4, l_U666._fU8 );
                    sub_30401( 0, sub_3680(), "Niko", 0 );
                    for ( l_U641 = 1; l_U641 <= 9; l_U641++ )
                    {
                        CREATE_CHAR( 26, l_U486[l_U641], l_U579[l_U641]._fU0, l_U579[l_U641]._fU4, l_U579[l_U641]._fU8, ref l_U501[l_U641], 1 );
                        SET_CHAR_HEADING( l_U501[l_U641], l_U610[l_U641] );
                        SET_CHAR_DECISION_MAKER( l_U501[l_U641], l_U631 );
                        SET_COMBAT_DECISION_MAKER( l_U501[l_U641], l_U632 );
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U501[l_U641], 1 );
                        SET_CURRENT_CHAR_WEAPON( l_U501[l_U641], 0, 0 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U501[l_U641], 8 );
                        SET_CHAR_RELATIONSHIP( l_U501[l_U641], 1, 8 );
                        SET_ROOM_FOR_CHAR_BY_NAME( l_U501[l_U641], "clammainroom" );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U501[l_U641], 1 );
                        SET_CHAR_AS_ENEMY( l_U501[l_U641], 1 );
                    }
                    if (DOES_CHAR_EXIST( l_U501[7] ))
                    {
                        DELETE_CHAR( ref l_U501[7] );
                    }
                    sub_30401( 7, l_U501[6], "LATINO_THUG_3", 0 );
                    SET_AMBIENT_VOICE_NAME( l_U501[6], "LATINO_THUG_3" );
                    sub_30401( 5, l_U501[5], "LATINO_THUG_1", 0 );
                    SET_AMBIENT_VOICE_NAME( l_U501[5], "LATINO_THUG_1" );
                    TASK_CHAT_WITH_CHAR( l_U501[5], l_U501[3], 1, 1 );
                    sub_30401( 6, l_U501[3], "LATINO_THUG_2", 0 );
                    SET_AMBIENT_VOICE_NAME( l_U501[3], "LATINO_THUG_2" );
                    TASK_CHAT_WITH_CHAR( l_U501[3], l_U501[5], 0, 1 );
                    SET_COMBAT_DECISION_MAKER( l_U501[6], l_U633 );
                    SET_CHAR_COMPONENT_VARIATION( l_U501[6], 1, 1, 1 );
                    SET_CHAR_COMPONENT_VARIATION( l_U501[6], 6, 2, 1 );
                    SET_CHAR_COMPONENT_VARIATION( l_U501[6], 3, 2, 1 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U501[6], "clampalbkrm" );
                    CLEAR_SEQUENCE_TASK( l_U640 );
                    OPEN_SEQUENCE_TASK( ref l_U640 );
                    TASK_CHAR_SLIDE_TO_COORD_AND_PLAY_ANIM( 0, 1177.58500000, 1685.00000000, 16.72180000, 171.70000000, 1.00000000, "LEAN_RAIL_C", "missdwayne3", 4.00000000, 0, 1, 1, 0, 0 );
                    TASK_PLAY_ANIM( 0, "LEAN_RAIL_B", "missdwayne3", 4.00000000, 0, 1, 1, 0, 0 );
                    TASK_PLAY_ANIM( 0, "LEAN_RAIL_A", "missdwayne3", 4.00000000, 1, 0, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( l_U640 );
                    TASK_PERFORM_SEQUENCE( l_U501[4], l_U640 );
                    CLEAR_SEQUENCE_TASK( l_U640 );
                    CREATE_CHAR( 26, 1113677074, 1170.89000000, 1674.36000000, 15.72170000, ref l_U521, 1 );
                    SET_CHAR_HEADING( l_U521, 139.36700000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U521, "clammainroom" );
                    SET_CHAR_DECISION_MAKER( l_U521, l_U631 );
                    SET_COMBAT_DECISION_MAKER( l_U521, l_U633 );
                    sub_30401( 1, l_U521, "STRIPPER", 0 );
                    SET_AMBIENT_VOICE_NAME( l_U521, "STRIPPER" );
                    SET_CHAR_NEVER_TARGETTED( l_U521, 1 );
                    CREATE_CHAR( 26, 1113677074, 1150.98700000, 1670.85500000, 16.72180000, ref l_U522, 1 );
                    SET_CHAR_HEADING( l_U522, 292.68210000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U522, "clampalbkrm" );
                    SET_CHAR_DECISION_MAKER( l_U522, l_U631 );
                    SET_COMBAT_DECISION_MAKER( l_U522, l_U633 );
                    SET_CHAR_NEVER_TARGETTED( l_U522, 1 );
                    CREATE_CHAR( 26, 1168388225, l_U621[0]._fU0, l_U621[0]._fU4, l_U621[0]._fU8, ref l_U512[0], 1 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U512[0], 1 );
                    GIVE_WEAPON_TO_CHAR( l_U512[0], 7, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U512[0], 0, 0 );
                    SET_CHAR_HEADING( l_U512[0], 203.88820000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U512[0], "clammainroom" );
                    sub_30401( 4, l_U512[0], "JOSE", 0 );
                    SET_AMBIENT_VOICE_NAME( l_U512[0], "JOSE" );
                    SET_CHAR_COMPONENT_VARIATION( l_U512[0], 2, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U512[0], 0, 0, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U512[0], 1, 0, 0 );
                    SET_CHAR_PROP_INDEX( l_U512[0], 1, 0 );
                    SET_PED_DIES_WHEN_INJURED( l_U512[0], 1 );
                    SET_CHAR_AS_ENEMY( l_U512[0], 1 );
                    SET_CHAR_DECISION_MAKER( l_U512[0], l_U631 );
                    SET_COMBAT_DECISION_MAKER( l_U512[0], l_U633 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U512[0], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U512[0], 7 );
                    SET_CHAR_RELATIONSHIP( l_U512[0], 1, 8 );
                    ALWAYS_USE_HEAD_ON_HORN_ANIM_WHEN_DEAD_IN_CAR( l_U512[0], 1 );
                    STOP_PED_WEAPON_FIRING_WHEN_DROPPED( l_U512[0] );
                    CREATE_CHAR( 26, -1746774780, l_U621[1]._fU0, l_U621[1]._fU4, l_U621[1]._fU8, ref l_U512[1], 1 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U512[1], 1 );
                    SET_CHAR_HEADING( l_U512[1], 333.30000000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U512[1], "clammainroom" );
                    sub_30401( 2, l_U512[1], "JAVIER", 0 );
                    SET_AMBIENT_VOICE_NAME( l_U512[1], "JAVIER" );
                    SET_CHAR_COMPONENT_VARIATION( l_U512[1], 2, 0, 2 );
                    SET_CHAR_COMPONENT_VARIATION( l_U512[1], 0, 1, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U512[1], 1, 1, 0 );
                    SET_CHAR_PROP_INDEX( l_U512[1], 1, 0 );
                    SET_CHAR_PROP_INDEX( l_U512[1], 0, 3 );
                    SET_CHAR_DECISION_MAKER( l_U512[1], l_U631 );
                    SET_PED_DIES_WHEN_INJURED( l_U512[1], 1 );
                    ALLOW_TARGET_WHEN_INJURED( l_U512[1], 1 );
                    SET_CHAR_AS_ENEMY( l_U512[1], 1 );
                    SET_COMBAT_DECISION_MAKER( l_U512[1], l_U632 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U512[1], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U512[1], 8 );
                    SET_CHAR_RELATIONSHIP( l_U512[1], 1, 8 );
                    ALWAYS_USE_HEAD_ON_HORN_ANIM_WHEN_DEAD_IN_CAR( l_U512[1], 1 );
                    ADD_SCENARIO_BLOCKING_AREA( 1151.07800000, 1668.39400000, 16.72190000, 1153.07800000, 1670.39400000, 16.72190000 );
                    ADD_SCENARIO_BLOCKING_AREA( l_U621[0]._fU0 + 2, l_U621[0]._fU4 + 2, l_U621[0]._fU8 + 2, l_U621[0]._fU0 - 2, l_U621[0]._fU4 - 2, l_U621[0]._fU8 - 2 );
                    CREATE_CHAR( 26, 1168388225, l_U621[2]._fU0, l_U621[2]._fU4, l_U621[2]._fU8, ref l_U512[2], 1 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U512[2], 1 );
                    SET_CHAR_HEADING( l_U512[2], 123.99680000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U512[2], "clampalbkrm" );
                    SET_CHAR_COMPONENT_VARIATION( l_U512[2], 2, 1, 0 );
                    SET_CHAR_COMPONENT_VARIATION( l_U512[2], 0, 1, 1 );
                    SET_CHAR_COMPONENT_VARIATION( l_U512[2], 1, 2, 1 );
                    SET_CHAR_DECISION_MAKER( l_U512[2], l_U631 );
                    SET_PED_DIES_WHEN_INJURED( l_U512[2], 1 );
                    SET_CHAR_AS_ENEMY( l_U512[2], 1 );
                    SET_COMBAT_DECISION_MAKER( l_U512[2], l_U633 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U512[2], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U512[2], 8 );
                    SET_CHAR_RELATIONSHIP( l_U512[2], 1, 8 );
                    ALWAYS_USE_HEAD_ON_HORN_ANIM_WHEN_DEAD_IN_CAR( l_U512[2], 1 );
                    TASK_CHAT_WITH_CHAR( l_U512[1], l_U521, 1, 1 );
                    TASK_CHAT_WITH_CHAR( l_U521, l_U512[1], 0, 1 );
                    SETTIMERA( 0 );
                    l_U530 = 1;
                    l_U529 = 1;
                }
                else if (NOT l_U546)
                {
                    if (TIMERA() >= 7500)
                    {
                        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_33124( l_U669 ))))
                        {
                            PRINT_NOW( "GM2_INSTR6", 7500, 1 );
                            l_U546 = 1;
                        }
                    }
                }
                if (NOT l_U537)
                {
                    if ((NOT (IS_CHAR_INJURED( l_U522 ))) AND (NOT (IS_CHAR_INJURED( l_U512[2] ))))
                    {
                        if (sub_33382( sub_3680() ))
                        {
                            TASK_SIT_DOWN_ON_NEAREST_OBJECT( l_U512[2], 2, 0, l_U621[2]._fU0, l_U621[2]._fU4, l_U621[2]._fU8, -45131371, 0.00000000, -2, 1 );
                            SET_CHAR_COORDINATES( l_U522, 1150.61700000, 1671.40700000, 15.72170000 );
                            SET_CHAR_HEADING( l_U522, 309.58620000 );
                            TASK_PLAY_ANIM( l_U522, "Dance_Loop_B", "missdwayne3", 4.00000000, 1, 1, 1, 0, 0 );
                            l_U537 = 1;
                        }
                    }
                }
                if (NOT l_U547)
                {
                    if (sub_33624( sub_3680() ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                        {
                            if (DOES_SCENARIO_EXIST_IN_AREA( l_U621[0]._fU0, l_U621[0]._fU4, l_U621[0]._fU8, 2.00000000, 1 ))
                            {
                                TASK_USE_NEAREST_SCENARIO_TO_POS_WARP( l_U512[0], l_U621[0]._fU0, l_U621[0]._fU4, l_U621[0]._fU8, 2.00000000 );
                                l_U547 = 1;
                            }
                        }
                    }
                }
                if (NOT l_U542)
                {
                    if ((NOT (IS_CHAR_INJURED( l_U501[6] ))) AND (LOCATE_CHAR_ANY_MEANS_2D( sub_3680(), 1148.27200000, 1674.10900000, 2.50000000, 2.50000000, 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U501[6] )))
                        {
                            TASK_LOOK_AT_CHAR( l_U501[6], sub_3680(), 6000, 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U512[2] )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U517[2] )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U512[2], ref l_U517[2] );
                            }
                        }
                        sub_3896( "DF3_APPR", ref l_U669, 6, 1 );
                        l_U542 = 1;
                    }
                }
                if (NOT l_U543[0])
                {
                    if (NOT (IS_CHAR_INJURED( l_U501[6] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3680(), l_U501[6], 0.60000000, 0.60000000, 0 ))
                        {
                            SET_CHAR_RELATIONSHIP( l_U501[6], 5, 0 );
                            l_U543[0] = 1;
                        }
                    }
                }
                if (NOT l_U539[0])
                {
                    if (LOCATE_CHAR_ANY_MEANS_2D( sub_3680(), 1189.10900000, 1692.10500000, 2.50000000, 2.50000000, 0 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U517[0] )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U512[0], ref l_U517[0] );
                            }
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U501[3] ))) AND (NOT (IS_CHAR_INJURED( l_U501[5] ))))
                        {
                            CLEAR_CHAR_TASKS( l_U501[5] );
                            CLEAR_CHAR_TASKS( l_U501[3] );
                            CLEAR_PRINTS();
                            sub_3896( "DF3_CHAT", ref l_U669, 6, 1 );
                            WAIT( 100 );
                            l_U539[0] = 1;
                        }
                    }
                }
                else if (NOT l_U539[1])
                {
                    if (NOT (sub_33124( l_U669 )))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U501[3] ))) AND (NOT (IS_CHAR_INJURED( l_U501[5] ))))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U640 );
                            TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "chat_outro_l", "missdwayne3", 1000.00000000, 0, 1, 1, 1, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( 0, "LEAN_BALCONY_A", "missdwayne3", 1000.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( 0, "LEAN_BALCONY_B", "missdwayne3", 1000.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( 0, "LEAN_BALCONY_c", "missdwayne3", 1000.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( 0, "LEAN_BALCONY_A", "missdwayne3", 1000.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( 0, "LEAN_BALCONY_c", "missdwayne3", 1000.00000000, 1, 0, 0, 0, 0 );
                            CLOSE_SEQUENCE_TASK( l_U640 );
                            TASK_PERFORM_SEQUENCE( l_U501[3], l_U640 );
                            CLEAR_SEQUENCE_TASK( l_U640 );
                            OPEN_SEQUENCE_TASK( ref l_U640 );
                            TASK_STAND_STILL( 0, 656 );
                            TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "chat_outro_r", "missdwayne3", 1000.00000000, 0, 1, 1, 1, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( 0, "LEAN_BALCONY_A", "missdwayne3", 1000.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( 0, "LEAN_BALCONY_c", "missdwayne3", 1000.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( 0, "LEAN_BALCONY_b", "missdwayne3", 1000.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( 0, "LEAN_BALCONY_A", "missdwayne3", 1000.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM( 0, "LEAN_BALCONY_a", "missdwayne3", 1000.00000000, 1, 0, 0, 0, 0 );
                            CLOSE_SEQUENCE_TASK( l_U640 );
                            TASK_PERFORM_SEQUENCE( l_U501[5], l_U640 );
                            CLEAR_SEQUENCE_TASK( l_U640 );
                            l_U539[1] = 1;
                        }
                    }
                }
                if (NOT l_U532[0])
                {
                    if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3680(), 1198.64200000, 1698.29900000, 17.72180000, 0.80000000, 0.80000000, 1.00000000, 0 ))
                        {
                            TASK_LOOK_AT_CHAR( l_U512[0], sub_3680(), 3000, 0 );
                            sub_3896( "DF3_JOSE", ref l_U669, 6, 1 );
                            l_U532[0] = 1;
                        }
                    }
                }
                else if (NOT l_U532[1])
                {
                    if (NOT (sub_33124( l_U669 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3680(), 1198.46500000, 1696.40000000, 17.72180000, 1.30000000, 1.30000000, 1.00000000, 0 ))
                            {
                                SAY_AMBIENT_SPEECH( l_U512[0], "GENERIC_FUCK_OFF", 1, 1, 0 );
                                TASK_COMBAT( l_U512[0], sub_3680() );
                                l_U532[1] = 1;
                            }
                        }
                    }
                }
                if (NOT l_U532[2])
                {
                    if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3680(), 1198.46500000, 1696.40000000, 17.72180000, 1.30000000, 1.30000000, 1.00000000, 0 ))
                        {
                            GET_CURRENT_CHAR_WEAPON( sub_3680(), ref l_U644 );
                            if (NOT (l_U644 == 3))
                            {
                                if (NOT (l_U644 == 1))
                                {
                                    if (NOT (l_U644 == 0))
                                    {
                                        if ((IS_PLAYER_TARGETTING_CHAR( sub_2401(), l_U512[0] )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2401(), l_U512[0] )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U512[0], "GENERIC_FUCK_OFF", 1, 1, 0 );
                                            TASK_COMBAT( l_U512[0], sub_3680() );
                                            l_U532[2] = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (NOT l_U532[3])
                {
                    if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                    {
                        if (IS_CHAR_SHOOTING( l_U512[0] ))
                        {
                            l_U552 = 1;
                            l_U532[3] = 1;
                        }
                    }
                }
                if (LOCATE_CHAR_ON_FOOT_3D( sub_3680(), l_U621[1]._fU0, l_U621[1]._fU4, l_U621[1]._fU8, 4.00000000, 4.00000000, 1.50000000, 0 ))
                {
                    if (NOT l_U531)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U512[1] )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U517[1] )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U512[1], ref l_U517[1] );
                                sub_3896( "DF3_JAVS", ref l_U669, 6, 1 );
                            }
                            l_U531 = 1;
                        }
                    }
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U497 )))
            {
                if ((NOT (DOES_BLIP_EXIST( l_U517[2] ))) AND ((NOT (DOES_BLIP_EXIST( l_U517[1] ))) AND (NOT (DOES_BLIP_EXIST( l_U517[0] )))))
                {
                    ENABLE_POLICE_SCANNER();
                    SET_WANTED_MULTIPLIER( 1.00000000 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "GM2_INSTR1", 7500, 0 );
                    ADD_BLIP_FOR_COORD( l_U498._fU0, l_U498._fU4, l_U498._fU8, ref l_U497 );
                }
            }
            break;
            case 5:
            sub_36107();
            if (IS_VEH_DRIVEABLE( l_U526 ))
            {
                GET_DRIVER_OF_CAR( l_U526, ref l_U516 );
                if (l_U516 == nil)
                {
                    ;
                }
                else
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 32767, ref uVar3 );
                    SET_CAR_RANDOM_ROUTE_SEED( l_U526, uVar3 );
                }
            }
            if (l_U565)
            {
                EXTINGUISH_FIRE_AT_POINT( 1149.65700000, 1672.27400000, 15.72180000, 8.00000000 );
                for ( l_U641 = 0; l_U641 <= 2; l_U641++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U512[l_U641] )))
                    {
                        SET_CHAR_INVINCIBLE( l_U512[l_U641], 0 );
                        FREEZE_CHAR_POSITION( l_U512[l_U641], 0 );
                    }
                }
                for ( l_U641 = 1; l_U641 <= 9; l_U641++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U501[l_U641] )))
                    {
                        SET_CHAR_INVINCIBLE( l_U501[l_U641], 0 );
                        FREEZE_CHAR_POSITION( l_U501[l_U641], 0 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U521 )))
                {
                    SET_CHAR_INVINCIBLE( l_U521, 0 );
                    FREEZE_CHAR_POSITION( l_U521, 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U522 )))
                {
                    SET_CHAR_INVINCIBLE( l_U522, 0 );
                    FREEZE_CHAR_POSITION( l_U522, 0 );
                }
                DISABLE_POLICE_SCANNER();
                SET_WANTED_MULTIPLIER( 0.00000000 );
                l_U565 = 0;
            }
            if (NOT l_U566)
            {
                if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                {
                    GET_CURRENT_CHAR_WEAPON( l_U512[0], ref l_U644 );
                    if (l_U644 == 14)
                    {
                        SET_CHAR_ACCURACY( l_U512[0], 10 );
                        l_U566 = 1;
                    }
                }
            }
            if (NOT l_U538)
            {
                if (LOCATE_CHAR_ANY_MEANS_2D( sub_3680(), 1148.27200000, 1674.10900000, 2.50000000, 2.50000000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U512[2] )))
                    {
                        if (IS_CHAR_ON_SCREEN( l_U512[2] ))
                        {
                            CREATE_CHAR( 26, -1926041127, 1156.14300000, 1678.97000000, 17.00000000, ref l_U523[0], 1 );
                            SET_CHAR_HEADING( l_U523[0], 141.16510000 );
                            SET_CHAR_DECISION_MAKER( l_U523[0], l_U631 );
                            SET_COMBAT_DECISION_MAKER( l_U523[0], l_U632 );
                            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U523[0] );
                            GIVE_WEAPON_TO_CHAR( l_U523[0], 7, 30000, 0 );
                            SET_CHAR_RELATIONSHIP_GROUP( l_U523[0], 8 );
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U523[0], "clammainroom" );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U523[0], 1156.14300000, 1678.97000000, 17.00000000, 5.00000000 );
                            SET_CHAR_RELATIONSHIP( l_U523[0], 5, 0 );
                            CREATE_CHAR( 26, -1926041127, 1153.85000000, 1685.20500000, 17.00000000, ref l_U523[1], 1 );
                            SET_CHAR_HEADING( l_U523[1], 169.07000000 );
                            SET_CHAR_DECISION_MAKER( l_U523[1], l_U631 );
                            SET_COMBAT_DECISION_MAKER( l_U523[1], l_U632 );
                            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U523[1] );
                            GIVE_WEAPON_TO_CHAR( l_U523[1], 7, 30000, 0 );
                            SET_CHAR_RELATIONSHIP_GROUP( l_U523[1], 8 );
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U523[1], "clammainroom" );
                            SET_CHAR_RELATIONSHIP( l_U523[1], 5, 0 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U523[1], 1153.85000000, 1685.20500000, 17.00000000, 5.00000000 );
                            l_U538 = 1;
                        }
                    }
                }
            }
            if (NOT l_U557)
            {
                if (LOCATE_CHAR_ON_FOOT_2D( sub_3680(), 1152.79500000, 1678.53700000, 0.80000000, 0.80000000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U501[6] )))
                    {
                        CLEAR_CHAR_TASKS( l_U501[6] );
                        SET_CHAR_COORDINATES( l_U501[6], 1149.65700000, 1672.27400000, 15.72180000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U501[6], 1 );
                        OPEN_SEQUENCE_TASK( ref l_U640 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 1148.13600000, 1676.42600000, 15.72190000, 3, 0.20000000, 0.10000000, sub_3680(), 0 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 1149.82800000, 1672.72500000, 15.72190000, 3, 0.20000000, 0.10000000, sub_3680(), 0 );
                        CLOSE_SEQUENCE_TASK( l_U640 );
                        TASK_PERFORM_SEQUENCE( l_U501[6], l_U640 );
                        CLEAR_SEQUENCE_TASK( l_U640 );
                        SETTIMERB( 0 );
                    }
                    l_U557 = 1;
                }
            }
            else if (NOT l_U558)
            {
                if (NOT (IS_CHAR_INJURED( l_U501[6] )))
                {
                    if (TIMERB() >= 6000)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U501[6], 0 );
                        l_U558 = 1;
                    }
                }
            }
            break;
        }
    }
    return;
}

void sub_129()
{
    sub_138();
    return;
}

void sub_138()
{
    int iVar2;

    iVar2 = 7;
    sub_152( iVar2 );
    sub_1328( iVar2 );
    return;
}

void sub_152(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_196();
        sub_357();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_465();
            sub_504();
        }
    }
    sub_580();
    sub_681();
    uVar5 = sub_794( uParam0 );
    sub_1235( uVar5, 0 );
    return;
}

void sub_196()
{
    sub_210( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_310();
    }
    return;
}

void sub_210(int iParam0)
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

void sub_310()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_357()
{
    sub_366();
    return;
}

void sub_366()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_465()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_504()
{
    sub_513();
    return;
}

void sub_513()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_580()
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

void sub_681()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_703();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_703()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_794(unknown uParam0)
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
    sub_1193( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1193(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1235(int iParam0, boolean bParam1)
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

void sub_1328(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1337();
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
        sub_2112();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1337()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1375( 5, g_U569[I] )) == 1))
        {
            if ((sub_1375( 1, g_U569[I] )) != 0)
            {
                sub_1661( I );
            }
        }
    }
    if (NOT sub_1827())
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

int sub_1375(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1661(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1746( g_U569 - 1 );
    return;
}

void sub_1746(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1827()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1375( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2112()
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

void sub_2239()
{
    l_U660 = {1197.58000000, 1702.07000000, 17.72180000};
    l_U663 = {-2.00000000, -2.00000000, -3.00000000};
    l_U666 = {2.00000000, 2.00000000, 3.00000000};
    l_U663 = {l_U660 + l_U663};
    l_U666 = {l_U660 + l_U666};
    SWITCH_PED_PATHS_ON( l_U663._fU0, l_U663._fU4, l_U663._fU8, l_U666._fU0, l_U666._fU4, l_U666._fU8 );
    SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS( sub_2401(), 0 );
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    sub_2447();
    SET_CREATE_RANDOM_COPS( 1 );
    sub_2607( 0 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, 1143, 1670, 17, 0, 0.00000000 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    ENABLE_POLICE_SCANNER();
    REMOVE_DECISION_MAKER( l_U631 );
    REMOVE_DECISION_MAKER( l_U632 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2401()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2447()
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

void sub_2607(unknown uParam0)
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

void sub_3500(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3519();
    return;
}

void sub_3519()
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

void sub_3680()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_3734(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if ((iVar3 == (GET_HASH_KEY( "clamfronrm" ))) || ((iVar3 == (GET_HASH_KEY( "clammainroom" ))) || ((iVar3 == (GET_HASH_KEY( "clamchangeroom" ))) || (iVar3 == (GET_HASH_KEY( "clampalbkrm" ))))))
    {
        return 1;
    }
    return 0;
}

void sub_3896(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_3919( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_3919(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_3973( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_3973(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_3995( iParam1 )))
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
    sub_4687( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_3995(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4072( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_4072( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_4072( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_4072(unknown uParam0)
{
    return;
}

void sub_4687(int iParam0, int iParam1)
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

void sub_5779()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    sub_5799( 24 );
    UNLOCK_MISSION_NEWS_STORY( 24 );
    sub_9012( 34 );
    sub_9766();
    CLEAR_WANTED_LEVEL( sub_2401() );
    sub_21395( l_U485, "DF3_CALLP", "DF3AUD", 10000, 0 );
    sub_2239();
    return;
}

void sub_5799(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_5886( iParam0 ))
    {
        sub_6948( iParam0 );
    }
    return;
}

int sub_5886(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_5943( ref uVar3, 1, 0, 0 );
    sub_6555( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_4072( "\n ----------------------------------------------------------------" );
    sub_6841( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_4072( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_5943(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_5996( iParam0, uParam1, uParam2 );
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
        sub_6128( iParam0 + 0 );
    }
    return;
}

void sub_5996(int iParam0, int iParam1, int iParam2)
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
        sub_6128( iParam0 + 0 );
    }
    return;
}

void sub_6128(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_6159( iParam0->_fU4 )))
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

int sub_6159(unknown uParam0)
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

void sub_6555(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_6841(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6948(unknown uParam0)
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
        sub_7159( 20, 6, 16383, 16383, ref uVar4 );
        sub_7835( ref uVar4, 7 );
        sub_7866( ref uVar4, 0 );
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
        sub_7159( 20, 7, 9, 16383, ref uVar4 );
        sub_7835( ref uVar4, 7 );
        sub_7866( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_7159(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_7183( uParam0, 0, iParam4 + 0 );
    sub_7183( uParam1, 1, iParam4 + 0 );
    sub_7183( uParam2, 2, iParam4 + 0 );
    sub_7183( uParam3, 3, iParam4 + 0 );
    sub_7183( 0, 4, iParam4 + 0 );
    sub_7183( 1, 5, iParam4 + 0 );
    sub_7183( 65535, 6, iParam4 + 0 );
    sub_7183( 0, 12, iParam4 + 0 );
    sub_7183( 0, 11, iParam4 + 0 );
    sub_7183( 0, 14, iParam4 + 0 );
    sub_7183( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_7183( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_7183( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_7183(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_7835(int iParam0, unknown uParam1)
{
    sub_7183( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_7866(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_7906())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_8593( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_8392( iVar5 );
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

int sub_7906()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_7940( 5, g_U968[I] )) == 7)
        {
            sub_8392( I );
            return 1;
        }
    }
    return 0;
}

int sub_7940(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_8392(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_8465( 39 );
    return;
}

void sub_8465(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_8593(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_8654( uParam0, g_U968[Result] ))
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

int sub_8654(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_9012(unknown uParam0)
{
    switch (uParam0)
    {
        case 21:
        if (g_U1965[0] == 0)
        {
            sub_5943( ref g_U1967[0], 4, 0, 0 );
            g_U1965[0] = 1;
        }
        break;
        case 22:
        if (g_U1984[0] == 0)
        {
            sub_5943( ref g_U1986[0], 4, 0, 0 );
            g_U1984[0] = 1;
        }
        break;
        case 23:
        if (g_U2003[0] == 0)
        {
            sub_5943( ref g_U2005[0], 4, 0, 0 );
            g_U2003[0] = 1;
        }
        break;
        case 24:
        if (g_U2022[0] == 0)
        {
            sub_5943( ref g_U2024[0], 4, 0, 0 );
            g_U2022[0] = 1;
        }
        break;
        case 25:
        if (g_U2041[0] == 0)
        {
            sub_5943( ref g_U2043[0], 4, 0, 0 );
            g_U2041[0] = 1;
        }
        break;
        case 26:
        if (g_U2060[0] == 0)
        {
            sub_5943( ref g_U2062[0], 4, 0, 0 );
            g_U2060[0] = 1;
        }
        break;
        case 27:
        if (g_U2079[0] == 0)
        {
            sub_5943( ref g_U2081[0], 4, 0, 0 );
            g_U2079[0] = 1;
        }
        break;
        case 28:
        if (g_U2098[0] == 0)
        {
            sub_5943( ref g_U2100[0], 4, 0, 0 );
            g_U2098[0] = 1;
        }
        break;
        case 29:
        if (g_U2117[0] == 0)
        {
            sub_5943( ref g_U2119[0], 4, 0, 0 );
            g_U2117[0] = 1;
        }
        break;
        case 30:
        if (g_U2136[0] == 0)
        {
            sub_5943( ref g_U2138[0], 4, 0, 0 );
            g_U2136[0] = 1;
        }
        break;
        case 31:
        if (g_U2155[0] == 0)
        {
            sub_5943( ref g_U2157[0], 4, 0, 0 );
            g_U2155[0] = 1;
        }
        break;
        case 32:
        if (g_U2174[0] == 0)
        {
            sub_5943( ref g_U2176[0], 4, 0, 0 );
            g_U2174[0] = 1;
        }
        break;
        case 33:
        if (g_U2193[0] == 0)
        {
            sub_5943( ref g_U2195[0], 4, 0, 0 );
            g_U2193[0] = 1;
        }
        break;
        case 34:
        if (g_U2212[0] == 0)
        {
            sub_5943( ref g_U2214[0], 4, 0, 0 );
            g_U2212[0] = 1;
        }
        break;
    }
    return;
}

void sub_9766()
{
    sub_9775();
    return;
}

void sub_9775()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_9793();
    sub_9852( iVar2, iVar3, iVar4 );
    return;
}

void sub_9793()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_9852(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 7;
    sub_9883( iVar5, uParam0, uParam1, uParam2, "Friend_8" );
    return;
}

void sub_9883(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_9979( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_9979( ref cVar9 );
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
            sub_9979( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_9979( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_9979( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_9979( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_10556( iParam0, iVar7 );;;
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
                sub_10953( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_10953( 0, 4 );
            }
        }
    }
    if (NOT (sub_11042( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2401(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2401() );
    }
    sub_1337();
    bVar27 = true;
    uVar28 = sub_10556( iParam0, iVar7 );
    uVar29 = sub_794( iParam0 );
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
                sub_20418( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_20848();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_20933( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_20990( iParam0 );
                sub_21029( 0 );
                sub_1235( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_21137();
        }
    }
    if (bParam2)
    {
        sub_20848();
        sub_21225();
        sub_21029( 0 );
    }
    if (bParam3)
    {
        sub_20848();
        sub_21265();
        sub_21029( 0 );
        sub_1235( uVar29, 0 );
    }
    sub_681();
    return;
}

void sub_9979(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_10556(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1193( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_10953(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_11042(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_11250( uParam1 );
        break;
        case 1:
        bVar8 = sub_13328( uParam1 );
        break;
        case 2:
        bVar8 = sub_13554( uParam1 );
        break;
        case 3:
        bVar8 = sub_13704( uParam1 );
        break;
        case 4:
        bVar8 = sub_13982( uParam1 );
        break;
        case 5:
        bVar8 = sub_14285( uParam1 );
        break;
        case 6:
        bVar8 = sub_14484( uParam1 );
        break;
        case 7:
        bVar8 = sub_14710( uParam1 );
        break;
        case 8:
        bVar8 = sub_14945( uParam1 );
        break;
        case 9:
        bVar8 = sub_15320( uParam1 );
        break;
        case 10:
        bVar8 = sub_15567( uParam1 );
        break;
        case 11:
        bVar8 = sub_15706( uParam1 );
        break;
        case 12:
        bVar8 = sub_16005( uParam1 );
        break;
        case 13:
        bVar8 = sub_16233( uParam1 );
        break;
        case 14:
        bVar8 = sub_16520( uParam1 );
        break;
        case 15:
        bVar8 = sub_16802( uParam1 );
        break;
        case 16:
        bVar8 = sub_17084( uParam1 );
        break;
        case 17:
        bVar8 = sub_17285( uParam1 );
        break;
        case 18:
        bVar8 = sub_17358( uParam1 );
        break;
        case 19:
        bVar8 = sub_17572( uParam1 );
        break;
        case 20:
        bVar8 = sub_17825( uParam1 );
        break;
        case 21:
        bVar8 = sub_18072( uParam1 );
        break;
        case 22:
        bVar8 = sub_18273( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_12933( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_10556( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_18596( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_11250(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_11529( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_11529( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_11529( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_11529( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_11529( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_11529( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_11529( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_11529( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_11529( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_11529( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_11529( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_11529( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_11529( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_11529( iVar3, 0, 3, 1, 0, 0 );
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
        sub_11529( iVar3, 0, sub_12811(), sub_13077(), 0, 0 );
        break;
        default:
        sub_13236( "Friend 1", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Friend 1", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_11529(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_11540( uParam1 );
    sub_11714( uParam0, 0, uParam2 );
    sub_11714( uParam0, 1, uParam3 );
    sub_11714( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_9793();
    return;
}

void sub_11540(unknown uParam0)
{
    ADD_SCORE( sub_2401(), uParam0 );
    sub_11565( uParam0 );
    return;
}

void sub_11565(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1193( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_11714(unknown uParam0, int iParam1, int iParam2)
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
        sub_11871( uParam0 );
    }
    return;
}

void sub_11871(unknown uParam0)
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

int sub_12811()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12933( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_12933(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_13077()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12933( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_13236(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_13328(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11529( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_13236( "Contact 2", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 2", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13554(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_11529( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_13236( "Girl 3", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Girl 3", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13704(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_11529( iVar3, 0, sub_12811(), sub_13077(), 0, 0 );
        break;
        default:
        sub_13236( "Friend 4", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Friend 4", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13982(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11529( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11529( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11529( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11529( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_13236( "Contact 5", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 5", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14285(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_13236( "Contact 7", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 7", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14484(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11529( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_13236( "Contact 7b", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 7b", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14710(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_11529( iVar3, 0, sub_12811(), sub_13077(), 0, 0 );
        break;
        default:
        sub_13236( "Friend 8", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Friend 8", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14945(unknown uParam0)
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
        sub_11529( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_11529( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_11529( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_11529( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_11529( iVar3, 0, sub_12811(), sub_13077(), 0, 0 );
        break;
        default:
        sub_13236( "Friend 9", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Friend 9", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15320(unknown uParam0)
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
        sub_11529( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_11529( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_11529( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_13236( "Contact 10", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_13236( "Contact 10", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15567(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_13236( "Girl 11", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Girl 11", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15706(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11529( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11529( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11529( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11529( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_11529( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_13236( "Contact 12", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 12", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16005(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11529( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_13236( "Contact 13", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 13", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16233(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_11529( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_11529( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_11529( iVar3, 0, sub_12811(), sub_13077(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_13236( "Friend 15", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Friend 15", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16520(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11529( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11529( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11529( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_13236( "Contact 16", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 16", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16802(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11529( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11529( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_11529( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_13236( "Contact 18", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 18", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17084(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_13236( "Contact 19", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 19", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17285(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_13236( "Girl 20", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17358(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_13236( "Contact 21", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 21", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17572(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11529( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11529( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_13236( "Contact 22", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 22", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17825(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_11529( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11529( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11529( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_13236( "Contact 24", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 24", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18072(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11529( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11529( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11529( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_13236( "Contact 25", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_13236( "Contact 25", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18273(unknown uParam0)
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
        sub_11529( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_13236( "Girl 26", 1 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_13236( "Girl 26", 0 );
        sub_11529( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_18596(int iParam0, int iParam1)
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
    if (sub_18644( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_19375( iParam1 );
    }
    return;
}

int sub_18644(int iParam0, int iParam1)
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
            sub_18784( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_18784(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_18966( 0 );
    return;
}

void sub_18966(boolean bParam0)
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
        sub_19221();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_19221()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_19375(int iParam0)
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
        sub_19708( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_19708( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_19708( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_19708( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_19708( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_19708( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_19708( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_19708( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_19708( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_19708( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_19708( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_19708( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_19708( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_19708( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_19708( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_19708( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_19708( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_19708( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_19708( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_19708(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_20418(unknown uParam0, unknown uParam1)
{
    sub_20437( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_20437(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_20848()
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

int sub_20933(int iParam0, int iParam1)
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

void sub_20990(unknown uParam0)
{
    sub_580();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_21029(unknown uParam0)
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

void sub_21137()
{
    sub_21146();
    return;
}

void sub_21146()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_21225()
{
    sub_21146();
    return;
}

void sub_21265()
{
    sub_21146();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_21395(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    sub_21438( uParam0, ref cVar7, uParam2, uParam3, uParam4, 0 );
    return;
}

void sub_21438(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_22003()
{
    if (sub_3734( sub_3680() ))
    {
        if (NOT (HAS_MODEL_LOADED( 675415136 )))
        {
            REQUEST_MODEL( 675415136 );
        }
        if (NOT (HAS_MODEL_LOADED( 108773431 )))
        {
            REQUEST_MODEL( 108773431 );
        }
        if (l_U565)
        {
            EXTINGUISH_FIRE_AT_POINT( 1149.65700000, 1672.27400000, 15.72180000, 8.00000000 );
            for ( l_U641 = 0; l_U641 <= 2; l_U641++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U512[l_U641] )))
                {
                    SET_CHAR_INVINCIBLE( l_U512[l_U641], 0 );
                    FREEZE_CHAR_POSITION( l_U512[l_U641], 0 );
                }
            }
            for ( l_U641 = 1; l_U641 <= 9; l_U641++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U501[l_U641] )))
                {
                    SET_CHAR_INVINCIBLE( l_U501[l_U641], 0 );
                    FREEZE_CHAR_POSITION( l_U501[l_U641], 0 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U521 )))
            {
                SET_CHAR_INVINCIBLE( l_U521, 0 );
                FREEZE_CHAR_POSITION( l_U521, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U522 )))
            {
                SET_CHAR_INVINCIBLE( l_U522, 0 );
                FREEZE_CHAR_POSITION( l_U522, 0 );
            }
            DISABLE_POLICE_SCANNER();
            SET_WANTED_MULTIPLIER( 0.00000000 );
            SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS( sub_2401(), 1 );
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            SET_PARKED_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            SET_RANDOM_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            CLEAR_AREA_OF_COPS( 1149.65700000, 1672.27400000, 15.72180000, 100 );
            CLEAR_AREA_OF_CARS( 1149.65700000, 1672.27400000, 15.72180000, 100 );
            SET_CREATE_RANDOM_COPS( 0 );
            l_U565 = 0;
        }
        GET_CURRENT_CHAR_WEAPON( sub_3680(), ref l_U644 );
        for ( l_U641 = 1; l_U641 <= 2; l_U641++ )
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U512[l_U641], sub_3680(), 0 ))
            {
                l_U552 = 1;
            }
            if (NOT (IS_CHAR_INJURED( l_U512[l_U641] )))
            {
                if (IS_PED_IN_COMBAT( l_U512[l_U641] ))
                {
                    l_U552 = 1;
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U512[l_U641] )))
            {
                if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U512[l_U641], sub_3680() ))
                {
                    if (((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U512[l_U641], sub_3680() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_2401(), l_U512[l_U641] ))) || ((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U512[l_U641], sub_3680() )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2401(), l_U512[l_U641] ))))
                    {
                        if (NOT (l_U644 == 0))
                        {
                            l_U552 = 1;
                        }
                    }
                }
            }
        }
        for ( l_U641 = 1; l_U641 <= 9; l_U641++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U501[l_U641] )))
            {
                if (IS_PED_IN_COMBAT( l_U501[l_U641] ))
                {
                    l_U552 = 1;
                }
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U501[l_U641], sub_3680(), 0 ))
            {
                l_U552 = 1;
            }
            if (NOT (IS_CHAR_INJURED( l_U501[l_U641] )))
            {
                if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U501[l_U641], sub_3680() ))
                {
                    if (((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U501[l_U641], sub_3680() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_2401(), l_U501[l_U641] ))) || ((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U501[l_U641], sub_3680() )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2401(), l_U501[l_U641] ))))
                    {
                        SAY_AMBIENT_SPEECH( l_U501[l_U641], "GENERIC_FUCK_OFF", 1, 1, 0 );
                        if (NOT (l_U644 == 0))
                        {
                            l_U552 = 1;
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U501[6] )))
        {
            if (NOT (l_U644 == 0))
            {
                if ((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U501[6], sub_3680() )) AND (LOCATE_CHAR_ANY_MEANS_2D( sub_3680(), 1148.27200000, 1674.10900000, 2.50000000, 2.50000000, 0 )))
                {
                    PRINTNL();
                    PRINTNL();
                    PRINTNL();
                    PRINTSTRING( "HERE!!!!" );
                    PRINTNL();
                    PRINTNL();
                    PRINTNL();
                    SAY_AMBIENT_SPEECH( l_U501[6], "GENERIC_FUCK_OFF", 1, 1, 0 );
                    l_U552 = 1;
                }
            }
        }
        if ((l_U552) || ((IS_CHAR_ON_ANY_BIKE( sub_3680() )) || (IS_CHAR_SHOOTING( sub_3680() ))))
        {
            sub_2607( 0 );
            if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3680() )))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_3896( "DF3_KILL", ref l_U669, 7, 1 );
                }
                else
                {
                    l_U575 = 1;
                }
            }
            SET_WANTED_MULTIPLIER( 0.10000000 );
            for ( l_U641 = 0; l_U641 <= 2; l_U641++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U512[l_U641] )))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U517[l_U641] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U512[l_U641], ref l_U517[l_U641] );
                    }
                    GIVE_WEAPON_TO_CHAR( l_U512[l_U641], 7, 30000, 0 );
                    GIVE_WEAPON_TO_CHAR( l_U512[l_U641], l_U656[l_U641], 30000, 0 );
                    SET_CHAR_RELATIONSHIP( l_U512[l_U641], 5, 0 );
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U512[l_U641], l_U621[l_U641], 5.00000000 );
                }
            }
            for ( l_U641 = 1; l_U641 <= 9; l_U641++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U501[l_U641] )))
                {
                    SET_CHAR_RELATIONSHIP( l_U501[l_U641], 5, 0 );
                    GIVE_WEAPON_TO_CHAR( l_U501[l_U641], l_U645[l_U641], 30000, 0 );
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U501[l_U641], l_U579[l_U641], 5.00000000 );
                    TASK_SEEK_COVER_FROM_PED( l_U501[l_U641], sub_3680(), 5000 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U501[2] )))
            {
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U501[2], 1158, 1681, 17.25000000, 4.00000000 );
            }
            if (NOT (IS_CHAR_INJURED( l_U521 )))
            {
                CLEAR_CHAR_TASKS( l_U521 );
                SET_CHAR_DECISION_MAKER( l_U521, l_U634 );
                SET_COMBAT_DECISION_MAKER( l_U521, l_U636 );
                TASK_SEEK_COVER_FROM_PED( l_U521, sub_3680(), -1 );
                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U521, "PANIC", "PAIN_VOICE", 1, 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U522 )))
            {
                CLEAR_CHAR_TASKS( l_U522 );
                SET_CHAR_DECISION_MAKER( l_U522, l_U634 );
                SET_COMBAT_DECISION_MAKER( l_U522, l_U636 );
                TASK_SEEK_COVER_FROM_PED( l_U522, sub_3680(), -1 );
                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U522, "PANIC", "PAIN_VOICE", 1, 1, 0 );
            }
            SETTIMERA( 0 );
            SET_CREATE_RANDOM_COPS( 0 );
            if (sub_3734( sub_3680() ))
            {
                CLEAR_AREA_OF_COPS( 1191.13000000, 1691.23000000, 16.72080000, 500 );
            }
            SET_PED_IS_BLIND_RAGING( sub_3680(), 1 );
            l_U530 = 0;
            ADD_SCENARIO_BLOCKING_AREA( 1170.34700000 - 50, 1673.75800000 - 50, 15.72170000 - 50, 1170.34700000 + 50, 1673.75800000 + 50, 15.72170000 + 50 );
            l_U675 = 5;
        }
    }
    else if (NOT l_U565)
    {
        if (NOT l_U569)
        {
            for ( l_U641 = 0; l_U641 <= 2; l_U641++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U512[l_U641] )))
                {
                    SET_CHAR_INVINCIBLE( l_U512[l_U641], 1 );
                    FREEZE_CHAR_POSITION( l_U512[l_U641], 1 );
                }
            }
            for ( l_U641 = 1; l_U641 <= 9; l_U641++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U501[l_U641] )))
                {
                    SET_CHAR_INVINCIBLE( l_U501[l_U641], 1 );
                    FREEZE_CHAR_POSITION( l_U501[l_U641], 1 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U521 )))
            {
                SET_CHAR_INVINCIBLE( l_U521, 1 );
                FREEZE_CHAR_POSITION( l_U521, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U522 )))
            {
                SET_CHAR_INVINCIBLE( l_U522, 1 );
                FREEZE_CHAR_POSITION( l_U522, 1 );
            }
        }
        ENABLE_POLICE_SCANNER();
        SET_WANTED_MULTIPLIER( 1.00000000 );
        SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS( sub_2401(), 0 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_RANDOM_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CREATE_RANDOM_COPS( 1 );
        l_U565 = 1;
    }
    return;
}

int sub_25514(int iParam0)
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
                if (sub_25578( uVar3 ))
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

int sub_25578(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_25859(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_25919( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_25919(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_4072( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_4072( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2401() )))
    {
        sub_4072( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3680() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3680() )))
    {
        sub_4072( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_4072( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_26434()))
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
                sub_4072( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_26434()))
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
    sub_27806( uParam0, ref g_U91._fU176 );
    sub_29187( ref g_U91._fU160 );
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
        sub_29427( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_26434()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_26491())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_26491()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2401() )))
    {
        sub_4072( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_4072( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_4072( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_4072( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2401() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3680() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3680(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_4072( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3680() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_4072( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_4072( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2401() )))
    {
        sub_4072( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_27806(int iParam0, unknown uParam1)
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

void sub_29187(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_29427(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_30401(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6841( "\n PED NUMBER ", uParam0 );
    sub_29427( " ADDED WITH VOICE ", uParam2 );
    return;
}

int sub_33124(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_4072( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4072( "\n speech is not playing" );
    }
    return 0;
}

int sub_33382(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if (iVar3 == (GET_HASH_KEY( "clampalbkrm" )))
    {
        return 1;
    }
    return 0;
}

int sub_33624(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if (iVar3 == (GET_HASH_KEY( "clammainroom" )))
    {
        return 1;
    }
    return 0;
}

void sub_36107()
{
    switch (l_U578)
    {
        case 0:
        if ((NOT l_U542) || ((NOT l_U539[0]) || ((NOT l_U531) || (TIMERA() >= 25000))))
        {
            if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3680() )))
            {
                if (sub_3734( sub_3680() ))
                {
                    l_U530 = 0;
                    EXTINGUISH_FIRE_AT_POINT( 1149.65700000, 1672.27400000, 15.72180000, 8.00000000 );
                    for ( l_U641 = 0; l_U641 <= 2; l_U641++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U512[l_U641] )))
                        {
                            SET_CHAR_INVINCIBLE( l_U512[l_U641], 0 );
                            FREEZE_CHAR_POSITION( l_U512[l_U641], 0 );
                        }
                    }
                    for ( l_U641 = 1; l_U641 <= 9; l_U641++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U501[l_U641] )))
                        {
                            SET_CHAR_INVINCIBLE( l_U501[l_U641], 0 );
                            FREEZE_CHAR_POSITION( l_U501[l_U641], 0 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U521 )))
                    {
                        SET_CHAR_INVINCIBLE( l_U521, 0 );
                        FREEZE_CHAR_POSITION( l_U521, 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U522 )))
                    {
                        SET_CHAR_INVINCIBLE( l_U522, 0 );
                        FREEZE_CHAR_POSITION( l_U522, 0 );
                    }
                    if ((HAS_MODEL_LOADED( 108773431 )) AND (HAS_MODEL_LOADED( 675415136 )))
                    {
                        REQUEST_CAR_RECORDING( 877 );
                        REQUEST_CAR_RECORDING( 878 );
                        SUPPRESS_CAR_MODEL( 675415136 );
                        if (NOT l_U569)
                        {
                            if (l_U642 == 2)
                            {
                                PRINT( "GM2_INSTR5", 7500, 0 );
                            }
                            else
                            {
                                PRINT( "GM2_INSTR3", 7500, 0 );
                            }
                            l_U569 = 1;
                        }
                        if ((LOCATE_CHAR_ANY_MEANS_2D( sub_3680(), 1163.52400000, 1677.46900000, 15.00000000, 15.00000000, 0 )) || (sub_33382( sub_3680() )))
                        {
                            SET_CAR_GENERATORS_ACTIVE_IN_AREA( 1230.37200000 - 15, 1714.96300000 - 15, 16.32480000 - 15, 1230.37200000 + 15, 1714.96300000 + 15, 16.32480000 + 15, 0 );
                            SET_CAR_GENERATORS_ACTIVE_IN_AREA( 1217.51200000 - 5, 1693.32500000 - 5, 15.55270000 - 20, 1217.51200000 + 5, 1693.32500000 + 5, 15.55270000 + 5, 0 );
                            SET_CAR_GENERATORS_ACTIVE_IN_AREA( 1220.72900000 - 15, 1717.79900000, 15.52010000 - 15, 1220.72900000 + 15, 1717.79900000 + 15, 15.52010000 + 15, 0 );
                            CLEAR_AREA( 1230.37600000, 1714.96300000, 15.52140000, 30.00000000, 0 );
                            CLEAR_AREA_OF_CARS( 1230.37600000, 1714.96300000, 15.52140000, 40.00000000 );
                            CREATE_CAR( 675415136, 1230.37200000, 1714.96300000, 16.32480000, ref l_U526, 1 );
                            SET_VEHICLE_QUATERNION( l_U526, -0.00560000, 0.00120000, 0.70000000, 0.71410000 );
                            CLEAR_AREA( 1217.51200000, 1693.32500000, 15.55270000, 30.00000000, 0 );
                            CREATE_CAR( 108773431, 1217.51200000, 1693.32500000, 15.55270000, ref l_U527, 1 );
                            SET_CAR_HEADING( l_U527, 314.97940000 );
                            l_U559 = 1;
                        }
                        else
                        {
                            SET_CAR_GENERATORS_ACTIVE_IN_AREA( 1132.41700000 - 5, 1636.41900000 - 5, 15.60400000 - 5, 1132.41700000 + 5, 1636.41900000 + 5, 15.60400000 + 5, 0 );
                            SET_CAR_GENERATORS_ACTIVE_IN_AREA( 1126.16000000 - 5, 1661.65000000 - 5, 14.46840000 - 20, 1126.16000000 + 5, 1661.65000000 + 5, 14.46840000 + 5, 0 );
                            CLEAR_AREA( 1132.41700000, 1636.41900000, 15.60400000, 30.00000000, 0 );
                            CLEAR_AREA_OF_CARS( 1132.41700000, 1636.41900000, 15.60400000, 30.00000000 );
                            CREATE_CAR( 675415136, 1132.42100000, 1636.42200000, 16.21080000, ref l_U526, 1 );
                            SET_VEHICLE_QUATERNION( l_U526, 0.00970000, 0.02610000, -0.39630000, 0.91770000 );
                            CLEAR_AREA( 1126.16000000, 1661.65000000, 14.46840000, 30.00000000, 0 );
                            CREATE_CAR( 108773431, 1130.18900000, 1656.86400000, 15.56680000, ref l_U527, 1 );
                            SET_CAR_HEADING( l_U527, 29.38000000 );
                            l_U559 = 0;
                        }
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, 1143, 1670, 17, 0, 0.00000000 );
                        SWITCH_PED_PATHS_ON( l_U663._fU0, l_U663._fU4, l_U663._fU8, l_U666._fU0, l_U666._fU4, l_U666._fU8 );
                        REMOVE_BLIP( l_U497 );
                        l_U578++;
                    }
                }
            }
        }
        break;
        case 1:
        if (NOT (sub_3734( sub_3680() )))
        {
            sub_37581();
        }
        if (IS_VEH_DRIVEABLE( l_U526 ))
        {
            if ((NOT l_U548[2]) AND (NOT (IS_CHAR_INJURED( l_U512[2] ))))
            {
                CLEAR_CHAR_TASKS( l_U512[2] );
                SET_NEXT_DESIRED_MOVE_STATE( 4 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[2], 1 );
                OPEN_SEQUENCE_TASK( ref l_U640 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U526, -2 );
                CLOSE_SEQUENCE_TASK( l_U640 );
                TASK_PERFORM_SEQUENCE( l_U512[2], l_U640 );
                CLEAR_SEQUENCE_TASK( l_U640 );
                l_U561[2] = 1;
                if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                {
                    CLEAR_CHAR_TASKS( l_U512[0] );
                    SET_NEXT_DESIRED_MOVE_STATE( 4 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[0], 1 );
                    OPEN_SEQUENCE_TASK( ref l_U640 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U526, -2, 2 );
                    CLOSE_SEQUENCE_TASK( l_U640 );
                    TASK_PERFORM_SEQUENCE( l_U512[0], l_U640 );
                    CLEAR_SEQUENCE_TASK( l_U640 );
                }
                if (NOT (IS_CHAR_INJURED( l_U512[1] )))
                {
                    CLEAR_CHAR_TASKS( l_U512[1] );
                    SET_NEXT_DESIRED_MOVE_STATE( 4 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[1], 1 );
                    OPEN_SEQUENCE_TASK( ref l_U640 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U526, -2, 0 );
                    CLOSE_SEQUENCE_TASK( l_U640 );
                    TASK_PERFORM_SEQUENCE( l_U512[1], l_U640 );
                    CLEAR_SEQUENCE_TASK( l_U640 );
                }
            }
            else if ((NOT l_U548[0]) AND (NOT (IS_CHAR_INJURED( l_U512[0] ))))
            {
                CLEAR_CHAR_TASKS( l_U512[0] );
                SET_NEXT_DESIRED_MOVE_STATE( 4 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[0], 1 );
                OPEN_SEQUENCE_TASK( ref l_U640 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U526, -2 );
                CLOSE_SEQUENCE_TASK( l_U640 );
                TASK_PERFORM_SEQUENCE( l_U512[0], l_U640 );
                CLEAR_SEQUENCE_TASK( l_U640 );
                l_U561[0] = 1;
                if (NOT (IS_CHAR_INJURED( l_U512[1] )))
                {
                    CLEAR_CHAR_TASKS( l_U512[1] );
                    SET_NEXT_DESIRED_MOVE_STATE( 4 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[1], 1 );
                    OPEN_SEQUENCE_TASK( ref l_U640 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U526, -2, 0 );
                    CLOSE_SEQUENCE_TASK( l_U640 );
                    TASK_PERFORM_SEQUENCE( l_U512[1], l_U640 );
                    CLEAR_SEQUENCE_TASK( l_U640 );
                }
            }
            else if ((NOT l_U548[1]) AND (NOT (IS_CHAR_INJURED( l_U512[1] ))))
            {
                CLEAR_CHAR_TASKS( l_U512[1] );
                SET_NEXT_DESIRED_MOVE_STATE( 4 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[1], 1 );
                OPEN_SEQUENCE_TASK( ref l_U640 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U526, -2 );
                CLOSE_SEQUENCE_TASK( l_U640 );
                TASK_PERFORM_SEQUENCE( l_U512[1], l_U640 );
                CLEAR_SEQUENCE_TASK( l_U640 );
                l_U561[1] = 1;
            };;;
        }
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "RUN" );
        PRINTNL();
        PRINTNL();
        PRINTNL();
        l_U578++;
        break;
        case 2:
        if (NOT (sub_3734( sub_3680() )))
        {
            sub_37581();
        }
        if (NOT l_U548[0])
        {
            if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U512[0], sub_3680(), 0 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U512[0] ))
                    {
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U512[0], 0 );
                        l_U548[0] = 1;
                    }
                }
                else
                {
                    l_U548[0] = 1;
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U512[0] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[0], 0 );
                TASK_COMBAT( l_U512[0], sub_3680() );
                l_U548[0] = 1;
            }
            else
            {
                l_U548[0] = 1;
            }
            if (l_U561[0])
            {
                l_U578 = 1;
            }
        }
        if (NOT l_U548[1])
        {
            if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U512[1], sub_3680(), 0 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U512[1] )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U512[1] ))
                    {
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U512[1], 0 );
                        l_U548[1] = 1;
                    }
                }
                else
                {
                    l_U548[1] = 1;
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U512[1] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[1], 0 );
                TASK_COMBAT( l_U512[1], sub_3680() );
                l_U548[1] = 1;
            }
            else
            {
                l_U548[1] = 1;
            }
            if (l_U561[1])
            {
                l_U578 = 1;
            }
        }
        if (NOT l_U548[2])
        {
            if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U512[2], sub_3680(), 0 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U512[2] )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U512[2] ))
                    {
                        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U512[2], 0 );
                        l_U548[2] = 1;
                    }
                }
                else
                {
                    l_U548[2] = 1;
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U512[2] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[2], 0 );
                TASK_COMBAT( l_U512[2], sub_3680() );
                l_U548[2] = 1;
            }
            else
            {
                l_U548[2] = 1;
            }
            if (l_U561[2])
            {
                l_U578 = 1;
            }
        }
        if ((NOT (sub_3734( sub_3680() ))) AND ((l_U548[2]) AND ((l_U548[1]) AND (l_U548[0]))))
        {
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "ALL IN" );
            PRINTNL();
            PRINTNL();
            SET_CREATE_RANDOM_COPS( 1 );
            l_U578++;
        }
        break;
        case 3:
        if (NOT (sub_3734( sub_3680() )))
        {
            sub_37581();
        }
        if (sub_25514( sub_3680() ))
        {
            if (IS_SCREEN_FADED_OUT())
            {
                l_U570 = 1;
            }
            if (l_U570)
            {
                if (IS_SCREEN_FADING_IN())
                {
                    PRINT_NOW( "GM2_INSTR4", 7500, 1 );
                    if (DOES_CHAR_EXIST( l_U512[0] ))
                    {
                        DELETE_CHAR( ref l_U512[0] );
                    }
                    if (DOES_CHAR_EXIST( l_U512[1] ))
                    {
                        DELETE_CHAR( ref l_U512[1] );
                    }
                    if (DOES_CHAR_EXIST( l_U512[2] ))
                    {
                        DELETE_CHAR( ref l_U512[2] );
                    }
                    if (DOES_VEHICLE_EXIST( l_U526 ))
                    {
                        DELETE_CAR( ref l_U526 );
                    }
                    REMOVE_BLIP( l_U517[0] );
                    REMOVE_BLIP( l_U517[1] );
                    REMOVE_BLIP( l_U517[2] );
                    l_U643 = 1;
                    sub_40266();
                }
            }
        }
        if (IS_VEH_DRIVEABLE( l_U526 ))
        {
            if ((NOT (IS_CHAR_IN_CAR( sub_3680(), l_U526 ))) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 878 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 877 ))))
            {
                if (l_U559)
                {
                    GET_DRIVER_OF_CAR( l_U526, ref l_U516 );
                    if (NOT (IS_CHAR_INJURED( l_U516 )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U526, 877 );
                        SET_PLAYBACK_SPEED( l_U526, 0.95000000 );
                        if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U512[0] );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[0], 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U512[1] )))
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U512[1] );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[1], 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U512[2] )))
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U512[2] );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[2], 0 );
                        }
                        l_U576 = 1;
                        sub_40860( ref l_U516 );
                        l_U578++;
                    }
                }
                else
                {
                    GET_DRIVER_OF_CAR( l_U526, ref l_U516 );
                    if (NOT (IS_CHAR_INJURED( l_U516 )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U526, 878 );
                        SET_PLAYBACK_SPEED( l_U526, 0.95000000 );
                        if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U512[0] );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[0], 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U512[1] )))
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U512[1] );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[1], 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U512[2] )))
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U512[2] );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[2], 0 );
                        }
                        l_U576 = 1;
                        sub_40860( ref l_U516 );
                        l_U578++;
                    }
                }
            }
        }
        break;
        case 4:
        sub_40860( ref l_U516 );
        if (sub_25514( sub_3680() ))
        {
            if (IS_SCREEN_FADED_OUT())
            {
                l_U570 = 1;
            }
            if (l_U570)
            {
                if (IS_SCREEN_FADING_IN())
                {
                    PRINT_NOW( "GM2_INSTR4", 7500, 1 );
                    if (DOES_CHAR_EXIST( l_U512[0] ))
                    {
                        DELETE_CHAR( ref l_U512[0] );
                    }
                    if (DOES_CHAR_EXIST( l_U512[1] ))
                    {
                        DELETE_CHAR( ref l_U512[1] );
                    }
                    if (DOES_CHAR_EXIST( l_U512[2] ))
                    {
                        DELETE_CHAR( ref l_U512[2] );
                    }
                    if (DOES_VEHICLE_EXIST( l_U526 ))
                    {
                        DELETE_CAR( ref l_U526 );
                    }
                    REMOVE_BLIP( l_U517[0] );
                    REMOVE_BLIP( l_U517[1] );
                    REMOVE_BLIP( l_U517[2] );
                    l_U643 = 1;
                    sub_40266();
                }
            }
        }
        if (NOT (sub_3734( sub_3680() )))
        {
            sub_37581();
        }
        if (IS_VEH_DRIVEABLE( l_U526 ))
        {
            if (IS_CHAR_IN_CAR( sub_3680(), l_U526 ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U526 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U526 );
                }
            }
            GET_DRIVER_OF_CAR( l_U526, ref l_U516 );
            if (IS_CHAR_INJURED( l_U516 ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U526 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U526 );
                }
            }
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U526 )))
            {
                l_U578++;
            }
        }
        break;
        case 5:
        sub_40860( ref l_U516 );
        if (sub_25514( sub_3680() ))
        {
            if (IS_SCREEN_FADED_OUT())
            {
                l_U570 = 1;
            }
            if (l_U570)
            {
                if (IS_SCREEN_FADING_IN())
                {
                    PRINT_NOW( "GM2_INSTR4", 7500, 1 );
                    if (DOES_CHAR_EXIST( l_U512[0] ))
                    {
                        DELETE_CHAR( ref l_U512[0] );
                    }
                    if (DOES_CHAR_EXIST( l_U512[1] ))
                    {
                        DELETE_CHAR( ref l_U512[1] );
                    }
                    if (DOES_CHAR_EXIST( l_U512[2] ))
                    {
                        DELETE_CHAR( ref l_U512[2] );
                    }
                    if (DOES_VEHICLE_EXIST( l_U526 ))
                    {
                        DELETE_CAR( ref l_U526 );
                    }
                    REMOVE_BLIP( l_U517[0] );
                    REMOVE_BLIP( l_U517[1] );
                    REMOVE_BLIP( l_U517[2] );
                    l_U643 = 1;
                    sub_40266();
                }
            }
        }
        if (NOT (sub_3734( sub_3680() )))
        {
            sub_37581();
        }
        if (IS_VEH_DRIVEABLE( l_U526 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U512[2] )))
            {
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U512[2], 0 );
                SET_CHAR_DECISION_MAKER( l_U512[2], l_U639 );
                SET_COMBAT_DECISION_MAKER( l_U512[2], l_U636 );
                OPEN_SEQUENCE_TASK( ref l_U640 );
                TASK_COMBAT( 0, sub_3680() );
                CLOSE_SEQUENCE_TASK( l_U640 );
                TASK_PERFORM_SEQUENCE( l_U512[2], l_U640 );
                CLEAR_SEQUENCE_TASK( l_U640 );
                if (NOT (IS_CHAR_INJURED( l_U512[1] )))
                {
                    SET_CHAR_DECISION_MAKER( l_U512[1], l_U638 );
                    SET_COMBAT_DECISION_MAKER( l_U512[1], l_U637 );
                    SET_CHAR_RELATIONSHIP( l_U512[1], 5, 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U512[0] )))
                {
                    SET_COMBAT_DECISION_MAKER( l_U512[0], l_U637 );
                    SET_CHAR_DECISION_MAKER( l_U512[0], l_U638 );
                    SET_CHAR_RELATIONSHIP( l_U512[0], 5, 0 );
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U512[0] )))
            {
                SET_COMBAT_DECISION_MAKER( l_U512[0], l_U636 );
                SET_CHAR_DECISION_MAKER( l_U512[0], l_U639 );
                OPEN_SEQUENCE_TASK( ref l_U640 );
                TASK_COMBAT( 0, sub_3680() );
                CLOSE_SEQUENCE_TASK( l_U640 );
                TASK_PERFORM_SEQUENCE( l_U512[0], l_U640 );
                CLEAR_SEQUENCE_TASK( l_U640 );
                if (NOT (IS_CHAR_INJURED( l_U512[1] )))
                {
                    SET_COMBAT_DECISION_MAKER( l_U512[1], l_U637 );
                    SET_CHAR_DECISION_MAKER( l_U512[1], l_U638 );
                    SET_CHAR_RELATIONSHIP( l_U512[1], 5, 0 );
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U512[1] )))
            {
                SET_CHAR_DECISION_MAKER( l_U512[1], l_U639 );
                SET_COMBAT_DECISION_MAKER( l_U512[1], l_U636 );
                OPEN_SEQUENCE_TASK( ref l_U640 );
                TASK_COMBAT( 0, sub_3680() );
                CLOSE_SEQUENCE_TASK( l_U640 );
                TASK_PERFORM_SEQUENCE( l_U512[1], l_U640 );
                CLEAR_SEQUENCE_TASK( l_U640 );
            };;;
            if (IS_VEH_DRIVEABLE( l_U526 ))
            {
                GET_DRIVER_OF_CAR( l_U526, ref l_U516 );
            }
            SET_WANTED_MULTIPLIER( 1.00000000 );
            l_U578++;
        }
        break;
        case 6:
        if (sub_25514( sub_3680() ))
        {
            if (IS_SCREEN_FADED_OUT())
            {
                l_U570 = 1;
            }
            if (l_U570)
            {
                if (IS_SCREEN_FADING_IN())
                {
                    PRINT_NOW( "GM2_INSTR4", 7500, 1 );
                    if (DOES_CHAR_EXIST( l_U512[0] ))
                    {
                        DELETE_CHAR( ref l_U512[0] );
                    }
                    if (DOES_CHAR_EXIST( l_U512[1] ))
                    {
                        DELETE_CHAR( ref l_U512[1] );
                    }
                    if (DOES_CHAR_EXIST( l_U512[2] ))
                    {
                        DELETE_CHAR( ref l_U512[2] );
                    }
                    if (DOES_VEHICLE_EXIST( l_U526 ))
                    {
                        DELETE_CAR( ref l_U526 );
                    }
                    REMOVE_BLIP( l_U517[0] );
                    REMOVE_BLIP( l_U517[1] );
                    REMOVE_BLIP( l_U517[2] );
                    l_U643 = 1;
                    sub_40266();
                }
            }
        }
        sub_40860( ref l_U516 );
        if (NOT (sub_3734( sub_3680() )))
        {
            sub_37581();
        }
        if (IS_VEH_DRIVEABLE( l_U526 ))
        {
            GET_DRIVER_OF_CAR( l_U526, ref l_U516 );
        }
        if (NOT (IS_CHAR_INJURED( l_U512[0] )))
        {
            if (NOT l_U553[0])
            {
                if ((sub_43705()) || ((l_U516 == nil) || ((NOT (IS_CHAR_IN_ANY_CAR( l_U512[0] ))) || ((IS_CHAR_INJURED( l_U516 )) || (NOT (IS_VEH_DRIVEABLE( l_U526 )))))))
                {
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U512[0], 1 );
                    SET_CHAR_DECISION_MAKER( l_U512[0], l_U631 );
                    SET_COMBAT_DECISION_MAKER( l_U512[0], l_U632 );
                    SET_CHAR_RELATIONSHIP( l_U512[0], 5, 0 );
                    TASK_COMBAT( l_U512[0], sub_3680() );
                    l_U553[0] = 1;
                }
            }
            if ((NOT (IS_CHAR_ON_SCREEN( l_U512[0] ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3680(), l_U512[0], 300.00000000, 300.00000000, 300.00000000, 0 ))))
            {
                if (sub_43989( 1, 1 ))
                {
                    PRINT_NOW( "GM2_INSTR4", 7500, 1 );
                    REMOVE_BLIP( l_U517[0] );
                    REMOVE_BLIP( l_U517[1] );
                    REMOVE_BLIP( l_U517[2] );
                    l_U643 = 1;
                    sub_40266();
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U512[1] )))
        {
            if (NOT l_U553[1])
            {
                if ((sub_43705()) || ((l_U516 == nil) || ((NOT (IS_CHAR_IN_ANY_CAR( l_U512[1] ))) || ((IS_CHAR_INJURED( l_U516 )) || (NOT (IS_VEH_DRIVEABLE( l_U526 )))))))
                {
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U512[1], 1 );
                    SET_CHAR_DECISION_MAKER( l_U512[1], l_U631 );
                    SET_COMBAT_DECISION_MAKER( l_U512[1], l_U632 );
                    SET_CHAR_RELATIONSHIP( l_U512[1], 5, 0 );
                    TASK_COMBAT( l_U512[1], sub_3680() );
                    l_U553[1] = 1;
                }
            }
            if ((NOT (IS_CHAR_ON_SCREEN( l_U512[1] ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3680(), l_U512[1], 300.00000000, 300.00000000, 300.00000000, 0 ))))
            {
                if (sub_43989( 1, 1 ))
                {
                    PRINT_NOW( "GM2_INSTR4", 7500, 1 );
                    REMOVE_BLIP( l_U517[0] );
                    REMOVE_BLIP( l_U517[1] );
                    REMOVE_BLIP( l_U517[2] );
                    l_U643 = 1;
                    sub_40266();
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U512[2] )))
        {
            if (NOT l_U553[2])
            {
                if ((sub_43705()) || ((l_U516 == nil) || ((NOT (IS_CHAR_IN_ANY_CAR( l_U512[2] ))) || ((IS_CHAR_INJURED( l_U516 )) || (NOT (IS_VEH_DRIVEABLE( l_U526 )))))))
                {
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U512[2], 1 );
                    SET_CHAR_DECISION_MAKER( l_U512[2], l_U631 );
                    SET_COMBAT_DECISION_MAKER( l_U512[2], l_U632 );
                    SET_CHAR_RELATIONSHIP( l_U512[2], 5, 0 );
                    TASK_COMBAT( l_U512[2], sub_3680() );
                    l_U553[2] = 1;
                }
            }
            if ((NOT (IS_CHAR_ON_SCREEN( l_U512[2] ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3680(), l_U512[2], 300.00000000, 300.00000000, 300.00000000, 0 ))))
            {
                if (sub_43989( 1, 1 ))
                {
                    PRINT_NOW( "GM2_INSTR4", 7500, 1 );
                    REMOVE_BLIP( l_U517[0] );
                    REMOVE_BLIP( l_U517[1] );
                    REMOVE_BLIP( l_U517[2] );
                    l_U643 = 1;
                    sub_40266();
                }
            }
        }
        break;
    }
    return;
}

void sub_37581()
{
    if (NOT l_U560)
    {
        if (IS_VEH_DRIVEABLE( l_U526 ))
        {
            GET_DRIVER_OF_CAR( l_U526, ref l_U516 );
            if (IS_CHAR_IN_CAR( sub_3680(), l_U526 ))
            {
                l_U567 = 1;
            }
            if (l_U516 == nil)
            {
                ;
            }
            else if (NOT (IS_CHAR_INJURED( l_U516 )))
            {
                if (IS_PED_BEING_JACKED( l_U516 ))
                {
                    l_U567 = 1;
                }
            }
            else
            {
                l_U567 = 1;
            }
        }
        if ((l_U567) || (NOT (IS_VEH_DRIVEABLE( l_U526 ))))
        {
            if (IS_VEH_DRIVEABLE( l_U526 ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U526 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U526 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U512[0] )))
            {
                SET_CHAR_DECISION_MAKER( l_U512[0], l_U631 );
                SET_COMBAT_DECISION_MAKER( l_U512[0], l_U632 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[0], 0 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U512[0], 1 );
                CLEAR_CHAR_TASKS( l_U512[0] );
                SET_CHAR_RELATIONSHIP( l_U512[0], 5, 0 );
                TASK_COMBAT( l_U512[0], sub_3680() );
            }
            if (NOT (IS_CHAR_INJURED( l_U512[1] )))
            {
                SET_CHAR_DECISION_MAKER( l_U512[1], l_U631 );
                SET_COMBAT_DECISION_MAKER( l_U512[1], l_U632 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[1], 0 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U512[1], 1 );
                CLEAR_CHAR_TASKS( l_U512[1] );
                SET_CHAR_RELATIONSHIP( l_U512[1], 5, 0 );
                TASK_COMBAT( l_U512[1], sub_3680() );
            }
            if (NOT (IS_CHAR_INJURED( l_U512[2] )))
            {
                SET_CHAR_DECISION_MAKER( l_U512[2], l_U631 );
                SET_COMBAT_DECISION_MAKER( l_U512[2], l_U632 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512[2], 0 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U512[2], 1 );
                CLEAR_CHAR_TASKS( l_U512[2] );
                SET_CHAR_RELATIONSHIP( l_U512[2], 5, 0 );
                TASK_COMBAT( l_U512[2], sub_3680() );
            }
            l_U560 = 1;
        }
    }
    return;
}

void sub_40266()
{
    switch (l_U643)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 1:
        sub_21395( l_U485, "DF3_AWAY", "DF3AUD", 10000, 0 );
        break;
    }
    sub_40368();
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2401(), 150 );
        SAY_AMBIENT_SPEECH( sub_3680(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_2239();
    return;
}

void sub_40368()
{
    sub_40377();
    return;
}

void sub_40377()
{
    int iVar2;

    iVar2 = 7;
    sub_40391( iVar2 );
    sub_1328( iVar2 );
    return;
}

void sub_40391(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2401(), 150 );
    CLEAR_HELP();
    sub_152( uParam0 );
    return;
}

void sub_40860(unknown uParam0)
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
    if ((iVar3 != 4) AND ((NOT sub_41028()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3680() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
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

int sub_41028()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_43705()
{
    if (IS_VEH_DRIVEABLE( l_U526 ))
    {
        if ((CHECK_STUCK_TIMER( l_U526, 0, 5000 )) || ((CHECK_STUCK_TIMER( l_U526, 1, 40000 )) || ((CHECK_STUCK_TIMER( l_U526, 2, 30000 )) || (CHECK_STUCK_TIMER( l_U526, 3, 60000 )))))
        {
            return 1;
        }
    }
    return 0;
}

int sub_43989(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3680() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3680(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3680() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3680(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3680()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3680() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3680() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2401() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2401() )))
    {
        return 0;
    }
    return 1;
}

