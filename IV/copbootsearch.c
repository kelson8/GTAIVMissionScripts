void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U101 = 0;
    l_U102 = 0;
    l_U103 = 0;
    l_U132 = -183203150;
    l_U133 = 2046537925;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_67();
    }
    sub_97( l_U139 );
    while (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
    {
        WAIT( 0 );
        sub_571();
        if (IS_PLAYER_PLAYING( sub_696() ))
        {
            switch (l_U101)
            {
                case 0:
                sub_775();
                break;
                case 1:
                sub_2042();
                break;
                case 3:
                sub_3344();
                break;
            }
        }
    }
    sub_67();
    return;
}

void sub_67()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_97(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    l_U107._fU0 = uParam0._fU4[0]._fU0;
    l_U107._fU4 = uParam0._fU4[0]._fU4;
    l_U107._fU8 = uParam0._fU4[0]._fU8;
    l_U124 = uParam0._fU68[0];
    l_U116._fU0 = uParam0._fU4[1]._fU0;
    l_U116._fU4 = uParam0._fU4[1]._fU4;
    l_U116._fU8 = uParam0._fU4[1]._fU8;
    l_U125 = uParam0._fU68[1];
    REQUEST_ANIMS( "misscopbootsearch" );
    GET_CURRENT_BASIC_COP_MODEL( ref l_U132 );
    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U133 );
    sub_279();
    if (HAS_MODEL_LOADED( 2016857647 ))
    {
        l_U123 = 0;
        l_U134 = 2016857647;
    }
    else if (HAS_MODEL_LOADED( -825837129 ))
    {
        l_U123 = 1;
        l_U134 = -825837129;
    }
    else if (HAS_MODEL_LOADED( 886934177 ))
    {
        l_U123 = 2;
        l_U134 = 886934177;
    }
    else if (HAS_MODEL_LOADED( 1348744438 ))
    {
        l_U123 = 3;
        l_U134 = 1348744438;
    }
    else if (HAS_MODEL_LOADED( -1883869285 ))
    {
        l_U123 = 4;
        l_U134 = -1883869285;
    }
    else if (HAS_MODEL_LOADED( 131140572 ))
    {
        l_U123 = 5;
        l_U134 = 131140572;
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    };;;;;;
    REQUEST_MODEL( l_U134 );
    return;
}

void sub_279()
{
    return;
}

void sub_571()
{
    if (IS_CHAR_SHOOTING_IN_AREA( sub_580(), l_U107._fU0 - 50, l_U107._fU4 - 50, l_U107._fU0 + 50, l_U107._fU4 + 50, 0 ))
    {
        l_U101 = 3;
    }
    return;
}

