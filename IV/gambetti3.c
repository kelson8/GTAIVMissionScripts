void main()
{
    float fVar2;

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
    l_U481 = 20;
    l_U578 = 0;
    l_U582 = 0;
    l_U590 = {-1426.01400000, 562.70660000, 19.86000000};
    l_U593 = {94.62001000, 30.00000000, 60.00000000};
    l_U853 = 0;
    l_U854 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_166();
        sub_2276();
    }
    l_U584 = {-0.30000000, 1.00000000, -1.00000000};
    l_U587 = {0.00000000, 0.00000000, 0.25000000};
    l_U554[0] = -119658072;
    l_U554[1] = -119658072;
    l_U554[2] = -119658072;
    l_U554[3] = -119658072;
    l_U554[4] = -119658072;
    l_U662[0] = {-1442.23600000, 589.26980000, 18.88300000};
    l_U662[1] = {-1448.41500000, 565.44690000, 19.50600000};
    l_U662[2] = {-1436.61200000, 552.57050000, 19.46510000};
    l_U662[3] = {-1407.42900000, 623.05730000, 19.16010000};
    l_U662[4] = {-1426.26600000, 552.05730000, 18.56710000};
    l_U678[0] = 61.34190000;
    l_U678[1] = 258.12980000;
    l_U678[2] = 357.01960000;
    l_U678[3] = 145.09200000;
    l_U678[4] = 177.01960000;
    l_U684[1] = {-1428.00900000, 590.01900000, 19.40940000};
    l_U684[2] = {-1446.69600000, 559.52290000, 19.58790000};
    l_U684[3] = {-1413.29500000, 601.21780000, 19.55010000};
    l_U684[4] = {-1418.56300000, 533.16300000, 18.68868000};
    l_U700[1] = 6.89380000;
    l_U700[2] = 308.48620000;
    l_U700[3] = 69.98360000;
    l_U700[4] = 261.69630000;
    l_U596[0] = {-1453.70400000, 572.67030000, 29.61930000};
    l_U596[1] = {-1432.52600000, 575.98880000, 24.94465000};
    l_U596[2] = {-1444.25400000, 583.96090000, 25.82000000};
    l_U596[3] = {-1436.49700000, 589.52810000, 31.82834000};
    l_U596[4] = {-1421.55400000, 595.33170000, 24.94529000};
    l_U596[5] = {-1455.85200000, 562.18910000, 29.61930000};
    l_U596[6] = {-1421.01500000, 559.27560000, 18.21280000};
    l_U596[7] = {-1433.96100000, 565.22000000, 18.21360000};
    l_U596[8] = {-1435.45600000, 564.87850000, 18.26070000};
    l_U596[9] = {-1442.52000000, 587.43330000, 18.96990000};
    l_U596[10] = {-1429.65500000, 586.02510000, 18.32230000};
    l_U596[11] = {-1421.62200000, 598.37060000, 18.54730000};
    l_U596[12] = {-1412.25700000, 606.95680000, 18.53010000};
    l_U596[13] = {-1414.11700000, 608.34360000, 18.52380000};
    l_U596[14] = {-1410.86500000, 624.29230000, 35.80840000};
    l_U596[15] = {-1420.10400000, 560.62390000, 18.13020000};
    l_U645[0] = 305.77990000;
    l_U645[1] = 112.95220000;
    l_U645[2] = 251.38160000;
    l_U645[3] = 228.83590000;
    l_U645[4] = 18.74700000;
    l_U645[5] = 333.06150000;
    l_U645[6] = -2.19000000;
    l_U645[7] = 85.46000000;
    l_U645[8] = 314.48770000;
    l_U645[9] = 261.29920000;
    l_U645[10] = 125.41810000;
    l_U645[11] = 59.64710000;
    l_U645[12] = 42.67610000;
    l_U645[13] = 268.65940000;
    l_U645[14] = 256.06680000;
    l_U645[15] = 133.84000000;
    l_U560[0] = 1543404628;
    l_U560[1] = 1543404628;
    l_U560[2] = 1976502708;
    l_U560[3] = 1543404628;
    l_U560[4] = 1976502708;
    l_U560[5] = 1543404628;
    l_U560[6] = 1976502708;
    l_U560[7] = 1976502708;
    l_U560[8] = 1976502708;
    l_U560[9] = 1543404628;
    l_U560[10] = 1976502708;
    l_U560[11] = 1976502708;
    l_U560[12] = 1976502708;
    l_U560[13] = 1543404628;
    l_U560[14] = 1976502708;
    l_U560[15] = 1543404628;
    l_U710[0] = {-1454.41800000, 572.96730000, 28.61930000};
    l_U710[1] = {-1420.47300000, 628.42470000, 35.80840000};
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U771 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U771, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U771, 50 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U769 );
    N_1061756705( l_U769, 15 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U770 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U793 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U793, 35 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U794 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U794, 0 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U772 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U770, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U793, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U772, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U770, 55 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U772, 60 );
    sub_4125( "G3AUD" );
    LOAD_ADDITIONAL_TEXT( "G3AUD", 6 );
    LOAD_ADDITIONAL_TEXT( "GAMB3", 0 );
    l_U773[6] = l_U770;
    l_U773[7] = l_U772;
    l_U773[8] = l_U770;
    l_U773[9] = l_U772;
    l_U773[10] = l_U770;
    l_U773[11] = l_U772;
    l_U773[12] = l_U770;
    l_U773[13] = l_U772;
    l_U773[14] = l_U770;
    l_U773[15] = l_U772;
    l_U773[16] = l_U770;
    l_U773[17] = l_U772;
    l_U773[18] = l_U770;
    while (true)
    {
        WAIT( 0 );
        if (NOT (IS_PLAYER_PLAYING( sub_4453() )))
        {
            sub_4497();
        }
        if (l_U514)
        {
            if (IS_VEH_DRIVEABLE( l_U761[3] ))
            {
                if (NOT l_U515)
                {
                    if (NOT (# -NULL-0xbfc08d( l_U761[3] )))
                    {
                        GET_DRIVER_OF_CAR( l_U761[3], ref l_U753 );
                        if (NOT (IS_CHAR_INJURED( l_U753 )))
                        {
                            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U753, 0 );
                            SET_COMBAT_DECISION_MAKER( l_U753, l_U794 );
                            TASK_COMBAT( l_U753, sub_5316() );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U753, 0 );
                            l_U515 = 1;
                        }
                    }
                }
                if ((NOT (IS_CAR_ON_SCREEN( l_U761[3] ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_5316(), l_U761[3], 200, 200, 0 ))))
                {
                    if (sub_5619( 1, 1 ))
                    {
                        PRINT_NOW( "GAM3_15", 7500, 1 );
                        l_U816 = 1;
                        l_U514 = 0;
                        sub_4497();
                    }
                }
            }
        }
        if (NOT l_U549)
        {
            if (NOT (IS_CHAR_INJURED( l_U729[14] )))
            {
                if (IS_PED_IN_COMBAT( l_U729[14] ))
                {
                    SAY_AMBIENT_SPEECH( l_U729[14], "SHOCKED", 1, 0, 2 );
                    l_U549 = 1;
                }
            }
        }
        switch (l_U853)
        {
            case 0:
            if (g_U9893._fU24)
            {
                START_CUTSCENE_NOW( "G_3" );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                CLEAR_AREA( 1240.00000000, 195.29000000, 33.72000000, 40, 0 );
                if (HAS_CUTSCENE_LOADED())
                {
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                }
                CLEAR_NAMED_CUTSCENE( "G_3" );
            }
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            STOP_PED_SPEAKING( sub_5316(), 1 );
            LOAD_SCENE( 1195.49200000, 196.25190000, 31.57350000 );
            SET_CHAR_COORDINATES( sub_5316(), 1195.49200000, 196.25190000, 31.57350000 );
            SET_CHAR_HEADING( sub_5316(), 100.42550000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            SET_PLAYER_CONTROL_ADVANCED( sub_4453(), 1, 1, 1 );
            ADD_BLIP_FOR_COORD( -1393.76400000, 547.78980000, 12.40970000, ref l_U811 );
            sub_6464( ref l_U811, -1341.37600000, 571.80040000, 11.39100000, 1.53960000 );
            SET_ROUTE( l_U811, 1 );
            PRINT_NOW( "GAM3_05", 7500, 1 );
            l_U853 = 1;
            break;
            case 1:
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_5316(), -1419.70400000, 601.17860000, 19.55340000, 200, 200, 200, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_5316(), -1411.96600000, 562.10110000, 19.06230000, 200, 200, 200, 0 )))
            {
                CLEAR_AREA( -1341.94800000, 586.45350000, 11.37050000, 20, 0 );
                l_U853 = 2;
            }
            break;
            case 2:
            sub_6690();
            REGISTER_SCRIPT_WITH_AUDIO( 1 );
            l_U722 = GET_SOUND_ID();
            REQUEST_ANIMS( "missgambetti3" );
            REQUEST_CAR_RECORDING( 866 );
            while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 866 ))) || (NOT (HAVE_ANIMS_LOADED( "missgambetti3" ))))
            {
                WAIT( 0 );
            }
            sub_7081( 1976502708 );
            sub_7081( 1543404628 );
            sub_7081( -119658072 );
            sub_7081( 1491375716 );
            sub_7081( 1026751052 );
            while (NOT sub_7173())
            {
                WAIT( 0 );
            }
            CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -1440.80900000, 569.44040000, 19.49709000, 269.70000000, 0, 0, ref l_U759 );
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U577, ref l_U583 );
            if (l_U583 == 0)
            {
                CREATE_CAR( l_U577, -1374.26700000, 548.59820000, 11.37760000, ref l_U768, 1 );
                SET_CAR_HEADING( l_U768, 295.91630000 );
                SET_VEHICLE_ALPHA( l_U768, 255 );
                if (NOT (IS_CAR_A_MISSION_CAR( l_U768 )))
                {
                    SET_CAR_AS_MISSION_CAR( l_U768 );
                }
            }
            sub_7486( 0, sub_5316(), "Niko", 0 );
            OPEN_SEQUENCE_TASK( ref l_U795[1] );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Push_Trolley", "missgambetti3", 1.00000000, 0, 0, 0, 1, -1 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1428.00900000, 590.01900000, 19.40940000, 2, -2, 1.50000000 );
            TASK_PLAY_ANIM( 0, "pickup_obj", "missgambetti3", 1.00000000, 0, 1, 1, 0, 1000 );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Push_Trolley", "missgambetti3", 1.00000000, 0, 0, 0, 1, -1 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1442.03100000, 580.54540000, 19.04560000, 2, -2, 1.50000000 );
            TASK_PLAY_ANIM( 0, "pickup_obj", "missgambetti3", 1.00000000, 0, 1, 1, 0, 1000 );
            SET_SEQUENCE_TO_REPEAT( l_U795[1], 1 );
            CLOSE_SEQUENCE_TASK( l_U795[1] );
            OPEN_SEQUENCE_TASK( ref l_U795[2] );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Push_Trolley", "missgambetti3", 1.00000000, 0, 0, 0, 1, -1 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1441.69600000, 559.52290000, 19.58790000, 2, -2, 1.50000000 );
            TASK_PLAY_ANIM( 0, "pickup_obj", "missgambetti3", 1.00000000, 0, 1, 1, 0, 1000 );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Push_Trolley", "missgambetti3", 1.00000000, 0, 0, 0, 1, -1 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1425.30900000, 557.49950000, 19.38830000, 2, -2, 1.50000000 );
            SET_SEQUENCE_TO_REPEAT( l_U795[2], 1 );
            CLOSE_SEQUENCE_TASK( l_U795[2] );
            OPEN_SEQUENCE_TASK( ref l_U795[6] );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Push_Trolley", "missgambetti3", 1.00000000, 0, 0, 0, 1, -1 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1413.29500000, 601.21780000, 19.55010000, 2, -2, 1.50000000 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "pickup_obj", "missgambetti3", 1.00000000, 0, 1, 1, 0, 1000 );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Push_Trolley", "missgambetti3", 1.00000000, 0, 0, 0, 1, -1 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1421.59700000, 608.21110000, 18.67470000, 2, -2, 1.50000000 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "pickup_obj", "missgambetti3", 1.00000000, 0, 1, 1, 0, 1000 );
            SET_SEQUENCE_TO_REPEAT( l_U795[6], 1 );
            CLOSE_SEQUENCE_TASK( l_U795[6] );
            OPEN_SEQUENCE_TASK( ref l_U795[7] );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Push_Trolley", "missgambetti3", 1.00000000, 0, 0, 0, 1, -1 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1418.53900000, 563.52890000, 18.26997000, 2, -2, 1.50000000 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "pickup_obj", "missgambetti3", 1.00000000, 0, 1, 1, 0, 1000 );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Push_Trolley", "missgambetti3", 1.00000000, 0, 0, 0, 1, -1 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1418.56300000, 533.16300000, 18.68868000, 2, -2, 1.50000000 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "pickup_obj", "missgambetti3", 1.00000000, 0, 1, 1, 0, 1000 );
            SET_SEQUENCE_TO_REPEAT( l_U795[7], 1 );
            CLOSE_SEQUENCE_TASK( l_U795[7] );
            l_U825[0] = {-1455.00000000, 561.00000000, 30.00000000};
            l_U825[1] = {-1453.00000000, 572.00000000, 30.00000000};
            l_U825[2] = {-1422.00000000, 577.00000000, 26.00000000};
            l_U825[3] = {-1395.00000000, 588.00000000, 26.00000000};
            l_U825[4] = {-1436.00000000, 595.00000000, 33.00000000};
            for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U825[l_U580], 0, 0.00000000 );
            }
            for ( l_U580 = 0; l_U580 <= 5; l_U580++ )
            {
                CREATE_CHAR( 26, l_U560[l_U580], l_U596[l_U580]._fU0, l_U596[l_U580]._fU4, l_U596[l_U580]._fU8, ref l_U729[l_U580], 1 );
                SET_CHAR_HEADING( l_U729[l_U580], l_U645[l_U580] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U729[l_U580] );
                SET_CHAR_DECISION_MAKER( l_U729[l_U580], l_U769 );
                SET_COMBAT_DECISION_MAKER( l_U729[l_U580], l_U771 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U729[l_U580], 1 );
                GIVE_WEAPON_TO_CHAR( l_U729[l_U580], 14, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U729[l_U580], 14, 1 );
                SET_SENSE_RANGE( l_U729[l_U580], 150 );
                SET_CHAR_AS_ENEMY( l_U729[l_U580], 1 );
            }
            for ( l_U580 = 6; l_U580 <= 15; l_U580++ )
            {
                CREATE_CHAR( 26, l_U560[l_U580], l_U596[l_U580]._fU0, l_U596[l_U580]._fU4, l_U596[l_U580]._fU8, ref l_U729[l_U580], 1 );
                SET_CHAR_HEADING( l_U729[l_U580], l_U645[l_U580] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U729[l_U580] );
                SET_CHAR_DECISION_MAKER( l_U729[l_U580], l_U769 );
                SET_COMBAT_DECISION_MAKER( l_U729[l_U580], l_U773[l_U580] );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U729[l_U580], 1 );
                SET_SENSE_RANGE( l_U729[l_U580], 150 );
                GIVE_WEAPON_TO_CHAR( l_U729[l_U580], 12, 30000, 0 );
                SET_CHAR_AS_ENEMY( l_U729[l_U580], 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[1] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[1], 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[3] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[3], 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[5] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[5], 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[9] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[9], 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[4] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[4], 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[6] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[6], 0, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[7] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[7], 0, 0 );
                SET_CHAR_PROP_INDEX( l_U729[7], 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[8] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[8], 0, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[10] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[10], 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[8] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[8], 0, 0 );
                SET_CHAR_PROP_INDEX( l_U729[8], 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[9] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[9], 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[11] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[11], 0, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[10] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[10], 0, 0 );
                SET_CHAR_PROP_INDEX( l_U729[10], 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[14] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[14], 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[2] )))
            {
                SET_CHAR_PROP_INDEX( l_U729[2], 0, 0 );
                SET_CHAR_PROP_INDEX( l_U729[2], 1, 0 );
                SET_CHAR_WILL_USE_COVER( l_U729[2], 0 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U729[2], 0 );
                SET_CHAR_HEALTH( l_U729[2], 300 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[3] )))
            {
                SET_CHAR_WILL_USE_COVER( l_U729[3], 0 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U729[3], 0 );
                SET_CHAR_HEALTH( l_U729[3], 300 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[1] )))
            {
                SET_CHAR_WILL_USE_COVER( l_U729[1], 0 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U729[1], 0 );
                SET_CHAR_HEALTH( l_U729[1], 300 );
                SET_CHAR_COMPONENT_VARIATION( l_U729[1], 1, 1, 0 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U729[13] ))) AND (NOT (IS_CHAR_INJURED( l_U729[12] ))))
            {
                TASK_CHAT_WITH_CHAR( l_U729[12], l_U729[13], 1, 1 );
                TASK_CHAT_WITH_CHAR( l_U729[13], l_U729[12], 0, 1 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U729[8] ))) AND (NOT (IS_CHAR_INJURED( l_U729[7] ))))
            {
                TASK_CHAT_WITH_CHAR( l_U729[7], l_U729[8], 1, 1 );
                TASK_CHAT_WITH_CHAR( l_U729[8], l_U729[7], 0, 1 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U729[6] ))) AND (NOT (IS_CHAR_INJURED( l_U729[15] ))))
            {
                TASK_CHAT_WITH_CHAR( l_U729[6], l_U729[15], 1, 1 );
                TASK_CHAT_WITH_CHAR( l_U729[15], l_U729[6], 0, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[14] )))
            {
                REMOVE_WEAPON_FROM_CHAR( l_U729[14], 12 );
                GIVE_WEAPON_TO_CHAR( l_U729[14], 15, 30000, 0 );
                GIVE_WEAPON_TO_CHAR( l_U729[14], 16, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U729[14], 16, 1 );
                SET_SENSE_RANGE( l_U729[14], 150 );
                SET_CHAR_WILL_USE_COVER( l_U729[14], 0 );
            }
            for ( l_U580 = 1; l_U580 <= 4; l_U580++ )
            {
                CREATE_CHAR( 26, 1976502708, l_U684[l_U580]._fU0, l_U684[l_U580]._fU4, l_U684[l_U580]._fU8, ref l_U746[l_U580], 1 );
                SET_CHAR_HEADING( l_U746[l_U580], l_U700[l_U580] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U746[l_U580] );
                SET_CHAR_DECISION_MAKER( l_U746[l_U580], l_U769 );
                SET_COMBAT_DECISION_MAKER( l_U746[l_U580], l_U770 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U746[l_U580], 1 );
                GIVE_WEAPON_TO_CHAR( l_U746[l_U580], 7, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U746[l_U580], 0, 0 );
                CREATE_OBJECT( 1026751052, l_U684[l_U580]._fU0, l_U684[l_U580]._fU4, l_U684[l_U580]._fU8, ref l_U723[l_U580], 1 );
                SET_SENSE_RANGE( l_U746[l_U580], 100 );
                ATTACH_OBJECT_TO_PED( l_U723[l_U580], l_U746[l_U580], 0, l_U584, l_U587, 1 );
                PLAY_SOUND_FROM_OBJECT( l_U722, "G3_LIQUIDIZE_ASSETS_PUSH_TROLLEY", l_U723[l_U580] );
                SET_CHAR_AS_ENEMY( l_U746[l_U580], 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U746[1] )))
            {
                SET_CHAR_PROP_INDEX( l_U746[1], 0, 0 );
                TASK_PERFORM_SEQUENCE( l_U746[1], l_U795[1] );
            }
            if (NOT (IS_CHAR_INJURED( l_U746[2] )))
            {
                SET_CHAR_PROP_INDEX( l_U746[2], 1, 0 );
                TASK_PERFORM_SEQUENCE( l_U746[2], l_U795[2] );
            }
            if (NOT (IS_CHAR_INJURED( l_U746[3] )))
            {
                TASK_PERFORM_SEQUENCE( l_U746[3], l_U795[6] );
            }
            if (NOT (IS_CHAR_INJURED( l_U746[4] )))
            {
                SET_CHAR_PROP_INDEX( l_U746[4], 1, 0 );
                TASK_PERFORM_SEQUENCE( l_U746[4], l_U795[7] );
            }
            CREATE_CAR( 1491375716, -1421.30100000, 557.32580000, 18.83310000, ref l_U767, 1 );
            SET_CAR_HEADING( l_U767, 66.16180000 );
            CREATE_CHAR_INSIDE_CAR( l_U767, 26, 1976502708, ref l_U752 );
            CREATE_PICKUP_ROTATE( 993473937, 22, 5, l_U590, l_U593, ref l_U758 );
            for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
            {
                CREATE_CAR( l_U554[l_U580], l_U662[l_U580]._fU0, l_U662[l_U580]._fU4, l_U662[l_U580]._fU8, ref l_U761[l_U580], 1 );
                SET_CAR_HEADING( l_U761[l_U580], l_U678[l_U580] );
                SET_CAR_ON_GROUND_PROPERLY( l_U761[l_U580] );
                CHANGE_CAR_COLOUR( l_U761[l_U580], 1, 1 );
            }
            l_U853 = 3;
            break;
            case 3:
            sub_6690();
            for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U729[l_U580], sub_5316(), 0 ))
                {
                    l_U512 = 1;
                }
            }
            for ( l_U580 = 1; l_U580 <= 4; l_U580++ )
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U746[l_U580], sub_5316(), 0 ))
                {
                    l_U512 = 1;
                }
            }
            for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
            {
                if (IS_VEH_DRIVEABLE( l_U761[l_U580] ))
                {
                    if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U761[l_U580], sub_5316() ))
                    {
                        l_U512 = 1;
                    }
                }
            }
            if ((IS_SNIPER_BULLET_IN_AREA( -1426.01400000 - 15, 562.70660000 - 15, 19.93000000 - 15, -1426.01400000 + 15, 562.70660000 + 15, 19.93000000 + 15 )) || (IS_BULLET_IN_AREA( -1426.01400000, 562.70660000, 19.93000000, 30, 1 )))
            {
                l_U512 = 1;
            }
            if (l_U512)
            {
                if (NOT (IS_CHAR_INJURED( l_U729[0] )))
                {
                    SET_CHAR_COORDINATES( l_U729[0], -1445.95100000, 571.50260000, 28.61930000 );
                }
                if (NOT (IS_CHAR_INJURED( l_U729[5] )))
                {
                    SET_CHAR_COORDINATES( l_U729[5], -1448.28300000, 561.59990000, 28.61930000 );
                }
                if (IS_VEH_DRIVEABLE( l_U767 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U767 );
                    SET_CAR_COORDINATES( l_U767, -1444.79500000, 562.94910000, 18.57280000 );
                    SET_CAR_HEADING( l_U767, 88.24180000 );
                }
                for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
                {
                    if (IS_VEH_DRIVEABLE( l_U761[l_U580] ))
                    {
                        ADD_BLIP_FOR_CAR( l_U761[l_U580], ref l_U805[l_U580] );
                    }
                }
                for ( l_U580 = 0; l_U580 <= 5; l_U580++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                    {
                        GET_CHAR_COORDINATES( l_U729[l_U580], ref l_U596[l_U580]._fU0, ref l_U596[l_U580]._fU4, ref l_U596[l_U580]._fU8 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U729[l_U580], l_U596[l_U580], 5.00000000 );
                    }
                }
                REMOVE_BLIP( l_U811 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752 );
                REMOVE_CAR_RECORDING( 866 );
                l_U825[0] = {-1455.00000000, 561.00000000, 30.00000000};
                l_U825[1] = {-1453.00000000, 572.00000000, 30.00000000};
                l_U825[2] = {-1422.00000000, 577.00000000, 26.00000000};
                l_U825[3] = {-1395.00000000, 588.00000000, 26.00000000};
                l_U825[4] = {-1436.00000000, 595.00000000, 33.00000000};
                for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U825[l_U580], 1, 0.00000000 );
                }
                PRINT_NOW( "GAM3_03", 7500, 1 );
                l_U853 = 5;
            }
            if (IS_CHAR_IN_ANY_CAR( sub_5316() ))
            {
                if (NOT l_U541)
                {
                    if (DOES_VEHICLE_EXIST( l_U812 ))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U812 );
                    }
                    GET_CAR_CHAR_IS_USING( sub_5316(), ref l_U812 );
                    SET_CAR_AS_MISSION_CAR( l_U812 );
                    l_U541 = 1;
                }
            }
            else
            {
                l_U541 = 0;
            }
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_5316(), -1419.70400000, 601.17860000, 19.55340000, 43, 43, 70, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_5316(), -1411.96600000, 562.10110000, 19.06230000, 35, 35, 70, 0 )))
            {
                if (NOT (sub_13057( sub_5316() )))
                {
                    if (NOT (IS_CHAR_IN_ANY_HELI( sub_5316() )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_5316() ))
                        {
                            sub_13357();
                        }
                    }
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                    SET_PLAYER_CONTROL_ADVANCED( sub_4453(), 0, 1, 1 );
                    if ((IS_CHAR_IN_ANY_PLANE( sub_5316() )) || ((IS_CHAR_IN_ANY_HELI( sub_5316() )) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_5316() ))))
                    {
                        GET_CAR_CHAR_IS_USING( sub_5316(), ref l_U812 );
                        if (DOES_VEHICLE_EXIST( l_U812 ))
                        {
                            if (NOT (IS_CAR_A_MISSION_CAR( l_U812 )))
                            {
                                SET_CAR_AS_MISSION_CAR( l_U812 );
                            }
                        }
                        SET_WANTED_MULTIPLIER( 0.00000000 );
                        l_U513 = 1;
                    }
                    else
                    {
                        GET_CHAR_COORDINATES( sub_5316(), ref l_U706._fU0, ref l_U706._fU4, ref l_U706._fU8 );
                        GET_CHAR_HEADING( sub_5316(), ref l_U709 );
                        SET_WANTED_MULTIPLIER( 0.00000000 );
                    }
                    CLEAR_AREA_OF_COPS( -1411.96600000, 562.10110000, 19.06230000, 100 );
                    SET_CREATE_RANDOM_COPS( 0 );
                    if (IS_VEH_DRIVEABLE( l_U767 ))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U767, 866 );
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U767, 600 );
                        SET_PLAYBACK_SPEED( l_U767, 0.95000000 );
                    }
                    l_U853 = 4;
                }
            }
            break;
            case 4:
            sub_6690();
            if (l_U488)
            {
                if ((IS_SCREEN_FADED_IN()) AND (sub_13867()))
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                    STOP_SOUND( l_U722 );
                    RELEASE_SOUND_ID( l_U722 );
                    FREEZE_CHAR_POSITION( sub_5316(), 0 );
                    SET_CHAR_VISIBLE( sub_5316(), 1 );
                    if (l_U513)
                    {
                        if (IS_VEH_DRIVEABLE( l_U812 ))
                        {
                            FREEZE_CAR_POSITION( l_U812, 0 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U812 );
                            WARP_CHAR_INTO_CAR( sub_5316(), l_U812 );
                            SET_CAR_ENGINE_ON( l_U812, 1, 1 );
                            if (IS_CHAR_IN_ANY_HELI( sub_5316() ))
                            {
                                SET_HELI_BLADES_FULL_SPEED( l_U812 );
                            }
                        }
                        else
                        {
                            SET_CHAR_COORDINATES( sub_5316(), l_U706._fU0, l_U706._fU4, 64536 );
                            SET_CHAR_HEADING( sub_5316(), l_U709 );
                        }
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_5316(), l_U706._fU0, l_U706._fU4, 64536 );
                        SET_CHAR_HEADING( sub_5316(), l_U709 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U729[0] )))
                    {
                        SET_CHAR_COORDINATES( l_U729[0], -1445.95100000, 571.50260000, 28.61930000 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U729[5] )))
                    {
                        SET_CHAR_COORDINATES( l_U729[5], -1448.28300000, 561.59990000, 28.61930000 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U729[14] )))
                    {
                        SET_CHAR_COORDINATES( l_U729[14], -1412.46800000, 620.74260000, 34.99690000 );
                        SET_CHAR_HEADING( l_U729[14], 175.06630000 );
                        REMOVE_WEAPON_FROM_CHAR( l_U729[14], 16 );
                        SET_CURRENT_CHAR_WEAPON( l_U729[14], 15, 1 );
                        CREATE_PICKUP_ROTATE( sub_14489( 16 ), 22, 10, -1413.21700000, 621.00400000, 35.42000000, -72.72000000, 295.92000000, 241.92000000, ref l_U760 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U767 ))
                    {
                        STOP_PLAYBACK_RECORDED_CAR( l_U767 );
                        SET_CAR_COORDINATES( l_U767, -1444.79500000, 562.94910000, 18.57280000 );
                        SET_CAR_HEADING( l_U767, 88.24180000 );
                    }
                    for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
                    {
                        if (IS_VEH_DRIVEABLE( l_U761[l_U580] ))
                        {
                            ADD_BLIP_FOR_CAR( l_U761[l_U580], ref l_U805[l_U580] );
                        }
                    }
                    for ( l_U580 = 0; l_U580 <= 5; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            GET_CHAR_COORDINATES( l_U729[l_U580], ref l_U596[l_U580]._fU0, ref l_U596[l_U580]._fU4, ref l_U596[l_U580]._fU8 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U729[l_U580], l_U596[l_U580], 5.00000000 );
                        }
                    }
                    REMOVE_BLIP( l_U811 );
                    CLEAR_PRINTS();
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    l_U511 = 0;
                    END_CAM_COMMANDS( ref l_U721 );
                    DISPLAY_RADAR( 1 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    DELETE_CHAR( ref l_U752 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_4453(), 1, 1, 1 );
                    REMOVE_CAR_RECORDING( 866 );
                    PRINT_NOW( "GAM3_03", 7500, 1 );
                    l_U825[0] = {-1455.00000000, 561.00000000, 30.00000000};
                    l_U825[1] = {-1453.00000000, 572.00000000, 30.00000000};
                    l_U825[2] = {-1422.00000000, 577.00000000, 26.00000000};
                    l_U825[3] = {-1395.00000000, 588.00000000, 26.00000000};
                    l_U825[4] = {-1436.00000000, 595.00000000, 33.00000000};
                    for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U825[l_U580], 1, 0.00000000 );
                    }
                    LOAD_SCENE( l_U596[1]._fU0, l_U596[1]._fU4, l_U596[1]._fU8 );
                    DO_SCREEN_FADE_IN( 500 );
                    while (IS_SCREEN_FADING_IN())
                    {
                        WAIT( 0 );
                    }
                    l_U536[0] = 0;
                    l_U536[1] = 0;
                    SETTIMERA( 0 );
                    l_U853 = 5;
                }
            }
            switch (l_U854)
            {
                case 0:
                CLEAR_AREA( -1341.94800000, 586.45350000, 11.37050000, 150, 1 );
                if (l_U513)
                {
                    GET_CAR_CHAR_IS_USING( sub_5316(), ref l_U812 );
                    if (DOES_VEHICLE_EXIST( l_U812 ))
                    {
                        if (NOT (IS_CAR_A_MISSION_CAR( l_U812 )))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U812 );
                        }
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_5316() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_5316(), l_U710[0]._fU0, l_U710[0]._fU4, l_U710[0]._fU8 );
                        FREEZE_CHAR_POSITION( sub_5316(), 1 );
                        SET_CHAR_VISIBLE( sub_5316(), 0 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_5316(), l_U710[0]._fU0, l_U710[0]._fU4, l_U710[0]._fU8 );
                        FREEZE_CHAR_POSITION( sub_5316(), 1 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U812 ))
                    {
                        FREEZE_CAR_POSITION( l_U812, 1 );
                        GET_CAR_COORDINATES( l_U812, ref l_U717._fU0, ref l_U717._fU4, ref l_U717._fU8 );
                        GET_CAR_HEADING( l_U812, ref l_U720 );
                    }
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_5316(), l_U710[0]._fU0, l_U710[0]._fU4, l_U710[0]._fU8 );
                    FREEZE_CHAR_POSITION( sub_5316(), 1 );
                }
                LOAD_SCENE( -1419.40300000, 565.01930000, 19.36466000 );
                BEGIN_CAM_COMMANDS( ref l_U721 );
                l_U511 = 1;
                DISPLAY_RADAR( 0 );
                SET_WIDESCREEN_BORDERS( 1 );
                CREATE_CAM( 14, ref l_U813 );
                CREATE_CAM( 14, ref l_U814 );
                CREATE_CAM( 3, ref l_U815 );
                SET_CAM_FOV( l_U813, 45 );
                SET_CAM_POS( l_U813, -1419.40300000, 565.01930000, 19.36466000 );
                SET_CAM_ROT( l_U813, -2.36129200, 0.00000000, 159.44520000 );
                SET_CAM_ACTIVE( l_U813, 1 );
                SET_CAM_PROPAGATE( l_U813, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                SETTIMERA( 0 );
                if (NOT (IS_CHAR_INJURED( l_U729[6] )))
                {
                    SAY_AMBIENT_SPEECH( l_U729[6], "CONV_GANG_STATE", 1, 1, 0 );
                }
                PRINT_NOW( "GAM3_01", 7500, 1 );
                l_U854 = 1;
                break;
                case 1:
                if (TIMERA() >= 1000)
                {
                    l_U488 = 1;
                    l_U854 = 2;
                }
                break;
                case 2:
                if (TIMERA() >= 500)
                {
                    if (NOT (IS_CHAR_INJURED( l_U729[15] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U729[15], "CONV_GANG_RESP", 1, 1, 0 );
                    }
                    l_U854 = 3;
                }
                break;
                case 3:
                if (TIMERA() >= 4500)
                {
                    SET_CAM_FOV( l_U813, 50 );
                    SET_CAM_POS( l_U813, -1432.72900000, 576.67680000, 26.62085000 );
                    SET_CAM_ROT( l_U813, -23.48728000, -0.00000100, 161.57010000 );
                    SET_CAM_FOV( l_U813, 66.89998000 );
                    SET_CAM_PROPAGATE( l_U813, 1 );
                    PRINT_NOW( "GAM3_02", 7500, 1 );
                    SETTIMERA( 0 );
                    l_U854 = 4;
                }
                break;
                case 4:
                if (TIMERA() >= 3000)
                {
                    if ((NOT (IS_CHAR_INJURED( l_U752 ))) AND (NOT (IS_CHAR_INJURED( l_U729[1] ))))
                    {
                        TASK_LOOK_AT_CHAR( l_U729[1], l_U752, 8000, 0 );
                        l_U854 = 5;
                    }
                }
                break;
                case 5:
                if (TIMERA() >= 8000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U729[0] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U804 );
                        TASK_STAND_STILL( 0, 4500 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1446.95100000, 571.50260000, 29.61930000, 2, -1, 0.10000000 );
                        CLOSE_SEQUENCE_TASK( l_U804 );
                        TASK_PERFORM_SEQUENCE( l_U729[0], l_U804 );
                        CLEAR_SEQUENCE_TASK( l_U804 );
                    }
                    SET_CAM_ACTIVE( l_U813, 1 );
                    SET_CAM_PROPAGATE( l_U813, 1 );
                    SET_CAM_ACTIVE( l_U814, 1 );
                    SET_CAM_PROPAGATE( l_U814, 1 );
                    SET_CAM_ACTIVE( l_U815, 1 );
                    SET_CAM_PROPAGATE( l_U815, 1 );
                    SET_CAM_FOV( l_U813, 45 );
                    SET_CAM_POS( l_U813, -1447.58100000, 559.19240000, 19.86372000 );
                    SET_CAM_ROT( l_U813, -1.26743300, -0.00000000, -37.21671000 );
                    SET_CAM_POS( l_U814, -1446.83400000, 558.19260000, 30.19020000 );
                    SET_CAM_ROT( l_U814, 1.50929000, -0.00000000, -6.96125400 );
                    SET_CAM_FOV( l_U814, 55 );
                    SET_CAM_INTERP_STYLE_CORE( l_U815, l_U813, l_U814, 9000, 0 );
                    SET_CAM_PROPAGATE( l_U815, 1 );
                    SETTIMERA( 0 );
                    l_U854 = 6;
                }
                break;
                case 6:
                if (TIMERA() >= 2500)
                {
                    if (NOT l_U516)
                    {
                        if (IS_VEH_DRIVEABLE( l_U767 ))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U767 ))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U767 );
                                if (NOT (IS_CHAR_INJURED( l_U752 )))
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U804 );
                                    TASK_LEAVE_ANY_CAR( 0 );
                                    TASK_WANDER_STANDARD( 0 );
                                    CLOSE_SEQUENCE_TASK( l_U804 );
                                    TASK_PERFORM_SEQUENCE( l_U752, l_U804 );
                                    CLEAR_SEQUENCE_TASK( l_U804 );
                                    l_U854 = 7;
                                    l_U516 = 1;
                                }
                            }
                        }
                    }
                }
                break;
                case 7:
                if (TIMERA() >= 9000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U729[14] )))
                    {
                        SET_CAM_ACTIVE( l_U814, 0 );
                        SET_CAM_PROPAGATE( l_U814, 0 );
                        SET_CAM_ACTIVE( l_U815, 0 );
                        SET_CAM_PROPAGATE( l_U815, 0 );
                        SET_CAM_POS( l_U813, -1408.00200000, 624.25070000, 36.70212000 );
                        SET_CAM_ROT( l_U813, 0.11857900, -0.00000000, 112.70780000 );
                        SET_CAM_FOV( l_U813, 82.50014000 );
                        OPEN_SEQUENCE_TASK( ref l_U804 );
                        TASK_PLAY_ANIM( 0, "reload", "missgambetti3", 1000.00000000, 0, 1, 1, 0, 0 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1412.46800000, 620.74260000, 34.99690000, 2, -1 );
                        CLOSE_SEQUENCE_TASK( l_U804 );
                        TASK_PERFORM_SEQUENCE( l_U729[14], l_U804 );
                        CLEAR_SEQUENCE_TASK( l_U804 );
                        SETTIMERA( 0 );
                        l_U854 = 8;
                    }
                }
                break;
                case 8:
                if (TIMERA() >= 3000)
                {
                    if (l_U513)
                    {
                        if (IS_VEH_DRIVEABLE( l_U812 ))
                        {
                            WARP_CHAR_INTO_CAR( sub_5316(), l_U812 );
                            FREEZE_CAR_POSITION( l_U812, 0 );
                            SET_CAR_ENGINE_ON( l_U812, 1, 1 );
                            if (IS_CHAR_IN_ANY_HELI( sub_5316() ))
                            {
                                SET_HELI_BLADES_FULL_SPEED( l_U812 );
                            }
                        }
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_5316(), l_U706._fU0, l_U706._fU4, 64536 );
                        SET_CHAR_HEADING( sub_5316(), l_U709 );
                    }
                    SET_CHAR_VISIBLE( sub_5316(), 1 );
                    SET_CAM_ACTIVE( l_U814, 1 );
                    SET_CAM_PROPAGATE( l_U814, 1 );
                    SET_CAM_ACTIVE( l_U815, 1 );
                    SET_CAM_PROPAGATE( l_U815, 1 );
                    SET_CAM_FOV( l_U813, 82.50014000 );
                    SET_CAM_POS( l_U813, -1408.00200000, 624.25070000, 36.70212000 );
                    SET_CAM_ROT( l_U813, 0.11857900, -0.00000000, 112.70780000 );
                    SET_CAM_FOV( l_U814, 55 );
                    SET_CAM_POS( l_U814, -1360.60000000, 597.12190000, 21.21583000 );
                    SET_CAM_ROT( l_U814, -2.85968200, 0.00000000, 54.95326000 );
                    SET_CAM_INTERP_STYLE_CORE( l_U815, l_U813, l_U814, 4000, 0 );
                    SETTIMERA( 0 );
                    l_U854 = 9;
                }
                break;
                case 9:
                if (TIMERA() >= 4000)
                {
                    l_U488 = 0;
                    l_U854 = 10;
                }
                break;
                case 10:
                if (TIMERA() >= 5000)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U825[5], 0, 0.00000000 );
                    if (NOT (IS_CHAR_INJURED( l_U729[5] )))
                    {
                        SET_CHAR_COORDINATES( l_U729[5], -1448.28300000, 561.59990000, 28.61930000 );
                    }
                    for ( l_U580 = 0; l_U580 <= 5; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            GET_CHAR_COORDINATES( l_U729[l_U580], ref l_U596[l_U580]._fU0, ref l_U596[l_U580]._fU4, ref l_U596[l_U580]._fU8 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U729[l_U580], l_U596[l_U580], 5.00000000 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U729[14] )))
                    {
                        REMOVE_WEAPON_FROM_CHAR( l_U729[14], 16 );
                        SET_CURRENT_CHAR_WEAPON( l_U729[14], 15, 1 );
                        CREATE_PICKUP_ROTATE( sub_14489( 16 ), 22, 10, -1413.21700000, 621.00400000, 35.42000000, -72.72000000, 295.92000000, 241.92000000, ref l_U760 );
                    }
                    WAIT( 500 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    l_U511 = 0;
                    END_CAM_COMMANDS( ref l_U721 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    DISPLAY_RADAR( 1 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    DELETE_CHAR( ref l_U752 );
                    FREEZE_CHAR_POSITION( sub_5316(), 0 );
                    SET_PLAYER_CONTROL_ADVANCED( sub_4453(), 1, 1, 1 );
                    REMOVE_CAR_RECORDING( 866 );
                    for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
                    {
                        if (IS_VEH_DRIVEABLE( l_U761[l_U580] ))
                        {
                            ADD_BLIP_FOR_CAR( l_U761[l_U580], ref l_U805[l_U580] );
                        }
                    }
                    REMOVE_BLIP( l_U811 );
                    l_U825[0] = {-1455.00000000, 561.00000000, 30.00000000};
                    l_U825[1] = {-1453.00000000, 572.00000000, 30.00000000};
                    l_U825[2] = {-1422.00000000, 577.00000000, 26.00000000};
                    l_U825[3] = {-1395.00000000, 588.00000000, 26.00000000};
                    l_U825[4] = {-1436.00000000, 595.00000000, 33.00000000};
                    for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U825[l_U580], 1, 0.00000000 );
                    }
                    STOP_SOUND( l_U722 );
                    RELEASE_SOUND_ID( l_U722 );
                    LOAD_SCENE( l_U596[1]._fU0, l_U596[1]._fU4, l_U596[1]._fU8 );
                    DO_SCREEN_FADE_IN( 500 );
                    while (IS_SCREEN_FADING_IN())
                    {
                        WAIT( 0 );
                    }
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    l_U854 = 11;
                }
                break;
                case 11:
                PRINT_NOW( "GAM3_03", 7500, 1 );
                l_U536[0] = 0;
                l_U536[1] = 0;
                l_U853 = 5;
                break;
            }
            break;
            case 5:
            sub_6690();
            if (NOT l_U512)
            {
                if (NOT (IS_CHAR_INJURED( l_U729[14] )))
                {
                    if ((IS_SNIPER_BULLET_IN_AREA( -1412.75600000 - 2.50000000, 621.94560000 - 2.50000000, 34.99690000 - 2.50000000, -1412.75600000 + 2.50000000, 621.94560000 + 2.50000000, 34.99690000 + 2.50000000 )) || ((IS_BULLET_IN_AREA( -1412.75600000, 621.94560000, 34.99690000, 5, 1 )) || (IS_CHAR_TOUCHING_CHAR( sub_5316(), l_U729[14] ))))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[14] )))
                        {
                            TASK_COMBAT( l_U729[14], sub_5316() );
                        }
                        l_U512 = 1;
                    }
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_5316(), -1412.73300000, 626.98470000, 35.80840000, 6.00000000, 6.00000000, 2.00000000, 0 ))
                {
                    GET_CHAR_SPEED( sub_5316(), ref fVar2 );
                    if (fVar2 >= 2.50000000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[14] )))
                        {
                            TASK_COMBAT( l_U729[14], sub_5316() );
                        }
                        l_U512 = 1;
                    }
                }
                for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                    {
                        if ((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U729[l_U580], sub_5316() )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_5316(), l_U596[l_U580]._fU0, l_U596[l_U580]._fU4, l_U596[l_U580]._fU8, 5.00000000, 5.00000000, 2.50000000, 0 )))
                        {
                            l_U512 = 1;
                        }
                        if (IS_PED_IN_COMBAT( l_U729[l_U580] ))
                        {
                            l_U512 = 1;
                        }
                    }
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U729[l_U580], sub_5316(), 0 ))
                    {
                        l_U512 = 1;
                    }
                }
                for ( l_U580 = 1; l_U580 <= 4; l_U580++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U746[l_U580] )))
                    {
                        if ((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U746[l_U580], sub_5316() )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_5316(), l_U684[l_U580]._fU0, l_U684[l_U580]._fU4, l_U684[l_U580]._fU8, 5.00000000, 5.00000000, 2.50000000, 0 )))
                        {
                            l_U512 = 1;
                        }
                        if (IS_PED_IN_COMBAT( l_U746[l_U580] ))
                        {
                            l_U512 = 1;
                        }
                    }
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U746[l_U580], sub_5316(), 0 ))
                    {
                        l_U512 = 1;
                    }
                }
                for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
                {
                    if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U761[l_U580], sub_5316() ))
                    {
                        l_U512 = 1;
                    }
                }
                if ((IS_CHAR_IN_ANY_HELI( sub_5316() )) || ((IS_SNIPER_BULLET_IN_AREA( -1426.01400000 - 15, 562.70660000 - 15, 19.93000000 - 15, -1426.01400000 + 15, 562.70660000 + 15, 19.93000000 + 15 )) || ((IS_BULLET_IN_AREA( -1426.01400000, 562.70660000, 19.93000000, 30, 1 )) || ((IS_BULLET_IN_AREA( -1393.76400000, 547.78980000, 19.93000000, 5, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1393.76400000 - 5, 547.78980000 - 5, 19.93000000 - 5, -1393.76400000 + 5, 547.78980000 + 5, 19.93000000 + 5 )) || ((IS_PROJECTILE_IN_AREA( -1393.76400000 - 10, 547.78980000 - 10, 10.00000000 - 10, -1393.76400000 + 10, 547.78980000 + 10, 10.00000000 + 10 )) || ((LOCATE_CHAR_IN_CAR_2D( sub_5316(), -1393.76400000, 547.78980000, 5.00000000, 5.00000000, 0 )) || ((IS_BULLET_IN_AREA( -1429.54600000, 601.28660000, 19.93000000, 5, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1419.23300000 - 5, 601.28660000 - 5, 19.93000000 - 5, -1419.23300000 + 5, 601.28660000 + 5, 19.93000000 + 5 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1419.23300000, 601.28660000, 5.00000000, 5.00000000, 0 )) || ((IS_BULLET_IN_AREA( -1429.54600000, 591.19350000, 19.93000000, 5, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1429.54600000 - 5, 591.19350000 - 5, 19.93000000 - 5, -1429.54600000 + 5, 591.19350000 + 5, 19.93000000 + 5 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1429.54600000, 591.19350000, 5.00000000, 5.00000000, 0 )) || ((IS_BULLET_IN_AREA( -1436.36500000, 584.92010000, 19.93000000, 10, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1436.36500000 - 10, 584.92010000 - 10, 19.93000000 - 10, -1436.36500000 + 10, 584.92010000 + 10, 19.93000000 + 10 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1436.36500000, 584.92010000, 10.00000000, 10.00000000, 0 )) || ((IS_BULLET_IN_AREA( -1435.06400000, 562.79660000, 19.93000000, 15, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1435.06400000 - 15, 562.79660000 - 15, 19.93000000 - 15, -1435.06400000 + 15, 562.79660000 + 15, 19.93000000 + 15 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1435.06400000, 562.79660000, 15.00000000, 15.00000000, 0 )) || ((IS_BULLET_IN_AREA( -1409.20300000, 620.18020000, 19.93000000, 5, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1409.20300000 - 5, 620.18020000 - 5, 19.93000000 - 5, -1409.20300000 + 5, 620.18020000 + 5, 19.93000000 + 5 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1409.20300000, 620.18020000, 2.00000000, 2.00000000, 0 )) || ((IS_BULLET_IN_AREA( -1412.14200000, 613.86000000, 19.93000000, 5, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1412.14200000 - 5, 613.86000000 - 5, 19.93000000 - 5, -1412.14200000 + 5, 613.86000000 + 5, 19.93000000 + 5 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1412.14200000, 613.86000000, 4.00000000, 4.00000000, 0 )) || ((IS_BULLET_IN_AREA( -1414.99900000, 608.52020000, 19.93000000, 5, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1414.99900000 - 5, 608.52020000 - 5, 19.93000000 - 5, -1414.99900000 + 5, 608.52020000 + 5, 19.93000000 + 5 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1414.99900000, 608.52020000, 4.00000000, 4.00000000, 0 )) || ((IS_BULLET_IN_AREA( -1419.93600000, 606.70840000, 19.93000000, 5, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1419.93600000 - 5, 606.70840000 - 5, 19.93000000 - 5, -1419.93600000 + 5, 606.70840000 + 5, 19.93000000 + 5 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1419.93600000, 606.70840000, 4.00000000, 4.00000000, 0 )) || ((IS_BULLET_IN_AREA( -1422.62600000, 602.55130000, 19.93000000, 5, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1422.62600000 - 5, 602.55130000 - 5, 19.93000000 - 5, -1422.62600000 + 5, 602.55130000 + 5, 19.93000000 + 5 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1422.62600000, 602.55130000, 4.00000000, 4.00000000, 0 )) || ((IS_BULLET_IN_AREA( -1425.29100000, 598.50780000, 19.93000000, 5, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1425.29100000 - 5, 598.50780000 - 5, 19.93000000 - 5, -1425.29100000 + 5, 598.50780000 + 5, 19.93000000 + 5 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1425.29100000, 598.50780000, 4.00000000, 4.00000000, 0 )) || ((IS_BULLET_IN_AREA( -1412.64900000, 557.98060000, 19.93000000, 5, 1 )) || ((IS_SNIPER_BULLET_IN_AREA( -1412.64900000 - 5, 557.98060000 - 5, 19.93000000 - 5, -1412.64900000 + 5, 557.98060000 + 5, 19.93000000 + 5 )) || (LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1412.64900000, 557.98060000, 5.00000000, 5.00000000, 0 )))))))))))))))))))))))))))))))))))))))))
                {
                    l_U512 = 1;
                }
            }
            else if (IS_CHAR_IN_ANY_CAR( sub_5316() ))
            {
                GET_CAR_CHAR_IS_USING( sub_5316(), ref l_U812 );
                SET_CAR_AS_MISSION_CAR( l_U812 );
            }
            for ( l_U580 = 1; l_U580 <= 4; l_U580++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U746[l_U580] )))
                {
                    DETACH_OBJECT( l_U723[l_U580], 1 );
                    CLEAR_CHAR_TASKS( l_U746[l_U580] );
                    CLEAR_CHAR_SECONDARY_TASK( l_U746[l_U580] );
                    SET_CHAR_RELATIONSHIP( l_U746[l_U580], 5, 0 );
                    TASK_COMBAT( l_U746[l_U580], sub_5316() );
                }
            }
            for ( l_U580 = 0; l_U580 <= 5; l_U580++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                {
                    CLEAR_CHAR_TASKS( l_U729[l_U580] );
                    SET_CHAR_RELATIONSHIP( l_U729[l_U580], 5, 0 );
                    TASK_COMBAT( l_U729[l_U580], sub_5316() );
                    WAIT( 100 );
                }
            }
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5316(), -1412.73300000, 626.98470000, 44.99690000, 20.00000000, 20.00000000, 20.00000000, 0 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U729[14] )))
                {
                    GIVE_WEAPON_TO_CHAR( l_U729[14], 16, 30000, 1 );
                    REMOVE_PICKUP( l_U760 );
                }
            }
            for ( l_U580 = 6; l_U580 <= 15; l_U580++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                {
                    CLEAR_CHAR_TASKS( l_U729[l_U580] );
                    SET_CHAR_RELATIONSHIP( l_U729[l_U580], 5, 0 );
                    TASK_COMBAT( l_U729[l_U580], sub_5316() );
                    WAIT( 100 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U729[8] )))
            {
                SET_CHAR_AMMO( l_U729[8], 12, 0 );
                GIVE_WEAPON_TO_CHAR( l_U729[8], 10, 30000, 1 );
                SET_CURRENT_CHAR_WEAPON( l_U729[8], 10, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729[13] )))
            {
                SET_CHAR_AMMO( l_U729[13], 12, 0 );
                GIVE_WEAPON_TO_CHAR( l_U729[13], 10, 30000, 1 );
                SET_CURRENT_CHAR_WEAPON( l_U729[13], 10, 1 );
            }
            PRINT( "GAM3_09", 7500, 1 );
            SET_PED_IS_BLIND_RAGING( sub_5316(), 1 );
            l_U853 = 6;;
            break;
            case 6:
            sub_6690();
            if (NOT l_U550[0])
            {
                if (IS_CHAR_FATALLY_INJURED( l_U729[4] ))
                {
                    GET_INTERIOR_FROM_CHAR( sub_5316(), ref l_U824 );
                    if (l_U824 == nil)
                    {
                        CREATE_CHAR( 26, 1543404628, -1413.72700000, 626.30850000, 22.99700000, ref l_U754[0], 1 );
                        SET_CHAR_HEADING( l_U754[0], 74.97470000 );
                        SET_ROOM_FOR_CHAR_BY_NAME( l_U754[0], "bkn_bshroom02" );
                    }
                    else
                    {
                        GET_CHAR_COORDINATES( sub_5316(), ref l_U482._fU0, ref l_U482._fU4, ref l_U482._fU8 );
                        GET_DISTANCE_BETWEEN_COORDS_3D( -1420.63900000, 631.19120000, 30.99660000, l_U482._fU0, l_U482._fU4, l_U482._fU8, ref l_U485[0] );
                        GET_DISTANCE_BETWEEN_COORDS_3D( -1413.72700000, 626.30850000, 22.99700000, l_U482._fU0, l_U482._fU4, l_U482._fU8, ref l_U485[1] );
                        if (l_U485[0] > l_U485[1])
                        {
                            CREATE_CHAR( 26, 1976502708, -1420.63900000, 631.19120000, 30.99660000, ref l_U754[0], 1 );
                            SET_CHAR_HEADING( l_U754[0], 164.64960000 );
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U754[0], "bkn_bshroom04" );
                        }
                        else
                        {
                            CREATE_CHAR( 26, 1543404628, -1413.72700000, 626.30850000, 22.99700000, ref l_U754[0], 1 );
                            SET_CHAR_HEADING( l_U754[0], 74.97470000 );
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U754[0], "bkn_bshroom02" );
                        }
                    }
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U754[0] );
                    SET_CHAR_DECISION_MAKER( l_U754[0], l_U769 );
                    SET_COMBAT_DECISION_MAKER( l_U754[0], l_U793 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U754[0], 1 );
                    SET_SENSE_RANGE( l_U754[0], 150 );
                    GIVE_WEAPON_TO_CHAR( l_U754[0], 12, 30000, 0 );
                    SET_CHAR_AS_ENEMY( l_U754[0], 1 );
                    SET_CHAR_RELATIONSHIP( l_U754[0], 5, 0 );
                    TASK_COMBAT( l_U754[0], sub_5316() );
                    l_U550[0] = 1;
                }
            }
            if (NOT l_U550[1])
            {
                if (IS_CHAR_FATALLY_INJURED( l_U729[9] ))
                {
                    GET_INTERIOR_FROM_CHAR( sub_5316(), ref l_U824 );
                    if (l_U824 == nil)
                    {
                        CREATE_CHAR( 26, 1543404628, -1413.72700000, 626.30850000, 22.99700000, ref l_U754[1], 1 );
                        SET_CHAR_HEADING( l_U754[1], 74.97470000 );
                        SET_ROOM_FOR_CHAR_BY_NAME( l_U754[1], "bkn_bshroom02" );
                    }
                    else
                    {
                        GET_CHAR_COORDINATES( sub_5316(), ref l_U482._fU0, ref l_U482._fU4, ref l_U482._fU8 );
                        GET_DISTANCE_BETWEEN_COORDS_3D( -1420.63900000, 631.19120000, 30.99660000, l_U482._fU0, l_U482._fU4, l_U482._fU8, ref l_U485[0] );
                        GET_DISTANCE_BETWEEN_COORDS_3D( -1413.72700000, 626.30850000, 22.99700000, l_U482._fU0, l_U482._fU4, l_U482._fU8, ref l_U485[1] );
                        if (l_U485[0] > l_U485[1])
                        {
                            CREATE_CHAR( 26, 1976502708, -1420.63900000, 631.19120000, 30.99660000, ref l_U754[1], 1 );
                            SET_CHAR_HEADING( l_U754[1], 164.64960000 );
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U754[1], "bkn_bshroom04" );
                        }
                        else
                        {
                            CREATE_CHAR( 26, 1543404628, -1413.72700000, 626.30850000, 22.99700000, ref l_U754[1], 1 );
                            SET_CHAR_HEADING( l_U754[1], 74.97470000 );
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U754[1], "bkn_bshroom02" );
                        }
                    }
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U754[1] );
                    SET_CHAR_DECISION_MAKER( l_U754[1], l_U769 );
                    SET_COMBAT_DECISION_MAKER( l_U754[1], l_U793 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U754[1], 1 );
                    SET_SENSE_RANGE( l_U754[1], 150 );
                    GIVE_WEAPON_TO_CHAR( l_U754[1], 12, 30000, 0 );
                    SET_CHAR_AS_ENEMY( l_U754[1], 1 );
                    SET_CHAR_RELATIONSHIP( l_U754[1], 5, 0 );
                    TASK_COMBAT( l_U754[1], sub_5316() );
                    l_U550[1] = 1;
                }
            }
            if (NOT l_U550[2])
            {
                if (IS_CHAR_FATALLY_INJURED( l_U729[14] ))
                {
                    GET_INTERIOR_FROM_CHAR( sub_5316(), ref l_U824 );
                    if (l_U824 == nil)
                    {
                        CREATE_CHAR( 26, 1543404628, -1413.72700000, 626.30850000, 22.99700000, ref l_U754[2], 1 );
                        SET_CHAR_HEADING( l_U754[2], 74.97470000 );
                        SET_ROOM_FOR_CHAR_BY_NAME( l_U754[2], "bkn_bshroom02" );
                    }
                    else
                    {
                        GET_CHAR_COORDINATES( sub_5316(), ref l_U482._fU0, ref l_U482._fU4, ref l_U482._fU8 );
                        GET_DISTANCE_BETWEEN_COORDS_3D( -1420.63900000, 631.19120000, 30.99660000, l_U482._fU0, l_U482._fU4, l_U482._fU8, ref l_U485[0] );
                        GET_DISTANCE_BETWEEN_COORDS_3D( -1413.72700000, 626.30850000, 22.99700000, l_U482._fU0, l_U482._fU4, l_U482._fU8, ref l_U485[1] );
                        if (l_U485[0] > l_U485[1])
                        {
                            CREATE_CHAR( 26, 1976502708, -1420.63900000, 631.19120000, 30.99660000, ref l_U754[2], 1 );
                            SET_CHAR_HEADING( l_U754[2], 164.64960000 );
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U754[2], "bkn_bshroom04" );
                        }
                        else
                        {
                            CREATE_CHAR( 26, 1543404628, -1413.72700000, 626.30850000, 22.99700000, ref l_U754[2], 1 );
                            SET_CHAR_HEADING( l_U754[2], 74.97470000 );
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U754[2], "bkn_bshroom02" );
                        }
                    }
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U754[2] );
                    SET_CHAR_DECISION_MAKER( l_U754[2], l_U769 );
                    SET_COMBAT_DECISION_MAKER( l_U754[2], l_U793 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U754[2], 1 );
                    SET_SENSE_RANGE( l_U754[2], 150 );
                    GIVE_WEAPON_TO_CHAR( l_U754[2], 12, 30000, 0 );
                    SET_CHAR_AS_ENEMY( l_U754[2], 1 );
                    SET_CHAR_RELATIONSHIP( l_U754[2], 5, 0 );
                    TASK_COMBAT( l_U754[2], sub_5316() );
                    l_U550[2] = 1;
                }
            }
            if (IS_VEH_DRIVEABLE( l_U761[3] ))
            {
                if (IS_CHAR_SITTING_IN_CAR( sub_5316(), l_U761[3] ))
                {
                    l_U548 = 1;
                }
            }
            if (NOT l_U547)
            {
                for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
                {
                    if (IS_VEH_DRIVEABLE( l_U761[l_U580] ))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_5316(), l_U761[l_U580], 250, 250, 0 )))
                        {
                            PRINT_NOW( "GAM3_14", 7500, 1 );
                            l_U816 = 1;
                            sub_4497();
                        }
                    }
                }
            }
            else if (NOT (IS_VEH_DRIVEABLE( l_U761[3] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_2D( sub_5316(), -1393.76400000, 547.78980000, 80, 80, 0 ))
                {
                    l_U547 = 0;
                }
            }
            if (IS_VEH_DRIVEABLE( l_U761[3] ))
            {
                if (LOCATE_CHAR_IN_CAR_2D( sub_5316(), -1393.76400000, 547.78980000, 80, 80, 0 ))
                {
                    if (IS_CHAR_IN_CAR( sub_5316(), l_U761[3] ))
                    {
                        l_U547 = 0;
                    }
                }
            }
            if (NOT l_U542[0])
            {
                if (NOT (IS_CHAR_INJURED( l_U746[1] )))
                {
                    SET_COMBAT_DECISION_MAKER( l_U746[1], l_U793 );
                    SETTIMERA( 0 );
                    l_U542[0] = 1;
                }
            }
            if ((TIMERA() >= 91320) AND (NOT l_U542[1]))
            {
                if (NOT (IS_CHAR_INJURED( l_U746[2] )))
                {
                    SET_COMBAT_DECISION_MAKER( l_U746[2], l_U793 );
                    SETTIMERA( 0 );
                    l_U542[1] = 1;
                }
            }
            if ((TIMERA() >= 153420) AND (NOT l_U542[2]))
            {
                if (NOT (IS_CHAR_INJURED( l_U746[3] )))
                {
                    SET_COMBAT_DECISION_MAKER( l_U746[3], l_U793 );
                    SETTIMERA( 0 );
                    l_U542[2] = 1;
                }
            }
            if ((TIMERA() >= 326000) AND (NOT l_U542[3]))
            {
                if (NOT (IS_CHAR_INJURED( l_U746[4] )))
                {
                    SET_COMBAT_DECISION_MAKER( l_U746[4], l_U793 );
                    SETTIMERA( 0 );
                    l_U542[3] = 1;
                }
            }
            if (NOT l_U529[0])
            {
                if (NOT (IS_CHAR_INJURED( l_U729[0] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U729[0], 1 );
                    OPEN_SEQUENCE_TASK( ref l_U804 );
                    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -1446.82200000, 568.10690000, 28.61930000, 3, 0.20000000, 0.10000000, sub_5316(), 0 );
                    TASK_COMBAT_TIMED( 0, sub_5316(), 4000 );
                    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -1446.95100000, 571.50260000, 29.61930000, 3, 0.20000000, 0.10000000, sub_5316(), 0 );
                    SET_SEQUENCE_TO_REPEAT( l_U804, 1 );
                    CLOSE_SEQUENCE_TASK( l_U804 );
                    TASK_PERFORM_SEQUENCE( l_U729[0], l_U804 );
                    CLEAR_SEQUENCE_TASK( l_U804 );
                    l_U529[0] = 1;
                }
            }
            else if (NOT l_U529[2])
            {
                if (NOT (IS_CHAR_INJURED( l_U729[0] )))
                {
                    GET_CHAR_COORDINATES( l_U729[0], ref l_U596[0]._fU0, ref l_U596[0]._fU4, ref l_U596[0]._fU8 );
                    if ((TIMERA() >= 60000) || (l_U596[0]._fU8 < 21))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U729[0], 0 );
                        CLEAR_CHAR_TASKS( l_U729[0] );
                        TASK_COMBAT( l_U729[0], sub_5316() );
                        l_U529[2] = 1;
                    }
                }
            }
            if (NOT l_U529[1])
            {
                if (NOT (IS_CHAR_INJURED( l_U729[4] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U729[4], 1 );
                    OPEN_SEQUENCE_TASK( ref l_U804 );
                    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -1425.42900000, 588.29580000, 24.87660000, 3, 1.00000000, 0.50000000, sub_5316(), 0 );
                    TASK_COMBAT_TIMED( 0, sub_5316(), 2000 );
                    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -1421.55400000, 595.33170000, 24.94529000, 3, 1.00000000, 0.50000000, sub_5316(), 0 );
                    SET_SEQUENCE_TO_REPEAT( l_U804, 1 );
                    CLOSE_SEQUENCE_TASK( l_U804 );
                    TASK_PERFORM_SEQUENCE( l_U729[4], l_U804 );
                    CLEAR_SEQUENCE_TASK( l_U804 );
                    l_U529[1] = 1;
                }
            }
            else if (NOT l_U529[3])
            {
                if (NOT (IS_CHAR_INJURED( l_U729[4] )))
                {
                    GET_CHAR_COORDINATES( l_U729[4], ref l_U596[4]._fU0, ref l_U596[4]._fU4, ref l_U596[4]._fU8 );
                    if ((TIMERA() >= 60000) || (l_U596[4]._fU8 < 21))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U729[4], 0 );
                        CLEAR_CHAR_TASKS( l_U729[4] );
                        TASK_COMBAT( l_U729[4], sub_5316() );
                        l_U529[3] = 1;
                    }
                }
            }
            if (NOT l_U525[0])
            {
                if (NOT (IS_CHAR_INJURED( l_U729[2] )))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U729[2], sub_5316(), 1 ))
                    {
                        SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U729[2], 2000, 10000, 5, 0.95000000, -0.40000000, 0, 18.96990000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                        l_U525[0] = 1;
                    }
                }
            }
            if (NOT l_U525[1])
            {
                if (NOT (IS_CHAR_INJURED( l_U729[3] )))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U729[3], sub_5316(), 1 ))
                    {
                        SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U729[3], 2000, 10000, 5, 0.95000000, -0.40000000, 0, 18.96990000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                        l_U525[1] = 1;
                    }
                }
            }
            sub_25818();
            if (NOT l_U494[0])
            {
                if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U761[4], sub_5316() )) || ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U761[3], sub_5316() )) || ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U761[2], sub_5316() )) || ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U761[1], sub_5316() )) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U761[0], sub_5316() ))))))
                {
                    if (NOT (sub_27943( l_U847 )))
                    {
                        for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                    {
                                        sub_7486( 1, l_U729[l_U580], "RUSSIAN_GUARD", 0 );
                                        sub_26075( "G3_SHOOT", ref l_U847, 7, 1 );
                                        SETTIMERB( 0 );
                                        l_U494[0] = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (NOT l_U494[1])
            {
                if ((TIMERB() > 15400) AND (NOT (sub_27943( l_U847 ))))
                {
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 1, l_U729[l_U580], "RUSSIAN_GUARD", 0 );
                                    sub_26075( "G3_SHOOT", ref l_U847, 7, 1 );
                                    SETTIMERB( 0 );
                                    l_U494[1] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U494[2])
            {
                if ((TIMERB() > 16400) AND (NOT (sub_27943( l_U847 ))))
                {
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 1, l_U729[l_U580], "RUSSIAN_GUARD", 0 );
                                    sub_26075( "G3_SHOOT", ref l_U847, 7, 1 );
                                    SETTIMERB( 0 );
                                    l_U494[2] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U494[3])
            {
                if ((TIMERB() > 13700) AND (NOT (sub_27943( l_U847 ))))
                {
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 1, l_U729[l_U580], "RUSSIAN_GUARD", 0 );
                                    sub_26075( "G3_SHOOT", ref l_U847, 7, 1 );
                                    SETTIMERB( 0 );
                                    l_U494[3] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U494[4])
            {
                if ((TIMERB() > 14800) AND (NOT (sub_27943( l_U847 ))))
                {
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 1, l_U729[l_U580], "RUSSIAN_GUARD", 0 );
                                    sub_26075( "G3_SHOOT", ref l_U847, 7, 1 );
                                    SETTIMERB( 0 );
                                    l_U494[4] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U494[5])
            {
                if ((TIMERB() > 10000) AND (NOT (sub_27943( l_U847 ))))
                {
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 2, l_U729[l_U580], "COKE_GUARD", 0 );
                                    sub_26075( "G3_SHOOT2", ref l_U847, 7, 1 );
                                    SETTIMERB( 0 );
                                    l_U494[5] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U494[6])
            {
                if ((TIMERB() > 8450) AND (NOT (sub_27943( l_U847 ))))
                {
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 2, l_U729[l_U580], "COKE_GUARD", 0 );
                                    sub_26075( "G3_SHOOT2", ref l_U847, 7, 1 );
                                    SETTIMERB( 0 );
                                    l_U494[6] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U494[7])
            {
                if ((TIMERB() > 6400) AND (NOT (sub_27943( l_U847 ))))
                {
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 2, l_U729[l_U580], "COKE_GUARD", 0 );
                                    sub_26075( "G3_SHOOT2", ref l_U847, 7, 1 );
                                    SETTIMERB( 0 );
                                    l_U494[7] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U494[8])
            {
                if ((TIMERB() > 5100) AND (NOT (sub_27943( l_U847 ))))
                {
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 2, l_U729[l_U580], "COKE_GUARD", 0 );
                                    sub_26075( "G3_SHOOT2", ref l_U847, 7, 1 );
                                    SETTIMERB( 0 );
                                    l_U494[8] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U494[9])
            {
                if ((TIMERB() > 5900) AND (NOT (sub_27943( l_U847 ))))
                {
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 2, l_U729[l_U580], "COKE_GUARD", 0 );
                                    sub_26075( "G3_SHOOT2", ref l_U847, 7, 1 );
                                    SETTIMERB( 0 );
                                    l_U494[9] = 1;
                                }
                            }
                        }
                    }
                }
            }
            for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
            {
                if (IS_CAR_DEAD( l_U761[l_U580] ))
                {
                    if (NOT l_U505[l_U580])
                    {
                        REMOVE_BLIP( l_U805[l_U580] );
                        l_U582++;
                        l_U505[l_U580] = 1;
                    }
                }
            }
            if (NOT l_U489[0])
            {
                if (l_U582 == 1)
                {
                    sub_30585( ref l_U847, 1 );
                    REQUEST_CAR_RECORDING( 870 );
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 1, l_U729[l_U580], "RUSSIAN_GUARD", 0 );
                                    sub_26075( "G3_VANGO", ref l_U847, 7, 1 );
                                    SETTIMERB( 0 );
                                    sub_30887();
                                    l_U489[0] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U548)
            {
                if (NOT (l_U578 > 4))
                {
                    if (NOT l_U489[1])
                    {
                        if (l_U582 >= 2)
                        {
                            if (IS_VEH_DRIVEABLE( l_U761[3] ))
                            {
                                if (HAS_CAR_RECORDING_BEEN_LOADED( 870 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U753 )))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( l_U753, l_U761[3] ))
                                        {
                                            SET_CAR_HEALTH( l_U761[3], 100 );
                                            sub_2359( 0 );
                                            START_PLAYBACK_RECORDED_CAR( l_U761[3], 870 );
                                            l_U547 = 1;
                                            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_5316(), 0 );
                                            SET_PLAYBACK_SPEED( l_U761[3], 0.90000000 );
                                            l_U514 = 1;
                                            for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                                            {
                                                if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                                                {
                                                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                                                    {
                                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                                        {
                                                            sub_7486( 2, l_U729[l_U580], "COKE_GUARD", 0 );
                                                            sub_26075( "G3_VANGO2", ref l_U847, 7, 1 );
                                                        }
                                                    }
                                                }
                                            }
                                            l_U489[1] = 1;
                                        }
                                    }
                                    else
                                    {
                                        l_U534 = 0;
                                        sub_30887();
                                    }
                                }
                            }
                        }
                    }
                    else if (NOT l_U517)
                    {
                        if (IS_VEH_DRIVEABLE( l_U761[3] ))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U761[3] ))
                            {
                                GET_DRIVER_OF_CAR( l_U761[3], ref l_U753 );
                                if ((IS_CHAR_SITTING_IN_CAR( sub_5316(), l_U761[3] )) || (IS_CHAR_INJURED( l_U753 )))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U761[3] );
                                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_5316(), 1 );
                                    l_U517 = 1;
                                    l_U514 = 0;
                                    l_U547 = 0;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U489[2])
            {
                if (l_U582 == 3)
                {
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 1, l_U729[l_U580], "RUSSIAN_GUARD", 0 );
                                    sub_26075( "G3_BLOW", ref l_U847, 7, 1 );
                                    l_U489[2] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U489[3])
            {
                if (l_U582 == 4)
                {
                    sub_30585( ref l_U847, 0 );
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 2, l_U729[l_U580], "COKE_GUARD", 0 );
                                    sub_26075( "G3_BLOW2", ref l_U847, 7, 1 );
                                    l_U489[3] = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (l_U582 == 5)
            {
                SET_WANTED_MULTIPLIER( 1.00000000 );
                for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                            {
                                sub_7486( 1, l_U729[l_U580], "RUSSIAN_GUARD", 0 );
                                sub_26075( "G3_DONE", ref l_U847, 7, 1 );
                            }
                        }
                    }
                }
                l_U853 = 7;
            }
            break;
            case 7:
            for ( l_U580 = 1; l_U580 <= 4; l_U580++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U746[l_U580] )))
                {
                    TASK_COMBAT( l_U746[l_U580], sub_5316() );
                    SET_CHAR_KEEP_TASK( l_U746[l_U580], 1 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U746[l_U580] );
                }
            }
            for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                {
                    TASK_COMBAT( l_U729[l_U580], sub_5316() );
                    SET_CHAR_KEEP_TASK( l_U729[l_U580], 1 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U729[l_U580] );
                }
            }
            for ( l_U580 = 0; l_U580 <= 2; l_U580++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U754[l_U580] )))
                {
                    TASK_COMBAT( l_U754[l_U580], sub_5316() );
                    SET_CHAR_KEEP_TASK( l_U754[l_U580], 1 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U754[l_U580] );
                }
            }
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_RANDOM_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
            SET_WANTED_MULTIPLIER( 1.00000000 );
            ALLOW_EMERGENCY_SERVICES( 1 );
            l_U853 = 8;
            break;
            case 8:
            if (NOT (sub_27943( l_U847 )))
            {
                for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                        {
                            sub_7486( 2, l_U729[l_U580], "COKE_GUARD", 0 );
                            sub_26075( "G3_DONE2", ref l_U847, 6, 1 );
                        }
                    }
                }
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_5316(), 1 );
                SET_PED_IS_BLIND_RAGING( sub_5316(), 0 );
                sub_33207();
            }
            break;
        }
    }
    return;
}

