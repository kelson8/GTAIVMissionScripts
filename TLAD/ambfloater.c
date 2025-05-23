void main()
{
    l_U0 = 0;
    l_U1 = {l_U5._fU4[0]};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_38();
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_112())
            {
                switch (l_U0)
                {
                    case 0:
                    if (sub_179())
                    {
                        l_U0 = 1;
                    }
                    else
                    {
                        PRINTSTRING( "ambFloater - Trying to create" );
                        PRINTNL();
                    }
                    break;
                    case 1: break;
                }
            }
        }
        else
        {
            PRINTSTRING( "ambFloater - Out of range" );
            PRINTNL();
            sub_38();
        }
    }
    return;
}

void sub_38()
{
    if (DOES_CHAR_EXIST( l_U4 ))
    {
        DELETE_CHAR( ref l_U4 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_112()
{
    if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_179()
{
    if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
    {
        CREATE_RANDOM_CHAR( l_U1._fU0, l_U1._fU4, l_U1._fU8, ref l_U4 );
        SET_CHAR_HEADING( l_U4, sub_229() );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U4 );
        SET_CHAR_NEVER_TARGETTED( l_U4, 1 );
        SET_CHAR_HEALTH( l_U4, 0 );
        return 1;
    }
    return 0;
}

void sub_229()
{
    unknown Result;

    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref Result );
    return Result;
}

