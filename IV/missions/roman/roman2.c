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
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = 0;
    l_U486 = 0;
    l_U487 = 0;
    l_U488 = 0;
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U497 = 200.00000000;
    l_U498 = 30;
    l_U502 = 1;
    l_U530 = 0;
    l_U531 = 1;
    l_U536 = 0;
    l_U537 = 0;
    l_U538 = 0;
    l_U539 = 0;
    l_U540 = 0;
    l_U541 = 0;
    l_U542 = 0;
    l_U550 = 0;
    l_U552 = 0;
    l_U553 = 1;
    l_U554 = 0;
    l_U555 = 0;
    l_U556 = 0;
    l_U650 = 0;
    l_U651 = 0;
    l_U652 = 0;
    l_U653 = 0;
    l_U702 = {1221.50000000, 83.77000000 + 0.38000000, 37.74000000};
    l_U705 = {829.01370000, -267.98060000, 14.47900000};
    l_U708 = {814.00000000, -274.40000000, 16.70000000};
    l_U735 = 40.00000000;
    l_U763 = 55;
    sub_370( "ROMAN2", 0 );
    sub_370( "R2AUD", 6 );
    sub_527();
    SET_MISSION_FLAG( 1 );
    if (g_U9893._fU24)
    {
        CLEAR_AREA( 812.27000000, -261.96550000, 14.33780000, 4.00000000, 1 );
        CLEAR_AREA_OF_CARS( 812.27000000, -261.96550000, 14.33780000, 25.00000000 );
        CLEAR_AREA_OF_COPS( 829.26650000, -266.52460000, 14.46890000, 50.00000000 );
        if (NOT (IS_CHAR_DEAD( l_U754 )))
        {
            SET_ALL_RANDOM_PEDS_FLEE( l_U755, 1 );
            SET_CHAR_PROOFS( l_U754, 1, 1, 1, 1, 1 );
        }
        START_CUTSCENE_NOW( "Rom2_a" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 812.27000000, -261.96550000, 14.33780000, 20.00000000, 3 );
        CLEAR_NAMED_CUTSCENE( "Rom2_a" );
    }
    sub_5344();
    l_U502 = 1;
    while (l_U502)
    {
        switch (l_U481)
        {
            case 0:
            sub_6502();
            break;
            case 1: break;
            case 2:
            sub_9217();
            break;
            case 3:
            sub_25301();
            break;
            case 4:
            sub_35298();
            break;
            case 5:
            sub_55287();
            break;
            case 6:
            sub_59320();
            break;
            case 7:
            sub_62719();
            break;
            case 8:
            sub_64675();
            break;
            case -1: break;
        }
        sub_64714();
        WAIT( 0 );
        if (l_U500 == 1)
        {
            CLEAR_HELP();
            CLEAR_WANTED_LEVEL( l_U755 );
            sub_64816();
        }
        else if (l_U501 == 1)
        {
            CLEAR_HELP();
            sub_79655();
        }
    }
    sub_3063();
    return;
}

void sub_370(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_406())
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

int sub_406()
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

void sub_527()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_548();
        sub_667();
        while (sub_747())
        {
            WAIT( 0 );
        }
        if (l_U536 == 1)
        {
            sub_812( 0 );
        }
        g_U91._fU40 = 0;
        sub_916();
        sub_953();
        sub_3063();
    }
    return;
}

void sub_548()
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

void sub_667()
{
    return sub_678( 1, 1 );
}

int sub_678(boolean bParam0, unknown uParam1)
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

int sub_747()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_812(unknown uParam0)
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

void sub_916()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_953()
{
    sub_962();
    return;
}

void sub_962()
{
    int iVar2;

    iVar2 = 0;
    sub_976( iVar2 );
    sub_2152( iVar2 );
    return;
}

void sub_976(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1020();
        sub_1181();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1289();
            sub_1328();
        }
    }
    sub_1404();
    sub_1505();
    uVar5 = sub_1618( uParam0 );
    sub_2059( uVar5, 0 );
    return;
}

void sub_1020()
{
    sub_1034( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1134();
    }
    return;
}

void sub_1034(int iParam0)
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

void sub_1134()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1181()
{
    sub_1190();
    return;
}

void sub_1190()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1289()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1328()
{
    sub_1337();
    return;
}

void sub_1337()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1404()
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

void sub_1505()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1527();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1527()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1618(unknown uParam0)
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
    sub_2017( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2017(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2059(int iParam0, boolean bParam1)
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

void sub_2152(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2161();
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
        sub_2936();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2161()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2199( 5, g_U569[I] )) == 1))
        {
            if ((sub_2199( 1, g_U569[I] )) != 0)
            {
                sub_2485( I );
            }
        }
    }
    if (NOT sub_2651())
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

int sub_2199(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2485(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2570( g_U569 - 1 );
    return;
}

void sub_2570(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2651()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2199( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2936()
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

void sub_3063()
{
    SET_WANTED_MULTIPLIER( 1.00000000 );
    RELEASE_WEATHER();
    sub_3091();
    sub_3206();
    sub_3286();
    sub_3366();
    DESTROY_ALL_CAMS();
    ENABLE_SCENE_STREAMING( 1 );
    g_U8086 = 0;
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1196.94000000, 80.89000000, 35.00000000, 1258.44000000, 97.12000000, 39.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 821.25000000, -455.20000000, 11.15000000, 841.89000000, -252.34000000, 16.74000000 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_EVERYONE_IGNORE_PLAYER( l_U755, 0 );
    if (NOT (IS_CHAR_DEAD( l_U660 )))
    {
        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U660, 0 );
    }
    sub_3624( 0 );
    sub_3669( 0 );
    if (NOT (IS_CHAR_DEAD( l_U660 )))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U660 );
    }
    if (DOES_VEHICLE_EXIST( l_U711 ))
    {
        LOCK_CAR_DOORS( l_U711, 1 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U711 );
    }
    if (DOES_VEHICLE_EXIST( l_U712 ))
    {
        LOCK_CAR_DOORS( l_U712, 1 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U712 );
    }
    if (NOT (IS_CHAR_DEAD( l_U661[0] )))
    {
        SET_CHAR_KEEP_TASK( l_U661[0], 1 );
        if (NOT (IS_CHAR_ON_SCREEN( l_U661[0] )))
        {
            DELETE_CHAR( ref l_U661[0] );
        }
        else
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U661[0] );
            REMOVE_CHAR_ELEGANTLY( ref l_U661[0] );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U661[1] )))
    {
        SET_CHAR_KEEP_TASK( l_U661[1], 1 );
        if (NOT (IS_CHAR_ON_SCREEN( l_U661[1] )))
        {
            DELETE_CHAR( ref l_U661[1] );
        }
        else
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U661[1] );
            REMOVE_CHAR_ELEGANTLY( ref l_U661[1] );
        }
    }
    if (DOES_BLIP_EXIST( l_U676 ))
    {
        REMOVE_BLIP( l_U676 );
    }
    if (DOES_BLIP_EXIST( l_U677 ))
    {
        REMOVE_BLIP( l_U677 );
    }
    if (DOES_BLIP_EXIST( l_U678 ))
    {
        REMOVE_BLIP( l_U678 );
    }
    if (DOES_BLIP_EXIST( l_U679 ))
    {
        SET_ROUTE( l_U679, 0 );
        REMOVE_BLIP( l_U679 );
    }
    if (DOES_BLIP_EXIST( l_U680 ))
    {
        REMOVE_BLIP( l_U680 );
    }
    if (DOES_BLIP_EXIST( l_U681 ))
    {
        REMOVE_BLIP( l_U681 );
    }
    if (DOES_BLIP_EXIST( l_U682 ))
    {
        PRINTSTRING( "\n\n\n    Remove Blip 396    \n\n" );
        SET_ROUTE( l_U682, 0 );
        REMOVE_BLIP( l_U682 );
    }
    DONT_SUPPRESS_CAR_MODEL( -1932515764 );
    DONT_SUPPRESS_CAR_MODEL( -276900515 );
    DONT_SUPPRESS_CAR_MODEL( 1937616578 );
    REMOVE_DECISION_MAKER( l_U719 );
    REMOVE_DECISION_MAKER( l_U720 );
    REMOVE_DECISION_MAKER( l_U721 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    CLEAR_HELP();
    return;
}

void sub_3091()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_CHAR_EXIST( l_U661[I] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U661[I] )))
            {
                SET_CHAR_KEEP_TASK( l_U661[I], 1 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U661[I] );
        }
    }
    return;
}

void sub_3206()
{
    int I;

    if (l_U745 != 0)
    {
        for ( I = 0; I <= (l_U745 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U738[I] );
        }
    }
    l_U745 = 0;
    return;
}

void sub_3286()
{
    int I;

    if (l_U751 != 0)
    {
        for ( I = 0; I <= (l_U751 - 1); I++ )
        {
            REMOVE_ANIMS( l_U746[I] );
        }
    }
    l_U751 = 0;
    return;
}

void sub_3366()
{
    int I;

    for ( I = 0; I <= 0; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U752[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U752[I] );
        }
    }
    return;
}

void sub_3624(int iParam0)
{
    if (g_U91._fU72 == iParam0)
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_3669(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3680( uParam0 ) );
    return;
}

int sub_3680(unknown uParam0)
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
    sub_2017( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5344()
{
    SET_WANTED_MULTIPLIER( 0.10000000 );
    SET_CREATE_RANDOM_COPS( 0 );
    FORCE_WEATHER_NOW( 0 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 1, 0.00000000 );
    SWITCH_ROADS_OFF( 1196.94000000, 80.89000000, 35.00000000, 1258.44000000, 97.12000000, 39.00000000 );
    SWITCH_PED_PATHS_OFF( 1207.06000000, 76.88000000, 35.00000000, 1242.03000000, 83.11000000, 39.00000000 );
    sub_5493( "R2AUD" );
    sub_5656( 0, sub_5607(), "Niko", 0 );
    l_U754 = sub_5607();
    l_U755 = sub_5815();
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U754, 0 );
    sub_5869( 1731510984 );
    sub_5869( 1468450703 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U719 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U720 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U721 );
    sub_5968( 0 );
    sub_5869( -1932515764 );
    sub_5869( 1937616578 );
    SUPPRESS_CAR_MODEL( -1932515764 );
    SUPPRESS_CAR_MODEL( -276900515 );
    SUPPRESS_CAR_MODEL( 1937616578 );
    sub_6068( "missroman2" );
    LOAD_ALL_OBJECTS_NOW();
    while (NOT sub_6127())
    {
        WAIT( 0 );
    }
    while (NOT (sub_6232( 0 )))
    {
        WAIT( 0 );
    }
    while (NOT sub_6282())
    {
        WAIT( 0 );
    }
    return;
}

void sub_5493(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_5512();
    return;
}

void sub_5512()
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

