void main()
{
    boolean bVar2;
    boolean bVar3;
    unknown uVar4;
    boolean bVar5;

    l_U0 = 0;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 1;
    l_U5 = 0;
    l_U10 = 3;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U4 = 1;
    l_U5 = 0;
    l_U6 = {898.53880000, -504.79930000, 14.06310000};
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        sub_86();
        sub_519();
        bVar2 = false;
        if ((g_U10978) || (NOT (IS_PLAYER_PLAYING( sub_136() ))))
        {
            bVar2 = true;
        }
        if (NOT bVar2)
        {
            bVar3 = false;
            if ((IS_CHAR_ON_FOOT( sub_192() )) AND (IS_CHAR_IN_AREA_3D( sub_192(), 895.83970000, -508.20070000, 11.99860000, 898.71890000, -501.63750000, 16.15140000, 0 )))
            {
                bVar3 = true;
            }
            if (NOT bVar3)
            {
                bVar2 = true;
            }
        }
    }
    l_U9 = 0;
    l_U0 = 0;
    if (NOT (IS_PLAYER_PLAYING( sub_136() )))
    {
        sub_118();
    }
    if (IS_PLAYER_PLAYING( sub_136() ))
    {
        CLEAR_WANTED_LEVEL( sub_136() );
        SET_PLAYER_CONTROL( sub_136(), 0 );
        SET_CHAR_COORDINATES( sub_192(), 895.25460000, -505.06910000, 14.15140000 );
        SET_CHAR_HEADING( sub_192(), 265 );
        OPEN_SEQUENCE_TASK( ref uVar4 );
        TASK_GO_STRAIGHT_TO_COORD( 0, l_U6._fU0, l_U6._fU4, l_U6._fU8, 2, 2500 );
        TASK_ACHIEVE_HEADING( 0, 346.95410000 );
        CLOSE_SEQUENCE_TASK( uVar4 );
        TASK_PERFORM_SEQUENCE( sub_192(), uVar4 );
        CLEAR_SEQUENCE_TASK( uVar4 );
    }
    sub_960();
    bVar5 = true;
    while (bVar5)
    {
        WAIT( 0 );
        sub_1052();
        switch (l_U9)
        {
            case 0:
            if (sub_1364())
            {
                l_U9 = 1;
                l_U0 = 0;
            }
            break;
            case 1:
            if (sub_2239())
            {
                l_U9 = 2;
                l_U0 = 0;
            }
            break;
            case 2:
            if (sub_2680())
            {
                l_U9 = 3;
                l_U0 = 0;
            }
            break;
            case 3:
            if (sub_3198())
            {
                l_U9 = 4;
                l_U0 = 0;
            }
            break;
            case 4:
            if (sub_3492())
            {
                l_U9 = 5;
                l_U0 = 0;
            }
            break;
            case 5:
            sub_118();
            break;
        }
        sub_519();
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            sub_118();
        }
        if (NOT (IS_PLAYER_PLAYING( sub_136() )))
        {
            sub_118();
        }
    }
    sub_118();
    sub_3945( "CarFoodRunJack (help script): should never reach ENDSCRIPT" );
    return;
}

void sub_86()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman2" )) >= 1)
    {
        sub_118();
        return;
    }
    return;
}

void sub_118()
{
    sub_127();
    return;
}

