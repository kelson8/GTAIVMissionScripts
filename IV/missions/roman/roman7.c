void main()
{
    int iVar2;
    int iVar3;

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
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;
    l_U499 = 0;
    l_U500 = {0.00000000, 0.00000000, 0.00000000};
    l_U503 = 2.50000000;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 0;
    l_U507 = 0;
    l_U508 = 0;
    l_U509 = 0;
    l_U510 = 0;
    l_U511 = 0;
    l_U512 = 0;
    l_U513 = 1;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 1;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    l_U522 = 0;
    l_U523 = 0;
    l_U524 = 0;
    l_U525 = 0;
    l_U526 = 0;
    l_U527 = 1;
    l_U528 = 0;
    l_U529 = 0;
    l_U530 = 0;
    l_U531 = 0;
    l_U532 = 0;
    l_U533 = 0;
    l_U534 = 0;
    l_U535 = 1;
    l_U536 = 1;
    l_U537 = 0;
    l_U538 = 0;
    l_U539 = 0;
    l_U540 = 0;
    l_U541 = 0;
    l_U542 = 0;
    l_U543 = 0;
    l_U1036 = 90.00000000;
    l_U1037 = 5.00000000;
    l_U1038 = 25.00000000;
    l_U1039 = 15.00000000;
    l_U1040 = 2.00000000;
    l_U1041 = 4.00000000;
    l_U1042 = 0.50000000;
    l_U1043 = 120.00000000;
    l_U1044 = 0.00000000;
    l_U1045 = 0.00000000;
    l_U1047 = 1.00000000;
    l_U1048 = 0.00000000;
    l_U1049 = 1.00000000;
    l_U1050 = 10.00000000;
    l_U1051 = 30.00000000;
    l_U1053 = 1.00000000;
    l_U1055 = 1.00000000;
    l_U1056 = 5.00000000;
    l_U1057 = 1.00000000;
    l_U1058 = 1.00000000;
    l_U1063 = 0.30000000;
    l_U1064 = 0.50000000;
    l_U1065 = 50.00000000;
    l_U1211 = 0;
    l_U1212 = 0;
    l_U1213 = 0;
    l_U1214 = 0;
    l_U1215 = 1;
    l_U1216 = 0;
    l_U1217 = 0;
    l_U1218 = 0;
    l_U1219 = 0;
    l_U1220 = -1;
    l_U1221 = 0;
    l_U1222 = 0;
    l_U1223 = 0;
    l_U1224 = 0;
    l_U1225 = 0;
    l_U1226 = 0;
    l_U1227 = 0;
    l_U1749 = 0;
    l_U1750 = 0;
    l_U1756 = -636669566;
    l_U1757 = -2088164056;
    l_U1758 = 1976502708;
    l_U1759 = 1304597482;
    l_U1784 = 0;
    l_U1795 = 0;
    l_U1928 = 0;
    l_U1929 = 0;
    l_U1930 = 0;
    l_U1933 = 0;
    l_U1934 = 0;
    l_U1935 = 0;
    l_U1936 = 1;
    l_U1937 = 1;
    l_U2307 = 0;
    l_U2311 = 0;
    l_U2312 = 0;
    l_U2313 = 0;
    l_U2315 = 0;
    l_U2319 = 0;
    l_U2322 = 1;
    l_U2323 = 0;
    l_U2324 = 0;
    l_U2934 = 0;
    l_U2935 = 0;
    iVar2 = 1;
    iVar3 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_904();
        sub_3014();
    }
    while (true)
    {
        WAIT( 0 );
        switch (l_U1755)
        {
            case 0:
            sub_5738();
            l_U1755 = 1;
            break;
            case 1:
            sub_9088();
            break;
            case 2:
            sub_13397();
            break;
            case 3:
            sub_20719();
            break;
            case 4:
            sub_23891();
            break;
            case 5:
            sub_32392();
            if (l_U1934)
            {
                if (NOT l_U2306)
                {
                    sub_59559();
                }
            }
            break;
            case 13:
            sub_60838();
            if (l_U1934)
            {
                if (NOT l_U2306)
                {
                    sub_59559();
                }
            }
            sub_56158();
            break;
            case 14:
            GENERATE_RANDOM_INT_IN_RANGE( 1, 4, ref iVar2 );
            if ((SECUROM_SPOT_CHECK1()) AND (iVar2 == 1))
            {
                iVar3 = 1;
            }
            else if ((SECUROM_SPOT_CHECK2()) AND (iVar2 == 2))
            {
                iVar3 = 1;
            }
            else if ((SECUROM_SPOT_CHECK3()) AND (iVar2 == 3))
            {
                iVar3 = 1;
            }
            else if ((SECUROM_SPOT_CHECK4()) AND (iVar2 == 4))
            {
                iVar3 = 1;
            };;;;
            if (iVar3 == 1)
            {
                sub_77571();
            }
            break;
            case 11:
            if (sub_99984())
            {
                sub_100849();
            }
            break;
            case 10: break;
            case 12: break;
            case 15: break;
            case 16:
            sub_35705();
            sub_56158();
            break;
            case 17:
            sub_100849();
            break;
            case 18: break;
            case 19:
            sub_104351();
            break;
            case 20:
            sub_105141();
            break;
        }
        if ((l_U1755 < 14) AND ((l_U1755 != 20) AND (l_U1755 > 1)))
        {
            if (l_U1929)
            {
                if (IS_CHAR_INJURED( l_U1806 ))
                {
                    l_U1933 = 1;
                    CLEAR_PRINTS();
                    sub_106258( 0, l_U1806, 0 );
                    sub_103844( 1 );
                }
                else if (IS_CHAR_ON_FIRE( l_U1806 ))
                {
                    SET_CHAR_HEALTH( l_U1806, 50 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1806 ))
        {
            if (IS_CHAR_INJURED( l_U1806 ))
            {
                ;
            }
        }
    }
    return;
}

void sub_904()
{
    sub_913();
    return;
}

void sub_913()
{
    int iVar2;

    iVar2 = 0;
    sub_927( iVar2 );
    sub_2103( iVar2 );
    return;
}

void sub_927(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_971();
        sub_1132();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1240();
            sub_1279();
        }
    }
    sub_1355();
    sub_1456();
    uVar5 = sub_1569( uParam0 );
    sub_2010( uVar5, 0 );
    return;
}

void sub_971()
{
    sub_985( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1085();
    }
    return;
}

void sub_985(int iParam0)
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

void sub_1085()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1132()
{
    sub_1141();
    return;
}

void sub_1141()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1240()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1279()
{
    sub_1288();
    return;
}

void sub_1288()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1355()
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

void sub_1456()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1478();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1478()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1569(unknown uParam0)
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
    sub_1968( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1968(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2010(int iParam0, boolean bParam1)
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

void sub_2103(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2112();
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
        sub_2887();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2112()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2150( 5, g_U569[I] )) == 1))
        {
            if ((sub_2150( 1, g_U569[I] )) != 0)
            {
                sub_2436( I );
            }
        }
    }
    if (NOT sub_2602())
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