void sub_166()
{
    sub_175();
    return;
}

void sub_175()
{
    int iVar2;

    iVar2 = 21;
    sub_189( iVar2 );
    sub_1365( iVar2 );
    return;
}

void sub_189(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_233();
        sub_394();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_502();
            sub_541();
        }
    }
    sub_617();
    sub_718();
    uVar5 = sub_831( uParam0 );
    sub_1272( uVar5, 0 );
    return;
}

void sub_233()
{
    sub_247( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_347();
    }
    return;
}

void sub_247(int iParam0)
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

void sub_347()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_394()
{
    sub_403();
    return;
}

void sub_403()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_502()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_541()
{
    sub_550();
    return;
}

void sub_550()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_617()
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

void sub_718()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_740();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_740()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_831(unknown uParam0)
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
    sub_1230( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1230(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1272(int iParam0, boolean bParam1)
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

void sub_1365(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1374();
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
        sub_2149();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1374()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1412( 5, g_U569[I] )) == 1))
        {
            if ((sub_1412( 1, g_U569[I] )) != 0)
            {
                sub_1698( I );
            }
        }
    }
    if (NOT sub_1864())
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

int sub_1412(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1698(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1783( g_U569 - 1 );
    return;
}

void sub_1783(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1864()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1412( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2149()
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

void sub_2276()
{
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CREATE_RANDOM_COPS( 1 );
    if (DOES_PICKUP_EXIST( l_U759 ))
    {
        REMOVE_PICKUP( l_U759 );
    }
    if (DOES_VEHICLE_EXIST( l_U812 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U812 );
    }
    sub_2359( 0 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    REMOVE_DECISION_MAKER( l_U769 );
    REMOVE_DECISION_MAKER( l_U770 );
    REMOVE_DECISION_MAKER( l_U771 );
    if (l_U511)
    {
        END_CAM_COMMANDS( ref l_U721 );
    }
    l_U511 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2359(unknown uParam0)
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

void sub_4125(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4144();
    return;
}

void sub_4144()
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

void sub_4453()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4497()
{
    switch (l_U816)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 1:
        sub_4585( l_U481, "G3_CALLF", "G3AUD", 0 );
        break;
    }
    sub_5176();
    if (g_U9930 > 2)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4453(), 150 );
        SAY_AMBIENT_SPEECH( sub_5316(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_2276();
    return;
}

void sub_4585(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_4629( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_4629(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_5176()
{
    sub_5185();
    return;
}

void sub_5185()
{
    int iVar2;

    iVar2 = 21;
    sub_5199( iVar2 );
    sub_1365( iVar2 );
    return;
}

void sub_5199(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_4453(), 150 );
    CLEAR_HELP();
    sub_189( uParam0 );
    return;
}

void sub_5316()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_5619(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_5316() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5316(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_5316() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5316(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_5316()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5316() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5316() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4453() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4453() )))
    {
        return 0;
    }
    return 1;
}

void sub_6464(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_6690()
{
    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_5316(), -1419.70400000, 601.17860000, 19.55340000, 43, 43, 70, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_5316(), -1411.96600000, 562.10110000, 19.06230000, 35, 35, 70, 0 )))
    {
        if (NOT l_U535)
        {
            ALLOW_EMERGENCY_SERVICES( 0 );
            SET_WANTED_MULTIPLIER( 0.00000000 );
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            SET_PARKED_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            SET_RANDOM_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
            l_U535 = 1;
        }
    }
    else if (l_U535)
    {
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_RANDOM_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_WANTED_MULTIPLIER( 1.00000000 );
        ALLOW_EMERGENCY_SERVICES( 1 );
        l_U535 = 0;
    }
    return;
}

void sub_7081(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U817[l_U823] = uParam0;
    l_U823++;
    return;
}

int sub_7173()
{
    if (l_U823 != 0)
    {
        for ( l_U580 = 0; l_U580 <= (l_U823 - 1); l_U580++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U817[l_U580] )))
            {
                PRINTINT( l_U580 );
                return 0;
            }
        }
    }
    return 1;
}

void sub_7486(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_7570( "\n PED NUMBER ", uParam0 );
    sub_7610( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_7570(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7610(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_13057(int iParam0)
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
                if (sub_13121( uVar3 ))
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

int sub_13121(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_13357()
{
    unknown uVar2;
    float fVar3;

    if ((IS_CHAR_ON_ANY_BIKE( sub_5316() )) || (IS_CHAR_IN_ANY_CAR( sub_5316() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5316(), ref uVar2 );
        SET_PLAYER_CONTROL( sub_4453(), 0 );
        GET_CAR_SPEED( uVar2, ref fVar3 );
        while (fVar3 > 0.20000000)
        {
            WAIT( 0 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                GET_CAR_SPEED( uVar2, ref fVar3 );
            }
        }
        SET_PLAYER_CONTROL( sub_4453(), 1 );
    }
    return;
}

int sub_13867()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_14489(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

void sub_25818()
{
    if (NOT l_U518)
    {
        for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
        {
            if (IS_VEH_DRIVEABLE( l_U761[l_U580] ))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_5316(), l_U761[l_U580], 2.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( l_U729[l_U580] )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5316(), l_U729[l_U580], 20, 20, 0 ))
                                {
                                    sub_7486( 2, l_U729[l_U580], "COKE_GUARD", 0 );
                                    sub_26075( "G3_HIDE", ref l_U847, 6, 1 );
                                }
                            }
                        }
                    }
                    for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                        {
                            SET_CHAR_WILL_ONLY_FIRE_WITH_CLEAR_LOS( l_U729[l_U580], 1 );
                        }
                    }
                    for ( l_U580 = 1; l_U580 <= 4; l_U580++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U746[l_U580] )))
                        {
                            SET_CHAR_WILL_ONLY_FIRE_WITH_CLEAR_LOS( l_U746[l_U580], 1 );
                        }
                    }
                    l_U519[0] = 0;
                    l_U519[1] = 0;
                    l_U519[2] = 0;
                    l_U519[3] = 0;
                    l_U519[4] = 0;
                    PRINTNL();
                    PRINTNL();
                    PRINTNL();
                    PRINTSTRING( "watch out" );
                    PRINTNL();
                    PRINTNL();
                    PRINTNL();
                    l_U518 = 1;
                }
            }
        }
    }
    else
    {
        for ( l_U580 = 0; l_U580 <= 4; l_U580++ )
        {
            if (IS_VEH_DRIVEABLE( l_U761[l_U580] ))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_5316(), l_U761[l_U580], 2.00000000, 2.00000000, 2.00000000, 0 )))
                {
                    if (NOT l_U519[l_U580])
                    {
                        l_U519[l_U580] = 1;
                    }
                }
            }
            else if (NOT l_U519[l_U580])
            {
                l_U519[l_U580] = 1;
            }
        }
        if ((l_U519[4]) AND ((l_U519[3]) AND ((l_U519[2]) AND ((l_U519[1]) AND (l_U519[0])))))
        {
            for ( l_U580 = 0; l_U580 <= 15; l_U580++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                {
                    SET_CHAR_WILL_ONLY_FIRE_WITH_CLEAR_LOS( l_U729[l_U580], 0 );
                }
            }
            for ( l_U580 = 1; l_U580 <= 4; l_U580++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U746[l_U580] )))
                {
                    SET_CHAR_WILL_ONLY_FIRE_WITH_CLEAR_LOS( l_U746[l_U580], 0 );
                }
            }
            l_U518 = 0;
            PRINTNL();
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "stop watch out" );
            PRINTNL();
            PRINTNL();
            PRINTNL();
        }
    }
    return;
}

