void main()
{
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U789 = 1348744438;
    l_U790 = 1376298265;
    l_U791 = -302362397;
    l_U792 = -302362397;
    l_U793 = -1518937979;
    l_U888 = 0;
    l_U889 = 0;
    l_U1030 = {985.65400000, 528.02100000, 23.31600000};
    l_U1033 = {-90.00000000, 0.00000000, 0.00000000};
    l_U1037 = 0;
    l_U1038 = 0;
    l_U1039 = -1;
    l_U1040 = 0;
    l_U1045 = 0;
    l_U1048 = {0.00000000, 0.00000000, 0.00000000};
    l_U1051 = 1;
    l_U1055 = 0;
    l_U1056 = 0;
    l_U1057 = 0;
    l_U1058 = 0;
    l_U1059 = 0;
    l_U1061 = 0;
    l_U1082 = 0;
    l_U1083 = 0;
    l_U1084 = 0;
    l_U1085 = 0;
    l_U1095 = 0;
    l_U1096 = 0;
    l_U1104 = 0;
    l_U1105 = 0;
    l_U1107 = 0;
    l_U1134 = 0;
    l_U1141 = 0;
    l_U1151 = 0;
    l_U1163 = 0;
    l_U1167 = 2;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_399();
        sub_2509();
    }
    while (true)
    {
        WAIT( 0 );
        switch (l_U765)
        {
            case 0:
            sub_4384();
            l_U765 = 1;
            break;
            case 1:
            sub_6779();
            break;
            case 2:
            sub_7199();
            break;
            case 3:
            sub_13120();
            break;
            case 4:
            sub_24280();
            break;
            case 5:
            sub_38959();
            break;
            case 6:
            sub_47305();
            break;
            case 8:
            sub_49858();
            break;
            case 9: break;
        }
        sub_35073();
        sub_50045();
        if (NOT l_U1091)
        {
            sub_50611();
        }
        sub_52589();
        if (l_U879)
        {
            if (NOT l_U1091)
            {
                if (sub_52744())
                {
                    sub_53198();
                }
            }
        }
        if (NOT (IS_CAR_DEAD( l_U824 )))
        {
            GET_CAR_HEALTH( l_U824, ref l_U1028 );
        }
    }
    return;
}

void sub_399()
{
    sub_408();
    return;
}

void sub_408()
{
    int iVar2;

    iVar2 = 20;
    sub_422( iVar2 );
    sub_1598( iVar2 );
    return;
}

void sub_422(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_466();
        sub_627();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_735();
            sub_774();
        }
    }
    sub_850();
    sub_951();
    uVar5 = sub_1064( uParam0 );
    sub_1505( uVar5, 0 );
    return;
}

void sub_466()
{
    sub_480( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_580();
    }
    return;
}

void sub_480(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_580()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_627()
{
    sub_636();
    return;
}

void sub_636()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_735()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_774()
{
    sub_783();
    return;
}

void sub_783()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_850()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_951()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_973();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_973()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1064(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1463( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1463(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1505(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_1598(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1607();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2382();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1607()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1645( 5, g_U569[I] )) == 1))
        {
            if ((sub_1645( 1, g_U569[I] )) != 0)
            {
                sub_1931( I );
            }
        }
    }
    if (NOT sub_2097())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_1645(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_1931(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2016( g_U569 - 1 );
    return;
}

void sub_2016(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2097()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1645( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2382()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_2509()
{
    int I;

    if (DOES_VEHICLE_EXIST( l_U824 ))
    {
        if (NOT (IS_CAR_DEAD( l_U824 )))
        {
            LOCK_CAR_DOORS( l_U824, 1 );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U825[1] ))
    {
        if (NOT (IS_CAR_DEAD( l_U825[1] )))
        {
            LOCK_CAR_DOORS( l_U825[1], 1 );
        }
    }
    FLUSH_SCENARIO_BLOCKING_AREAS();
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "TollBooth" )) == 0)
    {
        if (DOES_OBJECT_EXIST( l_U883 ))
        {
            DELETE_OBJECT( ref l_U883 );
        }
        if (DOES_OBJECT_EXIST( l_U884 ))
        {
            DELETE_OBJECT( ref l_U884 );
        }
        if (DOES_CHAR_EXIST( l_U885 ))
        {
            DELETE_CHAR( ref l_U885 );
        }
    }
    DONT_SUPPRESS_CAR_MODEL( l_U790 );
    DONT_SUPPRESS_CAR_MODEL( l_U789 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -32.20020000, 1270.10600000, 0.00000000, -19.27170000, 1336.54400000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -38.37440000, 1259.49000000, 0.00000000, -29.15100000, 1266.96700000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -23.93870000, 1258.55000000, 0.00000000, 37.00580000, 1267.18000000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -31.50360000, 1258.98400000, 0.00000000, -24.03110000, 1267.44800000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 152.64240000, 1093.91900000, 0.00000000, 138.78010000, 1157.40000000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 46.61090000, 1157.69700000, 0.00000000, 137.85170000, 1165.81800000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -35.44480000, 1256.61500000, 0.00000000, 32.45870000, 1260.28100000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -59.76130000, 1182.38200000, 0.00000000, -51.14890000, 1271.43500000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -48.84150000, 1092.95500000, 0.00000000, -40.25890000, 1158.39900000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -39.59550000, 1156.12800000, 0.00000000, 121.10360000, 1166.09600000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 104.40520000, 1122.86000000, 0.00000000, 115.59650000, 1159.24600000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -46.55910000, 1156.73600000, 0.00000000, -39.86110000, 1164.37700000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 119.58760000, 1015.18400000, 0.00000000, 126.05440000, 1086.46100000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 43.65060000, 1085.54300000, 0.00000000, 121.58270000, 1093.21900000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 126.46850000, 1007.76700000, 0.00000000, 160.17620000, 1013.70700000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 537.34670000, 732.26590000, 0.00000000, 538.86190000, 807.98550000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 574.39110000, 934.62030000, 0.00000000, 580.62770000, 935.00310000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 534.71770000, 781.37580000, 0.00000000, 540.26480000, 787.14290000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 518.71670000, 873.52370000, 0.00000000, 525.93920000, 891.63790000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 538.17950000, 928.77020000, 0.00000000, 545.76350000, 1070.55300000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 958.81620000, 615.59740000, 0.00000000, 1036.56500000, 616.28910000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 967.07060000, 549.09420000, 0.00000000, 1069.80600000, 554.42040000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 962.04790000, 478.44290000, 0.00000000, 1043.95700000, 544.22590000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -52.87170000, 1171.21100000, 0.00000000, -57.30750000, 1178.60500000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 145.33570000, 1014.08100000, 0.00000000, 165.39840000, 1079.56700000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 173.41490000, 1009.56600000, 0.00000000, 176.92830000, 1014.24900000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 173.42700000, 878.06870000, 0.00000000, 177.82980000, 996.78560000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 160.61230000, 1002.84700000, 0.00000000, 165.27580000, 1008.29800000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 960.59480000, 533.75840000, 0.00000000, 968.43860000, 544.73720000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1035.97200000, 474.75360000, 0.00000000, 1056.91300000, 479.26250000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 972.68290000, 495.10790000, 0.00000000, 1000.19600000, 511.93060000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 975.61690000, 504.45120000, 0.00000000, 978.59190000, 519.74870000, 100.00000000 );
    for ( I = 0; I <= 19; I++ )
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U485[I]._fU0._fU0, l_U485[I]._fU0._fU4, l_U485[I]._fU0._fU8, l_U485[I]._fU12._fU0, l_U485[I]._fU12._fU4, l_U485[I]._fU12._fU8 );
    }
    sub_4073();
    SWITCH_MAD_DRIVERS( 1 );
    SET_CREATE_RANDOM_COPS( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_4073()
{
    if (l_U484)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U482 = 0;
    l_U481 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_4384()
{
    SWITCH_MAD_DRIVERS( 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U874 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U877 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U875 );
    LOAD_COMBAT_DECISION_MAKER( 11, ref l_U876 );
    sub_4467( "JIMMY4", 0 );
    sub_4467( "J4AUD", 6 );
    sub_4632( "J4AUD" );
    sub_4795( 0, sub_4746(), "NIKO", 0 );
    CHANGE_GARAGE_TYPE( "QW2MG2", 3 );
    OPEN_GARAGE( "QW2MG2" );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4746(), 0 );
    l_U676[0] = {-27.27360000, 1272.31800000, 20.11310000};
    l_U676[1] = {117.70310000, 1161.89700000, 14.50890000};
    l_U676[2] = {195.66220000, 1005.21300000, 14.52050000};
    l_U676[3] = {469.89990000, 988.98350000, 26.83290000};
    l_U676[4] = {538.64010000, 667.36540000, 20.63850000};
    l_U676[5] = {1033.39500000, 622.62790000, 38.25550000};
    l_U676[6] = {1074.90600000, 512.22080000, 23.01540000};
    l_U676[7] = {989.87400000, 502.34950000, 20.82040000};
    l_U747 = 8;
    l_U606[0] = {-40.07720000, 1266.53700000, 20.16030000};
    l_U606[1] = {-55.26660000, 1238.47300000, 20.23150000};
    l_U606[2] = {-55.32440000, 1194.77100000, 15.94280000};
    l_U606[3] = {-18.69810000, 1161.50400000, 14.56890000};
    l_U606[4] = {112.41640000, 1161.48500000, 14.50830000};
    l_U752 = {13.60560000, 1125.98400000, 10.69720000};
    l_U749 = {-64.55480000, 1136.13600000, 2.67530000};
    l_U766 = {988.06100000, 505.38100000, 20.74000000};
    l_U769 = {11.00000000, 13.00000000, 2.00000000};
    SWITCH_ROADS_OFF( -32.20020000, 1270.10600000, 0.00000000, -19.27170000, 1336.54400000, 100.00000000 );
    SWITCH_ROADS_OFF( -38.37440000, 1259.49000000, 0.00000000, -29.15100000, 1266.96700000, 100.00000000 );
    SWITCH_ROADS_OFF( -23.93870000, 1258.55000000, 0.00000000, 37.00580000, 1267.18000000, 100.00000000 );
    SWITCH_ROADS_OFF( -31.50360000, 1258.98400000, 0.00000000, -24.03110000, 1267.44800000, 100.00000000 );
    SWITCH_ROADS_OFF( 152.64240000, 1093.91900000, 0.00000000, 138.78010000, 1157.40000000, 100.00000000 );
    SWITCH_ROADS_OFF( 46.61090000, 1157.69700000, 0.00000000, 137.85170000, 1165.81800000, 100.00000000 );
    SWITCH_ROADS_OFF( -35.44480000, 1256.61500000, 0.00000000, 32.45870000, 1260.28100000, 100.00000000 );
    SWITCH_ROADS_OFF( -59.76130000, 1182.38200000, 0.00000000, -51.14890000, 1271.43500000, 100.00000000 );
    SWITCH_ROADS_OFF( -48.84150000, 1092.95500000, 0.00000000, -40.25890000, 1158.39900000, 100.00000000 );
    SWITCH_ROADS_OFF( -39.59550000, 1156.12800000, 0.00000000, 121.10360000, 1166.09600000, 100.00000000 );
    SWITCH_ROADS_OFF( 104.40520000, 1122.86000000, 0.00000000, 115.59650000, 1159.24600000, 100.00000000 );
    SWITCH_ROADS_OFF( -46.55910000, 1156.73600000, 0.00000000, -39.86110000, 1164.37700000, 100.00000000 );
    SWITCH_ROADS_OFF( 119.58760000, 1015.18400000, 0.00000000, 126.05440000, 1086.46100000, 100.00000000 );
    SWITCH_ROADS_OFF( 43.65060000, 1085.54300000, 0.00000000, 121.58270000, 1093.21900000, 100.00000000 );
    SWITCH_ROADS_OFF( 126.46850000, 1007.76700000, 0.00000000, 160.17620000, 1013.70700000, 100.00000000 );
    SWITCH_ROADS_OFF( 537.34670000, 732.26590000, 0.00000000, 538.86190000, 807.98550000, 100.00000000 );
    SWITCH_ROADS_OFF( 574.39110000, 934.62030000, 0.00000000, 580.62770000, 935.00310000, 100.00000000 );
    SWITCH_ROADS_OFF( 534.71770000, 781.37580000, 0.00000000, 540.26480000, 787.14290000, 100.00000000 );
    SWITCH_ROADS_OFF( 518.71670000, 873.52370000, 0.00000000, 525.93920000, 891.63790000, 100.00000000 );
    SWITCH_ROADS_OFF( 538.17950000, 928.77020000, 0.00000000, 545.76350000, 1070.55300000, 100.00000000 );
    SWITCH_ROADS_OFF( -52.87170000, 1171.21100000, 0.00000000, -57.30750000, 1178.60500000, 100.00000000 );
    SWITCH_ROADS_OFF( 960.59480000, 533.75840000, 0.00000000, 968.43860000, 544.73720000, 100.00000000 );
    SWITCH_ROADS_OFF( 1035.97200000, 474.75360000, 0.00000000, 1056.91300000, 479.26250000, 100.00000000 );
    SWITCH_ROADS_OFF( 972.68290000, 495.10790000, 0.00000000, 1000.19600000, 511.93060000, 100.00000000 );
    SWITCH_ROADS_OFF( 975.61690000, 504.45120000, 0.00000000, 978.59190000, 519.74870000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 93.64840000, 1120.55200000, 0.00000000, 124.28460000, 1159.48800000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 972.92780000, 502.69850000, 0.00000000, 1016.16000000, 543.06010000, 100.00000000 );
    l_U485[0]._fU0 = {41.33520000, 1164.68300000, 0.00000000};
    l_U485[0]._fU12 = {121.47320000, 1170.08300000, 100.00000000};
    l_U485[1]._fU0 = {121.12940000, 1091.95600000, 0.00000000};
    l_U485[1]._fU12 = {127.05100000, 1164.13400000, 100.00000000};
    l_U485[2]._fU0 = {97.06520000, 1122.58700000, 0.00000000};
    l_U485[2]._fU12 = {121.38740000, 1162.70200000, 100.00000000};
    l_U485[3]._fU0 = {535.84420000, 717.73700000, 0.00000000};
    l_U485[3]._fU12 = {539.53820000, 794.12510000, 100.00000000};
    l_U485[4]._fU0 = {-42.02420000, 1162.57300000, 0.00000000};
    l_U485[4]._fU12 = {36.22440000, 1170.33700000, 100.00000000};
    l_U485[5]._fU0 = {10.38010000, 1127.78500000, 0.00000000};
    l_U485[5]._fU12 = {15.89330000, 1163.42900000, 100.00000000};
    GET_MAX_WANTED_LEVEL( ref l_U755 );
    l_U762 = {-42.56800000, 1336.41900000, 20.20900000};
    return;
}

void sub_4467(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4503())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_4503()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_4632(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4651();
    return;
}

void sub_4651()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_4746()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4795(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4879( "\n PED NUMBER ", uParam0 );
    sub_4919( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4879(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4919(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6779()
{
    switch (l_U1167)
    {
        case 0:
        if (sub_6824())
        {
            if (g_U9893._fU24)
            {
                SET_PLAYER_CONTROL( sub_6920(), 0 );
                START_CUTSCENE_NOW( "J_4" );
                l_U1167 = 1;
            }
            else
            {
                l_U1167 = 2;
            }
        }
        break;
        case 1:
        if (HAS_CUTSCENE_LOADED())
        {
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            l_U1167 = 2;
        }
        break;
        case 2:
        sub_7043();
        SET_CAM_BEHIND_PED( sub_4746() );
        SET_PLAYER_CONTROL( sub_6920(), 1 );
        ADD_BLIP_FOR_COORD( l_U762._fU0, l_U762._fU4, l_U762._fU8, ref l_U761 );
        SET_ROUTE( l_U761, 1 );
        PRINT_NOW( "J4_01", 7500, 1 );
        l_U1167 = 3;
        l_U765 = 2;
        break;
    }
    return;
}

void sub_6824()
{
    return sub_6835( 1, 1 );
}

int sub_6835(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((g_U555 != 9) AND (uParam1))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

void sub_6920()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_7043()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_7199()
{
    int iVar2;

    if (NOT (DOES_VEHICLE_EXIST( l_U824 )))
    {
        if (NOT l_U1150)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), -31.49850000, 1305.14300000, 19.98520000, 500.00000000, 500.00000000, 500.00000000, 0 ))
            {
                sub_7287( 14 );
                REQUEST_MODEL( l_U789 );
                REQUEST_MODEL( l_U790 );
                REQUEST_MODEL( l_U791 );
                l_U1150 = 1;
            }
        }
        else if ((HAS_MODEL_LOADED( l_U791 )) AND ((HAS_MODEL_LOADED( l_U790 )) AND ((HAS_MODEL_LOADED( l_U789 )) AND (sub_8038( 14 )))))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), -31.49850000, 1305.14300000, 19.98520000, 200.00000000, 200.00000000, 200.00000000, 0 ))
            {
                CLEAR_AREA_OF_CARS( -30.34800000, 1302.49200000, 20.07630000, 50.00000000 );
                sub_8191( 0 );
                sub_8191( 4 );
            }
        }
    }
    else if (NOT (IS_CAR_DEAD( l_U824 )))
    {
        GET_CAR_HEALTH( l_U824, ref iVar2 );
        if ((iVar2 < 1000) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U824, sub_4746() )))
        {
            sub_11686( 1 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U825[1] )))
    {
        GET_CAR_HEALTH( l_U825[1], ref iVar2 );
        if ((iVar2 < 1000) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U825[1], sub_4746() )))
        {
            sub_11686( 1 );
        }
    }
    if (LOCATE_CHAR_IN_CAR_3D( sub_4746(), l_U762._fU0, l_U762._fU4, l_U762._fU8 + (2.50000000 / 2.00000000), 2.50000000, 2.50000000, 2.50000000, 1 ))
    {
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_6920(), 0 )))
        {
            if (DOES_BLIP_EXIST( l_U761 ))
            {
                REMOVE_BLIP( l_U761 );
            }
            l_U765 = 3;
        }
        else if (NOT l_U772[10])
        {
            PRINT_NOW( "J4_10", 7500, 1 );
            l_U772[10] = 1;
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), l_U762._fU0, l_U762._fU4, l_U762._fU8 + (2.50000000 / 2.00000000), 2.50000000, 2.50000000, 2.50000000, 1 ))
    {
        if (NOT l_U772[11])
        {
            CLEAR_PRINTS();
            PRINT_NOW( "J4_11", 7500, 1 );
            l_U772[11] = 1;
        }
    };;;
    return;
}

void sub_7287(unknown uParam0)
{
    REQUEST_MODEL( sub_7298( uParam0 ) );
    return;
}

