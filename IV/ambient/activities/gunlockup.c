void main()
{
    l_U5 = 0;
    l_U6 = 0;
    l_U7 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U121 = 0;
    l_U123 = 0;
    l_U189 = 1;
    l_U190 = 0;
    l_U191 = 0;
    l_U192 = 0;
    l_U193 = 0;
    l_U194 = 0;
    l_U195 = 0;
    l_U196 = 0;

    // TODO Possibly incorrect
    // l_U197
    isFaustin2Running = 0;

    l_U198 = 0;

    l_U211 = "GtaMloRoom01";
    l_U212 = 0;
    l_U218 = 0;
    l_U381 = 0;
    l_U382 = 0;
    l_U383 = 0;
    l_U443 = 0;
    l_U445 = 0;
    l_U446 = 0;
    l_U447 = 0;
    l_U448 = 0;
    l_U449 = 0;
    l_U450 = 0;
    l_U451 = 0;
    l_U453 = 7;
    l_U454 = 1;
    StrCopy( ref l_U455, "GL_ARMOUR", 16 );
    l_U460 = 0;
    ProtectedSet(l_U474, 500);
    l_U475 = 0;
    l_U476 = {1068.14000000, 86.64000000, 35.19000000};
    l_U482 = 0;
    l_U483 = 0;
    l_U487 = 0;
    l_U199 = {l_U488._fU4[0]};
    GET_INTERIOR_AT_COORDS( l_U199._fU0, l_U199._fU4, l_U199._fU8, ref l_U360 );
    while (l_U360 == nil)
    {
        WAIT( 0 );
        GET_INTERIOR_AT_COORDS( l_U199._fU0, l_U199._fU4, l_U199._fU8, ref l_U360 );
    }
    ACTIVATE_INTERIOR( l_U360, 1 );
    GET_INTERIOR_HEADING( l_U360, ref l_U124 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_440();
    }

    // isFaustin2Running Seems to be set to 1 if the faustin2 script is running
    if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "faustin2" )) > 0) AND (DOES_SCRIPT_EXIST( "faustin2" )))
    {
        isFaustin2Running = 1;
    }

    if (NOT isFaustin2Running)
    {
        sub_1898();
    }
    else
    {
        l_U168[0] = 0;
        l_U168[1] = 0;
        l_U168[2] = 0;
        l_U168[3] = 1;
        l_U168[4] = 0;
        l_U168[5] = 0;
        l_U168[6] = 0;
        l_U168[7] = 0;
        l_U168[8] = 0;
        l_U168[9] = 0;
        l_U168[10] = 0;
        l_U168[11] = 0;
        l_U168[12] = 0;
        l_U168[13] = 0;
    }
    sub_2376();
    if (g_U0)
    {
        g_U64663 = 1;
        l_U168[0] = 1;
        l_U168[1] = 1;
        l_U168[2] = 1;
        l_U168[3] = 1;
        l_U168[4] = 1;
        l_U168[5] = 1;
        l_U168[6] = 1;
        l_U168[7] = 1;
        l_U168[8] = 1;
        l_U168[9] = 1;
        l_U168[10] = 1;
        l_U168[11] = 1;
        l_U168[12] = 1;
        l_U168[13] = 1;
        if (isFaustin2Running)
        {
            g_U15654[18] = 0;
        }
        else
        {
            g_U15654[60] = 1;
            g_U15654[18] = 1;
        }
    }
    while (l_U189)
    {
        WAIT( 0 );
        if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "faustin2" )) > 0) AND (DOES_SCRIPT_EXIST( "faustin2" )))
        {
            isFaustin2Running = 1;
        }
        else if (isFaustin2Running)
        {
            if (DOES_BLIP_EXIST( l_U146 ))
            {
                REMOVE_BLIP( l_U146 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U126 ))) AND (DOES_CHAR_EXIST( l_U126 )))
            {
                sub_2426( 2, l_U126, "GUN_NUT", 0 );
            }
        }
        isFaustin2Running = 0;;
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U381)
            {
                case 0:
                if (NOT l_U115)
                {
                    if (NOT (IS_CHAR_INJURED( sub_983() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_983(), -1334.70000000, 317.90000000, 14.49000000, 150.00000000, 150.00000000, 150.00000000, 0 ))
                        {
                            l_U199._fU0 += 1.02000000;
                            l_U199._fU8 += 0.02000000;
                            l_U202 = {-1332.30000000, 308.90000000, 14.90000000};
                            l_U205 = {0.00000000, 0.00000000, 180.00000000};
                            l_U130 = -1780698891;
                            l_U125 = 1;
                            l_U208 = {0.75000000, 0.60000000, 1.20000000};
                            l_U115 = 1;
                        }
                        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_983(), 1066.50300000, 87.56122000, 34.13000000, 150.00000000, 150.00000000, 150.00000000, 0 ))
                        {
                            l_U130 = -1780698891;
                            l_U202 = {1057.40000000, 86.10000000, 34.50000000};
                            l_U205 = {0.00000000, 0.00000000, 90.00000000};
                            l_U125 = 2;
                            l_U208 = {0.75000000, 0.60000000, 1.20000000};
                            l_U115 = 1;
                        }
                    }
                }
                else if (NOT l_U194)
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U202._fU0, l_U202._fU4, l_U202._fU8, 1, 0.00000000 );
                    l_U194 = 1;
                }
                if (g_U64663)
                {
                    sub_3517();
                }
                else if (isFaustin2Running)
                {
                    sub_3517();
                }
                else if (DOES_BLIP_EXIST( l_U146 ))
                {
                    REMOVE_BLIP( l_U146 );
                }
                l_U381 = 10;;;;
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( sub_983() )))
                {
                    if ((sub_7604()) || (LOCATE_CHAR_ANY_MEANS_3D( sub_983(), -1333.07600000, 308.10840000, 13.62120000, 5.00000000, 5.00000000, 5.00000000, 0 )))
                    {
                        if (IS_WANTED_LEVEL_GREATER( sub_731(), 0 ))
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U202._fU0, l_U202._fU4, l_U202._fU8, 1, 0.00000000 );
                            PRINT_HELP( "GLOCK_WL" );
                            if ((NOT (IS_CHAR_INJURED( l_U126 ))) AND (DOES_CHAR_EXIST( l_U126 )))
                            {
                                sub_7891( "GS1_WL2", ref l_U363, 1, 0 );
                            }
                            l_U381 = 10;
                        }
                        else if (NOT (IS_CHAR_DEAD( l_U126 )))
                        {
                            FREEZE_CHAR_POSITION( l_U126, 0 );
                        }
                        l_U381 = 4;;
                    }
                }
                break;
                case 2:
                if (NOT (IS_CHAR_INJURED( sub_983() )))
                {
                    if ((sub_7604()) || (IS_CHAR_IN_AREA_2D( sub_983(), 1049, 79, 1058, 96, 0 )))
                    {
                        if (IS_WANTED_LEVEL_GREATER( sub_731(), 0 ))
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U202._fU0, l_U202._fU4, l_U202._fU8, 1, 0.00000000 );
                            if (l_U443)
                            {
                                sub_7912( "F2_SCREWS", "F2AUD", ref l_U363, 3, 0 );
                            }
                            else
                            {
                                PRINT_HELP( "GLOCK_WL" );
                                if ((NOT (IS_CHAR_INJURED( l_U126 ))) AND (DOES_CHAR_EXIST( l_U126 )))
                                {
                                    sub_7891( "GS1_WL2", ref l_U363, 1, 0 );
                                }
                            }
                            l_U381 = 10;
                        }
                        else if (NOT (IS_CHAR_DEAD( l_U126 )))
                        {
                            FREEZE_CHAR_POSITION( l_U126, 0 );
                        }
                        l_U381 = 5;;
                    }
                }
                break;
                case 4:
                l_U196 = 0;
                if ((NOT sub_7604()) AND (IS_WANTED_LEVEL_GREATER( sub_731(), 0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_983(), -1333.07600000, 308.10840000, 13.62120000, 5.00000000, 5.00000000, 5.00000000, 0 ))
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U202._fU0, l_U202._fU4, l_U202._fU8, 1, 0.00000000 );
                        PRINT_HELP( "GLOCK_WL" );
                        sub_7891( "GS1_WL2", ref l_U363, 1, 0 );
                        l_U381 = 10;
                    }
                }
                if (sub_7604())
                {
                    sub_9366();
                    if (NOT g_U9338)
                    {
                        GET_GAME_TIMER( ref l_U485 );
                        g_U9338 = 1;
                    }
                    if ((NOT g_U9333) AND (NOT l_U482))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U126 ))) AND (DOES_CHAR_EXIST( l_U126 )))
                        {
                            sub_7891( "GS1_GREET2", ref l_U363, 1, 0 );
                        }
                        l_U482 = 1;
                    }
                    l_U381 = 7;
                }
                else if ((NOT g_U9333) AND ((NOT l_U483) AND ((l_U482) AND (NOT sub_7604()))))
                {
                    if ((NOT (IS_CHAR_INJURED( l_U126 ))) AND (DOES_CHAR_EXIST( l_U126 )))
                    {
                        sub_7891( "GS1_BYE2", ref l_U363, 1, 0 );
                    }
                    l_U483 = 1;
                }
                break;
                case 5:
                l_U196 = 0;
                if ((NOT sub_7604()) AND (IS_WANTED_LEVEL_GREATER( sub_731(), 0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_983(), 1057.28900000, 87.17700000, 33.24480000, 5.00000000, 5.00000000, 5.00000000, 0 ))
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U202._fU0, l_U202._fU4, l_U202._fU8, 1, 0.00000000 );
                        if (NOT l_U443)
                        {
                            PRINT_HELP( "GLOCK_WL" );
                            sub_7891( "GS1_WL2", ref l_U363, 1, 0 );
                        }
                        l_U381 = 10;
                    }
                }
                if ((gunShopUnlockFlag1) AND (isFaustin2Running))
                {
                    g_U9334 = 0;
                    l_U168[3] = 1;
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U202._fU0, l_U202._fU4, l_U202._fU8, 0, 0.00000000 );
                    if (sub_7604())
                    {
                        sub_9366();
                        if (NOT g_U9338)
                        {
                            GET_GAME_TIMER( ref l_U485 );
                            g_U9338 = 1;
                        }
                        SETTIMERB( 0 );
                        if (NOT g_U15654[18])
                        {
                            l_U381 = 6;
                        }
                        else if (NOT g_U15654[60])
                        {
                            l_U168[0] = 0;
                            l_U168[5] = 0;
                            if (NOT (DOES_BLIP_EXIST( l_U146 )))
                            {
                                ADD_BLIP_FOR_OBJECT( l_U219[3]._fU20, ref l_U146 );
                                CHANGE_BLIP_DISPLAY( l_U146, 4 );
                                CHANGE_BLIP_COLOUR( l_U146, 2 );
                            }
                        }
                        l_U381 = 8;;
                    }
                }
                else if (sub_7604())
                {
                    sub_9366();
                    if (NOT g_U9338)
                    {
                        GET_GAME_TIMER( ref l_U485 );
                        g_U9338 = 1;
                    }
                    if ((NOT g_U9334) AND (NOT l_U482))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U126 ))) AND (DOES_CHAR_EXIST( l_U126 )))
                        {
                            sub_7891( "GS1_GREET2", ref l_U363, 1, 0 );
                        }
                        l_U482 = 1;
                    }
                    l_U381 = 8;
                }
                else if ((NOT l_U443) AND ((NOT g_U9334) AND ((NOT l_U483) AND ((l_U482) AND (NOT sub_7604())))))
                {
                    if ((NOT (IS_CHAR_INJURED( l_U126 ))) AND (DOES_CHAR_EXIST( l_U126 )))
                    {
                        sub_7891( "GS1_BYE2", ref l_U363, 1, 0 );
                    }
                    l_U483 = 1;
                };;;
                break;
                case 6:
                if (sub_10382())
                {
                    l_U381 = 8;
                }
                break;
                case 7:
                sub_11958();
                if (NOT sub_7604())
                {
                    if (NOT (IS_CHAR_DEAD( l_U126 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U126, 1 );
                        FREEZE_CHAR_POSITION( l_U126, 1 );
                    }
                    if (NOT g_U9333)
                    {
                        if (NOT (sub_25603( l_U369 )))
                        {
                            if (l_U196 == 1)
                            {
                                sub_7891( "GS1_BUY", ref l_U369, 1, 0 );
                            }
                            else
                            {
                                sub_7891( "GS1_NOBUY", ref l_U369, 1, 0 );
                            }
                        }
                    }
                    if (g_U9338)
                    {
                        GET_GAME_TIMER( ref l_U484 );
                        l_U486 = l_U484 - l_U485;
                        INCREMENT_INT_STAT_NO_MESSAGE( 50, l_U486 );
                        g_U9338 = 0;
                    }
                    l_U381 = 4;
                }
                if (NOT (IS_CHAR_INJURED( l_U126 )))
                {
                    if ((IS_PED_RAGDOLL( l_U126 )) || ((IS_CHAR_SHOOTING_IN_AREA( sub_983(), l_U199._fU0 - 9.39310000, l_U199._fU4 - 1.66650000, l_U199._fU0 + 3.09560000, l_U199._fU4 + 6.77950000, 0 )) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_731(), l_U126 )) || (IS_PLAYER_TARGETTING_CHAR( sub_731(), l_U126 )))))
                    {
                        if (NOT l_U487)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U362 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_983() );
                            TASK_LOOK_AT_CHAR( 0, sub_983(), -2, 1 );
                            TASK_STAND_GUARD( 0, l_U384[0]._fU0, l_U384[0]._fU4, l_U384[0]._fU8, l_U124 + 100.48830000, 0.50000000, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U362 );
                            TASK_PERFORM_SEQUENCE( l_U126, l_U362 );
                            CLEAR_SEQUENCE_TASK( l_U362 );
                            if ((IS_PED_RAGDOLL( l_U126 )) || (IS_CHAR_ARMED( sub_983(), 6 )))
                            {
                                if (NOT (sub_25603( l_U363 )))
                                {
                                    sub_7891( "GS1_MONKEY2", ref l_U363, 1, 0 );
                                }
                            }
                            l_U487 = 1;
                        }
                    }
                    if ((NOT (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_731(), l_U126 ))) AND (NOT (IS_PLAYER_TARGETTING_CHAR( sub_731(), l_U126 ))))
                    {
                        if (l_U487)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U126 )))
                            {
                                CLEAR_CHAR_TASKS( l_U126 );
                                TASK_STAND_GUARD( l_U126, l_U384[0]._fU0, l_U384[0]._fU4, l_U384[0]._fU8, l_U124 + 100.48830000, 0.50000000, 0, -1 );
                                l_U487 = 0;
                            }
                        }
                    }
                }
                if (g_U9333 == 1)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_983(), l_U397[12]._fU0, l_U397[12]._fU4, l_U397[12]._fU8, 3.50000000, 3.50000000, 3.50000000, 0 ))
                    {
                        GET_GAME_TIMER( ref l_U214 );
                        if ((l_U214 - g_U9332) > 300000)
                        {
                            if ((NOT (IS_CHAR_INJURED( l_U126 ))) AND (DOES_CHAR_EXIST( l_U126 )))
                            {
                                sub_7891( "GS1_GREET2", ref l_U363, 1, 0 );
                            }
                            g_U9333 = 0;
                        }
                        else
                        {
                            sub_7891( "GS1_AWAY2", ref l_U363, 1, 0 );
                            if (NOT (IS_CHAR_INJURED( l_U126 )))
                            {
                                CLEAR_CHAR_TASKS( l_U126 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U126, 0 );
                                SET_CHAR_RELATIONSHIP( l_U126, 5, 0 );
                                FREEZE_CHAR_POSITION( l_U126, 0 );
                            }
                            l_U381 = 10;
                        }
                    }
                }
                else if ((IS_WANTED_LEVEL_GREATER( sub_731(), 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U126, sub_983(), 0 )))
                {
                    CLEAR_CHAR_TASKS( sub_983() );
                    SET_RELATIONSHIP( 5, 28, 0 );
                    if (NOT (IS_CHAR_INJURED( l_U126 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        CLEAR_CHAR_TASKS( l_U126 );
                        SET_CHAR_RELATIONSHIP( l_U126, 5, 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U126, 0 );
                        FREEZE_CHAR_POSITION( l_U126, 0 );
                    }
                    GET_GAME_TIMER( ref g_U9332 );
                    g_U9333 = 1;
                    l_U381 = 9;
                }
                break;
                case 8:
                sub_11958();
                if (NOT sub_7604())
                {
                    if (NOT (IS_CHAR_DEAD( l_U126 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U126, 1 );
                        FREEZE_CHAR_POSITION( l_U126, 1 );
                    }
                    if (NOT isFaustin2Running)
                    {
                        if (NOT g_U9334)
                        {
                            if (NOT (sub_25603( l_U369 )))
                            {
                                if (l_U196 == 1)
                                {
                                    sub_7891( "GS1_BUY", ref l_U369, 1, 0 );
                                }
                                else
                                {
                                    sub_7891( "GS1_NOBUY", ref l_U369, 1, 0 );
                                }
                            }
                        }
                    }
                    if (g_U9338)
                    {
                        GET_GAME_TIMER( ref l_U484 );
                        l_U486 = l_U484 - l_U485;
                        INCREMENT_INT_STAT_NO_MESSAGE( 50, l_U486 );
                        g_U9338 = 0;
                    }
                    l_U381 = 5;
                }
                if (NOT (IS_CHAR_INJURED( l_U126 )))
                {
                    if ((IS_PED_RAGDOLL( l_U126 )) || ((IS_CHAR_SHOOTING_IN_AREA( sub_983(), l_U199._fU0 - 9.39310000, l_U199._fU4 - 1.66650000, l_U199._fU0 + 3.09560000, l_U199._fU4 + 6.77950000, 0 )) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_731(), l_U126 )) || (IS_PLAYER_TARGETTING_CHAR( sub_731(), l_U126 )))))
                    {
                        if (NOT l_U487)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U362 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_983() );
                            TASK_LOOK_AT_CHAR( 0, sub_983(), -2, 1 );
                            TASK_STAND_GUARD( 0, l_U384[0]._fU0, l_U384[0]._fU4, l_U384[0]._fU8, l_U124 + 100.48830000, 0.50000000, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U362 );
                            TASK_PERFORM_SEQUENCE( l_U126, l_U362 );
                            CLEAR_SEQUENCE_TASK( l_U362 );
                            if (NOT (sub_25603( l_U363 )))
                            {
                                if ((IS_PED_RAGDOLL( l_U126 )) || (IS_CHAR_ARMED( sub_983(), 6 )))
                                {
                                    if (l_U443)
                                    {
                                        sub_7912( "F2_SCREWS", "F2AUD", ref l_U363, 3, 0 );
                                    }
                                    else
                                    {
                                        sub_7891( "GS1_MONKEY2", ref l_U363, 1, 0 );
                                    }
                                }
                            }
                            l_U487 = 1;
                        }
                    }
                    if ((NOT (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_731(), l_U126 ))) AND (NOT (IS_PLAYER_TARGETTING_CHAR( sub_731(), l_U126 ))))
                    {
                        if (l_U487)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U126 )))
                            {
                                CLEAR_CHAR_TASKS( l_U126 );
                                TASK_STAND_GUARD( l_U126, l_U384[0]._fU0, l_U384[0]._fU4, l_U384[0]._fU8, l_U124 + 100.48830000, 0.50000000, 0, -1 );
                                l_U487 = 0;
                            }
                        }
                    }
                }
                if (g_U9334 == 1)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_983(), l_U397[12]._fU0, l_U397[12]._fU4, l_U397[12]._fU8, 3.50000000, 3.50000000, 3.50000000, 0 ))
                    {
                        GET_GAME_TIMER( ref l_U214 );
                        if ((l_U214 - g_U9332) > 300000)
                        {
                            if (l_U443)
                            {
                                sub_7912( "F2_EMTER", "F2AUD", ref l_U363, 3, 0 );
                            }
                            else if ((NOT (IS_CHAR_INJURED( l_U126 ))) AND (DOES_CHAR_EXIST( l_U126 )))
                            {
                                sub_7891( "GS1_GREET2", ref l_U363, 1, 0 );
                            }
                            g_U9334 = 0;
                        }
                        else if (NOT l_U443)
                        {
                            sub_7891( "GS1_AWAY2", ref l_U363, 1, 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U126 )))
                        {
                            CLEAR_CHAR_TASKS( l_U126 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U126, 0 );
                            SET_CHAR_RELATIONSHIP( l_U126, 5, 0 );
                            FREEZE_CHAR_POSITION( l_U126, 0 );
                        }
                        l_U381 = 10;;
                    }
                }
                else if (NOT isFaustin2Running)
                {
                    if ((IS_WANTED_LEVEL_GREATER( sub_731(), 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U126, sub_983(), 0 )))
                    {
                        CLEAR_CHAR_TASKS( sub_983() );
                        SET_RELATIONSHIP( 5, 28, 0 );
                        if (NOT (IS_CHAR_INJURED( l_U126 )))
                        {
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                            CLEAR_CHAR_TASKS( l_U126 );
                            SET_CHAR_RELATIONSHIP( l_U126, 5, 0 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U126, 0 );
                            FREEZE_CHAR_POSITION( l_U126, 0 );
                        }
                        GET_GAME_TIMER( ref g_U9332 );
                        g_U9334 = 1;
                        l_U381 = 9;
                    }
                }
                else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U126, sub_983(), 0 ))
                {
                    g_U9330 = 1;
                };;;
                break;
                case 9:
                if (NOT l_U193)
                {
                    if (NOT (IS_CHAR_INJURED( l_U126 )))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U126, sub_983(), 0 ))
                        {
                            CLEAR_HELP();
                            sub_822( ref l_U363, 0 );
                            g_U9330 = 1;
                            if (DOES_BLIP_EXIST( l_U146 ))
                            {
                                REMOVE_BLIP( l_U146 );
                            }
                            if (NOT l_U443)
                            {
                                sub_7891( "GS1_ASST2", ref l_U363, 1, 0 );
                            }
                            sub_28338();
                            l_U193 = 1;
                        }
                    }
                    else
                    {
                        CLEAR_HELP();
                        g_U9330 = 1;
                        sub_28338();
                        l_U193 = 1;
                    }
                }
                break;
                case 10:
                if (g_U9338)
                {
                    GET_GAME_TIMER( ref l_U484 );
                    l_U486 = l_U484 - l_U485;
                    INCREMENT_INT_STAT_NO_MESSAGE( 50, l_U486 );
                    g_U9338 = 0;
                }
                if (DOES_CHAR_EXIST( l_U126 ))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U126, sub_983(), 0 ))
                    {
                        GET_GAME_TIMER( ref g_U9332 );
                    }
                }
                STORE_WANTED_LEVEL( sub_731(), ref l_U479 );
                if (g_U64663)
                {
                    if (l_U479 == 0)
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U202._fU0, l_U202._fU4, l_U202._fU8, 0, 0.00000000 );
                        if (l_U125 == 1)
                        {
                            if (NOT g_U9333)
                            {
                                l_U381 = 1;
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U214 );
                                if ((l_U214 - g_U9332) > 300000)
                                {
                                    g_U9333 = 0;
                                }
                            }
                        }
                        else if (l_U125 == 2)
                        {
                            if (NOT g_U9334)
                            {
                                l_U381 = 2;
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U214 );
                                if ((l_U214 - g_U9332) > 300000)
                                {
                                    g_U9334 = 0;
                                }
                            }
                        }
                    }
                }
                break;
            }
        }
        else
        {
            l_U189 = 0;
        }
    }
    sub_440();
    return;
}

