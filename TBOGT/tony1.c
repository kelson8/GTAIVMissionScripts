void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U170 = 0;
    l_U171 = 0;
    l_U172 = 0;
    l_U173 = 0;
    l_U174 = 0;
    l_U175 = 0;
    l_U203 = 10.00000000;
    l_U204 = 15.00000000;
    l_U225 = 0;
    l_U226 = 0;
    l_U241 = 0;
    l_U242 = 1;
    l_U243 = 3;
    l_U245 = 0;
    l_U246 = -1;
    l_U247 = 0;
    l_U248 = 0;
    l_U253 = 1;
    l_U339 = 0;
    l_U340 = 0;
    l_U341 = 0;
    l_U342 = 0;
    l_U343 = 1;
    l_U409 = 6;
    l_U447 = nil;
    l_U460 = nil;
    l_U478 = 1;
    l_U513 = nil;
    l_U533 = 1;
    l_U609 = 6;
    l_U618 = "BOGT_BoxDrop";
    l_U619 = "BOGT_Box_TickDrop";
    l_U684 = 0.63600000;
    l_U685 = 0.37600000;
    l_U734 = 0.05200000;
    l_U735 = 0.35300000;
    l_U736 = 0.30000000;
    l_U737 = 0.37200000;
    l_U738 = 0.37300000;
    l_U739 = 0.38700000;
    l_U740 = 0.44400000;
    l_U741 = 0.03750000;
    l_U742 = 0.36900000;
    l_U743 = 0.62350000;
    l_U744 = 0.60800000;
    l_U745 = {0.24300000, 0.46700000, 0.00000000};
    l_U748 = {0.23100000, 0.43500000, 0.00000000};
    l_U751 = {0.23100000, 0.43500000, 0.00000000};
    l_U754 = {0.31920000, 0.65250000, 0.00000000};
    l_U757 = {0.31920000, 0.65250000, 0.00000000};
    l_U760 = {0.24300000, 0.46700000, 0.00000000};
    l_U763 = {0.50000000, 1.10000000, 0.00000000};
    l_U766 = {0.31920000, 0.65250000, 0.00000000};
    l_U769 = {0.18225000, 0.35025000, 0.00000000};
    l_U772 = 0.30000000;
    l_U773 = 0.37000000;
    l_U774 = 0.56200000;
    l_U775 = 0.40100000;
    l_U776 = 0.30000000;
    l_U777 = 0.37000000;
    l_U778 = 0.69700000;
    l_U779 = 0.40100000;
    l_U780 = 0.30000000;
    l_U781 = 0.37000000;
    l_U782 = 0.66500000;
    l_U783 = 0.40100000;
    l_U784 = 0.32500000;
    l_U785 = 0.62500000;
    l_U786 = 0.00800000;
    l_U787 = 0.49700000;
    l_U788 = 0.52500000;
    l_U789 = 0.49700000;
    l_U790 = 0.51800000;
    l_U791 = 1;
    l_U792 = 0;
    l_U793 = {0.50000000, 0.50000000, 0};
    l_U796 = 0.20000000;
    l_U797 = 0.20000000;
    l_U841 = 0;
    l_U842 = 0;
    l_U854 = 0;
    l_U858 = 0;
    l_U983 = 0;
    l_U987 = 0;
    l_U1000 = 0;
    l_U1025 = 0;
    l_U1031 = 500;
    l_U1032 = 0;
    l_U1051 = 15000;
    l_U1052 = 0;
    sub_900();
    while (true)
    {
        switch (l_U219)
        {
            case 0:
            sub_9268();
            break;
            case 1:
            sub_34579();
            break;
            case 2:
            sub_43916();
            break;
            case 3:
            sub_45337();
            break;
            case 4:
            sub_45337();
            break;
            case 5:
            sub_51240();
            break;
            case 6:
            sub_58020();
            break;
            case 7:
            sub_63737();
            break;
            case 8:
            sub_71801();
            break;
            case 9:
            sub_74191();
            break;
            case 10:
            sub_81170();
            break;
            case 11:
            sub_81941();
            break;
            case 12:
            sub_94469();
            break;
            case 13:
            sub_94614();
            break;
            case 14:
            sub_94749();
            break;
        }
        if (DOES_CHAR_EXIST( l_U870 ))
        {
            if (IS_CHAR_INJURED( l_U870 ))
            {
                sub_95310( 0, l_U870, 0 );
                sub_44460( "T1_FAIL_1" );
                sub_44549();
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_917(), l_U870, 250.00000000, 250.00000000, 250.00000000, 0 )))
            {
                if (sub_28211( 1, 0 ))
                {
                    sub_44460( "T1_FAIL_4" );
                    sub_44549();
                }
            }
        }
        if (l_U985)
        {
            if (sub_95539( l_U958, 30000 ))
            {
                l_U954 = "E2T1_CAR1";
                l_U955 = "T1_FAIL_2";
                l_U956 = l_U870;
                l_U985 = 0;
                sub_17969( 14, 1 );
            }
        }
        if (l_U990)
        {
            if (DOES_CHAR_EXIST( g_U30211 ))
            {
                if (IS_CHAR_INJURED( g_U30211 ))
                {
                    l_U954 = "E2T1_TDIES";
                    l_U955 = "TROY_D";
                    l_U956 = l_U870;
                    sub_17969( 14, 1 );
                }
            }
            if (DOES_CHAR_EXIST( g_U30212 ))
            {
                if (IS_CHAR_INJURED( g_U30212 ))
                {
                    l_U954 = "E2T1_DDIES";
                    l_U955 = "DESS_D";
                    l_U956 = l_U870;
                    sub_17969( 14, 1 );
                }
            }
        }
        if (l_U957)
        {
            if ((g_U30093[2]) || (g_U30093[1]))
            {
                if (NOT (IS_CHAR_INJURED( l_U870 )))
                {
                    l_U954 = "E2T1_FUK1";
                    l_U956 = l_U870;
                }
                else if (NOT (IS_CHAR_INJURED( l_U871 )))
                {
                    l_U954 = "E2T1_FUK2";
                    l_U956 = l_U871;
                }
                l_U955 = "ALSEC";
                GET_GAME_TIMER( ref l_U984 );
                sub_17969( 14, 1 );
            }
        }
        if (l_U981)
        {
            sub_96177();
        }
        if (DOES_VEHICLE_EXIST( l_U958 ))
        {
            sub_96631( l_U958 );
        }
        sub_64104( 0 );
        if (NOT g_U43133)
        {
            if (l_U982)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_917(), -440.00000000, 1390.00000000, 17.00000000, 100.00000000, 100.00000000, 100.00000000, 0 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 65096, 1390, 17, 1, 0.00000000 );
                }
            }
        }
        else
        {
            l_U982 = 0;
        }
        if (g_U30145[1])
        {
            ;
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_917(), -440.00000000, 358.00000000, 12.00000000, 100.00000000, 100.00000000, 100.00000000, 0 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 1316667213, 65096, 358, 12, 1, 0.00000000 );
        }
        sub_99970();
    }
    return;
}

void sub_900()
{
    int iVar2;

    SET_MISSION_FLAG( 1 );
    if (NOT (IS_CHAR_DEAD( sub_917() )))
    {
        SET_CHAR_HEALTH( sub_917(), 200 );
    }
    g_U43137 = 0;
    sub_994();
    sub_4189();
    LOAD_ADDITIONAL_TEXT( "TONY1", 0 );
    sub_4295( "E2T1AUD" );
    LOAD_ADDITIONAL_TEXT( "E2T1AUD", 6 );
    sub_4432( 0, sub_917(), "LUIS", 0 );
    SWITCH_ROADS_OFF( -457.98710000, 274.47610000, -1000.00000000, -452.27350000, 378.06200000, 1000.00000000 );
    SWITCH_ROADS_OFF( -455.60120000, 1346.85200000, -100.00000000, -448.73890000, 1417.08500000, 100.00000000 );
    SWITCH_ROADS_OFF( -182.06170000, 1498.58800000, -100.00000000, -166.05780000, 1541.61000000, 100.00000000 );
    SWITCH_ROADS_OFF( -185.39140000, 1497.41500000, -100.00000000, -184.54400000, 1512.56000000, 100.00000000 );
    SWITCH_ROADS_OFF( -255.70320000, 1493.26500000, -100.00000000, -182.72500000, 1499.96200000, 100.00000000 );
    CLEAR_WANTED_LEVEL( sub_4777() );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_917(), 0 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    sub_4841( sub_917() );
    sub_5971();
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_6212();
        sub_8529();
    }
    # -sub_C1FFC0-0xc214c8( 0, ref l_U960 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U961 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U962 );
    sub_8935( 1 );
    if (NOT g_U43133)
    {
        OVERRIDE_NEXT_RESTART( -527.83720000, -290.32330000, 5.47670000, 0.00000000 );
        SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 1 );
        if (NOT (IS_CHAR_DEAD( sub_917() )))
        {
            REMOVE_ALL_CHAR_WEAPONS( sub_917() );
            GIVE_WEAPON_TO_CHAR( sub_917(), 9, 50, 0 );
            GET_CHAR_ARMOUR( sub_917(), ref iVar2 );
            iVar2 *= -1;
            ADD_ARMOUR_TO_CHAR( sub_917(), iVar2 );
        }
    }
    SET_CURRENT_CHAR_WEAPON( sub_917(), 0, 1 );
    return;
}

void sub_917()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_994()
{
    sub_1003();
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
        sub_2782();
        sub_2820();
    }
    else
    {
        g_U43626 = 1;
        sub_2782();
        sub_2820();
        if (g_U43137 == 22)
        {
            sub_2923( 0, 0, 0 );
        }
        if (g_U43137 == 17)
        {
            sub_2923( 1, 0, 0 );
        }
        if (g_U43137 == 15)
        {
            sub_2923( 0, 1, 0 );
        }
        if (g_U43137 == 18)
        {
            sub_2923( 0, 0, 1 );
        }
        if (g_U43137 == 16)
        {
            sub_2923( 0, 0, 1 );
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
    l_U848 = 0;
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

void sub_1003()
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

void sub_2782()
{
    GET_GAME_TIMER( ref g_U43501 );
    g_U43496 = 1;
    return;
}

void sub_2820()
{
    if (NOT (IS_CHAR_DEAD( sub_917() )))
    {
        GET_CHAR_HEALTH( sub_917(), ref g_U43520 );
        g_U43520 = 200;
    }
    return;
}

void sub_2923(int iParam0, int iParam1, int iParam2)
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

void sub_4189()
{
    return sub_4200( 1, 1 );
}

int sub_4200(boolean bParam0, unknown uParam1)
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

void sub_4295(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_4312();
    return;
}

void sub_4312()
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

void sub_4432(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4512( "\n PED NUMBER ", uParam0 );
    sub_4552( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4512(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4552(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4777()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4841(int iParam0)
{
    int iVar3;
    unknown uVar4;
    int iVar5;

    if (iParam0 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam0 )))
    {
        return;
    }
    iVar3 = sub_4883( iParam0 );
    if (NOT (iVar3 == -1))
    {
        uVar4 = g_U9105[iVar3]._fU0;
        sub_5013( 1, uVar4, 1 );
        return;
    }
    iVar5 = sub_5662( iParam0 );
    if (iVar5 == -1)
    {
        return;
    }
    sub_5746( iVar5 );
    return;
}

int sub_4883(int iParam0)
{
    int Result;

    if (iParam0 == nil)
    {
        return -1;
    }
    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (NOT (g_U9105[Result]._fU0 == -1))
        {
            if (iParam0 == g_U9105[Result]._fU4)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_5013(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_5030( uParam0, uParam1, uParam2, 0, 0 );
    return;
}

void sub_5030(int iParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (iParam0 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for poster is unknown" );
        return;
    }
    if (iParam1 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for reader is unknown" );
        return;
    }
    if (iParam2 == 5)
    {
        SCRIPT_ASSERT( "Post_Notice: Notice ID is unknown" );
        return;
    }
    if (sub_5252( iParam0, iParam1, iParam2 ))
    {
        return;
    }
    iVar7 = sub_5401();
    if (iVar7 == -1)
    {
        SCRIPT_ASSERT( "All drunk notice slots are full - Tell Keith to increase MAX_NUMBER_OF_DRUNK_NOTICES" );
        return;
    }
    g_U9116[iVar7]._fU0 = iParam0;
    g_U9116[iVar7]._fU4 = iParam1;
    g_U9116[iVar7]._fU8 = iParam2;
    g_U9116[iVar7]._fU12 = uParam3;
    g_U9116[iVar7]._fU16 = uParam4;
    return;
}

int sub_5252(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((sub_5267( uParam0, uParam1, uParam2 )) == -1)
    {
        return 0;
    }
    return 1;
}

int sub_5267(int iParam0, int iParam1, int iParam2)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (iParam2 == g_U9116[Result]._fU8)
        {
            if (iParam0 == g_U9116[Result]._fU0)
            {
                if (iParam1 == g_U9116[Result]._fU4)
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_5401()
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (g_U9116[Result]._fU8 == 5)
        {
            return Result;
        }
    }
    return -1;
}

int sub_5662(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9074[Result]._fU4 == iParam0)
        {
            return Result;
        }
    }
    return -1;
}

void sub_5746(int iParam0)
{
    if ((iParam0 >= 5) || (iParam0 < 0))
    {
        SCRIPT_ASSERT( "Clear_One_Drunk_Request: array index out of bounds" );
        return;
    }
    if (NOT (g_U9074[iParam0]._fU4 == nil))
    {
        if (g_U9074[iParam0]._fU4 == sub_917())
        {
            g_U9199 = 0;
        }
    }
    g_U9074[iParam0]._fU0 = 16;
    g_U9074[iParam0]._fU4 = nil;
    g_U9074[iParam0]._fU8 = 0;
    g_U9074[iParam0]._fU12 = 0;
    g_U9074[iParam0]._fU16 = nil;
    g_U9074[iParam0]._fU20 = nil;
    return;
}

void sub_5971()
{
    sub_5980();
    sub_6109();
    return;
}

void sub_5980()
{
    int I;
    int iVar3;
    int J;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 5; I++ )
    {
        iVar3 = g_U9105[I]._fU0;
        if (NOT (iVar3 == -1))
        {
            sub_5013( 1, iVar3, 1 );
        }
    }
    J = 0;
    for ( J = 0; J < 5; J++ )
    {
        if (g_U9074[J]._fU0 == 0)
        {
            sub_5746( J );
        }
    }
    return;
}

void sub_6109()
{
    unknown uVar2;

    if (NOT g_U9197)
    {
        return;
    }
    GET_ROOT_CAM( ref uVar2 );
    SET_DRUNK_CAM( uVar2, 0.00000000, 0 );
    sub_6155();
    return;
}

void sub_6155()
{
    g_U9197 = 0;
    g_U9198 = 0;
    return;
}

void sub_6212()
{
    int iVar2;

    iVar2 = 0;
    sub_6226( iVar2 );
    sub_7512( iVar2 );
    return;
}

void sub_6226(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    sub_6235();
    if (g_U43133)
    {
        return;
    }
    iVar3 = g_U14925[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U819)
    {
        sub_6411();
        sub_6619();
        g_U11063 = 1;
    }
    else if (NOT g_U12382[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_6744();
            sub_6796();
            g_U11063 = 1;
        }
    }
    sub_6889();
    sub_7028();
    uVar5 = sub_7141( uParam0 );
    sub_7419( uVar5, 0 );
    return;
}

void sub_6235()
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

void sub_6411()
{
    if (g_U10972)
    {
        return;
    }
    sub_6438( g_U10971 );
    if (NOT (IS_BIT_SET( g_U10938._fU0, 7 )))
    {
        sub_6559();
    }
    return;
}

void sub_6438(int iParam0)
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

void sub_6559()
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

void sub_6619()
{
    sub_6628();
    return;
}

void sub_6628()
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

void sub_6744()
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

void sub_6796()
{
    sub_6805();
    return;
}

void sub_6805()
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

void sub_6889()
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

void sub_7028()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_7050();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_7050()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_7141(unknown uParam0)
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
    sub_7372( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 37;
}

void sub_7372(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_7419(int iParam0, boolean bParam1)
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

void sub_7512(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_7521();
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
    if (NOT sub_8296())
    {
        return;
    }
    if (NOT g_U819)
    {
        sub_8362();
        SET_BIT( ref g_U10938._fU0, 2 );
    }
    return;
}

void sub_7521()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((g_U575[I]._fU20) AND ((sub_7559( 5, g_U575[I] )) == 1))
        {
            if ((sub_7559( 1, g_U575[I] )) != 0)
            {
                sub_7845( I );
            }
        }
    }
    if (NOT sub_8011())
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

int sub_7559(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_7845(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_7930( g_U575 - 1 );
    return;
}

void sub_7930(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_8011()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_7559( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_8296()
{
    if ((g_U10938._fU8 == 1) AND (g_U10938._fU4 == 0))
    {
        return 0;
    }
    return 1;
}

void sub_8362()
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

void sub_8529()
{
    if (g_U0)
    {
        if (NOT g_U43133)
        {
            SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 0 );
        }
    }
    SWITCH_ROADS_BACK_TO_ORIGINAL( -457.98710000, 274.47610000, -1000.00000000, -452.27350000, 378.06200000, 1000.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -455.60120000, 1346.85200000, -100.00000000, -448.73890000, 1417.08500000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -182.06170000, 1498.58800000, -100.00000000, -166.05780000, 1541.61000000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -185.39140000, 1497.41500000, -100.00000000, -184.54400000, 1512.56000000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -255.70320000, 1493.26500000, -100.00000000, -182.72500000, 1499.96200000, 100.00000000 );
    SWITCH_PED_PATHS_ON( -447.38710000, 347.71620000, -100.00000000, -442.24400000, 368.02510000, 100.00000000 );
    SWITCH_PED_PATHS_ON( -467.02610000, 138.35160000, -100.00000000, -462.60400000, 164.17870000, 100.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 65096, 1390, 17, 0, 0.00000000 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_8935(unknown uParam0)
{
    g_U30226[uParam0] = GET_ID_OF_THIS_THREAD();
    g_U30149[uParam0] = 1;
    return;
}

void sub_9268()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    if (g_U43133)
    {
        if (g_U43104[0] > 1)
        {
            g_U43104[0] = 1;
        }
    }
    switch (l_U220)
    {
        case 0:
        if (NOT g_U43133)
        {
            STORE_SCORE( sub_4777(), ref iVar2 );
            if (iVar2 > 500)
            {
                iVar3 = iVar2 - 500;
                iVar3 *= -1;
                ADD_SCORE( sub_4777(), iVar3 );
            }
        }
        l_U979 = 1;
        CLEAR_AREA( -449.25000000, 1389.24700000, 16.88100000, 50.00000000, 1 );
        if (g_U43104[0] == 0)
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            SET_PLAYER_CONTROL( sub_4777(), 0 );
            g_U43104[0] = 1;
            l_U982 = 1;
        }
        switch (g_U43104[0])
        {
            case 0:
            case 1:
            SET_TIME_OF_DAY( 22, 0 );
            CLEAR_AREA_OF_CARS( -72.16390000, -229.25380000, 13.56670000, 100.00000000 );
            REQUEST_MODEL( sub_9627( 0 ) );
            REQUEST_MODEL( -1446884113 );
            sub_9801( 0 );
            REQUEST_MODEL( 1662473323 );
            REQUEST_ANIMS( "misstony01" );
            REQUEST_SCRIPT( "ambNightclubHC" );
            REQUEST_SCRIPT( "ambNightclubHC2" );
            while ((NOT (HAS_SCRIPT_LOADED( "ambNightclubHC2" ))) || ((NOT (HAS_SCRIPT_LOADED( "ambNightclubHC" ))) || ((NOT (HAS_MODEL_LOADED( 1662473323 ))) || ((NOT (HAS_MODEL_LOADED( -1446884113 ))) || ((NOT (HAVE_ANIMS_LOADED( "misstony01" ))) || ((NOT (sub_10357( 0 ))) || (NOT (HAS_MODEL_LOADED( sub_9627( 0 ) )))))))))
            {
                WAIT( 0 );
            }
            while (NOT (sub_10538( 0, -74.66390000, -229.25380000, 13.56670000, 90.00000000, ref l_U958 )))
            {
                WAIT( 0 );
            }
            sub_11820( 2, 1 );
            while (NOT (sub_12796( 2, 1 )))
            {
                WAIT( 0 );
            }
            CLEAR_AREA( -71.96730000, -225.74540000, 13.67770000, 100.00000000, 1 );
            LOAD_SCENE( -71.96730000, -225.74540000, 13.67770000 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
            SET_CHAR_COORDINATES( sub_917(), -71.96730000, -225.74540000, 13.67770000 );
            SET_CHAR_HEADING( sub_917(), 180.00000000 );
            sub_13965( 0, ref l_U870, -74.02360000, -225.53540000, 13.64880000, 183.00000000 );
            sub_4432( 1, l_U870, "TONY", 0 );
            sub_15063( 0, 0 );
            SET_NEXT_DESIRED_MOVE_STATE( 2 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_GAME_CAM_PITCH( 0.00000000 );
            SET_CAM_BEHIND_PED( sub_917() );
            SET_PLAYER_CONTROL( sub_4777(), 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_9627( 0 ) );
            sub_17112( l_U958 );
            SWITCH_ROADS_OFF( -458.80270000, 128.37270000, -100.00000000, -451.46080000, 185.23920000, 100.00000000 );
            if (NOT (IS_CAR_DEAD( l_U958 )))
            {
                ;
            }
            GET_GAME_TIMER( ref l_U1009 );
            SWITCH_PED_PATHS_OFF( -447.38710000, 347.71620000, -100.00000000, -442.24400000, 368.02510000, 100.00000000 );
            SWITCH_PED_PATHS_OFF( -467.02610000, 138.35160000, -100.00000000, -462.60400000, 164.17870000, 100.00000000 );
            l_U990 = 1;
            break;
            case 2:
            sub_17450( "in trip Skip" );
            REQUEST_MODEL( sub_9627( 0 ) );
            sub_9801( 0 );
            REQUEST_ANIMS( "misstony01" );
            while ((NOT (HAVE_ANIMS_LOADED( "misstony01" ))) || ((NOT (sub_10357( 0 ))) || (NOT (HAS_MODEL_LOADED( sub_9627( 0 ) )))))
            {
                sub_17450( "Waiting for trip skip models" );
                WAIT( 0 );
            }
            sub_17112( l_U958 );
            SET_CHAR_COORDINATES( sub_917(), -468.50000000, 154.60000000, 8.85890000 );
            CLEAR_AREA_OF_CARS( -460.56850000, 154.68790000, 8.74860000, 100.00000000 );
            while (NOT (sub_10538( 0, -460.56850000, 154.68790000, 8.74860000, 178.48490000, ref l_U958 )))
            {
                sub_17450( "Waiting for Tony's car" );
                WAIT( 0 );
            }
            WAIT( 0 );
            SET_TIME_OF_DAY( 22, 30 );
            LOAD_SCENE( -469.14620000, 153.91280000, 9.02980600 );
            sub_13965( 0, ref l_U870, -469.14620000, 153.91280000, 9.02980600, 126.75540000 );
            sub_4432( 1, l_U870, "TONY", 0 );
            REMOVE_PROJTEX_IN_RANGE( -469.34860000, 152.45280000, 8.85890000, 100.00000000 );
            sub_17450( "ABout to wait for clubs tro stream in...." );
            sub_15063( 0, 0 );
            sub_17450( "Clubs streamed in" );
            l_U990 = 1;
            l_U983 = 0;
            l_U1004 = 1;
            sub_17969( 5, 1 );
            break;
        }
        l_U957 = 1;
        l_U985 = 1;
        sub_8935( 0 );
        RESET_VISIBLE_PED_DAMAGE( sub_917() );
        sub_18546();
        l_U220++;
        break;
        case 1:
        sub_18621( -450.38560000, 348.44960000, 11.17070000, 2.46000000 );
        if (sub_18668( l_U958 ))
        {
            if (NOT l_U1001)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_18812())
                    {
                        sub_19106( "E2T1_GHERC", ref l_U967, 6, 1 );
                        l_U1001 = 1;
                    }
                }
            }
            if (sub_20142( -449.72000000, 356.84100000, 12.12200000, 2.50000000, 2.50000000, 2.50000000, 1, l_U870, l_U958, "T1_M01", "T1_M02", "T1_M13", 0, 1, "T1_M12", 0 ))
            {
                SET_PLAYER_CONTROL( sub_4777(), 0 );
                sub_32671( 0 );
                sub_17969( 1, 1 );
            }
            else if (NOT l_U1005)
            {
                if (sub_32842( l_U1009, 300 ))
                {
                    DO_SCREEN_FADE_IN( 500 );
                    l_U1005 = 1;
                }
            }
            else if (NOT l_U1007)
            {
                if (l_U1001)
                {
                    if (IS_SCREEN_FADED_IN())
                    {
                        if (NOT (sub_18827( l_U967 )))
                        {
                            if (l_U1010 == 0)
                            {
                                GET_GAME_TIMER( ref l_U1010 );
                            }
                            else if (sub_32842( l_U1010, 1000 ))
                            {
                                PRINT_HELP( "ENTERC" );
                                l_U1007 = 1;
                                l_U1008 = 1;
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U870 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_917(), l_U870, 30.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    if (NOT l_U1001)
                    {
                        ;
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_917(), l_U958 ))
                    {
                        if (sub_24362( sub_917(), l_U870 ))
                        {
                            if (sub_18812())
                            {
                                if (NOT (sub_18827( l_U967 )))
                                {
                                    if (NOT l_U1003)
                                    {
                                        if (NOT l_U1002)
                                        {
                                            if (sub_19106( "E2T1_B1AV1", ref l_U967, 6, 1 ))
                                            {
                                                l_U1002 = 1;
                                            }
                                        }
                                        else if (sub_33253( l_U967 ))
                                        {
                                            sub_33298( "E2T1_B1AV1", ref l_U967, 6, 1 );
                                        }
                                        else if (NOT (IS_WANTED_LEVEL_GREATER( sub_4777(), 0 )))
                                        {
                                            if (LOCATE_CHAR_IN_CAR_3D( sub_917(), -449.72000000, 356.84100000, 12.12200000, 40.00000000, 40.00000000, 40.00000000, 0 ))
                                            {
                                                sub_19106( "E2T1_HERC", ref l_U967, 6, 1 );
                                                l_U1003 = 1;
                                            }
                                        };;;
                                    }
                                }
                            }
                        }
                        else if (l_U1002)
                        {
                            if (sub_18827( l_U967 ))
                            {
                                sub_33547( ref l_U967 );
                            }
                        }
                    }
                }
            };;;
        }
        else
        {
            l_U954 = "E2T1_CAR1";
            l_U955 = "T1_FAIL_2";
            l_U956 = l_U870;
            sub_17969( 14, 1 );
        }
        break;
    }
    if (l_U1008)
    {
        sub_34048();
    }
    return;
}

int sub_9627(unknown uParam0)
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

void sub_9801(unknown uParam0)
{
    REQUEST_MODEL( sub_9812( uParam0 ) );
    return;
}

int sub_9812(unknown uParam0)
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
    sub_7372( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_10357(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_9812( uParam0 ) );
}

void sub_10538(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_9627( uParam0 );
    return sub_10569( uParam5, uVar8, uParam1, uParam4, uParam0 );
}

int sub_10569(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_10701( (uParam0^), uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_10701(unknown uParam0, int iParam1)
{
    if (iParam1 == 8)
    {
        return;
    }
    switch (iParam1)
    {
        case 0:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_917() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_917() )))
            {
                PRINTSTRING( "KGM.............Retune TONY car to K109_THE_STUDIO\n" );
                RETUNE_RADIO_TO_STATION_NAME( "K109_THE_STUDIO" );
            }
        }
        break;
        case 3:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 0 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 0, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 3.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_917() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_917() )))
            {
                PRINTSTRING( "KGM.............Retune DOMINICANS car to SAN_JUAN_SOUNDS\n" );
                RETUNE_RADIO_TO_STATION_NAME( "SAN_JUAN_SOUNDS" );
            }
        }
        break;
        case 2:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 134, 136 );
        SET_EXTRA_CAR_COLOURS( uParam0, 134, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_917() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_917() )))
            {
                PRINTSTRING( "KGM.............Retune YUSUF car to BEAT\n" );
                RETUNE_RADIO_TO_STATION_NAME( "BEAT_95" );
            }
        }
        break;
        case 1:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 45, 45 );
        SET_EXTRA_CAR_COLOURS( uParam0, 35, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_917() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_917() )))
            {
                PRINTSTRING( "KGM.............Retune MORI car to DANCE_ROCK\n" );
                RETUNE_RADIO_TO_STATION_NAME( "DANCE_ROCK" );
            }
        }
        break;
    }
    return;
}