void sub_5607()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5656(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5740( "\n PED NUMBER ", uParam0 );
    sub_5780( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5740(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5780(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5815()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5869(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U738[l_U745] = uParam0;
    l_U745++;
    return;
}

void sub_5968(unknown uParam0)
{
    REQUEST_MODEL( sub_3680( uParam0 ) );
    return;
}

void sub_6068(unknown uParam0)
{
    REQUEST_ANIMS( uParam0 );
    l_U746[l_U751] = uParam0;
    l_U751++;
    return;
}

int sub_6127()
{
    int I;

    if (l_U745 != 0)
    {
        for ( I = 0; I <= (l_U745 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U738[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_6232(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_3680( uParam0 ) );
}

int sub_6282()
{
    int I;

    if (l_U751 != 0)
    {
        for ( I = 0; I <= (l_U751 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U746[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_6502()
{
    sub_916();
    if (l_U509 == 0)
    {
        CLEAR_AREA( 812.27000000, -261.96550000, 14.33780000, 5.00000000, 1 );
        sub_6561( ref l_U711 );
        LOCK_CAR_DOORS( l_U711, 2 );
        ADD_UPSIDEDOWN_CAR_CHECK( l_U711 );
        SET_CAR_ON_GROUND_PROPERLY( l_U711 );
        RETUNE_RADIO_TO_STATION_NAME( "VLADIVOSTOK" );
        l_U509 = 1;
    }
    sub_7149( 0, ref l_U660, 812.27000000, -261.96550000, 14.33780000, 165.43760000 );
    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U660, 0 );
    SET_ROMANS_MOOD( 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U660, 1 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U660, 1 );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U660, 1 );
    sub_5656( 1, l_U660, "ROMAN", 0 );
    SET_CHAR_COORDINATES( sub_5607(), 811.26910000, -259.68640000, 14.33770000 );
    SET_CHAR_HEADING( sub_5607(), 147 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    if (NOT (DOES_BLIP_EXIST( l_U678 )))
    {
        ADD_BLIP_FOR_CAR( l_U711, ref l_U678 );
        CHANGE_BLIP_COLOUR( l_U678, 3 );
        SET_ROUTE( l_U678, 1 );
    }
    WAIT( 500 );
    if (NOT (IS_CHAR_DEAD( l_U754 )))
    {
        SET_ALL_RANDOM_PEDS_FLEE( l_U755, 0 );
        SET_CHAR_PROOFS( l_U754, 0, 0, 0, 0, 0 );
    }
    LOAD_SCENE( 812.27000000, -261.96550000, 14.33780000 );
    DO_SCREEN_FADE_IN( 750 );
    WAIT( 500 );
    LOCK_CAR_DOORS( l_U711, 1 );
    if ((NOT (IS_CHAR_DEAD( l_U660 ))) AND (NOT (IS_CAR_DEAD( l_U711 ))))
    {
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        TASK_ENTER_CAR_AS_PASSENGER( l_U660, l_U711, -2, 0 );
    }
    WAIT( 500 );
    SET_PLAYER_CONTROL_ADVANCED( sub_5815(), 1, 1, 1 );
    l_U481 = 2;
    return;
}

int sub_6561(unknown uParam0)
{
    int iVar3;
    int iVar4;
    vector vVar5;
    float fVar8;

    if (g_U9943[1]._fU0)
    {
        return sub_6587( uParam0 );
    }
    iVar3 = -1932515764;
    iVar4 = -464206860;
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar5 = {808.86000000, -265.03120000, 14.53780000};
    fVar8 = 343.59120000;
    CLEAR_AREA( vVar5.x, vVar5.y, vVar5.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar5.x, vVar5.y, vVar5.z, uParam0, 1 );
    CHANGE_CAR_COLOUR( (uParam0^), 0, 1 );
    SET_EXTRA_CAR_COLOURS( (uParam0^), 1, 0 );
    SET_CAR_HEADING( (uParam0^), fVar8 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    SET_VEHICLE_DIRT_LEVEL( (uParam0^), 15.90000000 );
    return 1;
}

int sub_6587(unknown uParam0)
{
    int iVar3;
    vector vVar4;
    float fVar7;

    iVar3 = -1932515764;
    if (g_U9943[2]._fU0)
    {
        iVar3 = 2006918058;
    }
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar4 = {589.28430000, 1430.80900000, 10.00540000};
    fVar7 = 1.95590000;
    CLEAR_AREA( vVar4.x, vVar4.y, vVar4.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar4.x, vVar4.y, vVar4.z, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), fVar7 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    if (iVar3 == 2006918058)
    {
        SET_CAR_COLOUR_COMBINATION( (uParam0^), 2 );
        SET_VEHICLE_DIRT_LEVEL( (uParam0^), 0.00000000 );
    }
    else
    {
        CHANGE_CAR_COLOUR( (uParam0^), 0, 1 );
        SET_EXTRA_CAR_COLOURS( (uParam0^), 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( (uParam0^), 15.90000000 );
    }
    return 1;
}

void sub_7149(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_3680( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_7199( uParam0, (uParam1^) );
    return;
}

void sub_7199(unknown uParam0, unknown uParam1)
{
    sub_7211( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_7211(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_7305( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_7849( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_7305(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_7849(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_7305( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7305( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7305( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_7305( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_7305( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_7305( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7305( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7305( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_7305( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7305( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_7305( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7305( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_7305( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_9217()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (l_U510 == 0)
    {
        SWITCH_ROADS_OFF( 1196.94000000, 80.89000000, 35.00000000, 1258.44000000, 97.12000000, 39.00000000 );
        SWITCH_PED_PATHS_OFF( 1207.06000000, 76.88000000, 35.00000000, 1242.03000000, 83.11000000, 39.00000000 );
        sub_9329( "R2_2GO", 0, 1, ref l_U654, 6, 1 );
        while (sub_10310( l_U654 ))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U711 )))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U754, l_U711 )))
            {
                PRINT_NOW( "R2_Start_1", 7500, 1 );
            }
        }
        l_U510 = 1;
    }
    if (l_U530 == 0)
    {
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND (NOT (IS_CHAR_DEAD( l_U660 ))))
        {
            if (IS_CHAR_IN_CAR( l_U660, l_U711 ))
            {
                l_U530 = 1;
            }
        }
    }
    if (l_U530 == 0)
    {
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND (NOT (IS_CHAR_DEAD( l_U660 ))))
        {
            if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( l_U660 ))) AND (NOT (IS_CHAR_IN_CAR( l_U660, l_U711 ))))
            {
                if (LOCATE_CAR_3D( l_U711, 812.27000000, -261.96550000, 14.33780000, 15.00000000, 15.00000000, 15.00000000, 0 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U660, 11, ref iVar2 );
                    if (iVar2 == 7)
                    {
                        CLEAR_CHAR_TASKS( l_U660 );
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        TASK_ENTER_CAR_AS_PASSENGER( l_U660, l_U711, -2, 0 );
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U660, 27, ref iVar2 );
                    if (iVar2 == 7)
                    {
                        CLEAR_CHAR_TASKS( l_U660 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U660, 812.27000000, -261.96550000, 14.33780000, 2, -2, 2.00000000 );
                    }
                }
                l_U530 = 0;
            }
        }
    }
    if ((l_U531 == 1) AND ((l_U511 == 0) AND (l_U510 == 1)))
    {
        if (NOT (IS_CAR_DEAD( l_U711 )))
        {
            if (IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 ))
            {
                if (DOES_BLIP_EXIST( l_U678 ))
                {
                    REMOVE_BLIP( l_U678 );
                }
                if ((IS_CHAR_SITTING_IN_CAR( l_U660, l_U711 )) AND (NOT (IS_CHAR_DEAD( l_U660 ))))
                {
                    if (DOES_BLIP_EXIST( l_U678 ))
                    {
                        REMOVE_BLIP( l_U678 );
                    }
                    if (DOES_BLIP_EXIST( l_U681 ))
                    {
                        REMOVE_BLIP( l_U681 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U679 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U702._fU0, l_U702._fU4, l_U702._fU8, ref l_U679 );
                        CHANGE_BLIP_COLOUR( l_U679, 5 );
                        SET_ROUTE( l_U679, 1 );
                    }
                    l_U511 = 1;
                    l_U512 = 1;
                    l_U513 = 1;
                }
                else if (l_U540 == 0)
                {
                    PRINT_NOW( "R2_COMMANDS_2", 7500, 1 );
                    l_U540 = 1;
                    l_U513 = 0;
                }
                if (NOT (DOES_BLIP_EXIST( l_U681 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U660, ref l_U681 );
                    CHANGE_BLIP_COLOUR( l_U681, 3 );
                }
                l_U511 = 0;
                l_U512 = 1;
                l_U513 = 0;;
                l_U555 = 1;
            }
        }
    }
    if ((l_U555 == 1) AND ((l_U593[1] == 0) AND (l_U511 == 1)))
    {
        sub_11349();
        sub_11841();
    }
    if ((TIMERB() > 3000) AND ((l_U531 == 1) AND ((l_U514 == 0) AND ((l_U513 == 1) AND ((l_U512 == 1) AND (l_U510 == 1))))))
    {
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND (l_U593[0] == 0))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                PRINTSTRING( "\n ----> TEST LINE 2459 <-----" );
                PRINT_NOW( "R2_COMMANDS_11", 7500, 1 );
                SETTIMERA( 0 );
                l_U593[0] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[1] == 0) AND ((l_U593[0] == 1) AND (TIMERA() > 7500))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                PRINT_HELP( "R2_Start_2" );
                if (g_U64975 == 0)
                {
                    sub_9329( "R2_B1V1", 0, 1, ref l_U654, 6, 1 );
                    g_U64975 = 1;
                    l_U504 = 1;
                }
                else if (g_U64975 == 1)
                {
                    sub_9329( "R2_B1V2", 0, 1, ref l_U654, 6, 1 );
                    g_U64975 = 2;
                    l_U505 = 1;
                }
                SETTIMERA( 0 );
                l_U593[1] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[2] == 0) AND ((l_U593[1] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 1, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 1, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[2] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[3] == 0) AND ((l_U593[2] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 2, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 2, 1, ref l_U654, 6, 1 );
                }
                l_U535 = 1;
                SETTIMERA( 0 );
                l_U593[3] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[15] == 0) AND ((l_U593[3] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                PRINT_HELP( "CORNER" );
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 3, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 3, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[15] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[4] == 0) AND ((l_U593[15] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 4, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 4, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[4] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[5] == 0) AND ((l_U593[4] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 5, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 5, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[5] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[6] == 0) AND ((l_U593[5] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 6, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 6, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[6] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[7] == 0) AND ((l_U593[6] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 7, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 7, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[7] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[8] == 0) AND ((l_U593[7] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 8, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 8, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[8] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[9] == 0) AND ((l_U593[8] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 9, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 9, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[9] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[10] == 0) AND ((l_U593[9] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 10, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 10, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[10] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[11] == 0) AND ((l_U593[10] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 11, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 11, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[11] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[12] == 0) AND ((l_U593[11] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 12, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 12, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[12] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[13] == 0) AND ((l_U593[12] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 13, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 13, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[13] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[14] == 0) AND ((l_U593[13] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 14, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 14, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[14] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[16] == 0) AND ((l_U593[14] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    sub_9329( "R2_B1V1", 15, 1, ref l_U654, 6, 1 );
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 15, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[16] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U593[17] == 0) AND ((l_U593[16] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (l_U504 == 1)
                {
                    ;
                }
                else if (l_U505 == 1)
                {
                    sub_9329( "R2_B1V2", 16, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U593[17] = 1;
            }
        }
        if ((l_U593[17] == 1) AND (TIMERA() > 3000))
        {
            l_U514 = 1;
        }
    }
    if ((l_U532 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8, 250.00000000, 250.00000000, 250.00000000, 0 )))
    {
        OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
        SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
        CLEAR_AREA( l_U702._fU0, l_U702._fU4, l_U702._fU8, 50.00000000, 1 );
        l_U532 = 1;
    }
    if ((l_U531 == 1) AND ((NOT (IS_CHAR_DEAD( l_U660 ))) AND (NOT (IS_CAR_DEAD( l_U711 )))))
    {
        if ((IS_CHAR_IN_CAR( l_U660, l_U711 )) AND (IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 )))
        {
            if (l_U511 == 1)
            {
                GET_VEHICLE_QUATERNION( l_U711, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8, ref uVar8 );
                if (NOT (LOCATE_CHAR_IN_CAR_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
                {
                    LOCATE_CHAR_IN_CAR_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8 + (2.50000000 / 2), 2.50000000, 2.50000000, 2.50000000, 1 );
                }
                else if ((uVar4._fU4 > -0.10000000) AND (uVar4._fU4 < 0.10000000))
                {
                    SET_CREATE_RANDOM_COPS( 0 );
                    SET_WIDESCREEN_BORDERS( 1 );
                    SET_PLAYER_CONTROL( l_U755, 0 );
                    if (DOES_BLIP_EXIST( l_U679 ))
                    {
                        SET_ROUTE( l_U679, 0 );
                        REMOVE_BLIP( l_U679 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U711 )))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U711, 1.35000000, 0.15000000, 0.00000000, ref l_U693._fU0, ref l_U693._fU4, ref l_U693._fU8 );
                    }
                    OPEN_SEQUENCE_TASK( ref l_U736 );
                    TASK_STAND_STILL( 0, 1000 );
                    if (NOT (IS_CAR_DEAD( l_U711 )))
                    {
                        TASK_LEAVE_CAR( 0, l_U711 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1227.91500000, 73.31420000, 37.78140000, 2, 10000, 1.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U736 );
                    BEGIN_CAM_COMMANDS( ref l_U734 );
                    CLEAR_WANTED_LEVEL( l_U755 );
                    CREATE_CAM( 14, ref l_U723 );
                    CREATE_CAM( 14, ref l_U724 );
                    CREATE_CAM( 3, ref l_U733 );
                    SET_CAM_POS( l_U723, 1223.81400000, 89.86863000, 41.05486000 );
                    SET_CAM_ROT( l_U723, -14.58237000, -0.00000000, -178.50730000 );
                    SET_CAM_POS( l_U724, 1223.81400000, 89.86863000, 41.05486000 );
                    SET_CAM_ROT( l_U724, -14.58237000, -0.00000000, -178.50730000 );
                    SET_CAM_ACTIVE( l_U723, 1 );
                    SET_CAM_PROPAGATE( l_U723, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    CLEAR_AREA( 1224.64500000, 82.92311000, 37.59240000, 30.00000000, 1 );
                    CLEAR_AREA( 1231.44800000, 78.09839000, 36.92490000, 10.00000000, 1 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 0, 0.00000000 );
                    if (NOT (IS_CAR_DEAD( l_U711 )))
                    {
                        REMOVE_CAR_WINDOW( l_U711, 1 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U711 )))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U711, (-3.50000000 - 2.20000000) + l_U757._fU0, 5.00000000 + l_U757._fU4, ((0.65000000 - 1.00000000) + 0.60000000) + l_U757._fU8, ref l_U693._fU0, ref l_U693._fU4, ref l_U693._fU8 );
                    }
                    if (l_U693._fU4 < 77.00000000)
                    {
                        l_U693._fU4 = 77.00000000;
                    }
                    if (l_U693._fU8 < 37.00000000)
                    {
                        l_U693._fU8 = 37.00000000;
                    }
                    SET_CAM_POS( l_U723, l_U693._fU0, l_U693._fU4, l_U693._fU8 );
                    l_U735 = 35;
                    SET_CAM_FOV( l_U723, l_U735 );
                    if (NOT (IS_CAR_DEAD( l_U711 )))
                    {
                        POINT_CAM_AT_VEHICLE( l_U723, l_U711 );
                        SET_CAM_POINT_OFFSET( l_U723, (0.50000000 + 0.70000000) + l_U760._fU0, 0.00000000 + l_U760._fU4, ((0.00000000 + 1.35000000) - 0.60000000) + l_U760._fU8 );
                        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U723, 1 );
                    }
                    SETTIMERA( 0 );
                    sub_11424( ref l_U654, 1 );
                    while (sub_10310( l_U654 ))
                    {
                        l_U735 += 0.05000000;
                        SET_CAM_FOV( l_U723, l_U735 );
                        WAIT( 0 );
                    }
                    CLEAR_PRINTS();
                    sub_9329( "R2_WAIT", 0, 1, ref l_U654, 6, 1 );
                    if ((NOT (IS_CHAR_DEAD( l_U660 ))) AND (NOT (IS_CAR_DEAD( l_U711 ))))
                    {
                        TASK_PERFORM_SEQUENCE( l_U660, l_U736 );
                        CLEAR_SEQUENCE_TASK( l_U736 );
                        TASK_LOOK_AT_CHAR( l_U754, l_U660, 60000, 0 );
                    }
                    SETTIMERA( 0 );
                    while (l_U637[5] == 0)
                    {
                        if (l_U637[6] == 0)
                        {
                            l_U735 += 0.05000000;
                            SET_CAM_FOV( l_U723, l_U735 );
                            WAIT( 0 );
                            if (TIMERA() > 4000)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U660 )))
                                {
                                    TASK_STAND_STILL( l_U660, 250 );
                                    sub_9329( "R2_ARRIVED", 0, 1, ref l_U654, 6, 1 );
                                }
                            }
                            if (TIMERA() > 4000)
                            {
                                if (NOT (IS_CAR_DEAD( l_U711 )))
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U711, 1.85000000, 0.00000000, 0.00000000, ref l_U693._fU0, ref l_U693._fU4, ref l_U693._fU8 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U660 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660 );
                                    sub_17910( l_U660, l_U754 );
                                }
                                if (NOT (IS_CAR_DEAD( l_U711 )))
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U711, 3.00000000 + l_U757._fU0, 3.00000000 + l_U757._fU4, 0.60000000 + l_U757._fU8, ref l_U693._fU0, ref l_U693._fU4, ref l_U693._fU8 );
                                }
                                if (l_U693._fU8 < 37.00000000)
                                {
                                    l_U693._fU8 = 37.00000000;
                                }
                                SET_CAM_POS( l_U723, l_U693._fU0, l_U693._fU4, l_U693._fU8 );
                                l_U735 = 40;
                                SET_CAM_FOV( l_U723, l_U735 );
                                if (NOT (IS_CAR_DEAD( l_U711 )))
                                {
                                    POINT_CAM_AT_VEHICLE( l_U723, l_U711 );
                                    SET_CAM_POINT_OFFSET( l_U723, l_U760._fU0, l_U760._fU4, 0.70000000 + l_U760._fU8 );
                                    SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U723, 1 );
                                }
                                SETTIMERA( 0 );
                                l_U637[6] = 1;
                            }
                        }
                        if ((l_U637[7] == 0) AND (l_U637[6] == 1))
                        {
                            l_U735 -= 0.05000000;
                            SET_CAM_FOV( l_U723, l_U735 );
                            WAIT( 0 );
                            if (TIMERA() > 4000)
                            {
                                if (NOT (IS_CAR_DEAD( l_U711 )))
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U711, -4.00000000, 0.00000000, 1.50000000, ref l_U693._fU0, ref l_U693._fU4, ref l_U693._fU8 );
                                }
                                if (l_U693._fU8 < 37.00000000)
                                {
                                    l_U693._fU8 = 37.00000000;
                                }
                                SET_CAM_POS( l_U724, l_U693._fU0, l_U693._fU4, l_U693._fU8 );
                                l_U735 = 65;
                                SET_CAM_FOV( l_U724, l_U735 );
                                if (NOT (IS_CAR_DEAD( l_U711 )))
                                {
                                    POINT_CAM_AT_VEHICLE( l_U724, l_U711 );
                                }
                                SET_CAM_PROPAGATE( l_U723, 0 );
                                SET_CAM_ACTIVE( l_U724, 1 );
                                SET_CAM_PROPAGATE( l_U724, 1 );
                                if (NOT (IS_CAR_DEAD( l_U711 )))
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U711, -1.95000000 + l_U757._fU0, 4.45000000 + l_U757._fU4, -0.10000000 + l_U757._fU8, ref l_U693._fU0, ref l_U693._fU4, ref l_U693._fU8 );
                                }
                                SET_CAM_POS( l_U724, l_U693._fU0, l_U693._fU4, l_U693._fU8 );
                                l_U735 = 45;
                                SET_CAM_FOV( l_U724, l_U735 );
                                if (NOT (IS_CAR_DEAD( l_U711 )))
                                {
                                    POINT_CAM_AT_VEHICLE( l_U724, l_U711 );
                                    SET_CAM_POINT_OFFSET( l_U724, (2.20000000 - 1.27500000) + l_U760._fU0, l_U760._fU4, 0.40000000 + l_U760._fU8 );
                                    SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U724, 1 );
                                }
                                if (NOT (IS_CAR_DEAD( l_U711 )))
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U711, 1.85000000, 0.00000000, 0.00000000, ref l_U693._fU0, ref l_U693._fU4, ref l_U693._fU8 );
                                }
                                if (NOT (IS_CHAR_DEAD( l_U660 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660 );
                                    SET_CHAR_COORDINATES( l_U660, l_U693._fU0, l_U693._fU4, -100.00000000 );
                                    sub_17910( l_U660, l_U754 );
                                }
                                SETTIMERA( 0 );
                                l_U637[7] = 1;
                            }
                        }
                        if ((NOT (sub_10310( l_U654 ))) AND ((l_U637[0] == 0) AND ((l_U637[7] == 1) AND (TIMERA() > 500))))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U660 )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U737 );
                                TASK_PLAY_ANIM( 0, "roman_give_phone", "missroman2", 4, 0, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( l_U737 );
                                TASK_PERFORM_SEQUENCE( l_U660, l_U737 );
                                CLEAR_SEQUENCE_TASK( l_U737 );
                                while (l_U515 == 0)
                                {
                                    if (NOT (IS_CHAR_DEAD( l_U660 )))
                                    {
                                        if (IS_CHAR_PLAYING_ANIM( l_U660, "missroman2", "roman_give_phone" ))
                                        {
                                            l_U515 = 1;
                                        }
                                    }
                                    l_U735 -= 0.03000000;
                                    SET_CAM_FOV( l_U724, l_U735 );
                                    WAIT( 0 );
                                }
                                TASK_PLAY_ANIM_UPPER_BODY( l_U754, "niko_recieve_phone", "missroman2", 4, 0, 0, 0, 0, 0 );
                            }
                            l_U637[0] = 1;
                            SETTIMERA( 0 );
                        }
                        if ((NOT (sub_10310( l_U654 ))) AND ((l_U637[1] == 0) AND ((l_U637[0] == 1) AND (TIMERA() > 3000))))
                        {
                            g_U91._fU40 = 1;
                            sub_9329( "R2_ARRIVED", 1, 1, ref l_U654, 6, 1 );
                            SETTIMERA( 0 );
                            l_U637[1] = 1;
                        }
                        if ((NOT (sub_10310( l_U654 ))) AND ((l_U637[2] == 0) AND ((l_U637[1] == 1) AND (TIMERA() > 0))))
                        {
                            while (l_U515 == 0)
                            {
                                if (NOT (IS_CHAR_DEAD( l_U660 )))
                                {
                                    if (IS_CHAR_PLAYING_ANIM( l_U660, "missroman2", "roman_give_phone" ))
                                    {
                                        GET_CHAR_ANIM_CURRENT_TIME( l_U660, "missroman2", "roman_give_phone", ref fVar9 );
                                        if (fVar9 > 0.90000000)
                                        {
                                            l_U515 = 1;
                                        }
                                    }
                                    else
                                    {
                                        l_U515 = 1;
                                    }
                                }
                                l_U735 -= 0.03000000;
                                SET_CAM_FOV( l_U724, l_U735 );
                                WAIT( 0 );
                            }
                            if (NOT (IS_CHAR_DEAD( l_U660 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660 );
                                OPEN_SEQUENCE_TASK( ref l_U737 );
                                TASK_LOOK_AT_CHAR( 0, l_U754, 4000, 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1227.91500000, 73.31420000, 37.78140000, 2, 15000, 1.00000000 );
                                CLOSE_SEQUENCE_TASK( l_U737 );
                                TASK_PERFORM_SEQUENCE( l_U660, l_U737 );
                                CLEAR_SEQUENCE_TASK( l_U737 );
                            }
                            sub_9329( "R2_ARRIVED", 2, 1, ref l_U654, 6, 1 );
                            SETTIMERA( 0 );
                            l_U637[2] = 1;
                        }
                        if ((NOT (sub_10310( l_U654 ))) AND ((l_U637[3] == 0) AND ((l_U637[2] == 1) AND (TIMERA() > 4000))))
                        {
                            sub_9329( "R2_ARRIVED", 3, 1, ref l_U654, 6, 1 );
                            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                            l_U637[3] = 1;
                        }
                        if ((NOT (sub_10310( l_U654 ))) AND ((l_U637[4] == 0) AND ((l_U637[2] == 1) AND (TIMERA() > 4000))))
                        {
                            SET_GAME_CAM_HEADING( 0.00000000 );
                            SET_CAM_ACTIVE( l_U724, 0 );
                            SET_CAM_PROPAGATE( l_U724, 0 );
                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                            if (DOES_CHAR_EXIST( l_U660 ))
                            {
                                DELETE_CHAR( ref l_U660 );
                            }
                            SETTIMERA( 0 );
                            l_U637[4] = 1;
                        }
                        if ((l_U637[5] == 0) AND ((l_U637[4] == 1) AND (TIMERA() > 0)))
                        {
                            CLEAR_HELP();
                            SET_WIDESCREEN_BORDERS( 0 );
                            DESTROY_CAM( l_U723 );
                            DESTROY_CAM( l_U724 );
                            DESTROY_CAM( l_U733 );
                            END_CAM_COMMANDS( ref l_U734 );
                            CLEAR_CHAR_TASKS( l_U754 );
                            SET_PLAYER_CONTROL( l_U755, 1 );
                            sub_916();
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 1, 0.00000000 );
                            if (DOES_CHAR_EXIST( l_U660 ))
                            {
                                DELETE_CHAR( ref l_U660 );
                            }
                            if (NOT (IS_CAR_DEAD( l_U711 )))
                            {
                                CLOSE_ALL_CAR_DOORS( l_U711 );
                            }
                            l_U637[5] = 1;
                            l_U516 = 1;
                            l_U481++;
                        }
                        if ((l_U637[5] == 0) AND (l_U637[0] == 1))
                        {
                            l_U735 -= 0.03000000;
                            SET_CAM_FOV( l_U724, l_U735 );
                        }
                        if ((IS_SCREEN_FADED_IN()) AND ((sub_20513()) AND (TIMERA() >= 1000)))
                        {
                            l_U637[0] = 1;
                            l_U637[1] = 1;
                            l_U637[2] = 1;
                            l_U637[3] = 1;
                            l_U637[4] = 1;
                            l_U637[5] = 1;
                            l_U637[6] = 1;
                            l_U637[7] = 1;
                            SETTIMERA( 5000 );
                            DO_SCREEN_FADE_OUT( 500 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            g_U91._fU40 = 1;
                            sub_11424( ref l_U654, 0 );
                            SET_CAM_ACTIVE( l_U724, 0 );
                            SET_CAM_PROPAGATE( l_U724, 0 );
                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                            SET_WIDESCREEN_BORDERS( 0 );
                            DESTROY_CAM( l_U724 );
                            DESTROY_CAM( l_U733 );
                            END_CAM_COMMANDS( ref l_U734 );
                            CLEAR_CHAR_TASKS( l_U754 );
                            SET_PLAYER_CONTROL( l_U755, 1 );
                            SET_GAME_CAM_HEADING( 0.00000000 );
                            if (NOT (IS_CAR_DEAD( l_U711 )))
                            {
                                CLOSE_ALL_CAR_DOORS( l_U711 );
                            }
                            sub_916();
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 1, 0.00000000 );
                            if (DOES_CHAR_EXIST( l_U660 ))
                            {
                                DELETE_CHAR( ref l_U660 );
                            }
                            l_U516 = 1;
                            WAIT( 500 );
                            LOAD_SCENE( l_U702._fU0, l_U702._fU4, l_U702._fU8 );
                            DO_SCREEN_FADE_IN( 500 );
                            WAIT( 500 );
                            l_U481++;
                        }
                        WAIT( 0 );
                    }
                }
            }
        }
    }
    if (l_U593[1] == 1)
    {
        sub_11349();
        sub_11841();
    }
    if ((l_U593[1] == 1) AND (l_U511 == 1))
    {
        sub_21121();
        sub_21304();
    }
    sub_21661();
    if (l_U516 == 0)
    {
        sub_25019();
    }
    return;
}

void sub_9329(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_9356( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_9356(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_9414( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_9414(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9436( iParam1 )))
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
    sub_10128( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_9436(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9513( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_9513( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_9513( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_9513(unknown uParam0)
{
    return;
}

void sub_10128(int iParam0, int iParam1)
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

int sub_10310(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_9513( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9513( "\n speech is not playing" );
    }
    return 0;
}

void sub_11349()
{
    if ((l_U501 == 0) AND (l_U512 == 1))
    {
        if (NOT (IS_CAR_DEAD( l_U711 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 )))
            {
                sub_11424( ref l_U654, 0 );
                if (NOT (DOES_BLIP_EXIST( l_U678 )))
                {
                    ADD_BLIP_FOR_CAR( l_U711, ref l_U678 );
                    CHANGE_BLIP_COLOUR( l_U678, 3 );
                }
                if (DOES_BLIP_EXIST( l_U679 ))
                {
                    SET_ROUTE( l_U679, 0 );
                    REMOVE_BLIP( l_U679 );
                    l_U547 = 1;
                }
                if (DOES_BLIP_EXIST( l_U682 ))
                {
                    SET_ROUTE( l_U682, 0 );
                    REMOVE_BLIP( l_U682 );
                    l_U548 = 1;
                }
                if (DOES_BLIP_EXIST( l_U681 ))
                {
                    REMOVE_BLIP( l_U681 );
                    l_U540 = 0;
                }
                CLEAR_HELP();
                if (NOT (IS_CHAR_DEAD( l_U660 )))
                {
                    SAY_AMBIENT_SPEECH( l_U660, "GET_IN_CAR", 1, 1, 0 );
                }
                PRINT_NOW( "R2_COMMANDS_3", 7500, 1 );
                LOCK_CAR_DOORS( l_U711, 1 );
                SETTIMERA( 0 );
                l_U512 = 0;
            }
        }
    }
    return;
}

void sub_11424(int iParam0, unknown uParam1)
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

void sub_11841()
{
    if ((l_U501 == 0) AND (l_U512 == 0))
    {
        if (NOT (IS_CAR_DEAD( l_U711 )))
        {
            if (IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 ))
            {
                if (DOES_BLIP_EXIST( l_U678 ))
                {
                    REMOVE_BLIP( l_U678 );
                }
                if (l_U501 == 0)
                {
                    if ((NOT (DOES_BLIP_EXIST( l_U679 ))) AND (l_U547 == 1))
                    {
                        ADD_BLIP_FOR_COORD( l_U702._fU0, l_U702._fU4, l_U702._fU8, ref l_U679 );
                        CHANGE_BLIP_COLOUR( l_U679, 5 );
                        SET_ROUTE( l_U679, 1 );
                    }
                    if ((NOT (DOES_BLIP_EXIST( l_U682 ))) AND (l_U548 == 1))
                    {
                        PRINTSTRING( "\n\n\n    Add Blip 865    \n\n" );
                        ADD_BLIP_FOR_COORD( l_U705._fU0, l_U705._fU4, l_U705._fU8, ref l_U682 );
                        CHANGE_BLIP_COLOUR( l_U682, 5 );
                        SET_ROUTE( l_U682, 1 );
                    }
                    if ((NOT (IS_CAR_DEAD( l_U712 ))) AND ((NOT (DOES_BLIP_EXIST( l_U679 ))) AND (l_U549 == 1)))
                    {
                        ADD_BLIP_FOR_CAR( l_U712, ref l_U676 );
                        CHANGE_BLIP_COLOUR( l_U676, 1 );
                        SET_BLIP_AS_FRIENDLY( l_U676, 0 );
                        l_U549 = 0;
                    }
                    if (l_U531 == 0)
                    {
                        PRINT_NOW( "R2_COMMANDS_9", 7500, 1 );
                    }
                    else if ((l_U525 == 1) || (l_U527 == 1))
                    {
                        PRINT_NOW( "R2_COMMANDS_7", 7500, 1 );
                    }
                    else if (l_U523 == 1)
                    {
                        if (DOES_BLIP_EXIST( l_U676 ))
                        {
                            PRINT_NOW( "R2_COMMANDS_12", 7500, 1 );
                        }
                        else
                        {
                            PRINT_NOW( "R2_COMMANDS_10", 7500, 1 );
                        }
                    }
                    else if (l_U520 == 1)
                    {
                        if ((l_U521 == 0) AND (l_U550 == 1))
                        {
                            PRINT_NOW( "R2_CALLTUT_0", 7500, 1 );
                            PRINTSTRING( "\n\n PHONE ROMAN 828 \n\n" );
                        }
                        else if (NOT (DOES_BLIP_EXIST( l_U679 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U702._fU0, l_U702._fU4, l_U702._fU8, ref l_U679 );
                            CHANGE_BLIP_COLOUR( l_U679, 5 );
                            SET_ROUTE( l_U679, 1 );
                        }
                        PRINT_NOW( "R2_COMMANDS_5", 7500, 1 );;
                    }
                    else if (l_U518 == 1)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U679 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U702._fU0, l_U702._fU4, l_U702._fU8, ref l_U679 );
                            CHANGE_BLIP_COLOUR( l_U679, 5 );
                            SET_ROUTE( l_U679, 1 );
                        }
                        PRINT_NOW( "R2_COMMANDS_5", 7500, 1 );
                    }
                    else if (l_U517 == 1)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U679 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U702._fU0, l_U702._fU4, l_U702._fU8, ref l_U679 );
                            CHANGE_BLIP_COLOUR( l_U679, 5 );
                            SET_ROUTE( l_U679, 1 );
                        }
                        PRINT_NOW( "R2_COMMANDS_5", 7500, 1 );
                    }
                    else if (l_U535 == 0)
                    {
                        PRINT_NOW( "R2_COMMANDS_11", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "R2_COMMANDS_1", 7500, 1 );
                    };;;;;;;
                    SETTIMERA( 0 );
                    SETTIMERB( 0 );
                    l_U547 = 0;
                    l_U548 = 0;
                }
                SETTIMERA( 0 );
                l_U512 = 1;
            }
        }
    }
    return;
}

void sub_17910(unknown uParam0, unknown uParam1)
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

int sub_20513()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_21121()
{
    if (l_U513 == 1)
    {
        if ((NOT (IS_CHAR_DEAD( l_U660 ))) AND (NOT (IS_CAR_DEAD( l_U711 ))))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U660, l_U711 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U681 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U660, ref l_U681 );
                    CHANGE_BLIP_COLOUR( l_U681, 3 );
                }
                TASK_ENTER_CAR_AS_PASSENGER( l_U660, l_U711, -2, 0 );
                PRINT_NOW( "R2_COMMANDS_2", 7500, 1 );
                l_U513 = 0;
            }
        }
    }
    return;
}

void sub_21304()
{
    if (l_U513 == 0)
    {
        if ((NOT (IS_CHAR_DEAD( l_U660 ))) AND (NOT (IS_CAR_DEAD( l_U711 ))))
        {
            if ((IS_CHAR_IN_CAR( l_U754, l_U711 )) AND (IS_CHAR_IN_CAR( l_U660, l_U711 )))
            {
                if (DOES_BLIP_EXIST( l_U681 ))
                {
                    REMOVE_BLIP( l_U681 );
                }
                if (l_U527 == 1)
                {
                    PRINT_NOW( "R2_COMMANDS_7", 7500, 1 );
                }
                else if (l_U523 == 1)
                {
                    if (DOES_BLIP_EXIST( l_U676 ))
                    {
                        PRINT_NOW( "R2_COMMANDS_12", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "R2_COMMANDS_10", 7500, 1 );
                    }
                }
                else if (l_U535 == 0)
                {
                    PRINT_NOW( "R2_COMMANDS_11", 7500, 1 );
                }
                else
                {
                    PRINT_NOW( "R2_COMMANDS_1", 7500, 1 );
                };;;
                WAIT( 3000 );
                l_U513 = 1;
            }
        }
    }
    return;
}

void sub_21661()
{
    if ((l_U501 == 0) AND (IS_CAR_DEAD( l_U711 )))
    {
        if (DOES_CHAR_EXIST( l_U660 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U660 )))
            {
                SET_CHAR_HEALTH( l_U660, 10000 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U660, 0 );
                SET_CHAR_PROOFS( l_U660, 1, 1, 1, 1, 1 );
                sub_9329( "R2_WRECK", 0, 1, ref l_U654, 6, 1 );
                while ((NOT (IS_CAR_IN_WATER( l_U711 ))) AND (sub_10310( l_U654 )))
                {
                    WAIT( 0 );
                }
            }
        }
        sub_21843();
        l_U646 = 1;
        PRINT( "R2_FAIL_2", 7500, 1 );
        SETTIMERA( 0 );
        while ((TIMERA() < 7000) || (NOT (sub_22128( 1, 0 ))))
        {
            WAIT( 0 );
        }
        sub_22444();
        l_U481 = -1;
        l_U501 = 1;
        l_U544 = 1;
    }
    if ((l_U501 == 0) AND (NOT (IS_CAR_DEAD( l_U711 ))))
    {
        if ((NOT (IS_VEH_DRIVEABLE( l_U711 ))) || (sub_24606( l_U711 )))
        {
            if (DOES_CHAR_EXIST( l_U660 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U660 )))
                {
                    sub_11424( ref l_U654, 0 );
                    SET_CHAR_HEALTH( l_U660, 10000 );
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U660, 0 );
                    SET_CHAR_PROOFS( l_U660, 1, 1, 1, 1, 1 );
                    if (IS_CHAR_IN_CAR( l_U660, l_U711 ))
                    {
                        sub_9329( "R2_WRECK", 0, 1, ref l_U654, 6, 1 );
                    }
                    while ((NOT (IS_CAR_IN_WATER( l_U711 ))) AND (sub_10310( l_U654 )))
                    {
                        WAIT( 0 );
                    }
                }
            }
            sub_21843();
            l_U646 = 1;
            PRINT( "R2_FAIL_2", 7500, 1 );
            SETTIMERA( 0 );
            while ((TIMERA() < 7000) || (NOT (sub_22128( 1, 0 ))))
            {
                WAIT( 0 );
            }
            sub_22444();
            l_U481 = -1;
            l_U501 = 1;
            l_U544 = 1;
        }
    }
    return;
}

void sub_21843()
{
    if (DOES_BLIP_EXIST( l_U676 ))
    {
        REMOVE_BLIP( l_U676 );
    }
    if (DOES_BLIP_EXIST( l_U677 ))
    {
        REMOVE_BLIP( l_U677 );
    }
    if (DOES_BLIP_EXIST( l_U678 ))
    {
        REMOVE_BLIP( l_U678 );
    }
    if (DOES_BLIP_EXIST( l_U679 ))
    {
        SET_ROUTE( l_U679, 0 );
        REMOVE_BLIP( l_U679 );
    }
    if (DOES_BLIP_EXIST( l_U680 ))
    {
        REMOVE_BLIP( l_U680 );
    }
    if (DOES_BLIP_EXIST( l_U681 ))
    {
        REMOVE_BLIP( l_U681 );
    }
    if (DOES_BLIP_EXIST( l_U682 ))
    {
        SET_ROUTE( l_U682, 0 );
        REMOVE_BLIP( l_U682 );
    }
    return;
}

int sub_22128(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_5607() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5607(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_5607() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5607(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_5607()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_5607() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5607() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5815() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5815() )))
    {
        return 0;
    }
    return 1;
}

void sub_22444()
{
    unknown uVar2;
    unknown uVar3;
    boolean bVar4;
    int[3] iVar5;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    if (NOT (IS_CHAR_DEAD( l_U660 )))
    {
        SET_CHAR_PROOFS( l_U660, 1, 1, 1, 1, 1 );
    }
    while (NOT (sub_22128( 1, 0 )))
    {
        WAIT( 0 );
    }
    array(ref iVar5, 3);
    g_U8086 = 1;
    DO_SCREEN_FADE_OUT( 500 );
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    SET_PLAYER_CONTROL_ADVANCED( l_U755, 0, 1, 1 );
    if (NOT (DOES_CHAR_EXIST( l_U660 )))
    {
        sub_7149( 0, ref l_U660, l_U708._fU0 + 0.50000000, l_U708._fU4, l_U708._fU8, 165.43760000 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U660, 0 );
        sub_5656( 1, l_U660, "ROMAN", 0 );
    }
    CLEAR_AREA( 837.84930000, -282.71140000, 14.51590000, 30.00000000, 1 );
    SWITCH_ROADS_OFF( 821.25000000, -455.20000000, 11.15000000, 841.89000000, -252.34000000, 16.74000000 );
    REQUEST_MODEL( -713569950 );
    REQUEST_MODEL( 134077503 );
    while ((NOT (HAS_MODEL_LOADED( 134077503 ))) || (NOT (HAS_MODEL_LOADED( -713569950 ))))
    {
        PRINTSTRING( "Waiting on models" );
        WAIT( 0 );
    }
    CREATE_CAR( -713569950, 837.84930000, -282.71140000, 14.51590000, ref uVar3, 1 );
    SET_CAR_HEADING( uVar3, 359.89610000 );
    SET_CAR_ENGINE_ON( uVar3, 1, 1 );
    if (NOT (IS_CHAR_DEAD( l_U660 )))
    {
        SET_CHAR_HEALTH( l_U660, 200 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U660 );
        if (IS_CHAR_IN_ANY_CAR( l_U660 ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U660, 840.88820000, -279.45950000, 14.66300000 );
        }
        else
        {
            SET_CHAR_COORDINATES( l_U660, 840.88820000, -279.45950000, 14.66300000 );
        }
        SET_CHAR_HEADING( l_U660, 133.25620000 );
    }
    else
    {
        sub_7149( 0, ref l_U660, 840.88820000, -279.45950000, 14.66300000, 133.25620000 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U660, 0 );
        sub_5656( 1, l_U660, "ROMAN", 0 );
        while (NOT (DOES_CHAR_EXIST( l_U660 )))
        {
            WAIT( 0 );
        }
    }
    if (IS_CHAR_IN_ANY_CAR( l_U754 ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( l_U754, 840.68160000, -281.83720000, 14.69920000 );
    }
    else
    {
        SET_CHAR_COORDINATES( l_U754, 840.68160000, -281.83720000, 14.69920000 );
    }
    SET_CHAR_HEADING( l_U754, 61.91550000 );
    CREATE_CAM( 14, ref uVar9 );
    CREATE_CAM( 14, ref uVar10 );
    CREATE_CAM( 14, ref uVar11 );
    CREATE_CAM( 3, ref l_U733 );
    SET_CAM_POS( uVar9, 833.73310000, -281.40850000, 15.79864000 );
    SET_CAM_ROT( uVar9, 2.22770700, -0.00000000, -85.35654000 );
    SET_CAM_FOV( uVar9, 55.00000000 );
    SET_CAM_PROPAGATE( uVar9, 1 );
    SET_CAM_ACTIVE( uVar9, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    bVar4 = true;
    SETTIMERA( 0 );
    DELETE_CAR( ref l_U711 );
    CLEAR_PRINTS();
    LOAD_SCENE( 837.84930000, -282.71140000, 14.51590000 );
    DO_SCREEN_FADE_IN( 500 );
    if (NOT (IS_CAR_DEAD( uVar3 )))
    {
        CREATE_CHAR_INSIDE_CAR( uVar3, 26, 134077503, ref uVar2 );
        TASK_CAR_DRIVE_WANDER( uVar2, uVar3, 10.00000000, 3 );
    }
    while (bVar4)
    {
        WAIT( 0 );
        if ((iVar5[0] == 0) AND (TIMERA() > 2000))
        {
            UNPOINT_CAM( uVar10 );
            SET_CAM_POS( uVar10, 833.73310000, -281.40850000, 15.79864000 );
            SET_CAM_ROT( uVar10, 2.22770700, -0.00000000, -85.35654000 );
            SET_CAM_FOV( uVar10, 55.00000000 );
            UNPOINT_CAM( uVar11 );
            SET_CAM_POS( uVar11, 833.73310000, -281.40850000, 15.79864000 );
            SET_CAM_ROT( uVar11, 2.22770700, -0.00000000, -85.35654000 );
            SET_CAM_FOV( uVar11, 48.00000000 );
            SET_CAM_INTERP_STYLE_CORE( l_U733, uVar10, uVar11, 9000, 0 );
            SET_CAM_PROPAGATE( uVar9, 0 );
            SET_CAM_PROPAGATE( l_U733, 1 );
            SET_CAM_ACTIVE( l_U733, 1 );
            SETTIMERA( 0 );
            iVar5[0] = 1;
        }
        if ((iVar5[0] == 1) AND ((iVar5[1] == 0) AND (TIMERA() > 3000)))
        {
            CLEAR_PRINTS();
            sub_23797( "R2_WRECK2", ref l_U654, 6, 1 );
            SETTIMERA( 0 );
            iVar5[1] = 1;
        }
        if ((iVar5[1] == 1) AND ((iVar5[2] == 0) AND (TIMERA() > 6000)))
        {
            SET_CAM_PROPAGATE( uVar9, 1 );
            SET_CAM_ACTIVE( uVar9, 1 );
            SET_CAM_PROPAGATE( l_U733, 0 );
            SET_CAM_ACTIVE( l_U733, 0 );
            SET_CAM_POS( uVar9, 842.27570000, -290.29130000, 15.26637000 );
            SET_CAM_ROT( uVar9, 15.30651000, -0.00000000, 39.80610000 );
            DELETE_CAR( ref uVar3 );
            DELETE_CHAR( ref uVar2 );
            if (NOT (IS_CHAR_INJURED( l_U660 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U660, 820.03660000, -265.76590000, 14.30270000, 3, 15000, 0.50000000 );
            }
            SETTIMERA( 0 );
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            iVar5[2] = 1;
        }
        if (((TIMERA() > 1000) AND ((IS_SCREEN_FADED_IN()) AND (sub_20513()))) || ((NOT (sub_10310( l_U654 ))) AND ((iVar5[2] == 1) AND (TIMERA() > 7000))))
        {
            bVar4 = false;
        }
    }
    SWITCH_ROADS_BACK_TO_ORIGINAL( 821.25000000, -455.20000000, 11.15000000, 841.89000000, -252.34000000, 16.74000000 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -713569950 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 134077503 );
    DO_SCREEN_FADE_OUT( 500 );
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    if (DOES_VEHICLE_EXIST( uVar3 ))
    {
        DELETE_CAR( ref uVar3 );
    }
    if (DOES_CHAR_EXIST( uVar2 ))
    {
        DELETE_CHAR( ref uVar2 );
    }
    SET_CAM_PROPAGATE( uVar9, 0 );
    SET_CAM_ACTIVE( uVar9, 0 );
    SET_CAM_PROPAGATE( l_U733, 0 );
    SET_CAM_ACTIVE( l_U733, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    DESTROY_CAM( uVar9 );
    DESTROY_CAM( l_U733 );
    DESTROY_ALL_CAMS();
    sub_11424( ref l_U654, 0 );
    DELETE_CHAR( ref l_U660 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    LOAD_SCENE( 837.84930000, -282.71140000, 14.51590000 );
    DO_SCREEN_FADE_IN( 500 );
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    g_U8086 = 0;
    SET_PLAYER_CONTROL_ADVANCED( l_U755, 1, 1, 1 );
    return;
}

void sub_23797(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_23820( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_23820(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9414( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_24606(unknown uParam0)
{
    if ((CHECK_STUCK_TIMER( uParam0, 0, 5000 )) || ((CHECK_STUCK_TIMER( uParam0, 1, 40000 )) || ((CHECK_STUCK_TIMER( uParam0, 2, 30000 )) || (CHECK_STUCK_TIMER( uParam0, 3, 60000 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_25019()
{
    if ((l_U501 == 0) AND ((IS_CHAR_INJURED( l_U660 )) || (IS_CHAR_DEAD( l_U660 ))))
    {
        sub_21843();
        sub_25078( 0, l_U660, 0 );
        PRINT_NOW( "R2_FAIL_3", 7500, 1 );
        l_U481 = -1;
        l_U501 = 1;
        l_U544 = 1;
    }
    if ((l_U501 == 0) AND (NOT (IS_CHAR_INJURED( l_U660 ))))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U754, l_U660, 150.00000000, 150.00000000, 100.00000000, 0 )))
        {
            sub_21843();
            PRINT_NOW( "R2_FAIL_9", 7500, 1 );
            l_U481 = -1;
            l_U501 = 1;
            l_U544 = 1;
        }
    }
    return;
}

void sub_25078(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_25301()
{
    if (l_U536 == 0)
    {
        SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
        sub_25335( 0 );
        PRINT_HELP_FOREVER( "R2_ARRIVE_4" );
        SETTIMERA( 0 );
        l_U536 = 1;
    }
    if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((TIMERA() > 7500) AND ((l_U536 == 1) AND (l_U517 == 0))))
    {
        CLEAR_HELP();
        if (IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 ))
        {
            if (NOT (LOCATE_CHAR_IN_CAR_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U679 )))
                {
                    ADD_BLIP_FOR_COORD( l_U702._fU0, l_U702._fU4, l_U702._fU8, ref l_U679 );
                    CHANGE_BLIP_COLOUR( l_U679, 5 );
                    SET_ROUTE( l_U679, 1 );
                }
                PRINT_NOW( "R2_COMMANDS_5", 7500, 1 );
                l_U550 = 0;
                l_U554 = 1;
            }
            else
            {
                PRINT_NOW( "R2_COMMANDS_4", 7500, 1 );
            }
        }
        SETTIMERA( 0 );
        l_U517 = 1;
    }
    if ((l_U518 == 0) AND (l_U517 == 1))
    {
        if (NOT (IS_CAR_DEAD( l_U711 )))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (NOT (LOCATE_CHAR_IN_CAR_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
                {
                    LOCATE_CHAR_IN_CAR_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8 + (2.50000000 / 2), 2.50000000, 2.50000000, 2.50000000, 1 );
                    if ((IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 )) AND (NOT (DOES_BLIP_EXIST( l_U679 ))))
                    {
                        ADD_BLIP_FOR_COORD( l_U702._fU0, l_U702._fU4, l_U702._fU8, ref l_U679 );
                        CHANGE_BLIP_COLOUR( l_U679, 5 );
                        SET_ROUTE( l_U679, 1 );
                    }
                }
                else if (DOES_BLIP_EXIST( l_U679 ))
                {
                    SET_ROUTE( l_U679, 0 );
                    REMOVE_BLIP( l_U679 );
                }
                if ((l_U534 == 0) AND (TIMERA() > 7500))
                {
                    PRINT_HELP_FOREVER( "R2_MISC_2" );
                    l_U534 = 1;
                    SETTIMERA( 0 );
                }
                if ((l_U538 == 0) AND ((l_U534 == 1) AND (TIMERA() > 7500)))
                {
                    PRINTSTRING( "\n ----> Create Extra Car Bobcat <---- \n\n" );
                    REQUEST_MODEL( 1075851868 );
                    while (NOT (HAS_MODEL_LOADED( 1075851868 )))
                    {
                        WAIT( 0 );
                    }
                    REQUEST_CAR_RECORDING( 632 );
                    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 632 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1075851868, 1271.85800000, 58.27740000, 36.25650000, ref l_U716, 1 );
                    SET_CAR_HEADING( l_U716, 358.72730000 );
                    while (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))
                    {
                        WAIT( 0 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U716 )))
                    {
                        CREATE_RANDOM_CHAR_AS_DRIVER( l_U716, ref l_U664 );
                    }
                    WAIT( 100 );
                    if (NOT (IS_CAR_DEAD( l_U716 )))
                    {
                        START_PLAYBACK_RECORDED_CAR_USING_AI( l_U716, 632 );
                    }
                    l_U538 = 1;
                    SETTIMERA( 0 );
                }
                if ((l_U538 == 1) AND ((l_U534 == 1) AND (TIMERA() > 5000)))
                {
                    PRINTSTRING( "\n ----> Stage after Extra Car Bobcat <---- \n\n" );
                    sub_26586();
                    l_U518 = 1;
                    WAIT( 5000 );
                    CLEAR_HELP();
                    SETTIMERA( 0 );
                }
            }
        }
    }
    if (l_U518 == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U711 )))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (NOT (LOCATE_CHAR_IN_CAR_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
                {
                    LOCATE_CHAR_IN_CAR_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8 + (2.50000000 / 2), 2.50000000, 2.50000000, 2.50000000, 1 );
                    if ((IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 )) AND (NOT (DOES_BLIP_EXIST( l_U679 ))))
                    {
                        ADD_BLIP_FOR_COORD( l_U702._fU0, l_U702._fU4, l_U702._fU8, ref l_U679 );
                        CHANGE_BLIP_COLOUR( l_U679, 5 );
                        SET_ROUTE( l_U679, 1 );
                    }
                }
                else if (l_U539 == 0)
                {
                    PRINTSTRING( "\n ----> Create Extra Car Taxi <---- \n\n" );
                    GET_CURRENT_TAXI_CAR_MODEL( ref l_U718 );
                    REQUEST_CAR_RECORDING( 633 );
                    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 633 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( l_U718, 1195.37400000, 57.04500000, 34.55490000, ref l_U717, 1 );
                    SET_CAR_HEADING( l_U717, 1.48170000 );
                    while (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))
                    {
                        WAIT( 0 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U717 )))
                    {
                        CREATE_RANDOM_CHAR_AS_DRIVER( l_U717, ref l_U665 );
                    }
                    WAIT( 100 );
                    if (NOT (IS_CAR_DEAD( l_U717 )))
                    {
                        START_PLAYBACK_RECORDED_CAR_USING_AI( l_U717, 633 );
                    }
                    l_U539 = 1;
                    SETTIMERA( 0 );
                }
                if ((l_U539 == 1) AND (TIMERA() > 7500))
                {
                    PRINTSTRING( "\n ----> Stage after Extra Car Taxi <---- \n\n" );
                    if (DOES_BLIP_EXIST( l_U679 ))
                    {
                        SET_ROUTE( l_U679, 0 );
                        REMOVE_BLIP( l_U679 );
                    }
                    if (TIMERA() > 100)
                    {
                        l_U481++;
                    }
                }
            }
        }
    }
    if (l_U517 == 1)
    {
        sub_32329();
        sub_11349();
        sub_11841();
        if ((l_U538 == 1) AND (NOT (IS_CAR_DEAD( l_U716 ))))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U716 )))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1075851868 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U716 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U664 );
            }
        }
        if ((l_U539 == 1) AND (NOT (IS_CAR_DEAD( l_U717 ))))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U717 )))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U718 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U717 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U665 );
            }
        }
    }
    if (l_U670[0] == 0)
    {
        sub_32986();
    }
    if (l_U670[1] == 0)
    {
        sub_33432();
    }
    if (l_U670[2] == 0)
    {
        sub_33894();
    }
    sub_21661();
    if (l_U516 == 1)
    {
        sub_34372();
    }
    if (l_U516 == 0)
    {
        sub_25019();
    }
    return;
}

