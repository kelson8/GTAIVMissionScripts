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
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = 0;
    l_U486 = 1;
    l_U498 = {907.49570000, 576.76290000, 21.27200000};
    l_U501 = 180.00000000;
    l_U502 = {903.12600000, 586.45600000, 23.74300000};
    l_U505 = {908.97540000, -507.62040000, 15.02570000};
    l_U508 = {812.55700000, -245.43150000, 14.02380000};
    l_U511 = {590.21100000, 1399.63400000, 12.32200000};
    l_U568 = 0;
    l_U569 = 0;
    l_U570 = 0;
    l_U571 = 0;
    l_U572 = 0;
    l_U573 = 0;
    l_U574 = 0;
    l_U575 = 0;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = 0;
    l_U580 = 0;
    l_U581 = 2.50000000;
    l_U584 = 0;
    l_U585 = 0;
    l_U590 = 0;
    l_U591 = 0;
    l_U592 = 1;
    l_U614 = 0;
    l_U615 = 1;
    l_U616 = 1938952078;
    l_U617 = -610224615;
    l_U630 = 0;
    l_U631 = 0;
    l_U633 = 55.00000000;
    l_U662 = 298.10850000;
    l_U663 = {804.66090000, -245.14790000, 14.09230000};
    l_U666 = 55.21160000;
    l_U667 = {824.57750000, -244.48160000, 14.36000000};
    l_U670 = -1;
    l_U671 = 0;
    l_U673 = 0;
    l_U674 = 0;
    l_U675 = 0;
    l_U676 = 0;
    l_U678 = 0;
    l_U679 = 0;
    sub_519( "R11AUD" );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    sub_640();
    sub_723( 0 );
    sub_1497( 0, sub_1448(), "Niko", 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1663( ref l_U593, 0 );
        sub_1787();
        sub_3876();
    }
    SET_MISSION_FLAG( 1 );
    sub_4821( "ROMAN11", 0 );
    sub_4821( "R11AUD", 6 );
    ADD_BLIP_FOR_COORD( l_U502._fU0, l_U502._fU4, l_U502._fU8, ref l_U487 );
    SET_ROUTE( l_U487, l_U615 );
    PRINT_NOW( "R11000", 7500, 1 );
    sub_5048();
    GET_PLAYER_GROUP( sub_3911(), ref l_U582 );
    l_U561[0] = -1;
    l_U555[0] = -1;
    sub_5143();
    while (NOT sub_5160())
    {
        WAIT( 0 );
    }
    sub_5247();
    while (true)
    {
        WAIT( 0 );
        sub_5500();
        sub_5972();
        sub_21013();
        sub_21341();
        switch (l_U481)
        {
            case 0:
            switch (l_U482)
            {
                case 0:
                sub_21740();
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), l_U502._fU0, l_U502._fU4, l_U502._fU8, l_U581, l_U581, l_U581, 1 ))
                {
                    if (sub_22194())
                    {
                        if (NOT (IS_CHAR_IN_ANY_BOAT( sub_1448() )))
                        {
                            if (NOT l_U569)
                            {
                                if (sub_22368( 1, 1 ))
                                {
                                    sub_4164();
                                    CLEAR_PRINTS();
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U496 );
                                    if (IS_VEH_DRIVEABLE( l_U496 ))
                                    {
                                        SET_CAR_AS_MISSION_CAR( l_U496 );
                                        SET_CAR_PROOFS( l_U496, 1, 1, 1, 1, 1 );
                                        SET_WIDESCREEN_BORDERS( 1 );
                                        sub_22740();
                                        CLEAR_HELP();
                                        l_U482 = 1;
                                    }
                                }
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_IN_ANY_CAR( sub_1448() )))
                    {
                        if (sub_22368( 1, 1 ))
                        {
                            l_U496 = nil;
                            l_U482 = 2;
                        }
                    }
                }
                else if (l_U592)
                {
                    if (sub_22194())
                    {
                        PRINT_NOW( "R11000", 7500, 1 );
                        l_U592 = 0;
                    }
                }
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (l_U568)
                    {
                        l_U568 = 0;
                    }
                }
                break;
                case 1:
                if (DOES_CAM_EXIST( l_U587 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1448() )))
                    {
                        l_U482 = 2;
                    }
                }
                else
                {
                    BEGIN_CAM_COMMANDS( ref l_U586 );
                    CREATE_CAM( 14, ref l_U587 );
                    SET_CAM_POS( l_U587, 900.03130000, 598.31130000, 24.90403000 );
                    SET_CAM_ROT( l_U587, -9.80020800, 0.00000000, -161.84540000 );
                    SET_CAM_ACTIVE( l_U587, 1 );
                    SET_CAM_PROPAGATE( l_U587, 1 );
                    SET_CAM_FOV( l_U587, 35.00000000 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    REMOVE_PLAYER_HELMET( sub_3911(), 1 );
                    if (NOT (IS_CAR_DEAD( l_U496 )))
                    {
                        SET_CAR_ENGINE_ON( l_U496, 0, 1 );
                        sub_23155();
                    }
                    if (NOT (IS_CAR_DEAD( l_U496 )))
                    {
                        SET_CAR_IN_CUTSCENE( l_U496, 1 );
                        TASK_LEAVE_CAR( sub_1448(), l_U496 );
                    }
                }
                break;
                case 2:
                DO_SCREEN_FADE_OUT( 3000 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                while (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                {
                    WAIT( 0 );
                }
                if (DOES_CAM_EXIST( l_U587 ))
                {
                    SET_CAM_ACTIVE( l_U587, 0 );
                    SET_CAM_PROPAGATE( l_U587, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DESTROY_CAM( l_U587 );
                    END_CAM_COMMANDS( ref l_U586 );
                }
                SET_CAM_BEHIND_PED( sub_1448() );
                if (IS_VEH_DRIVEABLE( l_U496 ))
                {
                    SET_CAR_HEADING( l_U496, 180.00000000 );
                    SET_CAR_COORDINATES( l_U496, l_U502._fU0, l_U502._fU4, l_U502._fU8 - 1.00000000 );
                    WARP_CHAR_INTO_CAR( sub_1448(), l_U496 );
                    LOCK_CAR_DOORS( l_U496, 1 );
                    SET_CAR_PROOFS( l_U496, 0, 0, 0, 0, 0 );
                }
                else
                {
                    SET_CHAR_HEADING( sub_1448(), 180.00000000 );
                    SET_CHAR_COORDINATES( sub_1448(), l_U502._fU0, l_U502._fU4, l_U502._fU8 - 1.00000000 );
                }
                sub_4164();
                CLEAR_AREA( l_U498._fU0, l_U498._fU4, l_U498._fU8, 75.00000000, 1 );
                sub_4821( "R11AUD", 6 );
                START_CUTSCENE_NOW( "RP_11" );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                SET_CAM_BEHIND_PED( sub_1448() );
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                if (IS_VEH_DRIVEABLE( l_U496 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U496 );
                }
                SET_WIDESCREEN_BORDERS( 0 );
                SET_CAM_BEHIND_PED( sub_1448() );
                CLEAR_NAMED_CUTSCENE( "RP_11" );
                if (NOT (IS_CAR_DEAD( l_U497 )))
                {
                    LOCK_CAR_DOORS( l_U497, 1 );
                    POP_CAR_BOOT( l_U497 );
                    SET_CAR_CAN_BE_VISIBLY_DAMAGED( l_U497, 1 );
                    SET_CAR_PROOFS( l_U497, 0, 0, 0, 0, 0 );
                }
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1932515764 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1448(), 0 );
                sub_24183();
                sub_26141();
                LOAD_SCENE( l_U502._fU0, l_U502._fU4, l_U502._fU8 );
                DO_SCREEN_FADE_IN( 400 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                sub_3902();
                l_U482 = 3;
                break;
                case 3:
                if (NOT (IS_CHAR_DEAD( l_U491 )))
                {
                    CLEAR_PRINTS();
                    if (g_U64687 == 0)
                    {
                        if (sub_26420( "R11_B1AV1", ref l_U593, 6, 1 ))
                        {
                            StrCopy( ref l_U599, "R11_B1AV1", 16 );
                            REMOVE_BLIP( l_U487 );
                            l_U591 = 0;
                            l_U481 = 1;
                            SETTIMERA( 0 );
                            WAIT( 0 );
                        }
                    }
                    else if (g_U64687 == 1)
                    {
                        sub_27456();
                        StrCopy( ref l_U599, "R11_B1V2", 16 );
                        REMOVE_BLIP( l_U487 );
                        l_U591 = 0;
                        l_U481 = 1;
                        l_U570 = 1;
                    }
                    else if (g_U64687 == 2)
                    {
                        REMOVE_BLIP( l_U487 );
                        l_U591 = 0;
                        l_U481 = 1;
                    };;;
                }
                else
                {
                    sub_27910();
                }
                break;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U491 )))
            {
                if (sub_28070( l_U491 ))
                {
                    if (l_U591 == 0)
                    {
                        sub_27456();
                        if (g_U64687 == 1)
                        {
                            if (NOT l_U678)
                            {
                                if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "R11001", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                                {
                                    if (sub_26420( "R11_B1V2", ref l_U593, 6, 1 ))
                                    {
                                        l_U678 = 1;
                                    }
                                }
                            }
                        }
                        else if (g_U64687 == 2)
                        {
                            if (NOT l_U679)
                            {
                                if (IS_CHAR_IN_ANY_CAR( l_U491 ))
                                {
                                    SAY_AMBIENT_SPEECH( l_U491, "LISTEN_TO_RADIO", 0, 0, 0 );
                                    l_U679 = 1;
                                }
                            }
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U488 ))
                    {
                        REMOVE_BLIP( l_U488 );
                    }
                    if (NOT (sub_28597( l_U593 )))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (g_U64687 == 0)
                            {
                                if (NOT l_U570)
                                {
                                    if (sub_28662())
                                    {
                                        if (NOT (sub_27489( l_U593 )))
                                        {
                                            GET_MOBILE_PHONE_TASK_SUB_TASK( l_U491, ref l_U632 );
                                            if (l_U632 != 1)
                                            {
                                                GET_SCRIPT_TASK_STATUS( l_U491, 53, ref l_U588 );
                                                if (l_U588 == 7)
                                                {
                                                    TASK_USE_MOBILE_PHONE( l_U491, 1 );
                                                    SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT( l_U491, 0 );
                                                }
                                            }
                                            else if (sub_26420( "R11_B1BV1", ref l_U593, 6, 1 ))
                                            {
                                                StrCopy( ref l_U599, "R11_B1BV1", 16 );
                                                l_U570 = 1;
                                            }
                                        }
                                    }
                                }
                                else if (NOT l_U571)
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U491, 53, ref l_U588 );
                                    if ((l_U588 == 2) || (l_U588 == 7))
                                    {
                                        sub_1663( ref l_U593, 0 );
                                    }
                                    else if (NOT (IS_CHAR_INJURED( l_U491 )))
                                    {
                                        if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U491, sub_1448(), 0 )) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3911(), l_U491 )))
                                        {
                                            sub_1663( ref l_U593, 0 );
                                        }
                                    }
                                    if (NOT (sub_27489( l_U593 )))
                                    {
                                        if (sub_26420( "R11_B1CV1", ref l_U593, 6, 1 ))
                                        {
                                            TASK_USE_MOBILE_PHONE( l_U491, 0 );
                                            SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT( l_U491, 1 );
                                            StrCopy( ref l_U599, "R11_B1CV1", 16 );
                                            l_U571 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_29191( ref l_U599, ref l_U593, 6, 1 );
                    }
                    if (NOT l_U584)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), l_U505._fU0, l_U505._fU4, l_U505._fU8, 200.00000000, 200.00000000, 200.00000000, 0 ))
                        {
                            REQUEST_MODEL( 180309935 );
                            REQUEST_MODEL( -375500503 );
                            SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, -1334627284, 180309935 );
                            SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, 483863024, -375500503 );
                            sub_29469();
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -2113580896, 896.00000000, -504.00000000, 15.00000000, 1, 0.00000000 );
                            g_U64690 = 1;
                        }
                    }
                    else if (NOT l_U673)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), l_U505._fU0, l_U505._fU4, l_U505._fU8, 100.00000000, 100.00000000, 100.00000000, 0 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U491 )))
                            {
                                TASK_LOOK_AT_COORD( l_U491, 900, 65036, 20, -2, 2 );
                                sub_1663( ref l_U593, 0 );
                                sub_26420( "R11_SMOKE", ref l_U593, 7, 1 );
                            }
                            sub_30129();
                            l_U673 = 1;
                        }
                    }
                }
                else if (NOT (sub_28597( l_U593 )))
                {
                    if (COMPARE_STRING( ref l_U599, "R11_B1BV1" ))
                    {
                        sub_1663( ref l_U593, 1 );
                    }
                    else
                    {
                        sub_30465( ref l_U593 );
                    }
                }
                if (DOES_BLIP_EXIST( l_U488 ))
                {
                    REMOVE_BLIP( l_U488 );
                }
                if (l_U591 == 0)
                {
                    if (sub_28070( l_U491 ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), l_U505._fU0, l_U505._fU4, l_U505._fU8, 25.00000000, 25.00000000, 10.00000000, l_U614 ))
                        {
                            if (NOT (IS_CHAR_IN_ANY_HELI( sub_1448() )))
                            {
                                if (sub_22368( 1, 1 ))
                                {
                                    if (l_U675)
                                    {
                                        l_U677 = "R11_DEPO";
                                    }
                                    else
                                    {
                                        l_U677 = "R11_APT";
                                    }
                                    SET_WIDESCREEN_BORDERS( 1 );
                                    l_U591 = 1;
                                }
                            }
                        }
                    }
                }
                else if (sub_31104())
                {
                    if ((sub_34126( l_U593 )) == -1)
                    {
                        if (l_U675)
                        {
                            PRINT_NOW( "R11003", 7500, 1 );
                            l_U591 = 0;
                            l_U481 = 4;
                        }
                        else
                        {
                            PRINT_NOW( "R11002", 7500, 1 );
                            l_U591 = 0;
                            l_U481 = 2;
                        }
                    }
                    else if (l_U675)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U490 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U511._fU0, l_U511._fU4, l_U511._fU8, ref l_U490 );
                            SET_ROUTE( l_U490, l_U615 );
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U489 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U508._fU0, l_U508._fU4, l_U508._fU8, ref l_U489 );
                        sub_27734( ref l_U489, 838.67630000, -286.34230000, 14.58750000, 0.00000000 );
                        SET_ROUTE( l_U489, l_U615 );
                    };;;
                    if (DOES_BLIP_EXIST( l_U488 ))
                    {
                        if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( l_U616, 922.09730000, -518.10250000, 13.81120000 ))
                        {
                            ;
                        }
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U616 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U617 );
                        REMOVE_BLIP( l_U488 );
                        l_U586 = 0;
                    }
                }
                if (g_U64691)
                {
                    if (NOT l_U675)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), l_U508._fU0, l_U508._fU4, l_U508._fU8, 20.00000000, 20.00000000, 15.00000000, l_U614 ))
                        {
                            l_U481 = 2;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), l_U508._fU0, l_U508._fU4, l_U508._fU8, 200.00000000, 200.00000000, 200.00000000, 0 ))
                {
                    REQUEST_MODEL( 584045690 );
                    REQUEST_MODEL( -100463043 );
                    SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, 1351182523, 584045690 );
                    SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, 829551370, -100463043 );
                    g_U64691 = 1;
                    sub_35330();
                    sub_35390();
                    g_U9890 = 1;
                }
            }
            else
            {
                sub_27910();
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U491 )))
            {
                if (sub_28070( l_U491 ))
                {
                    if (NOT l_U573)
                    {
                        if (NOT (sub_28597( l_U593 )))
                        {
                            if (NOT (sub_27489( l_U593 )))
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (sub_26420( "R11_B2", ref l_U593, 6, 1 ))
                                    {
                                        StrCopy( ref l_U599, "R11_B2", 16 );
                                        l_U573 = 1;
                                    }
                                }
                            }
                        }
                        else
                        {
                            sub_29191( ref l_U599, ref l_U593, 6, 1 );
                        }
                    }
                    if (l_U584)
                    {
                        if (NOT g_U64691)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), l_U508._fU0, l_U508._fU4, l_U508._fU8, 200.00000000, 200.00000000, 200.00000000, 0 ))
                            {
                                REQUEST_MODEL( 584045690 );
                                SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, 1351182523, 584045690 );
                                g_U64691 = 1;
                                sub_35330();
                                sub_35390();
                                g_U9890 = 1;
                                l_U584 = 0;
                                l_U673 = 0;
                            }
                        }
                        else
                        {
                            g_U9890 = 1;
                            l_U584 = 0;
                            l_U673 = 0;
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U491 )))
                    {
                        if (NOT l_U673)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), l_U508._fU0, l_U508._fU4, l_U508._fU8, 100.00000000, 100.00000000, 10.00000000, 0 ))
                            {
                                TASK_LOOK_AT_COORD( l_U491, 813, 65283, 17, -2, 2 );
                                sub_1663( ref l_U593, 0 );
                                sub_26420( "R11_PANIC", ref l_U593, 7, 1 );
                                l_U673 = 1;
                            }
                        }
                    }
                }
                else if (NOT (sub_28597( l_U593 )))
                {
                    sub_30465( ref l_U593 );
                }
                if (DOES_BLIP_EXIST( l_U489 ))
                {
                    REMOVE_BLIP( l_U489 );
                }
                if (l_U591 == 0)
                {
                    if (sub_28070( l_U491 ))
                    {
                        if (l_U676)
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U489 )))
                            {
                                PRINT_NOW( "R11002", 7500, 1 );
                                ADD_BLIP_FOR_COORD( l_U508._fU0, l_U508._fU4, l_U508._fU8, ref l_U489 );
                                sub_27734( ref l_U489, 838.67630000, -286.34230000, 14.58750000, 0.00000000 );
                                SET_ROUTE( l_U489, l_U615 );
                            }
                        }
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), l_U508._fU0, l_U508._fU4, l_U508._fU8, 25.00000000, 25.00000000, 15.00000000, l_U614 ))
                        {
                            if (NOT (IS_CHAR_IN_ANY_HELI( sub_1448() )))
                            {
                                if (sub_22368( 1, 1 ))
                                {
                                    if (DOES_BLIP_EXIST( l_U489 ))
                                    {
                                        REMOVE_BLIP( l_U489 );
                                    }
                                    if (l_U676)
                                    {
                                        l_U677 = "R11_DEPO";
                                    }
                                    else
                                    {
                                        l_U677 = "R11_APT";
                                    }
                                    SET_WIDESCREEN_BORDERS( 1 );
                                    SETTIMERB( 0 );
                                    l_U591 = 1;
                                }
                            }
                        }
                    }
                }
                else if (sub_36989())
                {
                    if (l_U676)
                    {
                        if ((sub_34126( l_U593 )) == -1)
                        {
                            PRINT_NOW( "R11003", 7500, 1 );
                            l_U591 = 0;
                            l_U481 = 4;
                        }
                        else if (NOT (DOES_BLIP_EXIST( l_U490 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U511._fU0, l_U511._fU4, l_U511._fU8, ref l_U490 );
                            SET_ROUTE( l_U490, l_U615 );
                        }
                    }
                    else if ((sub_34126( l_U593 )) == -1)
                    {
                        l_U591 = 0;
                        l_U481 = 1;
                    }
                    if (NOT (IS_CAR_DEAD( l_U567 )))
                    {
                        EXPLODE_CAR( l_U567, 1, 0 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -1150599089 );
                    }
                    l_U586 = 0;
                }
                else if (TIMERB() > 3500)
                {
                    if (NOT (IS_CAR_DEAD( l_U567 )))
                    {
                        EXPLODE_CAR( l_U567, 1, 0 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -1150599089 );
                    }
                };;;
            }
            else
            {
                sub_27910();
            }
            break;
            case 4:
            if (NOT (IS_CHAR_INJURED( l_U491 )))
            {
                if (sub_28070( l_U491 ))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (NOT l_U575)
                        {
                            if (g_U64689 == 0)
                            {
                                if (NOT (sub_28597( l_U593 )))
                                {
                                    if (NOT (sub_27489( l_U593 )))
                                    {
                                        if (sub_26420( "R11_B3AV1", ref l_U593, 6, 1 ))
                                        {
                                            StrCopy( ref l_U599, "R11_B3AV1", 16 );
                                            l_U575 = 1;
                                            SETTIMERA( 0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_29191( ref l_U599, ref l_U593, 6, 1 );
                                }
                            }
                            else if (g_U64689 == 1)
                            {
                                if (NOT (sub_28597( l_U593 )))
                                {
                                    if (NOT (sub_27489( l_U593 )))
                                    {
                                        if (sub_26420( "R11_B3V2", ref l_U593, 6, 1 ))
                                        {
                                            StrCopy( ref l_U599, "R11_B3V2", 16 );
                                            l_U575 = 1;
                                            SETTIMERA( 0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_29191( ref l_U599, ref l_U593, 6, 1 );
                                }
                            }
                            else if (g_U64689 == 2)
                            {
                                SAY_AMBIENT_SPEECH( l_U491, "LISTEN_TO_RADIO", 0, 0, 0 );
                                SETTIMERA( 0 );
                                l_U575 = 1;
                            };;;
                        }
                        else if (TIMERA() > 1000)
                        {
                            if (g_U64689 == 0)
                            {
                                if (NOT l_U577)
                                {
                                    if (NOT (sub_28597( l_U593 )))
                                    {
                                        if (NOT (sub_27489( l_U593 )))
                                        {
                                            GET_MOBILE_PHONE_TASK_SUB_TASK( l_U491, ref l_U632 );
                                            if (l_U632 != 1)
                                            {
                                                GET_SCRIPT_TASK_STATUS( l_U491, 53, ref l_U588 );
                                                if (l_U588 == 7)
                                                {
                                                    l_U674 = 1;
                                                    TASK_USE_MOBILE_PHONE( l_U491, 1 );
                                                    SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT( l_U491, 0 );
                                                }
                                            }
                                            else if (sub_26420( "R11_B3BV1", ref l_U593, 6, 1 ))
                                            {
                                                SET_CHAR_PROOFS( l_U491, 1, 0, 0, 0, 1 );
                                                StrCopy( ref l_U599, "R11_B3BV1", 16 );
                                                l_U577 = 1;
                                            }
                                        }
                                        else if (l_U674)
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U491, 53, ref l_U588 );
                                            if (l_U588 == 7)
                                            {
                                                sub_1663( ref l_U593, 0 );
                                            }
                                        }
                                    }
                                    else
                                    {
                                        sub_29191( ref l_U599, ref l_U593, 6, 1 );
                                    }
                                }
                                else if (NOT l_U578)
                                {
                                    if (NOT (sub_28597( l_U593 )))
                                    {
                                        if (NOT (sub_27489( l_U593 )))
                                        {
                                            TASK_USE_MOBILE_PHONE( l_U491, 0 );
                                            SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT( l_U491, 1 );
                                            SET_CHAR_PROOFS( l_U491, 0, 0, 0, 0, 0 );
                                            if (sub_26420( "R11_B3CV1", ref l_U593, 6, 1 ))
                                            {
                                                StrCopy( ref l_U599, "R11_B3CV1", 16 );
                                                l_U578 = 1;
                                            }
                                        }
                                        else
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U491, 53, ref l_U588 );
                                            if (l_U588 == 7)
                                            {
                                                sub_1663( ref l_U593, 0 );
                                                l_U578 = 1;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        sub_29191( ref l_U599, ref l_U593, 6, 1 );
                                    }
                                }
                            }
                        }
                    }
                    if (l_U591 == 0)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U490 )))
                        {
                            PRINT_NOW( "R11003", 7500, 1 );
                            ADD_BLIP_FOR_COORD( l_U511._fU0, l_U511._fU4, l_U511._fU8, ref l_U490 );
                            SET_ROUTE( l_U490, l_U615 );
                        }
                    }
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), l_U511._fU0, l_U511._fU4, l_U511._fU8, l_U581, l_U581, l_U581, 1 ))
                    {
                        if (sub_22368( 1, 1 ))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1448() ))
                            {
                                if (sub_22194())
                                {
                                    if (DOES_BLIP_EXIST( l_U490 ))
                                    {
                                        REMOVE_BLIP( l_U490 );
                                    }
                                    sub_22740();
                                    SET_WIDESCREEN_BORDERS( 1 );
                                    l_U578 = 1;
                                    l_U577 = 1;
                                    BEGIN_CAM_COMMANDS( ref l_U586 );
                                    if (NOT (DOES_CAM_EXIST( l_U607 )))
                                    {
                                        CREATE_CAM( 14, ref l_U608 );
                                        CREATE_CAM( 14, ref l_U609 );
                                        SET_CAM_POS( l_U608, 583.86900000, 1405.40300000, 10.43329000 );
                                        SET_CAM_ROT( l_U608, 11.68434000, -0.00000000, -121.83700000 );
                                        SET_CAM_FOV( l_U608, 45.00000000 );
                                        SET_CAM_POS( l_U609, 583.86900000, 1405.40300000, 10.43329000 );
                                        SET_CAM_ROT( l_U609, 32.76916000, -0.00000100, -110.83620000 );
                                        SET_CAM_FOV( l_U609, 55.00000000 );
                                        CREATE_CAM( 3, ref l_U607 );
                                        SET_CAM_INTERP_STYLE_CORE( l_U607, l_U608, l_U609, 4000, 0 );
                                        SET_CAM_INTERP_STYLE_DETAILED( l_U607, 1, 0, 1, 1 );
                                        SET_CAM_ACTIVE( l_U607, 1 );
                                        SET_CAM_PROPAGATE( l_U607, 1 );
                                        SET_CAM_FOV( l_U607, 15.00000000 );
                                        CLEAR_AREA_OF_CARS( 583.86900000, 1405.40300000, 10.43329000, 15.00000000 );
                                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    }
                                    CLEAR_AREA( 595.70280000, 1401.08700000, 9.95820100, 25.00000000, 1 );
                                    l_U481 = 5;
                                }
                            }
                            else if (DOES_BLIP_EXIST( l_U490 ))
                            {
                                REMOVE_BLIP( l_U490 );
                            }
                            sub_22740();
                            SET_WIDESCREEN_BORDERS( 1 );
                            l_U578 = 1;
                            l_U577 = 1;
                            BEGIN_CAM_COMMANDS( ref l_U586 );
                            if (NOT (DOES_CAM_EXIST( l_U607 )))
                            {
                                CREATE_CAM( 14, ref l_U608 );
                                CREATE_CAM( 14, ref l_U609 );
                                SET_CAM_POS( l_U608, 583.86900000, 1405.40300000, 10.43329000 );
                                SET_CAM_ROT( l_U608, 11.68434000, -0.00000000, -121.83700000 );
                                SET_CAM_FOV( l_U608, 45.00000000 );
                                SET_CAM_POS( l_U609, 583.86900000, 1405.40300000, 10.43329000 );
                                SET_CAM_ROT( l_U609, 32.76916000, -0.00000100, -110.83620000 );
                                SET_CAM_FOV( l_U609, 45.00000000 );
                                CREATE_CAM( 3, ref l_U607 );
                                SET_CAM_INTERP_STYLE_CORE( l_U607, l_U608, l_U609, 4000, 0 );
                                SET_CAM_INTERP_STYLE_DETAILED( l_U607, 1, 0, 1, 1 );
                                SET_CAM_ACTIVE( l_U607, 1 );
                                SET_CAM_PROPAGATE( l_U607, 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            }
                            CLEAR_AREA( 595.70280000, 1401.08700000, 9.95820100, 3.00000000, 1 );
                            l_U481 = 5;;
                        }
                    }
                }
                else if (NOT (sub_28597( l_U593 )))
                {
                    sub_30465( ref l_U593 );
                }
                if (DOES_BLIP_EXIST( l_U490 ))
                {
                    REMOVE_BLIP( l_U490 );
                }
            }
            else
            {
                sub_27910();
            }
            break;
            case 5:
            if (sub_43064())
            {
                sub_6047();
            }
            break;
        }
    }
    return;
}

