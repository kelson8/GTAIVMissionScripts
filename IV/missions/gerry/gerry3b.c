void main()
{
    vector vVar2;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    unknown uVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    float fVar13;
    float fVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    vector vVar18;
    int iVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    int iVar25;
    unknown uVar26;
    int iVar27;
    unknown uVar28;
    float fVar29;
    unknown uVar30;
    float fVar31;
    int iVar32;
    unknown uVar33;
    float fVar34;
    unknown uVar35;
    float fVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    boolean bVar40;
    int iVar41;
    float fVar42;
    int iVar43;
    float fVar44;
    int iVar45;
    int iVar46;
    float fVar47;
    unknown uVar48;
    unknown uVar49;

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
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;
    l_U499 = 0;
    l_U500 = 0;
    l_U501 = 0;
    l_U510 = 0;
    l_U512 = 0;
    l_U516 = sub_122( 27 );
    l_U583 = 0;
    l_U584 = 0;
    l_U585 = 0.00000000;
    l_U586 = 0.50000000;
    l_U587 = 1000;
    l_U599 = 0;
    l_U613 = 0;
    l_U623 = {-1507.65000000, 262.48670000, 12.41290000};
    l_U645 = 1.50000000;
    l_U646 = 2.00000000;
    l_U647 = 1.50000000;
    l_U648 = 1.50000000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_951();
        sub_3040();
    }
    vVar2 = {-998.06810000, -554.00070000, 3.27520000};
    SET_MISSION_FLAG( 1 );
    sub_4181( "GM3", 0 );
    sub_4181( "GM3AUD", 6 );
    sub_4348( "GM3AUD" );
    sub_4475( 0, sub_3732(), "Niko", 0 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U521 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U524 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U522 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U523 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U525 );
    l_U620 = {-1000.76900000, 1213.55000000, 25.23100000};
    l_U635 = {-1512.45900000, 263.06670000, 12.21780000};
    l_U504._fU4 = 0.40000000;
    l_U504._fU8 = 9;
    l_U508 = 0;
    l_U550 = 0;
    l_U611 = 0;
    REQUEST_ANIMS( "missgerry3" );
    while (NOT (HAVE_ANIMS_LOADED( "missgerry3" )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( -1097828879 );
    REQUEST_MODEL( l_U516 );
    REQUEST_MODEL( 248532041 );
    while ((NOT (HAS_MODEL_LOADED( 248532041 ))) || ((NOT (HAS_MODEL_LOADED( l_U516 ))) || (NOT (HAS_MODEL_LOADED( -1097828879 )))))
    {
        WAIT( 0 );
    }
    LOAD_ALL_OBJECTS_NOW();
    SUPPRESS_CAR_MODEL( -1097828879 );
    l_U508 = 1;
    SWITCH_ROADS_OFF( -1012.52600000, 1206.62200000, 22.88589000, -991.98390000, 1213.74200000, 25.86753000 );
    SWITCH_PED_PATHS_OFF( -1503.57000000, 239.25990000, 9.89414400, -1514.57300000, 293.79620000, 17.13227000 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -1014.72300000, 1202.88500000, 22.82053000, -986.81040000, 1217.65100000, 26.28683000, 0 );
    ADD_SCENARIO_BLOCKING_AREA( -946.95180000, 1196.23200000, 27.85514000, -1086.94900000, 1222.45700000, 23.77016000 );
    FORCE_WEATHER( 1 );
    if (NOT (IS_CHAR_INJURED( sub_3732() )))
    {
        if ((IS_CHAR_IN_AREA_3D( sub_3732(), -1453.60300000, 343.75270000, 33.36001000, -1531.50100000, 217.00600000, 10.44580000, 0 )) || (g_U64942))
        {
            g_U64942 = 0;
            DISABLE_PAUSE_MENU( 1 );
            if (IS_CHAR_IN_AREA_3D( sub_3732(), -1453.60300000, 343.75270000, 33.36001000, -1531.50100000, 217.00600000, 10.44580000, 0 ))
            {
                sub_5252();
                sub_5294();
                DO_SCREEN_FADE_OUT( 1000 );
                while (IS_SCREEN_FADING_OUT())
                {
                    sub_5358();
                    WAIT( 0 );
                }
            }
            DISABLE_PAUSE_MENU( 0 );
            if (NOT l_U598)
            {
                if (NOT (IS_CHAR_INJURED( sub_3732() )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_3732() ))
                    {
                        CLEAR_AREA( -1501.43200000, 281.93970000, 12.70520000, 5.00000000, 1 );
                        GET_CAR_CHAR_IS_USING( sub_3732(), ref uVar5 );
                        SET_CAR_COORDINATES( uVar5, -1501.43200000, 281.93970000, 12.70520000 );
                        SET_CAR_HEADING( uVar5, 0 );
                        SET_CAR_ON_GROUND_PROPERLY( uVar5 );
                        if (IS_CAR_A_MISSION_CAR( uVar5 ))
                        {
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar5 );
                        }
                        CLEAR_AREA( -1506.58300000, 263.75990000, 11.40010000, 5, 1 );
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_3732(), -1506.58300000, 263.75990000, 11.40010000 );
                        SET_CHAR_HEADING( sub_3732(), 90.00000000 );
                    }
                }
                SET_PLAYER_CONTROL( sub_5447(), 0 );
                sub_6039();
                sub_6840( 1000 );
                l_U508 = 2;
            }
        }
        else
        {
            sub_6039();
            if (NOT (IS_CHAR_INJURED( l_U514 )))
            {
                ADD_BLIP_FOR_CHAR( l_U514, ref l_U626 );
                SET_ROUTE( l_U626, 1 );
                SET_BLIP_AS_FRIENDLY( l_U626, 1 );
                PRINT_NOW( "GOAL_01", 7500, 3 );
            }
        }
    }
    while (true)
    {
        if ((NOT l_U598) AND (NOT l_U597))
        {
            switch (l_U508)
            {
                case 1:
                if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))
                {
                    if ((IS_CHAR_IN_AREA_2D( sub_3732(), -1502.40400000, 272.46040000, -1514.79900000, 255.04540000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), l_U623._fU0, l_U623._fU4, l_U623._fU8, 2.50000000, 2.50000000, 1.00000000, 0 )))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_5447(), 0 )))
                        {
                            REMOVE_BLIP( l_U626 );
                            SET_PLAYER_CONTROL( sub_5447(), 0 );
                            if (NOT l_U598)
                            {
                                l_U508 = 2;
                            }
                        }
                        else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_NOW( "GM3WANTED", 7500, 3 );
                        }
                    }
                }
                sub_5358();
                if (NOT (IS_VEH_DRIVEABLE( l_U517 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U514 )))
                    {
                        TASK_FLEE_CHAR_ANY_MEANS( l_U514, sub_3732(), 70.00000000, 50000, 0, 0, 0, 5.00000000 );
                        SET_CHAR_KEEP_TASK( l_U514, 1 );
                    }
                    sub_5654();
                    l_U503 = 3;
                    l_U598 = 1;
                }
                else
                {
                    GET_CAR_HEALTH( l_U517, ref iVar6 );
                    if (iVar6 < 995)
                    {
                        LOCK_CAR_DOORS( l_U517, 1 );
                        sub_5654();
                        l_U503 = 6;
                        l_U598 = 1;
                    }
                }
                if (IS_CHAR_DEAD( l_U514 ))
                {
                    sub_5654();
                    l_U503 = 1;
                    l_U598 = 1;
                }
                break;
                case 2:
                GET_GAME_TIMER( ref l_U617 );
                switch (l_U500)
                {
                    case 0:
                    sub_7617( ref l_U512, 0 );
                    SET_PLAYER_CONTROL( sub_5447(), 0 );
                    CLEAR_AREA( -1505.32800000, 263.20590000, 11.32610000, 6.00000000, 1 );
                    CLEAR_AREA( -1498.60500000, 263.23780000, 11.46510000, 6.00000000, 1 );
                    if (IS_VEH_DRIVEABLE( l_U517 ))
                    {
                        LOCK_CAR_DOORS( l_U517, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( sub_3732() )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_3732() ))
                        {
                            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar7 );
                            if (IS_VEH_DRIVEABLE( uVar7 ))
                            {
                                SET_CAR_COORDINATES( uVar7, -1501.84800000, 286.87540000, 13.05140000 );
                                SET_CAR_HEADING( uVar7, 180.00000000 );
                                SET_CAR_ON_GROUND_PROPERLY( uVar7 );
                            }
                            WARP_CHAR_FROM_CAR_TO_COORD( sub_3732(), -1507.45500000, 263.64560000, 11.41830000 );
                        }
                        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3732(), 0 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3732() );
                        SET_CHAR_COORDINATES( sub_3732(), -1507.45500000, 263.64560000, 11.41830000 );
                        SET_CHAR_HEADING( sub_3732(), 90.00000000 );
                        SET_CHAR_DUCKING( sub_3732(), 0 );
                        GET_CURRENT_CHAR_WEAPON( sub_3732(), ref iVar8 );
                        if (iVar8 != 0)
                        {
                            SET_CURRENT_CHAR_WEAPON( sub_3732(), 0, 0 );
                        }
                        SET_PED_DONT_USE_VEHICLE_SPECIFIC_ANIMS( sub_3732(), 1 );
                    }
                    if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND (NOT (IS_CHAR_INJURED( l_U514 ))))
                    {
                        SET_CHAR_COORDINATES( l_U514, -1511.24800000, 261.53930000, 11.49700000 );
                        SET_CHAR_HEADING( l_U514, 270.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U514, sub_3732() );
                    }
                    CREATE_CAM( 14, ref l_U518 );
                    SET_CAM_POS( l_U518, -1509.70000000, 265.14310000, 13.04850000 );
                    SET_CAM_ROT( l_U518, -10.77560000, -0.00000000, 161.63830000 );
                    SET_CAM_FOV( l_U518, 56.39997000 );
                    SET_CAM_ACTIVE( l_U518, 1 );
                    SET_CAM_PROPAGATE( l_U518, 1 );
                    if ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        TASK_SWAP_WEAPON( 0, 0 );
                        TASK_LOOK_AT_CHAR( 0, l_U514, 10000, 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1509.46400000, 263.32260000, 12.48140000, 2, -2, 0.50000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U514 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        TASK_PERFORM_SEQUENCE( sub_3732(), uVar9 );
                        CLEAR_SEQUENCE_TASK( uVar9 );
                    }
                    WAIT( 1000 );
                    sub_8511( "GM3_ARR", ref l_U526, 6, 1 );
                    GET_GAME_TIMER( ref l_U617 );
                    l_U578 = l_U617 + 3000;
                    l_U500 = 2;
                    break;
                    case 2:
                    if (NOT (sub_3366( l_U526 )))
                    {
                        sub_9531( ref l_U518, ref l_U519, ref l_U520 );
                        CREATE_CAM( 14, ref l_U518 );
                        SET_CAM_POS( l_U518, -1512.76500000, 261.45540000, 12.53134000 );
                        SET_CAM_ROT( l_U518, 4.57966800, 0.00000000, -70.93585000 );
                        SET_CAM_FOV( l_U518, 45.00000000 );
                        SET_CAM_ACTIVE( l_U518, 1 );
                        SET_CAM_PROPAGATE( l_U518, 1 );
                        sub_8511( "GM3_ARR2", ref l_U526, 6, 1 );
                        l_U612 += 1050;
                        l_U500 = 3;
                    }
                    break;
                    case 3:
                    if (NOT (sub_3366( l_U526 )))
                    {
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT (IS_CHAR_INJURED( l_U514 ))))
                        {
                            TASK_ENTER_CAR_AS_PASSENGER( l_U514, l_U517, -2, 0 );
                        }
                        WAIT( 750 );
                        if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))
                        {
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_ENTER_CAR_AS_DRIVER( sub_3732(), l_U517, 0 );
                        }
                        sub_9531( ref l_U518, ref l_U519, ref l_U520 );
                        CREATE_CAM( 14, ref l_U518 );
                        SET_CAM_POS( l_U518, -1509.15800000, 261.24990000, 12.65625000 );
                        SET_CAM_ROT( l_U518, -8.57277000, -0.00000000, 64.66640000 );
                        SET_CAM_FOV( l_U518, 52.19998000 );
                        CREATE_CAM( 14, ref l_U519 );
                        SET_CAM_POS( l_U519, -1508.73800000, 263.21660000, 13.29007000 );
                        SET_CAM_ROT( l_U519, -25.44333000, 0.00000000, 94.59821000 );
                        SET_CAM_FOV( l_U519, 45.00000000 );
                        CREATE_CAM( 3, ref l_U520 );
                        SET_CAM_INTERP_STYLE_CORE( l_U520, l_U518, l_U519, 6000, 0 );
                        SET_CAM_ACTIVE( l_U520, 1 );
                        SET_CAM_PROPAGATE( l_U520, 1 );
                        sub_8511( "GM3_ARR3", ref l_U526, 6, 1 );
                        l_U612 += 1000;
                        l_U500 = 4;
                    }
                    break;
                    case 4:
                    if (NOT l_U608)
                    {
                        if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND (NOT (IS_CHAR_INJURED( l_U514 ))))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U514, 11, ref iVar10 );
                            if (iVar10 == 7)
                            {
                                TASK_LOOK_AT_CHAR( l_U514, sub_3732(), 8000, 0 );
                                l_U608 = 1;
                            }
                        }
                    }
                    if (l_U617 > l_U612)
                    {
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                        l_U612 += 8000;
                        l_U500 = 6;
                    }
                    break;
                    case 6:
                    if (NOT l_U608)
                    {
                        if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND (NOT (IS_CHAR_INJURED( l_U514 ))))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U514, 11, ref iVar10 );
                            if (iVar10 == 7)
                            {
                                TASK_LOOK_AT_CHAR( l_U514, sub_3732(), 8000, 0 );
                                l_U608 = 1;
                            }
                        }
                    }
                    if (NOT l_U566)
                    {
                        if (NOT (sub_3366( l_U526 )))
                        {
                            sub_8511( "GM2_GO", ref l_U526, 6, 1 );
                            l_U566 = 1;
                        }
                    }
                    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((NOT (sub_3366( l_U526 ))) AND (l_U617 > l_U612)))
                    {
                        if (NOT (IS_CHAR_INJURED( sub_3732() )))
                        {
                            SET_PED_DONT_USE_VEHICLE_SPECIFIC_ANIMS( sub_3732(), 0 );
                        }
                        if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND (NOT (IS_CHAR_INJURED( l_U514 ))))
                        {
                            TASK_LOOK_AT_CHAR( l_U514, sub_3732(), 0, 0 );
                            TASK_LOOK_AT_CHAR( sub_3732(), l_U514, 0, 0 );
                        }
                        sub_9531( ref l_U518, ref l_U519, ref l_U520 );
                        sub_10750( ref l_U512, 0, 1, 1 );
                        REMOVE_ANIMS( "gestures@niko" );
                        CLEAR_PRINTS();
                        ADD_BLIP_FOR_CHAR( l_U514, ref l_U628 );
                        CHANGE_BLIP_DISPLAY( l_U628, 0 );
                        SET_BLIP_AS_FRIENDLY( l_U628, 1 );
                        ADD_BLIP_FOR_CAR( l_U517, ref l_U629 );
                        CHANGE_BLIP_DISPLAY( l_U629, 0 );
                        SET_BLIP_AS_FRIENDLY( l_U629, 1 );
                        ADD_BLIP_FOR_COORD( -1077.78400000, 1210.07300000, 23.69940000, ref l_U627 );
                        CHANGE_BLIP_DISPLAY( l_U627, 0 );
                        l_U508 = 3;
                    }
                    break;
                }
                if ((l_U617 > l_U578) AND (sub_11049()))
                {
                    sub_11166( 1000 );
                    CLEAR_AREA( -1505.32800000, 263.20590000, 11.32610000, 6.00000000, 1 );
                    CLEAR_AREA( -1498.60500000, 263.23780000, 11.46510000, 6.00000000, 1 );
                    sub_9531( ref l_U518, ref l_U519, ref l_U520 );
                    if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT (IS_CHAR_INJURED( l_U514 ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U514 );
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U514, l_U517, 0 );
                    }
                    if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3732() );
                        WARP_CHAR_INTO_CAR( sub_3732(), l_U517 );
                    }
                    if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND (NOT (IS_CHAR_INJURED( l_U514 ))))
                    {
                        TASK_LOOK_AT_CHAR( l_U514, sub_3732(), 0, 0 );
                        TASK_LOOK_AT_CHAR( sub_3732(), l_U514, 0, 0 );
                    }
                    sub_10750( ref l_U512, 0, 1, 1 );
                    CLEAR_PRINTS();
                    ADD_BLIP_FOR_CHAR( l_U514, ref l_U628 );
                    CHANGE_BLIP_DISPLAY( l_U628, 0 );
                    SET_BLIP_AS_FRIENDLY( l_U628, 1 );
                    ADD_BLIP_FOR_CAR( l_U517, ref l_U629 );
                    CHANGE_BLIP_DISPLAY( l_U629, 0 );
                    SET_BLIP_AS_FRIENDLY( l_U629, 1 );
                    ADD_BLIP_FOR_COORD( -1077.78400000, 1210.07300000, 23.69940000, ref l_U627 );
                    CHANGE_BLIP_DISPLAY( l_U627, 0 );
                    if (NOT (IS_CHAR_INJURED( sub_3732() )))
                    {
                        SET_PED_DONT_USE_VEHICLE_SPECIFIC_ANIMS( sub_3732(), 0 );
                    }
                    REMOVE_ANIMS( "gestures@niko" );
                    l_U508 = 3;
                    sub_11716( ref l_U526 );
                    sub_6840( 1000 );
                }
                break;
                case 3:
                sub_11768();
                sub_12978();
                if (sub_13689())
                {
                    if ((l_U568) || (l_U501 == 4))
                    {
                        if (DOES_BLIP_EXIST( l_U627 ))
                        {
                            if (NOT l_U562)
                            {
                                CHANGE_BLIP_DISPLAY( l_U627, 2 );
                                CLEAR_PRINTS();
                                PRINT_NOW( "GOAL_03", 7500, 3 );
                            }
                            else
                            {
                                CLEAR_PRINTS();
                                PRINT_NOW( "GM3WANTED", 7500, 3 );
                            }
                        }
                        else if (NOT l_U562)
                        {
                            if (IS_THIS_PRINT_BEING_DISPLAYED( "TASK2", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_PRINTS();
                            }
                            if (l_U579)
                            {
                                ADD_BLIP_FOR_COORD( l_U620._fU0, l_U620._fU4, l_U620._fU8, ref l_U627 );
                                SET_ROUTE( l_U627, 1 );
                            }
                            else
                            {
                                ADD_BLIP_FOR_COORD( -1077.78400000, 1210.07300000, 23.69940000, ref l_U627 );
                                SET_ROUTE( l_U627, 1 );
                            }
                            CLEAR_PRINTS();
                            PRINT_NOW( "GOAL_03", 7500, 3 );
                        }
                        else
                        {
                            CLEAR_PRINTS();
                            PRINT_NOW( "GM3WANTED", 7500, 3 );
                        }
                        l_U508 = 4;
                    }
                    else if (NOT l_U602)
                    {
                        GET_GAME_TIMER( ref l_U616 );
                        l_U574 = (l_U616 + 7500) + 3500;
                        l_U638 = l_U574;
                        CLEAR_PRINTS();
                        PRINT_NOW( "GOAL_00", 7500, 3 );
                        ADD_BLIP_FOR_COORD( vVar2.x, vVar2.y, vVar2.z, ref l_U631 );
                        SET_ROUTE( l_U631, 1 );
                        WAIT( 100 );
                        l_U602 = 1;
                        l_U508 = 5;
                    }
                    else if (NOT l_U596)
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "GOAL_00", 7500, 3 );
                        CHANGE_BLIP_DISPLAY( l_U631, 2 );
                        WAIT( 100 );
                        GET_GAME_TIMER( ref l_U616 );
                        l_U574 = l_U616 + 7500;
                        l_U508 = 5;
                    }
                    else
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "GOAL_03", 7500, 3 );
                        CHANGE_BLIP_DISPLAY( l_U627, 2 );
                        GET_GAME_TIMER( ref l_U616 );
                        l_U574 = l_U616 + 7500;
                        l_U508 = 5;
                    };;;
                }
                break;
                case 5:
                vVar18 = {0.00000000, 0.00000000, 0.00000000};
                if ((NOT l_U565) AND (l_U576 > 8))
                {
                    if (IS_VEH_DRIVEABLE( l_U517 ))
                    {
                        if ((sub_14582( 1, 1 )) AND (IS_CAR_IN_AREA_3D( l_U517, -1499.77600000, 260.26910000, 11.01200000, -1514.07700000, 265.08110000, 15.09332000, 0 )))
                        {
                            l_U508 = 12;
                        }
                        else
                        {
                            sub_5654();
                            l_U503 = 6;
                            l_U598 = 1;
                        }
                    }
                    break;
                }
                GET_GAME_TIMER( ref l_U617 );
                if (IS_VEH_DRIVEABLE( l_U517 ))
                {
                    GET_GAME_TIMER( ref l_U617 );
                    GET_CAR_HEALTH( l_U517, ref iVar11 );
                    iVar12 = l_U587 - iVar11;
                    GET_CAR_SPEED( l_U517, ref fVar13 );
                    GET_CAR_COORDINATES( l_U517, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                    fVar14 = VDIST( uVar15, l_U620 );
                    if (NOT l_U607)
                    {
                        if (CHECK_STUCK_TIMER( l_U517, 0, 100 ))
                        {
                            l_U607 = 1;
                        }
                    }
                }
                if (NOT l_U565)
                {
                    if ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))
                    {
                        GET_CURRENT_CHAR_WEAPON( sub_3732(), ref iVar21 );
                        GET_CHAR_COORDINATES( l_U514, ref uVar22._fU0, ref uVar22._fU4, ref uVar22._fU8 );
                        if (((LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), uVar22._fU0, uVar22._fU4, uVar22._fU8, 20.00000000, 20.00000000, 10.00000000, 0 )) AND ((iVar21 != 56) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_5447(), l_U514 )))) || ((IS_PLAYER_TARGETTING_CHAR( sub_5447(), l_U514 )) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U517, sub_3732() ))))
                        {
                            sub_15259();
                        }
                        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), uVar22._fU0, uVar22._fU4, uVar22._fU8, 30.00000000, 30.00000000, 10.00000000, 0 )) AND (IS_CHAR_SHOOTING( sub_3732() )))
                        {
                            sub_15259();
                        }
                    }
                    if (NOT l_U603)
                    {
                        if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT l_U555))
                        {
                            if (IS_CHAR_SITTING_IN_CAR( sub_3732(), l_U517 ))
                            {
                                iVar25 = GET_TIME_SINCE_PLAYER_HIT_PED( sub_5447() );
                                if ((NOT (l_U573 >= 4)) AND ((NOT (IS_CAR_IN_WATER( l_U517 ))) AND ((NOT (CHECK_STUCK_TIMER( l_U517, 0, 1 ))) AND ((NOT l_U565) AND ((sub_13689()) AND ((iVar25 < 500) AND (iVar25 >= 0)))))))
                                {
                                    l_U611 += 8;
                                    CLEAR_PRINTS();
                                    sub_12232();
                                    sub_15967();
                                    sub_8511( "GM3_HHIT", ref l_U532, 7, 1 );
                                    l_U555 = 1;
                                    l_U560 = l_U617 + 3000;
                                }
                            }
                        }
                        else if (l_U617 > l_U560)
                        {
                            l_U555 = 0;
                        }
                        if (IS_VEH_DRIVEABLE( l_U517 ))
                        {
                            if (HAS_CAR_BEEN_RESPRAYED( l_U517 ))
                            {
                                l_U611 += 12;
                            }
                        }
                        if (IS_WANTED_LEVEL_GREATER( sub_5447(), 0 ))
                        {
                            l_U611 += 13;
                        }
                        if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT l_U563))
                        {
                            if ((l_U607) AND ((NOT (CHECK_STUCK_TIMER( l_U517, 0, 0 ))) AND ((NOT l_U565) AND ((NOT l_U596) AND (sub_13689())))))
                            {
                                CLEAR_PRINTS();
                                sub_12232();
                                sub_15967();
                                sub_8511( "GM3_HHIT", ref l_U532, 7, 1 );
                                l_U571 = l_U617 + 7000;
                                l_U563 = 1;
                                l_U607 = 0;
                            }
                        }
                        else if ((CHECK_STUCK_TIMER( l_U517, 0, 1 )) AND (l_U617 > l_U571))
                        {
                            l_U611 += 12;
                            l_U563 = 0;
                        }
                        if ((NOT l_U553) AND (NOT l_U552))
                        {
                            if ((NOT (l_U573 >= 4)) AND ((NOT l_U565) AND ((NOT l_U596) AND ((sub_13689()) AND (fVar13 > 26.00000000)))))
                            {
                                CLEAR_PRINTS();
                                sub_12232();
                                sub_15967();
                                sub_8511( "GM3_FAST", ref l_U532, 7, 1 );
                                l_U552 = 1;
                                l_U558 = l_U617 + 5000;
                            }
                        }
                        else if ((l_U552) AND (l_U617 > l_U558))
                        {
                            if (fVar13 < 22.00000000)
                            {
                                l_U552 = 0;
                            }
                        }
                        if ((NOT l_U552) AND (NOT l_U553))
                        {
                            if ((NOT (l_U573 >= 4)) AND ((NOT l_U565) AND ((NOT l_U596) AND ((sub_13689()) AND (fVar13 > 30.00000000)))))
                            {
                                l_U611 += 5;
                                CLEAR_PRINTS();
                                sub_12232();
                                sub_15967();
                                sub_8511( "GM3_TFAST", ref l_U532, 7, 1 );
                                l_U558 = l_U617 + 3000;
                                l_U553 = 1;
                            }
                        }
                        else if ((l_U553) AND (l_U617 > l_U558))
                        {
                            if (fVar13 < 28.00000000)
                            {
                                l_U552 = 0;
                            }
                        }
                        if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT l_U554))
                        {
                            if ((NOT (l_U573 >= 4)) AND ((NOT (IS_CAR_IN_WATER( l_U517 ))) AND ((NOT (CHECK_STUCK_TIMER( l_U517, 0, 1 ))) AND ((NOT l_U565) AND ((sub_13689()) AND ((NOT l_U555) AND ((iVar12 >= 1) AND (iVar12 <= 20))))))))
                            {
                                l_U611 += 4;
                                CLEAR_PRINTS();
                                sub_12232();
                                sub_15967();
                                sub_8511( "GM3_LHIT", ref l_U532, 7, 1 );
                                l_U559 = l_U617 + 3000;
                                l_U554 = 1;
                            }
                            l_U587 = iVar11;
                        }
                        else if (l_U617 > l_U559)
                        {
                            l_U554 = 0;
                        }
                        if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT l_U555))
                        {
                            if ((NOT (l_U573 >= 4)) AND ((NOT (IS_CAR_IN_WATER( l_U517 ))) AND ((NOT (CHECK_STUCK_TIMER( l_U517, 0, 1 ))) AND ((NOT l_U565) AND ((sub_13689()) AND (iVar12 >= 21))))))
                            {
                                l_U611 += 8;
                                CLEAR_PRINTS();
                                sub_12232();
                                sub_15967();
                                sub_8511( "GM3_HHIT", ref l_U532, 7, 1 );
                                l_U555 = 1;
                                l_U560 = l_U617 + 3000;
                            }
                            l_U587 = iVar11;
                        }
                        else if (l_U617 > l_U560)
                        {
                            l_U555 = 0;
                        }
                        if (sub_13689())
                        {
                            if (IS_CHAR_SHOOTING( sub_3732() ))
                            {
                                l_U564 = 1;
                            }
                        }
                    }
                    if ((((NOT (IS_CAR_DEAD( l_U517 ))) AND (NOT (IS_CHAR_INJURED( l_U514 )))) AND (l_U564)) || (l_U611 >= 12))
                    {
                        if (NOT (sub_3366( l_U532 )))
                        {
                            l_U502 = 1;
                            if (sub_3366( l_U526 ))
                            {
                                sub_3550( ref l_U526, 0 );
                            }
                            if (NOT l_U596)
                            {
                                REMOVE_BLIP( l_U631 );
                                CHANGE_BLIP_DISPLAY( l_U627, 2 );
                                SET_ROUTE( l_U627, 1 );
                                PRINT_NOW( "GOAL_03b", 7500, 3 );
                                WAIT( 100 );
                                l_U580 = 0;
                                l_U596 = 1;
                            }
                            l_U565 = 1;
                        }
                        if (NOT l_U603)
                        {
                            l_U603 = 0;
                        }
                    }
                    if (NOT sub_13689())
                    {
                        if ((NOT (sub_12266( l_U526 ))) AND (sub_3366( l_U526 )))
                        {
                            sub_12312( ref l_U526 );
                            l_U502 = 0;
                        }
                    }
                    if (l_U573 >= 4)
                    {
                        sub_15259();
                    }
                    if (sub_13689())
                    {
                        if (NOT l_U639)
                        {
                            if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (l_U502 == 0))
                            {
                                if (NOT (sub_3366( l_U532 )))
                                {
                                    if (sub_12266( l_U526 ))
                                    {
                                        uVar26 = sub_17512();
                                        if (NOT (COMPARE_STRING( uVar26, "NULL" )))
                                        {
                                            sub_17755( uVar26, ref l_U526, 7, 1 );
                                            l_U502 = 1;
                                        }
                                    }
                                    else
                                    {
                                        l_U502 = 1;
                                    }
                                }
                            }
                            if ((NOT l_U564) AND (l_U617 > l_U574))
                            {
                                if ((NOT l_U563) AND ((NOT (sub_3366( l_U526 ))) AND (NOT (sub_3366( l_U532 )))))
                                {
                                    l_U573++;
                                    if (NOT l_U604)
                                    {
                                        if (g_U64941)
                                        {
                                            g_U64941 = 0;
                                        }
                                        else
                                        {
                                            g_U64941 = 1;
                                        }
                                        l_U604 = 1;
                                    }
                                    if (g_U64941)
                                    {
                                        switch (l_U573)
                                        {
                                            case 1:
                                            sub_8511( "GM3_B1AV1", ref l_U526, 7, 1 );
                                            l_U574 = l_U617 + 46000;
                                            break;
                                            case 2:
                                            if (NOT l_U596)
                                            {
                                                REMOVE_BLIP( l_U631 );
                                                CHANGE_BLIP_DISPLAY( l_U627, 2 );
                                                SET_ROUTE( l_U627, 1 );
                                                l_U580 = 0;
                                                PRINT_NOW( "GOAL_03a", 7500, 3 );
                                                l_U574 = (l_U617 + 7500) + 500;
                                                l_U596 = 1;
                                            }
                                            break;
                                            case 3:
                                            sub_8511( "GM3_KNAP2a", ref l_U526, 7, 1 );
                                            l_U574 = l_U617 + 11000;
                                            break;
                                            case 4:
                                            sub_8511( "GM3_KNAP2b", ref l_U526, 7, 1 );
                                            l_U574 = l_U617 + 6000;
                                            break;
                                            case 5:
                                            l_U501 = 2;
                                            l_U575 = 0;
                                            l_U564 = 1;
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        switch (l_U573)
                                        {
                                            case 1:
                                            sub_8511( "GM2_B1AV2", ref l_U526, 7, 1 );
                                            l_U574 = l_U617 + 46000;
                                            break;
                                            case 2:
                                            if (NOT l_U596)
                                            {
                                                REMOVE_BLIP( l_U631 );
                                                CHANGE_BLIP_DISPLAY( l_U627, 2 );
                                                SET_ROUTE( l_U627, 1 );
                                                l_U580 = 0;
                                                PRINT_NOW( "GOAL_03a", 7500, 3 );
                                                l_U574 = (l_U617 + 7500) + 500;
                                                l_U596 = 1;
                                            }
                                            break;
                                            case 3:
                                            sub_8511( "GM3_KNAP1a", ref l_U526, 7, 1 );
                                            GET_GAME_TIMER( ref l_U617 );
                                            l_U574 = l_U617 + 10000;
                                            break;
                                            case 4:
                                            sub_8511( "GM3_KNAP1b", ref l_U526, 7, 1 );
                                            GET_GAME_TIMER( ref l_U617 );
                                            l_U574 = l_U617 + 8000;
                                            break;
                                            case 5:
                                            l_U501 = 2;
                                            l_U575 = 0;
                                            l_U564 = 1;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (l_U565)
                {
                    if (sub_13689())
                    {
                        GET_GAME_TIMER( ref l_U617 );
                        if ((l_U501 == 0) || (l_U617 > l_U575))
                        {
                            switch (l_U501)
                            {
                                case 0:
                                if (sub_3366( l_U526 ))
                                {
                                    sub_3550( ref l_U526, 0 );
                                }
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    l_U575 = l_U617 + 1000;
                                    l_U501 = 1;
                                }
                                break;
                                case 1:
                                l_U575 = l_U617 + 9000;
                                sub_8511( "GM3_STOP", ref l_U526, 7, 1 );
                                l_U501 = 2;
                                break;
                                case 2:
                                if ((IS_VEH_DRIVEABLE( l_U517 )) AND ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (NOT (IS_CHAR_INJURED( sub_3732() )))))
                                {
                                    if (IS_CHAR_SITTING_IN_CAR( sub_3732(), l_U517 ))
                                    {
                                        SWITCH_ROADS_BACK_TO_ORIGINAL( -1470.57100000, 240.45680000, 9.11208500, -1508.25800000, 326.11910000, 28.33706000 );
                                        GET_GAME_TIMER( ref l_U615 );
                                        GENERATE_RANDOM_INT_IN_RANGE( 10000, 15000, ref iVar27 );
                                        l_U613 = l_U615 + iVar27;
                                        OPEN_SEQUENCE_TASK( ref uVar28 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_phone_grabbed", "missgerry3", 4.00000000, -2, 128 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_upset_idle", "missgerry3", 4.00000000, -2, 144 );
                                        CLOSE_SEQUENCE_TASK( uVar28 );
                                        TASK_PERFORM_SEQUENCE( l_U514, uVar28 );
                                        CLEAR_SEQUENCE_TASK( uVar28 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( sub_3732(), "plyr_grab_phone", "missgerry3", 35.00000000, -2, 128 );
                                        l_U504._fU8 = 5;
                                        CREATE_OBJECT( 248532041, uVar15._fU0, uVar15._fU4, uVar15._fU8 + 30.00000000, ref l_U632, 1 );
                                        ATTACH_OBJECT_TO_PED( l_U632, l_U514, 1232, vVar18, vVar18, 0 );
                                        SET_OBJECT_VISIBLE( l_U632, 1 );
                                        CLEAR_PRINTS();
                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U618 );
                                        switch (l_U618)
                                        {
                                            case 0:
                                            sub_8511( "GM3_HELP", ref l_U526, 7, 1 );
                                            break;
                                            case 1:
                                            sub_8511( "GM3_THROW", ref l_U526, 7, 1 );
                                            break;
                                            default:
                                            sub_8511( "GM3_HELP", ref l_U526, 7, 1 );
                                            break;
                                        }
                                        l_U501 = 3;
                                    }
                                }
                                break;
                                case 3:
                                if ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))
                                {
                                    if (IS_CHAR_PLAYING_ANIM( sub_3732(), "missgerry3", "plyr_grab_phone" ))
                                    {
                                        GET_CHAR_ANIM_CURRENT_TIME( sub_3732(), "missgerry3", "plyr_grab_phone", ref fVar29 );
                                        if ((NOT l_U600) AND (fVar29 > 0.72600000))
                                        {
                                            DETACH_OBJECT( l_U632, 1 );
                                            ATTACH_OBJECT_TO_PED( l_U632, sub_3732(), 1232, vVar18, vVar18, 0 );
                                            l_U600 = 1;
                                        }
                                        if ((NOT l_U601) AND (fVar29 > 0.92100000))
                                        {
                                            DETACH_OBJECT( l_U632, 1 );
                                            SET_OBJECT_RECORDS_COLLISIONS( l_U632, 1 );
                                            l_U601 = 1;
                                        }
                                    }
                                }
                                if (NOT (IS_CHAR_INJURED( l_U514 )))
                                {
                                    if ((NOT (sub_3366( l_U526 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_phone_grabbed" ))))
                                    {
                                        l_U508 = 4;
                                        l_U504._fU8 = 9;
                                        l_U501 = 4;
                                    }
                                }
                                break;
                            }
                        }
                    }
                    else
                    {
                        sub_15259();
                    }
                }
                if (l_U596)
                {
                    if ((sub_13689()) AND ((NOT l_U579) AND ((NOT (IS_CHAR_INJURED( l_U514 ))) AND ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT (IS_CHAR_INJURED( sub_3732() )))))))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), -1045.00000000, 1209.90000000, 26.80000000, 6.00000000, 7.50000000, 4.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), -970.12700000, 1206.24200000, 25.40000000, 6, 7.50000000, 4.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), -1077.78400000, 1210.07300000, 23.69940000, 4.00000000, 4.00000000, 4.00000000, 0 ))))
                        {
                            CLEAR_PRINTS();
                            PRINT_NOW( "GOAL_03", 7500, 3 );
                            CLEAR_AREA( -1007.04900000, 1210.99000000, 23.63780000, 20.00000000, 1 );
                            REMOVE_BLIP( l_U627 );
                            ADD_BLIP_FOR_COORD( l_U620._fU0, l_U620._fU4, l_U620._fU8, ref l_U627 );
                            SET_ROUTE( l_U627, 1 );
                            l_U579 = 1;
                            l_U508 = 4;
                        }
                        LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), -1077.78400000, 1210.07300000, 26.19940000, 2.50000000, 2.50000000, 2.50000000, 1 );
                    }
                }
                if (NOT l_U596)
                {
                    if ((IS_VEH_DRIVEABLE( l_U517 )) AND ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (NOT (IS_CHAR_INJURED( sub_3732() )))))
                    {
                        if (LOCATE_CAR_3D( l_U517, vVar2.x, vVar2.y, vVar2.z, 40.00000000, 40.00000000, 40.00000000, 0 ))
                        {
                            l_U573 = 1;
                            if (sub_3366( l_U526 ))
                            {
                                sub_3550( ref l_U526, 0 );
                            }
                            else
                            {
                                l_U502 = 1;
                            }
                            l_U574 = l_U617;
                        }
                    }
                }
                sub_12978();
                sub_11768();
                if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_3732(), l_U517 )))
                    {
                        if (NOT l_U606)
                        {
                            if ((NOT (sub_3366( l_U532 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                            {
                                CLEAR_PRINTS();
                                PRINT_NOW( "GOAL_02", 7500, 3 );
                                l_U606 = 1;
                            }
                        }
                    }
                }
                if (l_U501 != 0)
                {
                    sub_20499();
                }
                if ((NOT l_U568) AND ((NOT l_U596) AND ((sub_13689()) AND (l_U573 == 1))))
                {
                    sub_20678();
                }
                break;
                case 4:
                sub_12978();
                sub_11768();
                if (l_U504._fU8 != 9)
                {
                    if (IS_VEH_DRIVEABLE( l_U517 ))
                    {
                        GET_CAR_SPEED( l_U517, ref l_U619 );
                        GET_GAME_TIMER( ref l_U615 );
                        if (l_U619 < 8.00000000)
                        {
                            fVar31 = l_U504._fU4 * 2.00000000;
                            if (fVar31 < -1.00000000)
                            {
                                fVar31 = -1.00000000;
                            }
                            if (fVar31 > 1.00000000)
                            {
                                fVar31 = 1.00000000;
                            }
                            SET_VEHICLE_STEER_BIAS( l_U517, 0.00000000 );
                        }
                    }
                    switch (l_U504._fU8)
                    {
                        case 2:
                        if (l_U615 > l_U504._fU0)
                        {
                            switch (l_U504._fU12)
                            {
                                case 0:
                                l_U504._fU4 = 0.50000000;
                                l_U504._fU0 = l_U615 + 3000;
                                SET_VEHICLE_STEER_BIAS( l_U517, l_U504._fU4 );
                                l_U504._fU12 = 1;
                                break;
                                case 1:
                                l_U504._fU4 = -0.50000000;
                                l_U504._fU0 = l_U615 + 1000;
                                SET_VEHICLE_STEER_BIAS( l_U517, l_U504._fU4 );
                                l_U504._fU12 = 2;
                                break;
                                case 2:
                                l_U504._fU4 = 0.25000000;
                                l_U504._fU0 = l_U615 + 1500;
                                SET_VEHICLE_STEER_BIAS( l_U517, l_U504._fU4 );
                                l_U504._fU12 = 3;
                                break;
                                case 3:
                                l_U504._fU4 = -0.70000000;
                                l_U504._fU0 = l_U615 + 1000;
                                SET_VEHICLE_STEER_BIAS( l_U517, l_U504._fU4 );
                                l_U504._fU12 = 4;
                                break;
                                case 4:
                                l_U504._fU4 = -0.30000000;
                                SET_VEHICLE_STEER_BIAS( l_U517, l_U504._fU4 );
                                l_U504._fU12 = 7;
                                break;
                                case 7:
                                if (NOT (IS_CHAR_INJURED( l_U514 )))
                                {
                                    if ((NOT (sub_3366( l_U538 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_slap_player" ))))
                                    {
                                        SET_VEHICLE_STEER_BIAS( l_U517, 0.00000000 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( l_U514, "girl_upset_idle", "missgerry3", 35.00000000, -2, 144 );
                                        l_U504._fU8 = 9;
                                    }
                                }
                                break;
                            }
                        }
                        break;
                        case 0:
                        if (NOT (IS_CHAR_INJURED( l_U514 )))
                        {
                            if ((NOT (sub_3366( l_U538 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_wheel_grab_l" ))))
                            {
                                SET_VEHICLE_STEER_BIAS( l_U517, 0.00000000 );
                                l_U504._fU8 = 9;
                            }
                        }
                        break;
                        case 1:
                        if (NOT (IS_CHAR_INJURED( l_U514 )))
                        {
                            if ((NOT (sub_3366( l_U538 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_wheel_grab_r" ))))
                            {
                                SET_VEHICLE_STEER_BIAS( l_U517, 0.00000000 );
                                l_U504._fU8 = 9;
                            }
                        }
                        break;
                        case 4:
                        if (NOT (IS_CHAR_INJURED( l_U514 )))
                        {
                            if ((NOT (sub_3366( l_U538 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_scream" ))))
                            {
                                SET_VEHICLE_STEER_BIAS( l_U517, 0.00000000 );
                                l_U504._fU8 = 9;
                            }
                        }
                        break;
                        case 3:
                        if (NOT (IS_CHAR_INJURED( l_U514 )))
                        {
                            if ((NOT (sub_3366( l_U538 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_try_escape" ))))
                            {
                                SET_VEHICLE_STEER_BIAS( l_U517, 0.00000000 );
                                l_U504._fU8 = 9;
                            }
                        }
                        break;
                        case 6:
                        if (NOT (IS_CHAR_INJURED( l_U514 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U514, 29, ref iVar32 );
                            if (iVar32 == 1)
                            {
                                GET_SEQUENCE_PROGRESS( l_U514, ref uVar33 );
                                switch (uVar33)
                                {
                                    case 1:
                                    if (NOT l_U581)
                                    {
                                        if (NOT (IS_CAR_DEAD( l_U517 )))
                                        {
                                            LOCK_CAR_DOORS( l_U517, 1 );
                                        }
                                        TASK_PLAY_ANIM_WITH_FLAGS( sub_3732(), "plyr_ko_girl", "missgerry3", 4.00000000, -2, 128 );
                                        l_U581 = 1;
                                    }
                                    break;
                                    case 2:
                                    if (NOT l_U570)
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U514 )))
                                        {
                                            if (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_KO" ))
                                            {
                                                GET_CHAR_ANIM_CURRENT_TIME( l_U514, "missgerry3", "girl_KO", ref fVar34 );
                                                if (fVar34 >= 1.39600000)
                                                {
                                                    sub_11716( ref l_U538 );
                                                    l_U570 = 1;
                                                }
                                            }
                                        }
                                    }
                                    if (NOT l_U568)
                                    {
                                        l_U568 = 1;
                                        REMOVE_CHAR_FROM_GROUP( l_U514 );
                                        sub_8511( "GM3_KNOK2", ref l_U538, 7, 1 );
                                        if (NOT (IS_CHAR_INJURED( l_U514 )))
                                        {
                                            SET_CHAR_NEVER_TARGETTED( l_U514, 1 );
                                        }
                                        GET_GAME_TIMER( ref l_U557 );
                                        GENERATE_RANDOM_INT_IN_RANGE( 5000, 10000, ref uVar35 );
                                        l_U557 += 10000;
                                        l_U504._fU8 = 9;
                                    }
                                    break;
                                }
                            }
                        }
                        break;
                        case 7:
                        if (NOT (IS_CHAR_INJURED( l_U514 )))
                        {
                            if (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_threaten_gun" )))
                            {
                                if (NOT (sub_3366( l_U538 )))
                                {
                                    SET_VEHICLE_STEER_BIAS( l_U517, 0.00000000 );
                                    l_U504._fU8 = 9;
                                }
                                if (NOT l_U609)
                                {
                                    if ((HAS_CHAR_GOT_WEAPON( sub_3732(), l_U649 )) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))
                                    {
                                        SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_3732(), 0 );
                                        SET_CURRENT_CHAR_WEAPON( sub_3732(), l_U649, 0 );
                                        TASK_SWAP_WEAPON( sub_3732(), 0 );
                                        l_U609 = 1;
                                    }
                                }
                            }
                        }
                        break;
                        case 8:
                        if (NOT (IS_CHAR_INJURED( l_U514 )))
                        {
                            if (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_try2escape" )))
                            {
                                if (NOT (sub_3366( l_U538 )))
                                {
                                    SET_VEHICLE_STEER_BIAS( l_U517, 0.00000000 );
                                    l_U504._fU8 = 9;
                                }
                            }
                            else
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U514, "missgerry3", "girl_try2escape", ref fVar36 );
                                if ((fVar36 > 0.18800000) AND (NOT l_U583))
                                {
                                    if (l_U585 > 0.50000000)
                                    {
                                        l_U583 = 1;
                                    }
                                    else if (NOT (IS_CAR_DEAD( l_U517 )))
                                    {
                                        l_U585 += 0.20000000;
                                        CONTROL_CAR_DOOR( l_U517, 1, 0, l_U585 );
                                    }
                                }
                                if ((fVar36 > 0.51000000) AND (NOT l_U584))
                                {
                                    if (l_U586 <= 0.10000000)
                                    {
                                        CONTROL_CAR_DOOR( l_U517, 1, 0, 0.00000000 );
                                        l_U584 = 1;
                                    }
                                    else if (NOT (IS_CAR_DEAD( l_U517 )))
                                    {
                                        l_U586 -= 0.30000000;
                                        if (l_U586 >= 0.00000000)
                                        {
                                            CONTROL_CAR_DOOR( l_U517, 1, 0, l_U586 );
                                        }
                                        else
                                        {
                                            CONTROL_CAR_DOOR( l_U517, 1, 0, 0.00000000 );
                                        }
                                    }
                                }
                            }
                        }
                        break;
                    }
                }
                if (l_U550)
                {
                    if (l_U579)
                    {
                        if (NOT (IS_CHAR_INJURED( sub_3732() )))
                        {
                            if (NOT l_U562)
                            {
                                if ((sub_14582( 1, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), l_U620._fU0, l_U620._fU4, l_U620._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
                                {
                                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_5447(), 0 )))
                                    {
                                        REMOVE_BLIP( l_U627 );
                                        l_U508 = 6;
                                    }
                                }
                                LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), l_U620._fU0, l_U620._fU4, l_U620._fU8, 2.50000000, 2.50000000, 2.50000000, 1 );
                            }
                        }
                    }
                }
                else
                {
                    l_U508 = 3;
                }
                if (l_U568)
                {
                    if (NOT (IS_CHAR_INJURED( l_U514 )))
                    {
                        if ((NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_brake" ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_r" ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_l" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_loop" ))))))
                        {
                            TASK_PLAY_ANIM_WITH_FLAGS( l_U514, "girl_ko_loop", "missgerry3", 35.00000000, -2, 144 );
                        }
                    }
                }
                if ((NOT l_U582) AND ((IS_VEH_DRIVEABLE( l_U517 )) AND ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))))
                {
                    if ((IS_CHAR_SITTING_IN_CAR( l_U514, l_U517 )) AND (IS_CHAR_SITTING_IN_CAR( sub_3732(), l_U517 )))
                    {
                        GET_GAME_TIMER( ref l_U615 );
                        GET_CAR_COORDINATES( l_U517, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                        fVar14 = VDIST( uVar15, l_U620 );
                        if (fVar14 < 160.00000000)
                        {
                            CLEAR_PRINTS();
                            if (sub_3366( l_U538 ))
                            {
                                sub_3550( ref l_U538, 0 );
                            }
                            sub_8511( "GM3_KNOK", ref l_U538, 7, 1 );
                            OPEN_SEQUENCE_TASK( ref uVar30 );
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "dont_u_dare_v2", "missgerry3", 4.00000000, -2, 128 );
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko", "missgerry3", 4.00000000, -2, 128 );
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_loop", "missgerry3", 4.00000000, -2, 144 );
                            CLOSE_SEQUENCE_TASK( uVar30 );
                            if (NOT (IS_CAR_DEAD( l_U517 )))
                            {
                                LOCK_CAR_DOORS( l_U517, 4 );
                            }
                            SET_CHAR_KEEP_TASK( l_U514, 1 );
                            TASK_PERFORM_SEQUENCE( l_U514, uVar30 );
                            CLEAR_SEQUENCE_TASK( uVar30 );
                            l_U504._fU8 = 6;
                            l_U582 = 1;
                        }
                        GET_CAR_COORDINATES( l_U517, ref uVar37._fU0, ref uVar37._fU4, ref uVar37._fU8 );
                        if (l_U504._fU8 == 9)
                        {
                            if (l_U615 > l_U613)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U614 );
                                bVar40 = false;
                                if ((l_U561 < 5) AND (NOT l_U588))
                                {
                                    if ((l_U589[5]) AND ((l_U589[4]) AND ((l_U589[3]) AND ((l_U589[2]) AND ((l_U589[1]) AND (l_U589[0]))))))
                                    {
                                        l_U588 = 1;
                                    }
                                    else if (l_U640)
                                    {
                                        if (l_U641)
                                        {
                                            l_U614 = 0;
                                            l_U641 = 0;
                                        }
                                        else
                                        {
                                            l_U614 = 5;
                                            l_U641 = 1;
                                        }
                                    }
                                    else if (NOT l_U589[l_U614])
                                    {
                                        l_U589[l_U614] = 1;
                                    }
                                    else
                                    {
                                        while (NOT bVar40)
                                        {
                                            l_U614++;
                                            if (l_U614 == 6)
                                            {
                                                l_U614 = 0;
                                            }
                                            if (NOT l_U589[l_U614])
                                            {
                                                l_U561++;
                                                l_U589[l_U614] = 1;
                                                bVar40 = true;
                                            }
                                        }
                                    };;;
                                    if (l_U588)
                                    {
                                        CLEAR_PRINTS();
                                        if (sub_3366( l_U538 ))
                                        {
                                            sub_3550( ref l_U538, 0 );
                                        }
                                        sub_8511( "GM3_KNOK", ref l_U538, 7, 1 );
                                        if (NOT (IS_CAR_DEAD( l_U517 )))
                                        {
                                            LOCK_CAR_DOORS( l_U517, 4 );
                                        }
                                        OPEN_SEQUENCE_TASK( ref uVar30 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "dont_u_dare_v2", "missgerry3", 4.00000000, -2, 128 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko", "missgerry3", 4.00000000, -2, 128 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_loop", "missgerry3", 4.00000000, -2, 144 );
                                        CLOSE_SEQUENCE_TASK( uVar30 );
                                        SET_CHAR_KEEP_TASK( l_U514, 1 );
                                        TASK_PERFORM_SEQUENCE( l_U514, uVar30 );
                                        CLEAR_SEQUENCE_TASK( uVar30 );
                                        l_U504._fU8 = 6;
                                        l_U582 = 1;
                                    }
                                    else
                                    {
                                        switch (l_U614)
                                        {
                                            case 0:
                                            l_U504._fU4 = 0.20000000;
                                            SET_VEHICLE_STEER_BIAS( l_U517, l_U504._fU4 );
                                            GENERATE_RANDOM_INT_IN_RANGE( 6000, 11000, ref iVar27 );
                                            OPEN_SEQUENCE_TASK( ref l_U610 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_try_escape", "missgerry3", 4.00000000, -2, 128 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_upset_idle", "missgerry3", 4.00000000, -2, 144 );
                                            CLOSE_SEQUENCE_TASK( l_U610 );
                                            TASK_PERFORM_SEQUENCE( l_U514, l_U610 );
                                            CLEAR_SEQUENCE_TASK( l_U610 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( sub_3732(), "plyr_grab_girl", "missgerry3", 4.00000000, -2, 128 );
                                            l_U504._fU0 = l_U615 + 5000;
                                            l_U613 = l_U615 + iVar27;
                                            l_U504._fU8 = 3;
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref l_U618 );
                                            CLEAR_PRINTS();
                                            switch (l_U618)
                                            {
                                                case 0:
                                                sub_8511( "GM3_OUT1", ref l_U538, 7, 1 );
                                                break;
                                                case 1:
                                                sub_8511( "GM3_OUT2", ref l_U538, 7, 1 );
                                                break;
                                                case 2:
                                                sub_8511( "GM3_TOP1", ref l_U538, 7, 1 );
                                                break;
                                                case 3:
                                                sub_8511( "GM3_TOP2", ref l_U538, 7, 1 );
                                                break;
                                                case 4:
                                                sub_8511( "GM3_TOP3", ref l_U538, 7, 1 );
                                                break;
                                                case 5:
                                                sub_8511( "GM3_TOP4", ref l_U538, 7, 1 );
                                                break;
                                                case 6:
                                                sub_8511( "GM3_TOP5", ref l_U538, 7, 1 );
                                                break;
                                            }
                                            break;
                                            case 1:
                                            l_U504._fU4 = 0.50000000;
                                            SET_VEHICLE_STEER_BIAS( l_U517, l_U504._fU4 );
                                            GENERATE_RANDOM_INT_IN_RANGE( 6000, 9000, ref iVar27 );
                                            OPEN_SEQUENCE_TASK( ref l_U610 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_wheel_grab_l", "missgerry3", 4.00000000, -2, 128 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_upset_idle", "missgerry3", 4.00000000, -2, 144 );
                                            CLOSE_SEQUENCE_TASK( l_U610 );
                                            TASK_PERFORM_SEQUENCE( l_U514, l_U610 );
                                            CLEAR_SEQUENCE_TASK( l_U610 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( sub_3732(), "plyr_wheel_grabbed_l", "missgerry3", 4.00000000, -2, 128 );
                                            l_U504._fU0 = l_U615 + 3000;
                                            l_U613 = l_U615 + iVar27;
                                            l_U504._fU8 = 0;
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U618 );
                                            CLEAR_PRINTS();
                                            switch (l_U618)
                                            {
                                                case 0:
                                                sub_8511( "GM3_LFT1", ref l_U538, 7, 1 );
                                                break;
                                                case 1:
                                                sub_8511( "GM3_LFT2", ref l_U538, 7, 1 );
                                                break;
                                                case 2:
                                                sub_8511( "GM3_LFT3", ref l_U538, 7, 1 );
                                                break;
                                                case 3:
                                                sub_8511( "GM3_LFT4", ref l_U538, 7, 1 );
                                                break;
                                                case 4:
                                                sub_8511( "GM3_LFT5", ref l_U538, 7, 1 );
                                                break;
                                            }
                                            break;
                                            case 2:
                                            l_U504._fU4 = -0.50000000;
                                            SET_VEHICLE_STEER_BIAS( l_U517, l_U504._fU4 );
                                            GENERATE_RANDOM_INT_IN_RANGE( 6000, 9000, ref iVar27 );
                                            OPEN_SEQUENCE_TASK( ref l_U610 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_wheel_grab_r", "missgerry3", 4.00000000, -2, 128 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_upset_idle", "missgerry3", 4.00000000, -2, 144 );
                                            CLOSE_SEQUENCE_TASK( l_U610 );
                                            TASK_PERFORM_SEQUENCE( l_U514, l_U610 );
                                            CLEAR_SEQUENCE_TASK( l_U610 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( sub_3732(), "plyr_wheel_grabbed_r", "missgerry3", 4.00000000, -2, 128 );
                                            l_U504._fU0 = l_U615 + 3000;
                                            l_U613 = l_U615 + iVar27;
                                            l_U504._fU8 = 1;
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U618 );
                                            CLEAR_PRINTS();
                                            switch (l_U618)
                                            {
                                                case 0:
                                                sub_8511( "GM3_RTE1", ref l_U538, 7, 1 );
                                                break;
                                                case 1:
                                                sub_8511( "GM3_RTE2", ref l_U538, 7, 1 );
                                                break;
                                                case 2:
                                                sub_8511( "GM3_RTE3", ref l_U538, 7, 1 );
                                                break;
                                                case 3:
                                                sub_8511( "GM3_RTE4", ref l_U538, 7, 1 );
                                                break;
                                                case 4:
                                                sub_8511( "GM3_RTE5", ref l_U538, 7, 1 );
                                                break;
                                            }
                                            break;
                                            case 3:
                                            l_U504._fU4 = -0.50000000;
                                            SET_VEHICLE_STEER_BIAS( l_U517, l_U504._fU4 );
                                            GENERATE_RANDOM_INT_IN_RANGE( 11000, 18000, ref iVar27 );
                                            OPEN_SEQUENCE_TASK( ref l_U610 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_slap_player", "missgerry3", 4.00000000, -2, 128 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_upset_idle", "missgerry3", 4.00000000, -2, 144 );
                                            CLOSE_SEQUENCE_TASK( l_U610 );
                                            TASK_PERFORM_SEQUENCE( l_U514, l_U610 );
                                            CLEAR_SEQUENCE_TASK( l_U610 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( sub_3732(), "player_slapped_girl", "missgerry3", 4.00000000, -2, 128 );
                                            l_U504._fU0 = l_U615;
                                            l_U613 = l_U615 + iVar27;
                                            l_U504._fU8 = 2;
                                            l_U504._fU12 = 0;
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U618 );
                                            CLEAR_PRINTS();
                                            switch (l_U618)
                                            {
                                                case 0:
                                                sub_8511( "GM3_ATK1", ref l_U538, 7, 1 );
                                                break;
                                                case 1:
                                                sub_8511( "GM3_ATK2", ref l_U538, 7, 1 );
                                                break;
                                                case 2:
                                                sub_8511( "GM3_ATK3", ref l_U538, 7, 1 );
                                                break;
                                            }
                                            break;
                                            case 4:
                                            if (NOT (IS_CHAR_INJURED( sub_3732() )))
                                            {
                                                if ((HAS_CHAR_GOT_WEAPON( sub_3732(), 9 )) || (HAS_CHAR_GOT_WEAPON( sub_3732(), 7 )))
                                                {
                                                    GET_CURRENT_CHAR_WEAPON( sub_3732(), ref l_U649 );
                                                    if ((HAS_CHAR_GOT_WEAPON( sub_3732(), 7 )) AND (l_U649 != 7))
                                                    {
                                                        SET_CURRENT_CHAR_WEAPON( sub_3732(), 7, 1 );
                                                    }
                                                    if ((HAS_CHAR_GOT_WEAPON( sub_3732(), 9 )) AND (l_U649 != 9))
                                                    {
                                                        SET_CURRENT_CHAR_WEAPON( sub_3732(), 9, 1 );
                                                    }
                                                    OPEN_SEQUENCE_TASK( ref l_U610 );
                                                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_threaten_gun", "missgerry3", 4.00000000, -2, 128 );
                                                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_upset_idle", "missgerry3", 4.00000000, -2, 144 );
                                                    CLOSE_SEQUENCE_TASK( l_U610 );
                                                    TASK_PERFORM_SEQUENCE( l_U514, l_U610 );
                                                    CLEAR_SEQUENCE_TASK( l_U610 );
                                                    TASK_PLAY_ANIM_WITH_FLAGS( sub_3732(), "plyr_threaten_gun", "missgerry3", 4.00000000, -2, 128 );
                                                    l_U504._fU4 = 0.50000000;
                                                    SET_VEHICLE_STEER_BIAS( l_U517, l_U504._fU4 );
                                                    GENERATE_RANDOM_INT_IN_RANGE( 6000, 9000, ref iVar27 );
                                                    l_U504._fU0 = l_U615 + 5000;
                                                    l_U613 = (l_U615 + iVar27) + 7000;
                                                    l_U504._fU8 = 7;
                                                    CLEAR_PRINTS();
                                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U618 );
                                                    switch (l_U618)
                                                    {
                                                        case 0:
                                                        sub_8511( "GM3_GUN", ref l_U538, 7, 1 );
                                                        break;
                                                        case 1:
                                                        sub_8511( "GM3_GUN2", ref l_U538, 7, 1 );
                                                        break;
                                                        default:
                                                        sub_8511( "GM3_GUN2", ref l_U538, 7, 1 );
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    l_U504._fU8 = 9;
                                                }
                                            }
                                            break;
                                            case 5:
                                            l_U504._fU4 = 0.20000000;
                                            SET_VEHICLE_STEER_BIAS( l_U517, l_U504._fU4 );
                                            GENERATE_RANDOM_INT_IN_RANGE( 6000, 11000, ref iVar27 );
                                            OPEN_SEQUENCE_TASK( ref l_U610 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_try2escape", "missgerry3", 4.00000000, -2, 128 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_upset_idle", "missgerry3", 4.00000000, -2, 144 );
                                            CLOSE_SEQUENCE_TASK( l_U610 );
                                            TASK_PERFORM_SEQUENCE( l_U514, l_U610 );
                                            CLEAR_SEQUENCE_TASK( l_U610 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( sub_3732(), "plyr_try2escape", "missgerry3", 4.00000000, -2, 128 );
                                            l_U504._fU0 = l_U615 + 5000;
                                            l_U613 = l_U615 + iVar27;
                                            l_U504._fU8 = 8;
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U618 );
                                            CLEAR_PRINTS();
                                            switch (l_U618)
                                            {
                                                case 0:
                                                sub_8511( "GM3_DOOR1", ref l_U538, 7, 1 );
                                                break;
                                                case 1:
                                                sub_8511( "GM3_DOOR2", ref l_U538, 7, 1 );
                                                break;
                                                case 2:
                                                sub_8511( "GM3_DOOR3", ref l_U538, 7, 1 );
                                                break;
                                                case 3:
                                                sub_8511( "GM3_DOOR4", ref l_U538, 7, 1 );
                                                break;
                                                case 4:
                                                sub_8511( "GM3_DOOR5", ref l_U538, 7, 1 );
                                                break;
                                            }
                                            break;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                STORE_WANTED_LEVEL( sub_5447(), ref iVar41 );
                                fVar42 = 5.00000000;
                                if (l_U640)
                                {
                                    fVar42 = 15.00000000;
                                }
                                if ((iVar41 < 3) AND (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar37._fU0 - fVar42, uVar37._fU4 - fVar42, uVar37._fU8 - 2.00000000, uVar37._fU0 + fVar42, uVar37._fU4 + fVar42, uVar37._fU8 + 2.00000000 )))
                                {
                                    l_U504._fU4 = -0.50000000;
                                    GENERATE_RANDOM_INT_IN_RANGE( 6000, 10000, ref iVar27 );
                                    ALTER_WANTED_LEVEL_NO_DROP( sub_5447(), iVar41 + 1 );
                                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_5447() );
                                    OPEN_SEQUENCE_TASK( ref l_U610 );
                                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_scream", "missgerry3", 4.00000000, -2, 128 );
                                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_upset_idle", "missgerry3", 4.00000000, -2, 144 );
                                    CLOSE_SEQUENCE_TASK( l_U610 );
                                    TASK_PERFORM_SEQUENCE( l_U514, l_U610 );
                                    CLEAR_SEQUENCE_TASK( l_U610 );
                                    GET_GAME_TIMER( ref l_U615 );
                                    l_U504._fU0 = l_U615 + 3000;
                                    l_U613 = l_U615 + iVar27;
                                    l_U504._fU8 = 4;
                                    CLEAR_PRINTS();
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar43 );
                                    if (iVar43 == 0)
                                    {
                                        sub_8511( "GM3_COP1", ref l_U538, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_8511( "GM3_COP2", ref l_U538, 7, 1 );
                                    }
                                }
                            }
                        }
                    }
                }
                if ((NOT l_U562) AND ((l_U550) AND ((NOT l_U579) AND ((NOT (IS_CHAR_INJURED( l_U514 ))) AND ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))))))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), -1045.00000000, 1209.90000000, 26.80000000, 6.00000000, 7.50000000, 4.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), -970.12700000, 1206.24200000, 25.40000000, 6, 7.50000000, 4.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), -1077.78400000, 1210.07300000, 23.69940000, 4.00000000, 4.00000000, 4.00000000, 0 ))))
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "GOAL_03", 7500, 3 );
                        CLEAR_AREA( -1007.04900000, 1210.99000000, 23.63780000, 20.00000000, 1 );
                        REMOVE_BLIP( l_U627 );
                        ADD_BLIP_FOR_COORD( l_U620._fU0, l_U620._fU4, l_U620._fU8, ref l_U627 );
                        SET_ROUTE( l_U627, 1 );
                        l_U579 = 1;
                    }
                    LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), -1077.78400000, 1210.07300000, 26.19940000, 2.50000000, 2.50000000, 2.50000000, 1 );
                }
                if (NOT (IS_CHAR_INJURED( sub_3732() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), -1004.32800000, 1210.45000000, 23.62640000, 100.00000000, 100.00000000, 50.00000000, 0 ))
                    {
                        if (NOT l_U551)
                        {
                            CLEAR_AREA( -1007.04900000, 1210.99000000, 23.63780000, 20.00000000, 1 );
                            l_U551 = 1;
                        }
                    }
                    else
                    {
                        l_U551 = 0;
                    }
                }
                if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (IS_VEH_DRIVEABLE( l_U517 ))))
                {
                    GET_CAR_SPEED( l_U517, ref fVar44 );
                    if ((sub_14582( 1, 1 )) AND ((NOT l_U568) AND ((fVar44 < 1.00000000) AND (IS_CAR_IN_AREA_3D( l_U517, -1499.77600000, 260.26910000, 11.01200000, -1514.07700000, 265.08110000, 15.09332000, 0 )))))
                    {
                        l_U508 = 12;
                    }
                }
                sub_15259();
                sub_20678();
                if ((NOT (sub_3366( l_U538 ))) AND ((l_U550) AND ((l_U568) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_5447(), 0 ))
                    {
                        if (NOT l_U562)
                        {
                            if ((IS_THIS_PRINT_BEING_DISPLAYED( "GOAL_03", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )) || (NOT IS_MESSAGE_BEING_DISPLAYED()))
                            {
                                CLEAR_PRINTS();
                                PRINT_NOW( "GM3WANTED", 7500, 3 );
                                REMOVE_BLIP( l_U627 );
                                l_U562 = 1;
                            }
                        }
                    }
                    else if (l_U562)
                    {
                        if (IS_THIS_PRINT_BEING_DISPLAYED( "TASK2", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                        {
                            CLEAR_PRINTS();
                        }
                        if (l_U579)
                        {
                            ADD_BLIP_FOR_COORD( l_U620._fU0, l_U620._fU4, l_U620._fU8, ref l_U627 );
                            SET_ROUTE( l_U627, 1 );
                        }
                        else
                        {
                            ADD_BLIP_FOR_COORD( -1077.78400000, 1210.07300000, 23.69940000, ref l_U627 );
                            SET_ROUTE( l_U627, 1 );
                        }
                        CLEAR_PRINTS();
                        PRINT_NOW( "GOAL_03", 7500, 3 );
                        l_U562 = 0;
                    }
                }
                if ((l_U568) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))
                {
                    if (NOT l_U556)
                    {
                        GET_GAME_TIMER( ref iVar45 );
                        if (iVar45 > l_U557)
                        {
                            if (sub_29921( 3, "GM3_CALLJ", "GM3CAUD", 7000, 0 ))
                            {
                                l_U556 = 1;
                            }
                        }
                    }
                }
                if (l_U568)
                {
                    if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND (NOT (IS_CHAR_INJURED( l_U514 ))))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U514, sub_3732(), 0 ))
                        {
                            SET_CHAR_HEALTH( l_U514, 0 );
                        }
                    }
                }
                sub_33856();
                break;
                case 13:
                sub_12978();
                GET_GAME_TIMER( ref l_U615 );
                if (l_U615 > l_U572)
                {
                    sub_11166( 500 );
                    if (DOES_CHAR_EXIST( l_U514 ))
                    {
                        DELETE_CHAR( ref l_U514 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U517 ))
                    {
                        DELETE_CAR( ref l_U517 );
                    }
                    WAIT( 1000 );
                    l_U598 = 1;
                    l_U503 = 2;
                    sub_6840( 500 );
                }
                break;
                case 12:
                GET_GAME_TIMER( ref iVar46 );
                switch (l_U509)
                {
                    case 0:
                    sub_11716( ref l_U532 );
                    sub_11716( ref l_U526 );
                    sub_11716( ref l_U538 );
                    GET_GAME_TIMER( ref l_U617 );
                    l_U578 = l_U617 + 3000;
                    l_U633 = l_U617 + 7500;
                    SET_PLAYER_CONTROL( sub_5447(), 0 );
                    sub_11166( 1000 );
                    CLEAR_AREA( l_U623._fU0, l_U623._fU4, l_U623._fU8, 20.00000000, 1 );
                    if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND (NOT (IS_CAR_DEAD( l_U517 ))))
                    {
                        if (NOT (IS_CHAR_IN_AREA_3D( sub_3732(), -1514.73700000, 260.28980000, 11.31993000, -1509.03900000, 264.91890000, 15.79769000, 0 )))
                        {
                            CREATE_CAM( 14, ref l_U518 );
                            SET_CAM_POS( l_U518, -1506.48700000, 261.08050000, 14.11702000 );
                            SET_CAM_ROT( l_U518, -37.36772000, -0.00000100, 65.01448000 );
                            SET_CAR_COORDINATES( l_U517, -1510.07300000, 262.72440000, 11.47740000 );
                            SET_CAR_HEADING( l_U517, 90.00000000 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U517 );
                        }
                        else
                        {
                            GET_CAR_HEADING( l_U517, ref fVar47 );
                            if ((fVar47 < 315.00000000) AND (fVar47 > 225.00000000))
                            {
                                CREATE_CAM( 14, ref l_U518 );
                                SET_CAM_POS( l_U518, -1499.69300000, 259.93210000, 20.37910000 );
                                SET_CAM_ROT( l_U518, -31.16256000, -12.07609000, 82.71002000 );
                                SET_CAM_FOV( l_U518, 23.70005000 );
                                SET_CAR_COORDINATES( l_U517, -1512.77300000, 263.40040000, 11.63070000 );
                                SET_CAR_HEADING( l_U517, 270.00000000 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U517 );
                            }
                            else
                            {
                                CREATE_CAM( 14, ref l_U518 );
                                SET_CAM_POS( l_U518, -1506.48700000, 261.08050000, 14.11702000 );
                                SET_CAM_ROT( l_U518, -37.36772000, -0.00000100, 65.01448000 );
                                SET_CAR_COORDINATES( l_U517, -1510.07300000, 262.72440000, 11.47740000 );
                                SET_CAR_HEADING( l_U517, 90.00000000 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U517 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( sub_3732() )))
                        {
                            CLEAR_CHAR_TASKS( sub_3732() );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U514 )))
                        {
                            CLEAR_CHAR_TASKS( l_U514 );
                        }
                        sub_7617( ref l_U512, 0 );
                        SET_CAM_ACTIVE( l_U518, 1 );
                        SET_CAM_PROPAGATE( l_U518, 1 );
                        sub_6840( 1000 );
                        if ((NOT (IS_CAR_DEAD( l_U517 ))) AND (NOT (IS_CHAR_INJURED( l_U514 ))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar48 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1509.39700000, 261.88600000, 11.36740000, 3, -2, 0.20000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1509.73800000, 266.89430000, 12.70360000, 3, -2, 0.20000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1512.18700000, 267.26330000, 14.31420000, 3, -2, 0.20000000 );
                            CLOSE_SEQUENCE_TASK( uVar48 );
                            TASK_PERFORM_SEQUENCE( l_U514, uVar48 );
                            CLEAR_SEQUENCE_TASK( uVar48 );
                        }
                        if (NOT (IS_CHAR_INJURED( sub_3732() )))
                        {
                            TASK_LOOK_AT_CHAR( sub_3732(), l_U514, 7000, 0 );
                        }
                        sub_8511( "GM3_GETOUT", ref l_U532, 8, 1 );
                        l_U509 = 1;
                    }
                    else
                    {
                        SET_PLAYER_CONTROL( sub_5447(), 1 );
                        if (DOES_CHAR_EXIST( l_U514 ))
                        {
                            DELETE_CHAR( ref l_U514 );
                        }
                        sub_6840( 1000 );
                        SET_PLAYER_CONTROL( sub_5447(), 1 );
                        l_U598 = 1;
                        l_U503 = 5;
                    }
                    break;
                    case 1:
                    if (iVar46 > l_U633)
                    {
                        l_U509 = 2;
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    }
                    break;
                    case 2:
                    sub_11166( 1000 );
                    sub_9531( ref l_U518, ref l_U519, ref l_U520 );
                    sub_10750( ref l_U512, 0, 0, 1 );
                    if (DOES_CHAR_EXIST( l_U514 ))
                    {
                        DELETE_CHAR( ref l_U514 );
                    }
                    sub_6840( 1000 );
                    SET_PLAYER_CONTROL( sub_5447(), 1 );
                    l_U598 = 1;
                    l_U503 = 5;
                    break;
                }
                break;
                case 6:
                if (NOT (IS_CHAR_DEAD( sub_3732() )))
                {
                    SET_PLAYER_CONTROL( sub_5447(), 0 );
                }
                sub_11166( 1000 );
                sub_4181( "GM3CAUD", 6 );
                if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND (NOT (IS_CAR_DEAD( l_U517 ))))
                {
                    if (IS_CHAR_IN_CAR( sub_3732(), l_U517 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_3732(), -1003.45600000, 1216.24500000, 23.10740000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_3732(), -1003.45600000, 1216.24500000, 23.10740000 );
                    }
                }
                CLEAR_AREA( -994.19990000, 1212.96400000, 22.89820000, 20.00000000, 1 );
                START_CUTSCENE_NOW( "imger3" );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( "imger3" );
                REQUEST_MODEL( 897868981 );
                while (NOT (HAS_MODEL_LOADED( 897868981 )))
                {
                    WAIT( 0 );
                }
                CREATE_CHAR( 9, 897868981, -1018.89000000, 1207.36700000, 23.99000000, ref uVar49, 1 );
                SET_CHAR_DECISION_MAKER( uVar49, l_U524 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar49, 1 );
                SET_CHAR_KEEP_TASK( uVar49, 1 );
                if ((NOT (IS_CHAR_INJURED( uVar49 ))) AND (NOT (IS_CAR_DEAD( l_U517 ))))
                {
                    WARP_CHAR_INTO_CAR( uVar49, l_U517 );
                    SET_CAR_COORDINATES( l_U517, -997.59900000, 1212.57900000, 22.91770000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U517 );
                    SET_CAR_HEADING( l_U517, 90.00000000 );
                    TASK_CAR_DRIVE_WANDER( uVar49, l_U517, 10.00000000, 2 );
                }
                if (NOT (IS_CHAR_INJURED( l_U514 )))
                {
                    DELETE_CHAR( ref l_U514 );
                }
                if (NOT (IS_CHAR_DEAD( sub_3732() )))
                {
                    SET_CHAR_HEADING( sub_3732(), 212.00000000 );
                    SET_CAM_BEHIND_PED( sub_3732() );
                    SET_PLAYER_CONTROL( sub_5447(), 1 );
                }
                sub_5294();
                sub_6840( 1000 );
                CLEAR_PRINTS();
                l_U508 = 9;
                l_U597 = 1;
                break;
            }
            if ((NOT l_U569) AND (l_U601))
            {
                if (DOES_OBJECT_EXIST( l_U632 ))
                {
                    if (HAS_OBJECT_COLLIDED_WITH_ANYTHING( l_U632 ))
                    {
                        SET_OBJECT_RECORDS_COLLISIONS( l_U632, 0 );
                        PLAY_AUDIO_EVENT_FROM_OBJECT( "GM3_KIDNAP_MOBSTERS_DAUGHTER_PHONE_BOUNCE", l_U632 );
                        l_U569 = 1;
                    }
                }
            }
        }
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            l_U597 = 1;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 36 ))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_INJURED( sub_3732() )))
            {
                switch (l_U508)
                {
                    case 0:
                    case 1:
                    if (NOT (IS_CHAR_INJURED( sub_3732() )))
                    {
                        SET_CHAR_COORDINATES( sub_3732(), -1507.31300000, 258.69350000, 11.06240000 );
                        SET_CHAR_HEADING( sub_3732(), 0 );
                    }
                    break;
                    case 3:
                    if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (IS_VEH_DRIVEABLE( l_U517 ))))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U514 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U514, l_U517, 0 );
                        }
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3732() )))
                        {
                            WARP_CHAR_INTO_CAR( sub_3732(), l_U517 );
                        }
                    }
                    break;
                    case 5:
                    l_U565 = 1;
                    l_U508 = 4;
                    break;
                    case 4:
                    if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (IS_VEH_DRIVEABLE( l_U517 ))))
                    {
                        if (DOES_BLIP_EXIST( l_U627 ))
                        {
                            REMOVE_BLIP( l_U627 );
                        }
                        ADD_BLIP_FOR_COORD( l_U620._fU0, l_U620._fU4, l_U620._fU8, ref l_U627 );
                        SET_ROUTE( l_U627, 1 );
                        l_U579 = 1;
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U514 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U514, l_U517, 0 );
                        }
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3732() )))
                        {
                            WARP_CHAR_INTO_CAR( sub_3732(), l_U517 );
                        }
                        if (l_U579)
                        {
                            SET_CAR_COORDINATES( l_U517, l_U620._fU0 - 2.00000000, l_U620._fU4 - 5.00000000, l_U620._fU8 );
                        }
                        else
                        {
                            SET_CAR_COORDINATES( l_U517, -1043.80800000, 1234.52200000, 24.15540000 );
                            SET_CAR_HEADING( l_U517, 180.00000000 );
                        }
                    }
                    break;
                }
            }
        }
        if (l_U598)
        {
            sub_39378();
        }
        if ((NOT l_U598) AND (l_U597))
        {
            sub_41782();
        }
        WAIT( 0 );
    }
    return;
}

