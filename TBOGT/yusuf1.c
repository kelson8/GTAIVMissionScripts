void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U100 = 0;
    l_U112 = 0;
    l_U113 = 1;
    l_U114 = 3;
    l_U116 = 0;
    l_U117 = -1;
    l_U118 = 0;
    l_U119 = 0;
    l_U124 = 1;
    l_U210 = 0;
    l_U211 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U216 = 0;
    l_U217 = 0;
    l_U218 = 1;
    l_U284 = 6;
    l_U322 = nil;
    l_U335 = nil;
    l_U353 = 1;
    l_U388 = nil;
    l_U408 = 1;
    l_U484 = 6;
    l_U493 = "BOGT_BoxDrop";
    l_U494 = "BOGT_Box_TickDrop";
    l_U559 = 0.63600000;
    l_U560 = 0.37600000;
    l_U609 = 0.05200000;
    l_U610 = 0.35300000;
    l_U611 = 0.30000000;
    l_U612 = 0.37200000;
    l_U613 = 0.37300000;
    l_U614 = 0.38700000;
    l_U615 = 0.44400000;
    l_U616 = 0.03750000;
    l_U617 = 0.36900000;
    l_U618 = 0.62350000;
    l_U619 = 0.60800000;
    l_U620 = {0.24300000, 0.46700000, 0.00000000};
    l_U623 = {0.23100000, 0.43500000, 0.00000000};
    l_U626 = {0.23100000, 0.43500000, 0.00000000};
    l_U629 = {0.31920000, 0.65250000, 0.00000000};
    l_U632 = {0.31920000, 0.65250000, 0.00000000};
    l_U635 = {0.24300000, 0.46700000, 0.00000000};
    l_U638 = {0.50000000, 1.10000000, 0.00000000};
    l_U641 = {0.31920000, 0.65250000, 0.00000000};
    l_U644 = {0.18225000, 0.35025000, 0.00000000};
    l_U647 = 0.30000000;
    l_U648 = 0.37000000;
    l_U649 = 0.56200000;
    l_U650 = 0.40100000;
    l_U651 = 0.30000000;
    l_U652 = 0.37000000;
    l_U653 = 0.69700000;
    l_U654 = 0.40100000;
    l_U655 = 0.30000000;
    l_U656 = 0.37000000;
    l_U657 = 0.66500000;
    l_U658 = 0.40100000;
    l_U659 = 0.32500000;
    l_U660 = 0.62500000;
    l_U661 = 0.00800000;
    l_U662 = 0.49700000;
    l_U663 = 0.52500000;
    l_U664 = 0.49700000;
    l_U665 = 0.51800000;
    l_U666 = 1;
    l_U667 = 0;
    l_U668 = {0.50000000, 0.50000000, 0};
    l_U671 = 0.20000000;
    l_U672 = 0.20000000;
    l_U716 = 0;
    l_U717 = 0;
    l_U729 = 0;
    l_U733 = 0;
    l_U735 = 2;
    l_U736 = 29;
    l_U737 = 1;
    l_U738 = 3;
    l_U739 = 23;
    l_U740 = 87;
    l_U741 = 28;
    l_U742 = 4;
    l_U743 = 20;
    l_U744 = 7;
    l_U1747 = 0;
    l_U3838 = 788747387;
    l_U3839 = 788747387;
    l_U3840 = -556126186;
    l_U3841 = -556126186;
    l_U3842 = 1543404628;
    l_U3843 = 1033245328;
    l_U3844 = 1127066537;
    l_U3845 = -297585214;
    l_U4772 = 0;
    l_U4773 = 1;
    l_U4774 = 0;
    l_U4862 = -1;
    l_U4887 = 1;
    l_U5095 = {-396.47130000, -459.28420000, 3.76980000};
    l_U5142 = 0;
    l_U5143 = 1;
    l_U5149 = 1;
    l_U5161 = 1;
    l_U5206 = {261.33400000, -357.60100000, 163.39100000};
    l_U5209 = 0;
    l_U5231 = 0;
    l_U5263 = 1000;
    l_U5313 = 0;
    l_U5316 = 1;
    l_U5355 = 0;
    l_U5391 = 0;
    SET_MISSION_FLAG( 1 );
    # -sub_C25700-0xc2847f();
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1128();
        sub_3445();
    }
    while (true)
    {
        WAIT( 0 );
        switch (l_U745)
        {
            case 0:
            sub_5573();
            l_U745 = 1;
            break;
            case 1:
            sub_14146();
            break;
            case 2:
            sub_31348();
            break;
            case 3:
            sub_58311();
            break;
            case 4:
            sub_88666();
            break;
            case 5:
            sub_90843();
            break;
            case 6:
            sub_104901();
            break;
        }
        if (l_U5147)
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U4972 )))
            {
                l_U5146 = 0;
                sub_55372();
            }
        }
        if (l_U5148)
        {
            if (sub_106604( l_U4972 ))
            {
                l_U5146 = 1;
                sub_55372();
            }
        }
        if (l_U5149)
        {
            if (DOES_OBJECT_EXIST( l_U746[5]._fU4 ))
            {
                if (LOCATE_CHAR_ON_FOOT_3D( sub_3454(), -1114.80100000, -986.90260000, 7.74790000, 5.00000000, 6.00000000, 6.00000000, 0 ))
                {
                    if (l_U4861 > 5)
                    {
                        SET_CHAR_HEALTH( sub_3454(), 0 );
                    }
                    else if (NOT (IS_CHAR_ON_FIRE( sub_3454() )))
                    {
                        START_CHAR_FIRE( sub_3454() );
                        l_U4861++;
                    }
                }
            }
            if (DOES_OBJECT_EXIST( l_U746[1]._fU4 ))
            {
                if (LOCATE_CHAR_ON_FOOT_3D( sub_3454(), -1174.47700000, -995.12440000, 7.02940000, 3.00000000, 3.00000000, 2.00000000, 0 ))
                {
                    if (l_U4861 > 5)
                    {
                        SET_CHAR_HEALTH( sub_3454(), 0 );
                    }
                    else if (NOT (IS_CHAR_ON_FIRE( sub_3454() )))
                    {
                        START_CHAR_FIRE( sub_3454() );
                        l_U4861++;
                    }
                }
            }
        }
        if (l_U5245)
        {
            sub_107127();
        }
        l_U5315 = sub_107387();
        sub_107581( l_U5315 );
        if (l_U4868)
        {
            sub_115038( l_U4972 );
        }
        if (l_U4869)
        {
            sub_118180();
        }
        if (l_U4883)
        {
            ;
        }
        if (l_U4889)
        {
            if (NOT l_U4890)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1108.28700000, -982.51030000, 8.33730000, 500.00000000, 500.00000000, 500.00000000, 0 ))
                {
                    l_U4891 = 0.00000000;
                    SET_WANTED_MULTIPLIER( l_U4891 );
                    l_U4890 = 1;
                }
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1108.28700000, -982.51030000, 8.33730000, 500.00000000, 500.00000000, 500.00000000, 0 )))
            {
                l_U4891 = 0.10000000;
                SET_WANTED_MULTIPLIER( l_U4891 );
                l_U4890 = 0;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
            {
                if (LOCATE_CHAR_IN_CAR_3D( sub_3454(), -1110.86800000, -983.73470000, 7.31560000, 40.00000000, 40.00000000, 40.00000000, 0 ))
                {
                    FREEZE_CAR_POSITION( l_U4972, 0 );
                }
            }
        }
    }
    return;
}

void sub_1128()
{
    int iVar2;

    iVar2 = 2;
    sub_1142( iVar2 );
    sub_2428( iVar2 );
    return;
}

void sub_1142(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    sub_1151();
    if (g_U43133)
    {
        return;
    }
    iVar3 = g_U14925[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U819)
    {
        sub_1327();
        sub_1535();
        g_U11063 = 1;
    }
    else if (NOT g_U12382[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1660();
            sub_1712();
            g_U11063 = 1;
        }
    }
    sub_1805();
    sub_1944();
    uVar5 = sub_2057( uParam0 );
    sub_2335( uVar5, 0 );
    return;
}

void sub_1151()
{
    g_U43588 = 0;
    g_U43628 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionStatTracker" );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
    }
    return;
}

void sub_1327()
{
    if (g_U10972)
    {
        return;
    }
    sub_1354( g_U10971 );
    if (NOT (IS_BIT_SET( g_U10938._fU0, 7 )))
    {
        sub_1475();
    }
    return;
}

void sub_1354(int iParam0)
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
    if (g_U10972)
    {
        return;
    }
    iVar3 = g_U22960[iParam0]._fU100;
    iVar3--;
    g_U22960[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1475()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1535()
{
    sub_1544();
    return;
}

void sub_1544()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1660()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10972)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1712()
{
    sub_1721();
    return;
}

void sub_1721()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1805()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12382[J]._fU148[I]._fU36)
            {
                g_U12382[J]._fU28 = 1;
            }
            g_U12382[J]._fU148[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1944()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1966();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_1966()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_2057(unknown uParam0)
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
        case 8: return 9;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_2288( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_2288(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2335(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_2428(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2437();
    if (g_U0)
    {
        return;
    }
    if (g_U43133)
    {
        return;
    }
    if (g_U95._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12379)
    {
        return;
    }
    iVar3 = g_U14925[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12382[iParam0]._fU12)
    {
        return;
    }
    if (g_U10938._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10938._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_3212())
    {
        return;
    }
    if (NOT g_U819)
    {
        sub_3278();
        SET_BIT( ref g_U10938._fU0, 2 );
    }
    return;
}

void sub_2437()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((g_U575[I]._fU20) AND ((sub_2475( 5, g_U575[I] )) == 1))
        {
            if ((sub_2475( 1, g_U575[I] )) != 0)
            {
                sub_2761( I );
            }
        }
    }
    if (NOT sub_2927())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    if (g_U95._fU0 == 1016)
    {
        g_U95._fU92 = 1;
    }
    return;
}

int sub_2475(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2761(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2846( g_U575 - 1 );
    return;
}

void sub_2846(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2927()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_2475( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3212()
{
    if ((g_U10938._fU8 == 1) AND (g_U10938._fU4 == 0))
    {
        return 0;
    }
    return 1;
}

void sub_3278()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_3445()
{
    int I;

    if (NOT (IS_CHAR_DEAD( sub_3454() )))
    {
        if ((NOT (sub_3576( -1142.77700000, -988.49450000, 1.05540000, 10.00000000 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1142.77700000, -988.49450000, 1.05540000, 800.00000000, 800.00000000, 800.00000000, 0 ))))
        {
            for ( I = 0; I < l_U746; I++ )
            {
                ;
            }
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1141632236, -28737275 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1313618655, -1366882930 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -740515878, -1143889885 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 256624776, -1143889885 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -529900459, -855358840 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 163992799, -855358840 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1031741483, -530945740 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -285371601, -530945740 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 13155365, 1993446944 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 288897752, 1993446944 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -843141289, 459792206 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -670316162, 459792206 );
        }
        else
        {
            for ( I = 0; I < l_U746; I++ )
            {
                if (DOES_OBJECT_EXIST( l_U746[I]._fU0 ))
                {
                    DONT_REMOVE_OBJECT( l_U746[I]._fU0 );
                }
                if (DOES_OBJECT_EXIST( l_U746[I]._fU4 ))
                {
                    DONT_REMOVE_OBJECT( l_U746[I]._fU4 );
                }
            }
            if (NOT (HAS_SCRIPT_LOADED( "Yusuf1Cleanup" )))
            {
                REQUEST_SCRIPT( "Yusuf1Cleanup" );
                while (NOT (HAS_SCRIPT_LOADED( "Yusuf1Cleanup" )))
                {
                    WAIT( 0 );
                }
            }
            START_NEW_SCRIPT( "Yusuf1Cleanup", 128 );
        }
    }
    else
    {
        for ( I = 0; I < l_U746; I++ )
        {
            if (DOES_OBJECT_EXIST( l_U746[I]._fU0 ))
            {
                DONT_REMOVE_OBJECT( l_U746[I]._fU0 );
            }
            if (DOES_OBJECT_EXIST( l_U746[I]._fU4 ))
            {
                DONT_REMOVE_OBJECT( l_U746[I]._fU4 );
            }
        }
        if (NOT (HAS_SCRIPT_LOADED( "Yusuf1Cleanup" )))
        {
            REQUEST_SCRIPT( "Yusuf1Cleanup" );
            while (NOT (HAS_SCRIPT_LOADED( "Yusuf1Cleanup" )))
            {
                WAIT( 0 );
            }
        }
        START_NEW_SCRIPT( "Yusuf1Cleanup", 128 );
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "Yusuf1Cleanup" );
    if (g_U3)
    {
        if (NOT (IS_CHAR_DEAD( sub_3454() )))
        {
            if (HAS_CHAR_GOT_WEAPON( sub_3454(), 32 ))
            {
                REMOVE_WEAPON_FROM_CHAR( sub_3454(), 32 );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U4714 ))
    {
        DELETE_OBJECT( ref l_U4714 );
    }
    if (DOES_OBJECT_EXIST( l_U4715 ))
    {
        DELETE_OBJECT( ref l_U4715 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    sub_4810( 0 );
    SET_PED_IS_BLIND_RAGING( sub_3454(), 0 );
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    RELEASE_SOUND_ID( l_U4878 );
    RELEASE_SOUND_ID( l_U4879 );
    RELEASE_SOUND_ID( l_U4880 );
    RELEASE_SOUND_ID( l_U4881 );
    RELEASE_SOUND_ID( l_U4882 );
    STOP_SOUND( l_U4880 );
    STOP_SOUND( l_U4881 );
    STOP_SOUND( l_U4882 );
    STOP_STREAM();
    # -sub_C25710-0xc28491();
    SET_PED_FIRE_FX_LOD_SCALER( 1.00000000 );
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    if (l_U4781)
    {
        SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U4780 );
    }
    sub_5121();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1296.69000000, -1215.27100000, -98.50000000, -972.08580000, -812.23050000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -2000.64000000, 379.03100000, -20.02110000, -1611.84800000, 1529.65100000, 12.27750000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -2189.56700000, -846.23100000, -20.00000000, -1192.86300000, -773.65900000, 31.56590000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -2308.64700000, -775.10540000, -20.00000000, -2077.36400000, 477.14550000, 3.52680000 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3454()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_3576(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_4810(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 <= 8) AND (g_U8865 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_5121()
{
    if (l_U213)
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
    l_U211 = 0;
    l_U210 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_5573()
{
    int I;
    unknown uVar3;
    int iVar4;

    sub_5598( "In initialize" );
    sub_5618( 500 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -277.08430000, 196.96930000, 220.04530000, -248.69010000, 226.20040000, 238.85560000, 0 );
    LOAD_ADDITIONAL_TEXT( "YUSUF1", 0 );
    LOAD_ADDITIONAL_TEXT( "E2Y1Aud", 6 );
    sub_5809( "E2Y1Aud" );
    sub_5928( 0, sub_3454(), "LUIS", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    if (g_U3)
    {
        if (NOT (IS_CHAR_DEAD( sub_3454() )))
        {
            SET_CHAR_HEALTH( sub_3454(), 200 );
        }
    }
    l_U4891 = 0.10000000;
    SET_WANTED_MULTIPLIER( l_U4891 );
    SET_PED_FIRE_FX_LOD_SCALER( 3.00000000 );
    for ( I = 0; I < g_U43011; I++ )
    {
        if (DOES_OBJECT_EXIST( g_U43011[I] ))
        {
            DELETE_OBJECT( ref g_U43011[I] );
        }
    }
    for ( I = 0; I < g_U43018; I++ )
    {
        if (DOES_OBJECT_EXIST( g_U43018[I] ))
        {
            DELETE_OBJECT( ref g_U43018[I] );
        }
    }
    if (g_U43133)
    {
        CLEAR_AREA( -34.72960000, 792.78590000, 13.71320000, 100.00000000, 1 );
    }
    sub_6335();
    SWITCH_GARBAGE_TRUCKS( 0 );
    l_U5002[0] = {5.82849900, 6.97060000, 6.50590000};
    l_U5002[1] = {-5.87070000, -0.52320000, 6.50680000};
    l_U5002[2] = {-1.77920000, 0.84430000, 11.23050000};
    l_U5002[3] = {-6.20050000, 4.17580000, 6.50540000};
    l_U5002[4] = {0.08920000, -36.94270000, 1.28400000};
    l_U5033[0] = {5.05510000, 19.39550000, 6.49460000};
    l_U5033[1] = {1.24550000, 20.39470000, 6.48290000};
    l_U5033[2] = {-2.50620000, 22.37970000, 6.45450000};
    l_U5033[3] = {-2.12350000, 19.61890000, 6.49170000};
    l_U5033[4] = {-1129.91700000, -987.79320000, 6.54100000};
    l_U5033[5] = {-1127.48200000, -986.75230000, 6.54100000};
    l_U5033[6] = {-1130.07500000, -985.90630000, 6.54100000};
    l_U5064[0] = {-1125.93000000, -985.93860000, 8.54710000};
    l_U5064[1] = {-1131.06900000, -985.45900000, 8.54710000};
    l_U5064[2] = {-1131.04900000, -988.34100000, 8.54710000};
    l_U5064[4] = {-1129.91700000, -987.79320000, 8.54710000};
    l_U5064[5] = {-1127.52900000, -986.14680000, 8.54710000};
    l_U5064[6] = {-1130.12800000, -985.44050000, 8.54710000};
    sub_5598( "Out initialize" );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar3 );
    if (DOES_VEHICLE_EXIST( uVar3 ))
    {
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            GET_CAR_MODEL( uVar3, ref iVar4 );
            if (iVar4 == 788747387)
            {
                DELETE_CAR( ref uVar3 );
            }
            else if (LOCATE_CAR_3D( uVar3, -34.72960000, 792.78590000, 13.71320000, 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                SET_CAR_AS_MISSION_CAR( uVar3 );
                SET_CAR_COORDINATES( uVar3, -37.35220000, 774.38890000, 13.56290000 );
                SET_CAR_HEADING( uVar3, 0.27910000 );
                CLEAR_ROOM_FOR_CAR( uVar3 );
                SET_CAR_ON_GROUND_PROPERLY( uVar3 );
                APPLY_FORCE_TO_CAR( uVar3, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                CLOSE_ALL_CAR_DOORS( uVar3 );
                SET_CAR_ENGINE_ON( uVar3, 0, 0 );
            }
        }
    }
    l_U746[0]._fU72 = -2075782048;
    l_U746[0]._fU76 = -2075782048;
    l_U746[0]._fU84 = 100000;
    l_U746[0]._fU88._fU0 = -1402767135;
    l_U746[0]._fU88._fU4 = -1366882930;
    l_U746[0]._fU88._fU8 = -828457641;
    l_U746[0]._fU88._fU12 = -1313618655;
    l_U746[0]._fU88._fU16 = -828457641;
    l_U746[0]._fU88._fU20 = -1313618655;
    l_U746[1]._fU72 = 1239854102;
    l_U746[1]._fU76 = 518033353;
    l_U746[1]._fU80 = 100.00000000;
    l_U746[1]._fU84 = 2500.00000000;
    l_U746[1]._fU8[0] = {-1174.24800000, -993.05820000, 5.72642400};
    l_U746[1]._fU8[1] = {-1174.24800000, -993.05820000, 5.72642400};
    l_U746[1]._fU8[2] = {-1172.77200000, -997.23500000, 5.39730300};
    l_U746[1]._fU8[3] = {0.00000000, 0.00000000, 0.00000000};
    l_U746[1]._fU8[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U746[1]._fU88._fU0 = -1689692499;
    l_U746[1]._fU88._fU4 = -1143889885;
    l_U746[1]._fU88._fU8 = 1302805358;
    l_U746[1]._fU88._fU12 = -740515878;
    l_U746[1]._fU88._fU20 = 256624776;
    l_U746[1]._fU112._fU4 = "amb_ship_plume";
    l_U746[1]._fU112._fU8 = {0.00000000, 31.50000000, 4.50000000};
    l_U746[1]._fU112._fU20 = 1.00000000;
    l_U746[1]._fU136._fU0 = 2;
    l_U746[1]._fU136._fU28[0] = {-1170.96300000, -991.82680000, 7.02250000};
    l_U746[1]._fU136._fU132[0] = 2.66610000;
    l_U746[1]._fU136._fU80[0] = {0.17180000, 0.98510000, 0.00000000};
    l_U746[1]._fU136._fU172[0] = 1;
    l_U746[1]._fU136._fU28[1] = {-1170.10700000, -993.43880000, 7.02250000};
    l_U746[1]._fU136._fU132[1] = 169.30100000;
    l_U746[1]._fU136._fU80[1] = {-0.32730000, -0.94490000, 0.00000000};
    l_U746[1]._fU136._fU172[1] = 1;
    l_U746[1]._fU388._fU0 = 2;
    l_U746[1]._fU388._fU28[0] = {-1169.67500000, -992.08380000, 5.47250000};
    l_U746[1]._fU388._fU80[0] = 184.28900000;
    l_U746[1]._fU388._fU28[1] = {-1169.67500000, -992.73380000, 5.47250000};
    l_U746[1]._fU388._fU80[1] = 4.00000000;
    l_U746[1]._fU388._fU200[0] = {-1000.00000000, -1000.00000000, 5.50000000};
    l_U746[1]._fU388._fU228[0] = {-3.20000000, -29.90000000, 1000.00000000};
    l_U746[1]._fU388._fU200[1] = {-1000.00000000, 9.00000000, 5.50000000};
    l_U746[1]._fU388._fU228[1] = {1000.00000000, 1000.00000000, 1000.00000000};
    l_U746[2]._fU72 = 1930762713;
    l_U746[2]._fU76 = -1366166054;
    l_U746[2]._fU80 = 100.00000000;
    l_U746[2]._fU84 = 2500.00000000;
    l_U746[2]._fU8[0] = {-1159.47200000, -986.90060000, 7.15143100};
    l_U746[2]._fU8[1] = {-1155.91100000, -993.99900000, 7.75265600};
    l_U746[2]._fU8[2] = {0.00000000, 0.00000000, 0.00000000};
    l_U746[2]._fU8[3] = {0.00000000, 0.00000000, 0.00000000};
    l_U746[2]._fU8[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U746[2]._fU88._fU0 = -1996508646;
    l_U746[2]._fU88._fU4 = -855358840;
    l_U746[2]._fU88._fU8 = 1682302867;
    l_U746[2]._fU88._fU12 = -529900459;
    l_U746[2]._fU88._fU20 = 163992799;
    l_U746[2]._fU112._fU4 = "amb_ship_whitesmoke";
    l_U746[2]._fU112._fU8 = {0.90000000, 7.60000000, 7.50000000};
    l_U746[2]._fU112._fU20 = 0.60000000;
    l_U746[3]._fU72 = 1233545547;
    l_U746[3]._fU76 = 1595218282;
    l_U746[3]._fU80 = 100.00000000;
    l_U746[3]._fU84 = 2500.00000000;
    l_U746[3]._fU8[0] = {-1143.55400000, -988.64510000, 12.47237000};
    l_U746[3]._fU8[1] = {-1140.69200000, -984.67130000, 13.07621000};
    l_U746[3]._fU8[2] = {-1143.04700000, -992.28350000, 13.16513000};
    l_U746[3]._fU8[3] = {-1138.28700000, -991.39350000, 13.00777000};
    l_U746[3]._fU8[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U746[3]._fU88._fU0 = 57419505;
    l_U746[3]._fU88._fU4 = -530945740;
    l_U746[3]._fU88._fU8 = -471505204;
    l_U746[3]._fU88._fU12 = -1031741483;
    l_U746[3]._fU88._fU20 = -285371601;
    l_U746[3]._fU112._fU4 = "amb_ship_whitesmoke";
    l_U746[3]._fU112._fU8 = {0.00000000, -2.00000000, 11.30000000};
    l_U746[3]._fU112._fU20 = 1.00000000;
    l_U746[4]._fU72 = 1005833766;
    l_U746[4]._fU76 = 2120126803;
    l_U746[4]._fU80 = 100.00000000;
    l_U746[4]._fU84 = 2500.00000000;
    l_U746[4]._fU8[0] = {-1132.41900000, -987.18930000, 18.40566000};
    l_U746[4]._fU8[1] = {-1136.07800000, -987.57610000, 15.11125000};
    l_U746[4]._fU8[2] = {-1130.48300000, -986.28170000, 18.23182000};
    l_U746[4]._fU8[3] = {0.00000000, 0.00000000, 0.00000000};
    l_U746[4]._fU8[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U746[4]._fU88._fU0 = -249789870;
    l_U746[4]._fU88._fU4 = 1993446944;
    l_U746[4]._fU88._fU8 = -239336839;
    l_U746[4]._fU88._fU12 = 13155365;
    l_U746[4]._fU88._fU20 = 288897752;
    l_U746[4]._fU112._fU4 = "amb_ship_plume";
    l_U746[4]._fU112._fU8 = {0.00000000, -12.00000000, 10.00000000};
    l_U746[4]._fU112._fU20 = 0.50000000;
    l_U746[5]._fU72 = 67157199;
    l_U746[5]._fU76 = 1789985121;
    l_U746[5]._fU80 = 100.00000000;
    l_U746[5]._fU8[0] = {-1117.77900000, -984.02560000, 6.92463900};
    l_U746[5]._fU8[1] = {-1113.66500000, -980.72750000, 7.55649900};
    l_U746[5]._fU8[2] = {-1111.57700000, -987.52530000, 7.32094000};
    l_U746[5]._fU8[3] = {-1108.77600000, -983.11060000, 5.65747300};
    l_U746[5]._fU8[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U746[5]._fU88._fU0 = -1080811710;
    l_U746[5]._fU88._fU4 = 459792206;
    l_U746[5]._fU88._fU8 = -535896009;
    l_U746[5]._fU88._fU12 = -843141289;
    l_U746[5]._fU88._fU20 = -670316162;
    l_U746[5]._fU112._fU4 = "amb_ship_plume";
    l_U746[5]._fU112._fU8 = {0.00000000, -27.70000000, 1.50000000};
    l_U746[5]._fU112._fU20 = 1.40000000;
    l_U746[5]._fU136._fU0 = 4;
    l_U746[5]._fU136._fU28[0] = {-1122.75500000, -987.36040000, 6.54960000};
    l_U746[5]._fU136._fU132[0] = 186.48630000;
    l_U746[5]._fU136._fU80[0] = {0.19600000, -0.95100000, 0.00000000};
    l_U746[5]._fU136._fU172[0] = 1;
    l_U746[5]._fU136._fU28[1] = {-1123.46600000, -984.63960000, 7.55430000};
    l_U746[5]._fU136._fU132[1] = 4.19100000;
    l_U746[5]._fU136._fU80[1] = {-0.06370000, 0.99800000, -0.00000000};
    l_U746[5]._fU136._fU172[1] = 1;
    l_U746[5]._fU136._fU28[2] = {-1114.27600000, -980.38820000, 3.98000000};
    l_U746[5]._fU136._fU132[2] = 327.46410000;
    l_U746[5]._fU136._fU80[2] = {0.50970000, 0.86040000, 0.00620000};
    l_U746[5]._fU136._fU28[3] = {-1117.76500000, -987.74180000, 3.98000000};
    l_U746[5]._fU136._fU132[3] = 174.24480000;
    l_U746[5]._fU136._fU80[3] = {-0.09390000, -0.99550000, 0.00000000};
    l_U746[5]._fU388._fU0 = 2;
    l_U746[5]._fU388._fU28[0] = {-1123.21800000, -987.14200000, 7.47900000};
    l_U746[5]._fU388._fU80[0] = 11.00000000;
    l_U746[5]._fU388._fU28[1] = {-1122.99600000, -983.83420000, 6.10410000};
    l_U746[5]._fU388._fU80[1] = 180.39000000;
    l_U746[5]._fU388._fU200[0] = {-1000.00000000, -1000.00000000, 5.50000000};
    l_U746[5]._fU388._fU228[0] = {-3.20000000, -29.90000000, 1000.00000000};
    l_U746[5]._fU388._fU200[1] = {-1000.00000000, 9.00000000, 5.50000000};
    l_U746[5]._fU388._fU228[1] = {1000.00000000, 1000.00000000, 1000.00000000};
    l_U4880 = GET_SOUND_ID();
    l_U4881 = GET_SOUND_ID();
    l_U4882 = GET_SOUND_ID();
    l_U4878 = GET_SOUND_ID();
    l_U4879 = GET_SOUND_ID();
    l_U1743 = {-1142.77700000, -988.49450000, 1.05540000};
    l_U1746 = 98.10810000;
    l_U1759 = {-1142.77700000, -988.49450000, 1.05540000};
    l_U1762 = {0.00000000, 0.00000000, 98.10810000};
    g_U43137 = 15;
    sub_10932();
    return;
}

void sub_5598(unknown uParam0)
{
    return;
}

void sub_5618(unknown uParam0)
{
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        DO_SCREEN_FADE_OUT( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_5809(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_5826();
    return;
}

void sub_5826()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U2._fU16[I]._fU0 = nil;
        StrCopy( ref l_U2._fU16[I]._fU4, "", 32 );
        l_U2._fU344[I] = 0;
    }
    return;
}

void sub_5928(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6008( "\n PED NUMBER ", uParam0 );
    sub_6048( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6008(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6048(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6335()
{
    sub_6345( 1 );
    sub_6345( 2 );
    sub_6345( 0 );
    return;
}

void sub_6345(unknown uParam0)
{
    g_U30226[uParam0] = GET_ID_OF_THIS_THREAD();
    g_U30149[uParam0] = 1;
    return;
}

void sub_10932()
{
    sub_10941();
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
    {
        TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
    }
    g_U43628 = 1;
    g_U43593 = 0;
    g_U43594 = 0;
    g_U43595 = 0;
    g_U43596 = 0;
    REQUEST_SCRIPT( "MissionResultsTimer" );
    if (g_U43137 == 0)
    {
        REQUEST_SCRIPT( "MissionResultHelp" );
        sub_12720();
        sub_12758();
    }
    else
    {
        g_U43626 = 1;
        sub_12720();
        sub_12758();
        if (g_U43137 == 22)
        {
            sub_12861( 0, 0, 0 );
        }
        if (g_U43137 == 17)
        {
            sub_12861( 1, 0, 0 );
        }
        if (g_U43137 == 15)
        {
            sub_12861( 0, 1, 0 );
        }
        if (g_U43137 == 18)
        {
            sub_12861( 0, 0, 1 );
        }
        if (g_U43137 == 16)
        {
            sub_12861( 0, 0, 1 );
        }
    }
    if (g_U43133 == 1)
    {
        if ((g_U43463[g_U43137] == -1) || (g_U43463[g_U43137] == 0))
        {
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            PRINTSTRING( "g_FirstPlaythroughOfMission = TRUE" );
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            g_U43624 = 1;
        }
        else
        {
            PRINTSTRING( "**************************************" );
            PRINTNL();
            PRINTSTRING( "g_FirstPlaythroughOfMission = FALSE" );
            PRINTNL();
            PRINTSTRING( "**************************************" );
            PRINTNL();
            g_U43624 = 0;
        }
    }
    else
    {
        PRINTSTRING( "**************************************" );
        PRINTNL();
        PRINTSTRING( "g_FirstPlaythroughOfMission = TRUE" );
        PRINTNL();
        PRINTSTRING( "**************************************" );
        PRINTNL();
        g_U43624 = 1;
    }
    g_U43611 = 0;
    g_U43612 = 0;
    g_U43615 = 0;
    g_U43617 = 0;
    g_U43614 = 0;
    g_U43622 = 0;
    g_U43619 = 0;
    g_U43620 = 0;
    g_U43621 = 0;
    g_U43616 = 0;
    g_U43613 = 0;
    g_U43503 = 0;
    g_U43506 = 0;
    g_U43509 = 0;
    g_U43512 = 0;
    g_U43515 = 0;
    g_U43516 = 0;
    g_U43519 = 0;
    g_U43522 = 0;
    g_U43558 = 0;
    g_U43559 = 0;
    l_U723 = 0;
    g_U43509 = 0;
    g_U43508 = 0;
    g_U43507 = 0;
    g_U43498 = 0;
    PRINTNL();
    PRINTNL();
    PRINTSTRING( "*******************************************************" );
    PRINTSTRING( "g_AreMissionStatsNeeded = TRUE & Requesting MissionStatTracker.sc" );
    PRINTNL();
    PRINTSTRING( "*******************************************************" );
    PRINTNL();
    g_U43588 = 1;
    REQUEST_SCRIPT( "MissionStatTracker" );
    return;
}

void sub_10941()
{
    g_U43138[0]._fU0 = 4;
    g_U43138[0]._fU4 = 30;
    g_U43138[0]._fU8 = 0;
    g_U43138[0]._fU12 = 10;
    g_U43138[1]._fU0 = 5;
    g_U43138[1]._fU4 = 20;
    g_U43138[1]._fU8 = 10;
    g_U43138[1]._fU20 = 70;
    g_U43138[1]._fU16 = 31;
    g_U43138[2]._fU0 = 4;
    g_U43138[2]._fU4 = 0;
    g_U43138[2]._fU8 = 50;
    g_U43138[2]._fU20 = 70;
    g_U43138[2]._fU16 = 11;
    g_U43138[3]._fU0 = 2;
    g_U43138[3]._fU4 = 30;
    g_U43138[3]._fU12 = 0;
    g_U43138[5]._fU0 = 3;
    g_U43138[5]._fU4 = 10;
    g_U43138[5]._fU8 = 40;
    g_U43138[4]._fU0 = 2;
    g_U43138[4]._fU4 = 10;
    g_U43138[4]._fU8 = 0;
    g_U43138[4]._fU44 = 8000;
    g_U43138[6]._fU0 = 5;
    g_U43138[6]._fU4 = 0;
    g_U43138[6]._fU8 = 50;
    g_U43138[7]._fU0 = 5;
    g_U43138[7]._fU4 = 45;
    g_U43138[7]._fU8 = 50;
    g_U43138[7]._fU44 = 35000;
    g_U43138[8]._fU0 = 4;
    g_U43138[8]._fU4 = 35;
    g_U43138[8]._fU8 = 20;
    g_U43138[8]._fU12 = 80;
    g_U43138[9]._fU0 = 8;
    g_U43138[9]._fU4 = 50;
    g_U43138[9]._fU12 = 0;
    g_U43138[10]._fU0 = 3;
    g_U43138[10]._fU4 = 55;
    g_U43138[10]._fU44 = 7000;
    g_U43138[11]._fU0 = 10;
    g_U43138[11]._fU4 = 0;
    g_U43138[11]._fU8 = 50;
    g_U43138[11]._fU20 = 70;
    g_U43138[11]._fU16 = 25;
    g_U43138[12]._fU0 = 5;
    g_U43138[12]._fU4 = 0;
    g_U43138[12]._fU8 = 50;
    g_U43138[12]._fU12 = 60;
    g_U43138[12]._fU20 = 70;
    g_U43138[12]._fU16 = 10;
    g_U43138[12]._fU24 = 70;
    g_U43138[13]._fU0 = 7;
    g_U43138[13]._fU4 = 35;
    g_U43138[13]._fU8 = 0;
    g_U43138[14]._fU0 = 5;
    g_U43138[14]._fU4 = 15;
    g_U43138[14]._fU12 = 20;
    g_U43138[14]._fU24 = 140;
    g_U43138[15]._fU0 = 6;
    g_U43138[15]._fU4 = 0;
    g_U43138[15]._fU8 = 0;
    g_U43138[15]._fU20 = 70;
    g_U43138[15]._fU28 = 4;
    g_U43138[16]._fU0 = 4;
    g_U43138[16]._fU4 = 10;
    g_U43138[16]._fU8 = 50;
    g_U43138[16]._fU20 = 70;
    g_U43138[16]._fU16 = 6;
    g_U43138[16]._fU28 = 4;
    g_U43138[17]._fU0 = 7;
    g_U43138[17]._fU4 = 25;
    g_U43138[17]._fU8 = 50;
    g_U43138[17]._fU28 = 6;
    g_U43138[17]._fU12 = 50;
    g_U43138[18]._fU0 = 4;
    g_U43138[18]._fU4 = 20;
    g_U43138[18]._fU8 = 50;
    g_U43138[18]._fU28 = 8;
    g_U43138[19]._fU0 = 7;
    g_U43138[19]._fU4 = 50;
    g_U43138[19]._fU8 = 40;
    g_U43138[19]._fU16 = 20;
    g_U43138[19]._fU20 = 55;
    g_U43138[20]._fU0 = 5;
    g_U43138[20]._fU4 = 0;
    g_U43138[20]._fU8 = 40;
    g_U43138[20]._fU20 = 55;
    g_U43138[20]._fU16 = 20;
    g_U43138[21]._fU0 = 3;
    g_U43138[21]._fU4 = 10;
    g_U43138[21]._fU8 = 10;
    g_U43138[22]._fU0 = 6;
    g_U43138[22]._fU4 = 30;
    g_U43138[22]._fU8 = 50;
    g_U43138[22]._fU20 = 70;
    g_U43138[22]._fU16 = 20;
    g_U43138[22]._fU28 = 5;
    g_U43138[23]._fU0 = 6;
    g_U43138[23]._fU4 = 40;
    g_U43138[23]._fU8 = 40;
    g_U43138[23]._fU20 = 70;
    g_U43138[23]._fU16 = 20;
    g_U43138[24]._fU0 = 4;
    g_U43138[24]._fU4 = 30;
    g_U43138[24]._fU8 = 40;
    g_U43138[24]._fU20 = 60;
    g_U43138[24]._fU16 = 10;
    g_U43138[25]._fU0 = 4;
    g_U43138[25]._fU4 = 30;
    g_U43138[25]._fU8 = 90;
    g_U43138[25]._fU20 = 70;
    g_U43138[25]._fU16 = 25;
    g_U43138[25]._fU28 = 4;
    return;
}

void sub_12720()
{
    GET_GAME_TIMER( ref g_U43501 );
    g_U43496 = 1;
    return;
}

void sub_12758()
{
    if (NOT (IS_CHAR_DEAD( sub_3454() )))
    {
        GET_CHAR_HEALTH( sub_3454(), ref g_U43520 );
        g_U43520 = 200;
    }
    return;
}

void sub_12861(int iParam0, int iParam1, int iParam2)
{
    if (iParam1 == 1)
    {
        g_U43517 = GET_INT_STAT( 296 );
    }
    else if (iParam2 == 1)
    {
        g_U43517 = GET_INT_STAT( 297 );
    }
    else
    {
        g_U43517 = GET_INT_STAT( 294 );
    }
    if (iParam0 == 1)
    {
        RESET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER();
    }
    return;
}

void sub_14146()
{
    int I;

    sub_5598( "In B3_PLAY_INTRO_MOCAP()" );
    sub_14209( l_U5391, "Intro prog...." );
    switch (l_U5391)
    {
        case 0:
        l_U4867 = 1;
        if ((NOT g_U43133) AND (IS_BIT_SET( g_U10938._fU0, 7 )))
        {
            if (sub_14305())
            {
                if (g_U43104[15] > 0)
                {
                    g_U43104[15] = 0;
                }
                SET_PLAYER_CONTROL( sub_14417(), 0 );
                GET_CURRENT_WEATHER( ref l_U5393 );
                FORCE_WEATHER_NOW( 1 );
                START_CUTSCENE_NOW( "Y1_AA" );
                l_U5391 = 1;
            }
        }
        else if (g_U43133)
        {
            if (g_U43104[15] > 0)
            {
                g_U43104[15] = 0;
            }
        }
        l_U5391 = 3;;
        break;
        case 1:
        if (HAS_CUTSCENE_LOADED())
        {
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            l_U5391 = 3;
            CLEAR_NAMED_CUTSCENE( "Y1_AA" );
            RELEASE_WEATHER();
        }
        break;
        case 3:
        REQUEST_MODEL( 788747387 );
        while (NOT (HAS_MODEL_LOADED( 788747387 )))
        {
            WAIT( 0 );
        }
        sub_14667( 5 );
        sub_14667( 2 );
        REQUEST_MODEL( 944930284 );
        REQUEST_MODEL( 861409633 );
        REQUEST_MODEL( 1033245328 );
        REQUEST_MODEL( l_U3839 );
        REQUEST_MODEL( l_U3840 );
        REQUEST_MODEL( l_U3841 );
        REQUEST_MODEL( l_U3838 );
        REQUEST_MODEL( -1341473171 );
        REQUEST_ANIMS( "missyusuf01" );
        REQUEST_CAR_RECORDING( 466 );
        REQUEST_CAR_RECORDING( 467 );
        REQUEST_CAR_RECORDING( 469 );
        REQUEST_CAR_RECORDING( 473 );
        REQUEST_CAR_RECORDING( 494 );
        REQUEST_CAR_RECORDING( 495 );
        REQUEST_CAR_RECORDING( 120 );
        REQUEST_CAR_RECORDING( 121 );
        REQUEST_CAR_RECORDING( 122 );
        while ((NOT (REQUEST_MISSION_AUDIO_BANK( "EP2_SFX\Y1_SEXY_TIME" ))) || ((NOT (HAVE_ANIMS_LOADED( "missyusuf01" ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 122 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 121 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 120 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 495 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 494 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 473 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 469 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 467 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 466 ))) || ((NOT (HAS_MODEL_LOADED( 944930284 ))) || ((NOT (HAS_MODEL_LOADED( -1341473171 ))) || ((NOT (HAS_MODEL_LOADED( l_U3838 ))) || ((NOT (HAS_MODEL_LOADED( l_U3841 ))) || ((NOT (HAS_MODEL_LOADED( l_U3840 ))) || ((NOT (HAS_MODEL_LOADED( l_U3839 ))) || ((NOT (HAS_MODEL_LOADED( 861409633 ))) || (NOT (HAS_MODEL_LOADED( 1033245328 )))))))))))))))))))))
        {
            if (NOT (REQUEST_MISSION_AUDIO_BANK( "EP2_SFX\Y1_SEXY_TIME" )))
            {
                PRINTSTRING( "ATTEMPTING TO LOAD AUDIO BANK" );
                PRINTNL();
            }
            WAIT( 0 );
        }
        STOP_STREAM();
        if (g_U3)
        {
            SET_TIME_OF_DAY( 8, 0 );
        }
        FORCE_WEATHER_NOW( 1 );
        CREATE_OBJECT_NO_OFFSET( -1341473171, -1135.00000000, -987.10000000, 8.00000000, ref l_U4714, 1 );
        FREEZE_OBJECT_POSITION( l_U4714, 1 );
        SET_OBJECT_VISIBLE( l_U4714, 0 );
        SET_OBJECT_COLLISION( l_U4714, 0 );
        CREATE_OBJECT_NO_OFFSET( -1341473171, -1133.33700000, -987.10200000, 6.51387900, ref l_U4715, 1 );
        SET_OBJECT_HEADING( l_U4715, 98.10810000 );
        FREEZE_OBJECT_POSITION( l_U4715, 1 );
        SET_OBJECT_VISIBLE( l_U4715, 0 );
        SET_OBJECT_COLLISION( l_U4715, 0 );
        sub_28787();
        l_U5147 = 1;
        CLEAR_AREA_OF_CARS( l_U1759._fU0, l_U1759._fU4, l_U1759._fU8, 1000.00000000 );
        if (g_U3)
        {
            GIVE_WEAPON_TO_CHAR( sub_3454(), 32, 2000, 0 );
            SET_CURRENT_CHAR_WEAPON( sub_3454(), 0, 0 );
        }
        switch (g_U43104[15])
        {
            case 0: break;
            case 1:
            LOAD_SCENE( -410.18950000, -512.28310000, 0.31200000 );
            SET_CHAR_COORDINATES( sub_3454(), -413.57410000, -513.93010000, 1.48250000 );
            WAIT( 0 );
            CLEAR_AREA( -413.57410000, -513.93010000, 1.48250000, 100.00000000, 1 );
            sub_14667( 0 );
            WARP_CHAR_INTO_CAR( sub_3454(), l_U4966 );
            SET_CAR_ON_GROUND_PROPERLY( l_U4966 );
            l_U5391 = 4;
            l_U745 = 2;
            l_U5340 = 1;
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_PLAYER_CONTROL( sub_14417(), 1 );
            sub_29310( 500 );
            break;
            case 2:
            REQUEST_MODEL( l_U3845 );
            REQUEST_MODEL( l_U3844 );
            REQUEST_MODEL( l_U3841 );
            while ((NOT (HAS_MODEL_LOADED( l_U3845 ))) || ((NOT (HAS_MODEL_LOADED( l_U3844 ))) || (NOT (HAS_MODEL_LOADED( l_U3841 )))))
            {
                WAIT( 0 );
            }
            LOAD_SCENE( -1105.64600000, -983.50350000, 1.33400000 );
            sub_14667( 14 );
            SET_CHAR_COORDINATES( sub_3454(), -1105.64600000, -983.50350000, 1.33400000 );
            CLEAR_AREA( -1105.64600000, -983.50350000, 1.33400000, 100.00000000, 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U5391 = 4;
            l_U745 = 2;
            l_U5360 = 1;
            break;
            case 3:
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3844 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3845 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 944930284 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 861409633 );
            REQUEST_MODEL( -2075782048 );
            REQUEST_MODEL( 1239854102 );
            REQUEST_MODEL( 1930762713 );
            REQUEST_MODEL( 1233545547 );
            REQUEST_MODEL( 1005833766 );
            REQUEST_MODEL( 67157199 );
            REQUEST_MODEL( 518033353 );
            REQUEST_MODEL( -1366166054 );
            REQUEST_MODEL( 1595218282 );
            REQUEST_MODEL( 2120126803 );
            REQUEST_MODEL( 1789985121 );
            while ((NOT (HAS_MODEL_LOADED( 1789985121 ))) || ((NOT (HAS_MODEL_LOADED( 2120126803 ))) || ((NOT (HAS_MODEL_LOADED( 1595218282 ))) || ((NOT (HAS_MODEL_LOADED( -1366166054 ))) || ((NOT (HAS_MODEL_LOADED( 518033353 ))) || ((NOT (HAS_MODEL_LOADED( 67157199 ))) || ((NOT (HAS_MODEL_LOADED( 1005833766 ))) || ((NOT (HAS_MODEL_LOADED( 1233545547 ))) || ((NOT (HAS_MODEL_LOADED( 1930762713 ))) || ((NOT (HAS_MODEL_LOADED( 1239854102 ))) || (NOT (HAS_MODEL_LOADED( -2075782048 )))))))))))))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U4972 )))
            {
                WARP_CHAR_INTO_CAR( sub_3454(), l_U4972 );
                SET_CAR_PROOFS( l_U4972, 1, 1, 1, 1, 1 );
                LOAD_SCENE( -748.37160000, -629.04030000, 95.78970000 );
                SET_CAR_COORDINATES( l_U4972, -748.37160000, -629.04030000, 95.78970000 );
                SET_CAR_HEADING( l_U4972, 143.23490000 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_HELI_BLADES_FULL_SPEED( l_U4972 );
                l_U5150 = 1;
                l_U5148 = 1;
                l_U5147 = 1;
                l_U5179 = 1;
                l_U5194 = 1;
                l_U5185 = 1;
                l_U5196 = 1;
                l_U5189 = 1;
                l_U4777 = 1;
                l_U5203 = 1;
                sub_14667( 4 );
                for ( I = 0; I < l_U4280; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U4280[I]._fU0 ))
                    {
                        DELETE_CHAR( ref l_U4280[I]._fU0 );
                    }
                }
                for ( I = 0; I < l_U3874; I++ )
                {
                    sub_30294( ref l_U3874[I] );
                    if (DOES_CHAR_EXIST( l_U3874[I]._fU0 ))
                    {
                        DELETE_CHAR( ref l_U3874[I]._fU0 );
                    }
                }
                sub_14667( 16 );
                l_U4889 = 1;
                l_U5317 = 1;
                PLAY_SOUND_FROM_POSITION( l_U4881, "Y1_STEAL_CHOPPER_SHIP_ALARM", -1149.12200000, -989.36460000, 13.71939000 );
                FREEZE_CAR_POSITION( l_U4972, 0 );
                WAIT( 0 );
                if (NOT l_U4781)
                {
                    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U4780 );
                    SET_FOLLOW_VEHICLE_CAM_SUBMODE( 3 );
                    l_U4781 = 1;
                }
                SET_PLAYER_CONTROL( sub_14417(), 1 );
                SET_PED_IS_BLIND_RAGING( sub_3454(), 1 );
                sub_29310( 500 );
                l_U5245 = 1;
                l_U5391 = 4;
                l_U745 = 3;
            }
            break;
            case 4:
            if (NOT (IS_CAR_DEAD( l_U4972 )))
            {
                WARP_CHAR_INTO_CAR( sub_3454(), l_U4972 );
                l_U5150 = 1;
                l_U5148 = 1;
                l_U5147 = 1;
                SET_HELI_BLADES_FULL_SPEED( l_U4972 );
                WAIT( 0 );
                if (NOT (IS_CAR_DEAD( l_U4972 )))
                {
                    FREEZE_CAR_POSITION( l_U4972, 0 );
                    SET_CAR_PROOFS( l_U4972, 1, 1, 1, 1, 1 );
                }
                if (NOT l_U4781)
                {
                    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U4780 );
                    SET_FOLLOW_VEHICLE_CAM_SUBMODE( 3 );
                    l_U4781 = 1;
                }
                SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1141632236, -28737275 );
                SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
                SET_PED_IS_BLIND_RAGING( sub_3454(), 1 );
                l_U5245 = 1;
                l_U4965 = 1;
                l_U5179 = 1;
                l_U5194 = 1;
                l_U5185 = 1;
                l_U5195 = 1;
                l_U5196 = 1;
                l_U5189 = 1;
                l_U4777 = 1;
                l_U5203 = 1;
                l_U5316 = 2;
                l_U5391 = 4;
                l_U745 = 3;
            }
            break;
        }
        sub_30956();
        SET_CAM_BEHIND_PED( sub_3454() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        CLEAR_ROOM_FOR_CHAR( sub_3454() );
        l_U4883 = 1;
        if (g_U43104[15] == 0)
        {
            l_U5391 = 2;
        }
        break;
        case 2:
        sub_14667( 0 );
        LOAD_SCENE( -38.32900000, 792.16140000, 13.59490000 );
        SET_CHAR_COORDINATES( sub_3454(), -34.72960000, 792.78590000, 13.71320000 );
        SET_CHAR_HEADING( sub_3454(), 90.00000000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL( sub_14417(), 1 );
        sub_29310( 500 );
        PRINT_NOW( "YS1_MRN", 7500, 1 );
        ADD_BLIP_FOR_COORD( l_U5095._fU0, l_U5095._fU4, l_U5095._fU8, ref l_U4983 );
        SET_ROUTE( l_U4983, 1 );
        sub_31262( ref l_U4983, -412.22310000, -440.02360000, 3.80290000, 226.66460000 );
        l_U5391 = 4;
        l_U745 = 2;
        break;
    }
    return;
}

void sub_14209(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_14305()
{
    return sub_14316( 1, 1 );
}

int sub_14316(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((g_U560 != 9) AND (uParam1))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

void sub_14417()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_14667(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int I;
    int J;

    switch (uParam0)
    {
        case 0:
        CREATE_CAR( 861409633, -398.18460000, -505.39990000, 0.26210000, ref l_U4966, 1 );
        SET_CAR_HEADING( l_U4966, 119.12000000 );
        CHANGE_CAR_COLOUR( l_U4966, 90, 27 );
        TURN_OFF_VEHICLE_EXTRA( l_U4966, 1, 1 );
        SET_CAR_ENGINE_ON( l_U4966, 0, 0 );
        CREATE_CAR( 944930284, -410.88170000, -511.26470000, 0.10010000, ref l_U4967[0], 1 );
        SET_CAR_HEADING( l_U4967[0], 212.53610000 );
        SET_CAR_ENGINE_ON( l_U4967[0], 0, 0 );
        CHANGE_CAR_COLOUR( l_U4967[0], 113, 85 );
        CREATE_CAR( 861409633, -375.80560000, -570.02200000, 0.17140000, ref l_U4967[1], 1 );
        SET_CAR_HEADING( l_U4967[1], 31.43640000 );
        SET_CAR_ENGINE_ON( l_U4967[1], 0, 0 );
        CREATE_CAR( 861409633, -383.69780000, -534.84690000, 0.26130000, ref l_U4967[2], 1 );
        SET_CAR_HEADING( l_U4967[2], 34.14000000 );
        SET_CAR_ENGINE_ON( l_U4967[2], 0, 0 );
        break;
        case 2:
        for ( I = 0; I < l_U746; I++ )
        {
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, l_U746[I]._fU88._fU12, l_U746[I]._fU88._fU4 );
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, l_U746[I]._fU88._fU20, l_U746[I]._fU88._fU4 );
        }
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -28737275, -1141632236 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 1699083005, 2052240693 );
        PLAY_SOUND_FROM_POSITION( l_U4880, "Y1_STEAL_CHOPPER_BOAT_ENGINE", -1105.10900000, -983.52040000, 4.42601300 );
        break;
        case 3:
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1141632236, -28737275 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
        SET_OBJECT_HEADING( l_U4713, 98.10810000 );
        SET_OBJECT_VISIBLE( l_U4713, 0 );
        SET_OBJECT_COLLISION( l_U4713, 0 );
        break;
        case 4:
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1141632236, -28737275 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
        sub_15681( 0 );
        sub_15681( 1 );
        sub_15681( 2 );
        sub_15681( 3 );
        sub_15681( 4 );
        sub_15681( 5 );
        break;
        case 5:
        CREATE_CAR( l_U3839, -1110.85300000, -983.73530000, 7.72440000, ref l_U4972, 1 );
        SET_CAR_HEADING( l_U4972, 54.36460000 );
        FREEZE_CAR_POSITION( l_U4972, 1 );
        break;
        case 6:
        CREATE_CAR( l_U3839, -1109.64100000, -984.99620000, 7.72440000, ref l_U4972, 1 );
        SET_CAR_HEADING( l_U4972, 74.48830000 );
        FREEZE_CAR_POSITION( l_U4972, 1 );
        SET_CAR_IN_CUTSCENE( l_U4972, 1 );
        break;
        case 7:
        l_U3586[0] = {sub_16624( l_U3839, -1217.68300000, -715.30770000, 7.17293000, 359.73860000, 2, 1, 1 )};
        break;
        case 8:
        l_U3642[0] = {sub_17202( l_U3843, -1206.67100000, -1100.49000000, 0.00000000, 8.78110000, 1, 0, 1 )};
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U3642[0]._fU0, 1 );
        SET_VEHICLE_CAN_BE_TARGETTED( l_U3642[0]._fU0, 1 );
        SET_VEHICLE_ALWAYS_RENDER( l_U3642[0]._fU0 );
        l_U3642[0]._fU52[0] = {-1206.67100000, -1100.49000000, 0.00000000};
        l_U3642[0]._fU52[1] = {-1253.75700000, -895.93500000, 0.00000000};
        l_U3642[0]._fU52[2] = {-989.28370000, -913.03450000, 0.00000000};
        l_U3642[0]._fU52[3] = {-962.80820000, -1088.56000000, 0.00000000};
        l_U3642[0]._fU104 = 0;
        break;
        case 1:
        l_U3874[0]._fU0 = sub_18122( l_U3841, 24, -1121.38600000, -991.22880000, 6.55750000, 96.75260000, 14, 0, 1 );
        l_U3874[0]._fU40 = {-1125.50000000, -980.38710000, 7.56220000};
        l_U3874[0]._fU52 = 0;
        l_U3874[0]._fU80 = l_U4871;
        l_U3874[1]._fU0 = sub_18122( l_U3841, 24, -1144.42700000, -987.23720000, 11.92080000, 104.80000000, 14, 0, 1 );
        l_U3874[2]._fU0 = sub_18122( l_U3841, 24, -1133.56900000, -987.92680000, 11.92600000, 104.80000000, 14, 0, 1 );
        l_U3874[3]._fU0 = sub_18122( l_U3841, 24, -1129.63400000, -992.31600000, 3.44690000, 275.73190000, 7, 0, 1 );
        break;
        case 12:
        l_U3642[3] = {sub_17202( l_U3843, -1138.35700000, -932.33590000, 0.07890000, 89.62860000, 1, 1, 1 )};
        l_U3642[4] = {sub_17202( l_U3843, -1122.51300000, -1042.42100000, 0.00000000, 279.26780000, 1, 1, 1 )};
        sub_18749( 0 );
        break;
        case 9:
        l_U3642[0] = {sub_17202( l_U3843, -1128.51200000, -1012.50000000, 0.26810000, 154.73470000, 2, 1, 1 )};
        SET_VEHICLE_QUATERNION( l_U3642[0]._fU0, 0.00890000, 0.02190000, 0.66840000, 0.74350000 );
        SET_VEHICLE_ALWAYS_RENDER( l_U3642[0]._fU0 );
        l_U3642[1] = {sub_17202( l_U3843, -1100.22700000, -1010.50500000, 0.13030000, 86.39670000, 2, 1, 1 )};
        SET_VEHICLE_ALWAYS_RENDER( l_U3642[1]._fU0 );
        l_U3642[2] = {sub_17202( l_U3843, -1095.19100000, -1019.56400000, -0.23670000, 86.39670000, 2, 1, 1 )};
        SET_VEHICLE_ALWAYS_RENDER( l_U3642[2]._fU0 );
        for ( I = 0; I < l_U3642; I++ )
        {
            for ( J = 0; J <= 2; J++ )
            {
                if (DOES_CHAR_EXIST( l_U3642[I]._fU4[J] ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U3642[I]._fU4[J] )))
                    {
                        SET_CHAR_KEEP_TASK( l_U3642[I]._fU4[J], 1 );
                    }
                }
            }
        }
        break;
        case 10:
        l_U4782[0] = {sub_17202( l_U3843, -1059.93500000, -937.64690000, 0.17920000, 89.62860000, 0, 1, 1 )};
        SET_VEHICLE_QUATERNION( l_U4782[0]._fU0, 0.00200000, 0.03590000, 0.87070000, 0.49040000 );
        SET_CAR_IN_CUTSCENE( l_U4782[0]._fU0, 1 );
        SET_CHAR_IN_CUTSCENE( l_U4782[0]._fU4[0], 1 );
        l_U4782[1] = {sub_17202( l_U3843, -1048.12200000, -926.61470000, 0.14560000, 120.14680000, 0, 1, 1 )};
        SET_CAR_IN_CUTSCENE( l_U4782[1]._fU0, 1 );
        SET_CHAR_IN_CUTSCENE( l_U4782[1]._fU4[0], 1 );
        break;
        case 11:
        l_U3642[0] = {sub_17202( l_U3843, -1128.51200000, -1012.50000000, 0.26810000, 154.73470000, 1, 0, 1 )};
        SET_VEHICLE_QUATERNION( l_U3642[0]._fU0, 0.00890000, 0.02190000, 0.66840000, 0.74350000 );
        l_U3642[1] = {sub_17202( l_U3843, -1100.22700000, -1010.50500000, 0.13030000, 86.39670000, 1, 0, 1 )};
        break;
        case 13:
        l_U4280[0]._fU0 = sub_18122( l_U3845, 25, l_U5064[0], 172.92930000, 0, 1, 0 );
        l_U4280[1]._fU0 = sub_18122( l_U3845, 25, l_U5064[1], 242.26000000, 0, 1, 0 );
        l_U4280[2]._fU0 = sub_18122( l_U3845, 25, l_U5064[2], 283.72790000, 0, 1, 0 );
        l_U4280[4]._fU0 = sub_18122( l_U3844, 25, l_U5064[4], 143.54000000, 0, 1, 0 );
        l_U4280[5]._fU0 = sub_18122( l_U3844, 25, l_U5064[5], 25.09000000, 0, 1, 0 );
        l_U4280[6]._fU0 = sub_18122( l_U3844, 25, l_U5064[6], 61.11740000, 0, 1, 0 );
        for ( I = 0; I < l_U4280; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
            {
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U4280[I]._fU0, 1 );
                TASK_START_SCENARIO_IN_PLACE( l_U4280[I]._fU0, "HangOut_Street", -1082130432 );
            }
        }
        break;
        case 14:
        l_U3874[0]._fU0 = sub_18122( l_U3841, 24, -1141.22100000, -982.42250000, 6.55750000, 85.96670000, 7, 1, 0 );
        l_U3874[0]._fU40 = {-1121.22400000, -979.04900000, 7.55450000};
        l_U3874[0]._fU52 = 0;
        l_U3874[0]._fU80 = l_U4871;
        l_U3874[0]._fU28 = 1;
        TASK_START_SCENARIO_IN_PLACE( l_U3874[0]._fU0, "HangOut_Street", -1082130432 );
        l_U3874[1]._fU0 = sub_18122( l_U3841, 24, -1148.39800000, -994.86330000, 6.55620000, 130.68660000, 7, 1, 0 );
        l_U3874[1]._fU40 = {-1123.64300000, -991.60420000, 7.56220000};
        l_U3874[1]._fU52 = 0;
        l_U3874[1]._fU80 = l_U4871;
        l_U3874[1]._fU28 = 1;
        TASK_START_SCENARIO_IN_PLACE( l_U3874[1]._fU0, "HangOut_Street", -1082130432 );
        l_U3874[2]._fU0 = sub_18122( l_U3841, 24, -1145.01700000, -987.70140000, 11.92080000, 85.96670000, 7, 1, 0 );
        l_U3874[2]._fU40 = {-1128.81400000, -986.50600000, 11.92210000};
        l_U3874[2]._fU52 = 0;
        l_U3874[2]._fU80 = l_U4871;
        l_U3874[2]._fU28 = 1;
        l_U3874[3]._fU0 = sub_18122( l_U3841, 24, -1150.99600000, -992.98320000, 9.21610000, 99.40000000, 7, 1, 0 );
        l_U3874[3]._fU40 = {-1126.17700000, -987.88590000, 9.21610000};
        l_U3874[3]._fU52 = 0;
        l_U3874[3]._fU80 = l_U4871;
        l_U3874[3]._fU8 = 1;
        l_U3874[4]._fU0 = sub_18122( l_U3841, 24, -1150.40500000, -996.23990000, 7.54970000, 323.54150000, 7, 1, 0 );
        l_U3874[4]._fU40 = {-1121.59000000, -987.36460000, 7.55460000};
        l_U3874[4]._fU52 = 0;
        l_U3874[4]._fU80 = l_U4871;
        l_U3874[4]._fU28 = 1;
        TASK_START_SCENARIO_IN_PLACE( l_U3874[4]._fU0, "HangOut_Street", -1082130432 );
        l_U3874[5]._fU0 = sub_18122( l_U3841, 24, -1142.70400000, -982.23250000, 6.54700000, 252.71820000, 7, 1, 0 );
        l_U3874[5]._fU40 = {-1123.88300000, -982.96450000, 7.55460000};
        l_U3874[5]._fU52 = 0;
        l_U3874[5]._fU80 = l_U4871;
        l_U3874[5]._fU28 = 1;
        TASK_START_SCENARIO_IN_PLACE( l_U3874[5]._fU0, "HangOut_Street", -1082130432 );
        l_U4280[0]._fU0 = sub_18122( l_U3845, 25, l_U5064[0], 103.10740000, 0, 1, 0 );
        l_U4280[1]._fU0 = sub_18122( l_U3845, 25, l_U5064[1], 242.26000000, 0, 1, 0 );
        l_U4280[2]._fU0 = sub_18122( l_U3845, 25, l_U5064[2], 283.72790000, 0, 1, 0 );
        l_U4280[4]._fU0 = sub_18122( l_U3844, 25, l_U5064[4], 90.54000000, 0, 1, 0 );
        TASK_PLAY_ANIM_WITH_FLAGS( l_U4280[4]._fU0, "henchman_spot_player_b_chat", "missYusuf01", 1000, 0, 16 );
        l_U4280[5]._fU0 = sub_18122( l_U3844, 25, l_U5064[5], 275.84210000, 0, 1, 0 );
        TASK_PLAY_ANIM_WITH_FLAGS( l_U4280[5]._fU0, "henchman_spot_player_a_chat", "missYusuf01", 1000, 0, 16 );
        l_U4280[6]._fU0 = sub_18122( l_U3844, 25, l_U5064[6], 105.11740000, 0, 1, 0 );
        TASK_PLAY_ANIM_WITH_FLAGS( l_U4280[6]._fU0, "henchman_spot_player_c_chat", "missYusuf01", 1000, 0, 16 );
        for ( I = 0; I < l_U4280; I++ )
        {
            if (I < 3)
            {
                if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
                {
                    TASK_START_SCENARIO_IN_PLACE( l_U4280[I]._fU0, "HangOut_Street", -1082130432 );
                }
            }
        }
        break;
        case 15:
        l_U3874[0]._fU0 = sub_18122( l_U3841, 24, -1126.20800000, -987.92050000, 6.54190000, 334.63000000, 14, 1, 0 );
        l_U3874[0]._fU40 = {-1120.78100000, -991.68030000, 6.54940000};
        l_U3874[0]._fU52 = 2;
        l_U3874[0]._fU80 = l_U4871;
        l_U3874[0]._fU24 = 1;
        l_U3874[1]._fU0 = sub_18122( l_U3841, 24, -1126.21500000, -986.55570000, 6.54290000, 275.00000000, 14, 1, 0 );
        l_U3874[1]._fU40 = {-1118.81800000, -990.68370000, 6.54960000};
        l_U3874[1]._fU52 = 2;
        l_U3874[1]._fU80 = l_U4871;
        l_U3874[1]._fU24 = 1;
        l_U3874[2]._fU0 = sub_18122( l_U3841, 24, -1145.01700000, -987.70140000, 11.92080000, 85.96670000, 14, 1, 0 );
        l_U3874[2]._fU40 = {-1128.81400000, -986.50600000, 11.92210000};
        l_U3874[2]._fU52 = 0;
        l_U3874[2]._fU80 = l_U4871;
        l_U3874[2]._fU28 = 1;
        l_U3874[3]._fU0 = sub_18122( l_U3841, 24, -1150.99600000, -992.98320000, 9.21610000, 99.40000000, 14, 1, 0 );
        l_U3874[3]._fU40 = {-1126.17700000, -987.88590000, 9.21610000};
        l_U3874[3]._fU52 = 0;
        l_U3874[3]._fU80 = l_U4871;
        l_U3874[3]._fU8 = 1;
        l_U3874[4]._fU0 = sub_18122( l_U3841, 24, -1125.57200000, -985.29310000, 6.54710000, 275.00000000, 14, 1, 0 );
        l_U3874[4]._fU40 = {-1123.71300000, -979.31370000, 6.54930000};
        l_U3874[4]._fU52 = 2;
        l_U3874[4]._fU80 = l_U4871;
        l_U3874[4]._fU24 = 1;
        l_U3874[5]._fU0 = sub_18122( l_U3841, 24, -1125.39100000, -985.05840000, 6.54820000, 275.00000000, 14, 1, 0 );
        l_U3874[5]._fU40 = {-1113.09300000, -978.92690000, 6.54960000};
        l_U3874[5]._fU52 = 2;
        l_U3874[5]._fU80 = l_U4871;
        l_U3874[5]._fU24 = 1;
        break;
        case 16:
        l_U3874[2]._fU0 = sub_18122( l_U3841, 24, -1121.61200000, -979.37730000, 8.56250000, 11.06650000, 18, 0, 0 );
        l_U3874[2]._fU84 = {10.00000000, -1000.00000000, 9.50000000};
        l_U3874[2]._fU96 = {1000.00000000, 1000.00000000, 1000.00000000};
        GET_GAME_TIMER( ref l_U3874[2]._fU68 );
        l_U3874[3]._fU0 = sub_18122( l_U3841, 24, -1143.77500000, -981.99270000, 7.96630000, 0.01830000, 18, 0, 0 );
        l_U3874[3]._fU84 = {10.00000000, -1000.00000000, 9.50000000};
        l_U3874[3]._fU96 = {1000.00000000, 1000.00000000, 1000.00000000};
        GET_GAME_TIMER( ref l_U3874[3]._fU68 );
        l_U3874[4]._fU0 = sub_18122( l_U3841, 24, -1169.28800000, -987.63230000, 8.32890000, 54.89530000, 18, 0, 0 );
        l_U3874[4]._fU84 = {-1000.00000000, 20.00000000, 9.50000000};
        l_U3874[4]._fU96 = {1000.00000000, 1000.00000000, 1000.00000000};
        GET_GAME_TIMER( ref l_U3874[4]._fU68 );
        l_U3874[5]._fU0 = sub_18122( l_U3841, 24, -1169.97400000, -995.88740000, 8.22640000, 191.63730000, 18, 0, 0 );
        l_U3874[5]._fU84 = {-1000.00000000, 20.00000000, 9.50000000};
        l_U3874[5]._fU96 = {1000.00000000, 1000.00000000, 1000.00000000};
        GET_GAME_TIMER( ref l_U3874[5]._fU68 );
        l_U3874[6]._fU0 = sub_18122( l_U3841, 24, -1148.68800000, -995.55840000, 7.55550000, 217.76650000, 18, 0, 0 );
        l_U3874[6]._fU84 = {-1000.00000000, -1000.00000000, 9.50000000};
        l_U3874[6]._fU96 = {-9.00000000, -25.00000000, 1000.00000000};
        GET_GAME_TIMER( ref l_U3874[6]._fU68 );
        l_U3874[7]._fU0 = sub_18122( l_U3841, 24, -1121.05300000, -991.50640000, 7.55750000, 222.87960000, 18, 0, 0 );
        l_U3874[7]._fU84 = {-1000.00000000, -1000.00000000, 9.50000000};
        l_U3874[7]._fU96 = {-9.00000000, 23.00000000, 1000.00000000};
        l_U3874[7]._fU52 = 1;
        l_U3874[7]._fU80 = l_U4871;
        GET_GAME_TIMER( ref l_U3874[7]._fU68 );
        GIVE_WEAPON_TO_CHAR( l_U3874[7]._fU0, 18, 100, 0 );
        l_U3874[8]._fU0 = sub_18122( l_U3841, 24, -1175.87700000, -992.98930000, 7.24260000, 93.37980000, 18, 0, 0 );
        l_U3874[8]._fU84 = {-1000.00000000, -1000.00000000, 9.50000000};
        l_U3874[8]._fU96 = {-9.00000000, 23.00000000, 1000.00000000};
        l_U3874[8]._fU52 = 1;
        l_U3874[8]._fU80 = l_U4871;
        l_U3874[8]._fU76 = 1;
        GET_GAME_TIMER( ref l_U3874[8]._fU68 );
        l_U3874[9]._fU0 = sub_18122( l_U3841, 24, -1167.64600000, -997.09010000, 7.02970000, 49.39800000, 18, 0, 0 );
        l_U3874[9]._fU84 = {-1000.00000000, -1000.00000000, 9.50000000};
        l_U3874[9]._fU96 = {-9.00000000, 23.00000000, 1000.00000000};
        l_U3874[9]._fU52 = 1;
        l_U3874[9]._fU80 = l_U4871;
        l_U3874[9]._fU76 = 1;
        GET_GAME_TIMER( ref l_U3874[9]._fU68 );
        l_U3874[10]._fU0 = sub_18122( l_U3841, 24, -1107.05800000, -986.00240000, 8.32010000, 49.39800000, 18, 0, 0 );
        l_U3874[10]._fU84 = {-1000.00000000, -1000.00000000, 9.50000000};
        l_U3874[10]._fU96 = {-9.00000000, 23.00000000, 1000.00000000};
        l_U3874[10]._fU52 = 1;
        l_U3874[10]._fU80 = l_U4871;
        l_U3874[10]._fU76 = 1;
        GET_GAME_TIMER( ref l_U3874[10]._fU68 );
        l_U3874[11]._fU0 = sub_18122( l_U3841, 24, -1114.22800000, -981.87150000, 8.32010000, 217.76650000, 18, 0, 0 );
        l_U3874[11]._fU84 = {-1000.00000000, -1000.00000000, 9.50000000};
        l_U3874[11]._fU96 = {-9.00000000, -25.00000000, 1000.00000000};
        GET_GAME_TIMER( ref l_U3874[11]._fU68 );
        l_U3874[11]._fU76 = 1;
        sub_23647();
        break;
        case 18:
        sub_26245( 32 );
        while (NOT (sub_26708( 32 )))
        {
            WAIT( 0 );
        }
        sub_26786( 32, ref l_U4778, 244.95520000, -358.63860000, 159.07880000, 283.80420000 );
        sub_5928( 2, l_U4778, "AHMED", 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U4778, 1, 1, 2 );
        UNLOCK_RAGDOLL( l_U4778, 0 );
        break;
        case 17:
        sub_26786( 32, ref l_U4779, 260.67910000, -363.12370000, 161.01430000, 0.00000000 );
        SET_CHAR_VISIBLE( l_U4779, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U4779, 1 );
        SET_CHAR_PROOFS( l_U4779, 1, 1, 1, 1, 1 );
        break;
    }
    return;
}

void sub_15681(unknown uParam0)
{
    unknown uVar3;

    switch (uParam0)
    {
        case 0:
        CREATE_OBJECT_NO_OFFSET( l_U746[0]._fU72, l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, ref l_U746[0]._fU0, 1 );
        break;
        case 1:
        CREATE_OBJECT_NO_OFFSET( l_U746[1]._fU72, l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, ref l_U746[1]._fU0, 1 );
        break;
        case 2:
        CREATE_OBJECT_NO_OFFSET( l_U746[2]._fU72, l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, ref l_U746[2]._fU0, 1 );
        break;
        case 3:
        CREATE_OBJECT_NO_OFFSET( l_U746[3]._fU72, l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, ref l_U746[3]._fU0, 1 );
        break;
        case 4:
        CREATE_OBJECT_NO_OFFSET( l_U746[4]._fU72, l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, ref l_U746[4]._fU0, 1 );
        break;
        case 5:
        CREATE_OBJECT_NO_OFFSET( l_U746[5]._fU72, l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, ref l_U746[5]._fU0, 1 );
        break;
    }
    uVar3 = uParam0;
    g_U43011[uVar3] = l_U746[uVar3]._fU0;
    if (DOES_OBJECT_EXIST( l_U746[uParam0]._fU0 ))
    {
        SET_OBJECT_HEADING( l_U746[uParam0]._fU0, l_U1746 );
        FREEZE_OBJECT_POSITION( l_U746[uParam0]._fU0, 1 );
        SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U746[uParam0]._fU0, 1 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, l_U746[uParam0]._fU88._fU4, l_U746[uParam0]._fU88._fU12 );
        if (l_U746[uParam0]._fU84 > 1000)
        {
            SET_OBJECT_HEALTH( l_U746[uParam0]._fU0, l_U746[uParam0]._fU84 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "SETUP_BOAT_SECTION() object doesn't exist" );
    }
    return;
}

void sub_16624(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5, boolean bParam6, unknown uParam7)
{
    unknown Result;
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
    int I;

    array(ref Result._fU4, 4);
    ref Result;
    CREATE_CAR( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 + 100.00000000, ref Result._fU0, 1 );
    SET_CAR_HEADING( Result._fU0, uParam4 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( Result._fU0, uParam7 );
    SET_CAR_PROOFS( Result._fU0, 0, 0, 0, 1, 0 );
    for ( I = 0; I <= iParam5; I++ )
    {
        if (I == 0)
        {
            Result._fU4[0] = sub_16749( Result, 0 );
        }
        else if (I > 0)
        {
            Result._fU4[I] = sub_16749( Result, I );
        }
    }
    if (bParam6)
    {
        if (NOT (DOES_BLIP_EXIST( Result._fU24 )))
        {
            ADD_BLIP_FOR_CAR( Result._fU0, ref Result._fU24 );
        }
    }
    return Result;
}

void sub_16749(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, int iParam11)
{
    unknown Result;
    int iVar15;

    iVar15 = iParam11 - 1;
    if (NOT (IS_CAR_DEAD( uParam0._fU0 )))
    {
        switch (iParam11)
        {
            case 0:
            CREATE_CHAR_INSIDE_CAR( uParam0._fU0, 26, l_U3840, ref Result );
            break;
            case 1:
            CREATE_CHAR_AS_PASSENGER( uParam0._fU0, 26, l_U3841, iVar15, ref Result );
            break;
            case 2:
            case 3:
            CREATE_CHAR_AS_PASSENGER( uParam0._fU0, 26, l_U3841, iVar15, ref Result );
            GIVE_WEAPON_TO_CHAR( Result, 14, 3000, 1 );
            break;
        }
        SET_CHAR_DECISION_MAKER( Result, l_U4876 );
        SET_CHAR_RELATIONSHIP_GROUP( Result, 24 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
        SET_CHAR_RELATIONSHIP( Result, 1, 24 );
        SET_CHAR_AS_ENEMY( Result, 1 );
        SET_PED_DIES_WHEN_INJURED( Result, 1 );
    }
    else
    {
        SCRIPT_ASSERT( "CREATE_HELI_PILOT...Heli is dead!" );
    }
    return Result;
}

void sub_17202(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5, unknown uParam6, unknown uParam7)
{
    unknown Result;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    int I;

    array(ref Result._fU4, 3);
    array(ref Result._fU20, 3);
    array(ref Result._fU36, 3);
    array(ref Result._fU52, 4);
    array(ref Result._fU108, 8);
    ref Result;
    CREATE_CAR( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result._fU0, 1 );
    SET_CAR_HEADING( Result._fU0, uParam4 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( Result._fU0, uParam7 );
    SET_CAR_PROOFS( Result._fU0, 0, 0, 0, 1, 0 );
    CHANGE_CAR_COLOUR( Result._fU0, 7, 7 );
    SET_EXTRA_CAR_COLOURS( Result._fU0, 7, 0 );
    for ( I = 0; I <= iParam5; I++ )
    {
        if (I == 0)
        {
            Result._fU4[0] = sub_17385( ref Result, 0, uParam6 );
        }
        else if (I > 0)
        {
            Result._fU4[I] = sub_17385( ref Result, I, uParam6 );
        }
    }
    return Result;
}

void sub_17385(int iParam0, int iParam1, boolean bParam2)
{
    unknown Result;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    iVar6 = iParam1 - 1;
    if (NOT (IS_CAR_DEAD( iParam0->_fU0 )))
    {
        switch (iParam1)
        {
            case 0:
            CREATE_CHAR_INSIDE_CAR( iParam0->_fU0, 26, l_U3840, ref Result );
            break;
            case 1:
            CREATE_CHAR_AS_PASSENGER( iParam0->_fU0, 26, l_U3841, iVar6, ref Result );
            break;
            case 2:
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU0, 0.01500000, -2.29700000, 1.28600000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            CREATE_CHAR( 26, l_U3841, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref Result, 1 );
            ATTACH_PED_TO_CAR( Result, iParam0->_fU0, 0, 0.01500000, -2.29700000, 1.28600000, 180.00000000, 359.00000000, 1, 0 );
            GIVE_WEAPON_TO_CHAR( Result, 18, 200, 1 );
            break;
        }
        SET_CHAR_DECISION_MAKER( Result, l_U4876 );
        SET_CHAR_RELATIONSHIP_GROUP( Result, 24 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
        SET_CHAR_RELATIONSHIP( Result, 1, 24 );
        SET_CHAR_AS_ENEMY( Result, 1 );
        SET_PED_DIES_WHEN_INJURED( Result, 1 );
        if (bParam2)
        {
            ADD_BLIP_FOR_CHAR( Result, ref iParam0->_fU36[iParam1] );
            CHANGE_BLIP_DISPLAY( iParam0->_fU36[iParam1], 2 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "...Heli is dead!" );
    }
    return Result;
}

void sub_18122(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown Result;

    if (DOES_OBJECT_EXIST( l_U4713 ))
    {
        ;
    }
    Result = sub_18162( iParam0, uParam1, uParam2, uParam5, uParam6, uParam8 );
    if (iParam0 != l_U3845)
    {
        SET_CHAR_AS_ENEMY( Result, 1 );
    }
    FREEZE_CHAR_POSITION( Result, uParam7 );
    SET_CHAR_WILL_USE_COVER( Result, 0 );
    SET_SENSE_RANGE( Result, 250.00000000 );
    return Result;
}

void sub_18162(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, unknown uParam7)
{
    unknown Result;

    CREATE_CHAR( 26, iParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_CHAR_DECISION_MAKER( Result, l_U4876 );
    if (iParam6 != 0)
    {
        GIVE_WEAPON_TO_CHAR( Result, iParam6, 3000, 1 );
    }
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    SET_CHAR_RELATIONSHIP( Result, 1, 24 );
    SET_CHAR_RELATIONSHIP( Result, 1, 25 );
    if (iParam0 != l_U3845)
    {
        SET_CHAR_AS_ENEMY( Result, 1 );
    }
    SET_PED_DIES_WHEN_INJURED( Result, 1 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( Result, uParam7 );
    SET_PED_DONT_DO_EVASIVE_DIVES( Result, 1 );
    return Result;
}

void sub_18749(boolean bParam0)
{
    int J;
    int I;

    for ( J = 0; J < l_U3642; J++ )
    {
        for ( I = 0; I < l_U3642._fU4._fU4; I++ )
        {
            if (bParam0)
            {
                if (NOT (IS_CAR_DEAD( l_U4972 )))
                {
                    if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U3642[J]._fU4[I] )))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U3642[J]._fU36[I] )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U3642[J]._fU4[I], ref l_U3642[J]._fU36[I] );
                            }
                        }
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U3642[J]._fU36[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3642[J]._fU36[I] );
            }
        }
    }
    return;
}

void sub_23647()
{
    l_U1765[1]._fU0 = {-2000.00000000, 28.80000000, -0.50000000};
    l_U1765[1]._fU12 = {2000.00000000, 2000.00000000, 2000.00000000};
    l_U1765[1]._fU24[0] = {-2000.00000000, 29.00000000, 2.00000000};
    l_U1765[1]._fU52[0] = {2000.00000000, 2000.00000000, 2000.00000000};
    l_U1765[1]._fU24[1] = {l_U1765[1]._fU24[0]};
    l_U1765[1]._fU52[1] = {l_U1765[1]._fU52[0]};
    l_U1765[1]._fU80[0]._fU0 = {-4.05000000, 38.62700000, 1.02840000};
    l_U1765[1]._fU80[0]._fU12 = {l_U3874[9]};
    l_U1765[1]._fU80[1]._fU0 = {2.21900000, 40.63900000, 0.99870000};
    l_U1765[1]._fU80[1]._fU12 = {l_U4686};
    l_U1765[1]._fU80[2]._fU0 = {0.17200000, 42.94600000, 1.03020000};
    l_U1765[1]._fU80[2]._fU12 = {l_U3874[8]};
    l_U1765[1]._fU80[3]._fU0 = {4.71590000, 35.45720000, 1.82750000};
    l_U1765[1]._fU80[3]._fU12 = {l_U3874[4]};
    l_U1765[1]._fU80[4]._fU0 = {-3.67830000, 37.51610000, 1.71750000};
    l_U1765[1]._fU80[4]._fU12 = {l_U3874[5]};
    l_U1765[1]._fU724 = 4;
    l_U1765[2]._fU0 = {3.80000000, -2000.00000000, -0.50000000};
    l_U1765[2]._fU12 = {2000.00000000, 2000.00000000, 2000.00000000};
    l_U1765[2]._fU24[0] = {6.30000000, -2000.00000000, 2.00000000};
    l_U1765[2]._fU52[0] = {2000.00000000, 2000.00000000, 2000.00000000};
    l_U1765[2]._fU24[1] = {l_U1765[2]._fU24[0]};
    l_U1765[2]._fU52[1] = {l_U1765[2]._fU52[0]};
    l_U1765[2]._fU80[0]._fU0 = {5.49880000, 24.16930000, 1.04710000};
    l_U1765[2]._fU80[0]._fU12 = {l_U4686};
    l_U1765[2]._fU80[1]._fU0 = {5.95510000, 9.62540000, 1.04860000};
    l_U1765[2]._fU80[1]._fU12 = {l_U3874[3]};
    l_U1765[2]._fU80[2]._fU0 = {5.45550000, -5.37300000, 1.04860000};
    l_U1765[2]._fU80[2]._fU12 = {l_U4686};
    l_U1765[2]._fU80[3]._fU12 = {l_U4686};
    l_U1765[2]._fU80[4]._fU12 = {l_U4686};
    l_U1765[2]._fU724 = 2;
    l_U1765[3]._fU0 = {-2000.00000000, -2000.00000000, -0.50000000};
    l_U1765[3]._fU12 = {-4.30000000, 2000.00000000, 2000.00000000};
    l_U1765[3]._fU24[0] = {-2000.00000000, -2000.00000000, 2.00000000};
    l_U1765[3]._fU52[0] = {-7.50000000, 2000.00000000, 2000.00000000};
    l_U1765[3]._fU24[1] = {l_U1765[3]._fU24[0]};
    l_U1765[3]._fU52[1] = {l_U1765[3]._fU52[0]};
    l_U1765[3]._fU80[0]._fU0 = {-5.72420000, 20.03450000, 1.04680000};
    l_U1765[3]._fU80[0]._fU12 = {l_U3874[6]};
    l_U1765[3]._fU80[1]._fU0 = {-6.27520000, 9.25150000, 1.04870000};
    l_U1765[3]._fU80[1]._fU12 = {l_U4686};
    l_U1765[3]._fU80[2]._fU0 = {-5.85620000, -4.41880000, 1.04860000};
    l_U1765[3]._fU80[2]._fU12 = {l_U4686};
    l_U1765[3]._fU80[3]._fU12 = {l_U4686};
    l_U1765[3]._fU80[4]._fU12 = {l_U4686};
    l_U1765[3]._fU724 = 2;
    l_U1765[4]._fU0 = {-2000.00000000, -2000.00000000, -0.50000000};
    l_U1765[4]._fU12 = {2000.00000000, -9.40000000, 2000.00000000};
    l_U1765[4]._fU24[0] = {-2000.00000000, -2000.00000000, 2.00000000};
    l_U1765[4]._fU52[0] = {2000.00000000, -9.50000000, 2000.00000000};
    l_U1765[4]._fU24[1] = {l_U1765[4]._fU24[0]};
    l_U1765[4]._fU52[1] = {l_U1765[4]._fU52[0]};
    l_U1765[4]._fU80[0]._fU0 = {-5.19500000, -12.09310000, 1.04860000};
    l_U1765[4]._fU80[1]._fU0 = {-2.59810000, -16.86190000, 1.81540000};
    l_U1765[4]._fU80[2]._fU0 = {2.48300000, -19.65500000, 1.81000000};
    l_U1765[4]._fU80[3]._fU0 = {6.07770000, -12.86830000, 1.04860000};
    l_U1765[4]._fU80[4]._fU0 = {-2.61800000, -26.17100000, 1.80600000};
    l_U1765[4]._fU80[0]._fU12 = {l_U3874[7]};
    l_U1765[4]._fU80[1]._fU12 = {l_U4686};
    l_U1765[4]._fU80[2]._fU12 = {l_U3874[11]};
    l_U1765[4]._fU80[3]._fU12 = {l_U3874[2]};
    l_U1765[4]._fU80[4]._fU12 = {l_U3874[10]};
    l_U1765[4]._fU724 = 4;
    l_U1765[5]._fU24[0] = {l_U1765[1]._fU24[0]};
    l_U1765[5]._fU52[0] = {l_U1765[1]._fU52[0]};
    l_U1765[5]._fU24[1] = {l_U1765[2]._fU24[0]};
    l_U1765[5]._fU52[1] = {l_U1765[2]._fU52[0]};
    l_U1765[6]._fU24[0] = {l_U1765[1]._fU24[0]};
    l_U1765[6]._fU52[0] = {l_U1765[1]._fU52[0]};
    l_U1765[6]._fU24[1] = {l_U1765[3]._fU24[0]};
    l_U1765[6]._fU52[1] = {l_U1765[3]._fU52[0]};
    l_U1765[7]._fU24[0] = {l_U1765[4]._fU24[0]};
    l_U1765[7]._fU52[0] = {l_U1765[4]._fU52[0]};
    l_U1765[7]._fU24[1] = {l_U1765[2]._fU24[0]};
    l_U1765[7]._fU52[1] = {l_U1765[2]._fU52[0]};
    l_U1765[8]._fU24[0] = {l_U1765[4]._fU24[0]};
    l_U1765[8]._fU52[0] = {l_U1765[4]._fU52[0]};
    l_U1765[8]._fU24[1] = {l_U1765[3]._fU24[0]};
    l_U1765[8]._fU52[1] = {l_U1765[3]._fU52[0]};
    return;
}

void sub_26245(unknown uParam0)
{
    REQUEST_MODEL( sub_26256( uParam0 ) );
    return;
}

int sub_26256(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_2288( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_26708(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_26256( uParam0 ) );
}

void sub_26786(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_26797( uParam0 ), sub_26256( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_26843( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_26877( uParam0, (uParam1^) );
    return;
}

int sub_26797(unknown uParam0)
{
    return 25;
}

void sub_26843(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_26877(unknown uParam0, unknown uParam1)
{
    sub_26889( ref uParam1, uParam0 );
    return;
}

void sub_26889(unknown uParam0, int iParam1)
{
    sub_26900( uParam0 );
    if (iParam1 == 37)
    {
        sub_27002( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_27586( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_26900(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_27002(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
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
        GET_CHAR_PROP_INDEX( (uParam0^), 1, ref iVar13 );
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

void sub_27586(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_27002( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_27002( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_27002( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_27002( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_27002( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_28787()
{
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U4870 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U4870, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U4870, 1 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U4871 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U4871, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U4871, 15 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U4870, 1 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U4873 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U4873, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U4873, 90 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U4874 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U4874, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U4874, 15 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U4876 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U4877 );
    return;
}

void sub_29310(unknown uParam0)
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADING_IN()) AND (NOT IS_SCREEN_FADED_IN()))
    {
        DO_SCREEN_FADE_IN( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    return;
}

void sub_30294(int iParam0)
{
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    iParam0->_fU20 = 0;
    if (NOT (IS_CHAR_DEAD( iParam0->_fU0 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
        REMOVE_CHAR_DEFENSIVE_AREA( iParam0->_fU0 );
    }
    return;
}

void sub_30956()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_31262(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2668 = (uParam0^);
        g_U2683 = {uParam1};
        g_U2681 = uParam4;
    }
    return;
}

void sub_31348()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int I;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    string sVar12;
    unknown uVar13;

    switch (l_U5343)
    {
        case 0:
        if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3454(), ref uVar11 );
            GET_CAR_MODEL( uVar11, ref uVar10 );
            if (IS_THIS_MODEL_A_BOAT( uVar10 ))
            {
                SET_FOLLOW_VEHICLE_PITCH_LIMIT_UP( 10.00000000 );
            }
        }
        if (NOT (HAS_SCRIPT_LOADED( "Yusuf1Cleanup" )))
        {
            REQUEST_SCRIPT( "Yusuf1Cleanup" );
        }
        if (NOT l_U5356)
        {
            if (NOT (IS_CAR_DEAD( l_U4972 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3454(), l_U4972, 50.00000000, 50.00000000, 50.00000000, 0 ))
                {
                    FREEZE_CAR_POSITION( l_U4972, 0 );
                    l_U5356 = 1;
                }
            }
        }
        if (NOT l_U5351)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1156.61400000, -989.37900000, 11.32630000, 300.00000000, 300.00000000, 300.00000000, 0 ))
            {
                if (PRELOAD_STREAM( "Y1_STEAL_CHOPPER_BOAT_MUSIC" ))
                {
                    PLAY_STREAM_FROM_OBJECT( l_U4714 );
                    l_U5351 = 1;
                }
            }
        }
        if (NOT l_U5360)
        {
            if (NOT l_U5357)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_14417(), 0 )))
                {
                    if (l_U5358)
                    {
                        l_U5358 = 0;
                    }
                    if (NOT l_U5350)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U4983 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U5095._fU0, l_U5095._fU4, l_U5095._fU8, ref l_U4983 );
                            sub_31262( ref l_U4983, -412.22310000, -440.02360000, 3.80290000, 226.66460000 );
                            SET_ROUTE( l_U4983, 1 );
                        }
                        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), l_U5095._fU0, l_U5095._fU4, 6.17000000, 2.50000000, 2.50000000, 2.50000000, 1 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -380.91380000, -531.38390000, -0.53980000, 48.00000000, 47.00000000, 10.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -396.15550000, -480.42750000, 3.34680000, 24.00000000, 22.00000000, 10.00000000, 0 ))))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), l_U5095._fU0, l_U5095._fU4, 6.17000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
                            {
                                sub_32065();
                            }
                            if (DOES_BLIP_EXIST( l_U4983 ))
                            {
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4983 );
                            }
                            ADD_BLIP_FOR_COORD( l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, ref l_U4981 );
                            SET_BLIP_AS_FRIENDLY( l_U4981, 1 );
                            PRINT_NOW( "YS1_YAC", 7500, 1 );
                            l_U5350 = 1;
                            g_U43104[15] = 1;
                        }
                        if (NOT l_U5322)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1133.33700000, -987.10200000, 6.51387900, 750.00000000, 750.00000000, 750.00000000, 0 ))
                            {
                                l_U5322 = 1;
                            }
                        }
                        if (NOT l_U5350)
                        {
                            if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3454(), ref uVar11 );
                                GET_CAR_MODEL( uVar11, ref uVar10 );
                                if (IS_THIS_MODEL_A_BOAT( uVar10 ))
                                {
                                    l_U5340 = 1;
                                    if (NOT (IS_CAR_DEAD( l_U4972 )))
                                    {
                                        if (DOES_BLIP_EXIST( l_U4983 ))
                                        {
                                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4983 );
                                        }
                                        ADD_BLIP_FOR_COORD( l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, ref l_U4981 );
                                        SET_BLIP_AS_FRIENDLY( l_U4981, 1 );
                                        PRINT_NOW( "YS1_YAC", 7500, 1 );
                                        l_U5350 = 1;
                                        l_U4966 = uVar11;
                                        g_U43104[15] = 1;
                                    }
                                }
                            }
                        }
                    }
                    else if (NOT l_U5340)
                    {
                        l_U5340 = 1;
                    }
                    if (NOT l_U5322)
                    {
                        l_U5322 = 1;
                    }
                    if (NOT (IS_CAR_DEAD( l_U4972 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U4981 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, ref l_U4981 );
                            SET_BLIP_AS_FRIENDLY( l_U4981, 1 );
                            g_U43104[15] = 1;
                        }
                    }
                }
                else if (NOT l_U5358)
                {
                    PRINT_NOW( "YS1_WTD", 7500, 1 );
                    l_U5358 = 1;
                }
                if (DOES_BLIP_EXIST( l_U4981 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4981 );
                }
                if (DOES_BLIP_EXIST( l_U4983 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4983 );
                    SET_ROUTE( l_U4983, 0 );
                }
            }
        }
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            for ( I = 0; I < l_U3874; I++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U3874[I]._fU0 )))
                {
                    if (NOT l_U3874[I]._fU4)
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), l_U3874[I]._fU0, 75.00000000, 75.00000000, 75.00000000, 0 )))
                        {
                            ;
                        }
                        else
                        {
                            FREEZE_CHAR_POSITION( l_U3874[I]._fU0, 0 );
                        }
                    }
                }
            }
            for ( I = 0; I < l_U4280; I++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U4280[I]._fU0 )))
                {
                    if (NOT l_U3874[I]._fU4)
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), l_U4280[I]._fU0, 275.00000000, 275.00000000, 275.00000000, 0 )))
                        {
                            SET_CHAR_COORDINATES( l_U4280[I]._fU0, l_U5064[I]._fU0, l_U5064[I]._fU4, l_U5064[I]._fU8 - 1.50000000 );
                        }
                        else
                        {
                            FREEZE_CHAR_POSITION( l_U4280[I]._fU0, 0 );
                        }
                    }
                }
            }
            if (NOT l_U5357)
            {
                if (NOT l_U4774)
                {
                    if (sub_33251( 1 ))
                    {
                        g_U43104[15] = 2;
                        l_U5340 = 0;
                        if (DOES_BLIP_EXIST( l_U4981 ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4981 );
                        }
                        if (DOES_BLIP_EXIST( l_U4983 ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4983 );
                        }
                        SET_PLAYER_CONTROL( sub_14417(), 0 );
                        if (NOT IS_SCREEN_FADED_OUT())
                        {
                            DO_SCREEN_FADE_OUT( 500 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                        }
                        CLEAR_WANTED_LEVEL( sub_14417() );
                        for ( I = 0; I < l_U5328; I++ )
                        {
                            if (DOES_VEHICLE_EXIST( l_U5328[I] ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U5328[I] )))
                                {
                                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U5328[I] )))
                                    {
                                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U5328[I] );
                                        if (NOT (IS_CHAR_DEAD( l_U5334[I] )))
                                        {
                                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U5334[I] );
                                        }
                                    }
                                }
                            }
                        }
                        GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar11 );
                        if (NOT (IS_CAR_DEAD( uVar11 )))
                        {
                            GET_CAR_COORDINATES( uVar11, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            sub_33408( l_U4715, uVar2, ref uVar5 );
                            if ((uVar5._fU4 < 36.70000000) AND ((uVar5._fU4 > -29.70000000) AND ((uVar5._fU0 < 7.40000000) AND (uVar5._fU0 >= -7.40000000))))
                            {
                                if (NOT (IS_CHAR_IN_CAR( sub_3454(), uVar11 )))
                                {
                                    DELETE_CAR( ref uVar11 );
                                }
                            }
                        }
                        sub_34230();
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref I );
                        switch (I)
                        {
                            case 0:
                            sVar12 = "Y1_AZA";
                            break;
                            case 1:
                            sVar12 = "Y1_AZA";
                            break;
                            case 2:
                            sVar12 = "Y1_AZA";
                            break;
                            default:
                            SCRIPT_ASSERT( "Didn't get mocap string!" );
                            break;
                        }
                        if (DOES_VEHICLE_EXIST( l_U4972 ))
                        {
                            DELETE_CAR( ref l_U4972 );
                        }
                        SWITCH_ROADS_OFF( -1296.69000000, -1215.27100000, -98.50000000, -972.08580000, -812.23050000, 100.00000000 );
                        sub_14667( 6 );
                        START_CUTSCENE_NOW( sVar12 );
                        while (NOT HAS_CUTSCENE_LOADED())
                        {
                            WAIT( 0 );
                        }
                        while (NOT HAS_CUTSCENE_FINISHED())
                        {
                            WAIT( 0 );
                        }
                        CLEAR_NAMED_CUTSCENE( sVar12 );
                        if (DOES_VEHICLE_EXIST( l_U4972 ))
                        {
                            DELETE_CAR( ref l_U4972 );
                        }
                        sub_14667( 5 );
                        REQUEST_MODEL( -2075782048 );
                        REQUEST_MODEL( 1239854102 );
                        REQUEST_MODEL( 1930762713 );
                        REQUEST_MODEL( 1233545547 );
                        REQUEST_MODEL( 1005833766 );
                        REQUEST_MODEL( 67157199 );
                        REQUEST_MODEL( 518033353 );
                        REQUEST_MODEL( -1366166054 );
                        REQUEST_MODEL( 1595218282 );
                        REQUEST_MODEL( 2120126803 );
                        REQUEST_MODEL( 1789985121 );
                        REQUEST_MODEL( l_U3841 );
                        REQUEST_MODEL( l_U3844 );
                        REQUEST_MODEL( l_U3845 );
                        REQUEST_MODEL( -1085774992 );
                        while ((NOT (HAS_MODEL_LOADED( l_U3845 ))) || ((NOT (HAS_MODEL_LOADED( l_U3844 ))) || ((NOT (HAS_MODEL_LOADED( l_U3841 ))) || ((NOT (HAS_MODEL_LOADED( -1085774992 ))) || ((NOT (HAS_MODEL_LOADED( 1789985121 ))) || ((NOT (HAS_MODEL_LOADED( 2120126803 ))) || ((NOT (HAS_MODEL_LOADED( 1595218282 ))) || ((NOT (HAS_MODEL_LOADED( -1366166054 ))) || ((NOT (HAS_MODEL_LOADED( 518033353 ))) || ((NOT (HAS_MODEL_LOADED( 67157199 ))) || ((NOT (HAS_MODEL_LOADED( 1005833766 ))) || ((NOT (HAS_MODEL_LOADED( 1233545547 ))) || ((NOT (HAS_MODEL_LOADED( 1930762713 ))) || ((NOT (HAS_MODEL_LOADED( 1239854102 ))) || (NOT (HAS_MODEL_LOADED( -2075782048 )))))))))))))))))
                        {
                            WAIT( 0 );
                        }
                        sub_14667( 14 );
                        for ( I = 0; I < l_U4280; I++ )
                        {
                            if (NOT (IS_CHAR_DEAD( l_U4280[I]._fU0 )))
                            {
                                SET_CHAR_COORDINATES( l_U4280[I]._fU0, l_U5064[I]._fU0, l_U5064[I]._fU4, l_U5064[I]._fU8 - 1.50000000 );
                                FREEZE_CHAR_POSITION( l_U4280[I]._fU0, 0 );
                            }
                        }
                        if ((NOT (DOES_BLIP_EXIST( l_U4982 ))) || (l_U5360))
                        {
                            if (NOT (IS_CAR_DEAD( l_U4972 )))
                            {
                                ADD_BLIP_FOR_CAR( l_U4972, ref l_U4982 );
                                sub_35928( l_U4982 );
                                SET_BLIP_AS_FRIENDLY( l_U4982, 1 );
                                PRINT_NOW( "YS1_STE", 7500, 1 );
                            }
                        }
                        if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3454(), ref uVar11 );
                            if (NOT (IS_CAR_DEAD( uVar11 )))
                            {
                                FREEZE_CAR_POSITION( uVar11, 0 );
                            }
                        }
                        SET_PLAYER_CONTROL( sub_14417(), 1 );
                        sub_29310( 500 );
                        l_U5308 = 1;
                        l_U5357 = 1;
                    }
                }
                else
                {
                    l_U5357 = 1;
                    sub_34230();
                    sub_36109();
                }
            }
            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3454(), l_U4972 )))
            {
                if (l_U5326 == 0)
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( sub_3454(), -1118.32100000, -985.25890000, 7.94230000, 11.00000000, 7.00000000, 2.00000000, 0 ))
                    {
                        GET_GAME_TIMER( ref l_U5326 );
                    }
                }
                if (sub_36569())
                {
                    if (NOT l_U5347)
                    {
                        if (((sub_36871( l_U5325, 1500 )) AND (l_U5325 != 0)) || (l_U5325 == 0))
                        {
                            if (NOT l_U5200)
                            {
                                PLAY_SOUND_FROM_POSITION( l_U4881, "Y1_STEAL_CHOPPER_SHIP_ALARM", -1149.12200000, -989.36460000, 13.71939000 );
                                l_U5200 = 1;
                            }
                            if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_3454(), -1118.32100000, -985.25890000, 7.94230000, 11.00000000, 7.00000000, 2.00000000, 0 )))
                            {
                                if (NOT l_U4774)
                                {
                                    for ( I = 0; I < l_U3874; I++ )
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                                        {
                                            SET_CHAR_DECISION_MAKER( l_U3874[I]._fU0, l_U4877 );
                                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3874[I]._fU0, 0 );
                                            if ((I != 3) AND (I != 2))
                                            {
                                                SET_COMBAT_DECISION_MAKER( l_U3874[I]._fU0, l_U4874 );
                                            }
                                            else
                                            {
                                                SET_COMBAT_DECISION_MAKER( l_U3874[I]._fU0, l_U4871 );
                                                if (I == 2)
                                                {
                                                    sub_38003( ref l_U3874[2], 4 );
                                                }
                                                else if (I == 3)
                                                {
                                                    sub_38003( ref l_U3874[3], 7 );
                                                }
                                            }
                                            SET_CHAR_RELATIONSHIP( l_U3874[I]._fU0, 1, 25 );
                                            SET_CHAR_RELATIONSHIP( l_U3874[I]._fU0, 5, 0 );
                                            OPEN_SEQUENCE_TASK( ref uVar9 );
                                            TASK_COMBAT( 0, sub_3454() );
                                            CLOSE_SEQUENCE_TASK( uVar9 );
                                            if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                                            {
                                                TASK_PERFORM_SEQUENCE( l_U3874[I]._fU0, uVar9 );
                                            }
                                            CLEAR_SEQUENCE_TASK( uVar9 );
                                        }
                                    }
                                }
                                else
                                {
                                    for ( I = 0; I < l_U3874; I++ )
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                                        {
                                            FREEZE_CHAR_POSITION( l_U3874[I]._fU0, 0 );
                                        }
                                        l_U3874[I]._fU4 = 1;
                                        l_U5182 = 1;
                                    }
                                }
                            }
                            l_U5352 = 1;
                            l_U5347 = 1;
                            l_U5346 = 1;
                            l_U5182 = 1;
                        }
                    }
                    else if (NOT l_U5348)
                    {
                        if (sub_38888())
                        {
                            I = sub_39117( 1148846080, 1, 0 );
                            if (I > -1)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                                {
                                    sub_5928( 1, l_U3874[I]._fU0, "ARMS_DEALER", 0 );
                                    sub_39605( "E2Y1_ASPOT", ref l_U4762, 6, 1 );
                                    GET_GAME_TIMER( ref l_U5353 );
                                    l_U5348 = 1;
                                }
                            }
                        }
                    }
                    else if (sub_38888())
                    {
                        if ((sub_36871( l_U5354, 9000 )) || (l_U5354 == 0))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3454() )))
                            {
                                if (IS_CHAR_SHOOTING( sub_3454() ))
                                {
                                    I = sub_39117( 1148846080, 1, 0 );
                                    if (I > -1)
                                    {
                                        sub_39605( "E2Y1_LATCK", ref l_U4762, 6, 1 );
                                        GET_GAME_TIMER( ref l_U5354 );
                                    }
                                }
                            }
                        }
                        if (sub_36871( l_U5353, 5000 ))
                        {
                            if (NOT l_U5359)
                            {
                                I = sub_39117( 1148846080, 1, 0 );
                                if (I > -1)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
                                    {
                                        if (NOT l_U5359)
                                        {
                                            sub_5928( 1, l_U4280[I]._fU0, "ARMS_DEALER", 0 );
                                            sub_39605( "E2Y1_AATCK", ref l_U4762, 6, 1 );
                                            GET_GAME_TIMER( ref l_U5353 );
                                            l_U5359 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    l_U5359 = 1;
                                }
                            }
                            else
                            {
                                I = sub_40894( 1148846080 );
                                if (I > -1)
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                                    {
                                        uVar13 = sub_41064();
                                        SAY_AMBIENT_SPEECH( l_U3874[I]._fU0, uVar13, 1, 1, 2 );
                                        GET_GAME_TIMER( ref l_U5353 );
                                        l_U5359 = 0;
                                    }
                                }
                                else
                                {
                                    l_U5359 = 0;
                                }
                            }
                        }
                    };;;
                }
                if (l_U5350)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U4982 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U4972, ref l_U4982 );
                        SET_BLIP_AS_FRIENDLY( l_U4982, 1 );
                        sub_35928( l_U4982 );
                        if (NOT l_U5349)
                        {
                            l_U5349 = 1;
                        }
                    }
                }
                for ( I = 0; I <= 2; I++ )
                {
                    if (NOT l_U5098[I])
                    {
                        if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U4280[I]._fU0, sub_3454(), 0 ))
                            {
                                if (NOT (IS_PED_RAGDOLL( l_U4280[I]._fU0 )))
                                {
                                    OPEN_SEQUENCE_TASK( ref uVar9 );
                                    TASK_COWER( 0 );
                                    CLOSE_SEQUENCE_TASK( uVar9 );
                                    TASK_PERFORM_SEQUENCE( l_U4280[I]._fU0, uVar9 );
                                    CLEAR_SEQUENCE_TASK( uVar9 );
                                    l_U5098[I] = 1;
                                    GET_GAME_TIMER( ref l_U5109[I] );
                                }
                            }
                        }
                    }
                    else if (sub_36871( l_U5109[I], 5000 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
                        {
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U4280[I]._fU0 );
                            l_U5098[I] = 0;
                        }
                    }
                }
                I = sub_39117( 1000.00000000, 0, 1 );
                if (I > -1)
                {
                    if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), l_U4280[I]._fU0, 5.00000000, 5.00000000, 5.00000000, 0 ))
                        {
                            if ((l_U5355 == 0) || (sub_36871( l_U5355, 10000 )))
                            {
                                PANIC_SCREAM( l_U4280[I]._fU0 );
                                GET_GAME_TIMER( ref l_U5355 );
                            }
                        }
                    }
                }
            }
            else if (NOT l_U5150)
            {
                l_U5150 = 1;
            }
            if (DOES_BLIP_EXIST( l_U3642[0]._fU36[0] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3642[0]._fU36[0] );
            }
            if (NOT l_U4781)
            {
                GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U4780 );
                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 3 );
                l_U4781 = 1;
            }
            if (DOES_BLIP_EXIST( l_U4982 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4982 );
            }
            if (DOES_BLIP_EXIST( l_U4980 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4980 );
            }
            if (NOT l_U5345)
            {
                if (g_U43104[15] < 2)
                {
                    g_U43104[15] = 2;
                }
                FREEZE_CAR_POSITION( l_U4972, 0 );
                SET_CAR_PROOFS( l_U4972, 1, 1, 1, 1, 1 );
                GET_GAME_TIMER( ref l_U5344 );
                SWITCH_ROADS_OFF( -2000.64000000, 379.03100000, -20.02110000, -1611.84800000, 1529.65100000, 12.27750000 );
                SET_CAR_GENERATORS_ACTIVE_IN_AREA( -2000.64000000, 379.03100000, -20.02110000, -1611.84800000, 1529.65100000, 12.27750000, 0 );
                SWITCH_ROADS_OFF( -2189.56700000, -846.23100000, -20.00000000, -1192.86300000, -773.65900000, 31.56590000 );
                SET_CAR_GENERATORS_ACTIVE_IN_AREA( -2189.56700000, -846.23100000, -20.00000000, -1192.86300000, -773.65900000, 31.56590000, 0 );
                SWITCH_ROADS_OFF( -2308.64700000, -775.10540000, -20.00000000, -2077.36400000, 477.14550000, 3.52680000 );
                SET_CAR_GENERATORS_ACTIVE_IN_AREA( -2308.64700000, -775.10540000, -20.00000000, -2077.36400000, 477.14550000, 3.52680000, 0 );
                if (sub_38888())
                {
                    I = sub_39117( 100.00000000, 1, 0 );
                    if (I > -1)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                        {
                            sub_5928( 1, l_U3874[I]._fU0, "ARMS_DEALER", 0 );
                            sub_39605( "E2Y1_ACHOP", ref l_U4762, 6, 1 );
                            if (NOT l_U5200)
                            {
                                PLAY_SOUND_FROM_POSITION( l_U4881, "Y1_STEAL_CHOPPER_SHIP_ALARM", -1149.12200000, -989.36460000, 13.71939000 );
                                l_U5200 = 1;
                            }
                            l_U5179 = 1;
                        }
                    }
                    else
                    {
                        l_U5179 = 1;
                    }
                }
                l_U5345 = 1;
                l_U5148 = 1;
            }
            else if ((l_U5347) || (NOT l_U3874[0]._fU4))
            {
                if (NOT l_U5347)
                {
                    if (NOT (IS_CHAR_INJURED( l_U3874[3]._fU0 )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar9 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1145.60200000, -993.58650000, 9.21610000, 3, -2, 0.50000000 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -1132.62500000, -991.66110000, 9.21610000, 3, -2 );
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, -1130.54800000, -991.32900000, 9.21610000, 3, 0.50000000, 0.50000000, sub_3454(), 0.00000000, 0.00000000, 0.00000000, 1 );
                        CLOSE_SEQUENCE_TASK( uVar9 );
                        TASK_PERFORM_SEQUENCE( l_U3874[3]._fU0, uVar9 );
                        CLEAR_SEQUENCE_TASK( uVar9 );
                    }
                }
            }
            else
            {
                l_U5352 = 1;
                sub_42765( ref l_U3874 );
            }
            if (sub_36871( l_U5344, 2000 ))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_43888( l_U4972 );
                    l_U4868 = 1;
                    sub_44057();
                    l_U4869 = 1;
                    l_U5343 = 1;
                    l_U745 = 4;
                }
            }
            else if (l_U5179)
            {
                if (NOT l_U5194)
                {
                    if (sub_38888())
                    {
                        sub_39605( "E2Y1_LCHOP", ref l_U4762, 6, 1 );
                        l_U5194 = 1;
                    }
                }
            };;;;;
        }
        break;
        default:
    }
    if (l_U5182)
    {
        sub_42765( ref l_U3874 );
    }
    if (l_U5346)
    {
        sub_42765( ref l_U4280 );
    }
    if (l_U5340)
    {
        sub_44745();
    }
    if (l_U5322)
    {
        sub_45512();
    }
    if (l_U5352)
    {
        sub_49731();
    }
    if (l_U5342)
    {
        if (HAS_MODEL_LOADED( l_U3841 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, 250.00000000, 250.00000000, 250.00000000, 0 ))
            {
                sub_14667( 15 );
                l_U5342 = 0;
                for ( I = 0; I < l_U3874; I++ )
                {
                    if (NOT (IS_CHAR_DEAD( l_U3874[I]._fU0 )))
                    {
                        FREEZE_CHAR_POSITION( l_U3874[I]._fU0, 0 );
                    }
                }
            }
        }
        else
        {
            REQUEST_MODEL( l_U3841 );
        }
    }
    if (l_U5308)
    {
        if (NOT l_U5150)
        {
            if (NOT (IS_CAR_DEAD( l_U4972 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1110.85300000, -983.73530000, 7.72440000, 1000.00000000, 1000.00000000, 1000.00000000, 0 )))
                {
                    if (NOT (IS_CAR_ON_SCREEN( l_U4972 )))
                    {
                        l_U5146 = 1;
                        sub_55372();
                    }
                }
            }
        }
    }
    if (NOT l_U5361)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1142.77700000, -988.49450000, 1.05540000, 750.00000000, 750.00000000, 750.00000000, 0 ))
        {
            if ((HAS_MODEL_LOADED( l_U3844 )) AND (HAS_MODEL_LOADED( l_U3845 )))
            {
                sub_14667( 13 );
                l_U5361 = 1;
            }
            else
            {
                REQUEST_MODEL( l_U3845 );
                REQUEST_MODEL( l_U3844 );
            }
        }
    }
    return;
}

void sub_32065()
{
    float fVar2;
    unknown uVar3;

    if ((IS_CHAR_ON_ANY_BIKE( sub_3454() )) || (IS_CHAR_IN_ANY_CAR( sub_3454() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3454(), ref uVar3 );
        if (IS_VEH_DRIVEABLE( uVar3 ))
        {
            SET_PLAYER_CONTROL( sub_14417(), 0 );
            GET_CAR_SPEED( uVar3, ref fVar2 );
            while (fVar2 > 0.20000000)
            {
                WAIT( 0 );
                if (NOT (IS_CAR_DEAD( uVar3 )))
                {
                    GET_CAR_SPEED( uVar3, ref fVar2 );
                }
            }
            SET_PLAYER_CONTROL( sub_14417(), 1 );
        }
    }
    return;
}

int sub_33251(boolean bParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (LOCATE_CHAR_ON_FOOT_3D( sub_3454(), -1135.99700000, -986.67060000, 12.90850000, 38.00000000, 17.00000000, 23.00000000, 0 ))
    {
        if (NOT (IS_CHAR_IN_WATER( sub_3454() )))
        {
            if (NOT (IS_PED_CLIMBING( sub_3454() )))
            {
                GET_CHAR_COORDINATES( sub_3454(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                if (uVar4._fU8 > 2.20000000)
                {
                    if (DOES_OBJECT_EXIST( l_U4715 ))
                    {
                        sub_33408( l_U4715, uVar4, ref uVar7 );
                        if ((uVar7._fU4 < 36.70000000) AND ((uVar7._fU4 > -29.70000000) AND ((uVar7._fU0 < 7.40000000) AND (uVar7._fU0 >= -7.40000000))))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    else if (bParam0)
    {
        if (LOCATE_CHAR_IN_CAR_3D( sub_3454(), -1135.99700000, -986.67060000, 12.90850000, 100.00000000, 100.00000000, 1000.00000000, 0 ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3454(), ref uVar3 );
                GET_CAR_MODEL( uVar3, ref uVar10 );
                if (IS_THIS_MODEL_A_HELI( uVar10 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar3 )))
                    {
                        if (NOT l_U4774)
                        {
                            FREEZE_CAR_POSITION( uVar3, 1 );
                        }
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_33408(unknown uParam0, vector vParam1, int iParam4)
{
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref vVar7.x, ref vVar7.y, ref vVar7.z );
        GET_OBJECT_HEADING( uParam0, ref uVar13 );
        uVar10 = {vParam1 - vVar7};
        iParam4->_fU0 = (uVar10._fU0 * (COS( uVar13 ))) + (uVar10._fU4 * (SIN( uVar13 )));
        iParam4->_fU4 = (uVar10._fU4 * (COS( uVar13 ))) - (uVar10._fU0 * (SIN( uVar13 )));
        iParam4->_fU8 = uVar10._fU8;
    }
    return;
}

void sub_34230()
{
    int I;

    for ( I = 0; I < l_U3874; I++ )
    {
        if (DOES_CHAR_EXIST( l_U3874[I]._fU0 ))
        {
            DELETE_CHAR( ref l_U3874[I]._fU0 );
        }
    }
    for ( I = 0; I < l_U4280; I++ )
    {
        if (DOES_CHAR_EXIST( l_U4280[I]._fU0 ))
        {
            DELETE_CHAR( ref l_U4280[I]._fU0 );
        }
    }
    if (DOES_BLIP_EXIST( l_U4983 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4983 );
    }
    if (DOES_BLIP_EXIST( l_U4983 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4983 );
    }
    if (DOES_BLIP_EXIST( l_U4981 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4981 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 400514754 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 944930284 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 861409633 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1759673526 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1043459709 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_34518( 2 ) );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U4966 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U4967[0] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U4967[1] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U4967[2] );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -392.24580000, -581.06230000, -50.30110000, -377.97810000, -493.85530000, 50.00000000, 0 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -405.85130000, -516.68100000, -100.00000000, -393.46130000, -494.78240000, 100.00000000, 0 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -385.75180000, -555.65530000, -50.30110000, -365.23830000, -544.57150000, 50.00000000, 0 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -385.75180000, -555.65530000, -50.30110000, -365.23830000, -544.57150000, 50.00000000, 0 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -375.97440000, -582.14800000, -50.30110000, -375.85720000, -559.35730000, 50.00000000, 0 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -390.03090000, -575.60230000, -50.30110000, -360.41830000, -559.04270000, 50.00000000, 0 );
    return;
}

int sub_34518(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -1255452397;
        case 3: return -789894171;
        case 2: return 1638119866;
        case 1: return -304802106;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -1660661558;
}

void sub_35928(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

void sub_36109()
{
    int I;

    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, 250.00000000, 250.00000000, 250.00000000, 0 ))
    {
        l_U5342 = 1;
    }
    else
    {
        l_U5342 = 1;
    }
    REQUEST_MODEL( -2075782048 );
    REQUEST_MODEL( 1239854102 );
    REQUEST_MODEL( 1930762713 );
    REQUEST_MODEL( 1233545547 );
    REQUEST_MODEL( 1005833766 );
    REQUEST_MODEL( 67157199 );
    REQUEST_MODEL( 518033353 );
    REQUEST_MODEL( -1366166054 );
    REQUEST_MODEL( 1595218282 );
    REQUEST_MODEL( 2120126803 );
    REQUEST_MODEL( 1789985121 );
    REQUEST_MODEL( -1085774992 );
    for ( I = 0; I < l_U4280; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U4280[I]._fU0 )))
        {
            SET_CHAR_COORDINATES( l_U4280[I]._fU0, l_U5064[I]._fU0, l_U5064[I]._fU4, l_U5064[I]._fU8 - 1.50000000 );
            FREEZE_CHAR_POSITION( l_U4280[I]._fU0, 0 );
        }
    }
    return;
}

void sub_36569()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (sub_36578())
    {
        l_U5325 = 0;
        return 1;
    }
    if (l_U4774)
    {
        l_U5325 = 0;
        return 1;
    }
    if (sub_36871( l_U5326, 8000 ))
    {
        GET_CHAR_COORDINATES( sub_3454(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if (uVar5._fU8 > 6.50000000)
        {
            l_U5325 = 0;
            return 1;
        }
    }
    for ( I = 0; I < l_U3874; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U3874[I]._fU0 )))
        {
            if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U3874[I]._fU0, sub_3454(), 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                GET_CHAR_COORDINATES( sub_3454(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                if (uVar5._fU8 > 6.50000000)
                {
                    if (l_U5325 == 0)
                    {
                        GET_GAME_TIMER( ref l_U5325 );
                    }
                    l_U5324 = 1;
                }
            }
        }
    }
    for ( I = 0; I < l_U4280; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U4280[I]._fU0 )))
        {
            if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U4280[I]._fU0, sub_3454(), 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                GET_CHAR_COORDINATES( sub_3454(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                if (uVar5._fU8 > 6.50000000)
                {
                    if (l_U5325 == 0)
                    {
                        GET_GAME_TIMER( ref l_U5325 );
                    }
                    l_U5324 = 1;
                }
            }
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1137.66400000, -987.62810000, 12.92580000, 41.00000000, 24.00000000, 25.00000000, 0 ))
    {
        if (IS_CHAR_SHOOTING( sub_3454() ))
        {
            if (sub_33251( 0 ))
            {
                l_U5325 = 0;
                return 1;
            }
            else if (l_U5325 == 0)
            {
                GET_GAME_TIMER( ref l_U5325 );
            }
            l_U5324 = 1;;
        }
    }
    if (IS_BULLET_IN_AREA( -1135.42800000, -987.41180000, 12.92580000, 46.00000000, 1 ))
    {
        if (l_U5325 == 0)
        {
            GET_GAME_TIMER( ref l_U5325 );
        }
        l_U5324 = 1;
    }
    if (LOCATE_CHAR_IN_CAR_3D( sub_3454(), -1135.99700000, -986.67060000, 12.90850000, 50.00000000, 50.00000000, 1000.00000000, 0 ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3454(), ref uVar3 );
            GET_CAR_MODEL( uVar3, ref uVar4 );
            if (IS_THIS_MODEL_A_HELI( uVar4 ))
            {
                if (NOT (IS_CAR_DEAD( uVar3 )))
                {
                    if (l_U5325 == 0)
                    {
                        GET_GAME_TIMER( ref l_U5325 );
                    }
                    l_U5324 = 1;
                }
            }
        }
    }
    return l_U5324;
}

int sub_36578()
{
    int I;

    for ( I = 0; I < l_U3874; I++ )
    {
        if (DOES_CHAR_EXIST( l_U3874[I]._fU0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U3874[I]._fU0 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U3874[I]._fU0, sub_3454(), 0 ))
                {
                    return 1;
                }
            }
            else
            {
                return 1;
            }
        }
    }
    for ( I = 0; I < l_U4280; I++ )
    {
        if (DOES_CHAR_EXIST( l_U4280[I]._fU0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U4280[I]._fU0 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U4280[I]._fU0, sub_3454(), 0 ))
                {
                    return 1;
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_36871(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam0 > 0)
    {
        GET_GAME_TIMER( ref iVar4 );
        if ((iVar4 - iParam0) > iParam1)
        {
            return 1;
        }
    }
    return 0;
}

void sub_38003(int iParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU0, iParam0->_fU40, 2 );
        break;
        case 1:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1124.95000000, -986.00910000, 10.14460000, -1109.60100000, -983.85190000, 6.14460000, 15.00000000 );
        break;
        case 3:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1151.19300000, -989.77310000, 13.92580000, -1138.81800000, -988.01010000, 5.42580000, 13.50000000 );
        break;
        case 2:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1166.41900000, -991.86400000, 15.75650000, -1110.97900000, -983.96580000, 3.75650000, 15.00000000 );
        break;
        case 4:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1129.93400000, -986.83260000, 14.42740000, -1126.96400000, -986.40950000, 11.42740000, 8.50000000 );
        break;
        case 7:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1153.80200000, -990.15370000, 11.72110000, -1124.59700000, -985.99290000, 8.72110000, 10.50000000 );
        break;
        case 5:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1133.11300000, -987.17270000, 9.04600000, -1125.68900000, -986.11490000, 6.04600000, 5.50000000 );
        break;
        case 6:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1125.49100000, -986.04680000, 8.55460000, -1124.00600000, -985.83520000, 6.05460000, 4.00000000 );
        break;
        case 8:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1199.69100000, -625.69420000, 12.31400000, -1192.19100000, -625.69420000, 9.31400000, 2.00000000 );
        break;
    }
    return;
}

int sub_38888()
{
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_38903( l_U4762 ))))
    {
        return 1;
    }
    return 0;
}

int sub_38903(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_39015( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_39015( "\n speech is not playing" );
    }
    return 0;
}

void sub_39015(unknown uParam0)
{
    return;
}

void sub_39117(float fParam0, boolean bParam1, boolean bParam2)
{
    int I;
    int Result;
    float fVar7;
    float fVar8;
    int iVar9;

    Result = -1;
    fVar7 = 1000.00000000;
    for ( I = 0; I < l_U4280; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
        {
            if (bParam1)
            {
                GET_CHAR_MODEL( l_U4280[I]._fU0, ref iVar9 );
                if (iVar9 == l_U3844)
                {
                    fVar8 = sub_39234( sub_3454(), l_U4280[I]._fU0, 1 );
                    if (fVar8 < fVar7)
                    {
                        if (fVar8 < fParam0)
                        {
                            fVar7 = fVar8;
                            Result = I;
                        }
                    }
                }
            }
            if (bParam2)
            {
                GET_CHAR_MODEL( l_U4280[I]._fU0, ref iVar9 );
                if (iVar9 == l_U3845)
                {
                    fVar8 = sub_39234( sub_3454(), l_U4280[I]._fU0, 1 );
                    if (fVar8 < fVar7)
                    {
                        if (fVar8 < fParam0)
                        {
                            fVar7 = fVar8;
                            Result = I;
                        }
                    }
                }
            }
        }
    }
    return Result;
}

void sub_39234(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_39247( uParam0, uParam2 ), sub_39247( uParam1, uParam2 ) );
}

void sub_39247(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_39605(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_39626( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_39626(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_39680( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_39680(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_39702( iParam1 )))
    {
        return 0;
    }
    l_U2._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_40378( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_39702(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_39015( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_39015( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_39015( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_40378(int iParam0, int iParam1)
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

void sub_40894(float fParam0)
{
    int I;
    int Result;
    float fVar5;
    float fVar6;

    Result = -1;
    fVar5 = 1000.00000000;
    for ( I = 0; I < l_U3874; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
        {
            fVar6 = sub_39234( sub_3454(), l_U3874[I]._fU0, 1 );
            if (fVar6 < fVar5)
            {
                if (fVar6 < fParam0)
                {
                    fVar5 = fVar6;
                    Result = I;
                }
            }
        }
    }
    return Result;
}

void sub_41064()
{
    unknown uVar2;
    string Result;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar2 );
    switch (uVar2)
    {
        case 0:
        Result = "GANG_WATCH_THIS_GUY";
        break;
        case 1:
        Result = "MOVE_IN";
        break;
        case 2:
        Result = "PLAYER_OVER_THERE";
        break;
        case 3:
        Result = "TARGET";
        break;
    }
    return Result;
}

void sub_42765(unknown uParam0)
{
    int I;
    unknown uVar4;
    int iVar5;

    for ( I = 0; I <= 14; I++ )
    {
        if ((uParam0^)[I]._fU4)
        {
            if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
            {
                if (NOT (uParam0^)[I]._fU8)
                {
                    SET_CHAR_DECISION_MAKER( (uParam0^)[I]._fU0, l_U4876 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^)[I]._fU0, 1 );
                    SET_CHAR_RELATIONSHIP( (uParam0^)[I]._fU0, 5, 0 );
                    if ((uParam0^)[I]._fU24)
                    {
                        OPEN_SEQUENCE_TASK( ref uVar4 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, (uParam0^)[I]._fU40._fU0, (uParam0^)[I]._fU40._fU4, (uParam0^)[I]._fU40._fU8, 3, 0.50000000, 0.50000000, sub_3454(), 1 );
                        CLOSE_SEQUENCE_TASK( uVar4 );
                    }
                    else if ((uParam0^)[I]._fU28)
                    {
                        OPEN_SEQUENCE_TASK( ref uVar4 );
                        if (IS_CHAR_DUCKING( (uParam0^)[I]._fU0 ))
                        {
                            TASK_TOGGLE_DUCK( 0, 0 );
                        }
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, (uParam0^)[I]._fU40._fU0, (uParam0^)[I]._fU40._fU4, (uParam0^)[I]._fU40._fU8, 3, 0.50000000, 0.50000000, sub_3454(), 0.00000000, 0.00000000, 0.00000000, 1 );
                        if ((uParam0^)[I]._fU32)
                        {
                            TASK_AIM_GUN_AT_CHAR( 0, sub_3454(), 99999999 );
                        }
                        CLOSE_SEQUENCE_TASK( uVar4 );
                    }
                    else if ((uParam0^)[I]._fU36)
                    {
                        OPEN_SEQUENCE_TASK( ref uVar4 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, (uParam0^)[I]._fU40._fU0, (uParam0^)[I]._fU40._fU4, (uParam0^)[I]._fU40._fU8, 3, -1, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( uVar4 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref uVar4 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, (uParam0^)[I]._fU40._fU0, (uParam0^)[I]._fU40._fU4, (uParam0^)[I]._fU40._fU8, 3, -2 );
                        if ((uParam0^)[I]._fU20)
                        {
                            TASK_DUCK( 0, -2 );
                        }
                        CLOSE_SEQUENCE_TASK( uVar4 );
                    };;;
                    if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar4 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar4 );
                    (uParam0^)[I]._fU8 = 1;
                }
                else if (((uParam0^)[I]._fU12) || (NOT (uParam0^)[I]._fU16))
                {
                    if (NOT (uParam0^)[I]._fU20)
                    {
                        if (sub_43468( (uParam0^)[I]._fU0, 1, 0 ))
                        {
                            GET_CURRENT_CHAR_WEAPON( (uParam0^)[I]._fU0, ref iVar5 );
                            if (iVar5 != 18)
                            {
                                SET_CHAR_DECISION_MAKER( (uParam0^)[I]._fU0, l_U4877 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^)[I]._fU0, 0 );
                                SET_COMBAT_DECISION_MAKER( (uParam0^)[I]._fU0, (uParam0^)[I]._fU80 );
                                sub_38003( ref (uParam0^)[I], (uParam0^)[I]._fU52 );
                                SET_CHAR_RELATIONSHIP( (uParam0^)[I]._fU0, 5, 23 );
                                SET_CHAR_RELATIONSHIP( (uParam0^)[I]._fU0, 5, 0 );
                                OPEN_SEQUENCE_TASK( ref uVar4 );
                                TASK_COMBAT( 0, sub_3454() );
                                CLOSE_SEQUENCE_TASK( uVar4 );
                                if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
                                {
                                    TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar4 );
                                }
                                CLEAR_SEQUENCE_TASK( uVar4 );
                                (uParam0^)[I]._fU16 = 1;
                                (uParam0^)[I]._fU12 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_43468(unknown uParam0, boolean bParam1, int iParam2)
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

void sub_43888(unknown uParam0)
{
    sub_43899( uParam0 );
    if (g_U43137 == 4)
    {
        sub_43967();
    }
    if (g_U43137 == 10)
    {
        sub_43967();
    }
    if (g_U43137 == 7)
    {
        sub_43967();
    }
    return;
}

void sub_43899(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEALTH( uParam0, ref g_U43510 );
    }
    g_U43499 = 1;
    return;
}

void sub_43967()
{
    GET_GAME_TIMER( ref g_U43504 );
    g_U43497 = 1;
    return;
}

void sub_44057()
{
    sub_44066();
    sub_44100();
    return;
}

void sub_44066()
{
    g_U43513 = GET_INT_STAT( 289 );
    return;
}

void sub_44100()
{
    RESET_LOCAL_PLAYER_WEAPON_STAT( 21, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 21, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 29, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 29, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 30, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 30, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 31, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 31, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 32, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 32, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 33, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 33, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 34, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 34, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 35, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 35, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 36, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 36, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 37, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 37, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 39, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 39, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 40, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 40, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 14, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 14, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 7, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 7, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 9, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 9, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 12, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 12, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 13, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 13, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 15, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 15, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 10, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 10, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 11, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 11, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 4, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 4, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 5, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 5, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 18, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 18, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 16, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 16, 1 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 17, 0 );
    RESET_LOCAL_PLAYER_WEAPON_STAT( 17, 1 );
    return;
}

void sub_44745()
{
    int I;

    switch (l_U5327)
    {
        case 0:
        REQUEST_MODEL( -1043459709 );
        REQUEST_MODEL( 1759673526 );
        REQUEST_CAR_RECORDING( 120 );
        REQUEST_CAR_RECORDING( 121 );
        while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 121 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 120 ))) || ((NOT (HAS_MODEL_LOADED( 1759673526 ))) || (NOT (HAS_MODEL_LOADED( -1043459709 ))))))
        {
            WAIT( 0 );
        }
        CREATE_CAR( -1043459709, -1235.00700000, -734.63940000, -0.02530000, ref l_U5328[0], 1 );
        SET_VEHICLE_QUATERNION( l_U5328[0], -0.02490000, 0.01270000, 0.83900000, -0.54350000 );
        CREATE_CHAR_INSIDE_CAR( l_U5328[0], 26, l_U3841, ref l_U5334[0] );
        SET_CHAR_DECISION_MAKER( l_U5334[0], l_U4876 );
        CREATE_CAR( 1759673526, -1045.32300000, -1025.80700000, -0.08150000, ref l_U5328[1], 1 );
        SET_VEHICLE_QUATERNION( l_U5328[1], -0.01090000, 0.00680000, -0.06440000, 0.99780000 );
        CREATE_CHAR_INSIDE_CAR( l_U5328[1], 26, l_U3841, ref l_U5334[1] );
        SET_CHAR_DECISION_MAKER( l_U5334[1], l_U4876 );
        l_U5327++;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U5334[0] )))
        {
            if (NOT (IS_CAR_DEAD( l_U5328[0] )))
            {
                ;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U5334[1] )))
        {
            if (NOT (IS_CAR_DEAD( l_U5328[1] )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U5328[1], 121 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U5334[2] )))
        {
            if (NOT (IS_CAR_DEAD( l_U5328[2] )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U5328[2], 122 );
            }
        }
        l_U5327++;
        break;
        case 2:
        for ( I = 0; I < l_U5328; I++ )
        {
            if (DOES_VEHICLE_EXIST( l_U5328[I] ))
            {
                if (NOT (IS_CAR_DEAD( l_U5328[I] )))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U5328[I] )))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U5328[I] );
                        if (NOT (IS_CHAR_DEAD( l_U5334[I] )))
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U5334[I] );
                        }
                    }
                }
            }
        }
        break;
    }
    return;
}

void sub_45512()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;
    int iVar10;

    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        if (l_U5300 > 0)
        {
            if (NOT l_U5311)
            {
                if (NOT l_U5150)
                {
                    if (sub_45568())
                    {
                        if (sub_38888())
                        {
                            if (NOT (IS_CHAR_DEAD( l_U3642[0]._fU4[0] )))
                            {
                                sub_5928( 3, l_U3642[0]._fU4[0], "BOAT_GUARD", 0 );
                                sub_39605( "E2Y1_BOAT", ref l_U4762, 6, 1 );
                                l_U5311 = 1;
                            }
                            else
                            {
                                l_U5311 = 1;
                            }
                        }
                    }
                }
            }
            else if (NOT l_U5312)
            {
                if (sub_38888())
                {
                    sub_39605( "E2Y1_SPOT", ref l_U4762, 6, 1 );
                    l_U5312 = 1;
                }
            }
            else if (NOT l_U5306)
            {
                if (sub_38888())
                {
                    PRINT_NOW( "YS1_ALPAT", 7500, 1 );
                    l_U5306 = 1;
                }
            }
            else if (NOT l_U5307)
            {
                if (DOES_BLIP_EXIST( l_U4982 ))
                {
                    PRINT_NOW( "YS1_STE", 7500, 1 );
                    l_U5307 = 1;
                }
            };;;;
        }
    }
    switch (l_U5300)
    {
        case 0:
        if (HAS_MODEL_LOADED( 1033245328 ))
        {
            sub_14667( 8 );
            l_U5300 = 1;
        }
        else
        {
            REQUEST_MODEL( 1033245328 );
        }
        break;
        case 1:
        sub_46819( ref l_U3642[0] );
        if (NOT l_U5302)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1127.32300000, -986.77850000, 1.00000000, 400.00000000, 400.00000000, 400.00000000, 0 ))
            {
                PRINT_NOW( "YS1_PAT", 7500, 1 );
                if (NOT (IS_CHAR_DEAD( l_U3642[0]._fU4[0] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U3642[0]._fU4[0], ref l_U3642[0]._fU36[0] );
                    CHANGE_BLIP_SCALE( l_U3642[0]._fU36[0], 0.50000000 );
                    CHANGE_BLIP_DISPLAY( l_U3642[0]._fU36[0], 2 );
                }
                l_U5302 = 1;
            }
        }
        else if (NOT l_U5303)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1127.32300000, -986.77850000, 1.00000000, 350.00000000, 350.00000000, 350.00000000, 0 ))
                {
                    PRINT_NOW( "YS1_QUI", 7500, 1 );
                    l_U5303 = 1;
                }
            }
        }
        else if (NOT l_U5310)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3454() ))
                {
                    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar9 );
                    if ((iVar9 != 5) AND (iVar9 != 4))
                    {
                        PRINT_HELP( "YS1_PAT_HINT" );
                        l_U5309 = 1;
                        l_U5310 = 1;
                    }
                }
            }
        };;;
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3454(), l_U4972 )))
            {
                if (sub_45568())
                {
                    l_U4774 = 1;
                    l_U5300 = 2;
                }
            }
            else
            {
                sub_47773( l_U3642[0]._fU4[1], 14 );
                l_U5300 = 5;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U3642[0]._fU4[0] )))
        {
            if (NOT (IS_CAR_DEAD( l_U3642[0]._fU0 )))
            {
                TASK_CAR_MISSION_PED_TARGET( l_U3642[0]._fU4[0], l_U3642[0]._fU0, sub_3454(), 13, 75.00000000, 2, 0, 10000 );
            }
        }
        sub_47773( l_U3642[0]._fU4[1], 14 );
        if (l_U5313 != 0)
        {
            l_U5313 = 0;
        }
        if (l_U5305)
        {
            l_U5305 = 0;
        }
        l_U5300 = 3;
        break;
        case 3:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (DOES_BLIP_EXIST( l_U4981 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4981 );
            }
            if (DOES_BLIP_EXIST( l_U4983 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4983 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U4982 )))
            {
                if (NOT (IS_CAR_DEAD( l_U4972 )))
                {
                    ADD_BLIP_FOR_CAR( l_U4972, ref l_U4982 );
                    sub_35928( l_U4982 );
                    SET_BLIP_AS_FRIENDLY( l_U4982, 1 );
                }
            }
            l_U5308 = 1;
            l_U5300 = 4;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U3642[0]._fU4[0] )))
        {
            if (NOT (IS_CAR_DEAD( l_U3642[0]._fU0 )))
            {
                if (NOT l_U5304)
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U3642[0]._fU4[0], l_U3642[0]._fU0 )))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U3642[0]._fU4[0], 12, 2000, 1 );
                        SET_CURRENT_CHAR_WEAPON( l_U3642[0]._fU4[0], 12, 1 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3642[0]._fU4[0], 1 );
                        SET_CHAR_DECISION_MAKER( l_U3642[0]._fU4[0], l_U4877 );
                        SET_COMBAT_DECISION_MAKER( l_U3642[0]._fU4[0], l_U4873 );
                        OPEN_SEQUENCE_TASK( ref uVar8 );
                        TASK_COMBAT( 0, sub_3454() );
                        CLOSE_SEQUENCE_TASK( uVar8 );
                        TASK_PERFORM_SEQUENCE( l_U3642[0]._fU4[0], uVar8 );
                        CLEAR_SEQUENCE_TASK( uVar8 );
                        l_U5304 = 1;
                    }
                }
                if (NOT l_U5305)
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, 250.00000000, 250.00000000, 250.00000000, 0 )))
                    {
                        l_U3642[0]._fU104 = 0;
                        l_U5305 = 1;
                    }
                }
                else
                {
                    sub_46819( ref l_U3642[0] );
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, 250.00000000, 250.00000000, 250.00000000, 0 ))
                    {
                        if (l_U5313 == 0)
                        {
                            GET_GAME_TIMER( ref l_U5313 );
                        }
                        else if (sub_36871( l_U5313, 5000 ))
                        {
                            l_U5300 = 2;
                        }
                    }
                }
            }
        }
        break;
        case 5:
        sub_46819( ref l_U3642[0] );
        break;
    }
    if (IS_CHAR_DEAD( l_U3642[0]._fU4[0] ))
    {
        if (DOES_BLIP_EXIST( l_U3642[0]._fU36[0] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3642[0]._fU36[0] );
        }
        sub_5121();
    }
    else if (l_U5309)
    {
        sub_48916( ref l_U3642[0]._fU4[0] );
    }
    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
        {
            if (NOT (IS_CAR_DEAD( l_U3642[0]._fU0 )))
            {
                GET_CAR_HEALTH( l_U3642[0]._fU0, ref iVar10 );
                if (iVar10 < 100)
                {
                    EXPLODE_CAR( l_U3642[0]._fU0, 1, 0 );
                }
            }
        }
    }
    return;
}

void sub_45568()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    boolean Result;

    Result = false;
    if (NOT (IS_CHAR_DEAD( l_U3642[0]._fU4[0] )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), l_U3642[0]._fU4[0], 30.00000000, 30.00000000, 30.00000000, 0 ))
        {
            Result = true;
        }
        else
        {
            GET_CHAR_COORDINATES( sub_3454(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            sub_45706( l_U3642[0]._fU4[0], uVar2, ref uVar5 );
            if ((uVar5._fU4 > 1.00000000) AND (uVar5._fU4 < 70.00000000))
            {
                if ((uVar5._fU0 > (70.00000000 * -0.50000000)) AND (uVar5._fU0 < (70.00000000 * 0.50000000)))
                {
                    Result = true;
                }
            }
        }
        if (NOT Result)
        {
            GET_CHAR_COORDINATES( l_U3642[0]._fU4[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 100.00000000, 100.00000000, 100.00000000, 0 ))
            {
                if (NOT (sub_33251( 0 )))
                {
                    if (IS_CHAR_SHOOTING( sub_3454() ))
                    {
                        Result = true;
                    }
                }
            }
            if (IS_EXPLOSION_IN_SPHERE( -1, uVar2._fU0, uVar2._fU4, uVar2._fU8, 30.00000000 ))
            {
                Result = true;
            }
            if (sub_46085())
            {
                Result = true;
            }
        }
        if (IS_EXPLOSION_IN_SPHERE( -1, l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, 150.00000000 ))
        {
            Result = true;
        }
    }
    else
    {
        Result = true;
    }
    if (NOT Result)
    {
        if (IS_CHAR_INJURED( l_U3642[0]._fU4[1] ))
        {
            Result = true;
        }
    }
    if (sub_36578())
    {
        Result = true;
    }
    l_U5142 = 0;
    return Result;
}

void sub_45706(unknown uParam0, vector vParam1, int iParam4)
{
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar7.x, ref vVar7.y, ref vVar7.z );
        GET_CHAR_HEADING( uParam0, ref uVar13 );
        uVar10 = {vParam1 - vVar7};
        iParam4->_fU0 = (uVar10._fU0 * (COS( uVar13 ))) + (uVar10._fU4 * (SIN( uVar13 )));
        iParam4->_fU4 = (uVar10._fU4 * (COS( uVar13 ))) - (uVar10._fU0 * (SIN( uVar13 )));
        iParam4->_fU8 = uVar10._fU8;
    }
    return;
}

void sub_46085()
{
    unknown uVar2;
    int iVar3;

    if (NOT l_U5299)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3454(), ref uVar2 );
            if (LOCATE_CHAR_IN_CAR_3D( sub_3454(), -1133.33700000, -987.10200000, 6.51387900, 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                if (NOT l_U5298)
                {
                    GET_CAR_HEALTH( uVar2, ref l_U5297 );
                    l_U5298 = 1;
                }
                else
                {
                    GET_CAR_HEALTH( uVar2, ref iVar3 );
                    if ((l_U5297 - iVar3) > 45)
                    {
                        l_U5299 = 1;
                    }
                }
            }
            else
            {
                l_U5298 = 0;
            }
        }
    }
    return l_U5299;
}

void sub_46819(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar4 = iParam0->_fU104;
    uVar5 = {iParam0->_fU52[uVar4]};
    if (NOT (IS_CHAR_DEAD( iParam0->_fU4[0] )))
    {
        if ((sub_43468( iParam0->_fU4[0], 1, 0 )) || (LOCATE_CHAR_IN_CAR_3D( iParam0->_fU4[0], uVar5._fU0, uVar5._fU4, uVar5._fU8, 10.00000000, 10.00000000, 10.00000000, 0 )))
        {
            if (sub_43468( iParam0->_fU4[0], 1, 0 ))
            {
                sub_5598( "Finished task...." );
            }
            if (LOCATE_CHAR_IN_CAR_3D( iParam0->_fU4[0], uVar5._fU0, uVar5._fU4, uVar5._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                sub_5598( "Located...." );
            }
            iParam0->_fU104++;
            if (iParam0->_fU104 > 3)
            {
                iParam0->_fU104 = 0;
            }
            sub_47110( (iParam0^), iParam0->_fU52[iParam0->_fU104] );
        }
    }
    return;
}

void sub_47110(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41)
{
    unknown uVar44;

    if (NOT (IS_CAR_DEAD( uParam0._fU0 )))
    {
        if (NOT (IS_CHAR_DEAD( uParam0._fU4[0] )))
        {
            OPEN_SEQUENCE_TASK( ref uVar44 );
            TASK_CAR_MISSION_COORS_TARGET( 0, uParam0._fU0, uParam39._fU0, uParam39._fU4, uParam39._fU8, 4, 10.00000000, 2, 0, 10000 );
            CLOSE_SEQUENCE_TASK( uVar44 );
            TASK_PERFORM_SEQUENCE( uParam0._fU4[0], uVar44 );
            CLEAR_SEQUENCE_TASK( uVar44 );
        }
    }
    return;
}

void sub_47773(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GIVE_WEAPON_TO_CHAR( uParam0, uParam1, 3000, 1 );
        SET_CHAR_DECISION_MAKER( uParam0, l_U4877 );
        SET_CHAR_RELATIONSHIP( uParam0, 5, 0 );
        OPEN_SEQUENCE_TASK( ref uVar4 );
        TASK_DRIVE_BY( 0, sub_3454(), 0, 0.00000000, 0.00000000, 0.00000000, 500.00000000, 8, 0, 80 );
        CLOSE_SEQUENCE_TASK( uVar4 );
        TASK_PERFORM_SEQUENCE( uParam0, uVar4 );
        CLEAR_SEQUENCE_TASK( uVar4 );
    }
    return;
}

void sub_48916(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U213)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U211))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U212 + 500))
        {
            l_U211 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_49084()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3454() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U213)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U212 );
            l_U211 = 1;
            l_U210 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U211) AND (NOT l_U210))
        {
            if (l_U213)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U210 = 1;
        }
    }
    else if (l_U210)
    {
        if (l_U213)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U210 = 0;
    };;;
    return;
}

int sub_49084()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_49731()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    switch (l_U5176)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U4280[5]._fU0 )))
        {
            if (NOT (IS_CAR_DEAD( l_U4972 )))
            {
                if (sub_49817())
                {
                    OPEN_SEQUENCE_TASK( ref uVar4 );
                    TASK_GO_TO_COORD_WHILE_AIMING( 0, -1122.83200000, -985.96470000, 6.54960000, 3, 0.50000000, 0.50000000, sub_3454(), 0.00000000, 0.00000000, 0.00000000, 1 );
                    TASK_AIM_GUN_AT_CHAR( 0, sub_3454(), 99999999 );
                    CLOSE_SEQUENCE_TASK( uVar4 );
                    GIVE_WEAPON_TO_CHAR( l_U4280[5]._fU0, 7, 1000, 1 );
                    if (NOT l_U5179)
                    {
                        if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
                        {
                            sub_5928( 1, l_U3874[5]._fU0, "ARMS_DEALER", 0 );
                            sub_39605( "E2Y1_ACHOP", ref l_U4762, 6, 1 );
                            l_U5179 = 1;
                        }
                    }
                    TASK_PERFORM_SEQUENCE( l_U4280[5]._fU0, uVar4 );
                    CLEAR_SEQUENCE_TASK( uVar4 );
                    GET_GAME_TIMER( ref l_U5177 );
                    l_U5175 = 1;
                    l_U5176++;
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref uVar4 );
                    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, -1122.83200000, -985.96470000, 6.54960000, 3, 0.50000000, 0.50000000, sub_3454(), 1 );
                    TASK_COMBAT( 0, sub_3454() );
                    CLOSE_SEQUENCE_TASK( uVar4 );
                    GIVE_WEAPON_TO_CHAR( l_U4280[5]._fU0, 7, 1000, 1 );
                    SET_CHAR_DECISION_MAKER( l_U4280[5]._fU0, l_U4877 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U4280[5]._fU0, 0 );
                    SET_COMBAT_DECISION_MAKER( l_U4280[5]._fU0, l_U4871 );
                    SET_CHAR_RELATIONSHIP( l_U4280[5]._fU0, 1, 24 );
                    SET_CHAR_RELATIONSHIP( l_U4280[5]._fU0, 5, 0 );
                    sub_38003( ref l_U4280[5], 6 );
                    TASK_PERFORM_SEQUENCE( l_U4280[5]._fU0, uVar4 );
                    CLEAR_SEQUENCE_TASK( uVar4 );
                    GET_GAME_TIMER( ref l_U5177 );
                    l_U5174 = 1;
                    l_U5176++;
                }
            }
        }
        else
        {
            l_U5176++;
        }
        break;
        case 1:
        if ((l_U5177 == 0) || (sub_36871( l_U5177, 1700 )))
        {
            l_U5178 = 1;
            if (NOT (IS_CHAR_INJURED( l_U4280[6]._fU0 )))
            {
                if (NOT (IS_CAR_DEAD( l_U4972 )))
                {
                    if (sub_49817())
                    {
                        OPEN_SEQUENCE_TASK( ref uVar4 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "henchman_spot_player_c_react", "missYusuf01", 1000, 0, 11 );
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, -1125.30700000, -985.13530000, 6.61979000, 3, 0.50000000, 0.50000000, sub_3454(), 0.00000000, 0.00000000, 0.00000000, 1 );
                        TASK_AIM_GUN_AT_CHAR( 0, sub_3454(), 99999999 );
                        CLOSE_SEQUENCE_TASK( uVar4 );
                        GIVE_WEAPON_TO_CHAR( l_U4280[6]._fU0, 7, 1000, 1 );
                        TASK_PERFORM_SEQUENCE( l_U4280[6]._fU0, uVar4 );
                        CLEAR_SEQUENCE_TASK( uVar4 );
                        GET_GAME_TIMER( ref l_U5177 );
                        l_U5175 = 1;
                        l_U5176++;
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref uVar4 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "henchman_spot_player_c_react", "missYusuf01", 1000, 0, 11 );
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, -1125.30700000, -985.13530000, 6.61979000, 3, 0.50000000, 0.50000000, sub_3454(), 0.00000000, 0.00000000, 0.00000000, 1 );
                        TASK_COMBAT( 0, sub_3454() );
                        CLOSE_SEQUENCE_TASK( uVar4 );
                        GIVE_WEAPON_TO_CHAR( l_U4280[6]._fU0, 7, 1000, 1 );
                        SET_CHAR_DECISION_MAKER( l_U4280[6]._fU0, l_U4877 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U4280[6]._fU0, 0 );
                        SET_COMBAT_DECISION_MAKER( l_U4280[6]._fU0, l_U4871 );
                        SET_CHAR_RELATIONSHIP( l_U4280[6]._fU0, 1, 24 );
                        SET_CHAR_RELATIONSHIP( l_U4280[6]._fU0, 5, 0 );
                        sub_38003( ref l_U4280[6], 6 );
                        TASK_PERFORM_SEQUENCE( l_U4280[6]._fU0, uVar4 );
                        CLEAR_SEQUENCE_TASK( uVar4 );
                        GET_GAME_TIMER( ref l_U5177 );
                        l_U5174 = 1;
                        l_U5176++;
                    }
                }
            }
            else
            {
                l_U5176++;
            }
        }
        break;
        case 2:
        if (sub_36871( l_U5177, 500 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U4280[4]._fU0 )))
            {
                if (NOT (IS_CAR_DEAD( l_U4972 )))
                {
                    if (sub_49817())
                    {
                        OPEN_SEQUENCE_TASK( ref uVar4 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "henchman_spot_player_b_react", "missYusuf01", 1000, 0, 11 );
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, -1125.35400000, -986.79980000, 6.68909500, 3, 0.50000000, 0.50000000, sub_3454(), 0.00000000, 0.00000000, 0.00000000, 1 );
                        TASK_AIM_GUN_AT_CHAR( 0, sub_3454(), 99999999 );
                        CLOSE_SEQUENCE_TASK( uVar4 );
                        GIVE_WEAPON_TO_CHAR( l_U4280[4]._fU0, 7, 1000, 1 );
                        TASK_PERFORM_SEQUENCE( l_U4280[4]._fU0, uVar4 );
                        CLEAR_SEQUENCE_TASK( uVar4 );
                        GET_GAME_TIMER( ref l_U5177 );
                        l_U5175 = 1;
                        l_U5176++;
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref uVar4 );
                        TASK_PLAY_ANIM_WITH_FLAGS( 0, "henchman_spot_player_b_react", "missYusuf01", 1000, 0, 11 );
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, -1125.35400000, -986.79980000, 6.68909500, 3, 0.50000000, 0.50000000, sub_3454(), 0.00000000, 0.00000000, 0.00000000, 1 );
                        TASK_AIM_GUN_AT_CHAR( 0, sub_3454(), 99999999 );
                        CLOSE_SEQUENCE_TASK( uVar4 );
                        GIVE_WEAPON_TO_CHAR( l_U4280[4]._fU0, 7, 1000, 1 );
                        SET_CHAR_DECISION_MAKER( l_U4280[4]._fU0, l_U4877 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U4280[4]._fU0, 0 );
                        SET_COMBAT_DECISION_MAKER( l_U4280[4]._fU0, l_U4871 );
                        SET_CHAR_RELATIONSHIP( l_U4280[4]._fU0, 1, 24 );
                        SET_CHAR_RELATIONSHIP( l_U4280[4]._fU0, 5, 0 );
                        sub_38003( ref l_U4280[4], 5 );
                        TASK_PERFORM_SEQUENCE( l_U4280[4]._fU0, uVar4 );
                        CLEAR_SEQUENCE_TASK( uVar4 );
                        GET_GAME_TIMER( ref l_U5177 );
                        l_U5174 = 1;
                        l_U5176++;
                    }
                }
            }
            else
            {
                l_U5176++;
            }
        }
        break;
    }
    if (l_U5178)
    {
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (sub_49817())
            {
                for ( I = 0; I <= 5; I++ )
                {
                    if (NOT l_U3874[I]._fU4)
                    {
                        l_U3874[I]._fU28 = 1;
                        l_U3874[I]._fU20 = 1;
                        l_U3874[I]._fU4 = 1;
                        l_U3874[I]._fU32 = 1;
                    }
                }
            }
            else
            {
                for ( I = 0; I < l_U3874; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                    {
                        if (I != 2)
                        {
                            l_U3874[I]._fU28 = 0;
                            l_U3874[I]._fU24 = 1;
                            l_U3874[I]._fU4 = 1;
                            if (I == 3)
                            {
                                l_U3874[3]._fU40 = {-1126.71700000, -986.76350000, 9.20481000};
                                l_U3874[3]._fU52 = 7;
                                l_U3874[3]._fU8 = 0;
                                l_U3874[3]._fU24 = 0;
                                l_U3874[3]._fU36 = 1;
                            }
                            l_U5182 = 1;
                        }
                        else
                        {
                            SET_CHAR_DECISION_MAKER( l_U3874[I]._fU0, l_U4877 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3874[I]._fU0, 0 );
                            SET_COMBAT_DECISION_MAKER( l_U3874[I]._fU0, l_U4871 );
                            if (I == 2)
                            {
                                sub_38003( ref l_U3874[2], 4 );
                            }
                            else if (I == 3)
                            {
                                ;
                            }
                            SET_CHAR_RELATIONSHIP( l_U3874[I]._fU0, 1, 25 );
                            SET_CHAR_RELATIONSHIP( l_U3874[I]._fU0, 5, 0 );
                            OPEN_SEQUENCE_TASK( ref uVar4 );
                            TASK_COMBAT( 0, sub_3454() );
                            CLOSE_SEQUENCE_TASK( uVar4 );
                            if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U3874[I]._fU0, uVar4 );
                            }
                            CLEAR_SEQUENCE_TASK( uVar4 );
                        }
                    }
                }
            }
        }
        for ( I = 0; I < l_U4280; I++ )
        {
            if (I == 0)
            {
                OPEN_SEQUENCE_TASK( ref uVar4 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1125.75000000, -983.69070000, 6.54090100, 3, -2, 0.50000000 );
                TASK_COWER( 0 );
                CLOSE_SEQUENCE_TASK( uVar4 );
                if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U4280[I]._fU0, uVar4 );
                    SET_CHAR_KEEP_TASK( l_U4280[I]._fU0, 1 );
                }
                CLEAR_SEQUENCE_TASK( uVar4 );
            }
            else if (I == 1)
            {
                OPEN_SEQUENCE_TASK( ref uVar4 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1131.30300000, -984.64940000, 6.54100000, 3, -2, 0.50000000 );
                TASK_COWER( 0 );
                CLOSE_SEQUENCE_TASK( uVar4 );
                if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U4280[I]._fU0, uVar4 );
                    SET_CHAR_KEEP_TASK( l_U4280[I]._fU0, 1 );
                }
                CLEAR_SEQUENCE_TASK( uVar4 );
            }
            else if (I == 2)
            {
                OPEN_SEQUENCE_TASK( ref uVar4 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1131.66600000, -986.06430000, 6.54100000, 3, -2, 0.50000000 );
                TASK_COWER( 0 );
                CLOSE_SEQUENCE_TASK( uVar4 );
                if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U4280[I]._fU0, uVar4 );
                    SET_CHAR_KEEP_TASK( l_U4280[I]._fU0, 1 );
                }
                CLEAR_SEQUENCE_TASK( uVar4 );
            };;;
        }
        l_U5178 = 0;
    }
    if (l_U5176 > 2)
    {
        if (NOT sub_36578())
        {
            if (sub_49817())
            {
                if (l_U5174)
                {
                    sub_52885();
                    l_U5174 = 0;
                    l_U5175 = 1;
                }
            }
            else if (l_U5175)
            {
                sub_53418();
                l_U5175 = 0;
                l_U5174 = 1;
            }
            if (NOT l_U5181)
            {
                if (NOT (IS_CAR_DEAD( l_U4972 )))
                {
                    if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
                    {
                        if (l_U5180 == 0)
                        {
                            if (LOCATE_CHAR_IN_CAR_3D( sub_3454(), -1110.26500000, -983.66280000, 8.32060000, 4.00000000, 5.00000000, 2.50000000, 0 ))
                            {
                                GET_CAR_SPEED( l_U4972, ref fVar5 );
                                if (fVar5 < 5.00000000)
                                {
                                    GET_GAME_TIMER( ref l_U5180 );
                                }
                            }
                        }
                        else if (sub_36871( l_U5180, 10000 ))
                        {
                            l_U4862 = sub_40894( 1148846080 );
                            if (l_U4862 >= 0)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U3874[l_U4862]._fU0 )))
                                {
                                    sub_53133( ref l_U3874[l_U4862], 1 );
                                    REMOVE_ALL_CHAR_WEAPONS( l_U3874[l_U4862]._fU0 );
                                    OPEN_SEQUENCE_TASK( ref uVar6 );
                                    TASK_COMBAT( 0, sub_3454() );
                                    CLOSE_SEQUENCE_TASK( uVar6 );
                                    SET_CHAR_DECISION_MAKER( l_U3874[l_U4862]._fU0, l_U4877 );
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3874[l_U4862]._fU0, 0 );
                                    SET_COMBAT_DECISION_MAKER( l_U3874[l_U4862]._fU0, l_U4874 );
                                    SET_CHAR_RELATIONSHIP( l_U3874[l_U4862]._fU0, 1, 24 );
                                    SET_CHAR_RELATIONSHIP( l_U3874[l_U4862]._fU0, 5, 0 );
                                    l_U5181 = 1;
                                }
                            }
                        }
                    }
                    else if (l_U5180 != 0)
                    {
                        l_U5180 = 0;
                    }
                }
            }
            else if (NOT l_U5183)
            {
                if (NOT sub_54621())
                {
                    if (NOT (IS_CHAR_INJURED( l_U3874[l_U4862]._fU0 )))
                    {
                        sub_53133( ref l_U3874[l_U4862], 0 );
                        CLEAR_CHAR_TASKS( l_U3874[l_U4862]._fU0 );
                        SET_CHAR_DECISION_MAKER( l_U3874[l_U4862]._fU0, l_U4876 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3874[l_U4862]._fU0, 1 );
                        GIVE_WEAPON_TO_CHAR( l_U3874[l_U4862]._fU0, 7, 3000, 1 );
                        SET_CURRENT_CHAR_WEAPON( l_U3874[l_U4862]._fU0, 7, 1 );
                        OPEN_SEQUENCE_TASK( ref uVar6 );
                        TASK_AIM_GUN_AT_CHAR( 0, sub_3454(), 99999999 );
                        CLOSE_SEQUENCE_TASK( uVar6 );
                        TASK_PERFORM_SEQUENCE( l_U3874[l_U4862]._fU0, uVar6 );
                        CLEAR_SEQUENCE_TASK( uVar6 );
                        l_U5183 = 1;
                    }
                }
            }
        }
        else if ((l_U5175) || (l_U5174))
        {
            sub_53418();
            l_U5174 = 0;
            l_U5175 = 0;
        }
    }
    return;
}

int sub_49817()
{
    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1112.23200000, -985.10900000, 8.32060000, 7.00000000, 9.00000000, 2.00000000, 0 )) || (IS_CHAR_IN_CAR( sub_3454(), l_U4972 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_52885()
{
    int I;
    unknown uVar3;

    for ( I = 4; I <= 6; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
        {
            CLEAR_CHAR_TASKS( l_U4280[I]._fU0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U4280[I]._fU0, 1 );
            SET_CHAR_DECISION_MAKER( l_U4280[I]._fU0, l_U4876 );
            OPEN_SEQUENCE_TASK( ref uVar3 );
            TASK_AIM_GUN_AT_CHAR( 0, sub_3454(), 99999999 );
            CLOSE_SEQUENCE_TASK( uVar3 );
            TASK_PERFORM_SEQUENCE( l_U4280[I]._fU0, uVar3 );
            SET_CHAR_KEEP_TASK( l_U4280[I]._fU0, 1 );
            CLEAR_SEQUENCE_TASK( uVar3 );
        }
    }
    for ( I = 0; I < l_U3874; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
        {
            sub_53133( ref l_U3874[I], 0 );
            CLEAR_CHAR_TASKS( l_U3874[I]._fU0 );
            SET_CHAR_DECISION_MAKER( l_U3874[I]._fU0, l_U4876 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3874[I]._fU0, 1 );
            OPEN_SEQUENCE_TASK( ref uVar3 );
            TASK_AIM_GUN_AT_CHAR( 0, sub_3454(), 99999999 );
            CLOSE_SEQUENCE_TASK( uVar3 );
            TASK_PERFORM_SEQUENCE( l_U3874[I]._fU0, uVar3 );
            SET_CHAR_KEEP_TASK( l_U3874[I]._fU0, 1 );
            CLEAR_SEQUENCE_TASK( uVar3 );
        }
    }
    return;
}

void sub_53133(int iParam0, boolean bParam1)
{
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    iParam0->_fU20 = 0;
    if (NOT (IS_CHAR_DEAD( iParam0->_fU0 )))
    {
        if (bParam1)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
        }
        REMOVE_CHAR_DEFENSIVE_AREA( iParam0->_fU0 );
    }
    return;
}

void sub_53418()
{
    int I;
    unknown uVar3;

    for ( I = 4; I <= 6; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U4280[I]._fU0 )))
        {
            OPEN_SEQUENCE_TASK( ref uVar3 );
            TASK_COMBAT( 0, sub_3454() );
            CLOSE_SEQUENCE_TASK( uVar3 );
            SET_CHAR_DECISION_MAKER( l_U4280[I]._fU0, l_U4877 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U4280[I]._fU0, 0 );
            SET_COMBAT_DECISION_MAKER( l_U4280[I]._fU0, l_U4871 );
            SET_CHAR_RELATIONSHIP( l_U4280[I]._fU0, 1, 24 );
            SET_CHAR_RELATIONSHIP( l_U4280[I]._fU0, 5, 0 );
            if (I == 4)
            {
                sub_38003( ref l_U4280[I], 5 );
            }
            else if (I == 5)
            {
                sub_38003( ref l_U4280[I], 6 );
            }
            else if (I == 6)
            {
                sub_38003( ref l_U4280[I], 6 );
            };;;
            TASK_PERFORM_SEQUENCE( l_U4280[I]._fU0, uVar3 );
            SET_CHAR_KEEP_TASK( l_U4280[I]._fU0, 1 );
            CLEAR_SEQUENCE_TASK( uVar3 );
        }
    }
    for ( I = 0; I < l_U3874; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
        {
            if (I == l_U4862)
            {
                GIVE_WEAPON_TO_CHAR( l_U3874[I]._fU0, 7, 3000, 0 );
                SET_CURRENT_CHAR_WEAPON( l_U3874[I]._fU0, 7, 1 );
            }
            SET_CHAR_DECISION_MAKER( l_U3874[I]._fU0, l_U4877 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3874[I]._fU0, 0 );
            if ((I != 3) AND (I != 2))
            {
                SET_COMBAT_DECISION_MAKER( l_U3874[I]._fU0, l_U4874 );
            }
            else
            {
                SET_COMBAT_DECISION_MAKER( l_U3874[I]._fU0, l_U4871 );
                if (I == 2)
                {
                    sub_38003( ref l_U3874[2], 4 );
                }
                else if (I == 3)
                {
                    sub_38003( ref l_U3874[3], 7 );
                }
            }
            SET_CHAR_RELATIONSHIP( l_U3874[I]._fU0, 1, 25 );
            SET_CHAR_RELATIONSHIP( l_U3874[I]._fU0, 5, 0 );
            OPEN_SEQUENCE_TASK( ref uVar3 );
            TASK_COMBAT( 0, sub_3454() );
            CLOSE_SEQUENCE_TASK( uVar3 );
            if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
            {
                TASK_PERFORM_SEQUENCE( l_U3874[I]._fU0, uVar3 );
                SET_CHAR_KEEP_TASK( l_U3874[I]._fU0, 1 );
            }
            CLEAR_SEQUENCE_TASK( uVar3 );
        }
    }
    return;
}

int sub_54621()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
        {
            if (DOES_OBJECT_EXIST( l_U4715 ))
            {
                GET_CHAR_COORDINATES( sub_3454(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                sub_33408( l_U4715, uVar2, ref uVar5 );
                if ((uVar5._fU4 > 10.00000000) || ((uVar5._fU4 < -23.00000000) || ((uVar5._fU0 > 6.50000000) || (uVar5._fU0 < -6.50000000))))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_55372()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;

    sub_18749( 0 );
    if (DOES_BLIP_EXIST( l_U4981 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4981 );
    }
    if (DOES_BLIP_EXIST( l_U4982 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4982 );
    }
    if (DOES_BLIP_EXIST( l_U4983 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4983 );
    }
    if (DOES_BLIP_EXIST( l_U5145 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U5145 );
    }
    switch (l_U5146)
    {
        case 0:
        PRINT_NOW( "YS1_DES", 7000, 1 );
        sub_55589( 2, "E2Y1_CDAMG", "E2Y1AUD", 0 );
        GET_GAME_TIMER( ref l_U5151 );
        break;
        case 2:
        PRINT_NOW( "YS1_ESC", 7000, 1 );
        sub_55589( 2, "E2Y1_CESCP", "E2Y1AUD", 0 );
        break;
        case 1:
        PRINT_NOW( "YS1_ABN", 7000, 1 );
        sub_55589( 2, "E2Y1_CFAIL", "E2Y1AUD", 0 );
        break;
        case 3:
        PRINT_NOW( "B3_FGEN", 7000, 1 );
        SCRIPT_ASSERT( "Place holder fail text called. Was F key pressed?" );
        break;
    }
    if (l_U5146 == 0)
    {
        STOP_SOUND( l_U4882 );
        if (l_U5150)
        {
            if (NOT (IS_CHAR_DEAD( sub_3454() )))
            {
                if ((sub_33251( 0 )) || ((IS_CHAR_IN_WATER( sub_3454() )) || (IS_CHAR_IN_ANY_CAR( sub_3454() ))))
                {
                    while ((NOT (sub_36871( l_U5151, 7000 ))) || (IS_MESSAGE_BEING_DISPLAYED()))
                    {
                        WAIT( 0 );
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3454(), ref uVar2 );
                        if (IS_CAR_IN_WATER( uVar2 ))
                        {
                            iVar4 = 1;
                        }
                    }
                    else if (IS_CHAR_IN_WATER( sub_3454() ))
                    {
                        iVar4 = 1;
                    }
                    if (sub_33251( 0 ))
                    {
                        iVar4 = 1;
                    }
                    if (iVar4 == 1)
                    {
                        SET_PLAYER_CONTROL( sub_14417(), 0 );
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        LOAD_SCENE( -387.96360000, -474.84330000, 3.34180000 );
                        sub_56788( 1 );
                        sub_57210( 1 );
                        if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
                        {
                            WARP_CHAR_FROM_CAR_TO_COORD( sub_3454(), -387.96360000, -474.84330000, 3.34180000 );
                        }
                        else
                        {
                            SET_CHAR_COORDINATES( sub_3454(), -387.96360000, -474.84330000, 3.34180000 );
                        }
                        SET_CHAR_HEADING( sub_3454(), 126.91970000 );
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        SET_PLAYER_CONTROL( sub_14417(), 1 );
                        WAIT( 500 );
                        DO_SCREEN_FADE_IN( 500 );
                    }
                }
            }
        }
    }
    sub_58057();
    sub_3445();
    return;
}

void sub_55589(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_55633( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_55633(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

    if (g_U43133)
    {
        PRINTSTRING( "KGM........End of mission call blocked because the mission is being repeated\n" );
        return;
    }
    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U818 )))
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
        g_U817 = 1;
        g_U818 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_56788(boolean bParam0)
{
    int I;

    for ( I = 0; I < l_U746; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U746[I]._fU0 ))
        {
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, l_U746[I]._fU88._fU12, l_U746[I]._fU88._fU4 );
            DELETE_OBJECT( ref l_U746[I]._fU0 );
        }
        if (DOES_OBJECT_EXIST( l_U746[I]._fU4 ))
        {
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, l_U746[I]._fU88._fU20, l_U746[I]._fU88._fU4 );
            REMOVE_PTFX( l_U746[I]._fU112._fU0 );
            DELETE_OBJECT( ref l_U746[I]._fU4 );
        }
    }
    if (bParam0)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2075782048 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1239854102 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1930762713 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1233545547 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1005833766 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 67157199 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 518033353 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1366166054 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1595218282 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2120126803 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1789985121 );
    }
    return;
}

void sub_57210(boolean bParam0)
{
    int I;

    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1141632236, -28737275 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1313618655, -1366882930 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -740515878, -1143889885 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 256624776, -1143889885 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -529900459, -855358840 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 163992799, -855358840 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1031741483, -530945740 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -285371601, -530945740 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 13155365, 1993446944 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 288897752, 1993446944 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -843141289, 459792206 );
    SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -670316162, 459792206 );
    I = 0;
    for ( I = 0; I < g_U43011; I++ )
    {
        if (bParam0)
        {
            if (DOES_OBJECT_EXIST( g_U43011[I] ))
            {
                DELETE_OBJECT( ref g_U43011[I] );
            }
        }
        g_U43011[I] = nil;
    }
    for ( I = 0; I < g_U43018; I++ )
    {
        if (bParam0)
        {
            if (DOES_OBJECT_EXIST( g_U43018[I] ))
            {
                DELETE_OBJECT( ref g_U43018[I] );
            }
        }
        g_U43018[I] = nil;
    }
    return;
}

void sub_58057()
{
    int iVar2;

    iVar2 = 2;
    sub_58071( iVar2 );
    sub_2428( iVar2 );
    return;
}

void sub_58071(unknown uParam0)
{
    if (g_U12382[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_14417(), 150 );
    CLEAR_HELP();
    sub_1142( uParam0 );
    return;
}

void sub_58311()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U4972, -2.30580000, 40.00000000, 0.25090000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U4972, 2.30580000, 40.00000000, 0.25090000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
        {
            if (NOT l_U4965)
            {
                if (DOES_BLIP_EXIST( l_U4982 ))
                {
                    CLEAR_THIS_PRINT( "YS1_BHEL" );
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4982 );
                    if (NOT (DOES_BLIP_EXIST( l_U4981 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, ref l_U4981 );
                        CHANGE_BLIP_DISPLAY( l_U4981, 2 );
                        CHANGE_BLIP_COLOUR( l_U4981, 1 );
                    }
                    if ((NOT sub_58572()) AND (NOT l_U5323))
                    {
                        l_U5323 = 1;
                    }
                }
                if (l_U5320)
                {
                    if (l_U5318)
                    {
                        l_U5320 = 0;
                    }
                }
            }
            else
            {
                sub_18749( 1 );
                if (DOES_BLIP_EXIST( l_U4982 ))
                {
                    CLEAR_THIS_PRINT( "YS1_BHEL" );
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4982 );
                }
            }
            if (sub_58572())
            {
                GET_GAME_TIMER( ref l_U4963 );
                sub_18749( 0 );
                sub_39605( "E2Y1_KILLALL", ref l_U4762, 6, 1 );
                GET_GAME_TIMER( ref l_U5191 );
                l_U5186 = 1;
                l_U745 = 4;
                l_U5184 = 0;
                l_U5188 = 0;
                l_U5187 = 0;
                l_U4869 = 0;
                l_U5192 = 0;
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U4982 )))
        {
            ADD_BLIP_FOR_CAR( l_U4972, ref l_U4982 );
            sub_35928( l_U4982 );
            SET_BLIP_AS_FRIENDLY( l_U4982, 1 );
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U5145 );
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4981 );
            sub_18749( 0 );
            CLEAR_THIS_PRINT( "YS1_DESB" );
            if (NOT l_U5321)
            {
                if ((l_U5192 == 0) || (l_U4777))
                {
                    PRINT_NOW( "YS1_BHEL", 7500, 1 );
                    l_U5321 = 1;
                }
                else
                {
                    l_U5320 = 1;
                }
            }
        }
        else if (l_U5320)
        {
            if (l_U4777)
            {
                PRINT_NOW( "YS1_BHEL", 7500, 1 );
                l_U5321 = 1;
            }
        };;;
    }
    sub_59042();
    if (l_U4965)
    {
        if (sub_77045())
        {
            sub_82027();
            sub_87864();
        }
    }
    if (l_U5186)
    {
        sub_65250();
    }
    return;
}

int sub_58572()
{
    if ((l_U5156) AND (l_U5155))
    {
        return 1;
    }
    return 0;
}

void sub_59042()
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
    unknown uVar11;
    int I;
    int iVar13;

    switch (l_U5316)
    {
        case 1:
        if (NOT l_U4777)
        {
            switch (l_U5192)
            {
                case 0:
                if (sub_59142( 2, "E2Y1_CCHOP", "E2Y1AUD" ))
                {
                    l_U5192++;
                    sub_14667( 4 );
                    for ( I = 0; I < l_U4280; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U4280[I]._fU0 ))
                        {
                            DELETE_CHAR( ref l_U4280[I]._fU0 );
                        }
                    }
                    for ( I = 0; I < l_U3874; I++ )
                    {
                        sub_30294( ref l_U3874[I] );
                        if (DOES_CHAR_EXIST( l_U3874[I]._fU0 ))
                        {
                            DELETE_CHAR( ref l_U3874[I]._fU0 );
                        }
                    }
                    sub_14667( 16 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3844 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3845 );
                    l_U4889 = 1;
                    l_U5317 = 1;
                }
                break;
                case 1:
                if ((sub_62757() == 2) || (sub_62496( 0 )))
                {
                    l_U5192++;
                }
                break;
                case 2:
                if (DOES_BLIP_EXIST( l_U5145 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U5145 );
                }
                l_U4777 = 1;
                l_U5245 = 1;
                g_U43104[15] = 3;
                break;
            }
        }
        else if (NOT l_U5318)
        {
            if (NOT (IS_CAR_DEAD( l_U4972 )))
            {
                if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U4981 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U1743._fU0, l_U1743._fU4, l_U1743._fU8, ref l_U4981 );
                        CHANGE_BLIP_DISPLAY( l_U4981, 2 );
                        CHANGE_BLIP_COLOUR( l_U4981, 1 );
                        GET_GAME_TIMER( ref l_U5265 );
                        PRINT_NOW( "YS1_DESB", 7500, 1 );
                        l_U5318 = 1;
                    }
                    else if (l_U5320)
                    {
                        if (l_U5321)
                        {
                            if (NOT l_U5318)
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    PRINT_NOW( "YS1_DESB", 7500, 1 );
                                    l_U5320 = 0;
                                    l_U5318 = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (NOT l_U5195)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT (IS_CAR_DEAD( l_U4972 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_3454(), l_U4972 ))
                    {
                        PRINT_HELP( "YS1_WHEL" );
                        l_U5195 = 1;
                    }
                }
            }
        };;;
        if (l_U5317)
        {
            iVar13 = sub_63258( ref uVar9 );
            if (iVar13 > -1)
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_SHOOT_AT_COORD( 0, uVar9._fU0, uVar9._fU4, uVar9._fU8, 5000, 2 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                if (NOT (IS_CHAR_INJURED( l_U3874[iVar13]._fU0 )))
                {
                    if (NOT l_U3874[iVar13]._fU4)
                    {
                        TASK_PERFORM_SEQUENCE( l_U3874[iVar13]._fU0, uVar2 );
                        GET_GAME_TIMER( ref l_U5265 );
                        if (NOT l_U5319)
                        {
                            PLAY_SOUND_FRONTEND( l_U4879, "Y1_SEXY_TIME_WARNING_MISSILE_LOCK_DETECTED" );
                            l_U5319 = 1;
                        }
                        else
                        {
                            PLAY_SOUND_FRONTEND( l_U4879, "Y1_SEXY_TIME_WARNING" );
                        }
                        l_U4768 = 1;
                        l_U3874[iVar13]._fU72 = 0;
                        l_U5233 = 1;
                    }
                }
                CLEAR_SEQUENCE_TASK( uVar2 );
            }
            for ( I = 0; I < l_U3874; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                {
                    if (NOT l_U3874[I]._fU4)
                    {
                        if (NOT l_U3874[I]._fU72)
                        {
                            if (sub_43468( l_U3874[I]._fU0, 1, 0 ))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar2 );
                                TASK_AIM_GUN_AT_CHAR( 0, sub_3454(), 9999999 );
                                CLOSE_SEQUENCE_TASK( uVar2 );
                                TASK_PERFORM_SEQUENCE( l_U3874[I]._fU0, uVar2 );
                                CLEAR_SEQUENCE_TASK( uVar2 );
                                l_U3874[I]._fU72 = 1;
                            }
                        }
                    }
                }
            }
            sub_65250();
            sub_65931();
            sub_70263();
            sub_70612();
            sub_72531();
            if (l_U5295)
            {
                if ((l_U5296 == 0) || (sub_36871( l_U5296, 5000 )))
                {
                    if (sub_38888())
                    {
                        if (NOT g_U3)
                        {
                            sub_39605( "E2Y1_SHITU", ref l_U4762, 6, 1 );
                        }
                        GET_GAME_TIMER( ref l_U5296 );
                        l_U5295 = 0;
                    }
                }
                else
                {
                    l_U5295 = 0;
                }
            }
            if (l_U4768)
            {
                if ((NOT l_U4769) || (sub_36871( l_U4775, 10000 )))
                {
                    if (sub_38888())
                    {
                        if (HAS_SOUND_FINISHED( l_U4879 ))
                        {
                            sub_39605( "E2Y1_SHOTA", ref l_U4762, 6, 1 );
                            GET_GAME_TIMER( ref l_U4775 );
                            if (NOT l_U4769)
                            {
                                l_U4769 = 1;
                            }
                            l_U4768 = 0;
                        }
                    }
                }
                else
                {
                    l_U4768 = 0;
                }
            }
            if (sub_75173())
            {
                if (l_U4777)
                {
                    if (sub_36871( l_U5257, l_U5263 ))
                    {
                        if (DOES_BLIP_EXIST( l_U4981 ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4981 );
                        }
                        if (NOT l_U5201)
                        {
                            l_U5236 = 0;
                        }
                        l_U4965 = 1;
                        l_U5321 = 0;
                        l_U5316 = 2;
                    }
                }
            }
        }
        break;
        default:
    }
    if (l_U5322)
    {
        sub_45512();
    }
    if (l_U5161)
    {
        sub_76365();
    }
    return;
}

void sub_59142(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_59200( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_59200(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U95._fU540)
    {
        return 0;
    }
    sub_39015( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 >= 6)
        {
            sub_39015( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_14417() )))
    {
        sub_39015( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3454() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3454() )))
    {
        sub_39015( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_39015( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_59715()))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU48 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
        case 1:
        if (g_U95._fU368)
        {
            if ((NOT bParam8) || (g_U95._fU372))
            {
                sub_39015( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U95._fU60 != -1)
        {
            if ((g_U16014[g_U95._fU60]._fU212._fU24 != 4) AND (g_U16014[g_U95._fU60]._fU212._fU24 != 5))
            {
                g_U16014[g_U95._fU60]._fU212._fU24 = 0;
            }
        }
        g_U95._fU368 = 1;
        g_U95._fU372 = bParam8;
        uParam0 = g_U95._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_59715()))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU52 = 1;
        g_U95._fU56 = 1;
        g_U95._fU372 = 1;
        g_U95._fU368 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_61087( uParam0, ref g_U95._fU176 );
    sub_61747( ref g_U95._fU160 );
    g_U95._fU380 = uParam10;
    g_U95._fU376 = bParam11;
    g_U95._fU420 = uParam12;
    g_U95._fU424 = -1;
    g_U95._fU364 = uParam3;
    StrCopy( ref g_U95._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8972[I] = {(uParam1^)[I]};
        sub_6048( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U95._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U95._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U95._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U95._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U95._fU208, uParam6, 16 );
    g_U95._fU80 = uParam7;
    g_U95._fU384 = 0;
    g_U95._fU532 = uParam13;
    g_U8867 = 4;
    return 1;
}

int sub_59715()
{
    if ((g_U95._fU52) || (g_U95._fU48))
    {
        return 0;
    }
    if (g_U95._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_59772())
    {
        return 0;
    }
    if (g_U560 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_59772()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_14417() )))
    {
        sub_39015( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_39015( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U95._fU376)
    {
        sub_39015( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U95._fU104) || (g_U95._fU100))
    {
        sub_39015( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_14417() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3454() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3454(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_39015( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3454() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_39015( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_39015( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_14417() )))
    {
        sub_39015( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_61087(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "TONY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "MORI", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "YUSUF", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ARMANDO", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ADRIANA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "BULGARIN", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ROCCO", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "HENRIQUE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "reserve1", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "ASSISTANT", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "DESSIE", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "JOJO", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "TAYLOR", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "VIKKY", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "ANA", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "DANA", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "CINDY", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "TANIA", 32 );
        break;
        case 23:
        StrCopy( (uParam1^), "LILY", 32 );
        break;
        case 24:
        StrCopy( (uParam1^), "TAMI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DOMINO", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "HEIDI", 32 );
        break;
        case 27:
        StrCopy( (uParam1^), "SIMONE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_61747(unknown uParam0)
{
    StrCopy( (uParam0^), "LUIS", 16 );
    return;
}

int sub_62496(boolean bParam0)
{
    unknown uVar3;

    if (g_U95._fU60 != -1)
    {
        switch (g_U16014[g_U95._fU60]._fU212._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U95._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_3454(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_39015( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_62757()
{
    if (g_U95._fU60 != -1)
    {
        return g_U16014[g_U95._fU60]._fU212._fU24;
    }
    return 6;
}

void sub_63258(unknown uParam0)
{
    int I;
    int Result;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    float fVar47;
    float fVar48;

    Result = -1;
    fVar47 = 1000.00000000;
    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
        {
            for ( I = 0; I < l_U3874; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                {
                    if (sub_36871( l_U5265, 5000 ))
                    {
                        if (IS_CHAR_ON_SCREEN( l_U3874[I]._fU0 ))
                        {
                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), l_U3874[I]._fU0, 180.00000000, 180.00000000, 180.00000000, 0 )) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), l_U3874[I]._fU0, 40.00000000, 40.00000000, 40.00000000, 0 ))))
                            {
                                if ((l_U3874[I]._fU72) || (sub_43468( l_U3874[I]._fU0, 1, 0 )))
                                {
                                    GET_CHAR_COORDINATES( sub_3454(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                                    uVar14 = {sub_63544()};
                                    sub_33408( l_U4715, uVar14, ref uVar8 );
                                    if (sub_63733( uVar8, l_U3874[I] ))
                                    {
                                        GET_CHAR_COORDINATES( l_U3874[I]._fU0, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                                        GET_CAR_COORDINATES( l_U4972, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
                                        GET_DISTANCE_BETWEEN_COORDS_3D( uVar11._fU0, uVar11._fU4, uVar11._fU8, uVar17._fU0, uVar17._fU4, uVar17._fU8, ref fVar48 );
                                        if (fVar48 < fVar47)
                                        {
                                            fVar47 = fVar48;
                                            Result = I;
                                            (uParam0^) = {uVar14};
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return Result;
}

void sub_63544()
{
    float fVar2;
    float fVar3;
    unknown uVar4;
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    vector vVar11;
    unknown Result;
    unknown uVar15;
    unknown uVar16;

    fVar2 = 60;
    fVar3 = 100.00000000;
    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        GET_CAR_SPEED( l_U4972, ref uVar4 );
        GET_CAR_SPEED_VECTOR( l_U4972, ref vVar5, 1 );
        vVar11 = {vVar5 / (VMAG( vVar5 ))};
        uVar8 = {((uVar4 / fVar2) * fVar3) * vVar11};
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U4972, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    return Result;
}

int sub_63733(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29)
{
    int iVar32;

    iVar32 = sub_63746( uParam3._fU0 );
    if (iVar32 != 0)
    {
        if (((uParam0._fU8 <= l_U1765[iVar32]._fU52[1]._fU8) AND ((uParam0._fU8 >= l_U1765[iVar32]._fU24[1]._fU8) AND ((uParam0._fU4 <= l_U1765[iVar32]._fU52[1]._fU4) AND ((uParam0._fU4 >= l_U1765[iVar32]._fU24[1]._fU4) AND ((uParam0._fU0 <= l_U1765[iVar32]._fU52[1]._fU0) AND (uParam0._fU0 >= l_U1765[iVar32]._fU24[1]._fU0)))))) || ((uParam0._fU8 <= l_U1765[iVar32]._fU52[0]._fU8) AND ((uParam0._fU8 >= l_U1765[iVar32]._fU24[0]._fU8) AND ((uParam0._fU4 <= l_U1765[iVar32]._fU52[0]._fU4) AND ((uParam0._fU4 >= l_U1765[iVar32]._fU24[0]._fU4) AND ((uParam0._fU0 <= l_U1765[iVar32]._fU52[0]._fU0) AND (uParam0._fU0 >= l_U1765[iVar32]._fU24[0]._fU0)))))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_63746(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        sub_33408( l_U4715, uVar3, ref uVar6 );
        if ((sub_63818( uVar6, ref l_U1765[1] )) AND (sub_63818( uVar6, ref l_U1765[2] )))
        {
            Result = 5;
        }
        else if ((sub_63818( uVar6, ref l_U1765[1] )) AND (sub_63818( uVar6, ref l_U1765[3] )))
        {
            Result = 6;
        }
        else if ((sub_63818( uVar6, ref l_U1765[4] )) AND (sub_63818( uVar6, ref l_U1765[3] )))
        {
            Result = 8;
        }
        else if ((sub_63818( uVar6, ref l_U1765[4] )) AND (sub_63818( uVar6, ref l_U1765[2] )))
        {
            Result = 7;
        }
        else if (sub_63818( uVar6, ref l_U1765[2] ))
        {
            Result = 2;
        }
        else if (sub_63818( uVar6, ref l_U1765[3] ))
        {
            Result = 3;
        }
        else if (sub_63818( uVar6, ref l_U1765[1] ))
        {
            Result = 1;
        }
        else if (sub_63818( uVar6, ref l_U1765[4] ))
        {
            Result = 4;
        };;;;;;;;
    }
    if (Result == 0)
    {
        ;
    }
    return Result;
}

int sub_63818(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3)
{
    if ((uParam0._fU8 <= (ref iParam3->_fU12->_fU8)) AND ((uParam0._fU4 <= (ref iParam3->_fU12->_fU4)) AND ((uParam0._fU0 <= (ref iParam3->_fU12->_fU0)) AND ((uParam0._fU8 >= (ref iParam3->_fU0->_fU8)) AND ((uParam0._fU4 >= (ref iParam3->_fU0->_fU4)) AND (uParam0._fU0 >= (ref iParam3->_fU0->_fU0)))))))
    {
        return 1;
    }
    return 0;
}

void sub_65250()
{
    float fVar2;
    unknown uVar3;
    int I;
    int iVar5;
    boolean bVar6;

    fVar2 = 90.00000000;
    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
        {
            switch (l_U5235)
            {
                case 0:
                if (sub_65339( 200.00000000 ))
                {
                    if (HAS_SOUND_FINISHED( l_U4879 ))
                    {
                        PLAY_SOUND_FRONTEND( l_U4878, "Y1_SEXY_TIME_MISSILE_BEEPS" );
                        SET_VARIABLE_ON_SOUND( l_U4878, "MissileDistance", 100 );
                        l_U5235++;
                    }
                }
                break;
                case 1:
                if (l_U5233)
                {
                    if (sub_65339( 90.00000000 ))
                    {
                        for ( I = 0; I <= (FLOOR( fVar2 )); I++ )
                        {
                            if (NOT bVar6)
                            {
                                if (sub_65339( TO_FLOAT( I ) ))
                                {
                                    uVar3 = TO_FLOAT( I );
                                    SET_VARIABLE_ON_SOUND( l_U4878, "MissileDistance", uVar3 );
                                    l_U5234 = 1;
                                    bVar6 = true;
                                }
                            }
                        }
                    }
                    else if (sub_65339( TO_FLOAT( 200 ) ))
                    {
                        SET_VARIABLE_ON_SOUND( l_U4878, "MissileDistance", 100 );
                        l_U5234 = 1;
                    }
                    else
                    {
                        iVar5 = 1;
                    }
                }
                if ((l_U5234) AND (iVar5))
                {
                    STOP_SOUND( l_U4878 );
                    l_U5234 = 0;
                    l_U5235 = 0;
                }
                break;
            }
        }
        else
        {
            STOP_SOUND( l_U4878 );
            STOP_SOUND( l_U4879 );
        }
    }
    return;
}

int sub_65339(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
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
    vector vVar25;
    vector vVar28;
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
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;

    vVar25 = {uParam0, uParam0, uParam0};
    vVar28 = {-uParam0, -uParam0, -uParam0};
    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        GET_CAR_HEADING( l_U4972, ref uVar3 );
        GET_CAR_COORDINATES( l_U4972, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar13 = {vVar10 + vVar25};
        uVar16 = {vVar10 + vVar28};
        FLUSH_SCENARIO_BLOCKING_AREAS();
        ADD_SCENARIO_BLOCKING_AREA( uVar13, uVar16 );
        if (GET_IS_PROJECTILE_TYPE_IN_AREA( uVar13._fU0, uVar13._fU4, uVar13._fU8, uVar16._fU0, uVar16._fU4, uVar16._fU8, 6 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_65931()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    for ( I = 0; I < l_U3874; I++ )
    {
        if (IS_CHAR_INJURED( l_U3874[I]._fU0 ))
        {
            if (NOT l_U3874[I]._fU56)
            {
                sub_14209( I, "Clearing ped...." );
                sub_66032( ref l_U3874[I] );
                l_U3874[I]._fU56 = 1;
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
        {
            if (LOCATE_CHAR_IN_CAR_3D( sub_3454(), -1133.33700000, -987.10200000, 6.51387900, 300.00000000, 300.00000000, 300.00000000, 0 ))
            {
                if (l_U5264)
                {
                    for ( I = 0; I < l_U3874; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                        {
                            l_U3874[I]._fU4 = 0;
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U3874[I]._fU0 );
                            SET_CHAR_DECISION_MAKER( l_U3874[I]._fU0, l_U4876 );
                            if (HAS_CHAR_GOT_WEAPON( l_U3874[I]._fU0, 18 ))
                            {
                                SET_CURRENT_CHAR_WEAPON( l_U3874[I]._fU0, 18, 1 );
                            }
                            REMOVE_CHAR_DEFENSIVE_AREA( l_U3874[I]._fU0 );
                        }
                    }
                    l_U5264 = 0;
                }
                sub_66703();
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1108.28700000, -982.51030000, 8.33730000, 300.00000000, 300.00000000, 300.00000000, 0 ))
        {
            for ( I = 0; I < l_U3874; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
                {
                    if (NOT l_U3874[I]._fU4)
                    {
                        GIVE_WEAPON_TO_CHAR( l_U3874[I]._fU0, 15, 3000, 1 );
                        SET_CURRENT_CHAR_WEAPON( l_U3874[I]._fU0, 15, 1 );
                        GET_CHAR_COORDINATES( l_U3874[I]._fU0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                        l_U3874[I]._fU40 = {uVar5};
                        l_U3874[I]._fU52 = 0;
                        l_U3874[I]._fU80 = l_U4873;
                        l_U3874[I]._fU4 = 1;
                        l_U5264 = 1;
                    }
                }
            }
        }
    }
    if (l_U5264)
    {
        sub_42765( ref l_U3874 );
    }
    return;
}

void sub_66032(unknown uParam0)
{
    int J;
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar5 = {sub_66043( uParam0 )};
    for ( J = 0; J < l_U1765; J++ )
    {
        for ( I = 0; I < 5; I++ )
        {
            if (sub_66292( l_U1765[J]._fU80[I]._fU0, uVar5 ))
            {
                l_U1765[J]._fU80[I]._fU12 = {l_U4686};
                return;
            }
        }
    }
    return;
}

void sub_66043(int iParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;
    int J;
    int I;
    boolean bVar8;

    for ( J = 0; J < l_U1765; J++ )
    {
        if (J > 0)
        {
            for ( I = 0; I < 5; I++ )
            {
                if (l_U1765[J]._fU80[I]._fU12._fU0 == iParam0->_fU0)
                {
                    Result = {l_U1765[J]._fU80[I]._fU0};
                    return Result;
                    bVar8 = true;
                }
            }
        }
    }
    if (NOT bVar8)
    {
        ;
    }
    else
    {
        sub_5598( "Got updaetd ok..." );
    }
    return Result;
}

boolean sub_66292(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return (uParam0._fU8 == uParam3._fU8) AND ((uParam0._fU4 == uParam3._fU4) AND (uParam0._fU0 == uParam3._fU0));
}

void sub_66703()
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
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    int iVar20;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    unknown uVar337;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;
    unknown uVar341;
    unknown uVar342;
    unknown uVar343;
    unknown uVar344;
    unknown uVar345;
    unknown uVar346;
    unknown uVar347;
    unknown uVar348;
    unknown uVar349;
    unknown uVar350;
    unknown uVar351;
    unknown uVar352;
    unknown uVar353;
    unknown uVar354;
    unknown uVar355;
    unknown uVar356;
    unknown uVar357;
    unknown uVar358;
    unknown uVar359;
    unknown uVar360;
    unknown uVar361;
    unknown uVar362;
    unknown uVar363;
    unknown uVar364;
    unknown uVar365;
    unknown uVar366;
    unknown uVar367;
    unknown uVar368;
    unknown uVar369;
    unknown uVar370;
    unknown uVar371;
    unknown uVar372;
    unknown uVar373;
    unknown uVar374;
    unknown uVar375;
    unknown uVar376;
    unknown uVar377;
    unknown uVar378;
    unknown uVar379;
    unknown uVar380;
    unknown uVar381;
    unknown uVar382;
    unknown uVar383;
    unknown uVar384;
    unknown uVar385;
    float fVar386;
    float fVar387;
    unknown uVar388;
    int I;
    unknown uVar390;
    unknown uVar391;
    unknown uVar392;
    unknown uVar393;
    unknown uVar394;

    array(ref uVar22._fU24, 2);
    array(ref uVar22._fU52, 2);
    array(ref uVar22._fU80, 5);
    ref uVar22;
    array(ref uVar204._fU24, 2);
    array(ref uVar204._fU52, 2);
    array(ref uVar204._fU80, 5);
    ref uVar204;
    for ( I = 0; I < l_U3874; I++ )
    {
        uVar2 = {sub_66787( 0 )};
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U3874[I]._fU0, sub_3454(), 40.00000000, 40.00000000, 40.00000000, 0 )))
                {
                    if (NOT l_U3874[I]._fU4)
                    {
                        GET_CAR_COORDINATES( l_U4972, ref uVar392._fU0, ref uVar392._fU4, ref uVar392._fU8 );
                        uVar22 = {sub_67517( uVar2 )};
                        uVar204 = {sub_67721( l_U3874[I] )};
                        uVar8 = {sub_66043( ref l_U3874[I] )};
                        if (sub_67941( ref uVar22, ref uVar204 ))
                        {
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4715, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4715, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( uVar14._fU0, uVar14._fU4, uVar14._fU8, uVar392._fU0, uVar392._fU4, uVar392._fU8, ref fVar386 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( uVar11._fU0, uVar11._fU4, uVar11._fU8, uVar392._fU0, uVar392._fU4, uVar392._fU8, ref fVar387 );
                            if (fVar387 < fVar386)
                            {
                                if (sub_36871( 10000, l_U3874[I]._fU68 ))
                                {
                                    if (l_U3874[I]._fU72)
                                    {
                                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4715, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                                        OPEN_SEQUENCE_TASK( ref uVar388 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar5._fU0, uVar5._fU4, uVar5._fU8, 3, -2, 0.50000000 );
                                        CLOSE_SEQUENCE_TASK( uVar388 );
                                        TASK_PERFORM_SEQUENCE( l_U3874[I]._fU0, uVar388 );
                                        l_U3874[I]._fU72 = 0;
                                        CLEAR_SEQUENCE_TASK( uVar388 );
                                        sub_68385( ref l_U3874[I], uVar2 );
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        SET_CHAR_DECISION_MAKER( l_U3874[I]._fU0, l_U4876 );
                        if (HAS_CHAR_GOT_WEAPON( l_U3874[I]._fU0, 18 ))
                        {
                            SET_CURRENT_CHAR_WEAPON( l_U3874[I]._fU0, 18, 1 );
                        }
                        REMOVE_CHAR_DEFENSIVE_AREA( l_U3874[I]._fU0 );
                        sub_53133( ref l_U3874[I], 1 );
                    }
                }
                else if (NOT l_U3874[I]._fU4)
                {
                    if ((l_U3874[I]._fU72) || (sub_43468( l_U3874[I]._fU0, 1, 0 )))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U3874[I]._fU0, 15, 3000, 1 );
                        SET_CURRENT_CHAR_WEAPON( l_U3874[I]._fU0, 15, 1 );
                        GET_CHAR_COORDINATES( l_U3874[I]._fU0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                        l_U3874[I]._fU40 = {uVar5};
                        l_U3874[I]._fU52 = 0;
                        l_U3874[I]._fU80 = l_U4873;
                        l_U3874[I]._fU4 = 1;
                        l_U3874[I]._fU72 = 0;
                    }
                }
            }
        }
    }
    uVar2 = {sub_66787( 1 )};
    uVar17 = {sub_66787( 0 )};
    if (sub_66292( uVar2, uVar17 ))
    {
        uVar22 = {sub_67517( uVar2 )};
        iVar20 = sub_69058( ref uVar22, uVar2, 1 );
        if (iVar20 > -1)
        {
            sub_68385( ref l_U3874[iVar20], uVar2 );
        }
    }
    else
    {
        uVar22 = {sub_67517( uVar17 )};
        iVar20 = sub_69058( ref uVar22, uVar2, 1 );
        if (iVar20 > -1)
        {
            sub_68385( ref l_U3874[iVar20], uVar2 );
        }
    }
    if (iVar20 > -1)
    {
        if (NOT (sub_66292( uVar2, 0.00000000, 0.00000000, 0.00000000 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U3874[iVar20]._fU0 )))
            {
                if (NOT (sub_69644( uVar2 )))
                {
                    if (l_U3874[iVar20]._fU72)
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4715, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                        OPEN_SEQUENCE_TASK( ref uVar388 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar5._fU0, uVar5._fU4, uVar5._fU8, 3, -2, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( uVar388 );
                        TASK_PERFORM_SEQUENCE( l_U3874[iVar20]._fU0, uVar388 );
                        l_U3874[iVar20]._fU72 = 0;
                        CLEAR_SEQUENCE_TASK( uVar388 );
                        sub_68385( ref l_U3874[iVar20], uVar2 );
                    }
                }
            }
        }
    }
    sub_42765( ref l_U3874 );
    return;
}

void sub_66787(boolean bParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    float fVar7;
    unknown Result;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    int J;
    int I;

    fVar6 = 1000.00000000;
    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        GET_CAR_COORDINATES( l_U4972, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        for ( J = 0; J < l_U1765; J++ )
        {
            if (J > 0)
            {
                for ( I = 0; I < 5; I++ )
                {
                    if (NOT l_U1765[J]._fU80[I]._fU124)
                    {
                        if (l_U1765[J]._fU80[I]._fU12._fU0 == l_U4686._fU0)
                        {
                            uVar14 = {l_U1765[J]._fU80[I]._fU0};
                            if (NOT (sub_66292( uVar14, 0.00000000, 0.00000000, 0.00000000 )))
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4715, uVar14._fU0, uVar14._fU4, uVar14._fU8, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                                GET_DISTANCE_BETWEEN_COORDS_3D( uVar3._fU0, uVar3._fU4, uVar3._fU8, uVar11._fU0, uVar11._fU4, uVar11._fU8, ref fVar7 );
                                if (((NOT (sub_67107( ref l_U1765[J] ))) AND (bParam0)) || (NOT bParam0))
                                {
                                    if (fVar7 < fVar6)
                                    {
                                        fVar6 = fVar7;
                                        Result = {uVar14};
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (sub_66292( Result, 0.00000000, 0.00000000, 0.00000000 ))
    {
        SCRIPT_ASSERT( "GET_CLOSEST_FREE_ATTACK_POSN_TO_HELI Going to 0....." );
    }
    return Result;
}

int sub_67107(int iParam0)
{
    int I;
    int iVar4;

    for ( I = 0; I < iParam0->_fU80; I++ )
    {
        if (iParam0->_fU80[I]._fU12._fU0 != l_U4686._fU0)
        {
            iVar4++;
        }
    }
    if (iVar4 > iParam0->_fU724)
    {
        return 1;
    }
    return 0;
}

void sub_67517(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    int J;
    int I;

    array(ref Result._fU24, 2);
    array(ref Result._fU52, 2);
    array(ref Result._fU80, 5);
    ref Result;
    for ( J = 0; J < l_U1765; J++ )
    {
        for ( I = 0; I < 5; I++ )
        {
            if (sub_66292( l_U1765[J]._fU80[I]._fU0, uParam0 ))
            {
                Result = {l_U1765[J]};
            }
        }
    }
    return Result;
}

void sub_67721(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26)
{
    unknown Result;
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
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    int J;
    int I;

    array(ref Result._fU24, 2);
    array(ref Result._fU52, 2);
    array(ref Result._fU80, 5);
    ref Result;
    for ( J = 0; J < l_U1765; J++ )
    {
        for ( I = 0; I < 5; I++ )
        {
            if (l_U1765[J]._fU80[I]._fU12._fU0 == uParam0._fU0)
            {
                Result = {l_U1765[J]};
            }
        }
    }
    return Result;
}

void sub_67941(int iParam0, int iParam1)
{
    return sub_66292( iParam0->_fU80[0]._fU0, iParam1->_fU80[0]._fU0 );
}

void sub_68385(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_66032( uParam0 );
    sub_68406( uParam0, uParam1 );
    return;
}

void sub_68406(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int J;
    int I;

    for ( J = 0; J < l_U1765; J++ )
    {
        for ( I = 0; I < 5; I++ )
        {
            if (sub_66292( l_U1765[J]._fU80[I]._fU0, uParam1 ))
            {
                l_U1765[J]._fU80[I]._fU12 = {(iParam0^)};
                GET_GAME_TIMER( iParam0 + 68 );
                if (l_U1765[J]._fU80[I]._fU124)
                {
                    SCRIPT_ASSERT( "Ped is going to disable pt!" );
                }
                return;
            }
        }
    }
    return;
}

void sub_69058(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, boolean bParam4)
{
    int I;
    int Result;
    float fVar9;
    float fVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;

    Result = -1;
    fVar9 = 1000.00000000;
    array(ref uVar16, 2);
    array(ref uVar26._fU24, 2);
    array(ref uVar26._fU52, 2);
    array(ref uVar26._fU80, 5);
    ref uVar26;
    if (bParam4)
    {
        for ( I = 0; I < l_U3874; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U3874[I]._fU0 )))
            {
                uVar26 = {sub_67721( l_U3874[I] )};
                if (NOT (sub_67941( ref uVar26, uParam0 )))
                {
                    if ((NOT l_U3874[I]._fU76) == 1)
                    {
                        if (sub_36871( 10000, l_U3874[I]._fU68 ))
                        {
                            if (l_U3874[I]._fU72)
                            {
                                if (NOT l_U3874[I]._fU4)
                                {
                                    uVar13 = {sub_66043( ref l_U3874[I] )};
                                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4715, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref uVar16[0]._fU0, ref uVar16[0]._fU4, ref uVar16[0]._fU8 );
                                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4715, uVar13._fU0, uVar13._fU4, uVar13._fU8, ref uVar16[1]._fU0, ref uVar16[1]._fU4, ref uVar16[1]._fU8 );
                                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar16[0]._fU0, uVar16[0]._fU4, uVar16[0]._fU8, uVar16[1]._fU0, uVar16[1]._fU4, uVar16[1]._fU8, ref fVar10 );
                                    if (fVar10 < fVar9)
                                    {
                                        Result = I;
                                        fVar9 = fVar10;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return Result;
}

int sub_69644(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int J;
    int I;

    for ( J = 0; J < l_U1765; J++ )
    {
        for ( I = 0; I < 5; I++ )
        {
            if (sub_66292( l_U1765[J]._fU80[I]._fU0, uParam0 ))
            {
                if (l_U1765[J]._fU80[I]._fU124)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_70263()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT l_U5201)
    {
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
            {
                if (l_U5204)
                {
                    if (NOT l_U5205)
                    {
                        PLAY_SOUND_FRONTEND( l_U4882, "HELICOPTER_ALARM_TONES" );
                        l_U5205 = 1;
                    }
                }
                GET_CHAR_COORDINATES( sub_3454(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if (IS_EXPLOSION_IN_SPHERE( -1, uVar2._fU0, uVar2._fU4, uVar2._fU8, 10.00000000 ))
                {
                    l_U5236++;
                    if (l_U5236 > 35)
                    {
                        SET_CAR_PROOFS( l_U4972, 0, 0, 0, 0, 0 );
                        SET_CAR_HEALTH( l_U4972, 50000 );
                        l_U5201 = 1;
                    }
                    else if (l_U5236 > 30)
                    {
                        if (NOT l_U5202)
                        {
                            SET_ENGINE_HEALTH( l_U4972, 100 );
                            l_U5204 = 1;
                        }
                    }
                }
            }
            else if (l_U5205)
            {
                STOP_SOUND( l_U4882 );
                l_U5205 = 0;
            }
        }
        else
        {
            STOP_SOUND( l_U4882 );
        }
    }
    return;
}

void sub_70612()
{
    int J;
    int iVar3;
    int I;
    float fVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    for ( J = 0; J < l_U746; J++ )
    {
        if (J > 0)
        {
            if (DOES_OBJECT_EXIST( l_U746[J]._fU0 ))
            {
                GET_OBJECT_HEALTH( l_U746[J]._fU0, ref fVar5 );
                if (fVar5 <= l_U746[J]._fU80)
                {
                    if (NOT l_U1747)
                    {
                        for ( I = 0; I < 5; I++ )
                        {
                            if (NOT (sub_66292( l_U746[J]._fU8[I], 0.00000000, 0.00000000, 0.00000000 )))
                            {
                                uVar7 = {l_U746[J]._fU8[I]};
                                ADD_EXPLOSION( uVar7._fU0, uVar7._fU4, uVar7._fU8, 20, 1.00000000, 1, 0, 1.00000000 );
                            }
                        }
                        if (NOT l_U5294)
                        {
                            if ((J == 4) || ((J == 3) || (J == 2)))
                            {
                                STOP_SOUND( l_U4881 );
                                l_U5294 = 1;
                            }
                        }
                        DELETE_OBJECT( ref l_U746[J]._fU0 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U746[J]._fU72 );
                        CREATE_OBJECT_NO_OFFSET( l_U746[J]._fU76, l_U1759._fU0, l_U1759._fU4, l_U1759._fU8, ref l_U746[J]._fU4, 1 );
                        g_U43018[J] = l_U746[J]._fU4;
                        SET_OBJECT_ROTATION( l_U746[J]._fU4, l_U1762._fU0, l_U1762._fU4, l_U1762._fU8 );
                        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, l_U746[J]._fU88._fU12, l_U746[J]._fU88._fU20 );
                        uVar13 = l_U746[J]._fU112._fU4;
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U746[J]._fU4, l_U746[J]._fU112._fU8._fU0, l_U746[J]._fU112._fU8._fU4, l_U746[J]._fU112._fU8._fU8, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                        uVar14 = l_U746[J]._fU112._fU20;
                        l_U746[J]._fU112._fU0 = START_PTFX( uVar13, uVar10, 0.00000000, 0.00000000, 0.00000000, uVar14 );
                        FREEZE_OBJECT_POSITION( l_U746[J]._fU4, 1 );
                        sub_71320( J );
                        l_U5295 = 1;
                    }
                }
            }
        }
    }
    iVar3 = sub_71557();
    if (DOES_OBJECT_EXIST( l_U746[0]._fU0 ))
    {
        GET_OBJECT_HEALTH( l_U746[0]._fU0, ref fVar6 );
    }
    if (iVar3 == 0)
    {
        if (fVar6 > 0.00000000)
        {
            if (fVar6 < 85000.00000000)
            {
                if (DOES_OBJECT_EXIST( l_U746[3]._fU0 ))
                {
                    SET_OBJECT_HEALTH( l_U746[3]._fU0, l_U746[3]._fU80 - 10.00000000 );
                }
            }
        }
    }
    if (NOT l_U5287)
    {
        if (l_U5284 == 0)
        {
            if (iVar3 >= 2)
            {
                GET_GAME_TIMER( ref l_U5284 );
                if (fVar6 > 0)
                {
                    l_U5285 = fVar6;
                }
            }
        }
        else if (DOES_OBJECT_EXIST( l_U746[5]._fU0 ))
        {
            if ((sub_36871( l_U5284, 30000 )) || (((l_U5285 - fVar6) > 10000) AND (sub_36871( l_U5284, 5000 ))))
            {
                if (DOES_OBJECT_EXIST( l_U746[1]._fU0 ))
                {
                    SET_OBJECT_HEALTH( l_U746[1]._fU0, l_U746[5]._fU80 - 10.00000000 );
                }
                l_U5287 = 1;
            }
        }
    }
    if (l_U5288)
    {
        if (NOT l_U5289[0])
        {
            if (DOES_OBJECT_EXIST( l_U746[5]._fU0 ))
            {
                GET_OBJECT_HEALTH( l_U746[5]._fU0, ref l_U5286 );
            }
            ADD_EXPLOSION( -1124.18000000, -988.45640000, 6.60346200, 0, 1.00000000, 1, 0, 1.00000000 );
            GET_GAME_TIMER( ref l_U5293 );
            SET_OBJECT_HEALTH( l_U746[5]._fU0, 100000 );
            l_U5289[0] = 1;
        }
        else if (NOT l_U5289[1])
        {
            if (sub_36871( l_U5293, 700 ))
            {
                ADD_EXPLOSION( -1121.66400000, -984.53880000, 6.58497900, 0, 1.00000000, 1, 0, 1.00000000 );
                GET_GAME_TIMER( ref l_U5293 );
                if (DOES_OBJECT_EXIST( l_U746[5]._fU0 ))
                {
                    SET_OBJECT_HEALTH( l_U746[5]._fU0, 100000 );
                }
                l_U5289[1] = 1;
            }
        }
        else if (NOT l_U5289[2])
        {
            if (sub_36871( l_U5293, 400 ))
            {
                ADD_EXPLOSION( -1118.66200000, -986.02350000, 6.80217200, 0, 1.00000000, 1, 0, 1.00000000 );
                GET_GAME_TIMER( ref l_U5293 );
                if (DOES_OBJECT_EXIST( l_U746[5]._fU0 ))
                {
                    SET_OBJECT_HEALTH( l_U746[5]._fU0, 10000 );
                }
                l_U5289[2] = 1;
            }
        }
        else if (sub_36871( l_U5293, 500 ))
        {
            if (DOES_OBJECT_EXIST( l_U746[5]._fU0 ))
            {
                SET_OBJECT_HEALTH( l_U746[5]._fU0, l_U746[5]._fU80 - 10.00000000 );
            }
            l_U5288 = 0;
        };;;;
    }
    return;
}

void sub_71320(unknown uParam0)
{
    unknown uVar3;

    switch (uParam0)
    {
        case 1:
        l_U1765[1]._fU80[0]._fU124 = 1;
        l_U1765[1]._fU80[1]._fU124 = 1;
        l_U1765[1]._fU80[2]._fU124 = 1;
        l_U1765[1]._fU80[4]._fU124 = 1;
        break;
        case 5:
        l_U1765[4]._fU80[1]._fU124 = 1;
        l_U1765[4]._fU80[2]._fU124 = 1;
        l_U1765[4]._fU80[4]._fU124 = 1;
        break;
    }
    return;
}

void sub_71557()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I < l_U746; I++ )
    {
        if (I > 0)
        {
            if (DOES_OBJECT_EXIST( l_U746[I]._fU4 ))
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_72531()
{
    int J;
    int I;
    int iVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;
    unknown uVar8;
    float fVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    for ( J = 0; J < l_U746; J++ )
    {
        if (DOES_OBJECT_EXIST( l_U746[J]._fU4 ))
        {
            iVar4 = l_U746[J]._fU388._fU0;
            if (iVar6 <= 4)
            {
                for ( I = 0; I < iVar4; I++ )
                {
                    if ((l_U746[J]._fU388._fU4 == 0) || (sub_36871( l_U746[J]._fU388._fU4, 5000 )))
                    {
                        if (NOT l_U746[J]._fU388._fU100[I])
                        {
                            if (NOT (sub_66292( l_U746[J]._fU388._fU28[I], 0.00000000, 0.00000000, 0.00000000 )))
                            {
                                if (sub_72759( ref l_U746[J] ))
                                {
                                    l_U746[J]._fU388._fU100[I] = 1;
                                    l_U746[J]._fU388._fU140[I] = 0;
                                    l_U746[J]._fU388._fU180[I] = 0;
                                    l_U746[J]._fU388._fU256[I] = 0;
                                    GET_GAME_TIMER( ref l_U746[J]._fU388._fU4 );
                                }
                            }
                        }
                    }
                }
            }
            for ( I = 0; I < iVar4; I++ )
            {
                if (l_U746[J]._fU388._fU100[I])
                {
                    uVar11 = {l_U746[J]._fU388._fU28[I]};
                    uVar10 = l_U746[J]._fU388._fU80[I];
                    uVar8 = l_U746[J]._fU388._fU120[I];
                    switch (l_U746[J]._fU388._fU256[I])
                    {
                        case 0:
                        if (sub_3576( uVar11, 1.00000000 ))
                        {
                            l_U746[J]._fU388._fU8[I] = sub_18162( l_U3841, 24, uVar11, uVar10, 0, 1 );
                            SET_CHAR_PROOFS( l_U746[J]._fU388._fU8[I], 0, 0, 1, 0, 0 );
                            STOP_PED_SPEAKING( l_U746[J]._fU388._fU8[I], 0 );
                            START_CHAR_FIRE( l_U746[J]._fU388._fU8[I] );
                            SET_CHAR_PROOFS( l_U746[J]._fU388._fU8[I], 0, 1, 1, 1, 0 );
                            SET_CHAR_WILL_TRY_TO_LEAVE_WATER( l_U746[J]._fU388._fU8[I], 0 );
                            SET_CHAR_DROWNS_IN_WATER( l_U746[J]._fU388._fU8[I], 1 );
                            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U746[J]._fU388._fU8[I], 1 );
                            l_U746[J]._fU388._fU256[I]++;
                        }
                        break;
                        case 1:
                        if (NOT (IS_CHAR_INJURED( l_U746[J]._fU388._fU8[I] )))
                        {
                            TASK_PLAY_ANIM_WITH_FLAGS( l_U746[J]._fU388._fU8[I], "Jump_from_yacht", "missyusuf01", 8.00000000, 0, 64 );
                            GET_GAME_TIMER( ref l_U746[J]._fU388._fU160[I] );
                            l_U746[J]._fU388._fU256[I]++;
                        }
                        else
                        {
                            l_U746[J]._fU388._fU256[I] = 3;
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_INJURED( l_U746[J]._fU388._fU8[I] )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U746[J]._fU388._fU8[I], "missyusuf01", "Jump_from_yacht" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U746[J]._fU388._fU8[I], "missyusuf01", "Jump_from_yacht", ref fVar9 );
                                if (fVar9 >= 0.95000000)
                                {
                                    SWITCH_PED_TO_RAGDOLL( l_U746[J]._fU388._fU8[I], 0, 2000, 0, 1, 1, 0 );
                                    l_U746[J]._fU388._fU180[I] = 1;
                                    l_U746[J]._fU388._fU256[I]++;
                                    GET_GAME_TIMER( ref l_U746[J]._fU388._fU140[I] );
                                }
                            }
                            else if (sub_36871( l_U746[J]._fU388._fU160[I], 1000 ))
                            {
                                SET_CHAR_HEALTH( l_U746[J]._fU388._fU8[I], 1 );
                                l_U746[J]._fU388._fU256[I]++;
                            }
                        }
                        else
                        {
                            l_U746[J]._fU388._fU256[I]++;
                        }
                        break;
                        case 3:
                        if (DOES_CHAR_EXIST( l_U746[J]._fU388._fU8[I] ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U746[J]._fU388._fU8[I] )))
                            {
                                if (sub_36871( l_U746[J]._fU388._fU140[I], 3000 ))
                                {
                                    if (IS_CHAR_IN_WATER( l_U746[J]._fU388._fU8[I] ))
                                    {
                                        GET_CHAR_HEALTH( l_U746[J]._fU388._fU8[I], ref iVar7 );
                                        if (iVar7 > 105)
                                        {
                                            SET_CHAR_HEALTH( l_U746[J]._fU388._fU8[I], 105 );
                                        }
                                    }
                                    else
                                    {
                                        GET_CHAR_HEALTH( l_U746[J]._fU388._fU8[I], ref iVar7 );
                                        if (iVar7 > 5)
                                        {
                                            SET_CHAR_HEALTH( l_U746[J]._fU388._fU8[I], 5 );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                N_1363505769( l_U746[J]._fU388._fU8[I], ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
                                if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), uVar14._fU0, uVar14._fU4, uVar14._fU8, 75.00000000, 75.00000000, 75.00000000, 0 ))) || (NOT (sub_3576( uVar14, 1.50000000 ))))
                                {
                                    DELETE_CHAR( ref l_U746[J]._fU388._fU8[I] );
                                    l_U746[J]._fU388._fU100[I] = 0;
                                }
                            }
                        }
                        else
                        {
                            l_U746[J]._fU388._fU100[I] = 0;
                        }
                        break;
                    }
                }
            }
        }
    }
    return;
}

int sub_72759(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown[2] uVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    array(ref uVar9, 2);
    array(ref uVar16, 2);
    uVar9[0] = {ref iParam0->_fU388->_fU200[0]};
    uVar9[1] = {ref iParam0->_fU388->_fU200[1]};
    uVar16[0] = {ref iParam0->_fU388->_fU228[0]};
    uVar16[1] = {ref iParam0->_fU388->_fU228[1]};
    GET_CHAR_COORDINATES( sub_3454(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    sub_33408( l_U4715, uVar3, ref uVar6 );
    if (((uVar6._fU8 <= uVar16[1]._fU8) AND ((uVar6._fU4 <= uVar16[1]._fU4) AND ((uVar6._fU0 <= uVar16[1]._fU0) AND ((uVar6._fU8 >= uVar9[1]._fU8) AND ((uVar6._fU4 >= uVar9[1]._fU4) AND (uVar6._fU0 >= uVar9[1]._fU0)))))) || ((uVar6._fU8 <= uVar16[0]._fU8) AND ((uVar6._fU4 <= uVar16[0]._fU4) AND ((uVar6._fU0 <= uVar16[0]._fU0) AND ((uVar6._fU8 >= uVar9[0]._fU8) AND ((uVar6._fU4 >= uVar9[0]._fU4) AND (uVar6._fU0 >= uVar9[0]._fU0)))))))
    {
        return 1;
    }
    return 0;
}

void sub_75173()
{
    unknown uVar2;
    int iVar3;
    int iVar4;

    iVar4 = sub_71557();
    g_U43519 = iVar4;
    if (l_U5262 == 0)
    {
        if (iVar4 > 0)
        {
            GET_GAME_TIMER( ref l_U5262 );
        }
    }
    sub_14209( iVar4, "Sections des...." );
    if (NOT l_U5258)
    {
        if (l_U5255 == 0)
        {
            if (iVar4 > 0)
            {
                GET_GAME_TIMER( ref l_U5255 );
            }
        }
        else if (l_U5256 == 0)
        {
            if (iVar4 >= 4)
            {
                GET_GAME_TIMER( ref l_U5256 );
            }
        }
        else if (iVar4 > 4)
        {
            g_U43571 = 1;
            l_U5263 = 1000;
            if (NOT l_U5260)
            {
                l_U5261 = sub_75377();
                sub_75672( l_U5261, "fAllSectionTotalHealth, all destroyed...." );
                l_U5260 = 1;
            }
            else
            {
                uVar2 = sub_75377();
                sub_75672( uVar2, "fAllSectionCurrentHealth, all destroyed...." );
                if ((sub_36871( l_U5256, 60000 )) || ((l_U5261 - uVar2) >= 200.00000000))
                {
                    l_U5263 = 1000;
                    l_U5258 = 1;
                    GET_GAME_TIMER( ref l_U5257 );
                }
            }
        }
        else if ((sub_36871( l_U5255, 300000 )) || ((sub_36871( l_U5262, 40000 )) AND (sub_36871( l_U5256, 7000 ))))
        {
            g_U43571 = 0;
            if (NOT l_U5259)
            {
                l_U5261 = sub_75377();
                sub_75672( l_U5261, "fAllSectionTotalHealth, not all destroyed...." );
                l_U5259 = 1;
            }
            else
            {
                uVar2 = sub_75377();
                sub_75672( uVar2, "fAllSectionCurrentHealth, not all destroyed...." );
                if ((sub_36871( l_U5255, 300000 )) || ((l_U5261 - uVar2) >= 2000.00000000))
                {
                    l_U5263 = 1000;
                    l_U5258 = 1;
                    GET_GAME_TIMER( ref l_U5257 );
                }
            }
        };;;;
    }
    GET_GAME_TIMER( ref iVar3 );
    sub_14209( iVar3 - l_U5256, "iAllBoatDesStart..." );
    if (l_U5258)
    {
        sub_5598( "bBoatBeenDestroyed is TRUE" );
    }
    else
    {
        sub_5598( "bBoatBeenDestroyed is FALSE" );
    }
    return l_U5258;
}

void sub_75377()
{
    unknown uVar2;
    float Result;
    int I;

    for ( I = 0; I < l_U746; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U746[I]._fU0 ))
        {
            GET_OBJECT_HEALTH( l_U746[I]._fU0, ref uVar2 );
        }
        else if (DOES_OBJECT_EXIST( l_U746[I]._fU4 ))
        {
            GET_OBJECT_HEALTH( l_U746[I]._fU4, ref uVar2 );
        }
        Result += uVar2;
    }
    if (Result < 100)
    {
        SCRIPT_ASSERT( "GET_TOTAL_HEALTH_OF_ALL_REMAINING_SECTIONS() < 100 please tell Dave W" );
    }
    return Result;
}

void sub_75672(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_76365()
{
    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        if (NOT l_U5160)
        {
            if (l_U4777)
            {
                if (l_U5158 == 0)
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1133.33700000, -987.10200000, 6.51387900, 1000.00000000, 1000.00000000, 1000.00000000, 0 )))
                    {
                        GET_GAME_TIMER( ref l_U5158 );
                    }
                    else
                    {
                        l_U5160 = 1;
                    }
                }
                else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1133.33700000, -987.10200000, 6.51387900, 1000.00000000, 1000.00000000, 1000.00000000, 0 )))
                {
                    if (sub_36871( l_U5158, 60000 ))
                    {
                        if (NOT l_U5159)
                        {
                            if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
                            {
                                CLEAR_PRINTS();
                                PRINT_NOW( "YS1_YESC", 7500, 1 );
                            }
                            l_U5159 = 1;
                        }
                        else if (sub_36871( l_U5158, 120000 ))
                        {
                            if (NOT (sub_3576( -1133.33700000, -987.10200000, 6.51387900, 5.00000000 )))
                            {
                                l_U5146 = 2;
                                sub_55372();
                            }
                        }
                    }
                }
                else
                {
                    l_U5160 = 1;
                }
            }
        }
        else if (l_U5157 == 0)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1133.33700000, -987.10200000, 6.51387900, 1000.00000000, 1000.00000000, 1000.00000000, 0 )))
            {
                GET_GAME_TIMER( ref l_U5157 );
            }
        }
        else if (sub_36871( l_U5157, 240000 ))
        {
            if (NOT l_U5159)
            {
                if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "YS1_YESC", 7500, 1 );
                }
                l_U5159 = 1;
            }
            else if (sub_36871( l_U5157, 300000 ))
            {
                if (NOT (sub_3576( -1133.33700000, -987.10200000, 6.51387900, 5.00000000 )))
                {
                    l_U5146 = 2;
                    sub_55372();
                }
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1133.33700000, -987.10200000, 6.51387900, 1000.00000000, 1000.00000000, 1000.00000000, 0 ))
        {
            l_U5157 = 0;
        };;;
    }
    return;
}

int sub_77045()
{
    int I;
    int J;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    switch (l_U5226)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_3454(), l_U4972 ))
            {
                if (sub_77132( 1, 1 ))
                {
                    STOP_SOUND( l_U4878 );
                    CLEAR_HELP();
                    CLEAR_PRINTS();
                    BEGIN_CAM_COMMANDS( ref l_U4903 );
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    FORCE_WEATHER_NOW( 1 );
                    SET_PLAYER_CONTROL( sub_14417(), 0 );
                    if (DOES_BLIP_EXIST( l_U4981 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4981 );
                    }
                    if (l_U5205)
                    {
                        STOP_SOUND( l_U4882 );
                    }
                    l_U5161 = 0;
                    l_U4889 = 0;
                    CLEAR_WANTED_LEVEL( sub_14417() );
                    l_U4891 = 0.00000000;
                    SET_WANTED_MULTIPLIER( l_U4891 );
                    if (DOES_CHAR_EXIST( l_U3642[0]._fU4[0] ))
                    {
                        DELETE_CHAR( ref l_U3642[0]._fU4[0] );
                    }
                    if (DOES_CHAR_EXIST( l_U3642[0]._fU4[1] ))
                    {
                        DELETE_CHAR( ref l_U3642[0]._fU4[1] );
                    }
                    if (DOES_VEHICLE_EXIST( l_U3642[0]._fU0 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U3642[0]._fU0 ))
                        {
                            l_U5230 = 1;
                        }
                        DELETE_CAR( ref l_U3642[0]._fU0 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U4972 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U4972 )))
                        {
                            SET_CAR_COORDINATES( l_U4972, -1092.98600000, -1024.65900000, 22.12450000 );
                            SET_CAR_HEADING( l_U4972, 90.51000000 );
                            FREEZE_CAR_POSITION( l_U4972, 1 );
                            SET_CAR_VISIBLE( l_U4972, 0 );
                            SET_CHAR_VISIBLE( sub_3454(), 0 );
                        }
                        SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                        DISPLAY_RADAR( 0 );
                        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1141632236, -28737275 );
                        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
                        for ( I = 0; I < l_U3874; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U3874[I]._fU0 ))
                            {
                                DELETE_CHAR( ref l_U3874[I]._fU0 );
                            }
                        }
                        for ( I = 0; I < l_U4280; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U4280[I]._fU0 ))
                            {
                                DELETE_CHAR( ref l_U4280[I]._fU0 );
                            }
                        }
                        if (DOES_OBJECT_EXIST( l_U4713 ))
                        {
                            DELETE_OBJECT( ref l_U4713 );
                        }
                        sub_56788( 1 );
                        if (NOT (IS_CAR_DEAD( l_U4966 )))
                        {
                            if (LOCATE_CAR_3D( l_U4966, -1142.77700000, -988.49450000, 1.05540000, 200.00000000, 200.00000000, 200.00000000, 0 ))
                            {
                                DELETE_CAR( ref l_U4966 );
                            }
                        }
                        for ( I = 0; I < l_U4967; I++ )
                        {
                            if (DOES_VEHICLE_EXIST( l_U4967[I] ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U4967[I] )))
                                {
                                    if (LOCATE_CAR_3D( l_U4967[I], -1142.77700000, -988.49450000, 1.05540000, 200.00000000, 200.00000000, 200.00000000, 0 ))
                                    {
                                        DELETE_CAR( ref l_U4967[I] );
                                    }
                                }
                            }
                        }
                        STOP_STREAM();
                        STOP_SOUND( l_U4881 );
                        CLEAR_AREA( -1108.28700000, -982.51030000, 8.33730000, 300.00000000, 1 );
                        if (l_U5231)
                        {
                            REQUEST_CAR_RECORDING( 496 );
                            REQUEST_CAR_RECORDING( 497 );
                            REQUEST_CAR_RECORDING( 498 );
                            REQUEST_CAR_RECORDING( 499 );
                            REQUEST_MODEL( 1033245328 );
                            while ((NOT (HAS_MODEL_LOADED( 1033245328 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 499 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 498 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 497 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 496 )))))))
                            {
                                WAIT( 0 );
                            }
                            sub_14667( 9 );
                        }
                        START_CUTSCENE_NOW( "Y1_BA" );
                        l_U5226 = 1;
                    }
                    else
                    {
                        DO_SCREEN_FADE_IN( 500 );
                        return 1;
                    }
                }
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
            CLEAR_NAMED_CUTSCENE( "Y1_BA" );
            l_U5227 = 0;
            for ( I = 0; I < l_U3642; I++ )
            {
                for ( J = 0; J <= 2; J++ )
                {
                    if (DOES_CHAR_EXIST( l_U3642[I]._fU4[J] ))
                    {
                        DELETE_CHAR( ref l_U3642[I]._fU4[J] );
                    }
                }
                if (NOT (IS_CAR_DEAD( l_U3642[I]._fU0 )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[I]._fU0 ))
                    {
                        STOP_PLAYBACK_RECORDED_CAR( l_U3642[I]._fU0 );
                    }
                    DELETE_CAR( ref l_U3642[I]._fU0 );
                }
            }
            sub_14667( 9 );
            CLEAR_PRINTS();
            END_CAM_COMMANDS( ref l_U4903 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (NOT (IS_CAR_DEAD( l_U4972 )))
            {
                SET_CAR_COORDINATES( l_U4972, -1092.98600000, -1024.65900000, 22.12450000 );
                SET_CAR_HEADING( l_U4972, 90.51000000 );
                FREEZE_CAR_POSITION( l_U4972, 0 );
                SET_CAR_VISIBLE( l_U4972, 1 );
                SET_HELI_BLADES_FULL_SPEED( l_U4972 );
                SET_CHAR_VISIBLE( sub_3454(), 1 );
            }
            l_U4888 = 0;
            SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
            REQUEST_CAR_RECORDING( 466 );
            REQUEST_CAR_RECORDING( 467 );
            REQUEST_MODEL( -1570089923 );
            REQUEST_MODEL( -1863929546 );
            REQUEST_MODEL( 1073680232 );
            REQUEST_MODEL( 767847151 );
            REQUEST_MODEL( 767847151 );
            REQUEST_MODEL( l_U3842 );
            while ((NOT (HAS_MODEL_LOADED( l_U3842 ))) || ((NOT (HAS_MODEL_LOADED( 767847151 ))) || ((NOT (HAS_MODEL_LOADED( 1073680232 ))) || ((NOT (HAS_MODEL_LOADED( -1863929546 ))) || ((NOT (HAS_MODEL_LOADED( -1570089923 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 467 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 466 )))))))))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U4972 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_3454(), l_U4972 )))
                {
                    WARP_CHAR_INTO_CAR( sub_3454(), l_U4972 );
                }
            }
            sub_79342();
            WAIT( 1000 );
            g_U43104[15] = 4;
            l_U5229 = 1;
            DO_SCREEN_FADE_IN( 500 );
            SET_PLAYER_CONTROL( sub_14417(), 1 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            if (l_U5205)
            {
                PLAY_SOUND_FRONTEND( l_U4882, "HELICOPTER_ALARM_TONES" );
            }
            GET_GAME_TIMER( ref l_U4964 );
            l_U5226 = 2;
        }
        break;
        case 2:
        return 1;
        break;
    }
    return 0;
}

int sub_77132(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3454(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3454(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3454()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3454() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_14417() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_14417() )))
    {
        return 0;
    }
    return 1;
}

void sub_79342()
{
    unknown uVar2;
    int I;

    if (NOT (HAS_MODEL_LOADED( -1570089923 )))
    {
        REQUEST_MODEL( -1570089923 );
        REQUEST_MODEL( -1863929546 );
        REQUEST_MODEL( 1073680232 );
        REQUEST_MODEL( 767847151 );
        REQUEST_MODEL( 1484046419 );
        REQUEST_MODEL( 1238049536 );
        REQUEST_MODEL( -1496523498 );
        REQUEST_MODEL( -1752023391 );
        while ((NOT (HAS_MODEL_LOADED( -1752023391 ))) || ((NOT (HAS_MODEL_LOADED( -1496523498 ))) || ((NOT (HAS_MODEL_LOADED( 1238049536 ))) || ((NOT (HAS_MODEL_LOADED( 1484046419 ))) || ((NOT (HAS_MODEL_LOADED( 767847151 ))) || ((NOT (HAS_MODEL_LOADED( 1073680232 ))) || ((NOT (HAS_MODEL_LOADED( -1863929546 ))) || (NOT (HAS_MODEL_LOADED( -1570089923 ))))))))))
        {
            WAIT( 0 );
        }
    }
    CREATE_OBJECT_NO_OFFSET( -1570089923, -1127.32300000, -986.77850000, 1.00000000, ref l_U4716[0], 1 );
    CREATE_OBJECT_NO_OFFSET( -1863929546, -1138.58700000, -986.59490000, 1.00000000, ref l_U4716[1], 1 );
    CREATE_OBJECT_NO_OFFSET( 1073680232, -1140.53900000, -991.34880000, 1.00000000, ref l_U4716[2], 1 );
    CREATE_OBJECT_NO_OFFSET( -1570089923, -1126.03200000, -999.96220000, 1.00000000, ref l_U4716[3], 1 );
    CREATE_OBJECT_NO_OFFSET( -1863929546, -1118.67100000, -998.04110000, 1.00000000, ref l_U4716[4], 1 );
    CREATE_OBJECT_NO_OFFSET( 767847151, -1133.79700000, -992.42320000, 1.00000000, ref l_U4716[5], 1 );
    CREATE_OBJECT_NO_OFFSET( 767847151, -1139.76800000, -993.41790000, 1.00000000, ref l_U4716[6], 1 );
    CREATE_OBJECT_NO_OFFSET( -1570089923, -1147.03300000, -989.44340000, 1.00000000, ref l_U4716[7], 1 );
    CREATE_OBJECT_NO_OFFSET( 1073680232, -1154.35800000, -990.36100000, 1.00000000, ref l_U4716[8], 1 );
    CREATE_OBJECT_NO_OFFSET( 767847151, -1131.41400000, -996.56400000, 1.00000000, ref l_U4716[9], 1 );
    CREATE_OBJECT_NO_OFFSET( -1863929546, -1139.32700000, -1000.65300000, 1.00000000, ref l_U4716[10], 1 );
    CREATE_OBJECT_NO_OFFSET( 767847151, -1146.27400000, -997.46140000, 1.00000000, ref l_U4716[11], 1 );
    CREATE_OBJECT_NO_OFFSET( -1570089923, -1152.67900000, -1000.60400000, 1.00000000, ref l_U4716[12], 1 );
    CREATE_OBJECT_NO_OFFSET( 1238049536, -1123.24800000, -992.53420000, 1.00000000, ref l_U4716[13], 1 );
    CREATE_OBJECT_NO_OFFSET( 1484046419, -1151.23400000, -1005.46900000, 1.00000000, ref l_U4716[14], 1 );
    CREATE_OBJECT_NO_OFFSET( 1073680232, -1142.32300000, -1016.13600000, 1.00000000, ref l_U4716[15], 1 );
    CREATE_OBJECT_NO_OFFSET( -1496523498, -1129.18200000, -1015.75600000, 1.00000000, ref l_U4716[16], 1 );
    CREATE_OBJECT_NO_OFFSET( 767847151, -1139.61900000, -1006.60800000, 1.00000000, ref l_U4716[17], 1 );
    CREATE_OBJECT_NO_OFFSET( 767847151, -1129.50600000, -1007.17800000, 1.00000000, ref l_U4716[18], 1 );
    CREATE_OBJECT_NO_OFFSET( 767847151, -1122.79400000, -1002.93400000, 1.00000000, ref l_U4716[19], 1 );
    CREATE_OBJECT_NO_OFFSET( 1484046419, -1114.48700000, -998.96450000, 1.00000000, ref l_U4716[20], 1 );
    CREATE_OBJECT_NO_OFFSET( 1484046419, -1132.14000000, -980.52680000, 1.00000000, ref l_U4716[21], 1 );
    CREATE_OBJECT_NO_OFFSET( 1238049536, -1109.94900000, -996.44960000, 1.00000000, ref l_U4716[22], 1 );
    CREATE_OBJECT_NO_OFFSET( 1238049536, -1152.63600000, -1023.15000000, 1.00000000, ref l_U4716[23], 1 );
    CREATE_OBJECT_NO_OFFSET( -1496523498, -1161.15000000, -1004.41100000, 1.00000000, ref l_U4716[24], 1 );
    CREATE_OBJECT_NO_OFFSET( -1496523498, -1145.13700000, -970.46040000, 1.00000000, ref l_U4716[25], 1 );
    CREATE_OBJECT_NO_OFFSET( -1496523498, -1175.47100000, -984.24550000, 1.00000000, ref l_U4716[26], 1 );
    CREATE_OBJECT_NO_OFFSET( -1752023391, -1113.30400000, -1025.60800000, 1.00000000, ref l_U4716[27], 1 );
    CREATE_OBJECT_NO_OFFSET( -1752023391, -1133.91700000, -1049.93500000, 1.00000000, ref l_U4716[28], 1 );
    CREATE_OBJECT_NO_OFFSET( 767847151, -1143.61300000, -1118.34200000, 1.00000000, ref l_U4716[29], 1 );
    CREATE_OBJECT_NO_OFFSET( -1752023391, -1203.91000000, -1012.57700000, 1.00000000, ref l_U4716[30], 1 );
    CREATE_OBJECT_NO_OFFSET( -1752023391, -1237.76100000, -1004.97800000, 1.00000000, ref l_U4716[31], 1 );
    CREATE_OBJECT_NO_OFFSET( 767847151, -1271.34900000, -961.22290000, 1.00000000, ref l_U4716[32], 1 );
    CREATE_OBJECT_NO_OFFSET( -1752023391, -1222.43000000, -937.73070000, 1.00000000, ref l_U4716[33], 1 );
    CREATE_OBJECT_NO_OFFSET( -1752023391, -1168.82700000, -931.12450000, 1.00000000, ref l_U4716[34], 1 );
    CREATE_OBJECT_NO_OFFSET( 767847151, -1090.23900000, -923.98270000, 1.00000000, ref l_U4716[35], 1 );
    CREATE_OBJECT_NO_OFFSET( -1752023391, -1214.96000000, -997.84860000, 1.00000000, ref l_U4716[36], 1 );
    CREATE_OBJECT_NO_OFFSET( -1752023391, -1188.62700000, -992.88660000, 1.00000000, ref l_U4716[37], 1 );
    CREATE_OBJECT_NO_OFFSET( 767847151, -1117.96500000, -1037.99900000, 1.00000000, ref l_U4716[38], 1 );
    CREATE_OBJECT_NO_OFFSET( -1752023391, -1071.83000000, -1026.01900000, 1.00000000, ref l_U4716[39], 1 );
    CREATE_OBJECT_NO_OFFSET( -1752023391, -1093.44300000, -1043.87400000, 1.00000000, ref l_U4716[40], 1 );
    CREATE_OBJECT_NO_OFFSET( -1752023391, -1265.07800000, -910.81450000, 1.00000000, ref l_U4716[41], 1 );
    CREATE_OBJECT_NO_OFFSET( -1863929546, -1204.05000000, -1042.72200000, 1.00000000, ref l_U4716[42], 1 );
    CREATE_OBJECT_NO_OFFSET( -1863929546, -1220.52200000, -1009.60700000, 1.00000000, ref l_U4716[43], 1 );
    CREATE_OBJECT_NO_OFFSET( -1863929546, -1124.45700000, -1047.46200000, 1.00000000, ref l_U4716[44], 1 );
    for ( I = 0; I < l_U4716; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U4716[I] ))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 360, ref uVar2 );
            SET_OBJECT_HEADING( l_U4716[I], TO_FLOAT( uVar2 ) );
        }
    }
    l_U5210[0] = sub_81389( -1132.14400000, -995.61170000, -0.68620010, 0 );
    l_U5210[1] = sub_81389( -1144.92100000, -999.81120000, -0.68620010, 0 );
    l_U5210[2] = sub_81389( -1127.97900000, -990.62080000, -0.51820000, 1 );
    l_U5210[3] = sub_81389( -1130.13900000, -1002.50200000, -0.51140000, 1 );
    l_U5210[4] = sub_81389( -1131.99400000, -1011.10200000, -0.51140000, 1 );
    l_U5210[5] = sub_81389( -1118.71400000, -1009.30400000, -0.51140000, 1 );
    l_U5210[6] = sub_81389( -1133.25200000, -1022.63700000, -0.51140000, 1 );
    l_U5210[7] = sub_81389( -1148.62000000, -1014.41700000, -0.51140000, 1 );
    return;
}

void sub_81389(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    unknown Result;
    unknown uVar7;
    int iVar8;

    if ((l_U5209 mod 2) == 0)
    {
        CREATE_CHAR( 26, l_U3842, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
        SET_CHAR_COMPONENT_VARIATION( Result, 1, 0, 2 );
    }
    else
    {
        CREATE_CHAR( 26, l_U3841, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    }
    l_U5209++;
    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref uVar7 );
    SET_CHAR_HEADING( Result, uVar7 );
    SET_CHAR_DECISION_MAKER( Result, l_U4876 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( Result, 1 );
    SET_CHAR_WILL_TRY_TO_LEAVE_WATER( Result, 0 );
    if (bParam3)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 50, ref iVar8 );
        SET_CHAR_HEALTH( Result, 100 + iVar8 );
        SET_CHAR_DROWNS_IN_WATER( Result, 1 );
    }
    else
    {
        SET_CHAR_DROWNS_IN_WATER( Result, 0 );
    }
    return Result;
}

void sub_82027()
{
    int J;
    int iVar3;
    int I;
    int iVar5;
    int iVar6;
    unknown[3] uVar7;
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
    float fVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;

    array(ref uVar7, 3);
    switch (l_U5247)
    {
        case 0:
        if (sub_82084())
        {
            if (NOT (IS_CAR_DEAD( l_U3642[0]._fU0 )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[0]._fU0 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U3642[1]._fU0 )))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[1]._fU0 ))
                        {
                            if (NOT (IS_CAR_DEAD( l_U3642[2]._fU0 )))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[2]._fU0 ))
                                {
                                    PRINT_NOW( "YS1_ENEMFLE", 7500, 1 );
                                    l_U5248 = 1;
                                    l_U5247 = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U3642[0]._fU4[0] )))
        {
            GET_GAME_TIMER( ref l_U5246 );
            sub_47773( l_U3642[1]._fU4[1], 14 );
            sub_47773( l_U3642[2]._fU4[1], 14 );
            sub_47773( l_U3642[4]._fU4[1], 14 );
            sub_18749( 1 );
            l_U5247 = 2;
        }
        break;
        case 2:
        for ( J = 0; J < l_U3642; J++ )
        {
            for ( I = 0; I <= 2; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U3642[J]._fU4[I] )))
                {
                    iVar5++;
                }
                else if (IS_CHAR_INJURED( l_U3642[J]._fU4[0] ))
                {
                    if (NOT (IS_CAR_DEAD( l_U3642[J]._fU0 )))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[J]._fU0 ))
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U3642[J]._fU0 );
                            sub_5598( "Stopping playback because driver is injured" );
                            l_U5142 = 0;
                        }
                    }
                }
                else
                {
                    sub_5598( "driver is injured!" );
                    l_U5142 = 0;
                }
            }
            if (NOT (IS_CAR_DEAD( l_U3642[J]._fU0 )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[J]._fU0 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U3642[J]._fU4[2] )))
                    {
                        if (NOT (IS_CAR_DEAD( l_U4972 )))
                        {
                            if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
                            {
                                if (sub_36871( l_U5246, 5000 ))
                                {
                                    if (IS_CHAR_ON_SCREEN( l_U3642[J]._fU4[2] ))
                                    {
                                        if ((NOT (sub_83366( J ))) AND ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), l_U3642[J]._fU4[2], 90.00000000, 90.00000000, 90.00000000, 0 )) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), l_U3642[J]._fU4[2], 40.00000000, 40.00000000, 40.00000000, 0 )))))
                                        {
                                            uVar7[0] = {sub_63544()};
                                            TASK_SHOOT_AT_COORD( l_U3642[J]._fU4[2], uVar7[0]._fU0, uVar7[0]._fU4, uVar7[0]._fU8, 5000, 2 );
                                            PLAY_SOUND_FRONTEND( l_U4879, "Y1_SEXY_TIME_WARNING" );
                                            GET_GAME_TIMER( ref l_U5246 );
                                            l_U4768 = 1;
                                            l_U4772 = 1;
                                            l_U5233 = 1;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                STOP_SOUND( l_U4879 );
                            }
                        }
                    }
                }
                else if (LOCATE_CAR_3D( l_U3642[J]._fU0, -1090.88200000, 1843.12000000, 1.21400000, 100.00000000, 100.00000000, 100.00000000, 0 ))
                {
                    for ( I = 0; I <= 2; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U3642[J]._fU4[I] )))
                        {
                            if (NOT l_U3642[J]._fU20[I])
                            {
                                if (IS_PED_ATTACHED_TO_ANY_CAR( l_U3642[J]._fU4[I] ))
                                {
                                    DETACH_PED( l_U3642[J]._fU4[I], 1 );
                                }
                                if (DOES_BLIP_EXIST( l_U3642[J]._fU36[I] ))
                                {
                                    CHANGE_BLIP_DISPLAY( l_U3642[J]._fU36[I], 4 );
                                }
                                OPEN_SEQUENCE_TASK( ref uVar27 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                if (J == 0)
                                {
                                    TASK_GO_STRAIGHT_TO_COORD( 0, -1072.58900000, 1867.39000000, 1.74930000, 3, -1 );
                                }
                                else
                                {
                                    TASK_GO_STRAIGHT_TO_COORD( 0, -1090.88200000, 1843.12000000, 1.21400000, 3, -1 );
                                }
                                TASK_FLEE_CHAR_ANY_MEANS( 0, sub_3454(), 200.00000000, 999999, 0, 0, 0, 100.00000000 );
                                CLOSE_SEQUENCE_TASK( uVar27 );
                                TASK_PERFORM_SEQUENCE( l_U3642[J]._fU4[I], uVar27 );
                                CLEAR_SEQUENCE_TASK( uVar27 );
                                l_U3642[J]._fU20[I] = 1;
                            }
                            else if (NOT l_U5250)
                            {
                                if (sub_38888())
                                {
                                    PRINT_NOW( "YS1_ARMONFOOT", 7500, 1 );
                                    l_U5250 = 1;
                                }
                            }
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( l_U4972 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U3642[J]._fU4[0] )))
                    {
                        if (l_U3642[J]._fU152)
                        {
                            if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[J]._fU0 ))) || (NOT (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))))
                            {
                                SET_CHAR_PROOFS( l_U3642[J]._fU4[0], 0, 0, 0, 0, 0 );
                                l_U3642[J]._fU152 = 0;
                            }
                        }
                        else if ((IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[J]._fU0 )) || (IS_CHAR_IN_CAR( sub_3454(), l_U4972 )))
                        {
                            SET_CHAR_PROOFS( l_U3642[J]._fU4[0], 1, 0, 0, 0, 0 );
                            l_U3642[J]._fU152 = 1;
                        }
                    }
                }
            }
        }
        sub_65250();
        sub_70263();
        if (iVar5 == 0)
        {
            l_U5155 = 1;
            if (NOT (IS_CAR_DEAD( l_U4971 )))
            {
                ;
            }
            else
            {
                l_U5155 = 1;
            }
        }
        uVar25 = sub_84486( 1 );
        if (NOT (IS_CHAR_DEAD( uVar25 )))
        {
            sub_48916( ref uVar25 );
        }
        else
        {
            sub_5121();
        }
        uVar26 = sub_84486( 0 );
        fVar24 = sub_84703( sub_3454(), uVar26 );
        if (fVar24 > 400.00000000)
        {
            if (NOT (IS_CHAR_DEAD( uVar26 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( uVar26 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( uVar26 ))
                    {
                        iVar6 = sub_85166( uVar26 );
                        if (iVar6 > -1)
                        {
                            GET_CHAR_COORDINATES( sub_3454(), ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
                            GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( l_U3642[iVar6]._fU0, uVar17._fU0, uVar17._fU4, uVar17._fU8, ref uVar20._fU0, ref uVar20._fU4, ref uVar20._fU8 );
                            if ((uVar20._fU4 < 0.00000000) AND (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[iVar6]._fU0 )))
                            {
                                if (l_U5254 == 0)
                                {
                                    GET_GAME_TIMER( ref l_U5254 );
                                }
                                else if (sub_36871( l_U5254, 5000 ))
                                {
                                    if (NOT (IS_CAR_DEAD( l_U3642[iVar6]._fU0 )))
                                    {
                                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[iVar6]._fU0 ))
                                        {
                                            for ( J = 0; J < l_U3642; J++ )
                                            {
                                                for ( I = 0; I < 3; I++ )
                                                {
                                                    if (DOES_CHAR_EXIST( l_U3642[J]._fU4[I] ))
                                                    {
                                                        DELETE_CHAR( ref l_U3642[J]._fU4[I] );
                                                    }
                                                }
                                                if (DOES_VEHICLE_EXIST( l_U3642[J]._fU0 ))
                                                {
                                                    DELETE_CAR( ref l_U3642[J]._fU0 );
                                                }
                                            }
                                            l_U5146 = 2;
                                            sub_55372();
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else if (fVar24 > 1500.00000000)
                    {
                        if (l_U5254 == 0)
                        {
                            GET_GAME_TIMER( ref l_U5254 );
                        }
                        else if (sub_36871( l_U5254, 5000 ))
                        {
                            for ( J = 0; J < l_U3642; J++ )
                            {
                                for ( I = 0; I < 3; I++ )
                                {
                                    if (DOES_CHAR_EXIST( l_U3642[J]._fU4[I] ))
                                    {
                                        DELETE_CHAR( ref l_U3642[J]._fU4[I] );
                                    }
                                }
                                if (DOES_VEHICLE_EXIST( l_U3642[J]._fU0 ))
                                {
                                    DELETE_CAR( ref l_U3642[J]._fU0 );
                                }
                            }
                            l_U5146 = 2;
                            sub_55372();
                        }
                    }
                }
            }
        }
        else if (l_U5254 != 0)
        {
            l_U5254 = 0;
        }
        if (NOT l_U5155)
        {
            if (l_U5229)
            {
                if (NOT l_U5249)
                {
                    if (NOT (IS_CHAR_DEAD( uVar26 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), uVar26, 500.00000000, 500.00000000, 500.00000000, 0 ))
                        {
                            l_U4891 = 0.00000000;
                            SET_WANTED_MULTIPLIER( l_U4891 );
                            l_U5249 = 1;
                        }
                    }
                }
                else if (NOT (IS_CHAR_DEAD( uVar26 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), uVar26, 500.00000000, 500.00000000, 500.00000000, 0 )))
                    {
                        l_U4891 = 0.10000000;
                        SET_WANTED_MULTIPLIER( l_U4891 );
                        l_U5249 = 0;
                    }
                }
            }
        }
        else if (l_U4891 == 0.00000000)
        {
            l_U4891 = 1.00000000;
            SET_WANTED_MULTIPLIER( l_U4891 );
        }
        sub_86194();
        sub_86369();
        if (NOT l_U5251)
        {
            J = sub_86555();
            if (J >= 2)
            {
                if (sub_36871( l_U4964, 120000 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U4972 )))
                    {
                        if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
                        {
                            uVar26 = sub_84486( 1 );
                            if (NOT (IS_CHAR_DEAD( uVar26 )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), uVar26, 100.00000000, 100.00000000, 100.00000000, 0 ))
                                {
                                    if (sub_86765() > 10000)
                                    {
                                        if (sub_86796() < (3 * sub_86765()))
                                        {
                                            l_U5252 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (l_U5252)
        {
            if (sub_38888())
            {
                sub_39605( "E2Y1_MINI", ref l_U4762, 6, 1 );
                l_U5252 = 0;
                l_U5251 = 1;
            }
        }
        else if (l_U5251)
        {
            if (NOT l_U5253)
            {
                if (NOT (sub_38903( l_U4762 )))
                {
                    PRINT_HELP( "YS1_GUN" );
                    l_U5253 = 1;
                }
            }
        }
        if (l_U5248)
        {
            if (fVar24 < 200.00000000)
            {
                if (l_U4773)
                {
                    if ((NOT l_U4771) || (sub_36871( l_U4776, 25000 )))
                    {
                        if (sub_36871( l_U4775, 22000 ))
                        {
                            if (sub_38888())
                            {
                                sub_39605( "E2Y1_CBOAT", ref l_U4762, 6, 1 );
                                GET_GAME_TIMER( ref l_U4776 );
                                if (NOT l_U4771)
                                {
                                    l_U4771 = 1;
                                }
                                l_U4773 = 0;
                                l_U4772 = 1;
                            }
                        }
                    }
                }
            }
            if (l_U4772)
            {
                if (l_U4768)
                {
                    if (fVar24 < 200.00000000)
                    {
                        if ((NOT l_U4769) || ((sub_36871( l_U4776, 10000 )) AND (sub_36871( l_U4775, 15000 ))))
                        {
                            if (sub_38888())
                            {
                                if (HAS_SOUND_FINISHED( l_U4879 ))
                                {
                                    sub_39605( "E2Y1_SHOTA", ref l_U4762, 6, 1 );
                                    GET_GAME_TIMER( ref l_U4775 );
                                    if (NOT l_U4769)
                                    {
                                        l_U4769 = 1;
                                    }
                                    l_U4768 = 0;
                                    l_U4772 = 0;
                                    l_U4773 = 1;
                                }
                            }
                        }
                        else
                        {
                            l_U4772 = 0;
                        }
                    }
                }
            }
        }
        break;
        case 3: break;
    }
    for ( J = 0; J < l_U3642; J++ )
    {
        if (NOT (IS_CAR_DEAD( l_U3642[J]._fU0 )))
        {
            GET_CAR_HEALTH( l_U3642[J]._fU0, ref iVar3 );
            if (iVar3 < 100)
            {
                EXPLODE_CAR( l_U3642[J]._fU0, 1, 0 );
            }
        }
        I = 0;
        for ( I = 0; I < 3; I++ )
        {
            if (IS_CHAR_DEAD( l_U3642[J]._fU4[I] ))
            {
                if (DOES_BLIP_EXIST( l_U3642[J]._fU36[I] ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3642[J]._fU36[I] );
                }
            }
            if (DOES_BLIP_EXIST( l_U3642[J]._fU36[I] ))
            {
                ;
            }
        }
    }
    if (NOT l_U5198)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1127.32300000, -986.77850000, 0.00000000, 400.00000000, 400.00000000, 400.00000000, 0 )))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1570089923 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1863929546 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1073680232 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 767847151 );
            l_U5198 = 1;
        }
    }
    if (l_U5247 > 0)
    {
        for ( J = 0; J < l_U3642; J++ )
        {
            if (NOT (IS_CAR_DEAD( l_U3642[J]._fU0 )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[J]._fU0 )))
                {
                    if (NOT IS_SCREEN_FADED_IN())
                    {
                        sub_14209( l_U5247, "boatAttackProg..." );
                        sub_82084();
                        if (NOT l_U5248)
                        {
                            PRINT_NOW( "YS1_ENEMFLE", 7500, 1 );
                            l_U5248 = 1;
                        }
                        l_U5247 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_82084()
{
    int[3] iVar2;

    array(ref iVar2, 3);
    if ((HAS_CAR_RECORDING_BEEN_LOADED( 495 )) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 467 )) AND (HAS_CAR_RECORDING_BEEN_LOADED( 466 ))))
    {
        if (NOT (IS_CAR_DEAD( l_U3642[0]._fU0 )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[0]._fU0 )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U3642[0]._fU0, 466 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U3642[0]._fU0, 12000 );
            }
            else
            {
                iVar2[0] = 1;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U3642[1]._fU0 )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[1]._fU0 )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U3642[1]._fU0, 467 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U3642[1]._fU0, 12000 );
            }
            else
            {
                iVar2[1] = 1;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U3642[2]._fU0 )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3642[2]._fU0 )))
            {
                START_PLAYBACK_RECORDED_CAR( l_U3642[2]._fU0, 495 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U3642[2]._fU0, 12000 );
            }
            else
            {
                iVar2[2] = 1;
            }
        }
    }
    else
    {
        REQUEST_CAR_RECORDING( 466 );
        REQUEST_CAR_RECORDING( 467 );
        REQUEST_CAR_RECORDING( 495 );
    }
    if ((iVar2[2]) AND ((iVar2[1]) AND (iVar2[0])))
    {
        return 1;
    }
    return 0;
}

int sub_83366(int iParam0)
{
    int I;

    if (NOT (IS_CHAR_DEAD( l_U3642[iParam0]._fU4[2] )))
    {
        for ( I = 0; I < l_U3642; I++ )
        {
            if (I != iParam0)
            {
                if (NOT (IS_CAR_DEAD( l_U3642[I]._fU0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U3642[iParam0]._fU4[2], l_U3642[I]._fU0, 5.00000000, 5.00000000, 5.00000000, 0 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_84486(boolean bParam0)
{
    int Result;
    float fVar4;
    float fVar5;
    unknown[2] uVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int J;
    int I;

    fVar4 = 100000.00000000;
    array(ref uVar6, 2);
    GET_CHAR_COORDINATES( sub_3454(), ref uVar6[0]._fU0, ref uVar6[0]._fU4, ref uVar6[0]._fU8 );
    for ( J = 0; J < l_U3642; J++ )
    {
        if (bParam0)
        {
            if (NOT (IS_CAR_DEAD( l_U3642[J]._fU0 )))
            {
                for ( I = 0; I <= 1; I++ )
                {
                    if (NOT (IS_CHAR_DEAD( l_U3642[J]._fU4[I] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U3642[J]._fU4[I], l_U3642[J]._fU0 ))
                        {
                            fVar5 = sub_84703( sub_3454(), l_U3642[J]._fU4[I] );
                            if (fVar5 < fVar4)
                            {
                                fVar4 = fVar5;
                                Result = l_U3642[J]._fU4[I];
                            }
                        }
                    }
                }
            }
        }
        else
        {
            for ( I = 0; I <= 2; I++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U3642[J]._fU4[I] )))
                {
                    fVar5 = sub_84703( sub_3454(), l_U3642[J]._fU4[I] );
                    if (fVar5 < fVar4)
                    {
                        fVar4 = fVar5;
                        Result = l_U3642[J]._fU4[I];
                    }
                }
            }
        }
    }
    if (Result == nil)
    {
        ;
    }
    return Result;
}

void sub_84703(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_CHAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref Result );
            return Result;
        }
    }
    return Result;
}

int sub_85166(int iParam0)
{
    int Result;
    int I;

    if (NOT (IS_CHAR_DEAD( iParam0 )))
    {
        for ( Result = 0; Result < l_U3642; Result++ )
        {
            if (NOT (IS_CAR_DEAD( l_U3642[Result]._fU0 )))
            {
                for ( I = 0; I <= 2; I++ )
                {
                    if (NOT (IS_CHAR_DEAD( l_U3642[Result]._fU4[I] )))
                    {
                        if (l_U3642[Result]._fU4[I] == iParam0)
                        {
                            return Result;
                        }
                    }
                }
            }
        }
    }
    return -1;
}

void sub_86194()
{
    unknown uVar2;

    uVar2 = sub_84486( 1 );
    if (NOT (IS_CHAR_DEAD( uVar2 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( uVar2, sub_3454(), 100.00000000, 100.00000000, 100.00000000, 0 ))
        {
            if (IS_CONTROL_PRESSED( 0, 45 ))
            {
                if (l_U5237 == 0)
                {
                    GET_GAME_TIMER( ref l_U5237 );
                }
                else
                {
                    GET_GAME_TIMER( ref l_U5239 );
                }
            }
            else if (l_U5237 != 0)
            {
                l_U5238 += l_U5239 - l_U5237;
                l_U5237 = 0;
            }
        }
    }
    return;
}

void sub_86369()
{
    unknown uVar2;

    uVar2 = sub_84486( 1 );
    if (NOT (IS_CHAR_DEAD( uVar2 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( uVar2, sub_3454(), 150.00000000, 150.00000000, 150.00000000, 0 ))
        {
            if (IS_CONTROL_PRESSED( 0, 39 ))
            {
                if (l_U5240 == 0)
                {
                    GET_GAME_TIMER( ref l_U5240 );
                }
                else
                {
                    GET_GAME_TIMER( ref l_U5242 );
                }
            }
            else if (l_U5240 != 0)
            {
                l_U5241 += l_U5242 - l_U5240;
                l_U5240 = 0;
            }
        }
    }
    return;
}

void sub_86555()
{
    int I;
    int Result;

    for ( I = 0; I < l_U3642; I++ )
    {
        if (NOT (IS_CAR_DEAD( l_U3642[I]._fU0 )))
        {
            Result++;
        }
    }
    return Result;
}

void sub_86765()
{
    return l_U5241;
}

void sub_86796()
{
    return l_U5238;
}

void sub_87864()
{
    int I;
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    iVar4 = 0;
    switch (l_U5232)
    {
        case 0:
        l_U5232 = 1;
        break;
        case 1:
        for ( I = 0; I < l_U3586; I++ )
        {
            if (NOT (IS_CAR_DEAD( l_U3586[I]._fU0 )))
            {
                iVar4++;
            }
        }
        if (iVar4 == 0)
        {
            l_U5232 = 2;
            l_U5156 = 1;
        }
        break;
    }
    for ( I = 0; I < l_U3586; I++ )
    {
        if (NOT (IS_CAR_DEAD( l_U3586[I]._fU0 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U3586[I]._fU4[0] )))
            {
                if (NOT l_U3586[I]._fU28)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3454(), l_U3586[I]._fU4[0], 200.00000000, 200.00000000, 200.00000000, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar5 );
                        TASK_HELI_MISSION( 0, l_U3586[I]._fU0, 0, sub_3454(), 0.00000000, 0.00000000, 0.00000000, 6, 30.00000000, 5, -1, 45, 40 );
                        CLOSE_SEQUENCE_TASK( uVar5 );
                        TASK_PERFORM_SEQUENCE( l_U3586[I]._fU4[0], uVar5 );
                        CLEAR_SEQUENCE_TASK( uVar5 );
                        l_U3586[I]._fU28 = 1;
                    }
                    else if (sub_66292( l_U3586[I]._fU32, 0.00000000, 0.00000000, 0.00000000 ))
                    {
                        GET_CHAR_COORDINATES( sub_3454(), ref l_U3586[I]._fU32._fU0, ref l_U3586[I]._fU32._fU4, ref l_U3586[I]._fU32._fU8 );
                        OPEN_SEQUENCE_TASK( ref uVar5 );
                        TASK_HELI_MISSION( 0, l_U3586[I]._fU0, 0, 0, l_U3586[I]._fU32._fU0, l_U3586[I]._fU32._fU4, l_U3586[I]._fU32._fU8, 4, 30.00000000, 5, -1, 45, 40 );
                        CLOSE_SEQUENCE_TASK( uVar5 );
                        TASK_PERFORM_SEQUENCE( l_U3586[I]._fU4[0], uVar5 );
                        CLEAR_SEQUENCE_TASK( uVar5 );
                    }
                }
            }
        }
    }
    for ( I = 0; I < l_U3586; I++ )
    {
        if (NOT (IS_CAR_DEAD( l_U3586[I]._fU0 )))
        {
            GET_CAR_HEALTH( l_U3586[I]._fU0, ref iVar3 );
            if (iVar3 < 700)
            {
                EXPLODE_CAR( l_U3586[I]._fU0, 1, 0 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U3586[I]._fU24 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U3586[I]._fU24 );
        }
    }
    return;
}

void sub_88666()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (l_U5179)
    {
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_3454(), l_U4972 ))
            {
                if (l_U5194)
                {
                    if (NOT l_U5185)
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "YS1_WHEL" )))
                        {
                            if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "YS1_WHEL" ))) AND (NOT l_U5186))
                            {
                                if (l_U5179)
                                {
                                    if (NOT (sub_38903( l_U4762 )))
                                    {
                                        PRINT_NOW( "YS1_PAD", 7500, 1 );
                                        l_U5185 = 1;
                                    }
                                }
                            }
                        }
                    }
                    else if (NOT l_U5203)
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP( "YS1_ALT" );
                            l_U5203 = 1;
                        }
                    }
                }
                else if (sub_38888())
                {
                    sub_39605( "E2Y1_LCHOP", ref l_U4762, 6, 1 );
                    l_U5194 = 1;
                }
            }
            else
            {
                CLEAR_HELP();
            }
        }
    }
    else if (sub_38888())
    {
        iVar2 = sub_39117( 100.00000000, 1, 0 );
        if (iVar2 > -1)
        {
            if (NOT (IS_CHAR_INJURED( l_U3874[iVar2]._fU0 )))
            {
                sub_5928( 1, l_U3874[iVar2]._fU0, "ARMS_DEALER", 0 );
                sub_39605( "E2Y1_ACHOP", ref l_U4762, 6, 1 );
                l_U5179 = 1;
            }
        }
        else
        {
            l_U5179 = 1;
        }
    }
    if (NOT l_U5200)
    {
        PLAY_SOUND_FROM_POSITION( l_U4881, "Y1_STEAL_CHOPPER_SHIP_ALARM", -1149.12200000, -989.36460000, 13.71939000 );
        l_U5200 = 1;
    }
    switch (l_U5184)
    {
        case 0:
        if (NOT (DOES_BLIP_EXIST( l_U5145 )))
        {
            ADD_BLIP_FOR_COORD( l_U5206._fU0, l_U5206._fU4, l_U5206._fU8, ref l_U5145 );
            SHOW_BLIP_ON_ALTIMETER( l_U5145, 1 );
        }
        sub_5121();
        l_U5184 = 1;
        break;
        case 1:
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_3454(), l_U4972 ))
            {
                if (DOES_BLIP_EXIST( l_U4982 ))
                {
                    CLEAR_THIS_PRINT( "YS1_BHEL" );
                    if (l_U5185)
                    {
                        if (NOT l_U5188)
                        {
                            l_U5188 = 1;
                        }
                    }
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U4982 );
                    if (NOT (DOES_BLIP_EXIST( l_U5145 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U5206._fU0, l_U5206._fU4, l_U5206._fU8, ref l_U5145 );
                        SHOW_BLIP_ON_ALTIMETER( l_U5145, 1 );
                    }
                }
                if (l_U5186)
                {
                    if (NOT l_U5193)
                    {
                        STOP_SOUND( l_U4878 );
                    }
                    if (NOT l_U5197)
                    {
                        if (sub_36871( l_U5191, 7000 ))
                        {
                            switch (l_U5192)
                            {
                                case 0:
                                if (sub_59142( 2, "E2Y1_CENEM", "E2Y1AUD" ))
                                {
                                    SET_PED_IS_BLIND_RAGING( sub_3454(), 0 );
                                    l_U5192++;
                                }
                                break;
                                case 1:
                                if ((sub_62757() == 2) || (sub_62496( 0 )))
                                {
                                    l_U5192++;
                                }
                                break;
                                case 2:
                                l_U5197 = 1;
                                break;
                            }
                        }
                    }
                    else if (LOCATE_CHAR_IN_CAR_3D( sub_3454(), l_U5206._fU0, l_U5206._fU4, l_U5206._fU8, 5.00000000, 5.00000000, 2.50000000, 1 ))
                    {
                        if (sub_89728())
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U5145 );
                            l_U4868 = 0;
                            l_U745 = 5;
                        }
                    }
                }
                else if (NOT l_U5189)
                {
                    if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_3454(), -1142.77700000, -988.49450000, 1.05540000, 300.00000000, 300.00000000, 600.00000000, 0 )))
                    {
                        if ((HAS_MODEL_LOADED( -1085774992 )) AND ((HAS_MODEL_LOADED( 1789985121 )) AND ((HAS_MODEL_LOADED( 2120126803 )) AND ((HAS_MODEL_LOADED( 1595218282 )) AND ((HAS_MODEL_LOADED( -1366166054 )) AND ((HAS_MODEL_LOADED( 518033353 )) AND ((HAS_MODEL_LOADED( 67157199 )) AND ((HAS_MODEL_LOADED( 1005833766 )) AND ((HAS_MODEL_LOADED( 1233545547 )) AND ((HAS_MODEL_LOADED( 1930762713 )) AND ((HAS_MODEL_LOADED( 1239854102 )) AND (HAS_MODEL_LOADED( -2075782048 )))))))))))))
                        {
                            STOP_STREAM();
                            l_U5189 = 1;
                        }
                    }
                    sub_49731();
                }
                else
                {
                    l_U745 = 3;
                }
            }
            else if (DOES_BLIP_EXIST( l_U5145 ))
            {
                CLEAR_THIS_PRINT( "YS1_PAD" );
                if (NOT l_U5187)
                {
                    PRINT_NOW( "YS1_BHEL", 7500, 1 );
                    l_U5187 = 1;
                }
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U5145 );
                ADD_BLIP_FOR_CAR( l_U4972, ref l_U4982 );
                sub_35928( l_U4982 );
                SET_BLIP_AS_FRIENDLY( l_U4982, 1 );
            }
            if (NOT l_U5186)
            {
                sub_49731();
            }
        }
        break;
    }
    if (l_U5204)
    {
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (IS_CHAR_IN_CAR( sub_3454(), l_U4972 ))
            {
                if (NOT l_U5205)
                {
                    PLAY_SOUND_FRONTEND( l_U4882, "HELICOPTER_ALARM_TONES" );
                    l_U5205 = 1;
                }
            }
            else
            {
                STOP_SOUND( l_U4882 );
                l_U5205 = 0;
            }
        }
        else
        {
            STOP_SOUND( l_U4882 );
        }
    }
    if (l_U5186)
    {
        if (NOT l_U5198)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3454(), -1127.32300000, -986.77850000, 0.00000000, 400.00000000, 400.00000000, 400.00000000, 0 )))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1570089923 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1863929546 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1073680232 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 767847151 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1484046419 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1238049536 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1496523498 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1752023391 );
                l_U5198 = 1;
            }
        }
        if (NOT l_U5199)
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3840 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3844 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U3845 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1033245328 );
            l_U5199 = 1;
        }
    }
    sub_42765( ref l_U3874 );
    return;
}

int sub_89728()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_3454(), l_U4972 ))
        {
            GET_CHAR_COORDINATES( sub_3454(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_CAR_SPEED( l_U4972, ref fVar5 );
            if (fVar5 < 0.10000000)
            {
                if (uVar2._fU8 < 162.00000000)
                {
                    if ((NOT (IS_CONTROL_PRESSED( 0, 55 ))) AND (NOT (IS_CONTROL_PRESSED( 0, 40 ))))
                    {
                        if (l_U5168 == 0)
                        {
                            GET_GAME_TIMER( ref l_U5168 );
                        }
                    }
                    else
                    {
                        l_U5168 = 0;
                    }
                }
                else
                {
                    l_U5168 = 0;
                    sub_75672( uVar2._fU8, "Too high..." );
                }
            }
            else
            {
                l_U5168 = 0;
                sub_75672( fVar5, "TOO FAST..." );
            }
        }
        else
        {
            l_U5168 = 0;
        }
        if (l_U5168 != 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_90843()
{
    unknown uVar2;
    int iVar3;
    float fVar4;
    float fVar5;

    if (NOT l_U5166)
    {
        if (NOT sub_90863())
        {
            l_U5166 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U5167) AND (l_U5163 > 0)))
    {
        if (sub_90863())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_4810( 0 );
            l_U5167 = 1;
            l_U5163 = 11;
        }
    }
    switch (l_U5163)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (sub_77132( 1, 1 ))
            {
                CLEAR_HELP();
                BEGIN_CAM_COMMANDS( ref l_U4903 );
                SET_PLAYER_CONTROL( sub_14417(), 0 );
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 494 )))
                {
                    REQUEST_CAR_RECORDING( 494 );
                    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 494 )))
                    {
                        WAIT( 0 );
                    }
                }
                CLEAR_WANTED_LEVEL( sub_14417() );
                l_U5147 = 0;
                l_U5148 = 0;
                if (NOT (DOES_CHAR_EXIST( l_U4778 )))
                {
                    sub_14667( 18 );
                    sub_14667( 17 );
                }
                STOP_SOUND( l_U4882 );
                SET_CHAR_COORDINATES( l_U4778, 270.34270000, -355.34540000, 161.13380000 );
                SET_CHAR_HEADING( l_U4778, 105.20580000 );
                SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                DISPLAY_RADAR( 0 );
                LOAD_SCENE( 260.97930000, -356.73220000, 160.99080000 );
                CLEAR_AREA( 260.97930000, -356.73220000, 161.53190000, 100.00000000, 1 );
                if (NOT (IS_CAR_DEAD( l_U4972 )))
                {
                    SET_CAR_COORDINATES( l_U4972, 260.97930000, -356.73220000, 161.53190000 );
                    SET_CAR_HEADING( l_U4972, 306.87360000 );
                    APPLY_FORCE_TO_CAR( l_U4972, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                    SET_CAR_ENGINE_ON( l_U4972, 1, 1 );
                    OPEN_CAR_DOOR( l_U4972, 1 );
                    if (IS_CHAR_IN_ANY_CAR( sub_3454() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_3454(), 259.84930000, -354.69320000, 160.99080000 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U4779 )))
                    {
                        WARP_CHAR_INTO_CAR( l_U4779, l_U4972 );
                    }
                    SET_HELI_BLADES_FULL_SPEED( l_U4972 );
                    ATTACH_PED_TO_CAR( sub_3454(), l_U4972, 0, 0.56500000, 1.15300000, 0.00000000, 265.70000000, 0, 0, 0 );
                    ATTACH_PED_TO_CAR( l_U4778, l_U4972, 0, 3.19800000, 2.26500000, 0.00000000, 88.00000000, 0, 0, 0 );
                }
                SET_CAR_PROOFS( l_U4972, 1, 1, 1, 1, 1 );
                CREATE_CAM( 14, ref l_U4904[6] );
                CREATE_CAM( 14, ref l_U4904[7] );
                CREATE_CAM( 3, ref l_U4904[8] );
                CREATE_CAM( 14, ref l_U4904[12] );
                CREATE_CAM( 14, ref l_U4904[13] );
                CREATE_CAM( 14, ref l_U4904[14] );
                CREATE_CAM( 3, ref l_U4904[15] );
                CREATE_CAM( 14, ref l_U4904[9] );
                CREATE_CAM( 14, ref l_U4904[10] );
                CREATE_CAM( 3, ref l_U4904[11] );
                CREATE_CAM( 14, ref l_U4904[23] );
                CREATE_CAM( 14, ref l_U4904[24] );
                CREATE_CAM( 3, ref l_U4904[25] );
                CREATE_CAM( 14, ref l_U4904[16] );
                CREATE_CAM( 14, ref l_U4904[17] );
                CREATE_CAM( 3, ref l_U4904[18] );
                CREATE_CAM( 14, ref l_U4904[19] );
                CREATE_CAM( 14, ref l_U4904[20] );
                CREATE_CAM( 3, ref l_U4904[21] );
                CREATE_CAM( 14, ref l_U4904[22] );
                SET_CAM_POS( l_U4904[6], 288.20630000, -350.20430000, 168.65520000 );
                SET_CAM_ROT( l_U4904[6], 0.88126200, 0.00000000, 104.61210000 );
                SET_CAM_FOV( l_U4904[6], 31.80003000 );
                SET_CAM_ACTIVE( l_U4904[6], 0 );
                SET_CAM_PROPAGATE( l_U4904[6], 0 );
                SET_CAM_POS( l_U4904[7], 288.16320000, -350.21590000, 165.74690000 );
                SET_CAM_ROT( l_U4904[7], 0.88126200, 0.00000000, 104.61210000 );
                SET_CAM_FOV( l_U4904[7], 31.80003000 );
                SET_CAM_ACTIVE( l_U4904[7], 0 );
                SET_CAM_PROPAGATE( l_U4904[7], 0 );
                SET_CAM_ACTIVE( l_U4904[8], 0 );
                SET_CAM_PROPAGATE( l_U4904[8], 0 );
                SET_CAM_POS( l_U4904[12], 262.57980000, -358.41640000, 162.01240000 );
                SET_CAM_ROT( l_U4904[12], 22.60968000, -0.00000000, 9.02211000 );
                SET_CAM_FOV( l_U4904[12], 34.20003000 );
                SET_CAM_ACTIVE( l_U4904[12], 1 );
                SET_CAM_PROPAGATE( l_U4904[12], 1 );
                SET_CAM_POS( l_U4904[13], 263.26820000, -354.87280000, 161.65030000 );
                SET_CAM_ROT( l_U4904[13], 6.21398400, 0.00000000, -158.76760000 );
                SET_CAM_FOV( l_U4904[13], 33.60003000 );
                SET_CAM_ACTIVE( l_U4904[13], 0 );
                SET_CAM_PROPAGATE( l_U4904[13], 0 );
                SET_CAM_POS( l_U4904[14], 267.46510000, -354.83120000, 161.65030000 );
                SET_CAM_ROT( l_U4904[14], 6.21398300, 0.00000000, 136.11400000 );
                SET_CAM_FOV( l_U4904[14], 33.60003000 );
                SET_CAM_ACTIVE( l_U4904[14], 0 );
                SET_CAM_PROPAGATE( l_U4904[14], 0 );
                SET_CAM_POS( l_U4904[16], 267.98460000, -359.48730000, 161.59820000 );
                SET_CAM_ROT( l_U4904[16], 5.87184900, 0.00000000, 56.26260000 );
                SET_CAM_FOV( l_U4904[16], 31.20003000 );
                SET_CAM_ACTIVE( l_U4904[16], 0 );
                SET_CAM_PROPAGATE( l_U4904[16], 0 );
                SET_CAM_POS( l_U4904[17], 265.56210000, -361.16900000, 161.59820000 );
                SET_CAM_ROT( l_U4904[17], 5.87184900, 0.00000000, 14.73664000 );
                SET_CAM_FOV( l_U4904[17], 31.20003000 );
                SET_CAM_ACTIVE( l_U4904[17], 0 );
                SET_CAM_PROPAGATE( l_U4904[17], 0 );
                SET_CAM_POS( l_U4904[19], 268.64880000, -358.31870000, 161.49060000 );
                SET_CAM_ROT( l_U4904[19], 7.98193900, 0.00000000, 78.21056000 );
                SET_CAM_FOV( l_U4904[19], 31.20003000 );
                SET_CAM_ACTIVE( l_U4904[19], 0 );
                SET_CAM_PROPAGATE( l_U4904[19], 0 );
                SET_CAM_POS( l_U4904[20], 268.32640000, -359.57440000, 161.49060000 );
                SET_CAM_ROT( l_U4904[20], 7.98193700, -0.00000000, 58.97940000 );
                SET_CAM_FOV( l_U4904[20], 31.20003000 );
                SET_CAM_ACTIVE( l_U4904[20], 0 );
                SET_CAM_PROPAGATE( l_U4904[20], 0 );
                SET_CAM_POS( l_U4904[10], 259.67210000, -362.57450000, 162.91040000 );
                SET_CAM_ROT( l_U4904[10], -5.84816700, -0.00000000, 32.06308000 );
                SET_CAM_FOV( l_U4904[10], 42.00001000 );
                SET_CAM_ACTIVE( l_U4904[10], 0 );
                SET_CAM_PROPAGATE( l_U4904[10], 0 );
                SET_CAM_POS( l_U4904[23], 250.20860000, -361.79450000, 163.07230000 );
                SET_CAM_ROT( l_U4904[23], -4.07963500, 0.00000000, -58.10103000 );
                SET_CAM_FOV( l_U4904[23], 38.40002000 );
                SET_CAM_ACTIVE( l_U4904[23], 0 );
                SET_CAM_PROPAGATE( l_U4904[23], 0 );
                SET_CAM_POS( l_U4904[24], 251.13050000, -361.13440000, 179.03960000 );
                SET_CAM_ROT( l_U4904[24], -4.07963100, 0.00000000, -46.64186000 );
                SET_CAM_FOV( l_U4904[24], 38.40002000 );
                SET_CAM_ACTIVE( l_U4904[24], 0 );
                SET_CAM_PROPAGATE( l_U4904[24], 0 );
                SET_CAM_POS( l_U4904[22], 262.43530000, -350.43790000, 161.10530000 );
                SET_CAM_ROT( l_U4904[22], 18.14836000, 0.00000000, 150.59550000 );
                SET_CAM_FOV( l_U4904[22], 40.20001000 );
                SET_CAM_ACTIVE( l_U4904[22], 0 );
                SET_CAM_PROPAGATE( l_U4904[22], 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                GET_GAME_TIMER( ref l_U5162 );
                l_U5163 = 2;
            }
        }
        break;
        case 2:
        if (NOT l_U5169)
        {
            if (NOT (IS_CAR_DEAD( l_U4972 )))
            {
                GET_DOOR_ANGLE_RATIO( l_U4972, 1, ref fVar5 );
                if ((sub_36871( l_U5162, 15000 )) || (fVar5 > 0.90000000))
                {
                    if (NOT (IS_CHAR_DEAD( l_U4778 )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_PLAY_ANIM( 0, "Luis_helipad", "MissYusuf01", 1000.00000000, 0, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( sub_3454(), uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_PLAY_ANIM( 0, "Ahmed_helipad", "MissYusuf01", 1000.00000000, 0, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U4778, uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                    }
                    l_U5169 = 1;
                }
            }
        }
        else if (l_U5170)
        {
            l_U5170 = 0;
            l_U5171 = 0;
        }
        else if (sub_94019( sub_3454(), "missYusuf01", "Luis_helipad", 0.02480000 ))
        {
            DO_SCREEN_FADE_IN( 500 );
            SET_CAM_ACTIVE( l_U4904[13], 1 );
            SET_CAM_ACTIVE( l_U4904[14], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U4904[15], l_U4904[13], l_U4904[14], 6000, 0 );
            SET_CAM_ACTIVE( l_U4904[15], 1 );
            SET_CAM_PROPAGATE( l_U4904[15], 1 );
            SET_CAM_ACTIVE( l_U4904[12], 0 );
            SET_CAM_PROPAGATE( l_U4904[12], 0 );
            GET_GAME_TIMER( ref l_U5162 );
            l_U5173 = 1;
            l_U5163 = 5;
        };;;
        break;
        case 5:
        iVar3 = sub_94278( l_U4762 );
        if ((iVar3 > 0) || (sub_36871( l_U5162, 5500 )))
        {
            SET_CAM_ACTIVE( l_U4904[16], 1 );
            SET_CAM_ACTIVE( l_U4904[17], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U4904[18], l_U4904[16], l_U4904[17], 6000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U4904[18], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U4904[18], 1 );
            SET_CAM_PROPAGATE( l_U4904[18], 1 );
            SET_CAM_ACTIVE( l_U4904[15], 0 );
            SET_CAM_PROPAGATE( l_U4904[15], 0 );
            GET_GAME_TIMER( ref l_U5162 );
            l_U5163 = 6;
        }
        break;
        case 6:
        if (sub_36871( l_U5162, 5500 ))
        {
            SET_CAM_ACTIVE( l_U4904[19], 1 );
            SET_CAM_ACTIVE( l_U4904[20], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U4904[21], l_U4904[19], l_U4904[20], 9000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U4904[21], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U4904[21], 1 );
            SET_CAM_PROPAGATE( l_U4904[21], 1 );
            SET_CAM_ACTIVE( l_U4904[18], 0 );
            SET_CAM_PROPAGATE( l_U4904[18], 0 );
            GET_GAME_TIMER( ref l_U5162 );
            l_U5163 = 9;
        }
        break;
        case 9:
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U4778 )))
            {
                if ((sub_36871( l_U5162, 15000 )) || (sub_94019( l_U4778, "missYusuf01", "Ahmed_helipad", 0.92000000 )))
                {
                    if (IS_PED_ATTACHED_TO_ANY_CAR( l_U4778 ))
                    {
                        DETACH_PED( l_U4778, 1 );
                        DELETE_CHAR( ref l_U4778 );
                    }
                    if (IS_PED_ATTACHED_TO_ANY_CAR( sub_3454() ))
                    {
                        DETACH_PED( sub_3454(), 1 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U4779 )))
                    {
                        SET_CHAR_VISIBLE( l_U4779, 1 );
                    }
                    START_PLAYBACK_RECORDED_CAR( l_U4972, 494 );
                    SET_CAM_ACTIVE( l_U4904[23], 1 );
                    SET_CAM_PROPAGATE( l_U4904[23], 1 );
                    SET_CAM_ACTIVE( l_U4904[21], 0 );
                    SET_CAM_PROPAGATE( l_U4904[21], 0 );
                    SET_CHAR_COORDINATES( sub_3454(), 246.35700000, -357.21010000, 159.07880000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3454() );
                    CLOSE_ALL_CAR_DOORS( l_U4972 );
                    GET_GAME_TIMER( ref l_U5162 );
                    l_U5163 = 10;
                }
            }
        }
        break;
        case 10:
        if (NOT (IS_CAR_DEAD( l_U4972 )))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U4972 )))
            {
                if (sub_36871( l_U5162, 1000 ))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U4972, 494 );
                }
            }
            else
            {
                fVar4 = FIND_TIME_POSITION_IN_RECORDING( l_U4972 );
                if (fVar4 > 0)
                {
                    SET_CAM_ACTIVE( l_U4904[23], 0 );
                    SET_CAM_PROPAGATE( l_U4904[23], 0 );
                    SET_CAM_INTERP_STYLE_CORE( l_U4904[25], l_U4904[23], l_U4904[24], 6000, 0 );
                    SET_CAM_ACTIVE( l_U4904[25], 1 );
                    SET_CAM_PROPAGATE( l_U4904[25], 1 );
                    GET_GAME_TIMER( ref l_U5162 );
                    l_U5163 = 11;
                }
            }
        }
        break;
        case 11:
        if ((l_U5167) || ((sub_36871( l_U5162, 6000 )) || (IS_KEYBOARD_KEY_JUST_PRESSED( 2 ))))
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            SET_CAM_ACTIVE( l_U4904[12], 0 );
            SET_CAM_PROPAGATE( l_U4904[12], 0 );
            SET_CAM_ACTIVE( l_U4904[13], 0 );
            SET_CAM_PROPAGATE( l_U4904[13], 0 );
            SET_CAM_ACTIVE( l_U4904[14], 0 );
            SET_CAM_PROPAGATE( l_U4904[14], 0 );
            SET_CAM_ACTIVE( l_U4904[15], 0 );
            SET_CAM_PROPAGATE( l_U4904[15], 0 );
            SET_CAM_ACTIVE( l_U4904[6], 0 );
            SET_CAM_PROPAGATE( l_U4904[6], 0 );
            SET_CAM_ACTIVE( l_U4904[7], 0 );
            SET_CAM_PROPAGATE( l_U4904[7], 0 );
            SET_CAM_ACTIVE( l_U4904[8], 0 );
            SET_CAM_PROPAGATE( l_U4904[8], 0 );
            SET_CAM_ACTIVE( l_U4904[9], 0 );
            SET_CAM_PROPAGATE( l_U4904[9], 0 );
            SET_CAM_ACTIVE( l_U4904[10], 0 );
            SET_CAM_PROPAGATE( l_U4904[10], 0 );
            SET_CAM_ACTIVE( l_U4904[11], 0 );
            SET_CAM_PROPAGATE( l_U4904[11], 0 );
            SET_CAM_ACTIVE( l_U4904[16], 0 );
            SET_CAM_PROPAGATE( l_U4904[16], 0 );
            SET_CAM_ACTIVE( l_U4904[17], 0 );
            SET_CAM_PROPAGATE( l_U4904[17], 0 );
            SET_CAM_ACTIVE( l_U4904[18], 0 );
            SET_CAM_PROPAGATE( l_U4904[18], 0 );
            SET_CAM_ACTIVE( l_U4904[19], 0 );
            SET_CAM_PROPAGATE( l_U4904[19], 0 );
            SET_CAM_ACTIVE( l_U4904[20], 0 );
            SET_CAM_PROPAGATE( l_U4904[20], 0 );
            SET_CAM_ACTIVE( l_U4904[21], 0 );
            SET_CAM_PROPAGATE( l_U4904[21], 0 );
            SET_CAM_ACTIVE( l_U4904[22], 0 );
            SET_CAM_PROPAGATE( l_U4904[22], 0 );
            DESTROY_CAM( l_U4904[8] );
            DESTROY_CAM( l_U4904[7] );
            DESTROY_CAM( l_U4904[6] );
            DESTROY_CAM( l_U4904[12] );
            DESTROY_CAM( l_U4904[15] );
            DESTROY_CAM( l_U4904[14] );
            DESTROY_CAM( l_U4904[13] );
            DESTROY_CAM( l_U4904[11] );
            DESTROY_CAM( l_U4904[10] );
            DESTROY_CAM( l_U4904[9] );
            DESTROY_CAM( l_U4904[18] );
            DESTROY_CAM( l_U4904[16] );
            DESTROY_CAM( l_U4904[17] );
            DESTROY_CAM( l_U4904[21] );
            DESTROY_CAM( l_U4904[19] );
            DESTROY_CAM( l_U4904[20] );
            DESTROY_CAM( l_U4904[22] );
            sub_96193( ref l_U4762, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CLEAR_PRINTS();
            END_CAM_COMMANDS( ref l_U4903 );
            if (DOES_CHAR_EXIST( l_U4778 ))
            {
                DELETE_CHAR( ref l_U4778 );
            }
            if (DOES_CHAR_EXIST( l_U4779 ))
            {
                DELETE_CHAR( ref l_U4779 );
            }
            if (IS_PED_ATTACHED_TO_ANY_CAR( sub_3454() ))
            {
                DETACH_PED( sub_3454(), 1 );
            }
            if (DOES_VEHICLE_EXIST( l_U4972 ))
            {
                DELETE_CAR( ref l_U4972 );
            }
            LOAD_SCENE( 241.88950000, -327.37100000, 8.07160000 );
            SET_CHAR_COORDINATES( sub_3454(), 241.88950000, -327.37100000, 8.07160000 );
            SET_CHAR_HEADING( sub_3454(), 85.53790000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            DO_SCREEN_FADE_IN( 500 );
            SET_PLAYER_CONTROL( sub_14417(), 1 );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            sub_96602();
            l_U5163 = 12;
        }
        break;
        case 12:
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 3 ))
        {
            l_U5163 = 0;
            l_U5164 = 0;
        }
        break;
    }
    if (l_U5170)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_3454(), "missYusuf01", "Luis_helipad" ))
        {
            if (sub_94019( sub_3454(), "missYusuf01", "Luis_helipad", 0.00000000 ))
            {
                SET_CHAR_ANIM_CURRENT_TIME( sub_3454(), "missYusuf01", "Luis_helipad", 0.00000000 );
            }
        }
    }
    if (l_U5171)
    {
        if (NOT (IS_CHAR_DEAD( l_U4778 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U4778, "missYusuf01", "Ahmed_helipad" ))
            {
                if (sub_94019( l_U4778, "missYusuf01", "Ahmed_helipad", 0.00000000 ))
                {
                    SET_CHAR_ANIM_CURRENT_TIME( l_U4778, "missYusuf01", "Ahmed_helipad", 0.00000000 );
                }
            }
        }
    }
    if (l_U5173)
    {
        if (NOT l_U5172)
        {
            if (sub_94019( sub_3454(), "missYusuf01", "Luis_helipad", 0.10000000 ))
            {
                sub_39605( "E2Y1_ENDCT", ref l_U4762, 6, 1 );
                l_U5172 = 1;
            }
        }
    }
    return 0;
}

int sub_90863()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_94019(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3)
{
    float fVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_PLAYING_ANIM( uParam0, uParam1, uParam2 ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( uParam0, uParam1, uParam2, ref fVar6 );
            if (fVar6 >= fParam3)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_94278(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_38903( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_96193(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_96602()
{
    if (g_U3)
    {
        TRIGGER_MISSION_COMPLETE_AUDIO( 80 );
    }
    else
    {
        g_U25 = 80;
    }
    sub_96643( 47 );
    UNLOCK_MISSION_NEWS_STORY( 72 );
    CLEAR_WANTED_LEVEL( sub_14417() );
    sub_97827();
    sub_3445();
    return;
}

void sub_96643(int iParam0)
{
    if (iParam0 >= g_U1459)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_96730( iParam0 ))
    {
        sub_97780( iParam0 );
    }
    return;
}

int sub_96730(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1459[uParam0], 21 )) || (IS_BIT_SET( g_U1459[uParam0], 20 )))
    {
        return 0;
    }
    sub_96787( ref uVar3, 1, 0, 0 );
    sub_97399( uVar3, ref g_U1459[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1459[uParam0], 22, 31, g_U1459[0] );
    g_U1459[0]++;
    SET_BIT( ref g_U1459[uParam0], 20 );
    sub_39015( "\n ----------------------------------------------------------------" );
    sub_6008( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_39015( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_96787(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_96840( iParam0, uParam1, uParam2 );
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
        sub_96972( iParam0 + 0 );
    }
    return;
}

void sub_96840(int iParam0, int iParam1, int iParam2)
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
        sub_96972( iParam0 + 0 );
    }
    return;
}

void sub_96972(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_97003( iParam0->_fU4 )))
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

int sub_97003(unknown uParam0)
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

void sub_97399(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_97780(unknown uParam0)
{
    return;
}

void sub_97827()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_97845();
    sub_97904( iVar2, iVar3, iVar4 );
    return;
}

void sub_97845()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U204[I] = 4;
    }
    return;
}

void sub_97904(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 2;
    sub_97932( iVar5, uParam0, uParam1, uParam2, "Yusuf" );
    return;
}

void sub_97932(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int I;
    int iVar27;
    boolean bVar28;
    unknown uVar29;
    unknown uVar30;
    int iVar31;
    boolean bVar32;

    if (bParam1)
    {
        if (g_U43133)
        {
            sub_97960();
            return;
        }
    }
    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14925[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_98134( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_98134( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14925[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_98134( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_98134( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU160._fU76;
    }
    else if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_98134( ref cVar9 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_98134( ref cVar9 );
        return;
    }
    iVar7 = g_U14925[uParam0]._fU0._fU4;
    iVar8 = sub_98711( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12382[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14925[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12382[uParam0]._fU148[I]._fU8++;
            if ((g_U12382[uParam0]._fU148[I]._fU8 >= g_U12382[uParam0]._fU148[I]._fU4) AND (NOT g_U12382[uParam0]._fU148[I]._fU12))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12382[uParam0]._fU148[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_99159( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14925[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_14417() );
    sub_2437();
    bVar28 = true;
    uVar29 = sub_98711( uParam0, iVar7 );
    uVar30 = sub_2057( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14925[uParam0]._fU0._fU56;
        if ((iVar31 == 6) || (iVar31 == 5))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U22960[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10961 );
                sub_103433( 9, ref g_U14925[uParam0]._fU0._fU24 );
                if ((g_U12379) AND (NOT bVar28))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_97960();
                    g_U10953._fU8 = 1;
                    g_U10953._fU20 = sub_103884( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_103963( uParam0 );
                sub_104002( 0 );
                sub_2335( uVar30, 0 );
                g_U11076 = 0;
            }
            g_U12382[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_104177();
        }
    }
    if (bParam2)
    {
        sub_97960();
        sub_104276();
        sub_104002( 0 );
        g_U11062 = 1;
        g_U11076 = 0;
    }
    if (bParam3)
    {
        sub_97960();
        sub_104328();
        sub_104002( 0 );
        sub_2335( uVar30, 0 );
    }
    sub_1944();
    return;
}

void sub_97960()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_98134(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_98711(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_2288( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U28562[iParam0]._fU0;
    iVar5 = g_U28562[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U22960[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_99159(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_99255( uParam1 );
        break;
        case 1:
        bVar8 = sub_100136( uParam1 );
        break;
        case 2:
        bVar8 = sub_100325( uParam1 );
        break;
        case 3:
        bVar8 = sub_100543( uParam1 );
        break;
        case 4:
        bVar8 = sub_101141( uParam1 );
        break;
        case 5:
        bVar8 = sub_101274( uParam1 );
        break;
        case 6:
        bVar8 = sub_101471( uParam1 );
        break;
        case 7:
        bVar8 = sub_101608( uParam1 );
        break;
        case 8:
        bVar8 = sub_101757( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_100754( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_98711( uParam0, uParam1 );
    if (bParam3)
    {
        sub_101975( uVar9, uParam0 );
    }
    return 1;
}

int sub_99255(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_99422( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        sub_99422( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_99422( iVar3, 1500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_99422( iVar3, 500, 0, 0, 0, 0 );
        break;
        case 5:
        sub_99422( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 6:
        sub_99422( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 7:
        sub_99422( iVar3, 3000, 5, 2, 0, 0 );
        break;
        case 8:
        sub_99422( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 9:
        sub_99422( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 10:
        sub_99422( iVar3, 4500, 5, 2, 0, 0 );
        break;
        case 11:
        sub_99422( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 12:
        sub_99422( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 0:
        case 13:
        case 14:
        case 15:
        case 16: break;
        default:
        sub_100044( "Gay Tony", 1 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_100044( "Gay Tony", 0 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_99422(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_99433( uParam1 );
    sub_99607( uParam0, 0, uParam2 );
    sub_99607( uParam0, 1, uParam3 );
    sub_99607( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_97845();
    return;
}

void sub_99433(unknown uParam0)
{
    ADD_SCORE( sub_14417(), uParam0 );
    sub_99458( uParam0 );
    return;
}

void sub_99458(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2288( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_99607(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_100044(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_100136(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_99422( iVar3, 500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_99422( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_99422( iVar3, 1500, 5, 2, 0, 0 );
        break;
        default:
        sub_100044( "Mori", 1 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_100044( "Mori", 0 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_100325(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_99422( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_99422( iVar3, 15000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_99422( iVar3, 20000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_99422( iVar3, 25000, 5, 2, 0, 0 );
        break;
        default:
        sub_100044( "Yusuf", 1 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_100044( "Yusuf", 0 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_100543(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_99422( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_99422( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 2:
        sub_99422( iVar3, 0, sub_100632(), sub_100898(), 0, 0 );
        break;
        default:
        sub_100044( "Dominicans", 1 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_100044( "Dominicans", 0 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_100632()
{
    switch (l_U204[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_100754( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_100754(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_100898()
{
    switch (l_U204[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_100754( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_101141(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_99422( iVar3, 1000, 5, 2, 0, 0 );
        break;
        default:
        sub_100044( "Mum", 1 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_100044( "Mum", 0 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_101274(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_99422( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_99422( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_99422( iVar3, 6000, 5, 2, 0, 0 );
        break;
        default:
        sub_100044( "Bulgarin", 1 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_100044( "Bulgarin", 0 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_101471(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_99422( iVar3, 5000, 5, 2, 0, 0 );
        break;
        default:
        sub_100044( "Rocco", 1 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_100044( "Rocco", 0 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_101608(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_99422( iVar3, 0, sub_100632(), sub_100898(), 0, 0 );
        break;
        default:
        sub_100044( "Henrique", 1 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_100044( "Henrique", 0 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_101757(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    if (bVar4)
    {
        sub_100044( "Reserve 1", 0 );
        sub_99422( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_101975(int iParam0, int iParam1)
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
    if (g_U10972)
    {
        return;
    }
    if (sub_102036( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_102762( iParam1 );
    }
    return;
}

int sub_102036(int iParam0, int iParam1)
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
    iVar4 = g_U14925[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U22960[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U22960[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_102176( 0, iVar6 );
            g_U14902[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U22960[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_102176(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_102346( 0 );
    return;
}

void sub_102346(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_102591();
    }
    if ((NOT ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_102591()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_102762(int iParam0)
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
    if (g_U14902[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14902[iParam0]._fU4 == g_U14902[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14902[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14902[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_103001( 188 );
        SET_FLOAT_STAT( 188, fVar3 );
        break;
        case 1:
        sub_103001( 192 );
        SET_FLOAT_STAT( 192, fVar3 );
        break;
        case 2:
        sub_103001( 191 );
        SET_FLOAT_STAT( 191, fVar3 );
        break;
        case 3:
        sub_103001( 197 );
        SET_FLOAT_STAT( 197, fVar3 );
        break;
        case 4: break;
        case 5:
        sub_103001( 200 );
        SET_FLOAT_STAT( 200, fVar3 );
        break;
        case 6:
        sub_103001( 201 );
        SET_FLOAT_STAT( 201, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_103001(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_103433(unknown uParam0, unknown uParam1)
{
    sub_103452( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_103452(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_103884(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 12)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        if (iParam1 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_103963(unknown uParam0)
{
    sub_1805();
    g_U12382[uParam0]._fU120 = 0;
    return;
}

void sub_104002(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_104053( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_104053(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_104177()
{
    sub_104186();
    return;
}

void sub_104186()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_104276()
{
    sub_104186();
    return;
}

void sub_104328()
{
    sub_104186();
    StrCopy( ref g_U10966, "FPASS", 16 );
    return;
}

void sub_104901()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_KEYBOARD_KEY_JUST_PRESSED( 11 ))
    {
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -1141632236, -28737275 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 2052240693, 1699083005 );
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 2 ))
    {
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, -28737275, -1141632236 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 50.00000000, 1699083005, 2052240693 );
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 3 ))
    {
        sub_5598( "About to swap building" );
        sub_5598( "Done building" );
        sub_5598( "About to swap LOD" );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, 459792206, -843141289 );
        sub_5598( "Done LOD" );
        l_U5142 = 0;
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -1366882930, -1313618655 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -1143889885, -740515878 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -855358840, -529900459 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -530945740, -1031741483 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, 1993446944, 13155365 );
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 4 ))
    {
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -843141289, 459792206 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -1313618655, -1366882930 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -740515878, -1143889885 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -529900459, -855358840 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -1031741483, -530945740 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, 13155365, 1993446944 );
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 5 ))
    {
        REQUEST_MODEL( -2075782048 );
        REQUEST_MODEL( 1239854102 );
        REQUEST_MODEL( 1930762713 );
        REQUEST_MODEL( 1233545547 );
        REQUEST_MODEL( 1005833766 );
        REQUEST_MODEL( 67157199 );
        REQUEST_MODEL( 518033353 );
        REQUEST_MODEL( -1366166054 );
        REQUEST_MODEL( 1595218282 );
        REQUEST_MODEL( 2120126803 );
        REQUEST_MODEL( 1789985121 );
        while ((NOT (HAS_MODEL_LOADED( 1789985121 ))) || ((NOT (HAS_MODEL_LOADED( 2120126803 ))) || ((NOT (HAS_MODEL_LOADED( 1595218282 ))) || ((NOT (HAS_MODEL_LOADED( -1366166054 ))) || ((NOT (HAS_MODEL_LOADED( 518033353 ))) || ((NOT (HAS_MODEL_LOADED( 67157199 ))) || ((NOT (HAS_MODEL_LOADED( 1005833766 ))) || ((NOT (HAS_MODEL_LOADED( 1233545547 ))) || ((NOT (HAS_MODEL_LOADED( 1930762713 ))) || ((NOT (HAS_MODEL_LOADED( 1239854102 ))) || (NOT (HAS_MODEL_LOADED( -2075782048 )))))))))))))
        {
            WAIT( 0 );
        }
        sub_14667( 4 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U746[1]._fU0, 0.00000000, 31.50000000, 4.50000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        l_U5378 = START_PTFX( "amb_ship_plume", uVar2, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
        sub_106119( uVar2, "World loc..." );
        l_U5142 = 0;
        SCRIPT_ASSERT( "Hit" );
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 6 ))
    {
        sub_56788( 0 );
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 7 ))
    {
        sub_5598( "About to swap building" );
        sub_5598( "Done building" );
        sub_5598( "About to swap LOD" );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, 459792206, -670316162 );
        sub_5598( "Done LOD" );
        l_U5142 = 0;
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -1366882930, -1313618655 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -1143889885, 256624776 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -855358840, 163992799 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, -530945740, -285371601 );
        SWAP_NEAREST_BUILDING_MODEL( -1108.28700000, -982.51030000, 8.33730000, 100.00000000, 1993446944, 288897752 );
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 8 ))
    {
        sub_79342();
    }
    return;
}

void sub_106119(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

int sub_106604(unknown uParam0)
{
    int iVar3;

    if (g_U9596 == 0)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3454(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3454(), uParam0, 100.00000000, 100.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3454(), uParam0, 50.00000000, 50.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref iVar3 );
                    if ((iVar3 - l_U115) >= 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U115 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U115 );
            }
        }
    }
    return 0;
}

void sub_107127()
{
    if (NOT (sub_38903( l_U4762 )))
    {
        if ((sub_36871( l_U5244, 10000 )) || (l_U5244 == 0))
        {
            if (sub_107179())
            {
                SAY_AMBIENT_SPEECH( sub_3454(), "MISSION_BLIND_RAGE", 1, 1, 1 );
                GET_GAME_TIMER( ref l_U5244 );
            }
        }
    }
    return;
}

int sub_107179()
{
    if (NOT (IS_CAR_DEAD( l_U4972 )))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_3454(), l_U4972 ))
        {
            if (NOT l_U5243)
            {
                if ((IS_CONTROL_PRESSED( 0, 45 )) || (IS_CONTROL_PRESSED( 0, 39 )))
                {
                    l_U5243 = 1;
                }
            }
            else if ((NOT (IS_CONTROL_PRESSED( 0, 45 ))) AND (NOT (IS_CONTROL_PRESSED( 0, 39 ))))
            {
                l_U5243 = 0;
                return 1;
            }
        }
    }
    return 0;
}

void sub_107387()
{
    int Result;
    int I;

    Result = 0;
    if (sub_107399())
    {
        Result = 1;
    }
    if (l_U5247 > 0)
    {
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U3642[I]._fU0 )))
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_107399()
{
    if (l_U5300 > 0)
    {
        if (NOT l_U5314)
        {
            if (NOT l_U5230)
            {
                if (NOT (IS_VEH_DRIVEABLE( l_U3642[0]._fU0 )))
                {
                    l_U5314 = 1;
                }
            }
        }
    }
    return l_U5314;
}

void sub_107581(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (sub_107590() == 0)
    {
        sub_107615();
    }
    if (HAS_SCRIPT_LOADED( "MissionResultsTimer" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) == 0)
        {
            START_NEW_SCRIPT( "MissionResultsTimer", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionResultsTimer" );
        }
    }
    if (sub_110370() <= g_U43138[g_U43137]._fU8)
    {
        g_U43568 = 1;
    }
    else
    {
        g_U43568 = 0;
    }
    if (g_U43600 == 1)
    {
        g_U43612 = sub_110652();
        g_U43600 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_110370() < g_U43612)
            {
                g_U43575 = 1;
            }
            else
            {
                g_U43575 = 0;
            }
        }
        else
        {
            g_U43575 = 0;
        }
    }
    else
    {
        g_U43575 = 0;
    }
    if (g_U43137 == 22)
    {
        if ((sub_111445( 0, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_111755();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_111445( 0, 0, 0 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 17)
    {
        if ((sub_111445( 1, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_111755();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_111445( 1, 0, 0 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 15)
    {
        g_U43519 = uParam0;
        if (g_U43519 >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_111755();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (g_U43519 > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if ((g_U43137 == 16) || (g_U43137 == 18))
    {
        if ((sub_111445( 0, 0, 1 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_111755();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_111445( 0, 0, 1 )) > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43137 == 25)
    {
        g_U43519 = uParam0;
        if (g_U43519 >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_111755();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (g_U43519 > g_U43617)
                {
                    g_U43580 = 1;
                }
                else
                {
                    g_U43580 = 0;
                }
            }
            else
            {
                g_U43580 = 0;
            }
        }
        else
        {
            g_U43580 = 0;
        }
    }
    if (g_U43571 == 1)
    {
        iVar3 = 1;
    }
    else
    {
        iVar3 = 0;
    }
    if (g_U43572 == 1)
    {
        iVar4 = 1;
    }
    else
    {
        iVar4 = 0;
    }
    if (g_U43573 == 1)
    {
        iVar5 = 1;
    }
    else
    {
        iVar5 = 0;
    }
    if (g_U43607 == 1)
    {
        g_U43619 = sub_113227();
        g_U43607 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar3 > g_U43619)
            {
                g_U43582 = 1;
            }
            else
            {
                g_U43582 = 0;
            }
        }
        else
        {
            g_U43582 = 0;
        }
    }
    else
    {
        g_U43582 = 0;
    }
    if (g_U43608 == 1)
    {
        g_U43620 = sub_113923();
        g_U43608 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar4 > g_U43620)
            {
                g_U43583 = 1;
            }
            else
            {
                g_U43583 = 0;
            }
        }
        else
        {
            g_U43583 = 0;
        }
    }
    else
    {
        g_U43583 = 0;
    }
    if (g_U43609 == 1)
    {
        g_U43621 = sub_114502();
        g_U43609 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (iVar5 > g_U43621)
            {
                g_U43584 = 1;
            }
            else
            {
                g_U43584 = 0;
            }
        }
        else
        {
            g_U43584 = 0;
        }
    }
    else
    {
        g_U43584 = 0;
    }
    return;
}

int sub_107590()
{
    return 0;
}

void sub_107615()
{
    if (sub_107629( sub_3454() ))
    {
        if (IS_CONTROL_PRESSED( 2, 77 ))
        {
            if (l_U733 == 0)
            {
                GET_GAME_TIMER( ref l_U730 );
                l_U733 = 1;
            }
            GET_GAME_TIMER( ref l_U731 );
            l_U732 = l_U731 - l_U730;
            if (l_U732 < 1000)
            {
                PRINTNL();
                PRINTSTRING( "***************************" );
                PRINTNL();
                PRINTSTRING( "Player is in the back of a taxi - Blocking Mission Time Goal" );
                PRINTNL();
                PRINTSTRING( "***************************" );
                PRINTNL();
                g_U43593 = 1;
            }
        }
    }
    sub_108159();
    if (g_U12379 == 1)
    {
        if ((IS_BIT_SET( g_U10938._fU0, 7 )) == 0)
        {
            if (g_U43133 == 0)
            {
                if (l_U729 == 0)
                {
                    GET_GAME_TIMER( ref l_U726 );
                    l_U729 = 1;
                }
                GET_GAME_TIMER( ref l_U727 );
                l_U728 = l_U727 - l_U726;
                if (l_U728 < 1000)
                {
                    g_U43597 = 1;
                    PRINTNL();
                    PRINTSTRING( "***************************" );
                    PRINTNL();
                    PRINTSTRING( "Player has used a trip skip - Blocking Mission Goals" );
                    PRINTNL();
                    PRINTSTRING( "***************************" );
                    PRINTNL();
                }
            }
            else
            {
                g_U43597 = 0;
            }
        }
        else
        {
            g_U43597 = 0;
        }
    }
    return;
}

int sub_107629(int iParam0)
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
                if (sub_107693( uVar3 ))
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

int sub_107693(int iParam0)
{
    if ((iParam0 == g_U2687) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_108159()
{
    int iVar2;

    iVar2 = 1000;
    if (CHEAT_HAPPENED_RECENTLY( 0, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Poor Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 1, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Advance Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 22, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used E2 Weapon Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 30, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used E2 Explosive punch cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 7, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Annihilitor cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 27, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Buzzard cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 26, iVar2 ))
    {
        g_U43595 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used APC cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 2, iVar2 ))
    {
        g_U43594 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Health Cheat - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    if (CHEAT_HAPPENED_RECENTLY( 4, iVar2 ))
    {
        g_U43596 = 1;
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
        PRINTSTRING( "Player has used Wanted Level Reduction - Blocking Mission Goals" );
        PRINTNL();
        PRINTSTRING( "***************************" );
        PRINTNL();
    }
    return;
}

void sub_110370()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    if (g_U12379 == 1)
    {
        if (NOT (IS_CHAR_DEAD( sub_3454() )))
        {
            GET_CHAR_HEALTH( sub_3454(), ref g_U43521 );
        }
    }
    uVar3 = TO_FLOAT( g_U43521 );
    uVar4 = TO_FLOAT( g_U43520 );
    fVar2 = uVar3 / uVar4;
    fVar2 *= 100;
    fVar2 -= 100;
    if (fVar2 < 0)
    {
        fVar2 *= -1;
    }
    fVar2 *= 2;
    if (fVar2 < 0)
    {
        fVar2 = 0;
    }
    if (fVar2 > 100)
    {
        fVar2 = 100;
    }
    g_U43522 = FLOOR( fVar2 );
    if (g_U43522 < 0)
    {
        g_U43522 = 0;
    }
    return g_U43522;
}

int sub_110652()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 475 );
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 479 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 484 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 578 );
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 544 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 550 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 557 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 525 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 533 );
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 568 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 573 );
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 493 );
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 498 );
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 502 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 506 );
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 511 );
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 583 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 591 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 599 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 563 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 605 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 520 );
    }
    return 0;
}

void sub_111445(int iParam0, int iParam1, int iParam2)
{
    if (iParam1 == 1)
    {
        g_U43518 = GET_INT_STAT( 296 );
        g_U43519 = g_U43518 - g_U43517;
    }
    else if (iParam2 == 1)
    {
        g_U43518 = GET_INT_STAT( 297 );
        g_U43519 = g_U43518 - g_U43517;
    }
    else if (iParam0 == 1)
    {
        if (l_U725 < GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER())
        {
            g_U43519++;
        }
        l_U725 = GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER();
    }
    else
    {
        g_U43518 = GET_INT_STAT( 294 );
        g_U43519 = g_U43518 - g_U43517;
    };;;
    if (g_U43519 < 0)
    {
        g_U43519 = 0;
    }
    return g_U43519;
}

int sub_111755()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 547 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 553 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 558 );
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 586 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 565 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 608 );
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_113227()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 481 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 487 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 579 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 560 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 529 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 534 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 495 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 503 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 507 );
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 613 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 541 );
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 587 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 594 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 602 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 564 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_113923()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 580 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 535 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 494 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 612 );
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 588 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 595 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_114502()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 554 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 596 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

void sub_115038(unknown uParam0)
{
    if ((sub_115049( uParam0 )) > g_U43138[g_U43137]._fU12)
    {
        g_U43564 = 0;
    }
    else
    {
        g_U43564 = 1;
    }
    if (g_U43602 == 1)
    {
        g_U43613 = sub_115488();
        g_U43602 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if ((sub_115049( uParam0 )) < g_U43613)
            {
                g_U43577 = 1;
            }
            else
            {
                g_U43577 = 0;
            }
        }
        else
        {
            g_U43577 = 0;
        }
    }
    else
    {
        g_U43577 = 0;
    }
    if (g_U43137 == 4)
    {
        if ((FLOOR( (TO_FLOAT( sub_116086() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_116310();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_116086() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
                {
                    g_U43576 = 1;
                }
                else
                {
                    g_U43576 = 0;
                }
            }
            else
            {
                g_U43576 = 0;
            }
        }
        else
        {
            g_U43576 = 0;
        }
    }
    if (g_U43137 == 10)
    {
        if ((FLOOR( (TO_FLOAT( sub_116086() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_116310();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_116086() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
                {
                    g_U43576 = 1;
                }
                else
                {
                    g_U43576 = 0;
                }
            }
            else
            {
                g_U43576 = 0;
            }
        }
        else
        {
            g_U43576 = 0;
        }
    }
    if (g_U43137 == 7)
    {
        if ((FLOOR( (TO_FLOAT( sub_116086() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_116310();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_116086() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
                {
                    g_U43576 = 1;
                }
                else
                {
                    g_U43576 = 0;
                }
            }
            else
            {
                g_U43576 = 0;
            }
        }
        else
        {
            g_U43576 = 0;
        }
    }
    if ((sub_117417( uParam0 )) >= g_U43138[g_U43137]._fU24)
    {
        g_U43565 = 1;
    }
    else
    {
        g_U43565 = 0;
    }
    if (g_U43606 == 1)
    {
        g_U43618 = sub_117615();
        g_U43606 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if ((sub_117417( uParam0 )) > g_U43618)
            {
                g_U43581 = 1;
            }
            else
            {
                g_U43581 = 0;
            }
        }
        else
        {
            g_U43581 = 0;
        }
    }
    else
    {
        g_U43581 = 0;
    }
    return;
}

void sub_115049(unknown uParam0)
{
    if (g_U43499 == 1)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_CAR_HEALTH( uParam0, ref g_U43511 );
        }
        g_U43512 = g_U43510 - g_U43511;
        g_U43559 = ((TO_FLOAT( g_U43512 )) / (TO_FLOAT( g_U43510 ))) * 100;
    }
    g_U43559 = sub_115166( uParam0 );
    g_U43559 = TO_FLOAT( FLOOR( g_U43559 ) );
    if (g_U43559 < 0)
    {
        g_U43559 = 0;
    }
    return g_U43559;
}

float sub_115166(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float Result;
    unknown uVar7;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEALTH( uParam0, ref uVar7 );
        uVar3 = sub_115212( 100, TO_FLOAT( uVar7 ) );
        uVar4 = GET_PETROL_TANK_HEALTH( uParam0 );
        uVar5 = GET_ENGINE_HEALTH( uParam0 );
        Result = sub_115276( uVar3, sub_115276( uVar4, uVar5 ) );
        Result /= 10.00000000;
        Result = 100 - Result;
        return Result;
    }
    return 100.00000000;
}

void sub_115212(float Result, float fParam1)
{
    if (fParam1 < Result)
    {
        return Result;
    }
    return fParam1;
}

void sub_115276(float Result, float fParam1)
{
    if (Result < fParam1)
    {
        return Result;
    }
    return fParam1;
}

int sub_115488()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 476 );
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        return GET_INT_STAT( 490 );
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 559 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 526 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 513 );
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 611 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 540 );
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

void sub_116086()
{
    if (g_U43497 == 1)
    {
        GET_GAME_TIMER( ref g_U43505 );
        g_U43506 = g_U43505 - g_U43504;
    }
    if (g_U43506 > 18000000)
    {
        g_U43506 = 18000000;
    }
    if (g_U43506 < 0)
    {
        g_U43506 = 0;
    }
    return g_U43506;
}

int sub_116310()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 499 );
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 508 );
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        return GET_INT_STAT( 517 );
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

void sub_117417(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        fVar3 = (fVar3 * 2.23693600) * 1.30000000;
        if (fVar3 > g_U43558)
        {
            g_U43558 = fVar3;
            g_U43558 = (g_U43558 * 2.23693600) * 1.30000000;
        }
    }
    if (g_U43558 < 0)
    {
        g_U43558 = 0;
    }
    return g_U43558;
}

int sub_117615()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return sub_117760( GET_INT_STAT( 530 ) );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        return sub_117760( GET_INT_STAT( 539 ) );
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_117760(int iParam0)
{
    return iParam0 / 1670;
}

void sub_118180()
{
    if (sub_118189() >= g_U43138[g_U43137]._fU16)
    {
        g_U43566 = 1;
    }
    else
    {
        g_U43566 = 0;
    }
    if (g_U43603 == 1)
    {
        g_U43614 = sub_118333();
        g_U43603 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_118189() > g_U43614)
            {
                g_U43578 = 1;
            }
            else
            {
                g_U43578 = 0;
            }
        }
        else
        {
            g_U43578 = 0;
        }
    }
    else
    {
        g_U43578 = 0;
    }
    if (g_U43137 != 15)
    {
        if (sub_118954() >= g_U43138[g_U43137]._fU20)
        {
            g_U43567 = 1;
        }
        else
        {
            g_U43567 = 0;
        }
        if (g_U43604 == 1)
        {
            g_U43616 = sub_120495();
            g_U43604 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (sub_118954() > g_U43616)
                {
                    g_U43579 = 1;
                }
                else
                {
                    g_U43579 = 0;
                }
            }
            else
            {
                g_U43579 = 0;
            }
        }
        else
        {
            g_U43579 = 0;
        }
    }
    if (g_U43137 == 15)
    {
        if (((g_U43523[9] + g_U43523[10]) / 2) >= g_U43138[g_U43137]._fU20)
        {
            g_U43567 = 1;
        }
        else
        {
            g_U43567 = 0;
        }
        if (g_U43604 == 1)
        {
            g_U43616 = sub_120495();
            g_U43604 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if (((g_U43523[9] + g_U43523[10]) / 2) > g_U43616)
                {
                    g_U43579 = 1;
                }
                else
                {
                    g_U43579 = 0;
                }
            }
            else
            {
                g_U43579 = 0;
            }
        }
        else
        {
            g_U43579 = 0;
        }
    }
    return;
}

void sub_118189()
{
    g_U43514 = GET_INT_STAT( 289 );
    g_U43515 = g_U43514 - g_U43513;
    if (g_U43515 < 0)
    {
        g_U43515 = 0;
    }
    return g_U43515;
}

int sub_118333()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 485 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 551 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 527 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 569 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 574 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 584 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 600 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 606 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 521 );
    }
    return 0;
}

void sub_118954()
{
    unknown uVar2;
    unknown uVar3;
    float fVar4;
    int iVar5;
    int I;

    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 29, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 29, 1 ) );
    g_U43523[1] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 30, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 30, 1 ) );
    g_U43523[2] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 31, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 31, 1 ) );
    g_U43523[3] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 32, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 32, 1 ) );
    g_U43523[4] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 33, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 33, 1 ) );
    g_U43523[5] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 34, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 34, 1 ) );
    g_U43523[6] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 35, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 35, 1 ) );
    g_U43523[7] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 37, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 37, 1 ) );
    g_U43523[9] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 39, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 39, 1 ) );
    g_U43523[10] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 40, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 40, 1 ) );
    g_U43523[11] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 14, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 14, 1 ) );
    g_U43523[12] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 7, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 7, 1 ) );
    g_U43523[13] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 9, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 9, 1 ) );
    g_U43523[14] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 12, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 12, 1 ) );
    g_U43523[15] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 13, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 13, 1 ) );
    g_U43523[16] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 15, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 15, 1 ) );
    g_U43523[17] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 10, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 10, 1 ) );
    g_U43523[18] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 11, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 11, 1 ) );
    g_U43523[19] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 18, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 18, 1 ) );
    g_U43523[22] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 16, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 16, 1 ) );
    g_U43523[23] = (uVar3 / uVar2) * 100;
    uVar2 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 17, 0 ) );
    uVar3 = TO_FLOAT( GET_LOCAL_PLAYER_WEAPON_STAT( 17, 1 ) );
    g_U43523[24] = (uVar3 / uVar2) * 100;
    fVar4 = 0.00000000;
    iVar5 = 0;
    for ( I = 0; I <= 24; I++ )
    {
        if (g_U43523[I] > 0)
        {
            if (g_U43523[I] != g_U43523[0])
            {
                if (g_U43523[I] != g_U43523[8])
                {
                    if (g_U43523[I] != g_U43523[20])
                    {
                        if (g_U43523[I] != g_U43523[21])
                        {
                            fVar4 += g_U43523[I];
                            iVar5++;
                        }
                    }
                }
            }
        }
    }
    fVar4 /= iVar5;
    g_U43516 = FLOOR( fVar4 );
    if (g_U43516 > 100)
    {
        g_U43516 = 100;
    }
    if (g_U43516 < 0)
    {
        g_U43516 = 0;
    }
    return g_U43516;
}

int sub_120495()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 480 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 486 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 552 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 528 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 570 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 575 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 585 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 593 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 601 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 607 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 522 );
    }
    return 0;
}

