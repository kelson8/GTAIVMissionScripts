void main()
{
    unknown uVar2;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U108 = 0;
    l_U109 = 1;
    l_U110 = 3;
    l_U112 = 0;
    l_U113 = -1;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U122 = -1;
    l_U136 = 15.00000000;
    l_U137 = 35.00000000;
    l_U138 = 16.00000000;
    l_U139 = 0.00000000;
    l_U145 = 1000.00000000;
    l_U146 = 7500.00000000;
    l_U155 = 1;
    l_U156 = 30.00000000;
    l_U157 = 30.00000000;
    l_U158 = 2.00000000;
    l_U168 = 0.00000000;
    l_U169 = 0.00000000;
    l_U181 = 1;
    l_U182 = 0;
    l_U183 = -1;
    l_U184 = 1;
    l_U185 = -1;
    l_U186 = -1;
    l_U187 = 15.00000000;
    l_U214 = 0;
    l_U215 = -1949702649;
    l_U216 = 2075870698;
    l_U221 = 0.12000000;
    l_U232 = 1;
    l_U233 = 1;
    l_U358 = {0.00000000, 0.00000000, 0.00000000};
    l_U476 = {1.00000000, 1.00000000, 1.00000000};
    l_U479 = {0.00000000, 1.00000000, 0.00000000};
    l_U482 = {0.00000000, -1.00000000, 0.00000000};
    l_U495 = 0;
    l_U496 = 0;
    l_U507 = 100.00000000;
    l_U508 = 10.50000000;
    l_U509 = 0.50000000;
    l_U510 = 2.85000000;
    l_U515 = 0;
    l_U523 = 0;
    l_U874 = {-1594.15900000, 708.65200000, 24.36650000};
    l_U877 = {-1624.07100000, 719.55000000, 26.85480000};
    l_U880 = {-1625.75700000, 717.48120000, 27.01430000};
    l_U883 = {-846.56160000, 779.86080000, 5.86030000};
    l_U886 = {-966.75050000, 793.01120000, 3.30170000};
    l_U889 = {-956.27540000, 789.04460000, 3.26710000};
    l_U893 = 319.49970000;
    l_U894 = 123.23700000;
    l_U895 = 321.49500000;
    l_U896 = 1349725314;
    l_U897 = -1356924456;
    l_U898 = -778316080;
    l_U899 = 1668078208;
    l_U900 = 2;
    l_U901 = 0;
    l_U902 = 0;
    l_U903 = 0;
    l_U904 = 0;
    l_U905 = 0;
    l_U906 = 0;
    l_U907 = 0;
    l_U908 = 0;
    l_U909 = 0;
    l_U910 = 0;
    l_U911 = 0;
    l_U913 = 0;
    l_U915 = "MISSSTUBBS3P";
    l_U916 = "amb@bnch_dnk_idl";
    l_U1055 = 0;
    l_U1059 = 0;
    l_U1060 = 0;
    l_U1064 = 0;
    l_U1073 = 0;
    l_U1104 = 0;
    l_U1109 = 0;
    l_U1110 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_854();
        sub_3290( l_U900, l_U524 );
        sub_3348( 0 );
        sub_3489( 0 );
        sub_3629();
    }
    l_U524 = sub_4084( l_U900 );
    sub_4236( 0, sub_4185(), "JOHNNY", 0 );
    sub_4392( "STUB3M5", 0 );
    sub_4392( "E1S3p5A", 6 );
    PRINT_BIG( "CEOMission", 5000, 2 );
    while (true)
    {
        WAIT( 0 );
        sub_4589();
        sub_9185();
        sub_9248();
        switch (l_U523)
        {
            case 0:
            sub_10229();
            g_U10460 = 0;
            l_U523 = 1;
            break;
            case 1:
            sub_11712();
            break;
            case 2:
            l_U523 = 3;
            break;
            case 3:
            sub_12514();
            sub_13487();
            sub_14019();
            sub_14770( l_U1025 );
            SET_ROUTE( l_U1025, 1 );
            PRINT_NOW( "BackToCont", 7500, 1 );
            l_U523 = 4;
            break;
            case 4:
            if (IS_VEH_DRIVEABLE( l_U1020 ))
            {
                if ((sub_15566()) || ((sub_14980()) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_4185(), -1612.12900000, 764.80350000, 7.00000000, 7.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_4185(), -1637.60200000, 698.15340000, 5.00000000, 5.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_2D( sub_4185(), -1599.85800000, 707.34960000, 4.00000000, 4.00000000, 0 ))))))
                {
                    ALTER_WANTED_LEVEL_NO_DROP( sub_986(), 3 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_986() );
                    sub_15690();
                    if (NOT (IS_CHAR_INJURED( l_U1010 )))
                    {
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U1010, 1 );
                    }
                    SWITCH_ROADS_OFF( -1616.53000000 - 30, 778.24300000 - 30, 27.27420000 - 30, -1616.53000000 + 30, 778.24300000 + 30, 27.27420000 + 30 );
                    sub_15983();
                    if (IS_THIS_PRINT_BEING_DISPLAYED( "Stayback", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                    {
                        CLEAR_PRINTS();
                    }
                    l_U523 = 5;
                }
                else
                {
                    sub_17270();
                }
            }
            break;
            case 5:
            sub_17714();
            if (NOT (IS_CHAR_INJURED( l_U1010 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U1010, l_U915, "Handcuffed_on_Bonnet" ))
                {
                    SET_PED_DIES_WHEN_INJURED( l_U1010, 0 );
                }
            }
            sub_17909();
            sub_18376();
            if ((sub_18657()) AND (sub_18590( sub_4185(), l_U1020 )))
            {
                if (sub_21987())
                {
                    l_U911 = 1;
                }
                l_U523 = 6;
            }
            break;
            case 6:
            sub_22097();
            break;
            case 7:
            if (NOT (sub_18590( sub_4185(), l_U1020 )))
            {
                sub_12861( l_U1025 );
                sub_14770( l_U1024 );
                if (NOT (IS_CHAR_INJURED( l_U1010 )))
                {
                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U1010, 1 );
                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U1010, 0 );
                }
                PRINT_NOW( "BackinCar", 7500, 1 );
            }
            if (sub_21987())
            {
                l_U911 = 1;
            }
            if (NOT (IS_CHAR_INJURED( l_U1010 )))
            {
                SET_PED_DIES_WHEN_INJURED( l_U1010, 1 );
            }
            l_U523 = 8;
            break;
            case 8:
            if (IS_VEH_DRIVEABLE( l_U1020 ))
            {
                if (IS_CHAR_IN_CAR( sub_4185(), l_U1020 ))
                {
                    sub_12861( l_U1025 );
                    if (l_U913 == 0)
                    {
                        sub_16164( "E1S3p5_GO", ref l_U917, 6, 1 );
                        ADD_BLIP_FOR_COORD( l_U883._fU0, l_U883._fU4, l_U883._fU8, ref l_U1046 );
                        sub_14770( l_U1047 );
                        g_U9556++;
                        l_U913 = 1;
                    }
                    else if (NOT (sub_17379( l_U917 )))
                    {
                        sub_12861( l_U1025 );
                        SET_ROUTE( l_U1025, 0 );
                        ADD_BLIP_FOR_COORD( l_U889._fU0, l_U889._fU4, l_U889._fU8, ref l_U1047 );
                        PRINT_NOW( "Helipad", 7500, 1 );
                        l_U1062 = 1;
                        sub_12861( l_U1046 );
                        CHANGE_BLIP_DISPLAY( l_U1047, 4 );
                        if (l_U909 == 0)
                        {
                            SET_ROUTE( l_U1047, 1 );
                            SET_ROUTE( l_U1046, 0 );
                            l_U909 = 1;
                        }
                        l_U523 = 9;
                    }
                }
            }
            break;
            case 9:
            if (IS_VEH_DRIVEABLE( l_U1020 ))
            {
                sub_23081();
                if (IS_CHAR_IN_CAR( sub_4185(), l_U1020 ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4185(), l_U877._fU0, l_U877._fU4, l_U877._fU8, 60.00000000, 60.00000000, 60.00000000, 0 )))
                    {
                        if (NOT l_U911)
                        {
                            sub_25602();
                            sub_27033();
                        }
                        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4185(), 0 );
                        if (NOT (IS_CHAR_INJURED( l_U1010 )))
                        {
                            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U1010, 0 );
                        }
                        l_U523 = 10;
                    }
                }
            }
            break;
            case 10:
            sub_27592();
            sub_23081();
            sub_28664();
            sub_29076();
            if (sub_29415())
            {
                sub_29496();
            }
            if (sub_29956())
            {
                sub_30037();
            }
            else
            {
                sub_30508();
            }
            if (l_U1073 == 5)
            {
                sub_31318();
                sub_31458();
                REQUEST_MODEL( l_U628._fU16 );
                REQUEST_MODEL( l_U899 );
                REQUEST_ANIMS( l_U916 );
                l_U523 = 11;
            }
            break;
            case 11:
            if (NOT (IS_CHAR_INJURED( l_U1010 )))
            {
                if (IS_VEH_DRIVEABLE( l_U1021 ))
                {
                    if (IS_GROUP_MEMBER( l_U1010, sub_3667() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U1010 );
                    }
                    if (sub_17379( l_U917 ))
                    {
                        sub_31640( ref l_U917, 1 );
                    }
                    SET_CHAR_DECISION_MAKER( l_U1010, l_U997 );
                    SET_COMBAT_DECISION_MAKER( l_U1010, l_U996 );
                    OPEN_SEQUENCE_TASK( ref l_U1052 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -838.27730000, 778.21780000, 3.46030000, 3, -2, 2.00000000 );
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( -833.66630000, 779.36830000, 4.04790000 );
                    TASK_EXTEND_ROUTE( -830.07710000, 779.67920000, 5.32300000 );
                    TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U1021, -2, 1 );
                    CLOSE_SEQUENCE_TASK( l_U1052 );
                    TASK_PERFORM_SEQUENCE( l_U1010, l_U1052 );
                    sub_4236( 2, l_U1010, "CEO", 0 );
                }
            }
            if (l_U905 == 0)
            {
                if (NOT (sub_18590( l_U1010, l_U1020 )))
                {
                    sub_16164( "E1S3p5_BYE", ref l_U917, 1, 1 );
                    l_U905 = 1;
                }
            }
            sub_32030( 0 );
            sub_32030( 1 );
            sub_14770( l_U1025 );
            sub_12861( l_U1046 );
            if (l_U909 == 1)
            {
                SET_ROUTE( l_U1046, 0 );
                l_U909 = 0;
            }
            if (IS_VEH_DRIVEABLE( l_U1020 ))
            {
                SET_CAR_ENGINE_ON( l_U1020, 0, 1 );
            }
            if (sub_32747())
            {
                PRINT_NOW( "protect", 7500, 1 );
            }
            else
            {
                PRINT_NOW( "protect1", 7500, 1 );
            }
            l_U523 = 12;
            break;
            case 12:
            if (l_U905 == 0)
            {
                if (NOT (sub_18590( l_U1010, l_U1020 )))
                {
                    sub_16164( "E1S3p5_BYE", ref l_U917, 1, 1 );
                    l_U905 = 1;
                }
            }
            sub_32030( 0 );
            sub_32030( 1 );
            sub_33101();
            if (NOT (sub_20846( l_U1010, 29 )))
            {
                if (NOT (IS_CHAR_IN_ANY_HELI( l_U1010 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U1010, l_U1021, 8.00000000, 8.00000000, 8.00000000, 0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1010, l_U1052 );
                    }
                }
            }
            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( l_U1010, l_U1021, 10.00000000, 10.00000000, 0 )))
            {
                if (IS_VEH_DRIVEABLE( l_U1020 ))
                {
                    SET_CAR_ENGINE_ON( l_U1020, 0, 1 );
                }
            }
            if ((sub_18590( l_U1010, l_U1021 )) || (sub_33502()))
            {
                l_U523 = 13;
            }
            break;
            case 13:
            sub_33101();
            sub_32030( 0 );
            sub_32030( 1 );
            if (NOT (IS_CHAR_INJURED( l_U1010 )))
            {
                if (IS_VEH_DRIVEABLE( l_U1021 ))
                {
                    if (IS_CHAR_IN_CAR( l_U1010, l_U1021 ))
                    {
                        CLEAR_SEQUENCE_TASK( l_U1052 );
                        l_U523 = 14;
                    }
                    else if (NOT (IS_CHAR_IN_ANY_HELI( l_U1010 )))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U1010, l_U1021, 8.00000000, 8.00000000, 8.00000000, 0 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U1010, 29, ref l_U892 );
                            if (l_U892 == 7)
                            {
                                TASK_PERFORM_SEQUENCE( l_U1010, l_U1052 );
                            }
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U1020 ))
            {
                SET_CAR_ENGINE_ON( l_U1020, 0, 1 );
            }
            break;
            case 14:
            sub_33936();
            if (l_U1064 == 17)
            {
                GET_GAME_TIMER( ref l_U525 );
                CLEAR_AREA( l_U623._fU0._fU0, l_U623._fU0._fU4, l_U623._fU0._fU8, 30.00000000, 0 );
                CLEAR_AREA_OF_CARS( l_U623._fU0._fU0, l_U623._fU0._fU4, l_U623._fU0._fU8, 30.00000000 );
                sub_39777();
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 3000 );
                }
                sub_16164( "E1S3p5_SL", ref l_U917, 6, 1 );
                l_U523 = 15;
            }
            break;
            case 15:
            l_U523 = 16;
            break;
            case 16:
            sub_39967( l_U900, "E1S3p5_PAS", "E1S3p5A", 0 );
            CLEAR_WANTED_LEVEL( sub_986() );
            sub_40565();
            g_U38701 = 1;
            INCREMENT_INT_STAT( 145, 1 );
            g_U24 = 82;
            sub_47040( l_U900, l_U524, 5 );
            sub_3629();
            break;
            case 17:
            if (g_U10991 > 1)
            {
                SET_PLAYER_MOOD_PISSED_OFF( sub_986(), 150 );
                SAY_AMBIENT_SPEECH( sub_4185(), "MISSION_FAIL_RAGE", 1, 1, 0 );
            }
            sub_3348( 0 );
            sub_3489( 0 );
            if (l_U901 == 1)
            {
                PRINT_NOW( "dirDead", 7500, 1 );
                sub_39967( l_U900, "E1S3p5_DIE", "E1S3p5A", 0 );
            }
            else if (l_U902 == 1)
            {
                sub_47346();
                PRINT_NOW( "dircar", 7500, 1 );
            }
            else if (l_U903 == 1)
            {
                if (NOT (IS_CHAR_INJURED( l_U1010 )))
                {
                    TASK_SMART_FLEE_CHAR( l_U1010, sub_4185(), 300, -2 );
                }
                PRINT_NOW( "PilotDead", 7500, 1 );
                sub_39967( l_U900, "E1S3p5_KPIL", "E1S3p5A", 0 );
            }
            else if (l_U904 == 1)
            {
                PRINT_NOW( "HeliDead", 7500, 1 );
                sub_39967( l_U900, "E1S3p5_DAM", "E1S3p5A", 0 );
            };;;;
            if (NOT (IS_CHAR_INJURED( l_U1010 )))
            {
                TASK_SMART_FLEE_CHAR( l_U1010, sub_4185(), 200.00000000, -2 );
            }
            sub_854();
            sub_3290( l_U900, l_U524 );
            sub_3629();
            break;
        }
    }
    return;
}