void sub_580()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_696()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_775()
{
    switch (l_U103)
    {
        case 0:
        if (HAS_MODEL_LOADED( l_U134 ))
        {
            if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
            {
                if (HAS_MODEL_LOADED( l_U132 ))
                {
                    if (HAS_MODEL_LOADED( l_U133 ))
                    {
                        CREATE_CAR( l_U134, l_U116._fU0, l_U116._fU4, l_U116._fU8, ref l_U136, 1 );
                        SET_CAR_HEADING( l_U136, l_U124 );
                        OPEN_CAR_DOOR( l_U136, 5 );
                        l_U103 = 1;
                    }
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CAR_DEAD( l_U136 )))
        {
            if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
            {
                CREATE_RANDOM_CHAR_AS_DRIVER( l_U136, ref l_U138 );
                if (NOT (IS_CHAR_INJURED( l_U138 )))
                {
                    TASK_CAR_MISSION( l_U138, l_U136, 0, 5, 0.00000000, 0, 5, 5 );
                    SET_CHAR_IN_CUTSCENE( l_U138, 1 );
                }
                if (l_U123 == 0)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, 0.00000000, -2.30000000, -1.00000000, ref l_U110._fU0, ref l_U110._fU4, ref l_U110._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, -1.60000000, 0.00000000, 0.00000000, ref l_U113._fU0, ref l_U113._fU4, ref l_U113._fU8 );
                }
                else if (l_U123 == 1)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, 0.00000000, -2.70000000, -1.00000000, ref l_U110._fU0, ref l_U110._fU4, ref l_U110._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, -1.60000000, 0.00000000, 0.00000000, ref l_U113._fU0, ref l_U113._fU4, ref l_U113._fU8 );
                }
                else if (l_U123 == 2)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, 0.00000000, -2.70000000, -1.00000000, ref l_U110._fU0, ref l_U110._fU4, ref l_U110._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, -1.60000000, 0.00000000, 0.00000000, ref l_U113._fU0, ref l_U113._fU4, ref l_U113._fU8 );
                }
                else if (l_U123 == 3)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, 0.00000000, -2.75000000, -1.00000000, ref l_U110._fU0, ref l_U110._fU4, ref l_U110._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, -1.60000000, 0.00000000, 0.00000000, ref l_U113._fU0, ref l_U113._fU4, ref l_U113._fU8 );
                }
                else if (l_U123 == 4)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, 0.00000000, -2.70000000, -1.00000000, ref l_U110._fU0, ref l_U110._fU4, ref l_U110._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, -1.60000000, 0.00000000, 0.00000000, ref l_U113._fU0, ref l_U113._fU4, ref l_U113._fU8 );
                }
                else if (l_U123 == 5)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, 0.00000000, -2.70000000, -1.00000000, ref l_U110._fU0, ref l_U110._fU4, ref l_U110._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U136, -1.60000000, 0.00000000, 0.00000000, ref l_U113._fU0, ref l_U113._fU4, ref l_U113._fU8 );
                };;;;;;
                l_U103 = 2;
            }
        }
        break;
        case 2:
        if (HAS_MODEL_LOADED( l_U132 ))
        {
            CREATE_CHAR( 6, l_U132, l_U110._fU0, l_U110._fU4, l_U110._fU8, ref l_U137, 1 );
            if (NOT (IS_CHAR_INJURED( l_U137 )))
            {
                SET_CHAR_IN_CUTSCENE( l_U137, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U137 )))
            {
                SET_INFORM_RESPECTED_FRIENDS( l_U137, 999, 999 );
            }
            l_U103 = 3;
        }
        break;
        case 3:
        if (HAS_MODEL_LOADED( l_U133 ))
        {
            CREATE_CAR( l_U133, l_U107._fU0, l_U107._fU4, l_U107._fU8, ref l_U135, 1 );
            l_U103 = 4;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U137 )))
        {
            TASK_START_SCENARIO_AT_POSITION( l_U137, "Vehicle_LookingInBoot", l_U110, l_U125 );
            l_U101 = 1;
        }
        break;
    }
    return;
}

