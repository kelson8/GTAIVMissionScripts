void main()
{
    l_U0 = 0;
    l_U2 = -1986413657;
    l_U36 = 148777611;
    l_U50 = -183203150;
    l_U115 = -1;
    l_U116 = -1;
    l_U122 = -344943009;
    l_U129 = -1;
    l_U89 = {l_U131._fU4[0]};
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (IS_PLAYER_PLAYING( sub_112() ))
            {
                if (NOT g_U10978)
                {
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_112(), 0 )))
                    {
                        if (sub_185())
                        {
                            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambHomelandCordon" )) == 1)
                            {
                                switch (l_U0)
                                {
                                    case 0:
                                    if (sub_338())
                                    {
                                        sub_548();
                                        l_U0 = 1;
                                    }
                                    break;
                                    case 1:
                                    if (IS_WANTED_LEVEL_GREATER( sub_112(), 0 ))
                                    {
                                        sub_4833();
                                    }
                                    break;
                                    case 2: break;
                                }
                            }
                            else
                            {
                                sub_4833();
                            }
                        }
                    }
                }
            }
        }
        else
        {
            sub_4833();
        }
    }
    return;
}

void sub_112()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_185()
{
    if (l_U129 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref l_U129 );
        if (l_U129 == 0)
        {
            return 1;
        }
    }
    else if (l_U129 == 0)
    {
        return 1;
    }
    return 0;
}

int sub_338()
{
    REQUEST_MODEL( l_U2 );
    REQUEST_MODEL( l_U122 );
    if ((HAS_MODEL_LOADED( l_U122 )) AND ((HAS_MODEL_LOADED( sub_432() )) AND ((HAS_MODEL_LOADED( sub_379() )) AND (HAS_MODEL_LOADED( l_U2 )))))
    {
        return 1;
    }
    else
    {
        REQUEST_MODEL( l_U2 );
        REQUEST_MODEL( l_U122 );
    }
    return 0;
}

void sub_379()
{
    if (l_U36 == 0)
    {
        GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U36 );
    }
    return l_U36;
}

void sub_432()
{
    if (l_U50 == 0)
    {
        GET_CURRENT_BASIC_COP_MODEL( ref l_U50 );
    }
    return l_U50;
}

