void main()
{
    int I;
    vector vVar3;
    vector vVar6;
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
    vector vVar25;
    vector vVar28;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    vector vVar38;
    int iVar41;
    unknown uVar42;
    unknown uVar43;
    int iVar44;
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
    int iVar55;
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
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    int iVar78;
    int iVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;

    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U4 = {0.00000000, 0.00000000, 0.00000000};
    l_U122 = {1.00000000, 1.00000000, 1.00000000};
    l_U125 = {0.00000000, 1.00000000, 0.00000000};
    l_U128 = {0.00000000, -1.00000000, 0.00000000};
    l_U141 = 0;
    l_U142 = 0;
    l_U153 = 100.00000000;
    l_U154 = 10.50000000;
    l_U155 = 0.50000000;
    l_U156 = 2.85000000;
    l_U165 = 0;
    l_U182 = -1;
    l_U186 = 0;
    l_U187 = 1;
    l_U188 = 1;
    l_U196 = 150.00000000;
    l_U286 = 0;
    l_U287 = 150.00000000;
    l_U337 = 0;
    l_U662 = 0;
    l_U663 = 0;
    l_U664 = 0;
    l_U665 = 0;
    l_U671 = 0;
    l_U672 = 0;
    l_U677 = 0;
    l_U814 = 0;
    l_U902 = {-85.46481000, 1304.91700000, 19.34120000};
    SET_MISSION_FLAG( 1 );
    vVar25 = {-100.36530000, 1300.38200000, 25.03240000};
    vVar28 = {-65.78860000, 1277.77900000, 20.43390000};
    LOAD_ADDITIONAL_TEXT( "FRANCI3", 0 );
    LOAD_ADDITIONAL_TEXT( "FM3AUD", 6 );
    sub_380( "FM3AUD" );
    if (NOT (IS_CHAR_DEAD( sub_493() )))
    {
        SET_PLAYER_CONTROL( sub_547(), 1 );
    }
    l_U667 = 0;
    l_U666 = 0;
    sub_651( -398.81940000, 283.37430000, 22.42835000, -421.58990000, 267.10510000, 8.22040500, -409.93110000, 250.59030000, 11.60430000, 270.00000000 );
    sub_952( 0, sub_493(), "Niko", 0 );
    STOP_PED_SPEAKING( sub_493(), 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1126();
        sub_3236();
    }
    if (g_U9893._fU24)
    {
        START_CUTSCENE_NOW( "FM_3" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "FM_3" );
    }
    # -sub_C1FFC0-0xc214c8( 2, ref l_U715 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U718 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U717 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U716 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U719 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U720 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U723 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U722 );
    LOAD_COMBAT_DECISION_MAKER( 11, ref l_U721 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U720, 30 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U719, 35 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U722, 10 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U723, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U720, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U722, 2 );
    REQUEST_MODEL( 1708842493 );
    REQUEST_MODEL( 467469635 );
    REQUEST_MODEL( -1143910864 );
    REQUEST_MODEL( -301223260 );
    REQUEST_MODEL( 1343144208 );
    REQUEST_MODEL( -196312163 );
    REQUEST_MODEL( -1490216169 );
    REQUEST_MODEL( 1069950328 );
    while ((NOT (HAS_MODEL_LOADED( 1069950328 ))) || ((NOT (HAS_MODEL_LOADED( -196312163 ))) || ((NOT (HAS_MODEL_LOADED( -1490216169 ))) || ((NOT (HAS_MODEL_LOADED( 1343144208 ))) || ((NOT (HAS_MODEL_LOADED( -301223260 ))) || ((NOT (HAS_MODEL_LOADED( -1143910864 ))) || ((NOT (HAS_MODEL_LOADED( 467469635 ))) || (NOT (HAS_MODEL_LOADED( 1708842493 ))))))))))
    {
        WAIT( 0 );
    }
    LOAD_ALL_OBJECTS_NOW();
    REQUEST_ANIMS( "missfrancis3" );
    while (NOT (HAVE_ANIMS_LOADED( "missfrancis3" )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_INJURED( sub_493() )))
    {
        LOAD_SCENE( -406.47590000, 280.68420000, 12.13320000 );
        SET_CHAR_COORDINATES( sub_493(), -406.47590000, 280.68420000, 12.13320000 );
        SET_CHAR_HEADING( sub_493(), 203.00000000 );
        SET_CAM_BEHIND_PED( sub_493() );
        GET_GAME_VIEWPORT_ID( ref uVar31 );
        CLEAR_ROOM_FOR_VIEWPORT( uVar31 );
        WAIT( 0 );
    }
    sub_4909();
    DO_SCREEN_FADE_IN( 1000 );
    if (NOT (IS_CHAR_DEAD( sub_493() )))
    {
        SET_PLAYER_CONTROL( sub_547(), 1 );
    }
    ADD_BLIP_FOR_COORD( vVar28.x, vVar28.y, vVar28.z, ref l_U679 );
    SET_ROUTE( l_U679, 1 );
    CLEAR_PRINTS();
    PRINT( "TS_PROJECT", 7500, 3 );
    l_U667 = 1;
    while (true)
    {
        switch (l_U667)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), -70.31460000, 1322.82300000, 19.99820000, 150.00000000, 150.00000000, 50.00000000, 0 ))
                {
                    sub_5440( ref l_U752[0], -90.20160000, 1287.33400000, 20.23800000, 358.59730000, l_U717, l_U720, 0 );
                    sub_5440( ref l_U752[1], -88.09820000, 1288.29900000, 20.23630000, 242.00000000, l_U717, l_U720, 0 );
                    sub_5440( ref l_U752[2], -89.94950000, 1289.25000000, 20.23630000, 242.00000000, l_U717, l_U720, 0 );
                    if ((NOT (IS_CHAR_INJURED( l_U752[1] ))) AND (NOT (IS_CHAR_INJURED( l_U752[0] ))))
                    {
                        TASK_LOOK_AT_CHAR( l_U752[0], l_U752[1], 60000, 0 );
                        TASK_PLAY_ANIM( l_U752[0], "street_chat_a", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U752[0] ))) AND (NOT (IS_CHAR_INJURED( l_U752[1] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar32 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U752[0] );
                        TASK_PLAY_ANIM( 0, "smoke_stand_a", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar32 );
                        TASK_PERFORM_SEQUENCE( l_U752[1], uVar32 );
                        CLEAR_SEQUENCE_TASK( uVar32 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U752[0] ))) AND (NOT (IS_CHAR_INJURED( l_U752[2] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar32 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U752[0] );
                        TASK_PLAY_ANIM( 0, "smoke_stand_b", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar32 );
                        TASK_PERFORM_SEQUENCE( l_U752[2], uVar32 );
                        CLEAR_SEQUENCE_TASK( uVar32 );
                    }
                    CREATE_CHAR( 8, -301223260, -64.97910000, 1308.57800000, 18.99850000, ref l_U724[0], 1 );
                    CREATE_CHAR( 8, -1143910864, -59.21220000, 1325.89000000, 20.43640000, ref l_U724[1], 1 );
                    CREATE_CHAR( 8, -301223260, -62.74660000, 1308.80200000, 18.99830000, ref l_U724[2], 1 );
                    CREATE_CHAR( 8, -1143910864, -67.66500000, 1325.41200000, 25.02310000, ref l_U724[3], 1 );
                    CREATE_CHAR( 8, -301223260, -58.75880000, 1323.44400000, 20.43640000, ref l_U724[4], 1 );
                    for ( I = 0; I <= 4; I++ )
                    {
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U724[I] );
                        SET_CHAR_DECISION_MAKER( l_U724[I], l_U717 );
                        SET_COMBAT_DECISION_MAKER( l_U724[I], l_U720 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U724[I], 5 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U724[I], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U724[0] )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar32 );
                        TASK_PLAY_ANIM( 0, "smoke_stand_b", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar32 );
                        TASK_PERFORM_SEQUENCE( l_U724[0], uVar32 );
                        CLEAR_SEQUENCE_TASK( uVar32 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U724[0] ))) AND (NOT (IS_CHAR_INJURED( l_U724[2] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar32 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U724[0] );
                        TASK_PLAY_ANIM( 0, "smoke_stand_b", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar32 );
                        TASK_PERFORM_SEQUENCE( l_U724[2], uVar32 );
                        CLEAR_SEQUENCE_TASK( uVar32 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U724[3] )))
                    {
                        SET_CHAR_HEADING( l_U724[3], 180.00000000 );
                        TASK_PLAY_ANIM( l_U724[3], "smoke_stand_b", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U724[4] ))) AND (NOT (IS_CHAR_INJURED( l_U724[1] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar33 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U724[4] );
                        TASK_PLAY_ANIM( 0, "street_chat_a", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar33 );
                        SET_COMBAT_DECISION_MAKER( l_U724[1], l_U722 );
                        TASK_PERFORM_SEQUENCE( l_U724[1], uVar33 );
                        CLEAR_SEQUENCE_TASK( uVar33 );
                        OPEN_SEQUENCE_TASK( ref uVar34 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U724[1] );
                        TASK_PLAY_ANIM( 0, "smoke_stand_b", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar34 );
                        SET_COMBAT_DECISION_MAKER( l_U724[4], l_U722 );
                        TASK_PERFORM_SEQUENCE( l_U724[4], uVar34 );
                        CLEAR_SEQUENCE_TASK( uVar34 );
                    }
                    CREATE_OBJECT( -1490216169, -127.79690000, 1325.65700000, 29.50000000, ref l_U775, 1 );
                    SET_OBJECT_HEADING( l_U775, 97.38201000 );
                    CREATE_OBJECT( -1490216169, -48.75220000, 1325.68300000, 29.50000000, ref l_U776, 1 );
                    SET_OBJECT_HEADING( l_U776, 270.99370000 );
                    CREATE_CHAR( 8, -301223260, -117.12210000, 1323.91300000, 20.43630000, ref l_U730[0], 1 );
                    CREATE_CHAR( 8, -1143910864, -117.44570000, 1326.32200000, 20.43660000, ref l_U730[1], 1 );
                    CREATE_CHAR( 8, -301223260, -114.33800000, 1305.34000000, 20.43630000, ref l_U730[2], 1 );
                    CREATE_CHAR( 8, -1143910864, -112.50800000, 1305.68100000, 20.43630000, ref l_U730[3], 1 );
                    for ( I = 0; I <= 3; I++ )
                    {
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U730[I] );
                        SET_CHAR_DECISION_MAKER( l_U730[I], l_U717 );
                        SET_COMBAT_DECISION_MAKER( l_U730[I], l_U720 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U730[I], 5 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U730[I], 1 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U730[1] ))) AND (NOT (IS_CHAR_INJURED( l_U730[0] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar33 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U730[1] );
                        TASK_PLAY_ANIM( 0, "street_chat_a", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar33 );
                        SET_COMBAT_DECISION_MAKER( l_U730[0], l_U722 );
                        TASK_PERFORM_SEQUENCE( l_U730[0], uVar33 );
                        CLEAR_SEQUENCE_TASK( uVar33 );
                        OPEN_SEQUENCE_TASK( ref uVar34 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U730[0] );
                        TASK_PLAY_ANIM( 0, "smoke_stand_b", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar34 );
                        SET_COMBAT_DECISION_MAKER( l_U730[1], l_U722 );
                        TASK_PERFORM_SEQUENCE( l_U730[1], uVar34 );
                        CLEAR_SEQUENCE_TASK( uVar34 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U730[3] ))) AND (NOT (IS_CHAR_INJURED( l_U730[2] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar33 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U730[2] );
                        TASK_PLAY_ANIM( 0, "street_chat_a", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar33 );
                        TASK_PERFORM_SEQUENCE( l_U730[3], uVar33 );
                        CLEAR_SEQUENCE_TASK( uVar33 );
                        OPEN_SEQUENCE_TASK( ref uVar34 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U730[3] );
                        TASK_PLAY_ANIM( 0, "smoke_stand_b", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar34 );
                        TASK_PERFORM_SEQUENCE( l_U730[2], uVar34 );
                        CLEAR_SEQUENCE_TASK( uVar34 );
                    }
                    l_U667 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if ((sub_8540( 1, 1 )) AND (LOCATE_CHAR_ON_FOOT_3D( sub_493(), vVar28.x, vVar28.y, vVar28.z, 1.60000000, 1.60000000, 1.00000000, 1 )))
                {
                    if (NOT (IS_CHAR_INJURED( sub_493() )))
                    {
                        SET_PED_IS_BLIND_RAGING( sub_493(), 1 );
                    }
                    CREATE_CHAR( 8, 1343144208, vVar25.x, vVar25.y, vVar25.z, ref l_U756, 1 );
                    SET_CHAR_DECISION_MAKER( l_U756, l_U717 );
                    SET_COMBAT_DECISION_MAKER( l_U756, l_U720 );
                    SET_ANIM_GROUP_FOR_CHAR( l_U756, "move_player" );
                    SET_PED_DIES_WHEN_INJURED( l_U756, 1 );
                    sub_952( 5, l_U756, "CLARENCE", 0 );
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U756, 0 );
                    SET_CHAR_HEALTH( l_U756, 250 );
                    SET_CURRENT_CHAR_WEAPON( l_U756, 0, 0 );
                    UNLOCK_RAGDOLL( l_U756, 0 );
                    l_U790 = 1;
                    CREATE_CHAR( 8, -301223260, -82.54490000, 1299.54700000, 25.03400000, ref l_U735[0], 1 );
                    CREATE_CHAR( 8, -1143910864, -84.03140000, 1299.54700000, 25.03500000, ref l_U735[1], 1 );
                    CREATE_CHAR( 8, -301223260, -98.74260000, 1300.30000000, 25.02780000, ref l_U735[2], 1 );
                    if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( l_U735[2] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar35 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U735[2] );
                        CLOSE_SEQUENCE_TASK( uVar35 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar35 );
                        CLEAR_SEQUENCE_TASK( uVar35 );
                    }
                    for ( I = 0; I <= 2; I++ )
                    {
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U735[I] );
                        SET_CHAR_DECISION_MAKER( l_U735[I], l_U717 );
                        SET_COMBAT_DECISION_MAKER( l_U735[I], l_U719 );
                        GIVE_WEAPON_TO_CHAR( l_U735[I], 13, 9999, 0 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U735[I], 5 );
                        SET_CURRENT_CHAR_WEAPON( l_U735[I], 0, 0 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U735[I], 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U735[0] )))
                    {
                        SET_CHAR_HEADING( l_U735[0], 180.00000000 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U735[1] )))
                    {
                        SET_CHAR_HEADING( l_U735[1], 180.00000000 );
                        OPEN_SEQUENCE_TASK( ref uVar36 );
                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "stairs_chat_b", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        TASK_PLAY_ANIM( 0, "lean_balcony_loopa", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar36 );
                        TASK_PERFORM_SEQUENCE( l_U735[1], uVar36 );
                        CLEAR_SEQUENCE_TASK( uVar36 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( l_U735[2] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar37 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U756 );
                        TASK_PLAY_ANIM( 0, "street_chat_a", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar37 );
                        TASK_PERFORM_SEQUENCE( l_U735[2], uVar37 );
                        CLEAR_SEQUENCE_TASK( uVar37 );
                    }
                    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -60.26000000, 1325.26400000, 30.68000000, 0, 0, 0, ref l_U783 );
                    sub_5440( ref l_U757[0], -58.52680000, 1327.74900000, 26.01840000, 289.00000000, l_U717, l_U720, 0 );
                    sub_5440( ref l_U757[1], -117.15190000, 1327.50400000, 26.01940000, 114.96000000, l_U717, l_U720, 0 );
                    if (NOT (IS_CHAR_INJURED( l_U757[0] )))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U757[0], 7, 90, 0 );
                        SET_COMBAT_DECISION_MAKER( l_U757[0], l_U722 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U757[1] )))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U757[1], 7, 90, 0 );
                        SET_COMBAT_DECISION_MAKER( l_U757[1], l_U722 );
                    }
                    SET_WANTED_MULTIPLIER( 0.00000000 );
                    l_U667 = 3;
                }
            }
            for ( I = 0; I <= 4; I++ )
            {
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (DOES_CHAR_EXIST( l_U724[I] ))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U724[I], sub_493(), 0 ))
                        {
                            l_U788 = 1;
                            sub_10166();
                        }
                        if (NOT (IS_CHAR_INJURED( l_U724[I] )))
                        {
                            if ((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U724[I] )))
                            {
                                l_U788 = 1;
                                sub_10166();
                            }
                        }
                    }
                }
            }
            for ( I = 0; I <= 3; I++ )
            {
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (DOES_CHAR_EXIST( l_U730[I] ))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U730[I], sub_493(), 0 ))
                        {
                            l_U788 = 1;
                            sub_10166();
                        }
                        if (NOT (IS_CHAR_INJURED( l_U730[I] )))
                        {
                            if ((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U730[I] )))
                            {
                                l_U788 = 1;
                                sub_10166();
                            }
                        }
                    }
                }
            }
            for ( I = 0; I <= 2; I++ )
            {
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (DOES_CHAR_EXIST( l_U752[I] ))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U752[I], sub_493(), 0 ))
                        {
                            l_U788 = 1;
                            sub_10166();
                        }
                        if (NOT (IS_CHAR_INJURED( l_U752[I] )))
                        {
                            if ((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U752[I] )))
                            {
                                l_U788 = 1;
                                sub_10166();
                            }
                        }
                    }
                }
            }
            if (IS_EXPLOSION_IN_AREA( -1, -39.08418000, 1276.35600000, 18.86783000, -138.85530000, 1330.32900000, 34.69644000 ))
            {
                l_U788 = 1;
                sub_10166();
            }
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_SHOOTING_IN_AREA( sub_493(), -35.43067000, 1272.92900000, -140.42870000, 1330.20700000, 0 ))
                {
                    l_U788 = 1;
                    sub_10166();
                }
            }
            break;
            case 3:
            vVar38 = {-121.38890000, 1326.43300000, 20.42280000};
            GET_GAME_TIMER( ref l_U674 );
            switch (l_U670)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_547(), 0 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_493(), 1 );
                sub_11503( 1000 );
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    SET_CHAR_COORDINATES( sub_493(), -65.45659000, 1279.16700000, 19.40000000 );
                    SET_CHAR_HEADING( sub_493(), 13.27000000 );
                    SET_CHAR_DUCKING( sub_493(), 0 );
                    if (NOT (IS_CHAR_INJURED( sub_493() )))
                    {
                        TASK_USE_MOBILE_PHONE( sub_493(), 1 );
                    }
                }
                sub_11725();
                WAIT( 2000 );
                sub_952( 8, 0, "FRANCIS_MCREARY", 0 );
                LOAD_SCENE( vVar38.x, vVar38.y, vVar38.z );
                ADD_NEEDED_AT_POSN( vVar38.x, vVar38.y, vVar38.z );
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref iVar41 );
                if (iVar41 != nil)
                {
                    if (IS_VEH_DRIVEABLE( iVar41 ))
                    {
                        if (IS_CAR_IN_AREA_3D( iVar41, -31.37435000, 1270.81900000, 18.65867000, -146.63730000, 1336.59600000, 37.24186000, 0 ))
                        {
                            SET_CAR_COORDINATES( iVar41, -81.66250000, 1258.37400000, 19.30940000 );
                            SET_CAR_HEADING( iVar41, 90.00000000 );
                            SET_CAR_ON_GROUND_PROPERLY( iVar41 );
                        }
                    }
                    else
                    {
                        DELETE_CAR( ref iVar41 );
                    }
                }
                CLEAR_AREA( -64.50519000, 1279.53100000, 20.78990000, 3.00000000, 1 );
                CLEAR_AREA( -100.16500000, 1302.91700000, 27.11318000, 10.00000000, 1 );
                CLEAR_AREA( -88.98425000, 1280.31400000, 20.54112000, 10.00000000, 1 );
                CLEAR_AREA( -62.23277000, 1322.96200000, 19.72273000, 10.00000000, 1 );
                CLEAR_AREA( -113.97880000, 1324.02500000, 20.12729000, 10.00000000, 1 );
                CLEAR_AREA( -64.84360000, 1280.56000000, 20.88410000, 10.00000000, 1 );
                CLEAR_AREA( -64.84360000, 1280.56000000, 20.88410000, 10.00000000, 1 );
                CREATE_CAM( 14, ref l_U772 );
                sub_12284( ref l_U672, 1 );
                SET_CAM_POS( l_U772, -64.18132000, 1278.69800000, 20.76800000 );
                SET_CAM_ROT( l_U772, 2.86081900, -0.00000000, 40.47752000 );
                SET_CAM_FOV( l_U772, 59.69996000 );
                SET_CAM_ACTIVE( l_U772, 1 );
                SET_CAM_PROPAGATE( l_U772, 1 );
                DO_SCREEN_FADE_IN( 1000 );
                while (IS_SCREEN_FADING_IN())
                {
                    ADD_NEEDED_AT_POSN( vVar38.x, vVar38.y, vVar38.z );
                    WAIT( 0 );
                }
                l_U670 = 10;
                break;
                case 10:
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (IS_CHAR_PLAYING_ANIM( sub_493(), "cellphone", "cellphone_talk" ))
                    {
                        sub_12685( "FM3_INTRO1", ref l_U890, 8, 1 );
                        l_U670 = 3;
                    }
                }
                break;
                case 3:
                if (NOT (sub_3829( l_U890 )))
                {
                    sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                    CREATE_CAM( 14, ref l_U772 );
                    CREATE_CAM( 14, ref l_U773 );
                    SET_CAM_POS( l_U772, -86.85360000, 1284.85400000, 20.79850000 );
                    SET_CAM_ROT( l_U772, 8.70496200, 0.00000000, 46.30680000 );
                    SET_CAM_FOV( l_U772, 45.00000000 );
                    SET_CAM_POS( l_U773, -86.81736000, 1284.81900000, 24.99819000 );
                    SET_CAM_ROT( l_U773, 0.68355300, -0.00000000, 46.30680000 );
                    SET_CAM_FOV( l_U773, 32.40003000 );
                    CREATE_CAM( 3, ref l_U774 );
                    SET_CAM_INTERP_STYLE_CORE( l_U774, l_U772, l_U773, 5000, 0 );
                    SET_CAM_ACTIVE( l_U774, 1 );
                    SET_CAM_PROPAGATE( l_U774, 1 );
                    sub_12685( "FM3_INTRO2", ref l_U890, 8, 1 );
                    l_U670 = 2;
                }
                break;
                case 2:
                if (NOT (sub_3829( l_U890 )))
                {
                    sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                    CREATE_CAM( 14, ref l_U772 );
                    SET_CAM_POS( l_U772, -98.54345000, 1299.34500000, 26.34979000 );
                    SET_CAM_ROT( l_U772, -0.00397800, -0.00000000, 34.86241000 );
                    SET_CAM_FOV( l_U772, 59.69996000 );
                    SET_CAM_NEAR_DOF( l_U772, 1.00000000 );
                    SET_CAM_FAR_DOF( l_U772, 6.00000000 );
                    SET_CAM_ACTIVE( l_U772, 1 );
                    SET_CAM_PROPAGATE( l_U772, 1 );
                    sub_12685( "FM3_INTRO3", ref l_U890, 8, 1 );
                    l_U670 = 5;
                }
                break;
                case 5:
                if (NOT (sub_3829( l_U890 )))
                {
                    DISABLE_PAUSE_MENU( 1 );
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        ADD_NEEDED_AT_POSN( vVar38.x, vVar38.y, vVar38.z );
                        WAIT( 0 );
                    }
                    DISABLE_PAUSE_MENU( 0 );
                    sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                    CREATE_CAM( 14, ref l_U772 );
                    CREATE_CAM( 14, ref l_U773 );
                    SET_CAM_POS( l_U772, -60.80441000, 1323.63800000, 20.07873000 );
                    SET_CAM_ROT( l_U772, 12.69487000, -0.00000000, -64.66211000 );
                    SET_CAM_NEAR_DOF( l_U772, 1.00000000 );
                    SET_CAM_FAR_DOF( l_U772, 6.00000000 );
                    SET_CAM_ACTIVE( l_U772, 1 );
                    SET_CAM_PROPAGATE( l_U772, 1 );
                    LOAD_SCENE( -56.30380000, 1325.57400000, 19.43700000 );
                    DO_SCREEN_FADE_IN( 500 );
                    while (IS_SCREEN_FADING_IN())
                    {
                        ADD_NEEDED_AT_POSN( vVar38.x, vVar38.y, vVar38.z );
                        WAIT( 0 );
                    }
                    sub_12685( "FM3_INTRO4", ref l_U890, 8, 1 );
                    l_U670 = 6;
                }
                break;
                case 6:
                if (NOT (sub_3829( l_U890 )))
                {
                    sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                    CREATE_CAM( 14, ref l_U772 );
                    SET_CAM_POS( l_U772, -126.14950000, 1326.30200000, 25.04450000 );
                    SET_CAM_ROT( l_U772, -33.23145000, 0.00000000, -101.96580000 );
                    SET_CAM_FOV( l_U772, 30.00004000 );
                    SET_CAM_ACTIVE( l_U772, 1 );
                    SET_CAM_PROPAGATE( l_U772, 1 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    sub_12685( "FM3_INTRO5", ref l_U890, 8, 1 );
                    l_U670 = 8;
                }
                break;
                case 8:
                if (NOT (sub_3829( l_U890 )))
                {
                    sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                    CREATE_CAM( 14, ref l_U772 );
                    SET_CAM_POS( l_U772, -65.33649000, 1281.43300000, 20.40526000 );
                    SET_CAM_ROT( l_U772, 12.60108000, -0.00000000, 156.44420000 );
                    SET_CAM_FOV( l_U772, 55.79997000 );
                    SET_CAM_NEAR_DOF( l_U772, 1.00000000 );
                    SET_CAM_FAR_DOF( l_U772, 6.00000000 );
                    SET_CAM_ACTIVE( l_U772, 1 );
                    SET_CAM_PROPAGATE( l_U772, 1 );
                    sub_12685( "FM3_INTRO6", ref l_U890, 8, 1 );
                    l_U670 = 11;
                }
                break;
                case 11:
                if (NOT (sub_3829( l_U890 )))
                {
                    l_U670 = 12;
                }
                break;
                case 12:
                sub_11503( 1000 );
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    SET_CHAR_COORDINATES( sub_493(), -65.41710000, 1279.39100000, 19.42930000 );
                    SET_CHAR_HEADING( sub_493(), 0 );
                    TASK_USE_MOBILE_PHONE( sub_493(), 0 );
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_493(), 0 );
                }
                sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                sub_15253( ref l_U672, 1, 1, 1 );
                sub_15387();
                if (NOT (IS_CHAR_INJURED( l_U756 )))
                {
                    REMOVE_BLIP( l_U679 );
                    ADD_BLIP_FOR_CHAR( l_U756, ref l_U678 );
                    SET_CHAR_AS_ENEMY( l_U756, 1 );
                    SET_ROUTE( l_U678, 1 );
                }
                DO_SCREEN_FADE_IN( 1000 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                PRINT( "TS_GOAL1", 7500, 3 );
                l_U667 = 4;
                break;
            }
            if ((NOT (l_U670 == 1)) AND ((NOT (l_U670 == 0)) AND (sub_15595())))
            {
                sub_11503( 1000 );
                sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                sub_15253( ref l_U672, 1, 1, 1 );
                sub_15387();
                if (sub_3829( l_U890 ))
                {
                    sub_4011( ref l_U890, 0 );
                }
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    SET_CHAR_COORDINATES( sub_493(), -65.41710000, 1279.39100000, 19.42930000 );
                    SET_CHAR_HEADING( sub_493(), 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_493() );
                }
                if (NOT (IS_CHAR_INJURED( l_U756 )))
                {
                    REMOVE_BLIP( l_U679 );
                    ADD_BLIP_FOR_CHAR( l_U756, ref l_U678 );
                    SET_CHAR_AS_ENEMY( l_U756, 1 );
                    SET_ROUTE( l_U678, 1 );
                }
                DO_SCREEN_FADE_IN( 1000 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                CLEAR_PRINTS();
                PRINT( "TS_GOAL1", 7500, 3 );
                l_U667 = 4;
            }
            ADD_NEEDED_AT_POSN( vVar38.x, vVar38.y, vVar38.z );
            break;
            case 4:
            sub_16030();
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_SHOOTING_IN_AREA( sub_493(), -63.74437000, 1276.10100000, -110.33380000, 1303.70600000, 0 ))
                {
                    l_U666 = 1;
                }
                if (IS_CHAR_SHOOTING_IN_AREA( sub_493(), -131.86740000, 1301.74500000, -101.28180000, 1327.91100000, 0 ))
                {
                    l_U666 = 2;
                }
                if (IS_CHAR_SHOOTING_IN_AREA( sub_493(), -38.61101000, 1301.38700000, -75.42310000, 1328.56200000, 0 ))
                {
                    l_U666 = 4;
                }
            }
            for ( I = 0; I <= 4; I++ )
            {
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U724[I] )))
                    {
                        if (((IS_CHAR_IN_AREA_3D( sub_493(), -142.07700000, 1261.49800000, 18.71912000, -23.16429000, 1344.24000000, 48.62354000, 0 )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U724[I] ))) || (((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U724[I] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U724[I], sub_493(), 0 ))))
                        {
                            l_U666 = 4;
                        }
                    }
                }
            }
            for ( I = 0; I <= 3; I++ )
            {
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U730[I] )))
                    {
                        if (((IS_CHAR_IN_AREA_3D( sub_493(), -142.07700000, 1261.49800000, 18.71912000, -23.16429000, 1344.24000000, 48.62354000, 0 )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U730[I] ))) || (((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U730[I] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U730[I], sub_493(), 0 ))))
                        {
                            l_U666 = 2;
                        }
                    }
                }
            }
            for ( I = 0; I <= 2; I++ )
            {
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U752[I] )))
                    {
                        if (((IS_CHAR_IN_AREA_3D( sub_493(), -142.07700000, 1261.49800000, 18.71912000, -23.16429000, 1344.24000000, 48.62354000, 0 )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U752[I] ))) || (((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U752[I] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U752[I], sub_493(), 0 ))))
                        {
                            l_U666 = 1;
                        }
                    }
                }
            }
            for ( I = 0; I <= 2; I++ )
            {
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U735[I] )))
                    {
                        if (((IS_CHAR_IN_AREA_3D( sub_493(), -142.07700000, 1261.49800000, 18.71912000, -23.16429000, 1344.24000000, 48.62354000, 0 )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U735[I] ))) || (((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U735[I] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U735[I], sub_493(), 0 ))))
                        {
                            l_U666 = 1;
                        }
                    }
                }
            }
            if (IS_EXPLOSION_IN_AREA( -1, -39.08418000, 1276.35600000, 18.86783000, -138.85530000, 1330.32900000, 34.69644000 ))
            {
                l_U666 = 1;
            }
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U756 )))
                {
                    if (((IS_CHAR_IN_AREA_3D( sub_493(), -142.07700000, 1261.49800000, 18.71912000, -23.16429000, 1344.24000000, 48.62354000, 0 )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U756 ))) || (((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U756 ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U756, sub_493(), 0 ))))
                    {
                        l_U666 = 1;
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U757[0] )))
                {
                    if (((IS_CHAR_IN_AREA_3D( sub_493(), -142.07700000, 1261.49800000, 18.71912000, -23.16429000, 1344.24000000, 48.62354000, 0 )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U757[0] ))) || (((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U757[0] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U757[0], sub_493(), 0 ))))
                    {
                        l_U666 = 4;
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U757[1] )))
                {
                    if (((IS_CHAR_IN_AREA_3D( sub_493(), -142.07700000, 1261.49800000, 18.71912000, -23.16429000, 1344.24000000, 48.62354000, 0 )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U757[1] ))) || (((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U757[1] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U757[1], sub_493(), 0 ))))
                    {
                        l_U666 = 2;
                    }
                }
            }
            if ((NOT l_U799) AND ((NOT l_U791) AND (NOT (IS_CHAR_INJURED( sub_493() )))))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), -62.74660000, 1308.80200000, 18.99830000, 7.00000000, 7.00000000, 4.00000000, 0 ))
                {
                    if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U724[2] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar42 );
                        TASK_LOOK_AT_CHAR( 0, sub_493(), 15000, 0 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar42 );
                        CLEAR_PRINTS();
                        sub_952( 1, l_U724[2], "thug_1", 0 );
                        sub_12685( "FM3_THUG1", ref l_U836, 6, 1 );
                        TASK_PERFORM_SEQUENCE( l_U724[2], uVar42 );
                        CLEAR_SEQUENCE_TASK( uVar42 );
                    }
                    l_U791 = 1;
                }
            }
            if ((NOT l_U799) AND ((NOT l_U797) AND (NOT (IS_CHAR_INJURED( sub_493() )))))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), -114.33800000, 1305.34000000, 20.43630000, 7.00000000, 7.00000000, 4.00000000, 0 ))
                {
                    if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U730[2] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar42 );
                        TASK_LOOK_AT_CHAR( 0, sub_493(), 15000, 0 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar42 );
                        SET_AMBIENT_VOICE_NAME( l_U730[2], "M_Y_GAFR_LO_01_GANG_01" );
                        sub_952( 2, l_U730[2], "thug_2", 0 );
                        sub_12685( "FM3_THUG2", ref l_U842, 6, 1 );
                        TASK_PERFORM_SEQUENCE( l_U730[2], uVar42 );
                        CLEAR_SEQUENCE_TASK( uVar42 );
                    }
                    l_U797 = 1;
                }
            }
            if ((NOT l_U799) AND (NOT l_U793))
            {
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), -90.78610000, 1286.25400000, 20.23600000, 9.00000000, 8.00000000, 2.00000000, 0 ))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U752[1] ))) AND ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U752[0] )))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar43 );
                            TASK_LOOK_AT_CHAR( 0, sub_493(), 15000, 0 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                            CLOSE_SEQUENCE_TASK( uVar43 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U752[0] );
                            TASK_PERFORM_SEQUENCE( l_U752[0], uVar43 );
                            CLEAR_SEQUENCE_TASK( uVar43 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U752[0] )))
                        {
                            sub_952( 3, l_U752[0], "thug_3", 0 );
                            sub_12685( "FM3_THUG3", ref l_U848, 6, 1 );
                        }
                        if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND ((NOT (IS_CHAR_INJURED( l_U752[0] ))) AND (NOT (IS_CHAR_INJURED( l_U752[1] )))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar43 );
                            TASK_LOOK_AT_CHAR( 0, sub_493(), 18000, 0 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U752[0] );
                            TASK_PLAY_ANIM( 0, "smoke_stand_b", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                            CLOSE_SEQUENCE_TASK( uVar43 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U752[1] );
                            TASK_PERFORM_SEQUENCE( l_U752[1], uVar43 );
                            CLEAR_SEQUENCE_TASK( uVar43 );
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U752[0] ))) AND ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U752[2] )))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar43 );
                            TASK_LOOK_AT_CHAR( 0, sub_493(), 7000, 0 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U752[0] );
                            TASK_PLAY_ANIM( 0, "smoke_stand_a", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                            CLOSE_SEQUENCE_TASK( uVar43 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U752[2] );
                            TASK_PERFORM_SEQUENCE( l_U752[2], uVar43 );
                            CLEAR_SEQUENCE_TASK( uVar43 );
                        }
                        l_U793 = 1;
                    }
                }
            }
            if (NOT l_U799)
            {
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (IS_CHAR_IN_AREA_3D( sub_493(), -62.77290000, 1320.30700000, 22.72439000, -53.61643000, 1327.45900000, 19.48010000, 0 ))
                    {
                        GET_CURRENT_CHAR_WEAPON( sub_493(), ref iVar44 );
                        if (iVar44 != 0)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U724[1] )))
                            {
                                sub_952( 7, 0, "FM3_PROJECT_GUARD", 0 );
                                sub_952( 7, l_U724[1], "FM3_PROJECT_GUARD", 0 );
                                sub_12685( "FM3_PROJG", ref l_U872, 7, 1 );
                            }
                            l_U666 = 5;
                        }
                        else if (NOT l_U792)
                        {
                            if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U724[4] ))))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar45 );
                                TASK_LOOK_AT_CHAR( 0, sub_493(), 5000, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                                CLOSE_SEQUENCE_TASK( uVar45 );
                                TASK_PERFORM_SEQUENCE( l_U724[4], uVar45 );
                                CLEAR_SEQUENCE_TASK( uVar45 );
                                sub_952( 4, 0, "thug_4", 0 );
                                sub_952( 4, l_U724[4], "thug_4", 0 );
                                sub_12685( "FM3_UP1", ref l_U860, 6, 1 );
                                l_U792 = 1;
                            }
                        }
                    }
                }
            }
            if (NOT l_U799)
            {
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (IS_CHAR_IN_AREA_3D( sub_493(), -123.89690000, 1327.46500000, 20.05850000, -113.95820000, 1320.62200000, 22.37178000, 0 ))
                    {
                        GET_CURRENT_CHAR_WEAPON( sub_493(), ref iVar44 );
                        if (iVar44 != 0)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U730[1] )))
                            {
                                sub_952( 7, 0, "FM3_PROJECT_GUARD", 0 );
                                sub_952( 7, l_U730[1], "FM3_PROJECT_GUARD", 0 );
                                sub_12685( "FM3_PROJG", ref l_U872, 7, 1 );
                            }
                            l_U666 = 3;
                        }
                        else if (NOT l_U798)
                        {
                            if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U730[0] ))))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar45 );
                                TASK_LOOK_AT_CHAR( 0, sub_493(), 15000, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                                CLOSE_SEQUENCE_TASK( uVar45 );
                                TASK_PERFORM_SEQUENCE( l_U730[0], uVar45 );
                                CLEAR_SEQUENCE_TASK( uVar45 );
                                sub_952( 4, 0, "thug_4", 0 );
                                sub_952( 4, l_U730[0], "thug_4", 0 );
                                sub_12685( "FM3_UP1", ref l_U866, 6, 1 );
                            }
                            if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U730[1] ))))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar45 );
                                TASK_LOOK_AT_CHAR( 0, sub_493(), 10000, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U752[0] );
                                TASK_PLAY_ANIM( 0, "smoke_stand_b", "missfrancis3", 8.00000000, 1, 0, 0, 0, -2 );
                                CLOSE_SEQUENCE_TASK( uVar45 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U752[1] );
                                TASK_PERFORM_SEQUENCE( l_U752[1], uVar45 );
                                CLEAR_SEQUENCE_TASK( uVar45 );
                            }
                            l_U798 = 1;
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if ((IS_CHAR_IN_AREA_3D( sub_493(), -46.90738000, 1326.94500000, 33.13568000, -54.80001000, 1325.12200000, 28.64790000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_493(), -46.81655000, 1327.29400000, 24.97706000, -58.24519000, 1330.45800000, 28.67368000, 0 )))
                {
                    if ((NOT (IS_CHAR_INJURED( l_U757[0] ))) AND (NOT l_U799))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar46 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                        TASK_SWAP_WEAPON( 0, 1 );
                        TASK_PLAY_ANIM( 0, "point_fwd", "missfrancis3", 8.00000000, 0, 0, 0, 0, -1 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar46 );
                        TASK_PERFORM_SEQUENCE( l_U757[0], uVar46 );
                        CLEAR_SEQUENCE_TASK( uVar46 );
                        sub_952( 7, l_U757[0], "FM3_PROJECT_GUARD", 0 );
                        sub_12685( "FM3_PROJG", ref l_U878, 8, 1 );
                    }
                    if (DOES_CHAR_EXIST( l_U757[1] ))
                    {
                        DELETE_CHAR( ref l_U757[1] );
                    }
                    l_U666 = 6;
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if ((IS_CHAR_IN_AREA_3D( sub_493(), -129.34870000, 1325.08900000, 33.24553000, -121.58400000, 1326.90700000, 28.52102000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_493(), -126.68380000, 1327.16900000, 25.07790000, -120.31750000, 1330.18300000, 28.60634000, 0 )))
                {
                    if ((NOT (IS_CHAR_INJURED( l_U757[1] ))) AND (NOT l_U799))
                    {
                        GET_CURRENT_CHAR_WEAPON( sub_493(), ref iVar44 );
                        if (iVar44 != 0)
                        {
                            OPEN_SEQUENCE_TASK( ref uVar46 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                            TASK_PLAY_ANIM( 0, "point_fwd", "missfrancis3", 8.00000000, 0, 0, 0, 0, -1 );
                            TASK_SWAP_WEAPON( 0, 1 );
                            TASK_COMBAT( 0, sub_493() );
                            CLOSE_SEQUENCE_TASK( uVar46 );
                            sub_952( 7, l_U757[1], "FM3_PROJECT_GUARD", 0 );
                            sub_12685( "FM3_PROJG", ref l_U878, 8, 1 );
                        }
                        else
                        {
                            OPEN_SEQUENCE_TASK( ref uVar46 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                            TASK_PLAY_ANIM( 0, "point_fwd", "missfrancis3", 8.00000000, 0, 0, 0, 0, -1 );
                            TASK_SET_COMBAT_DECISION_MAKER( 0, l_U719 );
                            TASK_COMBAT( 0, sub_493() );
                            CLOSE_SEQUENCE_TASK( uVar46 );
                            REMOVE_ALL_CHAR_WEAPONS( l_U757[1] );
                        }
                        TASK_PERFORM_SEQUENCE( l_U757[1], uVar46 );
                        CLEAR_SEQUENCE_TASK( uVar46 );
                        sub_952( 7, l_U757[1], "FM3_PROJECT_GUARD", 0 );
                        sub_12685( "FM3_PROJG", ref l_U878, 8, 1 );
                    }
                    if (DOES_CHAR_EXIST( l_U757[0] ))
                    {
                        DELETE_CHAR( ref l_U757[0] );
                    }
                    l_U666 = 7;
                }
            }
            switch (l_U666)
            {
                case 6: l_U667 = 17;
                case 5:
                case 4:
                if (NOT l_U799)
                {
                    for ( I = 0; I <= 4; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U724[I] )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U724[I], 5, 0 );
                            GIVE_WEAPON_TO_CHAR( l_U724[I], 7, 9999, 0 );
                            SET_CHAR_DECISION_MAKER( l_U724[I], l_U716 );
                        }
                    }
                    if (l_U666 == 5)
                    {
                        if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U724[3] ))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar47 );
                            TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                            TASK_COMBAT( 0, sub_493() );
                            CLOSE_SEQUENCE_TASK( uVar47 );
                            GIVE_WEAPON_TO_CHAR( l_U724[3], 7, 9999, 0 );
                            SET_CHAR_COORDINATES( l_U724[3], -67.70630000, 1326.32900000, 25.02200000 );
                            SET_CHAR_HEADING( l_U724[3], 270.00000000 );
                            TASK_PERFORM_SEQUENCE( l_U724[3], uVar47 );
                            CLEAR_SEQUENCE_TASK( uVar47 );
                        }
                    }
                    else if (l_U666 == 6)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U724[3] )))
                        {
                            if (iVar44 != 0)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar46 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                                TASK_LOOK_AT_CHAR( 0, sub_493(), 4000, 0 );
                                TASK_STAND_STILL( 0, 4000 );
                                TASK_SWAP_WEAPON( 0, 1 );
                                TASK_COMBAT( 0, sub_493() );
                                CLOSE_SEQUENCE_TASK( uVar46 );
                                TASK_PERFORM_SEQUENCE( l_U724[3], uVar46 );
                                CLEAR_SEQUENCE_TASK( uVar46 );
                            }
                            else
                            {
                                OPEN_SEQUENCE_TASK( ref uVar46 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                                TASK_LOOK_AT_CHAR( 0, sub_493(), 4000, 0 );
                                TASK_STAND_STILL( 0, 4000 );
                                TASK_SET_COMBAT_DECISION_MAKER( 0, l_U719 );
                                TASK_COMBAT( 0, sub_493() );
                                CLOSE_SEQUENCE_TASK( uVar46 );
                                REMOVE_ALL_CHAR_WEAPONS( l_U724[3] );
                                TASK_PERFORM_SEQUENCE( l_U724[3], uVar46 );
                                CLEAR_SEQUENCE_TASK( uVar46 );
                            }
                        }
                    }
                    else if ((NOT l_U823) AND (NOT (IS_CHAR_INJURED( l_U724[2] ))))
                    {
                        sub_952( 1, 0, "thug_1", 0 );
                        sub_952( 1, l_U724[2], "thug_1", 0 );
                        sub_12685( "FM3_ATTK1", ref l_U830, 7, 1 );
                        l_U823 = 1;
                    }
                    if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U724[3] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar47 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar47 );
                        CLEAR_CHAR_TASKS( l_U724[3] );
                        TASK_PERFORM_SEQUENCE( l_U724[3], uVar47 );
                        CLEAR_SEQUENCE_TASK( uVar47 );
                    };;;
                    if (NOT (IS_CHAR_INJURED( l_U724[0] )))
                    {
                        TASK_GUARD_CURRENT_POSITION( l_U724[0], 0.00000000, 8.00000000, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U724[1] )))
                    {
                        TASK_GUARD_CURRENT_POSITION( l_U724[1], 0.00000000, 8.00000000, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U724[2] )))
                    {
                        TASK_GUARD_CURRENT_POSITION( l_U724[2], 0.00000000, 8.00000000, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U724[4] )))
                    {
                        TASK_GUARD_CURRENT_POSITION( l_U724[4], 0.00000000, 8.00000000, 1 );
                    }
                    for ( I = 0; I <= 3; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U730[I] )))
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U730[I] );
                        }
                    }
                    for ( I = 0; I <= 2; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U752[I] )))
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[I] );
                        }
                    }
                    if (l_U666 != 6)
                    {
                        if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U757[0] ))))
                        {
                            SET_CHAR_RELATIONSHIP( l_U757[0], 5, 0 );
                            SET_CHAR_DECISION_MAKER( l_U757[0], l_U716 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U757[0], -74.38590000, 1324.05200000, 24.98890000, 3.00000000 );
                            TASK_GUARD_ASSIGNED_DEFENSIVE_AREA( l_U757[0], -74.38590000, 1324.05200000, 24.98890000, 267.00000000, 0.00000000, 500000 );
                        }
                    }
                    l_U799 = 1;
                }
                break;
                case 1:
                if (NOT l_U810)
                {
                    l_U806 = 1;
                    l_U807 = 1;
                    if (NOT (IS_CHAR_INJURED( sub_493() )))
                    {
                        GET_CHAR_COORDINATES( sub_493(), ref uVar48._fU0, ref uVar48._fU4, ref uVar48._fU8 );
                    }
                    for ( I = 0; I <= 2; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U752[I] )))
                        {
                            GIVE_WEAPON_TO_CHAR( l_U752[I], 7, 9999, 0 );
                            SET_CHAR_RELATIONSHIP( l_U752[I], 5, 0 );
                            SET_CHAR_DECISION_MAKER( l_U752[I], l_U716 );
                            SET_COMBAT_DECISION_MAKER( l_U752[I], l_U722 );
                            if (NOT (IS_CHAR_INJURED( sub_493() )))
                            {
                                if (IS_CHAR_IN_AREA_3D( sub_493(), -142.07700000, 1261.49800000, 18.71912000, -23.16429000, 1344.24000000, 48.62354000, 0 ))
                                {
                                    TASK_COMBAT( l_U752[I], sub_493() );
                                }
                            }
                        }
                    }
                    for ( I = 0; I <= 3; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U730[I] )))
                        {
                            TASK_SMART_FLEE_POINT( l_U730[I], uVar48._fU0, uVar48._fU4, uVar48._fU8, 100.00000000, 25000 );
                        }
                    }
                    for ( I = 0; I <= 4; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U724[I] )))
                        {
                            TASK_SMART_FLEE_POINT( l_U724[I], uVar48._fU0, uVar48._fU4, uVar48._fU8, 100.50000000, 25000 );
                        }
                    }
                    for ( I = 0; I <= 2; I++ )
                    {
                        if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U735[I] ))))
                        {
                            SET_CHAR_RELATIONSHIP( l_U735[I], 5, 0 );
                            SET_CHAR_DECISION_MAKER( l_U735[I], l_U716 );
                            SET_COMBAT_DECISION_MAKER( l_U735[I], l_U723 );
                            REGISTER_TARGET( l_U735[I], sub_493() );
                            TASK_SEEK_COVER_FROM_PED( l_U735[I], sub_493(), 8000 );
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U757[0] ))
                    {
                        DELETE_CHAR( ref l_U757[0] );
                    }
                    if (DOES_CHAR_EXIST( l_U757[1] ))
                    {
                        DELETE_CHAR( ref l_U757[1] );
                    }
                    if ((NOT l_U823) AND (NOT (IS_CHAR_INJURED( l_U752[0] ))))
                    {
                        sub_952( 3, 0, "thug_3", 0 );
                        sub_952( 3, l_U752[0], "thug_3", 0 );
                        sub_12685( "FM3_ATTK3", ref l_U872, 7, 1 );
                        l_U823 = 1;
                    }
                    l_U667 = 19;
                    sub_23184();
                    l_U810 = 1;
                }
                break;
                case 7:
                if (DOES_CHAR_EXIST( l_U757[0] ))
                {
                    DELETE_CHAR( ref l_U757[0] );
                }
                l_U667 = 5;
                case 3:
                case 2:
                if (NOT l_U799)
                {
                    for ( I = 0; I <= 2; I++ )
                    {
                        if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U752[I] ))))
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[I] );
                        }
                    }
                    for ( I = 0; I <= 4; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U724[I] )))
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U724[I] );
                        }
                    }
                    for ( I = 0; I <= 3; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U730[I] )))
                        {
                            GIVE_WEAPON_TO_CHAR( l_U730[I], 7, 9999, 0 );
                            SET_CHAR_RELATIONSHIP( l_U730[I], 5, 0 );
                            SET_CHAR_DECISION_MAKER( l_U730[I], l_U716 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U730[0] )))
                    {
                        TASK_GUARD_CURRENT_POSITION( l_U730[0], 0.00000000, 8.00000000, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U730[1] )))
                    {
                        TASK_GUARD_CURRENT_POSITION( l_U730[1], 0.00000000, 8.00000000, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U730[2] )))
                    {
                        TASK_GUARD_CURRENT_POSITION( l_U730[2], 0.00000000, 15.00000000, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U730[3] )))
                    {
                        TASK_GUARD_CURRENT_POSITION( l_U730[3], 0.00000000, 15.00000000, 1 );
                    }
                    if (l_U666 == 2)
                    {
                        if ((NOT l_U823) AND (NOT (IS_CHAR_INJURED( l_U730[2] ))))
                        {
                            sub_952( 2, 0, "thug_2", 0 );
                            SET_AMBIENT_VOICE_NAME( l_U730[2], "M_Y_GAFR_LO_01_GANG_01" );
                            sub_952( 2, l_U730[2], "thug_2", 0 );
                            sub_12685( "FM3_ATTK2", ref l_U872, 7, 1 );
                            l_U823 = 1;
                        }
                    }
                    if (l_U666 != 7)
                    {
                        if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U757[1] ))))
                        {
                            SET_CHAR_RELATIONSHIP( l_U757[1], 5, 0 );
                            SET_CHAR_DECISION_MAKER( l_U757[1], l_U716 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U757[1], -111.71670000, 1327.36500000, 24.98520000, 1.00000000 );
                            TASK_GUARD_ASSIGNED_DEFENSIVE_AREA( l_U757[1], -111.71670000, 1327.36500000, 24.98520000, 180.00000000, 0.00000000, 500000 );
                        }
                    }
                    l_U799 = 1;
                }
                break;
            }
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if ((NOT (sub_3829( l_U854 ))) AND ((NOT (sub_3829( l_U836 ))) AND ((NOT l_U824) AND (l_U791))))
                {
                    sub_12685( "FM3_INSULT", ref l_U854, 6, 1 );
                    l_U824 = 1;
                }
                if ((NOT (sub_3829( l_U854 ))) AND ((NOT (sub_3829( l_U866 ))) AND ((NOT l_U825) AND (l_U797))))
                {
                    sub_12685( "FM3_INSULT", ref l_U854, 6, 1 );
                    l_U825 = 1;
                }
                if ((NOT (sub_3829( l_U854 ))) AND ((NOT (sub_3829( l_U848 ))) AND ((NOT l_U826) AND (l_U793))))
                {
                    sub_12685( "FM3_INSULT", ref l_U854, 6, 1 );
                    l_U826 = 1;
                }
                if ((NOT (sub_3829( l_U854 ))) AND ((NOT (sub_3829( l_U860 ))) AND ((NOT l_U827) AND (l_U792))))
                {
                    sub_12685( "FM3_INSULT", ref l_U854, 6, 1 );
                    l_U827 = 1;
                }
                if ((NOT (sub_3829( l_U854 ))) AND ((NOT (sub_3829( l_U866 ))) AND ((NOT l_U828) AND (l_U798))))
                {
                    sub_12685( "FM3_INSULT", ref l_U854, 6, 1 );
                    l_U828 = 1;
                }
            }
            sub_24579();
            sub_25244();
            break;
            case 5:
            if (NOT (IS_CHAR_DEAD( sub_493() )))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -125.98530000, 1329.90500000, 25.21061000, -117.11700000, 1323.74600000, 28.79936000, 0 ))
                {
                    if (NOT l_U800[1])
                    {
                        sub_5440( ref l_U739[0], -101.98890000, 1315.32000000, 25.02380000, 0.78080000, l_U715, l_U720, 1 );
                        sub_5440( ref l_U739[1], -102.44800000, 1319.95200000, 25.02380000, 0.78080000, l_U715, l_U720, 1 );
                        if ((NOT (IS_CHAR_INJURED( l_U739[0] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar52 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -103.60040000, 1324.58800000, 24.98880000, 4, -2, 0.20000000 );
                            TASK_GUARD_CURRENT_POSITION( 0, 0.00000000, 2.00000000, 1 );
                            CLOSE_SEQUENCE_TASK( uVar52 );
                            TASK_PERFORM_SEQUENCE( l_U739[0], uVar52 );
                            CLEAR_SEQUENCE_TASK( uVar52 );
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U739[1] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar52 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -103.92990000, 1311.99700000, 24.98820000, 4, -2, 0.20000000 );
                            TASK_GUARD_CURRENT_POSITION( 0, 0.00000000, 2.00000000, 1 );
                            CLOSE_SEQUENCE_TASK( uVar52 );
                            TASK_PERFORM_SEQUENCE( l_U739[1], uVar52 );
                            CLEAR_SEQUENCE_TASK( uVar52 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U756 )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar53 );
                            TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -83.15190000, 1301.84900000, 25.03080000, 4, -2, 0.20000000 );
                            CLOSE_SEQUENCE_TASK( uVar53 );
                            SET_CHAR_DECISION_MAKER( l_U756, l_U717 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U756, 1 );
                            TASK_PERFORM_SEQUENCE( l_U756, uVar53 );
                            CLEAR_SEQUENCE_TASK( uVar53 );
                        }
                        if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U735[2] ))))
                        {
                            SET_CHAR_COORDINATES( l_U735[2], -73.01880000, 1316.28500000, 24.98890000 );
                            TASK_COMBAT( l_U735[2], sub_493() );
                        }
                        l_U800[1] = 1;
                    }
                    l_U667 = 6;
                }
            }
            sub_24579();
            sub_25244();
            sub_27261();
            break;
            case 6:
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -100.67270000, 1318.31500000, 25.46431000, -107.20600000, 1305.89300000, 27.85520000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U756 )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar54 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -71.70460000, 1326.11400000, 26.02420000, 4, -2, 0.20000000 );
                        CLOSE_SEQUENCE_TASK( uVar54 );
                        SET_CHAR_DECISION_MAKER( l_U756, l_U717 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U756, 1 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar54 );
                        CLEAR_SEQUENCE_TASK( uVar54 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U735[0] )))
                    {
                        SET_COMBAT_DECISION_MAKER( l_U735[0], l_U720 );
                        SET_CHAR_RELATIONSHIP( l_U735[0], 5, 0 );
                        SET_CHAR_DECISION_MAKER( l_U735[0], l_U716 );
                        SET_CHAR_COORDINATES( l_U735[0], -88.78780000, 1301.90800000, 24.99260000 );
                        SET_CHAR_HEADING( l_U735[0], 90.00000000 );
                        TASK_GUARD_CURRENT_POSITION( l_U735[0], 0.00000000, 4.00000000, 1 );
                        if (NOT (IS_CHAR_INJURED( sub_493() )))
                        {
                            REGISTER_HATED_TARGETS_IN_AREA( l_U735[0], -100.67270000, 1318.31500000, 25.46431000, 60.00000000 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U735[1] )))
                    {
                        SET_COMBAT_DECISION_MAKER( l_U735[1], l_U720 );
                        SET_CHAR_RELATIONSHIP( l_U735[1], 5, 0 );
                        SET_CHAR_DECISION_MAKER( l_U735[1], l_U716 );
                        SET_CHAR_COORDINATES( l_U735[1], -79.11450000, 1299.66300000, 24.99610000 );
                        SET_CHAR_DECISION_MAKER( l_U735[1], l_U715 );
                        TASK_GUARD_CURRENT_POSITION( l_U735[1], 0.00000000, 6.00000000, 1 );
                        if (NOT (IS_CHAR_INJURED( sub_493() )))
                        {
                            REGISTER_HATED_TARGETS_IN_AREA( l_U735[1], -100.67270000, 1318.31500000, 25.46431000, 60.00000000 );
                        }
                    }
                    l_U667 = 8;
                }
            }
            if (NOT l_U811)
            {
                if (IS_CHAR_INJURED( l_U757[1] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U739[0] )))
                    {
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U739[0], -102.88760000, 1328.33200000, 24.98840000, 1.00000000 );
                        TASK_GUARD_ASSIGNED_DEFENSIVE_AREA( l_U739[0], -102.88760000, 1328.33200000, 24.98840000, 90.00000000, 0.00000000, 500000 );
                        l_U811 = 1;
                    }
                }
            }
            sub_24579();
            sub_25244();
            sub_27261();
            break;
            case 8:
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -76.60825000, 1310.27100000, 29.32171000, -66.70892000, 1298.67100000, 25.02837000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U756 )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar51 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -55.62050000, 1325.85500000, 24.98390000, 4, -2, 0.20000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -47.16780000, 1327.20100000, 30.37750000, 4, -2, 0.20000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -47.38400000, 1325.69700000, 30.37470000, 4, -2, 0.20000000 );
                        CLOSE_SEQUENCE_TASK( uVar51 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar51 );
                        CLEAR_SEQUENCE_TASK( uVar51 );
                        sub_12685( "FM3_BACK", ref l_U884, 8, 1 );
                    }
                    if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U735[2] ))))
                    {
                        SET_COMBAT_DECISION_MAKER( l_U735[2], l_U719 );
                        SET_CHAR_DECISION_MAKER( l_U735[2], l_U715 );
                        TASK_COMBAT( l_U735[2], sub_493() );
                        if (NOT (IS_CHAR_INJURED( sub_493() )))
                        {
                            REGISTER_HATED_TARGETS_IN_AREA( l_U735[2], -76.60825000, 1310.27100000, 29.32171000, 60.00000000 );
                        }
                    }
                    l_U667 = 7;
                }
            }
            sub_24579();
            sub_25244();
            sub_27261();
            break;
            case 7:
            if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
            {
                GET_SCRIPT_TASK_STATUS( l_U756, 29, ref iVar55 );
                if (((iVar55 == 7) AND ((IS_CHAR_IN_AREA_3D( sub_493(), -47.39503000, 1325.28300000, 32.98812000, -75.04807000, 1329.26700000, 25.15790000, 0 )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U756 )))) || ((IS_CHAR_IN_AREA_3D( sub_493(), -50.56822000, 1329.81900000, 28.94166000, -51.49436000, 1324.98000000, 25.03206000, 0 )) || ((IS_CHAR_IN_AREA_3D( sub_493(), -54.37531000, 1326.99800000, 25.71247000, -52.20605000, 1325.00800000, 29.86010000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_493(), -54.58748000, 1325.23900000, 28.66099000, -55.44971000, 1326.96200000, 25.45172000, 0 )))))
                {
                    if (NOT (IS_CHAR_INJURED( l_U756 )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar51 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -52.52280000, 1326.59900000, 33.69690000, 4, -2, 0.20000000 );
                        CLOSE_SEQUENCE_TASK( uVar51 );
                        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U756, 1 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar51 );
                        CLEAR_SEQUENCE_TASK( uVar51 );
                    }
                    vVar3 = {-5.00000000, 0.00000000, 2.00000000};
                    vVar6 = {0.00000000, 0.00000000, 0.00000000};
                    if (DOES_OBJECT_EXIST( l_U776 ))
                    {
                        APPLY_FORCE_TO_OBJECT( l_U776, 1, vVar3, vVar6, 0, 0, 0, 1 );
                    }
                    sub_12685( "FM3_CART", ref l_U872, 7, 1 );
                    sub_5440( ref l_U743[0], -47.20350000, 1324.35000000, 33.69550000, 275.34700000, l_U717, l_U720, 1 );
                    sub_5440( ref l_U743[1], -47.20820000, 1325.97800000, 33.69550000, 90.78080000, l_U717, l_U720, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U743[1] )))
                    {
                        SET_CHAR_DECISION_MAKER( l_U743[1], l_U715 );
                        TASK_GUARD_CURRENT_POSITION( l_U743[1], 0.00000000, 2.50000000, 1 );
                    }
                    l_U667 = 10;
                }
            }
            sub_25244();
            sub_24579();
            break;
            case 10:
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -56.86051000, 1323.43100000, 33.32898000, -46.89256000, 1329.73400000, 28.36998000, 0 ))
                {
                    l_U667 = 9;
                }
            }
            sub_29645();
            sub_25244();
            sub_24579();
            break;
            case 9:
            sub_29645();
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -46.69192000, 1323.19400000, 32.90832000, -137.26430000, 1328.60300000, 36.34783000, 0 ))
                {
                    sub_5440( ref l_U747[0], -77.39770000, 1329.03000000, 33.65180000, 270.78080000, l_U715, l_U720, 1 );
                    sub_5440( ref l_U747[1], -72.87150000, 1316.36000000, 33.65080000, 270.78080000, l_U715, l_U720, 1 );
                    sub_5440( ref l_U747[2], -83.71340000, 1300.66600000, 34.67810000, 270.78080000, l_U717, l_U720, 1 );
                    sub_5440( ref l_U747[3], -84.99800000, 1301.86900000, 34.68630000, 270.78080000, l_U717, l_U720, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U747[1] )))
                    {
                        TASK_GUARD_CURRENT_POSITION( l_U747[1], 0.00000000, 4.00000000, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U747[0] )))
                    {
                        TASK_GUARD_CURRENT_POSITION( l_U747[0], 0.00000000, 3.00000000, 1 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar56 );
                        TASK_TOGGLE_DUCK( 0, 0 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -43.49780000, 1324.04700000, 37.81340000, 4, -2, 0.20000000 );
                        TASK_TOGGLE_DUCK( 0, 1 );
                        CLOSE_SEQUENCE_TASK( uVar56 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar56 );
                        CLEAR_SEQUENCE_TASK( uVar56 );
                        if (NOT (IS_CHAR_INJURED( sub_493() )))
                        {
                            GET_CHAR_COORDINATES( l_U756, ref uVar57._fU0, ref uVar57._fU4, ref uVar57._fU8 );
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), uVar57._fU0, uVar57._fU4, uVar57._fU8, 40.00000000, 40.00000000, 40.00000000, 0 ))
                            {
                                sub_12685( "FM3_BACK", ref l_U884, 8, 1 );
                            }
                        }
                    }
                    l_U667 = 11;
                }
            }
            sub_25244();
            sub_24579();
            break;
            case 11:
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (((IS_CHAR_INJURED( l_U747[1] )) AND (IS_CHAR_INJURED( l_U747[0] ))) || ((IS_CHAR_IN_AREA_3D( sub_493(), -129.56020000, 1323.36700000, 37.49396000, -119.19100000, 1327.20800000, 33.80842000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), -66.98810000, 1315.51900000, 36.05404000, 9.63460700, 13.51910000, 2.50000000, 0 ))))
                {
                    if ((NOT (IS_CHAR_INJURED( l_U747[2] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar60 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -64.77700000, 1302.88100000, 34.68630000, 4, -2, 0.20000000 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar60 );
                        TASK_PERFORM_SEQUENCE( l_U747[2], uVar60 );
                        CLEAR_SEQUENCE_TASK( uVar60 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U747[3] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar60 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -73.79650000, 1306.20200000, 34.68630000, 4, -2, 0.20000000 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar60 );
                        TASK_PERFORM_SEQUENCE( l_U747[3], uVar60 );
                        CLEAR_SEQUENCE_TASK( uVar60 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar61 );
                        TASK_TOGGLE_DUCK( 0, 0 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -43.77540000, 1324.30300000, 38.84960000, 3, -2, 0.20000000 );
                        CLOSE_SEQUENCE_TASK( uVar61 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar61 );
                        CLEAR_SEQUENCE_TASK( uVar61 );
                    }
                    l_U667 = 12;
                }
            }
            sub_25244();
            sub_24579();
            break;
            case 12:
            if (DOES_CHAR_EXIST( l_U756 ))
            {
                if (IS_CHAR_ON_FIRE( l_U756 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U756 )))
                    {
                        SET_CHAR_HEALTH( l_U756, 5 );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (IS_CHAR_IN_AREA_3D( sub_493(), -57.82572000, 1315.82400000, 38.27037000, -36.60788000, 1329.08300000, 48.86989000, 0 )))
                {
                    l_U668 = 0;
                    l_U667 = 13;
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U756 )))
            {
                if ((NOT l_U829) AND (IS_CHAR_IN_AREA_3D( l_U756, -40.24597000, 1326.65600000, 38.23461000, -56.13175000, 1319.16600000, 42.21711000, 0 )))
                {
                    UNLOCK_RAGDOLL( l_U756, 1 );
                    l_U829 = 1;
                }
            }
            sub_24579();
            sub_25244();
            if ((NOT l_U822) AND ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U747[0] )))))
            {
                GET_CHAR_COORDINATES( l_U747[0], ref uVar62._fU0, ref uVar62._fU4, ref uVar62._fU8 );
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), uVar62._fU0, uVar62._fU4, uVar62._fU8, 3.00000000, 4.00000000, 1.00000000, 0 ))
                {
                    REGISTER_TARGET( l_U747[0], sub_493() );
                    TASK_COMBAT( l_U747[0], sub_493() );
                    l_U822 = 1;
                }
            }
            break;
            case 13:
            switch (l_U668)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_547(), 0 );
                sub_11503( 500 );
                CLEAR_AREA( -44.12660000, 1324.13900000, 37.84880000, 15.00000000, 1 );
                sub_31773();
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    SET_CHAR_COORDINATES( sub_493(), -46.06920000, 1316.62700000, 37.84870000 );
                    SET_CHAR_HEADING( sub_493(), 0.00000000 );
                }
                if (NOT (IS_CHAR_INJURED( l_U756 )))
                {
                    if (IS_CHAR_ON_FIRE( l_U756 ))
                    {
                        SET_CHAR_HEALTH( l_U756, 0 );
                        l_U668 = 4;
                        sub_32398( 500 );
                        break;
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U756 );
                        SET_CHAR_COORDINATES( l_U756, -44.12660000, 1324.13900000, 37.84880000 );
                        SET_CHAR_HEADING( l_U756, 144.00000000 );
                    }
                }
                else
                {
                    l_U668 = 4;
                    sub_32398( 500 );
                    break;
                }
                sub_12284( ref l_U672, 1 );
                CREATE_CAM( 14, ref l_U772 );
                SET_CAM_POS( l_U772, -46.40392000, 1315.95000000, 39.56069000 );
                SET_CAM_ROT( l_U772, -16.27263000, -0.00000000, -11.42350000 );
                SET_CAM_FOV( l_U772, 55.00000000 );
                SET_CAM_ACTIVE( l_U772, 1 );
                SET_CAM_PROPAGATE( l_U772, 1 );
                WAIT( 100 );
                sub_32398( 1000 );
                OPEN_SEQUENCE_TASK( ref uVar65 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( -45.90480000, 1324.02700000, 37.84870000 );
                TASK_EXTEND_ROUTE( -46.22400000, 1319.76400000, 38.84870000 );
                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                TASK_PLAY_ANIM( 0, "plead", "missfrancis3", 1.00000000, 1, 0, 0, 0, -2 );
                CLOSE_SEQUENCE_TASK( uVar65 );
                if (NOT (IS_CHAR_INJURED( l_U756 )))
                {
                    SET_CHAR_DECISION_MAKER( l_U756, l_U717 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U756, 1 );
                    SET_CHAR_READY_TO_BE_EXECUTED( l_U756, 1 );
                    TASK_PERFORM_SEQUENCE( l_U756, uVar65 );
                    CLEAR_SEQUENCE_TASK( uVar65 );
                    GET_GAME_TIMER( ref l_U673 );
                }
                l_U673 = l_U674 + 2000;
                l_U668 = 3;
                break;
                case 3:
                GET_GAME_TIMER( ref l_U674 );
                if (l_U674 > l_U673)
                {
                    sub_12685( "FM3_STOP", ref l_U872, 7, 1 );
                    l_U673 = l_U674 + 5000;
                    l_U668 = 5;
                }
                break;
                case 5:
                GET_GAME_TIMER( ref l_U674 );
                if (l_U674 > l_U673)
                {
                    l_U668 = 4;
                }
                break;
                case 4:
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (HAS_CHAR_GOT_WEAPON( sub_493(), 7 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_493(), 7, 0 );
                    }
                }
                if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U756 ))))
                {
                    TASK_LOOK_AT_CHAR( l_U756, sub_493(), 60000, 0 );
                    UNLOCK_RAGDOLL( l_U756, 1 );
                }
                SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 3000 );
                sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                sub_15253( ref l_U672, 1, 1, 1 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U667 = 14;
                break;
            }
            break;
            case 14:
            sub_33330( ref l_U756, "plead", "missfrancis3", ref l_U872, "FM3_STOP" );
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (NOT (IS_CHAR_IN_AREA_3D( sub_493(), -57.05004000, 1327.54900000, 48.02913000, -39.80846000, 1305.57700000, 37.93025000, 0 )))
                {
                    l_U667 = 15;
                    l_U669 = 0;
                    GET_GAME_TIMER( ref l_U676 );
                    l_U676 += l_U676 + 2000;
                }
            }
            if (NOT l_U795)
            {
                if (NOT l_U794)
                {
                    PRINT_HELP( "TS_BEG_HELP1" );
                    l_U794 = 1;
                }
                else if (NOT l_U795)
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TS_BEG_HELP1" )))
                    {
                        PRINT_HELP( "TS_BEG_HELP2" );
                        l_U795 = 1;
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U756 ))
            {
                if (IS_CHAR_ON_FIRE( l_U756 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U756 )))
                    {
                        SET_CHAR_HEALTH( l_U756, 0 );
                    }
                }
            }
            if (IS_CHAR_DEAD( l_U756 ))
            {
                sub_3816( ref l_U872 );
                CLEAR_PRINTS();
                CLEAR_HELP();
                sub_12685( "FM3_KILL", ref l_U872, 8, 1 );
                WAIT( 1 );
                REMOVE_BLIP( l_U678 );
                g_U15654[43] = 1;
                l_U671 = 2;
                l_U667 = 33;
                l_U808 = 1;
            }
            if (NOT (IS_CHAR_INJURED( l_U756 )))
            {
                if (sub_35462( l_U756 ))
                {
                    if (sub_3829( l_U872 ))
                    {
                        sub_4011( ref l_U872, 0 );
                    }
                    REMOVE_BLIP( l_U678 );
                    g_U15654[43] = 1;
                    l_U671 = 2;
                    l_U808 = 1;
                    l_U667 = 16;
                }
            }
            sub_24579();
            if ((NOT l_U815) AND ((NOT (sub_34214( l_U872 ))) AND (NOT (sub_3829( l_U872 )))))
            {
                SETTIMERA( 0 );
                l_U815 = 1;
            }
            if (DOES_BLIP_EXIST( l_U678 ))
            {
                if (sub_35820( ref l_U678, ref l_U675 ))
                {
                    if (TIMERA() < 7500)
                    {
                        if ((NOT (sub_34214( l_U872 ))) AND (NOT (sub_3829( l_U872 ))))
                        {
                            if (l_U816 == 0)
                            {
                                PRINT_NOW( "TS_FATEB", 500, 1 );
                                l_U816 = 1;
                            }
                            else
                            {
                                PRINT_NOW( "TS_FATEA", 500, 1 );
                                l_U816 = 0;
                            }
                        }
                    }
                }
            }
            break;
            case 16:
            if (sub_36094( -46.08730000, 1317.31700000, 37.84900000, 12.68700000, l_U756 ))
            {
                sub_12685( "FM3_KILL", ref l_U872, 8, 1 );
                l_U667 = 33;
            }
            break;
            case 17:
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -75.36185000, 1308.00800000, 25.04421000, -66.34039000, 1298.21200000, 28.66306000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U756 )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar54 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -104.75110000, 1326.58100000, 26.02370000, 4, -2, 0.20000000 );
                        TASK_SEEK_COVER_FROM_POS( 0, -102.61140000, 1310.90900000, 26.02380000, -2 );
                        CLOSE_SEQUENCE_TASK( uVar54 );
                        SET_CHAR_DECISION_MAKER( l_U756, l_U717 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar54 );
                        CLEAR_SEQUENCE_TASK( uVar54 );
                    }
                    sub_5440( ref l_U739[0], -103.70360000, 1316.05600000, 26.02380000, 193.78080000, l_U717, l_U720, 1 );
                    sub_5440( ref l_U739[1], -119.39660000, 1326.11700000, 26.01020000, 193.78080000, l_U717, l_U720, 1 );
                    sub_5440( ref l_U739[2], -128.46600000, 1327.20400000, 30.37820000, 193.07060000, l_U717, l_U720, 1 );
                    l_U667 = 18;
                }
                if ((NOT l_U796) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                {
                    if (IS_CHAR_IN_AREA_3D( sub_493(), -75.67063000, 1322.62200000, 24.80642000, -70.12445000, 1313.43700000, 28.24960000, 0 ))
                    {
                        for ( I = 2; I <= 2; I++ )
                        {
                            if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U735[I] ))))
                            {
                                SET_CHAR_RELATIONSHIP( l_U735[I], 5, 0 );
                                SET_CHAR_DECISION_MAKER( l_U735[I], l_U715 );
                                SET_COMBAT_DECISION_MAKER( l_U735[I], l_U720 );
                            }
                        }
                        if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U735[0] ))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar66 );
                            TASK_PLAY_ANIM( 0, "sprint", "missfrancis3", 10000.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM( 0, "sstop_l", "missfrancis3", 10000.00000000, 0, 1, 1, 0, -1 );
                            TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                            TASK_SET_COMBAT_DECISION_MAKER( 0, l_U720 );
                            TASK_COMBAT( 0, sub_493() );
                            CLOSE_SEQUENCE_TASK( uVar66 );
                            SET_CHAR_COORDINATES( l_U735[0], -77.51149000, 1300.39100000, 25.02380000 );
                            SET_CHAR_HEADING( l_U735[0], 270.00000000 );
                            SET_CHAR_RELATIONSHIP( l_U735[0], 5, 0 );
                            TASK_PERFORM_SEQUENCE( l_U735[0], uVar66 );
                            CLEAR_SEQUENCE_TASK( uVar66 );
                            if (NOT (IS_CHAR_INJURED( sub_493() )))
                            {
                                REGISTER_HATED_TARGETS_IN_AREA( l_U735[0], -75.67063000, 1322.62200000, 24.80642000, 60.00000000 );
                            }
                        }
                        if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U735[1] ))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar67 );
                            TASK_PLAY_ANIM( 0, "sprint", "missfrancis3", 10000.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM( 0, "sstop_r", "missfrancis3", 10000.00000000, 0, 1, 1, 0, -1 );
                            TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                            TASK_SET_COMBAT_DECISION_MAKER( 0, l_U720 );
                            TASK_COMBAT_HATED_TARGETS_IN_AREA( 0, -73.66380000, 1302.12200000, 25.02450000, 40.00000000 );
                            CLOSE_SEQUENCE_TASK( uVar67 );
                            SET_CHAR_COORDINATES( l_U735[1], -79.87641000, 1301.49700000, 25.02380000 );
                            SET_CHAR_HEADING( l_U735[1], 270.00000000 );
                            SET_CHAR_RELATIONSHIP( l_U735[1], 5, 0 );
                            TASK_PERFORM_SEQUENCE( l_U735[1], uVar67 );
                            CLEAR_SEQUENCE_TASK( uVar67 );
                            if (NOT (IS_CHAR_INJURED( sub_493() )))
                            {
                                REGISTER_HATED_TARGETS_IN_AREA( l_U735[1], -75.67063000, 1322.62200000, 24.80642000, 60.00000000 );
                            }
                        }
                        if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U735[2] ))))
                        {
                            SET_CHAR_COORDINATES( l_U735[2], -109.44830000, 1301.85100000, 25.02230000 );
                            SET_CHAR_DECISION_MAKER( l_U735[2], l_U715 );
                            SET_COMBAT_DECISION_MAKER( l_U735[2], l_U720 );
                            TASK_COMBAT( l_U735[2], sub_493() );
                        }
                        l_U796 = 1;
                    }
                }
            }
            sub_24579();
            sub_25244();
            sub_27261();
            break;
            case 18:
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -97.75005000, 1303.10300000, 24.94559000, -108.64300000, 1297.53900000, 28.74458000, 0 ))
                {
                    for ( I = 0; I <= 2; I++ )
                    {
                        if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U739[I] ))))
                        {
                            SET_CHAR_RELATIONSHIP( l_U739[I], 5, 0 );
                            SET_COMBAT_DECISION_MAKER( l_U739[I], l_U720 );
                            if (NOT (IS_CHAR_INJURED( sub_493() )))
                            {
                                REGISTER_HATED_TARGETS_IN_AREA( l_U739[I], -97.75005000, 1303.10300000, 24.94559000, 60.00000000 );
                            }
                        }
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar51 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -116.89850000, 1326.60200000, 26.01850000, 4, -2, 0.20000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -128.71040000, 1326.97900000, 30.37680000, 4, -2, 0.20000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -129.13810000, 1325.98300000, 30.37520000, 4, -2, 0.20000000 );
                        TASK_ACHIEVE_HEADING( 0, 290.00000000 );
                        CLOSE_SEQUENCE_TASK( uVar51 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar51 );
                        CLEAR_SEQUENCE_TASK( uVar51 );
                        sub_12685( "FM3_BACK", ref l_U884, 8, 1 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U739[0] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar52 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar52 );
                        TASK_PERFORM_SEQUENCE( l_U739[0], uVar52 );
                        CLEAR_SEQUENCE_TASK( uVar52 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U739[1] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar52 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -116.40310000, 1328.17200000, 26.01870000, 4, -2, 0.20000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -104.75110000, 1326.58100000, 26.02370000, 4, -2, 0.20000000 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar52 );
                        TASK_PERFORM_SEQUENCE( l_U739[1], uVar52 );
                        CLEAR_SEQUENCE_TASK( uVar52 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U739[2] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar52 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -116.40310000, 1328.17200000, 26.01870000, 4, -2, 0.20000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -111.87910000, 1327.33800000, 26.02050000, 4, -2, 0.20000000 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar52 );
                        TASK_PERFORM_SEQUENCE( l_U739[2], uVar52 );
                        CLEAR_SEQUENCE_TASK( uVar52 );
                    }
                    l_U667 = 19;
                }
                else if (IS_CHAR_IN_AREA_3D( sub_493(), -118.73490000, 1327.27300000, 19.35612000, -127.72320000, 1323.54200000, 28.81823000, 0 ))
                {
                    if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar51 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -116.89850000, 1326.60200000, 26.01850000, 4, -2, 0.20000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -128.71040000, 1326.97900000, 30.37680000, 4, -2, 0.20000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -129.13810000, 1325.98300000, 30.37520000, 4, -2, 0.20000000 );
                        CLOSE_SEQUENCE_TASK( uVar51 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar51 );
                        CLEAR_SEQUENCE_TASK( uVar51 );
                        sub_12685( "FM3_BACK", ref l_U884, 8, 1 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U739[1] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar52 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -127.47590000, 1329.02100000, 26.01700000, 4, -2, 0.20000000 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar52 );
                        TASK_PERFORM_SEQUENCE( l_U739[1], uVar52 );
                        CLEAR_SEQUENCE_TASK( uVar52 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U739[2] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar52 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -115.98400000, 1328.40400000, 26.01910000, 4, -2, 0.20000000 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar52 );
                        TASK_PERFORM_SEQUENCE( l_U739[2], uVar52 );
                        CLEAR_SEQUENCE_TASK( uVar52 );
                    }
                    l_U667 = 19;
                }
            }
            sub_24579();
            sub_25244();
            sub_27261();
            break;
            case 19:
            if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
            {
                GET_SCRIPT_TASK_STATUS( l_U756, 29, ref iVar55 );
                if (((iVar55 == 7) AND ((IS_CHAR_IN_AREA_3D( sub_493(), -129.32370000, 1329.74000000, 33.38172000, -100.99320000, 1321.20800000, 25.27960000, 0 )) AND ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U756 )) || (IS_CHAR_IN_AREA_3D( sub_493(), -124.45100000, 1330.06800000, 24.86286000, -119.35520000, 1324.82800000, 29.15260000, 0 ))))) || (IS_CHAR_IN_AREA_3D( sub_493(), -122.82540000, 1327.17800000, 29.32675000, -120.08000000, 1325.16300000, 25.53412000, 0 )))
                {
                    vVar3 = {5.00000000, 0.00000000, 2.00000000};
                    vVar6 = {0.00000000, 0.00000000, 0.00000000};
                    if (DOES_OBJECT_EXIST( l_U775 ))
                    {
                        APPLY_FORCE_TO_OBJECT( l_U775, 1, vVar3, vVar6, 0, 0, 0, 1 );
                    }
                    sub_12685( "FM3_CART", ref l_U884, 7, 1 );
                    if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar68 );
                        TASK_TOGGLE_DUCK( 0, 0 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -117.04610000, 1326.12900000, 33.65110000, 4, -2, 0.20000000 );
                        TASK_TOGGLE_DUCK( 0, 1 );
                        CLOSE_SEQUENCE_TASK( uVar68 );
                        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U756, 1 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar68 );
                        CLEAR_SEQUENCE_TASK( uVar68 );
                    }
                    sub_5440( ref l_U743[0], -128.75260000, 1326.29300000, 33.69610000, 247.78080000, l_U717, l_U720, 1 );
                    GIVE_WEAPON_TO_CHAR( l_U743[0], 13, 9999, 0 );
                    sub_5440( ref l_U743[1], -103.01330000, 1329.38200000, 30.37380000, 193.78080000, l_U717, l_U720, 1 );
                    sub_5440( ref l_U743[2], -103.76610000, 1324.80100000, 30.37380000, 0.00000000, l_U717, l_U720, 1 );
                    l_U667 = 20;
                }
            }
            sub_24579();
            sub_25244();
            sub_27261();
            break;
            case 20:
            if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -119.56530000, 1323.48600000, 32.91307000, -129.35360000, 1329.76700000, 28.08811000, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U743[0] )))
                    {
                        SET_CHAR_DECISION_MAKER( l_U743[0], l_U716 );
                        TASK_GUARD_CURRENT_POSITION( l_U743[0], 1.00000000, 1.00000000, 1 );
                    }
                    if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U743[1] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar69 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -112.34310000, 1328.00000000, 29.33860000, 4, -2, 0.20000000 );
                        TASK_GUARD_CURRENT_POSITION( 0, 4.00000000, 4.00000000, 1 );
                        CLOSE_SEQUENCE_TASK( uVar69 );
                        SET_CHAR_RELATIONSHIP( l_U743[1], 5, 0 );
                        TASK_PERFORM_SEQUENCE( l_U743[1], uVar69 );
                        CLEAR_SEQUENCE_TASK( uVar69 );
                    }
                    if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U743[2] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar69 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U715 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -107.73910000, 1326.02900000, 29.33860000, 4, -2, 0.20000000 );
                        TASK_GUARD_CURRENT_POSITION( 0, 4.00000000, 4.00000000, 1 );
                        CLOSE_SEQUENCE_TASK( uVar69 );
                        SET_CHAR_RELATIONSHIP( l_U743[2], 5, 0 );
                        TASK_PERFORM_SEQUENCE( l_U743[2], uVar69 );
                        CLEAR_SEQUENCE_TASK( uVar69 );
                    }
                    l_U667 = 21;
                }
                if (((sub_10753( sub_493() )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U756 ))) || ((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U756 ))))
                {
                    if (NOT l_U817)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U756, 29, ref l_U784 );
                        if (l_U784 == 7)
                        {
                            if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar70 );
                                TASK_TOGGLE_DUCK( 0, 0 );
                                TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -116.73200000, 1303.43800000, 33.65080000, 4, -2, 0.20000000 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -123.50860000, 1324.36000000, 37.81340000, 4, -2, 0.20000000 );
                                TASK_TOGGLE_DUCK( 0, 1 );
                                CLOSE_SEQUENCE_TASK( uVar70 );
                                TASK_PERFORM_SEQUENCE( l_U756, uVar70 );
                                CLEAR_SEQUENCE_TASK( uVar70 );
                                l_U817 = 1;
                                if (NOT (IS_CHAR_INJURED( sub_493() )))
                                {
                                    GET_CHAR_COORDINATES( l_U756, ref uVar57._fU0, ref uVar57._fU4, ref uVar57._fU8 );
                                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), uVar57._fU0, uVar57._fU4, uVar57._fU8, 40.00000000, 40.00000000, 40.00000000, 0 ))
                                    {
                                        sub_12685( "FM3_BACK", ref l_U884, 8, 1 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U813)
            {
                if ((NOT (IS_CHAR_INJURED( l_U743[0] ))) AND ((NOT (IS_CHAR_INJURED( sub_493() ))) AND ((IS_CHAR_INJURED( l_U743[2] )) AND (IS_CHAR_INJURED( l_U743[1] )))))
                {
                    SET_CHAR_RELATIONSHIP( l_U743[0], 5, 0 );
                    SET_CHAR_DECISION_MAKER( l_U743[0], l_U716 );
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U743[0], -123.04240000, 1324.05600000, 30.50700000, 3.00000000 );
                    TASK_GUARD_ASSIGNED_DEFENSIVE_AREA( l_U743[0], -123.04240000, 1324.05600000, 30.50700000, 267.00000000, 0.00000000, 500000 );
                    l_U813 = 1;
                }
            }
            sub_24579();
            sub_25244();
            break;
            case 21:
            sub_24579();
            if (NOT l_U813)
            {
                if ((NOT (IS_CHAR_INJURED( l_U743[0] ))) AND ((NOT (IS_CHAR_INJURED( sub_493() ))) AND ((IS_CHAR_INJURED( l_U743[2] )) AND (IS_CHAR_INJURED( l_U743[1] )))))
                {
                    SET_CHAR_RELATIONSHIP( l_U743[0], 5, 0 );
                    SET_CHAR_DECISION_MAKER( l_U743[0], l_U716 );
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U743[0], -123.04240000, 1324.05600000, 30.50700000, 3.00000000 );
                    TASK_GUARD_ASSIGNED_DEFENSIVE_AREA( l_U743[0], -123.04240000, 1324.05600000, 30.50700000, 267.00000000, 0.00000000, 500000 );
                    l_U813 = 1;
                }
            }
            if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
            {
                if (((sub_10753( sub_493() )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U756 ))) || ((sub_10753( sub_493() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U756 ))))
                {
                    if (NOT l_U817)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U756, 29, ref l_U784 );
                        if (l_U784 == 7)
                        {
                            if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar70 );
                                TASK_TOGGLE_DUCK( 0, 0 );
                                TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -116.73200000, 1303.43800000, 33.65080000, 4, -2, 0.20000000 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -123.50860000, 1324.36000000, 37.81340000, 4, -2, 0.20000000 );
                                TASK_TOGGLE_DUCK( 0, 1 );
                                CLOSE_SEQUENCE_TASK( uVar70 );
                                TASK_PERFORM_SEQUENCE( l_U756, uVar70 );
                                CLEAR_SEQUENCE_TASK( uVar70 );
                                l_U817 = 1;
                                if (NOT (IS_CHAR_INJURED( sub_493() )))
                                {
                                    GET_CHAR_COORDINATES( l_U756, ref uVar57._fU0, ref uVar57._fU4, ref uVar57._fU8 );
                                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), uVar57._fU0, uVar57._fU4, uVar57._fU8, 40.00000000, 40.00000000, 40.00000000, 0 ))
                                    {
                                        sub_12685( "FM3_BACK", ref l_U884, 8, 1 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -122.53950000, 1325.03000000, 30.85266000, -126.72320000, 1323.63500000, 36.86939000, 0 ))
                {
                    if ((NOT l_U817) AND ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() )))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar71 );
                        TASK_TOGGLE_DUCK( 0, 0 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -116.73200000, 1303.43800000, 33.65080000, 4, -2, 0.20000000 );
                        TASK_TOGGLE_DUCK( 0, 1 );
                        CLOSE_SEQUENCE_TASK( uVar71 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar71 );
                        CLEAR_SEQUENCE_TASK( uVar71 );
                        l_U817 = 1;
                        if (NOT (IS_CHAR_INJURED( sub_493() )))
                        {
                            GET_CHAR_COORDINATES( l_U756, ref uVar57._fU0, ref uVar57._fU4, ref uVar57._fU8 );
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), uVar57._fU0, uVar57._fU4, uVar57._fU8, 40.00000000, 40.00000000, 40.00000000, 0 ))
                            {
                                sub_12685( "FM3_BACK", ref l_U884, 8, 1 );
                            }
                        }
                    }
                    sub_5440( ref l_U747[0], -114.17090000, 1326.04800000, 33.68770000, 270.78080000, l_U715, l_U720, 1 );
                    if ((NOT (IS_CHAR_INJURED( l_U747[0] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar71 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar71 );
                        TASK_PERFORM_SEQUENCE( l_U747[0], uVar71 );
                        CLEAR_SEQUENCE_TASK( uVar71 );
                    }
                    sub_5440( ref l_U747[1], -98.11410000, 1327.77300000, 33.68800000, 270.78080000, l_U715, l_U720, 1 );
                    if ((NOT (IS_CHAR_INJURED( l_U747[1] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar71 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar71 );
                        TASK_PERFORM_SEQUENCE( l_U747[1], uVar71 );
                        CLEAR_SEQUENCE_TASK( uVar71 );
                    }
                    sub_5440( ref l_U747[2], -93.91011000, 1301.25800000, 34.68630000, 270.78080000, l_U717, l_U720, 1 );
                    sub_5440( ref l_U747[3], -87.01160000, 1302.50700000, 34.68630000, 270.78080000, l_U717, l_U720, 1 );
                    l_U667 = 22;
                }
            }
            sub_25244();
            sub_24579();
            break;
            case 22:
            if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
            {
                if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), l_U756 )) || ((IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U756 )) || ((IS_CHAR_IN_AREA_3D( sub_493(), -133.31260000, 1331.15100000, 33.81746000, -136.82430000, 1327.91100000, 38.34174000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_493(), -109.72260000, 1319.18700000, 35.51525000, 9.08000000, 1.00000000, 2.00000000, 0 )) || ((IS_CHAR_INJURED( l_U747[1] )) AND (IS_CHAR_INJURED( l_U747[0] )))))))
                {
                    if (NOT (IS_CHAR_INJURED( l_U756 )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar71 );
                        TASK_TOGGLE_DUCK( 0, 0 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -123.50860000, 1324.36000000, 37.81340000, 4, -2, 0.20000000 );
                        CLOSE_SEQUENCE_TASK( uVar71 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar71 );
                        CLEAR_SEQUENCE_TASK( uVar71 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U747[2] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar71 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -104.18840000, 1300.92900000, 34.68630000, 4, -2, 0.20000000 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar71 );
                        TASK_PERFORM_SEQUENCE( l_U747[2], uVar71 );
                        CLEAR_SEQUENCE_TASK( uVar71 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U747[3] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar71 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -103.52180000, 1304.52500000, 34.68630000, 4, -2, 0.20000000 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar71 );
                        TASK_PERFORM_SEQUENCE( l_U747[3], uVar71 );
                        CLEAR_SEQUENCE_TASK( uVar71 );
                    }
                    l_U667 = 23;
                }
            }
            sub_25244();
            sub_24579();
            break;
            case 23:
            if (DOES_CHAR_EXIST( l_U756 ))
            {
                if (IS_CHAR_ON_FIRE( l_U756 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U756 )))
                    {
                        SET_CHAR_HEALTH( l_U756, 5 );
                    }
                }
            }
            if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (IS_CHAR_IN_AREA_3D( sub_493(), -137.60830000, 1328.89600000, 48.48069000, -118.40550000, 1316.10100000, 37.68614000, 0 )))
            {
                l_U668 = 0;
                l_U667 = 24;
            }
            if (NOT (IS_CHAR_INJURED( l_U756 )))
            {
                if ((NOT l_U829) AND (IS_CHAR_IN_AREA_3D( l_U756, -136.23980000, 1327.08100000, 38.01790000, -119.45070000, 1317.17800000, 41.53566000, 0 )))
                {
                    UNLOCK_RAGDOLL( l_U756, 1 );
                    l_U829 = 1;
                }
            }
            sub_25244();
            sub_24579();
            break;
            case 24:
            switch (l_U668)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_547(), 0 );
                sub_11503( 1000 );
                CLEAR_AREA( -124.18050000, 1320.64500000, 37.84980000, 10.00000000, 1 );
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    SET_CHAR_COORDINATES( sub_493(), -125.81790000, 1316.36600000, 37.84980000 );
                    SET_CHAR_HEADING( sub_493(), 0.00000000 );
                }
                if (NOT (IS_CHAR_INJURED( l_U756 )))
                {
                    if (IS_CHAR_ON_FIRE( l_U756 ))
                    {
                        SET_CHAR_HEALTH( l_U756, 0 );
                        l_U668 = 4;
                        sub_32398( 500 );
                        break;
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U756 );
                        SET_CHAR_COORDINATES( l_U756, -123.32400000, 1323.99300000, 37.84870000 );
                        SET_CHAR_HEADING( l_U756, 118.00000000 );
                    }
                }
                else
                {
                    l_U668 = 4;
                    sub_32398( 500 );
                    break;
                }
                sub_31773();
                sub_12284( ref l_U672, 1 );
                CREATE_CAM( 14, ref l_U772 );
                SET_CAM_POS( l_U772, -126.38370000, 1315.94400000, 39.54936000 );
                SET_CAM_ROT( l_U772, -9.16593400, -0.00000000, -27.40204000 );
                SET_CAM_FOV( l_U772, 45.00000000 );
                SET_CAM_ACTIVE( l_U772, 1 );
                SET_CAM_PROPAGATE( l_U772, 1 );
                WAIT( 100 );
                DO_SCREEN_FADE_IN( 1000 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U756 ))))
                {
                    OPEN_SEQUENCE_TASK( ref uVar65 );
                    TASK_TOGGLE_DUCK( 0, 0 );
                    TASK_LOOK_AT_CHAR( 0, sub_493(), 60000, 0 );
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( -125.57560000, 1323.99600000, 37.85020000 );
                    TASK_EXTEND_ROUTE( -125.44040000, 1319.35100000, 38.84860000 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
                    TASK_PLAY_ANIM( 0, "plead", "missfrancis3", 1.00000000, 1, 0, 0, 0, -2 );
                    CLOSE_SEQUENCE_TASK( uVar65 );
                    SET_CHAR_DECISION_MAKER( l_U756, l_U717 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U756, 1 );
                    SET_CHAR_READY_TO_BE_EXECUTED( l_U756, 1 );
                    TASK_PERFORM_SEQUENCE( l_U756, uVar65 );
                    CLEAR_SEQUENCE_TASK( uVar65 );
                    GET_GAME_TIMER( ref l_U673 );
                }
                l_U673 = l_U674 + 2000;
                l_U668 = 3;
                break;
                case 3:
                GET_GAME_TIMER( ref l_U674 );
                if (l_U674 > l_U673)
                {
                    sub_12685( "FM3_STOP", ref l_U872, 7, 1 );
                    l_U673 = l_U674 + 5000;
                    l_U668 = 5;
                }
                break;
                case 5:
                GET_GAME_TIMER( ref l_U674 );
                if (l_U674 > l_U673)
                {
                    l_U668 = 4;
                }
                break;
                case 4:
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    if (HAS_CHAR_GOT_WEAPON( sub_493(), 7 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_493(), 7, 0 );
                    }
                }
                if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U756 ))))
                {
                    TASK_LOOK_AT_CHAR( l_U756, sub_493(), -2, 0 );
                    UNLOCK_RAGDOLL( l_U756, 1 );
                }
                SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 3000 );
                sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                sub_15253( ref l_U672, 1, 1, 1 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U667 = 26;
                break;
            }
            break;
            case 26:
            sub_33330( ref l_U756, "plead", "missfrancis3", ref l_U872, "FM3_STOP" );
            sub_24579();
            if (NOT l_U795)
            {
                if (NOT l_U794)
                {
                    PRINT_HELP( "TS_BEG_HELP1" );
                    l_U794 = 1;
                }
                else if (NOT l_U795)
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TS_BEG_HELP1" )))
                    {
                        PRINT_HELP( "TS_BEG_HELP2" );
                        l_U795 = 1;
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (NOT (IS_CHAR_IN_AREA_3D( sub_493(), -119.29730000, 1327.45000000, 37.97033000, -136.46810000, 1305.01000000, 51.35940000, 0 )))
                {
                    GET_GAME_TIMER( ref l_U676 );
                    l_U676 += 2000;
                    l_U667 = 29;
                    l_U669 = 0;
                }
            }
            if (IS_CHAR_DEAD( l_U756 ))
            {
                sub_3816( ref l_U872 );
                CLEAR_PRINTS();
                CLEAR_HELP();
                sub_12685( "FM3_KILL", ref l_U872, 8, 1 );
                WAIT( 1 );
                REMOVE_BLIP( l_U678 );
                g_U15654[43] = 1;
                l_U671 = 2;
                l_U667 = 33;
                l_U808 = 1;
            }
            if (NOT (IS_CHAR_INJURED( l_U756 )))
            {
                if (sub_35462( l_U756 ))
                {
                    if (sub_3829( l_U872 ))
                    {
                        sub_4011( ref l_U872, 0 );
                    }
                    REMOVE_BLIP( l_U678 );
                    g_U15654[43] = 1;
                    l_U671 = 2;
                    l_U808 = 1;
                    l_U667 = 30;
                }
            }
            if ((NOT l_U815) AND ((NOT (sub_34214( l_U872 ))) AND (NOT (sub_3829( l_U872 )))))
            {
                SETTIMERA( 0 );
                l_U815 = 1;
            }
            if (DOES_BLIP_EXIST( l_U678 ))
            {
                if (sub_35820( ref l_U678, ref l_U675 ))
                {
                    if (TIMERA() < 7500)
                    {
                        if ((NOT (sub_34214( l_U872 ))) AND (NOT (sub_3829( l_U872 ))))
                        {
                            if (l_U816 == 0)
                            {
                                PRINT_NOW( "TS_FATEB", 500, 1 );
                                l_U816 = 1;
                            }
                            else
                            {
                                PRINT_NOW( "TS_FATEA", 500, 1 );
                                l_U816 = 0;
                            }
                        }
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U756 ))
            {
                if (IS_CHAR_ON_FIRE( l_U756 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U756 )))
                    {
                        SET_CHAR_HEALTH( l_U756, 0 );
                    }
                }
            }
            break;
            case 30:
            if (sub_36094( -125.97610000, 1317.14100000, 37.84840000, 3.68700000, l_U756 ))
            {
                sub_12685( "FM3_KILL", ref l_U872, 8, 1 );
                l_U667 = 33;
            }
            break;
            case 29:
            if (NOT (IS_CHAR_INJURED( l_U756 )))
            {
                switch (l_U669)
                {
                    case 0:
                    if (sub_3829( l_U872 ))
                    {
                        sub_4011( ref l_U872, 0 );
                    }
                    SET_PLAYER_CONTROL( sub_547(), 0 );
                    sub_11503( 1000 );
                    sub_11725();
                    CLEAR_AREA( -127.66550000, 1302.83500000, 38.84820000, 35.00000000, 1 );
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    if (NOT (IS_CHAR_INJURED( sub_493() )))
                    {
                        SET_CHAR_HEADING( sub_493(), 180.00000000 );
                        SET_CHAR_COORDINATES( sub_493(), -126.65590000, 1312.27800000, 37.84870000 );
                        SET_CURRENT_CHAR_WEAPON( sub_493(), 0, 0 );
                        OPEN_SEQUENCE_TASK( ref uVar72 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -126.68040000, 1307.55800000, 38.77420000, 2, -2, 0.10000000 );
                        CLOSE_SEQUENCE_TASK( uVar72 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U756 )))
                    {
                        SET_CHAR_COORDINATES( l_U756, -125.98150000, 1317.90000000, 37.84980000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U756, sub_493() );
                    }
                    WAIT( 500 );
                    sub_12284( ref l_U672, 1 );
                    CREATE_CAM( 14, ref l_U772 );
                    SET_CAM_POS( l_U772, -125.20790000, 1319.09600000, 38.14626000 );
                    SET_CAM_ROT( l_U772, 4.46508000, 0.00000000, 162.78020000 );
                    SET_CAM_FOV( l_U772, 24.10000000 );
                    SET_CAM_ACTIVE( l_U772, 1 );
                    SET_CAM_PROPAGATE( l_U772, 1 );
                    DO_SCREEN_FADE_IN( 1000 );
                    if (NOT (IS_CHAR_INJURED( sub_493() )))
                    {
                        TASK_PERFORM_SEQUENCE( sub_493(), uVar72 );
                        CLEAR_SEQUENCE_TASK( uVar72 );
                    }
                    GET_GAME_TIMER( ref l_U673 );
                    l_U673 += 5000;
                    l_U669 = 1;
                    break;
                    case 1:
                    GET_GAME_TIMER( ref l_U674 );
                    if (l_U674 > l_U673)
                    {
                        sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                        CREATE_CAM( 14, ref l_U772 );
                        SET_CAM_POS( l_U772, -126.15490000, 1304.18900000, 39.41691000 );
                        SET_CAM_ROT( l_U772, -1.03531300, 0.00000000, 6.49853000 );
                        SET_CAM_FOV( l_U772, 16.90000000 );
                        SET_CAM_ACTIVE( l_U772, 1 );
                        SET_CAM_PROPAGATE( l_U772, 1 );
                        CLEAR_PRINTS();
                        sub_12685( "FK3_LIVE", ref l_U872, 8, 1 );
                        if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( sub_493(), l_U756 );
                        }
                        l_U669 = 3;
                    }
                    break;
                    case 3:
                    if (NOT (sub_3829( l_U872 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U756 )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U756, -121.70350000, 1317.34600000, 38.84870000, 3, -2, 0.10000000 );
                        }
                        GET_GAME_TIMER( ref l_U674 );
                        l_U673 = l_U674 + 2000;
                        l_U669 = 4;
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    }
                    break;
                    case 4:
                    GET_GAME_TIMER( ref l_U674 );
                    if (l_U674 > l_U673)
                    {
                        sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                        sub_15253( ref l_U672, 1, 1, 1 );
                        sub_15387();
                        if (NOT (IS_CHAR_INJURED( l_U756 )))
                        {
                            DELETE_CHAR( ref l_U756 );
                            g_U15654[43] = 0;
                            l_U671 = 3;
                        }
                        else
                        {
                            g_U15654[43] = 1;
                            l_U671 = 2;
                            l_U667 = 33;
                            l_U808 = 1;
                        }
                        if (DOES_BLIP_EXIST( l_U678 ))
                        {
                            REMOVE_BLIP( l_U678 );
                        }
                        PRINT( "TS_GOAL3", 7500, 3 );
                        l_U667 = 33;
                    }
                    break;
                }
                GET_GAME_TIMER( ref l_U674 );
                if ((sub_15595()) AND (l_U674 > l_U676))
                {
                    sub_11503( 1000 );
                    sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                    sub_15253( ref l_U672, 1, 1, 1 );
                    sub_15387();
                    if (NOT (IS_CHAR_INJURED( l_U756 )))
                    {
                        DELETE_CHAR( ref l_U756 );
                        g_U15654[43] = 0;
                        l_U671 = 3;
                    }
                    else
                    {
                        g_U15654[43] = 1;
                        l_U671 = 2;
                        l_U667 = 33;
                        l_U808 = 1;
                    }
                    if (NOT (IS_CHAR_INJURED( sub_493() )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_493() );
                    }
                    if (sub_3829( l_U872 ))
                    {
                        sub_4011( ref l_U872, 0 );
                    }
                    sub_32398( 1000 );
                    REMOVE_BLIP( l_U678 );
                    PRINT( "TS_GOAL3", 7500, 3 );
                    l_U667 = 33;
                }
                if (DOES_CHAR_EXIST( l_U756 ))
                {
                    if (IS_CHAR_ON_FIRE( l_U756 ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U756 )))
                        {
                            SET_CHAR_HEALTH( l_U756, 0 );
                        }
                    }
                }
            }
            else
            {
                sub_3816( ref l_U872 );
                sub_11503( 1000 );
                sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                sub_15387();
                if (l_U669 != 0)
                {
                    sub_15253( ref l_U672, 1, 1, 1 );
                }
                sub_48690( ref l_U678 );
                g_U15654[43] = 1;
                l_U671 = 2;
                l_U667 = 33;
                l_U808 = 1;
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_493() );
                }
                if (sub_3829( l_U872 ))
                {
                    sub_4011( ref l_U872, 0 );
                }
                sub_32398( 1000 );
                REMOVE_BLIP( l_U678 );
                PRINT( "TS_GOAL3", 7500, 3 );
                l_U667 = 33;
            }
            break;
            case 15:
            if (NOT (IS_CHAR_INJURED( l_U756 )))
            {
                switch (l_U669)
                {
                    case 0:
                    SET_PLAYER_CONTROL( sub_547(), 0 );
                    sub_11503( 500 );
                    sub_11725();
                    if (sub_3829( l_U872 ))
                    {
                        sub_4011( ref l_U872, 0 );
                    }
                    CLEAR_AREA( -47.76530000, 1303.23000000, 38.84770000, 35.00000000, 1 );
                    CLEAR_HELP();
                    CLEAR_PRINTS();
                    if (NOT (IS_CHAR_INJURED( sub_493() )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar73 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -47.52230000, 1306.22100000, 38.84770000, 2, -2, 0.10000000 );
                        CLOSE_SEQUENCE_TASK( uVar73 );
                        SET_CURRENT_CHAR_WEAPON( sub_493(), 0, 0 );
                        SET_CHAR_HEADING( sub_493(), 180.00000000 );
                        SET_CHAR_COORDINATES( sub_493(), -47.05730000, 1312.36700000, 37.84870000 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U756 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U756 );
                        SET_CHAR_COORDINATES( l_U756, -46.31830000, 1319.25900000, 37.84980000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U756, sub_493() );
                    }
                    WAIT( 500 );
                    sub_12284( ref l_U672, 1 );
                    CREATE_CAM( 14, ref l_U772 );
                    SET_CAM_POS( l_U772, -47.10014000, 1321.64400000, 38.31751000 );
                    SET_CAM_ROT( l_U772, -0.57835300, -0.00000000, -174.66400000 );
                    SET_CAM_FOV( l_U772, 21.70000000 );
                    SET_CAM_ACTIVE( l_U772, 1 );
                    SET_CAM_PROPAGATE( l_U772, 1 );
                    DO_SCREEN_FADE_IN( 1000 );
                    if (NOT (IS_CHAR_INJURED( sub_493() )))
                    {
                        TASK_PERFORM_SEQUENCE( sub_493(), uVar73 );
                        CLEAR_SEQUENCE_TASK( uVar73 );
                    }
                    GET_GAME_TIMER( ref l_U673 );
                    l_U673 += 5000;
                    l_U669 = 1;
                    break;
                    case 1:
                    GET_GAME_TIMER( ref l_U674 );
                    if (l_U674 > l_U673)
                    {
                        sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                        CREATE_CAM( 14, ref l_U772 );
                        SET_CAM_POS( l_U772, -47.18313000, 1301.52400000, 39.30545000 );
                        SET_CAM_ROT( l_U772, 0.10919700, -0.00000000, 2.60908300 );
                        SET_CAM_FOV( l_U772, 11.50000000 );
                        SET_CAM_ACTIVE( l_U772, 1 );
                        SET_CAM_PROPAGATE( l_U772, 1 );
                        CLEAR_PRINTS();
                        sub_12685( "FK3_LIVE", ref l_U872, 8, 1 );
                        if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( sub_493(), l_U756 );
                        }
                        l_U669 = 3;
                    }
                    break;
                    case 3:
                    if (NOT (sub_3829( l_U872 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U756 )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U756, -42.31420000, 1316.99200000, 38.84860000, 3, -2, 0.10000000 );
                        }
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                        GET_GAME_TIMER( ref l_U674 );
                        l_U673 = l_U674 + 2000;
                        l_U669 = 4;
                    }
                    break;
                    case 4:
                    GET_GAME_TIMER( ref l_U674 );
                    if (l_U674 > l_U673)
                    {
                        sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                        sub_15253( ref l_U672, 1, 1, 1 );
                        sub_15387();
                        if (NOT (IS_CHAR_INJURED( l_U756 )))
                        {
                            DELETE_CHAR( ref l_U756 );
                            g_U15654[43] = 0;
                            l_U671 = 3;
                        }
                        else
                        {
                            g_U15654[43] = 1;
                            l_U671 = 2;
                            l_U667 = 33;
                            l_U808 = 1;
                        }
                        CLEAR_PRINTS();
                        if (DOES_BLIP_EXIST( l_U678 ))
                        {
                            REMOVE_BLIP( l_U678 );
                        }
                        PRINT( "TS_GOAL3", 7500, 3 );
                        l_U667 = 33;
                    }
                    break;
                }
                GET_GAME_TIMER( ref l_U674 );
                if ((sub_15595()) AND (l_U674 > l_U676))
                {
                    sub_11503( 500 );
                    sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                    sub_15387();
                    if (NOT (IS_CHAR_INJURED( l_U756 )))
                    {
                        DELETE_CHAR( ref l_U756 );
                        g_U15654[43] = 0;
                        l_U671 = 3;
                    }
                    else
                    {
                        g_U15654[43] = 1;
                        l_U671 = 2;
                        l_U667 = 33;
                        l_U808 = 1;
                    }
                    if (sub_3829( l_U872 ))
                    {
                        sub_4011( ref l_U872, 0 );
                    }
                    sub_15253( ref l_U672, 1, 1, 1 );
                    if (NOT (IS_CHAR_INJURED( sub_493() )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_493() );
                    }
                    CLEAR_PRINTS();
                    sub_32398( 500 );
                    REMOVE_BLIP( l_U678 );
                    PRINT( "TS_GOAL3", 7500, 3 );
                    l_U667 = 33;
                }
                if (DOES_CHAR_EXIST( l_U756 ))
                {
                    if (IS_CHAR_ON_FIRE( l_U756 ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U756 )))
                        {
                            SET_CHAR_HEALTH( l_U756, 0 );
                        }
                    }
                }
            }
            else
            {
                sub_3816( ref l_U872 );
                sub_11503( 1000 );
                sub_13680( ref l_U772, ref l_U773, ref l_U774 );
                sub_15387();
                if (l_U669 != 0)
                {
                    sub_15253( ref l_U672, 1, 1, 1 );
                }
                sub_48690( ref l_U678 );
                g_U15654[43] = 1;
                l_U671 = 2;
                l_U667 = 33;
                l_U808 = 1;
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_493() );
                }
                if (sub_3829( l_U872 ))
                {
                    sub_4011( ref l_U872, 0 );
                }
                sub_32398( 1000 );
                REMOVE_BLIP( l_U678 );
                PRINT( "TS_GOAL3", 7500, 3 );
                l_U667 = 33;
            }
            break;
            case 33:
            if ((NOT l_U821) AND ((g_U15654[43]) AND (NOT (sub_3829( l_U872 )))))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), l_U902._fU0, l_U902._fU4, l_U902._fU8, 120.00000000, 120.00000000, 40.00000000, 0 )))
                {
                    l_U667 = 34;
                }
                else
                {
                    CLEAR_PRINTS();
                    PRINT( "TS_GOAL2", 7500, 3 );
                    ALTER_WANTED_LEVEL( sub_547(), 2 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_547() );
                    SET_WANTED_MULTIPLIER( 1.00000000 );
                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                    SET_PED_DENSITY_MULTIPLIER( 0.70000000 );
                    l_U821 = 1;
                }
            }
            if ((NOT l_U821) AND ((NOT g_U15654[43]) AND (NOT (sub_3829( l_U872 )))))
            {
                ALTER_WANTED_LEVEL( sub_547(), 2 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( sub_547() );
                SET_WANTED_MULTIPLIER( 1.00000000 );
                SET_CAR_DENSITY_MULTIPLIER( 0.70000000 );
                SET_PED_DENSITY_MULTIPLIER( 0.70000000 );
                l_U821 = 1;
            }
            if ((l_U821) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_547(), 0 )))
                {
                    l_U667 = 34;
                }
            }
            if (NOT l_U809)
            {
                if ((IS_CHAR_IN_AREA_3D( sub_493(), -16.60471000, 1383.39100000, 11.77348000, -179.14010000, 1239.74100000, 48.59429000, 0 )) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                {
                    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref uVar74 );
                    GET_CURRENT_COP_MODEL( ref uVar75 );
                    REQUEST_MODEL( uVar74 );
                    REQUEST_MODEL( uVar75 );
                    REQUEST_MODEL( 1708842493 );
                    while ((NOT (HAS_MODEL_LOADED( 1708842493 ))) || ((NOT (HAS_MODEL_LOADED( uVar75 ))) || (NOT (HAS_MODEL_LOADED( uVar74 )))))
                    {
                        WAIT( 0 );
                    }
                    CLEAR_AREA( -121.42660000, 1417.93400000, 19.43750000, 5.00000000, 1 );
                    CREATE_CAR( uVar74, -121.42660000, 1417.93400000, 19.43750000, ref l_U778[0], 1 );
                    SET_CAR_HEADING( l_U778[0], 95.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U778[0] );
                    SWITCH_CAR_SIREN( l_U778[0], 1 );
                    FORCE_CAR_LIGHTS( l_U778[0], 2 );
                    CREATE_CHAR_INSIDE_CAR( l_U778[0], 6, uVar75, ref l_U763[0] );
                    CREATE_CHAR_AS_PASSENGER( l_U778[0], 6, uVar75, 0, ref l_U763[1] );
                    for ( I = 0; I <= 1; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U763[I] )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U763[I], 5, 0 );
                            SET_CHAR_DECISION_MAKER( l_U763[I], l_U715 );
                            SET_COMBAT_DECISION_MAKER( l_U763[I], l_U719 );
                            GIVE_WEAPON_TO_CHAR( l_U763[I], 7, 9999, 0 );
                        }
                    }
                    OPEN_SEQUENCE_TASK( ref uVar76 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U778[0], -148.66590000, 1341.32500000, 19.47270000, 20.00000000, 0, uVar74, 2, 4.00000000, -1 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    CLOSE_SEQUENCE_TASK( uVar76 );
                    TASK_PERFORM_SEQUENCE( l_U763[0], uVar76 );
                    SET_CHAR_KEEP_TASK( l_U763[0], 1 );
                    CLEAR_SEQUENCE_TASK( uVar76 );
                    CLEAR_AREA( -146.81620000, 1233.47000000, 18.37730000, 5.00000000, 1 );
                    CREATE_CAR( uVar74, -146.81620000, 1233.47000000, 18.37730000, ref l_U778[1], 1 );
                    SET_CAR_HEADING( l_U778[1], 6.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U778[1] );
                    SWITCH_CAR_SIREN( l_U778[1], 1 );
                    FORCE_CAR_LIGHTS( l_U778[1], 2 );
                    CREATE_CHAR_INSIDE_CAR( l_U778[1], 6, uVar75, ref l_U766[0] );
                    CREATE_CHAR_AS_PASSENGER( l_U778[1], 6, uVar75, 0, ref l_U766[1] );
                    for ( I = 0; I <= 1; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U766[I] )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U766[I], 5, 0 );
                            SET_CHAR_DECISION_MAKER( l_U766[I], l_U715 );
                            SET_COMBAT_DECISION_MAKER( l_U766[I], l_U719 );
                            GIVE_WEAPON_TO_CHAR( l_U766[I], 7, 9999, 0 );
                        }
                    }
                    OPEN_SEQUENCE_TASK( ref uVar77 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U778[1], -147.57460000, 1286.06400000, 19.37790000, 20.00000000, 0, uVar74, 2, 4.00000000, -1 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    CLOSE_SEQUENCE_TASK( uVar77 );
                    TASK_PERFORM_SEQUENCE( l_U766[0], uVar77 );
                    SET_CHAR_KEEP_TASK( l_U766[0], 1 );
                    CLEAR_SEQUENCE_TASK( uVar77 );
                    l_U809 = 1;
                }
            }
            else if (NOT l_U818)
            {
                if (NOT (IS_CHAR_INJURED( l_U763[0] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U763[0], 29, ref iVar79 );
                    if (iVar79 == 1)
                    {
                        GET_SEQUENCE_PROGRESS( l_U763[0], ref iVar78 );
                        if (iVar78 == 1)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U763[1] )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar80 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -135.30460000, 1304.85200000, 19.43730000, 3, -2, 0.50000000 );
                                CLOSE_SEQUENCE_TASK( uVar80 );
                                TASK_PERFORM_SEQUENCE( l_U763[1], uVar80 );
                                CLEAR_SEQUENCE_TASK( uVar80 );
                                SET_CHAR_KEEP_TASK( l_U763[1], 1 );
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U763[1] );
                                if (NOT (IS_CHAR_INJURED( l_U763[0] )))
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U763[0] );
                                }
                                if (IS_VEH_DRIVEABLE( l_U778[0] ))
                                {
                                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U778[0] );
                                }
                            }
                            l_U818 = 1;
                        }
                    }
                }
            }
            if (NOT l_U819)
            {
                if (NOT (IS_CHAR_INJURED( l_U766[0] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U766[0], 29, ref iVar79 );
                    if (iVar79 == 1)
                    {
                        GET_SEQUENCE_PROGRESS( l_U766[0], ref iVar78 );
                        if (iVar78 == 1)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U766[1] )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar80 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -63.53680000, 1307.18500000, 18.99890000, 3, -2, 0.50000000 );
                                CLOSE_SEQUENCE_TASK( uVar80 );
                                TASK_PERFORM_SEQUENCE( l_U766[1], uVar80 );
                                CLEAR_SEQUENCE_TASK( uVar80 );
                                SET_CHAR_KEEP_TASK( l_U766[1], 1 );
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U766[1] );
                                if (NOT (IS_CHAR_INJURED( l_U766[0] )))
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U766[0] );
                                }
                                if (IS_VEH_DRIVEABLE( l_U778[1] ))
                                {
                                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U778[1] );
                                }
                            }
                            l_U819 = 1;
                        }
                    }
                }
            }
            sub_24579();
            break;
            case 34:
            sub_24579();
            l_U789 = 1;
            break;
            case 35:
            if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND ((IS_VEH_DRIVEABLE( l_U777 )) AND (NOT (IS_CHAR_INJURED( sub_493() )))))
            {
                if (IS_CHAR_IN_CAR( l_U756, l_U777 ))
                {
                    GET_CHAR_COORDINATES( l_U756, ref uVar81._fU0, ref uVar81._fU4, ref uVar81._fU8 );
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_493(), uVar81._fU0, uVar81._fU4, uVar81._fU8, 20.00000000, 20.00000000, 4.00000000, 0 )) AND (IS_CAR_ON_SCREEN( l_U777 )))
                    {
                        SET_ROUTE( l_U678, 0 );
                        SET_CHAR_DECISION_MAKER( l_U756, l_U718 );
                        TASK_CAR_DRIVE_WANDER( l_U756, l_U777, 20.00000000, 3 );
                        l_U667 = 36;
                    }
                    if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U777, sub_493() ))
                    {
                        SET_CHAR_DECISION_MAKER( l_U756, l_U718 );
                        TASK_CAR_DRIVE_WANDER( l_U756, l_U777, 20.00000000, 3 );
                        l_U667 = 36;
                    }
                }
            }
            sub_24579();
            sub_25244();
            break;
            case 36:
            if ((NOT (IS_CHAR_INJURED( sub_493() ))) AND (NOT (IS_CHAR_INJURED( l_U756 ))))
            {
                GET_CHAR_COORDINATES( l_U756, ref uVar84._fU0, ref uVar84._fU4, ref uVar84._fU8 );
                if (IS_CHAR_IN_ANY_CAR( l_U756 ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), uVar84._fU0, uVar84._fU4, uVar84._fU8, 140.00000000, 140.00000000, 140.00000000, 0 )))
                    {
                        l_U788 = 1;
                    }
                }
            }
            sub_25244();
            sub_24579();
            break;
        }
        sub_53160();
        sub_53383();
        sub_56263();
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            l_U789 = 1;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 36 ))
            {
                WAIT( 0 );
            }
            switch (l_U667)
            {
                case 1:
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    SET_CHAR_COORDINATES( sub_493(), -64.02671000, 1270.96100000, 19.39010000 );
                    SET_CHAR_HEADING( sub_493(), 0.00000000 );
                    SET_CAM_BEHIND_PED( sub_493() );
                }
                break;
                case 4:
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    SET_CHAR_COORDINATES( sub_493(), -54.25510000, 1328.67400000, 26.01860000 );
                    l_U666 = 4;
                }
                break;
            }
        }
        if (l_U788)
        {
            sub_56807();
        }
        if (l_U789)
        {
            sub_57672();
        }
        WAIT( 0 );
    }
    return;
}

