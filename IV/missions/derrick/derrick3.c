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
    l_U482 = -1962071130;
    l_U484 = {-1312.41400000, 301.38670000, 12.26540000};
    l_U487 = 0;
    l_U488 = 0;
    l_U489 = 0;
    l_U498 = 0;
    l_U499 = 0;
    l_U500 = 0;
    l_U501 = 55;
    l_U505 = {0.00000000, 1.13800000, -1.00000000};
    l_U508 = {0.00000000, 0.00000000, 0.00000000};
    l_U511 = {0.00000000, 0.00000000, 0.00000000};
    l_U522 = 0;
    l_U523 = 0;
    l_U524 = 0;
    l_U525 = 0;
    l_U526 = 0;
    l_U528 = 0;
    l_U529 = 0;
    l_U530 = 0;
    l_U531 = 0;
    l_U532 = 0;
    l_U533 = 0;
    l_U534 = 0;
    l_U535 = 0;
    l_U536 = 0;
    l_U537 = 0;
    l_U538 = 0;
    l_U539 = 0;
    l_U540 = 0;
    l_U541 = 0;
    l_U542 = 0;
    l_U543 = 0;
    l_U544 = 0;
    l_U545 = 0;
    l_U546 = 0;
    l_U547 = 0;
    l_U548 = 0;
    l_U549 = 0;
    l_U550 = 0;
    l_U551 = 0;
    l_U552 = 0;
    l_U556 = 0;
    l_U557 = 0;
    l_U558 = 0;
    l_U559 = 0;
    l_U560 = 0;
    l_U561 = 0;
    l_U562 = 1;
    l_U563 = 0;
    l_U564 = 0;
    l_U565 = 0;
    l_U566 = 0;
    l_U567 = 0;
    l_U568 = 0;
    l_U569 = 0;
    l_U570 = 0;
    l_U571 = 0;
    l_U572 = 0;
    l_U573 = 0;
    l_U574 = 0;
    l_U575 = 0;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = 0;
    l_U580 = 0;
    l_U581 = 0;
    l_U582 = 0;
    l_U583 = 0;
    l_U584 = 0;
    l_U585 = 0;
    l_U586 = 0;
    l_U587 = 0;
    l_U588 = 0;
    l_U589 = 0;
    l_U590 = 0;
    l_U591 = 0;
    l_U592 = 0;
    l_U593 = 0;
    l_U594 = 0;
    l_U595 = 0;
    l_U596 = 0;
    l_U597 = 0;
    l_U598 = 0;
    l_U599 = 0;
    l_U663 = 10.00000000;
    l_U664 = 0;
    l_U760 = 215190023;
    l_U762 = -1004762946;
    l_U818 = 850991848;
    l_U819 = 850991848;
    l_U820 = 2046537925;
    l_U821 = -350085182;
    l_U822 = -1900572838;
    l_U842 = 0;
    sub_750();
    l_U527 = g_U10981[7]._fU144._fU32;
    g_U10981[7]._fU144._fU32 = 1;
    sub_885( "DERRIC3", 0 );
    sub_885( "DM3AUD", 6 );
    sub_1043();
    SET_MISSION_FLAG( 1 );
    if (g_U9893._fU24)
    {
        CLEAR_AREA( -1762.15500000, 248.79690000, 21.25360000, 8.00000000, 1 );
        START_CUTSCENE_NOW( "DM_3" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "DM_3" );
    }
    sub_6383();
    sub_6420();
    l_U490 = 0;
    l_U522 = 1;
    while (l_U522)
    {
        switch (l_U490)
        {
            case 0:
            sub_7154();
            if (l_U841 == 1)
            {
                l_U490 = 11;
            }
            else if (l_U840 == 1)
            {
                l_U490 = 14;
            }
            break;
            case 1:
            if (l_U839 == 1)
            {
                sub_7473();
                SET_CAR_DENSITY_MULTIPLIER( 0 );
                if (NOT (IS_CAR_DEAD( l_U805 )))
                {
                    if (l_U842 > 0)
                    {
                        SET_CAR_HEADING( l_U805, 82.96360000 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U805 );
                    }
                    if (DOES_BLIP_EXIST( l_U618 ))
                    {
                        REMOVE_BLIP( l_U618 );
                    }
                    WARP_CHAR_INTO_CAR( l_U837, l_U805 );
                    sub_13400();
                    sub_13588();
                }
                l_U490 = 4;
            }
            l_U490++;
            break;
            case 2:
            sub_13788();
            break;
            case 3:
            sub_15419();
            break;
            case 4:
            sub_27682();
            break;
            case 5:
            sub_31248();
            break;
            case 6:
            sub_46611();
            break;
            case 7:
            sub_46645();
            break;
            case 8:
            sub_54312();
            break;
            case 9:
            sub_58773();
            break;
            case 10:
            if (l_U840 == 1)
            {
                if (l_U578 == 0)
                {
                    GIVE_DELAYED_WEAPON_TO_CHAR( l_U837, 7, 100, 1 );
                    sub_13588();
                    sub_13400();
                    sub_14014();
                    sub_14284();
                    sub_32967();
                    sub_36905();
                    CREATE_CAR( l_U822, -1551.88000000, 1219.98300000, 12.32990000, ref l_U813, 1 );
                    SET_CAR_HEADING( l_U813, 265.10180000 );
                    SET_CAR_PROOFS( l_U813, 1, 0, 0, 0, 0 );
                    LOCK_CAR_DOORS( l_U813, 1 );
                    l_U578 = 1;
                }
            }
            sub_61947();
            break;
            case 11:
            if (l_U841 == 1)
            {
                if (l_U578 == 0)
                {
                    GIVE_DELAYED_WEAPON_TO_CHAR( l_U837, 7, 100, 1 );
                    sub_13588();
                    sub_13400();
                    sub_14014();
                    sub_6804( l_U482 );
                    while (NOT (HAS_MODEL_LOADED( l_U482 )))
                    {
                        PRINTSTRING( "\n\n\----> Load Escape Car Model \n\n\n" );
                        WAIT( 0 );
                    }
                    sub_6804( l_U822 );
                    while (NOT (HAS_MODEL_LOADED( l_U822 )))
                    {
                        PRINTSTRING( "\n\n\----> Load Stockade Car Model \n\n\n" );
                        WAIT( 0 );
                    }
                    sub_32967();
                    sub_36905();
                    CREATE_CAR( l_U822, -1302.15100000, 301.76210000, 12.48250000, ref l_U813, 1 );
                    SET_CAR_HEADING( l_U813, 104.62190000 );
                    LOCK_CAR_DOORS( l_U813, 3 );
                    WAIT( 500 );
                    if (NOT (IS_CAR_DEAD( l_U813 )))
                    {
                        WARP_CHAR_INTO_CAR( l_U837, l_U813 );
                        if (NOT (IS_CHAR_DEAD( l_U730 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U730, l_U813, 2 );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U731 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U731, l_U813, 1 );
                        }
                    }
                    l_U578 = 1;
                }
            }
            sub_75039();
            break;
            case 12:
            sub_77966();
            break;
            case 13:
            sub_82022();
            break;
            case 14:
            if (l_U840 == 1)
            {
                if (l_U578 == 0)
                {
                    GIVE_DELAYED_WEAPON_TO_CHAR( l_U837, 7, 100, 1 );
                    sub_13588();
                    sub_13400();
                    sub_14014();
                    sub_6804( l_U482 );
                    while (NOT (HAS_MODEL_LOADED( l_U482 )))
                    {
                        PRINTSTRING( "\n\n\----> Load Escape Car Model \n\n\n" );
                        WAIT( 0 );
                    }
                    sub_32967();
                    sub_36905();
                    CREATE_CAR( l_U482, -1551.88000000, 1219.98300000, 12.32990000, ref l_U481, 1 );
                    SET_CAR_HEADING( l_U481, 334.99580000 );
                    LOCK_CAR_DOORS( l_U481, 3 );
                    l_U578 = 1;
                }
            }
            sub_84102();
            break;
            case -1: break;
        }
        WAIT( 0 );
        if (l_U524 == 1)
        {
            CLEAR_HELP();
            CLEAR_WANTED_LEVEL( l_U838 );
            sub_91823();
        }
        else if (l_U523 == 1)
        {
            CLEAR_HELP();
            sub_106730();
        }
    }
    sub_3186();
    return;
}

void sub_750()
{
    if (sub_759())
    {
        g_U64921 = 1;
    }
    return;
}

int sub_759()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_885(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_921())
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

int sub_921()
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

void sub_1043()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1064();
        l_U523 = 1;
        l_U490 = -1;
        sub_3186();
    }
    return;
}

void sub_1064()
{
    sub_1073();
    return;
}

void sub_1073()
{
    int iVar2;

    iVar2 = 16;
    sub_1087( iVar2 );
    sub_2263( iVar2 );
    return;
}

void sub_1087(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1131();
        sub_1292();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1400();
            sub_1439();
        }
    }
    sub_1515();
    sub_1616();
    uVar5 = sub_1729( uParam0 );
    sub_2170( uVar5, 0 );
    return;
}

void sub_1131()
{
    sub_1145( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1245();
    }
    return;
}

void sub_1145(int iParam0)
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

void sub_1245()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1292()
{
    sub_1301();
    return;
}

void sub_1301()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1400()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1439()
{
    sub_1448();
    return;
}

void sub_1448()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1515()
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

void sub_1616()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1638();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1638()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1729(unknown uParam0)
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
    sub_2128( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2128(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2170(int iParam0, boolean bParam1)
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

void sub_2263(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2272();
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
        sub_3047();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2272()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2310( 5, g_U569[I] )) == 1))
        {
            if ((sub_2310( 1, g_U569[I] )) != 0)
            {
                sub_2596( I );
            }
        }
    }
    if (NOT sub_2762())
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

int sub_2310(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2596(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2681( g_U569 - 1 );
    return;
}

void sub_2681(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2762()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2310( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3047()
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

void sub_3186()
{
    int I;

    g_U10981[7]._fU144._fU32 = l_U527;
    SWITCH_ROADS_BACK_TO_ORIGINAL( 64696, 320, 65501, 65086, 800, -5 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1550.00000000, 1100.00000000, 10.00000000, -1700.00000000, 1500.00000000, -2.00000000 );
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    SWITCH_PED_PATHS_ON( -1343.00000000, 261.00000000, 8.00000000, -1289.00000000, 337.00000000, 16.00000000 );
    SWITCH_PED_PATHS_ON( 1390.00000000, 608.00000000, 25, 1408.00000000, 646.00000000, 38.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1390.00000000, 608.00000000, 25, 1408.00000000, 646.00000000, 38.00000000 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    g_U9890 = 0;
    g_U8086 = 0;
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    if (NOT (IS_CHAR_DEAD( sub_3432() )))
    {
        SET_CHAR_MELEE_ACTION_FLAG0( sub_3432(), 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U813 )))
    {
        LOCK_CAR_DOORS( l_U813, 1 );
    }
    g_U9942 = 1;
    SET_MAX_WANTED_LEVEL( 6 );
    SET_CREATE_RANDOM_COPS( 1 );
    SET_FAKE_WANTED_LEVEL( 0 );
    l_U582 = 0;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    sub_3586();
    sub_3701();
    sub_3828();
    sub_3908();
    sub_3988();
    DESTROY_ALL_CAMS();
    if (NOT (IS_CAR_DEAD( l_U811[0] )))
    {
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U811[0], 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U807[0] )))
    {
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U807[0], 0 );
    }
    if ((l_U590 == 0) AND (NOT (IS_CAR_DEAD( l_U813 ))))
    {
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U813, 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U807[1] )))
    {
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U807[1], 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U806 )))
    {
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U806, 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U779 )))
    {
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U779, 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U814[0] )))
    {
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U814[0], 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U814[1] )))
    {
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U814[1], 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U814[2] )))
    {
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U814[2], 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U763[0] )))
    {
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U763[0], 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U763[1] )))
    {
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U763[1], 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U763[2] )))
    {
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U763[2], 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U763[3] )))
    {
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U763[3], 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U730 )))
    {
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U730, 0 );
    }
    for ( I = 0; I <= 9; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U780[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U780[I] )))
            {
                SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U780[I], 0 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U780[I] );
            }
        }
        if (DOES_CHAR_EXIST( l_U768[I] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U768[I] )))
            {
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U768[I], 0 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U768[I] );
            }
        }
    }
    sub_4747( 13 );
    if (DOES_CHAR_EXIST( l_U730 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U730 );
    }
    if (DOES_CHAR_EXIST( l_U731 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U731 );
    }
    sub_5506();
    for ( I = 0; I <= 7; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U736[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U736[I], 1 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U736[I], 0 );
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U745[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U745[I], 1 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U745[I], 0 );
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U752[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U752[I], 1 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U752[I], 0 );
        }
    }
    if (DOES_BLIP_EXIST( l_U617 ))
    {
        REMOVE_BLIP( l_U617 );
    }
    if (DOES_BLIP_EXIST( l_U618 ))
    {
        REMOVE_BLIP( l_U618 );
    }
    if (DOES_BLIP_EXIST( l_U619 ))
    {
        REMOVE_BLIP( l_U619 );
    }
    if (DOES_BLIP_EXIST( l_U620 ))
    {
        REMOVE_BLIP( l_U620 );
    }
    if (DOES_BLIP_EXIST( l_U621 ))
    {
        REMOVE_BLIP( l_U621 );
    }
    if (DOES_BLIP_EXIST( l_U622 ))
    {
        REMOVE_BLIP( l_U622 );
    }
    if (DOES_BLIP_EXIST( l_U623 ))
    {
        REMOVE_BLIP( l_U623 );
    }
    if (DOES_BLIP_EXIST( l_U624 ))
    {
        REMOVE_BLIP( l_U624 );
    }
    if (DOES_BLIP_EXIST( l_U625 ))
    {
        REMOVE_BLIP( l_U625 );
    }
    if (DOES_BLIP_EXIST( l_U626 ))
    {
        REMOVE_BLIP( l_U626 );
    }
    DONT_SUPPRESS_CAR_MODEL( l_U818 );
    DONT_SUPPRESS_CAR_MODEL( l_U819 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U818 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U819 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U822 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U820 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U821 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U805 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U806 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U813 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U807[0] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U807[1] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U811[0] );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3432()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3586()
{
    int I;

    for ( I = 0; I <= 7; I++ )
    {
        if (DOES_CHAR_EXIST( l_U736[I] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U736[I] )))
            {
                SET_CHAR_KEEP_TASK( l_U736[I], 1 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U736[I] );
        }
    }
    return;
}

void sub_3701()
{
    int I;

    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U762 );
    for ( I = 0; I <= 5; I++ )
    {
        if (DOES_CHAR_EXIST( l_U745[I] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U745[I] )))
            {
                SET_CHAR_KEEP_TASK( l_U745[I], 1 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U745[I] );
        }
    }
    return;
}

void sub_3828()
{
    int I;

    if (l_U711 != 0)
    {
        for ( I = 0; I <= (l_U711 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U670[I] );
        }
    }
    l_U711 = 0;
    return;
}

void sub_3908()
{
    int I;

    if (l_U728 != 0)
    {
        for ( I = 0; I <= (l_U728 - 1); I++ )
        {
            REMOVE_ANIMS( l_U712[I] );
        }
    }
    l_U728 = 0;
    return;
}

void sub_3988()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U823[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U823[I] );
        }
    }
    return;
}

void sub_4747(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4758( uParam0 ) );
    return;
}