int sub_2150(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2436(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2521( g_U569 - 1 );
    return;
}

void sub_2521(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2602()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2150( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2887()
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

void sub_3014()
{
    g_U2219 = 0;
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_3053();
    sub_3186();
    SET_TIME_SCALE( 1.00000000 );
    SET_ALL_RANDOM_PEDS_FLEE( sub_3215(), 0 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    sub_3263( 0 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 763.20760000, 220.94350000, 0.00000000, 923.19630000, 260.28750000, 100.00000000 );
    SWITCH_PED_PATHS_ON( 817.87360000, -295.89150000, 0.00000000, 830.97850000, -249.61660000, 100.00000000 );
    sub_4643();
    ENABLE_CHASE_AUDIO( 0 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    SWITCH_GARBAGE_TRUCKS( 1 );
    if (DOES_CHAR_EXIST( l_U1806 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1806 );
    }
    sub_4846( 0 );
    DONT_SUPPRESS_CAR_MODEL( l_U1759 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3053()
{
    if (DOES_BLIP_EXIST( l_U1789 ))
    {
        REMOVE_BLIP( l_U1789 );
    }
    if (DOES_BLIP_EXIST( l_U1798 ))
    {
        REMOVE_BLIP( l_U1798 );
    }
    if (DOES_BLIP_EXIST( l_U1804 ))
    {
        REMOVE_BLIP( l_U1804 );
    }
    if (DOES_BLIP_EXIST( l_U1810 ))
    {
        REMOVE_BLIP( l_U1810 );
    }
    return;
}

void sub_3186()
{
    return;
}

void sub_3215()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3263(boolean bParam0)
{
    if (bParam0)
    {
        sub_3280( 0 );
        sub_3280( 1 );
        sub_3280( 2 );
        sub_3280( 3 );
        sub_3280( 4 );
        sub_3280( 5 );
        sub_3280( 6 );
        sub_3280( 7 );
        sub_3280( 8 );
        sub_3280( 9 );
        sub_3280( 10 );
        sub_3280( 11 );
        sub_3280( 12 );
    }
    else
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 904.51920000, -562.89270000, 0.00000000, 922.72380000, -227.63170000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 840.31320000, -474.61430000, 0.00000000, 900.97230000, -461.27590000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 923.09160000, -399.23250000, 0.00000000, 986.02070000, -387.09160000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 780.49950000, -355.04930000, 0.00000000, 901.12080000, -349.55820000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 922.49310000, -309.74250000, 0.00000000, 993.68000000, -297.39130000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 765.62300000, -554.76870000, 0.00000000, 798.43050000, -351.24390000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 763.70200000, -351.80030000, 0.00000000, 813.56420000, -234.85690000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 811.34550000, -254.00550000, 0.00000000, 901.07460000, -237.11590000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 795.56800000, -236.14070000, 0.00000000, 896.65050000, -126.96600000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 757.29650000, -126.96600000, 0.00000000, 896.65050000, 196.63260000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 795.77420000, 201.65530000, 0.00000000, 826.86480000, 254.66430000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 812.61460000, 256.93880000, 0.00000000, 856.22670000, 264.43910000, 100.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 808.50680000, 248.18030000, 0.00000000, 868.99350000, 464.15160000, 100.00000000 );
    }
    return;
}

void sub_3280(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        SWITCH_ROADS_OFF( 904.51920000, -562.89270000, 0.00000000, 922.72380000, -227.63170000, 100.00000000 );
        break;
        case 1:
        SWITCH_ROADS_OFF( 840.31320000, -474.61430000, 0.00000000, 900.97230000, -461.27590000, 100.00000000 );
        break;
        case 2:
        SWITCH_ROADS_OFF( 923.09160000, -399.23250000, 0.00000000, 986.02070000, -387.09160000, 100.00000000 );
        break;
        case 3:
        SWITCH_ROADS_OFF( 780.49950000, -355.04930000, 0.00000000, 901.12080000, -349.55820000, 100.00000000 );
        break;
        case 4:
        SWITCH_ROADS_OFF( 922.49310000, -309.74250000, 0.00000000, 993.68000000, -297.39130000, 100.00000000 );
        break;
        case 5:
        SWITCH_ROADS_OFF( 765.62300000, -554.76870000, 0.00000000, 798.43050000, -351.24390000, 100.00000000 );
        break;
        case 6:
        SWITCH_ROADS_OFF( 763.70200000, -351.80030000, 0.00000000, 813.56420000, -234.85690000, 100.00000000 );
        break;
        case 7:
        SWITCH_ROADS_OFF( 811.34550000, -254.00550000, 0.00000000, 901.07460000, -237.11590000, 100.00000000 );
        break;
        case 8:
        SWITCH_ROADS_OFF( 795.56800000, -236.14070000, 0.00000000, 896.65050000, -126.96600000, 100.00000000 );
        break;
        case 9:
        SWITCH_ROADS_OFF( 757.29650000, -126.96600000, 0.00000000, 896.65050000, 196.63260000, 100.00000000 );
        break;
        case 10:
        SWITCH_ROADS_OFF( 795.77420000, 201.65530000, 0.00000000, 826.86480000, 254.66430000, 100.00000000 );
        break;
        case 11:
        SWITCH_ROADS_OFF( 812.61460000, 256.93880000, 0.00000000, 856.22670000, 264.43910000, 100.00000000 );
        break;
        case 12:
        SWITCH_ROADS_OFF( 808.50680000, 248.18030000, 0.00000000, 868.99350000, 464.15160000, 100.00000000 );
        break;
    }
    return;
}

void sub_4643()
{
    if (l_U499)
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
    l_U497 = 0;
    l_U496 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_4846(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4857( uParam0 ) );
    return;
}

int sub_4857(unknown uParam0)
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
    sub_1968( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5738()
{
    l_U1933 = 1;
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_5753(), 0 );
    LOAD_ADDITIONAL_TEXT( "ROMAN8", 0 );
    LOAD_ADDITIONAL_TEXT( "R7AUD", 6 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U1812 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U1811 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U1816 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1815 );
    LOAD_COMBAT_DECISION_MAKER( 11, ref l_U1814 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    l_U1799 = {921.02900000, -489.85000000, 15.24600000};
    SET_WANTED_MULTIPLIER( 0.10000000 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1814, 0 );
    l_U2381[0]._fU12 = {917.84430000, -486.36470000, 14.40120000};
    l_U2381[0]._fU24 = 20.00000000;
    l_U2381[0]._fU32 = 456;
    l_U2381[0]._fU28 = 1000000.00000000;
    l_U2381[0]._fU44 = 1;
    l_U2381[0]._fU48 = 1264341792;
    l_U2381[1]._fU12 = {906.40080000, -370.45860000, 17.11900000};
    l_U2381[1]._fU24 = 50.00000000;
    l_U2381[1]._fU32 = 457;
    l_U2381[1]._fU28 = 17136.64000000;
    l_U2381[2]._fU12 = {906.40080000, -370.45860000, 17.11900000};
    l_U2381[2]._fU24 = 30.00000000;
    l_U2381[2]._fU32 = 458;
    l_U2381[2]._fU28 = 28013.52000000;
    l_U2381[2]._fU44 = 1;
    l_U2381[2]._fU48 = 1349725314;
    l_U2381[3]._fU12 = {886.20930000, -347.62620000, 16.53710000};
    l_U2381[3]._fU24 = 20.00000000;
    l_U2381[3]._fU32 = 459;
    l_U2381[3]._fU28 = 19939.18000000;
    l_U2381[3]._fU44 = 1;
    l_U2381[3]._fU48 = -276900515;
    l_U2381[4]._fU12 = {886.20930000, -347.62620000, 16.53710000};
    l_U2381[4]._fU24 = 40.00000000;
    l_U2381[4]._fU32 = 460;
    l_U2381[4]._fU28 = 24546.84000000;
    l_U2381[5]._fU12 = {787.19340000, -269.41430000, 14.86090000};
    l_U2381[5]._fU24 = 40.00000000;
    l_U2381[5]._fU32 = 461;
    l_U2381[5]._fU28 = 32848.00000000;
    l_U2381[5]._fU36 = 1;
    l_U2381[5]._fU40 = 16634.00000000;
    l_U2381[6]._fU12 = {891.45900000, -191.20220000, 5.64760000};
    l_U2381[6]._fU24 = 10.00000000;
    l_U2381[6]._fU32 = 461;
    l_U2381[6]._fU28 = 41814.00000000;
    l_U2381[7]._fU12 = {845.25700000, -226.77970000, 10.65380000};
    l_U2381[7]._fU24 = 10.00000000;
    l_U2381[7]._fU32 = 462;
    l_U2381[7]._fU28 = 40859.00000000;
    l_U2381[7]._fU36 = 1;
    l_U2381[7]._fU40 = 18843.00000000;
    l_U2381[8]._fU12 = {0.00000000, 0.00000000, 0.00000000};
    l_U2381[8]._fU24 = 135.00000000;
    l_U2381[8]._fU32 = 464;
    l_U2381[8]._fU28 = 60572.00000000;
    l_U2381[9]._fU12 = {0.00000000, 0.00000000, 0.00000000};
    l_U2381[9]._fU24 = 20.00000000;
    l_U2381[9]._fU32 = 473;
    l_U2381[9]._fU28 = 1E7;
    l_U2381[9]._fU44 = 1;
    l_U2381[9]._fU48 = 850991848;
    l_U2381[10]._fU24 = 40.00000000;
    l_U2381[10]._fU32 = 463;
    l_U2381[10]._fU28 = 1E7;
    l_U2381[11]._fU12 = {845.25700000, -226.77970000, 10.65380000};
    l_U2381[11]._fU24 = 60.00000000;
    l_U2381[11]._fU32 = 463;
    l_U2381[11]._fU28 = 48502.00000000;
    l_U2381[12]._fU12 = {845.25700000, -226.77970000, 10.65380000};
    l_U2381[12]._fU24 = 80.00000000;
    l_U2381[12]._fU32 = 463;
    l_U2381[12]._fU28 = 48019.00000000;
    l_U2381[13]._fU12 = {778.47310000, 95.34590000, 6.38670000};
    l_U2381[13]._fU24 = 220.00000000;
    l_U2381[13]._fU32 = 463;
    l_U2381[13]._fU28 = 49360.00000000;
    l_U2381[13]._fU36 = 1;
    l_U2381[13]._fU40 = 11220.00000000;
    l_U2381[14]._fU12 = {778.47310000, 95.34590000, 6.38670000};
    l_U2381[14]._fU24 = 280.00000000;
    l_U2381[14]._fU32 = 469;
    l_U2381[14]._fU28 = 53677.00000000;
    l_U2381[14]._fU44 = 1;
    l_U2381[14]._fU48 = 904750859;
    l_U2381[15]._fU12 = {945.51320000, -500.93320000, 15.07050000};
    l_U2381[15]._fU24 = 20.00000000;
    l_U2381[15]._fU32 = 467;
    l_U2381[15]._fU28 = 7000.00000000;
    l_U2381[15]._fU36 = 1;
    l_U2381[15]._fU40 = 9750.00000000;
    l_U2381[15]._fU44 = 1;
    l_U2381[15]._fU48 = 1349725314;
    l_U2381[16]._fU12 = {945.51320000, -500.93320000, 15.07050000};
    l_U2381[16]._fU24 = 20.00000000;
    l_U2381[16]._fU32 = 493;
    l_U2381[16]._fU28 = 6272.47300000;
    l_U2381[16]._fU36 = 1;
    l_U2381[16]._fU40 = 12202.00000000;
    l_U2381[16]._fU44 = 1;
    l_U2381[16]._fU48 = 1264341792;
    l_U2381[17]._fU12 = {825.86830000, -52.51740000, 6.27360000};
    l_U2381[17]._fU24 = 120.00000000;
    l_U2381[17]._fU32 = 468;
    l_U2381[17]._fU28 = 46582.00000000;
    l_U2381[17]._fU44 = 1;
    l_U2381[17]._fU48 = 904750859;
    l_U2381[18]._fU12 = {891.45900000, -191.20220000, 5.64760000};
    l_U2381[18]._fU24 = 10.00000000;
    l_U2381[18]._fU32 = 461;
    l_U2381[18]._fU28 = 40190.95000000;
    l_U2381[18]._fU36 = 1;
    l_U2381[18]._fU40 = 4000.00000000;
    l_U2381[19]._fU12 = {912.14650000, -486.76450000, 15.08000000};
    l_U2381[19]._fU24 = 8.00000000;
    l_U2381[19]._fU32 = 467;
    l_U2381[19]._fU28 = 11073.38000000;
    l_U2381[19]._fU36 = 1;
    l_U2381[19]._fU40 = 5000.00000000;
    l_U2381[19]._fU44 = 1;
    l_U2381[19]._fU48 = 1349725314;
    l_U2381[20]._fU12 = {912.14650000, -486.76450000, 15.08000000};
    l_U2381[20]._fU24 = 8.00000000;
    l_U2381[20]._fU32 = 493;
    l_U2381[20]._fU28 = 9823.88700000;
    l_U2381[20]._fU36 = 1;
    l_U2381[20]._fU40 = 6500.00000000;
    l_U2381[20]._fU44 = 1;
    l_U2381[20]._fU48 = 1264341792;
    l_U2381[21]._fU12 = {945.51320000, -500.93320000, 15.07050000};
    l_U2381[21]._fU24 = 20.00000000;
    l_U2381[21]._fU32 = 467;
    l_U2381[21]._fU28 = 9389.75100000;
    l_U2381[21]._fU36 = 1;
    l_U2381[21]._fU40 = 5000.00000000;
    l_U2381[21]._fU44 = 1;
    l_U2381[21]._fU48 = 1349725314;
    l_U2381[22]._fU12 = {945.51320000, -500.93320000, 15.07050000};
    l_U2381[22]._fU24 = 20.00000000;
    l_U2381[22]._fU32 = 467;
    l_U2381[22]._fU28 = 7587.76300000;
    l_U2381[22]._fU36 = 1;
    l_U2381[22]._fU40 = 8500.00000000;
    l_U2381[23]._fU12 = {845.25700000, -226.77970000, 10.65380000};
    l_U2381[23]._fU24 = 10.00000000;
    l_U2381[23]._fU32 = 462;
    l_U2381[23]._fU28 = 39314.70000000;
    l_U2381[23]._fU36 = 1;
    l_U2381[23]._fU40 = 15843.00000000;
    l_U2381[24]._fU12 = {0.00000000, 0.00000000, 0.00000000};
    l_U2381[24]._fU24 = 220.00000000;
    l_U2381[24]._fU32 = 463;
    l_U2381[24]._fU28 = 50447.00000000;
    l_U2381[24]._fU36 = 1;
    l_U2381[24]._fU40 = 9220.00000000;
    l_U2381[25]._fU12 = {0.00000000, 0.00000000, 0.00000000};
    l_U2381[25]._fU24 = 220.00000000;
    l_U2381[25]._fU32 = 463;
    l_U2381[25]._fU28 = 51185.29000000;
    l_U2381[25]._fU36 = 1;
    l_U2381[25]._fU40 = 7220.00000000;
    l_U2171 = {l_U2381[8]._fU12};
    l_U2168 = {945.51320000, -500.93320000, 15.07050000};
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 943.00000000, -493.00000000, 16.00000000, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 928.00000000, -489.00000000, 16.00000000, 1, 0.00000000 );
    g_U2219 = 1;
    GIVE_DELAYED_WEAPON_TO_CHAR( sub_5753(), 7, 50, 1 );
    sub_8647( "R7AUD" );
    sub_8774( 0, sub_5753(), "NIKO", 0 );
    CLEAR_AREA( l_U1799._fU0, l_U1799._fU4, l_U1799._fU8, 10.00000000, 1 );
    ADD_SCENARIO_BLOCKING_AREA( 691.27070000, -237.98000000, 0.00000000, 923.19630000, 253.99540000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 763.20760000, 220.94350000, 0.00000000, 923.19630000, 260.28750000, 100.00000000 );
    SWITCH_PED_PATHS_OFF( 763.20760000, 220.94350000, 0.00000000, 923.19630000, 260.28750000, 100.00000000 );
    return;
}

void sub_5753()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_8647(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_8666();
    return;
}

void sub_8666()
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

void sub_8774(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_8858( "\n PED NUMBER ", uParam0 );
    sub_8898( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_8858(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8898(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9088()
{
    int iVar2;
    unknown uVar3;

    switch (l_U2941)
    {
        case 0:
        if (sub_9141())
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U2939 );
            if (DOES_VEHICLE_EXIST( l_U2939 ))
            {
                if (NOT (IS_CAR_DEAD( l_U2939 )))
                {
                    if (LOCATE_CAR_3D( l_U2939, 812.27630000, -256.08510000, 14.30920000, 0.50000000, 0.50000000, 3.00000000, 0 ))
                    {
                        SET_CAR_AS_MISSION_CAR( l_U2939 );
                        SET_CAR_COORDINATES( l_U2939, 818.67680000, -249.48830000, 14.72660000 );
                        SET_CAR_HEADING( l_U2939, 271.95300000 );
                        CLEAR_ROOM_FOR_CAR( l_U2939 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U2939 );
                        APPLY_FORCE_TO_CAR( l_U2939, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                    }
                    else if (LOCATE_CAR_3D( l_U2939, 811.16580000, -259.05350000, 15.34280000, 20.00000000, 20.00000000, 20.00000000, 0 ))
                    {
                        SET_CAR_AS_MISSION_CAR( l_U2939 );
                    }
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U2939, ref iVar2 );
                    if (iVar2 > 0)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U2939, 0 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U2939, 0, ref uVar3 );
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
            if (g_U9893._fU24)
            {
                SET_PLAYER_CONTROL( sub_3215(), 0 );
                CLEAR_AREA_OF_CARS( 817.28340000, -259.20880000, 15.35270000, 0.50000000 );
                CLEAR_AREA_OF_CHARS( 817.28340000, -259.20880000, 15.35270000, 0.50000000 );
                START_CUTSCENE_NOW( "Rom8_a" );
                l_U2941 = 1;
            }
            else
            {
                CLEAR_AREA_OF_CARS( 817.28340000, -259.20880000, 15.35270000, 0.50000000 );
                CLEAR_AREA_OF_CHARS( 817.28340000, -259.20880000, 15.35270000, 0.50000000 );
                l_U2941 = 3;
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
            l_U2941 = 3;
            CLEAR_NAMED_CUTSCENE( "Rom8_a" );
        }
        break;
        case 2:
        if (NOT (DOES_CHAR_EXIST( l_U1806 )))
        {
            l_U2941 = 3;
        }
        break;
        case 3:
        sub_9849( 0 );
        while (NOT (sub_9881( 0 )))
        {
            WAIT( 0 );
        }
        if (NOT (DOES_CHAR_EXIST( l_U1806 )))
        {
            CLEAR_AREA_OF_CARS( 811.97680000, -258.50760000, 14.33780000, 0.50000000 );
            CLEAR_AREA_OF_CHARS( 817.28340000, -259.20880000, 15.35270000, 200.00000000 );
            sub_10006( 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_5753() );
            SET_CHAR_COORDINATES( sub_5753(), 812.27630000, -256.08510000, 14.30920000 );
            SET_CHAR_HEADING( sub_5753(), 7.01820000 );
            GET_GAME_VIEWPORT_ID( ref l_U1926 );
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
        CLEAR_AREA( 812.33600000, -260.37920000, 14.33780000, 2.00000000, 1 );
        while (NOT (sub_12566( ref l_U2942 )))
        {
            WAIT( 0 );
        }
        LOAD_SCENE( 812.33600000, -260.37920000, 14.33780000 );
        if (NOT (IS_CAR_DEAD( l_U2942 )))
        {
            ;
        }
        sub_13122();
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( sub_3215(), 1 );
        if (NOT (IS_CHAR_DEAD( l_U1806 )))
        {
            SET_GROUP_MEMBER( sub_13200(), l_U1806 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U1798 )))
        {
            ADD_BLIP_FOR_COORD( l_U1799._fU0, l_U1799._fU4, l_U1799._fU8, ref l_U1798 );
            SET_ROUTE( l_U1798, 1 );
            CLEAR_PRINTS();
            PRINT_NOW( "RM8_02", 7500, 1 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1932515764 );
        SET_WANTED_MULTIPLIER( 0.10000000 );
        l_U1933 = 0;
        l_U1755 = 2;
        break;
    }
    return;
}

void sub_9141()
{
    return sub_9152( 1, 1 );
}

int sub_9152(boolean bParam0, unknown uParam1)
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

void sub_9849(unknown uParam0)
{
    REQUEST_MODEL( sub_4857( uParam0 ) );
    return;
}

void sub_9881(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_4857( uParam0 ) );
}

void sub_10006(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_10082( 0, ref l_U1806, 813.83200000, -259.24620000, 14.36760000, 51.37100000 );
        SET_CHAR_DECISION_MAKER( l_U1806, l_U1811 );
        sub_8774( 1, l_U1806, "ROMAN", 0 );
        SET_PED_DIES_WHEN_INJURED( l_U1806, 1 );
        SET_ROMANS_MOOD( 2 );
        SET_CHAR_HEALTH( l_U1806, 500 );
        l_U1929 = 1;
        break;
        case 1:
        sub_10082( 1, ref l_U1788, 942.33290000, -491.92670000, 14.48490000, 263.80520000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1788, "vladsbaroom" );
        SET_CHAR_DECISION_MAKER( l_U1788, l_U1811 );
        SET_CHAR_RELATIONSHIP( l_U1788, 0, 23 );
        SET_CHAR_PROOFS( l_U1788, 1, 1, 1, 1, 1 );
        SET_CURRENT_CHAR_WEAPON( l_U1788, 0, 0 );
        sub_8774( 2, l_U1788, "VLAD", 0 );
        SET_CHAR_AS_ENEMY( l_U1788, 1 );
        break;
        case 2:
        CREATE_CHAR( 26, l_U1757, 936.23550000, -494.00450000, 14.48470000, ref l_U1817[0], 1 );
        SET_CHAR_HEADING( l_U1817[0], 77.62510000 );
        SET_CHAR_DECISION_MAKER( l_U1817[0], l_U1811 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1817[0], "vladsbaroom" );
        SET_CHAR_COMPONENT_VARIATION( l_U1817[0], 0, 0, 2 );
        SET_CHAR_COMPONENT_VARIATION( l_U1817[0], 1, 2, 0 );
        SET_CHAR_AS_ENEMY( l_U1817[0], 1 );
        CREATE_CHAR( 26, l_U1757, 936.32030000, -492.16840000, 14.48470000, ref l_U1817[1], 1 );
        SET_CHAR_HEADING( l_U1817[1], 121.92820000 );
        SET_CHAR_DECISION_MAKER( l_U1817[1], l_U1811 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1817[1], "vladsbaroom" );
        SET_CHAR_COMPONENT_VARIATION( l_U1817[1], 0, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1817[1], 1, 0, 0 );
        SET_CHAR_AS_ENEMY( l_U1817[1], 1 );
        break;
        case 3:
        CREATE_CHAR( 4, l_U1756, 934.80100000, -490.44700000, 15.48490000, ref l_U1796, 1 );
        SET_CHAR_HEADING( l_U1796, 195.07800000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1796, "vladsbaroom" );
        SET_CHAR_DECISION_MAKER( l_U1796, l_U1811 );
        SET_CHAR_NEVER_TARGETTED( l_U1796, 1 );
        GET_CHAR_COORDINATES( l_U1796, ref l_U1950, ref l_U1951, ref l_U1952 );
        GET_CHAR_HEADING( l_U1796, ref l_U1953 );
        break;
    }
    return;
}

void sub_10082(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_4857( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_10132( uParam0, (uParam1^) );
    return;
}

void sub_10132(unknown uParam0, unknown uParam1)
{
    sub_10144( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_10144(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_10238( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_10782( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_10238(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_10782(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_10238( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_10238( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_10238( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_10238( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_10238( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_10238( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_10238( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_10238( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_10238( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_10238( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_10238( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_10238( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_10238( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

int sub_12566(unknown uParam0)
{
    int iVar3;
    int iVar4;
    vector vVar5;
    float fVar8;

    if (g_U9943[1]._fU0)
    {
        return sub_12592( uParam0 );
    }
    iVar3 = -1932515764;
    iVar4 = -464206860;
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar5 = {808.86000000, -265.03120000, 14.53780000};
    fVar8 = 343.59120000;
    CLEAR_AREA( vVar5.x, vVar5.y, vVar5.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar5.x, vVar5.y, vVar5.z, uParam0, 1 );
    CHANGE_CAR_COLOUR( (uParam0^), 0, 1 );
    SET_EXTRA_CAR_COLOURS( (uParam0^), 1, 0 );
    SET_CAR_HEADING( (uParam0^), fVar8 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    SET_VEHICLE_DIRT_LEVEL( (uParam0^), 15.90000000 );
    return 1;
}

int sub_12592(unknown uParam0)
{
    int iVar3;
    vector vVar4;
    float fVar7;

    iVar3 = -1932515764;
    if (g_U9943[2]._fU0)
    {
        iVar3 = 2006918058;
    }
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar4 = {589.28430000, 1430.80900000, 10.00540000};
    fVar7 = 1.95590000;
    CLEAR_AREA( vVar4.x, vVar4.y, vVar4.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar4.x, vVar4.y, vVar4.z, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), fVar7 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    if (iVar3 == 2006918058)
    {
        SET_CAR_COLOUR_COMBINATION( (uParam0^), 2 );
        SET_VEHICLE_DIRT_LEVEL( (uParam0^), 0.00000000 );
    }
    else
    {
        CHANGE_CAR_COLOUR( (uParam0^), 0, 1 );
        SET_EXTRA_CAR_COLOURS( (uParam0^), 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( (uParam0^), 15.90000000 );
    }
    return 1;
}

void sub_13122()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_13200()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_13397()
{
    unknown uVar2;
    int iVar3;

    if (sub_13412( l_U2914 ))
    {
        ;
    }
    switch (l_U1754)
    {
        case 0:
        l_U1754 = 2;
        break;
        case 2:
        sub_13538( g_U64724, "iGetToBarCount....." );
        if (NOT (IS_CHAR_DEAD( l_U1806 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5753(), l_U1806, 20.00000000, 20.00000000, 20.00000000, 0 ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U1806, sub_13200() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5753(), l_U1806, 12.00000000, 12.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U1807 ))
                        {
                            REMOVE_BLIP( l_U1807 );
                        }
                        SET_GROUP_MEMBER( sub_13200(), l_U1806 );
                        CLEAR_PRINTS();
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), l_U1799._fU0, l_U1799._fU4, l_U1799._fU8 + (2.50000000 / 2.00000000), 2.50000000, 2.50000000, 2.50000000, 1 ))
                {
                    if (NOT l_U2937)
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_5753() ))
                        {
                            GET_CAR_CHAR_IS_USING( sub_5753(), ref l_U1803 );
                            if (IS_CHAR_IN_CAR( l_U1806, l_U1803 ))
                            {
                                SET_CAR_AS_MISSION_CAR( l_U1803 );
                                l_U1826 = 1;
                                l_U2937 = 1;
                            }
                        }
                        else
                        {
                            l_U2937 = 1;
                        }
                    }
                    else if (sub_13903( l_U2926 ))
                    {
                        sub_14087( ref l_U2926, 0 );
                    }
                    if (sub_9141())
                    {
                        if (sub_14223( 1, 1 ))
                        {
                            ADD_SCENARIO_BLOCKING_AREA( 925.42180000, -498.28420000, 0.00000000, 952.81580000, -487.39150000, 100.00000000 );
                            if (DOES_BLIP_EXIST( l_U1807 ))
                            {
                                REMOVE_BLIP( l_U1807 );
                            }
                            if (IS_GROUP_MEMBER( l_U1806, sub_13200() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U1806 );
                            }
                            if (DOES_BLIP_EXIST( l_U1798 ))
                            {
                                REMOVE_BLIP( l_U1798 );
                            }
                            CLEAR_WANTED_LEVEL( sub_3215() );
                            l_U1754 = 3;
                        }
                    }
                }
                else if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref l_U1803 );
                    if (IS_CHAR_IN_CAR( l_U1806, l_U1803 ))
                    {
                        if (NOT l_U2935)
                        {
                            l_U2935 = 1;
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U1798 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U1799._fU0, l_U1799._fU4, l_U1799._fU8, ref l_U1798 );
                            SET_ROUTE( l_U1798, 1 );
                            CLEAR_PRINTS();
                            PRINT_NOW( "RM8_61", 7500, 1 );
                        }
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT (sub_13903( l_U2926 )))
                            {
                                if (NOT (sub_13903( l_U2914 )))
                                {
                                    if (NOT l_U2934)
                                    {
                                        if (g_U64724 == 0)
                                        {
                                            sub_14920( "R7_BANT1v1", ref l_U2914, 6, 0 );
                                            l_U2934 = 1;
                                            g_U64724++;
                                        }
                                        else if (g_U64724 == 1)
                                        {
                                            sub_14920( "R7_BANT1v2", ref l_U2914, 6, 0 );
                                            l_U2934 = 1;
                                            g_U64724++;
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( l_U1806, "LISTEN_TO_RADIO", 1, 1, 0 );
                                            l_U2934 = 1;
                                        }
                                    }
                                    else if (sub_13412( l_U2914 ))
                                    {
                                        if (g_U64724 == 1)
                                        {
                                            sub_16061( "R7_BANT1v1", ref l_U2914, 6, 1 );
                                        }
                                        else if (g_U64724 == 2)
                                        {
                                            sub_16061( "R7_BANT1v2", ref l_U2914, 6, 1 );
                                        }
                                    }
                                }
                            }
                        }
                        if (DOES_BLIP_EXIST( l_U1807 ))
                        {
                            REMOVE_BLIP( l_U1807 );
                        }
                    }
                    else if (sub_13903( l_U2914 ))
                    {
                        sub_16272( ref l_U2914 );
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U1798 )))
                {
                    ADD_BLIP_FOR_COORD( l_U1799._fU0, l_U1799._fU4, l_U1799._fU8, ref l_U1798 );
                    SET_ROUTE( l_U1798, 1 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "RM8_02", 7500, 1 );
                }
                if (DOES_BLIP_EXIST( l_U1807 ))
                {
                    REMOVE_BLIP( l_U1807 );
                }
                if (sub_13903( l_U2914 ))
                {
                    sub_16272( ref l_U2914 );
                }
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT (sub_13903( l_U2926 )))
                    {
                        if (NOT l_U2935)
                        {
                            sub_14920( "R7_CAR", ref l_U2926, 6, 1 );
                            l_U2935 = 1;
                        }
                        else if (sub_13412( l_U2926 ))
                        {
                            sub_16061( "R7_CAR", ref l_U2926, 6, 1 );
                        }
                    }
                };;;;
            }
            else if (sub_13903( l_U2926 ))
            {
                sub_16939( ref l_U2926 );
            }
            REMOVE_CHAR_FROM_GROUP( l_U1806 );
            if (DOES_BLIP_EXIST( l_U1798 ))
            {
                REMOVE_BLIP( l_U1798 );
            }
            if (DOES_BLIP_EXIST( l_U1807 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U1806 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5753(), l_U1806, 10.00000000, 10.00000000, 0 ))
                    {
                        REMOVE_BLIP( l_U1807 );
                        SET_GROUP_MEMBER( sub_13200(), l_U1806 );
                        CLEAR_PRINTS();
                    }
                }
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    ;
                }
            }
            else
            {
                ADD_BLIP_FOR_CHAR( l_U1806, ref l_U1807 );
                CHANGE_BLIP_COLOUR( l_U1807, 3 );
                CLEAR_PRINTS();
                PRINT_NOW( "RM8_16", 7500, 1 );
            }
            if (IS_GROUP_MEMBER( l_U1806, sub_13200() ))
            {
                ;
            }
        }
        break;
        case 3:
        if (sub_17603())
        {
            l_U1754 = 5;
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U1924 );
        if (l_U1894)
        {
            if (NOT sub_17623())
            {
                l_U1894 = 0;
            }
        }
        else if (sub_17623())
        {
            l_U1895 = 1;
        }
        if ((l_U1895) || (NOT (sub_13903( l_U2920 ))))
        {
            if (NOT (sub_13903( l_U2920 )))
            {
                ;
            }
            HINT_CAM( 926.72750000, -490.15720000, 15.32600000, 0, 0, 0, 0 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            if (NOT (DOES_BLIP_EXIST( l_U1794 )))
            {
                ADD_BLIP_FOR_COORD( 928.65570000, -490.29170000, 15.48470000, ref l_U1794 );
                SET_ROUTE( l_U1794, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                TASK_CLEAR_LOOK_AT( l_U1806 );
            }
            SET_PLAYER_CONTROL( sub_3215(), 1 );
            if (l_U1895)
            {
                sub_14087( ref l_U2920, 0 );
            }
            else
            {
                sub_14087( ref l_U2920, 0 );
                CLEAR_PRINTS();
            }
            sub_13122();
            if (NOT l_U1828[4])
            {
                PRINT_NOW( "RM8_04", 7500, 1 );
            }
            l_U1754 = 5;
        }
        else if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (sub_13903( l_U2914 )))
            {
                if (sub_13412( l_U2920 ))
                {
                    sub_16061( "R7_ARR", ref l_U2920, 6, 1 );
                }
            }
        }
        break;
        case 5:
        if (sub_14223( 1, 1 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U1806 ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1806, l_U1799._fU0, l_U1799._fU4, l_U1799._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
                    {
                        l_U1795 = 1;
                    }
                }
            }
            REMOVE_BLIP( l_U1794 );
            l_U1755 = 3;
        }
        if (NOT l_U1826)
        {
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                if (NOT l_U2938)
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_5753() );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U1806, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    l_U2938 = 1;
                }
                else if (sub_20437( l_U1806, 1, 0 ))
                {
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_5753() );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U1806, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                }
            }
        }
        break;
        case 6: break;
    }
    if (NOT l_U2936)
    {
        if (DOES_VEHICLE_EXIST( l_U2939 ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref iVar3 );
                if (iVar3 != l_U2939)
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2939 );
                    l_U2936 = 1;
                }
            }
        }
        else
        {
            l_U2936 = 1;
        }
    }
    return;
}

void sub_13412(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_13538(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_13903(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_14015( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_14015( "\n speech is not playing" );
    }
    return 0;
}

void sub_14015(unknown uParam0)
{
    return;
}

void sub_14087(int iParam0, unknown uParam1)
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

int sub_14223(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_5753()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5753() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3215() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3215() )))
    {
        return 0;
    }
    return 1;
}

void sub_14920(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_14943( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_14943(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_14997( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_14997(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_15019( iParam1 )))
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
    sub_15699( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_15019(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_14015( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_14015( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_14015( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_15699(int iParam0, int iParam1)
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

void sub_16061(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_16084( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_16084(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_14997( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_16272(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_14015( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_14015( "\n CONVERSATION PAUSED AT LINE " );
            sub_16412( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_14015( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_14015( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_14015( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_16412(unknown uParam0)
{
    return;
}

int sub_16939(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_14015( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_14015( "\n CONVERSATION PAUSED AT LINE " );
            sub_16412( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_14015( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_14015( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_14015( "\n reseting paused struct line" );
    }
    return 0;
}

int sub_17603()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;
    vector vVar11;
    vector vVar14;
    vector vVar17;
    unknown uVar20;
    unknown uVar21;
    float fVar22;
    float fVar23;
    unknown uVar24;
    unknown uVar25;

    if (NOT l_U2932)
    {
        if (NOT sub_17623())
        {
            l_U2932 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U2933) AND (l_U2913 > 0)))
    {
        if (sub_17623())
        {
            CLEAR_PRINTS();
            sub_14087( ref l_U2920, 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U2933 = 1;
            l_U2913 = 2;
        }
    }
    switch (l_U2913)
    {
        case 0:
        BEGIN_CAM_COMMANDS( ref l_U1827 );
        SET_INSTANT_WIDESCREEN_BORDERS( 1 );
        DISPLAY_RADAR( 0 );
        sub_14087( ref l_U2914, 0 );
        SET_PLAYER_CONTROL( sub_3215(), 0 );
        SET_USE_HIGHDOF( 1 );
        GET_CHAR_HEADING( sub_5753(), ref fVar22 );
        if ((fVar22 <= 270.00000000) AND (fVar22 > 90.00000000))
        {
            vVar2 = {913.87690000, -503.70690000, 17.71188000};
            vVar8 = {913.92260000, -503.65560000, 19.26711000};
            vVar11 = {913.87890000, -503.70460000, 17.78402000};
            vVar5 = {-2.53170900, -0.00000000, -41.52389000};
            vVar14 = {-2.53170500, 0.00000000, -41.52389000};
            vVar17 = {-2.53170500, 0.00000000, -41.52389000};
            fVar23 = 31.80003000;
        }
        else
        {
            vVar2 = {911.30930000, -483.02770000, 17.43793000};
            vVar8 = {911.44050000, -483.11810000, 18.19952000};
            vVar11 = {911.39050000, -483.08370000, 17.11114000};
            vVar5 = {-11.81434000, 0.00000100, -124.44650000};
            vVar14 = {-2.99079200, 0.00000000, -124.44650000};
            vVar17 = {-3.10630100, 0.00000000, -124.44650000};
            fVar23 = 30.60004000;
        }
        if (NOT l_U1826)
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            REQUEST_ANIMS( "gestures@niko" );
            while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar25 );
                if (DOES_VEHICLE_EXIST( uVar25 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar25 )))
                    {
                        if (LOCATE_CAR_3D( uVar25, 922.81140000, -487.10060000, 15.40380000, 1.50000000, 1.50000000, 1.50000000, 0 ))
                        {
                            SET_CAR_AS_MISSION_CAR( uVar25 );
                            CLEAR_AREA_OF_CARS( 921.53400000, -484.87630000, 14.29230000, 2.00000000 );
                            SET_CAR_COORDINATES( uVar25, 921.53400000, -484.87630000, 14.29230000 );
                            SET_CAR_HEADING( uVar25, 2.57160000 );
                            SET_CAR_ON_GROUND_PROPERLY( uVar25 );
                            APPLY_FORCE_TO_CAR( uVar25, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                        }
                    }
                }
                CLEAR_AREA_OF_CARS( 922.81140000, -487.10060000, 15.40380000, 1.50000000 );
                OPEN_SEQUENCE_TASK( ref uVar24 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_5753() );
                CLOSE_SEQUENCE_TASK( uVar24 );
                SET_CHAR_COORDINATES( sub_5753(), 922.72740000, -486.52290000, 14.40880000 );
                SET_CHAR_HEADING( sub_5753(), 196.74100000 );
                SET_CHAR_COORDINATES( l_U1806, 922.81150000, -488.30170000, 14.37420000 );
                SET_CHAR_HEADING( l_U1806, 5.55270000 );
                TASK_PERFORM_SEQUENCE( l_U1806, uVar24 );
                CLEAR_SEQUENCE_TASK( uVar24 );
                TASK_LOOK_AT_CHAR( sub_5753(), l_U1806, -2, 0 );
            }
        }
        CREATE_CAM( 14, ref l_U1900[0] );
        CREATE_CAM( 14, ref l_U1900[1] );
        CREATE_CAM( 3, ref l_U1900[2] );
        SET_CAM_POS( l_U1900[0], vVar8.x, vVar8.y, vVar8.z );
        SET_CAM_ROT( l_U1900[0], vVar14.x, vVar14.y, vVar14.z );
        SET_CAM_ACTIVE( l_U1900[0], 1 );
        SET_CAM_PROPAGATE( l_U1900[0], 0 );
        SET_CAM_FOV( l_U1900[0], fVar23 );
        SET_CAM_NEAR_DOF( l_U1900[0], 0.50000000 );
        SET_CAM_FAR_DOF( l_U1900[0], 22.00000000 );
        SET_CAM_POS( l_U1900[1], vVar11.x, vVar11.y, vVar11.z );
        SET_CAM_ROT( l_U1900[1], vVar17.x, vVar17.y, vVar17.z );
        SET_CAM_FOV( l_U1900[1], fVar23 );
        SET_CAM_NEAR_DOF( l_U1900[1], 0.50000000 );
        SET_CAM_FAR_DOF( l_U1900[1], 22.00000000 );
        SET_CAM_ACTIVE( l_U1900[1], 1 );
        SET_CAM_PROPAGATE( l_U1900[1], 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U1900[2], l_U1900[0], l_U1900[1], 14000, 0 );
        SET_CAM_ACTIVE( l_U1900[2], 1 );
        SET_CAM_PROPAGATE( l_U1900[2], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (NOT (IS_CHAR_DEAD( l_U1806 )))
        {
            TASK_LOOK_AT_CHAR( l_U1806, sub_5753(), -1, 0 );
        }
        TASK_LOOK_AT_CHAR( sub_5753(), l_U1806, -1, 0 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        sub_14920( "R7_ARR2", ref l_U2920, 6, 0 );
        l_U2913 = 1;
        break;
        case 1:
        if (NOT (sub_13903( l_U2920 )))
        {
            l_U2913 = 2;
        }
        break;
        case 2:
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_5753(), 925.34450000, -490.56710000, 14.32340000 );
        }
        DISPLAY_RADAR( 1 );
        SET_INSTANT_WIDESCREEN_BORDERS( 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_CAM_ACTIVE( l_U1900[2], 0 );
        SET_CAM_PROPAGATE( l_U1900[2], 0 );
        SET_CAM_ACTIVE( l_U1900[1], 0 );
        SET_CAM_PROPAGATE( l_U1900[1], 0 );
        SET_CAM_ACTIVE( l_U1900[0], 0 );
        SET_CAM_PROPAGATE( l_U1900[0], 0 );
        DESTROY_CAM( l_U1900[2] );
        DESTROY_CAM( l_U1900[1] );
        DESTROY_CAM( l_U1900[0] );
        SET_USE_HIGHDOF( 0 );
        if (NOT (IS_CHAR_DEAD( l_U1806 )))
        {
            TASK_CLEAR_LOOK_AT( l_U1806 );
        }
        TASK_CLEAR_LOOK_AT( sub_5753() );
        if (NOT (DOES_BLIP_EXIST( l_U1794 )))
        {
            ADD_BLIP_FOR_COORD( 928.65570000, -490.29170000, 15.48470000, ref l_U1794 );
            SET_ROUTE( l_U1794, 1 );
        }
        if (NOT l_U1828[4])
        {
            PRINT_NOW( "RM8_04", 7500, 1 );
        }
        REMOVE_ANIMS( "gestures@niko" );
        END_CAM_COMMANDS( ref l_U1827 );
        l_U2913 = 3;
        return 1;
        break;
    }
    return 0;
}

int sub_17623()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_20437(unknown uParam0, boolean bParam1, int iParam2)
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
        else
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

void sub_20719()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int I;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    GET_CHAR_COORDINATES( sub_5753(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    if (uVar5._fU8 < 13.00000000)
    {
        ;
    }
    switch (l_U2909)
    {
        case 0:
        sub_20800();
        if (sub_9141())
        {
            SET_PLAYER_CONTROL( sub_3215(), 0 );
            if (IS_CHAR_ARMED( sub_5753(), 7 ))
            {
                GET_CURRENT_CHAR_WEAPON( sub_5753(), ref l_U1927 );
                l_U2911 = 1;
            }
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 943.00000000, -493.00000000, 16.00000000, 0, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 928.00000000, -489.00000000, 16.00000000, 0, 0.00000000 );
            SWITCH_GARBAGE_TRUCKS( 0 );
            FORCE_WEATHER( 1 );
            CLEAR_AREA_OF_CARS( 933.21170000, -493.84340000, 15.48470000, 10.00000000 );
            CLEAR_AREA( 937.15580000, -492.58600000, 15.48970000, 9.00000000, 1 );
            CLEAR_AREA( 925.95810000, -489.92250000, 15.34050000, 3.00000000, 1 );
            CLEAR_AREA( 949.65410000, -493.10210000, 15.50090000, 6.00000000, 1 );
            ENABLE_SCENE_STREAMING( 0 );
            START_CUTSCENE_NOW( "Rom8_b" );
            l_U2909 = 1;
        }
        break;
        case 1:
        if (HAS_CUTSCENE_LOADED())
        {
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            l_U2909 = 2;
            CLEAR_NAMED_CUTSCENE( "Rom8_b" );
        }
        break;
        case 2:
        if (NOT l_U1792)
        {
            REQUEST_MODEL( l_U1757 );
            sub_9849( 1 );
            REQUEST_MODEL( l_U1759 );
            REQUEST_MODEL( l_U1756 );
            REQUEST_CAR_RECORDING( 473 );
            while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 473 ))) || ((NOT (HAS_MODEL_LOADED( l_U1756 ))) || ((NOT (HAS_MODEL_LOADED( l_U1757 ))) || ((NOT (HAS_MODEL_LOADED( l_U1759 ))) || (NOT (sub_9881( 1 )))))))
            {
                WAIT( 0 );
            }
            ENABLE_SCENE_STREAMING( 1 );
            for ( I = 0; I <= 25; I++ )
            {
                l_U2064[I] = l_U2381[I]._fU24;
                REQUEST_CAR_RECORDING( l_U2381[I]._fU32 );
            }
            GET_WEAPONTYPE_MODEL( 3, ref l_U2912 );
            REQUEST_CAR_RECORDING( 465 );
            REQUEST_CAR_RECORDING( 465 );
            while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 465 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 465 ))))
            {
                WAIT( 0 );
            }
            if (NOT (DOES_CHAR_EXIST( l_U1788 )))
            {
                REQUEST_INTERIOR_MODELS( 1950944176, "vladsbaroom" );
                CLEAR_AREA( 937.28100000, -515.83500000, 13.97330000, 40.00000000, 1 );
                OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
                sub_10006( 1 );
                sub_10006( 2 );
                sub_10006( 3 );
                if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_5753(), 933.95820000, -493.56220000, 14.48470000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_5753(), 933.95820000, -493.56220000, 14.48470000 );
                }
                SET_CHAR_HEADING( sub_5753(), 269.82390000 );
                CLEAR_CHAR_TASKS( sub_5753() );
                l_U2910 = 1;
                SET_ROOM_FOR_CHAR_BY_NAME( sub_5753(), "vladsbaroom" );
                SET_GAME_CAM_HEADING( 0.00000000 );
                OPEN_SEQUENCE_TASK( ref l_U1802 );
                TASK_SEEK_COVER_TO_COORDS( 0, 930.96150000, -490.66560000, 15.48470000, 935.88350000, -494.75050000, 15.48470000, 0 );
                CLOSE_SEQUENCE_TASK( l_U1802 );
                CLEAR_SEQUENCE_TASK( l_U1802 );
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                if (NOT (IS_CHAR_DEAD( l_U1806 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U1806 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U1806, 929.35610000, -490.23270000, 15.48470000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( l_U1806, 929.35610000, -490.23270000, 15.48470000 );
                    }
                    SET_CHAR_HEADING( l_U1806, 287.03720000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U1806, "vladoorbit" );
                }
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (l_U2911)
            {
                SET_CURRENT_CHAR_WEAPON( sub_5753(), l_U1927, 0 );
            }
            if (l_U1826)
            {
                if (NOT (IS_CAR_DEAD( l_U1803 )))
                {
                    if (NOT (LOCATE_CAR_3D( l_U1803, 920.72090000, -490.34320000, 15.22450000, 3.00000000, 3.00000000, 3.00000000, 0 )))
                    {
                        SET_CAR_COORDINATES( l_U1803, 920.75270000, -487.08020000, 14.88640000 );
                        SET_CAR_HEADING( l_U1803, 0.00000000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U1803 );
                    }
                    else
                    {
                        GET_CAR_HEADING( l_U1803, ref fVar14 );
                        if ((fVar14 <= 270.00000000) AND (fVar14 >= 90.00000000))
                        {
                            l_U2826 = 1;
                        }
                    }
                }
            }
            else
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar16 );
                if (DOES_VEHICLE_EXIST( uVar16 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar16 )))
                    {
                        if (NOT (LOCATE_CAR_3D( uVar16, 916.18140000, -490.19880000, 15.35560000, 13.00000000, 13.00000000, 2.00000000, 0 )))
                        {
                            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar17, ref I );
                            if (I >= 0)
                            {
                                CREATE_CAR( uVar17, 920.93400000, -509.44480000, 13.84900000, ref uVar15, 1 );
                                SET_CAR_HEADING( uVar15, 1.10640000 );
                                SET_CAR_ON_GROUND_PROPERLY( uVar15 );
                            }
                        }
                        else
                        {
                            GET_CAR_HEADING( uVar16, ref fVar14 );
                            if ((fVar14 <= 270.00000000) AND (fVar14 >= 90.00000000))
                            {
                                l_U2826 = 1;
                            }
                        }
                    }
                }
                else
                {
                    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar17, ref I );
                    if (I >= 0)
                    {
                        CREATE_CAR( uVar17, 920.93400000, -509.44480000, 13.84900000, ref uVar15, 1 );
                        SET_CAR_HEADING( uVar15, 1.10640000 );
                        SET_CAR_ON_GROUND_PROPERLY( uVar15 );
                    }
                }
            }
            TASK_FLUSH_ROUTE();
            TASK_EXTEND_ROUTE( 940.72080000, -493.05480000, 15.48480000 );
            TASK_EXTEND_ROUTE( 941.70520000, -492.15060000, 15.48480000 );
            TASK_EXTEND_ROUTE( 941.85240000, -490.08200000, 15.93390000 );
            GET_CHAR_COORDINATES( sub_5753(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            CREATE_CAR( l_U1759, 945.51320000, -500.93320000, 15.07050000, ref l_U1793, 1 );
            SET_CAR_PROOFS( l_U1793, 1, 1, 1, 1, 1 );
            SET_CAR_HEADING( l_U1793, 89.47270000 );
            CHANGE_CAR_COLOUR( l_U1793, 66, 66 );
            SET_EXTRA_CAR_COLOURS( l_U1793, 8, 0 );
            GET_NUM_CAR_COLOURS( l_U1793, ref l_U2908 );
            SET_VEHICLE_DIRT_LEVEL( l_U1793, 10.00000000 );
            SUPPRESS_CAR_MODEL( l_U1759 );
            SET_NEXT_DESIRED_MOVE_STATE( 4 );
            OPEN_SEQUENCE_TASK( ref l_U1791 );
            TASK_ENTER_CAR_AS_DRIVER( 0, l_U1793, -1 );
            CLOSE_SEQUENCE_TASK( l_U1791 );
            if (NOT (IS_CHAR_DEAD( l_U1788 )))
            {
                TASK_PERFORM_SEQUENCE( l_U1788, l_U1791 );
            }
            CLEAR_SEQUENCE_TASK( l_U1791 );
            l_U1792 = 1;
            OPEN_SEQUENCE_TASK( ref l_U1797 );
            TASK_DUCK( 0, -2 );
            CLOSE_SEQUENCE_TASK( l_U1797 );
            if (NOT (IS_CHAR_INJURED( l_U1796 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1796 );
                TASK_PERFORM_SEQUENCE( l_U1796, l_U1797 );
            }
            CLEAR_SEQUENCE_TASK( l_U1797 );
            if (NOT (IS_CHAR_DEAD( l_U1817[0] )))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1817[0], "vladsbaroom" );
            }
            if (NOT (IS_CHAR_DEAD( l_U1817[1] )))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1817[1], "vladsbaroom" );
            }
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 933.95820000, -493.56220000, 14.48470000, 1.00000000, 1.00000000, 5.00000000, 0 )))
        {
            GET_CHAR_COORDINATES( sub_5753(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            sub_23203( uVar8, "Location...." );
            SET_CHAR_COORDINATES( sub_5753(), 933.95820000, -493.56220000, 14.48470000 );
            SET_CHAR_HEADING( sub_5753(), 269.82390000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_5753(), "vladsbaroom" );
        }
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5753(), 0.50000000, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        OPEN_SEQUENCE_TASK( ref l_U1820[0] );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_5753() );
        CLOSE_SEQUENCE_TASK( l_U1820[0] );
        if (NOT (IS_CHAR_DEAD( l_U1817[0] )))
        {
            TASK_PERFORM_SEQUENCE( l_U1817[0], l_U1820[0] );
        }
        if (NOT (IS_CHAR_DEAD( l_U1817[1] )))
        {
            TASK_PERFORM_SEQUENCE( l_U1817[1], l_U1820[0] );
        }
        CLEAR_AREA( 934.33200000, -493.08120000, 15.48470000, 100.00000000, 1 );
        CLEAR_SEQUENCE_TASK( l_U1820[0] );
        l_U1792 = 0;
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 933.95820000, -493.56220000, 14.48470000, 1.00000000, 1.00000000, 5.00000000, 0 )))
        {
            GET_CHAR_COORDINATES( sub_5753(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            sub_23203( uVar8, "Location...." );
            SET_CHAR_COORDINATES( sub_5753(), 933.95820000, -493.56220000, 14.48470000 );
            SET_CHAR_HEADING( sub_5753(), 269.82390000 );
            SET_CHAR_COORDINATES( sub_5753(), 933.95820000, -493.56220000, 14.48470000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_5753(), "vladsbaroom" );
        }
        GET_GAME_VIEWPORT_ID( ref l_U1926 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U1926, "vladsbaroom" );
        SET_PLAYER_CONTROL( sub_3215(), 1 );
        sub_13122();
        DO_SCREEN_FADE_IN_UNHACKED( 100 );
        GET_GAME_TIMER( ref l_U2905 );
        l_U1755 = 4;;
        break;
    }
    if (l_U2910)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 927.77130000, -490.14040000, 15.32680000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            l_U2910 = 0;
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 100 );
            }
        }
    }
    return;
}

void sub_20800()
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

void sub_23203(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_23891()
{
    int iVar2;

    switch (l_U2888)
    {
        case 0:
        if (NOT (DOES_BLIP_EXIST( l_U1789 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U1788 )))
            {
                ADD_BLIP_FOR_CHAR( l_U1788, ref l_U1789 );
                CHANGE_BLIP_COLOUR( l_U1789, 1 );
                if (NOT l_U2896)
                {
                    if (NOT (IS_CHAR_DEAD( l_U1806 )))
                    {
                        if (l_U1826)
                        {
                            TASK_FLUSH_ROUTE();
                            TASK_EXTEND_ROUTE( 924.10240000, -490.02510000, 15.32860000 );
                            OPEN_SEQUENCE_TASK( ref l_U1808 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 929.35610000, -490.23270000, 15.48470000, 3, -1, 0.50000000 );
                            if (NOT (IS_CAR_DEAD( l_U1803 )))
                            {
                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U1803, -1, 0 );
                            }
                            CLOSE_SEQUENCE_TASK( l_U1808 );
                            if (NOT (IS_CHAR_INJURED( l_U1806 )))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1806, 1 );
                                SET_NEXT_DESIRED_MOVE_STATE( 4 );
                                TASK_PERFORM_SEQUENCE( l_U1806, l_U1808 );
                            }
                            l_U2896 = 1;
                            CLEAR_SEQUENCE_TASK( l_U1808 );
                        }
                        else
                        {
                            OPEN_SEQUENCE_TASK( ref l_U1808 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 924.65450000, -490.47690000, 14.32740000, 3, -1, 0.50000000 );
                            CLOSE_SEQUENCE_TASK( l_U1808 );
                            if (NOT (IS_CHAR_INJURED( l_U1806 )))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1806, 1 );
                                SET_NEXT_DESIRED_MOVE_STATE( 4 );
                                TASK_PERFORM_SEQUENCE( l_U1806, l_U1808 );
                            }
                            CLEAR_SEQUENCE_TASK( l_U1808 );
                            l_U2896 = 1;
                        }
                    }
                }
            }
        }
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT l_U1828[5])
            {
                sub_14920( "R7_SHOUT", ref l_U2889, 6, 1 );
                l_U1828[5] = 1;
            }
            else if (NOT (sub_13903( l_U2889 )))
            {
                if (NOT l_U1828[6])
                {
                    if (NOT l_U2907)
                    {
                        PRINT_NOW( "RM8_06", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "RM8_06", 3000, 1 );
                    }
                    l_U1828[6] = 1;
                    GET_GAME_TIMER( ref l_U1925 );
                }
                else
                {
                    GET_GAME_TIMER( ref l_U1924 );
                    if (NOT l_U2907)
                    {
                        if ((l_U1924 - l_U1925) > 14000)
                        {
                            l_U1828[6] = 0;
                            l_U2907 = 1;
                        }
                    }
                    else if ((l_U1924 - l_U1925) > 10000)
                    {
                        l_U1828[6] = 0;
                    }
                }
            }
        }
        if (NOT l_U1823[0])
        {
            GET_GAME_TIMER( ref l_U2904 );
            if ((l_U2904 - l_U2905) > 1000)
            {
                OPEN_SEQUENCE_TASK( ref l_U1820[0] );
                TASK_COMBAT( 0, sub_5753() );
                CLOSE_SEQUENCE_TASK( l_U1820[0] );
                if (NOT (IS_CHAR_DEAD( l_U1817[0] )))
                {
                    SET_CHAR_DECISION_MAKER( l_U1817[0], l_U1812 );
                    SET_COMBAT_DECISION_MAKER( l_U1817[0], l_U1816 );
                    if (NOT (IS_CHAR_INJURED( l_U1817[0] )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1817[0], l_U1820[0] );
                        l_U1823[0] = 1;
                    }
                }
                CLEAR_SEQUENCE_TASK( l_U1820[0] );
            }
        }
        if (NOT l_U1823[1])
        {
            GET_GAME_TIMER( ref l_U2904 );
            if ((l_U2904 - l_U2905) > 2500)
            {
                OPEN_SEQUENCE_TASK( ref l_U1820[1] );
                TASK_COMBAT( 0, sub_5753() );
                CLOSE_SEQUENCE_TASK( l_U1820[1] );
                if (NOT (IS_CHAR_DEAD( l_U1817[1] )))
                {
                    SET_CHAR_VISIBLE( l_U1817[1], 1 );
                    SET_CHAR_DECISION_MAKER( l_U1817[1], l_U1812 );
                    SET_COMBAT_DECISION_MAKER( l_U1817[1], l_U1816 );
                    if (NOT (IS_CHAR_INJURED( l_U1817[1] )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1817[1], l_U1820[1] );
                        l_U1823[1] = 1;
                    }
                }
                CLEAR_SEQUENCE_TASK( l_U1820[1] );
            }
        }
        if (NOT l_U1930)
        {
            if (NOT (IS_CHAR_DEAD( l_U1788 )))
            {
                if (NOT l_U2895)
                {
                    if (NOT (IS_CAR_DEAD( l_U1793 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U1788, l_U1793 ))
                        {
                            GET_GAME_TIMER( ref l_U2897 );
                            l_U2895 = 1;
                        }
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U2898 );
                }
                if (NOT l_U2906)
                {
                    GET_GAME_TIMER( ref l_U2902 );
                    l_U2906 = 1;
                }
                else
                {
                    GET_GAME_TIMER( ref l_U2903 );
                    if ((l_U2903 - l_U2902) > 20000)
                    {
                        if (NOT (IS_CAR_DEAD( l_U1793 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U1788, l_U1793 )))
                            {
                                GET_DRIVER_OF_CAR( l_U1793, ref iVar2 );
                                if (iVar2 == nil)
                                {
                                    WARP_CHAR_INTO_CAR( l_U1788, l_U1793 );
                                    CLEAR_ROOM_FOR_CHAR( l_U1788 );
                                    CLOSE_ALL_CAR_DOORS( l_U1793 );
                                    l_U1930 = 1;
                                }
                            }
                        }
                    }
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 950.01340000, -492.30940000, 15.49030000, 2.00000000, 2.00000000, 1.00000000, 0 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U1793 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U1788, l_U1793 )))
                        {
                            GET_DRIVER_OF_CAR( l_U1793, ref iVar2 );
                            if (iVar2 == nil)
                            {
                                WARP_CHAR_INTO_CAR( l_U1788, l_U1793 );
                                CLEAR_ROOM_FOR_CHAR( l_U1788 );
                                CLOSE_ALL_CAR_DOORS( l_U1793 );
                                l_U1930 = 1;
                            }
                        }
                    }
                }
                else if ((LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 952.72890000, -486.93910000, 15.67020000, 5.00000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 952.22590000, -494.93330000, 15.62130000, 5.00000000, 1.00000000, 1.00000000, 0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U1788, 943.67920000, -498.22310000, 15.29400000, 3.00000000, 2.00000000, 2.00000000, 0 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U1793 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U1788, l_U1793 )))
                            {
                                WARP_CHAR_INTO_CAR( l_U1788, l_U1793 );
                            }
                        }
                    }
                    l_U1930 = 1;
                }
                else if (sub_25752())
                {
                    l_U2827 = 1;
                    CLEAR_AREA( 934.33200000, -493.08120000, 15.48470000, 100.00000000, 1 );
                    if (NOT (sub_20437( l_U1788, 1, 0 )))
                    {
                        if (DOES_BLIP_EXIST( l_U1789 ))
                        {
                            REMOVE_BLIP( l_U1789 );
                        }
                        if (NOT (IS_CAR_DEAD( l_U1793 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U1788, l_U1793 )))
                            {
                                WARP_CHAR_INTO_CAR( l_U1788, l_U1793 );
                            }
                            l_U1930 = 1;
                        }
                    }
                    else
                    {
                        l_U1930 = 1;
                    }
                }
                else if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U1793, sub_5753() ))
                {
                    l_U1930 = 1;
                }
                else if (((l_U2898 - l_U2897) >= 60000) AND (l_U2895))
                {
                    l_U1930 = 1;
                }
                else if (LOCATE_CHAR_ANY_MEANS_3D( l_U1788, 943.67920000, -498.22310000, 15.29400000, 3.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U1793 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U1788, l_U1793 )))
                        {
                            WARP_CHAR_INTO_CAR( l_U1788, l_U1793 );
                        }
                    }
                };;;;;;
            }
        }
        else
        {
            l_U2888 = 2;
        }
        break;
        case 1: break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U1788 )))
        {
            if (NOT (IS_CAR_DEAD( l_U1793 )))
            {
                if (IS_CHAR_IN_CAR( l_U1788, l_U1793 ))
                {
                    if (l_U1826)
                    {
                        if (DOES_BLIP_EXIST( l_U1789 ))
                        {
                            REMOVE_BLIP( l_U1789 );
                        }
                        CLEAR_PRINTS();
                        PRINT_NOW( "RM8_53", 7500, 1 );
                        if (DOES_CHAR_EXIST( l_U1796 ))
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1796 );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1756 );
                        }
                        if (NOT (IS_CAR_DEAD( l_U1803 )))
                        {
                            ADD_BLIP_FOR_CAR( l_U1803, ref l_U1804 );
                            CHANGE_BLIP_COLOUR( l_U1804, 3 );
                        }
                    }
                    if (NOT (IS_CAR_DEAD( l_U1793 )))
                    {
                        SET_CAR_ENGINE_ON( l_U1793, 1, 1 );
                        sub_26543( 1, 1 );
                        sub_27670();
                        START_PLAYBACK_RECORDED_CAR( l_U1793, 465 );
                        ENABLE_CHASE_AUDIO( 1 );
                    }
                    l_U2888 = 4;
                    l_U1755 = 5;
                }
            }
        }
        break;
        case 4: break;
    }
    return;
}

