void main()
{
    int I;
    int iVar3;
    int iVar4;
    int iVar5;
    vector[21] vVar6;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown[21] uVar70;
    int[21] iVar92;
    int iVar114;
    boolean bVar115;
    int iVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    int iVar125;
    int iVar126;
    unknown uVar127;
    int iVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;

    l_U0 = 0;
    l_U1 = 0;
    l_U2 = 0;
    l_U3 = 0;
    l_U106 = 0;
    l_U107 = 1;
    l_U108 = 3;
    l_U110 = 0;
    l_U127 = -1;
    l_U131 = 0;
    l_U132 = 1;
    l_U133 = 1;
    l_U141 = 150.00000000;
    l_U231 = 0;
    l_U232 = 150.00000000;
    l_U282 = 0;
    l_U500 = 0;
    l_U501 = 0;
    l_U502 = 0;
    l_U503 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 0;
    l_U579 = {736.55700000, 1566.80300000, 23.60300000};
    l_U582 = {753.48040000, 1495.74200000, 26.66980000};
    l_U585 = {1004.47700000, -500.46190000, 14.57480000};
    l_U589 = 0;
    l_U590 = 0;
    l_U591 = 0;
    l_U598 = 0;
    l_U600 = 0;
    l_U602 = 0;
    l_U603 = 0;
    l_U604 = 0;
    l_U609 = 0;
    l_U612 = 0;
    l_U613 = 5000;
    l_U614 = 5500;
    l_U615 = 4900;
    l_U616 = 1000;
    l_U617 = 9000;
    l_U621 = 23.00000000;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_341();
        sub_2451();
    }
    g_U9209 = 0;
    LOAD_ADDITIONAL_TEXT( "FAU3", 0 );
    LOAD_ADDITIONAL_TEXT( "F3AUD", 6 );
    sub_3774( "F3AUD" );
    sub_3893( 0, sub_3442(), "Niko", 0 );
    STOP_PED_SPEAKING( sub_3442(), 0 );
    g_U9346 = 0;
    # -sub_C1FFC0-0xc214c8( 0, ref l_U526 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U528 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U525 );
    if (g_U9893._fU24)
    {
        ENABLE_SCENE_STREAMING( 0 );
        if (NOT (IS_CHAR_INJURED( sub_3442() )))
        {
            SET_CHAR_COORDINATES( sub_3442(), 952.43660000, -278.24260000, 17.27470000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_3442(), "caberet_room" );
        }
        ADD_SCENARIO_BLOCKING_AREA( 968.31270000, -283.90590000, 22.53882000, 949.11410000, -261.56590000, 17.62815000 );
        sub_4278( 943.03310000, -302.90370000, 16.52007000, 973.01450000, -289.12760000, 27.41637000, 975.47160000, -308.08760000, 19.56150000, 270.00000000 );
        CLEAR_AREA( 957.83950000, -269.72870000, 17.12400000, 16.00000000, 1 );
        REQUEST_MODEL( -2088164056 );
        REQUEST_MODEL( -1788328884 );
        REQUEST_MODEL( 677687516 );
        REQUEST_MODEL( 1976502708 );
        while ((NOT (HAS_MODEL_LOADED( 1976502708 ))) || ((NOT (HAS_MODEL_LOADED( 677687516 ))) || ((NOT (HAS_MODEL_LOADED( -1788328884 ))) || (NOT (HAS_MODEL_LOADED( -2088164056 ))))))
        {
            WAIT( 0 );
        }
        array(ref vVar6, 21);
        array(ref uVar70, 21);
        array(ref iVar92, 21);
        vVar6[0] = {962.89980000, -268.77800000, 17.27250000};
        vVar6[1] = {963.63290000, -268.69590000, 17.27170000};
        vVar6[2] = {964.44070000, -268.72130000, 17.27060000};
        vVar6[3] = {962.53360000, -267.26210000, 17.27230000};
        vVar6[4] = {955.18920000, -276.72910000, 17.27380000};
        vVar6[5] = {954.27810000, -276.73610000, 17.27380000};
        vVar6[6] = {960.50130000, -277.02710000, 17.27380000};
        vVar6[7] = {951.16080000, -265.69240000, 17.26980000};
        vVar6[8] = {952.56170000, -265.92260000, 17.27370000};
        vVar6[9] = {964.36600000, -273.18890000, 17.27230000};
        vVar6[10] = {965.89750000, -273.03770000, 17.27130000};
        vVar6[11] = {967.12080000, -272.78050000, 17.27040000};
        vVar6[12] = {953.02050000, -268.94310000, 17.27350000};
        vVar6[13] = {950.93820000, -269.04220000, 17.27370000};
        vVar6[14] = {952.40760000, -272.99610000, 17.27380000};
        vVar6[15] = {952.08780000, -276.47220000, 17.27380000};
        vVar6[16] = {952.05520000, -275.01100000, 17.27380000};
        vVar6[17] = {954.44990000, -282.23710000, 18.90230000};
        vVar6[18] = {952.70530000, -282.23790000, 18.90230000};
        vVar6[19] = {952.98330000, -280.04290000, 18.90230000};
        vVar6[20] = {954.81380000, -279.69270000, 18.90230000};
        iVar92[0] = 0;
        iVar92[1] = 3;
        iVar92[2] = 1;
        iVar92[3] = 2;
        iVar92[4] = 0;
        iVar92[5] = 3;
        iVar92[6] = 1;
        iVar92[7] = 0;
        iVar92[8] = 3;
        iVar92[9] = 2;
        iVar92[10] = 1;
        iVar92[11] = 2;
        iVar92[12] = 1;
        iVar92[13] = 2;
        iVar92[14] = 0;
        iVar92[15] = 3;
        iVar92[16] = 1;
        iVar92[17] = 2;
        iVar92[18] = 1;
        iVar92[19] = 3;
        iVar92[20] = 0;
        bVar115 = false;
        GET_INTERIOR_AT_COORDS( 957.11970000, -269.92270000, 18.12400000, ref iVar114 );
        SETTIMERA( 0 );
        while (NOT bVar115)
        {
            GET_INTERIOR_AT_COORDS( 957.11970000, -269.92270000, 18.12400000, ref iVar114 );
            if (NOT (iVar114 == nil))
            {
                bVar115 = true;
            }
            if (TIMERA() > 5000)
            {
                bVar115 = true;
            }
            WAIT( 0 );
        }
        if (NOT (iVar114 == nil))
        {
            ACTIVATE_INTERIOR( iVar114, 1 );
        }
        for ( I = 0; I <= 20; I++ )
        {
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( vVar6[I]._fU0, vVar6[I]._fU4, vVar6[I]._fU8, 2.00000000, 746542373 ))
            {
                sub_5654( ref uVar70[I], vVar6[I]._fU0, vVar6[I]._fU4, vVar6[I]._fU8, l_U526, l_U525, iVar92[I] );
                SET_ROOM_FOR_CHAR_BY_NAME( uVar70[I], "caberet_room" );
                SET_CHAR_IN_CUTSCENE( uVar70[I], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar70[I] );
                TASK_SIT_DOWN_ON_NEAREST_OBJECT( uVar70[I], 0, 0, vVar6[I], 746542373, 0, -2, 1 );
            }
        }
        START_CUTSCENE_NOW( "Fau3_a" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "Fau3_a" );
        FLUSH_SCENARIO_BLOCKING_AREAS();
        for ( I = 0; I <= 20; I++ )
        {
            if (DOES_CHAR_EXIST( uVar70[I] ))
            {
                DELETE_CHAR( ref uVar70[I] );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2088164056 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1788328884 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 677687516 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1976502708 );
        ENABLE_SCENE_STREAMING( 1 );
    }
    WAIT( 1000 );
    g_U9346 = 1;
    REQUEST_MODEL( -1041692462 );
    REQUEST_MODEL( -1180674815 );
    REQUEST_MODEL( 1865532596 );
    REQUEST_MODEL( 800869680 );
    REQUEST_MODEL( 1159759556 );
    REQUEST_MODEL( -1345134469 );
    REQUEST_MODEL( -583281407 );
    LOAD_ALL_OBJECTS_NOW();
    sub_6275();
    REQUEST_ANIMS( "missfaustin3" );
    while ((NOT (HAS_MODEL_LOADED( 1159759556 ))) || ((NOT (HAS_MODEL_LOADED( -583281407 ))) || ((NOT (HAS_MODEL_LOADED( -1345134469 ))) || ((NOT (HAS_MODEL_LOADED( 800869680 ))) || ((NOT (HAS_MODEL_LOADED( 1865532596 ))) || ((NOT (HAS_MODEL_LOADED( -1180674815 ))) || (NOT (HAS_MODEL_LOADED( -1041692462 )))))))))
    {
        WAIT( 0 );
    }
    while (NOT (HAVE_ANIMS_LOADED( "missfaustin3" )))
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 2, ref l_U523 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U527 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U524 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U524, 0 );
    ADD_BLIP_FOR_COORD( l_U579._fU0, l_U579._fU4, l_U579._fU8, ref l_U507 );
    CHANGE_BLIP_COLOUR( l_U507, 5 );
    CHANGE_BLIP_DISPLAY( l_U507, 4 );
    SET_ROUTE( l_U507, 1 );
    sub_6679( ref l_U507, 736.48480000, 1554.94200000, 21.02260000, 180.97570000 );
    if (NOT (IS_CHAR_INJURED( sub_3442() )))
    {
        LOAD_SCENE( 957.22600000, -295.14840000, 18.56050000 );
        CLEAR_AREA( 957.22600000, -295.14840000, 18.56050000, 1.00000000, 1 );
        SET_CHAR_COORDINATES( sub_3442(), 957.22600000, -295.14840000, 18.56050000 );
        SET_CHAR_HEADING( sub_3442(), 180.00000000 );
        SET_CAM_BEHIND_PED( sub_3442() );
    }
    PRINT( "FG_TASK1", 7500, 3 );
    l_U500 = 4;
    if (NOT (IS_CHAR_DEAD( sub_3442() )))
    {
        SET_PLAYER_CONTROL( sub_3496(), 1 );
    }
    ADD_SCENARIO_BLOCKING_AREA( 760.68440000, 1501.79400000, 21.95042000, 676.10980000, 1476.19200000, 42.48416000 );
    sub_6958();
    DO_SCREEN_FADE_IN( 1000 );
    while (true)
    {
        if ((NOT l_U595) AND (NOT l_U594))
        {
            switch (l_U500)
            {
                case 4:
                sub_7158();
                if (NOT (IS_CHAR_INJURED( sub_3442() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), l_U579._fU0, l_U579._fU4, l_U579._fU8, 400.00000000, 400.00000000, 100.00000000, 0 ))
                    {
                        if (sub_11972( 1, 1 ))
                        {
                            sub_12262();
                            SWITCH_RANDOM_TRAINS( 0 );
                            DELETE_ALL_TRAINS();
                            GET_GAME_TIMER( ref iVar116 );
                            l_U606 = iVar116 + 400000;
                            l_U500 = 5;
                            GET_GAME_TIMER( ref iVar5 );
                            iVar5 += 3000;
                        }
                    }
                    LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), l_U579._fU0, l_U579._fU4, l_U579._fU8, 2.50000000, 2.50000000, 2.50000000, 1 );
                }
                break;
                case 5:
                sub_12500();
                sub_7158();
                if (IS_CHAR_IN_AREA_3D( sub_3442(), 827.43120000, 1467.29200000, 36.79361000, 649.16860000, 1526.64800000, 18.94337000, 0 ))
                {
                    CREATE_CHAR( 7, 1865532596, l_U582._fU0, l_U582._fU4, l_U582._fU8, ref l_U535, 1 );
                    SET_CHAR_AS_ENEMY( l_U535, 1 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U535 );
                    SET_CHAR_DECISION_MAKER( l_U535, l_U526 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U535, 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U535, 4 );
                    SET_PED_DIES_WHEN_INJURED( l_U535, 1 );
                    UNLOCK_RAGDOLL( l_U535, 0 );
                    sub_3893( 1, l_U535, "Lenny", 0 );
                    sub_13090();
                    SET_ROUTE( l_U508, 1 );
                    CREATE_CHAR( 7, -1180674815, 752.08900000, 1496.88600000, 26.66980000, ref l_U534, 1 );
                    SET_CHAR_KEEP_TASK( l_U534, 1 );
                    SET_CHAR_AS_ENEMY( l_U534, 1 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U534 );
                    SET_CHAR_HEALTH( l_U534, 200 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U534, 4 );
                    GIVE_WEAPON_TO_CHAR( l_U534, 12, 100, 0 );
                    SET_CHAR_DECISION_MAKER( l_U534, l_U526 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U534, 1 );
                    sub_3893( 2, l_U534, "Lennys_guard", 0 );
                    OPEN_SEQUENCE_TASK( ref uVar118 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U534 );
                    TASK_STAND_STILL( 0, -1 );
                    CLOSE_SEQUENCE_TASK( uVar118 );
                    OPEN_SEQUENCE_TASK( ref uVar117 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U535 );
                    TASK_STAND_STILL( 0, -1 );
                    CLOSE_SEQUENCE_TASK( uVar117 );
                    TASK_PERFORM_SEQUENCE( l_U534, uVar117 );
                    CLEAR_SEQUENCE_TASK( uVar117 );
                    TASK_PERFORM_SEQUENCE( l_U535, uVar118 );
                    CLEAR_SEQUENCE_TASK( uVar118 );
                    CREATE_CAR( -583281407, 734.65240000, 1454.38900000, 13.13530000, ref l_U512, 1 );
                    SET_VEH_HAS_STRONG_AXLES( l_U512, 1 );
                    SET_CAR_HEADING( l_U512, 360.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U512 );
                    CREATE_CAR( -1041692462, 746.39430000, 1440.17900000, 13.57060000, ref l_U510, 1 );
                    LOCK_CAR_DOORS( l_U510, 3 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U510 );
                    if (NOT (IS_VEHICLE_EXTRA_TURNED_ON( l_U510, 2 )))
                    {
                        TURN_OFF_VEHICLE_EXTRA( l_U510, 2, 0 );
                    }
                    if (NOT (IS_VEHICLE_EXTRA_TURNED_ON( l_U510, 3 )))
                    {
                        TURN_OFF_VEHICLE_EXTRA( l_U510, 3, 0 );
                    }
                    CREATE_CAR( -1041692462, 724.53120000, 1545.70000000, 20.57830000, ref l_U511, 1 );
                    LOCK_CAR_DOORS( l_U511, 3 );
                    SET_CAR_HEADING( l_U511, 270.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U511 );
                    if (NOT (IS_VEHICLE_EXTRA_TURNED_ON( l_U511, 2 )))
                    {
                        TURN_OFF_VEHICLE_EXTRA( l_U511, 2, 0 );
                    }
                    if (NOT (IS_VEHICLE_EXTRA_TURNED_ON( l_U511, 3 )))
                    {
                        TURN_OFF_VEHICLE_EXTRA( l_U511, 3, 0 );
                    }
                    SET_CAR_ON_GROUND_PROPERLY( l_U510 );
                    SET_CAR_HEADING( l_U510, 180.00000000 );
                    while (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_RANDOM_CHAR( 715.34120000, 1496.92000000, 26.66980000, ref l_U536[0] );
                    CREATE_RANDOM_CHAR( 713.13040000, 1496.71400000, 26.66980000, ref l_U536[1] );
                    CREATE_RANDOM_CHAR( 728.17950000, 1495.92300000, 26.66980000, ref l_U536[2] );
                    CREATE_RANDOM_CHAR( 708.49330000, 1499.44300000, 26.66980000, ref l_U536[3] );
                    CREATE_RANDOM_CHAR( 703.25980000, 1498.29100000, 26.66980000, ref l_U536[4] );
                    CREATE_RANDOM_CHAR( 694.76170000, 1499.07100000, 26.66980000, ref l_U536[5] );
                    CREATE_RANDOM_CHAR( 696.62530000, 1497.44000000, 26.66980000, ref l_U536[6] );
                    CREATE_RANDOM_CHAR( 729.95760000, 1496.34100000, 26.66980000, ref l_U536[7] );
                    CREATE_RANDOM_CHAR( 740.64580000, 1503.51600000, 27.64590000, ref l_U536[8] );
                    CREATE_RANDOM_CHAR( 736.99110000, 1499.24100000, 26.66980000, ref l_U536[9] );
                    for ( I = 0; I <= 9; I++ )
                    {
                        SET_CHAR_HEADING( l_U536[I], 208.00000000 );
                        REMOVE_ALL_CHAR_WEAPONS( l_U536[I] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U536[I] );
                    }
                    CREATE_RANDOM_CHAR( 689.11360000, 1479.71000000, 26.66980000, ref l_U536[10] );
                    CREATE_RANDOM_CHAR( 697.39330000, 1479.74400000, 26.66980000, ref l_U536[11] );
                    CREATE_RANDOM_CHAR( 700.38540000, 1479.92400000, 26.66980000, ref l_U536[12] );
                    CREATE_RANDOM_CHAR( 710.18350000, 1477.00300000, 26.66980000, ref l_U536[13] );
                    CREATE_RANDOM_CHAR( 714.00270000, 1478.32000000, 26.66980000, ref l_U536[14] );
                    CREATE_RANDOM_CHAR( 720.16200000, 1479.85700000, 26.66980000, ref l_U536[15] );
                    CREATE_RANDOM_CHAR( 727.17370000, 1479.63800000, 26.66980000, ref l_U536[16] );
                    CREATE_RANDOM_CHAR( 747.96090000, 1477.88500000, 26.66980000, ref l_U536[17] );
                    for ( I = 10; I <= 17; I++ )
                    {
                        SET_CHAR_HEADING( l_U536[I], 30.00000000 );
                        REMOVE_ALL_CHAR_WEAPONS( l_U536[I] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U536[I] );
                    }
                    for ( I = 0; I <= 17; I++ )
                    {
                        SET_COMBAT_DECISION_MAKER( l_U536[I], l_U525 );
                        SET_CHAR_DECISION_MAKER( l_U536[I], l_U526 );
                        SET_CHAR_NEVER_TARGETTED( l_U536[I], 1 );
                    }
                    CREATE_MISSION_TRAIN( 12, 726.49210000, 1483.37100000, 27.27081000, 1, ref l_U514 );
                    SET_TRAIN_SPEED( l_U514, 0.00000000 );
                    SET_TRAIN_CRUISE_SPEED( l_U514, 0.00000000 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -1041692462 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -1180674815 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1865532596 );
                    l_U589 = 1;
                    l_U500 = 6;
                }
                if (NOT (IS_CHAR_INJURED( sub_3442() )))
                {
                    GET_GAME_TIMER( ref I );
                    if ((NOT (IS_CHAR_IN_AREA_3D( sub_3442(), 742.47970000, 1480.85600000, 33.12792000, 751.84770000, 1465.30800000, 22.15726000, 0 ))) AND (I > l_U606))
                    {
                        l_U505 = 2;
                        l_U594 = 1;
                    }
                }
                break;
                case 6:
                sub_7158();
                sub_12500();
                if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND ((NOT (IS_CHAR_INJURED( l_U534 ))) AND (NOT (IS_CHAR_INJURED( sub_3442() )))))
                {
                    if (((NOT (IS_CHAR_IN_FLYING_VEHICLE( sub_3442() ))) AND (IS_CHAR_IN_AREA_3D( sub_3442(), 722.44640000, 1507.01200000, 29.37398000, 760.81520000, 1493.95400000, 35.09574000, 0 ))) || ((NOT (IS_CHAR_IN_FLYING_VEHICLE( sub_3442() ))) AND (IS_CHAR_IN_AREA_3D( sub_3442(), 730.23310000, 1503.98900000, 25.91768000, 737.45080000, 1500.71500000, 35.13896000, 0 ))))
                    {
                        GET_GAME_TIMER( ref iVar5 );
                        iVar5 += 2000;
                        if (l_U502 != 3)
                        {
                            sub_15096( 4 );
                            l_U502 = 2;
                        }
                        SET_WANTED_MULTIPLIER( 0.10000000 );
                        CLEAR_AREA( 734.61910000, 1489.15600000, 25.80580000, 10.00000000, 1 );
                        CLEAR_AREA( 715.04640000, 1488.65600000, 26.06980000, 10.00000000, 1 );
                        CLEAR_AREA( 695.08440000, 1488.59400000, 26.06980000, 10.00000000, 1 );
                        CLEAR_AREA( 684.93000000, 1488.64800000, 26.06980000, 10.00000000, 1 );
                        CLEAR_AREA( 761.92720000, 1489.77100000, 25.84340000, 10.00000000, 1 );
                        CLEAR_AREA( 761.87950000, 1489.77400000, 25.84280000, 10.00000000, 1 );
                        for ( I = 0; I <= 17; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U536[I] )))
                            {
                                SET_CHAR_DECISION_MAKER( l_U536[I], l_U527 );
                            }
                        }
                        l_U500 = 15;
                        l_U532 = 0;
                    }
                    if (((IS_CHAR_IN_AREA_3D( sub_3442(), 800.55720000, 1474.23300000, 27.15871000, 675.15160000, 1506.52900000, 41.40501000, 0 )) AND (IS_CHAR_IN_FLYING_VEHICLE( sub_3442() ))) || (((IS_CHAR_IN_AREA_3D( sub_3442(), 742.47970000, 1480.85600000, 33.12792000, 751.84770000, 1465.30800000, 22.15726000, 0 )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3496(), l_U535 ))) || (((IS_CHAR_IN_AREA_3D( sub_3442(), 742.47970000, 1480.85600000, 33.12792000, 751.84770000, 1465.30800000, 22.15726000, 0 )) AND (IS_PLAYER_TARGETTING_CHAR( sub_3496(), l_U535 ))) || (((IS_CHAR_IN_AREA_3D( sub_3442(), 742.47970000, 1480.85600000, 33.12792000, 751.84770000, 1465.30800000, 22.15726000, 0 )) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U535, sub_3442(), 0 ))) || (((IS_CHAR_IN_AREA_3D( sub_3442(), 742.47970000, 1480.85600000, 33.12792000, 751.84770000, 1465.30800000, 22.15726000, 0 )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3496(), l_U534 ))) || (((IS_CHAR_IN_AREA_3D( sub_3442(), 742.47970000, 1480.85600000, 33.12792000, 751.84770000, 1465.30800000, 22.15726000, 0 )) AND (IS_PLAYER_TARGETTING_CHAR( sub_3496(), l_U534 ))) || (((IS_CHAR_IN_AREA_3D( sub_3442(), 742.47970000, 1480.85600000, 33.12792000, 751.84770000, 1465.30800000, 22.15726000, 0 )) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U534, sub_3442(), 0 ))) || ((IS_CHAR_IN_AREA_3D( sub_3442(), 747.15730000, 1470.89600000, 25.84471000, 723.70650000, 1487.56300000, 35.09114000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3442(), 730.28410000, 1475.62200000, 25.78478000, 763.50710000, 1486.29200000, 31.29222000, 0 ))))))))))
                    {
                        GET_GAME_TIMER( ref iVar5 );
                        iVar5 += 2000;
                        CLEAR_AREA( 734.61910000, 1489.15600000, 25.80580000, 10.00000000, 1 );
                        CLEAR_AREA( 715.04640000, 1488.65600000, 26.06980000, 10.00000000, 1 );
                        CLEAR_AREA( 695.08440000, 1488.59400000, 26.06980000, 10.00000000, 1 );
                        CLEAR_AREA( 684.93000000, 1488.64800000, 26.06980000, 10.00000000, 1 );
                        CLEAR_AREA( 761.92720000, 1489.77100000, 25.84340000, 10.00000000, 1 );
                        CLEAR_AREA( 761.87950000, 1489.77400000, 25.84280000, 10.00000000, 1 );
                        if (l_U502 != 3)
                        {
                            sub_15096( 4 );
                            l_U502 = 2;
                        }
                        for ( I = 0; I <= 17; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U536[I] )))
                            {
                                SET_CHAR_DECISION_MAKER( l_U536[I], l_U527 );
                            }
                        }
                        SET_WANTED_MULTIPLIER( 0.10000000 );
                        l_U500 = 16;
                        l_U533 = 0;
                    }
                    if (NOT (IS_CHAR_INJURED( sub_3442() )))
                    {
                        GET_GAME_TIMER( ref I );
                        if ((NOT (IS_CHAR_IN_AREA_3D( sub_3442(), 742.47970000, 1480.85600000, 33.12792000, 751.84770000, 1465.30800000, 22.15726000, 0 ))) AND (I > l_U606))
                        {
                            l_U505 = 2;
                            l_U594 = 1;
                        }
                    }
                }
                if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (NOT (IS_CHAR_INJURED( sub_3442() ))))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U535, sub_3442(), 0 ))
                    {
                        if ((NOT (IS_CHAR_ON_FIRE( l_U535 ))) AND (IS_CHAR_IN_AREA_3D( sub_3442(), 740.34760000, 1478.01400000, 31.01015000, 752.28430000, 1463.83100000, 21.45714000, 0 )))
                        {
                            GET_GAME_TIMER( ref iVar5 );
                            iVar5 += 2000;
                            CLEAR_AREA( 734.61910000, 1489.15600000, 25.80580000, 10.00000000, 1 );
                            CLEAR_AREA( 715.04640000, 1488.65600000, 26.06980000, 10.00000000, 1 );
                            CLEAR_AREA( 695.08440000, 1488.59400000, 26.06980000, 10.00000000, 1 );
                            CLEAR_AREA( 684.93000000, 1488.64800000, 26.06980000, 10.00000000, 1 );
                            CLEAR_AREA( 761.92720000, 1489.77100000, 25.84340000, 10.00000000, 1 );
                            CLEAR_AREA( 761.87950000, 1489.77400000, 25.84280000, 10.00000000, 1 );
                            if (l_U502 != 3)
                            {
                                sub_15096( 4 );
                                l_U502 = 2;
                            }
                            for ( I = 0; I <= 17; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( l_U536[I] )))
                                {
                                    SET_CHAR_DECISION_MAKER( l_U536[I], l_U527 );
                                }
                            }
                            SET_WANTED_MULTIPLIER( 0.10000000 );
                            l_U500 = 16;
                            l_U533 = 0;
                        }
                        else
                        {
                            sub_13090();
                            l_U500 = 11;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U534 )))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U534, sub_3442(), 0 ))
                        {
                            if ((NOT (IS_CHAR_ON_FIRE( l_U534 ))) AND (IS_CHAR_IN_AREA_3D( sub_3442(), 740.34760000, 1478.01400000, 31.01015000, 752.28430000, 1463.83100000, 21.45714000, 0 )))
                            {
                                GET_GAME_TIMER( ref iVar5 );
                                iVar5 += 2000;
                                CLEAR_AREA( 734.61910000, 1489.15600000, 25.80580000, 10.00000000, 1 );
                                CLEAR_AREA( 715.04640000, 1488.65600000, 26.06980000, 10.00000000, 1 );
                                CLEAR_AREA( 695.08440000, 1488.59400000, 26.06980000, 10.00000000, 1 );
                                CLEAR_AREA( 684.93000000, 1488.64800000, 26.06980000, 10.00000000, 1 );
                                CLEAR_AREA( 761.92720000, 1489.77100000, 25.84340000, 10.00000000, 1 );
                                CLEAR_AREA( 761.87950000, 1489.77400000, 25.84280000, 10.00000000, 1 );
                                if (l_U502 != 3)
                                {
                                    sub_15096( 4 );
                                    l_U502 = 2;
                                }
                                for ( I = 0; I <= 17; I++ )
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U536[I] )))
                                    {
                                        SET_CHAR_DECISION_MAKER( l_U536[I], l_U527 );
                                    }
                                }
                                SET_WANTED_MULTIPLIER( 0.10000000 );
                                l_U500 = 16;
                                l_U533 = 0;
                            }
                            else
                            {
                                sub_13090();
                                l_U500 = 11;
                            }
                        }
                    }
                    else if ((NOT (IS_CHAR_ON_FIRE( l_U534 ))) AND (IS_CHAR_IN_AREA_3D( sub_3442(), 740.34760000, 1478.01400000, 31.01015000, 752.28430000, 1463.83100000, 21.45714000, 0 )))
                    {
                        GET_GAME_TIMER( ref iVar5 );
                        iVar5 += 2000;
                        CLEAR_AREA( 734.61910000, 1489.15600000, 25.80580000, 10.00000000, 1 );
                        CLEAR_AREA( 715.04640000, 1488.65600000, 26.06980000, 10.00000000, 1 );
                        CLEAR_AREA( 695.08440000, 1488.59400000, 26.06980000, 10.00000000, 1 );
                        CLEAR_AREA( 684.93000000, 1488.64800000, 26.06980000, 10.00000000, 1 );
                        CLEAR_AREA( 761.92720000, 1489.77100000, 25.84340000, 10.00000000, 1 );
                        CLEAR_AREA( 761.87950000, 1489.77400000, 25.84280000, 10.00000000, 1 );
                        if (l_U502 != 3)
                        {
                            sub_15096( 4 );
                            l_U502 = 2;
                        }
                        for ( I = 0; I <= 17; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U536[I] )))
                            {
                                SET_CHAR_DECISION_MAKER( l_U536[I], l_U527 );
                            }
                        }
                        SET_WANTED_MULTIPLIER( 0.10000000 );
                        if (DOES_CHAR_EXIST( l_U534 ))
                        {
                            DELETE_CHAR( ref l_U534 );
                        }
                        if (NOT (DOES_CHAR_EXIST( l_U534 )))
                        {
                            CREATE_CHAR( 7, -1180674815, 752.08900000, 1496.88600000, 26.66980000, ref l_U534, 1 );
                            SET_CHAR_KEEP_TASK( l_U534, 1 );
                            SET_CHAR_AS_ENEMY( l_U534, 1 );
                            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U534 );
                            SET_CHAR_HEALTH( l_U534, 200 );
                            SET_CHAR_RELATIONSHIP_GROUP( l_U534, 4 );
                            GIVE_WEAPON_TO_CHAR( l_U534, 12, 100, 0 );
                            SET_CHAR_DECISION_MAKER( l_U534, l_U526 );
                            SET_CHAR_IS_TARGET_PRIORITY( l_U534, 1 );
                            sub_3893( 2, l_U534, "Lennys_guard", 0 );
                        }
                        l_U500 = 16;
                        l_U533 = 0;
                    }
                    else
                    {
                        sub_13090();
                        l_U500 = 11;
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U534 ))) AND (NOT (IS_CHAR_INJURED( l_U535 ))))
                    {
                        if (((IS_PLAYER_TARGETTING_CHAR( sub_3496(), l_U535 )) || (IS_PLAYER_TARGETTING_CHAR( sub_3496(), l_U534 ))) AND (IS_CHAR_IN_AREA_3D( sub_3442(), 801.45410000, 1478.53000000, 34.91780000, 683.39440000, 1500.31700000, 26.67951000, 0 )))
                        {
                            sub_13090();
                            l_U500 = 11;
                        }
                        if (((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3496(), l_U535 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3496(), l_U534 ))) AND (IS_CHAR_IN_AREA_3D( sub_3442(), 801.45410000, 1478.53000000, 34.91780000, 683.39440000, 1500.31700000, 26.67951000, 0 )))
                        {
                            sub_13090();
                            l_U500 = 11;
                        }
                    }
                }
                break;
                case 15:
                GET_GAME_TIMER( ref iVar4 );
                if ((iVar4 > iVar5) AND (sub_18143()))
                {
                    sub_18254( 1000 );
                    if (sub_3110( l_U561 ))
                    {
                        sub_3292( ref l_U561, 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( sub_3442() )))
                    {
                        SET_CHAR_COORDINATES( sub_3442(), 739.32650000, 1496.20100000, 26.66980000 );
                        SET_CHAR_HEADING( sub_3442(), 280.00000000 );
                        BLOCK_CHAR_AMBIENT_ANIMS( sub_3442(), 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( sub_3442(), 0 );
                        if (NOT (IS_CHAR_INJURED( l_U535 )))
                        {
                            TASK_LOOK_AT_CHAR( sub_3442(), l_U535, 0, 0 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U535 )))
                    {
                        if (NOT (IS_CHAR_INJURED( sub_3442() )))
                        {
                            TASK_LOOK_AT_CHAR( l_U535, sub_3442(), 0, 0 );
                        }
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U535 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U534 )))
                    {
                        if (NOT (IS_CHAR_INJURED( sub_3442() )))
                        {
                            TASK_LOOK_AT_CHAR( l_U534, sub_3442(), 0, 0 );
                        }
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U534 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U516 ))
                    {
                        DELETE_MISSION_TRAIN( l_U516 );
                    }
                    sub_18694( ref l_U529, ref l_U530, ref l_U531 );
                    sub_18859( ref l_U506, 1, 1, 1 );
                    CLEAR_PRINTS();
                    PRINT( "FG_TASK3", 7500, 3 );
                    sub_19022();
                    sub_13090();
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -583281407 );
                    WAIT( 500 );
                    DO_SCREEN_FADE_IN( 1000 );
                    l_U500 = 7;
                }
                switch (l_U532)
                {
                    case 0:
                    if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (NOT (IS_CHAR_INJURED( sub_3442() ))))
                    {
                        SET_PLAYER_CONTROL( sub_3496(), 0 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3442() );
                        if (IS_CHAR_IN_ANY_CAR( sub_3442() ))
                        {
                            GET_CAR_CHAR_IS_USING( sub_3442(), ref uVar119 );
                            WARP_CHAR_FROM_CAR_TO_COORD( sub_3442(), 739.32650000, 1496.20100000, 26.66980000 );
                            DELETE_CAR( ref uVar119 );
                        }
                        SET_CHAR_COORDINATES( sub_3442(), 734.04540000, 1502.11000000, 26.64590000 );
                        SET_CHAR_HEADING( sub_3442(), 180.00000000 );
                        BLOCK_CHAR_AMBIENT_ANIMS( sub_3442(), 1 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( sub_3442(), 1 );
                        OPEN_SEQUENCE_TASK( ref uVar120 );
                        TASK_FLUSH_ROUTE();
                        TASK_EXTEND_ROUTE( 733.62720000, 1499.87400000, 27.66980000 );
                        TASK_EXTEND_ROUTE( 736.11380000, 1497.24600000, 27.66980000 );
                        TASK_EXTEND_ROUTE( 740.21280000, 1496.41100000, 26.66980000 );
                        TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U535 );
                        CLOSE_SEQUENCE_TASK( uVar120 );
                        TASK_PERFORM_SEQUENCE( sub_3442(), uVar120 );
                        CLEAR_SEQUENCE_TASK( uVar120 );
                        sub_19544( ref l_U506, 1 );
                        CREATE_CAM( 14, ref l_U529 );
                        CREATE_CAM( 14, ref l_U530 );
                        SET_CAM_POS( l_U529, 730.61680000, 1499.72300000, 27.84770000 );
                        SET_CAM_ROT( l_U529, -3.00326400, 0.00000000, -89.74016000 );
                        SET_CAM_FOV( l_U529, 39.30002000 );
                        SET_CAM_POS( l_U530, 738.68670000, 1495.91500000, 28.25023000 );
                        SET_CAM_ROT( l_U530, -2.06665300, 0.00000000, -84.11975000 );
                        SET_CAM_FOV( l_U530, 26.10005000 );
                        SET_CAM_ACTIVE( l_U529, 1 );
                        SET_CAM_PROPAGATE( l_U529, 1 );
                        CREATE_CAM( 3, ref l_U531 );
                        SET_CAM_INTERP_STYLE_CORE( l_U531, l_U529, l_U530, 8000, 0 );
                        SET_CAM_ACTIVE( l_U531, 1 );
                        SET_CAM_PROPAGATE( l_U531, 1 );
                        CREATE_MISSION_TRAIN( 1, 807.97120000, 1491.45600000, 27.75997000, 1, ref l_U516 );
                        SET_TRAIN_CRUISE_SPEED( l_U516, 12.00000000 );
                        SET_TRAIN_SPEED( l_U516, 12.00000000 );
                        GET_GAME_TIMER( ref iVar3 );
                        iVar3 += l_U613;
                        l_U532 = 2;
                    }
                    break;
                    case 2:
                    GET_GAME_TIMER( ref iVar4 );
                    if ((iVar4 > (iVar3 - 3000)) AND (NOT l_U610))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (NOT (IS_CHAR_INJURED( sub_3442() ))))
                        {
                            TASK_LOOK_AT_CHAR( sub_3442(), l_U535, 30000, 0 );
                            l_U610 = 1;
                        }
                    }
                    if (iVar4 > iVar3)
                    {
                        if ((NOT (IS_CHAR_INJURED( sub_3442() ))) AND ((NOT (IS_CHAR_INJURED( l_U534 ))) AND (NOT (IS_CHAR_INJURED( l_U535 )))))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U535, sub_3442() );
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U534, sub_3442() );
                        }
                        sub_20236( "F3_CONF1A", ref l_U561, 7, 1 );
                        l_U532 = 4;
                    }
                    break;
                    case 4:
                    if (NOT (sub_3110( l_U561 )))
                    {
                        if ((NOT (IS_CHAR_INJURED( sub_3442() ))) AND ((NOT (IS_CHAR_INJURED( l_U534 ))) AND (NOT (IS_CHAR_INJURED( l_U535 )))))
                        {
                            sub_18694( ref l_U529, ref l_U530, ref l_U531 );
                            CREATE_CAM( 14, ref l_U529 );
                            CREATE_CAM( 14, ref l_U530 );
                            SET_CAM_POS( l_U529, 756.56410000, 1496.17800000, 28.10187000 );
                            SET_CAM_ROT( l_U529, -1.60827800, -0.00000000, 97.55519000 );
                            SET_CAM_NEAR_DOF( l_U529, 8.00000000 );
                            SET_CAM_FAR_DOF( l_U529, 30.00000000 );
                            SET_CAM_POS( l_U530, 757.34400000, 1496.45800000, 28.10187000 );
                            SET_CAM_ROT( l_U530, -1.60827800, 0.00000000, 93.54448000 );
                            SET_CAM_NEAR_DOF( l_U530, 8.00000000 );
                            SET_CAM_FAR_DOF( l_U530, 30.00000000 );
                            SET_CAM_FOV( l_U529, 20.20000000 );
                            SET_CAM_FOV( l_U530, 20.20000000 );
                            CREATE_CAM( 3, ref l_U531 );
                            SET_CAM_INTERP_STYLE_CORE( l_U531, l_U529, l_U530, 5000, 0 );
                            SET_CAM_ACTIVE( l_U531, 1 );
                            SET_CAM_PROPAGATE( l_U531, 1 );
                            GET_GAME_TIMER( ref iVar3 );
                            sub_20236( "F3_LIKE", ref l_U561, 7, 1 );
                            GET_GAME_TIMER( ref iVar3 );
                            iVar3 += l_U615;
                            l_U532 = 6;
                        }
                    }
                    break;
                    case 6:
                    if (NOT l_U599)
                    {
                        GET_GAME_TIMER( ref iVar4 );
                        if (iVar4 > iVar3)
                        {
                            CREATE_MISSION_TRAIN( 10, 1006.58000000, 1629.37100000, 27.27081000, 1, ref l_U517 );
                            SET_TRAIN_SPEED( l_U517, l_U621 );
                            SET_TRAIN_CRUISE_SPEED( l_U517, l_U621 );
                            l_U599 = 1;
                        }
                    }
                    if (NOT (sub_3110( l_U561 )))
                    {
                        sub_18694( ref l_U529, ref l_U530, ref l_U531 );
                        CREATE_CAM( 14, ref l_U529 );
                        if (NOT (IS_CHAR_INJURED( sub_3442() )))
                        {
                            SET_CHAR_COORDINATES( sub_3442(), 739.63070000, 1496.06400000, 26.66980000 );
                            SET_CHAR_HEADING( sub_3442(), 267.69000000 );
                        }
                        if (GET_IS_WIDESCREEN())
                        {
                            SET_CAM_POS( l_U529, 738.56960000, 1496.80000000, 28.21387000 );
                            SET_CAM_ROT( l_U529, -1.68550800, -0.00000000, -105.31030000 );
                            SET_CAM_FOV( l_U529, 29.50000000 );
                            SET_CAM_NEAR_DOF( l_U529, 8.00000000 );
                            SET_CAM_FAR_DOF( l_U529, 30.00000000 );
                        }
                        else
                        {
                            SET_CAM_POS( l_U529, 738.56960000, 1496.80000000, 28.21387000 );
                            SET_CAM_ROT( l_U529, -1.68550800, -0.00000000, -107.60210000 );
                            SET_CAM_FOV( l_U529, 37.80002000 );
                            SET_CAM_NEAR_DOF( l_U529, 8.00000000 );
                            SET_CAM_FAR_DOF( l_U529, 30.00000000 );
                        }
                        SET_CAM_ACTIVE( l_U529, 1 );
                        SET_CAM_PROPAGATE( l_U529, 1 );
                        sub_20236( "F3_CONF1B", ref l_U561, 7, 1 );
                        l_U532 = 5;
                    }
                    break;
                    case 5:
                    if (NOT (sub_3110( l_U561 )))
                    {
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                        l_U532 = 7;
                    }
                    break;
                    case 7:
                    sub_18694( ref l_U529, ref l_U530, ref l_U531 );
                    sub_18859( ref l_U506, 1, 1, 1 );
                    sub_19022();
                    if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (NOT (IS_CHAR_INJURED( sub_3442() ))))
                    {
                        BLOCK_CHAR_AMBIENT_ANIMS( sub_3442(), 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( sub_3442(), 0 );
                        TASK_LOOK_AT_CHAR( sub_3442(), l_U535, 0, 0 );
                    }
                    CLEAR_PRINTS();
                    if (NOT (IS_CHAR_INJURED( l_U535 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_3442(), l_U535, 0, 0 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U517 ))
                    {
                        DELETE_MISSION_TRAIN( l_U517 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U516 ))
                    {
                        DELETE_MISSION_TRAIN( l_U516 );
                    }
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -583281407 );
                    sub_13090();
                    l_U602 = 0;
                    l_U500 = 7;
                    break;
                }
                break;
                case 14:
                CREATE_CHAR( 7, 1865532596, l_U582._fU0, l_U582._fU4, l_U582._fU8, ref l_U535, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U535 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U535, 0 );
                SET_CHAR_DECISION_MAKER( l_U535, l_U526 );
                UNLOCK_RAGDOLL( l_U535, 0 );
                sub_13090();
                SET_ROUTE( l_U508, 1 );
                CREATE_CHAR( 7, -1180674815, 753.33550000, 1496.82200000, 27.66980000, ref l_U534, 1 );
                SET_CHAR_KEEP_TASK( l_U534, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U534 );
                SET_CHAR_HEALTH( l_U534, 150 );
                GIVE_WEAPON_TO_CHAR( l_U534, 7, 100, 0 );
                SET_CHAR_DECISION_MAKER( l_U534, l_U526 );
                OPEN_SEQUENCE_TASK( ref uVar118 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U534 );
                TASK_STAND_STILL( 0, -1 );
                CLOSE_SEQUENCE_TASK( uVar118 );
                OPEN_SEQUENCE_TASK( ref uVar117 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U535 );
                TASK_STAND_STILL( 0, -1 );
                CLOSE_SEQUENCE_TASK( uVar117 );
                TASK_PERFORM_SEQUENCE( l_U534, uVar117 );
                CLEAR_SEQUENCE_TASK( uVar117 );
                TASK_PERFORM_SEQUENCE( l_U535, uVar118 );
                CLEAR_SEQUENCE_TASK( uVar118 );
                CREATE_CAR( -1041692462, 760.36950000, 1428.57000000, 13.04010000, ref l_U510, 1 );
                SET_CAR_HEADING( l_U510, 90.00000000 );
                if (NOT (IS_VEHICLE_EXTRA_TURNED_ON( l_U510, 2 )))
                {
                    TURN_OFF_VEHICLE_EXTRA( l_U510, 2, 0 );
                }
                if (NOT (IS_VEHICLE_EXTRA_TURNED_ON( l_U510, 3 )))
                {
                    TURN_OFF_VEHICLE_EXTRA( l_U510, 3, 0 );
                }
                CREATE_RANDOM_CHAR( 715.34120000, 1496.92000000, 26.66980000, ref l_U536[0] );
                CREATE_RANDOM_CHAR( 713.13040000, 1496.71400000, 26.66980000, ref l_U536[1] );
                CREATE_RANDOM_CHAR( 728.17950000, 1495.92300000, 26.66980000, ref l_U536[2] );
                CREATE_RANDOM_CHAR( 708.49330000, 1499.44300000, 26.66980000, ref l_U536[3] );
                CREATE_RANDOM_CHAR( 703.25980000, 1498.29100000, 26.66980000, ref l_U536[4] );
                CREATE_RANDOM_CHAR( 694.76170000, 1499.07100000, 26.66980000, ref l_U536[5] );
                CREATE_RANDOM_CHAR( 696.62530000, 1497.44000000, 26.66980000, ref l_U536[6] );
                CREATE_RANDOM_CHAR( 729.95760000, 1496.34100000, 26.66980000, ref l_U536[7] );
                CREATE_RANDOM_CHAR( 740.64580000, 1503.51600000, 27.64590000, ref l_U536[8] );
                CREATE_RANDOM_CHAR( 736.99110000, 1499.24100000, 26.66980000, ref l_U536[9] );
                for ( I = 0; I <= 9; I++ )
                {
                    SET_CHAR_HEADING( l_U536[I], 208.00000000 );
                    REMOVE_ALL_CHAR_WEAPONS( l_U536[I] );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U536[I] );
                }
                CREATE_RANDOM_CHAR( 689.11360000, 1479.71000000, 26.66980000, ref l_U536[10] );
                CREATE_RANDOM_CHAR( 697.39330000, 1479.74400000, 26.66980000, ref l_U536[11] );
                CREATE_RANDOM_CHAR( 700.38540000, 1479.92400000, 26.66980000, ref l_U536[12] );
                CREATE_RANDOM_CHAR( 710.18350000, 1477.00300000, 26.66980000, ref l_U536[13] );
                CREATE_RANDOM_CHAR( 714.00270000, 1478.32000000, 26.66980000, ref l_U536[14] );
                CREATE_RANDOM_CHAR( 720.16200000, 1479.85700000, 26.66980000, ref l_U536[15] );
                CREATE_RANDOM_CHAR( 727.17370000, 1479.63800000, 26.66980000, ref l_U536[16] );
                CREATE_RANDOM_CHAR( 747.96090000, 1477.88500000, 26.66980000, ref l_U536[17] );
                for ( I = 10; I <= 17; I++ )
                {
                    SET_CHAR_HEADING( l_U536[I], 30.00000000 );
                    REMOVE_ALL_CHAR_WEAPONS( l_U536[I] );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U536[I] );
                }
                for ( I = 0; I <= 17; I++ )
                {
                    SET_COMBAT_DECISION_MAKER( l_U536[I], l_U525 );
                    SET_CHAR_DECISION_MAKER( l_U536[I], l_U527 );
                    SET_CHAR_NEVER_TARGETTED( l_U536[I], 1 );
                }
                CREATE_MISSION_TRAIN( 12, 726.49210000, 1483.37100000, 27.27081000, 0, ref l_U514 );
                SET_TRAIN_SPEED( l_U514, 0.00000000 );
                SET_TRAIN_CRUISE_SPEED( l_U514, 0.00000000 );
                l_U589 = 1;
                l_U500 = 16;
                l_U533 = 0;
                break;
                case 16:
                GET_GAME_TIMER( ref iVar4 );
                if ((iVar4 > iVar5) AND (sub_18143()))
                {
                    if (sub_3110( l_U561 ))
                    {
                        sub_3292( ref l_U561, 0 );
                    }
                    sub_18254( 1000 );
                    if (NOT (IS_CHAR_INJURED( sub_3442() )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3442() );
                        SET_CHAR_COORDINATES( sub_3442(), 749.38690000, 1477.13800000, 26.66980000 );
                        SET_CHAR_HEADING( sub_3442(), 0.00000000 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U535 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U535 );
                    }
                    sub_13090();
                    if (NOT (IS_CHAR_INJURED( l_U534 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U534 );
                    }
                    CLEAR_AREA( 746.33840000, 1548.10400000, 19.98200000, 1.00000000, 1 );
                    CREATE_CAR( -583281407, 746.33840000, 1548.10400000, 19.98200000, ref l_U513, 1 );
                    SET_VEH_HAS_STRONG_AXLES( l_U513, 1 );
                    SET_CAR_HEADING( l_U513, 1.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U513 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -583281407 );
                    sub_18694( ref l_U529, ref l_U530, ref l_U531 );
                    sub_18859( ref l_U506, 1, 1, 1 );
                    sub_19022();
                    CLEAR_PRINTS();
                    PRINT( "FG_TASK3", 7500, 3 );
                    DO_SCREEN_FADE_IN( 1000 );
                    l_U500 = 8;
                }
                switch (l_U533)
                {
                    case 0:
                    SET_PLAYER_CONTROL( sub_3496(), 0 );
                    sub_18254( 250 );
                    CLEAR_AREA( 731.45630000, 1516.02200000, 20.14900000, 20.00000000, 1 );
                    CLEAR_AREA( 731.25460000, 1527.45900000, 16.92330000, 20.00000000, 1 );
                    if (IS_CHAR_IN_ANY_CAR( sub_3442() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_3442(), ref uVar121 );
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_3442(), 749.38690000, 1477.13800000, 26.66980000 );
                        DELETE_CAR( ref uVar121 );
                    }
                    if (NOT (IS_CHAR_INJURED( sub_3442() )))
                    {
                        if (IS_CHAR_IN_FLYING_VEHICLE( sub_3442() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3442(), ref uVar122 );
                            WARP_CHAR_FROM_CAR_TO_COORD( sub_3442(), 749.38690000, 1477.13800000, 26.66980000 );
                            if (DOES_VEHICLE_EXIST( uVar122 ))
                            {
                                DELETE_CAR( ref uVar122 );
                            }
                        }
                    }
                    if ((NOT (IS_CHAR_INJURED( sub_3442() ))) AND ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (NOT (IS_CHAR_INJURED( l_U534 )))))
                    {
                        SET_CHAR_COORDINATES( l_U534, 752.24140000, 1495.65400000, 26.67000000 );
                        SET_CHAR_COORDINATES( l_U535, 753.76610000, 1495.97000000, 26.66990000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U535, sub_3442() );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U534, sub_3442() );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (NOT (IS_CHAR_INJURED( sub_3442() ))))
                    {
                        SET_CHAR_COORDINATES( sub_3442(), 749.42110000, 1477.14200000, 26.66980000 );
                        SET_CHAR_HEADING( sub_3442(), 0.00000000 );
                        OPEN_SEQUENCE_TASK( ref uVar120 );
                        TASK_LOOK_AT_CHAR( 0, l_U535, 30000, 0 );
                        TASK_FLUSH_ROUTE();
                        TASK_EXTEND_ROUTE( 751.17550000, 1481.13400000, 26.66980000 );
                        TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                        CLOSE_SEQUENCE_TASK( uVar120 );
                        TASK_PERFORM_SEQUENCE( sub_3442(), uVar120 );
                        CLEAR_SEQUENCE_TASK( uVar120 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U536[17] )))
                    {
                        TASK_PLAY_ANIM( l_U536[17], "smoke_light_up", "missfaustin3", 8.00000000, 0, 0, 0, 0, -2 );
                    }
                    sub_19544( ref l_U506, 1 );
                    CREATE_CAM( 14, ref l_U529 );
                    CREATE_CAM( 14, ref l_U530 );
                    SET_CAM_POS( l_U529, 754.52620000, 1478.16800000, 27.59602000 );
                    SET_CAM_ROT( l_U529, 6.73890300, 0.00000000, 85.25568000 );
                    SET_CAM_FOV( l_U529, 45.00000000 );
                    SET_CAM_POS( l_U530, 753.59950000, 1477.14900000, 27.49057000 );
                    SET_CAM_ROT( l_U530, 0.33979000, 0.00000000, 14.89644000 );
                    SET_CAM_FOV( l_U530, 26.10005000 );
                    SET_CAM_ACTIVE( l_U529, 1 );
                    SET_CAM_PROPAGATE( l_U529, 1 );
                    sub_25063( 250 );
                    CREATE_CAM( 3, ref l_U531 );
                    SET_CAM_INTERP_STYLE_CORE( l_U531, l_U529, l_U530, 2700, 0 );
                    SET_CAM_ACTIVE( l_U531, 1 );
                    SET_CAM_PROPAGATE( l_U531, 1 );
                    GET_GAME_TIMER( ref iVar3 );
                    iVar3 += 3500;
                    l_U533 = 2;
                    break;
                    case 2:
                    GET_GAME_TIMER( ref iVar4 );
                    if (iVar4 > iVar3)
                    {
                        sub_20236( "F3_CONF2A", ref l_U561, 7, 1 );
                        if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (NOT (IS_CHAR_INJURED( sub_3442() ))))
                        {
                            SET_CHAR_COORDINATES( sub_3442(), 751.17550000, 1481.13400000, -101.00000000 );
                            SET_CHAR_HEADING( sub_3442(), 350.09490000 );
                        }
                        sub_18694( ref l_U529, ref l_U530, ref l_U531 );
                        CREATE_CAM( 14, ref l_U529 );
                        SET_CAM_POS( l_U529, 751.56000000, 1478.41300000, 28.02150000 );
                        SET_CAM_ROT( l_U529, 0.43637600, -0.00000000, -0.50555800 );
                        SET_CAM_FOV( l_U529, 21.60006000 );
                        SET_CAM_NEAR_DOF( l_U529, 10.00000000 );
                        SET_CAM_FAR_DOF( l_U529, 30.00000000 );
                        SET_CAM_ACTIVE( l_U529, 1 );
                        SET_CAM_PROPAGATE( l_U529, 1 );
                        GET_GAME_TIMER( ref iVar3 );
                        iVar3 += 1000;
                        l_U533 = 4;
                    }
                    break;
                    case 4:
                    GET_GAME_TIMER( ref iVar4 );
                    if (iVar4 > iVar3)
                    {
                        if ((NOT (IS_CHAR_INJURED( sub_3442() ))) AND ((NOT (IS_CHAR_INJURED( l_U534 ))) AND (NOT (IS_CHAR_INJURED( l_U535 )))))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U535, sub_3442() );
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U534, sub_3442() );
                            GET_GAME_TIMER( ref iVar3 );
                            l_U533 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (sub_3110( l_U561 )))
                    {
                        sub_20236( "F3_CONF2B", ref l_U561, 7, 1 );
                        l_U533 = 6;
                    }
                    break;
                    case 6:
                    if (NOT (sub_3110( l_U561 )))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U534 ))) AND (NOT (IS_CHAR_INJURED( l_U535 ))))
                        {
                            SET_CHAR_HEADING( l_U535, 192.52710000 );
                            SET_CHAR_HEADING( l_U534, 249.86390000 );
                            TASK_LOOK_AT_CHAR( l_U535, l_U534, -2, 0 );
                            TASK_LOOK_AT_CHAR( l_U534, l_U535, -2, 0 );
                        }
                        sub_18694( ref l_U529, ref l_U530, ref l_U531 );
                        CREATE_CAM( 14, ref l_U529 );
                        SET_CAM_POS( l_U529, 754.94290000, 1498.26100000, 27.70593000 );
                        SET_CAM_ROT( l_U529, 1.81146400, -0.00000000, 152.58910000 );
                        SET_CAM_FOV( l_U529, 55.19997000 );
                        SET_CAM_ACTIVE( l_U529, 1 );
                        SET_CAM_PROPAGATE( l_U529, 1 );
                        sub_20236( "F3_CONF2C", ref l_U561, 7, 1 );
                        l_U533 = 5;
                    }
                    break;
                    case 5:
                    if (NOT (sub_3110( l_U561 )))
                    {
                        l_U533 = 7;
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    }
                    break;
                    case 7:
                    sub_18694( ref l_U529, ref l_U530, ref l_U531 );
                    sub_18859( ref l_U506, 1, 1, 1 );
                    sub_19022();
                    if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (NOT (IS_CHAR_INJURED( sub_3442() ))))
                    {
                        TASK_LOOK_AT_CHAR( sub_3442(), l_U535, 30000, 0 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U534 ))) AND (NOT (IS_CHAR_INJURED( sub_3442() ))))
                    {
                        TASK_LOOK_AT_CHAR( l_U534, sub_3442(), 30000, 0 );
                    }
                    CLEAR_PRINTS();
                    PRINT( "FG_TASK3", 7500, 3 );
                    sub_13090();
                    CLEAR_AREA( 746.33840000, 1548.10400000, 19.98200000, 5.00000000, 1 );
                    CREATE_CAR( -583281407, 746.33840000, 1548.10400000, 19.98200000, ref l_U513, 1 );
                    SET_VEH_HAS_STRONG_AXLES( l_U513, 1 );
                    SET_CAR_HEADING( l_U513, 1.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U513 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -583281407 );
                    l_U602 = 1;
                    l_U500 = 8;
                    break;
                }
                break;
                case 7:
                if ((NOT (IS_CHAR_INJURED( sub_3442() ))) AND (NOT (IS_CHAR_INJURED( l_U534 ))))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U534 );
                    GET_CHAR_COORDINATES( sub_3442(), ref l_U576._fU0, ref l_U576._fU4, ref l_U576._fU8 );
                    SET_COMBAT_DECISION_MAKER( l_U534, l_U524 );
                    SET_CHAR_DECISION_MAKER( l_U534, l_U526 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U534, 4 );
                    SET_CHAR_RELATIONSHIP( l_U534, 5, 0 );
                    OPEN_SEQUENCE_TASK( ref uVar123 );
                    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U576._fU0, l_U576._fU4, l_U576._fU8, 2, 1.00000000, 2.00000000, sub_3442(), 0 );
                    TASK_SET_CHAR_DECISION_MAKER( 0, l_U528 );
                    TASK_COMBAT( 0, sub_3442() );
                    CLOSE_SEQUENCE_TASK( uVar123 );
                    TASK_PERFORM_SEQUENCE( l_U534, uVar123 );
                    CLEAR_SEQUENCE_TASK( uVar123 );
                }
                if (NOT (IS_CHAR_INJURED( l_U535 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar124 );
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( 749.01910000, 1482.91000000, 26.79540000 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 4, 0 );
                    TASK_ACHIEVE_HEADING( 0, 180.00000000 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "climb_trainPlatform", "MissFaustin3", 32.00000000, -2, 192 );
                    CLOSE_SEQUENCE_TASK( uVar124 );
                    iVar125 = 700;
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U535, 0 );
                    SET_CHAR_AS_ENEMY( l_U535, 1 );
                    SET_CHAR_MAX_HEALTH( l_U535, iVar125 );
                    SET_CHAR_HEALTH( l_U535, iVar125 );
                    UNLOCK_RAGDOLL( l_U535, 0 );
                    SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER( l_U535, 1.10000000 );
                    GIVE_WEAPON_TO_CHAR( l_U535, 7, 100, 0 );
                    TASK_PERFORM_SEQUENCE( l_U535, uVar124 );
                    CLEAR_SEQUENCE_TASK( uVar124 );
                    if (DOES_BLIP_EXIST( l_U508 ))
                    {
                        SET_ROUTE( l_U508, 0 );
                    }
                    sub_26933( ref l_U535 );
                }
                CREATE_MISSION_TRAIN( 10, 807.97120000, 1491.45600000, 27.75997000, 1, ref l_U515 );
                SET_TRAIN_CRUISE_SPEED( l_U515, 20.00000000 );
                SET_TRAIN_SPEED( l_U515, 20.00000000 );
                if (IS_VEH_DRIVEABLE( l_U514 ))
                {
                    SET_TRAIN_CRUISE_SPEED( l_U514, 3.20000000 );
                }
                MARK_MODEL_AS_NO_LONGER_NEEDED( 800869680 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1159759556 );
                sub_20236( "F3_CONF1C", ref l_U567, 7, 1 );
                l_U500 = 17;
                break;
                case 17:
                if ((NOT l_U588) AND (NOT (sub_3110( l_U567 ))))
                {
                    CLEAR_PRINTS();
                    PRINT( "FG_TASK2", 7500, 3 );
                    l_U588 = 1;
                }
                if (NOT l_U590)
                {
                    if ((IS_VEH_DRIVEABLE( l_U515 )) AND (NOT (IS_CHAR_INJURED( l_U535 ))))
                    {
                        if (IS_CHAR_IN_AREA_3D( l_U535, 756.41320000, 1489.58000000, 26.72206000, 687.36400000, 1487.77800000, 32.80076000, 0 ))
                        {
                            SET_TRAIN_CRUISE_SPEED( l_U515, 30.00000000 );
                            l_U590 = 1;
                        }
                    }
                }
                if (NOT l_U591)
                {
                    if ((IS_VEH_DRIVEABLE( l_U514 )) AND (NOT (IS_CHAR_INJURED( l_U535 ))))
                    {
                        if (IS_CHAR_IN_AREA_3D( l_U535, 756.41540000, 1481.26100000, 26.83727000, 692.88230000, 1479.38500000, 29.61275000, 0 ))
                        {
                            SET_TRAIN_CRUISE_SPEED( l_U514, 25.00000000 );
                            l_U591 = 1;
                        }
                    }
                }
                switch (l_U501)
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( l_U535 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U535, 29, ref iVar126 );
                        if (iVar126 == 7)
                        {
                            SET_CHAR_COORDINATES( l_U535, 749.03490000, 1481.66700000, 26.66980000 );
                            SET_CHAR_HEADING( l_U535, 180 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U535, 750.13600000, 1467.88600000, 24.06870000, 4, -2, 0.50000000 );
                            SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER( l_U535, 1.00000000 );
                            l_U501 = 1;
                        }
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_INJURED( l_U535 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U535, 27, ref iVar126 );
                        if (((IS_CHAR_IN_AREA_3D( sub_3442(), 715.93080000, 1508.23500000, 30.60500000, 757.09150000, 1536.59900000, 14.62145000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3442(), 758.60620000, 1490.02700000, 46.84005000, 716.88250000, 1414.85200000, 10.14368000, 0 ))) AND (iVar126 == 7))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U535 )))
                            {
                                SET_CHAR_IS_TARGET_PRIORITY( l_U535, 1 );
                                SET_CHAR_AS_ENEMY( l_U535, 1 );
                                if (IS_VEH_DRIVEABLE( l_U510 ))
                                {
                                    CLEAR_AREA( 746.39430000, 1440.17900000, 13.57060000, 2.00000000, 1 );
                                    CLEAR_AREA( 749.83140000, 1450.45500000, 13.88420000, 0.50000000, 1 );
                                    CLEAR_AREA( 750.10840000, 1453.17400000, 15.61010000, 0.50000000, 1 );
                                    CLEAR_AREA( 749.88400000, 1456.07100000, 17.58130000, 0.50000000, 1 );
                                    CLEAR_AREA( 749.69510000, 1458.74000000, 19.55290000, 0.50000000, 1 );
                                    CLEAR_AREA( 749.93270000, 1462.19200000, 20.17010000, 0.50000000, 1 );
                                    CLEAR_AREA( 750.13010000, 1464.33300000, 21.00850000, 0.50000000, 1 );
                                    CLEAR_AREA( 750.25020000, 1465.86000000, 22.10380000, 0.50000000, 1 );
                                    CLEAR_AREA( 750.29750000, 1468.51900000, 23.85580000, 0.50000000, 1 );
                                    CLEAR_AREA( 750.13590000, 1470.36700000, 25.17030000, 0.50000000, 1 );
                                    if (IS_CHAR_IN_AREA_3D( sub_3442(), 758.60620000, 1490.02700000, 46.84005000, 716.88250000, 1414.85200000, 10.14368000, 0 ))
                                    {
                                        sub_20236( "F3_CHASE", ref l_U555, 7, 1 );
                                    }
                                    OPEN_SEQUENCE_TASK( ref uVar127 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 749.51170000, 1449.79600000, 13.33290000, 4, -2, 0.20000000 );
                                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U510, -2 );
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U510, l_U585._fU0, l_U585._fU4, l_U585._fU8, 15.00000000, 1, -1041692462, 2, 4.00000000, -1 );
                                    CLOSE_SEQUENCE_TASK( uVar127 );
                                    MODIFY_CHAR_MOVE_STATE( l_U535, 4 );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U535, 0 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U535, 1 );
                                    TASK_PERFORM_SEQUENCE( l_U535, uVar127 );
                                    CLEAR_SEQUENCE_TASK( uVar127 );
                                    SET_WANTED_MULTIPLIER( 0.10000000 );
                                    l_U501 = 2;
                                }
                                else if (NOT (IS_CHAR_INJURED( sub_3442() )))
                                {
                                    if (IS_CHAR_IN_AREA_3D( sub_3442(), 758.60620000, 1490.02700000, 46.84005000, 716.88250000, 1414.85200000, 10.14368000, 0 ))
                                    {
                                        sub_20236( "F3_CHASE", ref l_U555, 7, 1 );
                                    }
                                    OPEN_SEQUENCE_TASK( ref uVar127 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 749.51170000, 1449.79600000, 13.33290000, 4, -2, 0.20000000 );
                                    TASK_FLEE_CHAR_ANY_MEANS( 0, sub_3442(), 125.00000000, 180000, 0, 0, 0, 20.00000000 );
                                    TASK_SMART_FLEE_CHAR( 0, sub_3442(), 125.00000000, -1 );
                                    CLOSE_SEQUENCE_TASK( uVar127 );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U535, 0 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U535, 1 );
                                    TASK_PERFORM_SEQUENCE( l_U535, uVar127 );
                                    CLEAR_SEQUENCE_TASK( uVar127 );
                                    SET_WANTED_MULTIPLIER( 0.10000000 );
                                    l_U501 = 2;
                                }
                                GET_CHAR_HEALTH( l_U535, ref iVar128 );
                                iVar128 = ((iVar128 - 100) / 6) + 100;
                                SET_CHAR_HEALTH( l_U535, iVar128 );
                                SET_CHAR_MAX_HEALTH( l_U535, 200 );
                            }
                        }
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (NOT (IS_CHAR_INJURED( sub_3442() ))))
                    {
                        if ((NOT (IS_CHAR_IN_AREA_3D( sub_3442(), 755.93550000, 1498.57100000, 35.99339000, 773.97360000, 1478.32500000, 25.23902000, 0 ))) AND (NOT (IS_CHAR_IN_AREA_3D( sub_3442(), 759.63390000, 1430.80400000, 10.57651000, 728.47420000, 1540.58500000, 38.14401000, 0 ))))
                        {
                            l_U594 = 1;
                            l_U505 = 1;
                        }
                    }
                    break;
                    case 2:
                    if ((NOT (IS_CHAR_INJURED( sub_3442() ))) AND (NOT (IS_CHAR_INJURED( l_U535 ))))
                    {
                        if (NOT l_U596)
                        {
                            GET_SCRIPT_TASK_STATUS( l_U535, 29, ref l_U611 );
                            if (l_U611 == 1)
                            {
                                GET_SEQUENCE_PROGRESS( l_U535, ref l_U607 );
                                if (l_U607 >= 1)
                                {
                                    l_U596 = 1;
                                    UNLOCK_RAGDOLL( l_U535, 1 );
                                }
                            }
                        }
                        GET_CHAR_COORDINATES( l_U535, ref l_U573._fU0, ref l_U573._fU4, ref l_U573._fU8 );
                        if (IS_CHAR_IN_ANY_CAR( l_U535 ))
                        {
                            GET_CAR_CHAR_IS_USING( l_U535, ref l_U510 );
                            if (NOT l_U593)
                            {
                                if ((IS_VEH_DRIVEABLE( l_U510 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3442() )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), l_U573._fU0, l_U573._fU4, l_U573._fU8, 15.00000000, 15.00000000, 2.00000000, 0 ))
                                    {
                                        if (l_U608 < 4)
                                        {
                                            if (NOT (sub_3110( l_U555 )))
                                            {
                                                sub_20236( "F3_CHASE", ref l_U555, 7, 1 );
                                                l_U608++;
                                            }
                                        }
                                        TASK_CAR_DRIVE_TO_COORD( l_U535, l_U510, l_U585._fU0, l_U585._fU4, l_U585._fU8, 21.00000000, 1, -1041692462, 2, 4.00000000, -1 );
                                        l_U593 = 1;
                                    }
                                }
                            }
                            else if ((IS_VEH_DRIVEABLE( l_U510 )) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), l_U573._fU0, l_U573._fU4, l_U573._fU8, 75.00000000, 75.00000000, 10.00000000, 0 ))))
                            {
                                TASK_CAR_DRIVE_TO_COORD( l_U535, l_U510, l_U585._fU0, l_U585._fU4, l_U585._fU8, 12.50000000, 1, -1041692462, 2, 4.00000000, -1 );
                                l_U593 = 0;
                            }
                            if (NOT (IS_VEH_DRIVEABLE( l_U510 )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar129 );
                                TASK_SET_CHAR_DECISION_MAKER( 0, l_U527 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                TASK_FLEE_CHAR_ANY_MEANS( 0, sub_3442(), 125.00000000, 5000000, 1, 1000, 15000, 10.00000000 );
                                TASK_SMART_FLEE_CHAR( 0, sub_3442(), 90.00000000, -1 );
                                CLOSE_SEQUENCE_TASK( uVar129 );
                                TASK_PERFORM_SEQUENCE( l_U535, uVar129 );
                                CLEAR_SEQUENCE_TASK( uVar129 );
                            }
                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), l_U573._fU0, l_U573._fU4, l_U573._fU8, 195.00000000, 195.00000000, 195.00000000, 0 )))
                            {
                                l_U594 = 1;
                                l_U505 = 1;
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), l_U573._fU0, l_U573._fU4, l_U573._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )))
                        {
                            l_U594 = 1;
                            l_U505 = 1;
                        }
                    }
                    break;
                }
                if (NOT (IS_CHAR_INJURED( l_U535 )))
                {
                    sub_26933( ref l_U535 );
                }
                if (NOT (IS_CHAR_INJURED( l_U535 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U535, l_U585._fU0, l_U585._fU4, l_U585._fU8, 15.00000000, 15.00000000, 4.00000000, 0 ))
                    {
                        if (sub_11972( 1, 1 ))
                        {
                            l_U500 = 13;
                        }
                    }
                }
                sub_30386();
                sub_30540();
                break;
                case 8:
                if (NOT (IS_CHAR_INJURED( l_U535 )))
                {
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U535, 0 );
                    iVar125 = 700;
                    SET_CHAR_MAX_HEALTH( l_U535, iVar125 );
                    SET_CHAR_HEALTH( l_U535, iVar125 );
                    SET_CHAR_AS_ENEMY( l_U535, 1 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U535, 731.49820000, 1506.52800000, 26.14620000, 3, -2, 0.20000000 );
                }
                if ((NOT (IS_CHAR_INJURED( sub_3442() ))) AND (NOT (IS_CHAR_INJURED( l_U534 ))))
                {
                    SET_COMBAT_DECISION_MAKER( l_U534, l_U524 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U534, 4 );
                    SET_CHAR_RELATIONSHIP( l_U534, 5, 0 );
                    SET_CHAR_DECISION_MAKER( l_U534, l_U528 );
                    TASK_COMBAT( l_U534, sub_3442() );
                }
                CREATE_MISSION_TRAIN( 11, 807.97120000, 1491.45600000, 27.75997000, 1, ref l_U515 );
                SET_TRAIN_CRUISE_SPEED( l_U515, 20.00000000 );
                SET_TRAIN_SPEED( l_U515, 20.00000000 );
                if (IS_VEH_DRIVEABLE( l_U514 ))
                {
                    SET_TRAIN_CRUISE_SPEED( l_U514, 12.00000000 );
                }
                MARK_MODEL_AS_NO_LONGER_NEEDED( 800869680 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1159759556 );
                SET_ROUTE( l_U508, 0 );
                l_U500 = 10;
                break;
                case 10:
                if ((NOT (IS_CHAR_INJURED( sub_3442() ))) AND (NOT (IS_CHAR_INJURED( l_U535 ))))
                {
                    GET_SCRIPT_TASK_STATUS( l_U535, 27, ref iVar126 );
                    if ((IS_CHAR_IN_AREA_3D( sub_3442(), 761.93410000, 1488.85800000, 38.18513000, 718.72860000, 1519.65500000, -16.77620000, 0 )) || (((IS_PLAYER_TARGETTING_CHAR( sub_3496(), l_U535 )) AND (iVar126 == 7)) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3496(), l_U535 )) AND (iVar126 == 7))))
                    {
                        if (NOT (IS_VEHICLE_EXTRA_TURNED_ON( l_U510, 2 )))
                        {
                            TURN_OFF_VEHICLE_EXTRA( l_U510, 2, 0 );
                        }
                        if (NOT (IS_VEHICLE_EXTRA_TURNED_ON( l_U510, 3 )))
                        {
                            TURN_OFF_VEHICLE_EXTRA( l_U510, 3, 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U535 )))
                        {
                            SET_CHAR_IS_TARGET_PRIORITY( l_U535, 1 );
                            GET_CHAR_HEALTH( l_U535, ref iVar128 );
                            iVar128 = ((iVar128 - 100) / 6) + 100;
                            SET_CHAR_HEALTH( l_U535, iVar128 );
                            SET_CHAR_MAX_HEALTH( l_U535, 200 );
                            if (IS_VEH_DRIVEABLE( l_U511 ))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar130 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 731.71120000, 1529.30000000, 18.19990000, 4, -2, 0.20000000 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 731.90930000, 1547.13800000, 20.97760000, 4, -2, 0.20000000 );
                                TASK_ENTER_CAR_AS_DRIVER( 0, l_U511, -2 );
                                TASK_FLUSH_ROUTE();
                                TASK_EXTEND_ROUTE( 735.62710000, 1544.99700000, 20.46660000 );
                                TASK_SET_CHAR_DECISION_MAKER( 0, l_U527 );
                                TASK_DRIVE_POINT_ROUTE_ADVANCED( 0, l_U511, 15.00000000, 1, -1041692462, 3 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U511, l_U585._fU0, l_U585._fU4, l_U585._fU8, 15.00000000, 1, -1041692462, 2, 4.00000000, -1 );
                                CLOSE_SEQUENCE_TASK( uVar130 );
                                CLEAR_AREA( 724.53120000, 1545.70000000, 20.57830000, 30.00000000, 1 );
                            }
                            else
                            {
                                OPEN_SEQUENCE_TASK( ref uVar130 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 731.71120000, 1529.30000000, 18.19990000, 4, -2, 0.20000000 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 731.90930000, 1547.13800000, 20.97760000, 4, -2, 0.20000000 );
                                TASK_SET_CHAR_DECISION_MAKER( 0, l_U527 );
                                TASK_FLEE_CHAR_ANY_MEANS( 0, sub_3442(), 125.00000000, 5000000, 1, 1000, 15000, 10.00000000 );
                                TASK_SMART_FLEE_CHAR( 0, sub_3442(), 90.00000000, -1 );
                                CLOSE_SEQUENCE_TASK( uVar130 );
                            }
                            MODIFY_CHAR_MOVE_STATE( l_U535, 4 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U535, 0 );
                            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U535, 1 );
                            GIVE_WEAPON_TO_CHAR( l_U535, 7, 100, 0 );
                            UNLOCK_RAGDOLL( l_U535, 0 );
                            TASK_PERFORM_SEQUENCE( l_U535, uVar130 );
                            CLEAR_SEQUENCE_TASK( uVar130 );
                            sub_20236( "F3_CHASE", ref l_U555, 7, 1 );
                            SET_WANTED_MULTIPLIER( 0.10000000 );
                            l_U500 = 9;
                        }
                    }
                }
                if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (NOT (IS_CHAR_INJURED( sub_3442() ))))
                {
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3442(), 762.78610000, 1430.94700000, 43.88153000, 717.42230000, 1548.22400000, -1.07796800, 0 )))
                    {
                        l_U594 = 1;
                        l_U505 = 1;
                    }
                }
                break;
                case 9:
                sub_30540();
                if ((NOT (IS_CHAR_DEAD( l_U535 ))) AND (NOT l_U596))
                {
                    GET_SCRIPT_TASK_STATUS( l_U535, 29, ref l_U611 );
                    if (l_U611 == 1)
                    {
                        GET_SEQUENCE_PROGRESS( l_U535, ref l_U607 );
                        if (l_U607 >= 1)
                        {
                            l_U596 = 1;
                            UNLOCK_RAGDOLL( l_U535, 1 );
                        }
                    }
                }
                if ((NOT (IS_CHAR_INJURED( sub_3442() ))) AND (NOT (IS_CHAR_INJURED( l_U535 ))))
                {
                    GET_CHAR_COORDINATES( l_U535, ref l_U573._fU0, ref l_U573._fU4, ref l_U573._fU8 );
                    if (IS_CHAR_IN_ANY_CAR( l_U535 ))
                    {
                        GET_CAR_CHAR_IS_USING( l_U535, ref l_U510 );
                        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), l_U573._fU0, l_U573._fU4, l_U573._fU8, 195.00000000, 195.00000000, 195.00000000, 0 )))
                        {
                            l_U594 = 1;
                            l_U505 = 1;
                        }
                        if (NOT (IS_VEH_DRIVEABLE( l_U510 )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar129 );
                            TASK_SET_CHAR_DECISION_MAKER( 0, l_U527 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_FLEE_CHAR_ANY_MEANS( 0, sub_3442(), 125.00000000, 5000000, 1, 1000, 15000, 10.00000000 );
                            TASK_SMART_FLEE_CHAR( 0, sub_3442(), 90.00000000, -1 );
                            CLOSE_SEQUENCE_TASK( uVar129 );
                            TASK_PERFORM_SEQUENCE( l_U535, uVar129 );
                            CLEAR_SEQUENCE_TASK( uVar129 );
                        }
                        if (NOT l_U593)
                        {
                            if ((IS_VEH_DRIVEABLE( l_U510 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3442() )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), l_U573._fU0, l_U573._fU4, l_U573._fU8, 15.00000000, 15.00000000, 5.00000000, 0 ))
                                {
                                    if (l_U608 < 4)
                                    {
                                        if (NOT (sub_3110( l_U555 )))
                                        {
                                            sub_20236( "F3_CHASE", ref l_U555, 7, 1 );
                                            l_U608++;
                                        }
                                    }
                                    TASK_CAR_DRIVE_TO_COORD( l_U535, l_U510, l_U585._fU0, l_U585._fU4, l_U585._fU8, 21.00000000, 1, -1041692462, 2, 4.00000000, -1 );
                                    l_U593 = 1;
                                }
                            }
                        }
                        else if ((IS_VEH_DRIVEABLE( l_U510 )) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), l_U573._fU0, l_U573._fU4, l_U573._fU8, 75.00000000, 75.00000000, 10.00000000, 0 ))))
                        {
                            TASK_CAR_DRIVE_TO_COORD( l_U535, l_U510, l_U585._fU0, l_U585._fU4, l_U585._fU8, 12.50000000, 1, -1041692462, 2, 4.00000000, -1 );
                            l_U593 = 0;
                        }
                    }
                    else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), l_U573._fU0, l_U573._fU4, l_U573._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )))
                    {
                        l_U594 = 1;
                        l_U505 = 1;
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U535 )))
                {
                    sub_26933( ref l_U535 );
                }
                if (NOT (IS_CHAR_INJURED( l_U535 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U535, l_U585._fU0, l_U585._fU4, l_U585._fU8, 15.00000000, 15.00000000, 4.00000000, 0 ))
                    {
                        if (sub_11972( 1, 1 ))
                        {
                            l_U500 = 13;
                        }
                    }
                }
                sub_30386();
                break;
                case 13:
                switch (l_U504)
                {
                    case 0:
                    SET_PLAYER_CONTROL( sub_3496(), 0 );
                    sub_18254( 1000 );
                    if (NOT (IS_CHAR_INJURED( l_U535 )))
                    {
                        SET_CHAR_DECISION_MAKER( l_U535, l_U526 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U535, 1 );
                        CLEAR_CHAR_TASKS( l_U535 );
                    }
                    WAIT( 0 );
                    REQUEST_CAR_RECORDING( 921 );
                    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 921 )))
                    {
                        WAIT( 0 );
                    }
                    CLEAR_AREA( l_U585._fU0, l_U585._fU4, l_U585._fU8, 30.00000000, 1 );
                    LOAD_SCENE( l_U585._fU0, l_U585._fU4, l_U585._fU8 );
                    sub_19544( ref l_U506, 1 );
                    CREATE_CAM( 14, ref l_U529 );
                    CLEAR_PRINTS();
                    if (NOT (IS_CHAR_INJURED( l_U535 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U535 ))
                        {
                            GET_CAR_CHAR_IS_USING( l_U535, ref l_U518 );
                            if (NOT (IS_CAR_DEAD( l_U518 )))
                            {
                                SET_CAR_COORDINATES( l_U518, 1000.73400000, -496.12550000, 14.69410000 );
                                SET_CAR_HEADING( l_U518, 270.23770000 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U518 );
                                START_PLAYBACK_RECORDED_CAR( l_U518, 921 );
                                SET_CAM_POS( l_U529, 995.68730000, -499.01480000, 20.35923000 );
                                SET_CAM_ROT( l_U529, -29.53538000, -20.59681000, -87.21886000 );
                                SET_CAM_FOV( l_U529, 48.59999000 );
                                l_U601 = 1;
                                GET_GAME_TIMER( ref iVar3 );
                                iVar3 += 12000;
                            }
                        }
                        else
                        {
                            SET_CAM_POS( l_U529, 995.90680000, -503.58200000, 14.59975000 );
                            SET_CAM_ROT( l_U529, 17.46667000, 0.00000000, -90.56153000 );
                            SET_CAM_FOV( l_U529, 42.90001000 );
                            SET_CHAR_COORDINATES( l_U535, 1000.52000000, -488.96700000, 14.76700000 );
                            SET_CHAR_HEADING( l_U535, 235.00000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U535, 1012.71500000, -488.85390000, 18.76730000, 3, -2, 0.20000000 );
                            GET_GAME_TIMER( ref iVar3 );
                            iVar3 += 8000;
                        }
                    }
                    SET_CAM_ACTIVE( l_U529, 1 );
                    SET_CAM_PROPAGATE( l_U529, 1 );
                    DO_SCREEN_FADE_IN( 1000 );
                    l_U504 = 1;
                    break;
                    case 1:
                    if ((NOT l_U597) AND (l_U601))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (IS_VEH_DRIVEABLE( l_U518 )))
                        {
                            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U518 )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar131 );
                                TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U518 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 999.58440000, -503.21050000, 14.58240000, 3, -2, 0.20000000 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1012.57400000, -504.02360000, 18.76770000, 4, -2, 0.20000000 );
                                CLOSE_SEQUENCE_TASK( uVar131 );
                                TASK_PERFORM_SEQUENCE( l_U535, uVar131 );
                                CLEAR_SEQUENCE_TASK( uVar131 );
                                l_U597 = 1;
                            }
                        }
                    }
                    GET_GAME_TIMER( ref iVar4 );
                    if (iVar4 > iVar3)
                    {
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                        l_U504 = 2;
                    }
                    break;
                    case 2:
                    sub_18254( 1000 );
                    sub_18694( ref l_U529, ref l_U530, ref l_U531 );
                    sub_18859( ref l_U506, 1, 1, 1 );
                    if (NOT (IS_CHAR_DEAD( l_U535 )))
                    {
                        DELETE_CHAR( ref l_U535 );
                    }
                    DO_SCREEN_FADE_IN( 1000 );
                    l_U594 = 1;
                    l_U505 = 1;
                    break;
                }
                break;
                case 11:
                if (NOT (IS_CHAR_INJURED( l_U535 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar124 );
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( 749.01910000, 1482.91000000, 26.79540000 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 4, 0 );
                    TASK_ACHIEVE_HEADING( 0, 180.00000000 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "climb_trainPlatform", "MissFaustin3", 32.00000000, -2, 192 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 750.19810000, 1462.48600000, 20.17050000, 4, -2, 0.20000000 );
                    CLOSE_SEQUENCE_TASK( uVar124 );
                    GIVE_WEAPON_TO_CHAR( l_U535, 7, 100, 0 );
                    UNLOCK_RAGDOLL( l_U535, 0 );
                    TASK_PERFORM_SEQUENCE( l_U535, uVar124 );
                    CLEAR_SEQUENCE_TASK( uVar124 );
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U535, 0 );
                    SET_ROUTE( l_U508, 0 );
                    sub_26933( ref l_U535 );
                }
                if ((NOT (IS_CHAR_INJURED( sub_3442() ))) AND (NOT (IS_CHAR_INJURED( l_U534 ))))
                {
                    GET_CHAR_COORDINATES( sub_3442(), ref l_U576._fU0, ref l_U576._fU4, ref l_U576._fU8 );
                    SET_COMBAT_DECISION_MAKER( l_U534, l_U524 );
                    SET_CHAR_DECISION_MAKER( l_U534, l_U523 );
                    OPEN_SEQUENCE_TASK( ref uVar123 );
                    TASK_COMBAT( 0, sub_3442() );
                    CLOSE_SEQUENCE_TASK( uVar123 );
                    SET_CHAR_RELATIONSHIP( l_U534, 5, 0 );
                    TASK_PERFORM_SEQUENCE( l_U534, uVar123 );
                    CLEAR_SEQUENCE_TASK( uVar123 );
                }
                if (IS_VEH_DRIVEABLE( l_U514 ))
                {
                    SET_TRAIN_CRUISE_SPEED( l_U514, 2.80000000 );
                }
                CLEAR_PRINTS();
                PRINT( "FG_TASK2", 7500, 3 );
                l_U500 = 12;
                break;
                case 12:
                sub_30386();
                if (NOT (IS_CHAR_INJURED( l_U535 )))
                {
                    if (NOT l_U592)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U535, 29, ref iVar126 );
                        if (iVar126 == 7)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U535 )))
                            {
                                if (IS_VEH_DRIVEABLE( l_U510 ))
                                {
                                    CLEAR_AREA( 746.39430000, 1440.17900000, 13.57060000, 30.00000000, 1 );
                                    OPEN_SEQUENCE_TASK( ref uVar127 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 749.40040000, 1439.23400000, 13.24430000, 4, -2, 0.20000000 );
                                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U510, -2 );
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U510, l_U585._fU0, l_U585._fU4, l_U585._fU8, 15.00000000, 1, -1041692462, 2, 4.00000000, -1 );
                                    CLOSE_SEQUENCE_TASK( uVar127 );
                                    MODIFY_CHAR_MOVE_STATE( l_U535, 4 );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U535, 0 );
                                    TASK_PERFORM_SEQUENCE( l_U535, uVar127 );
                                    CLEAR_SEQUENCE_TASK( uVar127 );
                                }
                                else if (NOT (IS_CHAR_INJURED( sub_3442() )))
                                {
                                    OPEN_SEQUENCE_TASK( ref uVar127 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 749.40040000, 1439.23400000, 13.24430000, 4, -2, 0.20000000 );
                                    TASK_FLEE_CHAR_ANY_MEANS( 0, sub_3442(), 100.00000000, 5000000, 1, 1000, 15000, 10.00000000 );
                                    TASK_SMART_FLEE_CHAR( 0, sub_3442(), 90.00000000, -1 );
                                    CLOSE_SEQUENCE_TASK( uVar127 );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U535, 0 );
                                    TASK_PERFORM_SEQUENCE( l_U535, uVar127 );
                                    CLEAR_SEQUENCE_TASK( uVar127 );
                                }
                            }
                            l_U592 = 1;
                        }
                    }
                    else
                    {
                        GET_CHAR_COORDINATES( l_U535, ref uVar132._fU0, ref uVar132._fU4, ref uVar132._fU8 );
                        if (NOT (IS_CHAR_INJURED( sub_3442() )))
                        {
                            if ((NOT (IS_CHAR_ON_SCREEN( l_U535 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), uVar132._fU0, uVar132._fU4, uVar132._fU8, 150.00000000, 150.00000000, 150.00000000, 0 ))))
                            {
                                if (sub_11972( 1, 1 ))
                                {
                                    l_U505 = 1;
                                    l_U594 = 1;
                                }
                            }
                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3442(), uVar132._fU0, uVar132._fU4, uVar132._fU8, 300.00000000, 300.00000000, 200.00000000, 0 )))
                            {
                                l_U505 = 1;
                                l_U594 = 1;
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U535 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( l_U535, l_U585._fU0, l_U585._fU4, l_U585._fU8, 15.00000000, 15.00000000, 4.00000000, 0 ))
                            {
                                if (sub_11972( 1, 1 ))
                                {
                                    l_U500 = 13;
                                }
                            }
                        }
                    }
                }
                break;
            }
        }
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 31 ))
            {
                WAIT( 0 );
            }
            l_U595 = 1;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 36 ))
            {
                WAIT( 0 );
            }
            switch (l_U500)
            {
                case 4:
                if (NOT (IS_CHAR_INJURED( sub_3442() )))
                {
                    SET_CHAR_COORDINATES( sub_3442(), 736.55700000, 1567.42800000, 21.20410000 );
                    SET_CHAR_HEADING( sub_3442(), 180.00000000 );
                    SET_CAM_BEHIND_PED( sub_3442() );
                }
                break;
                case 5:
                if (NOT (IS_CHAR_INJURED( sub_3442() )))
                {
                    SET_CHAR_COORDINATES( sub_3442(), 731.54700000, 1516.03300000, 20.00550000 );
                    SET_CHAR_HEADING( sub_3442(), 180.00000000 );
                    SET_CAM_BEHIND_PED( sub_3442() );
                }
                break;
                case 6:
                if (NOT (IS_CHAR_INJURED( sub_3442() )))
                {
                    SET_CHAR_COORDINATES( sub_3442(), 733.13970000, 1498.70000000, 26.66990000 );
                    SET_CHAR_HEADING( sub_3442(), 270.00000000 );
                    SET_CAM_BEHIND_PED( sub_3442() );
                }
                break;
                case 17:
                l_U501 = 1;
                if (NOT (IS_CHAR_INJURED( l_U535 )))
                {
                    SET_CHAR_COORDINATES( l_U535, 750.13600000, 1467.88600000, 24.06870000 );
                }
                if (NOT (IS_CHAR_INJURED( sub_3442() )))
                {
                    SET_CHAR_COORDINATES( sub_3442(), 733.13970000, 1498.70000000, 26.66990000 );
                    SET_CHAR_HEADING( sub_3442(), 270.00000000 );
                    SET_CAM_BEHIND_PED( sub_3442() );
                }
                break;
            }
        }
        if (l_U604)
        {
            if (NOT (IS_CHAR_INJURED( sub_3442() )))
            {
                if (NOT (IS_CHAR_IN_AREA_3D( sub_3442(), 787.04400000, 1501.01000000, 24.01513000, 704.61560000, 1475.04200000, 34.72138000, 0 )))
                {
                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
                    l_U604 = 0;
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( sub_3442() )))
        {
            if (IS_CHAR_IN_AREA_3D( sub_3442(), 787.04400000, 1501.01000000, 24.01513000, 704.61560000, 1475.04200000, 34.72138000, 0 ))
            {
                SET_CAR_DENSITY_MULTIPLIER( 0.20000000 );
                SET_PED_DENSITY_MULTIPLIER( 0.20000000 );
                l_U604 = 1;
            }
        }
        if (DOES_CHAR_EXIST( l_U535 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U535 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U535 ))
                {
                    if (NOT l_U603)
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U535, 1 );
                        l_U603 = 1;
                    }
                }
                else if (l_U603)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U535, 0 );
                    l_U603 = 0;
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U535 )))
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U535 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U535, ref l_U520 );
            }
        }
        if ((NOT l_U595) AND ((NOT l_U594) AND ((l_U589) AND ((DOES_CHAR_EXIST( l_U535 )) AND (IS_CHAR_DEAD( l_U535 ))))))
        {
            CLEAR_PRINTS();
            if (DOES_BLIP_EXIST( l_U508 ))
            {
                REMOVE_BLIP( l_U508 );
            }
            UNLOCK_RAGDOLL( l_U535, 1 );
            sub_3554();
            if (IS_CHAR_IN_ANY_CAR( l_U535 ))
            {
                WAIT( 4000 );
            }
            WAIT( 4000 );
            l_U595 = 1;
        }
        if (l_U594)
        {
            sub_36343();
        }
        if (l_U595)
        {
            sub_37256();
        }
        WAIT( 0 );
    }
    return;
}

