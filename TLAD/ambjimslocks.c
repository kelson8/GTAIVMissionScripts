void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U6 = {-1411.96600000, 562.10110000, 19.06230000};
    l_U9 = {1314, 71.00000000, 42.00000000};
    l_U12 = {896.00000000, -504.00000000, 15.00000000};
    l_U15 = {882.00000000, -29.00000000, 29.00000000};
    l_U18 = {865.70000000, -517.80000000, 16.50000000};
    l_U21 = {-28.00000000, -463.00000000, 16.00000000};
    l_U24 = {-1247.00000000, 1540.00000000, 26.00000000};
    l_U27 = {-160.00000000, 591.00000000, 119.00000000};
    l_U30 = {79, 64857, 15};
    l_U33 = {864.32000000, -121.64500000, 7.40000000};
    l_U36 = {811.03300000, -256.69950000, 16.90140000};
    l_U39 = {561.97610000, 1391.62600000, 30.85500000};
    l_U42 = {943.00000000, -493.00000000, 16.00000000};
    l_U45 = {1367, 192, 28};
    l_U48 = {-107.00000000, 761.00000000, 15.00000000};
    l_U51 = {-121.00000000, 773.00000000, 35.00000000};
    l_U54 = {-97.00000000, 878.00000000, 15.00000000};
    l_U57 = {-962.00000000, 893.00000000, 14.00000000};
    l_U60 = {597.00000000, 1400.00000000, 12.00000000};
    l_U63 = {-126.00000000, 1500.00000000, 23.00000000};
    l_U66 = {1283, 400, 23};
    l_U69 = {-1141.60400000, -374.96160000, 4.08170000};
    l_U72 = {2394.49600000, 175.89900000, 5.85800000};
    l_U75 = {-1247.55500000, 101.29700000, 6.71770000};
    l_U78 = {-972.04000000, 1887.50300000, 23.09600000};
    l_U81 = {64296, 1072, 20};
    l_U84 = {64323, 1096, 25};
    l_U87 = {1144, 1669, 17};
    l_U90 = {64913, 1207, 6};
    l_U93 = {-1739.42000000, 328.74000000, 26.75000000};
    l_U96 = {619.01590000, 1478.10600000, 11.29510000};
    l_U99 = {1219.23300000, 1440.89200000, 16.97000000};
    l_U122 = 0;
    l_U123 = 0;
    l_U124 = 0;
    l_U125 = 1;
    l_U126 = -1;
    l_U127 = "GARAGE_DOOR_BIG";
    l_U128 = 1000;
    l_U3 = {l_U130._fU4[0]};
    sub_744();
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U2)
            {
                case 0:
                if (TIMERA() > l_U128)
                {
                    sub_2085();
                    SETTIMERA( 0 );
                }
                break;
                case 1: break;
                case 2: break;
            }
        }
        else
        {
            sub_10068();
        }
    }
    return;
}