void sub_11820(unknown uParam0, boolean bParam1)
{
    sub_11831( uParam0 );
    if (bParam1)
    {
        switch (uParam0)
        {
            case 0:
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( 982077731 );
            REQUEST_MODEL( -844218756 );
            break;
            case 1:
            REQUEST_MODEL( g_U30218 );
            REQUEST_MODEL( g_U30220 );
            REQUEST_MODEL( -1446884113 );
            break;
            case 2:
            REQUEST_MODEL( g_U30222 );
            REQUEST_MODEL( g_U30224 );
            REQUEST_MODEL( 1662473323 );
            break;
        }
    }
    else
    {
        REQUEST_ANIMS( "missnightclub" );
        REQUEST_ANIMS( "AMB@SMOKING_F" );
        REQUEST_ANIMS( "AMB@SMOKING" );
        REQUEST_MODEL( -268530289 );
        REQUEST_MODEL( -2037134882 );
        switch (uParam0)
        {
            case 0:
            REQUEST_MODEL( -1696530209 );
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( 982077731 );
            REQUEST_MODEL( 1758965191 );
            REQUEST_MODEL( -844218756 );
            REQUEST_MODEL( -1684055465 );
            REQUEST_SCRIPT( "ambNightclubBM2" );
            REQUEST_ANIMS( "missamb_bama" );
            break;
            case 1:
            REQUEST_MODEL( -1696530209 );
            REQUEST_MODEL( 1756785265 );
            REQUEST_MODEL( g_U30218 );
            REQUEST_MODEL( g_U30219 );
            REQUEST_MODEL( g_U30220 );
            REQUEST_MODEL( g_U30221 );
            REQUEST_MODEL( 1429700748 );
            REQUEST_MODEL( -1446884113 );
            REQUEST_SCRIPT( "ambNightclubM92" );
            REQUEST_ANIMS( "missamb_m9" );
            break;
            case 2:
            REQUEST_MODEL( g_U30222 );
            REQUEST_MODEL( g_U30223 );
            REQUEST_MODEL( g_U30224 );
            REQUEST_MODEL( g_U30225 );
            REQUEST_MODEL( 1662473323 );
            REQUEST_SCRIPT( "ambNightclubHC2" );
            REQUEST_ANIMS( "missamb_herc_female" );
            REQUEST_ANIMS( "missamb_herc_male" );
            break;
        }
    }
    g_U30144 = 1;
    return;
}

void sub_11831(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: break;
        case 1:
        if (g_U30218 == 0)
        {
            g_U30218 = 698554670;
        }
        if (g_U30219 == 0)
        {
            g_U30219 = -747359056;
        }
        if (g_U30220 == 0)
        {
            g_U30220 = 930552533;
        }
        if (g_U30221 == 0)
        {
            g_U30221 = -297585214;
        }
        break;
        case 2:
        if (g_U30222 == 0)
        {
            g_U30222 = 284474691;
        }
        if (g_U30223 == 0)
        {
            g_U30223 = 563038535;
        }
        if (g_U30224 == 0)
        {
            g_U30224 = -1064645793;
        }
        if (g_U30225 == 0)
        {
            g_U30225 = -808865642;
        }
        break;
    }
    return;
}

int sub_12796(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        sub_11820( uParam0, 0 );
        if ((HAS_MODEL_LOADED( -2037134882 )) AND ((HAS_MODEL_LOADED( -268530289 )) AND ((HAVE_ANIMS_LOADED( "AMB@SMOKING" )) AND ((HAVE_ANIMS_LOADED( "AMB@SMOKING_F" )) AND (HAVE_ANIMS_LOADED( "missnightclub" ))))))
        {
            switch (uParam0)
            {
                case 0:
                if ((HAVE_ANIMS_LOADED( "missamb_bama" )) AND ((HAS_SCRIPT_LOADED( "ambNightclubBM2" )) AND ((HAS_MODEL_LOADED( -1684055465 )) AND ((HAS_MODEL_LOADED( -844218756 )) AND ((HAS_MODEL_LOADED( 1758965191 )) AND ((HAS_MODEL_LOADED( 982077731 )) AND ((HAS_MODEL_LOADED( 1756785265 )) AND (HAS_MODEL_LOADED( -1696530209 )))))))))
                {
                    return 1;
                }
                break;
                case 1:
                if ((HAVE_ANIMS_LOADED( "missamb_m9" )) AND ((HAS_SCRIPT_LOADED( "ambNightclubM92" )) AND ((HAS_MODEL_LOADED( -1446884113 )) AND ((HAS_MODEL_LOADED( 1429700748 )) AND ((HAS_MODEL_LOADED( g_U30221 )) AND ((HAS_MODEL_LOADED( g_U30220 )) AND ((HAS_MODEL_LOADED( g_U30219 )) AND ((HAS_MODEL_LOADED( g_U30218 )) AND ((HAS_MODEL_LOADED( 1756785265 )) AND (HAS_MODEL_LOADED( -1696530209 )))))))))))
                {
                    return 1;
                }
                break;
                case 2:
                if ((HAVE_ANIMS_LOADED( "missamb_herc_male" )) AND ((HAVE_ANIMS_LOADED( "missamb_herc_female" )) AND ((HAS_SCRIPT_LOADED( "ambNightclubHC2" )) AND ((HAS_MODEL_LOADED( 1662473323 )) AND ((HAS_MODEL_LOADED( g_U30225 )) AND ((HAS_MODEL_LOADED( g_U30224 )) AND ((HAS_MODEL_LOADED( g_U30223 )) AND (HAS_MODEL_LOADED( g_U30222 )))))))))
                {
                    return 1;
                }
                break;
            }
        }
    }
    else
    {
        switch (uParam0)
        {
            case 0:
            if ((HAS_MODEL_LOADED( -844218756 )) AND ((HAS_MODEL_LOADED( 982077731 )) AND (HAS_MODEL_LOADED( 1756785265 ))))
            {
                return 1;
            }
            break;
            case 1:
            if ((HAS_MODEL_LOADED( -1446884113 )) AND ((HAS_MODEL_LOADED( g_U30220 )) AND (HAS_MODEL_LOADED( g_U30218 ))))
            {
                return 1;
            }
            break;
            case 2:
            if ((HAS_MODEL_LOADED( 1662473323 )) AND ((HAS_MODEL_LOADED( g_U30224 )) AND (HAS_MODEL_LOADED( g_U30222 ))))
            {
                return 1;
            }
            break;
        }
        return 0;
    }
    PRINTSTRING( "HAVE_ASSETS_FOR_CLUB_LOADED - " );
    switch (uParam0)
    {
        case 0:
        PRINTSTRING( "BAHAMA MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
    }
    PRINTSTRING( " - loading..." );
    PRINTNL();
    return 0;
}

