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
    l_U639 = 0;
    l_U640 = 0;
    l_U641 = 0;
    l_U642 = 0;
    l_U643 = 1;
    l_U644 = 0;
    l_U645 = 0;
    l_U646 = 0;
    l_U647 = 1;
    l_U648 = 0;
    l_U649 = 0;
    l_U650 = 0;
    l_U651 = 0;
    l_U652 = 0;
    l_U653 = 0;
    l_U654 = 0;
    l_U655 = 0;
    l_U656 = 0;
    l_U657 = 1;
    l_U658 = 0;
    l_U659 = 0;
    l_U660 = 0;
    l_U661 = 0;
    l_U662 = 0;
    l_U663 = 0;
    l_U664 = 0;
    l_U665 = 1;
    l_U666 = 1;
    l_U667 = 0;
    l_U668 = 0;
    l_U669 = 0;
    l_U670 = 0;
    l_U671 = 0;
    l_U672 = 0;
    l_U673 = 0;
    l_U928 = 90.00000000;
    l_U929 = 5.00000000;
    l_U930 = 25.00000000;
    l_U931 = 15.00000000;
    l_U932 = 2.00000000;
    l_U933 = 4.00000000;
    l_U934 = 0.50000000;
    l_U935 = 120.00000000;
    l_U936 = 0.00000000;
    l_U937 = 0.00000000;
    l_U939 = 1.00000000;
    l_U940 = 0.00000000;
    l_U941 = 1.00000000;
    l_U942 = 10.00000000;
    l_U943 = 30.00000000;
    l_U945 = 1.00000000;
    l_U947 = 1.00000000;
    l_U948 = 5.00000000;
    l_U949 = 1.00000000;
    l_U950 = 1.00000000;
    l_U955 = 0.30000000;
    l_U956 = 0.50000000;
    l_U957 = 50.00000000;
    l_U1046 = 0;
    l_U1047 = 0;
    l_U1048 = 0;
    l_U1049 = 0;
    l_U1050 = 1;
    l_U1051 = 0;
    l_U1052 = 0;
    l_U1053 = 0;
    l_U1054 = 0;
    l_U1055 = -1;
    l_U1056 = 0;
    l_U1057 = 0;
    l_U1058 = 0;
    l_U1059 = 0;
    l_U1060 = 0;
    l_U1061 = 0;
    l_U1062 = 0;
    l_U1320 = 0;
    l_U1321 = 0;
    l_U1325 = 0;
    l_U1326 = 0;
    l_U1327 = 0;
    l_U1328 = 0;
    l_U1342 = 1.00000000;
    l_U1343 = 40.00000000;
    l_U1347 = 1;
    l_U1349 = 0;
    l_U1368 = 200;
    l_U1369 = 280;
    l_U1387 = 8.00000000;
    l_U1391 = 1;
    l_U1401 = 0;
    l_U1431 = 1000;
    l_U1440 = 5.00000000;
    l_U1483 = 0;
    l_U1484 = 305.00000000;
    l_U1485 = {-1.50000000, -1.00000000, -1.00000000};
    l_U1488 = 1;
    l_U1491 = 0;
    l_U1492 = 0;
    SET_MISSION_FLAG( 1 );
    sub_951( 48 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1199();
        sub_3309();
    }
    else
    {
        sub_6557();
        l_U1391 = 1;
    }
    while (l_U1391)
    {
        switch (l_U1388)
        {
            case 0:
            sub_7848();
            break;
            case 1:
            sub_19193();
            break;
            case 2:
            sub_21055();
            break;
            case 3:
            sub_26023();
            break;
            case 4:
            sub_35533();
            break;
            case 5:
            sub_63868();
            break;
            case 6:
            sub_67026();
            break;
            case -1: break;
        }
        WAIT( 0 );
        if (l_U1389 == 1)
        {
            sub_71494();
        }
        else if (l_U1390 == 1)
        {
            sub_13107();
        }
    }
    sub_3309();
    return;
}

void sub_951(int iParam0)
{
    int iVar3;

    iVar3 = 59;
    if (iParam0 >= iVar3)
    {
        SCRIPT_ASSERT( "Kill_Txtmsg: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        return;
    }
    sub_1064( iParam0 );
    g_U63988._fU12[iParam0]._fU4 = 1;
    return;
}

void sub_1064(unknown uParam0)
{
    g_U63988._fU12[uParam0]._fU0 = 0;
    g_U63988._fU12[uParam0]._fU4 = 0;
    g_U63988._fU12[uParam0]._fU12 = 57;
    g_U63988._fU12[uParam0]._fU16 = 0;
    g_U63988._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_1199()
{
    sub_1208();
    return;
}

void sub_1208()
{
    int iVar2;

    iVar2 = 0;
    sub_1222( iVar2 );
    sub_2398( iVar2 );
    return;
}

void sub_1222(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1266();
        sub_1427();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1535();
            sub_1574();
        }
    }
    sub_1650();
    sub_1751();
    uVar5 = sub_1864( uParam0 );
    sub_2305( uVar5, 0 );
    return;
}

void sub_1266()
{
    sub_1280( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1380();
    }
    return;
}

void sub_1280(int iParam0)
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

void sub_1380()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1427()
{
    sub_1436();
    return;
}

void sub_1436()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1535()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1574()
{
    sub_1583();
    return;
}

void sub_1583()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1650()
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

void sub_1751()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1773();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1773()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1864(unknown uParam0)
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
    sub_2263( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2263(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2305(int iParam0, boolean bParam1)
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

void sub_2398(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2407();
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
        sub_3182();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2407()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2445( 5, g_U569[I] )) == 1))
        {
            if ((sub_2445( 1, g_U569[I] )) != 0)
            {
                sub_2731( I );
            }
        }
    }
    if (NOT sub_2897())
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

int sub_2445(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2731(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2816( g_U569 - 1 );
    return;
}

void sub_2816(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2897()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2445( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3182()
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

void sub_3309()
{
    int I;

    g_U9170 = 0;
    RESET_CAM_INTERP_CUSTOM_SPEED_GRAPH();
    CLEAR_NAMED_CUTSCENE( "IMROM4" );
    ENABLE_CHASE_AUDIO( 0 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    SET_CREATE_RANDOM_COPS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    sub_3378();
    sub_3530( 0 );
    sub_6083( 0 );
    if (DOES_BLIP_EXIST( l_U1441 ))
    {
        REMOVE_BLIP( l_U1441 );
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_BLIP_EXIST( l_U1442[I] ))
        {
            REMOVE_BLIP( l_U1442[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U1446 ))
    {
        REMOVE_BLIP( l_U1446 );
    }
    if (DOES_BLIP_EXIST( l_U1447 ))
    {
        REMOVE_BLIP( l_U1447 );
    }
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_ALL_RANDOM_PEDS_FLEE( l_U629, 0 );
    RELEASE_WEATHER();
    sub_6504();
    return;
}

void sub_3378()
{
    if (l_U1328)
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
    l_U1326 = 0;
    l_U1325 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3530(boolean bParam0)
{
    l_U670 = 0;
    sub_3545();
    l_U669 = 1;
    sub_3717();
    if (IS_PLAYER_PLAYING( sub_3832() ))
    {
        FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_3832(), 1.00000000 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_3832(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3913() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3942() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3971() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4000() );
    if ((NOT bParam0) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        sub_4046();
        sub_4497();
        sub_4679();
    }
    else
    {
        sub_4897();
        sub_5474();
    }
    return;
}

void sub_3545()
{
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    sub_3568();
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    return;
}

void sub_3568()
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

void sub_3717()
{
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U1249._fU0, l_U1249._fU4, l_U1249._fU8, l_U1252._fU0, l_U1252._fU4, l_U1252._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U1243._fU0, l_U1243._fU4, l_U1243._fU8, l_U1246._fU0, l_U1246._fU4, l_U1246._fU8 );
    return;
}

void sub_3832()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_3913()
{
    return -2139064254;
}

int sub_3942()
{
    return 1264341792;
}

int sub_3971()
{
    return 2046537925;
}

int sub_4000()
{
    return -183203150;
}

void sub_4046()
{
    int I;

    for ( I = 0; I < 40; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1255[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1255[I] )))
            {
                SET_CAR_COLLISION( l_U1255[I], 1 );
            }
            if (IS_VEH_DRIVEABLE( l_U1255[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1255[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1255[I] );
                }
            }
            sub_4196( l_U1255[I] );
            sub_4373( l_U1255[I] );
        }
        l_U999[I] = 0;
    }
    for ( I = 0; I < 40; I++ )
    {
        if (NOT (l_U1063[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1063[I] );
        }
    }
    l_U1056 = 0;
    l_U1046 = 0;
    return;
}

void sub_4196(unknown uParam0)
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
                if (NOT (iVar4 == sub_4260()))
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

void sub_4260()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4373(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_4497()
{
    int I;

    for ( I = 0; I < 1; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1305[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1305[I] )))
            {
                SET_CAR_COLLISION( l_U1305[I], 1 );
            }
            sub_4373( l_U1305[I] );
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (NOT (l_U1104[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1104[I] );
        }
    }
    l_U1058 = 0;
    l_U1049 = 0;
    return;
}

void sub_4679()
{
    int I;

    for ( I = 0; I < 1; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1307[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1307[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1307[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1307[I] );
                }
            }
            sub_4196( l_U1307[I] );
            sub_4373( l_U1307[I] );
        }
        l_U1042[I] = 0;
    }
    for ( I = 0; I < 1; I++ )
    {
        if (NOT (l_U1106[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1106[I] );
        }
    }
    return;
}

void sub_4897()
{
    sub_4906();
    sub_5122();
    sub_5266();
    return;
}

void sub_4906()
{
    int I;

    for ( I = 0; I < 40; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1255[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1255[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1255[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1255[I] );
                }
            }
            DELETE_CAR( ref l_U1255[I] );
        }
        l_U999[I] = 0;
    }
    for ( I = 0; I < 40; I++ )
    {
        if (NOT (l_U1063[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1063[I] );
        }
    }
    l_U1056 = 0;
    l_U1046 = 0;
    return;
}

void sub_5122()
{
    int I;

    for ( I = 0; I < 1; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1305[I] ))
        {
            DELETE_CAR( ref l_U1305[I] );
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (NOT (l_U1104[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1104[I] );
        }
    }
    l_U1058 = 0;
    l_U1049 = 0;
    return;
}

void sub_5266()
{
    int I;

    for ( I = 0; I < 1; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1307[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1307[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1307[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1307[I] );
                }
            }
            DELETE_CAR( ref l_U1307[I] );
        }
        l_U1042[I] = 0;
    }
    for ( I = 0; I < 1; I++ )
    {
        if (NOT (l_U1106[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1106[I] );
        }
    }
    return;
}

void sub_5474()
{
    int I;

    for ( I = 0; I < 40; I++ )
    {
        l_U1255[I] = nil;
        l_U1108[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U699[I] = 0.00000000;
        l_U740[I] = 0.00000000;
        l_U781[I] = 0.00000000;
        l_U822[I] = 0.00000000;
        l_U958[I] = 0;
        l_U863[I] = 0.00000000;
        l_U999[I] = 0;
        l_U1063[I] = 0;
    }
    for ( I = 0; I < 8; I++ )
    {
        l_U1296[I] = nil;
    }
    l_U1054 = 0;
    l_U1046 = 0;
    l_U1047 = 0;
    for ( I = 0; I < 1; I++ )
    {
        l_U1305[I] = nil;
        l_U1229[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U920[I] = 0.00000000;
        l_U922[I] = 0.00000000;
        l_U924[I] = 0.00000000;
        l_U926[I] = 0.00000000;
        l_U1044[I] = 0;
        l_U1104[I] = 0;
    }
    for ( I = 0; I < 6; I++ )
    {
        l_U1309[I] = nil;
    }
    l_U1053 = 0;
    l_U1049 = 0;
    for ( I = 0; I < 1; I++ )
    {
        l_U1307[I] = nil;
        l_U1233[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U908[I] = 0.00000000;
        l_U910[I] = 0.00000000;
        l_U912[I] = 0.00000000;
        l_U914[I] = 0.00000000;
        l_U1040[I] = 0;
        l_U916[I] = 0.00000000;
        l_U1042[I] = 0;
        l_U1106[I] = 0;
    }
    l_U1048 = 0;
    l_U1056 = 0;
    l_U1060 = 0;
    l_U1061 = 0;
    l_U1062 = 0;
    return;
}

int sub_6083(unknown uParam0)
{
    if ((NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1235.80000000, -501.10000000, 14.50000000, 3.00000000, 1623487941 ))) || ((NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1239.40000000, -506.20000000, 14.50000000, 3.00000000, 1623487941 ))) || (NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 1237.50000000, -503.70000000, 14.50000000, 3.00000000, 1623487941 )))))
    {
        return 0;
        break;
    }
    FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 1237.50000000, -503.70000000, 14.50000000, 3.00000000, 1623487941, uParam0 );
    FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 1239.40000000, -506.20000000, 14.50000000, 3.00000000, 1623487941, uParam0 );
    FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE( 1235.80000000, -501.10000000, 14.50000000, 3.00000000, 1623487941, uParam0 );
    return 1;
}

void sub_6504()
{
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_6557()
{
    if (IS_PLAYER_PLAYING( l_U629 ))
    {
        RESET_CAM_INTERP_CUSTOM_SPEED_GRAPH();
        FORCE_WEATHER( 1 );
        SET_ALL_RANDOM_PEDS_FLEE( l_U629, 1 );
        REGISTER_SCRIPT_WITH_AUDIO( 1 );
        sub_6629( "ROMAN4", 0 );
        sub_6629( "R4AUD", 6 );
        sub_6794( "R4AUD" );
        sub_6920( "missroman4" );
        while (NOT sub_7010())
        {
            WAIT( 0 );
        }
        l_U628 = sub_4260();
        l_U629 = sub_3832();
        STOP_PED_SPEAKING( l_U628, 0 );
        sub_7161( 0, l_U628, "NIKO", 0 );
        # -sub_C1FFC0-0xc214c8( 2, ref l_U1479 );
        # -sub_C1FFC0-0xc214c8( 0, ref l_U1478 );
        # -sub_C1FFC0-0xc214c8( 3, ref l_U1480 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U1481 );
        SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U1481, 0 );
        OPEN_SEQUENCE_TASK( ref l_U1459 );
        TASK_LEAVE_ANY_CAR( 0 );
        CLOSE_SEQUENCE_TASK( l_U1459 );
        OPEN_SEQUENCE_TASK( ref l_U1464 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U628 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1229.24800000, -509.16780000, 14.04480000, 3, 4000, 0.50000000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U628 );
        TASK_LOOK_AT_CHAR( 0, l_U628, 60000, 0 );
        TASK_PLAY_ANIM( 0, "scared_02", "missRoman4", 1000.00000000, 1, 0, 0, 0, 10000 );
        TASK_COMBAT( 0, l_U628 );
        CLOSE_SEQUENCE_TASK( l_U1464 );
        OPEN_SEQUENCE_TASK( ref l_U1470 );
        TASK_PLAY_ANIM( 0, "scared_02", "missRoman4", 1000.00000000, 1, 0, 0, 0, 10000 );
        TASK_COMBAT( 0, l_U628 );
        CLOSE_SEQUENCE_TASK( l_U1470 );
        OPEN_SEQUENCE_TASK( ref l_U1465 );
        TASK_LEAVE_ANY_CAR( 0 );
        TASK_COMBAT( 0, l_U628 );
        CLOSE_SEQUENCE_TASK( l_U1465 );
        INIT_DEBUG_WIDGETS();
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U1482 );
        SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U1482, 2 );
        l_U630 = 300.00000000;
        l_U631 = 15.50000000;
        l_U632 = 0.55000000;
    }
    return;
}

void sub_6629(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_6665())
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

int sub_6665()
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

void sub_6794(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_6813();
    return;
}

void sub_6813()
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

void sub_6920(unknown uParam0)
{
    PRINTSTRING( "Requesting :" );
    PRINTSTRING( uParam0 );
    PRINTNL();
    REQUEST_ANIMS( uParam0 );
    l_U518[l_U527] = uParam0;
    l_U527++;
    return;
}

int sub_7010()
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

