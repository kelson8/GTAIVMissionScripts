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
    l_U549 = 0;
    l_U569 = 0;
    l_U570 = 0;
    l_U571 = 0;
    l_U572 = 2;
    l_U578 = {-1397.89300000, 1460.94300000, 24.20460000};
    l_U581 = 180.00000000;
    l_U583 = {-1319.33900000, 1276.58700000, 24.37010000};
    l_U586 = 125.78580000;
    l_U588 = {-1325.42800000, 1263.92700000, 22.91090000};
    l_U591 = 59.43250000;
    l_U592 = -1193778389;
    l_U594 = {-1339.39500000, 1275.83200000, 22.37020000};
    l_U597 = 216.49380000;
    l_U598 = -1193778389;
    l_U600 = {-1337.70200000, 1276.19700000, 23.37010000};
    l_U603 = 134.18920000;
    l_U604 = 219393781;
    l_U605 = {-1330.33700000, 1278.89000000, 23.37010000};
    l_U621 = -183203150;
    l_U638 = -183203150;
    l_U643 = {-1362.10300000, 1254.91900000, 23.37010000};
    l_U646 = 96.08400000;
    l_U647 = -999506922;
    l_U650 = -1186940778;
    l_U651 = {-1330.21000000, 1256.75600000, 22.37010000};
    l_U654 = 223.23210000;
    l_U658 = {-1359.30000000, 1254.10000000, 22.50000000};
    l_U661 = 130.00000000;
    l_U662 = -1646893330;
    l_U663 = {-1360.05000000, 1253.42000000, 23.37000000};
    l_U666 = {-1360.13300000, 1253.30900000, 24.07010000};
    l_U673 = 0;
    l_U674 = 0;
    l_U675 = 0;
    l_U676 = 0;
    l_U677 = 0;
    l_U678 = 0;
    l_U679 = 0;
    l_U680 = 0;
    l_U681 = 0;
    l_U682 = 0;
    l_U683 = 0;
    l_U684 = 0;
    l_U685 = 0;
    l_U686 = 0;
    l_U687 = 0;
    l_U688 = 0;
    l_U689 = 0;
    l_U690 = 0;
    l_U691 = 0;
    l_U692 = 0;
    l_U693 = 0;
    l_U694 = 0;
    l_U695 = 0;
    l_U696 = 0;
    l_U697 = 0;
    l_U698 = 0;
    l_U699 = 0;
    l_U700 = 0;
    l_U701 = 0;
    l_U702 = 0;
    l_U703 = 0;
    l_U704 = 0;
    l_U705 = 0;
    l_U706 = 4;
    l_U745 = 1000;
    l_U746 = 5000;
    l_U750 = {-1329.53800000, 1279.37600000, 23.57010000};
    l_U753 = 132.00000000;
    l_U754 = 1;
    l_U758 = 0;
    l_U759 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_787();
        sub_2897();
    }
    SET_MISSION_FLAG( 1 );
    sub_3567( l_U605 );
    sub_3567( l_U588 );
    sub_3567( l_U658 );
    sub_3567( l_U594 );
    sub_3567( l_U611[0] );
    sub_3567( l_U611[1] );
    sub_3729( "J3AUD" );
    LOAD_ADDITIONAL_TEXT( "J3AUD", 6 );
    LOAD_ADDITIONAL_TEXT( "JIMMY3", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    sub_3883();
    sub_3962();
    sub_4011( l_U578, -1388.21300000, 1441.12300000, 22.58280000, 262.86960000, 10.00000000 );
    if (g_U9893._fU24)
    {
        if (sub_4343())
        {
            if (g_U64692)
            {
                sub_4508();
            }
        }
        START_CUTSCENE_NOW( "J_3" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "J_3" );
    }
    if (NOT (IS_CHAR_INJURED( sub_4352() )))
    {
        SET_CHAR_COORDINATES( sub_4352(), l_U578._fU0, l_U578._fU4, l_U578._fU8 );
        SET_CHAR_HEADING( sub_4352(), l_U581 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    while (NOT sub_4843())
    {
        WAIT( 0 );
    }
    sub_5289();
    LOAD_SCENE( l_U578._fU0, l_U578._fU4, l_U578._fU8 );
    DO_SCREEN_FADE_IN( 500 );
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    SET_PLAYER_CONTROL( sub_3074(), 1 );
    sub_5543();
    while (true)
    {
        WAIT( 0 );
        if (l_U673)
        {
            if (l_U675)
            {
                if (NOT l_U576)
                {
                    sub_5673();
                    SET_PED_IS_BLIND_RAGING( sub_4352(), 1 );
                    l_U576 = 1;
                }
                if (NOT (IS_CHAR_INJURED( l_U656 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), l_U583._fU0, l_U583._fU4, l_U583._fU8, 200.00000000, 200.00000000, 200.00000000, 0 )))
                    {
                        PRINT_NOW( "J3008", 7500, 1 );
                        sub_6132();
                    }
                }
            }
            else if (IS_WANTED_LEVEL_GREATER( sub_3074(), 0 ))
            {
                l_U675 = 1;
            }
        }
        switch (l_U570)
        {
            case 0:
            if (l_U673)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), l_U583._fU0, l_U583._fU4, l_U583._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
                {
                    PRINT_NOW( "J3002", 7500, 1 );
                    l_U570 = 3;
                    if (DOES_BLIP_EXIST( l_U582 ))
                    {
                        REMOVE_BLIP( l_U582 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U656 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U656, ref l_U657 );
                        SET_BLIP_AS_FRIENDLY( l_U657, 0 );
                        SET_ROUTE( l_U657, 1 );
                    }
                    if (sub_6572())
                    {
                        ;
                    }
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), l_U583._fU0, l_U583._fU4, l_U583._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                {
                    if (NOT l_U685)
                    {
                        PRINT_HELP( "J3WEAPHLP" );
                        l_U685 = 1;
                    }
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), l_U583._fU0, l_U583._fU4, l_U583._fU8, 100.00000000, 100.00000000, 50.00000000, 0 ))
            {
                if (sub_6572())
                {
                    l_U673 = 1;
                }
                else if ((sub_7075()) AND (sub_7024()))
                {
                    sub_7132();
                    sub_7262();
                    sub_8292();
                    sub_8792();
                    sub_9402();
                    sub_9660();
                    sub_9789();
                    l_U673 = 1;
                }
            }
            else if (IS_KEYBOARD_KEY_PRESSED( 36 ))
            {
                SET_CHAR_COORDINATES( sub_4352(), l_U583._fU0, l_U583._fU4, l_U583._fU8 );
                SET_CHAR_HEADING( sub_4352(), l_U586 );
                SET_CAM_BEHIND_PED( sub_4352() );
            };;;
            break;
            case 3:
            sub_10217();
            sub_11048();
            sub_11479();
            if (sub_11946())
            {
                if (sub_14025())
                {
                    if (NOT (sub_11647( l_U718 )))
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_3074(), 2 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3074() );
                        PRINT_NOW( "J3005", 7500, 1 );
                        l_U570 = 4;
                    }
                }
            }
            else if (sub_14167( sub_4352() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U656 )))
                {
                    GET_CHAR_HEADING( l_U656, ref l_U661 );
                }
                sub_14562();
                sub_14853();
                if (l_U675)
                {
                    if (TIMERB() > 1000)
                    {
                        if (DOES_BLIP_EXIST( l_U657 ))
                        {
                            if (NOT l_U676)
                            {
                                if (l_U681)
                                {
                                    PRINT( "J3007", 7500, 1 );
                                }
                                else if (NOT (sub_11647( l_U718 )))
                                {
                                    PRINT( "J3004", 7500, 1 );
                                }
                                l_U676 = 1;
                            }
                            ALTER_WANTED_LEVEL_NO_DROP( sub_3074(), 2 );
                            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3074() );
                        }
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U657 )))
                {
                    if (sub_16969())
                    {
                        if (sub_13024( "J3_FIND", ref l_U736, 6, 1 ))
                        {
                            l_U675 = 1;
                        }
                    }
                }
                if ((sub_17978()) || (sub_17069()))
                {
                    l_U675 = 1;
                }
                sub_18061();
                sub_18369();
                sub_20325();
                sub_20894();
                if (NOT (IS_CHAR_INJURED( l_U649 )))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4352(), l_U649, 5.00000000, 5.00000000, 5.00000000, 0 )) || (l_U695))
                    {
                        sub_21495();
                    }
                }
                if (sub_4343())
                {
                    sub_22416();
                }
            }
            else if (l_U675)
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), l_U583._fU0, l_U583._fU4, l_U583._fU8, 200.00000000, 200.00000000, 200.00000000, 0 )))
                {
                    PRINT_NOW( "J3008", 7500, 1 );
                    sub_6132();
                }
            }
            else if (IS_WANTED_LEVEL_GREATER( sub_3074(), 0 ))
            {
                l_U675 = 1;
            };;;;
            break;
            case 4:
            if (NOT (sub_14167( sub_4352() )))
            {
                if (DOES_BLIP_EXIST( l_U582 ))
                {
                    REMOVE_BLIP( l_U582 );
                }
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_3074(), 0 )))
                {
                    sub_22817();
                }
                else if (NOT (sub_11647( l_U718 )))
                {
                    if (NOT l_U678)
                    {
                        PRINT_NOW( "J3005", 7500, 1 );
                        l_U678 = 1;
                        STOP_PED_SPEAKING( sub_4352(), 0 );
                        SAY_AMBIENT_SPEECH( sub_4352(), "KILLED_ALL", 1, 1, 0 );
                        STOP_PED_SPEAKING( sub_4352(), 1 );
                        SET_PED_IS_BLIND_RAGING( sub_4352(), 0 );
                    }
                }
            }
            else
            {
                sub_10217();
                sub_11048();
            }
            if (l_U675)
            {
                ;
            }
            else
            {
                sub_18369();
                if ((sub_17978()) || (sub_17069()))
                {
                    PRINT_NOW( "J3004", 7500, 1 );
                    l_U675 = 1;
                }
            }
            break;
        }
        if (NOT sub_4343())
        {
            if (l_U675 == 0)
            {
                sub_40148();
            }
        }
        sub_41408();
        sub_41463();
        sub_41719();
        sub_42081();
        if (l_U705)
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_3074(), 0 )))
            {
                PRINT_NOW( "J3004", 7500, 1 );
                if (NOT (IS_CHAR_DEAD( l_U656 )))
                {
                    DELETE_CHAR( ref l_U656 );
                }
                if (IS_PLAYER_PLAYING( sub_3074() ))
                {
                    ALTER_WANTED_LEVEL_NO_DROP( sub_3074(), 3 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3074() );
                }
            }
        }
    }
    return;
}

