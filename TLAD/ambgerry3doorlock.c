void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_45();
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (IS_PLAYER_PLAYING( sub_95() ))
            {
                if (g_U9689 == 1)
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 64535, 1223, 29, 1, 0.00000000 );
                }
                else
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 64535, 1223, 29, 0, 0.00000000 );
                }
            }
            else
            {
                sub_45();
            }
        }
        else
        {
            sub_45();
        }
    }
    return;
}

void sub_45()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_95()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

