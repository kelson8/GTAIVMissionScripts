void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U4 = -1986413657;
    l_U38 = 148777611;
    l_U52 = -183203150;
    l_U117 = -1;
    l_U118 = -1;
    l_U124 = -344943009;
    l_U131 = -1;
    l_U91 = {l_U133._fU4[0]};
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (IS_PLAYER_PLAYING( sub_128() ))
            {
                if (NOT g_U12303)
                {
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_128(), 0 )))
                    {
                        if (sub_201())
                        {
                            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambHomelandCordon" )) == 1)
                            {
                                switch (l_U2)
                                {
                                    case 0:
                                    if (sub_354())
                                    {
                                        sub_564();
                                        l_U2 = 1;
                                    }
                                    break;
                                    case 1:
                                    if (IS_WANTED_LEVEL_GREATER( sub_128(), 0 ))
                                    {
                                        sub_4849();
                                    }
                                    break;
                                    case 2: break;
                                }
                            }
                            else
                            {
                                sub_4849();
                            }
                        }
                    }
                }
            }
        }
        else
        {
            sub_4849();
        }
    }
    return;
}

void sub_128()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_201()
{
    if (l_U131 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref l_U131 );
        if (l_U131 == 0)
        {
            return 1;
        }
    }
    else if (l_U131 == 0)
    {
        return 1;
    }
    return 0;
}

int sub_354()
{
    REQUEST_MODEL( l_U4 );
    REQUEST_MODEL( l_U124 );
    if ((HAS_MODEL_LOADED( l_U124 )) AND ((HAS_MODEL_LOADED( sub_448() )) AND ((HAS_MODEL_LOADED( sub_395() )) AND (HAS_MODEL_LOADED( l_U4 )))))
    {
        return 1;
    }
    else
    {
        REQUEST_MODEL( l_U4 );
        REQUEST_MODEL( l_U124 );
    }
    return 0;
}

void sub_395()
{
    if (l_U38 == 0)
    {
        GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U38 );
    }
    return l_U38;
}

void sub_448()
{
    if (l_U52 == 0)
    {
        GET_CURRENT_BASIC_COP_MODEL( ref l_U52 );
    }
    return l_U52;
}

