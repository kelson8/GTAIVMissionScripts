void main()
{
    int iVar2;

    l_U0 = 0;
    l_U1 = 0;
    l_U2 = nil;
    l_U3 = nil;
    l_U4 = nil;
    l_U5 = 0;
    l_U6 = 0;
    l_U7 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            l_U0 = 0;
            l_U1 = 0;
            l_U2 = nil;
            l_U3 = nil;
            l_U4 = nil;
            l_U5 = 0;
            l_U6 = 0;
            l_U7 = 0;
        }
        SUPPRESS_CAR_MODEL( -159126838 );
        if (IS_PLAYER_PLAYING( sub_124() ))
        {
            sub_167();
            sub_1323();
            if ((NOT l_U1) AND (NOT l_U0))
            {
                iVar2 = 0;
                if (l_U5)
                {
                    iVar2 = sub_587();
                }
                if (l_U6)
                {
                    iVar2 = sub_847();
                }
                if (l_U7)
                {
                    iVar2 = sub_1109();
                }
            }
        }
    }
    return;
}

void sub_124()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_167()
{
    boolean bVar2;

    if (g_U15728[18])
    {
        if (l_U0)
        {
            sub_197();
            l_U0 = 0;
        }
        return;
    }
    bVar2 = LOCATE_CHAR_ANY_MEANS_3D( sub_371(), -1719.34400000, 333.57850000, 25.57930000, 200.00000000, 200.00000000, 200.00000000, 0 );
    if (bVar2)
    {
        if (NOT l_U0)
        {
            if (sub_469())
            {
                l_U0 = 1;
            }
        }
        return;
    }
    if (l_U0)
    {
        sub_197();
        l_U0 = 0;
    }
    return;
}

void sub_197()
{
    sub_206();
    sub_256();
    sub_306();
    return;
}

void sub_206()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U2 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2 );
    l_U2 = nil;
    return;
}

void sub_256()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U3 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U3 );
    l_U3 = nil;
    return;
}

void sub_306()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U4 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U4 );
    l_U4 = nil;
    return;
}

void sub_371()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_469()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    uVar2 = sub_499( -1731.24900000, 337.08360000, 24.44400000, 26.48870000 );
    uVar3 = sub_759( -1743.99100000, 328.27220000, 24.44400000, 58.73580000 );
    uVar4 = sub_1019( -1735.50400000, 333.68910000, 24.44400000, 323.18800000 );
    if ((uVar4) AND ((uVar3) AND (uVar2)))
    {
        return 1;
    }
    return 0;
}

int sub_499(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT g_U15728[30])
    {
        return 1;
    }
    if (DOES_VEHICLE_EXIST( l_U2 ))
    {
        return 1;
    }
    if (IS_CHAR_IN_MODEL( sub_371(), -159126838 ))
    {
        return 1;
    }
    REQUEST_MODEL( -159126838 );
    l_U5 = 1;
    if (NOT sub_587())
    {
        return 0;
    }
    CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 5.00000000, 0 );
    CREATE_CAR( -159126838, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U2, 1 );
    SET_CAR_HEADING( l_U2, uParam3 );
    SET_CAR_ON_GROUND_PROPERLY( l_U2 );
    return 1;
}

int sub_587()
{
    if (HAS_MODEL_LOADED( -159126838 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -159126838 );
        l_U5 = 0;
        return 1;
    }
    return 0;
}

int sub_759(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT g_U15728[31])
    {
        return 1;
    }
    if (DOES_VEHICLE_EXIST( l_U3 ))
    {
        return 1;
    }
    if (IS_CHAR_IN_MODEL( sub_371(), -114291515 ))
    {
        return 1;
    }
    REQUEST_MODEL( -114291515 );
    l_U6 = 1;
    if (NOT sub_847())
    {
        return 0;
    }
    CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 5.00000000, 0 );
    CREATE_CAR( -114291515, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U3, 1 );
    SET_CAR_HEADING( l_U3, uParam3 );
    SET_CAR_ON_GROUND_PROPERLY( l_U3 );
    return 1;
}

int sub_847()
{
    if (HAS_MODEL_LOADED( -114291515 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -114291515 );
        l_U6 = 0;
        return 1;
    }
    return 0;
}

int sub_1019(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT g_U15728[32])
    {
        return 1;
    }
    if (DOES_VEHICLE_EXIST( l_U4 ))
    {
        return 1;
    }
    if (IS_CHAR_IN_MODEL( sub_371(), 1265391242 ))
    {
        return 1;
    }
    REQUEST_MODEL( 1265391242 );
    l_U7 = 1;
    if (NOT sub_1109())
    {
        return 0;
    }
    CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 5.00000000, 0 );
    CREATE_CAR( 1265391242, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U4, 1 );
    SET_CAR_HEADING( l_U4, uParam3 );
    SET_CAR_ON_GROUND_PROPERLY( l_U4 );
    return 1;
}

int sub_1109()
{
    if (HAS_MODEL_LOADED( 1265391242 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1265391242 );
        l_U7 = 0;
        return 1;
    }
    return 0;
}

void sub_1323()
{
    boolean bVar2;

    if (NOT g_U15728[16])
    {
        return;
    }
    bVar2 = LOCATE_CHAR_ANY_MEANS_3D( sub_371(), -1952.42800000, -69.35070000, 6.20650000, 200.00000000, 200.00000000, 200.00000000, 0 );
    if (bVar2)
    {
        if (NOT l_U1)
        {
            if (sub_1412())
            {
                l_U1 = 1;
            }
        }
        return;
    }
    if (l_U1)
    {
        sub_1554();
        l_U1 = 0;
    }
    return;
}

int sub_1412()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    uVar2 = sub_499( -1940.88500000, -80.79090000, 5.72870000, 313.57250000 );
    uVar3 = sub_759( -1952.68400000, -81.35660000, 5.66350000, 226.19880000 );
    uVar4 = sub_1019( -1944.33100000, -75.45430000, 5.63700000, 183.48930000 );
    if ((uVar4) AND ((uVar3) AND (uVar2)))
    {
        return 1;
    }
    return 0;
}

void sub_1554()
{
    sub_206();
    sub_256();
    sub_306();
    return;
}