void sub_380(unknown uParam0)
{
    StrCopy( ref l_U338._fU0, uParam0, 16 );
    sub_399();
    return;
}

void sub_399()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U338._fU16[I]._fU0 = nil;
        StrCopy( ref l_U338._fU16[I]._fU4, "", 32 );
        l_U338._fU344[I] = 0;
    }
    return;
}

void sub_493()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_547()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_651(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_INJURED( sub_493() )))
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

void sub_952(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U338._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U338._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_1036( "\n PED NUMBER ", uParam0 );
    sub_1076( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_1036(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1076(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1126()
{
    sub_1135();
    return;
}

void sub_1135()
{
    int iVar2;

    iVar2 = 11;
    sub_1149( iVar2 );
    sub_2325( iVar2 );
    return;
}

void sub_1149(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1193();
        sub_1354();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1462();
            sub_1501();
        }
    }
    sub_1577();
    sub_1678();
    uVar5 = sub_1791( uParam0 );
    sub_2232( uVar5, 0 );
    return;
}

void sub_1193()
{
    sub_1207( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1307();
    }
    return;
}

void sub_1207(int iParam0)
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

void sub_1307()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1354()
{
    sub_1363();
    return;
}

void sub_1363()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1462()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1501()
{
    sub_1510();
    return;
}

void sub_1510()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1577()
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

void sub_1678()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1700();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1700()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1791(unknown uParam0)
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
    sub_2190( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2190(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2232(int iParam0, boolean bParam1)
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

void sub_2325(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2334();
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
        sub_3109();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2334()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2372( 5, g_U569[I] )) == 1))
        {
            if ((sub_2372( 1, g_U569[I] )) != 0)
            {
                sub_2658( I );
            }
        }
    }
    if (NOT sub_2824())
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

int sub_2372(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2658(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2743( g_U569 - 1 );
    return;
}

void sub_2743(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2824()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2372( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3109()
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

void sub_3236()
{
    int I;

    if (NOT (IS_CHAR_INJURED( sub_493() )))
    {
        SET_PED_IS_BLIND_RAGING( sub_493(), 0 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1708842493 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 467469635 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1143910864 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -301223260 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1490216169 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -196312163 );
    REMOVE_ANIMS( "missfrancis3" );
    for ( I = 0; I <= 4; I++ )
    {
        if (DOES_CHAR_EXIST( l_U724[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U724[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U735[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U735[I] );
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U730[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U730[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U739[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U739[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U743[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U743[I] );
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U747[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U747[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U752[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[I] );
        }
    }
    if (DOES_PICKUP_EXIST( l_U783 ))
    {
        REMOVE_PICKUP( l_U783 );
    }
    sub_3816( ref l_U872 );
    sub_3816( ref l_U878 );
    sub_3816( ref l_U884 );
    sub_3816( ref l_U890 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1304597482 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3816(unknown uParam0)
{
    if (sub_3829( (uParam0^) ))
    {
        sub_4011( uParam0, 0 );
    }
    return;
}

int sub_3829(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_3941( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_3941( "\n speech is not playing" );
    }
    return 0;
}

void sub_3941(unknown uParam0)
{
    return;
}

void sub_4011(int iParam0, unknown uParam1)
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

void sub_4909()
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_5440(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, boolean bParam7)
{
    unknown uVar10;
    int iVar11;
    int iVar12;
    int iVar13;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar10 );
    switch (uVar10)
    {
        case 0:
        CREATE_CHAR( 8, -301223260, uParam1, uParam2, uParam3, uParam0, 1 );
        break;
        case 1:
        CREATE_CHAR( 8, -1143910864, uParam1, uParam2, uParam3, uParam0, 1 );
        break;
        case 2:
        CREATE_CHAR( 8, -301223260, uParam1, uParam2, uParam3, uParam0, 1 );
        break;
    }
    SET_CHAR_HEADING( (uParam0^), uParam4 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
    switch (uVar10)
    {
        case 0:
        GENERATE_RANDOM_INT_IN_RANGE( -1, 3, ref iVar11 );
        if (NOT (iVar11 == -1))
        {
            SET_CHAR_PROP_INDEX( (uParam0^), 0, iVar11 );
        }
        break;
        case 1:
        GENERATE_RANDOM_INT_IN_RANGE( -1, 4, ref iVar11 );
        GENERATE_RANDOM_INT_IN_RANGE( -1, 1, ref iVar12 );
        if (NOT (iVar11 == -1))
        {
            SET_CHAR_PROP_INDEX( (uParam0^), 0, iVar11 );
        }
        if (NOT (iVar12 == -1))
        {
            SET_CHAR_PROP_INDEX( (uParam0^), 1, iVar12 );
        }
        break;
        case 2:
        GENERATE_RANDOM_INT_IN_RANGE( -1, 3, ref iVar11 );
        if (NOT (iVar11 == -1))
        {
            SET_CHAR_PROP_INDEX( (uParam0^), 0, iVar11 );
        }
        break;
    }
    if (bParam7)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar13 );
        if (iVar13 == 0)
        {
            GIVE_WEAPON_TO_CHAR( (uParam0^), 13, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( (uParam0^), 13, 1 );
        }
        else
        {
            GIVE_WEAPON_TO_CHAR( (uParam0^), 7, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( (uParam0^), 7, 1 );
        }
    }
    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 5 );
    SET_CHAR_RELATIONSHIP( (uParam0^), 5, 0 );
    SET_CHAR_DECISION_MAKER( (uParam0^), uParam5 );
    SET_COMBAT_DECISION_MAKER( (uParam0^), uParam6 );
    if (NOT (IS_CHAR_INJURED( sub_493() )))
    {
        REGISTER_HATED_TARGETS_IN_AREA( (uParam0^), uParam1, uParam2, uParam3, 60.00000000 );
    }
    SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
    return;
}

int sub_8540(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_493() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_493(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_493() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_493(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_493()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_493() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_493() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_547() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_547() )))
    {
        return 0;
    }
    return 1;
}

void sub_10166()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U724[I] )))
        {
            SET_CHAR_DECISION_MAKER( l_U724[I], l_U716 );
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U730[I] )))
        {
            SET_CHAR_RELATIONSHIP( l_U730[I], 5, 0 );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U739[I] )))
        {
            SET_CHAR_RELATIONSHIP( l_U739[I], 5, 0 );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U743[I] )))
        {
            SET_CHAR_DECISION_MAKER( l_U743[I], l_U716 );
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U747[I] )))
        {
            SET_CHAR_DECISION_MAKER( l_U747[I], l_U716 );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U752[I] )))
        {
            SET_CHAR_DECISION_MAKER( l_U752[I], l_U716 );
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U757[I] )))
        {
            SET_CHAR_DECISION_MAKER( l_U757[I], l_U716 );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U735[I] )))
        {
            SET_CHAR_DECISION_MAKER( l_U735[I], l_U716 );
        }
    }
    return;
}