void sub_7161(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_7245( "\n PED NUMBER ", uParam0 );
    sub_7285( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_7245(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7285(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7848()
{
    unknown uVar2;
    unknown uVar3;

    if (l_U1392[l_U1388] == 0)
    {
        ALLOW_EMERGENCY_SERVICES( 0 );
        g_U64904 = 1;
        PRINT_NOW( "ROM4_05", 7500, 1 );
        ADD_BLIP_FOR_COORD( 1235.80000000, -504.53000000, 13.04430000, ref l_U1441 );
        SET_BLIP_AS_FRIENDLY( l_U1441, 1 );
        ADD_BLIP_FOR_COORD( 1195.72100000, -503.60130000, 12.97600000, ref l_U1448 );
        SET_BLIP_AS_FRIENDLY( l_U1441, 1 );
        CHANGE_BLIP_COLOUR( l_U1448, 3 );
        SET_ROUTE( l_U1448, 1 );
        CHANGE_BLIP_DISPLAY( l_U1448, 1 );
        ADD_SCENARIO_BLOCKING_AREA( 1212.49400000, -511.94840000, 10.05070000, 1246.54400000, -504.51560000, 24.38030000 );
        SET_PED_NON_CREATION_AREA( 1212.49400000, -511.94840000, 10.05070000, 1246.54400000, -504.51560000, 24.38030000 );
        sub_8110();
        REQUEST_MODEL( 1731510984 );
        REQUEST_MODEL( -1932515764 );
        REQUEST_MODEL( 1937616578 );
        l_U1392[l_U1388] = 1;
    }
    if ((l_U563[0] == 0) AND (IS_CHAR_IN_ANY_CAR( l_U628 )))
    {
        SETTIMERA( 0 );
        l_U563[0] = 1;
    }
    if ((l_U563[0] == 1) AND ((l_U563[1] == 0) AND (TIMERA() > 5000)))
    {
        PRINT_HELP_FOREVER( "ROM4GPS" );
        SETTIMERA( 0 );
        l_U563[1] = 1;
    }
    if ((l_U563[2] == 0) AND ((TIMERA() > 7500) AND (l_U563[1] == 1)))
    {
        CLEAR_HELP();
        l_U563[2] = 1;
    }
    if ((l_U1400 == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( l_U628, 1235.63900000, -505.04780000, 150.00000000, 150.00000000, 0 )))
    {
        sub_8432( -503930010 );
        sub_8432( 1731510984 );
        sub_8432( -1932515764 );
        sub_8432( 1937616578 );
        while (NOT sub_8514())
        {
            WAIT( 0 );
        }
        CREATE_CAR( 1937616578, 1202.09900000, -505.03970000, 13.65530000, ref l_U1457, 1 );
        CHANGE_CAR_COLOUR( l_U1457, 15, 15 );
        SET_VEHICLE_DIRT_LEVEL( l_U1457, 8.50000000 );
        SET_CAR_HEADING( l_U1457, 206.17940000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U1457 );
        LOCK_CAR_DOORS( l_U1457, 3 );
        SET_CAR_PROOFS( l_U1457, 1, 1, 1, 1, 1 );
        SET_CAN_BURST_CAR_TYRES( l_U1457, 0 );
        SUPPRESS_CAR_MODEL( 1937616578 );
        SUPPRESS_CAR_MODEL( -276900515 );
        CREATE_CAR( -1932515764, 1199.59400000, -508.67110000, 13.00470000, ref l_U1455, 1 );
        sub_8828();
        SET_CAR_HEADING( l_U1455, 144.80780000 );
        CHANGE_CAR_COLOUR( l_U1455, 0, 1 );
        SET_EXTRA_CAR_COLOURS( l_U1455, 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( l_U1455, 15.90000000 );
        SET_CAR_AS_MISSION_CAR( l_U1455 );
        SET_CAR_PROOFS( l_U1455, 0, 1, 0, 0, 0 );
        while (NOT (sub_9025( 0, ref l_U1477, 1235.69100000, -504.72750000, 13.14430000, 91.81000000 )))
        {
            WAIT( 0 );
        }
        SET_ROMANS_MOOD( 2 );
        sub_7161( 1, l_U1477, "ROMAN", 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1477, 1 );
        FREEZE_CHAR_POSITION( l_U1477, 1 );
        TASK_PLAY_ANIM( l_U1477, "boss_idle_injured", "missroman4", 1000.00000000, 1, 0, 0, 0, -1 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U1477, 1 );
        SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U1477, 1 );
        SET_CHAR_DROWNS_IN_WATER( l_U1477, 0 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U1477, 0 );
        SET_CHAR_HEALTH( l_U1477, 10000 );
        l_U1401 = 1;
        CLEAR_AREA_OF_CHARS( 1235.50800000, -506.41630000, 14.04480000, 50.00000000 );
        CREATE_CHAR( 26, 1731510984, 1235.50800000, -506.41630000, 14.04480000, ref l_U1473[0], 1 );
        SET_CHAR_HEADING( l_U1473[0], 16.13210000 );
        sub_11746( l_U1473[0] );
        SET_CHAR_HEALTH( l_U1473[0], 170 );
        SET_CHAR_MAX_HEALTH( l_U1473[0], 170 );
        sub_7161( 2, l_U1473[0], "BLEEDAR", 0 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U1473[0], 1 );
        CREATE_CHAR( 26, -503930010, 1233.75800000, -504.56840000, 14.04440000, ref l_U1473[1], 1 );
        SET_CHAR_HEADING( l_U1473[1], 323.06280000 );
        sub_11746( l_U1473[1] );
        sub_7161( 3, l_U1473[1], "ALBANIAN_M", 0 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U1473[1], 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U1473[1], 1, 0, 2 );
        SET_CHAR_COMPONENT_VARIATION( l_U1473[1], 2, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1473[1], 5, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U1473[1], 0, 1, 1 );
        STOP_PED_SPEAKING( l_U1473[1], 1 );
        OPEN_SEQUENCE_TASK( ref l_U1462 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1477 );
        TASK_PLAY_ANIM( 0, "Beat_Up_B", "missroman4", 1000.00000000, 1, 1, 1, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U1462 );
        OPEN_SEQUENCE_TASK( ref l_U1463 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1477 );
        TASK_PLAY_ANIM( 0, "Beat_Up_A", "missroman4", 1000.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U1463 );
        TASK_PERFORM_SEQUENCE( l_U1473[1], l_U1462 );
        TASK_PERFORM_SEQUENCE( l_U1473[0], l_U1463 );
        SET_RELATIONSHIP( 5, 24, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1473[0], 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1473[1], 1 );
        SET_CHAR_RELATIONSHIP( l_U1473[0], 5, 0 );
        SET_CHAR_RELATIONSHIP( l_U1473[1], 5, 0 );
        INIT_CUTSCENE( "IMROM4" );
        STREAM_CUTSCENE();
        l_U1400 = 1;
    }
    sub_12417();
    if (l_U1400 == 1)
    {
        if (((l_U1400 == 1) AND (((sub_18173( l_U628, l_U1473[0], 1 )) < 40.00000000) AND (IS_CHAR_IN_ANY_HELI( l_U628 )))) || ((((sub_18173( l_U628, l_U1473[0], 1 )) < 40.00000000) AND (IS_CHAR_SHOOTING( l_U628 ))) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1473[1], l_U628, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1473[0], l_U628, 0 )))))
        {
            GET_CHAR_HEADING( l_U1477, ref uVar2 );
            OPEN_SEQUENCE_TASK( ref l_U1461 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1235.04000000, -505.60000000, 14.04000000, 3, 4000, 0.50000000 );
            TASK_ACHIEVE_HEADING( 0, 0.00000000 );
            TASK_PLAY_ANIM( 0, "ground_attack", "missroman4", 8.00000000, 1, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U1461 );
            if (NOT (IS_CHAR_INJURED( l_U1473[1] )))
            {
                CLEAR_CHAR_TASKS( l_U1473[1] );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U1473[1], l_U628 );
            }
            if (NOT (IS_CHAR_INJURED( l_U1473[0] )))
            {
                CLEAR_CHAR_TASKS( l_U1473[0] );
            }
            SET_ROUTE( l_U1448, 0 );
            CHANGE_BLIP_DISPLAY( l_U1441, 0 );
            CHANGE_BLIP_DISPLAY( l_U1448, 0 );
            l_U1346 = 1;
            l_U1388 = 2;
            SETTIMERB( 0 );
            PRINTSTRING( "bang" );
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_2D( l_U628, 1235.04000000, -505.60000000, 23.00000000, 20.00000000, 0 ))
    {
        l_U1331 = 1;
    }
    if (l_U1331 == 1)
    {
        if ((l_U1483 == 0) AND ((l_U1432 == 0) AND ((sub_18173( l_U1477, l_U628, 1 )) > 90.00000000)))
        {
            REMOVE_BLIP( l_U1441 );
            REMOVE_BLIP( l_U1442[2] );
            PRINT_NOW( "R4FAIL_05", 7500, 1 );
            WAIT( 7500 );
            sub_13107();
        }
    }
    GET_GAME_TIMER( ref l_U1427 );
    if (((l_U1427 - l_U1333) > (sub_18873( 4200, 5200 ))) AND ((l_U1400 == 1) AND (l_U1331 == 1)))
    {
        uVar3 = sub_18873( 0, 3 );
        switch (uVar3)
        {
            case 0:
            SAY_AMBIENT_SPEECH( l_U1477, "WHIMPER", 1, 1, 0 );
            break;
            case 1:
            SAY_AMBIENT_SPEECH( l_U1473[1], "GANG_FIGHT_CHEER", 1, 1, 2 );
            break;
            case 2:
            SAY_AMBIENT_SPEECH( l_U1473[0], "FIGHT", 1, 1, 2 );
            break;
        }
        GET_GAME_TIMER( ref l_U1333 );
    }
    sub_6083( 1 );
    if ((l_U1400 == 1) AND (IS_CHAR_IN_ANGLED_AREA_3D( l_U628, 1216.88900000, -505.93550000, 13.02010000, 1226.95700000, -520.09200000, 18.85685000, 18.50000000, 0 )))
    {
        SET_ROUTE( l_U1441, 0 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        if (l_U1346 == 0)
        {
            l_U1388 = 1;
        }
    }
    return;
}

void sub_8110()
{
    int I;

    for ( I = 0; I <= 31; I++ )
    {
        l_U563[I] = 0;
    }
    return;
}

void sub_8432(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U484[l_U517] = uParam0;
    l_U517++;
    return;
}

int sub_8514()
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

void sub_8828()
{
    if (NOT (IS_CAR_DEAD( l_U1455 )))
    {
        OPEN_CAR_DOOR( l_U1455, 1 );
        CONTROL_CAR_DOOR( l_U1455, 0, 1, 0.30000000 );
        LOCK_CAR_DOORS( l_U1455, 1 );
    }
    return;
}

int sub_9025(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (sub_9036( uParam0 ))
    {
        sub_9756( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
        return 1;
    }
    sub_11412( uParam0 );
    return 0;
}

void sub_9036(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_9047( uParam0 ) );
}

int sub_9047(unknown uParam0)
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
    sub_2263( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_9756(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_9047( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_9806( uParam0, (uParam1^) );
    return;
}

void sub_9806(unknown uParam0, unknown uParam1)
{
    sub_9818( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_9818(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_9912( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_10456( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_9912(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_10456(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_9912( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9912( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_9912( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_9912( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_9912( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_9912( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9912( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_9912( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_9912( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9912( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_9912( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9912( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_9912( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_11412(unknown uParam0)
{
    REQUEST_MODEL( sub_9047( uParam0 ) );
    return;
}

void sub_11746(unknown uParam0)
{
    SET_CHAR_DECISION_MAKER( uParam0, l_U1479 );
    SET_COMBAT_DECISION_MAKER( uParam0, l_U1481 );
    SET_CHAR_RELATIONSHIP_GROUP( uParam0, 24 );
    SET_PED_DIES_WHEN_INJURED( uParam0, 1 );
    SET_CHAR_MAX_HEALTH( uParam0, 180 );
    SET_CHAR_HEALTH( uParam0, 180 );
    return;
}

void sub_12417()
{
    unknown uVar2;
    int iVar3;
    int iVar4;

    if ((l_U1489 == 0) AND (l_U1401 == 1))
    {
        if (DOES_CHAR_EXIST( l_U1477 ))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U628 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U628, ref uVar2 );
                if (NOT (IS_CHAR_DEAD( l_U1477 )))
                {
                    if ((l_U1388 < 3) AND (IS_CHAR_TOUCHING_VEHICLE( l_U1477, uVar2 )))
                    {
                        iVar3 = 1;
                    }
                }
            }
            if (l_U1388 < 3)
            {
                if ((sub_12558( l_U1477 )) < 9900)
                {
                    iVar3 = 1;
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U1477 )))
            {
                if ((IS_CHAR_IN_ANY_CAR( l_U1477 )) AND (IS_CHAR_ON_FIRE( l_U1477 )))
                {
                    iVar4 = 1;
                }
            }
            if (((iVar4 == 0) AND (IS_CHAR_ON_FIRE( l_U1477 ))) || ((IS_CHAR_INJURED( l_U1477 )) || (iVar3)))
            {
                if (NOT (IS_CHAR_DEAD( l_U1477 )))
                {
                    FREEZE_CHAR_POSITION( l_U1477, 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U1473[1] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1473[1] );
                    FREEZE_CHAR_POSITION( l_U1473[1], 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U1477 )))
                {
                    TASK_PLAY_ANIM( l_U1477, "roman_killed", "missRoman4", 8.00000000, 0, 0, 0, 1, -1 );
                }
                UNLOCK_RAGDOLL( l_U1477, 1 );
                WAIT( 0 );
                if (NOT (IS_CHAR_INJURED( l_U1477 )))
                {
                    SWITCH_PED_TO_RAGDOLL( l_U1477, 0, 10000, 1, 0, 0, 1 );
                }
                if (NOT (IS_CHAR_DEAD( l_U1477 )))
                {
                    DAMAGE_CHAR( l_U1477, 10000, 1 );
                }
                CLEAR_HELP();
                CLEAR_PRINTS();
                if (DOES_CHAR_EXIST( l_U1477 ))
                {
                    REMOVE_CHAR_ELEGANTLY( ref l_U1477 );
                }
                if (DOES_BLIP_EXIST( l_U1441 ))
                {
                    REMOVE_BLIP( l_U1441 );
                }
                if (DOES_BLIP_EXIST( l_U1446 ))
                {
                    REMOVE_BLIP( l_U1446 );
                }
                if (DOES_VEHICLE_EXIST( l_U1455 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1455 );
                }
                PRINT_NOW( "R4FAIL_02", 7500, 1 );
                sub_13107();
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            if (IS_CHAR_STUCK_UNDER_CAR( l_U1473[2] ))
            {
                l_U1359 = 1;
            }
            else
            {
                l_U1359 = 0;
            }
        }
        else
        {
            l_U1359 = 0;
        }
        if (((l_U1388 > 2) AND (sub_13649( l_U1455 ))) || (((l_U1359 == 0) AND ((l_U1388 > 2) AND (sub_13536( l_U1455 )))) || (NOT (IS_VEH_DRIVEABLE( l_U1455 )))))
        {
            sub_13850();
            CLEAR_HELP();
            CLEAR_PRINTS();
            if (NOT (IS_CHAR_DEAD( l_U1477 )))
            {
                SET_CHAR_PROOFS( l_U1477, 1, 1, 1, 1, 1 );
                SET_CHAR_DROWNS_IN_WATER( l_U1477, 0 );
                if (IS_CAR_IN_WATER( l_U1455 ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U1477 );
                    TASK_LEAVE_CAR_IMMEDIATELY( l_U1477, l_U1455 );
                }
            }
            if (NOT (sub_13649( l_U1455 )))
            {
                if (l_U1388 > 2)
                {
                    sub_14103( "R4_TRASHED", ref l_U1373, 8, 1 );
                }
            }
            while ((NOT (IS_CAR_IN_WATER( l_U1455 ))) AND (sub_15076( l_U1373 )))
            {
                WAIT( 0 );
            }
            if (NOT (sub_13649( l_U1455 )))
            {
                PRINT_NOW( "R4FAIL_03", 7500, 1 );
            }
            else
            {
                PRINT_NOW( "R4FAIL_06", 7500, 1 );
            }
            WAIT( 7500 );
            while (NOT (sub_15349( 1, 1 )))
            {
                WAIT( 0 );
            }
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            if (l_U1388 > 2)
            {
                CLEAR_NAMED_CUTSCENE( "IMROM4" );
                sub_15716();
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                CLEAR_HELP();
                CLEAR_PRINTS();
                sub_13107();
            }
            else
            {
                CLEAR_NAMED_CUTSCENE( "IMROM4" );
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                CLEAR_HELP();
                CLEAR_PRINTS();
                sub_13107();
            }
        }
    }
    return;
}

void sub_12558(unknown uParam0)
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

void sub_13107()
{
    sub_13121( ref l_U1373, 1 );
    SET_PLAYER_MOOD_PISSED_OFF( sub_3832(), 150 );
    SAY_AMBIENT_SPEECH( l_U628, "MISSION_FAIL_RAGE", 0, 0, 0 );
    if (DOES_CHAR_EXIST( l_U1477 ))
    {
        REMOVE_CHAR_ELEGANTLY( ref l_U1477 );
    }
    sub_13323();
    sub_3309();
    return;
}

void sub_13121(int iParam0, unknown uParam1)
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

void sub_13323()
{
    sub_13332();
    return;
}

void sub_13332()
{
    int iVar2;

    iVar2 = 0;
    sub_13346( iVar2 );
    sub_2398( iVar2 );
    return;
}

void sub_13346(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3832(), 150 );
    CLEAR_HELP();
    sub_1222( uParam0 );
    return;
}

int sub_13536(unknown uParam0)
{
    if ((CHECK_STUCK_TIMER( uParam0, 0, 5000 )) || ((CHECK_STUCK_TIMER( uParam0, 1, 40000 )) || ((CHECK_STUCK_TIMER( uParam0, 2, 30000 )) || (CHECK_STUCK_TIMER( uParam0, 3, 60000 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_13649(unknown uParam0)
{
    int iVar3;

    if (g_U9079 == 0)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_4260(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_4260(), uParam0, 100.00000000, 100.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_4260(), uParam0, 50.00000000, 50.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref iVar3 );
                    if ((iVar3 - l_U7) >= 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U7 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U7 );
            }
        }
    }
    return 0;
}

void sub_13850()
{
    REMOVE_BLIP( l_U1441 );
    REMOVE_BLIP( l_U1442[2] );
    REMOVE_BLIP( l_U1442[1] );
    REMOVE_BLIP( l_U1442[0] );
    REMOVE_BLIP( l_U1446 );
    REMOVE_BLIP( l_U1447 );
    return;
}

void sub_14103(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_14126( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_14126(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_14180( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_14180(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_14202( iParam1 )))
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
    sub_14894( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_14202(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_14279( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_14279( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_14279( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_14279(unknown uParam0)
{
    return;
}

void sub_14894(int iParam0, int iParam1)
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

int sub_15076(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_14279( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_14279( "\n speech is not playing" );
    }
    return 0;
}

int sub_15349(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4260() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4260(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4260() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4260(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4260()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4260() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4260() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3832() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3832() )))
    {
        return 0;
    }
    return 1;
}

void sub_15716()
{
    unknown uVar2;
    unknown uVar3;

    if (DOES_BLIP_EXIST( l_U1442[2] ))
    {
        REMOVE_BLIP( l_U1442[2] );
    }
    sub_8110();
    CLEAR_PRINTS();
    REQUEST_MODEL( -713569950 );
    REQUEST_MODEL( 134077503 );
    while ((NOT (HAS_MODEL_LOADED( 134077503 ))) || (NOT (HAS_MODEL_LOADED( -713569950 ))))
    {
        PRINTSTRING( "WAiting on models" );
        WAIT( 0 );
    }
    if (IS_CHAR_IN_ANY_CAR( l_U628 ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( l_U628, 840.68160000, -281.83720000, 14.69920000 );
    }
    else
    {
        SET_CHAR_COORDINATES( l_U628, 840.68160000, -281.83720000, 14.69920000 );
    }
    SET_CHAR_HEADING( l_U628, 61.91550000 );
    LOAD_SCENE( 837.84930000, -282.71140000, 14.51590000 );
    CLEAR_AREA( 837.84930000, -282.71140000, 14.51590000, 30.00000000, 1 );
    SWITCH_ROADS_OFF( 821.25000000, -455.20000000, 11.15000000, 841.89000000, -252.34000000, 16.74000000 );
    CREATE_CAR( -713569950, 837.84930000, -282.71140000, 14.51590000, ref uVar3, 1 );
    SET_CAR_HEADING( uVar3, 359.89610000 );
    SET_CAR_ENGINE_ON( uVar3, 1, 1 );
    if (NOT (IS_CHAR_DEAD( l_U1477 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1477 );
        if (IS_CHAR_IN_ANY_CAR( l_U1477 ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U1477, 840.88820000, -279.45950000, 14.66300000 );
        }
        else
        {
            SET_CHAR_COORDINATES( l_U1477, 840.88820000, -279.45950000, 14.66300000 );
        }
        SET_CHAR_HEADING( l_U1477, 133.25620000 );
    }
    sub_16234();
    SET_CAM_POS( l_U626, 833.73310000, -281.40850000, 15.79864000 );
    SET_CAM_ROT( l_U626, 2.22770700, -0.00000000, -85.35654000 );
    SET_CAM_NEAR_DOF( l_U626, 2.00000000 );
    SET_CAM_FAR_DOF( l_U626, 8.00000000 );
    sub_16467( ref l_U626, 1 );
    sub_16524( 1 );
    l_U1338 = 1;
    SETTIMERA( 0 );
    DO_SCREEN_FADE_IN( 500 );
    if (NOT (IS_CAR_DEAD( uVar3 )))
    {
        CREATE_CHAR_INSIDE_CAR( uVar3, 26, 134077503, ref uVar2 );
        TASK_CAR_DRIVE_WANDER( uVar2, uVar3, 10.00000000, 3 );
    }
    while (l_U1338)
    {
        WAIT( 0 );
        if ((l_U563[0] == 0) AND (TIMERA() > 2000))
        {
            UNPOINT_CAM( l_U621 );
            SET_CAM_POS( l_U621, 833.73310000, -281.40850000, 15.79864000 );
            SET_CAM_ROT( l_U621, 2.22770700, -0.00000000, -85.35654000 );
            SET_CAM_FOV( l_U621, 55.00000000 );
            SET_CAM_NEAR_DOF( l_U621, 2.00000000 );
            SET_CAM_FAR_DOF( l_U621, 33.00000000 );
            UNPOINT_CAM( l_U623 );
            SET_CAM_POS( l_U623, 833.73310000, -281.40850000, 15.79864000 );
            SET_CAM_ROT( l_U623, 2.22770700, -0.00000000, -85.35654000 );
            SET_CAM_FOV( l_U623, 50.00000000 );
            SET_CAM_NEAR_DOF( l_U623, 2.00000000 );
            SET_CAM_FAR_DOF( l_U623, 33.00000000 );
            SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 5000, 0 );
            sub_16467( ref l_U626, 0 );
            sub_16467( ref l_U624, 1 );
            SETTIMERA( 0 );
            l_U563[0] = 1;
        }
        if ((l_U563[0] == 1) AND ((l_U563[1] == 0) AND (TIMERA() > 3000)))
        {
            sub_14103( "R4_DROPTR", ref l_U1373, 8, 1 );
            SETTIMERA( 0 );
            l_U563[1] = 1;
        }
        if ((l_U563[1] == 1) AND ((l_U563[2] == 0) AND (TIMERA() > 6000)))
        {
            sub_16467( ref l_U626, 1 );
            sub_16467( ref l_U624, 0 );
            SET_CAM_POS( l_U621, 842.27570000, -290.29130000, 15.26637000 );
            SET_CAM_ROT( l_U621, 15.30651000, -0.00000000, 39.80610000 );
            SET_CAM_NEAR_DOF( l_U621, 2.00000000 );
            SET_CAM_FAR_DOF( l_U621, 8.00000000 );
            SET_CAM_FOV( l_U621, 47.00000000 );
            SET_CAM_POS( l_U623, 842.27570000, -290.29130000, 15.26637000 );
            SET_CAM_ROT( l_U623, 15.30651000, -0.00000000, 39.80610000 );
            SET_CAM_FOV( l_U623, 52.00000000 );
            SET_CAM_NEAR_DOF( l_U623, 2.00000000 );
            SET_CAM_FAR_DOF( l_U623, 8.00000000 );
            SET_CAM_NEAR_DOF( l_U623, 1.00000000 );
            SET_CAM_FAR_DOF( l_U623, 15.00000000 );
            DELETE_CAR( ref uVar3 );
            DELETE_CHAR( ref uVar2 );
            if (NOT (IS_CHAR_DEAD( l_U1477 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1477, 820.03660000, -265.76590000, 14.30270000, 3, 15000, 0.50000000 );
            }
            SETTIMERA( 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 7000, 0 );
            sub_16467( ref l_U626, 0 );
            sub_16467( ref l_U624, 1 );
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            l_U563[2] = 1;
        }
        if (((TIMERA() > 1000) AND ((IS_SCREEN_FADED_IN()) AND (sub_17607()))) || ((NOT (sub_15076( l_U1373 ))) AND ((l_U563[2] == 1) AND (TIMERA() > 7000))))
        {
            l_U1338 = 0;
        }
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    sub_13121( ref l_U1373, 0 );
    if (DOES_CHAR_EXIST( l_U1477 ))
    {
        DELETE_CHAR( ref l_U1477 );
    }
    SWITCH_ROADS_BACK_TO_ORIGINAL( 821.25000000, -455.20000000, 11.15000000, 841.89000000, -252.34000000, 16.74000000 );
    if (DOES_VEHICLE_EXIST( uVar3 ))
    {
        DELETE_CAR( ref uVar3 );
    }
    if (DOES_CHAR_EXIST( uVar2 ))
    {
        DELETE_CHAR( ref uVar2 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -713569950 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 134077503 );
    sub_16467( ref l_U626, 0 );
    sub_16467( ref l_U624, 0 );
    sub_16524( 0 );
    return;
}

void sub_16234()
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

void sub_16467(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

void sub_16524(boolean bParam0)
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

int sub_17607()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_18173(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_18873(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_19193()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (l_U1392[l_U1388] == 0)
    {
        REMOVE_BLIP( l_U1441 );
        REMOVE_BLIP( l_U1448 );
        SET_ROUTE( l_U1448, 0 );
        DO_SCREEN_FADE_OUT( 500 );
        sub_19268();
        if (NOT (IS_CHAR_DEAD( l_U1473[0] )))
        {
            SET_CHAR_PROOFS( l_U1473[0], 1, 1, 1, 1, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1473[1] )))
        {
            SET_CHAR_PROOFS( l_U1473[1], 1, 1, 1, 1, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1477 )))
        {
            SET_CHAR_PROOFS( l_U1477, 1, 1, 1, 1, 1 );
        }
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        LOAD_ADDITIONAL_TEXT( "R4AUD", 6 );
        SET_PLAYER_CONTROL( l_U629, 0 );
        CLEAR_AREA( 1233.18700000, -508.09660000, 14.85436000, 35.00000000, 1 );
        CLEAR_AREA_OF_COPS( 1233.18700000, -508.09660000, 14.85436000, 235.00000000 );
        if ((IS_CHAR_ON_ANY_BIKE( l_U628 )) || (IS_CHAR_IN_ANY_CAR( l_U628 )))
        {
            GET_CAR_CHAR_IS_USING( l_U628, ref uVar6 );
            if (DOES_VEHICLE_EXIST( uVar6 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U628, 1229.13000000, -508.97000000, 13.04480000 );
                SET_CAR_COORDINATES( uVar6, 1220.42200000, -518.06040000, 14.05070000 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U628, 1229.13000000, -508.97000000, 13.04480000 );
            }
        }
        else
        {
            SET_CHAR_COORDINATES( l_U628, 1229.13000000, -508.97000000, 13.04480000 );
        }
        WAIT( 0 );
        START_CUTSCENE();
        ENABLE_SCENE_STREAMING( 0 );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "IMROM4" );
        ENABLE_SCENE_STREAMING( 1 );
        SWITCH_RANDOM_TRAINS( 0 );
        sub_16234();
        sub_19945();
        CLEAR_CHAR_TASKS( l_U628 );
        SET_CHAR_HEADING( l_U628, 266.79960000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        if ((NOT (IS_CHAR_INJURED( l_U1473[1] ))) AND (NOT (IS_CHAR_INJURED( l_U1473[0] ))))
        {
            SET_CHAR_COORDINATES( l_U1473[0], 1233.07000000, -508.66000000, 13.05000000 );
            SET_CHAR_HEADING( l_U1473[0], 103.80710000 );
            SET_CHAR_RELATIONSHIP( l_U1473[0], 5, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1473[0], 1 );
            sub_20193( l_U1473[0], l_U628 );
            TASK_PERFORM_SEQUENCE( l_U1473[0], l_U1470 );
            if (NOT (IS_CHAR_DEAD( l_U1477 )))
            {
                CLEAR_SEQUENCE_TASK( l_U1461 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U1477, 0.43000000, 1.06500000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                GET_CHAR_HEADING( l_U1477, ref uVar5 );
                FREEZE_CHAR_POSITION( l_U1473[1], 1 );
                SET_CHAR_COORDINATES( l_U1473[1], uVar2._fU0, uVar2._fU4, uVar2._fU8 - 1.00000000 );
                SET_CHAR_HEADING( l_U1473[1], uVar5 - 180.00000000 );
                OPEN_SEQUENCE_TASK( ref l_U1461 );
                TASK_PLAY_ANIM( 0, "ground_attack", "missroman4", 8.00000000, 1, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U1461 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U1473[1], 0 );
            }
            TASK_PERFORM_SEQUENCE( l_U1473[1], l_U1461 );
        }
        if (NOT (IS_CHAR_INJURED( l_U1477 )))
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U1477, "damage_onsidel", "missroman4", 8.00000000, 1, 0, 0, 0, -1 );
        }
        sub_8110();
        SET_PLAYER_CONTROL( l_U629, 1 );
        REQUEST_MODEL( 800869680 );
        REQUEST_MODEL( 1159759556 );
        while ((NOT (HAS_MODEL_LOADED( 800869680 ))) || (NOT (HAS_MODEL_LOADED( 1159759556 ))))
        {
            WAIT( 0 );
        }
        CREATE_MISSION_TRAIN( 0, 1282.05900000, -429.38120000, 26.69070000, 0, ref l_U1357 );
        SET_TRAIN_SPEED( l_U1357, 14.00000000 );
        SET_TRAIN_CRUISE_SPEED( l_U1357, 15.00000000 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1473[0] )))
        {
            SET_CHAR_PROOFS( l_U1473[0], 0, 0, 0, 0, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1473[1] )))
        {
            SET_CHAR_PROOFS( l_U1473[1], 0, 0, 0, 0, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1477 )))
        {
            SET_CHAR_PROOFS( l_U1477, 0, 0, 0, 0, 0 );
        }
        CLEAR_WANTED_LEVEL( l_U629 );
        DO_SCREEN_FADE_IN( 1000 );
        PRINT( "ROM4_06", 7500, 1 );
        l_U1388++;
    }
    return;
}

void sub_19268()
{
    float fVar2;
    unknown uVar3;

    if ((IS_CHAR_ON_ANY_BIKE( sub_4260() )) || (IS_CHAR_IN_ANY_CAR( sub_4260() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4260(), ref uVar3 );
        if (IS_VEH_DRIVEABLE( uVar3 ))
        {
            SET_PLAYER_CONTROL( sub_3832(), 0 );
            GET_CAR_SPEED( uVar3, ref fVar2 );
            while (fVar2 > 0.20000000)
            {
                WAIT( 0 );
                if (NOT (IS_CAR_DEAD( uVar3 )))
                {
                    GET_CAR_SPEED( uVar3, ref fVar2 );
                }
            }
            SET_PLAYER_CONTROL( sub_3832(), 1 );
        }
    }
    return;
}

void sub_19945()
{
    if (NOT (IS_CAR_DEAD( l_U1455 )))
    {
        FIX_CAR( l_U1455 );
        CLOSE_ALL_CAR_DOORS( l_U1455 );
        LOCK_CAR_DOORS( l_U1455, 2 );
    }
    return;
}

void sub_20193(unknown uParam0, unknown uParam1)
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

void sub_21055()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;

    if (l_U1392[l_U1388] == 0)
    {
        sub_8110();
        GET_PLAYER_GROUP( l_U629, ref l_U627 );
        if (NOT (IS_CHAR_DEAD( l_U1473[0] )))
        {
            ADD_BLIP_FOR_CHAR( l_U1473[0], ref l_U1442[0] );
            CHANGE_BLIP_COLOUR( l_U1442[0], 1 );
            SET_CHAR_PROOFS( l_U1473[0], 0, 0, 0, 0, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1473[1] )))
        {
            SET_CHAR_PROOFS( l_U1473[1], 0, 0, 0, 0, 0 );
        }
        PRINT_NOW( "ROM4_06", 7500, 1 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SET_CREATE_RANDOM_COPS( 0 );
        SWITCH_RANDOM_TRAINS( 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1159759556 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 800869680 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U1357 );
        GET_GAME_TIMER( ref l_U1428 );
        SETTIMERB( 0 );
        l_U1392[l_U1388] = 1;
    }
    if (sub_21349( l_U1477, ref l_U1368 ))
    {
        PRINTSTRING( "just took a beating" );
        PRINTNL();
        sub_13121( ref l_U1373, 0 );
        SAY_AMBIENT_SPEECH( l_U1477, "SHOCKED", 1, 0, 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U1473[0] )))
    {
        if ((l_U1406 == 0) AND ((l_U1405 == 0) AND (IS_CHAR_PLAYING_ANIM( l_U1473[0], "missRoman4", "scared_02" ))))
        {
            sub_20193( l_U1473[0], l_U628 );
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_2D( l_U628, 1235.04000000, -505.60000000, 23.00000000, 20.00000000, 0 ))
    {
        l_U1331 = 1;
    }
    if ((l_U1483 == 0) AND ((l_U1331 == 1) AND ((sub_18173( l_U1477, l_U628, 1 )) > 60.00000000)))
    {
        REMOVE_BLIP( l_U1441 );
        REMOVE_BLIP( l_U1442[2] );
        PRINT_NOW( "R4FAIL_05", 7500, 1 );
        sub_13107();
    }
    if ((l_U1483 == 0) AND ((sub_18173( l_U1477, l_U628, 1 )) > 150.00000000))
    {
        REMOVE_BLIP( l_U1441 );
        REMOVE_BLIP( l_U1442[2] );
        PRINT_NOW( "R4FAIL_05", 7500, 1 );
        sub_13107();
    }
    if (NOT (IS_CHAR_INJURED( l_U1473[0] )))
    {
        GET_SCRIPT_TASK_STATUS( l_U1473[0], 29, ref iVar2 );
        if (l_U1405 == 0)
        {
            if (((sub_18173( l_U628, l_U1473[0], 1 )) < 2.00000000) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1473[0], l_U628, 0 )) || (iVar2 == 7)))
            {
                CLEAR_CHAR_TASKS( l_U1473[0] );
                TASK_COMBAT( l_U1473[0], l_U628 );
                SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U1473[0], 0 );
                SET_CHAR_RELATIONSHIP( l_U1473[0], 5, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1473[0], 0 );
                l_U1405 = 1;
            }
        }
    }
    if ((IS_CHAR_ON_FOOT( l_U628 )) AND ((l_U563[1] == 0) AND (l_U1406 == 0)))
    {
        CLEAR_HELP();
        PRINT_HELP_FOREVER( "ROM4_34" );
        SETTIMERA( 0 );
        l_U1406 = 1;
    }
    if (((IS_CHAR_ON_FOOT( l_U628 )) AND ((l_U563[1] == 0) AND (l_U1417[0] == 1))) || ((IS_CONTROL_PRESSED( 0, 87 )) || (IS_CONTROL_PRESSED( 0, 6 ))))
    {
        l_U1417[0] = 1;
        if ((TIMERA() > 7500) AND ((l_U1406 == 1) AND (l_U1407[0] == 0)))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "ROM4_36" );
            SETTIMERA( 0 );
            l_U1407[0] = 1;
        }
    }
    if ((TIMERA() > 7500) AND ((l_U1406 == 1) AND ((l_U1353 == 0) AND ((l_U1407[0] == 1) AND (IS_CHAR_ON_FOOT( l_U628 ))))))
    {
        CLEAR_HELP();
        if (IS_HUD_RETICULE_COMPLEX())
        {
            PRINT_HELP_FOREVER( "ROM4_39" );
            SETTIMERA( 0 );
        }
        l_U1353 = 1;
    }
    if ((l_U1353) AND ((IS_CHAR_IN_MELEE_COMBAT( l_U628 )) AND ((l_U563[1] == 0) AND ((TIMERA() > 7500) AND ((l_U1407[0] == 1) AND (l_U1407[2] == 0))))))
    {
        if (IS_HUD_RETICULE_COMPLEX())
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "ROM439B" );
            SETTIMERA( 0 );
        }
        l_U1407[2] = 1;
    }
    if (((IS_CHAR_IN_MELEE_COMBAT( l_U628 )) AND ((l_U563[1] == 0) AND (l_U1417[3] == 1))) || ((IS_CONTROL_PRESSED( 2, 62 )) || ((IS_CONTROL_PRESSED( 2, 60 )) || (IS_CONTROL_PRESSED( 2, 59 )))))
    {
        l_U1417[3] = 1;
        if ((IS_CHAR_IN_MELEE_COMBAT( l_U628 )) AND ((TIMERA() > 7500) AND ((l_U1407[2] == 1) AND (l_U1407[4] == 0))))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "ROM4_38" );
            SETTIMERA( 0 );
            l_U1407[4] = 1;
        }
    }
    if ((NOT (IS_CHAR_ON_FOOT( l_U628 ))) || ((l_U1407[4] == 1) AND (TIMERA() > 7500)))
    {
        CLEAR_HELP();
    }
    if ((IS_CHAR_INJURED( l_U1473[1] )) || (IS_CHAR_DEAD( l_U1473[1] )))
    {
        if (NOT (IS_CHAR_DEAD( l_U1473[1] )))
        {
            SET_CHAR_HEALTH( l_U1473[1], 15 );
        }
        if (l_U1402[1] == 0)
        {
            CHANGE_BLIP_DISPLAY( l_U1442[1], 0 );
            l_U1402[1] = 1;
        }
        if (l_U1407[6] == 0)
        {
            CLEAR_HELP();
            SETTIMERA( 0 );
            l_U1407[6] = 1;
        }
    }
    if (IS_CHAR_INJURED( l_U1473[0] ))
    {
        if (NOT (IS_CHAR_DEAD( l_U1473[0] )))
        {
            SET_CHAR_HEALTH( l_U1473[0], 15 );
        }
        if (l_U1402[0] == 0)
        {
            CHANGE_BLIP_DISPLAY( l_U1442[0], 0 );
            l_U1402[0] = 1;
            if (l_U1407[6] == 0)
            {
                CLEAR_HELP();
                SETTIMERA( 0 );
                l_U1407[6] = 1;
            }
        }
    }
    if (l_U563[0] == 0)
    {
        if ((IS_CHAR_INJURED( l_U1473[0] )) || ((IS_CHAR_DEAD( l_U1473[0] )) || (((IS_CHAR_IN_ANY_CAR( l_U628 )) AND ((sub_18173( l_U628, l_U1473[1], 1 )) < 6.00000000)) || (((sub_18173( l_U628, l_U1473[1], 1 )) < 2.00000000) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1473[1], l_U628, 0 ))))))
        {
            if (NOT (IS_CHAR_INJURED( l_U1477 )))
            {
                TASK_PLAY_ANIM( l_U1477, "boss_idle_injured", "missRoman4", 8.00000000, 1, 0, 0, 0, -1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U1473[1] )))
            {
                ADD_BLIP_FOR_CHAR( l_U1473[1], ref l_U1442[1] );
                CHANGE_BLIP_COLOUR( l_U1442[1], 1 );
                CLEAR_CHAR_TASKS( l_U1473[1] );
                FREEZE_CHAR_POSITION( l_U1473[1], 0 );
                OPEN_SEQUENCE_TASK( ref l_U1466 );
                TASK_GO_TO_CHAR( 0, l_U628, 20000, 8.00000000 );
                TASK_PLAY_ANIM( 0, "fight_idle", "missRoman4", 1000.00000000, 1, 0, 0, 0, 5000 );
                TASK_COMBAT( 0, l_U628 );
                CLOSE_SEQUENCE_TASK( l_U1466 );
                TASK_PERFORM_SEQUENCE( l_U1473[1], l_U1466 );
                SET_CHAR_RELATIONSHIP( l_U1473[1], 5, 0 );
                SET_COMBAT_DECISION_MAKER( l_U1473[1], l_U1481 );
                SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U1473[1], 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1473[1], 0 );
                PRINTSTRING( "TASK_COMBAT given to attack player" );
                PRINTNL();
                PRINT_NOW( "ROM4_74", 7500, 1 );
                l_U563[0] = 1;
            }
            else if (NOT (IS_CHAR_DEAD( l_U1473[1] )))
            {
                CLEAR_CHAR_TASKS( l_U1473[1] );
            }
        }
    }
    GET_GAME_TIMER( ref l_U1427 );
    if ((TIMERB() > 7500) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (((l_U1427 - l_U1428) > 10000) AND ((l_U563[1] == 0) AND (l_U563[0] == 0)))))
    {
        sub_14103( "R4_FIGHT", ref l_U1373, 8, 1 );
        PRINTSTRING( "Random Roman Taunt!" );
        PRINTNL();
        GET_GAME_TIMER( ref l_U1428 );
    }
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((TIMERB() > 7500) AND (((l_U1427 - l_U1428) > 5000) AND ((l_U563[1] == 0) AND (l_U563[0] == 0)))))
    {
        SAY_AMBIENT_SPEECH( l_U1477, "WHIMPER", 1, 1, 0 );
        PRINTSTRING( "Random Roman Whimper!" );
        PRINTNL();
        GET_GAME_TIMER( ref l_U1428 );
    }
    if (((l_U1427 - l_U1428) < 500) AND ((sub_21349( l_U1473[0], ref l_U1330 )) AND (l_U563[0] == 0)))
    {
        sub_13121( ref l_U1373, 0 );
    }
    GET_GAME_TIMER( ref l_U1427 );
    if ((TIMERB() > 7500) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (((l_U1427 - l_U1428) > 7000) AND ((l_U563[1] == 0) AND (l_U563[0] == 1)))))
    {
        if ((sub_18873( 0, 10 )) > 5)
        {
            sub_14103( "R4_TAUNTS", ref l_U1373, 8, 1 );
        }
        else
        {
            sub_7161( 3, l_U1473[1], "ALBANIAN_M", 0 );
            sub_14103( "R4_FALB", ref l_U1373, 8, 1 );
        }
        PRINTSTRING( "Random Roman Taunt!" );
        PRINTNL();
        GET_GAME_TIMER( ref l_U1428 );
    }
    if ((IS_CHAR_IN_MELEE_COMBAT( l_U628 )) AND ((l_U563[1] == 0) AND ((TIMERA() > 5000) AND ((l_U1407[7] == 0) AND (l_U563[0] == 1)))))
    {
        CLEAR_HELP();
        PRINT_HELP_FOREVER( "ROM4_70" );
        l_U1407[7] = 1;
        SETTIMERA( 0 );
    }
    if ((l_U563[1] == 0) AND ((l_U1402[1]) AND (l_U1402[0])))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -503930010 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1731510984 );
        REQUEST_MODEL( 1468450703 );
        REQUEST_ANIMS( "missroman4" );
        REQUEST_ANIMS( "move_m@roman_inj" );
        REQUEST_ANIMS( "melee_knife_extra" );
        while ((NOT (HAS_MODEL_LOADED( 1468450703 ))) || ((NOT (HAVE_ANIMS_LOADED( "move_m@roman_inj" ))) || (NOT (HAVE_ANIMS_LOADED( "missroman4" )))))
        {
            WAIT( 0 );
        }
        WAIT( 2000 );
        CLEAR_HELP();
        PRINT( "ROM4_17", 4000, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U1441 )))
        {
            ADD_BLIP_FOR_CHAR( l_U1477, ref l_U1441 );
            SET_BLIP_AS_FRIENDLY( l_U1441, 1 );
        }
        CHANGE_BLIP_DISPLAY( l_U1441, 4 );
        if (NOT (IS_CHAR_INJURED( l_U1477 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1477, 1 );
        }
        l_U563[1] = 1;
    }
    sub_12417();
    if ((HAS_MODEL_LOADED( 1468450703 )) AND ((NOT (IS_CHAR_IN_ANY_CAR( l_U628 ))) AND ((l_U563[1] == 1) AND ((sub_18173( l_U628, l_U1477, 1 )) < 5.00000000))))
    {
        CLEAR_WANTED_LEVEL( l_U629 );
        CLEAR_PRINTS();
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U1455 )))
        {
            SET_CAR_COORDINATES( l_U1455, 1199.59400000, -508.67110000, 13.00470000 );
        }
        SET_PLAYER_CONTROL( l_U629, 0 );
        CLEAR_AREA_OF_CARS( 1234.58100000, -504.74920000, 13.24480000, 10.00000000 );
        if (NOT (IS_CHAR_INJURED( l_U1477 )))
        {
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U628, 1 );
            CHANGE_BLIP_DISPLAY( l_U1441, 0 );
            CLEAR_AREA( l_U1452._fU0, l_U1452._fU4, l_U1452._fU8, 10.00000000, 1 );
            sub_16234();
            CLEAR_HELP();
            CLEAR_AREA( 1233.18600000, -506.07640000, 14.04480000, 7.00000000, 1 );
            SET_CHAR_HEALTH( l_U1477, 200 );
            if (IS_PED_RAGDOLL( l_U628 ))
            {
                SWITCH_PED_TO_ANIMATED( l_U628, 1 );
            }
            SET_CHAR_HEADING( l_U628, l_U1484 );
            SET_CHAR_COORDINATES( l_U628, 1234.58100000, -504.74920000, 13.24480000 );
            FREEZE_CHAR_POSITION( l_U628, 1 );
            SET_CHAR_COLLISION( l_U628, 0 );
            SET_CHAR_COLLISION( l_U1477, 0 );
            GET_CHAR_COORDINATES( l_U1477, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            GET_CHAR_HEADING( l_U1477, ref uVar6 );
            SET_CHAR_COORDINATES_NO_OFFSET( l_U628, uVar3._fU0, uVar3._fU4 - 1.30700000, uVar3._fU8 );
            SET_CHAR_HEADING( l_U628, uVar6 );
            SET_USE_LEG_IK( l_U629, 0 );
            TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( l_U1477, "Boss_Pickup_Injured", "missroman4", 1000.00000000, 0, 0, 0, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( l_U628, "Plyr_Pickup_Injured", "missroman4", 1000.00000000, 0, 0, 0, 0, 0, 0, 1, -1 );
        }
        WAIT( 0 );
        SET_CAM_POS( l_U621, 1234.77700000, -505.02610000, 13.51274000 );
        SET_CAM_ROT( l_U621, -8.75230200, 0.00000000, -44.47956000 );
        SET_CAM_FOV( l_U621, 40.00000000 );
        SET_CAM_NEAR_DOF( l_U621, 1.00000000 );
        SET_CAM_FAR_DOF( l_U621, 5.00000000 );
        SET_CAM_POS( l_U623, 1234.76900000, -504.50630000, 14.56345000 );
        SET_CAM_ROT( l_U623, -6.91883400, 0.00000000, -161.59220000 );
        SET_CAM_FOV( l_U623, 46.00000000 );
        SET_CAM_NEAR_DOF( l_U623, 1.00000000 );
        SET_CAM_FAR_DOF( l_U623, 5.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 7500, 0 );
        sub_16524( 1 );
        sub_16467( ref l_U624, 1 );
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        sub_25584( "R4_HELP", 0, 1, ref l_U1373, 8, 1 );
        SETTIMERA( 0 );
        while ((NOT l_U1350) AND (fVar7 < 0.95000000))
        {
            SET_PED_ENABLE_LEG_IK( l_U628, 0 );
            SET_USE_LEG_IK( l_U629, 0 );
            l_U1350 = (IS_SCREEN_FADED_IN()) AND ((TIMERA() > 1000) AND (sub_17607()));
            if (IS_CHAR_PLAYING_ANIM( l_U628, "missroman4", "Plyr_Pickup_Injured" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U628, "missroman4", "Plyr_Pickup_Injured", ref fVar7 );
            }
            if ((l_U1386 == 0) AND (NOT (sub_15076( l_U1373 ))))
            {
                sub_25584( "R4_HELP", 1, 1, ref l_U1373, 8, 1 );
                l_U1386 = 1;
            }
            WAIT( 0 );
        }
        if (l_U1350)
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            sub_13121( ref l_U1373, 0 );
        }
        l_U1388++;
    }
    return;
}

int sub_21349(unknown uParam0, unknown uParam1)
{
    if ((sub_12558( uParam0 )) < (uParam1^))
    {
        (uParam1^) = sub_12558( uParam0 );
        return 1;
    }
    return 0;
}

void sub_25584(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_25611( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_25611(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_14180( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_26023()
{
    unknown uVar2;

    if (l_U1392[l_U1388] == 0)
    {
        sub_8110();
        if (NOT (IS_CHAR_DEAD( l_U1477 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U1468 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U1477 );
            CLOSE_SEQUENCE_TASK( l_U1468 );
        }
        CREATE_CHAR( 26, 1468450703, 1229.05200000, -495.06330000, 13.24480000, ref l_U1473[2], 1 );
        SET_CHAR_HEADING( l_U1473[2], 158.19000000 );
        SET_CHAR_COMPONENT_VARIATION( l_U1473[2], 1, 1, 0 );
        sub_7161( 4, l_U1473[2], "DARDAN", 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1473[2], 1 );
        SET_CHAR_CAN_SMASH_GLASS( l_U1473[2], 1 );
        REMOVE_ALL_CHAR_WEAPONS( l_U1473[2] );
        GIVE_WEAPON_TO_CHAR( l_U1473[2], 3, 1, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U1473[2], 3, 1 );
        TASK_PERFORM_SEQUENCE( l_U1473[2], l_U1468 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U1473[2], 1 );
        SET_CHAR_PROOFS( l_U1473[2], 0, 0, 1, 1, 0 );
        SET_CHAR_AS_ENEMY( l_U1473[2], 1 );
        SET_CHAR_NEVER_TARGETTED( l_U1473[2], 1 );
        sub_16234();
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SET_CAM_FOV( l_U626, 55.00000000 );
        if ((NOT (IS_CHAR_INJURED( l_U628 ))) AND (NOT (IS_CHAR_INJURED( l_U1477 ))))
        {
            CLEAR_AREA( 1233.18600000, -506.07640000, 14.04480000, 7.00000000, 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1477 );
            SET_CHAR_COORDINATES( l_U1477, 1235.43000000, -504.99000000, 13.04480000 );
            SET_CHAR_HEADING( l_U1477, 130.21140000 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
            SET_CHAR_COORDINATES( l_U628, 1234.79000000, -505.57000000, 13.04480000 );
            SET_CHAR_HEADING( l_U628, 0.81140000 );
            sub_20193( l_U1477, l_U628 );
            sub_20193( l_U628, l_U1477 );
        }
        SET_CAM_POS( l_U621, 1226.14800000, -495.93370000, 13.83968000 );
        SET_CAM_ROT( l_U621, -4.01469600, -0.00000000, -135.62880000 );
        SET_CAM_FOV( l_U621, 45.00000000 );
        SET_CAM_NEAR_DOF( l_U621, 3.00000000 );
        SET_CAM_FAR_DOF( l_U621, 25.00000000 );
        SET_CAM_NEAR_DOF( l_U623, 3.00000000 );
        SET_CAM_FAR_DOF( l_U623, 25.00000000 );
        SET_CAM_POS( l_U623, 1228.13600000, -494.37350000, 14.88004000 );
        SET_CAM_ROT( l_U623, -9.52463200, -0.00000000, -140.32690000 );
        SET_CAM_FOV( l_U623, 45.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 3500, 0 );
        sub_16467( ref l_U624, 1 );
        UNPOINT_CAM( l_U626 );
        sub_16467( ref l_U626, 0 );
        if (NOT (DOES_VEHICLE_EXIST( l_U1457 )))
        {
            CREATE_CAR( 1937616578, 1202.09900000, -505.03970000, 13.65530000, ref l_U1457, 1 );
        }
        if (NOT (IS_CAR_DEAD( l_U1457 )))
        {
            SET_CAR_COORDINATES( l_U1457, 1202.09900000, -505.03970000, 13.65530000 );
            SET_CAR_HEADING( l_U1457, 206.17940000 );
            SET_VEHICLE_DIRT_LEVEL( l_U1457, 8.50000000 );
            SET_CAR_HEADING( l_U1457, 206.17940000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U1457 );
        }
        OPEN_SEQUENCE_TASK( ref l_U1469 );
        TASK_ENTER_CAR_AS_DRIVER( 0, l_U1457, 10000 );
        TASK_CAR_DRIVE_WANDER( 0, l_U1457, 25.00000000, 3 );
        CLOSE_SEQUENCE_TASK( l_U1469 );
        if (NOT (IS_CHAR_DEAD( l_U1477 )))
        {
            FREEZE_CHAR_POSITION( l_U1477, 0 );
            SET_CHAR_COLLISION( l_U1477, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U628 )))
        {
            FREEZE_CHAR_POSITION( l_U628, 0 );
            SET_CHAR_COLLISION( l_U628, 1 );
        }
        sub_8828();
        SETTIMERA( 0 );
        CLEAR_AREA_OF_CARS( 1196.77600000, -520.89760000, 13.48040000, 150.00000000 );
        CLEAR_AREA_OF_CHARS( 1196.77600000, -520.89760000, 13.48040000, 150.00000000 );
        SWITCH_ROADS_OFF( 1100.77600000, -560.89760000, -13.48040000, 1400.77600000, -500.89760000, 13.48040000 );
        l_U1392[l_U1388] = 1;
    }
    sub_6083( 0 );
    if (l_U563[8] == 0)
    {
        if ((TIMERA() > 500) AND (l_U563[0] == 0))
        {
            if ((l_U1350 == 0) AND ((NOT (IS_CHAR_DEAD( l_U1473[2] ))) AND (NOT (IS_CHAR_DEAD( l_U1477 )))))
            {
                sub_20193( l_U628, l_U1477 );
                sub_25584( "R4_HELP", 2, 1, ref l_U1373, 8, 1 );
            }
            SETTIMERA( 0 );
            l_U563[0] = 1;
        }
        if ((TIMERA() > 1000) AND ((l_U563[17] == 0) AND (l_U563[0] == 1)))
        {
            if ((NOT (IS_CHAR_DEAD( l_U1473[2] ))) AND (NOT (IS_CHAR_DEAD( l_U1477 ))))
            {
                TASK_LOOK_AT_CHAR( l_U1477, l_U1473[2], 5000, 0 );
            }
            SETTIMERA( 0 );
            l_U563[17] = 1;
        }
        if (((sub_27612( l_U1373 )) == 2) AND ((l_U563[18] == 0) AND (l_U563[0] == 1)))
        {
            if ((NOT (IS_CHAR_DEAD( l_U1473[2] ))) AND (NOT (IS_CHAR_DEAD( l_U1477 ))))
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U1477, l_U1473[2] );
            }
            l_U563[18] = 1;
        }
        if ((TIMERA() > 2000) AND ((l_U1350 == 0) AND ((l_U563[3] == 0) AND ((l_U563[0] == 1) AND (NOT (sub_15076( l_U1373 )))))))
        {
            SET_CAM_POS( l_U621, 1236.06200000, -508.11680000, 14.60286000 );
            SET_CAM_ROT( l_U621, -1.54037700, 0.00000000, 29.28349000 );
            SET_CAM_FOV( l_U621, 65.00000000 );
            SET_CAM_NEAR_DOF( l_U621, 3.00000000 );
            SET_CAM_FAR_DOF( l_U621, 25.00000000 );
            SET_CAM_POS( l_U623, 1234.32500000, -510.30460000, 14.67841000 );
            SET_CAM_ROT( l_U623, -1.54052200, 0.00000000, 19.08577000 );
            SET_CAM_FOV( l_U623, 14.40007000 );
            SET_CAM_NEAR_DOF( l_U623, 3.00000000 );
            SET_CAM_FAR_DOF( l_U623, 25.00000000 );
            if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
            {
                POINT_CAM_AT_PED( l_U623, l_U1473[2] );
                POINT_CAM_AT_PED( l_U621, l_U1473[2] );
            }
            if (NOT (DOES_CAM_EXIST( l_U1335 )))
            {
                CREATE_CAM( 3, ref l_U1335 );
            }
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.10000000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.12500000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.15000000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.20000000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.30000000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.50000000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.70000000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.75000000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.77500000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.85000000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.87500000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.95000000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.97500000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 0.99000000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 1.00000000 );
            SET_CAM_INTERP_CUSTOM_SPEED_GRAPH( 1.00000000 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U1335, 4, 4, 1, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U1335, l_U621, l_U623, 450, 450 );
            sub_16467( ref l_U626, 0 );
            sub_16467( ref l_U624, 0 );
            sub_16467( ref l_U1335, 1 );
            if (NOT (IS_CHAR_DEAD( l_U1477 )))
            {
                sub_20193( l_U1477, l_U1473[2] );
                TASK_PLAY_ANIM( l_U1477, "reaction_angry_c", "missroman4", 8.00000000, 0, 0, 0, 0, -1 );
                TASK_LOOK_AT_CHAR( l_U628, l_U1473[2], 5000, 0 );
                PRINTSTRING( "Playing the reaction_angry_a Animation!" );
                PRINTNL();
            }
            sub_25584( "R4_HELP", 3, 1, ref l_U1373, 8, 1 );
            WAIT( 700 );
            if (NOT (IS_CHAR_INJURED( l_U1473[2] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1473[2], 1 );
                if (NOT (IS_CAR_DEAD( l_U1457 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U1467 );
                    TASK_PLAY_ANIM( 0, "reaction_angry_c", "missroman4", 8.00000000, 0, 0, 0, 0, -1 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1204.89200000, -507.58650000, 13.98130000, 4, 10000, 0.50000000 );
                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U1457, 10000 );
                    CLOSE_SEQUENCE_TASK( l_U1467 );
                }
                TASK_PERFORM_SEQUENCE( l_U1473[2], l_U1467 );
            }
            SET_CAR_COORDINATES( l_U1457, 1202.09900000, -505.03970000, 13.65530000 );
            SET_CAR_HEADING( l_U1457, 206.17940000 );
            SETTIMERA( 0 );
            l_U563[3] = 1;
        }
        if ((l_U563[4] == 0) AND ((TIMERA() > 400) AND (l_U563[3] == 1)))
        {
            if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
            {
                sub_16467( ref l_U1335, 0 );
                sub_16467( ref l_U623, 1 );
                POINT_CAM_AT_PED( l_U623, l_U1473[2] );
            }
            l_U563[4] = 1;
        }
        if ((TIMERA() > 3000) AND (l_U563[4] == 1))
        {
            if (l_U1387 < 55.00000000)
            {
                l_U1387 *= 1.05000000;
            }
            else
            {
                l_U563[6] = 1;
            }
        }
        if ((l_U563[1] == 0) AND ((l_U563[3] == 1) AND (NOT (sub_15076( l_U1373 )))))
        {
            SETTIMERA( 0 );
            sub_14103( "R4_TOCAR", ref l_U1373, 8, 1 );
            l_U563[1] = 1;
        }
        if (l_U563[5] == 0)
        {
            if ((l_U1350) || (((IS_SCREEN_FADED_IN()) AND ((TIMERA() > 1000) AND (sub_17607()))) || ((l_U563[6] == 1) AND (l_U563[4] == 1))))
            {
                if (l_U563[6] == 0)
                {
                    l_U1350 = 1;
                }
                UNPOINT_CAM( l_U623 );
                sub_16467( ref l_U623, 0 );
                if ((l_U1350) || (l_U563[1] == 0))
                {
                    if (NOT (IS_CHAR_DEAD( l_U1477 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1477 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U1473[2] )))
                    {
                        SET_CHAR_COORDINATES( l_U1473[2], 1205.70700000, -507.91840000, 12.97730000 );
                        SET_CHAR_HEADING( l_U1473[2], 1107.51800000 );
                        TASK_PERFORM_SEQUENCE( l_U1473[2], l_U1469 );
                    }
                    sub_13121( ref l_U1373, 0 );
                    sub_16467( ref l_U624, 0 );
                }
                if ((NOT (IS_CAR_DEAD( l_U1455 ))) AND (NOT (IS_CHAR_INJURED( l_U1477 ))))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1477 );
                    UNLOCK_RAGDOLL( l_U1477, 1 );
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1225.50400000, -511.04500000, 13.04570000, 4, -1, 0.50000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1218.65000000, -528.09480000, 12.88070000, 4, -1, 0.50000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1206.68300000, -513.33220000, 13.95170000, 4, -1, 0.50000000 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U1455, 30000, 0 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    SET_ANIM_GROUP_FOR_CHAR( l_U1477, "move_m@roman_inj" );
                    TASK_PERFORM_SEQUENCE( l_U1477, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                }
                SET_CAM_BEHIND_PED( l_U628 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U628 );
                if (NOT (IS_CAR_DEAD( l_U1455 )))
                {
                    SET_CAR_COORDINATES( l_U1455, 1199.59400000, -508.67110000, 13.00470000 );
                }
                SET_CHAR_COORDINATES( l_U628, 1235.55300000, -506.73810000, 13.04490000 );
                SET_CHAR_HEADING( l_U628, 92.67000000 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U628, 1 );
                sub_29750();
                if (NOT l_U1350)
                {
                    ;
                }
                sub_16467( ref l_U624, 0 );
                sub_16467( ref l_U626, 0 );
                sub_16524( 0 );
                if (l_U1350)
                {
                    sub_13121( ref l_U1373, 0 );
                    DO_SCREEN_FADE_IN( 500 );
                }
                SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
                if (NOT (DOES_BLIP_EXIST( l_U1446 )))
                {
                    ADD_BLIP_FOR_CAR( l_U1455, ref l_U1446 );
                }
                SET_BLIP_AS_FRIENDLY( l_U1446, 1 );
                CHANGE_BLIP_DISPLAY( l_U1446, 4 );
                WAIT( 3000 );
                if (DOES_BLIP_EXIST( l_U1441 ))
                {
                    REMOVE_BLIP( l_U1441 );
                }
                ADD_BLIP_FOR_CHAR( l_U1477, ref l_U1441 );
                SET_BLIP_AS_FRIENDLY( l_U1441, 1 );
                CHANGE_BLIP_DISPLAY( l_U1441, 0 );
                if (NOT (DOES_BLIP_EXIST( l_U1442[2] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U1473[2], ref l_U1442[2] );
                }
                CHANGE_BLIP_COLOUR( l_U1442[2], 1 );
                CHANGE_BLIP_DISPLAY( l_U1442[2], 0 );
                REQUEST_CAR_RECORDING( 1444 );
                SETTIMERB( 0 );
                l_U1432 = -1;
                l_U1388++;
                SET_USE_LEG_IK( l_U629, 1 );
                l_U563[5] = 1;
            }
        }
    }
    return;
}

void sub_27612(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_15076( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_29750()
{
    sub_29761( 1, 0 );
    l_U1108[0] = {1194.36200000, -525.49320000, 13.25920000};
    l_U699[0] = -0.00460000;
    l_U740[0] = 0.01470000;
    l_U781[0] = 0.00110000;
    l_U822[0] = 0.99990000;
    l_U958[0] = 1401;
    l_U863[0] = 0.00000000;
    l_U1063[0] = 1830407356;
    l_U1108[1] = {1194.39200000, -536.15670000, 13.25680000};
    l_U699[1] = -0.00830000;
    l_U740[1] = 0.01530000;
    l_U781[1] = 0.00250000;
    l_U822[1] = 0.99980000;
    l_U958[1] = 1402;
    l_U863[1] = 1845.00000000;
    l_U1063[1] = 1830407356;
    l_U1108[2] = {1204.22300000, -566.86690000, 13.30240000};
    l_U699[2] = -0.00740000;
    l_U740[2] = 0.00600000;
    l_U781[2] = 0.69060000;
    l_U822[2] = 0.72310000;
    l_U958[2] = 1403;
    l_U863[2] = 5236.00000000;
    l_U1063[2] = 1830407356;
    l_U1108[3] = {1134.13900000, -570.67400000, 13.58780000};
    l_U699[3] = 0.00340000;
    l_U740[3] = 0.00920000;
    l_U781[3] = -0.70210000;
    l_U822[3] = 0.71200000;
    l_U958[3] = 1404;
    l_U863[3] = 8509.00000000;
    l_U1063[3] = -825837129;
    l_U1108[4] = {1107.90200000, -565.60600000, 13.12680000};
    l_U699[4] = -0.01840000;
    l_U740[4] = 0.01530000;
    l_U781[4] = 0.70440000;
    l_U822[4] = 0.70940000;
    l_U958[4] = 1405;
    l_U863[4] = 10229.00000000;
    l_U1063[4] = -825837129;
    l_U1108[5] = {1033.99900000, -570.41650000, 14.16170000};
    l_U699[5] = -0.04260000;
    l_U740[5] = -0.01640000;
    l_U781[5] = 0.70790000;
    l_U822[5] = -0.70480000;
    l_U958[5] = 1406;
    l_U863[5] = 14157.00000000;
    l_U1063[5] = 1075851868;
    l_U1108[6] = {988.15980000, -550.72630000, 14.32540000};
    l_U699[6] = -0.00170000;
    l_U740[6] = -0.00250000;
    l_U781[6] = 1.00000000;
    l_U822[6] = -0.00470000;
    l_U958[6] = 1407;
    l_U863[6] = 16589.00000000;
    l_U1063[6] = 1304597482;
    l_U1108[7] = {971.61030000, -570.77860000, 13.88220000};
    l_U699[7] = 0.00330000;
    l_U740[7] = -0.00330000;
    l_U781[7] = -0.70640000;
    l_U822[7] = 0.70780000;
    l_U958[7] = 1408;
    l_U863[7] = 17199.00000000;
    l_U1063[7] = 1304597482;
    l_U1108[8] = {964.82810000, -570.92970000, 13.92590000};
    l_U699[8] = -0.00220000;
    l_U740[8] = 0.00200000;
    l_U781[8] = 0.71370000;
    l_U822[8] = -0.70050000;
    l_U958[8] = 1409;
    l_U863[8] = 17652.00000000;
    l_U1063[8] = -825837129;
    l_U1108[9] = {958.09240000, -571.25560000, 13.88610000};
    l_U699[9] = -0.00460000;
    l_U740[9] = -0.01290000;
    l_U781[9] = 0.71320000;
    l_U822[9] = -0.70080000;
    l_U958[9] = 1410;
    l_U863[9] = 17979.00000000;
    l_U1063[9] = -825837129;
    l_U1108[10] = {909.57500000, -556.12490000, 13.64950000};
    l_U699[10] = -0.00510000;
    l_U740[10] = -0.00830000;
    l_U781[10] = 1.00000000;
    l_U822[10] = 0.00000000;
    l_U958[10] = 1411;
    l_U863[10] = 19627.00000000;
    l_U1063[10] = -2124201592;
    l_U1108[11] = {909.75200000, -547.50330000, 13.82680000};
    l_U699[11] = -0.00510000;
    l_U740[11] = -0.00840000;
    l_U781[11] = 1.00000000;
    l_U822[11] = 0.00000000;
    l_U958[11] = 1412;
    l_U863[11] = 20881.00000000;
    l_U1063[11] = -2124201592;
    l_U1108[12] = {913.52890000, -545.82990000, 13.88520000};
    l_U699[12] = 0.01350000;
    l_U740[12] = 0.00420000;
    l_U781[12] = -0.00660000;
    l_U822[12] = 0.99990000;
    l_U958[12] = 1413;
    l_U863[12] = 21607.00000000;
    l_U1063[12] = 1304597482;
    l_U1108[13] = {915.34530000, -487.84920000, 15.07090000};
    l_U699[13] = 0.00960000;
    l_U740[13] = 0.00530000;
    l_U781[13] = -0.00250000;
    l_U822[13] = 0.99990000;
    l_U958[13] = 1414;
    l_U863[13] = 24841.00000000;
    l_U1063[13] = -825837129;
    l_U1108[14] = {856.12490000, -465.07580000, 13.78420000};
    l_U699[14] = -0.01990000;
    l_U740[14] = 0.00770000;
    l_U781[14] = 0.70680000;
    l_U822[14] = 0.70710000;
    l_U958[14] = 1415;
    l_U863[14] = 28075.00000000;
    l_U1063[14] = 1304597482;
    l_U1108[15] = {859.89220000, -469.88350000, 13.93490000};
    l_U699[15] = 0.01090000;
    l_U740[15] = -0.00540000;
    l_U781[15] = -0.69490000;
    l_U822[15] = 0.71900000;
    l_U958[15] = 1416;
    l_U863[15] = 28603.00000000;
    l_U1063[15] = -2124201592;
    l_U1108[16] = {839.42940000, -461.12770000, 13.62500000};
    l_U699[16] = -0.00850000;
    l_U740[16] = 0.01190000;
    l_U781[16] = 0.43340000;
    l_U822[16] = 0.90110000;
    l_U958[16] = 1417;
    l_U863[16] = 29923.00000000;
    l_U1063[16] = 1075851868;
    l_U1108[17] = {830.70120000, -442.30270000, 13.66910000};
    l_U699[17] = -0.02920000;
    l_U740[17] = -0.01290000;
    l_U781[17] = 0.99950000;
    l_U822[17] = 0.00360000;
    l_U958[17] = 1418;
    l_U863[17] = 31243.00000000;
    l_U1063[17] = -2124201592;
    l_U1108[18] = {759.83850000, -462.96930000, 5.62160000};
    l_U699[18] = 0.00040000;
    l_U740[18] = 0.00360000;
    l_U781[18] = -0.08910000;
    l_U822[18] = 0.99600000;
    l_U958[18] = 1419;
    l_U863[18] = 34180.00000000;
    l_U1063[18] = -825837129;
    l_U1108[19] = {775.05810000, -381.42310000, 6.71850000};
    l_U699[19] = 0.04340000;
    l_U740[19] = 0.01470000;
    l_U781[19] = 0.00110000;
    l_U822[19] = 0.99900000;
    l_U958[19] = 1420;
    l_U863[19] = 38317.00000000;
    l_U1063[19] = 1304597482;
    l_U1108[20] = {765.82700000, -313.70990000, 11.36170000};
    l_U699[20] = -0.02570000;
    l_U740[20] = -0.04110000;
    l_U781[20] = 0.99530000;
    l_U822[20] = 0.08360000;
    l_U958[20] = 1421;
    l_U863[20] = 49884.00000000;
    l_U1063[20] = -1260881538;
    l_U1108[21] = {768.91610000, -306.79520000, 12.03590000};
    l_U699[21] = -0.01760000;
    l_U740[21] = -0.04840000;
    l_U781[21] = 0.98510000;
    l_U822[21] = 0.16400000;
    l_U958[21] = 1422;
    l_U863[21] = 50332.00000000;
    l_U1063[21] = 1304597482;
    l_U1108[22] = {858.14180000, -135.29910000, 5.58860000};
    l_U699[22] = 0.00210000;
    l_U740[22] = 0.02110000;
    l_U781[22] = 0.22230000;
    l_U822[22] = 0.97480000;
    l_U958[22] = 1423;
    l_U863[22] = 60496.00000000;
    l_U1063[22] = -1260881538;
    l_U1108[23] = {803.35890000, -13.27020000, 5.97530000};
    l_U699[23] = -0.01950000;
    l_U740[23] = -0.00310000;
    l_U781[23] = 0.99010010;
    l_U822[23] = -0.13910000;
    l_U958[23] = 1424;
    l_U863[23] = 65699.00000000;
    l_U1063[23] = -1099960214;
    l_U1108[24] = {799.30720000, 2.67440000, 5.56520000};
    l_U699[24] = -0.01690000;
    l_U740[24] = -0.00120000;
    l_U781[24] = 0.99100000;
    l_U822[24] = -0.13290000;
    l_U958[24] = 1425;
    l_U863[24] = 67116.00000000;
    l_U1063[24] = 1304597482;
    l_U1108[25] = {794.54040000, 22.54520000, 5.99440000};
    l_U699[25] = -0.01480000;
    l_U740[25] = -0.00250000;
    l_U781[25] = 0.99080000;
    l_U822[25] = -0.13480000;
    l_U958[25] = 1426;
    l_U863[25] = 67000.00000000;
    l_U1063[25] = -1099960214;
    l_U1108[26] = {792.21450000, 31.67910000, 5.58820000};
    l_U699[26] = -0.01030000;
    l_U740[26] = -0.00090000;
    l_U781[26] = 0.99110000;
    l_U822[26] = -0.13240000;
    l_U958[26] = 1427;
    l_U863[26] = 68400.00000000;
    l_U1063[26] = 1304597482;
    l_U1108[27] = {784.80950000, 58.70000000, 5.58090000};
    l_U699[27] = -0.00970000;
    l_U740[27] = 0.00920000;
    l_U781[27] = 0.93750000;
    l_U822[27] = -0.34780000;
    l_U958[27] = 1428;
    l_U863[27] = 70114.00000000;
    l_U1063[27] = 1304597482;
    l_U1108[28] = {782.17370000, 67.20230000, 5.71250000};
    l_U699[28] = -0.01840000;
    l_U740[28] = 0.00380000;
    l_U781[28] = 0.98980000;
    l_U822[28] = -0.14130000;
    l_U958[28] = 1429;
    l_U863[28] = 70576.00000000;
    l_U1063[28] = -1260881538;
    l_U1108[29] = {779.77750000, 75.30690000, 5.64850000};
    l_U699[29] = -0.01570000;
    l_U740[29] = -0.00250000;
    l_U781[29] = 0.99270000;
    l_U822[29] = -0.11930000;
    l_U958[29] = 1430;
    l_U863[29] = 70972.00000000;
    l_U1063[29] = 1304597482;
    l_U1108[30] = {782.18730000, 88.52560000, 5.63350000};
    l_U699[30] = -0.00430000;
    l_U740[30] = 0.03230000;
    l_U781[30] = 0.13100000;
    l_U822[30] = 0.99090000;
    l_U958[30] = 1431;
    l_U863[30] = 71566.00000000;
    l_U1063[30] = 1304597482;
    l_U1108[31] = {782.13170000, 97.96510000, 5.85910000};
    l_U699[31] = -0.01670000;
    l_U740[31] = 0.02360000;
    l_U781[31] = -0.09380000;
    l_U822[31] = 0.99520000;
    l_U958[31] = 1432;
    l_U863[31] = 72094.00000000;
    l_U1063[31] = -1099960214;
    l_U1108[32] = {781.62960000, 103.69630000, 5.44210000};
    l_U699[32] = 0.00370000;
    l_U740[32] = 0.00010000;
    l_U781[32] = 0.86450000;
    l_U822[32] = 0.50260000;
    l_U958[32] = 1433;
    l_U863[32] = 72556.00000000;
    l_U1063[32] = 1304597482;
    l_U1108[33] = {823.93220000, 157.15770000, 5.49830000};
    l_U699[33] = -0.01010000;
    l_U740[33] = -0.01140000;
    l_U781[33] = 0.86860000;
    l_U822[33] = -0.49520000;
    l_U958[33] = 1434;
    l_U863[33] = 78892.00000000;
    l_U1063[33] = 1304597482;
    l_U1108[34] = {857.50760000, 224.37590000, 5.64890000};
    l_U699[34] = 0.00220000;
    l_U740[34] = 0.00010000;
    l_U781[34] = -0.03320000;
    l_U822[34] = 0.99940000;
    l_U958[34] = 1435;
    l_U863[34] = 82703.00000000;
    l_U1063[34] = -1260881538;
    l_U1108[35] = {863.23100000, 277.87210000, 5.55500000};
    l_U699[35] = 0.00380000;
    l_U740[35] = 0.01250000;
    l_U781[35] = -0.10050000;
    l_U822[35] = 0.99490000;
    l_U958[35] = 1436;
    l_U863[35] = 85627.00000000;
    l_U1063[35] = 1304597482;
    l_U1108[36] = {859.82990000, 345.65550000, 5.49120000};
    l_U699[36] = 0.00140000;
    l_U740[36] = 0.02180000;
    l_U781[36] = 0.03870000;
    l_U822[36] = 0.99900000;
    l_U958[36] = 1437;
    l_U863[36] = 89243.00000000;
    l_U1063[36] = 1304597482;
    l_U1108[37] = {806.86000000, 398.54610000, 9.52040000};
    l_U699[37] = -0.03930000;
    l_U740[37] = -0.05230000;
    l_U781[37] = 0.99700000;
    l_U822[37] = 0.04080000;
    l_U958[37] = 1438;
    l_U863[37] = 96850.00000000;
    l_U1063[37] = 1304597482;
    l_U1108[38] = {808.68800000, 408.39090000, 10.74880000};
    l_U699[38] = -0.01960000;
    l_U740[38] = -0.04280000;
    l_U781[38] = 0.99610000;
    l_U822[38] = 0.07520000;
    l_U958[38] = 1439;
    l_U863[38] = 97642.00000000;
    l_U1063[38] = -810318068;
    l_U1108[39] = {824.16530000, 432.91490000, 13.02990000};
    l_U699[39] = 0.03070000;
    l_U740[39] = 0.01710000;
    l_U781[39] = -0.28240000;
    l_U822[39] = 0.95870000;
    l_U958[39] = 1440;
    l_U863[39] = 99622.00000000;
    l_U1063[39] = -1260881538;
    l_U1233[0] = {859.70000000, 372.50000000, 6.30000000};
    l_U908[0] = 0.02120000;
    l_U910[0] = 0.02140000;
    l_U912[0] = -0.24030000;
    l_U914[0] = 0.97020000;
    l_U1040[0] = 1991;
    l_U916[0] = 85500.00000000;
    l_U918[0] = 1.00000000;
    l_U1106[0] = 1917016601;
    return;
}

void sub_29761(boolean bParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U657 = 1;
    l_U667 = 0;
    l_U1046 = 0;
    l_U1047 = 0;
    l_U1048 = 0;
    l_U1049 = 0;
    l_U1050 = 1;
    l_U1051 = 0;
    l_U1052 = 0;
    l_U1053 = 0;
    l_U1054 = 0;
    l_U1055 = -1;
    l_U1056 = 0;
    l_U1057 = 0;
    l_U1058 = 0;
    l_U1059 = 0;
    l_U938 = 0.00000000;
    l_U670 = 0;
    if (IS_PLAYER_PLAYING( sub_3832() ))
    {
        GET_CHAR_COORDINATES( sub_4260(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        l_U1243._fU0 = uVar4._fU0 - 100.00000000;
        l_U1243._fU4 = uVar4._fU4 - 100.00000000;
        l_U1243._fU8 = uVar4._fU8 - 100.00000000;
        l_U1246._fU0 = uVar4._fU0 + 100.00000000;
        l_U1246._fU4 = uVar4._fU4 + 100.00000000;
        l_U1246._fU8 = uVar4._fU8 + 100.00000000;
        SWITCH_ROADS_OFF( l_U1243._fU0, l_U1243._fU4, l_U1243._fU8, l_U1246._fU0, l_U1246._fU4, l_U1246._fU8 );
        if (bParam0)
        {
            CLEAR_AREA_OF_CARS( uVar4._fU0, uVar4._fU4, uVar4._fU8, 500.00000000 );
        }
    }
    sub_30102();
    l_U669 = 0;
    if (IS_PLAYER_PLAYING( sub_3832() ))
    {
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_3832(), 1 );
        SET_CREATE_RANDOM_COPS( 0 );
    }
    sub_5474();
    return;
}

void sub_30102()
{
    ADD_SCENARIO_BLOCKING_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000, 0 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    return;
}

void sub_35533()
{
    vector vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (l_U563[19] == 0)
    {
        if ((NOT (IS_CHAR_DEAD( l_U1477 ))) AND (NOT (IS_CAR_DEAD( l_U1455 ))))
        {
            if (IS_CHAR_IN_CAR( l_U628, l_U1455 ))
            {
                CLEAR_CHAR_TASKS( l_U1477 );
                GET_PLAYER_GROUP( l_U629, ref l_U627 );
                SET_GROUP_MEMBER( l_U627, l_U1477 );
                PRINTSTRING( "Added roman to group" );
                l_U563[19] = 1;
            }
        }
    }
    if ((l_U563[12] == 0) AND (l_U563[19] == 1))
    {
        if (NOT (IS_CHAR_DEAD( l_U1477 )))
        {
            if ((sub_18173( l_U628, l_U1477, 1 )) > 30.00000000)
            {
                ;
            }
            else if ((sub_18173( l_U628, l_U1477, 1 )) < 12.00000000)
            {
                if (IS_GROUP_MEMBER( l_U1477, l_U627 ))
                {
                    ;
                }
                else
                {
                    SET_GROUP_MEMBER( l_U627, l_U1477 );
                }
            }
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U1473[2] ))) AND (NOT (IS_CAR_DEAD( l_U1457 ))))
    {
        if (IS_CHAR_IN_CAR( l_U1473[2], l_U1457 ))
        {
            if (l_U563[8] == 0)
            {
                while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1444 )))
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U1457 )))
                {
                    START_PLAYBACK_RECORDED_CAR( l_U1457, 1444 );
                }
                ENABLE_CHASE_AUDIO( 1 );
                if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
                {
                    SET_CHAR_PROOFS( l_U1473[2], 1, 1, 1, 1, 1 );
                }
                SWITCH_ROADS_BACK_TO_ORIGINAL( 1100.77600000, -560.89760000, -13.48040000, 1400.77600000, -500.89760000, 13.48040000 );
                l_U563[8] = 1;
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U1457 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1457 ))
        {
            if (LOCATE_CAR_3D( l_U1457, 1198.72500000, -514.96660000, 14.13180000, 2.50000000, 2.50000000, 2.00000000, 0 ))
            {
                SET_CAR_COLLISION( l_U1457, 0 );
            }
            else
            {
                SET_CAR_COLLISION( l_U1457, 1 );
            }
        }
    }
    if (l_U563[12] == 0)
    {
        sub_36214( ref l_U1473[2] );
    }
    if (l_U1432 == 1)
    {
        if ((l_U563[12] == 0) AND ((NOT (IS_CAR_DEAD( l_U1457 ))) AND (NOT (IS_CHAR_DEAD( l_U1473[2] )))))
        {
            if ((sub_36979()) AND ((l_U1349 == 0) AND ((IS_CAR_ON_SCREEN( l_U1457 )) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))))
            {
                PRINT_HELP_FOREVER( "R4CHASE" );
                GET_GAME_TIMER( ref l_U1364 );
            }
            else
            {
                GET_GAME_TIMER( ref l_U1363 );
                if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    if ((NOT sub_36979()) || ((l_U1363 - l_U1364) > 10000))
                    {
                        l_U1349 = 1;
                        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP5" ))) AND (l_U563[14] == 0))
                        {
                            CLEAR_HELP();
                        }
                    }
                }
            }
        }
        if (l_U1344 == 0)
        {
            if (NOT (IS_CAR_DEAD( l_U1455 )))
            {
                if (IS_CHAR_IN_CAR( l_U628, l_U1455 ))
                {
                    if ((l_U1345 == 1) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (TIMERB() > 4000)))
                    {
                        PRINTSTRING( "Triggering speech" );
                        PRINTNL();
                        sub_13121( ref l_U1373, 0 );
                        switch (g_U64960)
                        {
                            case 0:
                            sub_14103( "R4_CAR1", ref l_U1373, 8, 1 );
                            g_U64960++;
                            break;
                            case 1:
                            sub_14103( "R4_CLOSE", ref l_U1373, 8, 1 );
                            g_U64960++;
                            break;
                            case 2:
                            SAY_AMBIENT_SPEECH( l_U1477, "Listen_to_radio", 0, 0, 0 );
                            l_U1354 = 1;
                            break;
                        }
                        MARK_MODEL_AS_NO_LONGER_NEEDED( 1731510984 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1473[0] );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -503930010 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1473[1] );
                        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 0 );
                        l_U1344 = 1;
                    }
                }
            }
        }
        else if ((NOT (IS_CHAR_DEAD( l_U1477 ))) AND (NOT (IS_CAR_DEAD( l_U1455 ))))
        {
            if ((IS_CHAR_SITTING_IN_CAR( l_U1477, l_U1455 )) AND (IS_CHAR_SITTING_IN_CAR( l_U628, l_U1455 )))
            {
                GET_GAME_TIMER( ref l_U1427 );
                if ((l_U1355 == 0) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U1427 - l_U1332) > 4000)))
                {
                    switch (g_U64960)
                    {
                        case 1:
                        sub_37710( "R4_CAR1", ref l_U1373, 8, 1 );
                        break;
                        case 2:
                        if (l_U1354 == 0)
                        {
                            sub_37710( "R4_CLOSE", ref l_U1373, 8, 1 );
                        }
                        break;
                    }
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 0 );
                }
            }
            else if ((l_U563[9] == 0) AND (l_U1355 == 0))
            {
                sub_37913( ref l_U1373 );
            }
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 1 );;
        }
    }
    if ((l_U1483 == 0) AND ((l_U1432 == 0) AND ((sub_18173( l_U1477, l_U628, 1 )) > 60.00000000)))
    {
        REMOVE_BLIP( l_U1441 );
        REMOVE_BLIP( l_U1442[2] );
        PRINT_NOW( "R4FAIL_05", 7500, 1 );
        WAIT( 7500 );
        sub_13107();
    }
    if ((l_U1370 == 0) AND (LOCATE_CHAR_IN_CAR_2D( l_U628, 805.14740000, -457.82390000, 19.00000000, 16.00000000, 1 )))
    {
        PRINT_HELP( "HELP5" );
        GET_GAME_TIMER( ref l_U1372 );
        l_U1370 = 1;
    }
    if ((l_U563[9] == 0) AND (l_U563[5] == 1))
    {
        if ((NOT (IS_CHAR_DEAD( l_U1477 ))) AND (NOT (IS_CAR_DEAD( l_U1455 ))))
        {
            if (IS_CHAR_SITTING_IN_CAR( l_U628, l_U1455 ))
            {
                CHANGE_BLIP_DISPLAY( l_U1446, 0 );
                if (NOT (IS_CHAR_IN_CAR( l_U1477, l_U1455 )))
                {
                    if ((l_U1433 != l_U1432) AND ((sub_18173( l_U1477, l_U628, 1 )) > 10.00000000))
                    {
                        PRINT_NOW( "ROM4_28", 3000, 1 );
                        CHANGE_BLIP_DISPLAY( l_U1441, 4 );
                        CHANGE_BLIP_DISPLAY( l_U1442[2], 1 );
                    }
                    l_U1433 = l_U1432;
                    l_U1432 = 0;
                }
                else if ((l_U1438 == 1) || (l_U1433 != l_U1432))
                {
                    CHANGE_BLIP_DISPLAY( l_U1441, 0 );
                    CHANGE_BLIP_DISPLAY( l_U1442[2], 4 );
                    PRINT_NOW( "ROM4_26", 3000, 1 );
                    PRINTSTRING( "reseting timer B" );
                    PRINTNL();
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1731510984 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -503930010 );
                    SETTIMERB( 0 );
                    GET_GAME_TIMER( ref l_U1332 );
                    GET_GAME_TIMER( ref l_U1362 );
                    l_U1345 = 1;
                }
                l_U1433 = l_U1432;
                l_U1432 = 1;;
            }
            else if ((l_U1433 != l_U1432) AND (l_U1429 == 0))
            {
                CHANGE_BLIP_DISPLAY( l_U1446, 4 );
                CHANGE_BLIP_DISPLAY( l_U1442[2], 1 );
                CHANGE_BLIP_DISPLAY( l_U1441, 0 );
                sub_37913( ref l_U1373 );
                PRINT_NOW( "ROM4_27", 7500, 1 );
                if (NOT (IS_CHAR_DEAD( l_U1477 )))
                {
                    SAY_AMBIENT_SPEECH( l_U1477, "GET_IN_CAR", 1, 1, 0 );
                }
            }
            l_U1433 = l_U1432;
            l_U1432 = 2;;
        }
    }
    if ((l_U1345 == 1) AND ((NOT (sub_15076( l_U1373 ))) AND ((l_U563[9] == 0) AND ((l_U563[5] == 1) AND (l_U1432 == 1)))))
    {
        if ((NOT (IS_CHAR_DEAD( l_U1477 ))) AND (NOT (IS_CAR_DEAD( l_U1455 ))))
        {
            if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((IS_CHAR_IN_CAR( l_U1477, l_U1455 )) AND (IS_CHAR_IN_CAR( l_U628, l_U1455 ))))
            {
                GET_GAME_TIMER( ref l_U1427 );
                if (((l_U1427 - l_U1332) > 4000) AND ((sub_18173( l_U628, l_U1473[2], 1 )) > 100))
                {
                    GET_GAME_TIMER( ref l_U1361 );
                    PRINTINT( l_U1361 );
                    PRINTSTRING( " - " );
                    PRINTINT( l_U1362 );
                    PRINTSTRING( " = " );
                    PRINTINT( l_U1361 - l_U1362 );
                    PRINTNL();
                    if ((l_U1361 - l_U1362) > 8000)
                    {
                        PRINTNL();
                        PRINTSTRING( "too far away speech" );
                        PRINTNL();
                        sub_14103( "R4_2FAR", ref l_U1379, 8, 1 );
                        GET_GAME_TIMER( ref l_U1362 );
                    }
                }
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U1457 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1457 ))
        {
            if ((FIND_TIME_POSITION_IN_RECORDING( l_U1457 )) >= 101200.00000000)
            {
                while (l_U1342 > 2.15000000)
                {
                    if (NOT (IS_CAR_DEAD( l_U1457 )))
                    {
                        l_U1342 *= 0.70000000;
                        SET_PLAYBACK_SPEED( l_U1457, l_U1342 );
                    }
                    WAIT( 0 );
                }
                STOP_PLAYBACK_RECORDED_CAR( l_U1457 );
                ENABLE_CHASE_AUDIO( 0 );
                sub_3378();
                sub_3530( 0 );
                l_U1349 = 1;
                ALLOW_EMERGENCY_SERVICES( 0 );
                if (NOT (IS_CAR_DEAD( l_U1457 )))
                {
                    SET_CAR_PROOFS( l_U1457, 0, 0, 0, 0, 0 );
                    SET_CAN_BURST_CAR_TYRES( l_U1457, 1 );
                }
                if ((NOT (IS_CAR_DEAD( l_U1455 ))) AND (NOT (IS_CHAR_DEAD( l_U1477 ))))
                {
                    if (IS_GROUP_MEMBER( l_U1477, l_U627 ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U1477 );
                    }
                    if (NOT (IS_CHAR_IN_CAR( l_U1477, l_U1455 )))
                    {
                        TASK_ENTER_CAR_AS_PASSENGER( l_U1477, l_U1455, 10000, 0 );
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
                {
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U1473[2], 1 );
                    SET_CHAR_NEVER_TARGETTED( l_U1473[2], 0 );
                }
                l_U563[12] = 1;
            }
        }
    }
    if ((NOT (IS_CAR_DEAD( l_U1457 ))) AND ((l_U563[9] == 0) AND ((l_U563[8] == 1) AND (l_U563[12] == 1))))
    {
        vVar2 = {779.58990000, 471.41710000, 23.35520000};
        if (NOT (IS_CAR_ON_SCREEN( l_U1457 )))
        {
            SET_CAR_FORWARD_SPEED( l_U1457, 0.20000000 );
            WARP_CHAR_FROM_CAR_TO_COORD( l_U1473[2], 798.49880000, 422.27000000, 10.60060000 );
            SET_CHAR_HEADING( l_U1473[2], 86.10970000 );
        }
        OPEN_SEQUENCE_TASK( ref l_U1472 );
        TASK_CAR_TEMP_ACTION( 0, l_U1457, 5, 1000 );
        TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U1457 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 789.20130000, 423.40260000, 11.49480000, 4, 60000, 0.50000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar2.x, vVar2.y, vVar2.z, 4, 60000, 0.50000000 );
        TASK_TURN_CHAR_TO_FACE_COORD( 0, 774.90260000, 468.97640000, 22.35600000 );
        TASK_LOOK_AT_CHAR( 0, l_U628, 60000, 0 );
        TASK_PLAY_ANIM( 0, "scared_02", "missRoman4", 1000.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U1472 );
        CHANGE_BLIP_DISPLAY( l_U1442[2], 4 );
        CHANGE_BLIP_DISPLAY( l_U1446, 0 );
        CHANGE_BLIP_DISPLAY( l_U1441, 0 );
        if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            SET_CHAR_MAX_HEALTH( l_U1473[2], 280 );
            SET_CHAR_HEALTH( l_U1473[2], 280 );
            TASK_PERFORM_SEQUENCE( l_U1473[2], l_U1472 );
            SET_CHAR_PROOFS( l_U1473[2], 0, 0, 0, 0, 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U1477 )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U1477 );
        }
        if (NOT (IS_CAR_DEAD( l_U1457 )))
        {
            LOCK_CAR_DOORS( l_U1457, 1 );
        }
        sub_3378();
        CLEAR_HELP();
        l_U563[9] = 1;
    }
    if ((l_U1352 == 0) AND (l_U563[9] == 1))
    {
        if (NOT (IS_CAR_DEAD( l_U1457 )))
        {
            if (((sub_18173( l_U628, l_U1473[2], 1 )) < 38.00000000) AND (IS_CAR_ON_SCREEN( l_U1457 )))
            {
                sub_14103( "R4_FLEE", ref l_U1373, 8, 1 );
                l_U1352 = 1;
            }
        }
    }
    if (((l_U1438 == 0) AND ((NOT (sub_15076( l_U1373 ))) AND (l_U1352 == 1))) || ((NOT (IS_CHAR_DEAD( l_U1477 ))) AND ((NOT (IS_CAR_DEAD( l_U1455 ))) AND ((l_U1438 == 0) AND (((sub_40613( l_U628, 789.20130000, 423.40260000, 11.49480000 )) < 15.00000000) AND (l_U563[9] == 1))))))
    {
        PRINT_NOW( "ROM4_42", 7500, 1 );
        if (IS_GROUP_MEMBER( l_U1477, l_U627 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U1477 );
        }
        if (NOT (IS_CHAR_IN_CAR( l_U1477, l_U1455 )))
        {
            TASK_ENTER_CAR_AS_PASSENGER( l_U1477, l_U1455, 10000, 0 );
        }
        GET_GAME_TIMER( ref l_U1366 );
        l_U1438 = 1;
    }
    if ((l_U1367 == 0) AND ((NOT (sub_15076( l_U1373 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (((sub_40898( l_U1473[2] )) > (sub_40898( l_U628 ))) AND (l_U1438 == 1)))))
    {
        PRINT_HELP( "ROM4ARR" );
        l_U1367 = 1;
    }
    GET_GAME_TIMER( ref l_U1365 );
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (((l_U1365 - l_U1366) > 10000) AND (((sub_18173( l_U628, l_U1473[2], 1 )) < 15.00000000) AND (l_U563[9] == 1))))
    {
        sub_14103( "R4_FLEES", ref l_U1373, 8, 1 );
        GET_GAME_TIMER( ref l_U1366 );
    }
    if (l_U563[9] == 1)
    {
        if (sub_21349( l_U1473[2], ref l_U1369 ))
        {
            PRINTSTRING( "Dardan just took a beating" );
            PRINTNL();
            if (l_U563[16] == 1)
            {
                PRINTSTRING( "Dardan just took a hit in the room" );
                PRINTNL();
                l_U1358 = 1;
            }
            sub_13121( ref l_U1373, 0 );
        }
    }
    if ((l_U563[9] == 1) AND (l_U563[7] == 0))
    {
        if (NOT (IS_CHAR_DEAD( l_U1477 )))
        {
            if ((IS_CHAR_IN_ANY_CAR( l_U628 )) AND (IS_CHAR_IN_ANY_CAR( l_U1477 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1477, 1 );
                l_U563[7] = 1;
            }
        }
    }
    sub_12417();
    if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
    {
        if (l_U563[11] == 0)
        {
            if (((l_U563[11] == 0) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U1473[2], 781.17990000, 467.28850000, 23.36040000, 10.00000000, 8.00000000, 1.00000000, 0 )) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 781.17990000, 467.28850000, 23.36040000, 10.00000000, 8.00000000, 1.00000000, 0 )) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1473[2], l_U628, 0 ))))) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 781.17990000, 467.28850000, 23.36040000, 10.00000000, 8.00000000, 1.00000000, 0 )) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U1473[2], 781.17990000, 467.28850000, 23.36040000, 10.00000000, 8.00000000, 1.00000000, 0 )) AND (IS_CHAR_PLAYING_ANIM( l_U1473[2], "missRoman4", "scared_02" )))))
            {
                SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U1482, 0 );
                SET_COMBAT_DECISION_MAKER( l_U1473[2], l_U1482 );
                SET_CHAR_WILL_USE_COVER( l_U1473[2], 0 );
                PRINTSTRING( "Dardan in position for cutscene.." );
                PRINTNL();
                SAY_AMBIENT_SPEECH( l_U1473[2], "SHOCKED", 1, 1, 0 );
                PRINT_NOW( "ROM4_30", 7500, 1 );
                if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
                {
                    GET_CHAR_HEALTH( l_U1473[2], ref l_U1436 );
                }
                SETTIMERB( 0 );
                l_U563[11] = 1;
            }
        }
    }
    if ((l_U563[11] == 1) AND ((l_U563[16] == 0) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 777.98220000, 470.00510000, 23.36090000, 1.00000000, 8.00000000, 1.50000000, 0 )) || ((sub_18173( l_U628, l_U1473[2], 1 )) < 6.00000000))))
    {
        if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            SET_CHAR_HEALTH( l_U1473[2], 280 );
        }
        if (NOT (IS_CHAR_INJURED( l_U1473[2] )))
        {
            TASK_COMBAT( l_U1473[2], l_U628 );
            SET_CHAR_MELEE_MOVEMENT_CONSTAINT_BOX( l_U1473[2], 770.78200000, 464.44640000, 21.35590000, 790.11100000, 470.64040000, 27.36097000 );
        }
        PRINTSTRING( "TIme to attacK" );
        PRINTNL();
        SETTIMERA( 0 );
        l_U563[16] = 1;
    }
    if ((l_U563[16] == 0) AND ((l_U563[5] == 1) AND (l_U563[8] == 1)))
    {
        if ((NOT (IS_CAR_DEAD( l_U1457 ))) AND (NOT (IS_CHAR_DEAD( l_U1473[2] ))))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1457 ))
            {
                if ((FIND_TIME_POSITION_IN_RECORDING( l_U1457 )) < 90621.52000000)
                {
                    if (LOCATE_CAR_3D( l_U1457, 759.85230000, -362.56770000, 7.31750000, 2.00000000, 6.00000000, 2.00000000, 0 ))
                    {
                        l_U1360 = 1;
                        if (NOT (IS_CAR_ON_SCREEN( l_U1457 )))
                        {
                            g_U9170 = 1;
                        }
                    }
                    if ((g_U9170 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 759.85230000, -362.56770000, 7.31750000, 30.00000000, 36.00000000, 2.00000000, 0 )))
                    {
                        if (NOT (IS_CAR_ON_SCREEN( l_U1457 )))
                        {
                            g_U9170 = 0;
                        }
                    }
                    if (l_U1360 == 0)
                    {
                        sub_42523( l_U1457, sub_4260(), ref l_U1490, 0.85000000, 22.00000000, 25.50000000, 60.00000000, 1.70000000, 1.00000000, 0.64000000, 1 );
                    }
                    else
                    {
                        sub_42523( l_U1457, sub_4260(), ref l_U1490, 0.85000000, 32.00000000, 35.50000000, 70.00000000, 1.70000000, 1.00000000, 0.64000000, 1 );
                    }
                }
                else
                {
                    sub_45719( l_U1457, sub_4260(), ref l_U1490, 45.00000000, 35.00000000, 80.00000000, 2.20000000, 2.50000000, 1065353216 );
                }
                if (NOT (IS_CHAR_DEAD( l_U1477 )))
                {
                    if ((IS_CHAR_ON_FOOT( l_U1477 )) || (IS_CHAR_ON_FOOT( l_U628 )))
                    {
                        sub_45719( l_U1457, sub_4260(), ref l_U1490, 15.00000000, 18.00000000, 30.00000000, 0.45000000, 0.80000000, 1065353216 );
                    }
                }
                if (((NOT (IS_CAR_ON_SCREEN( l_U1457 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 768.46210000, -529.49780000, 7.40970000, 40.00000000, 49.00000000, 5.00000000, 0 ))) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 783.87320000, 182.14820000, 6.03170000, 26.00000000, 32.00000000, 3.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U628, 819.19010000, 272.71080000, 6.12380000, 17.00000000, 69.00000000, 4.00000000, 0 ))))
                {
                    sub_46139( l_U1457, sub_4260(), ref l_U1490, 55.00000000, 50.00000000, 80.00000000, 2.40000000, 2.50000000, 1065353216 );
                }
                if (NOT (IS_CAR_DEAD( l_U1457 )))
                {
                    if (LOCATE_CAR_3D( l_U1457, 860.92100000, 301.39570000, 6.00630000, 11.00000000, 100.00000000, 10.00000000, 0 ))
                    {
                        sub_46139( l_U1457, sub_4260(), ref l_U1490, 20.00000000, 15.00000000, 30.00000000, 0.55000000, 1.60000000, 1065353216 );
                    }
                }
            }
        }
    }
    if (((sub_40613( l_U1473[2], 779.00000000, 468.00000000, 23.35000000 )) > (sub_40613( l_U628, 779.00000000, 468.00000000, 23.35000000 ))) || ((sub_18173( l_U628, l_U1473[2], 1 )) < l_U630))
    {
        sub_46823( l_U1457, l_U1490 );
    }
    else
    {
        sub_13850();
        sub_14103( "R4_LOSED", ref l_U1373, 8, 1 );
        if (NOT (IS_CHAR_DEAD( l_U1477 )))
        {
            SET_CHAR_HEALTH( l_U1477, 1500 );
        }
        if (NOT (IS_CAR_DEAD( l_U1455 )))
        {
            SET_CAR_PROOFS( l_U1455, 1, 1, 1, 1, 1 );
        }
        while (sub_15076( l_U1373 ))
        {
            WAIT( 0 );
        }
        PRINT_NOW( "R4FAIL_01", 7500, 1 );
        WAIT( 7500 );
        sub_60514();
        sub_13107();
    }
    if ((l_U563[15] == 0) AND ((l_U563[11] == 1) AND ((l_U563[14] == 0) AND (TIMERA() > 2000))))
    {
        PRINT_HELP_FOREVER( "R4KNIFE" );
        SETTIMERA( 0 );
        l_U563[14] = 1;
    }
    if ((l_U563[14] == 1) AND ((l_U563[15] == 0) AND (TIMERA() > 15000)))
    {
        CLEAR_HELP();
        l_U563[15] = 1;
    }
    if ((l_U563[11] == 1) AND (l_U563[9] == 1))
    {
        if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            GET_CHAR_HEALTH( l_U1473[2], ref l_U1437 );
        }
        if ((l_U1358 == 1) AND ((NOT (IS_CHAR_IN_WATER( l_U1473[2] ))) AND (l_U1437 < 175)))
        {
            if (l_U1341 == 0)
            {
                REQUEST_ANIMS( "move_injured_upper" );
                while (NOT (HAVE_ANIMS_LOADED( "move_injured_upper" )))
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U1473[2] )))
                {
                    FORCE_CHAR_TO_DROP_WEAPON( l_U1473[2] );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1473[2], 1 );
                    SET_ANIM_GROUP_FOR_CHAR( l_U1473[2], "move_injured_upper" );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U1473[2], 779.75250000, 472.47600000, 23.35980000, 2, -2, 0.50000000 );
                }
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U1473[2] );
                l_U1341 = 1;
            }
            if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
            {
                GET_PED_BONE_POSITION( l_U1473[2], 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar5 );
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1473[2], l_U628, 0 ))
            {
                if ((uVar5._fU8 > 23.35000000) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U628, 779.75250000, 472.47600000, 23.35980000, 9.00000000, 9.00000000, 1.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U1473[2], 779.75250000, 472.47600000, 23.35980000, 2.00000000, 2.00000000, 1.00000000, 0 ))))
                {
                    CLEAR_HELP();
                    CHANGE_BLIP_DISPLAY( l_U1446, 0 );
                    REMOVE_BLIP( l_U1442[2] );
                    REMOVE_BLIP( l_U1441 );
                    sub_8110();
                    l_U1388++;
                }
                else if (IS_CHAR_INJURED( l_U1473[2] ))
                {
                    CLEAR_HELP();
                    l_U1351 = 1;
                }
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            if (IS_CHAR_IN_WATER( l_U1473[2] ))
            {
                DAMAGE_CHAR( l_U1473[2], 400, 1 );
                SET_CHAR_DROWNS_IN_WATER( l_U1473[2], 1 );
                CLEAR_HELP();
                l_U1351 = 1;
            }
        }
    }
    if ((l_U1351 == 1) || (IS_CHAR_INJURED( l_U1473[2] )))
    {
        sub_13121( ref l_U1373, 1 );
        if (NOT (sub_15076( l_U1373 )))
        {
            if (DOES_BLIP_EXIST( l_U1441 ))
            {
                REMOVE_BLIP( l_U1441 );
            }
            if (DOES_BLIP_EXIST( l_U1442[2] ))
            {
                REMOVE_BLIP( l_U1442[2] );
            }
            if (NOT (DOES_BLIP_EXIST( l_U1441 )))
            {
                ADD_BLIP_FOR_CAR( l_U1455, ref l_U1441 );
            }
            CHANGE_BLIP_DISPLAY( l_U1441, 4 );
            SET_BLIP_AS_FRIENDLY( l_U1441, 1 );
            if ((sub_63596( l_U628 )) != 3)
            {
                sub_14103( "R4_DOWN", ref l_U1373, 8, 1 );
            }
            else
            {
                sub_14103( "R4_KNIFE", ref l_U1373, 8, 1 );
            }
            WAIT( 4000 );
            CLEAR_HELP();
            if (NOT (IS_CAR_DEAD( l_U1455 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U628, l_U1455 )))
                {
                    PRINT_NOW( "ROM4_27", 7500, 1 );
                }
            }
            PRINTSTRING( "Should skip to the stage where we drive Roman home" );
            PRINTNL();
            sub_8110();
            l_U1388 = 6;
        }
    }
    return;
}