void sub_854()
{
    sub_863();
    return;
}

void sub_863()
{
    int iVar2;

    iVar2 = 2;
    sub_877( iVar2 );
    sub_1823( iVar2 );
    return;
}

void sub_877(unknown uParam0)
{
    if (g_U816)
    {
        sub_896();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_986(), 150 );
    switch (uParam0)
    {
        case 2:
        case 8:
        sub_1059( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1591( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1726();
    return;
}

void sub_896()
{
    sub_905();
    return;
}

void sub_905()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_986()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1059(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_1070( uParam1 );
    sub_1265( uParam0, 0, uParam2 );
    sub_1265( uParam0, 1, uParam3 );
    sub_1265( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_1458();
    return;
}

void sub_1070(unknown uParam0)
{
    ADD_SCORE( sub_986(), uParam0 );
    sub_1095( uParam0 );
    return;
}

void sub_1095(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1206( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_1206(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1265(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12306[uParam0]._fU40[uParam1] += iParam2;
    if (g_U12306[uParam0]._fU40[uParam1] < 0)
    {
        g_U12306[uParam0]._fU40[uParam1] = 0;
    }
    if (g_U12306[uParam0]._fU40[uParam1] > 100)
    {
        g_U12306[uParam0]._fU40[uParam1] = 100;
    }
    return;
}

void sub_1458()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U352[I] = 4;
    }
    return;
}

void sub_1591(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1726()
{
    sub_1735();
    return;
}

void sub_1735()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1823(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1591( "Flow_Quit_Proc_Subpart: Proc Mission not loaded" );
    }
    if (NOT g_U14838[uParam0]._fU160._fU96)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1591( "Flow_Quit_Proc_Subpart: Subpart not active" );
    }
    g_U14838[uParam0]._fU160._fU96 = 0;
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (g_U14838[uParam0]._fU160._fU100 < iVar3)
    {
        g_U14838[uParam0]._fU160._fU100 = iVar3 + 10000;
    }
    g_U12303 = 0;
    g_U12306[uParam0]._fU28 = 1;
    sub_2222();
    sub_2846();
    uVar4 = sub_2881( uParam0 );
    sub_3136( uVar4, 0 );
    sub_3217();
    return;
}

void sub_2222()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_2260( 5, g_U572[I] )) == 1))
        {
            if ((sub_2260( 1, g_U572[I] )) != 0)
            {
                sub_2546( I );
            }
        }
    }
    if (NOT sub_2712())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    if (g_U94._fU0 == 1015)
    {
        g_U94._fU92 = 1;
    }
    return;
}

int sub_2260(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2546(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2631( g_U572 - 1 );
    return;
}

void sub_2631(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2712()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_2260( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2846()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

int sub_2881(unknown uParam0)
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
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1206( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_3136(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 22))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20853[iParam0] = iVar4;
    if (bParam1)
    {
        g_U20853[iParam0] += 30000;
    }
    return;
}

void sub_3217()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U20912 = iVar2 + 2000;
    return;
}

void sub_3290(unknown uParam0, unknown uParam1)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 2;
    g_U15862[uParam0]._fU228._fU0 = 2;
    return;
}

void sub_3348(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 <= 3) AND (g_U8944 >= 1))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_3489(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 <= 8) AND (g_U8944 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_3629()
{
    g_U10460 = 1;
    if (NOT (IS_CHAR_INJURED( l_U1010 )))
    {
        if (IS_GROUP_MEMBER( l_U1010, sub_3667() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U1010 );
        }
    }
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    if (NOT (IS_CHAR_INJURED( l_U1010 )))
    {
        SET_CHAR_KEEP_TASK( l_U1010, 1 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1010 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1020 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1011 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1021 );
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    sub_3826();
    SWITCH_ROADS_ON( -1616.53000000 - 30, 778.24300000 - 30, 27.27420000 - 30, -1616.53000000 + 30, 778.24300000 + 30, 27.27420000 + 30 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3667()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3826()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1013[I] );
    }
    for ( I = 0; I <= 2; I++ )
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1016[I] );
    }
    for ( I = 0; I <= 6; I++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U998[I] );
    }
    for ( I = 0; I <= 2; I++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1006[I] );
    }
    return;
}

int sub_4084(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result <= 14; Result++ )
    {
        switch (g_U15862[uParam0]._fU228._fU12[Result])
        {
            case 2:
            case 0:
            return Result;
            break;
        }
    }
    return -1;
}

