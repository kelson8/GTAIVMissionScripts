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
    l_U508 = 0;
    l_U509 = 0;
    l_U510 = 0;
    l_U511 = -1870989171;
    l_U514 = -2137348917;
    l_U515 = -268530289;
    l_U558 = {0.00000000, 1.13800000, -1.00000000};
    l_U561 = {0.00000000, 0.00000000, 0.00000000};
    l_U569 = 0;
    l_U570 = 0;
    l_U584 = {0.00000000, 0.00000000, 0.00000000};
    l_U587 = 0.00000000;
    l_U588 = -1;
    l_U589 = 0;
    l_U590 = {0.00000000, -1.50000000, 1.00000000};
    l_U593 = {0.00000000, 0.00000000, 1.00000000};
    l_U596 = 40;
    l_U597 = 1750;
    l_U603 = 0;
    l_U606 = 1;
    l_U732 = 1;
    l_U733 = 0;
    l_U734 = 0;
    l_U735 = 0;
    l_U736 = 0;
    l_U737 = 0;
    l_U738 = 0;
    l_U739 = 0;
    l_U740 = 0;
    l_U741 = 0;
    l_U742 = 0;
    l_U743 = 0;
    l_U744 = 0;
    l_U745 = 0;
    l_U746 = 0;
    l_U747 = 0;
    l_U748 = 0;
    l_U749 = 0;
    l_U750 = 0;
    l_U751 = 0;
    l_U752 = 0;
    l_U753 = 1;
    l_U754 = 0;
    l_U755 = 0;
    l_U756 = 0;
    l_U757 = 0;
    l_U758 = 0;
    l_U759 = 0;
    l_U760 = 0;
    l_U761 = 0;
    l_U762 = 0;
    l_U763 = 0;
    l_U764 = 0;
    l_U765 = 0;
    l_U766 = 0;
    l_U767 = 0;
    l_U768 = 0;
    l_U769 = 0;
    l_U770 = 0;
    l_U794 = 0;
    l_U795 = 0;
    l_U796 = 0;
    sub_543();
    l_U602 = g_U10981[7]._fU144._fU32;
    g_U10981[7]._fU144._fU32 = 1;
    sub_678( "FRANCI2", 0 );
    sub_821();
    SET_MISSION_FLAG( 1 );
    CLEAR_AREA_OF_CARS( 96.18900000, -695.15110000, 13.77390000, 100.00000000 );
    if (NOT g_U9893._fU24)
    {
        CLEAR_AREA( 96.18900000, -695.15110000, 13.77390000, 100.00000000, 1 );
        sub_6799();
        GET_TIME_OF_DAY( ref l_U577, ref l_U579 );
    }
    if (NOT (DOES_BLIP_EXIST( l_U832 )))
    {
        ADD_BLIP_FOR_COORD( 80.18640000, -676.72760000, 14.76750000, ref l_U832 );
        CHANGE_BLIP_COLOUR( l_U832, 5 );
        SET_ROUTE( l_U832, 1 );
    }
    sub_9836();
    sub_10917( ref l_U832, 73.00000000, -641.31370000, 12.00050000, 276.21410000 );
    l_U505 = 2;
    l_U606 = 1;
    while (l_U606)
    {
        switch (l_U505)
        {
            case 0: break;
            case 1: break;
            case 2:
            sub_11097();
            break;
            case 3:
            sub_28532();
            break;
            case 4:
            sub_34973();
            break;
            case 5:
            sub_51151();
            break;
            case 6:
            sub_58256();
            break;
            case 7:
            sub_58902();
            break;
            case 8:
            sub_60287();
            break;
            case -1: break;
        }
        WAIT( 0 );
        if (l_U604 == 1)
        {
            CLEAR_HELP();
            CLEAR_WANTED_LEVEL( l_U1027 );
            sub_66165();
        }
        else if (l_U605 == 1)
        {
            CLEAR_HELP();
            sub_18743( ref l_U1048, 0 );
            sub_81107();
        }
    }
    sub_2964();
    return;
}

void sub_543()
{
    if (sub_552())
    {
        g_U64921 = 1;
    }
    return;
}

int sub_552()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_678(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_714())
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

int sub_714()
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

void sub_821()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_842();
        l_U605 = 1;
        l_U505 = -1;
        sub_2964();
    }
    return;
}

void sub_842()
{
    sub_851();
    return;
}

void sub_851()
{
    int iVar2;

    iVar2 = 11;
    sub_865( iVar2 );
    sub_2041( iVar2 );
    return;
}

void sub_865(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_909();
        sub_1070();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1178();
            sub_1217();
        }
    }
    sub_1293();
    sub_1394();
    uVar5 = sub_1507( uParam0 );
    sub_1948( uVar5, 0 );
    return;
}

void sub_909()
{
    sub_923( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1023();
    }
    return;
}

void sub_923(int iParam0)
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

void sub_1023()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1070()
{
    sub_1079();
    return;
}

void sub_1079()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1178()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1217()
{
    sub_1226();
    return;
}

void sub_1226()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1293()
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

void sub_1394()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1416();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1416()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1507(unknown uParam0)
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
    sub_1906( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1906(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1948(int iParam0, boolean bParam1)
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

void sub_2041(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2050();
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
        sub_2825();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2050()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2088( 5, g_U569[I] )) == 1))
        {
            if ((sub_2088( 1, g_U569[I] )) != 0)
            {
                sub_2374( I );
            }
        }
    }
    if (NOT sub_2540())
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

int sub_2088(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2374(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2459( g_U569 - 1 );
    return;
}

void sub_2459(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2540()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2088( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2825()
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

void sub_2964()
{
    int I;
    int iVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_DEAD( sub_2973() )))
    {
        SET_PLAYER_CONTROL_ADVANCED( sub_3027(), 1, 1, 1 );
    }
    PRINTSTRING( "*\n*\n*\n* ----> CLEANUP <---- *\n*\n*\n*\n" );
    g_U10981[7]._fU144._fU32 = l_U602;
    SET_USE_HIGHDOF( 0 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_ALL_RANDOM_PEDS_FLEE( l_U1027, 0 );
    ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3027(), 1 );
    CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED( l_U1027 );
    TASK_FLUSH_ROUTE();
    g_U2226 = 0;
    sub_3222( 7, "FM_ARROffice_00" );
    sub_3222( 7, "FM_MISC_06" );
    SET_FAKE_WANTED_LEVEL( 0 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_RANDOM_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SWITCH_PED_PATHS_ON( 54.75000000, -805.68000000, 1.00000000, 190.96000000, -680.31000000, 10.00000000 );
    SWITCH_PED_PATHS_ON( 126.70000000, -737.62000000, 1.00000000, 198.29000000, -574.59000000, 10.00000000 );
    SWITCH_PED_PATHS_ON( 44.28000000, -666.57000000, 6.00000000, 149.22000000, -580.64000000, 10.00000000 );
    SWITCH_PED_PATHS_ON( -35.22000000, -820.38000000, 1.00000000, -103.95000000, -245.04000000, 10.00000000 );
    if (DOES_PICKUP_EXIST( l_U1007 ))
    {
        REMOVE_PICKUP( l_U1007 );
    }
    sub_3817( 6, ref iVar3, ref uVar4 );
    if (NOT (iVar3 == 8))
    {
        sub_4077( iVar3, uVar4, 6 );
    }
    for ( I = 0; I <= 11; I++ )
    {
        if (DOES_BLIP_EXIST( l_U801[I] ))
        {
            REMOVE_BLIP( l_U801[I] );
        }
        if (NOT (IS_CHAR_DEAD( l_U924[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U924[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U924[I] );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U969 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U969 );
    }
    if (NOT (IS_CHAR_DEAD( l_U968 )))
    {
        FREEZE_CHAR_POSITION( l_U968, 0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U968 );
    }
    DESTROY_ALL_CAMS();
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    sub_4479();
    sub_4555();
    sub_4631();
    sub_4770();
    sub_4850();
    sub_4930();
    DESTROY_ALL_CAMS();
    sub_5014( 11 );
    sub_5717();
    l_U574 = 0;
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U514 );
    if (DOES_VEHICLE_EXIST( l_U853 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U853 );
    }
    for ( I = 0; I < l_U987; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U987[I] ))
        {
            DELETE_OBJECT( ref l_U987[I] );
        }
    }
    for ( I = 0; I < l_U992; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U992[I] ))
        {
            DELETE_OBJECT( ref l_U992[I] );
        }
    }
    if (DOES_OBJECT_EXIST( l_U1001 ))
    {
        DELETE_OBJECT( ref l_U1001 );
    }
    if (DOES_OBJECT_EXIST( l_U1002 ))
    {
        DELETE_OBJECT( ref l_U1002 );
    }
    if (DOES_OBJECT_EXIST( l_U1003 ))
    {
        DELETE_OBJECT( ref l_U1003 );
    }
    if (DOES_OBJECT_EXIST( l_U1004 ))
    {
        DELETE_OBJECT( ref l_U1004 );
    }
    if (DOES_OBJECT_EXIST( l_U1006 ))
    {
        DELETE_OBJECT( ref l_U1006 );
    }
    if (DOES_OBJECT_EXIST( l_U1005 ))
    {
        DELETE_OBJECT( ref l_U1005 );
    }
    for ( I = 0; I <= 14; I++ )
    {
        if (DOES_BLIP_EXIST( l_U814[I] ))
        {
            REMOVE_BLIP( l_U814[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U832 ))
    {
        REMOVE_BLIP( l_U832 );
    }
    if (DOES_BLIP_EXIST( l_U833 ))
    {
        REMOVE_BLIP( l_U833 );
    }
    if (DOES_BLIP_EXIST( l_U844 ))
    {
        REMOVE_BLIP( l_U844 );
    }
    if (DOES_BLIP_EXIST( l_U834 ))
    {
        REMOVE_BLIP( l_U834 );
    }
    if (DOES_BLIP_EXIST( l_U836 ))
    {
        PRINTSTRING( "\n ---> Outside Blip Removed <--- \n\n" );
        REMOVE_BLIP( l_U836 );
    }
    if (DOES_BLIP_EXIST( l_U837 ))
    {
        REMOVE_BLIP( l_U837 );
    }
    if (DOES_BLIP_EXIST( l_U839 ))
    {
        REMOVE_BLIP( l_U839 );
    }
    if (DOES_BLIP_EXIST( l_U840 ))
    {
        REMOVE_BLIP( l_U840 );
    }
    if (DOES_BLIP_EXIST( l_U842 ))
    {
        REMOVE_BLIP( l_U842 );
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, 79, 64857, 15, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -308312378, 95, 64854, 15, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 487482787, 95, 64851, 15, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 80, 64824, 5, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 71, 64822, 5, 0, 0.00000000 );
    FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 123.70000000, -667.20000000 + 0.30000000, 13.80000000, 1.50000000, 160926470, 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2973()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3027()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3222(int iParam0, string sParam1)
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
                    sub_3443();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3027(), 1 );
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

void sub_3443()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3817(int iParam0, unknown uParam1, unknown uParam2)
{
    int J;
    int I;

    for ( J = 0; J <= (7 - 1); J++ )
    {
        for ( I = 0; I <= 3; I++ )
        {
            if ((sub_3856( J, I )) == iParam0)
            {
                (uParam1^) = J;
                (uParam2^) = I;
                return;
            }
        }
    }
    (uParam1^) = 8;
    return;
}

int sub_3856(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

void sub_4077(unknown uParam0, unknown uParam1, int iParam2)
{
    if ((sub_3856( uParam0, uParam1 )) == iParam2)
    {
        sub_4108( uParam0, uParam1, 0 );
    }
    return;
}

void sub_4108(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU0, 0, 15, uParam2 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU0, 16, 31, uParam2 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU4, 0, 15, uParam2 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU4, 16, 31, uParam2 );
        break;
    }
    return;
}

void sub_4479()
{
    int I;

    for ( I = 0; I <= 13; I++ )
    {
        if (DOES_CHAR_EXIST( l_U953[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U953[I] );
        }
    }
    return;
}

void sub_4555()
{
    int I;

    for ( I = 0; I <= 11; I++ )
    {
        if (DOES_CHAR_EXIST( l_U924[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U924[I] );
        }
    }
    return;
}

void sub_4631()
{
    int I;
    int J;

    for ( I = 0; I <= 14; I++ )
    {
        if (DOES_CHAR_EXIST( l_U937[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U937[I] );
        }
    }
    J = 0;
    for ( J = 0; J <= 2; J++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U971[J] )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U971[J] );
        }
    }
    return;
}

void sub_4770()
{
    int I;

    if (l_U910 != 0)
    {
        for ( I = 0; I <= (l_U910 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U883[I] );
        }
    }
    l_U910 = 0;
    return;
}

void sub_4850()
{
    int I;

    if (l_U922 != 0)
    {
        for ( I = 0; I <= (l_U922 - 1); I++ )
        {
            REMOVE_ANIMS( l_U911[I] );
        }
    }
    l_U922 = 0;
    return;
}

void sub_4930()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U977[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U977[I] );
        }
    }
    return;
}

void sub_5014(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_5025( uParam0 ) );
    return;
}

