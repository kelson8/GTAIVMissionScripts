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
    l_U638 = 0;
    l_U641 = 0;
    l_U643 = 0;
    l_U644 = 0;
    l_U645 = 0;
    l_U646 = 0;
    l_U648 = 45;
    l_U649 = 0.00000000;
    l_U650 = -3.00000000;
    l_U651 = -3.00000000;
    l_U652 = 0.00000000;
    l_U653 = 0.00000000;
    l_U654 = 0.20000000;
    l_U655 = 65491;
    l_U656 = 45;
    l_U657 = 0;
    l_U658 = 0.00000000;
    l_U662 = 0.00000000;
    l_U663 = 0.35000000;
    l_U664 = 7.50000000;
    l_U665 = -7.50000000;
    l_U693 = 0;
    l_U694 = 0;
    l_U695 = 0;
    l_U696 = 0;
    l_U697 = 0;
    l_U698 = 0;
    l_U699 = 0.00000000;
    l_U700 = 0;
    l_U701 = 0;
    l_U702 = 1;
    l_U703 = 0;
    l_U704 = 2.20000000;
    l_U705 = 0;
    l_U706 = 0;
    l_U708 = 0;
    l_U709 = 0;
    l_U714 = 0;
    l_U715 = 1;
    l_U716 = 0;
    l_U721 = -1;
    l_U722 = "CRADLE_LOOP";
    l_U751 = 2;
    l_U758 = 0;
    l_U768 = 0;
    l_U769 = 0;
    l_U771 = 0;
    l_U772 = 0;
    l_U773 = 0;
    l_U774 = {-0.50000000, 0.00000000, 0.29000000};
    l_U777 = {0.50000000, 0.00000000, 0.29000000};
    l_U780 = 3;
    l_U781 = 0;
    l_U782 = 0;
    l_U783 = 0;
    l_U797 = 1;
    l_U821 = 0.10000000;
    l_U825 = 1;
    l_U848 = 0;
    l_U850 = 0;
    l_U861 = 0;
    l_U915 = {4.74690000, -748.94080000, 111.60610000};
    l_U918 = {4.60660000, -746.94710000, 111.60610000};
    l_U921 = {0.15000000, 0.08000000, 0.01000000};
    l_U924 = {1.80000000, 15.96000000, 7.43000000};
    l_U930 = 55.00000000;
    l_U931 = 20.00000000;
    l_U932 = 0.80000000;
    l_U933 = 6.00000000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_826();
        sub_2936();
    }
    else
    {
        sub_3531();
        l_U797 = 1;
    }
    while (l_U797)
    {
        sub_6958();
        switch (l_U794)
        {
            case 0:
            sub_7165();
            break;
            case 1:
            sub_10535();
            break;
            case 2:
            sub_24027();
            break;
            case 3:
            sub_36593();
            sub_37058();
            break;
            case 4:
            sub_36593();
            sub_41026();
            break;
        }
        if (l_U853 == 0)
        {
            if (l_U794 > 1)
            {
                g_U9166 = 0;
            }
            else
            {
                g_U9166 = 1;
            }
        }
        if (l_U795)
        {
            sub_45211();
        }
        else if (l_U796)
        {
            sub_12576();
        }
        WAIT( 0 );
    }
    sub_2936();
    return;
}

void sub_826()
{
    sub_835();
    return;
}

void sub_835()
{
    int iVar2;

    iVar2 = 9;
    sub_849( iVar2 );
    sub_2025( iVar2 );
    return;
}

void sub_849(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_893();
        sub_1054();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1162();
            sub_1201();
        }
    }
    sub_1277();
    sub_1378();
    uVar5 = sub_1491( uParam0 );
    sub_1932( uVar5, 0 );
    return;
}

void sub_893()
{
    sub_907( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1007();
    }
    return;
}

void sub_907(int iParam0)
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

void sub_1007()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1054()
{
    sub_1063();
    return;
}

void sub_1063()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1162()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1201()
{
    sub_1210();
    return;
}

void sub_1210()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1277()
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

void sub_1378()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1400();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1400()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1491(unknown uParam0)
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
    sub_1890( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1890(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1932(int iParam0, boolean bParam1)
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

void sub_2025(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2034();
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
        sub_2809();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2034()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2072( 5, g_U569[I] )) == 1))
        {
            if ((sub_2072( 1, g_U569[I] )) != 0)
            {
                sub_2358( I );
            }
        }
    }
    if (NOT sub_2524())
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

