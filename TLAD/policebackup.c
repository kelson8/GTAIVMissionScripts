void main()
{
    g_U8629 = 1;
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
            g_U8629 = 0;
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            g_U8632[0] = 0;
            g_U8632[1] = 0;
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

    if (IS_PLAYER_PLAYING( sub_24() ))
    {
        GET_CHAR_COORDINATES( sub_67(), ref l_U9._fU0, ref l_U9._fU4, ref l_U9._fU8 );
    }
    REQUEST_MODEL( -196312163 );
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
        GET_NTH_CLOSEST_CAR_NODE( l_U9._fU0, l_U9._fU4, l_U9._fU8, uVar3, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        CREATE_CAR( 2046537925, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U0[I], 1 );
        SWITCH_CAR_SIREN( l_U0[I], 1 );
        FORCE_CAR_LIGHTS( l_U0[I], 2 );
        CREATE_CHAR_INSIDE_CAR( l_U0[I], 6, -183203150, ref l_U3[I] );
        CREATE_CHAR_AS_PASSENGER( l_U0[I], 6, -183203150, 0, ref l_U6[I] );
        GIVE_WEAPON_TO_CHAR( l_U6[I], 7, 200, 0 );
        GIVE_WEAPON_TO_CHAR( l_U3[I], 7, 200, 0 );
        SET_CHAR_HEALTH( l_U3[I], 2000 );
        SET_CHAR_HEALTH( l_U6[I], 2000 );
        SET_CAR_PROOFS( l_U0[I], 1, 1, 1, 1, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3[I], 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U6[I], 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -196312163 );
    return;
}

void sub_24()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_67()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_591()
{
    int I;
    unknown uVar3;

    if (NOT l_U12)
    {
        for ( I = 0; I <= 1; I++ )
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( 20.00000000, 30.00000000, ref uVar3 );
            GENERATE_RANDOM_FLOAT_IN_RANGE( 13.50000000, 22.50000000, ref l_U13[I] );
            CLEAR_AREA_OF_CARS( l_U9._fU0, l_U9._fU4, l_U9._fU8, 50.00000000 );
            if ((IS_VEH_DRIVEABLE( l_U0[I] )) AND (NOT (IS_CHAR_DEAD( l_U3[I] ))))
            {
                TASK_CAR_DRIVE_TO_COORD( l_U3[I], l_U0[I], l_U9._fU0, l_U9._fU4, l_U9._fU8, uVar3, 0, 2046537925, 2, l_U13[I], -1 );
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
        if (NOT g_U8632[I])
        {
            if (IS_VEH_DRIVEABLE( l_U0[I] ))
            {
                if ((NOT (IS_CHAR_DEAD( l_U6[I] ))) AND (NOT (IS_CHAR_DEAD( l_U3[I] ))))
                {
                    if (LOCATE_CHAR_IN_CAR_3D( l_U3[I], l_U9._fU0, l_U9._fU4, l_U9._fU8, l_U13[I], l_U13[I], 4.00000000, 0 ))
                    {
                        TASK_CAR_TEMP_ACTION( l_U3[I], l_U0[I], 6, 1000 );
                        TASK_EVERYONE_LEAVE_CAR( l_U0[I] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3[I], 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U6[I], 0 );
                        if (DOES_BLIP_EXIST( l_U16[I] ))
                        {
                            REMOVE_BLIP( l_U16[I] );
                        }
                        g_U8632[I] = 1;
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
        if (IS_VEH_DRIVEABLE( l_U0[I] ))
        {
            if (IS_PLAYER_PLAYING( sub_24() ))
            {
                if (IS_CHAR_SITTING_IN_CAR( sub_67(), l_U0[I] ))
                {
                    ALTER_WANTED_LEVEL( sub_24(), 1 );
                }
            }
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if ((NOT (IS_CHAR_DEAD( l_U3[I] ))) AND (IS_PLAYER_PLAYING( sub_24() )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_67(), l_U3[I], 0 ))
            {
                ALTER_WANTED_LEVEL( sub_24(), 1 );
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U3[I] );
            }
        }
        if ((NOT (IS_CHAR_DEAD( l_U6[I] ))) AND (IS_PLAYER_PLAYING( sub_24() )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( sub_67(), l_U6[I], 0 ))
            {
                ALTER_WANTED_LEVEL( sub_24(), 1 );
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U6[I] );
            }
        }
    }
    return;
}

void sub_1388()
{
    if (g_U8632[0])
    {
        sub_1428( l_U3[0], l_U0[0], ref l_U20[0], 1 );
        sub_1428( l_U6[0], l_U0[0], ref l_U20[1], 0 );
    }
    if (g_U8632[1])
    {
        sub_1428( l_U3[1], l_U0[1], ref l_U20[2], 1 );
        sub_1428( l_U6[1], l_U0[1], ref l_U20[3], 0 );
    }
    return;
}

void sub_1428(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    int iVar6;
    unknown uVar7;
    unknown uVar8;

    GENERATE_RANDOM_INT_IN_RANGE( 100, 8000, ref uVar7 );
    GENERATE_RANDOM_INT_IN_RANGE( 100, 12000, ref uVar8 );
    if ((NOT (IS_CAR_DEAD( uParam1 ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
    {
        switch ((uParam2^))
        {
            case 0:
            if (NOT (IS_CHAR_IN_CAR( uParam0, uParam1 )))
            {
                PRINTSTRING( "STUCK IN HERE" );
                OPEN_SEQUENCE_TASK( ref l_U19 );
                TASK_PLAY_ANIM( 0, "idle_lookaround_b", "cop_wander_idles", 8.00000000, 1, 0, 0, 0, uVar7 );
                TASK_PLAY_ANIM( 0, "idle_adjust_hat", "cop_wander_idles", 8.00000000, 1, 0, 0, 0, uVar8 );
                TASK_PLAY_ANIM( 0, "idle_answer_radio_a", "cop_wander_idles", 8.00000000, 0, 0, 0, 0, -2 );
                CLOSE_SEQUENCE_TASK( l_U19 );
                TASK_PERFORM_SEQUENCE( uParam0, l_U19 );
                CLEAR_SEQUENCE_TASK( l_U19 );
                (uParam2^) = 1;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar6 );
            if (iVar6 == 7)
            {
                (uParam2^) = 2;
            }
            break;
            case 2:
            TASK_PLAY_ANIM( uParam0, "idle_answer_radio_a", "cop_wander_idles", 8.00000000, 0, 0, 0, 0, -2 );
            (uParam2^) = 3;
            break;
            case 3:
            if (NOT (IS_CHAR_PLAYING_ANIM( uParam0, "cop_wander_idles", "idle_answer_radio_a" )))
            {
                if (bParam3)
                {
                    if (NOT (IS_CAR_DEAD( uParam1 )))
                    {
                        TASK_ENTER_CAR_AS_DRIVER( uParam0, uParam1, -2 );
                        (uParam2^) = 4;
                    }
                }
                else if (NOT (IS_CAR_DEAD( uParam1 )))
                {
                    TASK_ENTER_CAR_AS_PASSENGER( uParam0, uParam1, -2, 0 );
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
    if (IS_PLAYER_PLAYING( sub_24() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_67(), l_U9._fU0, l_U9._fU4, l_U9._fU8, 100.00000000, 100.00000000, 4.00000000, 0 )))
        {
            return 1;
        }
    }
    return 0;
}