int sub_4758(unknown uParam0)
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
    sub_2128( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5506()
{
    g_U965 = -1;
    return;
}

void sub_6383()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_6420()
{
    ADD_SCENARIO_BLOCKING_AREA( -1102.54000000, 927.59000000, 10.00000000, -1074.81000000, 937.24000000, 15.00000000 );
    sub_6477( "DM3AUD" );
    sub_6604( 0, sub_3432(), "Niko", 0 );
    l_U837 = sub_3432();
    l_U838 = sub_6763();
    sub_6804( l_U818 );
    while (NOT sub_6856())
    {
        WAIT( 0 );
    }
    SUPPRESS_CAR_MODEL( l_U818 );
    SUPPRESS_CAR_MODEL( l_U819 );
    return;
}

void sub_6477(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_6496();
    return;
}

void sub_6496()
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

void sub_6604(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6688( "\n PED NUMBER ", uParam0 );
    sub_6728( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6688(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6728(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6763()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_6804(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U670[l_U711] = uParam0;
    l_U711++;
    return;
}

int sub_6856()
{
    int I;

    if (l_U711 != 0)
    {
        for ( I = 0; I <= (l_U711 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U670[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_7154()
{
    SUPPRESS_CAR_MODEL( l_U818 );
    SUPPRESS_CAR_MODEL( l_U822 );
    SUPPRESS_CAR_MODEL( l_U819 );
    SET_PLAYER_CONTROL_ADVANCED( l_U838, 0, 1, 1 );
    SET_CHAR_COORDINATES( sub_3432(), -1762.15500000, 248.79690000, 21.25360000 );
    SET_CHAR_HEADING( sub_3432(), 288.46080000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    LOAD_SCENE( -1762.15500000, 248.79690000, 21.25360000 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN( 750 );
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    SET_PLAYER_CONTROL_ADVANCED( l_U838, 1, 1, 1 );
    WAIT( 3500 );
    sub_7382( 1 );
    if (l_U523 == 0)
    {
        PRINT_NOW( "DM_CMD_02", 7500, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U618 )))
        {
            ADD_BLIP_FOR_COORD( -1092.00000000, 929.18160000, 13.21440000, ref l_U618 );
            CHANGE_BLIP_COLOUR( l_U618, 3 );
            SET_ROUTE( l_U618, 1 );
            sub_13146( ref l_U618, -1035.18600000, 930.08200000, 12.52260000, 6.34650000 );
        }
        l_U490++;
    }
    return;
}

void sub_7382(int iParam0)
{
    unknown uVar3;

    while ((l_U523 == 0) AND (l_U525 == 0))
    {
        if ((l_U529 == 0) AND ((iParam0 != 4) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U837, -1092.00000000, 929.18160000, 13.21440000, 150.00000000, 150.00000000, 150.00000000, 0 ))))
        {
            sub_7473();
            if (NOT (IS_CAR_DEAD( l_U805 )))
            {
                LOCK_CAR_DOORS( l_U805, 2 );
            }
            l_U529 = 1;
        }
        if (l_U529 == 1)
        {
            sub_7687();
        }
        if ((l_U523 == 0) AND (l_U526 == 0))
        {
            SETTIMERA( 0 );
            while ((l_U523 == 0) AND (TIMERA() < 3500))
            {
                if (l_U529 == 1)
                {
                    sub_7687();
                }
                WAIT( 0 );
            }
            if (iParam0 == 1)
            {
                if (sub_8059( 13, "DM3_CHELP", "DM3AUD", 7000, 0 ))
                {
                    l_U526 = 1;
                }
            }
            else if (iParam0 == 2)
            {
                if (sub_8059( 13, "DM3_CHELP", "DM3AUD", 7000, 0 ))
                {
                    l_U526 = 1;
                }
            }
            else if (iParam0 == 3)
            {
                ;
            }
            else if (iParam0 == 4)
            {
                if (sub_12019( 13, "", "" ))
                {
                    WAIT( 2500 );
                    if (NOT IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 750 );
                    }
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    l_U526 = 1;
                }
            };;;;
        }
        if ((l_U523 == 0) AND (l_U526 == 1))
        {
            while ((l_U523 == 0) AND (sub_12180()))
            {
                if (sub_12290( 13 ))
                {
                    CLEAR_HELP();
                }
                if (l_U529 == 1)
                {
                    sub_7687();
                }
                WAIT( 0 );
            }
            if (iParam0 == 4)
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_OUT( 750 );
                }
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            switch (sub_12484())
            {
                case 1:
                case 2:
                l_U526 = 0;
                break;
                case 4: break;
                case 5: break;
                case 6:
                l_U525 = 1;
                break;
                default: l_U526 = 0;
            }
            if (l_U525 == 1)
            {
                while (NOT (sub_12643( 0 )))
                {
                    if (l_U529 == 1)
                    {
                        sub_7687();
                    }
                    WAIT( 0 );
                }
            }
        }
        l_U526 = 0;
        WAIT( 0 );
    }
    l_U525 = 0;
    l_U526 = 0;
    if ((iParam0 != 4) AND (NOT (IS_CAR_DEAD( l_U805 ))))
    {
        LOCK_CAR_DOORS( l_U805, 1 );
    }
    return;
}

void sub_7473()
{
    if (IS_CAR_DEAD( l_U805 ))
    {
        CREATE_CAR( l_U818, -1092.00000000, 929.18160000, 13.21440000, ref l_U805, 1 );
        SET_CAR_HEADING( l_U805, 265.35810000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U805 );
        SET_CAR_PROOFS( l_U805, 1, 0, 0, 0, 0 );
        SET_VEH_HAS_STRONG_AXLES( l_U805, 1 );
        ADD_UPSIDEDOWN_CAR_CHECK( l_U805 );
        SET_CAR_AS_MISSION_CAR( l_U805 );
        SET_CAR_ENGINE_ON( l_U805, 1, 1 );
    }
    return;
}

void sub_7687()
{
    if ((l_U523 == 0) AND (IS_CAR_DEAD( l_U805 )))
    {
        PRINT_NOW( "DM_FAIL_05", 7000, 1 );
        l_U490 = -1;
        l_U523 = 1;
    }
    if ((l_U523 == 0) AND (NOT (IS_CAR_DEAD( l_U805 ))))
    {
        if ((NOT (IS_VEH_DRIVEABLE( l_U805 ))) || (sub_7788( l_U805 )))
        {
            PRINT_NOW( "DM_FAIL_05", 7000, 1 );
            l_U490 = -1;
            l_U523 = 1;
        }
    }
    return;
}

int sub_7788(unknown uParam0)
{
    if ((CHECK_STUCK_TIMER( uParam0, 0, 5000 )) || ((CHECK_STUCK_TIMER( uParam0, 1, 40000 )) || ((CHECK_STUCK_TIMER( uParam0, 2, 30000 )) || (CHECK_STUCK_TIMER( uParam0, 3, 60000 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_8059(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_8119( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_8119(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_8189( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_8189( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_6763() )))
    {
        sub_8189( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3432() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3432() )))
    {
        sub_8189( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_8189( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_8646()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((NOT bParam8) || (g_U91._fU372))
            {
                sub_8189( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 4) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 5))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_8646()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_10018( uParam0, ref g_U91._fU176 );
    sub_11399( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_6728( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_8189(unknown uParam0)
{
    return;
}

int sub_8646()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_8703())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_8703()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_6763() )))
    {
        sub_8189( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_8189( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_8189( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_8189( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_6763() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3432() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3432(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_8189( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3432() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_8189( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_8189( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_6763() )))
    {
        sub_8189( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_10018(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_11399(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_12019(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_8119( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_12180()
{
    if (g_U91._fU60 != -1)
    {
        if ((g_U15946[g_U91._fU60]._fU132._fU24 == 3) || (g_U15946[g_U91._fU60]._fU132._fU24 == 0))
        {
            return 1;
        }
    }
    return 0;
}

int sub_12290(int iParam0)
{
    if (sub_12299())
    {
        if (g_U91._fU60 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_12299()
{
    if ((g_U91._fU0 == 1008) || (g_U91._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_12484()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_12643(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_3432(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_8189( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_13146(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_13400()
{
    sub_13424( "missderrick3" );
    while (NOT sub_13476())
    {
        WAIT( 0 );
    }
    return;
}

void sub_13424(unknown uParam0)
{
    REQUEST_ANIMS( uParam0 );
    l_U712[l_U728] = uParam0;
    l_U728++;
    return;
}

int sub_13476()
{
    int I;

    if (l_U728 != 0)
    {
        for ( I = 0; I <= (l_U728 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U712[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_13588()
{
    # -sub_C1FFC0-0xc214c8( 2, ref l_U830 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U829 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U828 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U827 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U833 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U834 );
    LOAD_COMBAT_DECISION_MAKER( 9, ref l_U835 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U832 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U836 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U833, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U834, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U835, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U836, 25 );
    return;
}

void sub_13788()
{
    if ((l_U568 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U837, -1092.00000000, 929.18160000, 13.21440000, 200.00000000, 200.00000000, 200.00000000, 0 )))
    {
        if (l_U529 == 0)
        {
            sub_7473();
            l_U529 = 1;
        }
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            ;
        }
        if (DOES_BLIP_EXIST( l_U618 ))
        {
            REMOVE_BLIP( l_U618 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U618 )))
        {
            ADD_BLIP_FOR_CAR( l_U805, ref l_U618 );
            CHANGE_BLIP_COLOUR( l_U618, 3 );
            SET_ROUTE( l_U618, 1 );
            sub_13146( ref l_U618, -1035.18600000, 930.08200000, 12.52260000, 6.34650000 );
        }
        sub_14014();
        sub_14284();
        sub_13400();
        sub_13588();
        l_U568 = 1;
    }
    if ((l_U562 == 1) AND (l_U529 == 1))
    {
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            if (IS_CHAR_IN_CAR( l_U837, l_U805 ))
            {
                LOCK_CAR_DOORS( l_U805, 4 );
            }
            if (IS_CHAR_SITTING_IN_CAR( l_U837, l_U805 ))
            {
                CLEAR_CHAR_TASKS( l_U837 );
                TASK_CAR_TEMP_ACTION( l_U837, l_U805, 1, 10000 );
                FREEZE_CAR_POSITION( l_U805, 1 );
                LOCK_CAR_DOORS( l_U805, 4 );
                GIVE_DELAYED_WEAPON_TO_CHAR( l_U837, 18, 2, 0 );
                if (DOES_BLIP_EXIST( l_U618 ))
                {
                    REMOVE_BLIP( l_U618 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U619 )))
                {
                    ADD_BLIP_FOR_COORD( -623.67840000, 656.64180000, -26.29200000, ref l_U619 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U620 )))
                {
                    ADD_BLIP_FOR_COORD( -643.43010000, 665.88360000, -25.04450000, ref l_U620 );
                    CHANGE_BLIP_SCALE( l_U620, 0.00000000 );
                    SET_ROUTE( l_U620, 1 );
                }
                sub_7382( 4 );
                if (NOT (IS_CAR_DEAD( l_U805 )))
                {
                    FREEZE_CAR_POSITION( l_U805, 1 );
                    LOCK_CAR_DOORS( l_U805, 1 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U805 );
                }
                l_U490++;
            }
        }
    }
    if (l_U529 == 1)
    {
        sub_7687();
    }
    if ((l_U562 == 1) AND (IS_WANTED_LEVEL_GREATER( l_U838, 0 )))
    {
        if (DOES_BLIP_EXIST( l_U618 ))
        {
            REMOVE_BLIP( l_U618 );
        }
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            LOCK_CAR_DOORS( l_U805, 2 );
        }
        PRINT_NOW( "DM_CMD_13", 7500, 1 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U837, 0 );
        l_U562 = 0;
    }
    if ((l_U562 == 0) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U838, 0 ))))
    {
        if (NOT (DOES_BLIP_EXIST( l_U618 )))
        {
            ADD_BLIP_FOR_COORD( -1092.00000000, 929.18160000, 13.21440000, ref l_U618 );
            CHANGE_BLIP_COLOUR( l_U618, 3 );
            SET_ROUTE( l_U618, 1 );
            sub_13146( ref l_U618, -1035.18600000, 930.08200000, 12.52260000, 6.34650000 );
        }
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            LOCK_CAR_DOORS( l_U805, 1 );
        }
        PRINT_NOW( "DM_CMD_02", 7500, 1 );
        SETTIMERA( 0 );
        l_U562 = 1;
    }
    return;
}

void sub_14014()
{
    sub_6804( l_U760 );
    GET_CURRENT_COP_MODEL( ref l_U761 );
    sub_6804( l_U762 );
    while (NOT (HAS_MODEL_LOADED( l_U760 )))
    {
        PRINTSTRING( "\n\n\----> Load Prisoner Model \n\n\n" );
        WAIT( 0 );
    }
    while (NOT (HAS_MODEL_LOADED( l_U761 )))
    {
        PRINTSTRING( "\n\n\----> Load Cop Model \n\n\n" );
        REQUEST_MODEL( l_U761 );
        WAIT( 0 );
    }
    while (NOT (HAS_MODEL_LOADED( l_U762 )))
    {
        PRINTSTRING( "\n\n\----> Load Swat Model \n\n\n" );
        WAIT( 0 );
    }
    return;
}

void sub_14284()
{
    sub_6804( l_U819 );
    GET_CURRENT_POLICE_CAR_MODEL( ref l_U820 );
    sub_6804( l_U821 );
    sub_6804( l_U822 );
    while (NOT (HAS_MODEL_LOADED( l_U819 )))
    {
        PRINTSTRING( "\n\n\----> Load Packie Car Model \n\n\n" );
        WAIT( 0 );
    }
    while (NOT (HAS_MODEL_LOADED( l_U820 )))
    {
        PRINTSTRING( "\n\n\----> Load Cop Car Model \n\n\n" );
        REQUEST_MODEL( l_U820 );
        WAIT( 0 );
    }
    while (NOT (HAS_MODEL_LOADED( l_U821 )))
    {
        PRINTSTRING( "\n\n\----> Load Patriot Car Model \n\n\n" );
        WAIT( 0 );
    }
    while (NOT (HAS_MODEL_LOADED( l_U822 )))
    {
        PRINTSTRING( "\n\n\----> Load Stockade Car Model \n\n\n" );
        WAIT( 0 );
    }
    return;
}

void sub_15419()
{
    FREEZE_CHAR_POSITION( l_U837, 1 );
    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 750 );
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    g_U9890 = 1;
    SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 0, 1, 1 );
    SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
    GET_CHAR_COORDINATES( l_U837, ref l_U511._fU0, ref l_U511._fU4, ref l_U511._fU8 );
    if (IS_CHAR_IN_ANY_CAR( l_U837 ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( l_U837, -417.55030000, 1107.79200000, 27.83050000 + 5.00000000 );
    }
    else
    {
        SET_CHAR_COORDINATES( l_U837, -417.55030000, 1107.79200000, 27.83050000 + 5.00000000 );
    }
    SET_CHAR_VISIBLE( l_U837, 0 );
    FREEZE_CHAR_POSITION( l_U837, 1 );
    SET_CHAR_COLLISION( l_U837, 0 );
    CLEAR_AREA( -423.81810000, 1097.88400000, 10.59930000, 100.00000000, 1 );
    SET_CAR_DENSITY_MULTIPLIER( 0.10000000 );
    sub_14014();
    sub_14284();
    sub_13400();
    sub_15738();
    sub_16484();
    sub_17638();
    sub_18230();
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    l_U540 = 1;
    while (sub_26102( l_U848 ))
    {
        WAIT( 0 );
    }
    PRINT_NOW( "DM_CMD_03", 7500, 1 );
    if (NOT (DOES_BLIP_EXIST( l_U619 )))
    {
        ADD_BLIP_FOR_COORD( -623.67840000, 656.64180000, -26.29200000, ref l_U619 );
    }
    if (NOT (DOES_BLIP_EXIST( l_U620 )))
    {
        ADD_BLIP_FOR_COORD( -643.43010000, 665.88360000, -25.04450000, ref l_U620 );
        CHANGE_BLIP_SCALE( l_U620, 0.00000000 );
        SET_ROUTE( l_U620, 1 );
    }
    l_U490++;
    return;
}

void sub_15738()
{
    CREATE_CAR( l_U821, -396.43700000, 1094.31300000, 12.61390000, ref l_U811[0], 1 );
    SET_CAR_HEADING( l_U811[0], 269.95380000 );
    SET_CAR_COORDINATES( l_U811[0], -396.43700000, 1094.31300000, 12.61390000 );
    SET_CAR_ENGINE_ON( l_U811[0], 1, 1 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U811[0], 1 );
    SET_CAR_ON_GROUND_PROPERLY( l_U811[0] );
    GET_CURRENT_POLICE_CAR_MODEL( ref l_U820 );
    while (NOT (HAS_MODEL_LOADED( l_U820 )))
    {
        PRINTSTRING( "\n\n\----> Load Cop Car Model \n\n\n" );
        REQUEST_MODEL( l_U820 );
        WAIT( 0 );
    }
    CREATE_CAR( l_U820, -402.73350000, 1094.24000000, 11.87930000, ref l_U807[0], 1 );
    SET_CAR_HEADING( l_U807[0], 270.40300000 );
    SET_CAR_COORDINATES( l_U807[0], -402.73350000, 1094.24000000, 11.87930000 );
    SET_CAR_ENGINE_ON( l_U807[0], 1, 1 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U807[0], 1 );
    SET_CAR_ON_GROUND_PROPERLY( l_U807[0] );
    CREATE_CAR( l_U822, -412.09270000, 1097.63900000, 11.14100000, ref l_U813, 1 );
    SET_CAR_HEADING( l_U813, 271.02740000 );
    SET_CAR_COORDINATES( l_U813, -412.09270000, 1097.63900000, 11.14100000 );
    SET_CAR_ENGINE_ON( l_U813, 1, 1 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U813, 1 );
    SET_CAR_ON_GROUND_PROPERLY( l_U813 );
    STOP_CAR_BREAKING( l_U813, 1 );
    GET_CURRENT_POLICE_CAR_MODEL( ref l_U820 );
    while (NOT (HAS_MODEL_LOADED( l_U820 )))
    {
        PRINTSTRING( "\n\n\----> Load Cop Car Model \n\n\n" );
        REQUEST_MODEL( l_U820 );
        WAIT( 0 );
    }
    CREATE_CAR( l_U820, -421.90340000, 1097.59300000, 10.13690000, ref l_U807[1], 1 );
    SET_CAR_HEADING( l_U807[1], 269.68710000 );
    SET_CAR_COORDINATES( l_U807[1], -421.90340000, 1097.59300000, 10.13690000 );
    SET_CAR_ENGINE_ON( l_U807[1], 1, 1 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U807[1], 1 );
    SET_CAR_ON_GROUND_PROPERLY( l_U807[1] );
    return;
}

void sub_16484()
{
    GET_CURRENT_COP_MODEL( ref l_U761 );
    CREATE_CHAR( 26, l_U761, -416.78530000, 1103.19000000, 12.87110000 - 1.00000000, ref l_U736[0], 1 );
    SET_CHAR_HEADING( l_U736[0], 250.72590000 );
    if ((NOT (IS_CAR_DEAD( l_U807[0] ))) AND (NOT (IS_CHAR_INJURED( l_U736[0] ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U736[0], 1 );
        OPEN_SEQUENCE_TASK( ref l_U669 );
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "scratch_neck", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "yawn_short_walk", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -406.06830000, 1099.52800000, 12.95890000, 2, 10000, 1.00000000 );
        CLOSE_SEQUENCE_TASK( l_U669 );
        TASK_PERFORM_SEQUENCE( l_U736[0], l_U669 );
        CLEAR_SEQUENCE_TASK( l_U669 );
    }
    CREATE_CHAR( 26, l_U761, -418.22530000, 1101.75500000, 12.71900000 - 1.00000000, ref l_U736[1], 1 );
    SET_CHAR_HEADING( l_U736[1], 315.18600000 );
    if ((NOT (IS_CAR_DEAD( l_U807[0] ))) AND (NOT (IS_CHAR_INJURED( l_U736[1] ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U736[1], 1 );
        OPEN_SEQUENCE_TASK( ref l_U669 );
        TASK_STAND_STILL( 0, 500 );
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "yawn_short_walk", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "scratch_neck", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -406.06830000, 1099.52800000, 12.95890000, 2, 10000, 1.00000000 );
        CLOSE_SEQUENCE_TASK( l_U669 );
        TASK_PERFORM_SEQUENCE( l_U736[1], l_U669 );
        CLEAR_SEQUENCE_TASK( l_U669 );
    }
    CREATE_CHAR( 26, l_U761, -392.18550000 - 3.00000000, 271.71450000, 14.07970000 - 1.00000000, ref l_U736[2], 1 );
    if ((NOT (IS_CAR_DEAD( l_U807[1] ))) AND (NOT (IS_CHAR_DEAD( l_U736[2] ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U736[2], 1 );
        WARP_CHAR_INTO_CAR( l_U736[2], l_U807[1] );
    }
    CREATE_CHAR( 26, l_U761, -392.18550000 - 4.00000000, 271.71450000, 14.07970000 - 1.00000000, ref l_U736[3], 1 );
    if ((NOT (IS_CAR_DEAD( l_U807[1] ))) AND (NOT (IS_CHAR_DEAD( l_U736[3] ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U736[3], 1 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U736[3], l_U807[1], 0 );
    }
    CREATE_CHAR( 26, l_U761, -392.18550000 - 7.00000000, 271.71450000, 14.07970000 - 1.00000000, ref l_U736[6], 1 );
    if ((NOT (IS_CAR_DEAD( l_U807[1] ))) AND (NOT (IS_CHAR_DEAD( l_U736[6] ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U736[6], 1 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U736[6], l_U807[1], 1 );
    }
    CREATE_CHAR( 26, l_U761, -392.18550000 - 8.00000000, 271.71450000, 14.07970000 - 1.00000000, ref l_U736[7], 1 );
    if ((NOT (IS_CAR_DEAD( l_U807[1] ))) AND (NOT (IS_CHAR_DEAD( l_U736[7] ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U736[7], 1 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U736[7], l_U807[1], 2 );
    }
    return;
}

void sub_17638()
{
    CREATE_CHAR( 26, l_U762, -392.18550000 - 5.00000000, 271.71450000, 14.07970000 - 1.00000000, ref l_U745[0], 1 );
    if ((NOT (IS_CAR_DEAD( l_U811[0] ))) AND (NOT (IS_CHAR_DEAD( l_U745[0] ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U745[0], 1 );
        WARP_CHAR_INTO_CAR( l_U745[0], l_U811[0] );
    }
    CREATE_CHAR( 26, l_U762, -392.18550000 - 6.00000000, 271.71450000, 14.07970000 - 1.00000000, ref l_U745[1], 1 );
    if ((NOT (IS_CAR_DEAD( l_U811[0] ))) AND (NOT (IS_CHAR_DEAD( l_U745[1] ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U745[1], 1 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U745[1], l_U811[0], 0 );
    }
    CREATE_CHAR( 26, l_U762, -392.18550000 - 7.00000000, 271.71450000, 14.07970000 - 1.00000000, ref l_U745[2], 1 );
    if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U745[2] ))))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U745[2], 1 );
        WARP_CHAR_INTO_CAR( l_U745[2], l_U813 );
    }
    REQUEST_ANIMS( "MOVE_COP" );
    while (NOT (HAVE_ANIMS_LOADED( "MOVE_COP" )))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 26, l_U762, -392.18550000 - 8.00000000, 271.71450000, 14.07970000 - 1.00000000, ref l_U745[3], 1 );
    if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U745[3] ))))
    {
        SET_ANIM_GROUP_FOR_CHAR( l_U745[3], "MOVE_COP" );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U745[3], 1 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U745[3], l_U813, 0 );
    }
    return;
}

void sub_18230()
{
    unknown uVar2;
    int I;
    int iVar4;
    vector[6] vVar5;
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
    vector[6] vVar24;
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
    float[6] fVar43;
    unknown[6] uVar50;
    boolean bVar57;

    array(ref vVar5, 6);
    array(ref vVar24, 6);
    array(ref fVar43, 6);
    array(ref uVar50, 6);
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3432(), 1 );
    g_U9890 = 1;
    sub_18281();
    sub_18409();
    CREATE_CAM( 3, ref l_U639 );
    vVar5[0] = {-450.26030000, 1081.08300000, 11.22699000};
    vVar24[0] = {-10.66100000, 0.00000000, -78.34542000};
    fVar43[0] = 54;
    l_U501 = 54;
    vVar5[0] = {-452.29820000, 1081.09500000, 11.28107000};
    vVar24[0] = {-1.72289000, 0.34361900, -77.09522000};
    fVar43[0] = 40;
    vVar5[5] = {-452.29820000, 1081.09500000, 11.28107000};
    vVar24[5] = {-1.72289000, 0.34361900, -77.09522000};
    fVar43[5] = 30;
    l_U501 = 40;
    vVar5[0] = {-453.29230000, 1080.16900000, 17.85617000};
    vVar24[0] = {-2.75511600, -1.48796900, -70.82543000};
    fVar43[0] = 45;
    vVar5[5] = {-452.29820000, 1081.09500000, 11.28107000};
    vVar24[5] = {-1.72289000, 0.34361900, -77.09522000};
    fVar43[5] = 40;
    l_U501 = 40;
    vVar5[1] = {-415.54280000, 1095.18400000, 12.45800000};
    vVar24[1] = {-11.11538000, -0.00000000, 39.68460000};
    fVar43[1] = 35;
    vVar5[1] = {-415.16670000, 1095.31300000, 11.63128000};
    vVar24[1] = {1.83745500, -0.00000000, 41.51801000};
    fVar43[1] = 42;
    vVar5[2] = {-386.05640000, 1093.81100000, 13.90379000};
    vVar24[2] = {-3.57405900, -0.00000000, 89.25565000};
    fVar43[2] = 30;
    vVar5[3] = {-380.11310000, 1093.43100000, 17.75809000};
    vVar24[3] = {-17.21043000, 0.00000000, 90.63069000};
    fVar43[3] = 45;
    vVar5[4] = {-402.41440000, 1092.97700000, 14.08868000};
    vVar24[4] = {-9.83436300, -11.13605000, 43.96152000};
    fVar43[4] = 36;
    if (NOT (IS_CHAR_INJURED( l_U731 )))
    {
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U731, "crim_searched", "missderrick3", 4.00000000, 0, 0, 0, 1, -2 );
    }
    if (NOT (IS_CHAR_INJURED( l_U736[0] )))
    {
        SET_CHAR_COORDINATES( l_U736[0], -429.86100000 - 0.30000000, 1100.80000000, 9.59830000 );
        SET_CHAR_HEADING( l_U736[0], 299.13660000 );
        OPEN_SEQUENCE_TASK( ref l_U669 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -421.26000000 - 0.20000000, 1103.36000000 + 0.30000000, 10.33000000, 2, 15000, 0.25000000 );
        TASK_ACHIEVE_HEADING( 0, 224.00000000 );
        CLOSE_SEQUENCE_TASK( l_U669 );
        TASK_PERFORM_SEQUENCE( l_U736[0], l_U669 );
        CLEAR_SEQUENCE_TASK( l_U669 );
    }
    if (NOT (IS_CHAR_INJURED( l_U736[1] )))
    {
        SET_CHAR_COORDINATES( l_U736[1], -429.92540000 - 0.30000000, 1098.00000000, 9.54760000 );
        SET_CHAR_HEADING( l_U736[1], 308.65030000 );
        OPEN_SEQUENCE_TASK( ref l_U669 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -422.13000000 - 0.20000000, 1101.29000000 - 0.30000000, 10.25000000, 2, 15000, 0.25000000 );
        TASK_ACHIEVE_HEADING( 0, 224.00000000 );
        CLOSE_SEQUENCE_TASK( l_U669 );
        TASK_PERFORM_SEQUENCE( l_U736[1], l_U669 );
        CLEAR_SEQUENCE_TASK( l_U669 );
    }
    if (NOT (IS_CHAR_DEAD( l_U731 )))
    {
        SET_CHAR_COORDINATES( l_U731, -430.95370000 - 0.80000000, 1099.18100000, 9.49800000 );
        SET_CHAR_HEADING( l_U731, 301.06140000 );
        OPEN_SEQUENCE_TASK( ref l_U669 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -421.62000000, 1102.38000000, 10.30000000, 2, 15000, 0.25000000 );
        TASK_ACHIEVE_HEADING( 0, 223.82990000 );
        CLOSE_SEQUENCE_TASK( l_U669 );
        TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
        CLEAR_SEQUENCE_TASK( l_U669 );
    }
    SET_WIDESCREEN_BORDERS( 1 );
    BEGIN_CAM_COMMANDS( ref uVar2 );
    for ( I = 0; I < vVar5; I++ )
    {
        CREATE_CAM( 14, ref uVar50[I] );
        SET_CAM_POS( uVar50[I], vVar5[I]._fU0, vVar5[I]._fU4, vVar5[I]._fU8 );
        SET_CAM_ROT( uVar50[I], vVar24[I]._fU0, vVar24[I]._fU4, vVar24[I]._fU8 );
        SET_CAM_FOV( uVar50[I], fVar43[I] );
        SET_CAM_ACTIVE( uVar50[I], 1 );
    }
    SET_CAM_PROPAGATE( uVar50[0], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    I = 0;
    iVar4 = 0;
    bVar57 = false;
    SETTIMERA( 0 );
    SETTIMERB( 0 );
    LOAD_SCENE( -423.81810000, 1097.88400000, 10.59930000 );
    WAIT( 750 );
    if (NOT IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_IN( 750 );
    }
    SETTIMERA( 0 );
    SETTIMERB( 0 );
    while ((NOT ((TIMERA() > 1000) AND (sub_22054()))) AND (NOT bVar57))
    {
        if ((TIMERB() > 750) AND (iVar4 == 0))
        {
            iVar4 = 1;
            sub_22213( "DM3_CTRUCK", ref l_U848, 6, 1 );
        }
        if ((TIMERB() > 0) AND (I == 0))
        {
            I = 1;
            SET_CAM_ACTIVE( uVar50[0], 1 );
            SET_CAM_PROPAGATE( uVar50[0], 1 );
            SET_CAM_PROPAGATE( uVar50[0], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U639, uVar50[0], uVar50[5], 10000, 0 );
            SET_CAM_ACTIVE( l_U639, 1 );
            SET_CAM_PROPAGATE( l_U639, 1 );
        }
        if ((TIMERB() > 0) AND (I == 1))
        {
            I = 2;
            if ((NOT (IS_CAR_DEAD( l_U813 ))) AND ((NOT (IS_CHAR_DEAD( l_U731 ))) AND (NOT (IS_CHAR_DEAD( l_U745[3] )))))
            {
                CONTROL_CAR_DOOR( l_U813, 2, 0, 1.00000000 );
                CONTROL_CAR_DOOR( l_U813, 3, 0, 1.00000000 );
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U813 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -416.55000000 - 1.10000000, 1096.60000000, 10.63000000, 2, 8000, 0.50000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U731 );
                TASK_STAND_STILL( 0, 1500 );
                TASK_PLAY_ANIM( 0, "indicate_right_c", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U745[3], l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
            }
        }
        if ((TIMERB() > 11000) AND (I == 2))
        {
            I = 3;
            if (NOT (IS_CHAR_DEAD( l_U731 )))
            {
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U731, "crim_searched", "missderrick3", 4.00000000, 0, 0, 0, 1, 999999 );
            }
            SETTIMERA( 0 );
            WAIT( 100 );
            if (NOT (IS_CHAR_DEAD( l_U745[3] )))
            {
                SET_CHAR_COORDINATES( l_U745[3], -416.55000000 - 0.60000000, 1096.60000000, 10.63000000 );
                FREEZE_CHAR_POSITION( l_U745[3], 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U731 )))
            {
                SET_CHAR_COORDINATES( l_U731, -421.62000000, 1102.38000000, 10.30000000 );
                SET_CHAR_HEADING( l_U731, 223.82990000 );
                TASK_GO_STRAIGHT_TO_COORD( l_U731, -416.48000000, 1097.92000000, 10.40000000, 2, 15000 );
            }
            if (NOT (IS_CHAR_DEAD( l_U736[0] )))
            {
                SET_CHAR_COORDINATES( l_U736[0], -421.26000000 - 0.20000000, 1103.36000000 + 0.30000000, 10.33000000 );
                SET_CHAR_HEADING( l_U736[0], 224.00000000 );
                TASK_GO_STRAIGHT_TO_COORD( l_U736[0], -416.08000000, 1098.88000000, 10.40000000, 2, 8000 );
            }
            if (NOT (IS_CHAR_DEAD( l_U736[1] )))
            {
                SET_CHAR_COORDINATES( l_U736[1], -422.13000000 - 0.20000000, 1101.29000000 - 0.30000000, 10.25000000 );
                SET_CHAR_HEADING( l_U736[1], 224.00000000 );
                TASK_GO_STRAIGHT_TO_COORD( l_U736[1], -417.01000000, 1098.69000000, 10.40000000, 2, 8000 );
            }
            if (NOT (IS_CAR_DEAD( l_U811[0] )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U811[0] );
            }
            if (NOT (IS_CAR_DEAD( l_U807[0] )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U807[0] );
            }
        }
        if ((TIMERB() > 0) AND (I == 3))
        {
            I = 4;
            SET_CAM_PROPAGATE( l_U639, 0 );
            SET_CAM_ACTIVE( uVar50[1], 1 );
            SET_CAM_PROPAGATE( uVar50[1], 1 );
        }
        if (I == 4)
        {
            I = 5;
            if ((NOT (IS_CAR_DEAD( l_U813 ))) AND ((NOT (IS_CHAR_DEAD( l_U731 ))) AND (NOT (IS_CHAR_DEAD( l_U745[3] )))))
            {
                if (HAS_CHAR_ANIM_FINISHED( l_U745[3], "MISSDERRICK3", "indicate_right_C" ))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_PASSENGER( l_U731, l_U813, 25000, 2 );
                    l_U559 = 1;
                }
            }
        }
        if ((TIMERB() > 15500) AND (I == 5))
        {
            I = 6;
            SET_CAM_PROPAGATE( uVar50[1], 0 );
            SET_CAM_ACTIVE( uVar50[2], 1 );
            SET_CAM_PROPAGATE( uVar50[2], 1 );
            SET_CAM_PROPAGATE( uVar50[2], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U639, uVar50[2], uVar50[3], 5000, 0 );
            SET_CAM_ACTIVE( l_U639, 1 );
            SET_CAM_PROPAGATE( l_U639, 1 );
            if (NOT (IS_CHAR_DEAD( l_U745[3] )))
            {
                FREEZE_CHAR_POSITION( l_U745[3], 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U811[0] )))
            {
                SET_SIREN_WITH_NO_DRIVER( l_U811[0], 1 );
                FORCE_CAR_LIGHTS( l_U811[0], 2 );
            }
            if ((NOT (IS_CAR_DEAD( l_U807[0] ))) AND (NOT (IS_CHAR_DEAD( l_U736[0] ))))
            {
                SET_SIREN_WITH_NO_DRIVER( l_U807[0], 1 );
                FORCE_CAR_LIGHTS( l_U807[0], 2 );
                WARP_CHAR_INTO_CAR( l_U736[0], l_U807[0] );
            }
            if ((NOT (IS_CAR_DEAD( l_U807[0] ))) AND (NOT (IS_CHAR_DEAD( l_U736[1] ))))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U736[1], l_U807[0], 0 );
            }
            if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U731 ))))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U731, l_U813, 1 );
            }
            if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U745[3] ))))
            {
                CONTROL_CAR_DOOR( l_U813, 0, 0, 0.00000000 );
                CONTROL_CAR_DOOR( l_U813, 1, 0, 0.00000000 );
                CONTROL_CAR_DOOR( l_U813, 2, 0, 0.00000000 );
                CONTROL_CAR_DOOR( l_U813, 3, 0, 0.00000000 );
                LOCK_CAR_DOORS( l_U813, 3 );
                CLOSE_ALL_CAR_DOORS( l_U813 );
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U745[3], l_U813, 0 );
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        }
        if ((TIMERB() > 15500) AND (I == 6))
        {
            I = 7;
            sub_25036();
        }
        if ((TIMERB() > 19000) AND (I == 7))
        {
            I = 8;
            if ((NOT (IS_CHAR_INJURED( l_U730 ))) AND (NOT (IS_CAR_DEAD( l_U806 ))))
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_CAR_TEMP_ACTION( 0, l_U806, 9, 1500 );
                TASK_CAR_TEMP_ACTION( 0, l_U806, 8, 2500 );
                TASK_CAR_TEMP_ACTION( 0, l_U806, 9, 3000 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
            }
        }
        if ((NOT (sub_26102( l_U848 ))) AND ((TIMERB() > 20000) AND (I == 8)))
        {
            bVar57 = true;
        }
        WAIT( 0 );
    }
    CLEAR_PRINTS();
    sub_26302( ref l_U848, 1 );
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 750 );
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    sub_26501();
    DELETE_CHAR( ref l_U730 );
    DELETE_CAR( ref l_U806 );
    for ( I = 0; I < vVar5; I++ )
    {
        SET_CAM_PROPAGATE( uVar50[I], 0 );
        SET_CAM_ACTIVE( uVar50[I], 0 );
        DESTROY_CAM( uVar50[I] );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 500 );
    SET_WIDESCREEN_BORDERS( 0 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    if (NOT (IS_CHAR_DEAD( sub_3432() )))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3432(), 0 );
        sub_3586();
        sub_3701();
        sub_26874();
        SET_CHAR_VISIBLE( l_U837, 1 );
        FREEZE_CHAR_POSITION( l_U837, 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U837 )))
        {
            SET_CHAR_COLLISION( l_U837, 1 );
        }
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            WARP_CHAR_INTO_CAR( l_U837, l_U805 );
            SET_CAR_ON_GROUND_PROPERLY( l_U805 );
            APPLY_FORCE_TO_CAR( l_U805, 1, 0, 0, 0.50000000, 0, 0, 0, 0, 1, 1, 1 );
            SET_ENGINE_HEALTH( l_U805, 1000 );
            FREEZE_CAR_POSITION( l_U805, 0 );
        }
        else
        {
            sub_7473();
            WAIT( 1000 );
            if (NOT (IS_CAR_DEAD( l_U805 )))
            {
                WARP_CHAR_INTO_CAR( l_U837, l_U805 );
                SET_CAR_HEADING( l_U805, 265.35810000 );
                SET_CAR_COORDINATES( l_U805, -1092.00000000, 929.18160000, 13.21440000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U805 );
                APPLY_FORCE_TO_CAR( l_U805, 1, 0, 0, 0.50000000, 0, 0, 0, 0, 1, 1, 1 );
                SET_ENGINE_HEALTH( l_U805, 1000 );
                FREEZE_CAR_POSITION( l_U805, 0 );
            }
        }
        WAIT( 1000 );
    }
    g_U9890 = 0;
    if (NOT (IS_CAR_DEAD( l_U805 )))
    {
        APPLY_FORCE_TO_CAR( l_U805, 1, 0, 0, 0.50000000, 0, 0, 0, 0, 1, 1, 1 );
    }
    LOAD_SCENE( l_U511._fU0, l_U511._fU4, l_U511._fU8 );
    if (NOT IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_IN( 750 );
    }
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 1, 1, 1 );
    END_CAM_COMMANDS( ref uVar2 );
    return;
}

void sub_18281()
{
    CREATE_CHAR( 26, l_U760, -421.62000000, 1102.38000000, 10.30000000, ref l_U731, 1 );
    SET_CHAR_HEADING( l_U731, 223.82990000 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U731, 1 );
    SET_CHAR_DECISION_MAKER( l_U731, l_U829 );
    SET_COMBAT_DECISION_MAKER( l_U731, l_U835 );
    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U731, 0 );
    return;
}

void sub_18409()
{
    sub_18419( 13 );
    while (NOT (sub_18451( 13 )))
    {
        WAIT( 0 );
    }
    sub_18533( 13, ref l_U730, -449.31660000 + 0.50000000, 1077.06000000, 8.87550000, 359.28430000 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U730, 1 );
    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U730, 0 );
    CREATE_CAR( l_U819, -449.31660000, 1077.06000000 + 2.00000000, 8.87550000, ref l_U806, 1 );
    SET_CAR_HEADING( l_U806, 359.28430000 );
    CHANGE_CAR_COLOUR( l_U806, 35, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U806 );
    SET_CAR_ENGINE_ON( l_U806, 1, 1 );
    if ((NOT (IS_CAR_DEAD( l_U806 ))) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
    {
        WARP_CHAR_INTO_CAR( l_U730, l_U806 );
    }
    if ((NOT (IS_CHAR_DEAD( l_U731 ))) AND (NOT (IS_CHAR_INJURED( l_U730 ))))
    {
        OPEN_SEQUENCE_TASK( ref l_U669 );
        TASK_LOOK_AT_CHAR( 0, l_U731, 30000, 0 );
        TASK_USE_MOBILE_PHONE_TIMED( 0, 40000 );
        CLOSE_SEQUENCE_TASK( l_U669 );
        TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
        CLEAR_SEQUENCE_TASK( l_U669 );
    }
    sub_6604( 7, l_U730, "PACKIE_MCREARY", 0 );
    return;
}

void sub_18419(unknown uParam0)
{
    REQUEST_MODEL( sub_4758( uParam0 ) );
    return;
}

void sub_18451(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_4758( uParam0 ) );
}

void sub_18533(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_4758( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_18583( uParam0, (uParam1^) );
    return;
}

void sub_18583(unknown uParam0, unknown uParam1)
{
    sub_18595( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_18595(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_18689( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_19233( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_18689(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_19233(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_18689( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_18689( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_18689( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_18689( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_18689( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_18689( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_18689( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_18689( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_18689( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_18689( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_18689( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_18689( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_18689( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

int sub_22054()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_22213(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22236( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_22236(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_22290( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_22290(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_22312( iParam1 )))
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
    sub_22992( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_22312(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_8189( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_8189( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_8189( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_22992(int iParam0, int iParam1)
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

void sub_25036()
{
    int iVar2;

    REQUEST_CAR_RECORDING( 639 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 639 )))
    {
        WAIT( 0 );
    }
    if (l_U540 == 0)
    {
        l_U643[0] = {-375.40630000, 331.68070000, 14.80170000};
    }
    else
    {
        l_U643[0] = {-913.46930000, 779.03130000, -1.30850000};
        l_U643[1] = {-1120.64300000, -434.47630000, 2.95320000};
        l_U663 = 15.00000000;
    }
    if ((NOT (IS_CHAR_DEAD( l_U745[0] ))) AND (NOT (IS_CAR_DEAD( l_U811[0] ))))
    {
        if (IS_CHAR_IN_CAR( l_U745[0], l_U811[0] ))
        {
            if (l_U662 < l_U643)
            {
                if (NOT (LOCATE_CHAR_IN_CAR_2D( l_U745[0], l_U643[l_U662]._fU0, l_U643[l_U662]._fU4, 4.00000000, 4.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U745[0], 15, ref iVar2 );
                    if (iVar2 == 7)
                    {
                        CLEAR_CHAR_TASKS( l_U745[0] );
                        SET_SIREN_WITH_NO_DRIVER( l_U811[0], 1 );
                        FORCE_CAR_LIGHTS( l_U811[0], 2 );
                        TASK_CAR_DRIVE_TO_COORD( l_U745[0], l_U811[0], l_U643[l_U662]._fU0, l_U643[l_U662]._fU4, l_U643[l_U662]._fU8, l_U663, 0, l_U821, 3, 4.00000000, -1 );
                    }
                }
                else
                {
                    l_U662++;
                }
            }
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U736[0] ))) AND (NOT (IS_CAR_DEAD( l_U807[0] ))))
    {
        if (IS_CHAR_IN_CAR( l_U736[0], l_U807[0] ))
        {
            if (NOT (IS_CAR_DEAD( l_U811[0] )))
            {
                CLEAR_CHAR_TASKS( l_U736[0] );
                SET_SIREN_WITH_NO_DRIVER( l_U807[0], 1 );
                FORCE_CAR_LIGHTS( l_U807[0], 2 );
                TASK_CAR_MISSION( l_U736[0], l_U807[0], l_U811[0], 12, l_U663, 3, 2, 30 );
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U813 )))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U813 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U813, 639 );
            SET_PLAYBACK_SPEED( l_U813, 1.00000000 );
        }
    }
    if ((NOT (IS_CHAR_DEAD( l_U736[2] ))) AND (NOT (IS_CAR_DEAD( l_U807[1] ))))
    {
        if (IS_CHAR_IN_CAR( l_U736[2], l_U807[1] ))
        {
            if (NOT (IS_CAR_DEAD( l_U813 )))
            {
                CLEAR_CHAR_TASKS( l_U736[2] );
                SET_SIREN_WITH_NO_DRIVER( l_U807[1], 1 );
                FORCE_CAR_LIGHTS( l_U807[1], 2 );
                TASK_CAR_MISSION( l_U736[2], l_U807[1], l_U813, 12, l_U663, 3, 2, 30 );
            }
        }
    }
    return;
}

int sub_26102(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_8189( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_8189( "\n speech is not playing" );
    }
    return 0;
}

void sub_26302(int iParam0, unknown uParam1)
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

void sub_26501()
{
    int I;

    DELETE_CAR( ref l_U811[0] );
    DELETE_CAR( ref l_U807[0] );
    DELETE_CAR( ref l_U813 );
    DELETE_CAR( ref l_U807[1] );
    for ( I = 0; I < 8; I++ )
    {
        if (DOES_CHAR_EXIST( l_U736[I] ))
        {
            DELETE_CHAR( ref l_U736[I] );
        }
    }
    I = 0;
    for ( I = 0; I < 6; I++ )
    {
        if (DOES_CHAR_EXIST( l_U745[I] ))
        {
            DELETE_CHAR( ref l_U745[I] );
        }
    }
    sub_3828();
    return;
}

void sub_26874()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U820 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U821 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U818 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U819 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U822 );
    return;
}

void sub_27682()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    int I;

    if ((l_U539 == 0) AND (NOT (IS_CAR_DEAD( l_U805 ))))
    {
        if ((IS_CHAR_IN_CAR( l_U837, l_U805 )) AND (LOCATE_CAR_3D( l_U805, -623.67840000, 656.64180000, -26.29200000 + 1.00000000, 20.00000000, 20.00000000, 20.00000000, 0 )))
        {
            PRINT_HELP_FOREVER( "DM_HELP_01" );
            if (DOES_BLIP_EXIST( l_U620 ))
            {
                REMOVE_BLIP( l_U620 );
            }
            l_U581 = 1;
        }
        else if (l_U581 == 1)
        {
            CLEAR_HELP();
            l_U581 = 0;
        }
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            if (IS_CHAR_IN_CAR( l_U837, l_U805 ))
            {
                if (NOT (DOES_BLIP_EXIST( l_U620 )))
                {
                    ADD_BLIP_FOR_COORD( -643.43010000, 665.88360000, -25.04450000, ref l_U620 );
                    CHANGE_BLIP_SCALE( l_U620, 0.00000000 );
                    SET_ROUTE( l_U620, 1 );
                }
            }
        }
    }
    if ((l_U539 == 0) AND (NOT (IS_CAR_DEAD( l_U805 ))))
    {
        GET_VEHICLE_QUATERNION( l_U805, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8, ref uVar7 );
        PRINTSTRING( "\n*\n*Truck Y Quaternion: " );
        PRINTFLOAT( uVar3._fU4 );
        PRINTNL();
        PRINTNL();
        PRINTNL();
        if ((uVar3._fU4 > -0.10000000) AND ((uVar3._fU4 < 0.10000000) AND ((IS_CHAR_SITTING_IN_CAR( l_U837, l_U805 )) AND ((IS_CAR_STOPPED( l_U805 )) AND (LOCATE_CAR_3D( l_U805, -623.67840000, 656.64180000 + 2.00000000, -26.29200000 + 2.00000000, 5.00000000, 5.00000000, 5.00000000, 0 ))))))
        {
            CLEAR_HELP();
            GET_CAR_HEADING( l_U805, ref fVar8 );
            if (((fVar8 < (300.00000000 - 180)) AND (fVar8 > (240.00000000 - 180))) || ((fVar8 < 300.00000000) AND (fVar8 > 240.00000000)))
            {
                if (l_U532 == 0)
                {
                    l_U532 = 1;
                }
                if (DOES_BLIP_EXIST( l_U619 ))
                {
                    REMOVE_BLIP( l_U619 );
                }
                if (DOES_BLIP_EXIST( l_U620 ))
                {
                    REMOVE_BLIP( l_U620 );
                }
                l_U539 = 1;
                l_U490++;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            if ((LOCATE_CAR_3D( l_U805, -620.15290000, 658.22830000, -26.19520000 + 1.50000000, 3.00000000, 3.00000000, 3.00000000, 1 )) AND (LOCATE_CAR_3D( l_U805, -627.07320000, 658.46680000, -26.18900000 + 1.50000000, 3.00000000, 3.00000000, 3.00000000, 1 )))
            {
                ;
            }
        }
    }
    if ((l_U542 == 0) AND (l_U539 == 1))
    {
        if ((NOT (IS_CAR_DEAD( l_U805 ))) AND (NOT (IS_CHAR_DEAD( l_U745[0] ))))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U745[0], l_U805, 15.00000000, 15.00000000, 15.00000000, 0 ))
            {
                CLEAR_CHAR_TASKS( l_U745[0] );
                WAIT( 2000 );
                l_U490++;
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U805 )))
    {
        if (NOT (LOCATE_CAR_3D( l_U805, -623.67840000, 656.64180000, -26.29200000 + 1.00000000, 5.00000000, 5.00000000, 5.00000000, 0 )))
        {
            GET_CAR_HEADING( l_U805, ref fVar8 );
            if (((fVar8 > (331.30390000 - 180)) AND (fVar8 < (237.93570000 - 180))) || ((fVar8 > 331.30390000) AND (fVar8 < 237.93570000)))
            {
                if (NOT (DOES_BLIP_EXIST( l_U619 )))
                {
                    ADD_BLIP_FOR_COORD( -623.67840000, 656.64180000, -26.29200000, ref l_U619 );
                    PRINT_NOW( "DM_CMD_03", 7500, 1 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U620 )))
                {
                    ADD_BLIP_FOR_COORD( -643.43010000, 665.88360000, -25.04450000, ref l_U620 );
                    CHANGE_BLIP_DISPLAY( l_U620, 0 );
                    CHANGE_BLIP_SCALE( l_U620, 0.00000000 );
                }
                l_U539 = 0;
            }
        }
    }
    if (l_U561 == 0)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U837, -623.67840000, 656.64180000, -26.29200000, 200.00000000, 200.00000000, 200.00000000, 0 )))
        {
            SWITCH_ROADS_OFF( 64696, 320, 65501, 65086, 800, -5 );
            SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
            CLEAR_AREA( -623.67840000, 656.64180000, -26.29200000, 100.00000000, 1 );
            l_U561 = 1;
        }
    }
    if (l_U583 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U837, -623.67840000, 656.64180000, -26.29200000, 350.00000000, 200.00000000, 100.00000000, 0 ))
        {
            sub_29146();
            SET_CAR_GENERATORS_ACTIVE_IN_AREA( -965.00000000, 779.00000000, -25.00000000, -640.00000000, 785.00000000, 5.00000000, 0 );
            l_U583 = 1;
        }
    }
    if (l_U584 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U837, -623.67840000, 656.64180000, -26.29200000, 200.00000000, 100.00000000, 50.00000000, 0 ))
        {
            for ( I = 0; I <= 9; I++ )
            {
                if (DOES_VEHICLE_EXIST( l_U780[I] ))
                {
                    if (NOT (IS_CAR_DEAD( l_U780[I] )))
                    {
                        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U780[I], 0 );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U780[I] );
                    }
                }
                if (DOES_CHAR_EXIST( l_U768[I] ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U768[I] )))
                    {
                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U768[I], 0 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U768[I] );
                    }
                }
            }
            l_U584 = 1;
        }
    }
    if (l_U539 == 0)
    {
        sub_30747();
        sub_30981();
    }
    sub_7687();
    return;
}

void sub_29146()
{
    sub_29156( 0 );
    if (l_U803 == 0)
    {
        CREATE_CAR( l_U791[0], -746.23350000, 769.90220000, -21.06050000, ref l_U780[0], 1 );
        SET_CAR_HEADING( l_U780[0], 270.10590000 );
        sub_29266( 0 );
    }
    sub_29156( 1 );
    if (l_U803 == 0)
    {
        CREATE_CAR( l_U791[1], -694.47330000, 771.79490000, -20.57040000, ref l_U780[1], 1 );
        SET_CAR_HEADING( l_U780[1], 256.15030000 );
        sub_29266( 1 );
    }
    sub_29156( 2 );
    if (l_U803 == 0)
    {
        CREATE_CAR( l_U791[2], -657.56590000, 739.74960000, -20.09100000, ref l_U780[2], 1 );
        SET_CAR_HEADING( l_U780[2], 207.45880000 );
        sub_29266( 2 );
    }
    sub_29156( 3 );
    if (l_U803 == 0)
    {
        CREATE_CAR( l_U791[3], -642.08280000, 686.38280000, -23.18070000, ref l_U780[3], 1 );
        SET_CAR_HEADING( l_U780[3], 181.03090000 );
        sub_29266( 3 );
    }
    sub_29156( 4 );
    if (l_U803 == 0)
    {
        CREATE_CAR( l_U791[4], -625.99310000, 665.30070000, -26.51810000, ref l_U780[4], 1 );
        SET_CAR_HEADING( l_U780[4], 0.05590000 );
        sub_29266( 4 );
    }
    sub_29156( 5 );
    if (l_U803 == 0)
    {
        CREATE_CAR( l_U791[5], -621.30160000, 695.29240000, -23.65650000, ref l_U780[5], 1 );
        SET_CAR_HEADING( l_U780[5], 0.61290000 );
        sub_29266( 5 );
    }
    sub_29156( 6 );
    if (l_U803 == 0)
    {
        CREATE_CAR( l_U791[6], -623.37130000, 726.87680000, -20.99030000, ref l_U780[6], 1 );
        SET_CAR_HEADING( l_U780[6], 9.22780000 );
        sub_29266( 6 );
    }
    sub_29156( 7 );
    if (l_U803 == 0)
    {
        CREATE_CAR( l_U791[7], -641.09310000, 760.66570000, -20.13090000, ref l_U780[7], 1 );
        SET_CAR_HEADING( l_U780[7], 43.14740000 );
        sub_29266( 7 );
    }
    sub_29156( 8 );
    if (l_U803 == 0)
    {
        CREATE_CAR( l_U791[8], -679.34200000, 785.19270000, -20.53980000, ref l_U780[8], 1 );
        SET_CAR_HEADING( l_U780[8], 79.77960000 );
        sub_29266( 8 );
    }
    sub_29156( 9 );
    if (l_U803 == 0)
    {
        CREATE_CAR( l_U791[9], -733.57730000, 783.63740000, -20.93520000, ref l_U780[9], 1 );
        SET_CAR_HEADING( l_U780[9], 87.21940000 );
        sub_29266( 9 );
    }
    return;
}

void sub_29156(unknown uParam0)
{
    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U791[uParam0], ref l_U803 );
    return;
}

void sub_29266(int iParam0)
{
    SET_CAR_ON_GROUND_PROPERLY( l_U780[iParam0] );
    SET_CAR_ENGINE_ON( l_U780[iParam0], 1, 1 );
    SET_ROOM_FOR_CAR_BY_NAME( l_U780[iParam0], "GtaMloRoomTUN2" );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U780[iParam0], 1 );
    SET_CAR_ENGINE_ON( l_U780[iParam0], 1, 1 );
    while (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U780[iParam0] )))
    {
        CREATE_RANDOM_CHAR_AS_DRIVER( l_U780[iParam0], ref l_U768[iParam0] );
        if (NOT (IS_CHAR_DEAD( l_U768[iParam0] )))
        {
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U768[iParam0], 1 );
            if (iParam0 > 3)
            {
                TASK_CAR_DRIVE_WANDER( l_U768[iParam0], l_U780[iParam0], 7.50000000, 2 );
            }
            else
            {
                TASK_CAR_DRIVE_TO_COORD( l_U768[iParam0], l_U780[iParam0], -488.52910000, 329.26060000, -8.78349900, 7.50000000, 0, l_U791[iParam0], 2, 3.00000000, 10 );
            }
            SET_CHAR_KEEP_TASK( l_U768[iParam0], 1 );
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U791[iParam0] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U768[iParam0] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U780[iParam0] );
    return;
}

void sub_30747()
{
    if (l_U538 == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U837, l_U805 )))
            {
                if (DOES_BLIP_EXIST( l_U619 ))
                {
                    REMOVE_BLIP( l_U619 );
                }
                if (DOES_BLIP_EXIST( l_U620 ))
                {
                    REMOVE_BLIP( l_U620 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U618 )))
                {
                    ADD_BLIP_FOR_CAR( l_U805, ref l_U618 );
                    CHANGE_BLIP_COLOUR( l_U618, 3 );
                    sub_13146( ref l_U618, -1035.18600000, 930.08200000, 12.52260000, 6.34650000 );
                }
                PRINT_NOW( "DM_CMD_10", 7500, 1 );
                l_U538 = 0;
            }
        }
    }
    return;
}

