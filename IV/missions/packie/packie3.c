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
    l_U706 = 0;
    l_U726 = 0;
    l_U727 = 0.00000000;
    l_U743 = 1;
    l_U770 = 0;
    l_U771 = 0;
    l_U778 = 300;
    l_U779 = 200;
    l_U783 = -1;
    l_U796 = 1;
    l_U805 = {0.00000000, 4.70000000, 0.00000000};
    l_U808 = {0.00000000, 4.40000000, 0.00000000};
    l_U811 = {0.26000000, 0.00000000, 0.00000000};
    l_U814 = {0.26000000, 0.00000000, 0.00000000};
    l_U1521 = 0;
    l_U1523 = {-76.22000000, -513.31000000, 10.13000000};
    l_U1526 = {133.46000000, -298.86000000, 29.11000000};
    l_U1567 = {-38.23400000, -466.06900000, 16.15800000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_448();
        sub_2558();
    }
    else
    {
        sub_3599();
        l_U743 = 1;
    }
    while (l_U743)
    {
        switch (l_U740)
        {
            case 1:
            sub_7359();
            break;
            case 0:
            sub_24292();
            break;
            case 2:
            sub_32094();
            break;
            case 3:
            sub_36478();
            break;
            case 4:
            sub_40525();
            sub_47776();
            break;
            case 5:
            sub_48240();
            sub_47776();
            break;
            case 6:
            sub_48963();
            break;
            case 7:
            sub_62662();
            sub_47776();
            break;
            case 8:
            sub_69233();
            sub_47776();
            break;
            case 9:
            sub_70821();
            break;
            case 10:
            sub_75608();
            break;
            case 11:
            sub_77293();
            break;
            case 12:
            sub_82712();
            break;
            case 13:
            sub_86362();
            break;
            case 14:
            sub_87659();
            break;
            case 15:
            sub_90116();
            break;
            case 16:
            sub_93849();
            break;
            case 17:
            sub_95027();
            break;
        }
        if (l_U741)
        {
            sub_98312();
        }
        else if (l_U742)
        {
            sub_19004();
        }
        WAIT( 0 );
    }
    sub_2558();
    return;
}

void sub_448()
{
    sub_457();
    return;
}

void sub_457()
{
    int iVar2;

    iVar2 = 13;
    sub_471( iVar2 );
    sub_1647( iVar2 );
    return;
}

void sub_471(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_515();
        sub_676();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_784();
            sub_823();
        }
    }
    sub_899();
    sub_1000();
    uVar5 = sub_1113( uParam0 );
    sub_1554( uVar5, 0 );
    return;
}

void sub_515()
{
    sub_529( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_629();
    }
    return;
}

void sub_529(int iParam0)
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

void sub_629()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_676()
{
    sub_685();
    return;
}

void sub_685()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_784()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_823()
{
    sub_832();
    return;
}

void sub_832()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_899()
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

void sub_1000()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1022();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1022()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1113(unknown uParam0)
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
    sub_1512( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1512(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1554(int iParam0, boolean bParam1)
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

void sub_1647(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1656();
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
        sub_2431();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1656()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1694( 5, g_U569[I] )) == 1))
        {
            if ((sub_1694( 1, g_U569[I] )) != 0)
            {
                sub_1980( I );
            }
        }
    }
    if (NOT sub_2146())
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

int sub_1694(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1980(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2065( g_U569 - 1 );
    return;
}

void sub_2065(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2146()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1694( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2431()
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

void sub_2558()
{
    g_U10981[0]._fU144._fU32 = l_U770;
    g_U10981[8]._fU144._fU32 = l_U771;
    SWITCH_GARBAGE_TRUCKS( 1 );
    g_U9890 = 0;
    g_U64663 = l_U893;
    g_U9077 = 1;
    g_U9337 = 0;
    g_U2226 = 0;
    ALLOW_EMERGENCY_SERVICES( 1 );
    SWITCH_RANDOM_TRAINS( 1 );
    SET_FAKE_WANTED_LEVEL( 0 );
    g_U9942 = 1;
    sub_2687();
    sub_2767();
    sub_2847();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    if (NOT (IS_CHAR_DEAD( l_U628 )))
    {
        if ((GET_CHAR_DRAWABLE_VARIATION( l_U628, 8 )) == 1)
        {
            SET_CHAR_COMPONENT_VARIATION( l_U628, 3, 0, 0 );
            sub_2976( -1 );
        }
    }
    sub_3546();
    return;
}

void sub_2687()
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

void sub_2767()
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

void sub_2847()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        REMOVE_COVER_POINT( l_U546[I] );
    }
    return;
}

void sub_2976(int iParam0)
{
    int iVar3;
    int iVar4;

    if (iParam0 == 3)
    {
        sub_2976( -1 );
        sub_3001( -1 );
        if (((GET_CHAR_TEXTURE_VARIATION( sub_3123(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 8 )) != 1))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_3123(), 8, 1, 0 );
        }
    }
    else
    {
        sub_3292( iParam0, ref iVar3 );
        GET_CHAR_PROP_INDEX( sub_3123(), 0, ref iVar4 );
        if (((GET_CHAR_TEXTURE_VARIATION( sub_3123(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_3123(), 8, 0, 0 );
        }
        if (iVar4 != iVar3)
        {
            if (iVar3 < 0)
            {
                CLEAR_CHAR_PROP( sub_3123(), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( sub_3123(), 0, iVar3 );
            }
        }
    }
    return;
}

void sub_3001(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_3013( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_3123(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_3123(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_3123(), 1, iVar3 );
        }
    }
    return;
}

void sub_3013(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        default:
          case 3: (uParam1^) = 2147483647;
    }
    return;
}

void sub_3123()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3292(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        case 3:
        (uParam1^) = 99;
        break;
        default:
          case 4: (uParam1^) = 2147483647;
    }
    return;
}

void sub_3546()
{
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3599()
{
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "PACKIE3", 0 );
    LOAD_ADDITIONAL_TEXT( "PM3AUD", 6 );
    sub_3660( "PM3AUD" );
    l_U770 = g_U10981[0]._fU144._fU32;
    g_U10981[0]._fU144._fU32 = 1;
    l_U771 = g_U10981[8]._fU144._fU32;
    g_U10981[8]._fU144._fU32 = 1;
    l_U893 = g_U64663;
    SET_WANTED_MULTIPLIER( 0.20000000 );
    l_U628 = sub_3123();
    l_U629 = sub_3891();
    if (NOT (IS_CHAR_DEAD( l_U628 )))
    {
        GET_PLAYER_GROUP( l_U629, ref l_U627 );
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U1578 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U1577 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U1580 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U1579 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1581 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1582 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U1583 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U1582, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U1580, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U1581, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1581, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U1583, 1 );
    OPEN_SEQUENCE_TASK( ref l_U3072 );
    TASK_SEEK_COVER_FROM_PED( 0, l_U628, 6000 );
    TASK_COMBAT( 0, l_U628 );
    CLOSE_SEQUENCE_TASK( l_U3072 );
    l_U1585[27]._fU4 = {-39.81710000, -483.66500000, 14.70780000};
    l_U1585[27]._fU16 = 3.76980000;
    l_U1585[28]._fU4 = {-45.65100000, -483.88580000, 14.80000000};
    l_U1585[28]._fU16 = 3.76980000;
    l_U1585[29]._fU4 = {-52.03000000, -483.77780000, 14.80000000};
    l_U1585[29]._fU16 = 3.76980000;
    l_U1585[30]._fU4 = {-58.39530000, -483.38470000, 14.73000000};
    l_U1585[30]._fU16 = 3.76980000;
    l_U1585[32]._fU4 = {-40.24610000, -447.66690000, 14.73260000};
    l_U1585[32]._fU16 = 197.07470000;
    l_U1585[33]._fU4 = {-46.66800000, -447.81900000, 14.80000000};
    l_U1585[33]._fU16 = 189.87680000;
    l_U1585[34]._fU4 = {-52.67740000, -448.81500000, 14.79860000};
    l_U1585[34]._fU16 = 189.87680000;
    l_U1585[34]._fU24 = 1;
    l_U1585[35]._fU4 = {-58.15220000, -448.70110000, 14.63020000};
    l_U1585[35]._fU16 = 189.87680000;
    l_U1585[38]._fU4 = {169.67550000, -418.19780000, 14.76350000};
    l_U1585[38]._fU16 = 92.30970000;
    l_U1585[39]._fU4 = {169.24680000, -412.89800000, 14.72000000};
    l_U1585[39]._fU16 = 92.30970000;
    l_U1585[40]._fU4 = {168.48590000, -403.33070000, 14.72910000};
    l_U1585[40]._fU16 = 92.30970000;
    l_U1585[41]._fU4 = {168.18790000, -396.97340000, 14.72160000};
    l_U1585[41]._fU16 = 100.14960000;
    l_U1585[42]._fU4 = {53.95940000, 270.28710000, 14.77780000};
    l_U1585[42]._fU16 = 85.47340000;
    l_U1585[43]._fU4 = {53.59160000, 265.11240000, 14.79910000};
    l_U1585[43]._fU16 = 85.47340000;
    l_U1585[44]._fU4 = {53.30790000, 259.97450000, 14.78110000};
    l_U1585[44]._fU16 = 119.16810000;
    l_U1585[45]._fU4 = {53.20990000, 254.69190000, 14.75100000};
    l_U1585[45]._fU16 = 119.16810000;
    l_U1908[0]._fU4 = {53.18520000, -320.99040000, 14.09960000};
    l_U1908[0]._fU16 = 87.20690000;
    l_U1908[1]._fU4 = {58.47390000, -321.24910000, 14.13230000};
    l_U1908[1]._fU16 = 87.16060000;
    l_U1908[11]._fU4 = {60.27030000, -364.17670000, 14.06980000};
    l_U1908[11]._fU16 = 287.86370000;
    l_U1908[11]._fU104 = 1;
    l_U1908[11]._fU24 = 1;
    l_U1908[12]._fU4 = {53.55300000, -363.95130000, 14.07180000};
    l_U1908[12]._fU16 = 67.47440000;
    l_U1908[12]._fU104 = 2;
    l_U1908[12]._fU20 = 1;
    l_U1908[0]._fU4 = {-41.55340000, -460.75890000, 14.30220000};
    l_U1908[0]._fU16 = 330.55070000;
    l_U1908[1]._fU4 = {-42.56680000, -469.62760000, 14.35780000};
    l_U1908[1]._fU16 = 17.80150000;
    l_U1908[2]._fU4 = {-55.40620000, -424.74520000, 14.41450000};
    l_U1908[2]._fU16 = 260.78790000;
    l_U1908[2]._fU100 = 1;
    l_U1908[3]._fU4 = {-43.18520000, -426.72800000, 14.41340000};
    l_U1908[3]._fU16 = 260.79650000;
    l_U1908[3]._fU100 = 1;
    l_U1908[4]._fU4 = {-65.54820000, -491.42980000, 14.47850000};
    l_U1908[4]._fU16 = 210.82420000;
    l_U1908[4]._fU100 = 1;
    l_U1908[6]._fU4 = {-32.91570000, -568.53210000, 14.50680000};
    l_U1908[6]._fU16 = 180.85710000;
    l_U1908[7]._fU4 = {-61.74910000, -570.21530000, 14.49810000};
    l_U1908[7]._fU16 = 359.10700000;
    l_U1908[13]._fU4 = {14.61050000, -485.39260000, 14.35980000};
    l_U1908[13]._fU16 = 89.77320000;
    l_U1908[13]._fU20 = 1;
    l_U1908[15]._fU4 = {-54.10600000, -471.29430000, 14.74340000};
    l_U1908[15]._fU16 = 185.88000000;
    l_U1908[16]._fU4 = {-54.13470000, -456.83910000, 14.72790000};
    l_U1908[16]._fU16 = 158.71640000;
    l_U1908[17]._fU4 = {536.91880000, 785.33980000, 20.65920000};
    l_U1908[17]._fU16 = 267.84020000;
    l_U1908[18]._fU4 = {544.09750000, 784.64420000, 20.65950000};
    l_U1908[18]._fU16 = 262.63320000;
    l_U1908[19]._fU4 = {555.27840000, 783.24080000, 20.66090000};
    l_U1908[19]._fU16 = 262.72480000;
    l_U1908[20]._fU4 = {563.80070000, 781.88710000, 20.66160000};
    l_U1908[20]._fU16 = 259.02670000;
    l_U1908[21]._fU4 = {536.28610000, 928.82010000, 20.63190000};
    l_U1908[21]._fU16 = 336.37040000;
    l_U1908[22]._fU4 = {341.98400000, 1000.15600000, 26.64520000};
    l_U1908[22]._fU16 = 182.96960000;
    l_U1908[23]._fU4 = {341.83040000, 1007.05700000, 26.63770000};
    l_U1908[23]._fU16 = 178.55600000;
    l_U1908[24]._fU4 = {344.08260000, 1015.97200000, 26.67240000};
    l_U1908[24]._fU16 = 3.14540000;
    l_U1908[25]._fU4 = {343.58930000, 1023.17600000, 26.65710000};
    l_U1908[25]._fU16 = 345.56850000;
    l_U1908[26]._fU4 = {515.34540000, 268.85280000, 44.46630000};
    l_U1908[26]._fU16 = 172.81790000;
    l_U1908[27]._fU4 = {515.95040000, 274.98970000, 44.46090000};
    l_U1908[27]._fU16 = 180.66450000;
    l_U1908[28]._fU4 = {516.91110000, 247.17950000, 44.45110000};
    l_U1908[28]._fU16 = 0.41600000;
    l_U1908[29]._fU4 = {516.89910000, 252.86140000, 44.45060000};
    l_U1908[29]._fU16 = 0.28000000;
    l_U1908[30]._fU4 = {180.67900000, -419.27210000, 14.46550000};
    l_U1908[30]._fU16 = 0.25030000;
    l_U1908[31]._fU4 = {181.25000000, -413.11110000, 14.45080000};
    l_U1908[31]._fU16 = 196.70310000;
    l_U1908[32]._fU4 = {179.16110000, -402.60500000, 14.47760000};
    l_U1908[32]._fU16 = 6.38820000;
    l_U1908[33]._fU4 = {180.20130000, -396.59810000, 14.44610000};
    l_U1908[33]._fU16 = 343.60040000;
    l_U1908[33]._fU4 = {-43.46340000, -488.74920000, 14.69780000};
    l_U1908[33]._fU16 = 271.75370000;
    l_U1908[33]._fU96 = 1;
    l_U1908[34]._fU4 = {-53.37100000, -489.06550000, 14.71030000};
    l_U1908[34]._fU16 = 271.86110000;
    l_U1908[34]._fU96 = 1;
    l_U1908[35]._fU4 = {-53.09310000, -413.16690000, 14.72630000};
    l_U1908[35]._fU16 = 269.99920000;
    l_U1908[35]._fU96 = 1;
    l_U1908[39]._fU4 = {60.23810000, -334.90970000, 13.69770000};
    l_U1908[39]._fU16 = 250.37030000;
    l_U1908[39]._fU104 = 1;
    l_U1908[39]._fU24 = 1;
    l_U1908[40]._fU4 = {52.22790000, -331.81010000, 13.69370000};
    l_U1908[40]._fU16 = 47.55510000;
    l_U1908[40]._fU104 = 1;
    l_U1908[40]._fU24 = 1;
    l_U1908[41]._fU4 = {47.72810000, -407.77660000, 13.80530000};
    l_U1908[41]._fU16 = 24.93060000;
    l_U1908[41]._fU20 = 1;
    l_U1908[42]._fU4 = {-27.25860000, -407.35020000, 13.79820000};
    l_U1908[42]._fU16 = 186.65900000;
    l_U1908[42]._fU20 = 1;
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 11.68700000, -420.24700000, 13.70000000, 268.18000000, 0, 77.04000000, ref l_U781 );
    GET_AMMO_IN_CHAR_WEAPON( l_U628, 15, ref l_U924 );
    GET_AMMO_IN_CHAR_WEAPON( l_U628, 4, ref l_U925 );
    ADD_SCENARIO_BLOCKING_AREA( 32.12990000, -107.79620000, 4.77770000, 41.40880000, -88.80000000, 19.77750000 );
    SET_PED_NON_CREATION_AREA( 32.12990000, -107.79620000, 4.77770000, 41.40880000, -88.80000000, 19.77750000 );
    SWITCH_PED_PATHS_OFF( 32.12990000, -107.79620000, 4.77770000, 41.40880000, -88.80000000, 19.77750000 );
    ADD_SCENARIO_BLOCKING_AREA( -8.27010000, -90.88740000, -2.96760000, 38.95620000, -101.84570000, 2.25310000 );
    SET_PED_NON_CREATION_AREA( -8.27010000, -90.88740000, -2.96760000, 38.95620000, -101.84570000, 2.25310000 );
    SWITCH_PED_PATHS_OFF( -8.27010000, -90.88740000, -2.96760000, 38.95620000, -101.84570000, 2.25310000 );
    ADD_SCENARIO_BLOCKING_AREA( -30.56940000, -474.26740000, 14.40720000, 1.64000000, -455.90000000, 19.37000000 );
    SET_PED_NON_CREATION_AREA( -30.56940000, -474.26740000, 14.40720000, 1.64000000, -455.90000000, 19.37000000 );
    SET_PLAYER_CONTROL( l_U629, 1 );
    return;
}

void sub_3660(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3679();
    return;
}

void sub_3679()
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

void sub_3891()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_7359()
{
    if (l_U744[l_U740] == 0)
    {
        sub_7387();
        CLEAR_PRINTS();
        sub_7469( "PM3_GO1", "PM3AUD", ref l_U818, 8, 1 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            TASK_LOOK_AT_CHAR( l_U1530, l_U628, 5000, 0 );
        }
        SETTIMERA( 0 );
        sub_8453( 0 );
        l_U744[l_U740] = 1;
    }
    if ((l_U563[0] == 0) AND (NOT (sub_8970( l_U818 ))))
    {
        PRINT_NOW( "BJGTCAR", 7500, 1 );
        GET_GAME_TIMER( ref l_U776 );
        l_U563[0] = 1;
    }
    if (l_U563[0] == 1)
    {
        if (sub_9205())
        {
            if ((sub_9361( 1, 1 )) AND (l_U768 == 1))
            {
                PRINT_NOW( "BJGTCAR", 7500, 1 );
                sub_9677( 36, 0 );
                sub_9677( 35, 0 );
                l_U768 = 0;
            }
        }
        else if (l_U768 == 0)
        {
            PRINT_NOW( "BJSUIT", 7500, 1 );
            sub_9677( 36, 1 );
            sub_9677( 35, 1 );
            WAIT( 7500 );
            l_U768 = 1;
        }
    }
    if (l_U563[0] == 1)
    {
        sub_11620();
    }
    sub_12463( 1 );
    if (sub_9205())
    {
        if (IS_CHAR_IN_ANY_CAR( l_U628 ))
        {
            GET_CAR_CHAR_IS_USING( l_U628, ref l_U737 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U737, ref l_U736 );
            if (sub_23505( l_U628 ))
            {
                l_U736 = 0;
            }
        }
        else if (IS_CHAR_ON_FOOT( l_U628 ))
        {
            l_U736 = 0;
        }
        if (l_U736 <= 1)
        {
            CHANGE_BLIP_DISPLAY( l_U1571, 0 );
            if (l_U830 == 0)
            {
                PRINT_NOW( "BJGTCAR", 7500, 1 );
                l_U830 = 1;
            }
            l_U795 = 0;
            if ((IS_CHAR_SITTING_IN_ANY_CAR( l_U628 )) AND (((sub_12510( l_U628, l_U1531, 1 )) < 12.00000000) AND (TIMERA() > 15000)))
            {
                PRINTSTRING( "WRONG NUMBER OF DOORS!" );
                PRINTNL();
                if (NOT (IS_CHAR_INJURED( l_U1531 )))
                {
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U1531, l_U628 );
                }
                sub_7469( "PM3_WEECAR", "PM3AUD", ref l_U818, 8, 1 );
                while (sub_8970( l_U818 ))
                {
                    WAIT( 0 );
                }
                PRINT( "BJGTCAR", 7500, 1 );
                l_U795 = 0;
                SETTIMERA( 0 );
            }
        }
        else if ((l_U795 == 0) AND (((sub_12510( l_U628, l_U1530, 1 )) > 10.00000000) AND (NOT (sub_8970( l_U818 )))))
        {
            PRINT_NOW( "BJPIKUP", 7500, 1 );
            l_U795 = 1;
        }
        l_U830 = 0;
        CHANGE_BLIP_DISPLAY( l_U1571, 4 );
        if ((sub_12510( l_U628, l_U1530, 1 )) < 10.00000000)
        {
            CHANGE_BLIP_DISPLAY( l_U1571, 0 );
            l_U740++;
        }
        if (l_U804 == 0)
        {
            SET_ROUTE( l_U1571, 1 );
            l_U804 = 1;
        }
    }
    return;
}

void sub_7387()
{
    int I;

    for ( I = 0; I <= 31; I++ )
    {
        l_U563[I] = 0;
    }
    return;
}

void sub_7469(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7523( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7523(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7545( iParam1 )))
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
    sub_8237( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_7545(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7622( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_7622( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_7622( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_7622(unknown uParam0)
{
    return;
}

void sub_8237(int iParam0, int iParam1)
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

void sub_8453(boolean bParam0)
{
    GET_PLAYER_GROUP( l_U629, ref l_U627 );
    if (bParam0)
    {
        PRINTSTRING( "ADDING EVERYONE TO THE GROUP" );
        PRINTNL();
        if ((NOT (IS_GROUP_MEMBER( l_U1530, l_U627 ))) AND (NOT (IS_CHAR_DEAD( l_U1530 ))))
        {
            CLEAR_CHAR_TASKS( l_U1530 );
            SET_GROUP_MEMBER( l_U627, l_U1530 );
            CHANGE_BLIP_DISPLAY( l_U1571, 0 );
        }
        if ((NOT (IS_GROUP_MEMBER( l_U1531, l_U627 ))) AND (NOT (IS_CHAR_DEAD( l_U1531 ))))
        {
            CLEAR_CHAR_TASKS( l_U1531 );
            SET_GROUP_MEMBER( l_U627, l_U1531 );
            CHANGE_BLIP_DISPLAY( l_U1572, 0 );
        }
        if (DOES_CHAR_EXIST( l_U1532 ))
        {
            if ((NOT (IS_GROUP_MEMBER( l_U1532, l_U627 ))) AND (NOT (IS_CHAR_DEAD( l_U1532 ))))
            {
                CLEAR_CHAR_TASKS( l_U1532 );
                CHANGE_BLIP_DISPLAY( l_U1573, 0 );
                SET_GROUP_MEMBER( l_U627, l_U1532 );
            }
        }
    }
    else
    {
        PRINTSTRING( "REMOVING EVERYONE TO THE GROUP" );
        PRINTNL();
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U1530 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U1531 );
        }
        if (DOES_CHAR_EXIST( l_U1532 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1532 )))
            {
                REMOVE_CHAR_FROM_GROUP( l_U1532 );
            }
        }
    }
    return;
}

int sub_8970(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_7622( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7622( "\n speech is not playing" );
    }
    return 0;
}

int sub_9205()
{
    int iVar2;
    int iVar3;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 1 );
    if (NOT ((iVar2 == 12) || (iVar2 == 5)))
    {
        return 0;
    }
    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 2 );
    if (NOT (iVar3 == 2))
    {
        return 0;
    }
    if (NOT sub_9277())
    {
        return 0;
    }
    return 1;
}

int sub_9277()
{
    int iVar2;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 5 );
    if ((iVar2 == 5) || (iVar2 == 2))
    {
        return 1;
    }
    return 0;
}

int sub_9361(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3123() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3123(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3123() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3123(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3123()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3123() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3123() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3891() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3891() )))
    {
        return 0;
    }
    return 1;
}

void sub_9677(unknown uParam0, unknown uParam1)
{
    g_U10133._fU280[uParam0] = uParam1;
    sub_9701();
    return;
}