int sub_2072(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2358(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2443( g_U569 - 1 );
    return;
}

void sub_2443(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2524()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2072( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2809()
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

void sub_2936()
{
    if (DOES_VEHICLE_EXIST( l_U898 ))
    {
        if (NOT (IS_CAR_DEAD( l_U898 )))
        {
            EXPLODE_CAR( l_U898, 1, 0 );
        }
    }
    if (IS_PLAYER_PLAYING( l_U629 ))
    {
        SET_PLAYER_CONTROL( l_U629, 1 );
    }
    if (l_U620 > 0)
    {
        END_CAM_COMMANDS( ref l_U620 );
    }
    REMOVE_CHAR_ELEGANTLY( ref l_U4470 );
    REMOVE_COVER_POINT( l_U4489 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    sub_3089( 4, "LFTHELP" );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_MAX_WANTED_LEVEL( 6 );
    g_U9166 = 0;
    sub_3478();
    return;
}

void sub_3089(int iParam0, string sParam1)
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
            if ((l_U3) AND (g_U9172 == iParam0))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_3310();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3359(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_3310()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3359()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3478()
{
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3531()
{
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    sub_3552( 1015, 0 );
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "PLAYBY3", 0 );
    LOAD_ADDITIONAL_TEXT( "PX3AUD", 6 );
    sub_3662( "PX3AUD" );
    l_U628 = sub_3775();
    l_U629 = sub_3359();
    if (NOT (IS_CHAR_DEAD( l_U628 )))
    {
        GET_PLAYER_GROUP( l_U629, ref l_U627 );
    }
    if (HAS_CHAR_GOT_WEAPON( l_U628, 4 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( l_U628, 4, ref l_U784 );
    }
    if (HAS_CHAR_GOT_WEAPON( l_U628, 16 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( l_U628, 16, ref l_U785 );
    }
    if (HAS_CHAR_GOT_WEAPON( l_U628, 17 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( l_U628, 17, ref l_U786 );
    }
    if (HAS_CHAR_GOT_WEAPON( l_U628, 14 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( l_U628, 14, ref l_U787 );
    }
    sub_4019( 0, l_U628, "NIKO", 0 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U4482 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U4481 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U4484 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U4483 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U4485 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U4486 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U4484, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U4484, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U4485, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U4486, 1 );
    OPEN_SEQUENCE_TASK( ref l_U4487 );
    TASK_SEEK_COVER_FROM_PED( 0, l_U628, 10000 );
    TASK_COMBAT( 0, l_U628 );
    CLOSE_SEQUENCE_TASK( l_U4487 );
    l_U1654[0]._fU4 = {38.88510000, -865.35170000, 7.75040000};
    l_U1654[0]._fU28 = 326.67930000;
    l_U1654[0]._fU84 = 1;
    l_U1654[0]._fU92 = 1;
    l_U1654[2]._fU4 = {18.55650000, -878.52450000, 7.95940000};
    l_U1654[2]._fU92 = 1;
    l_U1654[2]._fU28 = 355.67800000;
    l_U1654[2]._fU84 = 1;
    l_U1654[3]._fU4 = {24.65340000, -874.66100000, 7.74860000};
    l_U1654[0]._fU92 = 1;
    l_U1654[3]._fU28 = 292.91120000;
    l_U1654[3]._fU84 = 1;
    l_U1654[4]._fU4 = {17.26060000, -865.30910000, 7.84850000};
    l_U1654[4]._fU28 = 321.02920000;
    l_U1654[4]._fU84 = 1;
    l_U1654[4]._fU92 = 1;
    l_U2006[0]._fU4 = {29.09550000, -899.44020000, 3.97040000};
    l_U2006[0]._fU28 = 10.53160000;
    l_U2006[0]._fU84 = 1;
    l_U2006[1]._fU4 = {61.75790000, -926.79750000, 14.13650000};
    l_U2006[1]._fU28 = 333.32600000;
    l_U2006[1]._fU84 = 1;
    l_U2006[2]._fU4 = {54.66820000, -914.10160000, 13.13780000};
    l_U2006[2]._fU28 = 145.00060000;
    l_U2006[2]._fU84 = 1;
    l_U2006[3]._fU4 = {29.49520000, -945.85660000, 13.13110000};
    l_U2006[3]._fU28 = 95.40390000;
    l_U2006[3]._fU84 = 1;
    l_U2006[4]._fU4 = {65.79310000, -925.33610000, 13.13210000};
    l_U2006[4]._fU28 = 6.67740000;
    l_U2006[4]._fU84 = 1;
    l_U2006[5]._fU4 = {23.67800000, -921.55750000, 13.24000000};
    l_U2006[5]._fU28 = 6.67740000;
    l_U2006[5]._fU84 = 1;
    l_U2006[5]._fU96 = {33.90780000, -926.67990000, 13.13110000};
    l_U2006[5]._fU152 = l_U4485;
    l_U2006[6]._fU4 = {21.99010000, -932.97460000, 13.13110000};
    l_U2006[6]._fU28 = 6.67740000;
    l_U2006[6]._fU84 = 1;
    l_U2006[6]._fU96 = {36.35550000, -937.43690000, 13.13110000};
    l_U2006[6]._fU152 = l_U4485;
    l_U2358[0]._fU4 = {32.31570000, -983.43930000, 13.73220000};
    l_U2358[0]._fU28 = 95.64710000;
    l_U2358[0]._fU84 = 1;
    l_U2358[1]._fU4 = {39.44110000, -975.73630000, 13.73220000};
    l_U2358[1]._fU28 = 289.90200000;
    l_U2358[1]._fU84 = 1;
    l_U2358[1]._fU108 = 12;
    l_U2358[2]._fU4 = {61.62720000, -997.77010000, 13.73240000};
    l_U2358[2]._fU28 = 78.48300000;
    l_U2358[2]._fU84 = 1;
    l_U2358[3]._fU4 = {94.03380000, -984.82730000, 13.73230000};
    l_U2358[3]._fU28 = 355.19840000;
    l_U2358[3]._fU84 = 1;
    l_U2358[3]._fU108 = 12;
    l_U2358[5]._fU4 = {69.07710000, -986.74000000, 13.73240000};
    l_U2358[5]._fU28 = 8.15800000;
    l_U2358[5]._fU84 = 1;
    l_U2358[5]._fU108 = 12;
    l_U2710[0]._fU4 = {77.40890000, -993.93290000, 13.73240000};
    l_U2710[0]._fU28 = 44.11760000;
    l_U2710[0]._fU84 = 1;
    l_U2710[1]._fU4 = {98.26140000, -963.70250000, 14.73230000};
    l_U2710[1]._fU28 = 253.43250000;
    l_U2710[1]._fU84 = 1;
    l_U2710[2]._fU4 = {115.47910000, -948.52220000, 14.72660000};
    l_U2710[2]._fU28 = 211.46710000;
    l_U2710[2]._fU84 = 1;
    l_U1302[0]._fU4 = {59.33540000, -865.03690000, 5.19830000};
    l_U1302[0]._fU28 = 312.31940000;
    l_U1302[0]._fU84 = 1;
    l_U1302[0]._fU152 = l_U4484;
    l_U1302[1]._fU4 = {62.33630000, -840.89370000, 4.94250000};
    l_U1302[1]._fU28 = 138.87170000;
    l_U1302[1]._fU84 = 1;
    l_U1302[1]._fU152 = l_U4484;
    l_U1302[2]._fU4 = {70.62070000, -860.76750000, 4.25850000};
    l_U1302[2]._fU28 = 54.56400000;
    l_U1302[2]._fU84 = 1;
    l_U1302[2]._fU152 = l_U4484;
    l_U1302[3]._fU4 = {50.07680000, -852.86060000, 4.87940000};
    l_U1302[3]._fU28 = 317.48290000;
    l_U1302[3]._fU84 = 1;
    l_U1302[3]._fU152 = l_U4484;
    l_U1302[4]._fU4 = {71.88790000, -839.01150000, 4.91620000};
    l_U1302[4]._fU28 = 345.14180000;
    l_U1302[4]._fU84 = 1;
    l_U1302[4]._fU152 = l_U4484;
    l_U1302[5]._fU4 = {32.11550000, -938.17450000, 3.72650000};
    l_U1302[5]._fU28 = 59.39120000;
    l_U1302[5]._fU84 = 1;
    l_U1302[5]._fU152 = l_U4484;
    l_U1302[6]._fU4 = {35.98360000, -926.42540000, 3.72920000};
    l_U1302[6]._fU28 = 345.14180000;
    l_U1302[6]._fU84 = 1;
    l_U1302[6]._fU152 = l_U4484;
    l_U1302[7]._fU4 = {54.29670000, -923.57310000, 3.74950000};
    l_U1302[7]._fU28 = 270.36050000;
    l_U1302[7]._fU84 = 1;
    l_U1302[7]._fU152 = l_U4484;
    l_U1302[8]._fU4 = {54.92830000, -915.09180000, 3.72970000};
    l_U1302[8]._fU28 = 72.08190000;
    l_U1302[8]._fU84 = 1;
    l_U1302[8]._fU152 = l_U4484;
    l_U3062[0]._fU4 = {41.53700000, -877.95420000, 20.87500000};
    l_U3062[0]._fU28 = 205.92390000;
    l_U3062[0]._fU84 = 1;
    l_U3062[0]._fU152 = l_U4486;
    l_U3062[1]._fU4 = {39.69430000, -878.55330000, 20.87500000};
    l_U3062[1]._fU28 = 205.92390000;
    l_U3062[1]._fU84 = 1;
    l_U3062[1]._fU152 = l_U4486;
    l_U3062[2]._fU4 = {33.69000000, -878.86510000, 16.54240000};
    l_U3062[2]._fU28 = 205.92390000;
    l_U3062[2]._fU84 = 1;
    l_U3062[2]._fU152 = l_U4486;
    CREATE_CAM( 14, ref l_U626 );
    CREATE_CAM( 14, ref l_U929 );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 14.13000000, -873.28700000, 4.83700000, 0.00000000, 0, 120, ref l_U910[0] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 64.44001000, -885.97000000, 13.31000000, 90.00000000, 0.20000000, 64, ref l_U910[1] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 93.30000000, 64554, 13.82500000, 90.00000000, 0.20000000, 141, ref l_U910[2] );
    ADD_SCENARIO_BLOCKING_AREA( 38.18220000, -1012.34300000, -16.57720000, 153.18220000, -768.34310000, 24.57720000 );
    SET_PED_NON_CREATION_AREA( 38.18220000, -1012.34300000, -16.57720000, 153.18220000, -768.34310000, 24.57720000 );
    return;
}

void sub_3552(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_3662(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3681();
    return;
}

void sub_3681()
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

void sub_3775()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4019(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4103( "\n PED NUMBER ", uParam0 );
    sub_4143( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4103(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4143(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6958()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 61.51960000, -918.71550000, 14.19240000, 100.00000000, 100.00000000, 15.00000000, 0 ))
    {
        if (l_U863 == 0)
        {
            SET_CAR_DENSITY_MULTIPLIER( 0.10000000 );
            SET_PED_DENSITY_MULTIPLIER( 0.10000000 );
            l_U863 = 1;
        }
    }
    else if (l_U863 == 1)
    {
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        l_U863 = 0;
    }
    return;
}

void sub_7165()
{
    int I;

    if (g_U9893._fU24)
    {
        CLEAR_AREA_OF_CARS( -422.96830000, 1451.72700000, 39.10850000, 15.00000000 );
        SET_CUTSCENE_EXTRA_ROOM_POS( -425.80000000, 1461.40000000, 39.10000000 );
        LOAD_SCENE( -425.80000000, 1461.40000000, 39.10000000 );
        START_CUTSCENE_NOW( "PX_1" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        SETTIMERA( 0 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "PX_1" );
        ENABLE_SCENE_STREAMING( 1 );
    }
    CLEAR_AREA_OF_CHARS( -423.07330000, 1486.94600000, 17.86100000, 25.00000000 );
    REQUEST_MODEL( 2006918058 );
    while (NOT (HAS_MODEL_LOADED( 2006918058 )))
    {
        WAIT( 0 );
    }
    while (NOT (sub_7453( 9, ref l_U4470, -423.07330000, 1486.94600000, 17.86100000, 162.63360000 )))
    {
        WAIT( 0 );
    }
    ADD_BLIP_FOR_CHAR( l_U4470, ref l_U4480 );
    CHANGE_BLIP_DISPLAY( l_U4480, 0 );
    SET_BLIP_AS_FRIENDLY( l_U4480, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U4470, 1 );
    sub_4019( 1, l_U4470, "PLAYBOY", 0 );
    SET_PED_DIES_WHEN_INJURED( l_U4470, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U4470, 0 );
    SET_CHAR_DECISION_MAKER( l_U4470, l_U4482 );
    if (NOT (IS_CHAR_DEAD( l_U4470 )))
    {
        SET_GROUP_MEMBER( l_U627, l_U4470 );
    }
    REQUEST_MODEL( -808457413 );
    while (NOT (HAS_MODEL_LOADED( -808457413 )))
    {
        WAIT( 0 );
    }
    LOAD_SCENE( -425.53990000, 1485.73900000, 17.86100000 );
    if (NOT (IS_AREA_OCCUPIED( -427.00000000, 1490.55000000, 17.00000000, -421.40000000, 1494.25000000, 27.00000000, 0, 1, 0, 0, 0 )))
    {
        CREATE_CAR( -808457413, -424.60910000, 1492.48600000, 18.47760000, ref l_U901, 1 );
        SET_CAR_HEADING( l_U901, 269.23000000 );
        CHANGE_CAR_COLOUR( l_U901, 89, 0 );
        SET_CAR_ON_GROUND_PROPERLY( l_U901 );
        SET_CAR_LIVERY( l_U901, 1 );
        for ( I = 1; I <= 9; I++ )
        {
            TURN_OFF_VEHICLE_EXTRA( l_U901, I, 1 );
        }
    }
    ADD_SCENARIO_BLOCKING_AREA( 38.18220000, -1012.34300000, -16.57720000, 153.18220000, -768.34310000, 24.57720000 );
    SET_PED_NON_CREATION_AREA( 38.18220000, -1012.34300000, -16.57720000, 153.18220000, -768.34310000, 24.57720000 );
    SET_CHAR_COORDINATES_DONT_WARP_GANG( l_U628, -425.53990000, 1485.73900000, 17.86100000 );
    SET_CHAR_HEADING( l_U628, 330.30700000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_GROUP_SEPARATION_RANGE( l_U627, 30.00000000 );
    WAIT( 500 );
    DO_SCREEN_FADE_IN( 500 );
    SET_PLAYER_CONTROL( l_U629, 1 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U901 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -808457413 );
    l_U794++;
    return;
}

int sub_7453(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (sub_7464( uParam0 ))
    {
        sub_8184( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
        return 1;
    }
    sub_9840( uParam0 );
    return 0;
}

void sub_7464(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_7475( uParam0 ) );
}

int sub_7475(unknown uParam0)
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
    sub_1890( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_8184(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_7475( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_8234( uParam0, (uParam1^) );
    return;
}

void sub_8234(unknown uParam0, unknown uParam1)
{
    sub_8246( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_8246(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_8340( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_8884( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_8340(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_8884(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_8340( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8340( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_8340( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_8340( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_8340( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_8340( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8340( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_8340( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_8340( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8340( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_8340( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_8340( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_8340( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_9840(unknown uParam0)
{
    REQUEST_MODEL( sub_7475( uParam0 ) );
    return;
}

void sub_10535()
{
    unknown uVar2;
    int I;
    unknown uVar4;
    int iVar5;

    if (l_U798[l_U794] == 0)
    {
        sub_10563();
        ADD_BLIP_FOR_COORD( -3.58370000, -750.60470000, 4.80350000, ref l_U4478 );
        sub_10666( ref l_U4478, 26.20040000, -786.78620000, 3.87600000, 301.42260000 );
        SET_ROUTE( l_U4478, 1 );
        SET_BLIP_AS_FRIENDLY( l_U4478, 1 );
        CHANGE_BLIP_COLOUR( l_U4478, 2 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        sub_10802( "PX3_2GO", ref l_U788, 8, 1 );
        WAIT( 5000 );
        PRINT_NOW( "PBX3_05", 8000, 1 );
        STOP_PED_SPEAKING( l_U628, 1 );
        l_U798[l_U794] = 1;
    }
    if ((l_U563[4] == 0) AND (NOT (IS_CHAR_DEAD( l_U4470 ))))
    {
        if (NOT (IS_CAR_DEAD( l_U897 )))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U4470, l_U897 )))
            {
                sub_11896();
            }
        }
        else if (NOT (DOES_VEHICLE_EXIST( l_U897 )))
        {
            sub_11896();
        }
    }
    else
    {
        sub_13223();
    }
    if ((l_U563[0] == 0) AND (NOT (IS_CHAR_DEAD( l_U4470 ))))
    {
        if ((l_U563[5] == 0) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U4470 )))
        {
            GET_CAR_CHAR_IS_USING( l_U4470, ref uVar2 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U901 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -808457413 );
            if (l_U829 == 0)
            {
                switch (g_U64962)
                {
                    case 0:
                    sub_10802( "PX3_B1V1", ref l_U788, 8, 1 );
                    g_U64962++;
                    break;
                    case 1:
                    sub_10802( "PX3_B1V2", ref l_U788, 8, 1 );
                    g_U64962++;
                    break;
                    case 2:
                    SAY_AMBIENT_SPEECH( l_U4470, "Listen_to_radio", 0, 0, 0 );
                    break;
                }
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 0 );
                l_U829 = 1;
            }
            else if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                if ((sub_13631( l_U628 )) || (IS_CHAR_SITTING_IN_CAR( l_U628, uVar2 )))
                {
                    switch (g_U64962)
                    {
                        case 0:
                        sub_13943( "PX3_B1V1", ref l_U788, 8, 1 );
                        break;
                        case 1:
                        sub_13943( "PX3_B1V2", ref l_U788, 8, 1 );
                        break;
                        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 0 );
                    }
                }
                else if (g_U64962 < 2)
                {
                    sub_14125( ref l_U788 );
                }
                if (l_U563[11] == 0)
                {
                    if ((l_U829 == 1) AND (NOT (IS_CHAR_DEAD( l_U4470 ))))
                    {
                        if (DOES_VEHICLE_EXIST( uVar2 ))
                        {
                            if (NOT (IS_CAR_MODEL( uVar2, 800869680 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U4470, "GET_IN_CAR", 1, 1, 0 );
                            }
                        }
                        else
                        {
                            SAY_AMBIENT_SPEECH( l_U4470, "GET_IN_CAR", 1, 1, 0 );
                        }
                    }
                }
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 1 );;
            }
        }
        else if (g_U64962 < 2)
        {
            sub_14125( ref l_U788 );
        }
    }
    if ((l_U563[8] == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( l_U628, -3.58370000, -750.60470000, 150.00000000, 150.00000000, 0 )))
    {
        ADD_SCENARIO_BLOCKING_AREA( 38.18220000, -1012.34300000, -16.57720000, 153.18220000, -768.34310000, 24.57720000 );
        SET_PED_NON_CREATION_AREA( 38.18220000, -1012.34300000, -16.57720000, 153.18220000, -768.34310000, 24.57720000 );
        CLEAR_AREA_OF_COPS( 2.62100000, -766.86370000, 4.15770000, 50.00000000 );
        CHANGE_BLIP_DISPLAY( l_U4478, 2 );
        CREATE_CAR( 2006918058, -2.87220000, -748.15040000, 5.25970000, ref l_U897, 1 );
        SET_CAR_HEADING( l_U897, 179.17520000 );
        SET_VEHICLE_QUATERNION( l_U897, -0.03840000, -0.07130000, 0.99670000, 0.00990000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U897 );
        ADD_BLIP_FOR_CAR( l_U897, ref l_U4479 );
        SET_BLIP_AS_FRIENDLY( l_U4479, 1 );
        CHANGE_BLIP_COLOUR( l_U4479, 2 );
        CHANGE_BLIP_DISPLAY( l_U4479, 1 );
        CHANGE_CAR_COLOUR( l_U897, 0, 0 );
        FREEZE_CAR_POSITION( l_U897, 1 );
        sub_15090( 510389335 );
        sub_15090( 64730935 );
        sub_15167( "missplayboy3" );
        sub_15167( "misslift" );
        sub_15167( "reaction@male_flee" );
        while ((NOT sub_15543()) || ((NOT sub_15401()) || (NOT sub_15299())))
        {
            WAIT( 0 );
        }
        CREATE_CHAR( 26, 64730935, 36.25710000, -843.88640000, 7.94430000, ref l_U4472[0], 1 );
        CREATE_CHAR( 26, 64730935, 31.89400000, -845.32210000, 15.54240000, ref l_U4472[1], 1 );
        CREATE_CHAR( 26, 64730935, 36.77860000, -869.97330000, 15.61570000, ref l_U4472[2], 1 );
        CREATE_CHAR( 26, 64730935, 39.07950000, -867.26130000, 7.76630000, ref l_U4472[3], 1 );
        for ( I = 0; I <= 3; I++ )
        {
            TASK_WANDER_STANDARD( l_U4472[I] );
        }
        SET_ZONE_NO_COPS( "THXCH", 1 );
        SET_ZONE_NO_COPS( "CASGR", 1 );
        StrCopy( ref l_U832, "Main Guys2", 64 );
        sub_15903( ref l_U2006, 9, l_U832, 1075838976, 1 );
        l_U563[8] = 1;
    }
    if ((LOCATE_CHAR_ANY_MEANS_2D( l_U628, -3.58370000, -750.60470000, 50.50000000, 50.50000000, 0 )) AND (l_U563[11] == 0))
    {
        sub_10802( "PX3_ARR2", ref l_U788, 8, 1 );
        STOP_PED_SPEAKING( l_U4470, 1 );
        l_U563[11] = 1;
    }
    if (l_U563[5] == 0)
    {
        if ((NOT (sub_17197( l_U788 ))) AND (((sub_17128( l_U628 )) < 3.00000000) AND ((l_U563[4] == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( l_U628, -3.58370000, -750.60470000, 10.50000000, 10.50000000, 0 )))))
        {
            sub_10802( "PX3_HEDSET", ref l_U788, 8, 1 );
            if ((NOT (IS_CAR_DEAD( l_U897 ))) AND (NOT (IS_CHAR_DEAD( l_U4470 ))))
            {
                REMOVE_CHAR_FROM_GROUP( l_U4470 );
                OPEN_SEQUENCE_TASK( ref uVar4 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U897, 45000, 0 );
                CLOSE_SEQUENCE_TASK( uVar4 );
                TASK_PERFORM_SEQUENCE( l_U4470, uVar4 );
                CLEAR_SEQUENCE_TASK( uVar4 );
            }
            l_U563[4] = 1;
        }
    }
    if ((l_U563[10] == 0) AND ((NOT (sub_17197( l_U788 ))) AND ((l_U563[5] == 0) AND (l_U563[4] == 1))))
    {
        PRINT_NOW( "PBX3_06", 8000, 1 );
        l_U563[10] = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U628 )))
    {
        GET_CAR_CHAR_IS_USING( l_U628, ref iVar5 );
    }
    if (iVar5 != l_U897)
    {
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U902 );
    }
    if ((NOT (IS_CAR_DEAD( l_U897 ))) AND ((l_U563[5] == 0) AND (l_U563[4] == 1)))
    {
        if ((IS_CHAR_SITTING_IN_CAR( l_U628, l_U897 )) || ((IS_CHAR_GETTING_IN_TO_A_CAR( l_U628 )) AND (iVar5 == l_U897)))
        {
            STOP_PED_SPEAKING( l_U4470, 0 );
            SET_CREATE_RANDOM_COPS( 0 );
            CREATE_CAR( 2006918058, 7.65600000, -857.56100000, 4.63140000, ref l_U900, 1 );
            SET_CAR_HEADING( l_U900, 17.67700000 );
            CHANGE_CAR_COLOUR( l_U900, 0, 0 );
            SET_VEH_ALARM( l_U900, 1 );
            CREATE_CHAR( 26, 64730935, 73.60000000, -835.45410000, 50.00160000, ref l_U950[0]._fU0, 1 );
            SET_CHAR_HEADING( l_U950[0]._fU0, 16.33570000 );
            GIVE_WEAPON_TO_CHAR( l_U950[0]._fU0, 14, 30000, 1 );
            SET_CURRENT_CHAR_WEAPON( l_U950[0]._fU0, 14, 1 );
            TASK_PLAY_ANIM( l_U950[0]._fU0, "Lean_Balcony_Loop_nowave", "missplayboy3", 1000.00000000, 1, 0, 0, 0, -1 );
            STOP_PED_SPEAKING( l_U950[0]._fU0, 1 );
            CREATE_CHAR( 26, 64730935, 8.00500000, -860.73500000, 50.00160000, ref l_U950[1]._fU0, 1 );
            SET_CHAR_HEADING( l_U950[1]._fU0, 81.99380000 );
            GIVE_WEAPON_TO_CHAR( l_U950[1]._fU0, 14, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U950[1]._fU0, 14, 1 );
            TASK_PLAY_ANIM( l_U950[1]._fU0, "Lean_Balcony_Loop_nowave", "missplayboy3", 8.00000000, 1, 0, 0, 0, -1 );
            STOP_PED_SPEAKING( l_U950[1]._fU0, 1 );
            CREATE_CHAR( 26, 510389335, 6.69390000, -825.54350000, 50.17700000, ref l_U950[2]._fU0, 1 );
            SET_CHAR_HEADING( l_U950[2]._fU0, 340.06220000 );
            GIVE_WEAPON_TO_CHAR( l_U950[2]._fU0, 14, 30000, 1 );
            SET_CURRENT_CHAR_WEAPON( l_U950[2]._fU0, 14, 1 );
            TASK_PLAY_ANIM( l_U950[2]._fU0, "Lean_Balcony_Loop_nowave", "missplayboy3", 1000.00000000, 1, 0, 0, 0, -1 );
            STOP_PED_SPEAKING( l_U950[2]._fU0, 1 );
            if (NOT (IS_CHAR_DEAD( l_U950[1]._fU0 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U950[1]._fU0, "reaction@male_flee", "RIFLE_SHOT_NEAR" ))
                {
                    SET_CHAR_ANIM_SPEED( l_U950[1]._fU0, "reaction@male_flee", "RIFLE_SHOT_NEAR", 0.67000000 );
                }
            }
            for ( I = 0; I <= 2; I++ )
            {
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U950[I]._fU0, 0 );
                GIVE_WEAPON_TO_CHAR( l_U950[I]._fU0, 14, 30000, 0 );
                SET_CHAR_HEALTH( l_U950[I]._fU0, 500 );
                FREEZE_CHAR_POSITION( l_U950[I]._fU0, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U950[I]._fU0 );
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U950[I]._fU0, 1 );
            }
            if (NOT (IS_CAR_DEAD( l_U897 )))
            {
                FREEZE_CAR_POSITION( l_U897, 0 );
            }
            if (NOT (HAS_CHAR_GOT_WEAPON( l_U628, 16 )))
            {
                GIVE_WEAPON_TO_CHAR( l_U628, 17, 20, 0 );
            }
            GIVE_WEAPON_TO_CHAR( l_U628, 4, 20, 0 );
            if (NOT (HAS_CHAR_GOT_WEAPON( l_U628, 15 )))
            {
                GIVE_WEAPON_TO_CHAR( l_U628, 14, 450, 0 );
            }
            if (HAS_CHAR_GOT_WEAPON( l_U628, 17 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U628, 17, 1 );
            }
            else
            {
                SET_CURRENT_CHAR_WEAPON( l_U628, 16, 1 );
            }
            SET_ROUTE( l_U4478, 0 );
            REMOVE_BLIP( l_U4478 );
            REMOVE_BLIP( l_U4479 );
            SET_WANTED_MULTIPLIER( 0.10000000 );
            l_U563[5] = 1;
        }
    }
    if ((l_U563[8] == 1) AND (l_U563[5] == 0))
    {
        if ((IS_CAR_IN_WATER( l_U897 )) || (IS_CAR_DEAD( l_U897 )))
        {
            l_U794 = 1;
            l_U796 = 1;
            l_U797 = 0;
            PRINT_NOW( "PBX3_F1", 7500, 1 );
        }
    }
    if ((l_U563[5] == 1) AND (l_U563[0] == 0))
    {
        if (NOT (DOES_CAM_EXIST( l_U626 )))
        {
            CREATE_CAM( 14, ref l_U626 );
        }
        if (NOT (DOES_CAM_EXIST( l_U621 )))
        {
            CREATE_CAM( 14, ref l_U621 );
        }
        CLEAR_AREA( 0.85926200, -742.11810000, 5.56994800, 4.00000000, 1 );
        SET_CAM_POS( l_U621, 0.85926200, -742.11810000, 5.56994800 );
        SET_CAM_ROT( l_U621, 8.67053400, 0.00000000, 165.47730000 );
        SET_CAM_FOV( l_U621, 50.09997000 );
        if (NOT (DOES_CAM_EXIST( l_U623 )))
        {
            CREATE_CAM( 14, ref l_U623 );
        }
        SET_CAM_POS( l_U623, 0.85926200, -742.11810000, 5.56994800 );
        SET_CAM_ROT( l_U623, 8.67053400, 0.00000000, 165.47730000 );
        SET_CAM_FOV( l_U623, 56.09997000 );
        if (NOT (DOES_CAM_EXIST( l_U624 )))
        {
            CREATE_CAM( 3, ref l_U624 );
        }
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 6500, 0 );
        if ((NOT (IS_CAR_DEAD( l_U897 ))) AND (NOT (IS_CHAR_DEAD( l_U4470 ))))
        {
            if ((((sub_19486( l_U4470, -3.53210000, -753.63420000, 3.94110000 )) < (sub_19573( l_U4470, l_U897 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( l_U4470 )))) || (NOT (IS_CHAR_IN_CAR( l_U4470, l_U897 ))))
            {
                SET_CHAR_COORDINATES( l_U4470, -3.53210000, -753.63420000, 3.94110000 );
                SET_CHAR_HEADING( l_U4470, 21.15050000 );
            }
        }
        sub_19738( ref l_U624, 1 );
        sub_19795( 1 );
        while (sub_17197( l_U788 ))
        {
            WAIT( 0 );
        }
        CLEAR_PRINTS();
        sub_4019( 1, 0, "PLAYBOY", 0 );
        SETTIMERA( 0 );
        l_U563[0] = 1;
    }
    if (NOT (IS_CAR_DEAD( l_U897 )))
    {
        if ((NOT (sub_17197( l_U788 ))) AND ((IS_CHAR_SITTING_IN_CAR( l_U628, l_U897 )) AND ((l_U563[1] == 0) AND (l_U563[0] == 1))))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_AREA_OF_CHARS( 21.99010000, -932.97460000, 13.13110000, 270.00000000 );
            if ((NOT (IS_CAR_DEAD( l_U902 ))) AND (DOES_VEHICLE_EXIST( l_U902 )))
            {
                if (LOCATE_CAR_3D( l_U902, -0.06600000, -754.36050000, 5.09070000, 7.00000000, 5.00000000, 2.00000000, 0 ))
                {
                    SET_CAR_COORDINATES( l_U902, 1.62020000, -757.75070000, 4.78400000 );
                    SET_CAR_HEADING( l_U902, 4.45800000 );
                }
            }
            CLEAR_AREA_OF_CARS( -4.67810000, -748.43670000, 4.59740000, 2.50000000 );
            sub_20257();
            SET_CAM_POS( l_U621, 54.51250000, -851.62690000, 6.93444000 );
            SET_CAM_ROT( l_U621, -3.90011000, 0.00000000, 104.86460000 );
            SET_CAM_FOV( l_U621, 45.00000000 );
            SET_CAM_NEAR_DOF( l_U621, 6.00000000 );
            SET_CAM_FAR_DOF( l_U621, 47.00000000 );
            SET_CAM_POS( l_U623, 62.56580000, -851.46610000, 17.08752000 );
            SET_CAM_ROT( l_U623, 30.83249000, -1.47606000, 96.99378000 );
            SET_CAM_FOV( l_U623, 45.00000000 );
            SET_CAM_NEAR_DOF( l_U623, 6.00000000 );
            SET_CAM_FAR_DOF( l_U623, 47.00000000 );
            SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 10000, 0 );
            WAIT( 500 );
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            sub_20700( "PX3_LAYOUT", 0, 1, ref l_U788, 8, 1 );
            while ((l_U830 == 0) AND (sub_17197( l_U788 )))
            {
                if ((l_U563[0] == 1) AND ((IS_CHAR_SITTING_IN_ANY_CAR( l_U628 )) AND ((IS_SCREEN_FADED_IN()) AND ((TIMERA() > 1000) AND (sub_20831())))))
                {
                    l_U830 = 1;
                }
                WAIT( 0 );
            }
            sub_20700( "PX3_LAYOUT", 1, 1, ref l_U788, 8, 1 );
            SETTIMERA( 0 );
            l_U563[1] = 1;
        }
    }
    if (((TIMERA() > 4000) AND (NOT (sub_17197( l_U788 )))) AND ((l_U563[2] == 0) AND (l_U563[1] == 1)))
    {
        if (NOT (DOES_CAM_EXIST( l_U621 )))
        {
            CREATE_CAM( 14, ref l_U621 );
        }
        SET_CAM_POS( l_U621, 68.66614000, -836.08120000, 50.00033000 );
        SET_CAM_ROT( l_U621, 4.58971400, -1.71336500, -64.98296000 );
        SET_CAM_FOV( l_U621, 46.50000000 );
        SET_CAM_NEAR_DOF( l_U621, 1.00000000 );
        SET_CAM_FAR_DOF( l_U621, 7.00000000 );
        SET_CAM_POS( l_U623, 68.66614000, -836.08120000, 50.00033000 );
        SET_CAM_ROT( l_U623, 4.58971400, -1.71336500, -64.98296000 );
        SET_CAM_FOV( l_U623, 43.00000000 );
        SET_CAM_NEAR_DOF( l_U623, 1.00000000 );
        SET_CAM_FAR_DOF( l_U623, 7.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 11000, 0 );
        sub_19738( ref l_U626, 0 );
        sub_19738( ref l_U624, 1 );
        WAIT( 500 );
        sub_20700( "PX3_LAYOUT", 2, 0, ref l_U788, 8, 1 );
        l_U563[2] = 1;
    }
    if ((l_U563[2] == 1) AND ((l_U852 == 0) AND ((sub_21435( l_U788 )) == 3)))
    {
        SET_CAM_POS( l_U621, 12.49182000, -824.68400000, 50.25799000 );
        SET_CAM_ROT( l_U621, 10.32926000, -0.00000000, 91.43772000 );
        SET_CAM_FOV( l_U621, 45.00000000 );
        SET_CAM_POS( l_U623, 12.49182000, -821.50910000, 50.25799000 );
        SET_CAM_ROT( l_U623, 10.32926000, -0.00000000, 112.61690000 );
        SET_CAM_FOV( l_U623, 45.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 10000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U624, 0, 0, 1, 1 );
        l_U852 = 1;
    }
    if (((sub_21435( l_U788 )) == 4) AND ((l_U563[3] == 0) AND (l_U563[2] == 1)))
    {
        WAIT( 500 );
        if (NOT (DOES_CAM_EXIST( l_U621 )))
        {
            CREATE_CAM( 14, ref l_U621 );
        }
        SET_CAM_POS( l_U621, -4.25927700, -750.82380000, 5.40373900 );
        SET_CAM_ROT( l_U621, 11.86440000, -0.00000000, -29.61104000 );
        SET_CAM_FOV( l_U621, 24.40005000 );
        SET_CAM_NEAR_DOF( l_U621, 1.00000000 );
        SET_CAM_FAR_DOF( l_U621, 5.00000000 );
        if (NOT (DOES_CAM_EXIST( l_U623 )))
        {
            CREATE_CAM( 14, ref l_U623 );
        }
        SET_CAM_POS( l_U623, -4.25927700, -750.82380000, 5.40373900 );
        SET_CAM_ROT( l_U623, 11.86440000, -0.00000000, -29.61104000 );
        SET_CAM_FOV( l_U623, 30.40005000 );
        SET_CAM_NEAR_DOF( l_U623, 1.00000000 );
        SET_CAM_FAR_DOF( l_U623, 5.00000000 );
        if (NOT (DOES_CAM_EXIST( l_U624 )))
        {
            CREATE_CAM( 3, ref l_U624 );
        }
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 5000, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        if (NOT (IS_CHAR_DEAD( l_U4470 )))
        {
            TASK_LEAVE_ANY_CAR( l_U4470 );
        }
        WAIT( 1000 );
        if (NOT (IS_CHAR_DEAD( l_U628 )))
        {
            TASK_LEAVE_ANY_CAR( l_U628 );
        }
        l_U563[3] = 1;
    }
    if ((l_U563[0] == 1) AND ((IS_CHAR_SITTING_IN_ANY_CAR( l_U628 )) AND ((IS_SCREEN_FADED_IN()) AND ((TIMERA() > 1000) AND (sub_20831())))))
    {
        l_U830 = 1;
    }
    if (((sub_21435( l_U788 )) == 5) AND ((l_U563[3] == 1) AND (l_U563[7] == 0)))
    {
        if (NOT (IS_CHAR_DEAD( l_U4470 )))
        {
            SET_CHAR_COORDINATES( l_U4470, -2.19920000, -744.70000000, 4.94770000 );
            SET_CHAR_HEADING( l_U4470, 238.01530000 );
            CREATE_OBJECT( -596812191, 3.28770000, -748.50370000, 5.89750000, ref l_U909, 1 );
            if (NOT (IS_OBJECT_ATTACHED( l_U909 )))
            {
                ATTACH_OBJECT_TO_PED( l_U909, l_U4470, 1219, l_U921, l_U924, 0 );
            }
        }
        SET_CAM_POS( l_U626, 3.87795000, -753.11540000, 5.26355700 );
        SET_CAM_ROT( l_U626, 3.28272900, -0.00000000, 38.00736000 );
        SET_CAM_FOV( l_U626, 45.00000000 );
        sub_19738( ref l_U626, 1 );
        sub_19738( ref l_U624, 0 );
        OPEN_SEQUENCE_TASK( ref l_U4488 );
        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 0.18220000, -747.34310000, 4.57720000, 3, 10000, 0.50000000 );
        TASK_GO_STRAIGHT_TO_COORD( 0, 3.21000000, -747.26640000, 5.89510000, 3, 5000 );
        TASK_GO_STRAIGHT_TO_COORD( 0, 3.28770000, -748.50370000, 5.89750000, 2, 5000 );
        CLOSE_SEQUENCE_TASK( l_U4488 );
        if (NOT (IS_CHAR_DEAD( l_U4470 )))
        {
            CLEAR_AREA( 0.18220000, -747.34310000, 4.57720000, 3.00000000, 1 );
            TASK_PERFORM_SEQUENCE( l_U4470, l_U4488 );
        }
        TASK_TURN_CHAR_TO_FACE_COORD( l_U628, 3.21000000, -747.26640000, 5.89510000 );
        SETTIMERA( 0 );
        l_U563[7] = 1;
    }
    if (((TIMERA() > 3000) AND (NOT (sub_17197( l_U788 )))) AND ((l_U563[7] == 1) AND (l_U563[5] == 1)))
    {
        if (NOT (IS_CAR_DEAD( l_U897 )))
        {
            FREEZE_CAR_POSITION( l_U897, 0 );
        }
        for ( I = 0; I <= 3; I++ )
        {
            DELETE_CHAR( ref l_U4472[I] );
        }
        if (NOT (IS_CHAR_DEAD( l_U4470 )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U4470 );
            if ((IS_CHAR_GETTING_IN_TO_A_CAR( l_U4470 )) || (IS_CHAR_IN_ANY_CAR( l_U4470 )))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U4470, 3.28770000, -748.50370000, 5.89750000 );
            }
            if (NOT (IS_CHAR_DEAD( l_U4470 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U4470 );
                ATTACH_PED_TO_OBJECT( l_U4470, g_U9165, 0, 0.80000000, 0.00000000, 0.25000000, 262.84820000, 0.00000000, 0, 0 );
                SET_CHAR_COLLISION( l_U4470, 1 );
            }
        }
        sub_19795( 0 );
        sub_19738( ref l_U626, 0 );
        sub_19738( ref l_U624, 0 );
        SET_CAM_FOV( l_U626, 55.00000000 );
        l_U794++;
    }
    if (NOT (IS_CHAR_DEAD( l_U4470 )))
    {
        if ((l_U563[5] == 1) AND ((IS_SCREEN_FADED_IN()) AND ((TIMERA() > 1000) AND ((sub_20831()) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U4470 ))))))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            l_U830 = 1;
        }
    }
    if (l_U830 == 1)
    {
        if (NOT (IS_CHAR_DEAD( l_U4470 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U4470 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U4470, 3.28770000, -748.50370000, 5.89750000 );
            }
            else
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U4470 );
                SET_CHAR_COORDINATES( l_U4470, 3.28770000, -748.50370000, 5.89750000 );
            }
        }
        if (IS_CHAR_IN_ANY_CAR( l_U628 ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U628, -1.69530000, -747.72140000, 4.57190000 );
            if (NOT (IS_CHAR_DEAD( l_U4470 )))
            {
                sub_23417( l_U628, l_U4470 );
            }
        }
        CREATE_OBJECT( -596812191, 3.28770000, -748.50370000, 5.89750000, ref l_U909, 1 );
        if (NOT (IS_CHAR_DEAD( l_U4470 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U4470 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U628, 3.28770000, -748.50370000, 5.89750000 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U4470 );
            REMOVE_CHAR_FROM_GROUP( l_U4470 );
            ATTACH_PED_TO_OBJECT( l_U4470, g_U9165, 0, 0.80000000, 0.00000000, 0.25000000, 262.84820000, 0.00000000, 0, 0 );
            if (NOT (IS_OBJECT_ATTACHED( l_U909 )))
            {
                ATTACH_OBJECT_TO_PED( l_U909, l_U4470, 1219, l_U921, l_U924, 0 );
            }
            TASK_LOOK_AT_CHAR( l_U4470, l_U628, 60000, 0 );
        }
        for ( I = 0; I <= 3; I++ )
        {
            DELETE_CHAR( ref l_U4472[I] );
        }
        if (NOT (IS_CAR_DEAD( l_U897 )))
        {
            FREEZE_CAR_POSITION( l_U897, 0 );
            LOCK_CAR_DOORS( l_U897, 6 );
            CLOSE_ALL_CAR_DOORS( l_U897 );
        }
        sub_19795( 0 );
        sub_19738( ref l_U626, 0 );
        sub_19738( ref l_U624, 0 );
        sub_12590( ref l_U788, 0 );
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        SET_CAM_FOV( l_U626, 55.00000000 );
        l_U563[3] = 1;
        l_U794++;
    }
    return;
}

void sub_10563()
{
    int I;

    for ( I = 0; I <= 31; I++ )
    {
        l_U563[I] = 0;
    }
    return;
}

void sub_10666(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_10802(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_10825( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_10825(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_10879( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_10879(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_10901( iParam1 )))
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
    sub_11593( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_10901(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_10978( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_10978( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_10978( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_10978(unknown uParam0)
{
    return;
}

void sub_11593(int iParam0, int iParam1)
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

int sub_11896()
{
    if (NOT (IS_CHAR_DEAD( l_U4470 )))
    {
        if ((((sub_11934( l_U628, l_U4470, 1 )) > 10.00000000) AND ((NOT (IS_CHAR_IN_ANY_CAR( l_U4470 ))) AND (IS_CHAR_IN_ANY_CAR( l_U628 )))) || ((sub_11934( l_U628, l_U4470, 1 )) > 30.00000000))
        {
            if (l_U850 == 0)
            {
                PRINT_NOW( "PBX3_G1", 7500, 1 );
                CHANGE_BLIP_DISPLAY( l_U4480, 4 );
                if (DOES_BLIP_EXIST( l_U4478 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U4478, 0 );
                }
                if (DOES_BLIP_EXIST( l_U4479 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U4479, 0 );
                }
                l_U850 = 1;
            }
        }
        else if ((l_U850 == 1) AND ((sub_11934( l_U628, l_U4470, 1 )) < 12.00000000))
        {
            PRINT_NOW( "PBX3_5B", 7500, 1 );
            if (NOT (IS_GROUP_MEMBER( l_U4470, l_U627 )))
            {
                SET_GROUP_MEMBER( l_U627, l_U4470 );
            }
            CHANGE_BLIP_DISPLAY( l_U4480, 0 );
            if (DOES_BLIP_EXIST( l_U4478 ))
            {
                CHANGE_BLIP_DISPLAY( l_U4478, 4 );
            }
            if (DOES_BLIP_EXIST( l_U4479 ))
            {
                CHANGE_BLIP_DISPLAY( l_U4479, 4 );
            }
            l_U850 = 0;
        }
        if ((sub_11934( l_U628, l_U4470, 0 )) > (30.00000000 * 2.50000000))
        {
            if (DOES_BLIP_EXIST( l_U4480 ))
            {
                REMOVE_BLIP( l_U4480 );
            }
            if (DOES_BLIP_EXIST( l_U4478 ))
            {
                REMOVE_BLIP( l_U4478 );
            }
            if (DOES_BLIP_EXIST( l_U4479 ))
            {
                REMOVE_BLIP( l_U4479 );
            }
            PRINT_NOW( "PBX3_F3", 7500, 1 );
            WAIT( 7500 );
            sub_12576();
        }
        return 1;
        break;
    }
    return 0;
}

void sub_11934(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_12576()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    sub_12590( ref l_U788, 0 );
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3359(), 150 );
        SAY_AMBIENT_SPEECH( l_U628, "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    if (HAS_CHAR_GOT_WEAPON( l_U628, 4 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( l_U628, 4, ref iVar2 );
        ADD_AMMO_TO_CHAR( l_U628, 4, iVar2 * -1 );
        ADD_AMMO_TO_CHAR( l_U628, 4, l_U784 );
    }
    if (HAS_CHAR_GOT_WEAPON( l_U628, 16 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( l_U628, 16, ref iVar3 );
        ADD_AMMO_TO_CHAR( l_U628, 16, iVar3 * -1 );
        ADD_AMMO_TO_CHAR( l_U628, 16, l_U785 );
    }
    if (HAS_CHAR_GOT_WEAPON( l_U628, 17 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( l_U628, 17, ref iVar4 );
        ADD_AMMO_TO_CHAR( l_U628, 17, iVar4 * -1 );
        ADD_AMMO_TO_CHAR( l_U628, 17, l_U786 );
    }
    if (HAS_CHAR_GOT_WEAPON( l_U628, 14 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( l_U628, 14, ref iVar5 );
        ADD_AMMO_TO_CHAR( l_U628, 14, iVar5 * -1 );
        ADD_AMMO_TO_CHAR( l_U628, 14, l_U787 );
    }
    sub_13044();
    sub_2936();
    return;
}

void sub_12590(int iParam0, unknown uParam1)
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

void sub_13044()
{
    sub_13053();
    return;
}

void sub_13053()
{
    int iVar2;

    iVar2 = 9;
    sub_13067( iVar2 );
    sub_2025( iVar2 );
    return;
}

void sub_13067(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3359(), 150 );
    CLEAR_HELP();
    sub_849( uParam0 );
    return;
}

void sub_13223()
{
    if (NOT l_U849)
    {
        if (IS_CHAR_INJURED( l_U4470 ))
        {
            sub_12590( ref l_U788, 0 );
            PRINT_NOW( "PBX3_F2", 8000, 1 );
            sub_12576();
        }
    }
    return;
}

int sub_13631(int iParam0)
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
                if (sub_13695( uVar3 ))
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

int sub_13695(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_13943(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13966( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_13966(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_10879( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_14125(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_10978( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_10978( "\n CONVERSATION PAUSED AT LINE " );
            sub_14281( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_10978( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_10978( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_10978( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_14281(unknown uParam0)
{
    return;
}

void sub_15090(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U484[l_U517] = uParam0;
    l_U517++;
    return;
}

void sub_15167(unknown uParam0)
{
    PRINTSTRING( "Requesting :" );
    PRINTSTRING( uParam0 );
    PRINTNL();
    REQUEST_ANIMS( uParam0 );
    l_U518[l_U527] = uParam0;
    l_U527++;
    return;
}

int sub_15299()
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

int sub_15401()
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

int sub_15543()
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

void sub_15903(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, boolean bParam19)
{
    int iVar22;
    unknown uVar23;
    int I;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    int iVar41;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        uVar25 = {uParam2};
        if ((uParam0^)[I]._fU84 == 1)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar23 );
            switch (uVar23)
            {
                case 0:
                iVar22 = 64730935;
                break;
                case 1:
                iVar22 = 510389335;
                break;
            }
            CREATE_CHAR( 26, iVar22, (uParam0^)[I]._fU4._fU0, (uParam0^)[I]._fU4._fU4, (uParam0^)[I]._fU4._fU8, ref (uParam0^)[I]._fU0, 1 );
            SET_CHAR_HEADING( (uParam0^)[I]._fU0, (uParam0^)[I]._fU28 );
            SET_CHAR_DECISION_MAKER( (uParam0^)[I]._fU0, l_U4482 );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^)[I]._fU0, 24 );
            SET_CHAR_RELATIONSHIP( (uParam0^)[I]._fU0, 5, 0 );
            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^)[I]._fU0, 1 );
            if ((uParam0^)[I]._fU152 == nil)
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, l_U4485 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( (uParam0^)[I]._fU0, (uParam0^)[I]._fU4, uParam18 );
            }
            else
            {
                SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, (uParam0^)[I]._fU152 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( (uParam0^)[I]._fU0, (uParam0^)[I]._fU4, uParam18 );
            }
            if ((uParam0^)[I]._fU108 != 12)
            {
                switch (sub_16378( 0, 3 ))
                {
                    case 0:
                    GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, 12, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( (uParam0^)[I]._fU0, 12, 1 );
                    break;
                    case 1:
                    GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, 14, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( (uParam0^)[I]._fU0, 14, 1 );
                    break;
                    case 2:
                    GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, 7, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( (uParam0^)[I]._fU0, 7, 1 );
                    break;
                }
            }
            else
            {
                GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, 12, 30000, 0 );
                SET_CURRENT_CHAR_WEAPON( (uParam0^)[I]._fU0, 12, 1 );
            }
            SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^)[I]._fU0 );
            PRINTSTRING( "Creating goon number " );
            PRINTSTRING( "- " );
            PRINTINT( I );
            PRINTSTRING( " -" );
            PRINTNL();
            ConcatString(ref uVar25, I, 64);
            SET_CHAR_NAME_DEBUG( (uParam0^)[I]._fU0, ref uVar25 );
            if ((sub_16378( 0, 100 )) > 15)
            {
                SET_PED_DONT_DO_EVASIVE_DIVES( (uParam0^)[I]._fU0, 1 );
            }
            SET_CHAR_ACCURACY( (uParam0^)[I]._fU0, 20 );
            GET_CHAR_MODEL( (uParam0^)[I]._fU0, ref iVar41 );
            if (iVar41 != 510389335)
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^)[I]._fU0, 8, 2, 0 );
            }
            if (bParam19)
            {
                FREEZE_CHAR_POSITION( (uParam0^)[I]._fU0, 1 );
                SET_CHAR_WILL_USE_COVER( (uParam0^)[I]._fU0, 0 );
            }
            l_U864++;
        }
    }
    return;
}

void sub_16378(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_17128(unknown uParam0)
{
    float Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref Result );
    }
    else
    {
        Result = 0.00000000;
    }
    return Result;
}

int sub_17197(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_10978( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_10978( "\n speech is not playing" );
    }
    return 0;
}

void sub_19486(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_19573(unknown uParam0, unknown uParam1)
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

void sub_19738(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

void sub_19795(boolean bParam0)
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

void sub_20257()
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

void sub_20700(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_20727( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_20727(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_10879( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_20831()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_21435(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_17197( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_23417(unknown uParam0, unknown uParam1)
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

void sub_24027()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (l_U798[l_U794] == 0)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2006918058 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U899 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U897 );
        REQUEST_MODEL( -302362397 );
        REQUEST_MODEL( -1616890832 );
        while ((NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\PX2_DECONSTRUCTION" ))) || ((NOT (HAS_MODEL_LOADED( -1616890832 ))) || (NOT (HAS_MODEL_LOADED( -302362397 )))))
        {
            WAIT( 0 );
        }
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U950[I]._fU0 )))
            {
                SET_COMBAT_DECISION_MAKER( l_U950[I]._fU0, l_U4485 );
                SET_CHAR_WILL_USE_COVER( l_U950[I]._fU0, 1 );
                SET_SENSE_RANGE( l_U950[I]._fU0, 1000.00000000 );
                ALLOW_REACTION_ANIMS( l_U950[I]._fU0, 1 );
                ADD_BLIP_FOR_CHAR( l_U950[I]._fU0, ref l_U950[I]._fU80 );
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U950[I]._fU0, 1 );
            }
            CHANGE_BLIP_DISPLAY( l_U950[I]._fU80, 4 );
            SET_CAM_FOV( l_U626, 55.00000000 );
            l_U950[I]._fU148 = 2;
            l_U950[I]._fU84 = 1;
        }
        l_U950[2]._fU148 = 3;
        l_U950[2]._fU136 = {-0.10000000, 1.00000000, 0.00000000};
        if (HAS_CHAR_GOT_WEAPON( l_U628, 16 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U628, 16, 0 );
        }
        if (l_U563[3] == 1)
        {
            PRINT_NOW( "PBX3_02", 7500, 1 );
        }
        else
        {
            REMOVE_BLIP( l_U4478 );
        }
        sub_10563();
        SETTIMERB( 0 );
        l_U798[l_U794] = 1;
    }
    sub_24628();
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT l_U945[I])
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U950[I]._fU0, l_U628, 0 ))
            {
                PRINTSTRING( "Triggering cutscene for guy number: " );
                PRINTINT( I );
                PRINTNL();
                SET_PED_GENERATES_DEAD_BODY_EVENTS( l_U950[I]._fU0, 1 );
                l_U867[I] = 1;
            }
            if (l_U867[I] == 1)
            {
                PRINTSTRING( "Running cutscene for guy number: " );
                PRINTINT( I );
                PRINTNL();
                sub_25034( I );
            }
        }
    }
    if (DOES_OBJECT_EXIST( g_U9165 ))
    {
        if ((l_U563[6] == 0) AND ((l_U856 == 0) AND (IS_CHAR_TOUCHING_OBJECT( l_U628, g_U9165 ))))
        {
            sub_4019( 1, l_U4470, "PLAYBOY", 0 );
            switch (g_U64963)
            {
                case 0:
                sub_10802( "PX3_B2V1", ref l_U788, 8, 1 );
                g_U64963++;
                break;
                case 1:
                sub_10802( "PX3_B2V2", ref l_U788, 8, 1 );
                g_U64963++;
                break;
            }
            GET_GAME_TIMER( ref l_U891 );
            l_U563[6] = 1;
        }
    }
    if (DOES_OBJECT_EXIST( g_U9165 ))
    {
        GET_GAME_TIMER( ref l_U890 );
        if ((l_U892 == 0) AND ((IS_PED_ATTACHED_TO_OBJECT( l_U628, g_U9165 )) AND (((l_U890 - l_U891) > 25000) AND (l_U563[6] == 1))))
        {
            sub_10802( "PX3_LIFT", ref l_U788, 8, 1 );
            l_U892 = 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U4470 )))
    {
        if ((l_U563[7] == 0) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U4470, 13.08250000, -752.57060000, 112.11110000, 9.00000000, 4.00000000, 1.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 13.08250000, -752.57060000, 112.11110000, 9.00000000, 4.00000000, 1.00000000, 0 ))))
        {
            if ((sub_28419( ref l_U950, 3, 0 )) <= 2)
            {
                PRINT_NOW( "PBX3_02", 7500, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U4470 )))
            {
                TASK_CLEAR_LOOK_AT( l_U4470 );
                OPEN_SEQUENCE_TASK( ref uVar3 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 15.31680000, -751.69640000, 111.10900000, 3, 6000, 0.50000000 );
                TASK_ACHIEVE_HEADING( 0, 200.81460000 );
                TASK_PLAY_ANIM( 0, "LOOK_INTRO", "missPlayboy3", 8.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM( 0, "LOOK_INTRO_IDLE", "missPlayboy3", 8.00000000, 1, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( uVar3 );
                SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U4470, 1 );
                SET_PED_ENABLE_LEG_IK( l_U4470, 1 );
                TASK_PERFORM_SEQUENCE( l_U4470, uVar3 );
                CLEAR_SEQUENCE_TASK( uVar3 );
            }
            l_U563[7] = 1;
        }
    }
    if ((DOES_OBJECT_EXIST( g_U9165 )) AND (NOT l_U563[5]))
    {
        if ((NOT (IS_PED_ATTACHED_TO_OBJECT( l_U628, g_U9165 ))) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 18.96420000, -738.17310000, 112.11410000, 10.00000000, 19.00000000, 2.00000000, 0 )) AND (((sub_32194( g_U9165 )) > 111.00000000) AND ((sub_32194( g_U9165 )) < 112.10000000))))
        {
            GET_OBJECT_COORDINATES( g_U9165, ref l_U818._fU0, ref l_U818._fU4, ref l_U818._fU8 );
            l_U818._fU8 += l_U821;
            SET_OBJECT_COORDINATES( g_U9165, l_U818._fU0, l_U818._fU4, l_U818._fU8 );
        }
        PRINTFLOAT( sub_32194( g_U9165 ) );
        PRINTNL();
        if ((sub_32194( g_U9165 )) > 112.10000000)
        {
            if ((l_U862 == 0) AND (NOT (IS_CHAR_INJURED( l_U4470 ))))
            {
                DETACH_PED( l_U4470, 1 );
                SET_CHAR_HEADING( l_U4470, 0.00000000 );
                FREEZE_CHAR_POSITION( l_U4470, 1 );
                SET_CHAR_COLLISION( l_U4470, 1 );
                UNLOCK_RAGDOLL( l_U4470, 0 );
                if (l_U856 == 0)
                {
                    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( l_U4470, "playboy_exit_lift", "missplayboy3", 8.00000000, 0, 0, 0, 1, 0, 0, 1, -1 );
                }
                GET_GAME_TIMER( ref l_U908 );
                l_U862 = 1;
            }
        }
    }
    PRINTSTRING( "playboy anim time: " );
    PRINTFLOAT( sub_32720( l_U4470, "missplayboy3", "playboy_exit_lift" ) );
    PRINTNL();
    GET_GAME_TIMER( ref l_U907 );
    if ((l_U862 == 1) AND ((l_U563[5] == 0) AND ((l_U907 - l_U908) > 3000)))
    {
        if (NOT (IS_CHAR_INJURED( l_U4470 )))
        {
            UNLOCK_RAGDOLL( l_U4470, 1 );
            FREEZE_CHAR_POSITION( l_U4470, 0 );
            OPEN_SEQUENCE_TASK( ref uVar4 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 15.31680000, -751.69640000, 112.10900000, 3, 6000, 0.50000000 );
            CLOSE_SEQUENCE_TASK( uVar4 );
            TASK_PERFORM_SEQUENCE( l_U4470, uVar4 );
            CLEAR_SEQUENCE_TASK( uVar4 );
            l_U563[5] = 1;
        }
    }
    sub_28419( ref l_U950, 3, 0 );
    if ((l_U945[2] == 1) AND ((l_U945[1] == 1) AND (l_U945[0] == 1)))
    {
        if (l_U563[3] == 0)
        {
            l_U848 = 1;
            if ((sub_11934( l_U628, l_U4470, 1 )) < 45.00000000)
            {
                sub_10802( "PX3_ALL", ref l_U788, 8, 1 );
            }
            else
            {
                sub_4019( 1, 0, "PLAYBOY", 0 );
                sub_10802( "PX3_HSET", ref l_U788, 8, 1 );
            }
            REMOVE_BLIP( l_U4480 );
            ADD_BLIP_FOR_COORD( 8.98570000, -872.93640000, 8.72379900, ref l_U4477 );
            SET_BLIP_AS_FRIENDLY( l_U4477, 0 );
            l_U563[3] = 1;
        }
    }
    if (l_U563[3] == 1)
    {
        if ((l_U855 == 0) AND (NOT (sub_17197( l_U788 ))))
        {
            if ((sub_27584( l_U628 )) > 19.00000000)
            {
                sub_10802( "PX3_BYE", ref l_U788, 8, 1 );
            }
            l_U855 = 1;
        }
        if (NOT (IS_CHAR_DEAD( l_U4470 )))
        {
            if (DOES_OBJECT_EXIST( g_U9165 ))
            {
                if (NOT (IS_PED_ATTACHED_TO_OBJECT( l_U628, g_U9165 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( l_U628, g_U9165, 5.00000000, 5.00000000, 5.00000000, 0 )))
                    {
                        if ((sub_27584( l_U4470 )) < 112.40000000)
                        {
                            g_U9166 = 1;
                            sub_33443();
                            l_U853 = 1;
                        }
                        else
                        {
                            g_U9166 = 0;
                            l_U853 = 0;
                        }
                    }
                    else
                    {
                        g_U9166 = 0;
                    }
                }
            }
        }
    }
    if ((l_U873 == 0) AND ((l_U855 == 1) AND (NOT (sub_17197( l_U788 )))))
    {
        PRINT_NOW( "PBX3_01", 7500, 1 );
        l_U873 = 1;
    }
    if ((((sub_27584( l_U628 )) > 30.00000000) AND (IS_CHAR_IN_ANY_HELI( l_U628 ))) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 54.27140000, -835.12180000, 4.81460000, 31.00000000, 10.00000000, 30.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, -23.53180000, -938.90480000, 4.98920000, 32.00000000, 33.00000000, 7.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, -26.33140000, -825.12350000, 5.41920000, 25.00000000, 20.00000000, 2.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 8.98570000, -872.93640000, 8.72379900, 35.00000000, 35.00000000, 10.00000000, 0 )) || (((sub_27584( l_U628 )) > 2.50000000) AND (LOCATE_CHAR_ANY_MEANS_2D( l_U628, 73.98610000, -844.10900000, 45.00000000, 45.00000000, 0 ))))))))
    {
        if ((l_U945[2] == 0) || ((l_U945[1] == 0) || (l_U945[0] == 0)))
        {
            if (l_U563[4] == 0)
            {
                StrCopy( ref l_U832, "Extra Guys", 64 );
                sub_15903( ref l_U1302, 8, l_U832, 2.50000000, 0 );
                PRINT_NOW( "PBX3_10", 7500, 1 );
                l_U831 = 1;
                l_U563[4] = 1;
            }
        }
    }
    if (l_U563[4] == 1)
    {
        sub_28419( ref l_U1302, 8, 1 );
        for ( I = 0; I <= 2; I++ )
        {
            if (DOES_CHAR_EXIST( l_U950[I]._fU0 ))
            {
                uVar5 = {sub_34295( l_U950[I]._fU0 )};
                if (NOT (IS_CHAR_DEAD( l_U950[I]._fU0 )))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U950[I]._fU0 )))
                    {
                        REMOVE_BLIP( l_U950[I]._fU80 );
                        DELETE_CHAR( ref l_U950[I]._fU0 );
                    }
                }
            }
        }
    }
    sub_13223();
    if ((l_U856 == 0) AND ((NOT (DOES_OBJECT_EXIST( g_U9165 ))) || ((sub_11934( l_U628, l_U4470, 0 )) > 30.00000000)))
    {
        if ((NOT (IS_OBJECT_ON_SCREEN( g_U9165 ))) AND (NOT (IS_CHAR_IN_AIR( l_U4470 ))))
        {
            DETACH_PED( l_U4470, 1 );
            SET_CHAR_COORDINATES( l_U4470, 15.31680000, -751.69640000, 111.10900000 );
            sub_23417( l_U4470, l_U628 );
            l_U856 = 1;
        }
    }
    if (l_U563[8] == 0)
    {
        if ((IS_CHAR_INJURED( l_U950[2]._fU0 )) || ((IS_CHAR_INJURED( l_U950[1]._fU0 )) || ((IS_CHAR_INJURED( l_U950[0]._fU0 )) || (IS_CHAR_SHOOTING( l_U628 )))))
        {
            for ( I = 0; I <= 2; I++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U950[I]._fU0 )))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U950[I]._fU0, 14, 1 );
                    TASK_PLAY_ANIM( l_U950[I]._fU0, "RIFLE_SHOT_NEAR", "reaction@male_flee", 8.00000000, 1, 0, 0, 0, -1 );
                    WAIT( 0 );
                    if (NOT (IS_CHAR_DEAD( l_U950[I]._fU0 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U950[I]._fU0, "reaction@male_flee", "RIFLE_SHOT_NEAR" ))
                        {
                            SET_CHAR_ANIM_SPEED( l_U950[I]._fU0, "reaction@male_flee", "RIFLE_SHOT_NEAR", 0.67000000 );
                        }
                    }
                }
            }
            l_U563[8] = 1;
            PRINTSTRING( "Peds should be looking about a gun shot has been fired or peds are reacting" );
        }
    }
    if ((l_U831 == 1) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, -23.53180000, -938.90480000, 4.98920000, 32.00000000, 33.00000000, 7.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 54.27140000, -835.12180000, 4.81460000, 31.00000000, 10.00000000, 30.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( l_U628, -75.12000000, -880.93580000, 16.00000000, 66.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, -26.33140000, -825.12350000, 5.41920000, 14.00000000, 8.00000000, 2.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 8.98570000, -872.93640000, 8.72379900, 35.00000000, 35.00000000, 10.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 73.98610000, -844.10900000, 4.69450000, 8.00000000, 8.00000000, 1.50000000, 0 ))))))))
    {
        REMOVE_BLIP( l_U4480 );
        StrCopy( ref l_U832, "Main Guys1", 64 );
        sub_15903( ref l_U1654, 9, l_U832, 9.00000000, 1 );
        SET_ROUTE( l_U4477, 0 );
        for ( I = 0; I <= 2; I++ )
        {
            if (DOES_CHAR_EXIST( l_U950[I]._fU0 ))
            {
                REMOVE_BLIP( l_U950[I]._fU80 );
                if (NOT (IS_CHAR_DEAD( l_U950[I]._fU0 )))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U950[I]._fU0 )))
                    {
                        DELETE_CHAR( ref l_U950[I]._fU0 );
                    }
                }
            }
        }
        sub_35638( ref l_U4118, -8.14270000, -879.65280000, 7.75240000, 293.59840000, 0, 1 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U4118[0]._fU0, 1 );
        SET_SENSE_RANGE( l_U4118[0]._fU0, 100.00000000 );
        FREEZE_CHAR_POSITION( l_U4118[0]._fU0, 1 );
        REMOVE_BLIP( l_U4477 );
        STOP_PED_SPEAKING( sub_3775(), 0 );
        SET_PED_IS_BLIND_RAGING( l_U628, 1 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U897 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2006918058 );
        ADD_COVER_POINT( -0.66000000, -881.75000000, 3.97000000, 3, 122.00000000, 3, 2, ref l_U4489 );
        StrCopy( ref l_U832, "Main Guys3", 64 );
        sub_15903( ref l_U2358, 9, l_U832, 1075838976, 1 );
        StrCopy( ref l_U832, "Main Guys4", 64 );
        sub_15903( ref l_U2710, 9, l_U832, 1075838976, 1 );
        l_U794++;
    }
    return;
}