void sub_341()
{
    sub_350();
    return;
}

void sub_350()
{
    int iVar2;

    iVar2 = 4;
    sub_364( iVar2 );
    sub_1540( iVar2 );
    return;
}

void sub_364(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_408();
        sub_569();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_677();
            sub_716();
        }
    }
    sub_792();
    sub_893();
    uVar5 = sub_1006( uParam0 );
    sub_1447( uVar5, 0 );
    return;
}

void sub_408()
{
    sub_422( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_522();
    }
    return;
}

void sub_422(int iParam0)
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

void sub_522()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_569()
{
    sub_578();
    return;
}

void sub_578()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_677()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_716()
{
    sub_725();
    return;
}

void sub_725()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_792()
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

void sub_893()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_915();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_915()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1006(unknown uParam0)
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
    sub_1405( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1405(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1447(int iParam0, boolean bParam1)
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

void sub_1540(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1549();
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
        sub_2324();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1549()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1587( 5, g_U569[I] )) == 1))
        {
            if ((sub_1587( 1, g_U569[I] )) != 0)
            {
                sub_1873( I );
            }
        }
    }
    if (NOT sub_2039())
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

int sub_1587(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1873(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1958( g_U569 - 1 );
    return;
}

void sub_1958(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2039()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1587( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2324()
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

void sub_2451()
{
    int I;

    MARK_MODEL_AS_NO_LONGER_NEEDED( -1041692462 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1180674815 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1865532596 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1345134469 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 800869680 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1159759556 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    REMOVE_ANIMS( "missfaustin3" );
    if (DOES_CHAR_EXIST( l_U534 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U534 );
    }
    if (DOES_CHAR_EXIST( l_U535 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U535 );
    }
    for ( I = 0; I <= 17; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U536[I] )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U536[I] );
        }
    }
    if (DOES_OBJECT_EXIST( l_U521 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U521 );
    }
    if (DOES_OBJECT_EXIST( l_U522 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U522 );
    }
    if (DOES_BLIP_EXIST( l_U507 ))
    {
        REMOVE_BLIP( l_U507 );
    }
    if (DOES_BLIP_EXIST( l_U509 ))
    {
        REMOVE_BLIP( l_U509 );
    }
    if (DOES_BLIP_EXIST( l_U508 ))
    {
        REMOVE_BLIP( l_U508 );
    }
    if (IS_VEH_DRIVEABLE( l_U514 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U514 );
    }
    if (IS_VEH_DRIVEABLE( l_U515 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U515 );
    }
    if (IS_VEH_DRIVEABLE( l_U516 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U516 );
    }
    if (IS_VEH_DRIVEABLE( l_U510 ))
    {
        LOCK_CAR_DOORS( l_U510, 1 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U510 );
    }
    if (IS_VEH_DRIVEABLE( l_U511 ))
    {
        LOCK_CAR_DOORS( l_U511, 1 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U511 );
    }
    if (IS_VEH_DRIVEABLE( l_U512 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U512 );
    }
    if (DOES_OBJECT_EXIST( l_U521 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U521 );
    }
    if (DOES_OBJECT_EXIST( l_U522 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U522 );
    }
    g_U9209 = 1;
    sub_3097( ref l_U567 );
    sub_3097( ref l_U561 );
    sub_3097( ref l_U555 );
    if (NOT (IS_CHAR_INJURED( sub_3442() )))
    {
        DISABLE_PLAYER_SPRINT( sub_3496(), 0 );
    }
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_3554();
    DESTROY_ALL_CAMS();
    SWITCH_RANDOM_TRAINS( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3097(unknown uParam0)
{
    if (sub_3110( (uParam0^) ))
    {
        sub_3292( uParam0, 0 );
    }
    return;
}

int sub_3110(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_3222( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_3222( "\n speech is not playing" );
    }
    return 0;
}

void sub_3222(unknown uParam0)
{
    return;
}

void sub_3292(int iParam0, unknown uParam1)
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

void sub_3442()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3496()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3554()
{
    if (l_U3)
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
    l_U1 = 0;
    l_U0 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3774(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_3791();
    return;
}

void sub_3791()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_3893(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3973( "\n PED NUMBER ", uParam0 );
    sub_4013( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3973(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4013(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4278(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_INJURED( sub_3442() )))
    {
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar12 );
    }
    if (DOES_VEHICLE_EXIST( uVar12 ))
    {
        if (IS_VEH_DRIVEABLE( uVar12 ))
        {
            if (IS_CAR_IN_AREA_3D( uVar12, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, 0 ))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( uVar12 )))
                {
                    SET_CAR_AS_MISSION_CAR( uVar12 );
                }
                CLEAR_AREA( uParam6._fU0, uParam6._fU4, uParam6._fU8, 7.00000000, 1 );
                SET_CAR_COORDINATES( uVar12, uParam6._fU0, uParam6._fU4, uParam6._fU8 );
                SET_CAR_HEADING( uVar12, uParam9 );
                GET_CAR_MODEL( uVar12, ref uVar13 );
                if ((NOT (IS_THIS_MODEL_A_TRAIN( uVar13 ))) AND ((NOT (IS_THIS_MODEL_A_HELI( uVar13 ))) AND (NOT (IS_THIS_MODEL_A_BOAT( uVar13 )))))
                {
                    SET_CAR_ON_GROUND_PROPERLY( uVar12 );
                }
                if (IS_CAR_A_MISSION_CAR( uVar12 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar12 );
                }
            }
        }
    }
    return;
}

void sub_5654(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    switch (uParam6)
    {
        case 0:
        iVar9 = -2088164056;
        break;
        case 1:
        iVar9 = 1976502708;
        break;
        case 2:
        iVar9 = -1788328884;
        break;
        case 3:
        iVar9 = 677687516;
        break;
        default:
        iVar9 = 1976502708;
        break;
    }
    CREATE_CHAR( 8, iVar9, uParam1, uParam2, uParam3, uParam0, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 4 );
    SET_CHAR_DECISION_MAKER( (uParam0^), uParam4 );
    SET_COMBAT_DECISION_MAKER( (uParam0^), uParam5 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
    return;
}

void sub_6275()
{
    REQUEST_ANIMS( "gestures@niko" );
    while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_6679(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_6958()
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_7158()
{
    if (NOT l_U598)
    {
        if (NOT l_U600)
        {
            if (sub_7191( 25, 0 ))
            {
                if (sub_7517( "F3_CDIM", "F3AUD", 0 ))
                {
                    l_U600 = 1;
                }
            }
        }
        if (l_U600)
        {
            switch (sub_11513())
            {
                case 2:
                l_U600 = 0;
                l_U598 = 1;
                break;
                default:
                if (sub_11607( 0 ))
                {
                    l_U600 = 0;
                    l_U598 = 1;
                }
                break;
            }
        }
    }
    return;
}

int sub_7191(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_3222( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_3222( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U91._fU60 == iParam0) AND (g_U91._fU0 == 1005))
    {
        if (bParam1)
        {
            if ((NOT g_U91._fU372) AND (g_U91._fU508 >= 4))
            {
                return 1;
            }
        }
        else if (NOT g_U91._fU368)
        {
            return 1;
        }
    }
    return 0;
}

int sub_7517(unknown uParam0, unknown uParam1, boolean bParam2)
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
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = g_U91._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_7625( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U91._fU368) == 1)
        {
            StrCopy( ref g_U91._fU224[0], uParam1, 16 );
            StrCopy( ref g_U91._fU224[1], uParam0, 16 );
            sub_9512( uVar23, ref g_U91._fU176 );
            g_U91._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_7625(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_3222( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_3222( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3496() )))
    {
        sub_3222( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3442() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3442() )))
    {
        sub_3222( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_3222( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_8140()))
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
                sub_3222( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_8140()))
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
    sub_9512( uParam0, ref g_U91._fU176 );
    sub_10893( ref g_U91._fU160 );
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
        sub_4013( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_8140()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_8197())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_8197()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3496() )))
    {
        sub_3222( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_3222( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_3222( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_3222( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3496() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3442() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3442(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_3222( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3442() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_3222( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_3222( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3496() )))
    {
        sub_3222( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_9512(int iParam0, unknown uParam1)
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

void sub_10893(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_11513()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_11607(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_3442(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_3222( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_11972(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3442() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3442(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3442() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3442(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3442()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3442() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3442() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3496() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3496() )))
    {
        return 0;
    }
    return 1;
}

void sub_12262()
{
    if ((g_U8394 == 4) || (g_U555 == 1))
    {
        if (g_U91._fU60 != -1)
        {
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U91._fU376 = 0;
        g_U91._fU100 = 1;
    }
    return;
}

void sub_12500()
{
    switch (l_U502)
    {
        case 0:
        if (l_U500 == 5)
        {
            if (sub_12577( 4, "F3_CALL1", "F3AUD" ))
            {
                l_U502 = 1;
                GET_GAME_TIMER( ref l_U605 );
                l_U605 += 10000;
            }
        }
        break;
        case 1:
        if (sub_11607( 0 ))
        {
            l_U502 = 2;
        }
        break;
        case 2:
        PRINT( "FG_TASK3", 7500, 3 );
        if (DOES_BLIP_EXIST( l_U507 ))
        {
            REMOVE_BLIP( l_U507 );
        }
        if ((NOT (DOES_BLIP_EXIST( l_U508 ))) AND (NOT (DOES_BLIP_EXIST( l_U509 ))))
        {
            ADD_BLIP_FOR_COORD( l_U582._fU0, l_U582._fU4, l_U582._fU8, ref l_U509 );
            CHANGE_BLIP_COLOUR( l_U509, 1 );
            CHANGE_BLIP_DISPLAY( l_U509, 4 );
            SET_ROUTE( l_U509, 1 );
        }
        l_U502 = 3;
        break;
    }
    return;
}

void sub_12577(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_7625( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

void sub_13090()
{
    if ((NOT (IS_CHAR_INJURED( l_U535 ))) AND (DOES_BLIP_EXIST( l_U509 )))
    {
        REMOVE_BLIP( l_U509 );
        ADD_BLIP_FOR_CHAR( l_U535, ref l_U508 );
        CHANGE_BLIP_COLOUR( l_U508, 1 );
        CHANGE_BLIP_DISPLAY( l_U508, 4 );
    }
    return;
}

void sub_15096(int iParam0)
{
    if (g_U91._fU60 == iParam0)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U91._fU0 != 1001) AND (g_U91._fU0 != 1000))
            {
                g_U91._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

int sub_18143()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_18254(unknown uParam0)
{
    DISABLE_PAUSE_MENU( 1 );
    sub_18271();
    sub_6958();
    DO_SCREEN_FADE_OUT( uParam0 );
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    DISABLE_PAUSE_MENU( 0 );
    return;
}

void sub_18271()
{
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    return;
}

void sub_18694(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CAM_EXIST( (uParam2^) ))
    {
        SET_CAM_PROPAGATE( (uParam2^), 0 );
        SET_CAM_ACTIVE( (uParam2^), 0 );
        DESTROY_CAM( (uParam2^) );
    }
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_PROPAGATE( (uParam0^), 0 );
        SET_CAM_ACTIVE( (uParam0^), 0 );
        DESTROY_CAM( (uParam0^) );
    }
    if (DOES_CAM_EXIST( (uParam1^) ))
    {
        SET_CAM_PROPAGATE( (uParam1^), 0 );
        SET_CAM_ACTIVE( (uParam1^), 0 );
        DESTROY_CAM( (uParam1^) );
    }
    return;
}

void sub_18859(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3)
{
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    if (bParam2)
    {
        SET_PLAYER_CONTROL( sub_3496(), 1 );
    }
    if (bParam1)
    {
        SET_USE_HIGHDOF( 0 );
    }
    if (bParam3)
    {
        SET_CAM_BEHIND_PED( sub_3442() );
    }
    sub_18931();
    SET_WIDESCREEN_BORDERS( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_18931()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_19022()
{
    if (HAVE_ANIMS_LOADED( "gestures@niko" ))
    {
        REMOVE_ANIMS( "gestures@niko" );
    }
    return;
}

void sub_19544(unknown uParam0, boolean bParam1)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (bParam1)
    {
        SET_USE_HIGHDOF( 1 );
    }
    sub_19594();
    CLEAR_PRINTS();
    return;
}

void sub_19594()
{
    return sub_19605( 1, 1 );
}

int sub_19605(boolean bParam0, unknown uParam1)
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

void sub_20236(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_20257( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_20257(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_20311( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_20311(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_20333( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    sub_21009( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_20333(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_3222( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_3222( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_3222( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_21009(int iParam0, int iParam1)
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

void sub_25063(unknown uParam0)
{
    DISABLE_PAUSE_MENU( 1 );
    sub_18271();
    sub_6958();
    DO_SCREEN_FADE_IN( uParam0 );
    while (IS_SCREEN_FADING_IN())
    {
        DISABLE_PAUSE_MENU( 1 );
        WAIT( 0 );
    }
    DISABLE_PAUSE_MENU( 0 );
    return;
}

void sub_26933(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U3)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U1))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U2 + 500))
        {
            l_U1 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_27093()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3442() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U3)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U2 );
            l_U1 = 1;
            l_U0 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U1) AND (NOT l_U0))
        {
            if (l_U3)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U0 = 1;
        }
    }
    else if (l_U0)
    {
        if (l_U3)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U0 = 0;
    };;;
    return;
}

int sub_27093()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_30386()
{
    if (NOT (IS_CHAR_INJURED( sub_3442() )))
    {
        if (NOT l_U609)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3442() ))
            {
                GET_CAR_CHAR_IS_USING( sub_3442(), ref l_U519 );
                if (IS_VEH_DRIVEABLE( l_U519 ))
                {
                    SET_CAR_STRONG( l_U519, 1 );
                    l_U609 = 1;
                }
            }
        }
        else if (NOT (IS_CHAR_IN_ANY_CAR( sub_3442() )))
        {
            if (l_U609)
            {
                l_U609 = 0;
            }
        }
    }
    return;
}

void sub_30540()
{
    if (NOT (IS_CHAR_INJURED( sub_3442() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3442() ))
        {
            switch (l_U503)
            {
                case 0:
                PRINT_HELP( "F3_H1" );
                l_U503 = 3;
                break;
                default:
            }
        }
    }
    return;
}

void sub_36343()
{
    switch (l_U505)
    {
        case 1:
        PRINT( "FG_FAIL", 7500, 3 );
        break;
        case 2:
        PRINT( "FG_FAIL2", 7500, 3 );
        break;
    }
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3496(), 150 );
        if (NOT (IS_CHAR_INJURED( sub_3442() )))
        {
            SAY_AMBIENT_SPEECH( sub_3442(), "MISSION_FAIL_RAGE", 0, 0, 0 );
        }
    }
    sub_36513();
    sub_36647( 4, "F3_CALLF", "F3AUD", 0 );
    sub_2451();
    return;
}

void sub_36513()
{
    sub_36522();
    return;
}

void sub_36522()
{
    int iVar2;

    iVar2 = 4;
    sub_36536( iVar2 );
    sub_1540( iVar2 );
    return;
}

void sub_36536(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3496(), 150 );
    CLEAR_HELP();
    sub_364( uParam0 );
    return;
}

void sub_36647(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_36691( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_36691(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_37256()
{
    sub_37266( 10 );
    UNLOCK_MISSION_NEWS_STORY( 10 );
    sub_36647( 25, "MF5_KILLK", "MF10AUD", 0 );
    sub_40497( 3037, 3 );
    if (DOES_VEHICLE_EXIST( l_U520 ))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U520 )))
        {
            g_U9385 = 1;
        }
        else
        {
            CLEAR_WANTED_LEVEL( sub_3496() );
        }
    }
    else
    {
        CLEAR_WANTED_LEVEL( sub_3496() );
    }
    sub_40630();
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    sub_2451();
    return;
}

void sub_37266(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_37353( iParam0 ))
    {
        sub_38403( iParam0 );
    }
    return;
}

int sub_37353(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_37410( ref uVar3, 1, 0, 0 );
    sub_38022( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_3222( "\n ----------------------------------------------------------------" );
    sub_3973( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_3222( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_37410(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_37463( iParam0, uParam1, uParam2 );
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
        sub_37595( iParam0 + 0 );
    }
    return;
}

void sub_37463(int iParam0, int iParam1, int iParam2)
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
        sub_37595( iParam0 + 0 );
    }
    return;
}

void sub_37595(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_37626( iParam0->_fU4 )))
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

int sub_37626(unknown uParam0)
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

void sub_38022(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_38403(unknown uParam0)
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
        sub_38614( 20, 6, 16383, 16383, ref uVar4 );
        sub_39290( ref uVar4, 7 );
        sub_39321( ref uVar4, 0 );
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
        sub_38614( 20, 7, 9, 16383, ref uVar4 );
        sub_39290( ref uVar4, 7 );
        sub_39321( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_38614(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_38638( uParam0, 0, iParam4 + 0 );
    sub_38638( uParam1, 1, iParam4 + 0 );
    sub_38638( uParam2, 2, iParam4 + 0 );
    sub_38638( uParam3, 3, iParam4 + 0 );
    sub_38638( 0, 4, iParam4 + 0 );
    sub_38638( 1, 5, iParam4 + 0 );
    sub_38638( 65535, 6, iParam4 + 0 );
    sub_38638( 0, 12, iParam4 + 0 );
    sub_38638( 0, 11, iParam4 + 0 );
    sub_38638( 0, 14, iParam4 + 0 );
    sub_38638( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_38638( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_38638( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_38638(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_39290(int iParam0, unknown uParam1)
{
    sub_38638( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_39321(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_39361())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_40048( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_39847( iVar5 );
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

int sub_39361()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_39395( 5, g_U968[I] )) == 7)
        {
            sub_39847( I );
            return 1;
        }
    }
    return 0;
}

int sub_39395(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_39847(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_39920( 39 );
    return;
}

void sub_39920(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_40048(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_40109( uParam0, g_U968[Result] ))
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

int sub_40109(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_40497(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_40630()
{
    sub_40639();
    return;
}

void sub_40639()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_40657();
    sub_40716( iVar2, iVar3, iVar4 );
    return;
}

void sub_40657()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U479[I] = 4;
    }
    return;
}

void sub_40716(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 4;
    sub_40748( iVar5, uParam0, uParam1, uParam2, "Contact_5" );
    return;
}

void sub_40748(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_40844( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_40844( ref cVar9 );
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
            sub_40844( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_40844( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_40844( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_40844( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_41421( iParam0, iVar7 );;;
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
                sub_41818( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_41818( 0, 4 );
            }
        }
    }
    if (NOT (sub_41907( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3496(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3496() );
    }
    sub_1549();
    bVar27 = true;
    uVar28 = sub_41421( iParam0, iVar7 );
    uVar29 = sub_1006( iParam0 );
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
                sub_51283( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_51713();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_51798( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_51855( iParam0 );
                sub_51894( 0 );
                sub_1447( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_52002();
        }
    }
    if (bParam2)
    {
        sub_51713();
        sub_52090();
        sub_51894( 0 );
    }
    if (bParam3)
    {
        sub_51713();
        sub_52130();
        sub_51894( 0 );
        sub_1447( uVar29, 0 );
    }
    sub_893();
    return;
}

void sub_40844(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_41421(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1405( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_41818(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_41907(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_42115( uParam1 );
        break;
        case 1:
        bVar8 = sub_44193( uParam1 );
        break;
        case 2:
        bVar8 = sub_44419( uParam1 );
        break;
        case 3:
        bVar8 = sub_44569( uParam1 );
        break;
        case 4:
        bVar8 = sub_44847( uParam1 );
        break;
        case 5:
        bVar8 = sub_45150( uParam1 );
        break;
        case 6:
        bVar8 = sub_45349( uParam1 );
        break;
        case 7:
        bVar8 = sub_45575( uParam1 );
        break;
        case 8:
        bVar8 = sub_45810( uParam1 );
        break;
        case 9:
        bVar8 = sub_46185( uParam1 );
        break;
        case 10:
        bVar8 = sub_46432( uParam1 );
        break;
        case 11:
        bVar8 = sub_46571( uParam1 );
        break;
        case 12:
        bVar8 = sub_46870( uParam1 );
        break;
        case 13:
        bVar8 = sub_47098( uParam1 );
        break;
        case 14:
        bVar8 = sub_47385( uParam1 );
        break;
        case 15:
        bVar8 = sub_47667( uParam1 );
        break;
        case 16:
        bVar8 = sub_47949( uParam1 );
        break;
        case 17:
        bVar8 = sub_48150( uParam1 );
        break;
        case 18:
        bVar8 = sub_48223( uParam1 );
        break;
        case 19:
        bVar8 = sub_48437( uParam1 );
        break;
        case 20:
        bVar8 = sub_48690( uParam1 );
        break;
        case 21:
        bVar8 = sub_48937( uParam1 );
        break;
        case 22:
        bVar8 = sub_49138( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_43798( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_41421( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_49461( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_42115(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_42394( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_42394( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_42394( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_42394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_42394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_42394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_42394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_42394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_42394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_42394( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_42394( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_42394( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_42394( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_42394( iVar3, 0, 3, 1, 0, 0 );
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
        sub_42394( iVar3, 0, sub_43676(), sub_43942(), 0, 0 );
        break;
        default:
        sub_44101( "Friend 1", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Friend 1", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_42394(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_42405( uParam1 );
    sub_42579( uParam0, 0, uParam2 );
    sub_42579( uParam0, 1, uParam3 );
    sub_42579( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_40657();
    return;
}

void sub_42405(unknown uParam0)
{
    ADD_SCORE( sub_3496(), uParam0 );
    sub_42430( uParam0 );
    return;
}

void sub_42430(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1405( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_42579(unknown uParam0, int iParam1, int iParam2)
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
        sub_42736( uParam0 );
    }
    return;
}

void sub_42736(unknown uParam0)
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

int sub_43676()
{
    switch (l_U479[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_43798( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_43798(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_43942()
{
    switch (l_U479[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_43798( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_44101(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_44193(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42394( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_44101( "Contact 2", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 2", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44419(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_42394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_44101( "Girl 3", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Girl 3", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44569(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_42394( iVar3, 0, sub_43676(), sub_43942(), 0, 0 );
        break;
        default:
        sub_44101( "Friend 4", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Friend 4", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44847(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42394( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_42394( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_42394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_42394( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_44101( "Contact 5", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 5", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45150(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_44101( "Contact 7", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 7", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45349(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42394( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_44101( "Contact 7b", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 7b", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45575(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_42394( iVar3, 0, sub_43676(), sub_43942(), 0, 0 );
        break;
        default:
        sub_44101( "Friend 8", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Friend 8", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45810(unknown uParam0)
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
        sub_42394( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_42394( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_42394( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_42394( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_42394( iVar3, 0, sub_43676(), sub_43942(), 0, 0 );
        break;
        default:
        sub_44101( "Friend 9", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Friend 9", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46185(unknown uParam0)
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
        sub_42394( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_42394( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_42394( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_44101( "Contact 10", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_44101( "Contact 10", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46432(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_44101( "Girl 11", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Girl 11", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46571(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42394( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_42394( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_42394( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_42394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_42394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_44101( "Contact 12", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 12", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46870(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42394( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_44101( "Contact 13", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 13", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47098(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_42394( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_42394( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_42394( iVar3, 0, sub_43676(), sub_43942(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_44101( "Friend 15", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Friend 15", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47385(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42394( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_42394( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_42394( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_44101( "Contact 16", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 16", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47667(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_42394( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_42394( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_42394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_44101( "Contact 18", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 18", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47949(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_44101( "Contact 19", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 19", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48150(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_44101( "Girl 20", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48223(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_44101( "Contact 21", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 21", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48437(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42394( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_42394( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_44101( "Contact 22", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 22", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48690(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_42394( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42394( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_42394( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_44101( "Contact 24", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 24", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48937(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42394( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42394( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42394( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_44101( "Contact 25", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44101( "Contact 25", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49138(unknown uParam0)
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
        sub_42394( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_44101( "Girl 26", 1 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_44101( "Girl 26", 0 );
        sub_42394( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_49461(int iParam0, int iParam1)
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
    if (sub_49509( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_50240( iParam1 );
    }
    return;
}

int sub_49509(int iParam0, int iParam1)
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
            sub_49649( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_49649(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_49831( 0 );
    return;
}

void sub_49831(boolean bParam0)
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
        sub_50086();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_50086()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_50240(int iParam0)
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
        sub_50573( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_50573( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_50573( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_50573( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_50573( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_50573( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_50573( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_50573( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_50573( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_50573( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_50573( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_50573( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_50573( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_50573( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_50573( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_50573( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_50573( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_50573( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_50573( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_50573(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_51283(unknown uParam0, unknown uParam1)
{
    sub_51302( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_51302(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_51713()
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

int sub_51798(int iParam0, int iParam1)
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

void sub_51855(unknown uParam0)
{
    sub_792();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_51894(unknown uParam0)
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

void sub_52002()
{
    sub_52011();
    return;
}

void sub_52011()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_52090()
{
    sub_52011();
    return;
}

void sub_52130()
{
    sub_52011();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