void sub_25335(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15946[uParam0]._fU132._fU0)
    {
        if (g_U91._fU0 == 1012)
        {
            g_U91._fU92 = 1;
        }
        g_U15946[uParam0]._fU132._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15946[uParam0]._fU132._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        g_U91._fU520 = 0;
    }
    return;
}

void sub_26586()
{
    while (l_U651 == 0)
    {
        SETTIMERA( 0 );
        while (TIMERA() < 5000)
        {
            WAIT( 0 );
        }
        if (sub_26668( 0, "R2_CHECK", "R2AUD", 15000, 0 ))
        {
            l_U650 = 1;
        }
        if (l_U650)
        {
            while (sub_30535() == 1)
            {
                if (l_U557[0] == 0)
                {
                    SETTIMERA( 0 );
                    l_U557[0] = 1;
                }
                if ((l_U557[1] == 0) AND ((l_U557[0] == 1) AND (TIMERA() > 1000)))
                {
                    CLEAR_HELP();
                    PRINT_HELP( "R2_ANSWERTUT_1" );
                    SETTIMERA( 0 );
                    l_U557[1] = 1;
                    l_U557[2] = 1;
                }
                if ((l_U557[3] == 0) AND ((l_U557[2] == 1) AND (TIMERA() > 6000)))
                {
                    CLEAR_HELP();
                    PRINT_HELP_FOREVER( "R2_ANSWERTUT_3" );
                    l_U557[3] = 1;
                }
                if ((l_U557[0] == 1) AND ((l_U557[4] == 0) AND (sub_30880() == 1007)))
                {
                    SETTIMERA( 0 );
                    l_U557[4] = 1;
                }
                if (sub_30952())
                {
                    CLEAR_HELP();
                }
                sub_11349();
                sub_11841();
                sub_21661();
                WAIT( 0 );
            }
            switch (sub_31042())
            {
                case 1:
                case 2: break;
                case 4:
                l_U651 = 1;
                break;
                case 5:
                l_U651 = 1;
                break;
                case 6:
                l_U651 = 1;
                break;
            }
            if ((IS_CONTROL_PRESSED( 2, 22 )) || (IS_BUTTON_PRESSED( 0, 9 )))
            {
                l_U651 = 1;
            }
            if (l_U651)
            {
                while (NOT (sub_31229( 0 )))
                {
                    WAIT( 0 );
                }
                CLEAR_HELP();
                PRINT_HELP_FOREVER( "R2_ANSWERTUT_4" );
                WAIT( 2000 );
            }
        }
        sub_11349();
        sub_11841();
        sub_21661();
        if (l_U501 == 1)
        {
            l_U651 = 1;
        }
    }
    return;
}

