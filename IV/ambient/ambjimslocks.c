// This script seems to auto lock a lot of doors in the game
// https://gtamods.com/wiki/SET_STATE_OF_CLOSEST_DOOR_OF_TYPE

void main()
{
    l_U0 = 0;
    l_U4 = {-1411.96600000, 562.10110000, 19.06230000};
    l_U7 = {1314, 71.00000000, 42.00000000};
    l_U10 = {896.00000000, -504.00000000, 15.00000000};
    l_U13 = {882.00000000, -29.00000000, 29.00000000};
    l_U16 = {865.70000000, -517.80000000, 16.50000000};
    l_U19 = {-28.00000000, -463.00000000, 16.00000000};
    l_U22 = {-1247.00000000, 1540.00000000, 26.00000000};
    l_U25 = {-160.00000000, 591.00000000, 119.00000000};
    l_U28 = {79, 64857, 15};
    l_U31 = {864.32000000, -121.64500000, 7.40000000};
    l_U34 = {811.03300000, -256.69950000, 16.90140000};
    l_U37 = {561.97610000, 1391.62600000, 30.85500000};
    l_U40 = {943.00000000, -493.00000000, 16.00000000};
    l_U43 = {1367, 192, 28};
    l_U46 = {-107.00000000, 761.00000000, 15.00000000};
    l_U49 = {-121.00000000, 773.00000000, 35.00000000};
    l_U52 = {-97.00000000, 878.00000000, 15.00000000};
    l_U55 = {-962.00000000, 893.00000000, 14.00000000};
    l_U58 = {597.00000000, 1400.00000000, 12.00000000};
    l_U61 = {-126.00000000, 1500.00000000, 23.00000000};
    l_U64 = {1283, 400, 23};
    l_U67 = {-1141.60400000, -374.96160000, 4.08170000};
    l_U70 = {2394.49600000, 175.89900000, 5.85800000};
    l_U73 = {-1247.55500000, 101.29700000, 6.71770000};
    l_U76 = {-972.04000000, 1887.50300000, 23.09600000};
    l_U79 = {64296, 1072, 20};
    l_U82 = {64323, 1096, 25};
    l_U85 = {1144, 1669, 17};
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 1;
    l_U112 = -1;
    l_U113 = "GARAGE_DOOR_BIG";
    l_U114 = 1000;
    l_U1 = {l_U116._fU4[0]};
    sub_646();
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U0)
            {
                case 0:
                if (TIMERA() > l_U114)
                {
                    sub_1833();
                    SETTIMERA( 0 );
                }
                break;
                case 1: break;
                case 2: break;
            }
        }
        else
        {
            sub_9326();
        }
    }
    return;
}

void sub_646()
{
    float fVar2;

    fVar2 = VDIST( l_U1, l_U4 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 0;
    }
    fVar2 = VDIST( l_U1, l_U7 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 1;
    }
    fVar2 = VDIST( l_U1, l_U10 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 2;
    }
    fVar2 = VDIST( l_U1, l_U13 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 3;
    }
    fVar2 = VDIST( l_U1, l_U19 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 5;
    }
    fVar2 = VDIST( l_U1, l_U16 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 4;
    }
    fVar2 = VDIST( l_U1, l_U22 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 6;
    }
    fVar2 = VDIST( l_U1, l_U25 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 7;
    }
    fVar2 = VDIST( l_U1, l_U28 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 8;
    }
    fVar2 = VDIST( l_U1, l_U31 );
    if (fVar2 < 5.00000000)
    {
        l_U114 = 50;
        l_U104 = 9;
    }
    fVar2 = VDIST( l_U1, l_U34 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 10;
    }
    fVar2 = VDIST( l_U1, l_U37 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 11;
    }
    fVar2 = VDIST( l_U1, l_U40 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 12;
    }
    fVar2 = VDIST( l_U1, l_U43 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 13;
    }
    fVar2 = VDIST( l_U1, l_U46 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 14;
    }
    fVar2 = VDIST( l_U1, l_U49 );
    if (fVar2 < 5.00000000)
    {
        l_U114 = 50;
        l_U104 = 15;
    }
    fVar2 = VDIST( l_U1, l_U52 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 16;
    }
    fVar2 = VDIST( l_U1, l_U55 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 17;
    }
    fVar2 = VDIST( l_U1, l_U58 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 18;
    }
    fVar2 = VDIST( l_U1, l_U61 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 19;
    }
    fVar2 = VDIST( l_U1, l_U64 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 20;
    }
    fVar2 = VDIST( l_U1, l_U67 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 21;
    }
    fVar2 = VDIST( l_U1, l_U70 );
    if (fVar2 < 5.00000000)
    {
        l_U114 = 50;
        l_U104 = 22;
    }
    fVar2 = VDIST( l_U1, l_U73 );
    if (fVar2 < 5.00000000)
    {
        l_U114 = 50;
        l_U104 = 23;
    }
    fVar2 = VDIST( l_U1, l_U76 );
    if (fVar2 < 5.00000000)
    {
        l_U114 = 50;
        l_U104 = 24;
    }
    fVar2 = VDIST( l_U1, l_U79 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 25;
    }
    fVar2 = VDIST( l_U1, l_U82 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 26;
    }
    fVar2 = VDIST( l_U1, l_U85 );
    if (fVar2 < 5.00000000)
    {
        l_U104 = 27;
    }
    return;
}