void sub_30981()
{
    if (l_U538 == 0)
    {
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            if (IS_CHAR_IN_CAR( l_U837, l_U805 ))
            {
                if (DOES_BLIP_EXIST( l_U618 ))
                {
                    REMOVE_BLIP( l_U618 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U619 )))
                {
                    ADD_BLIP_FOR_COORD( -623.67840000, 656.64180000, -26.29200000, ref l_U619 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U620 )))
                {
                    ADD_BLIP_FOR_COORD( -643.43010000, 665.88360000, -25.04450000, ref l_U620 );
                    CHANGE_BLIP_SCALE( l_U620, 0.00000000 );
                    SET_ROUTE( l_U620, 1 );
                }
                PRINT_NOW( "DM_CMD_03", 7500, 1 );
                l_U538 = 1;
            }
        }
    }
    return;
}

void sub_31248()
{
    if (l_U558 == 0)
    {
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        l_U558 = 1;
    }
    if (l_U541 == 0)
    {
        CLEAR_WANTED_LEVEL( l_U838 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        sub_31339();
        if (NOT (DOES_BLIP_EXIST( l_U622 )))
        {
            ADD_BLIP_FOR_CAR( l_U813, ref l_U622 );
            CHANGE_BLIP_COLOUR( l_U622, 3 );
        }
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        l_U541 = 1;
    }
    if (l_U546 == 0)
    {
        sub_42719();
        PRINT_NOW( "DM_CMD_15", 4000, 1 );
        SETTIMERA( 0 );
    }
    if ((NOT (sub_26102( l_U848 ))) AND ((TIMERA() > 4000) AND (l_U498 == 0)))
    {
        l_U498 = 1;
        if (NOT (IS_CHAR_INJURED( l_U736[0] )))
        {
            sub_39313( "DM3_APPR", 0, 1, ref l_U848, 6, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U736[0] )))
        {
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U736[0], "that_way", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
        }
        SETTIMERA( 0 );
    }
    if ((NOT (sub_26102( l_U848 ))) AND ((TIMERA() > 4000) AND (l_U498 == 1)))
    {
        l_U498 = 2;
        if (NOT (IS_CHAR_INJURED( l_U736[0] )))
        {
            sub_39313( "DM3_APPR2", 0, 1, ref l_U848, 6, 1 );
        }
    }
    if ((NOT (sub_26102( l_U848 ))) AND ((TIMERA() > 8000) AND (l_U498 == 2)))
    {
        l_U498 = 3;
        if (NOT (IS_CHAR_INJURED( l_U736[0] )))
        {
            sub_39313( "DM3_APPR", 2, 1, ref l_U848, 6, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U736[0] )))
        {
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U736[0], "point_fwd", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
        }
    }
    if ((NOT (sub_26102( l_U848 ))) AND ((TIMERA() > 12000) AND (l_U498 == 3)))
    {
        l_U498 = 4;
    }
    if ((TIMERA() > 13000) AND (l_U498 == 4))
    {
        l_U498 = 5;
        if (NOT (IS_CHAR_INJURED( l_U736[0] )))
        {
            ;
        }
    }
    if ((NOT (sub_26102( l_U848 ))) AND ((TIMERA() > 16000) AND (l_U498 == 5)))
    {
        l_U498 = 6;
        if (NOT (IS_CHAR_INJURED( l_U736[0] )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U493 );
            switch (l_U493)
            {
                case 0:
                sub_39313( "DM3_APPR2", 0, 1, ref l_U848, 6, 1 );
                break;
                case 1:
                sub_39313( "DM3_APPR2", 1, 1, ref l_U848, 6, 1 );
                break;
            }
        }
    }
    if (l_U548 == 0)
    {
        if ((NOT (IS_CHAR_INJURED( l_U730 ))) AND (NOT (IS_CAR_DEAD( l_U806 ))))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U806 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U669 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_SHOOT_AT_COORD( 0, -624.21120000, 608.63100000, -29.80966000 - 2.00000000, 4000, 2 );
                    CLOSE_SEQUENCE_TASK( l_U669 );
                    TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
                    CLEAR_SEQUENCE_TASK( l_U669 );
                }
                WAIT( 1000 );
                sub_22213( "DM3_PATTK", ref l_U848, 7, 0 );
                l_U548 = 1;
            }
        }
    }
    if (l_U552 == 0)
    {
        GET_CURRENT_CHAR_WEAPON( l_U837, ref l_U521 );
        l_U492 = l_U521;
        GET_CHAR_COORDINATES( l_U837, ref l_U511._fU0, ref l_U511._fU4, ref l_U511._fU8 );
        if ((IS_CHAR_SHOOTING_IN_AREA( l_U837, -653.25000000, 550, -614.25000000, 700, 0 )) || ((l_U548 == 1) || ((l_U511._fU4 < 656) AND (l_U492 != 0))))
        {
            l_U552 = 1;
            l_U490++;
        }
    }
    if (l_U547 == 0)
    {
        if ((NOT (IS_CAR_DEAD( l_U806 ))) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U730, -621.45030000, 616.97160000, -29.65500000, 9.00000000, 9.00000000, 9.00000000, 0 ))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U806 );
                l_U547 = 1;
            }
        }
    }
    return;
}

void sub_31339()
{
    unknown uVar2;
    int J;
    int iVar4;
    vector[12] vVar5;
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
    vector[12] vVar42;
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
    unknown[12] uVar79;
    float[12] fVar92;
    int I;
    float fVar106;
    boolean bVar107;
    int iVar108;

    array(ref vVar5, 12);
    array(ref vVar42, 12);
    array(ref uVar79, 12);
    array(ref fVar92, 12);
    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 750 );
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    sub_14014();
    sub_14284();
    sub_31432();
    g_U9890 = 1;
    for ( I = 0; I <= 9; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U780[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U780[I] )))
            {
                SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U780[I], 0 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U780[I] );
            }
        }
        if (DOES_CHAR_EXIST( l_U768[I] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U768[I] )))
            {
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U768[I], 0 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U768[I] );
            }
        }
    }
    CLEAR_AREA( -623.67840000, 656.64180000, -26.29200000 + 1.00000000, 100.00000000, 1 );
    CREATE_CAM( 3, ref l_U639 );
    CREATE_CAM( 3, ref l_U640 );
    vVar5[8] = {-621.90290000, 658.90980000, -24.75087000};
    vVar42[8] = {-9.76679400, 0.00000000, 177.98490000};
    fVar92[8] = 45;
    vVar5[0] = {-619.80730000, 662.01860000, -24.45217000};
    vVar42[0] = {-11.02730000, -0.00000000, 173.51580000};
    fVar92[0] = 45;
    vVar5[9] = {-626.68120000, 659.55170000, -24.88728000};
    vVar42[9] = {-6.58469100, 0.00000000, -158.59670000};
    fVar92[9] = 45;
    vVar5[1] = {-628.45010000, 661.79330000, -24.39785000};
    vVar42[1] = {-13.68935000, -0.00000000, -155.38820000};
    fVar92[1] = 45;
    vVar5[2] = {-616.88340000, 418.20340000, -20.66876000};
    vVar42[2] = {15.32487000, -0.00000000, -168.86200000};
    fVar92[2] = 40;
    vVar5[3] = {-628.77140000, 546.95710000, -31.77889000};
    vVar42[3] = {8.13201700, 0.00000000, -146.96890000};
    fVar92[3] = 40;
    vVar5[4] = {-619.47670000, 660.85250000, -25.92599000};
    vVar42[4] = {-0.46237300, 0.00000000, 169.10430000};
    fVar92[4] = 30;
    vVar5[5] = {-619.47670000, 660.85250000, -25.92599000};
    vVar42[5] = {-0.46237300, 0.00000000, 169.10430000};
    fVar92[5] = 25;
    vVar5[6] = {-628.58900000, 663.88170000, -26.38556000};
    vVar42[6] = {1.18013300, 0.00000000, -169.67020000};
    fVar92[6] = 30;
    vVar5[7] = {-628.58900000, 663.88170000, -26.38556000};
    vVar42[7] = {1.18013300, 0.00000000, -169.67020000};
    fVar92[7] = 25;
    vVar5[10] = {-609.02000000, 379.75740000, -15.53242000};
    vVar42[10] = {-3.17092600, -0.00000000, -128.87610000};
    fVar92[10] = 20;
    vVar5[11] = {-628.18680000 + 0.25000000, 548.03920000, -28.00000000};
    vVar42[11] = {0.91281400, -0.68746190, -157.29310000};
    fVar92[11] = 45;
    sub_14014();
    sub_14284();
    sub_32653();
    sub_32826();
    sub_32967();
    sub_33616();
    sub_34859();
    sub_36087();
    sub_36905();
    BEGIN_CAM_COMMANDS( ref uVar2 );
    for ( J = 0; J < vVar5; J++ )
    {
        CREATE_CAM( 14, ref uVar79[J] );
        SET_CAM_POS( uVar79[J], vVar5[J]._fU0, vVar5[J]._fU4, vVar5[J]._fU8 );
        SET_CAM_ROT( uVar79[J], vVar42[J]._fU0, vVar42[J]._fU4, vVar42[J]._fU8 );
        SET_CAM_ACTIVE( uVar79[J], 1 );
        SET_CAM_FOV( uVar79[J], fVar92[J] );
    }
    SET_CAM_POS( l_U640, -628.18680000 + 0.25000000, 548.03920000, -28.00000000 );
    SET_CAM_ROT( l_U640, 0.91281400, -0.68746190, -157.29310000 );
    SET_PLAYER_CONTROL_ADVANCED( l_U838, 0, 1, 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    SET_CURRENT_CHAR_WEAPON( l_U837, 0, 0 );
    TASK_SWAP_WEAPON( l_U837, 0 );
    if (NOT (IS_CAR_DEAD( l_U805 )))
    {
        GET_CAR_HEADING( l_U805, ref fVar106 );
        if ((fVar106 < 360.00000000) AND (fVar106 > 210.00000000))
        {
            SET_CAR_HEADING( l_U805, 257.20860000 );
            SET_CAR_COORDINATES( l_U805, -624.23510000, 656.90410000, -26.14450000 );
            l_U545 = 1;
        }
        else
        {
            SET_CAR_HEADING( l_U805, 82.96360000 );
            SET_CAR_COORDINATES( l_U805, -623.27040000, 657.37300000, -26.10030000 );
            l_U545 = 0;
        }
        SET_CAR_ON_GROUND_PROPERLY( l_U805 );
    }
    WAIT( 150 );
    sub_37725();
    WAIT( 150 );
    if (NOT (IS_CAR_DEAD( l_U805 )))
    {
        WARP_CHAR_FROM_CAR_TO_CAR( l_U837, l_U805, -1 );
    }
    WAIT( 150 );
    LOAD_SCENE( -607.14450000, 377.81470000, -17.37100000 );
    if (NOT IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_IN( 750 );
    }
    if (l_U545 == 1)
    {
        SET_CAM_ACTIVE( uVar79[8], 1 );
        SET_CAM_PROPAGATE( uVar79[8], 1 );
    }
    else
    {
        SET_CAM_ACTIVE( uVar79[9], 1 );
        SET_CAM_PROPAGATE( uVar79[9], 1 );
    }
    if (l_U545 == 1)
    {
        SET_CAM_PROPAGATE( uVar79[8], 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U639, uVar79[8], uVar79[0], 10000, 0 );
    }
    else
    {
        SET_CAM_PROPAGATE( uVar79[9], 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U639, uVar79[9], uVar79[1], 10000, 0 );
    }
    SET_CAM_ACTIVE( l_U639, 1 );
    SET_CAM_PROPAGATE( l_U639, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (l_U545 == 1)
    {
        OPEN_SEQUENCE_TASK( ref l_U669 );
        TASK_SWAP_WEAPON( 0, 0 );
        TASK_USE_MOBILE_PHONE_TIMED( 0, 20000 );
        CLOSE_SEQUENCE_TASK( l_U669 );
        TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
        CLEAR_SEQUENCE_TASK( l_U669 );
    }
    else
    {
        OPEN_SEQUENCE_TASK( ref l_U669 );
        TASK_SWAP_WEAPON( 0, 0 );
        TASK_USE_MOBILE_PHONE_TIMED( 0, 20000 );
        CLOSE_SEQUENCE_TASK( l_U669 );
        TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
        CLEAR_SEQUENCE_TASK( l_U669 );
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U495 = GET_SOUND_ID();
    PLAY_SOUND_FROM_PED( l_U495, "DM3_TUNNEL_OF_DEATH_MAKE_CALL", l_U837 );
    while (NOT (HAS_SOUND_FINISHED( l_U495 )))
    {
        WAIT( 0 );
    }
    RELEASE_SOUND_ID( l_U495 );
    J = -3;
    iVar4 = 0;
    bVar107 = false;
    SETTIMERB( 0 );
    SETTIMERA( 0 );
    while ((NOT ((TIMERA() > 1000) AND (sub_22054()))) AND (NOT bVar107))
    {
        if ((TIMERB() > 4000) AND (iVar4 == 0))
        {
            iVar4 = 1;
        }
        if ((TIMERB() > 6000) AND (iVar4 == 1))
        {
            iVar4 = 2;
        }
        if ((TIMERB() > 9000) AND (iVar4 == 2))
        {
            iVar4 = 3;
        }
        if ((NOT (sub_26102( l_U848 ))) AND ((TIMERB() > 10000) AND (iVar4 == 3)))
        {
            iVar4 = 4;
        }
        if ((TIMERB() > 0) AND (J == -3))
        {
            J = -2;
            SETTIMERB( 0 );
            SETTIMERA( 0 );
            sub_39313( "DM3_CPOSIT", 0, 1, ref l_U848, 6, 0 );
            J = 0;
            if (NOT (IS_CHAR_INJURED( l_U730 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_USE_MOBILE_PHONE_TIMED( 0, 15000 );
                TASK_PLAY_ANIM( 0, "sit_drive", "missderrick3", 4.00000000, 1, 0, 0, 0, 20000 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
            }
        }
        if ((TIMERB() > 3000) AND (J == -2))
        {
            J = -1;
            SETTIMERB( 0 );
            SETTIMERA( 0 );
            SET_CAM_PROPAGATE( l_U639, 0 );
            SET_CAM_PROPAGATE( uVar79[10], 1 );
            if (NOT (IS_CAR_DEAD( l_U806 )))
            {
                ATTACH_CAM_TO_VEHICLE( uVar79[10], l_U806 );
                POINT_CAM_AT_VEHICLE( uVar79[10], l_U806 );
            }
            SET_CAM_ATTACH_OFFSET( uVar79[10], 1.50000000, 5.00000000, 1.20000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( uVar79[10], 1 );
            SET_CAM_POINT_OFFSET( uVar79[10], -1.30000000, -0.10000000, 1.20000000 );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( uVar79[10], 1 );
            SETTIMERB( 0 );
        }
        if ((TIMERB() > 4500) AND (J == -1))
        {
            J = 0;
            sub_39804();
            l_U496 = GET_SOUND_ID();
            PLAY_SOUND_FROM_PED( l_U496, "DM3_TUNNEL_OF_DEATH_HANG_UP", l_U837 );
            WAIT( 1000 );
            l_U497 = GET_SOUND_ID();
            PLAY_SOUND_FROM_PED( l_U497, "DM3_TUNNEL_OF_DEATH_REMOTE_HANG_UP", l_U837 );
            if (NOT (IS_CHAR_DEAD( l_U730 )))
            {
                TASK_PLAY_ANIM( l_U730, "sit_drive", "missderrick3", 4.00000000, 1, 0, 0, 0, 20000 );
            }
        }
        if ((l_U597 == 0) AND ((TIMERB() > 250) AND (J == 0)))
        {
            sub_39804();
            J = 0;
            sub_40370();
            if (NOT (IS_CAR_DEAD( l_U806 )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U806 ))
                {
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U806, 7000 );
                }
            }
            l_U597 = 1;
        }
        if ((TIMERB() > 2500) AND (J == 0))
        {
            J = 1;
            SETTIMERB( 0 );
            SETTIMERA( 0 );
            SET_CAM_PROPAGATE( l_U639, 0 );
            SET_CAM_ACTIVE( uVar79[2], 1 );
            SET_CAM_PROPAGATE( uVar79[2], 1 );
            sub_39313( "DM3_CPOSIT", 1, 1, ref l_U848, 6, 0 );
            SETTIMERB( 0 );
        }
        if ((TIMERB() > 5000) AND (J == 1))
        {
            J = 2;
            SET_CAM_PROPAGATE( uVar79[2], 0 );
            SET_CAM_PROPAGATE( uVar79[10], 1 );
            SET_CAM_FOV( uVar79[10], 45 );
            if (NOT (IS_CAR_DEAD( l_U806 )))
            {
                ATTACH_CAM_TO_VEHICLE( uVar79[10], l_U806 );
                POINT_CAM_AT_VEHICLE( uVar79[10], l_U806 );
            }
            SET_CAM_ATTACH_OFFSET( uVar79[10], 1.70000000, 0.70000000, -0.20000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( uVar79[10], 1 );
            SET_CAM_POINT_OFFSET( uVar79[10], 0, 12, 0 );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( uVar79[10], 1 );
        }
        if ((TIMERB() > 8000) AND (J == 2))
        {
            J = 3;
            DO_SCREEN_FADE_OUT_UNHACKED( 150 );
            WAIT( 150 );
            SET_CAM_PROPAGATE( uVar79[10], 0 );
            SET_CAM_ACTIVE( uVar79[11], 1 );
            SET_CAM_PROPAGATE( uVar79[11], 1 );
            SET_CAM_PROPAGATE( uVar79[11], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U640, uVar79[11], uVar79[3], 3500, 0 );
            SET_CAM_ACTIVE( l_U640, 1 );
            SET_CAM_PROPAGATE( l_U640, 1 );
            GET_GAME_VIEWPORT_ID( ref l_U642 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U642, "GtaMloRoomTUN3" );
            GET_GAME_VIEWPORT_ID( ref l_U642 );
            WAIT( 0 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U642, "GtaMloRoomTUN3" );
            if (NOT (IS_CAR_DEAD( l_U811[0] )))
            {
                SET_PLAYBACK_SPEED( l_U811[0], 0.60000000 );
            }
            if (NOT (IS_CAR_DEAD( l_U807[0] )))
            {
                SET_PLAYBACK_SPEED( l_U807[0], 0.70000000 );
            }
            if (NOT (IS_CAR_DEAD( l_U813 )))
            {
                SET_PLAYBACK_SPEED( l_U813, 0.70000000 );
            }
            if (NOT (IS_CAR_DEAD( l_U807[1] )))
            {
                SET_PLAYBACK_SPEED( l_U807[1], 0.70000000 );
            }
            if (NOT (IS_CAR_DEAD( l_U806 )))
            {
                SET_PLAYBACK_SPEED( l_U806, 0.60000000 );
            }
            if (HAS_CHAR_GOT_WEAPON( l_U837, 15 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U837, 15, 1 );
            }
            else if (HAS_CHAR_GOT_WEAPON( l_U837, 14 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U837, 14, 1 );
            }
            else if (HAS_CHAR_GOT_WEAPON( l_U837, 13 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U837, 13, 1 );
            }
            else if (HAS_CHAR_GOT_WEAPON( l_U837, 12 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U837, 12, 1 );
            }
            else if (HAS_CHAR_GOT_WEAPON( l_U837, 11 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U837, 11, 1 );
            }
            else if (HAS_CHAR_GOT_WEAPON( l_U837, 10 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U837, 10, 1 );
            }
            else if (HAS_CHAR_GOT_WEAPON( l_U837, 9 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U837, 9, 1 );
            }
            else if (HAS_CHAR_GOT_WEAPON( l_U837, 7 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U837, 7, 1 );
            }
            else if (HAS_CHAR_GOT_WEAPON( l_U837, 18 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U837, 18, 1 );
            }
            else if (HAS_CHAR_GOT_WEAPON( l_U837, 4 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U837, 4, 1 );
            }
            else if (HAS_CHAR_GOT_WEAPON( l_U837, 5 ))
            {
                SET_CURRENT_CHAR_WEAPON( l_U837, 5, 1 );
            }
            else
            {
                TASK_SWAP_WEAPON( l_U837, 1 );
            };;;;;;;;;;;
            if (NOT (IS_CAR_DEAD( l_U805 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U805 );
            }
            WAIT( 150 );
            DO_SCREEN_FADE_IN_UNHACKED( 150 );
        }
        if ((TIMERB() > 13000) AND (J == 3))
        {
            J = 4;
            if (NOT (IS_CAR_DEAD( l_U811[0] )))
            {
                ATTACH_CAM_TO_VEHICLE( uVar79[1], l_U811[0] );
                POINT_CAM_AT_VEHICLE( uVar79[1], l_U811[0] );
            }
            SET_CAM_ATTACH_OFFSET( uVar79[1], 0, -0.85000000, 0.92000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( uVar79[1], 1 );
            SET_CAM_POINT_OFFSET( uVar79[1], 0, 10, 0 );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( uVar79[1], 1 );
            SET_CAM_FOV( uVar79[1], 45 );
            SET_CAM_PROPAGATE( l_U640, 0 );
            SET_CAM_ACTIVE( uVar79[1], 1 );
            SET_CAM_PROPAGATE( uVar79[1], 1 );
            sub_22213( "DM3_ARR", ref l_U848, 6, 0 );
            if (NOT (IS_CHAR_INJURED( l_U745[0] )))
            {
                TASK_PLAY_ANIM( l_U745[0], "mirror_c", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U745[1] )))
            {
                TASK_PLAY_ANIM( l_U745[1], "conversation", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U806 )))
            {
                SET_PLAYBACK_SPEED( l_U806, 0.60000000 );
            }
        }
        if ((TIMERB() > 15000) AND (J == 4))
        {
            J = 5;
            SET_CAM_PROPAGATE( l_U639, 0 );
            if (l_U545 == 1)
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -620.94000000, 657.54000000, -26.25000000, 30000 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
            }
            else if (NOT (IS_CAR_DEAD( l_U805 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LEAVE_CAR_IN_DIRECTION( 0, l_U805, 0 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -625.13000000, 658.95000000, -26.10000000, 30000 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
            }
        }
        if ((TIMERB() > 18000) AND (J == 5))
        {
            J = 6;
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        }
        if (l_U557 == 0)
        {
            sub_42548();
        }
        if ((J > 0) AND (l_U546 == 0))
        {
            sub_42719();
        }
        if ((TIMERB() > 20000) AND (J == 6))
        {
            bVar107 = true;
        }
        WAIT( 0 );
    }
    if ((IS_SCREEN_FADED_IN()) AND (sub_22054()))
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 750 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        if (HAS_CHAR_GOT_WEAPON( l_U837, 15 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U837, 15, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U837, 14 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U837, 14, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U837, 13 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U837, 13, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U837, 12 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U837, 12, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U837, 11 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U837, 11, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U837, 10 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U837, 10, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U837, 9 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U837, 9, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U837, 7 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U837, 7, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U837, 18 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U837, 18, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U837, 4 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U837, 4, 1 );
        }
        else if (HAS_CHAR_GOT_WEAPON( l_U837, 5 ))
        {
            SET_CURRENT_CHAR_WEAPON( l_U837, 5, 1 );
        }
        else
        {
            TASK_SWAP_WEAPON( l_U837, 1 );
        };;;;;;;;;;;
        if (J < 1)
        {
            sub_39804();
        }
        if (J < 5)
        {
            if (l_U545 == 1)
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -620.94000000, 657.54000000, -26.25000000, 30000 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
            }
            else if (NOT (IS_CAR_DEAD( l_U805 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LEAVE_CAR_IN_DIRECTION( 0, l_U805, 0 );
                TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, -625.13000000, 658.95000000, -26.10000000, 30000 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
            }
            WAIT( 3000 );
        }
        if (NOT (IS_CAR_DEAD( l_U811[0] )))
        {
            SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U811[0] );
            SET_ROOM_FOR_CAR_BY_NAME( l_U811[0], "GtaMloRoomTUN3" );
        }
        if (NOT (IS_CAR_DEAD( l_U807[0] )))
        {
            SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U807[0] );
            SET_ROOM_FOR_CAR_BY_NAME( l_U807[0], "GtaMloRoomTUN3" );
        }
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U813 );
            SET_ROOM_FOR_CAR_BY_NAME( l_U813, "GtaMloRoomTUN3" );
        }
        if (NOT (IS_CAR_DEAD( l_U807[1] )))
        {
            SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U807[1] );
            SET_ROOM_FOR_CAR_BY_NAME( l_U807[1], "GtaMloRoomTUN3" );
        }
        for ( iVar108 = 0; iVar108 <= 5; iVar108++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U745[iVar108] )))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U745[iVar108], "GtaMloRoomTUN3" );
            }
        }
        for ( iVar108 = 0; iVar108 <= 7; iVar108++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U736[iVar108] )))
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U736[iVar108], "GtaMloRoomTUN3" );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U731 )))
        {
            SET_ROOM_FOR_CHAR_BY_NAME( l_U731, "GtaMloRoomTUN3" );
        }
        if (NOT (IS_CAR_DEAD( l_U779 )))
        {
            SET_CAR_COORDINATES( l_U779, -619.31020000, 645.16320000, -28.41970000 );
        }
        SET_GAME_CAM_HEADING( 0 );
        if (J < -1)
        {
            sub_40370();
        }
        if (NOT (IS_CAR_DEAD( l_U806 )))
        {
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U806, -60000 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U806, 17500 );
            SET_PLAYBACK_SPEED( l_U806, 0.60000000 );
            SET_ROOM_FOR_CAR_BY_NAME( l_U806, "GtaMloRoomTUN3" );
        }
        for ( J = 0; J < vVar5; J++ )
        {
            SET_CAM_PROPAGATE( uVar79[J], 0 );
            SET_CAM_ACTIVE( uVar79[J], 0 );
            DESTROY_CAM( uVar79[J] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            LOCK_CAR_DOORS( l_U805, 2 );
        }
        if (l_U545 == 1)
        {
            SET_GAME_CAM_HEADING( 270 );
        }
        else
        {
            SET_GAME_CAM_HEADING( 90 );
        }
        SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 1, 1, 1 );
        if (l_U545 == 1)
        {
            SET_GAME_CAM_HEADING( 270 );
        }
        else
        {
            SET_GAME_CAM_HEADING( 90 );
        }
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            SET_CAR_ON_GROUND_PROPERLY( l_U805 );
        }
        WAIT( 1000 );
        if (NOT IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_IN( 750 );
        }
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        END_CAM_COMMANDS( ref uVar2 );
    }
    else
    {
        SET_GAME_CAM_HEADING( 0.00000000 );
        for ( J = 0; J < vVar5; J++ )
        {
            SET_CAM_PROPAGATE( uVar79[J], 0 );
            SET_CAM_ACTIVE( uVar79[J], 0 );
            DESTROY_CAM( uVar79[J] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        if (NOT (IS_CAR_DEAD( l_U805 )))
        {
            LOCK_CAR_DOORS( l_U805, 2 );
        }
        if (l_U545 == 1)
        {
            SET_GAME_CAM_HEADING( 270 );
        }
        else
        {
            SET_GAME_CAM_HEADING( 90 );
        }
        SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 1, 1, 1 );
        if (l_U545 == 1)
        {
            SET_GAME_CAM_HEADING( 270 );
        }
        else
        {
            SET_GAME_CAM_HEADING( 90 );
        }
        END_CAM_COMMANDS( ref uVar2 );
    }
    return;
}