void sub_26668(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_26728( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_26728(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_9513( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_9513( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_5815() )))
    {
        sub_9513( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5607() ))) AND (IS_CHAR_IN_ANY_CAR( sub_5607() )))
    {
        sub_9513( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_9513( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_27243()))
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
                sub_9513( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_27243()))
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
    sub_28615( uParam0, ref g_U91._fU176 );
    sub_29996( ref g_U91._fU160 );
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
        sub_5780( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_27243()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_27300())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_27300()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_5815() )))
    {
        sub_9513( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_9513( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_9513( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_9513( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_5815() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_5607() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_5607(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_9513( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_5607() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_9513( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_9513( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5815() )))
    {
        sub_9513( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_28615(int iParam0, unknown uParam1)
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

void sub_29996(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_30535()
{
    if (sub_747())
    {
        if (sub_30554())
        {
            return 1;
        }
    }
    return 0;
}

int sub_30554()
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

void sub_30880()
{
    return g_U91._fU0;
}

int sub_30952()
{
    if ((g_U91._fU0 == 1008) || (g_U91._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_31042()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_31229(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_5607(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_9513( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_32329()
{
    if (l_U550 == 1)
    {
        if (NOT (IS_CAR_DEAD( l_U711 )))
        {
            if ((NOT (LOCATE_CHAR_IN_CAR_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8, 2.50000000, 2.50000000, 2.50000000, 0 ))) AND (IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U679 )))
                {
                    ADD_BLIP_FOR_COORD( l_U702._fU0, l_U702._fU4, l_U702._fU8, ref l_U679 );
                    CHANGE_BLIP_COLOUR( l_U679, 5 );
                    SET_ROUTE( l_U679, 1 );
                }
                PRINT_NOW( "R2_COMMANDS_5", 7500, 1 );
                l_U550 = 0;
                l_U554 = 1;
                SETTIMERA( 0 );
            }
        }
    }
    if ((l_U550 == 0) AND (NOT (IS_CAR_DEAD( l_U711 ))))
    {
        if ((IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 )) AND (LOCATE_CHAR_IN_CAR_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
        {
            if ((l_U521 == 0) AND ((l_U501 == 0) AND (l_U520 == 1)))
            {
                PRINT_NOW( "R2_CALLTUT_0", 7500, 1 );
                PRINTSTRING( "\n\n PHONE ROMAN 928 \n\n" );
            }
            else if (l_U521 == 0)
            {
                PRINT_NOW( "R2_COMMANDS_4", 7500, 1 );
            }
            l_U550 = 1;
        }
    }
    return;
}

void sub_32986()
{
    GET_GAME_VIEWPORT_ID( ref l_U674 );
    if ((CAN_CREATE_RANDOM_CHAR( 0, 0 )) AND (NOT (CAM_IS_SPHERE_VISIBLE( l_U674, 1215.70000000, 123.19080000, 34.20330000, 2.00000000 ))))
    {
        if (NOT (IS_CHAR_DEAD( l_U666[2] )))
        {
            if (IS_CHAR_MALE( l_U666[2] ))
            {
                if (CAN_CREATE_RANDOM_CHAR( 0, 1 ))
                {
                    CREATE_RANDOM_FEMALE_CHAR( 1215.70000000, 123.19080000, 34.20330000, ref l_U666[0] );
                }
            }
            else if (CAN_CREATE_RANDOM_CHAR( 0, 1 ))
            {
                CREATE_RANDOM_MALE_CHAR( 1215.70000000, 123.19080000, 34.20330000, ref l_U666[0] );
            }
        }
        else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
        {
            CREATE_RANDOM_CHAR( 1215.70000000, 123.19080000, 34.20330000, ref l_U666[0] );
        }
        if (NOT (IS_CHAR_INJURED( l_U666[0] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U737 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1223.15200000, 98.69760000, 36.59140000, 2, -2, 1.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1257.21200000, 122.43100000, 37.51800000, 2, -2, 1.50000000 );
            CLOSE_SEQUENCE_TASK( l_U737 );
            TASK_PERFORM_SEQUENCE( l_U666[0], l_U737 );
            CLEAR_SEQUENCE_TASK( l_U737 );
            SET_CHAR_KEEP_TASK( l_U666[0], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U666[0] );
        }
        l_U670[0] = 1;
    }
    return;
}

void sub_33432()
{
    GET_GAME_VIEWPORT_ID( ref l_U674 );
    if ((CAN_CREATE_RANDOM_CHAR( 0, 0 )) AND (NOT (CAM_IS_SPHERE_VISIBLE( l_U674, 1256.25600000, 73.37220000, 37.59150000, 2.00000000 ))))
    {
        if (NOT (IS_CHAR_DEAD( l_U666[0] )))
        {
            if (IS_CHAR_MALE( l_U666[0] ))
            {
                if (CAN_CREATE_RANDOM_CHAR( 0, 1 ))
                {
                    CREATE_RANDOM_FEMALE_CHAR( 1256.25600000, 73.37220000, 37.59150000, ref l_U666[1] );
                }
            }
            else if (CAN_CREATE_RANDOM_CHAR( 0, 1 ))
            {
                CREATE_RANDOM_MALE_CHAR( 1256.25600000, 73.37220000, 37.59150000, ref l_U666[1] );
            }
        }
        else
        {
            CREATE_RANDOM_CHAR( 1256.25600000, 73.37220000, 37.59150000, ref l_U666[1] );
        }
        if (NOT (IS_CHAR_INJURED( l_U666[1] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U737 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1236.30500000, 80.59380000, 37.11270000, 2, -2, 1.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1197.74300000, 79.63450000, 35.84300000, 2, -2, 1.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1198.62300000, 28.50060000, 34.18750000, 2, -2, 1.50000000 );
            CLOSE_SEQUENCE_TASK( l_U737 );
            TASK_PERFORM_SEQUENCE( l_U666[1], l_U737 );
            CLEAR_SEQUENCE_TASK( l_U737 );
            SET_CHAR_KEEP_TASK( l_U666[1], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U666[1] );
        }
        l_U670[1] = 1;
    }
    return;
}

void sub_33894()
{
    GET_GAME_VIEWPORT_ID( ref l_U674 );
    if ((CAN_CREATE_RANDOM_CHAR( 0, 0 )) AND (NOT (CAM_IS_SPHERE_VISIBLE( l_U674, 1198.03800000, 108.80740000, 35.80800000, 2.00000000 ))))
    {
        if (NOT (IS_CHAR_DEAD( l_U666[1] )))
        {
            if (IS_CHAR_MALE( l_U666[1] ))
            {
                if (CAN_CREATE_RANDOM_CHAR( 0, 1 ))
                {
                    CREATE_RANDOM_FEMALE_CHAR( 1198.03800000, 108.80740000, 35.80800000, ref l_U666[2] );
                }
            }
            else if (CAN_CREATE_RANDOM_CHAR( 0, 1 ))
            {
                CREATE_RANDOM_MALE_CHAR( 1198.03800000, 108.80740000, 35.80800000, ref l_U666[2] );
            }
        }
        else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
        {
            CREATE_RANDOM_CHAR( 1198.03800000, 108.80740000, 35.80800000, ref l_U666[2] );
        }
        if (NOT (IS_CHAR_INJURED( l_U666[2] )))
        {
            OPEN_SEQUENCE_TASK( ref l_U737 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1212.27400000, 79.35650000, 36.18560000, 2, -2, 1.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1255.67600000, 79.81040000, 37.81100000, 2, -2, 1.50000000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1300.12800000, 97.46360000, 35.19480000, 2, -2, 1.50000000 );
            CLOSE_SEQUENCE_TASK( l_U737 );
            TASK_PERFORM_SEQUENCE( l_U666[2], l_U737 );
            CLEAR_SEQUENCE_TASK( l_U737 );
            SET_CHAR_KEEP_TASK( l_U666[2], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U666[2] );
        }
        l_U670[2] = 1;
    }
    return;
}

void sub_34372()
{
    if ((l_U501 == 0) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8, 250.00000000, 250.00000000, 250.00000000, 0 ))))
    {
        sub_21843();
        if (NOT (IS_CHAR_DEAD( l_U661[0] )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U661[0] )))
            {
                DELETE_CHAR( ref l_U661[0] );
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U661[0] );
                REMOVE_CHAR_ELEGANTLY( ref l_U661[0] );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U661[1] )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U661[1] )))
            {
                DELETE_CHAR( ref l_U661[1] );
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U661[1] );
                REMOVE_CHAR_ELEGANTLY( ref l_U661[1] );
            }
        }
        PRINT_NOW( "R2_FAIL_6", 7500, 1 );
        sub_34651( 2 );
        l_U481 = -1;
        l_U501 = 1;
    }
    return;
}

void sub_34651(int iParam0)
{
    if (iParam0 == 1)
    {
        while (l_U652 == 0)
        {
            if (sub_34702( 0, "R2_BEATUP", "R2AUD" ))
            {
                l_U652 = 1;
            }
            WAIT( 0 );
        }
    }
    else if (iParam0 == 2)
    {
        while (l_U652 == 0)
        {
            if (sub_34702( 0, "R2_NOWARN", "R2AUD" ))
            {
                l_U652 = 1;
            }
            WAIT( 0 );
        }
    }
    WAIT( 1000 );
    while ((sub_34919( 0, 1 )) || (sub_34883()))
    {
        WAIT( 0 );
    }
    return;
}

void sub_34702(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_26728( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_34883()
{
    if (g_U555 == 1)
    {
        return 1;
    }
    return 0;
}

int sub_34919(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_9513( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_9513( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U91._fU60 == iParam0) AND (g_U91._fU0 == 1005))
    {
        if (bParam1)
        {
            if ((NOT g_U91._fU372) AND (g_U91._fU508 >= 4))
            {
                return 1;
            }
        }
        else if (NOT g_U91._fU368)
        {
            return 1;
        }
    }
    return 0;
}

void sub_35298()
{
    float fVar2;

    if (l_U520 == 0)
    {
        CLEAR_HELP();
        sub_35326();
        sub_35810();
        if ((NOT (IS_CAR_DEAD( l_U712 ))) AND (NOT (IS_CAR_DEAD( l_U711 ))))
        {
            GET_CAR_HEADING( l_U711, ref l_U493 );
            if (l_U493 > 180)
            {
                CLEAR_AREA( 1262.13700000, 119.77030000, 38.76520000, 5.00000000, 1 );
                SET_CAR_COORDINATES( l_U712, 1262.13700000, 119.77030000, 38.76520000 );
                SET_CAR_HEADING( l_U712, 165.19620000 );
                REQUEST_CAR_RECORDING( 626 );
                while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 626 )))
                {
                    WAIT( 0 );
                }
            }
            else
            {
                CLEAR_AREA( 1193.44500000, 55.26230000, 35.07400000, 5.00000000, 1 );
                SET_CAR_COORDINATES( l_U712, 1193.44500000, 55.26230000, 35.07400000 );
                SET_CAR_HEADING( l_U712, 359.85820000 );
                REQUEST_CAR_RECORDING( 627 );
                while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 627 )))
                {
                    WAIT( 0 );
                }
            }
        }
        WAIT( 100 );
        if ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND ((NOT (IS_CHAR_DEAD( l_U661[0] ))) AND (NOT (IS_CAR_DEAD( l_U712 )))))
        {
            TASK_WARP_CHAR_INTO_CAR_AS_DRIVER( l_U661[0], l_U712 );
            TASK_WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U661[1], l_U712, 0 );
            while (l_U543 == 0)
            {
                if ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND ((NOT (IS_CHAR_DEAD( l_U661[0] ))) AND (NOT (IS_CAR_DEAD( l_U712 )))))
                {
                    if ((IS_CHAR_IN_CAR( l_U661[1], l_U712 )) AND (IS_CHAR_IN_CAR( l_U661[0], l_U712 )))
                    {
                        l_U543 = 1;
                    }
                    WAIT( 0 );
                }
            }
            if ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND ((NOT (IS_CHAR_DEAD( l_U661[0] ))) AND ((NOT (IS_CAR_DEAD( l_U711 ))) AND (NOT (IS_CAR_DEAD( l_U712 ))))))
            {
                GET_CAR_HEADING( l_U711, ref l_U493 );
                if (l_U493 > 180)
                {
                    REQUEST_CAR_RECORDING( 626 );
                    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 626 )))
                    {
                        WAIT( 0 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U712 )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U712, 626 );
                        SET_PLAYBACK_SPEED( l_U712, 0.80000000 );
                    }
                }
                else
                {
                    REQUEST_CAR_RECORDING( 627 );
                    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 627 )))
                    {
                        WAIT( 0 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U712 )))
                    {
                        START_PLAYBACK_RECORDED_CAR( l_U712, 627 );
                        SET_PLAYBACK_SPEED( l_U712, 0.80000000 );
                    }
                }
            }
        }
        if ((l_U538 == 1) AND (NOT (IS_CAR_DEAD( l_U716 ))))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U716 )))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1075851868 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U716 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U664 );
            }
        }
        if ((l_U539 == 1) AND (NOT (IS_CAR_DEAD( l_U717 ))))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U717 )))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U718 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U717 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U665 );
            }
        }
        if (l_U493 > 180)
        {
            while (l_U545 == 0)
            {
                if (NOT (IS_CHAR_DEAD( l_U661[0] )))
                {
                    if ((l_U501 == 1) || (LOCATE_CHAR_ANY_MEANS_3D( l_U661[0], 1256.97500000, 94.31590000, 37.78410000, 5.00000000, 5.00000000, 5.00000000, 0 )))
                    {
                        l_U545 = 1;
                    }
                }
                sub_11349();
                sub_11841();
                sub_21661();
                sub_37048();
                sub_42946();
                WAIT( 0 );
            }
        }
        else
        {
            while (l_U545 == 0)
            {
                if (NOT (IS_CHAR_DEAD( l_U661[0] )))
                {
                    if ((l_U501 == 1) || (LOCATE_CHAR_ANY_MEANS_3D( l_U661[0], 1200.55800000, 92.29230000, 35.90910000, 5.00000000, 5.00000000, 5.00000000, 0 )))
                    {
                        l_U545 = 1;
                    }
                }
                sub_11349();
                sub_11841();
                sub_21661();
                sub_37048();
                sub_42946();
                WAIT( 0 );
            }
        }
        SETTIMERA( 0 );
        while (TIMERA() < 2000)
        {
            sub_11349();
            sub_11841();
            sub_21661();
            sub_37048();
            sub_42946();
            WAIT( 0 );
        }
        if (l_U501 == 0)
        {
            sub_23797( "R2_TALK", ref l_U654, 6, 1 );
        }
        l_U546 = 1;
        SET_PLAYER_CONTROL_ADVANCED( l_U755, 1, 0, 1 );
        SETTIMERA( 0 );
        OPEN_SEQUENCE_TASK( ref l_U737 );
        TASK_LEAVE_ANY_CAR( 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1231.43100000, 80.35700000, 36.92040000, 2, 30000, 1.50000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1231.81200000, 73.76400000, 37.74920000, 2, 30000, 2.00000000 );
        CLOSE_SEQUENCE_TASK( l_U737 );
        if ((l_U501 == 0) AND (NOT (IS_CHAR_DEAD( l_U661[0] ))))
        {
            TASK_PERFORM_SEQUENCE( l_U661[0], l_U737 );
        }
        while (TIMERA() < 1500)
        {
            sub_11349();
            sub_11841();
            sub_21661();
            sub_37048();
            sub_42946();
            WAIT( 0 );
        }
        SETTIMERA( 0 );
        if ((l_U501 == 0) AND (NOT (IS_CHAR_DEAD( l_U661[1] ))))
        {
            TASK_PERFORM_SEQUENCE( l_U661[1], l_U737 );
        }
        CLEAR_SEQUENCE_TASK( l_U737 );
        if (NOT (IS_CAR_DEAD( l_U712 )))
        {
            LOCK_CAR_DOORS( l_U712, 2 );
        }
        if (l_U501 == 0)
        {
            while (sub_10310( l_U654 ))
            {
                WAIT( 0 );
                sub_11349();
                sub_11841();
                sub_21661();
                sub_37048();
                sub_42946();
            }
            sub_23797( "R2_ARRIVE", ref l_U654, 6, 1 );
        }
        if ((l_U501 == 0) AND ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND (NOT (IS_CHAR_DEAD( l_U661[0] )))))
        {
            TASK_LOOK_AT_CHAR( l_U661[0], l_U661[1], 4000, 0 );
            TASK_LOOK_AT_CHAR( l_U661[1], l_U661[0], 4000, 0 );
        }
        while (sub_10310( l_U654 ))
        {
            WAIT( 0 );
            sub_11349();
            sub_11841();
            sub_21661();
            sub_37048();
            sub_42946();
        }
        SETTIMERB( 0 );
        l_U520 = 1;
    }
    if (l_U552 == 0)
    {
        if ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND (NOT (IS_CHAR_DEAD( l_U661[0] ))))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( l_U661[1], 1231, 77, 38, 6.00000000, 6.00000000, 6.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U661[0], 1231, 77, 38, 6.00000000, 6.00000000, 6.00000000, 0 )))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 0, 0.00000000 );
                l_U552 = 1;
            }
        }
    }
    if ((l_U537 == 0) AND ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND (NOT (IS_CHAR_DEAD( l_U661[0] )))))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U661[1], 1231.81200000, 73.76400000, 37.74920000, 2.00000000, 2.00000000, 2.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U661[0], 1231.81200000, 73.76400000, 37.74920000, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 1, 0.00000000 );
            l_U537 = 1;
        }
    }
    if (l_U520 == 1)
    {
        if ((l_U537 == 0) AND ((NOT (IS_CAR_DEAD( l_U712 ))) AND ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND ((NOT (IS_CHAR_DEAD( l_U661[0] ))) AND (NOT (IS_CAR_DEAD( l_U711 )))))))
        {
            GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( 1231.44800000, 78.09839000, 36.92490000, 2.50000000, 0, 1, ref l_U714 );
            if (l_U714 != nil)
            {
                l_U551 = 1;
            }
            GET_CAR_COORDINATES( l_U712, ref l_U696._fU0, ref l_U696._fU4, ref l_U696._fU8 );
            if ((l_U501 == 0) AND (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U754, l_U712, 5.00000000, 5.00000000, 5.00000000, 0 ))))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U754, 1231.44800000, 78.09839000, 36.92490000, 3.00000000, 3.00000000, 3.00000000, 0 ))
                {
                    PRINTSTRING( "\n*\n*\n* ---> NIKO IN DOOR WAY <--- \n*\n*\n*\n" );
                    l_U653 = 1;
                }
                if (LOCATE_CAR_3D( l_U711, 1231.44800000, 78.09839000, 36.92490000, 3.00000000, 3.00000000, 3.00000000, 0 ))
                {
                    PRINTSTRING( "\n*\n*\n* ---> TAXI IN DOOR WAY <--- \n*\n*\n*\n" );
                    l_U653 = 1;
                }
                GET_GAME_TIMER( ref l_U486 );
                if (((l_U486 - l_U487) > 1000) AND (IS_CHAR_TOUCHING_VEHICLE( l_U661[0], l_U711 )))
                {
                    GET_GAME_TIMER( ref l_U487 );
                    l_U484++;
                    PRINTSTRING( "\n ---> AlbTouchCounter0 = " );
                    PRINTINT( l_U484 );
                    PRINTNL();
                    PRINTNL();
                    if (l_U484 > 3)
                    {
                        PRINTSTRING( "\n*\n*\n* ---> ALB[0] TOUCHING TAXI <--- \n*\n*\n*\n" );
                        l_U653 = 1;
                    }
                }
                GET_GAME_TIMER( ref l_U486 );
                if (((l_U486 - l_U488) > 1000) AND (IS_CHAR_TOUCHING_VEHICLE( l_U661[1], l_U711 )))
                {
                    GET_GAME_TIMER( ref l_U488 );
                    l_U485++;
                    PRINTSTRING( "\n ---> AlbTouchCounter1 = " );
                    PRINTINT( l_U485 );
                    PRINTNL();
                    PRINTNL();
                    if (l_U485 > 3)
                    {
                        PRINTSTRING( "\n*\n*\n* ---> ALB[1] TOUCHING TAXI <--- \n*\n*\n*\n" );
                        l_U653 = 1;
                    }
                }
                if (l_U551 == 1)
                {
                    PRINTSTRING( "\n*\n*\n* ---> Car Blocking Entrance <--- \n*\n*\n*\n" );
                    l_U653 = 1;
                }
                if (l_U653 == 1)
                {
                    sub_11424( ref l_U654, 0 );
                    sub_23797( "R2_ATTKDAR", ref l_U654, 6, 1 );
                    GET_CAR_COORDINATES( l_U712, ref l_U699._fU0, ref l_U699._fU4, ref l_U699._fU8 );
                    if ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND (NOT (IS_CAR_DEAD( l_U712 ))))
                    {
                        LOCK_CAR_DOORS( l_U712, 1 );
                        CLEAR_CHAR_TASKS( l_U661[1] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U661[1], 0 );
                        OPEN_SEQUENCE_TASK( ref l_U737 );
                        TASK_SWAP_WEAPON( 0, 1 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U699._fU0, l_U699._fU4, l_U699._fU8, 2, 3.00000000, 3.00000000, l_U754, 0 );
                        TASK_ENTER_CAR_AS_PASSENGER( 0, l_U712, 30000, 0 );
                        CLOSE_SEQUENCE_TASK( l_U737 );
                        TASK_PERFORM_SEQUENCE( l_U661[1], l_U737 );
                        CLEAR_SEQUENCE_TASK( l_U737 );
                        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U661[1], 1 );
                    }
                    if ((NOT (IS_CHAR_DEAD( l_U661[0] ))) AND (NOT (IS_CAR_DEAD( l_U712 ))))
                    {
                        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U661[0], 1 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U661[0], 0 );
                        CLEAR_CHAR_TASKS( l_U661[0] );
                        OPEN_SEQUENCE_TASK( ref l_U737 );
                        TASK_SWAP_WEAPON( 0, 1 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U699._fU0, l_U699._fU4, l_U699._fU8, 2, 3.00000000, 3.00000000, l_U754, 0 );
                        TASK_ENTER_CAR_AS_DRIVER( 0, l_U712, 30000 );
                        TASK_CAR_DRIVE_WANDER( 0, l_U712, 30.00000000, 2 );
                        CLOSE_SEQUENCE_TASK( l_U737 );
                        TASK_PERFORM_SEQUENCE( l_U661[0], l_U737 );
                        CLEAR_SEQUENCE_TASK( l_U737 );
                    }
                    while (sub_10310( l_U654 ))
                    {
                        WAIT( 0 );
                    }
                    sub_21843();
                    if ((IS_CHAR_DEAD( l_U661[1] )) || ((IS_CHAR_DEAD( l_U661[0] )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U661[1], l_U754, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U661[0], l_U754, 0 )))))
                    {
                        PRINT_NOW( "R2_FAIL_4", 7500, 1 );
                        sub_34651( 1 );
                    }
                    else if ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND (NOT (IS_CHAR_DEAD( l_U661[0] ))))
                    {
                        if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U754, 1231.81200000, 73.76400000, 37.74920000, 5.00000000, 5.00000000, 5.00000000, 0 ))) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U661[1], 1231.81200000, 73.76400000, 37.74920000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U661[0], 1231.81200000, 73.76400000, 37.74920000, 2.00000000, 2.00000000, 2.00000000, 0 ))))
                        {
                            PRINT_NOW( "R2_FAIL_6", 7500, 1 );
                            sub_34651( 2 );
                        }
                        else
                        {
                            PRINT_NOW( "R2_FAIL_7", 7500, 1 );
                            sub_34651( 1 );
                        }
                    }
                    l_U481 = -1;
                    l_U501 = 1;
                }
            }
        }
        if (NOT (IS_CAR_DEAD( l_U711 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8, 2.50000000, 2.50000000, 2.50000000, 0 )))
            {
                if ((IS_CHAR_IN_CAR( l_U754, l_U711 )) AND ((NOT (DOES_BLIP_EXIST( l_U678 ))) AND (NOT (DOES_BLIP_EXIST( l_U679 )))))
                {
                    ADD_BLIP_FOR_COORD( l_U702._fU0, l_U702._fU4, l_U702._fU8, ref l_U679 );
                    CHANGE_BLIP_COLOUR( l_U679, 5 );
                    SET_ROUTE( l_U679, 1 );
                }
                if (DOES_BLIP_EXIST( l_U679 ))
                {
                    LOCATE_CHAR_ANY_MEANS_3D( l_U754, l_U702._fU0, l_U702._fU4, l_U702._fU8 + (2.50000000 / 2), 2.50000000, 2.50000000, 2.50000000, 1 );
                }
                sub_11349();
                sub_11841();
                if ((l_U565[12] == 0) AND ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND ((NOT (IS_CHAR_DEAD( l_U661[0] ))) AND (TIMERB() > 60000))))
                {
                    if ((l_U501 == 0) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U661[1], 1231.81200000, 73.76400000, 37.74920000, 2.00000000, 2.00000000, 2.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U661[0], 1231.81200000, 73.76400000, 37.74920000, 2.00000000, 2.00000000, 2.00000000, 0 ))))
                    {
                        sub_21843();
                        PRINT_NOW( "R2_FAIL_6", 7500, 1 );
                        sub_34651( 2 );
                        l_U481 = -1;
                        l_U501 = 1;
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U679 ))
            {
                SET_ROUTE( l_U679, 0 );
                REMOVE_BLIP( l_U679 );
            }
            if (IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 ))
            {
                sub_47394();
            }
            sub_11349();
            sub_11841();
            if ((l_U565[12] == 0) AND ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND (NOT (IS_CHAR_DEAD( l_U661[0] )))))
            {
                if ((LOCATE_CHAR_ANY_MEANS_3D( l_U661[1], 1231.81200000, 73.76400000, 37.74920000, 2.00000000, 2.00000000, 2.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U661[0], 1231.81200000, 73.76400000, 37.74920000, 2.00000000, 2.00000000, 2.00000000, 0 )))
                {
                    if ((l_U501 == 0) AND (TIMERB() > 60000))
                    {
                        sub_21843();
                        PRINT_NOW( "R2_FAIL_6", 7500, 1 );
                        sub_34651( 2 );
                        l_U481 = -1;
                        l_U501 = 1;
                    }
                    else
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 1, 0.00000000 );
                    }
                }
            }
            if ((l_U565[12] == 1) AND (l_U521 == 0))
            {
                while (l_U649 == 0)
                {
                    PRINTSTRING( "\n ----> Run Out Cutscene Loop <---- \n\n" );
                    while (l_U512 == 0)
                    {
                        PRINTSTRING( "\n ----> Player not in taxi Loop <---- \n\n" );
                        SET_PLAYER_CONTROL( l_U755, 1 );
                        sub_11349();
                        sub_11841();
                        WAIT( 0 );
                    }
                    if (l_U483 == 0)
                    {
                        l_U483 = 1;
                        CLEAR_CHAR_TASKS( l_U754 );
                        SET_PLAYER_CONTROL( l_U755, 0 );
                        if (NOT (IS_CAR_DEAD( l_U711 )))
                        {
                            FREEZE_CAR_POSITION( l_U711, 0 );
                            LOCK_CAR_DOORS( l_U711, 1 );
                        }
                        CLEAR_AREA( 1225.10900000, 66.13420000, 37.79820000, 3.00000000, 1 );
                        CLEAR_AREA( 1224.64500000, 82.92311000, 37.59240000, 30.00000000, 1 );
                        WAIT( 0 );
                        sub_7149( 0, ref l_U660, 1225.10900000, 66.13420000, 37.79820000 - 1.00000000, 95.39670000 );
                        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U660, 0 );
                        while (NOT (DOES_CHAR_EXIST( l_U660 )))
                        {
                            WAIT( 0 );
                        }
                        sub_5656( 1, l_U660, "ROMAN", 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U660, 1 );
                        SET_ROMANS_MOOD( 2 );
                        if (NOT (DOES_BLIP_EXIST( l_U681 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U660, ref l_U681 );
                            CHANGE_BLIP_COLOUR( l_U681, 3 );
                        }
                        l_U516 = 0;
                        if (NOT (IS_CHAR_DEAD( l_U660 )))
                        {
                            BEGIN_CAM_COMMANDS( ref l_U734 );
                            CLEAR_WANTED_LEVEL( l_U755 );
                            CREATE_CAM( 14, ref l_U726 );
                            CREATE_CAM( 14, ref l_U727 );
                            CREATE_CAM( 14, ref l_U728 );
                            CREATE_CAM( 14, ref l_U729 );
                            CREATE_CAM( 3, ref l_U733 );
                            SET_CAM_POS( l_U726, 1221.79700000, 61.85431000, 38.19236000 );
                            SET_CAM_ROT( l_U726, -1.72840200, 0.00000000, 1.16550900 );
                            SET_CAM_FOV( l_U726, 35 );
                            SET_CAM_POS( l_U727, 1221.79700000, 67.85432000, 38.19236000 );
                            SET_CAM_ROT( l_U727, -1.72840200, 0.00000000, 1.16550900 );
                            SET_CAM_FOV( l_U727, 35 );
                            SET_CAM_POS( l_U728, 1223.81400000, 89.86863000, 41.05486000 );
                            SET_CAM_ROT( l_U728, -14.58237000, -0.00000000, -178.50730000 );
                            SET_CAM_POS( l_U729, 1216.36400000, 76.79285000, 37.93076000 );
                            SET_CAM_ROT( l_U729, -0.33978600, -0.00000000, -59.65670000 );
                            SET_CAM_FOV( l_U729, 35.40000000 );
                            SET_WIDESCREEN_BORDERS( 1 );
                            SET_CAM_ACTIVE( l_U726, 1 );
                            SET_CAM_PROPAGATE( l_U726, 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            SET_CAM_PROPAGATE( l_U726, 0 );
                            SET_CAM_INTERP_STYLE_CORE( l_U733, l_U726, l_U727, 5000, 0 );
                            SET_CAM_ACTIVE( l_U733, 1 );
                            SET_CAM_PROPAGATE( l_U733, 1 );
                            if (NOT (IS_CAR_DEAD( l_U711 )))
                            {
                                CLOSE_ALL_CAR_DOORS( l_U711 );
                            }
                            if (NOT (IS_CHAR_DEAD( l_U661[0] )))
                            {
                                SET_CHAR_COORDINATES( l_U661[0], 1231.81200000, 73.76400000, 37.74920000 );
                            }
                            if (NOT (IS_CHAR_DEAD( l_U661[1] )))
                            {
                                SET_CHAR_COORDINATES( l_U661[1], 1231.81200000 + 0.50000000, 73.76400000, 37.74920000 );
                            }
                            SET_NEXT_DESIRED_MOVE_STATE( 3 );
                            if ((NOT (IS_CHAR_DEAD( l_U660 ))) AND (NOT (IS_CAR_DEAD( l_U711 ))))
                            {
                                TASK_ENTER_CAR_AS_PASSENGER( l_U660, l_U711, -2, 0 );
                            }
                            TASK_SWAP_WEAPON( l_U754, 0 );
                            if (NOT (IS_CHAR_DEAD( l_U660 )))
                            {
                                ;
                            }
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 0, 0.00000000 );
                        }
                        SETTIMERA( 0 );
                    }
                    if ((TIMERA() > 0) AND (l_U483 == 1))
                    {
                        l_U483 = 2;
                        SETTIMERA( 0 );
                    }
                    if ((TIMERA() > 2000) AND (l_U483 == 2))
                    {
                        l_U483 = 3;
                        if (NOT (IS_CAR_DEAD( l_U712 )))
                        {
                            LOCK_CAR_DOORS( l_U712, 1 );
                            if (NOT (IS_CHAR_DEAD( l_U661[1] )))
                            {
                                SET_NEXT_DESIRED_MOVE_STATE( 4 );
                                TASK_ENTER_CAR_AS_PASSENGER( l_U661[1], l_U712, 15000, 0 );
                            }
                        }
                        SETTIMERA( 0 );
                    }
                    if ((TIMERA() > 500) AND (l_U483 == 3))
                    {
                        l_U483 = 4;
                        if (NOT (IS_CAR_DEAD( l_U712 )))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U661[0] )))
                            {
                                SET_NEXT_DESIRED_MOVE_STATE( 4 );
                                TASK_ENTER_CAR_AS_DRIVER( l_U661[0], l_U712, 15000 );
                            }
                        }
                        CLEAR_PRINTS();
                        sub_11424( ref l_U654, 0 );
                        if (g_U64976 == 0)
                        {
                            sub_9329( "R2_B2V1", 0, 1, ref l_U654, 6, 1 );
                            g_U64976 = 1;
                            l_U506 = 1;
                        }
                        else if (g_U64976 == 1)
                        {
                            sub_9329( "R2_B2V2", 0, 1, ref l_U654, 6, 1 );
                            g_U64976 = 2;
                            l_U507 = 1;
                        }
                        if (NOT (IS_CAR_DEAD( l_U711 )))
                        {
                            GET_CAR_HEADING( l_U711, ref l_U493 );
                        }
                        if (l_U493 > 180)
                        {
                            if (NOT (IS_CAR_DEAD( l_U711 )))
                            {
                                if (NOT (IS_CAR_DOOR_DAMAGED( l_U711, 1 )))
                                {
                                    TASK_PLAY_ANIM_UPPER_BODY( l_U754, "reach_open_door", "missroman2", 4, 0, 0, 0, 0, 0 );
                                    l_U553 = 0;
                                }
                                ATTACH_CAM_TO_VEHICLE( l_U727, l_U711 );
                                SET_CAM_ATTACH_OFFSET( l_U727, -0.75000000 + l_U757._fU0, 0.45000000 + l_U757._fU4, 0.51000000 + l_U757._fU8 );
                                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U727, 1 );
                            }
                            l_U735 = 55;
                            SET_CAM_FOV( l_U727, l_U763 + 10 );
                            POINT_CAM_AT_VEHICLE( l_U727, l_U711 );
                            SET_CAM_POINT_OFFSET( l_U727, -0.10000000 + l_U760._fU0, -0.05000000 + l_U760._fU4, 0.45000000 + l_U760._fU8 );
                            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U727, 1 );
                            SET_CAM_PROPAGATE( l_U733, 0 );
                            SET_CAM_ACTIVE( l_U727, 1 );
                            SET_CAM_PROPAGATE( l_U727, 1 );
                        }
                        SETTIMERA( 0 );
                    }
                    if ((TIMERA() > 1000) AND (l_U483 == 4))
                    {
                        l_U483 = 5;
                        if (l_U493 > 180)
                        {
                            if (l_U553 == 0)
                            {
                                fVar2 = 0.00000000;
                                while (fVar2 < 1.00000000)
                                {
                                    if (NOT (IS_CAR_DEAD( l_U711 )))
                                    {
                                        CONTROL_CAR_DOOR( l_U711, 1, 0, fVar2 );
                                    }
                                    fVar2 += 0.08000000;
                                    if (fVar2 > 1.00000000)
                                    {
                                        fVar2 = 1.00000000;
                                    }
                                    WAIT( 0 );
                                }
                            }
                        }
                        else
                        {
                            SET_CAM_PROPAGATE( l_U727, 0 );
                            SET_CAM_ACTIVE( l_U728, 1 );
                            SET_CAM_PROPAGATE( l_U728, 1 );
                            WAIT( 1000 );
                        }
                        SETTIMERA( 0 );
                    }
                    if ((TIMERA() > 2000) AND (l_U483 == 5))
                    {
                        l_U483 = 6;
                        if (l_U493 > 180)
                        {
                            if (NOT (sub_10310( l_U654 )))
                            {
                                sub_23797( "R2_CHASER", ref l_U654, 6, 1 );
                            }
                            SET_CAM_PROPAGATE( l_U727, 0 );
                            SET_CAM_ACTIVE( l_U729, 1 );
                            SET_CAM_PROPAGATE( l_U729, 1 );
                        }
                        else if (NOT (sub_10310( l_U654 )))
                        {
                            sub_23797( "R2_CHASER", ref l_U654, 6, 1 );
                        }
                        SET_CAM_PROPAGATE( l_U728, 0 );
                        SET_CAM_ACTIVE( l_U729, 1 );
                        SET_CAM_PROPAGATE( l_U729, 1 );;
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                        l_U521 = 1;
                        SETTIMERA( 0 );
                    }
                    if ((TIMERA() > 2000) AND (l_U483 == 6))
                    {
                        l_U483 = 7;
                        SETTIMERA( 0 );
                    }
                    if (l_U483 == 7)
                    {
                        if ((NOT (IS_CHAR_DEAD( l_U660 ))) AND ((NOT (IS_CAR_DEAD( l_U711 ))) AND (l_U521 == 1)))
                        {
                            l_U483 = 8;
                            SET_GAME_CAM_HEADING( 0.00000000 );
                            if (l_U493 > 180)
                            {
                                SET_CAM_ACTIVE( l_U729, 0 );
                                SET_CAM_PROPAGATE( l_U729, 0 );
                            }
                            else
                            {
                                SET_CAM_ACTIVE( l_U729, 0 );
                                SET_CAM_PROPAGATE( l_U729, 0 );
                            }
                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                            DESTROY_CAM( l_U726 );
                            DESTROY_CAM( l_U727 );
                            DESTROY_CAM( l_U728 );
                            DESTROY_CAM( l_U729 );
                            DESTROY_CAM( l_U733 );
                            END_CAM_COMMANDS( ref l_U734 );
                            CLEAR_CHAR_TASKS( l_U754 );
                            SETTIMERA( 0 );
                            SET_WIDESCREEN_BORDERS( 0 );
                            sub_916();
                            if (DOES_BLIP_EXIST( l_U681 ))
                            {
                                REMOVE_BLIP( l_U681 );
                            }
                            l_U649 = 1;
                        }
                    }
                    if ((l_U483 > 0) AND ((IS_SCREEN_FADED_IN()) AND (sub_20513())))
                    {
                        l_U483 = 8;
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        if (l_U493 > 180)
                        {
                            SET_CAM_ACTIVE( l_U729, 0 );
                            SET_CAM_PROPAGATE( l_U729, 0 );
                        }
                        else
                        {
                            SET_CAM_ACTIVE( l_U729, 0 );
                            SET_CAM_PROPAGATE( l_U729, 0 );
                        }
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DESTROY_CAM( l_U726 );
                        DESTROY_CAM( l_U727 );
                        DESTROY_CAM( l_U728 );
                        DESTROY_CAM( l_U729 );
                        DESTROY_CAM( l_U733 );
                        END_CAM_COMMANDS( ref l_U734 );
                        CLEAR_CHAR_TASKS( l_U754 );
                        if ((NOT (IS_CHAR_DEAD( l_U660 ))) AND (NOT (IS_CAR_DEAD( l_U711 ))))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U660, l_U711 )))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U660, l_U711, 0 );
                            }
                            CLOSE_ALL_CAR_DOORS( l_U711 );
                        }
                        if (NOT (IS_CAR_DEAD( l_U712 )))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U661[0] )))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U661[0], l_U712 )))
                                {
                                    WARP_CHAR_INTO_CAR( l_U661[0], l_U712 );
                                }
                            }
                            if (NOT (IS_CHAR_DEAD( l_U661[1] )))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U661[1], l_U712 )))
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U661[1], l_U712, 0 );
                                }
                            }
                            CLOSE_ALL_CAR_DOORS( l_U712 );
                        }
                        SET_WIDESCREEN_BORDERS( 0 );
                        sub_916();
                        if (DOES_BLIP_EXIST( l_U681 ))
                        {
                            REMOVE_BLIP( l_U681 );
                        }
                        WAIT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        DO_SCREEN_FADE_IN( 500 );
                        while (NOT IS_SCREEN_FADED_IN())
                        {
                            WAIT( 0 );
                        }
                        SETTIMERA( 0 );
                        l_U649 = 1;
                    }
                    WAIT( 0 );
                }
            }
            if (l_U649 == 1)
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 1, 0.00000000 );
                SET_PLAYER_CONTROL( l_U755, 1 );
                l_U481++;
            }
        }
    }
    if (l_U501 == 0)
    {
        if (l_U520 == 1)
        {
            sub_11349();
            sub_11841();
        }
        sub_32329();
        sub_21661();
        sub_37048();
        sub_42946();
        if (l_U516 == 0)
        {
            sub_25019();
        }
        if (l_U520 == 1)
        {
            if ((l_U537 == 0) AND ((NOT (IS_CAR_DEAD( l_U712 ))) AND ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND ((NOT (IS_CHAR_DEAD( l_U661[0] ))) AND (NOT (IS_CAR_DEAD( l_U711 )))))))
            {
                GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( 1231.44800000, 78.09839000, 36.92490000, 2.50000000, 0, 1, ref l_U714 );
                if (l_U714 != nil)
                {
                    l_U551 = 1;
                }
                GET_CAR_COORDINATES( l_U712, ref l_U696._fU0, ref l_U696._fU4, ref l_U696._fU8 );
                if ((l_U501 == 0) AND (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U754, l_U712, 5.00000000, 5.00000000, 5.00000000, 0 ))))
                {
                    GET_GAME_TIMER( ref l_U486 );
                    if (((l_U486 - l_U487) > 1000) AND (IS_CHAR_TOUCHING_VEHICLE( l_U661[0], l_U711 )))
                    {
                        GET_GAME_TIMER( ref l_U487 );
                        l_U484++;
                        PRINTSTRING( "\n ---> AlbTouchCounter0 a = " );
                        PRINTINT( l_U484 );
                        PRINTNL();
                        PRINTNL();
                        if (l_U484 > 3)
                        {
                            PRINTSTRING( "\n*\n*\n* ---> ALB[0] TOUCHING TAXI a <--- \n*\n*\n*\n" );
                            l_U653 = 1;
                        }
                    }
                    GET_GAME_TIMER( ref l_U486 );
                    if (((l_U486 - l_U488) > 1000) AND (IS_CHAR_TOUCHING_VEHICLE( l_U661[1], l_U711 )))
                    {
                        GET_GAME_TIMER( ref l_U488 );
                        l_U485++;
                        PRINTSTRING( "\n ---> AlbTouchCounter1 a = " );
                        PRINTINT( l_U485 );
                        PRINTNL();
                        PRINTNL();
                        if (l_U485 > 3)
                        {
                            PRINTSTRING( "\n*\n*\n* ---> ALB[1] TOUCHING TAXI a <--- \n*\n*\n*\n" );
                            l_U653 = 1;
                        }
                    }
                    if ((l_U653 == 1) || ((l_U551 == 1) || ((LOCATE_CAR_3D( l_U711, 1231.44800000, 78.09839000, 36.92490000, 2.50000000, 2.50000000, 2.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U754, 1231.44800000, 78.09839000, 36.92490000, 2.50000000, 2.50000000, 2.50000000, 0 )))))
                    {
                        sub_11424( ref l_U654, 0 );
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 0, 0.00000000 );
                        if ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND (NOT (IS_CAR_DEAD( l_U712 ))))
                        {
                            LOCK_CAR_DOORS( l_U712, 1 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U661[1], 0 );
                            CLEAR_CHAR_TASKS( l_U661[1] );
                            OPEN_SEQUENCE_TASK( ref l_U737 );
                            TASK_SWAP_WEAPON( 0, 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U699._fU0, l_U699._fU4, l_U699._fU8, 2, 3.00000000, 3.00000000, l_U754, 0 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U712, 30000, 0 );
                            CLOSE_SEQUENCE_TASK( l_U737 );
                            TASK_PERFORM_SEQUENCE( l_U661[1], l_U737 );
                            CLEAR_SEQUENCE_TASK( l_U737 );
                            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U661[1], 1 );
                        }
                        WAIT( 50 );
                        sub_23797( "R2_ATTKDAR", ref l_U654, 6, 1 );
                        WAIT( 2000 );
                        if ((NOT (IS_CHAR_DEAD( l_U661[0] ))) AND (NOT (IS_CAR_DEAD( l_U712 ))))
                        {
                            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U661[0], 1 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U661[0], 0 );
                            CLEAR_CHAR_TASKS( l_U661[0] );
                            OPEN_SEQUENCE_TASK( ref l_U737 );
                            TASK_SWAP_WEAPON( 0, 1 );
                            TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U699._fU0, l_U699._fU4, l_U699._fU8, 2, 3.00000000, 3.00000000, l_U754, 0 );
                            TASK_ENTER_CAR_AS_DRIVER( 0, l_U712, 30000 );
                            TASK_CAR_DRIVE_WANDER( 0, l_U712, 30.00000000, 2 );
                            CLOSE_SEQUENCE_TASK( l_U737 );
                            TASK_PERFORM_SEQUENCE( l_U661[0], l_U737 );
                            CLEAR_SEQUENCE_TASK( l_U737 );
                        }
                        while (sub_10310( l_U654 ))
                        {
                            WAIT( 0 );
                        }
                        sub_21843();
                        if ((IS_CHAR_DEAD( l_U661[1] )) || ((IS_CHAR_DEAD( l_U661[0] )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U661[1], l_U754, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U661[0], l_U754, 0 )))))
                        {
                            PRINT_NOW( "R2_FAIL_4", 7500, 1 );
                        }
                        else
                        {
                            PRINT_NOW( "R2_FAIL_7", 7500, 1 );
                        }
                        sub_34651( 1 );
                        l_U481 = -1;
                        l_U501 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_35326()
{
    CREATE_CHAR( 26, 1468450703, 1258.90500000, 67.49110000, 38.06880000, ref l_U661[0], 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U661[0], 1, 0, 0 );
    GIVE_WEAPON_TO_CHAR( l_U661[0], 7, 30000, 0 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U661[0], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U661[0], 1 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U661[0], 24 );
    SET_CHAR_DECISION_MAKER( l_U661[0], l_U719 );
    SET_COMBAT_DECISION_MAKER( l_U661[0], l_U720 );
    SET_CHAR_AS_ENEMY( l_U661[0], 1 );
    SET_CHAR_ACCURACY( l_U661[0], 30 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U661[0], 1 );
    SET_CHAR_KEEP_TASK( l_U661[0], 1 );
    CREATE_CHAR( 26, 1731510984, 1258.33900000, 65.69750000, 37.92150000, ref l_U661[1], 1 );
    GIVE_WEAPON_TO_CHAR( l_U661[1], 7, 30000, 0 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U661[1], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U661[1], 1 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U661[1], 24 );
    SET_CHAR_DECISION_MAKER( l_U661[1], l_U719 );
    SET_COMBAT_DECISION_MAKER( l_U661[1], l_U720 );
    SET_CHAR_AS_ENEMY( l_U661[1], 1 );
    SET_CHAR_ACCURACY( l_U661[1], 30 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U661[1], 1 );
    SET_CHAR_KEEP_TASK( l_U661[1], 1 );
    sub_5656( 2, l_U661[1], "ALBANIAN_THUG_1", 0 );
    return;
}

