void main()
{
    int iVar2;

    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U642 = 0;
    l_U652 = 0;
    l_U653 = 0;
    l_U654 = 0;
    l_U655 = 0;
    l_U628 = sub_108( l_U642 );
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_228();
        sub_3363();
    }
    HAS_RESPRAY_HAPPENED();
    LOAD_ADDITIONAL_TEXT( "F1M7P", 0 );
    sub_3737( "Rp8AUD", 6 );
    sub_3885( l_U642 );
    l_U626 = sub_3961( l_U642, 0, l_U628 );
    l_U627 = sub_3961( l_U642, 1, l_U628 );
    switch (l_U626)
    {
        case 0:
        l_U629 = 76551508;
        l_U630 = -2075907982;
        StrCopy( ref l_U494, "r7p_21", 16 );
        l_U481 = {883.81650000, -477.61020000, 14.08780000};
        g_U64764 = {880.71860000, -472.62620000, 16.44600000};
        l_U487 = 57.07720000;
        break;
        case 1:
        l_U629 = -1283406538;
        l_U630 = -1360999125;
        StrCopy( ref l_U494, "r7p_23", 16 );
        l_U481 = {1083.17900000, -547.84360000, 13.42770000};
        g_U64764 = {1086.93200000, -547.70200000, 15.00800000};
        l_U487 = 287.17340000;
        break;
        case 2:
        l_U629 = 221246143;
        l_U630 = -268530289;
        StrCopy( ref l_U494, "r7p_25", 16 );
        l_U481 = {987.91530000, -276.53590000, 21.76740000};
        g_U64764 = {993.78500000, -276.70500000, 23.08800000};
        l_U487 = 298.72310000;
        break;
        case 3:
        l_U629 = 223726252;
        l_U630 = 2043092722;
        StrCopy( ref l_U494, "r7p_75", 16 );
        l_U481 = {346.54210000, 1885.06800000, 17.76930000};
        g_U64764 = {343.05100000, 1886.78300000, 19.13700000};
        l_U487 = 101.63560000;
        break;
        case 4:
        l_U629 = 813889395;
        l_U630 = -2075907982;
        StrCopy( ref l_U494, "r7p_76", 16 );
        l_U481 = {1196.42300000, 1685.33700000, 16.66130000};
        g_U64764 = {1199.01300000, 1681.20100000, 17.98900000};
        l_U487 = 220.26590000;
        break;
        case 5:
        l_U629 = -1552214124;
        l_U630 = -1360999125;
        StrCopy( ref l_U494, "r7p_77", 16 );
        l_U481 = {1286.95900000, 1654.56100000, 16.70740000};
        g_U64764 = {1283.45000000, 1655.87700000, 18.06600000};
        l_U487 = 15.70740000;
        break;
        case 6:
        l_U629 = 1374242512;
        l_U630 = -268530289;
        StrCopy( ref l_U494, "r7p_78", 16 );
        l_U481 = {617.93960000, 1463.64600000, 11.66610000};
        g_U64764 = {617.96200000, 1458.50000000, 12.93900000};
        l_U487 = 170.03980000;
        break;
        case 7:
        l_U629 = -1139941790;
        l_U630 = 2043092722;
        StrCopy( ref l_U494, "r7p_79", 16 );
        l_U481 = {1283.82500000, 394.64320000, 22.39600000};
        g_U64764 = {1283.36000000, 392.40200000, 23.73200000};
        l_U487 = 182.19410000;
        break;
        case 8:
        l_U629 = -1628417063;
        l_U630 = -2075907982;
        StrCopy( ref l_U494, "r7p_80", 16 );
        l_U481 = {1479.11300000, 206.91590000, 23.12950000};
        g_U64764 = {1483.04700000, 206.72900000, 24.49300000};
        l_U487 = 256.87050000;
        break;
        case 9:
        l_U629 = -1298691925;
        l_U630 = -1360999125;
        StrCopy( ref l_U494, "r7p_81", 16 );
        l_U481 = {1132.63300000, -51.09240000, 35.30380000};
        g_U64764 = {1130.01400000, -52.67900000, 37.57100000};
        l_U487 = 157.30530000;
        break;
    }
    switch (l_U627)
    {
        case 0:
        StrCopy( ref l_U538, "r7p_83", 16 );
        l_U488 = {901.85900000, 557.15200000, 23.61600000};
        l_U491 = {913.54250000, 580.41850000, 22.27200000};
        l_U591 = {897.50030000, 559.03480000, 23.03848000};
        l_U594 = {-12.72366000, -0.00000000, -112.38230000};
        l_U605 = 1;
        break;
        case 1:
        StrCopy( ref l_U538, "r7p_84", 16 );
        l_U488 = {1231.15400000, 512.31600000, 29.89100000};
        l_U491 = {1249.58200000, 540.65020000, 28.91550000};
        l_U605 = 1;
        l_U591 = {1223.87100000, 520.42130000, 29.50657000};
        l_U594 = {-7.85485600, -0.00000000, -132.98050000};
        break;
        case 2:
        StrCopy( ref l_U538, "r7p_85", 16 );
        l_U488 = {1649.37300000, 422.02000000, 30.35500000};
        l_U491 = {1651.05900000, 397.51100000, 38.14580000};
        l_U606 = 1;
        l_U591 = {1654.19400000, 425.16990000, 30.33924000};
        l_U594 = {-16.84895000, -0.00000000, 124.34910000};
        break;
        case 3:
        StrCopy( ref l_U538, "r7p_86", 16 );
        l_U488 = {847.10200000, 749.28600000, 9.26000000};
        l_U491 = {872.98210000, 755.50120000, 11.23160000};
        l_U606 = 1;
        l_U591 = {848.39770000, 757.39150000, 7.90063100};
        l_U594 = {2.58543900, -0.00000000, 172.42600000};
        break;
        case 4:
        StrCopy( ref l_U538, "r7p_87", 16 );
        l_U488 = {1575.74600000, 710.51200000, 29.06400000};
        l_U491 = {1590.68500000, 710.05550000, 29.28420000};
        l_U605 = 1;
        l_U591 = {1582.31300000, 717.22340000, 27.66829000};
        l_U594 = {-2.63959900, 0.00000000, 129.64960000};
        break;
        case 5:
        StrCopy( ref l_U538, "r7p_88", 16 );
        l_U612 = 1;
        l_U484 = {1158.71300000, 158.65110000, 31.63860000};
        l_U488 = {1190.71600000, 184.88400000, 33.96100000};
        l_U491 = {1208.15100000, 196.44510000, 32.54830000};
        l_U607 = 1;
        l_U591 = {1182.56200000, 170.68470000, 36.89997000};
        l_U594 = {-18.85225000, 0.00000000, -39.45194000};
        break;
        case 6:
        StrCopy( ref l_U538, "r7p_89", 16 );
        l_U488 = {1238.87300000, 757.15000000, 37.41300000};
        l_U491 = {1235.90800000, 744.48870000, 40.93580000};
        l_U606 = 1;
        l_U591 = {1249.45400000, 763.90850000, 41.46703000};
        l_U594 = {-30.01901000, -0.00000100, 122.08700000};
        break;
        case 7:
        StrCopy( ref l_U538, "r7p_90", 16 );
        l_U488 = {501.46100000, 1539.33400000, 14.34700000};
        l_U491 = {517.02760000, 1563.75800000, 18.83350000};
        l_U606 = 1;
        l_U591 = {503.11760000, 1545.85200000, 16.08578000};
        l_U594 = {-24.57855000, -0.00000000, 171.14400000};
        break;
        case 8:
        StrCopy( ref l_U538, "r7p_91", 16 );
        l_U488 = {1095.80300000, 1599.75500000, 18.01500000};
        l_U491 = {1110.37300000, 1586.19500000, 16.90740000};
        l_U606 = 1;
        l_U591 = {1090.94200000, 1589.21300000, 18.97629000};
        l_U594 = {-11.46316000, -0.00000000, -28.48476000};
        break;
        case 9:
        StrCopy( ref l_U538, "r7p_92", 16 );
        l_U488 = {759.70800000, 1765.03700000, 37.94800000};
        l_U491 = {769.26480000, 1824.94300000, 39.37730000};
        l_U606 = 1;
        l_U591 = {763.25580000, 1770.68900000, 39.03149000};
        l_U594 = {-21.31803000, -0.00000000, 165.40740000};
        break;
    }
    while (true)
    {
        WAIT( 0 );
        if (l_U615)
        {
            sub_6341( ref l_U583 );
            if (DOES_VEHICLE_EXIST( l_U583 ))
            {
                if (NOT (DOES_BLIP_EXIST( l_U584 )))
                {
                    REMOVE_BLIP( l_U585 );
                    ADD_BLIP_FOR_CAR( l_U583, ref l_U584 );
                    CHANGE_BLIP_COLOUR( l_U584, 3 );
                    SET_ROUTE( l_U584, 1 );
                    PRINT_NOW( "r7p_01", 7500, 1 );
                    l_U613 = 1;
                }
                l_U615 = 0;
            }
        }
        if (l_U609)
        {
            if (HAS_RESPRAY_HAPPENED())
            {
                if (sub_6986( sub_3372() ))
                {
                    REMOVE_BLIP( l_U586 );
                    STOP_PED_SPEAKING( l_U590, 0 );
                    SAY_AMBIENT_SPEECH( l_U590, "GENERIC_FUCK_OFF", 1, 1, 2 );
                    STOP_PED_SPEAKING( l_U590, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U590 )))
                    {
                        TASK_LEAVE_ANY_CAR( l_U590 );
                    }
                    PRINT( "r7p_07", 7500, 1 );
                    sub_7158();
                }
            }
        }
        if (sub_8303( l_U642 ))
        {
            sub_7292( ref l_U643, "R8_CANT", "R8_DISP" );
            l_U619 = 1;
            sub_9139();
        }
        if (NOT (IS_PLAYER_PLAYING( sub_349() )))
        {
            sub_7158();
        }
        if (l_U608)
        {
            if (IS_CHAR_INJURED( l_U590 ))
            {
                PRINT_NOW( "R7P_07", 7500, 1 );
                sub_7158();
            }
        }
        switch (l_U652)
        {
            case 0:
            switch (l_U653)
            {
                case 0:
                sub_13665( l_U642 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3372(), 0 );
                sub_13720( 0, sub_3372(), "Niko", 0 );
                REQUEST_MODEL( l_U629 );
                l_U653 = 1;
                break;
                case 1:
                if (NOT l_U613)
                {
                    if ((NOT (IS_CAR_IN_WATER( g_U64761 ))) AND ((NOT (sub_13911( ref g_U64761 ))) AND (IS_VEH_DRIVEABLE( g_U64761 ))))
                    {
                        l_U583 = g_U64761;
                        if (NOT (IS_CAR_A_MISSION_CAR( l_U583 )))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U583 );
                        }
                        l_U613 = 1;
                    }
                    else if (IS_CHAR_IN_ANY_CAR( sub_3372() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_3372(), ref l_U582 );
                        if ((NOT (IS_CAR_IN_WATER( g_U64761 ))) AND (IS_VEH_DRIVEABLE( l_U582 )))
                        {
                            if (IS_CAR_MODEL( l_U582, -1932515764 ))
                            {
                                l_U583 = l_U582;
                                if (NOT (IS_CAR_A_MISSION_CAR( l_U583 )))
                                {
                                    SET_CAR_AS_MISSION_CAR( l_U583 );
                                }
                                l_U613 = 1;
                            }
                            else
                            {
                                l_U615 = 1;
                                if (DOES_VEHICLE_EXIST( l_U583 ))
                                {
                                    if (NOT (DOES_BLIP_EXIST( l_U584 )))
                                    {
                                        REMOVE_BLIP( l_U585 );
                                        ADD_BLIP_FOR_CAR( l_U583, ref l_U584 );
                                        CHANGE_BLIP_COLOUR( l_U584, 3 );
                                        SET_ROUTE( l_U584, 1 );
                                        PRINT_NOW( "r7p_01", 7500, 1 );
                                        if (NOT (IS_CAR_A_MISSION_CAR( l_U583 )))
                                        {
                                            SET_CAR_AS_MISSION_CAR( l_U583 );
                                        }
                                        l_U613 = 1;
                                    }
                                }
                            }
                        }
                    }
                    else if (NOT (DOES_VEHICLE_EXIST( l_U583 )))
                    {
                        l_U615 = 1;
                    }
                    if (IS_VEH_DRIVEABLE( l_U583 ))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U584 )))
                        {
                            REMOVE_BLIP( l_U585 );
                            ADD_BLIP_FOR_CAR( l_U583, ref l_U584 );
                            CHANGE_BLIP_COLOUR( l_U584, 3 );
                            SET_ROUTE( l_U584, 1 );
                            PRINT_NOW( "r7p_01", 7500, 1 );
                            if (NOT (IS_CAR_A_MISSION_CAR( l_U583 )))
                            {
                                SET_CAR_AS_MISSION_CAR( l_U583 );
                            }
                            l_U613 = 1;
                        }
                    };;;
                }
                else if (IS_VEH_DRIVEABLE( l_U583 ))
                {
                    if (sub_13911( ref l_U583 ))
                    {
                        PRINT_NOW( "R7P_20", 7500, 1 );
                        sub_7158();
                    }
                    if (IS_CHAR_IN_CAR( sub_3372(), l_U583 ))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U585 )))
                        {
                            REMOVE_BLIP( l_U584 );
                            PRINT_NOW( ref l_U494, 7500, 1 );
                            ADD_BLIP_FOR_COORD( g_U64764._fU0, g_U64764._fU4, g_U64764._fU8, ref l_U585 );
                            SET_ROUTE( l_U585, 1 );
                        }
                        if (LOCATE_CHAR_IN_CAR_3D( sub_3372(), g_U64764._fU0, g_U64764._fU4, g_U64764._fU8, 15.00000000, 15.00000000, 15.00000000, 0 ))
                        {
                            if (NOT l_U618)
                            {
                                PRINT_HELP_FOREVER( "R7P_03" );
                                l_U618 = 1;
                            }
                        }
                        else if (l_U618)
                        {
                            CLEAR_HELP();
                            l_U618 = 0;
                        }
                        if (((IS_PLAYER_PRESSING_HORN( sub_349() )) AND (l_U618)) || (LOCATE_CHAR_IN_CAR_3D( sub_3372(), g_U64764._fU0, g_U64764._fU4, g_U64764._fU8, 2.50000000, 2.50000000, 2.50000000, 1 )))
                        {
                            if ((HAS_MODEL_LOADED( l_U629 )) AND (sub_14937( 1, 1 )))
                            {
                                if (HAVE_ANIMS_LOADED( "MISSroman8" ))
                                {
                                    sub_15265();
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3372(), ref l_U582 );
                                    if (IS_VEHICLE_ON_ALL_WHEELS( l_U582 ))
                                    {
                                        if (IS_CAR_MODEL( l_U582, -1932515764 ))
                                        {
                                            if (DOES_BLIP_EXIST( l_U585 ))
                                            {
                                                REMOVE_BLIP( l_U585 );
                                            }
                                            CLEAR_HELP();
                                            if ((IS_VEH_DRIVEABLE( l_U583 )) AND (NOT (IS_CHAR_INJURED( l_U590 ))))
                                            {
                                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U583, -0.50000000, 6.00000000, 0.00000000, ref l_U631, ref l_U632, ref l_U633 );
                                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U583, 0.50000000, 6.00000000, 0.00000000, ref l_U634, ref l_U635, ref l_U636 );
                                                GET_CHAR_COORDINATES( l_U590, ref l_U637, ref l_U638, ref l_U639 );
                                                GET_DISTANCE_BETWEEN_COORDS_3D( l_U637, l_U638, l_U639, l_U631, l_U632, l_U633, ref l_U640 );
                                                GET_DISTANCE_BETWEEN_COORDS_3D( l_U637, l_U638, l_U639, l_U634, l_U635, l_U636, ref l_U641 );
                                                CLEAR_CHAR_TASKS( l_U590 );
                                                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U590, l_U583, 5, 5, 5, 0 ))
                                                {
                                                    if (l_U641 < l_U640)
                                                    {
                                                        DROP_OBJECT( l_U590, 1 );
                                                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                                        OPEN_SEQUENCE_TASK( ref l_U588 );
                                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "partial_wave_d", "MISSroman8", 1000, 0, 0, 0, 0, 0 );
                                                        TASK_ENTER_CAR_AS_PASSENGER( 0, l_U583, 35000, 2 );
                                                        CLOSE_SEQUENCE_TASK( l_U588 );
                                                        TASK_PERFORM_SEQUENCE( l_U590, l_U588 );
                                                        CLEAR_SEQUENCE_TASK( l_U588 );
                                                    }
                                                    else if (l_U640 < l_U641)
                                                    {
                                                        DROP_OBJECT( l_U590, 1 );
                                                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                                        OPEN_SEQUENCE_TASK( ref l_U588 );
                                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "partial_wave_d", "MISSroman8", 1000, 0, 0, 0, 0, 0 );
                                                        TASK_ENTER_CAR_AS_PASSENGER( 0, l_U583, 35000, 1 );
                                                        CLOSE_SEQUENCE_TASK( l_U588 );
                                                        TASK_PERFORM_SEQUENCE( l_U590, l_U588 );
                                                        CLEAR_SEQUENCE_TASK( l_U588 );
                                                    }
                                                }
                                                else if (l_U641 < l_U640)
                                                {
                                                    DROP_OBJECT( l_U590, 1 );
                                                    SET_NEXT_DESIRED_MOVE_STATE( 3 );
                                                    OPEN_SEQUENCE_TASK( ref l_U588 );
                                                    TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "partial_wave_d", "MISSroman8", 1000, 0, 0, 0, 0, 0 );
                                                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U583, 35000, 2 );
                                                    CLOSE_SEQUENCE_TASK( l_U588 );
                                                    TASK_PERFORM_SEQUENCE( l_U590, l_U588 );
                                                    CLEAR_SEQUENCE_TASK( l_U588 );
                                                }
                                                else if (l_U640 < l_U641)
                                                {
                                                    DROP_OBJECT( l_U590, 1 );
                                                    SET_NEXT_DESIRED_MOVE_STATE( 3 );
                                                    OPEN_SEQUENCE_TASK( ref l_U588 );
                                                    TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "partial_wave_d", "MISSroman8", 1000, 0, 0, 0, 0, 0 );
                                                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U583, 35000, 1 );
                                                    CLOSE_SEQUENCE_TASK( l_U588 );
                                                    TASK_PERFORM_SEQUENCE( l_U590, l_U588 );
                                                    CLEAR_SEQUENCE_TASK( l_U588 );
                                                };;;
                                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U590, 1 );
                                                HINT_CAM( l_U481._fU0, l_U481._fU4, l_U481._fU8, 0, 0, 0, 5000 );
                                                WAIT( 100 );
                                                SET_PLAYER_CONTROL_ADVANCED( sub_349(), 0, 0, 1 );
                                                SETTIMERA( 0 );
                                                l_U652 = 1;
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    REQUEST_ANIMS( "MISSroman8" );
                                }
                            }
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U584 )))
                    {
                        REMOVE_BLIP( l_U585 );
                        ADD_BLIP_FOR_CAR( l_U583, ref l_U584 );
                        CHANGE_BLIP_COLOUR( l_U584, 3 );
                        SET_ROUTE( l_U584, 0 );
                        PRINT_NOW( "r7p_01", 7500, 1 );
                    }
                }
                else
                {
                    PRINT_NOW( "R7P_20", 7500, 1 );
                    sub_7158();
                }
                if (NOT l_U614)
                {
                    if (HAS_MODEL_LOADED( l_U629 ))
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( sub_3372(), g_U64764._fU0, g_U64764._fU4, g_U64764._fU8, 200.00000000, 200.00000000, 100.00000000, 0 ))
                        {
                            CLEAR_AREA( g_U64764._fU0, g_U64764._fU4, g_U64764._fU8, 20.00000000, 1 );
                            CREATE_CHAR( 26, l_U629, l_U481._fU0, l_U481._fU4, l_U481._fU8, ref l_U590, 1 );
                            SET_CHAR_HEADING( l_U590, l_U487 );
                            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U590 );
                            SET_CHAR_RELATIONSHIP( l_U590, 1, 0 );
                            REQUEST_MODEL( l_U630 );
                            REQUEST_ANIMS( "MISSroman8" );
                            SET_CAR_GENERATORS_ACTIVE_IN_AREA( g_U64764._fU0 - 15, g_U64764._fU4 - 15, g_U64764._fU8 - 15, g_U64764._fU0 + 15, g_U64764._fU4 + 15, g_U64764._fU8 + 15, 0 );
                            l_U608 = 1;
                            l_U614 = 1;
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U629 );
                    }
                }
                else if (NOT l_U617)
                {
                    if (NOT (IS_CHAR_INJURED( l_U590 )))
                    {
                        if ((HAS_MODEL_LOADED( l_U630 )) AND (NOT (IS_CHAR_WAITING_FOR_WORLD_COLLISION( l_U590 ))))
                        {
                            PRINTNL();
                            PRINTNL();
                            PRINTSTRING( "give hotdog" );
                            PRINTNL();
                            PRINTNL();
                            TASK_START_SCENARIO_AT_POSITION( l_U590, "Scenario_Standing", l_U481._fU0, l_U481._fU4, l_U481._fU8, l_U487 );
                            GIVE_PED_AMBIENT_OBJECT( l_U590, l_U630 );
                            l_U617 = 1;
                        }
                    }
                }
                if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U590, sub_3372(), 0 )) || (IS_CHAR_SHOOTING_IN_AREA( sub_3372(), g_U64764._fU0 - 50, g_U64764._fU4 - 50, g_U64764._fU0 + 50, g_U64764._fU0 + 50, 0 )))
                {
                    PRINT_NOW( "R7P_04", 7500, 1 );
                    sub_7158();
                }
                break;
            }
            break;
            case 1:
            switch (l_U654)
            {
                case 0:
                if (NOT (DOES_CHAR_EXIST( l_U590 )))
                {
                    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U590, sub_3372(), 0 )) || (IS_CHAR_SHOOTING_IN_AREA( sub_3372(), g_U64764._fU0 - 50, g_U64764._fU4 - 50, g_U64764._fU0 + 50, g_U64764._fU0 + 50, 0 )))
                    {
                        PRINT_NOW( "R7P_04", 7500, 1 );
                        sub_7158();
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U590 )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U590 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U583 ))
                        {
                            ADD_UPSIDEDOWN_CAR_CHECK( l_U583 );
                        }
                        l_U609 = 1;
                        SET_PLAYER_CONTROL_ADVANCED( sub_349(), 1, 1, 1 );
                        REMOVE_BLIP( l_U584 );
                        ADD_BLIP_FOR_COORD( l_U488._fU0, l_U488._fU4, l_U488._fU8, ref l_U586 );
                        if (l_U612)
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U587 )))
                            {
                                ADD_BLIP_FOR_COORD( l_U484._fU0, l_U484._fU4, l_U484._fU8, ref l_U587 );
                                SET_ROUTE( l_U587, 1 );
                                CHANGE_BLIP_SCALE( l_U587, 0.00000000 );
                            }
                        }
                        else
                        {
                            SET_ROUTE( l_U586, 1 );
                        }
                        GET_DISTANCE_BETWEEN_COORDS_3D( g_U64764._fU0, g_U64764._fU4, g_U64764._fU8, l_U488._fU0, l_U488._fU4, l_U488._fU8, ref l_U622 );
                        l_U598 = sub_17764( l_U622 );
                        l_U621 = l_U622 / 4.00000000;
                        l_U621 *= 1000.00000000;
                        g_U64758 = ROUND( l_U621 );
                        GET_GAME_TIMER( ref l_U623 );
                        STOP_PED_SPEAKING( l_U590, 0 );
                        SAY_AMBIENT_SPEECH( l_U590, "TAXI_START", 1, 1, 2 );
                        STOP_PED_SPEAKING( l_U590, 1 );
                        PRINT_NOW( ref l_U538, 7500, 1 );
                        l_U652 = 2;
                    }
                    else if (sub_17970())
                    {
                        sub_3429( 0 );
                        DO_SCREEN_FADE_OUT( 500 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                        HINT_CAM( l_U481._fU0, l_U481._fU4, l_U481._fU8, 0, 0, 0, 0 );
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        if ((IS_VEH_DRIVEABLE( l_U583 )) AND (NOT (IS_CHAR_INJURED( l_U590 ))))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U590 );
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U590, l_U583, 2 );
                        }
                        l_U609 = 1;
                        SET_PLAYER_CONTROL_ADVANCED( sub_349(), 1, 1, 1 );
                        REMOVE_BLIP( l_U584 );
                        ADD_BLIP_FOR_COORD( l_U488._fU0, l_U488._fU4, l_U488._fU8, ref l_U586 );
                        if (l_U612)
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U587 )))
                            {
                                ADD_BLIP_FOR_COORD( l_U484._fU0, l_U484._fU4, l_U484._fU8, ref l_U587 );
                                SET_ROUTE( l_U587, 1 );
                                CHANGE_BLIP_SCALE( l_U587, 0.00000000 );
                            }
                        }
                        else
                        {
                            SET_ROUTE( l_U586, 1 );
                        }
                        GET_DISTANCE_BETWEEN_COORDS_3D( g_U64764._fU0, g_U64764._fU4, g_U64764._fU8, l_U488._fU0, l_U488._fU4, l_U488._fU8, ref l_U622 );
                        l_U598 = sub_17764( l_U622 );
                        l_U621 = l_U622 / 4.00000000;
                        l_U621 *= 1000.00000000;
                        g_U64758 = ROUND( l_U621 );
                        GET_GAME_TIMER( ref l_U623 );
                        DO_SCREEN_FADE_IN( 500 );
                        while (IS_SCREEN_FADING_IN())
                        {
                            WAIT( 0 );
                        }
                        STOP_PED_SPEAKING( l_U590, 0 );
                        SAY_AMBIENT_SPEECH( l_U590, "TAXI_START", 1, 1, 2 );
                        STOP_PED_SPEAKING( l_U590, 1 );
                        PRINT_NOW( ref l_U538, 7500, 1 );
                        l_U652 = 2;
                    }
                    if (TIMERA() >= 10000)
                    {
                        if ((IS_VEH_DRIVEABLE( l_U583 )) AND (NOT (IS_CHAR_INJURED( l_U590 ))))
                        {
                            if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( l_U590 )))
                            {
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U583, -0.50000000, 6.00000000, 0.00000000, ref l_U631, ref l_U632, ref l_U633 );
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U583, 0.50000000, 6.00000000, 0.00000000, ref l_U634, ref l_U635, ref l_U636 );
                                GET_CHAR_COORDINATES( l_U590, ref l_U637, ref l_U638, ref l_U639 );
                                GET_DISTANCE_BETWEEN_COORDS_3D( l_U637, l_U638, l_U639, l_U631, l_U632, l_U633, ref l_U640 );
                                GET_DISTANCE_BETWEEN_COORDS_3D( l_U637, l_U638, l_U639, l_U634, l_U635, l_U636, ref l_U641 );
                                if (l_U641 < l_U640)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    TASK_ENTER_CAR_AS_PASSENGER( l_U590, l_U583, 35000, 2 );
                                }
                                else if (l_U640 < l_U641)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    TASK_ENTER_CAR_AS_PASSENGER( l_U590, l_U583, 35000, 1 );
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U590, 1 );
                                SETTIMERA( 0 );
                            }
                        }
                    }
                }
                break;
                default:
            }
            break;
            case 2:
            switch (l_U655)
            {
                case 0:
                sub_19069();
                sub_19275();
                sub_19559();
                sub_19756();
                if (NOT (DOES_CHAR_EXIST( l_U590 )))
                {
                    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U590, sub_3372(), 0 )) || (IS_CHAR_SHOOTING_IN_AREA( sub_3372(), g_U64764._fU0 - 50, g_U64764._fU4 - 50, g_U64764._fU0 + 50, g_U64764._fU0 + 50, 0 )))
                    {
                        PRINT_NOW( "R7P_04", 7500, 1 );
                        sub_7158();
                    }
                }
                GET_GAME_TIMER( ref l_U625 );
                l_U624 = l_U625 - l_U623;
                l_U597 = sub_20211( g_U64758 - l_U624 );
                if ((g_U64758 - l_U624) > 0)
                {
                    if ((g_U64758 - l_U624) < 10000)
                    {
                        if (NOT l_U610)
                        {
                            PRINT_NOW( "R7P_02", 7500, 1 );
                            l_U610 = 1;
                        }
                    }
                    if (NOT l_U611)
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( sub_3372(), l_U488._fU0, l_U488._fU4, l_U488._fU8, 150.00000000, 150.00000000, 150.00000000, 0 ))
                        {
                            CLEAR_AREA( l_U488._fU0, l_U488._fU4, l_U488._fU8, 10.00000000, 1 );
                            l_U611 = 1;
                        }
                    }
                    if (IS_VEH_DRIVEABLE( l_U583 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U590 )))
                        {
                            if ((NOT (IS_VEH_DRIVEABLE( l_U583 ))) || ((sub_13911( ref l_U583 )) || (NOT (IS_CHAR_IN_CAR( l_U590, l_U583 )))))
                            {
                                STOP_PED_SPEAKING( l_U590, 0 );
                                SAY_AMBIENT_SPEECH( l_U590, "TAXI_BAIL", 1, 1, 2 );
                                STOP_PED_SPEAKING( l_U590, 1 );
                                PRINT( "r7p_07", 7500, 1 );
                                sub_7158();
                            }
                        }
                        if (IS_CHAR_IN_CAR( sub_3372(), l_U583 ))
                        {
                            if (l_U620)
                            {
                                if (NOT (DOES_BLIP_EXIST( l_U586 )))
                                {
                                    REMOVE_BLIP( l_U584 );
                                    ADD_BLIP_FOR_COORD( l_U488._fU0, l_U488._fU4, l_U488._fU8, ref l_U586 );
                                    if (l_U612)
                                    {
                                        if (NOT (DOES_BLIP_EXIST( l_U587 )))
                                        {
                                            ADD_BLIP_FOR_COORD( l_U484._fU0, l_U484._fU4, l_U484._fU8, ref l_U587 );
                                            SET_ROUTE( l_U587, 1 );
                                            CHANGE_BLIP_SCALE( l_U587, 0.00000000 );
                                        }
                                    }
                                    else
                                    {
                                        SET_ROUTE( l_U586, 1 );
                                    }
                                    CLEAR_ONSCREEN_TIMER( ref g_U64759 );
                                    PRINT( ref l_U538, 7500, 1 );
                                }
                                l_U620 = 0;
                            }
                            if (LOCATE_CHAR_IN_CAR_3D( sub_3372(), l_U488._fU0, l_U488._fU4, l_U488._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                            {
                                if (sub_14937( 1, 1 ))
                                {
                                    sub_15265();
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3372(), ref l_U582 );
                                    if (IS_CAR_MODEL( l_U582, -1932515764 ))
                                    {
                                        SET_PLAYER_CONTROL_ADVANCED( sub_349(), 0, 1, 1 );
                                        REMOVE_BLIP( l_U586 );
                                        REMOVE_BLIP( l_U587 );
                                        BEGIN_CAM_COMMANDS( ref l_U599 );
                                        l_U600 = 1;
                                        CREATE_CAM( 14, ref l_U601 );
                                        CREATE_CAM( 14, ref l_U602 );
                                        CREATE_CAM( 3, ref l_U603 );
                                        SET_CAM_FOV( l_U601, 64.79996000 );
                                        SET_CAM_NEAR_DOF( l_U601, 15.00000000 );
                                        SET_CAM_FAR_DOF( l_U601, 20.00000000 );
                                        SET_CAM_POS( l_U601, l_U591._fU0, l_U591._fU4, l_U591._fU8 );
                                        SET_CAM_ROT( l_U601, l_U594._fU0, l_U594._fU4, l_U594._fU8 );
                                        SET_CAM_FOV( l_U602, 45.00000000 );
                                        SET_CAM_NEAR_DOF( l_U602, 15.00000000 );
                                        SET_CAM_FAR_DOF( l_U602, 20.00000000 );
                                        SET_CAM_POS( l_U602, l_U591._fU0, l_U591._fU4, l_U591._fU8 );
                                        SET_CAM_ROT( l_U602, l_U594._fU0, l_U594._fU4, l_U594._fU8 );
                                        SET_CAM_ACTIVE( l_U601, 1 );
                                        SET_CAM_PROPAGATE( l_U601, 1 );
                                        SET_CAM_ACTIVE( l_U602, 1 );
                                        SET_CAM_PROPAGATE( l_U602, 1 );
                                        SET_CAM_ACTIVE( l_U603, 1 );
                                        SET_CAM_PROPAGATE( l_U603, 1 );
                                        SET_CAM_INTERP_STYLE_CORE( l_U603, l_U601, l_U602, 5000, 0 );
                                        if (IS_CHAR_IN_ANY_CAR( sub_3372() ))
                                        {
                                            GET_CAR_CHAR_IS_USING( sub_3372(), ref l_U583 );
                                            POINT_CAM_AT_VEHICLE( l_U601, l_U583 );
                                            POINT_CAM_AT_VEHICLE( l_U602, l_U583 );
                                        }
                                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                        SETTIMERA( 0 );
                                        g_U64761 = l_U582;
                                        l_U655 = 1;
                                    }
                                }
                            }
                        }
                        else if (NOT l_U620)
                        {
                            SETTIMERB( 0 );
                            if (NOT (DOES_BLIP_EXIST( l_U584 )))
                            {
                                REMOVE_BLIP( l_U586 );
                                REMOVE_BLIP( l_U587 );
                                ADD_BLIP_FOR_CAR( l_U583, ref l_U584 );
                                SET_BLIP_AS_FRIENDLY( l_U584, 1 );
                                PRINTNL();
                                SET_ROUTE( l_U584, 0 );
                            }
                            l_U620 = 1;
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U590 )))
                        {
                            iVar2 = 30000;
                            iVar2 -= TIMERB();
                            if (TIMERB() <= 28000)
                            {
                                PRINT_WITH_NUMBER_NOW( "R7P_68", iVar2 / 1000, 250, 1 );
                            }
                            else if (NOT (TIMERB() >= 29000))
                            {
                                PRINT_WITH_NUMBER_NOW( "R7P_69", iVar2 / 1000, 250, 1 );
                            }
                            if ((IS_CHAR_SHOOTING( sub_3372() )) || (TIMERB() >= 30000))
                            {
                                STOP_PED_SPEAKING( l_U590, 0 );
                                SAY_AMBIENT_SPEECH( l_U590, "GENERIC_FUCK_OFF", 1, 1, 2 );
                                STOP_PED_SPEAKING( l_U590, 1 );
                                PRINT( "r7p_07", 7500, 1 );
                                sub_7158();
                            }
                        };;;
                    }
                    else
                    {
                        PRINT_NOW( "R7P_20", 7500, 1 );
                        sub_7158();
                    }
                }
                else if (sub_6986( sub_3372() ))
                {
                    REMOVE_BLIP( l_U586 );
                    STOP_PED_SPEAKING( l_U590, 0 );
                    SAY_AMBIENT_SPEECH( l_U590, "GENERIC_FUCK_OFF", 1, 1, 2 );
                    STOP_PED_SPEAKING( l_U590, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U590 )))
                    {
                        TASK_LEAVE_ANY_CAR( l_U590 );
                    }
                    PRINT( "r7p_07", 7500, 1 );
                    sub_7158();
                }
                break;
                case 1:
                GET_GAME_TIMER( ref l_U625 );
                l_U624 = l_U625 - l_U623;
                SET_PLAYER_CONTROL_ADVANCED( sub_349(), 0, 0, 1 );
                if (DOES_BLIP_EXIST( l_U586 ))
                {
                    REMOVE_BLIP( l_U586 );
                }
                if ((g_U64758 - l_U624) > 5000)
                {
                    sub_457( l_U598 );
                    STOP_PED_SPEAKING( l_U590, 0 );
                    SAY_AMBIENT_SPEECH( l_U590, "TAXI_SUCCESS", 1, 1, 2 );
                    STOP_PED_SPEAKING( l_U590, 1 );
                    WAIT( 2000 );
                    sub_457( l_U597 );
                    PRINTNL();
                    PRINTNL();
                    PRINTNL();
                    PRINTSTRING( "SAY_AMBIENT_SPEECH(current_customer,TAXI_SUCCESS,TRUE,TRUE)" );
                    PRINTNL();
                    PRINTNL();
                    PRINTNL();
                    l_U655 = 2;
                }
                else if (((g_U64758 - l_U624) > 0) AND ((g_U64758 - l_U624) < 5000))
                {
                    sub_457( l_U598 );
                    STOP_PED_SPEAKING( l_U590, 0 );
                    SAY_AMBIENT_SPEECH( l_U590, "THANKS", 1, 1, 2 );
                    STOP_PED_SPEAKING( l_U590, 1 );
                    WAIT( 1000 );
                    if (sub_6986( sub_3372() ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U590 )))
                        {
                            TASK_LEAVE_ANY_CAR( l_U590 );
                        }
                    }
                    PRINTNL();
                    PRINTNL();
                    PRINTNL();
                    PRINTSTRING( "SAY_AMBIENT_SPEECH(current_customer,THANKS,TRUE,TRUE)" );
                    PRINTNL();
                    PRINTNL();
                    PRINTNL();
                    l_U655 = 2;
                }
                else if ((g_U64758 - l_U624) < 0)
                {
                    if (sub_6986( sub_3372() ))
                    {
                        STOP_PED_SPEAKING( l_U590, 0 );
                        SAY_AMBIENT_SPEECH( l_U590, "GENERIC_FUCK_OFF", 1, 1, 2 );
                        STOP_PED_SPEAKING( l_U590, 1 );
                        if (NOT (IS_CHAR_INJURED( l_U590 )))
                        {
                            TASK_LEAVE_ANY_CAR( l_U590 );
                        }
                        PRINT( "r7p_07", 7500, 1 );
                        sub_7158();
                    }
                };;;
                break;
                case 2:
                if (sub_17970())
                {
                    sub_3429( 0 );
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                    SET_PLAYER_CONTROL_ADVANCED( sub_349(), 1, 1, 1 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U599 );
                    l_U600 = 0;
                    l_U608 = 0;
                    if (DOES_BLIP_EXIST( l_U586 ))
                    {
                        REMOVE_BLIP( l_U586 );
                    }
                    DELETE_CHAR( ref l_U590 );
                    l_U655 = 4;
                }
                if (NOT (IS_CHAR_INJURED( l_U590 )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    OPEN_SEQUENCE_TASK( ref l_U589 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U491._fU0, l_U491._fU4, l_U491._fU8, 2, -2, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U589 );
                    TASK_PERFORM_SEQUENCE( l_U590, l_U589 );
                    CLEAR_SEQUENCE_TASK( l_U589 );
                    SET_CHAR_KEEP_TASK( l_U590, 1 );
                    l_U608 = 0;
                    l_U655 = 3;
                }
                break;
                case 3:
                if (sub_17970())
                {
                    sub_3429( 0 );
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                    SET_PLAYER_CONTROL_ADVANCED( sub_349(), 1, 1, 1 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U599 );
                    l_U608 = 0;
                    l_U600 = 0;
                    if (DOES_BLIP_EXIST( l_U586 ))
                    {
                        REMOVE_BLIP( l_U586 );
                    }
                    DELETE_CHAR( ref l_U590 );
                    l_U655 = 4;
                }
                if (TIMERA() >= 5000)
                {
                    SET_PLAYER_CONTROL_ADVANCED( sub_349(), 1, 1, 1 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U599 );
                    l_U600 = 0;
                    if (DOES_BLIP_EXIST( l_U586 ))
                    {
                        REMOVE_BLIP( l_U586 );
                    }
                    l_U655 = 4;
                }
                break;
                case 4:
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 500 );
                    while (IS_SCREEN_FADING_IN())
                    {
                        WAIT( 0 );
                    }
                    sub_23390();
                }
                if (NOT (IS_CHAR_INJURED( l_U590 )))
                {
                    if (l_U606)
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U590 );
                    }
                    else if (l_U607)
                    {
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        OPEN_SEQUENCE_TASK( ref l_U589 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U491._fU0, l_U491._fU4, l_U491._fU8, 2, -2, 15.50000000 );
                        TASK_DIE( 0 );
                        CLOSE_SEQUENCE_TASK( l_U589 );
                        TASK_PERFORM_SEQUENCE( l_U590, l_U589 );
                        CLEAR_SEQUENCE_TASK( l_U589 );
                        SET_CHAR_KEEP_TASK( l_U590, 1 );
                    }
                    else if (l_U605)
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U590 );
                    };;;
                    sub_23390();
                }
                break;
            }
            break;
        }
    }
    return;
}

