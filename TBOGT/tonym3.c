void main()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U203 = 0;
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U236 = 10.00000000;
    l_U237 = 15.00000000;
    l_U252 = 350;
    l_U253 = 1.00000000;
    l_U254 = 20.00000000;
    l_U255 = 0.00000000;
    l_U256 = 0.50000000;
    l_U257 = 0;
    l_U262 = 1;
    l_U264 = 0.20000000;
    l_U269 = 0;
    l_U270 = 28;
    l_U271 = {-121.32290000, -22.26500000, 13.64320000};
    l_U275 = {-460.70340000, 149.11790000, 8.74160000};
    l_U279 = {-278.47420000, 345.05130000, 13.69070000};
    l_U294 = {-460.67510000, 152.90150000, 8.74310000};
    l_U297 = 183.67400000;
    l_U298 = 0;
    l_U299 = 0;
    l_U300 = 0;
    l_U301 = 0;
    l_U302 = 0;
    l_U303 = 0;
    l_U304 = 0;
    l_U305 = 0;
    l_U306 = 0;
    l_U307 = 0;
    l_U308 = {-471.64880000, 155.15480000, 8.85280000};
    l_U311 = 253.36170000;
    l_U322 = 0;
    l_U323 = 0;
    l_U324 = 0;
    l_U329 = 8000;
    l_U339 = 1;
    l_U341 = 1;
    l_U343 = 1;
    l_U349 = {0.00000000, 0.30000000, 0.00000000};
    l_U352 = 40.00000000;
    l_U353 = 2000;
    l_U354 = 4.00000000;
    l_U357 = -45.00000000;
    l_U358 = 45.00000000;
    l_U359 = -89.00000000;
    l_U360 = 89.00000000;
    l_U362 = 50.00000000;
    l_U363 = {0.00000000, 0.00000000, 0.70000000};
    l_U380 = 0;
    l_U381 = 0;
    l_U382 = 0;
    l_U383 = 0;
    l_U393 = 0;
    l_U394 = 0;
    l_U404 = 0;
    sub_594();
    while (true)
    {
        WAIT( 0 );
        switch (l_U269)
        {
            case 0:
            switch (l_U332)
            {
                case 0:
                g_U30180 = 1;
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_3341( g_U30199, 1 );
                        WAIT( 0 );
                        sub_3484( "CLBPRC3", 0 );
                        sub_3484( "E2Tm3AU", 6 );
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LA3" )))
                        {
                            PRINT_HELP_FOREVER( "LA3" );
                        }
                        sub_3675();
                        SETTIMERA( 0 );
                        REQUEST_MODEL( -604558634 );
                        REQUEST_MODEL( 1964095658 );
                        REQUEST_MODEL( -297585214 );
                        REQUEST_MODEL( sub_4820( 0 ) );
                        REQUEST_ANIMS( "misstonym3" );
                        sub_5011( "E2Tm3AU" );
                        sub_5130( 0, sub_4089(), "LUIS", 0 );
                        g_U8781 = 0;
                        sub_5283( 28, 0 );
                        l_U332++;
                    }
                }
                break;
                case 1:
                sub_3675();
                if ((HAVE_ANIMS_LOADED( "misstonym3" )) AND ((HAS_MODEL_LOADED( sub_4820( 0 ) )) AND ((HAS_MODEL_LOADED( -297585214 )) AND ((HAS_MODEL_LOADED( 1964095658 )) AND (HAS_MODEL_LOADED( -604558634 ))))))
                {
                    l_U332++;
                }
                break;
                case 2:
                sub_3675();
                if (TIMERA() > 4000)
                {
                    sub_5562();
                    CLEAR_HELP();
                    l_U332++;
                }
                break;
                case 3:
                SET_WIDESCREEN_BORDERS( 1 );
                sub_5789( sub_4089() );
                sub_6889( -477.75380000, 142.34130000, 6.55270000, 1, 1 );
                sub_7183( 1 );
                OPEN_SEQUENCE_TASK( ref l_U373 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_intro", "misstonym3", 8.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_loop", "misstonym3", 8.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U373 );
                TASK_PERFORM_SEQUENCE( sub_4089(), l_U373 );
                CLEAR_SEQUENCE_TASK( l_U373 );
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_5130( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                        sub_7499( "E2Tm3_TODO", ref l_U374, 7, 0 );
                    }
                }
                sub_6889( -483.19530000, 143.54550000, 6.55100000, 1.50000000, 1 );
                CREATE_CHAR( 26, -604558634, -483.19530000, 143.54550000, 6.55100000, ref l_U283, 1 );
                SET_CHAR_HEADING( l_U283, 103.33620000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U283, "E2_MaisonRoommain" );
                SET_CHAR_NEVER_TARGETTED( l_U283, 1 );
                sub_5130( 2, l_U283, "PRINCE", 0 );
                CREATE_CHAR( 26, -297585214, -483.89640000, 143.81140000, 6.60000000, ref l_U291, 1 );
                SET_CHAR_HEADING( l_U291, 225.73340000 );
                SET_CHAR_COMPONENT_VARIATION( l_U291, 0, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U291, 7, 1, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U291, 1, 0, 2 );
                SET_CHAR_COMPONENT_VARIATION( l_U291, 2, 0, 0 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U291, "E2_MaisonRoommain" );
                SET_CHAR_COLLISION( l_U291, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U291, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U283, 1 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4089(), 0 );
                SET_CAR_GENERATORS_ACTIVE_IN_AREA( 65346, 615, -10, 65391, 620, 100, 0 );
                OPEN_SEQUENCE_TASK( ref l_U373 );
                TASK_PLAY_ANIM_SECONDARY( 0, "male_stand_chat", "misstonym3", 8.00000000, 1, 0, 0, 0, 0 );
                TASK_LOOK_AT_CHAR( 0, l_U291, -2, 0 );
                CLOSE_SEQUENCE_TASK( l_U373 );
                TASK_PERFORM_SEQUENCE( l_U283, l_U373 );
                CLEAR_SEQUENCE_TASK( l_U373 );
                OPEN_SEQUENCE_TASK( ref l_U373 );
                TASK_PLAY_ANIM_SECONDARY( 0, "female_chair_chat", "misstonym3", 8.00000000, 1, 0, 0, 0, 0 );
                TASK_LOOK_AT_CHAR( 0, l_U283, -2, 0 );
                CLOSE_SEQUENCE_TASK( l_U373 );
                TASK_PERFORM_SEQUENCE( l_U291, l_U373 );
                CLEAR_SEQUENCE_TASK( l_U373 );
                CREATE_OBJECT( -71916080, 65055, 144, 6, ref uVar2, 1 );
                ATTACH_OBJECT_TO_PED( uVar2, l_U283, 1219, 0.06800000, 0.04000000, 0.02500000, 0.00000000, 0.00000000, 0.00000000, 0 );
                if (NOT (DOES_BLIP_EXIST( l_U284 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U283, ref l_U284 );
                    sub_9174( l_U284 );
                    SET_BLIP_AS_FRIENDLY( l_U284, 1 );
                }
                l_U332++;
                break;
                case 4:
                if ((sub_9413()) || (NOT (sub_9250( l_U374 ))))
                {
                    if (g_U30199 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                        {
                            sub_3341( g_U30199, 0 );
                        }
                    }
                    CLEAR_CHAR_TASKS( sub_4089() );
                    if (sub_9250( l_U374 ))
                    {
                        sub_9598( ref l_U374, 0 );
                    }
                    SET_WIDESCREEN_BORDERS( 0 );
                    sub_9730();
                    sub_7183( 0 );
                    sub_9885();
                    SET_PLAYER_CONTROL( sub_738(), 1 );
                    PRINT( "CP3_15", 7500, 0 );
                    SETTIMERA( 0 );
                    l_U269 = 2;
                }
                break;
            }
            break;
            case 2:
            sub_11249();
            sub_11562();
            sub_12021();
            if (DOES_CHAR_EXIST( l_U291 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U291 )))
                {
                    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U291, sub_4089(), 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_4089(), -483.89640000, 143.81140000, 6.60000000, 0.40000000, 0.40000000, 4, 0 )))
                    {
                        SET_CHAR_COLLISION( l_U291, 1 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U283 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U283 )))
                {
                    if ((TIMERA() > 3500) AND ((sub_11617( sub_4089(), l_U283, 1 )) < 3))
                    {
                        if (IS_THIS_PRINT_BEING_DISPLAYED( "CP3_15", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                        {
                            CLEAR_THIS_PRINT( "CP3_15" );
                        }
                        sub_7499( "E2Tm3_INT", ref l_U374, 7, 1 );
                        sub_13559();
                        TASK_CLEAR_LOOK_AT( l_U283 );
                        CLEAR_CHAR_TASKS( l_U283 );
                        if (NOT (IS_PED_IN_GROUP( l_U283 )))
                        {
                            SET_GROUP_MEMBER( sub_14116(), l_U283 );
                        }
                        if (DOES_OBJECT_EXIST( uVar2 ))
                        {
                            DETACH_OBJECT( uVar2, 1 );
                            DELETE_OBJECT( ref uVar2 );
                        }
                        if (DOES_BLIP_EXIST( l_U284 ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U284 );
                        }
                        l_U269 = 3;
                    }
                }
            }
            break;
            case 3:
            sub_11249();
            sub_11562();
            sub_14250();
            sub_14904( l_U283 );
            sub_15072();
            sub_12021();
            if (DOES_CHAR_EXIST( l_U291 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U291 )))
                {
                    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U291, sub_4089(), 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_4089(), -483.89640000, 143.81140000, 6.60000000, 0.40000000, 0.40000000, 4, 0 )))
                    {
                        SET_CHAR_COLLISION( l_U291, 1 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291 );
                    }
                }
            }
            if (NOT (sub_14537( 0 )))
            {
                if (NOT l_U381)
                {
                    PRINT( "CP3_09", 7500, 0 );
                    l_U381 = 1;
                }
                else if (DOES_CHAR_EXIST( l_U283 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U283 )))
                    {
                        if (NOT l_U322)
                        {
                            if ((sub_11617( sub_4089(), l_U283, 1 )) < 8)
                            {
                                if (g_U43686 == 0)
                                {
                                    sub_7499( "E2Tm3_CHAT1", ref l_U374, 7, 1 );
                                }
                                else if (g_U43686 == 1)
                                {
                                    sub_7499( "E2Tm3_CHAT2", ref l_U374, 7, 1 );
                                }
                                else if (g_U43686 > 1)
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                                    if (iVar3 == 0)
                                    {
                                        sub_7499( "E2Tm3_CHAT1", ref l_U374, 7, 1 );
                                    }
                                    else if (iVar3 == 1)
                                    {
                                        sub_7499( "E2Tm3_CHAT2", ref l_U374, 7, 1 );
                                    }
                                };;;
                                l_U322 = 1;
                            }
                            else if (l_U322 == 1)
                            {
                                if (sub_9250( l_U374 ))
                                {
                                    sub_9598( ref l_U374, 1 );
                                }
                            }
                        }
                    }
                }
            }
            if (NOT IS_INTERIOR_SCENE())
            {
                if (DOES_CHAR_EXIST( l_U291 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U291 )))
                    {
                        TASK_CLEAR_LOOK_AT( l_U291 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U291 );
                    }
                }
                if (NOT l_U323)
                {
                    if (g_U30199 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                        {
                            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 )))
                            {
                                sub_5130( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                                sub_9598( ref l_U374, 1 );
                                sub_7499( "E2Tm3_BYE", ref l_U374, 7, 1 );
                                l_U323 = 1;
                            }
                        }
                    }
                }
            }
            if (IS_CHAR_IN_ANY_CAR( sub_4089() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4089(), ref l_U292 );
            }
            if (DOES_VEHICLE_EXIST( l_U292 ))
            {
                if (IS_VEH_DRIVEABLE( l_U292 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U292, ref l_U333 );
                    if (l_U333 > 2)
                    {
                        if (NOT l_U383)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U283 )))
                            {
                                if (sub_16245( sub_4089(), l_U283 ))
                                {
                                    sub_7499( "E2Tm3_CHAT3", ref l_U374, 7, 1 );
                                    l_U383 = 1;
                                }
                            }
                        }
                        if (l_U383)
                        {
                            if (NOT l_U382)
                            {
                                if (NOT (sub_14537( 0 )))
                                {
                                    PRINT( "CP3_10", 7500, 0 );
                                    SETTIMERB( 0 );
                                    l_U382 = 1;
                                }
                            }
                            else if (TIMERB() > 9000)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U283 )))
                                {
                                    if (NOT (sub_14537( 0 )))
                                    {
                                        if (sub_16245( sub_4089(), l_U283 ))
                                        {
                                            if (NOT l_U324)
                                            {
                                                if (g_U43686 == 0)
                                                {
                                                    sub_7499( "E2Tm3_B1AV1", ref l_U374, 7, 1 );
                                                }
                                                else if (g_U43686 == 1)
                                                {
                                                    sub_7499( "E2Tm3_B1AV2", ref l_U374, 7, 1 );
                                                }
                                                else if (g_U43686 > 1)
                                                {
                                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
                                                    if (iVar4 == 0)
                                                    {
                                                        sub_7499( "E2Tm3_B1AV1", ref l_U374, 7, 1 );
                                                    }
                                                    else if (iVar4 == 1)
                                                    {
                                                        sub_7499( "E2Tm3_B1AV2", ref l_U374, 7, 1 );
                                                    }
                                                };;;
                                                l_U324 = 1;
                                            }
                                        }
                                        else
                                        {
                                            sub_9598( ref l_U374, 1 );
                                        }
                                    }
                                }
                            }
                        }
                        if (IS_CHAR_IN_CAR( sub_4089(), l_U292 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U283 )))
                            {
                                if (sub_16245( sub_4089(), l_U283 ))
                                {
                                    if (LOCATE_CHAR_IN_CAR_3D( sub_4089(), l_U271._fU0, l_U271._fU4, l_U271._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                                    {
                                        sub_9598( ref l_U374, 1 );
                                        if (l_U292 != l_U293)
                                        {
                                            sub_2550();
                                        }
                                        if (NOT (IS_PLAYER_PRESSING_HORN( sub_738() )))
                                        {
                                            SET_PLAYER_CONTROL( sub_738(), 0 );
                                            TASK_CAR_TEMP_ACTION( sub_4089(), l_U292, 24, 2000 );
                                            if (DOES_BLIP_EXIST( l_U274 ))
                                            {
                                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
                                            }
                                            for ( l_U327 = 0; l_U327 <= 1; l_U327++ )
                                            {
                                                if (NOT (DOES_BLIP_EXIST( l_U288[l_U327] )))
                                                {
                                                    ADD_BLIP_FOR_CHAR( l_U285[l_U327], ref l_U288[l_U327] );
                                                    SET_BLIP_AS_FRIENDLY( l_U288[l_U327], 1 );
                                                    sub_9174( l_U288[l_U327] );
                                                }
                                            }
                                            SETTIMERA( 0 );
                                            PRINT( "CP3_17", 7500, 0 );
                                            l_U269 = 11;
                                        }
                                        else if (DOES_BLIP_EXIST( l_U274 ))
                                        {
                                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
                                        }
                                        l_U269 = 13;;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 11:
            sub_11249();
            sub_11562();
            sub_14904( l_U283 );
            sub_15072();
            sub_14250();
            sub_12021();
            if (NOT l_U305)
            {
                if (TIMERA() > 2000)
                {
                    SET_PLAYER_CONTROL( sub_738(), 1 );
                    l_U305 = 1;
                }
            }
            if (DOES_VEHICLE_EXIST( l_U292 ))
            {
                if (IS_VEH_DRIVEABLE( l_U292 ))
                {
                    if (IS_VEHICLE_ON_ALL_WHEELS( l_U292 ))
                    {
                        GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U292, ref l_U333 );
                        if (l_U333 > 2)
                        {
                            if (IS_CHAR_IN_CAR( sub_4089(), l_U292 ))
                            {
                                if (LOCATE_CHAR_IN_CAR_3D( sub_4089(), l_U271._fU0, l_U271._fU4, l_U271._fU8 + 5, 5, 5, 5, 0 ))
                                {
                                    if (IS_PLAYER_PRESSING_HORN( sub_738() ))
                                    {
                                        CLEAR_PRINTS();
                                        for ( l_U327 = 0; l_U327 <= 1; l_U327++ )
                                        {
                                            if (DOES_BLIP_EXIST( l_U288[l_U327] ))
                                            {
                                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U288[l_U327] );
                                            }
                                        }
                                        l_U269 = 13;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 13:
            if (NOT l_U307)
            {
                if (NOT (IS_CHAR_INJURED( l_U283 )))
                {
                    if (sub_16245( sub_4089(), l_U283 ))
                    {
                        sub_17604( ref l_U384, "E2Tm3_ARR", "E2Tm3_WCHAT" );
                        sub_17951( ref l_U384, ref l_U374, 7, 1 );
                        l_U307 = 1;
                    }
                }
            }
            sub_12021();
            sub_11249();
            sub_11562();
            if (l_U307)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_738(), 0 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U283 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U285[0] )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U285[1] )))
                            {
                                if (sub_18158( sub_4089(), l_U283, l_U285[0], l_U285[1], 1 ))
                                {
                                    if (NOT sub_14553())
                                    {
                                        if (NOT l_U393)
                                        {
                                            sub_7499( "E2Tm3_WHERE", ref l_U374, 7, 1 );
                                            SETTIMERA( 0 );
                                            l_U393 = 1;
                                        }
                                        else if (TIMERA() > 10000)
                                        {
                                            if (NOT (sub_14537( 0 )))
                                            {
                                                if (NOT l_U394)
                                                {
                                                    if (g_U43686 == 0)
                                                    {
                                                        sub_17604( ref l_U395, "E2Tm3_B2AV1", "E2Tm3_B2AV2" );
                                                        sub_17951( ref l_U395, ref l_U374, 7, 1 );
                                                    }
                                                    else if (g_U43686 == 1)
                                                    {
                                                        sub_17604( ref l_U395, "E2Tm3_B2BV1", "E2Tm3_B2BV2" );
                                                        sub_17951( ref l_U395, ref l_U374, 7, 1 );
                                                    }
                                                    else if (g_U43686 > 1)
                                                    {
                                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar5 );
                                                        if (iVar5 == 0)
                                                        {
                                                            sub_17604( ref l_U395, "E2Tm3_B2AV1", "E2Tm3_B2AV2" );
                                                            sub_17951( ref l_U395, ref l_U374, 7, 1 );
                                                        }
                                                        else if (iVar5 == 1)
                                                        {
                                                            sub_17604( ref l_U395, "E2Tm3_B2BV1", "E2Tm3_B2BV2" );
                                                            sub_17951( ref l_U395, ref l_U374, 7, 1 );
                                                        }
                                                    };;;
                                                    l_U394 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    sub_9598( ref l_U374, 0 );
                                }
                            }
                        }
                    }
                }
            }
            if (sub_18979( l_U279._fU0, l_U279._fU4, l_U279._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1, l_U283, l_U285[0], l_U285[1], "CP3PH4", "CP3_04", "CP3_12", "CP3_12", "CP3_13", "CP3_09", 0, 1, "CP3_06", "CP3_16" ))
            {
                SET_PLAYER_CONTROL( sub_738(), 0 );
                l_U269 = 14;
            }
            break;
            case 14:
            sub_31798();
            sub_33945( 28, "E2Tm3_CG1", "E2Tm3AU", 1 );
            sub_34633();
            break;
            case 15:
            if (NOT l_U404)
            {
                sub_2595();
                sub_27291();
                if (DOES_CHAR_EXIST( l_U285[0] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U285[0] )))
                    {
                        if (IS_PED_IN_GROUP( l_U285[0] ))
                        {
                            sub_7499( "E2Tm3_RHURT", ref l_U374, 7, 1 );
                        }
                    }
                }
                l_U404 = 1;
            }
            else if (NOT l_U380)
            {
                if (NOT (sub_14537( 0 )))
                {
                    for ( l_U327 = 0; l_U327 <= 1; l_U327++ )
                    {
                        if (DOES_CHAR_EXIST( l_U285[l_U327] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U285[l_U327] )))
                            {
                                CLEAR_CHAR_TASKS( l_U285[l_U327] );
                                TASK_SMART_FLEE_CHAR( l_U285[l_U327], sub_4089(), 150, 1200000 );
                                SET_CHAR_KEEP_TASK( l_U285[l_U327], 1 );
                            }
                        }
                    }
                    PRINT_NOW( "CP3_08", 7000, 0 );
                    SETTIMERA( 0 );
                    l_U380 = 1;
                }
            }
            if (l_U380)
            {
                if (TIMERA() > 7000)
                {
                    sub_36252();
                    sub_33945( 28, l_U326, "E2Tm3AU", 1 );
                    sub_11776();
                }
            }
            break;
            case 16:
            if (NOT l_U404)
            {
                sub_2595();
                sub_27291();
                if (DOES_CHAR_EXIST( l_U285[0] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U285[0] )))
                    {
                        sub_7499( "E2Tm3_WHURT", ref l_U374, 7, 1 );
                    }
                }
                l_U404 = 1;
            }
            else if (NOT l_U380)
            {
                if (NOT (sub_14537( 0 )))
                {
                    for ( l_U327 = 0; l_U327 <= 1; l_U327++ )
                    {
                        if (DOES_CHAR_EXIST( l_U285[l_U327] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U285[l_U327] )))
                            {
                                CLEAR_CHAR_TASKS( l_U285[l_U327] );
                                TASK_SMART_FLEE_CHAR( l_U285[l_U327], sub_4089(), 150, 1200000 );
                                SET_CHAR_KEEP_TASK( l_U285[l_U327], 1 );
                            }
                        }
                    }
                    PRINT_NOW( "CP3_07", 7000, 0 );
                    SETTIMERA( 0 );
                    l_U380 = 1;
                }
            }
            if (l_U380)
            {
                if (TIMERA() > 7000)
                {
                    sub_36252();
                    sub_33945( 28, l_U326, "E2Tm3AU", 1 );
                    sub_11776();
                }
            }
            break;
        }
    }
    return;
}