void sub_787()
{
    sub_796();
    return;
}

void sub_796()
{
    int iVar2;

    iVar2 = 20;
    sub_810( iVar2 );
    sub_1986( iVar2 );
    return;
}

void sub_810(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_854();
        sub_1015();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1123();
            sub_1162();
        }
    }
    sub_1238();
    sub_1339();
    uVar5 = sub_1452( uParam0 );
    sub_1893( uVar5, 0 );
    return;
}

void sub_854()
{
    sub_868( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_968();
    }
    return;
}

void sub_868(int iParam0)
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

void sub_968()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1015()
{
    sub_1024();
    return;
}

void sub_1024()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1123()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1162()
{
    sub_1171();
    return;
}

void sub_1171()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1238()
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

void sub_1339()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1361();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1361()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1452(unknown uParam0)
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
    sub_1851( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1851(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1893(int iParam0, boolean bParam1)
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

void sub_1986(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1995();
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
        sub_2770();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1995()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2033( 5, g_U569[I] )) == 1))
        {
            if ((sub_2033( 1, g_U569[I] )) != 0)
            {
                sub_2319( I );
            }
        }
    }
    if (NOT sub_2485())
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

int sub_2033(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2319(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2404( g_U569 - 1 );
    return;
}

void sub_2404(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2485()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2033( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2770()
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

void sub_2897()
{
    sub_2911( ref l_U718, 1 );
    sub_2911( ref l_U724, 1 );
    sub_2911( ref l_U730, 1 );
    sub_2911( ref l_U736, 1 );
    sub_3065();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    sub_3198( l_U706, "J3UNIFRM" );
    sub_3198( l_U706, "J3UNPLUG" );
    sub_3198( l_U706, "J3RECEPT" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2911(int iParam0, unknown uParam1)
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

void sub_3065()
{
    if (IS_PLAYER_PLAYING( sub_3074() ))
    {
        SET_PLAYER_CONTROL( sub_3074(), 1 );
    }
    sub_3130();
    return;
}

void sub_3074()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3130()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3198(int iParam0, string sParam1)
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
                    sub_3130();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3074(), 1 );
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

void sub_3567(vector vParam0)
{
    vector vVar5;
    vector vVar8;

    vVar5 = {-3.00000000, -3.00000000, -3.00000000};
    vVar8 = {3.00000000, 3.00000000, 3.00000000};
    vVar5 = {vParam0 + vVar5};
    vVar8 = {vParam0 + vVar8};
    ADD_SCENARIO_BLOCKING_AREA( vVar5, vVar8 );
    return;
}

void sub_3729(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3748();
    return;
}

void sub_3748()
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

void sub_3883()
{
    l_U743 = GET_SOUND_ID();
    PLAY_SOUND_FROM_POSITION( l_U743, "HOSPITAL_KILLING_SINGLE_BLEEP", l_U666 );
    return;
}

void sub_3962()
{
    return;
}

void sub_4011(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;

    uVar10 = uParam7;
    uVar11 = nil;
    uVar12 = nil;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar11 );
    if (NOT (IS_CAR_DEAD( uVar11 )))
    {
        GET_CAR_UPRIGHT_VALUE( uVar11, ref fVar13 );
        if ((fVar13 > 0.90000000) AND (IS_VEH_DRIVEABLE( uVar11 )))
        {
            if (LOCATE_CAR_3D( uVar11, uParam0._fU0, uParam0._fU4, uParam0._fU8, uVar10, uVar10, uVar10, 0 ))
            {
                GET_DRIVER_OF_CAR( uVar11, ref uVar12 );
                if (IS_CHAR_DEAD( uVar12 ))
                {
                    if (NOT (IS_CAR_A_MISSION_CAR( uVar11 )))
                    {
                        SET_CAR_AS_MISSION_CAR( uVar11 );
                    }
                    CLEAR_AREA( uParam3._fU0, uParam3._fU4, uParam3._fU8, 3.00000000, 0 );
                    SET_CAR_HEADING( uVar11, uParam6 );
                    SET_CAR_COORDINATES( uVar11, uParam3._fU0, uParam3._fU4, uParam3._fU8 );
                }
            }
        }
        else
        {
            DELETE_CAR( ref uVar11 );
        }
    }
    CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, uVar10, 0 );
    if (NOT (IS_CAR_DEAD( uVar11 )))
    {
        if (IS_CAR_A_MISSION_CAR( uVar11 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar11 );
        }
    }
    return;
}

int sub_4343()
{
    if (NOT (IS_CHAR_DEAD( sub_4352() )))
    {
        l_U707 = GET_CHAR_DRAWABLE_VARIATION( sub_4352(), 1 );
        l_U709 = GET_CHAR_DRAWABLE_VARIATION( sub_4352(), 2 );
        if ((l_U709 == 3) AND (l_U707 == 6))
        {
            return 1;
        }
        if (l_U707 == 6)
        {
            return 1;
        }
    }
    return 0;
}

void sub_4352()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4508()
{
    int[10] iVar2;
    int I;

    array(ref iVar2, 10);
    iVar2[0] = 0;
    iVar2[1] = 1;
    iVar2[2] = 2;
    iVar2[3] = 3;
    iVar2[4] = 4;
    iVar2[5] = 5;
    iVar2[6] = 6;
    iVar2[7] = 7;
    iVar2[8] = 8;
    iVar2[9] = 9;
    if (NOT (IS_CHAR_INJURED( sub_4352() )))
    {
        for ( I = 0; I < 10; I++ )
        {
            SET_CHAR_COMPONENT_VARIATION( sub_4352(), iVar2[I], g_U64693[I], g_U64704[I] );
        }
    }
    g_U64692 = 0;
    return;
}

int sub_4843()
{
    REQUEST_MODEL( l_U592 );
    REQUEST_MODEL( l_U598 );
    REQUEST_MODEL( l_U604 );
    REQUEST_MODEL( l_U621 );
    REQUEST_MODEL( l_U662 );
    REQUEST_MODEL( l_U638 );
    REQUEST_MODEL( l_U647 );
    REQUEST_MODEL( 1921594099 );
    REQUEST_MODEL( l_U650 );
    REQUEST_ANIMS( "MISSJIMMY3" );
    REQUEST_MODEL( sub_4980() );
    if ((HAVE_ANIMS_LOADED( "MISSJIMMY3" )) AND ((HAS_MODEL_LOADED( sub_4980() )) AND ((HAS_MODEL_LOADED( l_U650 )) AND ((HAS_MODEL_LOADED( 1921594099 )) AND ((HAS_MODEL_LOADED( l_U647 )) AND ((HAS_MODEL_LOADED( l_U638 )) AND ((HAS_MODEL_LOADED( l_U662 )) AND ((HAS_MODEL_LOADED( l_U621 )) AND ((HAS_MODEL_LOADED( l_U604 )) AND ((HAS_MODEL_LOADED( l_U598 )) AND (HAS_MODEL_LOADED( l_U592 ))))))))))))
    {
        if (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION\HOSPITAL_KILLING" ))
        {
            LOAD_COMBAT_DECISION_MAKER( 7, ref l_U672 );
            LOAD_COMBAT_DECISION_MAKER( 2, ref l_U757 );
            return 1;
        }
    }
    return 0;
}

void sub_4980()
{
    if (l_U759 == 0)
    {
        GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U759 );
    }
    return l_U759;
}

void sub_5289()
{
    unknown[2] uVar2;

    array(ref uVar2, 2);
    CREATE_CAR( sub_4980(), -1316.53300000, 1285.45100000, 21.36570000, ref uVar2[0], 1 );
    SET_CAR_HEADING( uVar2[0], 232.21930000 );
    SET_CAR_COORDINATES( uVar2[0], -1316.53300000, 1285.45100000, 21.36570000 );
    CREATE_CAR( sub_4980(), -1308.99800000, 1276.34300000, 21.36570000, ref uVar2[1], 1 );
    SET_CAR_HEADING( uVar2[1], 225.38740000 );
    SET_CAR_COORDINATES( uVar2[1], -1308.99800000, 1276.34300000, 21.36570000 );
    return;
}

void sub_5543()
{
    ADD_BLIP_FOR_COORD( l_U583._fU0, l_U583._fU4, l_U583._fU8, ref l_U582 );
    SET_ROUTE( l_U582, l_U754 );
    PRINT_NOW( "J3001", 7500, 1 );
    return;
}

void sub_5673()
{
    int I;
    unknown[2] uVar3;
    vector[2] vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    array(ref uVar3, 2);
    array(ref vVar6, 2);
    vVar6[0] = {-1326.95700000, 1269.96600000, 23.34020000};
    vVar6[1] = {-1324.08700000, 1272.62400000, 23.34020000};
    for ( I = 0; I < 2; I++ )
    {
        GET_GAME_VIEWPORT_ID( ref uVar13 );
        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar13, vVar6[I]._fU0, vVar6[I]._fU4, vVar6[I]._fU8, 5.00000000 )))
        {
            CREATE_CHAR( 6, l_U638, vVar6[I]._fU0, vVar6[I]._fU4, vVar6[I]._fU8, ref uVar3[I], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar3[I] );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar3[I], "GTA_MloRoom011" );
            SET_COMBAT_DECISION_MAKER( uVar3[I], l_U672 );
            GIVE_WEAPON_TO_CHAR( uVar3[I], 7, 150, 0 );
            SET_CURRENT_CHAR_WEAPON( uVar3[I], 0, 0 );
            TASK_START_SCENARIO_IN_PLACE( uVar3[I], "Scenario_Bouncer", -1082130432 );
            SET_CHAR_RELATIONSHIP_GROUP( uVar3[I], 3 );
            SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( uVar3[I], 1 );
        }
    }
    return;
}

void sub_6132()
{
    if (g_U9930 > 2)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3074(), 150 );
        SAY_AMBIENT_SPEECH( sub_4352(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_6203();
    sub_2897();
    return;
}

void sub_6203()
{
    sub_6212();
    return;
}

void sub_6212()
{
    int iVar2;

    iVar2 = 20;
    sub_6226( iVar2 );
    sub_1986( iVar2 );
    return;
}

void sub_6226(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3074(), 150 );
    CLEAR_HELP();
    sub_810( uParam0 );
    return;
}