int sub_108(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result <= 14; Result++ )
    {
        switch (g_U15946[uParam0]._fU168._fU12[Result])
        {
            case 2:
            case 0:
            return Result;
            break;
        }
    }
    return -1;
}

void sub_228()
{
    sub_237();
    return;
}

void sub_237()
{
    int iVar2;

    iVar2 = 0;
    sub_251( iVar2 );
    sub_1778( iVar2 );
    return;
}

void sub_251(unknown uParam0)
{
    if (g_U813)
    {
        sub_270();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_349(), 150 );
    switch (uParam0)
    {
        case 0:
        case 3:
        case 8:
        case 19:
        case 22:
        sub_446( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1557( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1692();
    return;
}

void sub_270()
{
    sub_279();
    return;
}

void sub_279()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_349()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_446(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_457( uParam1 );
    sub_652( uParam0, 0, uParam2 );
    sub_652( uParam0, 1, uParam3 );
    sub_652( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_1424();
    return;
}

void sub_457(unknown uParam0)
{
    ADD_SCORE( sub_349(), uParam0 );
    sub_482( uParam0 );
    return;
}

void sub_482(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_593( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_593(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_652(unknown uParam0, int iParam1, int iParam2)
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
        sub_809( uParam0 );
    }
    return;
}

void sub_809(unknown uParam0)
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

void sub_1424()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_1557(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1692()
{
    sub_1701();
    return;
}

void sub_1701()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1778(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1557( "Flow_Quit_Proc_Subpart: Proc Mission not loaded" );
    }
    if (NOT g_U13391[uParam0]._fU160._fU96)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1557( "Flow_Quit_Proc_Subpart: Subpart not active" );
    }
    g_U13391[uParam0]._fU160._fU96 = 0;
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (g_U13391[uParam0]._fU160._fU100 < iVar3)
    {
        g_U13391[uParam0]._fU160._fU100 = iVar3 + 10000;
    }
    g_U10978 = 0;
    g_U10981[uParam0]._fU28 = 1;
    sub_2177();
    sub_2801();
    uVar4 = sub_2836( uParam0 );
    sub_3256( uVar4, 0 );
    return;
}

void sub_2177()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2215( 5, g_U569[I] )) == 1))
        {
            if ((sub_2215( 1, g_U569[I] )) != 0)
            {
                sub_2501( I );
            }
        }
    }
    if (NOT sub_2667())
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