void sub_36214(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U1328)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U1326))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U1327 + 500))
        {
            l_U1326 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_36382()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_4260() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U1328)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U1327 );
            l_U1326 = 1;
            l_U1325 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U1326) AND (NOT l_U1325))
        {
            if (l_U1328)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U1325 = 1;
        }
    }
    else if (l_U1325)
    {
        if (l_U1328)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U1325 = 0;
    };;;
    return;
}

int sub_36382()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_36979()
{
    int iVar2;

    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_4260() )) AND ((iVar2 != 5) AND (iVar2 != 4)))
    {
        return 1;
    }
    return 0;
}

void sub_37710(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_37733( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_37733(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_14180( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_37913(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_14279( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_14279( "\n CONVERSATION PAUSED AT LINE " );
            sub_38069( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_14279( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_14279( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_14279( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_38069(unknown uParam0)
{
    return;
}

void sub_40613(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_40898(unknown uParam0)
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

void sub_42523(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, float fParam5, float fParam6, unknown uParam7, float fParam8, unknown uParam9, boolean bParam10)
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

    if (l_U670 == 0)
    {
        if ((uParam2^) < fParam3)
        {
            (uParam2^) = fParam3;
            l_U670 = 1;
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
        fParam8 = l_U950;
    }
    fVar13 = fParam3 * uParam7;
    if (NOT (fVar13 > fParam3))
    {
        fVar13 = fParam3 + 0.10000000;
    }
    fVar18 = fParam3 * uParam9;
    fVar19 = ((fParam6 - fParam5) * 0.40000000) + fParam5;
    fVar15 = sub_43861( uParam0, uParam1 );
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
            if (sub_44188( uParam1, uParam0 ))
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
                if ((sub_44571( uParam0, uParam1 )) < fParam5)
                {
                    fVar14 = sub_44704( uParam0, uParam1 );
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
                l_U671 = 1;
            }
            else if (l_U671)
            {
                if (fVar15 < fVar19)
                {
                    fVar17 = fParam3;
                    l_U671 = 0;
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
        fVar21 = (l_U955 * fParam3) * fVar14;
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
        fVar21 = (l_U956 * fParam3) * fVar14;
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
                                fVar14 *= l_U948 - l_U949;
                                fVar14 += l_U949;
                                l_U947 = fVar14;
                                if (l_U947 < l_U949)
                                {
                                    l_U947 = l_U949;
                                }
                                if (l_U947 > l_U948)
                                {
                                    l_U947 = l_U948;
                                }
                                FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_3832(), l_U947 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

float sub_43861(unknown uParam0, unknown uParam1)
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

int sub_44188(unknown uParam0, unknown uParam1)
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
    fVar19 = sub_44409( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

float sub_44409(int iParam0, int iParam1)
{
    return ((iParam0->_fU0 * iParam1->_fU0) + (iParam0->_fU4 * iParam1->_fU4)) + (iParam0->_fU8 * iParam1->_fU8);
}

void sub_44571(unknown uParam0, unknown uParam1)
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

void sub_44704(unknown uParam0, unknown uParam1)
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

void sub_45719(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, unknown uParam5, float fParam6, unknown uParam7, float fParam8)
{
    float fVar11;
    float fVar12;
    float fVar13;

    if (NOT (fParam4 < fParam3))
    {
        fParam4 = fParam3 - 0.10000000;
    }
    if (fParam6 > fParam8)
    {
        fParam8 = fParam6;
    }
    fVar11 = uParam7 / fParam8;
    fVar12 = fParam6 / fParam8;
    fVar13 = ((uParam5 - fParam3) * (1.00000000 / 0.40000000)) + fParam3;
    sub_42523( uParam0, uParam1, uParam2, fParam8, fParam4, fParam3, fVar13, fVar11, 1.00000000, fVar12, 1 );
    return;
}

void sub_46139(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, unknown uParam8)
{
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;

    fVar12 = sub_43861( uParam0, uParam1 );
    if (fVar12 < 0.00000000)
    {
        fVar12 *= -1.00000000;
    }
    fVar15 = fParam4 - fParam3;
    if (fVar15 > -0.10000000)
    {
        fVar15 = -0.10000000;
    }
    fVar16 = fParam5 - fParam3;
    if (fVar16 < 0.10000000)
    {
        fVar16 = 0.10000000;
    }
    fVar13 = fVar12;
    if (fVar13 < fParam4)
    {
        fVar13 = fParam4;
    }
    if (fVar13 > fParam5)
    {
        fVar13 = fParam5;
    }
    fVar11 = 0.00000000;
    if (DOES_CHAR_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (sub_44188( uParam1, uParam0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( uParam1 ))
                {
                    fVar11 = fParam7;
                }
                else if (fVar12 < 50.00000000)
                {
                    fVar11 = uParam8;
                }
                else
                {
                    fVar11 = fParam7;
                }
            }
            else if (fVar13 < fParam3)
            {
                fVar11 = uParam8 + (((fVar13 - fParam3) / fVar15) * (fParam7 - uParam8));
            }
            else
            {
                fVar14 = uParam8 - (((fVar13 - fParam3) / fVar16) * (uParam8 - fParam6));
                if (fVar12 > 100.00000000)
                {
                    fVar11 = fVar14;
                }
                else if ((uParam2^) < fVar14)
                {
                    fVar11 = fVar14;
                }
                else
                {
                    fVar11 = (uParam2^);
                }
            }
        }
    }
    if (fVar11 < fParam6)
    {
        fVar11 = fParam6;
    }
    if (fVar11 > fParam7)
    {
        fVar11 = fParam7;
    }
    fVar14 = fVar11 - (uParam2^);
    (uParam2^) += fVar14 * 0.20000000;
    if ((uParam2^) < fParam6)
    {
        (uParam2^) = fParam6;
    }
    if ((uParam2^) > fParam7)
    {
        (uParam2^) = fParam7;
    }
    return;
}

void sub_46823(unknown uParam0, float fParam1)
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
    l_U1322 += fVar5;
    l_U1323 += fVar5;
    l_U1324 += fVar5;
    l_U946 = fParam1;
    if (NOT l_U660)
    {
        if (l_U659)
        {
            sub_30102();
            l_U669 = 0;
            if (IS_PLAYER_PLAYING( sub_3832() ))
            {
                GET_CHAR_COORDINATES( sub_4260(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                CLEAR_AREA( uVar6._fU0, uVar6._fU4, uVar6._fU8, 1000.00000000, 1 );
                PRINTSTRING( "UPDATE_UBER_PLAYBACK - called massive clear area! \n" );
            }
            l_U660 = 1;
        }
    }
    else if (NOT l_U659)
    {
        sub_3545();
        l_U669 = 1;
        l_U660 = 0;
    }
    if (l_U659)
    {
        fParam1 = 1.00000000;
    }
    if (NOT l_U650)
    {
        if (l_U641)
        {
            l_U941 = 0.00000000;
        }
        else
        {
            l_U941 = 1.00000000;
        }
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                if (IS_PLAYER_PLAYING( sub_3832() ))
                {
                    if (sub_44188( sub_4260(), uParam0 ))
                    {
                        l_U658 = 1;
                    }
                    else
                    {
                        l_U658 = 0;
                    }
                }
                l_U938 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                l_U1055 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                SET_PLAYBACK_SPEED( uParam0, (fParam1 * l_U939) * l_U941 );
                if (l_U645)
                {
                    # -NULL-0xbfc99f( uParam0, 1 );
                }
                else
                {
                    # -NULL-0xbfc99f( uParam0, 0 );
                }
                if (l_U657)
                {
                    if (l_U944 > 1000.00000000)
                    {
                        sub_47352( uParam0, l_U938 );
                        sub_47847( uParam0, 100.00000000 );
                        for ( I = 0; I < 3; I++ )
                        {
                            fVar5 = TO_FLOAT( I );
                            fVar5 *= 2000.00000000;
                            fVar5 += l_U938;
                            fVar5 += 4000.00000000;
                            sub_48073( uParam0, fVar5, l_U943 );
                        }
                        l_U944 = 0.00000000;
                    }
                    else
                    {
                        GET_FRAME_TIME( ref fVar5 );
                        fVar5 *= 1000.00000000;
                        l_U944 += fVar5;
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
        if ((IS_SCREEN_FADED_OUT()) || (l_U938 == 0))
        {
            iVar10 = 1;
        }
        if ((NOT l_U672) AND (iVar10))
        {
            if (NOT l_U638)
            {
                sub_48705( uParam0, (fParam1 * l_U939) * l_U941 );
                sub_54164( ref uParam0 );
                sub_54728( ref uParam0 );
            }
            if (l_U643)
            {
                sub_55241( uParam0 );
            }
            if (NOT l_U638)
            {
                sub_56187( uParam0, (fParam1 * l_U939) * l_U941 );
            }
        }
        if (l_U652)
        {
            if (IS_PLAYER_PLAYING( sub_3832() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_4260() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4260(), ref l_U1316 );
                    GET_CAR_COORDINATES( l_U1316, ref l_U1237._fU0, ref l_U1237._fU4, ref l_U1237._fU8 );
                    GET_VEHICLE_QUATERNION( l_U1316, ref l_U904, ref l_U905, ref l_U906, ref l_U907 );
                }
            }
            l_U652 = 0;
        }
        if (l_U651)
        {
            if (DOES_VEHICLE_EXIST( l_U1316 ))
            {
                sub_4373( l_U1317 );
                l_U1317 = l_U1316;
            }
            if (IS_VEH_DRIVEABLE( l_U1317 ))
            {
                SET_CAR_COORDINATES( l_U1317, l_U1237._fU0, l_U1237._fU4, l_U1237._fU8 );
                SET_VEHICLE_QUATERNION( l_U1317, l_U904, l_U905, l_U906, l_U907 );
            }
            l_U937 = l_U940;
            l_U638 = 1;
            l_U651 = 0;
        }
        if (l_U638)
        {
            while (NOT (sub_59911( ref uParam0, l_U937 )))
            {
                WAIT( 0 );
            }
            l_U641 = 1;
        }
    }
    return;
}

void sub_47352(unknown uParam0, unknown uParam1)
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
    sub_3717();
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
    vVar6 = {vVar6 + (vector( l_U957 * -1.00000000, l_U957 * -1.00000000, l_U957 * -1.00000000))};
    vVar9 = {vVar9 + (vector( l_U957, l_U957, l_U957))};
    l_U1249 = {vVar6};
    l_U1252 = {vVar9};
    SWITCH_ROADS_OFF( l_U1243._fU0, l_U1243._fU4, l_U1243._fU8, l_U1246._fU0, l_U1246._fU4, l_U1246._fU8 );
    SWITCH_ROADS_OFF( l_U1249._fU0, l_U1249._fU4, l_U1249._fU8, l_U1252._fU0, l_U1252._fU4, l_U1252._fU8 );
    return;
}

void sub_47847(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT l_U660)
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_PLAYER_PLAYING( sub_3832() ))
            {
                GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                GET_CHAR_COORDINATES( sub_4260(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
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

void sub_48073(unknown uParam0, unknown uParam1, float fParam2)
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
            sub_48202( vVar6, fVar15 );
        }
    }
    return;
}

void sub_48202(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    boolean bVar6;
    unknown uVar7;

    if (NOT l_U660)
    {
        if (NOT (sub_48232( uParam0, uParam3, 150.00000000 )))
        {
            bVar6 = true;
            if (IS_PLAYER_PLAYING( sub_3832() ))
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

int sub_48232(vector vParam0, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT l_U660)
        {
            if (NOT l_U638)
            {
                GET_GAME_VIEWPORT_ID( ref uVar7 );
                if (CAM_IS_SPHERE_VISIBLE( uVar7, vParam0.x, vParam0.y, vParam0.z, uParam3 ))
                {
                    if (IS_PLAYER_PLAYING( sub_3832() ))
                    {
                        GET_CHAR_COORDINATES( sub_4260(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
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

void sub_48705(unknown uParam0, unknown uParam1)
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

    l_U1057 = 0;
    iVar5 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 40; I++ )
        {
            if (I < l_U1056)
            {
                I = l_U1056;
            }
            if (l_U999[I] == 0)
            {
                if ((NOT (l_U1063[I] == 0)) AND ((l_U958[I] < 3000) AND (l_U958[I] > 0)))
                {
                    if (NOT l_U638)
                    {
                        if (l_U938 > (l_U863[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1062++;
                            l_U999[I]++;
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
                        fVar14 = l_U938 - l_U863[I];
                        if (fVar14 >= 0.00000000)
                        {
                            if (fVar14 < (sub_48979( l_U958[I] )))
                            {
                                l_U1062++;
                                l_U999[I]++;
                            }
                            else
                            {
                                sub_49105( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    sub_49105( I, 1090519040 );
                }
            }
            if (l_U999[I] == 1)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U958[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U958[I] );
                }
                else if (l_U1063[I] == sub_3971())
                {
                    if (HAS_MODEL_LOADED( sub_4000() ))
                    {
                        l_U999[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_4000() );
                    }
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    l_U999[I]++;
                }
                else if (HAS_MODEL_LOADED( sub_3913() ))
                {
                    l_U999[I]++;
                }
                else
                {
                    REQUEST_MODEL( sub_3913() );
                };;;;
            }
            if (l_U999[I] == 2)
            {
                if (HAS_MODEL_LOADED( l_U1063[I] ))
                {
                    if (NOT (DOES_VEHICLE_EXIST( l_U1255[I] )))
                    {
                        bVar16 = false;
                        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                        {
                            bVar16 = true;
                        }
                        else if (HAS_MODEL_LOADED( sub_3913() ))
                        {
                            bVar16 = true;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_3913() );
                        }
                        if (bVar16)
                        {
                            bVar17 = false;
                            if ((NOT (sub_50021( l_U1108[I] ))) AND (NOT (sub_48232( l_U1108[I], 5.00000000, 1120403456 ))))
                            {
                                bVar17 = true;
                            }
                            if (l_U664)
                            {
                                bVar17 = true;
                            }
                            if (bVar17)
                            {
                                if (l_U657)
                                {
                                    sub_48202( l_U1108[I], l_U943 );
                                }
                                CREATE_CAR( l_U1063[I], l_U1108[I]._fU0, l_U1108[I]._fU4, l_U1108[I]._fU8, ref l_U1255[I], 1 );
                                if (l_U1063[I] == sub_3971())
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U1255[I], 6, sub_4000(), ref uVar6 );
                                    SET_CHAR_RELATIONSHIP_GROUP( uVar6, 23 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4000() );
                                }
                                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U1255[I], ref uVar6 );
                                }
                                else
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U1255[I], 4, sub_3913(), ref uVar6 );
                                    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3913() );
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar6, 1 );
                                SET_VEHICLE_QUATERNION( l_U1255[I], l_U699[I], l_U740[I], l_U781[I], l_U822[I] );
                                FREEZE_CAR_POSITION( l_U1255[I], 1 );
                                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1255[I], 1 );
                                SET_CAR_COLLISION( l_U1255[I], 0 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1063[I] );
                                sub_50545( l_U1255[I] );
                                GET_INTERIOR_FROM_CAR( l_U1255[I], ref iVar18 );
                                if (NOT (iVar18 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U1255[I] );
                                }
                                l_U1062--;
                                l_U999[I]++;
                            }
                            else if (l_U938 > l_U863[I])
                            {
                                l_U1062--;
                                sub_49105( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    REQUEST_MODEL( l_U1063[I] );
                }
            }
            if (l_U999[I] == 3)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U958[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U958[I] );
                }
                if (IS_VEH_DRIVEABLE( l_U1255[I] ))
                {
                    if (l_U938 > l_U863[I])
                    {
                        if (8 > l_U1046)
                        {
                            if (IS_VEH_DRIVEABLE( uParam0 ))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                {
                                    l_U938 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                }
                            }
                            fVar14 = l_U938 - l_U863[I];
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U958[I] ))
                            {
                                if (fVar14 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U958[I] )))
                                {
                                    GET_CAR_COORDINATES( l_U1255[I], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U958[I], fVar14, ref uVar11 );
                                    if ((sub_48232( uVar11, 5.00000000, 1120403456 )) AND (NOT (sub_48232( uVar8, 5.00000000, 1120403456 ))))
                                    {
                                        sub_49105( I, 1090519040 );
                                    }
                                    else if (sub_51134( ref l_U1255[I], l_U958[I], fVar14, 1, 0, 0 ))
                                    {
                                        SET_CAR_COLLISION( l_U1255[I], 1 );
                                        SET_PLAYBACK_SPEED( l_U1255[I], uParam1 );
                                        sub_51500( ref l_U1255[I] );
                                        l_U1046++;
                                        l_U999[I]++;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "Traffic car removed from processing (check A) car = " );
                                    PRINTINT( I );
                                    PRINTSTRING( "/n" );
                                    sub_49105( I, 1090519040 );
                                }
                            }
                        }
                        else
                        {
                            PRINTSTRING( "Traffic car removed from processing (check B) car = " );
                            PRINTINT( I );
                            PRINTSTRING( "/n" );
                            sub_49105( I, 1090519040 );
                        }
                    }
                    else if ((NOT l_U673) AND (l_U658))
                    {
                        PRINTSTRING( "Traffic car removed from processing (check C) car = " );
                        PRINTINT( I );
                        PRINTSTRING( "/n" );
                        sub_49105( I, 1090519040 );
                    }
                }
                else
                {
                    PRINTSTRING( "Traffic car removed from processing (check D) car = " );
                    PRINTINT( I );
                    PRINTSTRING( "/n" );
                    sub_49105( I, 1090519040 );
                }
            }
            if (l_U999[I] == 4)
            {
                if (IS_VEH_DRIVEABLE( l_U1255[I] ))
                {
                    SET_CAR_COLLISION( l_U1255[I], 1 );
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1255[I] ))
                    {
                        GET_DRIVER_OF_CAR( l_U1255[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                if (IS_PLAYER_PLAYING( sub_3832() ))
                                {
                                    if ((NOT l_U653) AND ((NOT l_U641) AND ((NOT l_U644) AND (IS_CHAR_TOUCHING_VEHICLE( sub_4260(), l_U1255[I] )))))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( sub_4260() ))
                                        {
                                            bVar16 = false;
                                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4260(), ref uVar7 );
                                            if (NOT (sub_52358( l_U1255[I], uVar7 )))
                                            {
                                                bVar16 = true;
                                            }
                                            if (NOT bVar16)
                                            {
                                                if (sub_52520( uVar7, l_U1255[I] ))
                                                {
                                                    bVar16 = true;
                                                }
                                            }
                                            if (bVar16)
                                            {
                                                sub_52751( l_U1255[I] );
                                                l_U999[I]++;
                                            }
                                        }
                                    }
                                    else if (sub_52520( l_U1255[I], uParam0 ))
                                    {
                                        SET_PLAYBACK_SPEED( l_U1255[I], uParam1 );
                                    }
                                    else if ((NOT l_U653) AND (sub_52878( uParam0, l_U1255[I] )))
                                    {
                                        sub_52751( l_U1255[I] );
                                        l_U999[I]++;
                                    }
                                    else
                                    {
                                        SET_PLAYBACK_SPEED( l_U1255[I], uParam1 );
                                    }
                                    if (l_U646)
                                    {
                                        # -NULL-0xbfc99f( l_U1255[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U1255[I], 0 );
                                    }
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1255[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1255[I] );
                        }
                    }
                    else
                    {
                        l_U999[I]++;
                    }
                }
                else
                {
                    l_U999[I]++;
                }
            }
            if (l_U999[I] == 5)
            {
                if (IS_VEH_DRIVEABLE( l_U1255[I] ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1255[I] )))
                    {
                        l_U999[I]++;
                    }
                    else
                    {
                        GET_DRIVER_OF_CAR( l_U1255[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                SET_PLAYBACK_SPEED( l_U1255[I], uParam1 );
                                if (l_U646)
                                {
                                    # -NULL-0xbfc99f( l_U1255[I], 1 );
                                }
                                else
                                {
                                    # -NULL-0xbfc99f( l_U1255[I], 0 );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1255[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1255[I] );
                        }
                        if (HAS_CAR_RECORDING_BEEN_LOADED( l_U958[I] ))
                        {
                            if (l_U938 > (l_U863[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U958[I] ))))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1255[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1255[I] );
                        }
                    }
                }
                else
                {
                    l_U999[I]++;
                }
            }
            if (l_U999[I] == 6)
            {
                if (NOT (IS_CAR_DEAD( l_U1255[I] )))
                {
                    GET_CAR_SPEED( l_U1255[I], ref uVar15 );
                }
                sub_53991( ref l_U1255[I] );
                l_U1046--;
                sub_49105( I, uVar15 );
            }
            l_U1057++;
        }
    }
    else
    {
        sub_4046();
    }
    return;
}

void sub_48979(unknown uParam0)
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

void sub_49105(int iParam0, float fParam1)
{
    int I;
    unknown uVar5;

    if (NOT (l_U1063[iParam0] == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1063[iParam0] );
    }
    if (DOES_VEHICLE_EXIST( l_U1255[iParam0] ))
    {
        if (IS_VEH_DRIVEABLE( l_U1255[iParam0] ))
        {
            GET_DRIVER_OF_CAR( l_U1255[iParam0], ref uVar5 );
            if (DOES_CHAR_EXIST( uVar5 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 0 );
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U1255[iParam0] ))
    {
        sub_4196( l_U1255[iParam0] );
        SET_CAR_COLLISION( l_U1255[iParam0], 1 );
        FREEZE_CAR_POSITION( l_U1255[iParam0], 0 );
    }
    if (NOT l_U642)
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
            sub_49387( uVar5 );
        }
        sub_4373( l_U1255[iParam0] );
    }
    else if (DOES_CHAR_EXIST( uVar5 ))
    {
        DELETE_CHAR( ref uVar5 );
    }
    if (DOES_VEHICLE_EXIST( l_U1255[iParam0] ))
    {
        DELETE_CAR( ref l_U1255[iParam0] );
    }
    if (iParam0 >= l_U1056)
    {
        for ( I = 0; I < 40; I++ )
        {
            if (NOT (l_U999[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 39)
                    {
                        l_U1056 = iParam0 + 1;
                    }
                }
                I = 40;
            }
        }
    }
    l_U999[iParam0] = 99;
    return;
}

void sub_49387(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_50021(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U674[I] ))
        {
            if (LOCATE_CAR_3D( l_U674[I], uParam0._fU0, uParam0._fU4, uParam0._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_50545(unknown uParam0)
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

int sub_51134(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5)
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

void sub_51500(unknown uParam0)
{
    int iVar3;

    if (l_U654)
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            iVar3 = sub_51534();
            if (NOT (iVar3 == -1))
            {
                l_U674[iVar3] = (uParam0^);
                if (IS_VEH_DRIVEABLE( l_U674[iVar3] ))
                {
                    ADD_BLIP_FOR_CAR( l_U674[iVar3], ref l_U683[iVar3] );
                }
            }
        }
    }
    return;
}

int sub_51534()
{
    int Result;

    for ( Result = 0; Result < 8; Result++ )
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U674[Result] )))
        {
            return Result;
        }
    }
    return -1;
}

int sub_52358(unknown uParam0, unknown uParam1)
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
    fVar10 = sub_44409( ref uVar4, ref uVar7 );
    if (fVar10 < 0.00000000)
    {
        return 0;
    }
    return 1;
}

int sub_52520(unknown uParam0, unknown uParam1)
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
    fVar19 = sub_44409( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_52751(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        sub_4196( uParam0 );
        CHANGE_PLAYBACK_TO_USE_AI( uParam0 );
    }
    return;
}

int sub_52878(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;

    fVar4 = sub_52891( uParam0, uParam1 );
    fVar5 = sub_53115( uParam0, uParam1 );
    if (fVar4 > fVar5)
    {
        return 1;
    }
    return 0;
}

float sub_52891(unknown uParam0, unknown uParam1)
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

float sub_53115(unknown uParam0, unknown uParam1)
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

void sub_53991(unknown uParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (l_U674[I] == (uParam0^))
        {
            l_U674[I] = nil;
            if (DOES_BLIP_EXIST( l_U683[I] ))
            {
                REMOVE_BLIP( l_U683[I] );
            }
            return;
        }
    }
    return;
}

void sub_54164(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1056 - 5;
    iVar5 = iVar4 + 15;
    if (l_U1322 > 4000.00000000)
    {
        if (IS_PLAYER_PLAYING( sub_3832() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_4260() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4260(), ref uVar6 );
            }
            for ( I = 0; I < 40; I++ )
            {
                if (I < iVar4)
                {
                    I = iVar4;
                }
                if (DOES_VEHICLE_EXIST( l_U1255[I] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1255[I] ))
                    {
                        if ((sub_54333( l_U1255[I], uVar6 )) || (sub_54333( l_U1255[I], (uParam0^) )))
                        {
                            SOUND_CAR_HORN( l_U1255[I], 3000 );
                            l_U1322 = 0.00000000;
                        }
                    }
                }
                if (I >= iVar5)
                {
                    I = 40;
                }
            }
        }
    }
    return;
}

int sub_54333(unknown uParam0, unknown uParam1)
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
                if (NOT (sub_52358( uParam0, uParam1 )))
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

void sub_54728(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1056 - 5;
    iVar5 = iVar4 + 15;
    if (IS_PLAYER_PLAYING( sub_3832() ))
    {
        switch (l_U1320)
        {
            case 0:
            if (l_U1323 > 3000.00000000)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_4260() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4260(), ref uVar6 );
                }
                for ( I = 0; I < 40; I++ )
                {
                    if (I < iVar4)
                    {
                        I = iVar4;
                    }
                    if (DOES_VEHICLE_EXIST( l_U1255[I] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U1255[I] ))
                        {
                            if ((sub_54333( l_U1255[I], uVar6 )) || (sub_54333( l_U1255[I], (uParam0^) )))
                            {
                                l_U1319 = l_U1255[I];
                                l_U1323 = 0.00000000;
                                I = 40;
                                l_U1320++;
                            }
                        }
                    }
                    if (I >= iVar5)
                    {
                        I = 40;
                    }
                }
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( l_U1319 ))
            {
                if (l_U1323 < 1000.00000000)
                {
                    if (l_U1324 > 100.00000000)
                    {
                        if (NOT l_U1321)
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U1319, 2.00000000 );
                            l_U1321 = 1;
                        }
                        else
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U1319, 1.00000000 );
                            l_U1321 = 0;
                        }
                        l_U1324 = 0.00000000;
                    }
                }
                else
                {
                    SET_CAR_LIGHT_MULTIPLIER( l_U1319, 1.00000000 );
                    l_U1320 = 0;
                    l_U1323 = 0.00000000;
                    l_U1321 = 0;
                }
            }
            else
            {
                l_U1320 = 0;
                l_U1323 = 0.00000000;
                l_U1321 = 0;
            }
            break;
        }
    }
    return;
}

