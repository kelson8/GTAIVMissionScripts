void main()
{
    l_U0 = {0.00000000, 0.00000000, 0.00000000};
    l_U118 = {1.00000000, 1.00000000, 1.00000000};
    l_U121 = {0.00000000, 1.00000000, 0.00000000};
    l_U124 = {0.00000000, -1.00000000, 0.00000000};
    l_U137 = 0;
    l_U138 = 0;
    l_U149 = 100.00000000;
    l_U150 = 10.50000000;
    l_U151 = 0.50000000;
    l_U152 = 2.85000000;
    l_U259 = 0;
    l_U260 = 1;
    l_U261 = 3;
    l_U263 = 0;
    l_U280 = -1;
    l_U284 = 0;
    l_U285 = 1;
    l_U286 = 1;
    l_U294 = 150.00000000;
    l_U384 = 0;
    l_U385 = 150.00000000;
    l_U435 = 0;
    l_U638 = 0;
    l_U639 = 0;
    l_U650 = 1;
    l_U705 = 0;
    l_U716 = 0;
    l_U1588 = {-541.32300000, 1259.03500000, 90.00000000};
    l_U1591 = 83.00000000;
    l_U1592 = {-544.81900000, 1257.20000000, 31.63400000};
    l_U1595 = 0.00000000;
    l_U1606 = {0.00000000, -8.00000000, 1.50000000};
    l_U1609 = 6.00000000;
    l_U1610 = 0.80000000;
    l_U1611 = 2.00000000;
    l_U1612 = {0.00000000, 2.00000000, 0.00000000};
    l_U1615 = {-537.38000000, 1255.26000000, 89.00000000};
    l_U1618 = 0.40000000;
    l_U1638 = {-469.01920000, 1263.54000000, 20.60930000};
    l_U1641 = {-525.51540000, 1261.51300000, 17.47150000};
    l_U1644 = {-495.19060000, 1266.86600000, 17.45390000};
    l_U1647 = 224.96360000;
    l_U1652 = 180.00000000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_521();
        sub_2631();
    }
    else
    {
        sub_3416();
        l_U650 = 1;
    }
    while (l_U650)
    {
        sub_7531();
        switch (l_U647)
        {
            case 0:
            sub_7752();
            break;
            case 1:
            sub_14623();
            break;
            case 2:
            sub_20248();
            break;
            case 3:
            sub_25286();
            break;
            case 4:
            sub_29730();
            sub_33556();
            break;
            case 5:
            sub_33683();
            sub_33556();
            break;
            case 6:
            sub_33936();
            sub_33556();
            break;
            case 7:
            sub_34777();
            sub_33556();
            break;
            case 8:
            sub_37423();
            sub_33556();
            break;
            case 9:
            sub_54270();
            break;
            case -1: break;
        }
        if (l_U648)
        {
            sub_39066();
        }
        else if (l_U649)
        {
            sub_14260();
        }
        WAIT( 0 );
    }
    sub_2631();
    return;
}

void sub_521()
{
    sub_530();
    return;
}

void sub_530()
{
    int iVar2;

    iVar2 = 14;
    sub_544( iVar2 );
    sub_1720( iVar2 );
    return;
}

void sub_544(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_588();
        sub_749();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_857();
            sub_896();
        }
    }
    sub_972();
    sub_1073();
    uVar5 = sub_1186( uParam0 );
    sub_1627( uVar5, 0 );
    return;
}

void sub_588()
{
    sub_602( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_702();
    }
    return;
}

void sub_602(int iParam0)
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

void sub_702()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_749()
{
    sub_758();
    return;
}

void sub_758()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_857()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_896()
{
    sub_905();
    return;
}

void sub_905()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_972()
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

void sub_1073()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1095();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1095()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1186(unknown uParam0)
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
    sub_1585( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1585(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1627(int iParam0, boolean bParam1)
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

void sub_1720(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1729();
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
        sub_2504();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1729()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1767( 5, g_U569[I] )) == 1))
        {
            if ((sub_1767( 1, g_U569[I] )) != 0)
            {
                sub_2053( I );
            }
        }
    }
    if (NOT sub_2219())
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

int sub_1767(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2053(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2138( g_U569 - 1 );
    return;
}

void sub_2138(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2219()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1767( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2504()
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

void sub_2631()
{
    CLEAR_NAMED_CUTSCENE( "IMRAY1" );
    sub_2667( 4, "LFTHELP" );
    sub_3039();
    PRINTSTRING( "Removed models" );
    PRINTNL();
    sub_3148();
    PRINTSTRING( "Removed anims" );
    PRINTNL();
    sub_3258();
    PRINTSTRING( "Removed cover points" );
    PRINTNL();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_3363();
    return;
}

void sub_2667(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((l_U258) AND (g_U9172 == iParam0))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U258 = 0;
                if (l_U256)
                {
                    sub_2894();
                    l_U256 = 0;
                }
            }
            if (l_U257)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2947(), 1 );
                l_U257 = 0;
            }
            if (l_U255)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U255 = 0;
            }
        }
    }
    return;
}

void sub_2894()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_2947()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3039()
{
    int I;

    if (l_U36 != 0)
    {
        for ( I = 0; I <= (l_U36 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3[I] );
        }
    }
    l_U36 = 0;
    return;
}

void sub_3148()
{
    int I;

    if (l_U46 != 0)
    {
        for ( I = 0; I <= (l_U46 - 1); I++ )
        {
            REMOVE_ANIMS( l_U37[I] );
        }
    }
    l_U46 = 0;
    return;
}

void sub_3258()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        REMOVE_COVER_POINT( l_U65[I] );
    }
    return;
}

void sub_3363()
{
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3416()
{
    g_U15654[47] = 1;
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "RAY1", 0 );
    LOAD_ADDITIONAL_TEXT( "RB1AUD", 6 );
    sub_3485( "RB1AUD" );
    SET_WANTED_MULTIPLIER( 0.50000000 );
    l_U147 = sub_3610();
    l_U148 = sub_2947();
    if (IS_PLAYER_PLAYING( l_U148 ))
    {
        GET_PLAYER_GROUP( l_U148, ref l_U146 );
    }
    sub_3713( 0, l_U147, "NIKO", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U1628 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U1627 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U1626 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U1629 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U1631 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U1630 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1632 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U1633 );
    LOAD_COMBAT_DECISION_MAKER( 5, ref l_U1634 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U1631, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U1632, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U1633, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE( l_U1633, 100 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1632, 0 );
    CREATE_CAM( 14, ref l_U145 );
    l_U1529[0]._fU4 = {-540.14360000, 1265.67900000, 100.49350000};
    l_U1529[0]._fU16 = 167.64450000;
    l_U1529[0]._fU24 = "ProjectST_MloRoom01";
    l_U1529[0]._fU20 = 10.00000000;
    l_U1529[1]._fU4 = {-542.33210000, 1245.64800000, 96.49960000};
    l_U1529[1]._fU16 = 170.14760000;
    l_U1529[1]._fU24 = "Rm1a_MloRoom";
    l_U1529[1]._fU20 = 10.00000000;
    l_U1529[2]._fU4 = {-533.88500000, 1243.32100000, 88.50060000};
    l_U1529[2]._fU16 = 38.29650000;
    l_U1529[2]._fU24 = "Rm4a_MloRoom";
    l_U1529[2]._fU20 = 20.00000000;
    l_U1529[3]._fU4 = {-548.18020000, 1245.87200000, 92.50440000};
    l_U1529[3]._fU16 = 353.06550000;
    l_U1529[3]._fU24 = "Rm2a_MloRoom";
    l_U1529[3]._fU20 = 20.00000000;
    l_U724[0]._fU4 = {-531.61560000, 1263.41400000, 89.53570000};
    l_U724[0]._fU16 = {-541.91330000, 1260.33300000, 89.53570000};
    l_U724[0]._fU52 = "ProjectSGB_MloRoom1";
    l_U724[1]._fU4 = {-545.70570000, 1266.33000000, 89.53560000};
    l_U724[1]._fU16 = {-541.91330000, 1260.33300000, 89.53570000};
    l_U724[1]._fU52 = "ProjectSGB_MloRoom1";
    l_U724[2]._fU4 = {-543.76830000, 1269.96200000, 89.53540000};
    l_U724[2]._fU16 = {-540.25560000, 1265.68900000, 89.53570000};
    l_U724[2]._fU52 = "RM2a_MloRoom";
    l_U724[2]._fU60 = 2;
    l_U724[2]._fU56 = 270.35870000;
    l_U724[3]._fU4 = {-547.96720000, 1265.00200000, 88.53580000};
    l_U724[3]._fU16 = {-542.83840000, 1266.59200000, 89.53550000};
    l_U724[3]._fU52 = "ProjectSGB_MloRoom1";
    l_U724[3]._fU60 = 1;
    l_U724[3]._fU56 = 284.47660000;
    l_U724[4]._fU4 = {-548.21330000, 1252.73900000, 89.53570000};
    l_U724[4]._fU16 = {-548.64060000, 1264.57800000, 89.53580000};
    l_U724[4]._fU52 = "ProjectSGB_MloRoom1";
    l_U724[4]._fU60 = 1;
    l_U724[4]._fU56 = 3.98550000;
    l_U885[4]._fU40 = 12;
    l_U724[5]._fU4 = {-542.99420000, 1252.77100000, 89.53570000};
    l_U724[5]._fU16 = {-550.09080000, 1252.40000000, 89.53580000};
    l_U724[5]._fU52 = "ProjectSG_MloRoom1";
    l_U724[6]._fU4 = {-536.32840000, 1257.20500000, 90.04640000};
    l_U724[6]._fU16 = {-544.82790000, 1251.01400000, 89.53570000};
    l_U724[6]._fU52 = "ProjectSG_MloRoom1";
    l_U724[6]._fU60 = 3;
    l_U724[6]._fU40 = 11;
    l_U724[7]._fU64 = 1;
    l_U885[0]._fU4 = {-541.43340000, 1250.73100000, 92.53960000};
    l_U885[0]._fU16 = {-537.76490000, 1253.88000000, 92.53960000};
    l_U885[0]._fU52 = "ProjectSGB_MloRoom1";
    l_U885[0]._fU56 = 338.41240000;
    l_U885[0]._fU60 = 1;
    l_U885[5]._fU4 = {-545.01920000, 1251.96000000, 92.53960000};
    l_U885[5]._fU16 = {-537.76490000, 1253.88000000, 92.53960000};
    l_U885[5]._fU52 = "ProjectSG_MloRoom1";
    l_U724[5]._fU64 = 1;
    l_U885[1]._fU4 = {-527.43760000, 1261.61700000, 92.50450000};
    l_U885[1]._fU16 = {-542.19250000, 1266.37500000, 92.53960000};
    l_U885[1]._fU28 = {-532.70490000, 1248.63200000, 93.55660000};
    l_U885[1]._fU52 = "ProjectSGB_MloRoom1";
    l_U885[1]._fU56 = 101.84100000;
    l_U885[1]._fU40 = 12;
    l_U885[1]._fU60 = 0;
    l_U885[2]._fU4 = {-547.63350000, 1247.82100000, 92.73950000};
    l_U885[2]._fU16 = {-543.38120000, 1251.32400000, 93.53980000};
    l_U885[2]._fU52 = "RM2a_MloRoom";
    l_U885[3]._fU4 = {-549.40660000, 1253.79400000, 92.53960000};
    l_U885[3]._fU16 = {-545.49740000, 1251.04300000, 92.53960000};
    l_U885[3]._fU52 = "ProjectSGB_MloRoom1";
    l_U885[3]._fU56 = 276.02880000;
    l_U885[3]._fU60 = 2;
    l_U885[4]._fU4 = {-546.03830000, 1266.40900000, 92.53961000};
    l_U885[4]._fU16 = {-548.40060000, 1252.48100000, 93.53980000};
    l_U885[4]._fU52 = "ProjectSGB_MloRoom1";
    l_U885[5]._fU64 = 1;
    l_U885[6]._fU4 = {-540.73360000, 1264.46500000, 92.53960000};
    l_U885[6]._fU16 = {-547.17450000, 1265.42300000, 93.53980000};
    l_U885[6]._fU52 = "ProjectSG_MloRoom1";
    l_U885[7]._fU4 = {-536.33000000, 1256.77400000, 94.53960000};
    l_U885[7]._fU16 = {-547.17450000, 1265.42300000, 93.53980000};
    l_U885[7]._fU52 = "ProjectSG_MloRoom1";
    l_U885[7]._fU40 = 11;
    l_U1046[0]._fU4 = {-542.91970000, 1256.86500000, 96.53470000};
    l_U1046[0]._fU16 = {-534.90060000, 1254.87200000, 95.55580000};
    l_U1046[0]._fU52 = "ProjectSG_MloRoom1";
    l_U1046[0]._fU64 = 1;
    l_U1046[1]._fU4 = {-544.46750000, 1252.07600000, 96.53470000};
    l_U1046[1]._fU16 = {-534.90060000, 1254.87200000, 95.55580000};
    l_U1046[1]._fU52 = "ProjectSG_MloRoom1";
    l_U1046[1]._fU64 = 1;
    l_U1046[2]._fU4 = {-545.09920000, 1245.59200000, 96.49960000};
    l_U1046[2]._fU16 = {-547.15970000, 1249.50200000, 96.49960000};
    l_U1046[2]._fU52 = "RM1a_MloRoom";
    l_U1046[2]._fU40 = 7;
    l_U1046[2]._fU64 = 1;
    l_U1046[2]._fU76 = 10;
    l_U1046[3]._fU4 = {-547.40640000, 1241.09700000, 96.50460000};
    l_U1046[3]._fU16 = {-547.15970000, 1249.50200000, 96.49960000};
    l_U1046[3]._fU52 = "RM1a_MloRoom";
    l_U1046[3]._fU40 = 7;
    l_U1046[3]._fU76 = 10;
    l_U1046[4]._fU4 = {-544.70050000, 1245.47800000, 96.53470000};
    l_U1046[4]._fU16 = {-547.15970000, 1249.50200000, 96.49960000};
    l_U1046[4]._fU52 = "RM1a_MloRoom";
    l_U1046[4]._fU40 = 7;
    l_U1046[4]._fU76 = 10;
    l_U1046[5]._fU4 = {-543.86300000, 1240.32000000, 96.49960000};
    l_U1046[5]._fU16 = {-547.15970000, 1249.50200000, 96.49960000};
    l_U1046[5]._fU52 = "RM1a_MloRoom";
    l_U1046[5]._fU40 = 7;
    l_U1046[5]._fU76 = 10;
    l_U1046[6]._fU4 = {-549.09140000, 1253.58600000, 96.53460000};
    l_U1046[6]._fU16 = {-542.53300000, 1251.46200000, 97.53959000};
    l_U1046[6]._fU52 = "ProjectSGB_MloRoom";
    l_U1046[6]._fU40 = 7;
    l_U1046[6]._fU60 = 2;
    l_U1046[7]._fU64 = 1;
    l_U1207[0]._fU4 = {-538.50000000, 1260.28800000, 101.52870000};
    l_U1207[0]._fU16 = {-537.03820000, 1253.17700000, 100.54980000};
    l_U1207[0]._fU52 = "ProjectSTB_MloRoom01";
    l_U1207[0]._fU56 = 91.61740000;
    l_U1207[0]._fU60 = 1;
    l_U1207[1]._fU4 = {-540.17230000, 1264.27800000, 105.36630000};
    l_U1207[1]._fU16 = {-537.19780000, 1261.78000000, 101.53370000};
    l_U1207[1]._fU52 = "ProjectSTB_MloRoom01";
    l_U1207[1]._fU56 = 272.41160000;
    l_U1207[1]._fU60 = 2;
    l_U1207[2]._fU64 = 1;
    l_U1207[3]._fU64 = 1;
    l_U1207[4]._fU64 = 1;
    l_U1368[0]._fU4 = {-530.87620000, 1270.29600000, 104.58990000};
    l_U1368[0]._fU16 = {-538.21040000, 1265.26900000, 108.74690000};
    l_U1368[0]._fU56 = 185.64580000;
    l_U1368[0]._fU40 = 7;
    l_U1368[1]._fU64 = 1;
    l_U1368[2]._fU64 = 1;
    l_U1368[3]._fU64 = 1;
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -537.48000000, 1262.92000000, 97.71000000, 0.00000000, 0.00000000, -9.74000000, ref l_U1579[0] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1579[0], "ProjectSG_MloRoom1" );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -549.47000000, 1233, 97.52500000, 90, 0, 247.04000000, ref l_U1579[1] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1579[1], "RM1e_MloRoom" );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -549.28900000, 1246.38000000, 93.87000000, 0, 0, 80, ref l_U1579[2] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1579[2], "RM2a_MloRoom" );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 64997, 1257.63000000, 93.78000000, 0.00000000, 0.00000000, -8.74000000, ref l_U1579[3] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1579[3], "ProjectSG_MloRoom1" );
    return;
}

void sub_3485(unknown uParam0)
{
    StrCopy( ref l_U157._fU0, uParam0, 16 );
    sub_3504();
    return;
}

void sub_3504()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U157._fU16[I]._fU0 = nil;
        StrCopy( ref l_U157._fU16[I]._fU4, "", 32 );
        l_U157._fU344[I] = 0;
    }
    return;
}

