void main()
{
    l_U0 = 0;
    l_U2 = 0;
    l_U3 = 0;
    l_U13 = -1;
    l_U9 = {l_U14._fU4[0]};
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (IS_PLAYER_PLAYING( sub_64() ))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_64(), 0 )))
                {
                    if (NOT g_U10978)
                    {
                        if (sub_137())
                        {
                            switch (l_U0)
                            {
                                case 0:
                                sub_253( l_U9, 1 );
                                l_U0 = 1;
                                break;
                                case 1: break;
                                case 2: break;
                            }
                        }
                    }
                }
                else
                {
                    TERMINATE_THIS_SCRIPT();
                }
            }
        }
        else
        {
            sub_387();
        }
    }
    return;
}

void sub_64()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_137()
{
    if (l_U13 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U13 );
        if (l_U13 == 0)
        {
            return 1;
        }
    }
    else if (l_U13 == 0)
    {
        return 1;
    }
    return 0;
}

void sub_253(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    unknown uVar6;

    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref uVar6 );
    REQUEST_MODEL( uVar6 );
    if (bParam3)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
        {
            ;
        }
    }
    else if (CREATE_EMERGENCY_SERVICES_CAR( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
    {
        ;
    }
    return;
}

void sub_387()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