void sub_55241(unknown uParam0)
{
    int I;
    int iVar4;

    l_U1059 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 1; I++ )
        {
            if (I < l_U1058)
            {
                I = l_U1058;
            }
            if (l_U1044[I] == 0)
            {
                if (NOT (l_U1104[I] == 0))
                {
                    if (LOCATE_CAR_2D( uParam0, l_U1229[I]._fU0, l_U1229[I]._fU4, l_U935, l_U935, 0 ))
                    {
                        l_U1060++;
                        l_U1044[I]++;
                    }
                }
                else
                {
                    sub_55421( I );
                }
            }
            if (l_U1044[I] == 1)
            {
                if (6 > l_U1049)
                {
                    if (HAS_MODEL_LOADED( l_U1104[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U1305[I] )))
                        {
                            if ((l_U664) || ((l_U638) || (NOT (sub_48232( l_U1229[I], 5.00000000, 1120403456 )))))
                            {
                                if (l_U657)
                                {
                                    sub_48202( l_U1229[I], l_U943 );
                                }
                                CREATE_CAR( l_U1104[I], l_U1229[I]._fU0, l_U1229[I]._fU4, l_U1229[I]._fU8, ref l_U1305[I], 1 );
                                SET_VEHICLE_QUATERNION( l_U1305[I], l_U920[I], l_U922[I], l_U924[I], l_U926[I] );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1104[I] );
                                if (IS_CAR_MODEL( l_U1305[I], sub_3971() ))
                                {
                                    SWITCH_CAR_SIREN( l_U1305[I], 1 );
                                }
                                if (IS_CAR_MODEL( l_U1305[I], sub_3942() ))
                                {
                                    CHANGE_CAR_COLOUR( l_U1305[I], 0, 0 );
                                }
                                GET_INTERIOR_FROM_CAR( l_U1305[I], ref iVar4 );
                                if (NOT (iVar4 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U1305[I] );
                                }
                                l_U1060--;
                                l_U1049++;
                                l_U1044[I]++;
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1104[I] );
                    }
                }
            }
            if (l_U1044[I] == 2)
            {
                if (NOT (sub_52520( l_U1305[I], uParam0 )))
                {
                    if (NOT l_U642)
                    {
                        sub_4373( l_U1305[I] );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U1305[I] );
                    }
                    l_U1049--;
                    sub_55421( I );
                }
            }
            l_U1059++;
            if (l_U1059 >= 15)
            {
                return;
            }
        }
    }
    else
    {
        sub_4497();
    }
    return;
}