int sub_7298(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_1463( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_8038(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_7298( uParam0 ) );
}

void sub_8191(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (NOT (DOES_VEHICLE_EXIST( l_U824 )))
        {
            CREATE_CAR( l_U789, -30.34800000, 1302.49200000, 20.07630000, ref l_U824, 1 );
            SET_CAR_HEADING( l_U824, 180.00000000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U824 );
            CHANGE_CAR_COLOUR( l_U824, 8, 0 );
            LOCK_CAR_DOORS( l_U824, 8 );
            SUPPRESS_CAR_MODEL( l_U789 );
        }
        break;
        case 1:
        if (NOT (DOES_CHAR_EXIST( l_U794 )))
        {
            CLEAR_AREA( -43.64830000, 1303.93700000, 19.59710000, 20.00000000, 1 );
            sub_8471( 14, ref l_U794, -43.68850000, 1305.50900000, 20.43630000, 324.81100000 );
            SET_CHAR_DECISION_MAKER( l_U794, l_U877 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U794, 1 );
            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U794, 0 );
            GIVE_WEAPON_TO_CHAR( l_U794, 11, 2000, 0 );
            SET_CHAR_NEVER_TARGETTED( l_U794, 0 );
            SET_CHAR_AS_ENEMY( l_U794, 1 );
            l_U828[5] = sub_10239( 26, l_U792, -43.25130000, 1301.73000000, 20.43630000, 324.81100000, 13, 0, "" );
            SET_CHAR_IS_TARGET_PRIORITY( l_U828[5], 1 );
            SET_CHAR_AS_ENEMY( l_U828[5], 1 );
            l_U828[4] = sub_10239( 26, l_U791, -43.39170000, 1307.24100000, 20.43630000, 324.81100000, 10, 0, "" );
            SET_CHAR_IS_TARGET_PRIORITY( l_U828[4], 1 );
            SET_CHAR_AS_ENEMY( l_U828[4], 1 );
            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U828[4], 0 );
            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U828[5], 0 );
        }
        break;
        case 2:
        if (NOT (DOES_VEHICLE_EXIST( l_U825[0] )))
        {
            CREATE_CAR( l_U790, -30.24890000, 1295.09500000, 19.86410000, ref l_U825[0], 1 );
            SET_CAR_HEADING( l_U825[0], 184.12220000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U825[0] );
            CHANGE_CAR_COLOUR( l_U825[0], 0, 0 );
            SET_CAR_ON_GROUND_PROPERLY( l_U825[0] );
            LOCK_CAR_DOORS( l_U825[0], 3 );
        }
        break;
        case 3:
        if (NOT (DOES_CHAR_EXIST( l_U828[0] )))
        {
            l_U828[0] = sub_10711( ref l_U825[0], 26, l_U791, 3, 10, 0, "" );
            l_U828[1] = sub_10711( ref l_U825[0], 26, l_U792, 0, 13, 0, "" );
            l_U828[2] = sub_10711( ref l_U825[0], 26, l_U792, 1, 13, 0, "" );
            l_U828[3] = sub_10711( ref l_U825[0], 26, l_U792, 2, 13, 0, "" );
        }
        break;
        case 4:
        if (NOT (DOES_VEHICLE_EXIST( l_U825[1] )))
        {
            CREATE_CAR( l_U790, -30.62320000, 1308.94000000, 19.80980000, ref l_U825[1], 1 );
            SET_CAR_HEADING( l_U825[1], 180.00000000 );
            TURN_OFF_VEHICLE_EXTRA( l_U825[1], 5, 0 );
            TURN_OFF_VEHICLE_EXTRA( l_U825[1], 6, 0 );
            TURN_OFF_VEHICLE_EXTRA( l_U825[1], 7, 0 );
            SET_CAR_ON_GROUND_PROPERLY( l_U825[1] );
            CHANGE_CAR_COLOUR( l_U825[1], 0, 0 );
            LOCK_CAR_DOORS( l_U825[1], 3 );
            SUPPRESS_CAR_MODEL( l_U790 );
        }
        break;
        case 5:
        l_U828[6] = sub_10239( 26, l_U792, -38.31580000, 1313.98900000, 20.41850000, 259.38770000, 13, 0, "" );
        SET_CHAR_IS_TARGET_PRIORITY( l_U828[6], 1 );
        SET_CHAR_AS_ENEMY( l_U828[6], 1 );
        l_U828[7] = sub_10239( 26, l_U791, -39.48950000, 1313.00400000, 20.42980000, 236.38230000, 13, 0, "" );
        SET_CHAR_IS_TARGET_PRIORITY( l_U828[7], 1 );
        SET_CHAR_AS_ENEMY( l_U828[7], 1 );
        break;
        case 6:
        if (NOT (DOES_CHAR_EXIST( l_U828[9] )))
        {
            l_U828[9] = sub_10711( ref l_U825[1], 26, l_U791, 2, 13, 0, "" );
            SET_CHAR_IS_TARGET_PRIORITY( l_U828[9], 1 );
            SET_CHAR_AS_ENEMY( l_U828[9], 1 );
            l_U828[8] = sub_10711( ref l_U825[1], 26, l_U792, 1, 13, 0, "" );
            SET_CHAR_IS_TARGET_PRIORITY( l_U828[8], 1 );
            SET_CHAR_AS_ENEMY( l_U828[8], 1 );
            sub_4795( 2, l_U828[8], "RAY_GUARD", 0 );
        }
        break;
        case 7:
        if (NOT (DOES_CHAR_EXIST( l_U885 )))
        {
            CREATE_CHAR( 4, l_U793, 540.41250000, 754.79690000, 20.46360000, ref l_U885, 1 );
            SET_CHAR_HEADING( l_U885, 90.00000000 );
            SET_CHAR_DECISION_MAKER( l_U885, l_U877 );
        }
        break;
    }
    return;
}

