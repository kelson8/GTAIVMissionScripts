void main()
{
    int iVar2;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U123 = {994.03000000, -267.83000000, 25.24000000};
    l_U126 = {-1721.25000000, 339.66000000, 36.34000000};
    l_U129 = 0;
    l_U130 = 0;
    l_U131 = 0;
    l_U132 = 0;
    l_U133 = 0;
    l_U134 = 0;
    l_U157 = 188410296;
    l_U158 = 1439613707;
    l_U159 = 1737188996;
    l_U160 = 1737188996;
    l_U161 = -408052231;
    l_U167 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_173();
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U167)
            {
                case 0:
                GET_GAME_VIEWPORT_ID( ref l_U162 );
                if (NOT (CAM_IS_SPHERE_VISIBLE( l_U162, l_U168._fU4[0]._fU0, l_U168._fU4[0]._fU4, l_U168._fU4[0]._fU8, 10.00000000 )))
                {
                    if (IS_PLAYER_PLAYING( sub_468() ))
                    {
                        l_U167 = 1;
                    }
                }
                break;
                case 1:
                if (g_U38846 == 1)
                {
                    l_U161 = -159126838;
                }
                if (g_U10460)
                {
                    REQUEST_ANIMS( "AMB@BAR" );
                    REQUEST_MODEL( l_U160 );
                    while ((NOT (HAVE_ANIMS_LOADED( "AMB@BAR" ))) || (NOT (HAS_MODEL_LOADED( l_U160 ))))
                    {
                        WAIT( 0 );
                    }
                }
                COPY_CHAR_DECISION_MAKER( 65541, ref l_U138 );
                COPY_CHAR_DECISION_MAKER( 65539, ref l_U137 );
                sub_670( "" );
                if (g_U10460)
                {
                    REQUEST_MODEL( l_U161 );
                    while (NOT (HAS_MODEL_LOADED( l_U161 )))
                    {
                        WAIT( 0 );
                    }
                    GET_TIME_OF_DAY( ref l_U135, ref l_U136 );
                    GET_CURRENT_WEATHER( ref iVar2 );
                    if ((l_U135 > 9) AND (l_U135 < 19))
                    {
                        if ((iVar2 == 3) || ((iVar2 == 2) || ((iVar2 == 1) || (iVar2 == 0))))
                        {
                            CREATE_CHAR( 4, l_U160, -1730.33000000, 339.08000000, 24.75000000, ref l_U122, 1 );
                            SET_CHAR_HEADING( l_U122, 340.00000000 );
                            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U122 );
                            TASK_START_SCENARIO_IN_PLACE( l_U122, "Vehicle_InspectingBrokenDownVehicle", -1082130432 );
                            SET_CHAR_RELATIONSHIP( l_U122, 1, 0 );
                            CREATE_CAR( l_U161, -1730.29000000, 339.95000000, 24.45000000, ref l_U139, 1 );
                            SET_CAR_HEADING( l_U139, 60.00000000 );
                        }
                    }
                    CREATE_CHAR( 4, l_U160, -1714.49000000, 344.93000000, 25.35000000, ref l_U120, 1 );
                    SET_CHAR_HEADING( l_U120, 255.00000000 );
                    TASK_PLAY_ANIM( l_U120, "wipe_counter", "AMB@BAR", 1.00000000, 1, 0, 0, 0, -1 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U120 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U120, "E1_Lost_grndbar" );
                    SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U120, 1 );
                    SET_CHAR_RELATIONSHIP( l_U120, 1, 0 );
                }
                ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                GET_CLOSEST_CHAR( -1723.68000000, 346.02000000, 26.35000000, 5.00000000, 1, 0, ref l_U119 );
                if (DOES_CHAR_EXIST( l_U119 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U119 )))
                    {
                        SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U119, 1 );
                    }
                }
                l_U167 = 2;
                break;
                case 2:
                if (l_U134 == 0)
                {
                    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambPoleDancer" )) >= 1)
                    {
                        if ((NOT (CAM_IS_SPHERE_VISIBLE( l_U162, -1717.27000000, 345.23000000, 25.35000000, 2.00000000 ))) AND (HAS_MODEL_LOADED( -2034268874 )))
                        {
                            sub_1440();
                            l_U134 = 1;
                        }
                    }
                }
                if (l_U133 == 0)
                {
                    if (DOES_VEHICLE_EXIST( l_U139 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U139 )))
                        {
                            if (DOES_CHAR_EXIST( l_U122 ))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U122 )))
                                {
                                    if (IS_CHAR_IN_CAR( sub_1704(), l_U139 ))
                                    {
                                        l_U133 = 1;
                                        ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U122 );
                                        if (NOT (IS_CHAR_INJURED( l_U122 )))
                                        {
                                            TASK_START_SCENARIO_IN_PLACE( l_U122, "Scenario_SmokingOutsideOffice", -1082130432 );
                                        }
                                    }
                                    if (NOT (IS_CHAR_INJURED( l_U122 )))
                                    {
                                        ;
                                    }
                                    else
                                    {
                                        l_U133 = 1;
                                        ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U122 );
                                        if (NOT (IS_CHAR_INJURED( l_U122 )))
                                        {
                                            TASK_START_SCENARIO_IN_PLACE( l_U122, "Scenario_SmokingOutsideOffice", -1082130432 );
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            l_U133 = 1;
                            if (DOES_CHAR_EXIST( l_U122 ))
                            {
                                ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                                if (NOT (IS_CHAR_DEAD( l_U122 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U122 );
                                    if (NOT (IS_CHAR_INJURED( l_U122 )))
                                    {
                                        TASK_START_SCENARIO_IN_PLACE( l_U122, "Scenario_SmokingOutsideOffice", -1082130432 );
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        l_U133 = 1;
                        if (DOES_CHAR_EXIST( l_U122 ))
                        {
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (NOT (IS_CHAR_DEAD( l_U122 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U122 );
                                if (NOT (IS_CHAR_INJURED( l_U122 )))
                                {
                                    TASK_START_SCENARIO_IN_PLACE( l_U122, "Scenario_SmokingOutsideOffice", -1082130432 );
                                }
                            }
                        }
                    }
                }
                if (l_U131 == 1)
                {
                    sub_173();
                }
                break;
            }
        }
        else
        {
            sub_173();
        }
    }
    return;
}

void sub_173()
{
    sub_187( ref l_U144, 0 );
    sub_187( ref l_U150, 0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_187(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_468()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_670(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_687();
    return;
}

void sub_687()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U2._fU16[I]._fU0 = nil;
        StrCopy( ref l_U2._fU16[I]._fU4, "", 32 );
        l_U2._fU344[I] = 0;
    }
    return;
}

void sub_1440()
{
    CREATE_CHAR( 5, -2034268874, -1717.27000000, 345.23000000, 25.35000000, ref l_U115, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U115 );
    SET_CHAR_HEADING( l_U115, 342.00000000 );
    TASK_SET_CHAR_DECISION_MAKER( l_U115, l_U138 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U115, "E1_Lost_grndbar" );
    TASK_START_SCENARIO_IN_PLACE( l_U115, "Scenario_SmokingOutsideOffice", -1082130432 );
    return;
}

void sub_1704()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

