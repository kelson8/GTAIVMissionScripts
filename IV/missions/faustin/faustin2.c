void main()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

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
    l_U481 = -1;
    l_U489 = {0.00000000, 0.00000000, 0.00000000};
    l_U492 = 2.50000000;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 0;
    l_U602 = 0;
    l_U607 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_167();
        sub_2277();
    }
    WAIT( 0 );
    sub_4774();
    while (true)
    {
        WAIT( 0 );
        if (l_U574)
        {
            l_U573 = 1;
        }
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_9050();
        }
        else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            sub_20710();
        }
        if (l_U602 != 25)
        {
            sub_22506();
            sub_28204();
            // l_U501 = dimitriChar
            if (DOES_CHAR_EXIST( dimitriChar ))
            {
                if ((IS_CHAR_DEAD( dimitriChar )) || (IS_CHAR_INJURED( dimitriChar )))
                {
                    l_U604 = 1;
                    sub_22606();
                }
            }
            if (g_U9330)
            {
                l_U604 = 3;
                sub_22606();
            }
        }
        if (AreCharsInCar( CurrentPlayerChar(), dimitriChar ))
        {
            if (NOT (DOES_VEHICLE_EXIST( l_U507 )))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref l_U507 );
                SET_CAR_AS_MISSION_CAR( l_U507 );
            }
        }
        else if (NOT (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( dimitriChar )))
            {
                if (DOES_VEHICLE_EXIST( l_U507 ))
                {
                    ;
                }
            }
        }
        switch (l_U602)
        {
            case 0:
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                if ((sub_29018()) AND ((NOT l_U575) AND (IS_SCREEN_FADED_IN())))
                {
                    sub_29252( "F2_CAR1", 0, 1, ref l_U593, 6, 1 );
                    l_U575 = 1;
                }
                if (sub_29426( ref l_U498, ref l_U497, dimitriChar, 775.89700000, -548.45300000, 10.81600000, "GI_01", "DIMITRI_BUDDY", "GI_01" ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), l_U586.x, l_U586.y, l_U586.z, 1.60000000, 1.60000000, 1.60000000, 0 ))
                    {
                        sub_30048();
                        sub_30087();
                        SET_EVERYONE_IGNORE_PLAYER( CurrentPlayerId(), 1 );
                        l_U602 = 2;
                    }
                    if (NOT l_U567)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), 775.89700000, -548.45300000, 10.81600000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                        {
                            if (sub_24205( 1, 1 ))
                            {
                                sub_31798();
                                if (NOT (IS_CHAR_DEAD( dimitriChar )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( dimitriChar );
                                    OPEN_SEQUENCE_TASK( ref l_U589 );
                                    TASK_LEAVE_ANY_CAR( 0 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 788.84750000, -535.65310000, 7.52740000, 2, 80000, 0.40000000 );
                                    CLOSE_SEQUENCE_TASK( l_U589 );
                                    TASK_PERFORM_SEQUENCE( dimitriChar, l_U589 );
                                    CLEAR_SEQUENCE_TASK( l_U589 );
                                }
                                if (DOES_BLIP_EXIST( l_U497 ))
                                {
                                    REMOVE_BLIP( l_U497 );
                                }
                                ADD_BLIP_FOR_COORD( 787.13480000, -536.92160000, 6.52270000, ref l_U497 );
                                SET_ROUTE( l_U497, 1 );
                                sub_30048();
                                PRINT_NOW( "GI_02", 7500, 0 );
                                l_U602 = 1;
                            }
                        }
                        else if (NOT l_U566)
                        {
                            if (sub_29018())
                            {
                                sub_32220( "GI_01", 7500 );
                                l_U566 = 1;
                            }
                        }
                        else
                        {
                            sub_32293( dimitriChar, "F2_CAR1", "F2_CAR2", 0 );
                        }
                    }
                }
            }
            break;
            case 1:
            if (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), 787.13000000, -537.02100000, 8.02800000, 1.30000000, 1.30000000, 1.30000000, 0 ))
            {
                sub_30087();
                SET_EVERYONE_IGNORE_PLAYER( CurrentPlayerId(), 1 );
                if (NOT (IS_CHAR_DEAD( l_U502 )))
                {
                    TASK_LOOK_AT_CHAR( l_U502, CurrentPlayerChar(), -2, 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                {
                    TASK_LOOK_AT_CHAR( l_U503[0], CurrentPlayerChar(), -2, 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                {
                    TASK_LOOK_AT_CHAR( l_U503[1], CurrentPlayerChar(), -2, 0 );
                    if (NOT (IS_CHAR_DEAD( dimitriChar )))
                    {
                        TASK_LOOK_AT_CHAR( dimitriChar, l_U503[1], -2, 0 );
                    }
                }
                SET_WANTED_MULTIPLIER( 0.00000000 );
                l_U602 = 2;
            }
            else
            {
                GET_CHAR_COORDINATES( dimitriChar, ref l_U576[0]._fU0, ref l_U576[0]._fU4, ref l_U576[0]._fU8 );
                if (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), l_U576[0]._fU0, l_U576[0]._fU4, l_U576[0]._fU8, 20.00000000, 20.00000000, 20.00000000, 0 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), l_U576[0]._fU0, l_U576[0]._fU4, l_U576[0]._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U497 )))
                        {
                            if (DOES_BLIP_EXIST( l_U498 ))
                            {
                                REMOVE_BLIP( l_U498 );
                            }
                            ADD_BLIP_FOR_COORD( 787.13480000, -536.92160000, 6.52270000, ref l_U497 );
                            SET_ROUTE( l_U497, 1 );
                            PRINT_NOW( "GI_02", 7500, 0 );
                        }
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U498 )))
                {
                    if (DOES_BLIP_EXIST( l_U497 ))
                    {
                        REMOVE_BLIP( l_U497 );
                    }
                    ADD_BLIP_FOR_CHAR( dimitriChar, ref l_U498 );
                    SET_BLIP_AS_FRIENDLY( l_U498, 1 );
                    sub_32220( "GI_39", 7500 );
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_DEAD( l_U502 )))
            {
                if ((l_U605) AND ((NOT l_U545) AND (sub_29018())))
                {
                    PRINT_NOW( "GI_52", 7500, 1 );
                    l_U545 = 1;
                }
                if (((NOT IS_USING_CONTROLLER()) || (IS_AUTO_AIMING_ON())) AND ((l_U605) AND ((NOT l_U556) AND (TIMERA() > 2000))))
                {
                    PRINT_HELP_FOREVER( "GI_10" );
                    l_U556 = 1;
                }
                if (sub_34170( l_U502 ))
                {
                    CLEAR_HELP();
                    REMOVE_BLIP( l_U498 );
                    sub_24777();
                    sub_29252( "F2_POINT1", 0, 1, ref l_U593, 6, 1 );
                    l_U602 = 3;
                }
                else
                {
                    SetupBlipsForPeds();
                    sub_35428( l_U502, l_U508, l_U521, CurrentPlayerChar(), 0 );
                    sub_35428( l_U503[0], l_U511[0], l_U522[0], CurrentPlayerChar(), 1 );
                    sub_35428( l_U503[1], l_U511[1], l_U522[1], CurrentPlayerChar(), 2 );
                    sub_35428( dimitriChar, l_U518, l_U525, l_U503[1], 3 );
                }
            }
            break;
            case 3:
            if (sub_29018())
            {
                if (DOES_BLIP_EXIST( l_U498 ))
                {
                    REMOVE_BLIP( l_U498 );
                }
                if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U503[1], ref l_U498 );
                }
                if (NOT (IS_CHAR_DEAD( dimitriChar )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U589 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U503[1] );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "point_fwd", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U589 );
                    TASK_PERFORM_SEQUENCE( dimitriChar, l_U589 );
                    CLEAR_SEQUENCE_TASK( l_U589 );
                }
                sub_24777();
                sub_29252( "F2_POINT1", 2, 1, ref l_U593, 6, 1 );
                SETTIMERA( 0 );
                l_U602 = 4;
            }
            else
            {
                SetupBlipsForPeds();
                sub_35428( l_U502, l_U508, l_U521, CurrentPlayerChar(), 0 );
                sub_35428( l_U503[0], l_U511[0], l_U522[0], CurrentPlayerChar(), 1 );
                sub_35428( l_U503[1], l_U511[1], l_U522[1], CurrentPlayerChar(), 2 );
                sub_35428( dimitriChar, l_U518, l_U525, l_U503[1], 3 );
            }
            break;
            case 4:
            if ((NOT (IS_CHAR_DEAD( l_U503[1] ))) AND ((NOT (IS_CHAR_DEAD( l_U503[0] ))) AND (NOT (IS_CHAR_DEAD( l_U502 )))))
            {
                if (sub_34170( l_U503[1] ))
                {
                    CLEAR_HELP();
                    if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U589 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, CurrentPlayerChar() );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "point_fwd", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U589 );
                        TASK_PERFORM_SEQUENCE( l_U503[1], l_U589 );
                        CLEAR_SEQUENCE_TASK( l_U589 );
                    }
                    SET_CHAR_NEVER_TARGETTED( l_U503[0], 1 );
                    SET_CHAR_NEVER_TARGETTED( l_U503[1], 0 );
                    SET_CHAR_NEVER_TARGETTED( l_U502, 1 );
                    sub_24777();
                    sub_29252( "F2_POINT2", 0, 1, ref l_U593, 6, 1 );
                    REMOVE_BLIP( l_U498 );
                    l_U602 = 5;
                }
                else if (sub_34170( l_U502 ))
                {
                    if (NOT l_U542)
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U502, 1 );
                        SET_CHAR_NEVER_TARGETTED( l_U503[0], 1 );
                        SET_CHAR_NEVER_TARGETTED( l_U503[1], 0 );
                        l_U542 = 1;
                    }
                }
                else if (l_U542)
                {
                    SET_CHAR_NEVER_TARGETTED( l_U502, 0 );
                    SET_CHAR_NEVER_TARGETTED( l_U503[0], 1 );
                    SET_CHAR_NEVER_TARGETTED( l_U503[1], 1 );
                    l_U542 = 0;
                };;;
                if ((NOT l_U543) AND (sub_29018()))
                {
                    sub_32220( "GI_53", 7500 );
                    l_U543 = 1;
                }
                if (((NOT IS_USING_CONTROLLER()) || (IS_AUTO_AIMING_ON())) AND ((l_U605) AND ((TIMERA() > 2000) AND (NOT l_U557))))
                {
                    PRINT_HELP( "GI_13" );
                    l_U557 = 1;
                }
                sub_35428( l_U502, l_U508, l_U521, CurrentPlayerChar(), 0 );
                sub_35428( l_U503[0], l_U511[0], l_U522[0], CurrentPlayerChar(), 1 );
                sub_35428( l_U503[1], l_U511[1], l_U522[1], CurrentPlayerChar(), 2 );
                sub_35428( dimitriChar, l_U518, l_U525, l_U503[1], 3 );
                SetupBlipsForPeds();
            }
            break;
            case 5:
            if (sub_29018())
            {
                if ((NOT (IS_CHAR_DEAD( l_U503[1] ))) AND (NOT (IS_CHAR_DEAD( dimitriChar ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U589 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U503[1] );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "point_fwd", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U589 );
                    TASK_PERFORM_SEQUENCE( dimitriChar, l_U589 );
                    CLEAR_SEQUENCE_TASK( l_U589 );
                }
                sub_29252( "F2_POINT2", 1, 1, ref l_U593, 6, 1 );
                if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                {
                    if (DOES_BLIP_EXIST( l_U498 ))
                    {
                        REMOVE_BLIP( l_U498 );
                    }
                    ADD_BLIP_FOR_CHAR( l_U503[1], ref l_U498 );
                }
                l_U602 = 6;
                SETTIMERA( 0 );
            }
            else
            {
                SetupBlipsForPeds();
                sub_35428( l_U502, l_U508, l_U521, CurrentPlayerChar(), 0 );
                sub_35428( l_U503[0], l_U511[0], l_U522[0], CurrentPlayerChar(), 1 );
                sub_35428( l_U503[1], l_U511[1], l_U522[1], CurrentPlayerChar(), 2 );
                sub_35428( dimitriChar, l_U518, l_U525, l_U503[1], 3 );
                if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                {
                    if (IS_PED_RAGDOLL( l_U503[1] ))
                    {
                        sub_24777();
                        l_U602 = 6;
                    }
                }
            }
            break;
            case 6:
            if ((NOT (IS_CHAR_DEAD( l_U502 ))) AND (NOT (IS_CHAR_DEAD( l_U503[0] ))))
            {
                if (NOT l_U564)
                {
                    if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                    {
                        if (IS_PED_RAGDOLL( l_U503[1] ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( l_U503[0], "PANIC", "PAIN_VOICE", 1, 0, 0 );
                                TASK_LOOK_AT_CHAR( l_U503[0], l_U503[1], 2000, 0 );
                            }
                            SET_CHAR_HEALTH( l_U503[1], 60 );
                            SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U503[1], 0 );
                            TASK_CLEAR_LOOK_AT( l_U503[1] );
                            TASK_CLEAR_LOOK_AT( l_U502 );
                            REMOVE_BLIP( l_U498 );
                            CLEAR_HELP();
                            if ((IS_USING_CONTROLLER()) AND ((IS_AUTO_AIMING_ON()) AND (NOT l_U555)))
                            {
                                if (USING_STANDARD_CONTROLS())
                                {
                                    PRINTNL();
                                    PRINTSTRING( "FREEAIM2" );
                                    PRINTNL();
                                }
                            }
                            GET_CHAR_LAST_DAMAGE_BONE( l_U503[1], ref l_U601 );
                            if ((l_U601 == 417) || ((l_U601 == 14768) || ((l_U601 == 14512) || ((l_U601 == 1200) || ((l_U601 == 421) || ((l_U601 == 425) || ((l_U601 == 420) || ((l_U601 == 424) || ((l_U601 == 419) || ((l_U601 == 423) || (l_U601 == 418)))))))))))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U589 );
                                TASK_PLAY_ANIM( 0, "shock_to_plead", "missfaustin2", 4.00000000, 0, 0, 0, 0, -1 );
                                if (NOT (IS_CHAR_DEAD( dimitriChar )))
                                {
                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, dimitriChar );
                                }
                                CLOSE_SEQUENCE_TASK( l_U589 );
                                TASK_PERFORM_SEQUENCE( l_U502, l_U589 );
                                CLEAR_SEQUENCE_TASK( l_U589 );
                                sub_29252( "F2_PAY", 0, 1, ref l_U593, 6, 1 );
                                if (NOT (IS_CHAR_DEAD( dimitriChar )))
                                {
                                    TASK_TURN_CHAR_TO_FACE_CHAR( dimitriChar, l_U502 );
                                }
                            }
                            else
                            {
                                l_U592 = 1;
                                l_U604 = 2;
                                sub_22606();
                            }
                            l_U564 = 1;
                        }
                        if (NOT l_U552)
                        {
                            if ((NOT l_U592) AND ((sub_29018()) AND (sub_34170( l_U503[1] ))))
                            {
                                sub_4615( ref l_U593, 0 );
                                sub_29252( "F2_GUY1", 0, 1, ref l_U593, 6, 1 );
                                TASK_PLAY_ANIM( l_U503[1], "reaction_shock", "missfaustin2", 4.00000000, 0, 0, 0, 0, -1 );
                                l_U552 = 1;
                            }
                        }
                        else if ((NOT l_U553) AND ((l_U552) AND (sub_29018())))
                        {
                            sub_26262( "F2_SHOOT", ref l_U593, 6, 1 );
                            TASK_PLAY_ANIM( l_U503[1], "reaction_shock", "missfaustin2", 4.00000000, 0, 0, 0, 0, -1 );
                            if (NOT (IS_CHAR_DEAD( dimitriChar )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U589 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U503[1] );
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "point_fwd", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                                CLOSE_SEQUENCE_TASK( l_U589 );
                                TASK_PERFORM_SEQUENCE( dimitriChar, l_U589 );
                                CLEAR_SEQUENCE_TASK( l_U589 );
                            }
                            l_U553 = 1;
                        }
                    }
                    else
                    {
                        l_U604 = 2;
                        sub_22606();
                    }
                    if ((IS_USING_CONTROLLER()) AND ((IS_AUTO_AIMING_ON()) AND ((l_U605) AND ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND ((NOT l_U555) AND (l_U554))))))
                    {
                        if (USING_STANDARD_CONTROLS())
                        {
                            PRINT_HELP( "FREEAIM2" );
                        }
                        else
                        {
                            PRINT_HELP( "FREEAIM3" );
                        }
                        l_U555 = 1;
                    }
                    if ((IS_AUTO_AIMING_ON()) AND ((l_U605) AND ((NOT l_U554) AND (TIMERA() > 2000))))
                    {
                        if ((NOT IS_USING_CONTROLLER()) || (NOT IS_LOOK_INVERTED()))
                        {
                            PRINT_HELP( "FREEAIM1b" );
                        }
                        else
                        {
                            PRINT_HELP( "FREEAIM1" );
                        }
                        l_U554 = 1;
                    }
                    if ((NOT l_U592) AND ((l_U605) AND ((NOT l_U544) AND (sub_29018()))))
                    {
                        sub_32220( "GI_54", 7500 );
                        l_U544 = 1;
                    }
                    if (NOT l_U592)
                    {
                        sub_35428( l_U502, l_U508, l_U521, CurrentPlayerChar(), 0 );
                    }
                }
                else if (NOT (sub_29033( l_U593 )))
                {
                    if (NOT l_U565)
                    {
                        if (l_U605)
                        {
                            sub_29252( "F2_PAY", 1, 1, ref l_U593, 6, 1 );
                            l_U565 = 1;
                        }
                        else
                        {
                            sub_29252( "F2_PAY", 1, 1, ref l_U593, 4, 1 );
                            l_U565 = 1;
                        }
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U502 )))
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U502, 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U503[0], 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U503[1], 0 );
                    }
                    l_U602 = 7;;
                }
                SetupBlipsForPeds();
                sub_35428( l_U503[1], l_U511[1], l_U522[1], CurrentPlayerChar(), 2 );
                sub_35428( dimitriChar, l_U518, l_U525, l_U502, 3 );
            }
            break;
            case 7:
            if ((NOT (sub_29033( l_U593 ))) AND (NOT (IS_CHAR_DEAD( dimitriChar ))))
            {
                if (NOT (sub_35428( dimitriChar, l_U518, l_U525, l_U503[1], 3 )))
                {
                    FREEZE_CHAR_POSITION( dimitriChar, 1 );
                    if ((NOT (IS_CHAR_DEAD( l_U502 ))) AND (NOT (IS_CHAR_DEAD( dimitriChar ))))
                    {
                        TASK_LOOK_AT_CHAR( l_U502, dimitriChar, -2, 0 );
                        TASK_LOOK_AT_CHAR( dimitriChar, l_U502, -2, 0 );
                        OPEN_SEQUENCE_TASK( ref l_U589 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U502 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "point_fwd", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U589 );
                        TASK_PERFORM_SEQUENCE( dimitriChar, l_U589 );
                        CLEAR_SEQUENCE_TASK( l_U589 );
                    }
                    if (l_U605)
                    {
                        sub_29252( "F2_PAY", 2, 1, ref l_U593, 6, 1 );
                    }
                    else
                    {
                        sub_29252( "F2_PAY", 2, 1, ref l_U593, 4, 1 );
                    }
                    l_U602 = 8;
                }
                else
                {
                    SetupBlipsForPeds();
                }
            }
            else
            {
                SetupBlipsForPeds();
                sub_35428( l_U502, l_U508, l_U521, CurrentPlayerChar(), 0 );
                sub_35428( l_U503[0], l_U511[0], l_U522[0], CurrentPlayerChar(), 1 );
                sub_35428( dimitriChar, l_U518, l_U525, l_U502, 3 );
            }
            break;
            case 8:
            if ((NOT (sub_29033( l_U593 ))) AND ((NOT (IS_CHAR_DEAD( dimitriChar ))) AND (NOT (IS_CHAR_DEAD( l_U502 )))))
            {
                GET_CHAR_COORDINATES( dimitriChar, ref l_U576[0]._fU0, ref l_U576[0]._fU4, ref l_U576[0]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( dimitriChar, 0.00000000, 0.85000000, 0.00000000, ref l_U576[0]._fU0, ref l_U576[0]._fU4, ref l_U576[0]._fU8 );
                GET_CHAR_HEADING( dimitriChar, ref l_U591 );
                TASK_CHAR_SLIDE_TO_COORD( l_U502, l_U576[0]._fU0, l_U576[0]._fU4, l_U576[0]._fU8, 120.00000000, 0.80000000 );
                SETTIMERA( 0 );
                if (l_U605)
                {
                    sub_29252( "F2_PAY", 3, 1, ref l_U593, 6, 1 );
                }
                else
                {
                    sub_29252( "F2_PAY", 3, 1, ref l_U593, 4, 1 );
                }
                l_U602 = 9;
            }
            else
            {
                SetupBlipsForPeds();
                sub_35428( l_U503[0], l_U511[0], l_U522[0], CurrentPlayerChar(), 1 );
            }
            break;
            case 9:
            if ((NOT (IS_CHAR_DEAD( dimitriChar ))) AND (NOT (IS_CHAR_DEAD( l_U502 ))))
            {
                GET_SCRIPT_TASK_STATUS( l_U502, 68, ref l_U531 );
                if (l_U531 == 7)
                {
                    FREEZE_CHAR_POSITION( l_U502, 1 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U502, dimitriChar );
                    TASK_TURN_CHAR_TO_FACE_CHAR( dimitriChar, l_U502 );
                    l_U602 = 10;
                }
                else
                {
                    SetupBlipsForPeds();
                }
            }
            break;
            case 10:
            if ((NOT (IS_CHAR_DEAD( dimitriChar ))) AND (NOT (IS_CHAR_DEAD( l_U502 ))))
            {
                GET_SCRIPT_TASK_STATUS( dimitriChar, 34, ref l_U531 );
                if (l_U531 == 7)
                {
                    GET_SCRIPT_TASK_STATUS( l_U502, 34, ref l_U531 );
                    if (l_U531 == 7)
                    {
                        TASK_CLEAR_LOOK_AT( l_U502 );
                        TASK_CLEAR_LOOK_AT( dimitriChar );
                        if ((NOT (IS_CHAR_DEAD( dimitriChar ))) AND (NOT (IS_CHAR_DEAD( l_U502 ))))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( dimitriChar, "take_n_pistolwhip", "missfaustin2", 10.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U502, "give_n_pistolwhip", "missfaustin2", 10.00000000, 0, 0, 0, 0, -1 );
                        }
                        SETTIMERA( 0 );
                        l_U602 = 11;
                    }
                    else
                    {
                        SetupBlipsForPeds();
                    }
                }
                else
                {
                    SetupBlipsForPeds();
                }
            }
            break;
            case 11:
            if ((NOT (IS_CHAR_DEAD( l_U502 ))) AND (NOT (IS_CHAR_DEAD( dimitriChar ))))
            {
                if (IS_CHAR_PLAYING_ANIM( dimitriChar, "missfaustin2", "take_n_pistolwhip" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( dimitriChar, "missfaustin2", "take_n_pistolwhip", ref l_U591 );
                    if (l_U591 > 0.40000000)
                    {
                        GIVE_WEAPON_TO_CHAR( dimitriChar, 7, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( dimitriChar, 7, 1 );
                        SETTIMERA( 0 );
                        l_U602 = 12;
                    }
                    else
                    {
                        SetupBlipsForPeds();
                    }
                }
                else
                {
                    SetupBlipsForPeds();
                }
            }
            else
            {
                sub_35428( l_U503[0], l_U511[0], l_U522[0], CurrentPlayerChar(), 1 );
            }
            break;
            case 12:
            if ((NOT (IS_CHAR_DEAD( l_U502 ))) AND (NOT (IS_CHAR_DEAD( dimitriChar ))))
            {
                if (IS_CHAR_PLAYING_ANIM( dimitriChar, "missfaustin2", "take_n_pistolwhip" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( dimitriChar, "missfaustin2", "take_n_pistolwhip", ref l_U591 );
                    if (l_U591 > 0.58000000)
                    {
                        FREEZE_CHAR_POSITION( dimitriChar, 0 );
                        FREEZE_CHAR_POSITION( l_U502, 0 );
                        SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( dimitriChar, 1 );
                        UNLOCK_RAGDOLL( dimitriChar, 0 );
                        SWITCH_PED_TO_RAGDOLL( l_U502, 0, 60000, 1, 1, 1, 0 );
                        CREATE_NM_MESSAGE( 1, 79 );
                        SEND_NM_MESSAGE( l_U502 );
                        PLAY_AUDIO_EVENT_FROM_PED( "ANIM_F2_PISTOL_WHIP", l_U502 );
                        APPLY_FORCE_TO_PED( l_U502, 1, 0.00000000, -1.70000000, -0.20000000, 0.00000000, 0.00000000, 0.00000000, 12, 1, 1, 1 );
                        SET_CHAR_HEALTH( l_U502, 60 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U502, 0 );
                        TASK_CLEAR_LOOK_AT( l_U502 );
                        if (l_U605)
                        {
                            sub_26262( "F2_PISTOL", ref l_U593, 6, 1 );
                        }
                        else
                        {
                            sub_26262( "F2_PISTOL", ref l_U593, 4, 1 );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                        {
                            TASK_CLEAR_LOOK_AT( l_U503[0] );
                            SET_CHAR_NEVER_TARGETTED( l_U503[0], 0 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[0], 1 );
                            SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U503[0], 0 );
                            OPEN_SEQUENCE_TASK( ref l_U589 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, dimitriChar );
                            TASK_PLAY_ANIM( 0, "drop_knees", "missfaustin2", 4.00000000, 0, 0, 0, 0, -1 );
                            TASK_PLAY_ANIM( 0, "plead_idle", "missfaustin2", 4.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U589 );
                            TASK_PERFORM_SEQUENCE( l_U503[0], l_U589 );
                            CLEAR_SEQUENCE_TASK( l_U589 );
                        }
                        SETTIMERA( 0 );
                        l_U602 = 13;
                    }
                    else
                    {
                        SetupBlipsForPeds();
                    }
                }
                else
                {
                    SWITCH_PED_TO_RAGDOLL( l_U502, 0, 60000, 1, 1, 1, 0 );
                    CREATE_NM_MESSAGE( 1, 79 );
                    SEND_NM_MESSAGE( l_U502 );
                    APPLY_FORCE_TO_PED( l_U502, 1, 0.00000000, -2.20000000, -0.20000000, 0.00000000, 0.00000000, 0.00000000, 12, 1, 1, 1 );
                    SET_CHAR_HEALTH( l_U502, 60 );
                    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U502, 0 );
                    TASK_CLEAR_LOOK_AT( l_U502 );
                    if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                    {
                        TASK_CLEAR_LOOK_AT( l_U503[0] );
                        SET_CHAR_NEVER_TARGETTED( l_U503[0], 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[0], 1 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U503[0], 0 );
                        OPEN_SEQUENCE_TASK( ref l_U589 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, CurrentPlayerChar() );
                        TASK_PLAY_ANIM( 0, "drop_knees", "missfaustin2", 4.00000000, 0, 0, 0, 0, -1 );
                        TASK_PLAY_ANIM( 0, "plead_idle", "missfaustin2", 4.00000000, 1, 0, 0, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U589 );
                        TASK_PERFORM_SEQUENCE( l_U503[0], l_U589 );
                        CLEAR_SEQUENCE_TASK( l_U589 );
                    }
                    SETTIMERA( 0 );
                    l_U602 = 13;
                }
            }
            break;
            case 13:
            if (NOT (sub_29033( l_U593 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U503[0] )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U503[1] )))
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U503[1], 1 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U502 )))
                    {
                        SET_CHAR_NEVER_TARGETTED( l_U502, 1 );
                    }
                    if (NOT (IS_CHAR_DEAD( dimitriChar )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( dimitriChar, l_U503[0] );
                    }
                    sub_26262( "F2_PORNA", ref l_U593, 6, 1 );
                    l_U602 = 14;
                }
            }
            else
            {
                SetupBlipsForPeds();
            }
            break;

            case 14:
            sub_42051();
            if (NOT (sub_29033( l_U593 )))
            {
                if (NOT (IS_CHAR_DEAD( dimitriChar )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( dimitriChar, 779.79870000, -543.82730000, 8.49470000, 2, -1, 0.50000000 );
                    if (DOES_BLIP_EXIST( l_U498 ))
                    {
                        REMOVE_BLIP( l_U498 );
                    }
                    ADD_BLIP_FOR_CHAR( dimitriChar, ref l_U498 );
                    SET_BLIP_AS_FRIENDLY( l_U498, 1 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( dimitriChar, 1 );
                UNLOCK_RAGDOLL( dimitriChar, 1 );
                sub_24777();
                if ((l_U601 == 417) || ((l_U601 == 14768) || ((l_U601 == 14512) || ((l_U601 == 1200) || ((l_U601 == 421) || ((l_U601 == 425) || ((l_U601 == 420) || ((l_U601 == 424) || ((l_U601 == 419) || ((l_U601 == 423) || (l_U601 == 418)))))))))))
                {
                    sub_26262( "F2_DEAD", ref l_U593, 6, 1 );
                }
                else
                {
                    sub_26262( "F2_NOTLEG", ref l_U593, 6, 1 );
                }
                TASK_LOOK_AT_CHAR( dimitriChar, CurrentPlayerChar(), 2500, 0 );
                SET_WANTED_MULTIPLIER( 0.40000000 );
                SETTIMERA( 0 );
                l_U602 = 15;
            }
            else
            {
                SetupBlipsForPeds();
            }
            break;
            case 15:
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                sub_42051();
                if ((NOT l_U563) AND (sub_29018()))
                {
                    PRINT_NOW( "GI_88", 7500, 0 );
                    l_U563 = 1;
                }
                GET_INTERIOR_FROM_CHAR( CurrentPlayerChar(), ref iVar2 );
                if (iVar2 == nil)
                {
                    if (HAS_CHAR_SPOTTED_CHAR( dimitriChar, CurrentPlayerChar() ))
                    {
                        if (NOT (IS_CHAR_DEAD( dimitriChar )))
                        {
                            GET_PLAYER_GROUP( CurrentPlayerId(), ref l_U532 );
                            SET_GROUP_MEMBER( sub_8595(), dimitriChar );
                            SET_CHAR_RELATIONSHIP( dimitriChar, 1, 0 );
                        }
                        MARK_MODEL_AS_NO_LONGER_NEEDED( 568525885 );
                        sub_24777();
                        sub_26262( "F2_GO2", ref l_U593, 6, 1 );
                        SET_BLIP_AS_FRIENDLY( l_U498, 0 );
                        REMOVE_BLIP( l_U498 );
                        REMOVE_BLIP( l_U497 );
                        ADD_BLIP_FOR_COORD( 1055.55600000, 86.85400000, 33.98700000, ref l_U497 );
                        CHANGE_BLIP_COLOUR( l_U497, 5 );
                        SET_ROUTE( l_U497, 1 );
                        SETTIMERA( 0 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( 568525885 );
                        l_U602 = 17;
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( dimitriChar, 27, ref l_U531 );
                    if (l_U531 == 7)
                    {
                        if (NOT l_U558)
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( dimitriChar, CurrentPlayerChar() );
                            l_U558 = 1;
                        }
                    }
                }
            }
            break;
            case 17:
            sub_42051();
            if (sub_29018())
            {
                SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( dimitriChar, 0 );
                PRINT( "GI_28", 7500, 0 );
                l_U602 = 18;
            }
            break;
            case 18:
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                sub_42051();
                if (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 ))
                {
                    if (DOES_BLIP_EXIST( l_U497 ))
                    {
                        REMOVE_BLIP( l_U497 );
                        PRINT_NOW( "GNSHP_WNTD", 7500, 0 );
                    }
                }
                else if ((IS_CHAR_IN_AREA_3D( dimitriChar, 1049.00000000, 48, 28, 1057.00000000, 105, 42, 0 )) AND (IS_CHAR_IN_AREA_3D( CurrentPlayerChar(), 1049.00000000, 48, 28, 1057.00000000, 105, 42, 0 )))
                {
                    if ((sub_43298( dimitriChar )) AND (AreCharsInCar( CurrentPlayerChar(), dimitriChar )))
                    {
                        REMOVE_CHAR_FROM_GROUP( dimitriChar );
                    }
                    if (DOES_BLIP_EXIST( l_U498 ))
                    {
                        REMOVE_BLIP( l_U498 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U497 )))
                    {
                        PRINT_NOW( "GI_28", 7500, 0 );
                        ADD_BLIP_FOR_COORD( 1055.55600000, 86.85400000, 33.98700000, ref l_U497 );
                    }
                    if (LOCATE_CHAR_ON_FOOT_3D( CurrentPlayerChar(), 1055.55600000, 86.85400000, 33.98700000, 1.60000000, 1.60000000, 1.60000000, 1 ))
                    {
                        if (DOES_CHAR_EXIST( l_U503[0] ))
                        {
                            DELETE_CHAR( ref l_U503[0] );
                        }
                        if (DOES_CHAR_EXIST( l_U503[1] ))
                        {
                            DELETE_CHAR( ref l_U503[1] );
                        }
                        if (DOES_CHAR_EXIST( l_U502 ))
                        {
                            DELETE_CHAR( ref l_U502 );
                        }
                        SET_EVERYONE_IGNORE_PLAYER( CurrentPlayerId(), 0 );
                        sub_30048();
                        REMOVE_BLIP( l_U497 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( dimitriChar )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( dimitriChar, 1054.94600000, 89.40510000, 32.42070000, 2, 40000, 1.00000000 );
                        }
                        REMOVE_CHAR_FROM_GROUP( dimitriChar );
                        sub_32220( "GI_44", 7500 );
                        REMOVE_BLIP( l_U497 );
                        ADD_BLIP_FOR_COORD( 1062.30000000, 88.63230000, 33.24610000 + 1.60000000, ref l_U497 );
                        CHANGE_BLIP_COLOUR( l_U497, 5 );
                        PRINTNL();
                        PRINTSTRING( "SETTING GUNSHOP TO UNLOCKED" );
                        PRINTNL();
                        // Seems to be gun shop unlock flag
                        gunShopUnlockFlag1 = 1;
                        g_U64663 = 1;
                        l_U602 = 20;
                    }
                    else if (NOT l_U570)
                    {
                        sub_26262( "F2_SHOP", ref l_U593, 6, 1 );
                        l_U570 = 1;
                    }
                }
                else if (NOT (sub_43298( dimitriChar )))
                {
                    sub_43932( dimitriChar );
                }
                if (sub_29426( ref l_U498, ref l_U497, dimitriChar, 1055.55600000, 86.85400000, 33.98700000, "GI_28", "DIMITRI_BUDDY", "GI_28" ))
                {
                    if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_28", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                    {
                        if ((l_U608) || (g_U64648[1] == 0))
                        {
                            sub_44131( dimitriChar );
                            l_U608 = 1;
                        }
                        else
                        {
                            sub_32293( dimitriChar, "F2_CAR4", "F2_CAR4", 1 );
                        }
                    }
                    if (LOCATE_CHAR_ON_FOOT_3D( CurrentPlayerChar(), 1055.55600000, 86.85400000, 33.98700000, 1.60000000, 1.60000000, 1.60000000, 1 ))
                    {
                        ;
                    }
                };;;
            }
            break;
            case 20:
            if (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), 1062.30000000, 88.63230000, 33.24610000 + 1.60000000, 1.60000000, 1.60000000, 1.60000000, 0 ))
            {
                if (DOES_BLIP_EXIST( l_U497 ))
                {
                    REMOVE_BLIP( l_U497 );
                }
                l_U602 = 21;
            }
            else if (DOES_BLIP_EXIST( l_U497 ))
            {
                if ((sub_45177()) AND (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), 1058.23800000, 86.84730000, 34.25310000 + (1.60000000 / 2), 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    REMOVE_BLIP( l_U497 );
                }
            }
            sub_45287();
            sub_45403();;
            break;
            case 21:
            if (g_U15654[60])
            {
                if (DOES_BLIP_EXIST( l_U497 ))
                {
                    REMOVE_BLIP( l_U497 );
                }
                if (DOES_BLIP_EXIST( l_U500 ))
                {
                    REMOVE_BLIP( l_U500 );
                }
                if (DOES_BLIP_EXIST( l_U498 ))
                {
                    REMOVE_BLIP( l_U498 );
                }
                if (NOT (IS_CHAR_DEAD( dimitriChar )))
                {
                    ADD_BLIP_FOR_CHAR( dimitriChar, ref l_U498 );
                    CHANGE_BLIP_COLOUR( l_U498, 3 );
                    CHANGE_BLIP_PRIORITY( l_U498, 2 );
                }
                SETTIMERA( 0 );
                l_U602 = 22;
            }
            else if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), 1062.30000000, 88.63230000, 33.24610000 + 1.60000000, 1.60000000, 1.60000000, 1.60000000, 0 ))) AND (NOT l_U568))
            {
                l_U568 = 1;
            }
            sub_45403();
            sub_45287();;
            break;
            case 22:
            if (IS_CHAR_IN_AREA_3D( CurrentPlayerChar(), 1057.80000000, 86.00000000, 25.00000000, 1060.70000000, 95.00000000, 50.00000000, 1 ))
            {
                sub_46172( 19 );
                sub_2456( 19, 1 );
                SWITCH_ROADS_OFF( 1352.89000000, -818.88000000, 0.00000000, 1335.31000000, -872.96000000, 100.00000000 );
                PRINT_HELP( "GI_29" );
                l_U602 = 23;
            }
            else if ((NOT l_U569) AND (sub_29018()))
            {
                sub_32220( "GI_39", 7500 );
                l_U569 = 1;
            }
            else
            {
                sub_45287();
            }
            break;
            case 23:
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                if (IS_CHAR_IN_ANY_CAR( dimitriChar ))
                {
                    if (AreCharsInCar( CurrentPlayerChar(), dimitriChar ))
                    {
                        GET_PLAYER_GROUP( CurrentPlayerId(), ref l_U532 );
                        SET_GROUP_MEMBER( sub_8595(), dimitriChar );
                        SET_CHAR_RELATIONSHIP( dimitriChar, 1, 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( dimitriChar, 1 );
                        REMOVE_BLIP( l_U498 );
                        l_U602 = 24;
                    }
                    else if ((NOT l_U569) AND (sub_29018()))
                    {
                        sub_32220( "GI_39", 7500 );
                        l_U569 = 1;
                    }
                    else
                    {
                        sub_45287();
                    }
                }
                else
                {
                    GET_CHAR_COORDINATES( dimitriChar, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    if ((HAS_CHAR_SPOTTED_CHAR( CurrentPlayerChar(), dimitriChar )) AND (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 20.00000000, 20.00000000, 20.00000000, 0 )))
                    {
                        GET_PLAYER_GROUP( CurrentPlayerId(), ref l_U532 );
                        SET_GROUP_MEMBER( sub_8595(), dimitriChar );
                        SET_CHAR_RELATIONSHIP( dimitriChar, 1, 0 );
                        REMOVE_BLIP( l_U498 );
                        l_U602 = 24;
                    }
                    else if ((NOT l_U569) AND (sub_29018()))
                    {
                        sub_32220( "GI_39", 7500 );
                        l_U569 = 1;
                    }
                    else
                    {
                        sub_45287();
                    }
                }
            }
            break;
            case 24:
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                if (sub_29018())
                {
                    if (NOT l_U561)
                    {
                        if (l_U562)
                        {
                            SWITCH_PED_PATHS_OFF( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                            ADD_SCENARIO_BLOCKING_AREA( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                            SWITCH_ROADS_OFF( 1352.89000000, -818.88000000, 0.00000000, 1335.31000000, -872.96000000, 100.00000000 );
                            SET_CREATE_RANDOM_COPS( 1 );
                            PRINT_NOW( "GI_34", 7500, 0 );
                            l_U561 = 1;
                        }
                    }
                }
                if (NOT l_U562)
                {
                    sub_26262( "F2_CAR5", ref l_U593, 6, 1 );
                    if (DOES_BLIP_EXIST( l_U497 ))
                    {
                        REMOVE_BLIP( l_U497 );
                    }
                    ADD_BLIP_FOR_COORD( 1340.83600000, -846.45690000, 9.23770000, ref l_U497 );
                    CHANGE_BLIP_COLOUR( l_U497, 5 );
                    SET_ROUTE( l_U497, 1 );
                    l_U562 = 1;
                }
                if (l_U562)
                {
                    if (sub_29426( ref l_U498, ref l_U497, dimitriChar, 1340.83600000, -846.45690000, 9.23770000, "GI_34", "DIMITRI_BUDDY", "GI_34" ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), 1340.83600000, -846.45690000, 9.23770000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                        {
                            if (sub_24205( 1, 1 ))
                            {
                                sub_30048();
                                REMOVE_BLIP( l_U497 );
                                l_U559 = 1;
                                if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                                {
                                    sub_24516( "F2_END" );
                                }
                                else
                                {
                                    sub_47262( "F2_END" );
                                }
                                sub_9050();
                            }
                        }
                        else if ((l_U572) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (l_U561)))
                        {
                            if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_34", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                            {
                                sub_32293( dimitriChar, "F2_CAR6", "F2_CAR8", 2 );
                            }
                        }
                    }
                }
                if (IS_THIS_PRINT_BEING_DISPLAYED( "GI_34", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    l_U572 = 1;
                }
            }
            break;
            case 25:
            sub_22606();
            break;
        }
    }
    sub_2277();
    return;
}

