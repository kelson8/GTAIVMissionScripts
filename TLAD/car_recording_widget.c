void main()
{
    sub_9();
    return;
}

void sub_9()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        TERMINATE_THIS_SCRIPT();
    }
    sub_37();
    while (true)
    {
        WAIT( 0 );
        sub_355();
    }
    return;
}

void sub_37()
{
    int iVar2;
    unknown uVar3;

    REQUEST_MODEL( 1349725314 );
    while (NOT (HAS_MODEL_LOADED( 1349725314 )))
    {
        WAIT( 0 );
    }
    iVar2 = 1349725314;
    l_U0._fU8 = iVar2;
    l_U0._fU12 = 300;
    l_U0._fU40 = 1;
    l_U0._fU44 = 0;
    l_U0._fU16 = 1.00000000;
    l_U0._fU48 = 1;
    CREATE_WIDGET_GROUP( "Car Recording Playback" );
    ADD_WIDGET_TOGGLE( "Activate Playback", ref l_U0._fU52 );
    ADD_WIDGET_SLIDER( "Car Recording Number", ref l_U0._fU12, 1, 3010, 1 );
    ADD_WIDGET_FLOAT_SLIDER( "Playback Speed", ref l_U0._fU16, 0.00000000, 10.00000000, 0.10000000 );
    ADD_WIDGET_TOGGLE( "Player in car", ref l_U0._fU48 );
    END_WIDGET_GROUP();
    return;
}

void sub_355()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (l_U0._fU52)
    {
        if (l_U0._fU40)
        {
            GET_CHAR_COORDINATES( sub_388(), ref l_U0._fU28._fU0, ref l_U0._fU28._fU4, ref l_U0._fU28._fU8 );
            REQUEST_MODEL( l_U0._fU8 );
            REQUEST_CAR_RECORDING( l_U0._fU12 );
            while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U0._fU12 ))) || (NOT (HAS_MODEL_LOADED( l_U0._fU8 ))))
            {
                WAIT( 0 );
            }
            CREATE_CAR( l_U0._fU8, 0.00000000, 0.00000000, 0.00000000, ref l_U0._fU4, 1 );
            if (l_U0._fU48)
            {
                WARP_CHAR_INTO_CAR( sub_388(), l_U0._fU4 );
            }
            START_PLAYBACK_RECORDED_CAR( l_U0._fU4, l_U0._fU12 );
            SETTIMERA( 0 );
            while (TIMERA() < 1)
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U0._fU4 )))
            {
                GET_CAR_COORDINATES( l_U0._fU4, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            }
            PAUSE_PLAYBACK_RECORDED_CAR( l_U0._fU4 );
            LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            if (NOT (IS_CAR_DEAD( l_U0._fU4 )))
            {
                ;
            }
            UNPAUSE_PLAYBACK_RECORDED_CAR( l_U0._fU4 );
            # -NULL-0xbfc99f( l_U0._fU4, 1 );
            l_U0._fU40 = 0;
            l_U0._fU44 = 1;
        }
        else if (NOT (IS_CAR_DEAD( l_U0._fU4 )))
        {
            SET_PLAYBACK_SPEED( l_U0._fU4, l_U0._fU16 );
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U0._fU4 )))
            {
                l_U0._fU52 = 0;
            }
            else
            {
                GET_CAR_COORDINATES( l_U0._fU4, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                PRINTNL();
                PRINTSTRING( "Chopper coords: " );
                PRINTVECTOR( uVar6 );
                PRINTNL();
                uVar5 = FIND_TIME_POSITION_IN_RECORDING( l_U0._fU4 );
                PRINTNL();
                PRINTSTRING( "Recording Position: " );
                PRINTFLOAT( uVar5 );
                PRINTNL();
            }
            if (IS_CHAR_IN_CAR( sub_388(), l_U0._fU4 ))
            {
                if (NOT l_U0._fU48)
                {
                    SET_PLAYER_CONTROL( sub_1009(), 1 );
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_388(), l_U0._fU28._fU0, l_U0._fU28._fU4, l_U0._fU28._fU8 );
                }
            }
            else if (l_U0._fU48)
            {
                SET_PLAYER_CONTROL( sub_1009(), 0 );
                WARP_CHAR_INTO_CAR( sub_388(), l_U0._fU4 );
            }
        }
    }
    else if (l_U0._fU44)
    {
        if (IS_CHAR_IN_CAR( sub_388(), l_U0._fU4 ))
        {
            SET_PLAYER_CONTROL( sub_1009(), 1 );
            WARP_CHAR_FROM_CAR_TO_COORD( sub_388(), l_U0._fU28._fU0, l_U0._fU28._fU4, l_U0._fU28._fU8 );
        }
        DELETE_CAR( ref l_U0._fU4 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U0._fU8 );
        REMOVE_CAR_RECORDING( l_U0._fU12 );
        l_U0._fU44 = 0;
        l_U0._fU40 = 1;
    }
    return;
}

void sub_388()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1009()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