void sub_35810()
{
    CLEAR_AREA( 1262.13700000, 119.77030000, 38.76520000, 5.00000000, 1 );
    CREATE_CAR( 1937616578, 1262.13700000, 119.77030000, 38.76520000, ref l_U712, 1 );
    SET_CAR_HEADING( l_U712, 165.19620000 );
    CHANGE_CAR_COLOUR( l_U712, 15, 15 );
    SET_VEHICLE_DIRT_LEVEL( l_U712, 8.50000000 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U712, 1 );
    SET_CAR_ENGINE_ON( l_U712, 1, 1 );
    return;
}

void sub_37048()
{
    if (DOES_VEHICLE_EXIST( l_U712 ))
    {
        if ((l_U501 == 0) AND (NOT (IS_CAR_DEAD( l_U712 ))))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U712, l_U754 ))
            {
                PRINTSTRING( "\n*\n*\n* ---> DAMAGE ALB CAR <--- \n*\n*\n*\n" );
                l_U653 = 1;
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U661[0], l_U754, 0 ))
            {
                PRINTSTRING( "\n*\n*\n* ---> DAMAGE ALB[0] <--- \n*\n*\n*\n" );
                l_U653 = 1;
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U661[1], l_U754, 0 ))
            {
                PRINTSTRING( "\n*\n*\n* ---> DAMAGE ALB[1] <--- \n*\n*\n*\n" );
                l_U653 = 1;
            }
            if (IS_CHAR_IN_CAR( l_U754, l_U712 ))
            {
                PRINTSTRING( "\n*\n*\n* ---> PLAYER IN ALB CAR <--- \n*\n*\n*\n" );
                l_U653 = 1;
            }
            if (l_U653 == 1)
            {
                if (NOT (IS_CHAR_DEAD( l_U660 )))
                {
                    SET_CHAR_HEALTH( l_U660, 10000 );
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U660, 0 );
                    SET_CHAR_PROOFS( l_U660, 1, 1, 1, 1, 1 );
                }
                if (NOT (IS_CAR_DEAD( l_U711 )))
                {
                    SET_CAR_PROOFS( l_U711, 1, 1, 1, 1, 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U661[0] )))
                {
                    CLEAR_CHAR_TASKS( l_U661[0] );
                    SET_COMBAT_DECISION_MAKER( l_U661[0], l_U721 );
                    TASK_COMBAT( l_U661[0], l_U754 );
                }
                if (NOT (IS_CHAR_INJURED( l_U661[1] )))
                {
                    CLEAR_CHAR_TASKS( l_U661[1] );
                    SET_COMBAT_DECISION_MAKER( l_U661[1], l_U721 );
                    TASK_COMBAT( l_U661[1], l_U754 );
                }
                WAIT( 3000 );
                if ((NOT (IS_CAR_DEAD( l_U711 ))) AND (NOT (IS_CHAR_DEAD( l_U660 ))))
                {
                    sub_11424( ref l_U654, 0 );
                    if (IS_CHAR_IN_CAR( l_U660, l_U711 ))
                    {
                        sub_9329( "R2_ROMCAR", 0, 1, ref l_U654, 6, 1 );
                    }
                    while (sub_10310( l_U654 ))
                    {
                        WAIT( 0 );
                    }
                    sub_21843();
                    PRINT_NOW( "R2_FAIL_4", 7500, 1 );
                    WAIT( 7500 );
                    l_U647 = 1;
                    while (NOT (sub_22128( 1, 1 )))
                    {
                        WAIT( 0 );
                    }
                    sub_37878();
                }
                else if (NOT (DOES_CHAR_EXIST( l_U660 )))
                {
                    sub_11424( ref l_U654, 0 );
                    sub_23797( "R2_ATTKDAR", ref l_U654, 6, 1 );
                    while (sub_10310( l_U654 ))
                    {
                        WAIT( 0 );
                    }
                    sub_21843();
                    PRINT_NOW( "R2_FAIL_4", 7500, 1 );
                    WAIT( 1000 );
                    sub_34651( 1 );
                }
                else
                {
                    sub_11424( ref l_U654, 0 );
                    sub_21843();
                    PRINT_NOW( "R2_FAIL_4", 7500, 1 );
                }
                l_U481 = -1;
                l_U501 = 1;
                l_U544 = 1;
            }
        }
        else if ((l_U501 == 0) AND (IS_CAR_DEAD( l_U712 )))
        {
            PRINTSTRING( "\n*\n*\n* ---> ALB CAR DEAD <--- \n*\n*\n*\n" );
            if (NOT (IS_CHAR_DEAD( l_U660 )))
            {
                SET_CHAR_HEALTH( l_U660, 10000 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U660, 0 );
                SET_CHAR_PROOFS( l_U660, 1, 1, 1, 1, 1 );
            }
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                SET_CAR_PROOFS( l_U711, 1, 1, 1, 1, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U661[0] )))
            {
                CLEAR_CHAR_TASKS( l_U661[0] );
                SET_COMBAT_DECISION_MAKER( l_U661[0], l_U721 );
                TASK_COMBAT( l_U661[0], l_U754 );
            }
            if (NOT (IS_CHAR_INJURED( l_U661[1] )))
            {
                CLEAR_CHAR_TASKS( l_U661[1] );
                SET_COMBAT_DECISION_MAKER( l_U661[1], l_U721 );
                TASK_COMBAT( l_U661[1], l_U754 );
            }
            WAIT( 3000 );
            if ((NOT (IS_CAR_DEAD( l_U711 ))) AND (NOT (IS_CHAR_DEAD( l_U660 ))))
            {
                sub_11424( ref l_U654, 0 );
                if (IS_CHAR_IN_CAR( l_U660, l_U711 ))
                {
                    sub_9329( "R2_ROMCAR", 0, 1, ref l_U654, 6, 1 );
                }
                while (sub_10310( l_U654 ))
                {
                    WAIT( 0 );
                }
                sub_21843();
                PRINT_NOW( "R2_FAIL_4", 7500, 1 );
                WAIT( 7500 );
                l_U647 = 1;
                while (NOT (sub_22128( 1, 1 )))
                {
                    WAIT( 0 );
                }
                sub_37878();
            }
            else if (NOT (DOES_CHAR_EXIST( l_U660 )))
            {
                sub_11424( ref l_U654, 0 );
                sub_23797( "R2_ATTKDAR", ref l_U654, 6, 1 );
                while (sub_10310( l_U654 ))
                {
                    WAIT( 0 );
                }
                sub_21843();
                PRINT_NOW( "R2_FAIL_4", 7500, 1 );
                sub_34651( 1 );
            }
            else
            {
                sub_11424( ref l_U654, 0 );
                sub_21843();
                PRINT_NOW( "R2_FAIL_4", 7500, 1 );
            }
            sub_11424( ref l_U654, 0 );
            SETTIMERA( 5000 );
            l_U481 = -1;
            l_U501 = 1;
            l_U544 = 1;
        }
    }
    if ((l_U501 == 0) AND ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND (NOT (IS_CHAR_DEAD( l_U661[0] )))))
    {
        if (IS_PLAYER_TARGETTING_CHAR( l_U755, l_U661[0] ))
        {
            PRINTSTRING( "\n*\n*\n* ---> TARGET ALB[0] <--- \n*\n*\n*\n" );
            l_U653 = 1;
        }
        if (IS_PLAYER_TARGETTING_CHAR( l_U755, l_U661[1] ))
        {
            PRINTSTRING( "\n*\n*\n* ---> TARGET ALB[1] <--- \n*\n*\n*\n" );
            l_U653 = 1;
        }
        if (IS_PLAYER_FREE_AIMING_AT_CHAR( l_U755, l_U661[0] ))
        {
            PRINTSTRING( "\n*\n*\n* ---> FREE AIM ALB[0] <--- \n*\n*\n*\n" );
            l_U653 = 1;
        }
        if (IS_PLAYER_FREE_AIMING_AT_CHAR( l_U755, l_U661[1] ))
        {
            PRINTSTRING( "\n*\n*\n* ---> FREE AIM ALB[1] <--- \n*\n*\n*\n" );
            l_U653 = 1;
        }
        if ((IS_PED_BEING_JACKED( l_U661[0] )) AND (IS_PED_JACKING( l_U754 )))
        {
            PRINTSTRING( "\n*\n*\n* ---> JACK ALB[0] <--- \n*\n*\n*\n" );
            l_U653 = 1;
        }
        if ((IS_PED_BEING_JACKED( l_U661[1] )) AND (IS_PED_JACKING( l_U754 )))
        {
            PRINTSTRING( "\n*\n*\n* ---> JACK ALB[1] <--- \n*\n*\n*\n" );
            l_U653 = 1;
        }
        if (IS_CHAR_SHOOTING_IN_AREA( l_U754, 1196.94000000, 80.89000000, 1258.44000000, 97.12000000, 0 ))
        {
            PRINTSTRING( "\n*\n*\n* ---> SHOOT IN AREA <--- \n*\n*\n*\n" );
            l_U653 = 1;
        }
        if (l_U653 == 1)
        {
            if (NOT (IS_CHAR_DEAD( l_U660 )))
            {
                SET_CHAR_HEALTH( l_U660, 10000 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U660, 0 );
                SET_CHAR_PROOFS( l_U660, 1, 1, 1, 1, 1 );
            }
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                SET_CAR_PROOFS( l_U711, 1, 1, 1, 1, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U661[0] )))
            {
                CLEAR_CHAR_TASKS( l_U661[0] );
                SET_COMBAT_DECISION_MAKER( l_U661[0], l_U721 );
                TASK_COMBAT( l_U661[0], l_U754 );
            }
            if (NOT (IS_CHAR_INJURED( l_U661[1] )))
            {
                CLEAR_CHAR_TASKS( l_U661[1] );
                SET_COMBAT_DECISION_MAKER( l_U661[1], l_U721 );
                TASK_COMBAT( l_U661[1], l_U754 );
            }
            WAIT( 3000 );
            if ((NOT (IS_CAR_DEAD( l_U711 ))) AND (NOT (IS_CHAR_DEAD( l_U660 ))))
            {
                sub_11424( ref l_U654, 0 );
                if (IS_CHAR_IN_CAR( l_U660, l_U711 ))
                {
                    sub_9329( "R2_ROMCAR", 0, 1, ref l_U654, 6, 1 );
                }
                while (sub_10310( l_U654 ))
                {
                    WAIT( 0 );
                }
                sub_21843();
                PRINT_NOW( "R2_FAIL_7", 7500, 1 );
                WAIT( 7500 );
                l_U647 = 1;
                SETTIMERA( 0 );
                while (NOT (sub_22128( 1, 1 )))
                {
                    WAIT( 0 );
                }
                sub_37878();
            }
            else if (NOT (DOES_CHAR_EXIST( l_U660 )))
            {
                sub_11424( ref l_U654, 0 );
                sub_23797( "R2_ATTKDAR", ref l_U654, 6, 1 );
                while (sub_10310( l_U654 ))
                {
                    WAIT( 0 );
                }
                sub_21843();
                PRINT_NOW( "R2_FAIL_7", 7500, 1 );
                sub_34651( 1 );
            }
            else
            {
                sub_11424( ref l_U654, 0 );
                sub_21843();
                PRINT_NOW( "R2_FAIL_7", 7500, 1 );
            }
            sub_11424( ref l_U654, 0 );
            SETTIMERA( 5000 );
            l_U481 = -1;
            l_U501 = 1;
            l_U544 = 1;
        }
    }
    return;
}