void sub_31432()
{
    REQUEST_CAR_RECORDING( 640 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 640 )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 642 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 642 )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 643 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 643 )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 644 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 644 )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 645 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 645 )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_32653()
{
    REQUEST_CAR_RECORDING( 640 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 640 )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 642 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 642 )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 643 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 643 )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 644 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 644 )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_32826()
{
    CREATE_CAR( l_U819, -607.14450000, 377.81470000, -17.37100000, ref l_U806, 1 );
    SET_VEHICLE_QUATERNION( l_U806, -0.01190000, -0.00910000, 0.17740000, 0.98400000 );
    CHANGE_CAR_COLOUR( l_U806, 35, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U806 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U806, 1 );
    SET_CAR_ENGINE_ON( l_U806, 1, 1 );
    return;
}

void sub_32967()
{
    sub_18419( 13 );
    while (NOT (sub_18451( 13 )))
    {
        WAIT( 0 );
    }
    sub_18533( 13, ref l_U730, -607.14450000 - 2.00000000, 377.81470000, -17.37100000 - 1.00000000, 154.42240000 );
    sub_33059( l_U730, 1, 0, 0 );
    SET_CHAR_DECISION_MAKER( l_U730, l_U830 );
    SET_COMBAT_DECISION_MAKER( l_U730, l_U836 );
    sub_33320( l_U730, 2 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U730, 1 );
    SET_CHAR_NEVER_TARGETTED( l_U730, 1 );
    SET_CHAR_RELATIONSHIP( l_U730, 5, 23 );
    SET_CHAR_RELATIONSHIP( l_U730, 1, 0 );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U730, 1 );
    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U730, 0 );
    SET_CHAR_HEALTH( l_U730, 275 );
    if ((NOT (IS_CAR_DEAD( l_U806 ))) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
    {
        WARP_CHAR_INTO_CAR( l_U730, l_U806 );
    }
    sub_6604( 7, l_U730, "PACKIE_MCREARY", 0 );
    return;
}

void sub_33059(int iParam0, int iParam1, int iParam2, int iParam3)
{
    SET_CHAR_DECISION_MAKER( iParam0, l_U830 );
    if (iParam2 == 1)
    {
        ;
    }
    if (iParam1 == 1)
    {
        SET_COMBAT_DECISION_MAKER( iParam0, l_U834 );
    }
    else if (iParam1 == 2)
    {
        SET_COMBAT_DECISION_MAKER( iParam0, l_U833 );
    }
    else
    {
        SET_COMBAT_DECISION_MAKER( iParam0, l_U835 );
    }
    if (iParam3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0, 24 );
        SET_CHAR_RELATIONSHIP( iParam0, 5, 23 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0, 23 );
        SET_CHAR_RELATIONSHIP( iParam0, 5, 24 );
        SET_CHAR_RELATIONSHIP( iParam0, 1, 23 );
    }
    SET_CHAR_IS_TARGET_PRIORITY( iParam0, 1 );
    SET_CHAR_ACCURACY( iParam0, 65 );
    if (iParam0 != l_U730)
    {
        SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam0 );
    }
    return;
}

void sub_33320(unknown uParam0, int iParam1)
{
    if (iParam1 == 1)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 7, 9999, 0 );
    }
    else if (iParam1 == 2)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 10, 9999, 0 );
    }
    else if (iParam1 == 3)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 13, 9999, 0 );
    }
    else
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( uParam0, 7, 9999, 0 );
    };;;
    return;
}

void sub_33616()
{
    CREATE_CAR( l_U821, -617.73990000, 427.17850000, -20.90000000, ref l_U811[0], 1 );
    SET_CAR_HEADING( l_U811[0], 6.41680000 );
    SET_CAR_PROOFS( l_U811[0], 1, 0, 0, 0, 0 );
    LOCK_CAR_DOORS( l_U811[0], 1 );
    SET_SIREN_WITH_NO_DRIVER( l_U811[0], 1 );
    FORCE_CAR_LIGHTS( l_U811[0], 2 );
    SET_CAR_ON_GROUND_PROPERLY( l_U811[0] );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U811[0], 1 );
    SET_CAR_AS_MISSION_CAR( l_U811[0] );
    SET_ROOM_FOR_CAR_BY_NAME( l_U811[0], "GtaMloRoomTUN4" );
    GET_CURRENT_POLICE_CAR_MODEL( ref l_U820 );
    while (NOT (HAS_MODEL_LOADED( l_U820 )))
    {
        PRINTSTRING( "\n\n\----> Load Cop Car Model \n\n\n" );
        REQUEST_MODEL( l_U820 );
        WAIT( 0 );
    }
    CREATE_CAR( l_U820, -616.65910000, 417.51720000, -20.10000000, ref l_U807[0], 1 );
    SET_CAR_HEADING( l_U807[0], 6.39050000 );
    LOCK_CAR_DOORS( l_U807[0], 1 );
    SET_SIREN_WITH_NO_DRIVER( l_U807[0], 1 );
    FORCE_CAR_LIGHTS( l_U807[0], 2 );
    SET_CAR_ON_GROUND_PROPERLY( l_U807[0] );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U807[0], 1 );
    SET_CAR_AS_MISSION_CAR( l_U807[0] );
    SET_ROOM_FOR_CAR_BY_NAME( l_U807[0], "GtaMloRoomTUN4" );
    CREATE_CAR( l_U822, -615.69460000, 408.82760000, -19.30000000, ref l_U813, 1 );
    SET_CAR_HEADING( l_U813, 6.37480000 );
    SET_CAR_PROOFS( l_U813, 1, 0, 0, 0, 0 );
    SET_VEH_HAS_STRONG_AXLES( l_U813, 1 );
    LOCK_CAR_DOORS( l_U813, 3 );
    FORCE_CAR_LIGHTS( l_U813, 2 );
    SET_CAR_ON_GROUND_PROPERLY( l_U813 );
    ADD_UPSIDEDOWN_CAR_CHECK( l_U813 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U813, 1 );
    SET_CAR_AS_MISSION_CAR( l_U813 );
    SET_ROOM_FOR_CAR_BY_NAME( l_U813, "GtaMloRoomTUN4" );
    STOP_CAR_BREAKING( l_U813, 1 );
    GET_CURRENT_POLICE_CAR_MODEL( ref l_U820 );
    while (NOT (HAS_MODEL_LOADED( l_U820 )))
    {
        PRINTSTRING( "\n\n\----> Load Cop Car Model \n\n\n" );
        REQUEST_MODEL( l_U820 );
        WAIT( 0 );
    }
    CREATE_CAR( l_U820, -614.55370000, 398.48220000, -18.40000000, ref l_U807[1], 1 );
    SET_CAR_HEADING( l_U807[1], 6.40500000 );
    LOCK_CAR_DOORS( l_U807[1], 1 );
    SET_SIREN_WITH_NO_DRIVER( l_U807[1], 1 );
    FORCE_CAR_LIGHTS( l_U807[1], 2 );
    SET_CAR_ON_GROUND_PROPERLY( l_U807[1] );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U807[1], 1 );
    SET_CAR_AS_MISSION_CAR( l_U807[1] );
    SET_ROOM_FOR_CAR_BY_NAME( l_U807[1], "GtaMloRoomTUN4" );
    WAIT( 0 );
    PRINTSTRING( "*\n*\n ---> SET ROOMS FOR CONVOY <--- \n*\n*\n" );
    if (NOT (IS_CAR_DEAD( l_U811[0] )))
    {
        SET_ROOM_FOR_CAR_BY_NAME( l_U811[0], "GtaMloRoomTUN4" );
    }
    if (NOT (IS_CAR_DEAD( l_U807[0] )))
    {
        SET_ROOM_FOR_CAR_BY_NAME( l_U807[0], "GtaMloRoomTUN4" );
    }
    if (NOT (IS_CAR_DEAD( l_U813 )))
    {
        SET_ROOM_FOR_CAR_BY_NAME( l_U813, "GtaMloRoomTUN4" );
    }
    if (NOT (IS_CAR_DEAD( l_U807[1] )))
    {
        SET_ROOM_FOR_CAR_BY_NAME( l_U807[1], "GtaMloRoomTUN4" );
    }
    return;
}

void sub_34859()
{
    GET_CURRENT_COP_MODEL( ref l_U761 );
    CREATE_CHAR( 6, l_U761, -617.73990000 + 1.00000000, 427.17850000, -20.00000000, ref l_U736[0], 1 );
    SET_CHAR_HEADING( l_U736[0], 252.72590000 );
    sub_33059( l_U736[0], 2, 0, 1 );
    sub_33320( l_U736[0], 0 );
    if ((NOT (IS_CAR_DEAD( l_U807[0] ))) AND (NOT (IS_CHAR_DEAD( l_U736[0] ))))
    {
        WARP_CHAR_INTO_CAR( l_U736[0], l_U807[0] );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U736[0], 1 );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U736[0], "GtaMloRoomTUN4" );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U736[0], 1 );
    sub_6604( 4, l_U736[0], "POLICE_2", 0 );
    CREATE_CHAR( 6, l_U761, -617.73990000 + 1.50000000, 427.17850000, -20.00000000, ref l_U736[1], 1 );
    SET_CHAR_HEADING( l_U736[1], 280.18600000 );
    sub_33059( l_U736[1], 2, 0, 1 );
    sub_33320( l_U736[1], 0 );
    if ((NOT (IS_CAR_DEAD( l_U807[0] ))) AND (NOT (IS_CHAR_DEAD( l_U736[1] ))))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U736[1], l_U807[0], 0 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U736[1], 1 );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U736[1], "GtaMloRoomTUN4" );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U736[1], 1 );
    CREATE_CHAR( 6, l_U761, -617.73990000 + 2.00000000, 427.17850000, -20.00000000, ref l_U736[2], 1 );
    sub_33059( l_U736[2], 2, 0, 1 );
    sub_33320( l_U736[2], 0 );
    if ((NOT (IS_CAR_DEAD( l_U807[1] ))) AND (NOT (IS_CHAR_DEAD( l_U736[2] ))))
    {
        WARP_CHAR_INTO_CAR( l_U736[2], l_U807[1] );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U736[2], "GtaMloRoomTUN4" );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U736[2], 1 );
    CREATE_CHAR( 6, l_U761, -617.73990000 + 2.50000000, 427.17850000, -20.00000000, ref l_U736[3], 1 );
    sub_33059( l_U736[3], 2, 0, 1 );
    sub_33320( l_U736[3], 0 );
    if ((NOT (IS_CAR_DEAD( l_U807[1] ))) AND (NOT (IS_CHAR_DEAD( l_U736[3] ))))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U736[3], l_U807[1], 0 );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U736[3], "GtaMloRoomTUN4" );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U736[3], 1 );
    CREATE_CHAR( 6, l_U761, -617.73990000 + 4.00000000, 427.17850000, -20.00000000, ref l_U736[6], 1 );
    sub_33059( l_U736[6], 2, 0, 1 );
    sub_33320( l_U736[6], 0 );
    if ((NOT (IS_CAR_DEAD( l_U807[0] ))) AND (NOT (IS_CHAR_DEAD( l_U736[6] ))))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U736[6], l_U807[0], 1 );
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U736[6], 1 );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U736[6], "GtaMloRoomTUN4" );
    CREATE_CHAR( 6, l_U761, -617.73990000 + 4.50000000, 427.17850000, -20.00000000, ref l_U736[7], 1 );
    sub_33059( l_U736[7], 2, 0, 1 );
    sub_33320( l_U736[7], 0 );
    if ((NOT (IS_CAR_DEAD( l_U807[0] ))) AND (NOT (IS_CHAR_DEAD( l_U736[7] ))))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U736[7], l_U807[0], 2 );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U736[7], "GtaMloRoomTUN4" );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U736[7], 1 );
    return;
}

void sub_36087()
{
    int I;

    CREATE_CHAR( 6, l_U762, -617.73990000 - 1.00000000, 427.17850000, -20.00000000, ref l_U745[0], 1 );
    if ((NOT (IS_CAR_DEAD( l_U811[0] ))) AND (NOT (IS_CHAR_DEAD( l_U745[0] ))))
    {
        WARP_CHAR_INTO_CAR( l_U745[0], l_U811[0] );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U745[0], "GtaMloRoomTUN4" );
    sub_6604( 6, l_U745[0], "POLICE", 0 );
    CREATE_CHAR( 6, l_U762, -617.73990000 - 1.50000000, 427.17850000, -20.00000000, ref l_U745[1], 1 );
    if ((NOT (IS_CAR_DEAD( l_U811[0] ))) AND (NOT (IS_CHAR_DEAD( l_U745[1] ))))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U745[1], l_U811[0], 0 );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U745[1], "GtaMloRoomTUN4" );
    CREATE_CHAR( 6, l_U762, -617.73990000 - 2.00000000, 427.17850000, -20.00000000, ref l_U745[2], 1 );
    if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U745[2] ))))
    {
        WARP_CHAR_INTO_CAR( l_U745[2], l_U813 );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U745[2], "GtaMloRoomTUN4" );
    CREATE_CHAR( 6, l_U762, -617.73990000 - 1.50000000, 427.17850000, -20.00000000, ref l_U745[3], 1 );
    if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U745[3] ))))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U745[3], l_U813, 0 );
    }
    SET_ROOM_FOR_CHAR_BY_NAME( l_U745[3], "GtaMloRoomTUN4" );
    for ( I = 0; I <= 5; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U745[I] )))
        {
            if ((I == 2) || (I == 1))
            {
                sub_33059( l_U745[I], 1, 0, 1 );
            }
            else
            {
                sub_33059( l_U745[I], 2, 0, 1 );
            }
            sub_33320( l_U745[I], 3 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U745[I], 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U745[I], 1 );
            SET_CHAR_COMPONENT_VARIATION( l_U745[I], 0, I, 0 );
            if (I == 3)
            {
                SET_CHAR_COMPONENT_VARIATION( l_U745[I], 0, 1, 0 );
            }
            else
            {
                SET_CHAR_COMPONENT_VARIATION( l_U745[I], 0, I + 1, 0 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U745[I], 1 );
            }
        }
    }
    return;
}

void sub_36905()
{
    CREATE_CHAR( 26, l_U760, -617.73990000 - 1.00000000, 427.17850000, -20.92160000 - 1.00000000, ref l_U731, 1 );
    SET_CHAR_HEADING( l_U731, 223.82990000 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U731, 1 );
    SET_CHAR_DECISION_MAKER( l_U731, l_U829 );
    SET_COMBAT_DECISION_MAKER( l_U731, l_U835 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U731, 1 );
    SET_CHAR_FORCE_DIE_IN_CAR( l_U731, 1 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U731, 1 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U731, 0 );
    SET_PED_DONT_DO_EVASIVE_DIVES( l_U731, 1 );
    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U731, 0 );
    if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U731 ))))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U731, l_U813, 1 );
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U731, "prisoner_pass", "missderrick3", 4.00000000, 1, 0, 0, 0, 9999999 );
    }
    sub_6604( 5, l_U731, "AIDEN", 0 );
    return;
}

void sub_37725()
{
    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U802, ref l_U803 );
    if (l_U803 != -1)
    {
        REQUEST_MODEL( l_U802 );
        while (NOT (HAS_MODEL_LOADED( l_U802 )))
        {
            WAIT( 0 );
        }
        if ((IS_THIS_MODEL_A_HELI( l_U802 )) || ((IS_THIS_MODEL_A_BIKE( l_U802 )) || (IS_THIS_MODEL_A_BOAT( l_U802 ))))
        {
            l_U803 = -1;
        }
    }
    if (l_U803 == -1)
    {
        l_U802 = -1041692462;
        sub_6804( l_U802 );
        while (NOT (HAS_MODEL_LOADED( l_U802 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( l_U802, -622.88740000, 599.17320000, -31.80880000, ref l_U779, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U802 );
    }
    else
    {
        CREATE_CAR( l_U802, -622.88740000, 599.17320000, -31.80880000, ref l_U779, 1 );
    }
    SET_CAR_HEADING( l_U779, 358.25550000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U779 );
    SET_CAR_ENGINE_ON( l_U779, 1, 1 );
    SET_ROOM_FOR_CAR_BY_NAME( l_U779, "GtaMloRoomTUN3" );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U779, 1 );
    while (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U779 )))
    {
        CREATE_RANDOM_CHAR_AS_DRIVER( l_U779, ref l_U763[0] );
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U763[0], 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U763[0], "GtaMloRoomTUN3" );
        if (NOT (IS_CHAR_DEAD( l_U763[0] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U669 );
            TASK_CAR_DRIVE_TO_COORD( 0, l_U779, -619.31020000, 645.16320000, -28.41970000, 10.00000000, 0, l_U802, 0, 6.00000000, 75 );
            TASK_PLAY_ANIM( 0, "in_car_panic", "missderrick3", 4.00000000, 1, 0, 0, 0, -2 );
            CLOSE_SEQUENCE_TASK( l_U669 );
            TASK_PERFORM_SEQUENCE( l_U763[0], l_U669 );
            CLEAR_SEQUENCE_TASK( l_U669 );
        }
        RETUNE_RADIO_TO_STATION_NAME( "HARDCORE" );
        SOUND_CAR_HORN( l_U779, 5000 );
    }
    if (NOT (IS_CAR_DEAD( l_U779 )))
    {
        WARP_CHAR_FROM_CAR_TO_CAR( l_U837, l_U779, 0 );
        RETUNE_RADIO_TO_STATION_NAME( "HARDCORE" );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U802 );
    return;
}

void sub_39313(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_39340( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_39340(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_22290( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_39804()
{
    if (NOT (IS_CAR_DEAD( l_U811[0] )))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U811[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U811[0], 640 );
            SET_PLAYBACK_SPEED( l_U811[0], 0.80000000 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U807[0] )))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U807[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U807[0], 642 );
            SET_PLAYBACK_SPEED( l_U807[0], 0.80000000 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U813 )))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U813 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U813, 643 );
            SET_PLAYBACK_SPEED( l_U813, 0.80000000 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U807[1] )))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U807[1] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U807[1], 644 );
            SET_PLAYBACK_SPEED( l_U807[1], 0.80000000 );
        }
    }
    return;
}

void sub_40370()
{
    REQUEST_CAR_RECORDING( 645 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 645 )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U806 )))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U806 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U806, 645 );
            SET_PLAYBACK_SPEED( l_U806, 0.90000000 );
        }
    }
    return;
}

void sub_42548()
{
    if (NOT (IS_CAR_DEAD( l_U811[0] )))
    {
        if (LOCATE_CAR_3D( l_U811[0], -626.86610000, 639.94920000, -27.83570000, 10.00000000, 10.00000000, 10.00000000, 0 ))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U811[0] );
            STOP_PLAYBACK_RECORDED_CAR( l_U807[0] );
            STOP_PLAYBACK_RECORDED_CAR( l_U813 );
            STOP_PLAYBACK_RECORDED_CAR( l_U807[1] );
            l_U557 = 1;
        }
    }
    return;
}

void sub_42719()
{
    if ((NOT (IS_CHAR_INJURED( l_U736[0] ))) AND (NOT (IS_CAR_DEAD( l_U807[0] ))))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U807[0] )))
        {
            if (l_U545 == 1)
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "idle_lookaround_a", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -621.54870000, 646.81150000, -27.20560000, 3, 15000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U837 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "point_fwd", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "come_on", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U736[0], l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
            }
            else
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "idle_lookaround_a", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -623.81840000, 647.80220000, -27.08320000, 3, 15000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U837 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "point_fwd", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "come_on", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U736[0], l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
            }
            l_U546 = 1;
        }
    }
    return;
}

void sub_46611()
{
    l_U490++;
    return;
}

void sub_46645()
{
    if (l_U556 == 0)
    {
        if ((NOT (IS_CAR_DEAD( l_U779 ))) AND (NOT (IS_CHAR_DEAD( l_U763[0] ))))
        {
            TASK_LEAVE_CAR_DONT_CLOSE_DOOR( l_U763[0], l_U779 );
        }
        if (NOT (IS_CHAR_DEAD( l_U763[1] )))
        {
            TASK_LEAVE_ANY_CAR( l_U763[1] );
        }
        if (NOT (IS_CHAR_DEAD( l_U763[2] )))
        {
            TASK_LEAVE_ANY_CAR( l_U763[2] );
        }
        if (NOT (IS_CHAR_DEAD( l_U763[3] )))
        {
            TASK_LEAVE_ANY_CAR( l_U763[3] );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U763[0] );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U763[1] );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U763[2] );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U763[3] );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U779 );
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            LOCK_CAR_DOORS( l_U813, 3 );
        }
        SET_PED_IS_BLIND_RAGING( l_U837, 1 );
        SETTIMERA( 0 );
        SETTIMERB( 0 );
        l_U556 = 1;
    }
    if ((TIMERA() > 1000) AND ((l_U548 == 1) AND (l_U499 == 0)))
    {
        l_U499 = 1;
        if (NOT (IS_CHAR_INJURED( l_U736[0] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U669 );
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "back", "MISSDERRICK3", 4.00000000, 0, 0, 0, 0, 2000 );
            TASK_COMBAT( 0, l_U837 );
            CLOSE_SEQUENCE_TASK( l_U669 );
            TASK_PERFORM_SEQUENCE( l_U736[0], l_U669 );
            CLEAR_SEQUENCE_TASK( l_U669 );
        }
        WAIT( 1000 );
        if (NOT (IS_CHAR_INJURED( l_U736[0] )))
        {
            sub_26302( ref l_U848, 0 );
            sub_22213( "DM3_SHOUT", ref l_U848, 6, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U745[0] )))
        {
            SAY_AMBIENT_SPEECH( l_U745[0], "CHASE_IN_GROUP", 0, 0, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U745[1] )))
        {
            SAY_AMBIENT_SPEECH( l_U745[1], "CHASE_IN_GROUP", 0, 0, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U736[1] )))
        {
            SAY_AMBIENT_SPEECH( l_U736[1], "CHASE_IN_GROUP", 0, 0, 0 );
        };;;;
        sub_47379();
        sub_47650();
        g_U9942 = 0;
        SET_MAX_WANTED_LEVEL( 0 );
        CLEAR_WANTED_LEVEL( l_U838 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SET_CREATE_RANDOM_COPS( 0 );
        CLEAR_AREA_OF_COPS( 0, 0, 0, 9999 );
        SET_FAKE_WANTED_LEVEL( 3 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        PRINTSTRING( "\n\n ----> Set Fake Wanted Level \n\n\n" );
        l_U582 = 1;
    }
    if ((TIMERA() > 0) AND ((l_U548 == 0) AND (l_U499 == 0)))
    {
        l_U499 = 1;
        if (NOT (IS_CHAR_INJURED( l_U736[0] )))
        {
            sub_26302( ref l_U848, 0 );
            sub_22213( "DM3_SHOUT", ref l_U848, 6, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U745[0] )))
        {
            SAY_AMBIENT_SPEECH( l_U745[0], "TAKE_COVER", 0, 0, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U745[1] )))
        {
            SAY_AMBIENT_SPEECH( l_U745[1], "TAKE_COVER", 0, 0, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U736[1] )))
        {
            SAY_AMBIENT_SPEECH( l_U736[1], "TAKE_COVER", 0, 0, 0 );
        };;;;
        sub_47379();
        sub_47650();
        g_U9942 = 0;
        SET_MAX_WANTED_LEVEL( 0 );
        CLEAR_WANTED_LEVEL( l_U838 );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SET_CREATE_RANDOM_COPS( 0 );
        CLEAR_AREA_OF_COPS( 0, 0, 0, 9999 );
        SET_FAKE_WANTED_LEVEL( 3 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        PRINTSTRING( "\n\n ----> Set Fake Wanted Level \n\n\n" );
    }
    if ((NOT (sub_26102( l_U848 ))) AND ((TIMERA() > 7000) AND (l_U499 == 1)))
    {
        l_U499 = 2;
        if (NOT (IS_CHAR_INJURED( l_U745[0] )))
        {
            sub_39313( "DM3_WATCH", 1, 1, ref l_U848, 6, 1 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U745[0] )))
        {
            SAY_AMBIENT_SPEECH( l_U745[0], "REQUEST_BACKUP", 0, 0, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U745[1] )))
        {
            SAY_AMBIENT_SPEECH( l_U745[1], "REQUEST_BACKUP", 0, 0, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U736[1] )))
        {
            SAY_AMBIENT_SPEECH( l_U736[1], "REQUEST_BACKUP", 0, 0, 0 );
        };;;;
    }
    if ((NOT (sub_26102( l_U848 ))) AND ((TIMERA() > 12000) AND (l_U499 == 2)))
    {
        l_U499 = 3;
        sub_22213( "DM3_HFIRE", ref l_U848, 6, 1 );
    }
    if ((NOT (sub_26102( l_U848 ))) AND ((TIMERA() > 18000) AND (l_U499 == 3)))
    {
        l_U499 = 4;
        TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_DM3" );
    }
    if ((NOT (sub_26102( l_U848 ))) AND ((TIMERA() > 24000) AND (l_U499 == 4)))
    {
        l_U499 = 5;
        sub_22213( "DM3_GUYS", ref l_U848, 6, 1 );
    }
    if ((NOT (sub_26102( l_U848 ))) AND ((TIMERA() > 30000) AND (l_U499 == 5)))
    {
        l_U499 = 6;
        if (NOT (IS_CHAR_INJURED( l_U745[0] )))
        {
            sub_39313( "DM3_WATCH", 0, 1, ref l_U848, 6, 1 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U745[0] )))
        {
            SAY_AMBIENT_SPEECH( l_U745[0], "TARGET", 0, 0, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U745[1] )))
        {
            SAY_AMBIENT_SPEECH( l_U745[1], "TARGET", 0, 0, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U736[1] )))
        {
            SAY_AMBIENT_SPEECH( l_U736[1], "TARGET", 0, 0, 0 );
        };;;;
    }
    if ((NOT (sub_26102( l_U848 ))) AND ((TIMERA() > 37500) AND (l_U499 == 6)))
    {
        l_U499 = 7;
        sub_22213( "DM3_GUYS", ref l_U848, 6, 1 );
    }
    if ((TIMERA() > 45000) AND (l_U499 == 7))
    {
        l_U499 = 8;
        if (NOT (IS_CHAR_INJURED( l_U745[0] )))
        {
            sub_39313( "DM3_WATCH", 2, 1, ref l_U848, 6, 1 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U745[0] )))
        {
            SAY_AMBIENT_SPEECH( l_U745[0], "REQUEST_BACKUP", 0, 0, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U745[1] )))
        {
            SAY_AMBIENT_SPEECH( l_U745[1], "REQUEST_BACKUP", 0, 0, 0 );
        }
        else if (NOT (IS_CHAR_INJURED( l_U736[1] )))
        {
            SAY_AMBIENT_SPEECH( l_U736[1], "REQUEST_BACKUP", 0, 0, 0 );
        };;;;
    }
    if ((l_U570 == 1) AND (l_U569 == 1))
    {
        if (NOT (DOES_BLIP_EXIST( l_U622 )))
        {
            ADD_BLIP_FOR_CAR( l_U813, ref l_U622 );
            CHANGE_BLIP_COLOUR( l_U622, 3 );
        }
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            LOCK_CAR_DOORS( l_U813, 1 );
        }
        SET_PED_IS_BLIND_RAGING( l_U837, 0 );
        sub_26302( ref l_U848, 0 );
        sub_22213( "DM3_VAN", ref l_U848, 6, 0 );
        SETTIMERA( 0 );
        l_U490++;
    }
    if (l_U548 == 0)
    {
        if ((NOT (IS_CHAR_INJURED( l_U730 ))) AND (NOT (IS_CAR_DEAD( l_U806 ))))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U806 )))
            {
                TASK_LEAVE_ANY_CAR( l_U730 );
                l_U548 = 1;
            }
        }
    }
    sub_49746();
    sub_49878();
    sub_50010();
    sub_53054();
    if (DOES_CHAR_EXIST( l_U730 ))
    {
        sub_53364();
    }
    if (l_U548 == 1)
    {
        sub_53364();
        sub_53732();
    }
    if (NOT (IS_CAR_DEAD( l_U813 )))
    {
        CONTROL_CAR_DOOR( l_U813, 5, 0, 0.00000000 );
        CONTROL_CAR_DOOR( l_U813, 2, 0, 0.00000000 );
        CONTROL_CAR_DOOR( l_U813, 3, 0, 0.00000000 );
        CLOSE_ALL_CAR_DOORS( l_U813 );
    }
    return;
}

void sub_47379()
{
    int I;

    for ( I = 1; I <= 7; I++ )
    {
        if ((NOT (DOES_BLIP_EXIST( l_U601[I] ))) AND (NOT (IS_CHAR_DEAD( l_U736[I] ))))
        {
            ADD_BLIP_FOR_CHAR( l_U736[I], ref l_U601[I] );
            SET_BLIP_AS_FRIENDLY( l_U601[I], 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U736[I] )))
        {
            CLEAR_CHAR_TASKS( l_U736[I] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U736[I], 0 );
            OPEN_SEQUENCE_TASK( ref l_U669 );
            TASK_LEAVE_ANY_CAR( 0 );
            TASK_COMBAT( 0, l_U837 );
            CLOSE_SEQUENCE_TASK( l_U669 );
            TASK_PERFORM_SEQUENCE( l_U736[I], l_U669 );
            CLEAR_SEQUENCE_TASK( l_U669 );
            SET_CHAR_RELATIONSHIP( l_U736[I], 5, 0 );
        }
    }
    return;
}

void sub_47650()
{
    int I;

    for ( I = 0; I <= 5; I++ )
    {
        if ((NOT (DOES_BLIP_EXIST( l_U610[I] ))) AND (NOT (IS_CHAR_DEAD( l_U745[I] ))))
        {
            ADD_BLIP_FOR_CHAR( l_U745[I], ref l_U610[I] );
            SET_BLIP_AS_FRIENDLY( l_U610[I], 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U745[I] )))
        {
            CLEAR_CHAR_TASKS( l_U745[I] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U745[I], 0 );
            OPEN_SEQUENCE_TASK( ref l_U669 );
            TASK_LEAVE_ANY_CAR( 0 );
            TASK_COMBAT( 0, l_U837 );
            CLOSE_SEQUENCE_TASK( l_U669 );
            TASK_PERFORM_SEQUENCE( l_U745[I], l_U669 );
            CLEAR_SEQUENCE_TASK( l_U669 );
            SET_CHAR_RELATIONSHIP( l_U745[I], 5, 0 );
        }
    }
    return;
}

void sub_49746()
{
    int I;

    l_U569 = 1;
    for ( I = 0; I <= 7; I++ )
    {
        if ((IS_CHAR_DEAD( l_U736[I] )) || (IS_CHAR_INJURED( l_U736[I] )))
        {
            if (DOES_BLIP_EXIST( l_U601[I] ))
            {
                REMOVE_BLIP( l_U601[I] );
            }
        }
        else
        {
            l_U569 = 0;
        }
    }
    return;
}

void sub_49878()
{
    int I;

    l_U570 = 1;
    for ( I = 0; I <= 5; I++ )
    {
        if ((IS_CHAR_DEAD( l_U745[I] )) || (IS_CHAR_INJURED( l_U745[I] )))
        {
            if (DOES_BLIP_EXIST( l_U610[I] ))
            {
                REMOVE_BLIP( l_U610[I] );
            }
        }
        else
        {
            l_U570 = 0;
        }
    }
    return;
}

void sub_50010()
{
    if ((l_U523 == 0) AND (IS_CAR_DEAD( l_U813 )))
    {
        sub_26302( ref l_U848, 0 );
        if (l_U548 == 1)
        {
            sub_22236( "DM3_CRASH", "DM3AUD", ref l_U848, 8, 1 );
        }
        if ((l_U562 == 1) AND (l_U490 == 11))
        {
            while (sub_26102( l_U848 ))
            {
                WAIT( 0 );
            }
            while (NOT (sub_50150( 1, 0 )))
            {
                WAIT( 0 );
            }
            sub_50454();
        }
        while (sub_26102( l_U848 ))
        {
            WAIT( 0 );
        }
        PRINT_NOW( "DM_FAIL_06", 7000, 1 );
        if (NOT (IS_CHAR_DEAD( l_U731 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U731 )))
            {
                DELETE_CHAR( ref l_U731 );
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U731 );
            }
        }
        if (l_U582 == 1)
        {
            g_U9942 = 1;
            SET_WANTED_MULTIPLIER( 1.00000000 );
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U838, 3 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U838 );
            SET_CREATE_RANDOM_COPS( 1 );
            SET_FAKE_WANTED_LEVEL( 0 );
            ALLOW_EMERGENCY_SERVICES( 1 );
            l_U582 = 0;
        }
        l_U490 = -1;
        l_U523 = 1;
    }
    if ((l_U523 == 0) AND (NOT (IS_CAR_DEAD( l_U813 ))))
    {
        if ((NOT (IS_VEH_DRIVEABLE( l_U813 ))) || (sub_7788( l_U813 )))
        {
            sub_26302( ref l_U848, 0 );
            if (l_U548 == 1)
            {
                sub_22236( "DM3_CRASH", "DM3AUD", ref l_U848, 8, 1 );
            }
            if ((l_U562 == 1) AND (l_U490 == 11))
            {
                while (sub_26102( l_U848 ))
                {
                    WAIT( 0 );
                }
                while (NOT (sub_50150( 1, 0 )))
                {
                    WAIT( 0 );
                }
                sub_50454();
            }
            while (sub_26102( l_U848 ))
            {
                WAIT( 0 );
            }
            PRINT_NOW( "DM_FAIL_06", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U731 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U731 )))
                {
                    DELETE_CHAR( ref l_U731 );
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U731 );
                }
            }
            if (l_U582 == 1)
            {
                g_U9942 = 1;
                SET_WANTED_MULTIPLIER( 1.00000000 );
                SET_MAX_WANTED_LEVEL( 6 );
                ALTER_WANTED_LEVEL( l_U838, 3 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( l_U838 );
                SET_CREATE_RANDOM_COPS( 1 );
                SET_FAKE_WANTED_LEVEL( 0 );
                ALLOW_EMERGENCY_SERVICES( 1 );
                l_U582 = 0;
            }
            l_U490 = -1;
            l_U523 = 1;
        }
    }
    return;
}