int sub_5025(unknown uParam0)
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
    sub_1906( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5717()
{
    g_U965 = -1;
    return;
}

void sub_6799()
{
    if (IS_PLAYER_PLAYING( sub_3027() ))
    {
        sub_6832( g_U8371._fU0 );
        sub_7918( g_U8371._fU4 );
        sub_8605( g_U8371._fU8 );
        sub_9166( g_U8371._fU12 );
        sub_9191( g_U8371._fU16 );
        SET_CHAR_COMPONENT_VARIATION( sub_2973(), 4, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( sub_2973(), 3, 0, 0 );
    }
    return;
}

void sub_6832(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_6845( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_2973(), 1 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_2973(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_6845(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_7918(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_7931( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_2973(), 2 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_2973(), 2, iVar3, iVar4 );
    }
    return;
}

void sub_7931(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_8605(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_8618( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_2973(), 5 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_2973(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_8618(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_9166(int iParam0)
{
    int iVar3;
    int iVar4;

    if (iParam0 == 3)
    {
        sub_9166( -1 );
        sub_9191( -1 );
        if (((GET_CHAR_TEXTURE_VARIATION( sub_2973(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 8 )) != 1))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_2973(), 8, 1, 0 );
        }
    }
    else
    {
        sub_9446( iParam0, ref iVar3 );
        GET_CHAR_PROP_INDEX( sub_2973(), 0, ref iVar4 );
        if (((GET_CHAR_TEXTURE_VARIATION( sub_2973(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_2973(), 8, 0, 0 );
        }
        if (iVar4 != iVar3)
        {
            if (iVar3 < 0)
            {
                CLEAR_CHAR_PROP( sub_2973(), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( sub_2973(), 0, iVar3 );
            }
        }
    }
    return;
}

void sub_9191(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_9203( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_2973(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_2973(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_2973(), 1, iVar3 );
        }
    }
    return;
}

void sub_9203(unknown uParam0, unknown uParam1)
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

void sub_9446(unknown uParam0, unknown uParam1)
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

void sub_9836()
{
    sub_9846( 1 );
    SET_ALL_RANDOM_PEDS_FLEE( l_U1027, 1 );
    sub_9892( "FM2AUD" );
    sub_10019( 0, sub_2973(), "Niko", 0 );
    l_U1026 = sub_2973();
    l_U1027 = sub_3027();
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 78.82000000, -705.50000000, 5.29300000, 90.00000000, 0, 0, ref l_U1007 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U1007, "Lobby2-Floor1" );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U1010 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U1009 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U1008 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1013 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U1014 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U1012 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1013, 0 );
    SET_RELATIONSHIP( 1, 25, 3 );
    SET_RELATIONSHIP( 1, 3, 25 );
    SET_RELATIONSHIP( 1, 24, 3 );
    SET_RELATIONSHIP( 1, 3, 24 );
    sub_10391( -1134712978 );
    sub_10391( -1356924456 );
    sub_10391( -1284047560 );
    sub_10391( -1870989171 );
    sub_10391( -856231214 );
    sub_10391( 2142137743 );
    sub_10391( 449617953 );
    while (NOT sub_10503())
    {
        WAIT( 0 );
    }
    sub_10622( "missfrancis2" );
    sub_10622( "gestures@niko" );
    while (NOT sub_10695())
    {
        WAIT( 0 );
    }
    OPEN_SEQUENCE_TASK( ref l_U877 );
    TASK_GO_STRAIGHT_TO_COORD( 0, 156.31520000, 503.82290000, 15.17200000, 2, 8000 );
    if (NOT (IS_CHAR_DEAD( l_U1026 )))
    {
        TASK_LOOK_AT_CHAR( 0, l_U1026, 30000, 0 );
    }
    CLOSE_SEQUENCE_TASK( l_U877 );
    return;
}

void sub_9846(unknown uParam0)
{
    g_U965 = uParam0;
    return;
}

void sub_9892(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_9911();
    return;
}

void sub_9911()
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

void sub_10019(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_10103( "\n PED NUMBER ", uParam0 );
    sub_10143( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_10103(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_10143(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_10391(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U883[l_U910] = uParam0;
    l_U910++;
    return;
}

int sub_10503()
{
    int I;

    if (l_U910 != 0)
    {
        for ( I = 0; I <= (l_U910 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U883[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_10622(unknown uParam0)
{
    REQUEST_ANIMS( uParam0 );
    l_U911[l_U922] = uParam0;
    l_U922++;
    return;
}

int sub_10695()
{
    int I;

    if (l_U922 != 0)
    {
        for ( I = 0; I <= (l_U922 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U911[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_10917(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_11097()
{
    int iVar2;
    int I;
    float fVar4;
    float fVar5;
    int iVar6;
    unknown uVar7;
    int J;

    if (l_U622 == 0)
    {
        REGISTER_SCRIPT_WITH_AUDIO( 0 );
        while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\FM2_FINAL_INTERVIEW" )))
        {
            PRINTSTRING( "\n\n   ----> Load Audio <---- \n\n\n" );
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL( l_U1027, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U832 )))
        {
            ADD_BLIP_FOR_COORD( 80.18640000, -676.72760000, 14.76750000, ref l_U832 );
            CHANGE_BLIP_COLOUR( l_U832, 5 );
            SET_ROUTE( l_U832, 1 );
        }
        l_U622 = 1;
    }
    if ((l_U624 == 0) AND (l_U623 == 0))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 80.30060000, -677.84530000, 14.76750000, 120.00000000, 120.00000000, 120.00000000, 0 ))
        {
            ADD_SCENARIO_BLOCKING_AREA( 73, 64859, 12, 77, 64863, 16 );
            ADD_SCENARIO_BLOCKING_AREA( 92.62000000, -695.99000000, 13.00000000, 97.68000000, -691.85000000, 15.00000000 );
            CLEAR_AREA( 96.18900000, -695.15110000, 13.77390000, 5.00000000, 1 );
            sub_11484();
            sub_11867();
            sub_12939();
            while (iVar2 == nil)
            {
                GET_INTERIOR_AT_COORDS( 81.22050000, -684.07780000, 13.76340000, ref iVar2 );
                PRINTSTRING( "\n\n   ----> Get Interior Coords <---- \n\n\n" );
                WAIT( 0 );
            }
            ACTIVATE_INTERIOR( iVar2, 1 );
            sub_13063();
            CREATE_OBJECT( 449617953, 122.41000000, -668.51000000, 14.58000000, ref l_U1003, 1 );
            SET_OBJECT_HEADING( l_U1003, 50.00000000 );
            FREEZE_OBJECT_POSITION( l_U1003, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1003, "GtaMloRoom08" );
            CREATE_OBJECT( -856231214, 118.75740000, -686.05930000, 13.76670000, ref l_U1001, 1 );
            SET_OBJECT_HEADING( l_U1001, 25.50000000 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1001, "GtaMloRoom06" );
            l_U623 = 1;
        }
    }
    if ((l_U732 == 1) AND (IS_WANTED_LEVEL_GREATER( l_U1027, 0 )))
    {
        if (DOES_BLIP_EXIST( l_U832 ))
        {
            REMOVE_BLIP( l_U832 );
        }
        PRINT_NOW( "FM_COMMAND_17", 7500, 1 );
        l_U732 = 0;
    }
    if ((l_U732 == 0) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U1027, 0 ))))
    {
        if (NOT (DOES_BLIP_EXIST( l_U832 )))
        {
            ADD_BLIP_FOR_COORD( 80.18640000, -676.72760000, 14.76750000, ref l_U832 );
            CHANGE_BLIP_COLOUR( l_U832, 5 );
            SET_ROUTE( l_U832, 1 );
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 80.18640000, -676.72760000, 14.76750000, 15.00000000, 15.00000000, 15.00000000, 0 ))
        {
            PRINT_NOW( "FM_COMMAND_41", 7500, 1 );
        }
        else
        {
            PRINT_NOW( "FM_COMMAND_05", 7500, 1 );
        }
        l_U732 = 1;
    }
    if ((l_U605 == 0) AND (IS_CHAR_SHOOTING_IN_AREA( l_U1026, 62.13000000, -721.77000000, 132.51000000, -654.90000000, 0 )))
    {
        I = 0;
        for ( I = 0; I <= 11; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U924[I] )))
            {
                SET_CHAR_RELATIONSHIP( l_U924[I], 5, 0 );
                TASK_COMBAT( l_U924[I], l_U1026 );
            }
        }
        PRINT_NOW( "FM_FAIL_02", 7000, 1 );
        SET_WANTED_MULTIPLIER( 0.50000000 );
        ALTER_WANTED_LEVEL( l_U1027, 1 );
        APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
        sub_13967( 11, "FM2_CGUN", "FM2AUD", 0 );
        WAIT( 3000 );
        l_U605 = 1;
        l_U648 = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 80.30060000, -677.84530000, 14.76750000 + 1.00000000, 10.00000000, 10.00000000, 10.00000000, 0 ))
    {
        g_U2226 = 1;
    }
    else
    {
        g_U2226 = 0;
    }
    if ((l_U605 == 0) AND ((l_U732 == 1) AND (l_U624 == 0)))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 80.30060000, -677.84530000, 14.76750000 + 1.00000000, 1.50000000, 1.50000000, 2.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 80.30060000, -677.84530000, 14.76750000 + 1.00000000, 1.00000000, 1.00000000, 2.00000000, 1 )))
        {
            if (sub_14781())
            {
                CLEAR_PRINTS();
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_OUT( 500 );
                }
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                sub_15397();
                l_U624 = 1;
            }
            else if ((NOT sub_14881()) AND (NOT sub_14790()))
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_03" );
                sub_19250( 35 );
                if ((l_U603 == 0) AND (NOT IS_SCREEN_FADED_IN()))
                {
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                    l_U603 = 1;
                    WAIT( 1000 );
                }
                SETTIMERA( 0 );
            }
            else if (NOT sub_14790())
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_01" );
                sub_19250( 35 );
                if ((l_U603 == 0) AND (NOT IS_SCREEN_FADED_IN()))
                {
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                    l_U603 = 1;
                    WAIT( 1000 );
                }
                SETTIMERA( 0 );
            }
            else if (NOT sub_14881())
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_02" );
                sub_19250( 35 );
                if ((l_U603 == 0) AND (NOT IS_SCREEN_FADED_IN()))
                {
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                    l_U603 = 1;
                    WAIT( 1000 );
                }
                SETTIMERA( 0 );
            }
            else if (NOT sub_14969())
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_04" );
                sub_19250( 35 );
                if ((l_U603 == 0) AND (NOT IS_SCREEN_FADED_IN()))
                {
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                    l_U603 = 1;
                    WAIT( 1000 );
                }
                SETTIMERA( 0 );
            }
            else if (NOT sub_15109())
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_06" );
                if ((l_U603 == 0) AND (NOT IS_SCREEN_FADED_IN()))
                {
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                    l_U603 = 1;
                    WAIT( 1000 );
                }
                SETTIMERA( 0 );
            }
            else
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_03" );
                sub_19250( 35 );
                if ((l_U603 == 0) AND (NOT IS_SCREEN_FADED_IN()))
                {
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                    l_U603 = 1;
                    WAIT( 1000 );
                }
                SETTIMERA( 0 );
            };;;;;;
        }
        else if ((g_U9893._fU24 == 1) AND ((l_U603 == 0) AND (NOT IS_SCREEN_FADED_IN())))
        {
            PRINTSTRING( "\n -----> FADE IN <----- \n\n" );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            DO_SCREEN_FADE_IN( 500 );
            l_U603 = 1;
            WAIT( 1000 );
        }
    }
    if ((l_U732 == 1) AND ((l_U739 == 0) AND (l_U624 == 1)))
    {
        if ((NOT (IS_CHAR_DEAD( l_U969 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 94.51380000, -694.88660000, 14.76120000, 15.00000000, 15.00000000, 15.00000000, 0 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U881 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1026 );
            TASK_LOOK_AT_CHAR( 0, l_U1026, 15000, 0 );
            CLOSE_SEQUENCE_TASK( l_U881 );
            CLEAR_CHAR_TASKS( l_U969 );
            TASK_PERFORM_SEQUENCE( l_U969, l_U881 );
            CLEAR_SEQUENCE_TASK( l_U881 );
            l_U739 = 1;
        }
    }
    if ((l_U605 == 0) AND ((l_U732 == 1) AND ((NOT (IS_CHAR_DEAD( l_U969 ))) AND (l_U624 == 1))))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1026, l_U969, 3.50000000 + 0.50000000, 3.50000000 + 0.50000000, 3.50000000 + 0.50000000, 0 ))
        {
            while (l_U772[6] == 0)
            {
                if (l_U772[0] == 0)
                {
                    if (DOES_BLIP_EXIST( l_U844 ))
                    {
                        REMOVE_BLIP( l_U844 );
                    }
                    CLEAR_CHAR_TASKS( l_U1026 );
                    SET_PLAYER_CONTROL( l_U1027, 0 );
                    DISPLAY_RADAR( 0 );
                    DISPLAY_HUD( 0 );
                    SET_WIDESCREEN_BORDERS( 1 );
                    BEGIN_CAM_COMMANDS( ref l_U876 );
                    CREATE_CAM( 14, ref l_U855 );
                    CREATE_CAM( 14, ref l_U856 );
                    CREATE_CAM( 14, ref l_U857 );
                    CREATE_CAM( 14, ref l_U858 );
                    CREATE_CAM( 14, ref l_U859 );
                    CREATE_CAM( 3, ref l_U875 );
                    SET_CAM_POS( l_U856, 93.55664000, -697.04190000, 15.23060000 );
                    SET_CAM_ROT( l_U856, -2.63959700, -0.00000000, -33.41496000 );
                    fVar4 = 52;
                    SET_CAM_FOV( l_U856, fVar4 );
                    SET_CAM_POS( l_U855, 96.14877000, -696.14690000, 15.14242000 );
                    SET_CAM_ROT( l_U855, -2.41043400, 0.00000000, 22.57148000 );
                    SET_CAM_FOV( l_U855, 36 );
                    SET_CAM_POS( l_U855, 96.10701000, -696.03420000, 15.41760000 );
                    SET_CAM_ROT( l_U855, -13.63238000, -0.00000000, 19.82128000 );
                    SET_CAM_FOV( l_U855, 45 );
                    fVar5 = 45;
                    SET_CAM_POS( l_U857, 95.86746000, -695.30100000, 14.95976000 );
                    SET_CAM_ROT( l_U857, -5.04603400, -0.00000000, 34.69918000 );
                    SET_CAM_FOV( l_U857, 48 );
                    SET_CAM_POS( l_U858, 93.22604000, -694.33480000, 15.35546000 );
                    SET_CAM_ROT( l_U858, -1.72285900, -0.00000000, -94.21633000 );
                    SET_CAM_FOV( l_U858, 30 );
                    SET_CAM_POS( l_U859, 94.99918000, -694.93980000, 15.06535000 );
                    SET_CAM_ROT( l_U859, -0.23317500, 0.00000000, -86.40507000 );
                    SET_CAM_FOV( l_U859, 50 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1026 );
                    SET_CHAR_COORDINATES( l_U1026, 94.11150000, -694.11240000, 13.77390000 );
                    SET_CHAR_HEADING( l_U1026, 254.95130000 );
                    FREEZE_CHAR_POSITION( l_U1026, 1 );
                    SET_CAM_ACTIVE( l_U859, 1 );
                    SET_CAM_PROPAGATE( l_U859, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    if (NOT (IS_CHAR_DEAD( l_U969 )))
                    {
                        SET_CHAR_COORDINATES( l_U969, 96.18900000, -695.15110000, 13.77390000 );
                        FREEZE_CHAR_POSITION( l_U969, 1 );
                        OPEN_SEQUENCE_TASK( ref l_U881 );
                        TASK_LOOK_AT_CHAR( 0, l_U969, 30000, 0 );
                        CLOSE_SEQUENCE_TASK( l_U881 );
                        CLEAR_CHAR_TASKS( l_U1026 );
                        TASK_PERFORM_SEQUENCE( l_U1026, l_U881 );
                        CLEAR_SEQUENCE_TASK( l_U881 );
                        OPEN_SEQUENCE_TASK( ref l_U881 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1026 );
                        TASK_LOOK_AT_CHAR( 0, l_U1026, 30000, 0 );
                        CLOSE_SEQUENCE_TASK( l_U881 );
                        CLEAR_CHAR_TASKS( l_U969 );
                        TASK_PERFORM_SEQUENCE( l_U969, l_U881 );
                        CLEAR_SEQUENCE_TASK( l_U881 );
                    }
                    sub_16890( "FM2_WAIT3", 0, 1, ref l_U1048, 6, 1 );
                    SETTIMERA( 0 );
                    SETTIMERB( 0 );
                    l_U772[0] = 1;
                }
                if ((l_U772[1] == 0) AND ((l_U772[0] == 1) AND (NOT (sub_17960( l_U1048 )))))
                {
                    if (NOT (IS_CHAR_DEAD( l_U969 )))
                    {
                        SET_CAM_PROPAGATE( l_U859, 0 );
                        SET_CAM_ACTIVE( l_U856, 1 );
                        SET_CAM_PROPAGATE( l_U856, 1 );
                        FREEZE_CHAR_POSITION( l_U1026, 0 );
                        FREEZE_CHAR_POSITION( l_U969, 0 );
                        OPEN_SEQUENCE_TASK( ref l_U882 );
                        TASK_LOOK_AT_COORD( 0, 95.69000000, -695.03000000, 14.95000000, 15000, 0 );
                        TASK_PLAY_ANIM( 0, "Press_Coms", "missfrancis2", 4, 0, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U882 );
                        TASK_PERFORM_SEQUENCE( l_U969, l_U882 );
                        CLEAR_SEQUENCE_TASK( l_U882 );
                        WAIT( 500 );
                        PLAY_SOUND_FROM_POSITION( -1, "FM2_FINAL_INTERVIEW_PUSH_PHONE_BUTTON", 95.65000000, -695.00000000, 14.95000000 );
                        WAIT( 1000 );
                        sub_16890( "FM2_WAIT3", 1, 1, ref l_U1048, 6, 1 );
                    }
                    SETTIMERA( 0 );
                    l_U772[1] = 1;
                }
                if ((l_U772[2] == 0) AND ((l_U772[1] == 1) AND (NOT (sub_17960( l_U1048 )))))
                {
                    fVar5 += 4;
                    SET_CAM_PROPAGATE( l_U856, 0 );
                    SET_CAM_ACTIVE( l_U855, 1 );
                    SET_CAM_PROPAGATE( l_U855, 1 );
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                    PRINT_NOW( "FM_MISC_09", 3000, 1 );
                    sub_10019( 2, 0, "Goldberg_M", 0 );
                    SETTIMERA( 0 );
                    l_U772[2] = 1;
                }
                if ((l_U772[3] == 0) AND ((l_U772[2] == 1) AND (TIMERA() > 3000)))
                {
                    if (NOT (IS_CHAR_DEAD( l_U969 )))
                    {
                        SET_CAM_PROPAGATE( l_U856, 0 );
                        SET_CAM_ACTIVE( l_U857, 1 );
                        SET_CAM_PROPAGATE( l_U857, 1 );
                        sub_16890( "FM2_WAIT3", 2, 1, ref l_U1048, 6, 1 );
                    }
                    SETTIMERA( 0 );
                    l_U772[3] = 1;
                }
                if ((l_U772[4] == 0) AND ((l_U772[3] == 1) AND (NOT (sub_17960( l_U1048 )))))
                {
                    if (NOT (IS_CHAR_DEAD( l_U969 )))
                    {
                        SET_CAM_PROPAGATE( l_U857, 0 );
                        SET_CAM_ACTIVE( l_U856, 1 );
                        SET_CAM_PROPAGATE( l_U856, 1 );
                        TASK_LOOK_AT_CHAR( l_U969, l_U1026, 8000, 0 );
                        sub_16890( "FM2_WAIT3", 3, 1, ref l_U1048, 6, 1 );
                        fVar4 += 4;
                    }
                    SETTIMERA( 0 );
                    l_U772[4] = 1;
                }
                if ((l_U772[5] == 0) AND ((l_U772[4] == 1) AND (TIMERA() > 500)))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -308312378, 95, 64854, 15, 0, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 487482787, 95, 64851, 15, 0, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 0, 0.00000000 );
                    WAIT( 0 );
                    if (NOT (IS_CHAR_INJURED( l_U969 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U881 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 118.23230000, -674.92380000, 13.76670000, 2, 45000, 1.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1026 );
                        CLOSE_SEQUENCE_TASK( l_U881 );
                        CLEAR_CHAR_TASKS( l_U969 );
                        TASK_PERFORM_SEQUENCE( l_U969, l_U881 );
                        CLEAR_SEQUENCE_TASK( l_U881 );
                    }
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    SETTIMERA( 0 );
                    l_U772[5] = 1;
                }
                fVar5 -= 0.03000000;
                SET_CAM_FOV( l_U855, fVar5 );
                fVar4 -= 0.03000000;
                SET_CAM_FOV( l_U856, fVar4 );
                if ((l_U772[6] == 0) AND ((l_U772[5] == 1) AND (NOT (sub_17960( l_U1048 )))))
                {
                    sub_16890( "FM2_WAIT", 5, 1, ref l_U1048, 6, 1 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    END_CAM_COMMANDS( ref l_U876 );
                    DISPLAY_RADAR( 1 );
                    DISPLAY_HUD( 1 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    SET_PLAYER_CONTROL( l_U1027, 1 );
                    SET_CAM_ACTIVE( l_U856, 0 );
                    SET_CAM_PROPAGATE( l_U856, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DESTROY_CAM( l_U855 );
                    sub_10019( 2, l_U968, "Goldberg_M", 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    if (NOT (DOES_BLIP_EXIST( l_U844 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U969, ref l_U844 );
                        SET_BLIP_AS_FRIENDLY( l_U844, 1 );
                    }
                    WAIT( 1000 );
                    PRINT_NOW( "FM_COMMAND_40", 7500, 1 );
                    CLEAR_CHAR_TASKS( l_U1026 );
                    TASK_CLEAR_LOOK_AT( l_U1026 );
                    l_U505++;
                    SETTIMERA( 0 );
                    l_U772[6] = 1;
                }
                if ((l_U772[6] == 0) AND ((TIMERB() > 1000) AND ((IS_SCREEN_FADED_IN()) AND (sub_18617()))))
                {
                    SETTIMERA( 5000 );
                    DO_SCREEN_FADE_OUT( 500 );
                    sub_18743( ref l_U1048, 0 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -308312378, 95, 64854, 15, 0, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 487482787, 95, 64851, 15, 0, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 0, 0.00000000 );
                    FREEZE_CHAR_POSITION( l_U1026, 0 );
                    if (NOT (IS_CHAR_DEAD( l_U969 )))
                    {
                        FREEZE_CHAR_POSITION( l_U969, 0 );
                    }
                    if (l_U772[5] == 0)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U969 )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U881 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 118.23230000, -674.92380000, 13.76670000, 2, 45000, 1.00000000 );
                            TASK_ACHIEVE_HEADING( 0, 99.11740000 );
                            CLOSE_SEQUENCE_TASK( l_U881 );
                            CLEAR_CHAR_TASKS( l_U969 );
                            TASK_PERFORM_SEQUENCE( l_U969, l_U881 );
                            CLEAR_SEQUENCE_TASK( l_U881 );
                        }
                    }
                    SET_WIDESCREEN_BORDERS( 0 );
                    END_CAM_COMMANDS( ref l_U876 );
                    CLEAR_CHAR_TASKS( l_U1026 );
                    DISPLAY_RADAR( 1 );
                    DISPLAY_HUD( 1 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 500 );
                    SET_PLAYER_CONTROL( l_U1027, 1 );
                    SET_CAM_ACTIVE( l_U855, 0 );
                    SET_CAM_PROPAGATE( l_U855, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DESTROY_CAM( l_U855 );
                    sub_10019( 2, l_U968, "Goldberg_M", 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    if (NOT (DOES_BLIP_EXIST( l_U844 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U969, ref l_U844 );
                        SET_BLIP_AS_FRIENDLY( l_U844, 1 );
                    }
                    CLEAR_CHAR_TASKS( l_U1026 );
                    TASK_CLEAR_LOOK_AT( l_U1026 );
                    WAIT( 1000 );
                    DO_SCREEN_FADE_IN( 500 );
                    WAIT( 500 );
                    PRINT_NOW( "FM_COMMAND_40", 7500, 1 );
                    l_U772[0] = 1;
                    l_U772[1] = 1;
                    l_U772[2] = 1;
                    l_U772[3] = 1;
                    l_U772[4] = 1;
                    l_U772[5] = 1;
                    l_U772[6] = 1;
                    l_U505++;
                }
                WAIT( 0 );
            }
        }
    }
    GET_KEY_FOR_CHAR_IN_ROOM( l_U1026, ref l_U570 );
    if (l_U570 != 0)
    {
        if (l_U763 == 0)
        {
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            SET_PARKED_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            SET_RANDOM_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            SWITCH_PED_PATHS_OFF( 54.75000000, -805.68000000, 1.00000000, 190.96000000, -680.31000000, 10.00000000 );
            SWITCH_PED_PATHS_OFF( 126.70000000, -737.62000000, 1.00000000, 198.29000000, -574.59000000, 10.00000000 );
            SWITCH_PED_PATHS_OFF( 44.28000000, -666.57000000, 6.00000000, 149.22000000, -580.64000000, 10.00000000 );
            SWITCH_PED_PATHS_OFF( -35.22000000, -820.38000000, 1.00000000, -103.95000000, -245.04000000, 10.00000000 );
            l_U763 = 1;
        }
    }
    else if (l_U763 == 1)
    {
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_RANDOM_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( 54.75000000, -805.68000000, 1.00000000, 190.96000000, -680.31000000, 10.00000000 );
        SWITCH_PED_PATHS_ON( 126.70000000, -737.62000000, 1.00000000, 198.29000000, -574.59000000, 10.00000000 );
        SWITCH_PED_PATHS_ON( 44.28000000, -666.57000000, 6.00000000, 149.22000000, -580.64000000, 10.00000000 );
        SWITCH_PED_PATHS_ON( -35.22000000, -820.38000000, 1.00000000, -103.95000000, -245.04000000, 10.00000000 );
        l_U763 = 0;
    }
    if ((l_U605 == 0) AND ((l_U648 == 0) AND (l_U624 == 1)))
    {
        GET_CURRENT_CHAR_WEAPON( l_U1026, ref l_U581 );
        l_U571 = l_U581;
        GET_KEY_FOR_CHAR_IN_ROOM( l_U1026, ref l_U570 );
        if ((l_U570 != 0) AND ((l_U605 == 0) AND (IS_CHAR_ARMED( sub_2973(), 7 ))))
        {
            for ( I = 0; I <= 11; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U924[I] )))
                {
                    SET_CHAR_RELATIONSHIP( l_U924[I], 5, 0 );
                    TASK_COMBAT( l_U924[I], l_U1026 );
                }
            }
            PRINT_NOW( "FM_FAIL_02", 7000, 1 );
            SET_WANTED_MULTIPLIER( 0.50000000 );
            ALTER_WANTED_LEVEL( l_U1027, 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
            sub_13967( 11, "FM2_CGUN", "FM2AUD", 0 );
            WAIT( 3000 );
            l_U605 = 1;
            l_U648 = 1;
        }
        sub_24573();
    }
    if ((NOT (IS_CHAR_INJURED( l_U924[6] ))) AND ((NOT (sub_17960( l_U1048 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 95.33590000, -683.26240000, 14.76670000, 4.00000000, 4.00000000, 2.00000000, 0 ))))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 6000, 12000, ref l_U572 );
        if (TIMERB() > l_U572)
        {
            TASK_LOOK_AT_CHAR( l_U924[6], l_U1026, 5000, 0 );
            sub_27739( "FM2_STAY", ref l_U1048, 6, 0 );
            SETTIMERB( 0 );
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U924[7] ))) AND (l_U740 == 0))
    {
        if ((TIMERA() > 7000) AND ((NOT (sub_17960( l_U1048 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1026, l_U924[7], 4.00000000, 4.00000000, 4.00000000, 0 ))))
        {
            GET_TIME_OF_DAY( ref iVar6, ref uVar7 );
            TASK_LOOK_AT_CHAR( l_U924[7], l_U1026, 5000, 0 );
            if (iVar6 > 11)
            {
                sub_16890( "FM2_HELLO", 0, 1, ref l_U1048, 6, 1 );
            }
            else
            {
                sub_16890( "FM2_HELLO", 0, 1, ref l_U1048, 6, 1 );
            }
            l_U740 = 1;
        }
    }
    if ((l_U605 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 105.12730000, -683.10880000, 14.76670000, 4.00000000, 4.00000000, 2.00000000, 0 )))
    {
        J = 0;
        for ( J = 0; J <= 11; J++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U924[J] )))
            {
                SET_CHAR_RELATIONSHIP( l_U924[J], 5, 0 );
                TASK_COMBAT( l_U924[J], l_U1026 );
            }
        }
        ALTER_WANTED_LEVEL( l_U1027, 1 );
        APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
        WAIT( 3000 );
        l_U605 = 1;
    }
    if ((l_U605 == 0) AND ((l_U624 == 1) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 94.51380000, -694.88660000, 14.76120000, 80.00000000, 100.00000000, 50.00000000, 0 )))))
    {
        PRINT_NOW( "FM_FAIL_10", 7000, 1 );
        SET_WANTED_MULTIPLIER( 0.50000000 );
        sub_13967( 11, "MF4_FM1", "MF8AUD", 0 );
        l_U605 = 1;
        l_U648 = 1;
    }
    if (NOT g_U9893._fU24)
    {
        GET_TIME_OF_DAY( ref l_U578, ref l_U580 );
        if ((l_U605 == 0) AND ((l_U580 > l_U579) AND (l_U578 > (l_U577 + 1))))
        {
            PRINT_NOW( "FM_FAIL_10", 7000, 1 );
            SET_WANTED_MULTIPLIER( 0.50000000 );
            sub_13967( 11, "MF4_FM1", "MF8AUD", 0 );
            l_U605 = 1;
            l_U648 = 1;
        }
    }
    return;
}

void sub_11484()
{
    CLEAR_AREA( 96.18900000, -695.15110000, 13.77390000, 2.00000000, 1 );
    CREATE_CHAR( 26, -1356924456, 92.45920000, -686.39590000, 13.76620000, ref l_U969, 1 );
    SET_CHAR_HEADING( l_U969, 128.53870000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U969, "Lobby2-Floor03" );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U969 );
    SET_CHAR_COMPONENT_VARIATION( l_U969, 3, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U969, 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U969, 7, 1, 2 );
    SET_CHAR_COMPONENT_VARIATION( l_U969, 0, 0, 1 );
    SET_CHAR_DECISION_MAKER( l_U969, l_U1009 );
    SET_COMBAT_DECISION_MAKER( l_U969, l_U1012 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U969, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U969, 26 );
    TASK_PLAY_ANIM( l_U969, "idle", "missfrancis2", 4, 1, 0, 0, 0, -2 );
    if (NOT (IS_CHAR_DEAD( l_U969 )))
    {
        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U969, 96.18900000, -695.15110000, 13.77390000, 2, 30000, 0.10000000 );
    }
    sub_10019( 1, l_U969, "Receptionist_F", 0 );
    return;
}

void sub_11867()
{
    l_U538[2] = {83.57039000, -706.09010000, 3.99650000};
    CREATE_CHAR( 26, -1870989171, 83.57039000, -706.09010000, 3.99650000, ref l_U924[5], 1 );
    SET_CHAR_HEADING( l_U924[5], 119.55350000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U924[5], "Lobby2-Floor1" );
    sub_11997( l_U924[5] );
    SET_COMBAT_DECISION_MAKER( l_U924[5], l_U1013 );
    SET_CHAR_ACCURACY( l_U924[5], 60 );
    TASK_STAND_GUARD( l_U924[5], l_U538[2], 119.55350000, 2.00000000, 0, -1 );
    l_U538[1] = {72.82590000, -682.49040000, 9.59250000};
    CREATE_CHAR( 26, -1870989171, 72.82590000, -682.49040000, 9.59250000 - 1.00000000, ref l_U924[3], 1 );
    SET_CHAR_HEADING( l_U924[3], 234.11140000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U924[3], "Lobby2-Floor02" );
    sub_11997( l_U924[3] );
    SET_CHAR_ACCURACY( l_U924[3], 55 );
    CREATE_CHAR( 26, -1870989171, 95.00000000 - 0.25000000, -685.94460000, 14.76440000 - 1.00000000, ref l_U924[6], 1 );
    SET_CHAR_HEADING( l_U924[6], 115.05150000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U924[6], "Lobby2-Floor03" );
    sub_11997( l_U924[6] );
    SET_CHAR_ACCURACY( l_U924[6], 60 );
    sub_10019( 5, l_U924[6], "SECURITY_2", 0 );
    SET_AMBIENT_VOICE_NAME( l_U924[6], "M_M_SECURITYMAN" );
    l_U538[3] = {81.22050000, -684.07780000, 13.76340000};
    CREATE_CHAR( 26, -1870989171, 81.22050000, -684.07780000, 13.76340000, ref l_U924[7], 1 );
    SET_CHAR_HEADING( l_U924[7], 10.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U924[7], "Lobby2-Floor03" );
    sub_11997( l_U924[7] );
    SET_COMBAT_DECISION_MAKER( l_U924[7], l_U1013 );
    TASK_STAND_GUARD( l_U924[7], l_U538[3], 30.11140000, 10.00000000, 0, -1 );
    SET_CHAR_ACCURACY( l_U924[7], 60 );
    sub_10019( 3, l_U924[7], "Security", 0 );
    SET_AMBIENT_VOICE_NAME( l_U924[7], "M_M_SECURITYMAN" );
    CREATE_CHAR( 26, -1870989171, 104.16570000, -686.55550000, 14.76670000 - 1.00000000, ref l_U924[8], 1 );
    SET_CHAR_HEADING( l_U924[8], 26.87340000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U924[8], "GtaMloRoom06" );
    sub_11997( l_U924[8] );
    SET_CHAR_ACCURACY( l_U924[8], 55 );
    return;
}