void sub_55421(int iParam0)
{
    int I;

    if (iParam0 >= l_U1058)
    {
        for ( I = 0; I < 1; I++ )
        {
            if (NOT (l_U1044[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 0)
                    {
                        l_U1058 = iParam0 + 1;
                    }
                }
                I = 1;
            }
        }
    }
    l_U1044[iParam0] = 99;
    return;
}

void sub_56187(unknown uParam0, unknown uParam1)
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
        for ( I = 0; I < 1; I++ )
        {
            if ((NOT (l_U1106[I] == 0)) AND ((l_U1040[I] < 3000) AND (l_U1040[I] > 0)))
            {
                if (l_U1042[I] == 0)
                {
                    if (NOT l_U638)
                    {
                        if (l_U938 > (l_U916[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1042[I]++;
                            l_U1061++;
                        }
                    }
                    else
                    {
                        fVar13 = l_U938 - l_U916[I];
                        fVar13 *= l_U918[I];
                        if (fVar13 >= 0.00000000)
                        {
                            if (fVar13 < (sub_48979( l_U1040[I] )))
                            {
                                l_U1042[I]++;
                                l_U1061++;
                            }
                            else
                            {
                                l_U1042[I] = 99;
                            }
                        }
                    }
                }
                if (l_U1042[I] == 1)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1040[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1040[I] );
                    }
                    else if (l_U1106[I] == sub_3971())
                    {
                        if (HAS_MODEL_LOADED( sub_4000() ))
                        {
                            l_U1042[I]++;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_4000() );
                        }
                    }
                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                    {
                        l_U1042[I]++;
                    }
                    else if (HAS_MODEL_LOADED( sub_3913() ))
                    {
                        l_U1042[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_3913() );
                    };;;;
                }
                if (l_U1042[I] == 2)
                {
                    if (HAS_MODEL_LOADED( l_U1106[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U1307[I] )))
                        {
                            bVar15 = false;
                            if (l_U1106[I] == sub_3971())
                            {
                                if (HAS_MODEL_LOADED( sub_4000() ))
                                {
                                    bVar15 = true;
                                }
                                else
                                {
                                    REQUEST_MODEL( sub_4000() );
                                }
                            }
                            else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                            {
                                bVar15 = true;
                            }
                            else if (HAS_MODEL_LOADED( sub_3913() ))
                            {
                                bVar15 = true;
                            }
                            else
                            {
                                REQUEST_MODEL( sub_3913() );
                            };;;
                            if (bVar15)
                            {
                                if ((l_U664) || (NOT (sub_48232( l_U1233[I], 5.00000000, 1120403456 ))))
                                {
                                    CREATE_CAR( l_U1106[I], l_U1233[I]._fU0, l_U1233[I]._fU4, l_U1233[I]._fU8, ref l_U1307[I], 1 );
                                    if (l_U1106[I] == sub_3971())
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U1307[I], 6, sub_4000(), ref uVar5 );
                                        SET_CHAR_RELATIONSHIP_GROUP( uVar5, 23 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4000() );
                                    }
                                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                    {
                                        CREATE_RANDOM_CHAR_AS_DRIVER( l_U1307[I], ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                    }
                                    else
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U1307[I], 26, sub_3913(), ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3913() );
                                    }
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 1 );
                                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( uVar5, 1 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( uVar5, 0 );
                                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( uVar5, 0 );
                                    sub_49387( uVar5 );
                                    SET_VEHICLE_QUATERNION( l_U1307[I], l_U908[I], l_U910[I], l_U912[I], l_U914[I] );
                                    FREEZE_CAR_POSITION( l_U1307[I], 1 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1106[I] );
                                    sub_50545( l_U1307[I] );
                                    GET_INTERIOR_FROM_CAR( l_U1307[I], ref iVar16 );
                                    if (NOT (iVar16 == nil))
                                    {
                                        # -NULL-0xbfc5b5( l_U1307[I] );
                                    }
                                    l_U1042[I]++;
                                    l_U1061--;
                                }
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1106[I] );
                    }
                }
                if (l_U1042[I] == 3)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1040[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1040[I] );
                    }
                    if (IS_VEH_DRIVEABLE( l_U1307[I] ))
                    {
                        if (l_U938 > l_U916[I])
                        {
                            if (4 > l_U1048)
                            {
                                if (IS_VEH_DRIVEABLE( uParam0 ))
                                {
                                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                    {
                                        l_U938 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                    }
                                }
                                fVar13 = l_U938 - l_U916[I];
                                fVar13 *= l_U918[I];
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1040[I] ))
                                {
                                    if (fVar13 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1040[I] )))
                                    {
                                        GET_CAR_COORDINATES( l_U1307[I], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                        GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U1040[I], fVar13, ref uVar10 );
                                        if ((NOT l_U664) AND ((sub_48232( uVar10, 5.00000000, 1120403456 )) AND (NOT (sub_48232( uVar7, 5.00000000, 1120403456 )))))
                                        {
                                            l_U1048++;
                                            l_U1042[I]++;
                                        }
                                        else if (sub_51134( ref l_U1307[I], l_U1040[I], fVar13, 1, 0, 0 ))
                                        {
                                            SET_PLAYBACK_SPEED( l_U1307[I], uParam1 * l_U918[I] );
                                            if (IS_VEH_DRIVEABLE( l_U1307[I] ))
                                            {
                                                if (l_U1106[I] == sub_3971())
                                                {
                                                    SWITCH_CAR_SIREN( l_U1307[I], 1 );
                                                }
                                            }
                                            if (l_U655)
                                            {
                                                # -NULL-0xbfc99f( l_U1307[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U1307[I], 0 );
                                            }
                                            l_U1048++;
                                            l_U1042[I]++;
                                        }
                                    }
                                    else
                                    {
                                        l_U1048++;
                                        l_U1042[I]++;
                                    }
                                }
                            }
                            else
                            {
                                SCRIPT_ASSERT( "Too many set peice cars playing back at once" );
                                l_U1048++;
                                l_U1042[I]++;
                            }
                        }
                    }
                    else
                    {
                        l_U1048++;
                        l_U1042[I]++;
                    }
                }
                if (l_U1042[I] == 4)
                {
                    if (IS_VEH_DRIVEABLE( l_U1307[I] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1307[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U1307[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    if (IS_PLAYER_PLAYING( sub_3832() ))
                                    {
                                        if ((NOT l_U641) AND ((NOT l_U644) AND (IS_CHAR_TOUCHING_VEHICLE( sub_4260(), l_U1307[I] ))))
                                        {
                                            if (IS_CHAR_IN_ANY_CAR( sub_4260() ))
                                            {
                                                bVar15 = false;
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4260(), ref uVar6 );
                                                if (NOT (sub_58343( l_U1307[I], uVar6, 45.00000000 )))
                                                {
                                                    bVar15 = true;
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_52520( uVar6, l_U1307[I] ))
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
                                                    if (sub_58628( uVar6, l_U1307[I], 15.00000000 ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (bVar15)
                                                {
                                                    sub_52751( l_U1307[I] );
                                                    l_U1042[I]++;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            SET_PLAYBACK_SPEED( l_U1307[I], uParam1 * l_U918[I] );
                                            if (l_U655)
                                            {
                                                # -NULL-0xbfc99f( l_U1307[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U1307[I], 0 );
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1307[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1307[I] );
                            }
                        }
                        else
                        {
                            l_U1042[I]++;
                        }
                    }
                    else
                    {
                        l_U1042[I]++;
                    }
                }
                if (l_U1042[I] == 5)
                {
                    if (IS_VEH_DRIVEABLE( l_U1307[I] ))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1307[I] )))
                        {
                            l_U1042[I]++;
                        }
                        else
                        {
                            GET_DRIVER_OF_CAR( l_U1307[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    SET_PLAYBACK_SPEED( l_U1307[I], uParam1 * l_U918[I] );
                                    if (l_U655)
                                    {
                                        # -NULL-0xbfc99f( l_U1307[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U1307[I], 0 );
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1307[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1307[I] );
                            }
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1040[I] ))
                            {
                                if (l_U938 > (l_U916[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1040[I] ))))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1307[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1307[I] );
                            }
                        }
                    }
                    else
                    {
                        l_U1042[I]++;
                    }
                }
                if (l_U1042[I] == 6)
                {
                    if (NOT (l_U1307[I] == l_U1318))
                    {
                        if (IS_VEH_DRIVEABLE( l_U1307[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U1307[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( uVar5, 29, ref iVar17 );
                                    if (iVar17 == 7)
                                    {
                                        GET_CAR_SPEED( l_U1307[I], ref fVar14 );
                                        if (fVar14 < 8.00000000)
                                        {
                                            fVar14 = 8.00000000;
                                        }
                                        SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fVar14 );
                                    }
                                }
                            }
                        }
                        if (NOT l_U642)
                        {
                            sub_4373( l_U1307[I] );
                        }
                        else if (DOES_VEHICLE_EXIST( l_U1307[I] ))
                        {
                            DELETE_CAR( ref l_U1307[I] );
                        }
                    }
                    l_U1048--;
                    l_U1042[I] = 99;
                }
            }
        }
    }
    else
    {
        sub_4679();
    }
    return;
}