void sub_440()
{
    sub_461( 4, "GLOCK_H1" );
    sub_822( ref l_U363, 0 );
    sub_822( ref l_U369, 0 );
    sub_822( ref l_U375, 0 );
    if (IS_PLAYER_PLAYING( sub_731() ))
    {
        SET_CHAR_WILL_USE_COVER( sub_983(), 1 );
    }
    if (DOES_BLIP_EXIST( l_U146 ))
    {
        REMOVE_BLIP( l_U146 );
    }
    for ( l_U213 = 0; l_U213 <= (l_U121 - 1); l_U213++ )
    {
        if (DOES_OBJECT_EXIST( l_U219[l_U213]._fU20 ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U219[l_U213]._fU20 );
        }
    }
    if (l_U5 == 1)
    {
        sub_1158();
    }
    SET_RELATIONSHIP( 2, 28, 0 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( l_U199._fU0 - 9.39310000, l_U199._fU4 - 1.66650000, l_U199._fU8 - 4.14000000, l_U199._fU0 + 3.09560000, l_U199._fU4 + 5.77950000, l_U199._fU8 + 5.86000000 );
    REMOVE_ANIMS( "missgunlockup" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1516578222 );
    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U465 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U461 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U455 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U469 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_B1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_A1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FAIL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_BUY" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FULL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FULL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_FAUST" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FAIL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_BUY" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_WH1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H11" ))))))))))))))))))
    {
        CLEAR_HELP();
    }
    SWITCH_PED_PATHS_ON( l_U199._fU0 - 9.39310000, l_U199._fU4 - 1.66650000, l_U199._fU8 - 3.00000000, l_U199._fU0 + 3.09560000, l_U199._fU4 + 6.77950000, l_U199._fU8 + 3.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_461(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((l_U3) AND (g_U9172 == iParam0))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_682();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_731(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_682()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_731()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_822(int iParam0, unknown uParam1)
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

void sub_983()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1158()
{
    if (IS_PLAYER_PLAYING( sub_731() ))
    {
        for ( l_U213 = 0; l_U213 <= 13; l_U213++ )
        {
            if ((NOT l_U147[l_U213]) AND (HAS_CHAR_GOT_WEAPON( sub_983(), l_U219[l_U213]._fU0 )))
            {
                REMOVE_WEAPON_FROM_CHAR( sub_983(), l_U219[l_U213]._fU0 );
            }
        }
    }
    return;
}

void sub_1898()
{
    l_U168[0] = 1;
    if (g_U15654[62] == 1)
    {
        l_U168[1] = 1;
    }
    if (g_U15654[63] == 1)
    {
        l_U168[2] = 1;
    }
    if (g_U15654[66] == 1)
    {
        l_U168[3] = 1;
    }
    if (g_U15654[67] == 1)
    {
        l_U168[4] = 1;
    }
    if (g_U15654[64] == 1)
    {
        l_U168[5] = 1;
    }
    if (g_U15654[65] == 1)
    {
        l_U168[6] = 1;
    }
    if (g_U15654[68] == 1)
    {
        l_U168[7] = 1;
    }
    if (g_U15654[69] == 1)
    {
        l_U168[8] = 1;
    }
    if (g_U15654[70] == 1)
    {
        l_U168[9] = 1;
        l_U168[10] = 1;
    }
    if (g_U15654[71] == 1)
    {
        l_U168[11] = 1;
    }
    if (g_U15654[72] == 1)
    {
        l_U168[12] = 1;
    }
    if (g_U15654[73] == 1)
    {
        l_U168[13] = 1;
    }
    return;
}

void sub_2376()
{
    if (isFaustin2Running)
    {
        if (NOT l_U443)
        {
            sub_2426( 6, l_U126, "SHOPKEEPER", 0 );
            l_U443 = 1;
        }
    }
    else
    {
        sub_2426( 2, l_U126, "GUN_NUT", 0 );
        if (DOES_BLIP_EXIST( l_U146 ))
        {
            REMOVE_BLIP( l_U146 );
        }
    }
    return;
}

void sub_2426(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U16._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U16._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2506( "\n PED NUMBER ", uParam0 );
    sub_2546( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2506(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2546(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3517()
{
    sub_3529( "" );
    REQUEST_MODEL( l_U130 );
    while (NOT (HAS_MODEL_LOADED( l_U130 )))
    {
        WAIT( 0 );
        REQUEST_MODEL( l_U130 );
    }
    CREATE_OBJECT_NO_OFFSET( 501936518, l_U199._fU0, l_U199._fU4, l_U199._fU8, ref l_U131[0], 1 );
    SET_OBJECT_HEADING( l_U131[0], l_U124 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], 0.80000000, 4.00000000, 0.96000000, ref l_U384[0]._fU0, ref l_U384[0]._fU4, ref l_U384[0]._fU8 );
    SET_RELATIONSHIP( 2, 28, 0 );
    CREATE_CHAR( 26, l_U130, l_U384[0]._fU0, l_U384[0]._fU4, l_U384[0]._fU8, ref l_U126, 1 );
    SET_AMBIENT_VOICE_NAME( l_U126, "M_M_GUNNUT_01" );
    SET_CHAR_HEADING( l_U126, l_U124 + 100.48830000 );
    SET_CHAR_RELATIONSHIP( l_U126, 1, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U126, 28 );
    GIVE_WEAPON_TO_CHAR( l_U126, 9, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U126, 0, 0 );
    TASK_STAND_GUARD( l_U126, l_U384[0]._fU0, l_U384[0]._fU4, l_U384[0]._fU8, l_U124 + 100.48830000, 0.50000000, 0, -1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U126, l_U211 );
    TASK_START_SCENARIO_AT_POSITION( l_U126, "SCENARIO_STANDING", l_U384[0]._fU0, l_U384[0]._fU4, l_U384[0]._fU8, l_U124 + 100.48830000 );
    if (isFaustin2Running)
    {
        sub_2426( 6, l_U126, "SHOPKEEPER", 0 );
        l_U443 = 1;
    }
    else
    {
        sub_2426( 2, l_U126, "GUN_NUT", 0 );
        l_U443 = 0;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U130 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -7.39380000, 3.80900000, 0.10710000, ref l_U384[1]._fU0, ref l_U384[1]._fU4, ref l_U384[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -7.51180000, 5.74700000, 0.10730000, ref l_U384[2]._fU0, ref l_U384[2]._fU4, ref l_U384[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -7.53000000, 3.81300000, 0.10720000, ref l_U384[3]._fU0, ref l_U384[3]._fU4, ref l_U384[3]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -3.30000000, -1.30000000, 0.92000000, ref l_U397[0]._fU0, ref l_U397[0]._fU4, ref l_U397[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -1.80000000, -1.30000000, 0.92500000, ref l_U397[1]._fU0, ref l_U397[1]._fU4, ref l_U397[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -0.35000000, -1.40000000, 0.83999990, ref l_U397[2]._fU0, ref l_U397[2]._fU4, ref l_U397[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], 0.90000000, -1.30000000, 0.82800000, ref l_U397[3]._fU0, ref l_U397[3]._fU4, ref l_U397[3]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -4.00000000, 6.20000000, 0.83000000, ref l_U397[4]._fU0, ref l_U397[4]._fU4, ref l_U397[4]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -2.60000000, 6.20000000, 0.83500000, ref l_U397[5]._fU0, ref l_U397[5]._fU4, ref l_U397[5]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -5.00000000, 3.90000000, 0.83999990, ref l_U397[6]._fU0, ref l_U397[6]._fU4, ref l_U397[6]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -1.40000000, 1.50000000, 0.94000000, ref l_U397[7]._fU0, ref l_U397[7]._fU4, ref l_U397[7]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -1.10000000, 6.20000000, 0.95000000, ref l_U397[8]._fU0, ref l_U397[8]._fU4, ref l_U397[8]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], 0.60000000, 6.20000000, 0.95000000, ref l_U397[9]._fU0, ref l_U397[9]._fU4, ref l_U397[9]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -2.50000000, 2.95000000, 0.96000000, ref l_U397[10]._fU0, ref l_U397[10]._fU4, ref l_U397[10]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], 0.30000000, 1.70000000, 0.98000000, ref l_U397[11]._fU0, ref l_U397[11]._fU4, ref l_U397[11]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -3.30000000, 2.40000000, 0.49000000, ref l_U397[12]._fU0, ref l_U397[12]._fU4, ref l_U397[12]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -5.00000000, -1.30000000, 1.02000000, ref l_U397[13]._fU0, ref l_U397[13]._fU4, ref l_U397[13]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U131[0], -1.20000000, 3.00000000, 0.00000000, ref l_U397[14]._fU0, ref l_U397[14]._fU4, ref l_U397[14]._fU8 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 501936518 );
    DELETE_OBJECT( ref l_U131[0] );
    sub_5333( ref l_U219[l_U121], 1, l_U397[13]._fU0, l_U397[13]._fU4, l_U397[13]._fU8, 192.78730000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 7, l_U397[0]._fU0, l_U397[0]._fU4, l_U397[0]._fU8, 90.00000000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 9, l_U397[1]._fU0, l_U397[1]._fU4, l_U397[1]._fU8, 180.00000000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 12, l_U397[2]._fU0, l_U397[2]._fU4, l_U397[2]._fU8, 90.00000000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 13, l_U397[3]._fU0, l_U397[3]._fU4, l_U397[3]._fU8, 90.00000000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 10, l_U397[4]._fU0, l_U397[4]._fU4, l_U397[4]._fU8, 90.00000000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 11, l_U397[5]._fU0, l_U397[5]._fU4, l_U397[5]._fU8, 45.00000000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 14, l_U397[6]._fU0, l_U397[6]._fU4, l_U397[6]._fU8, 90.00000000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 15, l_U397[7]._fU0, l_U397[7]._fU4, l_U397[7]._fU8, 90.00000000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 16, l_U397[8]._fU0, l_U397[8]._fU4, l_U397[8]._fU8, 118.46520000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 17, l_U397[9]._fU0, l_U397[9]._fU4, l_U397[9]._fU8, 298.46520000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 4, l_U397[10]._fU0, l_U397[10]._fU4, l_U397[10]._fU8, 181.15430000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 5, l_U397[11]._fU0, l_U397[11]._fU4, l_U397[11]._fU8, 181.15430000, ref l_U121 );
    sub_5333( ref l_U219[l_U121], 18, l_U397[12]._fU0, l_U397[12]._fU4, l_U397[12]._fU8, 181.15430000, ref l_U121 );
    for ( l_U213 = 0; l_U213 <= (l_U121 - 1); l_U213++ )
    {
        sub_6154( ref l_U219[l_U213] );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U219[l_U213]._fU20, l_U211 );
    }
    if (NOT l_U451)
    {
        CREATE_OBJECT_NO_OFFSET( -1758615024, l_U397[14]._fU0, l_U397[14]._fU4, l_U397[14]._fU8, ref l_U452, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U452, l_U211 );
        SET_OBJECT_ROTATION( l_U452, 90.00000000, 180.00000000, l_U124 + 15.00000000 );
        FREEZE_OBJECT_POSITION( l_U452, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1758615024 );
        l_U451 = 1;
    }
    SET_OBJECT_HEADING( l_U219[0]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[0]._fU20, 90.00000000, 85.00000000, l_U124 + 90.00000000 );
    SET_OBJECT_HEADING( l_U219[1]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[1]._fU20, 90.00000000, 0.00000000, l_U124 + 45.00000000 );
    SET_OBJECT_HEADING( l_U219[2]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[2]._fU20, 90.00000000, 0.00000000, l_U124 + 60.00000000 );
    SET_OBJECT_HEADING( l_U219[3]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[3]._fU20, 90.00000000, 0.00000000, l_U124 );
    SET_OBJECT_HEADING( l_U219[4]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[4]._fU20, 90.00000000, 0.00000000, l_U124 + 315.00000000 );
    SET_OBJECT_HEADING( l_U219[5]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[5]._fU20, 90.00000000, 0.00000000, l_U124 + 160.00000000 );
    SET_OBJECT_HEADING( l_U219[6]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[6]._fU20, 90.00000000, 0.00000000, l_U124 + 200.00000000 );
    SET_OBJECT_HEADING( l_U219[7]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[7]._fU20, 90.00000000, 180.00000000, l_U124 + 270.00000000 );
    SET_OBJECT_HEADING( l_U219[8]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[8]._fU20, 90.00000000, 180.00000000, l_U124 + 130.00000000 );
    SET_OBJECT_HEADING( l_U219[9]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[9]._fU20, 90.00000000, 180.00000000, l_U124 + 200.00000000 );
    SET_OBJECT_HEADING( l_U219[10]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[10]._fU20, 90.00000000, 180.00000000, l_U124 + 180.00000000 );
    SET_OBJECT_HEADING( l_U219[13]._fU20, l_U124 );
    SET_OBJECT_ROTATION( l_U219[13]._fU20, 90.00000000, 0.00000000, l_U124 + 90.00000000 );
    REQUEST_ANIMS( "missgunlockup" );
    while (NOT (HAVE_ANIMS_LOADED( "missgunlockup" )))
    {
        WAIT( 0 );
        REQUEST_ANIMS( "missgunlockup" );
    }
    if (NOT (IS_CHAR_INJURED( l_U126 )))
    {
        UNLOCK_RAGDOLL( l_U126, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U126, 1 );
        FREEZE_CHAR_POSITION( l_U126, 1 );
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U202._fU0, l_U202._fU4, l_U202._fU8, 0, 0.00000000 );
    sub_2426( 0, sub_983(), "NIKO", 0 );
    if (l_U125 == 1)
    {
        l_U381 = 1;
    }
    else if (l_U125 == 2)
    {
        if ((NOT gunShopUnlockFlag1) AND (isFaustin2Running))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U202._fU0, l_U202._fU4, l_U202._fU8, 1, 0.00000000 );
        }
        l_U381 = 2;
    }
    return;
}

void sub_3529(unknown uParam0)
{
    StrCopy( ref l_U16._fU0, uParam0, 16 );
    sub_3546();
    return;
}

void sub_3546()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U16._fU16[I]._fU0 = nil;
        StrCopy( ref l_U16._fU16[I]._fU4, "", 32 );
        l_U16._fU344[I] = 0;
    }
    return;
}

void sub_5333(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if ((uParam6^) < 20)
    {
        iParam0->_fU0 = uParam1;
        iParam0->_fU4 = {uParam2};
        iParam0->_fU16 = uParam5;
        (uParam6^)++;
    }
    return;
}

void sub_6154(int iParam0)
{
    int iVar3;

    if (iParam0->_fU0 == 5)
    {
        iVar3 = -2049396802;
    }
    else
    {
        GET_WEAPONTYPE_MODEL( iParam0->_fU0, ref iVar3 );
    }
    CREATE_OBJECT_NO_OFFSET( iVar3, ref iParam0->_fU4->_fU0, ref iParam0->_fU4->_fU4, (ref iParam0->_fU4->_fU8) - 1.00000000, iParam0 + 20, 1 );
    FREEZE_OBJECT_POSITION( iParam0->_fU20, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( iVar3 );
    return;
}

int sub_7604()
{
    int iVar2;

    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_983(), l_U199._fU0, l_U199._fU4, l_U199._fU8, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (NOT (IS_CHAR_INJURED( sub_983() ))))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_983(), ref iVar2 );
        if ((iVar2 == (GET_HASH_KEY( "Room_gunlobby" ))) || (iVar2 == (GET_HASH_KEY( l_U211 ))))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void sub_7891(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_7912( uParam0, ref l_U16._fU0, uParam1, uParam2, uParam3 );
}

void sub_7912(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7966( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7966(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7988( iParam1 )))
    {
        return 0;
    }
    l_U16._fU384 = 0;
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
    sub_8676( ref g_U8395, ref l_U16 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_7988(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_8065( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_8065( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_8065( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_8065(unknown uParam0)
{
    return;
}

void sub_8676(int iParam0, int iParam1)
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

void sub_9366()
{
    if (IS_PLAYER_PLAYING( sub_731() ))
    {
        for ( l_U213 = 0; l_U213 <= 13; l_U213++ )
        {
            if (HAS_CHAR_GOT_WEAPON( sub_983(), l_U219[l_U213]._fU0 ))
            {
                l_U147[l_U213] = 1;
            }
            else
            {
                l_U147[l_U213] = 0;
            }
        }
    }
    return;
}

int sub_10382()
{
    if (TIMERB() > 1500)
    {
        if (sub_10416( ref l_U114, l_U382 ))
        {
            l_U382 = 3;
        }
    }
    switch (l_U382)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_731(), 0 );
        GET_GAME_VIEWPORT_ID( ref l_U481 );
        WAIT( 0 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U481, l_U211 );
        if (NOT (DOES_BLIP_EXIST( l_U146 )))
        {
            ADD_BLIP_FOR_OBJECT( l_U219[3]._fU20, ref l_U146 );
            CHANGE_BLIP_DISPLAY( l_U146, 4 );
            CHANGE_BLIP_COLOUR( l_U146, 2 );
        }
        BEGIN_CAM_COMMANDS( ref l_U122 );
        CLEAR_PRINTS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        CREATE_CAM( 14, ref l_U116 );
        SET_CAM_POS( l_U116, l_U476._fU0, l_U476._fU4, l_U476._fU8 );
        SET_CAM_ROT( l_U116, -4.58000000, 0.00000000, 72.99000000 );
        SET_CAM_FOV( l_U116, 72.30000000 );
        CREATE_CAM( 14, ref l_U117 );
        SET_CAM_POS( l_U117, l_U476._fU0, l_U476._fU4, l_U476._fU8 );
        SET_CAM_ROT( l_U117, -4.58000000, -0.00000000, 22.99000000 );
        SET_CAM_FOV( l_U117, 60.30000000 );
        CREATE_CAM( 14, ref l_U118 );
        SET_CAM_POS( l_U118, l_U476._fU0, l_U476._fU4, l_U476._fU8 );
        SET_CAM_ROT( l_U118, -4.58000000, 0.00000000, 72.99000000 );
        SET_CAM_FOV( l_U118, 24.90000000 );
        SET_CAM_PROPAGATE( l_U118, 1 );
        SET_CAM_ACTIVE( l_U118, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 3, ref l_U120 );
        SET_CAM_PROPAGATE( l_U120, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U120, l_U118, l_U116, 5000, 0 );
        GET_GAME_VIEWPORT_ID( ref l_U481 );
        WAIT( 0 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U481, l_U211 );
        SETTIMERA( 0 );
        if (NOT (IS_CHAR_DEAD( sub_983() )))
        {
            OPEN_SEQUENCE_TASK( ref l_U480 );
            TASK_FLUSH_ROUTE();
            TASK_EXTEND_ROUTE( 1062.30000000, 88.63230000, 33.24610000 + (1.60000000 / 2) );
            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
            CLOSE_SEQUENCE_TASK( l_U480 );
            TASK_PERFORM_SEQUENCE( sub_983(), l_U480 );
            CLEAR_SEQUENCE_TASK( l_U480 );
        }
        PRINT_HELP_FOREVER( "GLOCK_IH1" );
        l_U382 = 1;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( sub_983() )))
        {
            if (TIMERA() > 5000)
            {
                if ((sub_11367( sub_983() )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_983(), 1062.70300000, 88.55340000, 33.23720000 + 0.25000000, 0.50000000, 0.50000000, 1.00000000, 1 )))
                {
                    SETTIMERA( 0 );
                    l_U123 = 0;
                    l_U382 = 2;
                }
            }
        }
        break;
        case 2:
        switch (l_U123)
        {
            case 0:
            SET_CAM_PROPAGATE( l_U117, 1 );
            CREATE_CAM( 3, ref l_U119 );
            SET_CAM_PROPAGATE( l_U119, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U119, l_U116, l_U117, 6500, 0 );
            sub_7912( "F2_EMTER", "F2AUD", ref l_U363, 2, 0 );
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_IH2" )))
            {
                CLEAR_HELP();
                PRINT_HELP( "GLOCK_IH2" );
            }
            l_U123++;
            break;
            case 1:
            if (TIMERA() > 6000)
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_IH3" )))
                {
                    CLEAR_HELP();
                    PRINT_HELP( "GLOCK_IH3" );
                }
                l_U123++;
            }
            break;
            case 2:
            if (TIMERA() > 12000)
            {
                l_U382 = 4;
            }
            break;
        }
        break;
        case 3:
        CLEAR_CHAR_TASKS( sub_983() );
        CLEAR_PRINTS();
        l_U382 = 4;
        break;
        case 4:
        if (NOT l_U195)
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U122 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_983() );
            SET_PLAYER_CONTROL_ADVANCED( sub_731(), 1, 1, 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U195 = 1;
        }
        l_U123 = 0;
        l_U114 = 0;
        g_U15654[18] = 1;
        CLEAR_HELP();
        PRINT_NOW( "GL_FAUST", 7500, 1 );
        return 1;
        break;
    }
    return 0;
}

int sub_10416(unknown uParam0, int iParam1)
{
    if (NOT sub_10425())
    {
        (uParam0^) = 1;
    }
    if ((uParam0^))
    {
        if ((iParam1 > 0) AND (sub_10425()))
        {
            return 1;
        }
    }
    return 0;
}

int sub_10425()
{
    if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_11367(unknown uParam0)
{
    float fVar3;

    GET_CHAR_SPEED( uParam0, ref fVar3 );
    if ((IS_CHAR_STOPPED( uParam0 )) || (fVar3 < 0.80000000))
    {
        return 1;
    }
    return 0;
}

void sub_11958()
{
    switch (l_U218)
    {
        case 0:
        DISPLAY_CASH( 1 );
        sub_11995();
        break;
        default:
    }
    return;
}

void sub_11995()
{
    switch (l_U383)
    {
        case 0:
        for ( l_U213 = 0; l_U213 <= (l_U121 - 1); l_U213++ )
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_983(), l_U219[l_U213]._fU4._fU0, l_U219[l_U213]._fU4._fU4, l_U219[l_U213]._fU4._fU8 - 0.40000000, 0.80000000, 0.90000000, 1.20000000, 0 ))
            {
                l_U212 = l_U213;
            }
        }
        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FAIL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FULL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FULL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_BUY" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FAIL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U469 ))))))))
        {
            if (TIMERB() > 1500)
            {
                CLEAR_HELP();
            }
        }
        if (LOCATE_CHAR_ON_FOOT_3D( sub_983(), l_U219[l_U212]._fU4._fU0, l_U219[l_U212]._fU4._fU4, l_U219[l_U212]._fU4._fU8, 0.80000000, 0.90000000, 1.20000000, 0 ))
        {
            if ((NOT sub_12489()) AND (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_731() )))
            {
                if (l_U168[l_U212])
                {
                    if (NOT l_U147[l_U212])
                    {
                        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U455 )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U465 ))))
                        {
                            CLEAR_HELP();
                        }
                        if (sub_11367( sub_983() ))
                        {
                            if (sub_12635( 4, 0 ))
                            {
                                if (sub_12902( 4, "GLOCK_H1", 0 ))
                                {
                                    l_U383 = 1;
                                }
                            }
                            else
                            {
                                sub_461( 4, "GLOCK_H1" );
                            }
                        }
                    }
                    else if ((NOT (l_U212 == 12)) AND (NOT (l_U212 == 11)))
                    {
                        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U455 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U461 )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" ))))
                        {
                            CLEAR_HELP();
                        }
                    }
                    if (sub_11367( sub_983() ))
                    {
                        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FAIL" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FULL" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_BUY" ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U469 ))))))
                        {
                            if (NOT (l_U212 == 0))
                            {
                                if (NOT l_U460)
                                {
                                    SET_CURRENT_CHAR_WEAPON( sub_983(), l_U219[l_U212]._fU0, 1 );
                                    GET_AMMO_IN_CHAR_WEAPON( sub_983(), l_U219[l_U212]._fU0, ref l_U459 );
                                    l_U475 = 1;
                                    l_U460 = 1;
                                }
                                else
                                {
                                    DISPLAY_AMMO( 1 );
                                    l_U465 = {sub_13833( l_U219[l_U212]._fU0 )};
                                    PRINT_HELP_FOREVER( ref l_U465 );
                                    if (sub_10425())
                                    {
                                        l_U383 = 6;
                                    }
                                }
                            }
                            else
                            {
                                PRINT_HELP_FOREVER( "GLOCK_B1" );
                            }
                        }
                    }
                }
                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )))
                {
                    CLEAR_HELP();
                    PRINT_HELP_FOREVER( "GL_SOON" );
                }
            }
            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H1" ))
            {
                CLEAR_HELP();
            }
        }
        else if (LOCATE_CHAR_ON_FOOT_3D( sub_983(), l_U397[14]._fU0 + 0.20000000, l_U397[14]._fU4 + 0.20000000, l_U397[14]._fU8, l_U208._fU0, l_U208._fU4, l_U208._fU8, 0 ))
        {
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U465 )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U461 ))))
            {
                CLEAR_HELP();
            }
            if (sub_11367( sub_983() ))
            {
                if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FAIL" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FULL" ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_BUY" )))))
                {
                    if ((NOT sub_12489()) AND (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_731() )))
                    {
                        PRINT_HELP_FOREVER( ref l_U455 );
                        if (sub_10425())
                        {
                            if (NOT sub_14649())
                            {
                                PRINT_HELP( "ARM_FULL" );
                                SETTIMERB( 0 );
                                l_U383 = 0;
                            }
                            else
                            {
                                l_U383 = 8;
                            }
                        }
                    }
                    else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U455 )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_A1" )))
                    {
                        CLEAR_HELP();
                    }
                }
            }
        }
        else
        {
            l_U460 = 0;
            DISPLAY_AMMO( 0 );
            sub_461( 4, "GLOCK_H1" );
            if (l_U475)
            {
                if (IS_CHAR_ARMED( sub_983(), l_U453 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_983(), 0, 0 );
                }
                l_U475 = 0;
            }
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U455 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U465 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U461 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_B1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_A1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_FAUST" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_WH1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H11" )))))))))))
            {
                CLEAR_HELP();
            }
        }
        break;
        case 1:
        sub_461( 4, "GLOCK_H1" );
        if (IS_CHAR_ARMED( sub_983(), l_U453 ))
        {
            SET_CURRENT_CHAR_WEAPON( sub_983(), 0, 0 );
        }
        if (NOT l_U190)
        {
            SET_PLAYER_CONTROL( sub_731(), 0 );
            if (NOT (IS_CHAR_INJURED( sub_983() )))
            {
                TASK_TURN_CHAR_TO_FACE_COORD( sub_983(), l_U219[l_U212]._fU4._fU0, l_U219[l_U212]._fU4._fU4, l_U219[l_U212]._fU4._fU8 );
            }
            while (NOT (sub_15263( sub_983(), 45 )))
            {
                WAIT( 0 );
            }
            l_U190 = 1;
        }
        else if (sub_15354( l_U219[l_U212]._fU0, ref l_U444 ))
        {
            l_U454 = 0;
            sub_461( 4, "GLOCK_H1" );
            l_U383 = 2;
        }
        else if (sub_15509( l_U219[l_U212]._fU0 ))
        {
            l_U454 = 1;
            sub_461( 4, "GLOCK_H1" );
            l_U383 = 2;
        };;;
        break;
        case 2:
        sub_16143( ref l_U219[l_U212] );
        l_U190 = 0;
        if (l_U5)
        {
            if ((TIMERB() > 3000) AND (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" )))
            {
                CLEAR_HELP();
            }
            if (l_U212 == 0)
            {
                sub_18066( l_U122 );
            }
            else
            {
                sub_18312( l_U122 );
            }
        }
        if ((IS_CHAR_PLAYING_ANIM( sub_983(), "missgunlockup", "rpg_loop" )) || ((IS_CHAR_PLAYING_ANIM( sub_983(), "missgunlockup", "uzi_loop" )) || ((IS_CHAR_PLAYING_ANIM( sub_983(), "missgunlockup", "grenade_loop" )) || ((IS_CHAR_PLAYING_ANIM( sub_983(), "missgunlockup", "over_shoulder" )) || ((IS_CHAR_PLAYING_ANIM( sub_983(), "missgunlockup", "shotgun_loop" )) || ((IS_CHAR_PLAYING_ANIM( sub_983(), "missgunlockup", "rifle_loop" )) || (IS_CHAR_PLAYING_ANIM( sub_983(), "missgunlockup", "pistol_loop" ))))))))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" )))
            {
                l_U383 = 3;
            }
        }
        break;
        case 3:
        l_U461 = {sub_18841( l_U219[l_U212]._fU0 )};
        PRINT_HELP_FOREVER( ref l_U461 );
        if (sub_10425())
        {
            if (l_U454)
            {
                if (IS_SCORE_GREATER( sub_731(), ProtectedGet(l_U473) ))
                {
                    CLEAR_HELP();
                    l_U383 = 4;
                }
                else
                {
                    PRINT_HELP( "GUN_FAIL" );
                    SETTIMERB( 0 );
                    l_U383 = 2;
                }
            }
            else
            {
                CLEAR_HELP();
                CLEAR_PRINTS();
                l_U4 = 1;
                l_U383 = 5;
            }
        }
        else if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
        {
            CLEAR_HELP();
            l_U383 = 9;
        }
        break;
        case 4:
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_WH2" )))
        {
            PRINT_HELP_FOREVER( "GLOCK_WH2" );
        }
        if (sub_10425())
        {
            if (sub_19495( l_U219[l_U212]._fU0 ))
            {
                CLEAR_HELP();
                l_U4 = 1;
                l_U454 = 0;
                l_U383 = 5;
            }
        }
        else if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
        {
            CLEAR_HELP();
            l_U383 = 9;
        }
        break;
        case 5:
        sub_461( 4, "GLOCK_WH1" );
        if (NOT g_U15654[60])
        {
            sub_20184( sub_19963( l_U219[l_U212]._fU0 ) );
        }
        if (l_U4)
        {
            if (sub_20242( sub_19963( l_U219[l_U212]._fU0 ) ))
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_19963( l_U219[l_U212]._fU0 ) );
                PLAY_AUDIO_EVENT_FROM_PED( sub_20368( l_U219[l_U212]._fU0 ), sub_983() );
                l_U147[l_U212] = 1;
                l_U469 = {sub_20986( l_U219[l_U212]._fU0 )};
                PRINT_HELP_FOREVER( ref l_U469 );
                SETTIMERB( 0 );
                if ((NOT (IS_CHAR_INJURED( sub_983() ))) AND (NOT (IS_CHAR_INJURED( l_U126 ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U362 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_983() );
                    TASK_LOOK_AT_CHAR( 0, sub_983(), -2, 1 );
                    TASK_STAND_GUARD( 0, l_U384[0]._fU0, l_U384[0]._fU4, l_U384[0]._fU8, l_U124 + 100.48830000, 0.50000000, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U362 );
                    TASK_PERFORM_SEQUENCE( l_U126, l_U362 );
                    CLEAR_SEQUENCE_TASK( l_U362 );
                }
                if (NOT g_U15654[60])
                {
                    if (isFaustin2Running)
                    {
                        sub_7912( "F2_GUN", "F2AUD", ref l_U375, 4, 0 );
                        sub_2426( 2, l_U126, "GUN_NUT", 0 );
                        l_U168[0] = 1;
                        l_U168[5] = 1;
                        g_U15654[60] = 1;
                        if (DOES_BLIP_EXIST( l_U146 ))
                        {
                            REMOVE_BLIP( l_U146 );
                        }
                    }
                }
                else if ((NOT (IS_CHAR_INJURED( l_U126 ))) AND (DOES_CHAR_EXIST( l_U126 )))
                {
                    sub_7891( "GS1_PURCH2", ref l_U363, 1, 0 );
                }
                l_U196 = 1;
                l_U383 = 9;
            }
            else
            {
                PRINT_HELP( "GUN_FAIL" );
                SETTIMERB( 0 );
                l_U4 = 0;
                l_U383 = 2;
            }
        }
        break;
        case 6:
        if (l_U459 < (sub_21863( l_U219[l_U212]._fU0 )))
        {
            l_U4 = 1;
            l_U383 = 7;
        }
        else
        {
            PRINT_HELP( "AMMO_FULL" );
            SETTIMERB( 0 );
            l_U460 = 0;
            l_U383 = 0;
        }
        break;
        case 7:
        if (NOT g_U15654[60])
        {
            sub_20184( sub_22377( l_U219[l_U212]._fU0 ) );
        }
        if (l_U4)
        {
            if (sub_20242( sub_22377( l_U219[l_U212]._fU0 ) ))
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_22377( l_U219[l_U212]._fU0 ) );
                PLAY_AUDIO_EVENT_FROM_PED( sub_20368( l_U219[l_U212]._fU0 ), sub_983() );
                GIVE_WEAPON_TO_CHAR( sub_983(), l_U219[l_U212]._fU0, sub_17673( l_U219[l_U212]._fU0 ), 1 );
                GET_AMMO_IN_CHAR_WEAPON( sub_983(), l_U219[l_U212]._fU0, ref l_U459 );
                if (l_U459 >= (sub_21863( l_U219[l_U212]._fU0 )))
                {
                    SET_CHAR_AMMO( sub_983(), l_U219[l_U212]._fU0, sub_21863( l_U219[l_U212]._fU0 ) );
                }
                if ((isFaustin2Running) AND (NOT g_U15654[60]))
                {
                    SET_CHAR_AMMO( sub_983(), l_U219[l_U212]._fU0, l_U459 + 150 );
                    sub_7912( "F2_GUN", "F2AUD", ref l_U375, 3, 0 );
                    sub_2426( 2, l_U126, "GUN_NUT", 0 );
                    l_U168[0] = 1;
                    l_U168[5] = 1;
                    g_U15654[60] = 1;
                    if (DOES_BLIP_EXIST( l_U146 ))
                    {
                        REMOVE_BLIP( l_U146 );
                    }
                }
                l_U4 = 0;
                l_U460 = 0;
                l_U196 = 1;
                l_U383 = 0;
            }
            else
            {
                PRINT_HELP( "AMMO_FAIL" );
                SETTIMERB( 0 );
                l_U4 = 0;
                l_U460 = 0;
                l_U383 = 0;
            }
        }
        break;
        case 8:
        if (sub_20242( ProtectedGet(l_U474) ))
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 106, ProtectedGet(l_U474) );
            ADD_ARMOUR_TO_CHAR( sub_983(), l_U13 );
            PLAY_AUDIO_EVENT_FROM_PED( "BODY_ARMOUR_BUY", sub_983() );
            PRINT_HELP( "ARM_BUY" );
            SETTIMERB( 0 );
            l_U196 = 1;
            l_U383 = 0;
        }
        else
        {
            PRINT_HELP( "ARM_FAIL" );
            SETTIMERB( 0 );
            l_U383 = 0;
        }
        break;
        case 9:
        sub_461( 4, "GLOCK_H1" );
        sub_23274( ref l_U219[l_U212] );
        if (l_U454)
        {
            if (l_U5 == 0)
            {
                if (l_U4 == 1)
                {
                    GIVE_WEAPON_TO_CHAR( sub_983(), l_U219[l_U212]._fU0, sub_17673( l_U219[l_U212]._fU0 ), 0 );
                    l_U4 = 0;
                }
                if (sub_24480( l_U219[l_U212]._fU0 ))
                {
                    sub_25100( l_U122 );
                    l_U383 = 10;
                }
            }
        }
        else if (l_U5 == 0)
        {
            if (l_U4 == 1)
            {
                if (l_U198)
                {
                    GIVE_WEAPON_TO_CHAR( sub_983(), l_U219[l_U212]._fU0, (sub_17673( l_U219[l_U212]._fU0 )) + l_U444, 0 );
                }
                else
                {
                    GIVE_WEAPON_TO_CHAR( sub_983(), l_U219[l_U212]._fU0, sub_17673( l_U219[l_U212]._fU0 ), 0 );
                }
                l_U4 = 0;
            }
            sub_25100( l_U122 );
            l_U383 = 10;
        }
        break;
        case 10:
        if (((TIMERB() > 3000) AND (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U469 )))
        {
            CLEAR_HELP();
        }
        if (sub_25445( sub_983(), 29 ))
        {
            l_U198 = 0;
            l_U383 = 0;
        }
        break;
    }
    return;
}

