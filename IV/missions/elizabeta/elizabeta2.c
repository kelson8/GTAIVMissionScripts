void main()
{
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
    l_U874 = 0;
    l_U931 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        l_U515 = 1;
        sub_111();
        sub_2221();
    }
    WAIT( 0 );
    sub_2958();
    while (true)
    {
        WAIT( 0 );
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_8832();
        }
        if (DOES_CHAR_EXIST( l_U481 ))
        {
            if ((IS_CHAR_DEAD( l_U481 )) || (IS_CHAR_INJURED( l_U481 )))
            {
                if ((l_U567 == 1) || (l_U567 == 0))
                {
                    if (DOES_BLIP_EXIST( l_U485 ))
                    {
                        REMOVE_BLIP( l_U485 );
                    }
                    if (DOES_BLIP_EXIST( l_U486 ))
                    {
                        REMOVE_BLIP( l_U486 );
                    }
                    sub_24416( 2 );
                }
                else
                {
                    sub_27805();
                    if (DOES_BLIP_EXIST( l_U485 ))
                    {
                        REMOVE_BLIP( l_U485 );
                    }
                    if (DOES_BLIP_EXIST( l_U486 ))
                    {
                        REMOVE_BLIP( l_U486 );
                    }
                    sub_24416( 1 );
                }
            }
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            sub_28040();
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 37 ))
        {
            sub_35875();
        }
        switch (l_U567)
        {
            case 0:
            if (NOT (IS_CHAR_DEAD( l_U481 )))
            {
                if (IS_WANTED_LEVEL_GREATER( sub_2750(), 0 ))
                {
                    if (DOES_BLIP_EXIST( l_U485 ))
                    {
                        REMOVE_BLIP( l_U485 );
                        PRINT_NOW( "ucWANTED_LVL", 7500, 0 );
                    }
                }
                else if (sub_36213( ref l_U486, ref l_U485, l_U481, 1367.15900000, 183.95900000, 28.31900000, "UC_MISSION6", "BUDDY", "UC_MISSION6" ))
                {
                    sub_36805( ref l_U485, 1388.09100000, 184.90490000, 25.92560000, 90.00000000 );
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2793(), 1367.15900000, 183.95900000, 28.31900000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                    {
                        if (sub_36911( 1, 1 ))
                        {
                            REMOVE_BLIP( l_U485 );
                            sub_2481();
                            if ((sub_36911( 1, 1 )) AND (sub_37228( sub_2793(), l_U481 )))
                            {
                                sub_37347();
                                l_U896 = 1;
                            }
                            else
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U481 );
                                if (NOT (DOES_BLIP_EXIST( l_U486 )))
                                {
                                    ADD_BLIP_FOR_CHAR( l_U481, ref l_U486 );
                                    SET_BLIP_AS_FRIENDLY( l_U486, 1 );
                                }
                                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U481, 1366.15000000, 196.00000000, 27.70000000, 2, 100000, 0.40000000 );
                                PRINT( "UC_MISSION5", 7500, 1 );
                            }
                            CREATE_CHAR( 4, -911507684, 1367.80000000, 200.20000000, 34.68790000, ref l_U482, 1 );
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U482, "Drugden_Floor03" );
                            SET_CHAR_HEADING( l_U482, 46.62330000 );
                            TASK_LOOK_AT_CHAR( l_U482, sub_2793(), -2, 0 );
                            SET_PED_DIES_WHEN_INJURED( l_U482, 1 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U482, 1 );
                            SET_CHAR_NEVER_TARGETTED( l_U482, 1 );
                            l_U567 = 1;
                        }
                    }
                    else if ((NOT l_U514) AND ((l_U897[2]) AND (IS_PED_JACKING( sub_2793() ))))
                    {
                        PRINTNL();
                        PRINTSTRING( "PLAYER JACKING PED" );
                        PRINTNL();
                        SAY_AMBIENT_SPEECH( l_U481, "NIKO_STEALS_VEHICLE", 1, 1, 0 );
                        l_U514 = 1;
                    }
                    if ((NOT (IS_THIS_PRINT_BEING_DISPLAYED( "UC_MISSION6", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))) AND ((l_U897[2]) AND (l_U897[0])))
                    {
                        sub_39434( l_U481, "E2_B1AV1", "E2_B1AV2", 0 );
                    }
                    if ((l_U897[2]) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_40000( l_U520 )))))
                    {
                        if (NOT l_U897[0])
                        {
                            PRINT( "UC_MISSION6", 7500, 1 );
                            l_U897[0] = 1;
                            SETTIMERA( 0 );
                        }
                    }
                    if (NOT l_U897[2])
                    {
                        sub_34701( "E2_DIR", ref l_U520, 6, 1 );
                        l_U897[2] = 1;
                    }
                }
            }
            break;
            case 1:
            sub_40789();
            if (NOT (IS_CHAR_DEAD( l_U481 )))
            {
                if (NOT l_U896)
                {
                    if (sub_40927())
                    {
                        sub_34701( "E2_ARR", ref l_U520, 6, 1 );
                        l_U896 = 1;
                    }
                }
                else if ((IS_CHAR_IN_AREA_3D( sub_2793(), 1369.10000000, 205.60000000, 34.70000000, 1376.70000000, 211.50000000, 37.70000000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_2793(), 1366.50000000, 195.50000000, 34.70000000, 1368.50000000, 203.00000000, 37.70000000, 0 )))
                {
                    sub_28439();
                    l_U567 = 2;
                }
                else if (NOT l_U918)
                {
                    GET_SCRIPT_TASK_STATUS( l_U481, 29, ref l_U929 );
                    if (l_U929 == 7)
                    {
                        if ((IS_CHAR_IN_AREA_3D( sub_2793(), 1364.80000000, 192.20000000, 29.00000000, 1368.50000000, 207.30000000, 100.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U481, sub_2793(), 4.00000000, 4.00000000, 4.00000000, 0 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U481, sub_2793(), 6.00000000, 6.00000000, 6.00000000, 0 ))
                            {
                                sub_34701( "E2_STAIR", ref l_U520, 6, 1 );
                            }
                            OPEN_SEQUENCE_TASK( ref l_U927 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1367.50000000, 200.00000000, 31.50000000, 2, 100000, 0.40000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1372.39100000, 198.41880000, 34.61330000, 2, 100000, 0.40000000 );
                            CLOSE_SEQUENCE_TASK( l_U927 );
                            TASK_PERFORM_SEQUENCE( l_U481, l_U927 );
                            CLEAR_SEQUENCE_TASK( l_U927 );
                            l_U918 = 1;
                        }
                        else
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U481, sub_2793() );
                        }
                    }
                };;;
            }
            break;
            case 2:
            sub_41461();
            switch (l_U568)
            {
                case 0:
                sub_41728( 2 );
                sub_42296();
                sub_43009( l_U569[5]._fU0, 35.00000000 );
                if (NOT l_U569[1]._fU56)
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2793(), 1368.87000000, 196.71830000, 35.74010000, 1.50000000, 1.50000000, 1.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2793(), 1379.09400000, 205.68360000, 35.68860000, 1.50000000, 1.50000000, 1.50000000, 0 )))
                    {
                        sub_32525( l_U569[1]._fU48, 1 );
                    }
                }
                if ((NOT l_U922) AND ((NOT (IS_CHAR_INJURED( l_U481 ))) AND ((IS_CHAR_INJURED( l_U569[3]._fU0 )) AND (IS_CHAR_INJURED( l_U569[2]._fU0 )))))
                {
                    REMOVE_CHAR_DEFENSIVE_AREA( l_U481 );
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U481, 1369.00000000, 198.50000000, 34.70000000, 1.00000000 );
                    TASK_SEEK_COVER_TO_COORDS( l_U481, 1369.00000000, 198.50000000, 34.70000000, 1366.30000000, 197.45000000, 36.15000000, 0 );
                    TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U481, 1369.00000000, 198.50000000, 34.70000000, 24.00000000, 1.00000000, -1, 1369.00000000, 198.50000000, 34.70000000, 1.00000000 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U481, 0 );
                    l_U922 = 1;
                }
                if ((NOT l_U919) AND (IS_CHAR_IN_AREA_2D( sub_2793(), 1364.81000000, 198.19000000, 1366.46000000, 202.28000000, 0 )))
                {
                    GET_CHAR_COORDINATES( sub_2793(), ref l_U923._fU0, ref l_U923._fU4, ref l_U923._fU8 );
                    if (l_U923._fU8 > 35.80000000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U569[4]._fU0 )))
                        {
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U569[4]._fU0 );
                            SET_CHAR_WILL_USE_COVER( l_U569[4]._fU0, 0 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U569[4]._fU0, 0 );
                            OPEN_SEQUENCE_TASK( ref l_U927 );
                            TASK_TOGGLE_DUCK( 0, 1 );
                            TASK_COMBAT_ROLL( 0, 1 );
                            TASK_COMBAT( 0, sub_2793() );
                            CLOSE_SEQUENCE_TASK( l_U927 );
                            TASK_PERFORM_SEQUENCE( l_U569[4]._fU0, l_U927 );
                            CLEAR_SEQUENCE_TASK( l_U927 );
                        }
                        l_U919 = 1;
                    }
                }
                if (l_U535)
                {
                    if (DOES_BLIP_EXIST( l_U569[5]._fU40 ))
                    {
                        REMOVE_BLIP( l_U569[5]._fU40 );
                    }
                    if (DOES_CHAR_EXIST( l_U569[5]._fU0 ))
                    {
                        DELETE_CHAR( ref l_U569[5]._fU0 );
                    }
                    sub_34007( l_U569[5]._fU48, 5 );
                    l_U939 = 0;
                    l_U920 = 0;
                    l_U535 = 0;
                }
                if ((IS_CHAR_INJURED( l_U569[5]._fU0 )) AND (IS_CHAR_INJURED( l_U569[4]._fU0 )))
                {
                    if (DOES_BLIP_EXIST( l_U569[0]._fU40 ))
                    {
                        REMOVE_BLIP( l_U569[0]._fU40 );
                    }
                    if (DOES_BLIP_EXIST( l_U569[1]._fU40 ))
                    {
                        REMOVE_BLIP( l_U569[1]._fU40 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U481 )))
                    {
                        sub_32375();
                        sub_34701( "E2_CLEAR", ref l_U520, 6, 1 );
                    }
                    sub_32525( l_U569[6]._fU48, 6 );
                    sub_32525( l_U569[7]._fU48, 7 );
                    l_U568 = 1;
                }
                break;
                case 1:
                sub_41728( 6 );
                sub_42296();
                if ((NOT l_U897[3]) AND (sub_40927()))
                {
                    sub_34701( "E2_UP", ref l_U520, 6, 1 );
                    l_U897[3] = 1;
                }
                if ((NOT l_U569[6]._fU56) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_2793(), 1365.52000000, 202.80750000, 43.67620000, 2.00000000, 2.00000000, 2.00000000, 0 )))
                {
                    sub_2495( ref l_U520, 0 );
                    sub_34701( "E2_MNOOSE", ref l_U520, 6, 1 );
                }
                if ((IS_CHAR_INJURED( l_U569[7]._fU0 )) AND ((DOES_CHAR_EXIST( l_U569[7]._fU0 )) AND ((IS_CHAR_INJURED( l_U569[6]._fU0 )) AND (DOES_CHAR_EXIST( l_U569[6]._fU0 )))))
                {
                    if (NOT (IS_CHAR_DEAD( l_U481 )))
                    {
                        sub_32375();
                        sub_34701( "E2_CLEAR", ref l_U520, 6, 1 );
                    }
                    sub_34007( l_U569[8]._fU48, 8 );
                    sub_34007( l_U569[9]._fU48, 9 );
                    sub_44372( 7 );
                    sub_44492( 4 );
                    FORCE_PED_TO_LOAD_COVER( l_U481, 1 );
                    l_U568 = 2;
                }
                break;
                case 2:
                sub_41728( 8 );
                sub_42296();
                if (IS_CHAR_INJURED( l_U569[8]._fU0 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U481 )))
                    {
                        REMOVE_CHAR_DEFENSIVE_AREA( l_U481 );
                        sub_32375();
                        sub_34701( "E2_FOLL", ref l_U520, 6, 1 );
                    }
                    l_U568 = 3;
                }
                break;
                case 3:
                sub_41728( 9 );
                sub_42296();
                sub_43009( l_U569[9]._fU0, 40.00000000 );
                if (IS_CHAR_INJURED( l_U569[9]._fU0 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U481 )))
                    {
                        REMOVE_CHAR_DEFENSIVE_AREA( l_U481 );
                        sub_32375();
                        sub_34701( "E2_FOLL", ref l_U520, 6, 1 );
                    }
                    l_U568 = 4;
                }
                break;
                case 4:
                sub_41728( 10 );
                sub_42296();
                if ((NOT l_U569[10]._fU56) AND (IS_CHAR_IN_AREA_3D( sub_2793(), 1373.10000000, 221.80000000, 45.00000000, 1383.10000000, 232.40000000, 55.00000000, 0 )))
                {
                    sub_32525( l_U569[10]._fU48, 10 );
                    sub_32525( l_U569[11]._fU48, 11 );
                }
                if ((DOES_CHAR_EXIST( l_U569[11]._fU0 )) AND (DOES_CHAR_EXIST( l_U569[10]._fU0 )))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U569[11]._fU0 ))) AND (NOT (IS_CHAR_DEAD( l_U569[10]._fU0 ))))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U569[11]._fU0, 1392.62300000, 238.20320000, 46.59830000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U569[10]._fU0, 1392.62300000, 238.20320000, 46.59830000, 2.00000000, 2.00000000, 2.00000000, 0 )))
                        {
                            if (NOT l_U897[4])
                            {
                                sub_34701( "E2_MNOOSE", ref l_U520, 6, 1 );
                                l_U897[4] = 1;
                            }
                        }
                    }
                }
                if ((NOT (IS_CHAR_DEAD( l_U569[12]._fU0 ))) AND (DOES_CHAR_EXIST( l_U569[12]._fU0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U569[12]._fU0, 1392.62300000, 238.20320000, 46.59830000, 2.00000000, 2.00000000, 2.00000000, 0 ))
                    {
                        if (NOT l_U897[7])
                        {
                            sub_34701( "E2_KNOOSE", ref l_U520, 6, 1 );
                            l_U897[7] = 1;
                        }
                    }
                }
                if (((IS_CHAR_INJURED( l_U569[11]._fU0 )) AND (DOES_CHAR_EXIST( l_U569[11]._fU0 ))) || ((IS_CHAR_INJURED( l_U569[10]._fU0 )) AND (DOES_CHAR_EXIST( l_U569[10]._fU0 ))))
                {
                    if (NOT (DOES_CHAR_EXIST( l_U569[12]._fU0 )))
                    {
                        sub_32525( l_U569[12]._fU48, 12 );
                    }
                }
                if (((IS_CHAR_INJURED( l_U569[11]._fU0 )) AND (DOES_CHAR_EXIST( l_U569[11]._fU0 ))) AND ((IS_CHAR_INJURED( l_U569[10]._fU0 )) AND (DOES_CHAR_EXIST( l_U569[10]._fU0 ))))
                {
                    if (DOES_CHAR_EXIST( l_U569[12]._fU0 ))
                    {
                        if (IS_CHAR_INJURED( l_U569[12]._fU0 ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U481 )))
                            {
                                REMOVE_CHAR_DEFENSIVE_AREA( l_U481 );
                                sub_32375();
                                sub_34701( "E2_FOLL", ref l_U520, 6, 1 );
                            }
                            sub_44372( 12 );
                            l_U568 = 5;
                        }
                    }
                }
                break;
                case 5:
                sub_41728( 16 );
                sub_42296();
                sub_43009( l_U569[16]._fU0, 37.00000000 );
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    if ((IS_CHAR_INJURED( l_U569[16]._fU0 )) AND (DOES_CHAR_EXIST( l_U569[16]._fU0 )))
                    {
                        sub_34701( "E2_MOVE", ref l_U520, 6, 1 );
                        if (NOT (IS_CHAR_DEAD( l_U481 )))
                        {
                            REMOVE_BLIP( l_U486 );
                            CLEAR_CHAR_TASKS( l_U481 );
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U481 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U481, 0 );
                            GET_PLAYER_GROUP( sub_2750(), ref l_U508 );
                            SET_GROUP_MEMBER( sub_8601(), l_U481 );
                            SET_CHAR_RELATIONSHIP( l_U481, 1, 0 );
                            FORCE_PED_TO_LOAD_COVER( l_U481, 0 );
                        }
                        SET_FAKE_WANTED_LEVEL( 2 );
                        SETTIMERA( 0 );
                        g_U9932[2]._fU0 = 1;
                        SET_INT_STAT( 363, 2 );
                        ADD_BLIP_FOR_COORD( -419.69800000, 1492.14000000, 20.06400000, ref l_U485 );
                        SET_ROUTE( l_U485, 1 );
                        SWITCH_PED_PATHS_OFF( -428.67520000, 1485.13900000, 0.00000000, -414.95180000, 1490.69800000, 100.00000000 );
                        ADD_SCENARIO_BLOCKING_AREA( -428.67520000, 1485.13900000, 0.00000000, -414.95180000, 1490.69800000, 100.00000000 );
                        SWITCH_ROADS_OFF( -451.90880000, 1492.54100000, 0.00000000, -378.46900000, 1500.44000000, 100.00000000 );
                        CLEAR_AREA( -422.10630000, 1492.05100000, 18.33510000, 15.00000000, 1 );
                        SET_CREATE_RANDOM_COPS( 1 );
                        l_U567 = 3;
                    }
                    else if ((NOT l_U569[16]._fU56) AND ((IS_CHAR_IN_AREA_3D( l_U481, 1391.05000000, 229.12000000, 41.67000000, 1400.21000000, 245.81000000, 43.36000000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_2793(), 1391.05000000, 229.12000000, 41.67000000, 1400.21000000, 245.81000000, 43.36000000, 0 ))))
                    {
                        GET_INTERIOR_AT_COORDS( 1399.13000000, 238.18000000, 38.78000000, ref l_U499 );
                        ACTIVATE_INTERIOR( l_U499, 1 );
                        sub_32525( l_U569[16]._fU48, 16 );
                    }
                }
                break;
            }
            break;
            case 3:
            sub_41461();
            sub_46315();
            sub_46967();
            if (NOT (IS_CHAR_DEAD( l_U481 )))
            {
                if ((NOT l_U569[13]._fU56) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_2793(), 1397.24200000, 232.60950000, 38.48640000, 2.00000000, 2.00000000, 2.00000000, 0 )))
                {
                    sub_32525( l_U569[13]._fU48, 13 );
                }
                if ((NOT l_U569[15]._fU56) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_2793(), 1397.07800000, 233.06350000, 30.51650000, 2.00000000, 2.00000000, 2.00000000, 0 )))
                {
                    sub_32525( l_U569[15]._fU48, 15 );
                }
                if ((NOT l_U569[17]._fU56) AND (IS_CHAR_IN_AREA_3D( sub_2793(), 1364.88000000, 192.24000000, 30.73000000, 1368.41000000, 207.41000000, 33.72000000, 0 )))
                {
                    sub_32525( l_U569[17]._fU48, 17 );
                    sub_32525( l_U569[18]._fU48, 18 );
                }
                if ((NOT l_U560) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_2793(), 1399.17000000, 244.00000000, 27.01600000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    if (IS_CHAR_IN_AREA_3D( l_U481, 1396.20000000, 229.90000000, 31.60000000, 1400.20000000, 241.40000000, 40.50000000, 0 ))
                    {
                        SET_CHAR_COORDINATES( l_U481, 1396.99700000, 237.19470000, 29.51680000 );
                        SET_CHAR_HEADING( l_U481, 186 );
                        SET_ROOM_FOR_CHAR_BY_NAME( l_U481, "bkn_bshRoom02" );
                        l_U560 = 1;
                    }
                }
                if ((NOT l_U897[8]) AND (sub_40927()))
                {
                    sub_34701( "E2_BACK", ref l_U520, 6, 1 );
                    l_U897[8] = 1;
                }
                if (IS_WANTED_LEVEL_GREATER( sub_2750(), 0 ))
                {
                    GET_PLAYER_GROUP( sub_2750(), ref l_U508 );
                    if (NOT (IS_GROUP_MEMBER( l_U481, l_U508 )))
                    {
                        SET_GROUP_MEMBER( l_U508, l_U481 );
                    }
                    SET_CHAR_NEVER_LEAVES_GROUP( l_U481, 1 );
                    if (DOES_BLIP_EXIST( l_U485 ))
                    {
                        REMOVE_BLIP( l_U485 );
                        PRINT_NOW( "ucWANTED_LVL", 7500, 0 );
                    }
                }
                else
                {
                    SET_CHAR_NEVER_LEAVES_GROUP( l_U481, 0 );
                    if (sub_36213( ref l_U486, ref l_U485, l_U481, -419.69800000, 1492.14000000, 20.06400000, "UC_MISSION11", "BUDDY", "UC_MISSION11" ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2793(), -419.69800000, 1492.14000000, 20.06400000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                        {
                            sub_2481();
                            REMOVE_BLIP( l_U485 );
                            sub_44372( 11 );
                            REMOVE_CHAR_FROM_GROUP( l_U481 );
                            sub_48069();
                            sub_8832();
                        }
                        else if (DOES_BLIP_EXIST( l_U486 ))
                        {
                            REMOVE_BLIP( l_U486 );
                        }
                        if ((NOT (IS_THIS_PRINT_BEING_DISPLAYED( "UC_MISSION11", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))) AND ((l_U897[8]) AND (DOES_BLIP_EXIST( l_U485 ))))
                        {
                            sub_39434( l_U481, "E2_2AV1", "E2_B2V2", 1 );
                        }
                        if ((l_U897[8]) AND (NOT (DOES_BLIP_EXIST( l_U485 ))))
                        {
                            ADD_BLIP_FOR_COORD( -419.69800000, 1492.14000000, 20.06400000, ref l_U485 );
                            CHANGE_BLIP_COLOUR( l_U485, 5 );
                            SET_ROUTE( l_U485, 1 );
                            PRINT_NOW( "UC_MISSION11", 7500, 0 );
                        }
                    }
                }
            }
            break;
            default: break;
        }
    }
    sub_2221();
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

    iVar2 = 6;
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
    SET_FAKE_WANTED_LEVEL( 0 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_MAX_WANTED_LEVEL( 6 );
    SET_CREATE_RANDOM_COPS( 1 );
    if (DOES_PICKUP_EXIST( l_U563 ))
    {
        REMOVE_PICKUP( l_U563 );
    }
    if (DOES_PICKUP_EXIST( l_U562 ))
    {
        REMOVE_PICKUP( l_U562 );
    }
    if (DOES_PICKUP_EXIST( l_U564 ))
    {
        REMOVE_PICKUP( l_U564 );
    }
    if (DOES_PICKUP_EXIST( l_U566 ))
    {
        REMOVE_PICKUP( l_U566 );
    }
    if (l_U515)
    {
        g_U9932[2]._fU0 = 0;
        SET_INT_STAT( 363, 1 );
    }
    CLEAR_HELP();
    FLUSH_COVER_BLOCKING_AREAS();
    CANCEL_OVERRIDE_RESTART();
    sub_2435();
    sub_2481();
    SWITCH_PED_PATHS_ON( 1364.04900000, 191.42910000, 0.00000000, 1382.55800000, 222.17540000, 100.00000000 );
    SWITCH_PED_PATHS_ON( 1373.74900000, 227.18450000, 0.00000000, 1400.76900000, 245.48940000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1353.69000000, 174.06080000, 0.00000000, 1419.25300000, 187.10470000, 100.00000000 );
    if (IS_PLAYER_PLAYING( sub_2750() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2793(), 1 );
        SET_CHAR_NOT_DAMAGED_BY_RELATIONSHIP_GROUP( sub_2793(), 0, 24 );
    }
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_ALL_RANDOM_PEDS_FLEE( sub_2750(), 0 );
    g_U9942 = 1;
    sub_2882();
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2435()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2481()
{
    sub_2495( ref l_U520, 0 );
    l_U509 = 0;
    l_U510 = 0;
    return;
}

void sub_2495(int iParam0, unknown uParam1)
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

void sub_2750()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2793()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2882()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_2958()
{
    SET_WANTED_MULTIPLIER( 0.20000000 );
    LOAD_ADDITIONAL_TEXT( "UCVRCOP", 0 );
    sub_3010( "elizabeta2" );
    LOAD_ADDITIONAL_TEXT( "E2AUD", 6 );
    sub_3204( "E2AUD" );
    if (g_U9893._fU24)
    {
        START_CUTSCENE_NOW( "EM_4" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "EM_4" );
    }
    sub_3410( 9 );
    REQUEST_MODEL( -911507684 );
    REQUEST_MODEL( -808457413 );
    REQUEST_MODEL( 807349477 );
    while ((NOT (HAS_MODEL_LOADED( -808457413 ))) || ((NOT (HAS_MODEL_LOADED( -911507684 ))) || (NOT (sub_4150( 9 )))))
    {
        WAIT( 0 );
    }
    SET_CREATE_RANDOM_COPS( 0 );
    CLEAR_AREA_OF_COPS( 1372, 206, 30, 50.00000000 );
    CREATE_CAR( -808457413, 376.53500000, 1538.98800000, 15.35430000, ref l_U921, 1 );
    SET_CAR_HEADING( l_U921, 269.23000000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U921 );
    CHANGE_CAR_COLOUR( l_U921, 89, 0 );
    SET_CAR_LIVERY( l_U921, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -808457413 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U921 );
    CREATE_PICKUP_ROTATE( sub_4373( 10 ), 15, 16, 1398.34000000, 240.80000000, 37.54000000, 270, 0, 60, ref l_U566 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U566, "bkn_bshRoom04" );
    CREATE_PICKUP_ROTATE( sub_4373( 11 ), 22, 16, 1367.66000000, 207.27500000, 26.98500000, -118.80000000, 298.80000000, 77.76000000, ref l_U562 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U562, "drugden_floor1" );
    CREATE_PICKUP_ROTATE( sub_4373( 10 ), 22, 16, 1380.47000000, 199.40000000, 35.04000000, 40.32000000, 241.92000000, 288.72000000, ref l_U563 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U563, "drugden_floor3b" );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 1367.80400000, 206.69200000, 46.90500000, 90.00000000, 0, 30.24000000, ref l_U564 );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 1384.42900000, 231.78800000, 45.44000000, 160.00000000, 180.00000000, 90, ref l_U565 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2793(), 0 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U494 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U495 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U496 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U497 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U498 );
    SET_DECISION_MAKER_ATTRIBUTE_MOVEMENT_STYLE( l_U497, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U495, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U495, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U495, 10 );
    SET_RELATIONSHIP( 5, 23, 0 );
    SET_RELATIONSHIP( 1, 24, 0 );
    SET_RELATIONSHIP( 5, 24, 23 );
    SET_RELATIONSHIP( 5, 23, 24 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2793() );
    SET_PLAYER_CONTROL( sub_2750(), 1 );
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    sub_4961( 372.41000000, 1514.64000000, 16.15000000, 327, 362, 1504, 15, 30, -1, 0 );
    sub_5289( 9, ref l_U481, 364.70040000, 1506.48000000, 15.93360000, 139.03860000 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U481, 1 );
    sub_6966( 0, sub_2793(), "NIKO", 0 );
    sub_6966( 1, l_U481, "PLAYBOY", 0 );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U481, 1 );
    SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U481, 1 );
    SET_PED_DIES_WHEN_INJURED( l_U481, 1 );
    SET_CHAR_NOT_DAMAGED_BY_RELATIONSHIP_GROUP( sub_2793(), 1, 24 );
    LOAD_SCENE( 362.82160000, 1504.80200000, 15.97050000 );
    SET_CHAR_COORDINATES( sub_2793(), 362.82160000, 1504.80200000, 15.97050000 );
    SET_CHAR_HEADING( sub_2793(), 270.00000000 );
    SWITCH_PED_PATHS_OFF( 1364.04900000, 191.42910000, 0.00000000, 1382.55800000, 222.17540000, 100.00000000 );
    SWITCH_PED_PATHS_OFF( 1373.74900000, 227.18450000, 0.00000000, 1400.76900000, 245.48940000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 1364.04900000, 191.42910000, 0.00000000, 1382.55800000, 222.17540000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 1373.74900000, 227.18450000, 0.00000000, 1400.76900000, 245.48940000, 100.00000000 );
    SWITCH_ROADS_OFF( 1356, 171, 0, 1385, 187, 100 );
    CLEAR_AREA( 1382.55800000, 222.17540000, 25.00000000, 300.00000000, 1 );
    SET_ALL_RANDOM_PEDS_FLEE( sub_2750(), 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1345134469 );
    l_U567 = 0;
    l_U568 = 0;
    SET_CAM_BEHIND_PED( sub_2793() );
    l_U526 = {1366.66900000, 190.77660000, 40.23024000};
    l_U529 = 0.20000000;
    l_U534 = 1;
    l_U530 = 12.00000000;
    l_U531 = 0.50000000;
    l_U532 = 2.00000000;
    l_U533 = 4.00000000;
    CREATE_WIDGET_GROUP( "Dave Defense Widget" );
    ADD_WIDGET_TOGGLE( "Activate", ref l_U539 );
    ADD_WIDGET_TOGGLE( "USE COORDS FOR LOCATE", ref l_U536 );
    ADD_WIDGET_FLOAT_SLIDER( "LOCATE_SIZE.X", ref l_U540._fU0, 0.00000000, 100.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "LOCATE_SIZE.Y", ref l_U540._fU4, 0.00000000, 100.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "LOCATE_SIZE.Z", ref l_U540._fU8, 0.00000000, 100.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vPLAYER_COORDS.X", ref l_U543._fU0, -2000.00000000, 2000.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vPLAYER_COORDS.Y", ref l_U543._fU4, -2000.00000000, 2000.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vPLAYER_COORDS.Z", ref l_U543._fU8, -2000.00000000, 2000.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Ped Head", ref l_U559, 0.00000000, 360.00000000, 0.50000000 );
    ADD_WIDGET_TOGGLE( "Update player pos", ref l_U538 );
    ADD_WIDGET_TOGGLE( "PRINT_TO_O/P_FILE", ref l_U537 );
    ADD_WIDGET_FLOAT_SLIDER( "vPLAYER_COORDS.X", ref l_U543._fU0, -2000.00000000, 2000.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vPLAYER_COORDS.Y", ref l_U543._fU4, -2000.00000000, 2000.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vPLAYER_COORDS.Z", ref l_U543._fU8, -2000.00000000, 2000.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "VOFFS_MAX.X", ref l_U546._fU0, 0.00000000, 100.00000000, 0.50000000 );
    ADD_WIDGET_FLOAT_SLIDER( "VOFFS_MAX.Y", ref l_U546._fU4, 0.00000000, 100.00000000, 0.50000000 );
    ADD_WIDGET_FLOAT_SLIDER( "VOFFS_MAX.Z", ref l_U546._fU8, 0.00000000, 100.00000000, 0.50000000 );
    ADD_WIDGET_FLOAT_SLIDER( "VOFFS_MIN.X", ref l_U549._fU0, -100.00000000, 0.00000000, 0.50000000 );
    ADD_WIDGET_FLOAT_SLIDER( "VOFFS_MIN.Y", ref l_U549._fU4, -100.00000000, 0.00000000, 0.50000000 );
    ADD_WIDGET_FLOAT_SLIDER( "VOFFS_MIN.Z", ref l_U549._fU8, -100.00000000, 0.00000000, 0.50000000 );
    ADD_WIDGET_FLOAT_SLIDER( "WIDTH", ref l_U558, -100.00000000, 100.00000000, 0.50000000 );
    END_WIDGET_GROUP();
    SET_CHAR_RELATIONSHIP_GROUP( l_U481, 24 );
    GIVE_WEAPON_TO_CHAR( l_U481, 12, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U481, 0, 0 );
    SET_COMBAT_DECISION_MAKER( l_U481, l_U495 );
    SET_CHAR_NEVER_TARGETTED( l_U481, 1 );
    GET_PLAYER_GROUP( sub_2750(), ref l_U508 );
    SET_GROUP_MEMBER( sub_8601(), l_U481 );
    SET_CHAR_RELATIONSHIP( l_U481, 1, 0 );
    SET_PLAYER_CONTROL( sub_2750(), 1 );
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    sub_2882();
    ADD_BLIP_FOR_COORD( 1368.26900000, 182.93230000, 27.14940000, ref l_U485 );
    SET_ROUTE( l_U485, 1 );
    SET_CAM_BEHIND_PED( sub_2793() );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN( 500 );
    SETTIMERA( 0 );
    return;
}