int sub_122(unknown uParam0)
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
    sub_785( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_785(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_951()
{
    sub_960();
    return;
}

void sub_960()
{
    int iVar2;

    iVar2 = 15;
    sub_974( iVar2 );
    sub_2129( iVar2 );
    return;
}

void sub_974(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1018();
        sub_1179();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1287();
            sub_1326();
        }
    }
    sub_1402();
    sub_1503();
    uVar5 = sub_1616( uParam0 );
    sub_2036( uVar5, 0 );
    return;
}

void sub_1018()
{
    sub_1032( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1132();
    }
    return;
}

void sub_1032(int iParam0)
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

void sub_1132()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1179()
{
    sub_1188();
    return;
}

void sub_1188()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1287()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1326()
{
    sub_1335();
    return;
}

void sub_1335()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1402()
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

void sub_1503()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1525();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1525()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1616(unknown uParam0)
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
    sub_785( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2036(int iParam0, boolean bParam1)
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

void sub_2129(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2138();
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
        sub_2913();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2138()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2176( 5, g_U569[I] )) == 1))
        {
            if ((sub_2176( 1, g_U569[I] )) != 0)
            {
                sub_2462( I );
            }
        }
    }
    if (NOT sub_2628())
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

int sub_2176(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2462(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2547( g_U569 - 1 );
    return;
}

void sub_2547(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2628()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2176( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2913()
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

void sub_3040()
{
    REMOVE_ANIMS( "missgerry3" );
    sub_3070( 27 );
    if (IS_VEH_DRIVEABLE( l_U517 ))
    {
        if (DOES_CAR_HAVE_STUCK_CAR_CHECK( l_U517 ))
        {
            REMOVE_STUCK_CAR_CHECK( l_U517 );
        }
        SET_VEHICLE_STEER_BIAS( l_U517, 0.00000000 );
        REMOVE_UPSIDEDOWN_CAR_CHECK( l_U517 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U517 );
    }
    if (HAS_MODEL_LOADED( -1097828879 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1097828879 );
    }
    if (HAS_MODEL_LOADED( l_U516 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U516 );
    }
    if (IS_VEH_DRIVEABLE( l_U517 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U517 );
    }
    if (NOT (IS_CHAR_INJURED( l_U514 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U514 );
    }
    if (NOT (IS_CHAR_INJURED( l_U515 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U515 );
    }
    if (HAS_MODEL_LOADED( 248532041 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 248532041 );
    }
    if (sub_3366( l_U526 ))
    {
        sub_3550( ref l_U526, 0 );
    }
    if (sub_3366( l_U532 ))
    {
        sub_3550( ref l_U532, 0 );
    }
    if (sub_3366( l_U538 ))
    {
        sub_3550( ref l_U538, 0 );
    }
    g_U9151 = 1;
    if (NOT (IS_CHAR_INJURED( sub_3732() )))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3732(), 1 );
    }
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1470.57100000, 240.45680000, 9.11208500, -1508.25800000, 326.11910000, 28.33706000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1014.72300000, 1202.88500000, 22.82053000, -986.81040000, 1217.65100000, 26.28683000 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( -1503.57000000, 239.25990000, 9.89414400, -1514.57300000, 293.79620000, 17.13227000 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -1014.72300000, 1202.88500000, 22.82053000, -986.81040000, 1217.65100000, 26.28683000, 1 );
    sub_3956();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3070(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_122( uParam0 ) );
    return;
}

int sub_3366(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_3478( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_3478( "\n speech is not playing" );
    }
    return 0;
}

void sub_3478(unknown uParam0)
{
    return;
}

void sub_3550(int iParam0, unknown uParam1)
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

void sub_3732()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3956()
{
    if (l_U499)
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
    l_U497 = 0;
    l_U496 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_4181(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4217())
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

int sub_4217()
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

void sub_4348(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4367();
    return;
}

void sub_4367()
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

void sub_4475(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4559( "\n PED NUMBER ", uParam0 );
    sub_4599( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4559(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4599(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5252()
{
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    return;
}

void sub_5294()
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_5358()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if ((NOT (IS_CHAR_INJURED( l_U514 ))) AND ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT (IS_CHAR_INJURED( sub_3732() )))))
    {
        GET_CURRENT_CHAR_WEAPON( sub_3732(), ref iVar2 );
        GET_CHAR_COORDINATES( l_U514, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if ((IS_CHAR_SHOOTING_IN_AREA( sub_3732(), -1525.72400000, 242.25780000, -1456.97100000, 311.53810000, 0 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U514, sub_3732(), 0 )) || ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U517, sub_3732() )) || (((LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 20.00000000, 20.00000000, 10.00000000, 0 )) AND ((iVar2 != 56) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_5447(), l_U514 )))) || ((iVar2 != 56) AND (IS_PLAYER_TARGETTING_CHAR( sub_5447(), l_U514 )))))))
        {
            LOCK_CAR_DOORS( l_U517, 1 );
            sub_5654();
            l_U503 = 6;
            l_U598 = 1;
        }
    }
    return;
}