void sub_3610()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3713(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U157._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U157._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3797( "\n PED NUMBER ", uParam0 );
    sub_3837( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3797(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3837(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7531()
{
    if (LOCATE_CHAR_ANY_MEANS_2D( l_U147, -544.81900000, 1257.20000000, 45.00000000, 45.00000000, 0 ))
    {
        if (l_U669 == 1)
        {
            SET_WANTED_MULTIPLIER( 0.00000000 );
            l_U669 = 0;
        }
    }
    else if (l_U669 == 0)
    {
        l_U669 = 1;
        SET_WANTED_MULTIPLIER( 1.00000000 );
    }
    return;
}

void sub_7752()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U651[l_U647] == 0)
    {
        PRINTSTRING( "ray1 : ray1GetToProjects" );
        PRINTNL();
        if (g_U9893._fU24)
        {
            ENABLE_SCENE_STREAMING( 0 );
            LOAD_SCENE( -107.80000000, -266.40000000, 12.10000000 );
            SET_CUTSCENE_EXTRA_ROOM_POS( -107.80000000, -266.40000000, 12.10000000 );
            START_CUTSCENE_NOW( "RB_1" );
            sub_7903();
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "RB_1" );
            ENABLE_SCENE_STREAMING( 1 );
        }
        SET_CHAR_COORDINATES( l_U147, -123.87170000, -256.57810000, 11.68540000 );
        SET_CHAR_HEADING( l_U147, 90.00000000 );
        LOAD_SCENE( -123.63790000, -256.57810000, 11.68540000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL( l_U148, 1 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        PRINT_NOW( "G4_GT_01", 7500, 1 );
        ADD_BLIP_FOR_COORD( l_U1638._fU0, l_U1638._fU4, l_U1638._fU8, ref l_U1620 );
        SET_ROUTE( l_U1620, 1 );
        SETTIMERA( 0 );
        l_U651[l_U647] = 1;
    }
    if ((l_U82[2] == 0) AND (TIMERA() > 10000))
    {
        sub_8613( 14, 1, 16383, 16383, ref l_U682 );
        sub_8960( ref l_U682, 1 );
        sub_8991( ref l_U682, 0 );
        sub_9022( ref l_U682, 0 );
        sub_9055( ref l_U682 );
        l_U82[2] = 1;
    }
    if ((l_U82[1] == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( l_U147, l_U1638._fU0, l_U1638._fU4, 150.00000000, 150.00000000, 0 )))
    {
        sub_9894( -1345134469 );
        sub_9894( -196312163 );
        sub_9894( -268530289 );
        sub_9894( -1326394505 );
        sub_9894( 135553133 );
        sub_9894( -121234208 );
        sub_9894( -16333017 );
        sub_9894( 1667998832 );
        sub_9894( -1346357795 );
        sub_10035( "missRay1" );
        sub_10035( "gestures@niko" );
        sub_9894( 492147228 );
        while (NOT sub_10156())
        {
            PRINTSTRING( "Waiting on a model" );
            PRINTNL();
            WAIT( 0 );
        }
        while (NOT sub_10309())
        {
            PRINTSTRING( "Waiting on an anim" );
            PRINTNL();
            WAIT( 0 );
        }
        while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\RB1_PROJECT_TAKEDOWN" )))
        {
            WAIT( 0 );
        }
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 106751028, -548.00000000, 1249.80000000, 97.80001000, 1, 0.00000000 );
        CLEAR_AREA_OF_COPS( l_U1644._fU0, l_U1644._fU4, l_U1644._fU8, 50.00000000 );
        SET_CREATE_RANDOM_COPS( 0 );
        CREATE_CHAR( 26, -1326394505, l_U1644._fU0, l_U1644._fU4, l_U1644._fU8, ref l_U1569, 1 );
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U1569, 1 );
        SET_CHAR_COORDINATES_NO_OFFSET( l_U1569, l_U1644._fU0, l_U1644._fU4, l_U1644._fU8 );
        SET_CHAR_HEALTH( l_U1569, 225 );
        SET_CHAR_MAX_HEALTH( l_U1569, 225 );
        sub_10706( ref l_U1569 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1569, 1 );
        FREEZE_CHAR_POSITION( l_U1569, 1 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U1569, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1569, 1 );
        sub_3713( 3, l_U1569, "PROJECT_RESIDENT_1_M", 0 );
        SET_AMBIENT_VOICE_NAME( l_U1569, "PROJECT_RESIDENT_1_M" );
        SET_CHAR_COMPONENT_VARIATION( l_U1569, 1, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1569, 2, 0, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U1569, 5, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1569, 4, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1569, 0, 0, 0 );
        TASK_PLAY_ANIM( l_U1569, "stand_smoke", "missRay1", 8.00000000, 1, 0, 0, 0, -1 );
        CREATE_OBJECT( -268530289, 937.70000000, 335.40000000, 32.40000000, ref l_U693, 1 );
        ATTACH_OBJECT_TO_PED( l_U693, l_U1569, 1232, l_U0, l_U0, 0 );
        SET_CHAR_HEADING( l_U1569, l_U1647 );
        TASK_LOOK_AT_CHAR( l_U1569, l_U147, 10000, 0 );
        CREATE_OBJECT_NO_OFFSET( -121234208, -542.77000000, 1258.52000000, 17.60000000, ref l_U1578, 1 );
        SET_OBJECT_HEADING( l_U1578, 79.02300000 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1578, "ProjectF1_MloRoom" );
        FREEZE_OBJECT_POSITION( l_U1578, 1 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U1578, 0.00000000, -0.15000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT_NO_OFFSET( -121234208, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U695, 1 );
        SET_OBJECT_HEADING( l_U695, 79.02300000 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U695, "ProjectF1_MloRoom" );
        FREEZE_OBJECT_POSITION( l_U695, 1 );
        SET_OBJECT_VISIBLE( l_U695, 0 );
        SET_OBJECT_COLLISION( l_U695, 0 );
        CREATE_OBJECT_NO_OFFSET( 135553133, -544.81900000, 1257.20000000, 18.04000000, ref l_U1571, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1571, "ProjectF1_MloRoom" );
        SET_OBJECT_HEADING( l_U1571, 80.44999000 );
        FREEZE_OBJECT_POSITION( l_U1571, 1 );
        CREATE_OBJECT_NO_OFFSET( 135553133, -544.31900000, 1260.49900000, 18.04000000, ref l_U1572, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1572, "ProjectF1_MloRoom" );
        SET_OBJECT_HEADING( l_U1572, 80.00000000 );
        FREEZE_OBJECT_POSITION( l_U1572, 1 );
        CREATE_OBJECT_NO_OFFSET( -16333017, -543.12300000, 1260.33400000, 17.84000000, ref l_U1573, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1573, "ProjectF1_MloRoom" );
        SET_OBJECT_HEADING( l_U1573, 80.00000000 );
        FREEZE_OBJECT_POSITION( l_U1573, 1 );
        CREATE_OBJECT_NO_OFFSET( 1667998832, -543.11900000, 1260.29900000, 17.84000000, ref l_U1574, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1574, "ProjectF1_MloRoom" );
        SET_OBJECT_HEADING( l_U1574, 80.00000000 );
        FREEZE_OBJECT_POSITION( l_U1574, 1 );
        CREATE_OBJECT_NO_OFFSET( -16333017, -543.12300000, 1260.33400000, 89.73549000, ref l_U1575, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1575, "ProjectSG_MloRoom1" );
        SET_OBJECT_HEADING( l_U1575, 80.00000000 );
        FREEZE_OBJECT_POSITION( l_U1575, 1 );
        CREATE_OBJECT_NO_OFFSET( 1667998832, -543.11900000, 1260.29900000, 89.73549000, ref l_U1576, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1576, "ProjectSG_MloRoom1" );
        SET_OBJECT_HEADING( l_U1576, 80.00000000 );
        FREEZE_OBJECT_POSITION( l_U1576, 1 );
        OPEN_SEQUENCE_TASK( ref l_U1637 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U147 );
        CLOSE_SEQUENCE_TASK( l_U1637 );
        CREATE_CHAR( 26, 492147228, -480.72720000, 1270.31600000, 16.47930000, ref l_U700, 1 );
        CREATE_CHAR( 26, 492147228, -479.77880000, 1269.43800000, 16.48960000, ref l_U701, 1 );
        CREATE_CHAR( 26, 492147228, -481.23540000, 1259.16800000, 16.47470000, ref l_U702, 1 );
        SET_CHAR_HEADING( l_U702, 320.47690000 );
        SET_CHAR_PROP_INDEX( l_U700, 0, 0 );
        sub_12076( l_U700, l_U701 );
        sub_12076( l_U701, l_U700 );
        TASK_LOOK_AT_CHAR( l_U702, l_U147, -2, 0 );
        TASK_CHAT_WITH_CHAR( l_U701, l_U700, 1, 1 );
        TASK_CHAT_WITH_CHAR( l_U700, l_U701, 0, 1 );
        l_U82[1] = 1;
    }
    if (l_U82[1] == 1)
    {
        sub_12327();
    }
    if (l_U82[0] == 0)
    {
        if ((sub_12844( 1, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U147, l_U1638._fU0, l_U1638._fU4, l_U1638._fU8, 2.50000000, 2.50000000, 2.50000000, 1 )))
        {
            sub_13135();
            if (NOT (IS_CHAR_DEAD( l_U1569 )))
            {
                UNLOCK_RAGDOLL( l_U1569, 1 );
            }
            REMOVE_BLIP( l_U1620 );
            PRINT_NOW( "G4_GT_06", 7500, 1 );
            l_U82[0] = 1;
        }
    }
    if (DOES_CHAR_EXIST( l_U1569 ))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U147 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U147, ref l_U718 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1569 )))
        {
            if (DOES_VEHICLE_EXIST( l_U718 ))
            {
                if (NOT (IS_CAR_DEAD( l_U718 )))
                {
                    if (IS_CHAR_TOUCHING_VEHICLE( l_U1569, l_U718 ))
                    {
                        l_U670 = 1;
                    }
                }
            }
        }
        if ((l_U670 == 1) || ((sub_13506( l_U1569 )) < 225))
        {
            if (NOT (IS_CHAR_DEAD( l_U1569 )))
            {
                DAMAGE_CHAR( l_U1569, 400, 1 );
            }
            REMOVE_BLIP( l_U1623 );
            CLEAR_PRINTS();
            PRINT_NOW( "G4_FT_01", 7500, 1 );
            sub_13674( 14, "RB1_CALLF2", "RB1AUD", 0 );
            sub_14260();
        }
    }
    if ((sub_12844( 1, 1 )) AND (LOCATE_CHAR_ON_FOOT_3D( l_U147, l_U1644._fU0, l_U1644._fU4, l_U1644._fU8, 6.50000000, 6.50000000, 2.50000000, 0 )))
    {
        if (DOES_BLIP_EXIST( l_U1620 ))
        {
            REMOVE_BLIP( l_U1620 );
        }
        sub_14548();
        l_U647++;
    }
    return;
}

void sub_7903()
{
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U153 );
    if ((l_U153 != nil) AND ((NOT (IS_CAR_DEAD( l_U153 ))) AND (DOES_VEHICLE_EXIST( l_U153 ))))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( l_U153 )))
        {
            SET_CAR_AS_MISSION_CAR( l_U153 );
            l_U156 = 1;
        }
        if (LOCATE_CAR_3D( l_U153, -127.03000000, -260.57000000, 11.69000000, 15.00000000, 15.00000000, 15.00000000, 0 ))
        {
            if ((l_U154 != nil) AND (l_U154 != l_U153))
            {
                if (DOES_VEHICLE_EXIST( l_U154 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U154 );
                }
            }
            CLEAR_AREA( -126.66210000, -266.25630000, 11.55910000, 3.00000000, 1 );
            SET_CAR_HEADING( l_U153, 0.00000000 );
            SET_CAR_COORDINATES( l_U153, -127.03000000, -260.25630000, 12.55910000 );
            if (NOT (IS_THIS_MODEL_A_BOAT( l_U155 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U153 );
            }
        }
        if (l_U156 == 1)
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U153 );
            l_U156 = 0;
        }
        l_U154 = l_U153;
    }
    return;
}