void sub_519(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_538();
    return;
}

void sub_538()
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

void sub_640()
{
    if (g_U0)
    {
        return;
    }
    if (NOT (g_U10981[g_U26746]._fU140 == 0))
    {
        return;
    }
    g_U10981[g_U26746]._fU140 = 1;
    g_U26745 = 0;
    return;
}

void sub_723(unknown uParam0)
{
    REQUEST_MODEL( sub_734( uParam0 ) );
    return;
}

int sub_734(unknown uParam0)
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
    sub_1397( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_1397(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1448()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1497(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_1581( "\n PED NUMBER ", uParam0 );
    sub_1621( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_1581(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1621(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1663(int iParam0, unknown uParam1)
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

void sub_1787()
{
    sub_1796();
    return;
}

void sub_1796()
{
    int iVar2;

    iVar2 = 0;
    sub_1810( iVar2 );
    sub_2965( iVar2 );
    return;
}

void sub_1810(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1854();
        sub_2015();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_2123();
            sub_2162();
        }
    }
    sub_2238();
    sub_2339();
    uVar5 = sub_2452( uParam0 );
    sub_2872( uVar5, 0 );
    return;
}

void sub_1854()
{
    sub_1868( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1968();
    }
    return;
}

void sub_1868(int iParam0)
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

void sub_1968()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_2015()
{
    sub_2024();
    return;
}

void sub_2024()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2123()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_2162()
{
    sub_2171();
    return;
}

void sub_2171()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2238()
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

void sub_2339()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_2361();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_2361()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_2452(unknown uParam0)
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
    sub_1397( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2872(int iParam0, boolean bParam1)
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

void sub_2965(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2974();
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
        sub_3749();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2974()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_3012( 5, g_U569[I] )) == 1))
        {
            if ((sub_3012( 1, g_U569[I] )) != 0)
            {
                sub_3298( I );
            }
        }
    }
    if (NOT sub_3464())
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

int sub_3012(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_3298(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_3383( g_U569 - 1 );
    return;
}

void sub_3383(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_3464()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_3012( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3749()
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

void sub_3876()
{
    UNREGISTER_SCRIPT_WITH_AUDIO();
    sub_1663( ref l_U593, 0 );
    sub_3902();
    if (g_U9890 == 1)
    {
        g_U9890 = 0;
    }
    if (l_U570)
    {
        if (g_U64687 == 0)
        {
            g_U64687 = 1;
        }
        else if (g_U64687 == 1)
        {
            g_U64687 = 2;
        }
    }
    if (l_U575)
    {
        if (g_U64689 == 0)
        {
            g_U64689 = 1;
        }
        else if (g_U64689 == 1)
        {
            g_U64689 = 2;
        }
    }
    if (NOT g_U15654[33])
    {
        sub_4164();
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3902()
{
    if (IS_PLAYER_PLAYING( sub_3911() ))
    {
        SET_PLAYER_CONTROL( sub_3911(), 1 );
    }
    sub_3967();
    return;
}

void sub_3911()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3967()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_4164()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( sub_1448() )))
    {
        if (g_U64691)
        {
            if ((IS_SCREEN_FADED_IN()) || (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), 822.56290000, -270.34200000, 15.61570000, 150.00000000, 150.00000000, 150.00000000, 1 )))
            {
                GET_GAME_VIEWPORT_ID( ref uVar2 );
                if (NOT (CAM_IS_SPHERE_VISIBLE( uVar2, 822.56290000, -270.34200000, 15.61570000, 75.00000000 )))
                {
                    SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, 584045690, 1351182523 );
                    SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, -100463043, 829551370 );
                    g_U64691 = 0;
                    SET_TAXI_GARAGE_RADIO_STATE( 1 );
                }
            }
            else
            {
                SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, 584045690, 1351182523 );
                SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, -100463043, 829551370 );
                g_U64691 = 0;
                SET_TAXI_GARAGE_RADIO_STATE( 1 );
            }
        }
        if (g_U64690)
        {
            if ((IS_SCREEN_FADED_IN()) || (LOCATE_CHAR_ANY_MEANS_3D( sub_1448(), 896.52000000, -502.84000000, 19.48000000, 150.00000000, 150.00000000, 150.00000000, 1 )))
            {
                GET_GAME_VIEWPORT_ID( ref uVar2 );
                if (NOT (CAM_IS_SPHERE_VISIBLE( uVar2, 896.52000000, -502.84000000, 19.48000000, 75.00000000 )))
                {
                    SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, 180309935, -1334627284 );
                    SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, -375500503, 483863024 );
                    g_U64690 = 0;
                }
            }
            else
            {
                SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, 180309935, -1334627284 );
                SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, -375500503, 483863024 );
                g_U64690 = 0;
            }
        }
    }
    return;
}