void sub_4185()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4236(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4316( "\n PED NUMBER ", uParam0 );
    sub_4356( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4316(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4356(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4392(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4428())
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

int sub_4428()
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

void sub_4589()
{
    if (sub_4603( l_U900 ))
    {
        g_U10991--;
        sub_5188( ref l_U1077, "E1S3p_NO", ref l_U1098 );
        sub_5188( ref l_U1077, "E1S3p_NO2", ref l_U1098 );
        sub_5341( ref l_U1077, "E1S3AUD", 1 );
        sub_8303( "STUBBS" );
        l_U523 = 17;
    }
    if (DOES_CHAR_EXIST( l_U1010 ))
    {
        if (IS_CHAR_INJURED( l_U1010 ))
        {
            if (l_U523 != 17)
            {
                if (NOT (IS_CHAR_DEAD( l_U1010 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1010 );
                    DAMAGE_CHAR( l_U1010, 500, 1 );
                    PRINTNL();
                    PRINTSTRING( "-----------Damage CEO-------------" );
                    PRINTNL();
                }
                PRINTNL();
                PRINTSTRING( "-----------Damage CEO FAIL-------------" );
                PRINTNL();
                l_U901 = 1;
                l_U523 = 17;
            }
        }
    }
    if (l_U523 < 11)
    {
        if (DOES_VEHICLE_EXIST( l_U1020 ))
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U1020 )))
            {
                if (l_U523 != 17)
                {
                    l_U902 = 1;
                    l_U523 = 17;
                }
            }
        }
        if (DOES_VEHICLE_EXIST( l_U1020 ))
        {
            if (IS_VEH_DRIVEABLE( l_U1020 ))
            {
                if (sub_8673( l_U1020 ))
                {
                    l_U902 = 1;
                    l_U523 = 17;
                }
            }
        }
    }
    else if (l_U523 < 14)
    {
        if (IS_VEH_DRIVEABLE( l_U1020 ))
        {
            if (sub_8804( l_U1020 ))
            {
                l_U902 = 1;
                l_U523 = 17;
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U1011 ))
    {
        if (IS_CHAR_INJURED( l_U1011 ))
        {
            if (l_U523 != 17)
            {
                l_U903 = 1;
                l_U523 = 17;
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U1021 ))
    {
        if ((IS_CAR_IN_WATER( l_U1021 )) || ((IS_HELI_PART_BROKEN( l_U1021, 1, 1, 1 )) || (NOT (IS_VEH_DRIVEABLE( l_U1021 )))))
        {
            if (l_U523 != 17)
            {
                l_U904 = 1;
                l_U523 = 17;
            }
        }
    }
    return;
}

int sub_4603(unknown uParam0)
{
    if (g_U15862[uParam0]._fU4 == 1)
    {
        if (g_U15862[uParam0]._fU8[1]._fU0[5] == 1)
        {
            g_U15862[uParam0]._fU4 = 0;
            g_U15862[uParam0]._fU8[1]._fU0[5] = 0;
            if (sub_4696())
            {
                return 0;
            }
            if (sub_4826())
            {
                return 0;
            }
            sub_5088();
            return 1;
        }
    }
    return 0;
}

int sub_4696()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Brian" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Dave" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc2" )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_4826()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    int I;
    int iVar10;

    fVar8 = 0.00000000;
    if (IS_CHAR_DEAD( sub_4185() ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( sub_4185(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    I = 0;
    for ( I = 0; I < 9; I++ )
    {
        if ((g_U18635[I]._fU24) || (g_U18635[I]._fU20))
        {
            return 1;
        }
        if (g_U18635[I]._fU0)
        {
            iVar10 = g_U18635[I]._fU180;
            if (NOT (iVar10 == 16))
            {
                uVar2 = {g_U10789[iVar10]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref fVar8 );
                if (fVar8 < 500.00000000)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_5088()
{
    g_U814 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_5188(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((uParam2^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam2^)], uParam1, 16 );
        (uParam2^)++;
    }
    else
    {
        SCRIPT_ASSERT( "ADD_SPEECH_LABEL - increase the size of your array" );
    }
    return;
}

int sub_5341(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U94._fU60;
    if (bParam2)
    {
        return sub_5394( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U94._fU368)
    {
        StrCopy( ref g_U94._fU224[0], uParam1, 16 );
        g_U94._fU224[1] = {(uParam0^)[0]};
        sub_7293( uVar14, ref g_U94._fU176 );
        g_U94._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_5394(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_5464( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_5464( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_986() )))
    {
        sub_5464( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4185() ))) AND (IS_CHAR_IN_ANY_CAR( sub_4185() )))
    {
        sub_5464( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_5464( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_5921()))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU48 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
        case 1:
        if (g_U94._fU368)
        {
            if ((NOT bParam8) || (g_U94._fU372))
            {
                sub_5464( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U94._fU60 != -1)
        {
            if ((g_U15862[g_U94._fU60]._fU196._fU24 != 4) AND (g_U15862[g_U94._fU60]._fU196._fU24 != 5))
            {
                g_U15862[g_U94._fU60]._fU196._fU24 = 0;
            }
        }
        g_U94._fU368 = 1;
        g_U94._fU372 = bParam8;
        uParam0 = g_U94._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_5921()))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU52 = 1;
        g_U94._fU56 = 1;
        g_U94._fU372 = 1;
        g_U94._fU368 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_7293( uParam0, ref g_U94._fU176 );
    sub_7689( ref g_U94._fU160 );
    g_U94._fU380 = uParam10;
    g_U94._fU376 = bParam11;
    g_U94._fU420 = uParam12;
    g_U94._fU424 = -1;
    g_U94._fU364 = uParam3;
    StrCopy( ref g_U94._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U9051[I] = {(uParam1^)[I]};
        sub_4356( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U94._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U94._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U94._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U94._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U94._fU208, uParam6, 16 );
    g_U94._fU80 = uParam7;
    g_U94._fU384 = 0;
    g_U94._fU532 = uParam13;
    g_U8946 = 4;
    return 1;
}

void sub_5464(unknown uParam0)
{
    return;
}

int sub_5921()
{
    if ((g_U94._fU52) || (g_U94._fU48))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_5978())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_5978()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_986() )))
    {
        sub_5464( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_5464( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_5464( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU104) || (g_U94._fU100))
    {
        sub_5464( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_986() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4185() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_4185(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_5464( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_4185() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_5464( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_5464( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_986() )))
    {
        sub_5464( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_7293(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "BILLY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "JIM", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "STUBBS", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ASHLEY", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "RAY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "TERRY", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "CLAY", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "ANGUS", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "MALC", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FED", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_7689(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

void sub_8303(unknown uParam0)
{
    StrCopy( ref g_U94._fU176, uParam0, 32 );
    return;
}

int sub_8673(unknown uParam0)
{
    if ((CHECK_STUCK_TIMER( uParam0, 0, 5000 )) || ((CHECK_STUCK_TIMER( uParam0, 2, 30000 )) || (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_8804(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_4185() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_4185(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_4185(), uParam0, 200.00000000, 200.00000000, 200.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_4185(), uParam0, 150.00000000, 150.00000000, 150.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref l_U521 );
                    l_U522 = l_U521 - l_U520;
                    if (l_U522 > 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U520 );
                }
            }
        }
    }
    return 0;
}

void sub_9185()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U523 = 16;
    }
    if (IS_KEYBOARD_KEY_PRESSED( 33 ))
    {
        l_U901 = 1;
        l_U523 = 17;
    }
    return;
}

void sub_9248()
{
    GET_CHAR_COORDINATES( sub_4185(), ref l_U1117._fU0, ref l_U1117._fU4, ref l_U1117._fU8 );
    switch (l_U1110)
    {
        case 0:
        CREATE_WIDGET_GROUP( "Boat Attachement" );
        ADD_WIDGET_TOGGLE( "Create boat", ref l_U1111 );
        ADD_WIDGET_FLOAT_SLIDER( "Boat offset.x", ref l_U1114._fU0, -10, 10, 0.02000000 );
        ADD_WIDGET_FLOAT_SLIDER( "Boat offset.y", ref l_U1114._fU4, -10, 10, 0.02000000 );
        ADD_WIDGET_FLOAT_SLIDER( "Boat offset.z", ref l_U1114._fU8, -10, 10, 0.02000000 );
        ADD_WIDGET_TOGGLE( "play anim a", ref l_U1112 );
        ADD_WIDGET_TOGGLE( "play anim b", ref l_U1113 );
        END_WIDGET_GROUP();
        l_U1110++;
        break;
        case 1:
        if (l_U1111 == 1)
        {
            if (NOT (DOES_VEHICLE_EXIST( l_U1120 )))
            {
                REQUEST_MODEL( -1043459709 );
                while (NOT (HAS_MODEL_LOADED( -1043459709 )))
                {
                    WAIT( 0 );
                }
                CREATE_CAR( -1043459709, l_U1117._fU0, l_U1117._fU4, l_U1117._fU8, ref l_U1120, 1 );
            }
        }
        if (l_U1111 == 1)
        {
            SET_CHAR_COLLISION( sub_4185(), 0 );
            if (NOT (IS_PED_ATTACHED_TO_ANY_CAR( sub_4185() )))
            {
                if (IS_VEH_DRIVEABLE( l_U1120 ))
                {
                    ATTACH_PED_TO_CAR( sub_4185(), l_U1120, 0, l_U1114, 270.00000000, 0.00000000, 0, 0 );
                }
            }
            else
            {
                DETACH_PED( sub_4185(), 1 );
            }
        }
        if (l_U1112 == 1)
        {
            REQUEST_ANIMS( l_U916 );
            while (NOT (HAVE_ANIMS_LOADED( l_U916 )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_4185(), l_U916, "sit_idle_a" )))
            {
                TASK_PLAY_ANIM( sub_4185(), "sit_idle_a", l_U916, 8.00000000, 1, 0, 0, 0, -2 );
                l_U1112 = 0;
            }
        }
        if (l_U1113 == 1)
        {
            REQUEST_ANIMS( l_U916 );
            while (NOT (HAVE_ANIMS_LOADED( l_U916 )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_4185(), l_U916, "sit_idle_b" )))
            {
                TASK_PLAY_ANIM( sub_4185(), "sit_idle_b", l_U916, 8.00000000, 1, 0, 0, 0, -2 );
                l_U1113 = 0;
            }
        }
        break;
    }
    return;
}

void sub_10229()
{
    l_U612[0]._fU0 = {-1615.74500000, 735.48610000, 27.47400000};
    l_U612[0]._fU12 = 296.50780000;
    l_U612[0]._fU16 = 1127131465;
    l_U612[1]._fU0 = {-1621.55400000, 715.42480000, 26.51600000};
    l_U612[1]._fU12 = 290.01060000;
    l_U612[1]._fU16 = 1127131465;
    l_U633[0]._fU0 = {-1593.39900000, 711.59030000, 24.44420000};
    l_U633[0]._fU12 = 357.01630000;
    l_U633[0]._fU16 = -1627000575;
    l_U633[1]._fU0 = {-1634.55800000, 691.29530000, 27.31470000};
    l_U633[1]._fU12 = 82.14730000;
    l_U633[1]._fU16 = -1627000575;
    l_U633[2]._fU0 = {-1618.16500000, 772.47270000, 27.70140000};
    l_U633[2]._fU12 = 273.47960000;
    l_U633[2]._fU16 = -1627000575;
    l_U623._fU0 = {-824.20990000, 779.53360000, 5.20000000};
    l_U623._fU12 = 359.99980000;
    l_U623._fU16 = -1660661558;
    l_U628._fU0 = {-521.30690000, 2751.50000000, 0.00000000};
    l_U628._fU12 = 3359.63000000;
    l_U628._fU16 = -1043459709;
    l_U590[0]._fU0 = {-1594.58900000, 706.47910000, 24.37970000};
    l_U590[0]._fU12 = 296.13630000;
    l_U590[0]._fU16 = 7;
    l_U590[0]._fU20 = 30000;
    l_U590[0]._fU24 = -183203150;
    l_U590[1]._fU0 = {-1638.90800000, 694.08810000, 27.66270000};
    l_U590[1]._fU12 = 195.71720000;
    l_U590[1]._fU16 = 7;
    l_U590[1]._fU20 = 30000;
    l_U590[1]._fU24 = -183203150;
    l_U590[2]._fU0 = {-1608.32500000, 768.07720000, 26.19160000};
    l_U590[2]._fU12 = 344.41990000;
    l_U590[2]._fU16 = 7;
    l_U590[2]._fU20 = 30000;
    l_U590[2]._fU24 = -183203150;
    l_U540[0]._fU0 = {-1606.79000000, 709.52910000, 24.44390000};
    l_U540[0]._fU12 = 265.93730000;
    l_U540[0]._fU16 = 12;
    l_U540[0]._fU20 = 30000;
    l_U540[0]._fU24 = -399799472;
    l_U540[1]._fU0 = {-1613.78500000, 706.55760000, 24.84020000};
    l_U540[1]._fU12 = 300.04210000;
    l_U540[1]._fU16 = 12;
    l_U540[1]._fU20 = 30000;
    l_U540[1]._fU24 = -399799472;
    l_U540[2]._fU0 = {-1623.93900000, 707.93660000, 26.68170000};
    l_U540[2]._fU12 = 334.33600000;
    l_U540[2]._fU16 = 12;
    l_U540[2]._fU20 = 30000;
    l_U540[2]._fU24 = -92065793;
    l_U540[3]._fU0 = {-1616.13100000, 747.50940000, 27.45190000};
    l_U540[3]._fU12 = 171.59690000;
    l_U540[3]._fU16 = 12;
    l_U540[3]._fU20 = 30000;
    l_U540[3]._fU24 = -399799472;
    l_U540[4]._fU0 = {-1610.07600000, 737.69520000, 27.41970000};
    l_U540[4]._fU12 = 212.51360000;
    l_U540[4]._fU16 = 12;
    l_U540[4]._fU20 = 30000;
    l_U540[4]._fU24 = -92065793;
    l_U540[5]._fU0 = {-1629.14500000, 727.95810000, 27.31080000};
    l_U540[5]._fU12 = 109.85660000;
    l_U540[5]._fU16 = 12;
    l_U540[5]._fU20 = 30000;
    l_U540[5]._fU24 = -92065793;
    l_U540[6]._fU0 = {-1612.15000000, 759.95420000, 27.28740000};
    l_U540[6]._fU12 = 32.60500000;
    l_U540[6]._fU16 = 12;
    l_U540[6]._fU20 = 30000;
    l_U540[6]._fU24 = -399799472;
    l_U649[0]._fU0 = {63897, 759, 30};
    l_U649[0]._fU12 = 0;
    l_U649[0]._fU24 = 12;
    l_U649[0]._fU16 = 1127131465;
    l_U649[0]._fU20 = -399799472;
    l_U649[0]._fU40 = {-878.42020000, 789.75550000, 3.46170000};
    l_U676[0]._fU24 = 12;
    l_U676[0]._fU20 = -1754526315;
    l_U649[1]._fU0 = {63891, 759, 30};
    l_U649[1]._fU12 = 0;
    l_U649[1]._fU24 = 12;
    l_U649[1]._fU16 = 1127131465;
    l_U649[1]._fU20 = -399799472;
    l_U649[1]._fU40 = {-851.91640000, 788.63750000, 3.46030000};
    l_U676[1]._fU24 = 12;
    l_U676[1]._fU20 = -92065793;
    return;
}

void sub_11712()
{
    sub_11721();
    REQUEST_MODEL( l_U612[0]._fU16 );
    REQUEST_MODEL( l_U612[1]._fU16 );
    REQUEST_MODEL( l_U896 );
    REQUEST_MODEL( l_U897 );
    REQUEST_ANIMS( l_U915 );
    REQUEST_ANIMS( "Gestures@Niko" );
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    GET_GAME_TIMER( ref l_U525 );
    if (sub_12018())
    {
        if (HAS_MODEL_LOADED( l_U612[0]._fU16 ))
        {
            if (HAS_MODEL_LOADED( l_U612[1]._fU16 ))
            {
                if (HAS_MODEL_LOADED( l_U896 ))
                {
                    if (HAS_MODEL_LOADED( l_U897 ))
                    {
                        if (HAVE_ANIMS_LOADED( l_U915 ))
                        {
                            if (HAVE_ANIMS_LOADED( "Gestures@Niko" ))
                            {
                                CLEAR_AREA( -1624.07100000, 719.55000000, 26.85480000, 100, 1 );
                                LOAD_COMBAT_DECISION_MAKER( 2, ref l_U991 );
                                # -sub_C1FFC0-0xc214c8( 1, ref l_U992 );
                                LOAD_COMBAT_DECISION_MAKER( 4, ref l_U993 );
                                LOAD_COMBAT_DECISION_MAKER( 0, ref l_U996 );
                                # -sub_C1FFC0-0xc214c8( 0, ref l_U997 );
                                SET_CHAR_GESTURE_GROUP( sub_4185(), "Gestures@Niko" );
                                l_U523 = 2;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_11721()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        REQUEST_MODEL( l_U540[I]._fU24 );
    }
    for ( I = 0; I <= 1; I++ )
    {
        REQUEST_MODEL( l_U612[I]._fU16 );
    }
    for ( I = 0; I <= 2; I++ )
    {
        REQUEST_MODEL( l_U590[I]._fU24 );
    }
    for ( I = 0; I <= 2; I++ )
    {
        REQUEST_MODEL( l_U633[I]._fU16 );
    }
    return;
}

int sub_12018()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        if (NOT (HAS_MODEL_LOADED( l_U540[I]._fU24 )))
        {
            return 0;
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT (HAS_MODEL_LOADED( l_U612[I]._fU16 )))
        {
            return 0;
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (HAS_MODEL_LOADED( l_U590[I]._fU24 )))
        {
            return 0;
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (HAS_MODEL_LOADED( l_U633[I]._fU16 )))
        {
            return 0;
        }
    }
    return 1;
}

void sub_12514()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        if (HAS_MODEL_LOADED( l_U540[I]._fU24 ))
        {
            CREATE_CHAR( 25, l_U540[I]._fU24, l_U540[I]._fU0._fU0, l_U540[I]._fU0._fU4, l_U540[I]._fU0._fU8, ref l_U998[I], 1 );
            SET_CHAR_HEADING( l_U998[I], l_U540[I]._fU12 );
            GIVE_WEAPON_TO_CHAR( l_U998[I], l_U540[I]._fU16, l_U540[I]._fU20, 0 );
            SET_COMBAT_DECISION_MAKER( l_U998[I], l_U996 );
            SET_CHAR_DECISION_MAKER( l_U998[I], l_U997 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U998[I], 23 );
            SET_RELATIONSHIP( 5, 23, 0 );
            SET_CHAR_RELATIONSHIP( l_U998[I], 5, 0 );
            ADD_BLIP_FOR_CHAR( l_U998[I], ref l_U1026[I] );
            SET_BLIP_AS_FRIENDLY( l_U1026[I], 0 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U998[I], l_U540[I]._fU0, 5.00000000 );
            sub_12861( l_U1026[I] );
            SET_PED_DIES_WHEN_INJURED( l_U998[I], 1 );
            ADD_ARMOUR_TO_CHAR( l_U998[I], 100 );
            sub_4236( 1, l_U998[I], "FIB", 0 );
        }
        else
        {
            SCRIPT_ASSERT( "A Goons model isn't loaded" );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (HAS_MODEL_LOADED( l_U590[I]._fU24 ))
        {
            CREATE_CHAR( 25, l_U590[I]._fU24, l_U590[I]._fU0._fU0, l_U590[I]._fU0._fU4, l_U590[I]._fU0._fU8, ref l_U1006[I], 1 );
            SET_CHAR_HEADING( l_U1006[I], l_U590[I]._fU12 );
            GIVE_WEAPON_TO_CHAR( l_U1006[I], l_U590[I]._fU16, l_U590[I]._fU20, 0 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1006[I] );
            SET_COMBAT_DECISION_MAKER( l_U1006[I], l_U996 );
            SET_CHAR_DECISION_MAKER( l_U1006[I], l_U997 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U1006[I], 23 );
            SET_RELATIONSHIP( 5, 23, 0 );
            SET_CHAR_RELATIONSHIP( l_U1006[I], 5, 0 );
            ADD_BLIP_FOR_CHAR( l_U1006[I], ref l_U1037[I] );
            SET_BLIP_AS_FRIENDLY( l_U1037[I], 0 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1006[I], l_U590[I]._fU0, 10.00000000 );
            sub_12861( l_U1037[I] );
            sub_4236( 1, l_U1006[I], "FIB", 0 );
            ADD_ARMOUR_TO_CHAR( l_U1006[I], 100 );
            SET_PED_DIES_WHEN_INJURED( l_U1006[I], 1 );
        }
        else
        {
            SCRIPT_ASSERT( "A cop model isn't loaded" );
        }
    }
    return;
}

void sub_12861(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        CHANGE_BLIP_DISPLAY( uParam0, 0 );
    }
    return;
}

void sub_13487()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (HAS_MODEL_LOADED( l_U612[I]._fU16 ))
        {
            CREATE_CAR( l_U612[I]._fU16, l_U612[I]._fU0._fU0, l_U612[I]._fU0._fU4, l_U612[I]._fU0._fU8, ref l_U1013[I], 1 );
            SET_CAR_HEADING( l_U1013[I], l_U612[I]._fU12 );
            OPEN_CAR_DOOR( l_U1013[I], 0 );
            ADD_BLIP_FOR_CAR( l_U1013[I], ref l_U1034[I] );
            SET_BLIP_AS_FRIENDLY( l_U1034[I], 0 );
            CHANGE_BLIP_DISPLAY( l_U1034[I], 0 );
        }
        else
        {
            SCRIPT_ASSERT( "A blockade model isn't loaded" );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (HAS_MODEL_LOADED( l_U633[I]._fU16 ))
        {
            CREATE_CAR( l_U633[I]._fU16, l_U633[I]._fU0._fU0, l_U633[I]._fU0._fU4, l_U633[I]._fU0._fU8, ref l_U1016[I], 1 );
            SET_CAR_HEADING( l_U1016[I], l_U633[I]._fU12 );
            OPEN_CAR_DOOR( l_U1016[I], 0 );
            ADD_BLIP_FOR_CAR( l_U1016[I], ref l_U1041[I] );
            SET_BLIP_AS_FRIENDLY( l_U1041[I], 0 );
            CHANGE_BLIP_DISPLAY( l_U1041[I], 0 );
        }
        else
        {
            SCRIPT_ASSERT( "A cop car model isn't loaded" );
        }
    }
    return;
}

void sub_14019()
{
    if (HAS_MODEL_LOADED( l_U896 ))
    {
        CREATE_CAR( l_U896, l_U877._fU0, l_U877._fU4, l_U877._fU8, ref l_U1020, 1 );
        SET_CAR_HEADING( l_U1020, l_U893 );
        ADD_BLIP_FOR_CAR( l_U1020, ref l_U1024 );
        SET_BLIP_AS_FRIENDLY( l_U1024, 1 );
        SET_CAN_BURST_CAR_TYRES( l_U1020, 0 );
        FREEZE_CAR_POSITION( l_U1020, 1 );
        SET_CAR_COLOUR_COMBINATION( l_U1020, 1 );
        sub_12861( l_U1024 );
    }
    else
    {
        SCRIPT_ASSERT( "Director Car model isn't loaded" );
    }
    if (IS_VEH_DRIVEABLE( l_U1020 ))
    {
        if (HAS_MODEL_LOADED( l_U897 ))
        {
            CREATE_CHAR( 5, l_U897, l_U880._fU0, l_U880._fU4, l_U880._fU8, ref l_U1010, 1 );
            SET_CHAR_HEADING( l_U1010, l_U895 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U1010, 24 );
            ADD_BLIP_FOR_CHAR( l_U1010, ref l_U1025 );
            SET_BLIP_AS_FRIENDLY( l_U1025, 1 );
            sub_12861( l_U1025 );
            SET_RELATIONSHIP( 2, 24, 23 );
            SET_RELATIONSHIP( 2, 24, 0 );
            SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U1010, 1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U1010, "Handcuffed_on_Bonnet", l_U915, 3.00000000, 1, 0, 0, 0, -2 );
            FREEZE_CHAR_POSITION( l_U1010, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1010, 1 );
            SET_PED_DIES_WHEN_INJURED( l_U1010, 1 );
            TASK_SET_CHAR_DECISION_MAKER( l_U1010, l_U997 );
            TASK_SET_COMBAT_DECISION_MAKER( l_U1010, l_U996 );
            SET_CHAR_COMPONENT_VARIATION( l_U1010, 8, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1010, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1010, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1010, 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1010, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1010, 7, 1, 1 );
            SET_CHAR_NEVER_TARGETTED( l_U1010, 1 );
            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U1010, 0 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U1010, 0 );
            sub_4236( 2, l_U1010, "CEO", 0 );
        }
        else
        {
            SCRIPT_ASSERT( "Director Ped model isn't loaded" );
        }
    }
    else
    {
        SCRIPT_ASSERT( "Director Car isn't drivable" );
    }
    return;
}

void sub_14770(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        CHANGE_BLIP_DISPLAY( uParam0, 4 );
    }
    return;
}

int sub_14980()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1006[I] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1006[I], sub_4185(), 0 ))
            {
                return 1;
            }
            if (IS_PLAYER_TARGETTING_CHAR( sub_986(), l_U1006[I] ))
            {
                return 1;
            }
        }
    }
    for ( I = 0; I <= 6; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U998[I] )))
        {
            if (IS_PLAYER_TARGETTING_CHAR( sub_986(), l_U998[I] ))
            {
                return 1;
            }
        }
    }
    if (sub_15170() == 1)
    {
        return 1;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_986(), 0 ))
    {
        if ((LOCATE_CHAR_ANY_MEANS_2D( sub_4185(), -1612.12900000, 764.80350000, 10.00000000, 10.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( sub_4185(), -1637.60200000, 698.15340000, 10.00000000, 10.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_2D( sub_4185(), -1599.85800000, 707.34960000, 10.00000000, 10.00000000, 0 ))))
        {
            return 1;
        }
    }
    return 0;
}

int sub_15170()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U1013[I] ))
        {
            if (IS_CHAR_IN_CAR( sub_4185(), l_U1013[I] ))
            {
                return 1;
            }
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U1013[I], sub_4185() ))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U1016[I] ))
        {
            if (IS_CHAR_IN_CAR( sub_4185(), l_U1016[I] ))
            {
                return 1;
            }
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U1016[I], sub_4185() ))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_15566()
{
    if (IS_CHAR_IN_ANY_HELI( sub_4185() ))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4185(), l_U877._fU0, l_U877._fU4, l_U877._fU8, 30.00000000, 30.00000000, 50.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_15690()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U540[I]._fU24 );
    }
    for ( I = 0; I <= 1; I++ )
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U612[I]._fU16 );
    }
    for ( I = 0; I <= 2; I++ )
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U590[I]._fU24 );
    }
    for ( I = 0; I <= 2; I++ )
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U633[I]._fU16 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U896 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U897 );
    return;
}