void sub_127()
{
    if (IS_PLAYER_PLAYING( sub_136() ))
    {
        SET_PLAYER_CONTROL( sub_136(), 1 );
    }
    if (NOT (IS_CHAR_DEAD( sub_192() )))
    {
        TASK_CLEAR_LOOK_AT( sub_192() );
    }
    DISPLAY_RADAR( 1 );
    if (l_U2)
    {
        sub_274();
    }
    CLEAR_HELP();
    g_U9084 = 0;
    sub_387( l_U10 );
    g_U15654[75] = 1;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_136()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_192()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_274()
{
    int iVar2;

    DESTROY_ALL_CAMS();
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    iVar2 = 0;
    END_CAM_COMMANDS( ref iVar2 );
    if (NOT (iVar2 == 0))
    {
        PRINTSTRING( "Camera Scopes should now be 0" );
    }
    l_U2 = 0;
    return;
}

void sub_387(unknown uParam0)
{
    if (NOT (sub_398( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

boolean sub_398(int iParam0)
{
    return iParam0 == g_U64539;
}

void sub_519()
{
    float fVar2;
    vector vVar3;

    if (NOT l_U4)
    {
        return;
    }
    if (g_U10978)
    {
        return;
    }
    fVar2 = -1.00000000;
    vVar3 = {896.00000000, -504.00000000, 15.00000000};
    if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( vVar3.x, vVar3.y, vVar3.z, 1.50000000, -2113580896 ))
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -2113580896, vVar3, 0, fVar2 );
    }
    return;
}

void sub_960()
{
    CLEAR_AREA( 923.19460000, -504.57270000, 14.06760000, 8.00000000, 1 );
    CLEAR_AREA_OF_OBJECTS( 923.19460000, -504.57270000, 14.06760000, 100.00000000 );
    return;
}

void sub_1052()
{
    int iVar2;
    string sVar3;

    if (l_U5)
    {
        return;
    }
    if (NOT l_U2)
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_192() ))
    {
        return;
    }
    if (LOCATE_CHAR_ON_FOOT_3D( sub_192(), l_U6._fU0, l_U6._fU4, l_U6._fU8, 5.00000000, 5.00000000, 2.00000000, 0 ))
    {
        return;
    }
    if (l_U2)
    {
        iVar2 = 0;
        BEGIN_CAM_COMMANDS( ref iVar2 );
        if (iVar2 > 1)
        {
            END_CAM_COMMANDS( ref iVar2 );
            sub_274();
        }
        else
        {
            END_CAM_COMMANDS( ref iVar2 );
            l_U2 = 0;
        }
    }
    sVar3 = "CarFoodRunJack";
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    START_NEW_SCRIPT( sVar3, 128 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1364()
{
    unknown uVar2;

    if (l_U0 == 0)
    {
        PRINT_HELP_FOREVER( "CARSAVE" );
        l_U0++;
    }
    if (l_U0 == 1)
    {
        DISPLAY_RADAR( 0 );
        if (NOT (IS_CHAR_DEAD( sub_192() )))
        {
            TASK_LOOK_AT_COORD( sub_192(), 904.16920000, -500.72800000, 14.10340000, -2, 0 );
        }
        SETTIMERA( 0 );
        l_U0++;
    }
    if (l_U0 == 2)
    {
        if (TIMERA() > 0)
        {
            sub_1514();
            CREATE_CAM( 14, ref l_U1 );
            if (GET_IS_WIDESCREEN())
            {
                SET_CAM_POS( l_U1, 906.27000000, -493.21910000, 15.27503000 );
                SET_CAM_ROT( l_U1, -0.52283600, 0.00000000, 151.81300000 );
                SET_CAM_FOV( l_U1, 41.00000000 );
            }
            else
            {
                SET_CAM_POS( l_U1, 906.27000000, -493.21910000, 15.27503000 );
                SET_CAM_ROT( l_U1, -0.52283600, 0.00000000, 151.81300000 );
                SET_CAM_FOV( l_U1, 45.00000000 );
            }
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            CLEAR_ROOM_FOR_VIEWPORT( uVar2 );
            REQUEST_MODEL( 697247370 );
            SET_CAM_ACTIVE( l_U1, 1 );
            SET_CAM_PROPAGATE( l_U1, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SETTIMERA( 0 );
            l_U0++;
        }
    }
    if (l_U0 == 3)
    {
        if (TIMERA() > 0)
        {
            sub_2122();
        }
        if (TIMERA() > 8500)
        {
            l_U0++;
        }
    }
    if (l_U0 == 4)
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CARSAVE" ))
        {
            CLEAR_HELP();
        }
        return 1;
    }
    return 0;
}

void sub_1514()
{
    int iVar2;

    l_U2 = 1;
    iVar2 = 0;
    BEGIN_CAM_COMMANDS( ref iVar2 );
    if (iVar2 == 1)
    {
        return;
    }
    sub_1618( "Camera Scopes not 1 when setting up owner camera. Doing Temp Fix." );
    while (iVar2 > 0)
    {
        END_CAM_COMMANDS( ref iVar2 );
    }
    BEGIN_CAM_COMMANDS( ref iVar2 );
    if (NOT (iVar2 == 1))
    {
        PRINTSTRING( "Camera Scopes still not 1 when setting up owner camera. Can't Fix This." );
    }
    return;
}

void sub_1618(unknown uParam0)
{
    SETTIMERA( 0 );
    while (TIMERA() < 3000)
    {
        WAIT( 0 );
        PRINTSTRING( "WARNING: CarFoodRunJack (KEITHM): " );
        PRINTSTRING( uParam0 );
        PRINTNL();
    }
    return;
}

void sub_2122()
{
    g_U9084 = 1;
    return;
}

int sub_2239()
{
    if (l_U0 == 0)
    {
        PRINT_HELP_FOREVER( "HOTDOGS" );
        l_U4 = 0;
        l_U0++;
    }
    if (l_U0 == 1)
    {
        SETTIMERA( 0 );
        l_U0++;
    }
    if (l_U0 == 2)
    {
        if (TIMERA() > 0)
        {
            SET_CAM_POS( l_U1, 927.91590000, -508.46040000, 14.67776000 );
            SET_CAM_ROT( l_U1, 3.61105500, 0.00000000, 70.63024000 );
            SET_CAM_FOV( l_U1, 27.60004000 );
            SET_CAM_NEAR_DOF( l_U1, 0.50000000 );
            SET_CAM_FAR_DOF( l_U1, 6.00000000 );
            if (NOT (IS_CHAR_DEAD( sub_192() )))
            {
                SET_CHAR_HEADING( sub_192(), 275 );
                TASK_LOOK_AT_COORD( sub_192(), 927.91590000, -508.46040000, 14.67776000, -2, 0 );
            }
            SETTIMERA( 0 );
            l_U0++;
        }
    }
    if (l_U0 == 3)
    {
        if (l_U3 == 0)
        {
            if (TIMERA() > 2000)
            {
                g_U9055 = 1;
                l_U3 = 1;
            }
        }
        if (TIMERA() > 6000)
        {
            l_U0++;
        }
    }
    if (l_U0 == 4)
    {
        sub_274();
        l_U5 = 1;
        l_U0++;
    }
    if (l_U0 == 5)
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HOTDOGS" ))
        {
            CLEAR_HELP();
        }
        return 1;
    }
    return 0;
}

int sub_2680()
{
    l_U10 = 3;
    if (l_U0 == 0)
    {
        DISPLAY_RADAR( 1 );
        if (NOT (IS_CHAR_DEAD( sub_192() )))
        {
            TASK_CLEAR_LOOK_AT( sub_192() );
        }
        if (IS_PLAYER_PLAYING( sub_136() ))
        {
            SET_PLAYER_CONTROL( sub_136(), 1 );
        }
        l_U0++;
    }
    if (l_U0 == 1)
    {
        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            return 0;
        }
        if (NOT (sub_2808( l_U10 )))
        {
            return 0;
        }
        PRINT_HELP( "HEALTH" );
        l_U0++;
    }
    if (l_U0 == 2)
    {
        SETTIMERA( 0 );
        l_U0++;
    }
    if (l_U0 == 3)
    {
        if (TIMERA() > 0)
        {
            SETTIMERA( 0 );
            l_U0++;
        }
    }
    if (l_U0 == 4)
    {
        if ((NOT (sub_398( l_U10 ))) || (TIMERA() > 9000))
        {
            l_U0++;
        }
    }
    if (l_U0 == 5)
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HEALTH" ))
        {
            CLEAR_HELP();
        }
        sub_387( l_U10 );
        return 1;
    }
    return 0;
}