void sub_744()
{
    float fVar2;

    fVar2 = VDIST( l_U3, l_U6 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 0;
    }
    fVar2 = VDIST( l_U3, l_U9 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 1;
    }
    fVar2 = VDIST( l_U3, l_U12 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 2;
    }
    fVar2 = VDIST( l_U3, l_U15 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 3;
    }
    fVar2 = VDIST( l_U3, l_U21 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 5;
    }
    fVar2 = VDIST( l_U3, l_U18 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 4;
    }
    fVar2 = VDIST( l_U3, l_U24 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 6;
    }
    fVar2 = VDIST( l_U3, l_U27 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 7;
    }
    fVar2 = VDIST( l_U3, l_U30 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 8;
    }
    fVar2 = VDIST( l_U3, l_U33 );
    if (fVar2 < 5.00000000)
    {
        l_U128 = 50;
        l_U118 = 9;
    }
    fVar2 = VDIST( l_U3, l_U36 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 10;
    }
    fVar2 = VDIST( l_U3, l_U39 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 11;
    }
    fVar2 = VDIST( l_U3, l_U42 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 12;
    }
    fVar2 = VDIST( l_U3, l_U45 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 13;
    }
    fVar2 = VDIST( l_U3, l_U48 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 14;
    }
    fVar2 = VDIST( l_U3, l_U51 );
    if (fVar2 < 5.00000000)
    {
        l_U128 = 50;
        l_U118 = 15;
    }
    fVar2 = VDIST( l_U3, l_U54 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 16;
    }
    fVar2 = VDIST( l_U3, l_U57 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 17;
    }
    fVar2 = VDIST( l_U3, l_U60 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 18;
    }
    fVar2 = VDIST( l_U3, l_U63 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 19;
    }
    fVar2 = VDIST( l_U3, l_U66 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 20;
    }
    fVar2 = VDIST( l_U3, l_U69 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 21;
    }
    fVar2 = VDIST( l_U3, l_U72 );
    if (fVar2 < 5.00000000)
    {
        l_U128 = 50;
        l_U118 = 22;
    }
    fVar2 = VDIST( l_U3, l_U75 );
    if (fVar2 < 5.00000000)
    {
        l_U128 = 50;
        l_U118 = 23;
    }
    fVar2 = VDIST( l_U3, l_U78 );
    if (fVar2 < 5.00000000)
    {
        l_U128 = 50;
        l_U118 = 24;
    }
    fVar2 = VDIST( l_U3, l_U81 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 25;
    }
    fVar2 = VDIST( l_U3, l_U84 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 26;
    }
    fVar2 = VDIST( l_U3, l_U87 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 27;
    }
    fVar2 = VDIST( l_U3, l_U90 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 28;
    }
    fVar2 = VDIST( l_U3, l_U93 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 29;
    }
    fVar2 = VDIST( l_U3, l_U96 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 30;
    }
    fVar2 = VDIST( l_U3, l_U99 );
    if (fVar2 < 5.00000000)
    {
        l_U118 = 31;
    }
    return;
}