int sub_12489()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_12635(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_731() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_731() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_731() )))))
                {
                    if (NOT sub_12489())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_983() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_12787())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_12787()
{
    return sub_12798( 0, 0 );
}

int sub_12798(boolean bParam0, unknown uParam1)
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

int sub_12902(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_12635( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_731(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_13177();
                l_U1 = 1;
                g_U9173 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_13177()
{
    return sub_12798( 1, 1 );
}

void sub_13833(unknown uParam0)
{
    char[16] Result;

    switch (uParam0)
    {
        case 1:
        StrCopy( ref Result, "GL_BBAT3", 16 );
        break;
        case 7:
        StrCopy( ref Result, "GL_PIST3", 16 );
        break;
        case 9:
        StrCopy( ref Result, "GL_DEAGLE3", 16 );
        break;
        case 12:
        StrCopy( ref Result, "GL_UZI3", 16 );
        break;
        case 13:
        StrCopy( ref Result, "GL_MP53", 16 );
        break;
        case 10:
        StrCopy( ref Result, "GL_SHOT3", 16 );
        break;
        case 11:
        StrCopy( ref Result, "GL_BARET3", 16 );
        break;
        case 14:
        StrCopy( ref Result, "GL_AK473", 16 );
        break;
        case 15:
        StrCopy( ref Result, "GL_M43", 16 );
        break;
        case 16:
        StrCopy( ref Result, "GL_SNIPER3", 16 );
        break;
        case 17:
        StrCopy( ref Result, "GL_M40A13", 16 );
        break;
        case 4:
        StrCopy( ref Result, "GL_GREN3", 16 );
        break;
        case 5:
        StrCopy( ref Result, "GL_MOLOTOV3", 16 );
        break;
        case 18:
        StrCopy( ref Result, "GL_RKL3", 16 );
        break;
    }
    return Result;
}

int sub_14649()
{
    if (NOT (IS_CHAR_INJURED( sub_983() )))
    {
        GET_CHAR_ARMOUR( sub_983(), ref l_U12 );
    }
    if (l_U12 < 100)
    {
        l_U13 = 100 - l_U12;
        return 1;
        break;
    }
    return 0;
}

int sub_15263(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_15354(int iParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (NOT (iParam0 == 55))
    {
        GET_WEAPONTYPE_SLOT( iParam0, ref uVar4 );
    }
    GET_CHAR_WEAPON_IN_SLOT( sub_983(), uVar4, ref iVar5, uParam1, ref uVar6 );
    if ((iVar5 == 55) || (iVar5 == 0))
    {
        return 1;
        break;
    }
    if (iVar5 == iParam0)
    {
        return 1;
        break;
    }
    return 0;
}

int sub_15509(int iParam0)
{
    if (iParam0 == 7)
    {
        l_U445 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 9 );
        return 1;
    }
    else if (iParam0 == 9)
    {
        l_U445 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 7 );
        return 1;
    }
    else if (iParam0 == 12)
    {
        l_U198 = 1;
        l_U446 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 13 );
        return 1;
    }
    else if (iParam0 == 13)
    {
        l_U198 = 1;
        l_U446 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 12 );
        return 1;
    }
    else if (iParam0 == 10)
    {
        l_U198 = 1;
        l_U447 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 11 );
        return 1;
    }
    else if (iParam0 == 11)
    {
        l_U198 = 1;
        l_U447 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 10 );
        return 1;
    }
    else if (iParam0 == 14)
    {
        l_U198 = 1;
        l_U448 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 15 );
        return 1;
    }
    else if (iParam0 == 15)
    {
        l_U198 = 1;
        l_U448 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 14 );
        return 1;
    }
    else if (iParam0 == 16)
    {
        l_U198 = 1;
        l_U449 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 17 );
        return 1;
    }
    else if (iParam0 == 17)
    {
        l_U198 = 1;
        l_U449 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 16 );
        return 1;
    }
    else if (iParam0 == 4)
    {
        l_U450 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 5 );
        return 1;
    }
    else if (iParam0 == 5)
    {
        l_U450 = l_U444;
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 4 );
        return 1;
    }
    else if (iParam0 == 1)
    {
        REMOVE_WEAPON_FROM_CHAR( sub_983(), 3 );
        return 1;
    };;;;;;;;;;;;;
    return 0;
}