void sub_4821(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4857())
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

int sub_4857()
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

void sub_5048()
{
    if (NOT (sub_5058( 0 )))
    {
        sub_723( 0 );
    }
    return;
}

void sub_5058(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_734( uParam0 ) );
}

void sub_5143()
{
    return;
}

int sub_5160()
{
    if (IS_CAR_DEAD( l_U497 ))
    {
        REQUEST_MODEL( -1932515764 );
        if (HAS_MODEL_LOADED( -1932515764 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_5247()
{
    CLEAR_AREA( l_U498._fU0, l_U498._fU4, l_U498._fU8, 5.00000000, 1 );
    CREATE_CAR( -1932515764, l_U498._fU0, l_U498._fU4, l_U498._fU8, ref l_U497, 1 );
    SET_CAR_COORDINATES( l_U497, l_U498._fU0, l_U498._fU4, l_U498._fU8 );
    SET_CAR_HEADING( l_U497, l_U501 );
    LOCK_CAR_DOORS( l_U497, 2 );
    SUPPRESS_CAR_MODEL( -1932515764 );
    SET_VEHICLE_DIRT_LEVEL( l_U497, 15.90000000 );
    CHANGE_CAR_COLOUR( l_U497, 0, 1 );
    SET_EXTRA_CAR_COLOURS( l_U497, 1, 0 );
    SET_CAR_CAN_BE_VISIBLY_DAMAGED( l_U497, 0 );
    SET_CAR_PROOFS( l_U497, 1, 0, 0, 0, 0 );
    return;
}

void sub_5500()
{
    if (l_U591 == 0)
    {
        if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_1448() )))
            {
                if (l_U580)
                {
                    if (l_U481 == 0)
                    {
                        CLEAR_PRINTS();
                        SET_CHAR_COORDINATES( sub_1448(), 902.83590000, 577.82590000, 21.26962000 );
                        LOAD_SCENE( l_U502._fU0, l_U502._fU4, l_U502._fU8 );
                    }
                    else if (l_U481 == 1)
                    {
                        l_U570 = 1;
                        l_U571 = 1;
                        sub_1663( ref l_U593, 0 );
                        CLEAR_PRINTS();
                        SET_CHAR_COORDINATES( sub_1448(), l_U505._fU0, l_U505._fU4, l_U505._fU8 );
                        LOAD_SCENE( l_U505._fU0, l_U505._fU4, l_U505._fU8 );
                    }
                    else if (l_U481 == 2)
                    {
                        l_U573 = 1;
                        sub_1663( ref l_U593, 0 );
                        CLEAR_PRINTS();
                        SET_CHAR_COORDINATES( sub_1448(), l_U508._fU0, l_U508._fU4, l_U508._fU8 );
                        LOAD_SCENE( l_U508._fU0, l_U508._fU4, l_U508._fU8 );
                    }
                    else if (l_U481 == 4)
                    {
                        l_U575 = 1;
                        sub_1663( ref l_U593, 0 );
                        CLEAR_PRINTS();
                        SET_CHAR_COORDINATES( sub_1448(), l_U511._fU0, l_U511._fU4, l_U511._fU8 );
                        LOAD_SCENE( l_U511._fU0, l_U511._fU4, l_U511._fU8 );
                    };;;;
                    l_U580 = 0;
                }
            }
        }
        else
        {
            l_U580 = 1;
        }
    }
    return;
}

