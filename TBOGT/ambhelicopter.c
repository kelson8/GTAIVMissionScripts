void main()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U1 = 0;
    l_U2 = 0;
    l_U56 = 1;
    l_U64 = -1660661558;
    l_U60 = {l_U65._fU4[0]};
    WAIT( 0 );
    if (IS_PLAYER_PLAYING( sub_58() ))
    {
        if (NOT (IS_CHAR_DEAD( sub_101() )))
        {
            GET_CHAR_COORDINATES( sub_101(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( l_U60._fU0, l_U60._fU4, l_U60._fU8, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref fVar2 );
            if (fVar2 > 75.00000000)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_58(), 0 )))
                {
                    if (sub_249())
                    {
                        if (sub_1172())
                        {
                            sub_1227();
                        }
                        else
                        {
                            l_U1 = 3;
                        }
                    }
                    else
                    {
                        l_U1 = 3;
                    }
                }
                else
                {
                    l_U1 = 3;
                }
            }
            else
            {
                l_U56 = 0;
            }
        }
    }
    while (l_U56)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_58() ))
        {
            if (NOT (IS_CHAR_DEAD( sub_101() )))
            {
                if (sub_249())
                {
                    switch (l_U1)
                    {
                        case 0:
                        sub_4812();
                        break;
                        case 1:
                        sub_4873();
                        break;
                        case 2:
                        sub_5391();
                        break;
                        case 3: break;
                    }
                    sub_5505();
                }
                else
                {
                    l_U56 = 0;
                }
            }
            else
            {
                l_U56 = 0;
            }
        }
        else
        {
            l_U56 = 0;
        }
    }
    sub_5560();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_58()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_101()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_249()
{
    if (IS_PLAYER_PLAYING( sub_58() ))
    {
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (NOT sub_287())
            {
                if (sub_1127())
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_287()
{
    if (NOT (IS_CHAR_INJURED( sub_101() )))
    {
        if (sub_319( sub_101() ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_319(unknown uParam0)
{
    if ((sub_332( uParam0, 0, 0 )) || ((sub_332( uParam0, 2, 0 )) || (sub_332( uParam0, 1, 0 ))))
    {
        return 1;
    }
    return 0;
}

int sub_332(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_360( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_360(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_101(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_1127()
{
    int Result;

    Result = 1;
    return Result;
}

int sub_1172()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 10000, ref iVar2 );
    if (iVar2 > 5000)
    {
        return 0;
        break;
    }
    return 1;
}

void sub_1227()
{
    REQUEST_MODEL( l_U64 );
    sub_1248();
    return;
}

void sub_1248()
{
    int I;
    int iVar3;
    float fVar4;
    float fVar5;
    boolean bVar6;

    iVar3 = 99;
    fVar4 = 1E8;
    bVar6 = false;
    l_U22[0] = {1214.18000000, 1924.23000000, 13.00000000};
    l_U22[1] = {1782.03000000, 954.28000000, 21.14000000};
    l_U22[2] = {1477.60000000, 9.21000000, 24.50000000};
    l_U22[3] = {1088.60000000, -682.82000000, 24.50000000};
    l_U22[4] = {-612.25000000, -385.61000000, 4.92000000};
    l_U22[5] = {-196.52000000, 243.78000000, 14.85000000};
    l_U22[6] = {-207.80000000, 948.50000000, 10.89000000};
    l_U22[7] = {-541.39000000, 1592.59000000, 9.65000000};
    l_U22[8] = {-1162.58000000, 1801.34000000, 14.00000000};
    l_U22[9] = {-1840.38000000, 389.53000000, 22.40000000};
    l_U22[10] = {-1212.43000000, -520.34000000, 2.90000000};
    for ( I = 0; I < 11; I++ )
    {
        fVar5 = VDIST( l_U60, l_U22[I] );
        if (fVar5 < fVar4)
        {
            iVar3 = I;
            fVar4 = fVar5;
            bVar6 = true;
        }
    }
    if (bVar6)
    {
        l_U2 = iVar3;
        sub_1603();
    }
    else
    {
        SCRIPT_ASSERT( "BAD BEDDOES LOGIC" );
    }
    return;
}

void sub_1603()
{
    switch (l_U2)
    {
        case 0:
        l_U3._fU0[0] = {1168.50000000, 1959.80000000, 21.50000000};
        l_U3._fU0[1] = {1304.44000000, 1855.31000000, 13.21000000};
        if ((sub_1776( l_U3._fU0[0], l_U3._fU0[1] )) == 0)
        {
            l_U3._fU28 = {1424.70000000, 1720.83000000, 57.81000000};
            l_U3._fU40 = 63.00000000;
            l_U3._fU44 = {1064.60000000, 2053.52000000, 57.81000000};
            l_U3._fU56 = {726.42000000, 2299.63000000, 57.81000000};
        }
        else
        {
            l_U3._fU28 = {1064.60000000, 2053.52000000, 57.81000000};
            l_U3._fU40 = 217.00000000;
            l_U3._fU44 = {1424.70000000, 1720.83000000, 57.81000000};
            l_U3._fU56 = {1653.00000000, 1354.31000000, 57.81000000};
        }
        break;
        case 1:
        l_U3._fU0[0] = {1751.00000000, 997.50000000, 17.81000000};
        l_U3._fU0[1] = {1743.00000000, 907.09000000, 17.98000000};
        if ((sub_1776( l_U3._fU0[0], l_U3._fU0[1] )) == 0)
        {
            l_U3._fU28 = {1851.79000000, 754.43000000, 56.80000000};
            l_U3._fU40 = 27.66000000;
            l_U3._fU44 = {1624.39000000, 1125.19000000, 56.80000000};
            l_U3._fU56 = {1511.00000000, 1264.00000000, 56.80000000};
        }
        else
        {
            l_U3._fU28 = {1634.25000000, 1150.69000000, 52.41000000};
            l_U3._fU40 = 153.00000000;
            l_U3._fU44 = {1837.75000000, 877.71000000, 52.41000000};
            l_U3._fU56 = {2128.00000000, 586.00000000, 52.41000000};
        }
        break;
        case 2:
        l_U3._fU0[0] = {1511.88000000, 33.56000000, 25.80000000};
        l_U3._fU0[1] = {1477.60000000, 9.21000000, 24.50000000};
        if ((sub_1776( l_U3._fU0[0], l_U3._fU0[1] )) == 0)
        {
            l_U3._fU28 = {1294.66000000, -174.03000000, 61.00000000};
            l_U3._fU40 = -44.00000000;
            l_U3._fU44 = {1607.04000000, 99.11000000, 61.00000000};
            l_U3._fU56 = {1797.04000000, 267.14000000, 61.00000000};
        }
        else
        {
            l_U3._fU28 = {1755.90000000, 187.60000000, 60.10000000};
            l_U3._fU40 = 117.00000000;
            l_U3._fU44 = {1389.36000000, -69.50000000, 60.10000000};
            l_U3._fU56 = {1084.30000000, -307.72000000, 60.10000000};
        }
        break;
        case 3:
        l_U3._fU0[0] = {1046.90000000, -710.99000000, 17.95000000};
        l_U3._fU0[1] = {1151.55000000, -660.40000000, 27.80000000};
        if ((sub_1776( l_U3._fU0[0], l_U3._fU0[1] )) == 0)
        {
            l_U3._fU28 = {1291.99000000, -610.12000000, 58.30000000};
            l_U3._fU40 = 114.00000000;
            l_U3._fU44 = {939.77000000, -763.40000000, 58.30000000};
            l_U3._fU56 = {619.85000000, -833.00000000, 58.30000000};
        }
        else
        {
            l_U3._fU28 = {929.78000000, -799.00000000, 58.30000000};
            l_U3._fU40 = -60.00000000;
            l_U3._fU44 = {1286.00000000, -603.96000000, 58.30000000};
            l_U3._fU56 = {1577.00000000, -282.00000000, 58.30000000};
        }
        break;
        case 4:
        l_U3._fU0[0] = {-631.90990000, -359.33000000, 6.23000000};
        l_U3._fU0[1] = {-612.25000000, -385.61000000, 4.92000000};
        if ((sub_1776( l_U3._fU0[0], l_U3._fU0[1] )) == 0)
        {
            l_U3._fU28 = {-400.25000000, -595.72000000, 58.33000000};
            l_U3._fU40 = 33.70000000;
            l_U3._fU44 = {-692.00000000, -268.00000000, 58.33000000};
            l_U3._fU56 = {-918.00000000, -15.61000000, 58.33000000};
        }
        else
        {
            l_U3._fU28 = {-762.93000000, -229.06000000, 58.33000000};
            l_U3._fU40 = -135.00000000;
            l_U3._fU44 = {-417.00000000, -681.00000000, 58.33000000};
            l_U3._fU56 = {-105.10000000, -971.56000000, 58.33000000};
        }
        break;
        case 5:
        l_U3._fU0[0] = {-205.63000000, 298.41000000, 15.40000000};
        l_U3._fU0[1] = {-194.21000000, 191.94000000, 15.14000000};
        if ((sub_1776( l_U3._fU0[0], l_U3._fU0[1] )) == 0)
        {
            l_U3._fU28 = {-91.27000000, -267.53000000, 270.00000000};
            l_U3._fU40 = 5.00000000;
            l_U3._fU44 = {-242.36000000, 455.12000000, 270.00000000};
            l_U3._fU56 = {-312.53000000, 748.42000000, 270.00000000};
        }
        else
        {
            l_U3._fU28 = {-218.14000000, 608.77000000, 240.00000000};
            l_U3._fU40 = -180.00000000;
            l_U3._fU44 = {-196.46000000, -44.40000000, 240.00000000};
            l_U3._fU56 = {-126.00000000, -453.00000000, 240.00000000};
        }
        break;
        case 6:
        l_U3._fU0[0] = {-241.59000000, 943.41000000, 12.65000000};
        l_U3._fU0[1] = {-178.58000000, 946.00000000, 12.50000000};
        if ((sub_1776( l_U3._fU0[0], l_U3._fU0[1] )) == 0)
        {
            l_U3._fU28 = {68.52000000, 913.76000000, 95.00000000};
            l_U3._fU40 = 83.00000000;
            l_U3._fU44 = {-399.59000000, 923.26000000, 95.00000000};
            l_U3._fU56 = {-586.00000000, 947.00000000, 95.00000000};
        }
        else
        {
            l_U3._fU28 = {-506.79000000, 893.81000000, 95.00000000};
            l_U3._fU40 = -78.00000000;
            l_U3._fU44 = {-34.23000000, 991.53000000, 95.00000000};
            l_U3._fU56 = {467.33000000, 1095.24000000, 950.00000000};
        }
        break;
        case 7:
        l_U3._fU0[0] = {-559.13000000, 1626.71000000, 10.42000000};
        l_U3._fU0[1] = {-512.40000000, 1580.59000000, 14.51000000};
        if ((sub_1776( l_U3._fU0[0], l_U3._fU0[1] )) == 0)
        {
            l_U3._fU28 = {-297.31000000, 1471.31000000, 80.00000000};
            l_U3._fU40 = 50.00000000;
            l_U3._fU44 = {-547.03000000, 1644.28000000, 80.00000000};
            l_U3._fU56 = {-822.46010000, 1814.62000000, 80.00000000};
        }
        else
        {
            l_U3._fU28 = {-736.53010000, 1749.14000000, 80.00000000};
            l_U3._fU40 = -125.00000000;
            l_U3._fU44 = {-460.83000000, 1553.39000000, 80.00000000};
            l_U3._fU56 = {-197.43000000, 1367.36000000, 80.00000000};
        }
        break;
        case 8:
        l_U3._fU0[0] = {-1140.14000000, 1802.39000000, 14.15000000};
        l_U3._fU0[1] = {-1212.04000000, 1804.86000000, 18.00000000};
        if ((sub_1776( l_U3._fU0[0], l_U3._fU0[1] )) == 0)
        {
            l_U3._fU28 = {-1484.27000000, 1734.44000000, 65.00000000};
            l_U3._fU40 = -77.00000000;
            l_U3._fU44 = {-1154.07000000, 1798.39000000, 65.00000000};
            l_U3._fU56 = {-845.45000000, 1708.35000000, 65.00000000};
        }
        else
        {
            l_U3._fU28 = {-911.46000000, 1838.64000000, 65.00000000};
            l_U3._fU40 = 100.00000000;
            l_U3._fU44 = {-1211.94000000, 1783.59000000, 65.00000000};
            l_U3._fU56 = {-1463.37000000, 1645.82000000, 65.00000000};
        }
        break;
        case 9:
        l_U3._fU0[0] = {-1835.17000000, 375.45000000, 23.59000000};
        l_U3._fU0[1] = {-1854.19000000, 421.47000000, 26.39000000};
        if ((sub_1776( l_U3._fU0[0], l_U3._fU0[1] )) == 0)
        {
            l_U3._fU28 = {-2010.26000000, 671.80000000, 90.00000000};
            l_U3._fU40 = -148.00000000;
            l_U3._fU44 = {-1751.89000000, 253.41000000, 90.00000000};
            l_U3._fU56 = {-1563.74000000, -51.28000000, 90.00000000};
        }
        else
        {
            l_U3._fU28 = {-1765.30000000, 152.47000000, 90.00000000};
            l_U3._fU40 = 18.00000000;
            l_U3._fU44 = {-1878.29000000, 493.99000000, 90.00000000};
            l_U3._fU56 = {-1940.31000000, 681.45000000, 90.00000000};
        }
        break;
        case 10:
        l_U3._fU0[0] = {-1224.17000000, -527.57000000, 4.00000000};
        l_U3._fU0[1] = {-1185.90000000, -502.20000000, 5.57000000};
        if ((sub_1776( l_U3._fU0[0], l_U3._fU0[1] )) == 0)
        {
            l_U3._fU28 = {-971.75000000, -308.79000000, 60.00000000};
            l_U3._fU40 = 132.00000000;
            l_U3._fU44 = {-1352.86000000, -661.14000000, 60.00000000};
            l_U3._fU56 = {-1539.72000000, -833.91000000, 60.00000000};
        }
        else
        {
            l_U3._fU28 = {-1416.23000000, -773.81000000, 70.00000000};
            l_U3._fU40 = -36.72000000;
            l_U3._fU44 = {-1192.94000000, -474.49000000, 70.00000000};
            l_U3._fU56 = {-991.53000000, -204.00000000, 70.00000000};
        }
        break;
        default: break;
    }
    return;
}

int sub_1776(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT (IS_CHAR_INJURED( sub_101() )))
    {
        GET_CHAR_COORDINATES( sub_101(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    }
    if ((VDIST( uVar8, uParam0 )) < (VDIST( uVar8, uParam3 )))
    {
        return 0;
        break;
    }
    return 1;
}

void sub_4812()
{
    if (NOT (HAS_MODEL_LOADED( l_U64 )))
    {
        REQUEST_MODEL( l_U64 );
    }
    else
    {
        l_U1 = 1;
    }
    return;
}

void sub_4873()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    GET_CHAR_COORDINATES( sub_101(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    GET_DISTANCE_BETWEEN_COORDS_3D( l_U60._fU0, l_U60._fU4, l_U60._fU8, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref fVar5 );
    if (fVar5 > 75.00000000)
    {
        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar6, l_U3._fU28._fU0, l_U3._fU28._fU4, l_U3._fU28._fU8, 2.00000000 )))
        {
            CREATE_CAR( l_U64, l_U3._fU28._fU0, l_U3._fU28._fU4, l_U3._fU28._fU8, ref l_U3._fU72, 1 );
            SET_CAR_HEADING( l_U3._fU72, l_U3._fU40 );
            SET_HELI_BLADES_FULL_SPEED( l_U3._fU72 );
            while (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U3._fU72 )))
            {
                CREATE_RANDOM_CHAR_AS_DRIVER( l_U3._fU72, ref l_U3._fU68 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U3._fU68 );
                OPEN_SEQUENCE_TASK( ref l_U63 );
                TASK_HELI_MISSION( 0, l_U3._fU72, 0, 0, l_U3._fU44._fU0, l_U3._fU44._fU4, l_U3._fU44._fU8, 4, 20.00000000, 5, -1, (ROUND( l_U3._fU44._fU8 )) + 1, 40 );
                TASK_HELI_MISSION( 0, l_U3._fU72, 0, 0, l_U3._fU56._fU0, l_U3._fU56._fU4, l_U3._fU56._fU8, 4, 20.00000000, 5, -1, (ROUND( l_U3._fU56._fU8 )) + 1, 40 );
                CLOSE_SEQUENCE_TASK( l_U63 );
                TASK_PERFORM_SEQUENCE( l_U3._fU68, l_U63 );
                CLEAR_SEQUENCE_TASK( l_U63 );
                l_U1 = 2;
            }
            else
            {
                l_U1 = 3;
            }
        }
    }
    return;
}

void sub_5391()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( l_U3._fU68 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U3._fU68, 29, ref iVar2 );
        if (iVar2 == 7)
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U3._fU68 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U3._fU72 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U64 );
            l_U1 = 3;
        }
    }
    return;
}

void sub_5505()
{
    return;
}

void sub_5560()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U3._fU68 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U3._fU72 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U64 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U57 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U58 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U59 );
    TERMINATE_THIS_SCRIPT();
    return;
}