void sub_8613(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_8635( uParam0, 0, iParam4 + 0 );
    sub_8635( uParam1, 1, iParam4 + 0 );
    sub_8635( uParam2, 2, iParam4 + 0 );
    sub_8635( uParam3, 3, iParam4 + 0 );
    sub_8635( 0, 4, iParam4 + 0 );
    sub_8635( 1, 5, iParam4 + 0 );
    sub_8635( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_8635(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_8960(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_8991(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_9022(int iParam0, unknown uParam1)
{
    sub_8635( uParam1, 6, iParam0 + 0 );
    return;
}

int sub_9055(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_9125())
        {
            sub_2053( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_9252( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2053( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_1767( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_1767( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_9125()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1767( 1, g_U569[I] )) != 0))
        {
            sub_2053( I );
            return 1;
        }
    }
    return 0;
}

int sub_9252(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_9317( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_9317(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_1767( 0, uParam0 );
        if (iVar14 == (sub_1767( 0, uParam6 )))
        {
            iVar15 = sub_1767( 3, uParam0 );
            if (iVar15 == (sub_1767( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_9894(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U3[l_U36] = uParam0;
    l_U36++;
    return;
}

void sub_10035(unknown uParam0)
{
    PRINTSTRING( "Requesting :" );
    PRINTSTRING( uParam0 );
    PRINTNL();
    REQUEST_ANIMS( uParam0 );
    l_U37[l_U46] = uParam0;
    l_U46++;
    return;
}

int sub_10156()
{
    int I;

    if (l_U36 != 0)
    {
        for ( I = 0; I <= (l_U36 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U3[I] )))
            {
                PRINTINT( I );
                PRINTNL();
                return 0;
            }
        }
    }
    return 1;
}

int sub_10309()
{
    int I;

    if (l_U46 != 0)
    {
        for ( I = 0; I <= (l_U46 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U37[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_10706(unknown uParam0)
{
    g_U64922 = (uParam0^);
    return;
}

void sub_12076(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    GET_HEADING_FROM_VECTOR_2D( uVar10._fU0, uVar10._fU4, ref uVar13 );
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_PED_RAGDOLL( uParam0 )))
        {
            SET_CHAR_HEADING( uParam0, uVar13 );
        }
    }
    return;
}

void sub_12327()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    GET_GAME_TIMER( ref l_U671 );
    if ((l_U671 - l_U672) > l_U673)
    {
        uVar4 = {sub_12374( l_U147 )};
        PRINTSTRING( "Whatline?: " );
        PRINTINT( l_U674 );
        PRINTNL();
        switch (l_U674)
        {
            case 0:
            SAY_AMBIENT_SPEECH( l_U701, "CONV_GANG_STATE", 1, 0, 0 );
            l_U674 = 2;
            l_U673 = 3500;
            break;
            case 1:
            SAY_AMBIENT_SPEECH( l_U701, "CONV_SMOKE_STATE", 1, 0, 0 );
            l_U674 = 3;
            l_U673 = 3500;
            break;
            case 2:
            SAY_AMBIENT_SPEECH( l_U700, "CONV_GANG_RESP", 1, 0, 0 );
            l_U674 = 1;
            l_U673 = 7500;
            break;
            case 3:
            SAY_AMBIENT_SPEECH( l_U700, "CONV_SMOKE_RESP", 1, 0, 0 );
            l_U674 = 0;
            l_U673 = 7500;
            break;
        }
        GET_GAME_TIMER( ref l_U672 );
    }
    return;
}

void sub_12374(unknown uParam0)
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

int sub_12844(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3610() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3610(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3610() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3610(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3610()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3610() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3610() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2947() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2947() )))
    {
        return 0;
    }
    return 1;
}

void sub_13135()
{
    float fVar2;
    unknown uVar3;

    if ((IS_CHAR_ON_ANY_BIKE( sub_3610() )) || (IS_CHAR_IN_ANY_CAR( sub_3610() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3610(), ref uVar3 );
        if (IS_VEH_DRIVEABLE( uVar3 ))
        {
            SET_PLAYER_CONTROL( sub_2947(), 0 );
            GET_CAR_SPEED( uVar3, ref fVar2 );
            while (fVar2 > 0.20000000)
            {
                WAIT( 0 );
                if (NOT (IS_CAR_DEAD( uVar3 )))
                {
                    GET_CAR_SPEED( uVar3, ref fVar2 );
                }
            }
            SET_PLAYER_CONTROL( sub_2947(), 1 );
        }
    }
    return;
}

void sub_13506(unknown uParam0)
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

void sub_13674(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_13718( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_13718(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_14260()
{
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2947(), 150 );
        SAY_AMBIENT_SPEECH( l_U147, "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_14331();
    sub_2631();
    return;
}

void sub_14331()
{
    sub_14340();
    return;
}

void sub_14340()
{
    int iVar2;

    iVar2 = 14;
    sub_14354( iVar2 );
    sub_1720( iVar2 );
    return;
}

void sub_14354(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2947(), 150 );
    CLEAR_HELP();
    sub_544( uParam0 );
    return;
}

void sub_14548()
{
    int I;

    for ( I = 0; I <= 31; I++ )
    {
        l_U82[I] = 0;
    }
    return;
}

void sub_14623()
{
    int iVar2;

    if (l_U651[l_U647] == 0)
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U700 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U701 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U702 );
        REMOVE_PED_HELMET( l_U147, 1 );
        PRINTSTRING( "ray1 : ray1FindOutApartmentCutscene" );
        PRINTNL();
        if (NOT (IS_CHAR_DEAD( l_U1569 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U1636 );
            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, -493.97900000, 1265.71200000, 17.48410000, 2, 15000, -1 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1569 );
            TASK_LOOK_AT_CHAR( 0, l_U1569, 30000, 0 );
            CLOSE_SEQUENCE_TASK( l_U1636 );
            CLEAR_CHAR_TASKS( l_U147 );
            TASK_PERFORM_SEQUENCE( l_U147, l_U1636 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U1569, 1 );
            TASK_LOOK_AT_CHAR( l_U1569, l_U147, 10000, 0 );
        }
        SETTIMERA( 0 );
        REMOVE_BLIP( l_U1623 );
        CREATE_CAM( 14, ref l_U140 );
        CREATE_CAM( 14, ref l_U142 );
        SET_CAM_POS( l_U140, -489.01550000, 1272.55400000, 27.14601000 );
        SET_CAM_ROT( l_U140, -48.91621000, 0.00000000, 147.32670000 );
        SET_CAM_FOV( l_U140, 45.00000000 );
        SET_CAM_POS( l_U142, -489.01550000, 1272.55400000, 27.14601000 );
        SET_CAM_ROT( l_U142, -48.91621000, 0.00000000, 147.32670000 );
        SET_CAM_FOV( l_U142, 42.00000000 );
        CREATE_CAM( 3, ref l_U143 );
        SET_CAM_INTERP_STYLE_CORE( l_U143, l_U140, l_U142, 4500, 0 );
        CLEAR_AREA( -494.60950000, 1265.51900000, 16.48740000, 5.00000000, 1 );
        sub_15171( 1 );
        sub_15274( ref l_U143, 1 );
        l_U651[l_U647] = 1;
    }
    GET_SCRIPT_TASK_STATUS( l_U147, 29, ref iVar2 );
    if ((l_U82[13] == 0) AND ((TIMERA() > 750) AND ((l_U82[11] == 0) AND (iVar2 == 7))))
    {
        SET_USE_HIGHDOF( 1 );
        SET_CHAR_COORDINATES( l_U147, -494.62760000, 1265.50600000, -100.00000000 );
        sub_12076( l_U147, l_U1569 );
        sub_12076( l_U1569, l_U147 );
        sub_15487( "RB1_WHERE", 0, 1, ref l_U641, 8, 1 );
        SET_CAM_POS( l_U145, -494.62810000, 1267.74800000, 18.08209000 );
        SET_CAM_ROT( l_U145, -2.11254500, -0.00000000, 164.11680000 );
        SET_CAM_FOV( l_U145, 34.20003000 );
        if (NOT GET_IS_WIDESCREEN())
        {
            SET_CAM_FOV( l_U145, 36.00000000 );
        }
        SET_CAM_DOF_FOCUSPOINT( l_U145, -494.62760000, 1265.50600000, 16.45040000, 5.00000000 );
        sub_15274( ref l_U143, 0 );
        sub_15274( ref l_U145, 1 );
        SETTIMERA( 0 );
        l_U82[11] = 1;
    }
    if (iVar2 != 7)
    {
        SETTIMERA( 0 );
    }
    if ((l_U82[13] == 0) AND ((l_U668 == 0) AND (TIMERA() > 3000)))
    {
        sub_15487( "RB1_WHERE", 1, 1, ref l_U641, 8, 1 );
        SET_CAM_POS( l_U140, -494.10830000, 1265.39900000, 18.11092000 );
        SET_CAM_ROT( l_U140, -6.41149000, 0.00000000, 60.28284000 );
        SET_CAM_FOV( l_U140, 41.90000000 );
        if (NOT GET_IS_WIDESCREEN())
        {
            SET_CAM_FOV( l_U140, 42.00000000 );
        }
        SET_CAM_NEAR_DOF( l_U140, 1.00000000 );
        SET_CAM_FAR_DOF( l_U140, 6.00000000 );
        SET_CAM_POS( l_U142, -494.10830000, 1265.39900000, 18.11092000 );
        SET_CAM_ROT( l_U142, -6.41149000, 0.00000000, 60.28284000 );
        SET_CAM_FOV( l_U142, 39.90000000 );
        if (NOT GET_IS_WIDESCREEN())
        {
            SET_CAM_FOV( l_U142, 40.50000000 );
        }
        SET_CAM_NEAR_DOF( l_U142, 1.00000000 );
        SET_CAM_FAR_DOF( l_U142, 6.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U143, l_U140, l_U142, 4500, 0 );
        sub_15274( ref l_U145, 0 );
        sub_15274( ref l_U143, 1 );
        l_U668 = 1;
    }
    if (l_U82[13] == 0)
    {
        if ((NOT (sub_17079( l_U641 ))) AND ((l_U668 == 1) AND (l_U82[12] == 0)))
        {
            sub_15487( "RB1_WHERE", 2, 1, ref l_U641, 8, 1 );
            SET_CAM_POS( l_U145, -494.62810000, 1267.74800000, 18.08209000 );
            SET_CAM_ROT( l_U145, -2.11254500, -0.00000000, 164.11680000 );
            SET_CAM_FOV( l_U145, 38.20003000 );
            if (NOT GET_IS_WIDESCREEN())
            {
                SET_CAM_FOV( l_U145, 39.00000000 );
            }
            sub_15274( ref l_U145, 1 );
            sub_15274( ref l_U143, 0 );
            l_U82[12] = 1;
        }
    }
    if (l_U82[13] == 0)
    {
        if ((l_U703 == 0) AND ((NOT (sub_17079( l_U641 ))) AND (l_U82[12] == 1)))
        {
            sub_15487( "RB1_WHERE", 3, 1, ref l_U641, 8, 1 );
            l_U703 = 1;
        }
    }
    if (l_U82[13] == 0)
    {
        if ((TIMERA() > 1000) AND ((IS_SCREEN_FADED_IN()) AND (sub_17505())))
        {
            l_U681 = 1;
        }
    }
    if ((l_U681 == 1) || ((l_U82[13] == 0) AND ((NOT (sub_17079( l_U641 ))) AND (l_U703 == 1))))
    {
        if (l_U681)
        {
            DO_SCREEN_FADE_OUT_UNHACKED( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
        }
        SET_USE_HIGHDOF( 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_15274( ref l_U145, 0 );
        sub_15171( 0 );
        ADD_BLIP_FOR_CHAR( l_U1569, ref l_U1623 );
        SET_BLIP_AS_FRIENDLY( l_U1623, 0 );
        sub_17792( ref l_U641, 0 );
        if (NOT (IS_CHAR_DEAD( l_U1569 )))
        {
            SET_CHAR_AS_ENEMY( l_U1569, 1 );
            FREEZE_CHAR_POSITION( l_U1569, 0 );
        }
        REMOVE_ANIMS( "gestures@niko" );
        if (l_U681 == 1)
        {
            DO_SCREEN_FADE_IN_UNHACKED( 500 );
        }
        l_U681 = 0;
        l_U82[13] = 1;
    }
    if ((l_U704 == 0) AND ((NOT (sub_17079( l_U641 ))) AND (l_U82[13] == 1)))
    {
        PRINT_NOW( "G4BEAT", 7500, 1 );
        l_U704 = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U1569 )))
    {
        if ((l_U82[1] == 0) AND ((l_U82[14] == 0) AND ((l_U82[13] == 1) AND (((sub_18147( l_U1569, l_U147, 1 )) < 1.25000000) || ((IS_CHAR_TOUCHING_CHAR( l_U1569, l_U147 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1569, l_U147, 0 )))))))
        {
            if (NOT (IS_CHAR_DEAD( l_U1569 )))
            {
                SET_CHAR_RELATIONSHIP( l_U1569, 5, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1569, 0 );
                SET_COMBAT_DECISION_MAKER( l_U1569, l_U1632 );
                DETACH_OBJECT( l_U693, 1 );
                PRINTSTRING( "Alonzo attacking" );
                PRINTNL();
                SET_CHAR_MELEE_MOVEMENT_CONSTAINT_BOX( l_U1569, -525.00000000, 1233.50000000, 15.00000000, -477.20000000, 1281.36000000, 23.00000000 );
            }
            l_U82[14] = 1;
        }
    }
    if ((sub_18497( l_U641 )) >= 5)
    {
        l_U675 = 1;
    }
    if ((l_U82[13] == 1) AND (NOT (IS_CHAR_INJURED( l_U1569 ))))
    {
        if ((((sub_18147( l_U147, l_U1569, 1 )) < 7.50000000) AND ((IS_CHAR_ARMED( l_U147, 7 )) AND ((IS_PLAYER_FREE_AIMING_AT_CHAR( l_U148, l_U1569 )) || (IS_PLAYER_TARGETTING_CHAR( l_U148, l_U1569 ))))) || ((sub_13506( l_U1569 )) < 160))
        {
            if (l_U82[1] == 0)
            {
                sub_17792( ref l_U641, 0 );
                DETACH_OBJECT( l_U693, 1 );
                REMOVE_BLIP( l_U1623 );
                GET_CHAR_HEALTH( l_U1569, ref l_U689 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1569, 1 );
                SETTIMERA( 0 );
                l_U82[1] = 1;
            }
        }
        if (l_U82[1] == 0)
        {
            if ((IS_CHAR_FATALLY_INJURED( l_U1569 )) AND (NOT (sub_17079( l_U641 ))))
            {
                sub_17792( ref l_U641, 1 );
                PRINT_NOW( "G4_FT_01", 7500, 1 );
                sub_13674( 14, "RB1_CALLF2", "RB1AUD", 0 );
                sub_14260();
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U1569 )))
        {
            if ((l_U675 == 0) AND ((l_U82[7] == 0) AND (((IS_CHAR_ON_SCREEN( l_U1569 )) == 0) AND ((sub_18147( l_U147, l_U1569, 1 )) > 35.00000000))))
            {
                sub_17792( ref l_U641, 1 );
                DELETE_CHAR( ref l_U1569 );
                PRINT_NOW( "G4_FT_03", 7500, 1 );
                sub_13674( 14, "RB1_CALLF2", "RB1AUD", 0 );
                sub_14260();
            }
        }
    }
    if ((l_U82[7] == 0) AND (NOT (IS_CHAR_DEAD( l_U1569 ))))
    {
        if (l_U82[1] == 1)
        {
            if ((NOT (IS_CHAR_FACING_CHAR( l_U1569, l_U147, 45.00000000 ))) || ((NOT (sub_17079( l_U641 ))) AND ((NOT (sub_19127( l_U1569, 34 ))) AND (NOT (IS_PED_RAGDOLL( l_U1569 ))))))
            {
                if (NOT (IS_CHAR_INJURED( l_U1569 )))
                {
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U1569, l_U147 );
                    PRINTSTRING( "being given sequence" );
                    PRINTNL();
                }
            }
        }
    }
    if (((l_U82[7] == 0) AND (l_U675 == 0)) AND (DOES_CHAR_EXIST( l_U1569 )))
    {
        if (IS_CHAR_INJURED( l_U1569 ))
        {
            sub_17792( ref l_U641, 0 );
            if (NOT (IS_CHAR_DEAD( l_U1569 )))
            {
                SET_CHAR_HEALTH( l_U1569, 50 );
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1569, l_U147, 0 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U1569 )))
                {
                    SET_CHAR_HEALTH( l_U1569, 50 );
                }
                REMOVE_BLIP( l_U1623 );
                CLEAR_PRINTS();
                PRINT_NOW( "G4_FT_01", 7500, 1 );
                sub_13674( 14, "RB1_CALLF2", "RB1AUD", 0 );
                sub_14260();
            }
        }
    }
    if ((NOT (sub_17079( l_U641 ))) AND (l_U82[1] == 1))
    {
        if (l_U82[4] == 0)
        {
            STOP_PED_SPEAKING( l_U1569, 1 );
            if (NOT (IS_CHAR_DEAD( l_U1569 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1569, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1569 )))
            {
                CLEAR_CHAR_TASKS( l_U1569 );
                TASK_PLAY_ANIM_UPPER_BODY( l_U1569, "scared_03", "missRay1", 8.00000000, 0, 0, 0, 0, 1500 );
            }
            REMOVE_BLIP( l_U1623 );
            sub_15487( "RB1_WHERE", 4, 0, ref l_U641, 8, 1 );
            l_U82[4] = 1;
        }
        if ((TIMERA() > 8000) AND (NOT (sub_17079( l_U641 ))))
        {
            if ((l_U675 == 1) AND ((l_U82[4] == 1) AND (l_U82[7] == 0)))
            {
                sub_17792( ref l_U641, 0 );
                PRINT_NOW( "G4_GT_02", 7500, 1 );
                ADD_BLIP_FOR_COORD( -547.14750000, 1250.06100000, 96.53470000, ref l_U1620 );
                if (NOT (IS_CHAR_DEAD( l_U1569 )))
                {
                    CLEAR_CHAR_TASKS( l_U1569 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1569, 0 );
                    SET_COMBAT_DECISION_MAKER( l_U1569, l_U1629 );
                }
                SETTIMERB( 0 );
                l_U82[7] = 1;
            }
        }
        sub_19944( 1 );
        if (((sub_20111( l_U147, -542.77000000, 1258.52000000, 17.79000000 )) < 4.00000000) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U147, -551.11180000, 1261.25400000, 15.76990000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U147, l_U1641._fU0, l_U1641._fU4, l_U1641._fU8, 2.50000000, 2.50000000, 1.50000000, 0 ))))
        {
            if (IS_CHAR_INJURED( l_U1569 ))
            {
                l_U723 = 1;
            }
            l_U647++;
        }
    }
    return;
}

void sub_15171(boolean bParam0)
{
    if (bParam0)
    {
        BEGIN_CAM_COMMANDS( ref l_U139 );
    }
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    SET_PLAYER_CONTROL( l_U148, NOT bParam0 );
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    if (NOT bParam0)
    {
        END_CAM_COMMANDS( ref l_U139 );
    }
    return;
}

void sub_15274(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

void sub_15487(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_15514( uParam0, ref l_U157._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_15514(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_15572( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_15572(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_15594( iParam1 )))
    {
        return 0;
    }
    l_U157._fU384 = 0;
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
    sub_16286( ref g_U8395, ref l_U157 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_15594(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_15671( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_15671( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_15671( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_15671(unknown uParam0)
{
    return;
}

void sub_16286(int iParam0, int iParam1)
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

int sub_17079(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_15671( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_15671( "\n speech is not playing" );
    }
    return 0;
}

int sub_17505()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_17792(int iParam0, unknown uParam1)
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

void sub_18147(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_18497(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_17079( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

int sub_19127(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    }
    if (iVar4 != 7)
    {
        return 1;
        break;
    }
    return 0;
}

void sub_19944(unknown uParam0)
{
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, -539.10000000, 1265.00000000, 109.00000000, uParam0, 0.00000000 );
    return;
}

void sub_20111(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_20248()
{
    unknown uVar2;
    unknown uVar3;

    if (l_U651[l_U647] == 0)
    {
        PRINTSTRING( "ray1 : ray1GoInsideProjects" );
        PRINTNL();
        sub_14548();
        REQUEST_MODEL( 492147228 );
        while (NOT (HAS_MODEL_LOADED( 492147228 )))
        {
            WAIT( 0 );
        }
        CREATE_CHAR( 26, 492147228, -533.98160000, 1255.76700000, 18.55710000, ref l_U1568, 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1568, "ProjectF1_MloRoom" );
        SET_CHAR_HEADING( l_U1568, 90.00000000 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1568 );
        OPEN_SEQUENCE_TASK( ref l_U1635 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -533.64170000, 1244.96500000, 21.53910000, 3, 20000, 0.50000000 );
        CLOSE_SEQUENCE_TASK( l_U1635 );
        PRINT_NOW( "G4_GT_08", 7500, 1 );
        REMOVE_BLIP( l_U1620 );
        ADD_BLIP_FOR_OBJECT( l_U695, ref l_U1624 );
        l_U651[l_U647] = 1;
    }
    sub_19944( 1 );
    if ((l_U82[0] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U147, -540.57380000, 1259.33500000, 17.54000000, 3.50000000, 3.50000000, 1.00000000, 0 )))
    {
        if (NOT (IS_CHAR_DEAD( l_U1568 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1568 );
            TASK_PERFORM_SEQUENCE( l_U1568, l_U1635 );
        }
        l_U82[0] = 1;
    }
    if ((l_U82[1] == 0) AND ((NOT (IS_AREA_OCCUPIED( -543.07000000, 1258.22000000, 17.49000000, -542.47000000, 1258.82000000, 18.09000000, 0, 1, 0, 0, 0 ))) AND (LOCATE_CHAR_ON_FOOT_3D( l_U147, -542.77000000, 1258.52000000, 17.79000000, 1.00000000, 1.00000000, 1.50000000, 0 ))))
    {
        if (sub_20812( 4, 0 ))
        {
            if (sub_21107( 4, "LFTHELP", 0 ))
            {
                SET_PLAYER_CONTROL( l_U148, 0 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_CHAR_SLIDE_TO_COORD( 0, -542.23000000, 1258.15000000, 17.51000000, 68.75000000, 1.00000000 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Press_Button", "missray1", 8.00000000, 0, 1, 1, 0, 0 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U147, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                REMOVE_BLIP( l_U1624 );
                ADD_BLIP_FOR_COORD( -544.45900000, 1260.58300000, 18.04000000, ref l_U1625 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U147, 1 );
                SETTIMERA( 0 );
                l_U82[1] = 1;
            }
        }
    }
    else
    {
        sub_2667( 4, "LFTHELP" );
        CLEAR_HELP();
    }
    if (l_U82[2] == 0)
    {
        if ((l_U680 == 0) AND ((l_U82[1] == 1) AND ((TIMERA() > 8000) || ((sub_22004( l_U147, "missRay1", "Press_Button" )) > 0.50000000))))
        {
            CLEAR_CHAR_TASKS( l_U147 );
            CREATE_OBJECT_NO_OFFSET( -1346357795, -542.77000000, 1258.52000000, 17.60000000, ref l_U694, 1 );
            SET_OBJECT_HEADING( l_U694, 79.02300000 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U694, "ProjectF1_MloRoom" );
            FREEZE_OBJECT_POSITION( l_U694, 1 );
            SET_PLAYER_CONTROL( l_U148, 1 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U147, 0 );
            PLAY_SOUND_FRONTEND( -1, "RB1_PROJECT_TAKEDOWN_PUSH_BUTTON" );
            WAIT( 0 );
            SET_OBJECT_VISIBLE( l_U1578, 0 );
            PLAY_SOUND_FROM_POSITION( -1, "RB1_LIFT_ARRIVE", -544.45900000, 1260.58300000, 18.04000000 );
            SETTIMERA( 0 );
            l_U680 = 1;
        }
    }
    if ((TIMERA() > 6000) AND ((l_U680 == 1) AND ((l_U82[2] == 0) AND (l_U82[1] == 1))))
    {
        PRINT_NOW( "G4_GT_09", 7500, 1 );
        PLAY_SOUND_FROM_POSITION( -1, "RB1_PROJECT_TAKEDOWN_LIFT_DOOR_OPEN", -543.12300000, 1260.33400000, 17.84000000 );
        PLAY_SOUND_FROM_POSITION( -1, "RB1_PROJECT_TAKEDOWN_LIFT_BELL", -543.12300000, 1260.33400000, 17.84000000 );
        SET_OBJECT_VISIBLE( l_U1578, 1 );
        SET_OBJECT_VISIBLE( l_U694, 0 );
        while (NOT (sub_22647( ref l_U1573, ref l_U1574, 20, -542.92300000, 1261.23400000, 17.84000000, -543.26900000, 1259.26900000, 17.84000000 )))
        {
            WAIT( 0 );
        }
        l_U82[2] = 1;
    }
    if (l_U82[2] == 1)
    {
        if ((NOT (IS_PED_IN_COVER( l_U147 ))) AND (((LOCATE_CHAR_IN_CAR_3D( l_U147, -544.16390000, 1260.34900000, 16.33430000, 1.40000000, 1.40000000, 2.60000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U147, -544.45900000, 1260.58300000, 18.04000000, 1.60000000, 1.60000000, 1.60000000, 1 )) AND ((sub_20111( l_U147, -544.45900000, 1260.58300000, 18.04000000 )) < 1.00000000))) AND ((NOT (IS_PLAYER_TARGETTING_ANYTHING( sub_2947() ))) AND (l_U82[0] == 1))))
        {
            REMOVE_BLIP( l_U1625 );
            if (IS_CHAR_ON_ANY_BIKE( l_U147 ))
            {
                SET_PLAYER_CONTROL( l_U148, 0 );
            }
            WAIT( 250 );
            l_U647++;
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U147, -535.08720000, 1257.08300000, 87.55230000, 1.00000000, 1.00000000, 1.50000000, 0 ))
    {
        if (DOES_BLIP_EXIST( l_U1625 ))
        {
            REMOVE_BLIP( l_U1625 );
        }
        if (DOES_BLIP_EXIST( l_U1624 ))
        {
            REMOVE_BLIP( l_U1624 );
        }
        REQUEST_MODEL( 492147228 );
        REQUEST_MODEL( -1926041127 );
        REQUEST_MODEL( 1168388225 );
        REQUEST_MODEL( -1746774780 );
        REQUEST_MODEL( -256051882 );
        REQUEST_MODEL( -862378730 );
        while ((NOT (HAS_MODEL_LOADED( -862378730 ))) || ((NOT (HAS_MODEL_LOADED( -256051882 ))) || ((NOT (HAS_MODEL_LOADED( -1746774780 ))) || ((NOT (HAS_MODEL_LOADED( 1168388225 ))) || ((NOT (HAS_MODEL_LOADED( -1926041127 ))) || (NOT (HAS_MODEL_LOADED( 492147228 ))))))))
        {
            WAIT( 0 );
        }
        CREATE_OBJECT( -256051882, -543.05000000, 1260.30000000, 17.70000000, ref l_U690[0], 1 );
        SET_OBJECT_HEADING( l_U690[0], 79.02300000 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U690[0], "ProjectF1_MloRoom" );
        FREEZE_OBJECT_POSITION( l_U690[0], 1 );
        CREATE_OBJECT( -862378730, -543.70000000, 1256.80000000, 17.79000000, ref l_U690[1], 1 );
        SET_OBJECT_HEADING( l_U690[1], 79.02300000 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U690[1], "ProjectF1_MloRoom" );
        FREEZE_OBJECT_POSITION( l_U690[1], 1 );
        GET_INTERIOR_AT_COORDS( -543.83090000, 1266.80100000, 88.50050000, ref uVar3 );
        ACTIVATE_INTERIOR( uVar3, 1 );
        sub_23838( ref l_U724, 8, 0 );
        REMOVE_BLIP( l_U1625 );
        PRINT_NOW( "G4_GT_03", 7500, 1 );
        ADD_BLIP_FOR_COORD( -547.14750000, 1250.06100000, 96.53470000, ref l_U1620 );
        l_U705 = 1;
        l_U647++;
        l_U647++;
    }
    return;
}

int sub_20812(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_2947() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_2947() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2947() )))))
                {
                    if (NOT sub_20908())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_3610() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_20993())
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
    }
    return 0;
}

int sub_20908()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_20993()
{
    return sub_21004( 0, 0 );
}

int sub_21004(boolean bParam0, unknown uParam1)
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

int sub_21107(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_20812( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U257)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_2947(), 0 );
                l_U257 = 1;
            }
            g_U9172 = uParam0;
            l_U258 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_21388();
                l_U256 = 1;
                g_U9173 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U255 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U255)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U255 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_21388()
{
    return sub_21004( 1, 1 );
}

float sub_22004(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_PLAYING_ANIM( uParam0, uParam1, uParam2 ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( uParam0, uParam1, uParam2, ref Result );
            return Result;
        }
        else
        {
            return -1.00000000;
        }
        break;
    }
    return -1.00000000;
}

boolean sub_22647(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    int iVar17;
    int iVar18;

    GET_OBJECT_COORDINATES( (uParam0^), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
    GET_OBJECT_COORDINATES( (uParam1^), ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
    if (l_U716 == 0)
    {
        l_U710 = {sub_22780( sub_22719( uVar11, uParam3 ), TO_FLOAT( uParam2 ) )};
        l_U713 = {sub_22780( sub_22719( uVar14, uParam6 ), TO_FLOAT( uParam2 ) )};
        l_U716 = 1;
    }
    if (SLIDE_OBJECT( (uParam0^), uParam3._fU0, uParam3._fU4, uParam3._fU8, ABSF( l_U710._fU0 ), ABSF( l_U710._fU4 ), ABSF( l_U710._fU8 ), 0 ))
    {
        iVar17 = 1;
    }
    if (SLIDE_OBJECT( (uParam1^), uParam6._fU0, uParam6._fU4, uParam6._fU8, ABSF( l_U713._fU0 ), ABSF( l_U713._fU4 ), ABSF( l_U713._fU8 ), 0 ))
    {
        iVar18 = 1;
    }
    return (iVar17) AND (iVar18);
}

void sub_22719(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    vector Result;

    Result = {uParam0._fU0 - uParam3._fU0, uParam0._fU4 - uParam3._fU4, uParam0._fU8 - uParam3._fU8};
    return Result;
}

void sub_22780(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    vector Result;

    Result = {uParam0._fU0 / uParam3, uParam0._fU4 / uParam3, uParam0._fU8 / uParam3};
    return Result;
}

void sub_23838(unknown uParam0, int iParam1, int iParam2)
{
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    int I;
    int iVar9;
    int iVar10;
    char[64] cVar11;

    if (iParam2 == 0)
    {
        GET_INTERIOR_AT_COORDS( (uParam0^)[0]._fU4._fU0, (uParam0^)[0]._fU4._fU4, (uParam0^)[0]._fU4._fU8, ref uVar7 );
        ACTIVATE_INTERIOR( uVar7, 1 );
    }
    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if ((uParam0^)[I]._fU64 == 0)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar6 );
            switch (uVar6)
            {
                case 0:
                iVar5 = 492147228;
                PRINTSTRING( "Guy will be: M_Y_GLAT_LO_01" );
                PRINTNL();
                break;
                case 1:
                iVar5 = -1926041127;
                PRINTSTRING( "Guy will be: M_Y_GLAT_LO_02" );
                PRINTNL();
                break;
                case 2:
                iVar5 = 1168388225;
                PRINTSTRING( "Guy will be: M_Y_GLAT_HI_01" );
                PRINTNL();
                break;
                case 3:
                iVar5 = -1746774780;
                PRINTSTRING( "Guy will be: M_Y_GLAT_HI_02" );
                PRINTNL();
                break;
            }
            if ((uParam0^)[I]._fU40 == 0)
            {
                (uParam0^)[I]._fU40 = 12;
            }
            CREATE_CHAR( 26, iVar5, (uParam0^)[I]._fU4._fU0, (uParam0^)[I]._fU4._fU4, (uParam0^)[I]._fU4._fU8, ref (uParam0^)[I]._fU0, 1 );
            GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, (uParam0^)[I]._fU40, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( (uParam0^)[I]._fU0, (uParam0^)[I]._fU40, 0 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^)[I]._fU0 );
            ADD_BLIP_FOR_CHAR( (uParam0^)[I]._fU0, ref (uParam0^)[I]._fU68 );
            CHANGE_BLIP_DISPLAY( (uParam0^)[I]._fU68, 0 );
            if (iVar5 == -1926041127)
            {
                iVar9 = sub_24446( -1, 3 );
                if (iVar9 == -1)
                {
                    CLEAR_CHAR_PROP( (uParam0^)[I]._fU0, 0 );
                }
                else
                {
                    SET_CHAR_PROP_INDEX( (uParam0^)[I]._fU0, 0, iVar9 );
                }
                iVar10 = sub_24446( 0, 1 );
                if ((sub_24446( 0, 10 )) > 5)
                {
                    if (iVar10 == -1)
                    {
                        CLEAR_CHAR_PROP( (uParam0^)[I]._fU0, 1 );
                    }
                    else
                    {
                        SET_CHAR_PROP_INDEX( (uParam0^)[I]._fU0, 1, iVar10 );
                    }
                }
            }
            if (iVar5 == -1746774780)
            {
                if ((sub_24446( 0, 10 )) > 5)
                {
                    SET_CHAR_PROP_INDEX( (uParam0^)[I]._fU0, 0, sub_24446( 0, 4 ) );
                }
                else
                {
                    CLEAR_CHAR_PROP( (uParam0^)[I]._fU0, 0 );
                }
                if ((sub_24446( 0, 10 )) > 5)
                {
                    SET_CHAR_PROP_INDEX( (uParam0^)[I]._fU0, 1, sub_24446( 0, 1 ) );
                }
            }
            if (iVar5 == 1168388225)
            {
                if ((sub_24446( 0, 10 )) > 5)
                {
                    SET_CHAR_PROP_INDEX( (uParam0^)[I]._fU0, 1, sub_24446( 0, 1 ) );
                }
            }
            if (iVar5 == 492147228)
            {
                SET_CHAR_PROP_INDEX( (uParam0^)[I]._fU0, 0, sub_24446( 0, 0 ) );
            }
            if ((uParam0^)[I]._fU40 == 12)
            {
                SET_CHAR_ACCURACY( (uParam0^)[I]._fU0, sub_24446( 10, 15 ) );
            }
            if ((uParam0^)[I]._fU40 == 11)
            {
                SET_CHAR_ACCURACY( (uParam0^)[I]._fU0, 10 );
            }
            if (iParam2 == 0)
            {
                SET_ROOM_FOR_CHAR_BY_NAME( (uParam0^)[I]._fU0, (uParam0^)[I]._fU52 );
            }
            SET_CHAR_HEADING( (uParam0^)[I]._fU0, (uParam0^)[I]._fU56 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^)[I]._fU0, 1 );
            PRINTSTRING( "Creating goon number " );
            PRINTSTRING( "- " );
            PRINTINT( I );
            PRINTSTRING( " -" );
            PRINTNL();
            StrCopy( ref cVar11, "Latino Goon ", 64 );
            ConcatString(ref cVar11, I, 64);
            SET_CHAR_NAME_DEBUG( (uParam0^)[I]._fU0, ref cVar11 );
            sub_25109( (uParam0^)[I]._fU0, 1 );
        }
    }
    return;
}

void sub_24446(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_25109(unknown uParam0, boolean bParam1)
{
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uParam0, bParam1 );
    SET_CHAR_VISIBLE( uParam0, NOT bParam1 );
    SET_CHAR_COLLISION( uParam0, NOT bParam1 );
    return;
}

void sub_25286()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (l_U651[l_U647] == 0)
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1568 );
        sub_15171( 1 );
        sub_25369( -537.69810000, 1255.81400000, 17.72528000, -5.44527800, -0.00000000, 65.26087000, l_U148 );
        if (IS_CHAR_ON_ANY_BIKE( l_U147 ))
        {
            SET_PLAYER_CONTROL( l_U148, 0 );
            SET_CHAR_COORDINATES( l_U147, -544.16390000, 1260.34900000, 16.33430000 );
        }
        PLAY_SOUND_FROM_POSITION( l_U1655, "RB1_PROJECT_TAKEDOWN_LIFT_DOOR_CLOSE", -543.12300000, 1260.33400000, 17.84000000 );
        while (NOT (sub_22647( ref l_U1573, ref l_U1574, 20, -543.12300000, 1260.33400000, 17.84000000, -543.11900000, 1260.29900000, 17.84000000 )))
        {
            WAIT( 0 );
        }
        l_U716 = 0;
        l_U1653 = GET_SOUND_ID();
        PLAY_SOUND_FROM_PED( l_U1653, "RB1_PROJECT_TAKEDOWN_LIFT_ENGINE", l_U147 );
        DO_SCREEN_FADE_OUT( 500 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
        DELETE_OBJECT( ref l_U693 );
        REQUEST_MODEL( 492147228 );
        REQUEST_MODEL( -1926041127 );
        REQUEST_MODEL( 1168388225 );
        REQUEST_MODEL( -1746774780 );
        while ((NOT (HAS_MODEL_LOADED( -1746774780 ))) || ((NOT (HAS_MODEL_LOADED( 1168388225 ))) || ((NOT (HAS_MODEL_LOADED( -1926041127 ))) || (NOT (HAS_MODEL_LOADED( 492147228 ))))))
        {
            WAIT( 0 );
        }
        PRINTSTRING( "ray1 : ray1GoUpInLift" );
        PRINTNL();
        sub_14548();
        l_U676 = 1;
        if (DOES_BLIP_EXIST( l_U1625 ))
        {
            REMOVE_BLIP( l_U1625 );
        }
        SETTIMERA( 0 );
        l_U651[l_U647] = 1;
    }
    sub_19944( 1 );
    if ((l_U82[0] == 0) AND (TIMERA() > 0))
    {
        SET_CHAR_COORDINATES( l_U147, -544.10370000, 1260.46800000, 16.91709000 );
        l_U82[0] = 1;
    }
    if ((TIMERA() > 0) AND ((l_U82[1] == 0) AND (l_U82[0] == 1)))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U147 )))
        {
            ATTACH_PED_TO_OBJECT( l_U147, l_U1572, 0, 0.00000000, 0.00000000, 0.10000000, 262.84820000, 0.00000000, 0, 0 );
        }
        l_U679 = 1;
        l_U82[1] = 1;
        SETTIMERA( 0 );
    }
    GET_OBJECT_COORDINATES( l_U1572, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    if ((l_U82[2] == 0) AND (l_U82[1] == 1))
    {
        uVar2._fU8 += 0.33000000;
        SET_OBJECT_COORDINATES( l_U1572, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    }
    if (l_U723 == 0)
    {
        if ((TIMERA() > 500) AND ((l_U82[2] == 0) AND (l_U82[1] == 1)))
        {
            if (NOT (DOES_CHAR_EXIST( l_U1569 )))
            {
                CREATE_CHAR( 26, -1326394505, -501.96030000, 1263.83000000, 16.49830000, ref l_U1569, 1 );
            }
            else if (NOT (IS_CHAR_DEAD( l_U1569 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1569 );
                SET_CHAR_COORDINATES( l_U1569, -501.96030000, 1263.83000000, 16.49830000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1569, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1569 )))
            {
                SET_CHAR_HEADING( l_U1569, 297.43130000 );
                SET_CHAR_COMPONENT_VARIATION( l_U1569, 1, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U1569, 2, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U1569, 5, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U1569, 4, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U1569, 0, 0, 0 );
            }
            SET_CAM_POS( l_U140, -501.01760000, 1264.77900000, 16.91545000 );
            SET_CAM_ROT( l_U140, 32.42542000, 0.00000100, 119.45540000 );
            SET_CAM_FOV( l_U140, 54.00000000 );
            SET_CAM_POS( l_U142, -501.01760000, 1264.77900000, 16.91545000 );
            SET_CAM_ROT( l_U142, 32.42542000, 0.00000100, 119.45540000 );
            SET_CAM_FOV( l_U142, 58.50000000 );
            SET_CAM_INTERP_STYLE_CORE( l_U143, l_U140, l_U142, 5000, 0 );
            sub_15274( ref l_U145, 0 );
            sub_15274( ref l_U143, 1 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            DO_SCREEN_FADE_IN( 500 );
            if (NOT (IS_CHAR_DEAD( l_U1569 )))
            {
                TASK_USE_MOBILE_PHONE( l_U1569, 1 );
            }
            WAIT( 500 );
            sub_26894( "RB1_CALL", ref l_U641, 8, 1 );
            while (sub_17079( l_U641 ))
            {
                WAIT( 0 );
            }
            DO_SCREEN_FADE_OUT( 1000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1326394505 );
            WAIT( 1000 );
            sub_23838( ref l_U724, 8, 0 );
            l_U82[2] = 1;
        }
    }
    else if ((l_U82[2] == 0) AND (l_U82[1] == 1))
    {
        PRINTSTRING( "1 is TRUE and timer mroe than 500" );
        PRINTNL();
        sub_23838( ref l_U724, 8, 0 );
        if (NOT (IS_CHAR_DEAD( l_U724[0]._fU0 )))
        {
            sub_25109( l_U724[0]._fU0, 0 );
            REMOVE_ALL_CHAR_WEAPONS( l_U724[0]._fU0 );
            GIVE_WEAPON_TO_CHAR( l_U724[0]._fU0, 7, 999, 0 );
            SET_CHAR_COORDINATES_NO_OFFSET( l_U724[0]._fU0, -538.17210000, 1258.98700000, 89.53350000 );
            SET_CHAR_HEADING( l_U724[0]._fU0, 5.21100000 );
            TASK_PLAY_ANIM( l_U724[0]._fU0, "stand_smoke", "missRay1", 8.00000000, 1, 0, 0, 0, -1 );
            CREATE_OBJECT( -268530289, 937.70000000, 335.40000000, 32.40000000, ref l_U693, 1 );
            ATTACH_OBJECT_TO_PED( l_U693, l_U724[0]._fU0, 1232, l_U0, l_U0, 0 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U724[0]._fU0, 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U724[0]._fU0, "ProjectSG_MloRoom1" );
        }
        if (NOT (IS_CHAR_DEAD( l_U724[1]._fU0 )))
        {
            sub_25109( l_U724[1]._fU0, 0 );
            REMOVE_ALL_CHAR_WEAPONS( l_U724[1]._fU0 );
            GIVE_WEAPON_TO_CHAR( l_U724[1]._fU0, 7, 999, 0 );
            SET_CHAR_COORDINATES_NO_OFFSET( l_U724[1]._fU0, -538.34470000, 1260.32300000, 89.53420000 );
            SET_CHAR_HEADING( l_U724[1]._fU0, 189.15550000 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U724[1]._fU0, 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U724[1]._fU0, "ProjectSG_MloRoom1" );
        }
        WAIT( 500 );
        l_U82[2] = 1;
    }
    if ((l_U82[2] == 1) AND (l_U82[3] == 0))
    {
        PRINTSTRING( "MOving lifts" );
        PRINTNL();
        GET_INTERIOR_AT_COORDS( uVar2._fU0, uVar2._fU4, 102.10000000, ref uVar5 );
        PRINTSTRING( "adding lift1" );
        PRINTNL();
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1571, "ProjectSG_MloRoom1" );
        PRINTSTRING( "adding lift2" );
        PRINTNL();
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1572, "ProjectSG_MloRoom1" );
        PRINTSTRING( "setting lift1 coords" );
        PRINTNL();
        SET_OBJECT_COORDINATES( l_U1571, l_U1648._fU0, l_U1648._fU4, 90.03550000 );
        SET_OBJECT_DYNAMIC( l_U1571, 1 );
        PRINTSTRING( "setting lift2 coords" );
        PRINTNL();
        SET_OBJECT_COORDINATES( l_U1572, uVar2._fU0, uVar2._fU4, 90.03550000 );
        SET_OBJECT_DYNAMIC( l_U1572, 1 );
        GET_GAME_VIEWPORT_ID( ref uVar6 );
        PRINTSTRING( "requesting interior models" );
        PRINTNL();
        REQUEST_INTERIOR_MODELS( 2106708128, "ProjectSG_MloRoom1" );
        sub_15274( ref l_U145, 1 );
        sub_15274( ref l_U143, 0 );
        PRINTSTRING( "setting camera" );
        PRINTNL();
        if (l_U723 == 0)
        {
            if (NOT (IS_CHAR_DEAD( l_U724[0]._fU0 )))
            {
                sub_25109( l_U724[0]._fU0, 0 );
                SET_CHAR_COORDINATES( l_U724[0]._fU0, -541.57070000, 1265.37100000, 88.50060000 );
                GIVE_WEAPON_TO_CHAR( l_U724[0]._fU0, 12, 999, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U724[0]._fU0, 12, 1 );
                TASK_SEEK_COVER_FROM_POS( l_U724[0]._fU0, -542.66050000, 1260.29700000, 89.54070000, 10000 );
                SAY_AMBIENT_SPEECH( l_U724[0]._fU0, "PLAYER_OVER_THERE", 0, 0, 0 );
            }
            SET_CAM_POS( l_U145, -536.77480000, 1266.08700000, 89.39058000 );
            SET_CAM_ROT( l_U145, 0.33977900, -0.00000000, 115.38590000 );
            SET_CAM_FOV( l_U145, 44.00000000 );
        }
        else
        {
            SET_CAM_POS( l_U145, -535.81650000, 1258.93100000, 89.75619000 );
            SET_CAM_ROT( l_U145, -0.00399700, 0.00000000, 77.57195000 );
            SET_CAM_FOV( l_U145, 34.00000000 );
        }
        PRINTSTRING( "waiting a frame" );
        PRINTNL();
        WAIT( 0 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar6, "ProjectSG_MloRoom1" );
        PRINTSTRING( "detaching and setting player coordinates" );
        PRINTNL();
        if (IS_CHAR_ON_ANY_BIKE( l_U147 ))
        {
            if (NOT (IS_CAR_DEAD( l_U1566 )))
            {
                SET_CAR_HEADING( l_U1566, 109.80000000 );
                SET_CAR_COORDINATES_NO_OFFSET( l_U1566, -544.32800000, 1260.19800000, 88.99030000 );
            }
            WAIT( 0 );
            if (NOT (IS_CAR_DEAD( l_U1566 )))
            {
                SET_ROOM_FOR_CAR_BY_NAME( l_U1566, "ProjectSG_MloRoom1" );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U147, "ProjectSG_MloRoom1" );
            }
            REQUEST_CAR_RECORDING( 1990 );
            while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1990 )))
            {
                WAIT( 0 );
            }
            PRINTSTRING( "Should have played recording" );
        }
        else
        {
            DETACH_PED( l_U147, 1 );
        }
        SET_CHAR_COORDINATES( l_U147, -544.38100000, 1260.75000000, 88.53550000 );
        SET_CHAR_HEADING( l_U147, 262.84820000 );
        SETTIMERA( 0 );
        l_U82[3] = 1;
    }
    if ((TIMERA() > 1000) AND ((l_U82[4] == 0) AND (l_U82[3] == 1)))
    {
        GET_CAR_CHAR_IS_USING( l_U147, ref l_U1566 );
        if (NOT (IS_CAR_DEAD( l_U1566 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1566, 1990 );
        }
        DO_SCREEN_FADE_IN( 1000 );
        SET_OBJECT_COLLISION( l_U1575, 0 );
        SET_OBJECT_COLLISION( l_U1576, 0 );
        STOP_SOUND( l_U1653 );
        PLAY_SOUND_FROM_POSITION( -1, "RB1_PROJECT_TAKEDOWN_LIFT_BELL", -542.92300000, 1261.23400000, 89.73549000 );
        PLAY_SOUND_FROM_POSITION( l_U1654, "RB1_PROJECT_TAKEDOWN_LIFT_DOOR_OPEN", -542.92300000, 1261.23400000, 89.73549000 );
        while (NOT (sub_22647( ref l_U1575, ref l_U1576, 20, -542.92300000, 1261.23400000, 89.73549000, -543.26900000, 1259.26900000, 89.73549000 )))
        {
            WAIT( 0 );
        }
        l_U716 = 0;
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U147 )))
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U147, "walk", "move_player", 8.00000000, 1, 1, 1, 0, 1275 );
        }
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        SETTIMERA( 0 );
        l_U82[4] = 1;
    }
    if ((TIMERA() > 1250) AND ((l_U82[5] == 0) AND (l_U82[4] == 1)))
    {
        if (NOT (IS_CHAR_DEAD( l_U724[0]._fU0 )))
        {
            TASK_SWAP_WEAPON( l_U724[0]._fU0, 1 );
            SET_CHAR_ACCURACY( l_U724[0]._fU0, 10 );
        }
        if (NOT (IS_CHAR_DEAD( l_U724[1]._fU0 )))
        {
            TASK_SWAP_WEAPON( l_U724[1]._fU0, 1 );
            SET_CHAR_ACCURACY( l_U724[1]._fU0, 10 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U147 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U147 );
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_GAME_CAM_PITCH( 0.00000000 );
        GET_INTERIOR_AT_COORDS( -543.87820000, 1272.54300000, 88.50040000, ref uVar7 );
        ACTIVATE_INTERIOR( uVar7, 1 );
        sub_15171( 0 );
        DELETE_OBJECT( ref l_U1578 );
        DELETE_OBJECT( ref l_U694 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1346357795 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -121234208 );
        l_U647++;
        l_U82[5] = 1;
    }
    return;
}