void sub_5972()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        sub_5994();
        sub_6047();
    }
    return;
}

void sub_5994()
{
    if (g_U0)
    {
        return;
    }
    g_U10981[g_U26746]._fU140 = 2;
    g_U26745 = 1;
    return;
}

void sub_6047()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 35 );
    sub_6067( 1 );
    CLEAR_WANTED_LEVEL( sub_3911() );
    sub_6735( 17 );
    UNLOCK_MISSION_NEWS_STORY( 17 );
    ENABLE_SAVE_HOUSE( g_U9943[0]._fU4, 0 );
    ENABLE_SAVE_HOUSE( g_U9943[1]._fU4, 1 );
    g_U15654[33] = 1;
    AWARD_ACHIEVEMENT( 16 );
    sub_9405();
    sub_3876();
    return;
}

void sub_6067(unknown uParam0)
{
    if (g_U1916[uParam0] == 0)
    {
        sub_6103( ref g_U1924[uParam0], 4, 0, 0 );
        g_U1916[uParam0] = 1;
    }
    return;
}

void sub_6103(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_6156( iParam0, uParam1, uParam2 );
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
        sub_6288( iParam0 + 0 );
    }
    return;
}

void sub_6156(int iParam0, int iParam1, int iParam2)
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
        sub_6288( iParam0 + 0 );
    }
    return;
}

void sub_6288(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_6319( iParam0->_fU4 )))
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

int sub_6319(unknown uParam0)
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

void sub_6735(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_6822( iParam0 ))
    {
        sub_7288( iParam0 );
    }
    return;
}