int sub_58343(unknown uParam0, unknown uParam1, float fParam2)
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
    fVar11 = sub_44409( ref uVar5, ref uVar8 );
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

int sub_58628(unknown uParam0, unknown uParam1, float fParam2)
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

int sub_59911(unknown uParam0, unknown uParam1)
{
    if (NOT l_U667)
    {
        l_U638 = 1;
        sub_4897();
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FIX_CAR( (uParam0^) );
            }
            if (NOT (l_U1055 == -1))
            {
                while (NOT (sub_51134( uParam0, l_U1055, uParam1, 1, 0, 0 )))
                {
                    WAIT( 0 );
                }
                if (NOT l_U649)
                {
                    l_U641 = 1;
                    l_U941 = 0.00000000;
                    l_U1056 = 0;
                    l_U1058 = 0;
                    l_U1046 = 0;
                    l_U1048 = 0;
                    l_U1049 = 0;
                    l_U1060 = 0;
                    l_U1061 = 0;
                    l_U1062 = 0;
                }
            }
        }
        l_U667 = 1;
    }
    else if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
        {
            SET_PLAYBACK_SPEED( (uParam0^), (1.00000000 * l_U939) * l_U941 );
            sub_51134( uParam0, l_U1055, uParam1, 1, 0, 0 );
        }
    }
    l_U938 = uParam1;
    sub_56187( (uParam0^), (1.00000000 * l_U939) * l_U941 );
    sub_48705( (uParam0^), (1.00000000 * l_U939) * l_U941 );
    if ((l_U1062 == 0) AND ((l_U1061 == 0) AND (l_U1060 == 0)))
    {
        l_U641 = 0;
        l_U638 = 0;
        l_U667 = 0;
        return 1;
    }
    return 0;
}