void sub_9701()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_9729( 13 );
        if ((g_U9932[g_U9999[I]._fU0]._fU0) AND (sub_9774( 13, iVar3 )))
        {
            sub_9875( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_10059( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_9729( 11 );
        if ((g_U9932[g_U10090[I]._fU0]._fU0) AND (sub_9774( 11, iVar3 )))
        {
            sub_9875( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_10059( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_10253( I );
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_9774( g_U10324[I]._fU12, iVar3 )))
        {
            sub_9875( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_10561( I );
        }
        else
        {
            sub_10059( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_10790();
    return;
}

int sub_9729(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_9774(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10133._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_9875(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        if ((iParam4 == 1) || ((iParam4 == 4) || ((iParam4 == 3) || (iParam4 == 2))))
        {
            ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        else
        {
            ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U4 );
        if (iParam4 == 3)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 3 );
        }
        if (iParam4 == 4)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 5 );
        }
    }
    return;
}

void sub_10059(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_10253(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_10295( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_9729( g_U10324[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10978)
    {
        uVar3 = g_U10324[uParam0]._fU12;
        if (g_U10133._fU0[uVar3])
        {
            if (g_U10324[uParam0]._fU24 == 1)
            {
                if (g_U9937 == g_U10324[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_10295(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_10561(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_10790()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_9729( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_10835( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_9729( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_10835( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_10253( I )))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_10253( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9937 == g_U10324[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_10835( g_U10324[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9943[I]._fU0)
        {
            if (g_U9937 == g_U9943[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_10835( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_3123() )))
        {
            GET_CHAR_COORDINATES( sub_3123(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_11326( uVar7, g_U9943[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_10835( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_10835(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

void sub_11326(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_11620()
{
    GET_GAME_TIMER( ref l_U775 );
    if ((NOT (sub_8970( l_U818 ))) AND ((l_U775 - l_U734) > 9000))
    {
        l_U733 = sub_11675( 0, 3 );
        switch (l_U733)
        {
            case 0:
            PLAY_SOUND_FROM_PED( -1, "PM3_PROPER_BANK_JOB_SNIFF", l_U1531 );
            break;
            case 1:
            PLAY_SOUND_FROM_PED( -1, "PM3_PROPER_BANK_JOB_SNIFF", l_U1530 );
            break;
            case 2:
            PLAY_SOUND_FROM_PED( -1, "PM3_PROPER_BANK_JOB_SNIFF", l_U1532 );
            break;
        }
        GET_GAME_TIMER( ref l_U734 );
    }
    if ((l_U775 - l_U776) > 6000)
    {
        l_U780 = sub_11675( 0, 3 );
        l_U732++;
        if ((NOT (IS_CHAR_DEAD( l_U1532 ))) AND ((NOT (IS_CHAR_DEAD( l_U1531 ))) AND (NOT (IS_CHAR_DEAD( l_U1530 )))))
        {
            switch (l_U780)
            {
                case 0:
                if (NOT (IS_CHAR_DEAD( l_U1531 )))
                {
                    TASK_LOOK_AT_CHAR( l_U1530, l_U1531, 10000, 0 );
                    TASK_LOOK_AT_CHAR( l_U1531, l_U628, 10000, 0 );
                    if (l_U732 > 3)
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U1531, l_U628 );
                        TASK_LOOK_AT_CHAR( l_U1532, l_U1531, 10000, 0 );
                        SAY_AMBIENT_SPEECH( l_U1531, "NEED_A_VEHICLE", 1, 1, 2 );
                    }
                }
                break;
                case 1:
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U1530, l_U628 );
                TASK_LOOK_AT_CHAR( l_U1530, l_U628, 10000, 0 );
                if (l_U732 < 2)
                {
                    SAY_AMBIENT_SPEECH( l_U1530, "NEED_A_VEHICLE", 1, 0, 0 );
                    TASK_LOOK_AT_CHAR( l_U1532, l_U1530, 10000, 0 );
                }
                else
                {
                    SAY_AMBIENT_SPEECH( l_U1530, "HURRY_UP", 1, 1, 2 );
                    TASK_LOOK_AT_CHAR( l_U1532, l_U628, 10000, 0 );
                }
                break;
                case 2:
                if (NOT (IS_CHAR_DEAD( l_U1532 )))
                {
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U1530, l_U628 );
                    TASK_LOOK_AT_CHAR( l_U1530, l_U628, 10000, 0 );
                    TASK_LOOK_AT_CHAR( l_U1532, l_U628, 10000, 0 );
                    SAY_AMBIENT_SPEECH( l_U1530, "NEED_A_VEHICLE", 1, 0, 0 );
                }
                break;
            }
        }
        GET_GAME_TIMER( ref l_U776 );
    }
    return;
}

void sub_11675(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_12463(int iParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    int iVar7;

    if (iParam0 == 0)
    {
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            if ((sub_12510( l_U628, l_U1530, 1 )) > 30.00000000)
            {
                if (NOT (IS_GROUP_MEMBER( l_U1530, l_U627 )))
                {
                    CHANGE_BLIP_DISPLAY( l_U1571, 4 );
                    bVar4 = true;
                }
            }
            else if ((sub_12510( l_U628, l_U1530, 1 )) < 12.00000000)
            {
                if (IS_GROUP_MEMBER( l_U1530, l_U627 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U1571, 0 );
                    bVar4 = false;
                }
                else
                {
                    SET_GROUP_MEMBER( l_U627, l_U1530 );
                }
                if (iParam0 == 0)
                {
                    ;
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            if ((sub_12510( l_U628, l_U1531, 1 )) > 30.00000000)
            {
                if (NOT (IS_GROUP_MEMBER( l_U1531, l_U627 )))
                {
                    CHANGE_BLIP_DISPLAY( l_U1572, 4 );
                    bVar5 = true;
                }
            }
            else if ((sub_12510( l_U628, l_U1531, 1 )) < 12.00000000)
            {
                if (IS_GROUP_MEMBER( l_U1531, l_U627 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U1572, 0 );
                    bVar5 = false;
                }
                else
                {
                    SET_GROUP_MEMBER( l_U627, l_U1531 );
                }
                if (iParam0 == 0)
                {
                    ;
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U1532 )))
        {
            if ((sub_12510( l_U628, l_U1532, 1 )) > 30.00000000)
            {
                if (NOT (IS_GROUP_MEMBER( l_U1532, l_U627 )))
                {
                    CHANGE_BLIP_DISPLAY( l_U1573, 4 );
                    bVar6 = true;
                }
            }
            else if ((sub_12510( l_U628, l_U1532, 1 )) < 12.00000000)
            {
                if (IS_GROUP_MEMBER( l_U1532, l_U627 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U1573, 0 );
                    bVar6 = false;
                }
                else
                {
                    SET_GROUP_MEMBER( l_U627, l_U1532 );
                }
                if (iParam0 == 0)
                {
                    ;
                }
            }
        }
        if ((l_U740 == 17) || (l_U740 < 3))
        {
            if ((bVar4) AND ((bVar6) AND (bVar5)))
            {
                if (l_U784 != l_U783)
                {
                    PRINT_NOW( "BJLEFT5", 7500, 1 );
                    l_U784 = l_U783;
                }
                l_U783 = 7;
            }
            else if (((bVar6) AND (bVar4)) || (((bVar5) AND (bVar4)) || ((bVar4) AND (bVar5))))
            {
                if ((bVar4) AND (bVar5))
                {
                    if (l_U783 != l_U784)
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        PRINT_NOW( "BJLEFT3", 7500, 1 );
                        l_U784 = l_U783;
                    }
                    l_U783 = 3;
                }
                if ((bVar5) AND (bVar4))
                {
                    if (l_U783 != l_U784)
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        PRINT_NOW( "BJLEFT3", 7500, 1 );
                        l_U784 = l_U783;
                    }
                    l_U783 = 4;
                }
                if ((bVar6) AND (bVar4))
                {
                    if (l_U783 != l_U784)
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        PRINT_NOW( "BJLEFT6", 7500, 1 );
                        l_U784 = l_U783;
                    }
                    l_U783 = 5;
                }
                if ((bVar6) AND (bVar5))
                {
                    if (l_U783 != l_U784)
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        PRINT_NOW( "BJLEFT7", 7500, 1 );
                        l_U784 = l_U783;
                    }
                    l_U783 = 6;
                }
            }
            else
            {
                iVar7 = 0;
                if (bVar6)
                {
                    iVar7 += 2;
                }
                if (bVar5)
                {
                    iVar7 += 3;
                }
                if (bVar4)
                {
                    iVar7 += 4;
                }
                if (l_U783 != l_U784)
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                    switch (iVar7)
                    {
                        case 2:
                        PRINT_NOW( "BJLEFT4", 7500, 1 );
                        break;
                        case 3:
                        PRINT_NOW( "BJLEFT2", 7500, 1 );
                        break;
                        case 4:
                        PRINT_NOW( "BJLEFT1", 7500, 1 );
                        break;
                        case 5:
                        PRINT_NOW( "BJLEFT7", 7500, 1 );
                        break;
                        case 6:
                        PRINT_NOW( "BJLEFT6", 7500, 1 );
                        break;
                        case 7:
                        PRINT_NOW( "BJLEFT3", 7500, 1 );
                        break;
                        case 9:
                        PRINT_NOW( "BJLEFT5", 7500, 1 );
                        break;
                    }
                    l_U784 = l_U783;
                }
                l_U783 = iVar7;
            }
        }
        if (DOES_CHAR_EXIST( l_U1532 ))
        {
            if ((IS_GROUP_MEMBER( l_U1531, l_U627 )) AND ((IS_GROUP_MEMBER( l_U1532, l_U627 )) AND ((IS_GROUP_MEMBER( l_U1530, l_U627 )) AND ((l_U728 == 0) AND ((sub_9205()) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U629, 0 ))))))))
            {
                if ((l_U774 == 0) AND ((sub_14015( l_U628, l_U1531 )) AND ((sub_14015( l_U628, l_U1532 )) AND (sub_14015( l_U628, l_U1530 )))))
                {
                    l_U783 = -1;
                    CHANGE_BLIP_DISPLAY( l_U1570, 4 );
                }
            }
            else
            {
                CHANGE_BLIP_DISPLAY( l_U1570, 0 );
            }
        }
        if ((IS_GROUP_MEMBER( l_U1531, l_U627 )) AND ((IS_GROUP_MEMBER( l_U1530, l_U627 )) AND (DOES_BLIP_EXIST( l_U1576 ))))
        {
            l_U783 = -1;
            CHANGE_BLIP_DISPLAY( l_U1576, 4 );
        }
        else
        {
            CHANGE_BLIP_DISPLAY( l_U1576, 0 );
        }
    }
    if (((IS_CHAR_INJURED( l_U1530 )) AND (IS_CHAR_IN_WATER( l_U1530 ))) || (IS_CHAR_INJURED( l_U1530 )))
    {
        sub_14368();
        sub_14472();
        sub_14605();
        PRINT_NOW( "BJDEADP", 7500, 1 );
        if (l_U740 == 4)
        {
            if (NOT (IS_CHAR_INJURED( l_U1531 )))
            {
                CLEAR_CHAR_TASKS( l_U1531 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U1531, l_U628 );
            }
        }
        WAIT( 7500 );
        if ((l_U740 <= 10) AND (l_U740 >= 4))
        {
            sub_14814();
        }
        if ((l_U740 <= 16) AND (l_U740 >= 11))
        {
            sub_16569();
        }
        if (l_U740 > 16)
        {
            sub_17792();
        }
        sub_18954( 13, l_U1530, 13 );
        sub_19004();
        sub_2558();
    }
    if (((IS_CHAR_INJURED( l_U1531 )) AND (IS_CHAR_IN_WATER( l_U1531 ))) || (IS_CHAR_INJURED( l_U1531 )))
    {
        sub_14368();
        sub_14472();
        sub_14605();
        sub_7469( "PM3_DKILL", "PM3AUD", ref l_U818, 8, 1 );
        while (sub_8970( l_U818 ))
        {
            WAIT( 0 );
        }
        PRINT_NOW( "BJDEADD", 7500, 1 );
        if (l_U740 == 4)
        {
            if (NOT (IS_CHAR_INJURED( l_U1530 )))
            {
                CLEAR_CHAR_TASKS( l_U1530 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U1530, l_U628 );
            }
        }
        WAIT( 7500 );
        sub_18954( 16, l_U1531, 13 );
        if ((l_U740 <= 10) AND (l_U740 >= 4))
        {
            sub_19980();
        }
        if ((l_U740 <= 16) AND (l_U740 >= 11))
        {
            sub_20913();
        }
        if (l_U740 > 16)
        {
            sub_22098();
        }
        sub_19004();
        sub_2558();
    }
    if (l_U740 < 3)
    {
        if (((IS_CHAR_INJURED( l_U1532 )) AND (IS_CHAR_IN_WATER( l_U1532 ))) || (IS_CHAR_INJURED( l_U1532 )))
        {
            sub_14368();
            sub_14472();
            PRINT_NOW( "BJDEADE", 7500, 1 );
            ADD_PED_TO_MISSION_DELETION_LIST( l_U1532, 0 );
            sub_19004();
            sub_2558();
        }
    }
    if (l_U740 == 17)
    {
        if (iVar3 == 1)
        {
            sub_14368();
            sub_14472();
            PRINT_NOW( "BJLEFT", 7500, 1 );
            sub_19004();
            sub_2558();
        }
    }
    return;
}

void sub_12510(unknown uParam0, unknown uParam1, int iParam2)
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

int sub_14015(unknown uParam0, unknown uParam1)
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

void sub_14368()
{
    if (DOES_BLIP_EXIST( l_U1571 ))
    {
        REMOVE_BLIP( l_U1571 );
    }
    if (DOES_BLIP_EXIST( l_U1572 ))
    {
        REMOVE_BLIP( l_U1572 );
    }
    if (DOES_BLIP_EXIST( l_U1573 ))
    {
        REMOVE_BLIP( l_U1573 );
    }
    return;
}

void sub_14472()
{
    if (DOES_BLIP_EXIST( l_U1574 ))
    {
        REMOVE_BLIP( l_U1574 );
    }
    if (DOES_BLIP_EXIST( l_U1575 ))
    {
        REMOVE_BLIP( l_U1575 );
    }
    if (DOES_BLIP_EXIST( l_U1576 ))
    {
        REMOVE_BLIP( l_U1576 );
    }
    if (DOES_BLIP_EXIST( l_U1571 ))
    {
        REMOVE_BLIP( l_U1522 );
    }
    return;
}

void sub_14605()
{
    if (l_U740 > 3)
    {
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            SET_CHAR_PROOFS( l_U1531, 1, 1, 1, 1, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            SET_CHAR_PROOFS( l_U1530, 1, 1, 1, 1, 1 );
        }
    }
    return;
}

void sub_14814()
{
    while (l_U833 == 0)
    {
        if (sub_14835())
        {
            SETTIMERA( 6001 );
            l_U836 = 1;
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            l_U835 = 3;
        }
        switch (l_U835)
        {
            case 0:
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            DELETE_CHAR( ref l_U1530 );
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U629, 4 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U629 );
            sub_15122( ref l_U818, 0 );
            sub_15246();
            sub_2976( -1 );
            SET_CHAR_COMPONENT_VARIATION( l_U628, 3, 0, 0 );
            LOAD_SCENE( 24.04910000, -367.56300000, 13.74040000 );
            CLEAR_AREA_OF_CHARS( 24.04910000, -367.56300000, 13.74040000, 20.00000000 );
            SET_CAM_POS( l_U626, 21.71938000, -367.52260000, 14.79730000 );
            SET_CAM_ROT( l_U626, 3.73840600, 0.00000000, -74.48193000 );
            SET_CAM_FOV( l_U626, 42.00000000 );
            SET_CHAR_COORDINATES( l_U628, 24.04910000, -367.56300000, 13.74040000 );
            SET_CHAR_HEADING( l_U628, 15.51810000 );
            if (NOT (IS_CHAR_DEAD( l_U1531 )))
            {
                SET_CHAR_COORDINATES( l_U1531, 23.40590000, -366.50200000, 13.73290000 );
                SET_CHAR_HEADING( l_U1531, 209.43000000 );
                TASK_LOOK_AT_CHAR( l_U1531, l_U628, 10000, 0 );
                TASK_LOOK_AT_CHAR( l_U628, l_U1531, 10000, 0 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1531 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
            sub_15712( l_U1531, l_U628 );
            sub_15712( l_U628, l_U1531 );
            sub_15887( ref l_U626, 1 );
            sub_15944( 1 );
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            l_U835 = 1;
            break;
            case 1:
            sub_16121( 1, l_U1531, "DERRICK_MCREARY", 0 );
            sub_7469( "DM2_DROPD", "DM2AUD", ref l_U818, 8, 1 );
            l_U835 = 2;
            break;
            case 2:
            if (NOT (sub_8970( l_U818 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U1531 )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1531, 37.61290000, -365.19290000, 14.74620000, 4, 10000, 0.50000000 );
                }
                SETTIMERA( 0 );
                l_U835 = 3;
            }
            break;
            case 3:
            if (TIMERA() > 3000)
            {
                sub_15887( ref l_U626, 0 );
                sub_15944( 0 );
                SET_CAM_BEHIND_PED( l_U628 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                DELETE_CHAR( ref l_U1530 );
                DELETE_CHAR( ref l_U1531 );
                l_U833 = 1;
                if (l_U836 == 1)
                {
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    DO_SCREEN_FADE_IN( 500 );
                }
            }
            break;
        }
        WAIT( 0 );
    }
    return;
}

int sub_14835()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_15122(int iParam0, unknown uParam1)
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

void sub_15246()
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

void sub_15712(unknown uParam0, unknown uParam1)
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

void sub_15887(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

void sub_15944(boolean bParam0)
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

void sub_16121(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_16205( "\n PED NUMBER ", uParam0 );
    sub_16245( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_16205(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16245(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16569()
{
    unknown uVar2;

    while (l_U833 == 0)
    {
        if ((IS_SCREEN_FADED_IN()) AND (sub_14835()))
        {
            SETTIMERA( 6001 );
            l_U836 = 1;
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            l_U835 = 3;
        }
        switch (l_U835)
        {
            case 0:
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U629, 4 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U629 );
            sub_15122( ref l_U818, 0 );
            sub_15246();
            sub_2976( -1 );
            SET_CHAR_COMPONENT_VARIATION( l_U628, 3, 0, 0 );
            LOAD_SCENE( 115.57230000, -288.48600000, -4.29640000 );
            CLEAR_AREA_OF_CHARS( 115.57230000, -288.48600000, -4.29640000, 20.00000000 );
            SET_CAM_POS( l_U621, 115.61690000, -290.24200000, -3.93091400 );
            SET_CAM_ROT( l_U621, 23.64916000, 0.00000000, 27.97753000 );
            SET_CAM_FOV( l_U621, 45.00000000 );
            UNPOINT_CAM( l_U626 );
            SET_CAM_POS( l_U623, 114.83490000, -290.23840000, -3.82716200 );
            SET_CAM_ROT( l_U623, 21.24274000, -0.00000000, -0.32657500 );
            SET_CAM_FOV( l_U623, 45.00000000 );
            SET_CHAR_COORDINATES( l_U628, 114.25950000, -288.92990000, -4.29640000 );
            SET_CHAR_HEADING( l_U628, 270.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U628, "subwayMloRoom01" );
            if (NOT (IS_CHAR_DEAD( l_U1531 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1531 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
                SET_CHAR_COORDINATES( l_U1531, 115.57230000, -288.48600000, -4.29640000 );
                SET_CHAR_HEADING( l_U1531, 117.97750000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1531, "subwayMloRoom01" );
                TASK_LOOK_AT_CHAR( l_U1531, l_U628, 10000, 0 );
                TASK_LOOK_AT_CHAR( l_U628, l_U1531, 10000, 0 );
                TASK_TOGGLE_DUCK( l_U628, 1 );
            }
            sub_15712( l_U1531, l_U628 );
            sub_15712( l_U628, l_U1531 );
            SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 12000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U624, 0, 0, 1, 1 );
            sub_15887( ref l_U624, 1 );
            sub_15944( 1 );
            WAIT( 0 );
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar2, "subwayMloRoom01" );
            WAIT( 500 );
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            l_U835 = 1;
            break;
            case 1:
            sub_16121( 1, l_U1531, "DERRICK_MCREARY", 0 );
            sub_7469( "DM2_DROPD", "DM2AUD", ref l_U818, 8, 1 );
            l_U835 = 2;
            break;
            case 2:
            if (NOT (sub_8970( l_U818 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U1531 )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1531, 108.99920000, -274.03670000, -3.29140000, 4, 10000, 0.50000000 );
                }
                SETTIMERA( 0 );
                l_U835 = 3;
            }
            break;
            case 3:
            if (TIMERA() > 3000)
            {
                SET_CAM_BEHIND_PED( l_U628 );
                SET_GAME_CAM_HEADING( 90.00000000 );
                DELETE_CHAR( ref l_U1530 );
                DELETE_CHAR( ref l_U1531 );
                l_U833 = 1;
                sub_15887( ref l_U626, 0 );
                sub_15944( 0 );
                if (l_U836 == 1)
                {
                    SET_GAME_CAM_HEADING( 90.00000000 );
                    DO_SCREEN_FADE_IN( 500 );
                }
            }
            break;
        }
        WAIT( 0 );
    }
    return;
}

void sub_17792()
{
    while (l_U833 == 0)
    {
        if (sub_14835())
        {
            SETTIMERA( 6001 );
            l_U836 = 1;
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            l_U835 = 4;
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U1531, 1 );
        }
        switch (l_U835)
        {
            case 0:
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U629, 4 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U629 );
            sub_15122( ref l_U818, 0 );
            sub_15246();
            sub_2976( -1 );
            SET_CHAR_COMPONENT_VARIATION( l_U628, 3, 0, 0 );
            REQUEST_MODEL( 525509695 );
            while (NOT (HAS_MODEL_LOADED( 525509695 )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1531 )))
            {
                if (IS_GROUP_MEMBER( l_U1531, l_U627 ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U1531 );
                }
            }
            LOAD_SCENE( 1401.70200000, 609.38370000, 32.04060000 );
            CLEAR_AREA_OF_CARS( 1401.70200000, 609.38370000, 32.04060000, 20.00000000 );
            SET_CAM_POS( l_U626, 1402.30100000, 607.60640000, 32.88298000 );
            SET_CAM_ROT( l_U626, -6.57331200, 0.00000000, 20.24576000 );
            SET_CAM_FOV( l_U626, 45.00000000 );
            CREATE_CAR( 525509695, 1401.70200000, 609.38370000, 32.04060000, ref l_U834, 1 );
            SET_CAR_HEADING( l_U834, 178.58500000 );
            SET_CAR_HEALTH( l_U834, 1500 );
            SET_CAR_PROOFS( l_U834, 1, 1, 1, 1, 1 );
            SET_CAR_ENGINE_ON( l_U834, 1, 1 );
            SET_CAR_ON_GROUND_PROPERLY( l_U834 );
            WARP_CHAR_INTO_CAR( l_U628, l_U834 );
            DELETE_CHAR( ref l_U1530 );
            if (NOT (IS_CHAR_DEAD( l_U1531 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1531, l_U834, 0 );
                CLEAR_ROOM_FOR_CHAR( l_U1531 );
            }
            sub_15887( ref l_U626, 1 );
            sub_15944( 1 );
            DO_SCREEN_FADE_IN( 500 );
            SETTIMERA( 0 );
            l_U835 = 1;
            break;
            case 1:
            sub_7469( "PM3_DROP2", "PM3AUD", ref l_U818, 8, 1 );
            l_U835 = 2;
            break;
            case 2:
            if (NOT (sub_8970( l_U818 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U1531 )))
                {
                    TASK_LEAVE_ANY_CAR( l_U1531 );
                }
                SETTIMERA( 0 );
                l_U835 = 3;
            }
            break;
            case 3:
            if (NOT (IS_CHAR_DEAD( l_U1531 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U1531 )))
                {
                    SET_CAM_POS( l_U626, 1402.56300000, 603.44100000, 31.58792000 );
                    SET_CAM_ROT( l_U626, 7.50612200, -0.00000000, 28.64242000 );
                    SET_CAM_FOV( l_U626, 45.00000000 );
                    if (NOT (IS_CHAR_DEAD( l_U1531 )))
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1531, 1391.32500000, 610.54100000, 34.32270000, 3, 10000, 0.50000000 );
                    }
                    SETTIMERA( 0 );
                    l_U835 = 4;
                }
            }
            break;
            case 4:
            if (TIMERA() > 3000)
            {
                sub_15887( ref l_U626, 0 );
                sub_15944( 0 );
                SET_CAM_BEHIND_PED( l_U628 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                DELETE_CHAR( ref l_U1530 );
                DELETE_CHAR( ref l_U1531 );
                l_U833 = 1;
                if (l_U836 == 1)
                {
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    DO_SCREEN_FADE_IN( 500 );
                }
            }
            break;
        }
        WAIT( 0 );
    }
    return;
}

void sub_18954(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_19004()
{
    int iVar2;
    int iVar3;

    if (NOT g_U813)
    {
        if (IS_PLAYER_PLAYING( sub_3891() ))
        {
            if ((GET_CHAR_TEXTURE_VARIATION( l_U628, 8 )) == 1)
            {
                TASK_PLAY_ANIM( l_U628, "remove_balaclave_b", "missbankjob", 8.00000000, 0, 0, 0, 0, -1 );
                SETTIMERB( 0 );
                while ((TIMERB() < 10000) AND ((sub_19166( l_U628, "missbankjob", "remove_balaclave_b" )) < 0.50000000))
                {
                    WAIT( 0 );
                }
                SET_CHAR_COMPONENT_VARIATION( l_U628, 8, 0, 0 );
            }
        }
    }
    if ((l_U740 > 3) AND (NOT g_U813))
    {
        if (NOT (IS_CHAR_DEAD( l_U628 )))
        {
            if (HAS_CHAR_GOT_WEAPON( l_U628, 15 ))
            {
                GET_AMMO_IN_CHAR_WEAPON( l_U628, 15, ref iVar2 );
                ADD_AMMO_TO_CHAR( l_U628, 15, (iVar2 * -1) + 1 );
                ADD_AMMO_TO_CHAR( l_U628, 15, l_U924 - 1 );
            }
            if (HAS_CHAR_GOT_WEAPON( l_U628, 4 ))
            {
                GET_AMMO_IN_CHAR_WEAPON( l_U628, 4, ref iVar3 );
                ADD_AMMO_TO_CHAR( l_U628, 4, iVar3 * -1 );
                ADD_AMMO_TO_CHAR( l_U628, 4, l_U925 );
            }
            if (l_U740 > 2)
            {
                SET_MAX_WANTED_LEVEL( 6 );
                ALTER_WANTED_LEVEL( l_U629, 5 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( l_U629 );
            }
        }
    }
    WAIT( 0 );
    SET_FAKE_WANTED_LEVEL( 0 );
    sub_15122( ref l_U818, 0 );
    SET_PLAYER_MOOD_PISSED_OFF( sub_3891(), 150 );
    SAY_AMBIENT_SPEECH( l_U628, "MISSION_FAIL_RAGE", 0, 0, 0 );
    sub_19607();
    sub_2558();
    return;
}

float sub_19166(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_19607()
{
    sub_19616();
    return;
}

void sub_19616()
{
    int iVar2;

    iVar2 = 13;
    sub_19630( iVar2 );
    sub_1647( iVar2 );
    return;
}

void sub_19630(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3891(), 150 );
    CLEAR_HELP();
    sub_471( uParam0 );
    return;
}

void sub_19980()
{
    while (l_U833 == 0)
    {
        if (sub_14835())
        {
            SETTIMERA( 6001 );
            l_U836 = 1;
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            l_U835 = 3;
        }
        switch (l_U835)
        {
            case 0:
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U629, 4 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U629 );
            sub_15122( ref l_U818, 0 );
            sub_15246();
            sub_2976( -1 );
            SET_CHAR_COMPONENT_VARIATION( l_U628, 3, 0, 0 );
            LOAD_SCENE( 24.04910000, -367.56300000, 13.74040000 );
            CLEAR_AREA_OF_CHARS( 24.04910000, -367.56300000, 13.74040000, 20.00000000 );
            SET_CAM_POS( l_U626, 21.71938000, -367.52260000, 14.79730000 );
            SET_CAM_ROT( l_U626, 3.73840600, 0.00000000, -74.48193000 );
            SET_CAM_FOV( l_U626, 42.00000000 );
            SET_CHAR_COORDINATES( l_U628, 24.04910000, -367.56300000, 13.74040000 );
            SET_CHAR_HEADING( l_U628, 15.51810000 );
            if (NOT (IS_CHAR_DEAD( l_U1530 )))
            {
                SET_CHAR_COORDINATES( l_U1530, 23.40590000, -366.50200000, 13.73290000 );
                SET_CHAR_HEADING( l_U1530, 209.43000000 );
                TASK_LOOK_AT_CHAR( l_U1530, l_U628, 10000, 0 );
                TASK_LOOK_AT_CHAR( l_U628, l_U1530, 10000, 0 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1530 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
            sub_15712( l_U1530, l_U628 );
            sub_15712( l_U628, l_U1530 );
            sub_15887( ref l_U626, 1 );
            sub_15944( 1 );
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            l_U835 = 1;
            break;
            case 1:
            sub_7469( "PM3_DROP2", "PM3AUD", ref l_U818, 8, 1 );
            l_U835 = 2;
            break;
            case 2:
            if (NOT (sub_8970( l_U818 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U1530 )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1530, 37.61290000, -365.19290000, 14.74620000, 4, 10000, 0.50000000 );
                }
                SETTIMERA( 0 );
                l_U835 = 3;
            }
            break;
            case 3:
            if (TIMERA() > 3000)
            {
                sub_15887( ref l_U626, 0 );
                sub_15944( 0 );
                SET_CAM_BEHIND_PED( l_U628 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                DELETE_CHAR( ref l_U1530 );
                DELETE_CHAR( ref l_U1531 );
                l_U833 = 1;
                if (l_U836 == 1)
                {
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    DO_SCREEN_FADE_IN( 500 );
                }
            }
            break;
        }
        WAIT( 0 );
    }
    return;
}

void sub_20913()
{
    unknown uVar2;

    while (l_U833 == 0)
    {
        if (sub_14835())
        {
            SETTIMERA( 6001 );
            l_U836 = 1;
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            l_U835 = 3;
        }
        switch (l_U835)
        {
            case 0:
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U629, 4 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U629 );
            sub_15122( ref l_U818, 0 );
            sub_15246();
            sub_2976( -1 );
            SET_CHAR_COMPONENT_VARIATION( l_U628, 3, 0, 0 );
            LOAD_SCENE( 115.57230000, -288.48600000, -4.29640000 );
            CLEAR_AREA_OF_CHARS( 115.57230000, -288.48600000, -4.29640000, 20.00000000 );
            SET_CAM_POS( l_U621, 115.61690000, -290.24200000, -3.93091400 );
            SET_CAM_ROT( l_U621, 23.64916000, 0.00000000, 27.97753000 );
            SET_CAM_FOV( l_U621, 45.00000000 );
            UNPOINT_CAM( l_U626 );
            SET_CAM_POS( l_U623, 114.83490000, -290.23840000, -3.82716200 );
            SET_CAM_ROT( l_U623, 21.24274000, -0.00000000, -0.32657500 );
            SET_CAM_FOV( l_U623, 45.00000000 );
            SET_CHAR_COORDINATES( l_U628, 114.25950000, -288.92990000, -4.29640000 );
            SET_CHAR_HEADING( l_U628, 270.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U628, "subwayMloRoom01" );
            if (NOT (IS_CHAR_DEAD( l_U1530 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1530 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
                SET_CHAR_COORDINATES( l_U1530, 115.57230000, -288.48600000, -4.29640000 );
                SET_CHAR_HEADING( l_U1530, 117.97750000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1530, "subwayMloRoom01" );
                TASK_LOOK_AT_CHAR( l_U1530, l_U628, 10000, 0 );
                TASK_LOOK_AT_CHAR( l_U628, l_U1530, 10000, 0 );
                TASK_TOGGLE_DUCK( l_U628, 1 );
            }
            sub_15712( l_U1530, l_U628 );
            sub_15712( l_U628, l_U1530 );
            SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 12000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U624, 0, 0, 1, 1 );
            sub_15887( ref l_U624, 1 );
            sub_15944( 1 );
            WAIT( 0 );
            GET_GAME_VIEWPORT_ID( ref uVar2 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar2, "subwayMloRoom01" );
            WAIT( 500 );
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            l_U835 = 1;
            break;
            case 1:
            sub_7469( "PM3_DROP2", "PM3AUD", ref l_U818, 8, 1 );
            l_U835 = 2;
            break;
            case 2:
            if (NOT (sub_8970( l_U818 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U1530 )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1530, 108.99920000, -274.03670000, -3.29140000, 4, 10000, 0.50000000 );
                }
                SETTIMERA( 0 );
                l_U835 = 3;
            }
            break;
            case 3:
            if (TIMERA() > 3000)
            {
                SET_CAM_BEHIND_PED( l_U628 );
                SET_GAME_CAM_HEADING( 90.00000000 );
                DELETE_CHAR( ref l_U1530 );
                DELETE_CHAR( ref l_U1531 );
                l_U833 = 1;
                sub_15887( ref l_U626, 0 );
                sub_15944( 0 );
                if (l_U836 == 1)
                {
                    SET_GAME_CAM_HEADING( 90.00000000 );
                    DO_SCREEN_FADE_IN( 500 );
                }
            }
            break;
        }
        WAIT( 0 );
    }
    return;
}

void sub_22098()
{
    while (l_U833 == 0)
    {
        if (sub_14835())
        {
            SETTIMERA( 6001 );
            l_U836 = 1;
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            l_U835 = 4;
        }
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U1530, 1 );
        }
        switch (l_U835)
        {
            case 0:
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U629, 4 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U629 );
            sub_15122( ref l_U818, 0 );
            sub_15246();
            sub_2976( -1 );
            SET_CHAR_COMPONENT_VARIATION( l_U628, 3, 0, 0 );
            REQUEST_MODEL( 525509695 );
            while (NOT (HAS_MODEL_LOADED( 525509695 )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1530 )))
            {
                if (IS_GROUP_MEMBER( l_U1530, l_U627 ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U1530 );
                }
            }
            LOAD_SCENE( 1401.70200000, 609.38370000, 32.04060000 );
            CLEAR_AREA_OF_CARS( 1401.70200000, 609.38370000, 32.04060000, 20.00000000 );
            SET_CAM_POS( l_U626, 1402.30100000, 607.60640000, 32.88298000 );
            SET_CAM_ROT( l_U626, -6.57331200, 0.00000000, 20.24576000 );
            SET_CAM_FOV( l_U626, 45.00000000 );
            CREATE_CAR( 525509695, 1401.70200000, 609.38370000, 32.04060000, ref l_U834, 1 );
            SET_CAR_HEADING( l_U834, 178.58500000 );
            SET_CAR_HEALTH( l_U834, 1500 );
            SET_CAR_PROOFS( l_U834, 1, 1, 1, 1, 1 );
            SET_CAR_ENGINE_ON( l_U834, 1, 1 );
            SET_CAR_ON_GROUND_PROPERLY( l_U834 );
            WARP_CHAR_INTO_CAR( l_U628, l_U834 );
            DELETE_CHAR( ref l_U1531 );
            if (NOT (IS_CHAR_DEAD( l_U1530 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1530, l_U834, 0 );
                CLEAR_ROOM_FOR_CHAR( l_U1530 );
            }
            sub_15887( ref l_U626, 1 );
            sub_15944( 1 );
            DO_SCREEN_FADE_IN( 500 );
            SETTIMERA( 0 );
            l_U835 = 1;
            break;
            case 1:
            sub_7469( "PM3_DROP2", "PM3AUD", ref l_U818, 8, 1 );
            l_U835 = 2;
            break;
            case 2:
            if (NOT (sub_8970( l_U818 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U1530 )))
                {
                    TASK_LEAVE_ANY_CAR( l_U1530 );
                }
                SETTIMERA( 0 );
                l_U835 = 3;
            }
            break;
            case 3:
            if (NOT (IS_CHAR_DEAD( l_U1530 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U1530 )))
                {
                    SET_CAM_POS( l_U626, 1402.56300000, 603.44100000, 31.58792000 );
                    SET_CAM_ROT( l_U626, 7.50612200, -0.00000000, 28.64242000 );
                    SET_CAM_FOV( l_U626, 45.00000000 );
                    if (NOT (IS_CHAR_DEAD( l_U1530 )))
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1530, 1391.32500000, 610.54100000, 34.32270000, 3, 10000, 0.50000000 );
                    }
                    SETTIMERA( 0 );
                    l_U835 = 4;
                }
            }
            break;
            case 4:
            if (TIMERA() > 3000)
            {
                sub_15887( ref l_U626, 0 );
                sub_15944( 0 );
                SET_CAM_BEHIND_PED( l_U628 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                DELETE_CHAR( ref l_U1530 );
                DELETE_CHAR( ref l_U1531 );
                l_U833 = 1;
                if (l_U836 == 1)
                {
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    DO_SCREEN_FADE_IN( 500 );
                }
            }
            break;
        }
        WAIT( 0 );
    }
    return;
}

int sub_23505(int iParam0)
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
                if (sub_23569( uVar3 ))
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

int sub_23569(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_24292()
{
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U787 );
    if (DOES_VEHICLE_EXIST( l_U787 ))
    {
        if (NOT (IS_CAR_DEAD( l_U787 )))
        {
            SET_CAR_AS_MISSION_CAR( l_U787 );
        }
    }
    SET_CHAR_COORDINATES( l_U628, 1398.69800000, 620.61730000, 32.69080000 );
    if (g_U9893._fU24)
    {
        sub_24398();
        FORCE_WEATHER_NOW( 1 );
        ENABLE_SCENE_STREAMING( 0 );
        START_CUTSCENE_NOW( "PM_3" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "PM_3" );
        ENABLE_SCENE_STREAMING( 1 );
    }
    else
    {
        sub_27297();
    }
    if (DOES_VEHICLE_EXIST( l_U787 ))
    {
        if ((sub_27700( l_U628, l_U787 )) < 15.00000000)
        {
            PRINTSTRING( "Players last car exists and is close enough" );
            PRINTNL();
        }
        else
        {
            PRINTSTRING( "Players last car was too far away" );
            PRINTNL();
        }
    }
    else
    {
        PRINTSTRING( "Players last car didn't exist" );
        PRINTNL();
    }
    CLEAR_AREA( 1401.95300000, 619.24000000, 33.26750000, 15.00000000, 1 );
    SET_CHAR_COORDINATES( l_U628, 1398.01000000, 620.66000000, 32.73000000 );
    SET_CHAR_HEADING( l_U628, 273.38240000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    sub_16121( 0, l_U628, "NIKO", 0 );
    SET_RELATIONSHIP( 5, 0, 24 );
    SET_RELATIONSHIP( 5, 0, 3 );
    PROCESS_MISSION_DELETION_LIST();
    sub_28113();
    if ((NOT (IS_CHAR_DEAD( l_U1530 ))) || ((NOT (IS_CHAR_DEAD( l_U1531 ))) || (NOT (IS_CHAR_DEAD( l_U1532 )))))
    {
        SET_CURRENT_CHAR_WEAPON( l_U628, 0, 1 );
        TASK_SWAP_WEAPON( l_U1532, 0 );
        TASK_SWAP_WEAPON( l_U1531, 0 );
        TASK_SWAP_WEAPON( l_U1530, 0 );
        sub_15712( l_U1532, l_U628 );
        sub_15712( l_U1531, l_U628 );
        sub_15712( l_U1530, l_U628 );
        BLOCK_CHAR_AMBIENT_ANIMS( l_U1531, 1 );
        BLOCK_CHAR_AMBIENT_ANIMS( l_U1530, 1 );
        BLOCK_CHAR_AMBIENT_ANIMS( l_U1532, 1 );
        sub_16121( 3, l_U1532, "MICHAEL", 0 );
    }
    REQUEST_ANIMS( "missbankjob" );
    while (NOT (HAVE_ANIMS_LOADED( "missbankjob" )))
    {
        WAIT( 0 );
    }
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\PM3_PROPER_BANK_JOB" )))
    {
        WAIT( 0 );
    }
    LOAD_SCENE( 1398.01000000, 620.66000000, 32.73000000 );
    DO_SCREEN_FADE_IN( 500 );
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    CLEAR_PRINTS();
    l_U740++;
    return;
}

void sub_24398()
{
    if (IS_PLAYER_PLAYING( sub_3891() ))
    {
        sub_24430( ref g_U8371._fU0 );
        sub_25560( ref g_U8371._fU4 );
        sub_26287( ref g_U8371._fU8 );
        sub_26888( ref g_U8371._fU12 );
        sub_27061( ref g_U8371._fU16 );
        g_U8371._fU20 = -1;
        g_U8371._fU24 = -1;
    }
    return;
}

void sub_24430(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_3123(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_24500( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 45;
    }
    return;
}

void sub_24500(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 15:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 16:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 17:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 4:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 5:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 6:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 7:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 8:
        (uParam1^) = 3;
        (uParam2^) = 2;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 20:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 28:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 29:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 30:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 41:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 42:
        (uParam1^) = 8;
        (uParam2^) = 0;
        break;
        case 21:
        (uParam1^) = 9;
        (uParam2^) = 0;
        break;
        case 22:
        (uParam1^) = 9;
        (uParam2^) = 1;
        break;
        case 23:
        (uParam1^) = 9;
        (uParam2^) = 2;
        break;
        case 9:
        (uParam1^) = 10;
        (uParam2^) = 0;
        break;
        case 10:
        (uParam1^) = 10;
        (uParam2^) = 1;
        break;
        case 11:
        (uParam1^) = 10;
        (uParam2^) = 2;
        break;
        case 31:
        (uParam1^) = 11;
        (uParam2^) = 0;
        break;
        case 32:
        (uParam1^) = 11;
        (uParam2^) = 1;
        break;
        case 33:
        (uParam1^) = 11;
        (uParam2^) = 2;
        break;
        case 34:
        (uParam1^) = 12;
        (uParam2^) = 0;
        break;
        case 35:
        (uParam1^) = 12;
        (uParam2^) = 1;
        break;
        case 36:
        (uParam1^) = 12;
        (uParam2^) = 2;
        break;
        case 37:
        (uParam1^) = 12;
        (uParam2^) = 3;
        break;
        case 38:
        (uParam1^) = 13;
        (uParam2^) = 0;
        break;
        case 39:
        (uParam1^) = 13;
        (uParam2^) = 1;
        break;
        case 40:
        (uParam1^) = 13;
        (uParam2^) = 2;
        break;
        case 12:
        (uParam1^) = 14;
        (uParam2^) = 0;
        break;
        case 13:
        (uParam1^) = 14;
        (uParam2^) = 1;
        break;
        case 14:
        (uParam1^) = 14;
        (uParam2^) = 2;
        break;
        case 24:
        (uParam1^) = 15;
        (uParam2^) = 0;
        break;
        case 25:
        (uParam1^) = 15;
        (uParam2^) = 1;
        break;
        case 26:
        (uParam1^) = 15;
        (uParam2^) = 2;
        break;
        case 27:
        (uParam1^) = 15;
        (uParam2^) = 3;
        break;
        case 43:
        (uParam1^) = 16;
        (uParam2^) = 0;
        break;
        case 44:
        (uParam1^) = 16;
        (uParam2^) = 1;
        break;
        default:
          case 45:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_25560(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_3123(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_25628( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 26;
    }
    return;
}

void sub_25628(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 0;
        (uParam2^) = 3;
        break;
        case 4:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 20:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 21:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 22:
        (uParam1^) = 2;
        (uParam2^) = 3;
        break;
        case 23:
        (uParam1^) = 2;
        (uParam2^) = 4;
        break;
        case 24:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 15:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 16:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 17:
        (uParam1^) = 4;
        (uParam2^) = 3;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 4;
        break;
        case 8:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 9:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 11:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 12:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 13:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 5:
        (uParam1^) = 7;
        (uParam2^) = 0;
        break;
        case 6:
        (uParam1^) = 7;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 7;
        (uParam2^) = 2;
        break;
        case 25:
        (uParam1^) = 7;
        (uParam2^) = 3;
        break;
        default:
          case 26:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_26287(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_3123(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_26355( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 20;
    }
    return;
}

void sub_26355(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 8:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 9:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 13:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 15:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 2:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 3:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 11:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 12:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 16:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 17:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 18:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 4:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 5:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 6:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 19:
        (uParam1^) = 1;
        (uParam2^) = 3;
        break;
        default:
          case 20:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_26888(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( sub_3123(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_3292( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( sub_3123(), 8 );
        if ((iVar8 == 0) AND (iVar7 == 1))
        {
            (uParam0^) = 3;
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 4;
    }
    return;
}

void sub_27061(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_3123(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_3013( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 3;
    }
    return;
}

void sub_27297()
{
    if (IS_PLAYER_PLAYING( sub_3891() ))
    {
        sub_27330( g_U8371._fU0 );
        sub_27426( g_U8371._fU4 );
        sub_27522( g_U8371._fU8 );
        sub_2976( g_U8371._fU12 );
        sub_3001( g_U8371._fU16 );
        SET_CHAR_COMPONENT_VARIATION( sub_3123(), 4, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( sub_3123(), 3, 0, 0 );
    }
    return;
}

void sub_27330(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_24500( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_3123(), 1 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3123(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_27426(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_25628( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_3123(), 2 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3123(), 2, iVar3, iVar4 );
    }
    return;
}

void sub_27522(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_26355( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_3123(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_3123(), 5 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_3123(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_27700(unknown uParam0, unknown uParam1)
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

void sub_28113()
{
    while (NOT (sub_28147( 13, ref l_U1530, 1399.70000000, 622.34000000, 32.97000000, 280.23030000 )))
    {
        WAIT( 0 );
    }
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1530, 1 );
    GIVE_WEAPON_TO_CHAR( l_U1530, 14, 30000, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U1530, 0 );
    SET_CHAR_RELATIONSHIP( l_U1530, 5, 24 );
    SET_CHAR_RELATIONSHIP( l_U1530, 5, 3 );
    if (DOES_BLIP_EXIST( l_U1571 ))
    {
        REMOVE_BLIP( l_U1571 );
    }
    ADD_BLIP_FOR_CHAR( l_U1530, ref l_U1571 );
    SET_BLIP_AS_FRIENDLY( l_U1571, 1 );
    CHANGE_BLIP_DISPLAY( l_U1571, 0 );
    SET_CHAR_DECISION_MAKER( l_U1530, l_U1578 );
    SET_COMBAT_DECISION_MAKER( l_U1530, l_U1581 );
    SET_CHAR_HEALTH( l_U1530, 375 );
    sub_16121( 1, l_U1530, "PACKIE_MCREARY", 0 );
    SET_CHAR_SHOOT_RATE( l_U1530, 85 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U1581, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U1530, 1, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1530, 2, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1530, 5, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1530, 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1530, 3, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1530, 8, 0, 0 );
    SET_CHAR_NAME_DEBUG( l_U1530, "Packie" );
    SET_PED_DIES_WHEN_INJURED( l_U1530, 1 );
    while (NOT (sub_28147( 16, ref l_U1531, 1398.69200000, 622.77070000, 32.94950000, 277.51720000 )))
    {
        WAIT( 0 );
    }
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1531, 1 );
    GIVE_WEAPON_TO_CHAR( l_U1531, 14, 30000, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U1531, 0 );
    SET_CHAR_RELATIONSHIP( l_U1531, 5, 24 );
    SET_CHAR_RELATIONSHIP( l_U1531, 5, 3 );
    if (DOES_BLIP_EXIST( l_U1572 ))
    {
        REMOVE_BLIP( l_U1572 );
    }
    ADD_BLIP_FOR_CHAR( l_U1531, ref l_U1572 );
    SET_BLIP_AS_FRIENDLY( l_U1572, 1 );
    CHANGE_BLIP_DISPLAY( l_U1572, 0 );
    SET_CHAR_DECISION_MAKER( l_U1531, l_U1578 );
    SET_COMBAT_DECISION_MAKER( l_U1531, l_U1581 );
    SET_CHAR_HEALTH( l_U1531, 375 );
    SET_CHAR_SHOOT_RATE( l_U1531, 85 );
    sub_16121( 2, l_U1531, "DERRICK_MCREARY", 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1531, 1, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1531, 2, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1531, 5, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1531, 3, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1531, 8, 0, 0 );
    SET_CHAR_NAME_DEBUG( l_U1531, "Derrick" );
    SET_PED_DIES_WHEN_INJURED( l_U1531, 1 );
    REQUEST_MODEL( 735211577 );
    while (NOT (HAS_MODEL_LOADED( 735211577 )))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 26, 735211577, 1399.08900000, 618.29990000, 32.48200000, ref l_U1532, 1 );
    SET_CHAR_HEADING( l_U1532, 253.14060000 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1532, 1 );
    GIVE_WEAPON_TO_CHAR( l_U1532, 14, 30000, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U1532, 0 );
    SET_CHAR_NEVER_TARGETTED( l_U1532, 1 );
    if (DOES_BLIP_EXIST( l_U1573 ))
    {
        REMOVE_BLIP( l_U1573 );
    }
    ADD_BLIP_FOR_CHAR( l_U1532, ref l_U1573 );
    SET_BLIP_AS_FRIENDLY( l_U1573, 1 );
    CHANGE_BLIP_DISPLAY( l_U1573, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1532, 1, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1532, 2, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1532, 5, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1532, 3, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U1532, 8, 0, 0 );
    SET_PED_DIES_WHEN_INJURED( l_U1532, 1 );
    return;
}

int sub_28147(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (sub_28158( uParam0 ))
    {
        sub_28878( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
        return 1;
    }
    sub_30534( uParam0 );
    return 0;
}

void sub_28158(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_28169( uParam0 ) );
}

int sub_28169(unknown uParam0)
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
    sub_1512( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_28878(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_28169( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_28928( uParam0, (uParam1^) );
    return;
}

void sub_28928(unknown uParam0, unknown uParam1)
{
    sub_28940( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_28940(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_29034( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_29578( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_29034(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_29578(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_29034( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_29034( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_29034( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_29034( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_29034( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_29034( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_29034( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_29034( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_29034( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_29034( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_29034( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_29034( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_29034( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_30534(unknown uParam0)
{
    REQUEST_MODEL( sub_28169( uParam0 ) );
    return;
}

void sub_32094()
{
    if (l_U744[l_U740] == 0)
    {
        g_U2226 = 1;
        SET_ROUTE( l_U1571, 0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U787 );
        MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
        sub_7387();
        sub_32174( l_U1567, ref l_U1570 );
        SET_ROUTE( l_U1570, 1 );
        sub_8453( 1 );
        CLEAR_PRINTS();
        sub_7469( "PM3_GO2", "PM3AUD", ref l_U818, 8, 1 );
        WAIT( 2500 );
        SETTIMERA( 0 );
        l_U774 = 1;
        l_U744[l_U740] = 1;
    }
    if (((NOT (sub_8970( l_U818 ))) AND (IS_CHAR_IN_ANY_CAR( l_U628 ))) || (IS_CHAR_GETTING_IN_TO_A_CAR( l_U628 )))
    {
        GET_CAR_CHAR_IS_USING( l_U628, ref l_U737 );
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U737, ref l_U736 );
        if (l_U736 <= 1)
        {
            if (l_U774 == 0)
            {
                sub_8453( 0 );
                CHANGE_BLIP_DISPLAY( l_U1570, 0 );
                PRINT_NOW( "BJGTCAR", 7500, 1 );
                l_U774 = 1;
            }
        }
        else
        {
            PRINTSTRING( "packiePed:" );
            sub_32491( sub_14015( l_U628, l_U1530 ) );
            PRINTNL();
            PRINTSTRING( "michaelPed:" );
            sub_32491( sub_14015( l_U628, l_U1532 ) );
            PRINTNL();
            PRINTSTRING( "derrickPed:" );
            sub_32491( sub_14015( l_U628, l_U1531 ) );
            PRINTNL();
            if ((NOT (IS_CHAR_DEAD( l_U1532 ))) AND ((NOT (IS_CHAR_DEAD( l_U1532 ))) AND (NOT (IS_CHAR_DEAD( l_U1530 )))))
            {
                if ((l_U774 == 1) AND ((IS_CHAR_IN_ANY_CAR( l_U1531 )) AND ((IS_CHAR_IN_ANY_CAR( l_U1532 )) AND (IS_CHAR_IN_ANY_CAR( l_U1530 )))))
                {
                    CHANGE_BLIP_DISPLAY( l_U1570, 4 );
                    PRINT_NOW( "BJGT_01", 3000, 1 );
                    WAIT( 7500 );
                    SETTIMERA( 0 );
                    l_U774 = 0;
                    l_U563[3] = 1;
                }
            }
        }
    }
    if (l_U736 > 1)
    {
        sub_12463( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U840 )))
    {
        if ((NOT (IS_CHAR_IN_CAR( l_U628, l_U840 ))) AND ((l_U563[1] == 0) AND (IS_CHAR_IN_ANY_CAR( l_U628 ))))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U840 );
            l_U563[1] = 1;
        }
    }
    GET_CAR_CHAR_IS_USING( l_U628, ref l_U737 );
    if (DOES_VEHICLE_EXIST( l_U737 ))
    {
        if (NOT (IS_CAR_DEAD( l_U737 )))
        {
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U737, ref l_U736 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U1530 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( l_U1530, 1 );
    }
    if (NOT (IS_CHAR_DEAD( l_U1531 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( l_U1531, 1 );
    }
    if (NOT (IS_CHAR_DEAD( l_U1532 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( l_U1532, 1 );
    }
    if (sub_9205())
    {
        if (l_U768 == 1)
        {
            if ((l_U774 == 0) AND ((sub_14015( l_U628, l_U1531 )) AND ((sub_14015( l_U628, l_U1532 )) AND ((sub_14015( l_U628, l_U1530 )) AND (l_U728 == 0)))))
            {
                CHANGE_BLIP_DISPLAY( l_U1570, 4 );
            }
            sub_9677( 36, 0 );
            sub_9677( 35, 0 );
            l_U768 = 0;
        }
    }
    else if (l_U768 == 0)
    {
        sub_33243( ref l_U818 );
        CHANGE_BLIP_DISPLAY( l_U1570, 0 );
        PRINT_NOW( "BJSUIT", 7500, 1 );
        WAIT( 7500 );
        sub_9677( 36, 1 );
        sub_9677( 35, 1 );
        l_U768 = 1;
    }
    if ((l_U738 == 1) || (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        PRINTSTRING( "no message being displayed or banter already triggered\n" );
        if ((IS_CHAR_SITTING_IN_ANY_CAR( l_U628 )) AND (sub_33827( 1 )))
        {
            PRINTSTRING( "Everyone i n car\n" );
            if ((NOT (sub_8970( l_U818 ))) AND ((l_U563[3] == 1) AND (l_U563[2] == 0)))
            {
                PRINTSTRING( "Should have started speech" );
                PRINTNL();
                switch (g_U64965)
                {
                    case 0:
                    sub_7469( "PM3_BANT1", "PM3AUD", ref l_U818, 8, 1 );
                    g_U64965++;
                    break;
                    case 1:
                    sub_7469( "PM3_BANT2", "PM3AUD", ref l_U818, 8, 1 );
                    g_U64965++;
                    break;
                    case 2:
                    SAY_AMBIENT_SPEECH( l_U1530, "Listen_to_radio", 0, 0, 0 );
                    break;
                }
                l_U738 = 1;
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 0 );
                l_U563[2] = 1;
            }
            else if ((sub_9205()) AND ((NOT sub_34350()) AND (IS_CHAR_IN_ANY_CAR( l_U628 ))))
            {
                switch (g_U64965)
                {
                    case 1:
                    sub_34665( "PM3_BANT1", "PM3AUD", ref l_U818, 8, 1 );
                    break;
                    case 2:
                    sub_34665( "PM3_BANT2", "PM3AUD", ref l_U818, 8, 1 );
                    break;
                }
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 0 );
            }
            else
            {
                sub_33243( ref l_U818 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 1 );
            }
        }
        else if (l_U563[2] == 1)
        {
            sub_33243( ref l_U818 );
        }
    }
    if ((l_U563[0] == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( l_U628, l_U1567._fU0, l_U1567._fU4, 150.00000000, 150.00000000, 0 )))
    {
        sub_35053( 1778551148 );
        sub_35053( 772345340 );
        sub_35129( "missbankjob" );
        while ((NOT sub_35321()) || (NOT sub_35219()))
        {
            WAIT( 0 );
        }
        OPEN_SEQUENCE_TASK( ref l_U3074 );
        TASK_TURN_CHAR_TO_FACE_COORD( 0, -28.91745000, -466.30820000, 16.21759000 );
        TASK_PLAY_ANIM( 0, "idle", "missbankjob", 8.00000000, 0, 0, 0, 1, -1 );
        CLOSE_SEQUENCE_TASK( l_U3074 );
        CLEAR_AREA_OF_COPS( l_U1567._fU0, l_U1567._fU4, l_U1567._fU8, 100.00000000 );
        SET_CREATE_RANDOM_COPS( 0 );
        l_U563[0] = 1;
    }
    if ((NOT (IS_CHAR_DEAD( l_U1532 ))) AND ((NOT (IS_CHAR_DEAD( l_U1531 ))) AND (NOT (IS_CHAR_DEAD( l_U1530 )))))
    {
        if ((IS_GROUP_MEMBER( l_U1532, l_U627 )) AND ((IS_GROUP_MEMBER( l_U1531, l_U627 )) AND (IS_GROUP_MEMBER( l_U1530, l_U627 ))))
        {
            if ((sub_9361( 1, 1 )) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U1532, l_U1567._fU0, l_U1567._fU4, l_U1567._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U1531, l_U1567._fU0, l_U1567._fU4, l_U1567._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U1530, l_U1567._fU0, l_U1567._fU4, l_U1567._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, l_U1567._fU0, l_U1567._fU4, l_U1567._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))))))
            {
                if (IS_WANTED_LEVEL_GREATER( l_U629, 0 ))
                {
                    PRINT_NOW( "BJHEAT", 7500, 1 );
                }
                else if (sub_9205())
                {
                    if (NOT (IS_CHAR_DEAD( l_U628 )))
                    {
                        if ((sub_35956( l_U628, 15 )) < 600)
                        {
                            GIVE_WEAPON_TO_CHAR( l_U628, 15, 600, 0 );
                        }
                        TASK_SWAP_WEAPON( l_U628, 0 );
                        if ((sub_35956( l_U628, 4 )) < 5)
                        {
                            GIVE_WEAPON_TO_CHAR( l_U628, 4, 5, 0 );
                        }
                    }
                    GET_CAR_CHAR_IS_USING( l_U628, ref l_U840 );
                    REMOVE_BLIP( l_U1570 );
                    SET_PLAYER_CONTROL( l_U629, 0 );
                    CLEAR_PRINTS();
                    l_U740++;
                }
                else
                {
                    PRINT_NOW( "BJSUIT", 7500, 1 );
                }
            }
            else
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, -27.90000000, -462.90000000, 15.60000000, 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -27.57000000, -465.90000000, 16.27000000, 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, -27.57000000, -466.55000000, 16.27000000, 1, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -27.57000000, -469.55000000, 16.27000000, 1, 0.00000000 );
            }
        }
        else
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, -27.90000000, -462.90000000, 15.60000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -27.57000000, -465.90000000, 16.27000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, -27.57000000, -466.55000000, 16.27000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -27.57000000, -469.55000000, 16.27000000, 1, 0.00000000 );
        }
    }
    return;
}

void sub_32174(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
    return;
}

void sub_32491(int iParam0)
{
    if (iParam0 == 1)
    {
        PRINTSTRING( "TRUE" );
        PRINTNL();
    }
    else
    {
        PRINTSTRING( "FALSE" );
        PRINTNL();
    }
    return;
}

int sub_33243(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_7622( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_7622( "\n CONVERSATION PAUSED AT LINE " );
            sub_33399( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_7622( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_7622( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_7622( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_33399(unknown uParam0)
{
    return;
}

int sub_33827(boolean bParam0)
{
    if ((NOT (IS_CHAR_DEAD( l_U1531 ))) AND (NOT (IS_CHAR_DEAD( l_U1530 ))))
    {
        if ((IS_CHAR_IN_ANY_CAR( l_U1531 )) AND (IS_CHAR_IN_ANY_CAR( l_U1530 )))
        {
            if (bParam0)
            {
                if (NOT (IS_CHAR_DEAD( l_U1532 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U1532 ))
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
            }
            else
            {
                return 1;
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

int sub_34350()
{
    if (IS_WANTED_LEVEL_GREATER( l_U629, 0 ))
    {
        if (l_U791 == 0)
        {
            CHANGE_BLIP_DISPLAY( l_U1570, 0 );
            sub_33243( ref l_U818 );
            sub_7469( "PM3_PCOPS", "PM3BAUD", ref l_U824, 8, 1 );
            while (sub_8970( l_U818 ))
            {
                WAIT( 0 );
            }
            PRINT_NOW( "BJHEAT", 7500, 1 );
            l_U791 = 1;
        }
        return 1;
        break;
    }
    if ((l_U774 == 0) AND ((sub_9205()) AND ((l_U791 == 1) AND (sub_34516( l_U818 )))))
    {
        CHANGE_BLIP_DISPLAY( l_U1570, 4 );
        PRINT_NOW( "BJGT_01", 7500, 1 );
        WAIT( 3000 );
        switch (g_U64965)
        {
            case 1:
            sub_34665( "PM3_BANT1", "PM3AUD", ref l_U818, 8, 1 );
            break;
            case 2:
            sub_34665( "PM3_BANT2", "PM3AUD", ref l_U818, 8, 1 );
            break;
        }
    }
    l_U791 = 0;
    return 0;
}

void sub_34516(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

int sub_34665(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_7523( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_35053(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U484[l_U517] = uParam0;
    l_U517++;
    return;
}

void sub_35129(unknown uParam0)
{
    PRINTSTRING( "Requesting :" );
    PRINTSTRING( uParam0 );
    PRINTNL();
    REQUEST_ANIMS( uParam0 );
    l_U518[l_U527] = uParam0;
    l_U527++;
    return;
}

int sub_35219()
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

int sub_35321()
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

void sub_35956(unknown uParam0, unknown uParam1)
{
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (HAS_CHAR_GOT_WEAPON( uParam0, uParam1 ))
        {
            GET_AMMO_IN_CHAR_WEAPON( uParam0, uParam1, ref Result );
        }
    }
    return Result;
}

void sub_36478()
{
    if (l_U744[l_U740] == 0)
    {
        SET_CURRENT_CHAR_WEAPON( l_U628, 0, 0 );
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1531, 0, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1530, 0, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1532 )))
        {
            SET_CURRENT_CHAR_WEAPON( l_U1532, 0, 0 );
        }
        REMOVE_BLIP( l_U1570 );
        SET_MAX_WANTED_LEVEL( 0 );
        g_U9942 = 0;
        if (NOT (DOES_CAM_EXIST( l_U621 )))
        {
            CREATE_CAM( 14, ref l_U621 );
        }
        SET_CAM_POS( l_U621, -34.84842000, -458.22420000, 29.63497000 );
        SET_CAM_ROT( l_U621, -50.53892000, 0.00000000, -157.59940000 );
        if (NOT (DOES_CAM_EXIST( l_U623 )))
        {
            CREATE_CAM( 14, ref l_U623 );
        }
        SET_CAM_POS( l_U623, -34.84842000, -458.22420000, 29.63497000 );
        SET_CAM_ROT( l_U623, -60.96675000, 0.00000000, -157.59940000 );
        SET_CAM_FOV( l_U623, 51.00000000 );
        if (NOT (DOES_CAM_EXIST( l_U624 )))
        {
            CREATE_CAM( 3, ref l_U624 );
        }
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 10500, 0 );
        sub_15887( ref l_U624, 1 );
        sub_15944( 1 );
        sub_36907();
        sub_7469( "PM3_ARRIVE", "PM3AUD", ref l_U818, 8, 1 );
        SETTIMERA( 0 );
        l_U744[l_U740] = 1;
    }
    if ((l_U744[l_U740] == 1) AND (NOT (sub_8970( l_U818 ))))
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        sub_15887( ref l_U624, 0 );
        sub_15944( 0 );
        DELETE_CHAR( ref l_U1532 );
        DELETE_CHAR( ref l_U1530 );
        DELETE_CHAR( ref l_U1531 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 735211577 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1169442297 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1690783035 );
        sub_2976( 3 );
        START_CUTSCENE_NOW( "imbhst" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "imbhst" );
        while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\PM3_PROPER_BANK_JOB" )))
        {
            WAIT( 0 );
        }
        l_U3076 = START_PTFX( "smoke_vault_lingers", -0.11850000, -474.08380000, 8.20720000, 0.00000000, 0.00000000, 0.00000000, 1.00000000 );
        l_U3077 = START_PTFX( "smoke_vault_lingers", -5.16510000, -474.01500000, 8.10720000, 0.00000000, 0.00000000, 0.00000000, 1.00000000 );
        l_U3078 = START_PTFX( "smoke_vault_lingers", -8.44480000, -473.88760000, 8.20720000, 0.00000000, 0.00000000, 0.00000000, 1.00000000 );
        l_U3079 = START_PTFX( "smoke_vault_lingers", -14.04100000, -473.99450000, 8.15075900, 0.00000000, 0.00000000, 0.00000000, 1.00000000 );
        sub_28113();
        sub_37774();
        sub_38425();
        l_U837 = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( l_U837, "PM3_PROPER_BANK_JOB_ALARM", -8.94000000, -467.30000000, 19.75000000 );
        if ((NOT (IS_CHAR_DEAD( l_U1532 ))) AND ((NOT (IS_CHAR_DEAD( l_U1531 ))) AND (NOT (IS_CHAR_DEAD( l_U1530 )))))
        {
            sub_8453( 0 );
            REMOVE_CHAR_FROM_GROUP( l_U1531 );
            REMOVE_CHAR_FROM_GROUP( l_U1530 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1531, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1530, 1 );
            SET_CHAR_COORDINATES_NO_OFFSET( l_U1530, -13.82000000, -470.73000000, 14.41000000 );
            SET_CHAR_HEADING( l_U1530, 77.01320000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1530, "bank3_hall" );
            SET_CURRENT_CHAR_WEAPON( l_U1530, 14, 1 );
            TASK_AIM_GUN_AT_COORD( l_U1530, -16.28250000, -466.59810000, 14.40720000, 600000 );
            SET_CHAR_COORDINATES_NO_OFFSET( l_U1531, -12.28000000, -472.00000000, 14.41000000 );
            SET_CHAR_HEADING( l_U1531, 48.77410000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1531, "bank3_hall" );
            SET_CURRENT_CHAR_WEAPON( l_U1531, 14, 1 );
            TASK_AIM_GUN_AT_COORD( l_U1531, -5.36550000, -462.93180000, 14.40720000, 600000 );
            SET_CHAR_COORDINATES_NO_OFFSET( l_U628, -3.08410000, -470.65600000, 15.40720000 );
            SET_CHAR_HEADING( l_U628, 334.86200000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U628, "bank3_hall" );
            SET_CURRENT_CHAR_WEAPON( l_U628, 15, 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CHAR_COORDINATES( l_U1532, -18.48000000, -468.02000000, 14.41000000 );
            SET_CHAR_HEADING( l_U1532, 77.07660000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1532, "bank3_hall" );
            SET_CHAR_COMPONENT_VARIATION( l_U1532, 3, 1, 0 );
            SET_CHAR_HEALTH( l_U1532, 5 );
            if (NOT (IS_CHAR_DEAD( l_U856[2] )))
            {
                DAMAGE_CHAR( l_U856[2], 200, 1 );
            }
            CREATE_OBJECT_NO_OFFSET( 1778551148, -18.90560000, -475.58400000, 7.90720000, ref l_U841, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U841, "Bank3_Vault" );
            FREEZE_OBJECT_POSITION( l_U841, 1 );
            CREATE_OBJECT( 772345340, -20.99000000, -475.72000000, 7.91000000, ref l_U842, 1 );
            CREATE_OBJECT( 772345340, -19.36000000, -477.25000000, 7.91000000, ref l_U843, 1 );
            FREEZE_OBJECT_POSITION( l_U842, 1 );
            FREEZE_OBJECT_POSITION( l_U843, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U842, "Bank3_Vault" );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U843, "Bank3_Vault" );
            if (HAS_CHAR_GOT_WEAPON( l_U628, 15 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U628, 15, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1531 )))
            {
                SET_CURRENT_CHAR_WEAPON( l_U1531, 14, 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1530 )))
            {
                SET_CURRENT_CHAR_WEAPON( l_U1530, 14, 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1532 )))
            {
                SET_CURRENT_CHAR_WEAPON( l_U1532, 14, 0 );
            }
        }
        SET_FAKE_WANTED_LEVEL( 5 );
        SET_POLICE_RADAR_BLIPS( 0 );
        SET_MAX_WANTED_LEVEL( 0 );
        SET_CAM_FOV( l_U623, 55.00000000 );
        CLEAR_AREA( l_U1567._fU0, l_U1567._fU4, l_U1567._fU8, 30.00000000, 1 );
        l_U894[0] = START_SCRIPT_FIRE( -12.28650000, -472.85720000, 7.90720000, 1, 1 );
        l_U894[1] = START_SCRIPT_FIRE( -13.09690000, -475.93660000, 7.90740000, 3, 2 );
        l_U894[2] = START_SCRIPT_FIRE( -9.41520100, -476.24000000, 7.90740000, 1, 1 );
        l_U831 = GET_INT_STAT( 257 );
        SET_CHAR_COMPONENT_VARIATION( l_U1530, 3, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1531, 3, 1, 0 );
        SET_PLAYER_CONTROL( l_U629, 0 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        WAIT( 500 );
        SET_PLAYER_CONTROL( l_U629, 1 );
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        g_U2226 = 1;
        l_U740++;
    }
    return;
}

void sub_36907()
{
    unknown uVar2;

    OPEN_SEQUENCE_TASK( ref uVar2 );
    TASK_LEAVE_ANY_CAR( 0 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -28.51860000, -465.23400000, 15.40710000, 2, 45000, 0.50000000 );
    CLOSE_SEQUENCE_TASK( uVar2 );
    if (NOT (IS_CHAR_DEAD( l_U1530 )))
    {
        TASK_PERFORM_SEQUENCE( l_U1530, uVar2 );
    }
    WAIT( 200 );
    if (NOT (IS_CHAR_DEAD( l_U1531 )))
    {
        TASK_PERFORM_SEQUENCE( l_U1531, uVar2 );
    }
    WAIT( 300 );
    if (NOT (IS_CHAR_DEAD( l_U1532 )))
    {
        TASK_PERFORM_SEQUENCE( l_U1532, uVar2 );
    }
    WAIT( 400 );
    TASK_PERFORM_SEQUENCE( l_U628, uVar2 );
    return;
}

void sub_37774()
{
    int I;

    REQUEST_MODEL( 1530937394 );
    REQUEST_MODEL( 453889158 );
    while ((NOT (HAS_MODEL_LOADED( 453889158 ))) || (NOT (HAS_MODEL_LOADED( 1530937394 ))))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "missbankjob" );
    while (NOT (HAVE_ANIMS_LOADED( "missbankjob" )))
    {
        WAIT( 0 );
    }
    if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
    {
        CREATE_CHAR( 26, 1530937394, -3.08760000, -463.41860000, 14.40720000, ref l_U865[0], 1 );
        SET_CHAR_HEADING( l_U856[0], 181.37890000 );
        CREATE_CHAR( 26, 1530937394, -4.45710000, -463.42510000, 14.40720000, ref l_U865[1], 1 );
        SET_CHAR_HEADING( l_U856[0], 183.37890000 );
        CREATE_CHAR( 26, 1530937394, -5.61980000, -463.42890000, 14.40720000, ref l_U865[2], 1 );
        SET_CHAR_HEADING( l_U856[0], 182.37890000 );
        CREATE_CHAR( 26, 1530937394, -4.55530000, -461.22830000, 14.40720000, ref l_U865[3], 1 );
        SET_CHAR_HEADING( l_U856[0], 178.37890000 );
        for ( I = 0; I <= 3; I++ )
        {
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U865[I] );
            TASK_PLAY_ANIM( l_U865[I], "fem_downloop", "missbankjob", 8.00000000, 1, 0, 0, 0, -1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U865[I], "bank3_hall" );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U865[I], 1 );
            SET_CHAR_NAME_DEBUG( l_U865[I], "Staff" );
            SET_CHAR_HEALTH( l_U865[I], 100 );
            SET_PED_DIES_WHEN_INJURED( l_U865[I], 1 );
            SET_PED_DONT_DO_EVASIVE_DIVES( l_U865[I], 1 );
            SET_CHAR_NEVER_TARGETTED( l_U865[I], 1 );
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 453889158 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1402442039 );
    return;
}

void sub_38425()
{
    int I;

    if (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))
    {
        REQUEST_MODEL( -1402442039 );
        while (NOT (HAS_MODEL_LOADED( -1402442039 )))
        {
            WAIT( 0 );
        }
    }
    REQUEST_MODEL( -492470690 );
    REQUEST_MODEL( 690281432 );
    while ((NOT (HAS_MODEL_LOADED( 690281432 ))) || (NOT (HAS_MODEL_LOADED( -492470690 ))))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "missbankjob" );
    while (NOT (HAVE_ANIMS_LOADED( "missbankjob" )))
    {
        WAIT( 0 );
    }
    if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
    {
        CREATE_RANDOM_CHAR( -17.13800000, -462.47300000, 15.40720000, ref l_U856[0] );
        SET_CHAR_HEADING( l_U856[0], 308.22260000 );
        CREATE_RANDOM_CHAR( -19.29770000, -465.18410000, 14.40720000, ref l_U856[1] );
        SET_CHAR_HEADING( l_U856[1], 138.30940000 );
        CREATE_RANDOM_CHAR( -15.28330000, -464.11460000, 14.40720000, ref l_U856[2] );
        SET_CHAR_HEADING( l_U856[2], 215.57640000 );
        CREATE_CHAR( 26, 690281432, -15.28330000, -464.11460000, 14.40720000, ref l_U856[3], 1 );
        SET_CHAR_HEADING( l_U856[3], 215.04550000 );
        CREATE_CHAR( 26, -492470690, -13.47000000, -465.68000000, 14.41000000, ref l_U856[4], 1 );
        SET_CHAR_HEADING( l_U856[4], 180.04550000 );
        for ( I = 0; I <= 4; I++ )
        {
            if (DOES_CHAR_EXIST( l_U856[I] ))
            {
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U856[I] );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U856[I], "bank3_hall" );
                TASK_PLAY_ANIM( l_U856[I], "fem_downloop", "missbankjob", 8.00000000, 1, 0, 0, 0, -1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U856[I], 1 );
                SET_PED_DIES_WHEN_INJURED( l_U856[I], 1 );
                SET_CHAR_HEALTH( l_U856[I], 100 );
                SET_CHAR_NAME_DEBUG( l_U856[I], "Customer" );
                SET_CHAR_NEVER_TARGETTED( l_U856[I], 1 );
                SET_PED_DONT_DO_EVASIVE_DIVES( l_U856[I], 1 );
            }
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1402442039 );
    return;
}

void sub_40525()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U744[l_U740] == 0)
    {
        SET_PLAYER_CONTROL( l_U629, 1 );
        PRINT_NOW( "BJGT_03", 7500, 1 );
        ADD_BLIP_FOR_OBJECT( l_U841, ref l_U1574 );
        SETTIMERA( 0 );
        sub_7387();
        l_U744[l_U740] = 1;
    }
    GENERATE_RANDOM_INT_IN_RANGE( 1, 4, ref uVar2 );
    switch (uVar2)
    {
        case 1:
        if (SECUROM_SPOT_CHECK1() == 1)
        {
            sub_40694();
        }
        break;
        case 2:
        if (SECUROM_SPOT_CHECK2() == 1)
        {
            sub_40694();
        }
        break;
        case 3:
        if (SECUROM_SPOT_CHECK3() == 1)
        {
            sub_40694();
        }
        break;
        case 4:
        if (SECUROM_SPOT_CHECK4() == 1)
        {
            sub_40694();
        }
        break;
    }
    if ((l_U563[0] == 0) AND ((TIMERA() > 4000) AND (NOT IS_MESSAGE_BEING_DISPLAYED())))
    {
        sub_7469( "PM3_CROWD", "PM3AUD", ref l_U818, 8, 1 );
        l_U563[0] = 1;
    }
    sub_41164();
    sub_12463( 1 );
    sub_42079();
    if ((IS_EXPLOSION_IN_AREA( -1, -21.74370000, -477.80290000, 5.90740000, -16.66000000, -470.40000000, 11.10720000 )) || ((sub_42642( l_U841 )) < 1000))
    {
        DELETE_OBJECT( ref l_U841 );
        TRIGGER_PTFX( "break_banknotes", -18.90560000, -475.58400000, 7.90720000, 0.00000000, 0.00000000, 0.10000000, 1.00000000 );
        TRIGGER_PTFX( "player_wasted_cash", -18.90560000, -475.58400000, 7.90720000, 0.00000000, 0.20000000, 0.20000000, 1.00000000 );
        sub_14368();
        sub_14472();
        PRINT_NOW( "BJMONEY", 7500, 1 );
        WAIT( 7500 );
        sub_42905();
        sub_19004();
    }
    if ((l_U563[0] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -18.90560000, -475.58400000, 8.90720000, 2.50000000, 2.50000000, 2.50000000, 0 )))
    {
        REMOVE_SCRIPT_FIRE( l_U894[0] );
        REMOVE_SCRIPT_FIRE( l_U894[1] );
        REMOVE_SCRIPT_FIRE( l_U894[2] );
        l_U563[0] = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -29.56960000, -466.35330000, 15.19370000, 1.00000000, 4.00000000, 3.00000000, 0 ))
    {
        PRINT_NOW( "BJLEFT", 7500, 1 );
        sub_19004();
    }
    l_U832 = GET_INT_STAT( 257 );
    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U856[3], l_U628, 0 )) || ((l_U832 - l_U831) > (3 + l_U785)))
    {
        WAIT( 0 );
        while (sub_8970( l_U818 ))
        {
            WAIT( 0 );
        }
        PRINT_NOW( "BJMURD", 7500, 1 );
        sub_14605();
        WAIT( 7500 );
        sub_43693();
        sub_19004();
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -19.10560000, -475.58400000, 8.90720000, 1.00000000, 1.00000000, 1.50000000, 0 ))
    {
        SET_PLAYER_CONTROL( l_U629, 0 );
        CLEAR_PRINTS();
        OPEN_SEQUENCE_TASK( ref uVar3 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "searchped_intro", "missbankjob", 8.00000000, 0, 0, 0, 1, -1 );
        TASK_PLAY_ANIM( 0, "searchped_loop", "missbankjob", 8.00000000, 1, 0, 0, 0, 3000 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        if (NOT (DOES_CAM_EXIST( l_U626 )))
        {
            CREATE_CAM( 14, ref l_U626 );
        }
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U628, 1 );
        SET_TIMECYCLE_MODIFIER( "death" );
        SET_CAM_POS( l_U621, -21.16502000, -477.33600000, 11.57664000 );
        SET_CAM_ROT( l_U621, -40.99617000, 0.00000000, -74.62619000 );
        SET_CAM_FOV( l_U621, 45.00000000 );
        SET_CAM_POS( l_U623, -21.16502000, -477.33600000, 11.57664000 );
        SET_CAM_ROT( l_U623, -40.99617000, -0.00000000, -57.48832000 );
        SET_CAM_FOV( l_U623, 45.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 2500, 0 );
        sub_15887( ref l_U624, 1 );
        sub_15887( ref l_U626, 0 );
        sub_15944( 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
        SET_CHAR_COORDINATES_DONT_WARP_GANG( l_U628, -17.96870000, -475.57420000, 7.90740000 );
        SET_CHAR_HEADING( l_U628, 90.68240000 );
        TASK_PERFORM_SEQUENCE( l_U628, uVar3 );
        WAIT( 2500 );
        DO_SCREEN_FADE_OUT( 1000 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_TIMECYCLE_MODIFIER();
        FREEZE_OBJECT_POSITION( l_U842, 0 );
        FREEZE_OBJECT_POSITION( l_U843, 0 );
        ATTACH_OBJECT_TO_PED( l_U842, l_U628, 1219, l_U811, l_U805, 0 );
        ATTACH_OBJECT_TO_PED( l_U843, l_U628, 1232, l_U814, l_U808, 0 );
        SET_CAM_POS( l_U621, -17.58806000, -474.02310000, 8.12444100 );
        SET_CAM_ROT( l_U621, 1.98398400, 0.00000000, -89.31668000 );
        SET_CAM_FOV( l_U621, 34.20003000 );
        SET_CAM_POS( l_U623, -17.58806000, -474.02310000, 9.72444000 );
        SET_CAM_ROT( l_U623, 1.98398400, 0.00000000, -89.31668000 );
        SET_CAM_FOV( l_U623, 34.20003000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 7000, 0 );
        sub_15887( ref l_U626, 0 );
        sub_15887( ref l_U624, 1 );
        SET_CHAR_COORDINATES( l_U628, -16.43740000, -473.95040000, 7.90740000 );
        SET_CHAR_HEADING( l_U628, 270.00000000 );
        SET_CHAR_COMPONENT_VARIATION( l_U628, 3, 1, 0 );
        TASK_PLAY_ANIM( l_U628, "dufflebag_walk", "missbankjob", 8.00000000, 1, 1, 1, 0, 5500 );
        DO_SCREEN_FADE_IN( 1000 );
        WAIT( 4000 );
        DO_SCREEN_FADE_OUT( 1000 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        sub_46032();
        SET_CAM_POS( l_U626, -3.10993600, -462.26360000, 14.98571000 );
        SET_CAM_ROT( l_U626, 9.43241700, 0.00000000, -128.27790000 );
        SET_CAM_FOV( l_U626, 48.59999000 );
        sub_15887( ref l_U626, 1 );
        sub_15887( ref l_U624, 0 );
        WAIT( 0 );
        GET_GAME_VIEWPORT_ID( ref uVar4 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar4, "Bank3_hall" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U842, "Bank3_hall" );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U843, "Bank3_hall" );
        SET_CHAR_COORDINATES( l_U628, 3.53790000, -464.81950000, 14.40720000 );
        SET_CHAR_HEADING( l_U628, 90.00000000 );
        DO_SCREEN_FADE_IN( 500 );
        SET_VARIABLE_ON_SOUND( l_U837, "Control", 1.00000000 );
        TASK_PLAY_ANIM( l_U628, "dufflebag_drop", "missbankjob", 8.00000000, 0, 1, 1, 0, -1 );
        if (IS_CHAR_PLAYING_ANIM( l_U628, "missbankjob", "dufflebag_drop" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( l_U628, "missbankjob", "dufflebag_drop", ref l_U782 );
        }
        while (l_U782 < 0.99000000)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U628, "missbankjob", "dufflebag_drop" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U628, "missbankjob", "dufflebag_drop", ref l_U782 );
            }
            PRINTFLOAT( l_U782 );
            PRINTNL();
            if (l_U782 > 0.57500000)
            {
                PRINTSTRING( "detached" );
                PRINTNL();
                DETACH_OBJECT( l_U843, 1 );
                DETACH_OBJECT( l_U842, 1 );
            }
            WAIT( 0 );
        }
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
        sub_15887( ref l_U626, 0 );
        sub_15944( 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        DELETE_OBJECT( ref l_U841 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1778551148 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 772345340 );
        DELETE_OBJECT( ref l_U842 );
        DELETE_OBJECT( ref l_U843 );
        REMOVE_BLIP( l_U1574 );
        sub_8453( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U628, 0 );
        CLEAR_AREA_OF_CARS( l_U1567._fU0, l_U1567._fU4, l_U1567._fU8, 150.00000000 );
        CLEAR_AREA_OF_CHARS( l_U1567._fU0, l_U1567._fU4, l_U1567._fU8, 150.00000000 );
        ADD_SCENARIO_BLOCKING_AREA( 70.52929000, -581.56960000, -14.75790000, -68.50960000, -320.72070000, 28.76190000 );
        SWITCH_ROADS_OFF( l_U1523._fU0, l_U1523._fU4, l_U1523._fU8, l_U1526._fU0, l_U1526._fU4, l_U1526._fU8 );
        SWITCH_PED_PATHS_OFF( l_U1523._fU0, l_U1523._fU4, l_U1523._fU8, l_U1526._fU0, l_U1526._fU4, l_U1526._fU8 );
        SWITCH_ROADS_OFF( -67.68260000, -504.28820000, -14.75690000, -123.94770000, -475.79680000, 28.74430000 );
        SWITCH_PED_PATHS_OFF( -67.68260000, -504.28820000, -14.75690000, -123.94770000, -475.79680000, 28.74430000 );
        SET_PED_DENSITY_MULTIPLIER( 0.25000000 );
        l_U740++;
    }
    return;
}

void sub_40694()
{
    if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -27.57000000, -463.55000000, 16.27000000, 2.00000000, -431164822 ))
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, -27.90000000, -462.90000000, 15.60000000, 0, -1.00000000 );
    }
    if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -27.57000000, -465.90000000, 16.27000000, 2.00000000, 866127123 ))
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -27.57000000, -465.90000000, 16.27000000, 0, 1.00000000 );
    }
    if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -27.57000000, -466.55000000, 16.27000000, 2.00000000, -431164822 ))
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -431164822, -27.57000000, -466.55000000, 16.27000000, 0, -1.00000000 );
    }
    if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -27.57000000, -469.55000000, 16.27000000, 2.00000000, 866127123 ))
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 866127123, -27.57000000, -469.55000000, 16.27000000, 0, 1.00000000 );
    }
    return;
}

void sub_41164()
{
    int I;

    for ( I = 0; I <= 7; I++ )
    {
        if (DOES_CHAR_EXIST( l_U865[I] ))
        {
            if ((l_U874[I] == 0) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U865[I], l_U628, 0 )))
            {
                sub_7469( "PM3_CIVS", "PM3AUD", ref l_U818, 6, 1 );
                l_U874[I] = 1;
            }
            if (NOT (IS_CHAR_DEAD( l_U865[I] )))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U865[I], "missbankjob", "fem_downloop" )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U865[I] )))
                    {
                        TASK_PLAY_ANIM( l_U865[I], "fem_downloop", "missbankjob", 8.00000000, 1, 0, 0, 0, -1 );
                    }
                }
                if ((IS_PED_RAGDOLL( l_U865[I] )) || (IS_CHAR_TOUCHING_CHAR( l_U628, l_U865[I] )))
                {
                    PRINTSTRING( "touching staff" );
                    if (NOT (IS_CHAR_INJURED( l_U865[I] )))
                    {
                        TASK_PLAY_ANIM( l_U865[I], "fem_downloop", "missbankjob", 8.00000000, 1, 0, 0, 0, -1 );
                    }
                    SET_CHAR_HEALTH( l_U865[I], 5 );
                    l_U785++;
                    l_U874[I] = 1;
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U856[I] ))
        {
            if ((l_U883[I] == 0) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U856[I], l_U628, 0 )))
            {
                sub_7469( "PM3_CIVS", "PM3AUD", ref l_U818, 6, 1 );
                l_U883[I] = 1;
            }
            if (NOT (IS_CHAR_DEAD( l_U856[I] )))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U856[I], "missbankjob", "fem_downloop" )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U856[I] )))
                    {
                        TASK_PLAY_ANIM( l_U856[I], "fem_downloop", "missbankjob", 8.00000000, 1, 0, 0, 0, -1 );
                    }
                }
                if ((IS_PED_RAGDOLL( l_U856[I] )) || (IS_CHAR_TOUCHING_CHAR( l_U628, l_U856[I] )))
                {
                    PRINTSTRING( "touching cust" );
                    if (NOT (IS_CHAR_INJURED( l_U856[I] )))
                    {
                        TASK_PLAY_ANIM( l_U856[I], "fem_downloop", "missbankjob", 1000.00000000, 1, 0, 0, 0, -1 );
                    }
                    SET_CHAR_HEALTH( l_U856[I], 5 );
                    l_U785++;
                    l_U883[I] = 1;
                }
            }
        }
    }
    return;
}

void sub_42079()
{
    unknown uVar2;
    unknown uVar3;

    if (NOT (IS_CHAR_DEAD( l_U1530 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1530, -9.73760000, -471.38710000, 15.40720000, 1.00000000, 1.00000000, 1.00000000, 0 )))
        {
            if (l_U800 == 0)
            {
                PRINTSTRING( "Packie moved from aiming point" );
                PRINTNL();
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_GO_TO_COORD_WHILE_AIMING( 0, -9.73760000, -471.38710000, 15.40720000, 2, 1.00000000, 2.00000000, 0, -16.28250000, -466.59810000, 14.40720000, 1 );
                TASK_AIM_GUN_AT_COORD( 0, -16.28250000, -466.59810000, 14.40720000, 600000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U1530, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U800 = 1;
            }
        }
        else
        {
            l_U800 = 0;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U1531 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1531, -2.79580000, -468.23340000, 14.40720000, 1.00000000, 1.00000000, 1.00000000, 0 )))
        {
            if (l_U801 == 0)
            {
                PRINTSTRING( "Derrick moved from aiming point" );
                PRINTNL();
                OPEN_SEQUENCE_TASK( ref uVar3 );
                TASK_GO_TO_COORD_WHILE_AIMING( 0, -2.79580000, -468.23340000, 14.40720000, 3, 1.00000000, 2.00000000, 0, -5.36550000, -462.93180000, 14.40720000, 1 );
                TASK_AIM_GUN_AT_COORD( 0, -5.36550000, -462.93180000, 14.40720000, 600000 );
                CLOSE_SEQUENCE_TASK( uVar3 );
                TASK_PERFORM_SEQUENCE( l_U1531, uVar3 );
                CLEAR_SEQUENCE_TASK( uVar3 );
                l_U801 = 1;
            }
        }
        else
        {
            l_U801 = 0;
        }
    }
    return;
}

void sub_42642(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_HEALTH( uParam0, ref Result );
    return Result;
}

void sub_42905()
{
    DO_SCREEN_FADE_OUT( 500 );
    while (IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DELETE_CHAR( ref l_U1530 );
    DELETE_CHAR( ref l_U1531 );
    sub_42971();
    SET_CHAR_COMPONENT_VARIATION( l_U628, 8, 0, 0 );
    SET_CHAR_COORDINATES( l_U628, -32.74070000, -466.62840000, 13.75250000 );
    SET_CHAR_HEADING( l_U628, 82.53430000 );
    LOAD_SCENE( -32.74070000, -466.62840000, 13.75250000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_42971()
{
    int I;

    MARK_MODEL_AS_NO_LONGER_NEEDED( 1530937394 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 453889158 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1402442039 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -492470690 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 690281432 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 735211577 );
    DELETE_CHAR( ref l_U1532 );
    for ( I = 0; I <= 3; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U856[I] )))
        {
            if (IS_CHAR_ON_SCREEN( l_U856[I] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U856[I] );
            }
            else
            {
                DELETE_CHAR( ref l_U856[I] );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U865[I] )))
        {
            if (IS_CHAR_ON_SCREEN( l_U865[I] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U865[I] );
            }
            else
            {
                DELETE_CHAR( ref l_U865[I] );
            }
        }
    }
    return;
}

void sub_43693()
{
    while (l_U833 == 0)
    {
        if (sub_14835())
        {
            SETTIMERA( 6001 );
            l_U836 = 1;
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            l_U835 = 4;
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U1531, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U1530, 1 );
        }
        switch (l_U835)
        {
            case 0:
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U629, 4 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U629 );
            sub_15122( ref l_U818, 0 );
            sub_15246();
            sub_2976( -1 );
            SET_CHAR_COMPONENT_VARIATION( l_U628, 3, 0, 0 );
            REQUEST_MODEL( 525509695 );
            while (NOT (HAS_MODEL_LOADED( 525509695 )))
            {
                WAIT( 0 );
            }
            LOAD_SCENE( 1401.70200000, 609.38370000, 32.04060000 );
            CLEAR_AREA_OF_CARS( 1401.70200000, 609.38370000, 32.04060000, 20.00000000 );
            SWITCH_ROADS_OFF( -89.50000000, 0.00000000, -5.36729100, 1406.99000000, 641.41300000, 43.73056000 );
            SET_CAM_POS( l_U626, 1402.30100000, 607.60640000, 32.88298000 );
            SET_CAM_ROT( l_U626, -6.57331200, 0.00000000, 20.24576000 );
            SET_CAM_FOV( l_U626, 45.00000000 );
            CREATE_CAR( 525509695, 1401.70200000, 609.38370000, 32.04060000, ref l_U834, 1 );
            SET_CAR_HEADING( l_U834, 178.58500000 );
            SET_CAR_HEALTH( l_U834, 1500 );
            SET_CAR_PROOFS( l_U834, 1, 1, 1, 1, 1 );
            SET_CAR_ENGINE_ON( l_U834, 1, 1 );
            SET_CAR_ON_GROUND_PROPERLY( l_U834 );
            WARP_CHAR_INTO_CAR( l_U628, l_U834 );
            if (NOT (IS_CHAR_DEAD( l_U1531 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1531, l_U834, 0 );
                CLEAR_ROOM_FOR_CHAR( l_U1531 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1530 )))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1530, l_U834, 2 );
                CLEAR_ROOM_FOR_CHAR( l_U1530 );
            }
            sub_15887( ref l_U626, 1 );
            sub_15944( 1 );
            DO_SCREEN_FADE_IN( 500 );
            SETTIMERA( 0 );
            l_U835 = 1;
            break;
            case 1:
            sub_7469( "PM3_FDROP", "PM3AUD", ref l_U818, 8, 1 );
            l_U835 = 2;
            break;
            case 2:
            if (NOT (sub_8970( l_U818 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U1531 )))
                {
                    TASK_LEAVE_ANY_CAR( l_U1531 );
                }
                WAIT( 500 );
                if (NOT (IS_CHAR_DEAD( l_U1530 )))
                {
                    TASK_LEAVE_ANY_CAR( l_U1530 );
                }
                SETTIMERA( 0 );
                l_U835 = 3;
            }
            break;
            case 3:
            if (NOT (IS_CHAR_DEAD( l_U1530 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U1530 )))
                {
                    SET_CAM_POS( l_U626, 1402.56300000, 603.44100000, 31.58792000 );
                    SET_CAM_ROT( l_U626, 7.50612200, -0.00000000, 28.64242000 );
                    SET_CAM_FOV( l_U626, 45.00000000 );
                    if (NOT (IS_CHAR_DEAD( l_U1531 )))
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1531, 1391.32500000, 610.54100000, 34.32270000, 3, 10000, 0.50000000 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U1530 )))
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1530, 1391.32500000, 610.54100000, 34.32270000, 3, 10000, 0.50000000 );
                    }
                    SETTIMERA( 0 );
                    l_U835 = 4;
                }
            }
            break;
            case 4:
            if (TIMERA() > 3000)
            {
                sub_15887( ref l_U626, 0 );
                sub_15944( 0 );
                SET_CAM_BEHIND_PED( l_U628 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                DELETE_CHAR( ref l_U1530 );
                DELETE_CHAR( ref l_U1531 );
                l_U833 = 1;
                if (l_U836 == 1)
                {
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    DO_SCREEN_FADE_IN( 500 );
                }
            }
            break;
        }
        WAIT( 0 );
    }
    return;
}