void sub_8471(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_7298( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_8521( uParam0, (uParam1^) );
    return;
}

void sub_8521(unknown uParam0, unknown uParam1)
{
    sub_8533( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_8533(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_8627( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_9171( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_8627(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_9171(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_8627( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8627( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_8627( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_8627( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_8627( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_8627( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8627( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_8627( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_8627( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8627( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_8627( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8627( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_8627( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_10239(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, boolean bParam7, unknown uParam8)
{
    unknown Result;

    CREATE_CHAR( uParam0, uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_CHAR_DECISION_MAKER( Result, l_U877 );
    GIVE_WEAPON_TO_CHAR( Result, uParam6, 3000, 0 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    SET_CHAR_RELATIONSHIP( Result, 1, 3 );
    if (bParam7)
    {
        SET_ROOM_FOR_CHAR_BY_NAME( Result, uParam8 );
    }
    return Result;
}

void sub_10711(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, boolean bParam5, unknown uParam6)
{
    unknown Result;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        if (iParam3 == 3)
        {
            CREATE_CHAR_INSIDE_CAR( (uParam0^), uParam1, uParam2, ref Result );
        }
        else
        {
            CREATE_CHAR_AS_PASSENGER( (uParam0^), uParam1, uParam2, iParam3, ref Result );
        }
        SET_CHAR_DECISION_MAKER( Result, l_U877 );
        GIVE_WEAPON_TO_CHAR( Result, uParam4, 3000, 0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
        SET_CHAR_RELATIONSHIP( Result, 1, 3 );
        if (bParam5)
        {
            SET_ROOM_FOR_CHAR_BY_NAME( Result, uParam6 );
        }
        return Result;
    }
    return Result;
}

void sub_11686(unknown uParam0)
{
    sub_11696( 0 );
    sub_11836();
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6920(), 150 );
        SAY_AMBIENT_SPEECH( sub_4746(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    switch (uParam0)
    {
        case 0: break;
        case 1:
        PRINT_NOW( "J4_09", 7000, 1 );
        sub_12089( 22, "J4_CKILL", "J4AUD", 0 );
        break;
        case 2:
        PRINT_NOW( "J4_08", 7000, 1 );
        sub_12089( 22, "J4_LOSERAY", "J4AUD", 0 );
        break;
    }
    sub_2509();
    return;
}

void sub_11696(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 <= 8) AND (g_U8392 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_11836()
{
    sub_11845();
    return;
}

void sub_11845()
{
    int iVar2;

    iVar2 = 20;
    sub_11859( iVar2 );
    sub_1598( iVar2 );
    return;
}

void sub_11859(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_6920(), 150 );
    CLEAR_HELP();
    sub_422( uParam0 );
    return;
}

void sub_12089(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_12133( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_12133(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_13120()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT l_U1139)
    {
        if (NOT sub_13140())
        {
            l_U1139 = 1;
        }
    }
    else if ((NOT l_U1140) AND (l_U1138 > 0))
    {
        if (sub_13140())
        {
            if (NOT IS_SCREEN_FADING_IN())
            {
                sub_13301( ref l_U1144, 0 );
                CLEAR_PRINTS();
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U1140 = 1;
                l_U1138 = 12;
            }
        }
    }
    switch (l_U1138)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_6920(), 0 );
        DO_SCREEN_FADE_OUT( 1000 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        SET_WANTED_MULTIPLIER( 0.20000000 );
        TASK_SWAP_WEAPON( sub_4746(), 0 );
        CLEAR_AREA( -18.60760000, 1335.07300000, 19.45390000, 100.00000000, 1 );
        SET_CREATE_RANDOM_COPS( 0 );
        sub_13663();
        if (NOT (IS_CAR_DEAD( l_U824 )))
        {
            LOCK_CAR_DOORS( l_U824, 3 );
        }
        SET_USE_HIGHDOF( 1 );
        if (IS_CHAR_IN_ANY_CAR( sub_4746() ))
        {
            GET_CAR_CHAR_IS_USING( sub_4746(), ref uVar3 );
            SET_CAR_COORDINATES( uVar3, -41.24900000, 1336.91800000, 19.33180000 );
            SET_CAR_HEADING( uVar3, 271.84830000 );
            SET_CAR_ON_GROUND_PROPERLY( uVar3 );
            SET_CAN_BURST_CAR_TYRES( uVar3, 0 );
        }
        else
        {
            CLEAR_CHAR_TASKS( sub_4746() );
            SET_CHAR_COORDINATES( sub_4746(), -39.42360000, 1334.64500000, 19.33730000 );
            SET_CHAR_HEADING( sub_4746(), 270.00000000 );
        }
        DISPLAY_RADAR( 0 );
        SET_INSTANT_WIDESCREEN_BORDERS( 1 );
        BEGIN_CAM_COMMANDS( ref l_U878 );
        CREATE_CAM( 14, ref l_U798[11] );
        CREATE_CAM( 14, ref l_U798[12] );
        CREATE_CAM( 3, ref l_U798[13] );
        CREATE_CAM( 14, ref l_U798[8] );
        CREATE_CAM( 14, ref l_U798[9] );
        CREATE_CAM( 3, ref l_U798[10] );
        CREATE_CAM( 14, ref l_U798[2] );
        CREATE_CAM( 14, ref l_U798[4] );
        CREATE_CAM( 3, ref l_U798[3] );
        SET_CAM_POS( l_U798[11], -27.04000000, 1320.85000000, 19.74000000 );
        SET_CAM_ROT( l_U798[11], 6.18000000, 0.00000000, 170.26000000 );
        SET_CAM_FOV( l_U798[11], 22.50000000 );
        SET_CAM_ACTIVE( l_U798[11], 0 );
        SET_CAM_PROPAGATE( l_U798[11], 0 );
        SET_CAM_NEAR_DOF( l_U798[11], 15.00000000 );
        SET_CAM_FAR_DOF( l_U798[11], 40.00000000 );
        SET_CAM_POS( l_U798[12], -27.04000000, 1320.85000000, 19.74000000 );
        SET_CAM_ROT( l_U798[12], 6.18000000, 0.00000000, 170.26000000 );
        SET_CAM_FOV( l_U798[12], 20.50000000 );
        SET_CAM_ACTIVE( l_U798[12], 0 );
        SET_CAM_PROPAGATE( l_U798[12], 0 );
        SET_CAM_NEAR_DOF( l_U798[12], 15.00000000 );
        SET_CAM_FAR_DOF( l_U798[12], 50.00000000 );
        SET_CAM_ACTIVE( l_U798[13], 0 );
        SET_CAM_PROPAGATE( l_U798[13], 0 );
        ATTACH_CAM_TO_PED( l_U798[8], sub_4746() );
        POINT_CAM_AT_PED( l_U798[8], sub_4746() );
        if (NOT (IS_CAR_DEAD( l_U825[1] )))
        {
            POINT_CAM_AT_VEHICLE( l_U798[8], l_U825[1] );
        }
        SET_CAM_ATTACH_OFFSET( l_U798[8], -5.40000000, -0.10000000, 1.10000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U798[8], 1 );
        SET_CAM_POINT_OFFSET( l_U798[8], 0.00000000, 0.00000000, 0.60000000 );
        SET_CAM_ACTIVE( l_U798[8], 1 );
        SET_CAM_PROPAGATE( l_U798[8], 1 );
        SET_CAM_FOV( l_U798[8], 35.50000000 );
        ATTACH_CAM_TO_PED( l_U798[9], sub_4746() );
        if (NOT (IS_CAR_DEAD( l_U825[1] )))
        {
            POINT_CAM_AT_VEHICLE( l_U798[9], l_U825[1] );
        }
        SET_CAM_ATTACH_OFFSET( l_U798[9], -3.90000000, -0.10000000, 1.10000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U798[9], 1 );
        SET_CAM_POINT_OFFSET( l_U798[9], 0.00000000, 0.00000000, 0.60000000 );
        SET_CAM_ACTIVE( l_U798[9], 1 );
        SET_CAM_PROPAGATE( l_U798[9], 0 );
        SET_CAM_FOV( l_U798[9], 30.00000000 );
        SET_CAM_ACTIVE( l_U798[10], 0 );
        SET_CAM_PROPAGATE( l_U798[10], 0 );
        SET_CAM_POS( l_U798[2], -25.72000000, 1303.82000000, 20.76000000 );
        SET_CAM_ROT( l_U798[2], -3.90000000, 0, 37.45000000 );
        SET_CAM_FOV( l_U798[2], 20.50000000 );
        SET_CAM_ACTIVE( l_U798[2], 0 );
        SET_CAM_PROPAGATE( l_U798[2], 0 );
        SET_CAM_NEAR_DOF( l_U798[2], 2.00000000 );
        SET_CAM_FAR_DOF( l_U798[2], 8.00000000 );
        SET_CAM_POS( l_U798[4], -25.72000000, 1295.48000000, 20.76000000 );
        SET_CAM_ROT( l_U798[4], -3.90000000, 0, 37.45000000 );
        SET_CAM_FOV( l_U798[4], 20.50000000 );
        SET_CAM_ACTIVE( l_U798[4], 0 );
        SET_CAM_PROPAGATE( l_U798[4], 0 );
        SET_CAM_NEAR_DOF( l_U798[4], 2.00000000 );
        SET_CAM_FAR_DOF( l_U798[4], 8.00000000 );
        SET_CAM_ACTIVE( l_U798[3], 0 );
        SET_CAM_PROPAGATE( l_U798[3], 0 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        sub_8191( 1 );
        sub_8191( 5 );
        SET_CURRENT_CHAR_WEAPON( l_U828[5], 0, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U828[4], 0, 0 );
        while (NOT (sub_15611( 22, "J4_SEECAR", "J4AUD", g_U480 )))
        {
            WAIT( 0 );
        }
        GET_GAME_TIMER( ref l_U882 );
        GET_GAME_TIMER( ref l_U1142 );
        l_U1138 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U881 );
        if ((l_U881 - l_U882) < 5000)
        {
            GET_SCRIPT_TASK_STATUS( sub_4746(), 53, ref uVar4 );
            switch (uVar4)
            {
                case 7:
                case 2: break;
                default:
                GET_MOBILE_PHONE_TASK_SUB_TASK( sub_4746(), ref iVar5 );
                if (iVar5 == 1)
                {
                    DO_SCREEN_FADE_IN( 500 );
                    GET_GAME_TIMER( ref l_U882 );
                    SET_CAM_ACTIVE( l_U798[8], 0 );
                    SET_CAM_PROPAGATE( l_U798[8], 0 );
                    SET_CAM_INTERP_STYLE_CORE( l_U798[10], l_U798[8], l_U798[9], 15000, 0 );
                    SET_CAM_ACTIVE( l_U798[10], 1 );
                    SET_CAM_PROPAGATE( l_U798[10], 1 );
                    l_U1138 = 2;
                }
                break;
            }
        }
        else
        {
            DO_SCREEN_FADE_IN( 500 );
            SET_CAM_ACTIVE( l_U798[8], 0 );
            SET_CAM_PROPAGATE( l_U798[8], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U798[10], l_U798[8], l_U798[9], 15000, 0 );
            SET_CAM_ACTIVE( l_U798[10], 1 );
            SET_CAM_PROPAGATE( l_U798[10], 1 );
            GET_GAME_TIMER( ref l_U882 );
            l_U1138 = 2;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U881 );
        if ((l_U881 - l_U882) > 3000)
        {
            GET_GAME_TIMER( ref l_U882 );
            l_U1138 = 3;
        }
        break;
        case 3:
        GET_GAME_TIMER( ref l_U881 );
        if ((l_U881 - l_U882) > 7000)
        {
            if (NOT (IS_CAR_DEAD( l_U824 )))
            {
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( -37.86140000, 1302.94400000, 20.41980000 );
                TASK_EXTEND_ROUTE( -33.77590000, 1301.16600000, 20.42880000 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                OPEN_SEQUENCE_TASK( ref l_U850[5] );
                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U824, -1, 0 );
                CLOSE_SEQUENCE_TASK( l_U850[5] );
                if (NOT (IS_CHAR_DEAD( l_U828[5] )))
                {
                    TASK_PERFORM_SEQUENCE( l_U828[5], l_U850[5] );
                }
                CLEAR_SEQUENCE_TASK( l_U850[5] );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( -37.58050000, 1303.84000000, 20.42880000 );
                TASK_EXTEND_ROUTE( -33.22750000, 1302.76000000, 20.42880000 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                OPEN_SEQUENCE_TASK( ref l_U795 );
                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U824, -1, 1 );
                CLOSE_SEQUENCE_TASK( l_U795 );
                if (NOT (IS_CHAR_DEAD( l_U794 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U794, l_U795 );
                }
                CLEAR_SEQUENCE_TASK( l_U795 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( -30.18480000, 1304.73700000, 20.33380000 );
                TASK_EXTEND_ROUTE( -29.26990000, 1303.07500000, 20.43240000 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                OPEN_SEQUENCE_TASK( ref l_U850[4] );
                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U824, -1 );
                CLOSE_SEQUENCE_TASK( l_U850[4] );
                if (NOT (IS_CHAR_DEAD( l_U828[4] )))
                {
                    TASK_PERFORM_SEQUENCE( l_U828[4], l_U850[4] );
                }
                CLEAR_SEQUENCE_TASK( l_U850[4] );
            }
            if (NOT (IS_CAR_DEAD( l_U825[1] )))
            {
                if (NOT l_U861[7])
                {
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( -33.18040000, 1308.02800000, 20.37090000 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    OPEN_SEQUENCE_TASK( ref l_U850[7] );
                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U825[1], -1, 0 );
                    CLOSE_SEQUENCE_TASK( l_U850[7] );
                    if (NOT (IS_CHAR_DEAD( l_U828[7] )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U828[7], l_U850[7] );
                    }
                    CLEAR_SEQUENCE_TASK( l_U850[7] );
                    l_U861[7] = 1;
                }
                if (NOT l_U861[6])
                {
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( -28.68630000, 1310.67100000, 20.41260000 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    OPEN_SEQUENCE_TASK( ref l_U850[6] );
                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U825[1], -1 );
                    CLOSE_SEQUENCE_TASK( l_U850[6] );
                    if (NOT (IS_CHAR_DEAD( l_U828[6] )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U828[6], l_U850[6] );
                    }
                    CLEAR_SEQUENCE_TASK( l_U850[6] );
                    l_U861[6] = 1;
                }
            }
            WAIT( 2000 );
            SET_CAM_ACTIVE( l_U798[4], 1 );
            SET_CAM_PROPAGATE( l_U798[4], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U798[3], l_U798[2], l_U798[4], 15000, 0 );
            SET_CAM_ACTIVE( l_U798[3], 1 );
            SET_CAM_PROPAGATE( l_U798[3], 1 );
            SET_CAM_ACTIVE( l_U798[9], 0 );
            SET_CAM_PROPAGATE( l_U798[9], 0 );
            SET_CAM_ACTIVE( l_U798[10], 0 );
            SET_CAM_PROPAGATE( l_U798[10], 0 );
            SET_CAM_ACTIVE( l_U798[10], 0 );
            SET_CAM_PROPAGATE( l_U798[10], 0 );
            GET_GAME_TIMER( ref l_U882 );
            l_U1138 = 10;
        }
        if (NOT l_U1141)
        {
            GET_GAME_TIMER( ref l_U1143 );
            if ((l_U1143 - l_U1142) > 2000)
            {
                l_U1141 = 1;
            }
        }
        break;
        case 10:
        if ((sub_21358()) AND (sub_21141()))
        {
            if (NOT l_U861[0])
            {
                if (NOT (IS_CAR_DEAD( l_U824 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U828[4] )))
                    {
                        TASK_CAR_DRIVE_TO_COORD( l_U828[4], l_U824, l_U606[0]._fU0, l_U606[0]._fU4, l_U606[0]._fU8, 10.00000000, 0, 0, 2, 4.00000000, 10 );
                        l_U861[0] = 1;
                    }
                }
            }
            else
            {
                sub_21706( l_U828[6], l_U825[1], l_U824, 13.00000000, 1, 30 );
                GET_GAME_TIMER( ref l_U882 );
                l_U1138 = 12;
            }
        }
        GET_GAME_TIMER( ref l_U881 );
        if ((l_U881 - l_U882) > 10000)
        {
            sub_21909();
            SET_CAM_ACTIVE( l_U798[12], 1 );
            SET_CAM_PROPAGATE( l_U798[12], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U798[13], l_U798[11], l_U798[12], 10000, 0 );
            SET_CAM_ACTIVE( l_U798[13], 1 );
            SET_CAM_PROPAGATE( l_U798[13], 1 );
            SET_CAM_ACTIVE( l_U798[4], 0 );
            SET_CAM_PROPAGATE( l_U798[4], 0 );
            SET_CAM_ACTIVE( l_U798[3], 0 );
            SET_CAM_PROPAGATE( l_U798[3], 0 );
            GET_GAME_TIMER( ref l_U882 );
        }
        break;
        case 12:
        GET_GAME_TIMER( ref l_U881 );
        if ((l_U1140) || ((l_U881 - l_U882) > 7000))
        {
            if (l_U1140)
            {
                sub_22410( 22 );
                if (NOT l_U861[0])
                {
                    sub_21909();
                    if (NOT (IS_CAR_DEAD( l_U824 )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U828[4] )))
                        {
                            SET_CAR_COORDINATES( l_U824, -26.40310000, 1277.40000000, 19.86270000 );
                            SET_CAR_HEADING( l_U824, 178.41030000 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U824 );
                            TASK_CAR_DRIVE_TO_COORD( l_U828[4], l_U824, l_U606[0]._fU0, l_U606[0]._fU4, l_U606[0]._fU8, 10.00000000, 0, 0, 2, 4.00000000, 10 );
                        }
                    }
                    if (NOT (IS_CAR_DEAD( l_U825[1] )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U828[6] )))
                        {
                            SET_CAR_COORDINATES( l_U825[1], -26.23610000, 1283.30000000, 19.86680000 );
                            SET_CAR_HEADING( l_U825[1], 178.38350000 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U825[1] );
                            sub_21706( l_U828[6], l_U825[1], l_U824, 13.00000000, 1, 30 );
                        }
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( l_U825[1] )))
            {
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U825[1], 1 );
            }
            if (NOT (IS_CAR_DEAD( l_U824 )))
            {
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U824, 1 );
            }
            TASK_USE_MOBILE_PHONE( sub_4746(), 0 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 1500 );
            SET_CAM_ACTIVE( l_U798[8], 0 );
            SET_CAM_PROPAGATE( l_U798[8], 0 );
            SET_CAM_ACTIVE( l_U798[9], 0 );
            SET_CAM_PROPAGATE( l_U798[9], 0 );
            SET_CAM_ACTIVE( l_U798[10], 0 );
            SET_CAM_PROPAGATE( l_U798[10], 0 );
            SET_CAM_ACTIVE( l_U798[2], 0 );
            SET_CAM_PROPAGATE( l_U798[2], 0 );
            SET_CAM_ACTIVE( l_U798[4], 0 );
            SET_CAM_PROPAGATE( l_U798[4], 0 );
            SET_CAM_ACTIVE( l_U798[3], 0 );
            SET_CAM_PROPAGATE( l_U798[3], 0 );
            SET_CAM_ACTIVE( l_U798[11], 0 );
            SET_CAM_PROPAGATE( l_U798[11], 0 );
            SET_CAM_ACTIVE( l_U798[12], 0 );
            SET_CAM_PROPAGATE( l_U798[12], 0 );
            SET_CAM_ACTIVE( l_U798[13], 0 );
            SET_CAM_PROPAGATE( l_U798[13], 0 );
            DESTROY_CAM( l_U798[10] );
            DESTROY_CAM( l_U798[8] );
            DESTROY_CAM( l_U798[9] );
            DESTROY_CAM( l_U798[3] );
            DESTROY_CAM( l_U798[2] );
            DESTROY_CAM( l_U798[4] );
            DESTROY_CAM( l_U798[13] );
            DESTROY_CAM( l_U798[11] );
            DESTROY_CAM( l_U798[12] );
            SET_GAME_CAM_HEADING( 0.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U878 );
            sub_21909();
            if (NOT (IS_CAR_DEAD( l_U825[0] )))
            {
                SET_CAR_COORDINATES( l_U825[0], -27.29530000, 1295.28200000, 20.20380000 );
                SET_CAR_HEADING( l_U825[0], 180.00000000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U825[0] );
            }
            sub_8191( 6 );
            DISPLAY_RADAR( 1 );
            if (l_U1140)
            {
                WAIT( 1000 );
                sub_22410( 22 );
                CLEAR_CHAR_TASKS( sub_4746() );
                DO_SCREEN_FADE_IN( 500 );
            }
            else
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            sub_23641();
            sub_7043();
            SET_PLAYER_CONTROL( sub_6920(), 1 );
            SET_USE_HIGHDOF( 0 );
            l_U1046 = 1;
            l_U879 = 1;
            for ( I = 0; I <= 19; I++ )
            {
                SWITCH_ROADS_OFF( l_U485[I]._fU0._fU0, l_U485[I]._fU0._fU4, l_U485[I]._fU0._fU8, l_U485[I]._fU12._fU0, l_U485[I]._fU12._fU4, l_U485[I]._fU12._fU8 );
            }
            CLEAR_AREA( 109.62880000, 1135.61200000, 14.55310000, 50.00000000, 1 );
            l_U861[6] = 0;
            l_U861[7] = 0;
            if (NOT (IS_CHAR_DEAD( l_U794 )))
            {
                ADD_BLIP_FOR_CHAR( l_U794, ref l_U796 );
            }
            if (NOT (IS_CHAR_DEAD( l_U828[5] )))
            {
                ADD_BLIP_FOR_CHAR( l_U828[5], ref l_U839[5] );
            }
            if (NOT (IS_CHAR_DEAD( l_U828[4] )))
            {
                ADD_BLIP_FOR_CHAR( l_U828[4], ref l_U839[4] );
            }
            if (NOT (IS_CHAR_DEAD( l_U828[6] )))
            {
                ADD_BLIP_FOR_CHAR( l_U828[6], ref l_U839[6] );
            }
            if (NOT (IS_CHAR_DEAD( l_U828[7] )))
            {
                ADD_BLIP_FOR_CHAR( l_U828[7], ref l_U839[7] );
            }
            if (NOT (IS_CHAR_DEAD( l_U828[9] )))
            {
                ADD_BLIP_FOR_CHAR( l_U828[9], ref l_U839[9] );
            }
            if (NOT (IS_CHAR_DEAD( l_U828[8] )))
            {
                ADD_BLIP_FOR_CHAR( l_U828[8], ref l_U839[8] );
            }
            l_U756 = 1;
            l_U1138 = 13;
            l_U765 = 4;
        }
        break;
    }
    return;
}

int sub_13140()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_13301(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_13663()
{
    if (NOT (IS_VEH_DRIVEABLE( l_U824 )))
    {
        if (DOES_VEHICLE_EXIST( l_U824 ))
        {
            DELETE_CAR( ref l_U824 );
            sub_8191( 0 );
        }
    }
    else
    {
        SET_CAR_COORDINATES( l_U824, -30.34800000, 1302.49200000, 20.07630000 );
        SET_CAR_HEADING( l_U824, 180.00000000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U824 );
    }
    if (NOT (IS_VEH_DRIVEABLE( l_U825[1] )))
    {
        if (DOES_VEHICLE_EXIST( l_U825[1] ))
        {
            DELETE_CAR( ref l_U825[1] );
            sub_8191( 4 );
        }
    }
    else
    {
        SET_CAR_COORDINATES( l_U825[1], -30.62320000, 1308.94000000, 19.80980000 );
        SET_CAR_HEADING( l_U825[1], 180.00000000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U825[1] );
    }
    if (NOT (IS_CAR_DEAD( l_U825[1] )))
    {
        APPLY_FORCE_TO_CAR( l_U825[1], 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
    }
    if (NOT (IS_CAR_DEAD( l_U824 )))
    {
        APPLY_FORCE_TO_CAR( l_U824, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
    }
    return;
}

void sub_15611(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown[2] uVar15;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    array(ref uVar15, 2);
    return sub_15670( uParam0, ref cVar6, uParam2, 0, ref uVar15, ref uVar15, "", 0, 1, 2, uParam3, 1, 0, 0 );
}

int sub_15670(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_15740( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_15740( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_6920() )))
    {
        sub_15740( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4746() ))) AND (IS_CHAR_IN_ANY_CAR( sub_4746() )))
    {
        sub_15740( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_15740( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_16197()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((NOT bParam8) || (g_U91._fU372))
            {
                sub_15740( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 4) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 5))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_16197()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_17569( uParam0, ref g_U91._fU176 );
    sub_18950( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_4919( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_15740(unknown uParam0)
{
    return;
}

int sub_16197()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_16254())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_16254()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_6920() )))
    {
        sub_15740( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_15740( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_15740( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_15740( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_6920() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4746() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_4746(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_15740( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_4746() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_15740( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_15740( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_6920() )))
    {
        sub_15740( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_17569(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_18950(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_21141()
{
    if ((sub_21160( l_U828[4], l_U824 )) AND ((sub_21160( l_U828[5], l_U824 )) AND (sub_21160( l_U794, l_U824 ))))
    {
        return 1;
    }
    else if (NOT (sub_21160( l_U794, l_U824 )))
    {
        ;
    }
    if (NOT (sub_21160( l_U828[5], l_U824 )))
    {
        ;
    }
    if (NOT (sub_21160( l_U828[4], l_U824 )))
    {
        ;
    }
    return 0;
}

int sub_21160(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_21358()
{
    if ((sub_21160( l_U828[7], l_U825[1] )) AND (sub_21160( l_U828[6], l_U825[1] )))
    {
        return 1;
    }
    else if (NOT (sub_21160( l_U828[6], l_U825[1] )))
    {
        ;
    }
    if (NOT (sub_21160( l_U828[7], l_U825[1] )))
    {
        ;
    }
    if (NOT (sub_21160( l_U828[9], l_U825[1] )))
    {
        ;
    }
    if (NOT (sub_21160( l_U828[8], l_U825[1] )))
    {
        ;
    }
    return 0;
}

void sub_21706(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    if (NOT (IS_CHAR_DEAD( iParam0 )))
    {
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_CAR( iParam0, uParam1 ))
            {
                if (NOT (IS_CAR_DEAD( uParam2 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar8 );
                    TASK_CAR_MISSION( 0, uParam1, uParam2, 12, uParam3, 2, uParam4, uParam5 );
                    CLOSE_SEQUENCE_TASK( uVar8 );
                    TASK_PERFORM_SEQUENCE( iParam0, uVar8 );
                    CLEAR_SEQUENCE_TASK( uVar8 );
                    if (iParam0 == l_U828[4])
                    {
                        ;
                    }
                }
            }
        }
    }
    return;
}

void sub_21909()
{
    sub_21935( l_U828[0], l_U825[0], -1 );
    sub_21935( l_U828[1], l_U825[0], 0 );
    sub_21935( l_U828[6], l_U825[1], -1 );
    sub_21935( l_U828[7], l_U825[1], 0 );
    sub_21935( l_U828[4], l_U824, -1 );
    sub_21935( l_U828[5], l_U824, 0 );
    sub_21935( l_U794, l_U824, 1 );
    return;
}

void sub_21935(unknown uParam0, unknown uParam1, int iParam2)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            if (NOT (IS_CHAR_IN_CAR( uParam0, uParam1 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( uParam0 );
                if (iParam2 == -1)
                {
                    WARP_CHAR_INTO_CAR( uParam0, uParam1 );
                }
                else
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( uParam0, uParam1, iParam2 );
                }
            }
            CLOSE_ALL_CAR_DOORS( uParam1 );
        }
    }
    return;
}

void sub_22410(int iParam0)
{
    if (g_U91._fU60 == iParam0)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U91._fU0 != 1001) AND (g_U91._fU0 != 1000))
            {
                g_U91._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

void sub_23641()
{
    if ((g_U8394 == 4) || (g_U555 == 1))
    {
        if (g_U91._fU60 != -1)
        {
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U91._fU376 = 0;
        g_U91._fU100 = 1;
    }
    return;
}

void sub_24280()
{
    unknown uVar2;
    unknown[2] uVar3;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    array(ref uVar3, 2);
    if (NOT (IS_CAR_DEAD( l_U825[0] )))
    {
        GET_CAR_DOOR_LOCK_STATUS( l_U825[0], ref l_U1122 );
        if (l_U1122 != 3)
        {
            ;
        }
    }
    switch (l_U873)
    {
        case 0:
        l_U746 = 5;
        LOAD_PATH_NODES_IN_AREA( 73.80210000, 1081.65900000, 140.82350000, 1180.84400000 );
        LOAD_ALL_OBJECTS_NOW();
        PRINT_NOW( "J4_03", 7500, 1 );
        l_U1120 = 1;
        l_U873 = 1;
        break;
        case 1:
        if (NOT l_U772[4])
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT (IS_CAR_DEAD( l_U825[0] )))
                {
                    if (IS_CAR_ON_SCREEN( l_U825[0] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U828[0] )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4746(), l_U828[0], 20.00000000, 20.00000000, 0 ))
                            {
                                l_U772[4] = 1;
                            }
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( l_U825[1] )))
                {
                    if (IS_CAR_ON_SCREEN( l_U825[1] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U828[6] )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4746(), l_U828[6], 20.00000000, 20.00000000, 0 ))
                            {
                                if (NOT l_U772[4])
                                {
                                    l_U772[4] = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U828[4] )))
        {
            if (NOT (IS_CAR_DEAD( l_U824 )))
            {
                if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                {
                    if ((NOT l_U1046) || (LOCATE_CHAR_IN_CAR_3D( l_U828[4], 93.34800000, 1160.55500000, 14.28960000, 10.00000000, 10.00000000, 2.00000000, l_U889 )))
                    {
                        if (NOT l_U1121)
                        {
                            if (NOT l_U861[4])
                            {
                                l_U1046 = 0;
                                l_U1120 = 0;
                                l_U1041 = 1;
                                CLEAR_CHAR_TASKS( l_U828[4] );
                                OPEN_SEQUENCE_TASK( ref l_U850[4] );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 100.89610000, 1161.93500000, 14.56650000, 4.00000000, 0, 0, 2, 4.00000000, 10 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 110.29930000, 1141.93300000, 14.31350000, 4.00000000, 0, 0, 2, 4.00000000, 10 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 109.31870000, 1127.00000000, 14.28170000, 4.00000000, 0, 0, 2, 4.00000000, 10 );
                                CLOSE_SEQUENCE_TASK( l_U850[4] );
                                TASK_PERFORM_SEQUENCE( l_U828[4], l_U850[4] );
                                CLEAR_SEQUENCE_TASK( l_U850[4] );
                                l_U861[4] = 1;
                            }
                            if (NOT (IS_CHAR_DEAD( l_U828[6] )))
                            {
                                if (NOT (IS_CAR_DEAD( l_U825[1] )))
                                {
                                    if (IS_CHAR_IN_CAR( l_U828[6], l_U825[1] ))
                                    {
                                        if (LOCATE_CHAR_IN_CAR_3D( l_U828[6], 93.34800000, 1160.55500000, 14.28960000, 10.00000000, 10.00000000, 2.00000000, l_U889 ))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U850[6] );
                                            TASK_CAR_DRIVE_TO_COORD( 0, l_U825[1], 110.29930000, 1139.93300000, 14.31350000, 4.00000000, 0, 0, 2, 4.00000000, 10 );
                                            CLOSE_SEQUENCE_TASK( l_U850[6] );
                                            TASK_PERFORM_SEQUENCE( l_U828[6], l_U850[6] );
                                            CLEAR_SEQUENCE_TASK( l_U850[6] );
                                            l_U861[4] = 0;
                                            l_U880 = 1;
                                            l_U873 = 2;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            l_U873 = 4;
                        }
                    }
                }
            }
        }
        sub_25399();
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U828[0] )))
        {
            if (sub_25876( l_U828[0], 1, 0 ))
            {
                if (NOT l_U861[2])
                {
                    if (NOT (IS_CHAR_DEAD( l_U828[2] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U850[2] );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 115.45450000, 1136.80600000, 14.55310000, 2, -1, 0.50000000 );
                        TASK_ACHIEVE_HEADING( 0, 282.35900000 );
                        CLOSE_SEQUENCE_TASK( l_U850[2] );
                        TASK_PERFORM_SEQUENCE( l_U828[2], l_U850[2] );
                        CLEAR_SEQUENCE_TASK( l_U850[2] );
                        l_U861[2] = 1;
                    }
                }
                if (NOT l_U861[3])
                {
                    if (NOT (IS_CHAR_DEAD( l_U828[3] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U850[3] );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 115.49800000, 1133.12600000, 14.55310000, 2, -1, 0.50000000 );
                        TASK_ACHIEVE_HEADING( 0, 296.96120000 );
                        CLOSE_SEQUENCE_TASK( l_U850[3] );
                        TASK_PERFORM_SEQUENCE( l_U828[3], l_U850[3] );
                        CLEAR_SEQUENCE_TASK( l_U850[3] );
                        l_U861[3] = 1;
                    }
                }
            }
        }
        if ((l_U1125) || (sub_25876( l_U828[4], 1, 0 )))
        {
            if (NOT l_U861[5])
            {
                if (NOT (IS_CHAR_DEAD( l_U828[5] )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4746(), l_U828[5], 50.00000000, 50.00000000, 50.00000000, 0 )))
                    {
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U828[5], 1 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U824 )))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U824, -0.03975480, -3.34843000, 0.22324900, ref uVar3[0]._fU0, ref uVar3[0]._fU4, ref uVar3[0]._fU8 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U824, 1.40520000, -1.07991000, 0.22020900, ref uVar3[1]._fU0, ref uVar3[1]._fU4, ref uVar3[1]._fU8 );
                    }
                    OPEN_SEQUENCE_TASK( ref l_U850[5] );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 111.96140000, 1131.09400000, 13.55360000, 2, 5000, 0.50000000 );
                    TASK_ACHIEVE_HEADING( 0, 279.17840000 );
                    TASK_PAUSE( 0, 1000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3[0]._fU0, uVar3[0]._fU4, uVar3[0]._fU8, 2, 5000, 0.50000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3[1]._fU0, uVar3[1]._fU4, uVar3[1]._fU8, 2, 5000, 0.10000000 );
                    TASK_ACHIEVE_HEADING( 0, 279.17840000 );
                    TASK_PAUSE( 0, 5000 );
                    CLOSE_SEQUENCE_TASK( l_U850[5] );
                    if (NOT (IS_CHAR_INJURED( l_U828[5] )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U828[5], l_U850[5] );
                    }
                    CLEAR_SEQUENCE_TASK( l_U850[5] );
                    GET_GAME_TIMER( ref l_U1133 );
                    l_U861[5] = 1;
                }
            }
            if (sub_25876( l_U828[6], 1, 0 ))
            {
                if (NOT l_U861[8])
                {
                    if (NOT (IS_CHAR_DEAD( l_U828[8] )))
                    {
                        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U485[4]._fU0._fU0, l_U485[4]._fU0._fU4, l_U485[4]._fU0._fU8, l_U485[4]._fU12._fU0, l_U485[4]._fU12._fU4, l_U485[4]._fU12._fU8 );
                        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U485[5]._fU0._fU0, l_U485[5]._fU0._fU4, l_U485[5]._fU0._fU8, l_U485[5]._fU12._fU0, l_U485[5]._fU12._fU4, l_U485[5]._fU12._fU8 );
                        OPEN_SEQUENCE_TASK( ref l_U850[8] );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 111.23300000, 1148.70800000, 14.55310000, 2, 5000, 0.50000000 );
                        TASK_ACHIEVE_HEADING( 0, 13.55310000 );
                        CLOSE_SEQUENCE_TASK( l_U850[8] );
                        TASK_PERFORM_SEQUENCE( l_U828[8], l_U850[8] );
                        CLEAR_SEQUENCE_TASK( l_U850[8] );
                        l_U861[8] = 1;
                    }
                }
                if (NOT l_U861[9])
                {
                    if (NOT (IS_CHAR_DEAD( l_U828[9] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U850[9] );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 106.88570000, 1148.55800000, 14.55310000, 2, 5000, 0.50000000 );
                        TASK_ACHIEVE_HEADING( 0, 350.50650000 );
                        CLOSE_SEQUENCE_TASK( l_U850[9] );
                        TASK_PERFORM_SEQUENCE( l_U828[9], l_U850[9] );
                        CLEAR_SEQUENCE_TASK( l_U850[9] );
                        l_U861[9] = 1;
                    }
                }
            }
        }
        else if (NOT l_U1125)
        {
            if (NOT l_U1126)
            {
                if (NOT (IS_CAR_DEAD( l_U824 )))
                {
                    if (LOCATE_CAR_3D( l_U824, 105.84890000, 1136.64000000, 14.55820000, 5.00000000, 5.00000000, 3.00000000, 0 ))
                    {
                        GET_GAME_TIMER( ref l_U1131 );
                        l_U1126 = 1;
                    }
                    else
                    {
                        sub_27453( "Not located" );
                    }
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U1132 );
                if ((l_U1132 - l_U1131) > 10000)
                {
                    l_U1125 = 1;
                }
            }
        }
        if ((l_U861[5]) AND ((l_U861[8]) AND (l_U861[9])))
        {
            l_U861[9] = 0;
            l_U861[8] = 0;
            l_U861[2] = 0;
            l_U861[3] = 0;
            l_U861[5] = 0;
            GET_GAME_TIMER( ref l_U1114 );
            l_U873 = 3;
        }
        else if (NOT l_U861[9])
        {
            ;
        }
        if (NOT l_U861[8])
        {
            ;
        }
        if (NOT l_U861[2])
        {
            ;
        }
        if (NOT l_U861[3])
        {
            ;
        }
        break;
        case 3:
        if (NOT sub_27671())
        {
            if (NOT sub_27770())
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), 107.19980000, 1144.79400000, 14.55310000, 12.00000000, 14.00000000, 2.00000000, 0 ))
                {
                    GET_CURRENT_CHAR_WEAPON( sub_4746(), ref uVar2 );
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_4746() )))
                    {
                        if (NOT l_U861[9])
                        {
                            if (NOT l_U1134)
                            {
                                sub_28464( "J4_APPROACH", ref l_U1108, 6, 1 );
                                l_U1134 = 1;
                            }
                            sub_29433( l_U828[9] );
                            l_U861[9] = 1;
                        }
                        else if (sub_25876( l_U828[9], 1, 0 ))
                        {
                            if (NOT l_U1135[0])
                            {
                                sub_29433( l_U828[9] );
                            }
                        }
                        if (NOT l_U861[8])
                        {
                            sub_29433( l_U828[8] );
                            l_U861[8] = 1;
                        }
                        else if (sub_25876( l_U828[8], 1, 0 ))
                        {
                            if (NOT l_U1135[1])
                            {
                                sub_29433( l_U828[8] );
                            }
                        }
                    }
                }
                GET_GAME_TIMER( ref l_U1115 );
                if (NOT (IS_CHAR_DEAD( l_U828[5] )))
                {
                    if (NOT l_U861[5])
                    {
                        if (((l_U1115 - l_U1114) > 60000) || (sub_25876( l_U828[5], 1, 0 )))
                        {
                            if (NOT (IS_CAR_DEAD( l_U824 )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U850[5] );
                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U824, -1, 0 );
                                CLOSE_SEQUENCE_TASK( l_U850[5] );
                                if (NOT (IS_CHAR_INJURED( l_U828[5] )))
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                    TASK_PERFORM_SEQUENCE( l_U828[5], l_U850[5] );
                                }
                                CLEAR_SEQUENCE_TASK( l_U850[5] );
                                l_U861[5] = 1;
                            }
                            if (NOT l_U1135[0])
                            {
                                if (NOT (IS_CHAR_DEAD( l_U828[9] )))
                                {
                                    if (NOT (IS_CAR_DEAD( l_U825[1] )))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U850[9] );
                                        TASK_ENTER_CAR_AS_PASSENGER( 0, l_U825[1], -1, 2 );
                                        CLOSE_SEQUENCE_TASK( l_U850[9] );
                                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                        TASK_PERFORM_SEQUENCE( l_U828[9], l_U850[9] );
                                        CLEAR_SEQUENCE_TASK( l_U850[9] );
                                        l_U1135[0] = 1;
                                    }
                                }
                            }
                            if (NOT l_U1135[1])
                            {
                                if (NOT (IS_CHAR_DEAD( l_U828[8] )))
                                {
                                    if (NOT (IS_CAR_DEAD( l_U825[1] )))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U850[8] );
                                        TASK_ENTER_CAR_AS_PASSENGER( 0, l_U825[1], -1, 1 );
                                        CLOSE_SEQUENCE_TASK( l_U850[8] );
                                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                        TASK_PERFORM_SEQUENCE( l_U828[8], l_U850[8] );
                                        CLEAR_SEQUENCE_TASK( l_U850[8] );
                                        l_U1135[1] = 1;
                                    }
                                }
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( l_U828[5], l_U824 ))
                    {
                        if (NOT l_U861[4])
                        {
                            if (NOT (IS_CHAR_DEAD( l_U828[4] )))
                            {
                                if (NOT (IS_CAR_DEAD( l_U824 )))
                                {
                                    if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U850[4] );
                                        TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 108.75940000, 1126.55500000, 14.55310000, 4.00000000, 0, 0, 3, 4.00000000, 10 );
                                        TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 117.39560000, 1125.00600000, 14.34350000, 4.00000000, 0, 0, 3, 4.00000000, 10 );
                                        CLOSE_SEQUENCE_TASK( l_U850[4] );
                                        TASK_PERFORM_SEQUENCE( l_U828[4], l_U850[4] );
                                        CLEAR_SEQUENCE_TASK( l_U850[4] );
                                        l_U861[4] = 1;
                                    }
                                }
                            }
                        }
                        else if (sub_25876( l_U828[4], 1, 0 ))
                        {
                            l_U861[9] = 0;
                            l_U861[8] = 0;
                            l_U861[2] = 0;
                            l_U861[3] = 0;
                            l_U880 = 0;
                            l_U873 = 4;
                        }
                    }
                }
            }
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U1115 );
        if (NOT l_U1121)
        {
            ;
        }
        if (NOT (IS_CHAR_DEAD( l_U828[4] )))
        {
            if (NOT (IS_CAR_DEAD( l_U824 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U850[4] );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 120.98100000, 1114.27200000, 14.14820000, 4.00000000, 0, 0, 5, 4.00000000, 10 );
                CLOSE_SEQUENCE_TASK( l_U850[4] );
                TASK_PERFORM_SEQUENCE( l_U828[4], l_U850[4] );
                CLEAR_SEQUENCE_TASK( l_U850[4] );
                l_U606[0] = {121.33490000, 1108.35900000, 14.24620000};
                l_U606[1] = {120.62260000, 1040.65800000, 14.45510000};
                l_U606[2] = {144.65750000, 1011.16500000, 14.47940000};
                l_U606[3] = {205.73510000, 1004.26200000, 14.59110000};
                l_U606[4] = {239.30710000, 1003.95700000, 17.59070000};
                l_U606[5] = {355.93150000, 1002.70100000, 26.74180000};
                l_U606[6] = {450.70030000, 994.08760000, 27.13320000};
                l_U606[7] = {537.67740000, 919.25730000, 20.76290000};
                l_U606[8] = {541.39130000, 848.02370000, 20.67900000};
                l_U606[9] = {535.85280000, 757.19020000, 20.44910000};
                l_U746 = 10;
                l_U1045 = 0;
                l_U1046 = 1;
                l_U873 = 5;
            }
        }
        break;
        case 5:
        if (NOT l_U1121)
        {
            if (NOT l_U861[6])
            {
                if (NOT (IS_CHAR_DEAD( l_U828[4] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U824 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                        {
                            if (LOCATE_CHAR_IN_CAR_3D( l_U828[4], 122.90320000, 1114.80700000, 14.74990000, 4.00000000, 2.00000000, 2.00000000, 0 ))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U850[6] );
                                if (NOT (IS_CAR_DEAD( l_U825[1] )))
                                {
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U825[1], 120.98100000, 1114.27200000, 14.14820000, 4.00000000, 0, 0, 3, 4.00000000, 10 );
                                }
                                CLOSE_SEQUENCE_TASK( l_U850[6] );
                                if (NOT (IS_CHAR_INJURED( l_U828[6] )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U828[6], l_U850[6] );
                                }
                                CLEAR_SEQUENCE_TASK( l_U850[6] );
                                l_U861[6] = 1;
                            }
                        }
                    }
                }
            }
            else if (NOT l_U1119)
            {
                if (sub_25876( l_U828[6], 1, 0 ))
                {
                    l_U1041 = 0;
                    sub_21706( l_U828[6], l_U825[1], l_U824, 13.00000000, 1, 30 );
                    l_U1119 = 1;
                }
            }
        }
        if (NOT l_U1083)
        {
            if (l_U1041)
            {
                l_U1041 = 0;
            }
            if (NOT (IS_CHAR_DEAD( l_U828[4] )))
            {
                if (NOT (IS_CAR_DEAD( l_U824 )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( l_U828[4], 195.60870000, 1004.51700000, 14.50840000, 1.00000000, 22.00000000, 2.00000000, 0 ))
                        {
                            l_U1083 = 1;
                        }
                    }
                }
            }
        }
        if (l_U788)
        {
            l_U1045 = 0;
            l_U606[0] = {535.71260000, 717.31120000, 20.45080000};
            l_U606[1] = {541.85880000, 659.77450000, 20.35700000};
            l_U606[2] = {625.14960000, 613.59500000, 20.03960000};
            l_U606[3] = {692.74390000, 615.24330000, 23.77950000};
            l_U606[4] = {852.54080000, 615.01820000, 38.10350000};
            l_U606[5] = {981.95450000, 621.79430000, 37.93320000};
            l_U606[6] = {1049.22600000, 621.29670000, 37.94960000};
            l_U606[7] = {1148.60100000, 622.96160000, 37.75960000};
            l_U606[8] = {1199.87300000, 582.44780000, 34.97180000};
            l_U606[9] = {1122.43500000, 549.25910000, 26.34790000};
            l_U606[10] = {1073.09700000, 523.05000000, 23.89830000};
            l_U606[11] = {1040.37800000, 474.84970000, 18.85140000};
            l_U606[12] = {998.76800000, 493.40780000, 19.52100000};
            l_U746 = 13;
            if (NOT (IS_CHAR_DEAD( l_U828[4] )))
            {
                if (NOT (IS_CAR_DEAD( l_U824 )))
                {
                    TASK_CAR_DRIVE_TO_COORD( l_U828[4], l_U824, l_U606[0]._fU0, l_U606[0]._fU4, l_U606[0]._fU8, 8.00000000, 0, 0, 5, 4.00000000, 10 );
                    l_U873 = 6;
                }
            }
        }
        else if (l_U1064)
        {
            if (NOT (IS_CHAR_DEAD( l_U828[4] )))
            {
                if (LOCATE_CHAR_IN_CAR_3D( l_U828[4], 536.40910000, 755.26260000, 20.92320000, 4.00000000, 7.00000000, 5.50000000, 0 ))
                {
                    if (NOT l_U1124)
                    {
                        GET_GAME_TIMER( ref l_U1129 );
                        l_U1124 = 1;
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U1130 );
                        if ((l_U1130 - l_U1129) > 6000)
                        {
                            if (NOT l_U1123)
                            {
                                SAY_AMBIENT_SPEECH( l_U828[4], "CRASH_GENERIC", 1, 1, 0 );
                                GET_GAME_TIMER( ref l_U1127 );
                                l_U1123 = 1;
                            }
                            else
                            {
                                GET_GAME_TIMER( ref l_U1128 );
                                if ((l_U1128 - l_U1127) > 10000)
                                {
                                    SAY_AMBIENT_SPEECH( l_U828[4], "CRASH_GENERIC", 1, 1, 0 );
                                    GET_GAME_TIMER( ref l_U1127 );
                                }
                            }
                        }
                    }
                }
            }
        }
        sub_25399();
        break;
        case 6:
        if (NOT l_U1084)
        {
            if (NOT (IS_CHAR_DEAD( l_U828[4] )))
            {
                if (NOT (IS_CAR_DEAD( l_U824 )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( l_U828[4], 1033.39500000, 622.62790000, 38.25550000, 1.00000000, 22.00000000, 2.00000000, 0 ))
                        {
                            l_U1084 = 1;
                        }
                    }
                }
            }
        }
        if (NOT l_U1085)
        {
            if (NOT (IS_CHAR_DEAD( l_U828[4] )))
            {
                if (NOT (IS_CAR_DEAD( l_U824 )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( l_U828[4], 1074.90600000, 512.22080000, 23.01540000, 1.00000000, 22.00000000, 2.00000000, 0 ))
                        {
                            l_U1085 = 1;
                        }
                    }
                }
            }
        }
        sub_25399();
        break;
    }
    if (l_U873 > 0)
    {
        if (NOT l_U1118)
        {
            if ((sub_33926()) || ((sub_33721()) || ((sub_33254()) || ((sub_33178()) || ((sub_32963()) || ((sub_32728()) || ((sub_32612()) || ((sub_27671()) || (sub_27770())))))))))
            {
                if (sub_34102())
                {
                    GET_GAME_TIMER( ref l_U1116 );
                    l_U1118 = 1;
                }
                else
                {
                    l_U872 = 1;
                    l_U861[4] = 0;
                    l_U765 = 5;
                }
                if (NOT (IS_CAR_DEAD( l_U824 )))
                {
                    if (DOES_CAR_HAVE_STUCK_CAR_CHECK( l_U824 ))
                    {
                        REMOVE_STUCK_CAR_CHECK( l_U824 );
                    }
                }
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U1117 );
            if ((l_U1117 - l_U1116) > 1500)
            {
                l_U872 = 1;
                l_U861[4] = 0;
                l_U765 = 5;
            }
        }
    }
    if (l_U1120)
    {
        if (NOT l_U1121)
        {
            if (IS_EXPLOSION_IN_AREA( -1, 96.18360000, 1125.35600000, 0.00000000, 117.69050000, 1150.40000000, 40.00000000 ))
            {
                l_U1121 = 1;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U794 )))
    {
        sub_34395( ref l_U794 );
    }
    sub_35073();
    return;
}

