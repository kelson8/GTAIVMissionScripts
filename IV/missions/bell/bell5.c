void main()
{
    l_U102 = 0;
    l_U103 = 1;
    l_U104 = 3;
    l_U106 = 0;
    l_U123 = -1;
    l_U127 = 0;
    l_U128 = 1;
    l_U129 = 1;
    l_U137 = 150.00000000;
    l_U227 = 0;
    l_U228 = 150.00000000;
    l_U278 = 0;
    l_U481 = {0.00000000, 0.00000000, 0.00000000};
    l_U599 = {1.00000000, 1.00000000, 1.00000000};
    l_U602 = {0.00000000, 1.00000000, 0.00000000};
    l_U605 = {0.00000000, -1.00000000, 0.00000000};
    l_U618 = 0;
    l_U619 = 0;
    l_U630 = 100.00000000;
    l_U631 = 10.50000000;
    l_U632 = 0.50000000;
    l_U633 = 2.85000000;
    l_U648 = 1;
    l_U671 = 1;
    l_U690 = 1;
    l_U705 = {-1512.50000000, 157.55000000, 23.75000000};
    l_U708 = {-1512.50000000, 161.15000000, 23.75000000};
    l_U711 = 270.00000000;
    l_U712 = 90.00000000;
    l_U722 = 4000.00000000;
    l_U723 = {1.00000000, 0.00000000, -2.15000000};
    l_U2643 = {-1129.73400000, 417.01340000, 3.49990000};
    l_U2646 = {-1128.48400000, 416.61660000, 3.37250000};
    l_U2649 = 0.10000000;
    l_U2650 = 360;
    l_U2651 = 800;
    l_U2652 = -1.35000000;
    l_U2653 = 40.25000000;
    l_U2654 = 2.00000000;
    l_U2655 = 1.20000000;
    l_U2656 = 4.50000000;
    l_U2657 = 0.50000000;
    l_U2658 = {-0.20000000, -8.00000000, 1.90000000};
    l_U2661 = -0.10000000;
    l_U2662 = 0.18000000;
    l_U2665 = 0;
    l_U2666 = 0;
    l_U2667 = 0;
    l_U2668 = 3;
    l_U2669 = {1.08000000, -1.40000000, -1.70000000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_574();
        sub_2684();
    }
    else
    {
        sub_3047();
        l_U648 = 1;
    }
    while (l_U648)
    {
        sub_6991();
        switch (l_U645)
        {
            case 0:
            sub_7230();
            break;
            case 1:
            sub_12411();
            break;
            case 2:
            sub_19484();
            break;
            case 3:
            sub_28964();
            break;
            case 4:
            sub_29861();
            break;
            case 5:
            sub_30918();
            break;
            case 6:
            sub_36632();
            break;
            case 7:
            sub_38326();
            break;
            case -1: break;
        }
        if (l_U646)
        {
            sub_41266();
        }
        else if (l_U647)
        {
            sub_15047();
        }
        WAIT( 0 );
    }
    sub_2684();
    return;
}

void sub_574()
{
    sub_583();
    return;
}

void sub_583()
{
    int iVar2;

    iVar2 = 19;
    sub_597( iVar2 );
    sub_1773( iVar2 );
    return;
}

void sub_597(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_641();
        sub_802();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_910();
            sub_949();
        }
    }
    sub_1025();
    sub_1126();
    uVar5 = sub_1239( uParam0 );
    sub_1680( uVar5, 0 );
    return;
}

void sub_641()
{
    sub_655( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_755();
    }
    return;
}

void sub_655(int iParam0)
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

void sub_755()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_802()
{
    sub_811();
    return;
}

void sub_811()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_910()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_949()
{
    sub_958();
    return;
}

void sub_958()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1025()
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

void sub_1126()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1148();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1148()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1239(unknown uParam0)
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
    sub_1638( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1638(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1680(int iParam0, boolean bParam1)
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

void sub_1773(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1782();
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
        sub_2557();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1782()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1820( 5, g_U569[I] )) == 1))
        {
            if ((sub_1820( 1, g_U569[I] )) != 0)
            {
                sub_2106( I );
            }
        }
    }
    if (NOT sub_2272())
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

int sub_1820(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2106(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2191( g_U569 - 1 );
    return;
}

void sub_2191(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2272()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1820( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2557()
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

void sub_2684()
{
    SET_PED_IS_BLIND_RAGING( l_U628, 0 );
    REMOVE_CHAR_ELEGANTLY( ref l_U728 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    PRINTSTRING( "Removed blips" );
    PRINTNL();
    sub_2754();
    PRINTSTRING( "Removed models" );
    PRINTNL();
    sub_2865();
    PRINTSTRING( "Removed cover points" );
    PRINTNL();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_2994();
    return;
}

void sub_2754()
{
    int I;

    if (l_U517 != 0)
    {
        for ( I = 0; I <= (l_U517 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U484[I] );
        }
    }
    l_U517 = 0;
    return;
}

void sub_2865()
{
    int I;

    if (l_U527 != 0)
    {
        for ( I = 0; I <= (l_U527 - 1); I++ )
        {
            REMOVE_ANIMS( l_U518[I] );
        }
    }
    l_U527 = 0;
    return;
}

void sub_2994()
{
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3047()
{
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "BELL5", 0 );
    LOAD_ADDITIONAL_TEXT( "B5AUD", 6 );
    sub_3104( "B5AUD" );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    l_U628 = sub_3229();
    l_U629 = sub_3275();
    if (NOT (IS_CHAR_DEAD( l_U628 )))
    {
        GET_PLAYER_GROUP( l_U629, ref l_U627 );
    }
    sub_3359( 0, l_U628, "NIKO", 0 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U2635 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U2634 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2637 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U2636 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2638 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U2639 );
    LOAD_COMBAT_DECISION_MAKER( 5, ref l_U2640 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2637, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U2638, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2638, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U2639, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_RETREATING_BEHAVIOUR( l_U2640, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U2640, 2 );
    l_U732[0]._fU8 = {-1548.54600000, 145.44210000, 14.98770000};
    l_U732[0]._fU108 = "Tres_room";
    l_U732[0]._fU52 = 0;
    l_U732[0]._fU44 = 312.75700000;
    l_U732[0]._fU68 = 1;
    l_U732[1]._fU8 = {-1546.61300000, 150.27860000, 10.95590000};
    l_U732[1]._fU108 = "Tres_room";
    l_U732[1]._fU52 = 0;
    l_U732[1]._fU44 = 314.91600000;
    l_U732[1]._fU68 = 1;
    l_U732[2]._fU8 = {-1544.89200000, 150.47440000, 10.50930000};
    l_U732[2]._fU108 = "Tres_room";
    l_U732[2]._fU52 = 0;
    l_U732[2]._fU44 = 81.24630000;
    l_U1110[0]._fU8 = {-1542.68600000, 152.90870000, 14.72930000};
    l_U1110[0]._fU92 = {-1542.57800000, 156.49480000, 14.69390000};
    l_U1110[0]._fU108 = "Tres_room";
    l_U1110[0]._fU80 = 1;
    l_U1110[0]._fU44 = 180.16890000;
    l_U1110[0]._fU72 = 1;
    l_U1110[0]._fU68 = 1;
    l_U1110[1]._fU8 = {-1539.94500000, 148.62480000, 15.93480000};
    l_U1110[1]._fU108 = "Tres_room";
    l_U1110[1]._fU52 = 0;
    l_U1110[1]._fU44 = 120.68940000;
    l_U1110[2]._fU8 = {-1528.96600000, 141.78740000, 15.72880000};
    l_U1110[2]._fU108 = "Tres_room";
    l_U1110[2]._fU52 = 0;
    l_U1110[2]._fU44 = 14.04410000;
    l_U1110[3]._fU8 = {-1533.39900000, 147.16060000, 16.25780000};
    l_U1110[3]._fU108 = "Tres_room";
    l_U1110[3]._fU52 = 0;
    l_U1110[3]._fU44 = 117.82990000;
    l_U1488[0]._fU8 = {-1531.59400000, 139.84330000, 18.32360000};
    l_U1488[0]._fU92 = {-1531.59400000, 136.84330000, 18.32360000};
    l_U1488[0]._fU108 = "Tres_room";
    l_U1488[0]._fU44 = 3.18010000;
    l_U1488[0]._fU80 = 1;
    l_U1488[0]._fU72 = 1;
    l_U1488[1]._fU8 = {-1536.77400000, 140.55880000, 19.40270000};
    l_U1488[1]._fU108 = "Tres_room";
    l_U1488[1]._fU44 = 20.64010000;
    l_U1488[1]._fU72 = 1;
    l_U1488[1]._fU68 = 1;
    l_U1488[2]._fU8 = {-1542.98000000, 149.86000000, 18.76000000};
    l_U1488[2]._fU108 = "Tres_room";
    l_U1488[2]._fU52 = 0;
    l_U1488[2]._fU44 = 295.90920000;
    l_U1488[2]._fU72 = 1;
    l_U1488[3]._fU8 = {-1547.60900000, 152.59520000, 19.43080000};
    l_U1488[3]._fU108 = "Tres_room";
    l_U1488[3]._fU52 = 0;
    l_U1488[3]._fU44 = 304.74380000;
    l_U1488[3]._fU68 = 1;
    l_U1866[0]._fU8 = {-1536.13100000, 141.39690000, 22.12510000};
    l_U1866[0]._fU44 = 272.35900000;
    l_U1866[0]._fU108 = "tresstop";
    l_U1866[0]._fU52 = 0;
    l_U1866[0]._fU72 = 1;
    l_U1866[1]._fU8 = {-1542.34200000, 140.15140000, 22.18230000};
    l_U1866[1]._fU44 = 51.25000000;
    l_U1866[1]._fU108 = "tresstop";
    l_U1866[1]._fU80 = 1;
    l_U1866[1]._fU52 = 0;
    l_U1866[2]._fU8 = {-1532.49300000, 141.65030000, 23.18240000};
    l_U1866[2]._fU44 = 109.25830000;
    l_U1866[2]._fU108 = "tresstop";
    l_U1866[2]._fU52 = 0;
    l_U1866[8]._fU8 = {-1536.30700000, 139.92870000, 22.14710000};
    l_U1866[8]._fU44 = 66.40210000;
    l_U1866[8]._fU108 = "tresstop";
    l_U1866[8]._fU80 = 1;
    l_U1866[8]._fU92 = {-1534.63000000, 136.84000000, 22.76000000};
    l_U1866[8]._fU72 = 1;
    l_U1866[8]._fU52 = 0;
    l_U1866[3]._fU8 = {-1518.55500000, 154.53690000, 23.11900000};
    l_U1866[3]._fU44 = 202.41220000;
    l_U1866[3]._fU108 = "Tres_sideroom";
    l_U1866[4]._fU8 = {-1522.17800000, 143.38290000, 23.11900000};
    l_U1866[4]._fU44 = 160.97810000;
    l_U1866[4]._fU108 = "Tres_sideroom";
    l_U1866[5]._fU8 = {-1525.00300000, 141.95060000, 23.11900000};
    l_U1866[5]._fU44 = 182.24820000;
    l_U1866[5]._fU108 = "Tres_sideroom";
    l_U1866[6]._fU8 = {-1515.88500000, 171.18120000, 23.11910000};
    l_U1866[6]._fU44 = 178.03860000;
    l_U1866[6]._fU108 = "Tres_sideroom";
    l_U1866[7]._fU8 = {-1515.73900000, 164.10650000, 23.11910000};
    l_U1866[7]._fU44 = 201.28320000;
    l_U1866[7]._fU108 = "Tres_sideroom";
    l_U2244[0]._fU8 = {-1506.39700000, 178.74070000, 18.92600000};
    l_U2244[0]._fU44 = 224.69420000;
    l_U2244[0]._fU64 = 1;
    l_U2244[0]._fU52 = 0;
    l_U2244[1]._fU8 = {-1509.63500000, 173.88790000, 18.92600000};
    l_U2244[1]._fU44 = 169.73680000;
    l_U2244[1]._fU64 = 1;
    l_U2244[1]._fU52 = 0;
    l_U2244[2]._fU8 = {-1513.39900000, 178.11880000, 18.92600000};
    l_U2244[2]._fU44 = 236.89140000;
    l_U2244[2]._fU64 = 1;
    l_U2244[2]._fU52 = 1;
    l_U2244[2]._fU20 = {-1506.51700000, 170.26070000, 18.92600000};
    l_U2244[2]._fU32 = {6.00000000, 1.00000000, 1.50000000};
    l_U2244[2]._fU72 = 1;
    l_U2244[2]._fU68 = 1;
    l_U2244[3]._fU8 = {-1524.97600000, 179.75050000, 19.66010000};
    l_U2244[3]._fU44 = 259.30810000;
    l_U2244[3]._fU64 = 1;
    l_U2244[3]._fU52 = 0;
    l_U2244[5]._fU8 = {-1528.25100000, 153.95330000, 34.19000000};
    l_U2244[5]._fU44 = 244.02360000;
    l_U2244[5]._fU64 = 1;
    l_U2244[5]._fU52 = 4;
    l_U2244[5]._fU92 = {0.00000000, 1.00000000, 0.00000000};
    l_U2244[5]._fU80 = 1;
    l_U2244[5]._fU76 = 1;
    l_U2244[5]._fU72 = 1;
    l_U2244[6]._fU8 = {-1520.53700000, 175.66970000, 30.53910000};
    l_U2244[6]._fU44 = 16.99920000;
    l_U2244[6]._fU64 = 1;
    l_U2244[6]._fU52 = 4;
    l_U2244[6]._fU92 = {0.00000000, 1.00000000, 0.00000000};
    l_U2244[6]._fU72 = 1;
    l_U2244[7]._fU8 = {-1519.77200000, 164.25240000, 39.63280000};
    l_U2244[7]._fU44 = 71.00000000;
    l_U2244[7]._fU92 = {0.00000000, 1.00000000, 0.00000000};
    l_U2244[7]._fU76 = 1;
    l_U2244[7]._fU72 = 1;
    l_U2244[7]._fU64 = 1;
    l_U2244[8]._fU8 = {-1516.59200000, 196.81430000, 20.50790000};
    l_U2244[8]._fU44 = 182.47060000;
    l_U2244[8]._fU64 = 1;
    l_U2244[8]._fU52 = 0;
    l_U2244[8]._fU76 = 1;
    l_U2244[8]._fU64 = 1;
    l_U2244[9]._fU8 = {-1523.10100000, 191.58310000, 22.17120000};
    l_U2244[9]._fU44 = 3.88240000;
    l_U2244[9]._fU64 = 1;
    l_U2244[9]._fU52 = 4;
    l_U2244[9]._fU92 = {1.00000000, 0.00000000, 0.00000000};
    l_U2244[9]._fU76 = 1;
    l_U2244[9]._fU64 = 1;
    l_U2244[10]._fU8 = {-1525.03300000, 155.37970000, 27.16550000};
    l_U2244[10]._fU44 = 9.25410000;
    l_U2244[10]._fU64 = 1;
    l_U2244[10]._fU52 = 0;
    l_U2244[10]._fU76 = 1;
    l_U2244[10]._fU64 = 1;
    l_U2244[11]._fU8 = {-1522.05900000, 156.95870000, 27.16550000};
    l_U2244[11]._fU44 = 27.54370000;
    l_U2244[11]._fU64 = 1;
    l_U2244[11]._fU52 = 1;
    l_U2244[11]._fU76 = 1;
    l_U2244[11]._fU20 = {-1524.16900000, 166.70020000, 27.16550000};
    l_U2244[11]._fU32 = {1.50000000, 1.50000000, 1.50000000};
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1549.53400000, 141.44000000, 6.20000000, 0, 0, 90, ref l_U694[1] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U694[1], "Tres_room" );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 64015, 171, 32.46300000, 90, 0, 66.24000000, ref l_U694[3] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1506.06000000, 167.26000000, 18.01800000, 90, 0, 136.80000000, ref l_U694[4] );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -1538.52200000, 149.88500000, 14.95500000, 273.84000000, 0.92000000, 26.64000000, ref l_U694[5] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U694[5], "Tres_room" );
    CREATE_CAM( 14, ref l_U626 );
    CREATE_CAM( 14, ref l_U621 );
    CREATE_CAM( 14, ref l_U623 );
    CREATE_CAM( 3, ref l_U624 );
    SET_PLAYER_CONTROL( l_U629, 1 );
    return;
}

void sub_3104(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_3121();
    return;
}

void sub_3121()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_3229()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3275()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3359(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3439( "\n PED NUMBER ", uParam0 );
    sub_3479( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3439(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3479(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6991()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1532.59700000, 160.52860000, 11.39060000, 27.00000000, 30.00000000, 30.00000000, 0 ))
    {
        if (l_U681 == 0)
        {
            SET_CAR_DENSITY_MULTIPLIER( 0.10000000 );
            SET_PED_DENSITY_MULTIPLIER( 0.10000000 );
            l_U681 = 1;
        }
    }
    else if (l_U681 == 1)
    {
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        l_U681 = 0;
    }
    return;
}

void sub_7230()
{
    int iVar2;

    if (l_U649[l_U645] == 0)
    {
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U2623 );
        REQUEST_MODEL( 886934177 );
        while (NOT (HAS_MODEL_LOADED( 886934177 )))
        {
            WAIT( 0 );
        }
        if (DOES_VEHICLE_EXIST( l_U2623 ))
        {
            if ((sub_7339( l_U628, l_U2623 )) > 15.00000000)
            {
                PRINTSTRING( "Players last car didn't exist" );
                PRINTNL();
                CREATE_CAR( 886934177, -1125.87600000, 414.40230000, 3.37280000, ref l_U2623, 1 );
                SET_CAR_HEADING( l_U2623, 180.25120000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U2623 );
                SET_CAR_IN_CUTSCENE( l_U2623, 1 );
                SET_CAR_COLOUR_COMBINATION( l_U2623, 1 );
            }
            else
            {
                PRINTSTRING( "Players last car was close enough" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( l_U2623 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U2623 )))
                    {
                        SET_CAR_COORDINATES( l_U2623, -1125.87600000, 414.40230000, 3.37280000 );
                        SET_CAR_HEADING( l_U2623, 180.25120000 );
                        SET_CAR_AS_MISSION_CAR( l_U2623 );
                        SET_CAR_IN_CUTSCENE( l_U2623, 1 );
                    }
                    else
                    {
                        PRINTSTRING( "Players did exist but it was dead" );
                        PRINTNL();
                        CREATE_CAR( 886934177, -1125.87600000, 414.40230000, 3.37280000, ref l_U2623, 1 );
                        SET_CAR_HEADING( l_U2623, 180.25120000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U2623 );
                        SET_CAR_IN_CUTSCENE( l_U2623, 1 );
                        SET_CAR_COLOUR_COMBINATION( l_U2623, 1 );
                    }
                }
            }
        }
        else
        {
            PRINTSTRING( "Players last car didn't exist" );
            PRINTNL();
            CREATE_CAR( 886934177, -1125.87600000, 414.40230000, 3.37280000, ref l_U2623, 1 );
            SET_CAR_HEADING( l_U2623, 180.25120000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U2623 );
            SET_CAR_IN_CUTSCENE( l_U2623, 1 );
            SET_CAR_COLOUR_COMBINATION( l_U2623, 1 );
        }
        CLEAR_AREA( -1136.57700000, 415.65060000, 4.47740000, 9.00000000, 1 );
        if (g_U9893._fU24)
        {
            START_CUTSCENE_NOW( "B_5" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "B_5" );
        }
        sub_8155( 19 );
        LOAD_ALL_OBJECTS_NOW();
        while (NOT (sub_8866( 19 )))
        {
            PRINTSTRING( "Waiting for contact to load" );
            PRINTNL();
            WAIT( 0 );
        }
        sub_8991( 19, ref l_U728, l_U2646._fU0, l_U2646._fU4, l_U2646._fU8, 0.00000000 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U728, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U728, 1 );
        sub_3359( 1, l_U728, "BELL", 0 );
        ADD_BLIP_FOR_CHAR( l_U728, ref l_U2632 );
        CHANGE_BLIP_DISPLAY( l_U2632, 0 );
        SET_BLIP_AS_FRIENDLY( l_U2632, 1 );
        SET_CHAR_HEADING( l_U728, 231.07520000 );
        if (NOT (IS_CHAR_DEAD( l_U628 )))
        {
            SET_CHAR_COORDINATES( l_U628, l_U2643._fU0, l_U2643._fU4, l_U2643._fU8 );
        }
        SET_PLAYER_CONTROL( l_U629, 1 );
        SET_CHAR_HEADING( l_U628, 267.62230000 );
        if (DOES_VEHICLE_EXIST( l_U2623 ))
        {
            if ((NOT (IS_CAR_DEAD( l_U2623 ))) AND (NOT (IS_CHAR_DEAD( l_U728 ))))
            {
                GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U2623, ref iVar2 );
                if (iVar2 > 0)
                {
                    TASK_ENTER_CAR_AS_PASSENGER( l_U728, l_U2623, 10000, 0 );
                }
                else if (NOT (IS_CHAR_DEAD( l_U728 )))
                {
                    if (NOT (IS_GROUP_MEMBER( l_U728, l_U627 )))
                    {
                        SET_GROUP_MEMBER( l_U627, l_U728 );
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U728 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U728, l_U627 )))
            {
                SET_GROUP_MEMBER( l_U627, l_U728 );
            }
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( l_U629, 1 );
        ADD_BLIP_FOR_COORD( -1577.15700000, 145.22100000, 14.08800000, ref l_U2630 );
        SET_ROUTE( l_U2630, 1 );
        sub_11159( "B5_2GO", ref l_U639, 8, 1 );
        l_U649[l_U645] = 1;
    }
    if (NOT (sub_12139( l_U639 )))
    {
        PRINT_NOW( "B4GT_08", 7500, 1 );
        sub_12328();
        SETTIMERB( 0 );
        l_U645++;
    }
    return;
}