void sub_24628()
{
    if (NOT (IS_CHAR_DEAD( l_U4470 )))
    {
        if (DOES_OBJECT_EXIST( g_U9165 ))
        {
            if (IS_OBJECT_ON_FIRE( g_U9165 ))
            {
                if (IS_PED_ATTACHED_TO_OBJECT( l_U4470, g_U9165 ))
                {
                    DETACH_PED( l_U4470, 0 );
                    SET_CHAR_HEALTH( l_U4470, 10 );
                    START_CHAR_FIRE( l_U4470 );
                }
            }
            if ((IS_PED_ATTACHED_TO_OBJECT( l_U628, g_U9165 )) AND (IS_PED_ATTACHED_TO_OBJECT( l_U4470, g_U9165 )))
            {
                SET_COLLIDE_WITH_PEDS( 1 );
            }
        }
    }
    return;
}

void sub_25034(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

    uVar3 = {sub_25056( l_U950[iParam0]._fU0 )};
    PRINTFLOAT( ABSF( uVar3._fU8 ) );
    PRINTNL();
    if (l_U934[0] == 0)
    {
        if (NOT (DOES_CAM_EXIST( l_U626 )))
        {
            CREATE_CAM( 14, ref l_U626 );
        }
        SET_CAM_FOV( l_U626, 55.00000000 );
        switch (iParam0)
        {
            case 0:
            SET_CAM_POS( l_U626, 81.79142000, -831.06130000, 46.93154000 );
            SET_CAM_ROT( l_U626, 23.41487000, 0.00000000, 118.55950000 );
            SET_CAM_FOV( l_U626, 34.20003000 );
            if (NOT (IS_CHAR_DEAD( l_U950[iParam0]._fU0 )))
            {
                HANDLE_AUDIO_ANIM_EVENT( l_U950[iParam0]._fU0, "PAIN_HIGH" );
                POINT_CAM_AT_PED( l_U626, l_U950[iParam0]._fU0 );
            }
            break;
            case 1:
            SET_CAM_POS( l_U626, 3.57938300, -867.66720000, 46.58264000 );
            SET_CAM_ROT( l_U626, 28.66213000, -0.00000000, -28.71696000 );
            SET_CAM_FOV( l_U626, 34.20003000 );
            if (NOT (IS_CHAR_DEAD( l_U950[iParam0]._fU0 )))
            {
                POINT_CAM_AT_PED( l_U626, l_U950[iParam0]._fU0 );
                HANDLE_AUDIO_ANIM_EVENT( l_U950[iParam0]._fU0, "PAIN_HIGH" );
            }
            break;
            case 2:
            SET_CAM_POS( l_U626, 14.96917000, -829.72390000, 52.75976000 );
            SET_CAM_ROT( l_U626, -9.69443500, -0.00000000, 67.10464000 );
            SET_CAM_FOV( l_U626, 34.20003000 );
            SET_CAM_POS( l_U626, 9.23585300, -823.14530000, 50.36521000 );
            SET_CAM_ROT( l_U626, 3.90281700, 0.00000000, 142.69420000 );
            SET_CAM_FOV( l_U626, 45.00000000 );
            break;
        }
        STOP_PED_SPEAKING( l_U950[iParam0]._fU0, 1 );
        sub_19738( ref l_U626, 1 );
        sub_19795( 1 );
        PRINTSTRING( "playing sound:" );
        PRINTINT( l_U886[iParam0] );
        PRINTNL();
        SETTIMERA( 0 );
        l_U934[0] = 1;
    }
    if ((l_U934[0] == 1) AND ((l_U934[1] == 0) AND (TIMERA() > 1600)))
    {
        if (NOT (IS_CHAR_DEAD( l_U950[iParam0]._fU0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U950[iParam0]._fU0 )))
            {
                if (iParam0 == 2)
                {
                    SWITCH_PED_TO_RAGDOLL( l_U950[iParam0]._fU0, 0, 60000, 1, 1, 1, 0 );
                }
            }
        }
        if (uVar3._fU8 < 46.00000000)
        {
            SET_CAM_POS( l_U626, -4.54857600, -785.73140000, 4.61020800 );
            SET_CAM_ROT( l_U626, 28.52933000, -0.00000000, -161.15510000 );
            if (iParam0 == 0)
            {
                SET_CAM_POS( l_U626, 40.86718000, -795.06460000, 10.03863000 );
                SET_CAM_ROT( l_U626, 32.73087000, -0.00000000, -134.61020000 );
                SET_CAM_FOV( l_U626, 45.00000000 );
            }
            if (NOT (IS_CHAR_DEAD( l_U950[iParam0]._fU0 )))
            {
                POINT_CAM_AT_PED( l_U626, l_U950[iParam0]._fU0 );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U626, 1 );
            }
            if (iParam0 == 1)
            {
                DELETE_CAR( ref l_U900 );
                CREATE_CAR( 2006918058, 7.58360000, -858.79320000, 3.80910000, ref l_U899, 1 );
                CHANGE_CAR_COLOUR( l_U899, 0, 0 );
                SET_VEH_ALARM( l_U899, 1 );
            }
            if (iParam0 != 2)
            {
                l_U886[iParam0] = GET_SOUND_ID();
                PLAY_SOUND_FROM_PED( l_U886[iParam0], "PX2_DECONSTRUCTION_SCREAM", l_U950[iParam0]._fU0 );
            }
            l_U934[1] = 1;
        }
    }
    if (l_U934[1] == 1)
    {
        if (l_U930 > 20.00000000)
        {
            l_U930 *= 0.70000000;
            SET_CAM_FOV( l_U626, l_U930 );
        }
    }
    if (l_U934[1] == 1)
    {
        if (uVar3._fU8 > 46.00000000)
        {
            l_U934[3] = 1;
        }
    }
    if ((l_U934[4] == 0) AND ((l_U934[1] == 1) AND (l_U934[3] == 0)))
    {
        if (uVar3._fU8 < 16.00000000)
        {
            PRINTSTRING( "changing view" );
            PRINTNL();
            UNPOINT_CAM( l_U626 );
            switch (iParam0)
            {
                case 0:
                SET_CAM_POS( l_U626, 94.29984000, -840.64960000, 11.20647000 );
                SET_CAM_ROT( l_U626, -11.95985000, -0.00000000, 79.05656000 );
                SET_CAM_FOV( l_U626, 30.00000000 );
                SET_CAM_POS( l_U626, 93.67404000, -840.36040000, 9.93570200 );
                SET_CAM_ROT( l_U626, -13.33494000, -0.00000100, 65.30556000 );
                SET_CAM_FOV( l_U626, 30.30004000 );
                break;
                case 1:
                GET_GROUND_Z_FOR_3D_COORD( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref uVar3._fU8 );
                if (NOT (IS_CAR_DEAD( l_U899 )))
                {
                    SET_CAR_COORDINATES( l_U899, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                }
                SET_CAM_POS( l_U626, 11.77537000, -841.15150000, 4.08423000 );
                SET_CAM_ROT( l_U626, 7.45477300, -0.00000000, 165.00270000 );
                SET_CAM_FOV( l_U626, 35.00000000 );
                break;
            }
            l_U934[4] = 1;
        }
    }
    if ((l_U934[4] == 1) AND ((l_U934[5] == 0) AND (l_U904 == 0)))
    {
        uVar6 = {sub_26938( l_U950[iParam0]._fU0 )};
        if ((ABSF( uVar6._fU8 )) < 0.10000000)
        {
            PLAY_SOUND_FROM_PED( -1, "PX2_DECONSTRUCTION_BODY_HIT_PAVEMENT", l_U950[iParam0]._fU0 );
            PRINTSTRING( "playing  sound:" );
            PRINTINT( l_U886[0] );
            PRINTNL();
            SETTIMERB( 0 );
            l_U934[5] = 1;
        }
    }
    if (iParam0 == 1)
    {
        if (DOES_VEHICLE_EXIST( l_U899 ))
        {
            if (DOES_CHAR_EXIST( l_U950[1]._fU0 ))
            {
                if (NOT (IS_CAR_DEAD( l_U899 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U950[1]._fU0 )))
                    {
                        iVar9 = IS_CHAR_TOUCHING_VEHICLE( l_U950[iParam0]._fU0, l_U899 );
                        if (iVar9 == 0)
                        {
                            iVar9 = HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U899, l_U950[iParam0]._fU0 );
                        }
                    }
                    if ((l_U904 == 0) AND ((iVar9) || (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U950[iParam0]._fU0, l_U899 ))))
                    {
                        STOP_SOUND( l_U886[1] );
                        SET_VEH_ALARM( l_U899, 1 );
                        LOCK_CAR_DOORS( l_U899, 7 );
                        APPLY_FORCE_TO_CAR( l_U899, 3, 0.00000000, 0.00000000, -20.00000000, 0.00000000, 0.00000000, -2.00000000, 0, 1, 1, 1 );
                        SMASH_GLASS_ON_OBJECT( uVar3._fU0, uVar3._fU4, uVar3._fU8, 10.00000000, 2006918058, 4.00000000 );
                        PLAY_SOUND_FROM_VEHICLE( -1, "PX2_DECONSTRUCTION_BODY_LAND_ON_CAR", l_U899 );
                        BREAK_CAR_DOOR( l_U899, 1, 0 );
                        BREAK_CAR_DOOR( l_U899, 2, 0 );
                        TRIGGER_VEH_ALARM( l_U899 );
                        l_U904 = 1;
                    }
                }
            }
        }
    }
    if (iParam0 == 0)
    {
        if ((l_U934[5] == 1) AND ((l_U934[6] == 0) AND ((IS_CHAR_FATALLY_INJURED( l_U950[0]._fU0 )) || ((sub_27584( l_U950[0]._fU0 )) <= 4.80000000))))
        {
            PRINTSTRING( "STopping sound:" );
            PRINTINT( l_U886[0] );
            PRINTNL();
            STOP_SOUND( l_U886[0] );
            l_U934[6] = 1;
        }
    }
    if ((l_U934[3] == 1) || ((sub_20831()) || (((TIMERA() > 3500) AND (l_U934[1] == 0)) || (TIMERA() > 7000))))
    {
        UNPOINT_CAM( l_U626 );
        sub_19738( ref l_U626, 0 );
        sub_19795( 0 );
        l_U930 = 55.00000000;
        l_U945[iParam0] = 1;
        sub_27889();
    }
    return;
}