void sub_46032()
{
    unknown uVar2;

    sub_46041();
    REQUEST_MODEL( -183203150 );
    REQUEST_MODEL( 837858166 );
    REQUEST_MODEL( -1900572838 );
    REQUEST_MODEL( -1004762946 );
    REQUEST_MODEL( 897930585 );
    REQUEST_MODEL( 2046537925 );
    REQUEST_MODEL( -1627000575 );
    REQUEST_MODEL( -1218270655 );
    sub_46220( 731 );
    sub_46220( 732 );
    sub_46220( 733 );
    sub_46220( 734 );
    sub_46220( 740 );
    REQUEST_ANIMS( "missbankjob" );
    REQUEST_ANIMS( "move_m@cs_swat" );
    while ((NOT (HAVE_ANIMS_LOADED( "move_m@cs_swat" ))) || ((NOT (HAVE_ANIMS_LOADED( "missbankjob" ))) || ((NOT (HAS_MODEL_LOADED( -1218270655 ))) || ((NOT (HAS_MODEL_LOADED( -1627000575 ))) || ((NOT (HAS_MODEL_LOADED( 2046537925 ))) || ((NOT (HAS_MODEL_LOADED( 897930585 ))) || ((NOT (HAS_MODEL_LOADED( -1004762946 ))) || ((NOT (HAS_MODEL_LOADED( -1900572838 ))) || ((NOT (HAS_MODEL_LOADED( 837858166 ))) || (NOT (HAS_MODEL_LOADED( -183203150 ))))))))))))
    {
        WAIT( 0 );
    }
    while (NOT sub_46527())
    {
        WAIT( 0 );
    }
    return;
}