void sub_7339(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if ((NOT (IS_CAR_DEAD( uParam1 ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        GET_CAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    }
    else
    {
        return -1.00000000;
    }
    return VDIST( uVar4, uVar7 );
}

void sub_8155(unknown uParam0)
{
    REQUEST_MODEL( sub_8166( uParam0 ) );
    return;
}

int sub_8166(unknown uParam0)
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
    sub_1638( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_8866(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_8166( uParam0 ) );
}

void sub_8991(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_8166( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_9041( uParam0, (uParam1^) );
    return;
}

void sub_9041(unknown uParam0, unknown uParam1)
{
    sub_9053( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_9053(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_9147( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_9691( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_9147(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_9691(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_9147( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9147( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_9147( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_9147( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_9147( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_9147( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9147( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_9147( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_9147( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9147( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_9147( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9147( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_9147( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_11159(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_11180( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_11180(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_11234( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_11234(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_11256( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
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
    sub_11944( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_11256(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_11333( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_11333( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_11333( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_11333(unknown uParam0)
{
    return;
}

void sub_11944(int iParam0, int iParam1)
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

int sub_12139(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_11333( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_11333( "\n speech is not playing" );
    }
    return 0;
}

void sub_12328()
{
    int I;

    for ( I = 0; I <= 31; I++ )
    {
        l_U563[I] = 0;
    }
    return;
}

void sub_12411()
{
    if ((NOT (IS_CHAR_DEAD( l_U728 ))) AND (l_U649[l_U645] == 0))
    {
        if ((NOT (IS_CHAR_IN_ANY_HELI( l_U628 ))) AND ((sub_12544( 1, 1 )) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U728, -1577.15700000, 145.22100000, 14.08800000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1577.15700000, 145.22100000, 14.08800000, 2.50000000, 2.50000000, 2.50000000, 1 )))))
        {
            if (l_U649[l_U645] == 0)
            {
                SET_PLAYER_CONTROL( l_U629, 0 );
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
                LOAD_SCENE( -1548.73200000, 163.76580000, 9.48730000 );
                REMOVE_BLIP( l_U2630 );
                CREATE_CAM( 14, ref l_U626 );
                CLEAR_AREA_OF_CARS( -1581.87900000, 135.11540000, 12.25180000, 40.00000000 );
                CLEAR_AREA_OF_CHARS( -1581.87900000, 135.11540000, 12.25180000, 20.00000000 );
                SWITCH_ROADS_OFF( -1604.20000000, 111.33000000, 8.14000000, -1570.00000000, 213.68000000, 21.28000000 );
                DO_SCREEN_FADE_IN( 1000 );
                SET_CAM_POS( l_U621, -1590.96800000, 131.13470000, 12.19676000 );
                SET_CAM_ROT( l_U621, 12.98691000, -0.00000100, -53.53240000 );
                SET_CAM_FOV( l_U621, 55.00000000 );
                SET_CAM_POS( l_U623, -1590.96800000, 131.13470000, 12.19676000 );
                SET_CAM_ROT( l_U623, 12.98691000, -0.00000100, -53.53240000 );
                SET_CAM_FOV( l_U623, 50.00000000 );
                SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 5000, 0 );
                sub_13247( ref l_U626, 0 );
                sub_13247( ref l_U624, 1 );
                sub_13314( 1 );
                SETTIMERA( 0 );
                CLEAR_CHAR_TASKS( l_U628 );
                if (NOT (IS_CHAR_DEAD( l_U728 )))
                {
                    TASK_LOOK_AT_CHAR( l_U628, l_U728, 60000, 0 );
                }
                l_U649[l_U645] = 1;
            }
        }
    }
    if (TIMERB() > 8000)
    {
        l_U680 = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U728 )))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2623 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 886934177 );
        if ((IS_CHAR_SITTING_IN_ANY_CAR( l_U728 )) AND ((sub_13575( l_U628, l_U728 )) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (l_U687 == 0))))
        {
            if (NOT (IS_CHAR_DEAD( l_U728 )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U728, l_U627 )))
                {
                    SET_GROUP_MEMBER( l_U627, l_U728 );
                }
            }
            l_U680 = 1;
            PRINTSTRING( "Should have started speech" );
            PRINTNL();
            switch (g_U64968)
            {
                case 0:
                sub_11159( "B5_BANT1V1", ref l_U639, 8, 1 );
                g_U64968++;
                break;
                case 1:
                sub_11159( "B5_BANT1V2", ref l_U639, 8, 1 );
                g_U64968++;
                break;
                case 2:
                SAY_AMBIENT_SPEECH( l_U728, "Listen_to_radio", 0, 0, 0 );
                break;
            }
            l_U687 = 1;
        }
        else if ((IS_CHAR_SITTING_IN_ANY_CAR( l_U628 )) AND (sub_13575( l_U628, l_U728 )))
        {
            switch (g_U64968)
            {
                case 1:
                sub_14100( "B5_BANT1V1", ref l_U639, 8, 1 );
                break;
                case 2:
                sub_14100( "B5_BANT1V2", ref l_U639, 8, 1 );
                break;
            }
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 0 );
        }
        else if (l_U563[5] == 0)
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 1 );
            sub_14296( ref l_U639 );
        };;;
    }
    sub_14726();
    if ((l_U563[5] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1536.78200000, 156.83720000, 9.97990000, 150.00000000, 150.00000000, 150.00000000, 0 )))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 886934177 );
        sub_15673( 1656087115 );
        sub_15673( 1821991593 );
        sub_15673( -1971955454 );
        sub_15673( 122060873 );
        sub_15776( "move_gng@generic_b" );
        while (NOT sub_15866())
        {
            PRINTSTRING( "Waiting for models to load" );
            PRINTNL();
            WAIT( 0 );
        }
        while (NOT sub_16029())
        {
            PRINTSTRING( "Waiting for anims to load" );
            PRINTNL();
            WAIT( 0 );
        }
        CREATE_OBJECT( 122060873, l_U705._fU0, l_U705._fU4, l_U705._fU8, ref l_U703, 1 );
        FREEZE_OBJECT_POSITION( l_U703, 1 );
        CREATE_OBJECT( 122060873, l_U708._fU0, l_U708._fU4, l_U708._fU8, ref l_U704, 1 );
        FREEZE_OBJECT_POSITION( l_U704, 1 );
        CREATE_CAR( 1821991593, -1538.64000000, 158.33260000, 10.05180000, ref l_U2624[0], 1 );
        SET_CAR_HEADING( l_U2624[0], 92.30990000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2624[0] );
        CREATE_CAR( -1971955454, -1548.82700000, 160.09610000, 10.07570000, ref l_U2624[1], 1 );
        SET_CAR_HEADING( l_U2624[1], 304.49980000 );
        CREATE_CAR( -1971955454, -1544.05000000, 164.69810000, 10.09420000, ref l_U2624[2], 1 );
        SET_CAR_HEADING( l_U2624[2], 273.53980000 );
        CREATE_CHAR( 26, 1656087115, -1538.80200000, 152.77030000, 18.43160000, ref l_U729, 1 );
        SET_CHAR_HEADING( l_U729, 253.40340000 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U729, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U729, 1 );
        GIVE_WEAPON_TO_CHAR( l_U729, 12, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U729, 12, 0 );
        FREEZE_CHAR_POSITION( l_U729, 1 );
        SET_CHAR_NAME_DEBUG( l_U729, "Guy To Chase" );
        SET_CHAR_PROOFS( l_U729, 1, 1, 1, 1, 1 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U729, 24 );
        SET_CHAR_VISIBLE( l_U729, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U729, "tres_room" );
        sub_3359( 2, l_U729, "CHUBBY", 0 );
        SET_ANIM_GROUP_FOR_CHAR( l_U729, "move_gng@generic_b" );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, -1542.00000000, 154.60000000, 10.80000000, 1, 0.00000000 );
        l_U563[5] = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U728 )))
    {
        if (l_U649[l_U645] == 1)
        {
            if ((TIMERA() > 1000) AND (l_U563[0] == 0))
            {
                sub_16842( ref l_U639, 0 );
                sub_16983( "B5_ARR", 0, 1, ref l_U639, 8, 1 );
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U628 )))
                {
                    TASK_TURN_CHAR_TO_FACE_COORD( l_U628, -1552.32400000, 146.07570000, 10.68790000 );
                    if (NOT (IS_CHAR_DEAD( l_U728 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_COORD( l_U728, -1552.32400000, 146.07570000, 10.68790000 );
                    }
                }
                l_U563[0] = 1;
            }
            if ((NOT (sub_12139( l_U639 ))) AND ((l_U563[0] == 1) AND (l_U563[1] == 0)))
            {
                SET_CAM_POS( l_U626, -1538.43900000, 168.06550000, 19.51312000 );
                SET_CAM_ROT( l_U626, -39.08019000, -0.00000000, 143.01100000 );
                SET_CAM_FOV( l_U626, 70.00000000 );
                sub_13247( ref l_U626, 1 );
                sub_13247( ref l_U624, 1 );
                sub_16983( "B5_ARR", 1, 1, ref l_U639, 8, 1 );
                l_U563[1] = 1;
            }
            if ((NOT (sub_12139( l_U639 ))) AND ((l_U563[1] == 1) AND (l_U563[2] == 0)))
            {
                SET_CAM_POS( l_U626, -1563.70500000, 162.06790000, 11.00010000 );
                SET_CAM_ROT( l_U626, -11.46315000, -0.00000000, -168.27470000 );
                SET_CAM_FOV( l_U626, 55.49997000 );
                sub_13247( ref l_U626, 1 );
                sub_13247( ref l_U624, 0 );
                sub_16983( "B5_ARR", 2, 1, ref l_U639, 8, 1 );
                l_U563[2] = 1;
            }
            if ((NOT (sub_12139( l_U639 ))) AND ((l_U563[2] == 1) AND (l_U563[3] == 0)))
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                sub_13247( ref l_U626, 1 );
                sub_13247( ref l_U624, 0 );
                SET_CAM_POS( l_U626, -1587.38300000, 140.67490000, 13.61638000 );
                SET_CAM_ROT( l_U626, 4.14870400, -0.00000000, -59.23906000 );
                SET_CAM_FOV( l_U626, 45.00000000 );
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                sub_16983( "B5_ARR", 3, 0, ref l_U639, 8, 1 );
                if (NOT (IS_CHAR_DEAD( l_U728 )))
                {
                    if (IS_GROUP_MEMBER( l_U728, l_U627 ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U728 );
                    }
                }
                if (IS_CHAR_IN_ANY_CAR( l_U628 ))
                {
                    TASK_LEAVE_ANY_CAR( l_U628 );
                }
                while (IS_CHAR_IN_ANY_CAR( l_U628 ))
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U728 )))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( l_U728 )) || (IS_CHAR_IN_ANY_CAR( l_U728 )))
                    {
                        if (IS_CHAR_ON_ANY_BIKE( l_U728 ))
                        {
                            GIVE_PED_HELMET( l_U728 );
                        }
                        GET_CAR_CHAR_IS_USING( l_U728, ref l_U2628 );
                        if (NOT (IS_CAR_DEAD( l_U2628 )))
                        {
                            LOCK_CAR_DOORS( l_U2628, 3 );
                            if (IS_CHAR_ON_ANY_BIKE( l_U728 ))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U2642 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                TASK_ENTER_CAR_AS_DRIVER( 0, l_U2628, 10000 );
                                TASK_CAR_DRIVE_WANDER( 0, l_U2628, 20.00000000, 3 );
                                CLOSE_SEQUENCE_TASK( l_U2642 );
                                TASK_PERFORM_SEQUENCE( l_U728, l_U2642 );
                                CLEAR_SEQUENCE_TASK( l_U2642 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( l_U728 ))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U2642 );
                                TASK_SHUFFLE_TO_NEXT_CAR_SEAT( 0, l_U2628 );
                                TASK_CAR_DRIVE_WANDER( 0, l_U2628, 20.00000000, 3 );
                                CLOSE_SEQUENCE_TASK( l_U2642 );
                                TASK_PERFORM_SEQUENCE( l_U728, l_U2642 );
                                CLEAR_SEQUENCE_TASK( l_U2642 );
                            }
                        }
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref l_U2642 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1576.12000000, 129.48110000, 11.53330000, 2, 45000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1576.85400000, 105.98580000, 11.25930000, 2, 45000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1576.85400000, 65.83810000, 8.93170000, 2, 45000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1601.42700000, 30.63110000, 8.95250100, 2, 45000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1582.25100000, 26.74230000, 9.03740000, 2, 45000 );
                        TASK_WANDER_STANDARD( 0 );
                        CLOSE_SEQUENCE_TASK( l_U2642 );
                        TASK_PERFORM_SEQUENCE( l_U728, l_U2642 );
                        CLEAR_SEQUENCE_TASK( l_U2642 );
                    }
                }
                l_U563[3] = 1;
            }
            if (((IS_SCREEN_FADED_IN()) AND (sub_18469())) || ((NOT (sub_12139( l_U639 ))) AND ((l_U563[3] == 1) AND (l_U563[4] == 0))))
            {
                if (l_U563[3] == 0)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                sub_13247( ref l_U626, 0 );
                sub_13314( 0 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                sub_16842( ref l_U639, 0 );
                if (NOT (IS_CHAR_DEAD( l_U728 )))
                {
                    if (IS_GROUP_MEMBER( l_U728, l_U627 ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U728 );
                    }
                }
                if (IS_CHAR_IN_ANY_CAR( l_U628 ))
                {
                    TASK_LEAVE_ANY_CAR( l_U628 );
                }
                while (IS_CHAR_IN_ANY_CAR( l_U628 ))
                {
                    WAIT( 0 );
                }
                if ((l_U563[3] == 0) AND (NOT (IS_CHAR_DEAD( l_U728 ))))
                {
                    GET_CAR_CHAR_IS_USING( l_U728, ref l_U2628 );
                    if (DOES_VEHICLE_EXIST( l_U2628 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U2628 )))
                        {
                            SET_CAR_HEALTH( l_U2628, 1000 );
                            SET_ENGINE_HEALTH( l_U2628, 1000 );
                        }
                    }
                    if ((IS_CAR_DEAD( l_U2628 )) || ((IS_CHAR_ON_ANY_BIKE( l_U728 )) || (IS_CHAR_IN_ANY_CAR( l_U728 ))))
                    {
                        if (NOT (IS_CAR_DEAD( l_U2628 )))
                        {
                            if (IS_CHAR_ON_ANY_BIKE( l_U728 ))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U2642 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                TASK_ENTER_CAR_AS_DRIVER( 0, l_U2628, 10000 );
                                TASK_CAR_DRIVE_WANDER( 0, l_U2628, 20.00000000, 3 );
                                CLOSE_SEQUENCE_TASK( l_U2642 );
                                TASK_PERFORM_SEQUENCE( l_U728, l_U2642 );
                                CLEAR_SEQUENCE_TASK( l_U2642 );
                            }
                            else if (IS_CHAR_IN_ANY_CAR( l_U728 ))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U2642 );
                                TASK_SHUFFLE_TO_NEXT_CAR_SEAT( 0, l_U2628 );
                                TASK_CAR_DRIVE_WANDER( 0, l_U2628, 20.00000000, 3 );
                                CLOSE_SEQUENCE_TASK( l_U2642 );
                                TASK_PERFORM_SEQUENCE( l_U728, l_U2642 );
                                CLEAR_SEQUENCE_TASK( l_U2642 );
                            }
                        }
                    }
                    if (IS_CHAR_ON_FOOT( l_U728 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U2642 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1576.12000000, 129.48110000, 11.53330000, 2, 45000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1576.85400000, 105.98580000, 11.25930000, 2, 45000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1576.85400000, 65.83810000, 8.93170000, 2, 45000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1601.42700000, 30.63110000, 8.95250100, 2, 45000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1582.25100000, 26.74230000, 9.03740000, 2, 45000 );
                        TASK_WANDER_STANDARD( 0 );
                        CLOSE_SEQUENCE_TASK( l_U2642 );
                        CLEAR_CHAR_TASKS( l_U728 );
                        TASK_PERFORM_SEQUENCE( l_U728, l_U2642 );
                        CLEAR_SEQUENCE_TASK( l_U2642 );
                    }
                }
                SWITCH_ROADS_BACK_TO_ORIGINAL( -1604.20000000, 111.33000000, 10.14000000, -1570.00000000, 213.68000000, 21.28000000 );
                l_U645++;
                SET_WANTED_MULTIPLIER( 0.00000000 );
            }
        }
    }
    return;
}