void sub_60514()
{
    while (NOT (sub_15349( 1, 1 )))
    {
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "missPass" );
    while (NOT (HAVE_ANIMS_LOADED( "missPass" )))
    {
        WAIT( 0 );
    }
    LOAD_SCENE( 819.02910000, -249.29330000, 14.19580000 );
    if (NOT (IS_CHAR_DEAD( l_U1477 )))
    {
        if (IS_GROUP_MEMBER( l_U1477, l_U627 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U1477 );
        }
    }
    sub_8110();
    CLEAR_AREA( 819.02910000, -249.29330000, 14.19580000, 30.00000000, 1 );
    SWITCH_ROADS_OFF( 821.25000000, -455.20000000, 11.15000000, 841.89000000, -252.34000000, 16.74000000 );
    if (NOT (IS_CAR_DEAD( l_U1455 )))
    {
        SET_CAR_HEADING( l_U1455, 267.82180000 );
        SET_CAR_COORDINATES_NO_OFFSET( l_U1455, 819.01970000, -249.29390000, 14.80000000 );
        SET_VEHICLE_QUATERNION( l_U1455, -0.01510000, 0.00280000, 0.72000000, -0.69379990 );
        SET_CAR_ON_GROUND_PROPERLY( l_U1455 );
        SET_CAR_ENGINE_ON( l_U1455, 1, 1 );
        WAIT( 200 );
    }
    else
    {
        CREATE_CAR( -1932515764, 819.01970000, -249.29390000, 14.80000000, ref l_U1455, 1 );
        SET_CAR_COORDINATES_NO_OFFSET( l_U1455, 819.01970000, -249.29390000, 14.80000000 );
        SET_VEHICLE_QUATERNION( l_U1455, -0.01510000, 0.00280000, 0.72000000, -0.69379990 );
        SET_CAR_ON_GROUND_PROPERLY( l_U1455 );
        SET_CAR_ENGINE_ON( l_U1455, 1, 1 );
        CHANGE_CAR_COLOUR( l_U1455, 0, 1 );
        SET_EXTRA_CAR_COLOURS( l_U1455, 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( l_U1455, 15.90000000 );
    }
    if ((NOT (IS_CAR_DEAD( l_U1455 ))) AND (NOT (IS_CHAR_DEAD( l_U1477 ))))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U1477 )))
        {
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1477, l_U1455, 0 );
        }
        else if (NOT (IS_CHAR_IN_CAR( l_U1477, l_U1455 )))
        {
            WARP_CHAR_FROM_CAR_TO_CAR( l_U1477, l_U1455, 0 );
        }
        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U628, l_U1455 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U628 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U628, 821.25000000, -455.20000000, 11.15000000 );
                WARP_CHAR_INTO_CAR( l_U628, l_U1455 );
            }
            else
            {
                WARP_CHAR_INTO_CAR( l_U628, l_U1455 );
            }
        }
    }
    CLEAR_HELP();
    CLEAR_PRINTS();
    SET_CAM_POS( l_U626, 820.66540000, -248.41330000, 15.23081000 );
    SET_CAM_ROT( l_U626, 2.73772700, 0.00000000, 120.21180000 );
    SET_CAM_FOV( l_U626, 35.80000000 );
    SET_CAM_NEAR_DOF( l_U626, 1.00000000 );
    SET_CAM_FAR_DOF( l_U626, 5.00000000 );
    sub_16467( ref l_U626, 1 );
    sub_16524( 1 );
    l_U1338 = 1;
    SETTIMERA( 0 );
    WAIT( 500 );
    LOAD_SCENE( 819.02910000, -249.29330000, 14.19580000 );
    DO_SCREEN_FADE_IN( 500 );
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    while (l_U1338)
    {
        if ((l_U563[0] == 0) AND (TIMERA() > 2000))
        {
            OPEN_SEQUENCE_TASK( ref l_U1458 );
            TASK_LEAVE_ANY_CAR( 0 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U628 );
            TASK_PLAY_ANIM( 0, "wave_in_car", "MISSPASS", 8.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U1458 );
            if (NOT (IS_CHAR_DEAD( l_U1477 )))
            {
                TASK_PERFORM_SEQUENCE( l_U1477, l_U1458 );
            }
            sub_14103( "R4_DROPLD", ref l_U1373, 8, 1 );
            CLEAR_SEQUENCE_TASK( l_U1458 );
            SETTIMERA( 0 );
            l_U563[0] = 1;
        }
        if ((l_U563[0] == 1) AND ((l_U563[1] == 0) AND (NOT (sub_15076( l_U1373 )))))
        {
            OPEN_SEQUENCE_TASK( ref l_U1458 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 816.89960000, -260.82170000, 15.33780000, 3, 5000, 0.50000000 );
            CLOSE_SEQUENCE_TASK( l_U1458 );
            if (NOT (IS_CHAR_DEAD( l_U1477 )))
            {
                TASK_PERFORM_SEQUENCE( l_U1477, l_U1458 );
            }
            SET_CAM_POS( l_U626, 823.46540000, -247.74610000, 14.94282000 );
            SET_CAM_ROT( l_U626, 5.02761600, 0.00000000, 115.66400000 );
            SET_CAM_FOV( l_U626, 55.00000000 );
            SET_CAM_NEAR_DOF( l_U626, 1.00000000 );
            SET_CAM_FAR_DOF( l_U626, 20.00000000 );
            l_U563[1] = 1;
        }
        if ((l_U563[1] == 1) AND ((l_U563[2] == 0) AND (TIMERA() > 6000)))
        {
            SETTIMERA( 0 );
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            l_U563[2] = 1;
        }
        if (sub_62080())
        {
            l_U1336 = 1;
            l_U1338 = 0;
            PRINTSTRING( "skip button pressed\n" );
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
        }
        if ((NOT (sub_15076( l_U1373 ))) AND ((l_U563[2] == 1) AND (TIMERA() > 6000)))
        {
            sub_13121( ref l_U1373, 0 );
            l_U1338 = 0;
        }
        PRINTSTRING( "in cutscene loop\n" );
        WAIT( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U1455 )))
    {
        SET_CAR_PROOFS( l_U1455, 0, 0, 0, 0, 0 );
    }
    DELETE_CHAR( ref l_U1477 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 821.25000000, -455.20000000, 11.15000000, 841.89000000, -252.34000000, 16.74000000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    sub_16467( ref l_U626, 0 );
    sub_16467( ref l_U624, 0 );
    sub_16524( 0 );
    PRINTSTRING( "kill cameras\n" );
    if (l_U1336 == 1)
    {
        PRINTSTRING( "fade in\n" );
        DO_SCREEN_FADE_IN( 500 );
    }
    return;
}

int sub_62080()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_63596(unknown uParam0)
{
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CURRENT_CHAR_WEAPON( uParam0, ref Result );
    }
    return Result;
}