void sub_11997(unknown uParam0)
{
    SET_CHAR_DECISION_MAKER( uParam0, l_U1010 );
    SET_COMBAT_DECISION_MAKER( uParam0, l_U1014 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( uParam0 );
    GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 7, 1000, 0 );
    SET_CURRENT_CHAR_WEAPON( uParam0, 0, 0 );
    SET_CHAR_IS_TARGET_PRIORITY( uParam0, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( uParam0, 24 );
    SET_CHAR_RELATIONSHIP( uParam0, 1, 25 );
    SET_CHAR_RELATIONSHIP( uParam0, 1, 3 );
    SET_CHAR_RELATIONSHIP( uParam0, 1, 0 );
    return;
}

void sub_12939()
{
    return;
}

void sub_13063()
{
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, 79, 64857, 15, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -308312378, 95, 64854, 15, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 487482787, 95, 64851, 15, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 80, 64824, 5, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 71, 64822, 5, 1, 0.00000000 );
    return;
}

void sub_13967(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_14011( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_14011(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

int sub_14781()
{
    if (NOT sub_14790())
    {
        return 0;
    }
    if (NOT sub_14881())
    {
        return 0;
    }
    if (NOT sub_14969())
    {
        return 0;
    }
    if (NOT sub_15109())
    {
        return 0;
    }
    return 1;
}

int sub_14790()
{
    int iVar2;
    int iVar3;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 1 );
    if (NOT ((iVar2 == 12) || (iVar2 == 5)))
    {
        return 0;
    }
    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 2 );
    if (NOT (iVar3 == 2))
    {
        return 0;
    }
    return 1;
}

int sub_14881()
{
    int iVar2;
    int iVar3;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 5 );
    iVar3 = GET_CHAR_TEXTURE_VARIATION( sub_2973(), 5 );
    if ((NOT (((iVar3 == 2) || (iVar3 == 1)) AND (iVar2 == 5))) AND (NOT (iVar2 == 2)))
    {
        return 0;
    }
    return 1;
}

int sub_14969()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 3 );
    if (NOT (iVar2 == 0))
    {
        return 0;
    }
    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 8 );
    if (NOT (iVar3 == 0))
    {
        return 0;
    }
    GET_CHAR_PROP_INDEX( sub_2973(), 0, ref iVar4 );
    if (iVar4 > -1)
    {
        return 0;
    }
    GET_CHAR_PROP_INDEX( sub_2973(), 1, ref iVar4 );
    if (iVar4 > 0)
    {
        return 0;
    }
    return 1;
}

int sub_15109()
{
    if ((HAS_CHAR_GOT_WEAPON( sub_2973(), 4 )) || ((HAS_CHAR_GOT_WEAPON( sub_2973(), 5 )) || ((HAS_CHAR_GOT_WEAPON( sub_2973(), 18 )) || ((HAS_CHAR_GOT_WEAPON( sub_2973(), 17 )) || ((HAS_CHAR_GOT_WEAPON( sub_2973(), 16 )) || ((HAS_CHAR_GOT_WEAPON( sub_2973(), 15 )) || ((HAS_CHAR_GOT_WEAPON( sub_2973(), 14 )) || ((HAS_CHAR_GOT_WEAPON( sub_2973(), 13 )) || ((HAS_CHAR_GOT_WEAPON( sub_2973(), 12 )) || ((HAS_CHAR_GOT_WEAPON( sub_2973(), 11 )) || ((HAS_CHAR_GOT_WEAPON( sub_2973(), 10 )) || ((HAS_CHAR_GOT_WEAPON( sub_2973(), 9 )) || (HAS_CHAR_GOT_WEAPON( sub_2973(), 7 ))))))))))))))
    {
        return 1;
    }
    return 0;
}

void sub_15397()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    SET_PLAYER_CONTROL_ADVANCED( l_U1027, 0, 0, 1 );
    CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED( l_U1027 );
    SET_PLAYER_MOOD_NORMAL( sub_3027() );
    CLEAR_HELP();
    CLEAR_PRINTS();
    iVar2 = 0;
    while (l_U742 == 0)
    {
        if (NOT (IS_CHAR_INJURED( l_U1026 )))
        {
            if (iVar2 == 0)
            {
                iVar2 = 1;
                if (DOES_BLIP_EXIST( l_U832 ))
                {
                    REMOVE_BLIP( l_U832 );
                }
                SET_WIDESCREEN_BORDERS( 1 );
                BEGIN_CAM_COMMANDS( ref l_U876 );
                CREATE_CAM( 14, ref uVar5 );
                CREATE_CAM( 14, ref uVar6 );
                SET_CAM_POS( uVar5, 78.39945000, -677.67880000, 15.25466000 );
                SET_CAM_ROT( uVar5, -1.49368400, -0.00000000, -102.12750000 );
                SET_CAM_FOV( uVar5, 25.00000000 );
                SET_CAM_POS( uVar6, 80.34835000, -678.38560000, 15.37541000 );
                SET_CAM_ROT( uVar6, -4.12927800, 0.00000000, -1.97446300 );
                SET_CAM_FOV( uVar6, 40.00000000 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1026 );
                WAIT( 500 );
                SET_CHAR_HEADING( l_U1026, 182.76420000 );
                SET_CHAR_COORDINATES( l_U1026, 80.33340000, -677.78010000, 13.76830000 );
                SET_CAM_ACTIVE( uVar5, 1 );
                SET_CAM_PROPAGATE( uVar5, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                TASK_SWAP_WEAPON( l_U1026, 0 );
                sub_15810();
                WAIT( 1000 );
                SET_CURRENT_CHAR_WEAPON( l_U1026, 0, 0 );
                if (NOT IS_SCREEN_FADED_IN())
                {
                    DO_SCREEN_FADE_IN( 500 );
                    WAIT( 1000 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                OPEN_SEQUENCE_TASK( ref l_U882 );
                TASK_PLAY_ANIM( 0, "press_button", "missfrancis2", 4, 0, 0, 0, 0, -2 );
                CLOSE_SEQUENCE_TASK( l_U882 );
                TASK_PERFORM_SEQUENCE( l_U1026, l_U882 );
                CLEAR_SEQUENCE_TASK( l_U882 );
                WAIT( 300 );
                uVar7 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( uVar7, "FM2_ENTRY_PHONE", 80.30000000, -678.40000000, 15.20000000 );
                WAIT( 1500 );
                STOP_SOUND( uVar7 );
                RELEASE_SOUND_ID( uVar7 );
                while (NOT (HAS_CHAR_ANIM_FINISHED( l_U1026, "missfrancis2", "press_button" )))
                {
                    WAIT( 0 );
                }
                sub_16890( "FM2_BUZZ", 0, 1, ref l_U1048, 6, 1 );
                SET_USE_HIGHDOF( 1 );
                SET_CAM_NEAR_DOF( uVar6, 0.10000000 );
                SET_CAM_FAR_DOF( uVar6, 2.00000000 );
                SET_CAM_PROPAGATE( uVar5, 0 );
                SET_CAM_ACTIVE( uVar6, 1 );
                SET_CAM_PROPAGATE( uVar6, 1 );
                SET_TIMECYCLE_MODIFIER( "death" );
                SETTIMERA( 0 );
            }
            if ((iVar2 == 1) AND (NOT (sub_17960( l_U1048 ))))
            {
                iVar2 = 2;
                uVar8 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( uVar8, "FM2_FINAL_INTERVIEW_COME_IN_SPEECH", 80.30000000, -678.40000000, 15.20000000 );
                PRINT_NOW( "FM_INTERCOM_01", 3000, 1 );
                SETTIMERA( 0 );
            }
            if ((iVar2 == 2) AND (TIMERA() > 1200))
            {
                iVar2 = 3;
                uVar9 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( uVar9, "FM2_DOOR_SOLENOID", 76.55181000, -679.44980000, 14.76120000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, 79, 64857, 15, 0, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 0, 0.00000000 );
                WAIT( 1000 );
                STOP_SOUND( uVar9 );
                RELEASE_SOUND_ID( uVar9 );
                sub_4770();
                if (NOT (DOES_BLIP_EXIST( l_U844 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U969, ref l_U844 );
                    SET_BLIP_AS_FRIENDLY( l_U844, 1 );
                }
                PRINT( "FM_COMMAND_11", 7000, 1 );
                sub_3817( 6, ref iVar3, ref uVar4 );
                if (NOT (iVar3 == 8))
                {
                    sub_4077( iVar3, uVar4, 6 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_CAM_ACTIVE( uVar6, 0 );
                SET_CAM_PROPAGATE( uVar6, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                SET_USE_HIGHDOF( 0 );
                DESTROY_CAM( uVar5 );
                DESTROY_CAM( uVar6 );
                END_CAM_COMMANDS( ref l_U876 );
                CLEAR_TIMECYCLE_MODIFIER();
                SET_WIDESCREEN_BORDERS( 0 );
                l_U742 = 1;
            }
            if ((l_U742 == 0) AND ((IS_SCREEN_FADED_IN()) AND (sub_18617())))
            {
                iVar2 = 4;
                sub_18743( ref l_U1048, 0 );
                sub_4770();
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, 79, 64857, 15, 0, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 0, 0.00000000 );
                if (NOT (DOES_BLIP_EXIST( l_U844 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U969, ref l_U844 );
                    SET_BLIP_AS_FRIENDLY( l_U844, 1 );
                }
                PRINT( "FM_COMMAND_11", 7000, 1 );
                sub_3817( 6, ref iVar3, ref uVar4 );
                if (NOT (iVar3 == 8))
                {
                    sub_4077( iVar3, uVar4, 6 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_CAM_ACTIVE( uVar6, 0 );
                SET_CAM_PROPAGATE( uVar6, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                SET_USE_HIGHDOF( 0 );
                DESTROY_CAM( uVar5 );
                DESTROY_CAM( uVar6 );
                CLEAR_TIMECYCLE_MODIFIER();
                END_CAM_COMMANDS( ref l_U876 );
                SET_WIDESCREEN_BORDERS( 0 );
                SETTIMERA( 0 );
                l_U742 = 1;
            }
        }
        WAIT( 0 );
    }
    sub_18743( ref l_U1048, 0 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1026 );
    SET_PLAYER_CONTROL_ADVANCED( l_U1027, 1, 0, 1 );
    return;
}

void sub_15810()
{
    if (IS_PLAYER_PLAYING( sub_3027() ))
    {
        sub_15842( ref g_U8371._fU0 );
        sub_15982( ref g_U8371._fU4 );
        sub_16118( ref g_U8371._fU8 );
        sub_16254( ref g_U8371._fU12 );
        sub_16427( ref g_U8371._fU16 );
        g_U8371._fU20 = -1;
        g_U8371._fU24 = -1;
    }
    return;
}

void sub_15842(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_2973(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_6845( I, ref iVar6, ref iVar7 );
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

void sub_15982(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_2973(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_7931( I, ref iVar6, ref iVar7 );
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

void sub_16118(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_2973(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_8618( I, ref iVar6, ref iVar7 );
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

void sub_16254(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( sub_2973(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_9446( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_2973(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( sub_2973(), 8 );
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

void sub_16427(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_2973(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_9203( I, ref iVar5 );
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

void sub_16890(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_16917( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_16917(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_16975( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_16975(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_16997( iParam1 )))
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
    sub_17689( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_16997(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_17074( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_17074( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_17074( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_17074(unknown uParam0)
{
    return;
}

void sub_17689(int iParam0, int iParam1)
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

int sub_17960(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_17074( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_17074( "\n speech is not playing" );
    }
    return 0;
}

int sub_18617()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_18743(int iParam0, unknown uParam1)
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

void sub_19250(unknown uParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 )))
    {
        return;
    }
    if (NOT (g_U10133._fU520[uParam0] == 0))
    {
        return;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    g_U10133._fU520[uParam0] = iVar3 + 10000;
    FLASH_BLIP( g_U10324[uParam0]._fU32, 1 );
    CHANGE_BLIP_PRIORITY( g_U10324[uParam0]._fU32, l_U6 );
    return;
}

void sub_24573()
{
    int I;

    if (l_U510 < 3)
    {
        if (sub_24594())
        {
            l_U510++;
        }
    }
    else if (l_U761 == 0)
    {
        PRINT_NOW( "FM_FAIL_12", 7000, 1 );
    }
    sub_26503();;
    if ((l_U605 == 0) AND (IS_WANTED_LEVEL_GREATER( l_U1027, 0 )))
    {
        if (l_U761 == 0)
        {
            PRINT_NOW( "FM_FAIL_07", 7000, 1 );
        }
        sub_26503();
    }
    for ( I = 0; I < l_U953; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U953[I] )))
        {
            if ((l_U605 == 0) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U953[I], l_U1026, 0 )))
            {
                if (l_U761 == 0)
                {
                    PRINT_NOW( "FM_FAIL_03", 7000, 1 );
                }
                sub_26503();
            }
        }
    }
    if (HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED( l_U1027 ))
    {
        if ((l_U605 == 0) AND (l_U761 == 0))
        {
            PRINT_NOW( "FM_FAIL_03", 7000, 1 );
        }
        sub_26503();
    }
    I = 0;
    for ( I = 0; I < l_U924; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U924[I] )))
        {
            if ((l_U605 == 0) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U924[I], l_U1026, 0 )))
            {
                if (l_U761 == 0)
                {
                    PRINT_NOW( "FM_FAIL_04", 7000, 1 );
                }
                sub_26503();
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U968 )))
    {
        if ((l_U605 == 0) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U968, l_U1026, 0 )))
        {
            if (l_U761 == 0)
            {
                PRINT_NOW( "FM_FAIL_03", 7000, 1 );
            }
            sub_26503();
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U969 )))
    {
        if ((l_U605 == 0) AND ((IS_CHAR_INJURED( l_U969 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U969, l_U1026, 0 ))))
        {
            if (l_U761 == 0)
            {
                PRINT_NOW( "FM_FAIL_03", 7000, 1 );
            }
            sub_26503();
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U970 )))
    {
        if ((l_U605 == 0) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U970, l_U1026, 0 )))
        {
            if (l_U761 == 0)
            {
                PRINT_NOW( "FM_FAIL_03", 7000, 1 );
            }
            sub_26503();
        }
    }
    GET_KEY_FOR_CHAR_IN_ROOM( l_U1026, ref l_U570 );
    if ((l_U605 == 0) AND (IS_CHAR_IN_ANY_CAR( l_U1026 )))
    {
        if ((l_U570 == 68746605) || (l_U570 == -481465154))
        {
            if (l_U761 == 0)
            {
                PRINT_NOW( "FM_FAIL_08", 7000, 1 );
            }
            sub_26503();
        }
    }
    return;
}

int sub_24594()
{
    if (NOT (IS_CHAR_INJURED( sub_2973() )))
    {
        if (HAVE_ANIMS_LOADED( "melee_unarmed_base" ))
        {
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_unarmed_base", "cross_r_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "cross_r_recoil" )))
                {
                    l_U497 = "cross_r_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_unarmed_base", "low_kick_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "low_kick_recoil" )))
                {
                    l_U497 = "low_kick_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_unarmed_base", "jab_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "jab_recoil" )))
                {
                    l_U497 = "jab_recoil";
                    return 1;
                }
                return 0;
            }
        }
        if (HAVE_ANIMS_LOADED( "melee_player_unarmed" ))
        {
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_player_unarmed", "lowblow_r_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "lowblow_r_recoil" )))
                {
                    l_U497 = "lowblow_r_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_player_unarmed", "lowblow_l_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "lowblow_l_recoil" )))
                {
                    l_U497 = "lowblow_l_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_player_unarmed", "elbow_r_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "elbow_r_recoil" )))
                {
                    l_U497 = "elbow_r_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_player_unarmed", "elbow_l_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "elbow_l_recoil" )))
                {
                    l_U497 = "elbow_l_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_player_unarmed", "headbutt_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "headbutt_recoil" )))
                {
                    l_U497 = "headbutt_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_player_unarmed", "hook_l_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "hook_l_recoil" )))
                {
                    l_U497 = "hook_l_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_player_unarmed", "hook_r_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "hook_r_recoil" )))
                {
                    l_U497 = "hook_r_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_player_unarmed", "uppercut_l_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "uppercut_l_recoil" )))
                {
                    l_U497 = "uppercut_l_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_player_unarmed", "uppercut_r_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "uppercut_r_recoil" )))
                {
                    l_U497 = "uppercut_r_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_player_unarmed", "knee_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "knee_recoil" )))
                {
                    l_U497 = "knee_recoil";
                    return 1;
                }
                return 0;
            }
            if (IS_CHAR_PLAYING_ANIM( sub_2973(), "melee_player_unarmed", "low_kick_r_long_recoil" ))
            {
                if (NOT (COMPARE_STRING( l_U497, "low_kick_r_long_recoil" )))
                {
                    l_U497 = "low_kick_r_long_recoil";
                    return 1;
                }
                return 0;
            }
        }
    }
    l_U497 = "NULL";
    return 0;
}

void sub_26503()
{
    int I;

    I = 0;
    for ( I = 0; I <= 11; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U924[I] )))
        {
            SET_CHAR_RELATIONSHIP( l_U924[I], 5, 0 );
            TASK_COMBAT( l_U924[I], l_U1026 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U969 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U969 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U969, 0 );
        TASK_SMART_FLEE_CHAR( l_U969, l_U1026, 150.00000000, -1 );
    }
    SET_ALL_RANDOM_PEDS_FLEE( l_U1027, 1 );
    SET_WANTED_MULTIPLIER( 0.50000000 );
    ALTER_WANTED_LEVEL( l_U1027, 2 );
    APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
    if (l_U761 == 0)
    {
        if (l_U605 == 0)
        {
            sub_13967( 11, "FM2_CATTK", "FM2AUD", 0 );
        }
        WAIT( 3000 );
        l_U605 = 1;
    }
    l_U648 = 1;
    return;
}

void sub_27739(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_27762( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_27762(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_16975( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_28532()
{
    int I;
    vector vVar3;
    vector vVar6;

    if (l_U797 == 0)
    {
        if (l_U625 == 0)
        {
            if (NOT (IS_CHAR_INJURED( l_U969 )))
            {
                g_U2226 = 0;
                sub_28589();
                if (NOT (IS_CHAR_INJURED( l_U969 )))
                {
                    SETTIMERA( 0 );
                    l_U625 = 1;
                }
            }
        }
        if (l_U747 == 0)
        {
            if (NOT (IS_CHAR_INJURED( l_U969 )))
            {
                GET_CHAR_COORDINATES( l_U969, ref l_U584._fU0, ref l_U584._fU4, ref l_U584._fU8 );
                if (l_U584._fU0 < 95.00000000)
                {
                    TASK_LOOK_AT_COORD( l_U969, 95, -683.50000000, 15, 3000, 0 );
                    l_U747 = 1;
                }
            }
        }
        if ((TIMERA() > 8000) AND ((l_U766 == 0) AND ((l_U626 == 0) AND ((l_U625 == 1) AND (l_U627 == 0)))))
        {
            if (NOT (IS_CHAR_INJURED( l_U969 )))
            {
                if ((l_U605 == 0) AND ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U969, 118.23230000, -674.92380000, 13.76670000, 1.50000000, 1.50000000, 1.50000000, 0 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1026, l_U969, 5.00000000, 5.00000000, 1.50000000, 0 ))))
                {
                    if (l_U743 == 0)
                    {
                        PRINTSTRING( "\n\n ----> PLAY RECEPTIONIST WALK CONVERSATION <---- \n\n\n" );
                        sub_27739( "FM2_TALKS", ref l_U1048, 6, 0 );
                        l_U743 = 1;
                    }
                    else
                    {
                        sub_29826( "FM2_TALKS", ref l_U1048, 6, 0 );
                    }
                }
                else
                {
                    sub_29948( ref l_U1048 );
                }
                if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U969, 118.23230000, -674.92380000, 13.76670000, 1.50000000, 1.50000000, 1.50000000, 0 ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1026, l_U969, 5.00000000, 5.00000000, 1.50000000, 0 )))
                {
                    if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (sub_30474( l_U1048 ))) AND (sub_30418( ref l_U1048 ))))
                    {
                        sub_27739( "FM2_QUIP", ref l_U1048, 7, 0 );
                        l_U766 = 1;
                    }
                }
            }
        }
        if (l_U626 == 0)
        {
            if (NOT (IS_CHAR_INJURED( l_U969 )))
            {
                if ((NOT (sub_17960( l_U1048 ))) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 118.23230000, -674.92380000, 13.76670000, 4.00000000, 4.00000000, 4.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U969, 118.23230000, -674.92380000, 13.76670000, 1.50000000, 1.50000000, 1.50000000, 0 ))))
                {
                    CLEAR_CHAR_TASKS( l_U969 );
                    OPEN_SEQUENCE_TASK( ref l_U881 );
                    TASK_LOOK_AT_CHAR( 0, l_U1026, 7000, 0 );
                    TASK_PLAY_ANIM( 0, "indicate_right", "missfrancis2", 4, 0, 0, 0, 0, -2 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 96.18900000, -695.15110000, 13.77390000, 2, 45000, 1.50000000 );
                    TASK_ACHIEVE_HEADING( 0, 85.11750000 );
                    CLOSE_SEQUENCE_TASK( l_U881 );
                    CLEAR_CHAR_TASKS( l_U969 );
                    TASK_PERFORM_SEQUENCE( l_U969, l_U881 );
                    CLEAR_SEQUENCE_TASK( l_U881 );
                    if (DOES_BLIP_EXIST( l_U844 ))
                    {
                        REMOVE_BLIP( l_U844 );
                    }
                    if ((l_U797 == 0) AND (NOT (DOES_BLIP_EXIST( l_U836 ))))
                    {
                        PRINTSTRING( "\n ---> Outside Blip Added <--- \n\n" );
                        ADD_BLIP_FOR_COORD( 120.85590000, -673.29710000, 13.76670000, ref l_U836 );
                        CHANGE_BLIP_DISPLAY( l_U836, 2 );
                        CHANGE_BLIP_COLOUR( l_U836, 5 );
                    }
                    sub_27739( "FM2_NERVES", ref l_U1048, 6, 1 );
                    l_U626 = 1;
                }
            }
        }
        if ((l_U605 == 0) AND ((TIMERA() > 15000) AND ((l_U625 == 1) AND (l_U627 == 0))))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( l_U1026, ref l_U570 );
            if ((TIMERA() > 120000) || (l_U570 == 0))
            {
                PRINT_NOW( "FM_FAIL_10", 7000, 1 );
                SET_WANTED_MULTIPLIER( 0.50000000 );
                sub_13967( 11, "MF4_FM1", "MF8AUD", 0 );
                l_U605 = 1;
                l_U648 = 1;
            }
        }
        if ((l_U797 == 0) AND ((l_U605 == 0) AND ((l_U648 == 0) AND (l_U627 == 0))))
        {
            GET_CURRENT_CHAR_WEAPON( l_U1026, ref l_U581 );
            l_U571 = l_U581;
            GET_KEY_FOR_CHAR_IN_ROOM( l_U1026, ref l_U570 );
            if ((l_U570 != 0) AND (IS_CHAR_ARMED( sub_2973(), 7 )))
            {
                I = 0;
                for ( I = 0; I <= 11; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U924[I] )))
                    {
                        SET_CHAR_RELATIONSHIP( l_U924[I], 5, 0 );
                        TASK_COMBAT( l_U924[I], l_U1026 );
                    }
                }
                PRINT_NOW( "FM_FAIL_02", 7000, 1 );
                SET_WANTED_MULTIPLIER( 0.50000000 );
                ALTER_WANTED_LEVEL( l_U1027, 2 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
                sub_13967( 11, "FM2_CGUN", "FM2AUD", 0 );
                l_U605 = 1;
                l_U648 = 1;
                WAIT( 250 );
            }
            sub_24573();
        }
        GET_KEY_FOR_CHAR_IN_ROOM( l_U1026, ref l_U570 );
        if (l_U570 != 0)
        {
            if (l_U763 == 0)
            {
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                SET_PARKED_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                SET_RANDOM_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                SWITCH_PED_PATHS_OFF( 54.75000000, -805.68000000, 1.00000000, 190.96000000, -680.31000000, 10.00000000 );
                SWITCH_PED_PATHS_OFF( 126.70000000, -737.62000000, 1.00000000, 198.29000000, -574.59000000, 10.00000000 );
                SWITCH_PED_PATHS_OFF( 44.28000000, -666.57000000, 6.00000000, 149.22000000, -580.64000000, 10.00000000 );
                SWITCH_PED_PATHS_OFF( -35.22000000, -820.38000000, 1.00000000, -103.95000000, -245.04000000, 10.00000000 );
                l_U763 = 1;
            }
        }
        else if (l_U763 == 1)
        {
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_RANDOM_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SWITCH_PED_PATHS_ON( 54.75000000, -805.68000000, 1.00000000, 190.96000000, -680.31000000, 10.00000000 );
            SWITCH_PED_PATHS_ON( 126.70000000, -737.62000000, 1.00000000, 198.29000000, -574.59000000, 10.00000000 );
            SWITCH_PED_PATHS_ON( 44.28000000, -666.57000000, 6.00000000, 149.22000000, -580.64000000, 10.00000000 );
            SWITCH_PED_PATHS_ON( -35.22000000, -820.38000000, 1.00000000, -103.95000000, -245.04000000, 10.00000000 );
            l_U763 = 0;
        }
    }
    if ((l_U605 == 0) AND ((NOT (IS_CHAR_ARMED( l_U1026, 7 ))) AND (l_U627 == 0)))
    {
        if ((l_U797 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 120.85590000, -673.29710000, 13.76670000, 1.50000000, 1.50000000, 1.50000000, 0 )))
        {
            CLEAR_WANTED_LEVEL( l_U1027 );
            SET_CURRENT_CHAR_WEAPON( l_U1026, 0, 1 );
            ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3027(), 0 );
            sub_32102();
            if (DOES_BLIP_EXIST( l_U836 ))
            {
                PRINTSTRING( "\n ---> Outside Blip Removed <--- \n\n" );
                REMOVE_BLIP( l_U836 );
            }
            if (DOES_BLIP_EXIST( l_U844 ))
            {
                REMOVE_BLIP( l_U844 );
            }
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                TASK_LOOK_AT_CHAR( l_U1026, l_U968, 600000, 0 );
                TASK_LOOK_AT_CHAR( l_U968, l_U1026, 600000, 0 );
            }
            WAIT( 0 );
            vVar3 = {123.70000000, -670.10000000, 13.80000000};
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1026 );
            SET_CHAR_COORDINATES( l_U1026, 119.83970000, -672.95610000, 13.76650000 );
            SET_CHAR_HEADING( l_U1026, 315.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U882 );
                TASK_LOOK_AT_CHAR( 0, l_U968, 60000, 0 );
                TASK_PLAY_ANIM( 0, "walk_in_to_lawyer", "missfrancis2", 4, 0, 1, 1, 1, 0 );
                CLOSE_SEQUENCE_TASK( l_U882 );
                TASK_PERFORM_SEQUENCE( l_U1026, l_U882 );
                CLEAR_SEQUENCE_TASK( l_U882 );
            }
            SET_WIDESCREEN_BORDERS( 1 );
            CLEAR_HELP();
            l_U797 = 1;
        }
        if ((l_U569 == 0) AND (l_U797 == 1))
        {
            l_U569 = 1;
            SET_WANTED_MULTIPLIER( 0.00000000 );
            SET_CURRENT_CHAR_WEAPON( l_U1026, 0, 1 );
            DISPLAY_RADAR( 0 );
            DISPLAY_HUD( 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref l_U876 );
            CREATE_CAM( 14, ref l_U860 );
            CREATE_CAM( 14, ref l_U861 );
            CREATE_CAM( 14, ref l_U862 );
            CREATE_CAM( 3, ref l_U875 );
            SET_CAM_POS( l_U860, 125.70380000, -666.03550000, 14.79003000 );
            SET_CAM_ROT( l_U860, 4.65556000, -0.00000000, 140.02030000 );
            SET_CAM_FOV( l_U860, 34 );
            SET_CAM_POS( l_U861, 124.74660000, -669.30910000, 14.84381000 );
            SET_CAM_ROT( l_U861, 2.63960700, 0.00000000, 31.45483000 );
            SET_CAM_FOV( l_U861, 55 );
            SET_CAM_POS( l_U862, 124.51430000, -671.07570000, 15.15674000 );
            SET_CAM_ROT( l_U862, -8.25457900, 0.00000000, 26.96537000 );
            SET_CAM_FOV( l_U862, 34 );
            if (NOT GET_IS_WIDESCREEN())
            {
                SET_CAM_FOV( l_U860, 40 );
                SET_CAM_FOV( l_U861, 60 );
            }
            SET_CAM_ACTIVE( l_U860, 1 );
            SET_CAM_PROPAGATE( l_U860, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SETTIMERA( 0 );
        }
        if ((TIMERA() > 1500) AND (l_U569 == 1))
        {
            l_U569 = 2;
            sub_16890( "FM2_MEETS", 0, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
        }
        if ((NOT (sub_17960( l_U1048 ))) AND (l_U569 == 2))
        {
            l_U569 = 3;
            SET_CAM_PROPAGATE( l_U860, 0 );
            SET_CAM_ACTIVE( l_U861, 1 );
            SET_CAM_PROPAGATE( l_U861, 1 );
            sub_16890( "FM2_MEETS", 2, 1, ref l_U1048, 6, 1 );
            if (NOT (IS_CHAR_DEAD( l_U969 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U969 );
                SET_CHAR_COORDINATES( l_U969, 96.80710000, -695.38210000, 14.00000000 );
                SET_CHAR_HEADING( l_U969, 128.53870000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U969, "Lobby2-Floor03" );
            }
            OPEN_SEQUENCE_TASK( ref l_U878 );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Push_Trolley", "missfrancis2", 1.00000000, 0, 0, 0, 1, -1 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 106.05280000, -684.99700000, 14.76680000, 2, -2, 1.00000000 );
            CLOSE_SEQUENCE_TASK( l_U878 );
            if (NOT (IS_CHAR_INJURED( l_U953[8] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U953[8] );
            }
            if (NOT (IS_CHAR_DEAD( l_U953[8] )))
            {
                SET_CHAR_COORDINATES( l_U953[8], 117.04050000, -684.78550000, 14.76680000 );
                SET_CHAR_HEADING( l_U953[8], 89.99000000 );
                ATTACH_OBJECT_TO_PED( l_U1001, l_U953[8], 0, l_U558, l_U561, 0 );
                TASK_PERFORM_SEQUENCE( l_U953[8], l_U878 );
            }
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 0, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 1, 0.00000000 );
            vVar6 = {123.60000000, -670.80000000, 13.90000000};
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1026 );
            SET_CHAR_COORDINATES( l_U1026, 123.65000000, -670.07000000 + 0.63000000, 13.82000000 );
            SET_CHAR_HEADING( l_U1026, 0.00000000 );
            TASK_PLAY_ANIM( l_U1026, "sit_loop", "missfrancis2", 4, 1, 0, 0, 0, -2 );
            FREEZE_CHAR_POSITION( l_U1026, 1 );
            SETTIMERA( 0 );
        }
        if ((NOT (sub_17960( l_U1048 ))) AND (l_U569 == 3))
        {
            l_U569 = 4;
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            SET_CAM_PROPAGATE( l_U861, 0 );
            SET_CAM_ACTIVE( l_U862, 1 );
            SET_CAM_PROPAGATE( l_U862, 1 );
            if (NOT (DOES_BLIP_EXIST( l_U843 )))
            {
                ADD_BLIP_FOR_CHAR( l_U968, ref l_U843 );
                SET_BLIP_AS_FRIENDLY( l_U843, 0 );
                CHANGE_BLIP_DISPLAY( l_U843, 2 );
            }
            SETTIMERA( 0 );
        }
        if ((NOT (sub_17960( l_U1048 ))) AND (l_U569 == 4))
        {
            l_U569 = 5;
            END_CAM_COMMANDS( ref l_U876 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CAM_ACTIVE( l_U862, 0 );
            SET_CAM_PROPAGATE( l_U862, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U860 );
            DESTROY_CAM( l_U861 );
            DESTROY_CAM( l_U862 );
            DESTROY_CAM( l_U875 );
            DETACH_OBJECT( l_U1001, 1 );
            if (NOT (IS_CHAR_INJURED( l_U953[8] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U953[8] );
                TASK_WANDER_STANDARD( l_U953[8] );
            }
            sub_16890( "FM2_INT1", 0, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
        }
        if ((NOT (sub_17960( l_U1048 ))) AND (l_U569 == 5))
        {
            l_U569 = 6;
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            l_U627 = 1;
        }
    }
    if ((l_U569 < 5) AND ((l_U569 > 1) AND ((IS_SCREEN_FADED_IN()) AND (sub_18617()))))
    {
        l_U569 = 6;
        sub_18743( ref l_U1048, 0 );
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U969 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U969 );
            SET_CHAR_COORDINATES( l_U969, 96.80710000, -695.38210000, 14.00000000 );
            SET_CHAR_HEADING( l_U969, 128.53870000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U969, "Lobby2-Floor03" );
        }
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 1, 0.00000000 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1026 );
        SET_CHAR_COORDINATES( l_U1026, 123.65000000, -670.07000000 + 0.63000000, 13.82000000 );
        SET_CHAR_HEADING( l_U1026, 0.00000000 );
        TASK_PLAY_ANIM( l_U1026, "sit_loop", "missfrancis2", 4, 1, 0, 0, 0, -2 );
        FREEZE_CHAR_POSITION( l_U1026, 1 );
        END_CAM_COMMANDS( ref l_U876 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_ACTIVE( l_U860, 0 );
        SET_CAM_PROPAGATE( l_U860, 0 );
        SET_CAM_ACTIVE( l_U861, 0 );
        SET_CAM_PROPAGATE( l_U861, 0 );
        SET_CAM_ACTIVE( l_U862, 0 );
        SET_CAM_PROPAGATE( l_U862, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U860 );
        DESTROY_CAM( l_U861 );
        DESTROY_CAM( l_U862 );
        DESTROY_CAM( l_U875 );
        DETACH_OBJECT( l_U1001, 1 );
        if (NOT (IS_CHAR_INJURED( l_U953[8] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U953[8] );
            TASK_WANDER_STANDARD( l_U953[8] );
        }
        DISPLAY_RADAR( 1 );
        DISPLAY_HUD( 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        WAIT( 1500 );
        DO_SCREEN_FADE_IN( 500 );
        l_U627 = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U968 )))
    {
        SET_CHAR_GESTURE_GROUP( l_U968, "gestures@m_seated" );
    }
    if (l_U627 == 1)
    {
        if (DOES_BLIP_EXIST( l_U835 ))
        {
            REMOVE_BLIP( l_U835 );
        }
        l_U505++;
    }
    return;
}

void sub_28589()
{
    sub_10391( -1134712978 );
    while (NOT (HAS_MODEL_LOADED( -1134712978 )))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 26, -1134712978, 123.70000000, -667.20000000, 13.80000000, ref l_U968, 1 );
    SET_CHAR_HEADING( l_U968, 180.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U968, "GtaMloRoom08" );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 1, ref l_U572 );
    SET_CHAR_COMPONENT_VARIATION( l_U968, 1, 0, l_U572 );
    SET_CHAR_COMPONENT_VARIATION( l_U968, 2, 0, 0 );
    SET_CHAR_MAX_HEALTH( l_U968, 150 );
    SET_CHAR_HEALTH( l_U968, 150 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U968, 1 );
    SET_CHAR_CAN_SMASH_GLASS( l_U968, 1 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U968, 1 );
    SET_CHAR_AS_ENEMY( l_U968, 1 );
    ALLOW_TARGET_WHEN_INJURED( l_U968, 1 );
    SET_PED_DIES_WHEN_INJURED( l_U968, 1 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U968, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U968, 26 );
    sub_10019( 2, l_U968, "Goldberg_M", 0 );
    FREEZE_CHAR_POSITION( l_U968, 1 );
    CREATE_OBJECT( 449617953, 123.70000000 + l_U1029[3]._fU0, ((-667.20000000 + 0.10000000) - 0.60000000) + l_U1029[3]._fU4, 14.80000000 + l_U1029[3]._fU8, ref l_U1005, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1005, "GtaMloRoom08" );
    FREEZE_OBJECT_POSITION( l_U1005, 1 );
    SET_OBJECT_VISIBLE( l_U1005, 0 );
    ATTACH_PED_TO_OBJECT( l_U968, l_U1005, 0, 0, 0, 0, 180, 360, 1, 1 );
    SET_CHAR_COORDINATES( l_U968, 123.70000000 + l_U1029[3]._fU0, (-667.20000000 - 0.60000000) + l_U1029[3]._fU4, 13.80000000 + l_U1029[3]._fU8 );
    SET_CHAR_HEADING( l_U968, 180.00000000 );
    TASK_PLAY_ANIM( l_U968, "sit_loop", "missfrancis2", 4, 1, 0, 0, 0, -2 );
    FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 123.70000000, -667.20000000, 13.80000000, 1.50000000, 160926470, 1 );
    REQUEST_ANIMS( "gestures@m_seated" );
    while (NOT (HAVE_ANIMS_LOADED( "gestures@m_seated" )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U968 )))
    {
        SET_CHAR_GESTURE_GROUP( l_U968, "gestures@m_seated" );
    }
    return;
}