int sub_6572()
{
    if ((IS_SITTING_OBJECT_NEAR( l_U643, 798444530 )) AND ((IS_SITTING_OBJECT_NEAR( l_U588, 976040367 )) AND (IS_SITTING_OBJECT_NEAR( l_U594, 976040367 ))))
    {
        if ((NOT (IS_CHAR_DEAD( l_U642 ))) AND ((NOT (IS_CHAR_DEAD( l_U587 ))) AND (NOT (IS_CHAR_DEAD( l_U593 )))))
        {
            GET_SCRIPT_TASK_STATUS( l_U587, 112, ref l_U669 );
            if (l_U669 == 7)
            {
                TASK_SIT_DOWN_ON_NEAREST_OBJECT( l_U587, 0, 2, l_U588, 976040367, 0.00000000, -2, 1 );
                TASK_SIT_DOWN_ON_NEAREST_OBJECT( l_U642, 0, 0, l_U643, 798444530, 0.00000000, -2, 1 );
                TASK_SIT_DOWN_ON_NEAREST_OBJECT( l_U593, 0, 2, l_U594, 976040367, 0.00000000, -2, 1 );
                return 1;
            }
            else if (l_U669 == 1)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_7024()
{
    REQUEST_MODEL( l_U638 );
    if (HAS_MODEL_LOADED( l_U638 ))
    {
        return 1;
    }
    return 0;
}

int sub_7075()
{
    REQUEST_MODEL( l_U621 );
    if (HAS_MODEL_LOADED( l_U621 ))
    {
        return 1;
    }
    return 0;
}

void sub_7132()
{
    if (NOT (DOES_OBJECT_EXIST( l_U749 )))
    {
        CREATE_OBJECT_NO_OFFSET( 1921594099, l_U750._fU0, l_U750._fU4, l_U750._fU8, ref l_U749, 1 );
        SET_OBJECT_HEADING( l_U749, l_U753 );
        FREEZE_OBJECT_POSITION( l_U749, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U749, "GTAMloRoom04" );
    }
    return;
}

void sub_7262()
{
    l_U611[0] = {-1369.13000000, 1255.50700000, 22.37010000};
    l_U611[1] = {-1367.60300000, 1252.79900000, 23.37010000};
    l_U618[0] = 296.50210000;
    l_U618[1] = 325.56990000;
    if (IS_CHAR_DEAD( l_U608[0] ))
    {
        CREATE_CHAR( 6, l_U621, l_U611[0]._fU0, l_U611[0]._fU4, l_U611[0]._fU8, ref l_U608[0], 1 );
        SET_CHAR_HEADING( l_U608[0], l_U618[0] );
        SET_CHAR_COMPONENT_VARIATION( l_U608[0], 0, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U608[0], 4, 0, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U608[0], "GTA_MloRoom04" );
        SET_COMBAT_DECISION_MAKER( l_U608[0], l_U672 );
        GIVE_WEAPON_TO_CHAR( l_U608[0], 7, 150, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U608[0], 0, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U608[0], 3 );
        SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U608[0], 1 );
    }
    if (IS_CHAR_DEAD( l_U608[1] ))
    {
        CREATE_CHAR( 6, l_U638, l_U611[1]._fU0, l_U611[1]._fU4, l_U611[1]._fU8, ref l_U608[1], 1 );
        SET_CHAR_HEADING( l_U608[1], l_U618[1] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U608[1] );
        SET_CHAR_COMPONENT_VARIATION( l_U608[1], 0, 1, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U608[1], 4, 1, 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U608[1], "GTA_MloRoom04" );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U608[1], "Goon_Lean_on_Wall", "MISSJIMMY3", 4.00000000, 1, 0, 0, 0, 0 );
        SET_COMBAT_DECISION_MAKER( l_U608[1], l_U672 );
        GIVE_WEAPON_TO_CHAR( l_U608[1], 7, 150, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U608[1], 0, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U608[1], 3 );
        TASK_START_SCENARIO_IN_PLACE( l_U608[1], "Scenario_Bouncer", -1082130432 );
        SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U608[1], 1 );
    }
    if (IS_CHAR_DEAD( l_U656 ))
    {
        CREATE_CHAR( 4, l_U662, l_U658._fU0, l_U658._fU4, l_U658._fU8, ref l_U656, 1 );
        SET_CHAR_COORDINATES( l_U656, l_U658._fU0, l_U658._fU4, l_U658._fU8 );
        FREEZE_CHAR_POSITION( l_U656, 1 );
        SET_CHAR_HEADING( l_U656, l_U661 );
        SET_CHAR_COORDINATES( l_U656, l_U658._fU0, l_U658._fU4, l_U658._fU8 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U656, "GTAMloRoom05" );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U656, "Situp_Bed_Woozy", "MISSJIMMY3", 4.00000000, 0, 0, 0, 1, 0 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U656, 0 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U656, 1 );
        SWITCH_PED_TO_ANIMATED( l_U656, 1 );
        SET_CHAR_AS_ENEMY( l_U656, 1 );
        SET_CHAR_KEEP_TASK( l_U656, 1 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U656, 1 );
        SET_CHAR_HEALTH( l_U656, 300 );
    }
    return;
}

void sub_8292()
{
    if (IS_CHAR_DEAD( l_U587 ))
    {
        CREATE_CHAR( 5, l_U592, l_U588._fU0, l_U588._fU4, l_U588._fU8, ref l_U587, 1 );
        SET_CHAR_HEADING( l_U587, l_U591 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U587, "GTA_MloRoom011" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U587 );
        SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U587, 1 );
        CREATE_CHAR( 5, l_U598, l_U594._fU0, l_U594._fU4, l_U594._fU8, ref l_U593, 1 );
        SET_CHAR_HEADING( l_U593, l_U597 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U593, "GTA_MloRoom02" );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U593 );
        SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U593, 1 );
        CREATE_CHAR( 4, l_U604, l_U600._fU0, l_U600._fU4, l_U600._fU8, ref l_U599, 1 );
        SET_CHAR_HEADING( l_U599, l_U603 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U599, "GTA_MloRoom02" );
        TASK_PLAY_ANIM( l_U599, "Doc_lean_on_Desk", "MISSJIMMY3", 4.00000000, 1, 0, 0, 0, 0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U599 );
        sub_8692( l_U599 );
    }
    return;
}

void sub_8692(unknown uParam0)
{
    if (l_U758 == 0)
    {
        LOAD_COMBAT_DECISION_MAKER( 1, ref l_U755 );
        # -sub_C1FFC0-0xc214c8( 3, ref l_U756 );
        l_U758 = 1;
    }
    else
    {
        SET_COMBAT_DECISION_MAKER( uParam0, l_U755 );
        SET_CHAR_DECISION_MAKER( uParam0, l_U756 );
    }
    return;
}

void sub_8792()
{
    l_U628[0] = {-1333.87100000, 1266.10100000, 22.37010000};
    l_U628[1] = {-1330.04100000, 1272.81300000, 22.37510000};
    l_U635[0] = 305.01350000;
    l_U635[1] = 237.03430000;
    if (IS_CHAR_DEAD( l_U625[1] ))
    {
        CREATE_CHAR( 6, l_U638, l_U628[0]._fU0, l_U628[0]._fU4, l_U628[0]._fU8, ref l_U625[0], 1 );
        SET_CHAR_HEADING( l_U625[0], l_U635[0] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U625[0] );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U625[0], "GTA_MloRoom011" );
        SET_COMBAT_DECISION_MAKER( l_U625[0], l_U672 );
        GIVE_WEAPON_TO_CHAR( l_U625[0], 7, 150, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U625[0], 0, 0 );
        TASK_START_SCENARIO_IN_PLACE( l_U625[0], "Scenario_Bouncer", -1082130432 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U625[0], 3 );
        SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U625[0], 1 );
        CREATE_CHAR( 6, l_U638, l_U628[1]._fU0, l_U628[1]._fU4, l_U628[1]._fU8, ref l_U625[1], 1 );
        SET_CHAR_HEADING( l_U625[1], l_U635[1] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U625[1] );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U625[1], "GTA_MloRoom06" );
        SET_COMBAT_DECISION_MAKER( l_U625[1], l_U672 );
        GIVE_WEAPON_TO_CHAR( l_U625[1], 7, 150, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U625[1], 0, 0 );
        TASK_START_SCENARIO_IN_PLACE( l_U625[1], "Scenario_Bouncer", -1082130432 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U625[1], 3 );
        SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U625[1], 1 );
    }
    return;
}

void sub_9402()
{
    if (IS_CHAR_DEAD( l_U642 ))
    {
        CREATE_CHAR( 6, l_U647, l_U643._fU0, l_U643._fU4, l_U643._fU8, ref l_U642, 1 );
        SET_CHAR_HEADING( l_U642, l_U646 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U642 );
        SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U757, 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U642, "GTAMloRoom05" );
        SET_COMBAT_DECISION_MAKER( l_U642, l_U757 );
        GIVE_WEAPON_TO_CHAR( l_U642, 7, 150, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U642, 0, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U642, 3 );
        if (IS_SITTING_OBJECT_NEAR( l_U643, 798444530 ))
        {
            TASK_SIT_DOWN_ON_NEAREST_OBJECT( l_U642, 0, 0, l_U643, 798444530, 0.00000000, -2, 1 );
        }
    }
    return;
}

void sub_9660()
{
    if (IS_CHAR_DEAD( l_U649 ))
    {
        CREATE_CHAR( 4, l_U650, l_U651._fU0, l_U651._fU4, l_U651._fU8, ref l_U649, 1 );
        SET_CHAR_HEADING( l_U649, l_U654 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U649, "GTA_MloRoom011" );
        sub_8692( l_U649 );
    }
    return;
}

void sub_9789()
{
    sub_9812( 0, sub_4352(), "Niko", 0 );
    sub_9812( 1, l_U593, "NURSE", 0 );
    sub_9812( 2, l_U599, "DOC_SCRUBS", 0 );
    sub_9812( 3, l_U649, "DOCTOR_M", 0 );
    sub_9812( 4, l_U608[0], "J3_COP", 0 );
    sub_9812( 5, l_U642, "J3_FED", 0 );
    sub_9812( 6, l_U656, "ANTHONY", 0 );
    sub_9812( 8, l_U587, "NURSE", 0 );
    return;
}