void sub_594()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_615();
        sub_2535();
    }
    return;
}

void sub_615()
{
    int iVar2;

    iVar2 = 0;
    sub_629( iVar2 );
    sub_1573();
    return;
}

void sub_629(unknown uParam0)
{
    if (g_U819)
    {
        sub_648();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_738(), 150 );
    switch (uParam0)
    {
        case 0:
        case 1:
        sub_811( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1343( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1478();
    return;
}

void sub_648()
{
    sub_657();
    return;
}

void sub_657()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_738()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_811(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_822( uParam1 );
    sub_1017( uParam0, 0, uParam2 );
    sub_1017( uParam0, 1, uParam3 );
    sub_1017( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_1210();
    return;
}

void sub_822(unknown uParam0)
{
    ADD_SCORE( sub_738(), uParam0 );
    sub_847( uParam0 );
    return;
}

void sub_847(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_958( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_958(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1017(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_1210()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U196[I] = 4;
    }
    return;
}

void sub_1343(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1478()
{
    sub_1487();
    return;
}

void sub_1487()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1573()
{
    int iVar2;

    iVar2 = 0;
    sub_1585();
    return;
}

void sub_1585()
{
    int iVar2;

    iVar2 = 0;
    g_U12379 = 0;
    g_U30153 = 0;
    sub_1609();
    sub_2233();
    sub_2269( iVar2, 0 );
    sub_2352();
    sub_2391();
    g_U30097[1] = 0;
    return;
}

void sub_1609()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((g_U575[I]._fU20) AND ((sub_1647( 5, g_U575[I] )) == 1))
        {
            if ((sub_1647( 1, g_U575[I] )) != 0)
            {
                sub_1933( I );
            }
        }
    }
    if (NOT sub_2099())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    if (g_U95._fU0 == 1016)
    {
        g_U95._fU92 = 1;
    }
    return;
}

int sub_1647(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1933(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2018( g_U575 - 1 );
    return;
}

void sub_2018(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2099()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_1647( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2233()
{
    unknown uVar2;

    uVar2 = g_U10965;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_2269(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_2352()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_2391()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_2413();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_2413()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_2535()
{
    g_U30180 = 0;
    sub_2550();
    sub_2595();
    g_U8781 = 1;
    if (DOES_CHAR_EXIST( l_U283 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U283 );
        if (NOT (IS_CHAR_DEAD( l_U283 )))
        {
            if (IS_PED_IN_GROUP( l_U283 ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U283 );
            }
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -604558634 );
    if (DOES_CHAR_EXIST( l_U285[0] ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U285[0] );
        if (NOT (IS_CHAR_DEAD( l_U285[0] )))
        {
            if (IS_PED_IN_GROUP( l_U285[0] ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U285[0] );
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U285[1] ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U285[1] );
        if (NOT (IS_CHAR_DEAD( l_U285[1] )))
        {
            if (IS_PED_IN_GROUP( l_U285[1] ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U285[1] );
            }
        }
    }
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    g_U43686++;
    g_U43673++;
    if (g_U43673 > 7)
    {
        g_U43673 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2550()
{
    if (DOES_VEHICLE_EXIST( l_U293 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U293 );
    }
    return;
}

void sub_2595()
{
    if (DOES_BLIP_EXIST( l_U284 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U284 );
    }
    if (DOES_BLIP_EXIST( l_U288[0] ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U288[0] );
    }
    if (DOES_BLIP_EXIST( l_U288[1] ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U288[1] );
    }
    if (DOES_BLIP_EXIST( l_U282 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U282 );
    }
    if (DOES_BLIP_EXIST( l_U278 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U278 );
    }
    if (DOES_BLIP_EXIST( l_U274 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
    }
    return;
}

void sub_3341(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == -1))
    {
        g_U30132[iParam0] = uParam1;
    }
    else
    {
        SCRIPT_ASSERT( "SET_GLOBAL_CLUBPED_SLOT_AS_SCRIPT_CONTROLLED - invalid slot number (-1)" );
    }
    return;
}

void sub_3484(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3520())
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

int sub_3520()
{
    int I;

    for ( I = 0; I <= (14 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3675()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;

    sub_3685( 1 );
    if (DOES_CAM_EXIST( l_U346 ))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref iVar5, ref iVar6 );
        if (NOT IS_USING_CONTROLLER())
        {
            GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        }
        if (NOT IS_LOOK_INVERTED())
        {
            iVar6 *= -1;
        }
        if ((iVar6 < 65508) || (iVar6 > 28))
        {
            fVar2 = TO_FLOAT( iVar6 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U354;
            if (iVar6 < 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U356 += fVar2;
            if (l_U356 < l_U357)
            {
                l_U356 = l_U357;
            }
            if (l_U356 > l_U358)
            {
                l_U356 = l_U358;
            }
        }
        if ((iVar5 < 65508) || (iVar5 > 28))
        {
            fVar2 = TO_FLOAT( iVar5 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U354;
            if (iVar5 > 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U355 += fVar2;
            if (l_U355 < l_U359)
            {
                l_U355 = l_U359;
            }
            if (l_U355 > l_U360)
            {
                l_U355 = l_U360;
            }
        }
        sub_4149( sub_4089(), ref l_U346, l_U356, 0.00000000, l_U355 );
        SET_CAM_FOV( l_U346, l_U362 );
        SET_CAM_ATTACH_OFFSET( l_U346, l_U363._fU0, l_U363._fU4, l_U363._fU8 );
    }
    else if (DOES_CAM_EXIST( l_U371 ))
    {
        sub_4342();
    }
    BEGIN_CAM_COMMANDS( ref l_U372 );
    if (DOES_CAM_EXIST( l_U346 ))
    {
        DESTROY_CAM( l_U346 );
    }
    CREATE_CAM( 14, ref l_U346 );
    ATTACH_CAM_TO_PED( l_U346, sub_4089() );
    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U346, 1 );
    SET_CAM_NEAR_CLIP( l_U346, 0.01000000 );
    l_U355 = 0.00000000;
    l_U356 = -9.00000000;
    sub_4149( sub_4089(), ref l_U346, l_U356, 0.00000000, l_U355 );
    SET_CAM_FOV( l_U346, l_U362 );
    SET_CAM_ATTACH_OFFSET( l_U346, l_U363._fU0, l_U363._fU4, l_U363._fU8 );
    SET_CAM_ACTIVE( l_U346, 1 );
    SET_CAM_PROPAGATE( l_U346, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        FREEZE_CHAR_POSITION( sub_4089(), 1 );
        SET_CHAR_VISIBLE( sub_4089(), 0 );
    }
    return;
}

void sub_3685(unknown uParam0)
{
    g_U10597 = uParam0;
    return;
}

void sub_4089()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4149(unknown uParam0, unknown uParam1, vector vParam2)
{
    unknown uVar7;
    vector vVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            GET_CHAR_HEADING( uParam0, ref uVar7 );
            vVar8.x = 0.00000000;
            vVar8.y = 0.00000000;
            vVar8.z = uVar7;
            vVar8 = {vVar8 + vParam2};
            SET_CAM_ROT( (uParam1^), vVar8.x, vVar8.y, vVar8.z );
        }
    }
    return;
}

void sub_4342()
{
    for ( l_U327 = 0; l_U327 < l_U366; l_U327++ )
    {
        if (DOES_CAM_EXIST( l_U366[l_U327] ))
        {
            DESTROY_CAM( l_U366[l_U327] );
        }
    }
    if (DOES_CAM_EXIST( l_U371 ))
    {
        DESTROY_CAM( l_U371 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U372 );
    }
    return;
}

int sub_4820(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -1255452397;
        case 3: return -789894171;
        case 2: return 1638119866;
        case 1: return -304802106;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -1660661558;
}

void sub_5011(unknown uParam0)
{
    StrCopy( ref l_U19._fU0, uParam0, 16 );
    sub_5028();
    return;
}

void sub_5028()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U19._fU16[I]._fU0 = nil;
        StrCopy( ref l_U19._fU16[I]._fU4, "", 32 );
        l_U19._fU344[I] = 0;
    }
    return;
}

void sub_5130(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U19._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U19._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5210( "\n PED NUMBER ", uParam0 );
    sub_5250( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5210(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5250(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5283(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;

    if (NOT g_U16014[uParam0]._fU212._fU0)
    {
        if (g_U95._fU0 == 1012)
        {
            g_U95._fU92 = 1;
        }
        g_U16014[uParam0]._fU212._fU0 = 1;
        if (bParam1)
        {
            StrCopy( ref cVar4, "CONT_", 16 );
            ConcatString(ref cVar4, ref g_U16014[uParam0]._fU212._fU8, 16);
            SET_PHONE_HUD_ITEM( 2, ref cVar4, -1 );
        }
        g_U95._fU520 = 0;
    }
    return;
}

void sub_5562()
{
    sub_3685( 0 );
    sub_4342();
    if (DOES_CAM_EXIST( l_U347 ))
    {
        DESTROY_CAM( l_U347 );
    }
    if (DOES_CAM_EXIST( l_U348 ))
    {
        DESTROY_CAM( l_U348 );
    }
    if (DOES_CAM_EXIST( l_U346 ))
    {
        DESTROY_CAM( l_U346 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (IS_PLAYER_PLAYING( sub_738() ))
        {
            FREEZE_CHAR_POSITION( sub_4089(), 0 );
            SET_CHAR_VISIBLE( sub_4089(), 1 );
            SET_CAM_BEHIND_PED( sub_4089() );
        }
        END_CAM_COMMANDS( ref l_U372 );
    }
    return;
}

void sub_5789(unknown uParam0)
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U366[0] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U366[0], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U366[0], 1.61040000, 0.91440000, 0.59110000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U366[0], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U366[0], uParam0 );
        POINT_CAM_AT_PED( l_U366[0], uParam0 );
        SET_CAM_POINT_OFFSET( l_U366[0], 0.73220000, 0.43610000, 0.58830000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U366[0], 1 );
    }
    SET_CAM_FOV( l_U366[0], 13.20010000 );
    SET_CAM_ACTIVE( l_U366[0], 1 );
    CREATE_CAM( 14, ref l_U366[1] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U366[1], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U366[1], 1.18410000, 1.13140000, 0.62390000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U366[1], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U366[1], uParam0 );
        POINT_CAM_AT_PED( l_U366[1], uParam0 );
        SET_CAM_POINT_OFFSET( l_U366[1], 0.52730000, 0.48740000, 0.60610000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U366[1], 1 );
    }
    SET_CAM_FOV( l_U366[1], 13.20010000 );
    SET_CAM_ACTIVE( l_U366[1], 1 );
    CREATE_CAM( 14, ref l_U366[2] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U366[2], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U366[2], 0.75790000, 1.34850000, 0.65670000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U366[2], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U366[2], uParam0 );
        POINT_CAM_AT_PED( l_U366[2], uParam0 );
        SET_CAM_POINT_OFFSET( l_U366[2], 0.32250000, 0.53870000, 0.62380000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U366[2], 1 );
    }
    SET_CAM_FOV( l_U366[2], 13.20010000 );
    SET_CAM_ACTIVE( l_U366[2], 1 );
    CREATE_CAM( 14, ref l_U366[3] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U366[3], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U366[3], 0.33170000, 1.56560000, 0.68950000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U366[3], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U366[3], uParam0 );
        POINT_CAM_AT_PED( l_U366[3], uParam0 );
        SET_CAM_POINT_OFFSET( l_U366[3], 0.11770000, 0.58990000, 0.64160000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U366[3], 1 );
    }
    SET_CAM_FOV( l_U366[3], 13.20010000 );
    SET_CAM_ACTIVE( l_U366[3], 1 );
    CREATE_CAM( 25, ref l_U371 );
    SET_CAM_SPLINE_DURATION( l_U371, 20000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U371, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U371, 0 );
    ADD_CAM_SPLINE_NODE( l_U371, l_U366[0] );
    ADD_CAM_SPLINE_NODE( l_U371, l_U366[1] );
    ADD_CAM_SPLINE_NODE( l_U371, l_U366[2] );
    ADD_CAM_SPLINE_NODE( l_U371, l_U366[3] );
    SET_CAM_ACTIVE( l_U371, 1 );
    SET_CAM_PROPAGATE( l_U371, 1 );
    return;
}

void sub_6889(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_6942( uParam0._fU0 - uParam3, uParam0._fU4 - uParam3, uParam0._fU8 - uParam3, uParam0._fU0 + uParam3, uParam0._fU4 + uParam3, uParam0._fU8 + uParam3, uParam4 );
    return;
}

void sub_6942(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    g_U30158[uParam6] = 1;
    if (uParam0._fU0 < uParam3._fU0)
    {
        g_U30251._fU0 = uParam0._fU0;
        g_U30254._fU0 = uParam3._fU0;
    }
    else
    {
        g_U30251._fU0 = uParam3._fU0;
        g_U30254._fU0 = uParam0._fU0;
    }
    if (uParam0._fU4 < uParam3._fU4)
    {
        g_U30251._fU4 = uParam0._fU4;
        g_U30254._fU4 = uParam3._fU4;
    }
    else
    {
        g_U30251._fU4 = uParam3._fU4;
        g_U30254._fU4 = uParam0._fU4;
    }
    if (uParam0._fU8 < uParam3._fU8)
    {
        g_U30251._fU8 = uParam0._fU8;
        g_U30254._fU8 = uParam3._fU8;
    }
    else
    {
        g_U30251._fU8 = uParam3._fU8;
        g_U30254._fU8 = uParam0._fU8;
    }
    g_U30230[uParam6] = GET_ID_OF_THIS_THREAD();
    return;
}

void sub_7183(boolean bParam0)
{
    if (bParam0)
    {
        g_U30166 = 1;
        g_U30234 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30166 = 0;
        g_U30234 = nil;
    }
    return;
}

void sub_7499(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_7520( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_7520(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7574( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7574(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7596( iParam1 )))
    {
        return 0;
    }
    l_U19._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_8284( ref g_U8868, ref l_U19 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_7596(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7673( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_7673( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_7673( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_7673(unknown uParam0)
{
    return;
}

void sub_8284(int iParam0, int iParam1)
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

void sub_9174(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

int sub_9250(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_7673( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7673( "\n speech is not playing" );
    }
    return 0;
}

int sub_9413()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_9598(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_9730()
{
    for ( l_U327 = 0; l_U327 < l_U366; l_U327++ )
    {
        if (DOES_CAM_EXIST( l_U366[l_U327] ))
        {
            DESTROY_CAM( l_U366[l_U327] );
        }
    }
    if (DOES_CAM_EXIST( l_U371 ))
    {
        DESTROY_CAM( l_U371 );
    }
    SET_CAM_BEHIND_PED( sub_4089() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    return;
}

void sub_9885()
{
    sub_9910( 0, l_U294, l_U297, ref l_U293 );
    SET_CAR_AS_MISSION_CAR( l_U293 );
    return;
}

void sub_9910(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_4820( uParam0 );
    return sub_9941( uParam5, uVar8, uParam1, uParam4, uParam0 );
}

int sub_9941(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_10073( (uParam0^), uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_10073(unknown uParam0, int iParam1)
{
    if (iParam1 == 8)
    {
        return;
    }
    switch (iParam1)
    {
        case 0:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4089() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4089() )))
            {
                PRINTSTRING( "KGM.............Retune TONY car to K109_THE_STUDIO\n" );
                RETUNE_RADIO_TO_STATION_NAME( "K109_THE_STUDIO" );
            }
        }
        break;
        case 3:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 0 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 0, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 3.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4089() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4089() )))
            {
                PRINTSTRING( "KGM.............Retune DOMINICANS car to SAN_JUAN_SOUNDS\n" );
                RETUNE_RADIO_TO_STATION_NAME( "SAN_JUAN_SOUNDS" );
            }
        }
        break;
        case 2:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 134, 136 );
        SET_EXTRA_CAR_COLOURS( uParam0, 134, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4089() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4089() )))
            {
                PRINTSTRING( "KGM.............Retune YUSUF car to BEAT\n" );
                RETUNE_RADIO_TO_STATION_NAME( "BEAT_95" );
            }
        }
        break;
        case 1:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 45, 45 );
        SET_EXTRA_CAR_COLOURS( uParam0, 35, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4089() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4089() )))
            {
                PRINTSTRING( "KGM.............Retune MORI car to DANCE_ROCK\n" );
                RETUNE_RADIO_TO_STATION_NAME( "DANCE_ROCK" );
            }
        }
        break;
    }
    return;
}

void sub_11249()
{
    if (DOES_CHAR_EXIST( l_U283 ))
    {
        if (IS_CHAR_INJURED( l_U283 ))
        {
            sub_11293( 0 );
            sub_9598( ref l_U374, 0 );
            l_U269 = 15;
        }
    }
    for ( l_U327 = 0; l_U327 <= 1; l_U327++ )
    {
        if (DOES_CHAR_EXIST( l_U285[l_U327] ))
        {
            if (IS_CHAR_INJURED( l_U285[l_U327] ))
            {
                sub_11293( 0 );
                sub_9598( ref l_U374, 0 );
                l_U269 = 16;
            }
        }
    }
    return;
}

void sub_11293(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 <= 3) AND (g_U8865 >= 1))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_11562()
{
    if (DOES_CHAR_EXIST( l_U283 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U283 )))
        {
            if ((sub_11617( sub_4089(), l_U283, 1 )) > 200)
            {
                PRINT( "CP3_05", 7500, 0 );
                sub_11776();
            }
        }
    }
    if ((l_U269 == 11) || (l_U269 == 13))
    {
        if (DOES_CHAR_EXIST( l_U285[0] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U285[0] )))
            {
                if ((sub_11617( sub_4089(), l_U285[0], 1 )) > 200)
                {
                    PRINT( "CP3_11", 7500, 0 );
                    sub_11776();
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U285[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U285[1] )))
            {
                if ((sub_11617( sub_4089(), l_U285[1], 1 )) > 200)
                {
                    PRINT( "CP3_11", 7500, 0 );
                    sub_11776();
                }
            }
        }
    }
    return;
}

void sub_11617(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_11630( uParam0, uParam2 ), sub_11630( uParam1, uParam2 ) );
}

void sub_11630(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_11776()
{
    sub_615();
    sub_2535();
    return;
}

void sub_12021()
{
    if (g_U30199 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30199]._fU12, sub_4089(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 ))
                {
                    sub_11293( 0 );
                    sub_9598( ref l_U374, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP3_21", 7000, 0 );
                    sub_11776();
                }
            }
        }
    }
    if (g_U30200 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30200]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30200]._fU12, sub_4089(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 ))
                {
                    sub_11293( 0 );
                    sub_9598( ref l_U374, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP3_21", 7000, 0 );
                    sub_11776();
                }
            }
        }
    }
    if ((sub_12325( sub_4089(), 2, 1 )) || (sub_12325( sub_4089(), 1, 1 )))
    {
        if (IS_CHAR_SHOOTING( sub_4089() ))
        {
            sub_11293( 0 );
            sub_9598( ref l_U374, 0 );
            CLEAR_PRINTS();
            PRINT( "CP3_21", 7000, 0 );
            sub_11776();
        }
    }
    if (g_U30198 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30198]._fU12, sub_4089(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 ))
                {
                    sub_11293( 0 );
                    sub_9598( ref l_U374, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP3_21", 7000, 0 );
                    sub_11776();
                }
            }
        }
    }
    return;
}