void sub_5447()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5654()
{
    if (DOES_BLIP_EXIST( l_U630 ))
    {
        REMOVE_BLIP( l_U630 );
    }
    if (DOES_BLIP_EXIST( l_U627 ))
    {
        REMOVE_BLIP( l_U627 );
    }
    if (DOES_BLIP_EXIST( l_U629 ))
    {
        REMOVE_BLIP( l_U629 );
    }
    return;
}

void sub_6039()
{
    PROCESS_MISSION_DELETION_LIST();
    CLEAR_AREA( -1505.32800000, 263.20590000, 11.32610000, 6.00000000, 1 );
    CLEAR_AREA( -1498.60500000, 263.23780000, 11.46510000, 6.00000000, 1 );
    CREATE_CAR( -1097828879, -1512.45900000, 263.06670000, 12.21780000, ref l_U517, 1 );
    ADD_CAR_TO_MISSION_DELETION_LIST( l_U517 );
    CHANGE_CAR_COLOUR( l_U517, 101, 35 );
    SET_CAR_HEALTH( l_U517, 1300 );
    SET_CAR_HEADING( l_U517, 270.00000000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U517 );
    SET_VEH_HAS_STRONG_AXLES( l_U517, 1 );
    STOP_CAR_BREAKING( l_U517, 1 );
    for ( l_U615 = 1; l_U615 <= 9; l_U615++ )
    {
        if (IS_VEH_DRIVEABLE( l_U517 ))
        {
            if (IS_VEHICLE_EXTRA_TURNED_ON( l_U517, l_U615 ))
            {
                TURN_OFF_VEHICLE_EXTRA( l_U517, l_U615, 1 );
            }
        }
    }
    CREATE_CHAR( 7, l_U516, -1511.24800000, 261.53930000, 11.52910000, ref l_U514, 1 );
    ADD_PED_TO_MISSION_DELETION_LIST( l_U514, 1 );
    sub_4475( 2, l_U514, "Gracie", 0 );
    SET_PED_DIES_WHEN_INJURED( l_U514, 1 );
    SET_CHAR_HEADING( l_U514, 0.00000000 );
    SET_CHAR_DECISION_MAKER( l_U514, l_U524 );
    SET_COMBAT_DECISION_MAKER( l_U514, l_U523 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U514, 1 );
    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U514, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U514, 1 );
    SET_PED_DONT_USE_VEHICLE_SPECIFIC_ANIMS( l_U514, 1 );
    TASK_PLAY_ANIM( l_U514, "carwash_d", "missgerry3", 8.00000000, 1, 0, 0, 0, -2 );
    SET_PED_DONT_DO_EVASIVE_DIVES( l_U514, 1 );
    STOP_PED_SPEAKING( l_U514, 1 );
    sub_6596();
    if (IS_VEH_DRIVEABLE( l_U517 ))
    {
        LOCK_CAR_DOORS( l_U517, 2 );
    }
    sub_6708();
    SWITCH_ROADS_OFF( -1470.57100000, 240.45680000, 9.11208500, -1508.25800000, 326.11910000, 28.33706000 );
    return;
}