void sub_25056(unknown uParam0)
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

void sub_26938(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_VELOCITY( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    return Result;
}

void sub_27584(unknown uParam0)
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

void sub_27889()
{
    int I;

    for ( I = 0; I <= 9; I++ )
    {
        l_U934[I] = 0;
    }
    return;
}

void sub_28419(unknown uParam0, int iParam1, int iParam2)
{
    int I;
    int Result;
    unknown uVar7;
    int iVar8;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if ((NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 ))) AND ((uParam0^)[I]._fU84 == 1))
        {
            if ((sub_19486( l_U628, (uParam0^)[I]._fU4 )) < 45.00000000)
            {
                FREEZE_CHAR_POSITION( (uParam0^)[I]._fU0, 0 );
                SET_CHAR_WILL_USE_COVER( (uParam0^)[I]._fU0, 1 );
            }
            if ((iParam2 == 1) || ((IS_SNIPER_BULLET_IN_AREA( (uParam0^)[I]._fU4._fU0 + 5.00000000, (uParam0^)[I]._fU4._fU4 + 5.00000000, (uParam0^)[I]._fU4._fU8 + 5.00000000, (uParam0^)[I]._fU4._fU0 - 5.00000000, (uParam0^)[I]._fU4._fU4 - 5.00000000, (uParam0^)[I]._fU4._fU8 - 5.00000000 )) || ((IS_BULLET_IN_AREA( (uParam0^)[I]._fU4._fU0, (uParam0^)[I]._fU4._fU4, (uParam0^)[I]._fU4._fU8, 15.00000000, 1 )) || (((sub_28598( l_U628, (uParam0^)[I]._fU0 )) < 1.50000000) AND ((sub_19486( l_U628, (uParam0^)[I]._fU4 )) < 20.00000000)))))
            {
                FREEZE_CHAR_POSITION( (uParam0^)[I]._fU0, 0 );
                SET_CHAR_NEVER_TARGETTED( (uParam0^)[I]._fU0, 0 );
                SET_CHAR_WILL_USE_COVER( (uParam0^)[I]._fU0, 1 );
                if (((uParam0^)[I]._fU76 == 0) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))))
                {
                    if ((uParam0^)[I]._fU152 == l_U4485)
                    {
                        if ((VMAG( (uParam0^)[I]._fU96 )) > 0.00000000)
                        {
                            OPEN_SEQUENCE_TASK( ref uVar7 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( 0, (uParam0^)[I]._fU96._fU0, (uParam0^)[I]._fU96._fU4, (uParam0^)[I]._fU96._fU8, 3, 1.50000000, 2.00000000, l_U628, 0 );
                            TASK_COMBAT( 0, l_U628 );
                            CLOSE_SEQUENCE_TASK( uVar7 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^)[I]._fU0, 1 );
                            TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar7 );
                            CLEAR_SEQUENCE_TASK( uVar7 );
                            SET_CHAR_SPHERE_DEFENSIVE_AREA( (uParam0^)[I]._fU0, (uParam0^)[I]._fU96, 2.00000000 );
                            PRINTSTRING( "Moving shooter initiated " );
                            PRINTINT( I );
                            PRINTNL();
                        }
                        else
                        {
                            TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, l_U4487 );
                            PRINTSTRING( "Seek cover and Combat initiated " );
                            PRINTINT( I );
                            PRINTNL();
                        }
                    }
                    else
                    {
                        TASK_COMBAT( (uParam0^)[I]._fU0, l_U628 );
                        PRINTSTRING( "Combat initiated " );
                        PRINTINT( I );
                        PRINTNL();
                    }
                    if ((l_U949) AND (NOT (DOES_BLIP_EXIST( (uParam0^)[I]._fU80 ))))
                    {
                        ADD_BLIP_FOR_CHAR( (uParam0^)[I]._fU0, ref (uParam0^)[I]._fU80 );
                    }
                    (uParam0^)[I]._fU76 = 1;
                }
            }
            if (((uParam0^)[I]._fU88 == 0) AND (((uParam0^)[I]._fU76 == 1) AND ((sub_11934( l_U628, (uParam0^)[I]._fU0, 1 )) > 35.00000000)))
            {
                if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                {
                    SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, l_U4484 );
                    TASK_COMBAT( (uParam0^)[I]._fU0, l_U628 );
                    PRINTSTRING( "Ped is now coming to get you!" );
                    PRINTNL();
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I]._fU0 );
                    REMOVE_BLIP( (uParam0^)[I]._fU80 );
                }
                (uParam0^)[I]._fU88 = 1;
            }
            if (((uParam0^)[I]._fU72 == 0) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I]._fU0, l_U628, 0 )))
            {
                GET_GAME_TIMER( ref (uParam0^)[I]._fU68 );
                (uParam0^)[I]._fU72 = 1;
            }
            GET_GAME_TIMER( ref iVar8 );
            if ((uParam0^)[I]._fU72 == 1)
            {
                switch ((uParam0^)[I]._fU148)
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                    {
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( (uParam0^)[I]._fU0, (uParam0^)[I]._fU4, 2.00000000 );
                    }
                    break;
                    case 4:
                    if (((uParam0^)[I]._fU32[0] == 0) AND ((iVar8 - (uParam0^)[I]._fU68) > 0))
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                        {
                            SWITCH_PED_TO_RAGDOLL( (uParam0^)[I]._fU0, 0, 60000, 1, 0, 1, 0 );
                        }
                        if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
                        {
                            if (IS_PED_RAGDOLL( (uParam0^)[I]._fU0 ))
                            {
                                CREATE_NM_MESSAGE( 1, 79 );
                                PRINTSTRING( "balancing" );
                                PRINTNL();
                                SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                            }
                            (uParam0^)[I]._fU32[0] = 1;
                        }
                    }
                    if (((uParam0^)[I]._fU32[0] == 1) AND (((uParam0^)[I]._fU32[1] == 0) AND ((iVar8 - (uParam0^)[I]._fU68) > 400)))
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                        {
                            if (IS_PED_RAGDOLL( (uParam0^)[I]._fU0 ))
                            {
                                APPLY_FORCE_TO_PED( (uParam0^)[I]._fU0, 1, 0.00000000, 1.90000000, 0.00000000, 0.00000000, 0.00000000, 1.00000000, 9, 1, 1, 1 );
                                CREATE_NM_MESSAGE( 1, 33 );
                                SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                                PRINTSTRING( "roll up" );
                                PRINTNL();
                            }
                        }
                        (uParam0^)[I]._fU32[1] = 1;
                    }
                    if (((uParam0^)[I]._fU32[1] == 1) AND (((uParam0^)[I]._fU32[1] == 0) AND ((iVar8 - (uParam0^)[I]._fU68) > 500)))
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                        {
                            if (IS_PED_RAGDOLL( (uParam0^)[I]._fU0 ))
                            {
                                CREATE_NM_MESSAGE( 1, 270 );
                                SET_NM_MESSAGE_FLOAT( 274, 0.40000000 );
                                PRINTSTRING( "fall down stairs" );
                                PRINTNL();
                                SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                            }
                        }
                        (uParam0^)[I]._fU32[1] = 1;
                    }
                    break;
                    case 2:
                    if (((uParam0^)[I]._fU32[0] == 0) AND ((iVar8 - (uParam0^)[I]._fU68) > 0))
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                        {
                            FREEZE_CHAR_POSITION( (uParam0^)[I]._fU0, 0 );
                            SET_CHAR_WILL_USE_COVER( (uParam0^)[I]._fU0, 1 );
                            SWITCH_PED_TO_RAGDOLL_WITH_FALL( (uParam0^)[I]._fU0, 10000, 10000, 4, 0.00000000, 1.00000000, 0.00000000, 7.00000000, l_U481, l_U481 );
                            PRINTSTRING( "switching" );
                            PRINTNL();
                        }
                        (uParam0^)[I]._fU32[0] = 1;
                    }
                    break;
                    case 3:
                    if (((uParam0^)[I]._fU32[0] == 0) AND ((iVar8 - (uParam0^)[I]._fU68) > 0))
                    {
                        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                        {
                            FREEZE_CHAR_POSITION( (uParam0^)[I]._fU0, 0 );
                            SET_CHAR_WILL_USE_COVER( (uParam0^)[I]._fU0, 1 );
                            SWITCH_PED_TO_RAGDOLL( (uParam0^)[I]._fU0, 0, 60000, 1, 0, 1, 0 );
                            PRINTSTRING( "switching" );
                            PRINTNL();
                        }
                        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                        {
                            if (IS_PED_RAGDOLL( (uParam0^)[I]._fU0 ))
                            {
                                CREATE_NM_MESSAGE( 1, 79 );
                                PRINTSTRING( "balancing" );
                                PRINTNL();
                                SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                            }
                            (uParam0^)[I]._fU32[0] = 1;
                        }
                    }
                    if (((uParam0^)[I]._fU32[1] == 0) AND ((iVar8 - (uParam0^)[I]._fU68) > 50))
                    {
                        if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
                        {
                            if (IS_PED_RAGDOLL( (uParam0^)[I]._fU0 ))
                            {
                                CREATE_NM_MESSAGE( 1, 114 );
                                SET_NM_MESSAGE_VEC3( 116, (uParam0^)[I]._fU136 );
                                SET_NM_MESSAGE_FLOAT( 117, 0.30000000 );
                                PRINTSTRING( "balancing lean" );
                                PRINTNL();
                                SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                                CREATE_NM_MESSAGE( 1, 289 );
                                PRINTSTRING( "Sending natural motion message NM_FALLOVER_WALL_MSG!" );
                                PRINTNL();
                                SET_NM_MESSAGE_FLOAT( 292, l_U932 );
                                SET_NM_MESSAGE_FLOAT( 293, l_U933 );
                                SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                            }
                            (uParam0^)[I]._fU32[1] = 1;
                        }
                    }
                    if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
                    {
                        GET_CHAR_VELOCITY( (uParam0^)[I]._fU0, ref (uParam0^)[I]._fU112._fU0, ref (uParam0^)[I]._fU112._fU4, ref (uParam0^)[I]._fU112._fU8 );
                    }
                    if (((uParam0^)[I]._fU32[2] == 0) AND ((uParam0^)[I]._fU112._fU8 < -0.50000000))
                    {
                        CREATE_NM_MESSAGE( 0, 114 );
                        PRINTSTRING( "Stop balancing lean" );
                        PRINTNL();
                        SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                        CREATE_NM_MESSAGE( 0, 79 );
                        PRINTSTRING( "Stop balancing" );
                        PRINTNL();
                        SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                        CREATE_NM_MESSAGE( 0, 289 );
                        SEND_NM_MESSAGE( (uParam0^)[I]._fU0 );
                        SET_CHAR_HEALTH( (uParam0^)[I]._fU0, 20 );
                        (uParam0^)[I]._fU32[2] = 1;
                    }
                    break;
                }
            }
        }
        if (DOES_BLIP_EXIST( (uParam0^)[I]._fU80 ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
            {
                CHANGE_BLIP_DISPLAY( (uParam0^)[I]._fU80, 0 );
                Result++;
            }
        }
    }
    return Result;
}