int sub_12325(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_12353( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_12353(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_4089(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_13559()
{
    REQUEST_MODEL( 1964095658 );
    while (NOT (HAS_MODEL_LOADED( 1964095658 )))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 26, 1964095658, -115.02710000, -18.04950000, 13.76370000, ref l_U285[0], 1 );
    SET_CHAR_HEADING( l_U285[0], 167.06470000 );
    CREATE_CHAR( 26, 1964095658, -115.10660000, -19.21740000, 13.76370000, ref l_U285[1], 1 );
    SET_CHAR_HEADING( l_U285[1], 134.33170000 );
    for ( l_U327 = 0; l_U327 <= 1; l_U327++ )
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U285[l_U327], 1 );
        SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U285[l_U327], 1 );
    }
    SET_CHAR_COMPONENT_VARIATION( l_U285[0], 0, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U285[0], 7, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U285[0], 1, 1, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U285[0], 2, 1, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U285[1], 0, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U285[1], 7, 2, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U285[1], 1, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U285[1], 2, 1, 0 );
    TASK_CHAT_WITH_CHAR( l_U285[0], l_U285[1], 1, 1 );
    TASK_CHAT_WITH_CHAR( l_U285[1], l_U285[0], 0, 1 );
    SET_AMBIENT_VOICE_NAME( l_U285[0], "WHORE" );
    sub_5130( 3, l_U285[0], "WHORE", 0 );
    SET_AMBIENT_VOICE_NAME( l_U285[1], "WHORE2" );
    return;
}

