void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U4 = 0;
    l_U5 = 0;
    if (sub_37())
    {
        l_U3 = 1;
    }
    else
    {
        l_U3 = 0;
    }
    GET_OBJECT_HEADING( l_U12, ref l_U11 );
    l_U9 = l_U11 - 45.00000000;
    if (l_U9 < 0.00000000)
    {
        l_U9 = 0.00000000;
    }
    l_U10 = l_U11 + 45.00000000;
    if (l_U10 > 360.00000000)
    {
        l_U10 = 360.00000000;
    }
    GET_OBJECT_MODEL( l_U12, ref l_U6 );
    if (l_U6 == -21824081)
    {
        l_U8 = 0.25000000;
        l_U7 = 180.00000000;
        l_U5 = 1;
    }
    while (true)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U12 ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U12 ))
            {
                switch (l_U2)
                {
                    case 0:
                    if (l_U5)
                    {
                        if (ROTATE_OBJECT( l_U12, l_U7, l_U8, 1 ))
                        {
                            GET_OBJECT_HEADING( l_U12, ref l_U11 );
                            l_U7 = l_U11 + 10.00000000;
                            if (l_U7 > 360.00000000)
                            {
                                l_U7 -= 360.00000000;
                            }
                        }
                    }
                    else if (l_U4 == 0)
                    {
                        GENERATE_RANDOM_FLOAT_IN_RANGE( l_U9, l_U10, ref l_U7 );
                        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.10000000, 1.00000000, ref l_U8 );
                        l_U4 = 1;
                    }
                    else if (ROTATE_OBJECT( l_U12, l_U7, l_U8, 1 ))
                    {
                        l_U4 = 0;
                    };;;
                    break;
                    case 1: break;
                    case 2: break;
                }
            }
            else
            {
                sub_561();
            }
        }
        else
        {
            sub_561();
        }
    }
    return;
}

int sub_37()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_46() )))
    {
        GET_CHAR_COORDINATES( sub_46(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_46()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_561()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