void sub_167()
{
    sub_176();
    return;
}

void sub_176()
{
    int iVar2;

    iVar2 = 4;
    sub_190( iVar2 );
    sub_1366( iVar2 );
    return;
}

void sub_190(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_234();
        sub_395();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_503();
            sub_542();
        }
    }
    sub_618();
    sub_719();
    uVar5 = sub_832( uParam0 );
    sub_1273( uVar5, 0 );
    return;
}

void sub_234()
{
    sub_248( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_348();
    }
    return;
}

void sub_248(int iParam0)
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

void sub_348()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_395()
{
    sub_404();
    return;
}

void sub_404()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_503()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_542()
{
    sub_551();
    return;
}

void sub_551()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_618()
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

void sub_719()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_741();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_741()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_832(unknown uParam0)
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
    sub_1231( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1231(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1273(int iParam0, boolean bParam1)
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

void sub_1366(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1375();
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
        sub_2150();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1375()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1413( 5, g_U569[I] )) == 1))
        {
            if ((sub_1413( 1, g_U569[I] )) != 0)
            {
                sub_1699( I );
            }
        }
    }
    if (NOT sub_1865())
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

int sub_1413(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1699(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1784( g_U569 - 1 );
    return;
}

void sub_1784(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1865()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1413( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2150()
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

void sub_2277()
{
    g_U9211 = 0;
    SET_CREATE_RANDOM_COPS( 1 );
    if (NOT (IS_CHAR_DEAD( dimitriChar )))
    {
        TASK_CLEAR_LOOK_AT( dimitriChar );
    }
    if (NOT (IS_CHAR_DEAD( l_U502 )))
    {
        TASK_CLEAR_LOOK_AT( l_U502 );
    }
    if (NOT (IS_CHAR_DEAD( l_U503[0] )))
    {
        TASK_CLEAR_LOOK_AT( l_U503[0] );
    }
    if (NOT (IS_CHAR_DEAD( l_U503[1] )))
    {
        TASK_CLEAR_LOOK_AT( l_U503[1] );
    }
    REMOVE_ANIMS( "missfaustin2" );
    sub_2456( 19, 0 );
    sub_4334();
    SET_MAX_WANTED_LEVEL( 6 );
    CLEAR_HELP();
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 778.00000000, -544.88000000, -100.00000000, 804.36000000, -527.68000000, 100.00000000 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 1048.65600000, 83.25701000, 0.00000000, 1057.37500000, 83.25701000, 100.00000000 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        SET_EVERYONE_IGNORE_PLAYER( CurrentPlayerId(), 0 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( CurrentPlayerChar(), 1 );
    }
    g_U9330 = 0;
    g_U15654[60] = 0;
    gunShopUnlockFlag1 = 0;
    sub_4573();
    sub_4615( ref l_U593, 0 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2456(unknown uParam0, unknown uParam1)
{
    g_U10133._fU84[uParam0] = uParam1;
    sub_2480();
    return;
}

void sub_2480()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_2508( 13 );
        if ((g_U9932[g_U9999[I]._fU0]._fU0) AND (sub_2553( 13, iVar3 )))
        {
            sub_2654( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_2838( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_2508( 11 );
        if ((g_U9932[g_U10090[I]._fU0]._fU0) AND (sub_2553( 11, iVar3 )))
        {
            sub_2654( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_2838( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_3032( I );
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_2553( g_U10324[I]._fU12, iVar3 )))
        {
            sub_2654( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_3340( I );
        }
        else
        {
            sub_2838( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_3569();
    return;
}

int sub_2508(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_2553(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10133._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_2654(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        if ((iParam4 == 1) || ((iParam4 == 4) || ((iParam4 == 3) || (iParam4 == 2))))
        {
            ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        else
        {
            ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U4 );
        if (iParam4 == 3)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 3 );
        }
        if (iParam4 == 4)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 5 );
        }
    }
    return;
}

void sub_2838(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_3032(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_3074( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_2508( g_U10324[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10978)
    {
        uVar3 = g_U10324[uParam0]._fU12;
        if (g_U10133._fU0[uVar3])
        {
            if (g_U10324[uParam0]._fU24 == 1)
            {
                if (g_U9937 == g_U10324[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_3074(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_3340(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_3569()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_2508( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_3614( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_2508( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_3614( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_3032( I )))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_3032( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9937 == g_U10324[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_3614( g_U10324[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9943[I]._fU0)
        {
            if (g_U9937 == g_U9943[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_3614( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
        {
            GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_4141( uVar7, g_U9943[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_3614( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_3614(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

// sub_4023
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4141(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_4334()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

// sub_4479
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4573()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_4615(int iParam0, unknown uParam1)
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

void sub_4774()
{
    LOAD_ADDITIONAL_TEXT( "GUNINTR", 0 );
    LOAD_ADDITIONAL_TEXT( "F2AUD", 6 );
    sub_4825( "F2AUD" );
    sub_4952( 0, CurrentPlayerChar(), "NIKO", 0 );
    sub_5141( 1341.04500000, -846.67000000, 7.24720000, 0, 1316.30000000, -845.90000000, 9.14000000, 100, -1, 0 );
    if (g_U9893._fU24)
    {
        START_CUTSCENE_NOW( "Fau2_a" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "Fau2_a" );
    }
    g_U9211 = 1;
    g_U9330 = 0;
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U535 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U534 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U533 );
    N_1061756705( l_U533, 13 );
    SET_RELATIONSHIP( 5, 24, 0 );
    sub_5612( 25 );
    REQUEST_MODEL( 162883121 );
    REQUEST_ANIMS( "missfaustin2" );
    LOAD_ALL_OBJECTS_NOW();
    while ((NOT (HAVE_ANIMS_LOADED( "missfaustin2" ))) || ((NOT (HAS_MODEL_LOADED( 162883121 ))) || (NOT (sub_6357( 25 )))))
    {
        WAIT( 0 );
    }
    CREATE_CAR( 162883121, 1328.32900000, -819.01180000, 7.24070000, ref l_U506, 1 );
    SET_CAR_HEADING( l_U506, 270 );
    CHANGE_CAR_COLOUR( l_U506, 12, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U506, 1, 1 );
    TURN_OFF_VEHICLE_EXTRA( l_U506, 2, 1 );
    SET_CAR_ON_GROUND_PROPERLY( l_U506 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 162883121 );
    SUPPRESS_CAR_MODEL( 162883121 );
    SET_WANTED_MULTIPLIER( 0.20000000 );
    l_U508 = {798.27720000, -539.64300000, 6.52160000};
    l_U511[0] = {797.88070000, -537.02460000, 6.52160000};
    l_U511[1] = {798.66830000, -537.77640000, 6.52160000};
    l_U518 = {795.92000000, -540.64000000, 6.52160000};
    l_U521 = 95.00000000;
    l_U522[0] = 145.00000000;
    l_U522[1] = 120.00000000;
    l_U525 = 326.65910000;
    l_U586 = {787.03500000, -537.12200000, 7.92300000};
    LOAD_SCENE( 1329.14300000, -846.51870000, 7.11060000 );
    SET_CHAR_COORDINATES( CurrentPlayerChar(), 1329.14300000, -846.51870000, 7.11060000 );
    SET_CHAR_HEADING( CurrentPlayerChar(), 270.00000000 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( CurrentPlayerChar(), 0 );
    sub_6854( 25, ref dimitriChar, 1330.51800000, -848.06660000, 7.13190000, 32.00000000 );
    SET_CHAR_NEVER_TARGETTED( dimitriChar, 1 );
    sub_4952( 1, dimitriChar, "DIMITRI", 0 );
    SET_PED_DIES_WHEN_INJURED( dimitriChar, 1 );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( dimitriChar, 1 );
    SET_CHAR_PROP_INDEX( dimitriChar, 1, 0 );
    GET_PLAYER_GROUP( CurrentPlayerId(), ref l_U532 );
    SET_GROUP_MEMBER( sub_8595(), dimitriChar );
    SET_CHAR_RELATIONSHIP( dimitriChar, 1, 0 );
    ADD_BLIP_FOR_COORD( 775.89700000, -548.45300000, 10.81600000, ref l_U497 );
    CHANGE_BLIP_COLOUR( l_U497, 5 );
    SET_ROUTE( l_U497, 1 );
    SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
    SET_CAM_BEHIND_PED( CurrentPlayerChar() );
    sub_4573();
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN( 500 );
    SWITCH_PED_PATHS_OFF( 778.00000000, -544.88000000, -100.00000000, 804.36000000, -527.68000000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 778.00000000, -544.88000000, -100.00000000, 804.36000000, -527.68000000, 100.00000000 );
    SWITCH_PED_PATHS_OFF( 1048.65600000, 83.25701000, 0.00000000, 1057.37500000, 101.25700000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 1048.65600000, 83.25701000, 0.00000000, 1057.37500000, 101.25700000, 100.00000000 );
    SET_CREATE_RANDOM_COPS( 0 );
    CLEAR_AREA_OF_COPS( 790, 65001, 30, 50.00000000 );
    CLEAR_AREA_OF_COPS( 1048, 90, 30, 50.00000000 );
    l_U605 = 1;
    l_U602 = 0;
    return;
}

void sub_4825(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4844();
    return;
}

void sub_4844()
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

void sub_4952(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5036( "\n PED NUMBER ", uParam0 );
    sub_5076( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5036(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5076(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5141(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, boolean bParam9)
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

void sub_5612(unknown uParam0)
{
    REQUEST_MODEL( sub_5623( uParam0 ) );
    return;
}

int sub_5623(unknown uParam0)
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
    sub_1231( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_6357(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5623( uParam0 ) );
}

void sub_6854(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_5623( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_6904( uParam0, (uParam1^) );
    return;
}

void sub_6904(unknown uParam0, unknown uParam1)
{
    sub_6916( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_6916(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_7010( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_7554( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_7010(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_7554(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_7010( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7010( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7010( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_7010( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_7010( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_7010( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7010( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7010( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_7010( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7010( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_7010( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7010( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_7010( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_8595()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_9050()
{
    sub_9059();
    CLEAR_WANTED_LEVEL( CurrentPlayerId() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    g_U64663 = 1;
    sub_2277();
    return;
}

void sub_9059()
{
    sub_9068();
    return;
}

void sub_9068()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_9086();
    sub_9145( iVar2, iVar3, iVar4 );
    return;
}

void sub_9086()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_9145(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 4;
    sub_9177( iVar5, uParam0, uParam1, uParam2, "Contact_5" );
    return;
}

void sub_9177(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_9273( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_9273( ref cVar9 );
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
            sub_9273( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_9273( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_9273( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_9273( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_9850( iParam0, iVar7 );;;
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
                sub_10247( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_10247( 0, 4 );
            }
        }
    }
    if (NOT (sub_10336( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( CurrentPlayerId(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( CurrentPlayerId() );
    }
    sub_1375();
    bVar27 = true;
    uVar28 = sub_9850( iParam0, iVar7 );
    uVar29 = sub_832( iParam0 );
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
                sub_19712( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_20142();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_20227( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_20284( iParam0 );
                sub_20323( 0 );
                sub_1273( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_20431();
        }
    }
    if (bParam2)
    {
        sub_20142();
        sub_20519();
        sub_20323( 0 );
    }
    if (bParam3)
    {
        sub_20142();
        sub_20559();
        sub_20323( 0 );
        sub_1273( uVar29, 0 );
    }
    sub_719();
    return;
}

void sub_9273(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_9850(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1231( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_10247(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_10336(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_10544( uParam1 );
        break;
        case 1:
        bVar8 = sub_12622( uParam1 );
        break;
        case 2:
        bVar8 = sub_12848( uParam1 );
        break;
        case 3:
        bVar8 = sub_12998( uParam1 );
        break;
        case 4:
        bVar8 = sub_13276( uParam1 );
        break;
        case 5:
        bVar8 = sub_13579( uParam1 );
        break;
        case 6:
        bVar8 = sub_13778( uParam1 );
        break;
        case 7:
        bVar8 = sub_14004( uParam1 );
        break;
        case 8:
        bVar8 = sub_14239( uParam1 );
        break;
        case 9:
        bVar8 = sub_14614( uParam1 );
        break;
        case 10:
        bVar8 = sub_14861( uParam1 );
        break;
        case 11:
        bVar8 = sub_15000( uParam1 );
        break;
        case 12:
        bVar8 = sub_15299( uParam1 );
        break;
        case 13:
        bVar8 = sub_15527( uParam1 );
        break;
        case 14:
        bVar8 = sub_15814( uParam1 );
        break;
        case 15:
        bVar8 = sub_16096( uParam1 );
        break;
        case 16:
        bVar8 = sub_16378( uParam1 );
        break;
        case 17:
        bVar8 = sub_16579( uParam1 );
        break;
        case 18:
        bVar8 = sub_16652( uParam1 );
        break;
        case 19:
        bVar8 = sub_16866( uParam1 );
        break;
        case 20:
        bVar8 = sub_17119( uParam1 );
        break;
        case 21:
        bVar8 = sub_17366( uParam1 );
        break;
        case 22:
        bVar8 = sub_17567( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_12227( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_9850( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_17890( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_10544(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_10823( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_10823( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_10823( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_10823( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_10823( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_10823( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_10823( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_10823( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_10823( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_10823( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_10823( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_10823( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_10823( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_10823( iVar3, 0, 3, 1, 0, 0 );
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
        sub_10823( iVar3, 0, sub_12105(), sub_12371(), 0, 0 );
        break;
        default:
        sub_12530( "Friend 1", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Friend 1", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_10823(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_10834( uParam1 );
    sub_11008( uParam0, 0, uParam2 );
    sub_11008( uParam0, 1, uParam3 );
    sub_11008( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_9086();
    return;
}

void sub_10834(unknown uParam0)
{
    ADD_SCORE( CurrentPlayerId(), uParam0 );
    sub_10859( uParam0 );
    return;
}

void sub_10859(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1231( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_11008(unknown uParam0, int iParam1, int iParam2)
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
        sub_11165( uParam0 );
    }
    return;
}

void sub_11165(unknown uParam0)
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

int sub_12105()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12227( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_12227(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_12371()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_12227( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_12530(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_12622(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10823( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_12530( "Contact 2", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 2", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12848(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_10823( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_12530( "Girl 3", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Girl 3", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12998(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_10823( iVar3, 0, sub_12105(), sub_12371(), 0, 0 );
        break;
        default:
        sub_12530( "Friend 4", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Friend 4", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13276(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10823( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10823( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10823( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10823( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_12530( "Contact 5", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 5", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13579(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_12530( "Contact 7", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 7", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13778(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10823( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_12530( "Contact 7b", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 7b", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14004(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_10823( iVar3, 0, sub_12105(), sub_12371(), 0, 0 );
        break;
        default:
        sub_12530( "Friend 8", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Friend 8", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14239(unknown uParam0)
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
        sub_10823( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_10823( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_10823( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_10823( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_10823( iVar3, 0, sub_12105(), sub_12371(), 0, 0 );
        break;
        default:
        sub_12530( "Friend 9", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Friend 9", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14614(unknown uParam0)
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
        sub_10823( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_10823( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_10823( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_12530( "Contact 10", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_12530( "Contact 10", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14861(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_12530( "Girl 11", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Girl 11", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15000(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10823( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10823( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10823( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10823( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_10823( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_12530( "Contact 12", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 12", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15299(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10823( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_12530( "Contact 13", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 13", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15527(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_10823( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_10823( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_10823( iVar3, 0, sub_12105(), sub_12371(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_12530( "Friend 15", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Friend 15", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15814(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10823( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10823( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10823( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_12530( "Contact 16", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 16", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16096(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10823( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_10823( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_10823( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_12530( "Contact 18", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 18", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16378(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_12530( "Contact 19", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 19", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16579(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_12530( "Girl 20", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16652(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_12530( "Contact 21", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 21", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16866(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10823( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_10823( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_12530( "Contact 22", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 22", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17119(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_10823( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_10823( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_10823( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_12530( "Contact 24", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 24", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17366(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_10823( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_10823( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_10823( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_12530( "Contact 25", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_12530( "Contact 25", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17567(unknown uParam0)
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
        sub_10823( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_12530( "Girl 26", 1 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_12530( "Girl 26", 0 );
        sub_10823( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_17890(int iParam0, int iParam1)
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
    if (sub_17938( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_18669( iParam1 );
    }
    return;
}

int sub_17938(int iParam0, int iParam1)
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
            sub_18078( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_18078(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_18260( 0 );
    return;
}

void sub_18260(boolean bParam0)
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
        sub_18515();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_18515()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_18669(int iParam0)
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
        sub_19002( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_19002( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_19002( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_19002( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_19002( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_19002( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_19002( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_19002( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_19002( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_19002( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_19002( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_19002( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_19002( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_19002( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_19002( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_19002( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_19002( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_19002( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_19002( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_19002(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_19712(unknown uParam0, unknown uParam1)
{
    sub_19731( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_19731(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_20142()
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

int sub_20227(int iParam0, int iParam1)
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

void sub_20284(unknown uParam0)
{
    sub_618();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_20323(unknown uParam0)
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

void sub_20431()
{
    sub_20440();
    return;
}

void sub_20440()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_20519()
{
    sub_20440();
    return;
}

void sub_20559()
{
    sub_20440();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_20710()
{
    if (l_U602 == 0)
    {
        if (AreCharsInCar( CurrentPlayerChar(), dimitriChar ))
        {
            SET_CHAR_COORDINATES( CurrentPlayerChar(), 782.50510000, -555.73330000, 10.12960000 );
            if (NOT (IS_CAR_DEAD( l_U507 )))
            {
                SET_CAR_HEADING( l_U507, 55.00000000 );
            }
        }
        else
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U599, ref l_U590 );
            if (l_U590 == -1)
            {
                REQUEST_MODEL( 2016857647 );
                while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                {
                    WAIT( 0 );
                }
                l_U599 = 2016857647;
            }
            CREATE_CAR( l_U599, 782.50510000, -555.73330000, 10.12960000, ref l_U600, 1 );
            SET_CAR_HEADING( l_U600, 55.00000000 );
            SET_CAR_COORDINATES( l_U600, 782.50510000, -555.73330000, 10.12960000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U599 );
            WARP_CHAR_INTO_CAR( CurrentPlayerChar(), l_U600 );
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( dimitriChar, l_U600, 0 );
            }
        }
        SET_CAM_BEHIND_PED( CurrentPlayerChar() );
    }
    else if ((l_U602 == 15) || (l_U602 == 18))
    {
        if (AreCharsInCar( CurrentPlayerChar(), dimitriChar ))
        {
            SET_CHAR_COORDINATES( CurrentPlayerChar(), 1066.93000000, 103.55680000, 32.74950000 );
            if (NOT (IS_CAR_DEAD( l_U507 )))
            {
                SET_CAR_HEADING( l_U507, 55.00000000 );
            }
        }
        else
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U599, ref l_U590 );
            if (l_U590 == -1)
            {
                REQUEST_MODEL( 2016857647 );
                while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                {
                    WAIT( 0 );
                }
                l_U599 = 2016857647;
            }
            CREATE_CAR( l_U599, 1066.93000000, 103.55680000, 32.74950000, ref l_U600, 1 );
            SET_CAR_HEADING( l_U600, 90.00000000 );
            SET_CAR_COORDINATES( l_U600, 1066.93000000, 103.55680000, 32.74950000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U599 );
            WARP_CHAR_INTO_CAR( CurrentPlayerChar(), l_U600 );
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( dimitriChar, l_U600, 0 );
            }
        }
        SET_CAM_BEHIND_PED( CurrentPlayerChar() );
    }
    else if (l_U602 == 24)
    {
        if (AreCharsInCar( CurrentPlayerChar(), dimitriChar ))
        {
            SET_CHAR_COORDINATES( CurrentPlayerChar(), 1342.91400000, -828.29490000, 7.33240000 );
            if (NOT (IS_CAR_DEAD( l_U507 )))
            {
                SET_CAR_HEADING( l_U507, 176.00000000 );
            }
        }
        else
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U599, ref l_U590 );
            if (l_U590 == -1)
            {
                REQUEST_MODEL( 2016857647 );
                while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                {
                    WAIT( 0 );
                }
                l_U599 = 2016857647;
            }
            CREATE_CAR( l_U599, 1342.91400000, -828.29490000, 7.33240000, ref l_U600, 1 );
            SET_CAR_HEADING( l_U600, 176.00000000 );
            SET_CAR_COORDINATES( l_U600, 1342.91400000, -828.29490000, 7.33240000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U599 );
            WARP_CHAR_INTO_CAR( CurrentPlayerChar(), l_U600 );
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( dimitriChar, l_U600, 0 );
            }
        }
        SET_CAM_BEHIND_PED( CurrentPlayerChar() );
    }
    else if ((l_U602 == 13) || ((l_U602 == 12) || ((l_U602 == 11) || ((l_U602 == 8) || ((l_U602 == 7) || ((l_U602 == 6) || ((l_U602 == 5) || ((l_U602 == 4) || ((l_U602 == 3) || (l_U602 == 2))))))))))
    {
        if (DOES_BLIP_EXIST( l_U497 ))
        {
            REMOVE_BLIP( l_U497 );
        }
        if (DOES_BLIP_EXIST( l_U498 ))
        {
            REMOVE_BLIP( l_U498 );
        }
        if (DOES_BLIP_EXIST( l_U499 ))
        {
            REMOVE_BLIP( l_U499 );
        }
        ADD_BLIP_FOR_COORD( 1052.19100000, 91.74401000, 33.43440000, ref l_U497 );
        CHANGE_BLIP_COLOUR( l_U497, 5 );
        SET_ROUTE( l_U497, 1 );
        if (NOT (IS_CHAR_DEAD( dimitriChar )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( dimitriChar );
            GET_PLAYER_GROUP( CurrentPlayerId(), ref l_U532 );
            SET_GROUP_MEMBER( sub_8595(), dimitriChar );
            SET_CHAR_RELATIONSHIP( dimitriChar, 1, 0 );
        }
        l_U602 = 18;
        if (AreCharsInCar( CurrentPlayerChar(), dimitriChar ))
        {
            SET_CHAR_COORDINATES( CurrentPlayerChar(), 1066.93000000, 103.55680000, 32.74950000 );
            if (NOT (IS_CAR_DEAD( l_U507 )))
            {
                SET_CAR_HEADING( l_U507, 55.00000000 );
            }
        }
        else
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U599, ref l_U590 );
            if (l_U590 == -1)
            {
                REQUEST_MODEL( 2016857647 );
                while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                {
                    WAIT( 0 );
                }
                l_U599 = 2016857647;
            }
            CREATE_CAR( l_U599, 1066.93000000, 103.55680000, 32.74950000, ref l_U600, 1 );
            SET_CAR_HEADING( l_U600, 90.00000000 );
            SET_CAR_COORDINATES( l_U600, 1066.93000000, 103.55680000, 32.74950000 );
            WARP_CHAR_INTO_CAR( CurrentPlayerChar(), l_U600 );
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( dimitriChar, l_U600, 0 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U600 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U599 );
        }
        SET_CAM_BEHIND_PED( CurrentPlayerChar() );
    };;;;
    return;
}

// sub_20741
// TODO Does this have two chars to check?
// uParam0 = char1ToCheck?
// uParam1 = char2ToCheck?
// Check if char1 is not injured
// Check if char is in any car
// Store the chars car
// Check if the vehicle is driveable, and char2 is not injured
// Check if they are in the car uVar4.
// Example in this file: if (AreCharsInCar( CurrentPlayerChar(), dimitriChar )), dimitriChar seems to be the ped, renamed from l_U501
int AreCharsInCar(unknown char1ToCheck, unknown char2ToCheck)
{
    // unknown uVar4;
    Vehicle charCurrentCar;

    if (NOT (IS_CHAR_INJURED( char1ToCheck )))
    {
        if (IS_CHAR_IN_ANY_CAR( char1ToCheck ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( char1ToCheck, ref charCurrentCar );
            if (IS_VEH_DRIVEABLE( charCurrentCar ))
            {
                if (NOT (IS_CHAR_INJURED( char2ToCheck )))
                {
                    if (IS_CHAR_IN_CAR( char2ToCheck, charCurrentCar ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_22506()
{
    if ((l_U602 == 5) || ((l_U602 == 4) || ((l_U602 == 3) || (l_U602 == 2))))
    {
        if ((IS_CHAR_INJURED( l_U503[1] )) || ((IS_CHAR_INJURED( l_U503[0] )) || (IS_CHAR_INJURED( l_U502 ))))
        {
            l_U604 = 2;
            sub_22606();
        }
    }
    else if ((l_U602 == 12) || ((l_U602 == 11) || ((l_U602 == 10) || ((l_U602 == 9) || ((l_U602 == 8) || ((l_U602 == 7) || (l_U602 == 6)))))))
    {
        if ((IS_CHAR_INJURED( l_U503[0] )) || (IS_CHAR_INJURED( l_U502 )))
        {
            l_U604 = 2;
            sub_22606();
        }
    }
    else if (l_U602 == 13)
    {
        if ((IS_CHAR_INJURED( l_U503[0] )) || (IS_CHAR_DEAD( l_U502 )))
        {
            l_U604 = 2;
            sub_22606();
        }
    };;;
    return;
}

void sub_22606()
{
    l_U574 = 1;
    l_U602 = 25;
    CLEAR_HELP();
    switch (l_U604)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( dimitriChar )))
        {
            DELETE_CHAR( ref dimitriChar );
        }
        PRINT_NOW( "GI_FAIL_1", 7000, 1 );
        sub_22759( 4, "F2_FAIL1", "F2AUD", 0 );
        sub_23345();
        sub_23655();
        break;
        case 1:
        sub_23883( 25, dimitriChar, 4 );
        PRINT_NOW( "GI_FAIL_2", 7000, 1 );
        sub_22759( 4, "F2_CDDEAD", "F2AUD", 0 );
        sub_23345();
        sub_23655();
        break;
        case 2:
        if (NOT l_U603)
        {
            CLEAR_PRINTS();
            if (l_U592)
            {
                PRINT_NOW( "GI_FAIL_6", 7000, 1 );
            }
            else
            {
                PRINT_NOW( "GI_FAIL_3", 7000, 1 );
            }
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                SET_CHAR_PROOFS( dimitriChar, 1, 1, 1, 1, 1 );
            }
            sub_23345();
            l_U603 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_FAIL_6", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_FAIL_3", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
            {
                if ((NOT IS_SCREEN_FADING()) AND ((sub_24205( 1, 1 )) AND (l_U573)))
                {
                    sub_24516( "F2_FSHOP" );
                    sub_22759( 4, "F2_FAIL3", "F2AUD", 0 );
                    sub_23655();
                }
            }
        }
        break;
        case 3:
        if (NOT l_U603)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "GI_FAIL_4", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                SET_CHAR_PROOFS( dimitriChar, 1, 1, 1, 1, 1 );
            }
            l_U603 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_FAIL_4", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if ((NOT IS_SCREEN_FADING()) AND ((sub_24205( 1, 1 )) AND (l_U573)))
            {
                sub_24516( "F2_FSHOP" );
                sub_22759( 4, "F2_HURT", "F2AUD", 0 );
                sub_23655();
            }
        }
        break;
        case 4:
        if (NOT l_U603)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "GI_FAIL_5", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                SET_CHAR_PROOFS( dimitriChar, 1, 1, 1, 1, 1 );
            }
            sub_23345();
            l_U603 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "GI_FAIL_5", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if ((NOT IS_SCREEN_FADING()) AND ((sub_24205( 1, 1 )) AND (l_U573)))
            {
                sub_24516( "F2_FSHOP" );
                sub_22759( 4, "F2_FAIL4", "F2AUD", 0 );
                sub_23655();
            }
        }
        break;
    }
    return;
}

// Seems to end some strings and StrCopy for it, unsure of what this actually does.
void sub_22759(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_22803( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

// Seems to run the SPcellphoneEndCall script
void sub_22803(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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
    // g_U812 = cellphoneEndCallScript
    if (NOT (IS_THREAD_ACTIVE( cellphoneEndCallScript )))
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
        cellphoneEndCallScript = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

// More blip checking
void sub_23345()
{
    if (DOES_BLIP_EXIST( l_U497 ))
    {
        REMOVE_BLIP( l_U497 );
    }
    if (DOES_BLIP_EXIST( l_U498 ))
    {
        REMOVE_BLIP( l_U498 );
    }
    if (DOES_BLIP_EXIST( l_U499 ))
    {
        REMOVE_BLIP( l_U499 );
    }
    if (DOES_BLIP_EXIST( l_U500 ))
    {
        REMOVE_BLIP( l_U500 );
    }
    if (NOT (IS_CHAR_INJURED( l_U502 )))
    {
        TASK_SMART_FLEE_CHAR( l_U502, CurrentPlayerChar(), 2000, -2 );
        SET_CHAR_KEEP_TASK( l_U502, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U503[1] )))
    {
        TASK_SMART_FLEE_CHAR( l_U503[1], CurrentPlayerChar(), 2000, -2 );
        SET_CHAR_KEEP_TASK( l_U503[1], 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U503[0] )))
    {
        TASK_SMART_FLEE_CHAR( l_U503[0], CurrentPlayerChar(), 2000, -2 );
        SET_CHAR_KEEP_TASK( l_U503[0], 1 );
    }
    return;
}

void sub_23655()
{
    g_U64663 = 0;
    g_U15654[60] = 0;
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( CurrentPlayerId(), 150 );
        SAY_AMBIENT_SPEECH( CurrentPlayerChar(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_23745();
    sub_2277();
    return;
}

void sub_23745()
{
    sub_23754();
    return;
}

void sub_23754()
{
    int iVar2;

    iVar2 = 4;
    sub_23768( iVar2 );
    sub_1366( iVar2 );
    return;
}

void sub_23768(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( CurrentPlayerId(), 150 );
    CLEAR_HELP();
    sub_190( uParam0 );
    return;
}

void sub_23883(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

int sub_24205(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == CurrentPlayerChar()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( CurrentPlayerId() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( CurrentPlayerId() )))
    {
        return 0;
    }
    return 1;
}

void sub_24516(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    while ((NOT bVar4) AND (NOT bVar3))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar9 );
        if (iVar6 != 0)
        {
            iVar10 = iVar9 - iVar8;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_24580()) AND (iVar10 >= 1000)))
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            if (DOES_CHAR_EXIST( dimitriChar ))
            {
                DELETE_CHAR( ref dimitriChar );
            }
            DO_SCREEN_FADE_IN( 500 );
            bVar4 = true;
        }
        else
        {
            switch (iVar6)
            {
                case 0:
                sub_24777();
                SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
                if (NOT l_U559)
                {
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                }
                while (NOT sub_24891())
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                SWITCH_PED_PATHS_OFF( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                ADD_SCENARIO_BLOCKING_AREA( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                SWITCH_ROADS_OFF( 1352.89000000, -818.88000000, 0.00000000, 1335.31000000, -872.96000000, 100.00000000 );
                if (NOT l_U559)
                {
                    if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                    {
                        GET_CAR_CHAR_IS_USING( CurrentPlayerChar(), ref uVar7 );
                        if (NOT (IS_CHAR_DEAD( dimitriChar )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( dimitriChar, uVar7 )))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( dimitriChar, uVar7, 0 );
                            }
                        }
                    }
                    else if (IS_VEH_DRIVEABLE( l_U507 ))
                    {
                        GET_NUMBER_OF_PASSENGERS( l_U507, ref iVar11 );
                        GET_DRIVER_OF_CAR( l_U507, ref iVar12 );
                    }
                    if ((iVar11 < 1) AND ((iVar12 == nil) AND (IS_VEH_DRIVEABLE( l_U507 ))))
                    {
                        uVar7 = l_U507;
                        if (NOT (IS_CHAR_DEAD( dimitriChar )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( dimitriChar, uVar7 )))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( dimitriChar, uVar7, 0 );
                            }
                        }
                        WARP_CHAR_INTO_CAR( CurrentPlayerChar(), uVar7 );
                    }
                    else
                    {
                        REQUEST_MODEL( 2016857647 );
                        while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                        {
                            WAIT( 0 );
                        }
                        CREATE_CAR( 2016857647, 1341.09200000, -846.97060000, 7.24930000, ref uVar7, 1 );
                        WARP_CHAR_INTO_CAR( CurrentPlayerChar(), uVar7 );
                        if (NOT (IS_CHAR_DEAD( dimitriChar )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( dimitriChar, uVar7, 0 );
                        }
                    }
                    SET_CAR_HEADING( uVar7, 180.50000000 );
                    SET_CAR_COORDINATES( uVar7, 1341.09200000, -846.97060000, 7.24930000 );
                    SET_CAR_ON_GROUND_PROPERLY( uVar7 );
                }
                if (NOT l_U559)
                {
                    CLEAR_AREA( 1340.83600000, -846.45690000, 9.23770000, 40, 1 );
                    LOAD_SCENE( 1340.83600000, -846.45690000, 9.23770000 );
                }
                BEGIN_CAM_COMMANDS( ref l_U541 );
                CREATE_CAM( 14, ref l_U537[0] );
                SET_CAM_POS( l_U537[0], 1349.61000000, -861.14050000, 8.52514400 );
                SET_CAM_ROT( l_U537[0], 2.62061200, -0.00000000, 46.25328000 );
                SET_CAM_FOV( l_U537[0], 46 );
                CREATE_CAM( 14, ref l_U537[1] );
                SET_CAM_POS( l_U537[1], 1349.61000000, -861.14050000, 8.52514400 );
                SET_CAM_ROT( l_U537[1], 2.62061200, -0.00000000, 46.25328000 );
                SET_CAM_FOV( l_U537[1], 42 );
                CREATE_CAM( 3, ref l_U536 );
                SET_CAM_ACTIVE( l_U537[0], 1 );
                SET_CAM_PROPAGATE( l_U537[0], 1 );
                SET_CAM_ACTIVE( l_U537[1], 1 );
                SET_CAM_PROPAGATE( l_U537[1], 1 );
                SET_CAM_ACTIVE( l_U536, 1 );
                SET_CAM_PROPAGATE( l_U536, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U536, l_U537[0], l_U537[1], 9000, 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (NOT (IS_CHAR_DEAD( dimitriChar )))
                {
                    FREEZE_CHAR_POSITION( dimitriChar, 0 );
                    GET_PED_BONE_POSITION( CurrentPlayerChar(), 0, 0.00000000, 0.00000000, 0.00000000, ref l_U576[0] );
                    OPEN_SEQUENCE_TASK( ref l_U589 );
                    TASK_PAUSE( 0, 2000 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1325.59000000, -846.73000000, 7.97000000, 2, 20000, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U589 );
                    TASK_PERFORM_SEQUENCE( dimitriChar, l_U589 );
                    CLEAR_SEQUENCE_TASK( l_U589 );
                    TASK_LOOK_AT_CHAR( CurrentPlayerChar(), dimitriChar, 14000, 0 );
                }
                if (NOT l_U559)
                {
                    APPLY_FORCE_TO_CAR( uVar7, 1, 0, 0, 0.10000000, 0, 0, 0, 0, 0, 0, 0 );
                    WAIT( 1000 );
                    DO_SCREEN_FADE_IN( 500 );
                }
                GET_GAME_TIMER( ref iVar8 );
                SETTIMERA( 0 );
                iVar6++;
                break;
                case 1:
                if (TIMERA() > 500)
                {
                    sub_26262( uParam0, ref l_U593, 6, 1 );
                    iVar6++;
                }
                break;
                case 2:
                if (NOT (IS_CHAR_DEAD( dimitriChar )))
                {
                    if ((TIMERA() > 14000) || (LOCATE_CHAR_ANY_MEANS_3D( dimitriChar, 1325.59000000, -846.73000000, 7.97000000, 8, 8, 8, 0 )))
                    {
                        DELETE_CHAR( ref dimitriChar );
                        bVar3 = true;
                    }
                }
                break;
            }
        }
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_ACTIVE( l_U537[0], 0 );
    SET_CAM_PROPAGATE( l_U537[0], 0 );
    SET_CAM_ACTIVE( l_U537[1], 0 );
    SET_CAM_PROPAGATE( l_U537[1], 0 );
    SET_CAM_ACTIVE( l_U536, 0 );
    SET_CAM_PROPAGATE( l_U536, 0 );
    DESTROY_CAM( l_U536 );
    DESTROY_CAM( l_U537[0] );
    DESTROY_CAM( l_U537[1] );
    SET_WIDESCREEN_BORDERS( 0 );
    END_CAM_COMMANDS( ref l_U541 );
    sub_24777();
    TASK_CLEAR_LOOK_AT( CurrentPlayerChar() );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
    sub_4573();
    SET_CAM_BEHIND_PED( CurrentPlayerChar() );
    return;
}

int sub_24580()
{
    if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_24777()
{
    sub_4615( ref l_U593, 0 );
    CLEAR_SMALL_PRINTS();
    CLEAR_HELP();
    return;
}

void sub_24891()
{
    return sub_24902( 1, 1 );
}

int sub_24902(boolean bParam0, unknown uParam1)
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

void sub_26262(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_26285( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_26285(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_26339( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_26339(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_26361( iParam1 )))
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
    sub_27053( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_26361(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_26438( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_26438( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_26438( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_26438(unknown uParam0)
{
    return;
}

void sub_27053(int iParam0, int iParam1)
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

void sub_28204()
{
    boolean bVar2;

    if ((l_U602 == 6) || ((l_U602 == 5) || ((l_U602 == 4) || ((l_U602 == 3) || (l_U602 == 2)))))
    {
        bVar2 = false;
        GET_AMMO_IN_CHAR_WEAPON( CurrentPlayerChar(), 7, ref l_U590 );
        if (l_U590 == 0)
        {
            GET_AMMO_IN_CHAR_WEAPON( CurrentPlayerChar(), 9, ref l_U590 );
            if (l_U590 == 0)
            {
                GET_AMMO_IN_CHAR_WEAPON( CurrentPlayerChar(), 10, ref l_U590 );
                if (l_U590 == 0)
                {
                    GET_AMMO_IN_CHAR_WEAPON( CurrentPlayerChar(), 11, ref l_U590 );
                    if (l_U590 == 0)
                    {
                        GET_AMMO_IN_CHAR_WEAPON( CurrentPlayerChar(), 12, ref l_U590 );
                        if (l_U590 == 0)
                        {
                            GET_AMMO_IN_CHAR_WEAPON( CurrentPlayerChar(), 13, ref l_U590 );
                            if (l_U590 == 0)
                            {
                                GET_AMMO_IN_CHAR_WEAPON( CurrentPlayerChar(), 14, ref l_U590 );
                                if (l_U590 == 0)
                                {
                                    GET_AMMO_IN_CHAR_WEAPON( CurrentPlayerChar(), 15, ref l_U590 );
                                    if (l_U590 == 0)
                                    {
                                        GET_AMMO_IN_CHAR_WEAPON( CurrentPlayerChar(), 16, ref l_U590 );
                                        if (l_U590 == 0)
                                        {
                                            GET_AMMO_IN_CHAR_WEAPON( CurrentPlayerChar(), 17, ref l_U590 );
                                            if (l_U590 == 0)
                                            {
                                                bVar2 = true;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (bVar2)
        {
            l_U604 = 4;
            sub_22606();
        }
    }
    return;
}

int sub_29018()
{
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_29033( l_U593 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_29033(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_26438( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_26438( "\n speech is not playing" );
    }
    return 0;
}

void sub_29252(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_29279( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_29279(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_26339( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_29426(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (IS_GROUP_MEMBER( uParam2, sub_8595() ))
    {
        if (sub_29461( uParam2, CurrentPlayerChar() ))
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
                (uParam1^) = sub_29746( uParam3 );
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
    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( CurrentPlayerChar(), uParam2, 20.00000000, 20.00000000, 0 ))
    {
        SET_GROUP_MEMBER( sub_8595(), uParam2 );
    }
    return 0;
}

int sub_29461(unknown uParam0, unknown uParam1)
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

void sub_29746(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;

    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result );
    SET_ROUTE( Result, 1 );
    return Result;
}

void sub_30048()
{
    sub_4615( ref l_U593, 0 );
    l_U546 = 0;
    l_U547 = 0;
    return;
}

void sub_30087()
{
    unknown uVar2;

    CLEAR_PRINTS();
    SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
    CLEAR_CHAR_TASKS( CurrentPlayerChar() );
    while (NOT sub_24891())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    ALTER_WANTED_LEVEL( CurrentPlayerId(), 0 );
    APPLY_WANTED_LEVEL_CHANGE_NOW( CurrentPlayerId() );
    if (NOT (IS_CHAR_DEAD( dimitriChar )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( dimitriChar );
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( CurrentPlayerChar() );
    sub_5141( 771.70670000, -543.04450000, 7.74360000, 41.50000000, 794.80000000, -536.50000000, 7.60000000, 10.00000000, -1, 0 );
    START_CUTSCENE_NOW( "imfau2" );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
    }
    CLEAR_NAMED_CUTSCENE( "imfau2" );
    REQUEST_MODEL( 1352017873 );
    REQUEST_MODEL( 223726252 );
    REQUEST_MODEL( -1516474414 );
    while ((NOT (HAS_MODEL_LOADED( -1516474414 ))) || ((NOT (HAS_MODEL_LOADED( 223726252 ))) || (NOT (HAS_MODEL_LOADED( 1352017873 )))))
    {
        WAIT( 0 );
    }
    LOAD_SCENE( 798.17960000, -537.19060000, 6.53220000 );
    GET_INTERIOR_AT_COORDS( 798.17960000, -537.19060000, 6.53220000, ref uVar2 );
    LOAD_SCENE_FOR_ROOM_BY_KEY( uVar2, GET_HASH_KEY( "sshop_MloRoom01" ) );
    if (NOT (IS_CHAR_DEAD( dimitriChar )))
    {
        REMOVE_CHAR_FROM_GROUP( dimitriChar );
        CLEAR_CHAR_TASKS_IMMEDIATELY( dimitriChar );
        SET_CHAR_COORDINATES( dimitriChar, 795.92000000, -540.64000000, 6.52150000 );
        SET_CHAR_HEADING( dimitriChar, 326.65910000 );
        SET_ROOM_FOR_CHAR_BY_NAME( dimitriChar, "sshop_MloRoom01" );
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( CurrentPlayerChar() );
    SET_CHAR_HEADING( CurrentPlayerChar(), 296.00000000 );
    SET_CHAR_COORDINATES( CurrentPlayerChar(), 794.70000000, -539.33000000, 6.52160000 );
    SET_ROOM_FOR_CHAR_BY_NAME( CurrentPlayerChar(), "sshop_MloRoom01" );
    REMOVE_PLAYER_HELMET( CurrentPlayerId(), 1 );
    CREATE_CHAR( 26, 1352017873, l_U508._fU0, l_U508._fU4, l_U508._fU8, ref l_U502, 1 );
    SET_CHAR_HEADING( l_U502, 95.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U502, "sshop_MloRoom01" );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U502, 1 );
    sub_4952( 3, l_U502, "JOSEPH", 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U502, 0, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U502, 1, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U502, 2, 0, 2 );
    CREATE_CHAR( 26, 223726252, l_U511[0]._fU0, l_U511[0]._fU4, l_U511[0]._fU8, ref l_U503[0], 1 );
    SET_CHAR_HEADING( l_U503[0], 145.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U503[0], "sshop_MloRoom01" );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[0], 1 );
    sub_4952( 7, l_U503[0], "PORN_ACTOR", 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[0], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[0], 1, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[0], 2, 0, 2 );
    CREATE_CHAR( 26, -1516474414, l_U511[1]._fU0, l_U511[1]._fU4, l_U511[1]._fU8, ref l_U503[1], 1 );
    SET_CHAR_HEADING( l_U503[1], 120.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U503[1], "sshop_MloRoom01" );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U503[1], 1 );
    sub_4952( 4, l_U503[1], "GUY_1_F2", 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[1], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[1], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U503[1], 2, 0, 0 );
    SUPPRESS_PED_MODEL( -1516474414 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1516474414 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 223726252 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1352017873 );
    GIVE_WEAPON_TO_CHAR( CurrentPlayerChar(), 7, 40, 0 );
    SET_CURRENT_CHAR_WEAPON( CurrentPlayerChar(), 7, 1 );
    REMOVE_BLIP( l_U497 );
    REMOVE_BLIP( l_U498 );
    ADD_BLIP_FOR_CHAR( l_U502, ref l_U498 );
    CHANGE_BLIP_COLOUR( l_U498, 1 );
    if ((NOT (IS_CHAR_DEAD( l_U503[1] ))) AND (NOT (IS_CHAR_DEAD( l_U503[0] ))))
    {
        SET_CHAR_NEVER_TARGETTED( l_U503[0], 1 );
        SET_CHAR_NEVER_TARGETTED( l_U503[1], 1 );
    }
    if ((l_U551) AND (NOT (IS_CAR_DEAD( l_U507 ))))
    {
        SET_CAR_HEADING( l_U507, 44.00000000 );
        SET_CAR_COORDINATES( l_U507, 776.24400000, -546.97140000, 8.57839900 );
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN_UNHACKED( 100 );
    l_U602 = 2;
    SETTIMERA( 0 );
    SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
    sub_4573();
    SET_CAM_BEHIND_PED( CurrentPlayerChar() );
    return;
}

void sub_31798()
{
    float fVar2;
    unknown uVar3;

    if ((IS_CHAR_ON_ANY_BIKE( CurrentPlayerChar() )) || (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar3 );
        if (IS_VEH_DRIVEABLE( uVar3 ))
        {
            SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
            GET_CAR_SPEED( uVar3, ref fVar2 );
            while (fVar2 > 0.20000000)
            {
                WAIT( 0 );
                if (NOT (IS_CAR_DEAD( uVar3 )))
                {
                    GET_CAR_SPEED( uVar3, ref fVar2 );
                }
            }
            SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
        }
    }
    return;
}

void sub_32220(unknown uParam0, unknown uParam1)
{
    CLEAR_SMALL_PRINTS();
    PRINT( uParam0, uParam1, 1 );
    return;
}

void sub_32293(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (AreCharsInCar( CurrentPlayerChar(), dimitriChar ))
    {
        if (NOT l_U546)
        {
            if (NOT l_U548)
            {
                GET_GAME_TIMER( ref l_U550 );
                l_U548 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U590 );
                l_U590 -= l_U550;
                if (l_U590 > 2000)
                {
                    if (g_U64648[uParam3] == 0)
                    {
                        l_U549 = uParam1;
                        g_U64648[uParam3]++;
                    }
                    else if (g_U64648[uParam3] == 1)
                    {
                        l_U549 = uParam2;
                        g_U64648[uParam3]++;
                    }
                    else if (g_U64648[uParam3] > 1)
                    {
                        SAY_AMBIENT_SPEECH( uParam0, "LISTEN_TO_RADIO", 0, 0, 0 );
                        g_U64648[uParam3] = 3;
                        l_U546 = 1;
                    };;;
                    if (g_U64648[uParam3] < 3)
                    {
                        if (COMPARE_STRING( l_U549, "F2_CAR1" ))
                        {
                            if (sub_29252( l_U549, 1, 0, ref l_U593, 6, 1 ))
                            {
                                l_U546 = 1;
                            }
                        }
                        else if (sub_26262( l_U549, ref l_U593, 6, 1 ))
                        {
                            l_U546 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U547)
        {
            if (NOT l_U548)
            {
                GET_GAME_TIMER( ref l_U550 );
                l_U548 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U590 );
                l_U590 -= l_U550;
                if (l_U590 > 2000)
                {
                    sub_32787( l_U549, ref l_U593, 6, 1 );
                    l_U547 = 0;
                    l_U548 = 0;
                }
            }
        }
    }
    else if ((g_U64648[uParam3] != 3) AND (sub_29033( l_U593 )))
    {
        sub_32951( ref l_U593 );
        l_U547 = 1;
        l_U548 = 0;
    }
    return;
}

void sub_32787(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_32810( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_32810(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_26339( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_32951(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_26438( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_26438( "\n CONVERSATION PAUSED AT LINE " );
            sub_33107( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_26438( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_26438( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_26438( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_33107(unknown uParam0)
{
    return;
}

int sub_34170(unknown uParam0)
{
    if ((IS_PLAYER_FREE_AIMING_AT_CHAR( CurrentPlayerId(), uParam0 )) || ((IS_PLAYER_TARGETTING_CHAR( CurrentPlayerId(), uParam0 )) AND (IS_AUTO_AIMING_ON())))
    {
        if (IS_CHAR_ARMED( CurrentPlayerChar(), 4 ))
        {
            PRINTSTRING( "Player was aiming at target" );
            return 1;
        }
        else
        {
            PRINTSTRING( "Player was aiming at target, but had no ammo" );
            return 0;
        }
        break;
    }
    PRINTSTRING( "Player WAS NOT aiming at the target" );
    return 0;
}

// sub_34468
// Seems to be setting up blips
void SetupBlipsForPeds()
{
    int iVar2;

    if (l_U605)
    {
        if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( CurrentPlayerChar(), 795.71810000, -544.14810000, 6.40000000, 802.75520000, -538.29240000, 9.30000000, 8.00000000, 0 )))
        {
            if (DOES_BLIP_EXIST( l_U498 ))
            {
                REMOVE_BLIP( l_U498 );
            }
            if (DOES_BLIP_EXIST( l_U497 ))
            {
                REMOVE_BLIP( l_U497 );
            }
            if (DOES_BLIP_EXIST( l_U499 ))
            {
                REMOVE_BLIP( l_U499 );
            }
            sub_24777();
            if (NOT (IS_CHAR_DEAD( dimitriChar )))
            {
                ADD_BLIP_FOR_CHAR( dimitriChar, ref l_U498 );
                SET_BLIP_AS_FRIENDLY( l_U498, 1 );
            }
            PRINT_NOW( "GI_DONT_LEAVE", 7500, 0 );
            l_U605 = 0;
        }
    }
    else
    {
        GET_INTERIOR_FROM_CHAR( CurrentPlayerChar(), ref iVar2 );
        if (iVar2 == nil)
        {
            l_U604 = 0;
            sub_22606();
        }
        else if (IS_CHAR_IN_ANGLED_AREA_3D( CurrentPlayerChar(), 795.71810000, -544.14810000, 6.74261700, 802.75520000, -538.29240000, 9.32059200, 7.00000000, 0 ))
        {
            REMOVE_BLIP( l_U498 );
            CLEAR_SMALL_PRINTS();
            sub_34833();
            l_U605 = 1;
        }
    }
    return;
}

void sub_34833()
{
    switch (l_U602)
    {
        case 2:
        PRINTNL();
        PRINTSTRING( "RESETTING TARGET_BOSS" );
        l_U545 = 0;
        l_U556 = 0;
        if (NOT (IS_CHAR_DEAD( l_U502 )))
        {
            if (DOES_BLIP_EXIST( l_U498 ))
            {
                REMOVE_BLIP( l_U498 );
            }
            ADD_BLIP_FOR_CHAR( l_U502, ref l_U498 );
        }
        break;
        case 3:
        case 4:
        PRINTNL();
        PRINTSTRING( "RESETTING TARGET_ASSOCIATE or TARGETTED_ASSOCIATE" );
        l_U602 = 4;
        if (NOT (IS_CHAR_DEAD( l_U503[1] )))
        {
            if (DOES_BLIP_EXIST( l_U498 ))
            {
                REMOVE_BLIP( l_U498 );
            }
            ADD_BLIP_FOR_CHAR( l_U503[1], ref l_U498 );
        }
        l_U543 = 0;
        l_U557 = 0;
        break;
        case 5:
        case 6:
        if (l_U564)
        {
            l_U602 = 7;
        }
        else
        {
            PRINTNL();
            PRINTSTRING( "RESETTING SHOOT_GUY_IN_LEG or SHOT_GUY_IN_LEG" );
            l_U602 = 6;
            if (NOT (IS_CHAR_DEAD( l_U503[1] )))
            {
                if (DOES_BLIP_EXIST( l_U498 ))
                {
                    REMOVE_BLIP( l_U498 );
                }
                ADD_BLIP_FOR_CHAR( l_U503[1], ref l_U498 );
            }
            l_U555 = 0;
            l_U544 = 0;
        }
        break;
        default:
        PRINTNL();
        PRINTSTRING( "RESETTING DEFAULT" );
        break;
    }
    return;
}

int sub_35428(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5, unknown uParam6)
{
    uParam1._fU8 += 0.20000000;
    if (NOT (IS_CHAR_DEAD( iParam0 )))
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            if (l_U526[uParam6])
            {
                GET_SCRIPT_TASK_STATUS( iParam0, 29, ref l_U531 );
                if (l_U531 == 7)
                {
                    if (NOT (IS_CHAR_DEAD( iParam5 )))
                    {
                        if (iParam0 == dimitriChar)
                        {
                            if (iParam5 == l_U502)
                            {
                                TASK_LOOK_AT_CHAR( iParam0, iParam5, -2, 8 );
                            }
                            else
                            {
                                TASK_LOOK_AT_CHAR( iParam0, iParam5, -2, 0 );
                            }
                        }
                        else
                        {
                            TASK_LOOK_AT_CHAR( iParam0, iParam5, -2, 0 );
                        }
                        l_U526[uParam6] = 0;
                    }
                }
                else
                {
                    return 1;
                }
            }
            else
            {
                GET_CHAR_HEADING( iParam0, ref l_U591 );
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( iParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 0.70000000, 0.70000000, 1.00000000, 0 )))
                {
                    TASK_CLEAR_LOOK_AT( iParam0 );
                    OPEN_SEQUENCE_TASK( ref l_U589 );
                    TASK_CHAR_SLIDE_TO_COORD( 0, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4, 10000 );
                    CLOSE_SEQUENCE_TASK( l_U589 );
                    TASK_PERFORM_SEQUENCE( iParam0, l_U589 );
                    CLEAR_SEQUENCE_TASK( l_U589 );
                    l_U526[uParam6] = 1;
                    return 1;
                }
                else if ((l_U591 > (uParam4 + 3.00000000)) || (l_U591 < (uParam4 - 3.00000000)))
                {
                    TASK_CLEAR_LOOK_AT( iParam0 );
                    OPEN_SEQUENCE_TASK( ref l_U589 );
                    TASK_ACHIEVE_HEADING( 0, uParam4 );
                    CLOSE_SEQUENCE_TASK( l_U589 );
                    TASK_PERFORM_SEQUENCE( iParam0, l_U589 );
                    CLEAR_SEQUENCE_TASK( l_U589 );
                    l_U526[uParam6] = 1;
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_42051()
{
    if ((NOT l_U571) AND (DOES_CHAR_EXIST( l_U503[0] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U503[0] )))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U503[0], "missfaustin2", "drop_knees" )))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U503[0], "missfaustin2", "plead_idle" )))
                {
                    SET_CHAR_HEALTH( l_U503[0], 60 );
                    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U503[0], 0 );
                    l_U571 = 1;
                }
            }
        }
    }
    return;
}

int sub_43298(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_PLAYER_GROUP( CurrentPlayerId(), ref uVar3 );
        if (IS_GROUP_MEMBER( uParam0, uVar3 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_43932(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_PLAYER_GROUP( CurrentPlayerId(), ref uVar3 );
        SET_GROUP_MEMBER( sub_8595(), uParam0 );
        SET_CHAR_RELATIONSHIP( uParam0, 1, 0 );
    }
    return;
}

void sub_44131(unknown uParam0)
{
    if (AreCharsInCar( CurrentPlayerChar(), dimitriChar ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( dimitriChar, 1 );
        if (NOT l_U546)
        {
            if (NOT l_U548)
            {
                GET_GAME_TIMER( ref l_U550 );
                l_U548 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U590 );
                l_U590 -= l_U550;
                if (l_U590 > 2000)
                {
                    if (l_U607 == 0)
                    {
                        if (sub_26262( "F2_CAR3", ref l_U593, 6, 1 ))
                        {
                            g_U64648[1] = 1;
                            l_U546 = 1;
                        }
                    }
                    else if (l_U607 == 1)
                    {
                        if (sub_44346( dimitriChar, "F2_RINGS" ))
                        {
                            l_U546 = 1;
                        }
                    }
                    else if (l_U607 == 2)
                    {
                        if (sub_26262( "F2_HANGUP", ref l_U593, 6, 1 ))
                        {
                            l_U546 = 1;
                        }
                    };;;
                }
            }
        }
        else if (l_U547)
        {
            if (NOT l_U548)
            {
                GET_GAME_TIMER( ref l_U550 );
                l_U548 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U590 );
                l_U590 -= l_U550;
                if (l_U590 > 2000)
                {
                    if (l_U607 == 0)
                    {
                        sub_32787( "F2_CAR3", ref l_U593, 6, 1 );
                    }
                    else if (l_U607 == 2)
                    {
                        sub_32787( "F2_HANGUP", ref l_U593, 6, 1 );
                    }
                    l_U547 = 0;
                    l_U548 = 0;
                }
            }
        }
        else if (l_U546)
        {
            if (NOT (sub_29033( l_U593 )))
            {
                if (l_U607 == 1)
                {
                    TASK_USE_MOBILE_PHONE( dimitriChar, 0 );
                }
                l_U548 = 1;
                l_U607++;
                l_U546 = 0;
            }
        };;;
    }
    else if (sub_29033( l_U593 ))
    {
        if (l_U607 == 1)
        {
            TASK_USE_MOBILE_PHONE( dimitriChar, 0 );
            sub_4615( ref l_U593, 0 );
            sub_26262( "F2_HANGUP", ref l_U593, 6, 1 );
            l_U546 = 0;
            l_U547 = 1;
            l_U607 = 8;
        }
        else if (l_U607 != 8)
        {
            sub_32951( ref l_U593 );
            l_U547 = 1;
        }
        l_U548 = 0;
    }
    return;
}

// TODO Figure out what this function is doing, seems to be using the GET_MOBILE_PHONE_TASK_SUB_TASK I'm looking at
// uParam1 seems to be "F2_RINGS" under "sub_44131()"
int sub_44346(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_MOBILE_PHONE_TASK_SUB_TASK( uParam0, ref iVar4 );
    if (iVar4 != 1)
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 53, ref l_U531 );
        if (l_U531 == 7)
        {
            TASK_USE_MOBILE_PHONE( uParam0, 1 );
        }
    }
    else if (sub_26262( uParam1, ref l_U593, 6, 1 ))
    {
        l_U546 = 1;
        return 1;
    }
    return 0;
}

int sub_45177()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( CurrentPlayerChar() )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( CurrentPlayerChar(), ref iVar2 );
        if (iVar2 == (GET_HASH_KEY( "GtaMloRoom01" )))
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

void sub_45287()
{
    if (NOT (IS_CHAR_DEAD( dimitriChar )))
    {
        if (NOT (IS_CHAR_INJURED( dimitriChar )))
        {
            if (IS_CHAR_IN_ANY_CAR( dimitriChar ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( dimitriChar, ref l_U507 );
                if (NOT (IS_VEH_DRIVEABLE( l_U507 )))
                {
                    TASK_LEAVE_ANY_CAR( dimitriChar );
                }
            }
        }
    }
    return;
}

void sub_45403()
{
    int iVar2;

    if (l_U606)
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( CurrentPlayerChar(), dimitriChar, 20.00000000, 20.00000000, 0 ))
        {
            if (DOES_BLIP_EXIST( l_U498 ))
            {
                REMOVE_BLIP( l_U498 );
            }
            if (l_U602 == 20)
            {
                ADD_BLIP_FOR_COORD( 1061.50000000, 88.83230000, 34.24610000, ref l_U497 );
                SET_ROUTE( l_U497, 1 );
                sub_32220( "GI_44", 7500 );
            }
            else if (l_U602 == 21)
            {
                ADD_BLIP_FOR_COORD( 1066.37000000, 86.24000000, 34.00000000, ref l_U500 );
                CHANGE_BLIP_COLOUR( l_U500, 2 );
                sub_32220( "GI_45", 7500 );
            }
            l_U606 = 0;
        }
        else
        {
            PRINT_NOW( "DIMITRI_BUDDY", 100, 0 );
        }
    }
    else
    {
        GET_INTERIOR_FROM_CHAR( CurrentPlayerChar(), ref iVar2 );
        if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( CurrentPlayerChar(), dimitriChar, 80.00000000, 80.00000000, 80.00000000, 0 ))) AND (iVar2 == nil))
        {
            if (DOES_BLIP_EXIST( l_U497 ))
            {
                REMOVE_BLIP( l_U497 );
            }
            if (DOES_BLIP_EXIST( l_U500 ))
            {
                REMOVE_BLIP( l_U500 );
            }
            if (DOES_BLIP_EXIST( l_U498 ))
            {
                REMOVE_BLIP( l_U498 );
            }
            ADD_BLIP_FOR_CHAR( dimitriChar, ref l_U498 );
            SET_BLIP_AS_FRIENDLY( l_U498, 1 );
            l_U606 = 1;
        }
    }
    return;
}

void sub_46172(unknown uParam0)
{
    g_U10133._fU0[uParam0] = 1;
    sub_2480();
    return;
}

void sub_47262(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    while ((NOT bVar4) AND (NOT bVar3))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar8 );
        iVar9 = iVar8 - iVar7;
        if ((IS_SCREEN_FADED_IN()) AND ((sub_24580()) AND (iVar9 >= 1000)))
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            if (DOES_CHAR_EXIST( dimitriChar ))
            {
                DELETE_CHAR( ref dimitriChar );
            }
            DO_SCREEN_FADE_IN( 500 );
            bVar4 = true;
        }
        else
        {
            switch (iVar6)
            {
                case 0:
                SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                while (NOT sub_24891())
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                SWITCH_PED_PATHS_OFF( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                ADD_SCENARIO_BLOCKING_AREA( 1339.70000000, -836.72000000, 0.00000000, 1320.89000000, -854.42000000, 100.00000000 );
                SWITCH_ROADS_OFF( 1352.89000000, -818.88000000, 0.00000000, 1335.31000000, -872.96000000, 100.00000000 );
                sub_5141( 1341.02000000, -834.53000000, 7.25000000, 0, 1341.00000000, -846.50000000, 9.20000000, 20, -1, 0 );
                BEGIN_CAM_COMMANDS( ref l_U541 );
                CREATE_CAM( 14, ref uVar5 );
                SET_CAM_POS( uVar5, 1337.60900000, -848.14670000, 8.67591400 );
                SET_CAM_ROT( uVar5, 5.32976200, -0.00000000, 31.93069000 );
                SET_CAM_FOV( uVar5, 37 );
                SET_CAM_ACTIVE( uVar5, 1 );
                SET_CAM_PROPAGATE( uVar5, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (NOT (IS_CHAR_DEAD( dimitriChar )))
                {
                    REMOVE_ALL_CHAR_WEAPONS( dimitriChar );
                    REMOVE_CHAR_FROM_GROUP( dimitriChar );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( CurrentPlayerChar() );
                    SET_CHAR_COORDINATES( CurrentPlayerChar(), 1336.37800000, -846.91590000, 7.33810000 );
                    SET_CHAR_HEADING( CurrentPlayerChar(), 1 );
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( CurrentPlayerChar(), 1 );
                    TASK_LOOK_AT_CHAR( CurrentPlayerChar(), dimitriChar, -2, 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( dimitriChar );
                    SET_CHAR_COORDINATES( dimitriChar, 1336.84400000, -845.90420000, 7.33810000 );
                    SET_CHAR_HEADING( dimitriChar, 142 );
                    CLEAR_ROOM_FOR_CHAR( dimitriChar );
                    TASK_LOOK_AT_CHAR( dimitriChar, CurrentPlayerChar(), -2, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( dimitriChar, CurrentPlayerChar() );
                    TASK_TURN_CHAR_TO_FACE_CHAR( CurrentPlayerChar(), dimitriChar );
                }
                WAIT( 500 );
                DO_SCREEN_FADE_IN( 500 );
                GET_GAME_TIMER( ref iVar7 );
                SETTIMERA( 0 );
                iVar6++;
                break;
                case 1:
                if (TIMERA() > 500)
                {
                    sub_26262( uParam0, ref l_U593, 6, 1 );
                    SETTIMERA( 0 );
                    iVar6++;
                }
                break;
                case 2:
                if (TIMERA() > 5000)
                {
                    if (NOT (IS_CHAR_DEAD( dimitriChar )))
                    {
                        TASK_CLEAR_LOOK_AT( dimitriChar );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( dimitriChar, 1325.59000000, -846.73000000, 7.97000000, 2, 20000, 0.50000000 );
                    }
                    SETTIMERA( 0 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    iVar6++;
                }
                break;
                case 3:
                if (NOT (IS_CHAR_DEAD( dimitriChar )))
                {
                    if ((TIMERA() > 14000) || (LOCATE_CHAR_ANY_MEANS_3D( dimitriChar, 1325.59000000, -846.73000000, 7.97000000, 7, 7, 7, 0 )))
                    {
                        if (DOES_CHAR_EXIST( dimitriChar ))
                        {
                            DELETE_CHAR( ref dimitriChar );
                        }
                        bVar3 = true;
                    }
                }
                break;
            }
        }
    }
    SET_CAM_ACTIVE( uVar5, 0 );
    SET_CAM_PROPAGATE( uVar5, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U541 );
    sub_4615( ref l_U593, 0 );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
    sub_4573();
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( CurrentPlayerChar(), 0 );
    SET_CURRENT_CHAR_WEAPON( CurrentPlayerChar(), 0, 0 );
    SET_CAM_BEHIND_PED( CurrentPlayerChar() );
    return;
}