int sub_25752()
{
    if (NOT l_U2901)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 927.23860000, -489.96030000, 15.34460000, 1.00000000, 2.00000000, 1.00000000, 0 ))
        {
            GET_GAME_TIMER( ref l_U2899 );
            l_U2901 = 1;
        }
    }
    else
    {
        GET_GAME_TIMER( ref l_U2900 );
        if (NOT (IS_CAR_DEAD( l_U1793 )))
        {
            if (((l_U2900 - l_U2899) > 500) || ((IS_CHAR_IN_ANY_CAR( sub_5753() )) || (IS_CAR_ON_SCREEN( l_U1793 ))))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_26543(boolean bParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U527 = 1;
    l_U537 = 0;
    l_U1211 = 0;
    l_U1212 = 0;
    l_U1213 = 0;
    l_U1214 = 0;
    l_U1215 = 1;
    l_U1216 = 0;
    l_U1217 = 0;
    l_U1218 = 0;
    l_U1219 = 0;
    l_U1220 = -1;
    l_U1221 = 0;
    l_U1222 = 0;
    l_U1223 = 0;
    l_U1224 = 0;
    l_U1046 = 0.00000000;
    l_U540 = 0;
    if (IS_PLAYER_PLAYING( sub_3215() ))
    {
        GET_CHAR_COORDINATES( sub_5753(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        l_U1620._fU0 = uVar4._fU0 - 100.00000000;
        l_U1620._fU4 = uVar4._fU4 - 100.00000000;
        l_U1620._fU8 = uVar4._fU8 - 100.00000000;
        l_U1623._fU0 = uVar4._fU0 + 100.00000000;
        l_U1623._fU4 = uVar4._fU4 + 100.00000000;
        l_U1623._fU8 = uVar4._fU8 + 100.00000000;
        SWITCH_ROADS_OFF( l_U1620._fU0, l_U1620._fU4, l_U1620._fU8, l_U1623._fU0, l_U1623._fU4, l_U1623._fU8 );
        if (bParam0)
        {
            CLEAR_AREA_OF_CARS( uVar4._fU0, uVar4._fU4, uVar4._fU8, 500.00000000 );
        }
    }
    sub_26884();
    l_U539 = 0;
    if (IS_PLAYER_PLAYING( sub_3215() ))
    {
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_3215(), 1 );
        SET_CREATE_RANDOM_COPS( 0 );
    }
    sub_27062();
    return;
}

void sub_26884()
{
    ADD_SCENARIO_BLOCKING_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000, 0 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    return;
}

void sub_27062()
{
    int I;

    for ( I = 0; I < 20; I++ )
    {
        l_U1632[I] = nil;
        l_U1326[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U567[I] = 0.00000000;
        l_U588[I] = 0.00000000;
        l_U609[I] = 0.00000000;
        l_U630[I] = 0.00000000;
        l_U1066[I] = 0;
        l_U651[I] = 0.00000000;
        l_U1087[I] = 0;
        l_U1228[I] = 0;
    }
    for ( I = 0; I < 7; I++ )
    {
        l_U1653[I] = nil;
    }
    l_U1219 = 0;
    l_U1211 = 0;
    l_U1212 = 0;
    for ( I = 0; I < 50; I++ )
    {
        l_U1661[I] = nil;
        l_U1387[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U832[I] = 0.00000000;
        l_U883[I] = 0.00000000;
        l_U934[I] = 0.00000000;
        l_U985[I] = 0.00000000;
        l_U1160[I] = 0;
        l_U1249[I] = 0;
    }
    for ( I = 0; I < 6; I++ )
    {
        l_U1738[I] = nil;
    }
    l_U1218 = 0;
    l_U1214 = 0;
    for ( I = 0; I < 25; I++ )
    {
        l_U1712[I] = nil;
        l_U1538[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U676[I] = 0.00000000;
        l_U702[I] = 0.00000000;
        l_U728[I] = 0.00000000;
        l_U754[I] = 0.00000000;
        l_U1108[I] = 0;
        l_U780[I] = 0.00000000;
        l_U1134[I] = 0;
        l_U1300[I] = 0;
    }
    l_U1213 = 0;
    l_U1221 = 0;
    l_U1225 = 0;
    l_U1226 = 0;
    l_U1227 = 0;
    return;
}

void sub_27670()
{
    l_U1326[0] = {907.59960000, -309.35920000, 17.69840000};
    l_U567[0] = -0.00750000;
    l_U588[0] = -0.00670000;
    l_U609[0] = 0.99990000;
    l_U630[0] = -0.00500000;
    l_U1066[0] = 123;
    l_U651[0] = 5000.00000000;
    l_U1228[0] = 627033353;
    l_U1326[1] = {908.48720000, -261.02890000, 17.62970000};
    l_U567[1] = -0.00550000;
    l_U588[1] = -0.00440000;
    l_U609[1] = 0.99990000;
    l_U630[1] = -0.00760000;
    l_U1066[1] = 124;
    l_U651[1] = 6000.00000000;
    l_U1228[1] = -276900515;
    l_U1326[2] = {836.74230000, -355.61040000, 14.92550000};
    l_U567[2] = 0.06629999;
    l_U588[2] = -0.02790000;
    l_U609[2] = -0.03120000;
    l_U630[2] = 0.99690000;
    l_U1066[2] = 456;
    l_U651[2] = 15027.00000000;
    l_U1228[2] = -310465116;
    l_U1326[3] = {836.84480000, -373.79010000, 13.70460000};
    l_U567[3] = 0.00230000;
    l_U588[3] = 0.01450000;
    l_U609[3] = -0.02330000;
    l_U630[3] = 0.99960000;
    l_U1066[3] = 457;
    l_U651[3] = 15825.00000000;
    l_U1228[3] = 1884962369;
    l_U1326[4] = {818.74970000, -240.01080000, 14.41840000};
    l_U567[4] = -0.03730000;
    l_U588[4] = -0.01090000;
    l_U609[4] = 0.69210000;
    l_U630[4] = 0.72080000;
    l_U1066[4] = 458;
    l_U651[4] = 25404.00000000;
    l_U1228[4] = 974744810;
    l_U1326[5] = {865.41300000, -153.26320000, 5.45140000};
    l_U567[5] = -0.01430000;
    l_U588[5] = -0.00420000;
    l_U609[5] = 0.92600000;
    l_U630[5] = -0.37720000;
    l_U1066[5] = 459;
    l_U651[5] = 39272.00000000;
    l_U1228[5] = 974744810;
    l_U1326[6] = {854.94790000, -126.66830000, 5.65320000};
    l_U567[6] = 0.00650000;
    l_U588[6] = -0.01010000;
    l_U609[6] = 0.07160000;
    l_U630[6] = 0.99740000;
    l_U1066[6] = 460;
    l_U651[6] = 39272.00000000;
    l_U1228[6] = 1208856469;
    l_U1326[7] = {830.09110000, -62.65840000, 5.51460000};
    l_U567[7] = 0.00380000;
    l_U588[7] = 0.00660000;
    l_U609[7] = 0.94770000;
    l_U630[7] = -0.31900000;
    l_U1066[7] = 461;
    l_U651[7] = 41770.00000000;
    l_U1228[7] = -1883869285;
    l_U1326[8] = {804.46550000, -12.99050000, 5.54570000};
    l_U567[8] = -0.00170000;
    l_U588[8] = 0.00750000;
    l_U609[8] = 0.98970000;
    l_U630[8] = -0.14280000;
    l_U1066[8] = 462;
    l_U651[8] = 44759.00000000;
    l_U1228[8] = 1304597482;
    l_U1326[9] = {788.06010000, 47.42190000, 5.41870000};
    l_U567[9] = -0.00050000;
    l_U588[9] = 0.00220000;
    l_U609[9] = 0.99090000;
    l_U630[9] = -0.13430000;
    l_U1066[9] = 463;
    l_U651[9] = 47697.00000000;
    l_U1228[9] = 974744810;
    l_U1326[11] = {784.48150000, 60.21120000, 6.14850000};
    l_U567[11] = 0.00000000;
    l_U588[11] = -0.00050000;
    l_U609[11] = 0.99180000;
    l_U630[11] = -0.12750000;
    l_U1066[11] = 464;
    l_U651[11] = 48539.00000000;
    l_U1228[11] = 850991848;
    l_U1326[12] = {782.26540000, 69.04370000, 5.77760000};
    l_U567[12] = 0.00110000;
    l_U588[12] = -0.00640000;
    l_U609[12] = 0.99090000;
    l_U630[12] = -0.13420000;
    l_U1066[12] = 469;
    l_U651[12] = 49067.00000000;
    l_U1228[12] = 1208856469;
    l_U1326[13] = {784.29860000, 77.03730000, 5.96690000};
    l_U567[13] = 0.00900000;
    l_U588[13] = 0.00140000;
    l_U609[13] = 0.13310000;
    l_U630[13] = 0.99110000;
    l_U1066[13] = 473;
    l_U651[13] = 49397.00000000;
    l_U1228[13] = -310465116;
    l_U1326[14] = {780.06560000, 77.20290000, 5.97410000};
    l_U567[14] = 0.00050000;
    l_U588[14] = -0.00110000;
    l_U609[14] = 0.99080000;
    l_U630[14] = -0.13540000;
    l_U1066[14] = 467;
    l_U651[14] = 49529.00000000;
    l_U1228[14] = -310465116;
    l_U1326[15] = {779.41630000, 95.07520000, 5.90000000};
    l_U567[15] = 0.00380000;
    l_U588[15] = 0.00050000;
    l_U609[15] = 0.12790000;
    l_U630[15] = 0.99180000;
    l_U1066[15] = 468;
    l_U651[15] = 50321.00000000;
    l_U1228[15] = 1208856469;
    l_U1326[16] = {769.79680000, 130.37190000, 5.76240000};
    l_U567[16] = 0.00270000;
    l_U588[16] = -0.00040000;
    l_U609[16] = 0.13080000;
    l_U630[16] = 0.99140000;
    l_U1066[16] = 498;
    l_U651[16] = 51951.00000000;
    l_U1228[16] = -1883869285;
    l_U1326[17] = {825.36250000, 296.98510000, 5.23190000};
    l_U567[17] = 0.00800000;
    l_U588[17] = 0.01960000;
    l_U609[17] = 0.99020000;
    l_U630[17] = 0.13790000;
    l_U1066[17] = 493;
    l_U651[17] = 62227.00000000;
    l_U1228[17] = 1208856469;
    l_U1387[0] = {920.17690000, -324.59950000, 17.38800000};
    l_U832[0] = -0.00010000;
    l_U883[0] = 0.01860000;
    l_U934[0] = -0.00500000;
    l_U985[0] = 0.99980000;
    l_U1249[0] = -1883869285;
    l_U1387[1] = {903.84580000, -318.75890000, 17.60820000};
    l_U832[1] = -0.02090000;
    l_U883[1] = -0.00430000;
    l_U934[1] = 0.99970000;
    l_U985[1] = -0.01250000;
    l_U1249[1] = -310465116;
    l_U1387[2] = {838.95410000, -339.20680000, 15.34840000};
    l_U832[2] = 0.00290000;
    l_U883[2] = 0.03190000;
    l_U934[2] = 0.00920000;
    l_U985[2] = 0.99940000;
    l_U1249[2] = 974744810;
    l_U1387[3] = {781.63290000, -274.65520000, 14.86080000};
    l_U832[3] = -0.00710000;
    l_U883[3] = -0.01490000;
    l_U934[3] = 0.97240000;
    l_U985[3] = 0.23260000;
    l_U1249[3] = -310465116;
    l_U1387[8] = {889.27470000, -162.85570000, 5.48240000};
    l_U832[8] = 0.00310000;
    l_U883[8] = 0.01050000;
    l_U934[8] = 0.90820000;
    l_U985[8] = 0.41840000;
    l_U1249[8] = 1491375716;
    l_U1387[9] = {864.29100000, -130.56920000, 5.98930000};
    l_U832[9] = 0.00060000;
    l_U883[9] = 0.00070000;
    l_U934[9] = 0.87720000;
    l_U985[9] = 0.48020000;
    l_U1249[9] = 2053223216;
    l_U1387[10] = {775.59000000, 37.23400000, 5.45200000};
    l_U832[10] = 0.01130000;
    l_U883[10] = -0.00060000;
    l_U934[10] = 0.12200000;
    l_U985[10] = 0.99250000;
    l_U1249[10] = 1491375716;
    l_U1387[12] = {769.06750000, 204.57720000, 5.79520000};
    l_U832[12] = -0.00010000;
    l_U883[12] = 0.00050000;
    l_U934[12] = 0.99370010;
    l_U985[12] = 0.11190000;
    l_U1249[12] = -119658072;
    l_U1387[13] = {822.61720000, 302.93450000, 5.91270000};
    l_U832[13] = -0.02170000;
    l_U883[13] = 0.00330000;
    l_U934[13] = 0.99769990;
    l_U985[13] = 0.06420000;
    l_U1249[13] = 2053223216;
    l_U1387[14] = {814.49590000, 313.60260000, 5.66690000};
    l_U832[14] = -0.00440000;
    l_U883[14] = 0.05420000;
    l_U934[14] = -0.02980000;
    l_U985[14] = 0.99810000;
    l_U1249[14] = -119658072;
    l_U1538[0] = {917.73980000, -474.44490000, 15.33940000};
    l_U676[0] = 0.00680000;
    l_U702[0] = 0.00200000;
    l_U728[0] = -0.00690000;
    l_U754[0] = 1.00000000;
    l_U1108[0] = 451;
    l_U780[0] = 0.00000000;
    l_U806[0] = 1.00000000;
    l_U1300[0] = 1264341792;
    l_U1538[1] = {906.01280000, -358.83060000, 16.91680000};
    l_U676[1] = -0.02010000;
    l_U702[1] = -0.01390000;
    l_U728[1] = 0.99960000;
    l_U754[1] = -0.01090000;
    l_U1108[1] = 452;
    l_U780[1] = 0.00000000;
    l_U806[1] = 1.00000000;
    l_U1300[1] = 974744810;
    l_U1538[2] = {906.27090000, -378.47710000, 16.56140000};
    l_U676[2] = -0.02240000;
    l_U702[2] = -0.01140000;
    l_U728[2] = 0.99960000;
    l_U754[2] = -0.01320000;
    l_U1108[2] = 453;
    l_U780[2] = 0.00000000;
    l_U806[2] = 1.00000000;
    l_U1300[2] = -276900515;
    l_U1538[3] = {907.84440000, -320.75810000, 18.18070000};
    l_U676[3] = -0.00720000;
    l_U702[3] = 0.00160000;
    l_U728[3] = 0.99990000;
    l_U754[3] = 0.00810000;
    l_U1108[3] = 454;
    l_U780[3] = 0.00000000;
    l_U806[3] = 1.00000000;
    l_U1300[3] = 904750859;
    l_U1538[4] = {884.18780000, -349.60720000, 16.31030000};
    l_U676[4] = 0.02660000;
    l_U702[4] = 0.00310000;
    l_U728[4] = -0.64060000;
    l_U754[4] = 0.76740000;
    l_U1108[4] = 472;
    l_U780[4] = 10000.00000000;
    l_U806[4] = 1.00000000;
    l_U1300[4] = 1353720154;
    l_U1538[5] = {866.48390000, -348.13970000, 14.42410000};
    l_U676[5] = -0.08570000;
    l_U702[5] = -0.08720000;
    l_U728[5] = 0.78120000;
    l_U754[5] = 0.61220000;
    l_U1108[5] = 494;
    l_U780[5] = 13000.00000000;
    l_U806[5] = 0.95000000;
    l_U1300[5] = 1208856469;
    l_U1538[6] = {882.59490000, -215.99900000, 5.58050000};
    l_U676[6] = -0.02100000;
    l_U702[6] = 0.02030000;
    l_U728[6] = 0.89680000;
    l_U754[6] = 0.44160000;
    l_U1108[6] = 495;
    l_U780[6] = 27000.00000000;
    l_U806[6] = 1.00000000;
    l_U1300[6] = -276900515;
    l_U1538[7] = {847.96110000, -112.28960000, 5.56560000};
    l_U676[7] = -0.02970000;
    l_U702[7] = 0.00150000;
    l_U728[7] = 0.99930000;
    l_U754[7] = -0.02380000;
    l_U1108[7] = 496;
    l_U780[7] = 35000.00000000;
    l_U806[7] = 1.00000000;
    l_U1300[7] = 627033353;
    l_U1538[8] = {774.03700000, -335.92830000, 8.80430000};
    l_U676[8] = 0.09680000;
    l_U702[8] = -0.03030000;
    l_U728[8] = 0.14800000;
    l_U754[8] = 0.98380000;
    l_U1108[8] = 497;
    l_U780[8] = 18000.00000000;
    l_U806[8] = 1.00000000;
    l_U1300[8] = 1349725314;
    l_U1538[9] = {831.35310000, -243.28950000, 15.67940000};
    l_U676[9] = -0.00680000;
    l_U702[9] = 0.00880000;
    l_U728[9] = 0.69270000;
    l_U754[9] = 0.72110000;
    l_U1108[9] = 499;
    l_U780[9] = 24000.00000000;
    l_U806[9] = 1.00000000;
    l_U1300[9] = 904750859;
    l_U1538[10] = {778.20490000, -283.07530000, 14.64420000};
    l_U676[10] = -0.01080000;
    l_U702[10] = -0.03120000;
    l_U728[10] = 0.96910000;
    l_U754[10] = 0.24440000;
    l_U1108[10] = 120;
    l_U780[10] = 13000.00000000;
    l_U806[10] = 1.00000000;
    l_U1300[10] = -713569950;
    l_U1538[11] = {829.94670000, -161.94000000, 5.65170000};
    l_U676[11] = -0.00330000;
    l_U702[11] = 0.00080000;
    l_U728[11] = -0.22060000;
    l_U754[11] = 0.97540000;
    l_U1108[11] = 121;
    l_U780[11] = 36000.00000000;
    l_U806[11] = 1.00000000;
    l_U1300[11] = 1353720154;
    l_U1538[12] = {806.15890000, 109.06420000, 6.07960000};
    l_U676[12] = -0.00040000;
    l_U702[12] = -0.00050000;
    l_U728[12] = 0.79040000;
    l_U754[12] = 0.61260010;
    l_U1108[12] = 122;
    l_U780[12] = 46000.00000000;
    l_U806[12] = 0.80000000;
    l_U1300[12] = -713569950;
    l_U2206[0] = 11;
    l_U2220[0] = 16.00000000;
    l_U2206[1] = 12;
    l_U2220[1] = 35.00000000;
    l_U2206[2] = 4;
    l_U2220[2] = 20.00000000;
    l_U2206[3] = 9;
    l_U2220[3] = 16.00000000;
    l_U2206[4] = 10;
    l_U2220[4] = 25.00000000;
    return;
}

void sub_32392()
{
    if ((NOT l_U2879) AND (NOT l_U1896))
    {
        if (l_U1826)
        {
            if (NOT (IS_CAR_DEAD( l_U1803 )))
            {
                if (IS_CHAR_IN_CAR( sub_5753(), l_U1803 ))
                {
                    l_U1896 = 1;
                    if (DOES_BLIP_EXIST( l_U1804 ))
                    {
                        REMOVE_BLIP( l_U1804 );
                    }
                    if (DOES_BLIP_EXIST( l_U1789 ))
                    {
                        REMOVE_BLIP( l_U1789 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U1806 )))
                    {
                        SET_GROUP_MEMBER( sub_13200(), l_U1806 );
                    }
                }
                else if (NOT l_U2881)
                {
                    if (NOT (IS_CHAR_DEAD( l_U1806 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 930.33280000, -516.63490000, 14.84360000, 1.00000000, 19.00000000, 2.00000000, 0 ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U1806, l_U1803 )))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( l_U1806 )))
                                {
                                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U1803, 0 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1806, l_U1803, 0 );
                                        CLEAR_ROOM_FOR_CHAR( l_U1806 );
                                        l_U2881 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U1826 = 0;
                if (NOT (IS_CHAR_DEAD( l_U1788 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U1788, ref l_U1789 );
                    CHANGE_BLIP_COLOUR( l_U1789, 1 );
                    PRINT_NOW( "RM8_09", 7500, 1 );
                }
            }
        }
        else if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 942.69740000, -492.80230000, 15.48990000, 14.00000000, 12.00000000, 3.00000000, 0 ))) AND (sub_32834( sub_5753() )))
        {
            l_U2879 = 1;
        }
        if (NOT l_U2880)
        {
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "RM8_53", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5753(), l_U1806, 15.00000000, 15.00000000, 15.00000000, 0 ))
                    {
                        if (sub_33057( sub_5753(), l_U1806 ))
                        {
                            sub_14920( "R7_AFTER", ref l_U2882, 6, 1 );
                            l_U2880 = 1;
                        }
                    }
                }
            }
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U1806 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5753(), l_U1806, 20.00000000, 20.00000000, 20.00000000, 0 ))
        {
            if (NOT (IS_GROUP_MEMBER( l_U1806, sub_13200() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5753(), l_U1806, 12.00000000, 12.00000000, 0 ))
                {
                    if (DOES_BLIP_EXIST( l_U1807 ))
                    {
                        REMOVE_BLIP( l_U1807 );
                    }
                    SET_GROUP_MEMBER( sub_13200(), l_U1806 );
                    CLEAR_PRINTS();
                }
            }
            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_5753() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref l_U1803 );
                if (IS_CHAR_IN_CAR( l_U1806, l_U1803 ))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U1789 )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U1788 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U1788, ref l_U1789 );
                            CHANGE_BLIP_COLOUR( l_U1789, 1 );
                            PRINT_NOW( "RM8_09", 7500, 1 );
                        }
                    }
                    if (DOES_BLIP_EXIST( l_U1807 ))
                    {
                        REMOVE_BLIP( l_U1807 );
                    }
                    if (NOT l_U2825)
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U1828[43])
                            {
                                if (LOCATE_CHAR_IN_CAR_3D( sub_5753(), 804.74970000, 225.09090000, 6.03459900, 30.00000000, 30.00000000, 30.00000000, 0 ))
                                {
                                    CLEAR_PRINTS();
                                    sub_14087( ref l_U1760, 0 );
                                    sub_14920( "R7_CRASH", ref l_U1766, 6, 0 );
                                    l_U1828[43] = 1;
                                }
                                if (NOT l_U1931)
                                {
                                    if (NOT l_U1795)
                                    {
                                        if (NOT (sub_13903( l_U1772 )))
                                        {
                                            if (NOT (sub_13903( l_U2882 )))
                                            {
                                                if (NOT (sub_13903( l_U1760 )))
                                                {
                                                    if (NOT l_U1784)
                                                    {
                                                        if (g_U64725 == 0)
                                                        {
                                                            sub_14920( "R7_BANT2v1", ref l_U1760, 6, 0 );
                                                            l_U1784 = 1;
                                                            g_U64725++;
                                                        }
                                                        else if (g_U64725 == 1)
                                                        {
                                                            sub_14920( "R7_BANT2v2", ref l_U1760, 6, 0 );
                                                            l_U1784 = 1;
                                                            g_U64725++;
                                                        }
                                                        else
                                                        {
                                                            SAY_AMBIENT_SPEECH( l_U1806, "LISTEN_TO_RADIO", 1, 1, 0 );
                                                            l_U1784 = 1;
                                                        }
                                                    }
                                                    else if ((NOT l_U1928) AND (sub_13412( l_U1760 )))
                                                    {
                                                        if (g_U64725 == 1)
                                                        {
                                                            sub_16061( "R7_BANT2v1", ref l_U1760, 6, 1 );
                                                        }
                                                        else if (g_U64725 == 2)
                                                        {
                                                            sub_16061( "R7_BANT2v2", ref l_U1760, 6, 1 );
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else if (NOT (sub_13412( l_U1772 )))
                                    {
                                        sub_14920( "R7_RCAR", ref l_U1772, 6, 1 );
                                        l_U1795 = 0;
                                    }
                                    else
                                    {
                                        sub_16061( "R7_RCAR", ref l_U1772, 6, 1 );
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    sub_34124( "Roman not in car!" );
                    if (sub_13903( l_U1760 ))
                    {
                        sub_16272( ref l_U1760 );
                    }
                    if (sub_13903( l_U1772 ))
                    {
                        sub_16272( ref l_U1772 );
                    }
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U1789 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U1788 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U1788, ref l_U1789 );
                    CHANGE_BLIP_COLOUR( l_U1789, 1 );
                    PRINT_NOW( "RM8_09", 7500, 1 );
                }
            }
            if (DOES_BLIP_EXIST( l_U1807 ))
            {
                REMOVE_BLIP( l_U1807 );
            }
            if (sub_13903( l_U1772 ))
            {
                sub_16272( ref l_U1772 );
            }
            if (sub_13903( l_U1760 ))
            {
                sub_16272( ref l_U1760 );
            };;;
        }
        else
        {
            REMOVE_CHAR_FROM_GROUP( l_U1806 );
            sub_34124( "Not close enough" );
            if (DOES_BLIP_EXIST( l_U1789 ))
            {
                REMOVE_BLIP( l_U1789 );
            }
            if (sub_13903( l_U1772 ))
            {
                sub_16939( ref l_U1772 );
            }
            if (sub_13903( l_U1760 ))
            {
                sub_16939( ref l_U1760 );
            }
            if (DOES_BLIP_EXIST( l_U1807 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U1806 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5753(), l_U1806, 10.00000000, 10.00000000, 0 ))
                    {
                        REMOVE_BLIP( l_U1807 );
                        SET_GROUP_MEMBER( sub_13200(), l_U1806 );
                        CLEAR_PRINTS();
                    }
                }
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    ;
                }
            }
            else
            {
                ADD_BLIP_FOR_CHAR( l_U1806, ref l_U1807 );
                CHANGE_BLIP_COLOUR( l_U1807, 3 );
                CLEAR_PRINTS();
                PRINT_NOW( "RM8_16", 7500, 1 );
            }
        }
        if (IS_GROUP_MEMBER( l_U1806, sub_13200() ))
        {
            sub_34124( "In group" );
        }
        else
        {
            sub_34124( "Not in group" );
        }
    }
    sub_34731( ref l_U1788 );
    if (NOT l_U2878)
    {
        if (sub_35420())
        {
            l_U2878 = 1;
        }
    }
    sub_35705();
    sub_56158();
    return;
}

int sub_32834(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_INTERIOR_FROM_CHAR( uParam0, ref iVar3 );
        if (iVar3 == nil)
        {
            return 1;
        }
    }
    return 0;
}

int sub_33057(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( uParam1, ref iVar5 );
            if (iVar4 == iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_34124(unknown uParam0)
{
    return;
}

void sub_34731(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U499)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U497))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U498 + 500))
        {
            l_U497 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_34899()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_5753() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U499)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U498 );
            l_U497 = 1;
            l_U496 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U497) AND (NOT l_U496))
        {
            if (l_U499)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U496 = 1;
        }
    }
    else if (l_U496)
    {
        if (l_U499)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U496 = 0;
    };;;
    return;
}

int sub_34899()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_35420()
{
    int[2] iVar2;

    array(ref iVar2, 2);
    if (NOT (IS_CHAR_DEAD( l_U1817[0] )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5753(), l_U1817[0], 50.00000000, 50.00000000, 0 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U1817[0] )))
            {
                iVar2[0] = 1;
            }
        }
    }
    else
    {
        iVar2[0] = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U1817[1] )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5753(), l_U1817[1], 50.00000000, 50.00000000, 0 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U1817[1] )))
            {
                iVar2[1] = 1;
            }
        }
    }
    else
    {
        iVar2[1] = 1;
    }
    if ((iVar2[1]) AND (iVar2[0]))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1817[0] );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1817[1] );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1757 );
        return 1;
    }
    return 0;
}

void sub_35705()
{
    if (NOT l_U1937)
    {
        ;
    }
    else if (NOT (IS_CAR_DEAD( l_U1793 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1793 ))
        {
            sub_35765();
        }
        else
        {
            SWITCH_ROADS_OFF( 793.78830000, 186.21430000, 0.00000000, 824.75150000, 261.11380000, 100.00000000 );
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 810.89160000, 234.18620000, 6.05600000, 100.00000000, 84.00000000, 4.00000000, 0 ))
            {
                PRINT_NOW( "RM8_11", 7500, 1 );
                l_U1828[11] = 1;
            }
            sub_14087( ref l_U1760, 0 );
            GET_GAME_TIMER( ref l_U1897 );
            SET_CAR_PROOFS( l_U1793, 0, 0, 0, 0, 0 );
            SET_ENGINE_HEALTH( l_U1793, 0 );
            FORCE_WEATHER( 6 );
            sub_4643();
            ENABLE_CHASE_AUDIO( 0 );
            l_U1755 = 13;
        }
    }
    return;
}