void sub_25399()
{
    float fVar2;
    unknown uVar3;
    int iVar4;

    if (l_U1046)
    {
        if (l_U1045 < (l_U746 - 1))
        {
            if (NOT (IS_CHAR_DEAD( l_U828[4] )))
            {
                if (NOT (IS_CAR_DEAD( l_U824 )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( l_U828[4], l_U606[l_U1045]._fU0, l_U606[l_U1045]._fU4, l_U606[l_U1045]._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                        {
                            if (DOES_BLIP_EXIST( l_U760 ))
                            {
                                REMOVE_BLIP( l_U760 );
                            }
                            l_U1045++;
                            if (l_U606[l_U1045]._fU0 == 112.41640000)
                            {
                                fVar2 = 7.00000000;
                            }
                            else
                            {
                                fVar2 = 10.00000000;
                            }
                            if ((l_U606[l_U1045]._fU0 == -55.26660000) || (l_U606[l_U1045]._fU0 == -40.07720000))
                            {
                                iVar4 = 2;
                            }
                            else
                            {
                                iVar4 = 5;
                            }
                            OPEN_SEQUENCE_TASK( ref uVar3 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U824, l_U606[l_U1045]._fU0, l_U606[l_U1045]._fU4, l_U606[l_U1045]._fU8, fVar2, 0, 0, iVar4, 4.00000000, 10 );
                            CLOSE_SEQUENCE_TASK( uVar3 );
                            TASK_PERFORM_SEQUENCE( l_U828[4], uVar3 );
                            CLEAR_SEQUENCE_TASK( uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_25876(unknown uParam0, boolean bParam1, int iParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
        if (bParam1)
        {
            if (iVar5 == 7)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (iVar5 == 1)
        {
            GET_SEQUENCE_PROGRESS( uParam0, ref iVar6 );
            if (iVar6 > iParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_27453(unknown uParam0)
{
    return;
}

int sub_27671()
{
    int I;

    for ( I = 0; I <= 9; I++ )
    {
        if (DOES_CHAR_EXIST( l_U828[I] ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U828[I], sub_4746(), 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_27770()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if ((IS_CAR_DEAD( l_U825[1] )) || ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U825[1], sub_4746() )) AND (NOT (IS_CAR_DEAD( l_U825[1] )))))
    {
        l_U1038 = 1;
        return 1;
    }
    else if ((IS_CAR_DEAD( l_U824 )) || ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U824, sub_4746() )) AND (NOT (IS_CAR_DEAD( l_U824 )))))
    {
        l_U1038 = 1;
        return 1;
    }
    if (NOT l_U1037)
    {
        if (NOT (IS_CHAR_DEAD( l_U794 )))
        {
            if (NOT (IS_CAR_DEAD( l_U824 )))
            {
                if (LOCATE_CHAR_IN_CAR_3D( l_U794, 108.44630000, 1139.23700000, 14.55310000, 16.00000000, 15.00000000, 2.00000000, 0 ))
                {
                    if (l_U1039 == -1)
                    {
                        GET_CAR_HEALTH( l_U824, ref l_U1039 );
                    }
                    else
                    {
                        GET_CAR_HEALTH( l_U824, ref l_U1040 );
                        if ((l_U1039 - l_U1040) > 200)
                        {
                            GET_CAR_COORDINATES( l_U824, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5 );
                            EXPLODE_CAR( l_U824, 1, 0 );
                            ADD_EXPLOSION( uVar2._fU0, uVar2._fU4, uVar5, 3, 1056964608, 1, 0, 1065353216 );
                            REQUEST_MODEL( 1938952078 );
                            REQUEST_MODEL( -610224615 );
                            while ((NOT (HAS_MODEL_LOADED( -610224615 ))) || (NOT (HAS_MODEL_LOADED( 1938952078 ))))
                            {
                                WAIT( 0 );
                            }
                            CREATE_EMERGENCY_SERVICES_CAR( 1938952078, 104.87400000, 1157.10600000, 14.12340000 );
                            CREATE_EMERGENCY_SERVICES_CAR( 1938952078, 117.69980000, 1135.40100000, 14.03320000 );
                            return 1;
                        }
                    }
                }
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U824 )))
    {
        GET_CAR_HEALTH( l_U824, ref l_U1040 );
    }
    return 0;
}

void sub_28464(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_28487( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_28487(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_28541( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_28541(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_28563( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_29243( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_28563(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_15740( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_15740( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_15740( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_29243(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

void sub_29433(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        OPEN_SEQUENCE_TASK( ref uVar3 );
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            TASK_LEAVE_ANY_CAR( 0 );
        }
        TASK_AIM_GUN_AT_CHAR( 0, sub_4746(), 999999 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        SET_CURRENT_CHAR_WEAPON( uParam0, 13, 0 );
        TASK_PERFORM_SEQUENCE( uParam0, uVar3 );
        CLEAR_SEQUENCE_TASK( uVar3 );
    }
    return;
}

int sub_32612()
{
    if ((l_U873 == 4) || ((l_U873 == 3) || (l_U873 == 2)))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), 108.40240000, 1154.09500000, 14.58800000, 35.00000000, 35.00000000, 2.00000000, 0 ))
        {
            if (IS_CHAR_SHOOTING( sub_4746() ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_32728()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CAR_DEAD( l_U824 )))
    {
        GET_CAR_COORDINATES( l_U824, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (LOCATE_CHAR_ON_FOOT_3D( sub_4746(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
        {
            if (IS_CHAR_TRYING_TO_ENTER_A_LOCKED_CAR( sub_4746() ))
            {
                return 1;
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U825[1] )))
    {
        GET_CAR_COORDINATES( l_U825[1], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (LOCATE_CHAR_ON_FOOT_3D( sub_4746(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
        {
            if (IS_CHAR_TRYING_TO_ENTER_A_LOCKED_CAR( sub_4746() ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_32963()
{
    if (NOT l_U880)
    {
        if (NOT (IS_CAR_DEAD( l_U824 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U794 )))
            {
                if (IS_CHAR_IN_CAR( l_U794, l_U824 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4746(), l_U794, 20.00000000, 20.00000000, 20.00000000, 0 ))
                    {
                        if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_4746(), 540.90910000, 754.81880000, 21.15910000, 1.00000000, 2.00000000, 2.00000000, 0 )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4746() )))
                            {
                                if (IS_CHAR_ARMED( sub_4746(), 6 ))
                                {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_33178()
{
    if (l_U1041)
    {
        if (IS_EXPLOSION_IN_AREA( -1, 96.18360000, 1125.35600000, 0.00000000, 117.69050000, 1150.40000000, 40.00000000 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_33254()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    switch (l_U1042)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U824 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U794 )))
            {
                if (IS_CHAR_IN_CAR( l_U794, l_U824 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U824, 0.00000000, 0.80000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                    {
                        GET_GAME_TIMER( ref l_U1043 );
                        l_U1042 = 1;
                    }
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CAR_DEAD( l_U824 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U794 )))
            {
                if (IS_CHAR_IN_CAR( l_U794, l_U824 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U824, 0.00000000, 0.80000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                    {
                        if (NOT l_U772[12])
                        {
                            GET_GAME_TIMER( ref l_U1044 );
                            if ((l_U1044 - l_U1043) > 25000)
                            {
                                PRINT_NOW( "J4_12", 7500, 1 );
                                l_U772[12] = 1;
                            }
                        }
                        else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            return 1;
                        }
                    }
                    else
                    {
                        l_U772[12] = 0;
                        l_U1042 = 0;
                    }
                }
            }
        }
        break;
    }
    return 0;
}

int sub_33721()
{
    int iVar2;

    GET_CURRENT_CHAR_WEAPON( sub_4746(), ref iVar2 );
    if (NOT (IS_CHAR_DEAD( l_U794 )))
    {
        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4746(), l_U794, 300.00000000, 300.00000000, 300.00000000, 0 )) AND ((IS_CHAR_ON_SCREEN( l_U794 )) AND ((IS_CHAR_SHOOTING( sub_4746() )) AND (iVar2 == 18))))
        {
            return 1;
        }
        else if (iVar2 != 18)
        {
            ;
        }
        else if (NOT (IS_CHAR_ON_SCREEN( l_U794 )))
        {
            ;
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4746(), l_U794, 300.00000000, 300.00000000, 300.00000000, 0 )))
        {
            ;
        };;;;
    }
    return 0;
}

int sub_33926()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CAR_DEAD( l_U824 )))
    {
        GET_CAR_COORDINATES( l_U824, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (IS_BULLET_IN_AREA( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000, 1 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U825[1] )))
    {
        GET_CAR_COORDINATES( l_U825[1], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (IS_BULLET_IN_AREA( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000, 1 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_34102()
{
    if (sub_27770())
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4746() ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_34395(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U484)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U482))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U483 + 500))
        {
            l_U482 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_34563()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_4746() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U483 );
            l_U482 = 1;
            l_U481 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U482) AND (NOT l_U481))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U481 = 1;
        }
    }
    else if (l_U481)
    {
        if (l_U484)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U481 = 0;
    };;;
    return;
}

int sub_34563()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_35073()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    switch (l_U1054)
    {
        case 0:
        if (l_U756)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), 540.57000000, 755.04800000, 20.11370000, 150.00000000, 150.00000000, 3.00000000, 0 ))
            {
                if (NOT l_U1063)
                {
                    REQUEST_MODEL( -1295524692 );
                    REQUEST_MODEL( -1174154857 );
                    REQUEST_MODEL( l_U793 );
                    REQUEST_ANIMS( "AMB@TOLLBOOTH" );
                    l_U1063 = 1;
                }
                else if ((REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\TOLLBOOTH" )) AND ((HAVE_ANIMS_LOADED( "AMB@TOLLBOOTH" )) AND ((HAS_MODEL_LOADED( l_U793 )) AND ((HAS_MODEL_LOADED( -1174154857 )) AND (HAS_MODEL_LOADED( -1295524692 ))))))
                {
                    sub_35367();
                    sub_8191( 7 );
                    l_U1054 = 1;
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U828[4] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U828[4], 540.57000000, 755.04800000, 20.11370000, 150.00000000, 150.00000000, 3.00000000, 0 ))
                {
                    if (NOT l_U1063)
                    {
                        REQUEST_MODEL( -1295524692 );
                        REQUEST_MODEL( -1174154857 );
                        REQUEST_MODEL( l_U793 );
                        REQUEST_ANIMS( "AMB@TOLLBOOTH" );
                        l_U1063 = 1;
                    }
                    else if ((REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\TOLLBOOTH" )) AND ((HAVE_ANIMS_LOADED( "AMB@TOLLBOOTH" )) AND ((HAS_MODEL_LOADED( l_U793 )) AND ((HAS_MODEL_LOADED( -1174154857 )) AND (HAS_MODEL_LOADED( -1295524692 ))))))
                    {
                        sub_35367();
                        sub_8191( 7 );
                        l_U1054 = 1;
                    }
                }
            }
        }
        break;
        case 1:
        if (NOT l_U1064)
        {
            if (NOT (IS_CHAR_FATALLY_INJURED( l_U885 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U828[4] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U824 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                        {
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U883, 0.00000000, 1.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            if (LOCATE_CAR_2D( l_U824, uVar2._fU0, uVar2._fU4, 5.00000000, 5.00000000, 0 ))
                            {
                                if (sub_25876( l_U828[4], 1, 0 ))
                                {
                                    l_U1061 = 1;
                                    if (NOT l_U1025)
                                    {
                                        if (sub_36310( l_U884, 1 ))
                                        {
                                            l_U788 = 1;
                                            l_U1054 = 2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 3: break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U828[6] )))
        {
            if (NOT (IS_CAR_DEAD( l_U825[1] )))
            {
                if (IS_CHAR_IN_CAR( l_U828[6], l_U825[1] ))
                {
                    if (LOCATE_CHAR_IN_CAR_3D( l_U828[6], 534.45860000, 740.62170000, 20.91810000, 3.00000000, 3.00000000, 2.00000000, 0 ))
                    {
                        l_U1056 = 1;
                    }
                }
            }
        }
        if (l_U765 == 8)
        {
            if (NOT (IS_CHAR_DEAD( l_U828[0] )))
            {
                if (NOT (IS_CAR_DEAD( l_U825[0] )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[0], l_U825[0] ))
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( l_U828[0], 534.45860000, 740.62170000, 20.91810000, 4.00000000, 1.00000000, 2.00000000, 1 ))
                        {
                            l_U1056 = 1;
                            l_U1054 = 4;
                        }
                    }
                }
            }
        }
        break;
    }
    sub_37008();
    if (l_U1054 > 0)
    {
        if (NOT l_U1062)
        {
            if (l_U1047 != 360.00000000)
            {
                l_U1062 = 1;
            }
        }
    }
    if (l_U1051 == 1)
    {
        ;
    }
    if (l_U1055)
    {
        if (sub_36310( l_U884, 1 ))
        {
            l_U1055 = 0;
        }
    }
    else if (l_U1056)
    {
        if (NOT l_U1055)
        {
            if (sub_36310( l_U884, 0 ))
            {
                l_U1056 = 0;
            }
        }
    }
    if (NOT l_U1064)
    {
        if (NOT (IS_CHAR_INJURED( l_U885 )))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_4746(), 540.41360000, 752.75220000, 21.11780000, 6.00000000, 6.00000000, 2.00000000, 0 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U886 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 542.50420000, 754.54440000, 19.91780000, 3, -2, 0.50000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 542.25310000, 752.57890000, 19.91780000, 3, -2, 0.50000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 542.79920000, 736.30330000, 19.91780000, 3, -2, 0.50000000 );
                TASK_SMART_FLEE_CHAR( 0, sub_4746(), 100.00000000, -1 );
                CLOSE_SEQUENCE_TASK( l_U886 );
                TASK_PERFORM_SEQUENCE( l_U885, l_U886 );
                CLEAR_SEQUENCE_TASK( l_U886 );
                sub_28464( "J4_GETOUT", ref l_U1065, 6, 1 );
                l_U1064 = 1;
            }
        }
    }
    return;
}

void sub_35367()
{
    unknown uVar2;
    unknown uVar3;
    float fVar4;
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;

    vVar5 = {540.57000000, 755.04800000, 20.11370000};
    fVar11 = 270.00000000;
    uVar2 = sub_35408( vVar5, fVar11 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uVar2, 2.89900000, -1.00000000, 0.00000000, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    CREATE_OBJECT( -1174154857, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref l_U883, 1 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uVar2, 3.09900000, -1.00000000, 1.00000000, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    CREATE_OBJECT( -1295524692, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref l_U884, 1 );
    GET_OBJECT_HEADING( uVar2, ref uVar3 );
    fVar4 = uVar3 + 90.00000000;
    if (fVar4 > 360.00000000)
    {
        fVar4 -= 360.00000000;
    }
    l_U1047 = fVar4;
    SET_OBJECT_HEADING( l_U884, 0.00000000 );
    SET_OBJECT_HEADING( l_U883, 0.00000000 );
    SET_OBJECT_DYNAMIC( l_U884, 0 );
    SET_OBJECT_DYNAMIC( l_U883, 0 );
    FREEZE_OBJECT_POSITION( l_U883, 1 );
    return;
}

void sub_35408(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown Result;

    Result = sub_35428( 1420487033, uParam0, uParam3, 1 );
    SET_OBJECT_DYNAMIC( Result, 0 );
    SET_OBJECT_COLLISION( Result, 0 );
    FREEZE_OBJECT_POSITION( Result, 1 );
    SET_OBJECT_VISIBLE( Result, 0 );
    return Result;
}

void sub_35428(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;

    CREATE_OBJECT( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, uParam5 );
    SET_OBJECT_HEADING( Result, uParam4 );
    return Result;
}

int sub_36310(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT l_U1052)
        {
            l_U1053 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U1053, "TOLLBOOTH_BARRIER_RAISE", uParam0 );
            l_U1052 = 1;
        }
        if (l_U1048._fU4 <= 84.00000000)
        {
            SET_OBJECT_ROTATION( uParam0, 0.00000000, l_U1048._fU4, 0.00000000 );
            l_U1048._fU4 += 2.00000000;
            l_U1051 = 0;
            return 0;
        }
        else
        {
            l_U1052 = 0;
            STOP_SOUND( l_U1053 );
            RELEASE_SOUND_ID( l_U1053 );
            return 1;
        }
    }
    else if (NOT l_U1052)
    {
        l_U1053 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( l_U1053, "TOLLBOOTH_BARRIER_LOWER", uParam0 );
        l_U1052 = 1;
    }
    if (l_U1048._fU4 >= 0.00000000)
    {
        l_U1051 = 1;
        SET_OBJECT_ROTATION( uParam0, 0.00000000, l_U1048._fU4, 0.00000000 );
        l_U1048._fU4 -= 1.00000000;
        return 0;
    }
    else
    {
        l_U1052 = 0;
        STOP_SOUND( l_U1053 );
        RELEASE_SOUND_ID( l_U1053 );
        return 1;
    }
    return 0;
}

void sub_37008()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_OBJECT_EXIST( l_U883 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U883, 0.00000000, 10.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (NOT l_U1057)
        {
            if (LOCATE_CHAR_IN_CAR_3D( sub_4746(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                PRINT_HELP( "J4_06" );
                l_U1057 = 1;
            }
        }
    }
    if (NOT (IS_CHAR_FATALLY_INJURED( l_U885 )))
    {
        if (l_U1051 == 1)
        {
            if (NOT l_U1058)
            {
                if (LOCATE_CHAR_IN_CAR_3D( sub_4746(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "J4_06" )))
                    {
                        if (NOT l_U772[5])
                        {
                            PRINT_HELP( "J4_05" );
                            l_U772[5] = 1;
                        }
                    }
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4746(), ref uVar2 );
                    if (NOT l_U1056)
                    {
                        if (sub_37318( uVar2 ))
                        {
                            if (sub_37404( l_U884, uVar2 ))
                            {
                                if (sub_37663( 2 ))
                                {
                                    l_U1060 = sub_37736( sub_4746(), uVar2 );
                                    TASK_PLAY_ANIM( sub_4746(), l_U1060, "AMB@TOLLBOOTH", 4.00000000, 0, 0, 0, 0, 0 );
                                    l_U1058 = 1;
                                }
                                else
                                {
                                    ADD_SCORE( sub_6920(), 3 );
                                }
                            }
                        }
                    }
                }
            }
            else if (HAS_CHAR_ANIM_FINISHED( sub_4746(), "AMB@TOLLBOOTH", l_U1060 ))
            {
                l_U1055 = 1;
            }
        }
        else if (LOCATE_CHAR_IN_CAR_3D( sub_4746(), 535.87790000, 746.28640000, 20.67760000, 3.00000000, 1.00000000, 2.00000000, 0 ))
        {
            if (l_U1051 == 0)
            {
                l_U1058 = 0;
                l_U1056 = 1;
            }
        }
    }
    if (LOCATE_CHAR_ON_FOOT_3D( sub_4746(), 541.07900000, 754.33920000, 21.15900000, 12.00000000, 12.00000000, 3.00000000, 0 ))
    {
        SET_WANTED_MULTIPLIER( 0.00000000 );
        l_U1059 = 1;
        if (NOT (IS_CHAR_DEAD( l_U794 )))
        {
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U794, 1 );
        }
    }
    else if (l_U1059)
    {
        SET_WANTED_MULTIPLIER( 0.20000000 );
        l_U1059 = 0;
    }
    return;
}

int sub_37318(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 < 5.00000000)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_37404(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    if (NOT (IS_CAR_DEAD( uParam1 )))
    {
        if (DOES_OBJECT_EXIST( uParam0 ))
        {
            GET_OBJECT_HEADING( uParam0, ref fVar7 );
            fVar7 += 180.00000000;
            if (fVar7 >= 360.00000000)
            {
                fVar7 -= 360.00000000;
            }
            GET_CAR_HEADING( uParam1, ref fVar4 );
            fVar6 = fVar7 - 15.00000000;
            if (fVar6 < 0.00000000)
            {
                fVar6 += 360.00000000;
            }
            fVar5 = fVar7 + 15.00000000;
            if (fVar5 >= 360.00000000)
            {
                fVar5 -= 360.00000000;
            }
            if (fVar5 > fVar6)
            {
                if ((fVar4 > fVar6) AND (fVar4 < fVar5))
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
            else if ((fVar4 > fVar6) || (fVar4 < fVar5))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_37663(unknown uParam0)
{
    if (IS_SCORE_GREATER( sub_6920(), uParam0 ))
    {
        ADD_SCORE( sub_6920(), -uParam0 );
        return 1;
        break;
    }
    return 0;
}

void sub_37736(unknown uParam0, unknown uParam1)
{
    string Result;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            Result = "Give_Money";
            if (sub_37791( uParam1 ))
            {
                Result = "toss_money_chopper";
            }
            else if (sub_37867( uParam1 ))
            {
                Result = "toss_money_dirt";
            }
            else if (sub_37940( uParam1 ))
            {
                Result = "toss_money_freeway";
            }
            else if (sub_38031( uParam1 ))
            {
                Result = "toss_money_scooter";
            }
            else if (sub_38107( uParam1 ))
            {
                Result = "toss_money_spt";
            };;;;;
        }
    }
    return Result;
}

int sub_37791(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, -570033273 ))
    {
        return 1;
    }
    return 0;
}

int sub_37867(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, 788045382 ))
    {
        return 1;
    }
    return 0;
}

int sub_37940(unknown uParam0)
{
    if ((IS_CAR_MODEL( uParam0, 584879743 )) || (IS_CAR_MODEL( uParam0, -1830458836 )))
    {
        return 1;
    }
    return 0;
}

int sub_38031(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, -1842748181 ))
    {
        return 1;
    }
    return 0;
}

int sub_38107(unknown uParam0)
{
    if ((IS_CAR_MODEL( uParam0, -909201658 )) || (IS_CAR_MODEL( uParam0, 1203311498 )))
    {
        return 1;
    }
    return 0;
}

void sub_38959()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    sub_38996( l_U1094, "Convoy flee prog...." );
    if (NOT l_U1107)
    {
        if (sub_39024())
        {
            if (NOT (IS_CHAR_INJURED( l_U828[6] )))
            {
                OPEN_SEQUENCE_TASK( ref uVar9 );
                if (IS_CHAR_IN_ANY_CAR( l_U828[6] ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_COMBAT( 0, sub_4746() );
                CLOSE_SEQUENCE_TASK( uVar9 );
                SET_CHAR_DECISION_MAKER( l_U828[6], l_U874 );
                SET_COMBAT_DECISION_MAKER( l_U828[6], l_U875 );
                SET_CHAR_RELATIONSHIP( l_U828[6], 5, 0 );
                TASK_PERFORM_SEQUENCE( l_U828[6], uVar9 );
                CLEAR_SEQUENCE_TASK( uVar9 );
            }
            l_U1107 = 1;
        }
    }
    if (NOT l_U1037)
    {
        switch (l_U1094)
        {
            case 0:
            if (DOES_BLIP_EXIST( l_U760 ))
            {
                REMOVE_BLIP( l_U760 );
            }
            if (IS_CHAR_IN_ANY_CAR( sub_4746() ))
            {
                GET_CAR_CHAR_IS_USING( sub_4746(), ref uVar2 );
                if (NOT (IS_CHAR_INJURED( l_U828[0] )))
                {
                    if (sub_39547( l_U828[0], l_U825[0] ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U850[0] );
                        TASK_CAR_MISSION( 0, l_U825[0], uVar2, 6, 30.00000000, 3, -1, -1 );
                        CLOSE_SEQUENCE_TASK( l_U850[0] );
                        TASK_PERFORM_SEQUENCE( l_U828[0], l_U850[0] );
                        CLEAR_SEQUENCE_TASK( l_U850[0] );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U828[6] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U825[1] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U828[6], l_U825[1] ))
                        {
                            if (NOT l_U1107)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U850[6] );
                                TASK_CAR_MISSION( 0, l_U825[1], uVar2, 12, 30.00000000, 3, -1, -1 );
                                CLOSE_SEQUENCE_TASK( l_U850[6] );
                                TASK_PERFORM_SEQUENCE( l_U828[6], l_U850[6] );
                                CLEAR_SEQUENCE_TASK( l_U850[6] );
                            }
                        }
                    }
                }
                if (NOT l_U1106)
                {
                    if (NOT (IS_CHAR_INJURED( l_U828[7] )))
                    {
                        if (sub_39547( l_U828[7], l_U825[1] ))
                        {
                            sub_39963( l_U828[7], l_U825[1] );
                        }
                        else
                        {
                            sub_40115( ref l_U828[7], 0 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U828[9] )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U828[9] ))
                        {
                            sub_39963( l_U828[9], l_U825[1] );
                        }
                        else
                        {
                            sub_40115( ref l_U828[9], 0 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U828[8] )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U828[8] ))
                        {
                            sub_39963( l_U828[8], l_U825[1] );
                        }
                        else
                        {
                            sub_40115( ref l_U828[8], 0 );
                        }
                    }
                }
                l_U1094 = 3;
                l_U1095 = 1;
            }
            else
            {
                l_U1094 = 1;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4746() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U828[0] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U825[0] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U828[0], l_U825[0] ))
                        {
                            GET_CHAR_COORDINATES( sub_4746(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                            if (GET_CLOSEST_CAR_NODE( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 ))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U850[0] );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U825[0], uVar6._fU0, uVar6._fU4, uVar6._fU8, 30.00000000, 0, 0, 3, 4.00000000, -1 );
                                CLOSE_SEQUENCE_TASK( l_U850[0] );
                                TASK_PERFORM_SEQUENCE( l_U828[0], l_U850[0] );
                                CLEAR_SEQUENCE_TASK( l_U850[0] );
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U828[1] )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U828[1] ))
                    {
                        sub_39963( l_U828[1], l_U825[0] );
                    }
                    else
                    {
                        sub_40115( ref l_U828[1], 0 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U828[6] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U825[1] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U828[6], l_U825[1] ))
                        {
                            if (NOT l_U1107)
                            {
                                GET_CHAR_COORDINATES( sub_4746(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                if (GET_CLOSEST_CAR_NODE( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 ))
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U850[6] );
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U825[1], uVar6._fU0, uVar6._fU4, uVar6._fU8, 30.00000000, 0, 0, 3, 4.00000000, -1 );
                                    CLOSE_SEQUENCE_TASK( l_U850[6] );
                                    TASK_PERFORM_SEQUENCE( l_U828[6], l_U850[6] );
                                    CLEAR_SEQUENCE_TASK( l_U850[6] );
                                }
                            }
                        }
                    }
                }
                if (NOT l_U1106)
                {
                    if (NOT (IS_CHAR_INJURED( l_U828[7] )))
                    {
                        sub_39963( l_U828[7], l_U825[1] );
                    }
                    sub_40115( ref l_U828[2], 0 );
                    sub_40115( ref l_U828[3], 0 );
                    if (NOT (IS_CHAR_INJURED( l_U828[9] )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U828[9] ))
                        {
                            sub_39963( l_U828[9], l_U825[1] );
                        }
                        else
                        {
                            sub_40115( ref l_U828[9], 0 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U828[8] )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U828[8] ))
                        {
                            sub_39963( l_U828[8], l_U825[1] );
                        }
                        else
                        {
                            sub_40115( ref l_U828[8], 0 );
                        }
                    }
                }
                l_U1094 = 2;
            }
            else
            {
                l_U1094 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4746() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U828[0] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U825[0] )))
                    {
                        if (sub_25876( l_U828[0], 1, 0 ))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U828[0], sub_4746(), 20.00000000, 20.00000000, 0 )))
                            {
                                GET_CHAR_COORDINATES( sub_4746(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                if (GET_CLOSEST_CAR_NODE( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 ))
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U850[0] );
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U825[0], uVar6._fU0, uVar6._fU4, uVar6._fU8, 30.00000000, 0, 0, 3, 4.00000000, -1 );
                                    CLOSE_SEQUENCE_TASK( l_U850[0] );
                                    TASK_PERFORM_SEQUENCE( l_U828[0], l_U850[0] );
                                    CLEAR_SEQUENCE_TASK( l_U850[0] );
                                }
                            }
                        }
                    }
                }
                if (sub_25876( l_U828[1], 1, 0 ))
                {
                    sub_39963( l_U828[1], l_U825[0] );
                }
                if (NOT (IS_CHAR_INJURED( l_U828[6] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U825[1] )))
                    {
                        if (sub_25876( l_U828[6], 1, 0 ))
                        {
                            if (NOT l_U1107)
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U828[6], sub_4746(), 20.00000000, 20.00000000, 0 )))
                                {
                                    GET_CHAR_COORDINATES( sub_4746(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    if (GET_CLOSEST_CAR_NODE( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 ))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U850[6] );
                                        TASK_CAR_DRIVE_TO_COORD( 0, l_U825[1], uVar6._fU0, uVar6._fU4, uVar6._fU8, 30.00000000, 0, 0, 3, 4.00000000, -1 );
                                        CLOSE_SEQUENCE_TASK( l_U850[6] );
                                        TASK_PERFORM_SEQUENCE( l_U828[6], l_U850[6] );
                                        CLEAR_SEQUENCE_TASK( l_U850[6] );
                                    }
                                }
                            }
                        }
                    }
                }
                if (NOT l_U1106)
                {
                    if (sub_25876( l_U828[7], 1, 0 ))
                    {
                        sub_39963( l_U828[7], l_U825[1] );
                    }
                }
            }
            else
            {
                l_U1094 = 0;
            }
            break;
            case 3: break;
        }
    }
    else if (NOT l_U1038)
    {
        if ((sub_27671()) || (sub_27770()))
        {
            l_U1037 = 0;
        }
    }
    if (NOT l_U1104)
    {
        if (NOT l_U861[4])
        {
            if (NOT (IS_CHAR_INJURED( l_U828[4] )))
            {
                l_U748 = sub_42063();
                if (l_U748 > -1)
                {
                    if (NOT sub_42628())
                    {
                        if (NOT (IS_CAR_DEAD( l_U824 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U850[4] );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U824, l_U676[l_U748]._fU0, l_U676[l_U748]._fU4, l_U676[l_U748]._fU8, 30.00000000, 0, 0, 2, 4.00000000, 10 );
                            CLOSE_SEQUENCE_TASK( l_U850[4] );
                            TASK_PERFORM_SEQUENCE( l_U828[4], l_U850[4] );
                            CLEAR_SEQUENCE_TASK( l_U850[4] );
                            ADD_STUCK_CAR_CHECK_WITH_WARP( l_U824, 2.00000000, 10000, 1, 1, 1, 1 );
                            l_U861[4] = 1;
                            l_U1104 = 1;
                        }
                    }
                }
                if (NOT l_U1037)
                {
                    if (NOT sub_42628())
                    {
                        if (NOT (IS_CHAR_DEAD( l_U828[5] )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U828[5] ))
                            {
                                sub_39963( l_U828[5], l_U824 );
                            }
                            else if (NOT l_U1105)
                            {
                                CLEAR_CHAR_TASKS( l_U828[5] );
                                sub_40115( ref l_U828[5], 0 );
                                l_U1105 = 0;
                            }
                        }
                    }
                }
            }
            else
            {
                l_U1104 = 1;
            }
        }
    }
    else
    {
        sub_42628();
    }
    if (l_U1095)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4746() ))
        {
            GET_CAR_CHAR_IS_USING( sub_4746(), ref uVar2 );
            if (NOT (IS_CAR_DEAD( l_U825[0] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U828[0] )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[0], l_U825[0] ))
                    {
                        if (NOT l_U1107)
                        {
                            sub_44654( ref l_U825[0], 100.00000000, 30.00000000, 30.00000000, 8 );
                            if (sub_25876( l_U828[0], 1, 0 ))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U850[0] );
                                TASK_CAR_MISSION( 0, l_U825[0], uVar2, 6, 30.00000000, 3, -1, -1 );
                                CLOSE_SEQUENCE_TASK( l_U850[0] );
                                TASK_PERFORM_SEQUENCE( l_U828[0], l_U850[0] );
                                CLEAR_SEQUENCE_TASK( l_U850[0] );
                            }
                        }
                    }
                }
            }
            if (sub_25876( l_U828[1], 1, 0 ))
            {
                sub_39963( l_U828[1], l_U825[0] );
            }
            if (NOT (IS_CAR_DEAD( l_U825[1] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U828[6] )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[6], l_U825[1] ))
                    {
                        sub_44654( ref l_U825[1], 200.00000000, 150.00000000, 30.00000000, 8 );
                        if (sub_25876( l_U828[6], 1, 0 ))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U850[6] );
                            TASK_CAR_MISSION( 0, l_U825[1], uVar2, 6, 30.00000000, 3, -1, -1 );
                            CLOSE_SEQUENCE_TASK( l_U850[6] );
                            TASK_PERFORM_SEQUENCE( l_U828[6], l_U850[6] );
                            CLEAR_SEQUENCE_TASK( l_U850[6] );
                        }
                    }
                }
            }
            if (NOT l_U1106)
            {
                if (sub_25876( l_U828[7], 1, 0 ))
                {
                    sub_39963( l_U828[7], l_U825[1] );
                }
            }
        }
        else
        {
            l_U1095 = 0;
            l_U1094 = 1;
        }
        if (sub_25876( l_U828[5], 1, 0 ))
        {
            sub_39963( l_U828[5], l_U824 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U828[4] )))
    {
        if (NOT (IS_CAR_DEAD( l_U824 )))
        {
            if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
            {
                if (NOT sub_42628())
                {
                    if (l_U748 >= 1)
                    {
                        sub_46708();
                    }
                }
            }
        }
    }
    if (NOT l_U1106)
    {
        if (IS_CHAR_DEAD( l_U828[6] ))
        {
            sub_40115( ref l_U828[9], 1 );
            sub_40115( ref l_U828[8], 1 );
            sub_40115( ref l_U828[7], 1 );
            l_U1106 = 1;
        }
    }
    if (NOT l_U1103)
    {
        if (sub_47128())
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                sub_28464( "JA_ATTACK", ref l_U1097, 6, 1 );
                l_U1103 = 1;
            }
        }
    }
    sub_34395( ref l_U794 );
    return;
}