void sub_63868()
{
    vector vVar2;
    float fVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (l_U1392[l_U1388] == 0)
    {
        CLEAR_HELP();
        if (DOES_CHAR_EXIST( l_U1473[2] ))
        {
            DELETE_CHAR( ref l_U1473[2] );
        }
        sub_16234();
        CREATE_CHAR( 26, 1468450703, 780.65920000, 472.63660000, 23.36000000, ref l_U1473[2], 1 );
        SET_CHAR_COORDINATES_NO_OFFSET( l_U1473[2], 780.65920000, 472.63660000, 23.36000000 );
        SET_CHAR_HEADING( l_U1473[2], 180.00000000 );
        TASK_PLAY_ANIM( l_U1473[2], "scared_02", "missRoman4", 1000.00000000, 1, 0, 0, 0, -1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1473[2] );
        sub_7161( 4, l_U1473[2], "DARDAN", 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U1473[2], 1 );
        SET_CHAR_CAN_SMASH_GLASS( l_U1473[2], 1 );
        SET_CHAR_PROOFS( l_U1473[2], 0, 0, 1, 1, 0 );
        sub_8110();
        SET_CAM_POS( l_U626, 787.13840000, 481.88930000, 22.46888000 );
        SET_CAM_ROT( l_U626, 6.71691700, -0.00000000, 126.22830000 );
        SET_CAM_NEAR_DOF( l_U626, 5.00000000 );
        SET_CAM_FAR_DOF( l_U626, 45.00000000 );
        sub_16467( ref l_U626, 1 );
        sub_16524( 1 );
        WAIT( 0 );
        if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            SWITCH_PED_TO_ANIMATED( l_U1473[2], 1 );
            SET_CHAR_HEALTH( l_U1473[2], 200 );
            SET_CHAR_COORDINATES( l_U628, 779.17350000, 470.35070000, 22.33000000 );
            FREEZE_CHAR_POSITION( l_U1473[2], 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U1473[2] );
            SET_CHAR_COORDINATES( l_U1473[2], 780.65920000, 472.73660000, 22.27600000 );
            SET_CHAR_HEADING( l_U1473[2], 180.00000000 );
            while (IS_CHAR_IN_AIR( l_U1473[2] ))
            {
                WAIT( 0 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            SWITCH_PED_TO_RAGDOLL( l_U1473[2], 0, 60000, 1, 1, 1, 0 );
            CREATE_NM_MESSAGE( 1, 79 );
            PRINTSTRING( "Sending natural motion message NM_BALANCE_MSG!" );
            PRINTNL();
            SEND_NM_MESSAGE( l_U1473[2] );
        }
        SETTIMERA( 0 );
        l_U1392[l_U1388] = 1;
    }
    if ((l_U563[0] == 0) AND (TIMERA() > 0))
    {
        CREATE_NM_MESSAGE( 1, 114 );
        vVar2 = {0.00000000, 1.00000000, 0.00000000};
        fVar5 = 0.40000000;
        SET_NM_MESSAGE_VEC3( 116, vVar2 );
        SET_NM_MESSAGE_FLOAT( 117, fVar5 );
        SET_NM_MESSAGE_BOOL( 118, 1 );
        PRINTSTRING( "Sending natural motion message NM_BALANCE_LEAN_MSG!" );
        PRINTNL();
        if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            SEND_NM_MESSAGE( l_U1473[2] );
        }
        SETTIMERA( 0 );
        l_U563[0] = 1;
    }
    if ((TIMERA() > 360) AND ((l_U563[8] == 0) AND (l_U563[0] == 1)))
    {
        SET_TIME_SCALE( 0.50000000 );
        SMASH_GLASS_ON_OBJECT( 779.90000000, 473.60000000, 24.40000000, 5.00000000, 322426830, 0.75000000 );
        PLAY_SOUND_FROM_POSITION( -1, "R4_BLEED_OUT_GLASS_SMASH", 779.90000000, 473.60000000, 24.40000000 );
        l_U563[8] = 1;
    }
    if ((l_U563[0] == 1) AND ((l_U563[1] == 0) AND (TIMERA() > 700)))
    {
        if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            APPLY_FORCE_TO_PED( l_U1473[2], 1, 0.20000000, 0.95000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 7, 0, 1, 1 );
            TASK_LOOK_AT_CHAR( l_U628, l_U1473[2], 10000, 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U628, 780.78280000, 473.02100000, 23.35510000, 2, 10000, 0.50000000 );
        }
        sub_14103( "R4_FALLS", ref l_U1373, 8, 1 );
        SETTIMERA( 0 );
        l_U563[1] = 1;
    }
    if ((l_U563[1] == 1) AND ((l_U563[2] == 0) AND (TIMERA() > 1000)))
    {
        SET_TIME_SCALE( 1.00000000 );
        SET_CAM_POS( l_U626, 789.55220000, 478.20850000, 12.50268000 );
        SET_CAM_ROT( l_U626, 35.86317000, 0.00000000, 106.60320000 );
        SET_CAM_NEAR_DOF( l_U626, 5.00000000 );
        SET_CAM_FAR_DOF( l_U626, 25.00000000 );
        if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            POINT_CAM_AT_PED( l_U626, l_U1473[2] );
        }
        l_U563[2] = 1;
    }
    if ((l_U563[2] == 1) AND ((l_U563[3] == 0) AND (TIMERA() > 1000)))
    {
        if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            CREATE_NM_MESSAGE( 0, 114 );
            SEND_NM_MESSAGE( l_U1473[2] );
        }
        SETTIMERA( 0 );
        l_U563[3] = 1;
    }
    if ((l_U563[3] == 1) AND ((l_U563[4] == 0) AND (TIMERA() > 1000)))
    {
        SETTIMERA( 0 );
        l_U563[4] = 1;
    }
    if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
    {
        GET_CHAR_COORDINATES( l_U1473[2], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    if ((l_U563[7] == 0) AND ((uVar6._fU8 > 13.00000000) AND ((TIMERA() > 2000) AND (l_U563[4] == 1))))
    {
        CREATE_NM_MESSAGE( 1, 0 );
        SEND_NM_MESSAGE( l_U1473[2] );
        CREATE_NM_MESSAGE( 1, 59 );
        SET_NM_MESSAGE_BOOL( 66, 1 );
        PRINTSTRING( "Sending natural motion message NM_WINDMILL_MSG!" );
        PRINTNL();
        SEND_NM_MESSAGE( l_U1473[2] );
        CREATE_NM_MESSAGE( 1, 67 );
        PRINTSTRING( "Sending natural motion message NM_PEDAL_MSG!" );
        PRINTNL();
        SEND_NM_MESSAGE( l_U1473[2] );
        APPLY_FORCE_TO_PED( l_U1473[2], 0, 0.00000000, 0.52500000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 7, 0, 1, 1 );
        l_U563[7] = 1;
    }
    if (((l_U563[6] == 0) || (l_U563[5] == 0)) AND (l_U563[4] == 1))
    {
        APPLY_FORCE_TO_PED( l_U1473[2], 0, 0.00000000, 0.50000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 7, 0, 1, 1 );
    }
    if ((l_U563[5] == 0) AND ((l_U563[4] == 1) AND ((TIMERA() > 5500) || (uVar6._fU8 < 13.00000000))))
    {
        UNPOINT_CAM( l_U626 );
        CLEAR_AREA_OF_CARS( 759.19790000, 504.40240000, 0.71499400, 30.00000000 );
        SET_CAM_POS( l_U621, 757.77930000, 510.22270000, 1.23270600 );
        SET_CAM_ROT( l_U621, 15.17653000, -0.00000000, -143.93720000 );
        SET_CAM_FOV( l_U621, 50.69999000 );
        SET_CAM_NEAR_DOF( l_U621, 5.00000000 );
        SET_CAM_FAR_DOF( l_U621, 60.00000000 );
        sub_16467( ref l_U626, 0 );
        sub_16467( ref l_U621, 1 );
        SETTIMERA( 0 );
        l_U563[5] = 1;
    }
    if ((l_U563[6] == 0) AND ((l_U563[5] == 1) AND (TIMERA() > 3000)))
    {
        SET_CAM_POS( l_U621, 757.77930000, 510.22270000, 1.23270600 );
        SET_CAM_ROT( l_U621, 15.17653000, -0.00000000, -143.93720000 );
        SET_CAM_FOV( l_U621, 50.69999000 );
        SET_CAM_NEAR_DOF( l_U621, 5.00000000 );
        SET_CAM_FAR_DOF( l_U621, 60.00000000 );
        SET_CAM_POS( l_U623, 757.77930000, 510.22270000, 1.23270600 );
        SET_CAM_ROT( l_U623, 15.17653000, -0.00000000, -143.93720000 );
        SET_CAM_FOV( l_U623, 50.69999000 );
        SET_CAM_NEAR_DOF( l_U623, 5.00000000 );
        SET_CAM_FAR_DOF( l_U623, 60.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 7000, 1000 );
        sub_16467( ref l_U621, 0 );
        sub_16467( ref l_U626, 0 );
        sub_16467( ref l_U624, 1 );
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        l_U563[6] = 1;
        SETTIMERA( 0 );
    }
    if ((l_U1356 == 0) AND ((sub_40898( l_U1473[2] )) < 0.50000000))
    {
        sub_13121( ref l_U1373, 0 );
        if (NOT (IS_CHAR_DEAD( l_U1473[2] )))
        {
            STOP_PED_SPEAKING( l_U1473[2], 1 );
        }
        PLAY_SOUND_FRONTEND( -1, "R4_BLEED_OUT_BODY_SPLASH" );
        l_U1356 = 1;
    }
    if (((IS_SCREEN_FADED_IN()) AND ((sub_17607()) AND (TIMERA() > 1000))) || ((l_U563[6] == 1) AND (TIMERA() > 3000)))
    {
        if (DOES_CHAR_EXIST( l_U1473[2] ))
        {
            DELETE_CHAR( ref l_U1473[2] );
        }
        SET_CHAR_COORDINATES( l_U628, 779.07900000, 473.21620000, 22.35590000 );
        SET_CHAR_HEADING( l_U628, 349.31130000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_8110();
        sub_16467( ref l_U624, 0 );
        sub_16467( ref l_U626, 0 );
        sub_16524( 0 );
        if (l_U1491 == 0)
        {
            l_U1388++;
        }
        if (NOT (DOES_BLIP_EXIST( l_U1441 )))
        {
            ADD_BLIP_FOR_CAR( l_U1455, ref l_U1441 );
        }
        CHANGE_BLIP_DISPLAY( l_U1441, 4 );
        SET_BLIP_AS_FRIENDLY( l_U1441, 1 );
        sub_14103( "R4_THROW", ref l_U1373, 8, 1 );
        WAIT( 4000 );
        PRINT_NOW( "ROM4_27", 7500, 1 );
    }
    return;
}

void sub_67026()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    boolean bVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    GET_CHAR_COORDINATES( l_U628, ref l_U1449._fU0, ref l_U1449._fU4, ref l_U1449._fU8 );
    if ((NOT l_U563[3]) AND ((NOT (IS_CAR_DEAD( l_U1455 ))) AND (NOT (IS_CHAR_DEAD( l_U1477 )))))
    {
        if ((NOT (sub_67131( l_U1477, 29 ))) AND (NOT (IS_CHAR_IN_CAR( l_U1477, l_U1455 ))))
        {
            TASK_ENTER_CAR_AS_PASSENGER( l_U1477, l_U1455, 20000, 0 );
            l_U563[3] = 1;
        }
    }
    if ((NOT (IS_CAR_DEAD( l_U1455 ))) AND (NOT (IS_CHAR_DEAD( l_U1477 ))))
    {
        if (IS_CHAR_IN_CAR( l_U628, l_U1455 ))
        {
            if (l_U1392[l_U1388] == 0)
            {
                if (DOES_BLIP_EXIST( l_U1441 ))
                {
                    REMOVE_BLIP( l_U1442[2] );
                    REMOVE_BLIP( l_U1441 );
                    SET_ROUTE( l_U1441, 0 );
                }
                FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( l_U629, 1.00000000 );
                if (NOT (DOES_BLIP_EXIST( l_U1447 )))
                {
                    ADD_BLIP_FOR_COORD( 829.01370000, -267.98060000, 15.01080000, ref l_U1447 );
                    CHANGE_BLIP_COLOUR( l_U1447, 5 );
                    SET_ROUTE( l_U1447, 1 );
                }
                REMOVE_ANIMS( "melee_knife_extra" );
                WAIT( 1000 );
                while (sub_15076( l_U1373 ))
                {
                    WAIT( 0 );
                }
                switch (g_U64961)
                {
                    case 0:
                    sub_25584( "R4_CAR2", 0, 1, ref l_U1373, 8, 1 );
                    break;
                    case 1:
                    sub_25584( "R4_CAR3", 0, 1, ref l_U1373, 8, 1 );
                    break;
                }
                if (NOT (IS_CHAR_DEAD( l_U1477 )))
                {
                    SET_CHAR_HEALTH( l_U1477, 200 );
                }
                l_U1440 = 25.00000000;
                SETTIMERA( 0 );
                l_U1392[l_U1388] = 1;
            }
        }
        else if ((NOT l_U563[2]) AND (NOT (DOES_BLIP_EXIST( l_U1446 ))))
        {
            ADD_BLIP_FOR_CAR( l_U1455, ref l_U1446 );
            CHANGE_BLIP_DISPLAY( l_U1446, 4 );
            SET_BLIP_AS_FRIENDLY( l_U1446, 1 );
            PRINT_NOW( "ROM4_27", 7500, 1 );
            l_U563[2] = 1;
        }
    }
    GET_CAR_CHAR_IS_USING( l_U628, ref iVar2 );
    if ((l_U563[4] == 0) AND ((l_U1455 == iVar2) AND (IS_CHAR_GETTING_IN_TO_A_CAR( l_U628 ))))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1468450703 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1473[2] );
        sub_14103( "R4_RETURN", ref l_U1373, 8, 1 );
        l_U563[4] = 1;
    }
    if ((NOT (sub_15076( l_U1373 ))) AND ((l_U563[1] == 0) AND (l_U1392[l_U1388] == 1)))
    {
        PRINT( "ROM4_13", 7500, 1 );
        GET_GAME_TIMER( ref l_U1340 );
        l_U563[1] = 1;
    }
    if (l_U1392[l_U1388] == 1)
    {
        if ((NOT (IS_CHAR_DEAD( l_U1477 ))) AND (NOT (IS_CAR_DEAD( l_U1455 ))))
        {
            if (IS_CHAR_IN_CAR( l_U628, l_U1455 ))
            {
                FREEZE_CAR_POSITION( l_U1455, 0 );
                CHANGE_BLIP_DISPLAY( l_U1446, 0 );
                if (NOT (IS_CHAR_IN_CAR( l_U1477, l_U1455 )))
                {
                    if (TIMERA() > 12000)
                    {
                        if (l_U1433 != l_U1432)
                        {
                            PRINT_NOW( "ROM4_28", 7500, 1 );
                        }
                        SETTIMERB( 0 );
                        l_U1433 = l_U1432;
                        l_U1432 = 0;
                    }
                    CHANGE_BLIP_DISPLAY( l_U1441, 4 );
                    CHANGE_BLIP_DISPLAY( l_U1447, 0 );
                }
                else
                {
                    CHANGE_BLIP_DISPLAY( l_U1441, 0 );
                    CHANGE_BLIP_DISPLAY( l_U1447, 4 );
                    if (TIMERA() > 12000)
                    {
                        if (l_U1433 != l_U1432)
                        {
                            PRINT_NOW( "ROM4_13", 7500, 1 );
                            SETTIMERB( 0 );
                        }
                        l_U1433 = l_U1432;
                        l_U1432 = 1;
                    }
                }
            }
            else
            {
                CHANGE_BLIP_DISPLAY( l_U1446, 4 );
                CHANGE_BLIP_DISPLAY( l_U1447, 0 );
                CHANGE_BLIP_DISPLAY( l_U1441, 0 );
                if (TIMERA() > 12000)
                {
                    if (l_U1433 != l_U1432)
                    {
                        PRINT_NOW( "ROM4_27", 7500, 1 );
                    }
                    l_U1433 = l_U1432;
                    l_U1432 = 2;
                }
            }
        }
    }
    GET_GAME_TIMER( ref l_U1427 );
    if (NOT (IS_CAR_DEAD( l_U1455 )))
    {
        if ((l_U563[1] == 1) AND ((l_U563[0] == 0) AND ((IS_CHAR_IN_CAR( l_U628, l_U1455 )) AND (((l_U1427 - l_U1340) > 7500) AND ((NOT (sub_15076( l_U1373 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))))))
        {
            switch (g_U64961)
            {
                case 0:
                sub_25584( "R4_CAR2", 1, 0, ref l_U1373, 8, 1 );
                g_U64961++;
                break;
                case 1:
                sub_25584( "R4_CAR3", 1, 0, ref l_U1373, 8, 1 );
                g_U64961++;
                break;
                case 2:
                SAY_AMBIENT_SPEECH( l_U1477, "Listen_to_radio", 0, 0, 0 );
                break;
            }
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 0 );
            l_U563[0] = 1;
        }
    }
    if (l_U563[0] == 1)
    {
        if ((NOT (IS_CHAR_DEAD( l_U1477 ))) AND (NOT (IS_CAR_DEAD( l_U1455 ))))
        {
            if ((TIMERB() > 3000) AND ((IS_CHAR_SITTING_IN_CAR( l_U1477, l_U1455 )) AND (IS_CHAR_SITTING_IN_CAR( l_U628, l_U1455 ))))
            {
                switch (g_U64961)
                {
                    case 0:
                    sub_37710( "R4_CAR2", ref l_U1373, 8, 1 );
                    break;
                    case 1:
                    sub_37710( "R4_CAR3", ref l_U1373, 8, 1 );
                    break;
                }
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 0 );
            }
            else
            {
                sub_37913( ref l_U1373 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U628, 1 );
            }
        }
    }
    sub_12417();
    if ((l_U563[5] == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( l_U628, 810.47810000, -261.82920000, 50.00000000, 50.00000000, 0 )))
    {
        if ((NOT g_U15654[4]) AND (g_U15654[0]))
        {
            array(ref uVar3._fU0._fU0, 3);
            ref uVar3._fU0;
            ref uVar3;
            sub_69033( 2, 13, 16383, 16383, ref uVar3 );
            sub_69377( ref uVar3, 1 );
            sub_69405( ref uVar3, 0 );
            sub_69433( ref uVar3, 2 );
            sub_69463( ref uVar3 );
        }
        l_U563[5] = 1;
    }
    if ((NOT (IS_CAR_DEAD( l_U1455 ))) AND (NOT (IS_CHAR_DEAD( l_U1477 ))))
    {
        if ((IS_CHAR_IN_CAR( l_U628, l_U1455 )) AND (IS_CHAR_IN_CAR( l_U1477, l_U1455 )))
        {
            if ((l_U1392[l_U1388] == 1) AND ((sub_15349( 1, 1 )) AND ((LOCATE_CHAR_IN_CAR_3D( l_U628, 829.01370000, -267.98060000, 15.01080000, 2.00000000, 2.00000000, 2.00000000, 0 )) AND (LOCATE_CHAR_IN_CAR_3D( l_U628, 829.01370000, -267.98060000, 16.78300000, 2.50000000, 2.50000000, 2.50000000, 1 )))))
            {
                TASK_LOOK_AT_CHAR( l_U628, l_U1477, 30000, 0 );
                TASK_LOOK_AT_CHAR( l_U1477, l_U628, 30000, 0 );
                sub_13121( ref l_U1373, 1 );
                if (DOES_BLIP_EXIST( l_U1447 ))
                {
                    REMOVE_BLIP( l_U1447 );
                }
                SET_ROUTE( l_U1447, 0 );
                CLEAR_PRINTS();
                SET_CAM_POS( l_U621, 839.34550000, -278.41570000, 16.66302000 );
                SET_CAM_ROT( l_U621, 2.92472100, 0.00000000, 61.30951000 );
                SET_CAM_FOV( l_U621, 51.00000000 );
                SET_CAM_POS( l_U623, 839.34550000, -278.41570000, 16.66302000 );
                SET_CAM_ROT( l_U623, 2.92472100, 0.00000000, 61.30951000 );
                SET_CAM_FOV( l_U623, 48.00000000 );
                SET_CAM_INTERP_STYLE_CORE( l_U624, l_U621, l_U623, 4500, 0 );
                SET_CAM_INTERP_STYLE_DETAILED( l_U624, 0, 0, 1, 1 );
                CLEAR_AREA( 829.01370000, -267.98060000, 14.47900000, 20.00000000, 1 );
                sub_16524( 1 );
                sub_16467( ref l_U624, 1 );
                sub_16467( ref l_U626, 0 );
                while (sub_15076( l_U1373 ))
                {
                    if ((IS_SCREEN_FADED_IN()) AND (sub_17607()))
                    {
                        l_U1348 = 1;
                        DO_SCREEN_FADE_OUT( 500 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U1477 )))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U1477 );
                    OPEN_SEQUENCE_TASK( ref l_U1458 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U628 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 817.59620000, -268.36100000, 15.34270000, 3, 8000, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U1458 );
                    TASK_PERFORM_SEQUENCE( l_U1477, l_U1458 );
                }
                bVar10 = true;
                while (bVar10)
                {
                    if (NOT (IS_CHAR_DEAD( l_U1477 )))
                    {
                        bVar10 = IS_CHAR_IN_ANY_CAR( l_U1477 );
                    }
                    WAIT( 0 );
                }
                UNPOINT_CAM( l_U626 );
                if (NOT (IS_CAR_DEAD( l_U1455 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1455, -1.20000000, 3.75000000, 0.45000000, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                }
                SET_CAM_POS( l_U626, uVar11._fU0, uVar11._fU4, uVar11._fU8 );
                SET_CAM_FOV( l_U626, 45 );
                SET_CAM_NEAR_DOF( l_U626, 0.50000000 );
                SET_CAM_FAR_DOF( l_U626, 10.00000000 );
                if (NOT (IS_CAR_DEAD( l_U1455 )))
                {
                    POINT_CAM_AT_VEHICLE( l_U626, l_U1455 );
                    SET_CAM_POINT_OFFSET( l_U626, 0.80000000, 0, 0 );
                    SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U626, 1 );
                }
                sub_16467( ref l_U624, 0 );
                sub_16467( ref l_U626, 1 );
                if (NOT (IS_CHAR_DEAD( l_U1477 )))
                {
                    sub_14103( "R4_END", ref l_U1373, 8, 1 );
                }
                SETTIMERA( 0 );
                while ((l_U1348 == 0) AND (TIMERA() < 4500))
                {
                    if (sub_17607())
                    {
                        l_U1348 = 1;
                        DO_SCREEN_FADE_OUT( 500 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    WAIT( 0 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                if (DOES_CHAR_EXIST( l_U1477 ))
                {
                    DELETE_CHAR( ref l_U1477 );
                }
                sub_16467( ref l_U624, 0 );
                sub_16524( 0 );
                if (l_U1348 == 1)
                {
                    DO_SCREEN_FADE_IN( 500 );
                }
                sub_71494();
            }
        }
    }
    return;
}

int sub_67131(unknown uParam0, unknown uParam1)
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

void sub_69033(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_69055( uParam0, 0, iParam4 + 0 );
    sub_69055( uParam1, 1, iParam4 + 0 );
    sub_69055( uParam2, 2, iParam4 + 0 );
    sub_69055( uParam3, 3, iParam4 + 0 );
    sub_69055( 0, 4, iParam4 + 0 );
    sub_69055( 1, 5, iParam4 + 0 );
    sub_69055( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_69055(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_69377(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_69405(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_69433(int iParam0, unknown uParam1)
{
    sub_69055( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_69463(int iParam0)
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
        if (NOT sub_69533())
        {
            sub_2731( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_69660( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2731( iVar9 );
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
                ConcatString(ref cVar5, sub_2445( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_2445( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_69533()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2445( 1, g_U569[I] )) != 0))
        {
            sub_2731( I );
            return 1;
        }
    }
    return 0;
}

int sub_69660(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_69725( uParam0, g_U569[Result] ))
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

int sub_69725(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_2445( 0, uParam0 );
        if (iVar14 == (sub_2445( 0, uParam6 )))
        {
            iVar15 = sub_2445( 3, uParam0 );
            if (iVar15 == (sub_2445( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_71494()
{
    g_U21 = 25;
    sub_71511( 2033, 3 );
    sub_71511( 3036, 3 );
    UNLOCK_MISSION_NEWS_STORY( 3 );
    sub_71587( 3 );
    l_U1391 = 0;
    CLEAR_WANTED_LEVEL( l_U629 );
    sub_74795();
    sub_3309();
    return;
}

void sub_71511(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_71587(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_71674( iParam0 ))
    {
        sub_72724( iParam0 );
    }
    return;
}

int sub_71674(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_71731( ref uVar3, 1, 0, 0 );
    sub_72343( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_14279( "\n ----------------------------------------------------------------" );
    sub_7245( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_14279( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_71731(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_71784( iParam0, uParam1, uParam2 );
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
        sub_71916( iParam0 + 0 );
    }
    return;
}

void sub_71784(int iParam0, int iParam1, int iParam2)
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
        sub_71916( iParam0 + 0 );
    }
    return;
}

void sub_71916(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_71947( iParam0->_fU4 )))
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

int sub_71947(unknown uParam0)
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

void sub_72343(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_72724(unknown uParam0)
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
        sub_72935( 20, 6, 16383, 16383, ref uVar4 );
        sub_73611( ref uVar4, 7 );
        sub_73642( ref uVar4, 0 );
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
        sub_72935( 20, 7, 9, 16383, ref uVar4 );
        sub_73611( ref uVar4, 7 );
        sub_73642( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_72935(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_72959( uParam0, 0, iParam4 + 0 );
    sub_72959( uParam1, 1, iParam4 + 0 );
    sub_72959( uParam2, 2, iParam4 + 0 );
    sub_72959( uParam3, 3, iParam4 + 0 );
    sub_72959( 0, 4, iParam4 + 0 );
    sub_72959( 1, 5, iParam4 + 0 );
    sub_72959( 65535, 6, iParam4 + 0 );
    sub_72959( 0, 12, iParam4 + 0 );
    sub_72959( 0, 11, iParam4 + 0 );
    sub_72959( 0, 14, iParam4 + 0 );
    sub_72959( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_72959( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_72959( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_72959(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_73611(int iParam0, unknown uParam1)
{
    sub_72959( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_73642(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_73682())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_74369( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_74168( iVar5 );
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

int sub_73682()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_73716( 5, g_U968[I] )) == 7)
        {
            sub_74168( I );
            return 1;
        }
    }
    return 0;
}

int sub_73716(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_74168(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_74241( 39 );
    return;
}

void sub_74241(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_74369(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_74430( uParam0, g_U968[Result] ))
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

int sub_74430(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_74795()
{
    sub_74804();
    return;
}

void sub_74804()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_74822();
    sub_74881( iVar2, iVar3, iVar4 );
    return;
}

void sub_74822()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_74881(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_74912( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_74912(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_75008( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_75008( ref cVar9 );
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
            sub_75008( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_75008( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_75008( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_75008( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_75585( iParam0, iVar7 );;;
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
                sub_75982( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_75982( 0, 4 );
            }
        }
    }
    if (NOT (sub_76071( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3832(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3832() );
    }
    sub_2407();
    bVar27 = true;
    uVar28 = sub_75585( iParam0, iVar7 );
    uVar29 = sub_1864( iParam0 );
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
                sub_85447( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_85877();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_85962( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_86019( iParam0 );
                sub_86058( 0 );
                sub_2305( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_86166();
        }
    }
    if (bParam2)
    {
        sub_85877();
        sub_86254();
        sub_86058( 0 );
    }
    if (bParam3)
    {
        sub_85877();
        sub_86294();
        sub_86058( 0 );
        sub_2305( uVar29, 0 );
    }
    sub_1751();
    return;
}

void sub_75008(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_75585(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_2263( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_75982(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_76071(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_76279( uParam1 );
        break;
        case 1:
        bVar8 = sub_78357( uParam1 );
        break;
        case 2:
        bVar8 = sub_78583( uParam1 );
        break;
        case 3:
        bVar8 = sub_78733( uParam1 );
        break;
        case 4:
        bVar8 = sub_79011( uParam1 );
        break;
        case 5:
        bVar8 = sub_79314( uParam1 );
        break;
        case 6:
        bVar8 = sub_79513( uParam1 );
        break;
        case 7:
        bVar8 = sub_79739( uParam1 );
        break;
        case 8:
        bVar8 = sub_79974( uParam1 );
        break;
        case 9:
        bVar8 = sub_80349( uParam1 );
        break;
        case 10:
        bVar8 = sub_80596( uParam1 );
        break;
        case 11:
        bVar8 = sub_80735( uParam1 );
        break;
        case 12:
        bVar8 = sub_81034( uParam1 );
        break;
        case 13:
        bVar8 = sub_81262( uParam1 );
        break;
        case 14:
        bVar8 = sub_81549( uParam1 );
        break;
        case 15:
        bVar8 = sub_81831( uParam1 );
        break;
        case 16:
        bVar8 = sub_82113( uParam1 );
        break;
        case 17:
        bVar8 = sub_82314( uParam1 );
        break;
        case 18:
        bVar8 = sub_82387( uParam1 );
        break;
        case 19:
        bVar8 = sub_82601( uParam1 );
        break;
        case 20:
        bVar8 = sub_82854( uParam1 );
        break;
        case 21:
        bVar8 = sub_83101( uParam1 );
        break;
        case 22:
        bVar8 = sub_83302( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_77962( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_75585( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_83625( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_76279(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_76558( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_76558( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_76558( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_76558( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_76558( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_76558( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_76558( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_76558( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_76558( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_76558( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_76558( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_76558( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_76558( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_76558( iVar3, 0, 3, 1, 0, 0 );
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
        sub_76558( iVar3, 0, sub_77840(), sub_78106(), 0, 0 );
        break;
        default:
        sub_78265( "Friend 1", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Friend 1", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_76558(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_76569( uParam1 );
    sub_76743( uParam0, 0, uParam2 );
    sub_76743( uParam0, 1, uParam3 );
    sub_76743( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_74822();
    return;
}

void sub_76569(unknown uParam0)
{
    ADD_SCORE( sub_3832(), uParam0 );
    sub_76594( uParam0 );
    return;
}

void sub_76594(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2263( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_76743(unknown uParam0, int iParam1, int iParam2)
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
        sub_76900( uParam0 );
    }
    return;
}

void sub_76900(unknown uParam0)
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

int sub_77840()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_77962( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_77962(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_78106()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_77962( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_78265(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_78357(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_76558( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_78265( "Contact 2", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 2", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_78583(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_76558( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_78265( "Girl 3", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Girl 3", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_78733(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_76558( iVar3, 0, sub_77840(), sub_78106(), 0, 0 );
        break;
        default:
        sub_78265( "Friend 4", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Friend 4", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_79011(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_76558( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_76558( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_76558( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_76558( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_78265( "Contact 5", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 5", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_79314(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_78265( "Contact 7", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 7", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_79513(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_76558( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_78265( "Contact 7b", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 7b", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_79739(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_76558( iVar3, 0, sub_77840(), sub_78106(), 0, 0 );
        break;
        default:
        sub_78265( "Friend 8", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Friend 8", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_79974(unknown uParam0)
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
        sub_76558( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_76558( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_76558( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_76558( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_76558( iVar3, 0, sub_77840(), sub_78106(), 0, 0 );
        break;
        default:
        sub_78265( "Friend 9", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Friend 9", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_80349(unknown uParam0)
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
        sub_76558( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_76558( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_76558( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_78265( "Contact 10", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_78265( "Contact 10", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_80596(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_78265( "Girl 11", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Girl 11", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_80735(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_76558( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_76558( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_76558( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_76558( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_76558( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_78265( "Contact 12", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 12", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_81034(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_76558( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_78265( "Contact 13", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 13", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_81262(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_76558( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_76558( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_76558( iVar3, 0, sub_77840(), sub_78106(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_78265( "Friend 15", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Friend 15", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_81549(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_76558( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_76558( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_76558( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_78265( "Contact 16", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 16", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_81831(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_76558( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_76558( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_76558( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_78265( "Contact 18", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 18", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_82113(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_78265( "Contact 19", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 19", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_82314(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_78265( "Girl 20", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_82387(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_78265( "Contact 21", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 21", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_82601(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_76558( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_76558( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_78265( "Contact 22", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 22", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_82854(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_76558( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_76558( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_76558( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_78265( "Contact 24", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 24", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83101(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_76558( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_76558( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_76558( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_78265( "Contact 25", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_78265( "Contact 25", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_83302(unknown uParam0)
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
        sub_76558( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_78265( "Girl 26", 1 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_78265( "Girl 26", 0 );
        sub_76558( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_83625(int iParam0, int iParam1)
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
    if (sub_83673( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_84404( iParam1 );
    }
    return;
}

int sub_83673(int iParam0, int iParam1)
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
            sub_83813( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_83813(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_83995( 0 );
    return;
}

void sub_83995(boolean bParam0)
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
        sub_84250();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_84250()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_84404(int iParam0)
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
        sub_84737( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_84737( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_84737( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_84737( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_84737( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_84737( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_84737( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_84737( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_84737( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_84737( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_84737( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_84737( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_84737( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_84737( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_84737( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_84737( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_84737( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_84737( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_84737( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_84737(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_85447(unknown uParam0, unknown uParam1)
{
    sub_85466( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_85466(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_85877()
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

int sub_85962(int iParam0, int iParam1)
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

void sub_86019(unknown uParam0)
{
    sub_1650();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_86058(unknown uParam0)
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

void sub_86166()
{
    sub_86175();
    return;
}

void sub_86175()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_86254()
{
    sub_86175();
    return;
}

void sub_86294()
{
    sub_86175();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