void sub_46041()
{
    int I;

    if (l_U545 != 0)
    {
        for ( I = 0; I <= (l_U545 - 1); I++ )
        {
            REMOVE_CAR_RECORDING( l_U528[I] );
        }
    }
    l_U545 = 0;
    return;
}

void sub_46220(unknown uParam0)
{
    REQUEST_CAR_RECORDING( uParam0 );
    l_U528[l_U545] = uParam0;
    l_U545++;
    return;
}

int sub_46527()
{
    int I;

    if (l_U545 != 0)
    {
        for ( I = 0; I <= (l_U545 - 1); I++ )
        {
            if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U528[I] )))
            {
                PRINTSTRING( "Waiting for recording " );
                PRINTINT( l_U528[I] );
                PRINTNL();
                return 0;
            }
        }
    }
    return 1;
}

void sub_47776()
{
    float fVar2;

    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -10.86470000, -466.89240000, 15.41220000, 13.00000000, 11.00000000, 1.00000000, 0 ))
    {
        fVar2 = 1.00000000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -25.75020000, -466.44620000, 15.41220000, 2.00000000, 8.00000000, 1.00000000, 0 ))
    {
        fVar2 = 0.85000000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 4.48600000, -465.85680000, 15.41220000, 3.00000000, 2.50000000, 1.00000000, 0 ))
    {
        fVar2 = 0.70000000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 5.43640000, -471.54180000, 12.66240000, 3.00000000, 3.50000000, 5.00000000, 0 ))
    {
        fVar2 = 0.40000000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -10.84790000, -474.03710000, 8.91250000, 13.00000000, 5.00000000, 4.00000000, 0 ))
    {
        fVar2 = 0.10000000;
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -11.69970000, -448.11270000, 14.76710000, 22.00000000, 3.00000000, 3.00000000, 1 ))
    {
        fVar2 = 0.20000000;
    }
    else
    {
        fVar2 = 0.70000000;
    };;;;;;
    PRINTSTRING( "occlusionValue:" );
    PRINTFLOAT( fVar2 );
    PRINTNL();
    SET_VARIABLE_ON_SOUND( l_U837, "Control", fVar2 );
    return;
}

void sub_48240()
{
    int I;

    if (l_U744[l_U740] == 0)
    {
        sub_7387();
        if (DOES_OBJECT_EXIST( l_U841 ))
        {
            DELETE_OBJECT( ref l_U841 );
        }
        if (DOES_BLIP_EXIST( l_U1574 ))
        {
            REMOVE_BLIP( l_U1574 );
        }
        if (l_U3076 > 0)
        {
            STOP_PTFX( l_U3076 );
        }
        if (l_U3077 > 0)
        {
            STOP_PTFX( l_U3077 );
        }
        if (l_U3078 > 0)
        {
            STOP_PTFX( l_U3078 );
        }
        if (l_U3079 > 0)
        {
            STOP_PTFX( l_U3079 );
        }
        l_U744[l_U740] = 1;
    }
    sub_12463( 1 );
    sub_41164();
    if (l_U563[0] == 0)
    {
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            SET_CHAR_COMPONENT_VARIATION( l_U1530, 8, 1, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            SET_CHAR_COMPONENT_VARIATION( l_U1531, 8, 1, 0 );
        }
        for ( I = 0; I <= 7; I++ )
        {
            if (DOES_CHAR_EXIST( l_U865[I] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U865[I] )))
                {
                    TASK_PLAY_ANIM( l_U865[I], "fem_downloop", "missbankjob", 8.00000000, 1, 0, 0, 0, -1 );
                }
            }
            if (DOES_CHAR_EXIST( l_U856[I] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U856[I] )))
                {
                    TASK_PLAY_ANIM( l_U856[I], "fem_downloop", "missbankjob", 8.00000000, 1, 0, 0, 0, -1 );
                }
            }
        }
        l_U563[1] = 1;
    }
    if ((l_U563[1] == 1) AND (l_U563[0] == 0))
    {
        sub_7469( "PM3_CASH", "PM3AUD", ref l_U818, 8, 1 );
        sub_8453( 1 );
        l_U563[0] = 1;
    }
    if ((NOT (sub_8970( l_U818 ))) AND ((l_U563[0] == 1) AND (l_U563[1] == 1)))
    {
        l_U740++;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -22.50860000, -466.24670000, 15.41220000, 1.00000000, 2.00000000, 2.00000000, 0 ))
    {
        l_U740++;
    }
    return;
}

void sub_48963()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    int J;
    unknown uVar6;

    if (l_U744[l_U740] == 0)
    {
        sub_48992( 1 );
        SET_VARIABLE_ON_SOUND( l_U837, "Control", 1.00000000 );
        PRINTSTRING( "About to create helicopter" );
        PRINTNL();
        CREATE_CAR( 837858166, 0.00000000, 0.00000000, 0.00000000, ref l_U1556[9], 1 );
        CREATE_CHAR_INSIDE_CAR( l_U1556[9], 26, -183203150, ref l_U1533[9] );
        SET_CAR_ENGINE_ON( l_U1556[9], 1, 1 );
        SET_HELI_BLADES_FULL_SPEED( l_U1556[9] );
        if (NOT (IS_CAR_DEAD( l_U840 )))
        {
            DELETE_CAR( ref l_U840 );
        }
        l_U3071 = 1;
        sub_7387();
        if (NOT (DOES_CAM_EXIST( l_U621 )))
        {
            CREATE_CAM( 14, ref l_U621 );
        }
        SET_CAM_POS( l_U621, -66.35644000, -481.11170000, 15.24185000 );
        SET_CAM_ROT( l_U621, 12.84060000, 0.00000000, -99.11972000 );
        SET_CAM_FOV( l_U621, 50.20003000 );
        if (NOT (DOES_CAM_EXIST( l_U623 )))
        {
            CREATE_CAM( 14, ref l_U623 );
        }
        SET_CAM_POS( l_U623, -66.35644000, -481.11170000, 15.24185000 );
        SET_CAM_ROT( l_U623, 45.91288000, -0.00000000, -105.13410000 );
        SET_CAM_FOV( l_U623, 50.20003000 );
        if (NOT (DOES_CAM_EXIST( l_U624 )))
        {
            CREATE_CAM( 3, ref l_U624 );
        }
        sub_16121( 4, 0, "NOOSE_1", 0 );
        sub_16121( 5, 0, "NOOSE_2", 0 );
        sub_15887( ref l_U621, 1 );
        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
        {
            CREATE_RANDOM_CHAR( -64.70690000, -481.71440000, 13.75000000, ref l_U1555 );
            SET_CHAR_HEADING( l_U1555, 247.18770000 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1555 );
        }
        WAIT( 500 );
        sub_15887( ref l_U621, 0 );
        if (NOT (IS_CHAR_DEAD( l_U1555 )))
        {
            TASK_PLAY_ANIM( l_U1555, "sheild_eyes", "missbankjob", 1000.00000000, 0, 0, 0, 1, -1 );
            if (IS_CHAR_PLAYING_ANIM( l_U1555, "missbankjob", "sheild_eyes" ))
            {
                SET_CHAR_ANIM_SPEED( l_U1555, "missbankjob", "sheild_eyes", 0.50000000 );
            }
        }
        PRINTSTRING( "About to set the heli going" );
        PRINTNL();
        if (NOT (IS_CAR_DEAD( l_U1556[9] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U1556[9], 740 );
        }
        sub_15944( 1 );
        sub_15887( ref l_U624, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 4000, 0 );
        DO_SCREEN_FADE_IN( 500 );
        SETTIMERA( 0 );
        l_U744[l_U740] = 1;
    }
    if ((l_U563[0] == 0) AND (TIMERA() > 5000))
    {
        sub_15887( ref l_U624, 0 );
        CREATE_CAR( 2046537925, 0.00000000, 0.00000000, 0.00000000, ref l_U1556[0], 1 );
        CREATE_CHAR_INSIDE_CAR( l_U1556[0], 26, -183203150, ref l_U1533[0] );
        START_PLAYBACK_RECORDED_CAR( l_U1556[0], 731 );
        SET_PLAYBACK_SPEED( l_U1556[0], 1.35000000 );
        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1556[0], 3000.00000000 );
        FORCE_CAR_LIGHTS( l_U1556[0], 2 );
        SWITCH_CAR_SIREN( l_U1556[0], 1 );
        SET_SIREN_WITH_NO_DRIVER( l_U1556[0], 1 );
        CREATE_CAR( 2046537925, 0.00000000, 0.00000000, 0.00000000, ref l_U1556[1], 1 );
        CREATE_CHAR_INSIDE_CAR( l_U1556[1], 26, -183203150, ref l_U1533[1] );
        START_PLAYBACK_RECORDED_CAR( l_U1556[1], 732 );
        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1556[1], 3000.00000000 );
        SET_PLAYBACK_SPEED( l_U1556[1], 1.35000000 );
        FORCE_CAR_LIGHTS( l_U1556[1], 2 );
        SWITCH_CAR_SIREN( l_U1556[1], 1 );
        SET_SIREN_WITH_NO_DRIVER( l_U1556[1], 1 );
        CREATE_CAR( 2046537925, 0.00000000, 0.00000000, 0.00000000, ref l_U1556[2], 1 );
        CREATE_CHAR_INSIDE_CAR( l_U1556[2], 26, -183203150, ref l_U1533[2] );
        START_PLAYBACK_RECORDED_CAR( l_U1556[2], 733 );
        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1556[2], 1000.00000000 );
        SET_PLAYBACK_SPEED( l_U1556[2], 1.35000000 );
        FORCE_CAR_LIGHTS( l_U1556[2], 2 );
        SWITCH_CAR_SIREN( l_U1556[2], 1 );
        SET_SIREN_WITH_NO_DRIVER( l_U1556[2], 1 );
        if (NOT (IS_CAR_DEAD( l_U1556[9] )))
        {
            ATTACH_CAM_TO_VEHICLE( l_U626, l_U1556[9] );
            SET_CAM_ATTACH_OFFSET( l_U626, 0.50000000, -2.20000000, -1.20000000 );
            POINT_CAM_AT_COORD( l_U626, -41.83499000, -464.65470000, 14.89168000 );
            SET_CAM_FOV( l_U626, 52.00000000 );
        }
        CREATE_OBJECT_NO_OFFSET( -1986413657, -33.41480000, -431.86210000, 13.80970000, ref l_U844, 1 );
        SET_OBJECT_HEADING( l_U844, 26.46310000 );
        CREATE_CHAR( 26, -183203150, -33.31640000, -433.11670000, 13.76000000, ref l_U845[0], 1 );
        SET_CHAR_COORDINATES_NO_OFFSET( l_U845[0], -33.31640000, -433.11670000, 14.76000000 );
        SET_CHAR_HEADING( l_U845[0], 3.62430000 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U845[0] );
        SET_CHAR_PROP_INDEX( l_U845[0], 0, 0 );
        CREATE_RANDOM_CHAR( -32.21000000, -430.56740000, 13.89080000, ref l_U845[1] );
        SET_CHAR_HEADING( l_U845[1], 184.30600000 );
        if ((NOT (IS_CHAR_DEAD( l_U845[1] ))) AND (DOES_CHAR_EXIST( l_U845[1] )))
        {
            SET_CHAR_COORDINATES_NO_OFFSET( l_U845[1], -32.21000000, -430.56740000, 14.76000000 );
        }
        CREATE_RANDOM_CHAR( -33.41750000, -430.40260000, 13.89510000, ref l_U845[2] );
        SET_CHAR_HEADING( l_U845[2], 184.30600000 );
        if ((NOT (IS_CHAR_DEAD( l_U845[2] ))) AND (DOES_CHAR_EXIST( l_U845[2] )))
        {
            SET_CHAR_COORDINATES_NO_OFFSET( l_U845[2], -33.41750000, -430.40260000, 14.76000000 );
        }
        CREATE_RANDOM_CHAR( -34.37940000, -430.73100000, 13.80350000, ref l_U845[3] );
        SET_CHAR_HEADING( l_U845[3], 184.30600000 );
        if ((NOT (IS_CHAR_DEAD( l_U845[3] ))) AND (DOES_CHAR_EXIST( l_U845[3] )))
        {
            SET_CHAR_COORDINATES_NO_OFFSET( l_U845[3], -34.37940000, -430.73100000, 14.76000000 );
        }
        CREATE_RANDOM_CHAR( -33.67740000, -429.18980000, 13.85980000, ref l_U845[4] );
        SET_CHAR_HEADING( l_U845[4], 184.30600000 );
        if ((NOT (IS_CHAR_DEAD( l_U845[4] ))) AND (DOES_CHAR_EXIST( l_U845[4] )))
        {
            SET_CHAR_COORDINATES_NO_OFFSET( l_U845[4], -33.67740000, -429.18980000, 14.76000000 );
        }
        GIVE_PED_AMBIENT_OBJECT( l_U845[3], -1218270655 );
        sub_15887( ref l_U626, 1 );
        l_U563[0] = 1;
        SETTIMERA( 0 );
    }
    if ((l_U563[0] == 1) AND ((l_U563[1] == 0) AND (TIMERA() > 4400)))
    {
        UNATTACH_CAM( l_U626 );
        SET_CAM_POS( l_U626, -41.83499000, -464.65470000, 14.89168000 );
        SET_CAM_ROT( l_U626, -0.61126900, 0.00000000, -46.43348000 );
        SET_CAM_FOV( l_U626, 30.00000000 );
        SET_CAM_NEAR_DOF( l_U626, 2.00000000 );
        SET_CAM_FAR_DOF( l_U626, 6.00000000 );
        if ((NOT (IS_CAR_DEAD( l_U1556[0] ))) AND (NOT (IS_CHAR_DEAD( l_U1533[0] ))))
        {
            OPEN_SEQUENCE_TASK( ref uVar3 );
            TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U1556[0] );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, -28.91745000, -466.30820000, 16.21759000 );
            TASK_PLAY_ANIM( 0, "holster_2_aim", "missbankjob", 8.00000000, 0, 0, 0, 1, -1 );
            CLOSE_SEQUENCE_TASK( uVar3 );
            TASK_PERFORM_SEQUENCE( l_U1533[0], uVar3 );
            SET_CHAR_PROP_INDEX( l_U1533[0], 0, 0 );
            CLEAR_SEQUENCE_TASK( uVar3 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1555 )))
        {
            DELETE_CHAR( ref l_U1555 );
        }
        SETTIMERA( 0 );
        l_U563[1] = 1;
    }
    if ((l_U563[1] == 1) AND ((l_U563[2] == 0) AND (TIMERA() > 1350)))
    {
        if (NOT (IS_CHAR_INJURED( l_U845[0] )))
        {
            SAY_AMBIENT_SPEECH_WITH_VOICE( l_U845[0], "EVACUATE_AREA", "M_Y_COP_BLACK", 1, 1, 2 );
        }
        if (NOT (IS_CHAR_INJURED( l_U845[2] )))
        {
            TASK_PLAY_ANIM( l_U845[2], "idle_look_r", "missbankjob", 8.00000000, 0, 0, 0, 0, -1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U845[4] )))
        {
            TASK_PLAY_ANIM( l_U845[4], "idle_hot_wipe_face", "missbankjob", 8.00000000, 0, 0, 0, 0, -1 );
        }
        sub_52323( 0 );
        WAIT( 0 );
        SET_CAM_POS( l_U626, -32.12819000, -433.97020000, 14.89636000 );
        SET_CAM_ROT( l_U626, 3.69824700, -0.00000000, 29.88263000 );
        SET_CAM_FOV( l_U626, 55.00000000 );
        SET_CAM_NEAR_DOF( l_U626, 1.00000000 );
        SET_CAM_FAR_DOF( l_U626, 6.00000000 );
        sub_15887( ref l_U626, 1 );
        sub_15887( ref l_U624, 0 );
        CREATE_CAR( -1900572838, 0.00000000, 0.00000000, 0.00000000, ref l_U1556[3], 1 );
        CREATE_CHAR_INSIDE_CAR( l_U1556[3], 26, -1004762946, ref l_U1533[3] );
        CREATE_CHAR_AS_PASSENGER( l_U1556[3], 26, -1004762946, 0, ref l_U1533[4] );
        CREATE_CHAR( 26, -183203150, -52.71280000, -448.93410000, 14.78320000, ref l_U1533[3], 1 );
        START_PLAYBACK_RECORDED_CAR( l_U1556[3], 734 );
        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1556[3], 1000.00000000 );
        PAUSE_PLAYBACK_RECORDED_CAR( l_U1556[3] );
        SET_CHAR_HEADING( l_U1533[3], 180.62430000 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1533[3] );
        SET_CHAR_PROP_INDEX( l_U1533[3], 0, 0 );
        SETTIMERA( 0 );
        l_U563[2] = 1;
    }
    if ((l_U563[2] == 1) AND ((l_U563[3] == 0) AND (TIMERA() > 2000)))
    {
        if ((NOT (IS_CAR_DEAD( l_U1556[3] ))) AND (NOT (IS_CHAR_DEAD( l_U1533[3] ))))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1218270655 );
            UNPAUSE_PLAYBACK_RECORDED_CAR( l_U1556[3] );
            SET_PLAYBACK_SPEED( l_U1556[3], 1.35000000 );
            FORCE_CAR_LIGHTS( l_U1556[3], 2 );
            SWITCH_CAR_SIREN( l_U1556[3], 1 );
            SET_SIREN_WITH_NO_DRIVER( l_U1556[3], 1 );
            OPEN_SEQUENCE_TASK( ref uVar4 );
            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, -52.21280000, -451.93410000, 14.78320000, 3, 5000, 0.50000000 );
            TASK_PLAY_ANIM( 0, "indicate_left_a", "missbankjob", 8.00000000, 0, 0, 0, 1, -1 );
            CLOSE_SEQUENCE_TASK( uVar4 );
            TASK_PERFORM_SEQUENCE( l_U1533[3], uVar4 );
            CLEAR_SEQUENCE_TASK( uVar4 );
            ATTACH_CAM_TO_VEHICLE( l_U626, l_U1556[3] );
            SET_CAM_ATTACH_OFFSET( l_U626, -0.50000000, -0.35000000, 1.90000000 );
            SET_CAM_FOV( l_U626, 52.00000000 );
            POINT_CAM_AT_PED( l_U626, l_U1533[3] );
            SET_CAM_NEAR_DOF( l_U626, 2.00000000 );
            SET_CAM_FAR_DOF( l_U626, 15.00000000 );
            SOUND_CAR_HORN( l_U1556[3], 2000 );
        }
        SETTIMERA( 0 );
        l_U563[3] = 1;
    }
    if ((l_U563[3] == 1) AND ((l_U563[4] == 0) AND (TIMERA() > 3000)))
    {
        if (NOT (IS_CAR_DEAD( l_U1556[3] )))
        {
            SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U1556[3] );
        }
        sub_53971( 0 );
        UNATTACH_CAM( l_U626 );
        SET_CAM_POS( l_U626, -55.01706000, -452.61310000, 13.88761000 );
        SET_CAM_ROT( l_U626, 16.70920000, -0.00000000, -38.88188000 );
        SET_CAM_FOV( l_U626, 45.00000000 );
        SET_CAM_NEAR_DOF( l_U626, 2.00000000 );
        SET_CAM_FAR_DOF( l_U626, 15.00000000 );
        if (NOT (IS_CHAR_DEAD( l_U1533[4] )))
        {
            TASK_LEAVE_ANY_CAR( l_U1533[4] );
        }
        sub_7469( "PM3_MOVE", "PM3AUD", ref l_U818, 8, 1 );
        SETTIMERA( 0 );
        l_U563[4] = 1;
    }
    if ((l_U563[4] == 1) AND ((l_U563[5] == 0) AND (TIMERA() > 1500)))
    {
        sub_53971( 0 );
        UNATTACH_CAM( l_U626 );
        SET_CAM_FOV( l_U626, 55.00000000 );
        for ( I = 0; I <= 9; I++ )
        {
            if (DOES_CHAR_EXIST( l_U845[I] ))
            {
                DELETE_CHAR( ref l_U845[I] );
            }
        }
        DELETE_CAR( ref l_U1556[9] );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 837858166 );
        DELETE_OBJECT( ref l_U844 );
        CREATE_CHAR( 26, -1004762946, -79.51360000, -481.85680000, 13.75000000, ref l_U1544[0], 1 );
        CREATE_CHAR( 26, -1004762946, -80.51360000, -481.45680000, 13.75000000, ref l_U1544[1], 1 );
        CREATE_CHAR( 26, -1004762946, -81.51360000, -481.65680000, 13.75000000, ref l_U1544[2], 1 );
        GIVE_WEAPON_TO_CHAR( l_U1544[0], 15, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U1544[0], 15, 1 );
        GIVE_WEAPON_TO_CHAR( l_U1544[1], 15, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U1544[1], 15, 1 );
        GIVE_WEAPON_TO_CHAR( l_U1544[2], 15, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U1544[2], 15, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U1544[0], 0, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1544[1], 0, 2, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1544[2], 0, 3, 0 );
        SET_CHAR_PROP_INDEX( l_U1544[0], 0, 2 );
        SET_CHAR_PROP_INDEX( l_U1544[1], 0, 1 );
        SET_CHAR_PROP_INDEX( l_U1544[2], 0, 0 );
        SET_ANIM_GROUP_FOR_CHAR( l_U1544[0], "move_m@cs_swat" );
        SET_ANIM_GROUP_FOR_CHAR( l_U1544[1], "move_m@cs_swat" );
        SET_ANIM_GROUP_FOR_CHAR( l_U1544[2], "move_m@cs_swat" );
        SET_CHAR_HEADING( l_U1544[0], 290.00000000 );
        SET_CHAR_HEADING( l_U1544[1], 290.50000000 );
        SET_CHAR_HEADING( l_U1544[2], 290.00000000 );
        SET_CAM_POS( l_U621, -80.62739000, -482.48500000, 15.00247000 );
        SET_CAM_ROT( l_U621, -0.70547700, -0.00000000, -69.33944000 );
        SET_CAM_FOV( l_U621, 40.00000000 );
        SET_CAM_NEAR_DOF( l_U621, 2.00000000 );
        SET_CAM_FAR_DOF( l_U621, 50.00000000 );
        SET_CAM_POS( l_U623, -74.31516000, -480.10820000, 15.39167000 );
        SET_CAM_ROT( l_U623, -1.06982100, 0.00000000, -69.34594000 );
        SET_CAM_FOV( l_U623, 40.00000000 );
        SET_CAM_NEAR_DOF( l_U623, 2.00000000 );
        SET_CAM_FAR_DOF( l_U623, 50.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 4000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U624, 0, 0, 1, 1 );
        TASK_PLAY_ANIM( l_U1544[0], "run", "move_m@cs_swat", 1000.00000000, 1, 1, 1, 0, 4000 );
        WAIT( 150 );
        if (NOT (IS_CHAR_DEAD( l_U1544[1] )))
        {
            TASK_PLAY_ANIM( l_U1544[1], "run", "move_m@cs_swat", 1000.00000000, 1, 1, 1, 0, 4000 );
        }
        WAIT( 100 );
        if (NOT (IS_CHAR_DEAD( l_U1544[2] )))
        {
            TASK_PLAY_ANIM( l_U1544[2], "run", "move_m@cs_swat", 1000.00000000, 1, 1, 1, 0, 4000 );
        }
        SET_CAM_COMPONENT_SHAKE( l_U624, 0, 3, 4000, 0.05100000, 0.90000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 1, 3, 4000, 0.05100000, 0.80000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 3, 3, 4000, 0.01500000, 0.80000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 4, 3, 4000, 0.01500000, 0.80000000, 0.00000000 );
        sub_7469( "PM3_MOVE", "PM3AUD", ref l_U818, 8, 1 );
        sub_15887( ref l_U626, 0 );
        sub_15887( ref l_U624, 1 );
        SETTIMERA( 0 );
        l_U563[5] = 1;
    }
    if (l_U563[5] == 1)
    {
        if (NOT (IS_CHAR_DEAD( l_U1544[1] )))
        {
            if ((l_U772 == 0) AND (IS_CHAR_PLAYING_ANIM( l_U1544[1], "move_m@cs_swat", "run" )))
            {
                SET_CHAR_ANIM_CURRENT_TIME( l_U1544[1], "move_m@cs_swat", "run", 0.70000000 );
                l_U772 = 1;
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U1544[2] )))
        {
            if ((l_U773 == 0) AND (IS_CHAR_PLAYING_ANIM( l_U1544[2], "move_m@cs_swat", "run" )))
            {
                SET_CHAR_ANIM_CURRENT_TIME( l_U1544[2], "move_m@cs_swat", "run", 0.25000000 );
                l_U773 = 1;
            }
        }
    }
    if ((l_U563[5] == 1) AND ((l_U563[6] == 0) AND (TIMERA() > 3000)))
    {
        if ((NOT (IS_CHAR_DEAD( l_U1544[2] ))) AND ((NOT (IS_CHAR_DEAD( l_U1544[1] ))) AND (NOT (IS_CHAR_DEAD( l_U1544[0] )))))
        {
            SET_CHAR_COORDINATES( l_U1544[0], -65.28510000, -475.43580000, 13.75000000 );
            SET_CHAR_HEADING( l_U1544[0], 353.97630000 );
            SET_CHAR_COORDINATES( l_U1544[1], -65.12210000, -474.32680000, 13.75000000 );
            SET_CHAR_HEADING( l_U1544[1], 353.97630000 );
            SET_CHAR_COORDINATES( l_U1544[2], -64.90460000, -472.52080000, 13.75230000 );
            SET_CHAR_HEADING( l_U1544[2], 353.97630000 );
            SET_CHAR_COMPONENT_VARIATION( l_U1544[0], 0, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1544[1], 0, 2, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1544[2], 0, 3, 0 );
            SET_ANIM_GROUP_FOR_CHAR( l_U1544[0], "move_m@cs_swat" );
            SET_ANIM_GROUP_FOR_CHAR( l_U1544[1], "move_m@cs_swat" );
            SET_ANIM_GROUP_FOR_CHAR( l_U1544[2], "move_m@cs_swat" );
            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( l_U1544[0], -65.02210000, -446.60950000, 14.77690000, 3, 4000, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( l_U1544[1], -65.02210000, -446.60950000, 14.77690000, 3, 4000, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( l_U1544[2], -65.02210000, -446.60950000, 14.77690000, 3, 4000, 0.50000000 );
        }
        SET_CAM_POS( l_U621, -66.55861000, -468.31790000, 14.35800000 );
        SET_CAM_ROT( l_U621, 17.94505000, -0.00000000, -90.46169000 );
        SET_CAM_FOV( l_U621, 54.59997000 );
        SET_CAM_NEAR_DOF( l_U621, 1.00000000 );
        SET_CAM_FAR_DOF( l_U621, 50.00000000 );
        SET_CAM_POS( l_U623, -66.55861000, -464.71790000, 14.35800000 );
        SET_CAM_ROT( l_U623, 17.94505000, -0.00000000, -90.46169000 );
        SET_CAM_FOV( l_U623, 54.59997000 );
        SET_CAM_NEAR_DOF( l_U623, 1.00000000 );
        SET_CAM_FAR_DOF( l_U623, 50.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 0, 3, 0, 0.00000000, 0.00000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 1, 3, 0, 0.00000000, 0.00000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 3, 3, 0, 0.00000000, 0.00000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 4, 3, 0, 0.00000000, 0.00000000, 0.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 6000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U624, 0, 0, 1, 1 );
        sub_7469( "PM3_MOVE", "PM3AUD", ref l_U818, 8, 1 );
        SETTIMERA( 0 );
        l_U563[6] = 1;
    }
    if ((l_U563[6] == 1) AND ((l_U563[7] == 0) AND (TIMERA() > 3000)))
    {
        CLEAR_AREA_OF_CHARS( l_U1567._fU0, l_U1567._fU4, l_U1567._fU8, 150.00000000 );
        SET_CAM_POS( l_U621, -44.83268000, -472.03230000, 15.02686000 );
        SET_CAM_ROT( l_U621, -0.16040500, 0.00000000, -90.34710000 );
        SET_CAM_FOV( l_U621, 45.00000000 );
        SET_CAM_NEAR_DOF( l_U621, 1.50000000 );
        SET_CAM_FAR_DOF( l_U621, 30.00000000 );
        SET_CAM_POS( l_U623, -44.15268000, -459.05270000, 15.02686000 );
        SET_CAM_ROT( l_U623, -0.16040500, 0.00000000, -90.34710000 );
        SET_CAM_FOV( l_U623, 45.00000000 );
        SET_CAM_NEAR_DOF( l_U623, 1.50000000 );
        SET_CAM_FAR_DOF( l_U623, 30.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 10000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U624, 0, 0, 1, 1 );
        sub_15887( ref l_U624, 1 );
        sub_15887( ref l_U626, 0 );
        SETTIMERA( 0 );
        l_U563[7] = 1;
    }
    if ((l_U563[7] == 1) AND ((l_U563[8] == 0) AND (TIMERA() > 7800)))
    {
        for ( I = 0; I <= 9; I++ )
        {
            if (DOES_VEHICLE_EXIST( l_U1556[I] ))
            {
                if (DOES_CHAR_EXIST( l_U1533[I] ))
                {
                    DELETE_CHAR( ref l_U1533[I] );
                }
                if (DOES_CHAR_EXIST( l_U1544[I] ))
                {
                    DELETE_CHAR( ref l_U1544[I] );
                }
            }
        }
        sub_53971( 0 );
        SET_CAM_POS( l_U621, -44.36369000, -466.72200000, 14.69323000 );
        SET_CAM_ROT( l_U621, 1.05521700, 0.00000000, -158.57300000 );
        SET_CAM_FOV( l_U621, 35.00000000 );
        SET_CAM_NEAR_DOF( l_U621, 1.00000000 );
        SET_CAM_FAR_DOF( l_U621, 6.00000000 );
        SET_CAM_POS( l_U623, -44.36390000, -466.72220000, 14.69323000 );
        SET_CAM_ROT( l_U623, 3.97504500, 0.00000000, -90.60471000 );
        SET_CAM_FOV( l_U623, 28.00000000 );
        SET_CAM_NEAR_DOF( l_U623, 5.00000000 );
        SET_CAM_FAR_DOF( l_U623, 30.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 2500, 1000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 0, 3, 4000, 0.01100000, 0.90000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 1, 3, 4000, 0.01100000, 0.80000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 3, 3, 4000, 0.00150000, 0.80000000, 0.00000000 );
        SET_CAM_COMPONENT_SHAKE( l_U624, 4, 3, 4000, 0.00150000, 0.80000000, 0.00000000 );
        sub_7469( "PM3_SURR", "PM3AUD", ref l_U818, 8, 1 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1530 );
            SET_CHAR_COORDINATES( l_U1530, -23.15790000, -464.60700000, 14.40720000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1530, "bank3_hall" );
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1531 );
            SET_CHAR_COORDINATES( l_U1531, -23.20610000, -468.03890000, 14.40720000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1531, "bank3_hall" );
        }
        sub_61433( ref l_U628, -19.20130000, -471.34800000, 15.40720000, 77.93670000, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U628, "bank3_hall" );
        sub_15887( ref l_U624, 1 );
        sub_15887( ref l_U626, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        SETTIMERA( 0 );
        l_U563[8] = 1;
    }
    if (((IS_SCREEN_FADED_IN()) AND ((TIMERA() > 1000) AND (sub_14835()))) || ((l_U563[8] == 1) AND ((l_U563[9] == 0) AND (NOT (sub_8970( l_U818 ))))))
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        for ( J = 0; J <= 7; J++ )
        {
            if (DOES_CHAR_EXIST( l_U865[J] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U865[J] )))
                {
                    TASK_PLAY_ANIM( l_U865[J], "fem_downloop", "missbankjob", 8.00000000, 1, 0, 0, 0, -1 );
                }
            }
            if (DOES_CHAR_EXIST( l_U856[J] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U856[J] )))
                {
                    TASK_PLAY_ANIM( l_U856[J], "fem_downloop", "missbankjob", 8.00000000, 1, 0, 0, 0, -1 );
                }
            }
        }
        sub_8453( 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1530 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1531 );
        CLEAR_AREA( -23.15790000, -464.60700000, 14.40720000, 400.00000000, 1 );
        SET_CHAR_COORDINATES( l_U1530, -23.15790000, -464.60700000, 14.40720000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1530, "bank3_hall" );
        SET_CURRENT_CHAR_WEAPON( l_U1530, 14, 1 );
        SET_CHAR_COORDINATES( l_U1531, -23.20610000, -468.03890000, 14.40720000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1531, "bank3_hall" );
        SET_CURRENT_CHAR_WEAPON( l_U1531, 14, 1 );
        sub_61433( ref l_U628, -18.55490000, -466.26590000, 15.40720000, 93.88040000, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U628, "bank3_hall" );
        for ( I = 0; I <= 9; I++ )
        {
            if (DOES_VEHICLE_EXIST( l_U1556[I] ))
            {
                if (DOES_CHAR_EXIST( l_U1533[I] ))
                {
                    DELETE_CHAR( ref l_U1533[I] );
                }
                if (DOES_CHAR_EXIST( l_U1544[I] ))
                {
                    DELETE_CHAR( ref l_U1544[I] );
                }
                DELETE_CAR( ref l_U1556[I] );
            }
        }
        DELETE_CHAR( ref l_U1555 );
        REMOVE_ANIMS( "move_m@cs_swat" );
        if (NOT (IS_CAR_DEAD( l_U840 )))
        {
            SET_CAR_COORDINATES( l_U840, l_U1567._fU0, l_U1567._fU4, l_U1567._fU8 - 10.00000000 );
            FREEZE_CAR_POSITION( l_U840, 1 );
        }
        sub_15887( ref l_U626, 0 );
        sub_15887( ref l_U624, 0 );
        sub_15944( 0 );
        l_U3071 = 0;
        SET_PLAYER_CONTROL( l_U629, 0 );
        sub_52323( 0 );
        sub_53971( 0 );
        WAIT( 500 );
        SET_PLAYER_CONTROL( l_U629, 1 );
        GET_GAME_VIEWPORT_ID( ref uVar6 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar6, "Bank3_hall" );
        REMOVE_ANIMS( "playidles_std" );
        SET_CAM_BEHIND_PED( l_U628 );
        SET_ALL_RANDOM_PEDS_FLEE( l_U629, 0 );
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        sub_7387();
        l_U740++;
    }
    return;
}