int sub_50150(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3432() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3432(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3432() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3432(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3432()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3432() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3432() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_6763() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_6763() )))
    {
        return 0;
    }
    return 1;
}

void sub_50454()
{
    unknown uVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    if (sub_50150( 1, 0 ))
    {
        iVar3 = 0;
        CLEAR_PRINTS();
        SET_PLAYER_CONTROL_ADVANCED( l_U838, 0, 1, 1 );
        DO_SCREEN_FADE_OUT( 2000 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        g_U8086 = 1;
        SWITCH_PED_PATHS_OFF( 1390.00000000, 608.00000000, 25, 1408.00000000, 646.00000000, 38.00000000 );
        SWITCH_ROADS_OFF( 1390.00000000, 608.00000000, 25, 1408.00000000, 646.00000000, 38.00000000 );
        SET_CHAR_COORDINATES( l_U837, 1401.60600000, 618.81800000 + 4, 36.00000000 );
        CLEAR_AREA( 1401.60600000, 618.81800000 + 4, 36.00000000, 50, 1 );
        GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U802, ref l_U803 );
        REQUEST_MODEL( l_U802 );
        while (NOT (HAS_MODEL_LOADED( l_U802 )))
        {
            WAIT( 0 );
        }
        if (l_U803 == -1)
        {
            l_U802 = -1041692462;
            sub_6804( l_U802 );
            while (NOT (HAS_MODEL_LOADED( l_U802 )))
            {
                WAIT( 0 );
            }
            CREATE_CAR( l_U802, 1401.60600000, 618.81800000, 34.90700000, ref uVar4, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U802 );
        }
        else
        {
            CREATE_CAR( l_U802, 1401.60600000, 618.81800000, 34.90700000, ref uVar4, 1 );
        }
        SET_CAR_ON_GROUND_PROPERLY( uVar4 );
        SET_CAR_ENGINE_ON( uVar4, 1, 1 );
        RETUNE_RADIO_TO_STATION_NAME( "VLADIVOSTOK" );
        WARP_CHAR_INTO_CAR( l_U837, uVar4 );
        if (NOT (IS_CHAR_DEAD( l_U730 )))
        {
            SET_CHAR_HEALTH( l_U730, 200 );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U730, uVar4, 0 );
        }
        else
        {
            sub_18533( 13, ref l_U730, 1401.60600000 - 2.00000000, 618.81800000, 34.90700000, 165.43760000 );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U730, uVar4, 0 );
            sub_6604( 7, l_U730, "PACKIE_MCREARY", 0 );
        }
        if (DOES_CHAR_EXIST( l_U731 ))
        {
            DELETE_CHAR( ref l_U731 );
        }
        if (DOES_VEHICLE_EXIST( l_U813 ))
        {
            DELETE_CAR( ref l_U813 );
        }
        if (DOES_VEHICLE_EXIST( l_U481 ))
        {
            DELETE_CAR( ref l_U481 );
        }
        LOAD_SCENE( 1401.60600000, 618.81800000, 34.90700000 );
        DISPLAY_RADAR( 0 );
        DISPLAY_HUD( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        BEGIN_CAM_COMMANDS( ref l_U641 );
        CREATE_CAM( 14, ref uVar2 );
        SET_CAM_ACTIVE( uVar2, 1 );
        SET_CAM_PROPAGATE( uVar2, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        ATTACH_CAM_TO_PED( uVar2, l_U837 );
        SET_CAM_ATTACH_OFFSET( uVar2, 0.00000000, 1.50000000, 0.65000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( uVar2, 1 );
        POINT_CAM_AT_PED( uVar2, l_U837 );
        SET_CAM_POINT_OFFSET( uVar2, 0.65000000, 0.00000000, 0.40000000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( uVar2, 1 );
        SET_CAM_FOV( uVar2, 40.40003000 );
        WAIT( 2000 );
        if (DOES_CHAR_EXIST( l_U731 ))
        {
            DELETE_CHAR( ref l_U731 );
        }
        if (DOES_VEHICLE_EXIST( l_U481 ))
        {
            DELETE_CAR( ref l_U481 );
        }
        CLEAR_AREA( 1401.60600000, 618.81800000, 34.90700000, 50, 1 );
        DO_SCREEN_FADE_IN( 1000 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        SETTIMERA( 0 );
        while ((TIMERA() < 1000) AND ((iVar3 == 0) AND (sub_26102( l_U848 ))))
        {
            if (sub_22054())
            {
                iVar3 = 1;
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
            }
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U730 )))
        {
            sub_39313( "DM3_HOME", 0, 1, ref l_U848, 8, 1 );
        }
        while ((TIMERA() < 5000) AND ((iVar3 == 0) AND (sub_26102( l_U848 ))))
        {
            if (sub_22054())
            {
                iVar3 = 1;
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
            }
            WAIT( 0 );
        }
        if (iVar3 == 0)
        {
            if (NOT (IS_CHAR_INJURED( l_U730 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar5 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1391.50300000, 622.43990000, 35.77940000, 2, 6000, 0.50000000 );
                CLOSE_SEQUENCE_TASK( uVar5 );
                TASK_PERFORM_SEQUENCE( l_U730, uVar5 );
            }
            if (NOT (IS_CHAR_INJURED( l_U837 )))
            {
                sub_39313( "DM3_HOME", 1, 1, ref l_U848, 8, 1 );
            }
            SETTIMERA( 0 );
        }
        while ((TIMERA() < 1000) AND (iVar3 == 0))
        {
            if (sub_22054())
            {
                iVar3 = 1;
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
            }
            WAIT( 0 );
        }
        if (iVar3 == 0)
        {
            UNATTACH_CAM( uVar2 );
            UNPOINT_CAM( uVar2 );
            SET_CAM_POS( uVar2, 1391.02400000, 627.19430000, 36.75542000 );
            SET_CAM_ROT( uVar2, -23.25736000, -0.00000000, -144.37150000 );
            SET_CAM_FOV( uVar2, 45.00000000 );
            SETTIMERA( 0 );
        }
        while ((TIMERA() < 7000) AND (iVar3 == 0))
        {
            if (sub_22054())
            {
                iVar3 = 1;
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
            }
            WAIT( 0 );
        }
        SET_CAM_ACTIVE( uVar2, 1 );
        SET_CAM_PROPAGATE( uVar2, 1 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( uVar2 );
        END_CAM_COMMANDS( ref l_U641 );
        SET_WIDESCREEN_BORDERS( 0 );
        DISPLAY_RADAR( 1 );
        DISPLAY_HUD( 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_26302( ref l_U848, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        DELETE_CHAR( ref l_U730 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar4 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U802 );
        SWITCH_PED_PATHS_ON( 1390.00000000, 608.00000000, 25, 1408.00000000, 646.00000000, 38.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1390.00000000, 608.00000000, 25, 1408.00000000, 646.00000000, 38.00000000 );
        if (iVar3 == 1)
        {
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
        }
        g_U8086 = 0;
        SET_PLAYER_CONTROL_ADVANCED( l_U838, 1, 1, 1 );
    }
    return;
}

void sub_53054()
{
    if ((l_U523 == 0) AND (IS_CHAR_INJURED( l_U731 )))
    {
        sub_26302( ref l_U848, 0 );
        sub_22236( "DM3_DROP", "DM3AUD", ref l_U848, 8, 1 );
        if ((l_U562 == 1) AND (l_U490 == 13))
        {
            while (sub_26102( l_U848 ))
            {
                WAIT( 0 );
            }
            while (NOT (sub_50150( 1, 0 )))
            {
                WAIT( 0 );
            }
            sub_50454();
        }
        PRINT_NOW( "DM_FAIL_03", 7000, 1 );
        if (l_U582 == 1)
        {
            g_U9942 = 1;
            SET_WANTED_MULTIPLIER( 1.00000000 );
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U838, 3 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U838 );
            SET_CREATE_RANDOM_COPS( 1 );
            SET_FAKE_WANTED_LEVEL( 0 );
            ALLOW_EMERGENCY_SERVICES( 1 );
            l_U582 = 0;
        }
        l_U490 = -1;
        l_U523 = 1;
    }
    return;
}

void sub_53364()
{
    if ((l_U523 == 0) AND (IS_CHAR_INJURED( l_U730 )))
    {
        sub_53405( 13, l_U730, 16 );
        if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (DOES_CHAR_EXIST( l_U730 )))
        {
            DAMAGE_CHAR( l_U730, 2000, 0 );
        }
        PRINT_NOW( "DM_FAIL_04", 7000, 1 );
        if (NOT (IS_CHAR_DEAD( l_U731 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U731 )))
            {
                DELETE_CHAR( ref l_U731 );
            }
            else
            {
                SET_CHAR_KEEP_TASK( l_U731, 1 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U731 );
            }
        }
        if (l_U582 == 1)
        {
            g_U9942 = 1;
            SET_WANTED_MULTIPLIER( 1.00000000 );
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U838, 3 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U838 );
            SET_CREATE_RANDOM_COPS( 1 );
            SET_FAKE_WANTED_LEVEL( 0 );
            ALLOW_EMERGENCY_SERVICES( 1 );
            l_U582 = 0;
        }
        l_U490 = -1;
        l_U523 = 1;
    }
    return;
}

void sub_53405(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_53732()
{
    if ((l_U523 == 0) AND ((l_U556 == 1) AND (NOT (IS_CHAR_DEAD( l_U730 )))))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U837, l_U730, 250.00000000, 250.00000000, 250.00000000, 0 )))
        {
            PRINT_NOW( "DM_FAIL_07", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U731 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U731 )))
                {
                    DELETE_CHAR( ref l_U731 );
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U731 );
                }
            }
            if (l_U582 == 1)
            {
                g_U9942 = 1;
                SET_WANTED_MULTIPLIER( 1.00000000 );
                SET_MAX_WANTED_LEVEL( 6 );
                ALTER_WANTED_LEVEL( l_U838, 3 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( l_U838 );
                SET_CREATE_RANDOM_COPS( 1 );
                SET_FAKE_WANTED_LEVEL( 0 );
                ALLOW_EMERGENCY_SERVICES( 1 );
                l_U582 = 0;
            }
            l_U490 = -1;
            l_U523 = 1;
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U837, l_U730, 150.00000000, 150.00000000, 150.00000000, 0 )))
        {
            if (l_U587 == 0)
            {
                PRINT( "DM_CMD_19", 7000, 1 );
                if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (DOES_BLIP_EXIST( l_U623 ))))
                {
                    ADD_BLIP_FOR_CHAR( l_U730, ref l_U623 );
                    SET_BLIP_AS_FRIENDLY( l_U623, 1 );
                }
                l_U587 = 1;
            }
        }
        else if (l_U572 == 1)
        {
            if (DOES_BLIP_EXIST( l_U623 ))
            {
                REMOVE_BLIP( l_U623 );
            }
        }
        l_U587 = 0;;;
    }
    return;
}

void sub_54312()
{
    if (l_U571 == 0)
    {
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            if (IS_CHAR_IN_CAR( l_U837, l_U813 ))
            {
                l_U571 = 1;
            }
            else
            {
                l_U571 = 0;
            }
        }
    }
    if (l_U563 == 0)
    {
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U837, l_U813 )))
            {
                if (DOES_BLIP_EXIST( l_U623 ))
                {
                    PRINTSTRING( "\n ---> Remove Packie Blip 1 <--- \n" );
                    REMOVE_BLIP( l_U623 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U622 )))
                {
                    ADD_BLIP_FOR_CAR( l_U813, ref l_U622 );
                    CHANGE_BLIP_COLOUR( l_U622, 3 );
                }
                if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_INJURED( l_U730 ))))
                {
                    SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U730, 2 );
                    GET_PLAYER_GROUP( l_U838, ref l_U600 );
                    if (NOT (IS_CHAR_INJURED( l_U730 )))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U730, l_U600 )))
                        {
                            SET_GROUP_MEMBER( l_U600, l_U730 );
                            SET_CHAR_HEALTH( l_U730, 200 );
                            SET_CHAR_RELATIONSHIP( l_U730, 2, 23 );
                            CLEAR_CHAR_TASKS( l_U730 );
                        }
                    }
                    SET_SIREN_WITH_NO_DRIVER( l_U813, 0 );
                }
                SET_PED_IS_BLIND_RAGING( l_U837, 0 );
                while ((TIMERA() < 7000) AND (sub_26102( l_U848 )))
                {
                    WAIT( 0 );
                }
                SWITCH_PED_PATHS_OFF( -1343.00000000, 261.00000000, 8.00000000, -1289.00000000, 337.00000000, 16.00000000 );
                PRINT_NOW( "DM_CMD_06", 7500, 1 );
                g_U9890 = 0;
                l_U563 = 1;
            }
        }
    }
    if ((l_U571 == 1) AND (l_U572 == 0))
    {
        if (NOT (IS_CHAR_INJURED( l_U730 )))
        {
            if (NOT (IS_CAR_DEAD( l_U813 )))
            {
                if (l_U590 == 0)
                {
                    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U813, 0 );
                    l_U590 = 1;
                }
                if (IS_CHAR_SITTING_IN_CAR( l_U730, l_U813 ))
                {
                    if (DOES_BLIP_EXIST( l_U623 ))
                    {
                        REMOVE_BLIP( l_U623 );
                        PRINTSTRING( "\n ---> Remove Packie Blip 2 <--- \n" );
                    }
                    GET_PLAYER_GROUP( l_U838, ref l_U600 );
                    if (NOT (IS_CHAR_INJURED( l_U730 )))
                    {
                        if (IS_GROUP_MEMBER( l_U730, l_U600 ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U730 );
                        }
                    }
                    l_U572 = 1;
                }
                else
                {
                    l_U572 = 0;
                    if (NOT (DOES_BLIP_EXIST( l_U623 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U730, ref l_U623 );
                        SET_BLIP_AS_FRIENDLY( l_U623, 1 );
                        PRINTSTRING( "\n ---> Add Packie Blip 1 <--- \n" );
                    }
                    GET_PLAYER_GROUP( l_U838, ref l_U600 );
                    if (NOT (IS_CHAR_INJURED( l_U730 )))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U730, l_U600 )))
                        {
                            SET_CHAR_HEALTH( l_U730, 200 );
                            SET_CHAR_RELATIONSHIP( l_U730, 2, 23 );
                            SET_GROUP_MEMBER( l_U600, l_U730 );
                        }
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U730 )))
        {
            SET_CHAR_HEALTH( l_U730, 200 );
        }
    }
    if ((l_U572 == 0) AND (l_U571 == 1))
    {
        if (l_U591 == 0)
        {
            PRINT( "DM_CMD_12", 7500, 1 );
            l_U591 = 1;
        }
        if (DOES_BLIP_EXIST( l_U622 ))
        {
            REMOVE_BLIP( l_U622 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U623 )))
        {
            ADD_BLIP_FOR_CHAR( l_U730, ref l_U623 );
            SET_BLIP_AS_FRIENDLY( l_U623, 1 );
            PRINTSTRING( "\n ---> Add Packie Blip 2 <--- \n" );
        }
    }
    if ((l_U572 == 1) AND (l_U571 == 1))
    {
        sub_55558();
        if (DOES_BLIP_EXIST( l_U622 ))
        {
            REMOVE_BLIP( l_U622 );
        }
        if (DOES_BLIP_EXIST( l_U623 ))
        {
            REMOVE_BLIP( l_U623 );
            PRINTSTRING( "\n ---> Remove Packie Blip 3 <--- \n" );
        }
        sub_3586();
        sub_3701();
        sub_26874();
        SWITCH_ROADS_BACK_TO_ORIGINAL( 64696, 320, 65501, 65086, 800, -5 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            SET_POLICE_FOCUS_WILL_TRACK_CAR( l_U813, 0 );
        }
        SET_WANTED_MULTIPLIER( 1.00000000 );
        g_U9942 = 1;
        SET_WANTED_MULTIPLIER( 1.00000000 );
        SET_MAX_WANTED_LEVEL( 6 );
        ALTER_WANTED_LEVEL( l_U838, 3 );
        APPLY_WANTED_LEVEL_CHANGE_NOW( l_U838 );
        SET_CREATE_RANDOM_COPS( 1 );
        SET_FAKE_WANTED_LEVEL( 0 );
        ALLOW_EMERGENCY_SERVICES( 1 );
        l_U582 = 0;
        sub_26302( ref l_U848, 1 );
        sub_22213( "DM3_HEAT", ref l_U848, 7, 0 );
        while (sub_26102( l_U848 ))
        {
            WAIT( 0 );
        }
        PRINT_NOW( "DM_CMD_13", 7500, 1 );
        SETTIMERA( 0 );
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            CLOSE_ALL_CAR_DOORS( l_U813 );
        }
        l_U571 = 1;
        l_U572 = 1;
        l_U490++;
        l_U490++;
        l_U490++;
    }
    sub_50010();
    sub_53364();
    sub_53054();
    sub_53732();
    sub_58362();
    return;
}

void sub_55558()
{
    if (l_U535 == 0)
    {
        GET_CURRENT_POLICE_CAR_MODEL( ref l_U820 );
        while (NOT (HAS_MODEL_LOADED( l_U820 )))
        {
            PRINTSTRING( "\n\n\----> Load Cop Car Model \n\n\n" );
            REQUEST_MODEL( l_U820 );
            WAIT( 0 );
        }
        CREATE_CAR( l_U820, -764.39080000, 773.80790000, -21.09490000, ref l_U814[0], 1 );
        SET_CAR_HEADING( l_U814[0], 270.90110000 );
        LOCK_CAR_DOORS( l_U814[0], 1 );
        SET_CAR_ENGINE_ON( l_U814[0], 1, 1 );
        FORCE_CAR_LIGHTS( l_U814[0], 2 );
        SET_SIREN_WITH_NO_DRIVER( l_U814[0], 1 );
        SET_CAR_ON_GROUND_PROPERLY( l_U814[0] );
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U814[0], 1 );
        SET_ROOM_FOR_CAR_BY_NAME( l_U814[0], "GtaMloRoomTUN2" );
        CREATE_CAR( l_U820, -628.72960000, 425.08080000, -22.30060000, ref l_U814[1], 1 );
        SET_CAR_HEADING( l_U814[1], 313.13660000 );
        LOCK_CAR_DOORS( l_U814[1], 1 );
        SET_CAR_ENGINE_ON( l_U814[1], 1, 1 );
        FORCE_CAR_LIGHTS( l_U814[1], 2 );
        SET_SIREN_WITH_NO_DRIVER( l_U814[1], 1 );
        SET_CAR_ON_GROUND_PROPERLY( l_U814[1] );
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U814[1], 1 );
        SET_ROOM_FOR_CAR_BY_NAME( l_U814[1], "GtaMloRoomTUN4" );
        CREATE_CAR( l_U820, -715.23820000, 783.95010000, -20.82890000, ref l_U814[2], 1 );
        SET_CAR_HEADING( l_U814[2], 267.72360000 );
        LOCK_CAR_DOORS( l_U814[2], 1 );
        SET_CAR_ENGINE_ON( l_U814[2], 1, 1 );
        FORCE_CAR_LIGHTS( l_U814[2], 2 );
        SET_SIREN_WITH_NO_DRIVER( l_U814[2], 1 );
        SET_CAR_ON_GROUND_PROPERLY( l_U814[2] );
        SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U814[2], 1 );
        SET_ROOM_FOR_CAR_BY_NAME( l_U814[2], "GtaMloRoomTUN2" );
        GET_CURRENT_COP_MODEL( ref l_U761 );
        CREATE_CHAR( 6, l_U761, -617.73990000 + 1.00000000, 427.17850000, -20.92160000 - 1.00000000, ref l_U752[0], 1 );
        SET_CHAR_HEADING( l_U752[0], 252.72590000 );
        sub_33059( l_U752[0], 2, 0, 1 );
        sub_33320( l_U752[0], 0 );
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U752[0], 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U752[0], "GtaMloRoomTUN2" );
        SET_CHAR_RELATIONSHIP( l_U752[0], 5, 0 );
        if ((NOT (IS_CAR_DEAD( l_U814[0] ))) AND (NOT (IS_CHAR_DEAD( l_U752[0] ))))
        {
            WARP_CHAR_INTO_CAR( l_U752[0], l_U814[0] );
        }
        CREATE_CHAR( 6, l_U761, -617.73990000 + 1.50000000, 427.17850000, -20.92160000 - 1.00000000, ref l_U752[1], 1 );
        SET_CHAR_HEADING( l_U752[1], 280.18600000 );
        sub_33059( l_U752[1], 2, 0, 1 );
        sub_33320( l_U752[1], 0 );
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U752[1], 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U752[1], "GtaMloRoomTUN2" );
        SET_CHAR_RELATIONSHIP( l_U752[1], 5, 0 );
        if ((NOT (IS_CAR_DEAD( l_U814[0] ))) AND (NOT (IS_CHAR_DEAD( l_U752[1] ))))
        {
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U752[1], l_U814[0], 0 );
        }
        CREATE_CHAR( 6, l_U761, -617.73990000 + 1.00000000, 427.17850000, -20.92160000 - 1.00000000, ref l_U752[2], 1 );
        SET_CHAR_HEADING( l_U752[2], 252.72590000 );
        sub_33059( l_U752[2], 2, 0, 1 );
        sub_33320( l_U752[2], 0 );
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U752[2], 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U752[2], "GtaMloRoomTUN4" );
        SET_CHAR_RELATIONSHIP( l_U752[2], 5, 0 );
        if ((NOT (IS_CAR_DEAD( l_U814[1] ))) AND (NOT (IS_CHAR_DEAD( l_U752[2] ))))
        {
            WARP_CHAR_INTO_CAR( l_U752[2], l_U814[1] );
        }
        CREATE_CHAR( 6, l_U761, -617.73990000 + 1.50000000, 427.17850000, -20.92160000 - 1.00000000, ref l_U752[3], 1 );
        SET_CHAR_HEADING( l_U752[3], 280.18600000 );
        sub_33059( l_U752[3], 2, 0, 1 );
        sub_33320( l_U752[3], 0 );
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U752[3], 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U752[3], "GtaMloRoomTUN4" );
        SET_CHAR_RELATIONSHIP( l_U752[3], 5, 0 );
        if ((NOT (IS_CAR_DEAD( l_U814[1] ))) AND (NOT (IS_CHAR_DEAD( l_U752[3] ))))
        {
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U752[3], l_U814[1], 0 );
        }
        CREATE_CHAR( 6, l_U761, -617.73990000 + 1.00000000, 427.17850000, -20.92160000 - 1.00000000, ref l_U752[4], 1 );
        SET_CHAR_HEADING( l_U752[4], 252.72590000 );
        sub_33059( l_U752[4], 2, 0, 1 );
        sub_33320( l_U752[4], 0 );
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U752[4], 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U752[4], "GtaMloRoomTUN2" );
        SET_CHAR_RELATIONSHIP( l_U752[4], 5, 0 );
        if ((NOT (IS_CAR_DEAD( l_U814[2] ))) AND (NOT (IS_CHAR_DEAD( l_U752[4] ))))
        {
            WARP_CHAR_INTO_CAR( l_U752[4], l_U814[2] );
        }
        CREATE_CHAR( 6, l_U761, -617.73990000 + 1.50000000, 427.17850000, -20.92160000 - 1.00000000, ref l_U752[5], 1 );
        SET_CHAR_HEADING( l_U752[5], 280.18600000 );
        sub_33059( l_U752[5], 2, 0, 1 );
        sub_33320( l_U752[5], 0 );
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U752[5], 1 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U752[5], "GtaMloRoomTUN2" );
        SET_CHAR_RELATIONSHIP( l_U752[5], 5, 0 );
        if ((NOT (IS_CAR_DEAD( l_U814[2] ))) AND (NOT (IS_CHAR_DEAD( l_U752[5] ))))
        {
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U752[5], l_U814[2], 0 );
        }
        if ((NOT (IS_CAR_DEAD( l_U814[0] ))) AND (NOT (IS_CHAR_DEAD( l_U752[0] ))))
        {
            SWITCH_CAR_SIREN( l_U814[0], 1 );
            TASK_CAR_MISSION( l_U752[0], l_U814[0], l_U813, 3, 12.00000000, 2, 25, 5 );
        }
        if ((NOT (IS_CAR_DEAD( l_U814[1] ))) AND (NOT (IS_CHAR_DEAD( l_U752[2] ))))
        {
            SWITCH_CAR_SIREN( l_U814[1], 1 );
            TASK_CAR_MISSION( l_U752[2], l_U814[1], l_U813, 3, 12.00000000, 2, 25, 5 );
        }
        if ((NOT (IS_CAR_DEAD( l_U814[2] ))) AND (NOT (IS_CHAR_DEAD( l_U752[4] ))))
        {
            SWITCH_CAR_SIREN( l_U814[2], 1 );
            TASK_CAR_MISSION( l_U752[4], l_U814[2], l_U813, 3, 12.00000000, 2, 25, 5 );
        }
        l_U535 = 1;
    }
    return;
}

void sub_58362()
{
    if ((l_U523 == 0) AND ((l_U556 == 1) AND (NOT (IS_CHAR_DEAD( l_U731 )))))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U837, l_U731, 300.00000000, 300.00000000, 300.00000000, 0 )))
        {
            sub_26302( ref l_U848, 0 );
            if (NOT (IS_CHAR_INJURED( l_U730 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U837, l_U730, 8.00000000, 8.00000000, 8.00000000, 0 ))
                {
                    sub_22236( "DM3_CRASH", "DM3AUD", ref l_U848, 8, 1 );
                }
            }
            while (sub_26102( l_U848 ))
            {
                WAIT( 0 );
            }
            PRINT_NOW( "DM_FAIL_02", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U731 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U731 )))
                {
                    DELETE_CHAR( ref l_U731 );
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U731 );
                }
            }
            g_U9942 = 1;
            SET_WANTED_MULTIPLIER( 1.00000000 );
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U838, 3 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U838 );
            SET_CREATE_RANDOM_COPS( 1 );
            SET_FAKE_WANTED_LEVEL( 0 );
            ALLOW_EMERGENCY_SERVICES( 1 );
            l_U582 = 0;
            l_U490 = -1;
            l_U523 = 1;
        }
    }
    return;
}

void sub_58773()
{
    if ((TIMERA() > 7000) AND (l_U565 == 0))
    {
        if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CAR_DEAD( l_U813 ))))
        {
            if ((IS_CHAR_SITTING_IN_CAR( l_U730, l_U813 )) AND (IS_CHAR_SITTING_IN_CAR( l_U837, l_U813 )))
            {
                if ((NOT (sub_26102( l_U848 ))) AND (l_U567 == 0))
                {
                    if (g_U64978 == 0)
                    {
                        sub_22213( "DM3_B1V1", ref l_U848, 7, 0 );
                    }
                    else
                    {
                        sub_22213( "DM3_B1V2", ref l_U848, 7, 0 );
                    }
                    l_U567 = 1;
                }
                else if (NOT (sub_26102( l_U848 )))
                {
                    if (g_U64978 == 0)
                    {
                        sub_59027( "DM3_B1V1", ref l_U848, 7, 1 );
                    }
                    else
                    {
                        sub_59027( "DM3_B1V2", ref l_U848, 7, 1 );
                    }
                }
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U837, 0 );
            }
            else
            {
                sub_59190( ref l_U848 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U837, 1 );
            }
        }
    }
    if ((TIMERA() > 7000) AND (l_U565 == 1))
    {
        if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CAR_DEAD( l_U813 ))))
        {
            if ((IS_CHAR_SITTING_IN_CAR( l_U730, l_U813 )) AND (IS_CHAR_SITTING_IN_CAR( l_U837, l_U813 )))
            {
                if ((NOT (sub_26102( l_U848 ))) AND (l_U566 == 0))
                {
                    if (g_U64979 == 0)
                    {
                        sub_22213( "DM3_B2V1", ref l_U848, 7, 0 );
                    }
                    else
                    {
                        sub_22213( "DM3_B2V2", ref l_U848, 7, 0 );
                    }
                    l_U566 = 1;
                }
                else if (NOT (sub_26102( l_U848 )))
                {
                    if (g_U64979 == 0)
                    {
                        sub_59027( "DM3_B2V1", ref l_U848, 7, 1 );
                    }
                    else
                    {
                        sub_59027( "DM3_B2V2", ref l_U848, 7, 1 );
                    }
                }
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U837, 0 );
            }
            else
            {
                sub_59190( ref l_U848 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U837, 1 );
            }
        }
    }
    if ((l_U562 == 1) AND (IS_WANTED_LEVEL_GREATER( l_U838, 0 )))
    {
        if (DOES_BLIP_EXIST( l_U625 ))
        {
            REMOVE_BLIP( l_U625 );
        }
        if (DOES_BLIP_EXIST( l_U626 ))
        {
            REMOVE_BLIP( l_U626 );
        }
        PRINT_NOW( "DM_CMD_13", 7500, 1 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U837, 0 );
        l_U562 = 0;
    }
    if ((l_U562 == 0) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U838, 0 ))))
    {
        if (NOT (DOES_BLIP_EXIST( l_U626 )))
        {
            ADD_BLIP_FOR_COORD( -1549.12100000, 1230.06000000, 11.61870000, ref l_U626 );
            SET_ROUTE( l_U626, 1 );
        }
        if (l_U565 == 0)
        {
            while (sub_26102( l_U848 ))
            {
                WAIT( 0 );
            }
            sub_26302( ref l_U848, 1 );
            sub_22213( "DM3_LOSE", ref l_U848, 7, 0 );
            while (sub_26102( l_U848 ))
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            l_U565 = 1;
        }
        if ((NOT (IS_CAR_DEAD( l_U814[0] ))) AND (NOT (IS_CHAR_DEAD( l_U752[0] ))))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U752[0] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[0] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U814[0] );
        }
        if ((NOT (IS_CAR_DEAD( l_U814[1] ))) AND (NOT (IS_CHAR_DEAD( l_U752[2] ))))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U752[2] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[2] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U814[1] );
        }
        if ((NOT (IS_CAR_DEAD( l_U814[2] ))) AND (NOT (IS_CHAR_DEAD( l_U752[4] ))))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U752[4] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[4] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U814[2] );
        }
        PRINT_NOW( "DM_CMD_07", 7500, 1 );
        l_U565 = 1;
        SETTIMERA( 0 );
        l_U562 = 1;
    }
    if ((l_U562 == 1) AND ((l_U572 == 1) AND (l_U571 == 1)))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U837, -1549.12100000, 1230.06000000, 11.25000000 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            if (DOES_BLIP_EXIST( l_U625 ))
            {
                REMOVE_BLIP( l_U625 );
            }
            if (DOES_BLIP_EXIST( l_U626 ))
            {
                REMOVE_BLIP( l_U626 );
            }
            SET_PLAYER_CONTROL_ADVANCED( l_U838, 0, 1, 1 );
            l_U490++;
        }
    }
    if (l_U571 == 0)
    {
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            if (IS_CHAR_IN_CAR( l_U837, l_U813 ))
            {
                if (DOES_BLIP_EXIST( l_U622 ))
                {
                    REMOVE_BLIP( l_U622 );
                }
                if (l_U562 == 1)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U626 )))
                    {
                        ADD_BLIP_FOR_COORD( -1549.12100000, 1230.06000000, 11.61870000, ref l_U626 );
                        SET_ROUTE( l_U626, 1 );
                    }
                    PRINT_NOW( "DM_CMD_07", 7500, 1 );
                    SETTIMERA( 0 );
                }
                else
                {
                    PRINT_NOW( "DM_CMD_13", 7500, 1 );
                }
                l_U571 = 1;
            }
        }
    }
    else if (l_U571 == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U837, l_U813 )))
            {
                if (DOES_BLIP_EXIST( l_U625 ))
                {
                    REMOVE_BLIP( l_U625 );
                }
                if (DOES_BLIP_EXIST( l_U626 ))
                {
                    REMOVE_BLIP( l_U626 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U622 )))
                {
                    ADD_BLIP_FOR_CAR( l_U813, ref l_U622 );
                    CHANGE_BLIP_COLOUR( l_U622, 3 );
                }
                if (NOT (IS_CHAR_DEAD( l_U730 )))
                {
                    SAY_AMBIENT_SPEECH( l_U730, "GET_IN_CAR", 1, 1, 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U813 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U837, l_U813 )))
                    {
                        PRINT_NOW( "DM_CMD_11", 7500, 1 );
                    }
                }
                l_U571 = 0;
            }
        }
    }
    if (l_U572 == 0)
    {
        if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
        {
            if (IS_CHAR_IN_CAR( l_U730, l_U813 ))
            {
                if (DOES_BLIP_EXIST( l_U623 ))
                {
                    REMOVE_BLIP( l_U623 );
                }
                GET_PLAYER_GROUP( l_U838, ref l_U600 );
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    if (IS_GROUP_MEMBER( l_U730, l_U600 ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U730 );
                    }
                }
                l_U572 = 1;
            }
            else
            {
                l_U572 = 0;
                GET_PLAYER_GROUP( l_U838, ref l_U600 );
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    if (NOT (IS_GROUP_MEMBER( l_U730, l_U600 )))
                    {
                        SET_GROUP_MEMBER( l_U600, l_U730 );
                        SET_CHAR_HEALTH( l_U730, 200 );
                        SET_CHAR_RELATIONSHIP( l_U730, 2, 23 );
                    }
                }
            }
        }
    }
    if (l_U536 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U837, -623.67840000, 656.64180000, -26.29200000, 100.00000000, 100.00000000, 100.00000000, 0 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[0] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[1] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[2] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[3] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U814[0] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U814[1] );
            l_U536 = 1;
        }
    }
    sub_50010();
    sub_53364();
    sub_53054();
    sub_53732();
    sub_61685();
    return;
}