int sub_12544(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3229() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3229(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3229() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3229(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3229()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3229() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3229() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3275() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3275() )))
    {
        return 0;
    }
    return 1;
}

void sub_13247(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

void sub_13314(boolean bParam0)
{
    if (bParam0)
    {
        BEGIN_CAM_COMMANDS( ref l_U620 );
    }
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    SET_PLAYER_CONTROL( l_U629, NOT bParam0 );
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    if (NOT bParam0)
    {
        END_CAM_COMMANDS( ref l_U620 );
    }
    return;
}

int sub_13575(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if ((NOT (IS_CHAR_DEAD( uParam1 ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
        }
        else
        {
            return 0;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))
        {
            GET_CAR_CHAR_IS_USING( uParam1, ref iVar5 );
        }
        else
        {
            return 0;
        }
        if (iVar4 == iVar5)
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

void sub_14100(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_14121( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

int sub_14121(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_11234( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_14296(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_11333( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_11333( "\n CONVERSATION PAUSED AT LINE " );
            sub_14452( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_11333( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_11333( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_11333( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_14452(unknown uParam0)
{
    return;
}

void sub_14726()
{
    if (DOES_CHAR_EXIST( l_U728 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U728 )))
        {
            if ((((sub_14781( l_U628, l_U728, 1 )) > 10.00000000) AND ((NOT (IS_CHAR_IN_ANY_CAR( l_U728 ))) AND (IS_CHAR_IN_ANY_CAR( l_U628 )))) || ((sub_14781( l_U628, l_U728, 1 )) > 30.00000000))
            {
                if ((sub_14781( l_U628, l_U728, 1 )) > (30.00000000 * 4.00000000))
                {
                    CHANGE_BLIP_DISPLAY( l_U2632, 0 );
                    PRINT_NOW( "BELLLST", 7500, 1 );
                    sub_15047();
                }
                else
                {
                    PRINT_NOW( "BELLLFT", 1, 1 );
                    CHANGE_BLIP_DISPLAY( l_U2632, 4 );
                    CHANGE_BLIP_DISPLAY( l_U2630, 0 );
                }
            }
            else if ((sub_14781( l_U628, l_U728, 1 )) < 12.00000000)
            {
                if ((l_U680 == 1) AND (NOT (IS_GROUP_MEMBER( l_U728, l_U627 ))))
                {
                    SET_GROUP_MEMBER( l_U627, l_U728 );
                }
                CHANGE_BLIP_DISPLAY( l_U2632, 0 );
                CHANGE_BLIP_DISPLAY( l_U2630, 4 );
            }
        }
        else
        {
            CHANGE_BLIP_DISPLAY( l_U2632, 0 );
            PRINT_NOW( "B4FAIL1", 7500, 1 );
            sub_15452( 19, l_U728, 19 );
            sub_15047();
        }
        if ((IS_CHAR_INJURED( l_U728 )) AND (IS_CHAR_IN_WATER( l_U728 )))
        {
            CHANGE_BLIP_DISPLAY( l_U2632, 0 );
            PRINT_NOW( "B4FAIL1", 7500, 1 );
            sub_15452( 19, l_U728, 19 );
            sub_15047();
        }
    }
    return;
}

void sub_14781(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if ((NOT (IS_CHAR_DEAD( uParam1 ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        GET_CHAR_COORDINATES( uParam1, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
        if (iParam2 == 0)
        {
            uVar5._fU8 = 0.00000000;
            uVar8._fU8 = 0.00000000;
        }
    }
    else
    {
        return -1.00000000;
    }
    return VDIST( uVar5, uVar8 );
}

void sub_15047()
{
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3275(), 150 );
        SAY_AMBIENT_SPEECH( l_U628, "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_15118();
    sub_2684();
    l_U648 = 0;
    return;
}

void sub_15118()
{
    sub_15127();
    return;
}

void sub_15127()
{
    int iVar2;

    iVar2 = 19;
    sub_15141( iVar2 );
    sub_1773( iVar2 );
    return;
}

void sub_15141(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3275(), 150 );
    CLEAR_HELP();
    sub_597( uParam0 );
    return;
}

void sub_15452(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_15673(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U484[l_U517] = uParam0;
    l_U517++;
    return;
}

void sub_15776(unknown uParam0)
{
    PRINTSTRING( "Requesting :" );
    PRINTSTRING( uParam0 );
    PRINTNL();
    REQUEST_ANIMS( uParam0 );
    l_U518[l_U527] = uParam0;
    l_U527++;
    return;
}

int sub_15866()
{
    int I;

    if (l_U517 != 0)
    {
        for ( I = 0; I <= (l_U517 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U484[I] )))
            {
                PRINTINT( I );
                PRINTNL();
                return 0;
            }
        }
    }
    return 1;
}

int sub_16029()
{
    int I;

    if (l_U527 != 0)
    {
        for ( I = 0; I <= (l_U527 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U518[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_16842(int iParam0, unknown uParam1)
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

void sub_16983(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_17008( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_17008(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_11234( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_18469()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_19484()
{
    unknown uVar2;
    unknown uVar3;

    if (l_U649[l_U645] == 0)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, -1542.00000000, 154.60000000, 10.80000000, 0, 0.00000000 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2624[0] );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1821991593 );
        if (l_U563[3] == 0)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        GET_INTERIOR_AT_COORDS( -1543.62500000, 160.89580000, 10.48680000, ref uVar2 );
        ACTIVATE_INTERIOR( uVar2, 1 );
        GET_INTERIOR_AT_COORDS( -1542.57800000, 153.49480000, 14.69390000, ref uVar2 );
        ACTIVATE_INTERIOR( uVar2, 1 );
        WAIT( 0 );
        sub_12328();
        TASK_CLEAR_LOOK_AT( l_U628 );
        STOP_PED_SPEAKING( l_U628, 1 );
        SET_PED_IS_BLIND_RAGING( l_U628, 1 );
        PRINT_NOW( "B4GT_06", 7500, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U2631 )))
        {
            ADD_BLIP_FOR_CHAR( l_U729, ref l_U2631 );
            CHANGE_BLIP_DISPLAY( l_U2631, 2 );
        }
        REQUEST_MODEL( -1180674815 );
        REQUEST_MODEL( 1976502708 );
        REQUEST_MODEL( 1543404628 );
        while ((NOT (HAS_MODEL_LOADED( 1543404628 ))) || ((NOT (HAS_MODEL_LOADED( 1976502708 ))) || (NOT (HAS_MODEL_LOADED( -1180674815 )))))
        {
            WAIT( 0 );
        }
        sub_19887( ref l_U732, 3, 60 );
        if ((NOT (IS_CHAR_DEAD( l_U732[1]._fU0 ))) AND (NOT (IS_CHAR_DEAD( l_U732[2]._fU0 ))))
        {
            TASK_LOOK_AT_CHAR( l_U732[2]._fU0, l_U732[1]._fU0, -2, 0 );
            TASK_LOOK_AT_CHAR( l_U732[2]._fU0, l_U732[1]._fU0, -2, 0 );
        }
        l_U649[l_U645] = 1;
    }
    sub_21533();
    if ((DOES_CHAR_EXIST( l_U728 )) AND ((sub_14781( l_U628, l_U728, 1 )) > 100.00000000))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1826458934 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 886934177 );
        if (NOT (IS_CHAR_DEAD( l_U628 )))
        {
            DELETE_CHAR( ref l_U728 );
        }
    }
    else if (DOES_CHAR_EXIST( l_U728 ))
    {
        if (IS_CHAR_DEAD( l_U728 ))
        {
            CHANGE_BLIP_DISPLAY( l_U2632, 0 );
            PRINT_NOW( "B4FAIL1", 7500, 1 );
            sub_16842( ref l_U639, 0 );
            sub_15452( 19, l_U728, 19 );
            sub_15047();
        }
    }
    if ((l_U669 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1542.85100000, 153.89600000, 10.50930000, 1.00000000, 1.00000000, 1.50000000, 0 )))
    {
        REMOVE_BLIP( l_U2630 );
        l_U669 = 1;
    }
    if ((l_U668 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1537.02300000, 150.25190000, 10.50370000, 4.50000000, 4.50000000, 1.00000000, 0 )))
    {
        PRINTSTRING( "Entered through basement attack a guy!" );
        PRINTNL();
        REMOVE_BLIP( l_U2630 );
        l_U668 = 1;
    }
    if (l_U563[0] == 0)
    {
        if ((LOCATE_CHAR_IN_CAR_3D( l_U628, -1541.98400000, 147.79680000, 6.88120000, 8.00000000, 9.00000000, 4.00000000, 0 )) || ((IS_EXPLOSION_IN_AREA( -1, -1549.64500000, 138.85950000, 4.95960000, -1533.85700000, 153.95090000, 21.31790000 )) || ((IS_PROJECTILE_IN_AREA( -1549.64500000, 138.85950000, 4.95960000, -1533.85700000, 153.95090000, 21.31790000 )) || ((IS_CHAR_SHOOTING( l_U628 )) || ((l_U669) || (l_U668))))))
        {
            sub_19887( ref l_U1110, 4, 40 );
            if (NOT (IS_CHAR_INJURED( l_U732[0]._fU0 )))
            {
                SAY_AMBIENT_SPEECH( l_U732[0]._fU0, "SHOCKED", 0, 0, 0 );
                TASK_COMBAT( l_U732[0]._fU0, l_U628 );
            }
            if (NOT (IS_CHAR_INJURED( l_U732[1]._fU0 )))
            {
                TASK_COMBAT( l_U732[1]._fU0, l_U628 );
            }
            if (NOT (IS_CHAR_INJURED( l_U732[2]._fU0 )))
            {
                TASK_COMBAT( l_U732[2]._fU0, l_U628 );
            }
            sub_19887( ref l_U1488, 4, 25 );
            l_U563[0] = 1;
        }
    }
    if (l_U563[0] == 0)
    {
        sub_23004();
    }
    if ((l_U563[1] == 0) AND ((l_U670 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1540.79800000, 148.22170000, 36.26900000, 4.80000000, 4.00000000, 1.50000000, 0 ))))
    {
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            SET_CHAR_COORDINATES( l_U729, -1530.65000000, 143.27970000, 23.14710000 );
            SET_CHAR_HEADING( l_U729, 102.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U729, "tresstop" );
            CREATE_CAM( 14, ref l_U626 );
            SET_CAM_POS( l_U626, -1533.79400000, 146.48670000, 27.39616000 );
            SET_CAM_ROT( l_U626, -41.80437000, 0.00000100, -133.30850000 );
            PRINT_NOW( "B4GT_02", 7500, 1 );
            l_U691 = 1;
        }
        sub_19887( ref l_U1866, 8, 50 );
        l_U563[7] = 1;
        l_U563[12] = 1;
        l_U670 = 1;
    }
    if (l_U563[0] == 0)
    {
        sub_23810( ref l_U732, 3 );
    }
    if (l_U563[3] == 0)
    {
        sub_23810( ref l_U1110, 4 );
    }
    sub_23810( ref l_U1488, 12 );
    if (l_U563[0] == 1)
    {
        sub_23882( ref l_U732, 3 );
        sub_23882( ref l_U1110, 4 );
        sub_23882( ref l_U1488, 12 );
    }
    if ((l_U563[11] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1548.47000000, 142.92530000, 15.73390000, 1.50000000, 7.00000000, 2.00000000, 0 )))
    {
        l_U563[11] = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1545.24000000, 138.83490000, 6.87140000, 1.00000000, 1.00000000, 1.00000000, 0 ))
    {
        if ((l_U563[9] == 0) AND (l_U563[8] == 1))
        {
            PRINT_NOW( "B4GT_06", 4000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U729 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U2631 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U729, ref l_U2631 );
                    SET_BLIP_AS_FRIENDLY( l_U2631, 0 );
                }
                CHANGE_BLIP_DISPLAY( l_U2631, 4 );
            }
            REMOVE_BLIP( l_U2630 );
        }
        l_U563[9] = 1;
    }
    if (l_U563[1] == 0)
    {
        if ((l_U691 == 1) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1531.73600000, 145.22810000, 16.41890000, 2.00000000, 7.00000000, 2.00000000, 0 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U729 )))
            {
                FREEZE_CHAR_POSITION( l_U729, 0 );
                SET_CHAR_VISIBLE( l_U729, 1 );
                CHANGE_BLIP_DISPLAY( l_U2631, 4 );
            }
            WAIT( 1000 );
            if (l_U670 == 0)
            {
                CREATE_CAM( 14, ref l_U626 );
                SET_CAM_POS( l_U626, -1529.64500000, 151.67030000, 18.76024000 );
                SET_CAM_ROT( l_U626, 7.23211300, -0.00000000, 99.92352000 );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U729, 0, 0, 3000 );
            if (NOT (IS_CHAR_DEAD( l_U729 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar3 );
                TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, -1529.07100000, 143.28130000, 23.18250000, 3, 10000, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar3 );
                TASK_PERFORM_SEQUENCE( l_U729, uVar3 );
                CLEAR_SEQUENCE_TASK( uVar3 );
            }
            if (NOT (IS_CHAR_DEAD( l_U729 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U2631 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U729, ref l_U2631 );
                    SET_BLIP_AS_FRIENDLY( l_U2631, 0 );
                }
            }
            SETTIMERA( 0 );
            sub_11159( "B5_CHUB1", ref l_U639, 8, 1 );
            l_U563[1] = 1;
        }
    }
    if ((l_U672 == 0) AND ((NOT (sub_12139( l_U639 ))) AND (l_U563[1] == 1)))
    {
        PRINT_NOW( "B4GT_02", 7500, 1 );
        l_U672 = 1;
    }
    if ((l_U563[1] == 1) AND ((l_U563[7] == 0) AND (TIMERA() > 1000)))
    {
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            PRINTSTRING( "should have gone to the stairs -1531.2610 , 150.3342 , 17.4787" );
            PRINTNL();
        }
        SETTIMERA( 0 );
        l_U563[7] = 1;
    }
    if ((l_U679 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1538.37200000, 141.47240000, 23.29560000, 1.00000000, 1.00000000, 1.00000000, 0 )))
    {
        if (NOT (IS_CHAR_DEAD( l_U1866[0]._fU0 )))
        {
            SET_COMBAT_DECISION_MAKER( l_U1866[0]._fU0, l_U2637 );
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1866[0]._fU0 );
        }
        l_U679 = 1;
    }
    if ((l_U563[7] == 1) AND (l_U563[5] == 0))
    {
        sub_27894( l_U729, -1529.07100000, 143.28130000, 23.18250000, 0, 1 );
        PRINTSTRING( "Going to next bit" );
        PRINTNL();
        SETTIMERA( 0 );
        l_U563[5] = 1;
    }
    if ((l_U563[7] == 1) AND (l_U563[6] == 0))
    {
        if ((sub_24061( l_U729, 5.00000000, -1529.07100000, 143.28130000, 23.18250000, 0, 0 )) || (((TIMERA() > 5000) AND ((sub_14781( l_U628, l_U729, 1 )) < 10.00000000)) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1539.80500000, 146.26430000, 22.92540000, 5.00000000, 8.50000000, 1.00000000, 0 ))))
        {
            PRINTSTRING( "Go out the window" );
            PRINTNL();
            sub_27894( l_U729, -1523.18700000, 157.94220000, 23.11920000, 0, 1 );
            SETTIMERA( 0 );
            l_U563[6] = 1;
        }
    }
    if ((l_U563[12] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1548.27300000, 148.31740000, 20.18370000, 2.00000000, 2.00000000, 1.00000000, 0 )))
    {
        sub_19887( ref l_U1866, 8, 50 );
        l_U563[12] = 1;
    }
    if (l_U563[12] == 1)
    {
        sub_23882( ref l_U1866, 7 );
    }
    if (l_U672 == 1)
    {
        sub_28581();
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1524.04600000, 142.88200000, 23.11690000, 4.50000000, 4.50000000, 1.00000000, 0 ))
    {
        DELETE_OBJECT( ref l_U703 );
        DELETE_OBJECT( ref l_U704 );
        sub_28814( ref l_U732, 3 );
        sub_28814( ref l_U1110, 6 );
        l_U645++;
    }
    return;
}