void sub_548()
{
    if (l_U115 > -1)
    {
        switch (l_U115)
        {
            case 0:
            l_U10[0] = {-28.98790000, 539.46250000, 13.56050000};
            l_U29[0] = 90.00000000;
            l_U10[1] = {-28.68790000, 543.61250000, 13.66050000};
            l_U29[1] = 93.00000000;
            l_U10[2] = {-28.53890000, 547.55670000, 13.67650000};
            l_U29[2] = 84.00000000;
            l_U10[3] = {25.74230000, 547.85430000, 13.50770000};
            l_U29[3] = 261.00000000;
            l_U10[4] = {25.61900000, 543.97970000, 13.67990000};
            l_U29[4] = 279.00000000;
            l_U10[5] = {25.63190000, 539.92380000, 13.63570000};
            l_U29[5] = 259.00000000;
            l_U93 = 45.00000000;
            l_U40[0] = {-23.25650000, 544.70130000, 13.40550000};
            l_U47[0] = 133.16690000;
            l_U40[1] = {17.21340000, 543.87590000, 13.40540000};
            l_U47[1] = 335.71880000;
            l_U58[2] = {26.29200000, 542.41790000, 13.64700000};
            l_U77[2] = 302.68170000;
            l_U58[3] = {14.35110000, 545.18960000, 13.67660000};
            l_U77[3] = 274.23990000;
            l_U58[4] = {-30.14720000, 534.38430000, 13.65770000};
            l_U77[4] = 113.51650000;
            l_U58[5] = {-26.45290000, 543.42600000, 13.70460000};
            l_U77[5] = 281.91940000;
            l_U118 = {-4.96770000, 542.94840000, 14.40710000};
            l_U121 = 30.80550000;
            for ( l_U88 = 0; l_U88 < 2; l_U88++ )
            {
                CREATE_CAR( l_U36, l_U40[l_U88]._fU0, l_U40[l_U88]._fU4, l_U40[l_U88]._fU8, ref l_U37[l_U88], 1 );
                SET_CAR_HEADING( l_U37[l_U88], l_U47[l_U88] );
                SWITCH_CAR_SIREN( l_U37[l_U88], 1 );
                CREATE_CHAR_INSIDE_CAR( l_U37[l_U88], 6, l_U50, ref l_U51[l_U88] );
                SET_INFORM_RESPECTED_FRIENDS( l_U51[l_U88], 999, 999 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U51[l_U88] );
                sub_1301( l_U37[l_U88] );
            }
            for ( l_U88 = 2; l_U88 <= 5; l_U88++ )
            {
                CREATE_CHAR( 6, l_U50, l_U58[l_U88]._fU0, l_U58[l_U88]._fU4, l_U58[l_U88]._fU8, ref l_U51[l_U88], 1 );
                SET_INFORM_RESPECTED_FRIENDS( l_U51[l_U88], 999, 999 );
                SET_CHAR_HEADING( l_U51[l_U88], l_U77[l_U88] );
                TASK_START_SCENARIO_IN_PLACE( l_U51[l_U88], "Scenario_Bouncer", -1082130432 );
            }
            break;
            case 1:
            l_U10[0] = {39.15000000, 921.44840000, 13.70420000};
            l_U29[0] = 0.00000000;
            l_U10[1] = {36.30000000, 921.24840000, 13.70420000};
            l_U29[1] = 23.00000000;
            l_U10[2] = {43.00000000, 921.74840000, 13.70420000};
            l_U29[2] = 168.00000000;
            l_U10[3] = {43.00000000, 835.54840000, 13.70420000};
            l_U29[3] = 168.00000000;
            l_U10[4] = {39.10000000, 835.54840000, 13.70420000};
            l_U29[4] = 10.00000000;
            l_U10[5] = {36.20000000, 835.54840000, 13.70420000};
            l_U29[5] = 167.00000000;
            l_U93 = 45.00000000;
            l_U40[0] = {39.37370000, 845.79060000, 13.40160000};
            l_U47[0] = 300.65770000;
            l_U40[1] = {39.33570000, 917.78180000, 13.40570000};
            l_U47[1] = 123.97890000;
            l_U58[2] = {32.76350000, 903.43660000, 13.46690000};
            l_U77[2] = 353.05940000;
            l_U58[3] = {45.71270000, 919.44000000, 13.65460000};
            l_U77[3] = 41.90900000;
            l_U58[4] = {38.35150000, 864.59550000, 13.67910000};
            l_U77[4] = 177.76820000;
            l_U58[5] = {32.07280000, 840.94720000, 13.65160000};
            l_U77[5] = 177.36610000;
            l_U118 = {26.72880000, 872.98820000, 12.51350000};
            l_U121 = 133.14100000;
            for ( l_U88 = 0; l_U88 < 2; l_U88++ )
            {
                CREATE_CAR( l_U36, l_U40[l_U88]._fU0, l_U40[l_U88]._fU4, l_U40[l_U88]._fU8, ref l_U37[l_U88], 1 );
                SET_CAR_HEADING( l_U37[l_U88], l_U47[l_U88] );
                SWITCH_CAR_SIREN( l_U37[l_U88], 1 );
                CREATE_CHAR_INSIDE_CAR( l_U37[l_U88], 6, l_U50, ref l_U51[l_U88] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U51[l_U88] );
                sub_1301( l_U37[l_U88] );
            }
            for ( l_U88 = 2; l_U88 <= 5; l_U88++ )
            {
                CREATE_CHAR( 6, l_U50, l_U58[l_U88]._fU0, l_U58[l_U88]._fU4, l_U58[l_U88]._fU8, ref l_U51[l_U88], 1 );
                SET_CHAR_HEADING( l_U51[l_U88], l_U77[l_U88] );
                TASK_START_SCENARIO_IN_PLACE( l_U51[l_U88], "Scenario_Bouncer", -1082130432 );
            }
            break;
            case 2:
            l_U10[0] = {12.70570000, -503.71500000, 13.66190000};
            l_U29[0] = 0.00000000;
            l_U10[1] = {16.40570000, -504.56500000, 13.66190000};
            l_U29[1] = 0.00000000;
            l_U10[2] = {20.40570000, -504.66500000, 13.61190000};
            l_U29[2] = 0.00000000;
            l_U10[3] = {10.61820000, -556.96750000, 13.59220000};
            l_U29[3] = 0.00000000;
            l_U10[4] = {8.16829900, -556.96750000, 13.59220000};
            l_U29[4] = 15.00000000;
            l_U10[5] = {4.36820000, -558.51750000, 13.59220000};
            l_U29[5] = 166.00000000;
            l_U93 = 45.00000000;
            l_U40[0] = {8.37650000, -552.05040000, 13.30320000};
            l_U47[0] = 60.59300000;
            l_U40[1] = {16.93200000, -509.08780000, 13.33720000};
            l_U47[1] = 121.17100000;
            l_U58[2] = {13.88660000, -505.82650000, 13.61200000};
            l_U77[2] = 25.12550000;
            l_U58[3] = {20.13650000, -506.77740000, 13.61200000};
            l_U77[3] = 0.88580000;
            l_U58[4] = {4.55560000, -550.87720000, 13.67470000};
            l_U77[4] = 191.24730000;
            l_U58[5] = {5.33020000, -550.98280000, 13.56180000};
            l_U77[5] = 159.68460000;
            l_U118 = {11.22360000, -527.37650000, 13.37000000};
            l_U121 = 133.14100000;
            for ( l_U88 = 0; l_U88 < 2; l_U88++ )
            {
                CREATE_CAR( l_U36, l_U40[l_U88]._fU0, l_U40[l_U88]._fU4, l_U40[l_U88]._fU8, ref l_U37[l_U88], 1 );
                SET_CAR_HEADING( l_U37[l_U88], l_U47[l_U88] );
                SET_HAS_BEEN_OWNED_BY_PLAYER( l_U37[l_U88], 0 );
                SWITCH_CAR_SIREN( l_U37[l_U88], 1 );
                CREATE_CHAR_INSIDE_CAR( l_U37[l_U88], 6, l_U50, ref l_U51[l_U88] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U51[l_U88] );
                sub_1301( l_U37[l_U88] );
            }
            for ( l_U88 = 2; l_U88 <= 5; l_U88++ )
            {
                CREATE_CHAR( 6, l_U50, l_U58[l_U88]._fU0, l_U58[l_U88]._fU4, l_U58[l_U88]._fU8, ref l_U51[l_U88], 1 );
                SET_CHAR_HEADING( l_U51[l_U88], l_U77[l_U88] );
                TASK_START_SCENARIO_IN_PLACE( l_U51[l_U88], "Scenario_Bouncer", -1082130432 );
            }
            break;
        }
        for ( l_U88 = 0; l_U88 < 6; l_U88++ )
        {
            CLEAR_AREA( l_U10[l_U88]._fU0, l_U10[l_U88]._fU4, l_U10[l_U88]._fU8, 2.00000000, 0 );
        }
        for ( l_U88 = 0; l_U88 < 6; l_U88++ )
        {
            CREATE_OBJECT_NO_OFFSET( l_U2, l_U10[l_U88]._fU0, l_U10[l_U88]._fU4, l_U10[l_U88]._fU8, ref l_U3[l_U88], 1 );
            SET_OBJECT_ROTATION( l_U3[l_U88], 0.00000000, 0.00000000, l_U29[l_U88] );
        }
        sub_3818();
    }
    else
    {
        sub_4299();
    }
    return;
}