void sub_16143(int iParam0)
{
    unknown uVar3;

    REQUEST_MODEL( -2001451511 );
    DISPLAY_CASH( 1 );
    DISPLAY_HUD( 0 );
    DISPLAY_RADAR( 0 );
    if (NOT l_U6)
    {
        OPEN_SEQUENCE_TASK( ref uVar3 );
        TASK_PLAY_ANIM( 0, sub_16211( iParam0->_fU0 ), "missgunlockup", 8.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM( 0, sub_16693( iParam0->_fU0 ), "missgunlockup", 8.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        TASK_PERFORM_SEQUENCE( sub_983(), uVar3 );
        CLEAR_SEQUENCE_TASK( uVar3 );
        l_U6 = 1;
    }
    if (NOT l_U5)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_983(), "missgunlockup", sub_16211( iParam0->_fU0 ) ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_983(), "missgunlockup", sub_16211( iParam0->_fU0 ), ref l_U14 );
            if (l_U14 > (sub_17289( iParam0->_fU0 )))
            {
                if (DOES_OBJECT_EXIST( iParam0->_fU20 ))
                {
                    if (IS_PLAYER_PLAYING( sub_731() ))
                    {
                        SET_OBJECT_VISIBLE( iParam0->_fU20, 0 );
                        if (iParam0->_fU0 == 5)
                        {
                            GIVE_WEAPON_TO_CHAR( sub_983(), 5, sub_17673( iParam0->_fU0 ), 0 );
                            SET_CURRENT_CHAR_WEAPON( sub_983(), 5, 0 );
                            SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_983(), 1 );
                            l_U5 = 1;
                        }
                        else
                        {
                            GIVE_WEAPON_TO_CHAR( sub_983(), iParam0->_fU0, sub_17673( iParam0->_fU0 ), 0 );
                            SET_CURRENT_CHAR_WEAPON( sub_983(), iParam0->_fU0, 0 );
                            SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_983(), 1 );
                            l_U5 = 1;
                        }
                    }
                }
            }
        }
    }
    l_U15 = 0.00000000;
    return;
}