int sub_10753(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CURRENT_CHAR_WEAPON( uParam0, ref iVar3 );
        if ((iVar3 == 18) || ((iVar3 == 16) || ((iVar3 == 15) || ((iVar3 == 14) || ((iVar3 == 13) || ((iVar3 == 12) || ((iVar3 == 10) || (iVar3 == 7))))))))
        {
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

void sub_11503(unknown uParam0)
{
    DISABLE_PAUSE_MENU( 1 );
    sub_11520();
    sub_4909();
    DO_SCREEN_FADE_OUT( uParam0 );
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    DISABLE_PAUSE_MENU( 0 );
    return;
}

void sub_11520()
{
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    return;
}

void sub_11725()
{
    REQUEST_ANIMS( "gestures@niko" );
    while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_12284(unknown uParam0, boolean bParam1)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (bParam1)
    {
        SET_USE_HIGHDOF( 1 );
    }
    sub_12334();
    CLEAR_PRINTS();
    return;
}

void sub_12334()
{
    return sub_12345( 1, 1 );
}

int sub_12345(boolean bParam0, unknown uParam1)
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

void sub_12685(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_12708( uParam0, ref l_U338._fU0, uParam1, uParam2, uParam3 );
}

void sub_12708(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_12762( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_12762(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_12784( iParam1 )))
    {
        return 0;
    }
    l_U338._fU384 = 0;
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
    sub_13464( ref g_U8395, ref l_U338 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_12784(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_3941( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_3941( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_3941( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_13464(int iParam0, int iParam1)
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

void sub_13680(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_15253(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3)
{
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    if (bParam2)
    {
        SET_PLAYER_CONTROL( sub_547(), 1 );
    }
    if (bParam1)
    {
        SET_USE_HIGHDOF( 0 );
    }
    if (bParam3)
    {
        SET_CAM_BEHIND_PED( sub_493() );
    }
    sub_15325();
    SET_WIDESCREEN_BORDERS( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_15325()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_15387()
{
    if (HAVE_ANIMS_LOADED( "gestures@niko" ))
    {
        REMOVE_ANIMS( "gestures@niko" );
    }
    return;
}

int sub_15595()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_16030()
{
    int iVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( l_U756 )))
    {
        GET_CHAR_LAST_DAMAGE_BONE( l_U756, ref iVar2 );
        GET_CURRENT_CHAR_WEAPON( sub_493(), ref iVar3 );
        if (iVar2 == 1205)
        {
            if ((iVar3 == 16) || (iVar3 == 17))
            {
                SET_CHAR_HEALTH( l_U756, 0 );
                if (NOT (IS_CHAR_INJURED( l_U735[2] )))
                {
                    TASK_COWER( l_U735[2] );
                }
            }
            else
            {
                CLEAR_CHAR_LAST_DAMAGE_BONE( l_U756 );
            }
        }
    }
    return;
}

void sub_23184()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( l_U756 )))
    {
        OPEN_SEQUENCE_TASK( ref uVar2 );
        TASK_TOGGLE_DUCK( 0, 1 );
        TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -116.89850000, 1326.60200000, 26.01850000, 4, -2, 0.20000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -128.71040000, 1326.97900000, 30.37680000, 4, -2, 0.20000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -129.13810000, 1325.98300000, 30.37520000, 4, -2, 0.20000000 );
        CLOSE_SEQUENCE_TASK( uVar2 );
        TASK_PERFORM_SEQUENCE( l_U756, uVar2 );
        CLEAR_SEQUENCE_TASK( uVar2 );
    }
    return;
}

void sub_24579()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        if (DOES_BLIP_EXIST( l_U680[I] ))
        {
            if (IS_CHAR_INJURED( l_U724[I] ))
            {
                REMOVE_BLIP( l_U680[I] );
            }
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U686[I] ))
        {
            if (IS_CHAR_INJURED( l_U730[I] ))
            {
                REMOVE_BLIP( l_U686[I] );
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_BLIP_EXIST( l_U691[I] ))
        {
            if (IS_CHAR_INJURED( l_U739[I] ))
            {
                REMOVE_BLIP( l_U691[I] );
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_BLIP_EXIST( l_U695[I] ))
        {
            if (IS_CHAR_INJURED( l_U743[I] ))
            {
                REMOVE_BLIP( l_U695[I] );
            }
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U699[I] ))
        {
            if (IS_CHAR_INJURED( l_U747[I] ))
            {
                REMOVE_BLIP( l_U699[I] );
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_BLIP_EXIST( l_U704[I] ))
        {
            if (IS_CHAR_INJURED( l_U752[I] ))
            {
                REMOVE_BLIP( l_U704[I] );
            }
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_BLIP_EXIST( l_U708[I] ))
        {
            if (IS_CHAR_INJURED( l_U757[I] ))
            {
                REMOVE_BLIP( l_U708[I] );
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_BLIP_EXIST( l_U711[I] ))
        {
            if (IS_CHAR_INJURED( l_U735[I] ))
            {
                REMOVE_BLIP( l_U711[I] );
            }
        }
    }
    return;
}

void sub_25244()
{
    if (l_U790)
    {
        if (IS_CHAR_DEAD( l_U756 ))
        {
            CLEAR_PRINTS();
            REMOVE_BLIP( l_U678 );
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_493(), l_U902._fU0, l_U902._fU4, l_U902._fU8, 120.00000000, 120.00000000, 40.00000000, 0 ))
            {
                PRINT( "TS_GOAL2", 7500, 3 );
            }
            sub_25375();
            g_U15654[43] = 1;
            l_U671 = 1;
            l_U667 = 33;
            l_U808 = 1;
        }
    }
    return;
}

void sub_25375()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U735[I] )))
        {
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                SET_CHAR_DECISION_MAKER( l_U735[I], l_U716 );
                SET_CHAR_RELATIONSHIP( l_U735[I], 5, 0 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U735[I], 60.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U735[I], 0 );
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U739[I] )))
        {
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                SET_CHAR_DECISION_MAKER( l_U739[I], l_U716 );
                SET_CHAR_RELATIONSHIP( l_U739[I], 5, 0 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U739[I], 60.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U739[I], 0 );
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U743[I] )))
        {
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                SET_CHAR_DECISION_MAKER( l_U743[I], l_U716 );
                SET_CHAR_RELATIONSHIP( l_U743[I], 5, 0 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U743[I], 60.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U743[I], 0 );
            }
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U747[I] )))
        {
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                SET_CHAR_DECISION_MAKER( l_U747[I], l_U716 );
                SET_CHAR_RELATIONSHIP( l_U747[I], 5, 0 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U747[I], 60.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U747[I], 0 );
            }
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U757[I] )))
        {
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                SET_CHAR_DECISION_MAKER( l_U757[I], l_U716 );
                SET_CHAR_RELATIONSHIP( l_U757[I], 5, 0 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U757[I], 60.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U757[I], 0 );
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U752[I] )))
        {
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                SET_CHAR_DECISION_MAKER( l_U752[I], l_U716 );
                SET_CHAR_RELATIONSHIP( l_U752[I], 5, 0 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U752[I], 60.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U752[I], 0 );
            }
        }
    }
    for ( I = 0; I <= 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U724[I] )))
        {
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                SET_CHAR_DECISION_MAKER( l_U724[I], l_U716 );
                SET_CHAR_RELATIONSHIP( l_U724[I], 5, 0 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U724[I], 50.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U724[I], 0 );
            }
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U730[I] )))
        {
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                SET_CHAR_RELATIONSHIP( l_U730[I], 5, 0 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U730[I], 50.00000000 );
                SET_CHAR_DECISION_MAKER( l_U730[I], l_U716 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U730[I], 0 );
            }
        }
    }
    return;
}