void sub_48992(int iParam0)
{
    if (iParam0 == 1)
    {
        ADD_SCENARIO_BLOCKING_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
        SET_CAR_GENERATORS_ACTIVE_IN_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000, 0 );
        SWITCH_PED_PATHS_OFF( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
        SET_SCENARIO_PED_DENSITY_MULTIPLIER( 0.00000000, 0.00000000 );
        SET_CREATE_RANDOM_COPS( 0 );
    }
    else
    {
        FLUSH_SCENARIO_BLOCKING_AREAS();
        SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
        sub_49175();
        SWITCH_ROADS_BACK_TO_ORIGINAL( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
        SWITCH_PED_ROADS_BACK_TO_ORIGINAL( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
        SET_SCENARIO_PED_DENSITY_MULTIPLIER( 1.00000000, 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CREATE_RANDOM_COPS( 1 );
    }
    return;
}

void sub_49175()
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

void sub_52323(int iParam0)
{
    int I;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    char[64] cVar8;

    for ( I = 0; I <= 45; I++ )
    {
        if ((l_U1585[I]._fU24) AND (l_U3071))
        {
            iVar4 = 1;
        }
        if ((iVar4 == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( l_U628, l_U1585[I]._fU4._fU0, l_U1585[I]._fU4._fU4, 100.00000000, 100.00000000, 0 )))
        {
            if ((iParam0 == 0) AND (((VMAG2( l_U1585[I]._fU4 )) > 0.00000000) AND (NOT (DOES_OBJECT_EXIST( l_U1585[I]._fU0 )))))
            {
                CREATE_OBJECT_NO_OFFSET( -1986413657, l_U1585[I]._fU4._fU0, l_U1585[I]._fU4._fU4, l_U1585[I]._fU4._fU8 - 1.00000000, ref l_U1585[I]._fU0, 1 );
                SET_OBJECT_HEADING( l_U1585[I]._fU0, l_U1585[I]._fU16 );
                if (NOT (DOES_CHAR_EXIST( l_U1585[I]._fU20 )))
                {
                    if ((I mod 4) == 0)
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U1585[I]._fU0, 0.00000000, -1.00000000, 0.00000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                        CREATE_CHAR( 26, -183203150, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref l_U1585[I]._fU20, 1 );
                        SET_CHAR_HEADING( l_U1585[I]._fU20, l_U1585[I]._fU16 );
                        SET_PED_DIES_WHEN_INJURED( l_U1585[I]._fU20, 1 );
                        StrCopy( ref cVar8, "barrier ", 64 );
                        ConcatString(ref cVar8, I, 64);
                        if (l_U3070 == 1)
                        {
                            SET_CHAR_RELATIONSHIP( l_U1585[I]._fU20, 5, 0 );
                            SET_SENSE_RANGE( l_U1585[I]._fU20, 65.00000000 );
                        }
                        SET_CHAR_NAME_DEBUG( l_U1585[I]._fU20, ref cVar8 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U1585[I]._fU20, 1 );
                    }
                }
                else if (l_U3070 == 1)
                {
                    SET_CHAR_RELATIONSHIP( l_U1585[I]._fU20, 5, 0 );
                    SET_SENSE_RANGE( l_U1585[I]._fU20, 65.00000000 );
                }
            }
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_2D( l_U628, l_U1585[I]._fU4._fU0, l_U1585[I]._fU4._fU4, 110.00000000, 110.00000000, 0 )))
        {
            if (DOES_CHAR_EXIST( l_U1585[I]._fU20 ))
            {
                DELETE_CHAR( ref l_U1585[I]._fU20 );
            }
            DELETE_OBJECT( ref l_U1585[I]._fU0 );
        }
    }
    return;
}

void sub_53971(int iParam0)
{
    int J;
    int I;
    int Result;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    char[64] cVar15;
    char[64] cVar31;

    if (l_U3070 == 0)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, -44.92760000, -465.00090000, 14.80390000, 15.40000000, 15.00000000, 4.00000000, 0 )) || (IS_CHAR_SHOOTING( l_U628 )))
        {
            PRINTNL();
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "Fight should have started!!!" );
            PRINTNL();
            PRINTNL();
            PRINTNL();
            SET_RELATIONSHIP( 5, 24, 0 );
            SET_RELATIONSHIP( 5, 0, 24 );
            l_U3070 = 1;
        }
    }
    for ( J = 0; J <= 42; J++ )
    {
        if (LOCATE_CHAR_ANY_MEANS_2D( l_U628, l_U1908[J]._fU4._fU0, l_U1908[J]._fU4._fU4, 70.00000000 + l_U727, 70.00000000 + l_U727, 0 ))
        {
            GET_GAME_VIEWPORT_ID( ref l_U739 );
            if (NOT (CAM_IS_SPHERE_VISIBLE( l_U739, l_U1908[J]._fU4._fU0, l_U1908[J]._fU4._fU4, l_U1908[J]._fU4._fU8, 2.00000000 )))
            {
                CLEAR_AREA_OF_CARS( l_U1908[J]._fU4._fU0, l_U1908[J]._fU4._fU4, l_U1908[J]._fU4._fU8, 2.00000000 );
            }
            for ( I = 0; I <= 1; I++ )
            {
                if (l_U3070 == 1)
                {
                    if (NOT l_U1908[J]._fU28[I]._fU20)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1908[J]._fU28[I]._fU0 )))
                        {
                            CLEAR_CHAR_TASKS( l_U1908[J]._fU28[I]._fU0 );
                            TASK_PERFORM_SEQUENCE( l_U1908[J]._fU28[I]._fU0, l_U3072 );
                        }
                        l_U1908[J]._fU28[I]._fU20 = 1;
                    }
                }
            }
            if (l_U735 == 1)
            {
                if (l_U1908[J]._fU20 == 1)
                {
                    l_U1908[J]._fU20 = 0;
                }
                else
                {
                    l_U1908[J]._fU20 = 1;
                }
            }
            if (l_U766 == 1)
            {
                if (l_U1908[J]._fU24 == 1)
                {
                    l_U1908[J]._fU24 = 0;
                    l_U1908[J]._fU20 = 0;
                }
                else
                {
                    l_U1908[J]._fU24 = 1;
                }
            }
            if ((l_U1908[J]._fU24 == 0) AND ((l_U1908[J]._fU20 == 0) AND ((iParam0 == 0) AND (((VMAG2( l_U1908[J]._fU4 )) > 0.00000000) AND (NOT (DOES_VEHICLE_EXIST( l_U1908[J]._fU0 )))))))
            {
                if ((NOT (IS_WANTED_LEVEL_GREATER( l_U629, 2 ))) AND ((IS_WANTED_LEVEL_GREATER( l_U629, 0 )) AND (l_U740 == 17)))
                {
                    ALTER_WANTED_LEVEL( l_U629, 2 );
                }
                if (NOT l_U1908[J]._fU96)
                {
                    if (HAS_MODEL_LOADED( 2046537925 ))
                    {
                        CREATE_CAR( 2046537925, l_U1908[J]._fU4._fU0, l_U1908[J]._fU4._fU4, l_U1908[J]._fU4._fU8, ref l_U1908[J]._fU0, 1 );
                        FORCE_CAR_LIGHTS( l_U1908[J]._fU0, 2 );
                        SWITCH_CAR_SIREN( l_U1908[J]._fU0, 1 );
                        if ((sub_11675( 0, 10 )) > 6)
                        {
                            SET_SIREN_WITH_NO_DRIVER( l_U1908[J]._fU0, 1 );
                        }
                    }
                }
                else if (HAS_MODEL_LOADED( -1900572838 ))
                {
                    CREATE_CAR( -1900572838, l_U1908[J]._fU4._fU0, l_U1908[J]._fU4._fU4, l_U1908[J]._fU4._fU8, ref l_U1908[J]._fU0, 1 );
                    FORCE_CAR_LIGHTS( l_U1908[J]._fU0, 2 );
                    if ((sub_11675( 0, 10 )) > 6)
                    {
                        SET_SIREN_WITH_NO_DRIVER( l_U1908[J]._fU0, 1 );
                    }
                    else
                    {
                        SET_SIREN_WITH_NO_DRIVER( l_U1908[J]._fU0, 0 );
                    }
                }
                if (DOES_VEHICLE_EXIST( l_U1908[J]._fU0 ))
                {
                    LOCK_CAR_DOORS( l_U1908[J]._fU0, 2 );
                    SET_CAR_HEADING( l_U1908[J]._fU0, l_U1908[J]._fU16 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U1908[J]._fU0 );
                }
                if ((NOT l_U1908[J]._fU96) AND (NOT (DOES_CHAR_EXIST( l_U1908[J]._fU28[0]._fU0 ))))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1908[J]._fU0, 1.25000000, -2.25000000, -1.00000000, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1908[J]._fU0, -1.25000000, -2.25000000, -1.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                    if ((sub_55354( l_U628, uVar6 )) > (sub_55354( l_U628, uVar9 )))
                    {
                        uVar12 = {uVar6};
                    }
                    else
                    {
                        uVar12 = {uVar9};
                    }
                    if (l_U1908[J]._fU104 == 1)
                    {
                        uVar12 = {uVar6};
                    }
                    else if (l_U1908[J]._fU104 == 2)
                    {
                        uVar12 = {uVar9};
                    }
                    CREATE_CHAR( 26, -183203150, uVar12._fU0, uVar12._fU4, uVar12._fU8, ref l_U1908[J]._fU28[0]._fU0, 1 );
                    SET_CHAR_HEADING( l_U1908[J]._fU28[0]._fU0, l_U1908[J]._fU16 );
                    GIVE_WEAPON_TO_CHAR( l_U1908[J]._fU28[0]._fU0, 7, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U1908[J]._fU28[0]._fU0, 7, 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U1908[J]._fU28[0]._fU0, 24 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1908[J]._fU28[0]._fU0 );
                    SET_CHAR_PROP_INDEX( l_U1908[J]._fU28[0]._fU0, 0, 0 );
                    SET_PED_DIES_WHEN_INJURED( l_U1908[J]._fU28[0]._fU0, 1 );
                    OPEN_SEQUENCE_TASK( ref l_U3073 );
                    TASK_TURN_CHAR_TO_FACE_COORD( 0, -28.91745000, -466.30820000, 16.21759000 );
                    TASK_PLAY_ANIM( 0, "holster_2_aim", "missbankjob", 8.00000000, 0, 0, 0, 1, -1 );
                    CLOSE_SEQUENCE_TASK( l_U3073 );
                    TASK_PERFORM_SEQUENCE( l_U1908[J]._fU28[0]._fU0, l_U3073 );
                    CLEAR_SEQUENCE_TASK( l_U3073 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U1908[J]._fU28[0]._fU0, 1 );
                    SET_SENSE_RANGE( l_U1908[J]._fU28[0]._fU0, 65.00000000 );
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1908[J]._fU28[0]._fU0, uVar12, 1.50000000 );
                    SET_CHAR_ACCURACY( l_U1908[J]._fU28[0]._fU0, 10 );
                    StrCopy( ref cVar15, "CBAR ", 64 );
                    ConcatString(ref cVar15, J, 64);
                    ConcatString(ref cVar15, "/", 64);
                    ConcatString(ref cVar15, 0, 64);
                    SET_CHAR_NAME_DEBUG( l_U1908[J]._fU28[0]._fU0, ref cVar15 );
                }
                if ((l_U1908[J]._fU100 == 0) AND ((NOT l_U1908[J]._fU96) AND (NOT (DOES_CHAR_EXIST( l_U1908[J]._fU28[1]._fU0 )))))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1908[J]._fU0, 1.25000000, 2.25000000, -1.00000000, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1908[J]._fU0, -1.25000000, 2.25000000, -1.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                    if ((sub_55354( l_U628, uVar6 )) > (sub_55354( l_U628, uVar9 )))
                    {
                        uVar12 = {uVar6};
                    }
                    else
                    {
                        uVar12 = {uVar9};
                    }
                    if (l_U1908[J]._fU104 == 1)
                    {
                        uVar12 = {uVar6};
                    }
                    else if (l_U1908[J]._fU104 == 2)
                    {
                        uVar12 = {uVar9};
                    }
                    CREATE_CHAR( 26, -183203150, uVar12._fU0, uVar12._fU4, uVar12._fU8, ref l_U1908[J]._fU28[1]._fU0, 1 );
                    SET_CHAR_HEADING( l_U1908[J]._fU28[1]._fU0, l_U1908[J]._fU16 );
                    GIVE_WEAPON_TO_CHAR( l_U1908[J]._fU28[1]._fU0, 7, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U1908[J]._fU28[1]._fU0, 7, 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U1908[J]._fU28[1]._fU0, 24 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1908[J]._fU28[1]._fU0 );
                    TASK_PERFORM_SEQUENCE( l_U1908[J]._fU28[1]._fU0, l_U3074 );
                    SET_COMBAT_DECISION_MAKER( l_U1908[J]._fU28[1]._fU0, l_U1581 );
                    SET_CHAR_DECISION_MAKER( l_U1908[J]._fU28[1]._fU0, l_U1578 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U1908[J]._fU28[1]._fU0, 1 );
                    SET_SENSE_RANGE( l_U1908[J]._fU28[1]._fU0, 65.00000000 );
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1908[J]._fU28[1]._fU0, uVar12, 1.50000000 );
                    SET_CHAR_ACCURACY( l_U1908[J]._fU28[1]._fU0, 10 );
                    SET_PED_DIES_WHEN_INJURED( l_U1908[J]._fU28[1]._fU0, 1 );
                    if ((sub_11675( 0, 10 )) < 5)
                    {
                        SET_CHAR_PROP_INDEX( l_U1908[J]._fU28[1]._fU0, 0, 0 );
                    }
                    StrCopy( ref cVar31, "CBAR ", 64 );
                    ConcatString(ref cVar31, J, 64);
                    ConcatString(ref cVar31, "/", 64);
                    ConcatString(ref cVar31, 1, 64);
                    SET_CHAR_NAME_DEBUG( l_U1908[J]._fU28[1]._fU0, ref cVar31 );
                }
            }
            else
            {
                Result++;
            }
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_2D( l_U628, l_U1908[J]._fU4._fU0, l_U1585[J]._fU4._fU4, 80.00000000 + l_U727, 80.00000000 + l_U727, 0 )))
        {
            if (DOES_CHAR_EXIST( l_U1908[J]._fU28[0]._fU0 ))
            {
                DELETE_CHAR( ref l_U1908[J]._fU28[0]._fU0 );
            }
            if (DOES_CHAR_EXIST( l_U1908[J]._fU28[1]._fU0 ))
            {
                DELETE_CHAR( ref l_U1908[J]._fU28[1]._fU0 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1908[J]._fU0 );
        }
        if (DOES_CHAR_EXIST( l_U1908[J]._fU28[0]._fU0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1908[J]._fU28[0]._fU0 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U1908[J]._fU28[0]._fU0 )))
                {
                    SET_CHAR_COLLISION( l_U1908[J]._fU28[0]._fU0, 0 );
                    FREEZE_CHAR_POSITION( l_U1908[J]._fU28[0]._fU0, 1 );
                }
                else
                {
                    SET_CHAR_COLLISION( l_U1908[J]._fU28[0]._fU0, 1 );
                    FREEZE_CHAR_POSITION( l_U1908[J]._fU28[0]._fU0, 0 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U1908[J]._fU28[1]._fU0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1908[J]._fU28[1]._fU0 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U1908[J]._fU28[1]._fU0 )))
                {
                    SET_CHAR_COLLISION( l_U1908[J]._fU28[1]._fU0, 0 );
                    FREEZE_CHAR_POSITION( l_U1908[J]._fU28[1]._fU0, 1 );
                }
                else
                {
                    SET_CHAR_COLLISION( l_U1908[J]._fU28[1]._fU0, 1 );
                    FREEZE_CHAR_POSITION( l_U1908[J]._fU28[1]._fU0, 0 );
                }
            }
        }
        if (DOES_VEHICLE_EXIST( l_U1908[J]._fU0 ))
        {
            if (NOT (IS_CAR_DEAD( l_U1908[J]._fU0 )))
            {
                if (NOT (IS_CAR_ON_SCREEN( l_U1908[J]._fU0 )))
                {
                    SET_CAR_COLLISION( l_U1908[J]._fU0, 0 );
                    FREEZE_CAR_POSITION( l_U1908[J]._fU0, 1 );
                }
                else
                {
                    SET_CAR_COLLISION( l_U1908[J]._fU0, 1 );
                    FREEZE_CAR_POSITION( l_U1908[J]._fU0, 0 );
                }
            }
        }
    }
    l_U3075 = Result;
    return Result;
}

void sub_55354(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_61433(unknown uParam0, unknown Result, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        GET_GROUND_Z_FOR_3D_COORD( Result._fU0, Result._fU4, Result._fU8, ref Result._fU8 );
        SET_CHAR_COORDINATES_NO_OFFSET( (uParam0^), Result._fU0, Result._fU4, Result._fU8 );
        SET_CHAR_HEADING( (uParam0^), uParam4 );
        if (bParam5)
        {
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( (uParam0^), Result, 60000 );
        }
    }
    return Result;
}

void sub_62662()
{
    int I;
    int iVar3;

    if (l_U744[l_U740] == 0)
    {
        for ( I = 0; I <= 3; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U865[I] )))
            {
                DELETE_CHAR( ref l_U865[I] );
            }
        }
        SWITCH_GARBAGE_TRUCKS( 0 );
        g_U9890 = 1;
        g_U9077 = 0;
        g_U9337 = 1;
        sub_15122( ref l_U818, 0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1532 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 735211577 );
        sub_7469( "PM3_COPSP", "PM3AUD", ref l_U818, 8, 1 );
        SETTIMERB( 0 );
        l_U744[l_U740] = 1;
    }
    if (l_U769 == 0)
    {
        if ((LOCATE_CHAR_ANY_MEANS_2D( l_U628, 0.90720000, -493.48900000, 1.00000000, 13.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_2D( l_U628, -49.75580000, -459.18690000, 20.50000000, 1.00000000, 0 )))
        {
            CREATE_CAR( -1627000575, 11.13970000, -447.72210000, 13.59990000, ref l_U927, 1 );
            SET_CAR_HEADING( l_U927, 179.68790000 );
            LOCK_CAR_DOORS( l_U927, 2 );
            sub_63039( 12.33000000, -449.22340000, 13.65480000, ref l_U928[0], 0, 1, 1 );
            sub_63039( 12.27920000, -445.85650000, 13.65220000, ref l_U928[1], 0, 1, 1 );
            SET_CHAR_HEALTH( l_U928[0]._fU0, 125 );
            SET_CHAR_HEALTH( l_U928[1]._fU0, 125 );
            l_U769 = 1;
        }
    }
    if (TIMERB() > 600)
    {
        l_U3070 = 1;
    }
    if (DOES_VEHICLE_EXIST( l_U1908[16]._fU0 ))
    {
        if ((l_U563[6] == 0) AND ((sub_63578( l_U1908[16]._fU0 )) < 850))
        {
            EXPLODE_CAR( l_U1908[16]._fU0, 1, 0 );
            l_U563[6] = 1;
        }
    }
    if (DOES_VEHICLE_EXIST( l_U1908[15]._fU0 ))
    {
        if ((l_U563[7] == 0) AND ((sub_63578( l_U1908[15]._fU0 )) < 600))
        {
            EXPLODE_CAR( l_U1908[15]._fU0, 1, 0 );
            l_U563[7] = 1;
        }
    }
    if ((NOT (sub_8970( l_U818 ))) AND ((l_U3070) AND (l_U563[0] == 0)))
    {
        sub_8453( 0 );
        OPEN_SEQUENCE_TASK( ref l_U898 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -31.03470000, -463.58230000, 13.75050000, 4, 60000, 0.50000000 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 30.00000000 );
        CLOSE_SEQUENCE_TASK( l_U898 );
        OPEN_SEQUENCE_TASK( ref l_U904 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -34.69240000, -471.92160000, 13.79090000, 4, 60000, 0.50000000 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 30.00000000 );
        CLOSE_SEQUENCE_TASK( l_U904 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1530, 1 );
            TASK_PERFORM_SEQUENCE( l_U1530, l_U898 );
        }
        WAIT( 200 );
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1531, 1 );
            TASK_PERFORM_SEQUENCE( l_U1531, l_U904 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U1571 )))
        {
            ADD_BLIP_FOR_CHAR( l_U1530, ref l_U1571 );
        }
        SET_BLIP_AS_FRIENDLY( l_U1571, 1 );
        CHANGE_BLIP_DISPLAY( l_U1571, 4 );
        if (NOT (DOES_BLIP_EXIST( l_U1572 )))
        {
            ADD_BLIP_FOR_CHAR( l_U1531, ref l_U1572 );
        }
        SET_BLIP_AS_FRIENDLY( l_U1572, 1 );
        CHANGE_BLIP_DISPLAY( l_U1572, 4 );
        sub_7469( "PM3_FOLLO", "PM3AUD", ref l_U818, 8, 1 );
        SETTIMERA( 0 );
        l_U563[0] = 1;
    }
    if ((l_U892 == 0) AND ((NOT (sub_8970( l_U818 ))) AND (l_U563[0] == 1)))
    {
        PRINT_NOW( "BJFLLOW", 7500, 1 );
        l_U892 = 1;
    }
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U892 == 1) AND ((l_U563[1] == 0) AND ((sub_64296( l_U1530, l_U898 )) >= 1))))
    {
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1530, 0 );
        }
        if (l_U563[5] == 0)
        {
            PRINT_NOW( "BJFLLO1", 7500, 1 );
            l_U563[5] = 1;
        }
    }
    if ((l_U563[1] == 0) AND ((sub_64296( l_U1531, l_U904 )) >= 1))
    {
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1531, 0 );
        }
    }
    if ((TIMERA() > 20000) AND ((l_U563[1] == 0) AND (l_U3070)))
    {
        SET_SENSE_RANGE( l_U1531, 65.00000000 );
        SET_SENSE_RANGE( l_U1530, 65.00000000 );
        OPEN_SEQUENCE_TASK( ref l_U899 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -14.97680000, -445.41980000, 13.76180000, 4, 60000, 0.50000000 );
        TASK_SEEK_COVER_TO_COORDS( 0, -14.97680000, -445.41980000, 13.76180000, -1.30820000, -450.06950000, 13.75270000, 3000 );
        TASK_SHOOT_AT_COORD( 0, -1.30820000, -450.06950000, 13.75270000, 3000, 3 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR_TIMED( 0, 45.00000000, 10000 );
        TASK_SHOOT_AT_COORD( 0, -1.30820000, -450.06950000, 13.75270000, 2500, 3 );
        CLOSE_SEQUENCE_TASK( l_U899 );
        OPEN_SEQUENCE_TASK( ref l_U905 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -27.61410000, -446.13970000, 13.75645000, 4, 60000, 0.50000000 );
        TASK_SEEK_COVER_TO_COORDS( 0, -27.61410000, -446.13970000, 13.75645000, -1.30820000, -450.06950000, 13.75270000, 3000 );
        TASK_SHOOT_AT_COORD( 0, -1.30820000, -450.06950000, 13.75270000, 2500, 3 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR_TIMED( 0, 45.00000000, 10000 );
        TASK_SHOOT_AT_COORD( 0, -1.30820000, -450.06950000, 13.75270000, 2500, 3 );
        CLOSE_SEQUENCE_TASK( l_U905 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1530, 1 );
            CLEAR_CHAR_TASKS( l_U1530 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1530, -14.97680000, -445.41980000, 13.76180000, 5.00000000 );
            TASK_PERFORM_SEQUENCE( l_U1530, l_U899 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1531, 1 );
            CLEAR_CHAR_TASKS( l_U1531 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1531, -27.61410000, -446.13970000, 13.75640000, 5.00000000 );
            TASK_PERFORM_SEQUENCE( l_U1531, l_U905 );
        }
        CLEAR_SEQUENCE_TASK( l_U899 );
        CLEAR_SEQUENCE_TASK( l_U905 );
        sub_63039( -6.59470000, -445.15750000, 13.76130000, ref l_U928[4], 0, 1, 0 );
        sub_63039( 6.81450000, -451.97130000, 13.75410000, ref l_U928[6], 0, 1, 0 );
        sub_63039( 8.85849900, -443.24650000, 13.75020000, ref l_U928[7], 0, 1, 0 );
        sub_42971();
        sub_7469( "PM3_CUT", "PM3AUD", ref l_U818, 8, 1 );
        while (l_U926 < 30)
        {
            GET_CLOSEST_CHAR( -51.27290000, -456.80240000, 13.79430000, 24.00000000, 1, 1, ref iVar3 );
            if ((iVar3 != l_U1531) AND ((iVar3 != l_U1530) AND (NOT (IS_CHAR_DEAD( iVar3 )))))
            {
                DAMAGE_CHAR( iVar3, 100, 1 );
            }
            WAIT( 0 );
            l_U926++;
            if (NOT (IS_PLAYER_PLAYING( sub_3891() )))
            {
                return;
            }
        }
        SETTIMERA( 0 );
        l_U563[1] = 1;
    }
    sub_41164();
    if ((l_U563[4] == 0) AND ((l_U563[1] == 1) AND (NOT (sub_8970( l_U818 )))))
    {
        PRINT_NOW( "BJFLLOW", 7500, 1 );
        PRINT( "BJFLLO2", 7500, 1 );
        l_U563[4] = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U1530 )))
    {
        if ((l_U928[0]._fU20 == 0) AND (((LOCATE_CHAR_ANY_MEANS_3D( l_U628, -15.97680000, -445.41980000, 13.76180000, 2.00000000, 4.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1530, -14.97680000, -445.41980000, 13.76180000, 2.00000000, 2.00000000, 2.00000000, 0 ))) AND (l_U563[1] == 1)))
        {
            if ((NOT (IS_CHAR_INJURED( l_U928[0]._fU0 ))) AND (NOT (IS_CHAR_DEAD( l_U1530 ))))
            {
                TASK_COMBAT( l_U928[0]._fU0, l_U1530 );
            }
            PRINTNL();
            PRINTSTRING( "cop 1 combatting" );
            PRINTNL();
            PRINTNL();
            CHANGE_BLIP_DISPLAY( l_U1571, 2 );
            CHANGE_BLIP_DISPLAY( l_U1572, 2 );
            for ( I = 0; I <= 7; I++ )
            {
                if (DOES_BLIP_EXIST( l_U928[I]._fU24 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U928[I]._fU24, 4 );
                }
            }
            sub_7469( "PM3_DCLEAR", "PM3AUD", ref l_U818, 8, 1 );
            l_U928[0]._fU20 = 1;
        }
    }
    if ((l_U563[5] == 0) AND ((NOT (sub_8970( l_U818 ))) AND (l_U928[0]._fU20 == 1)))
    {
        PRINT_NOW( "BJFLLO2", 7500, 1 );
        l_U563[5] = 1;
    }
    if (l_U563[3] == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -1.16130000, -447.46730000, 14.76290000, 1.00000000, 4.00000000, 5.00000000, 1 ))
        {
            CREATE_CAR( -1627000575, 14.02800000, -418.44480000, 13.71720000, ref l_U1001, 1 );
            SET_CAR_HEADING( l_U1001, 94.18979000 );
            LOCK_CAR_DOORS( l_U1001, 2 );
            SWITCH_CAR_SIREN( l_U1001, 1 );
            SET_SIREN_WITH_NO_DRIVER( l_U1001, 1 );
            FORCE_CAR_LIGHTS( l_U1001, 2 );
            sub_63039( 12.86170000, -417.28970000, 13.69100000, ref l_U1002[0], 0, 1, 0 );
            sub_63039( 15.27960000, -417.11880000, 13.62250000, ref l_U1002[1], 0, 1, 0 );
            sub_63039( 19.93280000, -426.19980000, 13.76290000, ref l_U1002[2], 0, 0, 0 );
            sub_63039( 20.76930000, -457.83080000, 13.76640000, ref l_U1002[3], 0, 1, 0 );
            sub_63039( 8.09710000, -460.04250000, 13.74890000, ref l_U1002[8], 0, 1, 0 );
            l_U563[3] = 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U1531 )))
    {
        if ((l_U928[1]._fU20 == 0) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U1531, -27.61410000, -446.13970000, 13.75645000, 2.00000000, 2.00000000, 2.00000000, 0 )) AND (l_U563[1] == 1)))
        {
            if ((NOT (IS_CHAR_INJURED( l_U928[1]._fU0 ))) AND (NOT (IS_CHAR_DEAD( l_U1531 ))))
            {
                TASK_COMBAT( l_U928[1]._fU0, l_U1531 );
            }
            PRINTNL();
            PRINTSTRING( "cop 2 combatting" );
            PRINTNL();
            PRINTNL();
            l_U928[1]._fU20 = 1;
        }
    }
    sub_66542();
    sub_52323( 0 );
    sub_53971( 0 );
    if (TIMERB() > 1200)
    {
        sub_66738();
    }
    sub_67321( 35.00000000, 15000 );
    sub_67620();
    if (DOES_CHAR_EXIST( l_U928[4]._fU0 ))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, -9.36540000, -448.41190000, 14.76350000, 1.00000000, 3.00000000, 3.00000000, 0 )) || (IS_CHAR_INJURED( l_U928[4]._fU0 )))
        {
            if (l_U928[5]._fU20 == 0)
            {
                sub_68227( -5.48350000, -440.50410000, 13.75090000, -6.43130000, -447.07180000, 13.76130000, ref l_U928[5], 1, 10 );
                l_U928[5]._fU20 = 1;
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U928[7]._fU0 ))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 3.09400000, -447.44200000, 14.76050000, 1.00000000, 4.00000000, 3.00000000, 0 )) || ((IS_CHAR_INJURED( l_U928[6]._fU0 )) || (IS_CHAR_INJURED( l_U928[7]._fU0 ))))
        {
            if (l_U928[3]._fU20 == 0)
            {
                sub_68227( 8.77170000, -442.63400000, 13.74980000, 4.41410000, -445.97600000, 13.75570000, ref l_U928[3], 1, 15 );
                l_U928[3]._fU20 = 1;
            }
            WAIT( 500 );
            if (l_U928[2]._fU20 == 0)
            {
                sub_68227( 8.81730000, -454.04510000, 13.74980000, 4.62590000, -448.81190000, 13.75530000, ref l_U928[2], 1, 15 );
                l_U928[2]._fU20 = 1;
            }
        }
    }
    for ( I = 0; I <= 7; I++ )
    {
        if (DOES_BLIP_EXIST( l_U928[I]._fU24 ))
        {
            if (IS_CHAR_INJURED( l_U928[I]._fU0 ))
            {
                REMOVE_BLIP( l_U928[I]._fU24 );
            }
        }
    }
    if (l_U928[0]._fU20 == 1)
    {
        if ((IS_CHAR_INJURED( l_U928[7]._fU0 )) AND ((IS_CHAR_INJURED( l_U928[6]._fU0 )) AND ((IS_CHAR_INJURED( l_U928[5]._fU0 )) AND ((IS_CHAR_INJURED( l_U928[4]._fU0 )) AND ((IS_CHAR_INJURED( l_U928[3]._fU0 )) AND ((IS_CHAR_INJURED( l_U928[2]._fU0 )) AND ((IS_CHAR_INJURED( l_U928[1]._fU0 )) AND (IS_CHAR_INJURED( l_U928[0]._fU0 )))))))))
        {
            for ( I = 0; I <= 8; I++ )
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U928[I]._fU0 );
                REMOVE_BLIP( l_U928[I]._fU24 );
            }
            l_U735 = 1;
            if ((l_U563[2] == 0) AND (l_U563[1] == 1))
            {
                l_U740++;
            }
        }
    }
    return;
}

void sub_63039(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, boolean bParam4, boolean bParam5, int iParam6)
{
    unknown uVar9;

    if (iParam3->_fU28 == 0)
    {
        if (bParam5)
        {
            CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 2.50000000, 0 );
        }
        CREATE_CHAR( 26, -183203150, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam3 + 0, 1 );
        SET_CHAR_RELATIONSHIP( iParam3->_fU0, 5, 0 );
        GIVE_WEAPON_TO_CHAR( iParam3->_fU0, 7, 120, 0 );
        if (iParam6 == 1)
        {
            SET_COMBAT_DECISION_MAKER( iParam3->_fU0, l_U1582 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( iParam3->_fU0, l_U1581 );
        }
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam3->_fU0, uParam0, 1.20000000 );
        ADD_BLIP_FOR_CHAR( iParam3->_fU0, iParam3 + 24 );
        if (bParam4)
        {
            CHANGE_BLIP_DISPLAY( iParam3->_fU24, 4 );
        }
        else
        {
            CHANGE_BLIP_DISPLAY( iParam3->_fU24, 0 );
        }
        SET_BLIP_AS_FRIENDLY( iParam3->_fU24, 0 );
        SET_CHAR_IS_TARGET_PRIORITY( iParam3->_fU0, 1 );
        OPEN_SEQUENCE_TASK( ref uVar9 );
        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, uParam0, 10000 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 60.00000000 );
        CLOSE_SEQUENCE_TASK( uVar9 );
        TASK_PERFORM_SEQUENCE( iParam3->_fU0, uVar9 );
        CLEAR_SEQUENCE_TASK( uVar9 );
        SET_CHAR_ACCURACY( iParam3->_fU0, 25 );
        SET_CHAR_NAME_DEBUG( iParam3->_fU0, "AStatCop" );
        iParam3->_fU28 = 1;
    }
    else if (bParam4)
    {
        CHANGE_BLIP_DISPLAY( iParam3->_fU24, 4 );
    }
    return;
}

void sub_63578(unknown uParam0)
{
    int Result;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_HEALTH( uParam0, ref Result );
    }
    else
    {
        Result = 0;
    }
    return Result;
}

void sub_64296(unknown uParam0, unknown uParam1)
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

void sub_66542()
{
    if (NOT (IS_CHAR_DEAD( l_U1530 )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U1530 )))
        {
            SET_CHAR_PROOFS( l_U1530, 1, 0, 0, 1, 1 );
        }
        else
        {
            SET_CHAR_PROOFS( l_U1530, 0, 0, 0, 0, 0 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U1531 )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U1531 )))
        {
            SET_CHAR_PROOFS( l_U1531, 1, 0, 0, 1, 1 );
        }
        else
        {
            SET_CHAR_PROOFS( l_U1531, 0, 0, 0, 0, 0 );
        }
    }
    return;
}

void sub_66738()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    l_U778 = sub_66752( l_U628 );
    if (l_U778 < l_U779)
    {
        PRINTSTRING( "just after comparison::" );
        PRINTINT( l_U778 );
        PRINTSTRING( " < " );
        PRINTINT( l_U779 );
        PRINTNL();
        PRINTNL();
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U628, 0.00000000, -0.30000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (l_U778 < 50)
        {
            TRIGGER_PTFX( "break_banknotes", uVar2, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
        }
        else
        {
            TRIGGER_PTFX( "player_wasted_cash", uVar2, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
        }
        GET_GAME_TIMER( ref l_U3081 );
        if ((NOT (sub_8970( l_U818 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U3081 - l_U3080) > 5000)))
        {
            if (l_U778 < 100)
            {
                sub_7469( "PM3_LOW", "PM3BAUD", ref l_U818, 7, 1 );
            }
            else
            {
                sub_7469( "PM3_WATCH", "PM3BAUD", ref l_U818, 7, 1 );
            }
            GET_GAME_TIMER( ref l_U3080 );
        }
        l_U779 = sub_66752( l_U628 );
        PRINTINT( l_U778 );
        PRINTSTRING( " < " );
        PRINTINT( l_U779 );
        PRINTNL();
    }
    else if (l_U778 > l_U779)
    {
        l_U779 = l_U778;
    }
    return;
}

void sub_66752(unknown uParam0)
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

void sub_67321(float fParam0, int iParam1)
{
    if (NOT (IS_CHAR_DEAD( l_U1530 )))
    {
        if (((sub_12510( l_U628, l_U1531, 1 )) > fParam0) AND ((sub_12510( l_U628, l_U1530, 1 )) > fParam0))
        {
            PRINT_NOW( "BJLEFT9", 1, 1 );
            if (l_U729 == 0)
            {
                GET_GAME_TIMER( ref l_U731 );
                l_U729 = 1;
            }
        }
        else
        {
            l_U729 = 0;
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U1531 ))) AND ((NOT (IS_CHAR_DEAD( l_U1530 ))) AND (l_U729 == 1)))
    {
        GET_GAME_TIMER( ref l_U730 );
        if ((NOT (IS_CHAR_ON_SCREEN( l_U1531 ))) AND ((NOT (IS_CHAR_ON_SCREEN( l_U1530 ))) AND ((l_U730 - l_U731) > iParam1)))
        {
            SET_CHAR_HEALTH( l_U1530, 5 );
            SET_CHAR_HEALTH( l_U1531, 5 );
            sub_14368();
            PRINT_NOW( "BJLEFT8", 7500, 1 );
            sub_19004();
        }
    }
    sub_12463( 1 );
    return;
}