void sub_38996(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_39024()
{
    if (NOT (IS_CHAR_INJURED( l_U828[6] )))
    {
        if ((IS_CHAR_INJURED( l_U828[8] )) AND ((IS_CHAR_INJURED( l_U828[9] )) AND (IS_CHAR_INJURED( l_U828[7] ))))
        {
            return 1;
        }
        if (NOT (IS_VEH_DRIVEABLE( l_U825[1] )))
        {
            return 1;
        }
        else if ((NOT (sub_21160( l_U828[8], l_U825[1] ))) AND ((NOT (sub_21160( l_U828[9], l_U825[1] ))) AND (IS_CHAR_INJURED( l_U828[7] ))))
        {
            return 1;
        }
    }
    return 0;
}

int sub_39547(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_39963(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                OPEN_SEQUENCE_TASK( ref uVar4 );
                TASK_DRIVE_BY( 0, sub_4746(), 0, 0.00000000, 0.00000000, 0.00000000, 100.00000000, 8, 1, 90 );
                CLOSE_SEQUENCE_TASK( uVar4 );
                TASK_PERFORM_SEQUENCE( uParam0, uVar4 );
                CLEAR_SEQUENCE_TASK( uVar4 );
            }
        }
    }
    return;
}

int sub_40115(unknown uParam0, boolean bParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((bParam1) || (NOT (IS_CHAR_IN_ANY_CAR( (uParam0^) ))))
        {
            OPEN_SEQUENCE_TASK( ref uVar4 );
            if (bParam1)
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_COMBAT( 0, sub_4746() );
            CLOSE_SEQUENCE_TASK( uVar4 );
            SET_CHAR_DECISION_MAKER( (uParam0^), l_U874 );
            SET_COMBAT_DECISION_MAKER( (uParam0^), l_U875 );
            SET_CHAR_RELATIONSHIP( (uParam0^), 5, 0 );
            TASK_PERFORM_SEQUENCE( (uParam0^), uVar4 );
            CLEAR_SEQUENCE_TASK( uVar4 );
            return 1;
        }
    }
    return 0;
}