void sub_27261()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT l_U787)
    {
        if ((DOES_CHAR_EXIST( l_U757[1] )) AND (IS_CHAR_DEAD( l_U757[1] )))
        {
            GET_DEAD_CHAR_PICKUP_COORDS( l_U757[1], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_SAFE_PICKUP_COORDS( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            if (GET_GROUND_Z_FOR_3D_COORD( uVar5._fU0, uVar5._fU4, uVar5._fU8 + 1.00000000, ref uVar8 ))
            {
                CREATE_PICKUP_WITH_AMMO( 993473937, 3, 3, uVar5._fU0, uVar5._fU4, uVar8 - 0.50000000, ref l_U782 );
            }
            else
            {
                CREATE_PICKUP_WITH_AMMO( 993473937, 3, 3, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref l_U782 );
            }
            l_U787 = 1;
        }
        if ((DOES_CHAR_EXIST( l_U757[0] )) AND (IS_CHAR_DEAD( l_U757[0] )))
        {
            GET_DEAD_CHAR_PICKUP_COORDS( l_U757[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_SAFE_PICKUP_COORDS( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            if (GET_GROUND_Z_FOR_3D_COORD( uVar5._fU0, uVar5._fU4, uVar5._fU8 + 1.00000000, ref uVar8 ))
            {
                CREATE_PICKUP_WITH_AMMO( 993473937, 3, 3, uVar5._fU0, uVar5._fU4, uVar8, ref l_U782 );
            }
            else
            {
                CREATE_PICKUP_WITH_AMMO( 993473937, 3, 3, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref l_U782 );
            }
            l_U787 = 1;
        }
    }
    return;
}

void sub_29645()
{
    if ((NOT l_U812) AND (NOT (IS_CHAR_INJURED( l_U756 ))))
    {
        if (IS_CHAR_IN_AREA_3D( l_U756, -49.54739000, 1323.68000000, 33.70799000, -46.76336000, 1327.48400000, 37.60752000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U743[0] )))
            {
                SET_CHAR_DECISION_MAKER( l_U743[0], l_U715 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U743[0], -52.24470000, 1323.94800000, 31.49660000, 2.00000000 );
                TASK_GUARD_ASSIGNED_DEFENSIVE_AREA( l_U743[0], -52.24470000, 1323.94800000, 31.49660000, 90.00000000, 0.00000000, 500000 );
            }
            if (NOT (IS_CHAR_INJURED( l_U743[1] )))
            {
                SET_CHAR_DECISION_MAKER( l_U743[1], l_U715 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U743[1], -48.65190000, 1323.93300000, 33.69700000, 1.50000000 );
                TASK_GUARD_ASSIGNED_DEFENSIVE_AREA( l_U743[1], -48.65190000, 1323.93300000, 33.69700000, 90.00000000, 0.00000000, 500000 );
            }
            l_U812 = 1;
        }
    }
    return;
}

void sub_31773()
{
    int I;

    SET_DEAD_PEDS_DROP_WEAPONS( 0 );
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U735[I] ))
        {
            DELETE_CHAR( ref l_U735[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U739[I] ))
        {
            DELETE_CHAR( ref l_U739[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U743[I] ))
        {
            DELETE_CHAR( ref l_U743[I] );
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U747[I] ))
        {
            DELETE_CHAR( ref l_U747[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U752[I] ))
        {
            DELETE_CHAR( ref l_U752[I] );
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_CHAR_EXIST( l_U757[I] ))
        {
            DELETE_CHAR( ref l_U757[I] );
        }
    }
    for ( I = 0; I <= 4; I++ )
    {
        if (DOES_CHAR_EXIST( l_U724[I] ))
        {
            DELETE_CHAR( ref l_U724[I] );
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U730[I] ))
        {
            DELETE_CHAR( ref l_U730[I] );
        }
    }
    SET_DEAD_PEDS_DROP_WEAPONS( 1 );
    return;
}