void sub_29826(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_29849( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_29849(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_16975( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_29948(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_17074( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_17074( "\n CONVERSATION PAUSED AT LINE " );
            sub_30088( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_17074( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_17074( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_17074( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_30088(unknown uParam0)
{
    return;
}

int sub_30418(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            return 0;
        }
    }
    return 1;
}

void sub_30474(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_32102()
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

void sub_34973()
{
    if (l_U628 == 0)
    {
        l_U628 = 1;
    }
    sub_35000();
    if (l_U767 == 0)
    {
        sub_41818();
        sub_41963();
        sub_42658();
        sub_43435();
        sub_43322();
        sub_45111();
        sub_45271();
        sub_45406();
        sub_45834();
        sub_46442();
        if ((l_U735 == 0) AND (l_U637 == 0))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                SET_CHAR_GESTURE_GROUP( l_U968, "gestures@m_seated" );
            }
        }
        if ((l_U639 == 1) AND (l_U641 == 1))
        {
            PRINTSTRING( "\n ----> PLAYER CAN NOW LEAVE THE OFFICE <---- \n\n" );
            l_U646 = 1;
        }
        sub_44053();
        if (l_U759 == 1)
        {
            if ((l_U748 == 1) || (l_U760 == 1))
            {
                sub_46863();
            }
            else if (l_U646 == 1)
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 0, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 80, 64824, 5, 0, 0.00000000 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 71, 64822, 5, 0, 0.00000000 );
                if (NOT (DOES_BLIP_EXIST( l_U842 )))
                {
                    ADD_BLIP_FOR_COORD( -421.55990000, 295.22120000, 10.20250000, ref l_U842 );
                    CHANGE_BLIP_COLOUR( l_U842, 5 );
                    SET_ROUTE( l_U842, 1 );
                }
                PRINT_NOW( "FM_COMMAND_18", 7500, 1 );
                l_U732 = 1;
                l_U761 = 1;
                l_U505 = 7;
                return;
            }
        }
        else
        {
            sub_46863();
        }
        sub_50113();
    }
    return;
}

void sub_35000()
{
    if ((l_U735 == 0) AND ((l_U636 == 0) AND (l_U637 == 0)))
    {
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND (l_U720 == 0)))
        {
            sub_16890( "FM2_RESM", 0, 1, ref l_U1048, 6, 1 );
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                TASK_CLEAR_LOOK_AT( l_U968 );
                TASK_CLEAR_LOOK_AT( l_U1026 );
            }
            SETTIMERA( 0 );
            l_U720 = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U721 == 0) AND (l_U720 == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                TASK_LOOK_AT_COORD( l_U968, 125.00000000, -668.30000000, 14.60000000, 10000, 0 );
            }
            if (l_U800 == 0)
            {
                PRINT_HELP_FOREVER( "FM_COMMAND_21" );
            }
            if (NOT (DOES_BLIP_EXIST( l_U843 )))
            {
                ADD_BLIP_FOR_CHAR( l_U968, ref l_U843 );
                SET_BLIP_AS_FRIENDLY( l_U843, 0 );
                CHANGE_BLIP_DISPLAY( l_U843, 2 );
            }
            SETTIMERA( 0 );
            l_U721 = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((TIMERA() > 5000) AND ((l_U721 == 1) AND (l_U693[0] == 0)))))
        {
            CLEAR_HELP();
            sub_16890( "FM2_INT2", 0, 1, ref l_U1048, 6, 1 );
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                TASK_CLEAR_LOOK_AT( l_U968 );
                TASK_CLEAR_LOOK_AT( l_U1026 );
                TASK_LOOK_AT_CHAR( l_U1026, l_U968, 90000, 0 );
                TASK_LOOK_AT_CHAR( l_U968, l_U1026, 90000, 0 );
            }
            SETTIMERA( 0 );
            l_U693[0] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[1] == 0) AND (l_U693[0] == 1))))
        {
            if (DOES_OBJECT_EXIST( l_U1004 ))
            {
                DELETE_OBJECT( ref l_U1004 );
            }
            sub_16890( "FM2_INT2", 1, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
            l_U693[1] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[2] == 0) AND (l_U693[1] == 1))))
        {
            sub_16890( "FM2_INT2", 2, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
            l_U693[2] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[3] == 0) AND (l_U693[2] == 1))))
        {
            sub_16890( "FM2_INT2", 3, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
            l_U693[3] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[4] == 0) AND (l_U693[3] == 1))))
        {
            sub_16890( "FM2_INT2", 4, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
            l_U693[4] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[5] == 0) AND (l_U693[4] == 1))))
        {
            sub_16890( "FM2_INT2", 5, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
            l_U693[5] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[6] == 0) AND (l_U693[5] == 1))))
        {
            sub_16890( "FM2_ALT", 0, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
            l_U693[6] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[9] == 0) AND (l_U693[6] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_ALT", 1, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[9] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[25] == 0) AND (l_U693[9] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_ALT", 2, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[25] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[10] == 0) AND (l_U693[25] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_INT2", 8, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[10] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[11] == 0) AND (l_U693[10] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_INT2", 9, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[11] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[12] == 0) AND (l_U693[11] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_INT2", 10, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[12] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[13] == 0) AND (l_U693[12] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_INT2", 11, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[13] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[14] == 0) AND (l_U693[13] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_INT2", 12, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[14] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[15] == 0) AND (l_U693[14] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_INT2", 13, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[15] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[16] == 0) AND (l_U693[15] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_INT2", 14, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[16] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[17] == 0) AND (l_U693[16] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_INT2", 15, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[17] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[18] == 0) AND (l_U693[17] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_INT2", 16, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[18] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[19] == 0) AND (l_U693[18] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_INT2", 17, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[19] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((NOT (IS_CHAR_INJURED( l_U968 ))) AND ((l_U693[20] == 0) AND (l_U693[19] == 1))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                sub_16890( "FM2_INT2", 18, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U693[20] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((TIMERA() > 8000) AND ((l_U693[21] == 0) AND (l_U693[20] == 1))))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U572 );
            switch (l_U572)
            {
                case 0:
                sub_16890( "FM2_NORSP", 0, 1, ref l_U1048, 6, 1 );
                break;
                case 1:
                sub_16890( "FM2_NORSP", 1, 1, ref l_U1048, 6, 1 );
                break;
            }
            SETTIMERA( 0 );
            l_U693[21] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((TIMERA() > 8000) AND ((l_U693[22] == 0) AND (l_U693[21] == 1))))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U572 );
            switch (l_U572)
            {
                case 0:
                sub_16890( "FM2_NORSP", 2, 1, ref l_U1048, 6, 1 );
                break;
                case 1:
                sub_16890( "FM2_NORSP", 3, 1, ref l_U1048, 6, 1 );
                break;
            }
            SETTIMERA( 0 );
            l_U693[22] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((TIMERA() > 2000) AND ((l_U693[22] == 1) AND (l_U744 == 0))))
        {
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                PRINT_NOW( "FM_COMMAND_07", 7500, 1 );
                SETTIMERA( 0 );
                SETTIMERB( 0 );
                l_U572 = 7000;
            }
            l_U744 = 1;
            SETTIMERA( 0 );
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((TIMERA() > 8000) AND ((l_U693[23] == 0) AND (l_U693[22] == 1))))
        {
            sub_16890( "FM2_CALLS", 1, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
            l_U693[23] = 1;
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((TIMERA() > 8000) AND ((l_U693[24] == 0) AND (l_U693[23] == 1))))
        {
            sub_38244();
            SETTIMERA( 0 );
            l_U693[24] = 1;
        }
    }
    return;
}