int sub_2215(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2501(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2586( g_U569 - 1 );
    return;
}

void sub_2586(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2667()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2215( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2801()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

int sub_2836(unknown uParam0)
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
    sub_593( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_3256(int iParam0, boolean bParam1)
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

void sub_3363()
{
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3372(), 1 );
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    sub_3429( 0 );
    sub_3574( l_U642 );
    if (l_U600)
    {
        END_CAM_COMMANDS( ref l_U599 );
    }
    sub_3644( l_U642 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3372()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3429(unknown uParam0)
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

void sub_3574(int iParam0)
{
    if (g_U91._fU68 == iParam0)
    {
        g_U91._fU68 = -1;
    }
    return;
}

void sub_3644(int iParam0)
{
    if (g_U91._fU72 == iParam0)
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_3737(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3773())
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

int sub_3773()
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

void sub_3885(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        g_U91._fU72 = uParam0;
    }
    else
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_3961(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[uParam2];
}

int sub_6341(unknown uParam0)
{
    int iVar3;
    int iVar4;
    vector vVar5;
    float fVar8;

    if (g_U9943[1]._fU0)
    {
        return sub_6367( uParam0 );
    }
    iVar3 = -1932515764;
    iVar4 = -464206860;
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar5 = {808.86000000, -265.03120000, 14.53780000};
    fVar8 = 343.59120000;
    CLEAR_AREA( vVar5.x, vVar5.y, vVar5.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar5.x, vVar5.y, vVar5.z, uParam0, 1 );
    CHANGE_CAR_COLOUR( (uParam0^), 0, 1 );
    SET_EXTRA_CAR_COLOURS( (uParam0^), 1, 0 );
    SET_CAR_HEADING( (uParam0^), fVar8 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    SET_VEHICLE_DIRT_LEVEL( (uParam0^), 15.90000000 );
    return 1;
}

int sub_6367(unknown uParam0)
{
    int iVar3;
    vector vVar4;
    float fVar7;

    iVar3 = -1932515764;
    if (g_U9943[2]._fU0)
    {
        iVar3 = 2006918058;
    }
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar4 = {589.28430000, 1430.80900000, 10.00540000};
    fVar7 = 1.95590000;
    CLEAR_AREA( vVar4.x, vVar4.y, vVar4.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar4.x, vVar4.y, vVar4.z, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), fVar7 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    if (iVar3 == 2006918058)
    {
        SET_CAR_COLOUR_COMBINATION( (uParam0^), 2 );
        SET_VEHICLE_DIRT_LEVEL( (uParam0^), 0.00000000 );
    }
    else
    {
        CHANGE_CAR_COLOUR( (uParam0^), 0, 1 );
        SET_EXTRA_CAR_COLOURS( (uParam0^), 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( (uParam0^), 15.90000000 );
    }
    return 1;
}

int sub_6986(unknown uParam0)
{
    float fVar3;

    GET_CHAR_SPEED( uParam0, ref fVar3 );
    if (fVar3 < 1.50000000)
    {
        return 1;
    }
    return 0;
}

void sub_7158()
{
    g_U64772++;
    if (g_U64772 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_349(), 150 );
        SAY_AMBIENT_SPEECH( sub_3372(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    g_U64767 = 1;
    if (NOT l_U619)
    {
        sub_7292( ref l_U643, "R8_NCFAIL", "R8_DISP" );
        sub_7651( l_U642, ref l_U643, "Rp8AUD", 8000, 1 );
    }
    sub_8223( l_U642, l_U628 );
    sub_228();
    sub_3363();
    return;
}

void sub_7292(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_7343( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_7343(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_7651(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_7671( uParam0, uParam1, uParam2, uParam3, uParam4, 0 );
    return;
}

void sub_7671(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_8223(unknown uParam0, unknown uParam1)
{
    g_U15946[uParam0]._fU168._fU12[uParam1] = 2;
    g_U15946[uParam0]._fU168._fU0 = 2;
    return;
}

int sub_8303(unknown uParam0)
{
    if (g_U15946[uParam0]._fU4 == 1)
    {
        if (g_U15946[uParam0]._fU8[1]._fU0[3] == 1)
        {
            g_U15946[uParam0]._fU4 = 0;
            g_U15946[uParam0]._fU8[1]._fU0[3] = 0;
            if (sub_8396())
            {
                return 0;
            }
            sub_9035();
            return 1;
        }
    }
    return 0;
}

int sub_8396()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BADMAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CHERISE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CLARENCE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "GRACIE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "HOSSAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ILYENA" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "IVAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1_MISSION" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MEL" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA2" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_9035()
{
    g_U811 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_9139()
{
    l_U616 = 1;
    if (sub_9168( ref l_U643, "Rp8AUD", 1 ))
    {
        while (l_U616)
        {
            WAIT( 0 );
            switch (sub_13138())
            {
                case 2:
                l_U616 = 0;
                break;
                default:
                if (sub_13226( 0 ))
                {
                    l_U616 = 0;
                    sub_7158();
                }
                break;
            }
        }
    }
    return;
}

int sub_9168(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U91._fU60;
    if (bParam2)
    {
        return sub_9221( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U91._fU368)
    {
        StrCopy( ref g_U91._fU224[0], uParam1, 16 );
        g_U91._fU224[1] = {(uParam0^)[0]};
        sub_11120( uVar14, ref g_U91._fU176 );
        g_U91._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_9221(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_9291( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_9291( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_349() )))
    {
        sub_9291( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3372() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3372() )))
    {
        sub_9291( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_9291( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_9748()))
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
                sub_9291( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_9748()))
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
    sub_11120( uParam0, ref g_U91._fU176 );
    sub_12501( ref g_U91._fU160 );
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
        sub_12741( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_9291(unknown uParam0)
{
    return;
}

int sub_9748()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_9805())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_9805()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_349() )))
    {
        sub_9291( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_9291( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_9291( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_9291( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_349() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3372() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3372(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_9291( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3372() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_9291( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_9291( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_349() )))
    {
        sub_9291( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_11120(int iParam0, unknown uParam1)
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

void sub_12501(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_12741(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_13138()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_13226(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_3372(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_9291( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_13665(unknown uParam0)
{
    g_U91._fU68 = uParam0;
    return;
}

void sub_13720(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_13804( "\n PED NUMBER ", uParam0 );
    sub_12741( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_13804(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_13911(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if ((CHECK_STUCK_TIMER( (uParam0^), 0, 5000 )) || ((CHECK_STUCK_TIMER( (uParam0^), 1, 40000 )) || ((CHECK_STUCK_TIMER( (uParam0^), 2, 30000 )) || (CHECK_STUCK_TIMER( (uParam0^), 3, 60000 )))))
        {
            return 1;
        }
    }
    return 0;
}

int sub_14937(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3372() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3372(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3372() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3372(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3372()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3372() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3372() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_349() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_349() )))
    {
        return 0;
    }
    return 1;
}

void sub_15265()
{
    unknown uVar2;
    float fVar3;

    if ((IS_CHAR_ON_ANY_BIKE( sub_3372() )) || (IS_CHAR_IN_ANY_CAR( sub_3372() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3372(), ref uVar2 );
        SET_PLAYER_CONTROL( sub_349(), 0 );
        GET_CAR_SPEED( uVar2, ref fVar3 );
        while (fVar3 > 0.20000000)
        {
            WAIT( 0 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                GET_CAR_SPEED( uVar2, ref fVar3 );
            }
        }
        SET_PLAYER_CONTROL( sub_349(), 1 );
    }
    return;
}

void sub_17764(unknown uParam0)
{
    unknown Result;
    float fVar4;
    float fVar5;
    int iVar6;
    float fVar7;

    iVar6 = 10;
    fVar4 = 60;
    fVar5 = 2335;
    fVar7 = fVar4 / fVar5;
    Result = FLOOR( (fVar7 * uParam0) + iVar6 );
    return Result;
}

int sub_17970()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_19069()
{
    if (TIMERB() >= 8000)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3372() ))
        {
            GET_CAR_CHAR_IS_USING( sub_3372(), ref l_U583 );
            if (NOT (IS_CHAR_INJURED( l_U590 )))
            {
                if (IS_CHAR_IN_CAR( l_U590, l_U583 ))
                {
                    if (((GET_TIME_SINCE_PLAYER_HIT_PED( sub_349() )) > 0) AND ((GET_TIME_SINCE_PLAYER_HIT_PED( sub_349() )) < 500))
                    {
                        STOP_PED_SPEAKING( l_U590, 0 );
                        SAY_AMBIENT_SPEECH( l_U590, "TAXI_HIT_PED", 1, 1, 2 );
                        STOP_PED_SPEAKING( l_U590, 1 );
                        SETTIMERB( 0 );
                    }
                }
            }
        }
    }
    return;
}

void sub_19275()
{
    if (TIMERB() >= 10000)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3372() ))
        {
            GET_CAR_CHAR_IS_USING( sub_3372(), ref l_U583 );
            if (IS_VEH_DRIVEABLE( l_U583 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U590 )))
                {
                    if (IS_CHAR_IN_CAR( l_U590, l_U583 ))
                    {
                        if ((((GET_TIME_SINCE_PLAYER_HIT_OBJECT( sub_349() )) > 0) AND ((GET_TIME_SINCE_PLAYER_HIT_OBJECT( sub_349() )) < 500)) || ((((GET_TIME_SINCE_PLAYER_HIT_BUILDING( sub_349() )) > 0) AND ((GET_TIME_SINCE_PLAYER_HIT_BUILDING( sub_349() )) < 500)) || (((GET_TIME_SINCE_PLAYER_HIT_CAR( sub_349() )) > 0) AND ((GET_TIME_SINCE_PLAYER_HIT_CAR( sub_349() )) < 500))))
                        {
                            STOP_PED_SPEAKING( l_U590, 0 );
                            SAY_AMBIENT_SPEECH( l_U590, "CRASH_CAR", 1, 1, 2 );
                            STOP_PED_SPEAKING( l_U590, 1 );
                            SETTIMERB( 0 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_19559()
{
    if (TIMERB() >= 30000)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3372() ))
        {
            GET_CAR_CHAR_IS_USING( sub_3372(), ref l_U583 );
            if (IS_VEH_DRIVEABLE( l_U583 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U590 )))
                {
                    if (IS_CHAR_IN_CAR( l_U590, l_U583 ))
                    {
                        if (NOT (IS_VEHICLE_ON_ALL_WHEELS( l_U583 )))
                        {
                            STOP_PED_SPEAKING( l_U590, 0 );
                            SAY_AMBIENT_SPEECH( l_U590, "SHIT", 1, 1, 2 );
                            STOP_PED_SPEAKING( l_U590, 1 );
                            SETTIMERB( 0 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_19756()
{
    if (TIMERB() >= 20000)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3372() ))
        {
            GET_CAR_CHAR_IS_USING( sub_3372(), ref l_U583 );
            if (IS_VEH_DRIVEABLE( l_U583 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U590 )))
                {
                    if (IS_CHAR_IN_CAR( l_U590, l_U583 ))
                    {
                        if ((((GET_TIME_SINCE_PLAYER_RAN_LIGHT( sub_349() )) > 0) AND ((GET_TIME_SINCE_PLAYER_RAN_LIGHT( sub_349() )) < 500)) || ((((GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC( sub_349() )) > 0) AND ((GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC( sub_349() )) < 500)) || (((GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT( sub_349() )) > 0) AND ((GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT( sub_349() )) < 500))))
                        {
                            STOP_PED_SPEAKING( l_U590, 0 );
                            SAY_AMBIENT_SPEECH( l_U590, "SHIT", 1, 1, 2 );
                            STOP_PED_SPEAKING( l_U590, 1 );
                            SETTIMERB( 0 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_20211(unknown uParam0)
{
    unknown Result;
    float fVar4;
    float fVar5;
    float fVar6;

    fVar4 = 40;
    fVar5 = 583817;
    fVar6 = fVar4 / fVar5;
    Result = FLOOR( fVar6 * (TO_FLOAT( uParam0 )) );
    return Result;
}

void sub_23390()
{
    g_U64772 = 0;
    INCREMENT_INT_STAT( 258, 1 );
    g_U64767 = 0;
    sub_23426();
    sub_34088( l_U642, l_U628, 10 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    if (NOT (sub_34141( l_U642, 10 )))
    {
        sub_7292( ref l_U643, "R8_NCPASS", "R8_THANKS" );
    }
    else
    {
        sub_7292( ref l_U643, "R8_NCPASS", "R8_THANKS1" );
    }
    sub_7651( l_U642, ref l_U643, "Rp8AUD", 8000, 1 );
    sub_3363();
    return;
}

void sub_23426()
{
    sub_23435();
    return;
}

void sub_23435()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_23462( iVar3, iVar4, iVar5 );
    sub_1778( iVar2 );
    return;
}

void sub_23462(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_23493( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_23493(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_23589( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_23589( ref cVar9 );
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
            sub_23589( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_23589( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_23589( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_23589( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_24166( iParam0, iVar7 );;;
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
                sub_24563( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_24563( 0, 4 );
            }
        }
    }
    if (NOT (sub_24652( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_349(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_349() );
    }
    sub_2177();
    bVar27 = true;
    uVar28 = sub_24166( iParam0, iVar7 );
    uVar29 = sub_2836( iParam0 );
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
                sub_32933( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_33363();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_33448( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_33505( iParam0 );
                sub_33640( 0 );
                sub_3256( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_33748();
        }
    }
    if (bParam2)
    {
        sub_33363();
        sub_33836();
        sub_33640( 0 );
    }
    if (bParam3)
    {
        sub_33363();
        sub_33876();
        sub_33640( 0 );
        sub_3256( uVar29, 0 );
    }
    sub_33927();
    return;
}

void sub_23589(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_24166(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_593( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_24563(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_24652(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_24860( uParam1 );
        break;
        case 1:
        bVar8 = sub_25843( uParam1 );
        break;
        case 2:
        bVar8 = sub_26069( uParam1 );
        break;
        case 3:
        bVar8 = sub_26219( uParam1 );
        break;
        case 4:
        bVar8 = sub_26497( uParam1 );
        break;
        case 5:
        bVar8 = sub_26800( uParam1 );
        break;
        case 6:
        bVar8 = sub_26999( uParam1 );
        break;
        case 7:
        bVar8 = sub_27225( uParam1 );
        break;
        case 8:
        bVar8 = sub_27460( uParam1 );
        break;
        case 9:
        bVar8 = sub_27835( uParam1 );
        break;
        case 10:
        bVar8 = sub_28082( uParam1 );
        break;
        case 11:
        bVar8 = sub_28221( uParam1 );
        break;
        case 12:
        bVar8 = sub_28520( uParam1 );
        break;
        case 13:
        bVar8 = sub_28748( uParam1 );
        break;
        case 14:
        bVar8 = sub_29035( uParam1 );
        break;
        case 15:
        bVar8 = sub_29317( uParam1 );
        break;
        case 16:
        bVar8 = sub_29599( uParam1 );
        break;
        case 17:
        bVar8 = sub_29800( uParam1 );
        break;
        case 18:
        bVar8 = sub_29873( uParam1 );
        break;
        case 19:
        bVar8 = sub_30087( uParam1 );
        break;
        case 20:
        bVar8 = sub_30340( uParam1 );
        break;
        case 21:
        bVar8 = sub_30587( uParam1 );
        break;
        case 22:
        bVar8 = sub_30788( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1557( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_24166( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_31111( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_24860(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_446( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_446( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_446( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_446( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_446( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_446( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_446( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_446( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_446( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_446( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_446( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_446( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_446( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_446( iVar3, 0, 3, 1, 0, 0 );
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
        sub_446( iVar3, 0, sub_25456(), sub_25592(), 0, 0 );
        break;
        default:
        sub_25751( "Friend 1", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Friend 1", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25456()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1557( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

int sub_25592()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1557( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_25751(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_25843(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_446( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_25751( "Contact 2", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 2", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26069(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_446( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_25751( "Girl 3", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Girl 3", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26219(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_446( iVar3, 0, sub_25456(), sub_25592(), 0, 0 );
        break;
        default:
        sub_25751( "Friend 4", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Friend 4", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26497(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_446( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_446( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_446( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_446( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_25751( "Contact 5", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 5", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26800(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_25751( "Contact 7", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 7", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26999(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_446( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_25751( "Contact 7b", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 7b", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27225(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_446( iVar3, 0, sub_25456(), sub_25592(), 0, 0 );
        break;
        default:
        sub_25751( "Friend 8", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Friend 8", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27460(unknown uParam0)
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
        sub_446( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_446( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_446( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_446( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_446( iVar3, 0, sub_25456(), sub_25592(), 0, 0 );
        break;
        default:
        sub_25751( "Friend 9", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Friend 9", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27835(unknown uParam0)
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
        sub_446( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_446( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_446( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_25751( "Contact 10", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_25751( "Contact 10", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28082(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_25751( "Girl 11", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Girl 11", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28221(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_446( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_446( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_446( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_446( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_446( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_25751( "Contact 12", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 12", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28520(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_446( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_25751( "Contact 13", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 13", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28748(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_446( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_446( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_446( iVar3, 0, sub_25456(), sub_25592(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_25751( "Friend 15", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Friend 15", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29035(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_446( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_446( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_446( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_25751( "Contact 16", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 16", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29317(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_446( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_446( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_446( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_25751( "Contact 18", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 18", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29599(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_25751( "Contact 19", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 19", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29800(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_25751( "Girl 20", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29873(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_25751( "Contact 21", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 21", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30087(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_446( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_446( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_25751( "Contact 22", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 22", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30340(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_446( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_446( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_446( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_25751( "Contact 24", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 24", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30587(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_446( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_446( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_446( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_25751( "Contact 25", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25751( "Contact 25", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30788(unknown uParam0)
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
        sub_446( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_25751( "Girl 26", 1 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_25751( "Girl 26", 0 );
        sub_446( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_31111(int iParam0, int iParam1)
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
    if (sub_31159( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_31890( iParam1 );
    }
    return;
}

int sub_31159(int iParam0, int iParam1)
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
            sub_31299( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_31299(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_31481( 0 );
    return;
}

void sub_31481(boolean bParam0)
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
        sub_31736();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_31736()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_31890(int iParam0)
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
        sub_32223( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_32223( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_32223( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_32223( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_32223( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_32223( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_32223( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_32223( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_32223( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_32223( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_32223( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_32223( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_32223( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_32223( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_32223( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_32223( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_32223( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_32223( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_32223( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_32223(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_32933(unknown uParam0, unknown uParam1)
{
    sub_32952( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_32952(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_33363()
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

int sub_33448(int iParam0, int iParam1)
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

void sub_33505(unknown uParam0)
{
    sub_33514();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_33514()
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

void sub_33640(unknown uParam0)
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

void sub_33748()
{
    sub_33757();
    return;
}

void sub_33757()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_33836()
{
    sub_33757();
    return;
}

void sub_33876()
{
    sub_33757();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_33927()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_33949();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_33949()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_34088(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U15946[uParam0]._fU168._fU12[uParam1] = 1;
    g_U15946[uParam0]._fU168._fU0 = 1;
    return sub_34141( uParam0, uParam2 );
}

int sub_34141(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (g_U15946[uParam0]._fU168._fU12[I] != 1)
        {
            sub_13804( "\n Player has NOT passed mission ", I );
            return 0;
        }
        else
        {
            sub_13804( "\n Player has passed mission ", I );
        }
    }
    return 1;
}