void sub_42063()
{
    int Result;

    Result = -1;
    switch (l_U873)
    {
        case 1:
        Result = 1;
        break;
        case 2:
        case 3:
        case 4:
        if (sub_42143())
        {
            Result = 2;
        }
        break;
        case 5:
        if (l_U1083)
        {
            if (l_U1061)
            {
                Result = 5;
            }
            else
            {
                Result = 4;
            }
        }
        else
        {
            Result = 2;
        }
        break;
        case 6:
        if (l_U1084)
        {
            if (l_U1085)
            {
                Result = 7;
            }
            else
            {
                Result = 6;
            }
        }
        else
        {
            Result = 5;
        }
        break;
    }
    return Result;
}

int sub_42143()
{
    unknown uVar2;

    if (NOT (IS_CHAR_DEAD( l_U828[4] )))
    {
        if (NOT (IS_CAR_DEAD( l_U824 )))
        {
            if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
            {
                if (NOT l_U1082)
                {
                    if (LOCATE_CHAR_IN_CAR_3D( l_U828[4], 105.39520000, 1139.17400000, 14.55310000, 7.00000000, 15.00000000, 2.00000000, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 108.75940000, 1126.55500000, 14.55310000, 4.00000000, 0, 0, 5, 4.00000000, 10 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 117.39560000, 1125.00600000, 14.34350000, 4.00000000, 0, 0, 5, 4.00000000, 10 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 120.51460000, 1119.57900000, 14.13130000, 4.00000000, 0, 0, 5, 4.00000000, 10 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U828[4], uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1082 = 1;
                    }
                    else
                    {
                        return 1;
                    }
                }
                else if (sub_25876( l_U828[4], 1, 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_42628()
{
    sub_27453( "Calling..." );
    if (l_U1093)
    {
        return 1;
    }
    else if (NOT l_U1093)
    {
        if (NOT (IS_CAR_DEAD( l_U824 )))
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U824 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U828[4] )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U828[4], 10, 1 );
                        sub_40115( ref l_U828[4], 1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U828[5] )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[5], l_U824 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U828[5], 13, 1 );
                        sub_40115( ref l_U828[5], 1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U794 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U795 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_COMBAT( 0, sub_4746() );
                    CLOSE_SEQUENCE_TASK( l_U795 );
                    SET_CURRENT_CHAR_WEAPON( l_U794, 11, 1 );
                    SET_CHAR_DECISION_MAKER( l_U794, l_U874 );
                    SET_COMBAT_DECISION_MAKER( l_U794, l_U876 );
                    TASK_PERFORM_SEQUENCE( l_U794, l_U795 );
                    CLEAR_SEQUENCE_TASK( l_U795 );
                }
                l_U1093 = 1;
            }
        }
    }
    if (NOT l_U1093)
    {
        if (IS_CHAR_INJURED( l_U828[4] ))
        {
            if (NOT (IS_CAR_DEAD( l_U824 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U828[5] )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[5], l_U824 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U828[5], 13, 1 );
                        sub_40115( ref l_U828[5], 1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U794 )))
                {
                    if (IS_CHAR_IN_CAR( l_U794, l_U824 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U795 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, sub_4746() );
                        CLOSE_SEQUENCE_TASK( l_U795 );
                        SET_CURRENT_CHAR_WEAPON( l_U794, 11, 1 );
                        SET_CHAR_DECISION_MAKER( l_U794, l_U874 );
                        SET_COMBAT_DECISION_MAKER( l_U794, l_U876 );
                        TASK_PERFORM_SEQUENCE( l_U794, l_U795 );
                        CLEAR_SEQUENCE_TASK( l_U795 );
                    }
                }
                l_U1093 = 1;
            }
        }
    }
    if (NOT l_U1093)
    {
        if (NOT (IS_CAR_DEAD( l_U824 )))
        {
            if ((NOT (IS_VEH_DRIVEABLE( l_U824 ))) || ((CHECK_STUCK_TIMER( l_U824, 1, 40000 )) || ((CHECK_STUCK_TIMER( l_U824, 3, 20000 )) || (CHECK_STUCK_TIMER( l_U824, 0, 5000 )))))
            {
                if (DOES_CAR_HAVE_STUCK_CAR_CHECK( l_U824 ))
                {
                    REMOVE_STUCK_CAR_CHECK( l_U824 );
                }
                if (NOT (IS_CHAR_INJURED( l_U828[4] )))
                {
                    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U828[4], 1 );
                    if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U828[4], 10, 1 );
                        sub_40115( ref l_U828[4], 1 );
                        sub_27453( "guard_ped[RAY_DRIVER] attacking...." );
                    }
                    else
                    {
                        sub_27453( "not in car!" );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U828[5] )))
                {
                    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U828[5], 1 );
                    if (IS_CHAR_IN_CAR( l_U828[5], l_U824 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U828[5], 13, 1 );
                        sub_40115( ref l_U828[5], 1 );
                        sub_27453( "guard_ped[RAY_DRIVER] attacking...." );
                    }
                    else
                    {
                        sub_27453( "not in car!" );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U794 )))
                {
                    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U794, 1 );
                    if (IS_CHAR_IN_CAR( l_U794, l_U824 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U795 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_COMBAT( 0, sub_4746() );
                        CLOSE_SEQUENCE_TASK( l_U795 );
                        SET_CURRENT_CHAR_WEAPON( l_U794, 11, 1 );
                        SET_CHAR_DECISION_MAKER( l_U794, l_U874 );
                        SET_COMBAT_DECISION_MAKER( l_U794, l_U876 );
                        TASK_PERFORM_SEQUENCE( l_U794, l_U795 );
                        CLEAR_SEQUENCE_TASK( l_U795 );
                    }
                }
                l_U1093 = 1;
            }
        }
    }
    if (NOT l_U1093)
    {
        if (IS_CHAR_FATALLY_INJURED( l_U794 ))
        {
            if (NOT (IS_CAR_DEAD( l_U824 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U828[4] )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U828[4], 10, 1 );
                        sub_40115( ref l_U828[4], 1 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U828[5] )))
                {
                    if (IS_CHAR_IN_CAR( l_U828[5], l_U824 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U828[5], 13, 1 );
                        sub_40115( ref l_U828[5], 1 );
                    }
                }
                l_U1093 = 1;
            }
        }
    }
    return 0;
}