void sub_14116()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_14250()
{
    if (NOT (IS_CHAR_DEAD( l_U283 )))
    {
        if (IS_PED_IN_GROUP( l_U283 ))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_738(), 0 ))
            {
                if (DOES_BLIP_EXIST( l_U274 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
                }
                if (NOT l_U301)
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        PRINT_NOW( "CP3_06", 7500, 0 );
                        l_U301 = 1;
                    }
                }
            }
            else if (IS_CHAR_IN_ANY_CAR( sub_4089() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4089(), ref l_U292 );
                GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U292, ref l_U333 );
                if (l_U333 > 2)
                {
                    if (l_U269 != 11)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U274 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U271._fU0, l_U271._fU4, l_U271._fU8, ref l_U274 );
                            SET_ROUTE( l_U274, 1 );
                        }
                    }
                }
                else if (NOT (sub_14537( 0 )))
                {
                    if (NOT l_U306)
                    {
                        PRINT( "CP3_18", 7500, 0 );
                        l_U306 = 1;
                    }
                }
                if (DOES_BLIP_EXIST( l_U274 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
                }
            }
            else if (DOES_BLIP_EXIST( l_U274 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
            }
            CLEAR_THIS_PRINT( "CP3_06" );
            l_U301 = 0;;
        }
    }
    return;
}