float sub_28598(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if ((NOT (IS_CHAR_DEAD( uParam1 ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        GET_CHAR_COORDINATES( uParam0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        return ABSF( uVar7._fU8 - uVar4._fU8 );
        break;
    }
    return 999.99000000;
}

void sub_32194(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    return uVar3._fU8;
}

float sub_32720(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_33443()
{
    if (((sub_11934( l_U628, l_U4470, 1 )) > 7.50000000) AND (l_U818._fU8 < 112.10000000))
    {
        GET_OBJECT_COORDINATES( g_U9165, ref l_U818._fU0, ref l_U818._fU4, ref l_U818._fU8 );
        l_U818._fU8 += l_U821;
        SET_OBJECT_COORDINATES( g_U9165, l_U818._fU0, l_U818._fU4, l_U818._fU8 );
    }
    if ((l_U856 == 0) AND ((NOT (DOES_OBJECT_EXIST( g_U9165 ))) || ((sub_11934( l_U628, l_U4470, 0 )) > 30.00000000)))
    {
        if ((NOT (IS_OBJECT_ON_SCREEN( g_U9165 ))) AND (NOT (IS_CHAR_IN_AIR( l_U4470 ))))
        {
            DETACH_PED( l_U4470, 1 );
            SET_CHAR_COORDINATES( l_U4470, 15.31680000, -751.69640000, 111.10900000 );
            sub_23417( l_U4470, l_U628 );
            l_U856 = 1;
        }
    }
    return;
}

void sub_34295(unknown uParam0)
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

void sub_35638(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6)
{
    unknown uVar9;
    int iVar10;
    char[64] cVar11;
    unknown uVar27;

    StrCopy( ref cVar11, "Main Goons", 64 );
    if (NOT bParam6)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar9 );
        switch (uVar9)
        {
            case 0:
            iVar10 = 64730935;
            break;
            case 1:
            iVar10 = 510389335;
            break;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar9 );
        switch (uVar9)
        {
            case 0:
            iVar10 = -302362397;
            break;
            case 1:
            iVar10 = -1616890832;
            break;
        }
    }
    uVar27 = uParam5;
    CREATE_CHAR( 26, iVar10, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref (uParam0^)[uVar27]._fU0, 1 );
    SET_CHAR_HEADING( (uParam0^)[uVar27]._fU0, uParam4 );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( (uParam0^)[uVar27]._fU0, 1 );
    if (bParam6)
    {
        SET_PED_DIES_WHEN_INJURED( (uParam0^)[uVar27]._fU0, 1 );
    }
    SET_CHAR_DECISION_MAKER( (uParam0^)[uVar27]._fU0, l_U4482 );
    if ((uParam0^)[uVar27]._fU92 == 1)
    {
        SET_COMBAT_DECISION_MAKER( (uParam0^)[uVar27]._fU0, l_U4486 );
    }
    else
    {
        SET_COMBAT_DECISION_MAKER( (uParam0^)[uVar27]._fU0, l_U4485 );
    }
    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^)[uVar27]._fU0, 24 );
    SET_CHAR_RELATIONSHIP( (uParam0^)[uVar27]._fU0, 5, 0 );
    GIVE_WEAPON_TO_CHAR( (uParam0^)[uVar27]._fU0, 13, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( (uParam0^)[uVar27]._fU0, 13, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^)[uVar27]._fU0 );
    PRINTSTRING( "Creating goon number " );
    PRINTSTRING( "- " );
    PRINTINT( uVar27 );
    PRINTSTRING( " -" );
    PRINTNL();
    ConcatString(ref cVar11, uVar27, 64);
    SET_CHAR_NAME_DEBUG( (uParam0^)[uVar27]._fU0, ref cVar11 );
    if (NOT (DOES_BLIP_EXIST( (uParam0^)[uVar27]._fU80 )))
    {
        ADD_BLIP_FOR_CHAR( (uParam0^)[uVar27]._fU0, ref (uParam0^)[uVar27]._fU80 );
        CHANGE_BLIP_DISPLAY( (uParam0^)[uVar27]._fU80, 4 );
        SET_BLIP_AS_FRIENDLY( (uParam0^)[uVar27]._fU80, 0 );
    }
    return;
}

void sub_36593()
{
    int iVar2;

    if (l_U4491 == 0)
    {
        if (NOT l_U4492)
        {
            GET_CURRENT_CHAR_WEAPON( l_U628, ref iVar2 );
            if ((l_U822 == 1) || (iVar2 == 4))
            {
                PRINT_HELP_FOREVER( "PBX3GR1" );
                GET_GAME_TIMER( ref l_U4495 );
                l_U4492 = 1;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U4498 );
            if ((l_U4498 - l_U4495) > 7500)
            {
                GET_CURRENT_CHAR_WEAPON( l_U628, ref iVar2 );
                if (iVar2 == 4)
                {
                    if (l_U4493 == 0)
                    {
                        PRINT_HELP_FOREVER( "PBX3GR2" );
                        GET_GAME_TIMER( ref l_U4496 );
                        l_U4493 = 1;
                    }
                }
                else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PBX3GR1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PBX3GR2" )))
                {
                    CLEAR_HELP();
                }
            }
        }
        GET_GAME_TIMER( ref l_U4498 );
        if (((l_U4498 - l_U4496) > 7500) AND ((l_U4494 == 0) AND (l_U4493 == 1)))
        {
            if (USING_STANDARD_CONTROLS())
            {
                PRINT_HELP_FOREVER( "PBX3GR3" );
                GET_GAME_TIMER( ref l_U4497 );
            }
            l_U4494 = 1;
        }
        GET_GAME_TIMER( ref l_U4498 );
        if (((l_U4498 - l_U4497) > 7500) AND (l_U4494 == 1))
        {
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PBX3GR3" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PBX3GR1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PBX3GR2" ))))
            {
                CLEAR_HELP();
            }
            l_U4491 = 1;
        }
    }
    return;
}