void sub_1301(unknown uParam0)
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

void sub_3818()
{
    unknown uVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 1, ref uVar2 );
    l_U116 = uVar2;
    switch (l_U116)
    {
        case 0:
        CREATE_CAR( l_U122, l_U118._fU0, l_U118._fU4, l_U118._fU8, ref l_U117, 1 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 359.00000000, ref l_U121 );
        SET_CAR_HEADING( l_U117, l_U121 );
        OPEN_CAR_DOOR( l_U117, 0 );
        OPEN_CAR_DOOR( l_U117, 1 );
        OPEN_CAR_DOOR( l_U117, 2 );
        OPEN_CAR_DOOR( l_U117, 3 );
        OPEN_CAR_DOOR( l_U117, 4 );
        OPEN_CAR_DOOR( l_U117, 5 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U117, 2.00000000, 2.50000000, 0.00000000, ref l_U58[5]._fU0, ref l_U58[5]._fU4, ref l_U58[5]._fU8 );
        if (NOT (IS_CHAR_INJURED( l_U51[5] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U51[5] );
            SET_CHAR_COORDINATES( l_U51[5], l_U58[5]._fU0, l_U58[5]._fU4, l_U58[5]._fU8 );
            l_U85 = {l_U118 - l_U58[5]};
            GET_HEADING_FROM_VECTOR_2D( l_U85._fU0, l_U85._fU4, ref l_U84 );
            SET_CHAR_HEADING( l_U51[5], l_U84 );
            TASK_START_SCENARIO_IN_PLACE( l_U51[5], "Scenario_InvestigatingCop", -1082130432 );
        }
        break;
        case 1: break;
    }
    return;
}