void sub_15983()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U998[I] )))
        {
            SET_COMBAT_DECISION_MAKER( l_U998[I], l_U991 );
            SET_CHAR_DECISION_MAKER( l_U998[I], l_U992 );
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4185(), l_U998[I], 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                sub_4236( 1, l_U998[I], "FIB", 0 );
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_16164( "E1S3p5_ATT", ref l_U917, 6, 1 );
                }
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1006[I] )))
        {
            SET_COMBAT_DECISION_MAKER( l_U1006[I], l_U991 );
            SET_CHAR_DECISION_MAKER( l_U1006[I], l_U992 );
        }
    }
    return;
}

void sub_16164(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_16185( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_16185(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_16239( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_16239(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_16261( iParam1 )))
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_16937( ref g_U8947, ref l_U2 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_16261(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_5464( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_5464( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_5464( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_16937(int iParam0, int iParam1)
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

void sub_17270()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U1006[I] )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4185() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4185(), l_U1006[I], 7.00000000, 7.00000000, 7.00000000, 0 ))
                {
                    if (NOT (sub_17379( l_U917 )))
                    {
                        GET_GAME_TIMER( ref l_U1100 );
                        l_U1101 = l_U1100 - l_U1099;
                        if ((l_U1102 == 0) || (l_U1101 > 7000))
                        {
                            sub_4236( 1, l_U1006[I], "FIB", 0 );
                            sub_16164( "E1S3p5_ARR", ref l_U917, 6, 1 );
                            TASK_LOOK_AT_CHAR( l_U1006[I], sub_4185(), 7000, 0 );
                            l_U1102 = 1;
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U1099 );
                    }
                }
            }
        }
    }
    return;
}

int sub_17379(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_5464( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_5464( "\n speech is not playing" );
    }
    return 0;
}

void sub_17714()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_CHAR_EXIST( l_U998[I] ))
        {
            if (IS_CHAR_INJURED( l_U998[I] ))
            {
                if (DOES_BLIP_EXIST( l_U1026[I] ))
                {
                    REMOVE_BLIP( l_U1026[I] );
                }
            }
        }
    }
    return;
}

void sub_17909()
{
    int I;

    switch (l_U1055)
    {
        case 0:
        GET_GAME_TIMER( ref l_U1056 );
        l_U1055 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U1057 );
        l_U1058 = l_U1057 - l_U1056;
        if (l_U1058 > 7000)
        {
            l_U1055 = 2;
        }
        break;
        case 2:
        if (NOT (sub_17379( l_U917 )))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                for ( I = 0; I <= 2; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U1006[I] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4185(), l_U1006[I], 10.00000000, 10.00000000, 10.00000000, 0 ))
                        {
                            sub_4236( 1, l_U1006[I], "FIB", 0 );
                            sub_16164( "E1S3p5_ATT", ref l_U917, 6, 1 );
                            l_U1055 = 3;
                            return;
                        }
                    }
                }
                for ( I = 0; I <= 6; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U998[I] )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4185(), l_U998[I], 10.00000000, 10.00000000, 10.00000000, 0 ))
                        {
                            sub_4236( 1, l_U998[I], "FIB", 0 );
                            sub_16164( "E1S3p5_ATT", ref l_U917, 6, 1 );
                            l_U1055 = 3;
                            return;
                        }
                    }
                }
            }
        }
        break;
        case 3:
        l_U1055 = 0;
        break;
    }
    return;
}

void sub_18376()
{
    if (l_U912 == 0)
    {
        if (NOT (IS_CHAR_INJURED( l_U1010 )))
        {
            if (NOT (sub_17379( l_U917 )))
            {
                if ((IS_CHAR_TRYING_TO_ENTER_A_LOCKED_CAR( sub_4185() )) || (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4185(), l_U1010, 8.00000000, 8.00000000, 0 )))
                {
                    if (NOT (sub_17379( l_U917 )))
                    {
                        sub_16164( "E1S3p5_HELP", ref l_U917, 1, 1 );
                        PRINT_NOW( "doUncuff", 7500, 1 );
                        l_U912 = 1;
                    }
                }
            }
        }
    }
    if (IS_CHAR_TRYING_TO_ENTER_A_LOCKED_CAR( sub_4185() ))
    {
        l_U912 = 0;
    }
    return;
}

int sub_18590(unknown uParam0, unknown uParam1)
{
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_18657()
{
    if (NOT (IS_CHAR_INJURED( l_U1010 )))
    {
        if (l_U1104 < 4)
        {
            LOCK_CAR_DOORS( l_U1020, 2 );
        }
        else
        {
            LOCK_CAR_DOORS( l_U1020, 1 );
        }
        switch (l_U1104)
        {
            case 0:
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4185(), l_U1010, 3.00000000, 3.00000000, 3.00000000, 0 ))
            {
                if (sub_18835( 4, 0 ))
                {
                    if ((NOT (IS_CONTROL_PRESSED( 0, 87 ))) AND (NOT (IS_CONTROL_PRESSED( 0, 6 ))))
                    {
                        if (NOT (IS_CONTROL_PRESSED( 0, 4 )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4185() )))
                            {
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Uncuff" )))
                                {
                                    PRINT_HELP( "Uncuff" );
                                }
                                if (sub_19217())
                                {
                                    SET_PLAYER_CONTROL( sub_986(), 0 );
                                    CLEAR_HELP();
                                    sub_19431();
                                    l_U1104 = 1;
                                }
                            }
                        }
                    }
                }
                else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Uncuff" ))
                {
                    CLEAR_HELP();
                }
                sub_19601( 4, "Uncuff" );;
            }
            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Uncuff" ))
            {
                CLEAR_HELP();
            }
            sub_19601( 4, "Uncuff" );;
            break;
            case 1:
            if (sub_20000())
            {
                l_U1104 = 4;
            }
            else
            {
                sub_19601( 4, "Uncuff" );
                PRINTNL();
                PRINTSTRING( "-----------" );
                PRINTNL();
                PRINTSTRING( "------- Given task of slide to coords --------------" );
                PRINTNL();
                PRINTSTRING( "-----------" );
                PRINTNL();
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U1010, 0, -0.84100000, 0, ref l_U1105._fU0, ref l_U1105._fU4, ref l_U1105._fU8 );
                TASK_CHAR_SLIDE_TO_COORD( sub_4185(), l_U1105._fU0, l_U1105._fU4, l_U1105._fU8, l_U895, 1061158912 );
                l_U892 = 0;
                l_U1104 = 2;
            }
            break;
            case 2:
            if (sub_20000())
            {
                l_U1104 = 4;
            }
            else
            {
                PRINTNL();
                PRINTSTRING( "-----------" );
                PRINTNL();
                PRINTSTRING( "------- waiting till in area --------------" );
                PRINTNL();
                PRINTSTRING( "-----------" );
                PRINTNL();
                GET_SCRIPT_TASK_STATUS( sub_4185(), 68, ref l_U892 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U1010, 0, -0.84100000, 0, ref l_U1105._fU0, ref l_U1105._fU4, ref l_U1105._fU8 );
                if (l_U892 == 7)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4185(), l_U1105._fU0, l_U1105._fU4, l_U1105._fU8, 0.25000000, 0.25000000, 3, 0 ))
                    {
                        TASK_ACHIEVE_HEADING( sub_4185(), l_U895 );
                        l_U892 = 0;
                        l_U1104 = 3;
                    }
                    else
                    {
                        TASK_CHAR_SLIDE_TO_COORD( sub_4185(), l_U1105._fU0, l_U1105._fU4, l_U1105._fU8, l_U895, 1061158912 );
                    }
                }
                else if (NOT (sub_20846( sub_4185(), 68 )))
                {
                    TASK_CHAR_SLIDE_TO_COORD( sub_4185(), l_U1105._fU0, l_U1105._fU4, l_U1105._fU8, l_U895, 1061158912 );
                }
            }
            break;
            case 3:
            if (sub_20000())
            {
                l_U1104 = 4;
            }
            else
            {
                PRINTNL();
                PRINTSTRING( "-----------" );
                PRINTNL();
                PRINTSTRING( "------- waiting for heading to be right --------------" );
                PRINTNL();
                PRINTSTRING( "-----------" );
                PRINTNL();
                GET_SCRIPT_TASK_STATUS( sub_4185(), 19, ref l_U892 );
                GET_CHAR_HEADING( sub_4185(), ref l_U1108 );
                SET_EVERYONE_IGNORE_PLAYER( sub_986(), 0 );
                SET_CHAR_PROOFS( sub_4185(), 1, 1, 1, 1, 1 );
                if ((l_U1108 < (l_U895 + 10)) AND (l_U1108 > (l_U895 - 10)))
                {
                    TASK_PLAY_ANIM( sub_4185(), "M_Release_Cuffs", l_U915, 8.00000000, 0, 0, 0, 0, -2 );
                    CLEAR_CHAR_TASKS( l_U1010 );
                    l_U892 = 0;
                    TASK_PLAY_ANIM( l_U1010, "F_Release_Cuffs", l_U915, 3000.00000000, 0, 0, 0, 0, -2 );
                    l_U1104 = 4;
                }
                else if (NOT (sub_20846( sub_4185(), 19 )))
                {
                    TASK_ACHIEVE_HEADING( sub_4185(), l_U895 );
                }
            }
            break;
            case 4:
            PRINTNL();
            PRINTSTRING( "-----------" );
            PRINTNL();
            PRINTSTRING( "------- get into the car --------------" );
            PRINTNL();
            PRINTSTRING( "-----------" );
            PRINTNL();
            sub_19601( 4, "Uncuff" );
            GET_SCRIPT_TASK_STATUS( sub_4185(), 80, ref l_U892 );
            if (l_U892 == 7)
            {
                SET_CHAR_PROOFS( sub_4185(), 0, 0, 0, 0, 0 );
                SET_PLAYER_CONTROL( sub_986(), 1 );
                sub_21568();
                if (IS_VEH_DRIVEABLE( l_U1020 ))
                {
                    SET_CHAR_KEEP_TASK( l_U1010, 1 );
                    TASK_ENTER_CAR_AS_PASSENGER( l_U1010, l_U1020, -2, 0 );
                    FREEZE_CHAR_POSITION( l_U1010, 0 );
                    FREEZE_CAR_POSITION( l_U1020, 0 );
                }
                l_U1104 = 5;
            }
            break;
            case 5:
            if (IS_VEH_DRIVEABLE( l_U1020 ))
            {
                if (IS_CHAR_IN_CAR( l_U1010, l_U1020 ))
                {
                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U1010, 1 );
                    PRINT_NOW( "BackinCar", 7500, 1 );
                    l_U1104 = 6;
                }
            }
            break;
            case 6:
            return 1;
            break;
        }
    }
    else
    {
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
        PRINTSTRING( "-------She's injured now --------------" );
        PRINTNL();
        PRINTSTRING( "-----------" );
        PRINTNL();
    }
    return 0;
}