void sub_26075(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_26098( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_26098(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_26152( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_26152(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_26174( iParam1 )))
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
    sub_26866( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_26174(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_26251( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_26251( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_26251( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_26251(unknown uParam0)
{
    return;
}

void sub_26866(int iParam0, int iParam1)
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

int sub_27943(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_26251( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_26251( "\n speech is not playing" );
    }
    return 0;
}

void sub_30585(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_30887()
{
    if (NOT l_U548)
    {
        for ( l_U580 = 1; l_U580 <= 4; l_U580++ )
        {
            if (NOT l_U534)
            {
                if (NOT (IS_CHAR_INJURED( l_U746[l_U580] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U761[3] ))
                    {
                        l_U753 = l_U746[l_U580];
                        REQUEST_CAR_RECORDING( 870 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U746[l_U580] );
                        TASK_ENTER_CAR_AS_DRIVER( l_U746[l_U580], l_U761[3], 40000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U746[l_U580], 1 );
                        l_U578++;
                        l_U534 = 1;
                    }
                }
            }
        }
        for ( l_U580 = 6; l_U580 <= 15; l_U580++ )
        {
            if (NOT l_U534)
            {
                if (NOT (IS_CHAR_INJURED( l_U729[l_U580] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U761[3] ))
                    {
                        l_U753 = l_U729[l_U580];
                        REQUEST_CAR_RECORDING( 870 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U729[l_U580] );
                        TASK_ENTER_CAR_AS_DRIVER( l_U729[l_U580], l_U761[3], 40000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U729[l_U580], 1 );
                        l_U578++;
                        l_U534 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_33207()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 66 );
    CLEAR_WANTED_LEVEL( sub_4453() );
    sub_2359( 0 );
    sub_33244();
    sub_44861( l_U481, "G3_CALLP", "G3AUD", 10000, 0 );
    sub_2276();
    return;
}

void sub_33244()
{
    sub_33253();
    return;
}

void sub_33253()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_33271();
    sub_33330( iVar2, iVar3, iVar4 );
    return;
}

void sub_33271()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_33330(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 21;
    sub_33363( iVar5, uParam0, uParam1, uParam2, "Contact_25" );
    return;
}

void sub_33363(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_33459( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_33459( ref cVar9 );
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
            sub_33459( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_33459( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_33459( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_33459( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_34036( iParam0, iVar7 );;;
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
                sub_34433( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_34433( 0, 4 );
            }
        }
    }
    if (NOT (sub_34522( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4453(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_4453() );
    }
    sub_1374();
    bVar27 = true;
    uVar28 = sub_34036( iParam0, iVar7 );
    uVar29 = sub_831( iParam0 );
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
                sub_43898( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_44328();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_44413( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_44470( iParam0 );
                sub_44509( 0 );
                sub_1272( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_44617();
        }
    }
    if (bParam2)
    {
        sub_44328();
        sub_44705();
        sub_44509( 0 );
    }
    if (bParam3)
    {
        sub_44328();
        sub_44745();
        sub_44509( 0 );
        sub_1272( uVar29, 0 );
    }
    sub_718();
    return;
}

void sub_33459(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_34036(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1230( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_34433(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_34522(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_34730( uParam1 );
        break;
        case 1:
        bVar8 = sub_36808( uParam1 );
        break;
        case 2:
        bVar8 = sub_37034( uParam1 );
        break;
        case 3:
        bVar8 = sub_37184( uParam1 );
        break;
        case 4:
        bVar8 = sub_37462( uParam1 );
        break;
        case 5:
        bVar8 = sub_37765( uParam1 );
        break;
        case 6:
        bVar8 = sub_37964( uParam1 );
        break;
        case 7:
        bVar8 = sub_38190( uParam1 );
        break;
        case 8:
        bVar8 = sub_38425( uParam1 );
        break;
        case 9:
        bVar8 = sub_38800( uParam1 );
        break;
        case 10:
        bVar8 = sub_39047( uParam1 );
        break;
        case 11:
        bVar8 = sub_39186( uParam1 );
        break;
        case 12:
        bVar8 = sub_39485( uParam1 );
        break;
        case 13:
        bVar8 = sub_39713( uParam1 );
        break;
        case 14:
        bVar8 = sub_40000( uParam1 );
        break;
        case 15:
        bVar8 = sub_40282( uParam1 );
        break;
        case 16:
        bVar8 = sub_40564( uParam1 );
        break;
        case 17:
        bVar8 = sub_40765( uParam1 );
        break;
        case 18:
        bVar8 = sub_40838( uParam1 );
        break;
        case 19:
        bVar8 = sub_41052( uParam1 );
        break;
        case 20:
        bVar8 = sub_41305( uParam1 );
        break;
        case 21:
        bVar8 = sub_41552( uParam1 );
        break;
        case 22:
        bVar8 = sub_41753( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_36413( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_34036( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_42076( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_34730(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_35009( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_35009( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_35009( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_35009( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_35009( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_35009( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_35009( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_35009( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_35009( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_35009( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_35009( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_35009( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_35009( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_35009( iVar3, 0, 3, 1, 0, 0 );
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
        sub_35009( iVar3, 0, sub_36291(), sub_36557(), 0, 0 );
        break;
        default:
        sub_36716( "Friend 1", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Friend 1", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_35009(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_35020( uParam1 );
    sub_35194( uParam0, 0, uParam2 );
    sub_35194( uParam0, 1, uParam3 );
    sub_35194( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_33271();
    return;
}

void sub_35020(unknown uParam0)
{
    ADD_SCORE( sub_4453(), uParam0 );
    sub_35045( uParam0 );
    return;
}

void sub_35045(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1230( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_35194(unknown uParam0, int iParam1, int iParam2)
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
        sub_35351( uParam0 );
    }
    return;
}

void sub_35351(unknown uParam0)
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

int sub_36291()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_36413( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_36413(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_36557()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_36413( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_36716(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_36808(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35009( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_36716( "Contact 2", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 2", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37034(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_35009( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_36716( "Girl 3", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Girl 3", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37184(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_35009( iVar3, 0, sub_36291(), sub_36557(), 0, 0 );
        break;
        default:
        sub_36716( "Friend 4", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Friend 4", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37462(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35009( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_35009( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_35009( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_35009( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_36716( "Contact 5", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 5", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37765(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_36716( "Contact 7", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 7", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37964(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35009( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_36716( "Contact 7b", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 7b", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38190(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_35009( iVar3, 0, sub_36291(), sub_36557(), 0, 0 );
        break;
        default:
        sub_36716( "Friend 8", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Friend 8", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38425(unknown uParam0)
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
        sub_35009( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_35009( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_35009( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_35009( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_35009( iVar3, 0, sub_36291(), sub_36557(), 0, 0 );
        break;
        default:
        sub_36716( "Friend 9", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Friend 9", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38800(unknown uParam0)
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
        sub_35009( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_35009( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_35009( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_36716( "Contact 10", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_36716( "Contact 10", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39047(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_36716( "Girl 11", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Girl 11", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39186(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35009( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_35009( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_35009( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_35009( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_35009( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_36716( "Contact 12", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 12", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39485(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35009( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_36716( "Contact 13", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 13", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39713(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_35009( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_35009( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_35009( iVar3, 0, sub_36291(), sub_36557(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_36716( "Friend 15", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Friend 15", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40000(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35009( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_35009( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_35009( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_36716( "Contact 16", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 16", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40282(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_35009( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_35009( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_35009( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_36716( "Contact 18", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 18", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40564(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_36716( "Contact 19", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 19", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40765(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_36716( "Girl 20", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40838(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_36716( "Contact 21", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 21", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41052(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35009( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_35009( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_36716( "Contact 22", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 22", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41305(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_35009( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35009( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_35009( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_36716( "Contact 24", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 24", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41552(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35009( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35009( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35009( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_36716( "Contact 25", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36716( "Contact 25", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41753(unknown uParam0)
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
        sub_35009( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_36716( "Girl 26", 1 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_36716( "Girl 26", 0 );
        sub_35009( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_42076(int iParam0, int iParam1)
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
    if (sub_42124( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_42855( iParam1 );
    }
    return;
}

int sub_42124(int iParam0, int iParam1)
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
            sub_42264( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_42264(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_42446( 0 );
    return;
}

void sub_42446(boolean bParam0)
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
        sub_42701();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_42701()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_42855(int iParam0)
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
        sub_43188( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_43188( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_43188( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_43188( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_43188( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_43188( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_43188( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_43188( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_43188( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_43188( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_43188( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_43188( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_43188( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_43188( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_43188( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_43188( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_43188( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_43188( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_43188( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_43188(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_43898(unknown uParam0, unknown uParam1)
{
    sub_43917( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_43917(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_44328()
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

int sub_44413(int iParam0, int iParam1)
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

void sub_44470(unknown uParam0)
{
    sub_617();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_44509(unknown uParam0)
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

void sub_44617()
{
    sub_44626();
    return;
}

void sub_44626()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_44705()
{
    sub_44626();
    return;
}

void sub_44745()
{
    sub_44626();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_44861(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    sub_4629( uParam0, ref cVar7, uParam2, uParam3, uParam4, 0 );
    return;
}