void sub_9812(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_9896( "\n PED NUMBER ", uParam0 );
    sub_9936( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_9896(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9936(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_10217()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U608[I] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U608[I] )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U608[I], sub_4352(), 0 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U608[I], 91, ref l_U669 );
                    if (l_U669 == 7)
                    {
                        TASK_COMBAT( l_U608[I], sub_4352() );
                        UNLOCK_RAGDOLL( l_U608[I], 1 );
                    }
                    l_U675 = 1;
                }
            }
            if (l_U675)
            {
                GET_SCRIPT_TASK_STATUS( l_U608[I], 91, ref l_U669 );
                if (l_U669 == 7)
                {
                    if (NOT (IS_CHAR_INJURED( l_U608[I] )))
                    {
                        TASK_COMBAT( l_U608[I], sub_4352() );
                    }
                }
            }
        }
        else
        {
            ALTER_WANTED_LEVEL_NO_DROP( sub_3074(), 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3074() );
        }
        if (NOT (IS_CHAR_DEAD( l_U625[I] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U625[I] )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U625[I], sub_4352(), 0 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U625[I], 91, ref l_U669 );
                    if (l_U669 == 7)
                    {
                        TASK_COMBAT( l_U625[I], sub_4352() );
                        UNLOCK_RAGDOLL( l_U625[I], 1 );
                    }
                    l_U675 = 1;
                }
            }
            if (l_U675)
            {
                GET_SCRIPT_TASK_STATUS( l_U625[I], 91, ref l_U669 );
                if (l_U669 == 7)
                {
                    if (NOT (IS_CHAR_INJURED( l_U625[I] )))
                    {
                        TASK_COMBAT( l_U625[I], sub_4352() );
                    }
                }
            }
        }
        else
        {
            ALTER_WANTED_LEVEL_NO_DROP( sub_3074(), 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3074() );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U642 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U642 )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U642, sub_4352(), 0 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U642, 91, ref l_U669 );
                if (l_U669 == 7)
                {
                    TASK_STAND_GUARD( l_U642, -1361.54700000, 1255.00400000, 22.37020000, 90.00000000, 0.50000000, 0, -1 );
                    UNLOCK_RAGDOLL( l_U642, 1 );
                }
                l_U675 = 1;
            }
        }
        if (l_U675)
        {
            GET_SCRIPT_TASK_STATUS( l_U642, 91, ref l_U669 );
            if (l_U669 == 7)
            {
                if (NOT (IS_CHAR_INJURED( l_U642 )))
                {
                    TASK_COMBAT( l_U642, sub_4352() );
                }
            }
        }
    }
    else
    {
        ALTER_WANTED_LEVEL_NO_DROP( sub_3074(), 2 );
        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3074() );
    }
    return;
}

void sub_11048()
{
    float fVar2;

    fVar2 = 100.00000000;
    if (l_U675)
    {
        if (NOT l_U677)
        {
            if (NOT (IS_CHAR_INJURED( l_U587 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U587, 25, ref l_U669 );
                if (l_U669 == 7)
                {
                    TASK_SMART_FLEE_CHAR( l_U587, sub_4352(), fVar2, 9999999 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U599 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U599, 25, ref l_U669 );
                if (l_U669 == 7)
                {
                    TASK_SMART_FLEE_CHAR( l_U599, sub_4352(), fVar2, 9999999 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U593 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U593, 25, ref l_U669 );
                if (l_U669 == 7)
                {
                    TASK_SMART_FLEE_CHAR( l_U593, sub_4352(), fVar2, 9999999 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U649 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U649, 25, ref l_U669 );
                if (l_U669 == 7)
                {
                    TASK_SMART_FLEE_CHAR( l_U649, sub_4352(), fVar2, 9999999 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U655 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U655, 25, ref l_U669 );
                if (l_U669 == 7)
                {
                    TASK_SMART_FLEE_CHAR( l_U655, sub_4352(), fVar2, 9999999 );
                }
            }
            ALTER_WANTED_LEVEL_NO_DROP( sub_3074(), 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3074() );
            l_U677 = 1;
        }
    }
    return;
}

void sub_11479()
{
    if (NOT (IS_CHAR_DEAD( l_U656 )))
    {
        switch (l_U572)
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4352(), l_U656, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                l_U572 = 1;
            }
            break;
            case 1:
            l_U572 = 2;
            break;
            case 2: break;
            case 3:
            l_U745 = 500;
            if (l_U682)
            {
                if (NOT (sub_11647( l_U718 )))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_3074(), 0 ))
                    {
                        PRINT_NOW( "J3005", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "J3006", 7500, 1 );
                    }
                    l_U572 = 4;
                }
            }
            else if (NOT (sub_11647( l_U718 )))
            {
                l_U682 = 1;
                l_U572 = 4;
            }
            break;
            case 4: break;
        }
    }
    return;
}

int sub_11647(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_11759( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_11759( "\n speech is not playing" );
    }
    return 0;
}

void sub_11759(unknown uParam0)
{
    return;
}