void sub_19887(unknown uParam0, int iParam1, int iParam2)
{
    int iVar5;
    unknown uVar6;
    char[64] cVar7;
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if ((VMAG( (uParam0^)[I]._fU8 )) > 0.00000000)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar6 );
            switch (uVar6)
            {
                case 0:
                iVar5 = -1180674815;
                break;
                case 1:
                iVar5 = 1976502708;
                break;
                case 2:
                iVar5 = 1543404628;
                break;
            }
            switch (sub_20023( 0, 3 ))
            {
                case 0:
                (uParam0^)[I]._fU48 = 12;
                break;
                case 1:
                (uParam0^)[I]._fU48 = 7;
                break;
                case 2:
                (uParam0^)[I]._fU48 = 14;
                break;
            }
            CREATE_CHAR( 26, iVar5, (uParam0^)[I]._fU8._fU0, (uParam0^)[I]._fU8._fU4, (uParam0^)[I]._fU8._fU8, ref (uParam0^)[I]._fU0, 1 );
            if (iVar5 == 1976502708)
            {
                if ((sub_20023( 0, 10 )) > 5)
                {
                    SET_CHAR_PROP_INDEX( (uParam0^)[I]._fU0, 0, sub_20023( 0, 1 ) );
                }
            }
            if (iVar5 == -1180674815)
            {
                if ((sub_20023( 0, 10 )) > 5)
                {
                    SET_CHAR_PROP_INDEX( (uParam0^)[I]._fU0, 0, sub_20023( 0, 1 ) );
                }
            }
            if ((uParam0^)[I]._fU80)
            {
                (uParam0^)[I]._fU48 = 7;
                GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, (uParam0^)[I]._fU48, 100, 0 );
            }
            else
            {
                GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, (uParam0^)[I]._fU48, 100, 1 );
            }
            SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^)[I]._fU0 );
            ADD_BLIP_FOR_CHAR( (uParam0^)[I]._fU0, ref (uParam0^)[I]._fU4 );
            CHANGE_BLIP_DISPLAY( (uParam0^)[I]._fU4, 0 );
            if ((uParam0^)[I]._fU76 == 1)
            {
                SET_PED_PATH_MAY_DROP_FROM_HEIGHT( (uParam0^)[I]._fU0, 0 );
                SET_PED_PATH_MAY_USE_CLIMBOVERS( (uParam0^)[I]._fU0, 0 );
            }
            if ((uParam0^)[I]._fU64 == 0)
            {
                SET_ROOM_FOR_CHAR_BY_NAME( (uParam0^)[I]._fU0, (uParam0^)[I]._fU108 );
            }
            else
            {
                CLEAR_ROOM_FOR_CHAR( (uParam0^)[I]._fU0 );
            }
            SET_CHAR_HEADING( (uParam0^)[I]._fU0, (uParam0^)[I]._fU44 );
            SET_CHAR_DECISION_MAKER( (uParam0^)[I]._fU0, l_U2635 );
            StrCopy( ref cVar7, "Std", 64 );
            if (((uParam0^)[I]._fU52 == 2) || ((uParam0^)[I]._fU52 == 1))
            {
                TASK_TOGGLE_DUCK( (uParam0^)[I]._fU0, 1 );
                StrCopy( ref cVar7, "Roller", 64 );
            }
            if (((uParam0^)[I]._fU52 == 5) || ((uParam0^)[I]._fU52 == 4))
            {
                REMOVE_ALL_CHAR_WEAPONS( (uParam0^)[I]._fU0 );
                GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, 7, 100, 1 );
                StrCopy( ref cVar7, "Faller", 64 );
            }
            if ((uParam0^)[I]._fU52 == 3)
            {
                SET_CHAR_HEALTH( (uParam0^)[I]._fU0, 350 );
                SET_CHAR_MAX_HEALTH( (uParam0^)[I]._fU0, 350 );
                SET_CHAR_CAN_SMASH_GLASS( (uParam0^)[I]._fU0, 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^)[I]._fU0, 0 );
                REMOVE_ALL_CHAR_WEAPONS( (uParam0^)[I]._fU0 );
                GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, 7, 100, 1 );
                StrCopy( ref cVar7, "BlastBack", 64 );
            }
            if (((uParam0^)[I]._fU72 == 0) AND ((uParam0^)[I]._fU68 == 0))
            {
                ;
            }
            if ((uParam0^)[I]._fU72 == 1)
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, l_U2639 );
                ConcatString(ref cVar7, ".ST.", 64);
            }
            else
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, l_U2638 );
                ConcatString(ref cVar7, ".MOV.", 64);
            }
            if ((uParam0^)[I]._fU80)
            {
                if (iParam2 > 5)
                {
                    iParam2 -= 5;
                }
                SET_CHAR_ACCURACY( (uParam0^)[I]._fU0, iParam2 );
            }
            else
            {
                SET_CHAR_ACCURACY( (uParam0^)[I]._fU0, iParam2 );
            }
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^)[I]._fU0, 1 );
            PRINTSTRING( "Creating goon number " );
            PRINTSTRING( "- " );
            PRINTINT( I );
            PRINTSTRING( " -" );
            PRINTSTRING( "at " );
            PRINTVECTOR( (uParam0^)[I]._fU8 );
            PRINTNL();
            ConcatString(ref cVar7, I, 64);
            SET_CHAR_NAME_DEBUG( (uParam0^)[I]._fU0, ref cVar7 );
            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^)[I]._fU0, 1 );
            SET_CHAR_AS_ENEMY( (uParam0^)[I]._fU0, 1 );
        }
        else
        {
            PRINTSTRING( "Goon not initialised goon number " );
            PRINTINT( I );
            PRINTSTRING( "!" );
            PRINTNL();
        }
    }
    return;
}