void sub_25369(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    CLEAR_PRINTS();
    if (DOES_CAM_EXIST( l_U145 ))
    {
        DESTROY_CAM( l_U145 );
    }
    CREATE_CAM( 14, ref l_U145 );
    SET_CAM_POS( l_U145, uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    SET_CAM_ROT( l_U145, uParam3._fU0, uParam3._fU4, uParam3._fU8 );
    SET_CAM_ACTIVE( l_U145, 1 );
    SET_CAM_PROPAGATE( l_U145, 1 );
    SET_PLAYER_CONTROL( uParam6, 0 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    return;
}

void sub_26894(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_26917( uParam0, ref l_U157._fU0, uParam1, uParam2, uParam3 );
}

void sub_26917(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_15572( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_29730()
{
    unknown uVar2;

    if (l_U651[l_U647] == 0)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 135553133 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -121234208 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1346357795 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -16333017 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1667998832 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1326394505 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1569 );
        DELETE_OBJECT( ref l_U693 );
        PRINTSTRING( "ray1 : ray1firstFloor" );
        PRINTNL();
        sub_14548();
        if (l_U723 == 1)
        {
            if (NOT (IS_CHAR_INJURED( l_U724[1]._fU0 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U147 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -539.94820000, 1260.42800000, 89.54110000, 2, 10000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U724[1]._fU0, uVar2 );
            }
            if (NOT (IS_CHAR_INJURED( l_U724[0]._fU0 )))
            {
                TASK_LOOK_AT_CHAR( l_U724[0]._fU0, l_U147, 8000, 0 );
            }
        }
        if ((l_U705 == 0) AND (l_U723 == 1))
        {
            sub_3713( 5, l_U724[0]._fU0, "LATINO_THUG_2", 0 );
            sub_3713( 6, l_U724[1]._fU0, "LATINO_THUG_3", 0 );
            sub_26894( "RB1_OUT", ref l_U641, 8, 1 );
            l_U724[0]._fU44 = 1;
            l_U724[1]._fU44 = 1;
            SET_CHAR_AS_ENEMY( l_U724[0]._fU0, 1 );
            SET_CHAR_AS_ENEMY( l_U724[1]._fU0, 1 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U1620 )))
        {
            ADD_BLIP_FOR_COORD( -547.14750000, 1250.06100000, 96.53470000, ref l_U1620 );
        }
        PRINT( "G4_GT_03", 7500, 1 );
        SETTIMERA( 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U147, "ProjectSG_MloRoom1" );
        l_U651[l_U647] = 1;
    }
    if (l_U723 == 1)
    {
        if ((l_U82[2] == 0) AND (((sub_18497( l_U641 )) > 2) AND (NOT (IS_CHAR_INJURED( l_U724[0]._fU0 )))))
        {
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U724[0]._fU0, l_U147 );
            l_U82[2] = 1;
        }
    }
    sub_19944( 1 );
    if ((l_U82[4] == 0) AND ((NOT (sub_17079( l_U641 ))) AND (l_U723 == 1)))
    {
        l_U723 = 0;
        l_U82[4] = 1;
    }
    if ((NOT (sub_17079( l_U641 ))) || ((TIMERA() > 9000) || ((IS_CHAR_SHOOTING( l_U147 )) || (l_U723 == 0))))
    {
        SET_PED_IS_BLIND_RAGING( l_U147, 1 );
        if ((l_U82[0] == 1) || (l_U82[1] == 1))
        {
            l_U723 = 0;
        }
        if (l_U82[3] == 0)
        {
            if (NOT (IS_CHAR_INJURED( l_U724[0]._fU0 )))
            {
                TASK_COMBAT( l_U724[0]._fU0, l_U147 );
            }
            if (NOT (IS_CHAR_INJURED( l_U724[1]._fU0 )))
            {
                TASK_COMBAT( l_U724[1]._fU0, l_U147 );
            }
            l_U82[3] = 1;
        }
        sub_30712( ref l_U724, 8, 35 );
    }
    if ((IS_CHAR_INJURED( l_U724[1]._fU0 )) || (IS_CHAR_INJURED( l_U724[0]._fU0 )))
    {
        sub_17792( ref l_U641, 0 );
    }
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U147, -540.05600000, 1263.79800000, 89.54080000, 2.00000000, 1.45000000, 1.00000000, 0 )) || ((IS_CHAR_INJURED( l_U724[1]._fU0 )) AND (IS_CHAR_INJURED( l_U724[0]._fU0 ))))
    {
        if (l_U677 == 0)
        {
            PRINT_HELP_FOREVER( "COVHELP" );
            SETTIMERA( 0 );
            l_U677 = 1;
        }
    }
    if ((TIMERA() > 10000) AND ((l_U678 == 0) AND (l_U677 == 1)))
    {
        CLEAR_HELP();
        l_U678 = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U147, -537.11870000, 1257.53400000, 90.54049000, 1.00000000, 1.00000000, 1.00000000, 0 ))
    {
        sub_33460( ref l_U724, 8 );
        l_U647++;
    }
    return;
}