void sub_59027(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_59050( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_59050(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_22290( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_59190(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_8189( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_8189( "\n CONVERSATION PAUSED AT LINE " );
            sub_59346( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_8189( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_8189( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_8189( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_59346(unknown uParam0)
{
    return;
}

void sub_61685()
{
    if (NOT (IS_CAR_DEAD( l_U813 )))
    {
        CONTROL_CAR_DOOR( l_U813, 5, 0, 0.00000000 );
        CONTROL_CAR_DOOR( l_U813, 2, 0, 0.00000000 );
        CONTROL_CAR_DOOR( l_U813, 3, 0, 0.00000000 );
    }
    return;
}

void sub_61947()
{
    if (l_U577 == 0)
    {
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SWITCH_ROADS_OFF( -1550.00000000, 1100.00000000, 10.00000000, -1700.00000000, 1500.00000000, -2.00000000 );
        sub_26302( ref l_U848, 0 );
        sub_62030();
        if (NOT (DOES_BLIP_EXIST( l_U624 )))
        {
            ADD_BLIP_FOR_CHAR( l_U731, ref l_U624 );
            SET_BLIP_AS_FRIENDLY( l_U624, 0 );
        }
        PRINT_NOW( "DM_CMD_14", 7500, 1 );
        if ((NOT (IS_CHAR_DEAD( l_U731 ))) AND (NOT (IS_CHAR_INJURED( l_U730 ))))
        {
            SET_CHAR_READY_TO_BE_EXECUTED( l_U731, 1 );
            OPEN_SEQUENCE_TASK( ref l_U669 );
            TASK_GO_STRAIGHT_TO_COORD( 0, -1551.24000000, 1218.36600000, 12.52880000, 2, 10000 );
            TASK_STAND_GUARD( 0, -1551.24000000, 1218.36600000, 12.52880000, 352, 0.50000000, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U669 );
            TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
            CLEAR_SEQUENCE_TASK( l_U669 );
        }
        l_U577 = 1;
    }
    if ((TIMERB() > l_U493) AND ((NOT (sub_26102( l_U848 ))) AND ((l_U599 == 0) AND (NOT (IS_CHAR_DEAD( l_U731 ))))))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U837, l_U731, 15.00000000, 15.00000000, 10, 0 ))
        {
            sub_22213( "DM3_ABEGS", ref l_U848, 8, 0 );
            GENERATE_RANDOM_INT_IN_RANGE( 8000, 16000, ref l_U493 );
            SETTIMERB( 0 );
        }
    }
    if ((l_U599 == 0) AND (NOT (IS_CHAR_DEAD( l_U731 ))))
    {
        if ((IS_CHAR_ARMED( l_U837, 6 )) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U731, -1561.81500000 - 1.00000000, 1220.59600000, 10.19030000, 2.00000000, 3.00000000, 3.00000000, 0 )) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U731, l_U837, 0 ))))
        {
            sub_26302( ref l_U848, 0 );
            if (DOES_BLIP_EXIST( l_U624 ))
            {
                REMOVE_BLIP( l_U624 );
            }
            sub_67979( l_U731, -2, 1, 0, 0, 0, 0, 0, 1 );
            sub_68429( 0 );
            if (NOT (IS_CAR_DEAD( l_U813 )))
            {
                sub_22213( "DM3_LETGO", ref l_U848, 7, 0 );
                if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U669 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U813, 10000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U669 );
                    TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
                    CLEAR_SEQUENCE_TASK( l_U669 );
                    l_U593 = 1;
                }
                while (sub_26102( l_U848 ))
                {
                    sub_53364();
                    sub_53732();
                    WAIT( 0 );
                }
                PRINT_NOW( "DM_CMD_16", 7500, 1 );
            }
            l_U599 = 1;
        }
    }
    else if ((l_U599 == 0) AND (IS_CHAR_DEAD( l_U731 )))
    {
        sub_26302( ref l_U848, 0 );
        if (DOES_BLIP_EXIST( l_U624 ))
        {
            REMOVE_BLIP( l_U624 );
        }
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            sub_22213( "DM3_LETGO", ref l_U848, 7, 0 );
            if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U813, 10000, 0 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
                l_U593 = 1;
            }
            while (sub_26102( l_U848 ))
            {
                sub_53364();
                sub_53732();
                WAIT( 0 );
            }
            PRINT_NOW( "DM_CMD_16", 7500, 1 );
        }
        l_U599 = 1;
    }
    if (l_U593 == 1)
    {
        while (l_U589 == 0)
        {
            if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
            {
                if (IS_CHAR_SITTING_IN_CAR( l_U730, l_U813 ))
                {
                    l_U589 = 1;
                    l_U593 = 0;
                }
                else
                {
                    l_U589 = 0;
                }
            }
            else
            {
                l_U589 = 1;
            }
            WAIT( 0 );
        }
    }
    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U837, -1561.81500000, 1220.59600000, 10.19030000, 6.25000000, 2.75000000, 6.00000000, 0 ))) AND ((NOT (IS_CAR_DEAD( l_U813 ))) AND ((NOT (IS_CHAR_DEAD( l_U730 ))) AND ((l_U574 == 0) AND (l_U599 == 1)))))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U837, l_U813, 2.00000000, 3.00000000, 3.00000000, 0 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U669 );
            TASK_LEAVE_CAR( 0, l_U813 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, -1561.81500000, 1220.59600000, 10.45000000 );
            CLOSE_SEQUENCE_TASK( l_U669 );
            TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
            CLEAR_SEQUENCE_TASK( l_U669 );
            while (l_U589 == 1)
            {
                if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
                {
                    if ((IS_CHAR_GETTING_IN_TO_A_CAR( l_U730 )) || ((IS_CHAR_SITTING_IN_CAR( l_U730, l_U813 )) || (IS_CHAR_IN_CAR( l_U730, l_U813 ))))
                    {
                        l_U589 = 1;
                    }
                    else
                    {
                        l_U589 = 0;
                    }
                }
                else
                {
                    l_U589 = 0;
                }
                WAIT( 0 );
            }
            WAIT( 1500 );
            REQUEST_CAR_RECORDING( 647 );
            while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 647 )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U730 )))
            {
                FREEZE_CHAR_POSITION( l_U730, 1 );
                SET_CHAR_COLLISION( l_U730, 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U813 )))
            {
                FREEZE_CAR_POSITION( l_U813, 0 );
                START_PLAYBACK_RECORDED_CAR( l_U813, 647 );
                SET_PLAYBACK_SPEED( l_U813, 1.00000000 );
            }
            CLEAR_PRINTS();
            SETTIMERA( 0 );
            while (TIMERA() < 1600)
            {
                if (NOT (IS_CAR_DEAD( l_U813 )))
                {
                    if (IS_CAR_IN_AIR_PROPER( l_U813 ))
                    {
                        ;
                    }
                }
                WAIT( 0 );
            }
            if ((l_U592 == 0) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
            {
                FREEZE_CHAR_POSITION( l_U730, 0 );
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U730 )))
                {
                    SET_CHAR_COLLISION( l_U730, 1 );
                    l_U592 = 1;
                }
            }
            SETTIMERA( 0 );
            while (TIMERA() < 2000)
            {
                if (NOT (IS_CAR_DEAD( l_U813 )))
                {
                    if (IS_CAR_IN_AIR_PROPER( l_U813 ))
                    {
                        ;
                    }
                }
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U813 )))
            {
                EXPLODE_CAR( l_U813, 1, 0 );
                sub_70468();
            }
            if (NOT (IS_CHAR_DEAD( l_U731 )))
            {
                DAMAGE_CHAR( l_U731, 2000, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U730 )))
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U730, l_U837 );
            }
            l_U574 = 1;
            SETTIMERA( 0 );
        }
    }
    else if ((IS_CAR_DEAD( l_U813 )) AND ((NOT (IS_CHAR_INJURED( l_U730 ))) AND ((l_U574 == 0) AND (l_U599 == 1))))
    {
        if (NOT (IS_CHAR_INJURED( l_U730 )))
        {
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U730, l_U837 );
        }
        l_U574 = 1;
        SETTIMERA( 0 );
    }
    sub_53364();
    sub_53732();
    if ((TIMERA() < 2500) AND (l_U574 == 1))
    {
        sub_70468();
    }
    if ((TIMERA() > 2000) AND ((NOT (sub_26102( l_U848 ))) AND ((l_U574 == 1) AND (NOT (IS_CHAR_DEAD( l_U730 ))))))
    {
        if (((l_U585 == 1) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U837, l_U730, 5.00000000, 5.00000000, 5.00000000, 0 ))) || ((l_U585 == 0) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U837, l_U730, 25.00000000, 25.00000000, 5.00000000, 0 ))))
        {
            if (DOES_BLIP_EXIST( l_U623 ))
            {
                REMOVE_BLIP( l_U623 );
            }
            sub_71073();
            CLEAR_WANTED_LEVEL( l_U838 );
            sub_73906( 16, "DM3_CALLP", "DM3AUD", 0 );
            l_U490 = -1;
            l_U524 = 1;
        }
        else if (l_U585 == 0)
        {
            PRINT_NOW( "DM_CMD_18", 7500, 1 );
            if (NOT (DOES_BLIP_EXIST( l_U623 )))
            {
                ADD_BLIP_FOR_CHAR( l_U730, ref l_U623 );
                SET_BLIP_AS_FRIENDLY( l_U623, 1 );
            }
            l_U585 = 1;
        }
        sub_70468();;
    }
    return;
}

void sub_62030()
{
    unknown uVar2;
    int I;
    int iVar4;
    vector[7] vVar5;
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
    vector[7] vVar27;
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
    unknown[7] uVar49;
    float[7] fVar57;
    vector vVar65;
    vector vVar68;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    boolean bVar74;
    int iVar75;
    unknown uVar76;

    array(ref vVar5, 7);
    array(ref vVar27, 7);
    array(ref uVar49, 7);
    array(ref fVar57, 7);
    vVar65 = {-1559.69300000, 1221.90800000, 10.40720000};
    vVar68 = {-1560.70000000, 1218.20000000, 10.50000000};
    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 750 );
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    SET_PLAYER_CONTROL_ADVANCED( l_U838, 0, 1, 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    LOAD_SCENE( -1551.88000000, 1219.98300000, 12.32990000 );
    CLEAR_AREA( -1551.88000000, 1219.98300000, 12.32990000, 200.00000000, 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U837 );
    SET_CHAR_COORDINATES( l_U837, -1555.86800000, 1224.08200000, 11.00510000 + 0.25000000 );
    SET_CHAR_HEADING( l_U837, 158.89080000 );
    SET_CURRENT_CHAR_WEAPON( l_U837, 0, 1 );
    TASK_SWAP_WEAPON( l_U837, 0 );
    if (NOT (IS_CHAR_DEAD( l_U730 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U730 );
        SET_CHAR_COORDINATES( l_U730, -1557.15300000, 1218.62800000, 11.04650000 + 0.25000000 );
        SET_CHAR_HEADING( l_U730, 60 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U730, 0 );
        SET_CHAR_HEALTH( l_U730, 200 );
    }
    if (IS_CHAR_DEAD( l_U731 ))
    {
        sub_36905();
    }
    if (NOT (IS_CHAR_DEAD( l_U731 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U731 );
        if (IS_CHAR_IN_ANY_CAR( l_U731 ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U731, -1555.96700000, 1220.32200000, 11.18140000 + 0.25000000 );
        }
        else
        {
            SET_CHAR_COORDINATES( l_U731, -1555.96700000, 1220.32200000, 11.18140000 + 0.25000000 );
        }
        SET_CHAR_HEADING( l_U731, 80.15830000 );
    }
    if (NOT (IS_CAR_DEAD( l_U813 )))
    {
        SET_CAR_HEADING( l_U813, 265.10180000 );
        SET_CAR_COORDINATES( l_U813, -1551.88000000, 1219.98300000, 12.32990000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U813 );
        CONTROL_CAR_DOOR( l_U813, 2, 1, 1.00000000 );
        CONTROL_CAR_DOOR( l_U813, 3, 1, 1.00000000 );
        CONTROL_CAR_DOOR( l_U813, 1, 1, 1.00000000 );
        LOCK_CAR_DOORS( l_U813, 3 );
    }
    CREATE_CAM( 3, ref l_U639 );
    vVar5[0] = {-1563.45200000, 1220.85800000, 10.20876000 + 0.25000000};
    vVar27[0] = {16.96356000, -0.00000000, -91.66990000};
    fVar57[0] = 40;
    vVar5[1] = {-1560.68300000, 1220.34700000, 11.75955000 + 0.25000000};
    vVar27[1] = {-3.20458000, 0.00000000, 80.28531000};
    fVar57[1] = 35;
    vVar5[2] = {-1555.84100000, 1219.51800000, 12.03458000 + 0.25000000};
    vVar27[2] = {-3.20458000, 0.00000000, 80.28530000};
    fVar57[2] = 40;
    vVar5[3] = {-1561.84300000, 1221.71500000, 11.80364000 + 0.25000000};
    vVar27[3] = {-2.51702500, -0.00000000, -173.60290000};
    fVar57[3] = 33;
    vVar5[4] = {-1561.74900000, 1216.28000000, 12.02515000 + 0.25000000};
    vVar27[4] = {-4.46507000, -0.00000000, -12.71636000};
    fVar57[4] = 25;
    vVar5[5] = {-1561.31000000, 1219.88800000, 11.23670000 + 0.25000000};
    vVar27[5] = {19.25537000, -0.00000000, -156.29950000};
    fVar57[5] = 30;
    vVar5[6] = {-1561.14100000, 1237.42900000, 11.36815000 + 0.25000000};
    vVar27[6] = {0.92413800, 4.92679900, -178.68020000};
    fVar57[6] = 6;
    BEGIN_CAM_COMMANDS( ref uVar2 );
    for ( I = 0; I < vVar5; I++ )
    {
        CREATE_CAM( 14, ref uVar49[I] );
        SET_CAM_POS( uVar49[I], vVar5[I]._fU0, vVar5[I]._fU4, vVar5[I]._fU8 );
        SET_CAM_ROT( uVar49[I], vVar27[I]._fU0, vVar27[I]._fU4, vVar27[I]._fU8 );
        SET_CAM_ACTIVE( uVar49[I], 1 );
        SET_CAM_FOV( uVar49[I], fVar57[I] );
    }
    SET_CAM_PROPAGATE( uVar49[0], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    WAIT( 1000 );
    if (NOT (IS_CAR_DEAD( l_U813 )))
    {
        FREEZE_CAR_POSITION( l_U813, 1 );
    }
    if (NOT IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_IN( 750 );
    }
    I = 0;
    iVar4 = 0;
    bVar74 = false;
    SETTIMERB( 0 );
    SETTIMERA( 0 );
    while ((NOT ((TIMERA() > 1000) AND (sub_22054()))) AND (NOT bVar74))
    {
        if (I == 0)
        {
            I = 1;
            SET_CAM_PROPAGATE( uVar49[0], 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            if ((NOT (IS_CHAR_INJURED( l_U730 ))) AND (NOT (IS_CHAR_INJURED( l_U731 ))))
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LOOK_AT_CHAR( 0, l_U837, 1000, 0 );
                TASK_LOOK_AT_CHAR( 0, l_U730, 1000, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1561.81500000, 1220.59600000, 10.19030000 + 0.25000000, 2, 10000, 0.50000000 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
                TASK_LOOK_AT_CHAR( l_U730, l_U731, 20000, 0 );
                TASK_LOOK_AT_CHAR( l_U837, l_U731, 20000, 0 );
            }
            GET_TIME_OF_DAY( ref iVar75, ref uVar76 );
            if ((iVar75 < 21) AND (iVar75 > 18))
            {
                sub_39313( "DM3_ARR1", 0, 1, ref l_U848, 6, 1 );
            }
            else
            {
                sub_39313( "DM3_ARR2", 0, 1, ref l_U848, 6, 1 );
            }
            SETTIMERA( 0 );
        }
        if (I == 1)
        {
            fVar57[0] += 0.05000000;
            SET_CAM_FOV( uVar49[0], fVar57[0] );
            if (TIMERA() > 0)
            {
                I = 2;
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_STAND_STILL( 0, 250 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar65.x, vVar65.y, vVar65.z, 2, 10000, 0.50000000 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
                SETTIMERA( 0 );
            }
        }
        if (I == 2)
        {
            fVar57[0] += 0.05000000;
            SET_CAM_FOV( uVar49[0], fVar57[0] );
            if (TIMERA() > 0)
            {
                I = 3;
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U669 );
                    TASK_PLAY_ANIM( 0, "idle_lookaround_a", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar68.x, vVar68.y, vVar68.z, 2, 10000, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U669 );
                    TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
                    CLEAR_SEQUENCE_TASK( l_U669 );
                }
                SETTIMERA( 0 );
            }
        }
        if (I == 3)
        {
            fVar57[0] += 0.05000000;
            SET_CAM_FOV( uVar49[0], fVar57[0] );
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 2750))
            {
                I = 4;
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 1, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 1, 1, ref l_U848, 6, 1 );
                }
                SETTIMERA( 0 );
            }
        }
        if ((NOT (IS_CHAR_DEAD( l_U731 ))) AND (I == 4))
        {
            fVar57[0] += 0.05000000;
            SET_CAM_FOV( uVar49[0], fVar57[0] );
            if ((TIMERA() > 2000) || (LOCATE_CHAR_ANY_MEANS_3D( l_U731, -1561.81500000, 1220.59600000, 10.19030000 + 0.25000000, 1.00000000, 1.00000000, 1.00000000, 0 )))
            {
                I = 5;
                SET_CAM_PROPAGATE( uVar49[0], 0 );
                SET_CAM_ACTIVE( uVar49[1], 1 );
                SET_CAM_PROPAGATE( uVar49[1], 1 );
                SET_CAM_PROPAGATE( uVar49[1], 0 );
                SET_CAM_INTERP_STYLE_CORE( l_U639, uVar49[1], uVar49[2], 10000, 0 );
                SET_CAM_ACTIVE( l_U639, 1 );
                SET_CAM_PROPAGATE( l_U639, 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U731 );
                SET_CHAR_COORDINATES( l_U731, -1561.81500000, 1220.59600000, 10.19030000 + 0.25000000 );
                SETTIMERA( 0 );
                SET_CHAR_COORDINATES( l_U837, vVar65.x, vVar65.y, vVar65.z );
                SET_CHAR_HEADING( l_U837, 111.30280000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U837, l_U731 );
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    SET_CHAR_COORDINATES( l_U730, vVar68.x, vVar68.y, vVar68.z );
                    SET_CHAR_HEADING( l_U730, 38.73870000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U730, l_U731 );
                }
            }
        }
        if (I == 5)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 3000))
            {
                I = 6;
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 2, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 2, 1, ref l_U848, 6, 1 );
                }
                SETTIMERA( 0 );
            }
        }
        if (I == 6)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 3000))
            {
                I = 7;
                SET_CAM_PROPAGATE( l_U639, 0 );
                SET_CAM_ACTIVE( uVar49[3], 1 );
                SET_CAM_PROPAGATE( uVar49[3], 1 );
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 3, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 3, 1, ref l_U848, 6, 1 );
                }
                SETTIMERA( 0 );
            }
        }
        if (I == 7)
        {
            if ((l_U586 == 0) AND (TIMERA() > 1500))
            {
                if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CHAR_DEAD( l_U731 ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U669 );
                    TASK_LOOK_AT_CHAR( 0, l_U730, 60000, 0 );
                    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "shockturnplead", "missderrick3", 4.00000000, 0, 1, 1, 1, 0, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( l_U669 );
                    TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
                    CLEAR_SEQUENCE_TASK( l_U669 );
                    l_U586 = 1;
                }
            }
            if ((NOT (IS_CHAR_DEAD( l_U731 ))) AND ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 3000)))
            {
                if (HAS_CHAR_ANIM_FINISHED( l_U731, "missderrick3", "shockturnplead" ))
                {
                    I = 8;
                    SET_CAM_PROPAGATE( uVar49[3], 0 );
                    SET_CAM_ACTIVE( uVar49[4], 1 );
                    SET_CAM_PROPAGATE( uVar49[4], 1 );
                    if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CHAR_DEAD( l_U731 ))))
                    {
                        ;
                    }
                    if ((iVar75 < 21) AND (iVar75 > 18))
                    {
                        sub_39313( "DM3_ARR1", 4, 1, ref l_U848, 6, 1 );
                    }
                    else
                    {
                        sub_39313( "DM3_ARR2", 4, 1, ref l_U848, 6, 1 );
                    }
                    SETTIMERA( 0 );
                }
            }
        }
        if (I == 8)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 3000))
            {
                I = 9;
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 5, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 5, 1, ref l_U848, 6, 1 );
                }
                SETTIMERA( 0 );
            }
        }
        if (I == 9)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 1500))
            {
                I = 10;
                SET_CAM_PROPAGATE( uVar49[4], 0 );
                SET_CAM_ACTIVE( uVar49[5], 1 );
                SET_CAM_PROPAGATE( uVar49[5], 1 );
                if (NOT (IS_CHAR_DEAD( l_U731 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U669 );
                    TASK_LOOK_AT_CHAR( 0, l_U837, 30000, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U837 );
                    CLOSE_SEQUENCE_TASK( l_U669 );
                    TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
                    CLEAR_SEQUENCE_TASK( l_U669 );
                }
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 6, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 6, 1, ref l_U848, 6, 1 );
                }
                SETTIMERA( 0 );
            }
        }
        if (I == 10)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 2000))
            {
                I = 11;
                SET_CAM_PROPAGATE( uVar49[5], 0 );
                SET_CAM_ACTIVE( uVar49[6], 1 );
                SET_CAM_PROPAGATE( uVar49[6], 1 );
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 7, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 7, 1, ref l_U848, 6, 1 );
                }
                if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CHAR_INJURED( l_U731 ))))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U731 );
                    OPEN_SEQUENCE_TASK( ref l_U669 );
                    TASK_LOOK_AT_CHAR( 0, l_U837, 3000, 0 );
                    TASK_STAND_STILL( 0, 3000 );
                    TASK_LOOK_AT_CHAR( 0, l_U730, 3000, 0 );
                    TASK_STAND_STILL( 0, 3000 );
                    TASK_LOOK_AT_CHAR( 0, l_U837, 60000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U669 );
                    TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
                    CLEAR_SEQUENCE_TASK( l_U669 );
                    TASK_SWAP_WEAPON( l_U837, 1 );
                }
                sub_22213( "DM3_ABEGS", ref l_U848, 8, 0 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                SETTIMERA( 0 );
            }
        }
        if ((NOT (sub_26102( l_U848 ))) AND (I == 11))
        {
            if (TIMERA() > 500)
            {
                bVar74 = true;
            }
        }
        WAIT( 0 );
    }
    if ((IS_SCREEN_FADED_IN()) AND (sub_22054()))
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 750 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U731 )))
        {
            SET_CHAR_COORDINATES( l_U837, vVar65.x, vVar65.y, vVar65.z );
            SET_CHAR_HEADING( l_U837, 111.30280000 );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U837, l_U731 );
            if (NOT (IS_CHAR_INJURED( l_U730 )))
            {
                SET_CHAR_COORDINATES( l_U730, vVar68.x, vVar68.y, vVar68.z );
                SET_CHAR_HEADING( l_U730, 38.73870000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U730, l_U731 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U731 );
            SET_CHAR_COORDINATES( l_U731, -1561.81500000 + 3.00000000, 1220.59600000, 10.19030000 + 0.25000000 );
            SET_CHAR_HEADING( l_U731, 270 );
            OPEN_SEQUENCE_TASK( ref l_U669 );
            TASK_LOOK_AT_CHAR( 0, l_U730, 3000, 0 );
            TASK_STAND_STILL( 0, 3000 );
            TASK_LOOK_AT_CHAR( 0, l_U837, 60000, 0 );
            CLOSE_SEQUENCE_TASK( l_U669 );
            TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
            CLEAR_SEQUENCE_TASK( l_U669 );
        }
        for ( I = 0; I < vVar5; I++ )
        {
            SET_CAM_PROPAGATE( uVar49[I], 0 );
            SET_CAM_ACTIVE( uVar49[I], 0 );
            DESTROY_CAM( uVar49[I] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 1, 1, 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        WAIT( 1000 );
        if (NOT IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_IN( 750 );
        }
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        END_CAM_COMMANDS( ref uVar2 );
    }
    else
    {
        SET_GAME_CAM_HEADING( 0.00000000 );
        for ( I = 0; I < vVar5; I++ )
        {
            SET_CAM_PROPAGATE( uVar49[I], 0 );
            SET_CAM_ACTIVE( uVar49[I], 0 );
            DESTROY_CAM( uVar49[I] );
        }
        if (NOT (IS_CHAR_DEAD( l_U731 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U731 );
            SET_CHAR_COORDINATES( l_U731, -1561.81500000 + 3.00000000, 1220.59600000, 10.19030000 + 0.25000000 );
            SET_CHAR_HEADING( l_U731, 270 );
            OPEN_SEQUENCE_TASK( ref l_U669 );
            TASK_LOOK_AT_CHAR( 0, l_U730, 3000, 0 );
            TASK_STAND_STILL( 0, 3000 );
            TASK_LOOK_AT_CHAR( 0, l_U837, 60000, 0 );
            CLOSE_SEQUENCE_TASK( l_U669 );
            TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
            CLEAR_SEQUENCE_TASK( l_U669 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 1, 1, 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        END_CAM_COMMANDS( ref uVar2 );
    }
    return;
}

void sub_67979(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, int iParam8)
{
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    int iVar15;

    fVar11 = 12.00000000;
    fVar12 = 1.50000000;
    fVar13 = 2.00000000;
    fVar14 = 0.15000000 + 0.35000000;
    iVar15 = 0;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL( uParam0, 0, 6000, 1, 1, 1, 1 );
        SET_CHAR_NEVER_TARGETTED( uParam0, 1 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        CREATE_NM_MESSAGE( 1, 79 );
        SEND_NM_MESSAGE( uParam0 );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        CREATE_NM_MESSAGE( 1, 198 );
        SET_NM_MESSAGE_BOOL( 203, 1 );
        SET_NM_MESSAGE_FLOAT( 215, 0.10000000 );
        SET_NM_MESSAGE_FLOAT( 216, 2.00000000 );
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
    WAIT( 2000 );
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

void sub_68429(int iParam0)
{
    unknown uVar3;

    SET_PLAYER_CONTROL( l_U838, 0 );
    DISPLAY_RADAR( 0 );
    DISPLAY_HUD( 0 );
    SET_WIDESCREEN_BORDERS( 1 );
    BEGIN_CAM_COMMANDS( ref l_U641 );
    CREATE_CAM( 14, ref uVar3 );
    SET_CAM_POS( uVar3, -1573.10200000, 1227.56100000, 6.17815300 + 0.25000000 );
    SET_CAM_ROT( uVar3, 15.85647000, 0.00000100, -125.54410000 );
    SET_CAM_FOV( uVar3, 40 );
    SET_CAM_ACTIVE( uVar3, 1 );
    SET_CAM_PROPAGATE( uVar3, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SETTIMERA( 0 );
    if (iParam0 == 0)
    {
        while (l_U575 == 0)
        {
            if (NOT (IS_CHAR_DEAD( l_U731 )))
            {
                POINT_CAM_AT_PED( uVar3, l_U731 );
                GET_CHAR_COORDINATES( l_U731, ref l_U502._fU0, ref l_U502._fU4, ref l_U502._fU8 );
                if ((NOT (IS_CHAR_DEAD( l_U731 ))) AND ((l_U588 == 0) AND (l_U502._fU8 < 1.50000000)))
                {
                    DAMAGE_CHAR( l_U731, 2000, 0 );
                    l_U588 = 1;
                }
                if ((TIMERA() > 5000) || (IS_CHAR_IN_WATER( l_U731 )))
                {
                    l_U575 = 1;
                }
            }
            else
            {
                l_U575 = 1;
            }
            WAIT( 0 );
        }
    }
    else
    {
        while ((TIMERA() > 5000) || (l_U576 == 0))
        {
            if (NOT (IS_CAR_DEAD( l_U813 )))
            {
                SET_CAM_FOV( uVar3, 50 );
                POINT_CAM_AT_VEHICLE( uVar3, l_U813 );
                if (IS_CAR_IN_WATER( l_U813 ))
                {
                    l_U576 = 1;
                }
            }
            else
            {
                l_U576 = 1;
            }
            WAIT( 0 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U731 )))
    {
        DAMAGE_CHAR( l_U731, 2000, 0 );
    }
    WAIT( 2000 );
    SET_CAM_ACTIVE( uVar3, 0 );
    SET_CAM_PROPAGATE( uVar3, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    DESTROY_CAM( uVar3 );
    SET_PLAYER_CONTROL( l_U838, 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    return;
}

void sub_70468()
{
    if (DOES_VEHICLE_EXIST( l_U813 ))
    {
        GET_DEAD_CAR_COORDINATES( l_U813, ref l_U666._fU0, ref l_U666._fU4, ref l_U666._fU8 );
        if (l_U664 == 0)
        {
            PRINTSTRING( "Effect " );
            PRINTNL();
            l_U665 = START_PTFX( "fire_chopper_tail", l_U666, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
            l_U664 = 1;
        }
        else if (l_U665 > 0)
        {
            UPDATE_PTFX_OFFSETS( l_U665, l_U666, 0.00000000, 0.00000000, 0.00000000 );
        }
    }
    return;
}

void sub_71073()
{
    unknown uVar2;
    int I;
    unknown uVar4;
    vector[6] vVar5;
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
    vector[6] vVar24;
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
    unknown[6] uVar43;
    float[6] fVar50;
    boolean bVar57;

    array(ref vVar5, 6);
    array(ref vVar24, 6);
    array(ref uVar43, 6);
    array(ref fVar50, 6);
    SET_PLAYER_CONTROL_ADVANCED( l_U838, 0, 1, 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U837 );
    SET_CHAR_COORDINATES( l_U837, -1551.53000000, 1222.62900000, 10.83550000 );
    SET_CHAR_HEADING( l_U837, 87.83800000 );
    SET_CURRENT_CHAR_WEAPON( l_U837, 0, 1 );
    TASK_SWAP_WEAPON( l_U837, 0 );
    if (NOT (IS_CHAR_DEAD( l_U730 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U730 );
        SET_CHAR_COORDINATES( l_U730, -1552.37800000, 1219.73500000, 12.19250000 );
        SET_CHAR_HEADING( l_U730, 86.17830000 );
        SET_CHAR_HEALTH( l_U730, 200 );
    }
    if ((l_U592 == 0) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
    {
        FREEZE_CHAR_POSITION( l_U730, 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U730 )))
        {
            SET_CHAR_COLLISION( l_U730, 1 );
            l_U592 = 1;
        }
    }
    CREATE_CAM( 3, ref l_U639 );
    vVar5[0] = {-1557.00300000, 1223.17900000, 12.24549000};
    vVar24[0] = {-6.18213600, -0.00000000, 105.07170000};
    fVar50[0] = 45;
    vVar5[0] = {-1566.52000000, 1216.66400000, 9.22250800};
    vVar24[0] = {8.02579300, 0.56734900, -36.43690000};
    fVar50[0] = 31;
    vVar5[0] = {-1553.86500000, 1224.56700000, 15.18599000 + 0.25000000};
    vVar24[0] = {-34.97302000, -8.86065000, 102.16860000};
    fVar50[0] = 32;
    vVar5[1] = {-1557.88500000, 1220.90400000, 12.14788000 + 0.25000000};
    vVar24[1] = {-6.06754200, -0.00000000, 15.34645000};
    fVar50[1] = 39;
    vVar5[2] = {-1557.96800000, 1222.49200000, 12.17706000 + 0.25000000};
    vVar24[2] = {-3.20275500, -0.00000000, 6.06452400};
    fVar50[2] = 36;
    vVar5[3] = {-1557.00300000, 1223.17900000, 12.49549000};
    vVar24[3] = {-6.18213600, 0.00000000, 101.06090000};
    fVar50[3] = 51;
    vVar5[4] = {-1557.26600000, 1222.79300000, 12.01422000 + 0.25000000};
    vVar24[4] = {-1.02551500, 0.00000000, 118.47880000};
    fVar50[4] = 39;
    vVar5[5] = {-1557.26200000, 1223.73300000, 12.18924000 + 0.25000000};
    vVar24[5] = {-3.09795000, -0.00000000, 131.08400000};
    fVar50[5] = 39;
    BEGIN_CAM_COMMANDS( ref uVar2 );
    for ( I = 0; I < vVar5; I++ )
    {
        CREATE_CAM( 14, ref uVar43[I] );
        SET_CAM_POS( uVar43[I], vVar5[I]._fU0, vVar5[I]._fU4, vVar5[I]._fU8 );
        SET_CAM_ROT( uVar43[I], vVar24[I]._fU0, vVar24[I]._fU4, vVar24[I]._fU8 );
        SET_CAM_ACTIVE( uVar43[I], 1 );
        SET_CAM_FOV( uVar43[I], fVar50[I] );
    }
    I = 0;
    bVar57 = false;
    SETTIMERB( 0 );
    SETTIMERA( 0 );
    while ((NOT ((TIMERA() > 1000) AND (sub_22054()))) AND (NOT bVar57))
    {
        if (I == 0)
        {
            I = 1;
            SET_CAM_PROPAGATE( uVar43[0], 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            if (NOT (IS_CHAR_INJURED( l_U730 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LOOK_AT_CHAR( 0, l_U837, 20000, 0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -1558.60000000, 1222.00000000, 10.81820000, 2, 10000 );
                TASK_STAND_STILL( 0, 500 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U837 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LOOK_AT_CHAR( 0, l_U730, 20000, 0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -1558.03000000, 1223.64900000, 10.83550000, 2, 10000 );
                TASK_STAND_STILL( 0, 500 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U730 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
            }
            WAIT( 2000 );
            sub_39313( "DM3_DEAD", 0, 1, ref l_U848, 6, 1 );
            SETTIMERA( 0 );
        }
        if (I == 1)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 1500))
            {
                I = 2;
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U837 );
                SET_CHAR_COORDINATES( l_U837, -1558.00000000, 1223.50000000, 10.83550000 );
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U730 );
                    SET_CHAR_COORDINATES( l_U730, -1558.60000000, 1222.00000000, 10.81820000 );
                    FREEZE_CHAR_POSITION( l_U730, 1 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U730, l_U837 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U837, l_U730 );
                }
                SET_CAM_PROPAGATE( uVar43[0], 0 );
                SET_CAM_ACTIVE( uVar43[1], 1 );
                SET_CAM_PROPAGATE( uVar43[1], 1 );
                sub_39313( "DM3_DEAD", 1, 1, ref l_U848, 6, 1 );
                SETTIMERA( 0 );
            }
        }
        if (I == 2)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 1500))
            {
                I = 3;
                SET_CAM_PROPAGATE( uVar43[1], 0 );
                SET_CAM_ACTIVE( uVar43[2], 1 );
                SET_CAM_PROPAGATE( uVar43[2], 1 );
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    FREEZE_CHAR_POSITION( l_U730, 0 );
                }
                sub_39313( "DM3_DEAD", 2, 1, ref l_U848, 6, 1 );
                SETTIMERA( 0 );
            }
        }
        if (I == 3)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 1500))
            {
                I = 4;
                SET_CAM_PROPAGATE( uVar43[2], 0 );
                SET_CAM_ACTIVE( uVar43[3], 1 );
                SET_CAM_PROPAGATE( uVar43[3], 1 );
                sub_39313( "DM3_DEAD", 3, 1, ref l_U848, 6, 1 );
                SETTIMERA( 0 );
            }
        }
        if (I == 4)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 1500))
            {
                I = 5;
                SET_CAM_PROPAGATE( uVar43[3], 0 );
                SET_CAM_ACTIVE( uVar43[4], 1 );
                SET_CAM_PROPAGATE( uVar43[4], 1 );
                sub_39313( "DM3_DEAD", 4, 1, ref l_U848, 6, 1 );
                SETTIMERA( 0 );
            }
        }
        if (I == 5)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 2000))
            {
                I = 6;
                SET_CAM_PROPAGATE( uVar43[4], 0 );
                SET_CAM_ACTIVE( uVar43[5], 1 );
                SET_CAM_PROPAGATE( uVar43[5], 1 );
                sub_39313( "DM3_DEAD", 5, 1, ref l_U848, 6, 1 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                SETTIMERA( 0 );
            }
        }
        if (I == 6)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 500))
            {
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    CLEAR_CHAR_TASKS( l_U730 );
                    TASK_GO_STRAIGHT_TO_COORD( l_U730, -1549.61500000, 1219.92600000, 12.89790000, 2, 10000 );
                }
                WAIT( 2000 );
                bVar57 = true;
            }
        }
        sub_70468();
        WAIT( 0 );
    }
    if ((IS_SCREEN_FADED_IN()) AND (sub_22054()))
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 750 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        sub_26302( ref l_U848, 0 );
        if (DOES_CHAR_EXIST( l_U730 ))
        {
            DELETE_CHAR( ref l_U730 );
        }
        for ( I = 0; I < vVar5; I++ )
        {
            SET_CAM_PROPAGATE( uVar43[I], 0 );
            SET_CAM_ACTIVE( uVar43[I], 0 );
            DESTROY_CAM( uVar43[I] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 1, 1, 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        WAIT( 1000 );
        if (NOT IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_IN( 750 );
        }
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        END_CAM_COMMANDS( ref uVar2 );
    }
    else
    {
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (DOES_CHAR_EXIST( l_U730 ))
        {
            DELETE_CHAR( ref l_U730 );
        }
        for ( I = 0; I < vVar5; I++ )
        {
            SET_CAM_PROPAGATE( uVar43[I], 0 );
            SET_CAM_ACTIVE( uVar43[I], 0 );
            DESTROY_CAM( uVar43[I] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 1, 1, 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        END_CAM_COMMANDS( ref uVar2 );
    }
    return;
}

void sub_73906(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_73950( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_73950(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_75039()
{
    if ((l_U487 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U837, l_U484._fU0, l_U484._fU4, l_U484._fU8, 120.00000000, 120.00000000, 120.00000000, 0 )))
    {
        sub_75110();
        l_U487 = 1;
    }
    if ((TIMERA() > 7000) AND (l_U565 == 0))
    {
        if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CAR_DEAD( l_U813 ))))
        {
            if ((IS_CHAR_SITTING_IN_CAR( l_U730, l_U813 )) AND (IS_CHAR_SITTING_IN_CAR( l_U837, l_U813 )))
            {
                if (g_U64978 == 0)
                {
                    sub_39313( "DM3_B1V1", 0, 1, ref l_U848, 6, 0 );
                }
                else
                {
                    sub_39313( "DM3_B1V2", 0, 1, ref l_U848, 6, 0 );
                }
                l_U565 = 1;
            }
        }
    }
    if ((l_U562 == 1) AND (IS_WANTED_LEVEL_GREATER( l_U838, 0 )))
    {
        if (DOES_BLIP_EXIST( l_U483 ))
        {
            REMOVE_BLIP( l_U483 );
        }
        PRINT_NOW( "DM_CMD_13", 7500, 1 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U837, 0 );
        l_U562 = 0;
    }
    if ((l_U562 == 0) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U838, 0 ))))
    {
        if (NOT (DOES_BLIP_EXIST( l_U483 )))
        {
            ADD_BLIP_FOR_COORD( l_U484._fU0, l_U484._fU4, l_U484._fU8, ref l_U483 );
            SET_ROUTE( l_U483, 1 );
        }
        if ((NOT (IS_CAR_DEAD( l_U814[0] ))) AND (NOT (IS_CHAR_DEAD( l_U752[0] ))))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U752[0] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[0] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U814[0] );
        }
        if ((NOT (IS_CAR_DEAD( l_U814[1] ))) AND (NOT (IS_CHAR_DEAD( l_U752[2] ))))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U752[2] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[2] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U814[1] );
        }
        if ((NOT (IS_CAR_DEAD( l_U814[2] ))) AND (NOT (IS_CHAR_DEAD( l_U752[4] ))))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U752[4] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[4] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U814[2] );
        }
        sub_22213( "DM3_DITCH", ref l_U848, 7, 0 );
        while (sub_26102( l_U848 ))
        {
            sub_61685();
            WAIT( 0 );
        }
        PRINT_NOW( "DM_CMD_22", 7500, 1 );
        l_U565 = 1;
        SETTIMERA( 0 );
        l_U562 = 1;
    }
    if ((NOT (IS_CAR_DEAD( l_U813 ))) AND ((l_U562 == 1) AND ((l_U572 == 1) AND (l_U571 == 1))))
    {
        if ((IS_CHAR_SITTING_IN_CAR( l_U837, l_U813 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U837, l_U484._fU0, l_U484._fU4, l_U484._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )))
        {
            if (DOES_BLIP_EXIST( l_U483 ))
            {
                REMOVE_BLIP( l_U483 );
            }
            SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
            l_U490++;
        }
    }
    if (l_U571 == 0)
    {
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            if (IS_CHAR_IN_CAR( l_U837, l_U813 ))
            {
                if (DOES_BLIP_EXIST( l_U622 ))
                {
                    REMOVE_BLIP( l_U622 );
                }
                if (l_U562 == 1)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U483 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U484._fU0, l_U484._fU4, l_U484._fU8, ref l_U483 );
                        SET_ROUTE( l_U483, 1 );
                    }
                    PRINT_NOW( "DM_CMD_22", 7500, 1 );
                    SETTIMERA( 0 );
                }
                else
                {
                    PRINT_NOW( "DM_CMD_13", 7500, 1 );
                }
                l_U571 = 1;
            }
        }
    }
    else if (l_U571 == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U813 )))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U837, l_U813 )))
            {
                if (DOES_BLIP_EXIST( l_U483 ))
                {
                    REMOVE_BLIP( l_U483 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U622 )))
                {
                    ADD_BLIP_FOR_CAR( l_U813, ref l_U622 );
                    CHANGE_BLIP_COLOUR( l_U622, 3 );
                }
                if (NOT (IS_CHAR_DEAD( l_U730 )))
                {
                    SAY_AMBIENT_SPEECH( l_U730, "GET_IN_CAR", 1, 1, 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U813 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U837, l_U813 )))
                    {
                        PRINT_NOW( "DM_CMD_11", 7500, 1 );
                    }
                }
                l_U571 = 0;
            }
        }
    }
    if (l_U572 == 0)
    {
        if ((NOT (IS_CAR_DEAD( l_U813 ))) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
        {
            if (IS_CHAR_IN_CAR( l_U730, l_U813 ))
            {
                if (DOES_BLIP_EXIST( l_U623 ))
                {
                    REMOVE_BLIP( l_U623 );
                }
                GET_PLAYER_GROUP( l_U838, ref l_U600 );
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    if (IS_GROUP_MEMBER( l_U730, l_U600 ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U730 );
                    }
                }
                l_U572 = 1;
            }
            else
            {
                l_U572 = 0;
                GET_PLAYER_GROUP( l_U838, ref l_U600 );
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    if (NOT (IS_GROUP_MEMBER( l_U730, l_U600 )))
                    {
                        SET_GROUP_MEMBER( l_U600, l_U730 );
                        SET_CHAR_HEALTH( l_U730, 200 );
                        SET_CHAR_RELATIONSHIP( l_U730, 2, 23 );
                    }
                }
            }
        }
    }
    if (l_U536 == 0)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U837, -623.67840000, 656.64180000, -26.29200000, 100.00000000, 100.00000000, 100.00000000, 0 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[0] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[1] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[2] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U752[3] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U814[0] );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U814[1] );
            l_U536 = 1;
        }
    }
    sub_50010();
    sub_53364();
    sub_53054();
    sub_53732();
    sub_61685();
    if (l_U487 == 1)
    {
        sub_77144();
    }
    return;
}