void sub_564()
{
    if (l_U117 > -1)
    {
        switch (l_U117)
        {
            case 0:
            l_U12[0] = {-28.98790000, 539.46250000, 13.56050000};
            l_U31[0] = 90.00000000;
            l_U12[1] = {-28.68790000, 543.61250000, 13.66050000};
            l_U31[1] = 93.00000000;
            l_U12[2] = {-28.53890000, 547.55670000, 13.67650000};
            l_U31[2] = 84.00000000;
            l_U12[3] = {25.74230000, 547.85430000, 13.50770000};
            l_U31[3] = 261.00000000;
            l_U12[4] = {25.61900000, 543.97970000, 13.67990000};
            l_U31[4] = 279.00000000;
            l_U12[5] = {25.63190000, 539.92380000, 13.63570000};
            l_U31[5] = 259.00000000;
            l_U95 = 45.00000000;
            l_U42[0] = {-23.25650000, 544.70130000, 13.40550000};
            l_U49[0] = 133.16690000;
            l_U42[1] = {17.21340000, 543.87590000, 13.40540000};
            l_U49[1] = 335.71880000;
            l_U60[2] = {26.29200000, 542.41790000, 13.64700000};
            l_U79[2] = 302.68170000;
            l_U60[3] = {14.35110000, 545.18960000, 13.67660000};
            l_U79[3] = 274.23990000;
            l_U60[4] = {-30.14720000, 534.38430000, 13.65770000};
            l_U79[4] = 113.51650000;
            l_U60[5] = {-26.45290000, 543.42600000, 13.70460000};
            l_U79[5] = 281.91940000;
            l_U120 = {-4.96770000, 542.94840000, 14.40710000};
            l_U123 = 30.80550000;
            for ( l_U90 = 0; l_U90 < 2; l_U90++ )
            {
                CREATE_CAR( l_U38, l_U42[l_U90]._fU0, l_U42[l_U90]._fU4, l_U42[l_U90]._fU8, ref l_U39[l_U90], 1 );
                SET_CAR_HEADING( l_U39[l_U90], l_U49[l_U90] );
                SWITCH_CAR_SIREN( l_U39[l_U90], 1 );
                CREATE_CHAR_INSIDE_CAR( l_U39[l_U90], 6, l_U52, ref l_U53[l_U90] );
                SET_INFORM_RESPECTED_FRIENDS( l_U53[l_U90], 999, 999 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U53[l_U90] );
                sub_1317( l_U39[l_U90] );
            }
            for ( l_U90 = 2; l_U90 <= 5; l_U90++ )
            {
                CREATE_CHAR( 6, l_U52, l_U60[l_U90]._fU0, l_U60[l_U90]._fU4, l_U60[l_U90]._fU8, ref l_U53[l_U90], 1 );
                SET_INFORM_RESPECTED_FRIENDS( l_U53[l_U90], 999, 999 );
                SET_CHAR_HEADING( l_U53[l_U90], l_U79[l_U90] );
                TASK_START_SCENARIO_IN_PLACE( l_U53[l_U90], "Scenario_Bouncer", -1082130432 );
            }
            break;
            case 1:
            l_U12[0] = {39.15000000, 921.44840000, 13.70420000};
            l_U31[0] = 0.00000000;
            l_U12[1] = {36.30000000, 921.24840000, 13.70420000};
            l_U31[1] = 23.00000000;
            l_U12[2] = {43.00000000, 921.74840000, 13.70420000};
            l_U31[2] = 168.00000000;
            l_U12[3] = {43.00000000, 835.54840000, 13.70420000};
            l_U31[3] = 168.00000000;
            l_U12[4] = {39.10000000, 835.54840000, 13.70420000};
            l_U31[4] = 10.00000000;
            l_U12[5] = {36.20000000, 835.54840000, 13.70420000};
            l_U31[5] = 167.00000000;
            l_U95 = 45.00000000;
            l_U42[0] = {39.37370000, 845.79060000, 13.40160000};
            l_U49[0] = 300.65770000;
            l_U42[1] = {39.33570000, 917.78180000, 13.40570000};
            l_U49[1] = 123.97890000;
            l_U60[2] = {32.76350000, 903.43660000, 13.46690000};
            l_U79[2] = 353.05940000;
            l_U60[3] = {45.71270000, 919.44000000, 13.65460000};
            l_U79[3] = 41.90900000;
            l_U60[4] = {38.35150000, 864.59550000, 13.67910000};
            l_U79[4] = 177.76820000;
            l_U60[5] = {32.07280000, 840.94720000, 13.65160000};
            l_U79[5] = 177.36610000;
            l_U120 = {26.72880000, 872.98820000, 12.51350000};
            l_U123 = 133.14100000;
            for ( l_U90 = 0; l_U90 < 2; l_U90++ )
            {
                CREATE_CAR( l_U38, l_U42[l_U90]._fU0, l_U42[l_U90]._fU4, l_U42[l_U90]._fU8, ref l_U39[l_U90], 1 );
                SET_CAR_HEADING( l_U39[l_U90], l_U49[l_U90] );
                SWITCH_CAR_SIREN( l_U39[l_U90], 1 );
                CREATE_CHAR_INSIDE_CAR( l_U39[l_U90], 6, l_U52, ref l_U53[l_U90] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U53[l_U90] );
                sub_1317( l_U39[l_U90] );
            }
            for ( l_U90 = 2; l_U90 <= 5; l_U90++ )
            {
                CREATE_CHAR( 6, l_U52, l_U60[l_U90]._fU0, l_U60[l_U90]._fU4, l_U60[l_U90]._fU8, ref l_U53[l_U90], 1 );
                SET_CHAR_HEADING( l_U53[l_U90], l_U79[l_U90] );
                TASK_START_SCENARIO_IN_PLACE( l_U53[l_U90], "Scenario_Bouncer", -1082130432 );
            }
            break;
            case 2:
            l_U12[0] = {12.70570000, -503.71500000, 13.66190000};
            l_U31[0] = 0.00000000;
            l_U12[1] = {16.40570000, -504.56500000, 13.66190000};
            l_U31[1] = 0.00000000;
            l_U12[2] = {20.40570000, -504.66500000, 13.61190000};
            l_U31[2] = 0.00000000;
            l_U12[3] = {10.61820000, -556.96750000, 13.59220000};
            l_U31[3] = 0.00000000;
            l_U12[4] = {8.16829900, -556.96750000, 13.59220000};
            l_U31[4] = 15.00000000;
            l_U12[5] = {4.36820000, -558.51750000, 13.59220000};
            l_U31[5] = 166.00000000;
            l_U95 = 45.00000000;
            l_U42[0] = {8.37650000, -552.05040000, 13.30320000};
            l_U49[0] = 60.59300000;
            l_U42[1] = {16.93200000, -509.08780000, 13.33720000};
            l_U49[1] = 121.17100000;
            l_U60[2] = {13.88660000, -505.82650000, 13.61200000};
            l_U79[2] = 25.12550000;
            l_U60[3] = {20.13650000, -506.77740000, 13.61200000};
            l_U79[3] = 0.88580000;
            l_U60[4] = {4.55560000, -550.87720000, 13.67470000};
            l_U79[4] = 191.24730000;
            l_U60[5] = {5.33020000, -550.98280000, 13.56180000};
            l_U79[5] = 159.68460000;
            l_U120 = {11.22360000, -527.37650000, 13.37000000};
            l_U123 = 133.14100000;
            for ( l_U90 = 0; l_U90 < 2; l_U90++ )
            {
                CREATE_CAR( l_U38, l_U42[l_U90]._fU0, l_U42[l_U90]._fU4, l_U42[l_U90]._fU8, ref l_U39[l_U90], 1 );
                SET_CAR_HEADING( l_U39[l_U90], l_U49[l_U90] );
                SET_HAS_BEEN_OWNED_BY_PLAYER( l_U39[l_U90], 0 );
                SWITCH_CAR_SIREN( l_U39[l_U90], 1 );
                CREATE_CHAR_INSIDE_CAR( l_U39[l_U90], 6, l_U52, ref l_U53[l_U90] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U53[l_U90] );
                sub_1317( l_U39[l_U90] );
            }
            for ( l_U90 = 2; l_U90 <= 5; l_U90++ )
            {
                CREATE_CHAR( 6, l_U52, l_U60[l_U90]._fU0, l_U60[l_U90]._fU4, l_U60[l_U90]._fU8, ref l_U53[l_U90], 1 );
                SET_CHAR_HEADING( l_U53[l_U90], l_U79[l_U90] );
                TASK_START_SCENARIO_IN_PLACE( l_U53[l_U90], "Scenario_Bouncer", -1082130432 );
            }
            break;
        }
        for ( l_U90 = 0; l_U90 < 6; l_U90++ )
        {
            CLEAR_AREA( l_U12[l_U90]._fU0, l_U12[l_U90]._fU4, l_U12[l_U90]._fU8, 2.00000000, 0 );
        }
        for ( l_U90 = 0; l_U90 < 6; l_U90++ )
        {
            CREATE_OBJECT_NO_OFFSET( l_U4, l_U12[l_U90]._fU0, l_U12[l_U90]._fU4, l_U12[l_U90]._fU8, ref l_U5[l_U90], 1 );
            SET_OBJECT_ROTATION( l_U5[l_U90], 0.00000000, 0.00000000, l_U31[l_U90] );
        }
        sub_3834();
    }
    else
    {
        sub_4315();
    }
    return;
}