void sub_30712(unknown uParam0, int iParam1, int iParam2)
{
    int I;
    int Result;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    Result = 0;
    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if ((NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 ))) AND ((DOES_CHAR_EXIST( (uParam0^)[I]._fU0 )) AND ((uParam0^)[I]._fU44 == 0)))
        {
            if ((((uParam0^)[I]._fU60 != 3) AND (((sub_18147( l_U147, (uParam0^)[I]._fU0, 1 )) < 3.00000000) AND (IS_CHAR_SHOOTING( l_U147 )))) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U147, -535.08720000, 1257.08300000, 87.55230000, 3.00000000, 3.00000000, 1.50000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U147, -529.00400000, 1251.05500000, 93.53949000, 2.00000000, 1.00000000, 1.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U147, -527.22350000, 1260.76300000, 89.53560000, 2.00000000, 1.00000000, 1.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U147, (uParam0^)[I]._fU28._fU0, (uParam0^)[I]._fU28._fU4, (uParam0^)[I]._fU28._fU8, 2.50000000, 2.50000000, 1.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U147, (uParam0^)[I]._fU16._fU0, (uParam0^)[I]._fU16._fU4, (uParam0^)[I]._fU16._fU8, 2.50000000, 2.50000000, 1.50000000, 0 )))))))
            {
                if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
                {
                    sub_25109( (uParam0^)[I]._fU0, 0 );
                    sub_12076( (uParam0^)[I]._fU0, l_U147 );
                    PRINTSTRING( "unhiding ped" );
                    PRINTNL();
                    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^)[I]._fU0, 24 );
                    SET_CHAR_RELATIONSHIP( (uParam0^)[I]._fU0, 5, 0 );
                }
                GET_INTERIOR_AT_COORDS( (uParam0^)[I]._fU4._fU0, (uParam0^)[I]._fU4._fU4, (uParam0^)[I]._fU4._fU8, ref uVar7 );
                ACTIVATE_INTERIOR( uVar7, 1 );
                if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                {
                    PRINTSTRING( "activating ped" );
                    PRINTNL();
                    switch ((uParam0^)[I]._fU60)
                    {
                        case 0:
                        if ((uParam0^)[I]._fU48 == 0)
                        {
                            OPEN_SEQUENCE_TASK( ref uVar8 );
                            TASK_SEEK_COVER_TO_COORDS( 0, (uParam0^)[I]._fU4._fU0, (uParam0^)[I]._fU4._fU4, (uParam0^)[I]._fU4._fU8, (uParam0^)[I]._fU16._fU0, (uParam0^)[I]._fU16._fU4, (uParam0^)[I]._fU16._fU8, 5000 );
                            TASK_COMBAT( 0, l_U147 );
                            CLOSE_SEQUENCE_TASK( uVar8 );
                            TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar8 );
                            CLEAR_SEQUENCE_TASK( uVar8 );
                        }
                        else
                        {
                            TASK_COMBAT( (uParam0^)[I]._fU0, l_U147 );
                        }
                        SAY_AMBIENT_SPEECH( (uParam0^)[I]._fU0, "PLAYER_OVER_THERE", 0, 0, 0 );
                        break;
                        case 2:
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "crouch_roll_r", "missRay1", 8.00000000, -1, 3 );
                        TASK_SHOOT_AT_CHAR( 0, l_U147, 500, 1 );
                        TASK_COMBAT( 0, l_U147 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        REMOVE_ALL_CHAR_WEAPONS( (uParam0^)[I]._fU0 );
                        GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, 7, 999, 0 );
                        SET_CURRENT_CHAR_WEAPON( (uParam0^)[I]._fU0, 7, 1 );
                        TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar9 );
                        CLEAR_SEQUENCE_TASK( uVar9 );
                        PRINTSTRING( "Being given a roll RIGHT" );
                        PRINTNL();
                        break;
                        case 1:
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "crouch_roll_l", "missRay1", 8.00000000, -1, 3 );
                        TASK_SHOOT_AT_CHAR( 0, l_U147, 500, 1 );
                        TASK_COMBAT( 0, l_U147 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        REMOVE_ALL_CHAR_WEAPONS( (uParam0^)[I]._fU0 );
                        GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, 7, 999, 0 );
                        SET_CURRENT_CHAR_WEAPON( (uParam0^)[I]._fU0, 7, 1 );
                        if ((uParam0^)[I]._fU40 == 12)
                        {
                            GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, 12, 999, 0 );
                            SET_CURRENT_CHAR_WEAPON( (uParam0^)[I]._fU0, 12, 1 );
                        }
                        TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar9 );
                        CLEAR_SEQUENCE_TASK( uVar9 );
                        PRINTSTRING( "Being given a roll LEFT" );
                        PRINTNL();
                        break;
                        case 3:
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        TASK_COMBAT( 0, l_U147 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar9 );
                        CLEAR_SEQUENCE_TASK( uVar9 );
                        break;
                    }
                    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U147, -529.00400000, 1251.05500000, 93.53949000, 2.00000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U147, -527.22350000, 1260.76300000, (uParam0^)[I]._fU16._fU8, 2.00000000, 1.00000000, 1.00000000, 0 )))
                    {
                        if ((uParam0^)[I]._fU48 == 0)
                        {
                            SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, l_U1632 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( (uParam0^)[I]._fU0, (uParam0^)[I]._fU4, 4.50000000 );
                        }
                        else
                        {
                            SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, l_U1631 );
                        }
                    }
                    else if ((uParam0^)[I]._fU48 == 0)
                    {
                        SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, l_U1633 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( (uParam0^)[I]._fU0, (uParam0^)[I]._fU4, 4.50000000 );
                    }
                    else
                    {
                        SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, l_U1631 );
                    }
                    if ((uParam0^)[I]._fU76 == 0)
                    {
                        if ((I mod 2) == 0)
                        {
                            SET_CHAR_ACCURACY( (uParam0^)[I]._fU0, iParam2 );
                        }
                        else
                        {
                            SET_CHAR_ACCURACY( (uParam0^)[I]._fU0, iParam2 + 5 );
                        }
                    }
                    else
                    {
                        SET_CHAR_ACCURACY( (uParam0^)[I]._fU0, (uParam0^)[I]._fU76 );
                    }
                    if ((uParam0^)[I]._fU40 == 11)
                    {
                        SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, l_U1633 );
                        SET_CHAR_ACCURACY( (uParam0^)[I]._fU0, 10 );
                    }
                    PRINTSTRING( "Goon " );
                    PRINTINT( I );
                    PRINTSTRING( " activated" );
                    PRINTNL();
                    (uParam0^)[I]._fU44 = 1;
                }
            }
        }
        if (DOES_CHAR_EXIST( (uParam0^)[I]._fU0 ))
        {
            if (((uParam0^)[I]._fU72 == 0) AND ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I]._fU0, l_U147, 0 )) AND (((uParam0^)[I]._fU60 == 3) AND ((uParam0^)[I]._fU44 == 1))))
            {
                if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                {
                    SWITCH_PED_TO_RAGDOLL( (uParam0^)[I]._fU0, 0, 10000, 1, 0, 1, 0 );
                    CREATE_NM_MESSAGE( 1, 79 );
                    PRINTSTRING( "Sending natural motion message NM_BALANCE_MSG!" );
                    PRINTNL();
                    SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                    l_U1615 = {l_U1615._fU0, l_U1615._fU4, (uParam0^)[I]._fU4._fU8};
                    CREATE_NM_MESSAGE( 1, 119 );
                    SET_NM_MESSAGE_VEC3( 121, l_U1615 );
                    SET_NM_MESSAGE_FLOAT( 122, 0.30000000 );
                    PRINTSTRING( "Sending natural motion message NM_BALANCE_LEAN_POS_MSG!" );
                    PRINTNL();
                    SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                    (uParam0^)[I]._fU72 = 1;
                }
            }
        }
        if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
        {
            if (DOES_BLIP_EXIST( (uParam0^)[I]._fU68 ))
            {
                REMOVE_BLIP( (uParam0^)[I]._fU68 );
            }
            Result++;
        }
    }
    return Result;
}