void sub_6596()
{
    if (sub_6605())
    {
        g_U64921 = 1;
    }
    return;
}

int sub_6605()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_6708()
{
    REQUEST_ANIMS( "gestures@niko" );
    while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_6840(unknown uParam0)
{
    DISABLE_PAUSE_MENU( 1 );
    sub_5252();
    sub_5294();
    DO_SCREEN_FADE_IN( uParam0 );
    while (IS_SCREEN_FADING_IN())
    {
        DISABLE_PAUSE_MENU( 1 );
        WAIT( 0 );
    }
    DISABLE_PAUSE_MENU( 0 );
    return;
}

void sub_7617(unknown uParam0, boolean bParam1)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (bParam1)
    {
        SET_USE_HIGHDOF( 1 );
    }
    sub_7667();
    CLEAR_PRINTS();
    return;
}

void sub_7667()
{
    return sub_7678( 1, 1 );
}

int sub_7678(boolean bParam0, unknown uParam1)
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

void sub_8511(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_8534( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_8534(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_8588( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_8588(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_8610( iParam1 )))
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
    sub_9290( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_8610(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_3478( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_3478( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_3478( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_9290(int iParam0, int iParam1)
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

void sub_9531(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_10750(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3)
{
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    if (bParam2)
    {
        SET_PLAYER_CONTROL( sub_5447(), 1 );
    }
    if (bParam1)
    {
        SET_USE_HIGHDOF( 0 );
    }
    if (bParam3)
    {
        SET_CAM_BEHIND_PED( sub_3732() );
    }
    sub_10822();
    SET_WIDESCREEN_BORDERS( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_10822()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_11049()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_11166(unknown uParam0)
{
    DISABLE_PAUSE_MENU( 1 );
    sub_5252();
    sub_5294();
    DO_SCREEN_FADE_OUT( uParam0 );
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    DISABLE_PAUSE_MENU( 0 );
    return;
}

void sub_11716(unknown uParam0)
{
    if (sub_3366( (uParam0^) ))
    {
        sub_3550( uParam0, 0 );
    }
    return;
}

void sub_11768()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if ((NOT l_U567) AND ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (IS_VEH_DRIVEABLE( l_U517 )))))
    {
        if ((l_U508 == 4) AND ((l_U580) AND (l_U550)))
        {
            if (l_U580)
            {
                if (NOT l_U562)
                {
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_5447(), 0 )))
                    {
                        CLEAR_PRINTS();
                        if (l_U596)
                        {
                            CHANGE_BLIP_DISPLAY( l_U627, 2 );
                        }
                        PRINT( "GOAL_03", 7500, 3 );
                        l_U580 = 0;
                    }
                }
            }
        }
        if ((l_U508 == 5) AND ((l_U580) AND (l_U550)))
        {
            if (l_U580)
            {
                CLEAR_PRINTS();
                if (l_U596)
                {
                    CHANGE_BLIP_DISPLAY( l_U627, 2 );
                    PRINT( "GOAL_03", 7500, 3 );
                }
                else
                {
                    CHANGE_BLIP_DISPLAY( l_U631, 2 );
                    PRINT( "GOAL_00", 7500, 3 );
                    WAIT( 100 );
                }
                l_U580 = 0;
            }
        }
        if (l_U550)
        {
            if (IS_VEH_DRIVEABLE( l_U517 ))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_3732(), l_U517 )))
                {
                    CHANGE_BLIP_DISPLAY( l_U629, 4 );
                    if (l_U596)
                    {
                        CHANGE_BLIP_DISPLAY( l_U627, 0 );
                        if (l_U568)
                        {
                            CLEAR_PRINTS();
                            PRINT( "GOAL_02", 7500, 3 );
                        }
                    }
                    else
                    {
                        CHANGE_BLIP_DISPLAY( l_U631, 0 );
                        sub_12232();
                        sub_8511( "GM3_OUT", ref l_U532, 7, 1 );
                    }
                    l_U580 = 1;
                    l_U550 = 0;
                }
            }
        }
        else if (IS_VEH_DRIVEABLE( l_U517 ))
        {
            if (IS_CHAR_IN_CAR( sub_3732(), l_U517 ))
            {
                CHANGE_BLIP_DISPLAY( l_U629, 0 );
                l_U606 = 0;
                l_U550 = 1;
            }
            if ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))
            {
                GET_CHAR_COORDINATES( l_U514, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3732(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 150.00000000, 150.00000000, 150.00000000, 0 )))
                {
                    l_U503 = 8;
                    l_U598 = 1;
                }
            }
        }
    }
    return;
}