void sub_75110()
{
    sub_6804( l_U482 );
    while (NOT (HAS_MODEL_LOADED( l_U482 )))
    {
        PRINTSTRING( "\n\n\----> Load Escape Car Model \n\n\n" );
        WAIT( 0 );
    }
    CREATE_CAR( l_U482, -1312.50300000, 296.76900000, 12.03800000, ref l_U481, 1 );
    SET_CAR_HEADING( l_U481, 268.67750000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U481 );
    SET_VEH_HAS_STRONG_AXLES( l_U481, 1 );
    ADD_UPSIDEDOWN_CAR_CHECK( l_U481 );
    SET_CAR_AS_MISSION_CAR( l_U481 );
    LOCK_CAR_DOORS( l_U481, 2 );
    return;
}

void sub_77144()
{
    if ((l_U523 == 0) AND (IS_CAR_DEAD( l_U481 )))
    {
        sub_26302( ref l_U848, 0 );
        if (l_U548 == 1)
        {
            sub_22236( "DM3_CRASH", "DM3AUD", ref l_U848, 8, 1 );
        }
        if ((l_U562 == 1) AND (l_U490 == 13))
        {
            while (sub_26102( l_U848 ))
            {
                WAIT( 0 );
            }
            while (NOT (sub_50150( 1, 0 )))
            {
                WAIT( 0 );
            }
            sub_50454();
        }
        while (sub_26102( l_U848 ))
        {
            WAIT( 0 );
        }
        PRINT_NOW( "DM_FAIL_08", 7000, 1 );
        if (NOT (IS_CHAR_DEAD( l_U731 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U731 )))
            {
                DELETE_CHAR( ref l_U731 );
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U731 );
            }
        }
        if (l_U582 == 1)
        {
            g_U9942 = 1;
            SET_WANTED_MULTIPLIER( 1.00000000 );
            SET_MAX_WANTED_LEVEL( 6 );
            ALTER_WANTED_LEVEL( l_U838, 3 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( l_U838 );
            SET_CREATE_RANDOM_COPS( 1 );
            SET_FAKE_WANTED_LEVEL( 0 );
            ALLOW_EMERGENCY_SERVICES( 1 );
            l_U582 = 0;
        }
        l_U490 = -1;
        l_U523 = 1;
    }
    if ((l_U523 == 0) AND (NOT (IS_CAR_DEAD( l_U481 ))))
    {
        if ((NOT (IS_VEH_DRIVEABLE( l_U481 ))) || (sub_7788( l_U481 )))
        {
            sub_26302( ref l_U848, 0 );
            if (l_U548 == 1)
            {
                sub_22236( "DM3_CRASH", "DM3AUD", ref l_U848, 8, 1 );
            }
            if ((l_U562 == 1) AND (l_U490 == 13))
            {
                while (sub_26102( l_U848 ))
                {
                    WAIT( 0 );
                }
                while (NOT (sub_50150( 1, 0 )))
                {
                    WAIT( 0 );
                }
                sub_50454();
            }
            while (sub_26102( l_U848 ))
            {
                WAIT( 0 );
            }
            PRINT_NOW( "DM_FAIL_08", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U731 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U731 )))
                {
                    DELETE_CHAR( ref l_U731 );
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U731 );
                }
            }
            if (l_U582 == 1)
            {
                g_U9942 = 1;
                SET_WANTED_MULTIPLIER( 1.00000000 );
                SET_MAX_WANTED_LEVEL( 6 );
                ALTER_WANTED_LEVEL( l_U838, 3 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( l_U838 );
                SET_CREATE_RANDOM_COPS( 1 );
                SET_FAKE_WANTED_LEVEL( 0 );
                ALLOW_EMERGENCY_SERVICES( 1 );
                l_U582 = 0;
            }
            l_U490 = -1;
            l_U523 = 1;
        }
    }
    return;
}

void sub_77966()
{
    unknown uVar2;
    int I;
    unknown uVar4;
    vector[6] vVar5;
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
    vector[6] vVar24;
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
    unknown[6] uVar43;
    float[6] fVar50;
    boolean bVar57;

    if (IS_CHAR_IN_ANY_CAR( l_U837 ))
    {
        SET_PLAYER_CONTROL_ADVANCED( l_U838, 0, 1, 1 );
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    SET_PLAYER_CONTROL_ADVANCED( l_U838, 0, 1, 1 );
    sub_13424( "GESTURES@NIKO" );
    while (NOT (HAVE_ANIMS_LOADED( "GESTURES@NIKO" )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U481 )))
    {
        LOCK_CAR_DOORS( l_U481, 1 );
    }
    if (NOT (IS_CHAR_DEAD( l_U730 )))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( l_U730, -1307.68600000, 302.09890000, 12.45280000 );
        SET_CHAR_HEADING( l_U730, 156.47680000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U731 )))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( l_U731, -1306.22600000, 301.38930000, 12.44800000 );
        SET_CHAR_HEADING( l_U730, 127.92990000 );
    }
    if (NOT (IS_CAR_DEAD( l_U813 )))
    {
        SET_CAR_HEADING( l_U813, 89.08830000 );
        SET_CAR_COORDINATES( l_U813, l_U484._fU0, l_U484._fU4, l_U484._fU8 );
    }
    WAIT( 500 );
    array(ref vVar5, 6);
    array(ref vVar24, 6);
    array(ref uVar43, 6);
    array(ref fVar50, 6);
    SET_PLAYER_CONTROL_ADVANCED( l_U838, 0, 1, 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    CREATE_CAM( 3, ref l_U639 );
    vVar5[0] = {-1317.59100000, 294.48720000, 12.80110000};
    vVar24[0] = {5.96274900, -0.00000000, -46.15829000};
    fVar50[0] = 45;
    vVar5[1] = {-1317.48800000, 298.11220000, 13.94991000};
    vVar24[1] = {-5.49642900, -0.00000000, -85.23401000};
    fVar50[1] = 45;
    vVar5[1] = {-1316.37600000, 299.28510000, 13.68088000};
    vVar24[1] = {-4.47302900, 0.00000000, -95.54719000};
    fVar50[1] = 51;
    vVar5[2] = {-1316.29700000, 298.72270000, 13.78090000};
    vVar24[2] = {-4.35843800, 0.00000000, -68.96191000};
    fVar50[2] = 26.40000000;
    vVar5[3] = {-1312.50400000, 298.86290000, 13.09674000};
    vVar24[3] = {6.30650300, -0.00000000, -79.50439000};
    fVar50[3] = 50;
    vVar5[4] = {-1319.42300000, 297.43670000, 13.91300000};
    vVar24[4] = {-4.06493200, -0.00000000, -91.25591000};
    fVar50[4] = 45;
    vVar5[3] = {-1315.23500000, 297.44590000, 13.75079000};
    vVar24[3] = {-5.03806400, 0.00000000, -64.83664000};
    fVar50[3] = 22;
    vVar5[5] = {-1315.23500000, 297.44590000, 13.75079000};
    vVar24[5] = {-5.03806400, 0.00000000, -64.83664000};
    fVar50[5] = 44;
    BEGIN_CAM_COMMANDS( ref uVar2 );
    for ( I = 0; I < vVar5; I++ )
    {
        CREATE_CAM( 14, ref uVar43[I] );
        SET_CAM_POS( uVar43[I], vVar5[I]._fU0, vVar5[I]._fU4, vVar5[I]._fU8 );
        SET_CAM_ROT( uVar43[I], vVar24[I]._fU0, vVar24[I]._fU4, vVar24[I]._fU8 );
        SET_CAM_ACTIVE( uVar43[I], 1 );
        SET_CAM_FOV( uVar43[I], fVar50[I] );
    }
    I = 0;
    bVar57 = false;
    SETTIMERB( 0 );
    SETTIMERA( 0 );
    while ((NOT ((TIMERA() > 1000) AND (sub_22054()))) AND (NOT bVar57))
    {
        if (I == 0)
        {
            I = 1;
            SET_CAM_PROPAGATE( uVar43[0], 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_PROPAGATE( uVar43[0], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U639, uVar43[0], uVar43[1], 9000, 0 );
            SET_CAM_ACTIVE( l_U639, 1 );
            SET_CAM_PROPAGATE( l_U639, 1 );
            if ((NOT (IS_CAR_DEAD( l_U481 ))) AND ((NOT (IS_CHAR_INJURED( l_U731 ))) AND (NOT (IS_CHAR_INJURED( l_U730 )))))
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LOOK_AT_CHAR( 0, l_U731, 30000, 0 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -1312.72000000 - 2.28000000, 299.80000000, 12.05920000, 2, 20000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U730 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LOOK_AT_CHAR( 0, l_U731, 30000, 0 );
                TASK_STAND_STILL( 0, 2000 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -1310.25600000 + 0.25570000, 299.25910000 - 0.25910000, 12.05150000, 2, 20000 );
                TASK_STAND_STILL( 0, 2000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U837 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LOOK_AT_CHAR( 0, l_U837, 30000, 0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, -1311.71700000 + 0.21730000, 299.45560000 - 0.05560000, 12.02170000, 2, 20000 );
                TASK_STAND_STILL( 0, 1000 );
                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U481, 10000, 1 );
                TASK_SHUFFLE_TO_NEXT_CAR_SEAT( 0, l_U481 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
            }
            DO_SCREEN_FADE_IN( 500 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            sub_22213( "DM3_DUMP", ref l_U848, 6, 1 );
            SETTIMERA( 0 );
        }
        if (I == 1)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 4000))
            {
                I = 2;
                sub_22213( "DM3_GETIN", ref l_U848, 6, 1 );
                SETTIMERA( 0 );
            }
        }
        if (I == 2)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 5000))
            {
                I = 3;
                SET_CAM_PROPAGATE( l_U639, 0 );
                SET_CAM_ACTIVE( uVar43[3], 1 );
                SET_CAM_PROPAGATE( uVar43[3], 1 );
                SET_CAM_PROPAGATE( uVar43[3], 0 );
                SET_CAM_INTERP_STYLE_CORE( l_U639, uVar43[3], uVar43[5], 6000, 0 );
                SET_CAM_ACTIVE( l_U639, 1 );
                SET_CAM_PROPAGATE( l_U639, 1 );
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    TASK_LOOK_AT_CHAR( l_U837, l_U730, 10000, 0 );
                    TASK_LOOK_AT_CHAR( l_U730, l_U837, 10000, 0 );
                }
                sub_22213( "DM3_LOSE", ref l_U848, 6, 1 );
                SETTIMERA( 0 );
            }
        }
        if (I == 3)
        {
            if (TIMERA() > 2000)
            {
                I = 4;
                if (NOT (IS_CAR_DEAD( l_U481 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U669 );
                    TASK_STAND_STILL( 0, 1000 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U481, 10000 );
                    CLOSE_SEQUENCE_TASK( l_U669 );
                    TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
                    CLEAR_SEQUENCE_TASK( l_U669 );
                    if ((l_U598 == 0) AND (IS_CAR_PASSENGER_SEAT_FREE( l_U481, 1 )))
                    {
                        PRINTSTRING( "\n ---> Get in 1 <--- \n\n" );
                        if (NOT (IS_CHAR_INJURED( l_U730 )))
                        {
                            CLEAR_CHAR_TASKS( l_U730 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_ENTER_CAR_AS_PASSENGER( l_U730, l_U481, 10000, 1 );
                            l_U598 = 1;
                        }
                    }
                }
                SETTIMERA( 0 );
            }
        }
        if (I == 4)
        {
            if ((l_U598 == 0) AND ((NOT (IS_CAR_DEAD( l_U481 ))) AND (TIMERA() > 2000)))
            {
                if ((IS_CAR_PASSENGER_SEAT_FREE( l_U481, 1 )) AND (NOT (IS_CHAR_INJURED( l_U730 ))))
                {
                    PRINTSTRING( "\n ---> Get in 2 <--- \n\n" );
                    CLEAR_CHAR_TASKS( l_U730 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_PASSENGER( l_U730, l_U481, 10000, 1 );
                    l_U598 = 1;
                }
            }
            if ((l_U598 == 0) AND ((NOT (IS_CAR_DEAD( l_U481 ))) AND (TIMERA() > 2500)))
            {
                if ((IS_CAR_PASSENGER_SEAT_FREE( l_U481, 1 )) AND (NOT (IS_CHAR_INJURED( l_U730 ))))
                {
                    PRINTSTRING( "\n ---> Get in 3 <--- \n\n" );
                    CLEAR_CHAR_TASKS( l_U730 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_PASSENGER( l_U730, l_U481, 10000, 1 );
                    l_U598 = 1;
                }
            }
            if ((l_U598 == 0) AND ((NOT (IS_CAR_DEAD( l_U481 ))) AND (TIMERA() > 3000)))
            {
                if ((IS_CAR_PASSENGER_SEAT_FREE( l_U481, 1 )) AND (NOT (IS_CHAR_INJURED( l_U730 ))))
                {
                    PRINTSTRING( "\n ---> Get in 4 <--- \n\n" );
                    CLEAR_CHAR_TASKS( l_U730 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_PASSENGER( l_U730, l_U481, 10000, 1 );
                    l_U598 = 1;
                }
            }
            if (TIMERA() > 4000)
            {
                I = 5;
                if ((l_U598 == 0) AND (IS_CAR_PASSENGER_SEAT_FREE( l_U481, 1 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U730 )))
                    {
                        CLEAR_CHAR_TASKS( l_U730 );
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        TASK_ENTER_CAR_AS_PASSENGER( l_U730, l_U481, 10000, 1 );
                        l_U598 = 1;
                    }
                }
                SET_CAM_PROPAGATE( l_U639, 0 );
                SET_CAM_ACTIVE( uVar43[5], 1 );
                SET_CAM_PROPAGATE( uVar43[5], 1 );
                SET_CAM_PROPAGATE( uVar43[5], 0 );
                SET_CAM_INTERP_STYLE_CORE( l_U639, uVar43[5], uVar43[4], 2500, 0 );
                SET_CAM_ACTIVE( l_U639, 1 );
                SET_CAM_PROPAGATE( l_U639, 1 );
                SETTIMERA( 0 );
            }
        }
        if (I == 5)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 2500))
            {
                I = 6;
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                bVar57 = true;
            }
        }
        WAIT( 0 );
    }
    if ((IS_SCREEN_FADED_IN()) AND (sub_22054()))
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 500 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        sub_26302( ref l_U848, 0 );
        if (NOT (IS_CHAR_DEAD( l_U837 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U837 );
        }
        if (NOT (IS_CHAR_DEAD( l_U731 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U731 );
        }
        if (NOT (IS_CHAR_DEAD( l_U730 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U730 );
        }
        WAIT( 250 );
        if (NOT (IS_CAR_DEAD( l_U481 )))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U837, l_U481 )))
            {
                WARP_CHAR_INTO_CAR( l_U837, l_U481 );
            }
            if (NOT (IS_CHAR_DEAD( l_U731 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U731, l_U481 )))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U731, l_U481, 2 );
                }
            }
        }
        WAIT( 250 );
        if (NOT (IS_CAR_DEAD( l_U481 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U730 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U730, l_U481 )))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U730, l_U481, 1 );
                }
            }
            CLOSE_ALL_CAR_DOORS( l_U481 );
        }
        for ( I = 0; I < vVar5; I++ )
        {
            SET_CAM_PROPAGATE( uVar43[I], 0 );
            SET_CAM_ACTIVE( uVar43[I], 0 );
            DESTROY_CAM( uVar43[I] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        REMOVE_ANIMS( "GESTURES@NIKO" );
        l_U728--;
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 1, 1, 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        WAIT( 500 );
        if (NOT IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        END_CAM_COMMANDS( ref uVar2 );
    }
    else
    {
        SET_GAME_CAM_HEADING( 0.00000000 );
        for ( I = 0; I < vVar5; I++ )
        {
            SET_CAM_PROPAGATE( uVar43[I], 0 );
            SET_CAM_ACTIVE( uVar43[I], 0 );
            DESTROY_CAM( uVar43[I] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        REMOVE_ANIMS( "GESTURES@NIKO" );
        l_U728--;
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 1, 1, 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        END_CAM_COMMANDS( ref uVar2 );
    }
    if (NOT (IS_CAR_DEAD( l_U813 )))
    {
        LOCK_CAR_DOORS( l_U813, 2 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U813 );
    }
    REMOVE_ANIMS( "GESTURES@NIKO" );
    l_U728--;
    l_U490++;
    return;
}

void sub_82022()
{
    int iVar2;

    if ((TIMERA() > 7000) AND (l_U565 == 1))
    {
        if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CAR_DEAD( l_U481 ))))
        {
            if ((IS_CHAR_SITTING_IN_CAR( l_U730, l_U481 )) AND (IS_CHAR_SITTING_IN_CAR( l_U837, l_U481 )))
            {
                if ((NOT (sub_26102( l_U848 ))) AND (l_U566 == 0))
                {
                    if (g_U64979 == 0)
                    {
                        sub_22213( "DM3_B2V1", ref l_U848, 7, 0 );
                    }
                    else
                    {
                        sub_22213( "DM3_B2V2", ref l_U848, 7, 0 );
                    }
                    l_U566 = 1;
                }
                else if (NOT (sub_26102( l_U848 )))
                {
                    if (g_U64979 == 0)
                    {
                        sub_59027( "DM3_B2V1", ref l_U848, 7, 1 );
                    }
                    else
                    {
                        sub_59027( "DM3_B2V2", ref l_U848, 7, 1 );
                    }
                }
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U837, 0 );
            }
            else
            {
                sub_59190( ref l_U848 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U837, 1 );
            }
        }
    }
    if ((l_U562 == 1) AND (IS_WANTED_LEVEL_GREATER( l_U838, 0 )))
    {
        if (DOES_BLIP_EXIST( l_U625 ))
        {
            REMOVE_BLIP( l_U625 );
        }
        if (DOES_BLIP_EXIST( l_U626 ))
        {
            REMOVE_BLIP( l_U626 );
        }
        PRINT_NOW( "DM_CMD_13", 7500, 1 );
        sub_59190( ref l_U848 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U837, 0 );
        l_U562 = 0;
        SETTIMERA( 0 );
    }
    if ((l_U562 == 0) AND (NOT (IS_WANTED_LEVEL_GREATER( l_U838, 0 ))))
    {
        if (NOT (DOES_BLIP_EXIST( l_U626 )))
        {
            ADD_BLIP_FOR_COORD( -1549.12100000, 1230.06000000, 11.61870000, ref l_U626 );
            SET_ROUTE( l_U626, 1 );
        }
        if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CAR_DEAD( l_U481 ))))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U730, l_U481 )))
            {
                PRINT_NOW( "DM_CMD_12", 7500, 1 );
            }
            else
            {
                PRINT_NOW( "DM_CMD_07", 7500, 1 );
            }
        }
        l_U565 = 1;
        SETTIMERA( 0 );
        l_U562 = 1;
    }
    if ((NOT (IS_CAR_DEAD( l_U481 ))) AND ((l_U562 == 1) AND ((l_U572 == 1) AND (l_U571 == 1))))
    {
        if ((IS_CHAR_SITTING_IN_CAR( l_U837, l_U481 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U837, -1549.12100000, 1230.06000000, 11.25000000 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )))
        {
            if (DOES_BLIP_EXIST( l_U625 ))
            {
                REMOVE_BLIP( l_U625 );
            }
            if (DOES_BLIP_EXIST( l_U626 ))
            {
                REMOVE_BLIP( l_U626 );
            }
            SET_PLAYER_CONTROL_ADVANCED( l_U838, 0, 1, 1 );
            l_U490++;
        }
    }
    if (l_U488 == 0)
    {
        if (NOT (IS_CAR_DEAD( l_U481 )))
        {
            if (IS_CHAR_IN_CAR( l_U837, l_U481 ))
            {
                if (DOES_BLIP_EXIST( l_U483 ))
                {
                    REMOVE_BLIP( l_U483 );
                }
                if (l_U562 == 1)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U626 )))
                    {
                        ADD_BLIP_FOR_COORD( -1549.12100000, 1230.06000000, 11.61870000, ref l_U626 );
                        SET_ROUTE( l_U626, 1 );
                    }
                    PRINT_NOW( "DM_CMD_07", 7500, 1 );
                    SETTIMERA( 0 );
                }
                else
                {
                    PRINT_NOW( "DM_CMD_13", 7500, 1 );
                    sub_59190( ref l_U848 );
                    SETTIMERA( 0 );
                }
                l_U488 = 1;
            }
        }
    }
    else if (l_U488 == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U481 )))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U837, l_U481 )))
            {
                if (DOES_BLIP_EXIST( l_U625 ))
                {
                    REMOVE_BLIP( l_U625 );
                }
                if (DOES_BLIP_EXIST( l_U626 ))
                {
                    REMOVE_BLIP( l_U626 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U483 )))
                {
                    ADD_BLIP_FOR_CAR( l_U481, ref l_U483 );
                    CHANGE_BLIP_COLOUR( l_U483, 3 );
                }
                if (NOT (IS_CHAR_DEAD( l_U730 )))
                {
                    SAY_AMBIENT_SPEECH( l_U730, "GET_IN_CAR", 1, 1, 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U481 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U837, l_U481 )))
                    {
                        PRINT_NOW( "DM_CMD_20", 7500, 1 );
                        sub_59190( ref l_U848 );
                    }
                }
                l_U488 = 0;
            }
        }
    }
    if (l_U489 == 0)
    {
        if ((NOT (IS_CAR_DEAD( l_U481 ))) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
        {
            if (IS_CHAR_IN_CAR( l_U730, l_U481 ))
            {
                if (DOES_BLIP_EXIST( l_U623 ))
                {
                    REMOVE_BLIP( l_U623 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U626 )))
                {
                    ADD_BLIP_FOR_COORD( -1549.12100000, 1230.06000000, 11.61870000, ref l_U626 );
                    SET_ROUTE( l_U626, 1 );
                }
                PRINT_NOW( "DM_CMD_07", 7500, 1 );
                SETTIMERA( 0 );
                l_U591 = 0;
                l_U489 = 1;
            }
            else if (DOES_BLIP_EXIST( l_U626 ))
            {
                REMOVE_BLIP( l_U626 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U623 )))
            {
                ADD_BLIP_FOR_CHAR( l_U730, ref l_U623 );
                SET_BLIP_AS_FRIENDLY( l_U623, 1 );
            }
            if (l_U591 == 0)
            {
                PRINT_NOW( "DM_CMD_12", 7500, 1 );
                l_U591 = 1;
            }
            l_U489 = 0;
            GET_PLAYER_GROUP( l_U838, ref l_U600 );
            if (NOT (IS_CHAR_INJURED( l_U730 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U730, 11, ref iVar2 );
                if (iVar2 == 7)
                {
                    CLEAR_CHAR_TASKS( l_U730 );
                    SET_NEXT_DESIRED_MOVE_STATE( 3 );
                    TASK_ENTER_CAR_AS_PASSENGER( l_U730, l_U481, -2, 1 );
                }
            }
        }
    }
    sub_77144();
    sub_53364();
    sub_53054();
    sub_53732();
    return;
}