void sub_37878()
{
    unknown uVar2;
    int iVar3;
    int iVar4;

    while (NOT (sub_22128( 1, 0 )))
    {
        WAIT( 0 );
    }
    while (l_U632[2] == 0)
    {
        if (l_U632[0] == 0)
        {
            SET_PLAYER_CONTROL( l_U755, 0 );
            g_U8086 = 1;
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_AREA_OF_CARS( l_U708._fU0, l_U708._fU4, l_U708._fU8, 5.00000000 );
            FREEZE_CHAR_POSITION( l_U754, 1 );
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U754, l_U711 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U754 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_CAR( l_U754, l_U711, -1 );
                    }
                    else
                    {
                        WARP_CHAR_INTO_CAR( l_U754, l_U711 );
                    }
                    WAIT( 0 );
                    SET_CHAR_COORDINATES( l_U754, l_U708._fU0 - 0.50000000, l_U708._fU4, l_U708._fU8 );
                }
            }
            else if (IS_CHAR_IN_ANY_CAR( l_U754 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U754, l_U708._fU0 - 0.50000000, l_U708._fU4, l_U708._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U754, l_U708._fU0 - 0.50000000, l_U708._fU4, l_U708._fU8 );
            }
            LOAD_SCENE( l_U708._fU0, l_U708._fU4, l_U708._fU8 );
            DISPLAY_HUD( 0 );
            SET_WIDESCREEN_BORDERS( 1 );
            DISPLAY_RADAR( 0 );
            CLEAR_HELP();
            CLEAR_PRINTS();
            WAIT( 2000 );
            if (NOT (DOES_CHAR_EXIST( l_U660 )))
            {
                sub_7149( 0, ref l_U660, l_U708._fU0 + 0.50000000, l_U708._fU4, l_U708._fU8, 165.43760000 );
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U660, 0 );
                sub_5656( 1, l_U660, "ROMAN", 0 );
            }
            WAIT( 0 );
            if (NOT (IS_CHAR_DEAD( l_U660 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U660, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U660, 1 );
            }
            FREEZE_CHAR_POSITION( l_U754, 0 );
            WAIT( 0 );
            CLEAR_AREA( l_U708._fU0, l_U708._fU4, l_U708._fU8, 5.00000000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U660 )))
            {
                if (l_U646 == 1)
                {
                    iVar4 = 0;
                    GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref iVar3, ref iVar4 );
                    if ((iVar3 == -1932515764) || (iVar4 == -1))
                    {
                        iVar3 = -344943009;
                        sub_5869( iVar3 );
                        while (NOT (HAS_MODEL_LOADED( iVar3 )))
                        {
                            WAIT( 0 );
                        }
                        PRINTSTRING( "\n  ----> CREATE BLISTA\n\n" );
                        CREATE_CAR( iVar3, l_U708._fU0, l_U708._fU4, l_U708._fU8, ref uVar2, 1 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( iVar3 );
                    }
                    else
                    {
                        PRINTSTRING( "\n  ----> CREATE RANDOM CAR\n\n" );
                        CREATE_CAR( iVar3, l_U708._fU0, l_U708._fU4, l_U708._fU8, ref uVar2, 1 );
                    }
                }
                else
                {
                    PRINTSTRING( "\n  ----> CREATE ROM\n\n" );
                    sub_6561( ref uVar2 );
                    SET_CAR_HEADING( uVar2, 89.68010000 );
                    SET_CAR_COORDINATES( uVar2, l_U708._fU0, l_U708._fU4, l_U708._fU8 );
                }
                WAIT( 0 );
                if ((NOT (IS_CHAR_DEAD( l_U660 ))) AND (NOT (IS_CAR_DEAD( uVar2 ))))
                {
                    SET_CAR_HEADING( uVar2, 89.68010000 );
                    SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                    RETUNE_RADIO_TO_STATION_NAME( "VLADIVOSTOK" );
                    if (NOT (IS_CHAR_IN_CAR( l_U660, uVar2 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U660, uVar2, 0 );
                    }
                    if (NOT (IS_CHAR_IN_CAR( l_U754, uVar2 )))
                    {
                        WARP_CHAR_INTO_CAR( l_U754, uVar2 );
                    }
                }
                DELETE_CAR( ref l_U711 );
            }
            sub_6068( "MISSPASS" );
            while (NOT sub_6282())
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                FREEZE_CAR_POSITION( uVar2, 1 );
            }
            BEGIN_CAM_COMMANDS( ref l_U734 );
            CREATE_CAM( 14, ref l_U732 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar2, 0.00000000, 3.50000000, 0.65000000, ref l_U693._fU0, ref l_U693._fU4, ref l_U693._fU8 );
            }
            SET_CAM_POS( l_U732, l_U693._fU0, l_U693._fU4, l_U693._fU8 );
            SET_CAM_ROT( l_U732, 0.00000000, -0.00000000, 0.00000000 );
            SET_CAM_ACTIVE( l_U732, 1 );
            SET_CAM_PROPAGATE( l_U732, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            CLEAR_AREA( 825.05310000, -274.64440000, 14.34830000, 10.00000000, 1 );
            ATTACH_CAM_TO_PED( l_U732, l_U754 );
            SET_CAM_ATTACH_OFFSET( l_U732, -0.25000000, 0.50000000, 0.60000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U732, 1 );
            SET_CAM_FOV( l_U732, 55 );
            POINT_CAM_AT_PED( l_U732, l_U754 );
            SET_CAM_POINT_OFFSET( l_U732, 0.17500000, 0.00000000, 0.55000000 );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U732, 1 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                ATTACH_CAM_TO_VEHICLE( l_U732, uVar2 );
                SET_CAM_ATTACH_OFFSET( l_U732, -0.95000000, 1.75000000, 0.45000000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U732, 1 );
                SET_CAM_FOV( l_U732, 35 );
                POINT_CAM_AT_VEHICLE( l_U732, uVar2 );
                SET_CAM_POINT_OFFSET( l_U732, -0.15000000, 0, 0.45000000 );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U732, 1 );
            }
            LOAD_SCENE( 825.05310000, -274.64440000, 14.34830000 );
            WAIT( 1000 );
            DO_SCREEN_FADE_IN( 500 );
            WAIT( 500 );
            if (l_U646 == 1)
            {
                sub_23797( "R2_R2_WRECK2", ref l_U654, 6, 1 );
            }
            else if (l_U647 == 1)
            {
                sub_23797( "R2_DROP", ref l_U654, 6, 1 );
            }
            SETTIMERA( 0 );
            l_U632[0] = 1;
        }
        if ((TIMERA() > 4000) AND ((l_U632[1] == 0) AND ((l_U632[0] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if ((NOT (IS_CHAR_DEAD( l_U660 ))) AND (NOT (IS_CAR_DEAD( uVar2 ))))
            {
                OPEN_SEQUENCE_TASK( ref l_U737 );
                TASK_PLAY_ANIM( 0, "partial_incar_bye", "MISSPASS", 4, 0, 0, 0, 0, 0 );
                TASK_LEAVE_CAR( 0, uVar2 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 817.30850000, -262.61200000, 14.59560000, 2, 10000 );
                CLOSE_SEQUENCE_TASK( l_U737 );
                TASK_PERFORM_SEQUENCE( l_U660, l_U737 );
                CLEAR_SEQUENCE_TASK( l_U737 );
            }
            SETTIMERA( 0 );
            l_U632[1] = 1;
        }
        if ((TIMERA() > 5000) AND ((l_U632[2] == 0) AND ((l_U632[1] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            SETTIMERA( 0 );
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_CAM_ACTIVE( l_U732, 0 );
            SET_CAM_PROPAGATE( l_U732, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U732 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                FREEZE_CAR_POSITION( uVar2, 0 );
            }
            CLEAR_PRINTS();
            if (DOES_CHAR_EXIST( l_U660 ))
            {
                DELETE_CHAR( ref l_U660 );
            }
            SETTIMERA( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            END_CAM_COMMANDS( ref l_U734 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            WAIT( 1000 );
            LOAD_SCENE( 825.05310000, -274.64440000, 14.34830000 );
            DO_SCREEN_FADE_IN( 500 );
            WAIT( 500 );
            g_U8086 = 0;
            SET_PLAYER_CONTROL( l_U755, 1 );
            SETTIMERA( 0 );
            sub_916();
            l_U632[2] = 1;
        }
        if ((l_U632[2] == 0) AND ((IS_SCREEN_FADED_IN()) AND ((sub_20513()) AND (TIMERB() >= 1000))))
        {
            sub_11424( ref l_U654, 0 );
            l_U632[0] = 1;
            l_U632[1] = 1;
            l_U632[2] = 1;
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                FREEZE_CAR_POSITION( uVar2, 0 );
            }
            CLEAR_PRINTS();
            if (DOES_CHAR_EXIST( l_U660 ))
            {
                DELETE_CHAR( ref l_U660 );
            }
            SETTIMERA( 0 );
            SET_CAM_ACTIVE( l_U732, 0 );
            SET_CAM_PROPAGATE( l_U732, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U732 );
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_HUD( 1 );
            DISPLAY_RADAR( 1 );
            END_CAM_COMMANDS( ref l_U734 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            WAIT( 1000 );
            LOAD_SCENE( 825.05310000, -274.64440000, 14.34830000 );
            DO_SCREEN_FADE_IN( 500 );
            WAIT( 500 );
            g_U8086 = 0;
            SET_PLAYER_CONTROL( l_U755, 1 );
            sub_916();
            SETTIMERA( 0 );
        }
        WAIT( 0 );
    }
    return;
}

void sub_42946()
{
    int iVar2;

    if ((l_U556 == 0) AND (NOT (IS_CAR_DEAD( l_U712 ))))
    {
        if ((CHECK_STUCK_TIMER( l_U712, 0, 5000 )) || ((CHECK_STUCK_TIMER( l_U712, 1, 20000 )) || ((CHECK_STUCK_TIMER( l_U712, 2, 15000 )) || (CHECK_STUCK_TIMER( l_U712, 3, 30000 )))))
        {
            PRINTSTRING( "\n ---> Albanian Car Stuck <--- \n\n" );
            if (DOES_BLIP_EXIST( l_U676 ))
            {
                REMOVE_BLIP( l_U676 );
            }
            if (NOT (IS_CHAR_INJURED( l_U661[0] )))
            {
                CLEAR_CHAR_TASKS( l_U661[0] );
                OPEN_SEQUENCE_TASK( ref l_U737 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FLEE_CHAR_ANY_MEANS( 0, l_U754, 200, 180000, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U737 );
                TASK_PERFORM_SEQUENCE( l_U661[0], l_U737 );
                CLEAR_SEQUENCE_TASK( l_U737 );
                SET_CHAR_KEEP_TASK( l_U661[0], 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U661[1] )))
            {
                CLEAR_CHAR_TASKS( l_U661[1] );
                OPEN_SEQUENCE_TASK( ref l_U737 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FLEE_CHAR_ANY_MEANS( 0, l_U754, 200, 180000, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U737 );
                TASK_PERFORM_SEQUENCE( l_U661[1], l_U737 );
                CLEAR_SEQUENCE_TASK( l_U737 );
                SET_CHAR_KEEP_TASK( l_U661[1], 1 );
            }
            l_U556 = 1;
        }
        else if (DOES_BLIP_EXIST( l_U676 ))
        {
            GET_DRIVER_OF_CAR( l_U712, ref iVar2 );
            if ((iVar2 == nil) || (IS_CAR_PASSENGER_SEAT_FREE( l_U712, 0 )))
            {
                if (DOES_BLIP_EXIST( l_U676 ))
                {
                    REMOVE_BLIP( l_U676 );
                }
                if (NOT (IS_CHAR_INJURED( l_U661[0] )))
                {
                    CLEAR_CHAR_TASKS( l_U661[0] );
                    OPEN_SEQUENCE_TASK( ref l_U737 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FLEE_CHAR_ANY_MEANS( 0, l_U754, 200, 180000, 0, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( l_U737 );
                    TASK_PERFORM_SEQUENCE( l_U661[0], l_U737 );
                    CLEAR_SEQUENCE_TASK( l_U737 );
                    SET_CHAR_KEEP_TASK( l_U661[0], 1 );
                }
                if (NOT (IS_CHAR_INJURED( l_U661[1] )))
                {
                    CLEAR_CHAR_TASKS( l_U661[1] );
                    OPEN_SEQUENCE_TASK( ref l_U737 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FLEE_CHAR_ANY_MEANS( 0, l_U754, 200, 180000, 0, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( l_U737 );
                    TASK_PERFORM_SEQUENCE( l_U661[1], l_U737 );
                    CLEAR_SEQUENCE_TASK( l_U737 );
                    SET_CHAR_KEEP_TASK( l_U661[1], 1 );
                }
                l_U556 = 1;
            }
        }
    }
    return;
}

void sub_47394()
{
    boolean bVar2;

    PRINTSTRING( "\n\n ---> IN WARN ROMAN CALL PROCEDURE \n\n" );
    if (l_U512 == 1)
    {
        if ((l_U521 == 0) AND ((l_U501 == 0) AND (l_U565[2] == 0)))
        {
            CLEAR_HELP();
            PRINT_NOW( "R2_CALLTUT_0", 7500, 1 );
            PRINTSTRING( "\n\n PHONE ROMAN 641 \n\n" );
            sub_47560( 0 );
            SETTIMERA( 0 );
            l_U565[2] = 1;
            l_U565[3] = 0;
            l_U565[4] = 0;
            l_U565[5] = 0;
            l_U565[6] = 0;
            l_U565[7] = 0;
            l_U565[8] = 0;
            l_U565[9] = 0;
        }
        if ((l_U565[3] == 0) AND ((sub_30880() == 1002) AND (TIMERA() > 500)))
        {
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                if (IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 ))
                {
                    LOCK_CAR_DOORS( l_U711, 4 );
                    PRINTSTRING( "\n*\n*\n ----> PLAYER LOCKED INSIDE CAR\n*\n*\n" );
                }
            }
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "R2_CALLTUT_2" );
            SETTIMERA( 0 );
            l_U565[3] = 1;
            l_U565[4] = 0;
            l_U565[5] = 0;
            l_U565[6] = 0;
            l_U565[7] = 0;
            l_U565[8] = 0;
            l_U565[9] = 0;
        }
        if ((l_U565[4] == 0) AND ((sub_30880() == 1000) AND (TIMERA() > 500)))
        {
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                LOCK_CAR_DOORS( l_U711, 1 );
                PRINTSTRING( "\n*\n*\n ----> PLAYER LOCKED INSIDE CAR\n*\n*\n" );
            }
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "R2_CALLTUT_1" );
            SETTIMERA( 0 );
            l_U565[3] = 0;
            l_U565[4] = 1;
            l_U565[5] = 0;
            l_U565[6] = 0;
            l_U565[7] = 0;
            l_U565[8] = 0;
            l_U565[9] = 0;
        }
        if ((l_U565[5] == 0) AND ((sub_30880() == 1011) AND (TIMERA() > 500)))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "R2_CALLTUT_3" );
            SETTIMERA( 0 );
            l_U565[5] = 1;
            l_U565[3] = 0;
            l_U565[4] = 0;
            l_U565[6] = 0;
            l_U565[7] = 0;
            l_U565[8] = 0;
            l_U565[9] = 0;
        }
        if ((l_U565[9] == 0) AND ((sub_30880() == 1003) AND (TIMERA() > 500)))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "R2_CALLTUT_8" );
            SETTIMERA( 0 );
            l_U565[3] = 0;
            l_U565[4] = 0;
            l_U565[5] = 0;
            l_U565[6] = 0;
            l_U565[7] = 0;
            l_U565[8] = 0;
            l_U565[9] = 1;
        }
        if ((l_U565[5] == 1) AND ((l_U565[6] == 0) AND ((sub_30880() == 1012) AND (TIMERA() > 500))))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "R2_CALLTUT_4" );
            SETTIMERA( 0 );
            l_U565[3] = 0;
            l_U565[4] = 0;
            l_U565[5] = 0;
            l_U565[6] = 1;
            l_U565[7] = 0;
            l_U565[8] = 0;
            l_U565[9] = 0;
        }
        if ((l_U565[6] == 1) AND ((l_U565[7] == 0) AND (TIMERA() > 6000)))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "R2_CALLTUT_5" );
            SETTIMERA( 0 );
            l_U565[3] = 0;
            l_U565[4] = 0;
            l_U565[5] = 0;
            l_U565[6] = 0;
            l_U565[7] = 1;
            l_U565[8] = 0;
            l_U565[9] = 0;
        }
        if ((l_U565[7] == 1) AND ((l_U565[8] == 0) AND (TIMERA() > 6000)))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "R2_CALLTUT_6" );
            SETTIMERA( 0 );
            l_U565[3] = 0;
            l_U565[4] = 0;
            l_U565[5] = 0;
            l_U565[6] = 0;
            l_U565[7] = 0;
            l_U565[8] = 1;
            l_U565[9] = 0;
        }
    }
    if ((l_U565[12] == 0) AND ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND (NOT (IS_CHAR_DEAD( l_U661[0] )))))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U661[1], 1231.81200000, 73.76400000, 37.74920000, 2.00000000, 2.00000000, 2.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U661[0], 1231.81200000, 73.76400000, 37.74920000, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            if ((l_U501 == 0) AND (TIMERB() > 60000))
            {
                sub_21843();
                if (NOT (IS_CHAR_DEAD( l_U661[0] )))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U661[0] )))
                    {
                        DELETE_CHAR( ref l_U661[0] );
                    }
                    else
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U661[0] );
                        REMOVE_CHAR_ELEGANTLY( ref l_U661[0] );
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U661[1] )))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U661[1] )))
                    {
                        DELETE_CHAR( ref l_U661[1] );
                    }
                    else
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U661[1] );
                        REMOVE_CHAR_ELEGANTLY( ref l_U661[1] );
                    }
                }
                PRINT_NOW( "R2_FAIL_6", 7500, 1 );
                sub_34651( 2 );
                l_U481 = -1;
                l_U501 = 1;
            }
            else
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 1, 0.00000000 );
            }
        }
    }
    if (sub_34919( 0, 1 ))
    {
        if (NOT (IS_CAR_DEAD( l_U711 )))
        {
            LOCK_CAR_DOORS( l_U711, 4 );
            PRINTSTRING( "\n*\n*\n ----> PLAYER LOCKED INSIDE CAR\n*\n*\n" );
            FREEZE_CAR_POSITION( l_U711, 1 );
        }
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 0, 0.00000000 );
        CLEAR_HELP();
        if (sub_49460( "R2_ALBOS2", "R2AUD", 1 ))
        {
            bVar2 = true;
            while (bVar2)
            {
                switch (sub_31042())
                {
                    case 2:
                    if (NOT (IS_CAR_DEAD( l_U711 )))
                    {
                        CLOSE_ALL_CAR_DOORS( l_U711 );
                        LOCK_CAR_DOORS( l_U711, 1 );
                        PRINTSTRING( "\n*\n*\n ----> PLAYER NOT LOCKED INSIDE CAR\n*\n*\n" );
                        FREEZE_CAR_POSITION( l_U711, 0 );
                    }
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 1231, 77, 38, 1, 0.00000000 );
                    CLEAR_HELP();
                    bVar2 = false;
                    break;
                    default:
                    if (sub_31229( 0 ))
                    {
                        PRINTSTRING( "\n*\n*\n ----> PHONE CALL HAS ENDED <---- \n*\n*\n" );
                        l_U565[12] = 1;
                        SET_PLAYER_CONTROL( l_U755, 0 );
                        bVar2 = false;
                    }
                    break;
                }
                WAIT( 0 );
            }
        }
    }
    return;
}