void sub_12232()
{
    unknown uVar2;

    GET_GAME_TIMER( ref uVar2 );
    if ((NOT (sub_12266( l_U526 ))) AND (sub_3366( l_U526 )))
    {
        l_U574 += 4000;
        sub_12312( ref l_U526 );
        l_U502 = 0;
    }
    return;
}

void sub_12266(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

int sub_12312(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_3478( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_3478( "\n CONVERSATION PAUSED AT LINE " );
            sub_12468( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_3478( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_3478( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_3478( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_12468(unknown uParam0)
{
    return;
}

void sub_12978()
{
    if (NOT l_U598)
    {
        if (IS_CHAR_DEAD( l_U514 ))
        {
            l_U503 = 1;
            l_U598 = 1;
        }
        if ((NOT (IS_CAR_DEAD( l_U517 ))) AND (NOT (IS_VEH_DRIVEABLE( l_U517 ))))
        {
            if (NOT l_U605)
            {
                if (NOT l_U568)
                {
                    sub_5654();
                    l_U503 = 6;
                    l_U598 = 1;
                }
                else if (NOT (IS_CAR_DEAD( l_U517 )))
                {
                    SET_ENGINE_HEALTH( l_U517, -1 );
                }
                GET_GAME_TIMER( ref l_U634 );
                l_U634 += 12000;
                l_U605 = 1;;
            }
        }
        if (IS_VEH_DRIVEABLE( l_U517 ))
        {
            if ((NOT l_U605) AND (CHECK_STUCK_TIMER( l_U517, 3, 60000 )))
            {
                if (NOT l_U568)
                {
                    sub_5654();
                    l_U503 = 6;
                    l_U598 = 1;
                }
                else if (NOT (IS_CAR_DEAD( l_U517 )))
                {
                    SET_ENGINE_HEALTH( l_U517, -1 );
                }
                GET_GAME_TIMER( ref l_U634 );
                l_U634 += 12000;
                l_U605 = 1;;
            }
            if (((NOT l_U605) AND (CHECK_STUCK_TIMER( l_U517, 1, 40000 ))) || (CHECK_STUCK_TIMER( l_U517, 0, 5000 )))
            {
                if (l_U568)
                {
                    l_U503 = 1;
                    SET_CHAR_HEALTH( l_U514, 0 );
                    l_U598 = 1;
                }
                else
                {
                    sub_5654();
                    l_U503 = 6;
                    l_U598 = 1;
                }
                GET_GAME_TIMER( ref l_U634 );
                l_U634 += 12000;
                l_U605 = 1;
            }
        }
        if (sub_13449( l_U517 ))
        {
            l_U503 = 9;
            l_U598 = 1;
            if (NOT (IS_CHAR_INJURED( l_U514 )))
            {
                SET_CHAR_DROWNS_IN_WATER( l_U514, 1 );
            }
            sub_11716( ref l_U526 );
            sub_11716( ref l_U532 );
            sub_11716( ref l_U538 );
            WAIT( 3000 );
        }
        if (l_U605)
        {
            GET_GAME_TIMER( ref l_U577 );
            if (l_U577 > l_U634)
            {
                if (NOT (IS_CAR_DEAD( l_U517 )))
                {
                    EXPLODE_CAR( l_U517, 1, 0 );
                }
            }
        }
    }
    return;
}

int sub_13449(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if ((IS_CAR_IN_WATER( uParam0 )) AND (IS_CAR_DEAD( uParam0 )))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}

int sub_13689()
{
    if ((IS_VEH_DRIVEABLE( l_U517 )) AND ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (NOT (IS_CHAR_INJURED( sub_3732() )))))
    {
        if ((IS_CHAR_IN_CAR( l_U514, l_U517 )) AND (IS_CHAR_IN_CAR( sub_3732(), l_U517 )))
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

int sub_14582(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3732() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3732(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3732() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3732(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3732()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3732() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3732() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5447() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5447() )))
    {
        return 0;
    }
    return 1;
}

void sub_15259()
{
    unknown uVar2;

    if ((NOT l_U568) AND (NOT l_U567))
    {
        if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT (IS_CHAR_INJURED( sub_3732() ))))
        {
            if ((NOT (CHECK_STUCK_TIMER( l_U517, 0, 0 ))) AND (NOT (IS_CHAR_IN_CAR( sub_3732(), l_U517 ))))
            {
                GET_GAME_TIMER( ref l_U572 );
                l_U572 += 15000;
                LOCK_CAR_DOORS( l_U517, 2 );
                if (NOT (IS_CHAR_INJURED( l_U514 )))
                {
                    if (DOES_BLIP_EXIST( l_U629 ))
                    {
                        REMOVE_BLIP( l_U629 );
                    }
                    if (DOES_BLIP_EXIST( l_U627 ))
                    {
                        REMOVE_BLIP( l_U627 );
                    }
                    if (DOES_BLIP_EXIST( l_U630 ))
                    {
                        REMOVE_BLIP( l_U630 );
                    }
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_SHUFFLE_TO_NEXT_CAR_SEAT( 0, l_U517 );
                    TASK_FLEE_CHAR_ANY_MEANS( 0, sub_3732(), 150.00000000, 120000, 0, 0, 0, 0 );
                    TASK_SMART_FLEE_CHAR( 0, sub_3732(), 150.00000000, -1 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    if (sub_3366( l_U532 ))
                    {
                        sub_3550( ref l_U532, 0 );
                    }
                    if (sub_3366( l_U526 ))
                    {
                        sub_3550( ref l_U526, 0 );
                    }
                    if (sub_3366( l_U538 ))
                    {
                        sub_3550( ref l_U538, 0 );
                    }
                    sub_8511( "GM3_GETOUT", ref l_U532, 8, 1 );
                    SET_CHAR_KEEP_TASK( l_U514, 1 );
                    TASK_PERFORM_SEQUENCE( l_U514, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                }
                l_U567 = 1;
                l_U508 = 13;
            }
        }
    }
    return;
}

void sub_15967()
{
    if (sub_3366( l_U532 ))
    {
        sub_3550( ref l_U532, 0 );
        if (l_U502 == 0)
        {
            l_U574 += 5000;
        }
    }
    return;
}

string sub_17512()
{
    if (g_U64941)
    {
        switch (l_U573)
        {
            case 1: return "GM3_B1AV1";
            case 3: return "GM3_KNAP1a";
            case 4: return "GM3_KNAP1b";
        }
    }
    else
    {
        switch (l_U573)
        {
            case 1: return "GM2_B1AV2";
            case 3: return "GM3_KNAP2a";
            case 4: return "GM3_KNAP2ba";
        }
    }
    return "NULL";
}

void sub_17755(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_17778( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_17778(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_8588( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_20499()
{
    float fVar2;

    if ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND ((NOT (IS_CHAR_INJURED( l_U514 ))) AND (IS_VEH_DRIVEABLE( l_U517 ))))
    {
        GET_CAR_SPEED( l_U517, ref fVar2 );
        if ((NOT l_U568) AND ((fVar2 < 1.00000000) AND (IS_CAR_IN_AREA_3D( l_U517, -1499.77600000, 260.26910000, 11.01200000, -1514.07700000, 265.08110000, 15.09332000, 0 ))))
        {
            l_U508 = 12;
        }
    }
    return;
}

void sub_20678()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;

    if ((NOT (IS_CHAR_INJURED( l_U514 ))) AND ((NOT (IS_CHAR_INJURED( sub_3732() ))) AND (IS_VEH_DRIVEABLE( l_U517 ))))
    {
        GET_GAME_TIMER( ref iVar2 );
        if (l_U508 != 4)
        {
            if (IS_CHAR_IN_CAR( sub_3732(), l_U517 ))
            {
                if (iVar2 > l_U638)
                {
                    if (l_U639)
                    {
                        l_U576++;
                    }
                    GET_CAR_COORDINATES( l_U517, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar3._fU0, uVar3._fU4, uVar3._fU8, l_U635._fU0, l_U635._fU4, l_U635._fU8, ref fVar6 );
                    if (fVar6 < 1.00000000)
                    {
                        sub_12232();
                        if (NOT (sub_3366( l_U532 )))
                        {
                            sub_8511( "GM3_STILL", ref l_U532, 7, 1 );
                            l_U639 = 1;
                        }
                        l_U574 += 7000;
                    }
                    else if (l_U639)
                    {
                        l_U639 = 0;
                        l_U576 = 0;
                    }
                    l_U635 = {uVar3};
                    l_U638 = iVar2 + 7000;
                }
            }
        }
        else if (iVar2 > l_U638)
        {
            GET_CAR_COORDINATES( l_U517, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar3._fU0, uVar3._fU4, uVar3._fU8, l_U635._fU0, l_U635._fU4, l_U635._fU8, ref fVar6 );
            if ((NOT (IS_WANTED_LEVEL_GREATER( sub_5447(), 0 ))) AND (fVar6 < 1.00000000))
            {
                if (NOT l_U640)
                {
                    sub_21120( uVar3, 0 );
                    l_U640 = 1;
                }
            }
            else
            {
                l_U640 = 0;
            }
            l_U635 = {uVar3};
            l_U638 = iVar2 + 7000;
        }
    }
    return;
}

void sub_21120(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    unknown uVar6;

    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref uVar6 );
    REQUEST_MODEL( uVar6 );
    if (bParam3)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
        {
            ;
        }
    }
    else if (CREATE_EMERGENCY_SERVICES_CAR( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
    {
        ;
    }
    return;
}

void sub_29921(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_29981( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_29981(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_3478( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_3478( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_5447() )))
    {
        sub_3478( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3732() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3732() )))
    {
        sub_3478( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_3478( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_30496()))
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
                sub_3478( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_30496()))
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
    sub_31868( uParam0, ref g_U91._fU176 );
    sub_33249( ref g_U91._fU160 );
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
        sub_4599( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_30496()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_30553())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_30553()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_5447() )))
    {
        sub_3478( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_3478( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_3478( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_3478( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_5447() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3732() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3732(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_3478( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3732() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_3478( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_3478( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5447() )))
    {
        sub_3478( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_31868(int iParam0, unknown uParam1)
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

void sub_33249(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_33856()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    unknown uVar6;
    float fVar7;

    if (l_U568)
    {
        if ((IS_VEH_DRIVEABLE( l_U517 )) AND (NOT (IS_CHAR_INJURED( l_U514 ))))
        {
            GET_CAR_SPEED_VECTOR( l_U517, ref uVar2, 1 );
            fVar5 = l_U642._fU0 - uVar2._fU0;
            if (fVar5 > l_U645)
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_l" )))
                {
                    if ((NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_brake" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_r" ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_turn_l", "missgerry3", 35.00000000, -2, 128 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_loop", "missgerry3", 35.00000000, -2, 144 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        TASK_PERFORM_SEQUENCE( l_U514, uVar6 );
                        CLEAR_SEQUENCE_TASK( uVar6 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_turn_l", "missgerry3", 1.00000000, -2, 128 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_loop", "missgerry3", 1.00000000, -2, 144 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        TASK_PERFORM_SEQUENCE( l_U514, uVar6 );
                        CLEAR_SEQUENCE_TASK( uVar6 );
                    }
                }
            }
            fVar5 = l_U642._fU0 - uVar2._fU0;
            if (fVar5 > l_U646)
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_r" )))
                {
                    if ((NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_brake" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_l" ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_turn_r", "missgerry3", 35.00000000, -2, 128 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_loop", "missgerry3", 35.00000000, -2, 144 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        TASK_PERFORM_SEQUENCE( l_U514, uVar6 );
                        CLEAR_SEQUENCE_TASK( uVar6 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_turn_r", "missgerry3", 1.00000000, -2, 128 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_loop", "missgerry3", 1.00000000, -2, 144 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        TASK_PERFORM_SEQUENCE( l_U514, uVar6 );
                        CLEAR_SEQUENCE_TASK( uVar6 );
                    }
                }
            }
            fVar5 = l_U642._fU4 - uVar2._fU4;
            if (fVar5 > l_U647)
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_brake" )))
                {
                    if ((NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_r" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_l" ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_brake", "missgerry3", 35.00000000, -2, 128 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_loop", "missgerry3", 35.00000000, -2, 144 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        TASK_PERFORM_SEQUENCE( l_U514, uVar6 );
                        CLEAR_SEQUENCE_TASK( uVar6 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_brake", "missgerry3", 1.00000000, -2, 128 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_loop", "missgerry3", 1.00000000, -2, 144 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        TASK_PERFORM_SEQUENCE( l_U514, uVar6 );
                        CLEAR_SEQUENCE_TASK( uVar6 );
                    }
                }
            }
            fVar5 = l_U642._fU4 - uVar2._fU4;
            if (fVar5 > l_U648)
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_brake" )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar6 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_brake", "missgerry3", 35.00000000, -2, 128 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_loop", "missgerry3", 35.00000000, -2, 144 );
                    CLOSE_SEQUENCE_TASK( uVar6 );
                    TASK_PERFORM_SEQUENCE( l_U514, uVar6 );
                    CLEAR_SEQUENCE_TASK( uVar6 );
                }
            }
            if (uVar2._fU0 < -2.50000000)
            {
                if (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_l" ))
                {
                    if ((NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_brake" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_r" ))))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U514, "missgerry3", "girl_ko_turn_l", ref fVar7 );
                        if ((fVar7 > 0.29000000) AND (fVar7 < 0.39000000))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U514 )))
                            {
                                SET_CHAR_ANIM_CURRENT_TIME( l_U514, "missgerry3", "girl_ko_turn_l", 0.31000000 );
                            }
                        }
                    }
                }
                else if ((NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_brake" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_r" ))))
                {
                    OPEN_SEQUENCE_TASK( ref uVar6 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_turn_l", "missgerry3", 35.00000000, -2, 128 );
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_loop", "missgerry3", 35.00000000, -2, 144 );
                    CLOSE_SEQUENCE_TASK( uVar6 );
                    TASK_PERFORM_SEQUENCE( l_U514, uVar6 );
                    CLEAR_SEQUENCE_TASK( uVar6 );
                }
            }
            if (uVar2._fU4 < -10.00000000)
            {
                if (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_brake" ))
                {
                    if ((NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_L" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_r" ))))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U514, "missgerry3", "girl_ko_brake", ref fVar7 );
                        if ((fVar7 > 0.29000000) AND (fVar7 < 0.39000000))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U514 )))
                            {
                                SET_CHAR_ANIM_CURRENT_TIME( l_U514, "missgerry3", "girl_ko_brake", 0.34000000 );
                            }
                        }
                    }
                }
                else if ((NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_L" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_turn_r" ))))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U514, "missgerry3", "girl_ko_brake" )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_brake", "missgerry3", 35.00000000, -2, 128 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "girl_ko_loop", "missgerry3", 35.00000000, -2, 144 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        TASK_PERFORM_SEQUENCE( l_U514, uVar6 );
                        CLEAR_SEQUENCE_TASK( uVar6 );
                    }
                }
            }
            l_U642 = {uVar2};
        }
    }
    return;
}

