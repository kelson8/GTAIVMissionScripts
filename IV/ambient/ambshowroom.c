void main()
{
    int iVar2;
    unknown uVar3;

    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 100;
    l_U3 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 0;
    l_U32 = 0;
    l_U33 = 0;
    l_U34 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U35 = {l_U110._fU4[0]};
    sub_94();
    if (sub_952())
    {
        GET_TIME_OF_DAY( ref iVar2, ref uVar3 );
        if ((iVar2 < 9) || (iVar2 >= 22))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U106, l_U100, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U107, l_U103, 1, 0.00000000 );
            l_U34 = 1;
        }
    }
    while (sub_952())
    {
        WAIT( 0 );
        sub_1182();
        sub_1630();
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U106, l_U100, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U107, l_U103, 0, 0.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_94()
{
    int iVar2;
    float fVar3;
    float fVar4;
    int iVar5;
    boolean bVar6;
    vector[3] vVar7;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    iVar2 = 0;
    fVar4 = 999999;
    iVar5 = 0;
    bVar6 = false;
    array(ref vVar7, 3);
    vVar7[0] = {51.00000000, 808.00000000, 15.50000000};
    vVar7[1] = {-1081.00000000, 1468.00000000, 24.00000000};
    vVar7[2] = {-1487.00000000, 1131.00000000, 23.00000000};
    while (iVar2 < 3)
    {
        fVar3 = VDIST( l_U35, vVar7[iVar2] );
        if (fVar3 < fVar4)
        {
            iVar5 = iVar2;
            fVar4 = fVar3;
            bVar6 = true;
        }
        iVar2++;
    }
    if (bVar6)
    {
        l_U0 = iVar5;
    }
    else
    {
        SCRIPT_ASSERT( "BAD BEDDOES LOGIC" );
    }
    switch (l_U0)
    {
        case 0:
        l_U38[0] = {62.83000000, 796.55900000, 16.50000000};
        l_U69[0] = {10.65000000, 9.25000000, 7.65000000};
        l_U38[1] = {69.28000000, 800.05900000, 16.55800000};
        l_U69[1] = {14.57500000, 8.92500000, 7.65000000};
        l_U3 = 2;
        l_U100 = {54.00000000, 809.00000000, 16.00000000};
        l_U103 = {52.00000000, 807.00000000, 16.00000000};
        l_U106 = 172341554;
        l_U107 = 1943833694;
        break;
        case 1:
        l_U38[0] = {-1078.65000000, 1472.07500000, 25.70000000};
        l_U69[0] = {13.22500000, 6.60000000, 2.50000000};
        l_U38[1] = {-1080.70000000, 1464.65000000, 25.70000000};
        l_U69[1] = {10.42500000, 4.90000000, 2.50000000};
        l_U38[2] = {-1069.51000000, 1463.90400000, 25.73700000};
        l_U69[2] = {1.47500000, 1.92500000, 2.50000000};
        l_U3 = 3;
        l_U100 = {-1068.00000000, 1462.00000000, 25.00000000};
        l_U103 = {-1070.00000000, 1460.00000000, 25.00000000};
        l_U106 = -160085103;
        l_U107 = -160085103;
        break;
        case 2:
        l_U38[0] = {-1489.12500000, 1125.87500000, 24.41900000};
        l_U69[0] = {12.62500000, 16.85000000, 2.50000000};
        l_U3 = 1;
        l_U100 = {64048, 1121.00000000, 23.00000000};
        l_U103 = {64048, 1118.00000000, 23.00000000};
        l_U106 = 1659872882;
        l_U107 = -1296054771;
        break;
        default:
        l_U38[0] = {62.83000000, 796.55900000, 16.50000000};
        l_U69[0] = {10.65000000, 9.25000000, 7.65000000};
        l_U38[1] = {69.28000000, 800.05900000, 16.55800000};
        l_U69[1] = {14.57500000, 8.92500000, 7.65000000};
        l_U3 = 2;
        break;
    }
    l_U6 = 0;
    return;
}

int sub_952()
{
    if (IS_PLAYER_PLAYING( sub_961() ))
    {
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_1016())
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_961()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1016()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "jimmy2" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_1182()
{
    boolean bVar2;
    int iVar3;

    bVar2 = false;
    if (l_U5 >= l_U3)
    {
        l_U5 = 0;
    }
    if (IS_PLAYER_PLAYING( sub_961() ))
    {
        for ( l_U5 = 0; l_U5 < l_U3; l_U5++ )
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1243(), l_U38[l_U5]._fU0, l_U38[l_U5]._fU4, l_U38[l_U5]._fU8, l_U69[l_U5]._fU0, l_U69[l_U5]._fU4, l_U69[l_U5]._fU8, 0 ))
            {
                bVar2 = true;
            }
        }
        if (bVar2)
        {
            if (NOT l_U108)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_1243() ))
                {
                    l_U109 = 1;
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( sub_1243() )))
            {
                l_U108 = 0;
            }
        }
        else if (IS_CHAR_IN_ANY_CAR( sub_1243() ))
        {
            l_U108 = 1;
        }
        if (l_U33)
        {
            l_U31 = 0;
            l_U33 = 0;
        }
        if (NOT l_U31)
        {
            if (bVar2)
            {
                if (l_U109)
                {
                    GET_GAME_TIMER( ref l_U4 );
                    l_U31 = 1;
                }
            }
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((iVar3 - l_U4) >= l_U2)
            {
                if (NOT l_U33)
                {
                    ALTER_WANTED_LEVEL_NO_DROP( sub_961(), l_U1 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_961() );
                    l_U33 = 1;
                }
            }
        }
        l_U5++;
    }
    return;
}

void sub_1243()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1630()
{
    int iVar2;
    unknown uVar3;

    GET_TIME_OF_DAY( ref iVar2, ref uVar3 );
    if (l_U34)
    {
        if ((iVar2 < 22) AND (iVar2 >= 9))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U106, l_U100, 0, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( l_U107, l_U103, 0, 0.00000000 );
            l_U34 = 0;
        }
    }
    return;
}