void sub_38244()
{
    int iVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( l_U924[6] )))
    {
        if (NOT (IS_CHAR_INJURED( l_U924[6] )))
        {
            SET_CHAR_COORDINATES( l_U924[6], 117.20000000, -677.40000000, 13.76670000 );
            SET_CHAR_HEADING( l_U924[6], 289.73580000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U924[6], "GtaMloRoom08" );
        }
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 0, 0.00000000 );
        OPEN_SEQUENCE_TASK( ref l_U882 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 121.35900000, -672.94780000, 13.76670000, 3, 10000, 1.20000000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1026 );
        CLOSE_SEQUENCE_TASK( l_U882 );
        TASK_PERFORM_SEQUENCE( l_U924[6], l_U882 );
        CLEAR_SEQUENCE_TASK( l_U882 );
        WAIT( 1000 );
        SET_PLAYER_CONTROL_ADVANCED( l_U1027, 0, 0, 1 );
        SET_WIDESCREEN_BORDERS( 1 );
        BEGIN_CAM_COMMANDS( ref l_U876 );
        CREATE_CAM( 14, ref l_U870 );
        CREATE_CAM( 14, ref l_U871 );
        CREATE_CAM( 14, ref l_U872 );
        CREATE_CAM( 14, ref l_U873 );
        CREATE_CAM( 3, ref l_U875 );
        SET_CAM_POS( l_U871, 116.01140000, -677.18970000, 15.11096000 );
        SET_CAM_ROT( l_U871, -5.04601700, -0.00000000, -58.58269000 );
        if (l_U589 == 1)
        {
            SET_CAM_POS( l_U872, 121.80310000, -671.79490000, 15.44625000 );
            SET_CAM_ROT( l_U872, -7.68160000, 0.00000000, 124.48200000 );
            SET_CAM_FOV( l_U872, 30.00000000 );
        }
        else if (l_U589 == 2)
        {
            SET_CAM_POS( l_U872, 124.67230000, -666.27560000, 14.99670000 );
            SET_CAM_ROT( l_U872, -0.57692800, 0.00000000, 144.53550000 );
            SET_CAM_FOV( l_U872, 30.00000000 );
        }
        else
        {
            SET_CAM_POS( l_U872, 125.03820000, -675.34200000, 14.85545000 );
            SET_CAM_ROT( l_U872, -0.45440600, 0.00000000, 41.17389000 );
            SET_CAM_FOV( l_U872, 55.00000000 );
        }
        SET_CAM_POS( l_U873, 127.12610000, -675.06780000, 15.93077000 );
        SET_CAM_ROT( l_U873, -8.26624300, 0.00000000, 49.34041000 );
        SET_CAM_FOV( l_U873, 45.00000000 );
        sub_27739( "FM2_KICKOUT", ref l_U1048, 7, 0 );
        SET_CAM_ACTIVE( l_U871, 1 );
        SET_CAM_PROPAGATE( l_U871, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        FREEZE_CHAR_POSITION( l_U1026, 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1026 );
        SET_CHAR_COORDINATES( l_U1026, 122.60000000 + 0.50000000, -670.30000000, 13.80000000 );
        SET_CHAR_HEADING( l_U1026, 140.92110000 );
        iVar2 = 0;
        iVar3 = 0;
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        while (iVar3 == 0)
        {
            if ((NOT (IS_CHAR_DEAD( l_U924[6] ))) AND (iVar2 == 0))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U924[6], 121.35900000, -672.94780000, 13.76670000, 2.20000000, 2.20000000, 2.20000000, 0 ))
                {
                    iVar2 = 1;
                    l_U741 = 1;
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 1, 1.00000000 );
                    SET_CAM_PROPAGATE( l_U871, 0 );
                    SET_CAM_ACTIVE( l_U872, 1 );
                    SET_CAM_PROPAGATE( l_U872, 1 );
                    SET_CAM_PROPAGATE( l_U872, 0 );
                    SET_CAM_INTERP_STYLE_CORE( l_U875, l_U872, l_U873, 12000, 0 );
                    SET_CAM_ACTIVE( l_U875, 1 );
                    SET_CAM_PROPAGATE( l_U875, 1 );
                }
            }
            if ((NOT (sub_17960( l_U1048 ))) AND (iVar2 == 1))
            {
                iVar2 = 2;
                if (NOT (IS_CHAR_ARMED( sub_2973(), 6 )))
                {
                    if (HAS_CHAR_GOT_WEAPON( l_U1026, 9 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 9, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 7 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 7, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 13 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 13, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 12 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 12, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 11 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 11, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 10 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 10, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 15 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 15, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 14 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 14, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 4 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 4, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 5 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 5, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 18 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 18, 0 );
                    };;;;;;;;;;;
                }
                TASK_SWAP_WEAPON( l_U1026, 1 );
                STOP_PED_SPEAKING( sub_2973(), 0 );
                WAIT( 0 );
                SAY_AMBIENT_SPEECH( l_U1026, "GENERIC_CURSE", 1, 1, 0 );
                SETTIMERA( 0 );
            }
            if ((TIMERA() > 2000) AND (iVar2 == 2))
            {
                iVar2 = 3;
            }
            if (iVar2 == 3)
            {
                iVar2 = 4;
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_CAM_ACTIVE( l_U875, 0 );
                SET_CAM_PROPAGATE( l_U875, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_CAM( l_U871 );
                DESTROY_CAM( l_U872 );
                DESTROY_CAM( l_U873 );
                DESTROY_CAM( l_U875 );
                END_CAM_COMMANDS( ref l_U876 );
                SET_WIDESCREEN_BORDERS( 0 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 0, 1.00000000 );
                iVar3 = 1;
            }
            if ((TIMERB() > 1000) AND ((iVar3 == 0) AND ((IS_SCREEN_FADED_IN()) AND (sub_18617()))))
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                sub_18743( ref l_U1048, 0 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_CAM_ACTIVE( l_U875, 0 );
                SET_CAM_PROPAGATE( l_U875, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_CAM( l_U871 );
                DESTROY_CAM( l_U872 );
                DESTROY_CAM( l_U873 );
                DESTROY_CAM( l_U875 );
                END_CAM_COMMANDS( ref l_U876 );
                SET_WIDESCREEN_BORDERS( 0 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 0, 1.00000000 );
                if (NOT (IS_CHAR_INJURED( l_U924[6] )))
                {
                    SET_CHAR_COORDINATES( l_U924[6], 121.35900000, -672.94780000, 13.76670000 );
                    sub_40368( l_U924[6], l_U1026 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U924[6], "GtaMloRoom08" );
                }
                if (NOT (IS_CHAR_ARMED( sub_2973(), 6 )))
                {
                    if (HAS_CHAR_GOT_WEAPON( l_U1026, 9 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 9, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 7 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 7, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 13 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 13, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 12 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 12, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 11 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 11, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 10 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 10, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 15 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 15, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 14 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 14, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 4 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 4, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 5 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 5, 1 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U1026, 18 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U1026, 18, 1 );
                    }
                    else
                    {
                        TASK_SWAP_WEAPON( l_U1026, 1 );
                    };;;;;;;;;;;
                }
                WAIT( 500 );
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                iVar3 = 1;
            }
            WAIT( 0 );
        }
    }
    SET_PLAYER_CONTROL_ADVANCED( l_U1027, 1, 0, 1 );
    if (NOT (IS_CHAR_DEAD( l_U968 )))
    {
        DETACH_PED( l_U968, 1 );
    }
    if (DOES_OBJECT_EXIST( l_U1005 ))
    {
        DELETE_OBJECT( ref l_U1005 );
    }
    if ((l_U639 == 1) AND (IS_CHAR_DEAD( l_U968 )))
    {
        if (DOES_BLIP_EXIST( l_U843 ))
        {
            REMOVE_BLIP( l_U843 );
        }
        if (DOES_BLIP_EXIST( l_U838 ))
        {
            REMOVE_BLIP( l_U838 );
        }
        PRINT( "FM_COMMAND_16", 7000, 1 );
        l_U749 = 1;
    }
    else if ((l_U639 == 0) AND (IS_CHAR_DEAD( l_U968 )))
    {
        if (DOES_BLIP_EXIST( l_U843 ))
        {
            REMOVE_BLIP( l_U843 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U838 )))
        {
            ADD_BLIP_FOR_OBJECT( l_U1003, ref l_U838 );
            CHANGE_BLIP_COLOUR( l_U838, 2 );
        }
        PRINT( "FM_COMMAND_14", 7000, 1 );
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        l_U572 = 7000;
        l_U751 = 1;
    }
    else if (NOT (IS_CHAR_DEAD( l_U968 )))
    {
        if (DOES_BLIP_EXIST( l_U838 ))
        {
            REMOVE_BLIP( l_U838 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U843 )))
        {
            ADD_BLIP_FOR_CHAR( l_U968, ref l_U843 );
            SET_BLIP_AS_FRIENDLY( l_U843, 0 );
            CHANGE_BLIP_DISPLAY( l_U843, 2 );
        }
        PRINT( "FM_COMMAND_07", 7000, 1 );
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        l_U572 = 7000;
        l_U750 = 1;
    };;;
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, 79, 64857, 15, 1, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 1, 0.00000000 );
    STOP_PED_SPEAKING( sub_2973(), 0 );
    if (NOT (IS_CHAR_DEAD( l_U968 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U968, 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U968 );
        SET_CHAR_HEADING( l_U968, 157.59600000 );
        SET_CHAR_COORDINATES( l_U968, 122.72820000, -667.16500000, 13.76670000 );
        TASK_SMART_FLEE_CHAR( l_U968, l_U1026, 200, -1 );
    }
    l_U767 = 1;
    l_U505++;
    return;
}

void sub_40368(unknown uParam0, unknown uParam1)
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

void sub_41818()
{
    if (l_U800 == 0)
    {
        SET_FOLLOW_PED_PITCH_LIMIT_UP( 20 );
        if ((IS_CONTROL_PRESSED( 0, 23 )) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            FREEZE_CHAR_POSITION( l_U1026, 0 );
            CLEAR_CHAR_TASKS( l_U1026 );
            CLEAR_HELP();
            WAIT( 500 );
            sub_18743( ref l_U1048, 0 );
            sub_27739( "FM2_STAND2", ref l_U1048, 7, 1 );
            l_U800 = 1;
        }
    }
    return;
}

void sub_41963()
{
    if ((l_U745 == 0) AND ((l_U605 == 0) AND ((l_U735 == 0) AND ((l_U637 == 0) AND ((l_U635 == 0) AND (l_U628 == 1))))))
    {
        GET_CURRENT_CHAR_WEAPON( l_U1026, ref l_U581 );
        l_U571 = l_U581;
        if (IS_CHAR_ARMED( l_U1026, 7 ))
        {
            l_U636 = 1;
            FREEZE_CHAR_POSITION( l_U1026, 0 );
            if ((l_U722[0] == 0) AND (NOT (IS_CHAR_INJURED( l_U968 ))))
            {
                sub_18743( ref l_U1048, 0 );
                sub_42127();
                SETTIMERB( 0 );
                l_U722[0] = 1;
            }
            if ((NOT (sub_17960( l_U1048 ))) AND ((l_U722[1] == 0) AND ((l_U722[0] == 1) AND (NOT (IS_CHAR_INJURED( l_U968 ))))))
            {
                SETTIMERB( 0 );
                l_U722[1] = 1;
            }
            if ((NOT (sub_17960( l_U1048 ))) AND ((l_U722[2] == 0) AND ((l_U722[1] == 1) AND (NOT (IS_CHAR_INJURED( l_U968 ))))))
            {
                SETTIMERB( 0 );
                l_U722[2] = 1;
            }
            if ((NOT (sub_17960( l_U1048 ))) AND ((l_U722[3] == 0) AND ((l_U722[2] == 1) AND (NOT (IS_CHAR_INJURED( l_U968 ))))))
            {
                SETTIMERB( 0 );
                l_U722[3] = 1;
                l_U635 = 1;
                l_U636 = 0;
            }
        }
    }
    return;
}

void sub_42127()
{
    GET_CURRENT_CHAR_WEAPON( l_U1026, ref l_U581 );
    l_U571 = l_U581;
    if (l_U571 == 3)
    {
        sub_27739( "FM2_KNIFE", ref l_U1048, 7, 0 );
    }
    else if (l_U571 == 1)
    {
        sub_27739( "FM2_BAT", ref l_U1048, 7, 0 );
    }
    else if (l_U571 == 5)
    {
        sub_27739( "FM2_MOLO", ref l_U1048, 7, 0 );
    }
    else if (l_U571 == 4)
    {
        sub_27739( "FM2_GRND", ref l_U1048, 7, 0 );
    }
    else if (l_U571 == 18)
    {
        sub_27739( "FM2_ROKT", ref l_U1048, 7, 0 );
    }
    else if (IS_CHAR_ARMED( l_U1026, 4 ))
    {
        sub_27739( "FM2_GUN", ref l_U1048, 7, 0 );
    };;;;;;
    return;
}

void sub_42658()
{
    if ((l_U735 == 0) AND ((l_U637 == 0) AND (NOT (IS_CHAR_DEAD( l_U968 )))))
    {
        if ((l_U745 == 0) AND ((IS_CHAR_ARMED( sub_2973(), 7 )) AND (IS_PLAYER_FREE_AIMING_AT_CHAR( l_U1027, l_U968 ))))
        {
            PRINTSTRING( "\n\n ----> Goldberg free aimed by player <---- \n\n\n" );
            l_U745 = 1;
        }
        if ((l_U745 == 0) AND ((IS_CHAR_ARMED( sub_2973(), 7 )) AND (IS_PLAYER_TARGETTING_CHAR( l_U1027, l_U968 ))))
        {
            PRINTSTRING( "\n\n ----> Goldberg targetted by player <---- \n\n\n" );
            l_U745 = 1;
        }
        if ((l_U745 == 0) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U968, l_U1026, 0 )))
        {
            PRINTSTRING( "\n\n ----> Goldberg damaged by player <---- \n\n\n" );
            l_U745 = 1;
        }
        if ((l_U745 == 0) AND (IS_CHAR_SHOOTING( l_U1026 )))
        {
            PRINTSTRING( "\n\n ----> Player shoots gun in office <---- \n\n\n" );
            GET_GAME_TIMER( ref l_U567 );
            l_U748 = 1;
            l_U745 = 1;
        }
        if ((NOT (IS_PED_RAGDOLL( l_U968 ))) AND (l_U745 == 1))
        {
            l_U635 = 1;
            PRINTSTRING( "\n\n ----> Goldberg get out of seat <---- \n\n\n" );
            if (DOES_OBJECT_EXIST( l_U1004 ))
            {
                DETACH_OBJECT( l_U1004, 1 );
            }
            FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 123.70000000, -667.20000000 + 0.30000000, 13.80000000, 1.50000000, 160926470, 0 );
            SETTIMERA( 0 );
            while (TIMERA() < 250)
            {
                if (NOT (IS_CHAR_DEAD( l_U968 )))
                {
                    BLOCK_CHAR_GESTURE_ANIMS( l_U968, 1 );
                }
                sub_43322();
                sub_44053();
                sub_43435();
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U968, 1 );
                OPEN_SEQUENCE_TASK( ref l_U882 );
                TASK_LOOK_AT_CHAR( 0, l_U1026, 60000, 0 );
                TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "see_gun_cower", "missfrancis2", 8.00000000, 0, 0, 0, 0, 0, 1, 1, 0 );
                TASK_PLAY_ANIM( 0, "cower_idle", "missfrancis2", 10000.00000000, 1, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U882 );
                TASK_PERFORM_SEQUENCE( l_U968, l_U882 );
                CLEAR_SEQUENCE_TASK( l_U882 );
                PLAY_SOUND_FROM_POSITION( -1, "FM2_OFFICE_CHAIR_RATTLE", 125.20000000, -668.40000000, 13.80000000 + 0.30000000 );
                CLEAR_PRINTS();
                sub_18743( ref l_U1048, 0 );
                if (l_U508 == 0)
                {
                    sub_16890( "FM2_TARG", 0, 1, ref l_U1048, 8, 1 );
                    l_U508 = 1;
                }
                while (sub_17960( l_U1048 ))
                {
                    sub_43322();
                    sub_44053();
                    sub_43435();
                    if (NOT (IS_CHAR_DEAD( l_U968 )))
                    {
                        BLOCK_CHAR_GESTURE_ANIMS( l_U968, 1 );
                    }
                    WAIT( 0 );
                }
                if ((l_U508 == 1) AND (NOT (IS_CHAR_INJURED( l_U968 ))))
                {
                    if (NOT (IS_PED_RAGDOLL( l_U968 )))
                    {
                        l_U508 = 2;
                        sub_16890( "FM2_TARG", 1, 1, ref l_U1048, 8, 1 );
                    }
                }
                if ((l_U643 == 0) AND (l_U642 == 0))
                {
                    if (DOES_BLIP_EXIST( l_U843 ))
                    {
                        REMOVE_BLIP( l_U843 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U838 )))
                    {
                        ADD_BLIP_FOR_OBJECT( l_U1003, ref l_U838 );
                        CHANGE_BLIP_COLOUR( l_U838, 2 );
                    }
                    TASK_CLEAR_LOOK_AT( l_U1026 );
                    l_U643 = 1;
                    while (sub_17960( l_U1048 ))
                    {
                        sub_43322();
                        sub_44053();
                        sub_43435();
                        if (NOT (IS_CHAR_DEAD( l_U968 )))
                        {
                            BLOCK_CHAR_GESTURE_ANIMS( l_U968, 1 );
                        }
                        WAIT( 0 );
                    }
                }
                if ((l_U508 == 2) AND (NOT (IS_CHAR_INJURED( l_U968 ))))
                {
                    l_U508 = 3;
                    sub_16890( "FM2_TARG", 2, 1, ref l_U1048, 8, 1 );
                    while (sub_17960( l_U1048 ))
                    {
                        sub_43322();
                        sub_44053();
                        sub_43435();
                        if (NOT (IS_CHAR_DEAD( l_U968 )))
                        {
                            BLOCK_CHAR_GESTURE_ANIMS( l_U968, 1 );
                        }
                        WAIT( 0 );
                    }
                    ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3027(), 0 );
                    PRINT_NOW( "FM_COMMAND_14", 7500, 1 );
                    SETTIMERA( 0 );
                    SETTIMERB( 0 );
                    l_U572 = 7000;
                }
                if (DOES_OBJECT_EXIST( l_U1005 ))
                {
                    DELETE_OBJECT( ref l_U1005 );
                }
                l_U637 = 1;
            }
        }
    }
    return;
}

void sub_43322()
{
    if ((IS_CHAR_ARMED( l_U1026, 4 )) AND ((l_U794 == 0) AND (NOT (IS_CHAR_DEAD( l_U968 )))))
    {
        GET_CHAR_HEALTH( l_U968, ref l_U506 );
        GET_CHAR_COORDINATES( l_U1026, ref l_U516._fU0, ref l_U516._fU4, ref l_U516._fU8 );
        if (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U968, 3 ))
        {
            sub_43435();
        }
        else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U968, l_U1026, 0 ))
        {
            if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 125.31550000, -666.05290000, 13.76670000, 3.00000000, 2.00000000, 3.00000000, 1 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U968, 125.31550000, -666.05290000, 13.76670000, 1.00000000, 1.00000000, 3.00000000, 0 )))
            {
                UNLOCK_RAGDOLL( l_U968, 1 );
                sub_43748();
                l_U760 = 1;
                l_U794 = 1;
                l_U735 = 1;
            }
            else
            {
                l_U735 = 1;
                SETTIMERB( 10000 );
                sub_18743( ref l_U1048, 0 );
                if ((NOT (IS_PED_RAGDOLL( l_U968 ))) AND (NOT (IS_CHAR_INJURED( l_U968 ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U882 );
                    TASK_LOOK_AT_CHAR( 0, l_U1026, 60000, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1026 );
                    TASK_PLAY_ANIM( 0, "cower_idle", "missfrancis2", 1000.00000000, 1, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U882 );
                    TASK_PERFORM_SEQUENCE( l_U968, l_U882 );
                    CLEAR_SEQUENCE_TASK( l_U882 );
                    sub_27739( "FM2_PUNCH", ref l_U1048, 6, 1 );
                }
                l_U794 = 1;
            }
        }
    }
    return;
}

void sub_43435()
{
    if (l_U759 == 0)
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U968, 3 ))
        {
            PRINTSTRING( "\n ----> KNIFE KILL MADE <---- \n\n" );
            if (NOT (IS_CHAR_DEAD( l_U968 )))
            {
                STOP_PED_SPEAKING( l_U968, 1 );
                DAMAGE_CHAR( l_U968, 2000, 0 );
            }
            if (DOES_BLIP_EXIST( l_U843 ))
            {
                REMOVE_BLIP( l_U843 );
            }
            l_U759 = 1;
            l_U794 = 1;
        }
    }
    return;
}

void sub_43748()
{
    SMASH_GLASS_ON_OBJECT( 125.40000000, -665.59990000, 16.00000000, 2.00000000, 1865791464, 3.00000000 );
    return;
}

void sub_44053()
{
    if ((l_U748 == 0) AND (IS_CHAR_SHOOTING( l_U1026 )))
    {
        PRINTSTRING( "\n\n ----> Player shoots gun in office, alerting recptionist <---- \n\n\n" );
        GET_GAME_TIMER( ref l_U567 );
        l_U748 = 1;
    }
    return;
}

void sub_45111()
{
    if ((l_U735 == 0) AND ((l_U641 == 0) AND (l_U637 == 1)))
    {
        if (NOT (IS_CHAR_INJURED( l_U968 )))
        {
            if (NOT (IS_PED_RAGDOLL( l_U968 )))
            {
                if ((NOT (sub_17960( l_U1048 ))) AND (TIMERB() > l_U572))
                {
                    sub_27739( "FM2_BEGS", ref l_U1048, 6, 1 );
                    GENERATE_RANDOM_INT_IN_RANGE( 6000, 12000, ref l_U572 );
                    SETTIMERB( 0 );
                }
            }
        }
    }
    return;
}

void sub_45271()
{
    if ((l_U735 == 1) AND (l_U641 == 0))
    {
        if (NOT (IS_CHAR_INJURED( l_U968 )))
        {
            if ((NOT (sub_17960( l_U1048 ))) AND (TIMERB() > l_U572))
            {
                sub_27739( "FM2_PUNCH", ref l_U1048, 6, 1 );
                GENERATE_RANDOM_INT_IN_RANGE( 7000, 14000, ref l_U572 );
                SETTIMERB( 0 );
            }
        }
    }
    return;
}

void sub_45406()
{
    if ((NOT (IS_CHAR_INJURED( l_U968 ))) AND (l_U641 == 0))
    {
        if (l_U758 == 0)
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1026, l_U968, 1.00000000, 1.00000000, 1.00000000, 0 ))
            {
                FREEZE_CHAR_POSITION( l_U968, 1 );
            }
            else
            {
                FREEZE_CHAR_POSITION( l_U968, 0 );
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U968, l_U1026, 0 ))
            {
                FREEZE_CHAR_POSITION( l_U968, 0 );
                l_U758 = 1;
            }
        }
        if ((NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U968, l_U1026, 0 ))) AND ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U1026, l_U968, 1.00000000, 1.00000000, 1.00000000, 0 )) || (IS_CHAR_TOUCHING_CHAR( l_U1026, l_U968 ))))
        {
            PRINTSTRING( "\n\n ----> Touching Goldberg <---- \n\n\n" );
            if (l_U736 == 0)
            {
                sub_18743( ref l_U1048, 0 );
                sub_27739( "FM2_PUNCH", ref l_U1048, 6, 1 );
                l_U736 = 1;
                SETTIMERB( 0 );
            }
            if ((NOT (sub_17960( l_U1048 ))) AND (TIMERB() > l_U572))
            {
                sub_27739( "FM2_PUNCH", ref l_U1048, 6, 1 );
                GENERATE_RANDOM_INT_IN_RANGE( 8000, 15000, ref l_U572 );
                SETTIMERB( 0 );
            }
        }
    }
    return;
}

void sub_45834()
{
    int iVar2;

    if (l_U639 == 0)
    {
        if ((l_U751 == 1) || ((l_U637 == 1) || (l_U641 == 1)))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( l_U1026, l_U1003, 0.75000000, 0.75000000, 0.75000000, 0 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U882 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, 122.41000000, -668.51000000, 14.58000000 );
                TASK_PLAY_ANIM( 0, "take_obj", "missfrancis2", 4, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U882 );
                TASK_PERFORM_SEQUENCE( l_U1026, l_U882 );
                CLEAR_SEQUENCE_TASK( l_U882 );
                while (iVar2 < 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U1026, ref iVar2 );
                    WAIT( 0 );
                }
                WAIT( 500 );
                PLAY_SOUND_FROM_POSITION( -1, "FM2_TAKE_FILE_FROM_INTRAY", 122.41000000, -668.51000000, 14.58000000 );
                if (DOES_BLIP_EXIST( l_U837 ))
                {
                    REMOVE_BLIP( l_U837 );
                }
                if (DOES_BLIP_EXIST( l_U838 ))
                {
                    REMOVE_BLIP( l_U838 );
                }
                if (DOES_OBJECT_EXIST( l_U1003 ))
                {
                    DELETE_OBJECT( ref l_U1003 );
                }
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3027(), 1 );
                if (NOT (IS_CHAR_FATALLY_INJURED( l_U968 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U968 )))
                    {
                        WAIT( 3000 );
                        if (NOT (DOES_BLIP_EXIST( l_U843 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U968, ref l_U843 );
                            SET_BLIP_AS_FRIENDLY( l_U843, 0 );
                            CHANGE_BLIP_DISPLAY( l_U843, 2 );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U968 )))
                        {
                            PRINT_NOW( "FM_COMMAND_07", 7500, 1 );
                            SETTIMERA( 0 );
                            SETTIMERB( 0 );
                            l_U572 = 7000;
                        }
                    }
                }
                sub_3222( 7, "FM_MISC_06" );
                l_U639 = 1;
            }
        }
    }
    return;
}

