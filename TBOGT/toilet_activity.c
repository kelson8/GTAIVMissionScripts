void main()
{
    unknown uVar2;
    unknown uVar3;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U118 = 0.10000000;
    l_U119 = 0.11000000;
    l_U120 = 1.18000000;
    l_U121 = 0.08000000;
    l_U125 = 500;
    l_U126 = 0.39000000;
    l_U103 = sub_85( 0, 10 );
    g_U30191 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_139();
    }
    while (true)
    {
        if (IS_PLAYER_PLAYING( sub_375() ))
        {
            if (NOT (IS_CHAR_INJURED( g_U30205 )))
            {
                switch (l_U114)
                {
                    case 0:
                    switch (l_U115)
                    {
                        case 0:
                        SET_PLAYER_CONTROL( sub_375(), 0 );
                        while (IS_SCREEN_FADING())
                        {
                            WAIT( 0 );
                        }
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            DO_SCREEN_FADE_OUT( 1000 );
                            while (IS_SCREEN_FADING())
                            {
                                WAIT( 0 );
                            }
                        }
                        if (l_U103 == 5)
                        {
                            REQUEST_MODEL( 314506937 );
                            while (NOT (HAS_MODEL_LOADED( 314506937 )))
                            {
                                WAIT( 0 );
                            }
                        }
                        g_U30178 = 1;
                        WAIT( 0 );
                        sub_1121();
                        sub_214( 1 );
                        WAIT( 0 );
                        while (NOT (sub_1261( l_U103 )))
                        {
                            PRINTSTRING( "waiting for audio stream" );
                            WAIT( 0 );
                        }
                        PLAY_STREAM_FRONTEND();
                        if ((NOT (IS_CHAR_INJURED( g_U30205 ))) AND (IS_PLAYER_PLAYING( sub_375() )))
                        {
                            switch (g_U30191)
                            {
                                case 0:
                                case 1:
                                CREATE_CAM( 14, ref l_U104 );
                                CREATE_CAM( 14, ref l_U105 );
                                CREATE_CAM( 3, ref l_U106 );
                                UNLOCK_RAGDOLL( g_U30205, 0 );
                                SET_CHAR_COORDINATES( g_U30205, -473.99100000, 155.28680000, 8.67679900 );
                                SET_CHAR_HEADING( g_U30205, 270.58560000 );
                                SET_CHAR_COORDINATES( sub_442(), -474.77860000, 155.09540000, 8.15360000 );
                                SET_CHAR_HEADING( sub_442(), 301.01070000 );
                                SET_ROOM_FOR_CHAR_BY_NAME( sub_442(), "E2_MaisonRoomsteps1" );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( g_U30205, -475.87410000, 160.49910000, 8.66950000, 2, -1, 1.00000000 );
                                WAIT( 550 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( sub_442(), -475.87410000, 160.49910000, 8.66950000, 2, -1, 1.00000000 );
                                if (l_U103 == 5)
                                {
                                    CREATE_CHAR( 26, 314506937, -472.50740000, 160.44850000, 8.66940000, ref l_U113, 1 );
                                    SET_CHAR_HEADING( l_U113, 280.34530000 );
                                    SET_ROOM_FOR_CHAR_BY_NAME( l_U113, "E2_MaisonRoomt2" );
                                    TASK_LOOK_AT_CHAR( l_U113, sub_442(), -1, 0 );
                                    OPEN_SEQUENCE_TASK( ref uVar3 );
                                    TASK_PLAY_ANIM( 0, "girl_coke", "missamb_m9", 100.00000000, 1, 0, 0, 0, 4000 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -475.87410000, 160.49910000, 8.66950000, 2, -1, 1.00000000 );
                                    CLOSE_SEQUENCE_TASK( uVar3 );
                                    TASK_PERFORM_SEQUENCE( l_U113, uVar3 );
                                    CLEAR_SEQUENCE_TASK( uVar3 );
                                    SET_CAM_POS( l_U104, -472.53690000, 155.87750000, 10.32629000 );
                                    SET_CAM_ROT( l_U104, -5.44344200, -0.00000000, 5.64475500 );
                                    SET_CAM_FOV( l_U104, 25.80005000 );
                                    SET_CAM_POS( l_U105, -472.60510000, 156.56600000, 10.26037000 );
                                    SET_CAM_ROT( l_U105, -5.44344300, 0.00000000, 5.64474900 );
                                    SET_CAM_FOV( l_U105, 25.80005000 );
                                }
                                else
                                {
                                    SET_CAM_POS( l_U104, -472.76690000, 159.21710000, 12.01036000 );
                                    SET_CAM_ROT( l_U104, -47.65815000, -0.00000000, -178.92130000 );
                                    SET_CAM_FOV( l_U104, 52.49998000 );
                                    SET_CAM_POS( l_U105, -472.76400000, 159.06220000, 11.84038000 );
                                    SET_CAM_ROT( l_U105, -47.65815000, -0.00000000, -178.92130000 );
                                    SET_CAM_FOV( l_U105, 52.49998000 );
                                    CREATE_CAM( 3, ref l_U106 );
                                }
                                if (l_U103 != 5)
                                {
                                    SET_CAM_INTERP_STYLE_CORE( l_U106, l_U104, l_U105, 8000, 0 );
                                }
                                else
                                {
                                    SET_CAM_INTERP_STYLE_CORE( l_U106, l_U104, l_U105, 12000, 0 );
                                }
                                SET_CAM_ACTIVE( l_U106, 1 );
                                SET_CAM_PROPAGATE( l_U106, 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                DO_SCREEN_FADE_IN_UNHACKED( 1000 );
                                SETTIMERA( 0 );
                                l_U115++;
                                break;
                            }
                        }
                        break;
                        case 1:
                        if ((NOT l_U127) AND (l_U103 == 5))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U113 )))
                            {
                                if (IS_CHAR_PLAYING_ANIM( l_U113, "missamb_m9", "girl_coke" ))
                                {
                                    SET_CHAR_ANIM_CURRENT_TIME( l_U113, "missamb_m9", "girl_coke", l_U126 );
                                    l_U127 = 1;
                                }
                            }
                        }
                        if ((IS_SCREEN_FADED_IN()) AND (l_U103 == 5))
                        {
                            if (NOT l_U117)
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( g_U30205, "FB_Ask_Friend", sub_2914( l_U103 ), 1, 1, 3 );
                                l_U117 = 1;
                            }
                            if (NOT (IS_CHAR_DEAD( l_U113 )))
                            {
                                MODIFY_CHAR_MOVE_BLEND_RATIO( l_U113, 0.65000000 );
                            }
                            if (NOT (IS_CHAR_DEAD( sub_442() )))
                            {
                                MODIFY_CHAR_MOVE_BLEND_RATIO( sub_442(), 0.80000000 );
                            }
                            if (NOT (IS_CHAR_DEAD( g_U30205 )))
                            {
                                MODIFY_CHAR_MOVE_BLEND_RATIO( g_U30205, 0.80000000 );
                            }
                        }
                        if (TIMERA() < 3000)
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 182541657, -473.60000000, 156.20000000, 10.10000000, 0, 1.00000000 );
                        }
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 371421304, -474.20000000, 159.40000000, 9.90000000, 0, 1.00000000 );
                        GET_GAME_VIEWPORT_ID( ref l_U129 );
                        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U129, "E2_MaisonRoomt2" );
                        if (IS_SCREEN_FADED_IN())
                        {
                            if (TIMERA() > 6000)
                            {
                                sub_3666( 1 );
                            }
                        }
                        break;
                    }
                    break;
                    case 1:
                    switch (l_U115)
                    {
                        case 0:
                        switch (g_U30191)
                        {
                            case 0:
                            case 1:
                            WAIT( 0 );
                            if ((NOT (IS_CHAR_INJURED( g_U30205 ))) AND (IS_PLAYER_PLAYING( sub_375() )))
                            {
                                if (DOES_CHAR_EXIST( l_U113 ))
                                {
                                    DELETE_CHAR( ref l_U113 );
                                }
                                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_442() );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( g_U30205 );
                                SET_CHAR_COORDINATES( sub_442(), -475.33510000, 161.48470000, 8.66930000 );
                                SET_CHAR_HEADING( sub_442(), 180.00000000 );
                                SET_ROOM_FOR_CHAR_BY_NAME( sub_442(), "E2_MaisonRoomt2" );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( g_U30205 );
                                SET_CHAR_COORDINATES( g_U30205, -475.11580000, 160.46540000, 8.66240000 );
                                SET_CHAR_HEADING( g_U30205, 0.00000000 );
                                sub_545();
                                CREATE_CAM( 14, ref l_U108[0] );
                                SET_CAM_POS( l_U108[0], -473.10390000, 158.25370000, 10.20660000 );
                                SET_CAM_ROT( l_U108[0], -1.38580000, 0.00000000, 37.99390000 );
                                SET_CAM_FOV( l_U108[0], 23.70010000 );
                                SET_CAM_ACTIVE( l_U108[0], 1 );
                                CREATE_CAM( 14, ref l_U108[1] );
                                SET_CAM_POS( l_U108[1], -472.75310000, 157.80460000, 10.02020000 );
                                SET_CAM_ROT( l_U108[1], -1.47140000, 0.00000000, 38.67560000 );
                                SET_CAM_FOV( l_U108[1], 23.70010000 );
                                SET_CAM_ACTIVE( l_U108[1], 1 );
                                CREATE_CAM( 14, ref l_U108[2] );
                                SET_CAM_POS( l_U108[2], -472.40230000, 157.35550000, 9.83390100 );
                                SET_CAM_ROT( l_U108[2], -1.55710000, 0.00000000, 39.35740000 );
                                SET_CAM_FOV( l_U108[2], 23.70010000 );
                                SET_CAM_ACTIVE( l_U108[2], 1 );
                                CREATE_CAM( 14, ref l_U108[3] );
                                SET_CAM_POS( l_U108[3], -472.05150000, 156.90640000, 9.64750000 );
                                SET_CAM_ROT( l_U108[3], -1.64280000, 0.00000000, 40.03920000 );
                                SET_CAM_FOV( l_U108[3], 23.70010000 );
                                SET_CAM_ACTIVE( l_U108[3], 1 );
                                CREATE_CAM( 25, ref l_U107 );
                                SET_CAM_SPLINE_DURATION( l_U107, 10000 );
                                SET_CAM_SPLINE_SPEED_GRAPH( l_U107, 0 );
                                SET_CAM_SPLINE_SPEED_CONSTANT( l_U107, 1 );
                                ADD_CAM_SPLINE_NODE( l_U107, l_U108[0] );
                                ADD_CAM_SPLINE_NODE( l_U107, l_U108[1] );
                                ADD_CAM_SPLINE_NODE( l_U107, l_U108[2] );
                                ADD_CAM_SPLINE_NODE( l_U107, l_U108[3] );
                                SET_CAM_ACTIVE( l_U107, 1 );
                                SET_CAM_PROPAGATE( l_U107, 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 371421304, -474.20000000, 159.40000000, 9.90000000, 1, 0.00000000 );
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 182541657, -473.60000000, 156.20000000, 10.10000000, 0, 0.00000000 );
                                SETTIMERA( 0 );
                                l_U115++;
                            }
                            break;
                        }
                        break;
                        case 1:
                        sub_4722();
                        GET_GAME_VIEWPORT_ID( ref l_U129 );
                        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U129, "E2_MaisonRoomt2" );
                        if (TIMERA() > 9000)
                        {
                            DO_SCREEN_FADE_OUT( 1000 );
                            l_U115++;
                        }
                        break;
                        case 2:
                        if (IS_SCREEN_FADED_OUT())
                        {
                            sub_3666( 2 );
                        }
                        break;
                    }
                    break;
                    case 2:
                    switch (l_U115)
                    {
                        case 0:
                        STOP_STREAM();
                        sub_214( 0 );
                        SET_CHAR_COORDINATES( sub_442(), -473.78270000, 160.42720000, 8.66819900 );
                        SET_CHAR_HEADING( sub_442(), 230.40660000 );
                        SET_ROOM_FOR_CHAR_BY_NAME( sub_442(), "E2_MaisonRoomt2" );
                        TASK_LOOK_AT_CHAR( sub_442(), g_U30205, 7000, 0 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( g_U30205 );
                        SET_CHAR_COORDINATES_NO_OFFSET( g_U30205, -473.09740000, 159.34580000, 9.66899900 );
                        SET_CHAR_HEADING( g_U30205, 0.45090000 );
                        TASK_LOOK_AT_CHAR( g_U30205, sub_442(), 10000, 0 );
                        sub_545();
                        CREATE_CAM( 14, ref l_U104 );
                        CREATE_CAM( 14, ref l_U105 );
                        SET_CAM_POS( l_U104, -471.88840000, 165.71580000, 9.84427000 );
                        SET_CAM_ROT( l_U104, 0.27899000, 0.00000000, 170.86860000 );
                        SET_CAM_FOV( l_U104, 20.10006000 );
                        SET_CAM_FAR_DOF( l_U104, 9.00000000 );
                        SET_CAM_NEAR_DOF( l_U104, 2.00000000 );
                        SET_CAM_POS( l_U105, -472.09940000, 165.59030000, 9.84546700 );
                        SET_CAM_ROT( l_U105, 0.27899000, 0.00000000, 168.14820000 );
                        SET_CAM_FOV( l_U105, 20.10006000 );
                        SET_CAM_FAR_DOF( l_U105, 9.00000000 );
                        SET_CAM_NEAR_DOF( l_U105, 2.00000000 );
                        CREATE_CAM( 3, ref l_U106 );
                        SET_CAM_INTERP_STYLE_CORE( l_U106, l_U104, l_U105, 8000, 0 );
                        SET_CAM_ACTIVE( l_U106, 1 );
                        SET_CAM_PROPAGATE( l_U106, 1 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        GET_GAME_VIEWPORT_ID( ref l_U129 );
                        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U129, "E2_MaisonRoomt2" );
                        DO_SCREEN_FADE_IN( 1000 );
                        SETTIMERA( 0 );
                        l_U115++;
                        break;
                        case 1:
                        if (sub_5608())
                        {
                            if (TIMERA() > 1000)
                            {
                                SAY_AMBIENT_SPEECH_WITH_VOICE( g_U30205, "FB_Give_Number", sub_2914( l_U103 ), 1, 1, 3 );
                                SETTIMERA( 0 );
                                l_U115++;
                            }
                        }
                        else if (TIMERA() > 7000)
                        {
                            l_U115 = 99;
                        }
                        break;
                        case 2:
                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( g_U30205 )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( g_U30205, -470.83960000, 154.99280000, 8.85890000, 2, -1, 1.00000000 );
                            l_U115++;
                        }
                        break;
                        case 3:
                        if (TIMERA() > 7000)
                        {
                            l_U115 = 99;
                        }
                        break;
                        case 99:
                        SET_CHAR_COORDINATES( sub_442(), -473.10870000, 161.01390000, 8.66900000 );
                        SET_CHAR_HEADING( sub_442(), 180.00000000 );
                        sub_5910( l_U103 );
                        sub_139();
                        break;
                    }
                    break;
                }
            }
            else
            {
                sub_139();
            }
        }
        else
        {
            sub_139();
        }
        if (l_U102)
        {
            l_U102 = 0;
        }
        else
        {
            WAIT( 0 );
        }
    }
    sub_139();
    return;
}