void sub_3010(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_3204(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3223();
    return;
}

void sub_3223()
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

void sub_3410(unknown uParam0)
{
    REQUEST_MODEL( sub_3421( uParam0 ) );
    return;
}

int sub_3421(unknown uParam0)
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

void sub_4150(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_3421( uParam0 ) );
}

void sub_4373(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

void sub_4961(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, boolean bParam9)
{
    unknown uVar12;
    boolean bVar13;
    unknown uVar14;

    uVar14 = TO_FLOAT( iParam8 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar12 );
    if (IS_VEH_DRIVEABLE( uVar12 ))
    {
        if (iParam8 > 0)
        {
            if (LOCATE_CAR_3D( uVar12, uParam4._fU0, uParam4._fU4, uParam4._fU8, uVar14, uVar14, uVar14, 0 ))
            {
                SET_CAR_COORDINATES( uVar12, -10, -10, -10 );
                bVar13 = true;
            }
        }
        else if (LOCATE_CAR_3D( uVar12, uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, uParam7, uParam7, 0 ))
        {
            SET_CAR_COORDINATES( uVar12, -10, -10, -10 );
            bVar13 = true;
        }
    }
    if (bParam9)
    {
        CLEAR_AREA_OF_CARS( uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7 );
    }
    else
    {
        CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, 0 );
    }
    if (bVar13)
    {
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 3.00000000, 0 );
        SET_CAR_HEADING( uVar12, uParam3 );
        SET_CAR_COORDINATES( uVar12, uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    return;
}

void sub_5289(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_3421( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_5339( uParam0, (uParam1^) );
    return;
}

void sub_5339(unknown uParam0, unknown uParam1)
{
    sub_5351( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_5351(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_5445( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_5989( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_5445(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_5989(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_5445( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_5445( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_5445( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_5445( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_5445( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_5445( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_5445( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_5445( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_5445( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_5445( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_5445( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_5445( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_5445( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_6966(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_7050( "\n PED NUMBER ", uParam0 );
    sub_7090( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_7050(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7090(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8601()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_8832()
{
    sub_8841();
    CLEAR_WANTED_LEVEL( sub_2750() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 60 );
    sub_20473( 6, "E2_CALLP", "E2AUD", 0 );
    UNLOCK_LAZLOW_STATION();
    UNLOCK_MISSION_NEWS_STORY( 15 );
    sub_21075( 15 );
    sub_2221();
    return;
}

void sub_8841()
{
    sub_8850();
    return;
}

void sub_8850()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_8868();
    sub_8927( iVar2, iVar3, iVar4 );
    return;
}

void sub_8868()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_8927(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 6;
    sub_8960( iVar5, uParam0, uParam1, uParam2, "Contact_7b" );
    return;
}

void sub_8960(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_9056( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_9056( ref cVar9 );
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
            sub_9056( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_9056( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_9056( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_9056( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_9633( iParam0, iVar7 );;;
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
                sub_10030( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_10030( 0, 4 );
            }
        }
    }
    if (NOT (sub_10119( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2750(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2750() );
    }
    sub_1319();
    bVar27 = true;
    uVar28 = sub_9633( iParam0, iVar7 );
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
                sub_19495( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_19925();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_20010( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_20067( iParam0 );
                sub_20106( 0 );
                sub_1217( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_20214();
        }
    }
    if (bParam2)
    {
        sub_19925();
        sub_20302();
        sub_20106( 0 );
    }
    if (bParam3)
    {
        sub_19925();
        sub_20342();
        sub_20106( 0 );
        sub_1217( uVar29, 0 );
    }
    sub_663();
    return;
}

void sub_9056(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_9633(int iParam0, int iParam1)
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

void sub_10030(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_10119(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_10327( uParam1 );
        break;
        case 1:
        bVar8 = sub_12405( uParam1 );
        break;
        case 2:
        bVar8 = sub_12631( uParam1 );
        break;
        case 3:
        bVar8 = sub_12781( uParam1 );
        break;
        case 4:
        bVar8 = sub_13059( uParam1 );
        break;
        case 5:
        bVar8 = sub_13362( uParam1 );
        break;
        case 6:
        bVar8 = sub_13561( uParam1 );
        break;
        case 7:
        bVar8 = sub_13787( uParam1 );
        break;
        case 8:
        bVar8 = sub_14022( uParam1 );
        break;
        case 9:
        bVar8 = sub_14397( uParam1 );
        break;
        case 10:
        bVar8 = sub_14644( uParam1 );
        break;
        case 11:
        bVar8 = sub_14783( uParam1 );
        break;
        case 12:
        bVar8 = sub_15082( uParam1 );
        break;
        case 13:
        bVar8 = sub_15310( uParam1 );
        break;
        case 14:
        bVar8 = sub_15597( uParam1 );
        break;
        case 15:
        bVar8 = sub_15879( uParam1 );
        break;
        case 16:
        bVar8 = sub_16161( uParam1 );
        break;
        case 17:
        bVar8 = sub_16362( uParam1 );
        break;
        case 18:
        bVar8 = sub_16435( uParam1 );
        break;
        case 19:
        bVar8 = sub_16649( uParam1 );
        break;
        case 20:
        bVar8 = sub_16902( uParam1 );
        break;
        case 21:
        bVar8 = sub_17149( uParam1 );
        break;
        case 22:
        bVar8 = sub_17350( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_12010( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_9633( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_17673( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_10327(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_10606( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_10606( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_10606( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_10606( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_10606( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_10606( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_10606( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_10606( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_10606( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_10606( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_10606( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_10606( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_10606( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_10606( iVar3, 0, 3, 1, 0, 0 );
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
        sub_10606( iVar3, 0, sub_11888(), sub_12154(), 0, 0 );
        break;
        default:
        sub_12313( "Friend 1", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Friend 1", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_10606(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_10617( uParam1 );
    sub_10791( uParam0, 0, uParam2 );
    sub_10791( uParam0, 1, uParam3 );
    sub_10791( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_8868();
    return;
}

void sub_10617(unknown uParam0)
{
    ADD_SCORE( sub_2750(), uParam0 );
    sub_10642( uParam0 );
    return;
}

void sub_10642(int iParam0)
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

void sub_10791(unknown uParam0, int iParam1, int iParam2)
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
        sub_10948( uParam0 );
    }
    return;
}

void sub_10948(unknown uParam0)
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

int sub_11888()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12010( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_12010(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_12154()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12010( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_12313(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_12405(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10606( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_12313( "Contact 2", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 2", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12631(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_10606( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_12313( "Girl 3", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Girl 3", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12781(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_10606( iVar3, 0, sub_11888(), sub_12154(), 0, 0 );
        break;
        default:
        sub_12313( "Friend 4", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Friend 4", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13059(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10606( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10606( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10606( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10606( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_12313( "Contact 5", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 5", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13362(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_12313( "Contact 7", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 7", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13561(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10606( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_12313( "Contact 7b", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 7b", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13787(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_10606( iVar3, 0, sub_11888(), sub_12154(), 0, 0 );
        break;
        default:
        sub_12313( "Friend 8", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Friend 8", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14022(unknown uParam0)
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
        sub_10606( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_10606( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_10606( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_10606( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_10606( iVar3, 0, sub_11888(), sub_12154(), 0, 0 );
        break;
        default:
        sub_12313( "Friend 9", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Friend 9", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14397(unknown uParam0)
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
        sub_10606( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_10606( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_10606( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_12313( "Contact 10", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_12313( "Contact 10", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14644(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_12313( "Girl 11", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Girl 11", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14783(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10606( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10606( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10606( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10606( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_10606( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_12313( "Contact 12", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 12", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15082(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10606( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_12313( "Contact 13", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 13", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15310(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_10606( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_10606( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_10606( iVar3, 0, sub_11888(), sub_12154(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_12313( "Friend 15", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Friend 15", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15597(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10606( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10606( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10606( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_12313( "Contact 16", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 16", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15879(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10606( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10606( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_10606( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_12313( "Contact 18", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 18", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16161(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_12313( "Contact 19", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 19", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16362(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_12313( "Girl 20", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16435(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_12313( "Contact 21", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 21", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16649(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10606( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10606( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_12313( "Contact 22", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 22", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16902(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_10606( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10606( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10606( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_12313( "Contact 24", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 24", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17149(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10606( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10606( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10606( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_12313( "Contact 25", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12313( "Contact 25", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17350(unknown uParam0)
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
        sub_10606( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_12313( "Girl 26", 1 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_12313( "Girl 26", 0 );
        sub_10606( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_17673(int iParam0, int iParam1)
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
    if (sub_17721( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_18452( iParam1 );
    }
    return;
}

int sub_17721(int iParam0, int iParam1)
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
            sub_17861( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_17861(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_18043( 0 );
    return;
}

void sub_18043(boolean bParam0)
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
        sub_18298();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_18298()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_18452(int iParam0)
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
        sub_18785( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_18785( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_18785( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_18785( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_18785( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_18785( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_18785( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_18785( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_18785( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_18785( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_18785( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_18785( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_18785( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_18785( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_18785( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_18785( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_18785( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_18785( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_18785( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_18785(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_19495(unknown uParam0, unknown uParam1)
{
    sub_19514( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_19514(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_19925()
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

int sub_20010(int iParam0, int iParam1)
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

void sub_20067(unknown uParam0)
{
    sub_562();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_20106(unknown uParam0)
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

void sub_20214()
{
    sub_20223();
    return;
}

void sub_20223()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_20302()
{
    sub_20223();
    return;
}

void sub_20342()
{
    sub_20223();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_20473(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_20517( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_20517(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_21075(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_21162( iParam0 ))
    {
        sub_22224( iParam0 );
    }
    return;
}

int sub_21162(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_21219( ref uVar3, 1, 0, 0 );
    sub_21831( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_22044( "\n ----------------------------------------------------------------" );
    sub_7050( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_22044( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_21219(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_21272( iParam0, uParam1, uParam2 );
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
        sub_21404( iParam0 + 0 );
    }
    return;
}

void sub_21272(int iParam0, int iParam1, int iParam2)
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
        sub_21404( iParam0 + 0 );
    }
    return;
}

void sub_21404(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_21435( iParam0->_fU4 )))
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

int sub_21435(unknown uParam0)
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

void sub_21831(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_22044(unknown uParam0)
{
    return;
}

void sub_22224(unknown uParam0)
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
        sub_22435( 20, 6, 16383, 16383, ref uVar4 );
        sub_23111( ref uVar4, 7 );
        sub_23142( ref uVar4, 0 );
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
        sub_22435( 20, 7, 9, 16383, ref uVar4 );
        sub_23111( ref uVar4, 7 );
        sub_23142( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_22435(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_22459( uParam0, 0, iParam4 + 0 );
    sub_22459( uParam1, 1, iParam4 + 0 );
    sub_22459( uParam2, 2, iParam4 + 0 );
    sub_22459( uParam3, 3, iParam4 + 0 );
    sub_22459( 0, 4, iParam4 + 0 );
    sub_22459( 1, 5, iParam4 + 0 );
    sub_22459( 65535, 6, iParam4 + 0 );
    sub_22459( 0, 12, iParam4 + 0 );
    sub_22459( 0, 11, iParam4 + 0 );
    sub_22459( 0, 14, iParam4 + 0 );
    sub_22459( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_22459( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_22459( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_22459(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_23111(int iParam0, unknown uParam1)
{
    sub_22459( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_23142(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_23182())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_23869( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_23668( iVar5 );
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

int sub_23182()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_23216( 5, g_U968[I] )) == 7)
        {
            sub_23668( I );
            return 1;
        }
    }
    return 0;
}

int sub_23216(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_23668(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_23741( 39 );
    return;
}

void sub_23741(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_23869(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_23930( uParam0, g_U968[Result] ))
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

int sub_23930(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_24416(unknown uParam0)
{
    sub_2495( ref l_U520, 1 );
    SET_ALL_RANDOM_PEDS_FLEE( sub_2750(), 1 );
    switch (uParam0)
    {
        case 0:
        PRINT_NOW( "BUDDY_LOST", 7000, 1 );
        sub_20473( 6, "E2_FAILL", "E2AUD", 0 );
        break;
        case 1:
        PRINT_NOW( "BUDDY_DEAD", 7000, 1 );
        sub_20473( 6, "E2_FAILD", "E2AUD", 0 );
        break;
        case 2:
        PRINT_NOW( "BUDDY_DEAD", 7000, 1 );
        sub_20473( 6, "E2_PBDEAD", "E2AUD", 0 );
        break;
        case 3:
        sub_24655();
        PRINT_NOW( "JOHNNY_DEAD", 7000, 1 );
        sub_20473( 6, "E2_FAILJ", "E2AUD", 0 );
        break;
    }
    g_U9932[2]._fU0 = 0;
    SET_INT_STAT( 363, 1 );
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2750(), 150 );
        SAY_AMBIENT_SPEECH( sub_2793(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_27370();
    sub_27674();
    sub_2221();
    return;
}

void sub_24655()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    while ((NOT bVar3) AND (NOT bVar2))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar7 );
        if (iVar4 != 0)
        {
            iVar8 = iVar7 - iVar6;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_24716()) AND (iVar8 >= 1000)))
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            DO_SCREEN_FADE_IN( 500 );
            bVar3 = true;
        }
        else
        {
            switch (iVar4)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_2750(), 0 );
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                while (NOT sub_24947())
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                REQUEST_MODEL( 1923400478 );
                while (NOT (HAS_MODEL_LOADED( 1923400478 )))
                {
                    WAIT( 0 );
                }
                LOAD_SCENE( 476.94960000, 1402.12900000, 10.62810000 );
                SWITCH_ROADS_OFF( 440.30700000, 1372.81900000, 0.00000000, 500.31350000, 1452.16200000, 100.00000000 );
                CLEAR_AREA( 476.94960000, 1402.12900000, 10.62810000, 15.00000000, 1 );
                BEGIN_CAM_COMMANDS( ref l_U492 );
                CREATE_CAM( 14, ref l_U488[0] );
                SET_CAM_POS( l_U488[0], 483.42280000, 1404.69500000, 12.18539000 );
                SET_CAM_ROT( l_U488[0], -3.54988600, -0.00000000, 116.64070000 );
                SET_CAM_FOV( l_U488[0], 45.00000000 );
                CREATE_CAM( 14, ref l_U488[1] );
                SET_CAM_POS( l_U488[1], 483.42280000, 1404.69500000, 12.18539000 );
                SET_CAM_ROT( l_U488[1], -3.54988600, -0.00000000, 116.64070000 );
                SET_CAM_FOV( l_U488[1], 37.00000000 );
                CREATE_CAM( 3, ref l_U491 );
                SET_CAM_ACTIVE( l_U488[0], 1 );
                SET_CAM_PROPAGATE( l_U488[0], 1 );
                SET_CAM_ACTIVE( l_U488[1], 1 );
                SET_CAM_PROPAGATE( l_U488[1], 1 );
                SET_CAM_ACTIVE( l_U491, 1 );
                SET_CAM_PROPAGATE( l_U491, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U491, l_U488[0], l_U488[1], 9000, 0 );
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2793() );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U481 );
                    CREATE_CAR( 1923400478, -10, -10, -10, ref uVar5, 1 );
                    SET_CAR_COORDINATES( uVar5, 476.94960000, 1402.12900000, 10.62810000 );
                    SET_CAR_HEADING( uVar5, 216.38820000 );
                    SET_CAR_ON_GROUND_PROPERLY( uVar5 );
                    WARP_CHAR_INTO_CAR( sub_2793(), uVar5 );
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2793(), 1 );
                    if (NOT (IS_CHAR_DEAD( l_U481 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U481, uVar5, 0 );
                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U481, 1 );
                        TASK_LOOK_AT_CHAR( sub_2793(), l_U481, -1, 0 );
                    }
                }
                WAIT( 500 );
                DO_SCREEN_FADE_IN( 500 );
                GET_GAME_TIMER( ref iVar6 );
                SETTIMERA( 0 );
                iVar4++;
                break;
                case 1:
                if (TIMERA() > 1000)
                {
                    if (NOT (IS_CHAR_DEAD( l_U481 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U927 );
                        TASK_PAUSE( 0, 1500 );
                        if (NOT (IS_CAR_DEAD( uVar5 )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U481 ))
                            {
                                TASK_LEAVE_ANY_CAR( 0 );
                            }
                        }
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 458.85000000, 1392.64000000, 11.60000000, 2, 20000, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( l_U927 );
                        TASK_PERFORM_SEQUENCE( l_U481, l_U927 );
                        CLEAR_SEQUENCE_TASK( l_U927 );
                    }
                    sub_25981( "E2_BYE", 2, 1, ref l_U520, 6, 1 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    SETTIMERA( 0 );
                    iVar4++;
                }
                break;
                case 2:
                if (TIMERA() > 6500)
                {
                    bVar2 = true;
                }
                break;
            }
        }
    }
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2793(), 0 );
    TASK_CLEAR_LOOK_AT( sub_2793() );
    if (DOES_CHAR_EXIST( l_U481 ))
    {
        DELETE_CHAR( ref l_U481 );
    }
    SET_CAM_ACTIVE( l_U488[0], 0 );
    SET_CAM_PROPAGATE( l_U488[0], 0 );
    SET_CAM_ACTIVE( l_U488[1], 0 );
    SET_CAM_PROPAGATE( l_U488[1], 0 );
    SET_CAM_ACTIVE( l_U491, 0 );
    SET_CAM_PROPAGATE( l_U491, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U492 );
    sub_2495( ref l_U520, 0 );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_2750(), 1 );
    sub_2882();
    SET_CAM_BEHIND_PED( sub_2793() );
    return;
}

int sub_24716()
{
    if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_24947()
{
    return sub_24958( 1, 1 );
}

int sub_24958(boolean bParam0, unknown uParam1)
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

void sub_25981(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_26008( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_26008(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_26066( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_26066(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_26088( iParam1 )))
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
    sub_26768( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_26088(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_22044( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_22044( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_22044( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_26768(int iParam0, int iParam1)
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

void sub_27370()
{
    l_U928 = 0;
    for ( l_U928 = 0; l_U928 < 19; l_U928++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U569[l_U928]._fU0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U569[l_U928]._fU0 )))
            {
                PRINTNL();
                PRINTSTRING( "TELLING COPS TO ATTACK PLAYER" );
                PRINTNL();
                SET_CHAR_RELATIONSHIP( l_U569[l_U928]._fU0, 5, 0 );
                SET_COMBAT_DECISION_MAKER( l_U569[l_U928]._fU0, l_U498 );
                SET_CHAR_KEEP_TASK( l_U569[l_U928]._fU0, 1 );
                TASK_COMBAT( l_U569[l_U928]._fU0, sub_2793() );
                if (NOT l_U517)
                {
                    ALTER_WANTED_LEVEL( sub_2750(), 2 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_2750() );
                    l_U517 = 1;
                }
            }
        }
    }
    return;
}

void sub_27674()
{
    sub_27683();
    return;
}

void sub_27683()
{
    int iVar2;

    iVar2 = 6;
    sub_27697( iVar2 );
    sub_1310( iVar2 );
    return;
}

void sub_27697(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2750(), 150 );
    CLEAR_HELP();
    sub_134( uParam0 );
    return;
}

void sub_27805()
{
    for ( l_U928 = 0; l_U928 < 19; l_U928++ )
    {
        if (DOES_BLIP_EXIST( l_U569[l_U928]._fU40 ))
        {
            REMOVE_BLIP( l_U569[l_U928]._fU40 );
            if (DOES_CHAR_EXIST( l_U569[l_U928]._fU0 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U569[l_U928]._fU0 )))
                {
                    ;
                }
            }
        }
    }
    return;
}

void sub_28040()
{
    if (l_U567 == 0)
    {
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            if ((NOT (IS_CHAR_IN_ANY_CAR( l_U481 ))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2793() ))))
            {
                LOAD_SCENE( 1381.28600000, 182.54600000, 26.51930000 );
                GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U518, ref l_U928 );
                if (l_U928 == -1)
                {
                    REQUEST_MODEL( 2016857647 );
                    while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                    {
                        WAIT( 0 );
                    }
                    l_U518 = 2016857647;
                }
                CREATE_CAR( l_U518, 1381.28600000, 182.54600000, 26.51930000, ref l_U483, 1 );
                SET_CAR_HEADING( l_U483, 92.00000000 );
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    WARP_CHAR_INTO_CAR( sub_2793(), l_U483 );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U481, l_U483, 0 );
                }
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U518 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U483 );
                SET_CAM_BEHIND_PED( sub_2793() );
            }
            else
            {
                LOAD_SCENE( 1381.28600000, 182.54600000, 26.51930000 );
                SET_CHAR_COORDINATES( sub_2793(), 1381.28600000, 182.54600000, 26.51930000 );
                SET_CHAR_HEADING( sub_2793(), 92.00000000 );
            }
        }
    }
    else if (l_U567 == 1)
    {
        sub_28439();
        l_U567 = 2;
    }
    else if (l_U567 == 2)
    {
        if ((l_U568 == 4) || (l_U568 == 5))
        {
            LOAD_SCENE( 1399.12000000, 246.60610000, 26.51670000 );
            l_U928 = 0;
            for ( l_U928 = 0; l_U928 < 19; l_U928++ )
            {
                if (DOES_BLIP_EXIST( l_U569[l_U928]._fU40 ))
                {
                    REMOVE_BLIP( l_U569[l_U928]._fU40 );
                    DELETE_CHAR( ref l_U569[l_U928]._fU0 );
                }
            }
            SET_CHAR_COORDINATES( sub_2793(), 1399.12000000, 246.60610000, 26.51670000 );
            if (NOT (IS_CHAR_DEAD( l_U481 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U481 );
                SET_CHAR_COORDINATES( l_U481, 1399.12000000, 246.00610000, 26.51670000 );
            }
            SET_CAM_BEHIND_PED( sub_2793() );
            g_U9932[2]._fU0 = 1;
            SET_INT_STAT( 363, 2 );
            ADD_BLIP_FOR_COORD( -419.69800000, 1492.14000000, 20.06400000, ref l_U485 );
            SET_ROUTE( l_U485, 1 );
            l_U567 = 3;
        }
        else if ((l_U568 == 3) || ((l_U568 == 2) || ((l_U568 == 1) || (l_U568 == 0))))
        {
            LOAD_SCENE( 1378.42500000, 214.88710000, 48.45930000 );
            l_U928 = 0;
            for ( l_U928 = 0; l_U928 < 19; l_U928++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U569[l_U928]._fU0 )))
                {
                    DELETE_CHAR( ref l_U569[l_U928]._fU0 );
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U481 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U481 );
                SET_CHAR_COORDINATES( l_U481, 1378.42500000, 214.88710000, 47.45930000 );
                SET_CHAR_HEADING( l_U481, 14.00000000 );
                REMOVE_CHAR_DEFENSIVE_AREA( l_U481 );
                FORCE_PED_TO_LOAD_COVER( l_U481, 1 );
            }
            l_U875 = 4;
            sub_32375();
            SET_CHAR_COORDINATES( sub_2793(), 1379.47200000, 212.16460000, 47.45930000 );
            SET_CHAR_HEADING( sub_2793(), 14.00000000 );
            SET_CAM_BEHIND_PED( sub_2793() );
            l_U568 = 4;
        }
    }
    else if (l_U567 == 3)
    {
        LOAD_SCENE( -422.29810000, 1493.79600000, 18.80740000 );
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            if ((NOT (IS_CHAR_IN_ANY_CAR( l_U481 ))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2793() ))))
            {
                GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U518, ref l_U928 );
                if (l_U928 == -1)
                {
                    REQUEST_MODEL( 2016857647 );
                    while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                    {
                        WAIT( 0 );
                    }
                    l_U518 = 2016857647;
                }
                CREATE_CAR( l_U518, -430.29810000, 1493.79600000, 18.80740000, ref l_U483, 1 );
                SET_CAR_HEADING( l_U483, 270.00000000 );
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    WARP_CHAR_INTO_CAR( sub_2793(), l_U483 );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U481, l_U483, 0 );
                }
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U483 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U518 );
                SET_CAM_BEHIND_PED( sub_2793() );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_2793(), -422.29810000, 1496.79600000, 18.80740000 );
                SET_CHAR_HEADING( sub_2793(), 92.00000000 );
            }
        }
    };;;;
    return;
}

void sub_28439()
{
    CLEAR_PRINTS();
    DO_SCREEN_FADE_OUT( 500 );
    WAIT( 500 );
    SET_PLAYER_CONTROL( sub_2750(), 0 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    while (NOT sub_24947())
    {
        WAIT( 0 );
    }
    CLEAR_AREA( 1373, 201, 35.50000000, 10, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 807349477 );
    START_CUTSCENE_NOW( "em_4b" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "em_4b" );
    sub_28655();
    REQUEST_MODEL( -1084007777 );
    REQUEST_MODEL( -1328445565 );
    REQUEST_MODEL( -1004762946 );
    REQUEST_MODEL( 1911513875 );
    LOAD_ALL_OBJECTS_NOW();
    while ((NOT (HAS_MODEL_LOADED( 1911513875 ))) || ((NOT (HAS_MODEL_LOADED( -1004762946 ))) || ((NOT (HAS_MODEL_LOADED( -1328445565 ))) || (NOT (HAS_MODEL_LOADED( -1084007777 ))))))
    {
        WAIT( 0 );
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2793() );
    WAIT( 0 );
    LOAD_SCENE( 1372.39100000, 198.41880000, 34.61330000 );
    SET_CHAR_COORDINATES( sub_2793(), 1372.39100000, 198.41880000, 34.61330000 );
    SET_CHAR_HEADING( sub_2793(), 129.18460000 );
    SET_ROOM_FOR_CHAR_BY_NAME( sub_2793(), "Drugden_Floor3b" );
    sub_31597( 1 );
    ADD_COVER_POINT( 1369.38000000, 195.13000000, 34.68000000, 0, 0, 3, 0, ref l_U500[2] );
    SET_CHAR_COORDINATES( sub_2793(), 1369.28800000, 195.18770000, 34.68360000 );
    TASK_PUT_CHAR_DIRECTLY_INTO_COVER( sub_2793(), 1369.28800000, 195.18770000, 34.68360000, 99999 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -911507684 );
    if (DOES_CHAR_EXIST( l_U482 ))
    {
        DELETE_CHAR( ref l_U482 );
    }
    sub_4961( 1366.47700000, 174.11440000, 26.06430000, 270.50000000, 1376.02000000, 183.85000000, 25.85000000, 10, -1, 0 );
    CREATE_CAR( 1911513875, 1366.57200000, 184.76880000, 26.01700000, ref l_U484, 1 );
    SET_CAR_HEADING( l_U484, 76 );
    SET_CAR_ON_GROUND_PROPERLY( l_U484 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1911513875 );
    g_U9942 = 0;
    SET_MAX_WANTED_LEVEL( 0 );
    if (NOT (IS_CHAR_DEAD( l_U481 )))
    {
        SET_CHAR_COORDINATES( l_U481, 1372.71500000, 197.31080000, 34.64830000 );
        SET_CHAR_HEADING( l_U481, 121.23850000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U481, "Drugden_Floor3b" );
    }
    if (NOT (IS_CHAR_DEAD( l_U481 )))
    {
        sub_32375();
    }
    sub_32525( l_U569[0]._fU48, 0 );
    sub_32525( l_U569[2]._fU48, 2 );
    sub_32525( l_U569[3]._fU48, 3 );
    sub_34007( l_U569[4]._fU48, 4 );
    sub_34007( l_U569[5]._fU48, 5 );
    l_U519 = CREATE_WIDGET_GROUP( "Ucover Cop - Window Guy" );
    ADD_WIDGET_FLOAT_SLIDER( "leanDirection.x", ref l_U526._fU0, -2000.00000000, 2000.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "leanDirection.y", ref l_U526._fU4, -2000.00000000, 2000.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "leanDirection.z", ref l_U526._fU8, -2000.00000000, 2000.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "leanAmount", ref l_U529, 0.00000000, 1.00000000, 0.05000000 );
    ADD_WIDGET_TOGGLE( "leanApplyAsForce", ref l_U534 );
    ADD_WIDGET_FLOAT_SLIDER( "bodyStiffness", ref l_U530, 6.00000000, 16.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "wallDamping", ref l_U531, 0.00000000, 3.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "wallForceMag", ref l_U532, 0.00000000, 2.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "glassSmashForce", ref l_U533, -100.00000000, 100.00000000, 1.00000000 );
    ADD_WIDGET_TOGGLE( "resetWindowGuy", ref l_U535 );
    END_WIDGET_GROUP();
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1084007777 );
    CLEAR_WANTED_LEVEL( sub_2750() );
    SET_WANTED_MULTIPLIER( 0.00000000 );
    SET_PLAYER_CONTROL( sub_2750(), 1 );
    sub_2882();
    DO_SCREEN_FADE_IN_UNHACKED( 100 );
    SET_GAME_CAM_HEADING( 250 );
    sub_34701( "E2_OUT", ref l_U520, 6, 1 );
    SET_PED_IS_BLIND_RAGING( sub_2793(), 1 );
    SETTIMERB( 0 );
    return;
}

void sub_28655()
{
    l_U876[0] = {1373.31400000, 194.59950000, 34.64830000};
    l_U876[1] = {1368.68100000, 203.31280000, 42.67470000};
    l_U876[2] = {1365.39800000, 207.15000000, 46.80130000};
    l_U876[3] = {1371.40300000, 216.21750000, 46.78380000};
    l_U876[4] = {1377.68400000, 238.97600000, 45.40550000};
    l_U876[5] = {1395.11200000, 230.07610000, 41.48100000};
    l_U569[0]._fU8 = {1368.68100000, 203.31280000, 34.68470000};
    l_U569[0]._fU36 = 197.61080000;
    l_U569[0]._fU20 = {1368.68100000, 203.31280000, 35.00000000};
    l_U569[0]._fU32 = 1.50000000;
    l_U569[0]._fU48 = 1;
    l_U569[1]._fU8 = {1365.76800000, 203.00520000, 34.68560000};
    l_U569[1]._fU36 = 290.00000000;
    l_U569[1]._fU20 = {1366.00000000, 203.00000000, 35.50000000};
    l_U569[1]._fU32 = 2.00000000;
    l_U569[1]._fU48 = 1;
    l_U569[1]._fU60 = 1;
    l_U569[2]._fU8 = {1377.08500000, 202.69720000, 34.64830000};
    l_U569[2]._fU36 = 297.29750000;
    l_U569[2]._fU20 = {1379.92500000, 202.19210000, 34.64830000};
    l_U569[2]._fU48 = 1;
    l_U569[3]._fU8 = {1376.86300000, 204.49590000, 34.64830000};
    l_U569[3]._fU36 = 235.10570000;
    l_U569[3]._fU20 = {1376.95900000, 202.57030000, 34.64830000};
    l_U569[3]._fU48 = 1;
    l_U569[3]._fU60 = 1;
    l_U569[4]._fU8 = {1367.30000000, 203.35810000, 38.68080000};
    l_U569[4]._fU36 = 180.00000000;
    l_U569[4]._fU48 = 1;
    l_U569[4]._fU32 = 0.20000000;
    l_U569[5]._fU8 = {1366.59600000, 192.90000000, 38.67680000};
    l_U569[5]._fU36 = 0.00000000;
    l_U569[5]._fU48 = 1;
    l_U569[5]._fU32 = 0.20000000;
    l_U569[6]._fU8 = {1367.27700000, 195.08960000, 42.63900000};
    l_U569[6]._fU36 = 0.00000000;
    l_U569[6]._fU20 = {1367.27700000, 195.08960000, 42.63900000};
    l_U569[6]._fU32 = 1.00000000;
    l_U569[6]._fU48 = 1;
    l_U569[6]._fU60 = 1;
    l_U569[7]._fU8 = {1365.18800000, 197.62780000, 43.42140000};
    l_U569[7]._fU36 = 205.00000000;
    l_U569[7]._fU20 = {1368.58300000, 195.43300000, 42.63890000};
    l_U569[7]._fU32 = 1.00000000;
    l_U569[7]._fU48 = 1;
    l_U569[8]._fU8 = {1372.03900000, 218.64330000, 46.80130000};
    l_U569[8]._fU36 = 175.00000000;
    l_U569[8]._fU48 = 1;
    l_U569[9]._fU8 = {1380.94800000, 221.27780000, 47.79810000};
    l_U569[9]._fU36 = 106.00000000;
    l_U569[9]._fU48 = 1;
    l_U569[10]._fU8 = {1392.85800000, 231.11020000, 41.51650000};
    l_U569[10]._fU36 = 17.13020000;
    l_U569[10]._fU20 = {1387.75700000, 240.90250000, 45.40550000};
    l_U569[10]._fU48 = 1;
    l_U569[10]._fU32 = 1.50000000;
    l_U569[11]._fU8 = {1392.62900000, 235.19590000, 42.75170000};
    l_U569[11]._fU36 = 27.82410000;
    l_U569[11]._fU20 = {1391.52500000, 234.43100000, 45.59800000};
    l_U569[11]._fU48 = 1;
    l_U569[11]._fU60 = 1;
    l_U569[12]._fU8 = {1391.66400000, 233.12230000, 41.48170000};
    l_U569[12]._fU36 = 301.84840000;
    l_U569[12]._fU20 = {1389.00300000, 237.19390000, 45.37060000};
    l_U569[12]._fU48 = 1;
    l_U569[12]._fU32 = 4.00000000;
    l_U569[13]._fU8 = {1396.76800000, 234.10000000, 33.48180000};
    l_U569[13]._fU36 = 328.64840000;
    l_U569[13]._fU20 = {1397.03900000, 240.70760000, 33.51680000};
    l_U569[13]._fU48 = 1;
    l_U569[13]._fU60 = 1;
    l_U569[14]._fU8 = {1399.17000000, 238.25700000, 29.51670000};
    l_U569[14]._fU36 = 202.76050000;
    l_U569[14]._fU20 = {1397.15600000, 232.64600000, 33.51660000};
    l_U569[14]._fU48 = 1;
    l_U569[14]._fU60 = 1;
    l_U569[15]._fU8 = {1399.08200000, 242.01880000, 25.51690000};
    l_U569[15]._fU36 = 180.00000000;
    l_U569[15]._fU20 = {1399.10100000, 238.79290000, 25.51650000};
    l_U569[15]._fU48 = 1;
    l_U569[15]._fU60 = 1;
    l_U569[16]._fU8 = {1399.12500000, 236.18440000, 39.01560000};
    l_U569[16]._fU36 = 194.00000000;
    l_U569[16]._fU20 = {1399.88100000, 230.91250000, 41.75660000};
    l_U569[16]._fU48 = 1;
    l_U569[16]._fU32 = 0.40000000;
    l_U569[16]._fU60 = 1;
    l_U569[17]._fU8 = {1371.20200000, 184.10680000, 25.91500000};
    l_U569[17]._fU36 = 28.06860000;
    l_U569[18]._fU20 = {1371.20200000, 184.10680000, 25.91500000};
    l_U569[17]._fU48 = 1;
    l_U569[17]._fU60 = 0;
    l_U569[18]._fU8 = {1362.56700000, 184.88680000, 26.09850000};
    l_U569[18]._fU36 = 327.70190000;
    l_U569[18]._fU20 = {1362.56700000, 184.88680000, 26.09850000};
    l_U569[18]._fU48 = 1;
    l_U569[18]._fU60 = 0;
    l_U569[0]._fU44 = "Drugden_Floor03";
    l_U569[1]._fU44 = "Drugden_Floor03";
    l_U569[2]._fU44 = "Drugden_Floor3b";
    l_U569[3]._fU44 = "Drugden_Floor3b";
    l_U569[4]._fU44 = "Drugden_Floor04";
    l_U569[5]._fU44 = "Drugden_Floor04";
    l_U569[6]._fU44 = "Drugden_Floor05";
    l_U569[7]._fU44 = "Drugden_Floor05";
    l_U569[8]._fU44 = "";
    l_U569[9]._fU44 = "";
    l_U569[10]._fU44 = "";
    l_U569[11]._fU44 = "";
    l_U569[12]._fU44 = "";
    l_U569[13]._fU44 = "bkn_bshRoom03";
    l_U569[14]._fU44 = "bkn_bshRoom03";
    l_U569[15]._fU44 = "bkn_bshRoom01";
    l_U569[16]._fU44 = "bkn_bshRoom04";
    l_U569[17]._fU44 = "";
    l_U569[18]._fU44 = "";
    ADD_COVER_BLOCKING_AREA( 1364.83100000, 206.46960000, 0.00000000, 1367.83300000, 209.00000000, 100.00000000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( 1365.10300000, 190.35510000, 0.00000000, 1367.61200000, 193.02220000, 100.00000000, 1, 1, 1 );
    ADD_COVER_BLOCKING_AREA( 1398.50000000, 229.93000000, 0.00000000, 1399.74000000, 230.44000000, 100.00000000, 1, 1, 1 );
    ADD_COVER_POINT( 1368.68100000, 203.31280000, 42.67470000, 0, 180.00000000, 3, 0, ref l_U500[0] );
    ADD_COVER_POINT( 1368.68100000, 203.31280000, 38.67850000, 0, 180.00000000, 3, 0, ref l_U500[1] );
    ADD_COVER_POINT( 1368.68100000, 203.31280000, 34.68470000, 0, 180.00000000, 3, 0, ref l_U500[5] );
    ADD_COVER_POINT( 1366.20400000, 203.05860000, 34.71204000, 1, 180.00000000, 0, 0, ref l_U500[3] );
    ADD_COVER_POINT( 1366.52100000, 207.07400000, 46.80100000, 3, 0.00000000, 0, 0, ref l_U500[6] );
    ADD_COVER_POINT( 1398.10000000, 232.15530000, 29.51650000, 1, 0.00000000, 0, 0, ref l_U500[4] );
    return;
}

void sub_31597(unknown uParam0)
{
    GET_AMMO_IN_CHAR_WEAPON( sub_2793(), 15, ref l_U928 );
    if (l_U928 > 0)
    {
        SET_CURRENT_CHAR_WEAPON( sub_2793(), 15, uParam0 );
    }
    else
    {
        GET_AMMO_IN_CHAR_WEAPON( sub_2793(), 14, ref l_U928 );
        if (l_U928 > 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_2793(), 14, uParam0 );
        }
        else
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_2793(), 13, ref l_U928 );
            if (l_U928 > 0)
            {
                SET_CURRENT_CHAR_WEAPON( sub_2793(), 13, uParam0 );
            }
            else
            {
                GET_AMMO_IN_CHAR_WEAPON( sub_2793(), 12, ref l_U928 );
                if (l_U928 > 0)
                {
                    SET_CURRENT_CHAR_WEAPON( sub_2793(), 12, uParam0 );
                }
                else
                {
                    GET_AMMO_IN_CHAR_WEAPON( sub_2793(), 10, ref l_U928 );
                    if (l_U928 > 0)
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_2793(), 10, uParam0 );
                    }
                    else
                    {
                        GET_AMMO_IN_CHAR_WEAPON( sub_2793(), 11, ref l_U928 );
                        if (l_U928 > 0)
                        {
                            SET_CURRENT_CHAR_WEAPON( sub_2793(), 11, uParam0 );
                        }
                        else
                        {
                            GET_AMMO_IN_CHAR_WEAPON( sub_2793(), 9, ref l_U928 );
                            if (l_U928 > 0)
                            {
                                SET_CURRENT_CHAR_WEAPON( sub_2793(), 9, uParam0 );
                            }
                            else
                            {
                                GET_AMMO_IN_CHAR_WEAPON( sub_2793(), 7, ref l_U928 );
                                if (l_U928 > 0)
                                {
                                    SET_CURRENT_CHAR_WEAPON( sub_2793(), 7, uParam0 );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_32375()
{
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U481 );
    REMOVE_CHAR_DEFENSIVE_AREA( l_U481 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U481, l_U876[l_U875]._fU0, l_U876[l_U875]._fU4, l_U876[l_U875]._fU8, 3, 40000, 0.40000000 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U481, 1 );
    l_U895 = 1;
    l_U875++;
    return;
}

void sub_32525(unknown uParam0, int iParam1)
{
    sub_32538( uParam0, iParam1 );
    if (l_U569[iParam1]._fU32 == 0.00000000)
    {
        l_U569[iParam1]._fU32 = 1.00000000;
    }
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U569[iParam1]._fU0, l_U569[iParam1]._fU20, l_U569[iParam1]._fU32 );
    l_U569[iParam1]._fU52 = 1;
    OPEN_SEQUENCE_TASK( ref l_U927 );
    TASK_GO_TO_COORD_WHILE_AIMING( 0, l_U569[iParam1]._fU20._fU0, l_U569[iParam1]._fU20._fU4, l_U569[iParam1]._fU20._fU8, 4, 0.50000000, 2, sub_2793(), 0, 0, 0, 1 );
    if (iParam1 != 6)
    {
        if (iParam1 != 10)
        {
            if (iParam1 != 11)
            {
                if (iParam1 != 15)
                {
                    if (iParam1 != 16)
                    {
                        if (iParam1 != 17)
                        {
                            if (iParam1 != 18)
                            {
                                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, l_U569[iParam1]._fU20, -1 );
                            }
                        }
                    }
                }
            }
        }
    }
    TASK_COMBAT( 0, sub_2793() );
    CLOSE_SEQUENCE_TASK( l_U927 );
    TASK_PERFORM_SEQUENCE( l_U569[iParam1]._fU0, l_U927 );
    CLEAR_SEQUENCE_TASK( l_U927 );
    return;
}

void sub_32538(boolean bParam0, int iParam1)
{
    if (iParam1 == 2)
    {
        CREATE_CHAR( 6, -1328445565, l_U569[iParam1]._fU8._fU0, l_U569[iParam1]._fU8._fU4, l_U569[iParam1]._fU8._fU8, ref l_U569[iParam1]._fU0, 1 );
        SET_CHAR_DECISION_MAKER( l_U569[iParam1]._fU0, l_U494 );
        SET_COMBAT_DECISION_MAKER( l_U569[iParam1]._fU0, l_U496 );
        SET_CHAR_ACCURACY( l_U569[iParam1]._fU0, 15 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1328445565 );
    }
    else if (iParam1 == 3)
    {
        CREATE_CHAR( 6, -1084007777, l_U569[iParam1]._fU8._fU0, l_U569[iParam1]._fU8._fU4, l_U569[iParam1]._fU8._fU8, ref l_U569[iParam1]._fU0, 1 );
        SET_CHAR_DECISION_MAKER( l_U569[iParam1]._fU0, l_U494 );
        SET_COMBAT_DECISION_MAKER( l_U569[iParam1]._fU0, l_U496 );
        SET_CHAR_ACCURACY( l_U569[iParam1]._fU0, 15 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1084007777 );
    }
    else
    {
        CREATE_CHAR( 6, -1004762946, l_U569[iParam1]._fU8._fU0, l_U569[iParam1]._fU8._fU4, l_U569[iParam1]._fU8._fU8, ref l_U569[iParam1]._fU0, 1 );
        SET_CHAR_DECISION_MAKER( l_U569[iParam1]._fU0, l_U494 );
        if ((iParam1 == 18) || (iParam1 == 17))
        {
            SET_COMBAT_DECISION_MAKER( l_U569[iParam1]._fU0, l_U498 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U569[iParam1]._fU0, l_U496 );
        }
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U569[iParam1]._fU0 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U928 );
        SET_CHAR_PROP_INDEX( l_U569[iParam1]._fU0, 0, l_U928 );
        SET_CHAR_ACCURACY( l_U569[iParam1]._fU0, 63 );
    }
    SET_CHAR_HEADING( l_U569[iParam1]._fU0, l_U569[iParam1]._fU36 );
    if (NOT (COMPARE_STRING( l_U569[iParam1]._fU44, "" )))
    {
        SET_ROOM_FOR_CHAR_BY_NAME( l_U569[iParam1]._fU0, l_U569[iParam1]._fU44 );
    }
    if (NOT l_U569[iParam1]._fU60)
    {
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U569[iParam1]._fU0, 1 );
    }
    ADD_ARMOUR_TO_CHAR( l_U569[iParam1]._fU0, 65486 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U569[iParam1]._fU0, 23 );
    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U569[iParam1]._fU0, 0 );
    REMOVE_ALL_CHAR_WEAPONS( l_U569[iParam1]._fU0 );
    if ((iParam1 == 3) || (iParam1 == 2))
    {
        GIVE_WEAPON_TO_CHAR( l_U569[iParam1]._fU0, 7, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U569[iParam1]._fU0, 7, 0 );
    }
    else
    {
        GIVE_WEAPON_TO_CHAR( l_U569[iParam1]._fU0, 13, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U569[iParam1]._fU0, 13, 0 );
    }
    if (iParam1 == 4)
    {
        TASK_TOGGLE_DUCK( l_U569[iParam1]._fU0, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U569[iParam1]._fU0, 1 );
    }
    if (iParam1 == 16)
    {
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U569[iParam1]._fU0, 1 );
    }
    if (bParam0)
    {
        ADD_BLIP_FOR_CHAR( l_U569[iParam1]._fU0, ref l_U569[iParam1]._fU40 );
        if ((iParam1 < 16) AND (iParam1 > 12))
        {
            CHANGE_BLIP_SPRITE( l_U569[iParam1]._fU40, 1 );
            CHANGE_BLIP_DISPLAY( l_U569[iParam1]._fU40, 2 );
            CHANGE_BLIP_SCALE( l_U569[iParam1]._fU40, 0.60000000 );
            FLASH_BLIP( l_U569[iParam1]._fU40, 0 );
        }
    }
    l_U569[iParam1]._fU56 = 1;
    return;
}

void sub_34007(unknown uParam0, unknown uParam1)
{
    sub_32538( uParam0, uParam1 );
    if (l_U569[uParam1]._fU32 == 0.00000000)
    {
        l_U569[uParam1]._fU32 = 1.00000000;
    }
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U569[uParam1]._fU0, l_U569[uParam1]._fU8, l_U569[uParam1]._fU32 );
    l_U569[uParam1]._fU52 = 1;
    return;
}

void sub_34701(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_34724( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_34724(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_26066( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_35875()
{
    l_U928 = 0;
    for ( l_U928 = 0; l_U928 < 19; l_U928++ )
    {
        if (DOES_BLIP_EXIST( l_U569[l_U928]._fU40 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U569[l_U928]._fU0 )))
            {
                EXPLODE_CHAR_HEAD( l_U569[l_U928]._fU0 );
            }
        }
    }
    return;
}

int sub_36213(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (IS_GROUP_MEMBER( uParam2, sub_8601() ))
    {
        if (sub_36248( uParam2, sub_2793() ))
        {
            if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
            {
                if (DOES_BLIP_EXIST( (uParam0^) ))
                {
                    REMOVE_BLIP( (uParam0^) );
                }
                if ((uParam1^) == nil)
                {
                    PRINT_NOW( uParam6, 7500, 1 );
                    PRINTSTRING( "Go to your vDestination. (DO_BLIPS_PED)\n" );
                }
                else
                {
                    PRINT_NOW( uParam8, 7500, 1 );
                    PRINTSTRING( "Keep going to your vDestination. (DO_BLIPS_PED)\n" );
                }
                (uParam1^) = sub_36533( uParam3 );
            }
            return 1;
        }
        return 1;
    }
    else if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        REMOVE_BLIP( (uParam1^) );
    }
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        ADD_BLIP_FOR_CHAR( uParam2, uParam0 );
        SET_BLIP_AS_FRIENDLY( (uParam0^), 1 );
        PRINT_NOW( uParam7, 7500, 1 );
        PRINTSTRING( "Left your buddy behind. (DO_BLIPS_PED)\n" );
    }
    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2793(), uParam2, 20.00000000, 20.00000000, 0 ))
    {
        SET_GROUP_MEMBER( sub_8601(), uParam2 );
    }
    return 0;
}

int sub_36248(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar4 );
        if (IS_CHAR_SITTING_IN_CAR( uParam0, uVar4 ))
        {
            return 1;
        }
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
    {
        return 1;
    }
    return 0;
}

void sub_36533(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;

    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result );
    SET_ROUTE( Result, 1 );
    return Result;
}

void sub_36805(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

int sub_36911(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2793() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2793(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2793() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2793(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2793()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2793() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2793() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2750() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2750() )))
    {
        return 0;
    }
    return 1;
}

int sub_37228(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_37347()
{
    boolean bVar2;
    boolean bVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    while ((NOT bVar3) AND (NOT bVar2))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar7 );
        if (iVar5 != 0)
        {
            iVar8 = iVar7 - iVar6;
        }
        if ((iVar5 > 1) AND ((IS_SCREEN_FADED_IN()) AND ((sub_24716()) AND (iVar8 >= 1000))))
        {
            bVar3 = true;
        }
        else
        {
            switch (iVar5)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_2750(), 0 );
                while (NOT sub_24947())
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                BEGIN_CAM_COMMANDS( ref l_U492 );
                CREATE_CAM( 14, ref l_U488[0] );
                SET_CAM_POS( l_U488[0], 1366.43700000, 179.15830000, 27.58348000 );
                SET_CAM_ROT( l_U488[0], 0.84355800, 0.00000000, -2.01004800 );
                SET_CAM_FOV( l_U488[0], 50.00000000 );
                CREATE_CAM( 14, ref l_U488[1] );
                SET_CAM_POS( l_U488[1], 1366.43700000, 179.15830000, 27.58348000 );
                SET_CAM_ROT( l_U488[1], 25.67246000, 0.00000000, -2.01004700 );
                SET_CAM_FOV( l_U488[1], 65.00000000 );
                CREATE_CAM( 3, ref l_U491 );
                SET_CAM_ACTIVE( l_U488[0], 1 );
                SET_CAM_PROPAGATE( l_U488[0], 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                GET_CAR_CHAR_IS_USING( sub_2793(), ref uVar4 );
                SET_CAR_AS_MISSION_CAR( uVar4 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1367.30000000, 191.80000000, 27.90000000, 0, 0.00000000 );
                GET_GAME_TIMER( ref iVar6 );
                SETTIMERA( 0 );
                iVar5++;
                break;
                case 1:
                if (NOT (IS_CAR_DEAD( uVar4 )))
                {
                    GET_CAR_SPEED( uVar4, ref l_U926 );
                    if (l_U926 < 2.00000000)
                    {
                        if (NOT (IS_CHAR_DEAD( l_U481 )))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U481 );
                            OPEN_SEQUENCE_TASK( ref l_U927 );
                            TASK_PAUSE( 0, 700 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1366.15000000, 196.00000000, 27.70000000, 2, 80000, 0.40000000 );
                            CLOSE_SEQUENCE_TASK( l_U927 );
                            TASK_PERFORM_SEQUENCE( l_U481, l_U927 );
                            CLEAR_SEQUENCE_TASK( l_U927 );
                            OPEN_SEQUENCE_TASK( ref l_U927 );
                            TASK_PAUSE( 0, 1700 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1366.15000000, 196.00000000, 27.70000000, 2, 20000, 0.40000000 );
                            CLOSE_SEQUENCE_TASK( l_U927 );
                            TASK_PERFORM_SEQUENCE( sub_2793(), l_U927 );
                            CLEAR_SEQUENCE_TASK( l_U927 );
                        }
                        SETTIMERA( 0 );
                        iVar5++;
                    }
                }
                break;
                case 2:
                if (TIMERA() > 2000)
                {
                    sub_34701( "E2_ARR", ref l_U520, 6, 1 );
                    SET_CAM_ACTIVE( l_U488[1], 1 );
                    SET_CAM_PROPAGATE( l_U488[1], 1 );
                    SET_CAM_ACTIVE( l_U491, 1 );
                    SET_CAM_PROPAGATE( l_U491, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U491, l_U488[0], l_U488[1], 5000, 0 );
                    SETTIMERA( 0 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    iVar5++;
                }
                break;
                case 3:
                if (TIMERA() > 5000)
                {
                    bVar2 = true;
                }
                break;
            }
        }
    }
    GET_INTERIOR_FROM_CHAR( sub_2793(), ref iVar9 );
    if ((iVar9 == nil) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2793() ))))
    {
        sub_38425( sub_2793(), 1366.60000000, 191.73000000, 27.93000000 );
    }
    if ((NOT (IS_CHAR_DEAD( l_U481 ))) AND (NOT (DOES_BLIP_EXIST( l_U486 ))))
    {
        ADD_BLIP_FOR_CHAR( l_U481, ref l_U486 );
        SET_BLIP_AS_FRIENDLY( l_U486, 1 );
    }
    SET_CAM_ACTIVE( l_U488[0], 0 );
    SET_CAM_PROPAGATE( l_U488[0], 0 );
    SET_CAM_ACTIVE( l_U488[1], 0 );
    SET_CAM_PROPAGATE( l_U488[1], 0 );
    SET_CAM_ACTIVE( l_U491, 0 );
    SET_CAM_PROPAGATE( l_U491, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U492 );
    sub_2495( ref l_U520, 0 );
    if (IS_CHAR_IN_ANY_CAR( sub_2793() ))
    {
        TASK_LEAVE_ANY_CAR( sub_2793() );
    }
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_2750(), 1 );
    sub_2882();
    PRINT( "UC_MISSION5", 7500, 1 );
    CLEAR_CHAR_TASKS( sub_2793() );
    sub_38833( 1366.60000000, 191.73000000, 27.93000000 );
    return;
}

void sub_38425(unknown uParam0, vector vParam1)
{
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;

    GET_CHAR_COORDINATES( uParam0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
    vVar12 = {vVar6 - vParam1};
    uVar15 = VMAG( vVar12 );
    uVar9 = {vVar12 / uVar15};
    GET_HEADING_FROM_VECTOR_2D( uVar9._fU0, uVar9._fU4, ref uVar16 );
    SET_CHAR_HEADING( sub_2793(), uVar16 - 180 );
    return;
}

void sub_38833(vector vParam0)
{
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    vector vVar11;
    unknown uVar14;
    unknown uVar15;

    GET_CHAR_COORDINATES( sub_2793(), ref vVar5.x, ref vVar5.y, ref vVar5.z );
    vVar11 = {vVar5 - vParam0};
    uVar14 = VMAG( vVar11 );
    uVar8 = {vVar11 / uVar14};
    GET_HEADING_FROM_VECTOR_2D( uVar8._fU0, uVar8._fU4, ref uVar15 );
    SET_GAME_CAM_HEADING( uVar15 - 180 );
    return;
}

void sub_39434(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (sub_37228( sub_2793(), uParam0 ))
    {
        if (NOT l_U509)
        {
            if (NOT l_U511)
            {
                GET_GAME_TIMER( ref l_U513 );
                l_U511 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U928 );
                l_U928 -= l_U513;
                if (l_U928 > 2000)
                {
                    if (g_U64645[uParam3] == 0)
                    {
                        l_U512 = uParam1;
                        g_U64645[uParam3]++;
                    }
                    else if (g_U64645[uParam3] == 1)
                    {
                        l_U512 = uParam2;
                        g_U64645[uParam3]++;
                    }
                    else if (g_U64645[uParam3] > 1)
                    {
                        SAY_AMBIENT_SPEECH( uParam0, "LISTEN_TO_RADIO", 0, 0, 0 );
                        g_U64645[uParam3] = 3;
                        l_U509 = 1;
                    };;;
                    if (g_U64645[uParam3] < 3)
                    {
                        if (sub_34701( l_U512, ref l_U520, 6, 1 ))
                        {
                            l_U509 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U510)
        {
            if (NOT l_U511)
            {
                GET_GAME_TIMER( ref l_U513 );
                l_U511 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U928 );
                l_U928 -= l_U513;
                if (l_U928 > 2000)
                {
                    sub_39864( l_U512, ref l_U520, 6, 1 );
                    l_U510 = 0;
                    l_U511 = 0;
                }
            }
        }
    }
    else if ((g_U64645[uParam3] > 0) AND ((g_U64645[uParam3] != 3) AND (sub_40000( l_U520 ))))
    {
        sub_40199( ref l_U520 );
        l_U510 = 1;
        l_U511 = 0;
    }
    return;
}

void sub_39864(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_39887( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_39887(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_26066( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_40000(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_22044( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_22044( "\n speech is not playing" );
    }
    return 0;
}

int sub_40199(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_22044( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_22044( "\n CONVERSATION PAUSED AT LINE " );
            sub_40355( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_22044( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_22044( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_22044( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_40355(unknown uParam0)
{
    return;
}

void sub_40789()
{
    if (DOES_CHAR_EXIST( l_U482 ))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U482, sub_2793(), 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U482 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U482, 0 );
                SET_CHAR_HEALTH( l_U482, 40 );
            }
            sub_24416( 3 );
        }
    }
    return;
}

int sub_40927()
{
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_40000( l_U520 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_41461()
{
    l_U928 = 0;
    for ( l_U928 = 0; l_U928 < 19; l_U928++ )
    {
        if (DOES_BLIP_EXIST( l_U569[l_U928]._fU40 ))
        {
            if (IS_CHAR_INJURED( l_U569[l_U928]._fU0 ))
            {
                REMOVE_BLIP( l_U569[l_U928]._fU40 );
            }
            else if ((l_U569[l_U928]._fU52) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U569[l_U928]._fU0, sub_2793(), 0 )))
            {
                l_U569[l_U928]._fU52 = 0;
            }
        }
    }
    return;
}

void sub_41728(int iParam0)
{
    if ((l_U895) AND (LOCATE_CHAR_ON_FOOT_3D( l_U481, l_U876[l_U875 - 1]._fU0, l_U876[l_U875 - 1]._fU4, l_U876[l_U875 - 1]._fU8, 1.00000000, 1.00000000, 1.50000000, 0 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U481, 0 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U481, l_U876[l_U875 - 1], 1.50000000 );
        TASK_GUARD_SPHERE_DEFENSIVE_AREA( l_U481, l_U876[l_U875 - 1], 24.00000000, 1.00000000, -1, l_U876[l_U875 - 1], 1.70000000 );
        if (iParam0 > -1)
        {
            if ((NOT (IS_CHAR_INJURED( l_U569[iParam0]._fU0 ))) AND (DOES_CHAR_EXIST( l_U569[iParam0]._fU0 )))
            {
                TASK_COMBAT( l_U481, l_U569[iParam0]._fU0 );
            }
        }
        if (l_U568 == 1)
        {
            if (NOT l_U569[6]._fU56)
            {
                sub_2495( ref l_U520, 0 );
                sub_34701( "E2_FOLL", ref l_U520, 6, 1 );
            }
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U481, 1368.87000000, 203.10000000, 43.65000000, 999999 );
        }
        else if (l_U568 == 4)
        {
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U481, 1377.93000000, 239.01000000, 46.42000000, 999999 );
            if (NOT l_U569[10]._fU56)
            {
                sub_32525( l_U569[10]._fU48, 10 );
                sub_32525( l_U569[11]._fU48, 11 );
                sub_2495( ref l_U520, 0 );
                sub_34701( "E2_FOLL", ref l_U520, 6, 1 );
            }
        }
        else if (l_U568 == 2)
        {
            sub_2495( ref l_U520, 0 );
            sub_34701( "E2_KNOOSE", ref l_U520, 6, 1 );
        };;;
        l_U895 = 0;
    }
    return;
}

void sub_42296()
{
    if (NOT (IS_CHAR_DEAD( l_U481 )))
    {
        GET_CHAR_COORDINATES( l_U481, ref l_U923._fU0, ref l_U923._fU4, ref l_U923._fU8 );
        l_U923._fU8 += 1.00000000;
        if (l_U568 == 0)
        {
            GET_CHAR_COORDINATES( sub_2793(), ref l_U923._fU0, ref l_U923._fU4, ref l_U923._fU8 );
            if ((NOT (IS_CHAR_ON_SCREEN( l_U481 ))) AND ((l_U923._fU4 > 200.00000000) AND ((l_U923._fU8 < 31.70000000) || (l_U923._fU8 > 46.10000000))))
            {
                sub_27805();
                if (DOES_BLIP_EXIST( l_U486 ))
                {
                    REMOVE_BLIP( l_U486 );
                }
                if (DOES_CHAR_EXIST( l_U481 ))
                {
                    DELETE_CHAR( ref l_U481 );
                }
                if (DOES_BLIP_EXIST( l_U485 ))
                {
                    REMOVE_BLIP( l_U485 );
                }
                sub_24416( 0 );
            }
            else if ((l_U923._fU8 < 35.00000000) || (l_U923._fU8 > 43.60000000))
            {
                if (NOT l_U561)
                {
                    sub_34701( "E2_LEFT", ref l_U520, 4, 1 );
                    l_U561 = 1;
                }
                sub_42666( "UC_MISSION10", 1000 );
            }
        }
        else if ((l_U568 == 5) || ((l_U568 == 4) || ((l_U568 == 3) || ((l_U568 == 2) || (l_U568 == 1)))))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2793(), l_U923._fU0, l_U923._fU4, l_U923._fU8, 50.00000000, 50.00000000, 9.00000000, 0 )))
            {
                sub_27805();
                if (DOES_BLIP_EXIST( l_U486 ))
                {
                    REMOVE_BLIP( l_U486 );
                }
                if (DOES_CHAR_EXIST( l_U481 ))
                {
                    DELETE_CHAR( ref l_U481 );
                }
                if (DOES_BLIP_EXIST( l_U485 ))
                {
                    REMOVE_BLIP( l_U485 );
                }
                sub_24416( 0 );
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2793(), l_U923._fU0, l_U923._fU4, l_U923._fU8, 40.00000000, 40.00000000, 7.00000000, 0 )))
            {
                sub_42666( "UC_MISSION10", 1500 );
            }
        }
    }
    return;
}

void sub_42666(unknown uParam0, unknown uParam1)
{
    CLEAR_SMALL_PRINTS();
    PRINT( uParam0, uParam1, 1 );
    return;
}

void sub_43009(unknown uParam0, float fParam1)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref l_U923._fU0, ref l_U923._fU4, ref l_U923._fU8 );
        if (l_U923._fU8 < fParam1)
        {
            SET_CHAR_HEALTH( uParam0, 45 );
        }
    }
    return;
}

void sub_44372(int iParam0)
{
    if (iParam0 <= 19)
    {
        l_U928 = 0;
        for ( l_U928 = 0; l_U928 < iParam0; l_U928++ )
        {
            if (DOES_BLIP_EXIST( l_U569[l_U928]._fU40 ))
            {
                REMOVE_BLIP( l_U569[l_U928]._fU40 );
            }
        }
    }
    return;
}

void sub_44492(int iParam0)
{
    for ( l_U928 = 0; l_U928 < iParam0; l_U928++ )
    {
        if (DOES_CHAR_EXIST( l_U569[l_U928]._fU0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U569[l_U928]._fU0 )))
            {
                DELETE_CHAR( ref l_U569[l_U928]._fU0 );
            }
        }
    }
    return;
}

void sub_46315()
{
    if (NOT l_U937)
    {
        if (NOT l_U938)
        {
            GET_CURRENT_BASIC_COP_MODEL( ref l_U932 );
            if ((HAS_MODEL_LOADED( l_U932 )) AND ((HAS_MODEL_LOADED( 2046537925 )) AND ((HAS_MODEL_LOADED( 970598228 )) AND (HAS_MODEL_LOADED( -909201658 )))))
            {
                CLEAR_AREA( 1402.19600000, 263.84930000, 25.34470000, 3.00000000, 1 );
                CREATE_CAR( 970598228, 1402.19600000, 263.84930000, 25.34470000, ref l_U933, 1 );
                SET_CAR_HEADING( l_U933, 93.52450000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U933 );
                SET_CAR_STRONG( l_U933, 1 );
                CLEAR_AREA( 1382.36600000, 250.16360000, 27.41980000, 3.00000000, 1 );
                CREATE_CAR( -909201658, 1386.69500000, 250.41620000, 27.81150000, ref l_U934, 1 );
                SET_CAR_HEADING( l_U934, 272.94620000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U934 );
                SET_CAR_STRONG( l_U934, 1 );
                CLEAR_AREA( 1415.84600000, 219.33100000, 25.27130000, 3.00000000, 1 );
                CREATE_CAR( 2046537925, 1415.84600000, 219.33100000, 25.27130000, ref l_U935, 1 );
                SET_CAR_HEADING( l_U935, 359.50000000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U935 );
                CREATE_CHAR_INSIDE_CAR( l_U935, 6, l_U932, ref l_U936 );
                SET_CAR_ENGINE_ON( l_U935, 1, 0 );
                SWITCH_CAR_SIREN( l_U935, 1 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -909201658 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 2046537925 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 970598228 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U932 );
                l_U938 = 1;
            }
            else
            {
                REQUEST_MODEL( l_U932 );
                REQUEST_MODEL( 2046537925 );
                REQUEST_MODEL( -909201658 );
                REQUEST_MODEL( 970598228 );
            }
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2793(), 1386.69500000, 250.41620000, 200.00000000, 200.00000000, 0 )))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U933 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U934 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U935 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U936 );
            l_U937 = 1;
        }
    }
    return;
}

void sub_46967()
{
    if (NOT l_U931)
    {
        if ((TIMERA() > 120000) || ((NOT (IS_CHAR_IN_AREA_2D( sub_2793(), 1373.70000000, 227.20000000, 1400.80000000, 245.50000000, 0 ))) AND (NOT (IS_CHAR_IN_AREA_2D( sub_2793(), 1364.05000000, 191.40000000, 1382.50000000, 222.20000000, 0 )))))
        {
            PRINTNL();
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "***************** hreset max wanted level" );
            PRINTNL();
            PRINTNL();
            PRINTNL();
            g_U9942 = 1;
            SET_FAKE_WANTED_LEVEL( 0 );
            SET_MAX_WANTED_LEVEL( 6 );
            SET_WANTED_MULTIPLIER( 0.20000000 );
            ALTER_WANTED_LEVEL( sub_2750(), 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_2750() );
            l_U931 = 1;
        }
    }
    return;
}

void sub_48069()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    while ((NOT bVar3) AND (NOT bVar2))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar7 );
        if (iVar4 != 0)
        {
            iVar8 = iVar7 - iVar6;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_24716()) AND (iVar8 >= 1000)))
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            DO_SCREEN_FADE_IN( 500 );
            bVar3 = true;
        }
        else
        {
            switch (iVar4)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_2750(), 0 );
                CLEAR_CHAR_TASKS( sub_2793() );
                while (NOT sub_24947())
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    BEGIN_CAM_COMMANDS( ref l_U492 );
                    CREATE_CAM( 14, ref l_U488[0] );
                    CREATE_CAM( 14, ref l_U488[1] );
                    CREATE_CAM( 3, ref l_U491 );
                    if ((IS_CHAR_IN_ANY_CAR( l_U481 )) AND (IS_CHAR_IN_ANY_CAR( sub_2793() )))
                    {
                        SET_CAM_POS( l_U488[0], -415.26870000, 1498.29700000, 19.68822000 );
                        SET_CAM_ROT( l_U488[0], -3.11422400, 0.00000000, 140.65510000 );
                        SET_CAM_FOV( l_U488[0], 43.00000000 );
                        SET_CAM_POS( l_U488[1], -415.26870000, 1498.29700000, 19.68822000 );
                        SET_CAM_ROT( l_U488[1], -3.11422400, 0.00000000, 140.65510000 );
                        SET_CAM_FOV( l_U488[1], 35.00000000 );
                    }
                    else
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        CLEAR_AREA( -422.00000000, 1488.80000000, 17.79360000, 2.00000000, 1 );
                        if (NOT (IS_CHAR_DEAD( l_U481 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2793() );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U481 );
                            SET_CHAR_COORDINATES( l_U481, -421.60000000, 1488.44000000, 17.79360000 );
                            SET_CHAR_HEADING( l_U481, 97 );
                        }
                        SET_CHAR_COORDINATES( sub_2793(), -422.60000000, 1488.69000000, 17.82440000 );
                        SET_CHAR_HEADING( sub_2793(), 277 );
                        SET_CAM_POS( l_U488[0], -420.96120000, 1490.48700000, 19.30654000 );
                        SET_CAM_ROT( l_U488[0], 1.41169300, -0.00000000, 152.20340000 );
                        SET_CAM_FOV( l_U488[0], 40 );
                        SET_CAM_POS( l_U488[1], -420.96120000, 1490.48700000, 19.30654000 );
                        SET_CAM_ROT( l_U488[1], 1.41169300, -0.00000000, 152.20340000 );
                        SET_CAM_FOV( l_U488[1], 36 );
                        DO_SCREEN_FADE_IN( 500 );
                    }
                    SET_CAM_ACTIVE( l_U488[0], 1 );
                    SET_CAM_PROPAGATE( l_U488[0], 1 );
                    SET_CAM_ACTIVE( l_U488[1], 1 );
                    SET_CAM_PROPAGATE( l_U488[1], 1 );
                    SET_CAM_ACTIVE( l_U491, 1 );
                    SET_CAM_PROPAGATE( l_U491, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U491, l_U488[0], l_U488[1], 9000, 0 );
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2793(), 1 );
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U481, 1 );
                    TASK_LOOK_AT_CHAR( sub_2793(), l_U481, -1, 0 );
                }
                GET_GAME_TIMER( ref iVar6 );
                SETTIMERA( 0 );
                iVar4++;
                break;
                case 1:
                if (TIMERA() > 1000)
                {
                    if (NOT (IS_CHAR_DEAD( l_U481 )))
                    {
                        REMOVE_ALL_CHAR_WEAPONS( l_U481 );
                        OPEN_SEQUENCE_TASK( ref l_U927 );
                        TASK_PAUSE( 0, 1500 );
                        if (NOT (IS_CAR_DEAD( uVar5 )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U481 ))
                            {
                                TASK_LEAVE_ANY_CAR( 0 );
                            }
                        }
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -424.60000000, 1485.00000000, 18.51000000, 2, 20000, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( l_U927 );
                        TASK_PERFORM_SEQUENCE( l_U481, l_U927 );
                        CLEAR_SEQUENCE_TASK( l_U927 );
                    }
                    sub_34701( "E2_DONE", ref l_U520, 6, 1 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    SETTIMERA( 0 );
                    iVar4++;
                }
                break;
                case 2:
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    if ((TIMERA() > 12000) || (LOCATE_CHAR_ANY_MEANS_3D( l_U481, -424.60000000, 1484.50000000, 18.51000000, 1.50000000, 1.50000000, 1.50000000, 0 )))
                    {
                        bVar2 = true;
                    }
                }
                else
                {
                    bVar2 = true;
                }
                break;
            }
        }
    }
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2793(), 0 );
    TASK_CLEAR_LOOK_AT( sub_2793() );
    if (DOES_CHAR_EXIST( l_U481 ))
    {
        DELETE_CHAR( ref l_U481 );
    }
    SET_CAM_ACTIVE( l_U488[0], 0 );
    SET_CAM_PROPAGATE( l_U488[0], 0 );
    SET_CAM_ACTIVE( l_U488[1], 0 );
    SET_CAM_PROPAGATE( l_U488[1], 0 );
    SET_CAM_ACTIVE( l_U491, 0 );
    SET_CAM_PROPAGATE( l_U491, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U492 );
    sub_2495( ref l_U520, 0 );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_2750(), 1 );
    sub_2882();
    SET_CAM_BEHIND_PED( sub_2793() );
    return;
}