void sub_1833()
{
    int I;

    switch (l_U104)
    {
        case 0:
        if (sub_2078())
        {
            l_U88[0] = {-1455.00000000, 561.00000000, 30.00000000};
            l_U88[1] = {-1453.00000000, 572.00000000, 30.00000000};
            l_U88[2] = {-1422.00000000, 577.00000000, 26.00000000};
            l_U88[3] = {-1395.00000000, 588.00000000, 26.00000000};
            l_U88[4] = {-1436.00000000, 595.00000000, 33.00000000};
            for ( I = 0; I < 5; I++ )
            {
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[I]._fU0, l_U88[I]._fU4, l_U88[I]._fU8, 1.50000000, 807349477 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U88[I], 1, 0.00000000 );
                }
            }
        }
        break;
        case 1:
        if (sub_2370())
        {
            l_U88[0] = {l_U7};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, 807349477 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U88[0], 1, 0.00000000 );
            }
        }
        break;
        case 2:
        sub_2539( "iRomansApartment" );
        sub_2539( "\n" );
        if (sub_2565())
        {
            sub_2539( "HAS_ROMANS_APARTMENT_BURNED_DOWN()" );
            sub_2539( "\n" );
            if (g_U64690 == 0)
            {
                SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, -1334627284, 180309935 );
                SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, 483863024, -375500503 );
                g_U64690 = 1;
            }
            l_U88[0] = {l_U10};
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -2113580896, l_U88[0], 1, 0.00000000 );
        }
        else
        {
            sub_2539( "IF NOT HAS_ROMANS_APARTMENT_BURNED_DOWN()" );
            sub_2539( "\n" );
            if ((NOT sub_2920()) AND (NOT sub_2870()))
            {
                l_U88[0] = {l_U10};
                if (g_U64690)
                {
                    sub_2539( "bRoman11ApartmentBurned" );
                    sub_2539( "\n" );
                    GET_GAME_VIEWPORT_ID( ref l_U115 );
                    if (NOT (CAM_IS_SPHERE_VISIBLE( l_U115, 896.52000000, -502.84000000, 19.48000000, 75.00000000 )))
                    {
                        sub_2539( "IF NOT CAM_IS_SPHERE_VISIBLE" );
                        sub_2539( "\n" );
                        SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, 180309935, -1334627284 );
                        SWAP_NEAREST_BUILDING_MODEL( 896.52000000, -502.84000000, 19.48000000, 175.00000000, -375500503, 483863024 );
                        g_U64690 = 0;
                    }
                }
                else
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -2113580896, l_U88[0], 0, 0.00000000 );
                }
            }
        }
        break;
        case 3:
        if (l_U109 == 0)
        {
            if (sub_3268())
            {
                l_U88[0] = {l_U13};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, 419786306 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, l_U88[0], 1, 0.00000000 );
                }
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 4:
        if (l_U109 == 0)
        {
            if (sub_3442())
            {
                l_U88[0] = {l_U16};
                l_U88[1] = {850.80000000, -517.80000000, 16.50000000};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, -1452339441 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U88[0], 1, 0.00000000 );
                }
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[1]._fU0, l_U88[1]._fU4, l_U88[1]._fU8, 1.50000000, 257820338 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, l_U88[1], 1, 0.00000000 );
                }
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 5:
        if (l_U109 == 0)
        {
            if (sub_3750())
            {
                l_U88[0] = {l_U19};
                l_U88[1] = {-28.00000000, -466.00000000, 16.00000000};
                l_U88[2] = {-28.00000000, -467.00000000, 16.00000000};
                l_U88[3] = {-28.00000000, -470.00000000, 16.00000000};
                if ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[3]._fU0, l_U88[3]._fU4, l_U88[3]._fU8, 1.50000000, 866127123 )) AND ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[2]._fU0, l_U88[2]._fU4, l_U88[2]._fU8, 1.50000000, -431164822 )) AND ((DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[1]._fU0, l_U88[1]._fU4, l_U88[1]._fU8, 1.50000000, 866127123 )) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, -431164822 )))))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, l_U88[0], 1, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, l_U88[1], 1, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, l_U88[2], 1, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, l_U88[3], 1, 0.00000000 );
                    l_U109 = 1;
                }
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 6:
        if (l_U109 == 0)
        {
            if (sub_4233())
            {
                l_U88[0] = {l_U22};
                l_U88[1] = {-1246.00000000, 1560.00000000, 26.00000000};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, -1452339441 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U88[0], 1, 0.00000000 );
                }
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[1]._fU0, l_U88[1]._fU4, l_U88[1]._fU8, 1.50000000, -1452339441 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, l_U88[1], 1, 0.00000000 );
                }
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 7:
        if (sub_4500())
        {
            l_U88[0] = {l_U25};
            l_U88[1] = {-160.00000000, 593.00000000, 119.00000000};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, -223135715 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, l_U88[0], 1, 0.00000000 );
            }
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[1]._fU0, l_U88[1]._fU4, l_U88[1]._fU8, 1.50000000, -223135715 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -223135715, l_U88[1], 1, 0.00000000 );
            }
        }
        break;
        case 8:
        if (l_U109 == 0)
        {
            if (sub_4764())
            {
                l_U88[0] = {l_U28};
                l_U88[1] = {76, 64857, 15};
                l_U88[2] = {79, 64824, 5};
                l_U88[3] = {71, 64822, 5};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -308312378, 95, 64854, 15, 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 487482787, 95, 64851, 15, 1, 0.00000000 );
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 9:
        if (l_U109 == 0)
        {
            if (sub_4974())
            {
                if (NOT l_U108)
                {
                    l_U88[0] = {l_U31};
                    l_U105 = 90.00000000;
                    REQUEST_MODEL( 639246688 );
                    if (HAS_MODEL_LOADED( 639246688 ))
                    {
                        CREATE_OBJECT_NO_OFFSET( 639246688, l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, ref g_U9167, 1 );
                        SET_OBJECT_HEADING( g_U9167, l_U105 );
                        SET_OBJECT_DYNAMIC( g_U9167, 0 );
                        FREEZE_OBJECT_POSITION( g_U9167, 1 );
                        l_U114 = 1000;
                        l_U108 = 1;
                    }
                }
            }
            else
            {
                l_U109 = 1;
            }
        }
        if (g_U9200)
        {
            if (NOT g_U9201)
            {
                g_U9201 = 1;
            }
        }
        break;
        case 10:
        if (sub_2565())
        {
            if (g_U64691 == 0)
            {
                SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, 1351182523, 584045690 );
                SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, 829551370, -100463043 );
                g_U64691 = 1;
                SET_TAXI_GARAGE_RADIO_STATE( 0 );
            }
        }
        else if (NOT sub_2870())
        {
            if (g_U64691)
            {
                GET_GAME_VIEWPORT_ID( ref l_U115 );
                if (NOT (CAM_IS_SPHERE_VISIBLE( l_U115, 822.56290000, -270.34200000, 15.61570000, 75.00000000 )))
                {
                    SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, 584045690, 1351182523 );
                    SWAP_NEAREST_BUILDING_MODEL( 822.56290000, -270.34200000, 15.61570000, 75.00000000, -100463043, 829551370 );
                    g_U64691 = 0;
                    SET_TAXI_GARAGE_RADIO_STATE( 1 );
                }
            }
        }
        if (l_U109 == 0)
        {
            l_U88[1] = {815, 65278, 16};
            l_U88[2] = {821, 65271, 16};
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 693041505, 815, 65278, 16, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 693041505, 821, 65271, 16, 1, 0.00000000 );
            l_U109 = 1;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            l_U109 = 0;
        }
        break;
        case 11:
        if (l_U109 == 0)
        {
            if (sub_5649())
            {
                l_U88[0] = {l_U37};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, 804737190 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 804737190, l_U88[0], 1, 0.00000000 );
                }
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 12:
        if (l_U109 == 0)
        {
            if (sub_5824())
            {
                l_U88[0] = {l_U40};
                l_U88[1] = {928, 65047, 16};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, l_U88[0], 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, l_U88[1], 1, 0.00000000 );
                l_U109 = 1;
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 13:
        if (l_U109 == 0)
        {
            if (sub_5999())
            {
                l_U88[0] = {l_U43};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U88[0], 1, 0.00000000 );
            }
            else
            {
                l_U88[0] = {l_U43};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U88[0], 0, 0.00000000 );
                l_U109 = 1;
            }
        }
        break;
        case 14: break;
        case 15:
        l_U88[0] = {-123.71500000, 771.99000000, 35.02700000};
        l_U105 = 0.00000000;
        if (l_U109 == 0)
        {
            if (sub_6208())
            {
                if (NOT l_U108)
                {
                    REQUEST_MODEL( 1312423945 );
                    if (HAS_MODEL_LOADED( 1312423945 ))
                    {
                        CLEAR_AREA( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 10.00000000, 1 );
                        CREATE_OBJECT_NO_OFFSET( 1312423945, l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, ref l_U106, 1 );
                        SET_OBJECT_COORDINATES( l_U106, l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8 );
                        SET_OBJECT_HEADING( l_U106, l_U105 );
                        SET_OBJECT_DYNAMIC( l_U106, 0 );
                        FREEZE_OBJECT_POSITION( l_U106, 1 );
                        l_U114 = 1000;
                        l_U108 = 1;
                    }
                }
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 16:
        if (l_U109 == 0)
        {
            if (sub_6516())
            {
                l_U88[0] = {65439, 878, 15};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, 419786306 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, l_U88[0], 1, 0.00000000 );
                }
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 17:
        if (g_U9943[3]._fU0)
        {
            l_U88[0] = {64574, 893, 14};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, 419786306 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, l_U88[0], 0, 0.00000000 );
                l_U109 = 1;
            }
        }
        else if (l_U109 == 0)
        {
            l_U88[0] = {64574, 893, 14};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, 419786306 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 419786306, l_U88[0], 1, 0.00000000 );
                l_U109 = 1;
            }
        }
        break;
        case 18:
        if (g_U9943[1]._fU0)
        {
            l_U88[0] = {597, 1400, 12};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, 261592072 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 261592072, l_U88[0], 0, 0.00000000 );
                l_U109 = 1;
            }
        }
        else if (l_U109 == 0)
        {
            l_U88[0] = {597, 1400, 12};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, 261592072 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 261592072, l_U88[0], 1, 0.00000000 );
                l_U109 = 1;
            }
        }
        break;
        case 19:
        if (l_U109 == 0)
        {
            if (sub_7183())
            {
                l_U88[0] = {l_U61};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1033979537, l_U88[0], 1, 0.00000000 );
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 20:
        if (l_U109 == 0)
        {
            if (sub_7308())
            {
                l_U88[0] = {l_U64};
                l_U88[1] = {1286, 400, 23};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, 1135556036 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1135556036, l_U88[0], 1, 0.00000000 );
                }
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[1]._fU0, l_U88[1]._fU4, l_U88[1]._fU8, 1.50000000, -842872319 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -842872319, l_U88[1], 1, 0.00000000 );
                }
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 21:
        if (l_U109 == 0)
        {
            if (sub_7580())
            {
                l_U88[0] = {64395, 65164, 4};
                l_U88[1] = {64395, 65158, 4};
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, 880887899 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 880887899, l_U88[0], 1, 0.00000000 );
                    sub_2539( "DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(PRISDOOR02)" );
                    sub_2539( "\n" );
                }
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[1]._fU0, l_U88[1]._fU4, l_U88[1]._fU8, 1.50000000, 641313740 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 641313740, l_U88[1], 1, 0.00000000 );
                    sub_2539( "DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(PRISDOOR03)" );
                    sub_2539( "\n" );
                }
                sub_2539( "IF SHOULD_AMBIENT_PRISON_LOCKS_RUN()" );
                sub_2539( "\n" );
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 22:
        l_U88[0] = {2394.49600000, 175.89900000, 5.85800000};
        if (l_U109 == 0)
        {
            if (NOT l_U108)
            {
                REQUEST_MODEL( 223915744 );
                if (HAS_MODEL_LOADED( 223915744 ))
                {
                    CREATE_OBJECT_NO_OFFSET( 223915744, l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, ref l_U106, 1 );
                    SET_OBJECT_ROTATION( l_U106, 0.00000000, 235.00000000, 240.37500000 );
                    SET_OBJECT_DYNAMIC( l_U106, 0 );
                    FREEZE_OBJECT_POSITION( l_U106, 1 );
                    l_U114 = 1000;
                    l_U108 = 1;
                }
            }
        }
        break;
        case 23:
        l_U88[0] = {l_U73};
        if (l_U109 == 0)
        {
            if (sub_8222())
            {
                if (NOT l_U108)
                {
                    REQUEST_MODEL( -886672815 );
                    if (HAS_MODEL_LOADED( -886672815 ))
                    {
                        CREATE_OBJECT_NO_OFFSET( -886672815, l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, ref l_U106, 1 );
                        SET_OBJECT_HEADING( l_U106, 0.00000000 );
                        SET_OBJECT_DYNAMIC( l_U106, 0 );
                        FREEZE_OBJECT_POSITION( l_U106, 1 );
                        l_U114 = 1000;
                        l_U108 = 1;
                    }
                }
            }
        }
        break;
        case 24:
        l_U88[0] = {l_U1};
        l_U88[1] = {-966.65200000, 1887.50300000, 23.09600000};
        l_U105 = 0.00000000;
        if (l_U109 == 0)
        {
            if (sub_8486())
            {
                if (NOT l_U108)
                {
                    REQUEST_MODEL( 185750165 );
                    if (HAS_MODEL_LOADED( 185750165 ))
                    {
                        CREATE_OBJECT_NO_OFFSET( 185750165, l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, ref l_U106, 1 );
                        SET_OBJECT_COORDINATES( l_U106, l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8 );
                        SET_OBJECT_HEADING( l_U106, l_U105 );
                        SET_OBJECT_DYNAMIC( l_U106, 0 );
                        FREEZE_OBJECT_POSITION( l_U106, 1 );
                        CREATE_OBJECT_NO_OFFSET( 185750165, l_U88[1]._fU0, l_U88[1]._fU4, l_U88[1]._fU8, ref l_U107, 1 );
                        SET_OBJECT_COORDINATES( l_U107, l_U88[1]._fU0, l_U88[1]._fU4, l_U88[1]._fU8 );
                        SET_OBJECT_HEADING( l_U107, l_U105 );
                        SET_OBJECT_DYNAMIC( l_U107, 0 );
                        FREEZE_OBJECT_POSITION( l_U107, 1 );
                        l_U114 = 1000;
                        l_U108 = 1;
                    }
                }
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 25:
        if (l_U109 == 0)
        {
            if (sub_8884())
            {
                l_U88[0] = {64296, 1072, 20};
                l_U88[1] = {64293, 1074, 20};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -269541707, l_U88[0], 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -269541707, l_U88[1], 1, 0.00000000 );
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 26:
        if (l_U109 == 0)
        {
            if (sub_8884())
            {
                l_U88[2] = {64323, 1096, 25};
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, l_U88[2], 1, 0.00000000 );
            }
            else
            {
                l_U109 = 1;
            }
        }
        break;
        case 27:
        if (NOT sub_9132())
        {
            l_U88[0] = {1143, 1670, 17};
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U88[0]._fU0, l_U88[0]._fU4, l_U88[0]._fU8, 1.50000000, -1413798865 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1413798865, l_U88[0], 1, 0.00000000 );
            }
        }
        break;
    }
    return;
}

void sub_2078()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Gambetti3" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_2370()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman6" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_2539(unknown uParam0)
{
    return;
}

void sub_2565()
{
    int Result;

    Result = 1;
    if (g_U15654[33])
    {
        Result = 1;
    }
    else
    {
        Result = 0;
    }
    return Result;
}

void sub_2870()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman11" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_2920()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman1" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_3268()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Brucie1" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_3442()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CIA1" )) >= 1)
    {
        Result = 0;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MultiTutorial" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_3750()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Packie3" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_4233()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Derrick1" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_4500()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Ray6" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_4764()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Francis2b" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_4974()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_5649()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Jacob2" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_5824()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman7" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_5999()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Elizabeta2" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_6208()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Ray4" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_6516()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Ray4" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_7183()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Playboy4" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_7308()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Vlad1" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_7580()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_8222()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Finale1a" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_8486()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Bell7" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_8884()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Gambetti2" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_9132()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Dwayne3" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_9326()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