void sub_35765()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    boolean bVar13;

    fVar5 = 3.00000000;
    fVar6 = 2.70000000;
    fVar7 = 22.00000000;
    fVar8 = 5.00000000;
    fVar9 = 50.00000000;
    fVar10 = 125.00000000;
    fVar11 = 1.00000000;
    fVar12 = 2.00000000;
    if ((NOT (IS_CAR_DEAD( l_U1793 ))) AND (DOES_VEHICLE_EXIST( l_U1793 )))
    {
        if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_5753(), 900.32100000, -282.85750000, 10.61050000, 88.00000000, 48.00000000, 20.00000000, 0 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1793 ))
            {
                if ((FIND_TIME_POSITION_IN_RECORDING( l_U1793 )) < (0.11000000 * (GET_TOTAL_DURATION_OF_CAR_RECORDING( 465 ))))
                {
                    if (NOT l_U2827)
                    {
                        fVar11 = 0.80000000;
                    }
                    else if (NOT (IS_CHAR_IN_ANY_CAR( sub_5753() )))
                    {
                        fVar11 = 0.80000000;
                    }
                    else
                    {
                        fVar11 = 0.90000000;
                    }
                    fVar7 = 20.00000000;
                    fVar9 = 58.00000000;
                    fVar12 = 1.00000000;
                }
                else if (((FIND_TIME_POSITION_IN_RECORDING( l_U1793 )) < (0.67000000 * (GET_TOTAL_DURATION_OF_CAR_RECORDING( 465 )))) AND ((FIND_TIME_POSITION_IN_RECORDING( l_U1793 )) >= (0.50000000 * (GET_TOTAL_DURATION_OF_CAR_RECORDING( 465 )))))
                {
                    fVar7 = 42.00000000;
                    fVar9 = 70.00000000;
                    fVar8 = 11.00000000;
                }
                else if (((FIND_TIME_POSITION_IN_RECORDING( l_U1793 )) < (0.83999990 * (GET_TOTAL_DURATION_OF_CAR_RECORDING( 465 )))) AND ((FIND_TIME_POSITION_IN_RECORDING( l_U1793 )) >= (0.67000000 * (GET_TOTAL_DURATION_OF_CAR_RECORDING( 465 )))))
                {
                    fVar7 = 70.00000000;
                    fVar9 = 98.00000000;
                    fVar8 = 19.00000000;
                }
                else if ((FIND_TIME_POSITION_IN_RECORDING( l_U1793 )) >= (0.83999990 * (GET_TOTAL_DURATION_OF_CAR_RECORDING( 465 ))))
                {
                    fVar7 = 130.00000000;
                    fVar9 = 148.00000000;
                    fVar8 = 32.00000000;
                    fVar10 = 200.00000000;
                    fVar11 = 1.20000000;
                }
                else if (NOT l_U2826)
                {
                    fVar11 = 0.85000000;
                }
                else
                {
                    fVar11 = 0.85000000;
                }
                fVar7 = 15.00000000;
                fVar9 = 50.00000000;;;;;
            }
        }
        else
        {
            fVar10 = 250.00000000;
            fVar7 = 200.00000000;
            fVar9 = 228.00000000;
            fVar8 = 54.00000000;
        }
        if (NOT bVar13)
        {
            sub_36451( l_U1793, sub_5753(), ref l_U2824, fVar11, fVar8, fVar7, fVar10, fVar12, 1065353216, 1060320051, 1 );
            SET_PLAYBACK_SPEED( l_U1793, l_U2824 );
            sub_39565( l_U1793, l_U2824 );
        }
        else
        {
            SET_PLAYBACK_SPEED( l_U1793, 1.00000000 );
            sub_39565( l_U1793, 1.00000000 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U1788 )))
    {
        GET_CHAR_COORDINATES( l_U1788, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (l_U1828[55])
        {
            sub_34124( "Warning been displayed" );
            if ((NOT (IS_THIS_PRINT_BEING_DISPLAYED( "RM8_57", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))) AND (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "RM8_55", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))))
            {
                if ((sub_54978( sub_5753(), uVar2 )) > (fVar5 * fVar9))
                {
                    sub_34124( "Escaping...." );
                    if (l_U1936)
                    {
                        if (NOT l_U1828[56])
                        {
                            if (NOT (IS_CHAR_INJURED( l_U1806 )))
                            {
                                if (NOT (IS_CHAR_ON_FIRE( l_U1806 )))
                                {
                                    CLEAR_PRINTS();
                                    l_U1933 = 1;
                                    sub_20800();
                                    l_U1755 = 11;
                                    l_U1828[56] = 1;
                                }
                            }
                        }
                    }
                }
                else
                {
                    sub_34124( "Resetting warn message..." );
                    l_U1828[55] = 0;
                }
            }
            else
            {
                sub_34124( "Messages on screen" );
            }
        }
        else if ((sub_54978( sub_5753(), uVar2 )) > (fVar6 * fVar9))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
            {
                l_U2825 = 1;
                if (sub_13903( l_U1760 ))
                {
                    sub_16939( ref l_U1760 );
                    l_U1928 = 1;
                }
                CLEAR_PRINTS();
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT l_U1828[55])
                    {
                        if (DOES_BLIP_EXIST( l_U1789 ))
                        {
                            PRINT_NOW( "RM8_55", 7500, 1 );
                        }
                        else
                        {
                            PRINT_NOW( "RM8_57", 7500, 1 );
                        }
                        l_U1828[55] = 1;
                        l_U1931 = 1;
                    }
                }
            }
            else if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT l_U1828[55])
                {
                    if (NOT (DOES_BLIP_EXIST( l_U1789 )))
                    {
                        PRINT_NOW( "RM8_57", 7500, 1 );
                        l_U1828[55] = 1;
                        l_U1931 = 1;
                    }
                    else if (DOES_BLIP_EXIST( l_U1789 ))
                    {
                        PRINT_NOW( "RM8_55", 7500, 1 );
                        l_U1828[55] = 1;
                        l_U1931 = 1;
                    }
                }
            }
        }
        else if (l_U1931)
        {
            l_U1931 = 0;
        }
        if (l_U1828[55])
        {
            l_U1828[55] = 0;
        }
        if (l_U1828[56])
        {
            l_U1828[56] = 0;
        }
        if (l_U1928)
        {
            l_U1928 = 0;
        }
        if (l_U2825)
        {
            l_U2825 = 0;
        };;;
    }
    sub_55735();
    return;
}

void sub_36451(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, float fParam5, float fParam6, unknown uParam7, float fParam8, unknown uParam9, boolean bParam10)
{
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;

    if (l_U540 == 0)
    {
        if ((uParam2^) < fParam3)
        {
            (uParam2^) = fParam3;
            l_U540 = 1;
        }
    }
    if (fParam4 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist cannot be less than zero." );
    }
    if (fParam4 >= fParam5)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fIdealDist" );
    }
    if (fParam4 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fSlowDownDist" );
    }
    if (fParam5 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist cannot be less than zero." );
    }
    if (fParam5 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist must be less than fSlowDownDist" );
    }
    if (fParam6 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist cannot be less than zero." );
    }
    if (fParam8 < 0.00000000)
    {
        fParam8 = l_U1058;
    }
    fVar13 = fParam3 * uParam7;
    if (NOT (fVar13 > fParam3))
    {
        fVar13 = fParam3 + 0.10000000;
    }
    fVar18 = fParam3 * uParam9;
    fVar19 = ((fParam6 - fParam5) * 0.40000000) + fParam5;
    fVar15 = sub_37789( uParam0, uParam1 );
    if (fVar15 < 0.00000000)
    {
        fVar15 *= -1.00000000;
    }
    fVar16 = fVar15;
    if (fVar16 < fParam4)
    {
        fVar16 = fParam4;
    }
    if (fVar16 > fVar19)
    {
        fVar16 = fVar19;
    }
    fVar17 = fParam3;
    if (DOES_CHAR_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (sub_38116( uParam1, uParam0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( uParam1 ))
                {
                    fVar17 = fVar13;
                }
                else if (fVar15 < 50.00000000)
                {
                    fVar17 = fParam3;
                }
                else
                {
                    fVar17 = fVar13;
                }
            }
            else if (fVar15 < fParam5)
            {
                if ((sub_38499( uParam0, uParam1 )) < fParam5)
                {
                    fVar14 = sub_38632( uParam0, uParam1 );
                    fVar14 += -15.00000000;
                    if (fVar14 < 0.00000000)
                    {
                        fVar14 = 0.00000000;
                    }
                    if (fVar14 > 75.00000000)
                    {
                        fVar14 = 75.00000000;
                    }
                    fVar20 = (75.00000000 - fVar14) / 75.00000000;
                }
                else
                {
                    fVar20 = 1.00000000;
                }
                fVar17 = (((((fParam5 - fParam4) - (fVar16 - fParam4)) / (fParam5 - fParam4)) * (fVar13 - fParam3)) * fVar20) + fParam3;
            }
            else if (fVar15 > fParam6)
            {
                fVar17 = fVar18;
                l_U541 = 1;
            }
            else if (l_U541)
            {
                if (fVar15 < fVar19)
                {
                    fVar17 = fParam3;
                    l_U541 = 0;
                }
                else
                {
                    fVar17 = fVar18;
                }
            }
            else
            {
                fVar17 = fParam3;
            };;;;
        }
    }
    fVar14 = fVar17 - (uParam2^);
    if (fVar14 > 0.00000000)
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U1063 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 > fVar21)
        {
            fVar14 = fVar21;
        }
        (uParam2^) += fVar14;
    }
    else
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U1064 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 < (fVar21 * -1.00000000))
        {
            fVar14 = fVar21 * -1.00000000;
        }
        (uParam2^) += fVar14;
    }
    if (bParam10)
    {
        if (NOT (IS_CHAR_INJURED( uParam1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam1 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar22 );
                if (DOES_VEHICLE_EXIST( uVar22 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar22 )))
                    {
                        GET_CAR_MODEL( uVar22, ref uVar23 );
                        if ((IS_THIS_MODEL_A_BIKE( uVar23 )) || (IS_THIS_MODEL_A_CAR( uVar23 )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar22 ))
                            {
                                fVar14 = fVar17;
                                if (fVar14 < fParam3)
                                {
                                    fVar14 = fParam3;
                                }
                                fVar14 -= fParam3;
                                fVar14 /= fVar13 - fParam3;
                                fVar14 *= fParam8;
                                fVar14 *= l_U1056 - l_U1057;
                                fVar14 += l_U1057;
                                l_U1055 = fVar14;
                                if (l_U1055 < l_U1057)
                                {
                                    l_U1055 = l_U1057;
                                }
                                if (l_U1055 > l_U1056)
                                {
                                    l_U1055 = l_U1056;
                                }
                                FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_3215(), l_U1055 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

float sub_37789(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

int sub_38116(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_38337( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

float sub_38337(int iParam0, int iParam1)
{
    return ((iParam0->_fU0 * iParam1->_fU0) + (iParam0->_fU4 * iParam1->_fU4)) + (iParam0->_fU8 * iParam1->_fU8);
}

void sub_38499(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown Result;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    uVar10._fU8 = 0.00000000;
    Result = VMAG( uVar10 );
    return Result;
}

void sub_38632(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown Result;
    unknown uVar17;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
        if (IS_CHAR_IN_ANY_CAR( uParam1 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar17 );
            GET_CAR_FORWARD_X( uVar17, ref uVar13._fU0 );
            GET_CAR_FORWARD_Y( uVar17, ref uVar13._fU4 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
            uVar13 = {vVar10 - vVar7};
        }
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar4._fU0, uVar4._fU4, uVar13._fU0, uVar13._fU4, ref Result );
    return Result;
}

void sub_39565(unknown uParam0, float fParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    int iVar10;

    GET_FRAME_TIME( ref fVar5 );
    fVar5 *= 1000.00000000;
    l_U1751 += fVar5;
    l_U1752 += fVar5;
    l_U1753 += fVar5;
    l_U1054 = fParam1;
    if (NOT l_U530)
    {
        if (l_U529)
        {
            sub_26884();
            l_U539 = 0;
            if (IS_PLAYER_PLAYING( sub_3215() ))
            {
                GET_CHAR_COORDINATES( sub_5753(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                CLEAR_AREA( uVar6._fU0, uVar6._fU4, uVar6._fU8, 1000.00000000, 1 );
                PRINTSTRING( "UPDATE_UBER_PLAYBACK - called massive clear area! \n" );
            }
            l_U530 = 1;
        }
    }
    else if (NOT l_U529)
    {
        sub_39816();
        l_U539 = 1;
        l_U530 = 0;
    }
    if (l_U529)
    {
        fParam1 = 1.00000000;
    }
    if (NOT l_U520)
    {
        if (l_U511)
        {
            l_U1049 = 0.00000000;
        }
        else
        {
            l_U1049 = 1.00000000;
        }
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                if (IS_PLAYER_PLAYING( sub_3215() ))
                {
                    if (sub_38116( sub_5753(), uParam0 ))
                    {
                        l_U528 = 1;
                    }
                    else
                    {
                        l_U528 = 0;
                    }
                }
                l_U1046 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                l_U1220 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                SET_PLAYBACK_SPEED( uParam0, (fParam1 * l_U1047) * l_U1049 );
                if (l_U515)
                {
                    # -NULL-0xbfc99f( uParam0, 1 );
                }
                else
                {
                    # -NULL-0xbfc99f( uParam0, 0 );
                }
                if (l_U527)
                {
                    if (l_U1052 > 1000.00000000)
                    {
                        sub_40255( uParam0, l_U1046 );
                        sub_40860( uParam0, 100.00000000 );
                        for ( I = 0; I < 3; I++ )
                        {
                            fVar5 = TO_FLOAT( I );
                            fVar5 *= 2000.00000000;
                            fVar5 += l_U1046;
                            fVar5 += 4000.00000000;
                            sub_41086( uParam0, fVar5, l_U1051 );
                        }
                        l_U1052 = 0.00000000;
                    }
                    else
                    {
                        GET_FRAME_TIME( ref fVar5 );
                        fVar5 *= 1000.00000000;
                        l_U1052 += fVar5;
                    }
                }
            }
        }
        iVar10 = 0;
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                iVar10 = 1;
            }
        }
        if ((IS_SCREEN_FADED_OUT()) || (l_U1046 == 0))
        {
            iVar10 = 1;
        }
        if ((NOT l_U542) AND (iVar10))
        {
            if (NOT l_U508)
            {
                sub_41718( uParam0, (fParam1 * l_U1047) * l_U1049 );
                sub_47626( ref uParam0 );
                sub_48186( ref uParam0 );
            }
            if (l_U513)
            {
                sub_48693( uParam0 );
            }
            if (NOT l_U508)
            {
                sub_49845( uParam0, (fParam1 * l_U1047) * l_U1049 );
            }
        }
        if (l_U522)
        {
            if (IS_PLAYER_PLAYING( sub_3215() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref l_U1745 );
                    GET_CAR_COORDINATES( l_U1745, ref l_U1614._fU0, ref l_U1614._fU4, ref l_U1614._fU8 );
                    GET_VEHICLE_QUATERNION( l_U1745, ref l_U672, ref l_U673, ref l_U674, ref l_U675 );
                }
            }
            l_U522 = 0;
        }
        if (l_U521)
        {
            if (DOES_VEHICLE_EXIST( l_U1745 ))
            {
                sub_42559( l_U1746 );
                l_U1746 = l_U1745;
            }
            if (IS_VEH_DRIVEABLE( l_U1746 ))
            {
                SET_CAR_COORDINATES( l_U1746, l_U1614._fU0, l_U1614._fU4, l_U1614._fU8 );
                SET_VEHICLE_QUATERNION( l_U1746, l_U672, l_U673, l_U674, l_U675 );
            }
            l_U1045 = l_U1048;
            l_U508 = 1;
            l_U521 = 0;
        }
        if (l_U508)
        {
            while (NOT (sub_53777( ref uParam0, l_U1045 )))
            {
                WAIT( 0 );
            }
            l_U511 = 1;
        }
    }
    return;
}

void sub_39816()
{
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    sub_39839();
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    return;
}

void sub_39839()
{
    int I;

    for ( I = 0; I < 20; I++ )
    {
        if (g_U8708[I]._fU60)
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 0 );
        }
        else
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 101 );
        }
    }
    return;
}

void sub_40255(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    vVar6 = {99999.90000000, 99999.90000000, 99999.90000000};
    vVar9 = {-99999.90000000, -99999.90000000, -99999.90000000};
    sub_40304();
    for ( I = 0; I < 15; I++ )
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1 + ((TO_FLOAT( I - 1 )) * 2000), ref uVar12 );
                if (uVar12._fU0 < vVar6.x)
                {
                    vVar6.x = uVar12._fU0;
                }
                if (uVar12._fU4 < vVar6.y)
                {
                    vVar6.y = uVar12._fU4;
                }
                if (uVar12._fU8 < vVar6.z)
                {
                    vVar6.z = uVar12._fU8;
                }
                if (uVar12._fU0 > vVar9.x)
                {
                    vVar9.x = uVar12._fU0;
                }
                if (uVar12._fU4 > vVar9.y)
                {
                    vVar9.y = uVar12._fU4;
                }
                if (uVar12._fU8 > vVar9.z)
                {
                    vVar9.z = uVar12._fU8;
                }
            }
        }
    }
    vVar6 = {vVar6 + (vector( l_U1065 * -1.00000000, l_U1065 * -1.00000000, l_U1065 * -1.00000000))};
    vVar9 = {vVar9 + (vector( l_U1065, l_U1065, l_U1065))};
    l_U1626 = {vVar6};
    l_U1629 = {vVar9};
    SWITCH_ROADS_OFF( l_U1620._fU0, l_U1620._fU4, l_U1620._fU8, l_U1623._fU0, l_U1623._fU4, l_U1623._fU8 );
    SWITCH_ROADS_OFF( l_U1626._fU0, l_U1626._fU4, l_U1626._fU8, l_U1629._fU0, l_U1629._fU4, l_U1629._fU8 );
    return;
}

void sub_40304()
{
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U1626._fU0, l_U1626._fU4, l_U1626._fU8, l_U1629._fU0, l_U1629._fU4, l_U1629._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U1620._fU0, l_U1620._fU4, l_U1620._fU8, l_U1623._fU0, l_U1623._fU4, l_U1623._fU8 );
    return;
}

void sub_40860(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT l_U530)
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_PLAYER_PLAYING( sub_3215() ))
            {
                GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                GET_CHAR_COORDINATES( sub_5753(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
                uVar10 = {vVar4 - vVar7};
                if ((VMAG2( uVar10 )) > (uParam1 * uParam1))
                {
                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                }
                else
                {
                    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_41086(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
            GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1, ref vVar6 );
            GET_CAR_COORDINATES( uParam0, ref vVar9.x, ref vVar9.y, ref vVar9.z );
            uVar12 = {vVar9 - vVar6};
            fVar15 = VMAG( uVar12 );
            if (fVar15 > fParam2)
            {
                fVar15 = fParam2;
            }
            sub_41215( vVar6, fVar15 );
        }
    }
    return;
}

void sub_41215(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    boolean bVar6;
    unknown uVar7;

    if (NOT l_U530)
    {
        if (NOT (sub_41245( uParam0, uParam3, 150.00000000 )))
        {
            bVar6 = true;
            if (IS_PLAYER_PLAYING( sub_3215() ))
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar7 )))
                    {
                        if (LOCATE_CAR_3D( uVar7, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
                        {
                            bVar6 = false;
                        }
                    }
                }
            }
            if (bVar6)
            {
                CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
            }
        }
    }
    return;
}

int sub_41245(vector vParam0, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT l_U530)
        {
            if (NOT l_U508)
            {
                GET_GAME_VIEWPORT_ID( ref uVar7 );
                if (CAM_IS_SPHERE_VISIBLE( uVar7, vParam0.x, vParam0.y, vParam0.z, uParam3 ))
                {
                    if (IS_PLAYER_PLAYING( sub_3215() ))
                    {
                        GET_CHAR_COORDINATES( sub_5753(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
                        uVar11 = {vVar8 - vParam0};
                        if (((VMAG( uVar11 )) - uParam3) < fParam4)
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_41718(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    unknown uVar15;
    boolean bVar16;
    boolean bVar17;
    int iVar18;

    l_U1222 = 0;
    iVar5 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 20; I++ )
        {
            if (I < l_U1221)
            {
                I = l_U1221;
            }
            if (l_U1087[I] == 0)
            {
                if ((NOT (l_U1228[I] == 0)) AND ((l_U1066[I] < 3000) AND (l_U1066[I] > 0)))
                {
                    if (NOT l_U508)
                    {
                        if (l_U1046 > (l_U651[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1227++;
                            l_U1087[I]++;
                        }
                        else if (iVar5 > 3)
                        {
                            return;
                        }
                        else
                        {
                            iVar5++;
                        }
                    }
                    else
                    {
                        fVar14 = l_U1046 - l_U651[I];
                        if (fVar14 >= 0.00000000)
                        {
                            if (fVar14 < (sub_41990( l_U1066[I] )))
                            {
                                l_U1227++;
                                l_U1087[I]++;
                            }
                            else
                            {
                                sub_42116( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    sub_42116( I, 1090519040 );
                }
            }
            if (l_U1087[I] == 1)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1066[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U1066[I] );
                }
                else if (l_U1228[I] == sub_42838())
                {
                    if (HAS_MODEL_LOADED( sub_42866() ))
                    {
                        l_U1087[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_42866() );
                    }
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    l_U1087[I]++;
                }
                else if (HAS_MODEL_LOADED( sub_42981() ))
                {
                    l_U1087[I]++;
                }
                else
                {
                    REQUEST_MODEL( sub_42981() );
                };;;;
            }
            if (l_U1087[I] == 2)
            {
                if (HAS_MODEL_LOADED( l_U1228[I] ))
                {
                    if (NOT (DOES_VEHICLE_EXIST( l_U1632[I] )))
                    {
                        bVar16 = false;
                        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                        {
                            bVar16 = true;
                        }
                        else if (HAS_MODEL_LOADED( sub_42981() ))
                        {
                            bVar16 = true;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_42981() );
                        }
                        if (bVar16)
                        {
                            bVar17 = false;
                            if ((NOT (sub_43224( l_U1326[I] ))) AND (NOT (sub_41245( l_U1326[I], 5.00000000, 1120403456 ))))
                            {
                                bVar17 = true;
                            }
                            if (l_U534)
                            {
                                bVar17 = true;
                            }
                            if (bVar17)
                            {
                                if (l_U527)
                                {
                                    sub_41215( l_U1326[I], l_U1051 );
                                }
                                CREATE_CAR( l_U1228[I], l_U1326[I]._fU0, l_U1326[I]._fU4, l_U1326[I]._fU8, ref l_U1632[I], 1 );
                                if (l_U1228[I] == sub_42838())
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U1632[I], 6, sub_42866(), ref uVar6 );
                                    SET_CHAR_RELATIONSHIP_GROUP( uVar6, 23 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_42866() );
                                }
                                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U1632[I], ref uVar6 );
                                }
                                else
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U1632[I], 4, sub_42981(), ref uVar6 );
                                    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_42981() );
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar6, 1 );
                                SET_VEHICLE_QUATERNION( l_U1632[I], l_U567[I], l_U588[I], l_U609[I], l_U630[I] );
                                FREEZE_CAR_POSITION( l_U1632[I], 1 );
                                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1632[I], 1 );
                                SET_CAR_COLLISION( l_U1632[I], 0 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1228[I] );
                                sub_43748( l_U1632[I] );
                                GET_INTERIOR_FROM_CAR( l_U1632[I], ref iVar18 );
                                if (NOT (iVar18 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U1632[I] );
                                }
                                l_U1227--;
                                l_U1087[I]++;
                            }
                            else if (l_U1046 > l_U651[I])
                            {
                                l_U1227--;
                                sub_42116( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    REQUEST_MODEL( l_U1228[I] );
                }
            }
            if (l_U1087[I] == 3)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1066[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U1066[I] );
                }
                if (IS_VEH_DRIVEABLE( l_U1632[I] ))
                {
                    if (l_U1046 > l_U651[I])
                    {
                        if (7 > l_U1211)
                        {
                            if (IS_VEH_DRIVEABLE( uParam0 ))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                {
                                    l_U1046 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                }
                            }
                            fVar14 = l_U1046 - l_U651[I];
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1066[I] ))
                            {
                                if (fVar14 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1066[I] )))
                                {
                                    GET_CAR_COORDINATES( l_U1632[I], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U1066[I], fVar14, ref uVar11 );
                                    if ((sub_41245( uVar11, 5.00000000, 1120403456 )) AND (NOT (sub_41245( uVar8, 5.00000000, 1120403456 ))))
                                    {
                                        sub_42116( I, 1090519040 );
                                    }
                                    else if (sub_44337( ref l_U1632[I], l_U1066[I], fVar14, 1, 0, 0 ))
                                    {
                                        SET_CAR_COLLISION( l_U1632[I], 1 );
                                        SET_PLAYBACK_SPEED( l_U1632[I], uParam1 );
                                        sub_44703( ref l_U1632[I] );
                                        l_U1211++;
                                        l_U1087[I]++;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "Traffic car removed from processing (check A) car = " );
                                    PRINTINT( I );
                                    PRINTSTRING( "/n" );
                                    sub_42116( I, 1090519040 );
                                }
                            }
                        }
                        else
                        {
                            PRINTSTRING( "Traffic car removed from processing (check B) car = " );
                            PRINTINT( I );
                            PRINTSTRING( "/n" );
                            sub_42116( I, 1090519040 );
                        }
                    }
                    else if ((NOT l_U543) AND (l_U528))
                    {
                        PRINTSTRING( "Traffic car removed from processing (check C) car = " );
                        PRINTINT( I );
                        PRINTSTRING( "/n" );
                        sub_42116( I, 1090519040 );
                    }
                }
                else
                {
                    PRINTSTRING( "Traffic car removed from processing (check D) car = " );
                    PRINTINT( I );
                    PRINTSTRING( "/n" );
                    sub_42116( I, 1090519040 );
                }
            }
            if (l_U1087[I] == 4)
            {
                if (IS_VEH_DRIVEABLE( l_U1632[I] ))
                {
                    SET_CAR_COLLISION( l_U1632[I], 1 );
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1632[I] ))
                    {
                        GET_DRIVER_OF_CAR( l_U1632[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                if (IS_PLAYER_PLAYING( sub_3215() ))
                                {
                                    if ((NOT l_U523) AND ((NOT l_U511) AND ((NOT l_U514) AND (IS_CHAR_TOUCHING_VEHICLE( sub_5753(), l_U1632[I] )))))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
                                        {
                                            bVar16 = false;
                                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref uVar7 );
                                            if (NOT (sub_45561( l_U1632[I], uVar7 )))
                                            {
                                                bVar16 = true;
                                            }
                                            if (NOT bVar16)
                                            {
                                                if (sub_45723( uVar7, l_U1632[I] ))
                                                {
                                                    bVar16 = true;
                                                }
                                            }
                                            if (bVar16)
                                            {
                                                sub_45954( l_U1632[I] );
                                                l_U1087[I]++;
                                            }
                                        }
                                    }
                                    else if (sub_45723( l_U1632[I], uParam0 ))
                                    {
                                        SET_PLAYBACK_SPEED( l_U1632[I], uParam1 );
                                    }
                                    else if ((NOT l_U523) AND (sub_46081( uParam0, l_U1632[I] )))
                                    {
                                        sub_45954( l_U1632[I] );
                                        l_U1087[I]++;
                                    }
                                    else
                                    {
                                        SET_PLAYBACK_SPEED( l_U1632[I], uParam1 );
                                    }
                                    if (l_U516)
                                    {
                                        # -NULL-0xbfc99f( l_U1632[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U1632[I], 0 );
                                    }
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1632[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1632[I] );
                        }
                    }
                    else
                    {
                        l_U1087[I]++;
                    }
                }
                else
                {
                    l_U1087[I]++;
                }
            }
            if (l_U1087[I] == 5)
            {
                if (IS_VEH_DRIVEABLE( l_U1632[I] ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1632[I] )))
                    {
                        l_U1087[I]++;
                    }
                    else
                    {
                        GET_DRIVER_OF_CAR( l_U1632[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                SET_PLAYBACK_SPEED( l_U1632[I], uParam1 );
                                if (l_U516)
                                {
                                    # -NULL-0xbfc99f( l_U1632[I], 1 );
                                }
                                else
                                {
                                    # -NULL-0xbfc99f( l_U1632[I], 0 );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1632[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1632[I] );
                        }
                        if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1066[I] ))
                        {
                            if (l_U1046 > (l_U651[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1066[I] ))))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1632[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1632[I] );
                        }
                    }
                }
                else
                {
                    l_U1087[I]++;
                }
            }
            if (l_U1087[I] == 6)
            {
                if (NOT (IS_CAR_DEAD( l_U1632[I] )))
                {
                    GET_CAR_SPEED( l_U1632[I], ref uVar15 );
                }
                sub_47194( ref l_U1632[I] );
                l_U1211--;
                sub_42116( I, uVar15 );
            }
            l_U1222++;
        }
    }
    else
    {
        sub_47353();
    }
    return;
}

void sub_41990(unknown uParam0)
{
    unknown Result;

    REQUEST_CAR_RECORDING( uParam0 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    Result = GET_TOTAL_DURATION_OF_CAR_RECORDING( uParam0 );
    REMOVE_CAR_RECORDING( uParam0 );
    return Result;
}

void sub_42116(int iParam0, float fParam1)
{
    int I;
    unknown uVar5;

    if (NOT (l_U1228[iParam0] == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1228[iParam0] );
    }
    if (DOES_VEHICLE_EXIST( l_U1632[iParam0] ))
    {
        if (IS_VEH_DRIVEABLE( l_U1632[iParam0] ))
        {
            GET_DRIVER_OF_CAR( l_U1632[iParam0], ref uVar5 );
            if (DOES_CHAR_EXIST( uVar5 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 0 );
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U1632[iParam0] ))
    {
        sub_42286( l_U1632[iParam0] );
        SET_CAR_COLLISION( l_U1632[iParam0], 1 );
        FREEZE_CAR_POSITION( l_U1632[iParam0], 0 );
    }
    if (NOT l_U512)
    {
        if (DOES_CHAR_EXIST( uVar5 ))
        {
            if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                if (fParam1 < 8.00000000)
                {
                    fParam1 = 8.00000000;
                }
                SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fParam1 );
            }
            sub_42525( uVar5 );
        }
        sub_42559( l_U1632[iParam0] );
    }
    else if (DOES_CHAR_EXIST( uVar5 ))
    {
        DELETE_CHAR( ref uVar5 );
    }
    if (DOES_VEHICLE_EXIST( l_U1632[iParam0] ))
    {
        DELETE_CAR( ref l_U1632[iParam0] );
    }
    if (iParam0 >= l_U1221)
    {
        for ( I = 0; I < 20; I++ )
        {
            if (NOT (l_U1087[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 19)
                    {
                        l_U1221 = iParam0 + 1;
                    }
                }
                I = 20;
            }
        }
    }
    l_U1087[iParam0] = 99;
    return;
}

void sub_42286(unknown uParam0)
{
    float fVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref iVar4 );
        if (DOES_CHAR_EXIST( iVar4 ))
        {
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (NOT (iVar4 == sub_5753()))
                {
                    GET_CAR_SPEED( uParam0, ref fVar3 );
                    if (fVar3 < 8.00000000)
                    {
                        fVar3 = 8.00000000;
                    }
                    TASK_CAR_MISSION( iVar4, uParam0, 0, 1, fVar3, 0, 5, 5 );
                }
            }
        }
    }
    return;
}

void sub_42525(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_42559(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_42838()
{
    return 2046537925;
}

int sub_42866()
{
    return -183203150;
}

int sub_42981()
{
    return -2139064254;
}

int sub_43224(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 7; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U544[I] ))
        {
            if (LOCATE_CAR_3D( l_U544[I], uParam0._fU0, uParam0._fU4, uParam0._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_43748(unknown uParam0)
{
    unknown uVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_CAR_MODEL( uParam0, ref uVar3 );
            if ((IS_THIS_MODEL_A_BIKE( uVar3 )) || (IS_THIS_MODEL_A_CAR( uVar3 )))
            {
                return SET_CAR_ON_GROUND_PROPERLY( uParam0 );
            }
        }
    }
    return 0;
}

int sub_44337(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5)
{
    unknown uVar8;

    if ((iParam1 < 3000) AND (iParam1 > 0))
    {
        if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( iParam1 )))
        {
            REQUEST_CAR_RECORDING( iParam1 );
        }
        else if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) )))
            {
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                    return 1;
                }
            }
            else if ((GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( (uParam0^) )) == iParam1)
            {
                uVar8 = FIND_TIME_POSITION_IN_RECORDING( (uParam0^) );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 - uVar8 );
                if (NOT bParam3)
                {
                    STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                    REQUEST_CAR_RECORDING( iParam1 );
                }
                return 1;
            }
            else
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                }
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_44703(unknown uParam0)
{
    int iVar3;

    if (l_U524)
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            iVar3 = sub_44737();
            if (NOT (iVar3 == -1))
            {
                l_U544[iVar3] = (uParam0^);
                if (IS_VEH_DRIVEABLE( l_U544[iVar3] ))
                {
                    ADD_BLIP_FOR_CAR( l_U544[iVar3], ref l_U552[iVar3] );
                }
            }
        }
    }
    return;
}

int sub_44737()
{
    int Result;

    for ( Result = 0; Result < 7; Result++ )
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U544[Result] )))
        {
            return Result;
        }
    }
    return -1;
}

int sub_45561(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar4, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar7, 0 );
    }
    else
    {
        return 0;
    }
    uVar4._fU8 = 0.00000000;
    uVar7._fU8 = 0.00000000;
    fVar10 = sub_38337( ref uVar4, ref uVar7 );
    if (fVar10 < 0.00000000)
    {
        return 0;
    }
    return 1;
}

int sub_45723(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_38337( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_45954(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        sub_42286( uParam0 );
        CHANGE_PLAYBACK_TO_USE_AI( uParam0 );
    }
    return;
}

int sub_46081(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;

    fVar4 = sub_46094( uParam0, uParam1 );
    fVar5 = sub_46318( uParam0, uParam1 );
    if (fVar4 > fVar5)
    {
        return 1;
    }
    return 0;
}

float sub_46094(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

float sub_46318(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (COS( fVar16 ));
}

void sub_47194(unknown uParam0)
{
    int I;

    for ( I = 0; I < 7; I++ )
    {
        if (l_U544[I] == (uParam0^))
        {
            l_U544[I] = nil;
            if (DOES_BLIP_EXIST( l_U552[I] ))
            {
                REMOVE_BLIP( l_U552[I] );
            }
            return;
        }
    }
    return;
}

void sub_47353()
{
    int I;

    for ( I = 0; I < 20; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1632[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1632[I] )))
            {
                SET_CAR_COLLISION( l_U1632[I], 1 );
            }
            if (IS_VEH_DRIVEABLE( l_U1632[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1632[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1632[I] );
                }
            }
            sub_42286( l_U1632[I] );
            sub_42559( l_U1632[I] );
        }
        l_U1087[I] = 0;
    }
    for ( I = 0; I < 20; I++ )
    {
        if (NOT (l_U1228[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1228[I] );
        }
    }
    l_U1221 = 0;
    l_U1211 = 0;
    return;
}

void sub_47626(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1221 - 5;
    iVar5 = iVar4 + 15;
    if (l_U1751 > 4000.00000000)
    {
        if (IS_PLAYER_PLAYING( sub_3215() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref uVar6 );
            }
            for ( I = 0; I < 20; I++ )
            {
                if (I < iVar4)
                {
                    I = iVar4;
                }
                if (DOES_VEHICLE_EXIST( l_U1632[I] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1632[I] ))
                    {
                        if ((sub_47793( l_U1632[I], uVar6 )) || (sub_47793( l_U1632[I], (uParam0^) )))
                        {
                            SOUND_CAR_HORN( l_U1632[I], 3000 );
                            l_U1751 = 0.00000000;
                        }
                    }
                }
                if (I >= iVar5)
                {
                    I = 20;
                }
            }
        }
    }
    return;
}