int sub_18835(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_986() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_986() )))
            {
                if (((g_U10499) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_986() )))))
                {
                    if (NOT sub_18931())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_4185() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_19016())
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

int sub_18931()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_19016()
{
    return sub_19027( 0, 0 );
}

int sub_19027(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((g_U558 != 9) AND (uParam1))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

int sub_19217()
{
    int iVar2;
    int iVar3;

    if (IS_PLAYER_PLAYING( sub_986() ))
    {
        if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_986() ))
        {
            GET_INTERIOR_FROM_CHAR( sub_4185(), ref iVar2 );
            if (iVar2 == nil)
            {
                if (NOT (IS_PED_RAGDOLL( sub_4185() )))
                {
                    if (NOT (IS_CHAR_GETTING_UP( sub_4185() )))
                    {
                        if (NOT (IS_CHAR_IN_MELEE_COMBAT( sub_4185() )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4185() )))
                            {
                                iVar3 = GET_OBJECT_PED_IS_HOLDING( sub_4185() );
                                if (iVar3 == nil)
                                {
                                    if (IS_CONTROL_PRESSED( 2, 23 ))
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

void sub_19431()
{
    if (NOT (IS_CHAR_DEAD( sub_4185() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_4185(), ref l_U1103 );
        if (l_U1103 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_4185(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_4185(), 0, 1 );
        }
        if (l_U1103 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_4185(), 0, 1 );
        }
    }
    return;
}

void sub_19601(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((l_U107) AND (g_U10468 == iParam0))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U107 = 0;
                if (l_U105)
                {
                    sub_19828();
                    l_U105 = 0;
                }
            }
            if (l_U106)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_986(), 1 );
                l_U106 = 0;
            }
            if (l_U104)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U104 = 0;
            }
        }
    }
    return;
}

void sub_19828()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

int sub_20000()
{
    if (((IS_CONTROL_PRESSED( 2, 2 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 78 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 77 )) AND (NOT IS_USING_CONTROLLER())) || ((sub_20048()) || ((IS_BUTTON_PRESSED( 0, 16 )) || ((IS_BUTTON_PRESSED( 0, 15 )) || ((IS_BUTTON_PRESSED( 0, 14 )) || (IS_BUTTON_PRESSED( 0, 17 )))))))))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4185() );
        SET_PLAYER_CONTROL( sub_986(), 1 );
        return 1;
    }
    return 0;
}

int sub_20048()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 < 65436) || (iVar2 > 100))
    {
        return 1;
    }
    if ((iVar3 < 65436) || (iVar3 > 100))
    {
        return 1;
    }
    return 0;
}

int sub_20846(unknown uParam0, unknown uParam1)
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

void sub_21568()
{
    if (NOT (IS_CHAR_DEAD( sub_4185() )))
    {
        if (l_U1103 != 0)
        {
            if (l_U1103 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_4185(), l_U1103, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_4185(), 46 );
            }
        }
    }
    return;
}

int sub_21987()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_CHAR_EXIST( l_U998[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U998[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_22097()
{
    sub_22106();
    REQUEST_MODEL( l_U623._fU16 );
    REQUEST_MODEL( l_U898 );
    if (sub_22296())
    {
        if (HAS_MODEL_LOADED( l_U623._fU16 ))
        {
            if (HAS_MODEL_LOADED( l_U898 ))
            {
                # -sub_C1FFC0-0xc214c8( 2, ref l_U995 );
                LOAD_COMBAT_DECISION_MAKER( 3, ref l_U994 );
                l_U523 = 7;
            }
        }
    }
    return;
}

void sub_22106()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        REQUEST_MODEL( l_U649[I]._fU20 );
        REQUEST_MODEL( l_U649[I]._fU16 );
        REQUEST_MODEL( sub_22174( l_U649[I]._fU24 ) );
        REQUEST_MODEL( l_U676[I]._fU20 );
        REQUEST_MODEL( sub_22174( l_U676[I]._fU24 ) );
    }
    return;
}

void sub_22174(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

int sub_22296()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (NOT (HAS_MODEL_LOADED( l_U649[I]._fU20 )))
        {
            return 0;
        }
        if (NOT (HAS_MODEL_LOADED( l_U649[I]._fU16 )))
        {
            return 0;
        }
        if (NOT (HAS_MODEL_LOADED( sub_22174( l_U649[I]._fU24 ) )))
        {
            return 0;
        }
        if (NOT (HAS_MODEL_LOADED( l_U676[I]._fU20 )))
        {
            return 0;
        }
        if (NOT (HAS_MODEL_LOADED( sub_22174( l_U676[I]._fU24 ) )))
        {
            return 0;
        }
    }
    return 1;
}

void sub_23081()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    unknown uVar8;

    if (IS_VEH_DRIVEABLE( l_U1020 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U1010 )))
        {
            sub_23130( l_U1010 );
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_4185(), l_U883._fU0, l_U883._fU4, l_U883._fU8, 25.00000000, 25.00000000, 10.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_4185(), l_U889._fU0, l_U889._fU4, l_U889._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
            {
                if (l_U914 == 0)
                {
                    sub_14770( l_U1046 );
                }
                l_U914 = 1;
                sub_12861( l_U1047 );
            }
            if (NOT (IS_CHAR_IN_CAR( sub_4185(), l_U1020 )))
            {
                iVar5 = 1;
                if (l_U1060 != 1)
                {
                    if (l_U1060 != 2)
                    {
                        l_U1059 = 1;
                    }
                }
                l_U907 = 1;
            }
            else
            {
                iVar5 = 0;
            }
            if ((IS_CHAR_IN_CAR( sub_4185(), l_U1020 )) AND (NOT (sub_23413( l_U1010 ))))
            {
                iVar6 = 1;
                if (l_U1060 != 3)
                {
                    l_U1059 = 3;
                }
                l_U907 = 1;
            }
            else
            {
                iVar6 = 0;
            }
            if ((NOT (IS_CHAR_IN_CAR( l_U1010, l_U1020 ))) AND ((IS_CHAR_IN_CAR( sub_4185(), l_U1020 )) AND (sub_23413( l_U1010 ))))
            {
                if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( l_U1010 )))
                {
                    iVar7 = 1;
                    if (l_U1060 != 4)
                    {
                        l_U1059 = 4;
                    }
                    l_U907 = 1;
                }
            }
            else
            {
                iVar7 = 0;
            }
            if (iVar5 == 1)
            {
                iVar2 = 0;
                iVar4 = 0;
                iVar3 = 1;
            }
            else if (iVar6 == 1)
            {
                iVar2 = 1;
                iVar4 = 0;
                iVar3 = 0;
            }
            else if (iVar7 == 0)
            {
                iVar2 = 0;
                iVar4 = 1;
                iVar3 = 0;
            }
            else
            {
                iVar2 = 1;
                iVar4 = 0;
                iVar3 = 0;
            };;;
            if (iVar3 == 1)
            {
                sub_14770( l_U1024 );
            }
            else
            {
                sub_12861( l_U1024 );
            }
            if (iVar2 == 1)
            {
                sub_14770( l_U1025 );
            }
            else
            {
                sub_12861( l_U1025 );
            }
            if (iVar4 == 1)
            {
                if (l_U914 == 1)
                {
                    sub_14770( l_U1046 );
                    sub_12861( l_U1047 );
                }
                else
                {
                    sub_14770( l_U1047 );
                    sub_12861( l_U1046 );
                }
                if (l_U909 == 0)
                {
                    SET_ROUTE( l_U1047, 1 );
                    l_U909 = 1;
                }
            }
            else
            {
                sub_12861( l_U1046 );
                sub_12861( l_U1047 );
                if (l_U909 == 1)
                {
                    SET_ROUTE( l_U1047, 0 );
                    l_U909 = 0;
                }
            }
            if (iVar2 == 0)
            {
                if (iVar3 == 0)
                {
                    if (l_U907 == 1)
                    {
                        if (l_U1059 != 5)
                        {
                            if (l_U1059 != 6)
                            {
                                l_U1059 = 5;
                            }
                        }
                    }
                }
            }
            if ((NOT (IS_CHAR_IN_CAR( l_U1010, l_U1020 ))) || ((NOT (IS_CHAR_IN_CAR( sub_4185(), l_U1020 ))) || ((l_U1059 == 6) || ((l_U1059 == 5) || (l_U1059 == 7)))))
            {
                l_U908 = 1;
                sub_24065( 1 );
            }
            else
            {
                l_U908 = 0;
                sub_24065( 0 );
            }
            if (l_U1059 != 7)
            {
                if (l_U1059 != 0)
                {
                    if (l_U1059 != 5)
                    {
                        l_U1060 = l_U1059;
                    }
                }
            }
            switch (l_U1059)
            {
                case 0: break;
                case 1:
                sub_16164( "E1S3p5_OUT", ref l_U923, 6, 1 );
                GET_GAME_TIMER( ref l_U537 );
                l_U1059 = 2;
                break;
                case 2:
                if (NOT (sub_17379( l_U923 )))
                {
                    CLEAR_PRINTS();
                    if (l_U1061 == 0)
                    {
                        PRINT_NOW( "BackinCar", 7500, 1 );
                        l_U1061 = 1;
                    }
                    GET_GAME_TIMER( ref l_U537 );
                    l_U1059 = 7;
                }
                break;
                case 3:
                CLEAR_PRINTS();
                PRINT_NOW( "backDir", 7500, 1 );
                GET_GAME_TIMER( ref l_U537 );
                l_U1059 = 7;
                break;
                case 4:
                CLEAR_PRINTS();
                PRINT_NOW( "waitdir", 7500, 1 );
                GET_GAME_TIMER( ref l_U537 );
                l_U1059 = 7;
                break;
                case 5:
                CLEAR_PRINTS();
                if (l_U1062 == 0)
                {
                    PRINT_NOW( "Helipad", 3000, 1 );
                    l_U1062 = 1;
                }
                GET_GAME_TIMER( ref l_U537 );
                if (l_U909 == 0)
                {
                    SET_ROUTE( l_U1046, 1 );
                    l_U909 = 1;
                }
                l_U1059 = 6;
                break;
                case 6:
                GET_GAME_TIMER( ref l_U538 );
                l_U539 = l_U538 - l_U537;
                if (l_U539 > 3000)
                {
                    l_U907 = 0;
                    l_U1059 = 0;
                }
                break;
                case 7:
                GET_GAME_TIMER( ref l_U538 );
                l_U539 = l_U538 - l_U537;
                if (l_U539 > 7500)
                {
                    l_U1059 = 0;
                }
                break;
            }
        }
    }
    return;
}

void sub_23130(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_3667() )))
        {
            SET_GROUP_MEMBER( sub_3667(), uParam0 );
        }
    }
    return;
}

int sub_23413(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_GROUP_MEMBER( uParam0, sub_3667() ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_24065(int iParam0)
{
    if (iParam0 == 1)
    {
        PRINTNL();
        PRINTSTRING( "--------------------------------------" );
        PRINTNL();
        PRINTSTRING( "------ STUBBS3M5 PAUSING ALL SPEECH ---------------------" );
        PRINTNL();
        if (sub_17379( l_U917 ))
        {
            sub_24239( ref l_U917 );
        }
    }
    else if (sub_24680( l_U917 ))
    {
        sub_24725( "E1S3p5_1V1", ref l_U917, 6, 1 );
        sub_24725( "E1S3p5_1V2", ref l_U917, 6, 1 );
        sub_24725( "E1S3p5_2V1", ref l_U917, 6, 1 );
        sub_24725( "E1S3p5_2V2", ref l_U917, 6, 1 );
    }
    return;
}

int sub_24239(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_5464( "\n already paused" );
    }
    else if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8945)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_5464( "\n CONVERSATION PAUSED AT LINE " );
            sub_24395( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_5464( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_5464( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_5464( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_24395(unknown uParam0)
{
    return;
}

void sub_24680(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_24725(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_24746( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

int sub_24746(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_16239( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_25602()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    for ( I = 0; I <= 1; I++ )
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U649[I]._fU32 )))
        {
            if (HAS_MODEL_LOADED( l_U649[I]._fU16 ))
            {
                uVar3 = {sub_25679( 5, 30.00000000, 1 )};
                CREATE_CAR( l_U649[I]._fU16, l_U649[I]._fU0._fU0, l_U649[I]._fU0._fU4, l_U649[I]._fU0._fU8, ref l_U649[I]._fU32, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "~line 426 Stubbs3m5: BadCHASER vehicle not loaded" );
            }
        }
        if (IS_VEH_DRIVEABLE( l_U649[I]._fU32 ))
        {
            if (HAS_MODEL_LOADED( l_U649[I]._fU20 ))
            {
                CREATE_CHAR_INSIDE_CAR( l_U649[I]._fU32, 4, l_U649[I]._fU20, ref l_U649[I]._fU28 );
            }
            else
            {
                SCRIPT_ASSERT( "~line 432 Stubbs3m5: BadCHASER Ped not loaded" );
            }
            if (HAS_MODEL_LOADED( l_U676[I]._fU20 ))
            {
                CREATE_CHAR_AS_PASSENGER( l_U649[I]._fU32, 4, l_U649[I]._fU20, 0, ref l_U676[I]._fU28 );
            }
            else
            {
                SCRIPT_ASSERT( "~line 431 Stubbs3m5: BadPASSENGER ped not loaded" );
            }
        }
    }
    return;
}

void sub_25679(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;

    switch (uParam0)
    {
        case 0:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), (uParam1 * 0.80000000) * -1.00000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), uParam1 * -1.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 1:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 2:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 3:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), uParam1 * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), uParam1, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 4:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), uParam1 * 0.65000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), uParam1 * 0.80000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 5:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), 0.00000000, (uParam1 * -1.00000000) * 0.65000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), 0.00000000, uParam1 * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 6:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), (uParam1 * 0.65000000) * -1.00000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), (uParam1 * 0.80000000) * -1.00000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 7:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), (uParam1 * -1.00000000) * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4185(), uParam1 * -1.00000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
    }
    return Result;
}