void sub_47560(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        g_U91._fU72 = uParam0;
    }
    else
    {
        g_U91._fU72 = -1;
    }
    return;
}

int sub_49460(unknown uParam0, unknown uParam1, boolean bParam2)
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
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = g_U91._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_26728( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U91._fU368) == 1)
        {
            StrCopy( ref g_U91._fU224[0], uParam1, 16 );
            StrCopy( ref g_U91._fU224[1], uParam0, 16 );
            sub_28615( uVar23, ref g_U91._fU176 );
            g_U91._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

void sub_55287()
{
    int iVar2;

    if (l_U523 == 0)
    {
        l_U523 = 1;
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        while (sub_10310( l_U654 ))
        {
            WAIT( 0 );
            sub_11349();
            sub_11841();
        }
        if (NOT (IS_CHAR_DEAD( l_U660 )))
        {
            CLEAR_PRINTS();
            OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
            sub_23797( "R2_NOHURT", ref l_U654, 6, 1 );
            SETTIMERA( 0 );
            if (DOES_BLIP_EXIST( l_U679 ))
            {
                REMOVE_BLIP( l_U679 );
            }
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                if (IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 ))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U682 )))
                    {
                        PRINTSTRING( "\n\n\n    Add Blip 3423    \n\n" );
                        ADD_BLIP_FOR_COORD( l_U705._fU0, l_U705._fU4, l_U705._fU8, ref l_U682 );
                        CHANGE_BLIP_COLOUR( l_U682, 5 );
                        SET_ROUTE( l_U682, 1 );
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                if (IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 ))
                {
                    ;
                }
            }
            SETTIMERA( 0 );
            SET_CREATE_RANDOM_COPS( 1 );
            l_U523 = 1;
        }
        sub_11349();
        sub_11841();
        sub_21661();
        sub_37048();
        sub_42946();
        sub_25019();
    }
    if ((l_U544 == 0) AND (l_U523 == 1))
    {
        SETTIMERA( 0 );
        while (l_U544 == 0)
        {
            if ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND ((NOT (IS_CHAR_DEAD( l_U661[0] ))) AND (NOT (IS_CAR_DEAD( l_U712 )))))
            {
                if ((IS_CHAR_SITTING_IN_CAR( l_U661[1], l_U712 )) AND (IS_CHAR_SITTING_IN_CAR( l_U661[0], l_U712 )))
                {
                    l_U544 = 1;
                }
            }
            if ((l_U542 == 0) AND (TIMERA() > 12000))
            {
                if (NOT (IS_CAR_DEAD( l_U712 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U661[0] )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U661[0], l_U712 )))
                        {
                            WARP_CHAR_INTO_CAR( l_U661[0], l_U712 );
                        }
                    }
                    if (NOT (IS_CHAR_DEAD( l_U661[1] )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U661[1], l_U712 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U661[1], l_U712, 0 );
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( l_U711 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U660 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U660, l_U711 )))
                        {
                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U660, l_U711, 0 );
                        }
                    }
                }
                l_U542 = 1;
            }
            sub_11349();
            sub_11841();
            sub_37048();
            sub_42946();
            sub_21661();
            sub_25019();
            WAIT( 0 );
        }
        if ((NOT (DOES_BLIP_EXIST( l_U678 ))) AND (NOT (DOES_BLIP_EXIST( l_U676 ))))
        {
            ADD_BLIP_FOR_CAR( l_U712, ref l_U676 );
            CHANGE_BLIP_COLOUR( l_U676, 1 );
            SET_BLIP_AS_FRIENDLY( l_U676, 0 );
        }
        else if (DOES_BLIP_EXIST( l_U678 ))
        {
            l_U549 = 1;
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((NOT (IS_CAR_DEAD( l_U712 ))) AND ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND (NOT (IS_CHAR_DEAD( l_U661[0] ))))))
        {
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U661[0], 0 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U661[1], 0 );
            if (IS_CHAR_IN_CAR( l_U661[0], l_U712 ))
            {
                TASK_CAR_MISSION( l_U661[0], l_U712, l_U711, 3, l_U498, 2, -1, -1 );
            }
            if (IS_CHAR_IN_CAR( l_U661[1], l_U712 ))
            {
                TASK_DRIVE_BY( l_U661[1], l_U754, 0, 0.00000000, 0.00000000, 0.00000000, 20.00000000, 8, 1, 70 );
            }
            SET_CAR_PROOFS( l_U712, 0, 0, 0, 1, 0 );
            sub_56513( ref l_U712 );
        }
        SETTIMERA( 0 );
    }
    if ((l_U533 == 0) AND ((l_U526 == 0) AND (l_U544 == 1)))
    {
        SETTIMERA( 0 );
        l_U533 = 1;
    }
    if ((l_U526 == 0) AND ((l_U533 == 1) AND (l_U544 == 1)))
    {
        if ((NOT (sub_10310( l_U654 ))) AND ((l_U524 == 0) AND (TIMERA() > 0)))
        {
            CLEAR_HELP();
            if ((NOT (IS_CHAR_DEAD( l_U661[0] ))) AND ((NOT (IS_CAR_DEAD( l_U711 ))) AND (NOT (IS_CAR_DEAD( l_U712 )))))
            {
                SETTIMERA( 0 );
                CLEAR_PRINTS();
                CLEAR_HELP();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 1, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 1, 1, ref l_U654, 6, 1 );
                }
                SWITCH_ROADS_BACK_TO_ORIGINAL( 1196.94000000, 80.89000000, 35.00000000, 1258.44000000, 97.12000000, 39.00000000 );
                l_U524 = 1;
            }
        }
        if ((NOT (sub_10310( l_U654 ))) AND ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U524 == 1) AND ((l_U612[0] == 0) AND (TIMERA() > 0)))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                CLEAR_HELP();
                PRINT_NOW( "R2_COMMANDS_12", 7500, 1 );
                SETTIMERA( 0 );
                l_U612[0] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U612[5] == 0) AND ((l_U612[0] == 1) AND ((TIMERA() > 7500) AND (NOT (sub_10310( l_U654 )))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                CLEAR_HELP();
                PRINT_HELP( "R2_MISC_1" );
                SETTIMERA( 0 );
                l_U612[5] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U612[6] == 0) AND ((l_U612[5] == 1) AND (TIMERA() > 5000))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                CLEAR_HELP();
                PRINT_HELP( "R2_MISC_3" );
                SETTIMERA( 0 );
                l_U612[6] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U612[1] == 0) AND ((l_U612[6] == 1) AND ((TIMERA() > 5000) AND (NOT (sub_10310( l_U654 )))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    PRINTSTRING( "\n\n ---> PLAY BANTER V1 <--- \n\n" );
                    sub_9329( "R2_B2V1", 2, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    PRINTSTRING( "\n\n ---> PLAY BANTER V2 <--- \n\n" );
                    sub_9329( "R2_B2V2", 2, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U612[1] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U612[2] == 0) AND ((l_U612[1] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 3, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 3, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U612[2] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U612[3] == 0) AND ((l_U612[2] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 4, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 4, 1, ref l_U654, 6, 1 );
                }
                SETTIMERA( 0 );
                l_U612[3] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U612[4] == 0) AND ((l_U612[3] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 5, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    ;
                }
                SETTIMERA( 0 );
                l_U612[4] = 1;
                l_U526 = 1;
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U711 )))
    {
        if ((IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 )) AND (LOCATE_CHAR_IN_CAR_3D( l_U754, l_U705._fU0, l_U705._fU4, l_U705._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            if ((NOT (IS_CAR_DEAD( l_U712 ))) AND (NOT (IS_CHAR_DEAD( l_U661[0] ))))
            {
                CLEAR_CHAR_TASKS( l_U661[0] );
                TASK_CAR_DRIVE_WANDER( l_U661[0], l_U712, 8.00000000, 2 );
            }
            if (NOT (IS_CHAR_DEAD( l_U661[1] )))
            {
                CLEAR_CHAR_TASKS( l_U661[1] );
            }
            if (DOES_BLIP_EXIST( l_U676 ))
            {
                REMOVE_BLIP( l_U676 );
            }
            sub_23797( "R2_STOP", ref l_U654, 7, 1 );
            if (l_U481 < 6)
            {
                l_U481++;
            }
        }
    }
    if ((l_U525 == 0) AND (l_U523 == 1))
    {
        if (l_U503 == 0)
        {
            if (NOT (IS_CAR_DEAD( l_U712 )))
            {
                sub_56513( ref l_U712 );
            }
        }
        if (l_U503 == 1)
        {
            if (DOES_BLIP_EXIST( l_U676 ))
            {
                REMOVE_BLIP( l_U676 );
            }
            if (DOES_CHAR_EXIST( l_U661[0] ))
            {
                DELETE_CHAR( ref l_U661[0] );
            }
            if (DOES_CHAR_EXIST( l_U661[1] ))
            {
                DELETE_CHAR( ref l_U661[1] );
            }
            if (DOES_VEHICLE_EXIST( l_U712 ))
            {
                DELETE_CAR( ref l_U712 );
            }
            l_U525 = 1;
            if (l_U481 < 6)
            {
                l_U481++;
            }
        }
    }
    if ((l_U501 == 0) AND ((l_U556 == 0) AND ((NOT (IS_CAR_DEAD( l_U712 ))) AND (NOT (IS_CHAR_DEAD( l_U661[1] ))))))
    {
        GET_SCRIPT_TASK_STATUS( l_U661[1], 52, ref iVar2 );
        if ((IS_CHAR_IN_CAR( l_U661[1], l_U712 )) AND (iVar2 == 7))
        {
            TASK_DRIVE_BY( l_U661[1], l_U754, 0, 0.00000000, 0.00000000, 0.00000000, 20.00000000, 8, 1, 70 );
        }
    }
    if ((l_U525 == 0) AND ((l_U523 == 1) AND (NOT (IS_CAR_DEAD( l_U712 )))))
    {
        if (IS_CAR_IN_WATER( l_U712 ))
        {
            GET_CAR_COORDINATES( l_U712, ref l_U696._fU0, ref l_U696._fU4, ref l_U696._fU8 );
            if (l_U696._fU8 < -0.50000000)
            {
                if (DOES_BLIP_EXIST( l_U676 ))
                {
                    REMOVE_BLIP( l_U676 );
                }
                if ((NOT (IS_CHAR_DEAD( l_U661[1] ))) AND (NOT (IS_CHAR_DEAD( l_U661[0] ))))
                {
                    if ((NOT (IS_CHAR_ON_SCREEN( l_U661[1] ))) AND ((NOT (IS_CHAR_ON_SCREEN( l_U661[0] ))) AND (NOT (IS_CAR_ON_SCREEN( l_U712 )))))
                    {
                        DELETE_CAR( ref l_U712 );
                        DELETE_CHAR( ref l_U661[0] );
                        DELETE_CHAR( ref l_U661[1] );
                    }
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U661[0] );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U661[1] );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U712 );
                }
                l_U525 = 1;
                if (l_U481 < 6)
                {
                    l_U481++;
                }
            }
        }
    }
    if ((NOT (IS_CAR_DEAD( l_U711 ))) AND (l_U541 == 0))
    {
        if ((IS_CHAR_IN_CAR( l_U754, l_U711 )) AND (LOCATE_CAR_3D( l_U711, 966.30410000, -6.92950000, 23.09770000, 20, 20, 20, 0 )))
        {
            PRINT_HELP( "HELP5" );
            l_U541 = 1;
        }
    }
    if (l_U520 == 1)
    {
        sub_11349();
        sub_11841();
    }
    sub_21661();
    sub_37048();
    sub_42946();
    sub_25019();
    return;
}