void sub_1317(unknown uParam0)
{
    int iVar3;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 15, ref iVar3 );
    if (iVar3 == 0)
    {
        OPEN_CAR_DOOR( uParam0, 0 );
    }
    if (iVar3 == 1)
    {
        OPEN_CAR_DOOR( uParam0, 1 );
    }
    if (iVar3 == 2)
    {
        OPEN_CAR_DOOR( uParam0, 2 );
    }
    if (iVar3 == 3)
    {
        OPEN_CAR_DOOR( uParam0, 3 );
    }
    if (iVar3 == 4)
    {
        OPEN_CAR_DOOR( uParam0, 0 );
        OPEN_CAR_DOOR( uParam0, 1 );
    }
    if (iVar3 == 5)
    {
        OPEN_CAR_DOOR( uParam0, 0 );
        OPEN_CAR_DOOR( uParam0, 2 );
    }
    if (iVar3 == 6)
    {
        OPEN_CAR_DOOR( uParam0, 0 );
        OPEN_CAR_DOOR( uParam0, 3 );
    }
    if (iVar3 == 7)
    {
        OPEN_CAR_DOOR( uParam0, 1 );
        OPEN_CAR_DOOR( uParam0, 2 );
    }
    if (iVar3 == 8)
    {
        OPEN_CAR_DOOR( uParam0, 1 );
        OPEN_CAR_DOOR( uParam0, 3 );
    }
    if (iVar3 == 9)
    {
        OPEN_CAR_DOOR( uParam0, 2 );
        OPEN_CAR_DOOR( uParam0, 3 );
    }
    if (iVar3 == 10)
    {
        OPEN_CAR_DOOR( uParam0, 0 );
        OPEN_CAR_DOOR( uParam0, 1 );
        OPEN_CAR_DOOR( uParam0, 2 );
    }
    return;
}