void sub_39378()
{
    if (sub_3366( l_U532 ))
    {
        sub_3550( ref l_U532, 0 );
    }
    if (sub_3366( l_U526 ))
    {
        sub_3550( ref l_U526, 0 );
    }
    if (sub_3366( l_U538 ))
    {
        sub_3550( ref l_U538, 0 );
    }
    switch (l_U503)
    {
        case 1:
        CLEAR_PRINTS();
        PRINT( "FAIL_1", 7500, 3 );
        sub_39583( 27, l_U514, 15 );
        sub_39656( 13, "GM3_CFDIE", "GM3AUD", 0 );
        l_U503 = 7;
        break;
        case 2:
        CLEAR_PRINTS();
        PRINT( "FAIL_4", 7500, 3 );
        sub_39656( 13, "GM3_CFESC", "GM3AUD", 0 );
        l_U503 = 7;
        break;
        case 3:
        WAIT( 500 );
        if (IS_CHAR_INJURED( l_U514 ))
        {
            CLEAR_PRINTS();
            PRINT( "FAIL_1", 7500, 3 );
            sub_39656( 13, "GM3_CFDIE", "GM3AUD", 0 );
        }
        else
        {
            CLEAR_PRINTS();
            PRINT( "FAIL_3", 7500, 3 );
            sub_39656( 13, "GM3_CFESC", "GM3AUD", 0 );
        }
        l_U503 = 7;
        break;
        case 4:
        WAIT( 3000 );
        if (IS_CHAR_INJURED( l_U514 ))
        {
            CLEAR_PRINTS();
            PRINT( "FAIL_1", 7500, 3 );
            sub_39656( 13, "GM3_CFDIE", "GM3AUD", 0 );
        }
        else
        {
            CLEAR_PRINTS();
            PRINT( "FAIL_2", 7500, 3 );
            sub_39656( 13, "GM3_CFESC", "GM3AUD", 0 );
        }
        l_U503 = 7;
        break;
        case 5:
        CLEAR_PRINTS();
        PRINT( "FAIL_5", 7500, 3 );
        sub_39656( 13, "GM3_CFESC", "GM3AUD", 0 );
        l_U503 = 7;
        break;
        case 9:
        CLEAR_PRINTS();
        PRINT( "FAIL_6", 7500, 3 );
        sub_39656( 13, "GM3_CFDIE", "GM3AUD", 0 );
        l_U503 = 7;
        break;
        case 6:
        sub_40757();
        break;
        case 8:
        WAIT( 500 );
        if (IS_CHAR_INJURED( l_U514 ))
        {
            CLEAR_PRINTS();
            PRINT_NOW( "FAIL_1", 7500, 3 );
            sub_39656( 13, "GM3_CFDIE", "GM3AUD", 0 );
        }
        else
        {
            CLEAR_PRINTS();
            PRINT_NOW( "FAIL_7", 7500, 3 );
            sub_39656( 13, "GM3_CFESC", "GM3AUD", 0 );
        }
        l_U503 = 7;
        break;
        default:
          case 7:
        if (g_U9930 > 1)
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_5447(), 150 );
            if (NOT (IS_CHAR_INJURED( sub_3732() )))
            {
                SAY_AMBIENT_SPEECH( sub_3732(), "MISSION_FAIL_RAGE", 0, 0, 0 );
            }
        }
        sub_41634();
        sub_3040();
        break;
    }
    return;
}