int sub_14537(boolean bParam0)
{
    if ((sub_14695()) || ((IS_SCRIPTED_CONVERSATION_ONGOING()) || ((sub_14636()) || ((((bParam0) AND (sub_14607())) || ((NOT bParam0) AND (sub_14553()))) || (IS_MESSAGE_BEING_DISPLAYED())))))
    {
        return 1;
    }
    return 0;
}

int sub_14553()
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        return 1;
    }
    return 0;
}

void sub_14607()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_14636()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_14695()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U239;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

void sub_14904(unknown uParam0)
{
    float fVar3;
    float fVar4;
    unknown uVar5;

    fVar3 = 40.00000000;
    fVar4 = 15.00000000;
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            GET_PLAYER_GROUP( sub_738(), ref uVar5 );
            if (NOT (IS_GROUP_MEMBER( uParam0, uVar5 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4089(), uParam0, fVar4, fVar4, fVar4, 0 ))
                {
                    SET_GROUP_MEMBER( uVar5, uParam0 );
                }
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4089(), uParam0, fVar3, fVar3, fVar3, 0 )))
            {
                REMOVE_CHAR_FROM_GROUP( uParam0 );
            }
        }
    }
    return;
}

void sub_15072()
{
    if (NOT (IS_CHAR_DEAD( l_U283 )))
    {
        if (IS_PED_IN_GROUP( l_U283 ))
        {
            if (DOES_BLIP_EXIST( l_U284 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U284 );
            }
            if (IS_THIS_PRINT_BEING_DISPLAYED( "CP3_04", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
            {
                CLEAR_THIS_PRINT( "CP3_04" );
            }
        }
        else if (NOT l_U298)
        {
            PRINT( "CP3_04", 7500, 0 );
            l_U298 = 1;
        }
        for ( l_U327 = 0; l_U327 <= 1; l_U327++ )
        {
            if (DOES_BLIP_EXIST( l_U288[l_U327] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U288[l_U327] );
            }
        }
        if (DOES_BLIP_EXIST( l_U274 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U284 )))
        {
            ADD_BLIP_FOR_CHAR( l_U283, ref l_U284 );
            SET_BLIP_AS_FRIENDLY( l_U284, 1 );
            sub_9174( l_U284 );
        }
    }
    return;
}

int sub_16245(unknown uParam0, unknown uParam1)
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

void sub_17604(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_17655( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_17655(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_17951(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_17972( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_17972(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_7574( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_18158(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown[4] uVar7;

    array(ref uVar7, 4);
    uVar7[0] = uParam0;
    uVar7[1] = uParam1;
    uVar7[2] = uParam2;
    uVar7[3] = uParam3;
    return sub_18202( ref uVar7, uParam4 );
}

int sub_18202(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_18227( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_18227( (uParam0^)[I], ref uVar5[1], uParam1 ))
        {
            if (uVar5[0] != uVar5[1])
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_18227(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
        {
            return 0;
        }
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, uParam1 );
    return 1;
}

int sub_18979(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    unknown uVar22;
    int iVar23;
    int I;

    l_U243[0] = uParam7;
    l_U243[1] = uParam8;
    l_U243[2] = uParam9;
    l_U242 = uParam7;
    sub_19027();
    sub_19314();
    sub_20194();
    if (sub_20375( l_U243[0], l_U243[1], l_U243[2], uParam11, uParam12, uParam13, uParam14, l_U237, uParam16, 0, 0, 0 ))
    {
        sub_20923( uParam11 );
        sub_20923( uParam12 );
        sub_20923( uParam13 );
        sub_20923( uParam14 );
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_26090())
            {
                l_U207 = 1;
                l_U218 = 1;
                sub_20923( uParam15 );
                sub_20923( uParam19 );
                if ((IS_WANTED_LEVEL_GREATER( sub_738(), 0 )) AND (uParam17))
                {
                    if (DOES_BLIP_EXIST( l_U234 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                        sub_20923( uParam10 );
                    }
                    if ((NOT l_U203) AND ((NOT sub_26252()) AND (NOT (sub_14537( 0 )))))
                    {
                        sub_20803( uParam18, 0 );
                        l_U247 = uParam18;
                        l_U203 = 1;
                        l_U204 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U243[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                        }
                    }
                }
                else if (l_U203)
                {
                    sub_20923( uParam18 );
                    l_U203 = 0;
                    l_U204 = 1;
                }
                if (l_U204)
                {
                    if (NOT (sub_14537( 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U243[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                        }
                        l_U204 = 0;
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U234 )))
                {
                    ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U234 );
                    sub_22874( l_U234 );
                    if (l_U222)
                    {
                        SHOW_BLIP_ON_ALTIMETER( l_U234, 1 );
                    }
                }
                if (NOT (sub_14537( 0 )))
                {
                    if (NOT l_U205)
                    {
                        sub_20803( uParam10, 0 );
                        l_U205 = 1;
                    }
                }
                if (l_U223)
                {
                    iParam6 = 0;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_4089(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, iParam6 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4089(), ref uVar22 );
                    iVar23 = 1;
                    for ( I = 0; I < l_U243; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U243[I] ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U243[I], uVar22 )))
                            {
                                iVar23 = 0;
                            }
                        }
                    }
                    if ((sub_26794()) AND (iVar23))
                    {
                        sub_20923( uParam10 );
                        sub_20923( uParam15 );
                        sub_20923( uParam11 );
                        sub_20923( uParam12 );
                        sub_20923( uParam13 );
                        sub_20923( uParam14 );
                        sub_20923( uParam18 );
                        sub_20923( uParam19 );
                        sub_27291();
                        return 1;
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U234 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                sub_20923( uParam10 );
            }
            if (NOT (sub_14537( 0 )))
            {
                if (NOT l_U207)
                {
                    sub_20803( uParam15, 0 );
                    l_U207 = 1;
                }
                else if (l_U218)
                {
                    if (NOT (IS_STRING_NULL( uParam19 )))
                    {
                        if (NOT l_U208)
                        {
                            sub_20803( uParam19, 0 );
                            l_U208 = 1;
                        }
                    }
                    else if (NOT l_U208)
                    {
                        sub_20803( uParam15, 0 );
                        l_U208 = 1;
                    }
                }
            }
        }
    }
    else if (l_U203)
    {
        l_U203 = 0;
    }
    sub_20923( uParam10 );
    sub_20923( uParam15 );
    sub_20923( uParam19 );
    sub_20923( uParam18 );
    if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
    }
    sub_27993( uParam0, uParam1, uParam2, 0, 0 );
    sub_31422( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_19027()
{
    int I;

    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                if ((sub_14553()) AND ((sub_19120( l_U243[I] )) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U243[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_4089() )))
        {
            if ((sub_14553()) AND ((sub_19120( sub_4089() )) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_4089() ))))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_4089(), 1 );
            }
        }
    }
    return;
}

int sub_19120(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U19._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_19314()
{
    if (NOT l_U216)
    {
        l_U251 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U203 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U204 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U205 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U206 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U208 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U207 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U209 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U210[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U210[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U210[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U214 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U215 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U236, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U237, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U238, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U248._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U248._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U248._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U217 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U218 );
        END_WIDGET_GROUP();
        l_U216 = 1;
    }
    return;
}

void sub_20194()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4089(), 0 );
    }
    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U243[I], 0 );
            }
        }
    }
    return;
}