void sub_27033()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U649[I]._fU28 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U649[I]._fU28, 26 );
            GIVE_WEAPON_TO_CHAR( l_U649[I]._fU28, l_U649[I]._fU24, 500, 0 );
            ADD_BLIP_FOR_CHAR( l_U649[I]._fU28, ref l_U649[I]._fU36 );
            SET_BLIP_AS_FRIENDLY( l_U649[I]._fU36, 0 );
            sub_12861( l_U649[I]._fU36 );
            if (IS_VEH_DRIVEABLE( l_U649[I]._fU32 ))
            {
                TASK_CAR_MISSION( l_U649[I]._fU28, l_U649[I]._fU32, l_U1020, 3, 60, 2, -2, 20 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U676[I]._fU28 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U676[I]._fU28, 26 );
            GIVE_WEAPON_TO_CHAR( l_U676[I]._fU28, l_U676[I]._fU24, 500, 0 );
            TASK_DRIVE_BY( l_U676[I]._fU28, sub_4185(), 0, 0.00000000, 0.00000000, 0.00000000, 1000.00000000, 4, 1, 20 );
            SET_CHAR_WILL_DO_DRIVEBYS( l_U676[I]._fU28, 1 );
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U676[I]._fU28, 0 );
            ADD_BLIP_FOR_CHAR( l_U676[I]._fU28, ref l_U676[I]._fU36 );
            SET_BLIP_AS_FRIENDLY( l_U676[I]._fU36, 0 );
            sub_12861( l_U676[I]._fU36 );
        }
    }
    SET_RELATIONSHIP( 2, 26, 24 );
    SET_RELATIONSHIP( 5, 26, 0 );
    return;
}

void sub_27592()
{
    if (IS_VEH_DRIVEABLE( l_U1020 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U1010 )))
        {
            switch (l_U1073)
            {
                case 0:
                l_U1073 = 2;
                break;
                case 2:
                l_U1073 = 3;
                break;
                case 3:
                if (sub_27712( 1, 1 ))
                {
                    if (IS_CHAR_IN_CAR( sub_4185(), l_U1020 ))
                    {
                        if (IS_CHAR_IN_CAR( l_U1010, l_U1020 ))
                        {
                            if (LOCATE_CAR_3D( l_U1020, l_U883._fU0, l_U883._fU4, l_U883._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                            {
                                sub_28248( l_U883 );
                                if (IS_VEH_DRIVEABLE( l_U1020 ))
                                {
                                    SET_CAR_ENGINE_ON( l_U1020, 0, 1 );
                                }
                                if (NOT (IS_CHAR_INJURED( sub_4185() )))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U1020 ))
                                    {
                                        TASK_LEAVE_CAR( sub_4185(), l_U1020 );
                                    }
                                }
                                sub_12861( l_U1046 );
                                l_U1073 = 4;
                            }
                        }
                    }
                }
                break;
                case 4:
                l_U1073 = 5;
                SET_CAR_ENGINE_ON( l_U1020, 0, 1 );
                break;
                case 5:
                SET_CAR_ENGINE_ON( l_U1020, 0, 1 );
                break;
            }
        }
    }
    return;
}

int sub_27712(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4185() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4185(), ref uVar6 );
            if (NOT (IS_CAR_DEAD( uVar6 )))
            {
                GET_CAR_MODEL( uVar6, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    GET_CAR_UPRIGHT_VALUE( uVar6, ref fVar5 );
                    if (fVar5 < 0.80000000)
                    {
                        return 0;
                    }
                    else
                    {
                        bParam1 = false;
                    }
                }
            }
        }
    }
    if (sub_27836( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_27836(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4185() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4185(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4185() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4185(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4185()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4185() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4185() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_986() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_986() )))
    {
        return 0;
    }
    return 1;
}

void sub_28248(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    float fVar6;

    if ((IS_CHAR_ON_ANY_BIKE( sub_4185() )) || (IS_CHAR_IN_ANY_CAR( sub_4185() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4185(), ref uVar5 );
        SET_PLAYER_CONTROL( sub_986(), 0 );
        GET_CAR_SPEED( uVar5, ref fVar6 );
        while (fVar6 > 0.20000000)
        {
            WAIT( 0 );
            if ((IS_CHAR_ON_ANY_BIKE( sub_4185() )) || (IS_CHAR_IN_ANY_CAR( sub_4185() )))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4185(), ref uVar5 );
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    GET_CAR_SPEED( uVar5, ref fVar6 );
                }
                else
                {
                    fVar6 = 0.00000000;
                }
                LOCATE_CHAR_ANY_MEANS_3D( sub_4185(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 2.50000000, 2.50000000, 2.50000000, 1 );
            }
            else
            {
                fVar6 = 0.00000000;
            }
        }
        SET_PLAYER_CONTROL( sub_986(), 1 );
    }
    return;
}

void sub_28664()
{
    if (IS_VEH_DRIVEABLE( l_U1020 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U1010 )))
        {
            if (IS_CHAR_IN_CAR( sub_4185(), l_U1020 ))
            {
                if (IS_CHAR_IN_CAR( l_U1010, l_U1020 ))
                {
                    switch (l_U1109)
                    {
                        case 0:
                        if (g_U9556 == 1)
                        {
                            sub_16164( "E1S3p5_1V1", ref l_U917, 6, 1 );
                        }
                        else
                        {
                            sub_16164( "E1S3p5_1V2", ref l_U917, 6, 1 );
                        }
                        l_U1109 = 1;
                        break;
                        case 1:
                        if (NOT (sub_17379( l_U917 )))
                        {
                            if (NOT (sub_24680( l_U917 )))
                            {
                                l_U1109 = 2;
                            }
                        }
                        break;
                        case 2:
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (g_U9556 == 1)
                            {
                                sub_16164( "E1S3p5_2V1", ref l_U917, 6, 1 );
                            }
                            else
                            {
                                sub_16164( "E1S3p5_2V2", ref l_U917, 6, 1 );
                            }
                            l_U1109 = 3;
                        }
                        break;
                        case 3:
                        if (NOT (sub_17379( l_U917 )))
                        {
                            if (NOT (sub_24680( l_U917 )))
                            {
                                l_U1109 = 4;
                            }
                        }
                        break;
                        case 4: break;
                    }
                }
            }
        }
    }
    return;
}

void sub_29076()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1013[I] ))
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U1013[I] )))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1013[I] );
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1016[I] ))
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U1016[I] )))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1016[I] );
            }
        }
    }
    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_CHAR_EXIST( l_U998[I] ))
        {
            if (IS_CHAR_INJURED( l_U998[I] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U998[I] );
            }
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U1006[I] ))
        {
            if (IS_CHAR_INJURED( l_U1006[I] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1006[I] );
            }
        }
    }
    return;
}

int sub_29415()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4185(), l_U883._fU0, l_U883._fU4, l_U883._fU8, 70.00000000, 70.00000000, 70.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_29496()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U1021 )))
    {
        if (HAS_MODEL_LOADED( l_U623._fU16 ))
        {
            CLEAR_AREA( l_U623._fU0._fU0, l_U623._fU0._fU4, l_U623._fU0._fU8, 20.00000000, 0 );
            CREATE_CAR( l_U623._fU16, l_U623._fU0._fU0, l_U623._fU0._fU4, l_U623._fU0._fU8, ref l_U1021, 1 );
            SET_CAR_HEADING( l_U1021, l_U623._fU12 );
            LOCK_CAR_DOORS( l_U1021, 3 );
            ADD_BLIP_FOR_CAR( l_U1021, ref l_U1048 );
            SET_BLIP_AS_FRIENDLY( l_U1048, 1 );
            SET_CAR_COLOUR_COMBINATION( l_U1021, 2 );
            sub_12861( l_U1048 );
        }
        else
        {
            SCRIPT_ASSERT( "The helicopter model isn't loaded" );
        }
    }
    if (NOT (DOES_CHAR_EXIST( l_U1011 )))
    {
        if (IS_VEH_DRIVEABLE( l_U1021 ))
        {
            if (HAS_MODEL_LOADED( l_U898 ))
            {
                CREATE_CHAR_INSIDE_CAR( l_U1021, 4, l_U898, ref l_U1011 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U1011, 24 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U1011, 0 );
            }
            else
            {
                SCRIPT_ASSERT( "Pilot model isn't loaded" );
            }
        }
        else
        {
            SCRIPT_ASSERT( "Director helicopter isn't drivable" );
        }
    }
    return;
}

int sub_29956()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_4185(), l_U883._fU0, l_U883._fU4, l_U883._fU8, 30.00000000, 30.00000000, 30.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_30037()
{
    if (IS_VEH_DRIVEABLE( l_U649[0]._fU32 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U649[0]._fU28 )))
        {
            if (NOT (IS_CAR_ON_SCREEN( l_U649[0]._fU32 )))
            {
                if (sub_30130( l_U649[0]._fU32 ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_4185(), l_U649[0]._fU32, 20.00000000, 20.00000000, 10.00000000, 0 )))
                    {
                        SET_CAR_COORDINATES( l_U649[0]._fU32, -941.39030000, 790.05330000, 3.46170000 );
                        SET_CAR_HEADING( l_U649[0]._fU32, 269.35790000 );
                    }
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U649[1]._fU32 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U649[1]._fU28 )))
        {
            if (NOT (IS_CAR_ON_SCREEN( l_U649[1]._fU32 )))
            {
                if (sub_30130( l_U649[1]._fU32 ))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_4185(), l_U649[1]._fU32, 20.00000000, 20.00000000, 10.00000000, 0 )))
                    {
                        SET_CAR_COORDINATES( l_U649[1]._fU32, -928.16770000, 789.92010000, 3.46170000 );
                        SET_CAR_HEADING( l_U649[1]._fU32, 270.42950000 );
                    }
                }
            }
        }
    }
    return;
}

int sub_30130(unknown uParam0)
{
    int iVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref iVar3 );
        if (iVar3 == nil)
        {
            return 0;
        }
    }
    return 1;
}

void sub_30508()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U649[I]._fU32 ))
        {
            if (IS_VEH_DRIVEABLE( l_U1020 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U649[I]._fU28 )))
                {
                    if (sub_30130( l_U649[I]._fU32 ))
                    {
                        GET_GAME_TIMER( ref l_U531[I] );
                        l_U534[I] = l_U531[I] - l_U528[I];
                        if (NOT (IS_CAR_ON_SCREEN( l_U649[I]._fU32 )))
                        {
                            if (IS_CHAR_IN_CAR( sub_4185(), l_U1020 ))
                            {
                                if (NOT (LOCATE_CHAR_IN_CAR_CAR_3D( sub_4185(), l_U649[I]._fU32, 70.00000000, 70.00000000, 70.00000000, 0 )))
                                {
                                    uVar2 = {sub_25679( 5, 40.00000000, 0 )};
                                    sub_30791( ref l_U649[I]._fU32, uVar2, 15.00000000 );
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref l_U528[I] );
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_30791(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
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
    int iVar18;
    int iVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_4185(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        if (GET_NTH_CLOSEST_CAR_NODE_FAVOUR_DIRECTION( uParam1, uVar7, 1, ref uVar10, ref uVar16 ))
        {
            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar10._fU0, uVar10._fU4, uVar10._fU8, 10.00000000, 10.00000000, 10.00000000 )))
            {
                GET_CAR_COORDINATES( (uParam0^), ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
                GET_GAME_VIEWPORT_ID( ref uVar17 );
                if (((VDIST2( uVar13, uVar10 )) > 9.00000000) AND (NOT (CAM_IS_SPHERE_VISIBLE( uVar17, uVar10._fU0, uVar10._fU4, uVar10._fU8, 8.00000000 ))))
                {
                    CLEAR_AREA( uVar10._fU0, uVar10._fU4, uVar10._fU8, 6.00000000, 0 );
                    SET_CAR_COORDINATES( (uParam0^), uVar10._fU0, uVar10._fU4, uVar10._fU8 );
                    GET_KEY_FOR_CHAR_IN_ROOM( sub_4185(), ref iVar18 );
                    GET_KEY_FOR_CAR_IN_ROOM( (uParam0^), ref iVar19 );
                    if (iVar18 != iVar19)
                    {
                        if (iVar18 == 0)
                        {
                            CLEAR_ROOM_FOR_CAR( (uParam0^) );
                        }
                        else
                        {
                            SET_ROOM_FOR_CAR_BY_KEY( (uParam0^), iVar18 );
                        }
                    }
                    uVar21 = {-SIN( uVar16 ), COS( uVar16 ), 0.00000000};
                    GET_ANGLE_BETWEEN_2D_VECTORS( uVar21._fU0, uVar21._fU4, uVar7._fU0 - uVar10._fU0, uVar7._fU4 - uVar10._fU4, ref fVar20 );
                    if (fVar20 > 90.00000000)
                    {
                        SET_CAR_HEADING( (uParam0^), uVar16 + 180.00000000 );
                    }
                    else
                    {
                        SET_CAR_HEADING( (uParam0^), uVar16 );
                    }
                    SET_CAR_FORWARD_SPEED( (uParam0^), uParam4 );
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_31318()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U649[I]._fU20 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U649[I]._fU16 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_22174( l_U649[I]._fU24 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U676[I]._fU20 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_22174( l_U676[I]._fU24 ) );
    }
    return;
}

void sub_31458()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U623._fU16 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U898 );
    return;
}

void sub_31640(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_32030(unknown uParam0)
{
    switch (l_U1074[uParam0])
    {
        case 0:
        if (IS_VEH_DRIVEABLE( l_U649[uParam0]._fU32 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U649[uParam0]._fU28 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U1049[uParam0] );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U649[uParam0]._fU32, l_U649[uParam0]._fU40._fU0, l_U649[uParam0]._fU40._fU4, l_U649[uParam0]._fU40._fU8, 20, 0, 0, 2, 5, 20 );
                TASK_LEAVE_ANY_CAR( 0 );
                CLOSE_SEQUENCE_TASK( l_U1049[uParam0] );
                TASK_PERFORM_SEQUENCE( l_U649[uParam0]._fU28, l_U1049[uParam0] );
                CLEAR_SEQUENCE_TASK( l_U1049[uParam0] );
            }
        }
        l_U1074[uParam0] = 1;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U649[uParam0]._fU28 )))
        {
            SET_CHAR_RELATIONSHIP( l_U649[uParam0]._fU28, 5, 0 );
            SET_CHAR_RELATIONSHIP( l_U649[uParam0]._fU28, 3, 24 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U649[uParam0]._fU28, 0 );
            SET_CHAR_ACCURACY( l_U649[uParam0]._fU28, 20 );
            SET_SENSE_RANGE( l_U649[uParam0]._fU28, 100.00000000 );
            sub_14770( l_U649[uParam0]._fU36 );
        }
        if (NOT (IS_CHAR_INJURED( l_U676[uParam0]._fU28 )))
        {
            SET_CHAR_RELATIONSHIP( l_U676[uParam0]._fU28, 5, 0 );
            SET_CHAR_RELATIONSHIP( l_U676[uParam0]._fU28, 3, 24 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U676[uParam0]._fU28, 0 );
            SET_CHAR_ACCURACY( l_U676[uParam0]._fU28, 20 );
            SET_SENSE_RANGE( l_U676[uParam0]._fU28, 100.00000000 );
            sub_14770( l_U676[uParam0]._fU36 );
        }
        if (IS_VEH_DRIVEABLE( l_U649[uParam0]._fU32 ))
        {
            LOCK_CAR_DOORS( l_U649[uParam0]._fU32, 1 );
        }
        l_U1074[uParam0] = 2;
        break;
        case 2: break;
    }
    return;
}