void sub_20023(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_21533()
{
    if (NOT (LOCATE_CHAR_ANY_MEANS_2D( l_U628, -1532.59700000, 160.52860000, 100.00000000, 100.00000000, 0 )))
    {
        PRINT_NOW( "CHUBGNE", 7500, 1 );
        sub_21624( 19, "B5_CFAIL", "B5AUD", 0 );
        sub_15047();
    }
    return;
}

void sub_21624(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_21668( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_21668(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_23004()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    GET_GAME_TIMER( ref l_U683 );
    if ((l_U683 - l_U684) > l_U685)
    {
        uVar4 = {sub_23051( l_U628 )};
        GET_CLOSEST_CHAR( uVar4._fU0, uVar4._fU4, uVar4._fU8, 40.00000000, 0, 1, ref uVar2 );
        PRINTSTRING( "Whatline?: " );
        PRINTINT( l_U686 );
        PRINTNL();
        switch (l_U686)
        {
            case 0:
            SAY_AMBIENT_SPEECH( l_U732[2]._fU0, "CONV_GANG_STATE", 1, 0, 0 );
            l_U686 = 2;
            l_U685 = 3500;
            break;
            case 1:
            SAY_AMBIENT_SPEECH( l_U732[2]._fU0, "CONV_SMOKE_STATE", 1, 0, 0 );
            l_U686 = 3;
            l_U685 = 3500;
            break;
            case 2:
            SAY_AMBIENT_SPEECH( l_U732[1]._fU0, "CONV_GANG_RESP", 1, 0, 0 );
            l_U686 = 1;
            l_U685 = 7500;
            break;
            case 3:
            SAY_AMBIENT_SPEECH( l_U732[1]._fU0, "CONV_SMOKE_RESP", 1, 0, 0 );
            l_U686 = 0;
            l_U685 = 7500;
            break;
        }
        GET_GAME_TIMER( ref l_U684 );
    }
    return;
}

void sub_23051(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else if (DOES_CHAR_EXIST( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    return Result;
}

void sub_23810(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_23882(unknown uParam0, int iParam1)
{
    int I;
    int Result;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

    Result = 0;
    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if ((uParam0^)[I]._fU56 == 0)
        {
            if (((uParam0^)[I]._fU52 == 5) || (((uParam0^)[I]._fU52 == 4) || (((uParam0^)[I]._fU52 == 3) || ((uParam0^)[I]._fU52 == 0))))
            {
                if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                {
                    if ((sub_24061( (uParam0^)[I]._fU0, 4.50000000, (uParam0^)[I]._fU8, 0, 0 )) || (IS_CHAR_FACING_CHAR( l_U628, (uParam0^)[I]._fU0, 30.00000000 )))
                    {
                        if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^)[I]._fU0, 0 );
                        }
                        SET_CHAR_RELATIONSHIP_GROUP( (uParam0^)[I]._fU0, 24 );
                        SET_CHAR_RELATIONSHIP( (uParam0^)[I]._fU0, 5, 0 );
                        if ((uParam0^)[I]._fU72 == 0)
                        {
                            OPEN_SEQUENCE_TASK( ref uVar7 );
                            TASK_SEEK_COVER_TO_COORDS( 0, (uParam0^)[I]._fU8._fU0, (uParam0^)[I]._fU8._fU4, (uParam0^)[I]._fU8._fU8, (uParam0^)[I]._fU20._fU0, (uParam0^)[I]._fU20._fU4, (uParam0^)[I]._fU20._fU8, 5000 );
                            TASK_COMBAT( 0, l_U628 );
                            CLOSE_SEQUENCE_TASK( uVar7 );
                            TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar7 );
                            CLEAR_SEQUENCE_TASK( uVar7 );
                        }
                        else
                        {
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( (uParam0^)[I]._fU0, (uParam0^)[I]._fU8, 1.75000000 );
                        }
                        if (((uParam0^)[I]._fU52 == 5) || (((uParam0^)[I]._fU52 == 4) || ((uParam0^)[I]._fU52 == 3)))
                        {
                            SET_CHAR_ACCURACY( (uParam0^)[I]._fU0, 8 );
                            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( (uParam0^)[I]._fU0, 1 );
                            SET_CHAR_CAN_SMASH_GLASS( (uParam0^)[I]._fU0, 1 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( (uParam0^)[I]._fU0, (uParam0^)[I]._fU8, 1.75000000 );
                        }
                        else
                        {
                            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^)[I]._fU0, 1 );
                        }
                        (uParam0^)[I]._fU56 = 1;
                    }
                }
            }
            if (((uParam0^)[I]._fU52 == 1) || ((uParam0^)[I]._fU52 == 2))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, (uParam0^)[I]._fU20._fU0, (uParam0^)[I]._fU20._fU4, (uParam0^)[I]._fU20._fU8, (uParam0^)[I]._fU32._fU0, (uParam0^)[I]._fU32._fU4, (uParam0^)[I]._fU32._fU8, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                    {
                        if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^)[I]._fU0, 0 );
                        }
                        SET_CHAR_RELATIONSHIP_GROUP( (uParam0^)[I]._fU0, 24 );
                        SET_CHAR_RELATIONSHIP( (uParam0^)[I]._fU0, 5, 0 );
                        SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, l_U2639 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( (uParam0^)[I]._fU0, (uParam0^)[I]._fU8, 4.50000000 );
                        switch ((uParam0^)[I]._fU52)
                        {
                            case 2:
                            OPEN_SEQUENCE_TASK( ref uVar8 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "crouch_roll_r", "move_crouch_rifle", 8.00000000, 0, 1, 1, 0, -1 );
                            TASK_SHOOT_AT_CHAR( 0, l_U628, 2000, 5 );
                            TASK_COMBAT( 0, l_U628 );
                            CLOSE_SEQUENCE_TASK( uVar8 );
                            TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar8 );
                            CLEAR_SEQUENCE_TASK( uVar8 );
                            PRINTSTRING( "ROLL_RIGHT" );
                            PRINTNL();
                            break;
                            case 1:
                            OPEN_SEQUENCE_TASK( ref uVar8 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "crouch_roll_l", "move_crouch_rifle", 8.00000000, 0, 1, 1, 0, -1 );
                            TASK_SHOOT_AT_CHAR( 0, l_U628, 2000, 5 );
                            TASK_COMBAT( 0, l_U628 );
                            CLOSE_SEQUENCE_TASK( uVar8 );
                            TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar8 );
                            CLEAR_SEQUENCE_TASK( uVar8 );
                            PRINTSTRING( "ROLL_LEFT" );
                            PRINTNL();
                            break;
                        }
                        PRINTSTRING( "Goon " );
                        PRINTINT( I );
                        PRINTSTRING( " activated" );
                        PRINTNL();
                        (uParam0^)[I]._fU56 = 1;
                    }
                }
            }
        }
        if (IS_CHAR_FATALLY_INJURED( (uParam0^)[I]._fU0 ))
        {
            Result++;
        }
        if ((DOES_CHAR_EXIST( (uParam0^)[I]._fU0 )) AND ((uParam0^)[I]._fU52 == 4))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I]._fU0, l_U628, 0 ))
            {
                if ((DOES_CHAR_EXIST( (uParam0^)[I]._fU0 )) AND ((uParam0^)[I]._fU84 == 0))
                {
                    if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                    {
                        SWITCH_PED_TO_RAGDOLL_WITH_FALL( (uParam0^)[I]._fU0, 10000, 10000, 4, (uParam0^)[I]._fU92, 19.00000000, l_U481, l_U481 );
                    }
                    GET_GAME_TIMER( ref (uParam0^)[I]._fU104 );
                    (uParam0^)[I]._fU84 = 1;
                }
            }
        }
        if ((DOES_CHAR_EXIST( (uParam0^)[I]._fU0 )) AND ((uParam0^)[I]._fU52 == 5))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I]._fU0, l_U628, 0 ))
            {
                if ((DOES_CHAR_EXIST( (uParam0^)[I]._fU0 )) AND ((uParam0^)[I]._fU84 == 0))
                {
                    if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                    {
                        SWITCH_PED_TO_RAGDOLL_WITH_FALL( (uParam0^)[I]._fU0, 10000, 10000, 5, (uParam0^)[I]._fU92, 32.00000000, l_U481, l_U481 );
                    }
                    GET_GAME_TIMER( ref (uParam0^)[I]._fU104 );
                    (uParam0^)[I]._fU84 = 1;
                }
            }
        }
        if ((DOES_CHAR_EXIST( (uParam0^)[I]._fU0 )) AND ((uParam0^)[I]._fU52 == 3))
        {
            if ((uParam0^)[I]._fU84 == 0)
            {
                if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
                {
                    GET_CHAR_HEALTH( (uParam0^)[I]._fU0, ref iVar9 );
                    if (iVar9 < 350)
                    {
                        PRINTSTRING( "Applying intial" );
                        PRINTNL();
                        SWITCH_PED_TO_RAGDOLL( (uParam0^)[I]._fU0, 5000, 5000, 1, 0, 1, 1 );
                        if ((IS_PED_RAGDOLL( (uParam0^)[I]._fU0 )) AND (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 ))))
                        {
                            CREATE_NM_MESSAGE( 1, 79 );
                            PRINTSTRING( "Sending natural motion message NM_BALANCE!" );
                            PRINTNL();
                            SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                            CREATE_NM_MESSAGE( 1, 119 );
                            PRINTSTRING( "Sending natural motion message NM_BALANCE_LEAN_MSG!" );
                            PRINTNL();
                            SET_NM_MESSAGE_VEC3( 121, (uParam0^)[I]._fU92 );
                            SET_NM_MESSAGE_FLOAT( 122, 0.50000000 );
                            SET_NM_MESSAGE_BOOL( 123, 1 );
                            SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                        }
                        GET_GAME_TIMER( ref (uParam0^)[I]._fU104 );
                        SMASH_GLASS_ON_OBJECT( (uParam0^)[I]._fU92._fU0, (uParam0^)[I]._fU92._fU4, (uParam0^)[I]._fU92._fU8, 5.00000000, 2021413500, 3.00000000 );
                        (uParam0^)[I]._fU84 = 1;
                    }
                }
            }
            else if (((uParam0^)[I]._fU88 == 0) AND ((sub_26410( (uParam0^)[I]._fU0, (uParam0^)[I]._fU92 )) < 1.65000000))
            {
                if ((IS_PED_RAGDOLL( (uParam0^)[I]._fU0 )) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))))
                {
                    CREATE_NM_MESSAGE( 1, 59 );
                    SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                    SET_CHAR_PROOFS( (uParam0^)[I]._fU0, 0, 0, 0, 0, 0 );
                }
                (uParam0^)[I]._fU88 = 1;
            }
            if ((sub_26620( (uParam0^)[I]._fU0 )) < 12.00000000)
            {
                if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
                {
                    DAMAGE_CHAR( (uParam0^)[I]._fU0, 100, 1 );
                }
            }
        }
    }
    return Result;
}

int sub_24061(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5, boolean bParam6)
{
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    iParam5 = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
        if (bParam6)
        {
            return 1;
        }
        if ((IS_SNIPER_BULLET_IN_AREA( uVar9._fU0 - (uParam1 / 2.00000000), uVar9._fU4 - (uParam1 / 2.00000000), uVar9._fU8 - (uParam1 / 2.00000000), uVar9._fU0 + (uParam1 / 2.00000000), uVar9._fU4 + (uParam1 / 2.00000000), uVar9._fU8 + (uParam1 / 2.00000000) )) || ((IS_BULLET_IN_AREA( uVar9._fU0, uVar9._fU4, uVar9._fU8, uParam1, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, 3.00000000, 3.00000000, 3.00000000, iParam5 ))))
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

void sub_26410(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    else
    {
        return -1.00000000;
    }
    return VDIST( uVar6, uParam1 );
}

void sub_26620(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar3, ref uVar4, ref Result );
    }
    else if (DOES_CHAR_EXIST( uParam0 ))
    {
        N_1363505769( uParam0, ref uVar3, ref uVar4, ref Result );
    }
    return Result;
}

void sub_27894(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, int iParam5)
{
    int iVar8;
    unknown uVar9;

    if (iParam4 == 1)
    {
        iVar8 = 4;
    }
    else
    {
        iVar8 = 3;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SET_CHAR_HEALTH( uParam0, 200 );
        SET_CHAR_SHOOT_RATE( uParam0, 50 );
        if (iParam5 == 1)
        {
            OPEN_SEQUENCE_TASK( ref uVar9 );
            TASK_TOGGLE_DUCK( 0, 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uParam1._fU0, uParam1._fU4, uParam1._fU8, iVar8, 20000, 0.50000000 );
            TASK_SHOOT_AT_CHAR( 0, l_U628, 5000, 3 );
            TASK_TOGGLE_DUCK( 0, 1 );
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, uParam1, 5000 );
            CLOSE_SEQUENCE_TASK( uVar9 );
        }
        else
        {
            OPEN_SEQUENCE_TASK( ref uVar9 );
            TASK_TOGGLE_DUCK( 0, 0 );
            TASK_GO_STRAIGHT_TO_COORD( 0, uParam1._fU0, uParam1._fU4, uParam1._fU8, iVar8, 20000 );
            TASK_SHOOT_AT_CHAR( 0, l_U628, 5000, 3 );
            TASK_TOGGLE_DUCK( 0, 1 );
            CLOSE_SEQUENCE_TASK( uVar9 );
        }
        TASK_PERFORM_SEQUENCE( uParam0, uVar9 );
        CLEAR_SEQUENCE_TASK( uVar9 );
    }
    return;
}

void sub_28581()
{
    GET_GAME_TIMER( ref l_U688 );
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U688 - l_U689) > 8000))
    {
        if ((sub_14781( l_U628, l_U729, 1 )) < 20.00000000)
        {
            sub_11159( "R4_FIGHT", ref l_U639, 8, 1 );
            PRINTSTRING( "timeOfLastChubbyTaunt!" );
            PRINTNL();
            GET_GAME_TIMER( ref l_U689 );
        }
    }
    return;
}

void sub_28814(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = 0; I <= 12; I++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[I]._fU0 ))
        {
            if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
            {
                SET_CHAR_KEEP_TASK( (uParam0^)[I]._fU0, 1 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I]._fU0 );
        }
    }
    return;
}

void sub_28964()
{
    unknown uVar2;

    if (l_U649[l_U645] == 0)
    {
        sub_12328();
        sub_19887( ref l_U2244, 11, 40 );
        l_U649[l_U645] = 1;
    }
    sub_21533();
    if ((NOT (IS_CHAR_DEAD( l_U729 ))) AND (l_U563[1] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1525.11400000, 142.77110000, 23.11610000, 2.00000000, 2.00000000, 1.50000000, 0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U729 )))
            {
                sub_11159( "B5_CHUB2", ref l_U639, 8, 1 );
                SET_CHAR_HEALTH( l_U729, 200 );
                SET_CHAR_SHOOT_RATE( l_U729, 50 );
                UNLOCK_RAGDOLL( l_U729, 0 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1514.74300000, 157.54570000, 23.11690000, 3, 10000, 0.50000000 );
                TASK_SHOOT_AT_COORD( 0, -1512.46200000, 157.54440000, 23.73298000, 750, 5 );
                TASK_SHOOT_AT_COORD( 0, -1512.46200000, 157.54440000, 23.04523000, 750, 5 );
                TASK_JUMP( 0, 1 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1508.46900000, 186.77140000, 20.67020000, 3, 10000, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U729, uVar2 );
                sub_29361();
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U563[1] = 1;
            }
        }
    }
    if (l_U563[1] == 1)
    {
        ;
    }
    if ((l_U678 == 0) AND (((sub_29493( l_U729, uVar2 )) > 2) AND (l_U563[1] == 1)))
    {
        SMASH_GLASS_ON_OBJECT( -1512.80000000, 157.50000000, 23.80000000, 2.50000000, 2021413500, 3.50000000 );
        PRINTNL();
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "Window smashed" );
        PRINTNL();
        PRINTNL();
        PRINTNL();
        l_U678 = 1;
    }
    sub_23882( ref l_U1488, 12 );
    sub_23882( ref l_U1866, 8 );
    sub_28581();
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1510.48900000, 164.71070000, 18.93190000, 3.00000000, 8.00000000, 6.60000000, 0 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U729, -1508.46900000, 186.77140000, 20.67020000, 3, 10000, 0.50000000 );
        }
        l_U671 = 1;
        sub_28814( ref l_U1488, 12 );
        sub_12328();
        l_U645++;
    }
    return;
}