int sub_2808(int iParam0)
{
    int iVar3;

    iVar3 = g_U64522[iParam0];
    if (g_U64539 == iParam0)
    {
        return 1;
    }
    if (g_U64541 == iParam0)
    {
        if (iVar3 <= g_U64538)
        {
            return 0;
        }
        g_U64538 = g_U64540;
        g_U64539 = g_U64541;
        g_U64540 = 0;
        g_U64541 = 16;
        return 1;
    }
    if (iVar3 <= g_U64540)
    {
        return 0;
    }
    g_U64540 = iVar3;
    g_U64541 = iParam0;
    return 0;
}

int sub_3198()
{
    l_U10 = 4;
    if (l_U0 == 0)
    {
        DISPLAY_RADAR( 1 );
        l_U0++;
    }
    if (l_U0 == 1)
    {
        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            return 0;
        }
        if (NOT (sub_2808( l_U10 )))
        {
            return 0;
        }
        PRINT_HELP( "RUNKEY" );
        l_U0++;
    }
    if (l_U0 == 2)
    {
        SETTIMERA( 0 );
        l_U0++;
    }
    if (l_U0 == 3)
    {
        if (TIMERA() > 0)
        {
            SETTIMERA( 0 );
            l_U0++;
        }
    }
    if (l_U0 == 4)
    {
        if ((NOT (sub_398( l_U10 ))) || (TIMERA() > 5000))
        {
            l_U0++;
        }
    }
    if (l_U0 == 5)
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "RUNKEY" ))
        {
            CLEAR_HELP();
        }
        sub_387( l_U10 );
        return 1;
    }
    return 0;
}

int sub_3492()
{
    l_U10 = 5;
    if (l_U0 == 0)
    {
        DISPLAY_RADAR( 1 );
        if (IS_PLAYER_PLAYING( sub_136() ))
        {
            SET_PLAYER_CONTROL( sub_136(), 1 );
        }
        l_U0++;
    }
    if (l_U0 == 1)
    {
        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            return 0;
        }
        if (NOT (sub_2808( l_U10 )))
        {
            return 0;
        }
        PRINT_HELP( "CARJACK" );
        l_U0++;
    }
    if (l_U0 == 2)
    {
        SETTIMERA( 0 );
        l_U0++;
    }
    if (l_U0 == 3)
    {
        if (TIMERA() > 0)
        {
            SETTIMERA( 0 );
            l_U0++;
        }
    }
    if (l_U0 == 4)
    {
        if ((NOT (sub_398( l_U10 ))) || (TIMERA() > 5000))
        {
            l_U0++;
        }
    }
    if (l_U0 == 5)
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CARJACK" ))
        {
            CLEAR_HELP();
        }
        sub_387( l_U10 );
        return 1;
    }
    return 0;
}

void sub_3945(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