int sub_47793(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if ((DOES_VEHICLE_EXIST( uParam1 )) AND (DOES_VEHICLE_EXIST( uParam0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (NOT (sub_45561( uParam0, uParam1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 25.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 20.00000000, 0.00000000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                    if ((LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )) || ((LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )) || (LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_48186(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1221 - 5;
    iVar5 = iVar4 + 15;
    if (IS_PLAYER_PLAYING( sub_3215() ))
    {
        switch (l_U1749)
        {
            case 0:
            if (l_U1752 > 3000.00000000)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref uVar6 );
                }
                for ( I = 0; I < 20; I++ )
                {
                    if (I < iVar4)
                    {
                        I = iVar4;
                    }
                    if (DOES_VEHICLE_EXIST( l_U1632[I] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U1632[I] ))
                        {
                            if ((sub_47793( l_U1632[I], uVar6 )) || (sub_47793( l_U1632[I], (uParam0^) )))
                            {
                                l_U1748 = l_U1632[I];
                                l_U1752 = 0.00000000;
                                I = 20;
                                l_U1749++;
                            }
                        }
                    }
                    if (I >= iVar5)
                    {
                        I = 20;
                    }
                }
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( l_U1748 ))
            {
                if (l_U1752 < 1000.00000000)
                {
                    if (l_U1753 > 100.00000000)
                    {
                        if (NOT l_U1750)
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U1748, 2.00000000 );
                            l_U1750 = 1;
                        }
                        else
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U1748, 1.00000000 );
                            l_U1750 = 0;
                        }
                        l_U1753 = 0.00000000;
                    }
                }
                else
                {
                    SET_CAR_LIGHT_MULTIPLIER( l_U1748, 1.00000000 );
                    l_U1749 = 0;
                    l_U1752 = 0.00000000;
                    l_U1750 = 0;
                }
            }
            else
            {
                l_U1749 = 0;
                l_U1752 = 0.00000000;
                l_U1750 = 0;
            }
            break;
        }
    }
    return;
}

void sub_48693(unknown uParam0)
{
    int I;
    int iVar4;

    l_U1224 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 50; I++ )
        {
            if (I < l_U1223)
            {
                I = l_U1223;
            }
            if (l_U1160[I] == 0)
            {
                if (NOT (l_U1249[I] == 0))
                {
                    if (LOCATE_CAR_2D( uParam0, l_U1387[I]._fU0, l_U1387[I]._fU4, l_U1043, l_U1043, 0 ))
                    {
                        l_U1225++;
                        l_U1160[I]++;
                    }
                }
                else
                {
                    sub_48875( I );
                }
            }
            if (l_U1160[I] == 1)
            {
                if (6 > l_U1214)
                {
                    if (HAS_MODEL_LOADED( l_U1249[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U1661[I] )))
                        {
                            if ((l_U534) || ((l_U508) || (NOT (sub_41245( l_U1387[I], 5.00000000, 1120403456 )))))
                            {
                                if (l_U527)
                                {
                                    sub_41215( l_U1387[I], l_U1051 );
                                }
                                CREATE_CAR( l_U1249[I], l_U1387[I]._fU0, l_U1387[I]._fU4, l_U1387[I]._fU8, ref l_U1661[I], 1 );
                                SET_VEHICLE_QUATERNION( l_U1661[I], l_U832[I], l_U883[I], l_U934[I], l_U985[I] );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1249[I] );
                                if (IS_CAR_MODEL( l_U1661[I], sub_42838() ))
                                {
                                    SWITCH_CAR_SIREN( l_U1661[I], 1 );
                                }
                                if (IS_CAR_MODEL( l_U1661[I], sub_49318() ))
                                {
                                    CHANGE_CAR_COLOUR( l_U1661[I], 0, 0 );
                                }
                                GET_INTERIOR_FROM_CAR( l_U1661[I], ref iVar4 );
                                if (NOT (iVar4 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U1661[I] );
                                }
                                l_U1225--;
                                l_U1214++;
                                l_U1160[I]++;
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1249[I] );
                    }
                }
            }
            if (l_U1160[I] == 2)
            {
                if (NOT (sub_45723( l_U1661[I], uParam0 )))
                {
                    if (NOT l_U512)
                    {
                        sub_42559( l_U1661[I] );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U1661[I] );
                    }
                    l_U1214--;
                    sub_48875( I );
                }
            }
            l_U1224++;
            if (l_U1224 >= 15)
            {
                return;
            }
        }
    }
    else
    {
        sub_49624();
    }
    return;
}

void sub_48875(int iParam0)
{
    int I;

    if (iParam0 >= l_U1223)
    {
        for ( I = 0; I < 50; I++ )
        {
            if (NOT (l_U1160[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 49)
                    {
                        l_U1223 = iParam0 + 1;
                    }
                }
                I = 50;
            }
        }
    }
    l_U1160[iParam0] = 99;
    return;
}

int sub_49318()
{
    return 1264341792;
}

void sub_49624()
{
    int I;

    for ( I = 0; I < 50; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1661[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1661[I] )))
            {
                SET_CAR_COLLISION( l_U1661[I], 1 );
            }
            sub_42559( l_U1661[I] );
        }
    }
    for ( I = 0; I < 50; I++ )
    {
        if (NOT (l_U1249[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1249[I] );
        }
    }
    l_U1223 = 0;
    l_U1214 = 0;
    return;
}

void sub_49845(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;
    float fVar14;
    boolean bVar15;
    int iVar16;
    int iVar17;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 25; I++ )
        {
            if ((NOT (l_U1300[I] == 0)) AND ((l_U1108[I] < 3000) AND (l_U1108[I] > 0)))
            {
                if (l_U1134[I] == 0)
                {
                    if (NOT l_U508)
                    {
                        if (l_U1046 > (l_U780[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1134[I]++;
                            l_U1226++;
                        }
                    }
                    else
                    {
                        fVar13 = l_U1046 - l_U780[I];
                        fVar13 *= l_U806[I];
                        if (fVar13 >= 0.00000000)
                        {
                            if (fVar13 < (sub_41990( l_U1108[I] )))
                            {
                                l_U1134[I]++;
                                l_U1226++;
                            }
                            else
                            {
                                l_U1134[I] = 99;
                            }
                        }
                    }
                }
                if (l_U1134[I] == 1)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1108[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1108[I] );
                    }
                    else if (l_U1300[I] == sub_42838())
                    {
                        if (HAS_MODEL_LOADED( sub_42866() ))
                        {
                            l_U1134[I]++;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_42866() );
                        }
                    }
                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                    {
                        l_U1134[I]++;
                    }
                    else if (HAS_MODEL_LOADED( sub_42981() ))
                    {
                        l_U1134[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_42981() );
                    };;;;
                }
                if (l_U1134[I] == 2)
                {
                    if (HAS_MODEL_LOADED( l_U1300[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U1712[I] )))
                        {
                            bVar15 = false;
                            if (l_U1300[I] == sub_42838())
                            {
                                if (HAS_MODEL_LOADED( sub_42866() ))
                                {
                                    bVar15 = true;
                                }
                                else
                                {
                                    REQUEST_MODEL( sub_42866() );
                                }
                            }
                            else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                            {
                                bVar15 = true;
                            }
                            else if (HAS_MODEL_LOADED( sub_42981() ))
                            {
                                bVar15 = true;
                            }
                            else
                            {
                                REQUEST_MODEL( sub_42981() );
                            };;;
                            if (bVar15)
                            {
                                if ((l_U534) || (NOT (sub_41245( l_U1538[I], 5.00000000, 1120403456 ))))
                                {
                                    CREATE_CAR( l_U1300[I], l_U1538[I]._fU0, l_U1538[I]._fU4, l_U1538[I]._fU8, ref l_U1712[I], 1 );
                                    if (l_U1300[I] == sub_42838())
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U1712[I], 6, sub_42866(), ref uVar5 );
                                        SET_CHAR_RELATIONSHIP_GROUP( uVar5, 23 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_42866() );
                                    }
                                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                    {
                                        CREATE_RANDOM_CHAR_AS_DRIVER( l_U1712[I], ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                    }
                                    else
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U1712[I], 26, sub_42981(), ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_42981() );
                                    }
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 1 );
                                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( uVar5, 1 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( uVar5, 0 );
                                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( uVar5, 0 );
                                    sub_42525( uVar5 );
                                    SET_VEHICLE_QUATERNION( l_U1712[I], l_U676[I], l_U702[I], l_U728[I], l_U754[I] );
                                    FREEZE_CAR_POSITION( l_U1712[I], 1 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1300[I] );
                                    sub_43748( l_U1712[I] );
                                    GET_INTERIOR_FROM_CAR( l_U1712[I], ref iVar16 );
                                    if (NOT (iVar16 == nil))
                                    {
                                        # -NULL-0xbfc5b5( l_U1712[I] );
                                    }
                                    l_U1134[I]++;
                                    l_U1226--;
                                }
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1300[I] );
                    }
                }
                if (l_U1134[I] == 3)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1108[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1108[I] );
                    }
                    if (IS_VEH_DRIVEABLE( l_U1712[I] ))
                    {
                        if (l_U1046 > l_U780[I])
                        {
                            if (5 > l_U1213)
                            {
                                if (IS_VEH_DRIVEABLE( uParam0 ))
                                {
                                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                    {
                                        l_U1046 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                    }
                                }
                                fVar13 = l_U1046 - l_U780[I];
                                fVar13 *= l_U806[I];
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1108[I] ))
                                {
                                    if (fVar13 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1108[I] )))
                                    {
                                        GET_CAR_COORDINATES( l_U1712[I], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                        GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U1108[I], fVar13, ref uVar10 );
                                        if ((NOT l_U534) AND ((sub_41245( uVar10, 5.00000000, 1120403456 )) AND (NOT (sub_41245( uVar7, 5.00000000, 1120403456 )))))
                                        {
                                            l_U1213++;
                                            l_U1134[I]++;
                                        }
                                        else if (sub_44337( ref l_U1712[I], l_U1108[I], fVar13, 1, 0, 0 ))
                                        {
                                            SET_PLAYBACK_SPEED( l_U1712[I], uParam1 * l_U806[I] );
                                            if (IS_VEH_DRIVEABLE( l_U1712[I] ))
                                            {
                                                if (l_U1300[I] == sub_42838())
                                                {
                                                    SWITCH_CAR_SIREN( l_U1712[I], 1 );
                                                }
                                            }
                                            if (l_U525)
                                            {
                                                # -NULL-0xbfc99f( l_U1712[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U1712[I], 0 );
                                            }
                                            l_U1213++;
                                            l_U1134[I]++;
                                        }
                                    }
                                    else
                                    {
                                        l_U1213++;
                                        l_U1134[I]++;
                                    }
                                }
                            }
                            else
                            {
                                SCRIPT_ASSERT( "Too many set peice cars playing back at once" );
                                l_U1213++;
                                l_U1134[I]++;
                            }
                        }
                    }
                    else
                    {
                        l_U1213++;
                        l_U1134[I]++;
                    }
                }
                if (l_U1134[I] == 4)
                {
                    if (IS_VEH_DRIVEABLE( l_U1712[I] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1712[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U1712[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    if (IS_PLAYER_PLAYING( sub_3215() ))
                                    {
                                        if ((NOT l_U511) AND ((NOT l_U514) AND (IS_CHAR_TOUCHING_VEHICLE( sub_5753(), l_U1712[I] ))))
                                        {
                                            if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
                                            {
                                                bVar15 = false;
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref uVar6 );
                                                if (NOT (sub_52001( l_U1712[I], uVar6, 45.00000000 )))
                                                {
                                                    bVar15 = true;
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_45723( uVar6, l_U1712[I] ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    GET_CAR_SPEED( uVar6, ref fVar14 );
                                                    if (fVar14 < 1.00000000)
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_52286( uVar6, l_U1712[I], 15.00000000 ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (bVar15)
                                                {
                                                    sub_45954( l_U1712[I] );
                                                    l_U1134[I]++;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            SET_PLAYBACK_SPEED( l_U1712[I], uParam1 * l_U806[I] );
                                            if (l_U525)
                                            {
                                                # -NULL-0xbfc99f( l_U1712[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U1712[I], 0 );
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1712[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1712[I] );
                            }
                        }
                        else
                        {
                            l_U1134[I]++;
                        }
                    }
                    else
                    {
                        l_U1134[I]++;
                    }
                }
                if (l_U1134[I] == 5)
                {
                    if (IS_VEH_DRIVEABLE( l_U1712[I] ))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1712[I] )))
                        {
                            l_U1134[I]++;
                        }
                        else
                        {
                            GET_DRIVER_OF_CAR( l_U1712[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    SET_PLAYBACK_SPEED( l_U1712[I], uParam1 * l_U806[I] );
                                    if (l_U525)
                                    {
                                        # -NULL-0xbfc99f( l_U1712[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U1712[I], 0 );
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1712[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1712[I] );
                            }
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1108[I] ))
                            {
                                if (l_U1046 > (l_U780[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1108[I] ))))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1712[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1712[I] );
                            }
                        }
                    }
                    else
                    {
                        l_U1134[I]++;
                    }
                }
                if (l_U1134[I] == 6)
                {
                    if (NOT (l_U1712[I] == l_U1747))
                    {
                        if (IS_VEH_DRIVEABLE( l_U1712[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U1712[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( uVar5, 29, ref iVar17 );
                                    if (iVar17 == 7)
                                    {
                                        GET_CAR_SPEED( l_U1712[I], ref fVar14 );
                                        if (fVar14 < 8.00000000)
                                        {
                                            fVar14 = 8.00000000;
                                        }
                                        SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fVar14 );
                                    }
                                }
                            }
                        }
                        if (NOT l_U512)
                        {
                            sub_42559( l_U1712[I] );
                        }
                        else if (DOES_VEHICLE_EXIST( l_U1712[I] ))
                        {
                            DELETE_CAR( ref l_U1712[I] );
                        }
                    }
                    l_U1213--;
                    l_U1134[I] = 99;
                }
            }
        }
    }
    else
    {
        sub_53265();
    }
    return;
}

int sub_52001(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar5, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar8, 0 );
    }
    else
    {
        return 0;
    }
    uVar5._fU8 = 0.00000000;
    uVar8._fU8 = 0.00000000;
    fVar11 = sub_38337( ref uVar5, ref uVar8 );
    if (fVar11 < 0.00000000)
    {
        return 0;
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar11 );
    if (NOT (fVar11 < fParam2))
    {
        return 0;
    }
    return 1;
}

int sub_52286(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_SPEED( uParam0, ref uVar5 );
    }
    if (NOT (IS_CAR_DEAD( uParam1 )))
    {
        GET_CAR_SPEED( uParam1, ref uVar6 );
    }
    if (((uVar5 - uVar6) < (fParam2 * -1.00000000)) || ((uVar5 - uVar6) > fParam2))
    {
        return 1;
    }
    return 0;
}

void sub_53265()
{
    int I;

    for ( I = 0; I < 25; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1712[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1712[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1712[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1712[I] );
                }
            }
            sub_42286( l_U1712[I] );
            sub_42559( l_U1712[I] );
        }
        l_U1134[I] = 0;
    }
    for ( I = 0; I < 25; I++ )
    {
        if (NOT (l_U1300[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1300[I] );
        }
    }
    return;
}

int sub_53777(unknown uParam0, unknown uParam1)
{
    if (NOT l_U537)
    {
        l_U508 = 1;
        sub_53803();
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FIX_CAR( (uParam0^) );
            }
            if (NOT (l_U1220 == -1))
            {
                while (NOT (sub_44337( uParam0, l_U1220, uParam1, 1, 0, 0 )))
                {
                    WAIT( 0 );
                }
                if (NOT l_U519)
                {
                    l_U511 = 1;
                    l_U1049 = 0.00000000;
                    l_U1221 = 0;
                    l_U1223 = 0;
                    l_U1211 = 0;
                    l_U1213 = 0;
                    l_U1214 = 0;
                    l_U1225 = 0;
                    l_U1226 = 0;
                    l_U1227 = 0;
                }
            }
        }
        l_U537 = 1;
    }
    else if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
        {
            SET_PLAYBACK_SPEED( (uParam0^), (1.00000000 * l_U1047) * l_U1049 );
            sub_44337( uParam0, l_U1220, uParam1, 1, 0, 0 );
        }
    }
    l_U1046 = uParam1;
    sub_49845( (uParam0^), (1.00000000 * l_U1047) * l_U1049 );
    sub_41718( (uParam0^), (1.00000000 * l_U1047) * l_U1049 );
    if ((l_U1227 == 0) AND ((l_U1226 == 0) AND (l_U1225 == 0)))
    {
        l_U511 = 0;
        l_U508 = 0;
        l_U537 = 0;
        return 1;
    }
    return 0;
}

void sub_53803()
{
    sub_53812();
    sub_54024();
    sub_54172();
    return;
}

void sub_53812()
{
    int I;

    for ( I = 0; I < 20; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1632[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1632[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1632[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1632[I] );
                }
            }
            DELETE_CAR( ref l_U1632[I] );
        }
        l_U1087[I] = 0;
    }
    for ( I = 0; I < 20; I++ )
    {
        if (NOT (l_U1228[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1228[I] );
        }
    }
    l_U1221 = 0;
    l_U1211 = 0;
    return;
}

void sub_54024()
{
    int I;

    for ( I = 0; I < 50; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1661[I] ))
        {
            DELETE_CAR( ref l_U1661[I] );
        }
    }
    for ( I = 0; I < 50; I++ )
    {
        if (NOT (l_U1249[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1249[I] );
        }
    }
    l_U1223 = 0;
    l_U1214 = 0;
    return;
}

void sub_54172()
{
    int I;

    for ( I = 0; I < 25; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1712[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1712[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1712[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1712[I] );
                }
            }
            DELETE_CAR( ref l_U1712[I] );
        }
        l_U1134[I] = 0;
    }
    for ( I = 0; I < 25; I++ )
    {
        if (NOT (l_U1300[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1300[I] );
        }
    }
    return;
}

float sub_54978(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result );
        return Result;
    }
    return -1.00000000;
}

void sub_55735()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        if (NOT l_U2213[I])
        {
            if (NOT (IS_CAR_DEAD( l_U1712[l_U2206[I]] )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1712[l_U2206[I]] ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_5753(), l_U1712[l_U2206[I]], l_U2220[I], l_U2220[I], l_U2220[I], 0 ))
                    {
                        SOUND_CAR_HORN( l_U1712[l_U2206[I]], 2400 );
                        l_U2213[I] = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_56158()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    switch (l_U2872)
    {
        case 0:
        if ((l_U1755 == 20) || ((l_U2054) || (NOT (IS_CHAR_DEAD( l_U1788 )))))
        {
            if (NOT l_U2873)
            {
                if ((LOCATE_CHAR_IN_CAR_3D( sub_5753(), 769.52730000, 135.73320000, 5.80510000, 20.00000000, 20.00000000, 20.00000000, 0 )) || (LOCATE_CHAR_IN_CAR_3D( l_U1788, 769.52730000, 135.73320000, 5.80510000, 20.00000000, 20.00000000, 20.00000000, 0 )))
                {
                    CLEAR_AREA( 817.09200000, 235.17900000, 5.19600000, 30.00000000, 0 );
                    REQUEST_MODEL( -129078589 );
                    REQUEST_MODEL( 729513832 );
                    REQUEST_MODEL( 293511358 );
                    REQUEST_MODEL( 529682743 );
                    REQUEST_MODEL( -1358668114 );
                    REQUEST_MODEL( 535327133 );
                    REQUEST_MODEL( -714220780 );
                    REQUEST_MODEL( 850991848 );
                    l_U2873 = 1;
                }
            }
            else if ((HAS_MODEL_LOADED( 850991848 )) AND ((HAS_MODEL_LOADED( -714220780 )) AND ((HAS_MODEL_LOADED( 535327133 )) AND ((HAS_MODEL_LOADED( -1358668114 )) AND ((HAS_MODEL_LOADED( 529682743 )) AND ((HAS_MODEL_LOADED( 293511358 )) AND ((HAS_MODEL_LOADED( 729513832 )) AND (HAS_MODEL_LOADED( -129078589 )))))))))
            {
                CREATE_OBJECT( -129078589, 817.09200000, 235.17900000, 5.19600000, ref l_U2828[0], 1 );
                SET_OBJECT_HEADING( l_U2828[0], 347.90000000 );
                CREATE_OBJECT( -129078589, 819.89200000, 234.67900000, 5.09600000, ref l_U2828[1], 1 );
                SET_OBJECT_HEADING( l_U2828[1], 347.90000000 );
                CREATE_OBJECT( -129078589, 820.49900000, 247.93900000, 5.23600000, ref l_U2828[2], 1 );
                SET_OBJECT_HEADING( l_U2828[2], 169.59900000 );
                CREATE_OBJECT( -129078589, 822.89500000, 247.56000000, 5.23600000, ref l_U2828[3], 1 );
                SET_OBJECT_HEADING( l_U2828[3], 169.59900000 );
                CREATE_OBJECT( -129078589, 814.41100000, 235.65500000, 5.27300000, ref l_U2828[17], 1 );
                SET_OBJECT_HEADING( l_U2828[17], 347.50000000 );
                CREATE_OBJECT( 729513832, 817.39300000, 241.32100000, 5.33600000, ref l_U2828[5], 1 );
                SET_OBJECT_HEADING( l_U2828[5], 260.10000000 );
                CREATE_OBJECT( 729513832, 817.91800000, 243.36600000, 5.33600000, ref l_U2828[6], 1 );
                SET_OBJECT_HEADING( l_U2828[6], 260.10000000 );
                CREATE_OBJECT( 729513832, 818.57300000, 246.43800000, 5.33600000, ref l_U2828[7], 1 );
                SET_OBJECT_HEADING( l_U2828[7], 257.50000000 );
                CREATE_OBJECT( -1358668114, 824.17400000, 233.27320000, 5.30500000, ref l_U2828[8], 1 );
                SET_OBJECT_HEADING( l_U2828[8], 306.50000000 );
                CREATE_OBJECT( 535327133, 820.66490000, 240.03550000, 5.03620000, ref l_U2828[17], 1 );
                CREATE_OBJECT( 293511358, 820.07800000, 219.28600000, 5.75200000, ref l_U2828[9], 1 );
                SET_OBJECT_HEADING( l_U2828[9], 350.00000000 );
                CREATE_OBJECT( 529682743, 821.72100000, 232.20200000, 5.08000000, ref l_U2828[10], 1 );
                CREATE_OBJECT( 529682743, 821.40900000, 230.20200000, 5.08000000, ref l_U2828[11], 1 );
                CREATE_OBJECT( 529682743, 821.16000000, 228.28100000, 5.08000000, ref l_U2828[12], 1 );
                CREATE_OBJECT( 529682743, 820.77600000, 226.39200000, 5.08000000, ref l_U2828[13], 1 );
                CREATE_OBJECT( 529682743, 820.53800000, 224.49100000, 5.08000000, ref l_U2828[14], 1 );
                CREATE_OBJECT( 529682743, 820.13790000, 222.49130000, 5.08000000, ref l_U2828[15], 1 );
                CREATE_OBJECT( 529682743, 819.93800000, 220.49100000, 5.08000000, ref l_U2828[16], 1 );
                CREATE_CHAR( 4, -714220780, 821.46000000, 236.99800000, 5.93660000, ref l_U2849[0], 1 );
                SET_CHAR_HEADING( l_U2849[0], 105.75960000 );
                SET_CHAR_DECISION_MAKER( l_U2849[0], l_U1811 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U2849[0] );
                CREATE_CHAR( 4, -714220780, 813.34030000, 245.89110000, 6.07220000, ref l_U2849[1], 1 );
                SET_CHAR_HEADING( l_U2849[1], 189.48730000 );
                SET_CHAR_DECISION_MAKER( l_U2849[1], l_U1811 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U2849[1] );
                CREATE_CAR( 850991848, 813.47520000, 240.02170000, 6.27840000, ref l_U2243, 1 );
                SET_CAR_HEADING( l_U2243, 348.33900000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U2243 );
                FREEZE_CAR_POSITION( l_U2243, 1 );
                CREATE_CAR( 850991848, 826.64570000, 245.65050000, 6.19740000, ref l_U2244[2], 1 );
                SET_CAR_HEADING( l_U2244[2], 168.18120000 );
                CREATE_CHAR_INSIDE_CAR( l_U2243, 4, -714220780, ref l_U2849[3] );
                SET_CHAR_DECISION_MAKER( l_U2849[3], l_U1811 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U2849[3] );
                CREATE_CAR( sub_57791(), 814.85960000, 215.70610000, 5.77590000, ref l_U2244[0], 1 );
                SET_CAR_HEADING( l_U2244[0], 349.28430000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U2244[0] );
                if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U2244[0], ref l_U2849[4] );
                    SET_CHAR_DECISION_MAKER( l_U2849[4], l_U1811 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U2849[4] );
                    TASK_CAR_MISSION( l_U2849[4], l_U2244[0], l_U2244[0], 5, 0.00000000, 0, 0, 0 );
                }
                CREATE_CAR( sub_57791(), 813.62300000, 209.14810000, 5.75680000, ref l_U2244[1], 1 );
                SET_CAR_HEADING( l_U2244[1], 348.83400000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U2244[1] );
                if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U2244[1], ref l_U2849[5] );
                    SET_CHAR_DECISION_MAKER( l_U2849[5], l_U1811 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U2849[5] );
                    TASK_CAR_MISSION( l_U2849[5], l_U2244[1], l_U2244[1], 5, 0.00000000, 0, 0, 0 );
                }
                CREATE_CAR( sub_57791(), 811.67690000, 202.21350000, 5.72740000, ref l_U2244[3], 1 );
                SET_CAR_HEADING( l_U2244[3], 343.14830000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U2244[3] );
                if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U2244[3], ref l_U2849[6] );
                    SET_CHAR_DECISION_MAKER( l_U2849[6], l_U1811 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U2849[6] );
                    TASK_CAR_MISSION( l_U2849[6], l_U2244[3], l_U2244[3], 5, 0.00000000, 0, 0, 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U2243 )))
                {
                    ;
                }
                l_U2872 = 1;
            }
        }
        else
        {
            sub_34124( "Vlad dead!" );
        }
        break;
        case 1:
        if (NOT (IS_CAR_DEAD( l_U1793 )))
        {
            if (NOT (# -NULL-0xbfc08d( l_U1793 )))
            {
                GET_CAR_COORDINATES( l_U1793, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if (NOT (IS_CHAR_DEAD( l_U2849[3] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U2860[3] );
                    if (NOT (IS_CAR_DEAD( l_U2243 )))
                    {
                        TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U2243 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 809.85890000, 235.99920000, 5.99520000, 3, -1, 0.50000000 );
                    TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    CLOSE_SEQUENCE_TASK( l_U2860[3] );
                    TASK_PERFORM_SEQUENCE( l_U2849[3], l_U2860[3] );
                    CLEAR_SEQUENCE_TASK( l_U2860[3] );
                }
                if (NOT (IS_CHAR_DEAD( l_U2849[1] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U2860[1] );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 806.05780000, 239.79350000, 6.03580000, 3, -1, 0.50000000 );
                    TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    CLOSE_SEQUENCE_TASK( l_U2860[1] );
                    TASK_PERFORM_SEQUENCE( l_U2849[1], l_U2860[1] );
                    CLEAR_SEQUENCE_TASK( l_U2860[1] );
                }
                l_U2872 = 2;
            }
        }
        break;
        case 2:
        if (LOCATE_CHAR_IN_CAR_3D( sub_5753(), 804.74970000, 225.09090000, 6.03459900, 30.00000000, 30.00000000, 30.00000000, 0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2849[3] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U2860[3] );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 821.94590000, 224.96640000, 6.03480000, 3, -1, 0.50000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 817.98380000, 199.46160000, 6.00880000, 3, -1, 0.50000000 );
                CLOSE_SEQUENCE_TASK( l_U2860[3] );
                TASK_PERFORM_SEQUENCE( l_U2849[3], l_U2860[3] );
                CLEAR_SEQUENCE_TASK( l_U2860[3] );
            }
            if (NOT (IS_CHAR_DEAD( l_U2849[1] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U2860[1] );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 825.98030000, 253.50340000, 6.03730000, 3, -1, 0.50000000 );
                CLOSE_SEQUENCE_TASK( l_U2860[1] );
                TASK_PERFORM_SEQUENCE( l_U2849[1], l_U2860[1] );
                CLEAR_SEQUENCE_TASK( l_U2860[1] );
            }
            if (NOT (IS_CHAR_DEAD( l_U2849[0] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U2860[0] );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 826.12240000, 250.48380000, 6.03710000, 3, -1, 0.50000000 );
                CLOSE_SEQUENCE_TASK( l_U2860[0] );
                TASK_PERFORM_SEQUENCE( l_U2849[0], l_U2860[0] );
                CLEAR_SEQUENCE_TASK( l_U2860[0] );
            }
            l_U2872 = 3;
        }
        break;
        case 3:
        if (NOT l_U2874)
        {
            if (NOT (IS_CAR_DEAD( l_U2243 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U2849[3] )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U2849[3], l_U2243 )))
                    {
                        FREEZE_CAR_POSITION( l_U2243, 0 );
                        l_U2874 = 1;
                    }
                }
                else
                {
                    FREEZE_CAR_POSITION( l_U2243, 0 );
                    l_U2874 = 1;
                }
            }
        }
        break;
    }
    return;
}

void sub_57791()
{
    int iVar2;
    int Result;

    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref Result, ref iVar2 );
    if (iVar2 == -1)
    {
        REQUEST_MODEL( 1349725314 );
        while (NOT (HAS_MODEL_LOADED( 1349725314 )))
        {
            WAIT( 0 );
        }
        Result = 1349725314;
    }
    if ((Result == -1099960214) || ((Result == -2137348917) || ((Result == -713569950) || ((Result == 2046537925) || ((Result == 850991848) || (Result == 904750859))))))
    {
        REQUEST_MODEL( -956048545 );
        while (NOT (HAS_MODEL_LOADED( -956048545 )))
        {
            WAIT( 0 );
        }
        Result = -956048545;
    }
    return Result;
}

void sub_59559()
{
    unknown uVar2;

    if (IS_GROUP_MEMBER( l_U1806, sub_13200() ))
    {
        ;
    }
    if (DOES_BLIP_EXIST( l_U1789 ))
    {
        ;
    }
    if (DOES_BLIP_EXIST( l_U1790 ))
    {
        ;
    }
    if (l_U1896)
    {
        if (NOT l_U1932)
        {
            if (NOT l_U2306)
            {
                if (NOT (IS_CHAR_DEAD( l_U1806 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5753(), l_U1806, 20.00000000, 20.00000000, 20.00000000, 0 ))
                    {
                        if (IS_GROUP_MEMBER( l_U1806, sub_13200() ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( l_U1806, 804.74970000, 225.09090000, 6.03459900, 30.00000000, 30.00000000, 30.00000000, 0 ))
                            {
                                sub_59782();
                                REMOVE_CHAR_FROM_GROUP( l_U1806 );
                                l_U1932 = 1;
                            }
                            else if (NOT (IS_CHAR_DEAD( l_U1788 )))
                            {
                                if (IS_CHAR_IN_ANY_CAR( l_U1788 ))
                                {
                                    if (NOT (IS_CAR_DEAD( l_U1793 )))
                                    {
                                        if (IS_CHAR_IN_CAR( l_U1788, l_U1793 ))
                                        {
                                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1793 ))
                                            {
                                                if (NOT (DOES_BLIP_EXIST( l_U1790 )))
                                                {
                                                    ADD_BLIP_FOR_CAR( l_U1793, ref l_U1790 );
                                                    PRINT_NOW( "RM8_09", 7500, 1 );
                                                }
                                            }
                                        }
                                    }
                                }
                                if (DOES_BLIP_EXIST( l_U1807 ))
                                {
                                    REMOVE_BLIP( l_U1807 );
                                }
                            }
                            if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
                            {
                                GET_CAR_CHAR_IS_USING( sub_5753(), ref uVar2 );
                                if (IS_CHAR_IN_CAR( l_U1806, uVar2 ))
                                {
                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                    {
                                        if (NOT l_U1931)
                                        {
                                            if (NOT (sub_13903( l_U1760 )))
                                            {
                                                if (NOT l_U1784)
                                                {
                                                    SET_VEH_HAS_STRONG_AXLES( uVar2, 1 );
                                                    sub_14920( "R7_BANT2v2", ref l_U1760, 6, 0 );
                                                    l_U1784 = 1;
                                                }
                                                else if ((NOT l_U1928) AND (sub_13412( l_U1760 )))
                                                {
                                                    sub_16061( "R7_BANT2v2", ref l_U1760, 6, 1 );
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5753(), l_U1806, 10.00000000, 10.00000000, 0 ))
                        {
                            if (DOES_BLIP_EXIST( l_U1807 ))
                            {
                                REMOVE_BLIP( l_U1807 );
                            }
                            SET_GROUP_MEMBER( sub_13200(), l_U1806 );
                        }
                    }
                    else if (sub_13903( l_U1760 ))
                    {
                        sub_16939( ref l_U1760 );
                    }
                    if (DOES_BLIP_EXIST( l_U1790 ))
                    {
                        REMOVE_BLIP( l_U1790 );
                    }
                    if (DOES_BLIP_EXIST( l_U1789 ))
                    {
                        REMOVE_BLIP( l_U1790 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U1807 )))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U1806 );
                        ADD_BLIP_FOR_CHAR( l_U1806, ref l_U1807 );
                        CHANGE_BLIP_COLOUR( l_U1807, 3 );
                        CLEAR_PRINTS();
                        PRINT_NOW( "RM8_16", 7500, 1 );
                    }
                }
            }
        }
        else if (NOT l_U2313)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                sub_14087( ref l_U1760, 1 );
                CLEAR_PRINTS();
                sub_14920( "R7_CRASH", ref l_U1766, 6, 0 );
                l_U2313 = 1;
            }
        }
        else if (NOT l_U1809)
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_5753() )))
            {
                OPEN_SEQUENCE_TASK( ref l_U1808 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 798.07890000, 236.66530000, 4.68580000, 3, -1, 0.50000000 );
                CLOSE_SEQUENCE_TASK( l_U1808 );
                if (NOT (IS_CHAR_DEAD( l_U1806 )))
                {
                    ;
                }
                CLEAR_SEQUENCE_TASK( l_U1808 );
                l_U1809 = 1;
            }
        };;;
    }
    return;
}