void sub_33460(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = 0; I <= 7; I++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[I]._fU0 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I]._fU0 );
        }
    }
    return;
}

void sub_33556()
{
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U147, -522.06510000, 1262.41100000, 17.50190000, 45.00000000, 45.00000000, 175.00000000, 0 )))
    {
        PRINT_NOW( "G4_FT_02", 7500, 1 );
        sub_13674( 14, "RB1_CALLF", "RB1AUD", 0 );
        sub_14260();
    }
    return;
}

void sub_33683()
{
    unknown uVar2;

    if (l_U651[l_U647] == 0)
    {
        GET_INTERIOR_AT_COORDS( -547.63350000, 1247.82100000, 92.53950000, ref uVar2 );
        ACTIVATE_INTERIOR( uVar2, 1 );
        PRINTSTRING( "ray1 : ray1SecondFloor" );
        PRINTNL();
        sub_14548();
        sub_23838( ref l_U885, 8, 0 );
        l_U651[l_U647] = 1;
    }
    sub_19944( 1 );
    sub_30712( ref l_U885, 8, 35 );
    sub_30712( ref l_U724, 8, 35 );
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U147, -538.63030000, 1258.18700000, 93.54450000, 6.00000000, 1.00000000, 1.00000000, 0 ))
    {
        sub_33460( ref l_U885, 8 );
        l_U647++;
    }
    return;
}

void sub_33936()
{
    if (l_U651[l_U647] == 0)
    {
        PRINTSTRING( "ray1 : ray1ThirdFloor" );
        PRINTNL();
        sub_14548();
        sub_33460( ref l_U724, 8 );
        sub_23838( ref l_U1046, 8, 0 );
        l_U651[l_U647] = 1;
    }
    if (l_U82[0] == 0)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U147, -546.91700000, 1250.26000000, 97.53500000, 2.50000000, 2.50000000, 1.25000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U147, -546.91700000, 1250.26000000, 97.53500000, 1.00000000, 1.00000000, 1.25000000, 1 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 106751028, -548.00000000, 1249.80000000, 97.80001000, 0, 0.00000000 );
            INIT_CUTSCENE( "IMRAY1" );
            STREAM_CUTSCENE();
            REMOVE_BLIP( l_U1621 );
            REMOVE_BLIP( l_U1620 );
            sub_33460( ref l_U885, 8 );
            sub_3713( 2, l_U1046[5]._fU0, "TEDDYS_FRIEND_M", 0 );
            PRINT_NOW( "G4_GT_04", 7500, 1 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1412882709, -546.00000000, 1233.80000000, 97.80001000, 1, 0.00000000 );
            REQUEST_MODEL( 1448755353 );
            l_U82[0] = 1;
        }
    }
    if (l_U699 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U147, -547.46060000, 1248.27700000, 97.53460000, 1.00000000, 1.00000000, 2.25000000, 1 ))
        {
            sub_3713( 2, l_U1046[5]._fU0, "TEDDYS_FRIEND_M", 0 );
            PRINTSTRING( "b_guysInRoomSpeechTriggered = TRUE" );
            PRINTNL();
            PRINTNL();
            l_U699 = 1;
        }
    }
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (l_U699 == 1))
    {
        PRINTSTRING( "no message being displayed" );
        PRINTNL();
        PRINTNL();
        if (l_U82[2] == 0)
        {
            PRINTSTRING( "should now be saying speech" );
            PRINTNL();
            PRINTNL();
            sub_26894( "RB1_ARR", ref l_U641, 8, 1 );
            l_U82[2] = 1;
        }
    }
    if (l_U82[0] == 0)
    {
        sub_30712( ref l_U885, 8, 35 );
    }
    sub_19944( 1 );
    if ((l_U82[0] == 1) AND ((sub_30712( ref l_U1046, 8, 35 )) > 4))
    {
        l_U647++;
    }
    return;
}

void sub_34777()
{
    unknown uVar2;
    unknown uVar3;

    if (l_U651[l_U647] == 0)
    {
        PRINTSTRING( "ray1 : ray1Escape" );
        PRINTNL();
        sub_14548();
        l_U651[l_U647] = 1;
    }
    sub_19944( 0 );
    sub_30712( ref l_U1046, 8, 35 );
    if ((sub_34897( l_U147, 346.00000000 )) AND (l_U82[0] == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U147, -544.86790000, 1231.62200000, 97.53959000, 1.00000000, 1.00000000, 1.00000000, 0 ))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            SET_PED_IS_BLIND_RAGING( l_U147, 0 );
            LOAD_ADDITIONAL_TEXT( "RAY1", 0 );
            GET_CURRENT_CHAR_WEAPON( l_U147, ref l_U719 );
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U1567 );
            if (DOES_VEHICLE_EXIST( l_U1567 ))
            {
                if (NOT (IS_CAR_DEAD( l_U1567 )))
                {
                    if (LOCATE_CAR_3D( l_U1567, -545.70790000, 1231.06200000, 97.01280000, 6.00000000, 6.00000000, 2.00000000, 0 ))
                    {
                        SET_CAR_COORDINATES( l_U1567, -545.70790000, 1231.06200000, 97.01280000 );
                        SET_CAR_HEADING( l_U1567, 350.00000000 );
                        SET_CAR_AS_MISSION_CAR( l_U1567 );
                        SET_ROOM_FOR_CAR_BY_NAME( l_U1567, "RM1e_MloRoom" );
                        SET_CAR_IN_CUTSCENE( l_U1567, 1 );
                    }
                }
            }
            CLEAR_AREA( -546.00000000, 1233.80000000, 97.80001000, 4.00000000, 1 );
            START_CUTSCENE();
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1412882709, -546.00000000, 1233.80000000, 97.80001000, 0, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 106751028, -548.00000000, 1249.80000000, 97.80001000, 1, 1.00000000 );
            CLEAR_NAMED_CUTSCENE( "IMRAY1" );
            REQUEST_INTERIOR_MODELS( 2035661027, "RM1b_MloRoom" );
            GET_INTERIOR_AT_COORDS( -544.86790000, 1231.62200000, 97.53959000, ref uVar2 );
            GET_HASH_KEY( "RM1b_MloRoom" );
            LOAD_SCENE_FOR_ROOM_BY_KEY( uVar2, GET_HASH_KEY( "RM1b_MloRoom" ) );
            l_U82[0] = 1;
        }
    }
    sub_19944( 0 );
    if ((l_U82[2] == 0) AND (l_U82[0] == 1))
    {
        DELETE_OBJECT( ref l_U1577 );
        if (IS_CHAR_ON_ANY_BIKE( l_U147 ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U147, -544.47590000, 1234.16400000, 96.53470000 );
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U1567 );
            if (DOES_VEHICLE_EXIST( l_U1567 ))
            {
                if (NOT (IS_CAR_DEAD( l_U1567 )))
                {
                    SET_CAR_COORDINATES( l_U1567, -545.70790000, 1231.06200000, 97.01280000 );
                    SET_CAR_HEADING( l_U1567, 350.00000000 );
                }
            }
        }
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1567 );
        SET_CHAR_COORDINATES( l_U147, -544.47590000, 1234.16400000, 96.53470000 );
        SET_CHAR_HEADING( l_U147, 204.02570000 );
        if (HAS_CHAR_GOT_WEAPON( l_U147, l_U719 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U147, l_U719, 1 );
        }
        else
        {
            sub_36071();
        }
        while (NOT (HAS_MODEL_LOADED( 1448755353 )))
        {
            WAIT( 0 );
        }
        CREATE_CHAR( 26, 1448755353, -546.86700000, 1234.54100000, 96.53470000, ref l_U1570, 1 );
        SET_CHAR_AS_ENEMY( l_U1570, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U1570, 1, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1570, 2, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1570, 5, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1570, 4, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1570, 0, 0, 0 );
        SET_AMBIENT_VOICE_NAME( l_U1570, "TEDDY" );
        SET_CHAR_PROOFS( l_U1570, 1, 1, 1, 1, 1 );
        SET_CHAR_HEADING( l_U1570, 333.31000000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1570, "RM1d_MloRoom" );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1570, 1 );
        sub_3713( 1, l_U1570, "TEDDY", 0 );
        SET_CHAR_COORDINATES( l_U1570, -546.31630000, 1244.72000000, 97.53460000 );
        SET_CHAR_HEADING( l_U1570, 32.65910000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1570, "RM1a_MloRoom" );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1570 );
        SET_CHAR_PROOFS( l_U1570, 1, 1, 1, 1, 1 );
        OPEN_SEQUENCE_TASK( ref uVar3 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -547.04560000, 1250.80100000, 97.53450000, 4, 5000, 1.00000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -538.97480000, 1253.41200000, 101.53360000, 4, -1, 0.50000000 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        TASK_PERFORM_SEQUENCE( l_U1570, uVar3 );
        SET_CHAR_COORDINATES( l_U147, -544.46040000, 1235.98800000, 96.53470000 );
        SET_CHAR_HEADING( l_U147, 354.68550000 );
        TASK_PLAY_ANIM( l_U147, "getup_back_fast", "missRay1", 1000.00000000, 0, 1, 1, 0, -1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_36955( l_U148 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_IN_UNHACKED( 100 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 106751028, -548.00000000, 1249.80000000, 97.80001000, 1, 1.00000000 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2035661027 );
        PRINT_NOW( "G4_GT_05", 7500, 1 );
        ADD_BLIP_FOR_CHAR( l_U1570, ref l_U1622 );
        SET_BLIP_AS_FRIENDLY( l_U1622, 0 );
        l_U82[2] = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U1570 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1570, -538.97480000, 1253.41200000, 101.53360000, 1.00000000, 1.00000000, 1.00000000, 0 ))
        {
            sub_23838( ref l_U1207, 4, 0 );
            sub_23838( ref l_U1368, 1, 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1570 );
            SET_CHAR_COORDINATES( l_U1570, -531.73500000, 1287.84800000, 104.67460000 );
            CLEAR_PRINTS();
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1567 );
            PRINT_NOW( "G4_GT_07", 7500, 1 );
            l_U647++;
        }
    }
    else if (l_U82[2] == 1)
    {
        l_U648 = 1;
    }
    return;
}