void sub_32398(unknown uParam0)
{
    DISABLE_PAUSE_MENU( 1 );
    sub_11520();
    sub_4909();
    DO_SCREEN_FADE_IN( uParam0 );
    while (IS_SCREEN_FADING_IN())
    {
        DISABLE_PAUSE_MENU( 1 );
        WAIT( 0 );
    }
    DISABLE_PAUSE_MENU( 0 );
    return;
}

int sub_33330(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
                if (NOT (IS_CHAR_INJURED( sub_493() )))
                {
                    GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar9 );
                    if (NOT (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 )))
                    {
                        if (NOT (iVar9 == 1))
                        {
                            if (NOT (IS_PED_RAGDOLL( (uParam0^) )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar10 );
                                TASK_LOOK_AT_CHAR( 0, sub_493(), -2, 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_493() );
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
                    if (sub_3829( (uParam3^) ))
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            GET_CHAR_HEALTH( (uParam0^), ref iVar8 );
                            if (iVar8 < l_U649)
                            {
                                sub_33704( uParam3 );
                                GET_GAME_TIMER( ref l_U647 );
                                l_U647 += 3000;
                            }
                            l_U649 = iVar8;
                        }
                    }
                    GET_GAME_TIMER( ref iVar7 );
                    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 ))
                        {
                            if ((iVar7 > l_U647) AND (sub_34214( (uParam3^) )))
                            {
                                sub_34255( uParam4, uParam3, 8, 1 );
                            }
                        }
                    }
                    if (NOT (IS_CHAR_FACING_CHAR( (uParam0^), sub_493(), 70.00000000 )))
                    {
                        if ((l_U651) AND (iVar7 > l_U648))
                        {
                            l_U651 = 0;
                        }
                    }
                    if (NOT l_U651)
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( (uParam0^), uParam2, uParam1 ))
                            {
                                switch (l_U661)
                                {
                                    case 0:
                                    if ((NOT (IS_CHAR_INJURED( (uParam0^) ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                                    {
                                        GET_CHAR_COORDINATES( sub_493(), ref vVar17.x, ref vVar17.y, ref vVar17.z );
                                        GET_CHAR_COORDINATES( (uParam0^), ref vVar14.x, ref vVar14.y, ref vVar14.z );
                                        uVar11 = {vVar14 - vVar17};
                                        GET_HEADING_FROM_VECTOR_2D( uVar11._fU0, uVar11._fU4, ref l_U653 );
                                        GET_CHAR_HEADING( (uParam0^), ref fVar20 );
                                        iVar21 = FLOOR( l_U653 );
                                        iVar23 = FLOOR( fVar20 );
                                        iVar22 = iVar23 + 180;
                                        if (iVar22 > 360)
                                        {
                                            if ((iVar21 >= iVar23) || (iVar21 < (iVar22 - 360)))
                                            {
                                                l_U652 = 1;
                                            }
                                            else
                                            {
                                                l_U652 = 0;
                                            }
                                        }
                                        else if ((iVar21 > iVar23) AND (iVar21 <= iVar22))
                                        {
                                            l_U652 = 1;
                                        }
                                        else
                                        {
                                            l_U652 = 0;
                                        }
                                        l_U661 = 1;
                                    }
                                    break;
                                    case 1:
                                    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
                                    {
                                        GET_CHAR_HEADING( (uParam0^), ref fVar20 );
                                        if (IS_CHAR_FACING_CHAR( (uParam0^), sub_493(), 30.00000000 ))
                                        {
                                            if (IS_CHAR_FACING_CHAR( (uParam0^), sub_493(), 20.00000000 ))
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
                                        if (l_U652)
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
                                        if (IS_CHAR_FACING_CHAR( (uParam0^), sub_493(), 10.00000000 ))
                                        {
                                            l_U661 = 2;
                                        }
                                    }
                                    break;
                                    case 2:
                                    l_U651 = 1;
                                    l_U648 = iVar7 + 2500;
                                    l_U661 = 0;
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

int sub_33704(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_3941( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_3941( "\n CONVERSATION PAUSED AT LINE " );
            sub_33860( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_3941( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_3941( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_3941( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_33860(unknown uParam0)
{
    return;
}

void sub_34214(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_34255(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_34278( uParam0, ref l_U338._fU0, uParam1, uParam2, uParam3 );
}

int sub_34278(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_12762( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_35462(unknown uParam0)
{
    int iVar3;

    GET_CURRENT_CHAR_WEAPON( sub_493(), ref iVar3 );
    if ((iVar3 != 7) AND (iVar3 != 9))
    {
        return 0;
    }
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_493() )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if (((IS_CONTROL_JUST_PRESSED( 0, 4 )) AND ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_547(), uParam0 )) AND (NOT IS_USING_CONTROLLER()))) || (GET_CHAR_MELEE_ACTION_FLAG0( uParam0 )))
                {
                    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
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

int sub_35820(unknown uParam0, unknown uParam1)
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

int sub_36094(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    float fVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    switch (l_U905)
    {
        case 0:
        l_U908 = 0;
        l_U909 = 0;
        SET_PLAYER_CONTROL( sub_547(), 0 );
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 20.00000000, 1 );
        if (NOT (IS_CHAR_INJURED( sub_493() )))
        {
            SET_CHAR_COORDINATES( sub_493(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
            SET_CHAR_HEADING( sub_493(), uParam3 );
        }
        if (NOT (IS_CHAR_INJURED( sub_493() )))
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_493(), "player_execute", "missfrancis3", 1000.00000000, 0, 0, 0, 0, -1 );
            WAIT( 0 );
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            SWITCH_PED_TO_ANIMATED( uParam4, 1 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_493(), 0.23520000, 1.69660000, -1.00010000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
            SET_CHAR_COORDINATES( uParam4, uVar12._fU0, uVar12._fU4, uVar12._fU8 );
            GET_CHAR_HEADING( sub_493(), ref uVar8 );
            SET_CHAR_HEADING( uParam4, uVar8 + 170.78820000 );
            SET_CHAR_PROOFS( uParam4, 1, 0, 0, 0, 0 );
            UNLOCK_RAGDOLL( uParam4, 0 );
        }
        CREATE_CAM( 14, ref l_U910[0] );
        ATTACH_CAM_TO_PED( l_U910[0], sub_493() );
        SET_CAM_ATTACH_OFFSET( l_U910[0], 0.84260000, -0.82030000, 0.56040000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U910[0], 1 );
        POINT_CAM_AT_PED( l_U910[0], sub_493() );
        SET_CAM_POINT_OFFSET( l_U910[0], 0.00000000, 1.10000000, 0.50000000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U910[0], 1 );
        SET_CAM_FOV( l_U910[0], 27.70007000 );
        SET_CAM_ACTIVE( l_U910[0], 1 );
        SET_CAM_PROPAGATE( l_U910[0], 1 );
        CREATE_CAM( 14, ref l_U910[1] );
        ATTACH_CAM_TO_PED( l_U910[1], sub_493() );
        SET_CAM_ATTACH_OFFSET( l_U910[1], 1.42710000, 4.49370000, -0.76200000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U910[1], 1 );
        POINT_CAM_AT_PED( l_U910[1], sub_493() );
        SET_CAM_POINT_OFFSET( l_U910[1], -1.30000000, 0.00000000, -0.05000000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U910[1], 1 );
        SET_CAM_FOV( l_U910[1], 27.70007000 );
        SET_CAM_ACTIVE( l_U910[1], 0 );
        SET_CAM_PROPAGATE( l_U910[1], 0 );
        GET_GAME_TIMER( ref l_U906 );
        l_U906 += 1000;
        sub_12284( ref l_U672, 0 );
        l_U905 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U907 );
        if (l_U907 > l_U906)
        {
            if (IS_CHAR_PLAYING_ANIM( sub_493(), "missfrancis3", "player_execute" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_493(), "missfrancis3", "player_execute", ref fVar7 );
                if (fVar7 > 0.02000000)
                {
                    SET_CAM_ACTIVE( l_U910[1], 1 );
                    SET_CAM_PROPAGATE( l_U910[1], 1 );
                    SET_CAM_ACTIVE( l_U910[0], 0 );
                    SET_CAM_PROPAGATE( l_U910[0], 0 );
                    if (NOT (IS_CHAR_DEAD( uParam4 )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( uParam4, "victim", "missfrancis3", 8.00000000, 0, 0, 0, 0, 0 );
                        if (NOT (# -NULL-0xc27bca()))
                        {
                            SET_CHAR_PROOFS( uParam4, 0, 0, 0, 0, 0 );
                            TRIGGER_PTFX_ON_PED_BONE( "CS_execution_clarence", uParam4, 0.10000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1204, 1 );
                        }
                    }
                    GET_GAME_TIMER( ref l_U906 );
                    l_U786 = l_U906 + 2627;
                    l_U905 = 2;
                }
            }
        }
        else if (IS_CHAR_PLAYING_ANIM( sub_493(), "missfrancis3", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_493(), "missfrancis3", "player_execute", ref fVar7 );
            if (fVar7 >= 0.00000000)
            {
                SET_CHAR_ANIM_CURRENT_TIME( sub_493(), "missfrancis3", "player_execute", 0.00000000 );
            }
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U785 );
        if (l_U785 > l_U786)
        {
            l_U905 = 3;
        }
        break;
        case 3:
        UNLOCK_RAGDOLL( uParam4, 1 );
        SET_CAM_ACTIVE( l_U910[0], 0 );
        SET_CAM_PROPAGATE( l_U910[0], 0 );
        SET_CAM_ACTIVE( l_U910[1], 0 );
        SET_CAM_PROPAGATE( l_U910[1], 0 );
        DESTROY_CAM( l_U910[0] );
        DESTROY_CAM( l_U910[1] );
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            SET_CHAR_PROOFS( uParam4, 0, 0, 0, 0, 0 );
        }
        sub_15253( ref l_U672, 0, 1, 1 );
        SET_TIME_SCALE( 1.00000000 );
        l_U905 = 4;
        break;
        case 4:
        return 1;
        break;
    }
    if ((NOT (IS_CHAR_INJURED( uParam4 ))) AND ((NOT l_U909) AND (l_U908)))
    {
        if (IS_CHAR_PLAYING_ANIM( uParam4, "missfrancis3", "victim" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( uParam4, "missfrancis3", "victim", ref fVar7 );
            if (fVar7 > 0.70000000)
            {
                STOP_PED_SPEAKING( uParam4, 1 );
                UNLOCK_RAGDOLL( uParam4, 1 );
                DAMAGE_CHAR( uParam4, 20000, 0 );
                l_U909 = 1;
            }
        }
    }
    if (NOT l_U908)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_493(), "missfrancis3", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_493(), "missfrancis3", "player_execute", ref fVar7 );
            if (fVar7 >= 0.03000000)
            {
                if (NOT (IS_CHAR_DEAD( uParam4 )))
                {
                    GET_PED_BONE_POSITION( sub_493(), 1232, 0.20000000, 0.00000000, 0.00000000, ref l_U926 );
                    GET_PED_BONE_POSITION( uParam4, 1204, 0.10000000, 0.00000000, 0.00000000, ref uVar9 );
                    if (NOT (# -NULL-0xc27bca()))
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_clarence", uParam4, 0.10000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1204, 1 );
                    }
                    FIRE_PED_WEAPON( sub_493(), uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                    TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_493(), 0.20000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                    l_U908 = 1;
                }
            }
        }
    }
    return 0;
}

void sub_48690(unknown uParam0)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        REMOVE_BLIP( (uParam0^) );
    }
    return;
}

void sub_53160()
{
    int I;

    if (l_U806)
    {
        for ( I = 0; I <= 4; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U724[I] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U724[I], 24, ref l_U784 );
                if (l_U784 == 7)
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U724[I] );
                }
            }
        }
    }
    if (l_U807)
    {
        for ( I = 0; I <= 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U730[I] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U730[I], 24, ref l_U784 );
                if (l_U784 == 7)
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U730[I] );
                }
            }
        }
    }
    return;
}

void sub_53383()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( sub_493() )))
    {
        switch (l_U667)
        {
            case 5:
            if (IS_CHAR_IN_AREA_3D( sub_493(), -49.70516000, 1329.81200000, 28.91796000, -51.58021000, 1325.03200000, 23.70299000, 0 ))
            {
                l_U667 = 17;
            }
            break;
            case 6:
            if (IS_CHAR_IN_AREA_3D( sub_493(), -57.19479000, 1325.13100000, 28.98810000, -54.39842000, 1329.68200000, 25.09529000, 0 ))
            {
                l_U667 = 17;
            }
            break;
            case 8:
            if (IS_CHAR_IN_AREA_3D( sub_493(), -59.91711000, 1329.48300000, 33.07439000, -51.17455000, 1322.95300000, 19.58603000, 0 ))
            {
                sub_53707( 1 );
            }
            break;
            case 7:
            if (IS_CHAR_IN_AREA_3D( sub_493(), -119.29960000, 1327.05200000, 36.93293000, -125.22210000, 1322.72600000, 19.50753000, 0 ))
            {
                sub_53707( 0 );
            }
            break;
            case 10:
            if (IS_CHAR_IN_AREA_3D( sub_493(), -119.29960000, 1327.05200000, 36.93293000, -125.22210000, 1322.72600000, 19.50753000, 0 ))
            {
                sub_53707( 0 );
            }
            break;
            case 9: break;
            case 11: break;
            case 12: break;
            case 17:
            if (IS_CHAR_IN_AREA_3D( sub_493(), -116.85770000, 1328.80200000, 37.31687000, -129.22620000, 1323.15400000, 20.08557000, 0 ))
            {
                l_U667 = 5;
            }
            if ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
            {
                if ((IS_CHAR_SHOOTING( sub_493() )) AND ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U756, sub_493(), 0 )) AND (IS_CHAR_IN_AREA_3D( sub_493(), -104.72730000, 1329.53500000, 29.38552000, -120.03560000, 1324.87900000, 33.44109000, 0 ))))
                {
                    sub_53707( 0 );
                }
            }
            break;
            case 18:
            if (IS_CHAR_IN_AREA_3D( sub_493(), -57.69801000, 1327.11700000, 19.78312000, -46.08138000, 1322.25400000, 35.70505000, 0 ))
            {
                sub_53707( 1 );
            }
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -118.83280000, 1329.61000000, 29.47890000, -123.59060000, 1323.64600000, 33.69999000, 0 ))
                {
                    sub_53707( 0 );
                }
            }
            break;
            case 19:
            if ((IS_CHAR_IN_AREA_3D( sub_493(), -129.37470000, 1327.20600000, 33.75062000, -119.19040000, 1323.53600000, 37.49474000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_493(), -105.69020000, 1321.53800000, 29.29646000, -100.85510000, 1311.67300000, 32.84549000, 0 )))
            {
                sub_53707( 1 );
            }
            break;
            case 20:
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -57.69801000, 1327.11700000, 19.78312000, -46.08138000, 1322.25400000, 35.70505000, 0 ))
                {
                    sub_53707( 1 );
                }
            }
            break;
            case 21:
            if (NOT (IS_CHAR_INJURED( sub_493() )))
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -57.18403000, 1327.20800000, 37.36558000, -47.35752000, 1323.53300000, 31.50466000, 0 ))
                {
                    if ((NOT l_U817) AND ((NOT (IS_CHAR_INJURED( l_U756 ))) AND (NOT (IS_CHAR_INJURED( sub_493() )))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_TOGGLE_DUCK( 0, 0 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U717 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -116.73200000, 1303.43800000, 33.65080000, 4, -2, 0.20000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -123.50860000, 1324.36000000, 37.81340000, 4, -2, 0.20000000 );
                        TASK_TOGGLE_DUCK( 0, 1 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U756, uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U817 = 1;
                    }
                    sub_5440( ref l_U747[0], -96.83590000, 1327.50200000, 34.99740000, 270.78080000, l_U715, l_U720, 1 );
                    if ((NOT (IS_CHAR_INJURED( l_U747[0] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -118.39190000, 1324.82400000, 34.68630000, 4, -2, 0.20000000 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U747[0], uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                    }
                    sub_5440( ref l_U747[1], -97.44890000, 1327.73400000, 34.68630000, 270.78080000, l_U715, l_U720, 1 );
                    if ((NOT (IS_CHAR_INJURED( l_U747[1] ))) AND (NOT (IS_CHAR_INJURED( sub_493() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -103.86440000, 1323.25900000, 34.68630000, 4, -2, 0.20000000 );
                        TASK_COMBAT( 0, sub_493() );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U747[1], uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                    }
                    sub_5440( ref l_U747[2], -93.91011000, 1301.25800000, 34.68630000, 270.78080000, l_U715, l_U720, 1 );
                    sub_5440( ref l_U747[3], -87.01160000, 1302.50700000, 34.68630000, 270.78080000, l_U715, l_U720, 1 );
                    sub_25375();
                    l_U667 = 23;
                }
            }
            break;
            case 22: break;
        }
    }
    return;
}

void sub_53707(boolean bParam0)
{
    int I;
    unknown uVar4;

    REQUEST_MODEL( 1304597482 );
    REQUEST_MODEL( -301223260 );
    REQUEST_MODEL( 1708842493 );
    while ((NOT (HAS_MODEL_LOADED( 1708842493 ))) || ((NOT (HAS_MODEL_LOADED( -301223260 ))) || (NOT (HAS_MODEL_LOADED( 1304597482 )))))
    {
        WAIT( 0 );
    }
    LOAD_ALL_OBJECTS_NOW();
    if (bParam0)
    {
        CLEAR_AREA( -146.33090000, 1304.29700000, 20.01730000, 5.00000000, 1 );
        CREATE_CAR( 1304597482, -146.33090000, 1304.29700000, 20.01730000, ref l_U777, 1 );
        SET_CAR_HEADING( l_U777, 360.00000000 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1304597482 );
        CREATE_CHAR_AS_PASSENGER( l_U777, 8, -301223260, 0, ref l_U760[0] );
        CREATE_CHAR_AS_PASSENGER( l_U777, 8, -301223260, 1, ref l_U760[1] );
        for ( I = 0; I <= 1; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U760[I] )))
            {
                SET_CHAR_DECISION_MAKER( l_U760[I], l_U716 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U760[I], 0 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U760[I] );
                GIVE_WEAPON_TO_CHAR( l_U760[I], 13, 9999, 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U760[I], 5 );
                SET_CHAR_RELATIONSHIP( l_U760[I], 5, 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U760[I], 1 );
            }
        }
        if ((IS_VEH_DRIVEABLE( l_U777 )) AND (NOT (IS_CHAR_INJURED( l_U756 ))))
        {
            OPEN_SEQUENCE_TASK( ref uVar4 );
            TASK_TOGGLE_DUCK( 0, 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -127.93000000, 1326.14800000, 26.01870000, 3, -2, 0.20000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -116.91120000, 1309.01400000, 20.30960000, 3, -2, 0.20000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -138.34490000, 1303.80600000, 20.43160000, 3, -2, 0.20000000 );
            TASK_ENTER_CAR_AS_DRIVER( 0, l_U777, -2 );
            CLOSE_SEQUENCE_TASK( uVar4 );
            UNLOCK_RAGDOLL( l_U756, 1 );
            TASK_PERFORM_SEQUENCE( l_U756, uVar4 );
            CLEAR_SEQUENCE_TASK( uVar4 );
        }
    }
    else
    {
        CLEAR_AREA( -30.40030000, 1307.37100000, 20.00270000, 5.00000000, 1 );
        CREATE_CAR( 1304597482, -30.40030000, 1307.37100000, 20.00270000, ref l_U777, 1 );
        SET_CAR_HEADING( l_U777, 180.00000000 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1304597482 );
        CREATE_CHAR_AS_PASSENGER( l_U777, 8, -301223260, 0, ref l_U760[0] );
        CREATE_CHAR_AS_PASSENGER( l_U777, 8, -301223260, 1, ref l_U760[1] );
        for ( I = 0; I <= 1; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U760[I] )))
            {
                SET_CHAR_DECISION_MAKER( l_U760[I], l_U716 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U760[I], 0 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U760[I] );
                GIVE_WEAPON_TO_CHAR( l_U760[I], 13, 9999, 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U760[I], 5 );
                SET_CHAR_RELATIONSHIP( l_U760[I], 5, 0 );
                SET_COMBAT_DECISION_MAKER( l_U760[I], l_U719 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U760[I], 1 );
            }
        }
        if ((IS_VEH_DRIVEABLE( l_U777 )) AND (NOT (IS_CHAR_INJURED( l_U756 ))))
        {
            OPEN_SEQUENCE_TASK( ref uVar4 );
            TASK_TOGGLE_DUCK( 0, 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -47.91140000, 1326.00400000, 26.01850000, 3, -2, 0.20000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -67.54270000, 1324.75600000, 20.43650000, 3, -2, 0.20000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -67.35570000, 1329.98600000, 20.41450000, 3, -2, 0.20000000 );
            TASK_ENTER_CAR_AS_DRIVER( 0, l_U777, -2 );
            CLOSE_SEQUENCE_TASK( uVar4 );
            UNLOCK_RAGDOLL( l_U756, 1 );
            TASK_PERFORM_SEQUENCE( l_U756, uVar4 );
            CLEAR_SEQUENCE_TASK( uVar4 );
        }
    }
    sub_25375();
    PRINT( "TS_GOAL4", 7500, 3 );
    l_U667 = 35;
    return;
}