void sub_67620()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    GET_GAME_TIMER( ref l_U802 );
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (IS_CHAR_DEAD( l_U1530 ))))
    {
        if (((l_U802 - l_U803) > 4500) AND ((NOT (sub_8970( l_U818 ))) AND (IS_CHAR_SHOOTING( l_U1530 ))))
        {
            sub_7469( "PM3_SHOUT", "PM3BAUD", ref l_U818, 6, 1 );
            GET_GAME_TIMER( ref l_U803 );
        }
        if ((sub_11675( 0, 10 )) > 5)
        {
            uVar2 = {sub_67777( l_U1531 )};
            if (((l_U802 - l_U803) > 7500) AND (IS_BULLET_IN_AREA( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000, 0 )))
            {
                sub_7469( "PM3_FIRE", "PM3AUD", ref l_U818, 6, 1 );
                GET_GAME_TIMER( ref l_U803 );
            }
        }
        else if (((l_U802 - l_U803) > 4500) AND ((NOT (IS_CHAR_SHOOTING( l_U1530 ))) AND ((IS_CHAR_SHOOTING( l_U628 )) AND (NOT (sub_8970( l_U818 ))))))
        {
            sub_7469( "PM3_FIGHT", "PM3BAUD", ref l_U818, 6, 1 );
            GET_GAME_TIMER( ref l_U803 );
        }
    }
    return;
}

void sub_67777(unknown uParam0)
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

void sub_68227(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7, unknown uParam8)
{
    if (iParam6->_fU28 == 0)
    {
        CREATE_CHAR( 26, -1004762946, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam6 + 0, 1 );
        SET_CHAR_RELATIONSHIP( iParam6->_fU0, 5, 0 );
        GIVE_WEAPON_TO_CHAR( iParam6->_fU0, uParam8, 120, 0 );
        SET_COMBAT_DECISION_MAKER( iParam6->_fU0, l_U1581 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam6->_fU0, uParam3._fU0, uParam3._fU4, uParam3._fU8, 4, 60000, 0.50000000 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U788 );
        SET_CHAR_PROP_INDEX( iParam6->_fU0, 0, l_U788 );
        ADD_BLIP_FOR_CHAR( iParam6->_fU0, iParam6 + 24 );
        if (bParam7)
        {
            CHANGE_BLIP_DISPLAY( iParam6->_fU24, 4 );
        }
        else
        {
            CHANGE_BLIP_DISPLAY( iParam6->_fU24, 0 );
        }
        SET_BLIP_AS_FRIENDLY( iParam6->_fU24, 0 );
        SET_CHAR_IS_TARGET_PRIORITY( iParam6->_fU0, 1 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam6->_fU0, uParam3, 3.50000000 );
        SET_CHAR_NAME_DEBUG( iParam6->_fU0, "AnOffSwat" );
        ADD_ARMOUR_TO_CHAR( iParam6->_fU0, 65486 );
        SET_CHAR_ACCURACY( iParam6->_fU0, 25 );
        iParam6->_fU28 = 1;
    }
    else if (bParam7)
    {
        CHANGE_BLIP_DISPLAY( iParam6->_fU24, 4 );
    }
    return;
}

void sub_69233()
{
    int I;

    if (l_U744[l_U740] == 0)
    {
        sub_69261();
        CHANGE_BLIP_DISPLAY( l_U1571, 4 );
        CHANGE_BLIP_DISPLAY( l_U1572, 4 );
        sub_7469( "PM3_PFOLLO", "PM3AUD", ref l_U818, 8, 1 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U927 );
        for ( I = 0; I <= 7; I++ )
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U928[I]._fU0 );
        }
        OPEN_SEQUENCE_TASK( ref l_U906 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 10.04750000, -449.68390000, 13.75170000, 4, 60000, 0.50000000 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 40.00000000 );
        CLOSE_SEQUENCE_TASK( l_U906 );
        OPEN_SEQUENCE_TASK( ref l_U900 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 8.31320000, -454.03700000, 13.74980000, 4, 60000, 0.50000000 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 40.00000000 );
        CLOSE_SEQUENCE_TASK( l_U900 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1530 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1530, 8.31320000, -454.03700000, 13.74980000, 1.60000000 );
            TASK_PERFORM_SEQUENCE( l_U1530, l_U900 );
            CLEAR_SEQUENCE_TASK( l_U900 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1531 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1531, 10.04750000, -449.68390000, 13.75170000, 1.60000000 );
            TASK_PERFORM_SEQUENCE( l_U1531, l_U906 );
            CLEAR_SEQUENCE_TASK( l_U906 );
        }
        PRINTSTRING( "Lets head to the end of the alley" );
        PRINTNL();
        if (NOT (DOES_VEHICLE_EXIST( l_U1001 )))
        {
            CREATE_CAR( -1627000575, 14.02800000, -418.44480000, 13.71720000, ref l_U1001, 1 );
            SET_CAR_HEADING( l_U1001, 94.18979000 );
            LOCK_CAR_DOORS( l_U1001, 2 );
            SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1001, 1 );
            SWITCH_CAR_SIREN( l_U1001, 1 );
            SET_SIREN_WITH_NO_DRIVER( l_U1001, 1 );
            FORCE_CAR_LIGHTS( l_U1001, 2 );
        }
        sub_63039( 12.86170000, -417.28970000, 13.69100000, ref l_U1002[0], 1, 1, 0 );
        sub_63039( 15.27960000, -417.11880000, 13.62250000, ref l_U1002[1], 1, 1, 0 );
        sub_63039( 19.93280000, -426.19980000, 13.76290000, ref l_U1002[2], 1, 0, 0 );
        sub_63039( 20.76930000, -457.83080000, 13.76640000, ref l_U1002[3], 0, 1, 0 );
        sub_63039( 8.09710000, -460.04250000, 13.74890000, ref l_U1002[8], 0, 1, 0 );
        sub_7387();
        SETTIMERA( 0 );
        l_U563[2] = 1;
        l_U744[l_U740] = 1;
    }
    if ((l_U563[5] == 0) AND (NOT (sub_8970( l_U818 ))))
    {
        PRINT_NOW( "BJFLLOW", 7500, 1 );
        l_U563[5] = 1;
    }
    if ((l_U563[0] == 0) AND ((sub_63578( l_U1001 )) < 800))
    {
        EXPLODE_CAR( l_U1001, 1, 0 );
        l_U563[0] = 1;
    }
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U1531, 8.31320000, -454.03700000, 13.74980000, 2.00000000, 2.00000000, 2.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U1530, 8.31320000, -454.03700000, 13.74980000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (((sub_64296( l_U1531, l_U906 )) > 0) || ((sub_64296( l_U1530, l_U900 )) > 0))))
    {
        if (l_U817 == 0)
        {
            CHANGE_BLIP_DISPLAY( l_U1571, 2 );
            CHANGE_BLIP_DISPLAY( l_U1572, 2 );
            PRINT_NOW( "BJFLLO2", 7500, 1 );
            l_U817 = 1;
        }
    }
    for ( I = 0; I <= 3; I++ )
    {
        if (IS_CHAR_INJURED( l_U1002[I]._fU0 ))
        {
            if (DOES_BLIP_EXIST( l_U1002[I]._fU24 ))
            {
                REMOVE_BLIP( l_U1002[I]._fU24 );
            }
        }
    }
    sub_67620();
    sub_66542();
    sub_52323( 0 );
    sub_53971( 0 );
    sub_66738();
    sub_67321( 28.00000000, 15000 );
    if ((l_U563[4] == 0) AND ((IS_CHAR_INJURED( l_U1002[2]._fU0 )) AND ((IS_CHAR_INJURED( l_U1002[1]._fU0 )) AND ((IS_CHAR_INJURED( l_U1002[0]._fU0 )) AND (l_U563[2] == 1)))))
    {
        for ( I = 0; I <= 8; I++ )
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1002[I]._fU0 );
            REMOVE_BLIP( l_U1002[I]._fU24 );
        }
        CHANGE_BLIP_DISPLAY( l_U1571, 4 );
        CHANGE_BLIP_DISPLAY( l_U1572, 4 );
        l_U740++;
    }
    return;
}

void sub_69261()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 45; I++ )
    {
        if (DOES_CHAR_EXIST( l_U1585[I]._fU20 ))
        {
            DELETE_CHAR( ref l_U1585[I]._fU20 );
        }
        if (DOES_OBJECT_EXIST( l_U1585[I]._fU0 ))
        {
            DELETE_OBJECT( ref l_U1585[I]._fU0 );
        }
    }
    return;
}

void sub_70821()
{
    int I;

    if (l_U744[l_U740] == 0)
    {
        sub_63039( -28.64200000, -408.40000000, 13.81080000, ref l_U1143, 0, 1, 0 );
        sub_63039( 48.59410000, -406.18980000, 13.77460000, ref l_U1151, 0, 1, 0 );
        sub_63039( 50.09630000, -409.54340000, 13.78810000, ref l_U1159, 0, 1, 0 );
        sub_63039( -28.67430000, -405.27740000, 13.75370000, ref l_U1167, 0, 1, 0 );
        OPEN_SEQUENCE_TASK( ref l_U901 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 19.01610000, -419.10190000, 14.71570000, 4, 60000, 2.00000000 );
        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 3.60190000, -398.48170000, 13.68280000, 3, 1.00000000, 2.00000000, l_U1151._fU0, 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -7.50110000, -378.59850000, 14.76580000, 4, 60000, 0.50000000 );
        TASK_SEEK_COVER_TO_COORDS( 0, -7.50110000, -378.59850000, 14.76580000, -0.98940000, -349.66090000, 13.74880000, 4000 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 100.00000000 );
        CLOSE_SEQUENCE_TASK( l_U901 );
        OPEN_SEQUENCE_TASK( ref l_U907 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 10.68620000, -418.73530000, 14.68480000, 4, 60000, 2.00000000 );
        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -2.79500000, -397.73680000, 14.62890000, 3, 1.00000000, 2.00000000, l_U1143._fU0, 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 6.35730000, -376.78510000, 14.76860000, 4, 60000, 0.50000000 );
        TASK_SEEK_COVER_TO_COORDS( 0, 6.35730000, -376.78510000, 14.76860000, -0.98940000, -349.66090000, 13.74880000, 4000 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 100.00000000 );
        CLOSE_SEQUENCE_TASK( l_U907 );
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            CLEAR_CHAR_TASKS( l_U1531 );
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1531 );
            TASK_PERFORM_SEQUENCE( l_U1531, l_U907 );
            CLEAR_SEQUENCE_TASK( l_U907 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            CLEAR_CHAR_TASKS( l_U1530 );
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1530 );
            TASK_PERFORM_SEQUENCE( l_U1530, l_U901 );
            CLEAR_SEQUENCE_TASK( l_U901 );
        }
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1001 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1002[0]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1002[1]._fU0 );
        REQUEST_CAR_RECORDING( 797 );
        REQUEST_CAR_RECORDING( 798 );
        REQUEST_CAR_RECORDING( 1989 );
        REQUEST_MODEL( -1900572838 );
        REQUEST_MODEL( 148777611 );
        REQUEST_MODEL( -1004762946 );
        REQUEST_MODEL( -1627000575 );
        sub_7387();
        l_U563[4] = 1;
        CLEAR_AREA_OF_CARS( -0.34610000, -305.17480000, 13.62500000, 25.00000000 );
        sub_7469( "PM3_DOWN", "PM3AUD", ref l_U818, 8, 1 );
        SETTIMERA( 0 );
        l_U744[l_U740] = 1;
    }
    if ((l_U563[11] == 0) AND (NOT (sub_8970( l_U818 ))))
    {
        PRINT_NOW( "BJFLLOW", 7500, 1 );
        l_U563[11] = 1;
    }
    if (DOES_VEHICLE_EXIST( l_U1908[42]._fU0 ))
    {
        if ((l_U563[0] == 0) AND ((sub_63578( l_U1908[42]._fU0 )) < 300))
        {
            EXPLODE_CAR( l_U1908[42]._fU0, 1, 0 );
            l_U563[0] = 1;
        }
    }
    if ((l_U563[5] == 0) AND (l_U563[4] == 1))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -0.88520000, -395.75170000, 14.75890000, 108.00000000, 3.50000000, 6.00000000, 0 ))
        {
            while ((NOT (HAS_MODEL_LOADED( -1627000575 ))) || ((NOT (HAS_MODEL_LOADED( 148777611 ))) || ((NOT (HAS_MODEL_LOADED( -1004762946 ))) || ((NOT (HAS_MODEL_LOADED( -1900572838 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1989 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 798 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 797 )))))))))
            {
                WAIT( 0 );
            }
            CREATE_CAR( 148777611, 54.81600000, -334.89230000, 14.39270000, ref l_U1076, 1 );
            SWITCH_CAR_SIREN( l_U1076, 1 );
            SET_SIREN_WITH_NO_DRIVER( l_U1076, 1 );
            FORCE_CAR_LIGHTS( l_U1076, 2 );
            sub_72129( ref l_U1076, ref l_U1078[4], 0 );
            sub_72376( ref l_U1076, ref l_U1078[5], 0, 0 );
            SET_CAR_COLLISION( l_U1076, 0 );
            LOCK_CAR_DOORS( l_U1076, 3 );
            CREATE_CAR( -1900572838, -13.30870000, -314.60550000, 14.26200000, ref l_U1075, 1 );
            SET_SIREN_WITH_NO_DRIVER( l_U1075, 1 );
            FORCE_CAR_LIGHTS( l_U1075, 2 );
            sub_72129( ref l_U1075, ref l_U1078[0], 0 );
            sub_72376( ref l_U1075, ref l_U1078[1], 0, 0 );
            sub_72376( ref l_U1075, ref l_U1078[3], 2, 0 );
            LOCK_CAR_DOORS( l_U1075, 3 );
            CREATE_CAR( -1627000575, -31.23570000, -307.31240000, 14.37980000, ref l_U1077, 1 );
            SET_SIREN_WITH_NO_DRIVER( l_U1077, 1 );
            FORCE_CAR_LIGHTS( l_U1077, 2 );
            sub_72129( ref l_U1077, ref l_U1078[6], 0 );
            sub_72376( ref l_U1077, ref l_U1078[7], 0, 0 );
            LOCK_CAR_DOORS( l_U1077, 3 );
            START_PLAYBACK_RECORDED_CAR( l_U1075, 797 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1075, 0.00000000 );
            START_PLAYBACK_RECORDED_CAR( l_U1076, 798 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1076, 500.00000000 );
            START_PLAYBACK_RECORDED_CAR( l_U1077, 1989 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1077, 1800.00000000 );
            SET_PLAYBACK_SPEED( l_U1077, 1.35000000 );
            sub_7469( "PM3_NOOSE", "PM3AUD", ref l_U818, 8, 1 );
            l_U563[5] = 1;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U1077 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1077 ))
        {
            if ((l_U563[10] == 0) AND ((sub_63578( l_U1077 )) < 900))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U1077 );
                OPEN_SEQUENCE_TASK( ref l_U910 );
                TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U1077 );
                TASK_SEEK_COVER_FROM_PED( 0, l_U628, 4000 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 200.00000000 );
                CLOSE_SEQUENCE_TASK( l_U910 );
                for ( I = 6; I <= 7; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U1078[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1078[I]._fU0, l_U910 );
                        CHANGE_BLIP_DISPLAY( l_U1078[I]._fU24, 4 );
                    }
                }
                CLEAR_SEQUENCE_TASK( l_U910 );
                l_U563[10] = 1;
            }
        }
        else if ((l_U563[10] == 0) AND (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1077 ))))
        {
            OPEN_SEQUENCE_TASK( ref l_U910 );
            TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U1077 );
            TASK_SEEK_COVER_FROM_PED( 0, l_U628, 10000 );
            TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 200.00000000 );
            CLOSE_SEQUENCE_TASK( l_U910 );
            for ( I = 6; I <= 7; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U1078[I]._fU0 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U1078[I]._fU0, l_U910 );
                    CHANGE_BLIP_DISPLAY( l_U1078[I]._fU24, 4 );
                }
            }
            CLEAR_SEQUENCE_TASK( l_U910 );
            l_U563[10] = 1;
        }
    }
    if ((l_U563[6] == 0) AND (l_U563[5] == 1))
    {
        if (NOT (IS_CAR_DEAD( l_U1075 )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1075 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U910 );
                TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U1075 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR_TIMED( 0, 200.00000000, 6000 );
                TASK_SEEK_COVER_FROM_PED( 0, l_U628, 10000 );
                CLOSE_SEQUENCE_TASK( l_U910 );
                for ( I = 0; I <= 3; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U1078[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1078[I]._fU0, l_U910 );
                        CHANGE_BLIP_DISPLAY( l_U1078[I]._fU24, 4 );
                    }
                }
                CLEAR_SEQUENCE_TASK( l_U910 );
                SETTIMERA( 0 );
                l_U563[6] = 1;
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U1076 ))
    {
        if (NOT (IS_CAR_DEAD( l_U1076 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1076 ))
            {
                if ((FIND_TIME_POSITION_IN_RECORDING( l_U1076 )) > 6000.00000000)
                {
                    SET_CAR_COLLISION( l_U1076, 1 );
                }
            }
        }
    }
    if ((l_U563[9] == 0) AND (l_U563[5] == 1))
    {
        if (NOT (IS_CAR_DEAD( l_U1076 )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1076 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U910 );
                TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U1076 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 120.00000000 );
                CLOSE_SEQUENCE_TASK( l_U910 );
                for ( I = 4; I <= 5; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U1078[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1078[I]._fU0, l_U910 );
                        CHANGE_BLIP_DISPLAY( l_U1078[I]._fU24, 4 );
                    }
                }
                CLEAR_SEQUENCE_TASK( l_U910 );
                CHANGE_BLIP_DISPLAY( l_U1571, 2 );
                CHANGE_BLIP_DISPLAY( l_U1572, 2 );
                if (NOT (IS_CAR_DEAD( l_U1076 )))
                {
                    SET_CAR_COLLISION( l_U1076, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 148777611 );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1076 );
                }
                sub_74150( 19.83530000, -355.77650000, 13.75980000, ref l_U1175[3], 0 );
                sub_74150( 22.66550000, -336.92300000, 13.76000000, ref l_U1175[4], 0 );
                sub_63039( 27.93690000, -350.45680000, 13.94790000, ref l_U1175[5], 0, 1, 0 );
                l_U766 = 1;
                sub_74521( 21.87760000, -352.12240000, 18.54830000, ref l_U1175[6], 50 );
                sub_74521( 21.14570000, -340.79570000, 23.25730000, ref l_U1175[7], 50 );
                sub_7469( "PM3_DCOPS", "PM3AUD", ref l_U818, 8, 1 );
                PRINT_NOW( "BJFLLO2", 7500, 1 );
                SETTIMERB( 0 );
                l_U563[9] = 1;
            }
        }
    }
    if ((l_U563[12] == 0) AND ((TIMERB() > 7500) AND (l_U563[9] == 1)))
    {
        PRINT_NOW( "BJFLLO2", 7500, 1 );
        l_U563[12] = 1;
    }
    for ( I = 0; I <= 7; I++ )
    {
        if (IS_CHAR_INJURED( l_U1078[I]._fU0 ))
        {
            if (DOES_BLIP_EXIST( l_U1078[I]._fU24 ))
            {
                REMOVE_BLIP( l_U1078[I]._fU24 );
            }
        }
        else
        {
            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U1078[I]._fU0, -4.26240000, -356.42800000, 26.19960000, 3.18030000, -325.41420000, 14.69960000, 15.00000000 );
            if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 17.30190000, -351.13230000, 14.63650000, 14.00000000, 18.00000000, 1.00000000, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U628, -0.84180000, -357.92340000, 14.76190000, 14.00000000, 48.00000000, 1.00000000, 0 ))))
            {
                REMOVE_BLIP( l_U1078[I]._fU24 );
                DAMAGE_CHAR( l_U1078[I]._fU0, 400, 1 );
            }
        }
    }
    sub_67620();
    sub_66542();
    sub_52323( 0 );
    sub_53971( 0 );
    sub_66738();
    sub_67321( 39.50000000, 18000 );
    if ((IS_CHAR_INJURED( l_U1078[7]._fU0 )) AND ((IS_CHAR_INJURED( l_U1078[6]._fU0 )) AND ((IS_CHAR_INJURED( l_U1078[5]._fU0 )) AND ((IS_CHAR_INJURED( l_U1078[4]._fU0 )) AND ((IS_CHAR_INJURED( l_U1078[3]._fU0 )) AND ((IS_CHAR_INJURED( l_U1078[2]._fU0 )) AND ((IS_CHAR_INJURED( l_U1078[1]._fU0 )) AND ((IS_CHAR_INJURED( l_U1078[0]._fU0 )) AND ((l_U563[7] == 0) AND (l_U563[5] == 1))))))))))
    {
        DELETE_CHAR( ref l_U1143._fU0 );
        DELETE_CHAR( ref l_U1151._fU0 );
        DELETE_CHAR( ref l_U1159._fU0 );
        DELETE_CHAR( ref l_U1167._fU0 );
        CHANGE_BLIP_DISPLAY( l_U1571, 4 );
        CHANGE_BLIP_DISPLAY( l_U1572, 4 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1076 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1078[4]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1078[5]._fU0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1075 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1078[0]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1078[1]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1078[3]._fU0 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1077 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1078[6]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1078[7]._fU0 );
        l_U740++;
        l_U563[7] = 1;
    }
    return;
}

void sub_72129(unknown uParam0, int iParam1, boolean bParam2)
{
    CREATE_CHAR_INSIDE_CAR( (uParam0^), 26, -1004762946, iParam1 + 0 );
    SET_CHAR_RELATIONSHIP( iParam1->_fU0, 5, 0 );
    GIVE_WEAPON_TO_CHAR( iParam1->_fU0, 15, 170, 0 );
    SET_COMBAT_DECISION_MAKER( iParam1->_fU0, l_U1580 );
    SET_CHAR_IS_TARGET_PRIORITY( iParam1->_fU0, 1 );
    ADD_BLIP_FOR_CHAR( iParam1->_fU0, iParam1 + 24 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U788 );
    SET_CHAR_PROP_INDEX( iParam1->_fU0, 0, l_U788 );
    if (bParam2)
    {
        CHANGE_BLIP_DISPLAY( iParam1->_fU24, 4 );
    }
    else
    {
        CHANGE_BLIP_DISPLAY( iParam1->_fU24, 0 );
    }
    SET_BLIP_AS_FRIENDLY( iParam1->_fU24, 0 );
    SET_CHAR_IS_TARGET_PRIORITY( iParam1->_fU0, 1 );
    SET_CHAR_NAME_DEBUG( iParam1->_fU0, "SwatDriver" );
    return;
}

void sub_72376(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3)
{
    CREATE_CHAR_AS_PASSENGER( (uParam0^), 26, -1004762946, uParam2, iParam1 + 0 );
    SET_CHAR_RELATIONSHIP( iParam1->_fU0, 5, 0 );
    GIVE_WEAPON_TO_CHAR( iParam1->_fU0, 15, 170, 0 );
    SET_COMBAT_DECISION_MAKER( iParam1->_fU0, l_U1580 );
    SET_CHAR_IS_TARGET_PRIORITY( iParam1->_fU0, 1 );
    ADD_BLIP_FOR_CHAR( iParam1->_fU0, iParam1 + 24 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U788 );
    SET_CHAR_PROP_INDEX( iParam1->_fU0, 0, l_U788 );
    if (bParam3)
    {
        CHANGE_BLIP_DISPLAY( iParam1->_fU24, 4 );
    }
    else
    {
        CHANGE_BLIP_DISPLAY( iParam1->_fU24, 0 );
    }
    SET_BLIP_AS_FRIENDLY( iParam1->_fU24, 0 );
    SET_CHAR_IS_TARGET_PRIORITY( iParam1->_fU0, 1 );
    SET_CHAR_NAME_DEBUG( iParam1->_fU0, "AnPass" );
    SET_CHAR_ACCURACY( iParam1->_fU0, 26 );
    return;
}

void sub_74150(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, boolean bParam4)
{
    if (iParam3->_fU28 == 0)
    {
        CREATE_CHAR( 26, -183203150, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam3 + 0, 1 );
        SET_CHAR_RELATIONSHIP( iParam3->_fU0, 5, 0 );
        GIVE_WEAPON_TO_CHAR( iParam3->_fU0, 7, 120, 0 );
        SET_COMBAT_DECISION_MAKER( iParam3->_fU0, l_U1581 );
        ADD_BLIP_FOR_CHAR( iParam3->_fU0, iParam3 + 24 );
        SET_CHAR_PROP_INDEX( iParam3->_fU0, 0, 0 );
        if (bParam4)
        {
            CHANGE_BLIP_DISPLAY( iParam3->_fU24, 4 );
        }
        else
        {
            CHANGE_BLIP_DISPLAY( iParam3->_fU24, 0 );
        }
        SET_BLIP_AS_FRIENDLY( iParam3->_fU24, 0 );
        SET_CHAR_IS_TARGET_PRIORITY( iParam3->_fU0, 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam3->_fU0 );
        SET_CHAR_NAME_DEBUG( iParam3->_fU0, "NrmlCop" );
        SET_CHAR_ACCURACY( iParam3->_fU0, 25 );
        iParam3->_fU28 = 1;
    }
    else if (bParam4)
    {
        CHANGE_BLIP_DISPLAY( iParam3->_fU24, 4 );
    }
    return;
}

void sub_74521(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    if (iParam3->_fU28 == 0)
    {
        CREATE_CHAR( 26, -1004762946, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam3 + 0, 1 );
        SET_CHAR_RELATIONSHIP( iParam3->_fU0, 5, 0 );
        GIVE_WEAPON_TO_CHAR( iParam3->_fU0, 15, 120, 0 );
        SET_COMBAT_DECISION_MAKER( iParam3->_fU0, l_U1583 );
        SET_CHAR_NAME_DEBUG( iParam3->_fU0, "AStatSwat" );
        SET_CHAR_ACCURACY( iParam3->_fU0, 25 );
        SET_CHAR_PROP_INDEX( iParam3->_fU0, 0, 0 );
        iParam3->_fU28 = 1;
    }
    return;
}

void sub_75608()
{
    int I;

    if (l_U744[l_U740] == 0)
    {
        sub_74150( 19.83530000, -355.77650000, 13.75980000, ref l_U1175[3], 1 );
        sub_74150( 22.66550000, -336.92300000, 13.76000000, ref l_U1175[4], 1 );
        sub_63039( 27.93690000, -350.45680000, 13.94790000, ref l_U1175[5], 1, 1, 0 );
        sub_74521( 21.87760000, -352.12240000, 18.54830000, ref l_U1175[6], 50 );
        sub_74521( 21.14570000, -340.79570000, 23.25730000, ref l_U1175[7], 50 );
        OPEN_SEQUENCE_TASK( ref l_U908 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 5.54410000, -363.15720000, 13.76290000, 4, 60000, 0.50000000 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 50.00000000 );
        CLOSE_SEQUENCE_TASK( l_U908 );
        OPEN_SEQUENCE_TASK( ref l_U902 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 13.87700000, -342.97390000, 13.76210000, 4, 60000, 0.50000000 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 50.00000000 );
        CLOSE_SEQUENCE_TASK( l_U902 );
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            TASK_PERFORM_SEQUENCE( l_U1531, l_U908 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            TASK_PERFORM_SEQUENCE( l_U1530, l_U902 );
        }
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        sub_7469( "PM3_CHINA", "PM3BAUD", ref l_U818, 8, 1 );
        CLEAR_AREA_OF_CARS( 81.28050000, -346.79660000, 13.75500000, 20.00000000 );
        sub_7387();
        l_U563[7] = 1;
        l_U744[l_U740] = 1;
    }
    if ((l_U563[0] == 0) AND (TIMERB() > 7500))
    {
        PRINT_NOW( "BJFLLOW", 7500, 1 );
        l_U563[0] = 1;
    }
    if ((l_U1175[l_U1240]._fU20 == 0) AND ((l_U1240 < 3) AND (TIMERA() > 1000)))
    {
        sub_68227( 30.20180000, -336.14660000, 13.75310000, 25.28590000, -345.95120000, 13.68310000, ref l_U1175[l_U1240], 1, 15 );
        l_U1240++;
        SETTIMERA( 0 );
        l_U1175[l_U1240]._fU20 = 1;
    }
    for ( I = 0; I <= 7; I++ )
    {
        if (IS_CHAR_INJURED( l_U1175[I]._fU0 ))
        {
            if (DOES_BLIP_EXIST( l_U1175[I]._fU24 ))
            {
                REMOVE_BLIP( l_U1175[I]._fU24 );
            }
        }
    }
    if ((l_U563[8] == 0) AND ((l_U563[7] == 1) AND ((IS_CHAR_INJURED( l_U1175[5]._fU0 )) AND ((IS_CHAR_INJURED( l_U1175[4]._fU0 )) AND ((IS_CHAR_INJURED( l_U1175[3]._fU0 )) AND ((IS_CHAR_INJURED( l_U1175[2]._fU0 )) AND ((IS_CHAR_INJURED( l_U1175[1]._fU0 )) AND (IS_CHAR_INJURED( l_U1175[0]._fU0 )))))))))
    {
        sub_63039( 70.04230000, -332.29690000, 14.19950000, ref l_U1241, 0, 1, 0 );
        sub_63039( 61.16210000, -365.13750000, 13.64910000, ref l_U1249, 0, 1, 0 );
        OPEN_SEQUENCE_TASK( ref l_U909 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 43.83320000, -342.46350000, 13.61650000, 4, 60000, 0.50000000 );
        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 65.22200000, -344.09900000, 14.76630000, 3, 1.00000000, 2.00000000, l_U1241._fU0, 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 81.28050000, -346.79660000, 13.75500000, 4, 60000, 0.50000000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U628 );
        TASK_TOGGLE_DUCK( 0, 1 );
        TASK_LOOK_AT_CHAR( 0, l_U628, 10000, 0 );
        CLOSE_SEQUENCE_TASK( l_U909 );
        OPEN_SEQUENCE_TASK( ref l_U903 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 43.15300000, -338.57160000, 13.65160000, 4, 60000, 0.50000000 );
        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 66.03230000, -348.17170000, 13.76130000, 3, 1.00000000, 2.00000000, l_U1249._fU0, 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 84.13680000, -346.24960000, 13.75580000, 4, 60000, 0.50000000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U628 );
        TASK_LOOK_AT_COORD( 0, 79.83000000, -345.00000000, 28.00000000, 10000, 0 );
        CLOSE_SEQUENCE_TASK( l_U903 );
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            CLEAR_CHAR_TASKS( l_U1531 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1531, 1 );
            TASK_PERFORM_SEQUENCE( l_U1531, l_U909 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            CLEAR_CHAR_TASKS( l_U1530 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1530, 1 );
            TASK_PERFORM_SEQUENCE( l_U1530, l_U903 );
        }
        sub_7469( "PM3_ALLEY", "PM3AUD", ref l_U818, 8, 1 );
        SETTIMERA( 0 );
        l_U563[8] = 1;
    }
    if ((l_U563[0] == 0) AND (TIMERA() > 7500))
    {
        PRINT_NOW( "BJFLLOW", 7500, 1 );
        l_U563[0] = 1;
    }
    sub_67620();
    sub_66542();
    sub_52323( 0 );
    sub_53971( 0 );
    sub_66738();
    sub_67321( 42.00000000, 17000 );
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 81.28050000, -346.79660000, 13.75500000, 3.00000000, 3.00000000, 3.00000000, 0 ))
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        l_U740++;
    }
    return;
}