void sub_3834()
{
    unknown uVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 1, ref uVar2 );
    l_U118 = uVar2;
    switch (l_U118)
    {
        case 0:
        CREATE_CAR( l_U124, l_U120._fU0, l_U120._fU4, l_U120._fU8, ref l_U119, 1 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 359.00000000, ref l_U123 );
        SET_CAR_HEADING( l_U119, l_U123 );
        OPEN_CAR_DOOR( l_U119, 0 );
        OPEN_CAR_DOOR( l_U119, 1 );
        OPEN_CAR_DOOR( l_U119, 2 );
        OPEN_CAR_DOOR( l_U119, 3 );
        OPEN_CAR_DOOR( l_U119, 4 );
        OPEN_CAR_DOOR( l_U119, 5 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U119, 2.00000000, 2.50000000, 0.00000000, ref l_U60[5]._fU0, ref l_U60[5]._fU4, ref l_U60[5]._fU8 );
        if (NOT (IS_CHAR_INJURED( l_U53[5] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U53[5] );
            SET_CHAR_COORDINATES( l_U53[5], l_U60[5]._fU0, l_U60[5]._fU4, l_U60[5]._fU8 );
            l_U87 = {l_U120 - l_U60[5]};
            GET_HEADING_FROM_VECTOR_2D( l_U87._fU0, l_U87._fU4, ref l_U86 );
            SET_CHAR_HEADING( l_U53[5], l_U86 );
            TASK_START_SCENARIO_IN_PLACE( l_U53[5], "Scenario_InvestigatingCop", -1082130432 );
        }
        break;
        case 1: break;
    }
    return;
}

void sub_4315()
{
    if (NOT l_U132)
    {
        if (TIMERA() > 1000)
        {
            l_U96[0] = {-30.31210000, 543.22150000, 14.70060000};
            l_U96[1] = {27.18980000, 543.42210000, 14.65770000};
            l_U86 = VDIST( l_U91, l_U96[0] );
            if (l_U86 < 5.00000000)
            {
                l_U117 = 0;
            }
            l_U86 = VDIST( l_U91, l_U96[1] );
            if (l_U86 < 5.00000000)
            {
                l_U117 = 0;
            }
            l_U103[0] = {39.39410000, 920.09840000, 14.41220000};
            l_U103[1] = {39.31590000, 833.51480000, 14.40330000};
            l_U86 = VDIST( l_U91, l_U103[0] );
            if (l_U86 < 5.00000000)
            {
                l_U117 = 1;
            }
            l_U86 = VDIST( l_U91, l_U103[1] );
            if (l_U86 < 5.00000000)
            {
                l_U117 = 1;
            }
            l_U110[0] = {8.32420000, -558.97810000, 14.63790000};
            l_U110[1] = {16.62130000, -502.26390000, 14.71050000};
            l_U86 = VDIST( l_U91, l_U110[0] );
            if (l_U86 < 5.00000000)
            {
                l_U117 = 2;
            }
            l_U86 = VDIST( l_U91, l_U110[1] );
            if (l_U86 < 5.00000000)
            {
                l_U117 = 2;
            }
            SETTIMERA( 0 );
            l_U132 = 1;
        }
    }
    return;
}

void sub_4849()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambHomelandCordon" )) == 1)
    {
        if (IS_PLAYER_PLAYING( sub_128() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_128(), 0 )))
            {
                for ( l_U90 = 0; l_U90 < 6; l_U90++ )
                {
                    if (DOES_OBJECT_EXIST( l_U5[l_U90] ))
                    {
                        DELETE_OBJECT( ref l_U5[l_U90] );
                    }
                }
                for ( l_U90 = 0; l_U90 < 2; l_U90++ )
                {
                    if (IS_CAR_DEAD( l_U39[l_U90] ))
                    {
                        DELETE_CAR( ref l_U39[l_U90] );
                    }
                }
            }
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