void sub_29361()
{
    if (sub_29370())
    {
        g_U64921 = 1;
    }
    return;
}

int sub_29370()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_29493(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar4 );
    }
    if (iVar4 == 1)
    {
        GET_SEQUENCE_PROGRESS( uParam0, ref Result );
    }
    return Result;
}

void sub_29861()
{
    if (l_U649[l_U645] == 0)
    {
        REQUEST_MODEL( -1660661558 );
        REQUEST_MODEL( -1180674815 );
        REQUEST_CAR_RECORDING( 378 );
        REQUEST_CAR_RECORDING( 218 );
        REQUEST_CAR_RECORDING( 219 );
        REQUEST_ANIMS( "missbell4" );
        SETTIMERB( 0 );
        PRINTSTRING( "In Chase ON RoOF section" );
        l_U649[l_U645] = 1;
    }
    if ((l_U671 == 1) AND (((sub_26620( l_U628 )) < 20.00000000) AND (TIMERB() > 5000)))
    {
        l_U671 = 0;
    }
    if ((l_U692 == 0) AND (l_U563[0] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1511.58700000, 159.19470000, 18.93190000, 1.00000000, 3.00000000, 6.00000000, 0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U729 )))
            {
                sub_27894( l_U729, -1508.46900000, 186.77140000, 20.67020000, 1, 1 );
                l_U692 = 1;
            }
        }
    }
    if (l_U563[0] == 0)
    {
        if ((sub_24061( l_U729, 5.00000000, -1508.46900000, 186.77140000, 20.67020000, 0, 1 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1506.34500000, 165.35660000, 20.12590000, 6.20000000, 1.00000000, 5.00000000, 0 )))
        {
            sub_27894( l_U729, -1523.19000000, 191.64140000, 20.09200000, 1, 1 );
            l_U563[0] = 1;
        }
    }
    if (l_U563[1] == 0)
    {
        if ((sub_24061( l_U729, 5.00000000, -1523.19000000, 191.64140000, 20.09200000, 0, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1508.48000000, 180.95710000, 19.41980000, 2.00000000, 1.00000000, 1.00000000, 0 )))
        {
            sub_27894( l_U729, -1523.76100000, 178.19000000, 19.66010000, 1, 1 );
            l_U563[1] = 1;
        }
    }
    if (l_U563[2] == 0)
    {
        if ((sub_24061( l_U729, 5.00000000, -1523.76100000, 178.19000000, 19.66010000, 0, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1517.58300000, 193.31630000, 20.50800000, 7.50000000, 7.00000000, 1.50000000, 0 )))
        {
            sub_27894( l_U729, -1523.92000000, 155.63280000, 30.75460000, 1, 1 );
            l_U563[2] = 1;
        }
    }
    if (l_U563[3] == 0)
    {
        if ((sub_24061( l_U729, 5.00000000, -1523.92000000, 155.63280000, 30.75460000, 0, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1518.98000000, 174.50000000, 31.57920000, 7.00000000, 3.00000000, 1.00000000, 0 )))
        {
            sub_27894( l_U729, -1537.52500000, 143.22980000, 34.57530000, 1, 1 );
            l_U563[3] = 1;
        }
    }
    if ((l_U563[4] == 0) AND ((sub_14781( l_U2244[6]._fU0, l_U628, 1 )) < 25.00000000))
    {
        if (NOT (IS_CHAR_INJURED( l_U2244[6]._fU0 )))
        {
            TASK_SEEK_COVER_FROM_PED( l_U2244[6]._fU0, l_U628, 20000 );
        }
        l_U563[4] = 1;
    }
    sub_23882( ref l_U2244, 11 );
    sub_28581();
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1533.67100000, 146.55900000, 33.56950000, 18.00000000, 10.00000000, 1.00000000, 0 ))
    {
        l_U645++;
    }
    return;
}

void sub_30918()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    unknown uVar12;
    unknown uVar13;

    if (l_U649[l_U645] == 0)
    {
        sub_30946();
        sub_12328();
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1976502708 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1543404628 );
        sub_28814( ref l_U2244, 13 );
        while ((NOT (HAVE_ANIMS_LOADED( "missbell4" ))) || ((NOT (HAS_MODEL_LOADED( -1180674815 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 378 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 218 ))) || (NOT (HAS_MODEL_LOADED( -1660661558 )))))))
        {
            PRINTSTRING( "waiting" );
            WAIT( 0 );
        }
        if (NOT (DOES_VEHICLE_EXIST( l_U2622 )))
        {
            CREATE_CAR( -1660661558, -1533.67100000, 146.55900000, 34.56950000, ref l_U2622, 1 );
            CREATE_CHAR_INSIDE_CAR( l_U2622, 26, -1180674815, ref l_U730 );
            SET_CAR_ENGINE_ON( l_U2622, 1, 1 );
            SET_HELI_BLADES_FULL_SPEED( l_U2622 );
            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U730, 0 );
        }
        if (IS_CHAR_IN_ANY_CAR( l_U628 ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U628, -1517.43600000, 154.90990000, 33.53440000 );
        }
        CLEAR_AREA( -1517.43600000, 154.90990000, 33.53440000, 75.00000000, 1 );
        SET_CHAR_COORDINATES( l_U628, -1517.43600000, 154.90990000, 33.53440000 );
        SET_CHAR_HEADING( l_U628, 180.00420000 );
        TASK_TOGGLE_DUCK( l_U628, 1 );
        CREATE_CHAR( 26, -1180674815, -1533.67100000, 146.55900000, 34.56950000, ref l_U731, 1 );
        GIVE_WEAPON_TO_CHAR( l_U731, 14, 30000, 0 );
        SET_CHAR_RELATIONSHIP( l_U731, 5, 0 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U731, l_U2622, 2 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U731, 0 );
        SET_CHAR_WILL_USE_COVER( l_U731, 0 );
        SET_SENSE_RANGE( l_U731, 100.00000000 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U731, 0 );
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U2622, 218 );
        }
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2622 ))
        {
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2622, 1000 );
        }
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            SET_CURRENT_CHAR_WEAPON( l_U729, 0, 0 );
            REMOVE_WEAPON_FROM_CHAR( l_U729, 12 );
            SET_CHAR_COORDINATES( l_U729, -1535.58300000, 148.27210000, 39.79000000 );
            SET_CHAR_HEADING( l_U729, 270.00000000 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U729, "wave_down", "missbell4", 8.00000000, 1, 0, 0, 0, -1 );
        }
        LOAD_SCENE( -1454.07400000, 166.30800000, 44.93565000 );
        SET_CAM_POS( l_U621, -1454.07400000, 166.30800000, 44.93565000 );
        SET_CAM_ROT( l_U621, 23.52690000, 0.00000000, -87.83082000 );
        SET_CAM_FOV( l_U621, 45.00000000 );
        SET_CAM_POS( l_U623, -1460.92700000, 166.04850000, 41.94977000 );
        SET_CAM_ROT( l_U623, 23.52690000, 0.00000000, -87.83082000 );
        SET_CAM_FOV( l_U623, 45.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 10000, 0 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        sub_13247( ref l_U624, 1 );
        sub_13247( ref l_U626, 0 );
        sub_13314( 1 );
        DO_SCREEN_FADE_IN( 500 );
        SETTIMERA( 0 );
        l_U649[l_U645] = 1;
    }
    if (NOT (IS_CAR_DEAD( l_U2622 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2622 ))
        {
            SET_PLAYBACK_SPEED( l_U2622, l_U2654 );
            fVar2 = FIND_TIME_POSITION_IN_RECORDING( l_U2622 );
            PRINTFLOAT( fVar2 );
        }
    }
    PRINTSTRING( "TIME: " );
    PRINTINT( TIMERA() );
    PRINTNL();
    WAIT( 0 );
    if ((NOT (IS_CAR_DEAD( l_U2622 ))) AND ((l_U674 == 0) AND (TIMERA() > 2000)))
    {
        OPEN_SEQUENCE_TASK( ref uVar3 );
        TASK_TOGGLE_DUCK( 0, 1 );
        TASK_LOOK_AT_VEHICLE( 0, l_U2622, 20000, 0 );
        TASK_GO_STRAIGHT_TO_COORD( 0, -1517.43600000, 150.90990000, 33.53440000, 3, 4000 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        TASK_PERFORM_SEQUENCE( l_U628, uVar3 );
        CLEAR_SEQUENCE_TASK( uVar3 );
        l_U674 = 1;
    }
    if ((l_U675 == 0) AND (fVar2 > 10000))
    {
        if ((NOT (IS_CHAR_DEAD( l_U729 ))) AND (NOT (IS_CAR_DEAD( l_U2622 ))))
        {
            SET_CAM_POS( l_U621, -1436.31900000, 168.47730000, 69.70988000 );
            SET_CAM_ROT( l_U621, -32.54799000, 0.00000000, 107.50110000 );
            SET_CAM_FOV( l_U621, 45.00000000 );
            SET_CAM_POS( l_U623, -1489.81300000, 160.11620000, 59.14656000 );
            SET_CAM_ROT( l_U623, -38.12862000, -5.96247100, 124.57280000 );
            SET_CAM_FOV( l_U623, 45.00000000 );
            SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 4000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U624, 0, 0, 1, 1 );
            if (((sub_32630( l_U628 )) == 18) || (((sub_32630( l_U628 )) == 5) || ((sub_32630( l_U628 )) == 4)))
            {
                OPEN_SEQUENCE_TASK( ref uVar4 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_SWAP_WEAPON( 0, 1 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1523.43600000, 150.90990000, 33.53440000, 3, 10000, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar4 );
            }
            else
            {
                OPEN_SEQUENCE_TASK( ref uVar4 );
                TASK_TOGGLE_DUCK( 0, 0 );
                TASK_SWAP_WEAPON( 0, 1 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -1523.43600000, 150.90990000, 33.53440000, 3, 1.00000000, 2.00000000, l_U729, 0 );
                CLOSE_SEQUENCE_TASK( uVar4 );
            }
            TASK_PERFORM_SEQUENCE( l_U628, uVar4 );
            CLEAR_SEQUENCE_TASK( uVar4 );
            SET_CAM_COMPONENT_SHAKE( l_U626, 0, 3, 4000, 0.00500000, 3.90000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U626, 1, 3, 4000, 0.00500000, 3.80000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U626, 3, 3, 4000, 0.00500000, 3.80000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U626, 4, 3, 4000, 0.00500000, 3.80000000, 0.00000000 );
        }
        l_U675 = 1;
    }
    if ((l_U693 == 0) AND (fVar2 > 20500))
    {
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            TASK_PLAY_ANIM( l_U729, "CHUBBY_TURN_180", "missbell4", 8.00000000, 0, 0, 0, 1, -1 );
            FREEZE_CHAR_POSITION( l_U729, 1 );
        }
        l_U693 = 1;
    }
    if ((l_U563[0] == 0) AND (fVar2 > 16756))
    {
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2622 ))
            {
                SET_PLAYBACK_SPEED( l_U2622, 0.90000000 );
                SET_CAR_COLLISION( l_U2622, 0 );
            }
            UNPOINT_CAM( l_U626 );
            SET_CAM_POS( l_U626, -1540.28000000, 145.47250000, 38.11958000 );
            SET_CAM_ROT( l_U626, 15.97229000, -0.00000000, -83.44165000 );
            SET_CAM_FOV( l_U626, 45.00000000 );
            sub_13247( ref l_U624, 0 );
            sub_13247( ref l_U626, 1 );
            SETTIMERA( 0 );
        }
        l_U563[0] = 1;
    }
    if ((l_U563[0] == 1) AND ((l_U676 == 0) AND ((sub_26410( l_U730, -1523.68900000, 147.15090000, 44.38027000 )) < 10.00000000)))
    {
        SET_CAM_COMPONENT_SHAKE( l_U626, 0, 3, 1500, 0.00500000, 3.90000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U626, 1, 3, 1500, 0.00500000, 3.80000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U626, 3, 3, 1500, 0.00500000, 3.80000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U626, 4, 3, 1500, 0.00500000, 3.80000000, 0.00000000 );
        SETTIMERA( 0 );
        l_U676 = 1;
    }
    if ((l_U563[1] == 0) AND ((l_U563[0] == 1) AND (TIMERA() > 1750)))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U628, 1.00000000, 3.50000000, -0.65000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        SET_CAM_POS( l_U621, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
        SET_CAM_ROT( l_U621, 0.00000000, -0.00000000, 0.00000000 );
        POINT_CAM_AT_PED( l_U621, l_U628 );
        SET_CAM_POINT_OFFSET( l_U621, 0.00000000, 0.00000000, 0.60000000 );
        SET_CAM_FOV( l_U621, 26.40002000 );
        uVar8 = {sub_23051( l_U628 )};
        SET_CAM_DOF_FOCUSPOINT( l_U621, uVar8._fU0, uVar8._fU4, uVar8._fU8, 4.00000000 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U628, 0.90000000, 3.60000000, -0.60000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        SET_CAM_POS( l_U623, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
        SET_CAM_ROT( l_U623, 0.00000000, -0.00000000, 0.00000000 );
        POINT_CAM_AT_PED( l_U623, l_U628 );
        SET_CAM_POINT_OFFSET( l_U623, 0.00000000, 0.00000000, 0.65000000 );
        SET_CAM_FOV( l_U623, 16.40003000 );
        uVar8 = {sub_23051( l_U628 )};
        SET_CAM_DOF_FOCUSPOINT( l_U623, uVar8._fU0, uVar8._fU4, uVar8._fU8, 4.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 1750, 0 );
        sub_13247( ref l_U624, 1 );
        sub_13247( ref l_U626, 0 );
        SETTIMERA( 0 );
        SET_PLAYER_MOOD_PISSED_OFF( l_U629, 5000 );
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            FREEZE_CHAR_POSITION( l_U729, 0 );
            TASK_AIM_GUN_AT_CHAR( l_U628, l_U729, 2000 );
            TASK_LOOK_AT_CHAR( l_U628, l_U729, 2000, 0 );
        }
        l_U563[1] = 1;
    }
    if ((l_U563[2] == 0) AND ((l_U563[1] == 1) AND ((l_U563[0] == 1) AND (TIMERA() > 1750))))
    {
        UNATTACH_CAM( l_U626 );
        UNPOINT_CAM( l_U626 );
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2622 ))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U2622 );
            }
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            SET_HELI_BLADES_FULL_SPEED( l_U2622 );
            if (NOT (IS_CAR_DEAD( l_U2622 )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U2622, 378 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U729 );
            SET_CHAR_HEADING( l_U729, 80.00000000 );
            OPEN_SEQUENCE_TASK( ref l_U2641 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "heli_jump", "missbell4", 1000.00000000, 0, 0, 0, 1, -1 );
            CLOSE_SEQUENCE_TASK( l_U2641 );
            TASK_PERFORM_SEQUENCE( l_U729, l_U2641 );
            sub_11159( "B5_CHOP", ref l_U639, 8, 1 );
        }
        WAIT( 0 );
        SET_CAM_POS( l_U626, -1534.81900000, 148.16900000, 39.12146000 );
        SET_CAM_ROT( l_U626, 5.84018900, 0.00000000, 92.97029000 );
        SET_CAM_FOV( l_U626, 56.39997000 );
        sub_13247( ref l_U624, 0 );
        UNPOINT_CAM( l_U621 );
        UNPOINT_CAM( l_U623 );
        sub_13247( ref l_U626, 1 );
        SETTIMERA( 0 );
        l_U563[2] = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U729 )))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U729, "missbell4", "heli_jump" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( l_U729, "missbell4", "heli_jump", ref fVar11 );
        }
    }
    PRINTFLOAT( fVar11 );
    PRINTNL();
    if ((l_U563[2] == 1) AND (l_U563[3] == 0))
    {
        if ((TIMERA() > 3000) || (fVar11 >= 0.80000000))
        {
            l_U563[3] = 1;
        }
    }
    if ((l_U563[2] == 1) AND (NOT (IS_CAR_DEAD( l_U2622 ))))
    {
        GET_CAR_HEALTH( l_U2622, ref uVar12 );
    }
    if ((l_U563[4] == 0) AND (l_U563[3] == 1))
    {
        PRINTSTRING( "Attaching the guy to the chopper" );
        if ((NOT (IS_CAR_DEAD( l_U2622 ))) AND (NOT (IS_CHAR_DEAD( l_U729 ))))
        {
            PRINTSTRING( "Switching him to ragdoll" );
            PRINTNL();
            FREEZE_CHAR_POSITION( l_U729, 0 );
        }
        PRINTSTRING( "tried to grab" );
        PRINTNL();
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        SET_CHAR_COORDINATES( l_U628, -1523.43600000, 150.90990000, 33.53440000 );
        OPEN_SEQUENCE_TASK( ref uVar13 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "LAND_ON_HELI", "missbell4", 1000.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "HANG_ON_HELI", "missbell4", 1000.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( uVar13 );
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            TASK_PERFORM_SEQUENCE( l_U729, uVar13 );
        }
        CLEAR_SEQUENCE_TASK( uVar13 );
        WAIT( 0 );
        WAIT( 0 );
        if ((NOT (IS_CAR_DEAD( l_U2622 ))) AND (NOT (IS_CHAR_DEAD( l_U729 ))))
        {
            ATTACH_PED_TO_CAR( l_U729, l_U2622, 0, 0.00000000, 0.98874400, -0.35275700, 0.00000000, 0.00000000, 0, 0 );
            SET_ROTATION_FOR_ATTACHED_PED( l_U729, 0.00000000, 0.00000000, 3.14159300 );
            SET_CAR_COLLISION( l_U2622, 1 );
        }
        if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CAR_DEAD( l_U2622 ))))
        {
            FREEZE_CAR_POSITION( l_U2622, 0 );
            TASK_HELI_MISSION( l_U730, l_U2622, 0, 0, -1549.18000000, 151.99000000, 50.95000000, 4, 2.50000000, 0, 90.00000000, 50, 10 );
            APPLY_FORCE_TO_CAR( l_U2622, 3, 0.00000000, 0.00000000, 15.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
        }
        SET_CAM_POS( l_U626, -1538.57500000, 142.19110000, 35.06471000 );
        SET_CAM_ROT( l_U626, 23.88214000, -17.74177000, -2.74195100 );
        SET_CAM_FOV( l_U626, 45.00000000 );
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            POINT_CAM_AT_PED( l_U626, l_U729 );
        }
        SETTIMERA( 0 );
        l_U563[4] = 1;
    }
    if ((sub_35630()) || ((NOT (sub_12139( l_U639 ))) AND ((TIMERA() > 1000) AND (l_U563[4] == 1))))
    {
        SET_TIME_SCALE( 1.00000000 );
        if (l_U563[4] == 0)
        {
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND ((NOT (IS_CHAR_DEAD( l_U729 ))) AND (NOT (IS_CAR_DEAD( l_U2622 )))))
            {
                FREEZE_CAR_POSITION( l_U2622, 0 );
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2622 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U2622 );
                }
                SET_CAR_COORDINATES( l_U2622, -1540.62000000, 148.52000000, 40.17000000 );
                SET_CAR_HEADING( l_U2622, 0.00000000 );
                TASK_HELI_MISSION( l_U730, l_U2622, 0, 0, -1549.18000000, 151.99000000, 50.95000000, 4, 2.50000000, 0, 90.00000000, 50, 10 );
                FREEZE_CHAR_POSITION( l_U729, 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U729 );
            }
            WAIT( 100 );
            if ((NOT (IS_CHAR_DEAD( l_U729 ))) AND (NOT (IS_CAR_DEAD( l_U2622 ))))
            {
                ATTACH_PED_TO_CAR( l_U729, l_U2622, 0, l_U723, 90.00000000, 0.00000000, 1, 0 );
                TASK_PLAY_ANIM( l_U729, "hang_idle", "missbell4", 1000.00000000, 1, 0, 0, 0, -1 );
                PRINTSTRING( "what the !!!" );
                PRINTNL();
                PRINTNL();
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
                SET_CHAR_COORDINATES( l_U628, -1523.60000000, 150.84830000, -100.00000000 );
                SET_CHAR_HEADING( l_U628, 90.42890000 );
                SET_GAME_CAM_HEADING( 0.00000000 );
            }
            LOAD_SCENE( -1523.60000000, 150.84830000, 33.56990000 );
            sub_13247( ref l_U626, 0 );
            sub_13314( 0 );
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            TASK_PLAY_ANIM( l_U729, "hang_idle", "missbell4", 1000.00000000, 1, 0, 0, 0, -1 );
        }
        WAIT( 0 );
        WAIT( 0 );
        if ((NOT (IS_CHAR_DEAD( l_U729 ))) AND (NOT (IS_CAR_DEAD( l_U2622 ))))
        {
            ATTACH_PED_TO_CAR( l_U729, l_U2622, 0, l_U723, 90.00000000, 0.00000000, 1, 0 );
            PRINTSTRING( "what the !!!" );
            PRINTNL();
            PRINTNL();
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
            SET_CHAR_COORDINATES( l_U628, -1523.60000000, 150.84830000, 33.56990000 );
            SET_CHAR_HEADING( l_U628, 90.42890000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
        sub_13247( ref l_U626, 0 );
        sub_13314( 0 );;
        l_U645++;
    }
    return;
}