int sub_32747()
{
    if (DOES_CHAR_EXIST( l_U649[0]._fU28 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U649[0]._fU28 )))
        {
            return 1;
        }
    }
    if (DOES_CHAR_EXIST( l_U649[1]._fU28 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U649[1]._fU28 )))
        {
            return 1;
        }
    }
    if (DOES_CHAR_EXIST( l_U676[0]._fU28 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U676[0]._fU28 )))
        {
            return 1;
        }
    }
    if (DOES_CHAR_EXIST( l_U676[1]._fU28 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U676[1]._fU28 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_33101()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_CHAR_EXIST( l_U649[I]._fU28 ))
        {
            if (IS_CHAR_INJURED( l_U649[I]._fU28 ))
            {
                if (DOES_BLIP_EXIST( l_U649[I]._fU36 ))
                {
                    REMOVE_BLIP( l_U649[I]._fU36 );
                }
            }
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_CHAR_EXIST( l_U676[I]._fU28 ))
        {
            if (IS_CHAR_INJURED( l_U676[I]._fU28 ))
            {
                if (DOES_BLIP_EXIST( l_U676[I]._fU36 ))
                {
                    REMOVE_BLIP( l_U676[I]._fU36 );
                }
            }
        }
    }
    return;
}

int sub_33502()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_CHAR_EXIST( l_U649[I]._fU28 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U649[I]._fU28 )))
            {
                return 0;
            }
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_CHAR_EXIST( l_U676[I]._fU28 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U676[I]._fU28 )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_33936()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( l_U1010 )))
    {
        if ((l_U1064 < 16) AND (l_U1064 > 3))
        {
            if (NOT IS_SCREEN_FADING())
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    if (sub_34009())
                    {
                        INCREMENT_INT_STAT( 372, 1 );
                        l_U906 = 1;
                        l_U1064 = 16;
                    }
                }
            }
        }
        if (l_U1064 > 0)
        {
            sub_34146();
        }
        switch (l_U1064)
        {
            case 0:
            if (sub_27836( 1, 1 ))
            {
                BEGIN_CAM_COMMANDS( ref l_U1053 );
                if (IS_CHAR_IN_ANY_CAR( sub_4185() ))
                {
                    l_U910 = 1;
                    GET_CAR_CHAR_IS_USING( sub_4185(), ref l_U1023 );
                }
                GET_CHAR_COORDINATES( sub_4185(), ref l_U1065._fU0, ref l_U1065._fU4, ref l_U1065._fU8 );
                GET_CHAR_HEADING( sub_4185(), ref l_U1071 );
                SET_CHAR_PROOFS( sub_4185(), 1, 1, 1, 1, 1 );
                SET_CAR_GENERATORS_ACTIVE_IN_AREA( l_U623._fU0._fU0 - 10, l_U623._fU0._fU4 - 10, l_U623._fU0._fU8 - 10, l_U623._fU0._fU0 + 10, l_U623._fU0._fU4 + 10, l_U623._fU0._fU8 + 10, 0 );
                l_U703[0]._fU0 = {-798.85850000, 769.04270000, 10.07454000};
                l_U703[0]._fU12 = {-9.21159200, -0.00000000, 72.26700000};
                l_U703[0]._fU96 = {-794.95140000, 789.54730000, 12.74815000};
                l_U703[0]._fU108 = {3.15864300, 0.00000000, 3.72175300};
                l_U703[0]._fU120 = 45.00000000;
                l_U703[0]._fU124 = 10000;
                l_U703[1]._fU0 = {-804.30390000, 995.75770000, 35.57016000};
                l_U703[1]._fU12 = {-5.43930800, -0.00000000, -157.69680000};
                l_U703[1]._fU96 = {-799.86890000, 1005.97900000, 35.23057000};
                l_U703[1]._fU108 = {-1.74568900, -0.00000000, -23.45477000};
                l_U703[1]._fU120 = 45.00000000;
                l_U703[1]._fU124 = 10000;
                l_U703[2]._fU0 = {-757.97220000, 1382.51300000, 34.53396000};
                l_U703[2]._fU12 = {5.24346400, 0.00000000, -63.88209000};
                l_U703[2]._fU96 = {-737.54940000, 1422.61800000, 32.16793000};
                l_U703[2]._fU108 = {-1.51743700, -0.00000000, -24.46259000};
                l_U703[2]._fU120 = 45.00000000;
                l_U703[2]._fU124 = 10000;
                l_U703[3]._fU0 = {-558.64450000, 2671.39500000, 4.67336100};
                l_U703[3]._fU12 = {10.77047000, 0.00000000, -47.33441000};
                l_U703[3]._fU96 = {-526.52940000, 2722.21200000, 5.56455800};
                l_U703[3]._fU108 = {-1.27874700, 0.00000000, -21.42146000};
                l_U703[3]._fU120 = 45.00000000;
                l_U703[3]._fU124 = 25000;
                l_U703[4]._fU0 = {-517.19570000, 2742.44900000, 1.67949600};
                l_U703[4]._fU12 = {-2.19547700, 0.00000000, 35.87432000};
                l_U703[4]._fU96 = {-518.05430000, 2744.35300000, 1.59339100};
                l_U703[4]._fU108 = {-2.42466000, 0.00000000, 5.85133300};
                l_U703[4]._fU120 = 45.00000000;
                l_U703[4]._fU124 = 10000;
                REQUEST_CAR_RECORDING( 1729 );
                REGISTER_SCRIPT_WITH_AUDIO( 0 );
                l_U1054 = GET_SOUND_ID();
                if (NOT (IS_CHAR_INJURED( l_U1010 )))
                {
                    SET_CHAR_PROOFS( l_U1010, 1, 1, 1, 1, 1 );
                    SET_CHAR_HEALTH( l_U1010, 500 );
                }
                if (IS_VEH_DRIVEABLE( l_U1021 ))
                {
                    SET_CAR_PROOFS( l_U1021, 1, 1, 1, 1, 1 );
                    SET_ENGINE_HEALTH( l_U1021, 1000 );
                    SET_CAR_HEALTH( l_U1021, 1000 );
                    FIX_CAR( l_U1021 );
                    CLOSE_ALL_CAR_DOORS( l_U1021 );
                }
                if (NOT (IS_CHAR_INJURED( l_U1011 )))
                {
                    SET_CHAR_PROOFS( l_U1011, 1, 1, 1, 1, 1 );
                    SET_CHAR_HEALTH( l_U1011, 500 );
                }
                l_U1064 = 1;
            }
            break;
            case 1:
            DO_SCREEN_FADE_OUT( 3000 );
            l_U1064 = 2;
            break;
            case 2:
            if (IS_SCREEN_FADED_OUT())
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4185() );
                sub_35800();
                sub_36016();
                if (IS_VEH_DRIVEABLE( l_U1021 ))
                {
                    SET_CAR_COORDINATES( l_U1021, l_U623._fU0._fU0, l_U623._fU0._fU4, l_U623._fU0._fU8 );
                    SET_CAR_HEADING( l_U1021, l_U623._fU12 );
                }
                SET_PLAYER_CONTROL( sub_986(), 0 );
                GET_GAME_TIMER( ref l_U525 );
                l_U1064 = 3;
            }
            break;
            case 3:
            GET_GAME_TIMER( ref l_U526 );
            l_U527 = l_U526 - l_U525;
            REQUEST_CAR_RECORDING( 1729 );
            PRINTNL();
            PRINTSTRING( "--------------- Waiting for 1729 to load ------------" );
            if (HAS_CAR_RECORDING_BEEN_LOADED( 1729 ))
            {
                PRINTNL();
                PRINTSTRING( "--------------- Waiting for BOAT_RADIO to load ------------" );
                if ((l_U527 > 3000) || (PRELOAD_STREAM( "BOAT_RADIO" )))
                {
                    DO_SCREEN_FADE_IN( 3000 );
                    sub_36908( l_U703[0], 0 );
                    sub_37424( 1 );
                    if (IS_VEH_DRIVEABLE( l_U1021 ))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U1021, 1729 );
                    }
                    GET_GAME_TIMER( ref l_U525 );
                    l_U1064 = 4;
                }
            }
            break;
            case 4:
            if (IS_SCREEN_FADED_IN())
            {
                sub_16164( "E1S3p5_CHP", ref l_U917, 6, 1 );
                GET_GAME_TIMER( ref l_U525 );
                l_U1064 = 6;
            }
            break;
            case 6:
            if (IS_VEH_DRIVEABLE( l_U1021 ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1021 ))
                {
                    GET_GAME_TIMER( ref l_U526 );
                    l_U527 = l_U526 - l_U525;
                    if (l_U527 > 10000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1012 )))
                        {
                            PLAY_STREAM_FROM_PED( l_U1012 );
                        }
                        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U1021, 30000 );
                        sub_36908( l_U703[3], 0 );
                        GET_GAME_TIMER( ref l_U525 );
                        l_U1064 = 7;
                    }
                }
            }
            break;
            case 7:
            l_U1064 = 8;
            break;
            case 8:
            if (IS_VEH_DRIVEABLE( l_U1021 ))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1021 )))
                {
                    if (IS_CHAR_IN_CAR( l_U1010, l_U1021 ))
                    {
                        ;
                    }
                    if (NOT (IS_CHAR_INJURED( l_U1011 )))
                    {
                        TASK_HELI_MISSION( l_U1011, l_U1021, 0, 0, l_U623._fU0._fU0, l_U623._fU0._fU4, l_U623._fU0._fU8, 19, 20, 20, 0.00000000, 30, 20 );
                        GET_GAME_TIMER( ref l_U525 );
                        l_U1064 = 13;
                    }
                }
            }
            break;
            case 9:
            if (IS_VEH_DRIVEABLE( l_U1021 ))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U1010, l_U1021 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U1010 )))
                    {
                        ;
                    }
                    l_U1064 = 10;
                }
            }
            break;
            case 10:
            if (NOT (sub_20846( l_U1010, 80 )))
            {
                GET_GAME_TIMER( ref l_U525 );
                l_U1064 = 11;
            }
            break;
            case 11:
            GET_CHAR_COORDINATES( l_U1010, ref l_U1068._fU0, ref l_U1068._fU4, ref l_U1068._fU8 );
            if (l_U1068._fU8 <= 1)
            {
                PLAY_SOUND( l_U1054, "ST3P_CEO_SPLASH" );
                l_U1064 = 12;
            }
            break;
            case 12:
            if (IS_VEH_DRIVEABLE( l_U1021 ))
            {
                if (IS_VEH_DRIVEABLE( l_U1022 ))
                {
                    if (IS_CHAR_SWIMMING( l_U1010 ))
                    {
                        SET_SWIM_SPEED( l_U1010, 1.00000000 );
                        TASK_SWIM_TO_COORD( l_U1010, l_U628._fU0._fU0, l_U628._fU0._fU4 - 7, l_U628._fU0._fU8 );
                        ANCHOR_BOAT( l_U1022, 0 );
                        GET_GAME_TIMER( ref l_U525 );
                        l_U1064 = 13;
                    }
                }
            }
            break;
            case 13:
            if (IS_VEH_DRIVEABLE( l_U1021 ))
            {
                if (NOT (IS_CAR_ON_SCREEN( l_U1021 )))
                {
                    FREEZE_CAR_POSITION( l_U1021, 1 );
                    SET_ENGINE_HEALTH( l_U1021, 1000.00000000 );
                }
            }
            if (IS_VEH_DRIVEABLE( l_U1022 ))
            {
                GET_GAME_TIMER( ref l_U526 );
                l_U527 = l_U526 - l_U525;
                if (l_U527 > 0)
                {
                    if (IS_VEH_DRIVEABLE( l_U1022 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1012 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1010 );
                            SET_CHAR_COLLISION( l_U1010, 0 );
                            if (IS_CHAR_IN_CAR( l_U1010, l_U1021 ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( l_U1010, -0.90000000, -4.76000000, 1.36000000 );
                            }
                            ATTACH_PED_TO_CAR( l_U1010, l_U1022, 0, -0.90000000, -4.76000000, 1.36000000, 270.00000000, 0.00000000, 0, 0 );
                            OPEN_SEQUENCE_TASK( ref l_U1072 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "sit_idle_b", l_U916, 8.00000000, 1, 0, 0, 0, -2 );
                            TASK_LOOK_AT_CHAR( 0, l_U1012, 6000, 0 );
                            CLOSE_SEQUENCE_TASK( l_U1072 );
                            TASK_PERFORM_SEQUENCE( l_U1010, l_U1072 );
                            CLEAR_SEQUENCE_TASK( l_U1072 );
                        }
                    }
                    WAIT( 150 );
                    sub_36908( l_U703[4], 0 );
                    l_U1064 = 14;
                }
            }
            break;
            case 14:
            if (IS_VEH_DRIVEABLE( l_U1021 ))
            {
                if (NOT (IS_CAR_ON_SCREEN( l_U1021 )))
                {
                    DELETE_CAR( ref l_U1021 );
                    DELETE_CHAR( ref l_U1011 );
                }
            }
            if (IS_VEH_DRIVEABLE( l_U1022 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U1012 )))
                {
                    TASK_CAR_DRIVE_TO_COORD( l_U1012, l_U1022, l_U628._fU0._fU0, l_U628._fU0._fU4 + 50, l_U628._fU0._fU8, 20.00000000, 0, l_U628._fU16, 2, 10, 10 );
                }
                sub_16164( "E1S3p5_OFF", ref l_U917, 6, 1 );
                GET_GAME_TIMER( ref l_U525 );
                INCREMENT_INT_STAT( 373, 1 );
                l_U1064 = 16;
            }
            break;
            case 16:
            if (IS_VEH_DRIVEABLE( l_U1021 ))
            {
                if (NOT (IS_CAR_ON_SCREEN( l_U1021 )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1021 ))
                    {
                        STOP_PLAYBACK_RECORDED_CAR( l_U1021 );
                    }
                    FREEZE_CAR_POSITION( l_U1021, 1 );
                    SET_ENGINE_HEALTH( l_U1021, 1000.00000000 );
                }
            }
            if (NOT (sub_17379( l_U917 )))
            {
                GET_GAME_TIMER( ref l_U526 );
                l_U527 = l_U526 - l_U525;
                if ((l_U906 == 1) || (l_U527 > 10000))
                {
                    DO_SCREEN_FADE_OUT( 3000 );
                    while (IS_SCREEN_FADING_OUT())
                    {
                        WAIT( 0 );
                    }
                    STOP_STREAM();
                    l_U1064 = 15;
                }
            }
            break;
            case 15:
            if (DOES_OBJECT_EXIST( l_U1063 ))
            {
                if (IS_PED_ATTACHED_TO_OBJECT( sub_4185(), l_U1063 ))
                {
                    DETACH_PED( sub_4185(), 1 );
                    DELETE_OBJECT( ref l_U1063 );
                }
            }
            STOP_SOUND( l_U1054 );
            UNREGISTER_SCRIPT_WITH_AUDIO();
            if (l_U910 == 1)
            {
                if (DOES_VEHICLE_EXIST( l_U1023 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1023 ))
                    {
                        WARP_CHAR_INTO_CAR( sub_4185(), l_U1023 );
                    }
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_4185(), l_U1065._fU0, l_U1065._fU4, l_U1065._fU8 - 1 );
                    SET_CHAR_HEADING( sub_4185(), l_U1071 );
                    SET_CHAR_COLLISION( sub_4185(), 1 );
                }
            }
            else
            {
                SET_CHAR_COORDINATES( sub_4185(), l_U1065._fU0, l_U1065._fU4, l_U1065._fU8 - 1 );
                SET_CHAR_HEADING( sub_4185(), l_U1071 );
                SET_CHAR_COLLISION( sub_4185(), 1 );
            }
            SET_CHAR_VISIBLE( sub_4185(), 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            LOAD_SCENE( l_U1065._fU0, l_U1065._fU4, l_U1065._fU8 );
            CLEAR_AREA( l_U623._fU0._fU0, l_U623._fU0._fU4, l_U623._fU0._fU8, 15.00000000, 1 );
            SET_CHAR_PROOFS( sub_4185(), 0, 0, 0, 0, 0 );
            SET_PLAYER_CONTROL( sub_986(), 1 );
            sub_37424( 0 );
            END_CAM_COMMANDS( ref l_U1053 );
            l_U1064 = 17;
            break;
            case 17: break;
        }
    }
    return;
}