void sub_84102()
{
    if (l_U577 == 0)
    {
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SWITCH_ROADS_OFF( -1550.00000000, 1100.00000000, 10.00000000, -1700.00000000, 1500.00000000, -2.00000000 );
        sub_26302( ref l_U848, 0 );
        sub_84185();
        if (NOT (DOES_BLIP_EXIST( l_U624 )))
        {
            ADD_BLIP_FOR_CHAR( l_U731, ref l_U624 );
            SET_BLIP_AS_FRIENDLY( l_U624, 0 );
        }
        PRINT_NOW( "DM_CMD_14", 7500, 1 );
        if ((NOT (IS_CAR_DEAD( l_U481 ))) AND (NOT (IS_CHAR_INJURED( l_U730 ))))
        {
            FREEZE_CAR_POSITION( l_U481, 0 );
            OPEN_SEQUENCE_TASK( ref l_U669 );
            TASK_ENTER_CAR_AS_DRIVER( 0, l_U481, 30000 );
            TASK_CAR_DRIVE_WANDER( 0, l_U481, 15.00000000, 2 );
            CLOSE_SEQUENCE_TASK( l_U669 );
            TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
            CLEAR_SEQUENCE_TASK( l_U669 );
            SET_CHAR_KEEP_TASK( l_U730, 1 );
        }
        l_U493 = 7500;
        SETTIMERB( 0 );
        l_U577 = 1;
    }
    if ((l_U596 == 0) AND (NOT (IS_CHAR_DEAD( l_U730 ))))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U837, l_U730, 120.00000000, 120.00000000, 50.00000000, 0 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U730 )))
            {
                DELETE_CHAR( ref l_U730 );
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U730 );
            }
            if (NOT (IS_CAR_DEAD( l_U481 )))
            {
                if (NOT (IS_CAR_ON_SCREEN( l_U481 )))
                {
                    DELETE_CAR( ref l_U481 );
                }
                else
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U481 );
                }
            }
            l_U596 = 1;
        }
    }
    if ((TIMERB() > l_U493) AND ((NOT (sub_26102( l_U848 ))) AND ((l_U599 == 0) AND (NOT (IS_CHAR_DEAD( l_U731 ))))))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U837, l_U731, 15.00000000, 15.00000000, 10, 0 ))
        {
            sub_22213( "DM3_ABEGS", ref l_U848, 8, 0 );
            GENERATE_RANDOM_INT_IN_RANGE( 8000, 16000, ref l_U493 );
            SETTIMERB( 0 );
        }
    }
    if ((l_U599 == 0) AND (NOT (IS_CHAR_DEAD( l_U731 ))))
    {
        if ((IS_CHAR_ARMED( l_U837, 6 )) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U731, -1561.81500000 - 1.00000000, 1220.59600000, 10.19030000, 2.00000000, 3.00000000, 3.00000000, 0 )) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U731, l_U837, 0 ))))
        {
            sub_26302( ref l_U848, 0 );
            if (DOES_BLIP_EXIST( l_U624 ))
            {
                REMOVE_BLIP( l_U624 );
            }
            sub_67979( l_U731, -2, 1, 0, 0, 0, 0, 0, 1 );
            if (NOT (IS_CHAR_DEAD( l_U731 )))
            {
                sub_68429( 0 );
            }
            l_U599 = 1;
        }
        else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U731, l_U837, 0 ))
        {
            if ((NOT (IS_CHAR_INJURED( l_U731 ))) AND (l_U594 == 0))
            {
                TASK_COMBAT( l_U731, l_U837 );
                l_U594 = 1;
            }
        }
    }
    else if ((l_U599 == 0) AND (IS_CHAR_DEAD( l_U731 )))
    {
        sub_26302( ref l_U848, 0 );
        if (DOES_BLIP_EXIST( l_U624 ))
        {
            REMOVE_BLIP( l_U624 );
        }
        l_U599 = 1;
    }
    if ((l_U594 == 0) AND (NOT (IS_CHAR_INJURED( l_U731 ))))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U837, l_U731, 25.00000000, 25.00000000, 25.00000000, 0 )))
        {
            TASK_COMBAT( l_U731, l_U837 );
            l_U594 = 1;
        }
    }
    if (DOES_CHAR_EXIST( l_U730 ))
    {
        sub_53364();
    }
    if (DOES_CHAR_EXIST( l_U731 ))
    {
        sub_91529();
    }
    if (DOES_VEHICLE_EXIST( l_U481 ))
    {
        sub_77144();
    }
    if ((l_U523 == 0) AND ((TIMERA() > 2000) AND ((NOT (sub_26102( l_U848 ))) AND (l_U599 == 1))))
    {
        CLEAR_WANTED_LEVEL( l_U838 );
        sub_73906( 16, "DM3_CALLP", "DM3AUD", 0 );
        l_U490 = -1;
        l_U524 = 1;
    }
    return;
}

void sub_84185()
{
    unknown uVar2;
    int I;
    int iVar4;
    vector[7] vVar5;
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
    vector[7] vVar27;
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
    unknown[7] uVar49;
    float[7] fVar57;
    vector vVar65;
    vector vVar68;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    boolean bVar74;
    int iVar75;
    unknown uVar76;

    array(ref vVar5, 7);
    array(ref vVar27, 7);
    array(ref uVar49, 7);
    array(ref fVar57, 7);
    vVar65 = {-1559.69300000, 1221.90800000, 10.40720000};
    vVar68 = {-1560.70000000, 1218.20000000, 10.50000000};
    if (NOT IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_OUT( 750 );
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    SET_PLAYER_CONTROL_ADVANCED( l_U838, 0, 1, 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    sub_13424( "GESTURES@NIKO" );
    while (NOT (HAVE_ANIMS_LOADED( "GESTURES@NIKO" )))
    {
        WAIT( 0 );
    }
    LOAD_SCENE( -1551.88000000, 1219.98300000, 12.32990000 );
    CLEAR_AREA( -1551.88000000, 1219.98300000, 12.32990000, 200.00000000, 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U837 );
    SET_CHAR_COORDINATES( l_U837, -1555.86800000, 1224.08200000, 11.00510000 + 0.25000000 );
    SET_CHAR_HEADING( l_U837, 158.89080000 );
    SET_CURRENT_CHAR_WEAPON( l_U837, 0, 1 );
    TASK_SWAP_WEAPON( l_U837, 0 );
    if (NOT (IS_CHAR_DEAD( l_U730 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U730 );
        SET_CHAR_COORDINATES( l_U730, -1557.15300000, 1218.62800000, 11.04650000 + 0.25000000 );
        SET_CHAR_HEADING( l_U730, 60 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U730, 0 );
        SET_CHAR_HEALTH( l_U730, 200 );
    }
    if (IS_CHAR_DEAD( l_U731 ))
    {
        sub_36905();
    }
    if (NOT (IS_CHAR_DEAD( l_U731 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U731 );
        if (IS_CHAR_IN_ANY_CAR( l_U731 ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U731, -1555.96700000, 1220.32200000, 11.18140000 + 0.25000000 );
        }
        else
        {
            SET_CHAR_COORDINATES( l_U731, -1555.96700000, 1220.32200000, 11.18140000 + 0.25000000 );
        }
        SET_CHAR_HEADING( l_U731, 80.15830000 );
    }
    if (NOT (IS_CAR_DEAD( l_U481 )))
    {
        SET_CAR_HEADING( l_U481, 334.99580000 );
        SET_CAR_COORDINATES( l_U481, -1551.88000000, 1219.98300000, 12.32990000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U481 );
        LOCK_CAR_DOORS( l_U481, 3 );
    }
    CREATE_CAM( 3, ref l_U639 );
    vVar5[0] = {-1563.45200000, 1220.85800000, 10.20876000 + 0.25000000};
    vVar27[0] = {16.96356000, -0.00000000, -91.66990000};
    fVar57[0] = 40;
    vVar5[1] = {-1560.68300000, 1220.34700000, 11.75955000 + 0.25000000};
    vVar27[1] = {-3.20458000, 0.00000000, 80.28531000};
    fVar57[1] = 35;
    vVar5[2] = {-1555.84100000, 1219.51800000, 12.03458000 + 0.25000000};
    vVar27[2] = {-3.20458000, 0.00000000, 80.28530000};
    fVar57[2] = 40;
    vVar5[3] = {-1561.84300000, 1221.71500000, 11.80364000 + 0.25000000};
    vVar27[3] = {-2.51702500, -0.00000000, -173.60290000};
    fVar57[3] = 33;
    vVar5[4] = {-1561.74900000, 1216.28000000, 12.02515000 + 0.25000000};
    vVar27[4] = {-4.46507000, -0.00000000, -12.71636000};
    fVar57[4] = 25;
    vVar5[5] = {-1561.31000000, 1219.88800000, 11.23670000 + 0.25000000};
    vVar27[5] = {19.25537000, -0.00000000, -156.29950000};
    fVar57[5] = 30;
    vVar5[6] = {-1561.14100000, 1237.42900000, 11.36815000 + 0.25000000};
    vVar27[6] = {0.92413800, 4.92679900, -178.68020000};
    fVar57[6] = 6;
    vVar5[6] = {-1559.78300000, 1223.34400000, 12.05767000};
    vVar27[6] = {-2.86080000, 0.00000000, 157.29080000};
    fVar57[6] = 51;
    BEGIN_CAM_COMMANDS( ref uVar2 );
    for ( I = 0; I < vVar5; I++ )
    {
        CREATE_CAM( 14, ref uVar49[I] );
        SET_CAM_POS( uVar49[I], vVar5[I]._fU0, vVar5[I]._fU4, vVar5[I]._fU8 );
        SET_CAM_ROT( uVar49[I], vVar27[I]._fU0, vVar27[I]._fU4, vVar27[I]._fU8 );
        SET_CAM_ACTIVE( uVar49[I], 1 );
        SET_CAM_FOV( uVar49[I], fVar57[I] );
    }
    SET_CAM_PROPAGATE( uVar49[0], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    WAIT( 1000 );
    if (NOT (IS_CAR_DEAD( l_U481 )))
    {
        FREEZE_CAR_POSITION( l_U481, 1 );
    }
    if (NOT IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_IN( 750 );
    }
    I = 0;
    iVar4 = 0;
    bVar74 = false;
    SETTIMERB( 0 );
    SETTIMERA( 0 );
    while ((NOT ((TIMERA() > 1000) AND (sub_22054()))) AND (NOT bVar74))
    {
        if (I == 0)
        {
            I = 1;
            SET_CAM_PROPAGATE( uVar49[0], 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            if ((NOT (IS_CHAR_INJURED( l_U730 ))) AND (NOT (IS_CHAR_INJURED( l_U731 ))))
            {
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_LOOK_AT_CHAR( 0, l_U837, 1000, 0 );
                TASK_LOOK_AT_CHAR( 0, l_U730, 1000, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1561.81500000, 1220.59600000, 10.19030000 + 0.25000000, 2, 10000, 0.50000000 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
                TASK_LOOK_AT_CHAR( l_U730, l_U731, 20000, 0 );
                TASK_LOOK_AT_CHAR( l_U837, l_U731, 20000, 0 );
            }
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            GET_TIME_OF_DAY( ref iVar75, ref uVar76 );
            if ((iVar75 < 21) AND (iVar75 > 18))
            {
                sub_39313( "DM3_ARR1", 0, 1, ref l_U848, 6, 1 );
            }
            else
            {
                sub_39313( "DM3_ARR2", 0, 1, ref l_U848, 6, 1 );
            }
            SETTIMERA( 0 );
        }
        if (I == 1)
        {
            fVar57[0] += 0.05000000;
            SET_CAM_FOV( uVar49[0], fVar57[0] );
            if (TIMERA() > 0)
            {
                I = 2;
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_STAND_STILL( 0, 250 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar65.x, vVar65.y, vVar65.z, 2, 10000, 0.50000000 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
                SETTIMERA( 0 );
            }
        }
        if (I == 2)
        {
            fVar57[0] += 0.05000000;
            SET_CAM_FOV( uVar49[0], fVar57[0] );
            if (TIMERA() > 0)
            {
                I = 3;
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U669 );
                    TASK_PLAY_ANIM( 0, "idle_lookaround_a", "missderrick3", 4.00000000, 0, 0, 0, 0, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar68.x, vVar68.y, vVar68.z, 2, 10000, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U669 );
                    TASK_PERFORM_SEQUENCE( l_U730, l_U669 );
                    CLEAR_SEQUENCE_TASK( l_U669 );
                }
                SETTIMERA( 0 );
            }
        }
        if (I == 3)
        {
            fVar57[0] += 0.05000000;
            SET_CAM_FOV( uVar49[0], fVar57[0] );
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 2750))
            {
                I = 4;
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 1, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 1, 1, ref l_U848, 6, 1 );
                }
                SETTIMERA( 0 );
            }
        }
        if ((NOT (IS_CHAR_DEAD( l_U731 ))) AND (I == 4))
        {
            fVar57[0] += 0.05000000;
            SET_CAM_FOV( uVar49[0], fVar57[0] );
            if ((TIMERA() > 2000) || (LOCATE_CHAR_ANY_MEANS_3D( l_U731, -1561.81500000, 1220.59600000, 10.19030000 + 0.25000000, 1.00000000, 1.00000000, 1.00000000, 0 )))
            {
                I = 5;
                SET_CAM_PROPAGATE( uVar49[0], 0 );
                SET_CAM_ACTIVE( uVar49[1], 1 );
                SET_CAM_PROPAGATE( uVar49[1], 1 );
                SET_CAM_PROPAGATE( uVar49[1], 0 );
                SET_CAM_INTERP_STYLE_CORE( l_U639, uVar49[1], uVar49[2], 10000, 0 );
                SET_CAM_ACTIVE( l_U639, 1 );
                SET_CAM_PROPAGATE( l_U639, 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U731 );
                SET_CHAR_COORDINATES( l_U731, -1561.81500000, 1220.59600000, 10.19030000 + 0.25000000 );
                SETTIMERA( 0 );
                SET_CHAR_COORDINATES( l_U837, vVar65.x, vVar65.y, vVar65.z );
                SET_CHAR_HEADING( l_U837, 111.30280000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U837, l_U731 );
                if (NOT (IS_CHAR_INJURED( l_U730 )))
                {
                    SET_CHAR_COORDINATES( l_U730, vVar68.x, vVar68.y, vVar68.z );
                    SET_CHAR_HEADING( l_U730, 38.73870000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U730, l_U731 );
                }
            }
        }
        if (I == 5)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 3000))
            {
                I = 6;
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 2, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 2, 1, ref l_U848, 6, 1 );
                }
                SETTIMERA( 0 );
            }
        }
        if (I == 6)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 3000))
            {
                I = 7;
                SET_CAM_PROPAGATE( l_U639, 0 );
                SET_CAM_ACTIVE( uVar49[3], 1 );
                SET_CAM_PROPAGATE( uVar49[3], 1 );
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 3, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 3, 1, ref l_U848, 6, 1 );
                }
                SETTIMERA( 0 );
            }
        }
        if (I == 7)
        {
            if ((l_U586 == 0) AND (TIMERA() > 1500))
            {
                if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CHAR_DEAD( l_U731 ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U669 );
                    TASK_LOOK_AT_CHAR( 0, l_U730, 60000, 0 );
                    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "shockturnplead", "missderrick3", 4.00000000, 0, 1, 1, 1, 0, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( l_U669 );
                    TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
                    CLEAR_SEQUENCE_TASK( l_U669 );
                    l_U586 = 1;
                }
            }
            if ((NOT (IS_CHAR_DEAD( l_U731 ))) AND ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 0)))
            {
                if ((TIMERA() > 8500) || (HAS_CHAR_ANIM_FINISHED( l_U731, "missderrick3", "shockturnplead" )))
                {
                    I = 8;
                    SET_CAM_PROPAGATE( uVar49[3], 0 );
                    SET_CAM_ACTIVE( uVar49[4], 1 );
                    SET_CAM_PROPAGATE( uVar49[4], 1 );
                    if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CHAR_DEAD( l_U731 ))))
                    {
                        ;
                    }
                    if ((iVar75 < 21) AND (iVar75 > 18))
                    {
                        sub_39313( "DM3_ARR1", 4, 1, ref l_U848, 6, 1 );
                    }
                    else
                    {
                        sub_39313( "DM3_ARR2", 4, 1, ref l_U848, 6, 1 );
                    }
                    TASK_PLAY_ANIM( l_U837, "idle_scratch_balls", "missderrick3", 4, 0, 0, 0, 0, 0 );
                    SETTIMERA( 0 );
                }
            }
        }
        if (I == 8)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 3000))
            {
                I = 9;
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 5, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 5, 1, ref l_U848, 6, 1 );
                }
                SETTIMERA( 0 );
            }
        }
        if (I == 9)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 1500))
            {
                I = 10;
                SET_CAM_PROPAGATE( uVar49[4], 0 );
                SET_CAM_ACTIVE( uVar49[5], 1 );
                SET_CAM_PROPAGATE( uVar49[5], 1 );
                if (NOT (IS_CHAR_DEAD( l_U731 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U669 );
                    TASK_LOOK_AT_CHAR( 0, l_U837, 30000, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U837 );
                    CLOSE_SEQUENCE_TASK( l_U669 );
                    TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
                    CLEAR_SEQUENCE_TASK( l_U669 );
                }
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 6, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 6, 1, ref l_U848, 6, 1 );
                }
                SETTIMERA( 0 );
            }
        }
        if (I == 10)
        {
            if ((NOT (sub_26102( l_U848 ))) AND (TIMERA() > 2000))
            {
                I = 11;
                SET_CAM_PROPAGATE( uVar49[5], 0 );
                SET_CAM_ACTIVE( uVar49[6], 1 );
                SET_CAM_PROPAGATE( uVar49[6], 1 );
                if ((iVar75 < 21) AND (iVar75 > 18))
                {
                    sub_39313( "DM3_ARR1", 7, 1, ref l_U848, 6, 1 );
                }
                else
                {
                    sub_39313( "DM3_ARR2", 7, 1, ref l_U848, 6, 1 );
                }
                if (NOT (IS_CHAR_ARMED( sub_3432(), 6 )))
                {
                    if (HAS_CHAR_GOT_WEAPON( l_U837, 9 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 9, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 7 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 7, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 13 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 13, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 12 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 12, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 11 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 11, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 10 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 10, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 15 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 15, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 14 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 14, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 1 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 1, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 3 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 3, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 4 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 4, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 5 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 5, 0 );
                    }
                    else if (HAS_CHAR_GOT_WEAPON( l_U837, 18 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U837, 18, 0 );
                    };;;;;;;;;;;;;
                }
                OPEN_SEQUENCE_TASK( ref l_U669 );
                TASK_STAND_STILL( 0, 1000 );
                TASK_SWAP_WEAPON( 0, 1 );
                CLOSE_SEQUENCE_TASK( l_U669 );
                TASK_PERFORM_SEQUENCE( l_U837, l_U669 );
                CLEAR_SEQUENCE_TASK( l_U669 );
                if ((NOT (IS_CHAR_DEAD( l_U730 ))) AND (NOT (IS_CHAR_INJURED( l_U731 ))))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U731 );
                    OPEN_SEQUENCE_TASK( ref l_U669 );
                    TASK_LOOK_AT_CHAR( 0, l_U837, 3000, 0 );
                    TASK_STAND_STILL( 0, 3000 );
                    TASK_LOOK_AT_CHAR( 0, l_U730, 3000, 0 );
                    TASK_STAND_STILL( 0, 3000 );
                    TASK_LOOK_AT_CHAR( 0, l_U837, 60000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U669 );
                    TASK_PERFORM_SEQUENCE( l_U731, l_U669 );
                    CLEAR_SEQUENCE_TASK( l_U669 );
                }
                sub_22213( "DM3_ABEGS", ref l_U848, 8, 0 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                SETTIMERA( 0 );
            }
        }
        if ((NOT (sub_26102( l_U848 ))) AND (I == 11))
        {
            if (TIMERA() > 500)
            {
                bVar74 = true;
            }
        }
        WAIT( 0 );
    }
    if ((IS_SCREEN_FADED_IN()) AND (sub_22054()))
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_OUT( 750 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U731 )))
        {
            SET_CHAR_COORDINATES( l_U837, vVar65.x, vVar65.y, vVar65.z );
            SET_CHAR_HEADING( l_U837, 111.30280000 );
            if (NOT (IS_CHAR_ARMED( sub_3432(), 6 )))
            {
                if (HAS_CHAR_GOT_WEAPON( l_U837, 9 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 9, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 7 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 7, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 13 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 13, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 12 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 12, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 11 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 11, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 10 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 10, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 15 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 15, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 14 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 14, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 1 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 1, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 3 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 3, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 4 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 4, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 5 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 5, 1 );
                }
                else if (HAS_CHAR_GOT_WEAPON( l_U837, 18 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U837, 18, 1 );
                };;;;;;;;;;;;;
            }
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U837, l_U731 );
            if (NOT (IS_CHAR_INJURED( l_U730 )))
            {
                SET_CHAR_COORDINATES( l_U730, vVar68.x, vVar68.y, vVar68.z );
                SET_CHAR_HEADING( l_U730, 38.73870000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U730, l_U731 );
            }
            SET_CHAR_COORDINATES( l_U731, -1561.81500000, 1220.59600000, 10.19030000 + 0.25000000 );
            SET_CHAR_HEADING( l_U731, 270 );
        }
        for ( I = 0; I < vVar5; I++ )
        {
            SET_CAM_PROPAGATE( uVar49[I], 0 );
            SET_CAM_ACTIVE( uVar49[I], 0 );
            DESTROY_CAM( uVar49[I] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 1, 1, 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        WAIT( 1000 );
        if (NOT IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_IN( 750 );
        }
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        END_CAM_COMMANDS( ref uVar2 );
    }
    else
    {
        SET_GAME_CAM_HEADING( 0.00000000 );
        for ( I = 0; I < vVar5; I++ )
        {
            SET_CAM_PROPAGATE( uVar49[I], 0 );
            SET_CAM_ACTIVE( uVar49[I], 0 );
            DESTROY_CAM( uVar49[I] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_6763(), 1, 1, 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        END_CAM_COMMANDS( ref uVar2 );
    }
    return;
}

void sub_91529()
{
    if ((l_U523 == 0) AND (NOT (IS_CHAR_DEAD( l_U731 ))))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U837, l_U731, 150.00000000, 150.00000000, 150.00000000, 0 )))
        {
            PRINT_NOW( "DM_FAIL_02", 7000, 1 );
            l_U490 = -1;
            l_U523 = 1;
        }
    }
    return;
}

void sub_91823()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 65 );
    l_U522 = 0;
    sub_91849( 30 );
    UNLOCK_MISSION_NEWS_STORY( 30 );
    sub_95051( 2034, 1 );
    sub_95109();
    return;
}

void sub_91849(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_91936( iParam0 ))
    {
        sub_92986( iParam0 );
    }
    return;
}

int sub_91936(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_91993( ref uVar3, 1, 0, 0 );
    sub_92605( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_8189( "\n ----------------------------------------------------------------" );
    sub_6688( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_8189( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_91993(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_92046( iParam0, uParam1, uParam2 );
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
        sub_92178( iParam0 + 0 );
    }
    return;
}

void sub_92046(int iParam0, int iParam1, int iParam2)
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
        sub_92178( iParam0 + 0 );
    }
    return;
}

void sub_92178(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_92209( iParam0->_fU4 )))
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

int sub_92209(unknown uParam0)
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

void sub_92605(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_92986(unknown uParam0)
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
        sub_93197( 20, 6, 16383, 16383, ref uVar4 );
        sub_93873( ref uVar4, 7 );
        sub_93904( ref uVar4, 0 );
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
        sub_93197( 20, 7, 9, 16383, ref uVar4 );
        sub_93873( ref uVar4, 7 );
        sub_93904( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_93197(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_93221( uParam0, 0, iParam4 + 0 );
    sub_93221( uParam1, 1, iParam4 + 0 );
    sub_93221( uParam2, 2, iParam4 + 0 );
    sub_93221( uParam3, 3, iParam4 + 0 );
    sub_93221( 0, 4, iParam4 + 0 );
    sub_93221( 1, 5, iParam4 + 0 );
    sub_93221( 65535, 6, iParam4 + 0 );
    sub_93221( 0, 12, iParam4 + 0 );
    sub_93221( 0, 11, iParam4 + 0 );
    sub_93221( 0, 14, iParam4 + 0 );
    sub_93221( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_93221( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_93221( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_93221(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_93873(int iParam0, unknown uParam1)
{
    sub_93221( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_93904(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_93944())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_94631( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_94430( iVar5 );
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

int sub_93944()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_93978( 5, g_U968[I] )) == 7)
        {
            sub_94430( I );
            return 1;
        }
    }
    return 0;
}

int sub_93978(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_94430(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_94503( 39 );
    return;
}

void sub_94503(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_94631(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_94692( uParam0, g_U968[Result] ))
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

int sub_94692(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_95051(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_95109()
{
    sub_95118();
    return;
}

void sub_95118()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_95136();
    sub_95195( iVar2, iVar3, iVar4 );
    return;
}

void sub_95136()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_95195(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 16;
    sub_95228( iVar5, uParam0, uParam1, uParam2, "Contact_19" );
    return;
}

void sub_95228(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_95324( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_95324( ref cVar9 );
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
            sub_95324( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_95324( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_95324( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_95324( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_95901( iParam0, iVar7 );;;
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
                sub_96298( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_96298( 0, 4 );
            }
        }
    }
    if (NOT (sub_96387( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6763(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_6763() );
    }
    sub_2272();
    bVar27 = true;
    uVar28 = sub_95901( iParam0, iVar7 );
    uVar29 = sub_1729( iParam0 );
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
                sub_105763( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_106193();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_106278( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_106335( iParam0 );
                sub_106374( 0 );
                sub_2170( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_106482();
        }
    }
    if (bParam2)
    {
        sub_106193();
        sub_106570();
        sub_106374( 0 );
    }
    if (bParam3)
    {
        sub_106193();
        sub_106610();
        sub_106374( 0 );
        sub_2170( uVar29, 0 );
    }
    sub_1616();
    return;
}

void sub_95324(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_95901(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_2128( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_96298(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_96387(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_96595( uParam1 );
        break;
        case 1:
        bVar8 = sub_98673( uParam1 );
        break;
        case 2:
        bVar8 = sub_98899( uParam1 );
        break;
        case 3:
        bVar8 = sub_99049( uParam1 );
        break;
        case 4:
        bVar8 = sub_99327( uParam1 );
        break;
        case 5:
        bVar8 = sub_99630( uParam1 );
        break;
        case 6:
        bVar8 = sub_99829( uParam1 );
        break;
        case 7:
        bVar8 = sub_100055( uParam1 );
        break;
        case 8:
        bVar8 = sub_100290( uParam1 );
        break;
        case 9:
        bVar8 = sub_100665( uParam1 );
        break;
        case 10:
        bVar8 = sub_100912( uParam1 );
        break;
        case 11:
        bVar8 = sub_101051( uParam1 );
        break;
        case 12:
        bVar8 = sub_101350( uParam1 );
        break;
        case 13:
        bVar8 = sub_101578( uParam1 );
        break;
        case 14:
        bVar8 = sub_101865( uParam1 );
        break;
        case 15:
        bVar8 = sub_102147( uParam1 );
        break;
        case 16:
        bVar8 = sub_102429( uParam1 );
        break;
        case 17:
        bVar8 = sub_102630( uParam1 );
        break;
        case 18:
        bVar8 = sub_102703( uParam1 );
        break;
        case 19:
        bVar8 = sub_102917( uParam1 );
        break;
        case 20:
        bVar8 = sub_103170( uParam1 );
        break;
        case 21:
        bVar8 = sub_103417( uParam1 );
        break;
        case 22:
        bVar8 = sub_103618( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_98278( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_95901( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_103941( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_96595(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_96874( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_96874( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_96874( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_96874( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_96874( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_96874( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_96874( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_96874( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_96874( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_96874( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_96874( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_96874( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_96874( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_96874( iVar3, 0, 3, 1, 0, 0 );
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
        sub_96874( iVar3, 0, sub_98156(), sub_98422(), 0, 0 );
        break;
        default:
        sub_98581( "Friend 1", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Friend 1", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_96874(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_96885( uParam1 );
    sub_97059( uParam0, 0, uParam2 );
    sub_97059( uParam0, 1, uParam3 );
    sub_97059( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_95136();
    return;
}

void sub_96885(unknown uParam0)
{
    ADD_SCORE( sub_6763(), uParam0 );
    sub_96910( uParam0 );
    return;
}

void sub_96910(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2128( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_97059(unknown uParam0, int iParam1, int iParam2)
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
        sub_97216( uParam0 );
    }
    return;
}

void sub_97216(unknown uParam0)
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

int sub_98156()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_98278( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_98278(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_98422()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_98278( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_98581(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_98673(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_96874( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_98581( "Contact 2", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 2", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_98899(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_96874( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_98581( "Girl 3", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Girl 3", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_99049(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_96874( iVar3, 0, sub_98156(), sub_98422(), 0, 0 );
        break;
        default:
        sub_98581( "Friend 4", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Friend 4", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_99327(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_96874( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_96874( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_96874( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_96874( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_98581( "Contact 5", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 5", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_99630(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_98581( "Contact 7", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 7", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_99829(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_96874( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_98581( "Contact 7b", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 7b", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_100055(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_96874( iVar3, 0, sub_98156(), sub_98422(), 0, 0 );
        break;
        default:
        sub_98581( "Friend 8", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Friend 8", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_100290(unknown uParam0)
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
        sub_96874( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_96874( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_96874( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_96874( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_96874( iVar3, 0, sub_98156(), sub_98422(), 0, 0 );
        break;
        default:
        sub_98581( "Friend 9", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Friend 9", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_100665(unknown uParam0)
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
        sub_96874( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_96874( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_96874( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_98581( "Contact 10", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_98581( "Contact 10", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_100912(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_98581( "Girl 11", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Girl 11", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_101051(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_96874( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_96874( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_96874( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_96874( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_96874( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_98581( "Contact 12", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 12", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_101350(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_96874( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_98581( "Contact 13", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 13", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_101578(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_96874( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_96874( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_96874( iVar3, 0, sub_98156(), sub_98422(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_98581( "Friend 15", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Friend 15", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_101865(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_96874( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_96874( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_96874( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_98581( "Contact 16", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 16", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_102147(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_96874( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_96874( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_96874( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_98581( "Contact 18", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 18", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_102429(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_98581( "Contact 19", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 19", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_102630(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_98581( "Girl 20", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_102703(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_98581( "Contact 21", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 21", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_102917(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_96874( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_96874( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_98581( "Contact 22", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 22", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_103170(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_96874( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_96874( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_96874( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_98581( "Contact 24", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 24", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_103417(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_96874( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_96874( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_96874( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_98581( "Contact 25", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_98581( "Contact 25", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_103618(unknown uParam0)
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
        sub_96874( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_98581( "Girl 26", 1 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_98581( "Girl 26", 0 );
        sub_96874( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_103941(int iParam0, int iParam1)
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
    if (sub_103989( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_104720( iParam1 );
    }
    return;
}

int sub_103989(int iParam0, int iParam1)
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
            sub_104129( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_104129(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_104311( 0 );
    return;
}

void sub_104311(boolean bParam0)
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
        sub_104566();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_104566()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_104720(int iParam0)
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
        sub_105053( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_105053( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_105053( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_105053( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_105053( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_105053( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_105053( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_105053( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_105053( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_105053( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_105053( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_105053( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_105053( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_105053( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_105053( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_105053( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_105053( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_105053( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_105053( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_105053(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_105763(unknown uParam0, unknown uParam1)
{
    sub_105782( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_105782(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_106193()
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

int sub_106278(int iParam0, int iParam1)
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

void sub_106335(unknown uParam0)
{
    sub_1515();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_106374(unknown uParam0)
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

void sub_106482()
{
    sub_106491();
    return;
}

void sub_106491()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_106570()
{
    sub_106491();
    return;
}

void sub_106610()
{
    sub_106491();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_106730()
{
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6763(), 150 );
        SAY_AMBIENT_SPEECH( l_U837, "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    l_U522 = 0;
    sub_106807();
    return;
}

void sub_106807()
{
    sub_106816();
    return;
}

void sub_106816()
{
    int iVar2;

    iVar2 = 16;
    sub_106830( iVar2 );
    sub_2263( iVar2 );
    return;
}

void sub_106830(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_6763(), 150 );
    CLEAR_HELP();
    sub_1087( uParam0 );
    return;
}