int sub_6822(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_6103( ref uVar3, 1, 0, 0 );
    sub_6895( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_7108( "\n ----------------------------------------------------------------" );
    sub_1581( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_7108( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_6895(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_7108(unknown uParam0)
{
    return;
}

void sub_7288(unknown uParam0)
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
        sub_7499( 20, 6, 16383, 16383, ref uVar4 );
        sub_8175( ref uVar4, 7 );
        sub_8206( ref uVar4, 0 );
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
        sub_7499( 20, 7, 9, 16383, ref uVar4 );
        sub_8175( ref uVar4, 7 );
        sub_8206( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_7499(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_7523( uParam0, 0, iParam4 + 0 );
    sub_7523( uParam1, 1, iParam4 + 0 );
    sub_7523( uParam2, 2, iParam4 + 0 );
    sub_7523( uParam3, 3, iParam4 + 0 );
    sub_7523( 0, 4, iParam4 + 0 );
    sub_7523( 1, 5, iParam4 + 0 );
    sub_7523( 65535, 6, iParam4 + 0 );
    sub_7523( 0, 12, iParam4 + 0 );
    sub_7523( 0, 11, iParam4 + 0 );
    sub_7523( 0, 14, iParam4 + 0 );
    sub_7523( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_7523( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_7523( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_7523(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_8175(int iParam0, unknown uParam1)
{
    sub_7523( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_8206(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_8246())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_8933( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_8732( iVar5 );
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

int sub_8246()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_8280( 5, g_U968[I] )) == 7)
        {
            sub_8732( I );
            return 1;
        }
    }
    return 0;
}

int sub_8280(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_8732(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_8805( 39 );
    return;
}

void sub_8805(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_8933(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_8994( uParam0, g_U968[Result] ))
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

int sub_8994(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_9405()
{
    sub_9414();
    return;
}

void sub_9414()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_9432();
    sub_9491( iVar2, iVar3, iVar4 );
    return;
}

void sub_9432()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_9491(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_9522( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_9522(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_9618( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_9618( ref cVar9 );
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
            sub_9618( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_9618( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_9618( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_9618( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_10195( iParam0, iVar7 );;;
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
                sub_10592( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_10592( 0, 4 );
            }
        }
    }
    if (NOT (sub_10681( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3911(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3911() );
    }
    sub_2974();
    bVar27 = true;
    uVar28 = sub_10195( iParam0, iVar7 );
    uVar29 = sub_2452( iParam0 );
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
                sub_20057( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_20487();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_20572( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_20629( iParam0 );
                sub_20668( 0 );
                sub_2872( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_20776();
        }
    }
    if (bParam2)
    {
        sub_20487();
        sub_20864();
        sub_20668( 0 );
    }
    if (bParam3)
    {
        sub_20487();
        sub_20904();
        sub_20668( 0 );
        sub_2872( uVar29, 0 );
    }
    sub_2339();
    return;
}

void sub_9618(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_10195(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1397( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_10592(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_10681(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_10889( uParam1 );
        break;
        case 1:
        bVar8 = sub_12967( uParam1 );
        break;
        case 2:
        bVar8 = sub_13193( uParam1 );
        break;
        case 3:
        bVar8 = sub_13343( uParam1 );
        break;
        case 4:
        bVar8 = sub_13621( uParam1 );
        break;
        case 5:
        bVar8 = sub_13924( uParam1 );
        break;
        case 6:
        bVar8 = sub_14123( uParam1 );
        break;
        case 7:
        bVar8 = sub_14349( uParam1 );
        break;
        case 8:
        bVar8 = sub_14584( uParam1 );
        break;
        case 9:
        bVar8 = sub_14959( uParam1 );
        break;
        case 10:
        bVar8 = sub_15206( uParam1 );
        break;
        case 11:
        bVar8 = sub_15345( uParam1 );
        break;
        case 12:
        bVar8 = sub_15644( uParam1 );
        break;
        case 13:
        bVar8 = sub_15872( uParam1 );
        break;
        case 14:
        bVar8 = sub_16159( uParam1 );
        break;
        case 15:
        bVar8 = sub_16441( uParam1 );
        break;
        case 16:
        bVar8 = sub_16723( uParam1 );
        break;
        case 17:
        bVar8 = sub_16924( uParam1 );
        break;
        case 18:
        bVar8 = sub_16997( uParam1 );
        break;
        case 19:
        bVar8 = sub_17211( uParam1 );
        break;
        case 20:
        bVar8 = sub_17464( uParam1 );
        break;
        case 21:
        bVar8 = sub_17711( uParam1 );
        break;
        case 22:
        bVar8 = sub_17912( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_12572( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_10195( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_18235( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_10889(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_11168( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_11168( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_11168( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_11168( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_11168( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_11168( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_11168( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_11168( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_11168( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_11168( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_11168( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_11168( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_11168( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_11168( iVar3, 0, 3, 1, 0, 0 );
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
        sub_11168( iVar3, 0, sub_12450(), sub_12716(), 0, 0 );
        break;
        default:
        sub_12875( "Friend 1", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Friend 1", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_11168(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_11179( uParam1 );
    sub_11353( uParam0, 0, uParam2 );
    sub_11353( uParam0, 1, uParam3 );
    sub_11353( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_9432();
    return;
}

void sub_11179(unknown uParam0)
{
    ADD_SCORE( sub_3911(), uParam0 );
    sub_11204( uParam0 );
    return;
}

void sub_11204(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1397( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_11353(unknown uParam0, int iParam1, int iParam2)
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
        sub_11510( uParam0 );
    }
    return;
}

void sub_11510(unknown uParam0)
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

int sub_12450()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12572( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_12572(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_12716()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12572( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_12875(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_12967(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11168( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_12875( "Contact 2", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 2", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13193(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_11168( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_12875( "Girl 3", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Girl 3", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13343(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_11168( iVar3, 0, sub_12450(), sub_12716(), 0, 0 );
        break;
        default:
        sub_12875( "Friend 4", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Friend 4", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13621(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11168( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11168( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11168( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11168( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_12875( "Contact 5", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 5", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13924(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_12875( "Contact 7", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 7", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14123(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11168( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_12875( "Contact 7b", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 7b", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14349(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_11168( iVar3, 0, sub_12450(), sub_12716(), 0, 0 );
        break;
        default:
        sub_12875( "Friend 8", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Friend 8", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14584(unknown uParam0)
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
        sub_11168( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_11168( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_11168( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_11168( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_11168( iVar3, 0, sub_12450(), sub_12716(), 0, 0 );
        break;
        default:
        sub_12875( "Friend 9", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Friend 9", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14959(unknown uParam0)
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
        sub_11168( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_11168( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_11168( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_12875( "Contact 10", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_12875( "Contact 10", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15206(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_12875( "Girl 11", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Girl 11", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15345(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11168( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11168( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11168( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11168( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_11168( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_12875( "Contact 12", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 12", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15644(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11168( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_12875( "Contact 13", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 13", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15872(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_11168( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_11168( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_11168( iVar3, 0, sub_12450(), sub_12716(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_12875( "Friend 15", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Friend 15", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16159(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11168( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11168( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11168( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_12875( "Contact 16", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 16", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16441(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11168( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_11168( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_11168( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_12875( "Contact 18", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 18", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16723(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_12875( "Contact 19", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 19", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16924(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_12875( "Girl 20", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16997(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_12875( "Contact 21", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 21", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17211(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11168( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_11168( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_12875( "Contact 22", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 22", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17464(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_11168( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_11168( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_11168( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_12875( "Contact 24", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 24", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17711(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_11168( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_11168( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_11168( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_12875( "Contact 25", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12875( "Contact 25", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17912(unknown uParam0)
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
        sub_11168( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_12875( "Girl 26", 1 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_12875( "Girl 26", 0 );
        sub_11168( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_18235(int iParam0, int iParam1)
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
    if (sub_18283( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_19014( iParam1 );
    }
    return;
}

int sub_18283(int iParam0, int iParam1)
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
            sub_18423( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_18423(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_18605( 0 );
    return;
}

void sub_18605(boolean bParam0)
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
        sub_18860();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_18860()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_19014(int iParam0)
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
        sub_19347( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_19347( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_19347( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_19347( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_19347( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_19347( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_19347( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_19347( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_19347( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_19347( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_19347( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_19347( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_19347( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_19347( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_19347( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_19347( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_19347( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_19347( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_19347( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_19347(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_20057(unknown uParam0, unknown uParam1)
{
    sub_20076( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_20076(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_20487()
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

int sub_20572(int iParam0, int iParam1)
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

void sub_20629(unknown uParam0)
{
    sub_2238();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_20668(unknown uParam0)
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

void sub_20776()
{
    sub_20785();
    return;
}

void sub_20785()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_20864()
{
    sub_20785();
    return;
}

void sub_20904()
{
    sub_20785();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_21013()
{
    if ((l_U481 == 5) || ((l_U481 == 4) || ((l_U481 == 3) || ((l_U481 == 2) || (l_U481 == 1)))))
    {
        if (NOT (IS_CHAR_INJURED( l_U491 )))
        {
            if (sub_21089( l_U491 ))
            {
                sub_21182( l_U491 );
            }
        }
        if (NOT (IS_CHAR_INJURED( sub_1448() )))
        {
            if (sub_21089( sub_1448() ))
            {
                sub_21182( sub_1448() );
            }
        }
    }
    return;
}

int sub_21089(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( uParam0, 895.30820000, -498.04540000, 22.69030000, 5.00000000, 5.00000000, 5.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_21182(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                EXPLODE_CAR( uVar4, 1, 0 );
            }
        }
        else
        {
            uVar3 = START_CHAR_FIRE( uParam0 );
            SET_CHAR_HEALTH( uParam0, 0 );
        }
    }
    return;
}

void sub_21341()
{
    unknown uVar2;

    if (l_U584)
    {
        for ( l_U583 = 0; l_U583 < 5; l_U583++ )
        {
            DRAW_LIGHT_WITH_RANGE( l_U514[l_U583]._fU0 + 1.00000000, l_U514[l_U583]._fU4, l_U514[l_U583]._fU8 + 1.00000000, 255, 77, 0, 5.00000000, sub_21454( 14.00000000, 22.00000000 ) );
        }
    }
    if (l_U585)
    {
        for ( l_U583 = 0; l_U583 < 4; l_U583++ )
        {
            DRAW_LIGHT_WITH_RANGE( l_U530[l_U583]._fU0, l_U530[l_U583]._fU4, l_U530[l_U583]._fU8 + 1.00000000, 255, 77, 0, 10.00000000, sub_21454( 14.00000000, 22.00000000 ) );
        }
    }
    return;
}

void sub_21454(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_21740()
{
    if (NOT (IS_CAR_DEAD( l_U497 )))
    {
        if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U497, sub_1448() ))
        {
            if ((IS_CAR_ON_FIRE( l_U497 )) || ((IS_CHAR_IN_ANY_CAR( sub_1448() )) || (IS_CHAR_SHOOTING( sub_1448() ))))
            {
                if (IS_CAR_DOOR_DAMAGED( l_U497, 5 ))
                {
                    sub_1663( ref l_U593, 0 );
                    PRINT( "R11007", 7500, 1 );
                    sub_21880();
                }
            }
        }
    }
    else
    {
        sub_1663( ref l_U593, 0 );
        PRINT( "R11007", 7500, 1 );
        sub_21880();
    }
    return;
}

void sub_21880()
{
    sub_4164();
    if (g_U9930 > 2)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3911(), 150 );
        SAY_AMBIENT_SPEECH( sub_1448(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_21956();
    sub_1663( ref l_U593, 0 );
    sub_3876();
    return;
}

void sub_21956()
{
    sub_21965();
    return;
}

void sub_21965()
{
    int iVar2;

    iVar2 = 0;
    sub_21979( iVar2 );
    sub_2965( iVar2 );
    return;
}

void sub_21979(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3911(), 150 );
    CLEAR_HELP();
    sub_1810( uParam0 );
    return;
}

int sub_22194()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( sub_1448() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref uVar2 );
            if ((NOT (IS_CAR_ON_FIRE( uVar2 ))) AND (IS_VEH_DRIVEABLE( uVar2 )))
            {
                GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
                if (NOT (IS_CAR_MODEL( uVar2, 1491375716 )))
                {
                    if (iVar3 == sub_1448())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_22368(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1448()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1448() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3911() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3911() )))
    {
        return 0;
    }
    return 1;
}

void sub_22740()
{
    if (IS_PLAYER_PLAYING( sub_3911() ))
    {
        SET_PLAYER_CONTROL( sub_3911(), 0 );
    }
    return;
}

void sub_23155()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
    {
        if (NOT (sub_23186( sub_1448() )))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref uVar2 );
            SOUND_CAR_HORN( uVar2, 300 );
            WAIT( 500 );
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref uVar2 );
            SOUND_CAR_HORN( uVar2, 500 );
            WAIT( 1500 );
        }
    }
    return;
}

int sub_23186(int iParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if ((IS_CAR_MODEL( uVar3, -1627000575 )) || ((IS_CAR_MODEL( uVar3, -1900572838 )) || ((IS_CAR_MODEL( uVar3, -350085182 )) || ((IS_CAR_MODEL( uVar3, 2046537925 )) || ((IS_CAR_MODEL( uVar3, 1911513875 )) || ((IS_CAR_MODEL( uVar3, 148777611 )) || ((IS_CAR_MODEL( uVar3, 1938952078 )) || ((IS_CAR_MODEL( uVar3, 1127131465 )) || (IS_CAR_MODEL( uVar3, 1171614426 ))))))))))
            {
                if (iParam0 == sub_1448())
                {
                    if (sub_22194())
                    {
                        return 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_24183()
{
    float fVar2;

    l_U502 = {905.62870000, 586.29680000, 22.27710000};
    fVar2 = 123.97500000;
    if (sub_5058( 0 ))
    {
        sub_24259( 0, ref l_U491, l_U502._fU0, l_U502._fU4, l_U502._fU8, fVar2 );
        REMOVE_BLIP( l_U487 );
        SET_BLIP_AS_FRIENDLY( l_U487, 1 );
        SET_GROUP_MEMBER( l_U582, l_U491 );
        SET_PED_DIES_WHEN_INJURED( l_U491, 1 );
        if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U496 );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U491, l_U496, 0 );
            SET_CAR_ENGINE_ON( l_U496, 1, 1 );
            if (IS_CHAR_ON_ANY_BIKE( l_U491 ))
            {
                GIVE_PED_HELMET_WITH_OPTS( l_U491, 0 );
            }
        }
        COPY_GROUP_CHAR_DECISION_MAKER( 65537, ref l_U672 );
        SET_GROUP_CHAR_DECISION_MAKER( l_U491, l_U672 );
        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U491, 0 );
        sub_1497( 1, l_U491, "Roman", 0 );
        SET_ROMANS_MOOD( 2 );
    }
    return;
}

void sub_24259(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_734( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_24309( uParam0, (uParam1^) );
    return;
}

void sub_24309(unknown uParam0, unknown uParam1)
{
    sub_24321( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_24321(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_24415( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_24959( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_24415(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_24959(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_24415( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_24415( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_24415( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_24415( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_24415( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_24415( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_24415( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_24415( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_24415( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_24415( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_24415( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_24415( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_24415( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_26141()
{
    REQUEST_MODEL( l_U616 );
    REQUEST_MODEL( l_U617 );
    REQUEST_ANIMS( "MISSROMAN11" );
    while ((NOT (HAVE_ANIMS_LOADED( "MISSROMAN11" ))) || ((NOT (HAS_MODEL_LOADED( l_U617 ))) || (NOT (HAS_MODEL_LOADED( l_U616 )))))
    {
        SUPPRESS_CAR_MODEL( l_U616 );
        WAIT( 0 );
    }
    return;
}

void sub_26420(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_26443( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_26443(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_26497( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_26497(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_26519( iParam1 )))
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
    sub_27199( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_26519(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7108( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_7108( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_7108( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_27199(int iParam0, int iParam1)
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

void sub_27456()
{
    if (NOT (DOES_BLIP_EXIST( l_U488 )))
    {
        if (NOT (sub_27489( l_U593 )))
        {
            PRINT_NOW( "R11001", 7500, 1 );
            ADD_BLIP_FOR_COORD( l_U505._fU0, l_U505._fU4, l_U505._fU8, ref l_U488 );
            sub_27734( ref l_U488, 903.44490000, -449.68000000, 14.54800000, 180.00000000 );
            SET_ROUTE( l_U488, l_U615 );
        }
    }
    return;
}

int sub_27489(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_7108( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7108( "\n speech is not playing" );
    }
    return 0;
}

void sub_27734(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_27910()
{
    sub_1663( ref l_U593, 0 );
    PRINT( "R11007", 7500, 1 );
    if (g_U9890 == 1)
    {
        g_U9890 = 0;
    }
    sub_27974( 0, l_U491, 0 );
    sub_21880();
    return;
}

void sub_27974(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

int sub_28070(unknown uParam0)
{
    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
    {
        if (IS_GROUP_MEMBER( uParam0, l_U582 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1448(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                if (DOES_BLIP_EXIST( l_U487 ))
                {
                    REMOVE_BLIP( l_U487 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1448(), 0 );
                }
                return 1;
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( uParam0 );
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U487 )))
        {
            PRINT_NOW( "R11004", 7500, 1 );
            ADD_BLIP_FOR_CHAR( uParam0, ref l_U487 );
            SET_BLIP_AS_FRIENDLY( l_U487, 1 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1448(), 1 );
        }
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1448(), uParam0, 12.00000000, 12.00000000, 12.00000000, 0 ))
        {
            SET_GROUP_MEMBER( l_U582, uParam0 );
        }
    }
    return 0;
}

void sub_28597(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

int sub_28662()
{
    if (NOT (IS_CHAR_INJURED( l_U491 )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U589 );
            if (IS_CHAR_IN_CAR( l_U491, l_U589 ))
            {
                return 1;
            }
        }
    }
    if (TIMERA() > 20000)
    {
        return 1;
    }
    return 0;
}

void sub_29191(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_29214( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_29214(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_26497( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_29469()
{
    l_U514[0] = {896.10000000, -493.99000000, 19.29000000};
    l_U514[1] = {896.10000000, -496.49000000, 19.29000000};
    l_U514[2] = {896.10000000, -502.93000000, 19.29000000};
    l_U514[3] = {896.10000000, -505.38000000, 19.29000000};
    l_U514[4] = {893.00000000, -499.00000000, 22.50000000};
    l_U583 = 0;
    for ( l_U583 = 0; l_U583 < 4; l_U583++ )
    {
        l_U555[l_U583] = START_PTFX( "smoke_plume_window", l_U514[l_U583], 0.00000000, 0.00000000, 270.00000000, 1065353216 );
        SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( l_U514[l_U583]._fU0, l_U514[l_U583]._fU4, l_U514[l_U583]._fU8, 1.00000000, 1464757494, 0 );
        l_U618[l_U583] = GET_SOUND_ID();
        PLAY_FIRE_SOUND_FROM_POSITION( l_U618[l_U583], l_U514[l_U583] );
    }
    l_U555[4] = START_PTFX( "smoke_roman11", l_U514[4], 0.00000000, 0.00000000, 0.00000000, 1065353216 );
    l_U618[4] = GET_SOUND_ID();
    PLAY_FIRE_SOUND_FROM_POSITION( l_U618[4], l_U514[4] );
    l_U584 = 1;
    return;
}

void sub_30129()
{
    unknown[6] uVar2;
    int I;
    vector[6] vVar10;
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

    array(ref uVar2, 6);
    array(ref vVar10, 6);
    vVar10[0] = {898.53190000, -509.99220000, 14.96970000};
    vVar10[1] = {899.17460000, -508.61470000, 14.99540000};
    vVar10[2] = {899.36360000, -506.28620000, 15.03970000};
    vVar10[3] = {899.95820000, -504.36720000, 15.07610000};
    vVar10[4] = {899.65780000, -502.11610000, 15.11900000};
    vVar10[5] = {899.69650000, -499.52660000, 15.16790000};
    if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
    {
        for ( I = 0; I < 6; I++ )
        {
            CREATE_RANDOM_CHAR( vVar10[I]._fU0, vVar10[I]._fU4, vVar10[I]._fU8, ref uVar2[I] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref uVar2[I] );
        }
    }
    return;
}

int sub_30465(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_7108( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_7108( "\n CONVERSATION PAUSED AT LINE " );
            sub_30621( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_7108( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_7108( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_7108( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_30621(unknown uParam0)
{
    return;
}

int sub_31104()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    switch (l_U484)
    {
        case 0:
        if (sub_22368( 1, 1 ))
        {
            sub_31169();
            if (sub_31248())
            {
                if (sub_22194())
                {
                    sub_22740();
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U613 );
                    GET_CAR_SPEED( l_U613, ref fVar9 );
                    if (fVar9 < 0.50000000)
                    {
                        if (NOT (IS_CHAR_ON_ANY_BIKE( sub_1448() )))
                        {
                            BEGIN_CAM_COMMANDS( ref l_U586 );
                            if (l_U586 > 0)
                            {
                                l_U484 = 1;
                                l_U486 = 1;
                            }
                        }
                        else
                        {
                            BEGIN_CAM_COMMANDS( ref l_U586 );
                            if (l_U586 > 0)
                            {
                                l_U484 = 1;
                                l_U486 = 0;
                            }
                        }
                        CLEAR_AREA_OF_CARS( 905.61370000, -500.43170000, 14.12300000, 15.00000000 );
                    }
                }
            }
            else
            {
                BEGIN_CAM_COMMANDS( ref l_U586 );
                if (l_U586 > 0)
                {
                    l_U484 = 1;
                    l_U486 = 2;
                }
            }
        }
        break;
        case 1:
        switch (l_U486)
        {
            case 0:
            if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U613 );
                SET_CAR_AS_MISSION_CAR( l_U613 );
                l_U486 = 2;
            }
            break;
            case 2:
            if ((NOT (IS_CHAR_DEAD( l_U491 ))) AND (NOT (IS_CHAR_DEAD( sub_1448() ))))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U613 );
                    if (NOT (IS_CAR_DEAD( l_U613 )))
                    {
                        SET_CAR_HEADING( l_U613, 197.82340000 );
                        SET_CAR_COORDINATES( l_U613, 907.77150000, -499.74590000, 14.06210000 );
                        TASK_EVERYONE_LEAVE_CAR( l_U613 );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U613 );
                    }
                    UNLOCK_RAGDOLL( l_U491, 0 );
                    if (NOT (DOES_CAM_EXIST( l_U605 )))
                    {
                        CREATE_CAM( 14, ref l_U605 );
                        SET_CAM_POS( l_U605, 898.80690000, -504.70250000, 15.38136000 );
                        SET_CAM_ROT( l_U605, -0.66882000, 0.00000000, -64.25924000 );
                        SET_CAM_ACTIVE( l_U605, 1 );
                        SET_CAM_PROPAGATE( l_U605, 1 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        SET_CAM_NEAR_DOF( l_U605, 5.00000000 );
                        SET_CAM_FAR_DOF( l_U605, 20.00000000 );
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( sub_1448(), 41, ref l_U588 );
                    if (l_U588 == 7)
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                        {
                            WARP_CHAR_FROM_CAR_TO_COORD( sub_1448(), 905.61370000, -500.43170000, 14.12300000 );
                        }
                        else
                        {
                            SET_CHAR_COORDINATES( sub_1448(), 905.61370000, -500.43170000, 14.12300000 );
                        }
                        SET_CHAR_HEADING( sub_1448(), 90.00000000 );
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1448(), 1.01500000, -0.28800000, -0.85000000, ref l_U610._fU0, ref l_U610._fU4, ref l_U610._fU8 );
                        if (IS_CHAR_IN_ANY_CAR( l_U491 ))
                        {
                            WARP_CHAR_FROM_CAR_TO_COORD( l_U491, l_U610._fU0, l_U610._fU4, l_U610._fU8 );
                        }
                        else
                        {
                            SET_CHAR_COORDINATES( l_U491, l_U610._fU0, l_U610._fU4, l_U610._fU8 );
                        }
                        SET_CHAR_HEADING( l_U491, 90.00000000 );
                        if (NOT (DOES_CAM_EXIST( l_U604 )))
                        {
                            if (DOES_CAM_EXIST( l_U605 ))
                            {
                                SET_CAM_ACTIVE( l_U605, 0 );
                                SET_CAM_PROPAGATE( l_U605, 0 );
                                DESTROY_CAM( l_U605 );
                            }
                            CREATE_CAM( 14, ref l_U604 );
                            SET_CAM_POS( l_U604, 910.63090000, -500.85200000, 16.36974000 );
                            SET_CAM_ROT( l_U604, -1.03854800, -0.00000000, 81.99387000 );
                            SET_CAM_ACTIVE( l_U604, 1 );
                            SET_CAM_PROPAGATE( l_U604, 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            SET_CAM_NEAR_DOF( l_U604, 5.00000000 );
                            SET_CAM_FAR_DOF( l_U604, 20.00000000 );
                        }
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_1448(), "NIKO_STOP_FLAT_FOOT", "MISSROMAN11", 4.00000000, 0, 1, 1, 0, 0 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U491, "ROMAN_STOP_FLAT_FOOT", "MISSROMAN11", 4.00000000, 0, 1, 1, 0, 0 );
                        l_U671 = 1;
                        sub_22740();
                        if (sub_26420( l_U677, ref l_U593, 6, 1 ))
                        {
                            StrCopy( ref l_U599, l_U677, 16 );
                            l_U484 = 2;
                        }
                    }
                }
            }
            break;
            case 1:
            if ((NOT (IS_CHAR_DEAD( l_U491 ))) AND (NOT (IS_CHAR_DEAD( sub_1448() ))))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U613 );
                    if (NOT (IS_CAR_DEAD( l_U613 )))
                    {
                        FREEZE_CAR_POSITION( l_U613, 1 );
                        SET_CAR_HEADING( l_U613, 197.82340000 );
                        SET_CAR_COORDINATES( l_U613, 905.87010000, -502.63130000, 13.81570000 );
                        GET_CAR_MODEL( l_U613, ref uVar8 );
                        GET_MODEL_DIMENSIONS( uVar8, ref uVar2, ref uVar5 );
                        if (NOT (IS_CHAR_IN_CAR( l_U491, l_U613 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U491, l_U613, 0 );
                        }
                        if (NOT (DOES_CAM_EXIST( l_U604 )))
                        {
                            CREATE_CAM( 14, ref l_U604 );
                            CREATE_CAM( 14, ref l_U605 );
                            l_U610._fU0 = -uVar5._fU0 + 0.50000000;
                            l_U610._fU4 = uVar5._fU4 + 0.50000000;
                            l_U610._fU8 = uVar5._fU8 + 0.50000000;
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U613, l_U610._fU0, l_U610._fU4, l_U610._fU8, ref l_U610._fU0, ref l_U610._fU4, ref l_U610._fU8 );
                            SET_CAM_POS( l_U605, l_U610._fU0, l_U610._fU4, l_U610._fU8 );
                            l_U610._fU0 = uVar5._fU0 + 0.50000000;
                            l_U610._fU4 = uVar5._fU4 / 2.00000000;
                            l_U610._fU8 = uVar5._fU8 + 1.00000000;
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U613, l_U610._fU0, l_U610._fU4, l_U610._fU8, ref l_U610._fU0, ref l_U610._fU4, ref l_U610._fU8 );
                            POINT_CAM_AT_COORD( l_U605, l_U610._fU0, l_U610._fU4, l_U610._fU8 );
                            l_U610._fU0 = -uVar5._fU0 + 0.50000000;
                            l_U610._fU4 = uVar5._fU4 + 1.00000000;
                            l_U610._fU8 = uVar5._fU8 / 2.00000000;
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U613, l_U610._fU0, l_U610._fU4, l_U610._fU8, ref l_U610._fU0, ref l_U610._fU4, ref l_U610._fU8 );
                            SET_CAM_POS( l_U604, l_U610._fU0, l_U610._fU4, l_U610._fU8 );
                            l_U610._fU0 = uVar5._fU0;
                            l_U610._fU4 = uVar5._fU4 / 2.00000000;
                            l_U610._fU8 = uVar5._fU8;
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U613, l_U610._fU0, l_U610._fU4, l_U610._fU8, ref l_U610._fU0, ref l_U610._fU4, ref l_U610._fU8 );
                            POINT_CAM_AT_COORD( l_U604, l_U610._fU0, l_U610._fU4, l_U610._fU8 );
                            CREATE_CAM( 3, ref l_U606 );
                            SET_CAM_INTERP_STYLE_CORE( l_U606, l_U605, l_U604, 6000, 0 );
                            SET_CAM_ACTIVE( l_U606, 1 );
                            SET_CAM_PROPAGATE( l_U606, 1 );
                            SET_CAM_FOV( l_U606, 35.00000000 );
                            SET_CAM_NEAR_DOF( l_U606, 2.00000000 );
                            SET_CAM_FAR_DOF( l_U606, 12.00000000 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        }
                        if (NOT l_U675)
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_1448(), "NIKO_STOP_FLAT_CAR", "MISSROMAN11", 4.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U491, "ROMAN_STOP_FLAT_CAR", "MISSROMAN11", 4.00000000, 0, 0, 0, 0, 0 );
                        }
                        sub_22740();
                        if (sub_26420( l_U677, ref l_U593, 6, 1 ))
                        {
                            StrCopy( ref l_U599, l_U677, 16 );
                            l_U484 = 2;
                        }
                    }
                }
            }
            break;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( sub_1448() )))
        {
            if (l_U586 > 0)
            {
                if (NOT (IS_CHAR_INJURED( l_U491 )))
                {
                    if (l_U671)
                    {
                        GET_SCRIPT_TASK_STATUS( sub_1448(), 83, ref l_U588 );
                        if (l_U588 == 7)
                        {
                            TASK_STAND_STILL( l_U491, -2 );
                            l_U671 = 0;
                        }
                    }
                }
                if ((sub_34084()) || (sub_33859()))
                {
                    SET_WIDESCREEN_BORDERS( 0 );
                    sub_3902();
                    if (NOT (IS_CHAR_DEAD( l_U491 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( l_U491 );
                            CLEAR_CHAR_SECONDARY_TASK( sub_1448() );
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U491 );
                            UNLOCK_RAGDOLL( l_U491, 1 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1448() );
                        }
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U613 );
                        FREEZE_CAR_POSITION( l_U613, 0 );
                    }
                    if (DOES_CAM_EXIST( l_U604 ))
                    {
                        SET_CAM_ACTIVE( l_U604, 0 );
                        SET_CAM_PROPAGATE( l_U604, 0 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DESTROY_CAM( l_U604 );
                    }
                    if (DOES_CAM_EXIST( l_U605 ))
                    {
                        SET_CAM_ACTIVE( l_U605, 0 );
                        SET_CAM_PROPAGATE( l_U605, 0 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DESTROY_CAM( l_U605 );
                    }
                    if (DOES_CAM_EXIST( l_U606 ))
                    {
                        SET_CAM_ACTIVE( l_U606, 0 );
                        SET_CAM_PROPAGATE( l_U606, 0 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DESTROY_CAM( l_U606 );
                    }
                    SET_CAM_BEHIND_PED( sub_1448() );
                    END_CAM_COMMANDS( ref l_U586 );
                    if (NOT l_U631)
                    {
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    }
                    else
                    {
                        l_U631 = 0;
                    }
                    SET_ROMANS_MOOD( 1 );
                    l_U676 = 1;
                    l_U484 = 3;
                }
            }
        }
        break;
        case 3:
        return 1;
        break;
    }
    return 0;
}

void sub_31169()
{
    if (NOT (IS_CHAR_INJURED( l_U491 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U491, 53, ref l_U588 );
        if (l_U588 == 1)
        {
            TASK_USE_MOBILE_PHONE( l_U491, 0 );
        }
    }
    return;
}

int sub_31248()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( l_U491 )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref uVar2 );
            if (IS_CHAR_SITTING_IN_CAR( l_U491, uVar2 ))
            {
                return 1;
            }
            else
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U491, uVar2, 0 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_33859()
{
    if (l_U590 == 0)
    {
        if (NOT sub_33880())
        {
            l_U590 = 1;
            PRINTSTRING( "bButtonFree = TRUE\n" );
        }
    }
    else if (sub_33880())
    {
        if (sub_27489( l_U593 ))
        {
            sub_1663( ref l_U593, 0 );
        }
        l_U590 = 0;
        l_U631 = 1;
        return 1;
    }
    return 0;
}

int sub_33880()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_34084()
{
    if (COMPARE_STRING( l_U677, "R11_APT" ))
    {
        if ((sub_34126( l_U593 )) == 3)
        {
            return 1;
        }
    }
    else if ((sub_34126( l_U593 )) == 3)
    {
        return 1;
    }
    return 0;
}

void sub_34126(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_27489( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_35330()
{
    REQUEST_MODEL( -1150599089 );
    while (NOT (HAS_MODEL_LOADED( -1150599089 )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_35390()
{
    unknown uVar2;
    vector vVar3;
    float fVar6;

    vVar3 = {811.26570000, -254.48830000, 14.54200000};
    fVar6 = 104.39370000;
    CREATE_CAR( -1150599089, vVar3.x, vVar3.y, vVar3.z, ref l_U567, 1 );
    SET_CAR_HEADING( l_U567, fVar6 );
    SET_CAR_COORDINATES( l_U567, vVar3.x, vVar3.y, vVar3.z );
    CHANGE_CAR_COLOUR( l_U567, 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U567, 1, 0 );
    FREEZE_CAR_POSITION( l_U567, 1 );
    sub_35533();
    return;
}

void sub_35533()
{
    vector vVar2;
    vector vVar5;

    l_U530[0] = {811.20000000, -257.00000000, 14.50000000};
    l_U530[1] = {809.30000000, -257.00000000, 14.50000000};
    l_U530[2] = {813.10000000, -257.00000000, 14.50000000};
    l_U530[3] = {809.72360000, -256.60400000, 14.83780000};
    l_U530[4] = {819.00000000, -273.50000000, 16.50000000};
    for ( l_U583 = 0; l_U583 < 3; l_U583++ )
    {
        l_U561[l_U583] = START_PTFX( "smoke_garage_blocked", l_U530[l_U583], 0.00000000, 0.00000000, 0.00000000, 1065353216 );
        l_U624[l_U583] = GET_SOUND_ID();
        vVar2 = {-2.00000000, -2.00000000, -3.00000000};
        vVar5 = {2.00000000, 2.00000000, 3.00000000};
        vVar2 = {l_U530[l_U583] + vVar2};
        vVar5 = {l_U530[l_U583] + vVar5};
        SWITCH_PED_PATHS_OFF( vVar2.x, vVar2.y, vVar2.z, vVar5.x, vVar5.y, vVar5.z );
        PLAY_FIRE_SOUND_FROM_POSITION( l_U624[l_U583], l_U530[l_U583] );
    }
    l_U561[4] = START_PTFX( "smoke_roman11", l_U530[4], 0.00000000, 0.00000000, 0.00000000, 1065353216 );
    l_U624[4] = GET_SOUND_ID();
    PLAY_FIRE_SOUND_FROM_POSITION( l_U624[4], l_U530[4] );
    SET_TAXI_GARAGE_RADIO_STATE( 0 );
    l_U585 = 1;
    return;
}

int sub_36989()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    unknown uVar9;

    sub_36998();
    switch (l_U485)
    {
        case 0:
        if (sub_22368( 1, 1 ))
        {
            sub_31169();
            if (sub_31248())
            {
                if (sub_22194())
                {
                    sub_22740();
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U613 );
                    GET_CAR_SPEED( l_U613, ref fVar8 );
                    if (fVar8 < 0.50000000)
                    {
                        if (NOT (IS_CHAR_ON_ANY_BIKE( sub_1448() )))
                        {
                            BEGIN_CAM_COMMANDS( ref l_U586 );
                            if (l_U586 > 0)
                            {
                                l_U485 = 1;
                                l_U486 = 1;
                            }
                        }
                        else
                        {
                            BEGIN_CAM_COMMANDS( ref l_U586 );
                            if (l_U586 > 0)
                            {
                                l_U485 = 1;
                                l_U486 = 0;
                            }
                        }
                    }
                }
            }
            else
            {
                sub_22740();
                BEGIN_CAM_COMMANDS( ref l_U586 );
                if (l_U586 == 1)
                {
                    l_U485 = 1;
                    l_U486 = 2;
                }
            }
        }
        break;
        case 1:
        switch (l_U486)
        {
            case 0:
            if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U613 );
                SET_CAR_AS_MISSION_CAR( l_U613 );
                SET_CAR_HEADING( l_U613, l_U638 );
                SET_CAR_COORDINATES( l_U613, l_U639._fU0, l_U639._fU4, l_U639._fU8 );
                GET_SCRIPT_TASK_STATUS( sub_1448(), 41, ref l_U588 );
                if (l_U588 == 7)
                {
                    if ((NOT (IS_CHAR_INJURED( sub_1448() ))) AND (NOT (IS_CHAR_INJURED( l_U491 ))))
                    {
                        sub_22740();
                        if (NOT (DOES_CAM_EXIST( l_U605 )))
                        {
                            CREATE_CAM( 14, ref l_U605 );
                            SET_CAM_POS( l_U605, l_U642._fU0, l_U642._fU4, l_U642._fU8 );
                            SET_CAM_ROT( l_U605, l_U645._fU0, l_U645._fU4, l_U645._fU8 );
                            SET_CAM_ACTIVE( l_U605, 1 );
                            SET_CAM_PROPAGATE( l_U605, 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            SET_CAM_NEAR_DOF( l_U605, 3.00000000 );
                            SET_CAM_FAR_DOF( l_U605, 20.00000000 );
                        }
                        TASK_EVERYONE_LEAVE_CAR( l_U613 );
                    }
                }
            }
            else
            {
                l_U486 = 2;
            }
            break;
            case 2:
            if ((NOT (IS_CHAR_DEAD( l_U491 ))) AND (NOT (IS_CHAR_DEAD( sub_1448() ))))
            {
                CLEAR_AREA( l_U648._fU0, l_U648._fU4, l_U648._fU8, 2.00000000, 1 );
                SET_CHAR_HEADING( sub_1448(), l_U651 );
                if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_1448(), l_U648._fU0, l_U648._fU4, l_U648._fU8 );
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_1448(), l_U648._fU0, l_U648._fU4, l_U648._fU8 );
                }
                CLEAR_AREA( l_U652._fU0, l_U652._fU4, l_U652._fU8, 2.00000000, 1 );
                SET_CHAR_HEADING( l_U491, l_U655 );
                if (IS_CHAR_IN_ANY_CAR( l_U491 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( l_U491, l_U652._fU0, l_U652._fU4, l_U652._fU8 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U491, l_U652._fU0, l_U652._fU4, l_U652._fU8 );
                }
                if (NOT (IS_CAR_DEAD( l_U613 )))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U613 );
                }
                UNLOCK_RAGDOLL( l_U491, 0 );
                if (NOT (DOES_CAM_EXIST( l_U604 )))
                {
                    if (DOES_CAM_EXIST( l_U605 ))
                    {
                        SET_CAM_ACTIVE( l_U605, 0 );
                        SET_CAM_PROPAGATE( l_U605, 0 );
                        DESTROY_CAM( l_U605 );
                    }
                    CREATE_CAM( 14, ref l_U604 );
                    SET_CAM_POS( l_U604, l_U656._fU0, l_U656._fU4, l_U656._fU8 );
                    SET_CAM_ROT( l_U604, l_U659._fU0, l_U659._fU4, l_U659._fU8 );
                    SET_CAM_ACTIVE( l_U604, 1 );
                    SET_CAM_PROPAGATE( l_U604, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SET_CAM_NEAR_DOF( l_U604, 3.00000000 );
                    SET_CAM_FAR_DOF( l_U604, 20.00000000 );
                }
                if (sub_26420( l_U677, ref l_U593, 6, 1 ))
                {
                    StrCopy( ref l_U599, l_U677, 16 );
                    l_U485 = 2;
                }
            }
            break;
            case 1:
            if ((NOT (IS_CHAR_DEAD( l_U491 ))) AND (NOT (IS_CHAR_DEAD( sub_1448() ))))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U613 );
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_1448(), "Look_Right_Car_Loop", "MISSROMAN11", 4.00000000, 1, 0, 0, 0, 0 );
                    if (NOT (IS_CAR_DEAD( l_U613 )))
                    {
                        FREEZE_CAR_POSITION( l_U613, 1 );
                        SET_CAR_HEADING( l_U613, l_U634 );
                        SET_CAR_COORDINATES( l_U613, l_U635._fU0, l_U635._fU4, l_U635._fU8 );
                        if (NOT (IS_CHAR_IN_CAR( l_U491, l_U613 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U491, l_U613, 0 );
                        }
                        if (NOT (DOES_CAM_EXIST( l_U604 )))
                        {
                            CREATE_CAM( 14, ref l_U604 );
                            CREATE_CAM( 14, ref l_U605 );
                            GET_CAR_MODEL( l_U613, ref uVar9 );
                            GET_MODEL_DIMENSIONS( uVar9, ref uVar2, ref uVar5 );
                            if (l_U670 == 0)
                            {
                                l_U610._fU0 = uVar5._fU0 + 0.50000000;
                                l_U610._fU4 = uVar5._fU4 + 0.50000000;
                                l_U610._fU8 = uVar5._fU8 + 0.50000000;
                            }
                            else
                            {
                                l_U610._fU0 = -uVar5._fU0 + 0.50000000;
                                l_U610._fU4 = uVar5._fU4 + 0.50000000;
                                l_U610._fU8 = uVar5._fU8 + 0.50000000;
                            }
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U613, l_U610._fU0, l_U610._fU4, l_U610._fU8, ref l_U610._fU0, ref l_U610._fU4, ref l_U610._fU8 );
                            SET_CAM_POS( l_U605, l_U610._fU0, l_U610._fU4, l_U610._fU8 );
                            if (l_U670 == 0)
                            {
                                l_U610._fU0 = -uVar5._fU0 + 0.50000000;
                                l_U610._fU4 = uVar5._fU4 + 1.50000000;
                                l_U610._fU8 = uVar5._fU8 + 0.50000000;
                            }
                            else
                            {
                                l_U610._fU0 = uVar5._fU0 + 0.50000000;
                                l_U610._fU4 = uVar5._fU4 + 1.50000000;
                                l_U610._fU8 = uVar5._fU8 + 0.50000000;
                            }
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U613, l_U610._fU0, l_U610._fU4, l_U610._fU8, ref l_U610._fU0, ref l_U610._fU4, ref l_U610._fU8 );
                            POINT_CAM_AT_COORD( l_U605, l_U610._fU0, l_U610._fU4, l_U610._fU8 );
                            if (l_U670 == 0)
                            {
                                l_U610._fU0 = uVar5._fU0;
                                l_U610._fU4 = uVar5._fU4 + 0.50000000;
                                l_U610._fU8 = uVar5._fU8 / 2.00000000;
                            }
                            else
                            {
                                l_U610._fU0 = -uVar5._fU0;
                                l_U610._fU4 = uVar5._fU4 + 0.50000000;
                                l_U610._fU8 = uVar5._fU8 / 2.00000000;
                            }
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U613, l_U610._fU0, l_U610._fU4, l_U610._fU8, ref l_U610._fU0, ref l_U610._fU4, ref l_U610._fU8 );
                            SET_CAM_POS( l_U604, l_U610._fU0, l_U610._fU4, l_U610._fU8 );
                            if (l_U670 == 0)
                            {
                                l_U610._fU0 = uVar5._fU0 - 0.50000000;
                                l_U610._fU4 = uVar5._fU4;
                                l_U610._fU8 = uVar5._fU8 / 2.00000000;
                            }
                            else
                            {
                                l_U610._fU0 = uVar5._fU0 + 0.00000000;
                                l_U610._fU4 = uVar5._fU4 - 1.50000000;
                                l_U610._fU8 = uVar5._fU8 / 2.00000000;
                            }
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U613, l_U610._fU0, l_U610._fU4, l_U610._fU8, ref l_U610._fU0, ref l_U610._fU4, ref l_U610._fU8 );
                            POINT_CAM_AT_COORD( l_U604, l_U610._fU0, l_U610._fU4, l_U610._fU8 );
                            CREATE_CAM( 3, ref l_U606 );
                            SET_CAM_INTERP_STYLE_CORE( l_U606, l_U605, l_U604, 8000, 0 );
                            SET_CAM_ACTIVE( l_U606, 1 );
                            SET_CAM_PROPAGATE( l_U606, 1 );
                            SET_CAM_FOV( l_U606, 35.00000000 );
                            SET_CAM_NEAR_DOF( l_U606, 2.00000000 );
                            SET_CAM_FAR_DOF( l_U606, 12.00000000 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        }
                        sub_22740();
                        if (NOT l_U676)
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( sub_1448(), "NIKO_STOP_FLAT_CAR", "MISSROMAN11", 4.00000000, 0, 0, 0, 0, 0 );
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U491, "ROMAN_STOP_FLAT_CAR", "MISSROMAN11", 4.00000000, 0, 0, 0, 0, 0 );
                        }
                        if (sub_26420( l_U677, ref l_U593, 6, 1 ))
                        {
                            StrCopy( ref l_U599, l_U677, 16 );
                            l_U485 = 2;
                        }
                    }
                }
            }
            break;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( sub_1448() )))
        {
            if (l_U586 > 0)
            {
                if ((sub_34084()) || (sub_33859()))
                {
                    SET_WIDESCREEN_BORDERS( 0 );
                    sub_3902();
                    if (NOT (IS_CHAR_DEAD( l_U491 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( l_U491 );
                            CLEAR_CHAR_SECONDARY_TASK( sub_1448() );
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U491 );
                            UNLOCK_RAGDOLL( l_U491, 1 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1448() );
                        }
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U613 );
                        FREEZE_CAR_POSITION( l_U613, 0 );
                    }
                    if (DOES_CAM_EXIST( l_U604 ))
                    {
                        SET_CAM_ACTIVE( l_U604, 0 );
                        SET_CAM_PROPAGATE( l_U604, 0 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DESTROY_CAM( l_U604 );
                    }
                    if (DOES_CAM_EXIST( l_U605 ))
                    {
                        SET_CAM_ACTIVE( l_U605, 0 );
                        SET_CAM_PROPAGATE( l_U605, 0 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DESTROY_CAM( l_U605 );
                    }
                    if (DOES_CAM_EXIST( l_U606 ))
                    {
                        SET_CAM_ACTIVE( l_U606, 0 );
                        SET_CAM_PROPAGATE( l_U606, 0 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DESTROY_CAM( l_U606 );
                    }
                    SET_CAM_BEHIND_PED( sub_1448() );
                    END_CAM_COMMANDS( ref l_U586 );
                    if (NOT l_U631)
                    {
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    }
                    else
                    {
                        l_U631 = 1;
                    }
                    l_U675 = 1;
                    SET_ROMANS_MOOD( 1 );
                    l_U485 = 3;
                }
            }
        }
        break;
        case 3:
        return 1;
        break;
    }
    return 0;
}

void sub_36998()
{
    float fVar2;
    float fVar3;

    if (l_U670 == -1)
    {
        GET_CHAR_COORDINATES( sub_1448(), ref l_U610._fU0, ref l_U610._fU4, ref l_U610._fU8 );
        fVar2 = VDIST( l_U610, l_U667 );
        fVar3 = VDIST( l_U610, l_U663 );
        if (fVar2 < fVar3)
        {
            l_U670 = 0;
        }
        else
        {
            l_U670 = 1;
        }
        switch (l_U670)
        {
            case 0:
            l_U634 = l_U666;
            l_U635 = {l_U667};
            l_U638 = 104.85670000;
            l_U639 = {822.27400000, -245.74660000, 14.28730000};
            l_U642 = {825.72400000, -241.45070000, 15.95272000};
            l_U645 = {5.59490900, -0.00000000, 149.89730000};
            l_U648 = {822.39180000, -247.66390000, 14.28690000};
            l_U651 = 131.00000000;
            l_U652 = {820.19020000, -249.00360000, 14.25730000};
            l_U655 = 140.00000000;
            l_U656 = {823.38160000, -246.33990000, 16.34778000};
            l_U659 = {-0.03999600, 0.00000000, 137.30760000};
            break;
            case 1:
            l_U634 = l_U662;
            l_U635 = {l_U663};
            l_U638 = 311.35000000;
            l_U639 = {802.31200000, -248.23360000, 14.09870000};
            l_U642 = {798.92240000, -245.19800000, 15.41827000};
            l_U645 = {2.88558000, -0.00000000, -125.95960000};
            l_U648 = {802.59570000, -246.63010000, 14.12850000};
            l_U651 = 198.55650000;
            l_U652 = {803.01560000, -247.45970000, 14.12240000};
            l_U655 = 37.71870000;
            l_U656 = {800.98230000, -242.64260000, 15.31061000};
            l_U659 = {5.78156000, -0.00000000, -149.74540000};
            break;
        }
    }
    return;
}

int sub_43064()
{
    if (NOT l_U576)
    {
        if (NOT (sub_27489( l_U593 )))
        {
            if (sub_26420( "R11_ARRIVE", ref l_U593, 6, 1 ))
            {
                StrCopy( ref l_U599, "R11_ARRIVE", 16 );
                l_U576 = 1;
                SETTIMERA( 0 );
            }
        }
        else
        {
            sub_1663( ref l_U593, 0 );
        }
    }
    else
    {
        switch (l_U483)
        {
            case 0:
            GET_SCRIPT_TASK_STATUS( sub_1448(), 27, ref l_U588 );
            if (l_U588 == 7)
            {
                l_U483 = 1;
            }
            if (NOT (IS_CHAR_INJURED( l_U491 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U491, 27, ref l_U588 );
                if (l_U588 == 7)
                {
                    l_U483 = 1;
                }
                if ((LOCATE_CHAR_ON_FOOT_3D( l_U491, 595.70280000, 1401.08700000, 9.95820100, 1.50000000, 1.50000000, 1.50000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_1448(), 595.70280000, 1401.08700000, 9.95820100, 1.50000000, 1.50000000, 1.50000000, 0 )))
                {
                    l_U483 = 1;
                }
                if (TIMERA() > 3000)
                {
                    l_U483 = 1;
                }
            }
            if (sub_33859())
            {
                if (sub_27489( l_U593 ))
                {
                    sub_1663( ref l_U593, 0 );
                }
                l_U483 = 1;
            }
            break;
            case 1:
            if (l_U576)
            {
                if (NOT (sub_27489( l_U593 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U491 )))
                    {
                        if (IS_GROUP_MEMBER( l_U491, l_U582 ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U491 );
                        }
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U491, 595.70280000, 1401.08700000, 9.95820100, 2, -2, 1.00000000 );
                    }
                    if (NOT (IS_CHAR_INJURED( sub_1448() )))
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( sub_1448(), 595.70280000, 1401.08700000, 9.95820100, 2, -2, 1.00000000 );
                    }
                    CLEAR_PRINTS();
                    DO_SCREEN_FADE_OUT( 2000 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    sub_43690();
                    SET_CUTSCENE_EXTRA_ROOM_POS( 608.80000000, 1407.20000000, 17.50000000 );
                    sub_1663( ref l_U593, 0 );
                    ENABLE_SCENE_STREAMING( 0 );
                    sub_4821( "R11AUD", 6 );
                    START_CUTSCENE_NOW( "RP_11b" );
                    while (NOT HAS_CUTSCENE_LOADED())
                    {
                        WAIT( 0 );
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U589 );
                        SET_CAR_COORDINATES( l_U589, l_U511._fU0, l_U511._fU4, l_U511._fU8 );
                        SET_CAR_HEADING( l_U589, 0.00000000 );
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_1448(), 594.63680000, 1401.48600000, 9.95969900 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_1448(), 594.63680000, 1401.48600000, 9.95969900 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U491 )))
                    {
                        DELETE_CHAR( ref l_U491 );
                    }
                    CLEAR_AREA( 594.54970000, 1400.97200000, 9.95840000, 1.00000000, 1 );
                    SET_CHAR_COORDINATES( sub_1448(), 594.54970000, 1400.97200000, 9.95840000 );
                    SET_CHAR_HEADING( sub_1448(), 90.00000000 );
                    SET_CAM_BEHIND_PED( sub_1448() );
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    SET_WIDESCREEN_BORDERS( 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1448() );
                    SET_CAM_BEHIND_PED( sub_1448() );
                    CLEAR_NAMED_CUTSCENE( "RP_11b" );
                    ENABLE_SCENE_STREAMING( 1 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    DO_SCREEN_FADE_IN( 400 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    return 1;
                }
            }
            break;
            case 2:
            if (l_U576)
            {
                if (NOT (sub_27489( l_U593 )))
                {
                    DELETE_CHAR( ref l_U491 );
                    sub_1663( ref l_U593, 0 );
                    if (IS_CHAR_IN_ANY_CAR( sub_1448() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1448(), ref l_U589 );
                        SET_CAR_COORDINATES( l_U589, l_U511._fU0, l_U511._fU4, l_U511._fU8 );
                        SET_CAR_HEADING( l_U589, 187.10810000 );
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_1448(), 592.83650000, 1401.05300000, 9.95820100 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_1448(), 592.83650000, 1401.05300000, 9.95820100 );
                    }
                    SET_CHAR_HEADING( sub_1448(), 100.05180000 );
                    SET_CAM_BEHIND_PED( sub_1448() );
                    CLEAR_PRINTS();
                    l_U483 = 3;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_1448() )))
            {
                SET_WIDESCREEN_BORDERS( 0 );
                sub_3902();
                SETTIMERA( 0 );
                while (TIMERA() < 4000)
                {
                    WAIT( 0 );
                    CLEAR_HELP();
                    PRINT_BIG( "MOCAP CUTSCENE", 100, 2 );
                    SET_CAM_BEHIND_PED( sub_1448() );
                }
                DO_SCREEN_FADE_IN( 400 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_43690()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2088164056 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1171614426 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1175077216 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1150599089 );
    if (DOES_CAM_EXIST( l_U607 ))
    {
        SET_CAM_ACTIVE( l_U607, 0 );
        SET_CAM_PROPAGATE( l_U607, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U607 );
    }
    if (DOES_CAM_EXIST( l_U608 ))
    {
        SET_CAM_ACTIVE( l_U608, 0 );
        SET_CAM_PROPAGATE( l_U608, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U608 );
    }
    if (DOES_CAM_EXIST( l_U609 ))
    {
        SET_CAM_ACTIVE( l_U609, 0 );
        SET_CAM_PROPAGATE( l_U609, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U609 );
        END_CAM_COMMANDS( ref l_U586 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    sub_43963( 0 );
    REMOVE_ANIMS( "MISSROMAN11" );
    return;
}

void sub_43963(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_734( uParam0 ) );
    return;
}