int sub_44654(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_4746(), (uParam0^), uParam1, uParam1, uParam1, 0 )))
        {
            if (NOT (IS_CAR_ON_SCREEN( (uParam0^) )))
            {
                if (iParam4 == 8)
                {
                    uVar8 = {sub_44736( uParam0, uParam2 )};
                }
                else
                {
                    uVar8 = {sub_44851( iParam4, uParam2, 0 )};
                }
                return sub_45782( uParam0, uVar8, uParam3 );
            }
        }
    }
    return 0;
}

void sub_44736(unknown uParam0, unknown uParam1)
{
    vector Result;
    vector vVar7;

    GET_CAR_COORDINATES( (uParam0^), ref Result.x, ref Result.y, ref Result.z );
    GET_CHAR_COORDINATES( sub_4746(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
    Result = {Result - vVar7};
    Result = {Result * (uParam1 / (VMAG( Result )))};
    Result = {Result + vVar7};
    return Result;
}

void sub_44851(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;

    switch (uParam0)
    {
        case 0:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), (uParam1 * 0.80000000) * -1.00000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), uParam1 * -1.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 1:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 2:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 3:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), uParam1 * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), uParam1, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 4:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), uParam1 * 0.65000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), uParam1 * 0.80000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 5:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), 0.00000000, (uParam1 * -1.00000000) * 0.65000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), 0.00000000, uParam1 * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 6:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), (uParam1 * 0.65000000) * -1.00000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), (uParam1 * 0.80000000) * -1.00000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 7:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), (uParam1 * -1.00000000) * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4746(), uParam1 * -1.00000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
    }
    return Result;
}

int sub_45782(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_4746(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_NTH_CLOSEST_CAR_NODE_FAVOUR_DIRECTION( uParam1, uVar7, 1, ref uVar10, ref uVar13 );
        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar10._fU0, uVar10._fU4, uVar10._fU8, 10.00000000, 10.00000000, 10.00000000 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar14 );
            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar14, uVar10._fU0, uVar10._fU4, uVar10._fU8, 8.00000000 )))
            {
                CLEAR_AREA( uVar10._fU0, uVar10._fU4, uVar10._fU8, 6.00000000, 0 );
                SET_CAR_COORDINATES( (uParam0^), uVar10._fU0, uVar10._fU4, uVar10._fU8 );
                uVar16 = {-SIN( uVar13 ), COS( uVar13 ), 0.00000000};
                GET_ANGLE_BETWEEN_2D_VECTORS( uVar16._fU0, uVar16._fU4, uVar7._fU0 - uVar10._fU0, uVar7._fU4 - uVar10._fU4, ref fVar15 );
                if (fVar15 > 90.00000000)
                {
                    SET_CAR_HEADING( (uParam0^), uVar13 + 180.00000000 );
                }
                else
                {
                    SET_CAR_HEADING( (uParam0^), uVar13 );
                }
                SET_CAR_FORWARD_SPEED( (uParam0^), uParam4 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_46708()
{
    unknown uVar2;

    if (l_U748 < (l_U747 - 1))
    {
        if (NOT (IS_CHAR_DEAD( l_U828[4] )))
        {
            if (NOT (IS_CAR_DEAD( l_U824 )))
            {
                if (IS_CHAR_IN_CAR( l_U828[4], l_U824 ))
                {
                    if (LOCATE_CHAR_IN_CAR_3D( l_U828[4], l_U676[l_U748]._fU0, l_U676[l_U748]._fU4, l_U676[l_U748]._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U760 ))
                        {
                            REMOVE_BLIP( l_U760 );
                        }
                        l_U748++;
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U824, l_U676[l_U748]._fU0, l_U676[l_U748]._fU4, l_U676[l_U748]._fU8, 30.00000000, 0, 0, 5, 4.00000000, 10 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U828[4], uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                    }
                }
            }
        }
    }
    return;
}

int sub_47128()
{
    int I;

    I = 0;
    for ( I = 0; I <= 9; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U828[I] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4746(), l_U828[I], 40.00000000, 40.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_47305()
{
    unknown uVar2;
    unknown uVar3;

    switch (l_U1086)
    {
        case 0:
        if (sub_47368( 1, 1 ))
        {
            if (sub_6824())
            {
                SET_PLAYER_CONTROL( sub_6920(), 0 );
                DO_SCREEN_FADE_OUT( 1000 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_USE_HIGHDOF( 1 );
                if ((LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), 985.47170000, 529.37580000, 22.21170000, 10.00000000, 12.00000000, 3.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), 985.23510000, 519.81650000, 21.92920000, 10.00000000, 12.00000000, 3.00000000, 0 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_4746() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4746(), ref uVar3 );
                        SET_CAR_COORDINATES( uVar3, 963.91240000, 519.48310000, 21.94750000 );
                        SET_CAR_HEADING( uVar3, 214.02810000 );
                        SET_CAR_ON_GROUND_PROPERLY( uVar3 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_4746(), 962.78850000, 515.21730000, 22.32840000 );
                        SET_CHAR_HEADING( sub_4746(), 332.44480000 );
                    }
                }
                DISPLAY_RADAR( 0 );
                SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                if (NOT (DOES_VEHICLE_EXIST( l_U824 )))
                {
                    sub_8191( 0 );
                }
                if (NOT (DOES_CHAR_EXIST( l_U794 )))
                {
                    sub_8191( 1 );
                    sub_21935( l_U794, l_U824, 1 );
                    sub_21935( l_U828[4], l_U824, -1 );
                    sub_21935( l_U828[5], l_U824, 0 );
                }
                CLEAR_AREA( 986.29080000, 534.89790000, 21.98740000, 50.00000000, 1 );
                if (NOT (IS_CAR_DEAD( l_U824 )))
                {
                    SET_CAR_COORDINATES( l_U824, 985.64220000, 523.03670000, 21.05570000 );
                    SET_CAR_HEADING( l_U824, 0.74430000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U824 );
                    SET_CAR_CAN_BE_DAMAGED( l_U824, 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U828[4] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U824 )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 986.29080000, 534.89790000, 21.98740000, 5.00000000, 0, 0, 5, 4.00000000, 10 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        CLEAR_CHAR_TASKS( l_U828[4] );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                    }
                }
                if (DOES_CHAR_EXIST( l_U828[6] ))
                {
                    DELETE_CHAR( ref l_U828[6] );
                }
                if (DOES_CHAR_EXIST( l_U828[7] ))
                {
                    DELETE_CHAR( ref l_U828[7] );
                }
                if (DOES_CHAR_EXIST( l_U828[8] ))
                {
                    DELETE_CHAR( ref l_U828[8] );
                }
                if (DOES_CHAR_EXIST( l_U828[9] ))
                {
                    DELETE_CHAR( ref l_U828[9] );
                }
                if (DOES_VEHICLE_EXIST( l_U825[1] ))
                {
                    DELETE_CAR( ref l_U825[1] );
                }
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U790 );
                BEGIN_CAM_COMMANDS( ref l_U878 );
                CREATE_CAM( 14, ref l_U798[0] );
                SET_CAM_POS( l_U798[0], 977.06140000, 514.15890000, 26.86534000 );
                SET_CAM_ROT( l_U798[0], -11.71129000, 0.00000000, -39.53210000 );
                SET_CAM_ACTIVE( l_U798[0], 1 );
                SET_CAM_PROPAGATE( l_U798[0], 1 );
                SET_CAM_FOV( l_U798[0], 70.00000000 );
                SET_CAM_NEAR_DOF( l_U798[0], 0.50000000 );
                SET_CAM_FAR_DOF( l_U798[0], 22.00000000 );
                CREATE_CAM( 14, ref l_U798[1] );
                SET_CAM_POS( l_U798[1], 977.06140000, 514.15890000, 26.86534000 );
                SET_CAM_ROT( l_U798[1], -11.71129000, 0.00000000, -39.53210000 );
                SET_CAM_ACTIVE( l_U798[1], 1 );
                SET_CAM_PROPAGATE( l_U798[1], 0 );
                SET_CAM_FOV( l_U798[1], 60.00000000 );
                SET_CAM_NEAR_DOF( l_U798[1], 0.50000000 );
                SET_CAM_FAR_DOF( l_U798[1], 22.00000000 );
                CREATE_CAM( 3, ref l_U798[2] );
                SET_CAM_ACTIVE( l_U798[2], 0 );
                SET_CAM_PROPAGATE( l_U798[2], 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                WAIT( 500 );
                DO_SCREEN_FADE_IN( 500 );
                l_U1086 = 1;
            }
        }
        break;
        case 1:
        SET_CAM_ACTIVE( l_U798[0], 0 );
        SET_CAM_PROPAGATE( l_U798[0], 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U798[2], l_U798[0], l_U798[1], 12000, 0 );
        SET_CAM_ACTIVE( l_U798[2], 1 );
        SET_CAM_PROPAGATE( l_U798[2], 1 );
        if (NOT (IS_CHAR_DEAD( l_U828[4] )))
        {
            if (NOT (IS_CAR_DEAD( l_U824 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 986.29080000, 534.89790000, 21.98740000, 5.00000000, 0, 0, 5, 4.00000000, 10 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U828[4], uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                GET_GAME_TIMER( ref l_U1087 );
                l_U1086 = 2;
            }
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U1088 );
        if (((l_U1088 - l_U1087) > 10000) || (sub_25876( l_U828[4], 1, 0 )))
        {
            CLOSE_GARAGE( "QW2MG2" );
            l_U1086 = 3;
        }
        break;
        case 3:
        if (IS_GARAGE_CLOSED( "QW2MG2" ))
        {
            if (DOES_CHAR_EXIST( l_U794 ))
            {
                DELETE_CHAR( ref l_U794 );
                sub_49287( 14 );
            }
            if (DOES_CHAR_EXIST( l_U828[5] ))
            {
                DELETE_CHAR( ref l_U828[5] );
            }
            if (DOES_CHAR_EXIST( l_U828[4] ))
            {
                DELETE_CHAR( ref l_U828[4] );
            }
            if (DOES_CHAR_EXIST( l_U828[6] ))
            {
                DELETE_CHAR( ref l_U828[6] );
            }
            if (DOES_CHAR_EXIST( l_U828[7] ))
            {
                DELETE_CHAR( ref l_U828[7] );
            }
            if (DOES_CHAR_EXIST( l_U828[9] ))
            {
                DELETE_CHAR( ref l_U828[9] );
            }
            if (DOES_CHAR_EXIST( l_U828[8] ))
            {
                DELETE_CHAR( ref l_U828[8] );
            }
            if (DOES_VEHICLE_EXIST( l_U825[1] ))
            {
                DELETE_CAR( ref l_U825[1] );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U791 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U792 );
            if (DOES_VEHICLE_EXIST( l_U824 ))
            {
                DELETE_CAR( ref l_U824 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U789 );
            SET_CAM_ACTIVE( l_U798[2], 0 );
            SET_CAM_PROPAGATE( l_U798[2], 0 );
            SET_CAM_ACTIVE( l_U798[1], 0 );
            SET_CAM_PROPAGATE( l_U798[1], 0 );
            SET_CAM_ACTIVE( l_U798[0], 0 );
            SET_CAM_PROPAGATE( l_U798[0], 0 );
            DESTROY_CAM( l_U798[2] );
            DESTROY_CAM( l_U798[0] );
            DESTROY_CAM( l_U798[1] );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_USE_HIGHDOF( 0 );
            END_CAM_COMMANDS( ref l_U878 );
            DISPLAY_RADAR( 1 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_6920(), 1 );
            sub_7043();
            sub_11686( 2 );
            l_U1086 = 4;
        }
        break;
        case 4: break;
    }
    return;
}

int sub_47368(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4746() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4746(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 > 1.01100000) || (fVar6 < 0.95000000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4746() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4746(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4746()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4746() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4746() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_6920() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_6920() )))
    {
        return 0;
    }
    return 1;
}

void sub_49287(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_7298( uParam0 ) );
    return;
}

void sub_49858()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown[20] uVar6;

    array(ref uVar6, 20);
    switch (l_U1170)
    {
        case 0:
        CLOSE_GARAGE( "QW2MG2" );
        l_U1170 = 99;
        break;
        case 1:
        for ( I = 0; I <= 12; I++ )
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), l_U606[I]._fU0, l_U606[I]._fU4, l_U606[I]._fU8, 5.00000000, 5.00000000, 40.00000000, 1 ))
            {
                ;
            }
        }
        break;
    }
    return;
}

void sub_50045()
{
    if (NOT (IS_CHAR_DEAD( l_U828[0] )))
    {
        if (NOT (IS_CAR_DEAD( l_U825[0] )))
        {
            if (IS_CHAR_IN_CAR( l_U828[0], l_U825[0] ))
            {
                if (LOCATE_CHAR_IN_CAR_3D( l_U828[0], 123.56550000, 1037.23800000, 14.76090000, 11.00000000, 1.00000000, 2.00000000, 0 ))
                {
                    SWITCH_ROADS_OFF( 145.33570000, 1014.08100000, 0.00000000, 165.39840000, 1079.56700000, 100.00000000 );
                    SWITCH_ROADS_OFF( 173.41490000, 1009.56600000, 0.00000000, 176.92830000, 1014.24900000, 100.00000000 );
                    SWITCH_ROADS_OFF( 173.42700000, 878.06870000, 0.00000000, 177.82980000, 996.78560000, 100.00000000 );
                    SWITCH_ROADS_OFF( 160.61230000, 1002.84700000, 0.00000000, 165.27580000, 1008.29800000, 100.00000000 );
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U828[6] )))
    {
        if (NOT (IS_CAR_DEAD( l_U825[1] )))
        {
            if (IS_CHAR_IN_CAR( l_U828[6], l_U825[1] ))
            {
                if (LOCATE_CHAR_IN_CAR_3D( l_U828[6], 123.56550000, 1037.23800000, 14.76090000, 11.00000000, 1.00000000, 2.00000000, 0 ))
                {
                    SWITCH_ROADS_BACK_TO_ORIGINAL( 145.33570000, 1014.08100000, 0.00000000, 165.39840000, 1079.56700000, 100.00000000 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( 173.41490000, 1009.56600000, 0.00000000, 176.92830000, 1014.24900000, 100.00000000 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( 173.42700000, 878.06870000, 0.00000000, 177.82980000, 996.78560000, 100.00000000 );
                    SWITCH_ROADS_BACK_TO_ORIGINAL( 160.61230000, 1002.84700000, 0.00000000, 165.27580000, 1008.29800000, 100.00000000 );
                }
            }
        }
    }
    return;
}

void sub_50611()
{
    if (NOT l_U872)
    {
        sub_50631();
        sub_51355();
    }
    sub_52079();
    return;
}

void sub_50631()
{
    unknown uVar2;

    switch (l_U1089)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U828[0] )))
        {
            if (LOCATE_CHAR_IN_CAR_3D( l_U828[0], l_U766._fU0, l_U766._fU4, l_U766._fU8, l_U769._fU0, l_U769._fU4, l_U769._fU8, 0 ))
            {
                CLEAR_CHAR_TASKS( l_U828[0] );
                l_U861[0] = 0;
                l_U1089 = 1;
            }
        }
        break;
        case 1:
        if (NOT l_U861[0])
        {
            if (NOT (IS_CAR_DEAD( l_U825[0] )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U825[0], 976.85390000, 520.34420000, 21.64310000, 8.00000000, 0, 0, 5, 4.00000000, 10 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U828[0], uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U861[0] = 1;
            }
        }
        else if (sub_25876( l_U828[0], 1, 0 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), 989.67090000, 521.59050000, 22.14590000, 13.00000000, 7.00000000, 2.00000000, 0 ))
            {
                if (NOT l_U861[2])
                {
                    if (NOT (IS_CHAR_DEAD( l_U828[2] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U850[2] );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_AIM_GUN_AT_CHAR( 0, sub_4746(), 999999 );
                        CLOSE_SEQUENCE_TASK( l_U850[2] );
                        TASK_PERFORM_SEQUENCE( l_U828[2], l_U850[2] );
                        CLEAR_SEQUENCE_TASK( l_U850[2] );
                        l_U861[2] = 1;
                    }
                }
                else if (sub_25876( l_U828[2], 1, 0 ))
                {
                    sub_29433( l_U828[2] );
                }
                if (NOT l_U861[3])
                {
                    if (NOT (IS_CHAR_DEAD( l_U828[3] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U850[3] );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_AIM_GUN_AT_CHAR( 0, sub_4746(), 999999 );
                        CLOSE_SEQUENCE_TASK( l_U850[3] );
                        TASK_PERFORM_SEQUENCE( l_U828[3], l_U850[3] );
                        CLEAR_SEQUENCE_TASK( l_U850[3] );
                        l_U861[3] = 1;
                    }
                }
                else if (sub_25876( l_U828[3], 1, 0 ))
                {
                    sub_29433( l_U828[3] );
                }
            }
        }
        break;
    }
    return;
}

void sub_51355()
{
    unknown uVar2;

    switch (l_U1092)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U828[6] )))
        {
            if (LOCATE_CHAR_IN_CAR_3D( l_U828[6], l_U766._fU0, l_U766._fU4, l_U766._fU8, l_U769._fU0, l_U769._fU4, l_U769._fU8, 0 ))
            {
                CLEAR_CHAR_TASKS( l_U828[6] );
                l_U861[6] = 0;
                l_U1092 = 1;
            }
        }
        break;
        case 1:
        if (NOT l_U861[6])
        {
            if (NOT (IS_CAR_DEAD( l_U825[1] )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U825[1], 989.52920000, 507.78670000, 20.79020000, 5.00000000, 0, 0, 2, 4.00000000, 10 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U828[6], uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U861[6] = 1;
            }
        }
        else if (sub_25876( l_U828[6], 1, 0 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), 989.67090000, 521.59050000, 22.14590000, 13.00000000, 7.00000000, 2.00000000, 0 ))
            {
                if (NOT l_U861[8])
                {
                    if (NOT (IS_CHAR_DEAD( l_U828[8] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U850[8] );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_AIM_GUN_AT_CHAR( 0, sub_4746(), 999999 );
                        CLOSE_SEQUENCE_TASK( l_U850[8] );
                        TASK_PERFORM_SEQUENCE( l_U828[8], l_U850[8] );
                        CLEAR_SEQUENCE_TASK( l_U850[8] );
                        l_U861[8] = 1;
                    }
                }
                else if (sub_25876( l_U828[8], 1, 0 ))
                {
                    sub_29433( l_U828[8] );
                }
                if (NOT l_U861[9])
                {
                    if (NOT (IS_CHAR_DEAD( l_U828[9] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U850[9] );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_AIM_GUN_AT_CHAR( 0, sub_4746(), 999999 );
                        CLOSE_SEQUENCE_TASK( l_U850[9] );
                        TASK_PERFORM_SEQUENCE( l_U828[9], l_U850[9] );
                        CLEAR_SEQUENCE_TASK( l_U850[9] );
                        l_U861[9] = 1;
                    }
                }
                else if (sub_25876( l_U828[9], 1, 0 ))
                {
                    sub_29433( l_U828[9] );
                }
            }
        }
        break;
    }
    return;
}