void sub_30946()
{
    if (NOT (DOES_CAM_EXIST( l_U621 )))
    {
        CREATE_CAM( 14, ref l_U621 );
    }
    if (NOT (DOES_CAM_EXIST( l_U623 )))
    {
        CREATE_CAM( 14, ref l_U623 );
    }
    if (NOT (DOES_CAM_EXIST( l_U624 )))
    {
        CREATE_CAM( 3, ref l_U624 );
    }
    if (NOT (DOES_CAM_EXIST( l_U626 )))
    {
        CREATE_CAM( 14, ref l_U626 );
    }
    return;
}

void sub_32630(unknown uParam0)
{
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CURRENT_CHAR_WEAPON( uParam0, ref Result );
    }
    return Result;
}

int sub_35630()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_36632()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (l_U649[l_U645] == 0)
    {
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            SET_CHAR_HEALTH( l_U729, 300 );
            SET_CHAR_MAX_HEALTH( l_U729, 300 );
        }
        if (NOT (IS_CHAR_DEAD( l_U730 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U730, 1 );
            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U730, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            SET_CHAR_PROOFS( l_U729, 0, 0, 0, 0, 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            SET_CAR_PROOFS( l_U2622, 0, 0, 1, 0, 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2622 ))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U2622 );
                SET_CAR_HEALTH( l_U2622, 1000 );
            }
            SET_CAR_HEADING( l_U2622, 0.00000000 );
            SET_CAR_COLLISION( l_U2622, 1 );
            if (NOT (IS_CAR_DEAD( l_U2622 )))
            {
                FREEZE_CAR_POSITION( l_U2622, 0 );
            }
        }
        PRINT_NOW( "B4GT_04", 7500, 1 );
        sub_11159( "B5_JUMP", ref l_U639, 8, 1 );
        ADD_BLIP_FOR_CAR( l_U2622, ref l_U2633 );
        SET_BLIP_AS_FRIENDLY( l_U2633, 0 );
        if (DOES_BLIP_EXIST( l_U2631 ))
        {
            REMOVE_BLIP( l_U2631 );
        }
        if (NOT (IS_CHAR_DEAD( l_U731 )))
        {
            TASK_DRIVE_BY( l_U731, l_U628, 0, 0.00000000, 0.00000000, 0.00000000, 100.00000000, 8, 1, 50 );
        }
        CLEAR_ROOM_FOR_CHAR( l_U628 );
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            TASK_HELI_MISSION( l_U730, l_U2622, 0, 0, -1549.18000000, 151.99000000, 50.95000000, 4, 2.50000000, 0, 90.00000000, 50, 10 );
        }
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        REQUEST_CAR_RECORDING( 242 );
        while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 242 )))
        {
            WAIT( 0 );
        }
        sub_12328();
        l_U649[l_U645] = 1;
    }
    if (NOT (IS_CAR_DEAD( l_U2622 )))
    {
        FREEZE_CAR_POSITION( l_U2622, 0 );
        if ((l_U682 == 0) AND ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (TIMERA() > 3000)))
        {
            CLEAR_CHAR_TASKS( l_U730 );
            TASK_HELI_MISSION( l_U730, l_U2622, 0, 0, -1549.18000000 + (sub_37371( -3.00000000, 3.00000000 )), 151.99000000 + (sub_37371( -6.00000000, 6.00000000 )), 50.95000000 + (sub_37371( -2.00000000, 2.00000000 )), 4, 2.50000000, 0, 90.00000000 + (sub_37371( -10.00000000, 10.00000000 )), 50, 10 );
            SETTIMERA( 0 );
        }
        GET_CAR_HEALTH( l_U2622, ref iVar2 );
    }
    sub_21533();
    if (l_U2666)
    {
        if ((NOT (IS_CAR_DEAD( l_U2622 ))) AND (NOT (IS_CHAR_DEAD( l_U729 ))))
        {
            CHANGE_CAR_COLOUR( l_U2622, l_U2667, l_U2668 );
            UNLOCK_RAGDOLL( l_U729, 1 );
            SWITCH_PED_TO_RAGDOLL( l_U729, 0, 0, 0, 1, 1, 0 );
        }
    }
    sub_23882( ref l_U2244, 11 );
    if ((l_U682 == 0) AND (TIMERB() > 45000))
    {
        if ((NOT (IS_CAR_DEAD( l_U2622 ))) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
        {
            PRINTSTRING( "lets get outta here" );
            PRINTNL();
            TASK_HELI_MISSION( l_U730, l_U2622, 0, 0, -38.23400000, -466.06900000, 150.95000000, 4, 2.50000000, 0, 0.00000000, 150, 150 );
            l_U682 = 1;
        }
    }
    if (((sub_26410( l_U730, -1546.98500000, 133.51820000, 54.34009000 )) > 40.00000000) AND (l_U682 == 1))
    {
        if (NOT (IS_CHAR_DEAD( l_U730 )))
        {
            SET_CHAR_PROOFS( l_U730, 1, 1, 1, 1, 1 );
        }
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            SET_CAR_PROOFS( l_U2622, 1, 1, 1, 1, 1 );
        }
    }
    if (l_U682 == 1)
    {
        if ((sub_7339( l_U628, l_U2622 )) > 100.00000000)
        {
            PRINT_NOW( "CHOPGNE", 7500, 1 );
            SET_CAR_PROOFS( l_U2622, 1, 1, 1, 1, 1 );
            while (l_U690)
            {
                if (NOT (IS_CAR_DEAD( l_U2622 )))
                {
                    l_U690 = IS_CAR_ON_SCREEN( l_U2622 );
                }
                WAIT( 0 );
            }
            sub_21624( 19, "B5_CFAIL", "B5AUD", 0 );
            sub_15047();
        }
    }
    if (IS_CHAR_INJURED( l_U729 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U729 )))
        {
            DETACH_PED( l_U729, 1 );
        }
    }
    uVar3 = {sub_38107( l_U2622 )};
    if (IS_CHAR_INJURED( l_U730 ))
    {
        l_U673 = 1;
    }
    if ((l_U673 == 1) || ((IS_EXPLOSION_IN_SPHERE( -1, uVar3._fU0, uVar3._fU4, uVar3._fU8, 10.00000000 )) || (iVar2 < 500)))
    {
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            FREEZE_CAR_POSITION( l_U2622, 1 );
        }
        WAIT( 0 );
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            FREEZE_CAR_POSITION( l_U2622, 0 );
        }
        l_U645++;
    }
    return;
}

