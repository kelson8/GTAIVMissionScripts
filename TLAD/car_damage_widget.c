void main()
{
    sub_9();
    return;
}

void sub_9()
{
    sub_18();
    while (true)
    {
        WAIT( 0 );
        sub_537();
    }
    return;
}

void sub_18()
{
    l_U0._fU8 = 1349725314;
    l_U0._fU44 = 1;
    l_U0._fU48 = 1;
    l_U0._fU36 = 0;
    l_U0._fU40 = 10.00000000;
    CREATE_WIDGET_GROUP( "Damage Offset to Vehicle Positioning" );
    ADD_WIDGET_TOGGLE( "Activate Offset Positioning", ref l_U0._fU52 );
    ADD_WIDGET_FLOAT_SLIDER( "Vehicle X", ref l_U0._fU12._fU0, -2000.00000000, 2000.00000000, 0.05000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Vehicle Y", ref l_U0._fU12._fU4, -2000.00000000, 2000.00000000, 0.05000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Vehicle Z", ref l_U0._fU12._fU8, -2000.00000000, 2000.00000000, 0.05000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Damage Offset X", ref l_U0._fU24._fU0, -2000.00000000, 2000.00000000, 0.05000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Damage Offset Y", ref l_U0._fU24._fU4, -2000.00000000, 2000.00000000, 0.05000000 );
    ADD_WIDGET_FLOAT_SLIDER( "Damage Offset Z", ref l_U0._fU24._fU8, -2000.00000000, 2000.00000000, 0.05000000 );
    ADD_WIDGET_TOGGLE( "Apply Damage", ref l_U0._fU36 );
    ADD_WIDGET_FLOAT_SLIDER( "Damage Amount", ref l_U0._fU40, 0.00000000, 1000.00000000, 0.50000000 );
    END_WIDGET_GROUP();
    return;
}

void sub_537()
{
    float fVar2;

    if (l_U0._fU52)
    {
        if (l_U0._fU44)
        {
            REQUEST_MODEL( l_U0._fU8 );
            while (NOT (HAS_MODEL_LOADED( l_U0._fU8 )))
            {
                WAIT( 0 );
            }
            GET_CHAR_COORDINATES( sub_613(), ref l_U0._fU12._fU0, ref l_U0._fU12._fU4, ref l_U0._fU12._fU8 );
            l_U0._fU12._fU0 += 2.00000000;
            l_U0._fU24 = {0.00000000, 0.00000000, 0.00000000};
            CREATE_CAR( l_U0._fU8, l_U0._fU12._fU0, l_U0._fU12._fU4, l_U0._fU12._fU8, ref l_U0._fU4, 1 );
            l_U0._fU44 = 0;
            l_U0._fU48 = 1;
        }
        else if (NOT (IS_CAR_DEAD( l_U0._fU4 )))
        {
            SET_CAR_COORDINATES( l_U0._fU4, l_U0._fU12._fU0, l_U0._fU12._fU4, l_U0._fU12._fU8 );
        }
        fVar2 = l_U0._fU40 * (5 / 0.75000000);
        DRAW_DEBUG_SPHERE( l_U0._fU12._fU0 + l_U0._fU24._fU0, l_U0._fU12._fU4 + l_U0._fU24._fU4, l_U0._fU12._fU8 + l_U0._fU24._fU8, l_U0._fU40 );
        if (l_U0._fU36)
        {
            DAMAGE_CAR( l_U0._fU4, l_U0._fU24._fU0, l_U0._fU24._fU4, l_U0._fU24._fU8, fVar2, 1000, 1 );
            l_U0._fU36 = 0;
        }
    }
    else if (l_U0._fU48)
    {
        DELETE_CAR( ref l_U0._fU4 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U0._fU8 );
        l_U0._fU48 = 0;
        l_U0._fU44 = 1;
    }
    return;
}

void sub_613()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