void sub_46442()
{
    if ((l_U641 == 0) AND (IS_CHAR_FATALLY_INJURED( l_U968 )))
    {
        if (l_U639 == 0)
        {
            if (l_U642 == 0)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3027(), 0 );
                PRINT_NOW( "FM_COMMAND_14", 7500, 1 );
                SETTIMERA( 0 );
                SETTIMERB( 0 );
                l_U572 = 7000;
                if (DOES_BLIP_EXIST( l_U843 ))
                {
                    REMOVE_BLIP( l_U843 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U838 )))
                {
                    ADD_BLIP_FOR_OBJECT( l_U1003, ref l_U838 );
                    CHANGE_BLIP_COLOUR( l_U838, 2 );
                }
                TASK_CLEAR_LOOK_AT( l_U1026 );
                l_U642 = 1;
            }
        }
        l_U641 = 1;
    }
    return;
}

void sub_46863()
{
    int I;
    int iVar3;
    float fVar4;

    GET_GAME_TIMER( ref l_U568 );
    if (((l_U748 == 1) AND ((l_U568 - l_U567) > 30000)) || (l_U646 == 1))
    {
        CLEAR_PRINTS();
        SET_OBJECT_COORDINATES( l_U1001, 107.34490000, -680.50740000, 13.76670000 );
        I = 0;
        for ( I = 0; I <= 13; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U953[I] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U953[I], 116.37800000, -677.52800000, 14.76680000, 10.00000000, 10.00000000, 10.00000000, 0 ))
                {
                    SET_CHAR_COORDINATES( l_U953[I], 104.16570000 + I, -686.55550000 - I, 14.76670000 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U953[I] );
                    TASK_WANDER_STANDARD( l_U953[I] );
                }
            }
        }
        if ((NOT (IS_CHAR_DEAD( l_U969 ))) AND (IS_CHAR_INJURED( l_U969 )))
        {
            SET_CHAR_HEALTH( l_U969, 200 );
        }
        else if (IS_CHAR_DEAD( l_U969 ))
        {
            sub_11484();
        }
        while (l_U645 == 0)
        {
            if (NOT (IS_CHAR_INJURED( l_U969 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U969 )))
                {
                    SET_CHAR_COORDINATES( l_U969, 117.20000000, -677.40000000, 13.76670000 );
                    SET_CHAR_HEADING( l_U969, 289.73580000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U969, "GtaMloRoom08" );
                }
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 0, 0.00000000 );
                SET_WIDESCREEN_BORDERS( 1 );
                BEGIN_CAM_COMMANDS( ref l_U876 );
                CREATE_CAM( 14, ref l_U866 );
                CREATE_CAM( 14, ref l_U867 );
                CREATE_CAM( 14, ref l_U868 );
                CREATE_CAM( 14, ref l_U869 );
                SET_CAM_POS( l_U867, 116.01140000, -677.18970000, 15.11096000 );
                SET_CAM_ROT( l_U867, -5.04601700, -0.00000000, -58.58269000 );
                SET_CAM_POS( l_U867, 113.50710000, -679.69950000, 16.20355000 );
                SET_CAM_ROT( l_U867, -7.04571800, 0.00000000, -43.49180000 );
                SET_CAM_FOV( l_U867, 25.00000000 );
                SET_CAM_POS( l_U868, 122.69220000, -669.44530000, 14.52769000 );
                SET_CAM_ROT( l_U868, 1.14194400, -0.00000000, 149.00480000 );
                SET_CAM_FOV( l_U868, 32.00000000 );
                SET_CAM_POS( l_U869, 119.95590000, -673.13030000, 13.80387000 );
                SET_CAM_ROT( l_U869, 15.24467000, 0.00000000, -42.54568000 );
                SET_CAM_FOV( l_U869, 55.00000000 );
                OPEN_SEQUENCE_TASK( ref l_U882 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 121.35900000, -672.94780000, 13.76670000, 3, 10000, 1.20000000 );
                CLOSE_SEQUENCE_TASK( l_U882 );
                TASK_PERFORM_SEQUENCE( l_U969, l_U882 );
                CLEAR_SEQUENCE_TASK( l_U882 );
                WAIT( 1000 );
                SET_PLAYER_CONTROL( l_U1027, 0 );
                if (NOT (IS_CHAR_DEAD( l_U968 )))
                {
                    if ((NOT (IS_PED_RAGDOLL( l_U968 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U968, 120.30000000, -672.80000000, 13.80000000, 3.00000000, 3.00000000, 2.00000000, 0 )))
                    {
                        SET_CHAR_HEADING( l_U968, 150.00000000 );
                        SET_CHAR_COORDINATES( l_U968, 126.00000000, -671.00000000, 13.80000000 );
                    }
                }
                sub_27739( "FM2_OKAY", ref l_U1048, 7, 0 );
                SET_CAM_ACTIVE( l_U867, 1 );
                SET_CAM_PROPAGATE( l_U867, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_CHAR_COORDINATES( l_U1026, 122.60000000, -670.30000000, 13.80000000 );
                SET_CHAR_HEADING( l_U1026, 140.92110000 );
                while (l_U734 == 0)
                {
                    if (NOT (IS_CHAR_DEAD( l_U969 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( l_U969, 121.35900000, -672.94780000, 13.76670000, 2.20000000, 2.20000000, 2.20000000, 0 ))
                        {
                            l_U734 = 1;
                        }
                    }
                    WAIT( 0 );
                }
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1604829832, 120, 64862, 15, 1, -1.00000000 );
                SET_CAM_PROPAGATE( l_U867, 0 );
                SET_CAM_ACTIVE( l_U868, 1 );
                SET_CAM_PROPAGATE( l_U868, 1 );
                if (NOT (IS_CHAR_INJURED( l_U969 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U969 );
                    SET_CHAR_COORDINATES( l_U969, 120.30000000, -672.80000000, 13.80000000 );
                }
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U1026, l_U969 );
                sub_40368( l_U969, l_U1026 );
                if (NOT (IS_CHAR_INJURED( l_U969 )))
                {
                    TASK_FLUSH_ROUTE();
                    CLEAR_CHAR_TASKS( l_U969 );
                    OPEN_SEQUENCE_TASK( ref l_U882 );
                    TASK_STAND_STILL( 0, 250 );
                    TASK_PLAY_ANIM( 0, "drop_tray_scream", "missfrancis2", 4.00000000, 0, 0, 0, 0, 4000 );
                    TASK_EXTEND_ROUTE( 116.84370000, -673.61060000, 13.73170000 );
                    TASK_EXTEND_ROUTE( 114.49550000, -683.30870000, 13.76670000 );
                    TASK_EXTEND_ROUTE( 91.45480000, -684.12800000, 13.76830000 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 4, 0 );
                    TASK_SMART_FLEE_CHAR( 0, l_U1026, 250.00000000, -1 );
                    TASK_WANDER_STANDARD( 0 );
                    CLOSE_SEQUENCE_TASK( l_U882 );
                    TASK_PERFORM_SEQUENCE( l_U969, l_U882 );
                    CLEAR_SEQUENCE_TASK( l_U882 );
                }
                while (iVar3 != 1)
                {
                    if (NOT (IS_CHAR_DEAD( l_U969 )))
                    {
                        GET_SEQUENCE_PROGRESS( l_U969, ref iVar3 );
                    }
                    WAIT( 0 );
                }
                sub_48599();
                WAIT( 600 );
                TASK_PLAY_ANIM( l_U1026, "tie_adjust_stand", "missfrancis2", 4, 0, 0, 0, 0, 0 );
                WAIT( 0 );
                SET_CHAR_ANIM_CURRENT_TIME( l_U1026, "missfrancis2", "tie_adjust_stand", 0.25000000 );
                SET_CAM_PROPAGATE( l_U868, 0 );
                SET_CAM_ACTIVE( l_U869, 1 );
                SET_CAM_PROPAGATE( l_U869, 1 );
                SET_FAKE_WANTED_LEVEL( 2 );
                GET_CHAR_COORDINATES( l_U1026, ref l_U516._fU0, ref l_U516._fU4, ref l_U516._fU8 );
                l_U645 = 1;
            }
            WAIT( 0 );
        }
        while (fVar4 < 0.40000000)
        {
            if (NOT (IS_CHAR_DEAD( l_U969 )))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U969, "missfrancis2", "drop_tray_scream", ref fVar4 );
            }
            WAIT( 0 );
        }
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1026 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_ACTIVE( l_U869, 0 );
        SET_CAM_PROPAGATE( l_U869, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U867 );
        DESTROY_CAM( l_U868 );
        DESTROY_CAM( l_U869 );
        END_CAM_COMMANDS( ref l_U876 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_PLAYER_CONTROL( l_U1027, 1 );
        SET_ALL_RANDOM_PEDS_FLEE( l_U1027, 1 );
        if ((l_U639 == 1) AND (IS_CHAR_DEAD( l_U968 )))
        {
            if (DOES_BLIP_EXIST( l_U843 ))
            {
                REMOVE_BLIP( l_U843 );
            }
            if (DOES_BLIP_EXIST( l_U838 ))
            {
                REMOVE_BLIP( l_U838 );
            }
            PRINT( "FM_COMMAND_16", 7000, 1 );
            l_U749 = 1;
        }
        else if ((l_U639 == 0) AND (IS_CHAR_DEAD( l_U968 )))
        {
            if (DOES_BLIP_EXIST( l_U843 ))
            {
                REMOVE_BLIP( l_U843 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U838 )))
            {
                ADD_BLIP_FOR_OBJECT( l_U1003, ref l_U838 );
                CHANGE_BLIP_COLOUR( l_U838, 2 );
            }
            PRINT( "FM_COMMAND_14", 7000, 1 );
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            l_U572 = 7000;
            l_U751 = 1;
        }
        else if (NOT (IS_CHAR_DEAD( l_U968 )))
        {
            if (DOES_BLIP_EXIST( l_U838 ))
            {
                REMOVE_BLIP( l_U838 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U843 )))
            {
                ADD_BLIP_FOR_CHAR( l_U968, ref l_U843 );
                SET_BLIP_AS_FRIENDLY( l_U843, 0 );
                CHANGE_BLIP_DISPLAY( l_U843, 2 );
            }
            PRINT( "FM_COMMAND_07", 7000, 1 );
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            l_U572 = 7000;
            l_U750 = 1;
        };;;
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, 79, 64857, 15, 1, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 1, 0.00000000 );
        STOP_PED_SPEAKING( sub_2973(), 0 );
        if (NOT (IS_CHAR_DEAD( l_U968 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U968, 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U968 );
            TASK_SMART_FLEE_CHAR( l_U968, l_U1026, 200, -1 );
        }
        l_U505++;
    }
    return;
}

void sub_48599()
{
    char[12] cVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    array(ref cVar2, 2);
    StrCopy( ref cVar2[0], "FM2_COFF", 16 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U572 );
    if (l_U572 == 0)
    {
        StrCopy( ref cVar2[1], "FM2_SMARTY", 16 );
    }
    else if (l_U572 == 1)
    {
        StrCopy( ref cVar2[1], "FM2_NOTHIN", 16 );
    }
    else
    {
        StrCopy( ref cVar2[1], "FM2_NOTHERE", 16 );
    }
    sub_48741( ref cVar2, ref l_U1048, 7, 0 );
    return;
}

void sub_48741(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_48764( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_48764(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_16975( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_50113()
{
    GET_KEY_FOR_CHAR_IN_ROOM( l_U1026, ref l_U570 );
    GET_CHAR_COORDINATES( l_U1026, ref l_U516._fU0, ref l_U516._fU4, ref l_U516._fU8 );
    if ((l_U516._fU8 < 13.75000000) AND (l_U570 == 0))
    {
        if (DOES_BLIP_EXIST( l_U840 ))
        {
            REMOVE_BLIP( l_U840 );
        }
        if (DOES_BLIP_EXIST( l_U839 ))
        {
            REMOVE_BLIP( l_U839 );
        }
        SET_WANTED_MULTIPLIER( 0.50000000 );
        sub_50264();
        if ((l_U605 == 0) AND ((l_U641 == 0) AND (l_U639 == 1)))
        {
            PRINT_NOW( "FM_FAIL_06", 7000, 1 );
            ALTER_WANTED_LEVEL( l_U1027, 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
            SET_FAKE_WANTED_LEVEL( 0 );
            if (DOES_CHAR_EXIST( l_U968 ))
            {
                DELETE_CHAR( ref l_U968 );
            }
            l_U605 = 1;
        }
        else if ((l_U605 == 0) AND ((l_U641 == 1) AND (l_U639 == 0)))
        {
            PRINT_NOW( "FM_FAIL_05", 7000, 1 );
            ALTER_WANTED_LEVEL( l_U1027, 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
            SET_FAKE_WANTED_LEVEL( 0 );
            if (DOES_OBJECT_EXIST( l_U1003 ))
            {
                DELETE_OBJECT( ref l_U1003 );
            }
            l_U605 = 1;
        }
        else if ((l_U605 == 0) AND ((l_U641 == 1) AND (l_U639 == 1)))
        {
            PRINT_NOW( "FM_COMMAND_17", 7500, 1 );
            ALTER_WANTED_LEVEL( l_U1027, 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
            SET_FAKE_WANTED_LEVEL( 0 );
            l_U505 = 6;
        }
        else if ((l_U605 == 0) AND (l_U693[24] == 1))
        {
            PRINT_NOW( "FM_FAIL_09", 7000, 1 );
            SET_FAKE_WANTED_LEVEL( 0 );
            l_U605 = 1;
        }
        else if (l_U605 == 0)
        {
            PRINT_NOW( "FM_FAIL_06", 7000, 1 );
            ALTER_WANTED_LEVEL( l_U1027, 1 );
            SET_FAKE_WANTED_LEVEL( 0 );
            l_U605 = 1;
        };;;;;
    }
    return;
}

void sub_50264()
{
    int I;

    GET_CURRENT_COP_MODEL( ref l_U512 );
    CREATE_CHAR( 6, l_U512, 75.32390000, -723.62660000, 0.95730000, ref l_U971[0], 1 );
    SET_CHAR_HEADING( l_U971[0], 128.44540000 );
    CREATE_CHAR( 6, l_U512, 90.24630000, -754.07170000, 0.95870000, ref l_U971[1], 1 );
    SET_CHAR_HEADING( l_U971[1], 126.48300000 );
    CREATE_CHAR( 6, l_U512, 89.98079000, -752.86100000, 0.95870000, ref l_U971[2], 1 );
    SET_CHAR_HEADING( l_U971[2], 126.48500000 );
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U971[I] )))
        {
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U971[I] );
            SET_CHAR_RELATIONSHIP_GROUP( l_U971[I], 25 );
            SET_CHAR_RELATIONSHIP( l_U971[I], 1, 24 );
            SET_CHAR_RELATIONSHIP( l_U971[I], 1, 3 );
            SET_CHAR_RELATIONSHIP( l_U971[I], 5, 0 );
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U971[I], 7, 1000, 0 );
            TASK_COMBAT( l_U971[I], l_U1026 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U971[I], 1 );
        }
    }
    return;
}

void sub_51151()
{
    int I;
    vector vVar3;
    unknown uVar6;
    int J;
    unknown uVar8;

    sub_45834();
    if ((l_U749 == 0) AND ((l_U639 == 1) AND (IS_CHAR_DEAD( l_U968 ))))
    {
        if (DOES_BLIP_EXIST( l_U843 ))
        {
            REMOVE_BLIP( l_U843 );
        }
        if (DOES_BLIP_EXIST( l_U838 ))
        {
            REMOVE_BLIP( l_U838 );
        }
        PRINT( "FM_COMMAND_16", 7000, 1 );
        l_U749 = 1;
    }
    else if ((l_U751 == 0) AND ((l_U639 == 0) AND (IS_CHAR_DEAD( l_U968 ))))
    {
        if (DOES_BLIP_EXIST( l_U843 ))
        {
            REMOVE_BLIP( l_U843 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U838 )))
        {
            ADD_BLIP_FOR_OBJECT( l_U1003, ref l_U838 );
            CHANGE_BLIP_COLOUR( l_U838, 2 );
        }
        PRINT( "FM_COMMAND_14", 7000, 1 );
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        l_U572 = 7000;
        l_U751 = 1;
    }
    else if ((l_U750 == 0) AND (NOT (IS_CHAR_DEAD( l_U968 ))))
    {
        if (DOES_BLIP_EXIST( l_U838 ))
        {
            REMOVE_BLIP( l_U838 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U843 )))
        {
            ADD_BLIP_FOR_CHAR( l_U968, ref l_U843 );
            SET_BLIP_AS_FRIENDLY( l_U843, 0 );
            CHANGE_BLIP_DISPLAY( l_U843, 2 );
        }
        PRINT( "FM_COMMAND_07", 7000, 1 );
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        l_U572 = 7000;
        l_U750 = 1;
    };;;
    if (l_U647 == 0)
    {
        CLEAR_HELP();
        if (NOT (IS_CHAR_DEAD( l_U968 )))
        {
            TASK_SMART_FLEE_CHAR( l_U968, l_U1026, 200, -1 );
        }
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 80, 64824, 5, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 71, 64822, 5, 0, 0.00000000 );
        I = 0;
        for ( I = 0; I <= 11; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U953[I] )))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U953[I] );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1134712978 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1284047560 );
        DELETE_CHAR( ref l_U924[7] );
        vVar3 = {0.00000000, 0.00000000, 0.00000000};
        J = 0;
        for ( J = 0; J <= 11; J++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U924[J] )))
            {
                SET_CHAR_RELATIONSHIP( l_U924[J], 5, 0 );
                TASK_COMBAT( l_U924[J], l_U1026 );
            }
        }
        sub_51958();
        sub_52147();
        sub_52751();
        sub_53422();
        SETTIMERA( 0 );
        l_U647 = 1;
    }
    if ((l_U649 == 0) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 116.03180000, -681.65610000, 14.76680000, 8.00000000, 8.00000000, 5.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 116.37800000, -677.52800000, 14.76680000, 7.50000000, 7.50000000, 5.00000000, 0 ))))
    {
        if ((l_U770 == 0) AND (l_U769 == 1))
        {
            TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_FM2" );
            l_U770 = 1;
        }
        OPEN_SEQUENCE_TASK( ref l_U879 );
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "Push_Trolley", "missfrancis2", 1.00000000, 0, 0, 0, 1, -1 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 106.32440000, -682.98330000, 14.76680000, 2, -2, 0.50000000 );
        CLOSE_SEQUENCE_TASK( l_U879 );
        if (IS_CHAR_INJURED( l_U953[8] ))
        {
            REQUEST_MODEL( -1284047560 );
            while (NOT (HAS_MODEL_LOADED( -1284047560 )))
            {
                WAIT( 0 );
            }
            if (DOES_CHAR_EXIST( l_U953[8] ))
            {
                DELETE_CHAR( ref l_U953[8] );
            }
            CREATE_CHAR( 26, -1284047560, 108.34430000, -680.06700000, 14.76670000 - 1.00000000, ref l_U953[8], 1 );
            SET_CHAR_HEADING( l_U953[8], 144.94000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U953[8], "GtaMloRoom06" );
            sub_54052( l_U953[8] );
        }
        if (NOT (IS_CHAR_INJURED( l_U953[8] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U953[8] );
            SET_CHAR_COORDINATES( l_U953[8], 108.34430000, -680.06700000, 14.76670000 );
            SET_CHAR_HEADING( l_U953[8], 144.94000000 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U953[8], 1 );
            ATTACH_OBJECT_TO_PED( l_U1001, l_U953[8], 0, l_U558, l_U561, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U953[8] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U953[8], 1 );
            TASK_PERFORM_SEQUENCE( l_U953[8], l_U879 );
            CLEAR_SEQUENCE_TASK( l_U879 );
        }
        SETTIMERB( 0 );
        while (TIMERB() < 4000)
        {
            if (NOT (IS_CHAR_DEAD( l_U953[8] )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U953[8], l_U1026, 0 ))
                {
                    SETTIMERB( 5000 );
                }
            }
            else
            {
                SETTIMERB( 5000 );
            }
            WAIT( 0 );
        }
        DETACH_OBJECT( l_U1001, 1 );
        if (NOT (IS_CHAR_INJURED( l_U953[8] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U953[8] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U953[8], 0 );
            OPEN_SEQUENCE_TASK( ref l_U879 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 78.04000000, -712.24000000, 5.24630000, 4, -2, 2.00000000 );
            TASK_SMART_FLEE_CHAR( 0, l_U1026, 250.00000000, -1 );
            TASK_WANDER_STANDARD( 0 );
            CLOSE_SEQUENCE_TASK( l_U879 );
            TASK_PERFORM_SEQUENCE( l_U953[8], l_U879 );
            CLEAR_SEQUENCE_TASK( l_U879 );
        }
        l_U649 = 1;
    }
    if (l_U651 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 77.36910000, -680.00000000, 14.76120000, 1.50000000, 0.30000000, 1.50000000, 0 ))
        {
            if (DOES_BLIP_EXIST( l_U839 ))
            {
                REMOVE_BLIP( l_U839 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U969 );
            uVar8 = GET_SOUND_ID();
            PLAY_SOUND_FROM_POSITION( uVar8, "FM2_FINAL_INTERVIEW_DOOR_CHECK", 76.55181000, -679.44980000, 14.76120000 );
            PRINT_NOW( "FM_ESCAPE_01", 7500, 1 );
            l_U651 = 1;
        }
    }
    if ((l_U654 == 0) AND (l_U653 == 1))
    {
        sub_54827();
        PRINT_NOW( "FM_ESCAPE_06", 7500, 1 );
        l_U653 = 1;
        l_U654 = 1;
    }
    if ((l_U655 == 0) AND (l_U653 == 1))
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 80, 64824, 5, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 71, 64822, 5, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, 79, 64857, 15, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 0, 0.00000000 );
        l_U655 = 1;
    }
    GET_KEY_FOR_CHAR_IN_ROOM( l_U1026, ref l_U570 );
    if (l_U570 == 0)
    {
        if ((l_U605 == 0) AND (NOT (IS_CHAR_DEAD( l_U968 ))))
        {
            PRINT_NOW( "FM_FAIL_06", 7000, 1 );
            ALTER_WANTED_LEVEL( l_U1027, 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
            SET_FAKE_WANTED_LEVEL( 0 );
            if (DOES_CHAR_EXIST( l_U968 ))
            {
                DELETE_CHAR( ref l_U968 );
            }
            l_U605 = 1;
        }
        else if ((l_U605 == 0) AND (l_U639 == 0))
        {
            PRINT_NOW( "FM_FAIL_05", 7000, 1 );
            ALTER_WANTED_LEVEL( l_U1027, 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
            SET_FAKE_WANTED_LEVEL( 0 );
            if (DOES_OBJECT_EXIST( l_U1003 ))
            {
                DELETE_OBJECT( ref l_U1003 );
            }
            l_U605 = 1;
        }
        else if (DOES_BLIP_EXIST( l_U840 ))
        {
            REMOVE_BLIP( l_U840 );
        }
        if (DOES_BLIP_EXIST( l_U839 ))
        {
            REMOVE_BLIP( l_U839 );
        }
        SET_WANTED_MULTIPLIER( 0.50000000 );
        sub_50264();
        if (l_U733 == 0)
        {
            ALTER_WANTED_LEVEL( l_U1027, 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
            SET_FAKE_WANTED_LEVEL( 0 );
        }
        PRINT_NOW( "FM_COMMAND_17", 7500, 1 );
        l_U505++;;;
    }
    if (l_U731 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 73.94650000, -704.04790000, 14.76120000, 5.00000000, 5.00000000, 5.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U924[4] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U924[4] );
                TASK_GO_TO_COORD_WHILE_SHOOTING( l_U924[4], 73.94650000, -704.04790000, 14.76120000, 3, 0.50000000, 1.00000000, l_U1026, 0 );
                l_U731 = 1;
            }
        }
    }
    if (l_U733 == 0)
    {
        GET_CHAR_COORDINATES( l_U1026, ref l_U516._fU0, ref l_U516._fU4, ref l_U516._fU8 );
        if ((l_U516._fU8 < 6.50000000) || (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 78.43139000, -687.10840000, 8.37210000, 1.00000000, 1.00000000, 1.00000000, 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U937[2] )))
            {
                SET_COMBAT_DECISION_MAKER( l_U937[2], l_U1014 );
                SET_CHAR_RELATIONSHIP( l_U937[2], 5, 0 );
                TASK_COMBAT( l_U937[2], l_U1026 );
            }
            if (NOT (IS_CHAR_INJURED( l_U937[3] )))
            {
                SET_COMBAT_DECISION_MAKER( l_U937[3], l_U1014 );
                SET_CHAR_RELATIONSHIP( l_U937[3], 5, 0 );
                TASK_COMBAT( l_U937[3], l_U1026 );
            }
            SET_WANTED_MULTIPLIER( 0.50000000 );
            ALTER_WANTED_LEVEL( l_U1027, 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
            SET_FAKE_WANTED_LEVEL( 0 );
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_RANDOM_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SWITCH_PED_PATHS_ON( 54.75000000, -805.68000000, 1.00000000, 190.96000000, -680.31000000, 10.00000000 );
            SWITCH_PED_PATHS_ON( 126.70000000, -737.62000000, 1.00000000, 198.29000000, -574.59000000, 10.00000000 );
            SWITCH_PED_PATHS_ON( 44.28000000, -666.57000000, 6.00000000, 149.22000000, -580.64000000, 10.00000000 );
            SWITCH_PED_PATHS_ON( -35.22000000, -820.38000000, 1.00000000, -103.95000000, -245.04000000, 10.00000000 );
            l_U733 = 1;
        }
    }
    if ((l_U795 == 0) AND (NOT (IS_CHAR_DEAD( l_U937[13] ))))
    {
        GET_CHAR_HEALTH( l_U937[13], ref l_U506 );
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U937[13], l_U1026, 1 ))
        {
            sub_57176( l_U937[13], 0.00000000, -2.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1 );
            WAIT( 750 );
            sub_27739( "FM2_SCREAM", ref l_U1048, 7, 0 );
            l_U795 = 1;
        }
    }
    if ((l_U746 == 0) AND (l_U795 == 1))
    {
        if (NOT (IS_CHAR_DEAD( l_U937[13] )))
        {
            GET_CHAR_COORDINATES( l_U937[13], ref l_U584._fU0, ref l_U584._fU4, ref l_U584._fU8 );
            if (l_U584._fU8 < 4.60000000)
            {
                DAMAGE_CHAR( l_U937[13], 2000, 0 );
                l_U746 = 1;
            }
        }
        else
        {
            l_U746 = 1;
        }
    }
    if ((l_U796 == 0) AND (NOT (IS_CHAR_INJURED( l_U937[14] ))))
    {
        GET_CHAR_HEALTH( l_U937[14], ref l_U506 );
        if (l_U506 < 200)
        {
            SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U937[14], 0, 4000, 5, -0.50000000, -1.00000000, 0, 4.00000000, 0, 0, 0, 0, 0, 0 );
            l_U796 = 1;
        }
    }
    if ((l_U605 == 0) AND ((l_U757 == 0) AND (NOT (IS_CHAR_DEAD( l_U968 )))))
    {
        GET_CHAR_COORDINATES( l_U968, ref l_U584._fU0, ref l_U584._fU4, ref l_U584._fU8 );
        if ((NOT (IS_CHAR_ON_SCREEN( l_U968 ))) AND (l_U584._fU8 < 8.00000000))
        {
            if (DOES_CHAR_EXIST( l_U968 ))
            {
                DELETE_CHAR( ref l_U968 );
            }
            PRINT_NOW( "FM_FAIL_11", 7000, 1 );
            ALTER_WANTED_LEVEL( l_U1027, 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
            SET_FAKE_WANTED_LEVEL( 0 );
            if (DOES_CHAR_EXIST( l_U968 ))
            {
                DELETE_CHAR( ref l_U968 );
            }
            l_U605 = 1;
            l_U757 = 1;
        }
    }
    sub_58067();
    if ((l_U770 == 0) AND (l_U769 == 1))
    {
        TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_FM2" );
        l_U770 = 1;
    }
    return;
}