void sub_13965(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_13976( uParam0 ), sub_9812( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_14022( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_14056( uParam0, (uParam1^) );
    return;
}

int sub_13976(unknown uParam0)
{
    return 25;
}

void sub_14022(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_14056(unknown uParam0, unknown uParam1)
{
    sub_14068( ref uParam1, uParam0 );
    return;
}

void sub_14068(unknown uParam0, int iParam1)
{
    sub_14079( uParam0 );
    if (iParam1 == 37)
    {
        sub_14181( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_14765( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_14079(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_14181(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_14765(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_14181( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_14181( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_14181( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_14181( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_14181( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_15063(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if (((bParam0) || (IS_SCREEN_FADED_OUT())) AND (NOT (IS_CHAR_INJURED( sub_917() ))))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_15443( sub_917(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_15443( sub_917(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_15443( sub_917(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_16720( 0 );
        sub_16720( 1 );
        sub_16720( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U169 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U169;
            if (((g_U30110[2] == 0) AND ((g_U30110[1] == 0) AND (g_U30110[0] == 0))) || (iVar6 > 15000))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_15443(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_15454( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_15614( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_15454(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( -399.10690000, 397.67000000, 14.17720000);
        break;
        case 1:
        return vector( -468.03000000, 153.41000000, 9.80000000);
        break;
        case 2:
        return vector( -440.28000000, 356.98000000, 11.54000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

int sub_15614(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_15642( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_15642(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_917(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_16720(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_17112(unknown uParam0)
{
    sub_17123( uParam0 );
    if (g_U43137 == 4)
    {
        sub_17191();
    }
    if (g_U43137 == 10)
    {
        sub_17191();
    }
    if (g_U43137 == 7)
    {
        sub_17191();
    }
    return;
}

void sub_17123(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEALTH( uParam0, ref g_U43510 );
    }
    g_U43499 = 1;
    return;
}

void sub_17191()
{
    GET_GAME_TIMER( ref g_U43504 );
    g_U43497 = 1;
    return;
}

void sub_17450(unknown uParam0)
{
    return;
}

void sub_17969(int iParam0, boolean bParam1)
{
    l_U226 = 0;
    if (NOT (l_U219 == iParam0))
    {
        sub_17998();
        if (bParam1)
        {
            if (NOT l_U225)
            {
                CLEAR_PRINTS();
            }
        }
        CLEAR_HELP();
        l_U219 = iParam0;
        l_U220 = 0;
        l_U222 = 1;
        l_U223 = 0;
        l_U226 = 1;
    }
    return;
}

void sub_17998()
{
    int I;

    sub_18007();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U197[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U197[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U196 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U196 );
    }
    l_U202 = nil;
    l_U176 = 0;
    for ( I = 0; I < l_U177; I++ )
    {
        l_U177[I] = 0;
        l_U192[I] = 0;
    }
    l_U172 = 0;
    l_U170 = 0;
    l_U171 = 0;
    l_U173 = 0;
    l_U175 = 0;
    l_U174 = 0;
    l_U181 = 0;
    l_U182 = 0;
    l_U184 = 0;
    l_U185 = 0;
    l_U208 = 0;
    for ( I = 0; I < l_U210; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U210[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U210[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U210[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_4777() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_917(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_4777() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_917(), 1 );
    }
    l_U186 = 0;
    l_U187 = 0;
    l_U188 = 0;
    l_U189 = 0;
    return;
}

void sub_18007()
{
    if (DOES_BLIP_EXIST( l_U201 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
    }
    return;
}

void sub_18546()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_18621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U215 = {uParam0, uParam1, uParam2};
    l_U205 = uParam3;
    l_U181 = 1;
    return;
}

int sub_18668(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (NOT (CHECK_STUCK_TIMER( uParam0, 3, 60000 )))
        {
            if (NOT (CHECK_STUCK_TIMER( uParam0, 2, 30000 )))
            {
                if (NOT (CHECK_STUCK_TIMER( uParam0, 1, 40000 )))
                {
                    if (NOT (CHECK_STUCK_TIMER( uParam0, 0, 5000 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_18812()
{
    if ((NOT sub_19011()) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_18827( l_U967 )))))
    {
        return 1;
    }
    return 0;
}

int sub_18827(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_18939( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_18939( "\n speech is not playing" );
    }
    return 0;
}

void sub_18939(unknown uParam0)
{
    return;
}

int sub_19011()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U206;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

void sub_19106(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_19127( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_19127(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_19181( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_19181(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_19203( iParam1 )))
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
    sub_19879( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_19203(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_18939( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_18939( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_18939( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_19879(int iParam0, int iParam1)
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

void sub_20142(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15)
{
    return sub_20202( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam10, uParam10, uParam10, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15 );
}

int sub_20202(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20)
{
    int iVar23;
    int I;
    unknown uVar25;

    l_U210[0] = uParam7;
    l_U210[1] = uParam8;
    l_U210[2] = uParam9;
    l_U209 = uParam7;
    sub_20250();
    sub_20582();
    sub_21462();
    if (IS_VEH_DRIVEABLE( uParam10 ))
    {
        if (sub_21660( l_U210[0], l_U210[1], l_U210[2], uParam12, uParam13, uParam14, uParam15, l_U204, uParam17, uParam10, 0, 0 ))
        {
            if (IS_SCREEN_FADED_IN())
            {
                if (IS_CHAR_IN_CAR( sub_917(), uParam10 ))
                {
                    l_U174 = 1;
                    l_U185 = 1;
                    sub_22208( uParam16 );
                    sub_22208( uParam20 );
                    if ((IS_WANTED_LEVEL_GREATER( sub_4777(), 0 )) AND (uParam18))
                    {
                        if ((DOES_BLIP_EXIST( l_U196 )) || (DOES_BLIP_EXIST( l_U201 )))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U196 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 1" );
                            PRINTNL();
                            sub_22208( uParam11 );
                        }
                        if ((NOT l_U170) AND ((NOT sub_27722()) AND (NOT (sub_26362( 0 )))))
                        {
                            sub_22088( uParam19, 0 );
                            l_U214 = uParam19;
                            l_U170 = 1;
                            l_U171 = 0;
                            if (NOT (IS_CHAR_INJURED( l_U210[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U210[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                            }
                        }
                    }
                    else if (l_U170)
                    {
                        sub_22208( uParam19 );
                        l_U170 = 0;
                        l_U171 = 1;
                    }
                    if (l_U171)
                    {
                        if (NOT (sub_26362( 0 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U210[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U210[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                            }
                            l_U171 = 0;
                        }
                    }
                    if (LOCATE_CHAR_IN_CAR_3D( sub_917(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
                    {
                        iVar23 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U210[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U210[I], uParam10 )))
                                {
                                    iVar23 = 0;
                                }
                            }
                        }
                        if ((sub_28121()) AND (iVar23))
                        {
                            sub_22208( uParam11 );
                            sub_22208( uParam12 );
                            sub_22208( uParam13 );
                            sub_22208( uParam14 );
                            sub_22208( uParam15 );
                            sub_22208( uParam19 );
                            sub_17998();
                            for ( I = 0; I < 3; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U210[I], 0 );
                                }
                            }
                            return 1;
                        }
                    }
                    else
                    {
                        iVar23 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U210[I] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U210[I], uParam10 )))
                                    {
                                        iVar23 = 0;
                                    }
                                }
                            }
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U201 )))
                        {
                            if (DOES_BLIP_EXIST( l_U196 ))
                            {
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U196 );
                            }
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 2" );
                            PRINTNL();
                            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U201 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 1" );
                            PRINTNL();
                            sub_24195( l_U201 );
                            if (l_U189)
                            {
                                SHOW_BLIP_ON_ALTIMETER( l_U201, 1 );
                            }
                        }
                        if (NOT (sub_26362( 0 )))
                        {
                            if (NOT l_U172)
                            {
                                sub_22088( uParam11, 0 );
                                l_U172 = 1;
                            }
                        }
                    }
                }
                else if ((NOT l_U185) AND ((IS_WANTED_LEVEL_GREATER( sub_4777(), 0 )) AND (uParam18)))
                {
                    sub_22208( uParam16 );
                    sub_22208( uParam20 );
                    if ((DOES_BLIP_EXIST( l_U196 )) || (DOES_BLIP_EXIST( l_U201 )))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U196 );
                        PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
                        PRINTNL();
                        sub_22208( uParam11 );
                    }
                    if ((NOT l_U170) AND ((NOT sub_27722()) AND (NOT (sub_26362( 0 )))))
                    {
                        sub_22088( uParam19, 0 );
                        l_U214 = uParam19;
                        l_U170 = 1;
                        l_U171 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U210[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U210[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                        }
                    }
                }
                else if (l_U170)
                {
                    sub_22208( uParam19 );
                    l_U170 = 0;
                    l_U171 = 1;
                }
                if (l_U171)
                {
                    if (NOT (sub_26362( 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U210[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U210[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                        }
                        l_U171 = 0;
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U196 )))
                {
                    if (DOES_BLIP_EXIST( l_U201 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
                        sub_22208( uParam11 );
                    }
                    ADD_BLIP_FOR_CAR( uParam10, ref l_U196 );
                    CHANGE_BLIP_DISPLAY( l_U196, 2 );
                    PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 2" );
                    PRINTNL();
                    SET_BLIP_AS_FRIENDLY( l_U196, 1 );
                    if (NOT l_U175)
                    {
                        sub_24195( l_U196 );
                    }
                }
                if (NOT (sub_26362( 0 )))
                {
                    if (NOT l_U174)
                    {
                        sub_22088( uParam16, 0 );
                        l_U174 = 1;
                    }
                    else if (l_U185)
                    {
                        if (NOT (IS_STRING_NULL( uParam20 )))
                        {
                            if (NOT l_U175)
                            {
                                sub_22088( uParam20, 0 );
                                l_U175 = 1;
                            }
                        }
                        else if (NOT l_U175)
                        {
                            sub_22088( uParam16, 0 );
                            l_U175 = 1;
                        }
                    }
                };;;
            }
        }
        else if (l_U170)
        {
            l_U170 = 0;
        }
        if (DOES_BLIP_EXIST( l_U201 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
            sub_22208( uParam11 );
        }
        if (DOES_BLIP_EXIST( l_U196 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U196 );
            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
            PRINTNL();
            sub_22208( uParam16 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - check vehicle is alive before calling this." );
        return 0;
    }
    sub_30091( uParam0, uParam1, uParam2, 0, uParam10 );
    sub_32279( uParam0, uParam1, uParam2 );
    l_U187 = 0;
    l_U188 = 0;
    l_U189 = 0;
    return 0;
}

void sub_20250()
{
    int I;

    for ( I = 0; I < l_U210; I++ )
    {
        if (DOES_CHAR_EXIST( l_U210[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U210[I] )))
            {
                if ((sub_20408()) AND ((sub_20343( l_U210[I] )) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U210[I] ))))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U210[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_4777() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_917() )))
        {
            if ((sub_20408()) AND ((sub_20343( sub_917() )) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_917() ))))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_917(), 1 );
            }
        }
    }
    return;
}

int sub_20343(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U2._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_20408()
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        return 1;
    }
    return 0;
}

void sub_20582()
{
    if (NOT l_U183)
    {
        l_U218 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U170 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U171 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U172 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U173 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U175 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U174 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U176 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U177[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U177[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U177[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U181 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U182 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U203, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U204, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U205, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U215._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U215._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U215._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U184 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U185 );
        END_WIDGET_GROUP();
        l_U183 = 1;
    }
    return;
}

void sub_21462()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_4777() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_917(), 0 );
    }
    for ( I = 0; I < l_U210; I++ )
    {
        if (DOES_CHAR_EXIST( l_U210[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U210[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U210[I], 0 );
            }
        }
    }
    return;
}

int sub_21660(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U210[0] = uParam0;
    l_U210[1] = uParam1;
    l_U210[2] = uParam2;
    l_U209 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U210[I] )))
        {
            iVar16++;
        }
    }
    if ((NOT (DOES_VEHICLE_EXIST( iParam9 ))) AND ((IS_CHAR_SITTING_IN_ANY_CAR( sub_917() )) AND (NOT sub_21831())))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_917(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U190)
            {
                sub_22088( "MORE_SEATS", 0 );
                l_U190 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U190 = 0;
        sub_22208( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U210[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U210[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U210[I], sub_22318() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U210[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U210[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_917() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_917(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U210[I], sub_22318() ))
                        {
                            if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_917() )) AND (NOT sub_21831()))
                            {
                                if (NOT (sub_22520( l_U210[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U210[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U210[I], sub_22318() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U210[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U210[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_917(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U210[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U210[I], sub_22318() ))
                {
                    if (sub_23081())
                    {
                        if (l_U192[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U210[I], -1 );
                            l_U192[I] = 0;
                        }
                    }
                    else if (NOT l_U192[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U210[I], 2 );
                        l_U192[I] = 1;
                    }
                }
                if ((NOT (sub_23359( l_U210[I], iParam9 ))) AND ((NOT (sub_23263( l_U210[I], iParam9 ))) AND (NOT (IS_GROUP_MEMBER( l_U210[I], sub_22318() )))))
                {
                    if (sub_23472( l_U210[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U210[I], sub_22318() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U210[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U210[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_22318(), l_U210[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U197[I] )))
                        {
                            GET_GAME_TIMER( ref l_U207 );
                            ADD_BLIP_FOR_CHAR( l_U210[I], ref l_U197[I] );
                            CHANGE_BLIP_DISPLAY( l_U197[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U197[I], 1 );
                            if (bParam8)
                            {
                                sub_24195( l_U197[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U197[I] ))
                {
                    if ((uParam11) || ((sub_23263( l_U210[I], iParam9 )) || (sub_24314( l_U210[I] ))))
                    {
                        if (DOES_BLIP_EXIST( l_U197[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U197[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_22208( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_24195( l_U197[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U210[I], iParam9 )))
                    {
                        if ((NOT l_U187) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U210[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U210[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U210[I], iParam9 )))
                                {
                                    if (NOT (sub_24314( l_U210[I] )))
                                    {
                                        if (sub_24922( l_U210[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U210[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U210[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_917(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_917(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U210[I], sub_22318() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U210[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U210[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U210[I], 1 );
                                if (l_U186)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U210[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U210[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_917(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U210[I], ref l_U197[I] );
                                CHANGE_BLIP_DISPLAY( l_U197[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U197[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U210[I], sub_22318() )))
                        {
                            if (sub_23472( l_U210[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U210[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U210[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U210[I], 0 );
                                SET_GROUP_MEMBER( sub_22318(), l_U210[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_917(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U210[I], sub_22318() )))
                        {
                            SET_GROUP_MEMBER( sub_22318(), l_U210[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U210[I], sub_22318() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U210[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U197[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U197[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_22208( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U197[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_26362( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U210[I], sub_917(), 40.00000000, 40.00000000, 40.00000000, 0 )) || (sub_22520( l_U210[I] )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if ((iVar16 == 1) || ((iVar17 - l_U207) > 1500))
        {
            if (iVar15 > 0)
            {
                if (l_U208 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U208 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar16 > 1) AND (iVar15 == iVar16))
                    {
                        if ((NOT (l_U208 == iVar15)) AND (NOT l_U176))
                        {
                            sub_22088( uParam6, 0 );
                            l_U176 = 1;
                            l_U208 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT (l_U208 == iVar15)) AND (NOT l_U177[I]))
                                {
                                    sub_22088( uVar28[I], 0 );
                                    l_U177[I] = 1;
                                    l_U208 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U208 = 0;
            }
        }
    }
    l_U186 = 0;
    if ((NOT bVar25) AND (iVar18))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U197[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U197[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_22208( uVar28[I] );
            }
        }
        sub_22208( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_917() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_917(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                {
                    SET_CHAR_COORDINATES( l_U210[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_21831()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_917() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_917(), ref uVar2 );
        if (sub_21872( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_21872(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U210; I++ )
        {
            if (DOES_CHAR_EXIST( l_U210[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_22088(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U206 );
    return;
}

void sub_22208(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_22318()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_22520(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_4777() ))
    {
        GET_CAR_CHAR_IS_USING( sub_917(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_917(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )))
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

int sub_23081()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_917(), ref uVar2 );
    if (sub_21872( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_23263(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_23359(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_22318() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_23472(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_917(), uVar5 ))
                    {
                        if (sub_21831())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_917(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_917(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_23081())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_917(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
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

void sub_24195(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U202 ))
        {
            SET_ROUTE( l_U202, 0 );
        }
        l_U202 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_24314(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_917() ))
        {
            if (sub_24362( sub_917(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_22318(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_22318() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_22318(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_24362(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_24922(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 < 0.50000000) AND (fVar3 > -0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_26362(boolean bParam0)
{
    if ((sub_19011()) || ((IS_SCRIPTED_CONVERSATION_ONGOING()) || ((sub_26416()) || ((((bParam0) AND (sub_26387())) || ((NOT bParam0) AND (sub_20408()))) || (IS_MESSAGE_BEING_DISPLAYED())))))
    {
        return 1;
    }
    return 0;
}

void sub_26387()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_26416()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_27722()
{
    if (NOT (IS_CHAR_INJURED( l_U209 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U209 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_28121()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_917() ))
    {
        if ((IS_CHAR_IN_ANY_HELI( sub_917() )) || (IS_CHAR_ON_ANY_BIKE( sub_917() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U188)
    {
        if (sub_24922( sub_917() ))
        {
            if ((l_U182) || (sub_28211( 1, iVar2 )))
            {
                return 1;
            }
        }
    }
    else if ((l_U182) || (sub_28211( 1, iVar2 )))
    {
        return 1;
    }
    return 0;
}

int sub_28211(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_917() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_917(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_917() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_917(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_917()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_917() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_917() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4777() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4777() )))
    {
        return 0;
    }
    return 1;
}

void sub_30091(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_20582();
    if (l_U181)
    {
        uParam0 = l_U215._fU0;
        uParam1 = l_U215._fU4;
        uParam2 = l_U215._fU8;
        uVar12 = l_U205;
        l_U181 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_917() )))
    {
        GET_CHAR_HEADING( sub_917(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_4777() );
            sub_30302( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_30723( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U210; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U210[I] );
                        if (NOT (IS_CHAR_INJURED( sub_917() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_917(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U210[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U210[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
                    WARP_CHAR_INTO_CAR( sub_917(), uParam4 );
                    for ( I = 0; I < l_U210; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U210[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U210[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U210[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U210[I], 0 );
                            }
                        }
                    }
                }
                sub_30723( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
                    WARP_CHAR_INTO_CAR( sub_917(), uVar8 );
                    sub_31630( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
                        WARP_CHAR_INTO_CAR( sub_917(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U210; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U210[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U210[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U210[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U210; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U210[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U210[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U210[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_15063( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_30302(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_4777() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_917() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_917(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_917(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_30422( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_30422(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_30723(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_917(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_917(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_917(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_917(), uParam3 );
    return;
}

void sub_31630(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_32279(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_32304( uParam0, uParam1, uParam2, l_U203, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_917(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U203, l_U203, l_U203, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U203 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U203 );
            }
        }
    }
    return;
}

int sub_32304(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_32321( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_917(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_32321(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_32671(unknown uParam0)
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

int sub_32842(int iParam0, int iParam1)
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

void sub_33253(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_33298(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_33319( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

int sub_33319(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_19181( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_33547(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_18939( "\n already paused" );
    }
    else if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8866)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_18939( "\n CONVERSATION PAUSED AT LINE " );
            sub_33703( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_18939( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_18939( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_18939( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_33703(unknown uParam0)
{
    return;
}

void sub_34048()
{
    if (NOT (IS_CHAR_INJURED( l_U870 )))
    {
        switch (l_U999)
        {
            case 0:
            if (sub_24362( sub_917(), l_U870 ))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HBLIP" )))
                {
                    if (l_U1000 == 0)
                    {
                        GET_GAME_TIMER( ref l_U1000 );
                    }
                    else if (sub_32842( l_U1000, 1000 ))
                    {
                        PRINT_HELP( "HBLIP" );
                        GET_GAME_TIMER( ref l_U1000 );
                        l_U999++;
                    }
                }
            }
            break;
            case 1:
            if (sub_24362( sub_917(), l_U870 ))
            {
                if (sub_32842( l_U1000, 1000 ))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HBLIP" )))
                    {
                        PRINT_HELP( "ACCEL" );
                        GET_GAME_TIMER( ref l_U1000 );
                        l_U999++;
                    }
                }
            }
            break;
            case 2:
            if (sub_24362( sub_917(), l_U870 ))
            {
                if (sub_32842( l_U1000, 1000 ))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ACCEL" )))
                    {
                        PRINT_HELP( "HBRAKE" );
                        GET_GAME_TIMER( ref l_U1000 );
                        l_U999++;
                    }
                }
            }
            break;
            case 3:
            if (sub_24362( sub_917(), l_U870 ))
            {
                if (sub_32842( l_U1000, 1000 ))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HBRAKE" )))
                    {
                        PRINT_HELP( "CRADIO" );
                        GET_GAME_TIMER( ref l_U1000 );
                        l_U999++;
                    }
                }
            }
            break;
        }
    }
    return;
}

void sub_34579()
{
    unknown uVar2;
    int iVar3;
    float fVar4;

    if (NOT (IS_CHAR_DEAD( l_U870 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U870 ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U870, 1 );
        }
    }
    if (NOT l_U1020)
    {
        if (NOT sub_34647())
        {
            l_U1020 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U1021) AND (l_U1017 > 0)))
    {
        if (sub_34647())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_32671( 0 );
            l_U1021 = 1;
            l_U1017 = 9;
        }
    }
    switch (l_U1017)
    {
        case 0:
        sub_34966( 1, 1, 1 );
        sub_32671( 0 );
        WAIT( 500 );
        if (NOT (DOES_CHAR_EXIST( g_U30210 )))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            sub_11820( 2, 1 );
            while (NOT (sub_12796( 2, 1 )))
            {
                WAIT( 0 );
            }
            DO_SCREEN_FADE_IN( 500 );
        }
        SET_USE_HIGHDOF( 1 );
        DISPLAY_RADAR( 0 );
        CREATE_CAM( 14, ref l_U877[0] );
        CREATE_CAM( 14, ref l_U877[1] );
        CREATE_CAM( 3, ref l_U877[2] );
        CREATE_CAM( 14, ref l_U877[3] );
        CREATE_CAM( 14, ref l_U877[4] );
        CREATE_CAM( 3, ref l_U877[5] );
        CREATE_CAM( 14, ref l_U877[6] );
        CREATE_CAM( 14, ref l_U877[7] );
        CREATE_CAM( 3, ref l_U877[8] );
        CREATE_CAM( 14, ref l_U877[9] );
        CREATE_CAM( 14, ref l_U877[10] );
        CREATE_CAM( 3, ref l_U877[11] );
        CREATE_CAM( 14, ref l_U877[12] );
        CREATE_CAM( 14, ref l_U877[13] );
        CREATE_CAM( 3, ref l_U877[14] );
        CREATE_CAM( 14, ref l_U877[15] );
        CREATE_CAM( 14, ref l_U877[16] );
        CREATE_CAM( 3, ref l_U877[17] );
        if (sub_18668( l_U958 ))
        {
            GET_CAR_HEADING( l_U958, ref fVar4 );
            if ((fVar4 <= 90.00000000) || (fVar4 >= 270.00000000))
            {
                REMOVE_CAR_WINDOW( l_U958, 1 );
            }
            else
            {
                REMOVE_CAR_WINDOW( l_U958, 0 );
                REMOVE_CAR_WINDOW( l_U958, 1 );
                l_U1019 = 1;
            }
        }
        g_U2792 = 1;
        SET_CURRENT_CHAR_WEAPON( sub_917(), 0, 0 );
        if (NOT l_U1019)
        {
            SET_CAM_POS( l_U877[0], -449.00840000, 356.79890000, 11.24516000 );
            SET_CAM_ROT( l_U877[0], -1.98197500, 0.00000000, -77.02491000 );
            SET_CAM_FOV( l_U877[0], 36.00002000 );
            SET_CAM_ACTIVE( l_U877[0], 1 );
            SET_CAM_PROPAGATE( l_U877[0], 1 );
            SET_CAM_FAR_CLIP( l_U877[0], 19.00000000 );
            SET_CAM_POS( l_U877[3], -450.36660000, 367.59370000 + 1.20210000, 12.29029000 );
            SET_CAM_ROT( l_U877[3], 0.80716200, 0.00000000, -159.78800000 );
            SET_CAM_FOV( l_U877[3], 40.80001000 );
            SET_CAM_ACTIVE( l_U877[3], 0 );
            SET_CAM_PROPAGATE( l_U877[3], 0 );
            SET_CAM_POS( l_U877[4], -451.82230000, 366.78890000 + 1.20210000, 12.29029000 );
            SET_CAM_ROT( l_U877[4], 0.80716200, -0.00000000, -151.02570000 );
            SET_CAM_FOV( l_U877[4], 40.80001000 );
            SET_CAM_ACTIVE( l_U877[4], 0 );
            SET_CAM_PROPAGATE( l_U877[4], 0 );
            SET_CAM_POS( l_U877[6], -451.32610000, 357.84430000 + 1.20210000, 11.55228000 );
            SET_CAM_ROT( l_U877[6], 1.61373900, -0.00000000, -118.52680000 );
            SET_CAM_FOV( l_U877[6], 37.80002000 );
            SET_CAM_FAR_DOF( l_U877[6], 7.00000000 );
            SET_CAM_ACTIVE( l_U877[6], 0 );
            SET_CAM_PROPAGATE( l_U877[6], 0 );
            SET_CAM_FAR_CLIP( l_U877[6], 80.00000000 );
            SET_CAM_POS( l_U877[7], -452.02700000, 357.51140000, 11.55228000 );
            SET_CAM_ROT( l_U877[7], 1.61374100, -0.00000000, -99.47311000 );
            SET_CAM_FOV( l_U877[7], 37.80002000 );
            SET_CAM_FAR_DOF( l_U877[7], 7.00000000 );
            SET_CAM_ACTIVE( l_U877[7], 0 );
            SET_CAM_PROPAGATE( l_U877[7], 0 );
            SET_CAM_FAR_CLIP( l_U877[7], 80.00000000 );
            SET_CAM_POS( l_U877[9], -444.44550000, 359.19220000, 11.47640000 );
            SET_CAM_ROT( l_U877[9], 1.54572300, 0.00000000, 123.77760000 );
            SET_CAM_FOV( l_U877[9], 37.80002000 );
            SET_CAM_FAR_DOF( l_U877[9], 10.00000000 );
            SET_CAM_FAR_CLIP( l_U877[9], 80.00000000 );
            SET_CAM_ACTIVE( l_U877[9], 0 );
            SET_CAM_PROPAGATE( l_U877[9], 0 );
            SET_CAM_POS( l_U877[10], -445.38160000, 360.59170000, 11.47640000 );
            SET_CAM_ROT( l_U877[10], 1.54572300, 0.00000000, 139.13460000 );
            SET_CAM_FOV( l_U877[10], 37.80002000 );
            SET_CAM_FAR_DOF( l_U877[10], 10.00000000 );
            SET_CAM_FAR_CLIP( l_U877[10], 80.00000000 );
            SET_CAM_ACTIVE( l_U877[10], 0 );
            SET_CAM_PROPAGATE( l_U877[10], 0 );
            SET_CAM_POS( l_U877[12], -451.01640000, 357.96000000 + 1.20210000, 11.66443000 );
            SET_CAM_ROT( l_U877[12], 1.04077900, 0.00000000, -119.74630000 );
            SET_CAM_FOV( l_U877[12], 37.20002000 );
            SET_CAM_ACTIVE( l_U877[12], 0 );
            SET_CAM_FAR_DOF( l_U877[12], 7.00000000 );
            SET_CAM_PROPAGATE( l_U877[12], 0 );
            SET_CAM_FAR_CLIP( l_U877[12], 80.00000000 );
            SET_CAM_POS( l_U877[13], -451.47800000, 356.98640000 + 1.20210000, 11.66443000 );
            SET_CAM_ROT( l_U877[13], 1.04077900, -0.00000000, -107.02670000 );
            SET_CAM_FOV( l_U877[13], 37.20002000 );
            SET_CAM_FAR_DOF( l_U877[13], 7.00000000 );
            SET_CAM_ACTIVE( l_U877[13], 0 );
            SET_CAM_PROPAGATE( l_U877[13], 0 );
            SET_CAM_FAR_CLIP( l_U877[13], 80.00000000 );
            SET_CAM_POS( l_U877[15], -445.51920000, 359.24820000 + 1.20210000, 10.65193000 );
            SET_CAM_ROT( l_U877[15], 8.94761700, -0.00000000, 135.97580000 );
            SET_CAM_FOV( l_U877[15], 37.80002000 );
            SET_CAM_FAR_DOF( l_U877[15], 7.00000000 );
            SET_CAM_FAR_CLIP( l_U877[15], 150.00000000 );
            SET_CAM_ACTIVE( l_U877[15], 0 );
            SET_CAM_PROPAGATE( l_U877[15], 0 );
            SET_CAM_POS( l_U877[16], -446.22470000, 359.84310000 + 1.20210000, 10.65193000 );
            SET_CAM_ROT( l_U877[16], 8.94761700, 0.00000000, 145.25140000 );
            SET_CAM_FOV( l_U877[16], 37.80002000 );
            SET_CAM_FAR_DOF( l_U877[16], 7.00000000 );
            SET_CAM_FAR_CLIP( l_U877[16], 150.00000000 );
            SET_CAM_ACTIVE( l_U877[16], 0 );
            SET_CAM_PROPAGATE( l_U877[16], 0 );
            l_U1022 = 1;
        }
        else
        {
            SET_CAM_POS( l_U877[0], -453.62190000, 353.17220000 + 1.47070000, 12.69933000 - 0.18970000 );
            SET_CAM_ROT( l_U877[0], -9.29410600, 0.00000000, -51.95969000 );
            SET_CAM_FOV( l_U877[0], 36.60002000 );
            SET_CAM_ACTIVE( l_U877[0], 1 );
            SET_CAM_PROPAGATE( l_U877[0], 1 );
            SET_CAM_POS( l_U877[1], -452.45550000, 351.80630000 + 1.47070000, 12.69933000 - 0.18970000 );
            SET_CAM_ROT( l_U877[1], -9.29410600, -0.00000000, -44.05288000 );
            SET_CAM_FOV( l_U877[1], 36.60002000 );
            SET_CAM_ACTIVE( l_U877[1], 1 );
            SET_CAM_PROPAGATE( l_U877[1], 0 );
            SET_CAM_POS( l_U877[3], -453.22410000, 350.63570000 + 1.47070000, 13.85711000 - 0.18970000 );
            SET_CAM_ROT( l_U877[3], -13.85612000, 0.00000000, -36.40587000 );
            SET_CAM_FOV( l_U877[3], 41.10001000 );
            SET_CAM_ACTIVE( l_U877[3], 0 );
            SET_CAM_PROPAGATE( l_U877[3], 0 );
            SET_CAM_POS( l_U877[4], -450.80250000, 349.00840000 + 1.47070000, 13.85711000 - 0.18970000 );
            SET_CAM_ROT( l_U877[4], -13.85612000, -0.00000000, -24.71754000 );
            SET_CAM_FOV( l_U877[4], 41.10001000 );
            SET_CAM_ACTIVE( l_U877[4], 0 );
            SET_CAM_PROPAGATE( l_U877[4], 0 );
            SET_CAM_POS( l_U877[6], -451.70340000, 356.69580000 + 1.47070000, 11.69751000 - 0.18970000 );
            SET_CAM_ROT( l_U877[6], -3.31369500, -0.00000000, -64.30548000 );
            SET_CAM_FOV( l_U877[6], 37.80002000 );
            SET_CAM_FAR_DOF( l_U877[6], 7.00000000 );
            SET_CAM_ACTIVE( l_U877[6], 0 );
            SET_CAM_PROPAGATE( l_U877[6], 0 );
            SET_CAM_POS( l_U877[7], -451.16510000, 355.75960000 + 1.47070000, 11.69751000 - 0.18970000 );
            SET_CAM_ROT( l_U877[7], -3.31369500, -0.00000000, -51.01285000 );
            SET_CAM_FOV( l_U877[7], 37.80002000 );
            SET_CAM_FAR_DOF( l_U877[7], 7.00000000 );
            SET_CAM_ACTIVE( l_U877[7], 0 );
            SET_CAM_PROPAGATE( l_U877[7], 0 );
            SET_CAM_POS( l_U877[9], -446.88660000, 356.05930000 + 1.47070000, 11.47650000 - 0.18970000 );
            SET_CAM_ROT( l_U877[9], -0.21971800, 0.00000000, 43.69015000 );
            SET_CAM_FOV( l_U877[9], 37.80002000 );
            SET_CAM_FAR_DOF( l_U877[9], 7.00000000 );
            SET_CAM_ACTIVE( l_U877[9], 0 );
            SET_CAM_PROPAGATE( l_U877[9], 0 );
            SET_CAM_POS( l_U877[10], -446.47610000, 356.55030000 + 1.47070000, 11.47650000 - 0.18970000 );
            SET_CAM_ROT( l_U877[10], -0.21971400, -0.00000000, 58.81624000 );
            SET_CAM_FOV( l_U877[10], 37.80002000 );
            SET_CAM_FAR_DOF( l_U877[10], 7.00000000 );
            SET_CAM_ACTIVE( l_U877[10], 0 );
            SET_CAM_PROPAGATE( l_U877[10], 0 );
            SET_CAM_POS( l_U877[12], -451.41300000, 357.04620000 + 1.47070000, 11.61258000 - 0.18970000 );
            SET_CAM_ROT( l_U877[12], -2.05319000, -0.00000000, -68.51038000 );
            SET_CAM_FOV( l_U877[12], 33.00003000 );
            SET_CAM_FAR_DOF( l_U877[12], 7.00000000 );
            SET_CAM_ACTIVE( l_U877[12], 0 );
            SET_CAM_PROPAGATE( l_U877[12], 0 );
            SET_CAM_POS( l_U877[13], -450.95870000, 355.89240000 + 1.47070000, 11.61258000 - 0.18970000 );
            SET_CAM_ROT( l_U877[13], -2.05319500, -0.00000000, -42.61275000 );
            SET_CAM_FOV( l_U877[13], 33.00003000 );
            SET_CAM_FAR_DOF( l_U877[13], 7.00000000 );
            SET_CAM_ACTIVE( l_U877[13], 0 );
            SET_CAM_PROPAGATE( l_U877[13], 0 );
            SET_CAM_POS( l_U877[15], -445.84860000, 352.37940000 + 1.47070000, 11.50670000 - 0.18970000 );
            SET_CAM_ROT( l_U877[15], 0.46784800, -0.00000000, 25.56071000 );
            SET_CAM_FOV( l_U877[15], 36.60002000 );
            SET_CAM_FAR_DOF( l_U877[15], 11.00000000 );
            SET_CAM_ACTIVE( l_U877[15], 0 );
            SET_CAM_PROPAGATE( l_U877[15], 0 );
            SET_CAM_POS( l_U877[16], -444.54950000, 353.00070000 + 1.47070000, 11.50670000 - 0.18970000 );
            SET_CAM_ROT( l_U877[16], 0.46785400, -0.00000000, 42.17650000 );
            SET_CAM_FAR_DOF( l_U877[16], 11.00000000 );
            SET_CAM_FOV( l_U877[16], 36.60002000 );
            SET_CAM_ACTIVE( l_U877[16], 0 );
            SET_CAM_PROPAGATE( l_U877[16], 0 );
        }
        sub_39239();
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (sub_18668( l_U958 ))
        {
            GET_CAR_HEADING( l_U958, ref fVar4 );
            if ((fVar4 <= 90.00000000) || (fVar4 >= 270.00000000))
            {
                SET_CAR_COORDINATES( l_U958, -448.81690000, 356.77280000, 10.26320000 );
                SET_CAR_HEADING( l_U958, 0.32220000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U958 );
            }
            else
            {
                SET_CAR_COORDINATES( l_U958, -449.09360000, 359.64210000, 9.92660100 );
                SET_CAR_HEADING( l_U958, 180.28420000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U958 );
            }
        }
        if (l_U1019)
        {
            SET_CAM_INTERP_STYLE_CORE( l_U877[2], l_U877[0], l_U877[1], 10000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[2], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U877[2], 1 );
            SET_CAM_PROPAGATE( l_U877[2], 1 );
            SET_CAM_ACTIVE( l_U877[0], 0 );
            SET_CAM_ACTIVE( l_U877[0], 0 );
        }
        CLEAR_AREA( -444.56720000, 357.08850000, 11.08380000, 3.00000000, 1 );
        g_U30118 = 1;
        if (NOT (IS_CHAR_INJURED( l_U870 )))
        {
            if (NOT (IS_CHAR_INJURED( g_U30210 )))
            {
                sub_4432( 2, g_U30210, "TROY", 0 );
                l_U1023 = 1;
                TASK_LOOK_AT_CHAR( l_U870, g_U30210, -2, 0 );
                TASK_LOOK_AT_CHAR( sub_917(), g_U30210, -2, 0 );
            }
        }
        l_U1017 = 2;
        SETTIMERA( 0 );
        break;
        case 2:
        if (NOT l_U1023)
        {
            if (NOT (IS_CHAR_INJURED( g_U30210 )))
            {
                sub_4432( 2, g_U30210, "TROY", 0 );
                l_U1023 = 1;
            }
        }
        if ((TIMERA() > 15000) || (sub_19106( "E2T1_TROY", ref l_U967, 6, 1 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U870 )))
            {
                if (NOT l_U1019)
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U870, "Scene_01_tony_gesture", "misstony01", 1000.00000000, 0, 0, 0, 0, 0 );
                }
                l_U1017 = 1;
            }
        }
        break;
        case 1:
        if (NOT l_U1018)
        {
            if ((TIMERA() > 1500) || ((TIMERA() > 500) AND (sub_18827( l_U967 ))))
            {
                if (NOT (IS_CHAR_INJURED( l_U870 )))
                {
                    if (NOT (IS_CHAR_INJURED( g_U30210 )))
                    {
                        if (NOT l_U1019)
                        {
                            TASK_LOOK_AT_CHAR( g_U30210, l_U870, -2, 0 );
                            OPEN_SEQUENCE_TASK( ref uVar2 );
                            TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD_HDG_RATE( 0, -446.48860000, 355.62160000 + 1.20210000, 10.30000000, 2, -1, 0.50000000, 90.63960000, 10.00000000 );
                            if (NOT (IS_CHAR_INJURED( l_U870 )))
                            {
                                TASK_LOOK_AT_CHAR( 0, l_U870, 9999999, 0 );
                            }
                            CLOSE_SEQUENCE_TASK( uVar2 );
                        }
                        else
                        {
                            TASK_LOOK_AT_CHAR( g_U30210, l_U870, -2, 0 );
                            OPEN_SEQUENCE_TASK( ref uVar2 );
                            TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD_HDG_RATE( 0, -446.75360000, 357.63430000 + 1.47070000, 10.05000000, 2, -1, 0.50000000, 72.07850000, 10.00000000 );
                            if (NOT (IS_CHAR_INJURED( l_U870 )))
                            {
                                TASK_LOOK_AT_CHAR( 0, l_U870, 9999999, 0 );
                            }
                            CLOSE_SEQUENCE_TASK( uVar2 );
                        }
                        TASK_PERFORM_SEQUENCE( g_U30210, uVar2 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    l_U1018 = 1;
                }
            }
        }
        if (sub_18827( l_U967 ))
        {
            iVar3 = sub_40880( l_U967 );
            if (iVar3 > 0)
            {
                sub_35059( ref l_U967, 0 );
            }
        }
        else if (TIMERA() > 1500)
        {
            if (l_U1018)
            {
                if (NOT l_U1019)
                {
                    SET_CAM_ACTIVE( l_U877[3], 1 );
                    SET_CAM_ACTIVE( l_U877[4], 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U877[5], l_U877[3], l_U877[4], 10000, 0 );
                    SET_CAM_INTERP_STYLE_DETAILED( l_U877[5], 0, 0, 1, 1 );
                    SET_CAM_ACTIVE( l_U877[5], 1 );
                    SET_CAM_PROPAGATE( l_U877[5], 1 );
                    SET_CAM_ACTIVE( l_U877[0], 0 );
                    SET_CAM_PROPAGATE( l_U877[0], 0 );
                }
                SETTIMERA( 0 );
                l_U1017 = 3;
            }
        }
        break;
        case 3:
        if ((TIMERA() > 10000) || (NOT (IS_CHAR_INJURED( g_U30210 ))))
        {
            if ((TIMERA() > 10000) || (LOCATE_CHAR_ANY_MEANS_3D( g_U30210, -447.66690000, 356.51920000, 10.73690000, 1.60000000, 4.00000000, 2.00000000, 0 )))
            {
                if (NOT l_U1019)
                {
                    SET_CHAR_COORDINATES( g_U30210, -446.48860000, 355.62160000 + 1.20210000, 10.30000000 );
                    SET_CHAR_HEADING( g_U30210, 90.63960000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( g_U30210, -446.75360000, 357.63430000 + 1.47070000, 10.05000000 );
                    SET_CHAR_HEADING( g_U30210, 72.07850000 );
                }
                SET_CAM_ACTIVE( l_U877[6], 1 );
                SET_CAM_ACTIVE( l_U877[7], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U877[8], l_U877[6], l_U877[7], 30000, 0 );
                SET_CAM_INTERP_STYLE_DETAILED( l_U877[8], 0, 0, 1, 1 );
                SET_CAM_ACTIVE( l_U877[8], 1 );
                SET_CAM_PROPAGATE( l_U877[8], 1 );
                SET_CAM_ACTIVE( l_U877[4], 0 );
                SET_CAM_ACTIVE( l_U877[3], 0 );
                SET_CAM_ACTIVE( l_U877[4], 0 );
                SET_CAM_ACTIVE( l_U877[5], 0 );
                SET_CAM_PROPAGATE( l_U877[5], 0 );
                SET_CAM_ACTIVE( l_U877[2], 0 );
                SET_CAM_PROPAGATE( l_U877[2], 0 );
                SET_CAM_ACTIVE( l_U877[0], 0 );
                SET_CAM_PROPAGATE( l_U877[0], 0 );
                SET_CAM_ACTIVE( l_U877[1], 0 );
                SET_CAM_PROPAGATE( l_U877[1], 0 );
                SETTIMERA( 0 );
                l_U1017 = 4;
            }
        }
        break;
        case 4:
        if (NOT l_U1023)
        {
            if (NOT (IS_CHAR_INJURED( g_U30210 )))
            {
                sub_4432( 2, g_U30210, "TROY", 0 );
                l_U1023 = 1;
            }
        }
        if ((TIMERA() > 15000) || (sub_19106( "E2T1_TROY2", ref l_U967, 6, 1 )))
        {
            if (NOT (IS_CHAR_INJURED( g_U30210 )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U30210, "Scene_01_troy", "misstony01", 1000.00000000, 0, 1, 1, 0, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U870 )))
            {
                if (NOT l_U1019)
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U870, "Scene_01_tony", "misstony01", 1000.00000000, 0, 0, 0, 0, 0 );
                }
            }
            l_U1017 = 5;
            SETTIMERA( 0 );
        }
        break;
        case 5:
        iVar3 = sub_40880( l_U967 );
        if ((TIMERA() > 10000) || ((sub_40880( l_U967 )) > 0))
        {
            SETTIMERA( 0 );
            l_U1017 = 6;
        }
        break;
        case 6:
        iVar3 = sub_40880( l_U967 );
        if ((TIMERA() > 10000) || ((sub_40880( l_U967 )) > 2))
        {
            SETTIMERA( 0 );
            l_U1017 = 7;
        }
        break;
        case 7:
        iVar3 = sub_40880( l_U967 );
        if ((TIMERA() > 10000) || ((sub_40880( l_U967 )) > 4))
        {
            SETTIMERA( 0 );
            l_U1017 = 8;
        }
        break;
        case 8:
        if (TIMERA() > 4500)
        {
            if (NOT (IS_CHAR_INJURED( l_U870 )))
            {
                TASK_LOOK_AT_CHAR( l_U870, sub_917(), -1, 0 );
                SETTIMERA( 0 );
                l_U1017 = 9;
            }
        }
        break;
        case 9:
        if ((l_U1021) || ((TIMERA() > 20000) || (NOT (sub_18827( l_U967 )))))
        {
            sub_42258();
            sub_42389( ref l_U877[6], ref l_U877[7], ref l_U877[8] );
            sub_42389( ref l_U877[0], ref l_U877[1], ref l_U877[2] );
            sub_42389( ref l_U877[3], ref l_U877[4], ref l_U877[5] );
            sub_42389( ref l_U877[9], ref l_U877[10], ref l_U877[11] );
            sub_42389( ref l_U877[12], ref l_U877[13], ref l_U877[14] );
            sub_42389( ref l_U877[15], ref l_U877[16], ref l_U877[17] );
            SET_USE_HIGHDOF( 0 );
            sub_42645( 0, 1, 0, 0, 0 );
            l_U175 = 1;
            l_U174 = 1;
            if (NOT (IS_CHAR_INJURED( l_U870 )))
            {
                TASK_CLEAR_LOOK_AT( l_U870 );
            }
            if (NOT (IS_CHAR_INJURED( g_U30210 )))
            {
                TASK_CLEAR_LOOK_AT( g_U30210 );
                if (l_U1021)
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( g_U30210 );
                }
            }
            SWITCH_ROADS_BACK_TO_ORIGINAL( -457.98710000, 274.47610000, -1000.00000000, -452.27350000, 378.06200000, 1000.00000000 );
            TASK_CLEAR_LOOK_AT( sub_917() );
            g_U30118 = 0;
            l_U981 = 1;
            SWITCH_PED_PATHS_ON( -447.38710000, 347.71620000, -100.00000000, -442.24400000, 368.02510000, 100.00000000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1662473323 );
            if (g_U30222 != 0)
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( g_U30222 );
            }
            l_U1022 = 0;
            SET_TIME_CYCLE_FAR_CLIP_DISABLED( 0 );
            if (g_U30224 != 0)
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( g_U30224 );
            }
            if (l_U1021)
            {
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            sub_17969( 2, 1 );
        }
        break;
    }
    if (l_U1022)
    {
        SET_TIME_CYCLE_FAR_CLIP_DISABLED( 1 );
    }
    return;
}

int sub_34647()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_34966(boolean bParam0, boolean bParam1, boolean bParam2)
{
    sub_34975();
    if (bParam1)
    {
        sub_35059( ref l_U231, 0 );
        CLEAR_PRINTS();
    }
    CLEAR_HELP();
    SET_WIDESCREEN_BORDERS( 1 );
    if (bParam0)
    {
        SET_PLAYER_CONTROL( sub_4777(), 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_917() )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
        }
        if (bParam2)
        {
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_917(), 1 );
        }
    }
    else
    {
        SET_PLAYER_CONTROL_ADVANCED( sub_4777(), 0, 0, 0 );
    }
    sub_35295();
    return;
}

void sub_34975()
{
    if (NOT l_U224)
    {
        sub_34999( ref l_U221 );
        l_U224 = 1;
    }
    return;
}

void sub_34999(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_USE_HIGHDOF( 1 );
    return;
}

void sub_35059(int iParam0, unknown uParam1)
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

void sub_35295()
{
    int iVar2;

    if (IS_PLAYER_PLAYING( sub_4777() ))
    {
        GET_CHAR_PROP_INDEX( sub_917(), 0, ref iVar2 );
        if (iVar2 == 2)
        {
            CLEAR_CHAR_PROP( sub_917(), 0 );
        }
    }
    return;
}

void sub_39239()
{
    CREATE_CAM( 14, ref l_U1012[0] );
    SET_CAM_POS( l_U1012[0], -454.81920000, 367.22830000, 12.16860000 );
    SET_CAM_ROT( l_U1012[0], 1.49840000, 0.00000000, -133.69600000 );
    SET_CAM_FOV( l_U1012[0], 45.00000000 );
    SET_CAM_ACTIVE( l_U1012[0], 1 );
    CREATE_CAM( 14, ref l_U1012[1] );
    SET_CAM_POS( l_U1012[1], -452.76350000, 367.29040000, 12.16070000 );
    SET_CAM_ROT( l_U1012[1], 0.62740000, 0.00000000, -143.41810000 );
    SET_CAM_FOV( l_U1012[1], 45.00000000 );
    SET_CAM_ACTIVE( l_U1012[1], 1 );
    CREATE_CAM( 14, ref l_U1012[2] );
    SET_CAM_POS( l_U1012[2], -450.70780000, 367.35240000, 12.15280000 );
    SET_CAM_ROT( l_U1012[2], -0.24360000, 0.00000000, -153.14030000 );
    SET_CAM_FOV( l_U1012[2], 45.00000000 );
    SET_CAM_ACTIVE( l_U1012[2], 1 );
    CREATE_CAM( 14, ref l_U1012[3] );
    SET_CAM_POS( l_U1012[3], -448.65210000, 367.41450000, 12.14490000 );
    SET_CAM_ROT( l_U1012[3], -1.11450000, 0.00000000, -162.86250000 );
    SET_CAM_FOV( l_U1012[3], 45.00000000 );
    SET_CAM_ACTIVE( l_U1012[3], 1 );
    CREATE_CAM( 25, ref l_U1011 );
    SET_CAM_SPLINE_DURATION( l_U1011, 35000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U1011, 0 );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[0] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[1] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[2] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[3] );
    return;
}

void sub_40880(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_18827( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_42258()
{
    int I;

    for ( I = 0; I < l_U1012; I++ )
    {
        if (DOES_CAM_EXIST( l_U1012[I] ))
        {
            DESTROY_CAM( l_U1012[I] );
        }
    }
    if (DOES_CAM_EXIST( l_U1011 ))
    {
        DESTROY_CAM( l_U1011 );
    }
    return;
}

void sub_42389(unknown uParam0, unknown uParam1, unknown uParam2)
{
    SET_CAM_ACTIVE( (uParam2^), 0 );
    SET_CAM_PROPAGATE( (uParam2^), 0 );
    SET_CAM_ACTIVE( (uParam1^), 0 );
    SET_CAM_PROPAGATE( (uParam1^), 0 );
    SET_CAM_ACTIVE( (uParam0^), 0 );
    SET_CAM_PROPAGATE( (uParam0^), 0 );
    DESTROY_CAM( (uParam2^) );
    DESTROY_CAM( (uParam0^) );
    DESTROY_CAM( (uParam1^) );
    return;
}

void sub_42645(int iParam0, unknown uParam1, boolean bParam2, unknown uParam3, boolean bParam4)
{
    boolean bVar7;

    bVar7 = false;
    CLEAR_PRINTS();
    CLEAR_HELP();
    SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_GAME_CAM_PITCH( 0.00000000 );
    SET_CAM_BEHIND_PED( sub_917() );
    if (NOT bParam4)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_917(), 0 );
    }
    if ((uParam3) || (sub_42736()))
    {
        bVar7 = true;
    }
    sub_43001();
    if (bVar7)
    {
        if ((NOT IS_SCREEN_FADED_OUT()) AND ((uParam1) AND (iParam0 > 0)))
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, iParam0 );
        }
        else
        {
            sub_43138();
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        }
    }
    else
    {
        SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
    }
    sub_43402();
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_SCREEN_FADED_OUT())
    {
        if (NOT bParam2)
        {
            DO_SCREEN_FADE_IN( iParam0 );
        }
        else
        {
            DO_SCREEN_FADE_IN_UNHACKED( iParam0 );
        }
    }
    DISPLAY_RADAR( 1 );
    return;
}

void sub_42736()
{
    int Result;

    Result = 0;
    if (DOES_CAM_EXIST( l_U227 ))
    {
        SET_CAM_ACTIVE( l_U227, 0 );
        SET_CAM_PROPAGATE( l_U227, 0 );
        DESTROY_CAM( l_U227 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U228 ))
    {
        SET_CAM_ACTIVE( l_U228, 0 );
        SET_CAM_PROPAGATE( l_U228, 0 );
        DESTROY_CAM( l_U228 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U229 ))
    {
        SET_CAM_ACTIVE( l_U229, 0 );
        SET_CAM_PROPAGATE( l_U229, 0 );
        DESTROY_CAM( l_U229 );
        Result = 1;
    }
    if (DOES_CAM_EXIST( l_U230 ))
    {
        SET_CAM_ACTIVE( l_U230, 0 );
        SET_CAM_PROPAGATE( l_U230, 0 );
        DESTROY_CAM( l_U230 );
        Result = 1;
    }
    return Result;
}

void sub_43001()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_4777() ))
    {
        if (IS_SCREEN_FADED_OUT())
        {
            GET_CHAR_COORDINATES( sub_917(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            WAIT( 0 );
        }
    }
    return;
}

void sub_43138()
{
    unknown uVar2;
    unknown uVar3;

    if (IS_CHAR_IN_ANY_CAR( sub_917() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_917(), ref uVar2 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                GET_CAR_MODEL( uVar2, ref uVar3 );
                if (IS_THIS_MODEL_A_CAR( uVar3 ))
                {
                    SHUT_CAR_DOOR( uVar2, 0 );
                    SHUT_CAR_DOOR( uVar2, 1 );
                    SHUT_CAR_DOOR( uVar2, 2 );
                    SHUT_CAR_DOOR( uVar2, 3 );
                }
            }
        }
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (DOES_VEHICLE_EXIST( uVar2 ))
    {
        if (NOT (IS_CAR_DEAD( uVar2 )))
        {
            GET_CAR_MODEL( uVar2, ref uVar3 );
            if (IS_THIS_MODEL_A_CAR( uVar3 ))
            {
                SHUT_CAR_DOOR( uVar2, 0 );
                SHUT_CAR_DOOR( uVar2, 1 );
                SHUT_CAR_DOOR( uVar2, 2 );
                SHUT_CAR_DOOR( uVar2, 3 );
            }
        }
    }
    return;
}

void sub_43402()
{
    if (l_U224)
    {
        sub_42736();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_43440( ref l_U221 );
        l_U224 = 0;
    }
    return;
}

void sub_43440(unknown uParam0)
{
    SET_USE_HIGHDOF( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_43916()
{
    switch (l_U220)
    {
        case 0:
        sub_42645( 1000, 1, 0, 1, 0 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL( sub_4777(), 1 );
        l_U220++;
        break;
        case 1:
        sub_18621( -459.44330000, 161.08140000, 8.80710100, 176.15230000 );
        if (sub_18668( l_U958 ))
        {
            if (sub_20142( -459.86100000, 153.74800000, 11.16900000, 2.50000000, 2.50000000, 2.50000000, 1, l_U870, l_U958, "T1_M03", "T1_M02", "T1_M13", 0, 1, "T1_M12", 0 ))
            {
                SET_PLAYER_CONTROL( sub_4777(), 0 );
                sub_32671( 0 );
                g_U43104[0] = 2;
                sub_17969( 4, 1 );
            }
            else if (NOT (IS_CHAR_DEAD( l_U870 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_917(), l_U870, 30.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    if (IS_CHAR_IN_CAR( sub_917(), l_U958 ))
                    {
                        if (sub_24362( sub_917(), l_U870 ))
                        {
                            if (sub_18812())
                            {
                                if (NOT (sub_18827( l_U967 )))
                                {
                                    if (NOT l_U1024)
                                    {
                                        if (sub_19106( "E2T1_B2AV1", ref l_U967, 6, 1 ))
                                        {
                                            l_U1024 = 1;
                                        }
                                    }
                                    else if (sub_33253( l_U967 ))
                                    {
                                        sub_33298( "E2T1_B2AV1", ref l_U967, 6, 1 );
                                    }
                                }
                            }
                        }
                        else if (sub_18827( l_U967 ))
                        {
                            sub_33547( ref l_U967 );
                        }
                    }
                }
            }
        }
        else
        {
            sub_44460( "T1_FAIL_2" );
            sub_44549();
        }
        break;
    }
    return;
}

void sub_44460(unknown uParam0)
{
    if (NOT (COMPARE_STRING( uParam0, "" )))
    {
        if (NOT (sub_26362( 0 )))
        {
            sub_32671( 0 );
        }
        else
        {
            sub_32671( 1 );
        }
        if (NOT l_U225)
        {
            sub_22088( uParam0, 0 );
            l_U225 = 1;
        }
    }
    return;
}

void sub_44549()
{
    sub_44558();
    sub_17998();
    WAIT( 7000 );
    if (NOT g_U0)
    {
        while (NOT (sub_28211( 1, 0 )))
        {
            WAIT( 0 );
        }
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_OUT_UNHACKED( 1000 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        if (DOES_BLIP_EXIST( l_U986 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U986 );
        }
        if (DOES_CHAR_EXIST( l_U870 ))
        {
            DELETE_CHAR( ref l_U870 );
        }
        g_U43701 = 0;
        if (NOT (IS_CHAR_DEAD( sub_917() )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
        }
        if (g_U43133)
        {
            if (NOT (IS_CHAR_DEAD( sub_917() )))
            {
                CLEAR_WANTED_LEVEL( sub_4777() );
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_917(), -444.69950000, 1389.68700000, 14.47120000, 100.00000000, 100.00000000, 100.00000000, 0 )))
                {
                    LOAD_SCENE( -444.69950000, 1389.68700000, 14.47120000 );
                    CLEAR_AREA( -444.69950000, 1389.68700000, 14.47120000, 50.00000000, 1 );
                    SET_CHAR_COORDINATES( sub_917(), -444.69950000, 1389.68700000, 14.47120000 );
                    SET_CHAR_HEADING( sub_917(), 78.63600000 );
                }
                else
                {
                    LOAD_SCENE( -74.27480000, -226.13930000, 13.64030000 );
                    CLEAR_AREA( -74.27480000, -226.13930000, 13.64030000, 50.00000000, 1 );
                    SET_CHAR_COORDINATES( sub_917(), -74.27480000, -226.13930000, 13.64030000 );
                    SET_CHAR_HEADING( sub_917(), 180.00000000 );
                }
                CLEAR_ROOM_FOR_CHAR( sub_917() );
                SET_GAME_CAM_HEADING( 0.00000000 );
                DO_SCREEN_FADE_IN( 500 );
            }
        }
    }
    sub_45210();
    sub_8529();
    return;
}

void sub_44558()
{
    if ((g_U8867 == 4) || (g_U560 == 1))
    {
        if (g_U95._fU60 != -1)
        {
            g_U16014[g_U95._fU60]._fU212._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U95._fU376 = 0;
        g_U95._fU100 = 1;
    }
    return;
}

void sub_45210()
{
    int iVar2;

    iVar2 = 0;
    sub_45224( iVar2 );
    sub_7512( iVar2 );
    return;
}

void sub_45224(unknown uParam0)
{
    if (g_U12382[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_4777(), 150 );
    CLEAR_HELP();
    sub_6226( uParam0 );
    return;
}

void sub_45337()
{
    float fVar2;

    if (NOT l_U1028)
    {
        if (NOT sub_34647())
        {
            l_U1028 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U1029) AND (l_U1025 > 0)))
    {
        if (sub_34647())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            sub_32671( 0 );
            CLEAR_HELP();
            l_U1029 = 1;
            l_U1025 = 5;
        }
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, 0, 0.00000000 );
    switch (l_U1025)
    {
        case 0:
        sub_34966( 1, 1, 1 );
        sub_32671( 0 );
        WAIT( 500 );
        if (NOT (IS_CAR_DEAD( l_U958 )))
        {
            GET_CAR_HEADING( l_U958, ref fVar2 );
            if ((fVar2 < 90.00000000) || (fVar2 > 270.00000000))
            {
                l_U1030 = 1;
            }
        }
        DISPLAY_RADAR( 0 );
        sub_8935( 2 );
        sub_45684( 2 );
        SET_CURRENT_CHAR_WEAPON( sub_917(), 0, 0 );
        if (NOT l_U1030)
        {
            sub_46506();
        }
        if (NOT (IS_CHAR_INJURED( l_U870 )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U870 );
        }
        g_U30118 = 1;
        CREATE_CAM( 14, ref l_U877[18] );
        CREATE_CAM( 14, ref l_U877[19] );
        CREATE_CAM( 3, ref l_U877[20] );
        CREATE_CAM( 14, ref l_U877[21] );
        CREATE_CAM( 14, ref l_U877[22] );
        CREATE_CAM( 3, ref l_U877[23] );
        CREATE_CAM( 14, ref l_U877[24] );
        CREATE_CAM( 14, ref l_U877[25] );
        CREATE_CAM( 3, ref l_U877[26] );
        g_U2792 = 1;
        if (NOT l_U1030)
        {
            SET_CAM_POS( l_U877[21], -457.05300000, 150.49810000, 9.82730600 );
            SET_CAM_ROT( l_U877[21], 5.91264600, -0.00000000, 59.44119000 );
            SET_CAM_FOV( l_U877[21], 38.10002000 );
            SET_CAM_ACTIVE( l_U877[21], 0 );
            SET_CAM_PROPAGATE( l_U877[21], 0 );
            SET_CAM_POS( l_U877[22], -456.63780000, 151.06350000, 9.82730600 );
            SET_CAM_ROT( l_U877[22], 5.91264600, -0.00000000, 76.97370000 );
            SET_CAM_FOV( l_U877[22], 38.10002000 );
            SET_CAM_ACTIVE( l_U877[22], 0 );
            SET_CAM_PROPAGATE( l_U877[22], 0 );
            SET_CAM_POS( l_U877[24], -462.00180000, 153.47720000, 9.23137100 );
            SET_CAM_ROT( l_U877[24], 15.12209000, -0.00000000, 90.51498000 );
            SET_CAM_FOV( l_U877[24], 45.00000000 );
            SET_CAM_ACTIVE( l_U877[24], 0 );
            SET_CAM_PROPAGATE( l_U877[24], 0 );
            SET_CAM_POS( l_U877[25], -461.70960000, 153.47980000, 10.31259000 );
            SET_CAM_ROT( l_U877[25], 5.15262600, 0.00000000, 90.51498000 );
            SET_CAM_FOV( l_U877[25], 45.00000000 );
            SET_CAM_ACTIVE( l_U877[25], 0 );
            SET_CAM_PROPAGATE( l_U877[25], 0 );
            if (NOT (IS_CAR_DEAD( l_U958 )))
            {
                SET_CAR_COORDINATES( l_U958, -460.11970000, 155.45230000, 8.77200000 );
                SET_CAR_HEADING( l_U958, 176.71380000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U958 );
            }
        }
        else
        {
            SET_CAM_POS( l_U877[18], -456.43940000, 168.27840000, 11.58651000 );
            SET_CAM_ROT( l_U877[18], -1.99664500, 0.00000000, 163.73850000 );
            SET_CAM_FOV( l_U877[18], 23.40006000 );
            SET_CAM_ACTIVE( l_U877[18], 1 );
            SET_CAM_PROPAGATE( l_U877[18], 1 );
            SET_CAM_POS( l_U877[19], -454.93130000, 167.82260000, 11.58651000 );
            SET_CAM_ROT( l_U877[19], -1.99664400, 0.00000000, 159.95960000 );
            SET_CAM_FOV( l_U877[19], 23.40006000 );
            SET_CAM_ACTIVE( l_U877[19], 0 );
            SET_CAM_PROPAGATE( l_U877[19], 0 );
            SET_CAM_POS( l_U877[21], -457.73790000, 157.07430000, 9.91842000 );
            SET_CAM_ROT( l_U877[21], 5.71465100, 0.00000000, 121.51680000 );
            SET_CAM_FOV( l_U877[21], 38.10002000 );
            SET_CAM_ACTIVE( l_U877[21], 0 );
            SET_CAM_PROPAGATE( l_U877[21], 0 );
            SET_CAM_POS( l_U877[22], -457.11060000, 156.05130000, 9.91842000 );
            SET_CAM_ROT( l_U877[22], 5.71465100, -0.00000000, 108.91170000 );
            SET_CAM_FOV( l_U877[22], 38.10002000 );
            SET_CAM_ACTIVE( l_U877[22], 0 );
            SET_CAM_PROPAGATE( l_U877[22], 0 );
            SET_CAM_POS( l_U877[24], -462.00180000, 153.47720000, 8.91276800 );
            SET_CAM_ROT( l_U877[24], 15.12209000, -0.00000000, 90.51498000 );
            SET_CAM_FOV( l_U877[24], 45.00000000 );
            SET_CAM_ACTIVE( l_U877[24], 0 );
            SET_CAM_PROPAGATE( l_U877[24], 0 );
            SET_CAM_POS( l_U877[25], -461.70960000, 153.47980000, 9.99398600 );
            SET_CAM_ROT( l_U877[25], 5.15262600, 0.00000000, 90.51498000 );
            SET_CAM_FOV( l_U877[25], 45.00000000 );
            SET_CAM_ACTIVE( l_U877[25], 0 );
            SET_CAM_PROPAGATE( l_U877[25], 0 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U877[20], l_U877[18], l_U877[19], 10000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[20], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U877[20], 1 );
            SET_CAM_PROPAGATE( l_U877[20], 1 );
            SET_CAM_PROPAGATE( l_U877[18], 0 );
            if (NOT (IS_CAR_DEAD( l_U958 )))
            {
                SET_CAR_COORDINATES( l_U958, -460.57580000, 152.45880000, 8.74829900 );
                SET_CAR_HEADING( l_U958, 2.47560000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U958 );
            }
        }
        SETTIMERA( 0 );
        l_U1025 = 1;
        break;
        case 1:
        if (NOT l_U1030)
        {
            if (NOT l_U1027)
            {
                if (TIMERA() > l_U1031)
                {
                    OPEN_SEQUENCE_TASK( ref l_U953 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( -458.66920000, 153.31600000, 8.84780000 );
                    TASK_EXTEND_ROUTE( -460.24830000, 152.41020000, 8.76540000 );
                    TASK_EXTEND_ROUTE( -463.01510000, 152.77300000, 8.83980000 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                    CLOSE_SEQUENCE_TASK( l_U953 );
                    TASK_PERFORM_SEQUENCE( sub_917(), l_U953 );
                    CLEAR_SEQUENCE_TASK( l_U953 );
                    l_U1027 = 1;
                }
            }
            if (NOT l_U1026)
            {
                if (TIMERA() > (l_U1031 + 1500))
                {
                    if (NOT (IS_CHAR_INJURED( l_U870 )))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U870 );
                        OPEN_SEQUENCE_TASK( ref l_U953 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -465.36570000, 154.56280000, 8.86880000, 2, -1, 1.00000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -470.76670000, 155.21850000, 8.85890000, 2, -1, 1.00000000 );
                        CLOSE_SEQUENCE_TASK( l_U953 );
                        TASK_PERFORM_SEQUENCE( l_U870, l_U953 );
                        CLEAR_SEQUENCE_TASK( l_U953 );
                    }
                    l_U1026 = 1;
                }
            }
        }
        else if (NOT l_U1027)
        {
            if (TIMERA() > (l_U1031 + 1500))
            {
                OPEN_SEQUENCE_TASK( ref l_U953 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -461.57640000, 151.25150000, 8.70860000, 2, -1, 1.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -469.61560000, 153.44740000, 8.85890000, 2, -1, 1.00000000 );
                CLOSE_SEQUENCE_TASK( l_U953 );
                TASK_PERFORM_SEQUENCE( sub_917(), l_U953 );
                CLEAR_SEQUENCE_TASK( l_U953 );
                l_U1027 = 1;
            }
        }
        if (NOT l_U1026)
        {
            if (TIMERA() > l_U1031)
            {
                if (NOT (IS_CHAR_INJURED( l_U870 )))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U870 );
                    OPEN_SEQUENCE_TASK( ref l_U953 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -465.36570000, 154.56280000, 8.86880000, 2, -1, 1.00000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -470.76670000, 155.21850000, 8.85890000, 2, -1, 1.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U953 );
                    TASK_PERFORM_SEQUENCE( l_U870, l_U953 );
                    CLEAR_SEQUENCE_TASK( l_U953 );
                }
                l_U1026 = 1;
            }
        }
        if (TIMERA() > (l_U1031 + 3000))
        {
            SET_CAM_ACTIVE( l_U877[21], 1 );
            SET_CAM_ACTIVE( l_U877[22], 1 );
            SET_CAM_PROPAGATE( l_U877[21], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U877[23], l_U877[21], l_U877[22], 7000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[23], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U877[23], 1 );
            SET_CAM_PROPAGATE( l_U877[23], 1 );
            sub_19106( "E2T1_AMAIS", ref l_U967, 6, 1 );
            SET_CAM_ACTIVE( l_U877[20], 0 );
            SET_CAM_PROPAGATE( l_U877[20], 0 );
            sub_42258();
            SWITCH_ROADS_OFF( -458.80270000, 128.37270000, -100.00000000, -451.46080000, 185.23920000, 100.00000000 );
            CLEAR_AREA( -465.14270000, 152.77380000, 9.87380000, 3.00000000, 1 );
            CLEAR_AREA( -455.78880000, 153.87300000, 9.91250100, 3.00000000, 1 );
            SET_CURRENT_CHAR_WEAPON( sub_917(), 0, 0 );
            SETTIMERA( 0 );
            l_U1025 = 2;
        }
        break;
        case 2:
        SET_CURRENT_CHAR_WEAPON( sub_917(), 0, 0 );
        if (NOT (IS_CHAR_INJURED( l_U870 )))
        {
            if (((l_U1030) AND (LOCATE_CHAR_ON_FOOT_3D( l_U870, -461.76560000, 151.37690000, 9.86360000, 1.00000000, 9.00000000, 2.00000000, 0 ))) || (((NOT l_U1030) AND (LOCATE_CHAR_ON_FOOT_3D( sub_917(), -461.76560000, 151.37690000, 9.86360000, 1.00000000, 9.00000000, 2.00000000, 0 ))) || (TIMERA() > 5000)))
            {
                if (NOT (sub_18827( l_U967 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U870 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U992 )))
                        {
                            sub_4432( 5, l_U992, "DESSIE", 0 );
                            TASK_LOOK_AT_CHAR( l_U992, l_U870, -2, 0 );
                        }
                    }
                    SET_CAM_ACTIVE( l_U877[24], 1 );
                    SET_CAM_ACTIVE( l_U877[25], 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U877[26], l_U877[24], l_U877[25], 10000, 0 );
                    SET_CAM_INTERP_STYLE_DETAILED( l_U877[26], 0, 0, 1, 1 );
                    SET_CAM_ACTIVE( l_U877[26], 1 );
                    SET_CAM_PROPAGATE( l_U877[26], 1 );
                    if (NOT l_U1030)
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
                        SET_CHAR_COORDINATES( sub_917(), -461.09400000, 151.80800000, 8.72130000 );
                        SET_CHAR_HEADING( sub_917(), 72.16200000 );
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
                        SET_CHAR_COORDINATES( sub_917(), -462.04060000, 151.42020000, 8.85860000 );
                        SET_CHAR_HEADING( sub_917(), 68.64340000 );
                    }
                    OPEN_SEQUENCE_TASK( ref l_U953 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -469.49160000, 155.17590000, 8.85890000, 2, -1, 1.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U953 );
                    TASK_PERFORM_SEQUENCE( sub_917(), l_U953 );
                    CLEAR_SEQUENCE_TASK( l_U953 );
                    if (l_U1030)
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U870 );
                        SET_CHAR_COORDINATES( l_U870, -462.74640000, 154.64750000, 8.86880000 );
                        SET_CHAR_HEADING( l_U870, 143.54580000 );
                        OPEN_SEQUENCE_TASK( ref l_U953 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -470.76670000, 155.21850000, 8.85890000, 2, -1, 1.00000000 );
                        CLOSE_SEQUENCE_TASK( l_U953 );
                        TASK_PERFORM_SEQUENCE( l_U870, l_U953 );
                        CLEAR_SEQUENCE_TASK( l_U953 );
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U870 );
                        SET_CHAR_COORDINATES( l_U870, -463.31200000, 154.90280000, 8.86880000 );
                        SET_CHAR_HEADING( l_U870, 123.54580000 );
                        OPEN_SEQUENCE_TASK( ref l_U953 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -465.36570000, 154.56280000, 8.86880000, 2, -1, 1.00000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -470.76670000, 155.21850000, 8.85890000, 2, -1, 1.00000000 );
                        CLOSE_SEQUENCE_TASK( l_U953 );
                        TASK_PERFORM_SEQUENCE( l_U870, l_U953 );
                        CLEAR_SEQUENCE_TASK( l_U953 );
                    }
                    SET_CAM_ACTIVE( l_U877[23], 0 );
                    SET_CAM_PROPAGATE( l_U877[23], 0 );
                    l_U1025 = 3;
                }
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U870 )))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( l_U870, -465.90910000, 153.62390000, 9.87380000, 3.00000000, 3.00000000, 2.00000000, 0 ))
            {
                sub_19106( "E2T1_DESS", ref l_U967, 6, 1 );
                l_U1025 = 4;
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U870 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U870, -467.49330000, 153.34760000, 9.86380000, 1.70000000, 1.00000000, 2.00000000, 0 ))
            {
                l_U1025 = 5;
            }
        }
        break;
        case 5:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        if ((IS_SCREEN_FADED_OUT()) || (IS_KEYBOARD_KEY_JUST_PRESSED( 2 )))
        {
            sub_42258();
            sub_42389( ref l_U877[18], ref l_U877[19], ref l_U877[20] );
            sub_42389( ref l_U877[21], ref l_U877[22], ref l_U877[23] );
            sub_42389( ref l_U877[24], ref l_U877[25], ref l_U877[26] );
            SWITCH_ROADS_BACK_TO_ORIGINAL( -458.80270000, 128.37270000, -100.00000000, -451.46080000, 185.23920000, 100.00000000 );
            g_U30118 = 0;
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_17969( 5, 1 );
            l_U1025 = 6;
        }
        break;
        case 6:
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 2 ))
        {
            SET_PLAYER_CONTROL( sub_4777(), 1 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        }
        break;
    }
    return;
}

void sub_45684(unknown uParam0)
{
    REMOVE_ANIMS( "missnightclub" );
    REMOVE_ANIMS( "AMB@SMOKING_F" );
    REMOVE_ANIMS( "AMB@SMOKING" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2037134882 );
    switch (uParam0)
    {
        case 0:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 982077731 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1758965191 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -844218756 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1684055465 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubBM2" );
        REMOVE_ANIMS( "missamb_bama" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "BAHAMA MAMAS" );
        PRINTNL();
        break;
        case 1:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1756785265 );
        sub_46034( g_U30218 );
        sub_46034( g_U30219 );
        sub_46034( g_U30220 );
        sub_46034( g_U30221 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1429700748 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1446884113 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubM92" );
        REMOVE_ANIMS( "missamb_m9" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "MAISONETTE_9" );
        PRINTNL();
        break;
        case 2:
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1696530209 );
        sub_46034( g_U30222 );
        sub_46034( g_U30223 );
        sub_46034( g_U30224 );
        sub_46034( g_U30225 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1662473323 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubHC2" );
        REMOVE_ANIMS( "missamb_herc_female" );
        REMOVE_ANIMS( "missamb_herc_male" );
        PRINTSTRING( "UNLOAD_ASSETS_FOR_CLUB - " );
        PRINTSTRING( "HERCULES" );
        PRINTNL();
        break;
    }
    if (NOT g_U30124[uParam0])
    {
        g_U30124[uParam0] = 1;
    }
    return;
}

void sub_46034(int iParam0)
{
    if (NOT (iParam0 == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( iParam0 );
    }
    return;
}

void sub_46506()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U1012[0] );
    SET_CAM_POS( l_U1012[0], -456.98670000, 133.06920000, 11.47870000 );
    SET_CAM_ROT( l_U1012[0], -1.87010000, 0.00000000, 15.18080000 );
    SET_CAM_FOV( l_U1012[0], 23.40010000 );
    SET_CAM_ACTIVE( l_U1012[0], 1 );
    CREATE_CAM( 14, ref l_U1012[1] );
    SET_CAM_POS( l_U1012[1], -455.50610000, 135.33110000, 11.71120000 );
    SET_CAM_ROT( l_U1012[1], -3.01670000, 0.00000000, 22.65060000 );
    SET_CAM_FOV( l_U1012[1], 23.40010000 );
    SET_CAM_ACTIVE( l_U1012[1], 1 );
    CREATE_CAM( 14, ref l_U1012[2] );
    SET_CAM_POS( l_U1012[2], -454.02550000, 137.59310000, 11.94370000 );
    SET_CAM_ROT( l_U1012[2], -4.16330000, 0.00000000, 30.12040000 );
    SET_CAM_FOV( l_U1012[2], 23.40010000 );
    SET_CAM_ACTIVE( l_U1012[2], 1 );
    CREATE_CAM( 14, ref l_U1012[3] );
    SET_CAM_POS( l_U1012[3], -452.54480000, 139.85510000, 12.17610000 );
    SET_CAM_ROT( l_U1012[3], -5.31000000, 0.00000000, 37.59020000 );
    SET_CAM_FOV( l_U1012[3], 23.40010000 );
    SET_CAM_ACTIVE( l_U1012[3], 1 );
    CREATE_CAM( 25, ref l_U1011 );
    SET_CAM_SPLINE_DURATION( l_U1011, 13000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U1011, 0 );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[0] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[1] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[2] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[3] );
    SET_CAM_ACTIVE( l_U1011, 1 );
    SET_CAM_PROPAGATE( l_U1011, 1 );
    return;
}

void sub_51240()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT l_U1035)
    {
        if (NOT sub_34647())
        {
            l_U1035 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U1036) AND (l_U1033 > 0)))
    {
        if (sub_34647())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_32671( 0 );
            CLEAR_HELP();
            g_U43708 = 1;
            l_U1036 = 1;
            l_U1033 = 8;
        }
    }
    switch (l_U1033)
    {
        case 0:
        sub_34966( 1, 1, 1 );
        DISPLAY_RADAR( 0 );
        g_U30226[1] = nil;
        sub_11820( 1, 0 );
        if (DOES_CHAR_EXIST( l_U992 ))
        {
            DELETE_CHAR( ref l_U992 );
            l_U991 = 0;
            l_U993 = 0;
            l_U981 = 0;
        }
        if (l_U1004)
        {
            ;
        }
        REQUEST_MODEL( 661511415 );
        while ((NOT (HAS_MODEL_LOADED( 661511415 ))) || (NOT (sub_12796( 1, 0 ))))
        {
            WAIT( 0 );
            sub_17450( "In M9 cut, waiting for Maisonette 9 to load" );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
        g_U2792 = 1;
        GET_INTERIOR_AT_COORDS( -468.50000000, 154.60000000, 8.85890000, ref uVar8 );
        LOAD_SCENE_FOR_ROOM_BY_KEY( uVar8, GET_HASH_KEY( "E2_MaisonRoomfront" ) );
        if (NOT (IS_CHAR_DEAD( l_U870 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U870 );
            SET_CHAR_COORDINATES( l_U870, -469.14620000, 153.91280000, 9.02980600 );
            SET_CHAR_HEADING( l_U870, 74.65090000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U870, "E2_MaisonRoomfront" );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U870, 0.74300000, 0.44900000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        }
        SET_CHAR_COORDINATES( sub_917(), -468.50000000, 154.60000000, 8.85890000 );
        SET_CHAR_HEADING( sub_917(), 74.65090000 );
        SET_ROOM_FOR_CHAR_BY_NAME( sub_917(), "E2_MaisonRoomfront" );
        SET_USE_HIGHDOF( 1 );
        CLEAR_AREA( -479.39940000, 155.04880000, 6.55090000, 100.00000000, 1 );
        sub_15063( 0, 0 );
        l_U983 = 0;
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, 1, 0.00000000 );
        CREATE_CAM( 14, ref l_U877[27] );
        CREATE_CAM( 14, ref l_U877[28] );
        CREATE_CAM( 3, ref l_U877[29] );
        CREATE_CAM( 14, ref l_U877[30] );
        CREATE_CAM( 14, ref l_U877[31] );
        CREATE_CAM( 3, ref l_U877[32] );
        CREATE_CAM( 14, ref l_U877[33] );
        CREATE_CAM( 14, ref l_U877[34] );
        CREATE_CAM( 3, ref l_U877[35] );
        CREATE_CAM( 14, ref l_U877[36] );
        CREATE_CAM( 14, ref l_U877[37] );
        CREATE_CAM( 3, ref l_U877[38] );
        CREATE_CAM( 14, ref l_U877[42] );
        CREATE_CAM( 14, ref l_U877[43] );
        CREATE_CAM( 3, ref l_U877[44] );
        CREATE_CAM( 14, ref l_U877[39] );
        CREATE_CAM( 14, ref l_U877[40] );
        CREATE_CAM( 3, ref l_U877[41] );
        SET_CAM_POS( l_U877[27], -468.77740000, 156.11380000, 10.27566000 );
        SET_CAM_ROT( l_U877[27], -3.34775900, 0.00000000, 166.50890000 );
        SET_CAM_FOV( l_U877[27], 45.00000000 );
        SET_CAM_ACTIVE( l_U877[27], 1 );
        SET_CAM_PROPAGATE( l_U877[27], 1 );
        SET_CAM_POS( l_U877[28], -468.77740000, 156.11380000, 10.27566000 );
        SET_CAM_ROT( l_U877[28], -3.34775900, -0.00000000, 129.40240000 );
        SET_CAM_FOV( l_U877[28], 45.00000000 );
        SET_CAM_ACTIVE( l_U877[28], 1 );
        SET_CAM_PROPAGATE( l_U877[28], 0 );
        GET_DISTANCE_BETWEEN_COORDS_2D( -487.49000000, 151.61790000, -486.86050000, 151.88600000, ref uVar7 );
        SET_CAM_POS( l_U877[30], -487.49000000, 151.61790000, 7.63252400 );
        SET_CAM_ROT( l_U877[30], 1.36547400, -0.00000000, -66.94012000 );
        SET_CAM_FOV( l_U877[30], 34.20003000 );
        SET_CAM_NEAR_DOF( l_U877[30], 2.00000000 );
        SET_CAM_ACTIVE( l_U877[30], 0 );
        SET_CAM_PROPAGATE( l_U877[30], 0 );
        SET_CAM_POS( l_U877[31], -486.86050000, 151.88600000, 7.64883400 );
        SET_CAM_ROT( l_U877[31], 1.36547400, -0.00000000, -66.94012000 );
        SET_CAM_FOV( l_U877[31], 34.20003000 );
        SET_CAM_NEAR_DOF( l_U877[31], 0.00000000 );
        SET_CAM_ACTIVE( l_U877[31], 0 );
        SET_CAM_PROPAGATE( l_U877[31], 0 );
        SET_CAM_POS( l_U877[33], -488.13460000, 157.61870000, 12.34186000 );
        SET_CAM_ROT( l_U877[33], -28.00963000, -0.00000000, -124.71300000 );
        SET_CAM_FOV( l_U877[33], 40.20001000 );
        SET_CAM_ACTIVE( l_U877[33], 0 );
        SET_CAM_PROPAGATE( l_U877[33], 0 );
        SET_CAM_POS( l_U877[34], -488.13460000, 157.61870000, 12.34186000 );
        SET_CAM_ROT( l_U877[34], -28.00963000, -0.00000000, -150.53240000 );
        SET_CAM_FOV( l_U877[34], 40.20001000 );
        SET_CAM_ACTIVE( l_U877[34], 0 );
        SET_CAM_PROPAGATE( l_U877[34], 0 );
        SET_CAM_POS( l_U877[36], -484.09670000, 148.42950000, 7.93662800 );
        SET_CAM_ROT( l_U877[36], -2.50343100, -0.00000000, 109.94300000 );
        SET_CAM_FOV( l_U877[36], 36.00002000 );
        SET_CAM_FAR_DOF( l_U877[36], 7.00000000 );
        SET_CAM_ACTIVE( l_U877[36], 0 );
        SET_CAM_PROPAGATE( l_U877[36], 0 );
        SET_CAM_POS( l_U877[37], -483.67550000, 147.06230000, 7.93662800 );
        SET_CAM_ROT( l_U877[37], -2.50343100, 0.00000000, 79.33876000 );
        SET_CAM_FOV( l_U877[37], 36.00002000 );
        SET_CAM_FAR_DOF( l_U877[37], 7.00000000 );
        SET_CAM_ACTIVE( l_U877[37], 0 );
        SET_CAM_PROPAGATE( l_U877[37], 0 );
        SET_CAM_POS( l_U877[42], -484.28250000, 158.48590000, 8.13551900 );
        SET_CAM_ROT( l_U877[42], -3.24964400, -0.00000000, -104.66810000 );
        SET_CAM_FOV( l_U877[42], 25.80005000 );
        SET_CAM_ACTIVE( l_U877[42], 0 );
        SET_CAM_PROPAGATE( l_U877[42], 0 );
        SET_CAM_POS( l_U877[43], -483.65230000, 158.32100000, 8.09853100 );
        SET_CAM_ROT( l_U877[43], -3.24964400, -0.00000000, -104.66810000 );
        SET_CAM_FOV( l_U877[43], 25.80005000 );
        SET_CAM_ACTIVE( l_U877[43], 0 );
        SET_CAM_PROPAGATE( l_U877[43], 0 );
        SET_CAM_POS( l_U877[39], -480.21400000, 160.87520000, 11.30663000 );
        SET_CAM_ROT( l_U877[39], 7.71523000, 0.00000000, 90.53087000 );
        SET_CAM_FOV( l_U877[39], 33.30003000 );
        SET_CAM_ACTIVE( l_U877[39], 0 );
        SET_CAM_PROPAGATE( l_U877[39], 0 );
        SET_CAM_POS( l_U877[40], -482.95760000, 160.84980000, 11.75032000 );
        SET_CAM_ROT( l_U877[40], 9.94960300, 0.00000000, 90.53087000 );
        SET_CAM_FOV( l_U877[40], 33.30003000 );
        SET_CAM_ACTIVE( l_U877[40], 0 );
        SET_CAM_PROPAGATE( l_U877[40], 0 );
        sub_53938();
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        WAIT( 0 );
        GET_GAME_VIEWPORT_ID( ref l_U959 );
        SET_ROOM_FOR_CHAR_BY_NAME( sub_917(), "E2_MaisonRoomfront" );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U959, "E2_MaisonRoomfront" );
        GET_INTERIOR_AT_COORDS( -468.64670000, 155.45120000, 9.86390000, ref uVar8 );
        LOAD_SCENE_FOR_ROOM_BY_KEY( uVar8, GET_HASH_KEY( "E2_MaisonRoomfront" ) );
        WAIT( 1000 );
        SET_CURRENT_CHAR_WEAPON( sub_917(), 0, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U877[29], l_U877[27], l_U877[28], 5000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U877[29], 0, 0, 1, 1 );
        SET_CAM_ACTIVE( l_U877[29], 1 );
        SET_CAM_PROPAGATE( l_U877[29], 1 );
        SET_CAM_PROPAGATE( l_U877[27], 0 );
        while (NOT (HAVE_ANIMS_LOADED( "missnightclub" )))
        {
            WAIT( 0 );
            PRINTSTRING( "Waiting for night club anims" );
        }
        DO_SCREEN_FADE_IN( 1000 );
        SETTIMERA( 0 );
        l_U1033 = 1;
        break;
        case 1:
        if (NOT l_U1038)
        {
            if (NOT (IS_CHAR_INJURED( l_U870 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "Scene_02_tony", "misstony01", 8.00000000, 0, 11 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( l_U870, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "Scene_02_Luis", "misstony01", 8.00000000, 0, 3 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -475.44640000, 154.75380000, 7.79820000, 2, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( sub_917(), uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U1038 = 1;
            }
        }
        else if (NOT l_U1037)
        {
            if (NOT (IS_CHAR_INJURED( l_U870 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U870, "misstony01", "Scene_02_tony" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U870, "misstony01", "Scene_02_tony", ref fVar6 );
                    if (fVar6 > 0.10000000)
                    {
                        sub_19106( "E2T1_TONEG", ref l_U967, 6, 1 );
                        l_U1037 = 1;
                    }
                }
            }
        }
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_917(), -474.34720000, 155.24610000, 9.50120000, 1.00000000, 1.00000000, 2.00000000, 0 )) || (TIMERA() > 3950))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_917(), -474.34720000, 155.24610000, 9.50120000, 1.00000000, 1.00000000, 2.00000000, 0 ))
            {
                ;
            }
            else if (TIMERA() > 3950)
            {
                ;
            }
            SET_CAM_INTERP_STYLE_CORE( l_U877[32], l_U877[30], l_U877[31], 7000, 0 );
            SET_CAM_ACTIVE( l_U877[32], 1 );
            SET_CAM_PROPAGATE( l_U877[32], 1 );
            SET_CAM_ACTIVE( l_U877[32], 1 );
            SET_CAM_PROPAGATE( l_U877[29], 0 );
            WAIT( 0 );
            GET_GAME_VIEWPORT_ID( ref l_U959 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U959, "E2_MaisonRoommain" );
            sub_55613( 1 );
            if (NOT l_U1034)
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
                SET_CHAR_COORDINATES( sub_917(), -473.27190000, 154.96280000, 8.85750000 );
                SET_CHAR_HEADING( sub_917(), 90.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( sub_917(), "E2_MaisonRoomsteps1" );
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -480.71670000, 155.15040000, 6.54940000, 2, -2, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( sub_917(), uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
                l_U1034 = 1;
                SETTIMERA( 0 );
                l_U1033 = 2;
            }
            if (DOES_CHAR_EXIST( l_U870 ))
            {
                ;
            }
        }
        break;
        case 2:
        if (TIMERA() > 7000)
        {
            sub_55613( 0 );
            SET_CAM_ACTIVE( l_U877[33], 1 );
            SET_CAM_ACTIVE( l_U877[34], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U877[35], l_U877[33], l_U877[34], 8000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[35], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U877[35], 1 );
            SET_CAM_PROPAGATE( l_U877[35], 1 );
            PRINT_HELP( "H_INT" );
            SET_CAM_ACTIVE( l_U877[32], 0 );
            SET_CAM_PROPAGATE( l_U877[32], 0 );
            SET_CAM_ACTIVE( l_U877[30], 0 );
            SET_CAM_ACTIVE( l_U877[31], 0 );
            SETTIMERA( 0 );
            l_U1033 = 3;
        }
        break;
        case 3:
        if (TIMERA() > 7500)
        {
            CLEAR_HELP();
            PRINT_HELP( "H_DANC" );
            SET_CAM_ACTIVE( l_U877[36], 1 );
            SET_CAM_PROPAGATE( l_U877[37], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U877[38], l_U877[36], l_U877[37], 7000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[38], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U877[38], 1 );
            SET_CAM_PROPAGATE( l_U877[38], 1 );
            SET_CAM_ACTIVE( l_U877[35], 0 );
            SET_CAM_PROPAGATE( l_U877[35], 0 );
            SET_CAM_ACTIVE( l_U877[33], 0 );
            SET_CAM_ACTIVE( l_U877[34], 0 );
            sub_42258();
            SETTIMERA( 0 );
            l_U1033 = 4;
        }
        break;
        case 4:
        if (TIMERA() > 7000)
        {
            sub_55613( 1 );
            CLEAR_HELP();
            PRINT_HELP( "H_SHOT" );
            SET_CAM_ACTIVE( l_U877[42], 1 );
            SET_CAM_PROPAGATE( l_U877[43], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U877[44], l_U877[42], l_U877[43], 13000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[44], 3, 3, 1, 1 );
            SET_CAM_ACTIVE( l_U877[44], 1 );
            SET_CAM_PROPAGATE( l_U877[44], 1 );
            SET_CAM_ACTIVE( l_U877[38], 0 );
            SET_CAM_PROPAGATE( l_U877[38], 0 );
            SET_CAM_ACTIVE( l_U877[36], 0 );
            SET_CAM_ACTIVE( l_U877[37], 0 );
            WAIT( 0 );
            GET_GAME_VIEWPORT_ID( ref l_U959 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U959, "E2_maisonbar" );
            SETTIMERA( 0 );
            l_U1033 = 6;
        }
        else if (NOT l_U1039)
        {
            if (TIMERA() > 2000)
            {
                l_U1040 = 1;
                g_U43706 = 1;
                l_U1039 = 1;
            }
        }
        break;
        case 6:
        if ((TIMERA() > 10000) || (g_U43707))
        {
            g_U43706 = 0;
            g_U43703 = 1;
            SETTIMERA( 0 );
            l_U1033 = 5;
        }
        break;
        case 5:
        if (TIMERA() > 1000)
        {
            CLEAR_HELP();
            PRINT_HELP( "H_DNK" );
            SET_CAM_ACTIVE( l_U877[39], 1 );
            SET_CAM_PROPAGATE( l_U877[40], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U877[41], l_U877[39], l_U877[40], 13000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[41], 3, 3, 1, 1 );
            SET_CAM_ACTIVE( l_U877[41], 1 );
            SET_CAM_PROPAGATE( l_U877[41], 1 );
            SET_CAM_ACTIVE( l_U877[44], 0 );
            SET_CAM_PROPAGATE( l_U877[44], 0 );
            SET_CAM_ACTIVE( l_U877[42], 0 );
            SET_CAM_ACTIVE( l_U877[43], 0 );
            WAIT( 0 );
            GET_GAME_VIEWPORT_ID( ref l_U959 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U959, "E2_maisonRoomTop" );
            SETTIMERA( 0 );
            l_U1033 = 7;
        }
        break;
        case 7:
        if (TIMERA() > 4250)
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_HELP();
            g_U43703 = 0;
            SETTIMERA( 0 );
            l_U1033 = 8;
        }
        break;
        case 8:
        if ((l_U1036) || (TIMERA() > 1500))
        {
            if (g_U43706)
            {
                g_U43706 = 0;
                g_U43703 = 1;
                g_U43703 = 0;
            }
            if (g_U43703)
            {
                g_U43703 = 0;
            }
            if (g_U43707)
            {
                g_U43707 = 0;
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( 661511415 );
            sub_42389( ref l_U877[27], ref l_U877[28], ref l_U877[29] );
            sub_42389( ref l_U877[30], ref l_U877[31], ref l_U877[32] );
            sub_42389( ref l_U877[33], ref l_U877[34], ref l_U877[35] );
            sub_42389( ref l_U877[39], ref l_U877[40], ref l_U877[41] );
            sub_42389( ref l_U877[42], ref l_U877[43], ref l_U877[44] );
            sub_42389( ref l_U877[36], ref l_U877[37], ref l_U877[38] );
            SET_USE_HIGHDOF( 0 );
            if (DOES_CHAR_EXIST( l_U870 ))
            {
                DELETE_CHAR( ref l_U870 );
                sub_57570( 0 );
            }
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, 0, 0.00000000 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
            SET_CHAR_COORDINATES( sub_917(), -478.27640000, 155.09390000, 6.55210000 );
            SET_CHAR_HEADING( sub_917(), 90.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_917(), "E2_MaisonRoommain" );
            GET_INTERIOR_AT_COORDS( -477.41040000, 155.09140000, 7.55730000, ref uVar8 );
            LOAD_SCENE_FOR_ROOM_BY_KEY( uVar8, GET_HASH_KEY( "E2_MaisonRoommain" ) );
            GET_GAME_VIEWPORT_ID( ref l_U959 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U959, "E2_MaisonRoomsteps1" );
            SWITCH_PED_PATHS_ON( -467.02610000, 138.35160000, -100.00000000, -462.60400000, 164.17870000, 100.00000000 );
            sub_55613( 0 );
            WAIT( 0 );
            sub_42258();
            sub_43402();
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_GAME_CAM_PITCH( 0.00000000 );
            SET_CAM_BEHIND_PED( sub_917() );
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            sub_17969( 6, 1 );
        }
        break;
    }
    return;
}

void sub_53938()
{
    CREATE_CAM( 14, ref l_U1012[0] );
    SET_CAM_POS( l_U1012[0], -481.29180000, 153.67770000, 7.79410000 );
    SET_CAM_ROT( l_U1012[0], -3.22740000, 0.00000000, -54.17850000 );
    SET_CAM_FOV( l_U1012[0], 45.00000000 );
    SET_CAM_ACTIVE( l_U1012[0], 1 );
    CREATE_CAM( 14, ref l_U1012[1] );
    SET_CAM_POS( l_U1012[1], -483.44320000, 155.27670000, 9.49160000 );
    SET_CAM_ROT( l_U1012[1], -12.12850000, 0.00000000, -84.63870000 );
    SET_CAM_FOV( l_U1012[1], 45.00000000 );
    SET_CAM_ACTIVE( l_U1012[1], 1 );
    CREATE_CAM( 14, ref l_U1012[2] );
    SET_CAM_POS( l_U1012[2], -485.59460000, 156.87560000, 11.18910000 );
    SET_CAM_ROT( l_U1012[2], -21.02950000, 0.00000000, -115.09900000 );
    SET_CAM_FOV( l_U1012[2], 45.00000000 );
    SET_CAM_ACTIVE( l_U1012[2], 1 );
    CREATE_CAM( 14, ref l_U1012[3] );
    SET_CAM_POS( l_U1012[3], -487.74600000, 158.47450000, 12.88660000 );
    SET_CAM_ROT( l_U1012[3], -29.93060000, 0.00000000, -145.55920000 );
    SET_CAM_FOV( l_U1012[3], 45.00000000 );
    SET_CAM_ACTIVE( l_U1012[3], 1 );
    CREATE_CAM( 25, ref l_U1011 );
    SET_CAM_SPLINE_DURATION( l_U1011, 7000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U1011, 1 );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[0] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[1] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[2] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[3] );
    return;
}

void sub_55613(boolean bParam0)
{
    if (bParam0)
    {
        g_U30166 = 1;
        g_U30234 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30166 = 0;
        g_U30234 = nil;
    }
    return;
}

void sub_57570(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_9812( uParam0 ) );
    return;
}

void sub_58020()
{
    switch (l_U220)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_4777(), 1 );
        SETTIMERA( 0 );
        sub_22088( "T1_M16", 0 );
        if (NOT l_U1030)
        {
            if (NOT (IS_CAR_DEAD( l_U958 )))
            {
                SET_CAR_COORDINATES( l_U958, -460.73270000, 154.97130000, 8.74010000 );
                SET_CAR_HEADING( l_U958, 180.10780000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U958 );
            }
        }
        l_U220++;
        break;
        case 1:
        if (TIMERA() > l_U1051)
        {
            if (sub_58231())
            {
                if (l_U1052 != 0)
                {
                    if (sub_32842( l_U1052, 5000 ))
                    {
                        if (sub_58231())
                        {
                            if (sub_58503( 0, "E2T1_CALL1", "E2T1AUD", 10000, 0 ))
                            {
                                l_U220++;
                                l_U1053 = 1;
                                GET_GAME_TIMER( ref l_U1048 );
                            }
                        }
                        else
                        {
                            l_U1052 = 0;
                        }
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U1052 );
                }
            }
            else
            {
                l_U1052 = 0;
            }
        }
        if ((sub_28211( 1, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_917(), -466.20900000, 153.40200000, 10.41900000, 1.60000000, 1.60000000, 1.60000000, 0 )))
        {
            sub_17969( 7, 1 );
        }
        break;
        case 2:
        switch (sub_61769())
        {
            case 2:
            case 1:
            l_U220 = 1;
            break;
        }
        if (l_U220 == 2)
        {
            if (sub_61877( 0 ))
            {
                CLEAR_HELP();
                ADD_BLIP_FOR_COORD( -469.32400000, 153.27400000, 10.41900000, ref l_U986 );
                l_U220++;
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_917(), -466.20900000, 153.40200000, 10.41900000, 1.60000000, 1.60000000, 1.60000000, 0 ))
        {
            l_U1053 = 0;
            CLEAR_HELP();
            sub_17969( 7, 1 );
        }
        break;
        case 3:
        if (NOT l_U1041)
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_HELP( "GETPHONE" );
                l_U1041 = 1;
            }
        }
        else if (NOT l_U1042)
        {
            if (sub_62327())
            {
                PRINT_HELP( "MENUPHONE" );
                l_U1042 = 1;
                GET_GAME_TIMER( ref l_U1046 );
            }
        }
        else if (NOT l_U1043)
        {
            if (sub_32842( l_U1046, 1000 ))
            {
                if ((sub_62456() == 1011) || (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MENUPHONE" ))))
                {
                    PRINT_HELP( "NAVPHONE" );
                    l_U1043 = 1;
                    GET_GAME_TIMER( ref l_U1046 );
                }
            }
        }
        else if (NOT l_U1044)
        {
            if (sub_32842( l_U1046, 1000 ))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "NAVPHONE" )))
                {
                    PRINT_HELP( "SELECTPHONE" );
                    l_U1044 = 1;
                    GET_GAME_TIMER( ref l_U1046 );
                }
            }
        }
        else if (NOT l_U1045)
        {
            if (sub_32842( l_U1046, 1000 ))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SELECTPHONE" )))
                {
                    PRINT_HELP( "EXITPHONE" );
                    l_U1045 = 1;
                    GET_GAME_TIMER( ref l_U1046 );
                }
            }
        }
        else if (sub_32842( l_U1046, 1000 ))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "EXITPHONE" )))
            {
                l_U1049 = 1;
                if (DOES_BLIP_EXIST( l_U986 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U986 );
                }
            }
        };;;;;;
        if (l_U1049)
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_917(), -466.20900000, 153.40200000, 10.41900000, 1.60000000, 1.60000000, 1.60000000, 0 )) || (sub_62853( -469.32400000, 153.27400000, 10.41900000, 1.60000000, 1.60000000, 1.60000000, 1, "T1_M05", 0, 0 )))
            {
                sub_17969( 7, 1 );
                l_U1053 = 0;
                CLEAR_HELP();
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_917(), -466.20900000, 153.40200000, 10.41900000, 1.60000000, 1.60000000, 1.60000000, 1 ))
        {
            l_U1053 = 0;
            CLEAR_HELP();
            sub_17969( 7, 1 );
        }
        break;
    }
    if ((g_U30093[2]) || (g_U30093[1]))
    {
        sub_44460( "ALSEC" );
        sub_44549();
    }
    if (l_U1053)
    {
        sub_63424();
    }
    return;
}

int sub_58231()
{
    if (sub_28211( 1, 1 ))
    {
        if (NOT (IS_PED_RAGDOLL( sub_917() )))
        {
            if (sub_58270())
            {
                if (IS_PLAYER_CONTROL_ON( sub_4777() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_58270()
{
    if (g_U43705)
    {
        if (l_U1032 == 0)
        {
            GET_GAME_TIMER( ref l_U1032 );
        }
        else if (sub_32842( l_U1032, 2000 ))
        {
            if ((NOT g_U9199) AND (NOT g_U9200))
            {
                return 1;
            }
        }
    }
    else if ((NOT g_U9199) AND (NOT g_U9200))
    {
        return 1;
    }
    return 0;
}

void sub_58503(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
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

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_58563( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_58563(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U95._fU540)
    {
        return 0;
    }
    sub_18939( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 >= 6)
        {
            sub_18939( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4777() )))
    {
        sub_18939( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_917() ))) AND (IS_CHAR_IN_ANY_CAR( sub_917() )))
    {
        sub_18939( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_18939( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_59078()))
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
                sub_18939( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_59078()))
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
    sub_60450( uParam0, ref g_U95._fU176 );
    sub_61110( ref g_U95._fU160 );
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
        sub_4552( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_59078()
{
    if ((g_U95._fU52) || (g_U95._fU48))
    {
        return 0;
    }
    if (g_U95._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_59135())
    {
        return 0;
    }
    if (g_U560 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_59135()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_4777() )))
    {
        sub_18939( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_18939( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U95._fU376)
    {
        sub_18939( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U95._fU104) || (g_U95._fU100))
    {
        sub_18939( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_4777() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_917() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_917(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_18939( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_917() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_18939( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_18939( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_4777() )))
    {
        sub_18939( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_60450(unknown uParam0, unknown uParam1)
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

void sub_61110(unknown uParam0)
{
    StrCopy( (uParam0^), "LUIS", 16 );
    return;
}

int sub_61769()
{
    if (g_U95._fU60 != -1)
    {
        return g_U16014[g_U95._fU60]._fU212._fU24;
    }
    return 6;
}

int sub_61877(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_917(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_18939( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

int sub_62327()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_62456()
{
    return g_U95._fU0;
}

int sub_62853(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    sub_20582();
    sub_21462();
    if (IS_SCREEN_FADED_IN())
    {
        if ((IS_WANTED_LEVEL_GREATER( sub_4777(), 0 )) AND (uParam8))
        {
            if (DOES_BLIP_EXIST( l_U201 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
                sub_22208( uParam7 );
            }
            if ((NOT l_U170) AND (NOT (sub_26362( 0 ))))
            {
                sub_22088( uParam9, 0 );
                l_U214 = uParam9;
                l_U170 = 1;
            }
        }
        else if (l_U170)
        {
            sub_22208( uParam9 );
            l_U170 = 0;
        }
        if (NOT (DOES_BLIP_EXIST( l_U201 )))
        {
            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U201 );
            sub_24195( l_U201 );
        }
        if (NOT (sub_26362( 0 )))
        {
            if (NOT l_U172)
            {
                sub_22088( uParam7, 0 );
                l_U172 = 1;
            }
        }
        if ((sub_28121()) AND (LOCATE_CHAR_ON_FOOT_3D( sub_917(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 )))
        {
            sub_22208( uParam7 );
            sub_22208( uParam9 );
            sub_17998();
            return 1;
        }
        sub_63169( uParam0, uParam1, uParam2, 1, 0 );
    }
    sub_32279( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_63169(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown[1] uVar7;

    array(ref uVar7, 1);
    sub_30091( uParam0, uParam1, uParam2, uParam3, uParam4 );
    return;
}

void sub_63424()
{
    switch (l_U1047)
    {
        case 0:
        if ((sub_32842( l_U1048, 30000 )) || (sub_63461()))
        {
            PRINT_HELP( "PANSWER" );
            GET_GAME_TIMER( ref l_U1048 );
            l_U1047++;
        }
        break;
        case 1:
        if (sub_32842( l_U1048, 1000 ))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PANSWER" )))
            {
                if ((sub_61769() == 4) || (sub_61769() == 3))
                {
                    PRINT_HELP( "PUTAWAY" );
                    l_U1047++;
                }
            }
        }
        break;
    }
    return;
}

int sub_63461()
{
    if (g_U95._fU60 != -1)
    {
        if ((g_U16014[g_U95._fU60]._fU212._fU24 == 3) || (g_U16014[g_U95._fU60]._fU212._fU24 == 0))
        {
            return 1;
        }
    }
    return 0;
}

void sub_63737()
{
    switch (l_U220)
    {
        case 0:
        if (DOES_BLIP_EXIST( l_U986 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U986 );
        }
        l_U220++;
        break;
        case 1:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        if ((NOT g_U30093[1]) AND (NOT g_U30093[2]))
        {
            g_U2792 = 1;
            if (DOES_VEHICLE_EXIST( l_U958 ))
            {
                if (NOT (IS_CAR_DEAD( l_U958 )))
                {
                    GET_CAR_COORDINATES( l_U958, ref l_U1054._fU0, ref l_U1054._fU4, ref l_U1054._fU8 );
                    GET_CAR_HEADING( l_U958, ref l_U1057 );
                }
                DELETE_CAR( ref l_U958 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_9627( 0 ) );
            LOAD_ADDITIONAL_TEXT( "E2T1AUD", 6 );
            sub_8935( 1 );
            sub_8935( 2 );
            sub_45684( 1 );
            sub_45684( 2 );
            REMOVE_ANIMS( "misstony01" );
            START_CUTSCENE_NOW( "GT01_ZA" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
                sub_64104( 0 );
            }
            SET_PLAYER_CONTROL( sub_4777(), 0 );
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
                sub_64104( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "GT01_ZA" );
            sub_4841( sub_917() );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
            sub_17969( 8, 1 );
        }
        else
        {
            DO_SCREEN_FADE_IN( 500 );
            if (NOT (IS_CHAR_INJURED( l_U870 )))
            {
                l_U954 = "E2T1_FUK1";
                l_U956 = l_U870;
            }
            else if (NOT (IS_CHAR_INJURED( l_U871 )))
            {
                l_U954 = "E2T1_FUK2";
                l_U956 = l_U871;
            }
            l_U955 = "ALSEC";
            GET_GAME_TIMER( ref l_U984 );
            sub_17969( 14, 1 );
        }
        break;
    }
    return;
}

void sub_64104(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (sub_64113() == 0)
    {
        sub_64138();
    }
    if (HAS_SCRIPT_LOADED( "MissionResultsTimer" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) == 0)
        {
            START_NEW_SCRIPT( "MissionResultsTimer", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionResultsTimer" );
        }
    }
    if (sub_66893() <= g_U43138[g_U43137]._fU8)
    {
        g_U43568 = 1;
    }
    else
    {
        g_U43568 = 0;
    }
    if (g_U43600 == 1)
    {
        g_U43612 = sub_67175();
        g_U43600 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if (sub_66893() < g_U43612)
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
        if ((sub_67968( 0, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_68278();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_67968( 0, 0, 0 )) > g_U43617)
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
        if ((sub_67968( 1, 0, 0 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_68278();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_67968( 1, 0, 0 )) > g_U43617)
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
            g_U43617 = sub_68278();
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
        if ((sub_67968( 0, 0, 1 )) >= g_U43138[g_U43137]._fU28)
        {
            g_U43569 = 1;
        }
        else
        {
            g_U43569 = 0;
        }
        if (g_U43605 == 1)
        {
            g_U43617 = sub_68278();
            g_U43605 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((sub_67968( 0, 0, 1 )) > g_U43617)
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
            g_U43617 = sub_68278();
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
        g_U43619 = sub_69750();
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
        g_U43620 = sub_70446();
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
        g_U43621 = sub_71025();
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

int sub_64113()
{
    return 0;
}

void sub_64138()
{
    if (sub_64152( sub_917() ))
    {
        if (IS_CONTROL_PRESSED( 2, 77 ))
        {
            if (l_U858 == 0)
            {
                GET_GAME_TIMER( ref l_U855 );
                l_U858 = 1;
            }
            GET_GAME_TIMER( ref l_U856 );
            l_U857 = l_U856 - l_U855;
            if (l_U857 < 1000)
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
    sub_64682();
    if (g_U12379 == 1)
    {
        if ((IS_BIT_SET( g_U10938._fU0, 7 )) == 0)
        {
            if (g_U43133 == 0)
            {
                if (l_U854 == 0)
                {
                    GET_GAME_TIMER( ref l_U851 );
                    l_U854 = 1;
                }
                GET_GAME_TIMER( ref l_U852 );
                l_U853 = l_U852 - l_U851;
                if (l_U853 < 1000)
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

int sub_64152(int iParam0)
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
                if (sub_64216( uVar3 ))
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

int sub_64216(int iParam0)
{
    if ((iParam0 == g_U2687) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_64682()
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

void sub_66893()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    if (g_U12379 == 1)
    {
        if (NOT (IS_CHAR_DEAD( sub_917() )))
        {
            GET_CHAR_HEALTH( sub_917(), ref g_U43521 );
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

int sub_67175()
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

void sub_67968(int iParam0, int iParam1, int iParam2)
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
        if (l_U850 < GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER())
        {
            g_U43519++;
        }
        l_U850 = GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER();
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

int sub_68278()
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

int sub_69750()
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

int sub_70446()
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

int sub_71025()
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

void sub_71801()
{
    unknown uVar2;
    int iVar3;

    switch (l_U220)
    {
        case 0:
        sub_9801( 7 );
        sub_9801( 3 );
        REQUEST_MODEL( -1446884113 );
        REQUEST_MODEL( sub_9627( 0 ) );
        while ((NOT (HAS_MODEL_LOADED( sub_9627( 0 ) ))) || ((NOT (HAS_MODEL_LOADED( -1446884113 ))) || ((NOT (sub_10357( 3 ))) || (NOT (sub_10357( 7 ))))))
        {
            WAIT( 0 );
        }
        if (l_U1054._fU0 != 0.00000000)
        {
            while (NOT (sub_10538( 0, l_U1054, l_U1057, ref l_U958 )))
            {
                WAIT( 0 );
            }
        }
        else
        {
            while (NOT (sub_10538( 0, -460.73270000, 154.97130000, 8.74010000, 180.10780000, ref l_U958 )))
            {
                WAIT( 0 );
            }
        }
        SET_CAR_ON_GROUND_PROPERLY( l_U958 );
        if (NOT l_U1030)
        {
            sub_13965( 7, ref l_U872, -464.17850000, 155.60060000, 8.85880000, 253.94890000 );
            sub_13965( 3, ref l_U871, -463.51290000, 157.92010000, 8.85890000, 283.81920000 );
        }
        else
        {
            sub_13965( 7, ref l_U872, -462.88130000, 157.44200000, 8.85890000, 229.09950000 );
            sub_13965( 3, ref l_U871, -463.98140000, 151.20290000, 8.80900000, 295.09870000 );
        }
        sub_4432( 4, l_U872, "HENRIQUE", 0 );
        SET_CHAR_DECISION_MAKER( l_U872, l_U960 );
        sub_4432( 3, l_U871, "ARMANDO", 0 );
        SET_CHAR_DECISION_MAKER( l_U871, l_U960 );
        if (DOES_CHAR_EXIST( l_U870 ))
        {
            DELETE_CHAR( ref l_U870 );
        }
        if (IS_CHAR_IN_ANY_CAR( sub_917() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_917(), -464.11480000, 153.83200000, 8.86880000 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_917(), -464.11480000, 153.83200000, 8.86880000 );
        }
        SET_CHAR_HEADING( sub_917(), 262.41650000 );
        sub_42645( 1000, 1, 0, 1, 0 );
        SET_PLAYER_CONTROL( sub_4777(), 1 );
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        l_U981 = 1;
        l_U220++;
        break;
        case 1:
        sub_18621( -180.16650000, 1504.14700000, 17.32940000, 2.46000000 );
        if (sub_18668( l_U958 ))
        {
            if (sub_15642( sub_917(), 1 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U872 )))
                {
                    if (IS_GROUP_MEMBER( l_U872, sub_22318() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U872 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U871 )))
                {
                    if (IS_GROUP_MEMBER( l_U871, sub_22318() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U871 );
                    }
                }
            }
            else if (sub_18668( l_U958 ))
            {
                sub_72642();
                if (sub_20202( -176.99560000, 1509.61000000, 19.78900000, 2.50000000, 2.50000000, 2.50000000, 1, l_U872, l_U871, 0, l_U958, "T1_M06", "T1_M08", "T1_M07", "T1_M09", "T1_M15", "T1_M13", 0, 1, "T1_M12", "T1_M13" ))
                {
                    sub_32671( 0 );
                    SET_PLAYER_CONTROL( sub_4777(), 0 );
                    sub_17969( 9, 1 );
                }
                else if (NOT (IS_CHAR_INJURED( l_U872 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U871 )))
                    {
                        if (NOT l_U1058)
                        {
                            sub_19106( "E2T1_GHEIGH", ref l_U967, 6, 1 );
                            l_U1058 = 1;
                        }
                        else if (NOT (IS_CAR_DEAD( l_U958 )))
                        {
                            if (IS_CHAR_SITTING_IN_CAR( sub_917(), l_U958 ))
                            {
                                if ((sub_24362( sub_917(), l_U872 )) AND (sub_24362( sub_917(), l_U871 )))
                                {
                                    if (l_U1064)
                                    {
                                        l_U1064 = 0;
                                    }
                                    if (sub_18812())
                                    {
                                        switch (l_U1066)
                                        {
                                            case 0:
                                            if (NOT l_U1059[0])
                                            {
                                                if (sub_19106( "E2T1_B3AV1", ref l_U967, 6, 1 ))
                                                {
                                                    l_U1059[0] = 1;
                                                }
                                            }
                                            else if (sub_33253( l_U967 ))
                                            {
                                                sub_33298( "E2T1_B3AV1", ref l_U967, 6, 1 );
                                            }
                                            else
                                            {
                                                GET_GAME_TIMER( ref l_U1067 );
                                                l_U1066++;
                                            }
                                            break;
                                            case 1:
                                            if (NOT l_U1059[1])
                                            {
                                                if (sub_32842( l_U1067, 3000 ))
                                                {
                                                    if (sub_19106( "E2T1_B3BV1", ref l_U967, 6, 1 ))
                                                    {
                                                        l_U1059[1] = 1;
                                                    }
                                                }
                                            }
                                            else if (sub_33253( l_U967 ))
                                            {
                                                sub_33298( "E2T1_B3BV1", ref l_U967, 6, 1 );
                                            }
                                            else
                                            {
                                                GET_GAME_TIMER( ref l_U1067 );
                                                l_U1066++;
                                            }
                                            break;
                                            case 2:
                                            if (NOT l_U1059[2])
                                            {
                                                if (sub_32842( l_U1067, 3000 ))
                                                {
                                                    if (sub_19106( "E2T1_B3CV1", ref l_U967, 6, 1 ))
                                                    {
                                                        l_U1059[2] = 1;
                                                    }
                                                }
                                            }
                                            else if (sub_33253( l_U967 ))
                                            {
                                                sub_33298( "E2T1_B3CV1", ref l_U967, 6, 1 );
                                            }
                                            else
                                            {
                                                GET_GAME_TIMER( ref l_U1067 );
                                                l_U1066++;
                                            }
                                            break;
                                            case 3:
                                            if (NOT l_U1059[3])
                                            {
                                                if (sub_32842( l_U1067, 3000 ))
                                                {
                                                    if (sub_19106( "E2T1_B3DV1", ref l_U967, 6, 1 ))
                                                    {
                                                        l_U1059[3] = 1;
                                                    }
                                                }
                                            }
                                            else if (sub_33253( l_U967 ))
                                            {
                                                sub_33298( "E2T1_B3DV1", ref l_U967, 6, 1 );
                                            }
                                            else
                                            {
                                                GET_GAME_TIMER( ref l_U1067 );
                                                l_U1066++;
                                            }
                                            break;
                                        }
                                    }
                                }
                                else if (l_U1059[0])
                                {
                                    if (sub_18827( l_U967 ))
                                    {
                                        sub_33547( ref l_U967 );
                                    }
                                }
                                if (sub_18812())
                                {
                                    if (IS_CHAR_IN_ANY_CAR( sub_917() ))
                                    {
                                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_917(), ref uVar2 );
                                        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar2, ref iVar3 );
                                        if (iVar3 < 2)
                                        {
                                            if (NOT l_U1064)
                                            {
                                                sub_19106( "E2T1_4DOOR", ref l_U973, 6, 1 );
                                                l_U1064 = 1;
                                            }
                                        }
                                    }
                                    else if (l_U1064)
                                    {
                                        l_U1064 = 0;
                                    }
                                }
                            }
                            else if (l_U1059[0])
                            {
                                if (sub_18827( l_U967 ))
                                {
                                    sub_33547( ref l_U967 );
                                }
                            }
                        }
                    }
                }
                if (IS_CHAR_INJURED( l_U872 ))
                {
                    l_U954 = "E2T1_HDIES";
                    l_U955 = "T1_FAIL_9";
                    l_U956 = l_U871;
                    sub_17969( 14, 1 );
                }
                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_917(), l_U872, 250.00000000, 250.00000000, 250.00000000, 0 )))
                {
                    sub_44460( "T1_FAIL_5" );
                    sub_44549();
                }
                if (IS_CHAR_INJURED( l_U871 ))
                {
                    l_U954 = "E2T1_ADIES";
                    l_U955 = "T1_FAIL_8";
                    l_U956 = l_U872;
                    sub_17969( 14, 1 );
                }
                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_917(), l_U871, 250.00000000, 250.00000000, 250.00000000, 0 )))
                {
                    sub_44460( "T1_FAIL_6" );
                    sub_44549();
                };;;
            }
        }
        else
        {
            l_U954 = "E2T1_CART2";
            l_U955 = "T1_FAIL_2";
            l_U956 = l_U871;
            sub_17969( 14, 1 );
        }
        break;
    }
    return;
}

void sub_72642()
{
    l_U186 = 1;
    return;
}

void sub_74191()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown[3] uVar6;
    float fVar10;

    array(ref uVar6, 3);
    if (NOT l_U1073)
    {
        if (NOT sub_34647())
        {
            l_U1073 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U1074) AND (l_U1069 > 0)))
    {
        if (sub_34647())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_32671( 0 );
            l_U1074 = 1;
            l_U1069 = 5;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U872 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U872 ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U872, 1 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U871 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U871 ))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U871, 1 );
        }
    }
    switch (l_U1069)
    {
        case 0:
        sub_34966( 1, 1, 1 );
        DISPLAY_RADAR( 0 );
        WAIT( 500 );
        if (NOT (IS_CAR_DEAD( l_U958 )))
        {
            GET_CAR_HEADING( l_U958, ref fVar10 );
            if ((fVar10 <= ((329.65580000 + 90.00000000) - 360.00000000)) || (fVar10 >= (329.65580000 - 90.00000000)))
            {
                CLEAR_AREA( -176.99560000, 1509.61000000, 17.25160000, 5.00000000, 1 );
                SET_CAR_COORDINATES( l_U958, -176.99560000, 1509.61000000, 17.25160000 );
                SET_CAR_HEADING( l_U958, 329.65580000 );
            }
            else
            {
                CLEAR_AREA( -177.88390000, 1508.18700000, 17.27630000, 5.00000000, 1 );
                SET_CAR_COORDINATES( l_U958, -177.88390000, 1508.18700000, 17.27630000 );
                SET_CAR_HEADING( l_U958, 150.60520000 );
                l_U1068 = 1;
            }
            SET_CAR_ON_GROUND_PROPERLY( l_U958 );
            REMOVE_CAR_WINDOW( l_U958, 0 );
            g_U2792 = 1;
            if (NOT (IS_CHAR_DEAD( l_U871 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U872 )))
                {
                    iVar3 = sub_74835( l_U871 );
                    if (iVar3 < 0)
                    {
                        sub_75165( iVar3, "Arman seat...." );
                        l_U983 = 0;
                        SCRIPT_ASSERT( "WHICH_SEAT_IS_BUDDY_IN...couldn't get seat for Armando" );
                    }
                    iVar4 = sub_74835( l_U872 );
                    if (iVar4 < 0)
                    {
                        sub_75165( iVar4, "Arman seat...." );
                        l_U983 = 0;
                        SCRIPT_ASSERT( "WHICH_SEAT_IS_BUDDY_IN...couldn't get seat for Henri" );
                    }
                    if (iVar4 == 0)
                    {
                        if (iVar3 == 2)
                        {
                            sub_75384( 1 );
                            WARP_CHAR_FROM_CAR_TO_CAR( l_U871, l_U958, 1 );
                        }
                    }
                    else if (iVar3 == 0)
                    {
                        if (iVar4 == 1)
                        {
                            sub_75384( 2 );
                            WARP_CHAR_FROM_CAR_TO_CAR( l_U872, l_U958, 2 );
                            WARP_CHAR_FROM_CAR_TO_CAR( l_U871, l_U958, 1 );
                            WARP_CHAR_FROM_CAR_TO_CAR( l_U872, l_U958, 0 );
                        }
                        else if (iVar4 == 2)
                        {
                            sub_75384( 1 );
                            WARP_CHAR_FROM_CAR_TO_CAR( l_U871, l_U958, 1 );
                            WARP_CHAR_FROM_CAR_TO_CAR( l_U872, l_U958, 0 );
                        }
                    }
                }
            }
        }
        SET_USE_HIGHDOF( 1 );
        CREATE_CAM( 14, ref l_U877[45] );
        CREATE_CAM( 14, ref l_U877[46] );
        CREATE_CAM( 3, ref l_U877[47] );
        CREATE_CAM( 14, ref l_U877[48] );
        CREATE_CAM( 14, ref l_U877[49] );
        CREATE_CAM( 3, ref l_U877[50] );
        CREATE_CAM( 14, ref l_U877[51] );
        CREATE_CAM( 14, ref l_U877[52] );
        CREATE_CAM( 3, ref l_U877[53] );
        if (NOT l_U1068)
        {
            SET_CAM_POS( l_U877[45], -178.23380000, 1512.50300000, 18.44722000 );
            SET_CAM_ROT( l_U877[45], -0.03221100, -0.00000000, -165.43400000 );
            SET_CAM_FOV( l_U877[45], 25.20005000 );
            SET_CAM_FAR_DOF( l_U877[45], 4.00000000 );
            SET_CAM_ACTIVE( l_U877[45], 0 );
            SET_CAM_PROPAGATE( l_U877[45], 0 );
            SET_CAM_POS( l_U877[46], -177.44790000, 1512.60800000, 18.44722000 );
            SET_CAM_ROT( l_U877[46], -0.03221100, -0.00000000, 179.79290000 );
            SET_CAM_FAR_DOF( l_U877[46], 4.00000000 );
            SET_CAM_FOV( l_U877[46], 25.20005000 );
            SET_CAM_ACTIVE( l_U877[46], 0 );
            SET_CAM_PROPAGATE( l_U877[46], 0 );
        }
        else
        {
            SET_CAM_POS( l_U877[45], -176.23780000, 1505.22500000, 18.57594000 );
            SET_CAM_ROT( l_U877[45], -3.69914000, -0.00000000, 20.84312000 );
            SET_CAM_FOV( l_U877[45], 25.80005000 );
            SET_CAM_FAR_DOF( l_U877[45], 4.00000000 );
            SET_CAM_ACTIVE( l_U877[45], 0 );
            SET_CAM_PROPAGATE( l_U877[45], 0 );
            SET_CAM_POS( l_U877[46], -176.94810000, 1504.95500000, 18.57594000 );
            SET_CAM_ROT( l_U877[46], -3.69914000, 0.00000000, 11.67579000 );
            SET_CAM_FOV( l_U877[46], 25.80005000 );
            SET_CAM_FAR_DOF( l_U877[46], 4.00000000 );
            SET_CAM_ACTIVE( l_U877[46], 0 );
            SET_CAM_PROPAGATE( l_U877[46], 0 );
        }
        if (NOT l_U1068)
        {
            SET_CAM_POS( l_U877[48], -179.91490000, 1510.47500000, 19.28052000 );
            SET_CAM_ROT( l_U877[48], -20.13335000, 0.00000000, -108.99120000 );
            SET_CAM_FOV( l_U877[48], 33.60003000 );
            SET_CAM_ACTIVE( l_U877[48], 0 );
            SET_CAM_PROPAGATE( l_U877[48], 0 );
            SET_CAM_POS( l_U877[49], -179.79530000, 1510.82300000, 19.28052000 );
            SET_CAM_ROT( l_U877[49], -20.13335000, 0.00000000, -121.20910000 );
            SET_CAM_FOV( l_U877[49], 33.60003000 );
            SET_CAM_ACTIVE( l_U877[49], 0 );
            SET_CAM_PROPAGATE( l_U877[49], 0 );
        }
        else
        {
            SET_CAM_POS( l_U877[48], -174.50450000, 1507.48800000, 19.19396000 );
            SET_CAM_ROT( l_U877[48], -15.20590000, 0.00000000, 81.99846000 );
            SET_CAM_FOV( l_U877[48], 33.60003000 );
            SET_CAM_FAR_DOF( l_U877[48], 7.00000000 );
            SET_CAM_ACTIVE( l_U877[48], 0 );
            SET_CAM_PROPAGATE( l_U877[48], 0 );
            SET_CAM_POS( l_U877[49], -174.61590000, 1506.69500000, 19.19396000 );
            SET_CAM_ROT( l_U877[49], -15.20590000, -0.00000000, 62.86167000 );
            SET_CAM_FOV( l_U877[49], 33.60003000 );
            SET_CAM_FAR_DOF( l_U877[49], 7.00000000 );
            SET_CAM_ACTIVE( l_U877[49], 0 );
            SET_CAM_PROPAGATE( l_U877[49], 0 );
        }
        if (NOT l_U1068)
        {
            SET_CAM_POS( l_U877[51], -176.22950000, 1528.04500000, 21.46128000 );
            SET_CAM_ROT( l_U877[51], -8.21919400, 0.00000000, 179.22550000 );
            SET_CAM_FOV( l_U877[51], 22.50006000 );
            SET_CAM_FAR_DOF( l_U877[51], 40.00000000 );
            SET_CAM_ACTIVE( l_U877[51], 0 );
            SET_CAM_PROPAGATE( l_U877[51], 0 );
            SET_CAM_POS( l_U877[52], -172.58260000, 1527.78400000, 21.46128000 );
            SET_CAM_ROT( l_U877[52], -8.21919400, -0.00000000, 166.87330000 );
            SET_CAM_FOV( l_U877[52], 22.50006000 );
            SET_CAM_FAR_DOF( l_U877[52], 40.00000000 );
            SET_CAM_ACTIVE( l_U877[52], 0 );
            SET_CAM_PROPAGATE( l_U877[52], 0 );
        }
        else
        {
            SET_CAM_POS( l_U877[51], -189.74440000, 1494.65700000, 20.76767000 );
            SET_CAM_ROT( l_U877[51], -4.54889200, 0.00000000, -40.84370000 );
            SET_CAM_FOV( l_U877[51], 23.40006000 );
            SET_CAM_FAR_DOF( l_U877[51], 40.00000000 );
            SET_CAM_ACTIVE( l_U877[51], 0 );
            SET_CAM_PROPAGATE( l_U877[51], 0 );
            SET_CAM_POS( l_U877[52], -191.31790000, 1496.01800000, 20.76767000 );
            SET_CAM_ROT( l_U877[52], -4.54889200, -0.00000000, -47.49001000 );
            SET_CAM_FOV( l_U877[52], 23.40006000 );
            SET_CAM_FAR_DOF( l_U877[52], 40.00000000 );
            SET_CAM_ACTIVE( l_U877[52], 0 );
            SET_CAM_PROPAGATE( l_U877[52], 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U872 )))
        {
            TASK_LOOK_AT_CHAR( l_U872, sub_917(), 9999999, 0 );
            TASK_LOOK_AT_CHAR( sub_917(), l_U872, 9999999, 0 );
            REMOVE_CHAR_FROM_GROUP( l_U872 );
        }
        if (NOT (IS_CHAR_INJURED( l_U871 )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U871 );
        }
        sub_77690();
        sub_19106( "E2T1_AHOME", ref l_U967, 6, 1 );
        SETTIMERA( 0 );
        l_U1069 = 1;
        break;
        case 1:
        if ((NOT (sub_18827( l_U967 ))) AND (TIMERA() > 2000))
        {
            sub_32671( 0 );
            SETTIMERA( 0 );
            SET_CAM_ACTIVE( l_U877[45], 1 );
            SET_CAM_ACTIVE( l_U877[46], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U877[47], l_U877[45], l_U877[46], 15000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[47], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U877[47], 1 );
            SET_CAM_PROPAGATE( l_U877[47], 1 );
            SET_CAM_PROPAGATE( l_U877[45], 0 );
            sub_42258();
            sub_19106( "E2T1_ABYE", ref l_U967, 6, 1 );
            l_U1069 = 2;
        }
        break;
        case 2:
        if ((TIMERA() > 2000) || (NOT (sub_18827( l_U967 ))))
        {
            if (NOT l_U1068)
            {
                sub_13965( 7, ref l_U1075, -174.04380000, 1511.01700000, 17.35310000, 174.07460000 );
                SET_CHAR_VISIBLE( l_U1075, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1075, -152.83410000, 1483.29900000, 17.43230000, 2, -2, 0.50000000 );
            }
            if (NOT l_U1070[1])
            {
                if (NOT (IS_CHAR_INJURED( l_U872 )))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U872 );
                    OPEN_SEQUENCE_TASK( ref l_U953 );
                    TASK_CLEAR_LOOK_AT( 0 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    if (NOT l_U1068)
                    {
                        ;
                    }
                    else
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -182.18660000, 1503.40400000, 17.41230000, 2, -2, 0.50000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -152.83410000, 1483.29900000, 17.43230000, 2, -2, 0.50000000 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U953 );
                    TASK_PERFORM_SEQUENCE( l_U872, l_U953 );
                    CLEAR_SEQUENCE_TASK( l_U953 );
                }
                l_U1070[1] = 1;
            }
        }
        if (NOT l_U1070[0])
        {
            if (NOT (IS_CHAR_INJURED( l_U871 )))
            {
                REMOVE_CHAR_FROM_GROUP( l_U871 );
                OPEN_SEQUENCE_TASK( ref l_U953 );
                TASK_STAND_STILL( 0, 1000 );
                TASK_LEAVE_ANY_CAR( 0 );
                CLOSE_SEQUENCE_TASK( l_U953 );
                TASK_PERFORM_SEQUENCE( l_U871, l_U953 );
                CLEAR_SEQUENCE_TASK( l_U953 );
                l_U1070[0] = 1;
            }
        }
        if ((l_U1070[1]) AND (l_U1070[0]))
        {
            SETTIMERA( 0 );
            l_U1069 = 3;
        }
        break;
        case 3:
        if (((TIMERA() > 3500) AND (l_U1068)) || ((TIMERA() > 2000) AND (NOT l_U1068)))
        {
            TASK_CLEAR_LOOK_AT( sub_917() );
            if (NOT (IS_CHAR_INJURED( l_U872 )))
            {
                if (NOT l_U1068)
                {
                    DELETE_CHAR( ref l_U872 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U1075 )))
            {
                SET_CHAR_VISIBLE( l_U1075, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U871 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U871 );
                if (NOT l_U1068)
                {
                    SET_CHAR_COORDINATES( l_U871, -178.99510000, 1509.86300000, 17.35870000 );
                    SET_CHAR_HEADING( l_U871, 277.65150000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U871, -175.73320000, 1508.00400000, 17.38020000 );
                    SET_CHAR_HEADING( l_U871, 85.17520000 );
                }
                if (NOT l_U1068)
                {
                    TASK_LOOK_AT_COORD( sub_917(), -181.15930000, 1514.01400000, 18.80327000, 9999999, 4 );
                }
                else
                {
                    TASK_LOOK_AT_COORD( sub_917(), -173.77980000, 1502.88600000, 18.51954000, 9999999, 4 );
                }
                TASK_LOOK_AT_CHAR( l_U871, sub_917(), 9999999, 0 );
                SET_CAM_ACTIVE( l_U877[48], 1 );
                SET_CAM_ACTIVE( l_U877[49], 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U877[50], l_U877[48], l_U877[49], 15000, 0 );
                SET_CAM_INTERP_STYLE_DETAILED( l_U877[50], 0, 0, 1, 1 );
                SET_CAM_ACTIVE( l_U877[50], 1 );
                SET_CAM_PROPAGATE( l_U877[50], 1 );
                SET_CAM_ACTIVE( l_U877[47], 0 );
                SET_CAM_PROPAGATE( l_U877[47], 0 );
                SET_CAM_ACTIVE( l_U877[46], 0 );
                sub_19106( "E2T1_ABYE2", ref l_U967, 6, 1 );
                SETTIMERA( 0 );
                l_U1069 = 4;
            }
        }
        break;
        case 4:
        if ((NOT (sub_18827( l_U967 ))) || (TIMERA() > 10000))
        {
            if (NOT (IS_CHAR_DEAD( l_U871 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U871 );
                if (NOT l_U1068)
                {
                    SET_CHAR_COORDINATES( l_U871, -179.97560000, 1508.97400000, 17.39370000 );
                    SET_CHAR_HEADING( l_U871, 190.56510000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( l_U871, -176.07690000, 1507.76700000, 17.38510000 );
                    SET_CHAR_HEADING( l_U871, 172.96540000 );
                }
                OPEN_SEQUENCE_TASK( ref l_U953 );
                TASK_CLEAR_LOOK_AT( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -172.13520000, 1492.74200000, 17.44040000, 2, -1, 1.00000000 );
                CLOSE_SEQUENCE_TASK( l_U953 );
                TASK_PERFORM_SEQUENCE( l_U871, l_U953 );
                CLEAR_SEQUENCE_TASK( l_U953 );
                TASK_CLEAR_LOOK_AT( sub_917() );
            }
            SET_CAM_ACTIVE( l_U877[51], 1 );
            SET_CAM_ACTIVE( l_U877[52], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U877[53], l_U877[51], l_U877[52], 15000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[53], 0, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U877[53], 1 );
            SET_CAM_PROPAGATE( l_U877[53], 1 );
            SET_CAM_ACTIVE( l_U877[50], 0 );
            SET_CAM_PROPAGATE( l_U877[50], 0 );
            sub_19106( "E2T1_LBYE", ref l_U967, 6, 1 );
            SETTIMERA( 0 );
            l_U1069 = 5;
        }
        break;
        case 5:
        if ((l_U1074) || (((TIMERA() > 4000) AND (l_U1068)) || (((TIMERA() > 8500) AND (NOT l_U1068)) || (IS_KEYBOARD_KEY_JUST_PRESSED( 2 )))))
        {
            if ((l_U1074) || (NOT (sub_18827( l_U967 ))))
            {
                sub_42389( ref l_U877[45], ref l_U877[46], ref l_U877[47] );
                sub_42389( ref l_U877[48], ref l_U877[49], ref l_U877[50] );
                sub_42389( ref l_U877[51], ref l_U877[52], ref l_U877[53] );
                SET_USE_HIGHDOF( 0 );
                if (DOES_CHAR_EXIST( l_U871 ))
                {
                    DELETE_CHAR( ref l_U871 );
                }
                if (DOES_CHAR_EXIST( l_U872 ))
                {
                    DELETE_CHAR( ref l_U872 );
                }
                if (DOES_CHAR_EXIST( l_U1075 ))
                {
                    DELETE_CHAR( ref l_U1075 );
                }
                sub_57570( 7 );
                sub_57570( 3 );
                REMOVE_ANIMS( "missTony01" );
                sub_42258();
                g_U15811[7] = 1;
                sub_42645( 0, 1, 0, 0, 0 );
                if (l_U1074)
                {
                    TASK_CLEAR_LOOK_AT( sub_917() );
                    DO_SCREEN_FADE_IN( 500 );
                }
                sub_17969( 10, 1 );
            }
        }
        break;
    }
    return;
}

void sub_74835(int iParam0)
{
    int Result;
    int iVar4;

    Result = -1;
    if (NOT (IS_CHAR_DEAD( iParam0 )))
    {
        if (NOT (IS_CAR_DEAD( l_U958 )))
        {
            if (IS_CHAR_IN_CAR( iParam0, l_U958 ))
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U958, 0 )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U958, 0, ref iVar4 );
                    if (iVar4 == iParam0)
                    {
                        return 0;
                    }
                }
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U958, 1 )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U958, 1, ref iVar4 );
                    if (iVar4 == iParam0)
                    {
                        return 1;
                    }
                }
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U958, 2 )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U958, 2, ref iVar4 );
                    if (iVar4 == iParam0)
                    {
                        return 2;
                    }
                }
            }
            else
            {
                SCRIPT_ASSERT( "Not in Car!" );
            }
        }
        else
        {
            SCRIPT_ASSERT( "Car is dead!" );
        }
    }
    else
    {
        SCRIPT_ASSERT( "pedInCar is dead!" );
    }
    return Result;
}

void sub_75165(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_75384(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CAR_DEAD( l_U958 )))
    {
        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U958, uParam0 )))
        {
            GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U958, uParam0, ref uVar3 );
            DELETE_CHAR( ref uVar3 );
            SCRIPT_ASSERT( "Deleting char from seat...." );
        }
    }
    return;
}

void sub_77690()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (NOT l_U1068)
    {
        CREATE_CAM( 14, ref l_U1012[0] );
        SET_CAM_POS( l_U1012[0], -178.33060000, 1526.01700000, 21.03500000 );
        SET_CAM_ROT( l_U1012[0], -6.79310000, 0.00000000, -171.06700000 );
        SET_CAM_FOV( l_U1012[0], 22.50010000 );
        SET_CAM_FAR_DOF( l_U1012[0], 40.00000000 );
        SET_CAM_ACTIVE( l_U1012[0], 1 );
        CREATE_CAM( 14, ref l_U1012[1] );
        SET_CAM_POS( l_U1012[1], -176.20580000, 1526.35100000, 21.03500000 );
        SET_CAM_ROT( l_U1012[1], -6.79310000, 0.00000000, -175.87690000 );
        SET_CAM_FOV( l_U1012[1], 22.50010000 );
        SET_CAM_FAR_DOF( l_U1012[1], 40.00000000 );
        SET_CAM_ACTIVE( l_U1012[1], 1 );
        CREATE_CAM( 14, ref l_U1012[2] );
        SET_CAM_POS( l_U1012[2], -174.02520000, 1526.48200000, 21.03500000 );
        SET_CAM_ROT( l_U1012[2], -6.79310000, 0.00000000, 175.75290000 );
        SET_CAM_FOV( l_U1012[2], 22.50010000 );
        SET_CAM_FAR_DOF( l_U1012[2], 40.00000000 );
        SET_CAM_ACTIVE( l_U1012[2], 1 );
        CREATE_CAM( 14, ref l_U1012[3] );
        SET_CAM_POS( l_U1012[3], -172.23990000, 1526.33400000, 21.03500000 );
        SET_CAM_ROT( l_U1012[3], -6.79310000, 0.00000000, 170.61460000 );
        SET_CAM_FOV( l_U1012[3], 22.50010000 );
        SET_CAM_FAR_DOF( l_U1012[3], 40.00000000 );
        SET_CAM_ACTIVE( l_U1012[3], 1 );
    }
    else
    {
        CREATE_CAM( 14, ref l_U1012[0] );
        SET_CAM_POS( l_U1012[0], -188.60310000, 1493.92600000, 20.81140000 );
        SET_CAM_ROT( l_U1012[0], -4.90160000, 0.00000000, -38.25720000 );
        SET_CAM_FOV( l_U1012[0], 22.50010000 );
        SET_CAM_FAR_DOF( l_U1012[0], 40.00000000 );
        SET_CAM_ACTIVE( l_U1012[0], 1 );
        CREATE_CAM( 14, ref l_U1012[1] );
        SET_CAM_POS( l_U1012[1], -189.80870000, 1495.06600000, 20.81140000 );
        SET_CAM_ROT( l_U1012[1], -4.90160000, 0.00000000, -43.40260000 );
        SET_CAM_FOV( l_U1012[1], 22.50010000 );
        SET_CAM_FAR_DOF( l_U1012[1], 40.00000000 );
        SET_CAM_ACTIVE( l_U1012[1], 1 );
        CREATE_CAM( 14, ref l_U1012[2] );
        SET_CAM_POS( l_U1012[2], -190.77140000, 1496.17200000, 20.81140000 );
        SET_CAM_ROT( l_U1012[2], -4.90160000, 0.00000000, -46.74310000 );
        SET_CAM_FOV( l_U1012[2], 22.50010000 );
        SET_CAM_FAR_DOF( l_U1012[2], 40.00000000 );
        SET_CAM_ACTIVE( l_U1012[2], 1 );
        CREATE_CAM( 14, ref l_U1012[3] );
        SET_CAM_POS( l_U1012[3], -192.02250000, 1497.72200000, 20.81140000 );
        SET_CAM_ROT( l_U1012[3], -4.90160000, 0.00000000, -52.88300000 );
        SET_CAM_FOV( l_U1012[3], 22.50010000 );
        SET_CAM_FAR_DOF( l_U1012[3], 40.00000000 );
        SET_CAM_ACTIVE( l_U1012[3], 1 );
    }
    CREATE_CAM( 25, ref l_U1011 );
    SET_CAM_SPLINE_DURATION( l_U1011, 18000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U1011, 0 );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[0] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[1] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[2] );
    ADD_CAM_SPLINE_NODE( l_U1011, l_U1012[3] );
    SET_CAM_ACTIVE( l_U1011, 1 );
    SET_CAM_PROPAGATE( l_U1011, 1 );
    return;
}

void sub_81170()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    switch (l_U220)
    {
        case 0:
        for ( I = 0; I < l_U873; I++ )
        {
            if (DOES_CHAR_EXIST( l_U873[I] ))
            {
                DELETE_CHAR( ref l_U873[I] );
            }
        }
        sub_42645( 1000, 1, 0, 1, 0 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL( sub_4777(), 1 );
        CLEAR_AREA( -449.25000000, 1389.24700000, 16.88100000, 50.00000000, 1 );
        l_U220++;
        break;
        case 1:
        sub_18621( -450.60040000, 1376.67600000, 15.67750000, 2.94040000 );
        if (NOT l_U1076)
        {
            l_U1076 = 1;
        }
        else
        {
            uVar3 = {sub_81423()};
            if (sub_81529( uVar3._fU0, uVar3._fU4, uVar3._fU8, 2.50000000, 2.50000000, 2.50000000, 1, "T1_M10", 0, 0 ))
            {
                SET_PLAYER_CONTROL( sub_4777(), 0 );
                sub_17969( 11, 1 );
            }
        }
        break;
        case 2: break;
    }
    return;
}

vector sub_81423()
{
    if (g_U43133)
    {
        return vector( -449.63300000, 1380.55100000, 17.34300000);
    }
    return vector( -449.25000000, 1389.24700000, 16.88100000);
}

int sub_81529(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    sub_20582();
    sub_21462();
    if (IS_SCREEN_FADED_IN())
    {
        if ((IS_WANTED_LEVEL_GREATER( sub_4777(), 0 )) AND (uParam8))
        {
            if (DOES_BLIP_EXIST( l_U201 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U201 );
                sub_22208( uParam7 );
            }
            if ((NOT l_U170) AND (NOT (sub_26362( 0 ))))
            {
                sub_22088( uParam9, 0 );
                l_U214 = uParam9;
                l_U170 = 1;
            }
        }
        else if (l_U170)
        {
            sub_22208( uParam9 );
            l_U170 = 0;
        }
        if (NOT (DOES_BLIP_EXIST( l_U201 )))
        {
            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U201 );
            sub_24195( l_U201 );
            if (l_U189)
            {
                SHOW_BLIP_ON_ALTIMETER( l_U201, 1 );
            }
        }
        if (NOT (sub_26362( 0 )))
        {
            if (NOT l_U172)
            {
                sub_22088( uParam7, 0 );
                l_U172 = 1;
            }
        }
        if ((sub_28121()) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_917(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 )))
        {
            sub_22208( uParam7 );
            sub_22208( uParam9 );
            sub_17998();
            return 1;
        }
        sub_63169( uParam0, uParam1, uParam2, 0, 0 );
    }
    sub_32279( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_81941()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT l_U1079)
    {
        if (NOT sub_34647())
        {
            l_U1079 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U1080) AND (l_U1077 > 0)))
    {
        if (sub_34647())
        {
            if ((NOT IS_SCREEN_FADING_IN()) AND ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT())))
            {
                CLEAR_PRINTS();
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                sub_32671( 0 );
                CLEAR_HELP();
                l_U1080 = 1;
                l_U1077 = 6;
            }
        }
    }
    switch (l_U1077)
    {
        case 0:
        sub_34966( 1, 1, 1 );
        DISPLAY_RADAR( 0 );
        CREATE_CAM( 14, ref l_U877[54] );
        CREATE_CAM( 14, ref l_U877[55] );
        CREATE_CAM( 3, ref l_U877[56] );
        CREATE_CAM( 14, ref l_U877[57] );
        CREATE_CAM( 14, ref l_U877[58] );
        CREATE_CAM( 3, ref l_U877[59] );
        CREATE_CAM( 14, ref l_U877[60] );
        CREATE_CAM( 14, ref l_U877[61] );
        CREATE_CAM( 3, ref l_U877[62] );
        CREATE_CAM( 14, ref l_U877[63] );
        CREATE_CAM( 14, ref l_U877[64] );
        CREATE_CAM( 3, ref l_U877[65] );
        CREATE_CAM( 14, ref l_U877[66] );
        CREATE_CAM( 14, ref l_U877[67] );
        CREATE_CAM( 3, ref l_U877[68] );
        SET_CAM_POS( l_U877[54], -451.78740000, 1400.43000000, 17.35454000 );
        SET_CAM_ROT( l_U877[54], -6.13664900, -0.00000000, -150.43930000 );
        SET_CAM_FOV( l_U877[54], 35.40002000 );
        SET_CAM_ACTIVE( l_U877[54], 1 );
        SET_CAM_PROPAGATE( l_U877[54], 1 );
        SET_CAM_POS( l_U877[55], -451.78740000, 1400.43000000, 17.35454000 );
        SET_CAM_ROT( l_U877[55], -6.13664900, -0.00000000, -150.43930000 );
        SET_CAM_FOV( l_U877[55], 45.00000000 );
        SET_CAM_ACTIVE( l_U877[55], 1 );
        SET_CAM_PROPAGATE( l_U877[55], 0 );
        SET_CAM_POS( l_U877[57], -431.79320000, 1397.02000000, 17.08579000 );
        SET_CAM_ROT( l_U877[57], 5.75415500, -0.00000000, -179.58720000 );
        SET_CAM_FOV( l_U877[57], 24.60005000 );
        SET_CAM_ACTIVE( l_U877[57], 0 );
        SET_CAM_PROPAGATE( l_U877[57], 0 );
        SET_CAM_POS( l_U877[58], -434.59090000, 1397.02000000, 17.08579000 );
        SET_CAM_ROT( l_U877[58], -4.72705000, -0.00000000, -179.58720000 );
        SET_CAM_FOV( l_U877[58], 30.90004000 );
        SET_CAM_ACTIVE( l_U877[58], 0 );
        SET_CAM_PROPAGATE( l_U877[58], 0 );
        SET_CAM_POS( l_U877[60], -439.25960000, 1391.83400000, 19.13802000 );
        SET_CAM_ROT( l_U877[60], -25.97610000, -0.00000000, -58.57412000 );
        SET_CAM_FOV( l_U877[60], 50.09999000 );
        SET_CAM_ACTIVE( l_U877[60], 0 );
        SET_CAM_PROPAGATE( l_U877[60], 0 );
        SET_CAM_POS( l_U877[61], -439.25960000, 1391.83400000, 19.13802000 );
        SET_CAM_ROT( l_U877[61], -25.97610000, -0.00000000, -58.57412000 );
        SET_CAM_FOV( l_U877[61], 46.50000000 );
        SET_CAM_ACTIVE( l_U877[61], 0 );
        SET_CAM_PROPAGATE( l_U877[61], 0 );
        SET_CAM_POS( l_U877[63], -434.50010000, 1395.48500000, 17.15880000 );
        SET_CAM_ROT( l_U877[63], -13.52092000, -0.00000000, -64.00136000 );
        SET_CAM_FOV( l_U877[63], 42.60001000 );
        SET_CAM_ACTIVE( l_U877[63], 0 );
        SET_CAM_PROPAGATE( l_U877[63], 0 );
        SET_CAM_POS( l_U877[63], -434.50010000, 1395.48500000, 17.15880000 );
        SET_CAM_ROT( l_U877[63], -13.52092000, -0.00000000, -64.00136000 );
        SET_CAM_FOV( l_U877[63], 42.60001000 );
        SET_CAM_ACTIVE( l_U877[63], 0 );
        SET_CAM_PROPAGATE( l_U877[63], 0 );
        SET_CAM_POS( l_U877[64], -434.50010000, 1395.48500000, 17.15880000 );
        SET_CAM_ROT( l_U877[64], -13.52092000, -0.00000000, -64.00136000 );
        SET_CAM_FOV( l_U877[64], 39.60001000 );
        SET_CAM_ACTIVE( l_U877[64], 0 );
        SET_CAM_PROPAGATE( l_U877[64], 0 );
        SET_CAM_POS( l_U877[66], -432.84040000, 1397.74400000, 17.38184000 );
        SET_CAM_ROT( l_U877[66], -10.07262000, 0.00000000, -124.40640000 );
        SET_CAM_FOV( l_U877[66], 42.90001000 );
        SET_CAM_ACTIVE( l_U877[66], 0 );
        SET_CAM_PROPAGATE( l_U877[66], 0 );
        SET_CAM_POS( l_U877[67], -432.63720000, 1397.60400000, 17.33807000 );
        SET_CAM_ROT( l_U877[67], -10.07262000, 0.00000000, -124.40640000 );
        SET_CAM_FOV( l_U877[67], 42.90001000 );
        SET_CAM_ACTIVE( l_U877[67], 0 );
        SET_CAM_PROPAGATE( l_U877[67], 0 );
        WAIT( 500 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        PRINT_HELP( "H_PARK" );
        SET_CAM_INTERP_STYLE_CORE( l_U877[56], l_U877[54], l_U877[55], 15000, 0 );
        SET_CAM_ACTIVE( l_U877[56], 1 );
        SET_CAM_PROPAGATE( l_U877[56], 1 );
        SET_CAM_ACTIVE( l_U877[54], 0 );
        OPEN_SEQUENCE_TASK( ref uVar2 );
        TASK_LEAVE_ANY_CAR( 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -442.63620000, 1389.61000000, 14.47100000, 2, -2, 0.50000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -435.90910000, 1389.57200000, 14.47100000, 2, -2, 0.50000000 );
        CLOSE_SEQUENCE_TASK( uVar2 );
        TASK_PERFORM_SEQUENCE( sub_917(), uVar2 );
        CLEAR_SEQUENCE_TASK( uVar2 );
        SETTIMERA( 0 );
        l_U982 = 0;
        g_U2792 = 1;
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 65096, 1390, 17, 0, 0.00000000 );
        l_U1077 = 1;
        break;
        case 1:
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_917(), -443.40700000, 1389.45600000, 15.47640000, 1.00000000, 3.00000000, 2.00000000, 0 )) || (TIMERA() > 20000))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_HELP();
            SET_CAM_ACTIVE( l_U877[57], 1 );
            SET_CAM_PROPAGATE( l_U877[57], 1 );
            SET_CAM_ACTIVE( l_U877[58], 1 );
            SET_CAM_ACTIVE( l_U877[56], 1 );
            SET_CAM_PROPAGATE( l_U877[56], 1 );
            WAIT( 0 );
            GET_GAME_VIEWPORT_ID( ref l_U959 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U959, "E2_luisapartment" );
            uVar4 = GET_HASH_KEY( "E2_luisapartment" );
            GET_INTERIOR_AT_COORDS( -431.09890000, 1397.10600000, 17.37085000, ref uVar3 );
            LOAD_SCENE_FOR_ROOM_BY_KEY( uVar3, uVar4 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
            SET_CHAR_COORDINATES( sub_917(), -434.68610000, 1393.91400000, 15.45760000 );
            SET_CHAR_HEADING( sub_917(), 0.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_917(), "E2_luisapartment" );
            SETTIMERA( 0 );
            DO_SCREEN_FADE_IN( 500 );
            l_U1077 = 2;
        }
        break;
        case 2:
        if (TIMERA() > 2000)
        {
            SET_CAM_INTERP_STYLE_CORE( l_U877[59], l_U877[57], l_U877[58], 9000, 0 );
            SET_CAM_ACTIVE( l_U877[59], 1 );
            SET_CAM_PROPAGATE( l_U877[59], 1 );
            SET_CAM_PROPAGATE( l_U877[57], 0 );
            SETTIMERA( 0 );
            l_U1077 = 3;
        }
        break;
        case 3:
        if (NOT l_U1078)
        {
            if (TIMERA() > 3500)
            {
                l_U1078 = 1;
            }
        }
        else if (TIMERA() > 8500)
        {
            SET_CAM_ACTIVE( l_U877[60], 1 );
            SET_CAM_ACTIVE( l_U877[61], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U877[62], l_U877[60], l_U877[61], 10000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[62], 3, 3, 1, 1 );
            SET_CAM_ACTIVE( l_U877[62], 1 );
            SET_CAM_PROPAGATE( l_U877[62], 1 );
            SET_CAM_ACTIVE( l_U877[59], 0 );
            SET_CAM_PROPAGATE( l_U877[59], 0 );
            PRINT_HELP( "WAPTMT" );
            l_U1077 = 4;
            SETTIMERA( 0 );
        }
        break;
        case 4:
        if (TIMERA() > 7000)
        {
            SET_CAM_ACTIVE( l_U877[63], 1 );
            SET_CAM_ACTIVE( l_U877[64], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U877[65], l_U877[63], l_U877[64], 10000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[65], 3, 3, 1, 1 );
            SET_CAM_ACTIVE( l_U877[65], 1 );
            SET_CAM_PROPAGATE( l_U877[65], 1 );
            SET_CAM_ACTIVE( l_U877[59], 0 );
            SET_CAM_PROPAGATE( l_U877[59], 0 );
            CLEAR_HELP();
            PRINT_HELP( "APTSAV" );
            SETTIMERA( 0 );
            l_U1077 = 5;
        }
        break;
        case 5:
        if (TIMERA() > 7000)
        {
            SET_CAM_ACTIVE( l_U877[66], 1 );
            SET_CAM_ACTIVE( l_U877[67], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U877[68], l_U877[66], l_U877[67], 10000, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U877[68], 3, 3, 1, 1 );
            SET_CAM_ACTIVE( l_U877[68], 1 );
            SET_CAM_PROPAGATE( l_U877[68], 1 );
            SET_CAM_ACTIVE( l_U877[65], 0 );
            SET_CAM_PROPAGATE( l_U877[65], 0 );
            CLEAR_HELP();
            PRINT_HELP( "APTWDB" );
            SETTIMERA( 0 );
            l_U1077 = 6;
        }
        break;
        case 6:
        if ((l_U1080) || ((TIMERA() > 7000) || (IS_KEYBOARD_KEY_JUST_PRESSED( 2 ))))
        {
            sub_42389( ref l_U877[54], ref l_U877[55], ref l_U877[56] );
            sub_42389( ref l_U877[57], ref l_U877[58], ref l_U877[59] );
            sub_42389( ref l_U877[60], ref l_U877[61], ref l_U877[62] );
            sub_42389( ref l_U877[63], ref l_U877[64], ref l_U877[65] );
            sub_42389( ref l_U877[66], ref l_U877[67], ref l_U877[68] );
            CLEAR_HELP();
            sub_42258();
            sub_43402();
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_GAME_CAM_PITCH( 0.00000000 );
            SET_CAM_BEHIND_PED( sub_917() );
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            if (l_U1080)
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_917() );
                SET_CHAR_COORDINATES( sub_917(), -434.68610000, 1393.91400000, 15.45760000 );
                SET_CHAR_HEADING( sub_917(), 0.00000000 );
                uVar4 = GET_HASH_KEY( "E2_luisapartment" );
                GET_INTERIOR_AT_COORDS( -431.09890000, 1397.10600000, 17.37085000, ref uVar3 );
                LOAD_SCENE_FOR_ROOM_BY_KEY( uVar3, uVar4 );
                SET_ROOM_FOR_CHAR_BY_NAME( sub_917(), "E2_luisapartment" );
                SET_GAME_CAM_HEADING( 0.00000000 );
                WAIT( 500 );
                DO_SCREEN_FADE_IN( 500 );
            }
            SET_PLAYER_CONTROL( sub_4777(), 1 );
            l_U1077 = 7;
            sub_85907();
        }
        break;
    }
    return;
}

void sub_85907()
{
    sub_85916();
    g_U25 = 80;
    if (NOT g_U0)
    {
        CANCEL_OVERRIDE_RESTART();
    }
    CLEAR_WANTED_LEVEL( sub_4777() );
    sub_92558( 0, "E2T1_CALL2", "E2T1AUD", 0 );
    g_U43104[0] = 0;
    SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 0 );
    sub_93266( 27 );
    UNLOCK_MISSION_NEWS_STORY( 71 );
    sub_8529();
    return;
}

void sub_85916()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_85934();
    sub_85993( iVar2, iVar3, iVar4 );
    return;
}

void sub_85934()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U333[I] = 4;
    }
    return;
}

void sub_85993(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_86023( iVar5, uParam0, uParam1, uParam2, "GayTony" );
    return;
}

void sub_86023(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_86051();
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
            sub_86225( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_86225( ref cVar9 );
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
            sub_86225( ref cVar9 );
            return;
        }
        if (g_U14925[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_86225( ref cVar9 );
            return;
        }
        iVar7 = g_U14925[uParam0]._fU160._fU76;
    }
    else if (g_U14925[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_86225( ref cVar9 );
        return;
    }
    if (g_U14925[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_86225( ref cVar9 );
        return;
    }
    iVar7 = g_U14925[uParam0]._fU0._fU4;
    iVar8 = sub_86802( uParam0, iVar7 );;;
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
    if (NOT (sub_87250( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14925[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_4777() );
    sub_7521();
    bVar28 = true;
    uVar29 = sub_86802( uParam0, iVar7 );
    uVar30 = sub_7141( uParam0 );
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
                sub_91524( 9, ref g_U14925[uParam0]._fU0._fU24 );
                if ((g_U12379) AND (NOT bVar28))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_86051();
                    g_U10953._fU8 = 1;
                    g_U10953._fU20 = sub_91975( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_92054( uParam0 );
                sub_92093( 0 );
                sub_7419( uVar30, 0 );
                g_U11076 = 0;
            }
            g_U12382[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_92268();
        }
    }
    if (bParam2)
    {
        sub_86051();
        sub_92367();
        sub_92093( 0 );
        g_U11062 = 1;
        g_U11076 = 0;
    }
    if (bParam3)
    {
        sub_86051();
        sub_92419();
        sub_92093( 0 );
        sub_7419( uVar30, 0 );
    }
    sub_7028();
    return;
}

void sub_86051()
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

void sub_86225(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_86802(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_7372( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_87250(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_87346( uParam1 );
        break;
        case 1:
        bVar8 = sub_88227( uParam1 );
        break;
        case 2:
        bVar8 = sub_88416( uParam1 );
        break;
        case 3:
        bVar8 = sub_88634( uParam1 );
        break;
        case 4:
        bVar8 = sub_89232( uParam1 );
        break;
        case 5:
        bVar8 = sub_89365( uParam1 );
        break;
        case 6:
        bVar8 = sub_89562( uParam1 );
        break;
        case 7:
        bVar8 = sub_89699( uParam1 );
        break;
        case 8:
        bVar8 = sub_89848( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_88845( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_86802( uParam0, uParam1 );
    if (bParam3)
    {
        sub_90066( uVar9, uParam0 );
    }
    return 1;
}

int sub_87346(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_87513( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        sub_87513( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_87513( iVar3, 1500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_87513( iVar3, 500, 0, 0, 0, 0 );
        break;
        case 5:
        sub_87513( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 6:
        sub_87513( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 7:
        sub_87513( iVar3, 3000, 5, 2, 0, 0 );
        break;
        case 8:
        sub_87513( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 9:
        sub_87513( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 10:
        sub_87513( iVar3, 4500, 5, 2, 0, 0 );
        break;
        case 11:
        sub_87513( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 12:
        sub_87513( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 0:
        case 13:
        case 14:
        case 15:
        case 16: break;
        default:
        sub_88135( "Gay Tony", 1 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_88135( "Gay Tony", 0 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_87513(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_87524( uParam1 );
    sub_87698( uParam0, 0, uParam2 );
    sub_87698( uParam0, 1, uParam3 );
    sub_87698( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_85934();
    return;
}

void sub_87524(unknown uParam0)
{
    ADD_SCORE( sub_4777(), uParam0 );
    sub_87549( uParam0 );
    return;
}

void sub_87549(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_7372( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_87698(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_88135(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_88227(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_87513( iVar3, 500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_87513( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_87513( iVar3, 1500, 5, 2, 0, 0 );
        break;
        default:
        sub_88135( "Mori", 1 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_88135( "Mori", 0 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_88416(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_87513( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_87513( iVar3, 15000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_87513( iVar3, 20000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_87513( iVar3, 25000, 5, 2, 0, 0 );
        break;
        default:
        sub_88135( "Yusuf", 1 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_88135( "Yusuf", 0 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_88634(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_87513( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_87513( iVar3, 2500, 5, 2, 0, 0 );
        break;
        case 2:
        sub_87513( iVar3, 0, sub_88723(), sub_88989(), 0, 0 );
        break;
        default:
        sub_88135( "Dominicans", 1 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_88135( "Dominicans", 0 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_88723()
{
    switch (l_U333[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_88845( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_88845(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_88989()
{
    switch (l_U333[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_88845( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_89232(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_87513( iVar3, 1000, 5, 2, 0, 0 );
        break;
        default:
        sub_88135( "Mum", 1 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_88135( "Mum", 0 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_89365(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_87513( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_87513( iVar3, 4000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_87513( iVar3, 6000, 5, 2, 0, 0 );
        break;
        default:
        sub_88135( "Bulgarin", 1 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_88135( "Bulgarin", 0 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_89562(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_87513( iVar3, 5000, 5, 2, 0, 0 );
        break;
        default:
        sub_88135( "Rocco", 1 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_88135( "Rocco", 0 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_89699(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_87513( iVar3, 0, sub_88723(), sub_88989(), 0, 0 );
        break;
        default:
        sub_88135( "Henrique", 1 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_88135( "Henrique", 0 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_89848(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    if (bVar4)
    {
        sub_88135( "Reserve 1", 0 );
        sub_87513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_90066(int iParam0, int iParam1)
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
    if (sub_90127( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_90853( iParam1 );
    }
    return;
}

int sub_90127(int iParam0, int iParam1)
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
            sub_90267( 0, iVar6 );
            g_U14902[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U22960[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_90267(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_90437( 0 );
    return;
}

void sub_90437(boolean bParam0)
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
        sub_90682();
    }
    if ((NOT ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_90682()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_90853(int iParam0)
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
        sub_91092( 188 );
        SET_FLOAT_STAT( 188, fVar3 );
        break;
        case 1:
        sub_91092( 192 );
        SET_FLOAT_STAT( 192, fVar3 );
        break;
        case 2:
        sub_91092( 191 );
        SET_FLOAT_STAT( 191, fVar3 );
        break;
        case 3:
        sub_91092( 197 );
        SET_FLOAT_STAT( 197, fVar3 );
        break;
        case 4: break;
        case 5:
        sub_91092( 200 );
        SET_FLOAT_STAT( 200, fVar3 );
        break;
        case 6:
        sub_91092( 201 );
        SET_FLOAT_STAT( 201, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_91092(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_91524(unknown uParam0, unknown uParam1)
{
    sub_91543( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_91543(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_91975(int iParam0, int iParam1)
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

void sub_92054(unknown uParam0)
{
    sub_6889();
    g_U12382[uParam0]._fU120 = 0;
    return;
}

void sub_92093(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_92144( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_92144(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_92268()
{
    sub_92277();
    return;
}

void sub_92277()
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

void sub_92367()
{
    sub_92277();
    return;
}

void sub_92419()
{
    sub_92277();
    StrCopy( ref g_U10966, "FPASS", 16 );
    return;
}

void sub_92558(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_92602( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_92602(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_93266(int iParam0)
{
    if (iParam0 >= g_U1459)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_93353( iParam0 ))
    {
        sub_94403( iParam0 );
    }
    return;
}

int sub_93353(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1459[uParam0], 21 )) || (IS_BIT_SET( g_U1459[uParam0], 20 )))
    {
        return 0;
    }
    sub_93410( ref uVar3, 1, 0, 0 );
    sub_94022( uVar3, ref g_U1459[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1459[uParam0], 22, 31, g_U1459[0] );
    g_U1459[0]++;
    SET_BIT( ref g_U1459[uParam0], 20 );
    sub_18939( "\n ----------------------------------------------------------------" );
    sub_4512( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_18939( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_93410(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_93463( iParam0, uParam1, uParam2 );
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
        sub_93595( iParam0 + 0 );
    }
    return;
}

void sub_93463(int iParam0, int iParam1, int iParam2)
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
        sub_93595( iParam0 + 0 );
    }
    return;
}

void sub_93595(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_93626( iParam0->_fU4 )))
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

int sub_93626(unknown uParam0)
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

void sub_94022(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_94403(unknown uParam0)
{
    return;
}

void sub_94469()
{
    switch (l_U220)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_4777(), 1 );
        l_U220++;
        break;
        case 1:
        if (sub_81529( -433.17100000, 1396.41300000, 16.95700000, 1.60000000, 1.60000000, 1.60000000, 1, "T1_M11", 0, 0 ))
        {
            sub_17969( 13, 1 );
        }
        break;
    }
    return;
}

void sub_94614()
{
    switch (l_U220)
    {
        case 0:
        if (sub_58503( 0, "E2T1_PLACE2", "E2T1AUD", 1000, 1 ))
        {
            l_U220++;
        }
        break;
        case 1:
        if ((sub_61769() == 2) || (sub_61877( 0 )))
        {
            sub_85907();
        }
        break;
    }
    return;
}

void sub_94749()
{
    switch (l_U988)
    {
        case 0:
        l_U957 = 0;
        if (((g_U30145[1]) || (g_U30145[2])) AND (COMPARE_STRING( l_U955, "ALSEC" )))
        {
            if (l_U990)
            {
                if (sub_32842( l_U984, 1000 ))
                {
                    if (DOES_CHAR_EXIST( g_U30211 ))
                    {
                        if (IS_CHAR_INJURED( g_U30211 ))
                        {
                            l_U954 = "E2T1_TDIES";
                            l_U955 = "TROY_D";
                            l_U956 = l_U870;
                        }
                    }
                    if (DOES_CHAR_EXIST( g_U30212 ))
                    {
                        if (IS_CHAR_INJURED( g_U30212 ))
                        {
                            l_U954 = "E2T1_DDIES";
                            l_U955 = "DESS_D";
                            l_U956 = l_U870;
                        }
                    }
                    l_U990 = 0;
                    if (NOT (IS_CHAR_INJURED( l_U956 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_917(), l_U956, 30.00000000, 30.00000000, 30.00000000, 0 ))
                        {
                            sub_19106( l_U954, ref l_U967, 6, 1 );
                        }
                    }
                    l_U988++;
                }
            }
        }
        else
        {
            l_U990 = 0;
            if (NOT (IS_CHAR_INJURED( l_U956 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_917(), l_U956, 30.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    sub_19106( l_U954, ref l_U967, 6, 1 );
                }
            }
            l_U988++;
        }
        break;
        case 1:
        if (sub_28211( 1, 0 ))
        {
            if (NOT (sub_18827( l_U967 )))
            {
                sub_44460( l_U955 );
                sub_44549();
            }
        }
        break;
    }
    return;
}

void sub_95310(unknown uParam0, int iParam1, unknown uParam2)
{
    if (iParam1 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam1 )))
    {
        return;
    }
    g_U42871._fU0 = uParam0;
    g_U42871._fU4 = iParam1;
    g_U42871._fU8 = uParam2;
    g_U42871._fU12 = 0;
    if (g_U12379)
    {
        g_U42871._fU12 = 1;
    }
    return;
}

int sub_95539(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if ((LOCATE_CAR_3D( uParam0, 1486.21800000, 659.94900000, 27.34375000, 6.85010000, 1.85995000, 1.50320000, 0 )) || ((LOCATE_CAR_3D( uParam0, 1489.73600000, 655.86490000, 27.34340000, 14.29465000, 1.62000000, 1.50320000, 0 )) || (LOCATE_CAR_3D( uParam0, 1488.79000000, 642.08750000, 27.86900000, 18.29745000, 11.77195000, 1.50320000, 0 ))))
        {
            if (l_U987 == 0)
            {
                GET_GAME_TIMER( ref l_U987 );
            }
            else if (sub_32842( l_U987, uParam1 ))
            {
                return 1;
            }
        }
        else if (l_U987 != 0)
        {
            l_U987 = 0;
        }
    }
    return 0;
}

void sub_96177()
{
    int iVar2;

    switch (l_U991)
    {
        case 0:
        CREATE_CHAR( 26, -1446884113, -467.43100000, 152.37370000, 8.86880000, ref l_U992, 1 );
        GIVE_WEAPON_TO_CHAR( l_U992, 12, 2000, 0 );
        SET_CHAR_HEADING( l_U992, 270.00000000 );
        SET_CHAR_DECISION_MAKER( l_U992, l_U961 );
        SET_COMBAT_DECISION_MAKER( l_U992, l_U962 );
        TASK_START_SCENARIO_IN_PLACE( l_U992, "Scenario_Bouncer", -1082130432 );
        l_U993 = 1;
        l_U991++;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U992 )))
        {
            GET_CURRENT_CHAR_WEAPON( sub_917(), ref iVar2 );
            if (((iVar2 != 0) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4777(), l_U992 ))) || (((iVar2 != 0) AND (IS_PLAYER_TARGETTING_CHAR( sub_4777(), l_U992 ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U992, sub_917(), 0 ))))
            {
                TASK_COMBAT( l_U992, sub_917() );
                g_U30093[1] = 1;
                l_U991++;
            }
        }
        break;
    }
    if (l_U993)
    {
        if (IS_CHAR_INJURED( l_U992 ))
        {
            l_U954 = "E2T1_DDIES";
            l_U955 = "DESS_D";
            l_U956 = l_U870;
            sub_17969( 14, 1 );
            l_U993 = 0;
        }
    }
    return;
}

void sub_96631(unknown uParam0)
{
    if ((sub_96642( uParam0 )) > g_U43138[g_U43137]._fU12)
    {
        g_U43564 = 0;
    }
    else
    {
        g_U43564 = 1;
    }
    if (g_U43602 == 1)
    {
        g_U43613 = sub_97081();
        g_U43602 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if ((sub_96642( uParam0 )) < g_U43613)
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
        if ((FLOOR( (TO_FLOAT( sub_97679() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_97903();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_97679() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
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
        if ((FLOOR( (TO_FLOAT( sub_97679() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_97903();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_97679() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
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
        if ((FLOOR( (TO_FLOAT( sub_97679() )) / 1000 )) <= (FLOOR( (TO_FLOAT( g_U43138[g_U43137]._fU44 )) / 1000 )))
        {
            g_U43570 = 1;
        }
        else
        {
            g_U43570 = 0;
        }
        if (g_U43601 == 1)
        {
            g_U43615 = sub_97903();
            g_U43601 = 0;
        }
        if (g_U43133 == 1)
        {
            if (g_U43624 == 0)
            {
                if ((FLOOR( (TO_FLOAT( sub_97679() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43615 )) / 1000 )))
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
    if ((sub_99010( uParam0 )) >= g_U43138[g_U43137]._fU24)
    {
        g_U43565 = 1;
    }
    else
    {
        g_U43565 = 0;
    }
    if (g_U43606 == 1)
    {
        g_U43618 = sub_99208();
        g_U43606 = 0;
    }
    if (g_U43133 == 1)
    {
        if (g_U43624 == 0)
        {
            if ((sub_99010( uParam0 )) > g_U43618)
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

void sub_96642(unknown uParam0)
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
    g_U43559 = sub_96759( uParam0 );
    g_U43559 = TO_FLOAT( FLOOR( g_U43559 ) );
    if (g_U43559 < 0)
    {
        g_U43559 = 0;
    }
    return g_U43559;
}

float sub_96759(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float Result;
    unknown uVar7;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEALTH( uParam0, ref uVar7 );
        uVar3 = sub_96805( 100, TO_FLOAT( uVar7 ) );
        uVar4 = GET_PETROL_TANK_HEALTH( uParam0 );
        uVar5 = GET_ENGINE_HEALTH( uParam0 );
        Result = sub_96869( uVar3, sub_96869( uVar4, uVar5 ) );
        Result /= 10.00000000;
        Result = 100 - Result;
        return Result;
    }
    return 100.00000000;
}

void sub_96805(float Result, float fParam1)
{
    if (fParam1 < Result)
    {
        return Result;
    }
    return fParam1;
}

void sub_96869(float Result, float fParam1)
{
    if (Result < fParam1)
    {
        return Result;
    }
    return fParam1;
}

int sub_97081()
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

void sub_97679()
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

int sub_97903()
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

void sub_99010(unknown uParam0)
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

int sub_99208()
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
        return sub_99353( GET_INT_STAT( 530 ) );
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
        return sub_99353( GET_INT_STAT( 539 ) );
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

int sub_99353(int iParam0)
{
    return iParam0 / 1670;
}

void sub_99970()
{
    if (l_U222)
    {
        if ((NOT (IS_BUTTON_PRESSED( 0, 10 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 7 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 6 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 5 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 4 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 15 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 14 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 17 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 16 ))))))))))))))
        {
            l_U222 = 0;
        }
    }
    if ((sub_19011()) || (NOT l_U226))
    {
        WAIT( 0 );
    }
    else
    {
        l_U226 = 0;
    }
    return;
}

