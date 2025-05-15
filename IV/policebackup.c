// This seems useful, TODO Look into this later

// g_U8087 seems to only be in use in this file.

void main()
{
    g_U8084 = 1;
    sub_15();
    sub_591();
    while (true)
    {
        sub_806();
        sub_1082();
        sub_1388();
        WAIT( 0 );
        if (sub_2151())
        {
            g_U8084 = 0;
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            g_U8087[0] = 0;
            g_U8087[1] = 0;
            TERMINATE_THIS_SCRIPT();
        }
    }
    return;
}

void sub_15()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref playerPos.x, ref playerPos.y, ref playerPos.z );
    }
    
    // Unknown
    REQUEST_MODEL( -196312163 );

    // -183203150 = Police Officer 
    REQUEST_MODEL( -183203150 );
    REQUEST_ANIMS( "cop_wander_idles" );
    while (NOT (HAVE_ANIMS_LOADED( "cop_wander_idles" )))
    {
        WAIT( 0 );
    }

    while ((NOT (HAS_MODEL_LOADED( -183203150 ))) || (NOT (HAS_MODEL_LOADED( -196312163 ))))
    {
        WAIT( 0 );
    }

    for ( I = 0; I <= 1; I++ )
    {

        GENERATE_RANDOM_INT_IN_RANGE( 30, 60, ref uVar3 );

        GET_NTH_CLOSEST_CAR_NODE( playerPos.x, playerPos.y, playerPos.z, uVar3, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        // 2046537925 = Police Cruiser
        CREATE_CAR( 2046537925, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref currentPoliceCar[I], 1 );

        SWITCH_CAR_SIREN( currentPoliceCar[I], 1 );
        FORCE_CAR_LIGHTS( currentPoliceCar[I], 2 );

        CREATE_CHAR_INSIDE_CAR( currentPoliceCar[I], 6, -183203150, ref policePed1[I] );
        CREATE_CHAR_AS_PASSENGER( currentPoliceCar[I], 6, -183203150, 0, ref policePed2[I] );

        GIVE_WEAPON_TO_CHAR( policePed2[I], 7, 200, 0 );
        GIVE_WEAPON_TO_CHAR( policePed1[I], 7, 200, 0 );

        SET_CHAR_HEALTH( policePed1[I], 2000 );
        SET_CHAR_HEALTH( policePed2[I], 2000 );
        SET_CAR_PROOFS( currentPoliceCar[I], 1, 1, 1, 1, 1 );

        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( policePed1[I], 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( policePed2[I], 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -196312163 );
    return;
}

// sub_24
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

// sub_67
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_591()
{
    int I;
    unknown randomFloat1;

    if (NOT l_U12)
    {
        for ( I = 0; I <= 1; I++ )
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( 20.00000000, 30.00000000, ref randomFloat1 );
            GENERATE_RANDOM_FLOAT_IN_RANGE( 13.50000000, 22.50000000, ref randomFloat2[I] );
            CLEAR_AREA_OF_CARS( playerPos.x, playerPos.y, playerPos.z, 50.00000000 );
            if ((IS_VEH_DRIVEABLE( currentPoliceCar[I] )) AND (NOT (IS_CHAR_DEAD( policePed1[I] ))))
            {
                TASK_CAR_DRIVE_TO_COORD( policePed1[I], currentPoliceCar[I], playerPos.x, playerPos.y, playerPos.z, randomFloat1, 0, 2046537925, 2, randomFloat2[I], -1 );
            }
        }
        l_U12 = 1;
    }
    return;
}

void sub_806()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (NOT g_U8087[I])
        {
            if (IS_VEH_DRIVEABLE( currentPoliceCar[I] ))
            {
                if ((NOT (IS_CHAR_DEAD( policePed2[I] ))) AND (NOT (IS_CHAR_DEAD( policePed1[I] ))))
                {
                    if (LOCATE_CHAR_IN_CAR_3D( policePed1[I], playerPos.x, playerPos.y, playerPos.z, randomFloat2[I], randomFloat2[I], 4.00000000, 0 ))
                    {
                        TASK_CAR_TEMP_ACTION( policePed1[I], currentPoliceCar[I], 6, 1000 );
                        TASK_EVERYONE_LEAVE_CAR( currentPoliceCar[I] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( policePed1[I], 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( policePed2[I], 0 );
                        if (DOES_BLIP_EXIST( l_U16[I] ))
                        {
                            REMOVE_BLIP( l_U16[I] );
                        }
                        g_U8087[I] = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_1082()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (IS_VEH_DRIVEABLE( currentPoliceCar[I] ))
        {
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                if (IS_CHAR_SITTING_IN_CAR( CurrentPlayerChar(), currentPoliceCar[I] ))
                {
                    ALTER_WANTED_LEVEL( CurrentPlayerId(), 1 );
                }
            }
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if ((NOT (IS_CHAR_DEAD( policePed1[I] ))) AND (IS_PLAYER_PLAYING( CurrentPlayerId() )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( CurrentPlayerChar(), policePed1[I], 0 ))
            {
                ALTER_WANTED_LEVEL( CurrentPlayerId(), 1 );
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( policePed1[I] );
            }
        }
        if ((NOT (IS_CHAR_DEAD( policePed2[I] ))) AND (IS_PLAYER_PLAYING( CurrentPlayerId() )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( CurrentPlayerChar(), policePed2[I], 0 ))
            {
                ALTER_WANTED_LEVEL( CurrentPlayerId(), 1 );
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( policePed2[I] );
            }
        }
    }
    return;
}

void sub_1388()
{
    if (g_U8087[0])
    {
        sub_1428( policePed1[0], currentPoliceCar[0], ref l_U20[0], 1 );
        sub_1428( policePed2[0], currentPoliceCar[0], ref l_U20[1], 0 );
    }
    if (g_U8087[1])
    {
        sub_1428( policePed1[1], currentPoliceCar[1], ref l_U20[2], 1 );
        sub_1428( policePed2[1], currentPoliceCar[1], ref l_U20[3], 0 );
    }
    return;
}

// uParam0 = car1ToCheck
// uParam1 = car2ToCheck
// uParam2 = unknown
// uParam3 = unknown
void sub_1428(int car1ToCheck, int car2ToCheck, unknown uParam2, boolean bParam3)
{
    int scriptTaskStatus;
    unknown uVar7;
    unknown uVar8;

    GENERATE_RANDOM_INT_IN_RANGE( 100, 8000, ref uVar7 );
    GENERATE_RANDOM_INT_IN_RANGE( 100, 12000, ref uVar8 );
    if ((NOT (IS_CAR_DEAD( car2ToCheck ))) AND (NOT (IS_CHAR_DEAD( car1ToCheck ))))
    {
        switch ((uParam2^))
        {
            case 0:
            if (NOT (IS_CHAR_IN_CAR( car1ToCheck, car2ToCheck )))
            {
                PRINTSTRING( "STUCK IN HERE" );
                OPEN_SEQUENCE_TASK( ref policeWanderSequenceTask);
                TASK_PLAY_ANIM( 0, "idle_lookaround_b", "cop_wander_idles", 8.00000000, 1, 0, 0, 0, uVar7 );
                TASK_PLAY_ANIM( 0, "idle_adjust_hat", "cop_wander_idles", 8.00000000, 1, 0, 0, 0, uVar8 );
                TASK_PLAY_ANIM( 0, "idle_answer_radio_a", "cop_wander_idles", 8.00000000, 0, 0, 0, 0, -2 );
                CLOSE_SEQUENCE_TASK( policeWanderSequenceTask);
                TASK_PERFORM_SEQUENCE( car1ToCheck, policeWanderSequenceTask);
                CLEAR_SEQUENCE_TASK( policeWanderSequenceTask);
                (uParam2^) = 1;
            }
            break;

            case 1:
            GET_SCRIPT_TASK_STATUS( car1ToCheck, 29, ref scriptTaskStatus );
            if (scriptTaskStatus == 7)
            {
                (uParam2^) = 2;
            }
            break;

            case 2:
            TASK_PLAY_ANIM( car1ToCheck, "idle_answer_radio_a", "cop_wander_idles", 8.00000000, 0, 0, 0, 0, -2 );
            (uParam2^) = 3;
            break;

            case 3:
            if (NOT (IS_CHAR_PLAYING_ANIM( car1ToCheck, "cop_wander_idles", "idle_answer_radio_a" )))
            {
                if (bParam3)
                {
                    if (NOT (IS_CAR_DEAD( car2ToCheck )))
                    {
                        TASK_ENTER_CAR_AS_DRIVER( car1ToCheck, car2ToCheck, -2 );
                        (uParam2^) = 4;
                    }
                }
                else if (NOT (IS_CAR_DEAD( car2ToCheck )))
                {
                    TASK_ENTER_CAR_AS_PASSENGER( car1ToCheck, car2ToCheck, -2, 0 );
                    (uParam2^) = 4;
                }
            }
            break;
            case 4: break;
        }
    }
    return;
}

int sub_2151()
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), playerPos.x, playerPos.y, playerPos.z, 100.00000000, 100.00000000, 4.00000000, 0 )))
        {
            return 1;
        }
    }
    return 0;
}