int sub_34897(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEADING( uParam0, ref fVar4 );
        fVar5 = uParam1 - 90;
        fVar6 = uParam1 + 89;
        fVar8 = fVar6 - 360;
        fVar7 = fVar5 + 360;
        if ((fVar5 >= 0) AND (fVar6 <= 360))
        {
            if ((fVar4 < fVar6) AND (fVar4 > fVar5))
            {
                l_U639 = 1;
            }
            else
            {
                l_U639 = 0;
            }
        }
        else if (fVar6 > 360)
        {
            if (((fVar4 > fVar5) AND (fVar4 <= 360)) || ((fVar4 >= 0) AND (fVar4 < fVar8)))
            {
                l_U639 = 1;
            }
            else
            {
                l_U639 = 0;
            }
        }
        else if (fVar5 < 0)
        {
            if (((fVar4 < fVar6) AND (fVar4 >= 0)) || ((fVar4 <= 360) AND (fVar4 > fVar7)))
            {
                l_U639 = 1;
            }
            else
            {
                l_U639 = 0;
            }
        };;;
        if (l_U639)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void sub_36071()
{
    if (HAS_CHAR_GOT_WEAPON( sub_3610(), 15 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3610(), 15, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3610(), 14 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3610(), 14, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3610(), 13 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3610(), 13, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3610(), 12 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3610(), 12, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3610(), 10 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3610(), 10, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3610(), 11 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3610(), 11, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3610(), 9 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3610(), 9, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_3610(), 7 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_3610(), 7, 1 );
    };;;;;;;;
    return;
}

void sub_36955(unknown uParam0)
{
    CLEAR_PRINTS();
    SET_WIDESCREEN_BORDERS( 0 );
    SET_PLAYER_CONTROL( uParam0, 1 );
    SET_CAM_ACTIVE( l_U145, 0 );
    SET_CAM_PROPAGATE( l_U145, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    return;
}

void sub_37423()
{
    unknown uVar2;
    unknown uVar3;
    float fVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    float fVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    float fVar22;
    int iVar23;
    int iVar24;
    int iVar25;
    int iVar26;
    int iVar27;
    int iVar28;
    int iVar29;
    int iVar30;
    unknown uVar31;

    if (l_U651[l_U647] == 0)
    {
        PRINTSTRING( "ray1 : ray1ShootOutOnRoof" );
        PRINTNL();
        sub_33460( ref l_U1046, 8 );
        sub_14548();
        if ((IS_CHAR_INJURED( l_U1570 )) || (NOT (DOES_CHAR_EXIST( l_U1570 ))))
        {
            DELETE_CHAR( ref l_U1570 );
            CREATE_CHAR( 26, 492147228, -533.18730000, 1268.75600000, 105.59410000, ref l_U1570, 1 );
            ADD_BLIP_FOR_CHAR( l_U1570, ref l_U1622 );
            SET_AMBIENT_VOICE_NAME( l_U1570, "TEDDY" );
        }
        WAIT( 0 );
        if (NOT (IS_CHAR_DEAD( l_U1570 )))
        {
            DETACH_PED( l_U1570, 1 );
            SET_CHAR_COORDINATES( l_U1570, -533.87380000, 1286.46900000, 105.59660000 );
            SET_CHAR_HEADING( l_U1570, 0.52420000 );
            SET_CHAR_HEALTH( l_U1570, 600 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U1570, 0 );
            SET_CHAR_PROOFS( l_U1570, 0, 1, 0, 0, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1570, 1 );
            SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U1570, 1 );
        }
        l_U651[l_U647] = 1;
    }
    sub_19944( 0 );
    if (l_U707 == 0)
    {
        if ((l_U82[2] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U147, -538.14420000, 1265.66400000, 108.75670000, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar3 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -533.00000000, 1286.00000000, 105.69530000, 3, 10000, 0.50000000 );
            TASK_ACHIEVE_HEADING( 0, 270.00000000 );
            TASK_PLAY_ANIM( 0, "locked_door_loop", "missRay1", 8.00000000, 1, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( uVar3 );
            if (NOT (IS_CHAR_DEAD( l_U1570 )))
            {
                TASK_PERFORM_SEQUENCE( l_U1570, uVar3 );
            }
            CLEAR_SEQUENCE_TASK( uVar3 );
            l_U707 = 1;
        }
    }
    sub_30712( ref l_U1207, 4, 22 );
    sub_30712( ref l_U1368, 1, 30 );
    if (l_U706 == 0)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U147, -534.30360000, 1281.71600000, 106.59460000, 10.00000000, 1.50000000, 3.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U147, -534.54180000, 1281.57200000, 105.58900000, 1.00000000, 1.00000000, 1.00000000, 0 )))
        {
            sub_3713( 1, l_U1570, "TEDDY", 0 );
            sub_17792( ref l_U641, 0 );
            sub_26894( "RB1_END", ref l_U641, 8, 1 );
            if (NOT (IS_CHAR_DEAD( l_U1570 )))
            {
                SET_CHAR_PROOFS( l_U1570, 0, 0, 0, 0, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1570, 1 );
                fVar4 = 4.00000000;
                iVar5 = 0;
                iVar6 = 1;
                iVar7 = 1;
                iVar8 = 0;
                iVar9 = 0;
                iVar10 = 0;
                iVar11 = 0;
                iVar12 = -1;
                fVar13 = 1000.00000000;
                iVar14 = 0;
                iVar15 = 1;
                iVar16 = 1;
                iVar17 = 1;
                iVar18 = 0;
                iVar19 = 0;
                iVar20 = 0;
                iVar21 = -1;
                fVar22 = 1000.00000000;
                iVar23 = 1;
                iVar24 = 0;
                iVar25 = 0;
                iVar26 = 0;
                iVar27 = 0;
                iVar28 = 0;
                iVar29 = 0;
                iVar30 = -1;
                OPEN_SEQUENCE_TASK( ref uVar31 );
                TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "Trans_to_scared02", "missRay1", fVar13, iVar14, iVar15, iVar16, iVar17, iVar18, iVar19, iVar20, iVar21 );
                TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "scared_02", "missRay1", fVar22, iVar23, iVar24, iVar25, iVar26, iVar27, iVar28, iVar29, iVar30 );
                TASK_LOOK_AT_CHAR( 0, l_U147, 60000, 0 );
                CLOSE_SEQUENCE_TASK( uVar31 );
                SET_CHAR_HEADING( l_U1570, 270.00000000 );
                TASK_PERFORM_SEQUENCE( l_U1570, uVar31 );
                CLEAR_SEQUENCE_TASK( uVar31 );
                l_U706 = 1;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U1570 )))
    {
        if ((l_U82[3] == 0) AND ((IS_CHAR_PLAYING_ANIM( l_U1570, "missray1", "scared_02" )) AND (l_U82[2] == 1)))
        {
            FREEZE_CHAR_POSITION( l_U1570, 1 );
            UNLOCK_RAGDOLL( l_U1570, 0 );
            l_U82[3] = 1;
        }
    }
    if (l_U82[3] == 1)
    {
        sub_12076( l_U1570, l_U147 );
    }
    if ((l_U82[1] == 0) AND (l_U707 == 1))
    {
        if (IS_CHAR_INJURED( l_U1570 ))
        {
            sub_17792( ref l_U641, 0 );
            WAIT( 3000 );
            DO_SCREEN_FADE_OUT( 1000 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            SET_CAM_POS( l_U145, -522.15500000, 1256.62000000, 16.75659000 );
            SET_CAM_ROT( l_U145, 10.75814000, 0.00000000, 51.87776000 );
            SET_CAM_FOV( l_U145, 45.00000000 );
            sub_15274( ref l_U145, 1 );
            sub_15171( 1 );
            DO_SCREEN_FADE_IN( 1000 );
            SET_CHAR_COORDINATES( l_U147, -530.14420000, 1261.91000000, 16.47460000 );
            SET_CHAR_HEADING( l_U147, 264.94340000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U147, "ProjectF1_MloRoom" );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U147, -525.64610000, 1260.64600000, 16.47130000, 2, 10000, 0.50000000 );
            WAIT( 3000 );
            SETTIMERA( 0 );
            sub_15274( ref l_U145, 0 );
            sub_15171( 0 );
            sub_39066();
        }
        GET_GAME_TIMER( ref l_U665 );
        if ((NOT (sub_17079( l_U641 ))) AND ((l_U706 == 1) AND ((l_U665 - l_U666) > 10000)))
        {
            if ((sub_18147( l_U147, l_U1570, 1 )) < 20.00000000)
            {
                sub_26894( "RB1_KILL", ref l_U641, 7, 1 );
                GET_GAME_TIMER( ref l_U666 );
            }
        }
        if ((IS_EXPLOSION_IN_AREA( 2, -539.00000000, 1283.86000000, 104.00000000, -531.27000000, 1289.18000000, 109.07000000 )) || ((IS_EXPLOSION_IN_AREA( 0, -539.00000000, 1283.86000000, 104.00000000, -531.27000000, 1289.18000000, 109.07000000 )) || (((IS_CHAR_IN_ANY_CAR( l_U147 )) AND ((sub_18147( l_U147, l_U1570, 1 )) < 4.85000000)) || (((sub_18147( l_U147, l_U1570, 1 )) < 0.85000000) || ((IS_CHAR_ON_FIRE( l_U1570 )) || ((sub_13506( l_U1570 )) < 600))))))
        {
            if (IS_EXPLOSION_IN_AREA( -1, -539.00000000, 1283.86000000, 104.00000000, -531.27000000, 1289.18000000, 109.07000000 ))
            {
                SET_CHAR_HEALTH( l_U1570, 200 );
                l_U697 = 1;
            }
            if ((sub_18147( l_U147, l_U1570, 1 )) < 0.85000000)
            {
                CLEAR_CHAR_TASKS( l_U147 );
                SET_CHAR_COORDINATES( l_U147, -533.81520000, 1287.17200000, 104.59520000 );
                SET_CHAR_HEADING( l_U147, 352.89780000 );
            }
            SET_CAM_POS( l_U145, -534.36900000, 1290.80100000, 109.12250000 );
            SET_CAM_ROT( l_U145, -72.27695000, -2.09752200, -117.99570000 );
            SET_CAM_FOV( l_U145, 52.19998000 );
            sub_52728();
            sub_15171( 1 );
            sub_15274( ref l_U143, 0 );
            sub_15274( ref l_U145, 1 );
            SET_CHAR_PROOFS( l_U1570, 1, 0, 1, 1, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1570, 1 );
            if (IS_CHAR_ON_FIRE( l_U1570 ))
            {
                l_U697 = 1;
            }
            FREEZE_CHAR_POSITION( l_U1570, 0 );
            sub_17792( ref l_U641, 0 );
            WAIT( 0 );
            if (NOT (IS_CHAR_DEAD( l_U1570 )))
            {
                SET_CHAR_HEALTH( l_U1570, 200 );
                if ((NOT (IS_CHAR_PLAYING_ANIM( l_U1570, "missRay1", "Trans_to_scared02" ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1570, -533.20000000, 1288.12000000, 104.64000000, 1.00000000, 1.00000000, 1.00000000, 0 ))))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1570 );
                    SET_CHAR_HEADING( l_U1570, 270.00000000 );
                    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( l_U1570, "Trans_to_scared02", "missRay1", 1000.00000000, 0, 1, 1, 1, 0, 0, 0, -1 );
                    FREEZE_CHAR_POSITION( l_U1570, 0 );
                    while (l_U720 < 0.96000000)
                    {
                        PRINTSTRING( "First anim..." );
                        PRINTFLOAT( l_U720 );
                        PRINTNL();
                        PRINTNL();
                        if (NOT (IS_CHAR_DEAD( l_U1570 )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U1570, "missRay1", "Trans_to_scared02" ))
                            {
                                SET_CHAR_HEALTH( l_U1570, 200 );
                                GET_CHAR_ANIM_CURRENT_TIME( l_U1570, "missRay1", "Trans_to_scared02", ref l_U720 );
                            }
                        }
                        else
                        {
                            l_U720 = 1.00000000;
                        }
                        WAIT( 0 );
                    }
                }
                CLEAR_PRINTS();
                if (NOT (IS_CHAR_DEAD( l_U1570 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1570 );
                    if (l_U697 == 1)
                    {
                        START_CHAR_FIRE( l_U1570 );
                        l_U697 = 1;
                    }
                    SET_CHAR_HEADING( l_U1570, 210.00000000 );
                    SET_CHAR_COORDINATES( l_U1570, -533.20000000, 1288.12000000, 104.64000000 );
                    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( l_U1570, "stumble_fall", "missRay1", 1000.00000000, 0, 0, 0, 0, 0, 0, 1, -1 );
                    SET_TIME_SCALE( 0.50000000 );
                    FREEZE_CHAR_POSITION( l_U1570, 0 );
                }
                while (l_U721 < 0.93000000)
                {
                    if (l_U721 > 0.80000000)
                    {
                        SET_CAM_POS( l_U145, -534.36900000, 1290.80100000, 109.12250000 );
                        SET_CAM_ROT( l_U145, -72.27695000, -2.09752200, -117.99570000 );
                        SET_CAM_FOV( l_U145, 52.19998000 );
                        SET_TIME_SCALE( 1.00000000 );
                    }
                    if ((l_U698 == 0) AND (l_U721 > 0.50000000))
                    {
                        ADD_EXPLOSION( -533.44270000, 1288.29300000, 105.56950000, 0, 0.37000000, 0, 1, 0.00000000 );
                        sub_3713( 1, l_U1570, "TEDDY", 0 );
                        sub_26917( "RB1_FALLS", "RB1AUD", ref l_U641, 8, 0 );
                        l_U698 = 1;
                    }
                    PRINTSTRING( "2nd anim..." );
                    PRINTFLOAT( l_U721 );
                    PRINTNL();
                    PRINTNL();
                    if (NOT (IS_CHAR_DEAD( l_U1570 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U1570, "missRay1", "stumble_fall" ))
                        {
                            if (l_U720 < 1.00000000)
                            {
                                if (l_U667 == 0)
                                {
                                    SET_CHAR_ANIM_CURRENT_TIME( l_U1570, "missRay1", "stumble_fall", 0.40000000 );
                                    l_U667 = 1;
                                }
                            }
                            GET_CHAR_ANIM_CURRENT_TIME( l_U1570, "missRay1", "stumble_fall", ref l_U721 );
                        }
                    }
                    else
                    {
                        l_U721 = 1.00000000;
                    }
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U1570 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1570 );
                    FREEZE_CHAR_POSITION( l_U1570, 0 );
                    UNLOCK_RAGDOLL( l_U1570, 1 );
                    SWITCH_PED_TO_RAGDOLL( l_U1570, 0, 0, 1, 0, 0, 1 );
                    SET_CHAR_PROOFS( l_U1570, 0, 0, 0, 0, 0 );
                    if (l_U697)
                    {
                        START_CHAR_FIRE( l_U1570 );
                    }
                }
            }
            REMOVE_BLIP( l_U1622 );
            l_U647++;
            l_U82[1] = 1;
        }
    }
    return;
}

void sub_39066()
{
    if (NOT (IS_CHAR_DEAD( l_U1570 )))
    {
        SET_CHAR_HEALTH( l_U1570, 3 );
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1212308722, -528.30000000, 1262.20000000, 17.70000000, 0, 0.00000000 );
    REMOVE_BLIP( l_U1622 );
    sub_13674( 14, "RB1_CALLP", "RB1AUD", 0 );
    sub_39182( 3, 3 );
    sub_39243( 33 );
    CLEAR_WANTED_LEVEL( l_U148 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    sub_40615();
    sub_2631();
    return;
}

void sub_39182(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_39243(unknown uParam0)
{
    switch (uParam0)
    {
        case 21:
        if (g_U1965[0] == 0)
        {
            sub_39398( ref g_U1967[0], 4, 0, 0 );
            g_U1965[0] = 1;
        }
        break;
        case 22:
        if (g_U1984[0] == 0)
        {
            sub_39398( ref g_U1986[0], 4, 0, 0 );
            g_U1984[0] = 1;
        }
        break;
        case 23:
        if (g_U2003[0] == 0)
        {
            sub_39398( ref g_U2005[0], 4, 0, 0 );
            g_U2003[0] = 1;
        }
        break;
        case 24:
        if (g_U2022[0] == 0)
        {
            sub_39398( ref g_U2024[0], 4, 0, 0 );
            g_U2022[0] = 1;
        }
        break;
        case 25:
        if (g_U2041[0] == 0)
        {
            sub_39398( ref g_U2043[0], 4, 0, 0 );
            g_U2041[0] = 1;
        }
        break;
        case 26:
        if (g_U2060[0] == 0)
        {
            sub_39398( ref g_U2062[0], 4, 0, 0 );
            g_U2060[0] = 1;
        }
        break;
        case 27:
        if (g_U2079[0] == 0)
        {
            sub_39398( ref g_U2081[0], 4, 0, 0 );
            g_U2079[0] = 1;
        }
        break;
        case 28:
        if (g_U2098[0] == 0)
        {
            sub_39398( ref g_U2100[0], 4, 0, 0 );
            g_U2098[0] = 1;
        }
        break;
        case 29:
        if (g_U2117[0] == 0)
        {
            sub_39398( ref g_U2119[0], 4, 0, 0 );
            g_U2117[0] = 1;
        }
        break;
        case 30:
        if (g_U2136[0] == 0)
        {
            sub_39398( ref g_U2138[0], 4, 0, 0 );
            g_U2136[0] = 1;
        }
        break;
        case 31:
        if (g_U2155[0] == 0)
        {
            sub_39398( ref g_U2157[0], 4, 0, 0 );
            g_U2155[0] = 1;
        }
        break;
        case 32:
        if (g_U2174[0] == 0)
        {
            sub_39398( ref g_U2176[0], 4, 0, 0 );
            g_U2174[0] = 1;
        }
        break;
        case 33:
        if (g_U2193[0] == 0)
        {
            sub_39398( ref g_U2195[0], 4, 0, 0 );
            g_U2193[0] = 1;
        }
        break;
        case 34:
        if (g_U2212[0] == 0)
        {
            sub_39398( ref g_U2214[0], 4, 0, 0 );
            g_U2212[0] = 1;
        }
        break;
    }
    return;
}

void sub_39398(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_39451( iParam0, uParam1, uParam2 );
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
        sub_39583( iParam0 + 0 );
    }
    return;
}

void sub_39451(int iParam0, int iParam1, int iParam2)
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
        sub_39583( iParam0 + 0 );
    }
    return;
}