int sub_20375(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U243[0] = uParam0;
    l_U243[1] = uParam1;
    l_U243[2] = uParam2;
    l_U242 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
        {
            iVar16++;
        }
    }
    if ((NOT (DOES_VEHICLE_EXIST( iParam9 ))) AND ((IS_CHAR_SITTING_IN_ANY_CAR( sub_4089() )) AND (NOT sub_20546())))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4089(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U223)
            {
                sub_20803( "MORE_SEATS", 0 );
                l_U223 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U223 = 0;
        sub_20923( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14116() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U243[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U243[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4089() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4089(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U243[I], sub_14116() ))
                        {
                            if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_4089() )) AND (NOT sub_20546()))
                            {
                                if (NOT (sub_21199( l_U243[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14116() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U243[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_4089(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U243[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U243[I], sub_14116() ))
                {
                    if (sub_21760())
                    {
                        if (l_U225[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U243[I], -1 );
                            l_U225[I] = 0;
                        }
                    }
                    else if (NOT l_U225[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U243[I], 2 );
                        l_U225[I] = 1;
                    }
                }
                if ((NOT (sub_22038( l_U243[I], iParam9 ))) AND ((NOT (sub_21942( l_U243[I], iParam9 ))) AND (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14116() )))))
                {
                    if (sub_22151( l_U243[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14116() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U243[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_14116(), l_U243[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U230[I] )))
                        {
                            GET_GAME_TIMER( ref l_U240 );
                            ADD_BLIP_FOR_CHAR( l_U243[I], ref l_U230[I] );
                            CHANGE_BLIP_DISPLAY( l_U230[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U230[I], 1 );
                            if (bParam8)
                            {
                                sub_22874( l_U230[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U230[I] ))
                {
                    if ((uParam11) || ((sub_21942( l_U243[I], iParam9 )) || (sub_22993( l_U243[I] ))))
                    {
                        if (DOES_BLIP_EXIST( l_U230[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_20923( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_22874( l_U230[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U243[I], iParam9 )))
                    {
                        if ((NOT l_U220) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U243[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U243[I], iParam9 )))
                                {
                                    if (NOT (sub_22993( l_U243[I] )))
                                    {
                                        if (sub_23601( l_U243[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U243[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U243[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_4089(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_4089(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U243[I], sub_14116() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U243[I], 1 );
                                if (l_U219)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U243[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U243[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_4089(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U243[I], ref l_U230[I] );
                                CHANGE_BLIP_DISPLAY( l_U230[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U230[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14116() )))
                        {
                            if (sub_22151( l_U243[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U243[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U243[I], 0 );
                                SET_GROUP_MEMBER( sub_14116(), l_U243[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_4089(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14116() )))
                        {
                            SET_GROUP_MEMBER( sub_14116(), l_U243[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U243[I], sub_14116() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U230[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_20923( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U230[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_14537( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U243[I], sub_4089(), 40.00000000, 40.00000000, 40.00000000, 0 )) || (sub_21199( l_U243[I] )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if ((iVar16 == 1) || ((iVar17 - l_U240) > 1500))
        {
            if (iVar15 > 0)
            {
                if (l_U241 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U241 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar16 > 1) AND (iVar15 == iVar16))
                    {
                        if ((NOT (l_U241 == iVar15)) AND (NOT l_U209))
                        {
                            sub_20803( uParam6, 0 );
                            l_U209 = 1;
                            l_U241 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT (l_U241 == iVar15)) AND (NOT l_U210[I]))
                                {
                                    sub_20803( uVar28[I], 0 );
                                    l_U210[I] = 1;
                                    l_U241 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U241 = 0;
            }
        }
    }
    l_U219 = 0;
    if ((NOT bVar25) AND (iVar18))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U230[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_20923( uVar28[I] );
            }
        }
        sub_20923( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_4089() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4089(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                {
                    SET_CHAR_COORDINATES( l_U243[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_20546()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4089() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4089(), ref uVar2 );
        if (sub_20587( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_20587(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U243; I++ )
        {
            if (DOES_CHAR_EXIST( l_U243[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_20803(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U239 );
    return;
}

void sub_20923(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

int sub_21199(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        GET_CAR_CHAR_IS_USING( sub_4089(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4089(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_21760()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_4089(), ref uVar2 );
    if (sub_20587( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_21942(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_22038(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_14116() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_22151(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_4089(), uVar5 ))
                    {
                        if (sub_20546())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4089(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4089(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_21760())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_4089(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_22874(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U235 ))
        {
            SET_ROUTE( l_U235, 0 );
        }
        l_U235 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_22993(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4089() ))
        {
            if (sub_23041( sub_4089(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_14116(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_14116() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_14116(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_23041(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_23601(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 < 0.50000000) AND (fVar3 > -0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_26090()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_4089() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4089(), ref uVar2 );
        if (sub_20587( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_26252()
{
    if (NOT (IS_CHAR_INJURED( l_U242 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U242 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_26794()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4089() ))
    {
        if ((IS_CHAR_IN_ANY_HELI( sub_4089() )) || (IS_CHAR_ON_ANY_BIKE( sub_4089() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U221)
    {
        if (sub_23601( sub_4089() ))
        {
            if ((l_U215) || (sub_26884( 1, iVar2 )))
            {
                return 1;
            }
        }
    }
    else if ((l_U215) || (sub_26884( 1, iVar2 )))
    {
        return 1;
    }
    return 0;
}

int sub_26884(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4089() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4089(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4089() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4089(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4089()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4089() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4089() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_738() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_738() )))
    {
        return 0;
    }
    return 1;
}

void sub_27291()
{
    int I;

    sub_27300();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U230[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U229 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U229 );
    }
    l_U235 = nil;
    l_U209 = 0;
    for ( I = 0; I < l_U210; I++ )
    {
        l_U210[I] = 0;
        l_U225[I] = 0;
    }
    l_U205 = 0;
    l_U203 = 0;
    l_U204 = 0;
    l_U206 = 0;
    l_U208 = 0;
    l_U207 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U241 = 0;
    for ( I = 0; I < l_U243; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U243[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U243[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_4089(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4089(), 1 );
    }
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    return;
}

void sub_27300()
{
    if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
    }
    return;
}

void sub_27993(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_19314();
    if (l_U214)
    {
        uParam0 = l_U248._fU0;
        uParam1 = l_U248._fU4;
        uParam2 = l_U248._fU8;
        uVar12 = l_U238;
        l_U214 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_4089() )))
    {
        GET_CHAR_HEADING( sub_4089(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_738() );
            sub_28204( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_28625( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U243; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                        if (NOT (IS_CHAR_INJURED( sub_4089() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4089(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U243[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U243[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4089() );
                    WARP_CHAR_INTO_CAR( sub_4089(), uParam4 );
                    for ( I = 0; I < l_U243; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U243[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U243[I], 0 );
                            }
                        }
                    }
                }
                sub_28625( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4089() );
                    WARP_CHAR_INTO_CAR( sub_4089(), uVar8 );
                    sub_29532( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4089() );
                        WARP_CHAR_INTO_CAR( sub_4089(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U243; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U243[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U243; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U243[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_30152( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_28204(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4089() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4089(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_4089(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_28324( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_28324(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_28625(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_4089(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_4089(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_4089(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_4089(), uParam3 );
    return;
}

void sub_29532(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_30152(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if (((bParam0) || (IS_SCREEN_FADED_OUT())) AND (NOT (IS_CHAR_INJURED( sub_4089() ))))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_30532( sub_4089(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_30532( sub_4089(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_30532( sub_4089(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_31081( 0 );
        sub_31081( 1 );
        sub_31081( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U202 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U202;
            if (((g_U30110[2] == 0) AND ((g_U30110[1] == 0) AND (g_U30110[0] == 0))) || (iVar6 > 15000))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_30532(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_30543( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_12325( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_30543(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( -399.10690000, 397.67000000, 14.17720000);
        break;
        case 1:
        return vector( -468.03000000, 153.41000000, 9.80000000);
        break;
        case 2:
        return vector( -440.28000000, 356.98000000, 11.54000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

void sub_31081(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_31422(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_31447( uParam0, uParam1, uParam2, l_U236, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4089(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U236, l_U236, l_U236, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U236 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U236 );
            }
        }
    }
    return;
}

int sub_31447(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_31464( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_4089(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_31464(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_31798()
{
    sub_9598( ref l_U374, 0 );
    sub_11293( 0 );
    CLEAR_WANTED_LEVEL( sub_738() );
    CLEAR_AREA( -278.47420000, 345.05130000, 13.69070000, 10, 1 );
    ENABLE_SCENE_STREAMING( 0 );
    BEGIN_CAM_COMMANDS( ref l_U331 );
    if (NOT (IS_CHAR_DEAD( l_U283 )))
    {
        if (IS_PED_IN_GROUP( l_U283 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U283 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U285[0] )))
    {
        if (IS_PED_IN_GROUP( l_U285[0] ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U285[0] );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U285[1] )))
    {
        if (IS_PED_IN_GROUP( l_U285[1] ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U285[1] );
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4089() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4089(), ref l_U292 );
        if (NOT (IS_CAR_DEAD( l_U292 )))
        {
            SET_CAR_COORDINATES( l_U292, -278.48800000, 346.82640000, 13.69410000 );
            SET_CAR_HEADING( l_U292, 181.53450000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U292 );
        }
    }
    if (NOT l_U334)
    {
        sub_32159();
    }
    SET_USE_HIGHDOF( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_POS( l_U335, -281.87600000, 340.62450000, 15.40815000 );
    SET_CAM_ROT( l_U335, -2.23855200, 0.00000000, -26.49820000 );
    SET_CAM_FOV( l_U335, 34.20003000 );
    SET_CAM_ACTIVE( l_U335, 1 );
    SET_CAM_PROPAGATE( l_U335, 1 );
    sub_7499( "E2Tm3_ARIV", ref l_U374, 7, 1 );
    SETTIMERA( 0 );
    while (l_U339 == 1)
    {
        switch (l_U340)
        {
            case 0:
            if (TIMERA() > 6000)
            {
                if (NOT (IS_CAR_DEAD( l_U292 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U373 );
                    TASK_LEAVE_CAR( 0, l_U292 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -275.33830000, 345.51700000, 13.76010000, 2, 30000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U373 );
                    if (NOT (IS_CHAR_INJURED( l_U283 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U283, l_U373 );
                    }
                    CLEAR_SEQUENCE_TASK( l_U373 );
                }
                l_U340++;
            }
            break;
            case 2:
            if (TIMERA() > 6500)
            {
                if (NOT (IS_CAR_DEAD( l_U292 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U373 );
                    TASK_LEAVE_CAR( 0, l_U292 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -275.33830000, 345.51700000, 13.76010000, 2, 30000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U373 );
                    if (NOT (IS_CHAR_INJURED( l_U285[0] )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U285[0], l_U373 );
                    }
                    CLEAR_SEQUENCE_TASK( l_U373 );
                }
                l_U340++;
            }
            break;
            case 3:
            if (TIMERA() > 7000)
            {
                if (NOT (IS_CAR_DEAD( l_U292 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U373 );
                    TASK_LEAVE_CAR( 0, l_U292 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -275.33830000, 345.51700000, 13.76010000, 2, 30000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U373 );
                    if (NOT (IS_CHAR_INJURED( l_U285[1] )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U285[1], l_U373 );
                    }
                    CLEAR_SEQUENCE_TASK( l_U373 );
                }
                l_U340++;
            }
            break;
            case 1:
            SET_CAM_POS( l_U336, -287.45800000, 359.30720000, 17.15479000 );
            SET_CAM_ROT( l_U336, -8.62523900, -0.00000000, -136.50620000 );
            SET_CAM_FOV( l_U336, 45.00000000 );
            SET_CAM_POS( l_U337, -287.09050000, 358.91990000, 17.07380000 );
            SET_CAM_ROT( l_U337, -8.62523900, -0.00000000, -136.50620000 );
            SET_CAM_FOV( l_U337, 45.00000000 );
            SET_CAM_ACTIVE( l_U335, 0 );
            SET_CAM_PROPAGATE( l_U335, 0 );
            SET_CAM_ACTIVE( l_U338, 1 );
            SET_CAM_PROPAGATE( l_U338, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U338, l_U336, l_U337, 4500, 0 );
            l_U340++;
            break;
            case 4:
            if (TIMERA() > 12000)
            {
                l_U340++;
            }
            break;
            case 5:
            if (DOES_CHAR_EXIST( l_U283 ))
            {
                DELETE_CHAR( ref l_U283 );
            }
            if (DOES_CHAR_EXIST( l_U285[0] ))
            {
                DELETE_CHAR( ref l_U285[0] );
            }
            if (DOES_CHAR_EXIST( l_U285[1] ))
            {
                DELETE_CHAR( ref l_U285[1] );
            }
            SET_CAM_ACTIVE( l_U338, 0 );
            SET_CAM_PROPAGATE( l_U338, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_4089() );
            l_U339 = 0;
            break;
        }
        if (sub_33484())
        {
            l_U339 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            if (DOES_CHAR_EXIST( l_U283 ))
            {
                DELETE_CHAR( ref l_U283 );
            }
            if (DOES_CHAR_EXIST( l_U285[0] ))
            {
                DELETE_CHAR( ref l_U285[0] );
            }
            if (DOES_CHAR_EXIST( l_U285[1] ))
            {
                DELETE_CHAR( ref l_U285[1] );
            }
            INCREMENT_INT_STAT( 372, 1 );
            sub_9598( ref l_U374, 0 );
            SET_CAM_ACTIVE( l_U338, 0 );
            SET_CAM_PROPAGATE( l_U338, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_4089() );
        }
        WAIT( 0 );
    }
    END_CAM_COMMANDS( ref l_U331 );
    ENABLE_SCENE_STREAMING( 1 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    SET_PLAYER_CONTROL( sub_738(), 1 );
    return;
}

void sub_32159()
{
    if (NOT (DOES_CAM_EXIST( l_U335 )))
    {
        CREATE_CAM( 14, ref l_U335 );
    }
    if (NOT (DOES_CAM_EXIST( l_U337 )))
    {
        CREATE_CAM( 14, ref l_U337 );
    }
    if (NOT (DOES_CAM_EXIST( l_U336 )))
    {
        CREATE_CAM( 14, ref l_U336 );
    }
    if (NOT (DOES_CAM_EXIST( l_U338 )))
    {
        CREATE_CAM( 3, ref l_U338 );
    }
    l_U334 = 1;
    return;
}

int sub_33484()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_33945(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_33989( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_33989(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

    if (g_U43133)
    {
        PRINTSTRING( "KGM........End of mission call blocked because the mission is being repeated\n" );
        return;
    }
    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U818 )))
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
        g_U817 = 1;
        g_U818 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_34633()
{
    g_U25 = 82;
    INCREMENT_INT_STAT( 244, 1 );
    g_U43677 = 1;
    g_U43674++;
    if (g_U43674 > 7)
    {
        sub_34698( 0 );
        sub_35345();
        g_U43683 = 1;
    }
    sub_35506();
    sub_2535();
    return;
}

void sub_34698(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 1;
    switch (uParam0)
    {
        case 0:
        iVar3 = 0;
        break;
        default: return;
    }
    if (iVar3 == 1)
    {
        return;
    }
    iVar4 = 0;
    if (NOT g_U43026[iVar3]._fU0)
    {
        iVar4 = g_U43026[iVar3]._fU8;
        if (iVar4 > 0)
        {
            sub_34810( 1, iVar4 );
            g_U43026[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_34810(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_34980( 0 );
    return;
}

void sub_34980(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_35225();
    }
    if ((NOT ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_35225()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_35345()
{
    g_U15811[38] = 1;
    sub_35374( 2, 10000, 60000 );
    return;
}

void sub_35374(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_35389( uParam0, uParam1, uParam2 );
    return;
}

void sub_35389(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15904[uParam0]._fU0 = 1;
    g_U15904[uParam0]._fU4 = iVar5 + iParam1;
    g_U15904[uParam0]._fU8 = uParam2;
    g_U15904[uParam0]._fU12 = 0;
    g_U15904[uParam0]._fU16 = 0;
    return;
}

void sub_35506()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_811( iVar2, 500, 3, 1, 0, 0 );
    SET_PLAYER_MOOD_NORMAL( sub_738() );
    sub_35553();
    sub_35637();
    sub_35725( 0 );
    sub_1573();
    return;
}

void sub_35553()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_35637()
{
    sub_35646();
    return;
}

void sub_35646()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_35725(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_35776( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_35776(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_36252()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U325 );
    if (l_U325 == 0)
    {
        l_U326 = "E2Tm3_CMGEN6";
    }
    if (l_U325 == 1)
    {
        l_U326 = "E2Tm3_CMGEN7";
    }
    if (l_U325 == 2)
    {
        l_U326 = "E2Tm3_CMGEN8";
    }
    if (l_U325 == 3)
    {
        l_U326 = "E2Tm3_CMGEN9";
    }
    if (l_U325 == 4)
    {
        l_U326 = "E2Tm3_CMGEN0";
    }
    return;
}