void sub_37058()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (l_U798[l_U794] == 0)
    {
        SET_WANTED_MULTIPLIER( 0.00000000 );
        sub_10563();
        l_U798[l_U794] = 1;
    }
    if (DOES_OBJECT_EXIST( g_U9165 ))
    {
        if (NOT (IS_PED_ATTACHED_TO_OBJECT( l_U628, g_U9165 )))
        {
            if ((sub_27584( l_U4470 )) < 111.00000000)
            {
                g_U9166 = 1;
                sub_33443();
            }
            else
            {
                g_U9166 = 0;
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U950[I]._fU0 ))
        {
            uVar3 = {sub_34295( l_U950[I]._fU0 )};
            REMOVE_BLIP( l_U950[I]._fU80 );
            if (NOT (IS_CHAR_DEAD( l_U950[I]._fU0 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U950[I]._fU0 )))
                {
                    DELETE_CHAR( ref l_U950[I]._fU0 );
                }
            }
        }
    }
    if (HAS_CHAR_GOT_WEAPON( l_U628, 5 ))
    {
        l_U871 = 1;
    }
    else if (HAS_CHAR_GOT_WEAPON( l_U628, 4 ))
    {
        l_U871 = 0;
    }
    if (l_U871 == 0)
    {
        if (HAS_CHAR_GOT_WEAPON( l_U628, 4 ))
        {
            GET_AMMO_IN_CHAR_WEAPON( l_U628, 4, ref l_U866 );
            if (l_U866 < 2)
            {
                GIVE_WEAPON_TO_CHAR( l_U628, 4, 2, 0 );
            }
        }
        if (l_U826 == 0)
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 81.65860000, -904.40050000, 14.21510000, 3.00000000, 5.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( l_U628, 70.35389000, -894.57230000, 14.13660000, 9.00000000, 4.00000000, 1.00000000, 0 )))
            {
                if (l_U861 == 0)
                {
                    SETTIMERA( 0 );
                    l_U861 = 1;
                }
                l_U826 = sub_37620();
            }
        }
    }
    if ((l_U859 == 0) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
    {
        sub_4019( 1, 0, "PLAYBOY", 0 );
        sub_10802( "PX3_CSITE", ref l_U788, 8, 1 );
        l_U859 = 1;
    }
    if ((l_U859 == 1) AND ((l_U860 == 0) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_17197( l_U788 ))))))
    {
        PRINT_NOW( "PBX3_03", 7500, 1 );
        l_U860 = 1;
    }
    sub_13223();
    if (l_U848 == 0)
    {
        sub_28419( ref l_U1302, 5, 0 );
    }
    if ((l_U4118[0]._fU76 == 0) AND (NOT (IS_CHAR_DEAD( l_U4118[0]._fU0 ))))
    {
        if ((sub_39017( l_U4118[0]._fU0, 6.00000000 )) || ((IS_BULLET_IN_AREA( l_U4118[0]._fU4._fU0, l_U4118[0]._fU4._fU4, l_U4118[0]._fU4._fU8, 15.00000000, 1 )) || ((sub_11934( l_U628, l_U4118[0]._fU0, 1 )) < 45.00000000)))
        {
            FREEZE_CHAR_POSITION( l_U4118[0]._fU0, 0 );
            SET_CHAR_WILL_USE_COVER( l_U4118[0]._fU0, 1 );
            SET_SENSE_RANGE( l_U4118[0]._fU0, 100.00000000 );
            if (NOT (IS_CHAR_INJURED( l_U4118[0]._fU0 )))
            {
                TASK_SHOOT_AT_CHAR( l_U4118[0]._fU0, l_U628, 60000, 3 );
            }
            l_U4118[0]._fU76 = 1;
        }
    }
    if (DOES_CHAR_EXIST( l_U4118[0]._fU0 ))
    {
        if ((l_U4118[1]._fU76 == 0) AND (IS_CHAR_INJURED( l_U4118[0]._fU0 )))
        {
            sub_35638( ref l_U4118, 40.99800000, -938.98970000, 14.13140000, 212.11770000, 1, 1 );
            sub_23417( l_U4118[1]._fU0, l_U628 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U4118[1]._fU0, 1 );
            SET_SENSE_RANGE( l_U4118[1]._fU0, 100.00000000 );
            REMOVE_BLIP( l_U4118[0]._fU80 );
            sub_10802( "PX3_FIRST", ref l_U788, 8, 1 );
            l_U4118[1]._fU76 = 1;
        }
    }
    if ((l_U905 == 0) AND ((NOT (sub_17197( l_U788 ))) AND (l_U4118[1]._fU76 == 1)))
    {
        PRINT_NOW( "PBX3_11", 7500, 1 );
        GET_GAME_TIMER( ref l_U858 );
        l_U905 = 1;
    }
    if (DOES_CHAR_EXIST( l_U4118[1]._fU0 ))
    {
        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U4118[2]._fU76 == 0) AND (IS_CHAR_INJURED( l_U4118[1]._fU0 ))))
        {
            REMOVE_BLIP( l_U4118[1]._fU80 );
            sub_10802( "PX3_SECOND", ref l_U788, 8, 1 );
            sub_35638( ref l_U4118, 39.77400000, -996.61230000, 13.73220000, 36.96450000, 2, 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U4118[2]._fU0, 1 );
            l_U4118[2]._fU76 = 1;
        }
    }
    if ((l_U906 == 0) AND ((NOT (sub_17197( l_U788 ))) AND (l_U4118[2]._fU76 == 1)))
    {
        PRINT_NOW( "PBX3_11", 7500, 1 );
        GET_GAME_TIMER( ref l_U858 );
        l_U906 = 1;
    }
    if ((l_U906 == 1) AND ((l_U872 == 0) AND ((NOT (sub_17197( l_U788 ))) AND ((NOT (IS_CHAR_SHOOTING( l_U628 ))) AND (l_U4118[2]._fU76 == 1)))))
    {
        TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_PX1" );
        l_U872 = 1;
    }
    if (DOES_CHAR_EXIST( l_U4118[2]._fU0 ))
    {
        if ((l_U4118[3]._fU76 == 0) AND (IS_CHAR_INJURED( l_U4118[2]._fU0 )))
        {
            REMOVE_BLIP( l_U4118[2]._fU80 );
            sub_10802( "PX3_WARN", ref l_U788, 8, 1 );
            sub_35638( ref l_U4118, 150.67440000, -924.13690000, 8.23180000, 316.68000000, 3, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U4118[3]._fU0, 1 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U4118[3]._fU0, 1 );
            l_U4118[3]._fU76 = 1;
        }
    }
    if (l_U563[0] == 1)
    {
        sub_28419( ref l_U3062, 3, 0 );
    }
    if (l_U563[1] == 0)
    {
        if (l_U826)
        {
            l_U822 = 1;
            l_U4491 = 0;
            l_U4492 = 0;
            l_U4493 = 0;
            l_U4494 = 0;
            l_U563[1] = 1;
        }
    }
    sub_28419( ref l_U2710, 9, 0 );
    sub_28419( ref l_U1654, 9, l_U4118[0]._fU76 );
    sub_28419( ref l_U2006, 9, 0 );
    sub_28419( ref l_U2358, 9, 0 );
    sub_28419( ref l_U4118, 9, 0 );
    sub_40338();
    sub_40496( ref l_U1654 );
    sub_40496( ref l_U2006 );
    sub_40496( ref l_U2358 );
    sub_40496( ref l_U2710 );
    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 145.71840000, -967.33320000, 21.57940000, 3.00000000, 5.00000000, 1.40000000, 0 ))) AND (l_U4118[3]._fU76 == 1))
    {
        if ((IS_CHAR_IN_ANGLED_AREA_2D( l_U628, 114.89540000, -948.86060000, 112.62810000, -931.87990000, 2.00000000, 0 )) || ((IS_CHAR_INJURED( l_U4118[0]._fU0 )) AND ((IS_CHAR_INJURED( l_U4118[1]._fU0 )) AND (IS_CHAR_INJURED( l_U4118[2]._fU0 )))))
        {
            l_U794++;
        }
    }
    return;
}