void sub_4299()
{
    if (NOT l_U130)
    {
        if (TIMERA() > 1000)
        {
            l_U94[0] = {-30.31210000, 543.22150000, 14.70060000};
            l_U94[1] = {27.18980000, 543.42210000, 14.65770000};
            l_U84 = VDIST( l_U89, l_U94[0] );
            if (l_U84 < 5.00000000)
            {
                l_U115 = 0;
            }
            l_U84 = VDIST( l_U89, l_U94[1] );
            if (l_U84 < 5.00000000)
            {
                l_U115 = 0;
            }
            l_U101[0] = {39.39410000, 920.09840000, 14.41220000};
            l_U101[1] = {39.31590000, 833.51480000, 14.40330000};
            l_U84 = VDIST( l_U89, l_U101[0] );
            if (l_U84 < 5.00000000)
            {
                l_U115 = 1;
            }
            l_U84 = VDIST( l_U89, l_U101[1] );
            if (l_U84 < 5.00000000)
            {
                l_U115 = 1;
            }
            l_U108[0] = {8.32420000, -558.97810000, 14.63790000};
            l_U108[1] = {16.62130000, -502.26390000, 14.71050000};
            l_U84 = VDIST( l_U89, l_U108[0] );
            if (l_U84 < 5.00000000)
            {
                l_U115 = 2;
            }
            l_U84 = VDIST( l_U89, l_U108[1] );
            if (l_U84 < 5.00000000)
            {
                l_U115 = 2;
            }
            SETTIMERA( 0 );
            l_U130 = 1;
        }
    }
    return;
}

void sub_4833()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambHomelandCordon" )) == 1)
    {
        if (IS_PLAYER_PLAYING( sub_112() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_112(), 0 )))
            {
                for ( l_U88 = 0; l_U88 < 6; l_U88++ )
                {
                    if (DOES_OBJECT_EXIST( l_U3[l_U88] ))
                    {
                        DELETE_OBJECT( ref l_U3[l_U88] );
                    }
                }
                for ( l_U88 = 0; l_U88 < 2; l_U88++ )
                {
                    if (IS_CAR_DEAD( l_U37[l_U88] ))
                    {
                        DELETE_CAR( ref l_U37[l_U88] );
                    }
                }
            }
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