void sub_56263()
{
    if ((l_U667 != 2) AND ((l_U667 != 1) AND (l_U671 == 0)))
    {
        if (NOT (IS_CHAR_INJURED( sub_493() )))
        {
            if (NOT l_U814)
            {
                if (IS_CHAR_IN_AREA_3D( sub_493(), -35.43067000, 1272.92900000, 18.79913000, -140.42870000, 1330.20700000, 59.20376000, 0 ))
                {
                    SET_WANTED_MULTIPLIER( 0.00000000 );
                    if (l_U667 == 33)
                    {
                        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                        SET_PED_DENSITY_MULTIPLIER( 0.70000000 );
                    }
                    else
                    {
                        SET_CAR_DENSITY_MULTIPLIER( 0.30000000 );
                        SET_PED_DENSITY_MULTIPLIER( 0.30000000 );
                    }
                    l_U814 = 1;
                }
            }
            else if (NOT (IS_CHAR_IN_AREA_3D( sub_493(), -35.43067000, 1272.92900000, 18.79913000, -140.42870000, 1330.20700000, 59.20376000, 0 )))
            {
                SET_WANTED_MULTIPLIER( 1.00000000 );
                SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
                l_U814 = 0;
            }
        }
    }
    return;
}

void sub_56807()
{
    WAIT( 3000 );
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_547(), 150 );
        if (NOT (IS_CHAR_INJURED( sub_493() )))
        {
            SAY_AMBIENT_SPEECH( sub_493(), "MISSION_FAIL_RAGE", 0, 0, 0 );
        }
    }
    sub_56928( 11, "FM3_AWAY", "FM3AUD", 0 );
    sub_57514();
    PRINT( "TS_FAIL2", 7500, 3 );
    sub_3236();
    return;
}