int sub_11946()
{
    if ((NOT l_U674) || (NOT (IS_CHAR_DEAD( l_U656 ))))
    {
        if (NOT (IS_CHAR_INJURED( l_U656 )))
        {
            if ((IS_CHAR_ON_FIRE( l_U656 )) || ((l_U572 == 4) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U656, sub_4352(), 0 ))))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U656, "MISSJIMMY3", "Situp_Bed_Woozy" ))
                {
                    if (sub_12090())
                    {
                        PRINTSTRING( "TASK_PLAY_ANIM_NON_INTERRUPTABLE (Situp_Bed_Shot)\n" );
                        l_U742 = "Situp_Bed_Shot";
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U656, l_U742, "MISSJIMMY3", 8.00000000, 0, 0, 0, 1, 0 );
                    }
                    else
                    {
                        PRINTSTRING( "TASK_PLAY_ANIM_NON_INTERRUPTABLE (Situp_Bed_HeartAttack)\n" );
                        l_U742 = "Situp_Bed_HeartAttack";
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U656, l_U742, "MISSJIMMY3", 8.00000000, 0, 0, 0, 1, 0 );
                    }
                }
                else
                {
                    sub_11759( "IF NOT IS_CHAR_PLAYING_ANIM (Situp_Bed_Woozy)\n" );
                    if (IS_CHAR_PLAYING_ANIM( l_U656, "MISSJIMMY3", l_U742 ))
                    {
                        sub_11759( "IF IS_CHAR_PLAYING_ANIM (animTemp)\n" );
                        if (HAS_CHAR_ANIM_FINISHED( l_U656, "MISSJIMMY3", l_U742 ))
                        {
                            sub_11759( "IF HAS_CHAR_ANIM_FINISHED (animTemp)\n" );
                            SET_CHAR_NEVER_TARGETTED( l_U656, 1 );
                            SET_CHAR_HEALTH( l_U656, 0 );
                            sub_3198( l_U706, "J3UNPLUG" );
                            if (NOT (HAS_FRAGMENT_ROOT_OF_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED( l_U663._fU0, l_U663._fU4, l_U663._fU8, 3.00000000, 821406906 )))
                            {
                                l_U744 = GET_SOUND_ID();
                                PLAY_SOUND_FROM_POSITION( l_U744, "HOSPITAL_KILLING_FLATLINE", l_U666 );
                            }
                            if (l_U675)
                            {
                                SETTIMERA( 6000 );
                            }
                            else
                            {
                                SETTIMERA( 0 );
                            }
                            if (NOT l_U577)
                            {
                                if (sub_13024( "J3_KILLS", ref l_U718, 6, 1 ))
                                {
                                    ;
                                }
                            }
                            l_U674 = 1;
                            return 1;
                        }
                    }
                }
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_12090()
{
    if (NOT (IS_CHAR_DEAD( l_U656 )))
    {
        if ((IS_CHAR_ON_FIRE( l_U656 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 4 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 5 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 20 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 17 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 16 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 15 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 14 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 13 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 12 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 11 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 10 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 9 )) || (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U656, 7 )))))))))))))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_13024(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13047( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_13047(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_13101( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_13101(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_13123( iParam1 )))
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
    sub_13803( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_13123(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_11759( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_11759( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_11759( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_13803(int iParam0, int iParam1)
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

int sub_14025()
{
    if (TIMERA() > 5000)
    {
        return 1;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_3074(), 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_14167(unknown uParam0)
{
    int iVar3;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
    if ((iVar3 == (GET_HASH_KEY( "GTA_MloRoom011" ))) || ((iVar3 == (GET_HASH_KEY( "GTA_MloRoom06" ))) || ((iVar3 == (GET_HASH_KEY( "GTAMloRoom05" ))) || ((iVar3 == (GET_HASH_KEY( "GTAMloRoom04" ))) || ((iVar3 == (GET_HASH_KEY( "GTA_MloRoom04" ))) || ((iVar3 == (GET_HASH_KEY( "GTA_MloRoom03" ))) || ((iVar3 == (GET_HASH_KEY( "GTAMloRoom03" ))) || ((iVar3 == (GET_HASH_KEY( "GTAMloRoom02" ))) || ((iVar3 == (GET_HASH_KEY( "GTA_MloRoom02" ))) || (iVar3 == (GET_HASH_KEY( "GTAMloRoom01" ))))))))))))
    {
        if (l_U675 == 0)
        {
            if (l_U680 == 0)
            {
                l_U680 = 1;
            }
            if (IS_WANTED_LEVEL_GREATER( sub_3074(), 0 ))
            {
                l_U675 = 1;
            }
        }
        return 1;
    }
    return 0;
}

void sub_14562()
{
    if (NOT (IS_CHAR_INJURED( l_U656 )))
    {
        sub_14589();
        if (HAS_CHAR_ANIM_FINISHED( l_U656, "MISSJIMMY3", "Situp_Bed_Woozy" ))
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U656, "Situp_Bed_Woozy", "MISSJIMMY3", 4.00000000, 0, 0, 0, 1, 0 );
        }
    }
    return;
}

void sub_14589()
{
    if (NOT (HAS_FRAGMENT_ROOT_OF_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED( l_U663._fU0, l_U663._fU4, l_U663._fU8, 3.00000000, 821406906 )))
    {
        if (NOT (IS_CHAR_DEAD( l_U656 )))
        {
            if (TIMERA() > l_U745)
            {
                PLAY_SOUND_FROM_POSITION( l_U743, "HOSPITAL_KILLING_SINGLE_BLEEP", l_U666 );
                SETTIMERA( 0 );
            }
        }
    }
    return;
}

void sub_14853()
{
    int iVar2;

    if (NOT l_U682)
    {
        if (NOT l_U577)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), l_U663._fU0, l_U663._fU4, l_U663._fU8, 30.00000000, 30.00000000, 15.00000000, 0 ))
            {
                if (sub_14938())
                {
                    if (sub_15334( l_U706, 0 ))
                    {
                        if (sub_15634( l_U706, "J3UNPLUG", 0 ))
                        {
                            sub_16243();
                            sub_3198( l_U706, "J3UNPLUG" );
                            if (sub_13024( "J3_MACHINE", ref l_U718, 6, 1 ))
                            {
                                ;
                            }
                            OPEN_SEQUENCE_TASK( ref l_U670 );
                            TASK_CHAR_SLIDE_TO_COORD( 0, l_U663._fU0, l_U663._fU4, l_U663._fU8, 220.00000000, 1 );
                            TASK_TURN_CHAR_TO_FACE_COORD( 0, -1359.53000000, 1252.65000000, 23.78000000 );
                            TASK_PLAY_ANIM( 0, "Reach_High", "MISSJIMMY3", 4.00000000, 0, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U670 );
                            TASK_PERFORM_SEQUENCE( sub_4352(), l_U670 );
                            CLEAR_SEQUENCE_TASK( l_U670 );
                            l_U577 = 1;
                        }
                    }
                }
                else
                {
                    sub_3198( l_U706, "J3UNPLUG" );
                }
            }
        }
        else if (sub_16534())
        {
            if (NOT (sub_11647( l_U718 )))
            {
                if (sub_13024( "J3_DIE", ref l_U718, 6, 1 ))
                {
                    if (DOES_BLIP_EXIST( l_U657 ))
                    {
                        REMOVE_BLIP( l_U657 );
                    }
                    sub_16661();
                    l_U572 = 3;
                    l_U745 = 500;
                    l_U682 = 1;
                    if (NOT (IS_CHAR_INJURED( l_U642 )))
                    {
                        GET_KEY_FOR_CHAR_IN_ROOM( l_U642, ref iVar2 );
                        if (iVar2 == (GET_HASH_KEY( "GTAMloRoom05" )))
                        {
                            l_U675 = 1;
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_14938()
{
    float fVar2;
    float fVar3;

    fVar2 = 226.45260000;
    fVar3 = 0.80000000;
    if (l_U682)
    {
        return 1;
    }
    else if (NOT (HAS_FRAGMENT_ROOT_OF_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED( l_U663._fU0, l_U663._fU4, l_U663._fU8, 3.00000000, 821406906 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), l_U663._fU0, l_U663._fU4, l_U663._fU8, fVar3, fVar3, fVar3, 0 ))
        {
            if (sub_15076( fVar2, 45.00000000 ))
            {
                return 1;
            }
        }
    }
    else if (sub_13024( "J3_DIE", ref l_U718, 6, 1 ))
    {
        l_U572 = 3;
        l_U682 = 1;
    };;;
    return 0;
}

int sub_15076(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( sub_4352() )))
    {
        GET_CHAR_HEADING( sub_4352(), ref fVar4 );
        fVar6 = uParam0 - uParam1;
        if (fVar6 < 0.00000000)
        {
            fVar6 += 360.00000000;
        }
        fVar5 = uParam0 + uParam1;
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
        break;
    }
    return 0;
}

int sub_15334(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_3074() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_3074() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3074() )))))
                {
                    if (NOT sub_15430())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_4352() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_15515())
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

int sub_15430()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_15515()
{
    return sub_15526( 0, 0 );
}

int sub_15526(boolean bParam0, unknown uParam1)
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

int sub_15634(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_15334( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_3074(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_15909();
                l_U1 = 1;
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
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_15909()
{
    return sub_15526( 1, 1 );
}

void sub_16243()
{
    GET_CURRENT_CHAR_WEAPON( sub_4352(), ref l_U763 );
    SET_CURRENT_CHAR_WEAPON( sub_4352(), 0, 1 );
    return;
}

int sub_16534()
{
    GET_SCRIPT_TASK_STATUS( sub_4352(), 29, ref l_U669 );
    if (l_U669 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_16661()
{
    SET_CURRENT_CHAR_WEAPON( sub_4352(), l_U763, 0 );
    return;
}

int sub_16969()
{
    float fVar2;

    if (sub_14167( sub_4352() ))
    {
        GET_CHAR_SPEED( sub_4352(), ref fVar2 );
        if (fVar2 > 2.50000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_17069()
{
    if (sub_17078())
    {
        if (IS_CHAR_ARMED( sub_4352(), 7 ))
        {
            return 1;
        }
    }
    if (IS_CHAR_SHOOTING( sub_4352() ))
    {
        l_U675 = 1;
    }
    return 0;
}

int sub_17078()
{
    float fVar2;

    fVar2 = 5.00000000;
    if (NOT (IS_CHAR_INJURED( l_U587 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U587, sub_4352(), 0 ))
        {
            l_U681 = 1;
            l_U675 = 1;
        }
        if (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_4352(), l_U587, fVar2, fVar2, 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U599 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U599, sub_4352(), 0 ))
        {
            l_U681 = 1;
            l_U675 = 1;
        }
        if (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_4352(), l_U599, fVar2, fVar2, 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U593 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U593, sub_4352(), 0 ))
        {
            l_U681 = 1;
            l_U675 = 1;
        }
        if (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_4352(), l_U593, fVar2, fVar2, 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U608[0] )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U608[0], sub_4352(), 0 ))
        {
            l_U681 = 1;
            l_U675 = 1;
        }
        if (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_4352(), l_U608[0], fVar2, fVar2, 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U608[1] )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U608[1], sub_4352(), 0 ))
        {
            l_U681 = 1;
            l_U675 = 1;
        }
        if (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_4352(), l_U608[1], fVar2, fVar2, 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U625[0] )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U625[0], sub_4352(), 0 ))
        {
            l_U681 = 1;
            l_U675 = 1;
            l_U705 = 1;
        }
        if (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_4352(), l_U625[0], 15.00000000, 15.00000000, 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U625[1] )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U625[1], sub_4352(), 0 ))
        {
            l_U681 = 1;
            l_U675 = 1;
            l_U705 = 1;
        }
        if (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_4352(), l_U625[1], 15.00000000, 15.00000000, 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U649 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U649, sub_4352(), 0 ))
        {
            l_U681 = 1;
            l_U675 = 1;
        }
        if (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_4352(), l_U649, fVar2, fVar2, 0 ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U655 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U655, sub_4352(), 0 ))
        {
            l_U681 = 1;
            l_U675 = 1;
        }
        if (LOCATE_CHAR_ON_FOOT_CHAR_2D( sub_4352(), l_U655, fVar2, fVar2, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_17978()
{
    int iVar2;

    GET_CURRENT_CHAR_WEAPON( sub_4352(), ref iVar2 );
    if (iVar2 == 0)
    {
        return 0;
    }
    else if (IS_CHAR_SHOOTING( sub_4352() ))
    {
        return 1;
    }
    return 0;
}

void sub_18061()
{
    if (IS_CHAR_DEAD( l_U655 ))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), -1340.38900000, 1277.88400000, 23.37010000, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            CREATE_CHAR( 5, l_U598, -1358.42000000, 1260.02300000, 23.37010000, ref l_U655, 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U655, "GTAMloRoom02" );
            SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U655, 1 );
            OPEN_SEQUENCE_TASK( ref l_U670 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1359.36600000, 1261.57300000, 23.37010000, 2, 25000, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1339.87600000, 1278.53900000, 23.37010000, 2, 25000, 0.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1327.29700000, 1265.24200000, 23.37010000, 2, 25000, 0.50000000 );
            CLOSE_SEQUENCE_TASK( l_U670 );
            TASK_PERFORM_SEQUENCE( l_U655, l_U670 );
            CLEAR_SEQUENCE_TASK( l_U670 );
        }
    }
    return;
}

void sub_18369()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;

    vVar2 = {-1365.55000000, 1253.09700000, 23.37010000};
    vVar5 = {-1361.65400000, 1252.54300000, 23.37010000};
    vVar8 = {-1366.38300000, 1253.65600000, 23.37010000};
    if (sub_4343())
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_4352(), vVar2.x, vVar2.y, vVar2.z, 3.00000000, 3.00000000, 2.00000000, 0 ))
        {
            if ((l_U572 != 4) AND (l_U572 != 3))
            {
                l_U572 = 2;
            }
            if (sub_18517())
            {
                l_U675 = 1;
            }
            if (l_U684)
            {
                if (NOT l_U692)
                {
                    if (NOT (IS_CHAR_INJURED( l_U608[0] )))
                    {
                        if (sub_13024( "J3_Copbef", ref l_U736, 6, 1 ))
                        {
                            l_U692 = 1;
                            sub_18731();
                        }
                    }
                }
            }
            else if (NOT l_U691)
            {
                if (NOT (IS_CHAR_INJURED( l_U608[0] )))
                {
                    if (sub_13024( "J3_Copdoc", ref l_U736, 6, 1 ))
                    {
                        l_U691 = 1;
                        sub_19016();
                    }
                }
            }
        }
        else if (l_U692)
        {
            if (NOT (IS_CHAR_INJURED( l_U608[0] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U608[0], 32, ref l_U669 );
                if (l_U669 == 7)
                {
                    l_U692 = 0;
                }
            }
        }
        if (NOT l_U702)
        {
            if (NOT (IS_CHAR_DEAD( l_U656 )))
            {
                if (LOCATE_CHAR_ON_FOOT_3D( sub_4352(), vVar5.x, vVar5.y, vVar5.z, 1.00000000, 1.00000000, 1.00000000, 0 ))
                {
                    if (sub_13024( "J3_LEAVE", ref l_U718, 6, 1 ))
                    {
                        l_U572 = 2;
                        l_U702 = 1;
                    }
                }
            }
        }
        else if (NOT l_U693)
        {
            if (NOT (sub_11647( l_U718 )))
            {
                l_U693 = 1;
            }
        }
        else if (NOT l_U703)
        {
            if (NOT (IS_CHAR_INJURED( l_U642 )))
            {
                if (sub_13024( "J3_SURE", ref l_U736, 6, 1 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U608[1] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U670 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar5.x, vVar5.y, vVar5.z, 2, 15000, 0.50000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar8.x, vVar8.y, vVar8.z, 2, 15000, 0.50000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U608[1] );
                        CLOSE_SEQUENCE_TASK( l_U670 );
                        if (NOT (IS_CHAR_DEAD( l_U642 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U642, l_U670 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U670 );
                    }
                }
            }
            l_U703 = 1;
        }
        else if (NOT l_U694)
        {
            if (IS_CHAR_INJURED( l_U642 ))
            {
                if (sub_11647( l_U736 ))
                {
                    sub_2911( ref l_U736, 1 );
                }
            }
            if (NOT (sub_11647( l_U736 )))
            {
                l_U694 = 1;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U656 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4352(), l_U656, 1.50000000, 1.50000000, 1.50000000, 0 ))
            {
                if (NOT l_U697)
                {
                    if (sub_13024( "J3_REC", ref l_U718, 6, 1 ))
                    {
                        l_U697 = 1;
                    }
                }
                else if (NOT l_U688)
                {
                    if (NOT (sub_11647( l_U718 )))
                    {
                        l_U688 = 1;
                    }
                }
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4352(), l_U656, 5.00000000, 5.00000000, 5.00000000, 0 )))
            {
                if (sub_11647( l_U718 ))
                {
                    sub_2911( ref l_U718, 1 );
                }
            }
        };;;;
        if (LOCATE_CHAR_ON_FOOT_3D( sub_4352(), vVar2.x, vVar2.y, vVar2.z, 2.50000000, 2.50000000, 2.50000000, 0 ))
        {
            if (IS_CHAR_DEAD( l_U656 ))
            {
                if (sub_16969())
                {
                    if (sub_13024( "J3_FIND", ref l_U736, 6, 1 ))
                    {
                        l_U675 = 1;
                    }
                }
            }
        }
    }
    else if (LOCATE_CHAR_ON_FOOT_3D( sub_4352(), vVar2.x, vVar2.y, vVar2.z, 6.00000000, 6.00000000, 3.00000000, 0 ))
    {
        if (NOT l_U701)
        {
            if (sub_13024( "J3_COPNOR", ref l_U736, 6, 1 ))
            {
                sub_18731();
                l_U701 = 1;
                l_U684 = 1;
            }
        }
        else if ((IS_CHAR_IN_MELEE_COMBAT( sub_4352() )) || (IS_CHAR_ARMED( sub_4352(), 7 )))
        {
            l_U675 = 1;
        }
    }
    else if (l_U701)
    {
        if (NOT (IS_CHAR_INJURED( l_U608[0] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U608[0], 32, ref l_U669 );
            if (l_U669 == 7)
            {
                l_U701 = 0;
            }
        }
    }
    if (LOCATE_CHAR_ON_FOOT_3D( sub_4352(), vVar5.x, vVar5.y, vVar5.z, 3.50000000, 3.50000000, 2.50000000, 0 ))
    {
        if (NOT l_U704)
        {
            if (sub_13024( "J3_HELP", ref l_U736, 6, 1 ))
            {
                l_U704 = 1;
                sub_18731();
                l_U675 = 1;
            }
        }
    }
    if (sub_17078())
    {
        if (IS_CHAR_IN_MELEE_COMBAT( sub_4352() ))
        {
            l_U675 = 1;
        }
    }
    return;
}