void sub_51958()
{
    CREATE_CHAR( 26, -1870989171, 117.20000000, -677.40000000, 13.76670000, ref l_U924[5], 1 );
    SET_CHAR_HEADING( l_U924[5], 289.73580000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U924[5], "GtaMloRoom08" );
    sub_11997( l_U924[5] );
    SET_CHAR_RELATIONSHIP( l_U924[5], 5, 0 );
    SET_CHAR_RELATIONSHIP( l_U924[5], 1, 26 );
    SET_CHAR_ACCURACY( l_U924[5], 60 );
    TASK_COMBAT( l_U924[5], l_U1026 );
    return;
}

void sub_52147()
{
    GET_CURRENT_COP_MODEL( ref l_U512 );
    CREATE_CHAR( 6, l_U512, 70.48630000, -715.88090000, 3.95120000, ref l_U937[2], 1 );
    SET_CHAR_HEADING( l_U937[2], 334.35980000 );
    sub_52232( l_U937[2] );
    CREATE_CHAR( 6, l_U512, 85.67030000 + 0.35000000, -714.59160000 - 0.15000000, 4.95690000 - 1.00000000, ref l_U937[3], 1 );
    SET_CHAR_HEADING( l_U937[3], 94.81300000 - 15 );
    sub_52232( l_U937[3] );
    CREATE_CHAR( 6, l_U512, 85.67030000 + 0.35000000, -714.59160000 - 1.15000000, 4.95690000 - 1.00000000, ref l_U937[5], 1 );
    SET_CHAR_HEADING( l_U937[5], 94.81300000 - 15 );
    sub_52232( l_U937[5] );
    GET_CURRENT_POLICE_CAR_MODEL( ref l_U513 );
    CREATE_CAR( l_U513, 84.45440000, -721.77040000, 4.49150000, ref l_U845[1], 1 );
    SET_CAR_HEADING( l_U845[1], 117.34940000 );
    LOCK_CAR_DOORS( l_U845[1], 1 );
    if ((NOT (IS_CAR_DEAD( l_U845[1] ))) AND (NOT (IS_CHAR_DEAD( l_U937[5] ))))
    {
        SET_CAR_ON_GROUND_PROPERLY( l_U845[1] );
        WARP_CHAR_INTO_CAR( l_U937[5], l_U845[1] );
        SET_SIREN_WITH_NO_DRIVER( l_U845[1], 1 );
        FORCE_CAR_LIGHTS( l_U845[1], 2 );
    }
    return;
}

void sub_52232(unknown uParam0)
{
    SET_CHAR_DECISION_MAKER( uParam0, l_U1008 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( uParam0 );
    GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 7, 1000, 0 );
    SET_CURRENT_CHAR_WEAPON( uParam0, 7, 0 );
    TASK_AIM_GUN_AT_CHAR( uParam0, l_U1026, 6000000 );
    SET_CHAR_IS_TARGET_PRIORITY( uParam0, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( uParam0, 25 );
    SET_CHAR_RELATIONSHIP( uParam0, 1, 24 );
    SET_CHAR_RELATIONSHIP( uParam0, 1, 3 );
    SET_CHAR_RELATIONSHIP( uParam0, 5, 0 );
    return;
}

void sub_52751()
{
    vector vVar2;
    vector vVar5;

    CREATE_CHAR( 26, l_U511, 78.63100000, -686.39730000, 9.59250000 - 1.00000000, ref l_U937[13], 1 );
    SET_CHAR_HEADING( l_U937[13], 206.32780000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U937[13], "Lobby2-Floor02" );
    SET_COMBAT_DECISION_MAKER( l_U937[13], l_U1013 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U937[13] );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U937[13], 7, 1000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U937[13], 7, 0 );
    TASK_COMBAT( l_U937[13], l_U1026 );
    vVar2 = {78.63100000, -686.39730000, 9.59250000};
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U937[13], vVar2, 1.00000000 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U937[13], 25 );
    SET_CHAR_RELATIONSHIP( l_U937[13], 1, 24 );
    SET_CHAR_RELATIONSHIP( l_U937[13], 5, 0 );
    SET_CHAR_ACCURACY( l_U937[13], 55 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U937[13], 1 );
    sub_10019( 6, l_U937[13], "SECURITY_3", 0 );
    CREATE_CHAR( 26, l_U511, 83.82020000, -686.93040000, 14.76120000 - 1.00000000, ref l_U937[14], 1 );
    SET_CHAR_HEADING( l_U937[14], 358.97170000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U937[14], "Lobby2-Floor03" );
    SET_COMBAT_DECISION_MAKER( l_U937[14], l_U1013 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U937[14] );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U937[14], 7, 1000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U937[14], 7, 0 );
    TASK_COMBAT( l_U937[14], l_U1026 );
    vVar5 = {83.82020000, -686.93040000, 14.76120000};
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U937[14], vVar5, 0.50000000 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U937[14], 25 );
    SET_CHAR_RELATIONSHIP( l_U937[14], 1, 24 );
    SET_CHAR_RELATIONSHIP( l_U937[14], 5, 0 );
    SET_CHAR_ACCURACY( l_U937[14], 55 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U937[14], 1 );
    return;
}

void sub_53422()
{
    l_U514 = -2137348917;
    REQUEST_MODEL( l_U514 );
    while (NOT (HAS_MODEL_LOADED( l_U514 )))
    {
        WAIT( 0 );
    }
    CREATE_CAR( l_U514, 73.14610000, -759.84530000, 3.86000000, ref l_U853, 1 );
    SET_CAR_HEADING( l_U853, 299.76470000 );
    LOCK_CAR_DOORS( l_U853, 1 );
    SET_CAR_ON_GROUND_PROPERLY( l_U853 );
    SET_CAR_AS_MISSION_CAR( l_U853 );
    return;
}

void sub_54052(unknown uParam0)
{
    SET_CHAR_DECISION_MAKER( uParam0, l_U1008 );
    SET_COMBAT_DECISION_MAKER( uParam0, l_U1012 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( uParam0 );
    return;
}

void sub_54827()
{
    GET_CURRENT_COP_MODEL( ref l_U512 );
    CREATE_CHAR( 26, l_U512, 91.14350000, -685.09670000, 9.59253000 - 1.00000000, ref l_U937[6], 1 );
    SET_CHAR_HEADING( l_U937[6], 125.81660000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U937[6], "Lobby2-Floor02" );
    SET_COMBAT_DECISION_MAKER( l_U937[6], l_U1014 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U937[6] );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U937[6], 7, 1000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U937[6], 7, 0 );
    TASK_COMBAT( l_U937[6], l_U1026 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U937[6], 25 );
    SET_CHAR_RELATIONSHIP( l_U937[6], 1, 24 );
    SET_CHAR_RELATIONSHIP( l_U937[6], 5, 0 );
    CREATE_CHAR( 26, l_U512, 71.05140000, -685.51920000, 9.59250000 - 1.00000000, ref l_U937[7], 1 );
    SET_CHAR_HEADING( l_U937[7], 264.00420000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U937[7], "Lobby2-Floor02" );
    SET_COMBAT_DECISION_MAKER( l_U937[7], l_U1014 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U937[7] );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U937[7], 7, 1000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U937[7], 7, 0 );
    TASK_COMBAT( l_U937[7], l_U1026 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U937[7], 25 );
    SET_CHAR_RELATIONSHIP( l_U937[7], 1, 24 );
    SET_CHAR_RELATIONSHIP( l_U937[7], 5, 0 );
    CREATE_CHAR( 26, l_U512, 78.65260000, -710.75840000, 14.76120000 - 1.00000000, ref l_U937[8], 1 );
    SET_CHAR_HEADING( l_U937[8], 17.48140000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U937[8], "Lobby2-Floor03" );
    SET_COMBAT_DECISION_MAKER( l_U937[8], l_U1014 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U937[8] );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U937[8], 7, 1000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U937[8], 7, 0 );
    TASK_COMBAT( l_U937[8], l_U1026 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U937[8], 25 );
    SET_CHAR_RELATIONSHIP( l_U937[8], 1, 24 );
    SET_CHAR_RELATIONSHIP( l_U937[8], 5, 0 );
    CREATE_CHAR( 26, l_U512, 82.34200000, -708.68110000, 14.76120000 - 1.00000000, ref l_U937[9], 1 );
    SET_CHAR_HEADING( l_U937[9], 54.73390000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U937[9], "Lobby2-Floor03" );
    SET_COMBAT_DECISION_MAKER( l_U937[9], l_U1014 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U937[9] );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U937[9], 7, 1000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U937[9], 7, 0 );
    TASK_COMBAT( l_U937[9], l_U1026 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U937[9], 25 );
    SET_CHAR_RELATIONSHIP( l_U937[9], 1, 24 );
    SET_CHAR_RELATIONSHIP( l_U937[9], 5, 0 );
    return;
}

void sub_57176(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, int iParam8)
{
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    int iVar15;

    fVar11 = 12.00000000 + l_U598;
    fVar12 = 1.50000000 + l_U599;
    fVar13 = 2.00000000 + l_U600;
    fVar14 = 0.15000000 + l_U601;
    iVar15 = 1;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL( uParam0, 0, 5000, 1, 1, 1, 0 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        CREATE_NM_MESSAGE( 1, 79 );
        SEND_NM_MESSAGE( uParam0 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        CREATE_NM_MESSAGE( 1, 114 );
        SET_NM_MESSAGE_VEC3( 116, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
        SET_NM_MESSAGE_FLOAT( 117, fVar14 );
        SET_NM_MESSAGE_BOOL( 118, iVar15 );
        SEND_NM_MESSAGE( uParam0 );
    }
    if (iParam7 == 1)
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            CREATE_NM_MESSAGE( 1, 289 );
            SET_NM_MESSAGE_FLOAT( 291, fVar11 );
            SET_NM_MESSAGE_FLOAT( 292, fVar12 );
            SET_NM_MESSAGE_FLOAT( 293, fVar13 );
            SEND_NM_MESSAGE( uParam0 );
        }
    }
    WAIT( 500 );
    if (iParam8 == 1)
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            CREATE_NM_MESSAGE( 1, 270 );
            SET_NM_MESSAGE_FLOAT( 274, 1.00000000 );
            SEND_NM_MESSAGE( uParam0 );
        }
    }
    return;
}

void sub_58067()
{
    if (l_U769 == 0)
    {
        if ((IS_SNIPER_BULLET_IN_AREA( 65.00000000, -727.00000000, 2.00000000, 132.00000000, -656.00000000, 25.00000000 )) || (IS_BULLET_IN_BOX( 65.00000000, -727.00000000, 2.00000000, 132.00000000, -656.00000000, 25.00000000, 0 )))
        {
            l_U769 = 1;
        }
    }
    return;
}

void sub_58256()
{
    int I;

    if (l_U657 == 0)
    {
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_RANDOM_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( 54.75000000, -805.68000000, 1.00000000, 190.96000000, -680.31000000, 10.00000000 );
        SWITCH_PED_PATHS_ON( 126.70000000, -737.62000000, 1.00000000, 198.29000000, -574.59000000, 10.00000000 );
        SWITCH_PED_PATHS_ON( 44.28000000, -666.57000000, 6.00000000, 149.22000000, -580.64000000, 10.00000000 );
        SWITCH_PED_PATHS_ON( -35.22000000, -820.38000000, 1.00000000, -103.95000000, -245.04000000, 10.00000000 );
        sub_4479();
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1356924456 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1284047560 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U514 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U969 );
        sub_4555();
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1870989171 );
        I = 0;
        for ( I = 0; I <= 14; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U937[I] )))
            {
                CLEAR_CHAR_TASKS( l_U937[I] );
                SET_CHAR_DECISION_MAKER( l_U937[I], l_U1010 );
                TASK_COMBAT( l_U937[I], l_U1026 );
            }
        }
        sub_4631();
        MARK_MODEL_AS_NO_LONGER_NEEDED( -183203150 );
        l_U657 = 1;
    }
    if ((l_U762 == 0) AND (NOT (IS_CAR_DEAD( l_U853 ))))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U1026, l_U853, 100, 100, 100, 0 )))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U853 );
            l_U762 = 1;
        }
    }
    if (NOT (IS_WANTED_LEVEL_GREATER( l_U1027, 0 )))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -183203150 );
        ADD_BLIP_FOR_COORD( -421.55990000, 295.22120000, 10.20250000, ref l_U842 );
        CHANGE_BLIP_COLOUR( l_U842, 5 );
        SET_ROUTE( l_U842, 1 );
        PRINT_NOW( "FM_COMMAND_18", 7500, 1 );
        l_U732 = 1;
        l_U505++;
    }
    return;
}

void sub_58902()
{
    int I;

    if (l_U658 == 0)
    {
        I = 0;
        for ( I = 0; I <= 14; I++ )
        {
            if (DOES_CHAR_EXIST( l_U937[I] ))
            {
                DELETE_CHAR( ref l_U937[I] );
            }
        }
        if (DOES_BLIP_EXIST( l_U843 ))
        {
            REMOVE_BLIP( l_U843 );
        }
        CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED( l_U1027 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_RANDOM_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( 54.75000000, -805.68000000, 1.00000000, 190.96000000, -680.31000000, 10.00000000 );
        SWITCH_PED_PATHS_ON( 126.70000000, -737.62000000, 1.00000000, 198.29000000, -574.59000000, 10.00000000 );
        SWITCH_PED_PATHS_ON( 44.28000000, -666.57000000, 6.00000000, 149.22000000, -580.64000000, 10.00000000 );
        SWITCH_PED_PATHS_ON( -35.22000000, -820.38000000, 1.00000000, -103.95000000, -245.04000000, 10.00000000 );
        l_U658 = 1;
    }
    if ((l_U762 == 0) AND (NOT (IS_CAR_DEAD( l_U853 ))))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U1026, l_U853, 100, 100, 100, 0 )))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U853 );
            l_U762 = 1;
        }
    }
    if (l_U761 == 1)
    {
        if (l_U648 == 0)
        {
            GET_CURRENT_CHAR_WEAPON( l_U1026, ref l_U581 );
            l_U571 = l_U581;
            GET_KEY_FOR_CHAR_IN_ROOM( l_U1026, ref l_U570 );
            if (l_U570 == 0)
            {
                l_U648 = 1;
            }
            if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, 123.65000000, -670.00000000, 13.82000000, 5.00000000, 5.00000000, 2.00000000, 0 ))) AND ((l_U570 != 0) AND ((l_U605 == 0) AND (IS_CHAR_ARMED( sub_2973(), 7 )))))
            {
                WAIT( 1000 );
                for ( I = 0; I <= 11; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U924[I] )))
                    {
                        SET_CHAR_RELATIONSHIP( l_U924[I], 5, 0 );
                        TASK_COMBAT( l_U924[I], l_U1026 );
                    }
                }
                SET_WANTED_MULTIPLIER( 0.50000000 );
                ALTER_WANTED_LEVEL( l_U1027, 2 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( l_U1027 );
                l_U648 = 1;
            }
            sub_24573();
        }
    }
    if ((l_U732 == 1) AND (IS_WANTED_LEVEL_GREATER( l_U1027, 0 )))
    {
        if (DOES_BLIP_EXIST( l_U842 ))
        {
            REMOVE_BLIP( l_U842 );
        }
        PRINT_NOW( "FM_COMMAND_17", 7500, 1 );
        l_U732 = 0;
    }
    if ((l_U732 == 0) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U1027, 0 ))))
    {
        if (NOT (DOES_BLIP_EXIST( l_U842 )))
        {
            ADD_BLIP_FOR_COORD( -421.55990000, 295.22120000, 10.20250000, ref l_U842 );
            CHANGE_BLIP_COLOUR( l_U842, 5 );
            SET_ROUTE( l_U842, 1 );
        }
        PRINT_NOW( "FM_COMMAND_18", 7500, 1 );
        l_U732 = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, -421.55990000, 295.22120000, 10.20250000, 50.00000000, 50.00000000, 50.00000000, 0 ))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U1026 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U1026, ref l_U976 );
        }
    }
    if (l_U764 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, -421.55990000, 295.22120000, 10.20250000, 120.00000000, 120.00000000, 120.00000000, 0 ))
        {
            sub_59975( 11 );
            while (NOT (sub_60007( 11 )))
            {
                WAIT( 0 );
            }
            REQUEST_ANIMS( "amb@smk_scn_destroy" );
            while (NOT (HAVE_ANIMS_LOADED( "amb@smk_scn_destroy" )))
            {
                WAIT( 0 );
            }
            REQUEST_MODEL( l_U515 );
            while (NOT (HAS_MODEL_LOADED( l_U515 )))
            {
                WAIT( 0 );
            }
            l_U764 = 1;
        }
    }
    if (l_U732 == 1)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, -421.55990000, 295.22120000, 10.20250000 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            REMOVE_BLIP( l_U842 );
            l_U505++;
        }
    }
    return;
}

void sub_59975(unknown uParam0)
{
    REQUEST_MODEL( sub_5025( uParam0 ) );
    return;
}

void sub_60007(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5025( uParam0 ) );
}