int sub_34009()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_34146()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (DOES_CAM_EXIST( l_U103 ))
    {
        if (NOT (IS_CHAR_DEAD( sub_4185() )))
        {
            GET_CAM_POS( l_U103, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            SET_OBJECT_COORDINATES( l_U1063, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
            if (NOT (IS_PED_ATTACHED_TO_OBJECT( sub_4185(), l_U1063 )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_4185() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_4185(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4185() );
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_4185() )))
                {
                    if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_4185() )))
                    {
                        ATTACH_PED_TO_OBJECT( sub_4185(), l_U1063, 0, 0, 0, 0, 0, 0, 0, 0 );
                    }
                }
            }
        }
    }
    return;
}

void sub_35800()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_DEAD( sub_4185() )))
    {
        REQUEST_MODEL( 2093083147 );
        while (NOT (HAS_MODEL_LOADED( 2093083147 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( sub_4185() )))
        {
            GET_CHAR_COORDINATES( sub_4185(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        if (NOT (DOES_OBJECT_EXIST( l_U1063 )))
        {
            CREATE_OBJECT( 2093083147, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U1063, 1 );
        }
        SET_OBJECT_COLLISION( l_U1063, 0 );
        SET_OBJECT_VISIBLE( l_U1063, 0 );
        SET_CHAR_COLLISION( sub_4185(), 0 );
        SET_CHAR_VISIBLE( sub_4185(), 0 );
    }
    return;
}

void sub_36016()
{
    if (HAS_MODEL_LOADED( l_U628._fU16 ))
    {
        CLEAR_AREA( l_U628._fU0._fU0, l_U628._fU0._fU4, l_U628._fU0._fU8, 20.00000000, 0 );
        CREATE_CAR( l_U628._fU16, l_U628._fU0._fU0, l_U628._fU0._fU4, l_U628._fU0._fU8, ref l_U1022, 1 );
        SET_CAR_HEADING( l_U1022, l_U628._fU12 );
        SET_CAR_ON_GROUND_PROPERLY( l_U1022 );
        LOCK_CAR_DOORS( l_U1022, 1 );
        ANCHOR_BOAT( l_U1022, 1 );
        SET_LOUD_VEHICLE_RADIO( l_U1022, 1 );
        sub_36201();
    }
    else
    {
        SCRIPT_ASSERT( "The boat model isn't loaded" );
    }
    return;
}

void sub_36201()
{
    if (HAS_MODEL_LOADED( l_U899 ))
    {
        if (DOES_VEHICLE_EXIST( l_U1022 ))
        {
            CREATE_CHAR_INSIDE_CAR( l_U1022, 4, l_U899, ref l_U1012 );
            SET_CHAR_COMPONENT_VARIATION( l_U1012, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1012, 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1012, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1012, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1012, 7, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1012, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1012, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U1012, 8, 0, 0 );
        }
        else
        {
            SCRIPT_ASSERT( "Trying to create Juan but boat doesn't exist" );
        }
    }
    else
    {
        SCRIPT_ASSERT( "Juan model isn't loaded" );
    }
    return;
}

void sub_36908(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, int iParam34)
{
    if (DOES_CAM_EXIST( l_U103 ))
    {
        DESTROY_CAM( l_U103 );
    }
    if (DOES_CAM_EXIST( l_U100[0] ))
    {
        DESTROY_CAM( l_U100[0] );
    }
    CREATE_CAM( 14, ref l_U100[0] );
    SET_CAM_POS( l_U100[0], uParam0._fU0._fU0, uParam0._fU0._fU4, uParam0._fU0._fU8 );
    if (iParam34 == nil)
    {
        SET_CAM_ROT( l_U100[0], uParam0._fU12._fU0, uParam0._fU12._fU4, uParam0._fU12._fU8 );
    }
    else if (DOES_CHAR_EXIST( iParam34 ))
    {
        POINT_CAM_AT_PED( l_U100[0], iParam34 );
    }
    SET_CAM_FOV( l_U100[0], uParam0._fU120 );
    if (DOES_CAM_EXIST( l_U100[1] ))
    {
        DESTROY_CAM( l_U100[1] );
    }
    CREATE_CAM( 14, ref l_U100[1] );
    SET_CAM_POS( l_U100[1], uParam0._fU96._fU0, uParam0._fU96._fU4, uParam0._fU96._fU8 );
    if (iParam34 == nil)
    {
        SET_CAM_ROT( l_U100[1], uParam0._fU108._fU0, uParam0._fU108._fU4, uParam0._fU108._fU8 );
    }
    else if (DOES_CHAR_EXIST( iParam34 ))
    {
        POINT_CAM_AT_PED( l_U100[1], iParam34 );
    }
    SET_CAM_FOV( l_U100[1], uParam0._fU120 );
    CREATE_CAM( 3, ref l_U103 );
    SET_CAM_ACTIVE( l_U103, 1 );
    SET_CAM_PROPAGATE( l_U103, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U103, l_U100[0], l_U100[1], uParam0._fU124, 0 );
    return;
}

void sub_37424(boolean bParam0)
{
    SET_WIDESCREEN_BORDERS( bParam0 );
    if (IS_PLAYER_PLAYING( sub_986() ))
    {
        SET_PLAYER_CONTROL( sub_986(), NOT bParam0 );
    }
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_986(), bParam0 );
    ALLOW_EMERGENCY_SERVICES( NOT bParam0 );
    if (NOT (IS_CHAR_DEAD( sub_4185() )))
    {
        CLEAR_CHAR_TASKS( sub_4185() );
    }
    if (bParam0)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4185(), 1 );
    }
    else
    {
        sub_19828();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4185(), 0 );
    }
    return;
}

void sub_39777()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        DELETE_CHAR( ref l_U649[I]._fU28 );
        DELETE_CHAR( ref l_U676[I]._fU28 );
        DELETE_CAR( ref l_U649[I]._fU32 );
    }
    return;
}

void sub_39967(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_40011( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_40011(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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
    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
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
        g_U814 = 1;
        g_U815 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_40565()
{
    sub_40574();
    return;
}

void sub_40574()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 2;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_40601( iVar3, iVar4, iVar5 );
    sub_1823( iVar2 );
    return;
}

void sub_40601(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 2;
    sub_40633( iVar5, uParam0, uParam1, uParam2, "Contact_3" );
    return;
}

void sub_40633(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14838[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_40729( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_40729( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14838[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_40729( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_40729( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_40729( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_40729( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_41306( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12306[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14838[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12306[uParam0]._fU144[I]._fU8++;
            if ((g_U12306[uParam0]._fU144[I]._fU8 >= g_U12306[uParam0]._fU144[I]._fU4) AND (NOT g_U12306[uParam0]._fU144[I]._fU12))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12306[uParam0]._fU144[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_41754( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_986() );
    sub_2222();
    bVar28 = true;
    uVar29 = sub_41306( uParam0, iVar7 );
    uVar30 = sub_2881( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14838[uParam0]._fU0._fU56;
        if ((iVar31 == 6) || (iVar31 == 5))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U20913[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10982 );
                sub_45692( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((g_U12303) AND (NOT bVar28))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_46126();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_46211( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_46290( uParam0 );
                sub_46463( 0 );
                sub_3136( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_46652();
        }
    }
    if (bParam2)
    {
        sub_46126();
        sub_46751();
        sub_46463( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_46126();
        sub_46803();
        sub_46463( 0 );
        sub_3136( uVar30, 0 );
    }
    sub_46854();
    return;
}

void sub_40729(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_41306(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_1206( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U26515[iParam0]._fU0;
    iVar5 = g_U26515[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U20913[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_41754(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_41850( uParam1 );
        break;
        case 1:
        bVar8 = sub_42159( uParam1 );
        break;
        case 2:
        bVar8 = sub_42762( uParam1 );
        break;
        case 3:
        bVar8 = sub_42999( uParam1 );
        break;
        case 4:
        bVar8 = sub_43165( uParam1 );
        break;
        case 5:
        bVar8 = sub_43364( uParam1 );
        break;
        case 6:
        bVar8 = sub_43559( uParam1 );
        break;
        case 7:
        bVar8 = sub_43764( uParam1 );
        break;
        case 8:
        bVar8 = sub_43969( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1591( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_41306( uParam0, uParam1 );
    if (bParam3)
    {
        sub_44255( uVar9, uParam0 );
    }
    return 1;
}

int sub_41850(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_1059( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_1059( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_1059( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_1059( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_1059( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_1059( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_42066( "Contact 1", 1 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42066( "Contact 1", 0 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_42066(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_42159(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_1059( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_1059( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_1059( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_1059( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_1059( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_1059( iVar3, 0, sub_42385(), sub_42521(), 0, 0 );
        break;
        default:
        sub_42066( "Contact 2", 1 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42066( "Contact 2", 0 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42385()
{
    switch (l_U352[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1591( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

int sub_42521()
{
    switch (l_U352[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1591( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_42762(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_1059( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_1059( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_1059( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_1059( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_42066( "Contact 3", 1 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42066( "Contact 3", 0 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42999(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_1059( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_1059( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_42066( "Friend 4", 1 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42066( "Friend 4", 0 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43165(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_1059( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_1059( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_1059( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_42066( "Contact 5", 1 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42066( "Contact 5", 0 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43364(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_1059( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_1059( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_1059( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_42066( "Contact 6", 1 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42066( "Contact 6", 0 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43559(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_1059( iVar3, 0, sub_42385(), sub_42521(), 0, 0 );
        break;
        default:
        sub_42066( "Friend 7", 1 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42066( "Friend 7", 0 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43764(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_1059( iVar3, 0, sub_42385(), sub_42521(), 0, 0 );
        break;
        default:
        sub_42066( "Friend 8", 1 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42066( "Friend 8", 0 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43969(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_1059( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_42066( "Contact 9", 1 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_42066( "Contact 9", 0 );
        sub_1059( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_44255(int iParam0, int iParam1)
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
    if (g_U10993)
    {
        return;
    }
    if (sub_44316( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_45034( iParam1 );
    }
    return;
}

int sub_44316(int iParam0, int iParam1)
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
    iVar4 = g_U14838[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U20913[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U20913[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_44456( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_44456(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_44626( 0 );
    return;
}

void sub_44626(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_44871();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_44871()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_45034(int iParam0)
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
    if (g_U14815[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14815[iParam0]._fU4 == g_U14815[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14815[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14815[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_45265( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_45265( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_45265( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_45265( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_45265( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_45265( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_45265(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_45692(unknown uParam0, unknown uParam1)
{
    sub_45711( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_45711(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_46126()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

int sub_46211(int iParam0, int iParam1)
{
    if (iParam0 == 2)
    {
        if (iParam1 == 3)
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

void sub_46290(unknown uParam0)
{
    sub_46299();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_46299()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12306[J]._fU144[I]._fU36)
            {
                g_U12306[J]._fU28 = 1;
            }
            g_U12306[J]._fU144[I]._fU36 = 0;
        }
    }
    return;
}

void sub_46463(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_46514( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_46514(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_46652()
{
    sub_46661();
    return;
}

void sub_46661()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_46751()
{
    sub_46661();
    return;
}

void sub_46803()
{
    sub_46661();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_46854()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_46876();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_46876()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_47040(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 1;
    g_U15862[uParam0]._fU228._fU0 = 1;
    return sub_47093( uParam0, uParam2 );
}

int sub_47093(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (g_U15862[uParam0]._fU228._fU12[I] != 1)
        {
            return 0;
        }
    }
    return 1;
}

void sub_47346()
{
    if (NOT (IS_CHAR_INJURED( l_U1010 )))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U1010, l_U915, "Handcuffed_on_Bonnet" ))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1010 );
            DAMAGE_CHAR( l_U1010, 500, 1 );
        }
    }
    return;
}