void sub_2085()
{
    int I;

    switch (l_U118)
    {
        case 0:
        if (sub_2362())
        {
            l_U102[0] = {-1455.00000000, 561.00000000, 30.00000000};
            l_U102[1] = {-1453.00000000, 572.00000000, 30.00000000};
            l_U102[2] = {-1422.00000000, 577.00000000, 26.00000000};
            l_U102[3] = {-1395.00000000, 588.00000000, 26.00000000};
            l_U102[4] = {-1436.00000000, 595.00000000, 33.00000000};
            for ( I = 0; I < 5; I++ )
            {
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[I]._fU0, l_U102[I]._fU4, l_U102[I]._fU8, 1.50000000, 807349477 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U102[I], 1, 0.00000000 );
                }
            }
        }
        break;
        case 1:
        if (sub_2625())
        {
            l_U102[0] = {l_U9};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, 807349477 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U102[0], 1, 0.00000000 );
            }
        }
        break;
        case 2:
        sub_2768( "iRomansApartment" );
        sub_2768( "\n" );
        if (sub_2794())
        {
            sub_2768( "HAS_ROMANS_APARTMENT_BURNED_DOWN()" );
            sub_2768( "\n" );
            if (g_U38718 == 0)
            {
                SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, -1334627284, 180309935 );
                SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, 483863024, -375500503 );
                g_U38718 = 1;
            }
            l_U102[0] = {l_U12};
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -2113580896, l_U102[0], 1, 0.00000000 );
        }
        else
        {
            sub_2768( "IF NOT HAS_ROMANS_APARTMENT_BURNED_DOWN()" );
            sub_2768( "\n" );
            if (NOT sub_3097())
            {
                l_U102[0] = {l_U12};
                if (g_U38718)
                {
                    sub_2768( "bRoman11ApartmentBurned" );
                    sub_2768( "\n" );
                    GET_GAME_VIEWPORT_ID( ref l_U129 );
                    if (NOT (CAM_IS_SPHERE_VISIBLE( l_U129, 896.52000000, -502.84000000, 19.48000000, 75.00000000 )))
                    {
                        sub_2768( "IF NOT CAM_IS_SPHERE_VISIBLE" );
                        sub_2768( "\n" );
                        SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, 180309935, -1334627284 );
                        SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, -375500503, 483863024 );
                        g_U38718 = 0;
                    }
                }
                else
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -2113580896, l_U102[0], 1, 0.00000000 );
                }
            }
        }
        break;
        case 3:
        if (l_U123 == 0)
        {
            if (sub_3418())
            {
                l_U102[0] = {l_U15};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, 419786306 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, l_U102[0], 1, 0.00000000 );
                }
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 4:
        if (l_U123 == 0)
        {
            if (sub_3565())
            {
                l_U102[0] = {l_U18};
                l_U102[1] = {850.80000000, -517.80000000, 16.50000000};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, -1452339441 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U102[0], 1, 0.00000000 );
                }
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[1]._fU0, l_U102[1]._fU4, l_U102[1]._fU8, 1.50000000, 257820338 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, l_U102[1], 1, 0.00000000 );
                }
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 5:
        if (l_U123 == 0)
        {
            if (sub_3816())
            {
                l_U102[0] = {l_U21};
                l_U102[1] = {-28.00000000, -466.00000000, 16.00000000};
                l_U102[2] = {-28.00000000, -467.00000000, 16.00000000};
                l_U102[3] = {-28.00000000, -470.00000000, 16.00000000};
                if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[3]._fU0, l_U102[3]._fU4, l_U102[3]._fU8, 1.50000000, 866127123 )) AND ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[2]._fU0, l_U102[2]._fU4, l_U102[2]._fU8, 1.50000000, -431164822 )) AND ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[1]._fU0, l_U102[1]._fU4, l_U102[1]._fU8, 1.50000000, 866127123 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, -431164822 )))))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, l_U102[0], 1, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, l_U102[1], 1, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, l_U102[2], 1, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, l_U102[3], 1, 0.00000000 );
                    l_U123 = 1;
                }
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 6:
        if (l_U123 == 0)
        {
            if (sub_4304())
            {
                l_U102[0] = {l_U24};
                l_U102[1] = {-1246.00000000, 1560.00000000, 26.00000000};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, -1452339441 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U102[0], 1, 0.00000000 );
                }
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[1]._fU0, l_U102[1]._fU4, l_U102[1]._fU8, 1.50000000, -1452339441 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U102[1], 1, 0.00000000 );
                }
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 7:
        if (sub_4543())
        {
            l_U102[0] = {l_U27};
            l_U102[1] = {-160.00000000, 593.00000000, 119.00000000};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, -223135715 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, l_U102[0], 1, 0.00000000 );
            }
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[1]._fU0, l_U102[1]._fU4, l_U102[1]._fU8, 1.50000000, -223135715 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, l_U102[1], 1, 0.00000000 );
            }
        }
        break;
        case 8:
        if (l_U123 == 0)
        {
            if (sub_4783())
            {
                l_U102[0] = {l_U30};
                l_U102[1] = {76, 64857, 15};
                l_U102[2] = {79, 64824, 5};
                l_U102[3] = {71, 64822, 5};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -308312378, 95, 64854, 15, 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 487482787, 95, 64851, 15, 1, 0.00000000 );
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 9:
        if (l_U123 == 0)
        {
            if (sub_4964())
            {
                if (NOT l_U122)
                {
                    l_U102[0] = {l_U33};
                    l_U119 = 90.00000000;
                    REQUEST_MODEL( 639246688 );
                    if (HAS_MODEL_LOADED( 639246688 ))
                    {
                        CREATE_OBJECT_NO_OFFSET( 639246688, l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, ref g_U10450, 1 );
                        SET_OBJECT_HEADING( g_U10450, l_U119 );
                        SET_OBJECT_DYNAMIC( g_U10450, 0 );
                        FREEZE_OBJECT_POSITION( g_U10450, 1 );
                        l_U128 = 1000;
                        l_U122 = 1;
                    }
                }
            }
            else
            {
                l_U123 = 1;
            }
        }
        if (g_U10497)
        {
            if (NOT g_U10498)
            {
                g_U10498 = 1;
            }
        }
        break;
        case 30:
        if (sub_2794())
        {
            if (g_U10458 == 0)
            {
                SWAP_NEAREST_BUILDING_MODEL( l_U96._fU0, l_U96._fU4, l_U96._fU8, 50.00000000, 1842437520, 630869279 );
                SWAP_NEAREST_BUILDING_MODEL( l_U96._fU0, l_U96._fU4, l_U96._fU8, 50.00000000, 352782722, -529948407 );
                SWAP_NEAREST_BUILDING_MODEL( l_U96._fU0, l_U96._fU4, l_U96._fU8, 50.00000000, 1868454720, -304910528 );
                g_U10458 = 1;
            }
        }
        break;
        case 10:
        if (sub_2794())
        {
            if (g_U38719 == 0)
            {
                SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, 1351182523, 584045690 );
                SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, 829551370, -100463043 );
                g_U38719 = 1;
            }
        }
        else if (NOT sub_3097())
        {
            if (g_U38719)
            {
                GET_GAME_VIEWPORT_ID( ref l_U129 );
                if (NOT (CAM_IS_SPHERE_VISIBLE( l_U129, 822.56290000, -270.34200000, 15.61570000, 75.00000000 )))
                {
                    SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, 584045690, 1351182523 );
                    SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, -100463043, 829551370 );
                    g_U38719 = 0;
                }
            }
        }
        if (l_U123 == 0)
        {
            l_U102[1] = {815, 65278, 16};
            l_U102[2] = {821, 65271, 16};
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 693041505, 815, 65278, 16, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 693041505, 821, 65271, 16, 1, 0.00000000 );
            l_U123 = 1;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            l_U123 = 0;
        }
        break;
        case 11:
        if (l_U123 == 0)
        {
            if (sub_5787())
            {
                l_U102[0] = {l_U39};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, 804737190 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 804737190, l_U102[0], 1, 0.00000000 );
                }
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 12:
        if (l_U123 == 0)
        {
            if (sub_5936())
            {
                l_U102[0] = {l_U42};
                l_U102[1] = {928, 65047, 16};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, l_U102[0], 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, l_U102[1], 1, 0.00000000 );
                l_U123 = 1;
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 13:
        if (l_U123 == 0)
        {
            if (sub_6085())
            {
                l_U102[0] = {l_U45};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U102[0], 1, 0.00000000 );
            }
            else
            {
                l_U102[0] = {l_U45};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U102[0], 0, 0.00000000 );
                l_U123 = 1;
            }
        }
        break;
        case 14:
        l_U102[0] = {-107.46060000, 762.67580000, 15.94530000};
        l_U119 = 0.00000000;
        if (l_U123 == 0)
        {
            if (sub_6285())
            {
                if (NOT l_U122)
                {
                    REQUEST_MODEL( 2030256269 );
                    if (HAS_MODEL_LOADED( 2030256269 ))
                    {
                        CREATE_OBJECT_NO_OFFSET( 2030256269, l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, ref l_U120, 1 );
                        SET_OBJECT_COORDINATES( l_U120, l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8 );
                        SET_OBJECT_HEADING( l_U120, l_U119 );
                        SET_OBJECT_DYNAMIC( l_U120, 0 );
                        FREEZE_OBJECT_POSITION( l_U120, 1 );
                        l_U122 = 1;
                    }
                }
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 15:
        l_U102[0] = {-123.71500000, 771.99000000, 35.02700000};
        l_U119 = 0.00000000;
        if (l_U123 == 0)
        {
            if (sub_6553())
            {
                if (NOT l_U122)
                {
                    REQUEST_MODEL( 1312423945 );
                    if (HAS_MODEL_LOADED( 1312423945 ))
                    {
                        CLEAR_AREA( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 10.00000000, 1 );
                        CREATE_OBJECT_NO_OFFSET( 1312423945, l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, ref l_U120, 1 );
                        SET_OBJECT_COORDINATES( l_U120, l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8 );
                        SET_OBJECT_HEADING( l_U120, l_U119 );
                        SET_OBJECT_DYNAMIC( l_U120, 0 );
                        FREEZE_OBJECT_POSITION( l_U120, 1 );
                        l_U128 = 1000;
                        l_U122 = 1;
                    }
                }
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 16:
        if (l_U123 == 0)
        {
            if (sub_6837())
            {
                if (NOT (IS_CHAR_INJURED( sub_6920() )))
                {
                    if (NOT (sub_6979( sub_6920() )))
                    {
                        l_U102[0] = {65439, 878, 15};
                        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, 419786306 ))
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, l_U102[0], 1, 0.00000000 );
                        }
                    }
                    else
                    {
                        l_U123 = 1;
                    }
                }
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 17:
        if (l_U123 == 0)
        {
            l_U102[0] = {64572, 893, 14};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, 2124429686 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 2124429686, l_U102[0], 1, 0.00000000 );
                l_U123 = 1;
            }
        }
        break;
        case 18:
        if (l_U123 == 0)
        {
            l_U102[0] = {597, 1400, 12};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, 261592072 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 261592072, l_U102[0], 1, 0.00000000 );
                l_U123 = 1;
            }
        }
        break;
        case 19:
        if (l_U123 == 0)
        {
            if (sub_7647())
            {
                l_U102[0] = {l_U63};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1033979537, l_U102[0], 1, 0.00000000 );
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 20:
        if (l_U123 == 0)
        {
            if (sub_7744())
            {
                l_U102[0] = {l_U66};
                l_U102[1] = {1286, 400, 23};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, 1135556036 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, l_U102[0], 1, 0.00000000 );
                }
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[1]._fU0, l_U102[1]._fU4, l_U102[1]._fU8, 1.50000000, -842872319 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, l_U102[1], 1, 0.00000000 );
                }
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 21:
        if (l_U123 == 0)
        {
            if (sub_7991())
            {
                if (NOT l_U122)
                {
                    REQUEST_MODEL( 1206834384 );
                    REQUEST_MODEL( -1714620273 );
                    if ((HAS_MODEL_LOADED( -1714620273 )) AND (HAS_MODEL_LOADED( 1206834384 )))
                    {
                        CREATE_OBJECT_NO_OFFSET( 1206834384, -1140.93600000, -371.51600000, 3.84000000, ref l_U120, 1 );
                        SET_OBJECT_HEADING( l_U120, 270.00000000 );
                        SET_OBJECT_DYNAMIC( l_U120, 0 );
                        FREEZE_OBJECT_POSITION( l_U120, 1 );
                        CREATE_OBJECT_NO_OFFSET( -1714620273, -1140.93600000, -378.05100000, 3.84000000, ref l_U121, 1 );
                        SET_OBJECT_HEADING( l_U121, 270.00000000 );
                        SET_OBJECT_DYNAMIC( l_U121, 0 );
                        FREEZE_OBJECT_POSITION( l_U121, 1 );
                        l_U128 = 1000;
                        l_U122 = 1;
                    }
                }
            }
        }
        break;
        case 22:
        l_U102[0] = {2394.49600000, 175.89900000, 5.85800000};
        if (l_U123 == 0)
        {
            if (NOT l_U122)
            {
                REQUEST_MODEL( 223915744 );
                if (HAS_MODEL_LOADED( 223915744 ))
                {
                    CREATE_OBJECT_NO_OFFSET( 223915744, l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, ref l_U120, 1 );
                    SET_OBJECT_ROTATION( l_U120, 0.00000000, 235.00000000, 240.37500000 );
                    SET_OBJECT_DYNAMIC( l_U120, 0 );
                    FREEZE_OBJECT_POSITION( l_U120, 1 );
                    l_U128 = 1000;
                    l_U122 = 1;
                }
            }
        }
        break;
        case 23:
        l_U102[0] = {l_U75};
        if (l_U123 == 0)
        {
            if (sub_8532())
            {
                if (NOT l_U122)
                {
                    REQUEST_MODEL( -886672815 );
                    if (HAS_MODEL_LOADED( -886672815 ))
                    {
                        CREATE_OBJECT_NO_OFFSET( -886672815, l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, ref l_U120, 1 );
                        SET_OBJECT_HEADING( l_U120, 0.00000000 );
                        SET_OBJECT_DYNAMIC( l_U120, 0 );
                        FREEZE_OBJECT_POSITION( l_U120, 1 );
                        l_U128 = 1000;
                        l_U122 = 1;
                    }
                }
            }
        }
        break;
        case 24:
        l_U102[0] = {l_U3};
        l_U102[1] = {-966.65200000, 1887.50300000, 23.09600000};
        l_U119 = 0.00000000;
        if (l_U123 == 0)
        {
            if (sub_8768())
            {
                if (NOT l_U122)
                {
                    REQUEST_MODEL( 185750165 );
                    if (HAS_MODEL_LOADED( 185750165 ))
                    {
                        CREATE_OBJECT_NO_OFFSET( 185750165, l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, ref l_U120, 1 );
                        SET_OBJECT_COORDINATES( l_U120, l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8 );
                        SET_OBJECT_HEADING( l_U120, l_U119 );
                        SET_OBJECT_DYNAMIC( l_U120, 0 );
                        FREEZE_OBJECT_POSITION( l_U120, 1 );
                        CREATE_OBJECT_NO_OFFSET( 185750165, l_U102[1]._fU0, l_U102[1]._fU4, l_U102[1]._fU8, ref l_U121, 1 );
                        SET_OBJECT_COORDINATES( l_U121, l_U102[1]._fU0, l_U102[1]._fU4, l_U102[1]._fU8 );
                        SET_OBJECT_HEADING( l_U121, l_U119 );
                        SET_OBJECT_DYNAMIC( l_U121, 0 );
                        FREEZE_OBJECT_POSITION( l_U121, 1 );
                        l_U128 = 1000;
                        l_U122 = 1;
                    }
                }
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 25:
        if (l_U123 == 0)
        {
            if (sub_9141())
            {
                l_U102[0] = {64296, 1072, 20};
                l_U102[1] = {64293, 1074, 20};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -269541707, l_U102[0], 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -269541707, l_U102[1], 1, 0.00000000 );
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 26:
        if (l_U123 == 0)
        {
            if (sub_9141())
            {
                l_U102[2] = {64323, 1096, 25};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U102[2], 1, 0.00000000 );
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 27:
        if (NOT sub_9360())
        {
            l_U102[0] = {1143, 1670, 17};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, 1.50000000, -1413798865 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, l_U102[0], 1, 0.00000000 );
            }
        }
        break;
        case 28:
        if (l_U123 == 0)
        {
            if (sub_9503())
            {
                l_U102[0] = {l_U90};
                l_U102[1] = {64909, 1207, 6};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1292729623, l_U102[0], 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 566666890, l_U102[1], 1, 0.00000000 );
            }
            else
            {
                l_U123 = 1;
            }
        }
        break;
        case 29:
        if (l_U123 == 0)
        {
            if (NOT l_U122)
            {
                l_U102[0] = {l_U93};
                l_U119 = 60.00000000;
                REQUEST_MODEL( -366960778 );
                if (HAS_MODEL_LOADED( -366960778 ))
                {
                    CREATE_OBJECT_NO_OFFSET( -366960778, l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, ref g_U10451, 1 );
                    SET_OBJECT_HEADING( g_U10451, l_U119 );
                    SET_OBJECT_DYNAMIC( g_U10451, 0 );
                    FREEZE_OBJECT_POSITION( g_U10451, 1 );
                    l_U128 = 1000;
                    l_U122 = 1;
                }
            }
        }
        break;
        case 31:
        if (l_U123 == 0)
        {
            if (NOT l_U122)
            {
                l_U102[0] = {l_U99};
                l_U119 = 90.00000000;
                REQUEST_MODEL( -1413798865 );
                if (HAS_MODEL_LOADED( -1413798865 ))
                {
                    CREATE_OBJECT_NO_OFFSET( -1413798865, l_U102[0]._fU0, l_U102[0]._fU4, l_U102[0]._fU8, ref l_U120, 1 );
                    SET_OBJECT_HEADING( l_U120, l_U119 );
                    SET_OBJECT_DYNAMIC( l_U120, 0 );
                    FREEZE_OBJECT_POSITION( l_U120, 1 );
                    l_U128 = 1000;
                    l_U122 = 1;
                }
            }
        }
        break;
    }
    return;
}