void sub_39583(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_39614( iParam0->_fU4 )))
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

int sub_39614(unknown uParam0)
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

void sub_40615()
{
    sub_40624();
    return;
}

void sub_40624()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_40642();
    sub_40701( iVar2, iVar3, iVar4 );
    return;
}

void sub_40642()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U632[I] = 4;
    }
    return;
}

void sub_40701(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 14;
    sub_40734( iVar5, uParam0, uParam1, uParam2, "Contact_16" );
    return;
}

void sub_40734(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_40830( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_40830( ref cVar9 );
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
            sub_40830( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_40830( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_40830( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_40830( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_41407( iParam0, iVar7 );;;
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
                sub_41804( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_41804( 0, 4 );
            }
        }
    }
    if (NOT (sub_41893( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2947(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2947() );
    }
    sub_1729();
    bVar27 = true;
    uVar28 = sub_41407( iParam0, iVar7 );
    uVar29 = sub_1186( iParam0 );
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
                sub_51269( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_51699();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_51784( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_51841( iParam0 );
                sub_51880( 0 );
                sub_1627( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_51988();
        }
    }
    if (bParam2)
    {
        sub_51699();
        sub_52076();
        sub_51880( 0 );
    }
    if (bParam3)
    {
        sub_51699();
        sub_52116();
        sub_51880( 0 );
        sub_1627( uVar29, 0 );
    }
    sub_1073();
    return;
}

void sub_40830(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_41407(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1585( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_41804(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_41893(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_42101( uParam1 );
        break;
        case 1:
        bVar8 = sub_44179( uParam1 );
        break;
        case 2:
        bVar8 = sub_44405( uParam1 );
        break;
        case 3:
        bVar8 = sub_44555( uParam1 );
        break;
        case 4:
        bVar8 = sub_44833( uParam1 );
        break;
        case 5:
        bVar8 = sub_45136( uParam1 );
        break;
        case 6:
        bVar8 = sub_45335( uParam1 );
        break;
        case 7:
        bVar8 = sub_45561( uParam1 );
        break;
        case 8:
        bVar8 = sub_45796( uParam1 );
        break;
        case 9:
        bVar8 = sub_46171( uParam1 );
        break;
        case 10:
        bVar8 = sub_46418( uParam1 );
        break;
        case 11:
        bVar8 = sub_46557( uParam1 );
        break;
        case 12:
        bVar8 = sub_46856( uParam1 );
        break;
        case 13:
        bVar8 = sub_47084( uParam1 );
        break;
        case 14:
        bVar8 = sub_47371( uParam1 );
        break;
        case 15:
        bVar8 = sub_47653( uParam1 );
        break;
        case 16:
        bVar8 = sub_47935( uParam1 );
        break;
        case 17:
        bVar8 = sub_48136( uParam1 );
        break;
        case 18:
        bVar8 = sub_48209( uParam1 );
        break;
        case 19:
        bVar8 = sub_48423( uParam1 );
        break;
        case 20:
        bVar8 = sub_48676( uParam1 );
        break;
        case 21:
        bVar8 = sub_48923( uParam1 );
        break;
        case 22:
        bVar8 = sub_49124( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_43784( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_41407( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_49447( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_42101(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_42380( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_42380( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_42380( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_42380( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_42380( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_42380( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_42380( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_42380( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_42380( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_42380( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_42380( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_42380( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_42380( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_42380( iVar3, 0, 3, 1, 0, 0 );
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
        sub_42380( iVar3, 0, sub_43662(), sub_43928(), 0, 0 );
        break;
        default:
        sub_44087( "Friend 1", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Friend 1", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_42380(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_42391( uParam1 );
    sub_42565( uParam0, 0, uParam2 );
    sub_42565( uParam0, 1, uParam3 );
    sub_42565( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_40642();
    return;
}

void sub_42391(unknown uParam0)
{
    ADD_SCORE( sub_2947(), uParam0 );
    sub_42416( uParam0 );
    return;
}

void sub_42416(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1585( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_42565(unknown uParam0, int iParam1, int iParam2)
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
        sub_42722( uParam0 );
    }
    return;
}

void sub_42722(unknown uParam0)
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

int sub_43662()
{
    switch (l_U632[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_43784( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_43784(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_43928()
{
    switch (l_U632[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_43784( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_44087(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_44179(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42380( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_44087( "Contact 2", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 2", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44405(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_42380( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_44087( "Girl 3", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Girl 3", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44555(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_42380( iVar3, 0, sub_43662(), sub_43928(), 0, 0 );
        break;
        default:
        sub_44087( "Friend 4", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Friend 4", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44833(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42380( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_42380( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_42380( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_42380( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_44087( "Contact 5", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 5", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45136(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_44087( "Contact 7", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 7", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45335(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42380( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_44087( "Contact 7b", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 7b", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45561(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_42380( iVar3, 0, sub_43662(), sub_43928(), 0, 0 );
        break;
        default:
        sub_44087( "Friend 8", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Friend 8", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45796(unknown uParam0)
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
        sub_42380( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_42380( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_42380( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_42380( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_42380( iVar3, 0, sub_43662(), sub_43928(), 0, 0 );
        break;
        default:
        sub_44087( "Friend 9", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Friend 9", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46171(unknown uParam0)
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
        sub_42380( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_42380( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_42380( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_44087( "Contact 10", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_44087( "Contact 10", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46418(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_44087( "Girl 11", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Girl 11", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46557(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42380( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_42380( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_42380( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_42380( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_42380( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_44087( "Contact 12", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 12", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46856(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42380( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_44087( "Contact 13", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 13", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47084(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_42380( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_42380( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_42380( iVar3, 0, sub_43662(), sub_43928(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_44087( "Friend 15", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Friend 15", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47371(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42380( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_42380( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_42380( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_44087( "Contact 16", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 16", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47653(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_42380( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_42380( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_42380( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_44087( "Contact 18", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 18", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_47935(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_44087( "Contact 19", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 19", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48136(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_44087( "Girl 20", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48209(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_44087( "Contact 21", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 21", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48423(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42380( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_42380( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_44087( "Contact 22", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 22", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48676(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_42380( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_42380( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_42380( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_44087( "Contact 24", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 24", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_48923(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_42380( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_42380( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_42380( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_44087( "Contact 25", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_44087( "Contact 25", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_49124(unknown uParam0)
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
        sub_42380( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_44087( "Girl 26", 1 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_44087( "Girl 26", 0 );
        sub_42380( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_49447(int iParam0, int iParam1)
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
    if (sub_49495( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_50226( iParam1 );
    }
    return;
}

int sub_49495(int iParam0, int iParam1)
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
            sub_49635( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_49635(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_49817( 0 );
    return;
}

void sub_49817(boolean bParam0)
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
        sub_50072();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_50072()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_50226(int iParam0)
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
        sub_50559( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_50559( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_50559( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_50559( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_50559( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_50559( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_50559( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_50559( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_50559( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_50559( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_50559( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_50559( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_50559( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_50559( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_50559( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_50559( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_50559( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_50559( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_50559( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_50559(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_51269(unknown uParam0, unknown uParam1)
{
    sub_51288( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_51288(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_51699()
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

int sub_51784(int iParam0, int iParam1)
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

void sub_51841(unknown uParam0)
{
    sub_972();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_51880(unknown uParam0)
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

void sub_51988()
{
    sub_51997();
    return;
}

void sub_51997()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_52076()
{
    sub_51997();
    return;
}

void sub_52116()
{
    sub_51997();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_52728()
{
    if (NOT (DOES_CAM_EXIST( l_U140 )))
    {
        CREATE_CAM( 14, ref l_U140 );
    }
    if (NOT (DOES_CAM_EXIST( l_U142 )))
    {
        CREATE_CAM( 14, ref l_U142 );
    }
    if (NOT (DOES_CAM_EXIST( l_U143 )))
    {
        CREATE_CAM( 3, ref l_U143 );
    }
    if (NOT (DOES_CAM_EXIST( l_U145 )))
    {
        CREATE_CAM( 14, ref l_U145 );
    }
    return;
}

void sub_54270()
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

    if (l_U651[l_U647] == 0)
    {
        PRINTSTRING( "ray1 : ray1FallingCutscene" );
        PRINTNL();
        sub_14548();
        CLEAR_AREA_OF_CHARS( -530.40130000, 1296.15500000, 17.50310000, 30.00000000 );
        SET_CAM_POS( l_U145, -536.30190000, 1290.42100000, 106.32360000 );
        SET_CAM_ROT( l_U145, -3.28211000, 0.00000000, -128.67850000 );
        SET_CAM_FOV( l_U145, 55.90000000 );
        if (NOT (IS_CHAR_DEAD( l_U1570 )))
        {
            CREATE_NM_MESSAGE( 1, 246 );
            PRINTSTRING( "Sending natural motion message NM_pedal_MSG!" );
            PRINTNL();
            SEND_NM_MESSAGE( l_U1570 );
            POINT_CAM_AT_PED( l_U145, l_U1570 );
            SET_CHAR_PROOFS( l_U1570, 0, 0, 1, 0, 0 );
        }
        SETTIMERB( 0 );
        l_U651[l_U647] = 1;
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1212308722, -528.30000000, 1262.20000000, 17.70000000, 1, 1.00000000 );
    if ((l_U82[4] == 0) AND ((sub_20111( l_U1570, -533.63530000, 1288.52500000, 104.56440000 )) < 1.80000000))
    {
        l_U82[4] = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U1570 )))
    {
        GET_CHAR_COORDINATES( l_U1570, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    }
    else
    {
        N_1363505769( l_U1570, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    }
    l_U1600 = {l_U1597};
    if (NOT (IS_CHAR_DEAD( l_U1570 )))
    {
        GET_CHAR_VELOCITY( l_U1570, ref l_U1597._fU0, ref l_U1597._fU4, ref l_U1597._fU8 );
    }
    else
    {
        l_U1597 = {l_U0};
    }
    l_U1603 = {sub_22719( l_U1597, l_U1600 )};
    if ((l_U82[0] == 0) AND (TIMERB() > 5000))
    {
        SET_CAM_POS( l_U145, -533.38350000, 1286.02100000, 107.80560000 );
        SET_CAM_ROT( l_U145, -53.58780000, 0.00000000, 14.33178000 );
        SET_CAM_FOV( l_U145, 55.00000000 );
        WAIT( 3000 );
        l_U82[2] = 1;
        l_U82[3] = 1;
        l_U82[5] = 0;
    }
    if ((l_U82[0] == 0) AND (uVar2._fU8 < 102.00000000))
    {
        CREATE_CAM( 14, ref l_U1619 );
        if (NOT (IS_CHAR_DEAD( l_U1570 )))
        {
            ATTACH_CAM_TO_PED( l_U1619, l_U1570 );
            SET_CAM_ATTACH_OFFSET( l_U1619, -4.00000000, 5.65000000, -1.50000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1619, 0 );
            POINT_CAM_AT_PED( l_U1619, l_U1570 );
            SET_CAM_POINT_OFFSET( l_U1619, 0.00000000, 0.00000000, 0.00000000 );
            SET_CAM_FOV( l_U1619, 20.00000000 );
        }
        sub_15274( ref l_U145, 0 );
        sub_15274( ref l_U1619, 1 );
        l_U82[0] = 1;
    }
    if ((l_U82[1] == 0) AND ((sub_55206( l_U1570 )) < 60.00000000))
    {
        sub_15274( ref l_U1619, 0 );
        sub_15274( ref l_U145, 1 );
        SET_CAM_POS( l_U145, -531.26570000, 1301.30900000, 16.88189000 );
        SET_CAM_ROT( l_U145, 4.88983800, -0.23297900, -161.16890000 );
        SET_CAM_FOV( l_U145, 26.00000000 );
        if (NOT (IS_CHAR_DEAD( l_U1570 )))
        {
            POINT_CAM_AT_PED( l_U145, l_U1570 );
        }
        l_U82[1] = 1;
    }
    if ((l_U82[1] == 1) AND ((l_U82[2] == 0) AND (l_U1603._fU8 > 0.25000000)))
    {
        sub_17792( ref l_U641, 0 );
        STOP_PED_SPEAKING( l_U1570, 1 );
        if (NOT (IS_CHAR_DEAD( l_U1570 )))
        {
            CREATE_NM_MESSAGE( 1, 0 );
            PRINTSTRING( "Sending natural motion message NM_STOP_ALL_MSG!" );
            PRINTNL();
            SEND_NM_MESSAGE( l_U1570 );
            CREATE_NM_MESSAGE( 1, 8 );
            SEND_NM_MESSAGE( l_U1570 );
        }
        SHAKE_PAD( 0, 500, 50 );
        PLAY_SOUND_FROM_PED( -1, "PED_FALL_TO_DEATH", l_U1570 );
        SET_PED_GENERATES_DEAD_BODY_EVENTS( l_U1570, 1 );
        PRINTSTRING( "Stop windmililing" );
        PRINTNL();
        SETTIMERA( 0 );
        l_U82[2] = 1;
    }
    if ((l_U82[2] == 1) AND ((l_U82[3] == 0) AND (TIMERA() > 2000)))
    {
        SET_CAM_POS( l_U140, -536.69440000, 1305.87700000, 53.48012000 );
        uVar5 = {sub_12374( l_U1570 )};
        POINT_CAM_AT_COORD( l_U140, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
        SET_CAM_FOV( l_U140, 45.00000000 );
        SET_CAM_NEAR_DOF( l_U140, 2.50000000 );
        SET_CAM_FAR_DOF( l_U140, 90.50000000 );
        SET_CAM_POS( l_U142, -536.69440000, 1305.87700000, 53.48012000 );
        uVar8 = {sub_12374( l_U1570 )};
        POINT_CAM_AT_COORD( l_U142, uVar8._fU0, uVar8._fU4, uVar8._fU8 );
        SET_CAM_FOV( l_U142, 49.00000000 );
        SET_CAM_NEAR_DOF( l_U142, 2.50000000 );
        SET_CAM_FAR_DOF( l_U142, 90.50000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U143, l_U140, l_U142, 4000, 0 );
        sub_15274( ref l_U143, 1 );
        sub_15274( ref l_U145, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        SETTIMERA( 0 );
        l_U82[3] = 1;
    }
    if ((TIMERA() > 4000) AND ((l_U82[5] == 0) AND ((l_U82[3] == 1) AND (l_U82[2] == 1))))
    {
        if (IS_CHAR_ON_FOOT( l_U147 ))
        {
            DO_SCREEN_FADE_OUT( 1000 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            SET_CHAR_COORDINATES( l_U147, -530.14420000, 1261.91000000, 16.47460000 );
            SET_CHAR_HEADING( l_U147, 264.94340000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U147, "ProjectF1B_MloRoom" );
            LOAD_SCENE( -530.14420000, 1261.91000000, 16.47460000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U147, -525.64610000, 1260.64600000, 16.47130000, 2, 10000, 0.50000000 );
            UNPOINT_CAM( l_U145 );
            SET_CAM_POS( l_U145, -522.15500000, 1256.62000000, 16.75659000 );
            SET_CAM_ROT( l_U145, 10.75814000, 0.00000000, 51.87776000 );
            SET_CAM_FOV( l_U145, 45.00000000 );
            sub_15274( ref l_U143, 0 );
            sub_15274( ref l_U145, 1 );
            WAIT( 500 );
            DO_SCREEN_FADE_IN( 500 );
            SETTIMERA( 0 );
        }
        else
        {
            SETTIMERA( 3500 );
            l_U82[5] = 1;
        }
        l_U82[5] = 1;
    }
    if ((sub_17505()) || ((TIMERA() > 3500) AND (l_U82[5] == 1)))
    {
        if (l_U82[5] == 0)
        {
            DO_SCREEN_FADE_OUT( 1000 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_AREA_OF_CARS( -525.64610000, 1260.64600000, 16.47130000, 10.00000000 );
            SET_CHAR_COORDINATES( l_U147, -525.64610000, 1260.64600000, 16.47130000 );
            SET_CHAR_HEADING( l_U147, 264.94340000 );
            DO_SCREEN_FADE_IN( 1000 );
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_GAME_CAM_PITCH( 0.00000000 );
        sub_17792( ref l_U641, 0 );
        g_U15654[47] = 0;
        sub_36955( l_U148 );
        sub_15171( 0 );
        if (l_U717 == 0)
        {
            sub_39066();
        }
    }
    return;
}

void sub_55206(unknown uParam0)
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