void sub_77293()
{
    int I;
    unknown uVar3;
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
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    if (l_U744[l_U740] == 0)
    {
        for ( I = 0; I <= 7; I++ )
        {
            DELETE_CHAR( ref l_U1175[I]._fU0 );
            DELETE_CHAR( ref l_U1078[I]._fU0 );
        }
        sub_69261();
        sub_77383();
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2046537925 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1627000575 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 148777611 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1900572838 );
        DELETE_CHAR( ref l_U1249._fU0 );
        DELETE_CHAR( ref l_U1241._fU0 );
        TASK_SWAP_WEAPON( l_U628, 1 );
        CLEAR_AREA( 93.90400000, -345.42810000, 13.61020000, 240.00000000, 0 );
        ADD_SCENARIO_BLOCKING_AREA( 85.00000000, -350.00000000, 13.00000000, 100.90000000, -323.00000000, 20.00000000 );
        ADD_SCENARIO_BLOCKING_AREA( 66.86000000, -319.15000000, -6.95000000, 137.60000000, -222.31000000, 8.14999900 );
        SET_PED_NON_CREATION_AREA( 66.86000000, -319.15000000, -6.95000000, 137.60000000, -222.31000000, 8.14999900 );
        SWITCH_RANDOM_TRAINS( 0 );
        sub_7387();
        REQUEST_MODEL( 837858166 );
        REQUEST_MODEL( -1004762946 );
        REQUEST_MODEL( -183203150 );
        REQUEST_CAR_RECORDING( 799 );
        while ((NOT (HAS_MODEL_LOADED( -183203150 ))) || ((NOT (HAS_MODEL_LOADED( -1004762946 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 799 ))) || (NOT (HAS_MODEL_LOADED( 837858166 ))))))
        {
            WAIT( 0 );
        }
        SET_CHAR_COORDINATES( l_U628, 81.73941000, -347.23170000, 13.75790000 );
        SET_CHAR_HEADING( l_U628, 281.62800000 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            TASK_CLEAR_LOOK_AT( l_U1530 );
            SET_CHAR_COORDINATES( l_U1530, 84.57530000, -346.87980000, 12.75790000 );
            SET_CHAR_HEADING( l_U1530, 279.78060000 );
            UNLOCK_RAGDOLL( l_U1530, 0 );
            TASK_SWAP_WEAPON( l_U1530, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            TASK_CLEAR_LOOK_AT( l_U1531 );
            CLEAR_CHAR_TASKS( l_U1531 );
            SET_CHAR_COORDINATES( l_U1531, 86.84671000, -346.62510000, 12.72980000 );
            SET_CHAR_HEADING( l_U1531, 274.20480000 );
            UNLOCK_RAGDOLL( l_U1531, 0 );
            TASK_SWAP_WEAPON( l_U1531, 1 );
        }
        CREATE_CAR( 837858166, 73.39030000, -307.60770000, 26.57660000, ref l_U1257, 1 );
        SET_VEHICLE_QUATERNION( l_U1257, -0.02280000, 0.09240000, 0.96890000, -0.22840000 );
        START_PLAYBACK_RECORDED_CAR( l_U1257, 799 );
        SET_CAR_ENGINE_ON( l_U1257, 1, 1 );
        SET_HELI_BLADES_FULL_SPEED( l_U1257 );
        SET_CAR_PROOFS( l_U1257, 1, 1, 1, 1, 1 );
        SET_CAR_COLLISION( l_U1257, 0 );
        CREATE_CHAR( 26, -1004762946, -1533.67100000, 146.55900000, 34.56950000, ref l_U1258, 1 );
        GIVE_WEAPON_TO_CHAR( l_U1258, 15, 30000, 0 );
        SET_CHAR_RELATIONSHIP( l_U1258, 5, 0 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1258, l_U1257, 2 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U1258, 0 );
        SET_CHAR_WILL_USE_COVER( l_U1258, 0 );
        SET_SENSE_RANGE( l_U1258, 100.00000000 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U1258, 0 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U788 );
        SET_CHAR_PROP_INDEX( l_U1258, 0, l_U788 );
        CREATE_CHAR( 26, -1004762946, -1533.67100000, 146.55900000, 34.56950000, ref l_U1259, 1 );
        GIVE_WEAPON_TO_CHAR( l_U1259, 15, 30000, 0 );
        SET_CHAR_RELATIONSHIP( l_U1259, 5, 0 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1259, l_U1257, 1 );
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U1259, 0 );
        SET_CHAR_WILL_USE_COVER( l_U1259, 0 );
        SET_SENSE_RANGE( l_U1259, 100.00000000 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U1259, 0 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U788 );
        SET_CHAR_PROP_INDEX( l_U1259, 0, l_U788 );
        sub_72129( ref l_U1257, ref l_U1260, 0 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U1260._fU0, 0 );
        SET_HELI_BLADES_FULL_SPEED( l_U1257 );
        ATTACH_CAM_TO_VEHICLE( l_U626, l_U1257 );
        SET_CAM_ATTACH_OFFSET( l_U626, 1.90000000, 0.00000000, -1.10000000 );
        SET_CAM_FOV( l_U626, 45.00000000 );
        POINT_CAM_AT_COORD( l_U626, 92.93310000, -345.38020000, 13.61020000 );
        sub_15944( 1 );
        sub_15887( ref l_U626, 1 );
        DO_SCREEN_FADE_IN( 500 );
        SETTIMERA( 0 );
        l_U744[l_U740] = 1;
    }
    if ((TIMERA() > 0) AND (l_U563[0] == 0))
    {
        if (NOT (IS_CAR_DEAD( l_U1257 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U911 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 92.93310000, -345.38020000, 13.61020000, 3, 10000, 0.50000000 );
            TASK_LOOK_AT_VEHICLE( 0, l_U1257, 10000, 0 );
            TASK_ACHIEVE_HEADING( 0, 10.83440000 );
            TASK_PLAY_ANIM( 0, "SEE_HELI_A", "missbankjob", 8.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U911 );
            TASK_PERFORM_SEQUENCE( l_U628, l_U911 );
            CLEAR_SEQUENCE_TASK( l_U911 );
        }
        WAIT( 100 );
        if (NOT (IS_CAR_DEAD( l_U1257 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U1531 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U912 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 94.47240000, -345.57590000, 14.61020000, 3, 60000, 0.50000000 );
                TASK_LOOK_AT_VEHICLE( 0, l_U1257, 10000, 0 );
                TASK_ACHIEVE_HEADING( 0, 35.83440000 );
                TASK_PLAY_ANIM( 0, "SEE_HELI_B", "missbankjob", 8.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U912 );
                TASK_PERFORM_SEQUENCE( l_U1531, l_U912 );
                CLEAR_SEQUENCE_TASK( l_U911 );
            }
        }
        WAIT( 100 );
        if (NOT (IS_CAR_DEAD( l_U1257 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U1530 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U913 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 94.20000000, -346.10000000, 13.61020000, 3, 60000, 0.50000000 );
                TASK_LOOK_AT_VEHICLE( 0, l_U1257, 10000, 0 );
                TASK_ACHIEVE_HEADING( 0, 20.83440000 );
                CLOSE_SEQUENCE_TASK( l_U913 );
                TASK_PERFORM_SEQUENCE( l_U1530, l_U913 );
                CLEAR_SEQUENCE_TASK( l_U913 );
            }
        }
        l_U563[0] = 1;
    }
    if ((l_U563[7] == 0) AND (TIMERA() > 6450))
    {
        sub_7469( "PM3_CHOP", "PM3BAUD", ref l_U818, 8, 1 );
        l_U563[7] = 1;
    }
    if ((l_U563[4] == 0) AND ((sub_79480( l_U818 )) == 1))
    {
        sub_79570( ref l_U818 );
    }
    if ((l_U563[1] == 0) AND (TIMERA() > 7000))
    {
        UNATTACH_CAM( l_U626 );
        UNPOINT_CAM( l_U626 );
        SET_CAM_POS( l_U626, 95.60021000, -348.46070000, 14.08304000 );
        SET_CAM_ROT( l_U626, 20.55206000, 0.00000000, 15.85918000 );
        SET_CAM_FOV( l_U626, 45.00000000 );
        SET_CHAR_COORDINATES( l_U628, 92.93310000, -345.38020000, 13.61020000 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            SET_CHAR_COORDINATES( l_U1530, 94.20000000, -346.10000000, 13.61020000 );
            SET_CHAR_HEADING( l_U1530, 20.83440000 );
            SET_CHAR_PROOFS( l_U1530, 1, 1, 1, 1, 1 );
            TASK_PLAY_ANIM( l_U1530, "SEE_HELI_A", "missbankjob", 8.00000000, 0, 0, 0, 0, -1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            SET_CHAR_COORDINATES( l_U1531, 94.87240000, -345.57590000, 13.61020000 );
            SET_CHAR_HEADING( l_U1531, 35.83440000 );
            SET_CHAR_PROOFS( l_U1531, 1, 1, 1, 1, 1 );
            TASK_PLAY_ANIM( l_U1531, "SEE_HELI_C", "missbankjob", 8.00000000, 0, 1, 1, 0, -1 );
        }
        SET_CHAR_HEADING( l_U628, 10.83440000 );
        TASK_PLAY_ANIM( l_U628, "SEE_HELI_B", "missbankjob", 8.00000000, 0, 0, 0, 0, -1 );
        l_U563[1] = 1;
    }
    if ((l_U563[2] == 0) AND (TIMERA() > 10000))
    {
        OPEN_SEQUENCE_TASK( ref uVar3 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 96.33230000, -322.66700000, 13.61130000, 4, 10000, 0.50000000 );
        TASK_GO_STRAIGHT_TO_COORD( 0, 112.99090000, -322.29080000, 13.76230000, 4, 10000 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        TASK_PERFORM_SEQUENCE( l_U628, uVar3 );
        CLEAR_SEQUENCE_TASK( uVar3 );
        WAIT( 430 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1530, 104.26710000, -318.29000000, 10.75960000, 3, 30000, 0.50000000 );
        }
        WAIT( 200 );
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar4 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 99.09700000, -324.82980000, 13.61290000, 4, 30000, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 98.23790000, -317.39540000, 10.75530000, 4, 30000, 0.50000000 );
            CLOSE_SEQUENCE_TASK( uVar4 );
            TASK_PERFORM_SEQUENCE( l_U1531, uVar4 );
            CLEAR_SEQUENCE_TASK( uVar4 );
        }
        SET_CAM_POS( l_U621, 86.13814000, -319.28710000, 39.22800000 );
        SET_CAM_ROT( l_U621, -55.65136000, 0.00000000, -125.84390000 );
        SET_CAM_FOV( l_U621, 45.00000000 );
        SET_CAM_POS( l_U623, 86.13814000, -320.24710000, 39.22800000 );
        SET_CAM_ROT( l_U623, -58.63074000, -0.00000000, -107.50930000 );
        SET_CAM_FOV( l_U623, 45.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 4000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U624, 0, 0, 1, 1 );
        sub_15887( ref l_U624, 1 );
        sub_15887( ref l_U626, 0 );
        l_U563[2] = 1;
    }
    if ((l_U563[3] == 0) AND (TIMERA() > 14000))
    {
        SET_TIME_SCALE( 0.50000000 );
        SET_CAM_POS( l_U621, 92.49062000, -331.71920000, 13.85990000 );
        SET_CAM_ROT( l_U621, 7.83235400, -0.00000000, -39.78572000 );
        SET_CAM_FOV( l_U621, 34.20003000 );
        SET_CAM_POS( l_U623, 94.39678000, -323.22190000, 13.79601000 );
        SET_CAM_ROT( l_U623, 10.35337000, -0.00000000, -72.55891000 );
        SET_CAM_FOV( l_U623, 34.20003000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 5000, 0 );
        sub_15887( ref l_U624, 1 );
        sub_15887( ref l_U626, 0 );
        l_U563[3] = 1;
    }
    if ((TIMERB() > 5) AND ((l_U563[4] == 0) AND (l_U563[3] == 1)))
    {
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U1531, sub_81283( -0.50000000, 0.50000000 ), sub_81283( -0.90000000, -1.40000000 ), 0.00000000, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( uVar5._fU0, uVar5._fU4, uVar5._fU8, ref uVar5._fU8 );
        }
        WAIT( 5 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U1530, sub_81283( -0.95000000, -0.50000000 ), 0.00000000, 0.00000000, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU8 );
        }
        WAIT( 5 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U1530, sub_81283( -0.95000000, -0.50000000 ), 0.00000000, 0.00000000, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( uVar11._fU0, uVar11._fU4, uVar11._fU8, ref uVar11._fU8 );
        }
        WAIT( 5 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U628, sub_81283( -0.95000000, -0.50000000 ), 0.00000000, 0.00000000, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( uVar14._fU0, uVar14._fU4, uVar14._fU8, ref uVar14._fU8 );
        }
        FIRE_SINGLE_BULLET( 94.11000000, -318.16000000, 22.00000000, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 );
        FIRE_SINGLE_BULLET( 94.11000000, -318.16000000, 22.00000000, uVar8._fU0, uVar8._fU4, uVar8._fU8, 0 );
        FIRE_SINGLE_BULLET( 94.11000000, -318.16000000, 22.00000000, uVar11._fU0, uVar11._fU4, uVar11._fU8, 0 );
        FIRE_SINGLE_BULLET( 94.11000000, -318.16000000, 22.00000000, uVar14._fU0, uVar14._fU4, uVar14._fU8, 0 );
        SETTIMERB( 0 );
    }
    if ((l_U563[4] == 0) AND (TIMERA() > 17000))
    {
        SET_TIME_SCALE( 1.00000000 );
        sub_34665( "PM3_CHOP", "PM3BAUD", ref l_U818, 8, 1 );
        SET_CHAR_COORDINATES( l_U628, 113.83780000, -321.85490000, 13.76320000 );
        SET_CHAR_HEADING( l_U628, 99.79050000 );
        if (NOT (IS_CHAR_DEAD( l_U1258 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar17 );
            TASK_SHOOT_AT_COORD( 0, 94.11000000, -318.16000000, 22.00000000, 4500, 5 );
            TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 117.30750000, -318.74080000, 13.77480000, 3, 0.50000000, 2.00000000, l_U1258, 0 );
            CLOSE_SEQUENCE_TASK( uVar17 );
            TASK_PERFORM_SEQUENCE( l_U628, uVar17 );
            CLEAR_SEQUENCE_TASK( uVar17 );
        }
        SET_CAM_POS( l_U626, 116.40030000, -321.23390000, 13.85886000 );
        SET_CAM_ROT( l_U626, 22.15631000, 0.00000000, 81.74922000 );
        SET_CAM_FOV( l_U626, 56.09997000 );
        sub_15887( ref l_U624, 0 );
        sub_15887( ref l_U626, 1 );
        l_U563[4] = 1;
    }
    if ((l_U563[5] == 0) AND (TIMERA() > 18500))
    {
        SET_CAM_POS( l_U626, 114.64150000, -321.45280000, 14.95371000 );
        SET_CAM_ROT( l_U626, 26.11318000, -8.24516100, 91.34303000 );
        SET_CAM_FOV( l_U626, 43.50000000 );
        l_U563[5] = 1;
    }
    if ((l_U563[6] == 0) AND (TIMERA() > 19700))
    {
        SET_CAM_POS( l_U626, 118.57680000, -317.56380000, 13.98633000 );
        SET_CAM_ROT( l_U626, 13.67653000, 0.00000000, 109.45890000 );
        SET_CAM_FOV( l_U626, 39.90001000 );
        l_U563[6] = 1;
    }
    if ((IS_SCREEN_FADED_IN()) AND (sub_14835()))
    {
        l_U777 = 1;
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
    }
    if ((l_U777 == 1) || ((NOT (sub_8970( l_U818 ))) AND (TIMERA() > 24000)))
    {
        sub_15122( ref l_U818, 0 );
        if (NOT (IS_CAR_DEAD( l_U1257 )))
        {
            SET_CAR_PROOFS( l_U1257, 0, 0, 0, 0, 0 );
            SET_CAR_COLLISION( l_U1257, 1 );
        }
        SET_CHAR_COORDINATES( l_U628, 117.30750000, -318.74080000, 13.77480000 );
        SET_CHAR_HEADING( l_U628, 99.79050000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_TIME_SCALE( 1.00000000 );
        sub_15944( 0 );
        sub_15887( ref l_U626, 0 );
        if (l_U777 == 1)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U740++;
    }
    return;
}

void sub_77383()
{
    int I;

    for ( I = 0; I <= 42; I++ )
    {
        if (DOES_CHAR_EXIST( l_U1908[I]._fU28[0]._fU0 ))
        {
            DELETE_CHAR( ref l_U1908[I]._fU28[0]._fU0 );
        }
        if (DOES_CHAR_EXIST( l_U1908[I]._fU28[1]._fU0 ))
        {
            DELETE_CHAR( ref l_U1908[I]._fU28[1]._fU0 );
        }
        DELETE_CAR( ref l_U1908[I]._fU0 );
    }
    return;
}

void sub_79480(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_8970( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

int sub_79570(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_7622( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_7622( "\n CONVERSATION PAUSED AT LINE " );
            sub_33399( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_7622( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_7622( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_7622( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_81283(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_82712()
{
    unknown uVar2;
    unknown uVar3;
    int I;

    if (l_U744[l_U740] == 0)
    {
        GET_INTERIOR_AT_COORDS( 97.21010000, -304.34920000, 10.75530000, ref uVar2 );
        ACTIVATE_INTERIOR( uVar2, 1 );
        sub_7387();
        CLEAR_AREA( 97.21010000, -304.34920000, 10.75530000, 20.00000000, 1 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1530 );
            SET_CHAR_COORDINATES( l_U1530, 91.53810000, -297.67150000, 6.75540000 );
            SET_CHAR_HEADING( l_U1530, 354.14440000 );
            SET_CHAR_PROOFS( l_U1530, 0, 0, 0, 0, 0 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1530, "GtaMloRoom40" );
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1531 );
            SET_CHAR_COORDINATES( l_U1531, 92.89250000, -295.26360000, 6.15500000 );
            SET_CHAR_HEADING( l_U1531, 359.43550000 );
            SET_CHAR_PROOFS( l_U1531, 0, 0, 0, 0, 0 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1531, "GtaMloRoom40" );
        }
        CLEAR_AREA( 98.89410000, -317.83220000, 11.76090000, 20.00000000, 1 );
        CHANGE_BLIP_DISPLAY( l_U1571, 4 );
        CHANGE_BLIP_DISPLAY( l_U1572, 4 );
        PRINT_NOW( "BJFLLOW", 7500, 1 );
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        l_U744[l_U740] = 1;
    }
    if ((l_U563[7] == 0) AND (TIMERB() > 2000))
    {
        if (NOT (IS_CHAR_DEAD( l_U1258 )))
        {
            TASK_DRIVE_BY( l_U1258, l_U628, 0, 0.00000000, 0.00000000, 0.00000000, 100.00000000, 8, 1, 50 );
            SET_CHAR_RELATIONSHIP( l_U1258, 5, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1259 )))
        {
            TASK_DRIVE_BY( l_U1259, l_U628, 0, 0.00000000, 0.00000000, 0.00000000, 100.00000000, 8, 1, 50 );
            SET_CHAR_RELATIONSHIP( l_U1259, 5, 0 );
        }
        l_U563[7] = 1;
    }
    if (IS_CHAR_DEAD( l_U1260._fU0 ))
    {
        if (NOT (IS_CAR_DEAD( l_U1257 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1257 ))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U1257 );
                EXPLODE_CAR( l_U1257, 1, 0 );
            }
        }
    }
    sub_67620();
    if ((l_U563[8] == 0) AND (NOT (IS_CAR_DEAD( l_U1257 ))))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1257 )))
        {
            TASK_HELI_MISSION( l_U1260._fU0, l_U1257, 0, 0, -105.00000000, 12.12000000, 175.00000000, 4, 2.50000000, 0, 90.00000000, 50, 10 );
            SET_CHAR_KEEP_TASK( l_U1260._fU0, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 837858166 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1257 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1260._fU0 );
            DELETE_CHAR( ref l_U1258 );
            DELETE_CHAR( ref l_U1259 );
            l_U563[8] = 1;
        }
    }
    if ((l_U563[3] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 98.11440000, -317.97960000, 11.75530000, 2.00000000, 2.00000000, 1.00000000, 0 )))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 837858166 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1257 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1260._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1258 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1259 );
        CLEAR_AREA( 98.23870000, -309.90670000, 10.75530000, 20.00000000, 1 );
        sub_63039( 100.42150000, -303.81860000, 10.75600000, ref l_U1268[4], 0, 1, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1268[4]._fU0, "GtaMloRoom40" );
        sub_74150( 98.79870000, -301.90640000, 10.75530000, ref l_U1268[5], 0 );
        SET_CHAR_HEADING( l_U1268[5]._fU0, 141.59730000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1268[5]._fU0, "GtaMloRoom40" );
        TASK_SHOOT_AT_COORD( l_U1268[5]._fU0, 92.53470000, -301.46970000, 9.15530000, 50000, 3 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1268[5]._fU0, 101.20330000, -302.38580000, 10.75530000, 0.00000000 );
        l_U563[3] = 1;
    }
    if ((NOT (IS_CHAR_DEAD( l_U1531 ))) AND ((NOT (IS_CHAR_DEAD( l_U1530 ))) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 98.11440000, -317.97960000, 11.75530000, 2.00000000, 2.00000000, 1.00000000, 0 )) AND (l_U563[1] == 0))))
    {
        OPEN_SEQUENCE_TASK( ref l_U914 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 92.53470000, -301.46970000, 9.15530000, 3, 20000, 0.50000000 );
        TASK_ACHIEVE_HEADING( 0, 2.04020000 );
        CLOSE_SEQUENCE_TASK( l_U914 );
        CLEAR_CHAR_TASKS( l_U1530 );
        TASK_PERFORM_SEQUENCE( l_U1530, l_U914 );
        CLEAR_SEQUENCE_TASK( l_U914 );
        OPEN_SEQUENCE_TASK( ref l_U917 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 93.07440000, -302.00020000, 9.15530000, 3, 20000, 0.50000000 );
        TASK_ACHIEVE_HEADING( 0, 1.91320000 );
        CLOSE_SEQUENCE_TASK( l_U917 );
        CLEAR_CHAR_TASKS( l_U1531 );
        TASK_PERFORM_SEQUENCE( l_U1531, l_U917 );
        CLEAR_SEQUENCE_TASK( l_U917 );
        l_U563[1] = 1;
    }
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 98.44790000, -302.63570000, 11.75530000, 2.00000000, 2.50000000, 1.00000000, 0 )) AND (l_U563[2] == 0))
    {
        GET_INTERIOR_AT_COORDS( 104.10420000, -263.38890000, 0.28210000, ref uVar3 );
        ACTIVATE_INTERIOR( uVar3, 1 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1530, 102.49730000, -286.13390000, 2.48230000, 2.00000000 );
        OPEN_SEQUENCE_TASK( ref l_U914 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 102.49730000, -286.13390000, 2.48230000, 3, 20000, 0.50000000 );
        TASK_SEEK_COVER_FROM_POS( 0, 99.26420000, -279.23500000, 1.47700000, 1500 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR_TIMED( 0, 155.00000000, 4000.00000000 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR_TIMED( 0, 155.00000000, 4000.00000000 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 155.00000000 );
        CLOSE_SEQUENCE_TASK( l_U914 );
        CLEAR_CHAR_TASKS( l_U1530 );
        TASK_PERFORM_SEQUENCE( l_U1530, l_U914 );
        CLEAR_SEQUENCE_TASK( l_U914 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1531, 94.58350000, -283.87350000, 2.67710000, 2.00000000 );
        OPEN_SEQUENCE_TASK( ref l_U917 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 94.58350000, -283.87350000, 2.67710000, 3, 20000, 0.50000000 );
        TASK_ACHIEVE_HEADING( 0, 270.00000000 );
        TASK_SEEK_COVER_FROM_POS( 0, 99.26420000, -279.23500000, 1.47700000, 1500 );
        TASK_SHOOT_AT_COORD( 0, 103.85940000, -272.44410000, 1.28710000, 1500, 3 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR_TIMED( 0, 155.00000000, 4000.00000000 );
        TASK_SHOOT_AT_COORD( 0, 103.85940000, -272.44410000, 1.28710000, 4000, 3 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR_TIMED( 0, 155.00000000, 4000.00000000 );
        TASK_SHOOT_AT_COORD( 0, 103.85940000, -272.44410000, 1.28710000, 4000, 3 );
        TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 155.00000000 );
        CLOSE_SEQUENCE_TASK( l_U917 );
        CLEAR_CHAR_TASKS( l_U1531 );
        TASK_PERFORM_SEQUENCE( l_U1531, l_U917 );
        CLEAR_SEQUENCE_TASK( l_U917 );
        sub_63039( 104.10420000, -263.38890000, 0.28210000, ref l_U1268[0], 1, 1, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1268[0]._fU0, "GtaMloRoom01" );
        sub_63039( 96.12290000, -263.26050000, 0.28210000, ref l_U1268[1], 1, 1, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1268[1]._fU0, "GtaMloRoom01" );
        sub_63039( 101.92510000, -270.38740000, 0.28110000, ref l_U1268[2], 1, 1, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1268[2]._fU0, "GtaMloRoom01" );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            TASK_COMBAT( l_U1268[2]._fU0, l_U1530 );
        }
        sub_63039( 107.59770000, -270.58960000, 0.28140000, ref l_U1268[3], 1, 1, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1268[3]._fU0, "GtaMloRoom01" );
        sub_7469( "PM3_SUB", "PM3BAUD", ref l_U818, 8, 1 );
        SETTIMERA( 0 );
        l_U563[2] = 1;
    }
    if ((l_U563[2] == 1) AND ((l_U563[6] == 0) AND (NOT (sub_8970( l_U818 )))))
    {
        if ((sub_55354( l_U628, 94.58350000, -283.87350000, 2.67710000 )) < 10.00000000)
        {
            CHANGE_BLIP_DISPLAY( l_U1571, 2 );
            CHANGE_BLIP_DISPLAY( l_U1572, 2 );
            PRINT_NOW( "BJFLLO2", 7500, 1 );
            l_U563[6] = 1;
        }
    }
    for ( I = 0; I <= 7; I++ )
    {
        if (IS_CHAR_INJURED( l_U1268[I]._fU0 ))
        {
            if (DOES_BLIP_EXIST( l_U1268[I]._fU24 ))
            {
                REMOVE_BLIP( l_U1268[I]._fU24 );
            }
        }
    }
    if ((l_U563[2] == 1) AND ((l_U563[4] == 0) AND (IS_CHAR_INJURED( l_U1268[3]._fU0 ))))
    {
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            CLEAR_CHAR_TASKS( l_U1530 );
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1530 );
            OPEN_SEQUENCE_TASK( ref l_U915 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 107.76370000, -271.54440000, 1.28660000, 3, 20000, 0.50000000 );
            TASK_SEEK_COVER_FROM_POS( 0, 111.60360000, -264.78530000, 0.28220000, 3000 );
            TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 100.00000000 );
            CLOSE_SEQUENCE_TASK( l_U915 );
            TASK_PERFORM_SEQUENCE( l_U1530, l_U915 );
            CLEAR_SEQUENCE_TASK( l_U915 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1530, 107.76370000, -271.54440000, 1.28660000, 2.60000000 );
        }
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "packiePed should have Run" );
        PRINTNL();
        PRINTNL();
        PRINTNL();
        l_U563[4] = 1;
    }
    if ((l_U563[2] == 1) AND ((l_U563[5] == 0) AND (IS_CHAR_INJURED( l_U1268[2]._fU0 ))))
    {
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1531 );
            CLEAR_CHAR_TASKS( l_U1531 );
            OPEN_SEQUENCE_TASK( ref l_U918 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 102.07150000, -271.46120000, 0.28140000, 3, 20000, 0.50000000 );
            TASK_ACHIEVE_HEADING( 0, 270.00000000 );
            TASK_SEEK_COVER_FROM_POS( 0, 111.60360000, -264.78530000, 0.28220000, 3000 );
            TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 100.00000000 );
            CLOSE_SEQUENCE_TASK( l_U918 );
            TASK_PERFORM_SEQUENCE( l_U1531, l_U918 );
            CLEAR_SEQUENCE_TASK( l_U918 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1531, 102.07150000, -271.46120000, 0.28140000, 2.60000000 );
        }
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "derrickPed should have Run" );
        PRINTNL();
        PRINTNL();
        PRINTNL();
        l_U563[5] = 1;
    }
    sub_66738();
    sub_67321( 50.00000000, 10000 );
    if ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 110.55270000, -267.68170000, 1.28650000, 2.50000000, 4.50000000, 1.00000000, 0 )) || ((IS_CHAR_INJURED( l_U1268[3]._fU0 )) AND ((IS_CHAR_INJURED( l_U1268[2]._fU0 )) AND ((IS_CHAR_INJURED( l_U1268[1]._fU0 )) AND ((IS_CHAR_INJURED( l_U1268[0]._fU0 )) AND (l_U563[2] == 1))))))
    {
        for ( I = 0; I <= 7; I++ )
        {
            if (DOES_BLIP_EXIST( l_U1268[I]._fU24 ))
            {
                REMOVE_BLIP( l_U1268[I]._fU24 );
            }
        }
        l_U740++;
    }
    return;
}

void sub_86362()
{
    int I;
    unknown uVar3;

    if (l_U744[l_U740] == 0)
    {
        sub_7387();
        PRINT_NOW( "BJFLLO2", 7500, 1 );
        GET_INTERIOR_AT_COORDS( 110.38530000, -256.60130000, -4.29640000, ref uVar3 );
        ACTIVATE_INTERIOR( uVar3, 1 );
        sub_68227( 112.49510000, -254.80130000, -4.29620000, 112.92100000, -266.21290000, 0.28210000, ref l_U1333[0], 1, 13 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1333[0]._fU0, "subwayMloRoom01" );
        SET_CHAR_ACCURACY( l_U1333[0]._fU0, 20 );
        sub_68227( 112.47380000, -246.84020000, -4.29620000, 111.21290000, -270.29020000, 0.28210000, ref l_U1333[1], 1, 15 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1333[1]._fU0, "subwayMloRoom01" );
        SET_CHAR_ACCURACY( l_U1333[1]._fU0, 15 );
        sub_68227( 112.41840000, -241.54410000, -4.29620000, 103.31510000, -262.89280000, 0.28210000, ref l_U1333[2], 1, 13 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1333[2]._fU0, "subwayMloRoom01" );
        SET_CHAR_ACCURACY( l_U1333[2]._fU0, 20 );
        sub_68227( 110.22860000, -254.48880000, -4.29620000, 110.07170000, -266.04730000, 0.28210000, ref l_U1333[3], 1, 15 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1333[3]._fU0, "subwayMloRoom01" );
        SET_CHAR_ACCURACY( l_U1333[3]._fU0, 15 );
        WAIT( 2550 );
        sub_68227( 110.29390000, -247.00340000, -4.29620000, 96.15220000, -263.09860000, 0.28210000, ref l_U1333[4], 1, 13 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1333[4]._fU0, "subwayMloRoom01" );
        SET_CHAR_ACCURACY( l_U1333[4]._fU0, 20 );
        WAIT( 600 );
        sub_68227( 110.80790000, -242.28310000, -4.29620000, 105.08350000, -269.04580000, 0.28210000, ref l_U1333[5], 1, 15 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1333[5]._fU0, "subwayMloRoom01" );
        SET_CHAR_ACCURACY( l_U1333[5]._fU0, 15 );
        sub_63039( 109.20520000, -253.03570000, -4.29640000, ref l_U1333[6], 0, 0, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1333[6]._fU0, "subwayMloRoom01" );
        SET_CHAR_ACCURACY( l_U1333[6]._fU0, 20 );
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            SET_CHAR_ACCURACY( l_U1530, 75 );
            TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U1530, 100.00000000 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            SET_CHAR_ACCURACY( l_U1531, 75 );
            TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U1531, 100.00000000 );
        }
        l_U744[l_U740] = 1;
    }
    for ( I = 0; I <= 7; I++ )
    {
        if (IS_CHAR_INJURED( l_U1268[I]._fU0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1268[I]._fU0 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U1268[I]._fU0 )))
                {
                    DELETE_CHAR( ref l_U1268[I]._fU0 );
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1268[I]._fU0 );
                }
            }
        }
    }
    for ( I = 0; I <= 7; I++ )
    {
        if (IS_CHAR_INJURED( l_U1333[I]._fU0 ))
        {
            if (DOES_BLIP_EXIST( l_U1333[I]._fU24 ))
            {
                REMOVE_BLIP( l_U1333[I]._fU24 );
            }
        }
    }
    sub_66738();
    sub_67321( 50.00000000, 10000 );
    if ((IS_CHAR_INJURED( l_U1333[5]._fU0 )) AND ((IS_CHAR_INJURED( l_U1333[4]._fU0 )) AND ((IS_CHAR_INJURED( l_U1333[3]._fU0 )) AND ((IS_CHAR_INJURED( l_U1333[2]._fU0 )) AND ((IS_CHAR_INJURED( l_U1333[1]._fU0 )) AND ((IS_CHAR_INJURED( l_U1333[0]._fU0 )) AND (l_U744[l_U740] == 1)))))))
    {
        l_U740++;
    }
    return;
}

void sub_87659()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I <= 6; I++ )
    {
        if (IS_CHAR_INJURED( l_U1333[I]._fU0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U1333[I]._fU0 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U1333[I]._fU0 )))
                {
                    DELETE_CHAR( ref l_U1333[I]._fU0 );
                }
            }
        }
    }
    if (l_U744[l_U740] == 0)
    {
        sub_7387();
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U1333[6]._fU0 )))
            {
                REMOVE_CHAR_DEFENSIVE_AREA( l_U1530 );
                OPEN_SEQUENCE_TASK( ref l_U916 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 110.18160000, -264.65200000, 0.28210000, 3, 20000, 0.50000000 );
                TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 109.61150000, -253.39990000, -4.29640000, 3, 1.00000000, 2.00000000, l_U1333[6]._fU0, 0 );
                TASK_SEEK_COVER_FROM_POS( 0, 92.70870000, -253.08540000, -3.29150000, 3000 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 65.00000000 );
                CLOSE_SEQUENCE_TASK( l_U916 );
                TASK_PERFORM_SEQUENCE( l_U1530, l_U916 );
                SET_CHAR_ACCURACY( l_U1530, 25 );
                CLEAR_SEQUENCE_TASK( l_U916 );
            }
            else
            {
                REMOVE_CHAR_DEFENSIVE_AREA( l_U1530 );
                OPEN_SEQUENCE_TASK( ref l_U916 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 110.18160000, -264.65200000, 0.28210000, 3, 20000, 0.50000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 109.61150000, -253.39990000, -4.29640000, 3, 20000, 0.50000000 );
                TASK_SEEK_COVER_FROM_POS( 0, 92.70870000, -253.08540000, -3.29150000, 3000 );
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 65.00000000 );
                CLOSE_SEQUENCE_TASK( l_U916 );
                if (DOES_CHAR_EXIST( l_U1333[6]._fU0 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1333[6]._fU0 )))
                    {
                        SET_CHAR_HEALTH( l_U1333[6]._fU0, 110 );
                    }
                }
                TASK_PERFORM_SEQUENCE( l_U1530, l_U916 );
                SET_CHAR_ACCURACY( l_U1530, 25 );
                CLEAR_SEQUENCE_TASK( l_U916 );
            }
        }
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1530, 109.61150000, -253.39990000, -4.29640000, 3.20000000 );
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1531 );
            OPEN_SEQUENCE_TASK( ref l_U919 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 112.79230000, -264.57820000, 0.28200000, 3, 20000, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 109.68290000, -247.04250000, -4.29640000, 3, 20000, 0.50000000 );
            TASK_SEEK_COVER_FROM_POS( 0, 92.70870000, -253.08540000, -3.29150000, 3000 );
            TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 65.00000000 );
            CLOSE_SEQUENCE_TASK( l_U919 );
            TASK_PERFORM_SEQUENCE( l_U1531, l_U919 );
            SET_CHAR_ACCURACY( l_U1531, 25 );
            CLEAR_SEQUENCE_TASK( l_U919 );
        }
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1531, 109.68290000, -247.04250000, -4.29600000, 2.30000000 );
        CHANGE_BLIP_DISPLAY( l_U1571, 4 );
        CHANGE_BLIP_DISPLAY( l_U1572, 4 );
        PRINT_NOW( "BJFLLOW", 7500, 1 );
        REQUEST_MODEL( 800869680 );
        REQUEST_MODEL( 1159759556 );
        l_U744[l_U740] = 1;
    }
    if ((HAS_MODEL_LOADED( 1159759556 )) AND ((HAS_MODEL_LOADED( 800869680 )) AND ((l_U563[0] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 111.30520000, -252.55780000, -3.29140000, 6.00000000, 5.00000000, 3.00000000, 0 )))))
    {
        if (NOT (IS_CHAR_INJURED( l_U1333[6]._fU0 )))
        {
            SET_CHAR_KEEP_TASK( l_U1333[6]._fU0, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1333[6]._fU0 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -183203150 );
        GET_INTERIOR_AT_COORDS( 90.01690000, -253.27500000, -4.29640000, ref uVar3 );
        ACTIVATE_INTERIOR( uVar3, 1 );
        sub_63039( 90.01690000, -253.27500000, -4.29640000, ref l_U1398[0], 1, 1, 0 );
        sub_63039( 89.86900000, -241.69440000, -4.29640000, ref l_U1398[1], 1, 1, 0 );
        for ( I = 0; I <= 1; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U1398[I]._fU0 )))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1398[I]._fU0, "subwayMloRoom01" );
            }
        }
        CHANGE_BLIP_DISPLAY( l_U1571, 2 );
        CHANGE_BLIP_DISPLAY( l_U1572, 2 );
        PRINTSTRING( "Creating Train" );
        PRINTNL();
        GET_INTERIOR_AT_COORDS( 94.17090000, -146.76220000, -5.47940000, ref uVar4 );
        ACTIVATE_INTERIOR( uVar4, 1 );
        CREATE_MISSION_TRAIN( 0, 94.17090000, -146.76220000, -5.47940000, 1, ref l_U1463[1] );
        SET_TRAIN_SPEED( l_U1463[1], 19.00000000 );
        SET_TRAIN_CRUISE_SPEED( l_U1463[1], 19.00000000 );
        l_U563[0] = 1;
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (IS_CHAR_INJURED( l_U1398[I]._fU0 ))
        {
            if (DOES_BLIP_EXIST( l_U1398[I]._fU24 ))
            {
                REMOVE_BLIP( l_U1398[I]._fU24 );
            }
        }
    }
    if ((l_U563[1] == 0) AND ((l_U563[0] == 1) AND ((IS_CHAR_INJURED( l_U1398[1]._fU0 )) || (IS_CHAR_INJURED( l_U1398[0]._fU0 )))))
    {
        sub_68227( 87.27850000, -265.05230000, 0.28210000, 89.92160000, -253.64510000, -3.29140000, ref l_U1398[2], 0, 15 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1398[2]._fU0, "subwayMloRoom01" );
        WAIT( 200 );
        sub_68227( 87.34600000, -266.54090000, 0.28210000, 93.62230000, -259.27870000, -3.29140000, ref l_U1398[3], 0, 15 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1398[3]._fU0, "subwayMloRoom01" );
        WAIT( 200 );
        sub_68227( 89.35280000, -265.09740000, 0.28210000, 90.03170000, -247.85180000, -3.29140000, ref l_U1398[4], 0, 15 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1398[4]._fU0, "subwayMloRoom01" );
        WAIT( 200 );
        sub_68227( 89.37280000, -266.98940000, 0.28200000, 85.38970000, -244.54230000, -3.29140000, ref l_U1398[5], 0, 15 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U1398[5]._fU0, "subwayMloRoom01" );
        SETTIMERA( 0 );
        l_U563[1] = 1;
    }
    if ((l_U563[2] == 0) AND ((TIMERA() > 4000) AND (l_U563[1] == 1)))
    {
        PRINTSTRING( "Creating Train" );
        PRINTNL();
        GET_INTERIOR_AT_COORDS( 110.55760000, -337.78110000, -5.47940000, ref uVar5 );
        ACTIVATE_INTERIOR( uVar5, 1 );
        CREATE_MISSION_TRAIN( 0, 110.55760000, -337.78110000, -5.47940000, 1, ref l_U1463[0] );
        SET_TRAIN_SPEED( l_U1463[0], 12.00000000 );
        SET_TRAIN_CRUISE_SPEED( l_U1463[0], 12.00000000 );
        SETTIMERA( 0 );
        l_U563[2] = 1;
    }
    sub_67620();
    sub_66738();
    sub_67321( 100.00000000, 10000 );
    if (l_U563[2] == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U1463[0] )))
        {
            if (LOCATE_CAR_2D( l_U1463[0], 97.71321000, -258.06380000, 3.00000000, 3.00000000, 0 ))
            {
                sub_7469( "PM3_TRACK", "PM3BAUD", ref l_U818, 8, 1 );
                REMOVE_BLIP( l_U1398[0]._fU24 );
                REMOVE_BLIP( l_U1398[1]._fU24 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -183203150 );
                l_U740++;
            }
        }
        if (TIMERA() > 30000)
        {
            l_U740++;
        }
    }
    return;
}