int sub_18517()
{
    if (sub_18526())
    {
        GET_PLAYER_GROUP( sub_3074(), ref l_U760 );
        GET_GROUP_SIZE( l_U760, ref l_U761, ref l_U762 );
        if (l_U762 > 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_18526()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_18731()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U608[I] )))
        {
            GET_SCRIPT_TASK_STATUS( l_U608[I], 32, ref l_U669 );
            if (l_U669 == 7)
            {
                if (l_U573[I])
                {
                    l_U675 = 1;
                    SETTIMERB( 0 );
                }
                else
                {
                    WAIT( 250 );
                    if (NOT (IS_CHAR_INJURED( l_U608[I] )))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U608[I], 7, 0 );
                        TASK_AIM_GUN_AT_CHAR( l_U608[I], sub_4352(), 10000 );
                        l_U573[I] = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_19016()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U608[I] )))
        {
            TASK_LOOK_AT_CHAR( l_U608[I], sub_4352(), -2, 1 );
        }
    }
    return;
}

void sub_20325()
{
    string sVar2;
    int iVar3;

    if (NOT l_U686)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), l_U594._fU0, l_U594._fU4, l_U594._fU8, 8.00000000, 8.00000000, 8.00000000, 0 ))
        {
            if ((NOT (IS_CHAR_INJURED( l_U599 ))) AND (NOT (IS_CHAR_INJURED( l_U593 ))))
            {
                if (NOT l_U695)
                {
                    if (sub_13024( "J3_Flirt", ref l_U724, 4, 1 ))
                    {
                        l_U695 = 1;
                    }
                }
                else if ((l_U675) || (NOT (sub_11647( l_U724 ))))
                {
                    sub_2911( ref l_U724, 1 );
                    l_U686 = 1;
                }
            }
            else
            {
                sub_2911( ref l_U724, 1 );
                l_U686 = 1;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U599 )))
    {
        if (NOT l_U675)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), l_U600._fU0, l_U600._fU4, l_U600._fU8, 0.50000000, 0.50000000, 0.50000000, 0 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U599, 80, ref l_U669 );
                if (l_U669 == 7)
                {
                    TASK_PLAY_ANIM( l_U599, "Doc_lean_on_Desk", "MISSJIMMY3", 4.00000000, 1, 0, 0, 0, 0 );
                }
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U593 )))
    {
        if (TIMERB() > l_U746)
        {
            SETTIMERB( 0 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar3 );
            if (iVar3 == 0)
            {
                sVar2 = "Recp_UseComp_LookinLeft";
                l_U746 = 1000;
            }
            else
            {
                sVar2 = "Recp_UsingComp_A";
                l_U746 = 3000;
            }
            if (IS_CHAR_SITTING_IDLE( l_U593 ))
            {
                CHANGE_CHAR_SIT_IDLE_ANIM( l_U593, "MISSJIMMY3", sVar2, 1 );
            }
        }
    }
    return;
}

void sub_20894()
{
    if (NOT sub_4343())
    {
        if (NOT l_U700)
        {
            if (NOT (IS_CHAR_INJURED( l_U587 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4352(), l_U587, 5.00000000, 5.00000000, 5.00000000, 0 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4352(), l_U587, 2.50000000, 2.50000000, 2.50000000, 0 ))
                    {
                        if (NOT (sub_11647( l_U730 )))
                        {
                            if (sub_15334( l_U706, 0 ))
                            {
                                if (sub_15634( l_U706, "J3RECEPT", 0 ))
                                {
                                    if (IS_CHAR_SITTING_IDLE( l_U587 ))
                                    {
                                        CHANGE_CHAR_SIT_IDLE_ANIM( l_U587, "MISSJIMMY3", "Recp_Seated_Point_FWD", 0 );
                                    }
                                    if (sub_13024( "J3_TRYER", ref l_U730, 6, 1 ))
                                    {
                                        ;
                                    }
                                    l_U700 = 1;
                                    sub_3198( l_U706, "J3RECEPT" );
                                    GET_GAME_TIMER( ref l_U748 );
                                }
                                else if (IS_CHAR_SITTING_IDLE( l_U587 ))
                                {
                                    if (HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED( l_U587 ))
                                    {
                                        CHANGE_CHAR_SIT_IDLE_ANIM( l_U587, "MISSJIMMY3", "Recp_UsingComp_A", 1 );
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_3198( l_U706, "J3RECEPT" );
                    }
                }
            }
        }
        else if (IS_CHAR_SITTING_IDLE( l_U587 ))
        {
            GET_GAME_TIMER( ref l_U747 );
            if ((l_U747 - l_U748) > 1200)
            {
                CHANGE_CHAR_SIT_IDLE_ANIM( l_U587, "MISSJIMMY3", "Recp_UsingComp_A", 1 );
                l_U700 = 0;
            }
        }
    }
    return;
}

void sub_21495()
{
    int iVar2;

    if (NOT l_U683)
    {
        if (NOT (IS_CHAR_INJURED( l_U649 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U671 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1338.48200000, 1273.41900000, 23.37010000, 2, -2, 1.00000000 );
            TASK_ACHIEVE_HEADING( 0, 38.45530000 );
            CLOSE_SEQUENCE_TASK( l_U671 );
            TASK_PERFORM_SEQUENCE( l_U649, l_U671 );
            CLEAR_SEQUENCE_TASK( l_U671 );
            l_U683 = 1;
        }
    }
    else if (NOT l_U696)
    {
        if (NOT (IS_CHAR_INJURED( l_U649 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U649, 29, ref iVar2 );
            if (iVar2 == 7)
            {
                if (NOT (sub_11647( l_U724 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U593 )))
                    {
                        if (IS_CHAR_SITTING_IDLE( l_U593 ))
                        {
                            l_U746 = 1000;
                            CHANGE_CHAR_SIT_IDLE_ANIM( l_U593, "MISSJIMMY3", "Recp_UseComp_LookinUp", 1 );
                            SETTIMERB( 0 );
                        }
                    }
                    if (sub_13024( "J3_Change", ref l_U724, 4, 1 ))
                    {
                        l_U696 = 1;
                    }
                }
            }
        }
    }
    else if (NOT l_U687)
    {
        if (NOT (IS_CHAR_INJURED( l_U649 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U671 );
            TASK_STAND_STILL( 0, 1500 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1332.70900000, 1277.77900000, 23.37010000, 2, -2, 1.00000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1331.14400000, 1275.53500000, 23.37010000, 2, -2, 1.00000000 );
            TASK_ACHIEVE_HEADING( 0, 160.04340000 );
            TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD( 0, -1331.14400000, 1275.53500000, 23.37010000, 2, 0, 0.40000000, 160.04340000 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Wash_hands", "missjimmy3", 4.00000000, 1, 0, 0, 0, 0 );
            CLOSE_SEQUENCE_TASK( l_U671 );
            TASK_PERFORM_SEQUENCE( l_U649, l_U671 );
            CLEAR_SEQUENCE_TASK( l_U671 );
            l_U687 = 1;
        }
        else if (sub_11647( l_U724 ))
        {
            sub_2911( ref l_U724, 1 );
            l_U687 = 1;
        }
    }
    else if (NOT l_U698)
    {
        if (NOT (IS_CHAR_INJURED( l_U649 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U649, "MISSJIMMY3", "Wash_hands" ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), l_U605._fU0, l_U605._fU4, l_U605._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    if (sub_13024( "J3_Docloc", ref l_U724, 6, 1 ))
                    {
                        l_U698 = 1;
                    }
                }
            }
        }
    }
    else if (NOT l_U689)
    {
        if (NOT (IS_CHAR_INJURED( l_U649 )))
        {
            if (NOT (sub_11647( l_U724 )))
            {
                l_U689 = 1;
            }
        }
        else if (sub_11647( l_U724 ))
        {
            sub_2911( ref l_U724, 1 );
            l_U689 = 1;
        }
    };;;;;
    return;
}

void sub_22416()
{
    if (NOT l_U690)
    {
        if (NOT (IS_CHAR_INJURED( l_U593 )))
        {
            if (NOT l_U699)
            {
                if (NOT (sub_11647( l_U724 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4352(), l_U593, 2.50000000, 2.50000000, 2.50000000, 0 ))
                    {
                        if (sub_13024( "J3_NURDOC", ref l_U724, 4, 1 ))
                        {
                            l_U699 = 1;
                        }
                    }
                }
            }
            else if ((NOT (sub_11647( l_U724 ))) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4352(), l_U593, 2.50000000, 2.50000000, 2.50000000, 0 ))))
            {
                l_U690 = 1;
            }
        }
    }
    return;
}

void sub_22817()
{
    if (l_U679)
    {
        sub_22837( 15 );
    }
    TRIGGER_MISSION_COMPLETE_AUDIO( 58 );
    sub_24429( 8, 3 );
    sub_24490( 41 );
    UNLOCK_MISSION_NEWS_STORY( 41 );
    CLEAR_WANTED_LEVEL( sub_3074() );
    sub_27723( 22, "J3_CPASS", "J3AUD", 0 );
    g_U64692 = 0;
    sub_28317();
    sub_2897();
    return;
}

void sub_22837(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    sub_22854( 3, uParam0, 0, uVar3, 0 );
    return;
}

void sub_22854(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_3074(), -1 * iParam2 );
    g_U8332[uParam1] = 1;
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
        sub_23062( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

void sub_23062(int iParam0, unknown uParam1, int iParam2, unknown uParam3)
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
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_4352() );
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "finale1c" )) >= 1)
    {
        GET_GROUP_SIZE( sub_23569(), ref uVar10, ref iVar11 );
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
    if ((iParam2 == 0) AND (sub_23779()))
    {
        if (NOT g_U8358)
        {
            if (iParam0 == 5)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_PLAYER_PURCHASES  - " );
                PRINTSTRING( "gbPKMAL_25_displayed:" );
                sub_24023( g_U8358 );
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
                sub_24023( g_U8355 );
                PRINTNL();
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_4352() );
    }
    sub_11759( "  * PLAY_SHOP_ASST_SPEECH(''" );
    sub_11759( ref cVar6 );
    sub_11759( "'')\n" );
    return sub_13024( ref cVar6, uParam1, 1, 0 );
}