void sub_16211(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "GRENADE_INTRO";
        break;
        case 7:
        Result = "pistol_intro";
        break;
        case 9:
        Result = "pistol_intro";
        break;
        case 12:
        Result = "uzi_intro";
        break;
        case 13:
        Result = "pistol_intro";
        break;
        case 10:
        Result = "shotgun_intro";
        break;
        case 11:
        Result = "shotgun_intro";
        break;
        case 14:
        Result = "rifle_intro";
        break;
        case 15:
        Result = "rifle_intro";
        break;
        case 16:
        Result = "rifle_intro";
        break;
        case 17:
        Result = "rifle_intro";
        break;
        case 4:
        Result = "GRENADE_INTRO";
        break;
        case 5:
        Result = "GRENADE_INTRO";
        break;
        case 18:
        Result = "rpg_intro";
        break;
    }
    return Result;
}

void sub_16693(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "over_shoulder";
        break;
        case 7:
        Result = "pistol_loop";
        break;
        case 9:
        Result = "pistol_loop";
        break;
        case 12:
        Result = "uzi_loop";
        break;
        case 13:
        Result = "rifle_loop";
        break;
        case 10:
        Result = "shotgun_loop";
        break;
        case 11:
        Result = "rifle_loop";
        break;
        case 14:
        Result = "rifle_loop";
        break;
        case 15:
        Result = "rifle_loop";
        break;
        case 16:
        Result = "rifle_loop";
        break;
        case 17:
        Result = "rifle_loop";
        break;
        case 4:
        Result = "GRENADE_LOOP";
        break;
        case 5:
        Result = "GRENADE_LOOP";
        break;
        case 18:
        Result = "rpg_loop";
        break;
    }
    return Result;
}