void sub_90116()
{
    unknown uVar2;

    if (l_U744[l_U740] == 0)
    {
        sub_7387();
        PRINTSTRING( "Train hit locate..." );
        sub_7387();
        if (NOT (IS_CHAR_DEAD( l_U1530 )))
        {
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1530 );
            OPEN_SEQUENCE_TASK( ref l_U920 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 106.55520000, -250.19690000, -4.29640000, 3, 60000, 0.50000000 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 101.73520000, -245.74210000, -5.47910000, 3, 20000 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 101.98630000, -212.78070000, -5.47940000, 3, 20000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U628 );
            TASK_AIM_GUN_AT_COORD( 0, 97.91001000, -235.15000000, -4.01000000, -2 );
            CLOSE_SEQUENCE_TASK( l_U920 );
            TASK_PERFORM_SEQUENCE( l_U1530, l_U920 );
            CLEAR_SEQUENCE_TASK( l_U920 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1530, 101.98630000, -212.78070000, -5.47940000, 4.00000000 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1531 )))
        {
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1531 );
            OPEN_SEQUENCE_TASK( ref l_U922 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 106.03910000, -246.30460000, -4.29640000, 3, 60000, 0.50000000 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 101.69800000, -240.73570000, -5.47910000, 3, 20000 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 97.69339000, -210.09200000, -5.47930000, 3, 20000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U628 );
            TASK_AIM_GUN_AT_COORD( 0, 102.30000000, -235.13000000, -4.13000000, -2 );
            CLOSE_SEQUENCE_TASK( l_U922 );
            TASK_PERFORM_SEQUENCE( l_U1531, l_U922 );
            CLEAR_SEQUENCE_TASK( l_U922 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1531, 97.23150000, -213.33750000, -5.47940000, 4.00000000 );
        }
        CHANGE_BLIP_DISPLAY( l_U1571, 4 );
        CHANGE_BLIP_DISPLAY( l_U1572, 4 );
        l_U744[l_U740] = 1;
    }
    if ((l_U563[9] == 0) AND (NOT (sub_8970( l_U818 ))))
    {
        PRINT_NOW( "BJFLLOW", 7500, 1 );
        l_U563[9] = 1;
    }
    if ((NOT (IS_CHAR_DEAD( l_U1531 ))) AND (NOT (IS_CHAR_DEAD( l_U1530 ))))
    {
        if ((l_U563[0] == 0) AND (((LOCATE_CHAR_ANY_MEANS_3D( l_U1531, 100.89610000, -214.15070000, -4.47440000, 5.00000000, 4.00000000, 3.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1530, 100.89610000, -214.15070000, -4.47440000, 5.00000000, 4.00000000, 3.00000000, 0 ))) AND (((sub_90860( l_U628 )) > -214.15070000) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 100.89610000, -214.15070000, -4.47440000, 5.00000000, 4.00000000, 3.00000000, 0 )))))
        {
            l_U563[0] = 1;
        }
    }
    if (l_U563[0] == 1)
    {
        if ((TIMERB() > 800) AND (l_U1521 < 3))
        {
            if ((l_U1521 mod 2) == 0)
            {
                sub_91162( 106.44760000, -238.15160000, -4.29640000, 101.96750000, -218.47840000, -5.47940000, ref l_U1472[l_U1521], 0, 15 );
            }
            else
            {
                sub_91162( 110.55000000, -266.34370000, -3.29120000, 101.96750000, -218.47840000, -5.47940000, ref l_U1472[l_U1521], 0, 15 );
            }
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1472[l_U1521]._fU0, "subwayMloRoom01" );
            SET_CHAR_ACCURACY( l_U1472[l_U1521]._fU0, 10 );
            if ((l_U1521 mod 2) == 0)
            {
                sub_91162( 93.39110000, -240.53240000, -4.29640000, 97.70440000, -236.55820000, -5.51560000, ref l_U1472[l_U1521 + 3], 0, 15 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1472[l_U1521 + 3]._fU0, "subwayMloRoom01" );
            }
            else
            {
                sub_91162( 88.37340000, -266.66800000, 1.28660000, 97.70440000, -236.55820000, -5.51560000, ref l_U1472[l_U1521 + 3], 0, 15 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U1472[l_U1521 + 3]._fU0, "GtaMloRoom01" );
            }
            SET_ROOM_FOR_CHAR_BY_NAME( l_U1472[l_U1521 + 3]._fU0, "subwayMloRoom01" );
            SET_CHAR_ACCURACY( l_U1472[l_U1521 + 3]._fU0, 10 );
            if (l_U1521 == 2)
            {
                SET_CHAR_PROOFS( l_U1472[l_U1521]._fU0, 1, 1, 1, 1, 1 );
                SET_CHAR_PROOFS( l_U1472[l_U1521 + 3]._fU0, 1, 1, 1, 1, 1 );
            }
            l_U1521++;
            SETTIMERB( 0 );
        }
        else if (l_U563[1] == 0)
        {
            if (NOT (IS_CHAR_DEAD( l_U1530 )))
            {
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U1530, 90.00000000 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1531 )))
            {
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U1531, 90.00000000 );
            }
            sub_7469( "PM3_COPB", "PM3BAUD", ref l_U818, 8, 1 );
            SETTIMERA( 0 );
            l_U563[1] = 1;
        }
    }
    if ((((sub_12510( l_U628, l_U1530, 1 )) < 15.00000000) || ((sub_12510( l_U628, l_U1531, 1 )) < 15.00000000)) AND ((l_U563[1] == 1) AND ((l_U563[0] == 1) AND ((l_U563[2] == 0) AND (TIMERA() > 8000)))))
    {
        if ((NOT (IS_CHAR_DEAD( l_U1472[2]._fU0 ))) AND (NOT (IS_CHAR_DEAD( l_U1530 ))))
        {
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1530 );
            SET_CHAR_PROOFS( l_U1472[2]._fU0, 0, 0, 0, 0, 0 );
            OPEN_SEQUENCE_TASK( ref l_U921 );
            TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 102.09400000, -189.53400000, -5.47940000, 3, 1.00000000, 2.00000000, l_U1472[2]._fU0, 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 102.09330000, -170.16970000, -5.47940000, 3, 60000, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 86.19870000, -147.66000000, -4.58050000, 3, 60000, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 26.66040000, -103.71200000, -3.86710000, 3, 60000, 0.50000000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U628 );
            CLOSE_SEQUENCE_TASK( l_U921 );
            TASK_PERFORM_SEQUENCE( l_U1530, l_U921 );
            CLEAR_SEQUENCE_TASK( l_U921 );
        }
        WAIT( 1000 );
        if ((NOT (IS_CHAR_DEAD( l_U1472[5]._fU0 ))) AND (NOT (IS_CHAR_DEAD( l_U1531 ))))
        {
            REMOVE_CHAR_DEFENSIVE_AREA( l_U1531 );
            SET_CHAR_PROOFS( l_U1472[5]._fU0, 0, 0, 0, 0, 0 );
            OPEN_SEQUENCE_TASK( ref l_U923 );
            TASK_GO_TO_COORD_WHILE_SHOOTING( 0, 98.48700000, -189.39340000, -5.32940000, 3, 1.00000000, 2.00000000, l_U1472[5]._fU0, 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 97.39780000, -169.80020000, -5.47940000, 3, 60000, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 86.19870000, -147.66000000, -4.58050000, 3, 60000, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 26.66040000, -103.71200000, -3.86710000, 3, 60000, 1.50000000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U628 );
            CLOSE_SEQUENCE_TASK( l_U923 );
            TASK_PERFORM_SEQUENCE( l_U1531, l_U923 );
            CLEAR_SEQUENCE_TASK( l_U923 );
            PRINTSTRING( "" );
            PRINTNL();
        }
        sub_7469( "PM3_STAYT", "PM3BAUD", ref l_U818, 8, 1 );
        l_U563[2] = 1;
    }
    else
    {
        sub_92882( l_U1472[2]._fU0, ref l_U838 );
        sub_92882( l_U1472[5]._fU0, ref l_U839 );
    }
    if ((l_U563[4] == 0) AND ((sub_55354( l_U1530, 55.27710000, -121.50290000, -5.41730000 )) < 68.00000000))
    {
        CLEAR_AREA_OF_CHARS( 14.50020000, -98.68351000, -3.90330000, 100.00000000 );
        GET_INTERIOR_AT_COORDS( 55.27710000, -121.50290000, -5.41730000, ref uVar2 );
        ACTIVATE_INTERIOR( uVar2, 1 );
        CREATE_MISSION_TRAIN( 0, 55.27710000, -121.50290000, -5.41730000, 1, ref l_U1463[2] );
        SET_TRAIN_SPEED( l_U1463[2], 14.00000000 );
        SET_TRAIN_CRUISE_SPEED( l_U1463[2], 15.00000000 );
        SETTIMERB( 0 );
        l_U563[4] = 1;
    }
    if ((l_U563[4] == 1) AND ((l_U563[8] == 0) AND (TIMERB() > 2900)))
    {
        if ((sub_12510( l_U628, l_U1530, 1 )) < 30.00000000)
        {
            sub_7469( "PM3_DODGE", "PM3BAUD", ref l_U818, 8, 1 );
            SETTIMERB( 0 );
            l_U563[8] = 1;
        }
    }
    sub_67321( 30.00000000, 30000 );
    if ((TIMERB() > 2000) AND ((l_U563[8] == 1) AND ((l_U563[7] == 0) AND ((NOT (sub_8970( l_U818 ))) AND (l_U563[2] == 1)))))
    {
        if ((sub_12510( l_U628, l_U1530, 1 )) < 30.00000000)
        {
            sub_7469( "PM3_JOG2", "PM3BAUD", ref l_U818, 8, 1 );
            l_U563[7] = 1;
        }
    }
    if ((NOT (sub_8970( l_U818 ))) AND ((l_U563[3] == 0) AND ((sub_55354( l_U628, 23.85660000, -97.93270000, -1.74710000 )) < 30.00000000)))
    {
        sub_7469( "PM3_DOOR", "PM3BAUD", ref l_U818, 8, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U1522 )))
        {
            ADD_BLIP_FOR_COORD( 23.85660000, -97.93270000, -1.74710000, ref l_U1522 );
        }
        CHANGE_BLIP_DISPLAY( l_U1571, 0 );
        CHANGE_BLIP_DISPLAY( l_U1572, 0 );
        l_U563[3] = 1;
    }
    if ((l_U563[10] == 0) AND ((NOT (sub_8970( l_U818 ))) AND (l_U563[3] == 1)))
    {
        PRINT_NOW( "BJESC1", 7500, 1 );
        l_U563[10] = 1;
    }
    sub_66738();
    sub_67620();
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 23.85660000, -97.93270000, -1.74710000, 1.60000000, 1.60000000, 1.60000000, 1 ))
    {
        l_U740++;
    }
    return;
}

void sub_90860(unknown uParam0)
{
    unknown uVar3;
    unknown Result;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar3, ref Result, ref uVar5 );
    }
    else if (DOES_CHAR_EXIST( uParam0 ))
    {
        N_1363505769( uParam0, ref uVar3, ref Result, ref uVar5 );
    }
    return Result;
}

void sub_91162(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7, unknown uParam8)
{
    if (iParam6->_fU28 == 0)
    {
        CREATE_CHAR( 26, -1004762946, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam6 + 0, 1 );
        SET_CHAR_RELATIONSHIP( iParam6->_fU0, 5, 0 );
        GIVE_WEAPON_TO_CHAR( iParam6->_fU0, uParam8, 120, 0 );
        SET_COMBAT_DECISION_MAKER( iParam6->_fU0, l_U1581 );
        TASK_GO_STRAIGHT_TO_COORD( iParam6->_fU0, uParam3._fU0, uParam3._fU4, uParam3._fU8, 4, 60000 );
        ADD_BLIP_FOR_CHAR( iParam6->_fU0, iParam6 + 24 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U788 );
        SET_CHAR_PROP_INDEX( iParam6->_fU0, 0, l_U788 );
        if (bParam7)
        {
            CHANGE_BLIP_DISPLAY( iParam6->_fU24, 4 );
        }
        else
        {
            CHANGE_BLIP_DISPLAY( iParam6->_fU24, 0 );
        }
        SET_BLIP_AS_FRIENDLY( iParam6->_fU24, 0 );
        SET_CHAR_IS_TARGET_PRIORITY( iParam6->_fU0, 1 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam6->_fU0, uParam3, 3.50000000 );
        SET_CHAR_NAME_DEBUG( iParam6->_fU0, "AnOffSwatNV" );
        SET_CHAR_ACCURACY( iParam6->_fU0, 25 );
        iParam6->_fU28 = 1;
    }
    else if (bParam7)
    {
        CHANGE_BLIP_DISPLAY( iParam6->_fU24, 4 );
    }
    return;
}

void sub_92882(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = {sub_67777( uParam0 )};
    if (IS_BULLET_IN_AREA( uVar4._fU0, uVar4._fU4, uVar4._fU8, 0.70000000, 1 ))
    {
        (uParam1^) = sub_66752( uParam0 );
        (uParam1^) -= 3;
        if ((uParam1^) < 50)
        {
            if (NOT (IS_CHAR_DEAD( uParam0 )))
            {
                SET_CHAR_HEALTH( uParam0, 50 );
            }
        }
        else if ((uParam1^) >= 0)
        {
            if (NOT (IS_CHAR_DEAD( uParam0 )))
            {
                SET_CHAR_HEALTH( uParam0, (uParam1^) );
            }
        }
    }
    return;
}

void sub_93849()
{
    int I;

    if (l_U744[l_U740] == 0)
    {
        sub_7387();
        REMOVE_BLIP( l_U1522 );
        ADD_BLIP_FOR_COORD( 35.79160000, -94.36490000, 9.24800000, ref l_U1522 );
        sub_8453( 1 );
        PRINT_NOW( "BJESC2", 7500, 1 );
        for ( I = 0; I <= 5; I++ )
        {
            if (DOES_CHAR_EXIST( l_U1472[I]._fU0 ))
            {
                DELETE_CHAR( ref l_U1472[I]._fU0 );
            }
        }
        for ( I = 0; I <= 7; I++ )
        {
            if (DOES_CHAR_EXIST( l_U1268[I]._fU0 ))
            {
                DELETE_CHAR( ref l_U1268[I]._fU0 );
            }
        }
        for ( I = 0; I <= 7; I++ )
        {
            if (DOES_CHAR_EXIST( l_U1333[I]._fU0 ))
            {
                DELETE_CHAR( ref l_U1333[I]._fU0 );
            }
        }
        for ( I = 0; I <= 7; I++ )
        {
            if (DOES_CHAR_EXIST( l_U1398[I]._fU0 ))
            {
                DELETE_CHAR( ref l_U1398[I]._fU0 );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( 800869680 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1159759556 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -183203150 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1004762946 );
        MARK_MISSION_TRAINS_AS_NO_LONGER_NEEDED();
        SETTIMERA( 0 );
        SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
        sub_49175();
        SWITCH_ROADS_BACK_TO_ORIGINAL( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
        SWITCH_PED_ROADS_BACK_TO_ORIGINAL( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        l_U744[l_U740] = 1;
    }
    if ((l_U563[0] == 0) AND (TIMERA() > 7500))
    {
        sub_7469( "PM3_UP", "PM3BAUD", ref l_U818, 8, 1 );
        l_U563[0] = 1;
    }
    if ((l_U563[1] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 30.96140000, -87.26930000, 10.25290000, 1.00000000, 1.00000000, 1.00000000, 0 )))
    {
        sub_7469( "PM3_LIGHT", "PM3BAUD", ref l_U818, 8, 1 );
        CLEAR_AREA_OF_CHARS( 35.04790000, -93.70220000, 9.24790000, 10.00000000 );
        l_U563[1] = 1;
    }
    sub_12463( 0 );
    sub_66738();
    if (((sub_94637( l_U628 )) > 9.24800000) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 35.79160000, -94.36490000, 10.24800000, 1.60000000, 1.60000000, 1.60000000, 1 )))
    {
        sub_48992( 0 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 800869680 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1159759556 );
        if (DOES_VEHICLE_EXIST( l_U1463[1] ))
        {
            DELETE_CAR( ref l_U1463[1] );
        }
        if (DOES_VEHICLE_EXIST( l_U1463[0] ))
        {
            DELETE_CAR( ref l_U1463[0] );
        }
        REMOVE_BLIP( l_U1522 );
        REQUEST_MODEL( 486987393 );
        while (NOT (HAS_MODEL_LOADED( 486987393 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( 486987393, 26.95340000, -112.08160000, 13.69420000, ref l_U786, 1 );
        SET_CAR_HEADING( l_U786, 2.25670000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U786 );
        SET_NEEDS_TO_BE_HOTWIRED( l_U786, 1 );
        SET_VEH_ALARM( l_U786, 1 );
        SET_CAR_HEALTH( l_U786, 1500 );
        g_U2226 = 0;
        LOCK_CAR_DOORS( l_U786, 7 );
        l_U740++;
    }
    return;
}

void sub_94637(unknown uParam0)
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

void sub_95027()
{
    unknown uVar2;

    if (l_U744[l_U740] == 0)
    {
        l_U727 = 70;
        REMOVE_COVER_POINT( l_U1467 );
        REMOVE_COVER_POINT( l_U1468 );
        REMOVE_COVER_POINT( l_U1469 );
        REMOVE_COVER_POINT( l_U1470 );
        REMOVE_COVER_POINT( l_U1471 );
        sub_7387();
        sub_8453( 1 );
        REQUEST_MODEL( 2046537925 );
        REQUEST_MODEL( -1900572838 );
        REQUEST_MODEL( -183203150 );
        REQUEST_ANIMS( "missbankjob" );
        SET_FAKE_WANTED_LEVEL( 0 );
        SET_MAX_WANTED_LEVEL( 6 );
        g_U9942 = 1;
        SET_CREATE_RANDOM_COPS( 1 );
        ALTER_WANTED_LEVEL( l_U629, 3 );
        SET_POLICE_RADAR_BLIPS( 1 );
        APPLY_WANTED_LEVEL_CHANGE_NOW( l_U629 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U840 );
        SETTIMERB( 0 );
        SWITCH_GARBAGE_TRUCKS( 1 );
        g_U9890 = 0;
        g_U9077 = 1;
        g_U9337 = 0;
        ADD_BLIP_FOR_COORD( 1401.60600000, 618.81800000, 34.90700000, ref l_U1576 );
        SET_ROUTE( l_U1576, 1 );
        l_U744[l_U740] = 1;
    }
    if ((l_U767 == 0) AND ((sub_94637( l_U1530 )) > 13.00000000))
    {
        sub_7469( "PM3_PCOPS", "PM3BAUD", ref l_U818, 8, 1 );
        l_U767 = 1;
    }
    if ((NOT (sub_8970( l_U818 ))) AND ((l_U767 == 1) AND (l_U563[9] == 0)))
    {
        PRINT_NOW( "BJGT_05", 7500, 1 );
        l_U563[9] = 1;
    }
    sub_66738();
    if ((NOT (IS_CHAR_DEAD( l_U1531 ))) AND (NOT (IS_CHAR_DEAD( l_U1530 ))))
    {
        if ((l_U563[2] == 0) AND ((IS_CHAR_SITTING_IN_ANY_CAR( l_U628 )) AND ((IS_CHAR_IN_ANY_CAR( l_U1531 )) AND (IS_CHAR_IN_ANY_CAR( l_U1530 )))))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( 2046537925 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 486987393 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U786 );
            PRINTSTRING( "Should have started speech" );
            PRINTNL();
            switch (g_U64966)
            {
                case 0:
                sub_7469( "PM3_ESCAPE", "PM3AUD", ref l_U818, 8, 1 );
                g_U64966++;
                break;
                case 1:
                sub_7469( "PM3_ESCAPE2", "PM3AUD", ref l_U818, 8, 1 );
                g_U64966++;
                break;
                case 2:
                SAY_AMBIENT_SPEECH( l_U1530, "Listen_to_radio", 0, 0, 0 );
                break;
            }
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 0 );
            l_U563[2] = 1;
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U1531 ))) AND ((NOT (IS_CHAR_DEAD( l_U1530 ))) AND (l_U563[2] == 1)))
    {
        if ((IS_CHAR_SITTING_IN_ANY_CAR( l_U628 )) AND ((IS_CHAR_IN_ANY_CAR( l_U1531 )) AND (IS_CHAR_IN_ANY_CAR( l_U1530 ))))
        {
            if (sub_34516( l_U818 ))
            {
                switch (g_U64966)
                {
                    case 1:
                    sub_34665( "PM3_ESCAPE", "PM3AUD", ref l_U818, 8, 1 );
                    break;
                    case 2:
                    sub_34665( "PM3_ESCAPE2", "PM3AUD", ref l_U818, 8, 1 );
                    break;
                }
            }
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 0 );
        }
        else
        {
            sub_33243( ref l_U818 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 1 );
        }
    }
    if ((NOT (sub_8970( l_U818 ))) AND ((l_U563[2] == 1) AND (l_U563[8] == 0)))
    {
        TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_PM3" );
        PRINTSTRING( "Just did the police report ken" );
        PRINTNL();
        l_U563[8] = 1;
    }
    if ((HAS_MODEL_LOADED( 2046537925 )) AND (HAS_MODEL_LOADED( -183203150 )))
    {
        if (IS_WANTED_LEVEL_GREATER( l_U629, 0 ))
        {
            sub_52323( 0 );
            sub_53971( 0 );
        }
        else
        {
            sub_52323( 1 );
            sub_53971( 1 );
        }
    }
    if (TIMERB() > 6000)
    {
        sub_12463( 0 );
    }
    if (((NOT l_U563[0]) == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 214.67880000, -408.15100000, 16.35970000, 3.00000000, 11.50000000, 4.00000000, 0 )))
    {
        l_U563[0] = 1;
    }
    if (NOT (IS_WANTED_LEVEL_GREATER( l_U629, 0 )))
    {
        g_U9337 = 0;
        if (l_U794 == 0)
        {
            if (NOT (IS_CHAR_DEAD( l_U1530 )))
            {
                TASK_PLAY_ANIM( l_U1530, "remove_balaclave_b", "missbankjob", 8.00000000, 0, 0, 0, 0, -1 );
                SETTIMERA( 0 );
                l_U794 = 1;
            }
        }
        if ((TIMERA() > 650) AND (l_U793 == 0))
        {
            if (NOT (IS_CHAR_DEAD( l_U1531 )))
            {
                TASK_PLAY_ANIM( l_U1531, "remove_balaclave_a", "missbankjob", 8.00000000, 0, 0, 0, 0, -1 );
                SETTIMERA( 0 );
                l_U793 = 1;
            }
        }
        if ((TIMERA() > 600) AND (l_U792 == 0))
        {
            TASK_PLAY_ANIM( l_U628, "remove_balaclave_b", "missbankjob", 8.00000000, 0, 0, 0, 0, -1 );
            SETTIMERA( 0 );
            l_U792 = 1;
        }
        if (l_U793)
        {
            if ((l_U799 == 0) AND ((sub_19166( l_U1531, "missbankjob", "remove_balaclave_a" )) > 0.50000000))
            {
                SET_CHAR_COMPONENT_VARIATION( l_U1531, 3, 0, 0 );
                l_U799 = 1;
            }
        }
        if (l_U794)
        {
            if ((l_U798 == 0) AND ((sub_19166( l_U1530, "missbankjob", "remove_balaclave_b" )) > 0.50000000))
            {
                SET_CHAR_COMPONENT_VARIATION( l_U1530, 3, 0, 0 );
                l_U798 = 1;
            }
        }
        if (l_U792)
        {
            if ((l_U797 == 0) AND ((sub_19166( l_U628, "missbankjob", "remove_balaclave_b" )) > 0.50000000))
            {
                SET_DRAW_PLAYER_COMPONENT( 8, 0 );
                SET_DRAW_PLAYER_COMPONENT( 7, 1 );
                l_U797 = 1;
            }
        }
    }
    if ((IS_GROUP_MEMBER( l_U1531, l_U627 )) AND (IS_GROUP_MEMBER( l_U1530, l_U627 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 1401.60600000, 618.81800000, 34.90700000, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            if (IS_WANTED_LEVEL_GREATER( l_U629, 0 ))
            {
                PRINT_NOW( "BJHEAT", 7500, 1 );
            }
            else if (sub_9361( 1, 1 ))
            {
                CLEAR_PRINTS();
                sub_15122( ref l_U818, 0 );
                SET_PLAYER_CONTROL( l_U629, 0 );
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
                sub_2976( -1 );
                sub_15944( 1 );
                sub_15887( ref l_U626, 1 );
                sub_15887( ref l_U624, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U628, 3, 0, 0 );
                CLEAR_AREA( 1401.60600000, 618.81800000, 34.90700000, 45.00000000, 1 );
                SWITCH_ROADS_OFF( -89.50000000, 0.00000000, -5.36729100, 1406.99000000, 641.41300000, 43.73056000 );
                ATTACH_CAM_TO_PED( l_U626, l_U628 );
                SET_CAM_ATTACH_OFFSET( l_U626, 0.40000000, 1.50000000, 0.70000000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U626, 1 );
                POINT_CAM_AT_PED( l_U626, l_U628 );
                SET_CAM_POINT_OFFSET( l_U626, 0.65000000, 0.00000000, 0.45000000 );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U626, 1 );
                SET_CAM_FOV( l_U626, 43.40003000 );
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                sub_7469( "PM3_HOME", "PM3AUD", ref l_U818, 8, 1 );
                if (NOT (IS_CHAR_DEAD( l_U1530 )))
                {
                    TASK_LOOK_AT_CHAR( l_U1530, l_U628, 10000, 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U1531 )))
                {
                    TASK_LOOK_AT_CHAR( l_U1531, l_U628, 10000, 0 );
                }
                while ((l_U790 == 0) AND ((sub_79480( l_U818 )) < 2))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1530 )))
                    {
                        BLOCK_CHAR_AMBIENT_ANIMS( l_U1530, 1 );
                    }
                    if (sub_14835())
                    {
                        l_U790 = 1;
                        DO_SCREEN_FADE_OUT( 500 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    WAIT( 0 );
                }
                if (l_U790 == 0)
                {
                    UNATTACH_CAM( l_U626 );
                    UNPOINT_CAM( l_U626 );
                    SET_CAM_POS( l_U626, 1391.02400000, 627.19430000, 36.75542000 );
                    SET_CAM_ROT( l_U626, -23.25736000, -0.00000000, -144.37150000 );
                    SET_CAM_FOV( l_U626, 45.00000000 );
                    if ((NOT (IS_CHAR_DEAD( l_U1531 ))) AND (NOT (IS_CHAR_DEAD( l_U1530 ))))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U1530 );
                        REMOVE_CHAR_FROM_GROUP( l_U1531 );
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U628 );
                        TASK_STAND_STILL( 0, 1000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1391.50300000, 622.43990000, 35.77940000, 2, 11000, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U1530, uVar2 );
                        WAIT( 500 );
                        if (NOT (IS_CHAR_DEAD( l_U1531 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U1531, uVar2 );
                            SETTIMERA( 0 );
                        }
                    }
                }
                while ((l_U790 == 0) AND (TIMERA() < 9000))
                {
                    if (sub_14835())
                    {
                        l_U790 = 1;
                        DO_SCREEN_FADE_OUT( 500 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    WAIT( 0 );
                }
                if (l_U790 == 0)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                sub_15122( ref l_U818, 0 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                sub_15887( ref l_U626, 0 );
                sub_15944( 0 );
                DELETE_CHAR( ref l_U1530 );
                DELETE_CHAR( ref l_U1531 );
                sub_2976( -1 );
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                sub_98312();
            }
        }
    }
    return;
}

void sub_98312()
{
    UNLOCK_MISSION_NEWS_STORY( 27 );
    sub_98330( 27 );
    sub_101524( 2026, 3 );
    sub_101583( 3 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 61 );
    CLEAR_WANTED_LEVEL( l_U629 );
    sub_103216();
    sub_2558();
    return;
}

void sub_98330(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_98417( iParam0 ))
    {
        sub_99467( iParam0 );
    }
    return;
}

int sub_98417(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_98474( ref uVar3, 1, 0, 0 );
    sub_99086( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_7622( "\n ----------------------------------------------------------------" );
    sub_16205( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_7622( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_98474(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_98527( iParam0, uParam1, uParam2 );
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
        sub_98659( iParam0 + 0 );
    }
    return;
}

void sub_98527(int iParam0, int iParam1, int iParam2)
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
        sub_98659( iParam0 + 0 );
    }
    return;
}

void sub_98659(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_98690( iParam0->_fU4 )))
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

int sub_98690(unknown uParam0)
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

void sub_99086(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_99467(unknown uParam0)
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
        sub_99678( 20, 6, 16383, 16383, ref uVar4 );
        sub_100354( ref uVar4, 7 );
        sub_100385( ref uVar4, 0 );
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
        sub_99678( 20, 7, 9, 16383, ref uVar4 );
        sub_100354( ref uVar4, 7 );
        sub_100385( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_99678(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_99702( uParam0, 0, iParam4 + 0 );
    sub_99702( uParam1, 1, iParam4 + 0 );
    sub_99702( uParam2, 2, iParam4 + 0 );
    sub_99702( uParam3, 3, iParam4 + 0 );
    sub_99702( 0, 4, iParam4 + 0 );
    sub_99702( 1, 5, iParam4 + 0 );
    sub_99702( 65535, 6, iParam4 + 0 );
    sub_99702( 0, 12, iParam4 + 0 );
    sub_99702( 0, 11, iParam4 + 0 );
    sub_99702( 0, 14, iParam4 + 0 );
    sub_99702( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_99702( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_99702( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_99702(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_100354(int iParam0, unknown uParam1)
{
    sub_99702( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_100385(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_100425())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_101112( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_100911( iVar5 );
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

int sub_100425()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_100459( 5, g_U968[I] )) == 7)
        {
            sub_100911( I );
            return 1;
        }
    }
    return 0;
}

int sub_100459(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_100911(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_100984( 39 );
    return;
}

void sub_100984(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_101112(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_101173( uParam0, g_U968[Result] ))
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

int sub_101173(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_101524(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_101583(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    sub_101600( 3, uParam0, 0, uVar3, 0 );
    return;
}

void sub_101600(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_3891(), -1 * iParam2 );
    g_U8323[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8365 += iParam2;
        g_U8368++;
        break;
        case 1:
        g_U8366 += iParam2;
        g_U8369++;
        break;
        case 2:
        g_U8367 += iParam2;
        g_U8370++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_101808( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

void sub_101808(int iParam0, unknown uParam1, int iParam2, unknown uParam3)
{
    char[16] cVar6;
    unknown uVar10;
    int iVar11;

    switch (iParam2)
    {
        case 0:
        StrCopy( ref cVar6, "CS1_", 16 );
        break;
        case 2:
        StrCopy( ref cVar6, "CS2_", 16 );
        break;
        case 1:
        StrCopy( ref cVar6, "CS3_", 16 );
        break;
        case 3:
        return 1;
        break;
        default:
          case 4: return 0;
    }
    switch (iParam0)
    {
        case 0:
        ConcatString(ref cVar6, "ATTACK", 16);
        break;
        case 1:
        ConcatString(ref cVar6, "GOAWAY", 16);
        break;
        case 2:
        ConcatString(ref cVar6, "GOODBYE", 16);
        break;
        case 3:
        ConcatString(ref cVar6, "GREET", 16);
        break;
        case 4:
        ConcatString(ref cVar6, "PANIC", 16);
        break;
        case 5:
        ConcatString(ref cVar6, "PURCH", 16);
        break;
        case 6:
        ConcatString(ref cVar6, "MONKEY", 16);
        break;
        case 7:
        ConcatString(ref cVar6, "TARGET", 16);
        break;
        case 8:
        ConcatString(ref cVar6, "NEG", 16);
        break;
        case 9:
        ConcatString(ref cVar6, "COMP", 16);
        break;
        case 10:
        ConcatString(ref cVar6, "ADVICE", 16);
        break;
        case 11:
        ConcatString(ref cVar6, "BARR", 16);
        break;
        case 12:
        ConcatString(ref cVar6, "WARN", 16);
        break;
        default:
          case 13: return 0;
    }
    if (NOT (IS_CHAR_DEAD( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_3123() );
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "finale1c" )) >= 1)
    {
        GET_GROUP_SIZE( sub_102315(), ref uVar10, ref iVar11 );
        if (iVar11 >= 1)
        {
            PRINTSTRING( "  * skipping speech ''" );
            PRINTSTRING( ref cVar6 );
            PRINTSTRING( "'' because ''finale1c'' running and with iNumber_of_player_group_followers = " );
            PRINTINT( iVar11 );
            PRINTNL();
            return 0;
        }
    }
    if ((iParam2 == 0) AND (sub_102525()))
    {
        if (NOT g_U8358)
        {
            if (iParam0 == 5)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_PLAYER_PURCHASES  - " );
                PRINTSTRING( "gbPKMAL_25_displayed:" );
                sub_102769( g_U8358 );
                PRINTNL();
                g_U8358 = 1;
                return 0;
            }
        }
        if (NOT g_U8355)
        {
            if (iParam0 == 3)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_GREETING  - " );
                PRINTSTRING( "bClothes_bought_in_roman3:" );
                sub_102769( g_U8355 );
                PRINTNL();
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_3123() );
    }
    sub_7622( "  * PLAY_SHOP_ASST_SPEECH(''" );
    sub_7622( ref cVar6 );
    sub_7622( "'')\n" );
    return sub_103133( ref cVar6, uParam1, 1, 0 );
}

void sub_102315()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_102525()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman3" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_102769(boolean bParam0)
{
    if (bParam0)
    {
        PRINTSTRING( "TRUE" );
    }
    else
    {
        PRINTSTRING( "FALSE" );
    }
    return;
}

void sub_103133(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_7469( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_103216()
{
    sub_103225();
    return;
}

void sub_103225()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_103243();
    sub_103302( iVar2, iVar3, iVar4 );
    return;
}

void sub_103243()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_103302(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 13;
    sub_103334( iVar5, uParam0, uParam1, uParam2, "Friend_15" );
    return;
}

void sub_103334(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_103430( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_103430( ref cVar9 );
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
            sub_103430( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_103430( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_103430( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_103430( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_104007( iParam0, iVar7 );;;
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
                sub_104404( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_104404( 0, 4 );
            }
        }
    }
    if (NOT (sub_104493( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3891(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3891() );
    }
    sub_1656();
    bVar27 = true;
    uVar28 = sub_104007( iParam0, iVar7 );
    uVar29 = sub_1113( iParam0 );
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
                sub_113869( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_114299();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_114384( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_114441( iParam0 );
                sub_114480( 0 );
                sub_1554( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_114588();
        }
    }
    if (bParam2)
    {
        sub_114299();
        sub_114676();
        sub_114480( 0 );
    }
    if (bParam3)
    {
        sub_114299();
        sub_114716();
        sub_114480( 0 );
        sub_1554( uVar29, 0 );
    }
    sub_1000();
    return;
}

void sub_103430(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_104007(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1512( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_104404(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_104493(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_104701( uParam1 );
        break;
        case 1:
        bVar8 = sub_106779( uParam1 );
        break;
        case 2:
        bVar8 = sub_107005( uParam1 );
        break;
        case 3:
        bVar8 = sub_107155( uParam1 );
        break;
        case 4:
        bVar8 = sub_107433( uParam1 );
        break;
        case 5:
        bVar8 = sub_107736( uParam1 );
        break;
        case 6:
        bVar8 = sub_107935( uParam1 );
        break;
        case 7:
        bVar8 = sub_108161( uParam1 );
        break;
        case 8:
        bVar8 = sub_108396( uParam1 );
        break;
        case 9:
        bVar8 = sub_108771( uParam1 );
        break;
        case 10:
        bVar8 = sub_109018( uParam1 );
        break;
        case 11:
        bVar8 = sub_109157( uParam1 );
        break;
        case 12:
        bVar8 = sub_109456( uParam1 );
        break;
        case 13:
        bVar8 = sub_109684( uParam1 );
        break;
        case 14:
        bVar8 = sub_109971( uParam1 );
        break;
        case 15:
        bVar8 = sub_110253( uParam1 );
        break;
        case 16:
        bVar8 = sub_110535( uParam1 );
        break;
        case 17:
        bVar8 = sub_110736( uParam1 );
        break;
        case 18:
        bVar8 = sub_110809( uParam1 );
        break;
        case 19:
        bVar8 = sub_111023( uParam1 );
        break;
        case 20:
        bVar8 = sub_111276( uParam1 );
        break;
        case 21:
        bVar8 = sub_111523( uParam1 );
        break;
        case 22:
        bVar8 = sub_111724( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_106384( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_104007( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_112047( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_104701(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_104980( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_104980( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_104980( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_104980( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_104980( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_104980( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_104980( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_104980( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_104980( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_104980( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_104980( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_104980( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_104980( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_104980( iVar3, 0, 3, 1, 0, 0 );
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
        sub_104980( iVar3, 0, sub_106262(), sub_106528(), 0, 0 );
        break;
        default:
        sub_106687( "Friend 1", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Friend 1", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_104980(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_104991( uParam1 );
    sub_105165( uParam0, 0, uParam2 );
    sub_105165( uParam0, 1, uParam3 );
    sub_105165( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_103243();
    return;
}

void sub_104991(unknown uParam0)
{
    ADD_SCORE( sub_3891(), uParam0 );
    sub_105016( uParam0 );
    return;
}

void sub_105016(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1512( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_105165(unknown uParam0, int iParam1, int iParam2)
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
        sub_105322( uParam0 );
    }
    return;
}

void sub_105322(unknown uParam0)
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

int sub_106262()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_106384( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_106384(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_106528()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_106384( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_106687(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_106779(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_104980( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_106687( "Contact 2", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 2", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_107005(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_104980( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_106687( "Girl 3", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Girl 3", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_107155(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_104980( iVar3, 0, sub_106262(), sub_106528(), 0, 0 );
        break;
        default:
        sub_106687( "Friend 4", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Friend 4", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_107433(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_104980( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_104980( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_104980( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_104980( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_106687( "Contact 5", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 5", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_107736(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_106687( "Contact 7", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 7", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_107935(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_104980( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_106687( "Contact 7b", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 7b", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_108161(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_104980( iVar3, 0, sub_106262(), sub_106528(), 0, 0 );
        break;
        default:
        sub_106687( "Friend 8", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Friend 8", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_108396(unknown uParam0)
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
        sub_104980( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_104980( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_104980( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_104980( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_104980( iVar3, 0, sub_106262(), sub_106528(), 0, 0 );
        break;
        default:
        sub_106687( "Friend 9", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Friend 9", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_108771(unknown uParam0)
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
        sub_104980( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_104980( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_104980( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_106687( "Contact 10", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_106687( "Contact 10", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_109018(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_106687( "Girl 11", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Girl 11", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_109157(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_104980( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_104980( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_104980( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_104980( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_104980( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_106687( "Contact 12", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 12", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_109456(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_104980( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_106687( "Contact 13", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 13", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_109684(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_104980( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_104980( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_104980( iVar3, 0, sub_106262(), sub_106528(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_106687( "Friend 15", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Friend 15", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_109971(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_104980( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_104980( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_104980( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_106687( "Contact 16", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 16", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_110253(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_104980( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_104980( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_104980( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_106687( "Contact 18", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 18", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_110535(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_106687( "Contact 19", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 19", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_110736(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_106687( "Girl 20", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_110809(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_106687( "Contact 21", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 21", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_111023(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_104980( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_104980( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_106687( "Contact 22", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 22", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_111276(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_104980( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_104980( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_104980( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_106687( "Contact 24", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 24", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_111523(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_104980( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_104980( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_104980( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_106687( "Contact 25", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106687( "Contact 25", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_111724(unknown uParam0)
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
        sub_104980( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_106687( "Girl 26", 1 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_106687( "Girl 26", 0 );
        sub_104980( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_112047(int iParam0, int iParam1)
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
    if (sub_112095( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_112826( iParam1 );
    }
    return;
}

int sub_112095(int iParam0, int iParam1)
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
            sub_112235( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_112235(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_112417( 0 );
    return;
}

void sub_112417(boolean bParam0)
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
        sub_112672();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_112672()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_112826(int iParam0)
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
        sub_113159( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_113159( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_113159( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_113159( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_113159( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_113159( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_113159( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_113159( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_113159( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_113159( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_113159( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_113159( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_113159( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_113159( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_113159( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_113159( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_113159( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_113159( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_113159( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_113159(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_113869(unknown uParam0, unknown uParam1)
{
    sub_113888( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_113888(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_114299()
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

int sub_114384(int iParam0, int iParam1)
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

void sub_114441(unknown uParam0)
{
    sub_899();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_114480(unknown uParam0)
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

void sub_114588()
{
    sub_114597();
    return;
}

void sub_114597()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_114676()
{
    sub_114597();
    return;
}

void sub_114716()
{
    sub_114597();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

