void main()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    boolean bVar7;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U19 = 14;
    l_U20 = -1;
    l_U21 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U19 = 0;
    l_U20 = 6;
    while (NOT g_U15811[37])
    {
        WAIT( 0 );
    }
    g_U15811[70] = 1;
    bVar2 = true;
    bVar3 = true;
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    while (bVar2)
    {
        bVar3 = true;
        while (bVar3)
        {
            if (sub_156())
            {
                bVar3 = false;
            }
            if (bVar3)
            {
                iVar4 = sub_495( l_U19 );
                iVar5 = (l_U21) || (iVar4);
                if ((sub_557( l_U19 )) AND (iVar5))
                {
                    bVar3 = false;
                }
                l_U21 = iVar4;
            }
            if (bVar3)
            {
                sub_606();
                WAIT( 0 );
            }
            if (sub_1167( l_U19 ))
            {
                PRINTSTRING( "KGM...............Blog This B AMBIENT PHONECALL IN PROGRESS\n" );
                GET_GAME_TIMER( ref iVar6 );
                g_U22959 = iVar6 + 5000;
            }
        }
        bVar7 = true;
        if ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony4b" )) > 0)) AND (g_U12379))
        {
            bVar7 = false;
        }
        if (bVar7)
        {
            g_U15811[10] = 1;
            g_U15811[11] = 1;
            SETTIMERB( 0 );
            while (g_U15811[10])
            {
                WAIT( 0 );
            }
            if (g_U15811[14])
            {
                bVar2 = false;
            }
        }
    }
    g_U15811[70] = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_156()
{
    if ((g_U10938._fU8 == 6) AND ((g_U10938._fU4 == 0) AND ((IS_BIT_SET( g_U10938._fU0, 6 )) AND (IS_BIT_SET( g_U10938._fU0, 4 )))))
    {
        PRINTSTRING( "...BLOG THIS B mission - replay requested\n" );
        if (NOT (sub_274( 0 )))
        {
            SCRIPT_ASSERT( "Replaying Blog This B, but ambient pre-mission phonecall in progress" );
        }
        l_U21 = 0;
        return 1;
    }
    return 0;
}

void sub_274(unknown uParam0)
{
    return sub_285( uParam0 );
}

int sub_285(unknown uParam0)
{
    if (NOT g_U15904[uParam0]._fU0)
    {
        return 1;
    }
    if (g_U15904[uParam0]._fU12)
    {
        return 0;
    }
    g_U15904[uParam0]._fU0 = 0;
    g_U15904[uParam0]._fU16 = 1;
    return 1;
}

void sub_495(unknown uParam0)
{
    return sub_506( uParam0 );
}

void sub_506(unknown uParam0)
{
    return g_U15904[uParam0]._fU0;
}

void sub_557(unknown uParam0)
{
    return g_U15904[uParam0]._fU16;
}

void sub_606()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    float fVar9;

    bVar2 = true;
    vVar6 = {-708.83120000, 356.79870000, 3.07160000};
    fVar9 = 0.00000000;
    if (NOT (IS_CHAR_DEAD( sub_645() )))
    {
        GET_CHAR_COORDINATES( sub_645(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        fVar9 = sub_726( uVar3, vVar6 );
        if (fVar9 < 400.00000000)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_645() ))
            {
                bVar2 = false;
            }
            else if (fVar9 < 400.00000000)
            {
                bVar2 = false;
            }
        }
    }
    if (bVar2)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "bowling_lane" )) > 0)
        {
            bVar2 = false;
        }
    }
    if (bVar2)
    {
        if (NOT g_U15811[20])
        {
            bVar2 = sub_906();
        }
    }
    if (bVar2)
    {
        if (NOT (sub_495( l_U19 )))
        {
            sub_991( l_U19, 10000, 60000 );
        }
        return;
    }
    if (NOT (sub_495( l_U19 )))
    {
        return;
    }
    if (NOT (sub_274( l_U19 )))
    {
        return;
    }
    l_U21 = 0;
    return;
}

void sub_645()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_726(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

int sub_906()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    GET_TIME_OF_DAY( ref iVar2, ref iVar3 );
    if ((iVar2 < 19) AND (iVar2 >= 7))
    {
        return 1;
    }
    return 0;
}

void sub_991(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_1006( uParam0, uParam1, uParam2 );
    return;
}

void sub_1006(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15904[uParam0]._fU0 = 1;
    g_U15904[uParam0]._fU4 = iVar5 + iParam1;
    g_U15904[uParam0]._fU8 = uParam2;
    g_U15904[uParam0]._fU12 = 0;
    g_U15904[uParam0]._fU16 = 0;
    return;
}

void sub_1167(unknown uParam0)
{
    return sub_1178( uParam0 );
}

int sub_1178(unknown uParam0)
{
    if (NOT g_U15904[uParam0]._fU0)
    {
        return 0;
    }
    if ((sub_1219()) AND (g_U15904[uParam0]._fU12))
    {
        return 1;
    }
    return 0;
}

int sub_1219()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