void sub_56928(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_56972( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_56972(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_57514()
{
    sub_57523();
    return;
}

void sub_57523()
{
    int iVar2;

    iVar2 = 11;
    sub_57537( iVar2 );
    sub_2325( iVar2 );
    return;
}

void sub_57537(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_547(), 150 );
    CLEAR_HELP();
    sub_1149( uParam0 );
    return;
}

void sub_57672()
{
    CLEAR_WANTED_LEVEL( sub_547() );
    sub_57693();
    switch (l_U671)
    {
        case 1:
        sub_56928( 11, "FM3_CALL3", "FM3AUD", 0 );
        TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
        break;
        case 2:
        sub_56928( 11, "FM3_CALL2", "FM3AUD", 0 );
        TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
        break;
        case 3:
        sub_56928( 11, "FM3_CALL3", "FM3AUD", 0 );
        TRIGGER_MISSION_COMPLETE_AUDIO( 63 );
        break;
    }
    if (l_U808)
    {
        sub_69460( 48 );
    }
    sub_3236();
    return;
}

void sub_57693()
{
    sub_57702();
    return;
}

void sub_57702()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_57720();
    sub_57779( iVar2, iVar3, iVar4 );
    return;
}

void sub_57720()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U632[I] = 4;
    }
    return;
}

