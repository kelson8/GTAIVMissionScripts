void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U4 = 0;
    l_U14 = 0;
    l_U19 = {-237.06600000, 52.68170000, 14.70810000};
    l_U22 = {14.51370000, 978.41400000, 14.64890000};
    REQUEST_ANIMS( "AMB@BAR" );
    REQUEST_MODEL( 24233425 );
    l_U15 = {l_U26._fU4[0]};
    l_U18 = VDIST( l_U15, l_U19 );
    if (l_U18 < 5.00000000)
    {
        l_U6 = {-235.11120000, 53.07800000, 14.70810000};
        l_U9 = 353.73580000;
        l_U10 = {-237.06690000, 51.63530000, 14.70810000};
        l_U13 = 115.92400000;
    }
    l_U18 = VDIST( l_U15, l_U22 );
    if (l_U18 < 5.00000000)
    {
        l_U6 = {14.42650000, 979.73280000, 14.64890000};
        l_U9 = 97.73600000;
        l_U10 = {15.74310000, 978.26210000, 14.64890000};
        l_U13 = 191.13400000;
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_306())
            {
                switch (l_U0)
                {
                    case 0:
                    if (l_U4 == 1)
                    {
                        sub_403();
                        sub_525();
                        l_U0 = 1;
                    }
                    else
                    {
                        sub_551();
                    }
                    break;
                    case 1:
                    sub_678( l_U5 );
                    break;
                    case 2: break;
                }
            }
            else
            {
                PRINTSTRING( "Bar Script Killed" );
                PRINTNL();
                sub_1403();
            }
        }
        else
        {
            PRINTSTRING( "Bar Script Killed" );
            PRINTNL();
            sub_1403();
        }
    }
    return;
}

void sub_306()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman7" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_403()
{
    if (IS_CHAR_DEAD( l_U5 ))
    {
        CREATE_CHAR( 5, 24233425, l_U6._fU0, l_U6._fU4, l_U6._fU8, ref l_U5, 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U5 );
        SET_CHAR_HEADING( l_U5, l_U9 );
        SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U5, 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U5, "GTAMloRoom01" );
    }
    return;
}

void sub_525()
{
    return;
}

void sub_551()
{
    REQUEST_ANIMS( "AMB@BAR" );
    REQUEST_MODEL( 24233425 );
    if ((HAS_MODEL_LOADED( 24233425 )) AND (HAVE_ANIMS_LOADED( "AMB@BAR" )))
    {
        l_U4 = 1;
    }
    else
    {
        REQUEST_ANIMS( "AMB@BAR" );
        REQUEST_MODEL( 24233425 );
    }
    return;
}

void sub_678(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (l_U14)
        {
            GET_SCRIPT_TASK_STATUS( uParam0, 7, ref l_U3 );
            if (l_U3 == 7)
            {
                SAY_AMBIENT_SPEECH( uParam0, "GET_OUT", 1, 0, 0 );
                TASK_HANDS_UP( uParam0, 100000 );
            }
        }
        else if (NOT (IS_CHAR_INJURED( sub_773() )))
        {
            if (IS_CHAR_SHOOTING( sub_773() ))
            {
                l_U14 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref l_U3 );
        if (l_U3 == 7)
        {
            sub_872( uParam0 );
        }
    }
    return;
}

void sub_773()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_872(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_883( 0, 4 );
    if (iVar3 == 0)
    {
        l_U1 = 0;
        sub_931( uParam0 );
    }
    else if (iVar3 == 1)
    {
        l_U1 = 1;
        sub_931( uParam0 );
    }
    else if (iVar3 == 2)
    {
        l_U1 = 0;
        sub_931( uParam0 );
    }
    else if (iVar3 == 3)
    {
        l_U1 = 0;
        sub_931( uParam0 );
    };;;;
    return;
}

void sub_883(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_931(unknown uParam0)
{
    switch (l_U1)
    {
        case 0:
        OPEN_SEQUENCE_TASK( ref l_U2 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U6._fU0, l_U6._fU4, l_U6._fU8, 2, -1, 0.50000000 );
        TASK_ACHIEVE_HEADING( 0, l_U9 );
        TASK_PLAY_ANIM( 0, "CLEAN_GLASS", "AMB@BAR", 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U2 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U2 );
            CLEAR_SEQUENCE_TASK( l_U2 );
        }
        break;
        case 1:
        OPEN_SEQUENCE_TASK( ref l_U2 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U10._fU0, l_U10._fU4, l_U10._fU8, 2, -1, 0.50000000 );
        TASK_ACHIEVE_HEADING( 0, l_U13 );
        TASK_PLAY_ANIM( 0, "WIPE_COUNTER", "AMB@BAR", 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U2 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U2 );
            CLEAR_SEQUENCE_TASK( l_U2 );
        }
        break;
    }
    return;
}

void sub_1403()
{
    if (DOES_CHAR_EXIST( l_U5 ))
    {
        DELETE_CHAR( ref l_U5 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