void sub_17289(unknown uParam0)
{
    float Result;

    switch (uParam0)
    {
        case 1:
        Result = 0.64000000;
        break;
        case 7:
        Result = 0.41000000;
        break;
        case 9:
        Result = 0.41000000;
        break;
        case 12:
        Result = 0.41000000;
        break;
        case 13:
        Result = 0.41000000;
        break;
        case 10:
        Result = 0.44000000;
        break;
        case 11:
        Result = 0.44000000;
        break;
        case 14:
        Result = 0.46000000;
        break;
        case 15:
        Result = 0.46000000;
        break;
        case 16:
        Result = 0.46000000;
        break;
        case 17:
        Result = 0.46000000;
        break;
        case 4:
        Result = 0.64000000;
        break;
        case 5:
        Result = 0.64000000;
        break;
        case 18:
        Result = 0.46000000;
        break;
    }
    return Result;
}

int sub_17673(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 1;
        case 7: return 17;
        case 9: return 9;
        case 12: return 50;
        case 13: return 30;
        case 10: return 8;
        case 11: return 10;
        case 14: return 30;
        case 15: return 30;
        case 16: return 10;
        case 17: return 5;
        case 4: return 1;
        case 5: return 1;
        case 18: return 1;
    }
    return -1;
}

void sub_18066(unknown uParam0)
{
    if (sub_13177())
    {
        if (NOT l_U7)
        {
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref uParam0 );
            CREATE_CAM( 14, ref l_U8 );
            ATTACH_CAM_TO_PED( l_U8, sub_983() );
            SET_CAM_FOV( l_U8, 68.50000000 );
            if (NOT (IS_CHAR_INJURED( sub_983() )))
            {
                GET_CHAR_COORDINATES( sub_983(), ref l_U9._fU0, ref l_U9._fU4, ref l_U9._fU8 );
            }
            SET_CAM_ATTACH_OFFSET( l_U8, 0.00000000, 0.77000000, 0.66000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U8, 1 );
            POINT_CAM_AT_COORD( l_U8, l_U9._fU0, l_U9._fU4, l_U9._fU8 + 0.40000000 );
            SET_CAM_ACTIVE( l_U8, 1 );
            SET_CAM_PROPAGATE( l_U8, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U7 = 1;
        }
    }
    return;
}