void sub_52079()
{
    unknown uVar2;

    switch (l_U1090)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U828[4] )))
        {
            if (LOCATE_CHAR_IN_CAR_3D( l_U828[4], l_U766._fU0, l_U766._fU4, l_U766._fU8, l_U769._fU0, l_U769._fU4, l_U769._fU8, 0 ))
            {
                CLEAR_CHAR_TASKS( l_U828[4] );
                l_U861[4] = 0;
                l_U861[2] = 0;
                l_U861[3] = 0;
                l_U1090 = 1;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U828[4] )))
        {
            if (NOT l_U861[4])
            {
                if (NOT (IS_CAR_DEAD( l_U824 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_CAR_DRIVE_TO_COORD( 0, l_U824, 986.29080000, 534.89790000, 21.98740000, 5.00000000, 0, 0, 5, 4.00000000, 10 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U828[4], uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    l_U861[4] = 1;
                }
            }
            else if (sub_25876( l_U828[4], 1, 0 ))
            {
                sub_11686( 2 );
            }
            else if (NOT (IS_CHAR_DEAD( l_U828[4] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U828[4], 985.88340000, 525.53640000, 22.17060000, 4.00000000, 5.00000000, 2.00000000, 0 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4746(), 985.78060000, 525.50970000, 10.16900000, 69.00000000, 69.00000000, 50.00000000, 0 ))
                    {
                        l_U1091 = 1;
                        l_U765 = 6;
                    }
                }
            };;;
        }
        break;
    }
    return;
}

void sub_52589()
{
    if (DOES_CHAR_EXIST( l_U794 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U794 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4746() )))
            {
                if (NOT l_U1036)
                {
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U794, 1 );
                    l_U1036 = 1;
                }
            }
            else if (l_U1036)
            {
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U794, 0 );
                l_U1036 = 0;
            }
        }
    }
    return;
}

int sub_52744()
{
    int iVar2;

    if (IS_CHAR_FATALLY_INJURED( l_U794 ))
    {
        if (DOES_BLIP_EXIST( l_U796 ))
        {
            REMOVE_BLIP( l_U796 );
        }
        iVar2++;
    }
    if (IS_CHAR_FATALLY_INJURED( l_U828[5] ))
    {
        if (DOES_BLIP_EXIST( l_U839[5] ))
        {
            REMOVE_BLIP( l_U839[5] );
        }
        iVar2++;
    }
    if (IS_CHAR_FATALLY_INJURED( l_U828[4] ))
    {
        if (DOES_BLIP_EXIST( l_U839[4] ))
        {
            REMOVE_BLIP( l_U839[4] );
        }
        iVar2++;
    }
    if (IS_CHAR_FATALLY_INJURED( l_U828[6] ))
    {
        if (DOES_BLIP_EXIST( l_U839[6] ))
        {
            REMOVE_BLIP( l_U839[6] );
        }
        iVar2++;
    }
    if (IS_CHAR_FATALLY_INJURED( l_U828[7] ))
    {
        if (DOES_BLIP_EXIST( l_U839[7] ))
        {
            REMOVE_BLIP( l_U839[7] );
        }
        iVar2++;
    }
    if (IS_CHAR_FATALLY_INJURED( l_U828[9] ))
    {
        if (DOES_BLIP_EXIST( l_U839[9] ))
        {
            REMOVE_BLIP( l_U839[9] );
        }
        iVar2++;
    }
    if (IS_CHAR_FATALLY_INJURED( l_U828[8] ))
    {
        if (DOES_BLIP_EXIST( l_U839[8] ))
        {
            REMOVE_BLIP( l_U839[8] );
        }
        iVar2++;
    }
    if (iVar2 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_53198()
{
    sub_53207();
    sub_64796();
    CLEAR_WANTED_LEVEL( sub_6920() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 65 );
    sub_12089( 22, "J4_PASS", "J4AUD", 0 );
    sub_70483( 51, 3 );
    sub_2509();
    return;
}

void sub_53207()
{
    sub_53216();
    return;
}

void sub_53216()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_53234();
    sub_53293( iVar2, iVar3, iVar4 );
    return;
}

void sub_53234()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_53293(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 20;
    sub_53326( iVar5, uParam0, uParam1, uParam2, "Contact_24" );
    return;
}

void sub_53326(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_53422( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_53422( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_53422( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_53422( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_53422( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_53422( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_53999( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4) AND (NOT g_U10981[iParam0]._fU144._fU12))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_54396( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_54396( 0, 4 );
            }
        }
    }
    if (NOT (sub_54485( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6920(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_6920() );
    }
    sub_1607();
    bVar27 = true;
    uVar28 = sub_53999( iParam0, iVar7 );
    uVar29 = sub_1064( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 6) || (iVar30 == 5))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_63861( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_64291();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_64376( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_64433( iParam0 );
                sub_64472( 0 );
                sub_1505( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_64580();
        }
    }
    if (bParam2)
    {
        sub_64291();
        sub_64668();
        sub_64472( 0 );
    }
    if (bParam3)
    {
        sub_64291();
        sub_64708();
        sub_64472( 0 );
        sub_1505( uVar29, 0 );
    }
    sub_951();
    return;
}

void sub_53422(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_53999(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1463( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_54396(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_54485(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_54693( uParam1 );
        break;
        case 1:
        bVar8 = sub_56771( uParam1 );
        break;
        case 2:
        bVar8 = sub_56997( uParam1 );
        break;
        case 3:
        bVar8 = sub_57147( uParam1 );
        break;
        case 4:
        bVar8 = sub_57425( uParam1 );
        break;
        case 5:
        bVar8 = sub_57728( uParam1 );
        break;
        case 6:
        bVar8 = sub_57927( uParam1 );
        break;
        case 7:
        bVar8 = sub_58153( uParam1 );
        break;
        case 8:
        bVar8 = sub_58388( uParam1 );
        break;
        case 9:
        bVar8 = sub_58763( uParam1 );
        break;
        case 10:
        bVar8 = sub_59010( uParam1 );
        break;
        case 11:
        bVar8 = sub_59149( uParam1 );
        break;
        case 12:
        bVar8 = sub_59448( uParam1 );
        break;
        case 13:
        bVar8 = sub_59676( uParam1 );
        break;
        case 14:
        bVar8 = sub_59963( uParam1 );
        break;
        case 15:
        bVar8 = sub_60245( uParam1 );
        break;
        case 16:
        bVar8 = sub_60527( uParam1 );
        break;
        case 17:
        bVar8 = sub_60728( uParam1 );
        break;
        case 18:
        bVar8 = sub_60801( uParam1 );
        break;
        case 19:
        bVar8 = sub_61015( uParam1 );
        break;
        case 20:
        bVar8 = sub_61268( uParam1 );
        break;
        case 21:
        bVar8 = sub_61515( uParam1 );
        break;
        case 22:
        bVar8 = sub_61716( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_56376( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_53999( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_62039( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_54693(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_54972( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_54972( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_54972( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_54972( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_54972( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_54972( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_54972( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_54972( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_54972( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_54972( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_54972( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_54972( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_54972( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_54972( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_54972( iVar3, 0, sub_56254(), sub_56520(), 0, 0 );
        break;
        default:
        sub_56679( "Friend 1", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Friend 1", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_54972(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_54983( uParam1 );
    sub_55157( uParam0, 0, uParam2 );
    sub_55157( uParam0, 1, uParam3 );
    sub_55157( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_53234();
    return;
}

void sub_54983(unknown uParam0)
{
    ADD_SCORE( sub_6920(), uParam0 );
    sub_55008( uParam0 );
    return;
}

void sub_55008(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1463( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_55157(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_55314( uParam0 );
    }
    return;
}

void sub_55314(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 )))))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_56254()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_56376( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_56376(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_56520()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_56376( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_56679(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_56771(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54972( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_56679( "Contact 2", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 2", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56997(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_54972( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_56679( "Girl 3", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Girl 3", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57147(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_54972( iVar3, 0, sub_56254(), sub_56520(), 0, 0 );
        break;
        default:
        sub_56679( "Friend 4", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Friend 4", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57425(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54972( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_54972( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_54972( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_54972( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_56679( "Contact 5", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 5", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57728(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_56679( "Contact 7", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 7", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57927(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54972( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_56679( "Contact 7b", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 7b", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58153(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_54972( iVar3, 0, sub_56254(), sub_56520(), 0, 0 );
        break;
        default:
        sub_56679( "Friend 8", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Friend 8", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58388(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_54972( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_54972( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_54972( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_54972( iVar3, 0, sub_56254(), sub_56520(), 0, 0 );
        break;
        default:
        sub_56679( "Friend 9", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Friend 9", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58763(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_54972( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_54972( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_56679( "Contact 10", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_56679( "Contact 10", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59010(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_56679( "Girl 11", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Girl 11", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59149(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54972( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_54972( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_54972( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_54972( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_54972( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_56679( "Contact 12", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 12", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59448(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54972( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_56679( "Contact 13", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 13", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59676(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_54972( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_54972( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_54972( iVar3, 0, sub_56254(), sub_56520(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_56679( "Friend 15", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Friend 15", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59963(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54972( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_54972( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_54972( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_56679( "Contact 16", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 16", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60245(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_54972( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_54972( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_54972( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_56679( "Contact 18", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 18", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60527(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_56679( "Contact 19", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 19", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60728(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_56679( "Girl 20", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60801(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_56679( "Contact 21", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 21", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61015(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54972( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_54972( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_56679( "Contact 22", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 22", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61268(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_54972( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_54972( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_54972( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_56679( "Contact 24", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 24", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61515(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_54972( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_54972( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_56679( "Contact 25", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_56679( "Contact 25", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61716(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_54972( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_56679( "Girl 26", 1 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_56679( "Girl 26", 0 );
        sub_54972( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_62039(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_62087( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_62818( iParam1 );
    }
    return;
}

int sub_62087(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_62227( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_62227(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_62409( 0 );
    return;
}

void sub_62409(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_62664();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_62664()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_62818(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_63151( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_63151( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_63151( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_63151( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_63151( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_63151( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_63151( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_63151( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_63151( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_63151( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_63151( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_63151( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_63151( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_63151( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_63151( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_63151( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_63151( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_63151( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_63151( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_63151(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_63861(unknown uParam0, unknown uParam1)
{
    sub_63880( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_63880(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_64291()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_64376(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_64433(unknown uParam0)
{
    sub_850();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_64472(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_64580()
{
    sub_64589();
    return;
}

void sub_64589()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_64668()
{
    sub_64589();
    return;
}

void sub_64708()
{
    sub_64589();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_64796()
{
    sub_64805();
    return;
}

void sub_64805()
{
    int iVar2;

    iVar2 = 14;
    sub_64819( iVar2 );
    return;
}

void sub_64819(unknown uParam0)
{
    unknown uVar3;

    g_U10981[uParam0]._fU4 = 1;
    uVar3 = sub_1064( uParam0 );
    sub_64853( uVar3 );
    sub_64956( "****** STRAND DEACTIVATING *******\n" );
    sub_64975( uParam0 );
    g_U15946[uVar3]._fU132._fU0 = 0;
    return;
}

void sub_64853(unknown uParam0)
{
    if (NOT g_U22274[uParam0]._fU0)
    {
        return;
    }
    g_U22274[uParam0]._fU0 = 0;
    g_U26439--;
    return;
}

void sub_64956(unknown uParam0)
{
    return;
}

void sub_64975(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;

    if (NOT g_U10981[uParam0]._fU8)
    {
        return;
    }
    if (NOT g_U10981[uParam0]._fU4)
    {
        return;
    }
    bVar3 = false;
    uVar4 = sub_1064( uParam0 );
    if ((g_U13391[uParam0]._fU80._fU0 == 1) || (g_U13391[uParam0]._fU80._fU0 == 0))
    {
        sub_65086( uParam0 );
        g_U22274[uVar4]._fU0 = 0;
    }
    else
    {
        bVar3 = true;
    }
    g_U10981[uParam0]._fU144._fU0 = 0;
    if (g_U13391[uParam0]._fU160._fU0)
    {
        if (g_U13391[uParam0]._fU160._fU80)
        {
            if (NOT g_U13391[uParam0]._fU160._fU96)
            {
                sub_69409( uParam0 );
            }
            else
            {
                bVar3 = true;
            }
        }
        else
        {
            bVar3 = true;
        }
    }
    if ((g_U13391[uParam0]._fU0._fU0 == 1) || (g_U13391[uParam0]._fU0._fU0 == 0))
    {
        sub_70047( uParam0 );
    }
    else
    {
        bVar3 = true;
    }
    if (bVar3)
    {
        return;
    }
    g_U10981[uParam0]._fU8 = 0;
    return;
}

void sub_65086(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU80._fU0 = 0;
        sub_65207( uParam0 );
        sub_67481( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_67769( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_67769( uParam0, iVar4 );
        break;
        case 6:
        sub_67769( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_68218( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_1463( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_65207(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 1)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 0)))
    {
        sub_65264( uParam0 );
        sub_65410( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_65264( uParam0 );
        sub_65600( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_65410( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 1)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 0)))
    {
        sub_65264( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_66723( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_65264( uParam0 );
    }
    return;
}

void sub_65264(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
    g_U13391[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU0._fU68;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_65410(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
    g_U13391[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU80._fU68;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_65600(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_65410( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU80._fU4;
        iVar8 = sub_53999( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU80._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_1463( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U5 );
        if ((NOT g_U13391[uParam0]._fU80._fU72) || (NOT g_U32896._fU4))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U13391[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U6 );
        sub_66278( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

void sub_66278(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_66370( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_66370( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_66370( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_66370( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_66370( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_66370( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_66370(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_66723(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_65264( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU0._fU4;
        iVar8 = sub_53999( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU0._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_1463( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U5 );
        if ((NOT g_U13391[uParam0]._fU0._fU72) || (NOT g_U32896._fU4))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U6 );
        if (l_U31)
        {
            FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U31 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U31 = 1;
        }
        sub_66278( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_67481(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
        }
    }
    g_U13391[uParam0]._fU80._fU0 = 0;
    g_U13391[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU80._fU24, "", 32 );
    g_U13391[uParam0]._fU80._fU56 = 10;
    g_U13391[uParam0]._fU80._fU60 = nil;
    g_U13391[uParam0]._fU80._fU64 = nil;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U13391[uParam0]._fU80._fU72 = 1;
    g_U13391[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_67769(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_67481( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_67907( uParam0, 0 );;
    sub_65207( uParam0 );
    return;
}

void sub_67907(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
        }
    }
    g_U13391[uParam0]._fU0._fU0 = 0;
    g_U13391[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU0._fU24, "", 32 );
    g_U13391[uParam0]._fU0._fU56 = 10;
    g_U13391[uParam0]._fU0._fU60 = nil;
    g_U13391[uParam0]._fU0._fU64 = nil;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U13391[uParam0]._fU0._fU72 = 1;
    g_U13391[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_68218(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U13391[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U13391[iParam0]._fU80._fU60 );
        }
        sub_67481( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U13391[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U13391[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U13391[iParam0]._fU0._fU56;
    if ((iVar5 == 6) || (iVar5 == 5))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U10981[iParam0]._fU28 = 1;
    }
    sub_67907( iParam0, 0 );
    if (bVar4)
    {
        sub_68427();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_68483();
        return;
    }
    sub_65207( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_69118( iParam0 );
    }
    if (g_U2)
    {
        if (g_U3)
        {
            WAIT( 1500 );
            g_U4 = 1;
        }
    }
    return;
}

void sub_68427()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_68483()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_6920() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4746() ))
        {
            if (NOT (g_U15936._fU24 == -1))
            {
                uVar3 = g_U32697[g_U15936._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_4746(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15936._fU24;
    sub_68595();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4746(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_6920(), 0 );
    sub_68748();
    if (IS_PLAYER_PLAYING( sub_6920() ))
    {
        SET_PLAYER_CONTROL( sub_6920(), 1 );
    }
    return;
}

void sub_68595()
{
    g_U15936._fU0 = 0;
    g_U15936._fU4 = 0;
    g_U15936._fU8 = 0;
    g_U15936._fU12 = 0;
    g_U15936._fU16 = 0;
    g_U15936._fU20 = 0;
    g_U15936._fU24 = -1;
    g_U15936._fU32 = nil;
    g_U15936._fU28 = 0;
    return;
}

void sub_68748()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_6920() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_4746() ))
    {
        l_U30 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_6920(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_4746() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4746(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_4746(), -488123221 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_4746(), 837858166 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15936._fU20)
                {
                    bVar4 = true;
                }
                else
                {
                    bVar4 = false;
                }
            }
            else
            {
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = true;
        }
    }
    else
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        if (l_U30)
        {
            return;
        }
        l_U30 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_6920(), 1 );
    }
    else if (NOT l_U30)
    {
        return;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_6920(), 0 );;
    return;
}

void sub_69118(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_69409(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U13391[uParam0]._fU160._fU0)
    {
        return;
    }
    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        g_U13391[uParam0]._fU160._fU0 = 0;
        return;
    }
    uVar3 = sub_1064( uParam0 );
    DESTROY_THREAD( g_U13391[uParam0]._fU160._fU104 );
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    sub_69549( uParam0 );
    if (g_U13391[uParam0]._fU160._fU8)
    {
        g_U15946[uVar3]._fU8[0]._fU0[3] = 0;
    }
    return;
}

void sub_69549(unknown uParam0)
{
    g_U13391[uParam0]._fU160._fU0 = 0;
    g_U13391[uParam0]._fU160._fU4 = 0;
    g_U13391[uParam0]._fU160._fU8 = 0;
    StrCopy( ref g_U13391[uParam0]._fU160._fU12, "", 32 );
    StrCopy( ref g_U13391[uParam0]._fU160._fU44, "", 32 );
    g_U13391[uParam0]._fU160._fU76 = -1;
    g_U13391[uParam0]._fU160._fU80 = 0;
    g_U13391[uParam0]._fU160._fU84 = 0;
    g_U13391[uParam0]._fU160._fU88 = 0;
    g_U13391[uParam0]._fU160._fU92 = 0;
    g_U13391[uParam0]._fU160._fU96 = 0;
    g_U13391[uParam0]._fU160._fU100 = 0;
    g_U13391[uParam0]._fU160._fU104 = nil;
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    g_U13391[uParam0]._fU160._fU108._fU4 = 59;
    g_U13391[uParam0]._fU160._fU108._fU12 = 0;
    g_U13391[uParam0]._fU160._fU108._fU16 = 0;
    g_U13391[uParam0]._fU160._fU108._fU20 = 0;
    return;
}

void sub_70047(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU0._fU0 = 0;
        sub_65207( uParam0 );
        sub_67907( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_67769( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_67769( uParam0, iVar4 );
        break;
        case 6:
        sub_67769( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_68218( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_1463( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_70483(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