void sub_37371(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_38107(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    return Result;
}

void sub_38326()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (l_U649[l_U645] == 0)
    {
        CLEAR_PRINTS();
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            SET_CAR_HEALTH( l_U2622, 600 );
            SET_CAR_PROOFS( l_U2622, 1, 1, 1, 1, 0 );
        }
        sub_12328();
        l_U677 = GET_SOUND_ID();
        PLAY_SOUND_FROM_VEHICLE( l_U677, "B4_TRESPASS_FLAMING_CHOPPER", l_U2622 );
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U730 )))
            {
                POINT_CAM_AT_PED( l_U626, l_U730 );
            }
            else
            {
                POINT_CAM_AT_VEHICLE( l_U626, l_U2622 );
            }
            ATTACH_CAM_TO_VEHICLE( l_U626, l_U2622 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U626, 1 );
        }
        SET_CAM_POINT_OFFSET( l_U626, 1.40000000, -0.40000000, 0.30000000 );
        SET_CAM_ATTACH_OFFSET( l_U626, 4.10000000, 7.70000000, 2.30000000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U626, 1 );
        SET_CAM_POS( l_U626, -1530.45600000, 145.24430000, 38.10817000 );
        SET_CAM_ROT( l_U626, 46.72220000, 0.00000000, 82.99576000 );
        SET_CAM_FOV( l_U626, 40.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U626, 0, 3, 1000, 0.01500000, 5.90000000, 0.70000000 );
        SET_CAM_COMPONENT_SHAKE( l_U626, 1, 3, 1000, 0.01500000, 5.80000000, 0.20000000 );
        SET_CAM_COMPONENT_SHAKE( l_U626, 3, 3, 1000, 0.01500000, 4.80000000, 0.30000000 );
        SET_CAM_COMPONENT_SHAKE( l_U626, 4, 3, 1000, 0.01500000, 3.80000000, 0.10000000 );
        sub_13314( 1 );
        sub_13247( ref l_U624, 0 );
        sub_13247( ref l_U626, 1 );
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U2622, 242 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2622, l_U722 + 2000 );
            SET_PLAYBACK_SPEED( l_U2622, -0.90000000 );
        }
        if (NOT (IS_CHAR_DEAD( l_U730 )))
        {
            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U730, "PANIC", "PAIN_VOICE", 1, 1, 0 );
        }
        REMOVE_BLIP( l_U2633 );
        SETTIMERA( 0 );
        l_U649[l_U645] = 1;
    }
    if ((l_U563[0] == 0) AND (TIMERA() > 2000))
    {
        SET_CAM_POS( l_U621, -1546.98500000, 133.51820000, 54.34009000 );
        SET_CAM_ROT( l_U621, 0.72659400, -19.59370000, -38.95798000 );
        SET_CAM_FOV( l_U621, 45.00000000 );
        SET_CAM_POS( l_U623, -1548.99200000, 152.36780000, 38.61060000 );
        SET_CAM_ROT( l_U623, -8.69244200, -13.14750000, -113.34050000 );
        SET_CAM_FOV( l_U623, 45.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 4500, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U624, 0, 0, 1, 1 );
        sub_13247( ref l_U624, 1 );
        sub_13247( ref l_U626, 0 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 0, 3, 3500, 0.00500000, 3.90000000, 0.70000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 1, 3, 3500, 0.00500000, 3.80000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 3, 3, 3500, 0.00500000, 3.80000000, 0.70000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 4, 3, 3500, 0.00500000, 3.80000000, 0.00000000 );
        l_U563[0] = 1;
    }
    if (l_U673 == 0)
    {
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            GET_CAR_COORDINATES( l_U2622, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U2622, l_U2658._fU0, l_U2658._fU4, l_U2658._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (l_U2664 == 0)
            {
                PRINTSTRING( "Effect " );
                PRINTNL();
                l_U2663 = START_PTFX( "fire_chopper_tail", uVar2, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                l_U2664 = 1;
            }
            else if (l_U2663 > 0)
            {
                UPDATE_PTFX_OFFSETS( l_U2663, uVar2, 0.00000000, 0.00000000, 0.00000000 );
            }
        }
    }
    if ((l_U563[1] == 0) AND (TIMERA() > 6500))
    {
        STOP_PLAYBACK_RECORDED_CAR( l_U2622 );
        UNPOINT_CAM( l_U626 );
        SET_CAM_FOV( l_U626, 70.00000000 );
        SET_CAM_POS( l_U626, -1536.37100000, 152.75650000, 22.57707000 );
        SET_CAM_ROT( l_U626, 61.77779000, 0.00000000, 147.78490000 );
        sub_13247( ref l_U626, 1 );
        SET_CHAR_COORDINATES( l_U628, -1527.96100000, 140.91160000, 22.18240000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U628, "tresstop" );
        GET_GAME_VIEWPORT_ID( ref l_U638 );
        WAIT( 0 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U638, "tresstop" );
        if (NOT (IS_CAR_DEAD( l_U2622 )))
        {
            SET_CAR_COORDINATES( l_U2622, -1542.05400000, 148.08770000, 37.79708000 );
            SET_CAR_COORDINATES( l_U2622, -1543.81900000, 147.22130000, 38.61980000 );
            SET_CAR_HEADING( l_U2622, 259.09430000 );
            FREEZE_CAR_POSITION( l_U2622, 0 );
            APPLY_FORCE_TO_CAR( l_U2622, 3, 0.00000000, 0.00000000, -10.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 0, 1, 1 );
            EXPLODE_CAR( l_U2622, 1, 0 );
            if (NOT (IS_CHAR_DEAD( l_U729 )))
            {
                DETACH_PED( l_U729, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U729 )))
            {
                SET_CHAR_COORDINATES( l_U729, -1541.83300000, 147.79440000, 29.25368000 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U729, "fall", "missbell4", 8.00000000, 1, 0, 0, 0, -1 );
            }
            sub_11159( "B5_FALLS", ref l_U639, 8, 1 );
        }
        if (l_U673 == 0)
        {
            STOP_PTFX( l_U2663 );
            l_U2663 = 0;
        }
        sub_13247( ref l_U624, 0 );
        sub_13247( ref l_U626, 1 );
        WAIT( 0 );
        l_U563[1] = 1;
    }
    if ((l_U667 == 0) AND ((l_U563[1] == 1) AND (TIMERA() > 8000)))
    {
        EXPLODE_CAR( l_U2622, 1, 0 );
        STOP_SOUND( l_U677 );
        l_U667 = 1;
    }
    if (TIMERA() > 9500)
    {
        if (l_U563[2] == 0)
        {
            DELETE_CHAR( ref l_U729 );
            DELETE_CAR( ref l_U2622 );
            SET_CHAR_COORDINATES( l_U628, -1522.63900000, 146.51950000, 33.56990000 );
            SET_CAM_POS( l_U626, -1563.80300000, 196.92650000, 29.25170000 );
            SET_CAM_ROT( l_U626, -2.68593600, -0.00000000, -140.23610000 );
            WAIT( 1000 );
            PLAY_SOUND_FROM_POSITION( -1, "B4_TRESPASS_LARGE_EXPLOSION", -1540.00000000, 147.00000000, 10.00000000 );
            TRIGGER_PTFX( "exp_trespass", -1540.00000000, 147.00000000, 10.00000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
            WAIT( 150 );
            TRIGGER_PTFX( "exp_trespass_mid", -1540.00000000, 147.00000000, 15.00000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
            PLAY_SOUND_FROM_POSITION( -1, "B4_TRESPASS_SMALL_EXPLOSION", -1540.00000000, 147.00000000, 15.00000000 );
            WAIT( 120 );
            TRIGGER_PTFX( "exp_trespass_upper", -1540.00000000, 147.00000000, 20.00000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
            PLAY_SOUND_FROM_POSITION( -1, "B4_TRESPASS_SMALL_EXPLOSION", -1540.00000000, 147.00000000, 20.00000000 );
            WAIT( 100 );
            START_PTFX( "trespass_plume", -1540.00000000, 147.00000000, 15.50000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
            WAIT( 600 );
            if (NOT (IS_CAR_DEAD( l_U2624[1] )))
            {
                EXPLODE_CAR_IN_CUTSCENE( l_U2624[1], 1 );
            }
            WAIT( 1000 );
            STOP_SOUND( l_U677 );
            if (l_U2665 == 1)
            {
                if (NOT (IS_CAR_DEAD( l_U2622 )))
                {
                    if (# -NULL-0xbfc08d( l_U2622 ))
                    {
                        PRINT_NOW( "RECORDING", 4000, 1 );
                        # -NULL-0xbfbbdd( l_U2622 );
                    }
                }
            }
            l_U563[2] = 1;
        }
    }
    if ((sub_35630()) || (TIMERA() > 15300))
    {
        SET_CHAR_COORDINATES( l_U628, -1522.63900000, 146.51950000, 33.56990000 );
        CLEAR_ROOM_FOR_CHAR( l_U628 );
        DELETE_OBJECT( ref l_U2629 );
        DELETE_CHAR( ref l_U729 );
        DELETE_CAR( ref l_U2622 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_13247( ref l_U624, 0 );
        sub_13314( 0 );
        STOP_PED_SPEAKING( l_U628, 0 );
        SAY_AMBIENT_SPEECH( l_U628, "KILLED_ALL", 1, 1, 0 );
        l_U646 = 1;
        l_U645 = -1;
    }
    return;
}

void sub_41266()
{
    if ((sub_41280( l_U628 )) < 25)
    {
        SET_CHAR_HEALTH( l_U628, 25 );
    }
    sub_21624( 19, "B5_CPASS", "B5AUD", 0 );
    CLEAR_WANTED_LEVEL( l_U629 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 61 );
    sub_41400();
    sub_2684();
    l_U648 = 0;
    return;
}

void sub_41280(unknown uParam0)
{
    int Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEALTH( uParam0, ref Result );
    }
    else
    {
        Result = 0;
    }
    return Result;
}

void sub_41400()
{
    sub_41409();
    return;
}

void sub_41409()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_41427();
    sub_41486( iVar2, iVar3, iVar4 );
    return;
}

void sub_41427()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_41486(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 19;
    sub_41519( iVar5, uParam0, uParam1, uParam2, "Contact_22" );
    return;
}

void sub_41519(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_41615( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_41615( ref cVar9 );
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
            sub_41615( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_41615( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_41615( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_41615( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_42192( iParam0, iVar7 );;;
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
                sub_42589( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_42589( 0, 4 );
            }
        }
    }
    if (NOT (sub_42678( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3275(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3275() );
    }
    sub_1782();
    bVar27 = true;
    uVar28 = sub_42192( iParam0, iVar7 );
    uVar29 = sub_1239( iParam0 );
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
                sub_52054( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_52484();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_52569( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_52626( iParam0 );
                sub_52665( 0 );
                sub_1680( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_52773();
        }
    }
    if (bParam2)
    {
        sub_52484();
        sub_52861();
        sub_52665( 0 );
    }
    if (bParam3)
    {
        sub_52484();
        sub_52901();
        sub_52665( 0 );
        sub_1680( uVar29, 0 );
    }
    sub_1126();
    return;
}

void sub_41615(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_42192(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1638( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_42589(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_42678(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_42886( uParam1 );
        break;
        case 1:
        bVar8 = sub_44964( uParam1 );
        break;
        case 2:
        bVar8 = sub_45190( uParam1 );
        break;
        case 3:
        bVar8 = sub_45340( uParam1 );
        break;
        case 4:
        bVar8 = sub_45618( uParam1 );
        break;
        case 5:
        bVar8 = sub_45921( uParam1 );
        break;
        case 6:
        bVar8 = sub_46120( uParam1 );
        break;
        case 7:
        bVar8 = sub_46346( uParam1 );
        break;
        case 8:
        bVar8 = sub_46581( uParam1 );
        break;
        case 9:
        bVar8 = sub_46956( uParam1 );
        break;
        case 10:
        bVar8 = sub_47203( uParam1 );
        break;
        case 11:
        bVar8 = sub_47342( uParam1 );
        break;
        case 12:
        bVar8 = sub_47641( uParam1 );
        break;
        case 13:
        bVar8 = sub_47869( uParam1 );
        break;
        case 14:
        bVar8 = sub_48156( uParam1 );
        break;
        case 15:
        bVar8 = sub_48438( uParam1 );
        break;
        case 16:
        bVar8 = sub_48720( uParam1 );
        break;
        case 17:
        bVar8 = sub_48921( uParam1 );
        break;
        case 18:
        bVar8 = sub_48994( uParam1 );
        break;
        case 19:
        bVar8 = sub_49208( uParam1 );
        break;
        case 20:
        bVar8 = sub_49461( uParam1 );
        break;
        case 21:
        bVar8 = sub_49708( uParam1 );
        break;
        case 22:
        bVar8 = sub_49909( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_44569( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_42192( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_50232( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_42886(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_43165( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_43165( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_43165( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_43165( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_43165( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_43165( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_43165( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_43165( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_43165( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_43165( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_43165( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_43165( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_43165( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_43165( iVar3, 0, 3, 1, 0, 0 );
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
        sub_43165( iVar3, 0, sub_44447(), sub_44713(), 0, 0 );
        break;
        default:
        sub_44872( "Friend 1", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Friend 1", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_43165(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_43176( uParam1 );
    sub_43350( uParam0, 0, uParam2 );
    sub_43350( uParam0, 1, uParam3 );
    sub_43350( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_41427();
    return;
}

void sub_43176(unknown uParam0)
{
    ADD_SCORE( sub_3275(), uParam0 );
    sub_43201( uParam0 );
    return;
}

void sub_43201(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1638( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_43350(unknown uParam0, int iParam1, int iParam2)
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
        sub_43507( uParam0 );
    }
    return;
}

void sub_43507(unknown uParam0)
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

int sub_44447()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_44569( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_44569(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_44713()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_44569( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_44872(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_44964(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_43165( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_44872( "Contact 2", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 2", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45190(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_43165( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_44872( "Girl 3", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Girl 3", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45340(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_43165( iVar3, 0, sub_44447(), sub_44713(), 0, 0 );
        break;
        default:
        sub_44872( "Friend 4", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Friend 4", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45618(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_43165( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_43165( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_43165( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_43165( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_44872( "Contact 5", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 5", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45921(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_44872( "Contact 7", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 7", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46120(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_43165( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_44872( "Contact 7b", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 7b", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46346(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_43165( iVar3, 0, sub_44447(), sub_44713(), 0, 0 );
        break;
        default:
        sub_44872( "Friend 8", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Friend 8", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46581(unknown uParam0)
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
        sub_43165( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_43165( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_43165( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_43165( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_43165( iVar3, 0, sub_44447(), sub_44713(), 0, 0 );
        break;
        default:
        sub_44872( "Friend 9", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Friend 9", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46956(unknown uParam0)
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
        sub_43165( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_43165( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_43165( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_44872( "Contact 10", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_44872( "Contact 10", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47203(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_44872( "Girl 11", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Girl 11", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47342(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_43165( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_43165( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_43165( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_43165( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_43165( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_44872( "Contact 12", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 12", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47641(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_43165( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_44872( "Contact 13", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 13", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47869(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_43165( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_43165( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_43165( iVar3, 0, sub_44447(), sub_44713(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_44872( "Friend 15", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Friend 15", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48156(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_43165( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_43165( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_43165( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_44872( "Contact 16", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 16", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48438(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_43165( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_43165( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_43165( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_44872( "Contact 18", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 18", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48720(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_44872( "Contact 19", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 19", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48921(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_44872( "Girl 20", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48994(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_44872( "Contact 21", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 21", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49208(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_43165( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_43165( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_44872( "Contact 22", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 22", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49461(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_43165( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_43165( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_43165( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_44872( "Contact 24", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 24", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49708(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_43165( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_43165( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_43165( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_44872( "Contact 25", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44872( "Contact 25", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49909(unknown uParam0)
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
        sub_43165( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_44872( "Girl 26", 1 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_44872( "Girl 26", 0 );
        sub_43165( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_50232(int iParam0, int iParam1)
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
    if (sub_50280( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_51011( iParam1 );
    }
    return;
}

int sub_50280(int iParam0, int iParam1)
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
            sub_50420( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_50420(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_50602( 0 );
    return;
}

void sub_50602(boolean bParam0)
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
        sub_50857();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_50857()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_51011(int iParam0)
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
        sub_51344( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_51344( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_51344( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_51344( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_51344( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_51344( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_51344( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_51344( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_51344( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_51344( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_51344( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_51344( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_51344( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_51344( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_51344( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_51344( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_51344( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_51344( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_51344( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_51344(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_52054(unknown uParam0, unknown uParam1)
{
    sub_52073( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_52073(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_52484()
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

int sub_52569(int iParam0, int iParam1)
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

void sub_52626(unknown uParam0)
{
    sub_1025();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_52665(unknown uParam0)
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

void sub_52773()
{
    sub_52782();
    return;
}

void sub_52782()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_52861()
{
    sub_52782();
    return;
}

void sub_52901()
{
    sub_52782();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