int sub_37620()
{
    unknown uVar2;
    unknown uVar3;

    while (l_U827 == 0)
    {
        switch (l_U828)
        {
            case 0:
            if (IS_CHAR_GETTING_IN_TO_A_CAR( l_U628 ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
            }
            SET_CAM_POS( l_U626, 74.24306000, -903.10920000, 13.38256000 );
            SET_CAM_ROT( l_U626, 6.04474300, 0.00000000, 78.64011000 );
            SET_CAM_FOV( l_U626, l_U931 );
            POINT_CAM_AT_PED( l_U626, l_U628 );
            sub_19795( 1 );
            sub_19738( ref l_U626, 1 );
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 68.13100000, -906.11160000, 13.13160000, 4, 10000, 0.50000000 );
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, 68.12500000, -906.11810000, 14.13660000, 10000 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U628, uVar2 );
            SETTIMERA( 0 );
            l_U828 = 1;
            break;
            case 1:
            if (l_U931 < 45.00000000)
            {
                l_U931 *= 1.05000000;
                SET_CAM_FOV( l_U626, l_U931 );
            }
            if (TIMERA() > 3400)
            {
                l_U828 = 2;
            }
            break;
            case 2:
            if (NOT (IS_AREA_OCCUPIED( 54.02240000, -915.89950000, 12.13160000, 56.02240000, -913.89950000, 15.13160000, 0, 0, 1, 0, 0 )))
            {
                CREATE_CHAR( 26, 64730935, 55.02240000, -914.89950000, 13.13160000, ref l_U4471, 1 );
                GIVE_WEAPON_TO_CHAR( l_U4471, 14, 30000, 1 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U4471, 55.02240000, -914.89950000, 13.13160000, 10000 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U4471, 55.02240000, -914.89950000, 13.13160000, 3.00000000 );
                SET_COMBAT_DECISION_MAKER( l_U4471, l_U4485 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U4471, 24 );
            }
            SET_CHAR_COORDINATES_NO_OFFSET( l_U628, 68.13100000, -906.11160000, 14.13160000 );
            SET_CHAR_HEADING( l_U628, 30.00000000 );
            if (NOT (HAS_CHAR_GOT_WEAPON( l_U628, 4 )))
            {
                GIVE_WEAPON_TO_CHAR( l_U628, 4, 2, 0 );
            }
            SET_CURRENT_CHAR_WEAPON( l_U628, 4, 1 );
            OPEN_SEQUENCE_TASK( ref uVar3 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "pull_pin", "missplayboy3", 1000.00000000, 0, 0, 0, 1, -1 );
            CLOSE_SEQUENCE_TASK( uVar3 );
            TASK_PERFORM_SEQUENCE( l_U628, uVar3 );
            WAIT( 0 );
            WAIT( 0 );
            sub_20257();
            UNPOINT_CAM( l_U626 );
            SET_CAM_POS( l_U626, 67.05902000, -905.67380000, 13.89797000 );
            SET_CAM_ROT( l_U626, 3.11775000, 0.00000000, -107.85790000 );
            SET_CAM_FOV( l_U626, 45.00000000 );
            sub_19738( ref l_U626, 1 );
            SETTIMERA( 0 );
            l_U828 = 3;
            break;
            case 3:
            if ((sub_32720( l_U628, "missplayboy3", "pull_pin" )) > 0.99000000)
            {
                l_U828 = 6;
            }
            break;
            case 6:
            if (TIMERA() > 0)
            {
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( l_U628, 68.15210000, -906.16250000, 13.13160000, 10000 );
                sub_19738( ref l_U626, 0 );
                sub_19738( ref l_U624, 0 );
                sub_19795( 0 );
                l_U827 = 1;
            }
            break;
        }
        if ((TIMERA() > 1000) AND (sub_20831()))
        {
            l_U828 = 6;
        }
        WAIT( 0 );
    }
    return 1;
}

int sub_39017(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    else if (DOES_CHAR_EXIST( uParam0 ))
    {
        N_1363505769( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    if (IS_SNIPER_BULLET_IN_AREA( uVar4._fU0 - uParam1, uVar4._fU4 - uParam1, uVar4._fU8 - uParam1, uVar4._fU0 + uParam1, uVar4._fU4 + uParam1, uVar4._fU8 + uParam1 ))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_40338()
{
    GET_GAME_TIMER( ref l_U816 );
    if (((l_U816 - l_U817) > 15000) AND (IS_EXPLOSION_IN_AREA( -1, 38.18220000, -1012.34300000, -16.57720000, 153.18220000, -768.34310000, 24.57720000 )))
    {
        if (NOT (sub_17197( l_U788 )))
        {
            sub_10802( "PX3_BLOWUP", ref l_U788, 6, 1 );
            GET_GAME_TIMER( ref l_U817 );
        }
    }
    GET_GAME_TIMER( ref l_U857 );
    return;
}

void sub_40496(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((l_U857 - l_U858) > 8000)
    {
        uVar3 = {sub_25056( l_U628 )};
        uVar6 = sub_16378( 0, 9 );
        if ((NOT (sub_17197( l_U788 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (DOES_CHAR_EXIST( (uParam0^)[uVar6]._fU0 ))))
        {
            if ((sub_11934( l_U628, (uParam0^)[uVar6]._fU0, 1 )) < 35.00000000)
            {
                if ((sub_16378( 0, 10 )) > 5)
                {
                    sub_4019( 2, (uParam0^)[uVar6]._fU0, "ITALIAN_1", 0 );
                    sub_10802( "PX3_ITAL1", ref l_U788, 5, 1 );
                    CHANGE_BLIP_COLOUR( l_U896, 4 );
                }
                else
                {
                    sub_4019( 3, (uParam0^)[uVar6]._fU0, "ITALIAN_2", 0 );
                    sub_10802( "PX3_ITAL2", ref l_U788, 5, 1 );
                    CHANGE_BLIP_COLOUR( l_U896, 4 );
                }
                GET_GAME_TIMER( ref l_U858 );
            }
        }
    }
    return;
}

void sub_41026()
{
    int I;
    unknown uVar3;

    if (l_U798[l_U794] == 0)
    {
        REQUEST_CAR_RECORDING( 1445 );
        REQUEST_CAR_RECORDING( 1992 );
        REQUEST_MODEL( -1660661558 );
        while ((NOT (HAS_MODEL_LOADED( -1660661558 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1992 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1445 )))))
        {
            WAIT( 0 );
        }
        CREATE_CAR( -1660661558, 73.98610000, -844.10900000, 4.69450000, ref l_U898, 1 );
        CREATE_CHAR_INSIDE_CAR( l_U898, 26, 64730935, ref l_U3766[0]._fU0 );
        SET_CAR_ENGINE_ON( l_U898, 1, 1 );
        SET_HELI_BLADES_FULL_SPEED( l_U898 );
        LOCK_CAR_DOORS( l_U898, 3 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U898, 1 );
        SET_CHAR_KEEP_TASK( l_U3766[0]._fU0, 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U3766[0]._fU0 );
        for ( I = 1; I <= 3; I++ )
        {
            CREATE_CHAR_AS_PASSENGER( l_U898, 26, 510389335, I - 1, ref l_U3766[I]._fU0 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U3766[I]._fU0 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U3766[I]._fU0, 24 );
            SET_CHAR_AS_ENEMY( l_U3766[I]._fU0, 1 );
        }
        START_PLAYBACK_RECORDED_CAR( l_U898, 1445 );
        sub_10563();
        SETTIMERA( 0 );
        l_U798[l_U794] = 1;
    }
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U854 == 0) AND (NOT (sub_17197( l_U788 )))))
    {
        PRINT_NOW( "PBX3_04", 7500, 1 );
        SETTIMERB( 0 );
        GET_GAME_TIMER( ref l_U858 );
        l_U854 = 1;
    }
    sub_13223();
    if ((l_U563[1] == 0) AND ((sub_19486( l_U628, 150.67440000, -924.13690000, 8.23180000 )) < 40.00000000))
    {
        if (NOT (IS_CHAR_INJURED( l_U4118[3]._fU0 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U4118[3]._fU0, 1 );
            CLEAR_CHAR_TASKS( l_U4118[3]._fU0 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U4118[3]._fU0, 179.58310000, -842.49050000, 13.13130000, 3.00000000 );
            OPEN_SEQUENCE_TASK( ref l_U4490 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 179.58310000, -842.49050000, 13.13130000, 4, 30000, 0.50000000 );
            TASK_SWAP_WEAPON( 0, 1 );
            TASK_SEEK_COVER_FROM_PED( 0, l_U628, 10000 );
            TASK_SHOOT_AT_CHAR( 0, l_U628, 2000, 3 );
            CLOSE_SEQUENCE_TASK( l_U4490 );
            TASK_PERFORM_SEQUENCE( l_U4118[3]._fU0, l_U4490 );
            CLEAR_SEQUENCE_TASK( l_U4490 );
            l_U563[1] = 1;
            PRINTNL();
            PRINTNL();
            PRINTSTRING( "he should have done hsi runner!" );
            PRINTNL();
            PRINTNL();
            PRINTNL();
        }
    }
    if ((NOT (sub_41933( l_U4118[3]._fU0, 29 ))) AND (l_U563[1] == 1))
    {
        if (NOT (IS_CHAR_INJURED( l_U4118[3]._fU0 )))
        {
            TASK_COMBAT( l_U4118[3]._fU0, l_U628 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U4118[3]._fU0, 0 );
            PRINTSTRING( "Lat guy TEMPEVENTS unblocked" );
            PRINTNL();
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U4118[3]._fU0 )))
    {
        if ((NOT (IS_CHAR_ON_SCREEN( l_U4118[3]._fU0 ))) AND ((sub_11934( l_U628, l_U4118[3]._fU0, 1 )) > 280.00000000))
        {
            PRINT_NOW( "PBX3_F4", 7500, 1 );
            sub_12576();
        }
    }
    sub_28419( ref l_U3062, 3, 0 );
    sub_28419( ref l_U1654, 9, 0 );
    sub_28419( ref l_U2006, 9, 0 );
    sub_28419( ref l_U2358, 9, 0 );
    sub_28419( ref l_U2710, 9, 0 );
    sub_40338();
    sub_28419( ref l_U3414, l_U885, 0 );
    if (NOT (IS_CAR_DEAD( l_U898 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U898 ))
        {
            l_U824 = FIND_TIME_POSITION_IN_RECORDING( l_U898 );
            PRINTSTRING( "recordingPosition = " );
            PRINTFLOAT( l_U824 );
            PRINTNL();
        }
    }
    if (DOES_VEHICLE_EXIST( l_U898 ))
    {
        if (NOT (IS_CAR_DEAD( l_U898 )))
        {
            if (l_U824 > 23000.00000000)
            {
                if (l_U563[0] == 0)
                {
                    OPEN_SEQUENCE_TASK( ref uVar3 );
                    TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U898 );
                    TASK_SEEK_COVER_FROM_PED( 0, l_U628, 10000 );
                    TASK_COMBAT( 0, l_U628 );
                    CLOSE_SEQUENCE_TASK( uVar3 );
                    for ( I = 1; I <= 3; I++ )
                    {
                        if (NOT (IS_CHAR_DEAD( l_U3766[I]._fU0 )))
                        {
                            l_U3766[I]._fU4 = {151.20560000, -957.20830000, 20.33230000};
                            l_U3766[I]._fU84 = 1;
                            l_U3766[I]._fU152 = l_U4484;
                            GIVE_WEAPON_TO_CHAR( l_U3766[I]._fU0, 14, 30000, 0 );
                            l_U3766[I]._fU148 = 4;
                            SET_CHAR_RELATIONSHIP_GROUP( l_U3766[I]._fU0, 24 );
                            SET_CHAR_RELATIONSHIP( l_U3766[I]._fU0, 5, 0 );
                            CLEAR_CHAR_TASKS( l_U3766[I]._fU0 );
                            TASK_PERFORM_SEQUENCE( l_U3766[I]._fU0, uVar3 );
                            PRINTSTRING( "Guy " );
                            PRINTINT( I );
                            PRINTSTRING( " told to leave chopper" );
                            PRINTNL();
                        }
                    }
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    SETTIMERB( 0 );
                    l_U563[0] = 1;
                }
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U898 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U898 ))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U628 ))
            {
                GET_CAR_CHAR_IS_USING( l_U628, ref l_U903 );
                if (DOES_VEHICLE_EXIST( l_U903 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U903 )))
                    {
                        if (IS_CAR_TOUCHING_CAR( l_U903, l_U898 ))
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U898 );
                            EXPLODE_CAR( l_U898, 1, 0 );
                            EXPLODE_CAR( l_U898, 1, 0 );
                            PRINTSTRING( "chopper exploded due to car collision" );
                        }
                    }
                }
            }
        }
    }
    if ((l_U824 > 23000.00000000) AND ((l_U563[2] == 0) AND ((l_U563[0] == 1) AND ((NOT (IS_CAR_DEAD( l_U898 ))) AND (NOT (IS_CHAR_DEAD( l_U3766[1]._fU0 )))))))
    {
        if (((l_U563[0] == 1) AND (TIMERB() > 30000)) || (((sub_19573( l_U628, l_U898 )) < 40.00000000) AND ((LOCATE_CHAR_ANY_MEANS_2D( l_U628, 153.52650000, -957.09230000, 40.00000000, 40.00000000, 0 )) AND ((TIMERB() > 3000) AND (NOT (IS_CHAR_IN_ANY_HELI( l_U3766[1]._fU0 )))))))
        {
            PRINTSTRING( "Heli should have flown away" );
            if ((sub_43303( l_U898 )) < 500)
            {
                SET_CAR_HEALTH( l_U898, 500 );
            }
            if ((sub_43384( l_U898 )) < 500.00000000)
            {
                SET_ENGINE_HEALTH( l_U898, 500.00000000 );
            }
            START_PLAYBACK_RECORDED_CAR( l_U898, 1992 );
            l_U563[2] = 1;
        }
    }
    if (l_U563[9] == 0)
    {
        if ((IS_CHAR_INJURED( l_U3766[0]._fU0 )) || ((sub_43303( l_U898 )) < 900))
        {
            if (NOT (IS_CAR_DEAD( l_U898 )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U898 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U898 );
                }
                EXPLODE_CAR( l_U898, 1, 0 );
                l_U563[9] = 1;
            }
        }
    }
    if (TIMERB() > 3000)
    {
        if (l_U563[10] == 0)
        {
            if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_17197( l_U788 ))))
            {
                sub_10802( "PX3_HELI", ref l_U788, 8, 1 );
                l_U563[10] = 1;
            }
        }
    }
    if ((l_U885 < 3) AND (TIMERA() > (sub_43719( 6000, 9000 ))))
    {
        sub_43769( l_U885 );
        l_U885++;
        SETTIMERA( 0 );
    }
    else if (IS_CHAR_INJURED( l_U4118[3]._fU0 ))
    {
        REMOVE_BLIP( l_U4118[3]._fU80 );
        if (NOT (IS_CAR_DEAD( l_U898 )))
        {
            EXPLODE_CAR( l_U898, 1, 0 );
        }
        SAY_AMBIENT_SPEECH( l_U628, "KILLED_ALL", 1, 1, 0 );
        WAIT( 5000 );
        sub_44625( 9, "PX3_DEAD", "PX3AUD", 1 );
        sub_45211();
    }
    return;
}