void sub_39583(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_39656(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_39700( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_39700(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_40757()
{
    switch (l_U510)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_5447(), 0 );
        if (NOT (IS_CHAR_INJURED( l_U514 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U514 ))
            {
                sub_40850();
            }
            else
            {
                TASK_FLEE_CHAR_ANY_MEANS( l_U514, sub_3732(), 70.00000000, 50000, 0, 0, 0, 5.00000000 );
                SET_CHAR_KEEP_TASK( l_U514, 1 );
            }
            if (NOT (IS_CAR_DEAD( l_U517 )))
            {
                HINT_CAM( 3.00000000, 0.00000000, 0.00000000, 0, 0, l_U517, 8000 );
            }
            sub_8511( "GM3_GETOUT", ref l_U544, 7, 1 );
        }
        else if ((NOT (IS_CAR_DEAD( l_U517 ))) AND (DOES_VEHICLE_EXIST( l_U517 )))
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, l_U517, 8000 );
        }
        GET_GAME_TIMER( ref l_U511 );
        l_U511 += 6000;
        l_U510 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U615 );
        if (l_U615 > l_U511)
        {
            l_U510 = 2;
        }
        break;
        case 2:
        sub_11166( 500 );
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        sub_3956();
        if (NOT (IS_CHAR_INJURED( l_U514 )))
        {
            DELETE_CHAR( ref l_U514 );
        }
        l_U503 = 2;
        sub_6840( 500 );
        SET_PLAYER_CONTROL( sub_5447(), 1 );
        break;
    }
    if ((DOES_CHAR_EXIST( l_U514 )) AND (IS_CHAR_INJURED( l_U514 )))
    {
        l_U503 = 1;
    }
    return;
}