void sub_23569()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_23779()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman3" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_24023(boolean bParam0)
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

void sub_24429(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_24490(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_24577( iParam0 ))
    {
        sub_25627( iParam0 );
    }
    return;
}

int sub_24577(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_24634( ref uVar3, 1, 0, 0 );
    sub_25246( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_11759( "\n ----------------------------------------------------------------" );
    sub_9896( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_11759( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_24634(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_24687( iParam0, uParam1, uParam2 );
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
        sub_24819( iParam0 + 0 );
    }
    return;
}

void sub_24687(int iParam0, int iParam1, int iParam2)
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
        sub_24819( iParam0 + 0 );
    }
    return;
}

void sub_24819(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_24850( iParam0->_fU4 )))
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

int sub_24850(unknown uParam0)
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

void sub_25246(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_25627(unknown uParam0)
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
        sub_25838( 20, 6, 16383, 16383, ref uVar4 );
        sub_26514( ref uVar4, 7 );
        sub_26545( ref uVar4, 0 );
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
        sub_25838( 20, 7, 9, 16383, ref uVar4 );
        sub_26514( ref uVar4, 7 );
        sub_26545( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_25838(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_25862( uParam0, 0, iParam4 + 0 );
    sub_25862( uParam1, 1, iParam4 + 0 );
    sub_25862( uParam2, 2, iParam4 + 0 );
    sub_25862( uParam3, 3, iParam4 + 0 );
    sub_25862( 0, 4, iParam4 + 0 );
    sub_25862( 1, 5, iParam4 + 0 );
    sub_25862( 65535, 6, iParam4 + 0 );
    sub_25862( 0, 12, iParam4 + 0 );
    sub_25862( 0, 11, iParam4 + 0 );
    sub_25862( 0, 14, iParam4 + 0 );
    sub_25862( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_25862( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_25862( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_25862(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_26514(int iParam0, unknown uParam1)
{
    sub_25862( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_26545(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_26585())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_27272( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_27071( iVar5 );
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

int sub_26585()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_26619( 5, g_U968[I] )) == 7)
        {
            sub_27071( I );
            return 1;
        }
    }
    return 0;
}

int sub_26619(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_27071(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_27144( 39 );
    return;
}

void sub_27144(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_27272(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_27333( uParam0, g_U968[Result] ))
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

int sub_27333(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_27723(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_27767( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_27767(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_28317()
{
    sub_28326();
    return;
}

void sub_28326()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_28344();
    sub_28403( iVar2, iVar3, iVar4 );
    return;
}

void sub_28344()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_28403(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 20;
    sub_28436( iVar5, uParam0, uParam1, uParam2, "Contact_24" );
    return;
}

void sub_28436(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_28532( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_28532( ref cVar9 );
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
            sub_28532( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_28532( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_28532( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_28532( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_29109( iParam0, iVar7 );;;
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
                sub_29506( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_29506( 0, 4 );
            }
        }
    }
    if (NOT (sub_29595( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3074(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3074() );
    }
    sub_1995();
    bVar27 = true;
    uVar28 = sub_29109( iParam0, iVar7 );
    uVar29 = sub_1452( iParam0 );
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
                sub_38971( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_39401();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_39486( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_39543( iParam0 );
                sub_39582( 0 );
                sub_1893( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_39690();
        }
    }
    if (bParam2)
    {
        sub_39401();
        sub_39778();
        sub_39582( 0 );
    }
    if (bParam3)
    {
        sub_39401();
        sub_39818();
        sub_39582( 0 );
        sub_1893( uVar29, 0 );
    }
    sub_1339();
    return;
}

void sub_28532(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_29109(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1851( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_29506(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_29595(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_29803( uParam1 );
        break;
        case 1:
        bVar8 = sub_31881( uParam1 );
        break;
        case 2:
        bVar8 = sub_32107( uParam1 );
        break;
        case 3:
        bVar8 = sub_32257( uParam1 );
        break;
        case 4:
        bVar8 = sub_32535( uParam1 );
        break;
        case 5:
        bVar8 = sub_32838( uParam1 );
        break;
        case 6:
        bVar8 = sub_33037( uParam1 );
        break;
        case 7:
        bVar8 = sub_33263( uParam1 );
        break;
        case 8:
        bVar8 = sub_33498( uParam1 );
        break;
        case 9:
        bVar8 = sub_33873( uParam1 );
        break;
        case 10:
        bVar8 = sub_34120( uParam1 );
        break;
        case 11:
        bVar8 = sub_34259( uParam1 );
        break;
        case 12:
        bVar8 = sub_34558( uParam1 );
        break;
        case 13:
        bVar8 = sub_34786( uParam1 );
        break;
        case 14:
        bVar8 = sub_35073( uParam1 );
        break;
        case 15:
        bVar8 = sub_35355( uParam1 );
        break;
        case 16:
        bVar8 = sub_35637( uParam1 );
        break;
        case 17:
        bVar8 = sub_35838( uParam1 );
        break;
        case 18:
        bVar8 = sub_35911( uParam1 );
        break;
        case 19:
        bVar8 = sub_36125( uParam1 );
        break;
        case 20:
        bVar8 = sub_36378( uParam1 );
        break;
        case 21:
        bVar8 = sub_36625( uParam1 );
        break;
        case 22:
        bVar8 = sub_36826( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_31486( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_29109( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_37149( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_29803(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_30082( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_30082( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_30082( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_30082( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_30082( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_30082( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_30082( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_30082( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_30082( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_30082( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_30082( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_30082( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_30082( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_30082( iVar3, 0, 3, 1, 0, 0 );
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
        sub_30082( iVar3, 0, sub_31364(), sub_31630(), 0, 0 );
        break;
        default:
        sub_31789( "Friend 1", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Friend 1", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_30082(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_30093( uParam1 );
    sub_30267( uParam0, 0, uParam2 );
    sub_30267( uParam0, 1, uParam3 );
    sub_30267( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_28344();
    return;
}

void sub_30093(unknown uParam0)
{
    ADD_SCORE( sub_3074(), uParam0 );
    sub_30118( uParam0 );
    return;
}

void sub_30118(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1851( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_30267(unknown uParam0, int iParam1, int iParam2)
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
        sub_30424( uParam0 );
    }
    return;
}

void sub_30424(unknown uParam0)
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

int sub_31364()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_31486( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_31486(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_31630()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_31486( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_31789(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_31881(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30082( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_31789( "Contact 2", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 2", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32107(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_30082( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_31789( "Girl 3", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Girl 3", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32257(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_30082( iVar3, 0, sub_31364(), sub_31630(), 0, 0 );
        break;
        default:
        sub_31789( "Friend 4", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Friend 4", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32535(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30082( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_30082( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_30082( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_30082( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_31789( "Contact 5", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 5", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_32838(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_31789( "Contact 7", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 7", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33037(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30082( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_31789( "Contact 7b", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 7b", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33263(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_30082( iVar3, 0, sub_31364(), sub_31630(), 0, 0 );
        break;
        default:
        sub_31789( "Friend 8", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Friend 8", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33498(unknown uParam0)
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
        sub_30082( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_30082( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_30082( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_30082( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_30082( iVar3, 0, sub_31364(), sub_31630(), 0, 0 );
        break;
        default:
        sub_31789( "Friend 9", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Friend 9", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33873(unknown uParam0)
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
        sub_30082( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_30082( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_30082( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_31789( "Contact 10", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_31789( "Contact 10", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34120(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_31789( "Girl 11", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Girl 11", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34259(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30082( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_30082( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_30082( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_30082( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_30082( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_31789( "Contact 12", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 12", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34558(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30082( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_31789( "Contact 13", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 13", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34786(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_30082( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_30082( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_30082( iVar3, 0, sub_31364(), sub_31630(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_31789( "Friend 15", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Friend 15", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35073(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30082( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_30082( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_30082( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_31789( "Contact 16", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 16", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35355(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_30082( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_30082( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_30082( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_31789( "Contact 18", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 18", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35637(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_31789( "Contact 19", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 19", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35838(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_31789( "Girl 20", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35911(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_31789( "Contact 21", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 21", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36125(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30082( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_30082( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_31789( "Contact 22", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 22", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36378(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_30082( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_30082( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_30082( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_31789( "Contact 24", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 24", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36625(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_30082( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_30082( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_30082( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_31789( "Contact 25", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_31789( "Contact 25", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36826(unknown uParam0)
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
        sub_30082( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_31789( "Girl 26", 1 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_31789( "Girl 26", 0 );
        sub_30082( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_37149(int iParam0, int iParam1)
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
    if (sub_37197( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_37928( iParam1 );
    }
    return;
}

int sub_37197(int iParam0, int iParam1)
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
            sub_37337( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_37337(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_37519( 0 );
    return;
}

void sub_37519(boolean bParam0)
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
        sub_37774();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_37774()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_37928(int iParam0)
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
        sub_38261( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_38261( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_38261( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_38261( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_38261( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_38261( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_38261( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_38261( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_38261( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_38261( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_38261( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_38261( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_38261( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_38261( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_38261( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_38261( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_38261( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_38261( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_38261( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_38261(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_38971(unknown uParam0, unknown uParam1)
{
    sub_38990( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_38990(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_39401()
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

int sub_39486(int iParam0, int iParam1)
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

void sub_39543(unknown uParam0)
{
    sub_1238();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_39582(unknown uParam0)
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

void sub_39690()
{
    sub_39699();
    return;
}

void sub_39699()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_39778()
{
    sub_39699();
    return;
}

void sub_39818()
{
    sub_39699();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_40148()
{
    if (NOT sub_4343())
    {
        if (NOT l_U679)
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_4352(), l_U605._fU0, l_U605._fU4, l_U605._fU8, 10.50000000, 10.50000000, 10.00000000, 0 ))
            {
                if (LOCATE_CHAR_ON_FOOT_3D( sub_4352(), l_U605._fU0, l_U605._fU4, l_U605._fU8, 1.00000000, 1.00000000, 1.00000000, 1 ))
                {
                    if (sub_15334( l_U706, 0 ))
                    {
                        if (sub_15634( l_U706, "J3UNIFRM", 0 ))
                        {
                            while (NOT l_U679)
                            {
                                WAIT( 0 );
                                switch (l_U571)
                                {
                                    case 0:
                                    sub_40385();
                                    OPEN_SEQUENCE_TASK( ref l_U670 );
                                    TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U750._fU0, l_U750._fU4, l_U750._fU8 );
                                    TASK_PLAY_ANIM( 0, "LOCKER_REACH", "MISSJIMMY3", 4.00000000, 0, 0, 0, 1, -1 );
                                    CLOSE_SEQUENCE_TASK( l_U670 );
                                    TASK_PERFORM_SEQUENCE( sub_4352(), l_U670 );
                                    CLEAR_SEQUENCE_TASK( l_U670 );
                                    while (NOT sub_40559())
                                    {
                                        WAIT( 0 );
                                    }
                                    PLAY_SOUND_FROM_PED( -1, "HOSPITAL_KILLING_PUT_ON_SCRUBS", sub_4352() );
                                    DO_SCREEN_FADE_OUT( 150 );
                                    l_U571 = 1;
                                    break;
                                    case 1:
                                    if (IS_SCREEN_FADED_OUT())
                                    {
                                        sub_40778();
                                        SET_CHAR_COMPONENT_VARIATION( sub_4352(), 1, 6, 0 );
                                        SET_CHAR_COMPONENT_VARIATION( sub_4352(), 2, 3, 0 );
                                        SET_CHAR_COMPONENT_VARIATION( sub_4352(), 5, 1, 0 );
                                        SET_CHAR_COMPONENT_VARIATION( sub_4352(), 4, 0, 0 );
                                        SET_CHAR_COORDINATES( sub_4352(), -1331.38000000, 1278.14800000, 22.37010000 );
                                        SET_CHAR_HEADING( sub_4352(), 121.50230000 );
                                        SET_GAME_CAM_HEADING( 0.00000000 );
                                        DO_SCREEN_FADE_IN( 250 );
                                        SET_CHAR_COORDINATES( sub_4352(), -1331.38000000, 1278.14800000, 22.37010000 );
                                        SET_CHAR_HEADING( sub_4352(), 121.50230000 );
                                        SET_GAME_CAM_HEADING( 0.00000000 );
                                        OPEN_SEQUENCE_TASK( ref l_U670 );
                                        TASK_PLAY_ANIM( 0, "examine shirt", "MISSJIMMY3", 4.00000000, 0, 0, 0, 0, -1 );
                                        CLOSE_SEQUENCE_TASK( l_U670 );
                                        TASK_PERFORM_SEQUENCE( sub_4352(), l_U670 );
                                        CLEAR_SEQUENCE_TASK( l_U670 );
                                        l_U571 = 2;
                                    }
                                    break;
                                    case 2:
                                    if (IS_SCREEN_FADED_IN())
                                    {
                                        if (DOES_OBJECT_EXIST( l_U749 ))
                                        {
                                            DELETE_OBJECT( ref l_U749 );
                                        }
                                        while (NOT sub_16534())
                                        {
                                            WAIT( 0 );
                                        }
                                        sub_3065();
                                        sub_3198( l_U706, "J3UNIFRM" );
                                        l_U679 = 1;
                                    }
                                    break;
                                }
                            }
                        }
                    }
                }
                else
                {
                    sub_3198( l_U706, "J3UNIFRM" );
                }
            }
        }
    }
    return;
}

void sub_40385()
{
    if (IS_PLAYER_PLAYING( sub_3074() ))
    {
        SET_PLAYER_CONTROL( sub_3074(), 0 );
    }
    return;
}

int sub_40559()
{
    float fVar2;

    if (IS_CHAR_PLAYING_ANIM( sub_4352(), "MISSJIMMY3", "LOCKER_REACH" ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_4352(), "MISSJIMMY3", "LOCKER_REACH", ref fVar2 );
        if (fVar2 > 0.25000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_40778()
{
    int[10] iVar2;
    int I;

    array(ref iVar2, 10);
    iVar2[0] = 0;
    iVar2[1] = 1;
    iVar2[2] = 2;
    iVar2[3] = 3;
    iVar2[4] = 4;
    iVar2[5] = 5;
    iVar2[6] = 6;
    iVar2[7] = 7;
    iVar2[8] = 8;
    iVar2[9] = 9;
    if (NOT (IS_CHAR_INJURED( sub_4352() )))
    {
        for ( I = 0; I < 10; I++ )
        {
            g_U64693[I] = GET_CHAR_DRAWABLE_VARIATION( sub_4352(), iVar2[I] );
            g_U64704[I] = GET_CHAR_TEXTURE_VARIATION( sub_4352(), iVar2[I] );
        }
    }
    g_U64692 = 1;
    return;
}

void sub_41408()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        sub_22817();
    }
    if (IS_KEYBOARD_KEY_PRESSED( 33 ))
    {
        sub_6132();
    }
    return;
}

void sub_41463()
{
    if (sub_14167( sub_4352() ))
    {
        if (IS_CHAR_INJURED( l_U656 ))
        {
            if (DOES_BLIP_EXIST( l_U657 ))
            {
                REMOVE_BLIP( l_U657 );
            }
        }
    }
    else if (DOES_BLIP_EXIST( l_U648 ))
    {
        REMOVE_BLIP( l_U648 );
    }
    if (NOT (DOES_BLIP_EXIST( l_U639[0] )))
    {
        REMOVE_BLIP( l_U639[0] );
    }
    if (NOT (DOES_BLIP_EXIST( l_U639[1] )))
    {
        REMOVE_BLIP( l_U639[1] );
    }
    if (NOT (DOES_BLIP_EXIST( l_U622[0] )))
    {
        REMOVE_BLIP( l_U622[0] );
    }
    if (NOT (DOES_BLIP_EXIST( l_U622[1] )))
    {
        REMOVE_BLIP( l_U622[1] );
    }
    return;
}

void sub_41719()
{
    int iVar2;
    unknown uVar3;

    if (l_U705 == 0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4352() ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4352(), l_U583._fU0, l_U583._fU4, l_U583._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4352(), ref uVar3 );
                GET_KEY_FOR_CAR_IN_ROOM( uVar3, ref iVar2 );
                if ((iVar2 == (GET_HASH_KEY( "GTA_MloRoom011" ))) || ((iVar2 == (GET_HASH_KEY( "GTAMloRoom05" ))) || ((iVar2 == (GET_HASH_KEY( "GTAMloRoom04" ))) || ((iVar2 == (GET_HASH_KEY( "GTA_MloRoom04" ))) || ((iVar2 == (GET_HASH_KEY( "GTA_MloRoom03" ))) || ((iVar2 == (GET_HASH_KEY( "GTA_MloRoom02" ))) || (iVar2 == (GET_HASH_KEY( "GTAMloRoom01" )))))))))
                {
                    if (IS_PLAYER_PLAYING( sub_3074() ))
                    {
                        ALTER_WANTED_LEVEL_NO_DROP( sub_3074(), 2 );
                        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3074() );
                    }
                    l_U675 = 1;
                }
            }
        }
    }
    return;
}

void sub_42081()
{
    if (l_U717 == 0)
    {
        if (IS_SITTING_OBJECT_NEAR( l_U643, 798444530 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U642 )))
            {
                if (IS_CHAR_SITTING_IDLE( l_U642 ))
                {
                    CHANGE_CHAR_SIT_IDLE_ANIM( l_U642, "MISSJIMMY3", "Goon_Sit_Idle", 1 );
                    l_U717 = 1;
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U642, 112, ref l_U669 );
                    if (l_U669 == 7)
                    {
                        TASK_SIT_DOWN_ON_NEAREST_OBJECT( l_U642, 0, 0, l_U643, 798444530, 0.00000000, -2, 1 );
                    }
                }
            }
        }
    }
    if (l_U716 == 0)
    {
        if (IS_SITTING_OBJECT_NEAR( l_U588, 976040367 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U587 )))
            {
                if (IS_CHAR_SITTING_IDLE( l_U587 ))
                {
                    CHANGE_CHAR_SIT_IDLE_ANIM( l_U587, "MISSJIMMY3", "Recp_UsingComp_A", 1 );
                    l_U716 = 1;
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U587, 112, ref l_U669 );
                    if (l_U669 == 7)
                    {
                        TASK_SIT_DOWN_ON_NEAREST_OBJECT( l_U587, 0, 2, l_U588, 976040367, 0.00000000, -2, 1 );
                    }
                }
            }
        }
    }
    if (l_U715 == 0)
    {
        if (IS_SITTING_OBJECT_NEAR( l_U594, 976040367 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U593 )))
            {
                if (IS_CHAR_SITTING_IDLE( l_U593 ))
                {
                    CHANGE_CHAR_SIT_IDLE_ANIM( l_U593, "MISSJIMMY3", "Recp_UsingComp_A", 1 );
                    l_U715 = 1;
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U593, 112, ref l_U669 );
                    if (l_U669 == 7)
                    {
                        TASK_SIT_DOWN_ON_NEAREST_OBJECT( l_U593, 0, 2, l_U594, 976040367, 0.00000000, -2, 1 );
                    }
                }
            }
        }
    }
    return;
}