int sub_41933(unknown uParam0, unknown uParam1)
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

void sub_43303(unknown uParam0)
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

void sub_43384(unknown uParam0)
{
    float Result;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        Result = GET_ENGINE_HEALTH( uParam0 );
    }
    else
    {
        Result = 0;
    }
    return Result;
}

void sub_43719(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_43769(unknown uParam0)
{
    vector vVar3;
    int iVar6;
    unknown uVar7;

    uVar7 = sub_16378( 0, 2 );
    switch (uVar7)
    {
        case 0:
        iVar6 = 64730935;
        break;
        case 1:
        iVar6 = 64730935;
        break;
    }
    if ((sub_16378( 0, 10 )) > 5)
    {
        CREATE_CHAR( 26, iVar6, 157.35760000, -933.80080000, 9.23160000, ref l_U3414[uParam0]._fU0, 1 );
        SET_CHAR_HEADING( l_U3414[uParam0]._fU0, 130.76020000 );
        if ((sub_16378( 0, 10 )) > 5)
        {
            vVar3 = {151.20560000, -957.20830000, 20.33230000};
        }
        else
        {
            vVar3 = {145.86160000, -953.80160000, 14.73230000};
        }
    }
    else
    {
        CREATE_CHAR( 26, iVar6, 149.37410000, -920.25310000, 9.23160000, ref l_U3414[uParam0]._fU0, 1 );
        SET_CHAR_HEADING( l_U3414[uParam0]._fU0, 114.72940000 );
        if ((sub_16378( 0, 10 )) > 5)
        {
            vVar3 = {144.16040000, -923.13070000, 14.73230000};
        }
        else
        {
            vVar3 = {135.00990000, -920.05700000, 14.73230000};
        }
    }
    SET_CHAR_ACCURACY( l_U3414[uParam0]._fU0, 20 );
    SET_CHAR_DECISION_MAKER( l_U3414[uParam0]._fU0, l_U4482 );
    SET_COMBAT_DECISION_MAKER( l_U3414[uParam0]._fU0, l_U4484 );
    GIVE_WEAPON_TO_CHAR( l_U3414[uParam0]._fU0, 12, 30000, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U3414[uParam0]._fU0, 24 );
    SET_CHAR_RELATIONSHIP( l_U3414[uParam0]._fU0, 5, 0 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U3414[uParam0]._fU0, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U3414[uParam0]._fU0 );
    StrCopy( ref l_U832, "ladder guy", 64 );
    ConcatString(ref l_U832, uParam0, 64);
    SET_CHAR_NAME_DEBUG( l_U3414[uParam0]._fU0, ref l_U832 );
    sub_44344( l_U3414[uParam0]._fU0, vVar3 );
    return;
}

void sub_44344(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    OPEN_SEQUENCE_TASK( ref uVar6 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 3, 5000, 1.00000000 );
    TASK_COMBAT( 0, l_U628 );
    CLOSE_SEQUENCE_TASK( uVar6 );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        TASK_PERFORM_SEQUENCE( uParam0, uVar6 );
    }
    CLEAR_SEQUENCE_TASK( uVar6 );
    return;
}

void sub_44625(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_44669( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_44669(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_45211()
{
    g_U964 = 1;
    UNLOCK_MISSION_NEWS_STORY( 23 );
    sub_45235( 23 );
    sub_3552( 1015, 0 );
    sub_46583( 20, 8, 16383, 16383, ref l_U874 );
    sub_48456( ref l_U874, 1 );
    sub_47290( ref l_U874, 0 );
    CLEAR_WANTED_LEVEL( l_U629 );
    sub_48524( 85.96090000, -834.08650000, 3.90470000, 1 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 60 );
    sub_48632();
    sub_2936();
    return;
}

void sub_45235(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_45322( iParam0 ))
    {
        sub_46372( iParam0 );
    }
    return;
}

int sub_45322(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_45379( ref uVar3, 1, 0, 0 );
    sub_45991( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_10978( "\n ----------------------------------------------------------------" );
    sub_4103( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_10978( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_45379(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_45432( iParam0, uParam1, uParam2 );
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
        sub_45564( iParam0 + 0 );
    }
    return;
}

void sub_45432(int iParam0, int iParam1, int iParam2)
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
        sub_45564( iParam0 + 0 );
    }
    return;
}

void sub_45564(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_45595( iParam0->_fU4 )))
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

int sub_45595(unknown uParam0)
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

void sub_45991(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_46372(unknown uParam0)
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
        sub_46583( 20, 6, 16383, 16383, ref uVar4 );
        sub_47259( ref uVar4, 7 );
        sub_47290( ref uVar4, 0 );
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
        sub_46583( 20, 7, 9, 16383, ref uVar4 );
        sub_47259( ref uVar4, 7 );
        sub_47290( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_46583(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_46607( uParam0, 0, iParam4 + 0 );
    sub_46607( uParam1, 1, iParam4 + 0 );
    sub_46607( uParam2, 2, iParam4 + 0 );
    sub_46607( uParam3, 3, iParam4 + 0 );
    sub_46607( 0, 4, iParam4 + 0 );
    sub_46607( 1, 5, iParam4 + 0 );
    sub_46607( 65535, 6, iParam4 + 0 );
    sub_46607( 0, 12, iParam4 + 0 );
    sub_46607( 0, 11, iParam4 + 0 );
    sub_46607( 0, 14, iParam4 + 0 );
    sub_46607( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_46607( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_46607( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_46607(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_47259(int iParam0, unknown uParam1)
{
    sub_46607( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_47290(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_47330())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_48017( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_47816( iVar5 );
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

int sub_47330()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_47364( 5, g_U968[I] )) == 7)
        {
            sub_47816( I );
            return 1;
        }
    }
    return 0;
}

int sub_47364(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_47816(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_47889( 39 );
    return;
}

void sub_47889(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_48017(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_48078( uParam0, g_U968[Result] ))
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

int sub_48078(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_48456(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU36 = uParam1;
    return;
}

void sub_48524(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    unknown uVar6;

    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref uVar6 );
    REQUEST_MODEL( uVar6 );
    if (bParam3)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
        {
            ;
        }
    }
    else if (CREATE_EMERGENCY_SERVICES_CAR( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
    {
        ;
    }
    return;
}

void sub_48632()
{
    sub_48641();
    return;
}

void sub_48641()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_48659();
    sub_48718( iVar2, iVar3, iVar4 );
    return;
}

void sub_48659()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_48718(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 9;
    sub_48751( iVar5, uParam0, uParam1, uParam2, "Contact_10" );
    return;
}

void sub_48751(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_48847( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_48847( ref cVar9 );
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
            sub_48847( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_48847( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_48847( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_48847( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_49424( iParam0, iVar7 );;;
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
                sub_49821( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_49821( 0, 4 );
            }
        }
    }
    if (NOT (sub_49910( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3359(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3359() );
    }
    sub_2034();
    bVar27 = true;
    uVar28 = sub_49424( iParam0, iVar7 );
    uVar29 = sub_1491( iParam0 );
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
                sub_59286( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_59716();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_59801( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_59858( iParam0 );
                sub_59897( 0 );
                sub_1932( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_60005();
        }
    }
    if (bParam2)
    {
        sub_59716();
        sub_60093();
        sub_59897( 0 );
    }
    if (bParam3)
    {
        sub_59716();
        sub_60133();
        sub_59897( 0 );
        sub_1932( uVar29, 0 );
    }
    sub_1378();
    return;
}

void sub_48847(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_49424(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1890( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_49821(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_49910(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_50118( uParam1 );
        break;
        case 1:
        bVar8 = sub_52196( uParam1 );
        break;
        case 2:
        bVar8 = sub_52422( uParam1 );
        break;
        case 3:
        bVar8 = sub_52572( uParam1 );
        break;
        case 4:
        bVar8 = sub_52850( uParam1 );
        break;
        case 5:
        bVar8 = sub_53153( uParam1 );
        break;
        case 6:
        bVar8 = sub_53352( uParam1 );
        break;
        case 7:
        bVar8 = sub_53578( uParam1 );
        break;
        case 8:
        bVar8 = sub_53813( uParam1 );
        break;
        case 9:
        bVar8 = sub_54188( uParam1 );
        break;
        case 10:
        bVar8 = sub_54435( uParam1 );
        break;
        case 11:
        bVar8 = sub_54574( uParam1 );
        break;
        case 12:
        bVar8 = sub_54873( uParam1 );
        break;
        case 13:
        bVar8 = sub_55101( uParam1 );
        break;
        case 14:
        bVar8 = sub_55388( uParam1 );
        break;
        case 15:
        bVar8 = sub_55670( uParam1 );
        break;
        case 16:
        bVar8 = sub_55952( uParam1 );
        break;
        case 17:
        bVar8 = sub_56153( uParam1 );
        break;
        case 18:
        bVar8 = sub_56226( uParam1 );
        break;
        case 19:
        bVar8 = sub_56440( uParam1 );
        break;
        case 20:
        bVar8 = sub_56693( uParam1 );
        break;
        case 21:
        bVar8 = sub_56940( uParam1 );
        break;
        case 22:
        bVar8 = sub_57141( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_51801( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_49424( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_57464( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_50118(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_50397( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_50397( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_50397( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_50397( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_50397( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_50397( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_50397( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_50397( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_50397( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_50397( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_50397( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_50397( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_50397( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_50397( iVar3, 0, 3, 1, 0, 0 );
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
        sub_50397( iVar3, 0, sub_51679(), sub_51945(), 0, 0 );
        break;
        default:
        sub_52104( "Friend 1", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Friend 1", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_50397(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_50408( uParam1 );
    sub_50582( uParam0, 0, uParam2 );
    sub_50582( uParam0, 1, uParam3 );
    sub_50582( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_48659();
    return;
}

void sub_50408(unknown uParam0)
{
    ADD_SCORE( sub_3359(), uParam0 );
    sub_50433( uParam0 );
    return;
}

void sub_50433(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1890( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_50582(unknown uParam0, int iParam1, int iParam2)
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
        sub_50739( uParam0 );
    }
    return;
}

void sub_50739(unknown uParam0)
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

int sub_51679()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_51801( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_51801(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_51945()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_51801( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_52104(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_52196(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_50397( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_52104( "Contact 2", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 2", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52422(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_50397( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_52104( "Girl 3", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Girl 3", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52572(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_50397( iVar3, 0, sub_51679(), sub_51945(), 0, 0 );
        break;
        default:
        sub_52104( "Friend 4", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Friend 4", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52850(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_50397( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_50397( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_50397( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_50397( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_52104( "Contact 5", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 5", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53153(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_52104( "Contact 7", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 7", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53352(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_50397( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_52104( "Contact 7b", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 7b", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53578(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_50397( iVar3, 0, sub_51679(), sub_51945(), 0, 0 );
        break;
        default:
        sub_52104( "Friend 8", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Friend 8", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53813(unknown uParam0)
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
        sub_50397( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_50397( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_50397( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_50397( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_50397( iVar3, 0, sub_51679(), sub_51945(), 0, 0 );
        break;
        default:
        sub_52104( "Friend 9", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Friend 9", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54188(unknown uParam0)
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
        sub_50397( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_50397( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_50397( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_52104( "Contact 10", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_52104( "Contact 10", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54435(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_52104( "Girl 11", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Girl 11", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54574(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_50397( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_50397( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_50397( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_50397( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_50397( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_52104( "Contact 12", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 12", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54873(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_50397( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_52104( "Contact 13", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 13", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55101(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_50397( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_50397( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_50397( iVar3, 0, sub_51679(), sub_51945(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_52104( "Friend 15", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Friend 15", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55388(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_50397( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_50397( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_50397( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_52104( "Contact 16", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 16", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55670(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_50397( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_50397( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_50397( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_52104( "Contact 18", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 18", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55952(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_52104( "Contact 19", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 19", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56153(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_52104( "Girl 20", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56226(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_52104( "Contact 21", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 21", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56440(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_50397( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_50397( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_52104( "Contact 22", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 22", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56693(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_50397( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_50397( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_50397( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_52104( "Contact 24", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 24", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56940(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_50397( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_50397( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_50397( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_52104( "Contact 25", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_52104( "Contact 25", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57141(unknown uParam0)
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
        sub_50397( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_52104( "Girl 26", 1 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_52104( "Girl 26", 0 );
        sub_50397( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_57464(int iParam0, int iParam1)
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
    if (sub_57512( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_58243( iParam1 );
    }
    return;
}

int sub_57512(int iParam0, int iParam1)
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
            sub_57652( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_57652(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_57834( 0 );
    return;
}

void sub_57834(boolean bParam0)
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
        sub_58089();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_58089()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_58243(int iParam0)
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
        sub_58576( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_58576( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_58576( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_58576( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_58576( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_58576( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_58576( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_58576( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_58576( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_58576( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_58576( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_58576( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_58576( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_58576( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_58576( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_58576( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_58576( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_58576( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_58576( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_58576(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_59286(unknown uParam0, unknown uParam1)
{
    sub_59305( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_59305(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_59716()
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

int sub_59801(int iParam0, int iParam1)
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

void sub_59858(unknown uParam0)
{
    sub_1277();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_59897(unknown uParam0)
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

void sub_60005()
{
    sub_60014();
    return;
}

void sub_60014()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_60093()
{
    sub_60014();
    return;
}

void sub_60133()
{
    sub_60014();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