void sub_59782()
{
    CLEAR_THIS_PRINT( "RM8_32" );
    CLEAR_THIS_PRINT( "RM8_33" );
    CLEAR_THIS_PRINT( "RM8_34" );
    CLEAR_THIS_PRINT( "RM8_35" );
    CLEAR_THIS_PRINT( "RM8_36" );
    CLEAR_THIS_PRINT( "RM8_37" );
    CLEAR_THIS_PRINT( "RM8_38" );
    CLEAR_THIS_PRINT( "RM8_39" );
    CLEAR_THIS_PRINT( "RM8_40" );
    CLEAR_THIS_PRINT( "RM8_41" );
    CLEAR_THIS_PRINT( "RM8_42" );
    return;
}

void sub_60838()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    switch (l_U2278)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U1788 )))
        {
            if (NOT (IS_CAR_DEAD( l_U1793 )))
            {
                if (IS_CHAR_IN_CAR( l_U1788, l_U1793 ))
                {
                    ADD_SCENARIO_BLOCKING_AREA( 778.64780000, 225.49890000, -10.00000000, 786.62480000, 250.01510000, 30.00000000 );
                    if (DOES_BLIP_EXIST( l_U1790 ))
                    {
                        REMOVE_BLIP( l_U1790 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U1789 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U1788, ref l_U1789 );
                        CHANGE_BLIP_COLOUR( l_U1789, 1 );
                    }
                    SET_CHAR_NEVER_TARGETTED( l_U1788, 0 );
                    SET_PED_DIES_WHEN_INJURED( l_U1788, 1 );
                    l_U1792 = 0;
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( 796.13050000, 233.21240000, 4.50000000 );
                    TASK_EXTEND_ROUTE( 781.37840000, 246.50890000, 4.50003000 );
                    TASK_EXTEND_ROUTE( 777.72090000, 243.87110000, 4.50003000 );
                    OPEN_SEQUENCE_TASK( ref l_U1791 );
                    TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U1793 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 784.93950000, 237.54020000, 4.50000000, 4, -1, 0.50000000 );
                    TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD( 0, 780.38700000, 235.60800000, 3.50000000, 4, -1, 0.50000000, 276.36400000 );
                    TASK_TURN_CHAR_TO_FACE_COORD( 0, 784.22860000, 235.47090000, 3.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U1791 );
                    SET_CHAR_HEALTH( l_U1788, 200 );
                    if (NOT (IS_CHAR_INJURED( l_U1788 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1788, l_U1791 );
                    }
                    GET_GAME_TIMER( ref l_U1923 );
                    GET_GAME_TIMER( ref l_U2340 );
                    CLEAR_SEQUENCE_TASK( l_U1791 );
                    l_U2278 = 2;
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U1788 )))
        {
            if ((IS_AREA_OCCUPIED( 790.80020000, 224.58460000, 0.00000000, 792.74600000, 253.48590000, 100.00000000, 0, 1, 0, 0, 0 )) || ((IS_PED_RAGDOLL( l_U1788 )) || ((IS_EXPLOSION_IN_AREA( -1, 754.95660000, 218.06690000, -10.00000000, 797.36380000, 251.80210000, 30.00000000 )) || ((sub_61727( l_U1788, 1 )) || ((IS_BULLET_IN_AREA( 780.21270000, 235.15290000, 4.50000000, 3.00000000, 1 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 776.14200000, 261.18840000, 5.99500000, 2.00000000, 9.00000000, 8.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 698.90220000, 210.16060000, 1.91170000, 29.00000000, 19.00000000, 8.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 731.60500000, 234.22550000, 0.56060000, 43.00000000, 20.00000000, 12.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 787.51280000, 225.78290000, 4.50550000, 6.00000000, 2.00000000, 100.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 778.68240000, 237.04550000, 4.50000000, 9.00000000, 22.00000000, 25.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 791.98240000, 239.49380000, 4.50650000, 1.00000000, 14.00000000, 2.00000000, 0 ))))))))))))
            {
                if ((IS_AREA_OCCUPIED( 790.80020000, 224.58460000, 0.00000000, 792.74600000, 253.48590000, 100.00000000, 0, 1, 0, 0, 0 )) || (IS_EXPLOSION_IN_AREA( -1, 754.95660000, 218.06690000, -10.00000000, 797.36380000, 251.80210000, 30.00000000 )))
                {
                    SET_PLAYER_CONTROL( sub_3215(), 0 );
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    l_U2311 = 1;
                    l_U2310 = 0;
                    l_U2278 = 3;
                }
                if (IS_PED_RAGDOLL( l_U1788 ))
                {
                    ;
                }
                if (NOT l_U2337)
                {
                    if (sub_62198())
                    {
                        SET_PLAYER_CONTROL( sub_3215(), 0 );
                        l_U2339 = 1;
                        l_U2311 = 1;
                        l_U2278 = 3;
                    }
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 791.98240000, 239.49380000, 4.50650000, 1.00000000, 14.00000000, 2.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_5753() )))
                    {
                        if (sub_62421())
                        {
                            if (NOT (IS_CHAR_IN_WATER( sub_5753() )))
                            {
                                if (NOT l_U2337)
                                {
                                    SET_PLAYER_CONTROL( sub_3215(), 0 );
                                    l_U2339 = 1;
                                    l_U2311 = 1;
                                }
                                l_U2278 = 3;
                            }
                        }
                        else if (l_U2315)
                        {
                            l_U2315 = 0;
                            l_U2316 = 0;
                        }
                    }
                }
                else
                {
                    l_U2278 = 3;
                }
                if (l_U2339)
                {
                    l_U1929 = 0;
                    if (IS_SCREEN_FADED_IN())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    CLEAR_AREA( 784.22860000, 235.47090000, 3.50000000, 200.00000000, 1 );
                    if (NOT (IS_CHAR_DEAD( l_U1806 )))
                    {
                        SET_CHAR_PROOFS( l_U1806, 1, 1, 1, 1, 1 );
                    }
                    l_U2278 = 3;
                }
            }
            else
            {
                sub_34124( "No explosion" );
                if (NOT (IS_CHAR_DEAD( l_U1788 )))
                {
                    if (IS_CHAR_DUCKING( l_U1788 ))
                    {
                        FREEZE_CHAR_POSITION( l_U1788, 1 );
                    }
                    else if (NOT l_U2335)
                    {
                        if (NOT l_U2337)
                        {
                            GET_GAME_TIMER( ref l_U2341 );
                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1788, 780.21270000, 235.15290000, 4.50000000, 2.00000000, 2.00000000, 2.00000000, 0 )))
                            {
                                if ((l_U2341 - l_U2340) > 30000)
                                {
                                    CLEAR_CHAR_TASKS( l_U1788 );
                                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U1788 )))
                                    {
                                        SET_CHAR_COORDINATES( l_U1788, 780.21270000, 235.15290000, 4.50000000 );
                                    }
                                    else
                                    {
                                        WARP_CHAR_FROM_CAR_TO_COORD( l_U1788, 780.21270000, 235.15290000, 4.50000000 );
                                    }
                                }
                            }
                        }
                    }
                    if (NOT l_U2337)
                    {
                        if (NOT (IS_CHAR_DEAD( l_U1788 )))
                        {
                            if (sub_20437( l_U1788, 1, 0 ))
                            {
                                if (sub_62198())
                                {
                                    if (HAVE_ANIMS_LOADED( "missroman7" ))
                                    {
                                        TASK_PLAY_ANIM_WITH_FLAGS( l_U1788, "plead", "missroman7", 8.00000000, 0, 147 );
                                        sub_14920( "R7_BEGS", ref l_U1778, 6, 1 );
                                        l_U2310 = 1;
                                        l_U2337 = 1;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_63244( 0 );
                    }
                }
            }
        }
        break;
        case 3:
        sub_64099();
        break;
        case 1:
        if (l_U2322)
        {
            ;
        }
        if (NOT (IS_CHAR_DEAD( l_U1788 )))
        {
            if (NOT l_U2320)
            {
                if (IS_CHAR_PLAYING_ANIM( l_U1788, "Missroman7", "plead" ))
                {
                    SET_CHAR_READY_TO_BE_EXECUTED( l_U1788, 1 );
                    l_U2320 = 1;
                }
            }
            else if (sub_70968( l_U1788 ))
            {
                CLEAR_HELP();
                if (DOES_BLIP_EXIST( l_U1789 ))
                {
                    REMOVE_BLIP( l_U1789 );
                }
                l_U2278 = 8;
            }
            else if (NOT (IS_CHAR_INJURED( l_U1788 )))
            {
                sub_63244( 1 );
            }
            else
            {
                sub_14087( ref l_U1778, 0 );
            };;;
            if (NOT l_U2321)
            {
                if ((IS_PLAYER_TARGETTING_CHAR( sub_3215(), l_U1788 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                {
                    l_U2321 = 1;
                }
            }
        }
        else if (DOES_BLIP_EXIST( l_U1789 ))
        {
            REMOVE_BLIP( l_U1789 );
        }
        sub_14087( ref l_U1778, 0 );
        GET_GAME_TIMER( ref l_U1925 );
        l_U1755 = 14;;
        if (NOT l_U2326)
        {
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U1806 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U1806, ref uVar2 );
                    if (IS_CHAR_IN_CAR( sub_5753(), uVar2 ))
                    {
                        sub_14920( "R7_BACKIN", ref l_U2328, 6, 1 );
                        l_U2326 = 1;
                    }
                }
            }
        }
        else if (NOT l_U2327)
        {
            if (NOT (sub_13903( l_U2328 )))
            {
                PRINT_NOW( "RM8_06", 7500, 1 );
                l_U2327 = 1;
            }
        }
        break;
        case 4: break;
        case 8:
        if (sub_72200( 783.59960000, 235.58630000, 3.50150000, 97.16790000, l_U1788 ))
        {
            l_U2334 = 1;
            l_U1755 = 14;
        }
        break;
        case 5: break;
    }
    if (NOT l_U2325)
    {
        sub_75190();
    }
    if (l_U2322)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 796.13050000, 233.21240000, 4.50000000, 200.00000000, 200.00000000, 200.00000000, 0 )))
        {
            if (NOT l_U2324)
            {
                if (NOT l_U2323)
                {
                    GET_GAME_TIMER( ref l_U1897 );
                    l_U2323 = 1;
                }
                else
                {
                    GET_GAME_TIMER( ref l_U1898 );
                    if ((l_U1898 - l_U1897) > 10000)
                    {
                        if (sub_13903( l_U1760 ))
                        {
                            sub_16939( ref l_U1760 );
                            l_U1928 = 1;
                        }
                        CLEAR_PRINTS();
                        PRINT_NOW( "RM8_55", 7500, 1 );
                        l_U2324 = 1;
                    }
                }
            }
            else if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                l_U1755 = 11;
            }
        }
        else
        {
            l_U2323 = 0;
            l_U2324 = 0;
            if (l_U1928)
            {
                sub_16061( "R7_BANT2v2", ref l_U1760, 6, 1 );
                l_U1928 = 0;
            }
        }
    }
    if (NOT l_U2336)
    {
        if (NOT (IS_CHAR_DEAD( l_U1788 )))
        {
            if (NOT (IS_CAR_DEAD( l_U1793 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U1788, l_U1793 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_5753(), l_U1793 )))
                    {
                        GET_CAR_COORDINATES( l_U1793, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        if (uVar3._fU8 > 5.63000000)
                        {
                            SET_CAR_COORDINATES( l_U1793, 811.42140000, 233.93710000, 5.62540000 );
                            SET_CAR_ON_GROUND_PROPERLY( l_U1793 );
                            APPLY_FORCE_TO_CAR( l_U1793, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                        }
                        else
                        {
                            l_U2336 = 1;
                        }
                    }
                }
            }
        }
    }
    if (NOT l_U2338)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 780.21270000, 235.15290000, 4.50000000, 100.00000000, 100.00000000, 100.00000000, 0 ))
        {
            REQUEST_ANIMS( "missroman7" );
            l_U2338 = 1;
        }
    }
    return;
}

int sub_61727(unknown uParam0, boolean bParam1)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT bParam1)
        {
            if (IS_PLAYER_TARGETTING_CHAR( sub_3215(), uParam0 ))
            {
                if (IS_CHAR_ARMED( sub_5753(), 7 ))
                {
                    return 1;
                }
            }
        }
        else if (NOT IS_AUTO_AIMING_ON())
        {
            if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3215(), uParam0 ))
            {
                if (IS_CHAR_ARMED( sub_5753(), 7 ))
                {
                    return 1;
                }
            }
        }
        else if (IS_PLAYER_TARGETTING_CHAR( sub_3215(), uParam0 ))
        {
            if (IS_CHAR_ARMED( sub_5753(), 7 ))
            {
                return 1;
            }
        };;;
    }
    return 0;
}

void sub_62198()
{
    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 796.70910000, 238.64300000, 4.49070000, 4.00000000, 14.00000000, 10.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 802.71530000, 235.19610000, 6.02510000, 1.00000000, 2.00000000, 10.00000000, 0 )))
    {
        l_U2319 = 1;
    }
    return l_U2319;
}

void sub_62421()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT l_U2315)
    {
        if (NOT l_U2316)
        {
            GET_GAME_TIMER( ref l_U2317 );
            l_U2316 = 1;
        }
        else
        {
            GET_GAME_TIMER( ref l_U2318 );
            if ((l_U2318 - l_U2317) > 2000)
            {
                GET_CHAR_COORDINATES( sub_5753(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                uVar2._fU8 += 1.00000000;
                if (NOT (GET_WATER_HEIGHT( uVar2, ref uVar5 )))
                {
                    l_U2315 = 1;
                }
            }
        }
    }
    return l_U2315;
}

void sub_63244(boolean bParam0)
{
    unknown uVar3;
    string sVar4;
    string sVar5;
    unknown uVar6;

    switch (l_U2255)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U1788 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U1788, "missroman7", "plead" ))
            {
                l_U2255++;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U1788 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5753(), l_U1788, 25.00000000, 25.00000000, 25.00000000, 0 ))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U1788, "missroman7", "plead" )))
                {
                    if (l_U2257)
                    {
                        l_U2257 = 0;
                    }
                    if (NOT l_U2256)
                    {
                        if (bParam0)
                        {
                            OPEN_SEQUENCE_TASK( ref uVar3 );
                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1788, 779.43930000, 235.50540000, 4.50660000, 2.20000000, 2.20000000, 2.00000000, 0 )))
                            {
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 780.38700000, 235.60800000, 3.46980000, 3, -2, 0.50000000 );
                            }
                            if (bParam0)
                            {
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_5753() );
                            }
                            CLOSE_SEQUENCE_TASK( uVar3 );
                        }
                        if (bParam0)
                        {
                            TASK_PERFORM_SEQUENCE( l_U1788, uVar3 );
                        }
                        CLEAR_SEQUENCE_TASK( uVar3 );
                        l_U2256 = 1;
                    }
                    else if (sub_20437( l_U1788, 1, 0 ))
                    {
                        if (bParam0)
                        {
                            TASK_PLAY_ANIM_WITH_FLAGS( l_U1788, "plead", "missroman7", 8.00000000, 0, 131 );
                        }
                        if (NOT (sub_13903( l_U1778 )))
                        {
                            sub_14920( "R7_BEGS", ref l_U1778, 6, 1 );
                        }
                        l_U2256 = 0;
                    }
                }
                else if (l_U2256)
                {
                    l_U2256 = 0;
                }
                if (NOT (sub_13903( l_U1778 )))
                {
                    sub_14920( "R7_BEGS", ref l_U1778, 6, 1 );
                }
            }
            else if (NOT l_U2257)
            {
                if (NOT (IS_PED_RAGDOLL( l_U1788 )))
                {
                    CLEAR_CHAR_TASKS( l_U1788 );
                    sub_14087( ref l_U1778, 1 );
                    SET_CHAR_HEADING( l_U1788, 270.00000000 );
                    l_U2257 = 1;
                }
            }
        }
        break;
    }
    if (NOT (IS_CHAR_INJURED( l_U1788 )))
    {
        sVar4 = "missroman7";
        sVar5 = "plead";
        GET_SCRIPT_TASK_STATUS( l_U1788, 29, ref uVar6 );
        if (NOT (IS_CHAR_PLAYING_ANIM( l_U1788, sVar4, sVar5 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U1788 )))
            {
                if (GET_CHAR_READY_TO_BE_EXECUTED( l_U1788 ))
                {
                    SET_CHAR_READY_TO_BE_EXECUTED( l_U1788, 0 );
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U1788 )))
        {
            if (NOT (GET_CHAR_READY_TO_BE_EXECUTED( l_U1788 )))
            {
                if (l_U2258)
                {
                    SET_CHAR_READY_TO_BE_EXECUTED( l_U1788, 1 );
                }
            }
        }
    }
    return;
}

void sub_64099()
{
    int iVar2;

    if (NOT l_U2301)
    {
        if (NOT sub_17623())
        {
            l_U2301 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U2300) AND ((l_U2279 < 11) AND (l_U2279 > 0))))
    {
        if (sub_17623())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U2300 = 1;
            l_U2279 = 11;
        }
    }
    switch (l_U2279)
    {
        case 0:
        if (NOT l_U2304)
        {
            if (sub_14223( 1, 0 ))
            {
                if (sub_9141())
                {
                    l_U2306 = 1;
                    EXTINGUISH_FIRE_AT_POINT( 784.22860000, 235.47090000, 3.50000000, 500.00000000 );
                    SET_ALL_RANDOM_PEDS_FLEE( sub_3215(), 1 );
                    SET_PLAYER_CONTROL( sub_3215(), 0 );
                    sub_14087( ref l_U1778, 0 );
                    l_U2255 = 0;
                    BEGIN_CAM_COMMANDS( ref l_U1827 );
                    if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
                    {
                        sub_64513();
                    }
                    CLEAR_WANTED_LEVEL( sub_3215() );
                    SET_WANTED_MULTIPLIER( 0.00000000 );
                    sub_65097();
                    CLEAR_AREA_OF_CARS( 784.22860000, 235.47090000, 3.50000000, 20.00000000 );
                    CLEAR_AREA( 784.22860000, 235.47090000, 3.50000000, 200.00000000, 1 );
                    CLEAR_PRINTS();
                    DISPLAY_RADAR( 0 );
                    SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                    SET_USE_HIGHDOF( 1 );
                    CREATE_CAM( 14, ref l_U1900[2] );
                    SET_CAM_POS( l_U1900[2], 807.18980000, 233.99450000, 8.53936700 );
                    SET_CAM_ROT( l_U1900[2], 1.87696500, 0.00000000, 84.34093000 );
                    SET_CAM_ACTIVE( l_U1900[2], 0 );
                    SET_CAM_PROPAGATE( l_U1900[2], 0 );
                    SET_CAM_FOV( l_U1900[2], 55.00000000 );
                    CREATE_CAM( 14, ref l_U1900[0] );
                    SET_CAM_POS( l_U1900[0], 783.44480000, 235.12300000, 3.85422300 );
                    SET_CAM_ROT( l_U1900[0], 10.45450000, -0.00000000, 75.09254000 );
                    SET_CAM_ACTIVE( l_U1900[0], 0 );
                    SET_CAM_PROPAGATE( l_U1900[0], 0 );
                    SET_CAM_FOV( l_U1900[0], 45.00000000 );
                    CREATE_CAM( 14, ref l_U1900[1] );
                    SET_CAM_POS( l_U1900[1], 781.59200000, 234.78070000, 3.98438900 );
                    SET_CAM_ROT( l_U1900[1], 13.32788000, -0.00000000, -74.21359000 );
                    SET_CAM_ACTIVE( l_U1900[1], 0 );
                    SET_CAM_PROPAGATE( l_U1900[1], 0 );
                    SET_CAM_FOV( l_U1900[1], 45.00000000 );
                    CREATE_CAM( 14, ref l_U1900[3] );
                    SET_CAM_POS( l_U1900[3], 807.18980000, 233.99450000, 8.53936700 );
                    SET_CAM_ROT( l_U1900[3], 1.87696500, 0.00000000, 84.34093000 );
                    SET_CAM_ACTIVE( l_U1900[3], 0 );
                    SET_CAM_PROPAGATE( l_U1900[3], 0 );
                    SET_CAM_FOV( l_U1900[3], 45.00000000 );
                    CREATE_CAM( 3, ref l_U1900[4] );
                    SET_CAM_ACTIVE( l_U1900[4], 0 );
                    SET_CAM_PROPAGATE( l_U1900[4], 0 );
                    CREATE_CAM( 14, ref l_U1900[5] );
                    SET_CAM_POS( l_U1900[5], 782.98390000, 235.22790000, 6.02776800 );
                    SET_CAM_ROT( l_U1900[5], 10.53844000, -0.00000000, 84.94740000 );
                    SET_CAM_ACTIVE( l_U1900[5], 0 );
                    SET_CAM_PROPAGATE( l_U1900[5], 0 );
                    SET_CAM_FOV( l_U1900[5], 45.00000000 );
                    SET_CAM_NEAR_DOF( l_U1900[5], 0.50000000 );
                    SET_CAM_FAR_DOF( l_U1900[5], 5.00000000 );
                    CREATE_CAM( 14, ref l_U1900[6] );
                    SET_CAM_POS( l_U1900[6], 782.62690000, 235.25940000, 4.10082900 );
                    SET_CAM_ROT( l_U1900[6], 10.53844000, -0.00000000, 84.94740000 );
                    SET_CAM_ACTIVE( l_U1900[6], 0 );
                    SET_CAM_PROPAGATE( l_U1900[6], 0 );
                    SET_CAM_FOV( l_U1900[6], 45.00000000 );
                    SET_CAM_NEAR_DOF( l_U1900[6], 0.50000000 );
                    SET_CAM_FAR_DOF( l_U1900[6], 5.00000000 );
                    CREATE_CAM( 3, ref l_U1900[7] );
                    SET_CAM_ACTIVE( l_U1900[7], 0 );
                    SET_CAM_PROPAGATE( l_U1900[7], 0 );
                    CREATE_CAM( 14, ref l_U1900[8] );
                    SET_CAM_POS( l_U1900[8], 785.85010000, 234.33200000, 4.57850000 );
                    SET_CAM_ROT( l_U1900[8], 3.46441400, 0.00000000, 73.14451000 );
                    SET_CAM_ACTIVE( l_U1900[8], 0 );
                    SET_CAM_PROPAGATE( l_U1900[8], 0 );
                    SET_CAM_FOV( l_U1900[8], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1900[8], 2.50000000 );
                    SET_CAM_FAR_DOF( l_U1900[8], 6.00000000 );
                    CREATE_CAM( 14, ref l_U1900[11] );
                    SET_CAM_POS( l_U1900[11], 778.54900000, 233.84680000, 4.37401700 );
                    SET_CAM_ROT( l_U1900[11], 6.97777700, 0.00000000, -67.11557000 );
                    SET_CAM_ACTIVE( l_U1900[11], 0 );
                    SET_CAM_PROPAGATE( l_U1900[11], 0 );
                    SET_CAM_FOV( l_U1900[11], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1900[11], 3.00000000 );
                    SET_CAM_FAR_DOF( l_U1900[11], 6.50000000 );
                    CREATE_CAM( 14, ref l_U1900[12] );
                    SET_CAM_POS( l_U1900[12], 785.74920000, 233.83830000, 4.91889000 );
                    SET_CAM_ROT( l_U1900[12], -3.81524600, -0.00000000, 61.64202000 );
                    SET_CAM_ACTIVE( l_U1900[12], 0 );
                    SET_CAM_PROPAGATE( l_U1900[12], 0 );
                    SET_CAM_FOV( l_U1900[12], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1900[12], 0.50000000 );
                    SET_CAM_FAR_DOF( l_U1900[12], 15.00000000 );
                    CREATE_CAM( 14, ref l_U1900[9] );
                    SET_CAM_POS( l_U1900[9], 781.85430000, 235.16590000, 4.11377000 );
                    SET_CAM_ROT( l_U1900[9], 16.08103000, 0.00000000, -66.31880000 );
                    SET_CAM_ACTIVE( l_U1900[9], 0 );
                    SET_CAM_PROPAGATE( l_U1900[9], 0 );
                    SET_CAM_FOV( l_U1900[9], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1900[9], 0.50000000 );
                    SET_CAM_FAR_DOF( l_U1900[9], 5.00000000 );
                    CREATE_CAM( 14, ref l_U1900[13] );
                    SET_CAM_POS( l_U1900[13], 783.83000000, 234.06000000, 4.00000000 );
                    SET_CAM_ROT( l_U1900[13], 16.48000000, 0.00000000, 58.32000000 );
                    SET_CAM_ACTIVE( l_U1900[13], 0 );
                    SET_CAM_PROPAGATE( l_U1900[13], 0 );
                    SET_CAM_FOV( l_U1900[13], 35.00000000 );
                    SET_CAM_NEAR_DOF( l_U1900[13], 0.50000000 );
                    SET_CAM_FAR_DOF( l_U1900[13], 5.00000000 );
                    OPEN_SEQUENCE_TASK( ref l_U1802 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 784.22860000, 235.47090000, 3.50000000, 2, -2, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U1802 );
                    CLEAR_SEQUENCE_TASK( l_U1802 );
                    GET_GAME_TIMER( ref l_U2298 );
                    SET_CAM_ACTIVE( l_U1900[0], 1 );
                    SET_CAM_PROPAGATE( l_U1900[0], 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    l_U2304 = 1;
                }
            }
        }
        else if (l_U1935)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 800.29240000, 234.67830000, 6.01730000, 1.00000000, 2.00000000, 2.00000000, 0 ))
            {
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                GET_GAME_TIMER( ref l_U2292 );
                l_U2279 = 1;
            }
        }
        else
        {
            SET_CAM_ACTIVE( l_U1900[0], 1 );
            SET_CAM_PROPAGATE( l_U1900[0], 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_5753() );
            SET_CHAR_COORDINATES( sub_5753(), 784.22860000, 235.47090000, 3.50000000 );
            SET_CHAR_HEADING( sub_5753(), 90.00000000 );
            GIVE_DELAYED_WEAPON_TO_CHAR( sub_5753(), 7, 50, 1 );
            SET_CURRENT_CHAR_WEAPON( sub_5753(), 7, 1 );
            if (NOT (IS_CHAR_DEAD( l_U1788 )))
            {
                FREEZE_CHAR_POSITION( l_U1788, 0 );
                SET_CHAR_HEALTH( l_U1788, 200 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1788, 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U1788, 1 );
                SET_CHAR_DECISION_MAKER( l_U1788, l_U1811 );
            }
            REQUEST_ANIMS( "Missroman7" );
            REQUEST_ANIMS( "gestures@niko" );
            while ((NOT (HAVE_ANIMS_LOADED( "gestures@niko" ))) || (NOT (HAVE_ANIMS_LOADED( "Missroman7" ))))
            {
                WAIT( 0 );
            }
            SET_CAM_ACTIVE( l_U1900[6], 1 );
            SET_CAM_PROPAGATE( l_U1900[6], 0 );
            SET_CAM_ACTIVE( l_U1900[3], 0 );
            SET_CAM_PROPAGATE( l_U1900[3], 0 );
            SET_CAM_ACTIVE( l_U1900[4], 0 );
            SET_CAM_PROPAGATE( l_U1900[4], 0 );
            if (l_U2311)
            {
                if (NOT (IS_CHAR_DEAD( l_U1788 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1788 );
                    SET_CHAR_COORDINATES( l_U1788, 780.38700000, 235.60800000, 3.50000000 );
                    SET_CHAR_HEADING( l_U1788, 276.36400000 );
                }
            }
            if (NOT l_U2310)
            {
                if (NOT (IS_CHAR_DEAD( l_U1788 )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( l_U1788, "missroman7", "plead" )))
                    {
                        TASK_PLAY_ANIM_WITH_FLAGS( l_U1788, "plead", "missroman7", 8.00000000, 0, 147 );
                    }
                }
            }
            sub_14920( "R7_FIGHT2", ref l_U2280, 6, 1 );
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            l_U2279 = 6;
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U2299 );
        SET_CAM_ACTIVE( l_U1900[5], 1 );
        SET_CAM_PROPAGATE( l_U1900[5], 1 );
        SET_CAM_ACTIVE( l_U1900[6], 1 );
        SET_CAM_PROPAGATE( l_U1900[6], 0 );
        SET_CAM_ACTIVE( l_U1900[3], 0 );
        SET_CAM_PROPAGATE( l_U1900[3], 0 );
        SET_CAM_ACTIVE( l_U1900[4], 0 );
        SET_CAM_PROPAGATE( l_U1900[4], 0 );
        SET_CHAR_COORDINATES( sub_5753(), 784.22860000, 235.47090000, 3.50000000 );
        SET_CHAR_HEADING( sub_5753(), 90.00000000 );
        l_U2279 = 2;
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U1788 )))
        {
            GET_GAME_TIMER( ref l_U2293 );
            SET_CHAR_PROOFS( l_U1788, 0, 0, 0, 0, 0 );
            GET_GAME_TIMER( ref l_U2294 );
            l_U2279 = 4;
        }
        break;
        case 4:
        GET_GAME_TIMER( ref l_U2295 );
        if (NOT (IS_CHAR_DEAD( l_U1788 )))
        {
            SET_CAM_ACTIVE( l_U1900[5], 0 );
            SET_CAM_PROPAGATE( l_U1900[5], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U1900[7], l_U1900[5], l_U1900[6], 7000, 0 );
            SET_CAM_ACTIVE( l_U1900[7], 1 );
            SET_CAM_PROPAGATE( l_U1900[7], 1 );
            GET_GAME_TIMER( ref l_U2294 );
            l_U2279 = 6;
        }
        break;
        case 6:
        iVar2 = sub_68979( l_U2280 );
        if (iVar2 > 0)
        {
            SET_CAM_ACTIVE( l_U1900[1], 1 );
            SET_CAM_PROPAGATE( l_U1900[1], 1 );
            SET_CAM_ACTIVE( l_U1900[0], 0 );
            SET_CAM_PROPAGATE( l_U1900[0], 0 );
            SET_CAM_ACTIVE( l_U1900[7], 0 );
            SET_CAM_PROPAGATE( l_U1900[7], 0 );
            SET_CAM_ACTIVE( l_U1900[6], 0 );
            SET_CAM_PROPAGATE( l_U1900[6], 0 );
            if (NOT (IS_CHAR_DEAD( l_U1788 )))
            {
                ;
            }
            SET_CAM_ACTIVE( l_U1900[7], 0 );
            SET_CAM_PROPAGATE( l_U1900[7], 0 );
            SET_CAM_ACTIVE( l_U1900[6], 0 );
            SET_CAM_PROPAGATE( l_U1900[6], 0 );
            l_U2279 = 5;
        }
        break;
        case 5:
        iVar2 = sub_68979( l_U2280 );
        if (iVar2 > 1)
        {
            SET_CAM_ACTIVE( l_U1900[8], 1 );
            SET_CAM_PROPAGATE( l_U1900[8], 1 );
            SET_CAM_ACTIVE( l_U1900[1], 0 );
            SET_CAM_PROPAGATE( l_U1900[1], 0 );
            l_U2279 = 7;
        }
        break;
        case 7:
        iVar2 = sub_68979( l_U2280 );
        if (iVar2 > 2)
        {
            SET_CAM_ACTIVE( l_U1900[11], 1 );
            SET_CAM_PROPAGATE( l_U1900[11], 1 );
            SET_CAM_ACTIVE( l_U1900[8], 0 );
            SET_CAM_PROPAGATE( l_U1900[8], 0 );
            l_U2279 = 8;
        }
        break;
        case 8:
        iVar2 = sub_68979( l_U2280 );
        if (iVar2 > 3)
        {
            SET_CAM_ACTIVE( l_U1900[12], 1 );
            SET_CAM_PROPAGATE( l_U1900[12], 1 );
            SET_CAM_ACTIVE( l_U1900[11], 0 );
            SET_CAM_PROPAGATE( l_U1900[11], 0 );
            l_U2279 = 9;
        }
        break;
        case 9:
        iVar2 = sub_68979( l_U2280 );
        if (iVar2 > 5)
        {
            SET_CAM_ACTIVE( l_U1900[9], 1 );
            SET_CAM_PROPAGATE( l_U1900[9], 1 );
            SET_CAM_ACTIVE( l_U1900[12], 0 );
            SET_CAM_PROPAGATE( l_U1900[12], 0 );
            l_U2279 = 10;
        }
        break;
        case 10:
        iVar2 = sub_68979( l_U2280 );
        if (iVar2 > 6)
        {
            SET_CAM_ACTIVE( l_U1900[13], 1 );
            SET_CAM_PROPAGATE( l_U1900[13], 1 );
            SET_CAM_ACTIVE( l_U1900[9], 0 );
            SET_CAM_PROPAGATE( l_U1900[9], 0 );
            l_U2279 = 11;
        }
        break;
        case 11:
        if ((l_U2300) || (NOT (sub_13903( l_U2280 ))))
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            DISPLAY_RADAR( 1 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_ACTIVE( l_U1900[2], 0 );
            SET_CAM_PROPAGATE( l_U1900[2], 0 );
            SET_CAM_ACTIVE( l_U1900[3], 0 );
            SET_CAM_PROPAGATE( l_U1900[3], 0 );
            SET_CAM_ACTIVE( l_U1900[4], 0 );
            SET_CAM_PROPAGATE( l_U1900[4], 0 );
            SET_CAM_ACTIVE( l_U1900[5], 0 );
            SET_CAM_PROPAGATE( l_U1900[5], 0 );
            SET_CAM_ACTIVE( l_U1900[6], 0 );
            SET_CAM_PROPAGATE( l_U1900[6], 0 );
            SET_CAM_ACTIVE( l_U1900[7], 0 );
            SET_CAM_PROPAGATE( l_U1900[7], 0 );
            SET_CAM_ACTIVE( l_U1900[8], 0 );
            SET_CAM_PROPAGATE( l_U1900[8], 0 );
            SET_CAM_ACTIVE( l_U1900[11], 0 );
            SET_CAM_PROPAGATE( l_U1900[11], 0 );
            SET_CAM_ACTIVE( l_U1900[12], 0 );
            SET_CAM_PROPAGATE( l_U1900[12], 0 );
            SET_CAM_ACTIVE( l_U1900[9], 0 );
            SET_CAM_PROPAGATE( l_U1900[9], 0 );
            SET_CAM_ACTIVE( l_U1900[13], 0 );
            SET_CAM_PROPAGATE( l_U1900[13], 0 );
            DESTROY_CAM( l_U1900[2] );
            DESTROY_CAM( l_U1900[3] );
            DESTROY_CAM( l_U1900[5] );
            DESTROY_CAM( l_U1900[6] );
            DESTROY_CAM( l_U1900[7] );
            DESTROY_CAM( l_U1900[8] );
            DESTROY_CAM( l_U1900[11] );
            DESTROY_CAM( l_U1900[12] );
            DESTROY_CAM( l_U1900[9] );
            DESTROY_CAM( l_U1900[13] );
            SET_USE_HIGHDOF( 0 );
            if (l_U2300)
            {
                sub_14087( ref l_U2280, 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_5753() );
                SET_CHAR_COORDINATES( sub_5753(), 784.22860000, 235.47090000, 3.50000000 );
                SET_CHAR_HEADING( sub_5753(), 90.00000000 );
                if (NOT (IS_CHAR_DEAD( l_U1788 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1788 );
                    SET_CHAR_COORDINATES( l_U1788, 780.38700000, 235.60800000, 3.50000000 );
                    SET_CHAR_HEADING( l_U1788, 261.63300000 );
                    SET_CHAR_PROOFS( l_U1788, 0, 0, 0, 0, 0 );
                }
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            else
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            }
            REMOVE_ANIMS( "gestures@niko" );
            END_CAM_COMMANDS( ref l_U1827 );
            l_U2306 = 0;
            l_U2279 = 12;
        }
        break;
        case 12:
        if (NOT (sub_13903( l_U2280 )))
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                GET_GAME_TIMER( ref l_U2296 );
                PRINT_HELP( "RM8_07" );
            }
            else if (NOT (IS_CHAR_DEAD( l_U1788 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U1791 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_5753() );
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "plead", "missroman7", 8.00000000, 0, 131 );
                CLOSE_SEQUENCE_TASK( l_U1791 );
                TASK_LOOK_AT_CHAR( l_U1788, sub_5753(), -2, 0 );
                TASK_PERFORM_SEQUENCE( l_U1788, l_U1791 );
                SET_CHAR_PROOFS( l_U1788, 0, 0, 0, 0, 0 );
                sub_14920( "R7_BEGS", ref l_U1778, 6, 1 );
                CLEAR_SEQUENCE_TASK( l_U1791 );
            }
            l_U2279 = 13;;
        }
        break;
        case 13:
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT l_U1828[8])
            {
                PRINT_HELP( "RM8_08" );
                while (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    WAIT( 0 );
                }
                l_U1828[8] = 1;
            }
        }
        else if (l_U1828[8])
        {
            l_U2279 = 14;
        }
        else if (sub_70968( l_U1788 ))
        {
            CLEAR_HELP();
            if (DOES_BLIP_EXIST( l_U1789 ))
            {
                REMOVE_BLIP( l_U1789 );
            }
            l_U2278 = 8;
        };;;
        if (NOT l_U2312)
        {
            GET_GAME_TIMER( ref l_U2297 );
            if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (l_U1828[8])) || ((l_U2297 - l_U2296) > 4000))
            {
                SET_PLAYER_CONTROL( sub_3215(), 1 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                sub_13122();
                if (NOT (IS_CHAR_DEAD( l_U1788 )))
                {
                    l_U2258 = 1;
                    SET_CHAR_READY_TO_BE_EXECUTED( l_U1788, 1 );
                }
                if (NOT (IS_CHAR_DEAD( l_U1806 )))
                {
                    SET_CHAR_PROOFS( l_U1806, 0, 0, 0, 0, 0 );
                    l_U1929 = 1;
                }
                l_U2312 = 1;
            }
        }
        break;
        case 14:
        SET_PLAYER_CONTROL( sub_3215(), 1 );
        sub_13122();
        l_U2279 = 15;
        l_U2278 = 1;
        break;
    }
    if (NOT l_U2305)
    {
        l_U2305 = 1;
    }
    if (DOES_BLIP_EXIST( l_U1807 ))
    {
        REMOVE_BLIP( l_U1807 );
    }
    if (NOT l_U2308)
    {
        if (NOT (IS_CHAR_DEAD( l_U1788 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U1788, "missroman7", "plead" ))
            {
                l_U2308 = 1;
            }
        }
    }
    else if (NOT l_U2309)
    {
        if (NOT (IS_CHAR_DEAD( l_U1788 )))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U1788, "missroman7", "plead" )))
            {
                TASK_PLAY_ANIM_WITH_FLAGS( l_U1788, "plead", "missroman7", 8.00000000, 0, 131 );
                l_U2308 = 0;
            }
        }
    }
    return;
}