void sub_85(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_139()
{
    g_U30178 = 0;
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 371421304, -474.20000000, 159.40000000, 9.90000000, 0, 0.00000000 );
    g_U10598 = 1;
    if (l_U114 < 2)
    {
        STOP_STREAM();
        sub_214( 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 314506937 );
    g_U30209 = g_U30205;
    sub_291();
    if (IS_PLAYER_PLAYING( sub_375() ))
    {
        SET_PLAYER_CONTROL( sub_375(), 1 );
    }
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 1000 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_214(boolean bParam0)
{
    g_U30177 = bParam0;
    if (bParam0)
    {
        g_U30248 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30248 = nil;
    }
    return;
}

void sub_291()
{
    sub_301( 0 );
    CLEAR_PRINTS();
    CLEAR_HELP();
    if (IS_PLAYER_PLAYING( sub_375() ))
    {
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_GAME_CAM_PITCH( 0.00000000 );
        SET_CAM_BEHIND_PED( sub_442() );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_442(), 0 );
    }
    SET_WIDESCREEN_BORDERS( 0 );
    SET_USE_HIGHDOF( 0 );
    DISPLAY_RADAR( 1 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    sub_545();
    if (l_U101)
    {
        END_CAM_COMMANDS( ref l_U116 );
        l_U101 = 0;
    }
    return;
}

void sub_301(boolean bParam0)
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

void sub_375()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_442()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_545()
{
    if (DOES_CAM_EXIST( l_U104 ))
    {
        DESTROY_CAM( l_U104 );
    }
    if (DOES_CAM_EXIST( l_U105 ))
    {
        DESTROY_CAM( l_U105 );
    }
    if (DOES_CAM_EXIST( l_U106 ))
    {
        DESTROY_CAM( l_U106 );
    }
    sub_641();
    return;
}

void sub_641()
{
    int I;

    for ( I = 0; I < l_U108; I++ )
    {
        if (DOES_CAM_EXIST( l_U108[I] ))
        {
            DESTROY_CAM( l_U108[I] );
        }
    }
    if (DOES_CAM_EXIST( l_U107 ))
    {
        DESTROY_CAM( l_U107 );
    }
    return;
}

void sub_1121()
{
    BEGIN_CAM_COMMANDS( ref l_U116 );
    l_U101 = 1;
    SET_USE_HIGHDOF( 1 );
    CLEAR_PRINTS();
    CLEAR_HELP();
    SET_WIDESCREEN_BORDERS( 1 );
    DISPLAY_RADAR( 0 );
    if (IS_PLAYER_PLAYING( sub_375() ))
    {
        SET_PLAYER_CONTROL( sub_375(), 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_442(), 1 );
    }
    sub_301( 1 );
    return;
}

int sub_1261(unknown uParam0)
{
    string sVar3;

    switch (uParam0)
    {
        case 0:
        sVar3 = "CLUBEURO_01_01";
        break;
        case 1:
        sVar3 = "CLUBEURO_01_02";
        break;
        case 2:
        sVar3 = "HOTCHICK_01_01";
        break;
        case 3:
        sVar3 = "HOTCHICK_01_02";
        break;
        case 4:
        sVar3 = "HOTCHICK_01_03";
        break;
        case 5:
        sVar3 = "HOTCHICK_02_01";
        break;
        case 6:
        sVar3 = "HOTCHICK_02_02";
        break;
        case 7:
        sVar3 = "HOTCHICK_02_03";
        break;
        case 8:
        sVar3 = "HOTCHICK_03_01";
        break;
        case 9:
        sVar3 = "TRENDY_01_01";
        break;
        case 10:
        sVar3 = "TRENDY_01_02";
        break;
    }
    if ((GET_STREAM_PLAYTIME() == 0) || (GET_STREAM_PLAYTIME() == -1))
    {
        return PRELOAD_STREAM( sVar3 );
    }
    return 1;
}

void sub_2914(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 0:
        Result = "F_Y_CLUBEURO_01_FULL_01";
        break;
        case 1:
        Result = "F_Y_CLUBEURO_01_FULL_02";
        break;
        case 2:
        Result = "F_Y_HOTCHICK_01_FULL_01";
        break;
        case 3:
        Result = "F_Y_HOTCHICK_01_FULL_02";
        break;
        case 4:
        Result = "F_Y_HOTCHICK_01_FULL_03";
        break;
        case 5:
        Result = "F_Y_HOTCHICK_02_FULL_01";
        break;
        case 6:
        Result = "F_Y_HOTCHICK_02_FULL_02";
        break;
        case 7:
        Result = "F_Y_HOTCHICK_02_FULL_03";
        break;
        case 8:
        Result = "F_Y_HOTCHICK_03_FULL_01";
        break;
        case 9:
        Result = " F_Y_TRENDY_01_FULL_01";
        break;
        case 10:
        Result = " F_Y_TRENDY_01_FULL_02";
        break;
    }
    return Result;
}

void sub_3666(unknown uParam0)
{
    l_U114 = uParam0;
    l_U115 = 0;
    l_U102 = 1;
    return;
}

void sub_4722()
{
    GET_GAME_TIMER( ref l_U122 );
    if ((l_U122 - l_U123) > l_U125)
    {
        if (l_U118 < l_U119)
        {
            l_U118 *= l_U120;
        }
        else
        {
            l_U118 = l_U121;
            GET_GAME_TIMER( ref l_U123 );
        }
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 371421304, -474.20000000, 159.40000000, 9.90000000, 1, l_U118 * -1 );
    }
    return;
}

int sub_5608()
{
    if (g_U43724 < 6)
    {
        return 1;
    }
    return 0;
}

void sub_5910(unknown uParam0)
{
    if (sub_5608())
    {
        if (sub_5929())
        {
            if (NOT g_U43709[uParam0])
            {
                g_U43709[uParam0] = 1;
                g_U43724++;
            }
        }
    }
    return;
}

int sub_5929()
{
    int iVar2;
    unknown uVar3;

    GET_CURRENT_DATE( ref iVar2, ref uVar3 );
    if (NOT (iVar2 == g_U43727))
    {
        g_U43727 = iVar2;
        return 1;
    }
    return 0;
}