void sub_18312(unknown uParam0)
{
    if (sub_13177())
    {
        if (NOT l_U7)
        {
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref uParam0 );
            CREATE_CAM( 14, ref l_U8 );
            ATTACH_CAM_TO_PED( l_U8, sub_983() );
            SET_CAM_FOV( l_U8, 68.50000000 );
            SET_CAM_ATTACH_OFFSET( l_U8, 1.00000000, 0.07000000, 0.86000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U8, 1 );
            POINT_CAM_AT_PED( l_U8, sub_983() );
            SET_CAM_ACTIVE( l_U8, 1 );
            SET_CAM_PROPAGATE( l_U8, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U7 = 1;
        }
    }
    return;
}

void sub_18841(unknown uParam0)
{
    char[16] Result;

    switch (uParam0)
    {
        case 1:
        StrCopy( ref Result, "GL_BBAT2", 16 );
        break;
        case 7:
        StrCopy( ref Result, "GL_PIST2", 16 );
        break;
        case 9:
        StrCopy( ref Result, "GL_DEAGLE2", 16 );
        break;
        case 12:
        StrCopy( ref Result, "GL_UZI2", 16 );
        break;
        case 13:
        StrCopy( ref Result, "GL_MP52", 16 );
        break;
        case 10:
        StrCopy( ref Result, "GL_SHOT2", 16 );
        break;
        case 11:
        StrCopy( ref Result, "GL_BARET2", 16 );
        break;
        case 14:
        StrCopy( ref Result, "GL_AK472", 16 );
        break;
        case 15:
        StrCopy( ref Result, "GL_M42", 16 );
        break;
        case 16:
        StrCopy( ref Result, "GL_SNIPER2", 16 );
        break;
        case 17:
        StrCopy( ref Result, "GL_M40A12", 16 );
        break;
        case 4:
        StrCopy( ref Result, "GL_GREN2", 16 );
        break;
        case 5:
        StrCopy( ref Result, "GL_MOLOTOV2", 16 );
        break;
        case 18:
        StrCopy( ref Result, "GL_RKL2", 16 );
        break;
    }
    return Result;
}

int sub_19495(int iParam0)
{
    if (iParam0 == 7)
    {
        l_U147[2] = 0;
        return 1;
    }
    else if (iParam0 == 9)
    {
        l_U147[1] = 0;
        return 1;
    }
    else if (iParam0 == 12)
    {
        l_U147[4] = 0;
        return 1;
    }
    else if (iParam0 == 13)
    {
        l_U147[3] = 0;
        return 1;
    }
    else if (iParam0 == 10)
    {
        l_U147[6] = 0;
        return 1;
    }
    else if (iParam0 == 11)
    {
        l_U147[5] = 0;
        return 1;
    }
    else if (iParam0 == 14)
    {
        l_U147[8] = 0;
        return 1;
    }
    else if (iParam0 == 15)
    {
        l_U147[7] = 0;
        return 1;
    }
    else if (iParam0 == 16)
    {
        l_U147[10] = 0;
        return 1;
    }
    else if (iParam0 == 17)
    {
        l_U147[9] = 0;
        return 1;
    }
    else if (iParam0 == 4)
    {
        l_U147[12] = 0;
        return 1;
    }
    else if (iParam0 == 5)
    {
        l_U147[11] = 0;
        return 1;
    }
    else if (iParam0 == 1)
    {
        return 1;
    };;;;;;;;;;;;;
    return 0;
}

int sub_19963(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 5;
        case 7: return 600;
        case 9: return 1500;
        case 12: return 1200;
        case 13: return 2500;
        case 10: return 1200;
        case 11: return 2500;
        case 14: return 3500;
        case 15: return 5000;
        case 16: return 8500;
        case 17: return 6000;
        case 4: return 1000;
        case 5: return 500;
        case 18: return 15000;
    }
    return -1;
}

void sub_20184(unknown uParam0)
{
    ADD_SCORE( sub_731(), uParam0 );
    return;
}

int sub_20242(int iParam0)
{
    int iVar3;

    if (IS_PLAYER_PLAYING( sub_731() ))
    {
        STORE_SCORE( sub_731(), ref iVar3 );
        if (iVar3 >= iParam0)
        {
            ADD_SCORE( sub_731(), -1 * iParam0 );
            return 1;
        }
    }
    return 0;
}

void sub_20368(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "WEAPON_PICKUP_BASEBALL_BAT";
        break;
        case 7:
        Result = "WEAPON_PICKUP_HANDGUN";
        break;
        case 9:
        Result = "WEAPON_PICKUP_DESERT_EAGLE";
        break;
        case 12:
        Result = "WEAPON_PICKUP_UZI";
        break;
        case 13:
        Result = "WEAPON_PICKUP_MP5K";
        break;
        case 10:
        Result = "WEAPON_PICKUP_SHOTGUN";
        break;
        case 11:
        Result = "WEAPON_PICKUP_BARETTA";
        break;
        case 14:
        Result = "WEAPON_PICKUP_AK47";
        break;
        case 15:
        Result = "WEAPON_PICKUP_M4";
        break;
        case 16:
        Result = "WEAPON_PICKUP_SNIPER_RIFLE";
        break;
        case 17:
        Result = "WEAPON_PICKUP_SNIPER_RIFLE";
        break;
        case 4:
        Result = "WEAPON_PICKUP_GRENADE";
        break;
        case 5:
        Result = "WEAPON_PICKUP_MOLOTOV";
        break;
        case 18:
        Result = "WEAPON_PICKUP_BARETTA";
        break;
    }
    return Result;
}

void sub_20986(unknown uParam0)
{
    char[16] Result;

    switch (uParam0)
    {
        case 1:
        StrCopy( ref Result, "GL_BBAT4", 16 );
        break;
        case 7:
        StrCopy( ref Result, "GL_PIST4", 16 );
        break;
        case 9:
        StrCopy( ref Result, "GL_DEAGLE4", 16 );
        break;
        case 12:
        StrCopy( ref Result, "GL_UZI4", 16 );
        break;
        case 13:
        StrCopy( ref Result, "GL_MP54", 16 );
        break;
        case 10:
        StrCopy( ref Result, "GL_SHOT4", 16 );
        break;
        case 11:
        StrCopy( ref Result, "GL_BARET4", 16 );
        break;
        case 14:
        StrCopy( ref Result, "GL_AK474", 16 );
        break;
        case 15:
        StrCopy( ref Result, "GL_M44", 16 );
        break;
        case 16:
        StrCopy( ref Result, "GL_SNIPER4", 16 );
        break;
        case 17:
        StrCopy( ref Result, "GL_M40A14", 16 );
        break;
        case 4:
        StrCopy( ref Result, "GL_GREN4", 16 );
        break;
        case 5:
        StrCopy( ref Result, "GL_MOLOTOV4", 16 );
        break;
        case 18:
        StrCopy( ref Result, "GL_RKL4", 16 );
        break;
    }
    return Result;
}