void sub_64513()
{
    unknown uVar2;
    unknown uVar3;

    if (NOT (IS_CHAR_DEAD( l_U1806 )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
        {
            GET_CAR_CHAR_IS_USING( sub_5753(), ref uVar2 );
            if (IS_CHAR_IN_ANY_CAR( l_U1806 ))
            {
                if (IS_CHAR_IN_CAR( l_U1806, uVar2 ))
                {
                    CLEAR_AREA( 805.75080000, 221.96040000, 5.66750000, 15.00000000, 1 );
                    SET_CAR_COORDINATES( uVar2, 805.75080000, 221.96040000, 5.66750000 );
                    SET_CAR_HEADING( uVar2, 351.38160000 );
                    SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_5753(), 802.29240000, 234.67830000, 5.01160000 );
                    SET_CHAR_HEADING( sub_5753(), 90.00000000 );
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( l_U1806, ref uVar3 );
                    CLEAR_AREA( 805.75080000, 221.96040000, 5.66750000, 15.00000000, 1 );
                    SET_CAR_COORDINATES( uVar3, 805.75080000, 221.96040000, 5.66750000 );
                    SET_CAR_HEADING( uVar3, 351.38160000 );
                    SET_CAR_ON_GROUND_PROPERLY( uVar3 );
                    CLEAR_AREA( 786.41600000, 200.38640000, 5.65720000, 15.00000000, 1 );
                    SET_CAR_COORDINATES( uVar2, 786.41600000, 200.38640000, 5.65720000 );
                    SET_CAR_HEADING( uVar2, 80.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_5753(), 802.29240000, 234.67830000, 5.01160000 );
                    SET_CHAR_HEADING( sub_5753(), 90.00000000 );
                }
            }
            else
            {
                CLEAR_AREA( 786.41600000, 200.38640000, 5.65720000, 15.00000000, 1 );
                SET_CAR_COORDINATES( uVar2, 786.41600000, 200.38640000, 5.65720000 );
                SET_CAR_HEADING( uVar2, 80.00000000 );
                SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                WARP_CHAR_FROM_CAR_TO_COORD( sub_5753(), 802.29240000, 234.67830000, 5.01160000 );
                SET_CHAR_HEADING( sub_5753(), 90.00000000 );
            }
        }
    }
    return;
}

void sub_65097()
{
    int I;
    unknown uVar3;

    if (DOES_BLIP_EXIST( l_U1807 ))
    {
        REMOVE_BLIP( l_U1807 );
    }
    if (NOT (IS_CHAR_DEAD( l_U1806 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U1806 )))
        {
            if (IS_GROUP_MEMBER( l_U1806, sub_13200() ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U1806 );
            }
            SET_CHAR_PROOFS( l_U1806, 1, 1, 1, 1, 1 );
            SET_CHAR_COORDINATES( l_U1806, 791.54640000, 204.75930000, 5.02530000 );
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U1806, ref uVar3 );
            if (LOCATE_CAR_3D( uVar3, 784.01070000, 238.48520000, 4.50620000, 9.00000000, 14.00000000, 3.00000000, 0 ))
            {
                CLEAR_AREA( 805.75080000, 221.96040000, 5.66750000, 15.00000000, 1 );
                SET_CAR_COORDINATES( uVar3, 805.75080000, 221.96040000, 5.66750000 );
                SET_CAR_HEADING( uVar3, 351.38160000 );
                SET_CAR_ON_GROUND_PROPERLY( uVar3 );
            }
        }
        SET_CHAR_PROOFS( l_U1806, 1, 1, 1, 1, 1 );
    }
    if (NOT (IS_CAR_DEAD( l_U1793 )))
    {
        if (LOCATE_CAR_3D( l_U1793, 784.01070000, 238.48520000, 4.50620000, 9.00000000, 14.00000000, 3.00000000, 0 ))
        {
            SET_CAR_COORDINATES( l_U1793, 811.42140000, 233.93710000, 5.62540000 );
            SET_CAR_HEADING( l_U1793, 333.43580000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U1793 );
        }
    }
    for ( I = 0; I <= 9; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2244[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U2244[I] )))
            {
                if (LOCATE_CAR_3D( l_U2244[I], 784.01070000, 238.48520000, 4.50620000, 9.00000000, 14.00000000, 3.00000000, 0 ))
                {
                    DELETE_CAR( ref l_U2244[I] );
                }
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U2243 ))
    {
        if (NOT (IS_CAR_DEAD( l_U2243 )))
        {
            if (LOCATE_CAR_3D( l_U2243, 784.01070000, 238.48520000, 4.50620000, 9.00000000, 14.00000000, 3.00000000, 0 ))
            {
                DELETE_CAR( ref l_U2243 );
            }
        }
    }
    return;
}

void sub_68979(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_13903( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

int sub_70968(unknown uParam0)
{
    int iVar3;

    GET_CURRENT_CHAR_WEAPON( sub_5753(), ref iVar3 );
    if ((iVar3 != 7) AND (iVar3 != 9))
    {
        return 0;
    }
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( sub_5753() )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if (((IS_CONTROL_JUST_PRESSED( 0, 4 )) AND ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3215(), uParam0 )) AND (NOT IS_USING_CONTROLLER()))) || (GET_CHAR_MELEE_ACTION_FLAG0( uParam0 )))
                {
                    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( sub_5753() ))))
                    {
                        SET_CHAR_READY_TO_BE_EXECUTED( uParam0, 0 );
                        SET_CHAR_MELEE_ACTION_FLAG0( uParam0, 0 );
                        CLEAR_HELP();
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_72200(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    float fVar7;
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

    GET_CHAR_COORDINATES( sub_5753(), ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
    if (l_U2271)
    {
        if (uVar16._fU0 != 783.59960000)
        {
            ;
        }
    }
    switch (l_U2259)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_3215(), 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 100.00000000, 1 );
        FREEZE_CHAR_POSITION( sub_5753(), 1 );
        SET_CHAR_COLLISION( sub_5753(), 0 );
        SET_CHAR_COORDINATES( sub_5753(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
        SET_CHAR_HEADING( sub_5753(), uParam3 );
        l_U2271 = 1;
        sub_34124( "Coords set..." );
        BEGIN_CAM_COMMANDS( ref l_U1827 );
        CLEAR_AREA_OF_CARS( 784.22860000, 235.47090000, 3.50000000, 20.00000000 );
        sub_65097();
        if (sub_13903( l_U1778 ))
        {
            sub_14087( ref l_U1778, 0 );
        }
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_5753(), -0.03500000, 2.86000000, 0.00000000, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( uVar13._fU0, uVar13._fU4, uVar13._fU8, ref uVar9 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( uParam4 );
            SET_CHAR_COORDINATES( uParam4, uVar13._fU0, uVar13._fU4, uVar9 );
            GET_CHAR_HEADING( sub_5753(), ref uVar8 );
            SET_CHAR_HEADING( uParam4, uVar8 + 188.78820000 );
            SET_CHAR_COORDINATES( uParam4, uVar13._fU0, uVar13._fU4, uVar9 );
            SET_CHAR_PROOFS( uParam4, 1, 0, 0, 0, 0 );
            UNLOCK_RAGDOLL( uParam4, 0 );
            TASK_PLAY_ANIM_WITH_FLAGS( l_U1788, "victim", "missroman7", 1000.00000000, 0, 32 );
        }
        TASK_PLAY_ANIM_WITH_FLAGS( sub_5753(), "player_execute", "missroman7", 1000.00000000, 0, 32 );
        sub_34124( "Player playing anim...." );
        CREATE_CAM( 14, ref l_U1900[0] );
        SET_CAM_POS( l_U1900[0], 784.16520000, 236.07560000, 5.08977200 );
        SET_CAM_ROT( l_U1900[0], 0.03296100, -0.00000000, 112.25480000 );
        SET_CAM_FOV( l_U1900[0], 30.30004000 );
        SET_CAM_ACTIVE( l_U1900[0], 1 );
        SET_CAM_PROPAGATE( l_U1900[0], 1 );
        CREATE_CAM( 14, ref l_U1900[1] );
        SET_CAM_POS( l_U1900[1], 784.16520000, 236.07560000, 5.08977200 );
        SET_CAM_ROT( l_U1900[1], 0.03296100, -0.00000000, 112.25480000 );
        SET_CAM_FOV( l_U1900[1], 19.50000000 );
        SET_CAM_ACTIVE( l_U1900[1], 1 );
        SET_CAM_PROPAGATE( l_U1900[1], 0 );
        CREATE_CAM( 3, ref l_U1900[2] );
        SET_CAM_ACTIVE( l_U1900[2], 0 );
        SET_CAM_PROPAGATE( l_U1900[2], 0 );
        CREATE_CAM( 14, ref l_U1900[3] );
        SET_CAM_POS( l_U1900[3], 778.58910000, 235.69500000, 5.05168400 );
        SET_CAM_ROT( l_U1900[3], -7.41549300, 0.00000000, -111.03740000 );
        SET_CAM_FOV( l_U1900[3], 30.30004000 );
        SET_CAM_ACTIVE( l_U1900[3], 0 );
        SET_CAM_PROPAGATE( l_U1900[3], 0 );
        CREATE_CAM( 14, ref l_U1900[4] );
        SET_CAM_POS( l_U1900[4], 777.32280000, 234.84980000, 3.75000000 );
        SET_CAM_ROT( l_U1900[4], 12.61452000, 0.00000000, -91.36498000 );
        SET_CAM_FOV( l_U1900[4], 41.40001000 );
        SET_CAM_ACTIVE( l_U1900[4], 0 );
        SET_CAM_PROPAGATE( l_U1900[4], 0 );
        GET_GAME_TIMER( ref l_U2260 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        GET_GAME_TIMER( ref l_U2260 );
        l_U2259 = 1;
        break;
        case 1:
        if (NOT l_U2269)
        {
            GET_GAME_TIMER( ref l_U2261 );
            if ((l_U2261 - l_U2260) > 100)
            {
                sub_14920( "R7_THREAT", ref l_U2262, 6, 1 );
                SET_CAM_ACTIVE( l_U1900[0], 0 );
                SET_CAM_PROPAGATE( l_U1900[0], 0 );
                SET_CAM_INTERP_STYLE_CORE( l_U1900[2], l_U1900[0], l_U1900[1], 15000, 0 );
                SET_CAM_ACTIVE( l_U1900[2], 1 );
                SET_CAM_PROPAGATE( l_U1900[2], 1 );
                l_U2269 = 1;
            }
        }
        if (IS_CHAR_PLAYING_ANIM( sub_5753(), "missroman7", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_5753(), "missroman7", "player_execute", ref fVar7 );
            if (fVar7 > 0.37500000)
            {
                SET_CAM_ACTIVE( l_U1900[3], 1 );
                SET_CAM_PROPAGATE( l_U1900[3], 1 );
                SET_CAM_ACTIVE( l_U1900[2], 0 );
                SET_CAM_PROPAGATE( l_U1900[2], 0 );
                l_U2259 = 2;
            }
        }
        break;
        case 2:
        if (IS_CHAR_PLAYING_ANIM( sub_5753(), "missroman7", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_5753(), "missroman7", "player_execute", ref fVar7 );
            if (fVar7 > 0.62500000)
            {
                SET_CAM_ACTIVE( l_U1900[4], 1 );
                SET_CAM_PROPAGATE( l_U1900[4], 1 );
                SET_CAM_ACTIVE( l_U1900[3], 0 );
                SET_CAM_PROPAGATE( l_U1900[3], 0 );
                if (NOT (IS_CHAR_DEAD( l_U1788 )))
                {
                    SET_CHAR_COMPONENT_VARIATION( uParam4, 0, 0, 1 );
                    SET_CHAR_COMPONENT_VARIATION( uParam4, 1, 0, 1 );
                }
                GET_GAME_TIMER( ref l_U2260 );
                l_U2259 = 4;
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_DEAD( uParam4 )))
        {
            if (IS_CHAR_PLAYING_ANIM( uParam4, "missroman7", "victim" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( uParam4, "missroman7", "victim", ref fVar7 );
                if (fVar7 >= 0.79500000)
                {
                    sub_14920( "R7_KILLED", ref l_U2272, 6, 1 );
                    GET_GAME_TIMER( ref l_U2260 );
                    l_U2259 = 5;
                }
            }
        }
        break;
        case 5:
        GET_GAME_TIMER( ref l_U2261 );
        if (NOT (sub_13903( l_U2272 )))
        {
            WAIT( 1500 );
            DO_SCREEN_FADE_OUT( 1500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_CAM_ACTIVE( l_U1900[2], 0 );
            SET_CAM_PROPAGATE( l_U1900[2], 0 );
            SET_CAM_ACTIVE( l_U1900[1], 0 );
            SET_CAM_PROPAGATE( l_U1900[1], 0 );
            SET_CAM_ACTIVE( l_U1900[0], 0 );
            SET_CAM_PROPAGATE( l_U1900[0], 0 );
            SET_CAM_ACTIVE( l_U1900[3], 0 );
            SET_CAM_PROPAGATE( l_U1900[3], 0 );
            SET_CAM_ACTIVE( l_U1900[4], 0 );
            SET_CAM_PROPAGATE( l_U1900[4], 0 );
            DESTROY_CAM( l_U1900[2] );
            DESTROY_CAM( l_U1900[1] );
            DESTROY_CAM( l_U1900[0] );
            DESTROY_CAM( l_U1900[3] );
            DESTROY_CAM( l_U1900[4] );
            if (NOT (IS_CHAR_DEAD( uParam4 )))
            {
                SET_CHAR_PROOFS( uParam4, 0, 0, 0, 0, 0 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_5753() );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            FREEZE_CHAR_POSITION( sub_5753(), 0 );
            SET_CHAR_COLLISION( sub_5753(), 1 );
            SET_PLAYER_CONTROL( sub_3215(), 1 );
            DISPLAY_RADAR( 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            END_CAM_COMMANDS( ref l_U1827 );
            SET_TIME_SCALE( 1.00000000 );
            l_U2259 = 6;
        }
        break;
        case 6:
        return 1;
        break;
    }
    if (NOT l_U2268)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_5753(), "missroman7", "player_execute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_5753(), "missroman7", "player_execute", ref fVar7 );
            if (fVar7 >= 0.47500000)
            {
                if (NOT (IS_CHAR_DEAD( uParam4 )))
                {
                    GET_PED_BONE_POSITION( sub_5753(), 1232, 0.24000000, 0.00000000, 0.05000000, ref l_U1785 );
                    GET_PED_BONE_POSITION( uParam4, 1205, 0.05000000, 0.07000000, 0.00000000, ref uVar10 );
                    FIRE_PED_WEAPON( sub_5753(), uVar10 );
                    TRIGGER_PTFX_ON_PED_BONE( "muz_pistol_small", sub_5753(), 0.24000000, 0.00000000, 0.05000000, 0.00000000, 0.00000000, 0.00000000, 1232, 1 );
                    l_U2268 = 1;
                }
            }
        }
    }
    if (NOT l_U2270)
    {
        if (NOT (# -NULL-0xc27bca()))
        {
            if (NOT (IS_CHAR_DEAD( uParam4 )))
            {
                if (IS_CHAR_PLAYING_ANIM( uParam4, "missroman7", "victim" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( uParam4, "missroman7", "victim", ref fVar7 );
                    if (fVar7 >= 0.65600000)
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "CS_execution_eye", uParam4, 0.05000000, 0.07000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1205, 1 );
                        PLAY_AUDIO_EVENT_FROM_PED( "UNCLE_VLAD_EXECUTION", uParam4 );
                        l_U2270 = 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_75190()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT l_U2306)
    {
        if (NOT l_U2305)
        {
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5753(), l_U1806, 20.00000000, 20.00000000, 20.00000000, 0 ))
                {
                    if (NOT (IS_GROUP_MEMBER( l_U1806, sub_13200() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5753(), l_U1806, 12.00000000, 12.00000000, 0 ))
                        {
                            if (DOES_BLIP_EXIST( l_U1807 ))
                            {
                                REMOVE_BLIP( l_U1807 );
                            }
                            SET_GROUP_MEMBER( sub_13200(), l_U1806 );
                            CLEAR_PRINTS();
                        }
                    }
                    else if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref l_U1803 );
                        if (IS_CHAR_IN_CAR( l_U1806, l_U1803 ))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U1789 )))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U1788 )))
                                {
                                    ADD_BLIP_FOR_CHAR( l_U1788, ref l_U1789 );
                                    CHANGE_BLIP_COLOUR( l_U1789, 1 );
                                    PRINT_NOW( "RM8_09", 7500, 1 );
                                }
                            }
                            if (DOES_BLIP_EXIST( l_U1807 ))
                            {
                                REMOVE_BLIP( l_U1807 );
                            }
                            if (NOT (sub_13903( l_U2280 )))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U1806 )))
                                {
                                    if (NOT l_U2313)
                                    {
                                        if (NOT (IS_CHAR_DEAD( l_U1788 )))
                                        {
                                            if (LOCATE_CHAR_IN_CAR_3D( sub_5753(), 804.74970000, 225.09090000, 6.03459900, 30.00000000, 30.00000000, 30.00000000, 0 ))
                                            {
                                                if (NOT (sub_13903( l_U2286 )))
                                                {
                                                    CLEAR_PRINTS();
                                                    sub_14920( "R7_CRASH3", ref l_U1766, 6, 0 );
                                                    REMOVE_CHAR_FROM_GROUP( l_U1806 );
                                                    l_U2313 = 1;
                                                    l_U2305 = 1;
                                                }
                                            }
                                            else if (l_U1828[11])
                                            {
                                                if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "RM8_11", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                                                {
                                                    if (NOT l_U2303)
                                                    {
                                                        if (LOCATE_CHAR_IN_CAR_3D( l_U1806, 810.89160000, 234.18620000, 6.05600000, 58.00000000, 76.00000000, 4.00000000, 0 ))
                                                        {
                                                            sub_34124( "Roman located" );
                                                            if (NOT l_U2302)
                                                            {
                                                                if (LOCATE_CHAR_ANY_MEANS_3D( l_U1788, 810.87450000, 234.26720000, 6.05460000, 7.00000000, 5.00000000, 4.00000000, 0 ))
                                                                {
                                                                    l_U2302 = 1;
                                                                }
                                                                else
                                                                {
                                                                    sub_34124( "Vlad not located" );
                                                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                                                    {
                                                                        sub_14087( ref l_U1760, 0 );
                                                                        sub_14920( "R7_CRASH2", ref l_U2286, 6, 0 );
                                                                        l_U2303 = 1;
                                                                    }
                                                                }
                                                            }
                                                            else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                                            {
                                                                sub_14087( ref l_U1760, 0 );
                                                                sub_14920( "R7_CRASH", ref l_U2286, 6, 0 );
                                                                l_U2303 = 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_5753(), 810.89160000, 234.18620000, 6.05600000, 100.00000000, 84.00000000, 4.00000000, 0 ))
                                            {
                                                PRINT_NOW( "RM8_11", 7500, 1 );
                                                l_U1828[11] = 1;
                                            };;;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            sub_34124( "Roman not in car!" );
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U1789 )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U1788 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U1788, ref l_U1789 );
                            CHANGE_BLIP_COLOUR( l_U1789, 1 );
                            PRINT_NOW( "RM8_09", 7500, 1 );
                        }
                    }
                    if (DOES_BLIP_EXIST( l_U1807 ))
                    {
                        REMOVE_BLIP( l_U1807 );
                    };;;
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( l_U1806 );
                    sub_34124( "Not close enough" );
                    if (DOES_BLIP_EXIST( l_U1789 ))
                    {
                        REMOVE_BLIP( l_U1789 );
                    }
                    if (sub_13903( l_U1772 ))
                    {
                        sub_16939( ref l_U1772 );
                    }
                    if (sub_13903( l_U1760 ))
                    {
                        sub_16939( ref l_U1760 );
                    }
                    if (DOES_BLIP_EXIST( l_U1807 ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U1806 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_5753(), l_U1806, 10.00000000, 10.00000000, 0 ))
                            {
                                REMOVE_BLIP( l_U1807 );
                                SET_GROUP_MEMBER( sub_13200(), l_U1806 );
                                CLEAR_PRINTS();
                            }
                        }
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            ;
                        }
                    }
                    else
                    {
                        ADD_BLIP_FOR_CHAR( l_U1806, ref l_U1807 );
                        CHANGE_BLIP_COLOUR( l_U1807, 3 );
                        CLEAR_PRINTS();
                        PRINT_NOW( "RM8_16", 7500, 1 );
                    }
                }
                if (IS_GROUP_MEMBER( l_U1806, sub_13200() ))
                {
                    sub_34124( "In group" );
                }
                else
                {
                    sub_34124( "Not in group" );
                }
            }
        }
    }
    if (NOT l_U2314)
    {
        if (NOT (IS_CHAR_INJURED( l_U1806 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U1806 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U1806, ref uVar2 );
                if (IS_CAR_ON_FIRE( uVar2 ))
                {
                    GET_CAR_COORDINATES( uVar2, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    CLEAR_CHAR_TASKS( l_U1806 );
                    TASK_SMART_FLEE_POINT( l_U1806, uVar3._fU0, uVar3._fU4, uVar3._fU8, 10.00000000, -1 );
                    l_U2314 = 1;
                }
            }
        }
    }
    return;
}

void sub_77571()
{
    boolean bVar2;
    int I;
    unknown uVar4;
    unknown uVar5;

    switch (l_U2875)
    {
        case 0:
        GET_GAME_TIMER( ref l_U1924 );
        if ((l_U2334) || ((l_U1924 - l_U1925) > 2500))
        {
            SET_PLAYER_CONTROL( sub_3215(), 0 );
            if (NOT l_U2334)
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_HELP();
            sub_77720();
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar4 );
            if (DOES_VEHICLE_EXIST( uVar4 ))
            {
                if (NOT (IS_CAR_DEAD( uVar4 )))
                {
                    if (LOCATE_CAR_3D( uVar4, 774.92180000, 236.13500000, 4.54980000, 30.00000000, 17.00000000, 2.00000000, 0 ))
                    {
                        GET_CAR_MODEL( uVar4, ref uVar5 );
                        SET_CAR_AS_MISSION_CAR( uVar4 );
                        SET_CAR_COORDINATES( uVar4, 798.53850000, 195.41150000, 5.03350000 );
                        SET_CAR_HEADING( uVar4, 326.75470000 );
                        if (NOT (IS_THIS_MODEL_A_BOAT( uVar5 )))
                        {
                            SET_CAR_ON_GROUND_PROPERLY( uVar4 );
                        }
                        APPLY_FORCE_TO_CAR( uVar4, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                    }
                }
            }
            CLEAR_AREA_OF_CARS( 774.92180000, 236.13500000, 4.54980000, 30.00000000 );
            for ( I = 0; I <= 18; I++ )
            {
                if (DOES_OBJECT_EXIST( l_U2828[I] ))
                {
                    DELETE_OBJECT( ref l_U2828[I] );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U2828[I] );
                }
            }
            for ( I = 0; I <= 6; I++ )
            {
                if (DOES_CHAR_EXIST( l_U2849[I] ))
                {
                    DELETE_CHAR( ref l_U2849[I] );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2849[I] );
                }
            }
            for ( I = 0; I <= 9; I++ )
            {
                if (DOES_VEHICLE_EXIST( l_U2244[I] ))
                {
                    if (NOT (IS_CAR_DEAD( l_U2244[I] )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_5753(), l_U2244[I] )))
                        {
                            DELETE_CAR( ref l_U2244[I] );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2244[I] );
                        }
                    }
                }
            }
            if (DOES_VEHICLE_EXIST( l_U2243 ))
            {
                if (NOT (IS_CAR_DEAD( l_U2243 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_5753(), l_U2243 )))
                    {
                        DELETE_CAR( ref l_U2243 );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2243 );
                    }
                }
            }
            if (DOES_VEHICLE_EXIST( l_U1793 ))
            {
                if (NOT (IS_CAR_DEAD( l_U1793 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_5753(), l_U1793 )))
                    {
                        DELETE_CAR( ref l_U1793 );
                    }
                    else
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1793 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U1817[0] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1817[0] );
            }
            if (DOES_CHAR_EXIST( l_U1817[1] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1817[1] );
            }
            if (DOES_CHAR_EXIST( l_U1806 ))
            {
                DELETE_CHAR( ref l_U1806 );
            }
            if (DOES_CHAR_EXIST( l_U1788 ))
            {
                DELETE_CHAR( ref l_U1788 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1788 );
            }
            if (DOES_CHAR_EXIST( l_U1796 ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1796 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( -129078589 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 729513832 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 293511358 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 529682743 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1358668114 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 535327133 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 850991848 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -714220780 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 52357603 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1757 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 904750859 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1759 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1756 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1349725314 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -956048545 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -196312163 );
            sub_4846( 0 );
            sub_4846( 1 );
            REMOVE_ANIMS( "MissRoman7" );
            for ( I = 0; I <= 25; I++ )
            {
                REMOVE_CAR_RECORDING( l_U2381[I]._fU32 );
            }
            CLEAR_AREA( 812.25720000, 244.74240000, 5.03260000, 30.00000000, 1 );
            CLEAR_AREA( 784.22860000, 235.47090000, 4.50510000, 8.00000000, 1 );
            SET_PLAYER_CONTROL( sub_3215(), 0 );
            START_CUTSCENE_NOW( "Rom8_c" );
            l_U2875 = 1;
        }
        break;
        case 1:
        if (HAS_CUTSCENE_LOADED())
        {
            if (NOT l_U2876)
            {
                l_U2876 = 1;
            }
            else
            {
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( "Rom8_c" );
                l_U2875 = 2;
            }
        }
        break;
        case 2:
        if (NOT bVar2)
        {
            CLEAR_AREA( 777.72090000, 243.87110000, 4.50003000, 20.00000000, 1 );
            LOAD_SCENE( 780.23130000, 236.83170000, 4.50000000 );
            SET_CHAR_COORDINATES( sub_5753(), 780.23130000, 236.83170000, 4.50000000 );
            SET_CHAR_HEADING( sub_5753(), 267.89580000 );
            SET_CHAR_VISIBLE( sub_5753(), 0 );
            if (DOES_CHAR_EXIST( l_U1806 ))
            {
                DELETE_CHAR( ref l_U1806 );
            }
            if (DOES_CHAR_EXIST( l_U1788 ))
            {
                DELETE_CHAR( ref l_U1788 );
            }
            bVar2 = true;
        }
        SET_CHAR_VISIBLE( sub_5753(), 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL( sub_3215(), 1 );
        WAIT( 2000 );
        DO_SCREEN_FADE_IN( 500 );
        sub_79423();
        break;
    }
    return;
}

void sub_77720()
{
    unknown uVar2;

    if (NOT (IS_CHAR_DEAD( l_U1806 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U1806 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U1806, ref uVar2 );
            CLEAR_AREA( 805.75080000, 221.96040000, 5.66750000, 15.00000000, 1 );
            SET_CAR_COORDINATES( uVar2, 805.75080000, 221.96040000, 5.66750000 );
            SET_CAR_HEADING( uVar2, 351.38160000 );
            SET_CAR_ON_GROUND_PROPERLY( uVar2 );
        }
        else
        {
            SET_CHAR_COORDINATES( l_U1806, 788.87320000, 207.33680000, 5.02020000 );
            SET_CHAR_VISIBLE( l_U1806, 0 );
        }
    }
    return;
}