void sub_2362()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_2625()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_2768(unknown uParam0)
{
    return;
}

void sub_2794()
{
    int Result;

    Result = 1;
    if (g_U15728[7])
    {
        Result = 1;
    }
    else
    {
        Result = 0;
    }
    return Result;
}

void sub_3097()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_3418()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_3565()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_3816()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "e1endcredits" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_4304()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_4543()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_4783()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_4964()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_5787()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_5936()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_6085()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Billy5" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_6285()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_6553()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_6837()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Ray2" )) >= 1)
    {
        Result = 0;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "e1endcredits" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_6920()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_6979(unknown uParam0)
{
    if ((sub_7005( uParam0, "Museum2_loading" )) || ((sub_7005( uParam0, "Museum2_store" )) || ((sub_7005( uParam0, "Museum2_exit" )) || ((sub_7005( uParam0, "Museum2_entrance" )) || ((sub_7005( uParam0, "Museum2_display2" )) || ((sub_7005( uParam0, "Museum2_display1" )) || ((sub_7005( uParam0, "Museum2_jugs" )) || ((sub_7005( uParam0, "Museum2_Hall" )) || (sub_7005( uParam0, "Museum2_back" ))))))))))
    {
        return 1;
    }
    return 0;
}

boolean sub_7005(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

void sub_7647()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_7744()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_7991()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "stubbs2" )) >= 1)
    {
        Result = 0;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "stubbs4" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_8532()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_8768()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_9141()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_9360()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_9503()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "billy4" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_10068()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