void sub_60287()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    while (l_U674 == 0)
    {
        if (l_U509 == 0)
        {
            l_U509 = 1;
            if (IS_CHAR_IN_ANY_CAR( l_U1026 ))
            {
                SET_PLAYER_CONTROL( l_U1027, 0 );
            }
            DO_SCREEN_FADE_OUT( 250 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_PLAYER_CONTROL( l_U1027, 0 );
            sub_60431( 11, ref l_U923, -418.50620000, 312.77240000, 10.55120000, 20.44280000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U923, 1 );
            sub_10019( 4, l_U923, "FRANCIS_MCREARY", 0 );
            if (NOT (IS_CAR_DEAD( l_U976 )))
            {
                if (LOCATE_CAR_3D( l_U976, -419.46610000, 312.47740000, 10.43430000, 7.50000000, 7.50000000, 4.00000000, 0 ))
                {
                    SET_CAR_HEADING( l_U976, 359.61530000 );
                    SET_CAR_COORDINATES( l_U976, -421.77770000, 293.83220000, 10.17840000 );
                    if (NOT (IS_THIS_MODEL_A_BOAT( uVar2 )))
                    {
                        SET_CAR_ON_GROUND_PROPERLY( l_U976 );
                    }
                }
                if ((NOT (IS_THIS_MODEL_A_BOAT( uVar2 ))) AND (LOCATE_CAR_3D( l_U976, -419.46610000, 312.47740000, 10.43430000, 25.00000000, 25.00000000, 10.00000000, 0 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( l_U976 );
                }
            }
            CLEAR_AREA( -407.68000000, 285.67000000, 18.58400000, 3.00000000, 1 );
            CLEAR_AREA( -421.87170000, 300.00000000, 10.16790000, 3.00000000, 1 );
            CLEAR_AREA( -421.87170000, 300.00000000, 10.16790000 + 3.00000000, 3.00000000, 1 );
            CLEAR_AREA( -421.87170000, 300.00000000, 10.16790000 + 6.00000000, 3.00000000, 1 );
            CLEAR_AREA( -421.87170000, 300.00000000, 10.16790000 + 9.00000000, 3.00000000, 1 );
            CLEAR_AREA( -421.87170000, 300.00000000, 10.16790000 + 12.00000000, 3.00000000, 1 );
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U1026 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1026 );
                SET_CHAR_COORDINATES( l_U1026, -421.87170000, 300.00000000, 10.16790000 );
                SET_CHAR_HEADING( l_U1026, 356.95390000 );
                SET_CURRENT_CHAR_WEAPON( l_U1026, 0, 1 );
            }
            if (l_U765 == 0)
            {
                CREATE_OBJECT( l_U515, -418.50620000, 313.50000000, 10.55120000, ref l_U1006, 1 );
                ATTACH_OBJECT_TO_PED( l_U1006, l_U923, 1232, 0, 0, 0, 0, 0, 0, 0 );
            }
            DISPLAY_RADAR( 0 );
            DISPLAY_HUD( 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref l_U876 );
            CREATE_CAM( 14, ref uVar3 );
            CREATE_CAM( 14, ref uVar4 );
            CREATE_CAM( 14, ref uVar5 );
            CREATE_CAM( 14, ref uVar6 );
            CREATE_CAM( 14, ref uVar7 );
            CREATE_CAM( 14, ref uVar8 );
            CREATE_CAM( 14, ref uVar9 );
            CREATE_CAM( 3, ref l_U875 );
            SET_CAM_POS( uVar3, -418.70730000, 314.70650000, 12.13177000 );
            SET_CAM_ROT( uVar3, -1.90391800, -0.00000000, -179.35810000 );
            SET_CAM_FOV( uVar3, 21 );
            SET_CAM_POS( uVar4, -419.89350000, 314.55680000, 11.96843000 );
            SET_CAM_ROT( uVar4, -4.76870600, -0.00000000, 175.94340000 );
            SET_CAM_FOV( uVar4, 36 );
            SET_CAM_POS( uVar5, -420.19810000, 313.41810000, 11.69998000 );
            SET_CAM_ROT( uVar5, 3.25271100, -0.00000000, 165.40140000 );
            SET_CAM_FOV( uVar5, 45 );
            SET_CAM_POS( uVar6, -421.31220000, 312.59700000, 11.84841000 );
            SET_CAM_ROT( uVar6, -2.36228600, 0.00000000, -76.34043000 );
            SET_CAM_FOV( uVar6, 44 );
            SET_CAM_POS( uVar7, -420.58030000, 313.23190000, 11.63952000 );
            SET_CAM_ROT( uVar7, 11.27413000, -0.00000000, -98.80066000 );
            SET_CAM_FOV( uVar7, 50 );
            SET_CAM_POS( uVar8, -421.10430000, 312.62950000, 11.75264000 );
            SET_CAM_ROT( uVar8, 12.39771000, 6.94063600, -77.91296000 );
            SET_CAM_FOV( uVar8, 51 );
            SET_CAM_POS( uVar9, -419.78750000, 315.39970000, 11.88034000 );
            SET_CAM_ROT( uVar9, 1.07564100, 1.03114300, 175.04650000 );
            SET_CAM_FOV( uVar9, 18.00000000 );
            SET_CAM_ACTIVE( uVar3, 1 );
            SET_CAM_PROPAGATE( uVar3, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            WAIT( 1000 );
            if (NOT (IS_CHAR_DEAD( l_U923 )))
            {
                TASK_PLAY_ANIM( l_U923, "walk_destroy", "amb@smk_scn_destroy", 4, 0, 0, 0, 0, -2 );
            }
            WAIT( 100 );
            if (NOT (IS_CHAR_DEAD( l_U923 )))
            {
                SET_CHAR_ANIM_CURRENT_TIME( l_U923, "amb@smk_scn_destroy", "walk_destroy", l_U1029[0]._fU0 );
            }
            SETTIMERA( 0 );
            if (IS_CHAR_IN_ANY_CAR( l_U1026 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U923 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U882 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_LOOK_AT_CHAR( 0, l_U923, 40000, 0 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, -420.50000000, 312.50000000, 10.31000000, 2, 30000 );
                    TASK_ACHIEVE_HEADING( 0, 309.94820000 );
                    CLOSE_SEQUENCE_TASK( l_U882 );
                    TASK_PERFORM_SEQUENCE( l_U1026, l_U882 );
                    CLEAR_SEQUENCE_TASK( l_U882 );
                }
                DO_SCREEN_FADE_IN( 500 );
                while ((TIMERA() < 8500) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U1026, -420.50000000, 312.50000000, 10.31000000, 1.00000000, 1.00000000, 1.00000000, 0 ))))
                {
                    if ((IS_SCREEN_FADED_IN()) AND (sub_18617()))
                    {
                        SETTIMERA( 10000 );
                    }
                    WAIT( 0 );
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U923 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U882 );
                TASK_LOOK_AT_CHAR( 0, l_U923, 40000, 0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -420.50000000, 312.50000000, 10.31000000, 2, 30000 );
                TASK_ACHIEVE_HEADING( 0, 309.94820000 );
                CLOSE_SEQUENCE_TASK( l_U882 );
                TASK_PERFORM_SEQUENCE( l_U1026, l_U882 );
                CLEAR_SEQUENCE_TASK( l_U882 );
            }
            DO_SCREEN_FADE_IN( 500 );
            WAIT( 2600 );;
            if (NOT (IS_CHAR_INJURED( l_U923 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U882 );
                TASK_LOOK_AT_CHAR( 0, l_U1026, 40000, 0 );
                TASK_STAND_STILL( 0, 1500 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -419.26860000, 313.17550000, 10.45620000, 2, 8000, 0.20000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1026 );
                CLOSE_SEQUENCE_TASK( l_U882 );
                TASK_PERFORM_SEQUENCE( l_U923, l_U882 );
                CLEAR_SEQUENCE_TASK( l_U882 );
            }
            SET_CAM_PROPAGATE( uVar3, 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U875, uVar3, uVar4, 4500, 500 );
            SET_CAM_ACTIVE( l_U875, 1 );
            SET_CAM_PROPAGATE( l_U875, 1 );
            SETTIMERA( 0 );
        }
        if ((l_U509 == 1) AND (TIMERA() > 5750))
        {
            l_U509 = 2;
            if (NOT (IS_CHAR_INJURED( l_U923 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1026 );
                SET_CHAR_COORDINATES( l_U1026, -420.56440000, 312.51930000, 10.31250000 );
                SET_CHAR_HEADING( l_U1026, 309.94820000 );
                OPEN_SEQUENCE_TASK( ref l_U882 );
                TASK_LOOK_AT_CHAR( 0, l_U923, 20000, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U923 );
                TASK_PLAY_ANIM( 0, "give_obj", "missfrancis2", 4, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U882 );
                TASK_PERFORM_SEQUENCE( l_U1026, l_U882 );
                CLEAR_SEQUENCE_TASK( l_U882 );
                OPEN_SEQUENCE_TASK( ref l_U882 );
                TASK_LOOK_AT_CHAR( 0, l_U1026, 20000, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1026 );
                TASK_PLAY_ANIM( 0, "take_obj", "missfrancis2", 4, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U882 );
                TASK_PERFORM_SEQUENCE( l_U923, l_U882 );
                CLEAR_SEQUENCE_TASK( l_U882 );
                if (DOES_OBJECT_EXIST( l_U1006 ))
                {
                    DETACH_OBJECT( l_U1006, 1 );
                }
                SET_CAM_PROPAGATE( l_U875, 0 );
                SET_CAM_ACTIVE( uVar5, 1 );
                SET_CAM_PROPAGATE( uVar5, 1 );
                sub_16890( "FM2_DONE", 0, 1, ref l_U1048, 6, 1 );
            }
            SETTIMERA( 0 );
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((l_U509 == 2) AND (TIMERA() > 0)))
        {
            l_U509 = 3;
            SET_CAM_PROPAGATE( uVar5, 0 );
            SET_CAM_ACTIVE( uVar6, 1 );
            SET_CAM_PROPAGATE( uVar6, 1 );
            sub_16890( "FM2_DONE", 1, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((l_U509 == 3) AND (TIMERA() > 0)))
        {
            l_U509 = 4;
            SET_CAM_PROPAGATE( uVar6, 0 );
            SET_CAM_ACTIVE( uVar7, 1 );
            SET_CAM_PROPAGATE( uVar7, 1 );
            sub_16890( "FM2_DONE", 2, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((l_U509 == 4) AND (TIMERA() > 0)))
        {
            l_U509 = 5;
            SET_CAM_PROPAGATE( uVar7, 0 );
            SET_CAM_ACTIVE( uVar8, 1 );
            SET_CAM_PROPAGATE( uVar8, 1 );
            sub_16890( "FM2_DONE", 3, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((l_U509 == 5) AND (TIMERA() > 1000)))
        {
            l_U509 = 6;
            SET_CAM_PROPAGATE( uVar8, 0 );
            SET_CAM_ACTIVE( uVar9, 1 );
            SET_CAM_PROPAGATE( uVar9, 1 );
            sub_16890( "FM2_DONE", 4, 1, ref l_U1048, 6, 1 );
            SETTIMERA( 0 );
        }
        if ((l_U509 == 6) AND (TIMERA() > 0))
        {
            l_U509 = 7;
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            SETTIMERA( 0 );
        }
        if ((NOT (sub_17960( l_U1048 ))) AND ((l_U509 == 7) AND (TIMERA() > 0)))
        {
            l_U509 = 8;
            OPEN_SEQUENCE_TASK( ref l_U882 );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "take_obj", "missfrancis2", 4, 0, 0, 0, 0, 0 );
            TASK_STAND_STILL( 0, 250 );
            TASK_GO_STRAIGHT_TO_COORD( 0, -421.87170000, 302.00130000, 10.16790000, 2, 10000 );
            CLOSE_SEQUENCE_TASK( l_U882 );
            TASK_PERFORM_SEQUENCE( l_U1026, l_U882 );
            CLEAR_SEQUENCE_TASK( l_U882 );
            if (NOT (IS_CHAR_DEAD( l_U923 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U882 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "give_obj", "missfrancis2", 4, 0, 0, 0, 0, 0 );
                TASK_STAND_STILL( 0, 1000 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -414.47500000, 315.11030000, 11.08300000, 2, 10000 );
                CLOSE_SEQUENCE_TASK( l_U882 );
                TASK_PERFORM_SEQUENCE( l_U923, l_U882 );
                CLEAR_SEQUENCE_TASK( l_U882 );
            }
            TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
            WAIT( 2500 );
            SETTIMERA( 0 );
        }
        if ((l_U509 == 8) AND (TIMERA() > 500))
        {
            l_U509 = 9;
            SET_CAM_ACTIVE( uVar9, 0 );
            SET_CAM_PROPAGATE( uVar9, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( uVar3 );
            DESTROY_CAM( uVar4 );
            DESTROY_CAM( uVar5 );
            DESTROY_CAM( uVar6 );
            DESTROY_CAM( uVar7 );
            DESTROY_CAM( uVar8 );
            DESTROY_CAM( uVar9 );
            DESTROY_CAM( l_U875 );
            END_CAM_COMMANDS( ref l_U876 );
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            CLEAR_ROOM_FOR_CHAR( l_U1026 );
            CLEAR_CHAR_TASKS( l_U1026 );
            SET_PLAYER_CONTROL( l_U1027, 1 );
            DELETE_CHAR( ref l_U923 );
            SETTIMERA( 0 );
            PRINTSTRING( "Pass Mission" );
            PRINTNL();
            l_U604 = 1;
            l_U674 = 1;
            l_U505 = -1;
        }
        if ((l_U674 == 0) AND ((IS_SCREEN_FADED_IN()) AND (sub_18617())))
        {
            DO_SCREEN_FADE_OUT( 1000 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            LOAD_SCENE( -421.87170000, 302.00130000, 10.16790000 );
            SET_CHAR_COORDINATES( l_U1026, -421.87170000, 302.00130000, 10.16790000 );
            SET_CHAR_HEADING( l_U1026, 176.34410000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            CLEAR_ROOM_FOR_CHAR( l_U1026 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CAM_ACTIVE( l_U875, 0 );
            SET_CAM_PROPAGATE( l_U875, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( uVar3 );
            DESTROY_CAM( uVar4 );
            DESTROY_CAM( uVar5 );
            DESTROY_CAM( uVar6 );
            DESTROY_CAM( uVar7 );
            DESTROY_CAM( l_U875 );
            SET_WIDESCREEN_BORDERS( 0 );
            END_CAM_COMMANDS( ref l_U876 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            DELETE_CHAR( ref l_U923 );
            WAIT( 1000 );
            CLEAR_CHAR_TASKS( l_U1026 );
            SET_PLAYER_CONTROL( l_U1027, 1 );
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
            PRINTSTRING( "Pass Mission" );
            PRINTNL();
            l_U604 = 1;
            l_U674 = 1;
            l_U505 = -1;
        }
        WAIT( 0 );
    }
    return;
}

void sub_60431(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_5025( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_60481( uParam0, (uParam1^) );
    return;
}

void sub_60481(unknown uParam0, unknown uParam1)
{
    sub_60493( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_60493(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_60587( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_61131( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_60587(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_61131(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_60587( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_60587( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_60587( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_60587( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_60587( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_60587( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_60587( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_60587( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_60587( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_60587( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_60587( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_60587( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_60587( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_66165()
{
    l_U606 = 0;
    sub_66183( 35 );
    sub_66278( 21 );
    UNLOCK_MISSION_NEWS_STORY( 21 );
    sub_69476();
    return;
}

void sub_66183(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        switch (g_U91._fU0)
        {
            case 1013:
            g_U91._fU92 = 1;
            break;
            default:
        }
        g_U15946[uParam0]._fU132._fU0 = 0;
    }
    return;
}

void sub_66278(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_66365( iParam0 ))
    {
        sub_67415( iParam0 );
    }
    return;
}

int sub_66365(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_66422( ref uVar3, 1, 0, 0 );
    sub_67034( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_17074( "\n ----------------------------------------------------------------" );
    sub_10103( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_17074( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_66422(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_66475( iParam0, uParam1, uParam2 );
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
        sub_66607( iParam0 + 0 );
    }
    return;
}

void sub_66475(int iParam0, int iParam1, int iParam2)
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
        sub_66607( iParam0 + 0 );
    }
    return;
}

void sub_66607(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_66638( iParam0->_fU4 )))
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

int sub_66638(unknown uParam0)
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

void sub_67034(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_67415(unknown uParam0)
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
        sub_67626( 20, 6, 16383, 16383, ref uVar4 );
        sub_68302( ref uVar4, 7 );
        sub_68333( ref uVar4, 0 );
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
        sub_67626( 20, 7, 9, 16383, ref uVar4 );
        sub_68302( ref uVar4, 7 );
        sub_68333( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_67626(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_67650( uParam0, 0, iParam4 + 0 );
    sub_67650( uParam1, 1, iParam4 + 0 );
    sub_67650( uParam2, 2, iParam4 + 0 );
    sub_67650( uParam3, 3, iParam4 + 0 );
    sub_67650( 0, 4, iParam4 + 0 );
    sub_67650( 1, 5, iParam4 + 0 );
    sub_67650( 65535, 6, iParam4 + 0 );
    sub_67650( 0, 12, iParam4 + 0 );
    sub_67650( 0, 11, iParam4 + 0 );
    sub_67650( 0, 14, iParam4 + 0 );
    sub_67650( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_67650( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_67650( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_67650(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_68302(int iParam0, unknown uParam1)
{
    sub_67650( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_68333(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_68373())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_69060( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_68859( iVar5 );
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

int sub_68373()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_68407( 5, g_U968[I] )) == 7)
        {
            sub_68859( I );
            return 1;
        }
    }
    return 0;
}

int sub_68407(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_68859(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_68932( 39 );
    return;
}

void sub_68932(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_69060(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_69121( uParam0, g_U968[Result] ))
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

int sub_69121(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_69476()
{
    sub_69485();
    return;
}

void sub_69485()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_69503();
    sub_69562( iVar2, iVar3, iVar4 );
    return;
}

void sub_69503()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_69562(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 11;
    sub_69595( iVar5, uParam0, uParam1, uParam2, "Contact_12" );
    return;
}

void sub_69595(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_69691( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_69691( ref cVar9 );
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
            sub_69691( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_69691( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_69691( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_69691( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_70268( iParam0, iVar7 );;;
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
                sub_70665( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_70665( 0, 4 );
            }
        }
    }
    if (NOT (sub_70754( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3027(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3027() );
    }
    sub_2050();
    bVar27 = true;
    uVar28 = sub_70268( iParam0, iVar7 );
    uVar29 = sub_1507( iParam0 );
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
                sub_80130( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_80560();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_80645( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_80702( iParam0 );
                sub_80741( 0 );
                sub_1948( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_80849();
        }
    }
    if (bParam2)
    {
        sub_80560();
        sub_80937();
        sub_80741( 0 );
    }
    if (bParam3)
    {
        sub_80560();
        sub_80977();
        sub_80741( 0 );
        sub_1948( uVar29, 0 );
    }
    sub_1394();
    return;
}

void sub_69691(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_70268(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1906( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_70665(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_70754(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_70962( uParam1 );
        break;
        case 1:
        bVar8 = sub_73040( uParam1 );
        break;
        case 2:
        bVar8 = sub_73266( uParam1 );
        break;
        case 3:
        bVar8 = sub_73416( uParam1 );
        break;
        case 4:
        bVar8 = sub_73694( uParam1 );
        break;
        case 5:
        bVar8 = sub_73997( uParam1 );
        break;
        case 6:
        bVar8 = sub_74196( uParam1 );
        break;
        case 7:
        bVar8 = sub_74422( uParam1 );
        break;
        case 8:
        bVar8 = sub_74657( uParam1 );
        break;
        case 9:
        bVar8 = sub_75032( uParam1 );
        break;
        case 10:
        bVar8 = sub_75279( uParam1 );
        break;
        case 11:
        bVar8 = sub_75418( uParam1 );
        break;
        case 12:
        bVar8 = sub_75717( uParam1 );
        break;
        case 13:
        bVar8 = sub_75945( uParam1 );
        break;
        case 14:
        bVar8 = sub_76232( uParam1 );
        break;
        case 15:
        bVar8 = sub_76514( uParam1 );
        break;
        case 16:
        bVar8 = sub_76796( uParam1 );
        break;
        case 17:
        bVar8 = sub_76997( uParam1 );
        break;
        case 18:
        bVar8 = sub_77070( uParam1 );
        break;
        case 19:
        bVar8 = sub_77284( uParam1 );
        break;
        case 20:
        bVar8 = sub_77537( uParam1 );
        break;
        case 21:
        bVar8 = sub_77784( uParam1 );
        break;
        case 22:
        bVar8 = sub_77985( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_72645( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_70268( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_78308( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_70962(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_71241( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_71241( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_71241( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_71241( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_71241( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_71241( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_71241( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_71241( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_71241( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_71241( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_71241( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_71241( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_71241( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_71241( iVar3, 0, 3, 1, 0, 0 );
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
        sub_71241( iVar3, 0, sub_72523(), sub_72789(), 0, 0 );
        break;
        default:
        sub_72948( "Friend 1", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Friend 1", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_71241(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_71252( uParam1 );
    sub_71426( uParam0, 0, uParam2 );
    sub_71426( uParam0, 1, uParam3 );
    sub_71426( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_69503();
    return;
}

void sub_71252(unknown uParam0)
{
    ADD_SCORE( sub_3027(), uParam0 );
    sub_71277( uParam0 );
    return;
}

void sub_71277(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1906( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_71426(unknown uParam0, int iParam1, int iParam2)
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
        sub_71583( uParam0 );
    }
    return;
}

void sub_71583(unknown uParam0)
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

int sub_72523()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_72645( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_72645(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_72789()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_72645( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_72948(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_73040(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_71241( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_72948( "Contact 2", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 2", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_73266(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_71241( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_72948( "Girl 3", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Girl 3", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_73416(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_71241( iVar3, 0, sub_72523(), sub_72789(), 0, 0 );
        break;
        default:
        sub_72948( "Friend 4", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Friend 4", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_73694(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_71241( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_71241( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_71241( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_71241( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_72948( "Contact 5", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 5", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_73997(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_72948( "Contact 7", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 7", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_74196(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_71241( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_72948( "Contact 7b", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 7b", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_74422(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_71241( iVar3, 0, sub_72523(), sub_72789(), 0, 0 );
        break;
        default:
        sub_72948( "Friend 8", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Friend 8", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_74657(unknown uParam0)
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
        sub_71241( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_71241( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_71241( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_71241( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_71241( iVar3, 0, sub_72523(), sub_72789(), 0, 0 );
        break;
        default:
        sub_72948( "Friend 9", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Friend 9", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_75032(unknown uParam0)
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
        sub_71241( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_71241( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_71241( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_72948( "Contact 10", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_72948( "Contact 10", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_75279(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_72948( "Girl 11", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Girl 11", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_75418(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_71241( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_71241( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_71241( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_71241( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_71241( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_72948( "Contact 12", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 12", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_75717(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_71241( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_72948( "Contact 13", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 13", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_75945(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_71241( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_71241( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_71241( iVar3, 0, sub_72523(), sub_72789(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_72948( "Friend 15", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Friend 15", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_76232(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_71241( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_71241( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_71241( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_72948( "Contact 16", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 16", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_76514(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_71241( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_71241( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_71241( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_72948( "Contact 18", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 18", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_76796(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_72948( "Contact 19", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 19", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_76997(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_72948( "Girl 20", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_77070(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_72948( "Contact 21", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 21", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_77284(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_71241( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_71241( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_72948( "Contact 22", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 22", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_77537(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_71241( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_71241( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_71241( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_72948( "Contact 24", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 24", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_77784(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_71241( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_71241( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_71241( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_72948( "Contact 25", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_72948( "Contact 25", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_77985(unknown uParam0)
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
        sub_71241( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_72948( "Girl 26", 1 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_72948( "Girl 26", 0 );
        sub_71241( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_78308(int iParam0, int iParam1)
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
    if (sub_78356( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_79087( iParam1 );
    }
    return;
}

int sub_78356(int iParam0, int iParam1)
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
            sub_78496( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_78496(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_78678( 0 );
    return;
}

void sub_78678(boolean bParam0)
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
        sub_78933();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_78933()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_79087(int iParam0)
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
        sub_79420( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_79420( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_79420( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_79420( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_79420( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_79420( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_79420( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_79420( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_79420( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_79420( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_79420( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_79420( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_79420( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_79420( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_79420( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_79420( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_79420( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_79420( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_79420( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_79420(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_80130(unknown uParam0, unknown uParam1)
{
    sub_80149( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_80149(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_80560()
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

int sub_80645(int iParam0, int iParam1)
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

void sub_80702(unknown uParam0)
{
    sub_1293();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_80741(unknown uParam0)
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

void sub_80849()
{
    sub_80858();
    return;
}

void sub_80858()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_80937()
{
    sub_80858();
    return;
}

void sub_80977()
{
    sub_80858();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_81107()
{
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3027(), 150 );
        SAY_AMBIENT_SPEECH( l_U1026, "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    l_U606 = 0;
    sub_81184();
    return;
}

void sub_81184()
{
    sub_81193();
    return;
}

void sub_81193()
{
    int iVar2;

    iVar2 = 11;
    sub_81207( iVar2 );
    sub_2041( iVar2 );
    return;
}

void sub_81207(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3027(), 150 );
    CLEAR_HELP();
    sub_865( uParam0 );
    return;
}