void sub_57779(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 11;
    sub_57812( iVar5, uParam0, uParam1, uParam2, "Contact_12" );
    return;
}

void sub_57812(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_57908( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_57908( ref cVar9 );
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
            sub_57908( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_57908( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_57908( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_57908( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_58485( iParam0, iVar7 );;;
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
                sub_58882( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_58882( 0, 4 );
            }
        }
    }
    if (NOT (sub_58971( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_547(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_547() );
    }
    sub_2334();
    bVar27 = true;
    uVar28 = sub_58485( iParam0, iVar7 );
    uVar29 = sub_1791( iParam0 );
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
                sub_68347( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_68777();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_68862( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_68919( iParam0 );
                sub_68958( 0 );
                sub_2232( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_69066();
        }
    }
    if (bParam2)
    {
        sub_68777();
        sub_69154();
        sub_68958( 0 );
    }
    if (bParam3)
    {
        sub_68777();
        sub_69194();
        sub_68958( 0 );
        sub_2232( uVar29, 0 );
    }
    sub_1678();
    return;
}

void sub_57908(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_58485(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_2190( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_58882(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_58971(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_59179( uParam1 );
        break;
        case 1:
        bVar8 = sub_61257( uParam1 );
        break;
        case 2:
        bVar8 = sub_61483( uParam1 );
        break;
        case 3:
        bVar8 = sub_61633( uParam1 );
        break;
        case 4:
        bVar8 = sub_61911( uParam1 );
        break;
        case 5:
        bVar8 = sub_62214( uParam1 );
        break;
        case 6:
        bVar8 = sub_62413( uParam1 );
        break;
        case 7:
        bVar8 = sub_62639( uParam1 );
        break;
        case 8:
        bVar8 = sub_62874( uParam1 );
        break;
        case 9:
        bVar8 = sub_63249( uParam1 );
        break;
        case 10:
        bVar8 = sub_63496( uParam1 );
        break;
        case 11:
        bVar8 = sub_63635( uParam1 );
        break;
        case 12:
        bVar8 = sub_63934( uParam1 );
        break;
        case 13:
        bVar8 = sub_64162( uParam1 );
        break;
        case 14:
        bVar8 = sub_64449( uParam1 );
        break;
        case 15:
        bVar8 = sub_64731( uParam1 );
        break;
        case 16:
        bVar8 = sub_65013( uParam1 );
        break;
        case 17:
        bVar8 = sub_65214( uParam1 );
        break;
        case 18:
        bVar8 = sub_65287( uParam1 );
        break;
        case 19:
        bVar8 = sub_65501( uParam1 );
        break;
        case 20:
        bVar8 = sub_65754( uParam1 );
        break;
        case 21:
        bVar8 = sub_66001( uParam1 );
        break;
        case 22:
        bVar8 = sub_66202( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_60862( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_58485( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_66525( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_59179(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_59458( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_59458( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_59458( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_59458( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_59458( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_59458( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_59458( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_59458( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_59458( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_59458( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_59458( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_59458( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_59458( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_59458( iVar3, 0, 3, 1, 0, 0 );
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
        sub_59458( iVar3, 0, sub_60740(), sub_61006(), 0, 0 );
        break;
        default:
        sub_61165( "Friend 1", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Friend 1", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_59458(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_59469( uParam1 );
    sub_59643( uParam0, 0, uParam2 );
    sub_59643( uParam0, 1, uParam3 );
    sub_59643( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_57720();
    return;
}

void sub_59469(unknown uParam0)
{
    ADD_SCORE( sub_547(), uParam0 );
    sub_59494( uParam0 );
    return;
}

void sub_59494(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2190( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_59643(unknown uParam0, int iParam1, int iParam2)
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
        sub_59800( uParam0 );
    }
    return;
}

void sub_59800(unknown uParam0)
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

int sub_60740()
{
    switch (l_U632[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_60862( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_60862(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_61006()
{
    switch (l_U632[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_60862( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_61165(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_61257(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59458( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_61165( "Contact 2", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 2", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61483(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_59458( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_61165( "Girl 3", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Girl 3", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61633(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_59458( iVar3, 0, sub_60740(), sub_61006(), 0, 0 );
        break;
        default:
        sub_61165( "Friend 4", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Friend 4", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61911(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59458( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_59458( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_59458( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_59458( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_61165( "Contact 5", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 5", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62214(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_61165( "Contact 7", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 7", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62413(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59458( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_61165( "Contact 7b", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 7b", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62639(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_59458( iVar3, 0, sub_60740(), sub_61006(), 0, 0 );
        break;
        default:
        sub_61165( "Friend 8", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Friend 8", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62874(unknown uParam0)
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
        sub_59458( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_59458( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_59458( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_59458( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_59458( iVar3, 0, sub_60740(), sub_61006(), 0, 0 );
        break;
        default:
        sub_61165( "Friend 9", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Friend 9", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63249(unknown uParam0)
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
        sub_59458( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_59458( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_59458( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_61165( "Contact 10", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_61165( "Contact 10", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63496(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_61165( "Girl 11", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Girl 11", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63635(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59458( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_59458( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_59458( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_59458( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_59458( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_61165( "Contact 12", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 12", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_63934(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59458( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_61165( "Contact 13", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 13", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64162(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_59458( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_59458( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_59458( iVar3, 0, sub_60740(), sub_61006(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_61165( "Friend 15", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Friend 15", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64449(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59458( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_59458( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_59458( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_61165( "Contact 16", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 16", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_64731(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_59458( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_59458( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_59458( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_61165( "Contact 18", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 18", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65013(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_61165( "Contact 19", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 19", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65214(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_61165( "Girl 20", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65287(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_61165( "Contact 21", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 21", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65501(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59458( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_59458( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_61165( "Contact 22", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 22", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_65754(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_59458( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_59458( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_59458( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_61165( "Contact 24", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 24", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_66001(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_59458( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_59458( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_59458( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_61165( "Contact 25", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_61165( "Contact 25", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_66202(unknown uParam0)
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
        sub_59458( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_61165( "Girl 26", 1 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_61165( "Girl 26", 0 );
        sub_59458( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_66525(int iParam0, int iParam1)
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
    if (sub_66573( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_67304( iParam1 );
    }
    return;
}

int sub_66573(int iParam0, int iParam1)
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
            sub_66713( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_66713(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_66895( 0 );
    return;
}

void sub_66895(boolean bParam0)
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
        sub_67150();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_67150()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_67304(int iParam0)
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
        sub_67637( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_67637( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_67637( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_67637( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_67637( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_67637( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_67637( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_67637( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_67637( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_67637( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_67637( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_67637( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_67637( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_67637( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_67637( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_67637( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_67637( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_67637( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_67637( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_67637(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_68347(unknown uParam0, unknown uParam1)
{
    sub_68366( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_68366(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_68777()
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

int sub_68862(int iParam0, int iParam1)
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

void sub_68919(unknown uParam0)
{
    sub_1577();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_68958(unknown uParam0)
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

void sub_69066()
{
    sub_69075();
    return;
}

void sub_69075()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_69154()
{
    sub_69075();
    return;
}

void sub_69194()
{
    sub_69075();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_69460(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_69471( uParam0 );
    if (NOT g_U34048[uVar3]._fU0)
    {
        return;
    }
    g_U34048[uVar3]._fU0 = 0;
    sub_69656();
    return;
}

int sub_69471(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_69482( uParam0 )))
    {
        sub_2190( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_69482(unknown uParam0)
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

void sub_69656()
{
    g_U34175._fU16._fU0--;
    sub_69689();
    return;
}

void sub_69689()
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