int sub_21863(unknown uParam0)
{
    unknown Result;

    switch (uParam0)
    {
        case 1:
        GET_MAX_AMMO( sub_983(), 1, ref Result );
        return Result;
        case 7:
        GET_MAX_AMMO( sub_983(), 7, ref Result );
        return Result;
        case 9:
        GET_MAX_AMMO( sub_983(), 9, ref Result );
        return Result;
        case 12:
        GET_MAX_AMMO( sub_983(), 12, ref Result );
        return Result;
        case 13:
        GET_MAX_AMMO( sub_983(), 13, ref Result );
        return Result;
        case 10:
        GET_MAX_AMMO( sub_983(), 10, ref Result );
        return Result;
        case 11:
        GET_MAX_AMMO( sub_983(), 11, ref Result );
        return Result;
        case 14:
        GET_MAX_AMMO( sub_983(), 14, ref Result );
        return Result;
        case 15:
        GET_MAX_AMMO( sub_983(), 15, ref Result );
        return Result;
        case 16:
        GET_MAX_AMMO( sub_983(), 16, ref Result );
        return Result;
        case 17:
        GET_MAX_AMMO( sub_983(), 17, ref Result );
        return Result;
        case 4:
        GET_MAX_AMMO( sub_983(), 4, ref Result );
        return Result;
        case 5:
        GET_MAX_AMMO( sub_983(), 5, ref Result );
        return Result;
        case 18:
        GET_MAX_AMMO( sub_983(), 18, ref Result );
        return Result;
    }
    return -1;
}

int sub_22377(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 5;
        case 7: return 35;
        case 9: return 100;
        case 12: return 100;
        case 13: return 150;
        case 10: return 100;
        case 11: return 200;
        case 14: return 80;
        case 15: return 100;
        case 16: return 500;
        case 17: return 800;
        case 4: return 1000;
        case 5: return 500;
        case 18: return 5000;
    }
    return -1;
}

void sub_23274(int iParam0)
{
    unknown uVar3;

    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    DISPLAY_CASH( 1 );
    if (l_U6)
    {
        OPEN_SEQUENCE_TASK( ref uVar3 );
        TASK_PLAY_ANIM( 0, sub_23329( iParam0->_fU0 ), "missgunlockup", 8.00000000, 0, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        TASK_PERFORM_SEQUENCE( sub_983(), uVar3 );
        CLEAR_SEQUENCE_TASK( uVar3 );
        l_U6 = 0;
    }
    if (l_U5)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_983(), "missgunlockup", sub_23329( iParam0->_fU0 ) ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_983(), "missgunlockup", sub_23329( iParam0->_fU0 ), ref l_U15 );
            if (l_U15 > (sub_23940( iParam0->_fU0 )))
            {
                if (DOES_OBJECT_EXIST( iParam0->_fU20 ))
                {
                    if (IS_PLAYER_PLAYING( sub_731() ))
                    {
                        SET_OBJECT_VISIBLE( iParam0->_fU20, 1 );
                        if (HAS_CHAR_GOT_WEAPON( sub_983(), iParam0->_fU0 ))
                        {
                            REMOVE_WEAPON_FROM_CHAR( sub_983(), iParam0->_fU0 );
                        }
                        SET_CURRENT_CHAR_WEAPON( sub_983(), 0, 0 );
                        l_U5 = 0;
                    }
                }
            }
        }
    }
    l_U14 = 0.00000000;
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2001451511 );
    return;
}

void sub_23329(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "grenade_outro";
        break;
        case 7:
        Result = "pistol_outro";
        break;
        case 9:
        Result = "pistol_outro";
        break;
        case 12:
        Result = "uzi_outro";
        break;
        case 13:
        Result = "pistol_outro";
        break;
        case 10:
        Result = "shotgun_outro";
        break;
        case 11:
        Result = "shotgun_outro";
        break;
        case 14:
        Result = "rifle_outro";
        break;
        case 15:
        Result = "rifle_outro";
        break;
        case 16:
        Result = "rifle_outro";
        break;
        case 17:
        Result = "rifle_outro";
        break;
        case 4:
        Result = "grenade_outro";
        break;
        case 5:
        Result = "grenade_outro";
        break;
        case 18:
        Result = "rpg_outro";
        break;
    }
    return Result;
}

void sub_23940(unknown uParam0)
{
    float Result;

    switch (uParam0)
    {
        case 1:
        Result = 0.44000000;
        break;
        case 7:
        Result = 0.51000000;
        break;
        case 9:
        Result = 0.51000000;
        break;
        case 12:
        Result = 0.51000000;
        break;
        case 13:
        Result = 0.51000000;
        break;
        case 10:
        Result = 0.36000000;
        break;
        case 11:
        Result = 0.36000000;
        break;
        case 14:
        Result = 0.40000000;
        break;
        case 15:
        Result = 0.40000000;
        break;
        case 16:
        Result = 0.40000000;
        break;
        case 17:
        Result = 0.40000000;
        break;
        case 4:
        Result = 0.44000000;
        break;
        case 5:
        Result = 0.44000000;
        break;
        case 18:
        Result = 0.37000000;
        break;
    }
    return Result;
}

int sub_24480(int iParam0)
{
    if (iParam0 == 7)
    {
        l_U445 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 9, l_U445, 0 );
        return 1;
    }
    else if (iParam0 == 9)
    {
        l_U445 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 7, l_U444, 0 );
        return 1;
    }
    else if (iParam0 == 12)
    {
        l_U446 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 13, l_U446, 0 );
        return 1;
    }
    else if (iParam0 == 13)
    {
        l_U446 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 12, l_U446, 0 );
        return 1;
    }
    else if (iParam0 == 10)
    {
        l_U447 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 11, l_U447, 0 );
        return 1;
    }
    else if (iParam0 == 11)
    {
        l_U447 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 10, l_U447, 0 );
        return 1;
    }
    else if (iParam0 == 14)
    {
        l_U448 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 15, l_U448, 0 );
        return 1;
    }
    else if (iParam0 == 15)
    {
        l_U448 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 14, l_U448, 0 );
        return 1;
    }
    else if (iParam0 == 16)
    {
        l_U449 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 17, l_U449, 0 );
        return 1;
    }
    else if (iParam0 == 17)
    {
        l_U449 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 16, l_U449, 0 );
        return 1;
    }
    else if (iParam0 == 4)
    {
        l_U450 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 5, l_U450, 0 );
        return 1;
    }
    else if (iParam0 == 5)
    {
        l_U450 = l_U444;
        GIVE_WEAPON_TO_CHAR( sub_983(), 4, l_U450, 0 );
        return 1;
    }
    else if (iParam0 == 1)
    {
        GIVE_WEAPON_TO_CHAR( sub_983(), 3, 1, 0 );
        return 1;
    };;;;;;;;;;;;;
    return 0;
}

void sub_25100(unknown uParam0)
{
    if (l_U7)
    {
        SET_CAM_ACTIVE( l_U8, 0 );
        SET_CAM_PROPAGATE( l_U8, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        END_CAM_COMMANDS( ref uParam0 );
        DESTROY_CAM( l_U8 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_PLAYER_CONTROL( sub_731(), 1 );
        sub_682();
        l_U7 = 0;
    }
    return;
}

int sub_25445(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_25603(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_8065( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_8065( "\n speech is not playing" );
    }
    return 0;
}

void sub_28338()
{
    while ((sub_28382( l_U384[3]._fU0, l_U384[3]._fU4, l_U384[3]._fU8, 2.00000000 )) || ((sub_28382( l_U384[2]._fU0, l_U384[2]._fU4, l_U384[2]._fU8, 2.00000000 )) || (NOT (sub_28382( l_U384[1]._fU0, l_U384[1]._fU4, l_U384[1]._fU8, 2.00000000 )))))
    {
        WAIT( 0 );
    }
    if (NOT l_U191)
    {
        SET_RELATIONSHIP( 5, 28, 0 );
        CREATE_CHAR( 7, l_U130, l_U384[1]._fU0, l_U384[1]._fU4, l_U384[1]._fU8, ref l_U127, 1 );
        SET_AMBIENT_VOICE_NAME( l_U127, "M_M_GUNNUT_01_HELP_02" );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U215 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U127, "Room_gunlobby" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U127 );
        CREATE_CHAR( 7, l_U130, l_U384[2]._fU0, l_U384[2]._fU4, l_U384[2]._fU8, ref l_U128, 1 );
        SET_AMBIENT_VOICE_NAME( l_U128, "M_M_GUNNUT_01_HELP_01" );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U216 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U128, "Room_gunlobby" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U128 );
        CREATE_CHAR( 7, l_U130, l_U384[3]._fU0, l_U384[3]._fU4, l_U384[3]._fU8, ref l_U129, 1 );
        SET_AMBIENT_VOICE_NAME( l_U129, "M_M_GUNNUT_01_HELP_02" );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U217 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U129, "Room_gunlobby" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U129 );
        if (NOT (IS_CHAR_INJURED( l_U127 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U127, 28 );
            GIVE_WEAPON_TO_CHAR( l_U127, 11, 150, 0 );
            SET_CHAR_HEADING( l_U127, 180.00000000 );
            SET_COMBAT_DECISION_MAKER( l_U127, l_U215 );
            TASK_COMBAT( l_U127, sub_983() );
        }
        if (NOT (IS_CHAR_INJURED( l_U128 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U128, 28 );
            GIVE_WEAPON_TO_CHAR( l_U128, 13, 150, 0 );
            SET_CHAR_HEADING( l_U128, 180.00000000 );
            SET_COMBAT_DECISION_MAKER( l_U128, l_U216 );
            TASK_COMBAT( l_U128, sub_983() );
        }
        if (NOT (IS_CHAR_INJURED( l_U129 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U129, 28 );
            GIVE_WEAPON_TO_CHAR( l_U129, 11, 150, 0 );
            SET_CHAR_HEADING( l_U129, 180.00000000 );
            SET_COMBAT_DECISION_MAKER( l_U129, l_U217 );
            TASK_COMBAT( l_U129, sub_983() );
        }
        if (NOT (IS_CHAR_INJURED( l_U126 )))
        {
            ;
        }
        l_U191 = 1;
    }
    else
    {
        sub_29290();
    }
    return;
}

int sub_28382(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_29290()
{
    if (NOT l_U192)
    {
        if (NOT (IS_CHAR_INJURED( l_U127 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U127 );
            SET_COMBAT_DECISION_MAKER( l_U127, l_U215 );
            SET_CHAR_RELATIONSHIP( l_U127, 5, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U128 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U128 );
            SET_COMBAT_DECISION_MAKER( l_U128, l_U216 );
            SET_CHAR_RELATIONSHIP( l_U128, 5, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U129 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U128 );
            SET_COMBAT_DECISION_MAKER( l_U128, l_U217 );
            SET_CHAR_RELATIONSHIP( l_U128, 5, 0 );
            CLEAR_SEQUENCE_TASK( l_U361 );
        }
        l_U192 = 1;
    }
    return;
}