void sub_56513(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_CAR_COORDINATES( (uParam0^), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    GET_CHAR_COORDINATES( l_U754, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = VDIST( uVar3, uVar6 );
    if (fVar9 > l_U497)
    {
        if (NOT (IS_CAR_DEAD( (uParam0^) )))
        {
            l_U503 = 1;
        }
    }
    return;
}

void sub_59320()
{
    float fVar2;

    if ((TIMERA() > 3000) AND ((IS_CHAR_SITTING_IN_ANY_CAR( l_U754 )) AND (l_U527 == 0)))
    {
        if ((NOT (sub_10310( l_U654 ))) AND ((NOT (IS_CAR_DEAD( l_U711 ))) AND (l_U579[0] == 0)))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                CLEAR_HELP();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 6, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 5, 1, ref l_U654, 6, 1 );
                }
                l_U579[0] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[1] == 0) AND ((l_U579[0] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 7, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 6, 1, ref l_U654, 6, 1 );
                }
                l_U579[1] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[2] == 0) AND ((l_U579[1] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 8, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 7, 1, ref l_U654, 6, 1 );
                }
                l_U579[2] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[8] == 0) AND ((l_U579[2] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 9, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 8, 1, ref l_U654, 6, 1 );
                }
                l_U579[8] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[3] == 0) AND ((l_U579[8] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 10, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 9, 1, ref l_U654, 6, 1 );
                }
                l_U579[3] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[4] == 0) AND ((l_U579[3] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 11, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 10, 1, ref l_U654, 6, 1 );
                }
                l_U579[4] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[5] == 0) AND ((l_U579[4] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 12, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 11, 1, ref l_U654, 6, 1 );
                }
                l_U579[5] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[6] == 0) AND ((l_U579[5] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 13, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 12, 1, ref l_U654, 6, 1 );
                }
                l_U579[6] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[9] == 0) AND ((l_U579[6] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 14, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 13, 1, ref l_U654, 6, 1 );
                }
                l_U579[9] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[7] == 0) AND ((l_U579[9] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 15, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    sub_9329( "R2_B2V2", 14, 1, ref l_U654, 6, 1 );
                }
                l_U579[7] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[10] == 0) AND ((l_U579[7] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 16, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    ;
                }
                l_U579[10] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[11] == 0) AND ((l_U579[10] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 17, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    ;
                }
                l_U579[11] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U579[12] == 0) AND ((l_U579[11] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                if (l_U506 == 1)
                {
                    sub_9329( "R2_B2V1", 18, 1, ref l_U654, 6, 1 );
                }
                else if (l_U507 == 1)
                {
                    ;
                }
                SETTIMERA( 0 );
                l_U579[12] = 1;
            }
        }
        if ((l_U579[12] == 1) AND (TIMERA() > 3000))
        {
            l_U527 = 1;
        }
    }
    if ((NOT (IS_CAR_DEAD( l_U711 ))) AND (l_U541 == 0))
    {
        if ((IS_CHAR_IN_CAR( l_U754, l_U711 )) AND (LOCATE_CAR_3D( l_U711, 966.30410000, -6.92950000, 23.09770000, 40, 40, 40, 0 )))
        {
            PRINT_HELP( "HELP5" );
            l_U541 = 1;
        }
    }
    if ((l_U527 == 1) || (l_U520 == 1))
    {
        sub_11349();
        sub_11841();
    }
    sub_21661();
    sub_25019();
    if ((DOES_CHAR_EXIST( l_U661[1] )) AND ((DOES_CHAR_EXIST( l_U661[0] )) AND (DOES_VEHICLE_EXIST( l_U712 ))))
    {
        sub_37048();
        sub_42946();
    }
    if ((l_U531 == 1) AND ((l_U513 == 1) AND ((l_U512 == 1) AND (NOT (IS_CAR_DEAD( l_U711 ))))))
    {
        if ((IS_CHAR_SITTING_IN_CAR( l_U754, l_U711 )) AND (LOCATE_CHAR_IN_CAR_3D( l_U754, l_U705._fU0, l_U705._fU4, l_U705._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )))
        {
            if (DOES_BLIP_EXIST( l_U676 ))
            {
                REMOVE_BLIP( l_U676 );
            }
            CLEAR_WANTED_LEVEL( l_U755 );
            SET_EVERYONE_IGNORE_PLAYER( l_U755, 1 );
            sub_6068( "MISSPASS" );
            SET_WIDESCREEN_BORDERS( 1 );
            SET_PLAYER_CONTROL( l_U755, 0 );
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                GET_CAR_SPEED( l_U711, ref fVar2 );
            }
            while (fVar2 > 0.50000000)
            {
                if (NOT (IS_CAR_DEAD( l_U711 )))
                {
                    GET_CAR_SPEED( l_U711, ref fVar2 );
                }
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U711 );
            }
            BEGIN_CAM_COMMANDS( ref l_U734 );
            CLEAR_WANTED_LEVEL( l_U755 );
            CREATE_CAM( 14, ref l_U730 );
            CREATE_CAM( 14, ref l_U731 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U711, 0.00000000, 3.50000000, 0.65000000, ref l_U693._fU0, ref l_U693._fU4, ref l_U693._fU8 );
            SET_CAM_POS( l_U730, l_U693._fU0, l_U693._fU4, l_U693._fU8 );
            SET_CAM_ROT( l_U730, 0.00000000, -0.00000000, 0.00000000 );
            SET_CAM_POS( l_U730, 839.34550000, -278.41570000, 16.66302000 );
            SET_CAM_ROT( l_U730, 2.92472100, 0.00000000, 61.30951000 );
            SET_CAM_POS( l_U731, l_U693._fU0, l_U693._fU4, l_U693._fU8 );
            SET_CAM_ROT( l_U731, 0.00000000, -0.00000000, 0.00000000 );
            l_U735 = 51;
            SET_CAM_FOV( l_U730, l_U735 );
            SET_CAM_ACTIVE( l_U730, 1 );
            SET_CAM_PROPAGATE( l_U730, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            CLEAR_AREA( l_U705._fU0, l_U705._fU4, l_U705._fU8, 10.00000000, 1 );
            CLEAR_AREA_OF_COPS( 829.26650000, -266.52460000, 14.46890000, 50.00000000 );
            CLEAR_AREA_OF_CARS( 829.26650000, -266.52460000, 14.46890000, 15.00000000 );
            if (DOES_BLIP_EXIST( l_U682 ))
            {
                PRINTSTRING( "\n\n\n    Remove Blip 4213    \n\n" );
                SET_ROUTE( l_U682, 0 );
                REMOVE_BLIP( l_U682 );
            }
            SETTIMERB( 0 );
            l_U481++;
        }
    }
    return;
}

void sub_62719()
{
    if (l_U528 == 0)
    {
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U620[0] == 0) AND (NOT (sub_10310( l_U654 )))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (DOES_BLIP_EXIST( l_U676 ))
                {
                    REMOVE_BLIP( l_U676 );
                }
                if (DOES_CHAR_EXIST( l_U661[0] ))
                {
                    DELETE_CHAR( ref l_U661[0] );
                }
                if (DOES_CHAR_EXIST( l_U661[1] ))
                {
                    DELETE_CHAR( ref l_U661[1] );
                }
                if (NOT (IS_CAR_DEAD( l_U712 )))
                {
                    DELETE_CAR( ref l_U712 );
                }
                LOCK_CAR_DOORS( l_U711, 2 );
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                sub_9329( "R2_END", 0, 1, ref l_U654, 8, 1 );
                while (sub_10310( l_U654 ))
                {
                    WAIT( 0 );
                    l_U735 -= 0.05000000;
                    SET_CAM_FOV( l_U730, l_U735 );
                }
                if (NOT (IS_CHAR_DEAD( l_U660 )))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U660, 1 );
                    TASK_LOOK_AT_CHAR( l_U660, l_U754, 30000, 0 );
                    TASK_LOOK_AT_CHAR( l_U754, l_U660, 30000, 0 );
                }
                sub_9329( "R2_END", 1, 1, ref l_U654, 8, 1 );
                SETTIMERA( 0 );
                l_U620[0] = 1;
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U620[1] == 0) AND ((l_U620[0] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                sub_9329( "R2_END", 2, 1, ref l_U654, 8, 1 );
                SETTIMERA( 0 );
                l_U620[1] = 1;
            }
            SET_CAM_PROPAGATE( l_U730, 0 );
            SET_CAM_ACTIVE( l_U731, 1 );
            SET_CAM_PROPAGATE( l_U731, 1 );
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U711, -1.20000000 + l_U757._fU0, 3.75000000 + l_U757._fU4, 0.45000000 + l_U757._fU8, ref l_U693._fU0, ref l_U693._fU4, ref l_U693._fU8 );
            }
            SET_CAM_POS( l_U731, l_U693._fU0, l_U693._fU4, l_U693._fU8 );
            l_U735 = 45;
            SET_CAM_FOV( l_U731, l_U735 );
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                POINT_CAM_AT_VEHICLE( l_U731, l_U711 );
                SET_CAM_POINT_OFFSET( l_U731, 0.80000000 + l_U760._fU0, l_U760._fU4, l_U760._fU8 );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U731, 1 );
            }
        }
        if ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U620[2] == 0) AND ((l_U620[1] == 1) AND (NOT (sub_10310( l_U654 ))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                CLEAR_PRINTS();
                sub_11424( ref l_U654, 0 );
                sub_6068( "MISSPASS" );
                while (NOT sub_6282())
                {
                    WAIT( 0 );
                }
                sub_9329( "R2_END", 3, 1, ref l_U654, 8, 1 );
                if ((NOT (IS_CHAR_DEAD( l_U660 ))) AND (NOT (IS_CAR_DEAD( l_U711 ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U737 );
                    TASK_CLEAR_LOOK_AT( 0 );
                    TASK_PLAY_ANIM( 0, "partial_incar_bye", "MISSPASS", 4, 0, 0, 0, 0, 0 );
                    TASK_LEAVE_CAR( 0, l_U711 );
                    TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_CAR( 0, l_U711, 1.00000000, 5.00000000, 0.00000000, 2, 10000 );
                    CLOSE_SEQUENCE_TASK( l_U737 );
                    TASK_PERFORM_SEQUENCE( l_U660, l_U737 );
                    CLEAR_SEQUENCE_TASK( l_U737 );
                }
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                SETTIMERA( 0 );
                l_U620[2] = 1;
            }
        }
        if ((TIMERA() > 6000) AND ((NOT (IS_CAR_DEAD( l_U711 ))) AND ((l_U620[9] == 0) AND ((l_U620[2] == 1) AND (NOT (sub_10310( l_U654 )))))))
        {
            if (IS_CHAR_IN_CAR( l_U754, l_U711 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U660 )))
                {
                    ;
                }
                SETTIMERA( 0 );
                SET_CAM_ACTIVE( l_U731, 0 );
                SET_CAM_PROPAGATE( l_U731, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_CAM( l_U730 );
                DESTROY_CAM( l_U731 );
                if (NOT (IS_CAR_DEAD( l_U711 )))
                {
                    FREEZE_CAR_POSITION( l_U711, 0 );
                }
                CLEAR_PRINTS();
                DELETE_CHAR( ref l_U660 );
                SET_WIDESCREEN_BORDERS( 0 );
                END_CAM_COMMANDS( ref l_U734 );
                SET_PLAYER_CONTROL( l_U755, 1 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U528 = 1;
                SETTIMERA( 0 );
                sub_916();
                l_U620[9] = 1;
            }
        }
        if (l_U620[9] == 0)
        {
            l_U735 -= 0.05000000;
            SET_CAM_FOV( l_U730, l_U735 );
        }
        if ((l_U620[9] == 0) AND ((IS_SCREEN_FADED_IN()) AND ((sub_20513()) AND (TIMERB() >= 1000))))
        {
            l_U528 = 1;
            sub_11424( ref l_U654, 0 );
            l_U620[9] = 1;
            l_U620[0] = 1;
            l_U620[1] = 1;
            l_U620[2] = 1;
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U711 )))
            {
                FREEZE_CAR_POSITION( l_U711, 0 );
            }
            CLEAR_PRINTS();
            DELETE_CHAR( ref l_U660 );
            SETTIMERA( 0 );
            SET_CAM_ACTIVE( l_U730, 0 );
            SET_CAM_PROPAGATE( l_U730, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U730 );
            SET_WIDESCREEN_BORDERS( 0 );
            END_CAM_COMMANDS( ref l_U734 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            WAIT( 1000 );
            LOAD_SCENE( l_U705._fU0, l_U705._fU4, l_U705._fU8 );
            DO_SCREEN_FADE_IN( 500 );
            WAIT( 500 );
            SET_PLAYER_CONTROL( l_U755, 1 );
            sub_916();
            SETTIMERA( 0 );
        }
    }
    if (l_U528 == 1)
    {
        CLEAR_HELP();
        LOCK_CAR_DOORS( l_U711, 1 );
        l_U481++;
    }
    return;
}

void sub_64675()
{
    l_U500 = 1;
    l_U481 = -1;
    return;
}

void sub_64714()
{
    if (DOES_CHAR_EXIST( l_U660 ))
    {
        if (IS_CHAR_INJURED( l_U660 ))
        {
            l_U501 = 1;
            l_U481 = -1;
        }
    }
    return;
}

void sub_64816()
{
    g_U21 = 50;
    sub_64832( 2 );
    UNLOCK_MISSION_NEWS_STORY( 2 );
    l_U502 = 0;
    sub_68036();
    return;
}

void sub_64832(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_64919( iParam0 ))
    {
        sub_65969( iParam0 );
    }
    return;
}

int sub_64919(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_64976( ref uVar3, 1, 0, 0 );
    sub_65588( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_9513( "\n ----------------------------------------------------------------" );
    sub_5740( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_9513( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_64976(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_65029( iParam0, uParam1, uParam2 );
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
        sub_65161( iParam0 + 0 );
    }
    return;
}

void sub_65029(int iParam0, int iParam1, int iParam2)
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
        sub_65161( iParam0 + 0 );
    }
    return;
}

void sub_65161(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_65192( iParam0->_fU4 )))
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

int sub_65192(unknown uParam0)
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

void sub_65588(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_65969(unknown uParam0)
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
        sub_66180( 20, 6, 16383, 16383, ref uVar4 );
        sub_66856( ref uVar4, 7 );
        sub_66887( ref uVar4, 0 );
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
        sub_66180( 20, 7, 9, 16383, ref uVar4 );
        sub_66856( ref uVar4, 7 );
        sub_66887( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_66180(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_66204( uParam0, 0, iParam4 + 0 );
    sub_66204( uParam1, 1, iParam4 + 0 );
    sub_66204( uParam2, 2, iParam4 + 0 );
    sub_66204( uParam3, 3, iParam4 + 0 );
    sub_66204( 0, 4, iParam4 + 0 );
    sub_66204( 1, 5, iParam4 + 0 );
    sub_66204( 65535, 6, iParam4 + 0 );
    sub_66204( 0, 12, iParam4 + 0 );
    sub_66204( 0, 11, iParam4 + 0 );
    sub_66204( 0, 14, iParam4 + 0 );
    sub_66204( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_66204( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_66204( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_66204(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_66856(int iParam0, unknown uParam1)
{
    sub_66204( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_66887(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_66927())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_67614( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_67413( iVar5 );
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

int sub_66927()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_66961( 5, g_U968[I] )) == 7)
        {
            sub_67413( I );
            return 1;
        }
    }
    return 0;
}

int sub_66961(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_67413(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_67486( 39 );
    return;
}

void sub_67486(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_67614(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_67675( uParam0, g_U968[Result] ))
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

int sub_67675(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_68036()
{
    sub_68045();
    return;
}

void sub_68045()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_68063();
    sub_68122( iVar2, iVar3, iVar4 );
    return;
}

void sub_68063()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_68122(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_68153( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_68153(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_68249( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_68249( ref cVar9 );
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
            sub_68249( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_68249( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_68249( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_68249( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_68826( iParam0, iVar7 );;;
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
                sub_69223( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_69223( 0, 4 );
            }
        }
    }
    if (NOT (sub_69312( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5815(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_5815() );
    }
    sub_2161();
    bVar27 = true;
    uVar28 = sub_68826( iParam0, iVar7 );
    uVar29 = sub_1618( iParam0 );
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
                sub_78688( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_79118();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_79203( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_79260( iParam0 );
                sub_79299( 0 );
                sub_2059( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_79407();
        }
    }
    if (bParam2)
    {
        sub_79118();
        sub_79495();
        sub_79299( 0 );
    }
    if (bParam3)
    {
        sub_79118();
        sub_79535();
        sub_79299( 0 );
        sub_2059( uVar29, 0 );
    }
    sub_1505();
    return;
}

void sub_68249(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_68826(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_2017( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_69223(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_69312(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_69520( uParam1 );
        break;
        case 1:
        bVar8 = sub_71598( uParam1 );
        break;
        case 2:
        bVar8 = sub_71824( uParam1 );
        break;
        case 3:
        bVar8 = sub_71974( uParam1 );
        break;
        case 4:
        bVar8 = sub_72252( uParam1 );
        break;
        case 5:
        bVar8 = sub_72555( uParam1 );
        break;
        case 6:
        bVar8 = sub_72754( uParam1 );
        break;
        case 7:
        bVar8 = sub_72980( uParam1 );
        break;
        case 8:
        bVar8 = sub_73215( uParam1 );
        break;
        case 9:
        bVar8 = sub_73590( uParam1 );
        break;
        case 10:
        bVar8 = sub_73837( uParam1 );
        break;
        case 11:
        bVar8 = sub_73976( uParam1 );
        break;
        case 12:
        bVar8 = sub_74275( uParam1 );
        break;
        case 13:
        bVar8 = sub_74503( uParam1 );
        break;
        case 14:
        bVar8 = sub_74790( uParam1 );
        break;
        case 15:
        bVar8 = sub_75072( uParam1 );
        break;
        case 16:
        bVar8 = sub_75354( uParam1 );
        break;
        case 17:
        bVar8 = sub_75555( uParam1 );
        break;
        case 18:
        bVar8 = sub_75628( uParam1 );
        break;
        case 19:
        bVar8 = sub_75842( uParam1 );
        break;
        case 20:
        bVar8 = sub_76095( uParam1 );
        break;
        case 21:
        bVar8 = sub_76342( uParam1 );
        break;
        case 22:
        bVar8 = sub_76543( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_71203( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_68826( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_76866( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_69520(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_69799( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_69799( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_69799( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_69799( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_69799( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_69799( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_69799( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_69799( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_69799( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_69799( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_69799( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_69799( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_69799( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_69799( iVar3, 0, 3, 1, 0, 0 );
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
        sub_69799( iVar3, 0, sub_71081(), sub_71347(), 0, 0 );
        break;
        default:
        sub_71506( "Friend 1", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Friend 1", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_69799(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_69810( uParam1 );
    sub_69984( uParam0, 0, uParam2 );
    sub_69984( uParam0, 1, uParam3 );
    sub_69984( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_68063();
    return;
}

void sub_69810(unknown uParam0)
{
    ADD_SCORE( sub_5815(), uParam0 );
    sub_69835( uParam0 );
    return;
}

void sub_69835(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2017( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_69984(unknown uParam0, int iParam1, int iParam2)
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
        sub_70141( uParam0 );
    }
    return;
}

void sub_70141(unknown uParam0)
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

int sub_71081()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_71203( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_71203(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_71347()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_71203( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_71506(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_71598(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_69799( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_71506( "Contact 2", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 2", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71824(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_69799( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_71506( "Girl 3", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Girl 3", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_71974(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_69799( iVar3, 0, sub_71081(), sub_71347(), 0, 0 );
        break;
        default:
        sub_71506( "Friend 4", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Friend 4", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_72252(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_69799( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_69799( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_69799( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_69799( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_71506( "Contact 5", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 5", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_72555(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_71506( "Contact 7", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 7", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_72754(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_69799( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_71506( "Contact 7b", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 7b", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_72980(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_69799( iVar3, 0, sub_71081(), sub_71347(), 0, 0 );
        break;
        default:
        sub_71506( "Friend 8", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Friend 8", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_73215(unknown uParam0)
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
        sub_69799( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_69799( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_69799( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_69799( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_69799( iVar3, 0, sub_71081(), sub_71347(), 0, 0 );
        break;
        default:
        sub_71506( "Friend 9", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Friend 9", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_73590(unknown uParam0)
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
        sub_69799( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_69799( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_69799( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_71506( "Contact 10", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_71506( "Contact 10", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_73837(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_71506( "Girl 11", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Girl 11", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_73976(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_69799( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_69799( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_69799( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_69799( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_69799( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_71506( "Contact 12", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 12", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_74275(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_69799( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_71506( "Contact 13", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 13", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_74503(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_69799( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_69799( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_69799( iVar3, 0, sub_71081(), sub_71347(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_71506( "Friend 15", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Friend 15", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_74790(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_69799( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_69799( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_69799( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_71506( "Contact 16", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 16", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_75072(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_69799( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_69799( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_69799( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_71506( "Contact 18", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 18", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_75354(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_71506( "Contact 19", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 19", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_75555(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_71506( "Girl 20", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_75628(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_71506( "Contact 21", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 21", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_75842(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_69799( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_69799( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_71506( "Contact 22", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 22", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_76095(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_69799( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_69799( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_69799( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_71506( "Contact 24", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 24", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_76342(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_69799( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_69799( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_69799( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_71506( "Contact 25", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_71506( "Contact 25", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_76543(unknown uParam0)
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
        sub_69799( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_71506( "Girl 26", 1 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_71506( "Girl 26", 0 );
        sub_69799( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_76866(int iParam0, int iParam1)
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
    if (sub_76914( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_77645( iParam1 );
    }
    return;
}

int sub_76914(int iParam0, int iParam1)
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
            sub_77054( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_77054(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_77236( 0 );
    return;
}

void sub_77236(boolean bParam0)
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
        sub_77491();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_77491()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_77645(int iParam0)
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
        sub_77978( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_77978( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_77978( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_77978( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_77978( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_77978( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_77978( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_77978( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_77978( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_77978( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_77978( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_77978( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_77978( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_77978( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_77978( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_77978( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_77978( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_77978( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_77978( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_77978(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_78688(unknown uParam0, unknown uParam1)
{
    sub_78707( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_78707(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_79118()
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

int sub_79203(int iParam0, int iParam1)
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

void sub_79260(unknown uParam0)
{
    sub_1404();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_79299(unknown uParam0)
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

void sub_79407()
{
    sub_79416();
    return;
}

void sub_79416()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_79495()
{
    sub_79416();
    return;
}

void sub_79535()
{
    sub_79416();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_79655()
{
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5815(), 150 );
        SAY_AMBIENT_SPEECH( l_U754, "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_548();
    sub_667();
    while (sub_747())
    {
        WAIT( 0 );
    }
    if (l_U536 == 1)
    {
        sub_812( 0 );
    }
    g_U91._fU40 = 0;
    sub_916();
    l_U502 = 0;
    sub_79799();
    return;
}

void sub_79799()
{
    sub_79808();
    return;
}

void sub_79808()
{
    int iVar2;

    iVar2 = 0;
    sub_79822( iVar2 );
    sub_2152( iVar2 );
    return;
}

void sub_79822(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_5815(), 150 );
    CLEAR_HELP();
    sub_976( uParam0 );
    return;
}