void sub_79423()
{
    g_U9210 = 1;
    sub_79438();
    sub_91025();
    CLEAR_WANTED_LEVEL( sub_3215() );
    sub_96674( 7 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 58 );
    AWARD_ACHIEVEMENT( 20 );
    UNLOCK_MISSION_NEWS_STORY( 7 );
    sub_99895( 1018, 1 );
    sub_3014();
    return;
}

void sub_79438()
{
    sub_79447();
    return;
}

void sub_79447()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_79465();
    sub_79524( iVar2, iVar3, iVar4 );
    return;
}

void sub_79465()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_79524(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_79555( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_79555(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_79651( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_79651( ref cVar9 );
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
            sub_79651( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_79651( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_79651( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_79651( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_80228( iParam0, iVar7 );;;
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
                sub_80625( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_80625( 0, 4 );
            }
        }
    }
    if (NOT (sub_80714( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3215(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3215() );
    }
    sub_2112();
    bVar27 = true;
    uVar28 = sub_80228( iParam0, iVar7 );
    uVar29 = sub_1569( iParam0 );
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
                sub_90090( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_90520();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_90605( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_90662( iParam0 );
                sub_90701( 0 );
                sub_2010( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_90809();
        }
    }
    if (bParam2)
    {
        sub_90520();
        sub_90897();
        sub_90701( 0 );
    }
    if (bParam3)
    {
        sub_90520();
        sub_90937();
        sub_90701( 0 );
        sub_2010( uVar29, 0 );
    }
    sub_1456();
    return;
}

void sub_79651(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_80228(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1968( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_80625(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_80714(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_80922( uParam1 );
        break;
        case 1:
        bVar8 = sub_83000( uParam1 );
        break;
        case 2:
        bVar8 = sub_83226( uParam1 );
        break;
        case 3:
        bVar8 = sub_83376( uParam1 );
        break;
        case 4:
        bVar8 = sub_83654( uParam1 );
        break;
        case 5:
        bVar8 = sub_83957( uParam1 );
        break;
        case 6:
        bVar8 = sub_84156( uParam1 );
        break;
        case 7:
        bVar8 = sub_84382( uParam1 );
        break;
        case 8:
        bVar8 = sub_84617( uParam1 );
        break;
        case 9:
        bVar8 = sub_84992( uParam1 );
        break;
        case 10:
        bVar8 = sub_85239( uParam1 );
        break;
        case 11:
        bVar8 = sub_85378( uParam1 );
        break;
        case 12:
        bVar8 = sub_85677( uParam1 );
        break;
        case 13:
        bVar8 = sub_85905( uParam1 );
        break;
        case 14:
        bVar8 = sub_86192( uParam1 );
        break;
        case 15:
        bVar8 = sub_86474( uParam1 );
        break;
        case 16:
        bVar8 = sub_86756( uParam1 );
        break;
        case 17:
        bVar8 = sub_86957( uParam1 );
        break;
        case 18:
        bVar8 = sub_87030( uParam1 );
        break;
        case 19:
        bVar8 = sub_87244( uParam1 );
        break;
        case 20:
        bVar8 = sub_87497( uParam1 );
        break;
        case 21:
        bVar8 = sub_87744( uParam1 );
        break;
        case 22:
        bVar8 = sub_87945( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_82605( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_80228( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_88268( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_80922(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_81201( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_81201( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_81201( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_81201( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_81201( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_81201( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_81201( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_81201( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_81201( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_81201( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_81201( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_81201( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_81201( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_81201( iVar3, 0, 3, 1, 0, 0 );
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
        sub_81201( iVar3, 0, sub_82483(), sub_82749(), 0, 0 );
        break;
        default:
        sub_82908( "Friend 1", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Friend 1", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_81201(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_81212( uParam1 );
    sub_81386( uParam0, 0, uParam2 );
    sub_81386( uParam0, 1, uParam3 );
    sub_81386( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_79465();
    return;
}

void sub_81212(unknown uParam0)
{
    ADD_SCORE( sub_3215(), uParam0 );
    sub_81237( uParam0 );
    return;
}

void sub_81237(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1968( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_81386(unknown uParam0, int iParam1, int iParam2)
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
        sub_81543( uParam0 );
    }
    return;
}

void sub_81543(unknown uParam0)
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

int sub_82483()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_82605( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_82605(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_82749()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_82605( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_82908(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_83000(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81201( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_82908( "Contact 2", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 2", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83226(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_81201( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_82908( "Girl 3", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Girl 3", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83376(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_81201( iVar3, 0, sub_82483(), sub_82749(), 0, 0 );
        break;
        default:
        sub_82908( "Friend 4", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Friend 4", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83654(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81201( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_81201( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_81201( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_81201( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_82908( "Contact 5", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 5", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83957(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_82908( "Contact 7", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 7", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_84156(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81201( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_82908( "Contact 7b", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 7b", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_84382(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_81201( iVar3, 0, sub_82483(), sub_82749(), 0, 0 );
        break;
        default:
        sub_82908( "Friend 8", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Friend 8", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_84617(unknown uParam0)
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
        sub_81201( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_81201( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_81201( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_81201( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_81201( iVar3, 0, sub_82483(), sub_82749(), 0, 0 );
        break;
        default:
        sub_82908( "Friend 9", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Friend 9", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_84992(unknown uParam0)
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
        sub_81201( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_81201( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_81201( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_82908( "Contact 10", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_82908( "Contact 10", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_85239(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_82908( "Girl 11", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Girl 11", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_85378(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81201( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_81201( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_81201( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_81201( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_81201( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_82908( "Contact 12", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 12", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_85677(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81201( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_82908( "Contact 13", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 13", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_85905(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_81201( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_81201( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_81201( iVar3, 0, sub_82483(), sub_82749(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_82908( "Friend 15", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Friend 15", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_86192(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81201( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_81201( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_81201( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_82908( "Contact 16", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 16", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_86474(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_81201( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_81201( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_81201( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_82908( "Contact 18", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 18", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_86756(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_82908( "Contact 19", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 19", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_86957(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_82908( "Girl 20", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_87030(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_82908( "Contact 21", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 21", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_87244(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81201( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_81201( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_82908( "Contact 22", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 22", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_87497(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_81201( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_81201( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_81201( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_82908( "Contact 24", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 24", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_87744(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_81201( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_81201( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_81201( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_82908( "Contact 25", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_82908( "Contact 25", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_87945(unknown uParam0)
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
        sub_81201( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_82908( "Girl 26", 1 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_82908( "Girl 26", 0 );
        sub_81201( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_88268(int iParam0, int iParam1)
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
    if (sub_88316( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_89047( iParam1 );
    }
    return;
}

int sub_88316(int iParam0, int iParam1)
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
            sub_88456( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_88456(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_88638( 0 );
    return;
}

void sub_88638(boolean bParam0)
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
        sub_88893();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_88893()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_89047(int iParam0)
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
        sub_89380( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_89380( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_89380( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_89380( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_89380( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_89380( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_89380( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_89380( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_89380( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_89380( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_89380( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_89380( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_89380( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_89380( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_89380( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_89380( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_89380( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_89380( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_89380( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_89380(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_90090(unknown uParam0, unknown uParam1)
{
    sub_90109( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_90109(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_90520()
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

int sub_90605(int iParam0, int iParam1)
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

void sub_90662(unknown uParam0)
{
    sub_1355();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_90701(unknown uParam0)
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

void sub_90809()
{
    sub_90818();
    return;
}

void sub_90818()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_90897()
{
    sub_90818();
    return;
}

void sub_90937()
{
    sub_90818();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_91025()
{
    sub_91034();
    return;
}

void sub_91034()
{
    int iVar2;

    iVar2 = 1;
    sub_91048( iVar2 );
    return;
}

void sub_91048(unknown uParam0)
{
    unknown uVar3;

    g_U10981[uParam0]._fU4 = 1;
    uVar3 = sub_1569( uParam0 );
    sub_91082( uVar3 );
    sub_91185( "****** STRAND DEACTIVATING *******\n" );
    sub_91204( uParam0 );
    g_U15946[uVar3]._fU132._fU0 = 0;
    return;
}

void sub_91082(unknown uParam0)
{
    if (NOT g_U22274[uParam0]._fU0)
    {
        return;
    }
    g_U22274[uParam0]._fU0 = 0;
    g_U26439--;
    return;
}

void sub_91185(unknown uParam0)
{
    return;
}

void sub_91204(unknown uParam0)
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
    uVar4 = sub_1569( uParam0 );
    if ((g_U13391[uParam0]._fU80._fU0 == 1) || (g_U13391[uParam0]._fU80._fU0 == 0))
    {
        sub_91315( uParam0 );
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
                sub_95638( uParam0 );
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
        sub_96276( uParam0 );
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

void sub_91315(unknown uParam0)
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
        sub_91436( uParam0 );
        sub_93710( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_93998( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_93998( uParam0, iVar4 );
        break;
        case 6:
        sub_93998( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_94447( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_1968( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_91436(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 1)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 0)))
    {
        sub_91493( uParam0 );
        sub_91639( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_91493( uParam0 );
        sub_91829( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_91639( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 1)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 0)))
    {
        sub_91493( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_92952( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_91493( uParam0 );
    }
    return;
}

void sub_91493(unknown uParam0)
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

void sub_91639(unknown uParam0)
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

void sub_91829(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_91639( uParam0 );
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
        iVar8 = sub_80228( uParam0, iVar7 );
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
        default: sub_1968( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
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
        sub_92507( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

void sub_92507(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_92599( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_92599( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_92599( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_92599( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_92599( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_92599( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_92599(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_92952(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_91493( uParam0 );
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
        iVar8 = sub_80228( uParam0, iVar7 );
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
        default: sub_1968( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
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
        sub_92507( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_93710(unknown uParam0, boolean bParam1)
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

void sub_93998(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_93710( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_94136( uParam0, 0 );;
    sub_91436( uParam0 );
    return;
}

void sub_94136(unknown uParam0, boolean bParam1)
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

void sub_94447(int iParam0, boolean bParam1)
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
        sub_93710( iParam0, 0 );
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
    sub_94136( iParam0, 0 );
    if (bVar4)
    {
        sub_94656();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_94712();
        return;
    }
    sub_91436( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_95347( iParam0 );
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

void sub_94656()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_94712()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_3215() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
        {
            if (NOT (g_U15936._fU24 == -1))
            {
                uVar3 = g_U32697[g_U15936._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_5753(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15936._fU24;
    sub_94824();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_3215(), 0 );
    sub_94977();
    if (IS_PLAYER_PLAYING( sub_3215() ))
    {
        SET_PLAYER_CONTROL( sub_3215(), 1 );
    }
    return;
}

void sub_94824()
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

void sub_94977()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3215() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_5753() ))
    {
        l_U30 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_3215(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_5753() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_5753(), -488123221 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_5753(), 837858166 ))))
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
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_3215(), 1 );
    }
    else if (NOT l_U30)
    {
        return;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_3215(), 0 );;
    return;
}

void sub_95347(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_95638(unknown uParam0)
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
    uVar3 = sub_1569( uParam0 );
    DESTROY_THREAD( g_U13391[uParam0]._fU160._fU104 );
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    sub_95778( uParam0 );
    if (g_U13391[uParam0]._fU160._fU8)
    {
        g_U15946[uVar3]._fU8[0]._fU0[3] = 0;
    }
    return;
}

void sub_95778(unknown uParam0)
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

void sub_96276(unknown uParam0)
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
        sub_91436( uParam0 );
        sub_94136( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_93998( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_93998( uParam0, iVar4 );
        break;
        case 6:
        sub_93998( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_94447( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_1968( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_96674(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_96761( iParam0 ))
    {
        sub_97811( iParam0 );
    }
    return;
}

int sub_96761(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_96818( ref uVar3, 1, 0, 0 );
    sub_97430( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_14015( "\n ----------------------------------------------------------------" );
    sub_8858( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_14015( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_96818(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_96871( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_97003( iParam0 + 0 );
    }
    return;
}

void sub_96871(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_97003( iParam0 + 0 );
    }
    return;
}

void sub_97003(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_97034( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_97034(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_97430(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_97811(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_98022( 20, 6, 16383, 16383, ref uVar4 );
        sub_98698( ref uVar4, 7 );
        sub_98729( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_98022( 20, 7, 9, 16383, ref uVar4 );
        sub_98698( ref uVar4, 7 );
        sub_98729( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_98022(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_98046( uParam0, 0, iParam4 + 0 );
    sub_98046( uParam1, 1, iParam4 + 0 );
    sub_98046( uParam2, 2, iParam4 + 0 );
    sub_98046( uParam3, 3, iParam4 + 0 );
    sub_98046( 0, 4, iParam4 + 0 );
    sub_98046( 1, 5, iParam4 + 0 );
    sub_98046( 65535, 6, iParam4 + 0 );
    sub_98046( 0, 12, iParam4 + 0 );
    sub_98046( 0, 11, iParam4 + 0 );
    sub_98046( 0, 14, iParam4 + 0 );
    sub_98046( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_98046( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_98046( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_98046(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_98698(int iParam0, unknown uParam1)
{
    sub_98046( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_98729(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_98769())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_99456( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_99255( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_98769()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_98803( 5, g_U968[I] )) == 7)
        {
            sub_99255( I );
            return 1;
        }
    }
    return 0;
}

int sub_98803(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_99255(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_99328( 39 );
    return;
}

void sub_99328(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_99456(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_99517( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_99517(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_99895(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

int sub_99984()
{
    unknown uVar2;
    int iVar3;

    if (DOES_BLIP_EXIST( l_U1789 ))
    {
        REMOVE_BLIP( l_U1789 );
    }
    if (DOES_BLIP_EXIST( l_U1790 ))
    {
        REMOVE_BLIP( l_U1790 );
    }
    switch (l_U2227)
    {
        case 0:
        sub_100104( 0 );
        if (DOES_CHAR_EXIST( l_U1788 ))
        {
            DELETE_CHAR( ref l_U1788 );
        }
        if (DOES_VEHICLE_EXIST( l_U1793 ))
        {
            if (NOT (IS_CAR_DEAD( l_U1793 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_5753(), l_U1793 )))
                {
                    DELETE_CAR( ref l_U1793 );
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U1806 )))
        {
            l_U1929 = 0;
            GET_CHAR_HEALTH( l_U1806, ref iVar3 );
            if (iVar3 < 150)
            {
                SET_CHAR_HEALTH( l_U1806, 200 );
            }
            SET_CHAR_PROOFS( l_U1806, 1, 1, 1, 1, 1 );
            if (IS_CHAR_IN_ANY_CAR( l_U1806 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U1806, ref uVar2 );
                if (NOT (IS_VEH_DRIVEABLE( uVar2 )))
                {
                    l_U1929 = 1;
                    return 0;
                }
                SET_CAR_PROOFS( uVar2, 1, 1, 1, 1, 1 );
            }
        }
        if (sub_100539())
        {
            sub_14920( "R7_LOSEV", ref l_U2228, 6, 1 );
            l_U2227++;
        }
        else
        {
            l_U2227 = 10;
        }
        break;
        case 1:
        if (NOT (sub_13903( l_U2228 )))
        {
            l_U2227 = 10;
        }
        else if (NOT (IS_CHAR_DEAD( l_U1806 )))
        {
            GET_CHAR_HEALTH( l_U1806, ref iVar3 );
            if (iVar3 < 150)
            {
                SET_CHAR_HEALTH( l_U1806, 200 );
            }
        }
        break;
        case 10:
        PRINT_NOW( "RM8_56", 7000, 1 );
        l_U2227++;
        break;
        case 11:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            l_U2227 = 99;
        }
        break;
        case 99:
        return 1;
        break;
    }
    return 0;
}

void sub_100104(boolean bParam0)
{
    l_U540 = 0;
    sub_39816();
    l_U539 = 1;
    sub_40304();
    if (IS_PLAYER_PLAYING( sub_3215() ))
    {
        FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_3215(), 1.00000000 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_3215(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_42981() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_49318() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_42838() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_42866() );
    if ((NOT bParam0) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        sub_47353();
        sub_49624();
        sub_53265();
    }
    else
    {
        sub_53803();
        sub_27062();
    }
    return;
}

int sub_100539()
{
    if (NOT (IS_CHAR_DEAD( l_U1806 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5753(), l_U1806, 30.00000000, 30.00000000, 30.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_100849()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT l_U2234)
    {
        if (NOT sub_17623())
        {
            l_U2234 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U2235) AND (l_U2242 > 1)))
    {
        if (sub_17623())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U2235 = 1;
            l_U2242 = 3;
        }
    }
    switch (l_U2242)
    {
        case 0:
        l_U1809 = 0;
        if (sub_14223( 0, 1 ))
        {
            if (sub_9141())
            {
                sub_101068( 0 );
                sub_101208();
                if ((NOT (sub_101269( sub_5753() ))) AND (IS_CHAR_IN_ANY_CAR( sub_5753() )))
                {
                    GET_CAR_CHAR_IS_USING( sub_5753(), ref uVar2 );
                    SET_CAR_CAN_BE_DAMAGED( uVar2, 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U1806 )))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U1806 );
                    if ((NOT (sub_101269( l_U1806 ))) AND (IS_CHAR_IN_ANY_CAR( l_U1806 )))
                    {
                        GET_CAR_CHAR_IS_USING( l_U1806, ref uVar2 );
                        SET_CAR_CAN_BE_DAMAGED( uVar2, 0 );
                    }
                    if (IS_SCREEN_FADING_IN())
                    {
                        while (IS_SCREEN_FADING_IN())
                        {
                            WAIT( 0 );
                        }
                    }
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    SET_PLAYER_CONTROL( sub_3215(), 0 );
                    SET_USE_HIGHDOF( 1 );
                    REQUEST_ANIMS( "MISSPASS" );
                    while (NOT (HAVE_ANIMS_LOADED( "MISSPASS" )))
                    {
                        WAIT( 0 );
                    }
                    SWITCH_ROADS_OFF( 830.41220000, -460.22200000, 0.00000000, 836.53110000, -247.55760000, 100.00000000 );
                    SWITCH_PED_PATHS_OFF( 817.87360000, -295.89150000, 0.00000000, 830.97850000, -249.61660000, 100.00000000 );
                    DISPLAY_RADAR( 0 );
                    SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                    l_U2242 = 1;
                }
            }
        }
        break;
        case 1:
        REQUEST_COLLISION_AT_POSN( 819.51630000, -249.32690000, 14.96110000 );
        CLEAR_AREA( 819.51630000, -249.32690000, 14.96110000, 20.00000000, 1 );
        CLEAR_AREA_OF_CARS( 819.51630000, -249.32690000, 14.96110000, 20.00000000 );
        if (NOT (IS_CHAR_DEAD( l_U1806 )))
        {
            CLEAR_ROOM_FOR_CHAR( l_U1806 );
            CLEAR_ROOM_FOR_CHAR( sub_5753() );
            if ((NOT (IS_CHAR_IN_ANY_BOAT( sub_5753() ))) AND ((NOT (sub_101269( sub_5753() ))) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_5753() ))))
            {
                GET_CAR_CHAR_IS_USING( sub_5753(), ref uVar2 );
                if (NOT (IS_CHAR_IN_CAR( l_U1806, uVar2 )))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1806, uVar2, 0 );
                }
            }
            else if ((NOT (IS_CHAR_IN_ANY_BOAT( l_U1806 ))) AND ((NOT (sub_101269( l_U1806 ))) AND (IS_CHAR_IN_ANY_CAR( l_U1806 ))))
            {
                GET_CAR_CHAR_IS_USING( l_U1806, ref uVar2 );
                GET_DRIVER_OF_CAR( uVar2, ref iVar5 );
                SETTIMERA( 0 );
                while ((TIMERA() < 10000) AND (iVar5 != nil))
                {
                    WAIT( 0 );
                    GET_DRIVER_OF_CAR( uVar2, ref iVar5 );
                }
                GET_DRIVER_OF_CAR( uVar2, ref iVar5 );
                if (iVar5 == nil)
                {
                    CLEAR_CHAR_TASKS( sub_5753() );
                    if (NOT (IS_CHAR_DEAD( sub_5753() )))
                    {
                        if (NOT (IS_CAR_DEAD( uVar2 )))
                        {
                            WARP_CHAR_INTO_CAR( sub_5753(), uVar2 );
                        }
                    }
                }
            }
            else
            {
                uVar2 = sub_102341( 1349725314, 828.61590000, -274.90050000, 15.14650000, 179.10890000 );
            }
            LOAD_SCENE( 819.51630000, -249.32690000, 14.96110000 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                SET_CAR_COORDINATES( uVar2, 828.61590000, -274.90050000, 15.14650000 );
                SET_CAR_HEADING( uVar2, 179.10890000 );
                SET_CAR_ON_GROUND_PROPERLY( uVar2 );
            }
            CREATE_CAM( 14, ref l_U1900[0] );
            SET_CAM_POS( l_U1900[0], 832.67390000, -285.57900000, 16.85127000 );
            SET_CAM_ROT( l_U1900[0], 0.86043600, -0.00000000, 32.62260000 );
            SET_CAM_FOV( l_U1900[0], 33.60003000 );
            SET_CAM_ACTIVE( l_U1900[0], 1 );
            SET_CAM_PROPAGATE( l_U1900[0], 1 );
            SET_CAM_NEAR_DOF( l_U1900[0], 0.50000000 );
            SET_CAM_FAR_DOF( l_U1900[0], 35.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                CLEAR_ROOM_FOR_CHAR( l_U1806 );
            }
            if (NOT (IS_CHAR_DEAD( sub_5753() )))
            {
                CLEAR_ROOM_FOR_CHAR( sub_5753() );
            }
            CLEAR_PRINTS();
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            l_U2242 = 2;
        }
        break;
        case 2:
        if (NOT l_U1809)
        {
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U1806 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar3 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_5753() );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "bye", "MISSPASS", 1.00000000, 0, 0, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( uVar3 );
                    TASK_PERFORM_SEQUENCE( l_U1806, uVar3 );
                    CLEAR_SEQUENCE_TASK( uVar3 );
                }
                else
                {
                    TASK_LOOK_AT_CHAR( l_U1806, sub_5753(), -1, 0 );
                }
                TASK_LOOK_AT_CHAR( sub_5753(), l_U1806, -1, 0 );
                l_U1809 = 1;
            }
        }
        else
        {
            l_U1809 = 0;
            sub_14920( "R7_LOSTV", ref l_U2236, 6, 1 );
            l_U2242 = 3;
        }
        break;
        case 3:
        if (NOT l_U2235)
        {
            if (NOT l_U1809)
            {
                if (NOT (IS_CHAR_DEAD( l_U1806 )))
                {
                    if (NOT (sub_13903( l_U2236 )))
                    {
                        if (sub_20437( l_U1806, 1, 0 ))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar3 );
                            TASK_CLEAR_LOOK_AT( 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 818.75790000, -275.49060000, 14.33770000, 2, -1, 0.50000000 );
                            CLOSE_SEQUENCE_TASK( uVar3 );
                            TASK_PERFORM_SEQUENCE( l_U1806, uVar3 );
                            CLEAR_SEQUENCE_TASK( uVar3 );
                            GET_GAME_TIMER( ref l_U1925 );
                            l_U1809 = 1;
                        }
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U1806 )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U1806 ))
                        {
                            iVar4 = sub_68979( l_U2236 );
                            if (iVar4 >= 0)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_5753() );
                                if (sub_103433())
                                {
                                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "wave_in_car", "MISSPASS", 1.00000000, 0, 0, 0, 0, 0 );
                                }
                                else
                                {
                                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "wave", "MISSPASS", 1.00000000, 0, 0, 0, 0, 0 );
                                }
                                CLOSE_SEQUENCE_TASK( uVar3 );
                                if (NOT (IS_CHAR_INJURED( l_U1806 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U1806, uVar3 );
                                }
                                CLEAR_SEQUENCE_TASK( uVar3 );
                            }
                        }
                    }
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U1924 );
                if ((sub_20437( l_U1806, 1, 0 )) || ((l_U1924 - l_U1925) > 15000))
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    sub_13122();
                    DELETE_CHAR( ref l_U1806 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    SET_CAM_ACTIVE( l_U1900[0], 0 );
                    SET_CAM_PROPAGATE( l_U1900[0], 0 );
                    DESTROY_CAM( l_U1900[0] );
                    DISPLAY_RADAR( 1 );
                    SET_INSTANT_WIDESCREEN_BORDERS( 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_103844( 2 );
                }
            }
        }
        else if (DOES_CHAR_EXIST( l_U1806 ))
        {
            DELETE_CHAR( ref l_U1806 );
        }
        sub_13122();
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_ACTIVE( l_U1900[0], 0 );
        SET_CAM_PROPAGATE( l_U1900[0], 0 );
        DESTROY_CAM( l_U1900[0] );
        DISPLAY_RADAR( 1 );
        SET_INSTANT_WIDESCREEN_BORDERS( 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_USE_HIGHDOF( 0 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 830.41220000, -460.22200000, 0.00000000, 836.53110000, -247.55760000, 100.00000000 );
        DO_SCREEN_FADE_IN( 500 );
        sub_103844( 2 );;
        break;
    }
    return;
}

void sub_101068(unknown uParam0)
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

void sub_101208()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) > 0)
    {
        g_U2229 = 1;
    }
    return;
}

int sub_101269(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_101333( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_101333(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_102341(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    REQUEST_MODEL( uParam0 );
    while (NOT (HAS_MODEL_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    CREATE_CAR( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( Result );
    if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
    {
        WARP_CHAR_FROM_CAR_TO_CAR( sub_5753(), Result, -1 );
    }
    else
    {
        WARP_CHAR_INTO_CAR( sub_5753(), Result );
    }
    if (NOT (IS_CHAR_DEAD( l_U1806 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U1806 ))
        {
            WARP_CHAR_FROM_CAR_TO_CAR( l_U1806, Result, 0 );
        }
        else
        {
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1806, Result, 0 );
        }
    }
    return Result;
}

int sub_103433()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5753(), ref uVar2 );
        GET_CAR_MODEL( uVar2, ref uVar9 );
        GET_MODEL_DIMENSIONS( uVar9, ref uVar3, ref uVar6 );
        if (((uVar6._fU0 - uVar3._fU0) > 1.50000000) AND ((uVar6._fU8 - uVar3._fU8) < 1.35000000))
        {
            return 1;
        }
    }
    return 0;
}

void sub_103844(unknown uParam0)
{
    sub_101068( 0 );
    sub_103859();
    SET_PLAYER_MOOD_PISSED_OFF( sub_3215(), 150 );
    SAY_AMBIENT_SPEECH( sub_5753(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    switch (uParam0)
    {
        case 0: break;
        case 1:
        PRINT_NOW( "RM8_62", 7000, 1 );
        break;
        case 2: break;
    }
    sub_3014();
    return;
}

void sub_103859()
{
    sub_103868();
    return;
}

void sub_103868()
{
    int iVar2;

    iVar2 = 0;
    sub_103882( iVar2 );
    sub_2103( iVar2 );
    return;
}

void sub_103882(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3215(), 150 );
    CLEAR_HELP();
    sub_927( uParam0 );
    return;
}

void sub_104351()
{
    unknown uVar2;
    unknown uVar3;

    switch (l_U2943)
    {
        case 0:
        if (IS_CHAR_IN_ANY_CAR( sub_5753() ))
        {
            GET_CAR_CHAR_IS_USING( sub_5753(), ref uVar3 );
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U1806, uVar3 )))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1806, uVar3, 0 );
                }
                REMOVE_CHAR_FROM_GROUP( l_U1806 );
                TASK_LOOK_AT_CHAR( l_U1806, sub_5753(), -1, 0 );
                DISPLAY_RADAR( 0 );
                SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                CREATE_CAM( 14, ref l_U1900[0] );
                ATTACH_CAM_TO_VEHICLE( l_U1900[0], uVar3 );
                SET_CAM_ATTACH_OFFSET( l_U1900[0], 0.00000000, 0.75000000, 0.45000000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1900[0], 1 );
                POINT_CAM_AT_PED( l_U1900[0], sub_5753() );
                SET_CAM_POINT_OFFSET( l_U1900[0], 0.40000000, 0.00000000, 0.60000000 );
                SET_CAM_FOV( l_U1900[0], 50.00000000 );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U1900[0], 1 );
                SET_CAM_INHERIT_ROLL_VEHICLE( l_U1900[0], uVar3 );
                SET_CAM_ACTIVE( l_U1900[0], 1 );
                SET_CAM_PROPAGATE( l_U1900[0], 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                l_U2943 = 1;
            }
        }
        break;
        case 1:
        sub_104767();
        OPEN_SEQUENCE_TASK( ref uVar2 );
        TASK_LOOK_AT_CHAR( 0, sub_5753(), -2, 0 );
        CLOSE_SEQUENCE_TASK( uVar2 );
        if (NOT (IS_CHAR_DEAD( l_U1806 )))
        {
            ;
        }
        CLEAR_SEQUENCE_TASK( uVar2 );
        GET_GAME_TIMER( ref l_U1925 );
        l_U2943++;
        break;
        case 2:
        GET_GAME_TIMER( ref l_U1924 );
        if ((l_U1924 - l_U1925) > 5000)
        {
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                TASK_LEAVE_ANY_CAR( l_U1806 );
                l_U2943++;
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_5753() )))
        {
            SET_CAM_ACTIVE( l_U1900[0], 0 );
            SET_CAM_PROPAGATE( l_U1900[0], 0 );
            DESTROY_CAM( l_U1900[0] );
            DISPLAY_RADAR( 1 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            l_U2943++;
        }
        break;
    }
    return;
}

void sub_104767()
{
    SETTIMERB( 0 );
    while (NOT (IS_CONTROL_PRESSED( 2, 84 )))
    {
        WAIT( 0 );
        if (TIMERB() > 3000)
        {
            SETTIMERB( TIMERB() - 3000 );
        }
    }
    return;
}

void sub_105141()
{
    switch (l_U2948)
    {
        case 0:
        sub_9849( 1 );
        REQUEST_ANIMS( "Missroman7" );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        while ((NOT (HAVE_ANIMS_LOADED( "Missroman7" ))) || (NOT (sub_9881( 1 ))))
        {
            WAIT( 0 );
        }
        FORCE_WEATHER_NOW( 6 );
        LOAD_SCENE( 782.09960000, 235.58630000, 3.46470000 );
        if (DOES_CHAR_EXIST( l_U1806 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1806 )))
            {
                if (IS_GROUP_MEMBER( l_U1806, sub_13200() ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U1806 );
                }
                SET_CHAR_COORDINATES( l_U1806, 786.54280000, 243.91350000, 3.46470000 );
            }
        }
        SET_CHAR_COORDINATES( sub_5753(), 783.59960000, 235.58630000, 3.46470000 );
        SET_CHAR_HEADING( sub_5753(), 97.16790000 );
        sub_10006( 1 );
        SET_CHAR_COORDINATES( l_U1788, 780.38700000, 235.60800000, 3.46980000 );
        SET_CHAR_HEADING( l_U1788, 267.95610000 );
        SET_CHAR_COORDINATES( l_U1788, 780.38700000, 235.60800000, 3.46980000 );
        SET_CHAR_HEADING( l_U1788, 267.95610000 );
        CLEAR_ROOM_FOR_CHAR( l_U1788 );
        SET_CHAR_NEVER_TARGETTED( l_U1788, 0 );
        SET_CHAR_PROOFS( l_U1788, 0, 0, 0, 0, 0 );
        SET_CHAR_READY_TO_BE_EXECUTED( l_U1788, 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_14920( "R7_BEGS", ref l_U1778, 6, 1 );
        SET_PLAYER_CONTROL( sub_3215(), 1 );
        DO_SCREEN_FADE_IN( 500 );
        GIVE_WEAPON_TO_CHAR( sub_5753(), 7, 2000, 0 );
        SET_CURRENT_CHAR_WEAPON( sub_5753(), 7, 1 );
        ADD_BLIP_FOR_CHAR( l_U1788, ref l_U1789 );
        l_U2948++;
        break;
        case 1:
        if ((sub_70968( l_U1788 )) || (IS_KEYBOARD_KEY_PRESSED( 2 )))
        {
            l_U2948++;
        }
        else if (NOT (IS_CHAR_DEAD( l_U1788 )))
        {
            if (NOT (sub_13903( l_U1778 )))
            {
                sub_14920( "R7_BEGS", ref l_U1778, 6, 1 );
            }
        }
        break;
        case 2:
        if (sub_72200( 783.59960000, 235.58630000, 3.50150000, 97.16790000, l_U1788 ))
        {
            l_U2948 = 3;
        }
        break;
        case 3:
        if (IS_KEYBOARD_KEY_PRESSED( 3 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1788 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1788 );
                SET_CHAR_COORDINATES( l_U1788, 780.38700000, 235.60800000, 3.46980000 );
                SET_CHAR_HEADING( l_U1788, 267.95610000 );
                TASK_PLAY_ANIM_WITH_FLAGS( l_U1788, "plead", "missroman7", 8.00000000, 0, 147 );
                sub_14920( "R7_BEGS", ref l_U1778, 6, 1 );
                SET_CHAR_COORDINATES( sub_5753(), 782.09960000, 235.58630000, 3.46470000 );
                SET_CHAR_HEADING( sub_5753(), 90.00000000 );
                SET_CHAR_READY_TO_BE_EXECUTED( l_U1788, 1 );
                UNLOCK_RAGDOLL( l_U1788, 1 );
                l_U2259 = 0;
                l_U2268 = 0;
                l_U2269 = 0;
                l_U2270 = 0;
                l_U2271 = 0;
                l_U2948 = 1;
            }
        }
        if (IS_CHAR_DEAD( l_U1788 ))
        {
            ;
        }
        break;
    }
    if (IS_KEYBOARD_KEY_PRESSED( 4 ))
    {
        DO_SCREEN_FADE_IN( 500 );
    }
    return;
}

void sub_106258(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