void sub_2042()
{
    int iVar2;

    iVar2 = 0;
    if (IS_VEH_DRIVEABLE( l_U135 ))
    {
        if (IS_VEH_DRIVEABLE( l_U136 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U137 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U138 )))
                {
                    switch (l_U102)
                    {
                        case 0:
                        FORCE_CAR_LIGHTS( l_U135, 2 );
                        SWITCH_CAR_SIREN( l_U135, 1 );
                        GET_GAME_TIMER( ref l_U119 );
                        l_U102 = 17;
                        break;
                        case 17:
                        GET_GAME_TIMER( ref l_U120 );
                        l_U121 = l_U120 - l_U119;
                        if (l_U121 > 20000)
                        {
                            CLEAR_CHAR_TASKS( l_U137 );
                            l_U102 = 18;
                        }
                        break;
                        case 18:
                        TASK_PLAY_ANIM( l_U137, "close_boot", "misscopbootsearch", 8.00000000, 0, 0, 0, 0, -2 );
                        GET_DOOR_ANGLE_RATIO( l_U136, 5, ref l_U128 );
                        l_U102 = 19;
                        break;
                        case 19:
                        if (IS_CHAR_PLAYING_ANIM( l_U137, "misscopbootsearch", "close_boot" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U137, "misscopbootsearch", "close_boot", ref l_U129 );
                            if (l_U129 > 0.30000000)
                            {
                                l_U102 = 20;
                            }
                        }
                        break;
                        case 20:
                        l_U128 -= 0.15000000;
                        if (l_U128 > 0.00000000)
                        {
                            CONTROL_CAR_DOOR( l_U136, 5, 1, l_U128 );
                        }
                        else
                        {
                            CLOSE_ALL_CAR_DOORS( l_U136 );
                            l_U102 = 21;
                        }
                        break;
                        case 21:
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U137, l_U113._fU0, l_U113._fU4, l_U113._fU8, 2, -2, 0.00000000 );
                        l_U130 = 0;
                        l_U102 = 22;
                        break;
                        case 22:
                        GET_SCRIPT_TASK_STATUS( l_U137, 27, ref l_U130 );
                        if (l_U130 == 7)
                        {
                            l_U102 = 23;
                        }
                        break;
                        case 23:
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U137, l_U138 );
                        l_U130 = 0;
                        l_U102 = 24;
                        break;
                        case 24:
                        GET_SCRIPT_TASK_STATUS( l_U137, 34, ref l_U130 );
                        if (l_U130 == 7)
                        {
                            l_U102 = 25;
                        }
                        break;
                        case 25:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar2 );
                        if (iVar2 == 0)
                        {
                            SAY_AMBIENT_SPEECH( l_U137, "PULLED_OVER_DAMAGED", 1, 1, 0 );
                        }
                        else if (iVar2 == 1)
                        {
                            SAY_AMBIENT_SPEECH( l_U137, "PULLED_OVER_RECKLESS", 1, 1, 0 );
                        }
                        else
                        {
                            SAY_AMBIENT_SPEECH( l_U137, "PULLED_OVER_SPEEDING", 1, 1, 0 );
                        }
                        TASK_PLAY_ANIM( l_U137, "car_chat_outside_2", "misscopbootsearch", 8.00000000, 0, 0, 0, 0, 5000 );
                        TASK_LOOK_AT_CHAR( l_U138, l_U137, 5000, 0 );
                        l_U102 = 26;
                        break;
                        case 26:
                        GET_SCRIPT_TASK_STATUS( l_U137, 80, ref l_U130 );
                        if (l_U130 == 7)
                        {
                            l_U102 = 27;
                        }
                        break;
                        case 27:
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        TASK_ENTER_CAR_AS_DRIVER( l_U137, l_U135, 20000 );
                        LOCK_CAR_DOORS( l_U135, 1 );
                        l_U102 = 28;
                        break;
                        case 28:
                        if ((IS_CHAR_IN_CAR( l_U137, l_U135 )) || (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( l_U137, l_U136, 5.00000000, 5.00000000, 0 ))))
                        {
                            TASK_CAR_DRIVE_WANDER( l_U138, l_U136, 10.00000000, 6 );
                            l_U102 = 29;
                        }
                        break;
                        case 29:
                        if (IS_CHAR_IN_CAR( l_U137, l_U135 ))
                        {
                            FORCE_CAR_LIGHTS( l_U135, 1 );
                            SWITCH_CAR_SIREN( l_U135, 0 );
                            TASK_CAR_DRIVE_WANDER( l_U137, l_U135, 10.00000000, 6 );
                            l_U101 = 3;
                        }
                        break;
                    }
                }
            }
        }
    }
    return;
}

void sub_3344()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U137 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U135 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U138 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U136 );
    l_U137 = nil;
    l_U135 = nil;
    l_U138 = nil;
    l_U136 = nil;
    TERMINATE_THIS_SCRIPT();
    return;
}