void sub_40850()
{
    unknown uVar2;

    if (NOT (IS_CAR_DEAD( l_U517 )))
    {
        OPEN_SEQUENCE_TASK( ref uVar2 );
        TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U517 );
        TASK_SMART_FLEE_CHAR( 0, sub_3732(), 70.00000000, -1 );
        CLOSE_SEQUENCE_TASK( uVar2 );
        CLEAR_CHAR_TASKS( l_U514 );
        SET_CHAR_KEEP_TASK( l_U514, 1 );
        TASK_PERFORM_SEQUENCE( l_U514, uVar2 );
        CLEAR_SEQUENCE_TASK( uVar2 );
    }
    return;
}

void sub_41634()
{
    sub_41643();
    return;
}

void sub_41643()
{
    int iVar2;

    iVar2 = 15;
    sub_41657( iVar2 );
    sub_2129( iVar2 );
    return;
}

void sub_41657(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_5447(), 150 );
    CLEAR_HELP();
    sub_974( uParam0 );
    return;
}

void sub_41782()
{
    UNLOCK_MISSION_NEWS_STORY( 35 );
    sub_41804( 35 );
    AWARD_ACHIEVEMENT( 34 );
    sub_39656( 13, "GM3_CPASS", "GM3AUD", 0 );
    CLEAR_WANTED_LEVEL( sub_5447() );
    RELEASE_WEATHER();
    sub_45052();
    TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
    sub_3040();
    return;
}

void sub_41804(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_41891( iParam0 ))
    {
        sub_42941( iParam0 );
    }
    return;
}

int sub_41891(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_41948( ref uVar3, 1, 0, 0 );
    sub_42560( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_3478( "\n ----------------------------------------------------------------" );
    sub_4559( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_3478( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_41948(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_42001( iParam0, uParam1, uParam2 );
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
        sub_42133( iParam0 + 0 );
    }
    return;
}

void sub_42001(int iParam0, int iParam1, int iParam2)
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
        sub_42133( iParam0 + 0 );
    }
    return;
}

void sub_42133(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_42164( iParam0->_fU4 )))
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

int sub_42164(unknown uParam0)
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

void sub_42560(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_42941(unknown uParam0)
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
        sub_43152( 20, 6, 16383, 16383, ref uVar4 );
        sub_43828( ref uVar4, 7 );
        sub_43859( ref uVar4, 0 );
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
        sub_43152( 20, 7, 9, 16383, ref uVar4 );
        sub_43828( ref uVar4, 7 );
        sub_43859( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_43152(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_43176( uParam0, 0, iParam4 + 0 );
    sub_43176( uParam1, 1, iParam4 + 0 );
    sub_43176( uParam2, 2, iParam4 + 0 );
    sub_43176( uParam3, 3, iParam4 + 0 );
    sub_43176( 0, 4, iParam4 + 0 );
    sub_43176( 1, 5, iParam4 + 0 );
    sub_43176( 65535, 6, iParam4 + 0 );
    sub_43176( 0, 12, iParam4 + 0 );
    sub_43176( 0, 11, iParam4 + 0 );
    sub_43176( 0, 14, iParam4 + 0 );
    sub_43176( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_43176( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_43176( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_43176(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_43828(int iParam0, unknown uParam1)
{
    sub_43176( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_43859(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_43899())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_44586( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_44385( iVar5 );
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

int sub_43899()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_43933( 5, g_U968[I] )) == 7)
        {
            sub_44385( I );
            return 1;
        }
    }
    return 0;
}

int sub_43933(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_44385(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_44458( 39 );
    return;
}

void sub_44458(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_44586(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_44647( uParam0, g_U968[Result] ))
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

int sub_44647(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_45052()
{
    sub_45061();
    return;
}

void sub_45061()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_45079();
    sub_45138( iVar2, iVar3, iVar4 );
    return;
}

void sub_45079()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_45138(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 15;
    sub_45171( iVar5, uParam0, uParam1, uParam2, "Contact_18" );
    return;
}

void sub_45171(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_45267( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_45267( ref cVar9 );
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
            sub_45267( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_45267( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_45267( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_45267( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_45844( iParam0, iVar7 );;;
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
                sub_46241( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_46241( 0, 4 );
            }
        }
    }
    if (NOT (sub_46330( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5447(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_5447() );
    }
    sub_2138();
    bVar27 = true;
    uVar28 = sub_45844( iParam0, iVar7 );
    uVar29 = sub_1616( iParam0 );
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
                sub_55706( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_56136();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_56221( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_56278( iParam0 );
                sub_56317( 0 );
                sub_2036( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_56425();
        }
    }
    if (bParam2)
    {
        sub_56136();
        sub_56513();
        sub_56317( 0 );
    }
    if (bParam3)
    {
        sub_56136();
        sub_56553();
        sub_56317( 0 );
        sub_2036( uVar29, 0 );
    }
    sub_1503();
    return;
}

void sub_45267(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_45844(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_785( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_46241(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_46330(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_46538( uParam1 );
        break;
        case 1:
        bVar8 = sub_48616( uParam1 );
        break;
        case 2:
        bVar8 = sub_48842( uParam1 );
        break;
        case 3:
        bVar8 = sub_48992( uParam1 );
        break;
        case 4:
        bVar8 = sub_49270( uParam1 );
        break;
        case 5:
        bVar8 = sub_49573( uParam1 );
        break;
        case 6:
        bVar8 = sub_49772( uParam1 );
        break;
        case 7:
        bVar8 = sub_49998( uParam1 );
        break;
        case 8:
        bVar8 = sub_50233( uParam1 );
        break;
        case 9:
        bVar8 = sub_50608( uParam1 );
        break;
        case 10:
        bVar8 = sub_50855( uParam1 );
        break;
        case 11:
        bVar8 = sub_50994( uParam1 );
        break;
        case 12:
        bVar8 = sub_51293( uParam1 );
        break;
        case 13:
        bVar8 = sub_51521( uParam1 );
        break;
        case 14:
        bVar8 = sub_51808( uParam1 );
        break;
        case 15:
        bVar8 = sub_52090( uParam1 );
        break;
        case 16:
        bVar8 = sub_52372( uParam1 );
        break;
        case 17:
        bVar8 = sub_52573( uParam1 );
        break;
        case 18:
        bVar8 = sub_52646( uParam1 );
        break;
        case 19:
        bVar8 = sub_52860( uParam1 );
        break;
        case 20:
        bVar8 = sub_53113( uParam1 );
        break;
        case 21:
        bVar8 = sub_53360( uParam1 );
        break;
        case 22:
        bVar8 = sub_53561( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_48221( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_45844( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_53884( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_46538(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_46817( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_46817( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_46817( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_46817( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_46817( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_46817( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_46817( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_46817( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_46817( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_46817( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_46817( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_46817( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_46817( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_46817( iVar3, 0, 3, 1, 0, 0 );
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
        sub_46817( iVar3, 0, sub_48099(), sub_48365(), 0, 0 );
        break;
        default:
        sub_48524( "Friend 1", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Friend 1", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_46817(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_46828( uParam1 );
    sub_47002( uParam0, 0, uParam2 );
    sub_47002( uParam0, 1, uParam3 );
    sub_47002( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_45079();
    return;
}

void sub_46828(unknown uParam0)
{
    ADD_SCORE( sub_5447(), uParam0 );
    sub_46853( uParam0 );
    return;
}

void sub_46853(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_785( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_47002(unknown uParam0, int iParam1, int iParam2)
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
        sub_47159( uParam0 );
    }
    return;
}

void sub_47159(unknown uParam0)
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

int sub_48099()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_48221( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_48221(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_48365()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_48221( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_48524(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_48616(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46817( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_48524( "Contact 2", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 2", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48842(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_46817( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_48524( "Girl 3", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Girl 3", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48992(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_46817( iVar3, 0, sub_48099(), sub_48365(), 0, 0 );
        break;
        default:
        sub_48524( "Friend 4", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Friend 4", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49270(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46817( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_46817( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_46817( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_46817( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_48524( "Contact 5", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 5", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49573(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_48524( "Contact 7", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 7", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49772(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46817( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_48524( "Contact 7b", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 7b", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49998(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_46817( iVar3, 0, sub_48099(), sub_48365(), 0, 0 );
        break;
        default:
        sub_48524( "Friend 8", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Friend 8", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50233(unknown uParam0)
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
        sub_46817( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_46817( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_46817( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_46817( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_46817( iVar3, 0, sub_48099(), sub_48365(), 0, 0 );
        break;
        default:
        sub_48524( "Friend 9", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Friend 9", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50608(unknown uParam0)
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
        sub_46817( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_46817( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_46817( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_48524( "Contact 10", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_48524( "Contact 10", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50855(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_48524( "Girl 11", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Girl 11", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_50994(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46817( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_46817( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_46817( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_46817( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_46817( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_48524( "Contact 12", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 12", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51293(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46817( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_48524( "Contact 13", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 13", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51521(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_46817( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_46817( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_46817( iVar3, 0, sub_48099(), sub_48365(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_48524( "Friend 15", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Friend 15", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51808(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46817( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_46817( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_46817( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_48524( "Contact 16", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 16", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52090(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_46817( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_46817( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_46817( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_48524( "Contact 18", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 18", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52372(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_48524( "Contact 19", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 19", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52573(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_48524( "Girl 20", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52646(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_48524( "Contact 21", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 21", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52860(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46817( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_46817( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_48524( "Contact 22", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 22", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53113(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_46817( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_46817( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_46817( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_48524( "Contact 24", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 24", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53360(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_46817( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_46817( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_46817( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_48524( "Contact 25", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_48524( "Contact 25", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53561(unknown uParam0)
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
        sub_46817( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_48524( "Girl 26", 1 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_48524( "Girl 26", 0 );
        sub_46817( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_53884(int iParam0, int iParam1)
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
    if (sub_53932( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_54663( iParam1 );
    }
    return;
}

int sub_53932(int iParam0, int iParam1)
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
            sub_54072( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_54072(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_54254( 0 );
    return;
}

void sub_54254(boolean bParam0)
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
        sub_54509();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_54509()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_54663(int iParam0)
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
        sub_54996( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_54996( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_54996( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_54996( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_54996( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_54996( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_54996( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_54996( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_54996( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_54996( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_54996( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_54996( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_54996( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_54996( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_54996( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_54996( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_54996( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_54996( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_54996( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_54996(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_55706(unknown uParam0, unknown uParam1)
{
    sub_55725( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_55725(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_56136()
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

int sub_56221(int iParam0, int iParam1)
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

void sub_56278(unknown uParam0)
{
    sub_1402();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_56317(unknown uParam0)
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

void sub_56425()
{
    sub_56434();
    return;
}

void sub_56434()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_56513()
{
    sub_56434();
    return;
}

void sub_56553()
{
    sub_56434();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

